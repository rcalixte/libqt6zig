#pragma once
#ifndef QML_LIBQQMLAPPLICATIONENGINE_H
#define QML_LIBQQMLAPPLICATIONENGINE_H

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
typedef struct QMetaMethod QMetaMethod;
typedef struct QMetaObject QMetaObject;
typedef struct QObject QObject;
typedef struct QQmlApplicationEngine QQmlApplicationEngine;
typedef struct QQmlEngine QQmlEngine;
typedef struct QTimerEvent QTimerEvent;
typedef struct QUrl QUrl;
typedef struct QVariant QVariant;
#endif

QQmlApplicationEngine* QQmlApplicationEngine_new();
QQmlApplicationEngine* QQmlApplicationEngine_new2(const QUrl* url);
QQmlApplicationEngine* QQmlApplicationEngine_new3(libqt_string uri, libqt_string typeName);
QQmlApplicationEngine* QQmlApplicationEngine_new4(const libqt_string filePath);
QQmlApplicationEngine* QQmlApplicationEngine_new5(QObject* parent);
QQmlApplicationEngine* QQmlApplicationEngine_new6(const QUrl* url, QObject* parent);
QQmlApplicationEngine* QQmlApplicationEngine_new7(libqt_string uri, libqt_string typeName, QObject* parent);
QQmlApplicationEngine* QQmlApplicationEngine_new8(const libqt_string filePath, QObject* parent);
QMetaObject* QQmlApplicationEngine_MetaObject(const QQmlApplicationEngine* self);
void* QQmlApplicationEngine_Metacast(QQmlApplicationEngine* self, const char* param1);
int QQmlApplicationEngine_Metacall(QQmlApplicationEngine* self, int param1, int param2, void** param3);
libqt_string QQmlApplicationEngine_Tr(const char* s);
libqt_list /* of QObject* */ QQmlApplicationEngine_RootObjects(const QQmlApplicationEngine* self);
void QQmlApplicationEngine_Load(QQmlApplicationEngine* self, const QUrl* url);
void QQmlApplicationEngine_Load2(QQmlApplicationEngine* self, const libqt_string filePath);
void QQmlApplicationEngine_LoadFromModule(QQmlApplicationEngine* self, libqt_string uri, libqt_string typeName);
void QQmlApplicationEngine_SetInitialProperties(QQmlApplicationEngine* self, const libqt_map /* of libqt_string to QVariant* */ initialProperties);
void QQmlApplicationEngine_SetExtraFileSelectors(QQmlApplicationEngine* self, const libqt_list /* of libqt_string */ extraFileSelectors);
void QQmlApplicationEngine_LoadData(QQmlApplicationEngine* self, const libqt_string data);
void QQmlApplicationEngine_ObjectCreated(QQmlApplicationEngine* self, QObject* object, const QUrl* url);
void QQmlApplicationEngine_Connect_ObjectCreated(QQmlApplicationEngine* self, intptr_t slot);
void QQmlApplicationEngine_ObjectCreationFailed(QQmlApplicationEngine* self, const QUrl* url);
void QQmlApplicationEngine_Connect_ObjectCreationFailed(QQmlApplicationEngine* self, intptr_t slot);
libqt_string QQmlApplicationEngine_Tr2(const char* s, const char* c);
libqt_string QQmlApplicationEngine_Tr3(const char* s, const char* c, int n);
void QQmlApplicationEngine_LoadData2(QQmlApplicationEngine* self, const libqt_string data, const QUrl* url);
void QQmlApplicationEngine_OnMetaObject(const QQmlApplicationEngine* self, intptr_t slot);
QMetaObject* QQmlApplicationEngine_SuperMetaObject(const QQmlApplicationEngine* self);
void QQmlApplicationEngine_OnMetacast(QQmlApplicationEngine* self, intptr_t slot);
void* QQmlApplicationEngine_SuperMetacast(QQmlApplicationEngine* self, const char* param1);
void QQmlApplicationEngine_OnMetacall(QQmlApplicationEngine* self, intptr_t slot);
int QQmlApplicationEngine_SuperMetacall(QQmlApplicationEngine* self, int param1, int param2, void** param3);
bool QQmlApplicationEngine_Event(QQmlApplicationEngine* self, QEvent* param1);
void QQmlApplicationEngine_OnEvent(QQmlApplicationEngine* self, intptr_t slot);
bool QQmlApplicationEngine_SuperEvent(QQmlApplicationEngine* self, QEvent* param1);
bool QQmlApplicationEngine_EventFilter(QQmlApplicationEngine* self, QObject* watched, QEvent* event);
void QQmlApplicationEngine_OnEventFilter(QQmlApplicationEngine* self, intptr_t slot);
bool QQmlApplicationEngine_SuperEventFilter(QQmlApplicationEngine* self, QObject* watched, QEvent* event);
void QQmlApplicationEngine_TimerEvent(QQmlApplicationEngine* self, QTimerEvent* event);
void QQmlApplicationEngine_OnTimerEvent(QQmlApplicationEngine* self, intptr_t slot);
void QQmlApplicationEngine_SuperTimerEvent(QQmlApplicationEngine* self, QTimerEvent* event);
void QQmlApplicationEngine_ChildEvent(QQmlApplicationEngine* self, QChildEvent* event);
void QQmlApplicationEngine_OnChildEvent(QQmlApplicationEngine* self, intptr_t slot);
void QQmlApplicationEngine_SuperChildEvent(QQmlApplicationEngine* self, QChildEvent* event);
void QQmlApplicationEngine_CustomEvent(QQmlApplicationEngine* self, QEvent* event);
void QQmlApplicationEngine_OnCustomEvent(QQmlApplicationEngine* self, intptr_t slot);
void QQmlApplicationEngine_SuperCustomEvent(QQmlApplicationEngine* self, QEvent* event);
void QQmlApplicationEngine_ConnectNotify(QQmlApplicationEngine* self, const QMetaMethod* signal);
void QQmlApplicationEngine_OnConnectNotify(QQmlApplicationEngine* self, intptr_t slot);
void QQmlApplicationEngine_SuperConnectNotify(QQmlApplicationEngine* self, const QMetaMethod* signal);
void QQmlApplicationEngine_DisconnectNotify(QQmlApplicationEngine* self, const QMetaMethod* signal);
void QQmlApplicationEngine_OnDisconnectNotify(QQmlApplicationEngine* self, intptr_t slot);
void QQmlApplicationEngine_SuperDisconnectNotify(QQmlApplicationEngine* self, const QMetaMethod* signal);
QObject* QQmlApplicationEngine_Sender(const QQmlApplicationEngine* self);
void QQmlApplicationEngine_OnSender(const QQmlApplicationEngine* self, intptr_t slot);
QObject* QQmlApplicationEngine_SuperSender(const QQmlApplicationEngine* self);
int QQmlApplicationEngine_SenderSignalIndex(const QQmlApplicationEngine* self);
void QQmlApplicationEngine_OnSenderSignalIndex(const QQmlApplicationEngine* self, intptr_t slot);
int QQmlApplicationEngine_SuperSenderSignalIndex(const QQmlApplicationEngine* self);
int QQmlApplicationEngine_Receivers(const QQmlApplicationEngine* self, const char* signal);
void QQmlApplicationEngine_OnReceivers(const QQmlApplicationEngine* self, intptr_t slot);
int QQmlApplicationEngine_SuperReceivers(const QQmlApplicationEngine* self, const char* signal);
bool QQmlApplicationEngine_IsSignalConnected(const QQmlApplicationEngine* self, const QMetaMethod* signal);
void QQmlApplicationEngine_OnIsSignalConnected(const QQmlApplicationEngine* self, intptr_t slot);
bool QQmlApplicationEngine_SuperIsSignalConnected(const QQmlApplicationEngine* self, const QMetaMethod* signal);
void QQmlApplicationEngine_Delete(QQmlApplicationEngine* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
