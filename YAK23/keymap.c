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


#include <stdint.h>
#include <stdbool.h>
#include <avr/pgmspace.h>
#include "keycode.h"
#include "action.h"
#include "action_macro.h"
#include "report.h"
#include "host.h"
#include "debug.h"
#include "keymap.h"

/* Map physical keyboard layout to matrix array */
#define KEYMAP( \
    K5A, K5B, K5C, K5D, \
    K4A, K4B, K4C, K4D, \
    K3A, K3B, K3C,      \
    K2A, K2B, K2C, K2D, \
    K1A, K1B, K1C,      \
    K0A,      K0C, K0D  \
) { \
/*             0         1         2         3    */ \
/* 5 */   { KC_##K5A, KC_##K5B, KC_##K5C, KC_##K5D}, \
/* 4 */   { KC_##K4A, KC_##K4B, KC_##K4C, KC_##K4D}, \
/* 3 */   { KC_##K3A, KC_##K3B, KC_##K3C, KC_NO   }, \
/* 2 */   { KC_##K2A, KC_##K2B, KC_##K2C, KC_##K2D}, \
/* 1 */   { KC_##K1A, KC_##K1B, KC_##K1C, KC_NO   }, \
/* 0 */   { KC_##K0A, KC_NO,    KC_##K0C, KC_##K0D}  \
}

#include "keymap_pad.h"

#define KEYMAPS_SIZE    (sizeof(keymaps) / sizeof(keymaps[0]))
#define FN_ACTIONS_SIZE (sizeof(fn_actions) / sizeof(fn_actions[0]))


/* Translates key to keycode */
uint8_t keymap_key_to_keycode(uint8_t layer, keypos_t key) {
    if (layer < KEYMAPS_SIZE) {
        return pgm_read_byte(&keymaps[(layer)][(key.row)][(key.col)]);
    } else {
        // fall back to layer 0
        return pgm_read_byte(&keymaps[0][(key.row)][(key.col)]);
    }
}


/* Translates Fn keycode to action */
action_t keymap_fn_to_action(uint8_t keycode) {
    action_t action;

    if (FN_INDEX(keycode) < FN_ACTIONS_SIZE) {
        action.code = pgm_read_word(&fn_actions[FN_INDEX(keycode)]);
    } else {
        action.code = ACTION_NO;
    }

    return action;
}
