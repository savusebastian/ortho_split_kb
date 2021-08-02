#include QMK_KEYBOARD_H

#define ___ KC_NO


const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
	// Layer 0
	// +-----------------------------------------+        +-----------------------------------------+
	// |esc  |  f1 |  f2 |  f3 |  f4 |  f5 |  f6 |        |  f7 |  f8 |  f9 |  f10|  f11|  f12|  del|
	// |-----+-----+-----+-----+-----+-----+-----|        |-----+-----+-----+-----+-----+-----+-----|
	// |grv  |  1  |  2  |  3  |  4  |  5  |  6  |        |  7  |  8  |  9  |  0  |  -  |  =  | bksp|
	// |-----+-----+-----+-----+-----+-----+-----|        |-----+-----+-----+-----+-----+-----+-----|
	// |tab  |  q  |  w  |  e  |  r  |  t  |  [  |        |  ]  |  y  |  u  |  i  |  o  |  p  |  \  |
	// |-----+-----+-----+-----+-----+-----+-----|        |-----+-----+-----+-----+-----+-----+-----|
	// |caps |  a  |  s  |  d  |  f  |  g  |  ;  |        |  '  |  h  |  j  |  k  |  l  |enter|enter|
	// |-----+-----+-----+-----+-----+-----+-----|        |-----+-----+-----+-----+-----+-----+-----|
	// |shift|  z  |  x  |  c  |  v  |fn   |  ,  |        |  .  |  b  |  n  |  m  |  /  |  up |prtsc|
	// |-----+-----+-----+-----+-----+-----+-----|        |-----+-----+-----+-----+-----+-----+-----|
	// |ctrl |menu |meta |alt  |space|space|     |        |     | home|  end|  fn | left| down|right|
	// +-----------------------------------------+        +-----------------------------------------+

	[0] = LAYOUT(
		KC_ESC,    KC_F1,    KC_F2,     KC_F3,     KC_F4,    KC_F5,   KC_F6,              KC_F7,     KC_F8,     KC_F9,    KC_F10,   KC_F11,    KC_F12,    KC_DEL,
		KC_GRV,    KC_1,     KC_2,      KC_3,      KC_4,     KC_5,    KC_6,               KC_7,      KC_8,      KC_9,     KC_0,     KC_MINS,   KC_EQL,    KC_BSPC,
		KC_TAB,    KC_Q,     KC_W,      KC_E,      KC_R,     KC_T,    KC_LBRC,            KC_RBRC,   KC_Y,      KC_U,     KC_I,     KC_O,      KC_P,      KC_BSLS,
		KC_CAPS,   KC_A,     KC_S,      KC_D,      KC_F,     KC_G,    KC_SCLN,            KC_QUOT,   KC_H,      KC_J,     KC_K,     KC_L,      KC_ENT,
		KC_LSFT,   KC_Z,     KC_X,      KC_C,      KC_V,     MO(1),   KC_COMM,            KC_DOT,    KC_B,      KC_N,     KC_M,     KC_SLSH,   KC_UP,     KC_PSCR,
		KC_LCTL,   KC_APP,   KC_LGUI,   KC_LALT,   KC_SPC,                                           KC_HOME,   KC_END,   MO(1),    KC_LEFT,   KC_DOWN,   KC_RGHT
	),

	// Layer 1 (fn)
	// +-----------------------------------------+        +-----------------------------------------+
	// |reset|     |     |     |     |     |     |        |     |     |     | mute|volup|voldn|     |
	// |-----+-----+-----+-----+-----+-----+-----|        |-----+-----+-----+-----+-----+-----+-----|
	// |     |     |     |     |     |     |     |        |     |     |     |     |     |     |     |
	// |-----+-----+-----+-----+-----+-----+-----|        |-----+-----+-----+-----+-----+-----+-----|
	// |     |     |     |     |     |     |     |        |     |     |     |     |     |     |     |
	// |-----+-----+-----+-----+-----+-----+-----|        |-----+-----+-----+-----+-----+-----+-----|
	// |     |     |     |     |     |     |     |        |     |     |     |     |     |     |     |
	// |-----+-----+-----+-----+-----+-----+-----|        |-----+-----+-----+-----+-----+-----+-----|
	// |     |     |     |     |     |     |     |        |     |     |     |     |     | pgup|     |
	// |-----+-----+-----+-----+-----+-----+-----|        |-----+-----+-----+-----+-----+-----+-----|
	// |     |     |     |     |     |     |     |        |     |     |     |     |     | pgdn|     |
	// +-----------------------------------------+        +-----------------------------------------+

	[1] = LAYOUT(
		RESET,   ___,   ___,   ___,   ___,   ___,   ___,            ___,   ___,   ___,   KC_MUTE,   KC_VOLD,   KC_VOLU,   ___,
		___,     ___,   ___,   ___,   ___,   ___,   ___,            ___,   ___,   ___,   ___,       ___,       ___,       ___,
		___,     ___,   ___,   ___,   ___,   ___,   ___,            ___,   ___,   ___,   ___,       ___,       ___,       ___,
		___,     ___,   ___,   ___,   ___,   ___,   ___,            ___,   ___,   ___,   ___,       ___,       ___,
		___,     ___,   ___,   ___,   ___,   ___,   ___,            ___,   ___,   ___,   ___,       ___,       KC_PGUP,   ___,
		___,     ___,   ___,   ___,   ___,                                 ___,   ___,   ___,       ___,       KC_PGDN,   ___
	)
	// [1] = LAYOUT(
	// 	RESET,     KC_TRNS,   KC_TRNS,   KC_TRNS,   KC_TRNS,   KC_TRNS,   KC_TRNS,            KC_TRNS,   KC_TRNS,   KC_TRNS,   KC_MUTE,   KC_VOLD,   KC_VOLU,   KC_TRNS,
	// 	KC_TRNS,   KC_TRNS,   KC_TRNS,   KC_TRNS,   KC_TRNS,   KC_TRNS,   KC_TRNS,            KC_TRNS,   KC_TRNS,   KC_TRNS,   KC_TRNS,   KC_TRNS,   KC_TRNS,   KC_TRNS,
	// 	KC_TRNS,   KC_TRNS,   KC_TRNS,   KC_TRNS,   KC_TRNS,   KC_TRNS,   KC_TRNS,            KC_TRNS,   KC_TRNS,   KC_TRNS,   KC_TRNS,   KC_TRNS,   KC_TRNS,   KC_TRNS,
	// 	KC_TRNS,   KC_TRNS,   KC_TRNS,   KC_TRNS,   KC_TRNS,   KC_TRNS,   KC_TRNS,            KC_TRNS,   KC_TRNS,   KC_TRNS,   KC_TRNS,   KC_TRNS,   KC_TRNS,
	// 	KC_TRNS,   KC_TRNS,   KC_TRNS,   KC_TRNS,   KC_TRNS,   KC_TRNS,   KC_TRNS,            KC_TRNS,   KC_TRNS,   KC_TRNS,   KC_TRNS,   KC_TRNS,   KC_PGUP,   KC_TRNS,
	// 	KC_TRNS,   KC_TRNS,   KC_TRNS,   KC_TRNS,   KC_TRNS,                                             KC_TRNS,   KC_TRNS,   KC_TRNS,   KC_TRNS,   KC_PGDN,   KC_TRNS
	// )
};
