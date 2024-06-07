#pragma once

#define TAP_CODE_DELAY 5

// OLED 消灯までの時間(ミリ秒)
#define OLED_TIMEOUT 30000

// レイヤー切り替えの長押しまでの判定時間(ミリ秒)
#define TAPPING_TERM 180

// レイヤーの数
#define DYNAMIC_KEYMAP_LAYER_COUNT 6 

// マウス速度（default: 500）
#define KEYBALL_CPI_DEFAULT 1100
// スクロール速度（default: 4）
#define KEYBALL_SCROLL_DIV_DEFAULT 5

// コンボの同時押し時間
#define COMBO_TERM 80

// マウスレイヤーの設定
// #define POINTING_DEVICE_AUTO_MOUSE_ENABLE // 有効化
// #define AUTO_MOUSE_DEFAULT_LAYER 5 // 切り替えるマウスレイヤー番号を指定
// #define AUTO_MOUSE_TIME 300 // マウスが止まってから元のレイヤーに戻るまでの時間(ms)
