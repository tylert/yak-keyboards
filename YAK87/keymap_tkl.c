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


#include "keymap_tkl.h"


const uint8_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
/* Keymap 0:  Qwerty and common Keys
 * ,---.   ,---------------. ,---------------. ,---------------. ,-----------.
 * |Esc|   |F1 |F2 |F3 |F4 | |F5 |F6 |F7 |F8 | |F9 |F10|F11|F12| |PrS|ScL|Pau|
 * `---'   `---------------' `---------------' `---------------' `-----------'
 * ,-----------------------------------------------------------. ,-----------.
 * |`  |  1|  2|  3|  4|  5|  6|  7|  8|  9|  0|  -|  =|Backsp | |Ins|Hom|PgU|
 * |-----------------------------------------------------------| |-----------|
 * |Tab  |  Q|  W|  E|  R|  T|  Y|  U|  I|  O|  P|  [|  ]|    \| |Del|End|PgD|
 * |-----------------------------------------------------------| `-----------'
 * |Caps  |  A|  S|  D|  F|  G|  H|  J|  K|  L|  ;|  '|Enter   |
 * |-----------------------------------------------------------|     ,---.
 * |Shift   |  Z|  X|  C|  V|  B|  N|  M|  ,|  .|  /|Shift     |     |Up |
 * |-----------------------------------------------------------| ,-----------.
 * |Ctl|Gui|Alt|          Space                |Alt|Gui|Fn4|Ctl| |Lft|Dwn|Rgt|
 * `-----------------------------------------------------------' `-----------'
 */
    KEYMAP( \
        ESC,      F1,  F2,  F3,  F4,  F5,  F6,  F7,  F8,  F9,  F10, F11, F12, PSCR,SLCK,PAUS,  \
        GRV, 1,   2,   3,   4,   5,   6,   7,   8,   9,   0,   MINS,EQL, BSPC,INS, HOME,PGUP,  \
        TAB, Q,   W,   E,   R,   T,   Y,   U,   I,   O,   P,   LBRC,RBRC,BSLS,DEL, END, PGDN,  \
        CAPS,A,   S,   D,   F,   G,   H,   J,   K,   L,   SCLN,QUOT,     ENT,                  \
        LSFT,     Z,   X,   C,   V,   B,   N,   M,   COMM,DOT, SLSH,     RSFT,     UP,         \
        LCTL,LGUI,LALT,               SPC,                RALT,RGUI,FN4, RCTL,LEFT,DOWN,RGHT), \
/* Keymap 1:  Colemak Keys
 * ,---.   ,---------------. ,---------------. ,---------------. ,-----------.
 * |   |   |   |   |   |   | |   |   |   |   | |   |   |   |   | |   |   |   |
 * `---'   `---------------' `---------------' `---------------' `-----------'
 * ,-----------------------------------------------------------. ,-----------.
 * |   |   |   |   |   |   |   |   |   |   |   |  -|  =|       | |   |   |   |
 * |-----------------------------------------------------------| |-----------|
 * |     |  Q|  W|  F|  P|  G|  J|  L|  U|  Y|  ;|  [|  ]|     | |   |   |   |
 * |-----------------------------------------------------------| `-----------'
 * |      |  A|  R|  S|  T|  D|  H|  N|  E|  I|  O|  '|        |
 * |-----------------------------------------------------------|     ,---.
 * |        |  Z|  X|  C|  V|  B|  K|  M|  ,|  .|  /|          |     |   |
 * |-----------------------------------------------------------| ,-----------.
 * |   |   |   |                               |   |   |   |   | |   |   |   |
 * `-----------------------------------------------------------' `-----------'
 */
    KEYMAP( \
        TRNS,     TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,  \
        TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,MINS,EQL, TRNS,TRNS,TRNS,TRNS,  \
        TRNS,Q,   W,   F,   P,   G,   J,   L,   U,   Y,   SCLN,LBRC,RBRC,TRNS,TRNS,TRNS,TRNS,  \
        TRNS,A,   R,   S,   T,   D,   H,   N,   E,   I,   O,   QUOT,     TRNS,                 \
        TRNS,     Z,   X,   C,   V,   B,   K,   M,   COMM,DOT, SLSH,     TRNS,     TRNS,       \
        TRNS,TRNS,TRNS,               TRNS,               TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS), \
