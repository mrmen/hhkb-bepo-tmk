/*
* HHKB Layout
* fn0 : hhkb layer
* fn1 : alt layer
* fn2 : fake shift layer
* fn3 : unused
* fn4 "
* fn5
* fn6
* fn7 (
* fn8 )
* fn9 @
* fn10 +
* fn11 *
* fn12 %
* fn13 é
* fn14 è
* fn15 ^
* fn16 à
* fn17 <
* fn18 >
* fn19 &
* fn20 ù
* fn21 ~
* fn22 {
* fn23 }
* fn24 !
* fn25 ?
* fn26
* fn27 $
* fn28 #
* fn29
*/
 
#include "keymap_common.h"


#ifdef KEYMAP_SECTION_ENABLE
const uint8_t keymaps[][MATRIX_ROWS][MATRIX_COLS] __attribute__ ((section (".keymap.keymaps"))) = {
#else
const uint8_t keymaps[][MATRIX_ROWS][MATRIX_COLS] PROGMEM = {
#endif
    /* Layer 0: Default Layer
     * ,-----------------------------------------------------------.
     * |Esc|  "|  2|  3|  (|  )|  @|  +|  -|  /|  *|  =|  %| \|  $|
     * |-----------------------------------------------------------|
     * |Tab  |  B|  É|  P|  O|  È|  ^|  V|  D|  L|  J|  Z|  W|Backs|
     * |----------------------------------------------------------|
     * |Contro|  A|  U|  I|  E|  ,|  C|  T|  S|  R|  N|  M|Enter   |
     * |-----------------------------------------------------------|
     * |Shift   |  À|  Y|  X|  .|  K|  '|  Q|  G|  H|  F|Shift |Fn0|
     * `-----------------------------------------------------------'
     *       |Alt|Gui  |         Space         |Gui  |Alt|
     *       `-------------------------------------------'
     */
    KEYMAP(ESC, FN4, FN5,   FN6,   FN7,   FN8,   FN9,   FN10,   MINS,   SLSH,   FN11,   EQL,FN12, BSLS,FN27,\
           TAB, B,   FN13,   P,   O,   FN14,   FN15,   V,   D,   L,   J,   Z,W,BSPC, \
           LCTL,A,   U,   I,   E,   COMM,   C,   T,   S,   R,   N,M,ENT,	\
           FN2,FN16,   Y,   X,   DOT,   K,   QUOT,  Q ,   G,H, F,RSFT,FN0, \
                LSFT,LGUI,          SPC,                FN1,RGUI),
// default layer : fn4 to fn16 used for new keys

    /* Layer 1: HHKB mode (HHKB Fn)
     * ,-----------------------------------------------------------.
     * |Pwr| F1| F2| F3| F4| F5| F6| F7| F8| F9|F10|F11|F12|Ins|Del|
     * |-----------------------------------------------------------|
     * |Caps |   |   |   |   |   |   |   |Psc|Slk|Pus|Up |   |Backs|
     * |-----------------------------------------------------------|
     * |      |VoD|VoU|Mut|   |   |  *|  /|Hom|PgU|Lef|Rig|Enter   |
     * |-----------------------------------------------------------|
     * |        |   |   |   |   |   |  +|  -|End|PgD|Dow|      |   |
     * `-----------------------------------------------------------'
     *       |   |     |                       |     |   |
     *       `-------------------------------------------'
     */
    KEYMAP(PWR, F1,  F2,  F3,  F4,  F5,  F6,  F7,  F8,  F9,  F10, F11, F12, INS, DEL,   \
           CAPS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,PSCR,SLCK,PAUS, UP, TRNS, BSPC,      \
           TRNS,VOLD,VOLU,MUTE,TRNS,TRNS,PAST,PSLS,HOME,PGUP,LEFT,RGHT,PENT,            \
           TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,PPLS,PMNS,END, PGDN,DOWN,TRNS,TRNS,            \
                TRNS,TRNS,          TRNS,               TRNS,TRNS),

// hhkb layer : no fn used

    /* Layer 1: Alt Layer
     * ,-----------------------------------------------------------.
     * |Esc|  1|  <|  >|  [|  ]|  6|  7|  8|  9|  0|  |  |  |  |
     * |-----------------------------------------------------------|
     * |Tab  |\||   | &  |   |   |   |   |   |   |   |   |   |Backs|
     * |-----------------------------------------------------------|
     * |Contro|   | ù |   |   |   |   |   |   |   | ~ |   |Enter   |
     * |-----------------------------------------------------------|
     * |Shift   | \ |  {|  }|   |   |   |   |   |   |   |Shift |Fn0|
     * `-----------------------------------------------------------'
     *       |Alt|Gui  |         Space         |Gui  |Alt|
     *       `-------------------------------------------'
     */
    KEYMAP(ESC, 1,   FN17,   FN18,   LBRC,   RBRC,   6,   7,   8,   9,   0,   MINS,EQL, BSLS,GRV,\
       TAB,FN18,TRNS,FN19,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,BSPC, \
           LCTL,TRNS,FN20,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,FN21,TRNS,ENT,	\
           FN2,BSLS,FN22,FN23,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,RSFT,FN0, \
                LALT,LGUI,          SPC,                FN1,RGUI),

    /* Layer 2: Fake Shift Layer
     * ,-----------------------------------------------------------.
     * |Esc|  "|  2|  3|  (|  )|  @|  +|  -|  /|  *|  =|  %| Q\|  $|
     * |-----------------------------------------------------------|
     * |Tab  |  Q|  W|  E|  R|  T|  Y|  U|  I|  O|  P|  [|  ]|Backs|
     * |-----------------------------------------------------------|
     * |Contro|  A|  S|  D|  F|  G|  H|  J|  K|  L|  ;|  '|Enter   |
     * |-----------------------------------------------------------|
     * |Shift   |  Z|  X|  C|  V|  B|  N|  M|  ,|  .|  /|Shift |Fn0|
     * `-----------------------------------------------------------'
     *       |Alt|Gui  |         Space         |Gui  |Alt|
     *       `-------------------------------------------'
     */
    KEYMAP(PWR, 1,  2,  3,  4,  5,  6,  7,  8,  9,  0, TRNS, TRNS, TRNS, FN28, \
           CAPS,TRNS,TRNS,TRNS,TRNS,TRNS,FN24,TRNS,PSCR,SLCK,PAUS, UP, TRNS, BSPC,      \
           TRNS,VOLD,VOLU,MUTE,TRNS,TRNS,PAST,PSLS,HOME,PGUP,LEFT,RGHT,PENT,            \
           TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,FN25,PMNS,END, PGDN,DOWN,TRNS,TRNS,            \
                TRNS,TRNS,          TRNS,               TRNS,TRNS),
};



enum macro_id {
  EACUTE,
  EGRAVE,
  AGRAVE,
  UGRAVE,
};



/*
 * Fn action definition
 */
 
// les fn sont definis de proche en proche layer apres layer
// les n premiers fn correspondent au changements de layers
#ifdef KEYMAP_SECTION_ENABLE
const uint16_t fn_actions[] __attribute__ ((section (".keymap.fn_actions"))) = {
    [0]  = ACTION_LAYER_MOMENTARY(1),
    [1]  = ACTION_LAYER_MOMENTARY(2),
    [2]  = ACTION_LAYER_MOMENTARY(3),
};
#else
const uint16_t fn_actions[] PROGMEM = {
    [0]  = ACTION_LAYER_MOMENTARY(1),
    [1]  = ACTION_LAYER_MOMENTARY(2),
    [2]  = ACTION_LAYER_MOMENTARY(3),
    [3] = ACTION_LAYER_MOMENTARY(1),
    [4]  = ACTION_MODS_KEY(MOD_LSFT, KC_QUOTE),// "
    [5]  = ACTION_MODS_KEY(MOD_LSFT, KC_COMM),// <
    [6]  = ACTION_MODS_KEY(MOD_LSFT, KC_DOT),// >
    [7]  = ACTION_MODS_KEY(MOD_LSFT, KC_9),// (
    [8]  = ACTION_MODS_KEY(MOD_LSFT, KC_0),// )
    [9]  = ACTION_MODS_KEY(MOD_LSFT, KC_2),// @
    [10]  = ACTION_MODS_KEY(MOD_LSFT, KC_EQL),// +
    [11]  = ACTION_MODS_KEY(MOD_LSFT, KC_8),// *
    [12]  = ACTION_MODS_KEY(MOD_LSFT, KC_5),// %
    [13] = ACTION_MACRO(EACUTE),// é
    [14] = ACTION_MACRO(EGRAVE),// è
    [15]  = ACTION_MODS_KEY(MOD_LSFT, KC_6),//^
    [16] = ACTION_MACRO(AGRAVE),// à
    [17]  = ACTION_MODS_KEY(MOD_LSFT, KC_COMM),// <
    [18]  = ACTION_MODS_KEY(MOD_LSFT, KC_DOT),// >
    [19] = ACTION_MODS_KEY(MOD_LSFT, KC_7),// &
    [20] = ACTION_MACRO(UGRAVE),// ù
    [21] = ACTION_MODS_KEY(MOD_LSFT, KC_GRV),// ~
    [22] = ACTION_MODS_KEY(MOD_LSFT, KC_LBRC),// {
    [23] = ACTION_MODS_KEY(MOD_LSFT, KC_RBRC),// }
    [24] = ACTION_MODS_KEY(MOD_LSFT, KC_1),// !
    [25]  = ACTION_MODS_KEY(MOD_LSFT, KC_SLSH),// ?
    [27] = ACTION_MODS_KEY(MOD_LSFT, KC_4),// $
    [28] = ACTION_MODS_KEY(MOD_LSFT, KC_3),// #
    
};
#endif
/*
 * Macro definition
 */
const macro_t *action_get_macro(keyrecord_t *record, uint8_t id, uint8_t opt)
{
    switch (id) {
        case EACUTE:
            return (record->event.pressed ?
                    MACRO( I(0), T(QUOT), T(E), END ) :
                    MACRO_NONE );
        case EGRAVE:
            return (record->event.pressed ?
                    MACRO( I(0), T(GRV), T(E), END ) :
                    MACRO_NONE );
        case AGRAVE:
            return (record->event.pressed ?
                    MACRO( I(0), T(GRV), T(A), END ) :
                    MACRO_NONE );
        case UGRAVE:
            return (record->event.pressed ?
                    MACRO( I(0), T(GRV), T(U), END ) :
                    MACRO_NONE );
    }
    return MACRO_NONE;
}
