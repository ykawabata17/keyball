#pragma once

#define TAP_CODE_DELAY 5

#define POINTING_DEVICE_AUTO_MOUSE_ENABLE
#define AUTO_MOUSE_DEFAULT_LAYER 1

// OLED の消灯までの時間
#define OLED_TIMEOUT 30000

// レイヤーの数
#define DYNAMIC_KEYMAP_LAYER_COUNT 6

#define KEYBALL_CPI_DEFAULT 1100 // マウス速度 (default: 500)
#define KEYBALL_SCROLL_DIV_DEFAULT 5 // スクロール速度 (default: 4)

// コンボキーの同時押し判定時間
#define COMBO_TERM 80

// マウスレイヤーの有効化
#define POINTING_DEVICE_AUTO_MOUSE_ENABLE // 有効化
#define AUTO_MOUSE_DEFAULT_LAYER 4 // 切り替えるマウスレイヤー番号を指定
#define AUTO_MOUSE_TIME 300 // マウスが止まってから元のレイヤーに戻るまでの時間(ms)
