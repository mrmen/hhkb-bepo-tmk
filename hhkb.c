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
* fn20 \
* fn21 {
* fn22 }
* fn23 !
* fn24 ?
* fn25
* fn26
* fn27
* fn28
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
     * |Tab  |  Q|  W|  E|  R|  T|  Y|  U|  I|  O|  P|  [|  ]|Backs|
     * |-----------------------------------------------------------|
     * |Contro|  A|  S|  D|  F|  G|  H|  J|  K|  L|  ;|  '|Enter   |
     * |-----------------------------------------------------------|
     * |Shift   |  Z|  X|  C|  V|  B|  N|  M|  ,|  .|  /|Shift |Fn0|
     * `-----------------------------------------------------------'
     *       |Alt|Gui  |         Space         |Gui  |Alt|
     *       `-------------------------------------------'
     */
    KEYMAP(ESC, FN4, FN5,   FN6,   FN7,   FN8,   FN9,   FN10,   MINS,   SLSH,   FN11,   EQL,FN12, BSLS,GRV,	\
           TAB, B,   FN13,   P,   O,   FN14,   FN15,   V,   D,   L,   J,   Z,W,BSPC, \
           LCTL,A,   U,   I,   E,   COMM,   C,   T,   S,   N,   N,M,ENT,	\
           LSFT,FN16,   Y,   X,   DOT,   K,   QUOT,  Q ,   G,H, F,FN2,FN0, \
                LALT,LGUI,          SPC,                FN1,RGUI),
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
     * |Esc|  1|  2|  3|  4|  5|  6|  7|  8|  9|  0|  -|  =|  \|  `|
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
    KEYMAP(ESC, 1,   FN17,   FN18,   LBRC,   RBRC,   6,   7,   8,   9,   0,   MINS,EQL, BSLS,GRV,	\
           TAB, FN18,   E,   FN19,   O,   E,   FN15,   V,   D,   L,   J,   Z,W,BSPC, \
           LCTL,A,   U,   I,   E,   COMM,   C,   T,   S,   N,   N,M,ENT,	\
           FN2,BSLS,   FN20,   FN21,   DOT,   K,   QUOT,  Q ,   G,H, F,RSFT,FN0, \
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
    KEYMAP(PWR, 1,  2,  3,  4,  5,  6,  7,  8,  9,  0, TRNS, TRNS, TRNS, FN20, \
           CAPS,TRNS,TRNS,TRNS,TRNS,TRNS,FN23,TRNS,PSCR,SLCK,PAUS, UP, TRNS, BSPC,      \
           TRNS,VOLD,VOLU,MUTE,TRNS,TRNS,PAST,PSLS,HOME,PGUP,LEFT,RGHT,PENT,            \
           TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,FN24,PMNS,END, PGDN,DOWN,TRNS,TRNS,            \
                TRNS,TRNS,          TRNS,               TRNS,TRNS),
};



enum macro_id {
  EACUTE,
  EGRAVE,
  AGRAVE,
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
    [3] = ACTION_MODS_KEY(1),
    [4]  = ACTION_MODS_KEY(MOD_LSFT, KC_QUOTE),//1 : ""
    
    
    
    [3]  = ACTION_MODS_KEY(MOD_LSFT, KC_6),//?
    [4]  = ACTION_MODS_KEY(MOD_LSFT, KC_SLSH),
    // ligne des nombres

    [6]  = ACTION_MODS_KEY(MOD_LSFT, KC_COMM),//2 : «
    [7]  = ACTION_MODS_KEY(MOD_LSFT, KC_DOT),//3 : »
    [8]  = ACTION_MODS_KEY(MOD_LSFT, KC_9),//4 : (
    [9]  = ACTION_MODS_KEY(MOD_LSFT, KC_0),//5 : )
    [10]  = ACTION_MODS_KEY(MOD_LSFT, KC_2),//6 : @
    [11]  = ACTION_MODS_KEY(MOD_LSFT, KC_EQL),//7 : +
    [14]  = ACTION_MODS_KEY(MOD_LSFT, KC_8),//0 : *
    [15]  = ACTION_MODS_KEY(MOD_LSFT, KC_5),// : %
    //
    [16] = ACTION_MODS_KEY(MOD_LSFT, KC_BSLS),// : %
    [17] = ACTION_MODS_KEY(MOD_LSFT, KC_7),// : %
    [18] = ACTION_MODS_KEY(MOD_LSFT, KC_LBRC),// : %
    [19] = ACTION_MODS_KEY(MOD_LSFT, KC_RBRC),// : %
    [20] = ACTION_MODS_KEY(MOD_LSFT, KC_3),// : %
    [21] = ACTION_MODS_KEY(MOD_LSFT, KC_1),//!
    [27] = ACTION_MACRO(AGRAVE),
    [29] = ACTION_MACRO(EGRAVE),
    [31] = ACTION_MACRO(EACUTE),
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
    }
    return MACRO_NONE;
}