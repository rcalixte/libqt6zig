#pragma once
#ifndef QML_LIBQQMLLIST_H
#define QML_LIBQQMLLIST_H

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
#else
typedef struct QMetaObject QMetaObject;
typedef struct QObject QObject;
typedef struct QQmlEngine QQmlEngine;
typedef struct QQmlListReference QQmlListReference;
typedef struct QVariant QVariant;
#endif

QQmlListReference* QQmlListReference_new();
QQmlListReference* QQmlListReference_new2(const QVariant* variant);
QQmlListReference* QQmlListReference_new3(QObject* o, const char* property);
QQmlListReference* QQmlListReference_new4(const QVariant* variant);
QQmlListReference* QQmlListReference_new5(QObject* o, const char* property);
QQmlListReference* QQmlListReference_new6(const QQmlListReference* param1);
QQmlListReference* QQmlListReference_new7(const QVariant* variant, QQmlEngine* engine);
QQmlListReference* QQmlListReference_new8(QObject* o, const char* property, QQmlEngine* engine);
void QQmlListReference_OperatorAssign(QQmlListReference* self, const QQmlListReference* param1);
bool QQmlListReference_IsValid(const QQmlListReference* self);
QObject* QQmlListReference_Object(const QQmlListReference* self);
QMetaObject* QQmlListReference_ListElementType(const QQmlListReference* self);
bool QQmlListReference_CanAppend(const QQmlListReference* self);
bool QQmlListReference_CanAt(const QQmlListReference* self);
bool QQmlListReference_CanClear(const QQmlListReference* self);
bool QQmlListReference_CanCount(const QQmlListReference* self);
bool QQmlListReference_CanReplace(const QQmlListReference* self);
bool QQmlListReference_CanRemoveLast(const QQmlListReference* self);
bool QQmlListReference_IsManipulable(const QQmlListReference* self);
bool QQmlListReference_IsReadable(const QQmlListReference* self);
bool QQmlListReference_Append(const QQmlListReference* self, QObject* param1);
QObject* QQmlListReference_At(const QQmlListReference* self, long long param1);
bool QQmlListReference_Clear(const QQmlListReference* self);
ptrdiff_t QQmlListReference_Count(const QQmlListReference* self);
ptrdiff_t QQmlListReference_Size(const QQmlListReference* self);
bool QQmlListReference_Replace(const QQmlListReference* self, long long param1, QObject* param2);
bool QQmlListReference_RemoveLast(const QQmlListReference* self);
bool QQmlListReference_OperatorEqual(const QQmlListReference* self, const QQmlListReference* other);
void QQmlListReference_Delete(QQmlListReference* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
