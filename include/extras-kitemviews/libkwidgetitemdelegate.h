#pragma once
#ifndef SRC_EXTRAS_KITEMVIEWSC_LIBKWIDGETITEMDELEGATE_H
#define SRC_EXTRAS_KITEMVIEWSC_LIBKWIDGETITEMDELEGATE_H

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
#else
typedef struct KWidgetItemDelegate KWidgetItemDelegate;
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
typedef struct QPersistentModelIndex QPersistentModelIndex;
typedef struct QSize QSize;
typedef struct QStyleOptionViewItem QStyleOptionViewItem;
typedef struct QTimerEvent QTimerEvent;
typedef struct QWidget QWidget;
#endif

KWidgetItemDelegate* KWidgetItemDelegate_new(QAbstractItemView* itemView);
KWidgetItemDelegate* KWidgetItemDelegate_new2(QAbstractItemView* itemView, QObject* parent);
QMetaObject* KWidgetItemDelegate_MetaObject(const KWidgetItemDelegate* self);
void* KWidgetItemDelegate_Metacast(KWidgetItemDelegate* self, const char* param1);
int KWidgetItemDelegate_Metacall(KWidgetItemDelegate* self, int param1, int param2, void** param3);
QAbstractItemView* KWidgetItemDelegate_ItemView(const KWidgetItemDelegate* self);
QPersistentModelIndex* KWidgetItemDelegate_FocusedIndex(const KWidgetItemDelegate* self);
void KWidgetItemDelegate_ResetModel(KWidgetItemDelegate* self);
libqt_list /* of QWidget* */ KWidgetItemDelegate_CreateItemWidgets(const KWidgetItemDelegate* self, const QModelIndex* index);
void KWidgetItemDelegate_UpdateItemWidgets(const KWidgetItemDelegate* self, const libqt_list /* of QWidget* */ widgets, const QStyleOptionViewItem* option, const QPersistentModelIndex* index);
void KWidgetItemDelegate_OnMetaObject(const KWidgetItemDelegate* self, intptr_t slot);
QMetaObject* KWidgetItemDelegate_SuperMetaObject(const KWidgetItemDelegate* self);
void KWidgetItemDelegate_OnMetacast(KWidgetItemDelegate* self, intptr_t slot);
void* KWidgetItemDelegate_SuperMetacast(KWidgetItemDelegate* self, const char* param1);
void KWidgetItemDelegate_OnMetacall(KWidgetItemDelegate* self, intptr_t slot);
int KWidgetItemDelegate_SuperMetacall(KWidgetItemDelegate* self, int param1, int param2, void** param3);
void KWidgetItemDelegate_OnCreateItemWidgets(const KWidgetItemDelegate* self, intptr_t slot);
libqt_list /* of QWidget* */ KWidgetItemDelegate_SuperCreateItemWidgets(const KWidgetItemDelegate* self, const QModelIndex* index);
void KWidgetItemDelegate_OnUpdateItemWidgets(const KWidgetItemDelegate* self, intptr_t slot);
void KWidgetItemDelegate_SuperUpdateItemWidgets(const KWidgetItemDelegate* self, const libqt_list /* of QWidget* */ widgets, const QStyleOptionViewItem* option, const QPersistentModelIndex* index);
void KWidgetItemDelegate_Paint(const KWidgetItemDelegate* self, QPainter* painter, const QStyleOptionViewItem* option, const QModelIndex* index);
void KWidgetItemDelegate_OnPaint(const KWidgetItemDelegate* self, intptr_t slot);
void KWidgetItemDelegate_SuperPaint(const KWidgetItemDelegate* self, QPainter* painter, const QStyleOptionViewItem* option, const QModelIndex* index);
QSize* KWidgetItemDelegate_SizeHint(const KWidgetItemDelegate* self, const QStyleOptionViewItem* option, const QModelIndex* index);
void KWidgetItemDelegate_OnSizeHint(const KWidgetItemDelegate* self, intptr_t slot);
QSize* KWidgetItemDelegate_SuperSizeHint(const KWidgetItemDelegate* self, const QStyleOptionViewItem* option, const QModelIndex* index);
QWidget* KWidgetItemDelegate_CreateEditor(const KWidgetItemDelegate* self, QWidget* parent, const QStyleOptionViewItem* option, const QModelIndex* index);
void KWidgetItemDelegate_OnCreateEditor(const KWidgetItemDelegate* self, intptr_t slot);
QWidget* KWidgetItemDelegate_SuperCreateEditor(const KWidgetItemDelegate* self, QWidget* parent, const QStyleOptionViewItem* option, const QModelIndex* index);
void KWidgetItemDelegate_DestroyEditor(const KWidgetItemDelegate* self, QWidget* editor, const QModelIndex* index);
void KWidgetItemDelegate_OnDestroyEditor(const KWidgetItemDelegate* self, intptr_t slot);
void KWidgetItemDelegate_SuperDestroyEditor(const KWidgetItemDelegate* self, QWidget* editor, const QModelIndex* index);
void KWidgetItemDelegate_SetEditorData(const KWidgetItemDelegate* self, QWidget* editor, const QModelIndex* index);
void KWidgetItemDelegate_OnSetEditorData(const KWidgetItemDelegate* self, intptr_t slot);
void KWidgetItemDelegate_SuperSetEditorData(const KWidgetItemDelegate* self, QWidget* editor, const QModelIndex* index);
void KWidgetItemDelegate_SetModelData(const KWidgetItemDelegate* self, QWidget* editor, QAbstractItemModel* model, const QModelIndex* index);
void KWidgetItemDelegate_OnSetModelData(const KWidgetItemDelegate* self, intptr_t slot);
void KWidgetItemDelegate_SuperSetModelData(const KWidgetItemDelegate* self, QWidget* editor, QAbstractItemModel* model, const QModelIndex* index);
void KWidgetItemDelegate_UpdateEditorGeometry(const KWidgetItemDelegate* self, QWidget* editor, const QStyleOptionViewItem* option, const QModelIndex* index);
void KWidgetItemDelegate_OnUpdateEditorGeometry(const KWidgetItemDelegate* self, intptr_t slot);
void KWidgetItemDelegate_SuperUpdateEditorGeometry(const KWidgetItemDelegate* self, QWidget* editor, const QStyleOptionViewItem* option, const QModelIndex* index);
bool KWidgetItemDelegate_EditorEvent(KWidgetItemDelegate* self, QEvent* event, QAbstractItemModel* model, const QStyleOptionViewItem* option, const QModelIndex* index);
void KWidgetItemDelegate_OnEditorEvent(KWidgetItemDelegate* self, intptr_t slot);
bool KWidgetItemDelegate_SuperEditorEvent(KWidgetItemDelegate* self, QEvent* event, QAbstractItemModel* model, const QStyleOptionViewItem* option, const QModelIndex* index);
bool KWidgetItemDelegate_HelpEvent(KWidgetItemDelegate* self, QHelpEvent* event, QAbstractItemView* view, const QStyleOptionViewItem* option, const QModelIndex* index);
void KWidgetItemDelegate_OnHelpEvent(KWidgetItemDelegate* self, intptr_t slot);
bool KWidgetItemDelegate_SuperHelpEvent(KWidgetItemDelegate* self, QHelpEvent* event, QAbstractItemView* view, const QStyleOptionViewItem* option, const QModelIndex* index);
libqt_list /* of int */ KWidgetItemDelegate_PaintingRoles(const KWidgetItemDelegate* self);
void KWidgetItemDelegate_OnPaintingRoles(const KWidgetItemDelegate* self, intptr_t slot);
libqt_list /* of int */ KWidgetItemDelegate_SuperPaintingRoles(const KWidgetItemDelegate* self);
bool KWidgetItemDelegate_Event(KWidgetItemDelegate* self, QEvent* event);
void KWidgetItemDelegate_OnEvent(KWidgetItemDelegate* self, intptr_t slot);
bool KWidgetItemDelegate_SuperEvent(KWidgetItemDelegate* self, QEvent* event);
bool KWidgetItemDelegate_EventFilter(KWidgetItemDelegate* self, QObject* watched, QEvent* event);
void KWidgetItemDelegate_OnEventFilter(KWidgetItemDelegate* self, intptr_t slot);
bool KWidgetItemDelegate_SuperEventFilter(KWidgetItemDelegate* self, QObject* watched, QEvent* event);
void KWidgetItemDelegate_TimerEvent(KWidgetItemDelegate* self, QTimerEvent* event);
void KWidgetItemDelegate_OnTimerEvent(KWidgetItemDelegate* self, intptr_t slot);
void KWidgetItemDelegate_SuperTimerEvent(KWidgetItemDelegate* self, QTimerEvent* event);
void KWidgetItemDelegate_ChildEvent(KWidgetItemDelegate* self, QChildEvent* event);
void KWidgetItemDelegate_OnChildEvent(KWidgetItemDelegate* self, intptr_t slot);
void KWidgetItemDelegate_SuperChildEvent(KWidgetItemDelegate* self, QChildEvent* event);
void KWidgetItemDelegate_CustomEvent(KWidgetItemDelegate* self, QEvent* event);
void KWidgetItemDelegate_OnCustomEvent(KWidgetItemDelegate* self, intptr_t slot);
void KWidgetItemDelegate_SuperCustomEvent(KWidgetItemDelegate* self, QEvent* event);
void KWidgetItemDelegate_ConnectNotify(KWidgetItemDelegate* self, const QMetaMethod* signal);
void KWidgetItemDelegate_OnConnectNotify(KWidgetItemDelegate* self, intptr_t slot);
void KWidgetItemDelegate_SuperConnectNotify(KWidgetItemDelegate* self, const QMetaMethod* signal);
void KWidgetItemDelegate_DisconnectNotify(KWidgetItemDelegate* self, const QMetaMethod* signal);
void KWidgetItemDelegate_OnDisconnectNotify(KWidgetItemDelegate* self, intptr_t slot);
void KWidgetItemDelegate_SuperDisconnectNotify(KWidgetItemDelegate* self, const QMetaMethod* signal);
void KWidgetItemDelegate_SetBlockedEventTypes(const KWidgetItemDelegate* self, QWidget* widget, const libqt_list /* of int */ types);
void KWidgetItemDelegate_OnSetBlockedEventTypes(const KWidgetItemDelegate* self, intptr_t slot);
void KWidgetItemDelegate_SuperSetBlockedEventTypes(const KWidgetItemDelegate* self, QWidget* widget, const libqt_list /* of int */ types);
libqt_list /* of int */ KWidgetItemDelegate_BlockedEventTypes(const KWidgetItemDelegate* self, QWidget* widget);
void KWidgetItemDelegate_OnBlockedEventTypes(const KWidgetItemDelegate* self, intptr_t slot);
libqt_list /* of int */ KWidgetItemDelegate_SuperBlockedEventTypes(const KWidgetItemDelegate* self, QWidget* widget);
QObject* KWidgetItemDelegate_Sender(const KWidgetItemDelegate* self);
void KWidgetItemDelegate_OnSender(const KWidgetItemDelegate* self, intptr_t slot);
QObject* KWidgetItemDelegate_SuperSender(const KWidgetItemDelegate* self);
int KWidgetItemDelegate_SenderSignalIndex(const KWidgetItemDelegate* self);
void KWidgetItemDelegate_OnSenderSignalIndex(const KWidgetItemDelegate* self, intptr_t slot);
int KWidgetItemDelegate_SuperSenderSignalIndex(const KWidgetItemDelegate* self);
int KWidgetItemDelegate_Receivers(const KWidgetItemDelegate* self, const char* signal);
void KWidgetItemDelegate_OnReceivers(const KWidgetItemDelegate* self, intptr_t slot);
int KWidgetItemDelegate_SuperReceivers(const KWidgetItemDelegate* self, const char* signal);
bool KWidgetItemDelegate_IsSignalConnected(const KWidgetItemDelegate* self, const QMetaMethod* signal);
void KWidgetItemDelegate_OnIsSignalConnected(const KWidgetItemDelegate* self, intptr_t slot);
bool KWidgetItemDelegate_SuperIsSignalConnected(const KWidgetItemDelegate* self, const QMetaMethod* signal);
void KWidgetItemDelegate_Delete(KWidgetItemDelegate* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
