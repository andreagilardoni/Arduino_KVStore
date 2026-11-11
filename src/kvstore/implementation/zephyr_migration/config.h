/*
 * This file is part of Arduino_KVStore.
 *
 * Copyright (c) 2024 Arduino SA
 *
 * This Source Code Form is subject to the terms of the Mozilla Public
 * License, v. 2.0. If a copy of the MPL was not distributed with this
 * file, You can obtain one at http://mozilla.org/MPL/2.0/.
 */

#if defined(ARDUINO_PORTENTA_H7_M7) || defined(ARDUINO_NICLA_VISION) \
    || defined(ARDUINO_OPTA) || defined(ARDUINO_GIGA)

#ifndef ZEPHYR_MIGRATE_TDBSTORE
#define ZEPHYR_MIGRATE_TDBSTORE 1
#endif

#if !defined(ZEPHYR_MIGRATE_TDBSTORE_AUTO) && defined(ZEPHYR_MIGRATE_TDBSTORE)
#define ZEPHYR_MIGRATE_TDBSTORE_AUTO 1
#endif

#endif
