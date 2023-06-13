/* Copyright 2023 François Coppens <https://github.com/fmgjcoppens>.
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 2 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */

#pragma once

#define ALPHA_LEDS 26
const uint8_t alpha_leds[ALPHA_LEDS] = {
     8,14,20,25,30,36,41,46,52,58,  // Q, W, E, R, T, Y, U, I, O, P
     9,15,21,26,31,37,42,47,53,     //  A, S, D, F, G, H, J, K, L
    10,16,22,27,32,38,43            //   Z, X, C, V, B, N, M
};

#define CL_LEDS 22
const uint8_t CL_leds[CL_LEDS] = {
    0,6,12,13,18,23,28,58,34,50,56,61,66, // ESC, F1, F2, F3, F4, F5, F6, F9, F10, F11, F12
    24,52,93,22,49,94,95,97,79            // 2, 4, P, O, \, C, FN, UP, LEFT, DOWN, RIGHT
};

#define AL_LEDS 2
const uint8_t AL_leds[AL_LEDS] = {20,26}; // E, F

#define GL_LEDS 4
const uint8_t GL_leds[GL_LEDS] = {20,41,9,42}; // E, U, A, J

#define PL_LEDS 6
const uint8_t PL_leds[PL_LEDS] = {20,41,46,52,9,47}; // E, U, I, O, A, K

#define TL_LEDS 4
const uint8_t TL_leds[TL_LEDS] = {20,41,46,53}; // E, U, I, L

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
    17, // alt_l (KC_LGUI on my layout)
    33, // space
    96, // enter
    95, // left
    94, // up
    79, // right
    97  // down
};
