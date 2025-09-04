#pragma once
#ifndef SRC_POSIX_EXTRAS_DBUSC_LIBQDBUSMETATYPE_H
#define SRC_POSIX_EXTRAS_DBUSC_LIBQDBUSMETATYPE_H

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
#else
typedef struct QDBusArgument QDBusArgument;
typedef struct QDBusMetaType QDBusMetaType;
typedef struct QMetaType QMetaType;
#endif

QDBusMetaType* QDBusMetaType_new(const QDBusMetaType* other);
QDBusMetaType* QDBusMetaType_new2(QDBusMetaType* other);
void QDBusMetaType_CopyAssign(QDBusMetaType* self, QDBusMetaType* other);
void QDBusMetaType_MoveAssign(QDBusMetaType* self, QDBusMetaType* other);
bool QDBusMetaType_Marshall(QDBusArgument* param1, QMetaType* id, const void* data);
bool QDBusMetaType_Demarshall(const QDBusArgument* param1, QMetaType* id, void* data);
void QDBusMetaType_RegisterCustomType(QMetaType* typeVal, const libqt_string signature);
QMetaType* QDBusMetaType_SignatureToMetaType(const char* signature);
const char* QDBusMetaType_TypeToSignature(QMetaType* typeVal);
void QDBusMetaType_Delete(QDBusMetaType* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
