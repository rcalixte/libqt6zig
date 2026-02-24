#pragma once
#ifndef SRC_DESIGNERC_LIBABSTRACTWIDGETFACTORY_H
#define SRC_DESIGNERC_LIBABSTRACTWIDGETFACTORY_H

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
typedef struct QDesignerFormEditorInterface QDesignerFormEditorInterface;
typedef struct QDesignerWidgetFactoryInterface QDesignerWidgetFactoryInterface;
typedef struct QEvent QEvent;
typedef struct QLayout QLayout;
typedef struct QMetaMethod QMetaMethod;
typedef struct QMetaObject QMetaObject;
typedef struct QObject QObject;
typedef struct QTimerEvent QTimerEvent;
typedef struct QWidget QWidget;
#endif

QDesignerWidgetFactoryInterface* QDesignerWidgetFactoryInterface_new();
QDesignerWidgetFactoryInterface* QDesignerWidgetFactoryInterface_new2(QObject* parent);
QMetaObject* QDesignerWidgetFactoryInterface_MetaObject(const QDesignerWidgetFactoryInterface* self);
void* QDesignerWidgetFactoryInterface_Metacast(QDesignerWidgetFactoryInterface* self, const char* param1);
int QDesignerWidgetFactoryInterface_Metacall(QDesignerWidgetFactoryInterface* self, int param1, int param2, void** param3);
QDesignerFormEditorInterface* QDesignerWidgetFactoryInterface_Core(const QDesignerWidgetFactoryInterface* self);
QWidget* QDesignerWidgetFactoryInterface_ContainerOfWidget(const QDesignerWidgetFactoryInterface* self, QWidget* w);
QWidget* QDesignerWidgetFactoryInterface_WidgetOfContainer(const QDesignerWidgetFactoryInterface* self, QWidget* w);
QWidget* QDesignerWidgetFactoryInterface_CreateWidget(const QDesignerWidgetFactoryInterface* self, const libqt_string name, QWidget* parentWidget);
QLayout* QDesignerWidgetFactoryInterface_CreateLayout(const QDesignerWidgetFactoryInterface* self, QWidget* widget, QLayout* layout, int typeVal);
bool QDesignerWidgetFactoryInterface_IsPassiveInteractor(QDesignerWidgetFactoryInterface* self, QWidget* widget);
void QDesignerWidgetFactoryInterface_Initialize(const QDesignerWidgetFactoryInterface* self, QObject* object);
void QDesignerWidgetFactoryInterface_OnMetaObject(const QDesignerWidgetFactoryInterface* self, intptr_t slot);
QMetaObject* QDesignerWidgetFactoryInterface_SuperMetaObject(const QDesignerWidgetFactoryInterface* self);
void QDesignerWidgetFactoryInterface_OnMetacast(QDesignerWidgetFactoryInterface* self, intptr_t slot);
void* QDesignerWidgetFactoryInterface_SuperMetacast(QDesignerWidgetFactoryInterface* self, const char* param1);
void QDesignerWidgetFactoryInterface_OnMetacall(QDesignerWidgetFactoryInterface* self, intptr_t slot);
int QDesignerWidgetFactoryInterface_SuperMetacall(QDesignerWidgetFactoryInterface* self, int param1, int param2, void** param3);
void QDesignerWidgetFactoryInterface_OnCore(const QDesignerWidgetFactoryInterface* self, intptr_t slot);
QDesignerFormEditorInterface* QDesignerWidgetFactoryInterface_SuperCore(const QDesignerWidgetFactoryInterface* self);
void QDesignerWidgetFactoryInterface_OnContainerOfWidget(const QDesignerWidgetFactoryInterface* self, intptr_t slot);
QWidget* QDesignerWidgetFactoryInterface_SuperContainerOfWidget(const QDesignerWidgetFactoryInterface* self, QWidget* w);
void QDesignerWidgetFactoryInterface_OnWidgetOfContainer(const QDesignerWidgetFactoryInterface* self, intptr_t slot);
QWidget* QDesignerWidgetFactoryInterface_SuperWidgetOfContainer(const QDesignerWidgetFactoryInterface* self, QWidget* w);
void QDesignerWidgetFactoryInterface_OnCreateWidget(const QDesignerWidgetFactoryInterface* self, intptr_t slot);
QWidget* QDesignerWidgetFactoryInterface_SuperCreateWidget(const QDesignerWidgetFactoryInterface* self, const libqt_string name, QWidget* parentWidget);
void QDesignerWidgetFactoryInterface_OnCreateLayout(const QDesignerWidgetFactoryInterface* self, intptr_t slot);
QLayout* QDesignerWidgetFactoryInterface_SuperCreateLayout(const QDesignerWidgetFactoryInterface* self, QWidget* widget, QLayout* layout, int typeVal);
void QDesignerWidgetFactoryInterface_OnIsPassiveInteractor(QDesignerWidgetFactoryInterface* self, intptr_t slot);
bool QDesignerWidgetFactoryInterface_SuperIsPassiveInteractor(QDesignerWidgetFactoryInterface* self, QWidget* widget);
void QDesignerWidgetFactoryInterface_OnInitialize(const QDesignerWidgetFactoryInterface* self, intptr_t slot);
void QDesignerWidgetFactoryInterface_SuperInitialize(const QDesignerWidgetFactoryInterface* self, QObject* object);
bool QDesignerWidgetFactoryInterface_Event(QDesignerWidgetFactoryInterface* self, QEvent* event);
void QDesignerWidgetFactoryInterface_OnEvent(QDesignerWidgetFactoryInterface* self, intptr_t slot);
bool QDesignerWidgetFactoryInterface_SuperEvent(QDesignerWidgetFactoryInterface* self, QEvent* event);
bool QDesignerWidgetFactoryInterface_EventFilter(QDesignerWidgetFactoryInterface* self, QObject* watched, QEvent* event);
void QDesignerWidgetFactoryInterface_OnEventFilter(QDesignerWidgetFactoryInterface* self, intptr_t slot);
bool QDesignerWidgetFactoryInterface_SuperEventFilter(QDesignerWidgetFactoryInterface* self, QObject* watched, QEvent* event);
void QDesignerWidgetFactoryInterface_TimerEvent(QDesignerWidgetFactoryInterface* self, QTimerEvent* event);
void QDesignerWidgetFactoryInterface_OnTimerEvent(QDesignerWidgetFactoryInterface* self, intptr_t slot);
void QDesignerWidgetFactoryInterface_SuperTimerEvent(QDesignerWidgetFactoryInterface* self, QTimerEvent* event);
void QDesignerWidgetFactoryInterface_ChildEvent(QDesignerWidgetFactoryInterface* self, QChildEvent* event);
void QDesignerWidgetFactoryInterface_OnChildEvent(QDesignerWidgetFactoryInterface* self, intptr_t slot);
void QDesignerWidgetFactoryInterface_SuperChildEvent(QDesignerWidgetFactoryInterface* self, QChildEvent* event);
void QDesignerWidgetFactoryInterface_CustomEvent(QDesignerWidgetFactoryInterface* self, QEvent* event);
void QDesignerWidgetFactoryInterface_OnCustomEvent(QDesignerWidgetFactoryInterface* self, intptr_t slot);
void QDesignerWidgetFactoryInterface_SuperCustomEvent(QDesignerWidgetFactoryInterface* self, QEvent* event);
void QDesignerWidgetFactoryInterface_ConnectNotify(QDesignerWidgetFactoryInterface* self, const QMetaMethod* signal);
void QDesignerWidgetFactoryInterface_OnConnectNotify(QDesignerWidgetFactoryInterface* self, intptr_t slot);
void QDesignerWidgetFactoryInterface_SuperConnectNotify(QDesignerWidgetFactoryInterface* self, const QMetaMethod* signal);
void QDesignerWidgetFactoryInterface_DisconnectNotify(QDesignerWidgetFactoryInterface* self, const QMetaMethod* signal);
void QDesignerWidgetFactoryInterface_OnDisconnectNotify(QDesignerWidgetFactoryInterface* self, intptr_t slot);
void QDesignerWidgetFactoryInterface_SuperDisconnectNotify(QDesignerWidgetFactoryInterface* self, const QMetaMethod* signal);
QObject* QDesignerWidgetFactoryInterface_Sender(const QDesignerWidgetFactoryInterface* self);
void QDesignerWidgetFactoryInterface_OnSender(const QDesignerWidgetFactoryInterface* self, intptr_t slot);
QObject* QDesignerWidgetFactoryInterface_SuperSender(const QDesignerWidgetFactoryInterface* self);
int QDesignerWidgetFactoryInterface_SenderSignalIndex(const QDesignerWidgetFactoryInterface* self);
void QDesignerWidgetFactoryInterface_OnSenderSignalIndex(const QDesignerWidgetFactoryInterface* self, intptr_t slot);
int QDesignerWidgetFactoryInterface_SuperSenderSignalIndex(const QDesignerWidgetFactoryInterface* self);
int QDesignerWidgetFactoryInterface_Receivers(const QDesignerWidgetFactoryInterface* self, const char* signal);
void QDesignerWidgetFactoryInterface_OnReceivers(const QDesignerWidgetFactoryInterface* self, intptr_t slot);
int QDesignerWidgetFactoryInterface_SuperReceivers(const QDesignerWidgetFactoryInterface* self, const char* signal);
bool QDesignerWidgetFactoryInterface_IsSignalConnected(const QDesignerWidgetFactoryInterface* self, const QMetaMethod* signal);
void QDesignerWidgetFactoryInterface_OnIsSignalConnected(const QDesignerWidgetFactoryInterface* self, intptr_t slot);
bool QDesignerWidgetFactoryInterface_SuperIsSignalConnected(const QDesignerWidgetFactoryInterface* self, const QMetaMethod* signal);
void QDesignerWidgetFactoryInterface_Delete(QDesignerWidgetFactoryInterface* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
