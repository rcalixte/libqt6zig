#pragma once
#ifndef SRC_POSIX_EXTRAS_DBUSC_LIBQDBUSABSTRACTADAPTOR_H
#define SRC_POSIX_EXTRAS_DBUSC_LIBQDBUSABSTRACTADAPTOR_H

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
#else
typedef struct QDBusAbstractAdaptor QDBusAbstractAdaptor;
typedef struct QMetaMethod QMetaMethod;
typedef struct QMetaObject QMetaObject;
typedef struct QObject QObject;
#endif

QMetaObject* QDBusAbstractAdaptor_MetaObject(const QDBusAbstractAdaptor* self);
void* QDBusAbstractAdaptor_Metacast(QDBusAbstractAdaptor* self, const char* param1);
int QDBusAbstractAdaptor_Metacall(QDBusAbstractAdaptor* self, int param1, int param2, void** param3);
void QDBusAbstractAdaptor_Delete(QDBusAbstractAdaptor* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
