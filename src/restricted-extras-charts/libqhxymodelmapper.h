#pragma once
#ifndef SRC_RESTRICTED_EXTRAS_CHARTSC_LIBQHXYMODELMAPPER_H
#define SRC_RESTRICTED_EXTRAS_CHARTSC_LIBQHXYMODELMAPPER_H

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
typedef struct QHXYModelMapper QHXYModelMapper;
typedef struct QMetaMethod QMetaMethod;
typedef struct QMetaObject QMetaObject;
typedef struct QObject QObject;
typedef struct QTimerEvent QTimerEvent;
typedef struct QXYModelMapper QXYModelMapper;
typedef struct QXYSeries QXYSeries;
#endif

QHXYModelMapper* QHXYModelMapper_new();
QHXYModelMapper* QHXYModelMapper_new2(QObject* parent);
QMetaObject* QHXYModelMapper_MetaObject(const QHXYModelMapper* self);
void* QHXYModelMapper_Metacast(QHXYModelMapper* self, const char* param1);
int QHXYModelMapper_Metacall(QHXYModelMapper* self, int param1, int param2, void** param3);
libqt_string QHXYModelMapper_Tr(const char* s);
QAbstractItemModel* QHXYModelMapper_Model(const QHXYModelMapper* self);
void QHXYModelMapper_SetModel(QHXYModelMapper* self, QAbstractItemModel* model);
QXYSeries* QHXYModelMapper_Series(const QHXYModelMapper* self);
void QHXYModelMapper_SetSeries(QHXYModelMapper* self, QXYSeries* series);
int QHXYModelMapper_XRow(const QHXYModelMapper* self);
void QHXYModelMapper_SetXRow(QHXYModelMapper* self, int xRow);
int QHXYModelMapper_YRow(const QHXYModelMapper* self);
void QHXYModelMapper_SetYRow(QHXYModelMapper* self, int yRow);
int QHXYModelMapper_FirstColumn(const QHXYModelMapper* self);
void QHXYModelMapper_SetFirstColumn(QHXYModelMapper* self, int firstColumn);
int QHXYModelMapper_ColumnCount(const QHXYModelMapper* self);
void QHXYModelMapper_SetColumnCount(QHXYModelMapper* self, int columnCount);
void QHXYModelMapper_SeriesReplaced(QHXYModelMapper* self);
void QHXYModelMapper_Connect_SeriesReplaced(QHXYModelMapper* self, intptr_t slot);
void QHXYModelMapper_ModelReplaced(QHXYModelMapper* self);
void QHXYModelMapper_Connect_ModelReplaced(QHXYModelMapper* self, intptr_t slot);
void QHXYModelMapper_XRowChanged(QHXYModelMapper* self);
void QHXYModelMapper_Connect_XRowChanged(QHXYModelMapper* self, intptr_t slot);
void QHXYModelMapper_YRowChanged(QHXYModelMapper* self);
void QHXYModelMapper_Connect_YRowChanged(QHXYModelMapper* self, intptr_t slot);
void QHXYModelMapper_FirstColumnChanged(QHXYModelMapper* self);
void QHXYModelMapper_Connect_FirstColumnChanged(QHXYModelMapper* self, intptr_t slot);
void QHXYModelMapper_ColumnCountChanged(QHXYModelMapper* self);
void QHXYModelMapper_Connect_ColumnCountChanged(QHXYModelMapper* self, intptr_t slot);
libqt_string QHXYModelMapper_Tr2(const char* s, const char* c);
libqt_string QHXYModelMapper_Tr3(const char* s, const char* c, int n);
void QHXYModelMapper_OnMetacall(QHXYModelMapper* self, intptr_t slot);
int QHXYModelMapper_QBaseMetacall(QHXYModelMapper* self, int param1, int param2, void** param3);
bool QHXYModelMapper_Event(QHXYModelMapper* self, QEvent* event);
void QHXYModelMapper_OnEvent(QHXYModelMapper* self, intptr_t slot);
bool QHXYModelMapper_QBaseEvent(QHXYModelMapper* self, QEvent* event);
bool QHXYModelMapper_EventFilter(QHXYModelMapper* self, QObject* watched, QEvent* event);
void QHXYModelMapper_OnEventFilter(QHXYModelMapper* self, intptr_t slot);
bool QHXYModelMapper_QBaseEventFilter(QHXYModelMapper* self, QObject* watched, QEvent* event);
void QHXYModelMapper_TimerEvent(QHXYModelMapper* self, QTimerEvent* event);
void QHXYModelMapper_OnTimerEvent(QHXYModelMapper* self, intptr_t slot);
void QHXYModelMapper_QBaseTimerEvent(QHXYModelMapper* self, QTimerEvent* event);
void QHXYModelMapper_ChildEvent(QHXYModelMapper* self, QChildEvent* event);
void QHXYModelMapper_OnChildEvent(QHXYModelMapper* self, intptr_t slot);
void QHXYModelMapper_QBaseChildEvent(QHXYModelMapper* self, QChildEvent* event);
void QHXYModelMapper_CustomEvent(QHXYModelMapper* self, QEvent* event);
void QHXYModelMapper_OnCustomEvent(QHXYModelMapper* self, intptr_t slot);
void QHXYModelMapper_QBaseCustomEvent(QHXYModelMapper* self, QEvent* event);
void QHXYModelMapper_ConnectNotify(QHXYModelMapper* self, const QMetaMethod* signal);
void QHXYModelMapper_OnConnectNotify(QHXYModelMapper* self, intptr_t slot);
void QHXYModelMapper_QBaseConnectNotify(QHXYModelMapper* self, const QMetaMethod* signal);
void QHXYModelMapper_DisconnectNotify(QHXYModelMapper* self, const QMetaMethod* signal);
void QHXYModelMapper_OnDisconnectNotify(QHXYModelMapper* self, intptr_t slot);
void QHXYModelMapper_QBaseDisconnectNotify(QHXYModelMapper* self, const QMetaMethod* signal);
int QHXYModelMapper_First(const QHXYModelMapper* self);
void QHXYModelMapper_OnFirst(const QHXYModelMapper* self, intptr_t slot);
int QHXYModelMapper_QBaseFirst(const QHXYModelMapper* self);
void QHXYModelMapper_SetFirst(QHXYModelMapper* self, int first);
void QHXYModelMapper_OnSetFirst(QHXYModelMapper* self, intptr_t slot);
void QHXYModelMapper_QBaseSetFirst(QHXYModelMapper* self, int first);
int QHXYModelMapper_Count(const QHXYModelMapper* self);
void QHXYModelMapper_OnCount(const QHXYModelMapper* self, intptr_t slot);
int QHXYModelMapper_QBaseCount(const QHXYModelMapper* self);
void QHXYModelMapper_SetCount(QHXYModelMapper* self, int count);
void QHXYModelMapper_OnSetCount(QHXYModelMapper* self, intptr_t slot);
void QHXYModelMapper_QBaseSetCount(QHXYModelMapper* self, int count);
int QHXYModelMapper_Orientation(const QHXYModelMapper* self);
void QHXYModelMapper_OnOrientation(const QHXYModelMapper* self, intptr_t slot);
int QHXYModelMapper_QBaseOrientation(const QHXYModelMapper* self);
void QHXYModelMapper_SetOrientation(QHXYModelMapper* self, int orientation);
void QHXYModelMapper_OnSetOrientation(QHXYModelMapper* self, intptr_t slot);
void QHXYModelMapper_QBaseSetOrientation(QHXYModelMapper* self, int orientation);
int QHXYModelMapper_XSection(const QHXYModelMapper* self);
void QHXYModelMapper_OnXSection(const QHXYModelMapper* self, intptr_t slot);
int QHXYModelMapper_QBaseXSection(const QHXYModelMapper* self);
void QHXYModelMapper_SetXSection(QHXYModelMapper* self, int xSection);
void QHXYModelMapper_OnSetXSection(QHXYModelMapper* self, intptr_t slot);
void QHXYModelMapper_QBaseSetXSection(QHXYModelMapper* self, int xSection);
int QHXYModelMapper_YSection(const QHXYModelMapper* self);
void QHXYModelMapper_OnYSection(const QHXYModelMapper* self, intptr_t slot);
int QHXYModelMapper_QBaseYSection(const QHXYModelMapper* self);
void QHXYModelMapper_SetYSection(QHXYModelMapper* self, int ySection);
void QHXYModelMapper_OnSetYSection(QHXYModelMapper* self, intptr_t slot);
void QHXYModelMapper_QBaseSetYSection(QHXYModelMapper* self, int ySection);
QObject* QHXYModelMapper_Sender(const QHXYModelMapper* self);
void QHXYModelMapper_OnSender(const QHXYModelMapper* self, intptr_t slot);
QObject* QHXYModelMapper_QBaseSender(const QHXYModelMapper* self);
int QHXYModelMapper_SenderSignalIndex(const QHXYModelMapper* self);
void QHXYModelMapper_OnSenderSignalIndex(const QHXYModelMapper* self, intptr_t slot);
int QHXYModelMapper_QBaseSenderSignalIndex(const QHXYModelMapper* self);
int QHXYModelMapper_Receivers(const QHXYModelMapper* self, const char* signal);
void QHXYModelMapper_OnReceivers(const QHXYModelMapper* self, intptr_t slot);
int QHXYModelMapper_QBaseReceivers(const QHXYModelMapper* self, const char* signal);
bool QHXYModelMapper_IsSignalConnected(const QHXYModelMapper* self, const QMetaMethod* signal);
void QHXYModelMapper_OnIsSignalConnected(const QHXYModelMapper* self, intptr_t slot);
bool QHXYModelMapper_QBaseIsSignalConnected(const QHXYModelMapper* self, const QMetaMethod* signal);
void QHXYModelMapper_Delete(QHXYModelMapper* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
