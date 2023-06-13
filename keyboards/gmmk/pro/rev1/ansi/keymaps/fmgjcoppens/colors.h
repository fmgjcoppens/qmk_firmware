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

#define RGB_CAPSL           RGB_CYAN // Default color for the capslock affected keys
#define RGB_LAYER           RGB_YELLOW    // Default color for the layer mod affected keys
#define RGB_I3              RGB_YELLOW  // Default color for the i3 mod affected keys

#define RGB_GOLD_75         0xBF, 0xA3, 0x00
#define RGB_GOLD_50         0x80, 0x6C, 0x00
#define RGB_GOLD_25         0x40, 0x36, 0x00
#define RGB_GOLD_10         0x1A, 0x16, 0x00

#define HSV_GOLD_25         36,  255,   63
#define HSV_GOLD_10         36,  255,   25
#define HSV_GOLD_00         36,  255,   00

#define RGB_RB_1            RGB_RED
#define RGB_RB_2            RGB_ORANGE
#define RGB_RB_3            RGB_YELLOW
#define RGB_RB_4            RGB_GREEN
#define RGB_RB_5            RGB_CYAN
#define RGB_RB_6            RGB_BLUE
#define RGB_RB_7            RGB_PURPLE
#define RGB_RB_8            RGB_MAGENTA

#define RGB_RED_100         RGB_RED
#define RGB_RED_90          0xE6, 0x00, 0x00
#define RGB_RED_80          0xCC, 0x00, 0x00
#define RGB_RED_70          0xB3, 0x00, 0x00
#define RGB_RED_60          0x99, 0x00, 0x00
#define RGB_RED_50          0x80, 0x00, 0x00
#define RGB_RED_40          0x66, 0x00, 0x00
#define RGB_RED_30          0x4D, 0x00, 0x00
#define RGB_RED_20          0x33, 0x00, 0x00
#define RGB_RED_10          0x1A, 0x00, 0x00
#define RGB_RED_0           RGB_OFF

#define RGB_ORANGE_100      RGB_ORANGE
#define RGB_ORANGE_90       0xE6, 0x73, 0x00
#define RGB_ORANGE_80       0xCC, 0x66, 0x00
#define RGB_ORANGE_70       0xB3, 0x59, 0x00
#define RGB_ORANGE_60       0x99, 0x4D, 0x00
#define RGB_ORANGE_50       0x80, 0x40, 0x00
#define RGB_ORANGE_40       0x66, 0x33, 0x00
#define RGB_ORANGE_30       0x4D, 0x26, 0x00
#define RGB_ORANGE_20       0x33, 0x1A, 0x00
#define RGB_ORANGE_10       0x1A, 0x0D, 0x00
#define RGB_ORANGE_0        RGB_OFF

#define RGB_YELLOW_100      RGB_YELLOW
#define RGB_YELLOW_90       0xE6, 0xE6, 0x00
#define RGB_YELLOW_80       0xCC, 0xCC, 0x00
#define RGB_YELLOW_70       0xB3, 0xB3, 0x00
#define RGB_YELLOW_60       0x99, 0x99, 0x00
#define RGB_YELLOW_50       0x80, 0x80, 0x00
#define RGB_YELLOW_40       0x66, 0x66, 0x00
#define RGB_YELLOW_30       0x4D, 0x4D, 0x00
#define RGB_YELLOW_20       0x33, 0x33, 0x00
#define RGB_YELLOW_10       0x1A, 0x1A, 0x00
#define RGB_YELLOW_0        RGB_OFF

#define RGB_GREEN_100       RGB_GREEN
#define RGB_GREEN_90        0x00, 0xE6, 0x00
#define RGB_GREEN_80        0x00, 0xCC, 0x00
#define RGB_GREEN_70        0x00, 0xB3, 0x00
#define RGB_GREEN_60        0x00, 0x99, 0x00
#define RGB_GREEN_50        0x00, 0x80, 0x00
#define RGB_GREEN_40        0x00, 0x66, 0x00
#define RGB_GREEN_30        0x00, 0x4D, 0x00
#define RGB_GREEN_20        0x00, 0x33, 0x00
#define RGB_GREEN_10        0x00, 0x1A, 0x00
#define RGB_GREEN_0         RGB_OFF

#define RGB_CYAN_100        RGB_CYAN
#define RGB_CYAN_90         0x00, 0xE6, 0xE6
#define RGB_CYAN_80         0x00, 0xCC, 0xCC
#define RGB_CYAN_70         0x00, 0xB3, 0xB3
#define RGB_CYAN_60         0x00, 0x99, 0x99
#define RGB_CYAN_50         0x00, 0x80, 0x80
#define RGB_CYAN_40         0x00, 0x66, 0x66
#define RGB_CYAN_30         0x00, 0x4D, 0x4D
#define RGB_CYAN_20         0x00, 0x33, 0x33
#define RGB_CYAN_10         0x00, 0x1A, 0x1A
#define RGB_CYAN_0          RGB_OFF

#define RGB_BLUE_100        RGB_BLUE
#define RGB_BLUE_90         0x00, 0x00, 0xE6
#define RGB_BLUE_80         0x00, 0x00, 0xCC
#define RGB_BLUE_70         0x00, 0x00, 0xB3
#define RGB_BLUE_60         0x00, 0x00, 0x99
#define RGB_BLUE_50         0x00, 0x00, 0x80
#define RGB_BLUE_40         0x00, 0x00, 0x66
#define RGB_BLUE_30         0x00, 0x00, 0x4D
#define RGB_BLUE_20         0x00, 0x00, 0x33
#define RGB_BLUE_10         0x00, 0x00, 0x1A
#define RGB_BLUE_0          RGB_OFF

#define RGB_PURPLE_100      RGB_PURPLE
#define RGB_PURPLE_90       0x6F, 0x00, 0xE6
#define RGB_PURPLE_80       0x63, 0x00, 0xCC
#define RGB_PURPLE_70       0x56, 0x00, 0xB3
#define RGB_PURPLE_60       0x4A, 0x00, 0x99
#define RGB_PURPLE_50       0x3E, 0x00, 0x80
#define RGB_PURPLE_40       0x31, 0x00, 0x66
#define RGB_PURPLE_30       0x25, 0x00, 0x4D
#define RGB_PURPLE_20       0x19, 0x00, 0x33
#define RGB_PURPLE_10       0x0C, 0x00, 0x1A
#define RGB_PURPLE_0        RGB_OFF

#define RGB_MAGENTA_100     RGB_MAGENTA
#define RGB_MAGENTA_90      0xE6, 0x00, 0xE6
#define RGB_MAGENTA_80      0xCC, 0x00, 0xCC
#define RGB_MAGENTA_70      0xB3, 0x00, 0xB3
#define RGB_MAGENTA_60      0x99, 0x00, 0x99
#define RGB_MAGENTA_50      0x80, 0x00, 0x80
#define RGB_MAGENTA_40      0x66, 0x00, 0x66
#define RGB_MAGENTA_30      0x4D, 0x00, 0x4D
#define RGB_MAGENTA_20      0x33, 0x00, 0x33
#define RGB_MAGENTA_10      0x1A, 0x00, 0x1A
#define RGB_MAGENTA_0       RGB_OFF

