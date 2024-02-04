// Copyright 2023 QMK
// SPDX-License-Identifier: GPL-2.0-or-later

#include QMK_KEYBOARD_H
#include "ws2812.h"

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [0] = LAYOUT(
        KC_GRAVE, KC_1, KC_2, KC_3, KC_4, KC_5, KC_6, KC_6, KC_7, KC_8, KC_9, KC_0, KC_MINUS, KC_EQUAL, KC_BACKSPACE, KC_PAGE_UP,
        KC_TAB, KC_Q, KC_W, KC_E, KC_R, KC_T, KC_Y, KC_Y, KC_U, KC_I, KC_O, KC_P, KC_LEFT_BRACKET, KC_RIGHT_BRACKET, KC_BACKSLASH, KC_PAGE_DOWN,
        KC_ESC, KC_A, KC_S, KC_D, KC_F, KC_G, KC_H, KC_BACKSPACE, KC_H, KC_J, KC_K, KC_L, KC_SEMICOLON, KC_QUOTE, KC_ENTER, KC_HOME,
        KC_LEFT_SHIFT, KC_Z, KC_X, KC_C, KC_V, KC_B, KC_B, KC_N, KC_M, KC_COMMA, KC_DOT, KC_SLASH, KC_RIGHT_SHIFT, KC_UP, KC_END,
        KC_LEFT_CTRL, KC_LEFT_GUI, KC_LEFT_ALT, KC_NO /* FN */, KC_SPACE, KC_SPACE, KC_ENTER, KC_DEL, KC_RIGHT_ALT, KC_NO, KC_LEFT, KC_DOWN, KC_RIGHT
    )
};


const rgblight_segment_t PROGMEM capslock_layer[] = RGBLIGHT_LAYER_SEGMENTS({0, 3, HSV_RED});

// Now define the array of layers. Later layers take precedence
const rgblight_segment_t* const PROGMEM rgb_layers[] = RGBLIGHT_LAYERS_LIST(
    capslock_layer
);


void keyboard_post_init_user(void) {
    // Enable the LED layers
    rgblight_layers = rgb_layers;
    rgblight_set_layer_state(0, true);
}
