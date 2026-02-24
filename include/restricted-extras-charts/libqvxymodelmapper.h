#pragma once
#ifndef SRC_RESTRICTED_EXTRAS_CHARTSC_LIBQVXYMODELMAPPER_H
#define SRC_RESTRICTED_EXTRAS_CHARTSC_LIBQVXYMODELMAPPER_H

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
#else
typedef struct QAbstractItemModel QAbstractItemModel;
typedef struct QChildEvent QChildEvent;
typedef struct QEvent QEvent;
typedef struct QMetaMethod QMetaMethod;
typedef struct QMetaObject QMetaObject;
typedef struct QObject QObject;
typedef struct QTimerEvent QTimerEvent;
typedef struct QVXYModelMapper QVXYModelMapper;
typedef struct QXYModelMapper QXYModelMapper;
typedef struct QXYSeries QXYSeries;
#endif

QVXYModelMapper* QVXYModelMapper_new();
QVXYModelMapper* QVXYModelMapper_new2(QObject* parent);
QMetaObject* QVXYModelMapper_MetaObject(const QVXYModelMapper* self);
void* QVXYModelMapper_Metacast(QVXYModelMapper* self, const char* param1);
int QVXYModelMapper_Metacall(QVXYModelMapper* self, int param1, int param2, void** param3);
QAbstractItemModel* QVXYModelMapper_Model(const QVXYModelMapper* self);
void QVXYModelMapper_SetModel(QVXYModelMapper* self, QAbstractItemModel* model);
QXYSeries* QVXYModelMapper_Series(const QVXYModelMapper* self);
void QVXYModelMapper_SetSeries(QVXYModelMapper* self, QXYSeries* series);
int QVXYModelMapper_XColumn(const QVXYModelMapper* self);
void QVXYModelMapper_SetXColumn(QVXYModelMapper* self, int xColumn);
int QVXYModelMapper_YColumn(const QVXYModelMapper* self);
void QVXYModelMapper_SetYColumn(QVXYModelMapper* self, int yColumn);
int QVXYModelMapper_FirstRow(const QVXYModelMapper* self);
void QVXYModelMapper_SetFirstRow(QVXYModelMapper* self, int firstRow);
int QVXYModelMapper_RowCount(const QVXYModelMapper* self);
void QVXYModelMapper_SetRowCount(QVXYModelMapper* self, int rowCount);
void QVXYModelMapper_SeriesReplaced(QVXYModelMapper* self);
void QVXYModelMapper_Connect_SeriesReplaced(QVXYModelMapper* self, intptr_t slot);
void QVXYModelMapper_ModelReplaced(QVXYModelMapper* self);
void QVXYModelMapper_Connect_ModelReplaced(QVXYModelMapper* self, intptr_t slot);
void QVXYModelMapper_XColumnChanged(QVXYModelMapper* self);
void QVXYModelMapper_Connect_XColumnChanged(QVXYModelMapper* self, intptr_t slot);
void QVXYModelMapper_YColumnChanged(QVXYModelMapper* self);
void QVXYModelMapper_Connect_YColumnChanged(QVXYModelMapper* self, intptr_t slot);
void QVXYModelMapper_FirstRowChanged(QVXYModelMapper* self);
void QVXYModelMapper_Connect_FirstRowChanged(QVXYModelMapper* self, intptr_t slot);
void QVXYModelMapper_RowCountChanged(QVXYModelMapper* self);
void QVXYModelMapper_Connect_RowCountChanged(QVXYModelMapper* self, intptr_t slot);
void QVXYModelMapper_OnMetaObject(const QVXYModelMapper* self, intptr_t slot);
QMetaObject* QVXYModelMapper_SuperMetaObject(const QVXYModelMapper* self);
void QVXYModelMapper_OnMetacast(QVXYModelMapper* self, intptr_t slot);
void* QVXYModelMapper_SuperMetacast(QVXYModelMapper* self, const char* param1);
void QVXYModelMapper_OnMetacall(QVXYModelMapper* self, intptr_t slot);
int QVXYModelMapper_SuperMetacall(QVXYModelMapper* self, int param1, int param2, void** param3);
bool QVXYModelMapper_Event(QVXYModelMapper* self, QEvent* event);
void QVXYModelMapper_OnEvent(QVXYModelMapper* self, intptr_t slot);
bool QVXYModelMapper_SuperEvent(QVXYModelMapper* self, QEvent* event);
bool QVXYModelMapper_EventFilter(QVXYModelMapper* self, QObject* watched, QEvent* event);
void QVXYModelMapper_OnEventFilter(QVXYModelMapper* self, intptr_t slot);
bool QVXYModelMapper_SuperEventFilter(QVXYModelMapper* self, QObject* watched, QEvent* event);
void QVXYModelMapper_TimerEvent(QVXYModelMapper* self, QTimerEvent* event);
void QVXYModelMapper_OnTimerEvent(QVXYModelMapper* self, intptr_t slot);
void QVXYModelMapper_SuperTimerEvent(QVXYModelMapper* self, QTimerEvent* event);
void QVXYModelMapper_ChildEvent(QVXYModelMapper* self, QChildEvent* event);
void QVXYModelMapper_OnChildEvent(QVXYModelMapper* self, intptr_t slot);
void QVXYModelMapper_SuperChildEvent(QVXYModelMapper* self, QChildEvent* event);
void QVXYModelMapper_CustomEvent(QVXYModelMapper* self, QEvent* event);
void QVXYModelMapper_OnCustomEvent(QVXYModelMapper* self, intptr_t slot);
void QVXYModelMapper_SuperCustomEvent(QVXYModelMapper* self, QEvent* event);
void QVXYModelMapper_ConnectNotify(QVXYModelMapper* self, const QMetaMethod* signal);
void QVXYModelMapper_OnConnectNotify(QVXYModelMapper* self, intptr_t slot);
void QVXYModelMapper_SuperConnectNotify(QVXYModelMapper* self, const QMetaMethod* signal);
void QVXYModelMapper_DisconnectNotify(QVXYModelMapper* self, const QMetaMethod* signal);
void QVXYModelMapper_OnDisconnectNotify(QVXYModelMapper* self, intptr_t slot);
void QVXYModelMapper_SuperDisconnectNotify(QVXYModelMapper* self, const QMetaMethod* signal);
int QVXYModelMapper_First(const QVXYModelMapper* self);
void QVXYModelMapper_OnFirst(const QVXYModelMapper* self, intptr_t slot);
int QVXYModelMapper_SuperFirst(const QVXYModelMapper* self);
void QVXYModelMapper_SetFirst(QVXYModelMapper* self, int first);
void QVXYModelMapper_OnSetFirst(QVXYModelMapper* self, intptr_t slot);
void QVXYModelMapper_SuperSetFirst(QVXYModelMapper* self, int first);
int QVXYModelMapper_Count(const QVXYModelMapper* self);
void QVXYModelMapper_OnCount(const QVXYModelMapper* self, intptr_t slot);
int QVXYModelMapper_SuperCount(const QVXYModelMapper* self);
void QVXYModelMapper_SetCount(QVXYModelMapper* self, int count);
void QVXYModelMapper_OnSetCount(QVXYModelMapper* self, intptr_t slot);
void QVXYModelMapper_SuperSetCount(QVXYModelMapper* self, int count);
int QVXYModelMapper_Orientation(const QVXYModelMapper* self);
void QVXYModelMapper_OnOrientation(const QVXYModelMapper* self, intptr_t slot);
int QVXYModelMapper_SuperOrientation(const QVXYModelMapper* self);
void QVXYModelMapper_SetOrientation(QVXYModelMapper* self, int orientation);
void QVXYModelMapper_OnSetOrientation(QVXYModelMapper* self, intptr_t slot);
void QVXYModelMapper_SuperSetOrientation(QVXYModelMapper* self, int orientation);
int QVXYModelMapper_XSection(const QVXYModelMapper* self);
void QVXYModelMapper_OnXSection(const QVXYModelMapper* self, intptr_t slot);
int QVXYModelMapper_SuperXSection(const QVXYModelMapper* self);
void QVXYModelMapper_SetXSection(QVXYModelMapper* self, int xSection);
void QVXYModelMapper_OnSetXSection(QVXYModelMapper* self, intptr_t slot);
void QVXYModelMapper_SuperSetXSection(QVXYModelMapper* self, int xSection);
int QVXYModelMapper_YSection(const QVXYModelMapper* self);
void QVXYModelMapper_OnYSection(const QVXYModelMapper* self, intptr_t slot);
int QVXYModelMapper_SuperYSection(const QVXYModelMapper* self);
void QVXYModelMapper_SetYSection(QVXYModelMapper* self, int ySection);
void QVXYModelMapper_OnSetYSection(QVXYModelMapper* self, intptr_t slot);
void QVXYModelMapper_SuperSetYSection(QVXYModelMapper* self, int ySection);
QObject* QVXYModelMapper_Sender(const QVXYModelMapper* self);
void QVXYModelMapper_OnSender(const QVXYModelMapper* self, intptr_t slot);
QObject* QVXYModelMapper_SuperSender(const QVXYModelMapper* self);
int QVXYModelMapper_SenderSignalIndex(const QVXYModelMapper* self);
void QVXYModelMapper_OnSenderSignalIndex(const QVXYModelMapper* self, intptr_t slot);
int QVXYModelMapper_SuperSenderSignalIndex(const QVXYModelMapper* self);
int QVXYModelMapper_Receivers(const QVXYModelMapper* self, const char* signal);
void QVXYModelMapper_OnReceivers(const QVXYModelMapper* self, intptr_t slot);
int QVXYModelMapper_SuperReceivers(const QVXYModelMapper* self, const char* signal);
bool QVXYModelMapper_IsSignalConnected(const QVXYModelMapper* self, const QMetaMethod* signal);
void QVXYModelMapper_OnIsSignalConnected(const QVXYModelMapper* self, intptr_t slot);
bool QVXYModelMapper_SuperIsSignalConnected(const QVXYModelMapper* self, const QMetaMethod* signal);
void QVXYModelMapper_Delete(QVXYModelMapper* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
