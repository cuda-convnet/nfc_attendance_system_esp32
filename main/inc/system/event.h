/*
 * event.c
 *
 *  Created on: 2018-03-04 20:07
 *      Author: Jack Chen <redchenjs@live.com>
 */

#ifndef INC_SYSTEM_EVENT_C_
#define INC_SYSTEM_EVENT_C_

#include "freertos/FreeRTOS.h"
#include "freertos/event_groups.h"

enum system_event_group_bits {
    WIFI_READY_BIT = BIT0
};

enum task_event_group_bits {
    TOKEN_VERIFIER_READY_BIT = BIT0,
    NFC_INITIATOR_READY_BIT  = BIT1,
    SNTP_CLIENT_READY_BIT    = BIT2,
    MP3_PLAYER_READY_BIT     = BIT3,
    GUI_RELOAD_BIT           = BIT4
};

extern EventGroupHandle_t system_event_group;
extern EventGroupHandle_t task_event_group;

#include "esp_err.h"
#include "esp_event_loop.h"

extern esp_err_t system_event_handler(void *ctx, system_event_t *event);
extern void event_init(void);

#endif /* INC_SYSTEM_EVENT_C_ */