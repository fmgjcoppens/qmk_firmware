#pragma once

#define ALPHA_LEDS 26
const uint8_t alpha_leds[ALPHA_LEDS] = {
     8,14,20,25,30,36,41,46,52,58,
     9,15,21,26,31,37,42,47,53,
    10,16,22,27,32,38,43
};

#define CL_LEDS 21
const uint8_t CL_leds[CL_LEDS] = {
    0,6,12,13,18,23,28,34,50,56,61,66,
    24,52,93,22,49,94,95,97,79
};

#define AL_LEDS 2
const uint8_t AL_leds[AL_LEDS] = {20,26};

#define GL_LEDS 4
const uint8_t GL_leds[GL_LEDS] = {20,41,9,42};

#define PL_LEDS 6
const uint8_t PL_leds[PL_LEDS] = {20,41,46,52,9,47};

#define TL_LEDS 4
const uint8_t TL_leds[TL_LEDS] = {20,41,46,53};

#define I3_LEDS 25
const uint8_t i3_leds[I3_LEDS] = {
    7,  // 1
    13, // 2
    19, // 3
    24, // 4
    29, // 5
    35, // 6
    40, // 7
    45, // 8
    37, // h
    27, // v
    26, // f
    25, // r
    14, // w
    58, // p
    22, // c
    8,  // q
    4,  // shift_l
    5,  // ctrl_l
    17, // alt_l (KC_LGUI on my layout!)
    33, // space
    96, // enter
    95, // left
    94, // up
    79, // right
    97  // down
};
