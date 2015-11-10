/*
Copyright 2015 Tyler Tidman <tyler.tidman@draak.ca>

This program is free software: you can redistribute it and/or modify
it under the terms of the GNU General Public License as published by
the Free Software Foundation, either version 2 of the License, or
(at your option) any later version.

This program is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
GNU General Public License for more details.

You should have received a copy of the GNU General Public License
along with this program.  If not, see <http://www.gnu.org/licenses/>.
*/


#include <stdint.h>
#include <stdbool.h>
#include <avr/io.h>
#include <util/delay.h>
#include "print.h"
#include "debug.h"
#include "util.h"
#include "matrix.h"

#ifndef DEBOUNCE
#define DEBOUNCE 5
#endif
static uint8_t debouncing = DEBOUNCE;

/* matrix state(1:on, 0:off) */
static matrix_row_t matrix[MATRIX_ROWS];
static matrix_row_t matrix_debouncing[MATRIX_ROWS];

static uint8_t read_cols(void);
static void init_cols(void);
static void unselect_rows(void);
static void select_row(uint8_t row);


inline
uint8_t matrix_rows(void)
{
    return MATRIX_ROWS;
}


inline
uint8_t matrix_cols(void)
{
    return MATRIX_COLS;
}


void matrix_init(void)
{
    unselect_rows();
    init_cols();

    // Initialize matrix state: all keys off.
    for (uint8_t row = 0; row < MATRIX_ROWS; row++) {
        matrix[row] = 0;
        matrix_debouncing[row] = 0;
    }
}


uint8_t matrix_scan(void)
{
    for (uint8_t row = 0; row < MATRIX_ROWS; row++) {
        select_row(row);
        _delay_us(3);  // without this wait read unstable value
        uint8_t cols = read_cols();
        if (matrix_debouncing[row] != cols) {
            matrix_debouncing[row] = cols;
            if (debouncing) {
                debug("bounce!: "); debug_hex(debouncing); debug("\n");
            }
            debouncing = DEBOUNCE;
        }
        unselect_rows();
    }

    if (debouncing) {
        if (--debouncing) {
            _delay_ms(1);
        } else {
            for (uint8_t row = 0; row < MATRIX_ROWS; row++) {
                matrix[row] = matrix_debouncing[row];
            }
        }
    }

    return 1;
}


bool matrix_is_modified(void)
{
    if (debouncing) return false;
    return true;
}


inline
bool matrix_is_on(uint8_t row, uint8_t col)
{
    return (matrix[row] & ((matrix_row_t)1<<col));
}


inline
matrix_row_t matrix_get_row(uint8_t row)
{
    return matrix[row];
}


void matrix_print(void)
{
    print("\nr/c 0123456789ABCDEF\n");
    for (uint8_t row = 0; row < MATRIX_ROWS; row++) {
        xprintf("%02X: %032lb\n", row, bitrev32(matrix_get_row(row)));
    }
}


uint8_t matrix_key_count(void)
{
    uint8_t count = 0;
    for (uint8_t row = 0; row < MATRIX_ROWS; row++) {
        count += bitpop16(matrix[row]);
    }
    return count;
}


/* Column pin configuration
 * col: 0   1   2   3   4   5   6   7   8   9   10  11  12  13
 * pin: F0  F1  E6  C7  C6  B6  D4  B1  B0  B5  B4  D7  D6  B3  (Rev.A)
 * pin:                                 B7                      (Rev.B)
 */
static void  init_cols(void)
{
    // Input with pull-up(DDR:0, PORT:1)
    DDRF  &= ~(1<<0 | 1<<1);
    PORTF |=  (1<<0 | 1<<1);
    DDRE  &= ~(1<<6);
    PORTE |=  (1<<6);
    DDRD  &= ~(1<<7 | 1<<6 | 1<<4);
    PORTD |=  (1<<7 | 1<<6 | 1<<4);
    DDRC  &= ~(1<<7 | 1<<6);
    PORTC |=  (1<<7 | 1<<6);
    DDRB  &= ~(1<<7 | 1<<6 | 1<< 5 | 1<<4 | 1<<3 | 1<<1 | 1<<0);
    PORTB |=  (1<<7 | 1<<6 | 1<< 5 | 1<<4 | 1<<3 | 1<<1 | 1<<0);
}


static matrix_row_t read_cols(void)
{
    return (PINF&(1<<0) ? 0 : (1<<0)) |
           (PINF&(1<<1) ? 0 : (1<<1)) |
           (PINE&(1<<6) ? 0 : (1<<2)) |
           (PINC&(1<<7) ? 0 : (1<<3)) |
           (PINC&(1<<6) ? 0 : (1<<4)) |
           (PINB&(1<<6) ? 0 : (1<<5)) |
           (PIND&(1<<4) ? 0 : (1<<6)) |
           (PINB&(1<<1) ? 0 : (1<<7)) |
           ((PINB&(1<<0) && PINB&(1<<7)) ? 0 : (1<<8)) |     // Rev.A and B
           (PINB&(1<<5) ? 0 : (1<<9)) |
           (PINB&(1<<4) ? 0 : (1<<10)) |
           (PIND&(1<<7) ? 0 : (1<<11)) |
           (PIND&(1<<6) ? 0 : (1<<12)) |
           (PINB&(1<<3) ? 0 : (1<<13));
}


/* Row pin configuration
 * row: 0   1   2   3   4
 * pin: D0  D1  D2  D3  D5
 */
static void unselect_rows(void)
{
    // Hi-Z(DDR:0, PORT:0) to unselect
    DDRD  &= ~0b00101111;
    PORTD &= ~0b00101111;
}


static void select_row(uint8_t row)
{
    // Output low(DDR:1, PORT:0) to select
    switch (row) {
        case 0:
            DDRD  |= (1<<0);
            PORTD &= ~(1<<0);
            break;
        case 1:
            DDRD  |= (1<<1);
            PORTD &= ~(1<<1);
            break;
        case 2:
            DDRD  |= (1<<2);
            PORTD &= ~(1<<2);
            break;
        case 3:
            DDRD  |= (1<<3);
            PORTD &= ~(1<<3);
            break;
        case 4:
            DDRD  |= (1<<5);
            PORTD &= ~(1<<5);
            break;
    }
}
