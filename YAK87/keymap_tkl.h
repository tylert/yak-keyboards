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
/* Keymap 0:  Qwerty Keys
 * ,---.   ,---------------. ,---------------. ,---------------. ,-----------.
 * |ESC|   |F1 |F2 |F3 |F4 | |F5 |F6 |F7 |F8 | |F9 |F10|F11|F12| |PrS|ScL|Pau|
 * `---'   `---------------' `---------------' `---------------' `-----------'
 * ,-----------------------------------------------------------. ,-----------.
 * |`  |  1|  2|  3|  4|  5|  6|  7|  8|  9|  0|  -|  =|Backsp | |INS|Hom|PgU|
 * |-----------------------------------------------------------| |-----------|
 * |TAB  |  Q|  W|  E|  R|  T|  Y|  U|  I|  O|  P|  [|  ]|    \| |DEL|END|PgD|
 * |-----------------------------------------------------------| `-----------'
 * |CAPS  |  A|  S|  D|  F|  G|  H|  J|  K|  L|  ;|  '|Enter   |
 * |-----------------------------------------------------------|     ,---.
 * |Shift   |  Z|  X|  C|  V|  B|  N|  M|  ,|  .|  /|Shift     |     |UP |
 * |-----------------------------------------------------------| ,-----------.
 * |Ctl|Gui|Alt|          Space                |Alt|Gui|FN5|Ctl| |Lft|Dwn|Rgt|
 * `-----------------------------------------------------------' `-----------'
 */
    KEYMAP( \
        ESC,      F1,  F2,  F3,  F4,  F5,  F6,  F7,  F8,  F9,  F10, F11, F12, PSCR,SLCK,PAUS,  \
        GRV, 1,   2,   3,   4,   5,   6,   7,   8,   9,   0,   MINS,EQL, BSPC,INS, HOME,PGUP,  \
        TAB, Q,   W,   E,   R,   T,   Y,   U,   I,   O,   P,   LBRC,RBRC,BSLS,DEL, END, PGDN,  \
        CAPS,A,   S,   D,   F,   G,   H,   J,   K,   L,   SCLN,QUOT,     ENT,                  \
        LSFT,     Z,   X,   C,   V,   B,   N,   M,   COMM,DOT, SLSH,     RSFT,     UP,         \
        LCTL,LGUI,LALT,               SPC,                RALT,RGUI,FN5, RCTL,LEFT,DOWN,RGHT), \
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
        TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,  \
        TRNS,TRNS,TRNS,F,   P,   G,   J,   L,   U,   Y,   ;,   TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,  \
        TRNS,TRNS,R,   S,   T,   D,   TRNS,N,   E,   I,   O,   TRNS,     TRNS,                 \
        TRNS,     TRNS,TRNS,TRNS,TRNS,TRNS,K,   TRNS,TRNS,TRNS,TRNS,     TRNS,     TRNS,       \
        TRNS,TRNS,TRNS,               TRNS,               TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS), \
/* Keymap 2:  Dvorak Keys
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
        TRNS,QUOT,COMM,DOT, TRNS,Y,   F,   G,   C,   R,   L,   SLSH,EQL, TRNS,TRNS,TRNS,TRNS,  \
        TRNS,TRNS,O,   E,   U,   I,   D,   H,   T,   N,   S,   MINS,     TRNS,                 \
        TRNS,     SCLN,Q,   J,   K,   X,   B,   TRNS,W,   V,   Z,        TRNS,     TRNS,       \
        TRNS,TRNS,TRNS,               TRNS,               TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS), \
/* Keymap 3:  CAPS Lock and Ctrl Keys
 * ,---.   ,---------------. ,---------------. ,---------------. ,-----------.
 * |   |   |   |   |   |   | |   |   |   |   | |   |   |   |   | |   |   |   |
 * `---'   `---------------' `---------------' `---------------' `-----------'
 * ,-----------------------------------------------------------. ,-----------.
 * |   |   |   |   |   |   |   |   |   |   |   |   |   |       | |   |   |   |
 * |-----------------------------------------------------------| |-----------|
 * |     |   |   |   |   |   |   |   |   |   |   |   |   |     | |   |   |   |
 * |-----------------------------------------------------------| `-----------'
 * |Ctrl  |   |   |   |   |   |   |   |   |   |   |   |        |
 * |-----------------------------------------------------------|     ,---.
 * |        |   |   |   |   |   |   |   |   |   |   |          |     |   |
 * |-----------------------------------------------------------| ,-----------.
 * |CAP|   |   |                               |   |   |   |   | |   |   |   |
 * `-----------------------------------------------------------' `-----------'
 */
    KEYMAP( \
        TRNS,     TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,  \
        TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,  \
        TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,  \
        LCTL,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,     TRNS,                 \
        TRNS,     TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,     TRNS,     TRNS,       \
        CAPS,TRNS,TRNS,               TRNS,               TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS), \
