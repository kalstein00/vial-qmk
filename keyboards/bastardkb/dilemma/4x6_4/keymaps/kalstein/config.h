#pragma once

#define VIAL_KEYBOARD_UID {0x5A, 0x3C, 0x8E, 0xFD, 0x1B, 0x24, 0x76, 0x09}

/* Unlock Vial by holding Esc during plug-in */
#define VIAL_UNLOCK_COMBO_ROWS { 0 }
#define VIAL_UNLOCK_COMBO_COLS { 0 }

/* Layer configuration */
#define DYNAMIC_KEYMAP_LAYER_COUNT 8

/* Split keyboard state sync */
#define SPLIT_LAYER_STATE_ENABLE
#define SPLIT_LED_STATE_ENABLE

/* RGB Matrix settings */
#define ENABLE_RGB_MATRIX_BREATHING
#define RGB_MATRIX_TIMEOUT 60000 // number of milliseconds to wait until rgb automatically turns off
#define RGB_MATRIX_SLEEP // turn off effects when suspended

/* Tapping settings */
#define TAPPING_TERM 170
#define QUICK_TAP_TERM 0
//#define PERMISSIVE_HOLD

/* System settings */
#undef MAX_DEFERRED_EXECUTORS
#define MAX_DEFERRED_EXECUTORS 10
