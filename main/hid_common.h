/*
 * SPDX-FileCopyrightText: 2024 Tipz Team
 *
 * SPDX-License-Identifier: Unlicense OR CC0-1.0
 */

#ifndef _HID_COMMON_H_
#define _HID_COMMON_H_

/* Defines the enabled device role */
#define CONFIG_PROJECT_HID_DEVICE_ROLE 0

typedef struct {
#if CONFIG_PROJECT_HID_DEVICE_ROLE == 1
    char c;
#elif CONFIG_PROJECT_HID_DEVICE_ROLE == 2
    uint8_t buttons;
    int8_t dx;
    int8_t dy;
    int8_t wheel;
#else
    void *reserved;
#endif
} ble_device_data;

void usbhid_init(void);
void ble_device_callback(ble_device_data bdata);

#endif /* _HID_COMMON_H_ */
