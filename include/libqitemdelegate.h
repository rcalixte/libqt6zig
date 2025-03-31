#pragma once
#ifndef SRCC_LIBQITEMDELEGATE_H
#define SRCC_LIBQITEMDELEGATE_H

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
#else
typedef struct QAbstractItemDelegate QAbstractItemDelegate;
typedef struct QAbstractItemModel QAbstractItemModel;
typedef struct QAbstractItemView QAbstractItemView;
typedef struct QAnyStringView QAnyStringView;
typedef struct QBindingStorage QBindingStorage;
typedef struct QChildEvent QChildEvent;
typedef struct QEvent QEvent;
typedef struct QFont QFont;
typedef struct QHelpEvent QHelpEvent;
typedef struct QItemDelegate QItemDelegate;
typedef struct QItemEditorFactory QItemEditorFactory;
typedef struct QMetaMethod QMetaMethod;
typedef struct QMetaObject QMetaObject;
typedef struct QMetaObject__Connection QMetaObject__Connection;
typedef struct QModelIndex QModelIndex;
typedef struct QObject QObject;
typedef struct QPainter QPainter;
typedef struct QPixmap QPixmap;
typedef struct QRect QRect;
typedef struct QSize QSize;
typedef struct QStyleOptionViewItem QStyleOptionViewItem;
typedef struct QThread QThread;
typedef struct QTimerEvent QTimerEvent;
typedef struct QVariant QVariant;
typedef struct QWidget QWidget;
#endif

