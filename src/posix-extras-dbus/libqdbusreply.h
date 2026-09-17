#pragma once
#ifndef POSIX_EXTRAS_DBUS_LIBQDBUSREPLY_H
#define POSIX_EXTRAS_DBUS_LIBQDBUSREPLY_H

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
#else
typedef struct QDBusError QDBusError;
typedef struct QDBusMessage QDBusMessage;
typedef struct QVariant QVariant;
#endif

void qdbusreply_h_QDBusReplyFill(const QDBusMessage* reply, QDBusError* error, QVariant* data);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
