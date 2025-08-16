#define DEBOUNCE 3
#define DEBOUNCE_TYPE sym_defer_g

#define USB_POLLING_INTERVAL_MS 1
#define QMK_KEYS_PER_SCAN 12

// Point the generic generated keymap.c to our extras implementation.
#define OTHER_KEYMAP_C "keyboards/splitkb/aurora/lily58/keymaps/sgtxn/keymap_extras.c"

#define ENCODER_RESOLUTION 2
