#pragma once
#ifndef RESTRICTED_EXTRAS_DATAVIS_LIBQBARDATAPROXY_H
#define RESTRICTED_EXTRAS_DATAVIS_LIBQBARDATAPROXY_H

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
typedef struct QBar3DSeries QBar3DSeries;
typedef struct QBarDataItem QBarDataItem;
typedef struct QBarDataProxy QBarDataProxy;
typedef struct QChildEvent QChildEvent;
typedef struct QEvent QEvent;
typedef struct QMetaMethod QMetaMethod;
typedef struct QMetaObject QMetaObject;
typedef struct QObject QObject;
typedef struct QPoint QPoint;
typedef struct QTimerEvent QTimerEvent;
#endif

QBarDataProxy* QBarDataProxy_new();
QBarDataProxy* QBarDataProxy_new2(QObject* parent);
QMetaObject* QBarDataProxy_MetaObject(const QBarDataProxy* self);
void* QBarDataProxy_Metacast(QBarDataProxy* self, const char* param1);
int QBarDataProxy_Metacall(QBarDataProxy* self, int param1, int param2, void** param3);
libqt_string QBarDataProxy_Tr(const char* s);
QBar3DSeries* QBarDataProxy_Series(const QBarDataProxy* self);
int QBarDataProxy_RowCount(const QBarDataProxy* self);
libqt_list /* of libqt_string */ QBarDataProxy_RowLabels(const QBarDataProxy* self);
void QBarDataProxy_SetRowLabels(QBarDataProxy* self, const libqt_list /* of libqt_string */ labels);
libqt_list /* of libqt_string */ QBarDataProxy_ColumnLabels(const QBarDataProxy* self);
void QBarDataProxy_SetColumnLabels(QBarDataProxy* self, const libqt_list /* of libqt_string */ labels);
libqt_list /* of libqt_list of QBarDataItem* */ QBarDataProxy_Array(const QBarDataProxy* self);
libqt_list /* of QBarDataItem* */ QBarDataProxy_RowAt(const QBarDataProxy* self, int rowIndex);
QBarDataItem* QBarDataProxy_ItemAt(const QBarDataProxy* self, int rowIndex, int columnIndex);
QBarDataItem* QBarDataProxy_ItemAt2(const QBarDataProxy* self, const QPoint* position);
void QBarDataProxy_ResetArray(QBarDataProxy* self);
void QBarDataProxy_ResetArray2(QBarDataProxy* self, libqt_list /* of libqt_list of QBarDataItem* */ newArray);
void QBarDataProxy_ResetArray3(QBarDataProxy* self, libqt_list /* of libqt_list of QBarDataItem* */ newArray, const libqt_list /* of libqt_string */ rowLabels, const libqt_list /* of libqt_string */ columnLabels);
void QBarDataProxy_SetRow(QBarDataProxy* self, int rowIndex, libqt_list /* of QBarDataItem* */ row);
void QBarDataProxy_SetRow2(QBarDataProxy* self, int rowIndex, libqt_list /* of QBarDataItem* */ row, const libqt_string label);
void QBarDataProxy_SetRows(QBarDataProxy* self, int rowIndex, const libqt_list /* of libqt_list of QBarDataItem* */ rows);
void QBarDataProxy_SetRows2(QBarDataProxy* self, int rowIndex, const libqt_list /* of libqt_list of QBarDataItem* */ rows, const libqt_list /* of libqt_string */ labels);
void QBarDataProxy_SetItem(QBarDataProxy* self, int rowIndex, int columnIndex, const QBarDataItem* item);
void QBarDataProxy_SetItem2(QBarDataProxy* self, const QPoint* position, const QBarDataItem* item);
int QBarDataProxy_AddRow(QBarDataProxy* self, libqt_list /* of QBarDataItem* */ row);
int QBarDataProxy_AddRow2(QBarDataProxy* self, libqt_list /* of QBarDataItem* */ row, const libqt_string label);
int QBarDataProxy_AddRows(QBarDataProxy* self, const libqt_list /* of libqt_list of QBarDataItem* */ rows);
int QBarDataProxy_AddRows2(QBarDataProxy* self, const libqt_list /* of libqt_list of QBarDataItem* */ rows, const libqt_list /* of libqt_string */ labels);
void QBarDataProxy_InsertRow(QBarDataProxy* self, int rowIndex, libqt_list /* of QBarDataItem* */ row);
void QBarDataProxy_InsertRow2(QBarDataProxy* self, int rowIndex, libqt_list /* of QBarDataItem* */ row, const libqt_string label);
void QBarDataProxy_InsertRows(QBarDataProxy* self, int rowIndex, const libqt_list /* of libqt_list of QBarDataItem* */ rows);
void QBarDataProxy_InsertRows2(QBarDataProxy* self, int rowIndex, const libqt_list /* of libqt_list of QBarDataItem* */ rows, const libqt_list /* of libqt_string */ labels);
void QBarDataProxy_RemoveRows(QBarDataProxy* self, int rowIndex, int removeCount);
void QBarDataProxy_ArrayReset(QBarDataProxy* self);
void QBarDataProxy_Connect_ArrayReset(QBarDataProxy* self, intptr_t slot);
void QBarDataProxy_RowsAdded(QBarDataProxy* self, int startIndex, int count);
void QBarDataProxy_Connect_RowsAdded(QBarDataProxy* self, intptr_t slot);
void QBarDataProxy_RowsChanged(QBarDataProxy* self, int startIndex, int count);
void QBarDataProxy_Connect_RowsChanged(QBarDataProxy* self, intptr_t slot);
void QBarDataProxy_RowsRemoved(QBarDataProxy* self, int startIndex, int count);
void QBarDataProxy_Connect_RowsRemoved(QBarDataProxy* self, intptr_t slot);
void QBarDataProxy_RowsInserted(QBarDataProxy* self, int startIndex, int count);
void QBarDataProxy_Connect_RowsInserted(QBarDataProxy* self, intptr_t slot);
void QBarDataProxy_ItemChanged(QBarDataProxy* self, int rowIndex, int columnIndex);
void QBarDataProxy_Connect_ItemChanged(QBarDataProxy* self, intptr_t slot);
void QBarDataProxy_RowCountChanged(QBarDataProxy* self, int count);
void QBarDataProxy_Connect_RowCountChanged(QBarDataProxy* self, intptr_t slot);
void QBarDataProxy_RowLabelsChanged(QBarDataProxy* self);
void QBarDataProxy_Connect_RowLabelsChanged(QBarDataProxy* self, intptr_t slot);
void QBarDataProxy_ColumnLabelsChanged(QBarDataProxy* self);
void QBarDataProxy_Connect_ColumnLabelsChanged(QBarDataProxy* self, intptr_t slot);
void QBarDataProxy_SeriesChanged(QBarDataProxy* self, QBar3DSeries* series);
void QBarDataProxy_Connect_SeriesChanged(QBarDataProxy* self, intptr_t slot);
libqt_string QBarDataProxy_Tr2(const char* s, const char* c);
libqt_string QBarDataProxy_Tr3(const char* s, const char* c, int n);
void QBarDataProxy_RemoveRows3(QBarDataProxy* self, int rowIndex, int removeCount, bool removeLabels);
void QBarDataProxy_OnMetaObject(QBarDataProxy* self, intptr_t slot);
QMetaObject* QBarDataProxy_SuperMetaObject(const QBarDataProxy* self);
void QBarDataProxy_OnMetacast(QBarDataProxy* self, intptr_t slot);
void* QBarDataProxy_SuperMetacast(QBarDataProxy* self, const char* param1);
void QBarDataProxy_OnMetacall(QBarDataProxy* self, intptr_t slot);
int QBarDataProxy_SuperMetacall(QBarDataProxy* self, int param1, int param2, void** param3);
bool QBarDataProxy_Event(QBarDataProxy* self, QEvent* event);
void QBarDataProxy_OnEvent(QBarDataProxy* self, intptr_t slot);
bool QBarDataProxy_SuperEvent(QBarDataProxy* self, QEvent* event);
bool QBarDataProxy_EventFilter(QBarDataProxy* self, QObject* watched, QEvent* event);
void QBarDataProxy_OnEventFilter(QBarDataProxy* self, intptr_t slot);
bool QBarDataProxy_SuperEventFilter(QBarDataProxy* self, QObject* watched, QEvent* event);
void QBarDataProxy_TimerEvent(QBarDataProxy* self, QTimerEvent* event);
void QBarDataProxy_OnTimerEvent(QBarDataProxy* self, intptr_t slot);
void QBarDataProxy_SuperTimerEvent(QBarDataProxy* self, QTimerEvent* event);
void QBarDataProxy_ChildEvent(QBarDataProxy* self, QChildEvent* event);
void QBarDataProxy_OnChildEvent(QBarDataProxy* self, intptr_t slot);
void QBarDataProxy_SuperChildEvent(QBarDataProxy* self, QChildEvent* event);
void QBarDataProxy_CustomEvent(QBarDataProxy* self, QEvent* event);
void QBarDataProxy_OnCustomEvent(QBarDataProxy* self, intptr_t slot);
void QBarDataProxy_SuperCustomEvent(QBarDataProxy* self, QEvent* event);
void QBarDataProxy_ConnectNotify(QBarDataProxy* self, const QMetaMethod* signal);
void QBarDataProxy_OnConnectNotify(QBarDataProxy* self, intptr_t slot);
void QBarDataProxy_SuperConnectNotify(QBarDataProxy* self, const QMetaMethod* signal);
void QBarDataProxy_DisconnectNotify(QBarDataProxy* self, const QMetaMethod* signal);
void QBarDataProxy_OnDisconnectNotify(QBarDataProxy* self, intptr_t slot);
void QBarDataProxy_SuperDisconnectNotify(QBarDataProxy* self, const QMetaMethod* signal);
QObject* QBarDataProxy_Sender(const QBarDataProxy* self);
int QBarDataProxy_SenderSignalIndex(const QBarDataProxy* self);
int QBarDataProxy_Receivers(const QBarDataProxy* self, const char* signal);
bool QBarDataProxy_IsSignalConnected(const QBarDataProxy* self, const QMetaMethod* signal);
void QBarDataProxy_Delete(QBarDataProxy* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
