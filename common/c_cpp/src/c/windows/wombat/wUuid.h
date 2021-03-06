/* $Id$
 *
 * OpenMAMA: The open middleware agnostic messaging API
 * Copyright (C) 2011 NYSE Technologies, Inc.
 *
 * This library is free software; you can redistribute it and/or
 * modify it under the terms of the GNU Lesser General Public
 * License as published by the Free Software Foundation; either
 * version 2.1 of the License, or (at your option) any later version.
 *
 * This library is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
 * Lesser General Public License for more details.
 *
 * You should have received a copy of the GNU Lesser General Public
 * License along with this library; if not, write to the Free Software
 * Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston, MA
 * 02110-1301 USA
 */
#ifndef WUUID_H__
#define WUUID_H__

#include "wombat/port.h"

typedef char* wUuid;

#if defined(__cplusplus)
extern "C" {
#endif

#define wUuid_clear(uuid) uuid = NULL;

COMMONExpDLL
void wUuid_generate_time (wUuid myUuid);

COMMONExpDLL
void wUuid_unparse (wUuid myUuid, char* out);

#if defined(__cplusplus)
} /* extern "C" */
#endif

#endif /* WUUID_H__ */
