#pragma once
#ifndef QML_LIBQJSENGINE_H
#define QML_LIBQJSENGINE_H

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
typedef struct QJSEngine QJSEngine;
typedef struct QJSValue QJSValue;
typedef struct QMetaMethod QMetaMethod;
typedef struct QMetaObject QMetaObject;
typedef struct QObject QObject;
typedef struct QTimerEvent QTimerEvent;
#endif

QJSEngine* QJSEngine_new();
QJSEngine* QJSEngine_new2(QObject* parent);
QMetaObject* QJSEngine_MetaObject(const QJSEngine* self);
void* QJSEngine_Metacast(QJSEngine* self, const char* param1);
int QJSEngine_Metacall(QJSEngine* self, int param1, int param2, void** param3);
libqt_string QJSEngine_Tr(const char* s);
QJSValue* QJSEngine_GlobalObject(const QJSEngine* self);
QJSValue* QJSEngine_Evaluate(QJSEngine* self, const libqt_string program);
QJSValue* QJSEngine_ImportModule(QJSEngine* self, const libqt_string fileName);
bool QJSEngine_RegisterModule(QJSEngine* self, const libqt_string moduleName, const QJSValue* value);
QJSValue* QJSEngine_NewObject(QJSEngine* self);
QJSValue* QJSEngine_NewSymbol(QJSEngine* self, const libqt_string name);
QJSValue* QJSEngine_NewArray(QJSEngine* self);
QJSValue* QJSEngine_NewQObject(QJSEngine* self, QObject* object);
QJSValue* QJSEngine_NewQMetaObject(QJSEngine* self, const QMetaObject* metaObject);
QJSValue* QJSEngine_NewErrorObject(QJSEngine* self, int errorType);
void QJSEngine_CollectGarbage(QJSEngine* self);
void QJSEngine_SetObjectOwnership(QObject* param1, int param2);
int QJSEngine_ObjectOwnership(QObject* param1);
void QJSEngine_InstallExtensions(QJSEngine* self, int extensions);
void QJSEngine_SetInterrupted(QJSEngine* self, bool interrupted);
bool QJSEngine_IsInterrupted(const QJSEngine* self);
void QJSEngine_ThrowError(QJSEngine* self, const libqt_string message);
void QJSEngine_ThrowError2(QJSEngine* self, int errorType);
void QJSEngine_ThrowError3(QJSEngine* self, const QJSValue* errorVal);
bool QJSEngine_HasError(const QJSEngine* self);
QJSValue* QJSEngine_CatchError(QJSEngine* self);
libqt_string QJSEngine_UiLanguage(const QJSEngine* self);
void QJSEngine_SetUiLanguage(QJSEngine* self, const libqt_string language);
void QJSEngine_UiLanguageChanged(QJSEngine* self);
void QJSEngine_Connect_UiLanguageChanged(QJSEngine* self, intptr_t slot);
libqt_string QJSEngine_Tr2(const char* s, const char* c);
libqt_string QJSEngine_Tr3(const char* s, const char* c, int n);
QJSValue* QJSEngine_Evaluate2(QJSEngine* self, const libqt_string program, const libqt_string fileName);
QJSValue* QJSEngine_Evaluate3(QJSEngine* self, const libqt_string program, const libqt_string fileName, int lineNumber);
QJSValue* QJSEngine_Evaluate4(QJSEngine* self, const libqt_string program, const libqt_string fileName, int lineNumber, libqt_list /* of libqt_string */ exceptionStackTrace);
QJSValue* QJSEngine_NewArray1(QJSEngine* self, unsigned int length);
QJSValue* QJSEngine_NewErrorObject2(QJSEngine* self, int errorType, const libqt_string message);
void QJSEngine_InstallExtensions2(QJSEngine* self, int extensions, const QJSValue* object);
void QJSEngine_ThrowError22(QJSEngine* self, int errorType, const libqt_string message);
void QJSEngine_OnMetaObject(const QJSEngine* self, intptr_t slot);
QMetaObject* QJSEngine_SuperMetaObject(const QJSEngine* self);
void QJSEngine_OnMetacast(QJSEngine* self, intptr_t slot);
void* QJSEngine_SuperMetacast(QJSEngine* self, const char* param1);
void QJSEngine_OnMetacall(QJSEngine* self, intptr_t slot);
int QJSEngine_SuperMetacall(QJSEngine* self, int param1, int param2, void** param3);
bool QJSEngine_Event(QJSEngine* self, QEvent* event);
void QJSEngine_OnEvent(QJSEngine* self, intptr_t slot);
bool QJSEngine_SuperEvent(QJSEngine* self, QEvent* event);
bool QJSEngine_EventFilter(QJSEngine* self, QObject* watched, QEvent* event);
void QJSEngine_OnEventFilter(QJSEngine* self, intptr_t slot);
bool QJSEngine_SuperEventFilter(QJSEngine* self, QObject* watched, QEvent* event);
void QJSEngine_TimerEvent(QJSEngine* self, QTimerEvent* event);
void QJSEngine_OnTimerEvent(QJSEngine* self, intptr_t slot);
void QJSEngine_SuperTimerEvent(QJSEngine* self, QTimerEvent* event);
void QJSEngine_ChildEvent(QJSEngine* self, QChildEvent* event);
void QJSEngine_OnChildEvent(QJSEngine* self, intptr_t slot);
void QJSEngine_SuperChildEvent(QJSEngine* self, QChildEvent* event);
void QJSEngine_CustomEvent(QJSEngine* self, QEvent* event);
void QJSEngine_OnCustomEvent(QJSEngine* self, intptr_t slot);
void QJSEngine_SuperCustomEvent(QJSEngine* self, QEvent* event);
void QJSEngine_ConnectNotify(QJSEngine* self, const QMetaMethod* signal);
void QJSEngine_OnConnectNotify(QJSEngine* self, intptr_t slot);
void QJSEngine_SuperConnectNotify(QJSEngine* self, const QMetaMethod* signal);
void QJSEngine_DisconnectNotify(QJSEngine* self, const QMetaMethod* signal);
void QJSEngine_OnDisconnectNotify(QJSEngine* self, intptr_t slot);
void QJSEngine_SuperDisconnectNotify(QJSEngine* self, const QMetaMethod* signal);
QObject* QJSEngine_Sender(const QJSEngine* self);
void QJSEngine_OnSender(const QJSEngine* self, intptr_t slot);
QObject* QJSEngine_SuperSender(const QJSEngine* self);
int QJSEngine_SenderSignalIndex(const QJSEngine* self);
void QJSEngine_OnSenderSignalIndex(const QJSEngine* self, intptr_t slot);
int QJSEngine_SuperSenderSignalIndex(const QJSEngine* self);
int QJSEngine_Receivers(const QJSEngine* self, const char* signal);
void QJSEngine_OnReceivers(const QJSEngine* self, intptr_t slot);
int QJSEngine_SuperReceivers(const QJSEngine* self, const char* signal);
bool QJSEngine_IsSignalConnected(const QJSEngine* self, const QMetaMethod* signal);
void QJSEngine_OnIsSignalConnected(const QJSEngine* self, intptr_t slot);
bool QJSEngine_SuperIsSignalConnected(const QJSEngine* self, const QMetaMethod* signal);
void QJSEngine_Delete(QJSEngine* self);

QJSEngine* qjsengine_h_QjsEngine(const QObject* param1);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
