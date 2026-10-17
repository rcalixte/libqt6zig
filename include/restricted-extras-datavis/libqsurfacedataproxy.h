#pragma once
#ifndef RESTRICTED_EXTRAS_DATAVIS_LIBQSURFACEDATAPROXY_H
#define RESTRICTED_EXTRAS_DATAVIS_LIBQSURFACEDATAPROXY_H

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
typedef struct QPoint QPoint;
typedef struct QSurface3DSeries QSurface3DSeries;
typedef struct QSurfaceDataItem QSurfaceDataItem;
typedef struct QSurfaceDataProxy QSurfaceDataProxy;
typedef struct QTimerEvent QTimerEvent;
#endif

QSurfaceDataProxy* QSurfaceDataProxy_new();
QSurfaceDataProxy* QSurfaceDataProxy_new2(QObject* parent);
QMetaObject* QSurfaceDataProxy_MetaObject(const QSurfaceDataProxy* self);
void* QSurfaceDataProxy_Metacast(QSurfaceDataProxy* self, const char* param1);
int QSurfaceDataProxy_Metacall(QSurfaceDataProxy* self, int param1, int param2, void** param3);
libqt_string QSurfaceDataProxy_Tr(const char* s);
QSurface3DSeries* QSurfaceDataProxy_Series(const QSurfaceDataProxy* self);
int QSurfaceDataProxy_RowCount(const QSurfaceDataProxy* self);
int QSurfaceDataProxy_ColumnCount(const QSurfaceDataProxy* self);
libqt_list /* of libqt_list of QSurfaceDataItem* */ QSurfaceDataProxy_Array(const QSurfaceDataProxy* self);
QSurfaceDataItem* QSurfaceDataProxy_ItemAt(const QSurfaceDataProxy* self, int rowIndex, int columnIndex);
QSurfaceDataItem* QSurfaceDataProxy_ItemAt2(const QSurfaceDataProxy* self, const QPoint* position);
void QSurfaceDataProxy_ResetArray(QSurfaceDataProxy* self, libqt_list /* of libqt_list of QSurfaceDataItem* */ newArray);
void QSurfaceDataProxy_SetRow(QSurfaceDataProxy* self, int rowIndex, libqt_list /* of QSurfaceDataItem* */ row);
void QSurfaceDataProxy_SetRows(QSurfaceDataProxy* self, int rowIndex, const libqt_list /* of libqt_list of QSurfaceDataItem* */ rows);
void QSurfaceDataProxy_SetItem(QSurfaceDataProxy* self, int rowIndex, int columnIndex, const QSurfaceDataItem* item);
void QSurfaceDataProxy_SetItem2(QSurfaceDataProxy* self, const QPoint* position, const QSurfaceDataItem* item);
int QSurfaceDataProxy_AddRow(QSurfaceDataProxy* self, libqt_list /* of QSurfaceDataItem* */ row);
int QSurfaceDataProxy_AddRows(QSurfaceDataProxy* self, const libqt_list /* of libqt_list of QSurfaceDataItem* */ rows);
void QSurfaceDataProxy_InsertRow(QSurfaceDataProxy* self, int rowIndex, libqt_list /* of QSurfaceDataItem* */ row);
void QSurfaceDataProxy_InsertRows(QSurfaceDataProxy* self, int rowIndex, const libqt_list /* of libqt_list of QSurfaceDataItem* */ rows);
void QSurfaceDataProxy_RemoveRows(QSurfaceDataProxy* self, int rowIndex, int removeCount);
void QSurfaceDataProxy_ArrayReset(QSurfaceDataProxy* self);
void QSurfaceDataProxy_Connect_ArrayReset(QSurfaceDataProxy* self, intptr_t slot);
void QSurfaceDataProxy_RowsAdded(QSurfaceDataProxy* self, int startIndex, int count);
void QSurfaceDataProxy_Connect_RowsAdded(QSurfaceDataProxy* self, intptr_t slot);
void QSurfaceDataProxy_RowsChanged(QSurfaceDataProxy* self, int startIndex, int count);
void QSurfaceDataProxy_Connect_RowsChanged(QSurfaceDataProxy* self, intptr_t slot);
void QSurfaceDataProxy_RowsRemoved(QSurfaceDataProxy* self, int startIndex, int count);
void QSurfaceDataProxy_Connect_RowsRemoved(QSurfaceDataProxy* self, intptr_t slot);
void QSurfaceDataProxy_RowsInserted(QSurfaceDataProxy* self, int startIndex, int count);
void QSurfaceDataProxy_Connect_RowsInserted(QSurfaceDataProxy* self, intptr_t slot);
void QSurfaceDataProxy_ItemChanged(QSurfaceDataProxy* self, int rowIndex, int columnIndex);
void QSurfaceDataProxy_Connect_ItemChanged(QSurfaceDataProxy* self, intptr_t slot);
void QSurfaceDataProxy_RowCountChanged(QSurfaceDataProxy* self, int count);
void QSurfaceDataProxy_Connect_RowCountChanged(QSurfaceDataProxy* self, intptr_t slot);
void QSurfaceDataProxy_ColumnCountChanged(QSurfaceDataProxy* self, int count);
void QSurfaceDataProxy_Connect_ColumnCountChanged(QSurfaceDataProxy* self, intptr_t slot);
void QSurfaceDataProxy_SeriesChanged(QSurfaceDataProxy* self, QSurface3DSeries* series);
void QSurfaceDataProxy_Connect_SeriesChanged(QSurfaceDataProxy* self, intptr_t slot);
libqt_string QSurfaceDataProxy_Tr2(const char* s, const char* c);
libqt_string QSurfaceDataProxy_Tr3(const char* s, const char* c, int n);
void QSurfaceDataProxy_OnMetaObject(QSurfaceDataProxy* self, intptr_t slot);
QMetaObject* QSurfaceDataProxy_SuperMetaObject(const QSurfaceDataProxy* self);
void QSurfaceDataProxy_OnMetacast(QSurfaceDataProxy* self, intptr_t slot);
void* QSurfaceDataProxy_SuperMetacast(QSurfaceDataProxy* self, const char* param1);
void QSurfaceDataProxy_OnMetacall(QSurfaceDataProxy* self, intptr_t slot);
int QSurfaceDataProxy_SuperMetacall(QSurfaceDataProxy* self, int param1, int param2, void** param3);
bool QSurfaceDataProxy_Event(QSurfaceDataProxy* self, QEvent* event);
void QSurfaceDataProxy_OnEvent(QSurfaceDataProxy* self, intptr_t slot);
bool QSurfaceDataProxy_SuperEvent(QSurfaceDataProxy* self, QEvent* event);
bool QSurfaceDataProxy_EventFilter(QSurfaceDataProxy* self, QObject* watched, QEvent* event);
void QSurfaceDataProxy_OnEventFilter(QSurfaceDataProxy* self, intptr_t slot);
bool QSurfaceDataProxy_SuperEventFilter(QSurfaceDataProxy* self, QObject* watched, QEvent* event);
void QSurfaceDataProxy_TimerEvent(QSurfaceDataProxy* self, QTimerEvent* event);
void QSurfaceDataProxy_OnTimerEvent(QSurfaceDataProxy* self, intptr_t slot);
void QSurfaceDataProxy_SuperTimerEvent(QSurfaceDataProxy* self, QTimerEvent* event);
void QSurfaceDataProxy_ChildEvent(QSurfaceDataProxy* self, QChildEvent* event);
void QSurfaceDataProxy_OnChildEvent(QSurfaceDataProxy* self, intptr_t slot);
void QSurfaceDataProxy_SuperChildEvent(QSurfaceDataProxy* self, QChildEvent* event);
void QSurfaceDataProxy_CustomEvent(QSurfaceDataProxy* self, QEvent* event);
void QSurfaceDataProxy_OnCustomEvent(QSurfaceDataProxy* self, intptr_t slot);
void QSurfaceDataProxy_SuperCustomEvent(QSurfaceDataProxy* self, QEvent* event);
void QSurfaceDataProxy_ConnectNotify(QSurfaceDataProxy* self, const QMetaMethod* signal);
void QSurfaceDataProxy_OnConnectNotify(QSurfaceDataProxy* self, intptr_t slot);
void QSurfaceDataProxy_SuperConnectNotify(QSurfaceDataProxy* self, const QMetaMethod* signal);
void QSurfaceDataProxy_DisconnectNotify(QSurfaceDataProxy* self, const QMetaMethod* signal);
void QSurfaceDataProxy_OnDisconnectNotify(QSurfaceDataProxy* self, intptr_t slot);
void QSurfaceDataProxy_SuperDisconnectNotify(QSurfaceDataProxy* self, const QMetaMethod* signal);
QObject* QSurfaceDataProxy_Sender(const QSurfaceDataProxy* self);
int QSurfaceDataProxy_SenderSignalIndex(const QSurfaceDataProxy* self);
int QSurfaceDataProxy_Receivers(const QSurfaceDataProxy* self, const char* signal);
bool QSurfaceDataProxy_IsSignalConnected(const QSurfaceDataProxy* self, const QMetaMethod* signal);
void QSurfaceDataProxy_Delete(QSurfaceDataProxy* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
