#pragma once
#ifndef SRC_EXTRAS_KWIDGETSADDONSC_LIBKDRAGWIDGETDECORATOR_H
#define SRC_EXTRAS_KWIDGETSADDONSC_LIBKDRAGWIDGETDECORATOR_H

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
#else
typedef struct KDragWidgetDecoratorBase KDragWidgetDecoratorBase;
typedef struct QChildEvent QChildEvent;
typedef struct QDrag QDrag;
typedef struct QEvent QEvent;
typedef struct QMetaMethod QMetaMethod;
typedef struct QMetaObject QMetaObject;
typedef struct QObject QObject;
typedef struct QTimerEvent QTimerEvent;
typedef struct QWidget QWidget;
#endif

KDragWidgetDecoratorBase* KDragWidgetDecoratorBase_new(QWidget* parent);
KDragWidgetDecoratorBase* KDragWidgetDecoratorBase_new2();
QMetaObject* KDragWidgetDecoratorBase_MetaObject(const KDragWidgetDecoratorBase* self);
void* KDragWidgetDecoratorBase_Metacast(KDragWidgetDecoratorBase* self, const char* param1);
int KDragWidgetDecoratorBase_Metacall(KDragWidgetDecoratorBase* self, int param1, int param2, void** param3);
void KDragWidgetDecoratorBase_SetDragEnabled(KDragWidgetDecoratorBase* self, bool enable);
bool KDragWidgetDecoratorBase_IsDragEnabled(const KDragWidgetDecoratorBase* self);
QDrag* KDragWidgetDecoratorBase_DragObject(KDragWidgetDecoratorBase* self);
bool KDragWidgetDecoratorBase_EventFilter(KDragWidgetDecoratorBase* self, QObject* watched, QEvent* event);
void KDragWidgetDecoratorBase_StartDrag(KDragWidgetDecoratorBase* self);
void KDragWidgetDecoratorBase_OnMetaObject(const KDragWidgetDecoratorBase* self, intptr_t slot);
QMetaObject* KDragWidgetDecoratorBase_SuperMetaObject(const KDragWidgetDecoratorBase* self);
void KDragWidgetDecoratorBase_OnMetacast(KDragWidgetDecoratorBase* self, intptr_t slot);
void* KDragWidgetDecoratorBase_SuperMetacast(KDragWidgetDecoratorBase* self, const char* param1);
void KDragWidgetDecoratorBase_OnMetacall(KDragWidgetDecoratorBase* self, intptr_t slot);
int KDragWidgetDecoratorBase_SuperMetacall(KDragWidgetDecoratorBase* self, int param1, int param2, void** param3);
void KDragWidgetDecoratorBase_OnDragObject(KDragWidgetDecoratorBase* self, intptr_t slot);
QDrag* KDragWidgetDecoratorBase_SuperDragObject(KDragWidgetDecoratorBase* self);
void KDragWidgetDecoratorBase_OnEventFilter(KDragWidgetDecoratorBase* self, intptr_t slot);
bool KDragWidgetDecoratorBase_SuperEventFilter(KDragWidgetDecoratorBase* self, QObject* watched, QEvent* event);
void KDragWidgetDecoratorBase_OnStartDrag(KDragWidgetDecoratorBase* self, intptr_t slot);
void KDragWidgetDecoratorBase_SuperStartDrag(KDragWidgetDecoratorBase* self);
bool KDragWidgetDecoratorBase_Event(KDragWidgetDecoratorBase* self, QEvent* event);
void KDragWidgetDecoratorBase_OnEvent(KDragWidgetDecoratorBase* self, intptr_t slot);
bool KDragWidgetDecoratorBase_SuperEvent(KDragWidgetDecoratorBase* self, QEvent* event);
void KDragWidgetDecoratorBase_TimerEvent(KDragWidgetDecoratorBase* self, QTimerEvent* event);
void KDragWidgetDecoratorBase_OnTimerEvent(KDragWidgetDecoratorBase* self, intptr_t slot);
void KDragWidgetDecoratorBase_SuperTimerEvent(KDragWidgetDecoratorBase* self, QTimerEvent* event);
void KDragWidgetDecoratorBase_ChildEvent(KDragWidgetDecoratorBase* self, QChildEvent* event);
void KDragWidgetDecoratorBase_OnChildEvent(KDragWidgetDecoratorBase* self, intptr_t slot);
void KDragWidgetDecoratorBase_SuperChildEvent(KDragWidgetDecoratorBase* self, QChildEvent* event);
void KDragWidgetDecoratorBase_CustomEvent(KDragWidgetDecoratorBase* self, QEvent* event);
void KDragWidgetDecoratorBase_OnCustomEvent(KDragWidgetDecoratorBase* self, intptr_t slot);
void KDragWidgetDecoratorBase_SuperCustomEvent(KDragWidgetDecoratorBase* self, QEvent* event);
void KDragWidgetDecoratorBase_ConnectNotify(KDragWidgetDecoratorBase* self, const QMetaMethod* signal);
void KDragWidgetDecoratorBase_OnConnectNotify(KDragWidgetDecoratorBase* self, intptr_t slot);
void KDragWidgetDecoratorBase_SuperConnectNotify(KDragWidgetDecoratorBase* self, const QMetaMethod* signal);
void KDragWidgetDecoratorBase_DisconnectNotify(KDragWidgetDecoratorBase* self, const QMetaMethod* signal);
void KDragWidgetDecoratorBase_OnDisconnectNotify(KDragWidgetDecoratorBase* self, intptr_t slot);
void KDragWidgetDecoratorBase_SuperDisconnectNotify(KDragWidgetDecoratorBase* self, const QMetaMethod* signal);
QWidget* KDragWidgetDecoratorBase_DecoratedWidget(const KDragWidgetDecoratorBase* self);
void KDragWidgetDecoratorBase_OnDecoratedWidget(const KDragWidgetDecoratorBase* self, intptr_t slot);
QWidget* KDragWidgetDecoratorBase_SuperDecoratedWidget(const KDragWidgetDecoratorBase* self);
QObject* KDragWidgetDecoratorBase_Sender(const KDragWidgetDecoratorBase* self);
void KDragWidgetDecoratorBase_OnSender(const KDragWidgetDecoratorBase* self, intptr_t slot);
QObject* KDragWidgetDecoratorBase_SuperSender(const KDragWidgetDecoratorBase* self);
int KDragWidgetDecoratorBase_SenderSignalIndex(const KDragWidgetDecoratorBase* self);
void KDragWidgetDecoratorBase_OnSenderSignalIndex(const KDragWidgetDecoratorBase* self, intptr_t slot);
int KDragWidgetDecoratorBase_SuperSenderSignalIndex(const KDragWidgetDecoratorBase* self);
int KDragWidgetDecoratorBase_Receivers(const KDragWidgetDecoratorBase* self, const char* signal);
void KDragWidgetDecoratorBase_OnReceivers(const KDragWidgetDecoratorBase* self, intptr_t slot);
int KDragWidgetDecoratorBase_SuperReceivers(const KDragWidgetDecoratorBase* self, const char* signal);
bool KDragWidgetDecoratorBase_IsSignalConnected(const KDragWidgetDecoratorBase* self, const QMetaMethod* signal);
void KDragWidgetDecoratorBase_OnIsSignalConnected(const KDragWidgetDecoratorBase* self, intptr_t slot);
bool KDragWidgetDecoratorBase_SuperIsSignalConnected(const KDragWidgetDecoratorBase* self, const QMetaMethod* signal);
void KDragWidgetDecoratorBase_Delete(KDragWidgetDecoratorBase* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
