// Original file taken from: https://github.com/qmk/qmk_firmware/blob/master/quantum/keymap_extras/keymap_spanish.h
// Modified to work with ZMK (originally for QMK)

#pragma once

#include <dt-bindings/zmk/hid_usage.h>
#include <dt-bindings/zmk/hid_usage_pages.h>
#include <dt-bindings/zmk/modifiers.h>
#include <dt-bindings/zmk/keys.h>

// clang-format off

// Aliases
#define ES_MORD GRAVE  // º
#define ES_N1    N1    // 1
#define ES_N2    N2    // 2
#define ES_N3    N3    // 3
#define ES_N4    N4    // 4
#define ES_N5    N5    // 5
#define ES_N6    N6    // 6
#define ES_N7    N7    // 7
#define ES_N8    N8    // 8
#define ES_N9    N9    // 9
#define ES_N0    N0    // 0

#define ES_QUOT MINUS // '
#define ES_IEXL EQUAL  // ¡

#define ES_Q    Q    // Q
#define ES_W    W    // W
#define ES_E    E    // E
#define ES_R    R    // R
#define ES_T    T    // T
#define ES_Y    Y    // Y
#define ES_U    U    // U
#define ES_I    I    // I
#define ES_O    O    // O
#define ES_P    P    // P

#define ES_GRV  LBKT // ` (dead)
#define ES_PLUS RBKT // +

#define ES_A    A    // A
#define ES_S    S    // S
#define ES_D    D    // D
#define ES_F    F    // F
#define ES_G    G    // G
#define ES_H    H    // H
#define ES_J    J    // J
#define ES_K    K    // K
#define ES_L    L    // L
#define ES_NTIL SEMI // Ñ

#define ES_ACUT SQT  // ´ (dead)
#define ES_CCED NUHS // Ç
#define ES_LABK NUBS // <
#define ES_Z    Z    // Z
#define ES_X    X    // X
#define ES_C    C    // C
#define ES_V    V    // V
#define ES_B    B    // B
#define ES_N    N    // N
#define ES_M    M    // M
#define ES_COMM COMMA // ,
#define ES_DOT  DOT  // .
#define ES_MINS FSLH // -

#define ES_FORD LS(ES_MORD) // ª
#define ES_EXLM LS(ES_N1)    // !
#define ES_DQUO LS(ES_N2)    // "
#define ES_BULT LS(ES_N3)    // ·
#define ES_DLR  LS(ES_N4)    // $
#define ES_PERC LS(ES_N5)    // %
#define ES_AMPR LS(ES_N6)    // &
#define ES_SLSH LS(ES_N7)    // /
#define ES_LPRN LS(ES_N8)    // (
#define ES_RPRN LS(ES_N9)    // )
#define ES_EQL  LS(ES_N0)    // =
#define ES_QUES LS(ES_QUOT) // ?
#define ES_IQUE LS(ES_IEXL) // ¿
#define ES_CIRC LS(ES_GRV)  // ^ (dead)
#define ES_ASTR LS(ES_PLUS) // *
#define ES_DIAE LS(ES_ACUT) // ¨ (dead)
#define ES_RABK LS(ES_LABK) // >
#define ES_SCLN LS(COMMA) // ;
#define ES_COLN LS(DOT)  // :
#define ES_UNDS LS(ES_MINS) // _
#define ES_BSLS RA(ES_MORD) // (backslash)
#define ES_PIPE RA(ES_N1)    // |
#define ES_AT   RA(ES_N2)    // @
#define ES_HASH RA(ES_N3)    // #
#define ES_TILD RA(ES_N4)    // ~
#define ES_EURO RA(ES_N5)    // €
#define ES_NOT  RA(ES_N6)    // ¬
#define ES_LBRC RA(ES_GRV)  // [
#define ES_RBRC RA(ES_PLUS) // ]
#define ES_LCBR RA(ES_ACUT) // {
#define ES_RCBR RA(ES_CCED) // }

