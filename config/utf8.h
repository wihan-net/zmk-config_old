/*
 * utf6.h
 *
 * Erzeugt unter ZMK UTF-8-Zeichen.
 *
 * Verwendung:
 *		UTF8(name, ziffer1, ziffer2, ziffer3, ziffer4)
 *			Definiert eine Zeichen mit der Bezeichnung 'name'.
 *		&kp  Ame
 *			Fügt das Zeichen 'name' ein.
 *
 * Quelle:
 *		https://github.com/urob/zmk-helpers/
 *
 * © 2025 René Wihan
 */
#pragma once

#define UTF8(name, a, b, c, d)  \
    macros { \
         Ame ## :  Ame { \
            label = "ZM_" #name ; \
            compatible = "zmk,behavior-macro"; \
            wait-ms = <0>; \
            tap-ms = <0>; \
            bindings = <&macro_pres &kp LS(LC(U)) &kp a &kp b &kp c &kp d &kp SPACE>; \
        }; \
    };


UTF8(U_00A7, N0, N0,  A, N7)	// §
UTF8(U_00A9, N0, N0,  A, N9)	// ©
UTF8(U_00B2, N0, N0,  B, N2)	// ²
UTF8(U_00B3, N0, N0,  B, N3)	// ³
UTF8(U_00B5, N0, N0,  B, N5)	// µ
UTF8(U_00B7, N0, N0,  B, N7)	// ·
UTF8(U_00B9, N0, N0,  B, N9)	// ¹
UTF8(U_00BC, N0, N0,  B,  C)	// ¼
UTF8(U_00BD, N0, N0,  B,  D)	// ½
UTF8(U_00BE, N0, N0,  B,  E)	// ¾
UTF8(U_0301, N0, N3, N0, N1)	// ́
UTF8(U_0308, N0, N3, N0, N8)	// ̈
UTF8(U_0394, N0, N3, N9, N4)	// Δ
UTF8(U_03A3, N0, N3,  A, N3)	// Σ
UTF8(U_03A9, N0, N3,  A, N9)	// Ω
UTF8(U_03B1, N0, N3,  B, N1)	// α
UTF8(U_03B2, N0, N3,  B, N2)	// β
UTF8(U_03B3, N0, N3,  B, N3)	// γ
UTF8(U_03B4, N0, N3,  B, N4)	// δ
UTF8(U_201C, N2, N0, N1,  C)	// “
UTF8(U_201E, N2, N0, N1,  E)	// „
UTF8(U_2026, N2, N0, N2, N6)	// …
UTF8(U_2070, N2, N0, N7, N0)	// ⁰
UTF8(U_2074, N2, N0, N7, N4)	// ⁴
UTF8(U_2075, N2, N0, N7, N5)	// ⁵
UTF8(U_2076, N2, N0, N7, N6)	// ⁶
UTF8(U_2077, N2, N0, N7, N7)	// ⁷
UTF8(U_2078, N2, N0, N7, N8)	// ⁸
UTF8(U_2079, N2, N0, N7, N9)	// ⁹
UTF8(U_2081, N2, N0, N8, N1)	// ₁
UTF8(U_2082, N2, N0, N8, N2)	// ₂
UTF8(U_2083, N2, N0, N8, N3)	// ₃
UTF8(U_2084, N2, N0, N8, N4)	// ₄
UTF8(U_2085, N2, N0, N8, N5)	// ₅
UTF8(U_2086, N2, N0, N8, N6)	// ₆
UTF8(U_2087, N2, N0, N8, N7)	// ₇
UTF8(U_2088, N2, N0, N8, N8)	// ₈
UTF8(U_2089, N2, N0, N8, N9)	// ₉
UTF8(U_20AC, N2, N0,  A,  C)	// €
UTF8(U_2154, N2, N1, N5, N4)	// ⅔
UTF8(U_215F, N2, N1, N5,  F)	// ⅟
UTF8(U_2190, N2, N1, N9, N0)	// ←
UTF8(U_2191, N2, N1, N9, N1)	// ↑
UTF8(U_2192, N2, N1, N9, N2)	// →
UTF8(U_2193, N2, N1, N9, N3)	// ↓
UTF8(U_2196, N2, N1, N9, N6)	// ↖
UTF8(U_2197, N2, N1, N9, N7)	// ↗
UTF8(U_2198, N2, N1, N9, N8)	// ↘
UTF8(U_2199, N2, N1, N9, N9)	// ↙
UTF8(U_21B0, N2, N1,  B, N0)	// ↰
UTF8(U_21B2, N2, N1,  B, N2)	// ↲
UTF8(U_21D0, N2, N1,  D, N0)	// ⇐
UTF8(U_21D1, N2, N1,  D, N1)	// ⇑
UTF8(U_21D2, N2, N1,  D, N2)	// ⇒
UTF8(U_21D3, N2, N1,  D, N3)	// ⇓
UTF8(U_2500, N2, N5, N0, N0)	// ─
UTF8(U_2502, N2, N5, N0, N2)	// │
UTF8(U_250C, N2, N5, N0,  C)	// ┌
UTF8(U_2510, N2, N5, N1, N0)	// ┐
UTF8(U_2514, N2, N5, N1, N4)	// └
UTF8(U_2518, N2, N5, N1, N8)	// ┘
UTF8(U_251C, N2, N5, N1,  C)	// ├
UTF8(U_2524, N2, N5, N2, N4)	// ┤
UTF8(U_253C, N2, N5, N3,  C)	// ┼
UTF8(U_2551, N2, N5, N5, N1)	// ║
UTF8(U_2554, N2, N5, N5, N4)	// ╔
UTF8(U_2557, N2, N5, N5, N7)	// ╗
UTF8(U_255A, N2, N5, N5,  A)	// ╚
UTF8(U_255D, N2, N5, N5,  D)	// ╝
UTF8(U_2610, N2, N6, N1, N0)	// ☐
UTF8(U_2611, N2, N6, N1, N1)	// ☑
UTF8(U_2612, N2, N6, N1, N2)	// ☒
