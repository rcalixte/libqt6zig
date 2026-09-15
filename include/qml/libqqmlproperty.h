#pragma once
#ifndef QML_LIBQQMLPROPERTY_H
#define QML_LIBQQMLPROPERTY_H

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
#else
typedef struct QMetaMethod QMetaMethod;
typedef struct QMetaProperty QMetaProperty;
typedef struct QMetaType QMetaType;
typedef struct QObject QObject;
typedef struct QQmlContext QQmlContext;
typedef struct QQmlEngine QQmlEngine;
typedef struct QQmlProperty QQmlProperty;
typedef struct QVariant QVariant;
#endif

QQmlProperty* QQmlProperty_new();
QQmlProperty* QQmlProperty_new2(QObject* param1);
QQmlProperty* QQmlProperty_new3(QObject* param1, QQmlContext* param2);
QQmlProperty* QQmlProperty_new4(QObject* param1, QQmlEngine* param2);
QQmlProperty* QQmlProperty_new5(QObject* param1, const libqt_string param2);
QQmlProperty* QQmlProperty_new6(QObject* param1, const libqt_string param2, QQmlContext* param3);
QQmlProperty* QQmlProperty_new7(QObject* param1, const libqt_string param2, QQmlEngine* param3);
QQmlProperty* QQmlProperty_new8(const QQmlProperty* param1);
void QQmlProperty_OperatorAssign(QQmlProperty* self, const QQmlProperty* param1);
void QQmlProperty_Swap(QQmlProperty* self, QQmlProperty* other);
bool QQmlProperty_OperatorEqual(const QQmlProperty* self, const QQmlProperty* param1);
int QQmlProperty_Type(const QQmlProperty* self);
bool QQmlProperty_IsValid(const QQmlProperty* self);
bool QQmlProperty_IsProperty(const QQmlProperty* self);
bool QQmlProperty_IsSignalProperty(const QQmlProperty* self);
int QQmlProperty_PropertyType(const QQmlProperty* self);
QMetaType* QQmlProperty_PropertyMetaType(const QQmlProperty* self);
int QQmlProperty_PropertyTypeCategory(const QQmlProperty* self);
const char* QQmlProperty_PropertyTypeName(const QQmlProperty* self);
libqt_string QQmlProperty_Name(const QQmlProperty* self);
QVariant* QQmlProperty_Read(const QQmlProperty* self);
QVariant* QQmlProperty_Read2(const QObject* param1, const libqt_string param2);
QVariant* QQmlProperty_Read3(const QObject* param1, const libqt_string param2, QQmlContext* param3);
QVariant* QQmlProperty_Read4(const QObject* param1, const libqt_string param2, QQmlEngine* param3);
bool QQmlProperty_Write(const QQmlProperty* self, const QVariant* param1);
bool QQmlProperty_Write2(QObject* param1, const libqt_string param2, const QVariant* param3);
bool QQmlProperty_Write3(QObject* param1, const libqt_string param2, const QVariant* param3, QQmlContext* param4);
bool QQmlProperty_Write4(QObject* param1, const libqt_string param2, const QVariant* param3, QQmlEngine* param4);
bool QQmlProperty_Reset(const QQmlProperty* self);
bool QQmlProperty_HasNotifySignal(const QQmlProperty* self);
bool QQmlProperty_NeedsNotifySignal(const QQmlProperty* self);
bool QQmlProperty_ConnectNotifySignal(const QQmlProperty* self, QObject* dest, const char* slot);
bool QQmlProperty_ConnectNotifySignal2(const QQmlProperty* self, QObject* dest, int method);
bool QQmlProperty_IsWritable(const QQmlProperty* self);
bool QQmlProperty_IsBindable(const QQmlProperty* self);
bool QQmlProperty_IsDesignable(const QQmlProperty* self);
bool QQmlProperty_IsResettable(const QQmlProperty* self);
QObject* QQmlProperty_Object(const QQmlProperty* self);
int QQmlProperty_Index(const QQmlProperty* self);
QMetaProperty* QQmlProperty_Property(const QQmlProperty* self);
QMetaMethod* QQmlProperty_Method(const QQmlProperty* self);
void QQmlProperty_Delete(QQmlProperty* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
