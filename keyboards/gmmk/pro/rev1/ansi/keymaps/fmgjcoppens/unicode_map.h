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

enum unicode_names {
    LA_GRAV,
    UA_GRAV,
    LA_CIRC,
    UA_CIRC,
    LC_CDIL,
    UC_CDIL,
    LE_GRAV,
    UE_GRAV,
    LE_ACUT,
    UE_ACUT,
    LE_CIRC,
    UE_CIRC,
    LE_TREM,
    UE_TREM,
    LI_CIRC,
    UI_CIRC,
    LI_TREM,
    UI_TREM,
    LO_CIRC,
    UO_CIRC,
    L_OELIG,
    U_OELIG,
    EUROSGN,
    LU_GRAV,
    UU_GRAV,
    LU_CIRC,
    UU_CIRC,
    LU_TREM,
    UU_TREM
};

const uint32_t unicode_map[] PROGMEM = {
    [LA_GRAV] =   0xE0, // à
    [UA_GRAV] =   0xC0, // À
    [LA_CIRC] =   0xE2, // â
    [UA_CIRC] =   0xC2, // Â
    [LC_CDIL] =   0xE7, // ç
    [UC_CDIL] =   0xC7, // Ç
    [LE_GRAV] =   0xE8, // è
    [UE_GRAV] =   0xC8, // È
    [LE_ACUT] =   0xE9, // é
    [UE_ACUT] =   0xC9, // É
    [LE_CIRC] =   0xEA, // ê
    [UE_CIRC] =   0xCA, // Ê
    [LE_TREM] =   0xEB, // ë
    [UE_TREM] =   0xCB, // Ë
    [LI_CIRC] =   0xEE, // î
    [UI_CIRC] =   0xCE, // Î
    [LI_TREM] =   0xEF, // ï
    [UI_TREM] =   0xCF, // Ï
    [LO_CIRC] =   0xF4, // ô
    [UO_CIRC] =   0xD4, // Ô
    [L_OELIG] =  0x153, // œ
    [U_OELIG] =  0x152, // Œ
    [EUROSGN] = 0x20AC, // €
    [LU_GRAV] =   0xF9, // ù
    [UU_GRAV] =   0xD9, // Ù
    [LU_CIRC] =   0xFB, // û
    [UU_CIRC] =   0xDB, // Û
    [LU_TREM] =   0xFC, // ü
    [UU_TREM] =   0xDC  // Ü
};
