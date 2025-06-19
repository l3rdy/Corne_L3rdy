#pragma once

#include "quantum.h"
#include "oled_driver.h"

void luna_init(void);
void luna_process_record(uint16_t keycode, keyrecord_t *record);
void luna_update_status(void);
void render_luna(int x, int y);

extern int current_wpm;
extern led_t led_usb_state;
extern bool isSneaking;
extern bool isJumping;
extern bool showedJump;
