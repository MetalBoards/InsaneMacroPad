#include QMK_KEYBOARD_H

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    LAYOUT_ortho_4x4(
        LCA(KC_F13), LCA(KC_F14), LCA(KC_F15), LCA(KC_F16),
        LCA(KC_F17), LCA(KC_F18), LCA(KC_F19), LCA(KC_F20),
        LSA(KC_F13), LSA(KC_F14), LSA(KC_F15), LSA(KC_F16),
        LSA(KC_F17), LSA(KC_F18), LSA(KC_F19), LSA(KC_F20)
    )
};

#ifdef ENCODER_ENABLE
#include "encoder.h"
bool encoder_update_user(uint8_t index, bool clockwise) {
  if (index == 0) { /* First encoder */
    if (clockwise) {
      tap_code(KC_VOLU);
    } else {
      tap_code(KC_VOLD);
    }
  } else if (index == 1) {
    if (clockwise) {
	    tap_code(KC_MFFD);
    } else {
	    tap_code(KC_MRWD);
    }
  }
  return true;
}
#endif
