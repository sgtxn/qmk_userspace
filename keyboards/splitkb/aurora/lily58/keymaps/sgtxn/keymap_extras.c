#include QMK_KEYBOARD_H

// // Extra behavior layered onto the JSON-generated keymap via OTHER_KEYMAP_C

// #ifdef ENCODER_ENABLE
// // Both encoders control volume. Returning false stops the kb-level handler.
// bool encoder_update_user(uint8_t index, bool clockwise) {
//     tap_code(clockwise ? KC_VOLU : KC_VOLD);
//     return false;
// }
// #endif

#if defined(ENCODER_MAP_ENABLE)
const uint16_t PROGMEM encoder_map[][NUM_ENCODERS][NUM_DIRECTIONS] = {
    [0] = { ENCODER_CCW_CW(MS_WHLU, MS_WHLD),  ENCODER_CCW_CW(KC_VOLD, KC_VOLU)  },
    [1] = { ENCODER_CCW_CW(UG_HUED, UG_HUEU),  ENCODER_CCW_CW(LCTL(KC_MINUS), LCTL(KC_EQUAL))  },
};
#endif
