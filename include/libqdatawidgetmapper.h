#pragma once
#ifndef SRCC_LIBQDATAWIDGETMAPPER_H
#define SRCC_LIBQDATAWIDGETMAPPER_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
#else
typedef struct QAbstractItemDelegate QAbstractItemDelegate;
typedef struct QAbstractItemModel QAbstractItemModel;
typedef struct QChildEvent QChildEvent;
typedef struct QDataWidgetMapper QDataWidgetMapper;
typedef struct QEvent QEvent;
typedef struct QMetaMethod QMetaMethod;
typedef struct QMetaObject QMetaObject;
typedef struct QModelIndex QModelIndex;
typedef struct QObject QObject;
typedef struct QTimerEvent QTimerEvent;
typedef struct QWidget QWidget;
#endif

#ifdef __cplusplus
typedef QDataWidgetMapper::SubmitPolicy SubmitPolicy; // C++ enum
#else
typedef int SubmitPolicy; // C ABI enum
#endif

QDataWidgetMapper* QDataWidgetMapper_new();
QDataWidgetMapper* QDataWidgetMapper_new2(QObject* parent);
QMetaObject* QDataWidgetMapper_MetaObject(const QDataWidgetMapper* self);
void* QDataWidgetMapper_Metacast(QDataWidgetMapper* self, const char* param1);
int QDataWidgetMapper_Metacall(QDataWidgetMapper* self, int param1, int param2, void** param3);
void QDataWidgetMapper_OnMetacall(QDataWidgetMapper* self, intptr_t slot);
int QDataWidgetMapper_QBaseMetacall(QDataWidgetMapper* self, int param1, int param2, void** param3);
libqt_string QDataWidgetMapper_Tr(const char* s);
void QDataWidgetMapper_SetModel(QDataWidgetMapper* self, QAbstractItemModel* model);
QAbstractItemModel* QDataWidgetMapper_Model(const QDataWidgetMapper* self);
void QDataWidgetMapper_SetItemDelegate(QDataWidgetMapper* self, QAbstractItemDelegate* delegate);
QAbstractItemDelegate* QDataWidgetMapper_ItemDelegate(const QDataWidgetMapper* self);
void QDataWidgetMapper_SetRootIndex(QDataWidgetMapper* self, const QModelIndex* index);
QModelIndex* QDataWidgetMapper_RootIndex(const QDataWidgetMapper* self);
void QDataWidgetMapper_SetOrientation(QDataWidgetMapper* self, int aOrientation);
int QDataWidgetMapper_Orientation(const QDataWidgetMapper* self);
void QDataWidgetMapper_SetSubmitPolicy(QDataWidgetMapper* self, int policy);
int QDataWidgetMapper_SubmitPolicy(const QDataWidgetMapper* self);
void QDataWidgetMapper_AddMapping(QDataWidgetMapper* self, QWidget* widget, int section);
void QDataWidgetMapper_AddMapping2(QDataWidgetMapper* self, QWidget* widget, int section, const libqt_string propertyName);
void QDataWidgetMapper_RemoveMapping(QDataWidgetMapper* self, QWidget* widget);
int QDataWidgetMapper_MappedSection(const QDataWidgetMapper* self, QWidget* widget);
libqt_string QDataWidgetMapper_MappedPropertyName(const QDataWidgetMapper* self, QWidget* widget);
QWidget* QDataWidgetMapper_MappedWidgetAt(const QDataWidgetMapper* self, int section);
void QDataWidgetMapper_ClearMapping(QDataWidgetMapper* self);
int QDataWidgetMapper_CurrentIndex(const QDataWidgetMapper* self);
void QDataWidgetMapper_Revert(QDataWidgetMapper* self);
bool QDataWidgetMapper_Submit(QDataWidgetMapper* self);
void QDataWidgetMapper_ToFirst(QDataWidgetMapper* self);
void QDataWidgetMapper_ToLast(QDataWidgetMapper* self);
void QDataWidgetMapper_ToNext(QDataWidgetMapper* self);
void QDataWidgetMapper_ToPrevious(QDataWidgetMapper* self);
void QDataWidgetMapper_SetCurrentIndex(QDataWidgetMapper* self, int index);
void QDataWidgetMapper_OnSetCurrentIndex(QDataWidgetMapper* self, intptr_t slot);
void QDataWidgetMapper_QBaseSetCurrentIndex(QDataWidgetMapper* self, int index);
void QDataWidgetMapper_SetCurrentModelIndex(QDataWidgetMapper* self, const QModelIndex* index);
void QDataWidgetMapper_CurrentIndexChanged(QDataWidgetMapper* self, int index);
void QDataWidgetMapper_Connect_CurrentIndexChanged(QDataWidgetMapper* self, intptr_t slot);
libqt_string QDataWidgetMapper_Tr2(const char* s, const char* c);
libqt_string QDataWidgetMapper_Tr3(const char* s, const char* c, int n);
bool QDataWidgetMapper_Event(QDataWidgetMapper* self, QEvent* event);
void QDataWidgetMapper_OnEvent(QDataWidgetMapper* self, intptr_t slot);
bool QDataWidgetMapper_QBaseEvent(QDataWidgetMapper* self, QEvent* event);
bool QDataWidgetMapper_EventFilter(QDataWidgetMapper* self, QObject* watched, QEvent* event);
void QDataWidgetMapper_OnEventFilter(QDataWidgetMapper* self, intptr_t slot);
bool QDataWidgetMapper_QBaseEventFilter(QDataWidgetMapper* self, QObject* watched, QEvent* event);
void QDataWidgetMapper_TimerEvent(QDataWidgetMapper* self, QTimerEvent* event);
void QDataWidgetMapper_OnTimerEvent(QDataWidgetMapper* self, intptr_t slot);
void QDataWidgetMapper_QBaseTimerEvent(QDataWidgetMapper* self, QTimerEvent* event);
void QDataWidgetMapper_ChildEvent(QDataWidgetMapper* self, QChildEvent* event);
void QDataWidgetMapper_OnChildEvent(QDataWidgetMapper* self, intptr_t slot);
void QDataWidgetMapper_QBaseChildEvent(QDataWidgetMapper* self, QChildEvent* event);
void QDataWidgetMapper_CustomEvent(QDataWidgetMapper* self, QEvent* event);
void QDataWidgetMapper_OnCustomEvent(QDataWidgetMapper* self, intptr_t slot);
void QDataWidgetMapper_QBaseCustomEvent(QDataWidgetMapper* self, QEvent* event);
void QDataWidgetMapper_ConnectNotify(QDataWidgetMapper* self, const QMetaMethod* signal);
void QDataWidgetMapper_OnConnectNotify(QDataWidgetMapper* self, intptr_t slot);
void QDataWidgetMapper_QBaseConnectNotify(QDataWidgetMapper* self, const QMetaMethod* signal);
void QDataWidgetMapper_DisconnectNotify(QDataWidgetMapper* self, const QMetaMethod* signal);
void QDataWidgetMapper_OnDisconnectNotify(QDataWidgetMapper* self, intptr_t slot);
void QDataWidgetMapper_QBaseDisconnectNotify(QDataWidgetMapper* self, const QMetaMethod* signal);
QObject* QDataWidgetMapper_Sender(const QDataWidgetMapper* self);
void QDataWidgetMapper_OnSender(const QDataWidgetMapper* self, intptr_t slot);
QObject* QDataWidgetMapper_QBaseSender(const QDataWidgetMapper* self);
int QDataWidgetMapper_SenderSignalIndex(const QDataWidgetMapper* self);
void QDataWidgetMapper_OnSenderSignalIndex(const QDataWidgetMapper* self, intptr_t slot);
int QDataWidgetMapper_QBaseSenderSignalIndex(const QDataWidgetMapper* self);
int QDataWidgetMapper_Receivers(const QDataWidgetMapper* self, const char* signal);
void QDataWidgetMapper_OnReceivers(const QDataWidgetMapper* self, intptr_t slot);
int QDataWidgetMapper_QBaseReceivers(const QDataWidgetMapper* self, const char* signal);
bool QDataWidgetMapper_IsSignalConnected(const QDataWidgetMapper* self, const QMetaMethod* signal);
void QDataWidgetMapper_OnIsSignalConnected(const QDataWidgetMapper* self, intptr_t slot);
bool QDataWidgetMapper_QBaseIsSignalConnected(const QDataWidgetMapper* self, const QMetaMethod* signal);
void QDataWidgetMapper_Delete(QDataWidgetMapper* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
