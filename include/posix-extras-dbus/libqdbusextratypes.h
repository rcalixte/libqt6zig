#pragma once
#ifndef SRC_POSIX_EXTRAS_DBUSC_LIBQDBUSEXTRATYPES_H
#define SRC_POSIX_EXTRAS_DBUSC_LIBQDBUSEXTRATYPES_H

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
#else
typedef struct QDBusObjectPath QDBusObjectPath;
typedef struct QDBusSignature QDBusSignature;
typedef struct QDBusVariant QDBusVariant;
typedef struct QVariant QVariant;
#endif

QDBusObjectPath* QDBusObjectPath_new();
QDBusObjectPath* QDBusObjectPath_new2(const char* path);
QDBusObjectPath* QDBusObjectPath_new3(const libqt_string path);
QDBusObjectPath* QDBusObjectPath_new4(const QDBusObjectPath* param1);
void QDBusObjectPath_Swap(QDBusObjectPath* self, QDBusObjectPath* other);
void QDBusObjectPath_SetPath(QDBusObjectPath* self, const libqt_string path);
libqt_string QDBusObjectPath_Path(const QDBusObjectPath* self);
QVariant* QDBusObjectPath_ToQVariant(const QDBusObjectPath* self);
void QDBusObjectPath_Delete(QDBusObjectPath* self);

QDBusSignature* QDBusSignature_new();
QDBusSignature* QDBusSignature_new2(const char* signature);
QDBusSignature* QDBusSignature_new3(const libqt_string signature);
QDBusSignature* QDBusSignature_new4(const QDBusSignature* param1);
void QDBusSignature_Swap(QDBusSignature* self, QDBusSignature* other);
void QDBusSignature_SetSignature(QDBusSignature* self, const libqt_string signature);
libqt_string QDBusSignature_Signature(const QDBusSignature* self);
void QDBusSignature_Delete(QDBusSignature* self);

QDBusVariant* QDBusVariant_new();
QDBusVariant* QDBusVariant_new2(const QVariant* variant);
void QDBusVariant_Swap(QDBusVariant* self, QDBusVariant* other);
void QDBusVariant_SetVariant(QDBusVariant* self, const QVariant* variant);
QVariant* QDBusVariant_Variant(const QDBusVariant* self);
void QDBusVariant_OperatorAssign(QDBusVariant* self, const QDBusVariant* param1);
void QDBusVariant_Delete(QDBusVariant* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
