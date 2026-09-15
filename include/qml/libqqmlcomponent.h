#pragma once
#ifndef QML_LIBQQMLCOMPONENT_H
#define QML_LIBQQMLCOMPONENT_H

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
typedef struct QQmlComponent QQmlComponent;
typedef struct QQmlContext QQmlContext;
typedef struct QQmlEngine QQmlEngine;
typedef struct QQmlError QQmlError;
typedef struct QQmlIncubator QQmlIncubator;
typedef struct QTimerEvent QTimerEvent;
typedef struct QUrl QUrl;
typedef struct QVariant QVariant;
#endif

QQmlComponent* QQmlComponent_new();
QQmlComponent* QQmlComponent_new2(QQmlEngine* param1);
QQmlComponent* QQmlComponent_new3(QQmlEngine* param1, const libqt_string fileName);
QQmlComponent* QQmlComponent_new4(QQmlEngine* param1, const libqt_string fileName, int mode);
QQmlComponent* QQmlComponent_new5(QQmlEngine* param1, const QUrl* url);
QQmlComponent* QQmlComponent_new6(QQmlEngine* param1, const QUrl* url, int mode);
QQmlComponent* QQmlComponent_new7(QQmlEngine* engine, libqt_string uri, libqt_string typeName);
QQmlComponent* QQmlComponent_new8(QQmlEngine* engine, libqt_string uri, libqt_string typeName, int mode);
QQmlComponent* QQmlComponent_new9(QObject* parent);
QQmlComponent* QQmlComponent_new10(QQmlEngine* param1, QObject* parent);
QQmlComponent* QQmlComponent_new11(QQmlEngine* param1, const libqt_string fileName, QObject* parent);
QQmlComponent* QQmlComponent_new12(QQmlEngine* param1, const libqt_string fileName, int mode, QObject* parent);
QQmlComponent* QQmlComponent_new13(QQmlEngine* param1, const QUrl* url, QObject* parent);
QQmlComponent* QQmlComponent_new14(QQmlEngine* param1, const QUrl* url, int mode, QObject* parent);
QQmlComponent* QQmlComponent_new15(QQmlEngine* engine, libqt_string uri, libqt_string typeName, QObject* parent);
QQmlComponent* QQmlComponent_new16(QQmlEngine* engine, libqt_string uri, libqt_string typeName, int mode, QObject* parent);
QMetaObject* QQmlComponent_MetaObject(const QQmlComponent* self);
void* QQmlComponent_Metacast(QQmlComponent* self, const char* param1);
int QQmlComponent_Metacall(QQmlComponent* self, int param1, int param2, void** param3);
libqt_string QQmlComponent_Tr(const char* s);
int QQmlComponent_Status(const QQmlComponent* self);
bool QQmlComponent_IsNull(const QQmlComponent* self);
bool QQmlComponent_IsReady(const QQmlComponent* self);
bool QQmlComponent_IsError(const QQmlComponent* self);
bool QQmlComponent_IsLoading(const QQmlComponent* self);
bool QQmlComponent_IsBound(const QQmlComponent* self);
libqt_list /* of QQmlError* */ QQmlComponent_Errors(const QQmlComponent* self);
libqt_string QQmlComponent_ErrorString(const QQmlComponent* self);
double QQmlComponent_Progress(const QQmlComponent* self);
QUrl* QQmlComponent_Url(const QQmlComponent* self);
QObject* QQmlComponent_Create(QQmlComponent* self, QQmlContext* context);
QObject* QQmlComponent_CreateWithInitialProperties(QQmlComponent* self, const libqt_map /* of libqt_string to QVariant* */ initialProperties);
void QQmlComponent_SetInitialProperties(QQmlComponent* self, QObject* component, const libqt_map /* of libqt_string to QVariant* */ properties);
QObject* QQmlComponent_BeginCreate(QQmlComponent* self, QQmlContext* param1);
void QQmlComponent_CompleteCreate(QQmlComponent* self);
void QQmlComponent_Create2(QQmlComponent* self, QQmlIncubator* param1);
QQmlContext* QQmlComponent_CreationContext(const QQmlComponent* self);
QQmlEngine* QQmlComponent_Engine(const QQmlComponent* self);
void QQmlComponent_LoadUrl(QQmlComponent* self, const QUrl* url);
void QQmlComponent_LoadUrl2(QQmlComponent* self, const QUrl* url, int mode);
void QQmlComponent_LoadFromModule(QQmlComponent* self, libqt_string uri, libqt_string typeName);
void QQmlComponent_SetData(QQmlComponent* self, const libqt_string param1, const QUrl* baseUrl);
void QQmlComponent_StatusChanged(QQmlComponent* self, int param1);
void QQmlComponent_Connect_StatusChanged(QQmlComponent* self, intptr_t slot);
void QQmlComponent_ProgressChanged(QQmlComponent* self, double param1);
void QQmlComponent_Connect_ProgressChanged(QQmlComponent* self, intptr_t slot);
libqt_string QQmlComponent_Tr2(const char* s, const char* c);
libqt_string QQmlComponent_Tr3(const char* s, const char* c, int n);
QObject* QQmlComponent_CreateWithInitialProperties2(QQmlComponent* self, const libqt_map /* of libqt_string to QVariant* */ initialProperties, QQmlContext* context);
void QQmlComponent_Create22(QQmlComponent* self, QQmlIncubator* param1, QQmlContext* context);
void QQmlComponent_Create3(QQmlComponent* self, QQmlIncubator* param1, QQmlContext* context, QQmlContext* forContext);
void QQmlComponent_LoadFromModule3(QQmlComponent* self, libqt_string uri, libqt_string typeName, int mode);
void QQmlComponent_OnMetaObject(const QQmlComponent* self, intptr_t slot);
QMetaObject* QQmlComponent_SuperMetaObject(const QQmlComponent* self);
void QQmlComponent_OnMetacast(QQmlComponent* self, intptr_t slot);
void* QQmlComponent_SuperMetacast(QQmlComponent* self, const char* param1);
void QQmlComponent_OnMetacall(QQmlComponent* self, intptr_t slot);
int QQmlComponent_SuperMetacall(QQmlComponent* self, int param1, int param2, void** param3);
void QQmlComponent_OnCreate(QQmlComponent* self, intptr_t slot);
QObject* QQmlComponent_SuperCreate(QQmlComponent* self, QQmlContext* context);
void QQmlComponent_OnBeginCreate(QQmlComponent* self, intptr_t slot);
QObject* QQmlComponent_SuperBeginCreate(QQmlComponent* self, QQmlContext* param1);
void QQmlComponent_OnCompleteCreate(QQmlComponent* self, intptr_t slot);
void QQmlComponent_SuperCompleteCreate(QQmlComponent* self);
bool QQmlComponent_Event(QQmlComponent* self, QEvent* event);
void QQmlComponent_OnEvent(QQmlComponent* self, intptr_t slot);
bool QQmlComponent_SuperEvent(QQmlComponent* self, QEvent* event);
bool QQmlComponent_EventFilter(QQmlComponent* self, QObject* watched, QEvent* event);
void QQmlComponent_OnEventFilter(QQmlComponent* self, intptr_t slot);
bool QQmlComponent_SuperEventFilter(QQmlComponent* self, QObject* watched, QEvent* event);
void QQmlComponent_TimerEvent(QQmlComponent* self, QTimerEvent* event);
void QQmlComponent_OnTimerEvent(QQmlComponent* self, intptr_t slot);
void QQmlComponent_SuperTimerEvent(QQmlComponent* self, QTimerEvent* event);
void QQmlComponent_ChildEvent(QQmlComponent* self, QChildEvent* event);
void QQmlComponent_OnChildEvent(QQmlComponent* self, intptr_t slot);
void QQmlComponent_SuperChildEvent(QQmlComponent* self, QChildEvent* event);
void QQmlComponent_CustomEvent(QQmlComponent* self, QEvent* event);
void QQmlComponent_OnCustomEvent(QQmlComponent* self, intptr_t slot);
void QQmlComponent_SuperCustomEvent(QQmlComponent* self, QEvent* event);
void QQmlComponent_ConnectNotify(QQmlComponent* self, const QMetaMethod* signal);
void QQmlComponent_OnConnectNotify(QQmlComponent* self, intptr_t slot);
void QQmlComponent_SuperConnectNotify(QQmlComponent* self, const QMetaMethod* signal);
void QQmlComponent_DisconnectNotify(QQmlComponent* self, const QMetaMethod* signal);
void QQmlComponent_OnDisconnectNotify(QQmlComponent* self, intptr_t slot);
void QQmlComponent_SuperDisconnectNotify(QQmlComponent* self, const QMetaMethod* signal);
QObject* QQmlComponent_CreateObject2(QQmlComponent* self);
void QQmlComponent_OnCreateObject2(QQmlComponent* self, intptr_t slot);
QObject* QQmlComponent_SuperCreateObject2(QQmlComponent* self);
QObject* QQmlComponent_CreateObject1(QQmlComponent* self, QObject* parent);
void QQmlComponent_OnCreateObject1(QQmlComponent* self, intptr_t slot);
QObject* QQmlComponent_SuperCreateObject1(QQmlComponent* self, QObject* parent);
QObject* QQmlComponent_CreateObject22(QQmlComponent* self, QObject* parent, const libqt_map /* of libqt_string to QVariant* */ properties);
void QQmlComponent_OnCreateObject22(QQmlComponent* self, intptr_t slot);
QObject* QQmlComponent_SuperCreateObject22(QQmlComponent* self, QObject* parent, const libqt_map /* of libqt_string to QVariant* */ properties);
QObject* QQmlComponent_Sender(const QQmlComponent* self);
void QQmlComponent_OnSender(const QQmlComponent* self, intptr_t slot);
QObject* QQmlComponent_SuperSender(const QQmlComponent* self);
int QQmlComponent_SenderSignalIndex(const QQmlComponent* self);
void QQmlComponent_OnSenderSignalIndex(const QQmlComponent* self, intptr_t slot);
int QQmlComponent_SuperSenderSignalIndex(const QQmlComponent* self);
int QQmlComponent_Receivers(const QQmlComponent* self, const char* signal);
void QQmlComponent_OnReceivers(const QQmlComponent* self, intptr_t slot);
int QQmlComponent_SuperReceivers(const QQmlComponent* self, const char* signal);
bool QQmlComponent_IsSignalConnected(const QQmlComponent* self, const QMetaMethod* signal);
void QQmlComponent_OnIsSignalConnected(const QQmlComponent* self, intptr_t slot);
bool QQmlComponent_SuperIsSignalConnected(const QQmlComponent* self, const QMetaMethod* signal);
void QQmlComponent_Delete(QQmlComponent* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
