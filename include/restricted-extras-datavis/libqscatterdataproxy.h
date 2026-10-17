#pragma once
#ifndef RESTRICTED_EXTRAS_DATAVIS_LIBQSCATTERDATAPROXY_H
#define RESTRICTED_EXTRAS_DATAVIS_LIBQSCATTERDATAPROXY_H

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
#else
typedef struct QAbstractDataProxy QAbstractDataProxy;
typedef struct QChildEvent QChildEvent;
typedef struct QEvent QEvent;
typedef struct QMetaMethod QMetaMethod;
typedef struct QMetaObject QMetaObject;
typedef struct QObject QObject;
typedef struct QScatter3DSeries QScatter3DSeries;
typedef struct QScatterDataItem QScatterDataItem;
typedef struct QScatterDataProxy QScatterDataProxy;
typedef struct QTimerEvent QTimerEvent;
#endif

QScatterDataProxy* QScatterDataProxy_new();
QScatterDataProxy* QScatterDataProxy_new2(QObject* parent);
QMetaObject* QScatterDataProxy_MetaObject(const QScatterDataProxy* self);
void* QScatterDataProxy_Metacast(QScatterDataProxy* self, const char* param1);
int QScatterDataProxy_Metacall(QScatterDataProxy* self, int param1, int param2, void** param3);
libqt_string QScatterDataProxy_Tr(const char* s);
QScatter3DSeries* QScatterDataProxy_Series(const QScatterDataProxy* self);
int QScatterDataProxy_ItemCount(const QScatterDataProxy* self);
libqt_list /* of QScatterDataItem* */ QScatterDataProxy_Array(const QScatterDataProxy* self);
QScatterDataItem* QScatterDataProxy_ItemAt(const QScatterDataProxy* self, int index);
void QScatterDataProxy_ResetArray(QScatterDataProxy* self, libqt_list /* of QScatterDataItem* */ newArray);
void QScatterDataProxy_SetItem(QScatterDataProxy* self, int index, const QScatterDataItem* item);
void QScatterDataProxy_SetItems(QScatterDataProxy* self, int index, const libqt_list /* of QScatterDataItem* */ items);
int QScatterDataProxy_AddItem(QScatterDataProxy* self, const QScatterDataItem* item);
int QScatterDataProxy_AddItems(QScatterDataProxy* self, const libqt_list /* of QScatterDataItem* */ items);
void QScatterDataProxy_InsertItem(QScatterDataProxy* self, int index, const QScatterDataItem* item);
void QScatterDataProxy_InsertItems(QScatterDataProxy* self, int index, const libqt_list /* of QScatterDataItem* */ items);
void QScatterDataProxy_RemoveItems(QScatterDataProxy* self, int index, int removeCount);
void QScatterDataProxy_ArrayReset(QScatterDataProxy* self);
void QScatterDataProxy_Connect_ArrayReset(QScatterDataProxy* self, intptr_t slot);
void QScatterDataProxy_ItemsAdded(QScatterDataProxy* self, int startIndex, int count);
void QScatterDataProxy_Connect_ItemsAdded(QScatterDataProxy* self, intptr_t slot);
void QScatterDataProxy_ItemsChanged(QScatterDataProxy* self, int startIndex, int count);
void QScatterDataProxy_Connect_ItemsChanged(QScatterDataProxy* self, intptr_t slot);
void QScatterDataProxy_ItemsRemoved(QScatterDataProxy* self, int startIndex, int count);
void QScatterDataProxy_Connect_ItemsRemoved(QScatterDataProxy* self, intptr_t slot);
void QScatterDataProxy_ItemsInserted(QScatterDataProxy* self, int startIndex, int count);
void QScatterDataProxy_Connect_ItemsInserted(QScatterDataProxy* self, intptr_t slot);
void QScatterDataProxy_ItemCountChanged(QScatterDataProxy* self, int count);
void QScatterDataProxy_Connect_ItemCountChanged(QScatterDataProxy* self, intptr_t slot);
void QScatterDataProxy_SeriesChanged(QScatterDataProxy* self, QScatter3DSeries* series);
void QScatterDataProxy_Connect_SeriesChanged(QScatterDataProxy* self, intptr_t slot);
libqt_string QScatterDataProxy_Tr2(const char* s, const char* c);
libqt_string QScatterDataProxy_Tr3(const char* s, const char* c, int n);
void QScatterDataProxy_OnMetaObject(QScatterDataProxy* self, intptr_t slot);
QMetaObject* QScatterDataProxy_SuperMetaObject(const QScatterDataProxy* self);
void QScatterDataProxy_OnMetacast(QScatterDataProxy* self, intptr_t slot);
void* QScatterDataProxy_SuperMetacast(QScatterDataProxy* self, const char* param1);
void QScatterDataProxy_OnMetacall(QScatterDataProxy* self, intptr_t slot);
int QScatterDataProxy_SuperMetacall(QScatterDataProxy* self, int param1, int param2, void** param3);
bool QScatterDataProxy_Event(QScatterDataProxy* self, QEvent* event);
void QScatterDataProxy_OnEvent(QScatterDataProxy* self, intptr_t slot);
bool QScatterDataProxy_SuperEvent(QScatterDataProxy* self, QEvent* event);
bool QScatterDataProxy_EventFilter(QScatterDataProxy* self, QObject* watched, QEvent* event);
void QScatterDataProxy_OnEventFilter(QScatterDataProxy* self, intptr_t slot);
bool QScatterDataProxy_SuperEventFilter(QScatterDataProxy* self, QObject* watched, QEvent* event);
void QScatterDataProxy_TimerEvent(QScatterDataProxy* self, QTimerEvent* event);
void QScatterDataProxy_OnTimerEvent(QScatterDataProxy* self, intptr_t slot);
void QScatterDataProxy_SuperTimerEvent(QScatterDataProxy* self, QTimerEvent* event);
void QScatterDataProxy_ChildEvent(QScatterDataProxy* self, QChildEvent* event);
void QScatterDataProxy_OnChildEvent(QScatterDataProxy* self, intptr_t slot);
void QScatterDataProxy_SuperChildEvent(QScatterDataProxy* self, QChildEvent* event);
void QScatterDataProxy_CustomEvent(QScatterDataProxy* self, QEvent* event);
void QScatterDataProxy_OnCustomEvent(QScatterDataProxy* self, intptr_t slot);
void QScatterDataProxy_SuperCustomEvent(QScatterDataProxy* self, QEvent* event);
void QScatterDataProxy_ConnectNotify(QScatterDataProxy* self, const QMetaMethod* signal);
void QScatterDataProxy_OnConnectNotify(QScatterDataProxy* self, intptr_t slot);
void QScatterDataProxy_SuperConnectNotify(QScatterDataProxy* self, const QMetaMethod* signal);
void QScatterDataProxy_DisconnectNotify(QScatterDataProxy* self, const QMetaMethod* signal);
void QScatterDataProxy_OnDisconnectNotify(QScatterDataProxy* self, intptr_t slot);
void QScatterDataProxy_SuperDisconnectNotify(QScatterDataProxy* self, const QMetaMethod* signal);
QObject* QScatterDataProxy_Sender(const QScatterDataProxy* self);
int QScatterDataProxy_SenderSignalIndex(const QScatterDataProxy* self);
int QScatterDataProxy_Receivers(const QScatterDataProxy* self, const char* signal);
bool QScatterDataProxy_IsSignalConnected(const QScatterDataProxy* self, const QMetaMethod* signal);
void QScatterDataProxy_Delete(QScatterDataProxy* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
