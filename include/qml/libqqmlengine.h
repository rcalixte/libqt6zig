#pragma once
#ifndef QML_LIBQQMLENGINE_H
#define QML_LIBQQMLENGINE_H

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
typedef struct QMetaProperty QMetaProperty;
typedef struct QNetworkAccessManager QNetworkAccessManager;
typedef struct QObject QObject;
typedef struct QQmlAbstractUrlInterceptor QQmlAbstractUrlInterceptor;
typedef struct QQmlContext QQmlContext;
typedef struct QQmlEngine QQmlEngine;
typedef struct QQmlError QQmlError;
typedef struct QQmlImageProviderBase QQmlImageProviderBase;
typedef struct QQmlIncubationController QQmlIncubationController;
typedef struct QQmlNetworkAccessManagerFactory QQmlNetworkAccessManagerFactory;
typedef struct QTimerEvent QTimerEvent;
typedef struct QUrl QUrl;
#endif

QMetaObject* QQmlImageProviderBase_MetaObject(const QQmlImageProviderBase* self);
void* QQmlImageProviderBase_Metacast(QQmlImageProviderBase* self, const char* param1);
int QQmlImageProviderBase_Metacall(QQmlImageProviderBase* self, int param1, int param2, void** param3);
libqt_string QQmlImageProviderBase_Tr(const char* s);
int QQmlImageProviderBase_ImageType(const QQmlImageProviderBase* self);
int QQmlImageProviderBase_Flags(const QQmlImageProviderBase* self);
libqt_string QQmlImageProviderBase_Tr2(const char* s, const char* c);
libqt_string QQmlImageProviderBase_Tr3(const char* s, const char* c, int n);
void QQmlImageProviderBase_Delete(QQmlImageProviderBase* self);

