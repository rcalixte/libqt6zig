#pragma once
#ifndef SRCC_LIBQABSTRACTITEMDELEGATE_H
#define SRCC_LIBQABSTRACTITEMDELEGATE_H

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
typedef struct QAbstractItemView QAbstractItemView;
typedef struct QChildEvent QChildEvent;
typedef struct QEvent QEvent;
typedef struct QHelpEvent QHelpEvent;
typedef struct QMetaMethod QMetaMethod;
typedef struct QMetaObject QMetaObject;
typedef struct QModelIndex QModelIndex;
typedef struct QObject QObject;
typedef struct QPainter QPainter;
typedef struct QSize QSize;
typedef struct QStyleOptionViewItem QStyleOptionViewItem;
typedef struct QTimerEvent QTimerEvent;
typedef struct QWidget QWidget;
#endif

QAbstractItemDelegate* QAbstractItemDelegate_new();
QAbstractItemDelegate* QAbstractItemDelegate_new2(QObject* parent);
QMetaObject* QAbstractItemDelegate_MetaObject(const QAbstractItemDelegate* self);
void* QAbstractItemDelegate_Metacast(QAbstractItemDelegate* self, const char* param1);
int QAbstractItemDelegate_Metacall(QAbstractItemDelegate* self, int param1, int param2, void** param3);
void QAbstractItemDelegate_OnMetacall(QAbstractItemDelegate* self, intptr_t slot);
int QAbstractItemDelegate_QBaseMetacall(QAbstractItemDelegate* self, int param1, int param2, void** param3);
libqt_string QAbstractItemDelegate_Tr(const char* s);
void QAbstractItemDelegate_Paint(const QAbstractItemDelegate* self, QPainter* painter, const QStyleOptionViewItem* option, const QModelIndex* index);
void QAbstractItemDelegate_OnPaint(const QAbstractItemDelegate* self, intptr_t slot);
void QAbstractItemDelegate_QBasePaint(const QAbstractItemDelegate* self, QPainter* painter, const QStyleOptionViewItem* option, const QModelIndex* index);
QSize* QAbstractItemDelegate_SizeHint(const QAbstractItemDelegate* self, const QStyleOptionViewItem* option, const QModelIndex* index);
void QAbstractItemDelegate_OnSizeHint(const QAbstractItemDelegate* self, intptr_t slot);
QSize* QAbstractItemDelegate_QBaseSizeHint(const QAbstractItemDelegate* self, const QStyleOptionViewItem* option, const QModelIndex* index);
QWidget* QAbstractItemDelegate_CreateEditor(const QAbstractItemDelegate* self, QWidget* parent, const QStyleOptionViewItem* option, const QModelIndex* index);
void QAbstractItemDelegate_OnCreateEditor(const QAbstractItemDelegate* self, intptr_t slot);
QWidget* QAbstractItemDelegate_QBaseCreateEditor(const QAbstractItemDelegate* self, QWidget* parent, const QStyleOptionViewItem* option, const QModelIndex* index);
void QAbstractItemDelegate_DestroyEditor(const QAbstractItemDelegate* self, QWidget* editor, const QModelIndex* index);
void QAbstractItemDelegate_OnDestroyEditor(const QAbstractItemDelegate* self, intptr_t slot);
void QAbstractItemDelegate_QBaseDestroyEditor(const QAbstractItemDelegate* self, QWidget* editor, const QModelIndex* index);
void QAbstractItemDelegate_SetEditorData(const QAbstractItemDelegate* self, QWidget* editor, const QModelIndex* index);
void QAbstractItemDelegate_OnSetEditorData(const QAbstractItemDelegate* self, intptr_t slot);
void QAbstractItemDelegate_QBaseSetEditorData(const QAbstractItemDelegate* self, QWidget* editor, const QModelIndex* index);
void QAbstractItemDelegate_SetModelData(const QAbstractItemDelegate* self, QWidget* editor, QAbstractItemModel* model, const QModelIndex* index);
void QAbstractItemDelegate_OnSetModelData(const QAbstractItemDelegate* self, intptr_t slot);
void QAbstractItemDelegate_QBaseSetModelData(const QAbstractItemDelegate* self, QWidget* editor, QAbstractItemModel* model, const QModelIndex* index);
void QAbstractItemDelegate_UpdateEditorGeometry(const QAbstractItemDelegate* self, QWidget* editor, const QStyleOptionViewItem* option, const QModelIndex* index);
void QAbstractItemDelegate_OnUpdateEditorGeometry(const QAbstractItemDelegate* self, intptr_t slot);
void QAbstractItemDelegate_QBaseUpdateEditorGeometry(const QAbstractItemDelegate* self, QWidget* editor, const QStyleOptionViewItem* option, const QModelIndex* index);
bool QAbstractItemDelegate_EditorEvent(QAbstractItemDelegate* self, QEvent* event, QAbstractItemModel* model, const QStyleOptionViewItem* option, const QModelIndex* index);
void QAbstractItemDelegate_OnEditorEvent(QAbstractItemDelegate* self, intptr_t slot);
bool QAbstractItemDelegate_QBaseEditorEvent(QAbstractItemDelegate* self, QEvent* event, QAbstractItemModel* model, const QStyleOptionViewItem* option, const QModelIndex* index);
bool QAbstractItemDelegate_HelpEvent(QAbstractItemDelegate* self, QHelpEvent* event, QAbstractItemView* view, const QStyleOptionViewItem* option, const QModelIndex* index);
void QAbstractItemDelegate_OnHelpEvent(QAbstractItemDelegate* self, intptr_t slot);
bool QAbstractItemDelegate_QBaseHelpEvent(QAbstractItemDelegate* self, QHelpEvent* event, QAbstractItemView* view, const QStyleOptionViewItem* option, const QModelIndex* index);
libqt_list /* of int */ QAbstractItemDelegate_PaintingRoles(const QAbstractItemDelegate* self);
void QAbstractItemDelegate_OnPaintingRoles(const QAbstractItemDelegate* self, intptr_t slot);
libqt_list /* of int */ QAbstractItemDelegate_QBasePaintingRoles(const QAbstractItemDelegate* self);
void QAbstractItemDelegate_CommitData(QAbstractItemDelegate* self, QWidget* editor);
void QAbstractItemDelegate_Connect_CommitData(QAbstractItemDelegate* self, intptr_t slot);
void QAbstractItemDelegate_CloseEditor(QAbstractItemDelegate* self, QWidget* editor);
void QAbstractItemDelegate_Connect_CloseEditor(QAbstractItemDelegate* self, intptr_t slot);
void QAbstractItemDelegate_SizeHintChanged(QAbstractItemDelegate* self, const QModelIndex* param1);
void QAbstractItemDelegate_Connect_SizeHintChanged(QAbstractItemDelegate* self, intptr_t slot);
libqt_string QAbstractItemDelegate_Tr2(const char* s, const char* c);
libqt_string QAbstractItemDelegate_Tr3(const char* s, const char* c, int n);
void QAbstractItemDelegate_CloseEditor2(QAbstractItemDelegate* self, QWidget* editor, int hint);
void QAbstractItemDelegate_Connect_CloseEditor2(QAbstractItemDelegate* self, intptr_t slot);
bool QAbstractItemDelegate_Event(QAbstractItemDelegate* self, QEvent* event);
void QAbstractItemDelegate_OnEvent(QAbstractItemDelegate* self, intptr_t slot);
bool QAbstractItemDelegate_QBaseEvent(QAbstractItemDelegate* self, QEvent* event);
bool QAbstractItemDelegate_EventFilter(QAbstractItemDelegate* self, QObject* watched, QEvent* event);
void QAbstractItemDelegate_OnEventFilter(QAbstractItemDelegate* self, intptr_t slot);
bool QAbstractItemDelegate_QBaseEventFilter(QAbstractItemDelegate* self, QObject* watched, QEvent* event);
void QAbstractItemDelegate_TimerEvent(QAbstractItemDelegate* self, QTimerEvent* event);
void QAbstractItemDelegate_OnTimerEvent(QAbstractItemDelegate* self, intptr_t slot);
void QAbstractItemDelegate_QBaseTimerEvent(QAbstractItemDelegate* self, QTimerEvent* event);
void QAbstractItemDelegate_ChildEvent(QAbstractItemDelegate* self, QChildEvent* event);
void QAbstractItemDelegate_OnChildEvent(QAbstractItemDelegate* self, intptr_t slot);
void QAbstractItemDelegate_QBaseChildEvent(QAbstractItemDelegate* self, QChildEvent* event);
void QAbstractItemDelegate_CustomEvent(QAbstractItemDelegate* self, QEvent* event);
void QAbstractItemDelegate_OnCustomEvent(QAbstractItemDelegate* self, intptr_t slot);
void QAbstractItemDelegate_QBaseCustomEvent(QAbstractItemDelegate* self, QEvent* event);
void QAbstractItemDelegate_ConnectNotify(QAbstractItemDelegate* self, const QMetaMethod* signal);
void QAbstractItemDelegate_OnConnectNotify(QAbstractItemDelegate* self, intptr_t slot);
void QAbstractItemDelegate_QBaseConnectNotify(QAbstractItemDelegate* self, const QMetaMethod* signal);
void QAbstractItemDelegate_DisconnectNotify(QAbstractItemDelegate* self, const QMetaMethod* signal);
void QAbstractItemDelegate_OnDisconnectNotify(QAbstractItemDelegate* self, intptr_t slot);
void QAbstractItemDelegate_QBaseDisconnectNotify(QAbstractItemDelegate* self, const QMetaMethod* signal);
QObject* QAbstractItemDelegate_Sender(const QAbstractItemDelegate* self);
void QAbstractItemDelegate_OnSender(const QAbstractItemDelegate* self, intptr_t slot);
QObject* QAbstractItemDelegate_QBaseSender(const QAbstractItemDelegate* self);
int QAbstractItemDelegate_SenderSignalIndex(const QAbstractItemDelegate* self);
void QAbstractItemDelegate_OnSenderSignalIndex(const QAbstractItemDelegate* self, intptr_t slot);
int QAbstractItemDelegate_QBaseSenderSignalIndex(const QAbstractItemDelegate* self);
int QAbstractItemDelegate_Receivers(const QAbstractItemDelegate* self, const char* signal);
void QAbstractItemDelegate_OnReceivers(const QAbstractItemDelegate* self, intptr_t slot);
int QAbstractItemDelegate_QBaseReceivers(const QAbstractItemDelegate* self, const char* signal);
bool QAbstractItemDelegate_IsSignalConnected(const QAbstractItemDelegate* self, const QMetaMethod* signal);
void QAbstractItemDelegate_OnIsSignalConnected(const QAbstractItemDelegate* self, intptr_t slot);
bool QAbstractItemDelegate_QBaseIsSignalConnected(const QAbstractItemDelegate* self, const QMetaMethod* signal);
void QAbstractItemDelegate_Delete(QAbstractItemDelegate* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
