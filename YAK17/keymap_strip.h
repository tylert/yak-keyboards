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
/* Keymap 0: Default
 * ,-------------------------------------------------------------------.
 * |   |   |   |   |   |   |   |   |   |   |   |   |   |   |   |   |   |
 * `-------------------------------------------------------------------'
 */
    KEYMAP( \
        FN0, F13, F14, F15, F16, F17, F18, F19, F20, F21, F22, F23, F24, P4,  P5,  P6,  P7) \
/* Overlay 1: Other
 * ,-------------------------------------------------------------------.
 * |   |   |   |   |   |   |   |   |   |   |   |   |   |   |   |   |   |
 * `-------------------------------------------------------------------'
 */
    KEYMAP( \
        TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS)
};


static const uint16_t PROGMEM fn_actions[] = {
    [0] = ACTION_LAYER_MOMENTARY(1)
};
