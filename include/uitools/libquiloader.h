#pragma once
#ifndef SRC_UITOOLSC_LIBQUILOADER_H
#define SRC_UITOOLSC_LIBQUILOADER_H

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
#else
typedef struct QAction QAction;
typedef struct QActionGroup QActionGroup;
typedef struct QChildEvent QChildEvent;
typedef struct QDir QDir;
typedef struct QEvent QEvent;
typedef struct QIODevice QIODevice;
typedef struct QLayout QLayout;
typedef struct QMetaMethod QMetaMethod;
typedef struct QMetaObject QMetaObject;
typedef struct QObject QObject;
typedef struct QTimerEvent QTimerEvent;
typedef struct QUiLoader QUiLoader;
typedef struct QWidget QWidget;
#endif

QUiLoader* QUiLoader_new();
QUiLoader* QUiLoader_new2(QObject* parent);
QMetaObject* QUiLoader_MetaObject(const QUiLoader* self);
void* QUiLoader_Metacast(QUiLoader* self, const char* param1);
int QUiLoader_Metacall(QUiLoader* self, int param1, int param2, void** param3);
libqt_list /* of libqt_string */ QUiLoader_PluginPaths(const QUiLoader* self);
void QUiLoader_ClearPluginPaths(QUiLoader* self);
void QUiLoader_AddPluginPath(QUiLoader* self, const libqt_string path);
QWidget* QUiLoader_Load(QUiLoader* self, QIODevice* device);
libqt_list /* of libqt_string */ QUiLoader_AvailableWidgets(const QUiLoader* self);
libqt_list /* of libqt_string */ QUiLoader_AvailableLayouts(const QUiLoader* self);
QWidget* QUiLoader_CreateWidget(QUiLoader* self, const libqt_string className, QWidget* parent, const libqt_string name);
QLayout* QUiLoader_CreateLayout(QUiLoader* self, const libqt_string className, QObject* parent, const libqt_string name);
QActionGroup* QUiLoader_CreateActionGroup(QUiLoader* self, QObject* parent, const libqt_string name);
QAction* QUiLoader_CreateAction(QUiLoader* self, QObject* parent, const libqt_string name);
void QUiLoader_SetWorkingDirectory(QUiLoader* self, const QDir* dir);
QDir* QUiLoader_WorkingDirectory(const QUiLoader* self);
void QUiLoader_SetLanguageChangeEnabled(QUiLoader* self, bool enabled);
bool QUiLoader_IsLanguageChangeEnabled(const QUiLoader* self);
void QUiLoader_SetTranslationEnabled(QUiLoader* self, bool enabled);
bool QUiLoader_IsTranslationEnabled(const QUiLoader* self);
libqt_string QUiLoader_ErrorString(const QUiLoader* self);
QWidget* QUiLoader_Load2(QUiLoader* self, QIODevice* device, QWidget* parentWidget);
void QUiLoader_OnMetaObject(const QUiLoader* self, intptr_t slot);
QMetaObject* QUiLoader_QBaseMetaObject(const QUiLoader* self);
void QUiLoader_OnMetacast(QUiLoader* self, intptr_t slot);
void* QUiLoader_QBaseMetacast(QUiLoader* self, const char* param1);
void QUiLoader_OnMetacall(QUiLoader* self, intptr_t slot);
int QUiLoader_QBaseMetacall(QUiLoader* self, int param1, int param2, void** param3);
void QUiLoader_OnCreateWidget(QUiLoader* self, intptr_t slot);
QWidget* QUiLoader_QBaseCreateWidget(QUiLoader* self, const libqt_string className, QWidget* parent, const libqt_string name);
void QUiLoader_OnCreateLayout(QUiLoader* self, intptr_t slot);
QLayout* QUiLoader_QBaseCreateLayout(QUiLoader* self, const libqt_string className, QObject* parent, const libqt_string name);
void QUiLoader_OnCreateActionGroup(QUiLoader* self, intptr_t slot);
QActionGroup* QUiLoader_QBaseCreateActionGroup(QUiLoader* self, QObject* parent, const libqt_string name);
void QUiLoader_OnCreateAction(QUiLoader* self, intptr_t slot);
QAction* QUiLoader_QBaseCreateAction(QUiLoader* self, QObject* parent, const libqt_string name);
bool QUiLoader_Event(QUiLoader* self, QEvent* event);
void QUiLoader_OnEvent(QUiLoader* self, intptr_t slot);
bool QUiLoader_QBaseEvent(QUiLoader* self, QEvent* event);
bool QUiLoader_EventFilter(QUiLoader* self, QObject* watched, QEvent* event);
void QUiLoader_OnEventFilter(QUiLoader* self, intptr_t slot);
bool QUiLoader_QBaseEventFilter(QUiLoader* self, QObject* watched, QEvent* event);
void QUiLoader_TimerEvent(QUiLoader* self, QTimerEvent* event);
void QUiLoader_OnTimerEvent(QUiLoader* self, intptr_t slot);
void QUiLoader_QBaseTimerEvent(QUiLoader* self, QTimerEvent* event);
void QUiLoader_ChildEvent(QUiLoader* self, QChildEvent* event);
void QUiLoader_OnChildEvent(QUiLoader* self, intptr_t slot);
void QUiLoader_QBaseChildEvent(QUiLoader* self, QChildEvent* event);
void QUiLoader_CustomEvent(QUiLoader* self, QEvent* event);
void QUiLoader_OnCustomEvent(QUiLoader* self, intptr_t slot);
void QUiLoader_QBaseCustomEvent(QUiLoader* self, QEvent* event);
void QUiLoader_ConnectNotify(QUiLoader* self, const QMetaMethod* signal);
void QUiLoader_OnConnectNotify(QUiLoader* self, intptr_t slot);
void QUiLoader_QBaseConnectNotify(QUiLoader* self, const QMetaMethod* signal);
void QUiLoader_DisconnectNotify(QUiLoader* self, const QMetaMethod* signal);
void QUiLoader_OnDisconnectNotify(QUiLoader* self, intptr_t slot);
void QUiLoader_QBaseDisconnectNotify(QUiLoader* self, const QMetaMethod* signal);
QObject* QUiLoader_Sender(const QUiLoader* self);
void QUiLoader_OnSender(const QUiLoader* self, intptr_t slot);
QObject* QUiLoader_QBaseSender(const QUiLoader* self);
int QUiLoader_SenderSignalIndex(const QUiLoader* self);
void QUiLoader_OnSenderSignalIndex(const QUiLoader* self, intptr_t slot);
int QUiLoader_QBaseSenderSignalIndex(const QUiLoader* self);
int QUiLoader_Receivers(const QUiLoader* self, const char* signal);
void QUiLoader_OnReceivers(const QUiLoader* self, intptr_t slot);
int QUiLoader_QBaseReceivers(const QUiLoader* self, const char* signal);
bool QUiLoader_IsSignalConnected(const QUiLoader* self, const QMetaMethod* signal);
void QUiLoader_OnIsSignalConnected(const QUiLoader* self, intptr_t slot);
bool QUiLoader_QBaseIsSignalConnected(const QUiLoader* self, const QMetaMethod* signal);
void QUiLoader_Delete(QUiLoader* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
