static const uint8_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    /* Layer 0: normal */
    KEYMAP(\
        NO,  NO,  NO,  FN0,  \
        NLCK,PSLS,PAST,PMNS, \
        P7,  P8,  P9,  PPLS, \
        P4,  P5,  P6,        \
        P1,  P2,  P3,  PENT, \
        P0,  PDOT),          \
    /* Layer 1: other */
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