QItemDelegate* QItemDelegate_new();
QItemDelegate* QItemDelegate_new2(QObject* parent);
QMetaObject* QItemDelegate_MetaObject(const QItemDelegate* self);
void* QItemDelegate_Metacast(QItemDelegate* self, const char* param1);
int QItemDelegate_Metacall(QItemDelegate* self, int param1, int param2, void** param3);
void QItemDelegate_OnMetacall(QItemDelegate* self, intptr_t slot);
int QItemDelegate_QBaseMetacall(QItemDelegate* self, int param1, int param2, void** param3);
libqt_string QItemDelegate_Tr(const char* s);
bool QItemDelegate_HasClipping(const QItemDelegate* self);
void QItemDelegate_SetClipping(QItemDelegate* self, bool clip);
void QItemDelegate_Paint(const QItemDelegate* self, QPainter* painter, QStyleOptionViewItem* option, QModelIndex* index);
void QItemDelegate_OnPaint(const QItemDelegate* self, intptr_t slot);
void QItemDelegate_QBasePaint(const QItemDelegate* self, QPainter* painter, QStyleOptionViewItem* option, QModelIndex* index);
QSize* QItemDelegate_SizeHint(const QItemDelegate* self, QStyleOptionViewItem* option, QModelIndex* index);
void QItemDelegate_OnSizeHint(const QItemDelegate* self, intptr_t slot);
QSize* QItemDelegate_QBaseSizeHint(const QItemDelegate* self, QStyleOptionViewItem* option, QModelIndex* index);
QWidget* QItemDelegate_CreateEditor(const QItemDelegate* self, QWidget* parent, QStyleOptionViewItem* option, QModelIndex* index);
void QItemDelegate_OnCreateEditor(const QItemDelegate* self, intptr_t slot);
QWidget* QItemDelegate_QBaseCreateEditor(const QItemDelegate* self, QWidget* parent, QStyleOptionViewItem* option, QModelIndex* index);
void QItemDelegate_SetEditorData(const QItemDelegate* self, QWidget* editor, QModelIndex* index);
void QItemDelegate_OnSetEditorData(const QItemDelegate* self, intptr_t slot);
void QItemDelegate_QBaseSetEditorData(const QItemDelegate* self, QWidget* editor, QModelIndex* index);
void QItemDelegate_SetModelData(const QItemDelegate* self, QWidget* editor, QAbstractItemModel* model, QModelIndex* index);
void QItemDelegate_OnSetModelData(const QItemDelegate* self, intptr_t slot);
void QItemDelegate_QBaseSetModelData(const QItemDelegate* self, QWidget* editor, QAbstractItemModel* model, QModelIndex* index);
void QItemDelegate_UpdateEditorGeometry(const QItemDelegate* self, QWidget* editor, QStyleOptionViewItem* option, QModelIndex* index);
void QItemDelegate_OnUpdateEditorGeometry(const QItemDelegate* self, intptr_t slot);
void QItemDelegate_QBaseUpdateEditorGeometry(const QItemDelegate* self, QWidget* editor, QStyleOptionViewItem* option, QModelIndex* index);
QItemEditorFactory* QItemDelegate_ItemEditorFactory(const QItemDelegate* self);
void QItemDelegate_SetItemEditorFactory(QItemDelegate* self, QItemEditorFactory* factory);
void QItemDelegate_DrawDisplay(const QItemDelegate* self, QPainter* painter, QStyleOptionViewItem* option, QRect* rect, libqt_string text);
void QItemDelegate_OnDrawDisplay(const QItemDelegate* self, intptr_t slot);
void QItemDelegate_QBaseDrawDisplay(const QItemDelegate* self, QPainter* painter, QStyleOptionViewItem* option, QRect* rect, libqt_string text);
void QItemDelegate_DrawDecoration(const QItemDelegate* self, QPainter* painter, QStyleOptionViewItem* option, QRect* rect, QPixmap* pixmap);
void QItemDelegate_OnDrawDecoration(const QItemDelegate* self, intptr_t slot);
void QItemDelegate_QBaseDrawDecoration(const QItemDelegate* self, QPainter* painter, QStyleOptionViewItem* option, QRect* rect, QPixmap* pixmap);
void QItemDelegate_DrawFocus(const QItemDelegate* self, QPainter* painter, QStyleOptionViewItem* option, QRect* rect);
void QItemDelegate_OnDrawFocus(const QItemDelegate* self, intptr_t slot);
void QItemDelegate_QBaseDrawFocus(const QItemDelegate* self, QPainter* painter, QStyleOptionViewItem* option, QRect* rect);
void QItemDelegate_DrawCheck(const QItemDelegate* self, QPainter* painter, QStyleOptionViewItem* option, QRect* rect, int state);
void QItemDelegate_OnDrawCheck(const QItemDelegate* self, intptr_t slot);
void QItemDelegate_QBaseDrawCheck(const QItemDelegate* self, QPainter* painter, QStyleOptionViewItem* option, QRect* rect, int state);
bool QItemDelegate_EventFilter(QItemDelegate* self, QObject* object, QEvent* event);
void QItemDelegate_OnEventFilter(QItemDelegate* self, intptr_t slot);
bool QItemDelegate_QBaseEventFilter(QItemDelegate* self, QObject* object, QEvent* event);
bool QItemDelegate_EditorEvent(QItemDelegate* self, QEvent* event, QAbstractItemModel* model, QStyleOptionViewItem* option, QModelIndex* index);
void QItemDelegate_OnEditorEvent(QItemDelegate* self, intptr_t slot);
bool QItemDelegate_QBaseEditorEvent(QItemDelegate* self, QEvent* event, QAbstractItemModel* model, QStyleOptionViewItem* option, QModelIndex* index);
libqt_string QItemDelegate_Tr2(const char* s, const char* c);
libqt_string QItemDelegate_Tr3(const char* s, const char* c, int n);
void QItemDelegate_DestroyEditor(const QItemDelegate* self, QWidget* editor, QModelIndex* index);
void QItemDelegate_OnDestroyEditor(const QItemDelegate* self, intptr_t slot);
void QItemDelegate_QBaseDestroyEditor(const QItemDelegate* self, QWidget* editor, QModelIndex* index);
bool QItemDelegate_HelpEvent(QItemDelegate* self, QHelpEvent* event, QAbstractItemView* view, QStyleOptionViewItem* option, QModelIndex* index);
void QItemDelegate_OnHelpEvent(QItemDelegate* self, intptr_t slot);
bool QItemDelegate_QBaseHelpEvent(QItemDelegate* self, QHelpEvent* event, QAbstractItemView* view, QStyleOptionViewItem* option, QModelIndex* index);
libqt_list /* of int */ QItemDelegate_PaintingRoles(const QItemDelegate* self);
void QItemDelegate_OnPaintingRoles(const QItemDelegate* self, intptr_t slot);
libqt_list /* of int */ QItemDelegate_QBasePaintingRoles(const QItemDelegate* self);
bool QItemDelegate_Event(QItemDelegate* self, QEvent* event);
void QItemDelegate_OnEvent(QItemDelegate* self, intptr_t slot);
bool QItemDelegate_QBaseEvent(QItemDelegate* self, QEvent* event);
void QItemDelegate_TimerEvent(QItemDelegate* self, QTimerEvent* event);
void QItemDelegate_OnTimerEvent(QItemDelegate* self, intptr_t slot);
void QItemDelegate_QBaseTimerEvent(QItemDelegate* self, QTimerEvent* event);
void QItemDelegate_ChildEvent(QItemDelegate* self, QChildEvent* event);
void QItemDelegate_OnChildEvent(QItemDelegate* self, intptr_t slot);
void QItemDelegate_QBaseChildEvent(QItemDelegate* self, QChildEvent* event);
void QItemDelegate_CustomEvent(QItemDelegate* self, QEvent* event);
void QItemDelegate_OnCustomEvent(QItemDelegate* self, intptr_t slot);
void QItemDelegate_QBaseCustomEvent(QItemDelegate* self, QEvent* event);
void QItemDelegate_ConnectNotify(QItemDelegate* self, QMetaMethod* signal);
void QItemDelegate_OnConnectNotify(QItemDelegate* self, intptr_t slot);
void QItemDelegate_QBaseConnectNotify(QItemDelegate* self, QMetaMethod* signal);
void QItemDelegate_DisconnectNotify(QItemDelegate* self, QMetaMethod* signal);
void QItemDelegate_OnDisconnectNotify(QItemDelegate* self, intptr_t slot);
void QItemDelegate_QBaseDisconnectNotify(QItemDelegate* self, QMetaMethod* signal);
void QItemDelegate_DrawBackground(const QItemDelegate* self, QPainter* painter, QStyleOptionViewItem* option, QModelIndex* index);
void QItemDelegate_OnDrawBackground(const QItemDelegate* self, intptr_t slot);
void QItemDelegate_QBaseDrawBackground(const QItemDelegate* self, QPainter* painter, QStyleOptionViewItem* option, QModelIndex* index);
void QItemDelegate_DoLayout(const QItemDelegate* self, QStyleOptionViewItem* option, QRect* checkRect, QRect* iconRect, QRect* textRect, bool hint);
void QItemDelegate_OnDoLayout(const QItemDelegate* self, intptr_t slot);
void QItemDelegate_QBaseDoLayout(const QItemDelegate* self, QStyleOptionViewItem* option, QRect* checkRect, QRect* iconRect, QRect* textRect, bool hint);
QRect* QItemDelegate_Rect(const QItemDelegate* self, QStyleOptionViewItem* option, QModelIndex* index, int role);
void QItemDelegate_OnRect(const QItemDelegate* self, intptr_t slot);
QRect* QItemDelegate_QBaseRect(const QItemDelegate* self, QStyleOptionViewItem* option, QModelIndex* index, int role);
QStyleOptionViewItem* QItemDelegate_SetOptions(const QItemDelegate* self, QModelIndex* index, QStyleOptionViewItem* option);
void QItemDelegate_OnSetOptions(const QItemDelegate* self, intptr_t slot);
QStyleOptionViewItem* QItemDelegate_QBaseSetOptions(const QItemDelegate* self, QModelIndex* index, QStyleOptionViewItem* option);
QPixmap* QItemDelegate_Decoration(const QItemDelegate* self, QStyleOptionViewItem* option, QVariant* variant);
void QItemDelegate_OnDecoration(const QItemDelegate* self, intptr_t slot);
QPixmap* QItemDelegate_QBaseDecoration(const QItemDelegate* self, QStyleOptionViewItem* option, QVariant* variant);
QRect* QItemDelegate_DoCheck(const QItemDelegate* self, QStyleOptionViewItem* option, QRect* bounding, QVariant* variant);
void QItemDelegate_OnDoCheck(const QItemDelegate* self, intptr_t slot);
QRect* QItemDelegate_QBaseDoCheck(const QItemDelegate* self, QStyleOptionViewItem* option, QRect* bounding, QVariant* variant);
QRect* QItemDelegate_TextRectangle(const QItemDelegate* self, QPainter* painter, QRect* rect, QFont* font, libqt_string text);
void QItemDelegate_OnTextRectangle(const QItemDelegate* self, intptr_t slot);
QRect* QItemDelegate_QBaseTextRectangle(const QItemDelegate* self, QPainter* painter, QRect* rect, QFont* font, libqt_string text);
QObject* QItemDelegate_Sender(const QItemDelegate* self);
void QItemDelegate_OnSender(const QItemDelegate* self, intptr_t slot);
QObject* QItemDelegate_QBaseSender(const QItemDelegate* self);
int QItemDelegate_SenderSignalIndex(const QItemDelegate* self);
void QItemDelegate_OnSenderSignalIndex(const QItemDelegate* self, intptr_t slot);
int QItemDelegate_QBaseSenderSignalIndex(const QItemDelegate* self);
int QItemDelegate_Receivers(const QItemDelegate* self, const char* signal);
void QItemDelegate_OnReceivers(const QItemDelegate* self, intptr_t slot);
int QItemDelegate_QBaseReceivers(const QItemDelegate* self, const char* signal);
bool QItemDelegate_IsSignalConnected(const QItemDelegate* self, QMetaMethod* signal);
void QItemDelegate_OnIsSignalConnected(const QItemDelegate* self, intptr_t slot);
bool QItemDelegate_QBaseIsSignalConnected(const QItemDelegate* self, QMetaMethod* signal);
void QItemDelegate_Delete(QItemDelegate* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
