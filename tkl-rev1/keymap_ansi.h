/*
Copyright 2016 Tyler Tidman <tyler.tidman@draak.ca>

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
/* Keymap 0: Qwerty
 * ,---.   ,---------------. ,---------------. ,---------------. ,-----------.
 * |Esc|   |F1 |F2 |F3 |F4 | |F5 |F6 |F7 |F8 | |F9 |F10|F11|F12| |PrS|ScL|Pau|
 * `---'   `---------------' `---------------' `---------------' `-----------'
 * ,-----------------------------------------------------------. ,-----------.
 * |~  |  1|  2|  3|  4|  5|  6|  7|  8|  9|  0|  -|  =|Backsp | |Ins|Hom|PgU|
 * |-----------------------------------------------------------| |-----------|
 * |Tab  |  Q|  W|  E|  R|  T|  Y|  U|  I|  O|  P|  [|  ]|    \| |Del|End|PgD|
 * |-----------------------------------------------------------| `-----------'
 * |Caps  |  A|  S|  D|  F|  G|  H|  J|  K|  L|  ;|  '|Return  |
 * |-----------------------------------------------------------|     ,---.
 * |Shift   |  Z|  X|  C|  V|  B|  N|  M|  ,|  .|  /|Shift     |     |Up |
 * |-----------------------------------------------------------| ,-----------.
 * |Ctl|Gui|Alt|          Space                |Alt|Gui|Fn0|Ctl| |Lft|Dwn|Rgt|
 * `-----------------------------------------------------------' `-----------'
 */
    KEYMAP( \
        ESC,      F1,  F2,  F3,  F4,  F5,  F6,  F7,  F8,  F9,  F10, F11, F12, PSCR,SLCK,PAUS,  \
        GRV, 1,   2,   3,   4,   5,   6,   7,   8,   9,   0,   MINS,EQL, BSPC,INS, HOME,PGUP,  \
        TAB, Q,   W,   E,   R,   T,   Y,   U,   I,   O,   P,   LBRC,RBRC,BSLS,DEL, END, PGDN,  \
        CAPS,A,   S,   D,   F,   G,   H,   J,   K,   L,   SCLN,QUOT,     ENT,                  \
        LSFT,     Z,   X,   C,   V,   B,   N,   M,   COMM,DOT, SLSH,     RSFT,     UP,         \
        LCTL,LGUI,LALT,               SPC,                RALT,RGUI,FN0, RCTL,LEFT,DOWN,RGHT), \
/* Keymap 1: Dvorak
 * ,---.   ,---------------. ,---------------. ,---------------. ,-----------.
 * |Esc|   |F1 |F2 |F3 |F4 | |F5 |F6 |F7 |F8 | |F9 |F10|F11|F12| |PrS|ScL|Pau|
 * `---'   `---------------' `---------------' `---------------' `-----------'
 * ,-----------------------------------------------------------. ,-----------.
 * |~  |  1|  2|  3|  4|  5|  6|  7|  8|  9|  0|  [|  ]|Backsp | |Ins|Hom|PgU|
 * |-----------------------------------------------------------| |-----------|
 * |Tab  |  '|  ,|  .|  P|  Y|  F|  G|  C|  R|  L|  /|  =|    \| |Del|End|PgD|
 * |-----------------------------------------------------------| `-----------'
 * |Caps  |  A|  O|  E|  U|  I|  D|  H|  T|  N|  S|  -|Return  |
 * |-----------------------------------------------------------|     ,---.
 * |Shift   |  ;|  Q|  J|  K|  X|  B|  M|  W|  V|  Z|Shift     |     |Up |
 * |-----------------------------------------------------------| ,-----------.
 * |Ctl|Gui|Alt|          Space                |Alt|Gui|Fn0|Ctl| |Lft|Dwn|Rgt|
 * `-----------------------------------------------------------' `-----------'
 */
/*
    KEYMAP( \
        ESC,      F1,  F2,  F3,  F4,  F5,  F6,  F7,  F8,  F9,  F10, F11, F12, PSCR,SLCK,PAUS,  \
        GRV, 1,   2,   3,   4,   5,   6,   7,   8,   9,   0,   LBRC,RBRC,BSPC,INS, HOME,PGUP,  \
        TAB, QUOT,COMM,DOT, P,   Y,   F,   G,   C,   R,   L,   SLSH,EQL, BSLS,DEL, END, PGDN,  \
        CAPS,A,   O,   E,   U,   I,   D,   H,   T,   N,   S,   MINS,     ENT,                  \
        LSFT,     SCLN,Q,   J,   K,   X,   B,   M,   W,   V,   Z,        RSFT,     UP,         \
        LCTL,LGUI,LALT,               SPC,                RALT,RGUI,FN0, RCTL,LEFT,DOWN,RGHT), \
*/
/* Overlay 1: Media
 * ,---.   ,---------------. ,---------------. ,---------------. ,-----------.
 * |   |   |Pow|Pwr|Slp|Wak| |   |   |   |   | |   |   |   |   | |Prv|Nxt|Mut|
 * `---'   `---------------' `---------------' `---------------' `-----------'
 * ,-----------------------------------------------------------. ,-----------.
 * |   |   |   |   |   |   |   |   |   |   |   |   |   |       | |Ply|Ffd|V+ |
 * |-----------------------------------------------------------| |-----------|
 * |     |   |   |   |   |   |   |   |   |   |   |   |   |     | |Stp|Rwd|V- |
 * |-----------------------------------------------------------| `-----------'
 * |      |   |   |   |   |   |   |   |   |   |   |   |        |
 * |-----------------------------------------------------------|     ,---.
 * |        |   |   |   |   |   |   |   |   |   |   |          |     |   |
 * |-----------------------------------------------------------| ,-----------.
 * |   |   |   |                               |   |   |   |   | |   |   |   |
 * `-----------------------------------------------------------' `-----------'
 */
    KEYMAP( \
        TRNS,    POWER,PWR ,SLEP,WAKE,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,MPRV,MNXT,MUTE,  \
        TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,MPLY,MFFD,VOLU,  \
        TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,MSTP,MRWD,VOLD,  \
        TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,     TRNS,                 \
        TRNS,     TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,     TRNS,     TRNS,       \
        TRNS,TRNS,TRNS,               TRNS,               TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS)
};


static const uint16_t PROGMEM fn_actions[] = {
    [0] = ACTION_LAYER_MOMENTARY(1)
};
