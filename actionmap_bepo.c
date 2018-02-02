#include <avr/pgmspace.h>
#include "actionmap.h"
#include "action_code.h"
#include "actionmap_common.h"


/*
 * Actions
 */
#define AC_LT0      ACTION_LAYER_MOMENTARY(0)                   // default layer
#define AC_LT1      ACTION_LAYER_MOMENTARY(1)                   // shift layer
#define AC_LT2      ACTION_LAYER_MOMENTARY(2)                   // altgr layer
#define AC_LT3      ACTION_LAYER_MOMENTARY(3)                   // hhkb layer
#define AC_LP4      ACTION_LAYER_TOGGLE(4)                   // qwerty layer
#define AC_LP5      ACTION_LAYER_TOGGLE(0)                      // 
#define AC_LOCH     ACTION_MODS_KEY(MOD_RALT|MOD_LSFT, KC_5)
#define AC_ROCH     ACTION_MODS_KEY(MOD_RALT|MOD_LSFT, KC_MINS)
#define AC_BACKSL   ACTION_MODS_KEY(MOD_RALT|MOD_LSFT,KC_DOT)
#define AC_PIPE   ACTION_MODS_KEY(MOD_RALT|MOD_LSFT,KC_L)

const uint16_t PROGMEM actionmaps[][MATRIX_ROWS][MATRIX_COLS] = {
    /* Layer 0: Default Layer
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
  [0] = ACTIONMAP_HHKB(\
		       ESC, 3, NONUS_BSLASH, s(NONUS_BSLASH), 5,   MINS, a(0), s(EQL), 6, s(DOT), BSLS, EQL,s(QUOT), 9, RBRC, \
		       TAB, B,   2,   P,  O,   7, LBRC, V ,   D,   L,   J,   W,Z,BSPC,	\
           LCTL,Q,   U,   I,   E,   M,   C,   T,   S,   R,   N,SCLN,ENT,             \
		       LT1,0,   Y,   X,   s(COMM),   K,   4, A, G,H, F,LT1,LT3, \
                LGUI,LGUI,          SPC,                LT2,LP4),
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
  // shift layer
  [1] = ACTIONMAP_HHKB(\
		       ESC, s(1),  s(2), s(3),  s(4), s(5), s(6), s(7), s(8), s(9), s(0), MINS,EQL, a(3), s(GRV), \
		       TAB, s(B),   2,   s(P),  s(O),   7, SLSH, s(V) , s(D),  s(L), s(J), s(W),s(Z),BSPC, \
		       LCTL,s(Q),   s(U), s(I), s(E), COMM,  s(C),  s(T), s(S), s(R), s(N),s(SCLN),ENT, \
		       TRNS,0, s(Y), s(X), DOT, s(K), s(M), s(A), s(G),s(H), s(F),TRNS,LT3, \
                LALT,LGUI,          SPC,                LT2,LP4),
  // altgr layer a(5) ={ ; a(MINS) = } a(8) a(4) a(EQL)
  [2] = ACTIONMAP_HHKB(							\
		       TRNS, TRNS,  TRNS,  TRNS, LOCH, ROCH,  TRNS,  TRNS,  TRNS,  TRNS,  TRNS, TRNS, TRNS, TRNS, TRNS, \
           TRNS,PIPE,TRNS,1,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS, TRNS, TRNS, TRNS, \
           TRNS,TRNS,QUOT,s(LBRC),TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,a(2),TRNS,TRNS, \
		       TRNS,TRNS,BACKSL,a(5),a(MINS),TRNS,TRNS,TRNS,TRNS, TRNS,TRNS,TRNS,TRNS, \
                TRNS,TRNS,          8,               TRNS,TRNS),
  // hhkb layer
  [3] = ACTIONMAP_HHKB(							\
	   PWR, F1,  F2,  F3,  F4,  F5,  F6,  F7,  F8,  F9,  F10, F11, F12, INS, DEL, \
           CAPS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS, UP, TRNS, TRNS, \
           TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,HOME,PGUP,LEFT,RGHT,TRNS, \
           TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,END, PGDOWN,DOWN,TRNS,TRNS, \
	   TRNS,TRNS,          TRNS,               TRNS,TRNS),
  // qwerty layer
    [4] = ACTIONMAP_HHKB (\
	   ESC, 1,   2,   3,   4,   5,   6,   7,   8,   9,   0,   MINS,EQL, BSLS,GRV, \
           TAB, Q,   W,   E,   R,   T,   Y,   U,   I,   O,   P,   LBRC,RBRC,BSPC,       \
           LCTL,A,   S,   D,   F,   G,   H,   J,   K,   L,   SCLN,QUOT,ENT,             \
           LSFT,Z,   X,   C,   V,   B,   N,   M,   COMM,DOT, SLSH,RSFT,LT3,             \
                LP5,LGUI,          SPC,                RALT,TRNS),

};
