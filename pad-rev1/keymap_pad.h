static const uint8_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
/* Keymap 0: Number Pad
 * ,---------------.
 * |Fn0|   |   |Bks|
 * `---------------'
 * ,---------------.
 * |Num|/  |*  |-  |
 * |---------------|
 * |7  |8  |9  |   |
 * |------------+  |
 * |4  |5  |6  |   |
 * |---------------|
 * |1  |2  |3  |   |
 * |------------Ent|
 * |0      |.  |   |
 * `---------------'
 */
    KEYMAP(\
        FN0, NO,  NO,  BSPC, \
        NLCK,PSLS,PAST,PMNS, \
        P7,  P8,  P9,  PPLS, \
        P4,  P5,  P6,        \
        P1,  P2,  P3,  PENT, \
        P0,  PDOT),          \
/* Overlay 1: Other
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
 * |       |   |   |
 * `---------------'
 */
    KEYMAP(\
        TRNS,TRNS,TRNS,TRNS, \
        TRNS,TRNS,TRNS,TRNS, \
        TRNS,TRNS,TRNS,TRNS, \
        TRNS,TRNS,TRNS,      \
        TRNS,TRNS,TRNS,TRNS, \
        TRNS,TRNS)
};


static const uint16_t PROGMEM fn_actions[] = {
    [0] = ACTION_LAYER_MOMENTARY(1)
};