QQmlEngine* QQmlEngine_new();
QQmlEngine* QQmlEngine_new2(QObject* p);
QMetaObject* QQmlEngine_MetaObject(const QQmlEngine* self);
void* QQmlEngine_Metacast(QQmlEngine* self, const char* param1);
int QQmlEngine_Metacall(QQmlEngine* self, int param1, int param2, void** param3);
libqt_string QQmlEngine_Tr(const char* s);
QQmlContext* QQmlEngine_RootContext(const QQmlEngine* self);
void QQmlEngine_ClearComponentCache(QQmlEngine* self);
void QQmlEngine_TrimComponentCache(QQmlEngine* self);
void QQmlEngine_ClearSingletons(QQmlEngine* self);
libqt_list /* of libqt_string */ QQmlEngine_ImportPathList(const QQmlEngine* self);
void QQmlEngine_SetImportPathList(QQmlEngine* self, const libqt_list /* of libqt_string */ paths);
void QQmlEngine_AddImportPath(QQmlEngine* self, const libqt_string dir);
libqt_list /* of libqt_string */ QQmlEngine_PluginPathList(const QQmlEngine* self);
void QQmlEngine_SetPluginPathList(QQmlEngine* self, const libqt_list /* of libqt_string */ paths);
void QQmlEngine_AddPluginPath(QQmlEngine* self, const libqt_string dir);
bool QQmlEngine_AddNamedBundle(QQmlEngine* self, const libqt_string param1, const libqt_string param2);
bool QQmlEngine_ImportPlugin(QQmlEngine* self, const libqt_string filePath, const libqt_string uri, libqt_list /* of QQmlError* */ errors);
void QQmlEngine_SetNetworkAccessManagerFactory(QQmlEngine* self, QQmlNetworkAccessManagerFactory* networkAccessManagerFactory);
QQmlNetworkAccessManagerFactory* QQmlEngine_NetworkAccessManagerFactory(const QQmlEngine* self);
QNetworkAccessManager* QQmlEngine_NetworkAccessManager(const QQmlEngine* self);
void QQmlEngine_SetUrlInterceptor(QQmlEngine* self, QQmlAbstractUrlInterceptor* urlInterceptor);
QQmlAbstractUrlInterceptor* QQmlEngine_UrlInterceptor(const QQmlEngine* self);
void QQmlEngine_AddUrlInterceptor(QQmlEngine* self, QQmlAbstractUrlInterceptor* urlInterceptor);
void QQmlEngine_RemoveUrlInterceptor(QQmlEngine* self, QQmlAbstractUrlInterceptor* urlInterceptor);
libqt_list /* of QQmlAbstractUrlInterceptor* */ QQmlEngine_UrlInterceptors(const QQmlEngine* self);
QUrl* QQmlEngine_InterceptUrl(const QQmlEngine* self, const QUrl* url, int typeVal);
void QQmlEngine_AddImageProvider(QQmlEngine* self, const libqt_string id, QQmlImageProviderBase* param2);
QQmlImageProviderBase* QQmlEngine_ImageProvider(const QQmlEngine* self, const libqt_string id);
void QQmlEngine_RemoveImageProvider(QQmlEngine* self, const libqt_string id);
void QQmlEngine_SetIncubationController(QQmlEngine* self, QQmlIncubationController* incubationController);
QQmlIncubationController* QQmlEngine_IncubationController(const QQmlEngine* self);
void QQmlEngine_SetOfflineStoragePath(QQmlEngine* self, const libqt_string dir);
libqt_string QQmlEngine_OfflineStoragePath(const QQmlEngine* self);
libqt_string QQmlEngine_OfflineStorageDatabaseFilePath(const QQmlEngine* self, const libqt_string databaseName);
QUrl* QQmlEngine_BaseUrl(const QQmlEngine* self);
void QQmlEngine_SetBaseUrl(QQmlEngine* self, const QUrl* baseUrl);
bool QQmlEngine_OutputWarningsToStandardError(const QQmlEngine* self);
void QQmlEngine_SetOutputWarningsToStandardError(QQmlEngine* self, bool outputWarningsToStandardError);
void QQmlEngine_MarkCurrentFunctionAsTranslationBinding(QQmlEngine* self);
void QQmlEngine_CaptureProperty(const QQmlEngine* self, QObject* object, const QMetaProperty* property);
void QQmlEngine_Retranslate(QQmlEngine* self);
void QQmlEngine_OfflineStoragePathChanged(QQmlEngine* self);
void QQmlEngine_Connect_OfflineStoragePathChanged(QQmlEngine* self, intptr_t slot);
QQmlContext* QQmlEngine_ContextForObject(const QObject* param1);
void QQmlEngine_SetContextForObject(QObject* param1, QQmlContext* param2);
bool QQmlEngine_Event(QQmlEngine* self, QEvent* param1);
void QQmlEngine_Quit(QQmlEngine* self);
void QQmlEngine_Connect_Quit(QQmlEngine* self, intptr_t slot);
void QQmlEngine_Exit(QQmlEngine* self, int retCode);
void QQmlEngine_Connect_Exit(QQmlEngine* self, intptr_t slot);
void QQmlEngine_Warnings(QQmlEngine* self, const libqt_list /* of QQmlError* */ warnings);
void QQmlEngine_Connect_Warnings(QQmlEngine* self, intptr_t slot);
libqt_string QQmlEngine_Tr2(const char* s, const char* c);
libqt_string QQmlEngine_Tr3(const char* s, const char* c, int n);
void QQmlEngine_OnMetaObject(const QQmlEngine* self, intptr_t slot);
QMetaObject* QQmlEngine_SuperMetaObject(const QQmlEngine* self);
void QQmlEngine_OnMetacast(QQmlEngine* self, intptr_t slot);
void* QQmlEngine_SuperMetacast(QQmlEngine* self, const char* param1);
void QQmlEngine_OnMetacall(QQmlEngine* self, intptr_t slot);
int QQmlEngine_SuperMetacall(QQmlEngine* self, int param1, int param2, void** param3);
void QQmlEngine_OnEvent(QQmlEngine* self, intptr_t slot);
bool QQmlEngine_SuperEvent(QQmlEngine* self, QEvent* param1);
bool QQmlEngine_EventFilter(QQmlEngine* self, QObject* watched, QEvent* event);
void QQmlEngine_OnEventFilter(QQmlEngine* self, intptr_t slot);
bool QQmlEngine_SuperEventFilter(QQmlEngine* self, QObject* watched, QEvent* event);
void QQmlEngine_TimerEvent(QQmlEngine* self, QTimerEvent* event);
void QQmlEngine_OnTimerEvent(QQmlEngine* self, intptr_t slot);
void QQmlEngine_SuperTimerEvent(QQmlEngine* self, QTimerEvent* event);
void QQmlEngine_ChildEvent(QQmlEngine* self, QChildEvent* event);
void QQmlEngine_OnChildEvent(QQmlEngine* self, intptr_t slot);
void QQmlEngine_SuperChildEvent(QQmlEngine* self, QChildEvent* event);
void QQmlEngine_CustomEvent(QQmlEngine* self, QEvent* event);
void QQmlEngine_OnCustomEvent(QQmlEngine* self, intptr_t slot);
void QQmlEngine_SuperCustomEvent(QQmlEngine* self, QEvent* event);
void QQmlEngine_ConnectNotify(QQmlEngine* self, const QMetaMethod* signal);
void QQmlEngine_OnConnectNotify(QQmlEngine* self, intptr_t slot);
void QQmlEngine_SuperConnectNotify(QQmlEngine* self, const QMetaMethod* signal);
void QQmlEngine_DisconnectNotify(QQmlEngine* self, const QMetaMethod* signal);
void QQmlEngine_OnDisconnectNotify(QQmlEngine* self, intptr_t slot);
void QQmlEngine_SuperDisconnectNotify(QQmlEngine* self, const QMetaMethod* signal);
QObject* QQmlEngine_Sender(const QQmlEngine* self);
void QQmlEngine_OnSender(const QQmlEngine* self, intptr_t slot);
QObject* QQmlEngine_SuperSender(const QQmlEngine* self);
int QQmlEngine_SenderSignalIndex(const QQmlEngine* self);
void QQmlEngine_OnSenderSignalIndex(const QQmlEngine* self, intptr_t slot);
int QQmlEngine_SuperSenderSignalIndex(const QQmlEngine* self);
int QQmlEngine_Receivers(const QQmlEngine* self, const char* signal);
void QQmlEngine_OnReceivers(const QQmlEngine* self, intptr_t slot);
int QQmlEngine_SuperReceivers(const QQmlEngine* self, const char* signal);
bool QQmlEngine_IsSignalConnected(const QQmlEngine* self, const QMetaMethod* signal);
void QQmlEngine_OnIsSignalConnected(const QQmlEngine* self, intptr_t slot);
bool QQmlEngine_SuperIsSignalConnected(const QQmlEngine* self, const QMetaMethod* signal);
void QQmlEngine_Delete(QQmlEngine* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
