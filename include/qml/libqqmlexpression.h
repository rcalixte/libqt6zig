#pragma once
#ifndef QML_LIBQQMLEXPRESSION_H
#define QML_LIBQQMLEXPRESSION_H

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
#else
typedef struct QChildEvent QChildEvent;
typedef struct QEvent QEvent;
typedef struct QMetaMethod QMetaMethod;
typedef struct QMetaObject QMetaObject;
typedef struct QObject QObject;
typedef struct QQmlContext QQmlContext;
typedef struct QQmlEngine QQmlEngine;
typedef struct QQmlError QQmlError;
typedef struct QQmlExpression QQmlExpression;
typedef struct QQmlScriptString QQmlScriptString;
typedef struct QTimerEvent QTimerEvent;
typedef struct QVariant QVariant;
#endif

QQmlExpression* QQmlExpression_new();
QQmlExpression* QQmlExpression_new2(QQmlContext* param1, QObject* param2, const libqt_string param3);
QQmlExpression* QQmlExpression_new3(const QQmlScriptString* param1);
QQmlExpression* QQmlExpression_new4(QQmlContext* param1, QObject* param2, const libqt_string param3, QObject* param4);
QQmlExpression* QQmlExpression_new5(const QQmlScriptString* param1, QQmlContext* param2);
QQmlExpression* QQmlExpression_new6(const QQmlScriptString* param1, QQmlContext* param2, QObject* param3);
QQmlExpression* QQmlExpression_new7(const QQmlScriptString* param1, QQmlContext* param2, QObject* param3, QObject* param4);
QMetaObject* QQmlExpression_MetaObject(const QQmlExpression* self);
void* QQmlExpression_Metacast(QQmlExpression* self, const char* param1);
int QQmlExpression_Metacall(QQmlExpression* self, int param1, int param2, void** param3);
libqt_string QQmlExpression_Tr(const char* s);
QQmlEngine* QQmlExpression_Engine(const QQmlExpression* self);
QQmlContext* QQmlExpression_Context(const QQmlExpression* self);
libqt_string QQmlExpression_Expression(const QQmlExpression* self);
void QQmlExpression_SetExpression(QQmlExpression* self, const libqt_string expression);
bool QQmlExpression_NotifyOnValueChanged(const QQmlExpression* self);
void QQmlExpression_SetNotifyOnValueChanged(QQmlExpression* self, bool notifyOnValueChanged);
libqt_string QQmlExpression_SourceFile(const QQmlExpression* self);
int QQmlExpression_LineNumber(const QQmlExpression* self);
int QQmlExpression_ColumnNumber(const QQmlExpression* self);
void QQmlExpression_SetSourceLocation(QQmlExpression* self, const libqt_string fileName, int line);
QObject* QQmlExpression_ScopeObject(const QQmlExpression* self);
bool QQmlExpression_HasError(const QQmlExpression* self);
void QQmlExpression_ClearError(QQmlExpression* self);
QQmlError* QQmlExpression_Error(const QQmlExpression* self);
QVariant* QQmlExpression_Evaluate(QQmlExpression* self);
void QQmlExpression_ValueChanged(QQmlExpression* self);
void QQmlExpression_Connect_ValueChanged(QQmlExpression* self, intptr_t slot);
libqt_string QQmlExpression_Tr2(const char* s, const char* c);
libqt_string QQmlExpression_Tr3(const char* s, const char* c, int n);
void QQmlExpression_SetSourceLocation3(QQmlExpression* self, const libqt_string fileName, int line, int column);
QVariant* QQmlExpression_Evaluate1(QQmlExpression* self, bool* valueIsUndefined);
void QQmlExpression_OnMetaObject(const QQmlExpression* self, intptr_t slot);
QMetaObject* QQmlExpression_SuperMetaObject(const QQmlExpression* self);
void QQmlExpression_OnMetacast(QQmlExpression* self, intptr_t slot);
void* QQmlExpression_SuperMetacast(QQmlExpression* self, const char* param1);
void QQmlExpression_OnMetacall(QQmlExpression* self, intptr_t slot);
int QQmlExpression_SuperMetacall(QQmlExpression* self, int param1, int param2, void** param3);
bool QQmlExpression_Event(QQmlExpression* self, QEvent* event);
void QQmlExpression_OnEvent(QQmlExpression* self, intptr_t slot);
bool QQmlExpression_SuperEvent(QQmlExpression* self, QEvent* event);
bool QQmlExpression_EventFilter(QQmlExpression* self, QObject* watched, QEvent* event);
void QQmlExpression_OnEventFilter(QQmlExpression* self, intptr_t slot);
bool QQmlExpression_SuperEventFilter(QQmlExpression* self, QObject* watched, QEvent* event);
void QQmlExpression_TimerEvent(QQmlExpression* self, QTimerEvent* event);
void QQmlExpression_OnTimerEvent(QQmlExpression* self, intptr_t slot);
void QQmlExpression_SuperTimerEvent(QQmlExpression* self, QTimerEvent* event);
void QQmlExpression_ChildEvent(QQmlExpression* self, QChildEvent* event);
void QQmlExpression_OnChildEvent(QQmlExpression* self, intptr_t slot);
void QQmlExpression_SuperChildEvent(QQmlExpression* self, QChildEvent* event);
void QQmlExpression_CustomEvent(QQmlExpression* self, QEvent* event);
void QQmlExpression_OnCustomEvent(QQmlExpression* self, intptr_t slot);
void QQmlExpression_SuperCustomEvent(QQmlExpression* self, QEvent* event);
void QQmlExpression_ConnectNotify(QQmlExpression* self, const QMetaMethod* signal);
void QQmlExpression_OnConnectNotify(QQmlExpression* self, intptr_t slot);
void QQmlExpression_SuperConnectNotify(QQmlExpression* self, const QMetaMethod* signal);
void QQmlExpression_DisconnectNotify(QQmlExpression* self, const QMetaMethod* signal);
void QQmlExpression_OnDisconnectNotify(QQmlExpression* self, intptr_t slot);
void QQmlExpression_SuperDisconnectNotify(QQmlExpression* self, const QMetaMethod* signal);
QObject* QQmlExpression_Sender(const QQmlExpression* self);
void QQmlExpression_OnSender(const QQmlExpression* self, intptr_t slot);
QObject* QQmlExpression_SuperSender(const QQmlExpression* self);
int QQmlExpression_SenderSignalIndex(const QQmlExpression* self);
void QQmlExpression_OnSenderSignalIndex(const QQmlExpression* self, intptr_t slot);
int QQmlExpression_SuperSenderSignalIndex(const QQmlExpression* self);
int QQmlExpression_Receivers(const QQmlExpression* self, const char* signal);
void QQmlExpression_OnReceivers(const QQmlExpression* self, intptr_t slot);
int QQmlExpression_SuperReceivers(const QQmlExpression* self, const char* signal);
bool QQmlExpression_IsSignalConnected(const QQmlExpression* self, const QMetaMethod* signal);
void QQmlExpression_OnIsSignalConnected(const QQmlExpression* self, intptr_t slot);
bool QQmlExpression_SuperIsSignalConnected(const QQmlExpression* self, const QMetaMethod* signal);
void QQmlExpression_Delete(QQmlExpression* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
