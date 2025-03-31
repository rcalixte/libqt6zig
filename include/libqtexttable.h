#pragma once
#ifndef SRCC_LIBQTEXTTABLE_H
#define SRCC_LIBQTEXTTABLE_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
#if defined(WORKAROUND_INNER_CLASS_DEFINITION_QMetaObject__Connection)
typedef QMetaObject::Connection QMetaObject__Connection;
#endif
#if defined(WORKAROUND_INNER_CLASS_DEFINITION_QTextFrame__iterator)
typedef QTextFrame::iterator QTextFrame__iterator;
#endif
#else
typedef struct QAnyStringView QAnyStringView;
typedef struct QBindingStorage QBindingStorage;
typedef struct QChildEvent QChildEvent;
typedef struct QEvent QEvent;
typedef struct QMetaMethod QMetaMethod;
typedef struct QMetaObject QMetaObject;
typedef struct QMetaObject__Connection QMetaObject__Connection;
typedef struct QObject QObject;
typedef struct QTextCharFormat QTextCharFormat;
typedef struct QTextCursor QTextCursor;
typedef struct QTextDocument QTextDocument;
typedef struct QTextFormat QTextFormat;
typedef struct QTextFrame QTextFrame;
typedef struct QTextFrameFormat QTextFrameFormat;
typedef struct QTextFrameLayoutData QTextFrameLayoutData;
typedef struct QTextFrame__iterator QTextFrame__iterator;
typedef struct QTextObject QTextObject;
typedef struct QTextTable QTextTable;
typedef struct QTextTableCell QTextTableCell;
typedef struct QTextTableFormat QTextTableFormat;
typedef struct QThread QThread;
typedef struct QTimerEvent QTimerEvent;
typedef struct QVariant QVariant;
#endif

QTextTableCell* QTextTableCell_new();
QTextTableCell* QTextTableCell_new2(QTextTableCell* o);
void QTextTableCell_OperatorAssign(QTextTableCell* self, QTextTableCell* o);
void QTextTableCell_SetFormat(QTextTableCell* self, QTextCharFormat* format);
QTextCharFormat* QTextTableCell_Format(const QTextTableCell* self);
int QTextTableCell_Row(const QTextTableCell* self);
int QTextTableCell_Column(const QTextTableCell* self);
int QTextTableCell_RowSpan(const QTextTableCell* self);
int QTextTableCell_ColumnSpan(const QTextTableCell* self);
bool QTextTableCell_IsValid(const QTextTableCell* self);
QTextCursor* QTextTableCell_FirstCursorPosition(const QTextTableCell* self);
QTextCursor* QTextTableCell_LastCursorPosition(const QTextTableCell* self);
int QTextTableCell_FirstPosition(const QTextTableCell* self);
int QTextTableCell_LastPosition(const QTextTableCell* self);
bool QTextTableCell_OperatorEqual(const QTextTableCell* self, QTextTableCell* other);
bool QTextTableCell_OperatorNotEqual(const QTextTableCell* self, QTextTableCell* other);
QTextFrame__iterator* QTextTableCell_Begin(const QTextTableCell* self);
QTextFrame__iterator* QTextTableCell_End(const QTextTableCell* self);
int QTextTableCell_TableCellFormatIndex(const QTextTableCell* self);
void QTextTableCell_Delete(QTextTableCell* self);

