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
/* Keymap 0:  Number Pad Keys
 * ,---------------.
 * |FN2|   |   |Bks|
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
        FN2, NO,  NO,  BSPC,  \
        NLCK,PSLS,PAST,PMNS,  \
        P7,  P8,  P9,         \
        P4,  P5,  P6,  PPLS,  \
        P1,  P2,  P3,         \
        P0,       PDOT,PENT), \
/* Keymap 1:  Media Keys
 * ,---------------.
 * |   |   |   |Mut|
 * `---------------'
 * ,---------------.
 * |   |   |   |V- |
 * |---------------|
 * |   |   |   |   |
 * |------------V+ |
 * |   |   |   |   |
 * |---------------|
 * |   |   |   |   |
 * |------------   |
 * |       |   |   |
 * `---------------'
 */
    KEYMAP( \
        TRNS,TRNS,TRNS,MUTE,  \
        TRNS,TRNS,TRNS,VOLD,  \
        TRNS,TRNS,TRNS,       \
        TRNS,TRNS,TRNS,VOLU,  \
        TRNS,TRNS,TRNS,       \
        TRNS,     TRNS,TRNS), \
/* Keymap 2:  Layer Keys
 * ,---------------.
 * |   |   |   |FN3|
 * `---------------'
 * ,---------------.
 * |   |   |   |   |
 * |---------------|
 * |   |   |   |   |
 * |------------   |
 * |   |   |   |   |
 * |---------------|
 * |   |   |   |   |
 * |------------FN1|
 * |FN0    |   |   |
 * `---------------'
 */
    KEYMAP( \
        TRNS,TRNS,TRNS,FN3,   \
        TRNS,TRNS,TRNS,TRNS,  \
        TRNS,TRNS,TRNS,       \
        TRNS,TRNS,TRNS,TRNS,  \
        TRNS,TRNS,TRNS,       \
        FN0,      TRNS,FN1 )
};


static const uint16_t PROGMEM fn_actions[] = {
    [0] = ACTION_DEFAULT_LAYER_SET(0),
    [1] = ACTION_DEFAULT_LAYER_SET(1),
    [2] = ACTION_LAYER_MOMENTARY(2),
    [3] = ACTION_FUNCTION(TEENSY_KEY),
};
