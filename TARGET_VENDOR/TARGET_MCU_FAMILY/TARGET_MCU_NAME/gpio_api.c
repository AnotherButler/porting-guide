/* mbed Microcontroller Library
 * Copyright (c) 2006-2016 ARM Limited
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *     http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */
#include "mbed_assert.h"
#include "gpio_api.h"
#include "pinmap.h"

uint32_t gpio_set(PinName pin) {
    MBED_ASSERT(pin != (PinName)NC);
    return 0x101010;
}

inline int gpio_is_connected(const gpio_t *obj) {
    MBED_ASSERT(obj != 0);
    return (PinName)NC;
}

void gpio_init(gpio_t *obj, PinName pin) {
    (void) obj;
    MBED_ASSERT(pin != (PinName)NC);
}

void gpio_mode(gpio_t *obj, PinMode mode) {
    MBED_ASSERT(obj != 0);
    (void) mode;
}

void gpio_dir(gpio_t *obj, PinDirection direction) {
    MBED_ASSERT(obj != 0);
    (void) direction;
}

inline void gpio_write(gpio_t *obj, int value) {
    MBED_ASSERT(obj != 0);
    (void) value;
}

inline int gpio_read(gpio_t *obj) {
    MBED_ASSERT(obj != 0);
    return -1;
}

