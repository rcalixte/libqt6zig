#pragma once
#ifndef SRC_POSIX_EXTRAS_DBUSC_LIBQDBUSERROR_H
#define SRC_POSIX_EXTRAS_DBUSC_LIBQDBUSERROR_H

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
#endif

QDBusError* QDBusError_new();
QDBusError* QDBusError_new2(const QDBusMessage* msg);
QDBusError* QDBusError_new3(int errorVal, const libqt_string message);
QDBusError* QDBusError_new4(const QDBusError* other);
void QDBusError_OperatorAssign(QDBusError* self, const QDBusError* other);
void QDBusError_OperatorAssign2(QDBusError* self, const QDBusMessage* msg);
void QDBusError_Swap(QDBusError* self, QDBusError* other);
int QDBusError_Type(const QDBusError* self);
libqt_string QDBusError_Name(const QDBusError* self);
libqt_string QDBusError_Message(const QDBusError* self);
bool QDBusError_IsValid(const QDBusError* self);
libqt_string QDBusError_ErrorString(int errorVal);
void QDBusError_Delete(QDBusError* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