QTextTable* QTextTable_new(QTextDocument* doc);
QMetaObject* QTextTable_MetaObject(const QTextTable* self);
void* QTextTable_Metacast(QTextTable* self, const char* param1);
int QTextTable_Metacall(QTextTable* self, int param1, int param2, void** param3);
void QTextTable_OnMetacall(QTextTable* self, intptr_t slot);
int QTextTable_QBaseMetacall(QTextTable* self, int param1, int param2, void** param3);
libqt_string QTextTable_Tr(const char* s);
void QTextTable_Resize(QTextTable* self, int rows, int cols);
void QTextTable_InsertRows(QTextTable* self, int pos, int num);
void QTextTable_InsertColumns(QTextTable* self, int pos, int num);
void QTextTable_AppendRows(QTextTable* self, int count);
void QTextTable_AppendColumns(QTextTable* self, int count);
void QTextTable_RemoveRows(QTextTable* self, int pos, int num);
void QTextTable_RemoveColumns(QTextTable* self, int pos, int num);
void QTextTable_MergeCells(QTextTable* self, int row, int col, int numRows, int numCols);
void QTextTable_MergeCellsWithCursor(QTextTable* self, QTextCursor* cursor);
void QTextTable_SplitCell(QTextTable* self, int row, int col, int numRows, int numCols);
int QTextTable_Rows(const QTextTable* self);
int QTextTable_Columns(const QTextTable* self);
QTextTableCell* QTextTable_CellAt(const QTextTable* self, int row, int col);
QTextTableCell* QTextTable_CellAtWithPosition(const QTextTable* self, int position);
QTextTableCell* QTextTable_CellAtWithQTextCursor(const QTextTable* self, QTextCursor* c);
QTextCursor* QTextTable_RowStart(const QTextTable* self, QTextCursor* c);
QTextCursor* QTextTable_RowEnd(const QTextTable* self, QTextCursor* c);
void QTextTable_SetFormat(QTextTable* self, QTextTableFormat* format);
QTextTableFormat* QTextTable_Format(const QTextTable* self);
libqt_string QTextTable_Tr2(const char* s, const char* c);
libqt_string QTextTable_Tr3(const char* s, const char* c, int n);
bool QTextTable_Event(QTextTable* self, QEvent* event);
void QTextTable_OnEvent(QTextTable* self, intptr_t slot);
bool QTextTable_QBaseEvent(QTextTable* self, QEvent* event);
bool QTextTable_EventFilter(QTextTable* self, QObject* watched, QEvent* event);
void QTextTable_OnEventFilter(QTextTable* self, intptr_t slot);
bool QTextTable_QBaseEventFilter(QTextTable* self, QObject* watched, QEvent* event);
void QTextTable_TimerEvent(QTextTable* self, QTimerEvent* event);
void QTextTable_OnTimerEvent(QTextTable* self, intptr_t slot);
void QTextTable_QBaseTimerEvent(QTextTable* self, QTimerEvent* event);
void QTextTable_ChildEvent(QTextTable* self, QChildEvent* event);
void QTextTable_OnChildEvent(QTextTable* self, intptr_t slot);
void QTextTable_QBaseChildEvent(QTextTable* self, QChildEvent* event);
void QTextTable_CustomEvent(QTextTable* self, QEvent* event);
void QTextTable_OnCustomEvent(QTextTable* self, intptr_t slot);
void QTextTable_QBaseCustomEvent(QTextTable* self, QEvent* event);
void QTextTable_ConnectNotify(QTextTable* self, QMetaMethod* signal);
void QTextTable_OnConnectNotify(QTextTable* self, intptr_t slot);
void QTextTable_QBaseConnectNotify(QTextTable* self, QMetaMethod* signal);
void QTextTable_DisconnectNotify(QTextTable* self, QMetaMethod* signal);
void QTextTable_OnDisconnectNotify(QTextTable* self, intptr_t slot);
void QTextTable_QBaseDisconnectNotify(QTextTable* self, QMetaMethod* signal);
QObject* QTextTable_Sender(const QTextTable* self);
void QTextTable_OnSender(const QTextTable* self, intptr_t slot);
QObject* QTextTable_QBaseSender(const QTextTable* self);
int QTextTable_SenderSignalIndex(const QTextTable* self);
void QTextTable_OnSenderSignalIndex(const QTextTable* self, intptr_t slot);
int QTextTable_QBaseSenderSignalIndex(const QTextTable* self);
int QTextTable_Receivers(const QTextTable* self, const char* signal);
void QTextTable_OnReceivers(const QTextTable* self, intptr_t slot);
int QTextTable_QBaseReceivers(const QTextTable* self, const char* signal);
bool QTextTable_IsSignalConnected(const QTextTable* self, QMetaMethod* signal);
void QTextTable_OnIsSignalConnected(const QTextTable* self, intptr_t slot);
bool QTextTable_QBaseIsSignalConnected(const QTextTable* self, QMetaMethod* signal);
void QTextTable_Delete(QTextTable* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
