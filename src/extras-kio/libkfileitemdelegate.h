#pragma once
#ifndef SRC_EXTRAS_KIOC_LIBKFILEITEMDELEGATE_H
#define SRC_EXTRAS_KIOC_LIBKFILEITEMDELEGATE_H

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
#else
typedef struct KFileItem KFileItem;
typedef struct KFileItemDelegate KFileItemDelegate;
typedef struct QAbstractItemDelegate QAbstractItemDelegate;
typedef struct QAbstractItemModel QAbstractItemModel;
typedef struct QAbstractItemView QAbstractItemView;
typedef struct QChildEvent QChildEvent;
typedef struct QColor QColor;
typedef struct QEvent QEvent;
typedef struct QHelpEvent QHelpEvent;
typedef struct QMetaMethod QMetaMethod;
typedef struct QMetaObject QMetaObject;
typedef struct QModelIndex QModelIndex;
typedef struct QObject QObject;
typedef struct QPainter QPainter;
typedef struct QPointF QPointF;
typedef struct QRect QRect;
typedef struct QRegion QRegion;
typedef struct QSize QSize;
typedef struct QStyleOptionViewItem QStyleOptionViewItem;
typedef struct QTimerEvent QTimerEvent;
typedef struct QWidget QWidget;
#endif

KFileItemDelegate* KFileItemDelegate_new();
KFileItemDelegate* KFileItemDelegate_new2(QObject* parent);
QMetaObject* KFileItemDelegate_MetaObject(const KFileItemDelegate* self);
void* KFileItemDelegate_Metacast(KFileItemDelegate* self, const char* param1);
int KFileItemDelegate_Metacall(KFileItemDelegate* self, int param1, int param2, void** param3);
libqt_string KFileItemDelegate_Tr(const char* s);
QSize* KFileItemDelegate_SizeHint(const KFileItemDelegate* self, const QStyleOptionViewItem* option, const QModelIndex* index);
void KFileItemDelegate_Paint(const KFileItemDelegate* self, QPainter* painter, const QStyleOptionViewItem* option, const QModelIndex* index);
QWidget* KFileItemDelegate_CreateEditor(const KFileItemDelegate* self, QWidget* parent, const QStyleOptionViewItem* option, const QModelIndex* index);
bool KFileItemDelegate_EditorEvent(KFileItemDelegate* self, QEvent* event, QAbstractItemModel* model, const QStyleOptionViewItem* option, const QModelIndex* index);
void KFileItemDelegate_SetEditorData(const KFileItemDelegate* self, QWidget* editor, const QModelIndex* index);
void KFileItemDelegate_SetModelData(const KFileItemDelegate* self, QWidget* editor, QAbstractItemModel* model, const QModelIndex* index);
void KFileItemDelegate_UpdateEditorGeometry(const KFileItemDelegate* self, QWidget* editor, const QStyleOptionViewItem* option, const QModelIndex* index);
void KFileItemDelegate_SetShowInformation(KFileItemDelegate* self, const libqt_list /* of int */ list);
void KFileItemDelegate_SetShowInformation2(KFileItemDelegate* self, int information);
libqt_list /* of int */ KFileItemDelegate_ShowInformation(const KFileItemDelegate* self);
void KFileItemDelegate_SetShadowColor(KFileItemDelegate* self, const QColor* color);
QColor* KFileItemDelegate_ShadowColor(const KFileItemDelegate* self);
void KFileItemDelegate_SetShadowOffset(KFileItemDelegate* self, const QPointF* offset);
QPointF* KFileItemDelegate_ShadowOffset(const KFileItemDelegate* self);
void KFileItemDelegate_SetShadowBlur(KFileItemDelegate* self, double radius);
double KFileItemDelegate_ShadowBlur(const KFileItemDelegate* self);
void KFileItemDelegate_SetMaximumSize(KFileItemDelegate* self, const QSize* size);
QSize* KFileItemDelegate_MaximumSize(const KFileItemDelegate* self);
void KFileItemDelegate_SetShowToolTipWhenElided(KFileItemDelegate* self, bool showToolTip);
bool KFileItemDelegate_ShowToolTipWhenElided(const KFileItemDelegate* self);
QRect* KFileItemDelegate_IconRect(const KFileItemDelegate* self, const QStyleOptionViewItem* option, const QModelIndex* index);
void KFileItemDelegate_SetWrapMode(KFileItemDelegate* self, int wrapMode);
int KFileItemDelegate_WrapMode(const KFileItemDelegate* self);
void KFileItemDelegate_SetJobTransfersVisible(KFileItemDelegate* self, bool jobTransfersVisible);
bool KFileItemDelegate_JobTransfersVisible(const KFileItemDelegate* self);
bool KFileItemDelegate_EventFilter(KFileItemDelegate* self, QObject* object, QEvent* event);
QRect* KFileItemDelegate_SelectionEmblemRect(const KFileItemDelegate* self);
void KFileItemDelegate_SetSelectionEmblemRect(KFileItemDelegate* self, QRect* rect, int iconSize);
KFileItem* KFileItemDelegate_FileItem(const KFileItemDelegate* self, const QModelIndex* index);
bool KFileItemDelegate_HelpEvent(KFileItemDelegate* self, QHelpEvent* event, QAbstractItemView* view, const QStyleOptionViewItem* option, const QModelIndex* index);
QRegion* KFileItemDelegate_Shape(KFileItemDelegate* self, const QStyleOptionViewItem* option, const QModelIndex* index);
libqt_string KFileItemDelegate_Tr2(const char* s, const char* c);
libqt_string KFileItemDelegate_Tr3(const char* s, const char* c, int n);
void KFileItemDelegate_OnMetacall(KFileItemDelegate* self, intptr_t slot);
int KFileItemDelegate_QBaseMetacall(KFileItemDelegate* self, int param1, int param2, void** param3);
void KFileItemDelegate_OnSizeHint(const KFileItemDelegate* self, intptr_t slot);
QSize* KFileItemDelegate_QBaseSizeHint(const KFileItemDelegate* self, const QStyleOptionViewItem* option, const QModelIndex* index);
void KFileItemDelegate_OnPaint(const KFileItemDelegate* self, intptr_t slot);
void KFileItemDelegate_QBasePaint(const KFileItemDelegate* self, QPainter* painter, const QStyleOptionViewItem* option, const QModelIndex* index);
void KFileItemDelegate_OnCreateEditor(const KFileItemDelegate* self, intptr_t slot);
QWidget* KFileItemDelegate_QBaseCreateEditor(const KFileItemDelegate* self, QWidget* parent, const QStyleOptionViewItem* option, const QModelIndex* index);
void KFileItemDelegate_OnEditorEvent(KFileItemDelegate* self, intptr_t slot);
bool KFileItemDelegate_QBaseEditorEvent(KFileItemDelegate* self, QEvent* event, QAbstractItemModel* model, const QStyleOptionViewItem* option, const QModelIndex* index);
void KFileItemDelegate_OnSetEditorData(const KFileItemDelegate* self, intptr_t slot);
void KFileItemDelegate_QBaseSetEditorData(const KFileItemDelegate* self, QWidget* editor, const QModelIndex* index);
void KFileItemDelegate_OnSetModelData(const KFileItemDelegate* self, intptr_t slot);
void KFileItemDelegate_QBaseSetModelData(const KFileItemDelegate* self, QWidget* editor, QAbstractItemModel* model, const QModelIndex* index);
void KFileItemDelegate_OnUpdateEditorGeometry(const KFileItemDelegate* self, intptr_t slot);
void KFileItemDelegate_QBaseUpdateEditorGeometry(const KFileItemDelegate* self, QWidget* editor, const QStyleOptionViewItem* option, const QModelIndex* index);
void KFileItemDelegate_OnEventFilter(KFileItemDelegate* self, intptr_t slot);
bool KFileItemDelegate_QBaseEventFilter(KFileItemDelegate* self, QObject* object, QEvent* event);
void KFileItemDelegate_OnHelpEvent(KFileItemDelegate* self, intptr_t slot);
bool KFileItemDelegate_QBaseHelpEvent(KFileItemDelegate* self, QHelpEvent* event, QAbstractItemView* view, const QStyleOptionViewItem* option, const QModelIndex* index);
void KFileItemDelegate_DestroyEditor(const KFileItemDelegate* self, QWidget* editor, const QModelIndex* index);
void KFileItemDelegate_OnDestroyEditor(const KFileItemDelegate* self, intptr_t slot);
void KFileItemDelegate_QBaseDestroyEditor(const KFileItemDelegate* self, QWidget* editor, const QModelIndex* index);
libqt_list /* of int */ KFileItemDelegate_PaintingRoles(const KFileItemDelegate* self);
void KFileItemDelegate_OnPaintingRoles(const KFileItemDelegate* self, intptr_t slot);
libqt_list /* of int */ KFileItemDelegate_QBasePaintingRoles(const KFileItemDelegate* self);
bool KFileItemDelegate_Event(KFileItemDelegate* self, QEvent* event);
void KFileItemDelegate_OnEvent(KFileItemDelegate* self, intptr_t slot);
bool KFileItemDelegate_QBaseEvent(KFileItemDelegate* self, QEvent* event);
void KFileItemDelegate_TimerEvent(KFileItemDelegate* self, QTimerEvent* event);
void KFileItemDelegate_OnTimerEvent(KFileItemDelegate* self, intptr_t slot);
void KFileItemDelegate_QBaseTimerEvent(KFileItemDelegate* self, QTimerEvent* event);
void KFileItemDelegate_ChildEvent(KFileItemDelegate* self, QChildEvent* event);
void KFileItemDelegate_OnChildEvent(KFileItemDelegate* self, intptr_t slot);
void KFileItemDelegate_QBaseChildEvent(KFileItemDelegate* self, QChildEvent* event);
void KFileItemDelegate_CustomEvent(KFileItemDelegate* self, QEvent* event);
void KFileItemDelegate_OnCustomEvent(KFileItemDelegate* self, intptr_t slot);
void KFileItemDelegate_QBaseCustomEvent(KFileItemDelegate* self, QEvent* event);
void KFileItemDelegate_ConnectNotify(KFileItemDelegate* self, const QMetaMethod* signal);
void KFileItemDelegate_OnConnectNotify(KFileItemDelegate* self, intptr_t slot);
void KFileItemDelegate_QBaseConnectNotify(KFileItemDelegate* self, const QMetaMethod* signal);
void KFileItemDelegate_DisconnectNotify(KFileItemDelegate* self, const QMetaMethod* signal);
void KFileItemDelegate_OnDisconnectNotify(KFileItemDelegate* self, intptr_t slot);
void KFileItemDelegate_QBaseDisconnectNotify(KFileItemDelegate* self, const QMetaMethod* signal);
QObject* KFileItemDelegate_Sender(const KFileItemDelegate* self);
void KFileItemDelegate_OnSender(const KFileItemDelegate* self, intptr_t slot);
QObject* KFileItemDelegate_QBaseSender(const KFileItemDelegate* self);
int KFileItemDelegate_SenderSignalIndex(const KFileItemDelegate* self);
void KFileItemDelegate_OnSenderSignalIndex(const KFileItemDelegate* self, intptr_t slot);
int KFileItemDelegate_QBaseSenderSignalIndex(const KFileItemDelegate* self);
int KFileItemDelegate_Receivers(const KFileItemDelegate* self, const char* signal);
void KFileItemDelegate_OnReceivers(const KFileItemDelegate* self, intptr_t slot);
int KFileItemDelegate_QBaseReceivers(const KFileItemDelegate* self, const char* signal);
bool KFileItemDelegate_IsSignalConnected(const KFileItemDelegate* self, const QMetaMethod* signal);
void KFileItemDelegate_OnIsSignalConnected(const KFileItemDelegate* self, intptr_t slot);
bool KFileItemDelegate_QBaseIsSignalConnected(const KFileItemDelegate* self, const QMetaMethod* signal);
void KFileItemDelegate_Delete(KFileItemDelegate* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
