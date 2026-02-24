#pragma once
#ifndef SRC_EXTRAS_KITEMVIEWSC_LIBKEXTENDABLEITEMDELEGATE_H
#define SRC_EXTRAS_KITEMVIEWSC_LIBKEXTENDABLEITEMDELEGATE_H

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
#else
typedef struct KExtendableItemDelegate KExtendableItemDelegate;
typedef struct QAbstractItemDelegate QAbstractItemDelegate;
typedef struct QAbstractItemModel QAbstractItemModel;
typedef struct QAbstractItemView QAbstractItemView;
typedef struct QChildEvent QChildEvent;
typedef struct QEvent QEvent;
typedef struct QHelpEvent QHelpEvent;
typedef struct QLocale QLocale;
typedef struct QMetaMethod QMetaMethod;
typedef struct QMetaObject QMetaObject;
typedef struct QModelIndex QModelIndex;
typedef struct QObject QObject;
typedef struct QPainter QPainter;
typedef struct QPixmap QPixmap;
typedef struct QRect QRect;
typedef struct QSize QSize;
typedef struct QStyleOptionViewItem QStyleOptionViewItem;
typedef struct QStyledItemDelegate QStyledItemDelegate;
typedef struct QTimerEvent QTimerEvent;
typedef struct QVariant QVariant;
typedef struct QWidget QWidget;
#endif

