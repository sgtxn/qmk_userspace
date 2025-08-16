#include QMK_KEYBOARD_H

// Extra behavior layered onto the JSON-generated keymap via OTHER_KEYMAP_C

#ifdef ENCODER_ENABLE
// Both encoders control volume. Returning false stops the kb-level handler.
bool encoder_update_user(uint8_t index, bool clockwise) {
    tap_code(clockwise ? KC_VOLU : KC_VOLD);
    return false;
}
#endif
