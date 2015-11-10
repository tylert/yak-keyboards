static const uint8_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
/* Keymap 0: Default
 * ,-------------------------------------------------------------------.
 * |   |   |   |   |   |   |   |   |   |   |   |   |   |   |   |   |   |
 * `-------------------------------------------------------------------'
 */
    KEYMAP(\
        FN0, F13, F14, F15, F16, F17, F18, F19, F20, F21, F22, F23, F24, P4,  P5,  P6,  P7) \
/* Overlay 1: Other
 * ,-------------------------------------------------------------------.
 * |   |   |   |   |   |   |   |   |   |   |   |   |   |   |   |   |   |
 * `-------------------------------------------------------------------'
 */
    KEYMAP(\
        TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS)
};


static const uint16_t PROGMEM fn_actions[] = {
    [0] = ACTION_LAYER_MOMENTARY(1)
};