KExtendableItemDelegate* KExtendableItemDelegate_new(QAbstractItemView* parent);
QMetaObject* KExtendableItemDelegate_MetaObject(const KExtendableItemDelegate* self);
void* KExtendableItemDelegate_Metacast(KExtendableItemDelegate* self, const char* param1);
int KExtendableItemDelegate_Metacall(KExtendableItemDelegate* self, int param1, int param2, void** param3);
QSize* KExtendableItemDelegate_SizeHint(const KExtendableItemDelegate* self, const QStyleOptionViewItem* option, const QModelIndex* index);
void KExtendableItemDelegate_Paint(const KExtendableItemDelegate* self, QPainter* painter, const QStyleOptionViewItem* option, const QModelIndex* index);
void KExtendableItemDelegate_ExtendItem(KExtendableItemDelegate* self, QWidget* extender, const QModelIndex* index);
void KExtendableItemDelegate_ContractItem(KExtendableItemDelegate* self, const QModelIndex* index);
void KExtendableItemDelegate_ContractAll(KExtendableItemDelegate* self);
bool KExtendableItemDelegate_IsExtended(const KExtendableItemDelegate* self, const QModelIndex* index);
void KExtendableItemDelegate_UpdateExtenderGeometry(const KExtendableItemDelegate* self, QWidget* extender, const QStyleOptionViewItem* option, const QModelIndex* index);
void KExtendableItemDelegate_ExtenderCreated(KExtendableItemDelegate* self, QWidget* extender, const QModelIndex* index);
void KExtendableItemDelegate_Connect_ExtenderCreated(KExtendableItemDelegate* self, intptr_t slot);
void KExtendableItemDelegate_ExtenderDestroyed(KExtendableItemDelegate* self, QWidget* extender, const QModelIndex* index);
void KExtendableItemDelegate_Connect_ExtenderDestroyed(KExtendableItemDelegate* self, intptr_t slot);
void KExtendableItemDelegate_OnMetaObject(const KExtendableItemDelegate* self, intptr_t slot);
QMetaObject* KExtendableItemDelegate_SuperMetaObject(const KExtendableItemDelegate* self);
void KExtendableItemDelegate_OnMetacast(KExtendableItemDelegate* self, intptr_t slot);
void* KExtendableItemDelegate_SuperMetacast(KExtendableItemDelegate* self, const char* param1);
void KExtendableItemDelegate_OnMetacall(KExtendableItemDelegate* self, intptr_t slot);
int KExtendableItemDelegate_SuperMetacall(KExtendableItemDelegate* self, int param1, int param2, void** param3);
void KExtendableItemDelegate_OnSizeHint(const KExtendableItemDelegate* self, intptr_t slot);
QSize* KExtendableItemDelegate_SuperSizeHint(const KExtendableItemDelegate* self, const QStyleOptionViewItem* option, const QModelIndex* index);
void KExtendableItemDelegate_OnPaint(const KExtendableItemDelegate* self, intptr_t slot);
void KExtendableItemDelegate_SuperPaint(const KExtendableItemDelegate* self, QPainter* painter, const QStyleOptionViewItem* option, const QModelIndex* index);
void KExtendableItemDelegate_OnUpdateExtenderGeometry(const KExtendableItemDelegate* self, intptr_t slot);
void KExtendableItemDelegate_SuperUpdateExtenderGeometry(const KExtendableItemDelegate* self, QWidget* extender, const QStyleOptionViewItem* option, const QModelIndex* index);
QWidget* KExtendableItemDelegate_CreateEditor(const KExtendableItemDelegate* self, QWidget* parent, const QStyleOptionViewItem* option, const QModelIndex* index);
void KExtendableItemDelegate_OnCreateEditor(const KExtendableItemDelegate* self, intptr_t slot);
QWidget* KExtendableItemDelegate_SuperCreateEditor(const KExtendableItemDelegate* self, QWidget* parent, const QStyleOptionViewItem* option, const QModelIndex* index);
void KExtendableItemDelegate_SetEditorData(const KExtendableItemDelegate* self, QWidget* editor, const QModelIndex* index);
void KExtendableItemDelegate_OnSetEditorData(const KExtendableItemDelegate* self, intptr_t slot);
void KExtendableItemDelegate_SuperSetEditorData(const KExtendableItemDelegate* self, QWidget* editor, const QModelIndex* index);
void KExtendableItemDelegate_SetModelData(const KExtendableItemDelegate* self, QWidget* editor, QAbstractItemModel* model, const QModelIndex* index);
void KExtendableItemDelegate_OnSetModelData(const KExtendableItemDelegate* self, intptr_t slot);
void KExtendableItemDelegate_SuperSetModelData(const KExtendableItemDelegate* self, QWidget* editor, QAbstractItemModel* model, const QModelIndex* index);
void KExtendableItemDelegate_UpdateEditorGeometry(const KExtendableItemDelegate* self, QWidget* editor, const QStyleOptionViewItem* option, const QModelIndex* index);
void KExtendableItemDelegate_OnUpdateEditorGeometry(const KExtendableItemDelegate* self, intptr_t slot);
void KExtendableItemDelegate_SuperUpdateEditorGeometry(const KExtendableItemDelegate* self, QWidget* editor, const QStyleOptionViewItem* option, const QModelIndex* index);
libqt_string KExtendableItemDelegate_DisplayText(const KExtendableItemDelegate* self, const QVariant* value, const QLocale* locale);
void KExtendableItemDelegate_OnDisplayText(const KExtendableItemDelegate* self, intptr_t slot);
libqt_string KExtendableItemDelegate_SuperDisplayText(const KExtendableItemDelegate* self, const QVariant* value, const QLocale* locale);
void KExtendableItemDelegate_InitStyleOption(const KExtendableItemDelegate* self, QStyleOptionViewItem* option, const QModelIndex* index);
void KExtendableItemDelegate_OnInitStyleOption(const KExtendableItemDelegate* self, intptr_t slot);
void KExtendableItemDelegate_SuperInitStyleOption(const KExtendableItemDelegate* self, QStyleOptionViewItem* option, const QModelIndex* index);
bool KExtendableItemDelegate_EventFilter(KExtendableItemDelegate* self, QObject* object, QEvent* event);
void KExtendableItemDelegate_OnEventFilter(KExtendableItemDelegate* self, intptr_t slot);
bool KExtendableItemDelegate_SuperEventFilter(KExtendableItemDelegate* self, QObject* object, QEvent* event);
bool KExtendableItemDelegate_EditorEvent(KExtendableItemDelegate* self, QEvent* event, QAbstractItemModel* model, const QStyleOptionViewItem* option, const QModelIndex* index);
void KExtendableItemDelegate_OnEditorEvent(KExtendableItemDelegate* self, intptr_t slot);
bool KExtendableItemDelegate_SuperEditorEvent(KExtendableItemDelegate* self, QEvent* event, QAbstractItemModel* model, const QStyleOptionViewItem* option, const QModelIndex* index);
void KExtendableItemDelegate_DestroyEditor(const KExtendableItemDelegate* self, QWidget* editor, const QModelIndex* index);
void KExtendableItemDelegate_OnDestroyEditor(const KExtendableItemDelegate* self, intptr_t slot);
void KExtendableItemDelegate_SuperDestroyEditor(const KExtendableItemDelegate* self, QWidget* editor, const QModelIndex* index);
bool KExtendableItemDelegate_HelpEvent(KExtendableItemDelegate* self, QHelpEvent* event, QAbstractItemView* view, const QStyleOptionViewItem* option, const QModelIndex* index);
void KExtendableItemDelegate_OnHelpEvent(KExtendableItemDelegate* self, intptr_t slot);
bool KExtendableItemDelegate_SuperHelpEvent(KExtendableItemDelegate* self, QHelpEvent* event, QAbstractItemView* view, const QStyleOptionViewItem* option, const QModelIndex* index);
libqt_list /* of int */ KExtendableItemDelegate_PaintingRoles(const KExtendableItemDelegate* self);
void KExtendableItemDelegate_OnPaintingRoles(const KExtendableItemDelegate* self, intptr_t slot);
libqt_list /* of int */ KExtendableItemDelegate_SuperPaintingRoles(const KExtendableItemDelegate* self);
bool KExtendableItemDelegate_Event(KExtendableItemDelegate* self, QEvent* event);
void KExtendableItemDelegate_OnEvent(KExtendableItemDelegate* self, intptr_t slot);
bool KExtendableItemDelegate_SuperEvent(KExtendableItemDelegate* self, QEvent* event);
void KExtendableItemDelegate_TimerEvent(KExtendableItemDelegate* self, QTimerEvent* event);
void KExtendableItemDelegate_OnTimerEvent(KExtendableItemDelegate* self, intptr_t slot);
void KExtendableItemDelegate_SuperTimerEvent(KExtendableItemDelegate* self, QTimerEvent* event);
void KExtendableItemDelegate_ChildEvent(KExtendableItemDelegate* self, QChildEvent* event);
void KExtendableItemDelegate_OnChildEvent(KExtendableItemDelegate* self, intptr_t slot);
void KExtendableItemDelegate_SuperChildEvent(KExtendableItemDelegate* self, QChildEvent* event);
void KExtendableItemDelegate_CustomEvent(KExtendableItemDelegate* self, QEvent* event);
void KExtendableItemDelegate_OnCustomEvent(KExtendableItemDelegate* self, intptr_t slot);
void KExtendableItemDelegate_SuperCustomEvent(KExtendableItemDelegate* self, QEvent* event);
void KExtendableItemDelegate_ConnectNotify(KExtendableItemDelegate* self, const QMetaMethod* signal);
void KExtendableItemDelegate_OnConnectNotify(KExtendableItemDelegate* self, intptr_t slot);
void KExtendableItemDelegate_SuperConnectNotify(KExtendableItemDelegate* self, const QMetaMethod* signal);
void KExtendableItemDelegate_DisconnectNotify(KExtendableItemDelegate* self, const QMetaMethod* signal);
void KExtendableItemDelegate_OnDisconnectNotify(KExtendableItemDelegate* self, intptr_t slot);
void KExtendableItemDelegate_SuperDisconnectNotify(KExtendableItemDelegate* self, const QMetaMethod* signal);
QRect* KExtendableItemDelegate_ExtenderRect(const KExtendableItemDelegate* self, QWidget* extender, const QStyleOptionViewItem* option, const QModelIndex* index);
void KExtendableItemDelegate_OnExtenderRect(const KExtendableItemDelegate* self, intptr_t slot);
QRect* KExtendableItemDelegate_SuperExtenderRect(const KExtendableItemDelegate* self, QWidget* extender, const QStyleOptionViewItem* option, const QModelIndex* index);
void KExtendableItemDelegate_SetExtendPixmap(KExtendableItemDelegate* self, const QPixmap* pixmap);
void KExtendableItemDelegate_OnSetExtendPixmap(KExtendableItemDelegate* self, intptr_t slot);
void KExtendableItemDelegate_SuperSetExtendPixmap(KExtendableItemDelegate* self, const QPixmap* pixmap);
void KExtendableItemDelegate_SetContractPixmap(KExtendableItemDelegate* self, const QPixmap* pixmap);
void KExtendableItemDelegate_OnSetContractPixmap(KExtendableItemDelegate* self, intptr_t slot);
void KExtendableItemDelegate_SuperSetContractPixmap(KExtendableItemDelegate* self, const QPixmap* pixmap);
QPixmap* KExtendableItemDelegate_ExtendPixmap(KExtendableItemDelegate* self);
void KExtendableItemDelegate_OnExtendPixmap(KExtendableItemDelegate* self, intptr_t slot);
QPixmap* KExtendableItemDelegate_SuperExtendPixmap(KExtendableItemDelegate* self);
QPixmap* KExtendableItemDelegate_ContractPixmap(KExtendableItemDelegate* self);
void KExtendableItemDelegate_OnContractPixmap(KExtendableItemDelegate* self, intptr_t slot);
QPixmap* KExtendableItemDelegate_SuperContractPixmap(KExtendableItemDelegate* self);
QObject* KExtendableItemDelegate_Sender(const KExtendableItemDelegate* self);
void KExtendableItemDelegate_OnSender(const KExtendableItemDelegate* self, intptr_t slot);
QObject* KExtendableItemDelegate_SuperSender(const KExtendableItemDelegate* self);
int KExtendableItemDelegate_SenderSignalIndex(const KExtendableItemDelegate* self);
void KExtendableItemDelegate_OnSenderSignalIndex(const KExtendableItemDelegate* self, intptr_t slot);
int KExtendableItemDelegate_SuperSenderSignalIndex(const KExtendableItemDelegate* self);
int KExtendableItemDelegate_Receivers(const KExtendableItemDelegate* self, const char* signal);
void KExtendableItemDelegate_OnReceivers(const KExtendableItemDelegate* self, intptr_t slot);
int KExtendableItemDelegate_SuperReceivers(const KExtendableItemDelegate* self, const char* signal);
bool KExtendableItemDelegate_IsSignalConnected(const KExtendableItemDelegate* self, const QMetaMethod* signal);
void KExtendableItemDelegate_OnIsSignalConnected(const KExtendableItemDelegate* self, intptr_t slot);
bool KExtendableItemDelegate_SuperIsSignalConnected(const KExtendableItemDelegate* self, const QMetaMethod* signal);
void KExtendableItemDelegate_Delete(KExtendableItemDelegate* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
