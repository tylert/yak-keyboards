/*
Copyright 2015-2017 Tyler Tidman <tyler.tidman@draak.ca>

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


static const uint8_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
/* Keymap 0:  Number Pad
 * ,---------------.
 * |FN1|   |   |Bks|
 * `---------------'
 * ,---------------.
 * |Num|/  |*  |-  |
 * |---------------|
 * |7  |8  |9  |   |
 * |------------+  |
 * |4  |5  |6  |   |
 * |---------------|
 * |1  |2  |3  |   |
 * |------------ENT|
 * |0      |.  |   |
 * `---------------'
 */
    KEYMAP( \
        FN1, NO,  NO,  BSPC,  \
        NLCK,PSLS,PAST,PMNS,  \
        P7,  P8,  P9,         \
        P4,  P5,  P6,  PPLS,  \
        P1,  P2,  P3,         \
        P0,       PDOT,PENT), \
/* Keymap 1:  Other
 * ,---------------.
 * |   |   |   |   |
 * `---------------'
 * ,---------------.
 * |   |   |   |   |
 * |---------------|
 * |   |   |   |   |
 * |------------   |
 * |   |   |   |   |
 * |---------------|
 * |   |   |   |   |
 * |------------   |
 * |FN0    |   |   |
 * `---------------'
 */
    KEYMAP( \
        TRNS,TRNS,TRNS,TRNS,  \
        TRNS,TRNS,TRNS,TRNS,  \
        TRNS,TRNS,TRNS,       \
        TRNS,TRNS,TRNS,TRNS,  \
        TRNS,TRNS,TRNS,       \
        FN0,      TRNS,TRNS)
};


static const uint16_t PROGMEM fn_actions[] = {
    [0] = ACTION_FUNCTION(TEENSY_KEY),
    [1] = ACTION_LAYER_MOMENTARY(1)
};
