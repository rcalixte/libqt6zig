#pragma once
#ifndef SRC_DESIGNERC_LIBABSTRACTFORMWINDOWTOOL_H
#define SRC_DESIGNERC_LIBABSTRACTFORMWINDOWTOOL_H

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
typedef struct QChildEvent QChildEvent;
typedef struct QDesignerFormEditorInterface QDesignerFormEditorInterface;
typedef struct QDesignerFormWindowInterface QDesignerFormWindowInterface;
typedef struct QDesignerFormWindowToolInterface QDesignerFormWindowToolInterface;
typedef struct QEvent QEvent;
typedef struct QMetaMethod QMetaMethod;
typedef struct QMetaObject QMetaObject;
typedef struct QObject QObject;
typedef struct QTimerEvent QTimerEvent;
typedef struct QWidget QWidget;
#endif

QDesignerFormWindowToolInterface* QDesignerFormWindowToolInterface_new();
QDesignerFormWindowToolInterface* QDesignerFormWindowToolInterface_new2(QObject* parent);
QMetaObject* QDesignerFormWindowToolInterface_MetaObject(const QDesignerFormWindowToolInterface* self);
void* QDesignerFormWindowToolInterface_Metacast(QDesignerFormWindowToolInterface* self, const char* param1);
int QDesignerFormWindowToolInterface_Metacall(QDesignerFormWindowToolInterface* self, int param1, int param2, void** param3);
QDesignerFormEditorInterface* QDesignerFormWindowToolInterface_Core(const QDesignerFormWindowToolInterface* self);
QDesignerFormWindowInterface* QDesignerFormWindowToolInterface_FormWindow(const QDesignerFormWindowToolInterface* self);
QWidget* QDesignerFormWindowToolInterface_Editor(const QDesignerFormWindowToolInterface* self);
QAction* QDesignerFormWindowToolInterface_Action(const QDesignerFormWindowToolInterface* self);
void QDesignerFormWindowToolInterface_Activated(QDesignerFormWindowToolInterface* self);
void QDesignerFormWindowToolInterface_Deactivated(QDesignerFormWindowToolInterface* self);
bool QDesignerFormWindowToolInterface_HandleEvent(QDesignerFormWindowToolInterface* self, QWidget* widget, QWidget* managedWidget, QEvent* event);
void QDesignerFormWindowToolInterface_OnMetaObject(const QDesignerFormWindowToolInterface* self, intptr_t slot);
QMetaObject* QDesignerFormWindowToolInterface_SuperMetaObject(const QDesignerFormWindowToolInterface* self);
void QDesignerFormWindowToolInterface_OnMetacast(QDesignerFormWindowToolInterface* self, intptr_t slot);
void* QDesignerFormWindowToolInterface_SuperMetacast(QDesignerFormWindowToolInterface* self, const char* param1);
void QDesignerFormWindowToolInterface_OnMetacall(QDesignerFormWindowToolInterface* self, intptr_t slot);
int QDesignerFormWindowToolInterface_SuperMetacall(QDesignerFormWindowToolInterface* self, int param1, int param2, void** param3);
void QDesignerFormWindowToolInterface_OnCore(const QDesignerFormWindowToolInterface* self, intptr_t slot);
QDesignerFormEditorInterface* QDesignerFormWindowToolInterface_SuperCore(const QDesignerFormWindowToolInterface* self);
void QDesignerFormWindowToolInterface_OnFormWindow(const QDesignerFormWindowToolInterface* self, intptr_t slot);
QDesignerFormWindowInterface* QDesignerFormWindowToolInterface_SuperFormWindow(const QDesignerFormWindowToolInterface* self);
void QDesignerFormWindowToolInterface_OnEditor(const QDesignerFormWindowToolInterface* self, intptr_t slot);
QWidget* QDesignerFormWindowToolInterface_SuperEditor(const QDesignerFormWindowToolInterface* self);
void QDesignerFormWindowToolInterface_OnAction(const QDesignerFormWindowToolInterface* self, intptr_t slot);
QAction* QDesignerFormWindowToolInterface_SuperAction(const QDesignerFormWindowToolInterface* self);
void QDesignerFormWindowToolInterface_OnActivated(QDesignerFormWindowToolInterface* self, intptr_t slot);
void QDesignerFormWindowToolInterface_SuperActivated(QDesignerFormWindowToolInterface* self);
void QDesignerFormWindowToolInterface_OnDeactivated(QDesignerFormWindowToolInterface* self, intptr_t slot);
void QDesignerFormWindowToolInterface_SuperDeactivated(QDesignerFormWindowToolInterface* self);
void QDesignerFormWindowToolInterface_OnHandleEvent(QDesignerFormWindowToolInterface* self, intptr_t slot);
bool QDesignerFormWindowToolInterface_SuperHandleEvent(QDesignerFormWindowToolInterface* self, QWidget* widget, QWidget* managedWidget, QEvent* event);
bool QDesignerFormWindowToolInterface_Event(QDesignerFormWindowToolInterface* self, QEvent* event);
void QDesignerFormWindowToolInterface_OnEvent(QDesignerFormWindowToolInterface* self, intptr_t slot);
bool QDesignerFormWindowToolInterface_SuperEvent(QDesignerFormWindowToolInterface* self, QEvent* event);
bool QDesignerFormWindowToolInterface_EventFilter(QDesignerFormWindowToolInterface* self, QObject* watched, QEvent* event);
void QDesignerFormWindowToolInterface_OnEventFilter(QDesignerFormWindowToolInterface* self, intptr_t slot);
bool QDesignerFormWindowToolInterface_SuperEventFilter(QDesignerFormWindowToolInterface* self, QObject* watched, QEvent* event);
void QDesignerFormWindowToolInterface_TimerEvent(QDesignerFormWindowToolInterface* self, QTimerEvent* event);
void QDesignerFormWindowToolInterface_OnTimerEvent(QDesignerFormWindowToolInterface* self, intptr_t slot);
void QDesignerFormWindowToolInterface_SuperTimerEvent(QDesignerFormWindowToolInterface* self, QTimerEvent* event);
void QDesignerFormWindowToolInterface_ChildEvent(QDesignerFormWindowToolInterface* self, QChildEvent* event);
void QDesignerFormWindowToolInterface_OnChildEvent(QDesignerFormWindowToolInterface* self, intptr_t slot);
void QDesignerFormWindowToolInterface_SuperChildEvent(QDesignerFormWindowToolInterface* self, QChildEvent* event);
void QDesignerFormWindowToolInterface_CustomEvent(QDesignerFormWindowToolInterface* self, QEvent* event);
void QDesignerFormWindowToolInterface_OnCustomEvent(QDesignerFormWindowToolInterface* self, intptr_t slot);
void QDesignerFormWindowToolInterface_SuperCustomEvent(QDesignerFormWindowToolInterface* self, QEvent* event);
void QDesignerFormWindowToolInterface_ConnectNotify(QDesignerFormWindowToolInterface* self, const QMetaMethod* signal);
void QDesignerFormWindowToolInterface_OnConnectNotify(QDesignerFormWindowToolInterface* self, intptr_t slot);
void QDesignerFormWindowToolInterface_SuperConnectNotify(QDesignerFormWindowToolInterface* self, const QMetaMethod* signal);
void QDesignerFormWindowToolInterface_DisconnectNotify(QDesignerFormWindowToolInterface* self, const QMetaMethod* signal);
void QDesignerFormWindowToolInterface_OnDisconnectNotify(QDesignerFormWindowToolInterface* self, intptr_t slot);
void QDesignerFormWindowToolInterface_SuperDisconnectNotify(QDesignerFormWindowToolInterface* self, const QMetaMethod* signal);
QObject* QDesignerFormWindowToolInterface_Sender(const QDesignerFormWindowToolInterface* self);
void QDesignerFormWindowToolInterface_OnSender(const QDesignerFormWindowToolInterface* self, intptr_t slot);
QObject* QDesignerFormWindowToolInterface_SuperSender(const QDesignerFormWindowToolInterface* self);
int QDesignerFormWindowToolInterface_SenderSignalIndex(const QDesignerFormWindowToolInterface* self);
void QDesignerFormWindowToolInterface_OnSenderSignalIndex(const QDesignerFormWindowToolInterface* self, intptr_t slot);
int QDesignerFormWindowToolInterface_SuperSenderSignalIndex(const QDesignerFormWindowToolInterface* self);
int QDesignerFormWindowToolInterface_Receivers(const QDesignerFormWindowToolInterface* self, const char* signal);
void QDesignerFormWindowToolInterface_OnReceivers(const QDesignerFormWindowToolInterface* self, intptr_t slot);
int QDesignerFormWindowToolInterface_SuperReceivers(const QDesignerFormWindowToolInterface* self, const char* signal);
bool QDesignerFormWindowToolInterface_IsSignalConnected(const QDesignerFormWindowToolInterface* self, const QMetaMethod* signal);
void QDesignerFormWindowToolInterface_OnIsSignalConnected(const QDesignerFormWindowToolInterface* self, intptr_t slot);
bool QDesignerFormWindowToolInterface_SuperIsSignalConnected(const QDesignerFormWindowToolInterface* self, const QMetaMethod* signal);
void QDesignerFormWindowToolInterface_Delete(QDesignerFormWindowToolInterface* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