/* Keymap 2:  Workman Keys
 * ,---.   ,---------------. ,---------------. ,---------------. ,-----------.
 * |   |   |   |   |   |   | |   |   |   |   | |   |   |   |   | |   |   |   |
 * `---'   `---------------' `---------------' `---------------' `-----------'
 * ,-----------------------------------------------------------. ,-----------.
 * |   |   |   |   |   |   |   |   |   |   |   |  -|  =|       | |   |   |   |
 * |-----------------------------------------------------------| |-----------|
 * |     |  Q|  D|  R|  W|  B|  J|  F|  U|  P|  ;|  [|  ]|     | |   |   |   |
 * |-----------------------------------------------------------| `-----------'
 * |      |  A|  S|  H|  T|  G|  Y|  N|  E|  O|  I|  '|        |
 * |-----------------------------------------------------------|     ,---.
 * |        |  Z|  X|  M|  C|  V|  K|  L|  ,|  .|  /|          |     |   |
 * |-----------------------------------------------------------| ,-----------.
 * |   |   |   |                               |   |   |   |   | |   |   |   |
 * `-----------------------------------------------------------' `-----------'
 */
    KEYMAP( \
        TRNS,     TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,  \
        TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,MINS,EQL, TRNS,TRNS,TRNS,TRNS,  \
        TRNS,Q,   D,   R,   W,   B,   J,   F,   U,   P,   SCLN,LBRC,RBRC,TRNS,TRNS,TRNS,TRNS,  \
        TRNS,A,   S,   H,   T,   G,   Y,   N,   E,   O,   I,   QUOT,     TRNS,                 \
        TRNS,     Z,   X,   M,   C,   V,   K,   L,   COMM,DOT, SLSH,     TRNS,     TRNS,       \
        TRNS,TRNS,TRNS,               TRNS,               TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS), \
/* Keymap 3:  Dvorak Keys
 * ,---.   ,---------------. ,---------------. ,---------------. ,-----------.
 * |   |   |   |   |   |   | |   |   |   |   | |   |   |   |   | |   |   |   |
 * `---'   `---------------' `---------------' `---------------' `-----------'
 * ,-----------------------------------------------------------. ,-----------.
 * |   |   |   |   |   |   |   |   |   |   |   |  [|  ]|       | |   |   |   |
 * |-----------------------------------------------------------| |-----------|
 * |     |  '|  ,|  .|  P|  Y|  F|  G|  C|  R|  L|  /|  =|     | |   |   |   |
 * |-----------------------------------------------------------| `-----------'
 * |      |  A|  O|  E|  U|  I|  D|  H|  T|  N|  S|  -|        |
 * |-----------------------------------------------------------|     ,---.
 * |        |  ;|  Q|  J|  K|  X|  B|  M|  W|  V|  Z|          |     |   |
 * |-----------------------------------------------------------| ,-----------.
 * |   |   |   |                               |   |   |   |   | |   |   |   |
 * `-----------------------------------------------------------' `-----------'
 */
    KEYMAP( \
        TRNS,     TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,  \
        TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,LBRC,RBRC,TRNS,TRNS,TRNS,TRNS,  \
        TRNS,QUOT,COMM,DOT, P,   Y,   F,   G,   C,   R,   L,   SLSH,EQL, TRNS,TRNS,TRNS,TRNS,  \
        TRNS,A,   O,   E,   U,   I,   D,   H,   T,   N,   S,   MINS,     TRNS,                 \
        TRNS,     SCLN,Q,   J,   K,   X,   B,   M,   W,   V,   Z,        TRNS,     TRNS,       \
        TRNS,TRNS,TRNS,               TRNS,               TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS), \
/* Keymap 4:  Media and Layer Select Keys
 * ,---.   ,---------------. ,---------------. ,---------------. ,-----------.
 * |Fn5|   |   |   |   |   | |Cal|   |   |   | |   |Pwr|Slp|Wak| |Prv|Nxt|Mut|
 * `---'   `---------------' `---------------' `---------------' `-----------'
 * ,-----------------------------------------------------------. ,-----------.
 * |   |   |   |   |   |   |   |   |   |   |   |   |   |       | |Rwd|Ffd|V+ |
 * |-----------------------------------------------------------| |-----------|
 * |     |Fn0|Fn2|   |   |   |   |   |   |   |   |   |   |     | |Stp|Ply|V- |
 * |-----------------------------------------------------------| `-----------'
 * |      |   |   |Fn3|   |   |   |   |   |   |   |   |        |
 * |-----------------------------------------------------------|     ,---.
 * |        |   |   |Fn1|   |   |   |   |   |   |   |          |     |   |
 * |-----------------------------------------------------------| ,-----------.
 * |   |   |   |                               |   |   |   |   | |   |   |   |
 * `-----------------------------------------------------------' `-----------'
 */
    KEYMAP( \
        FN5,      TRNS,TRNS,TRNS,TRNS,CALC,TRNS,TRNS,TRNS,TRNS,PWR, SLEP,WAKE,MPRV,MNXT,MUTE,  \
        TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,MRWD,MFFD,VOLU,  \
        TRNS,FN0, FN2, TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,MSTP,MPLY,VOLD,  \
        TRNS,TRNS,TRNS,FN3, TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,     TRNS,                 \
        TRNS,     TRNS,FN1, TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,     TRNS,     TRNS,       \
        TRNS,TRNS,TRNS,               TRNS,               TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS), \
};


const uint16_t PROGMEM fn_actions[] = {
    [0] = ACTION_DEFAULT_LAYER_SET(0),
    [1] = ACTION_DEFAULT_LAYER_SET(1),
    [2] = ACTION_DEFAULT_LAYER_SET(2),
    [3] = ACTION_DEFAULT_LAYER_SET(3),
    [4] = ACTION_LAYER_MOMENTARY(4),
    [5] = ACTION_FUNCTION(TEENSY_KEY),
};