/* Keymap 4:  macOS Keys
 * ,---.   ,---------------. ,---------------. ,---------------. ,-----------.
 * |   |   |   |   |   |   | |   |   |   |   | |   |   |   |   | |   |   |   |
 * `---'   `---------------' `---------------' `---------------' `-----------'
 * ,-----------------------------------------------------------. ,-----------.
 * |   |   |   |   |   |   |   |   |   |   |   |   |   |       | |   |   |   |
 * |-----------------------------------------------------------| |-----------|
 * |     |   |   |   |   |   |   |   |   |   |   |   |   |     | |   |   |   |
 * |-----------------------------------------------------------| `-----------'
 * |      |   |   |   |   |   |   |   |   |   |   |   |        |
 * |-----------------------------------------------------------|     ,---.
 * |        |   |   |   |   |   |   |   |   |   |   |          |     |   |
 * |-----------------------------------------------------------| ,-----------.
 * |   |   |   |                               |   |   |   |   | |   |   |   |
 * `-----------------------------------------------------------' `-----------'
 */
    KEYMAP( \
        TRNS,     TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,  \
        TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,  \
        TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,  \
        TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,     TRNS,                 \
        TRNS,     TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,     TRNS,     TRNS,       \
        TRNS,TRNS,TRNS,               TRNS,               TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS), \
/* Keymap 5:  Media and Layer Select Keys
 * ,---.   ,---------------. ,---------------. ,---------------. ,-----------.
 * |FN6|   |   |   |   |   | |CAL|   |   |   | |   |PWR|Slp|Wak| |Prv|Nxt|Mut|
 * `---'   `---------------' `---------------' `---------------' `-----------'
 * ,-----------------------------------------------------------. ,-----------.
 * |   |   |   |   |   |   |   |   |   |   |   |   |   |       | |Ply|Ffd|V+ |
 * |-----------------------------------------------------------| |-----------|
 * |     |FN0|   |   |   |   |   |   |   |   |   |   |   |     | |Stp|Rwd|V- |
 * |-----------------------------------------------------------| `-----------'
 * |FN3   |   |   |FN1|   |   |   |   |   |   |   |   |        |
 * |-----------------------------------------------------------|     ,---.
 * |        |   |   |FN2|   |   |   |   |   |   |   |          |     |   |
 * |-----------------------------------------------------------| ,-----------.
 * |   |FN4|   |                               |   |   |   |   | |   |   |   |
 * `-----------------------------------------------------------' `-----------'
 */
    KEYMAP( \
        FN6,      TRNS,TRNS,TRNS,TRNS,CALC,TRNS,TRNS,TRNS,TRNS,PWR, SLEP,WAKE,MPRV,MNXT,MUTE,  \
        TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,MPLY,MFFD,VOLU,  \
        TRNS,FN0, TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,MSTP,MRWD,VOLD,  \
        FN3, TRNS,TRNS,FN1, TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,     TRNS,                 \
        TRNS,     TRNS,FN2, TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,     TRNS,     TRNS,       \
        TRNS,FN4, TRNS,               TRNS,               TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS), \
};


static const uint16_t PROGMEM fn_actions[] = {
    [0] = ACTION_DEFAULT_LAYER_SET(0),
    [1] = ACTION_DEFAULT_LAYER_SET(1),
    [2] = ACTION_DEFAULT_LAYER_SET(2),
    [3] = ACTION_LAYER_TOGGLE(3),
    [4] = ACTION_LAYER_TOGGLE(4),
    [5] = ACTION_LAYER_MOMENTARY(5),
    [6] = ACTION_FUNCTION(TEENSY_KEY),
};
