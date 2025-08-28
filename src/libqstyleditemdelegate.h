#pragma once
#ifndef SRCC_LIBQSTYLEDITEMDELEGATE_H
#define SRCC_LIBQSTYLEDITEMDELEGATE_H

#include <stdbool.h>
#include <stddef.h>

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
typedef struct QItemEditorFactory QItemEditorFactory;
typedef struct QLocale QLocale;
typedef struct QMetaMethod QMetaMethod;
typedef struct QMetaObject QMetaObject;
typedef struct QModelIndex QModelIndex;
typedef struct QObject QObject;
typedef struct QPainter QPainter;
typedef struct QSize QSize;
typedef struct QStyleOptionViewItem QStyleOptionViewItem;
typedef struct QStyledItemDelegate QStyledItemDelegate;
typedef struct QTimerEvent QTimerEvent;
typedef struct QVariant QVariant;
typedef struct QWidget QWidget;
#endif

QStyledItemDelegate* QStyledItemDelegate_new();
QStyledItemDelegate* QStyledItemDelegate_new2(QObject* parent);
QMetaObject* QStyledItemDelegate_MetaObject(const QStyledItemDelegate* self);
void* QStyledItemDelegate_Metacast(QStyledItemDelegate* self, const char* param1);
int QStyledItemDelegate_Metacall(QStyledItemDelegate* self, int param1, int param2, void** param3);
libqt_string QStyledItemDelegate_Tr(const char* s);
void QStyledItemDelegate_Paint(const QStyledItemDelegate* self, QPainter* painter, const QStyleOptionViewItem* option, const QModelIndex* index);
QSize* QStyledItemDelegate_SizeHint(const QStyledItemDelegate* self, const QStyleOptionViewItem* option, const QModelIndex* index);
QWidget* QStyledItemDelegate_CreateEditor(const QStyledItemDelegate* self, QWidget* parent, const QStyleOptionViewItem* option, const QModelIndex* index);
void QStyledItemDelegate_SetEditorData(const QStyledItemDelegate* self, QWidget* editor, const QModelIndex* index);
void QStyledItemDelegate_SetModelData(const QStyledItemDelegate* self, QWidget* editor, QAbstractItemModel* model, const QModelIndex* index);
void QStyledItemDelegate_UpdateEditorGeometry(const QStyledItemDelegate* self, QWidget* editor, const QStyleOptionViewItem* option, const QModelIndex* index);
QItemEditorFactory* QStyledItemDelegate_ItemEditorFactory(const QStyledItemDelegate* self);
void QStyledItemDelegate_SetItemEditorFactory(QStyledItemDelegate* self, QItemEditorFactory* factory);
libqt_string QStyledItemDelegate_DisplayText(const QStyledItemDelegate* self, const QVariant* value, const QLocale* locale);
void QStyledItemDelegate_InitStyleOption(const QStyledItemDelegate* self, QStyleOptionViewItem* option, const QModelIndex* index);
bool QStyledItemDelegate_EventFilter(QStyledItemDelegate* self, QObject* object, QEvent* event);
bool QStyledItemDelegate_EditorEvent(QStyledItemDelegate* self, QEvent* event, QAbstractItemModel* model, const QStyleOptionViewItem* option, const QModelIndex* index);
libqt_string QStyledItemDelegate_Tr2(const char* s, const char* c);
libqt_string QStyledItemDelegate_Tr3(const char* s, const char* c, int n);
void QStyledItemDelegate_OnMetacall(QStyledItemDelegate* self, intptr_t slot);
int QStyledItemDelegate_QBaseMetacall(QStyledItemDelegate* self, int param1, int param2, void** param3);
void QStyledItemDelegate_OnPaint(const QStyledItemDelegate* self, intptr_t slot);
void QStyledItemDelegate_QBasePaint(const QStyledItemDelegate* self, QPainter* painter, const QStyleOptionViewItem* option, const QModelIndex* index);
void QStyledItemDelegate_OnSizeHint(const QStyledItemDelegate* self, intptr_t slot);
QSize* QStyledItemDelegate_QBaseSizeHint(const QStyledItemDelegate* self, const QStyleOptionViewItem* option, const QModelIndex* index);
void QStyledItemDelegate_OnCreateEditor(const QStyledItemDelegate* self, intptr_t slot);
QWidget* QStyledItemDelegate_QBaseCreateEditor(const QStyledItemDelegate* self, QWidget* parent, const QStyleOptionViewItem* option, const QModelIndex* index);
void QStyledItemDelegate_OnSetEditorData(const QStyledItemDelegate* self, intptr_t slot);
void QStyledItemDelegate_QBaseSetEditorData(const QStyledItemDelegate* self, QWidget* editor, const QModelIndex* index);
void QStyledItemDelegate_OnSetModelData(const QStyledItemDelegate* self, intptr_t slot);
void QStyledItemDelegate_QBaseSetModelData(const QStyledItemDelegate* self, QWidget* editor, QAbstractItemModel* model, const QModelIndex* index);
void QStyledItemDelegate_OnUpdateEditorGeometry(const QStyledItemDelegate* self, intptr_t slot);
void QStyledItemDelegate_QBaseUpdateEditorGeometry(const QStyledItemDelegate* self, QWidget* editor, const QStyleOptionViewItem* option, const QModelIndex* index);
void QStyledItemDelegate_OnDisplayText(const QStyledItemDelegate* self, intptr_t slot);
libqt_string QStyledItemDelegate_QBaseDisplayText(const QStyledItemDelegate* self, const QVariant* value, const QLocale* locale);
void QStyledItemDelegate_OnInitStyleOption(const QStyledItemDelegate* self, intptr_t slot);
void QStyledItemDelegate_QBaseInitStyleOption(const QStyledItemDelegate* self, QStyleOptionViewItem* option, const QModelIndex* index);
void QStyledItemDelegate_OnEventFilter(QStyledItemDelegate* self, intptr_t slot);
bool QStyledItemDelegate_QBaseEventFilter(QStyledItemDelegate* self, QObject* object, QEvent* event);
void QStyledItemDelegate_OnEditorEvent(QStyledItemDelegate* self, intptr_t slot);
bool QStyledItemDelegate_QBaseEditorEvent(QStyledItemDelegate* self, QEvent* event, QAbstractItemModel* model, const QStyleOptionViewItem* option, const QModelIndex* index);
void QStyledItemDelegate_DestroyEditor(const QStyledItemDelegate* self, QWidget* editor, const QModelIndex* index);
void QStyledItemDelegate_OnDestroyEditor(const QStyledItemDelegate* self, intptr_t slot);
void QStyledItemDelegate_QBaseDestroyEditor(const QStyledItemDelegate* self, QWidget* editor, const QModelIndex* index);
bool QStyledItemDelegate_HelpEvent(QStyledItemDelegate* self, QHelpEvent* event, QAbstractItemView* view, const QStyleOptionViewItem* option, const QModelIndex* index);
void QStyledItemDelegate_OnHelpEvent(QStyledItemDelegate* self, intptr_t slot);
bool QStyledItemDelegate_QBaseHelpEvent(QStyledItemDelegate* self, QHelpEvent* event, QAbstractItemView* view, const QStyleOptionViewItem* option, const QModelIndex* index);
libqt_list /* of int */ QStyledItemDelegate_PaintingRoles(const QStyledItemDelegate* self);
void QStyledItemDelegate_OnPaintingRoles(const QStyledItemDelegate* self, intptr_t slot);
libqt_list /* of int */ QStyledItemDelegate_QBasePaintingRoles(const QStyledItemDelegate* self);
bool QStyledItemDelegate_Event(QStyledItemDelegate* self, QEvent* event);
void QStyledItemDelegate_OnEvent(QStyledItemDelegate* self, intptr_t slot);
bool QStyledItemDelegate_QBaseEvent(QStyledItemDelegate* self, QEvent* event);
void QStyledItemDelegate_TimerEvent(QStyledItemDelegate* self, QTimerEvent* event);
void QStyledItemDelegate_OnTimerEvent(QStyledItemDelegate* self, intptr_t slot);
void QStyledItemDelegate_QBaseTimerEvent(QStyledItemDelegate* self, QTimerEvent* event);
void QStyledItemDelegate_ChildEvent(QStyledItemDelegate* self, QChildEvent* event);
void QStyledItemDelegate_OnChildEvent(QStyledItemDelegate* self, intptr_t slot);
void QStyledItemDelegate_QBaseChildEvent(QStyledItemDelegate* self, QChildEvent* event);
void QStyledItemDelegate_CustomEvent(QStyledItemDelegate* self, QEvent* event);
void QStyledItemDelegate_OnCustomEvent(QStyledItemDelegate* self, intptr_t slot);
void QStyledItemDelegate_QBaseCustomEvent(QStyledItemDelegate* self, QEvent* event);
void QStyledItemDelegate_ConnectNotify(QStyledItemDelegate* self, const QMetaMethod* signal);
void QStyledItemDelegate_OnConnectNotify(QStyledItemDelegate* self, intptr_t slot);
void QStyledItemDelegate_QBaseConnectNotify(QStyledItemDelegate* self, const QMetaMethod* signal);
void QStyledItemDelegate_DisconnectNotify(QStyledItemDelegate* self, const QMetaMethod* signal);
void QStyledItemDelegate_OnDisconnectNotify(QStyledItemDelegate* self, intptr_t slot);
void QStyledItemDelegate_QBaseDisconnectNotify(QStyledItemDelegate* self, const QMetaMethod* signal);
QObject* QStyledItemDelegate_Sender(const QStyledItemDelegate* self);
void QStyledItemDelegate_OnSender(const QStyledItemDelegate* self, intptr_t slot);
QObject* QStyledItemDelegate_QBaseSender(const QStyledItemDelegate* self);
int QStyledItemDelegate_SenderSignalIndex(const QStyledItemDelegate* self);
void QStyledItemDelegate_OnSenderSignalIndex(const QStyledItemDelegate* self, intptr_t slot);
int QStyledItemDelegate_QBaseSenderSignalIndex(const QStyledItemDelegate* self);
int QStyledItemDelegate_Receivers(const QStyledItemDelegate* self, const char* signal);
void QStyledItemDelegate_OnReceivers(const QStyledItemDelegate* self, intptr_t slot);
int QStyledItemDelegate_QBaseReceivers(const QStyledItemDelegate* self, const char* signal);
bool QStyledItemDelegate_IsSignalConnected(const QStyledItemDelegate* self, const QMetaMethod* signal);
void QStyledItemDelegate_OnIsSignalConnected(const QStyledItemDelegate* self, intptr_t slot);
bool QStyledItemDelegate_QBaseIsSignalConnected(const QStyledItemDelegate* self, const QMetaMethod* signal);
void QStyledItemDelegate_Delete(QStyledItemDelegate* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
