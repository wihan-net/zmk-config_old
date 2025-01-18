/*
 * UTF8()
 *
 * Definiert UTF-8-Zeichen für die Verwendung in ZMK-Keymaps.
 *
 * Verwendung:
 *      #define U_1234 &kp LS(LC(U)) &kp N1 &kp N2 &kp N3 &kp N4 &kp SPACE
 *          Definiert eine Zeichen U+1234 mit der Bezeichnung 'U_1234'.
 *      &kp U_1234
 *          Fügt das Zeichen U_1234 ein.
 *
 * Quellen:
 *      https://github.com/urob/zmk-helpers/
 *      https://zmk.dev/docs/keymaps/list-of-keycodes
 *      https://www.compart.com/de/unicode/block
 */



macros {
    wr_test: wr_test {
        label = "name";
        compatible = "zmk,behavior-macro";
        wait-ms = <0>;
        tap-ms = <0>;
        #binding-cells = <0>;
        bindings = <&macro_tap &kp LS(LC(U)) &kp N0 &kp N0 &kp A &kp N9 &kp SPACE>;
    };
};



/*
#define U_00A7 <&kp LS(LC(U)) &kp N0 &kp N0 &kp  A &kp N7 &kp SPACE>    // §
#define U_00A9 <&kp LS(LC(U)) &kp N0 &kp N0 &kp  A &kp N9 &kp SPACE>    // ©
#define U_00B2 <&kp LS(LC(U)) &kp N0 &kp N0 &kp  B &kp N2 &kp SPACE>    // ²
#define U_00B3 <&kp LS(LC(U)) &kp N0 &kp N0 &kp  B &kp N3 &kp SPACE>    // ³
#define U_00B5 <&kp LS(LC(U)) &kp N0 &kp N0 &kp  B &kp N5 &kp SPACE>    // µ
#define U_00B9 <&kp LS(LC(U)) &kp N0 &kp N0 &kp  B &kp N9 &kp SPACE>    // ¹
#define U_00BC <&kp LS(LC(U)) &kp N0 &kp N0 &kp  B &kp  C &kp SPACE>    // ¼
#define U_00BD <&kp LS(LC(U)) &kp N0 &kp N0 &kp  B &kp  D &kp SPACE>    // ½
#define U_00BE <&kp LS(LC(U)) &kp N0 &kp N0 &kp  B &kp  E &kp SPACE>    // ¾
#define U_0301 <&kp LS(LC(U)) &kp N0 &kp N3 &kp N0 &kp N1 &kp SPACE>    // ́
#define U_0308 <&kp LS(LC(U)) &kp N0 &kp N3 &kp N0 &kp N8 &kp SPACE>    // ̈
#define U_0394 <&kp LS(LC(U)) &kp N0 &kp N3 &kp N9 &kp N4 &kp SPACE>    // Δ
#define U_03A3 <&kp LS(LC(U)) &kp N0 &kp N3 &kp  A &kp N3 &kp SPACE>    // Σ
#define U_03A9 <&kp LS(LC(U)) &kp N0 &kp N3 &kp  A &kp N9 &kp SPACE>    // Ω
#define U_03B1 <&kp LS(LC(U)) &kp N0 &kp N3 &kp  B &kp N1 &kp SPACE>    // α
#define U_03B2 <&kp LS(LC(U)) &kp N0 &kp N3 &kp  B &kp N2 &kp SPACE>    // β
#define U_03B3 <&kp LS(LC(U)) &kp N0 &kp N3 &kp  B &kp N3 &kp SPACE>    // γ
#define U_03B4 <&kp LS(LC(U)) &kp N0 &kp N3 &kp  B &kp N4 &kp SPACE>    // δ
#define U_201C <&kp LS(LC(U)) &kp N2 &kp N0 &kp N1 &kp  C &kp SPACE>    // “
#define U_201E <&kp LS(LC(U)) &kp N2 &kp N0 &kp N1 &kp  E &kp SPACE>    // „
#define U_2022 <&kp LS(LC(U)) &kp N2 &kp N0 &kp N2 &kp N2 &kp SPACE>    // •
#define U_2026 <&kp LS(LC(U)) &kp N2 &kp N0 &kp N2 &kp N6 &kp SPACE>    // …
#define U_2070 <&kp LS(LC(U)) &kp N2 &kp N0 &kp N7 &kp N0 &kp SPACE>    // ⁰
#define U_2074 <&kp LS(LC(U)) &kp N2 &kp N0 &kp N7 &kp N4 &kp SPACE>    // ⁴
#define U_2075 <&kp LS(LC(U)) &kp N2 &kp N0 &kp N7 &kp N5 &kp SPACE>    // ⁵
#define U_2076 <&kp LS(LC(U)) &kp N2 &kp N0 &kp N7 &kp N6 &kp SPACE>    // ⁶
#define U_2077 <&kp LS(LC(U)) &kp N2 &kp N0 &kp N7 &kp N7 &kp SPACE>    // ⁷
#define U_2078 <&kp LS(LC(U)) &kp N2 &kp N0 &kp N7 &kp N8 &kp SPACE>    // ⁸
#define U_2079 <&kp LS(LC(U)) &kp N2 &kp N0 &kp N7 &kp N9 &kp SPACE>    // ⁹
#define U_2081 <&kp LS(LC(U)) &kp N2 &kp N0 &kp N8 &kp N1 &kp SPACE>    // ₁
#define U_2082 <&kp LS(LC(U)) &kp N2 &kp N0 &kp N8 &kp N2 &kp SPACE>    // ₂
#define U_2083 <&kp LS(LC(U)) &kp N2 &kp N0 &kp N8 &kp N3 &kp SPACE>    // ₃
#define U_2084 <&kp LS(LC(U)) &kp N2 &kp N0 &kp N8 &kp N4 &kp SPACE>    // ₄
#define U_2085 <&kp LS(LC(U)) &kp N2 &kp N0 &kp N8 &kp N5 &kp SPACE>    // ₅
#define U_2086 <&kp LS(LC(U)) &kp N2 &kp N0 &kp N8 &kp N6 &kp SPACE>    // ₆
#define U_2087 <&kp LS(LC(U)) &kp N2 &kp N0 &kp N8 &kp N7 &kp SPACE>    // ₇
#define U_2088 <&kp LS(LC(U)) &kp N2 &kp N0 &kp N8 &kp N8 &kp SPACE>    // ₈
#define U_2089 <&kp LS(LC(U)) &kp N2 &kp N0 &kp N8 &kp N9 &kp SPACE>    // ₉
#define U_20AC <&kp LS(LC(U)) &kp N2 &kp N0 &kp  A &kp  C &kp SPACE>    // €
#define U_2154 <&kp LS(LC(U)) &kp N2 &kp N1 &kp N5 &kp N4 &kp SPACE>    // ⅔
#define U_215F <&kp LS(LC(U)) &kp N2 &kp N1 &kp N5 &kp  F &kp SPACE>    // ⅟
#define U_2190 <&kp LS(LC(U)) &kp N2 &kp N1 &kp N9 &kp N0 &kp SPACE>    // ←
#define U_2191 <&kp LS(LC(U)) &kp N2 &kp N1 &kp N9 &kp N1 &kp SPACE>    // ↑
#define U_2192 <&kp LS(LC(U)) &kp N2 &kp N1 &kp N9 &kp N2 &kp SPACE>    // →
#define U_2193 <&kp LS(LC(U)) &kp N2 &kp N1 &kp N9 &kp N3 &kp SPACE>    // ↓
#define U_2196 <&kp LS(LC(U)) &kp N2 &kp N1 &kp N9 &kp N6 &kp SPACE>    // ↖
#define U_2197 <&kp LS(LC(U)) &kp N2 &kp N1 &kp N9 &kp N7 &kp SPACE>    // ↗
#define U_2198 <&kp LS(LC(U)) &kp N2 &kp N1 &kp N9 &kp N8 &kp SPACE>    // ↘
#define U_2199 <&kp LS(LC(U)) &kp N2 &kp N1 &kp N9 &kp N9 &kp SPACE>    // ↙
#define U_21B0 <&kp LS(LC(U)) &kp N2 &kp N1 &kp  B &kp N0 &kp SPACE>    // ↰
#define U_21B2 <&kp LS(LC(U)) &kp N2 &kp N1 &kp  B &kp N2 &kp SPACE>    // ↲
#define U_21D0 <&kp LS(LC(U)) &kp N2 &kp N1 &kp  D &kp N0 &kp SPACE>    // ⇐
#define U_21D1 <&kp LS(LC(U)) &kp N2 &kp N1 &kp  D &kp N1 &kp SPACE>    // ⇑
#define U_21D2 <&kp LS(LC(U)) &kp N2 &kp N1 &kp  D &kp N2 &kp SPACE>    // ⇒
#define U_21D3 <&kp LS(LC(U)) &kp N2 &kp N1 &kp  D &kp N3 &kp SPACE>    // ⇓
#define U_2500 <&kp LS(LC(U)) &kp N2 &kp N5 &kp N0 &kp N0 &kp SPACE>    // ─
#define U_2502 <&kp LS(LC(U)) &kp N2 &kp N5 &kp N0 &kp N2 &kp SPACE>    // │
#define U_250C <&kp LS(LC(U)) &kp N2 &kp N5 &kp N0 &kp  C &kp SPACE>    // ┌
#define U_2510 <&kp LS(LC(U)) &kp N2 &kp N5 &kp N1 &kp N0 &kp SPACE>    // ┐
#define U_2514 <&kp LS(LC(U)) &kp N2 &kp N5 &kp N1 &kp N4 &kp SPACE>    // └
#define U_2518 <&kp LS(LC(U)) &kp N2 &kp N5 &kp N1 &kp N8 &kp SPACE>    // ┘
#define U_251C <&kp LS(LC(U)) &kp N2 &kp N5 &kp N1 &kp  C &kp SPACE>    // ├
#define U_2524 <&kp LS(LC(U)) &kp N2 &kp N5 &kp N2 &kp N4 &kp SPACE>    // ┤
#define U_253C <&kp LS(LC(U)) &kp N2 &kp N5 &kp N3 &kp  C &kp SPACE>    // ┼
#define U_2551 <&kp LS(LC(U)) &kp N2 &kp N5 &kp N5 &kp N1 &kp SPACE>    // ║
#define U_2554 <&kp LS(LC(U)) &kp N2 &kp N5 &kp N5 &kp N4 &kp SPACE>    // ╔
#define U_2557 <&kp LS(LC(U)) &kp N2 &kp N5 &kp N5 &kp N7 &kp SPACE>    // ╗
#define U_255A <&kp LS(LC(U)) &kp N2 &kp N5 &kp N5 &kp  A &kp SPACE>    // ╚
#define U_255D <&kp LS(LC(U)) &kp N2 &kp N5 &kp N5 &kp  D &kp SPACE>    // ╝
#define U_2610 <&kp LS(LC(U)) &kp N2 &kp N6 &kp N1 &kp N0 &kp SPACE>    // ☐
#define U_2611 <&kp LS(LC(U)) &kp N2 &kp N6 &kp N1 &kp N1 &kp SPACE>    // ☑
#define U_2612 <&kp LS(LC(U)) &kp N2 &kp N6 &kp N1 &kp N2 &kp SPACE>    // ☒
*/
