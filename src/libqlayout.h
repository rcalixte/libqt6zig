#pragma once
#ifndef SRCC_LIBQLAYOUT_H
#define SRCC_LIBQLAYOUT_H

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
#else
typedef struct QChildEvent QChildEvent;
typedef struct QEvent QEvent;
typedef struct QLayout QLayout;
typedef struct QLayoutItem QLayoutItem;
typedef struct QMargins QMargins;
typedef struct QMetaMethod QMetaMethod;
typedef struct QMetaObject QMetaObject;
typedef struct QObject QObject;
typedef struct QRect QRect;
typedef struct QSize QSize;
typedef struct QSpacerItem QSpacerItem;
typedef struct QTimerEvent QTimerEvent;
typedef struct QWidget QWidget;
#endif

QLayout* QLayout_new(QWidget* parent);
QLayout* QLayout_new2();
QMetaObject* QLayout_MetaObject(const QLayout* self);
void* QLayout_Metacast(QLayout* self, const char* param1);
int QLayout_Metacall(QLayout* self, int param1, int param2, void** param3);
int QLayout_Spacing(const QLayout* self);
void QLayout_SetSpacing(QLayout* self, int spacing);
void QLayout_SetContentsMargins(QLayout* self, int left, int top, int right, int bottom);
void QLayout_SetContentsMargins2(QLayout* self, const QMargins* margins);
void QLayout_UnsetContentsMargins(QLayout* self);
void QLayout_GetContentsMargins(const QLayout* self, int* left, int* top, int* right, int* bottom);
QMargins* QLayout_ContentsMargins(const QLayout* self);
QRect* QLayout_ContentsRect(const QLayout* self);
bool QLayout_SetAlignment(QLayout* self, QWidget* w, int alignment);
bool QLayout_SetAlignment2(QLayout* self, QLayout* l, int alignment);
void QLayout_SetSizeConstraint(QLayout* self, int sizeConstraint);
int QLayout_SizeConstraint(const QLayout* self);
void QLayout_SetMenuBar(QLayout* self, QWidget* w);
QWidget* QLayout_MenuBar(const QLayout* self);
QWidget* QLayout_ParentWidget(const QLayout* self);
void QLayout_Invalidate(QLayout* self);
QRect* QLayout_Geometry(const QLayout* self);
bool QLayout_Activate(QLayout* self);
void QLayout_Update(QLayout* self);
void QLayout_AddWidget(QLayout* self, QWidget* w);
void QLayout_AddItem(QLayout* self, QLayoutItem* param1);
void QLayout_RemoveWidget(QLayout* self, QWidget* w);
void QLayout_RemoveItem(QLayout* self, QLayoutItem* param1);
int QLayout_ExpandingDirections(const QLayout* self);
QSize* QLayout_MinimumSize(const QLayout* self);
QSize* QLayout_MaximumSize(const QLayout* self);
void QLayout_SetGeometry(QLayout* self, const QRect* geometry);
QLayoutItem* QLayout_ItemAt(const QLayout* self, int index);
QLayoutItem* QLayout_TakeAt(QLayout* self, int index);
int QLayout_IndexOf(const QLayout* self, const QWidget* param1);
int QLayout_IndexOf2(const QLayout* self, const QLayoutItem* param1);
int QLayout_Count(const QLayout* self);
bool QLayout_IsEmpty(const QLayout* self);
int QLayout_ControlTypes(const QLayout* self);
QLayoutItem* QLayout_ReplaceWidget(QLayout* self, QWidget* from, QWidget* to, int options);
int QLayout_TotalMinimumHeightForWidth(const QLayout* self, int w);
int QLayout_TotalHeightForWidth(const QLayout* self, int w);
QSize* QLayout_TotalMinimumSize(const QLayout* self);
QSize* QLayout_TotalMaximumSize(const QLayout* self);
QSize* QLayout_TotalSizeHint(const QLayout* self);
QLayout* QLayout_Layout(QLayout* self);
void QLayout_SetEnabled(QLayout* self, bool enabled);
bool QLayout_IsEnabled(const QLayout* self);
QSize* QLayout_ClosestAcceptableSize(const QWidget* w, const QSize* s);
void QLayout_ChildEvent(QLayout* self, QChildEvent* e);
void QLayout_OnMetaObject(const QLayout* self, intptr_t slot);
QMetaObject* QLayout_SuperMetaObject(const QLayout* self);
void QLayout_OnMetacast(QLayout* self, intptr_t slot);
void* QLayout_SuperMetacast(QLayout* self, const char* param1);
void QLayout_OnMetacall(QLayout* self, intptr_t slot);
int QLayout_SuperMetacall(QLayout* self, int param1, int param2, void** param3);
void QLayout_OnSpacing(const QLayout* self, intptr_t slot);
int QLayout_SuperSpacing(const QLayout* self);
void QLayout_OnSetSpacing(QLayout* self, intptr_t slot);
void QLayout_SuperSetSpacing(QLayout* self, int spacing);
void QLayout_OnInvalidate(QLayout* self, intptr_t slot);
void QLayout_SuperInvalidate(QLayout* self);
void QLayout_OnGeometry(const QLayout* self, intptr_t slot);
QRect* QLayout_SuperGeometry(const QLayout* self);
void QLayout_OnAddItem(QLayout* self, intptr_t slot);
void QLayout_SuperAddItem(QLayout* self, QLayoutItem* param1);
void QLayout_OnExpandingDirections(const QLayout* self, intptr_t slot);
int QLayout_SuperExpandingDirections(const QLayout* self);
void QLayout_OnMinimumSize(const QLayout* self, intptr_t slot);
QSize* QLayout_SuperMinimumSize(const QLayout* self);
void QLayout_OnMaximumSize(const QLayout* self, intptr_t slot);
QSize* QLayout_SuperMaximumSize(const QLayout* self);
void QLayout_OnSetGeometry(QLayout* self, intptr_t slot);
void QLayout_SuperSetGeometry(QLayout* self, const QRect* geometry);
void QLayout_OnItemAt(const QLayout* self, intptr_t slot);
QLayoutItem* QLayout_SuperItemAt(const QLayout* self, int index);
void QLayout_OnTakeAt(QLayout* self, intptr_t slot);
QLayoutItem* QLayout_SuperTakeAt(QLayout* self, int index);
void QLayout_OnIndexOf(const QLayout* self, intptr_t slot);
int QLayout_SuperIndexOf(const QLayout* self, const QWidget* param1);
void QLayout_OnIndexOf2(const QLayout* self, intptr_t slot);
int QLayout_SuperIndexOf2(const QLayout* self, const QLayoutItem* param1);
void QLayout_OnCount(const QLayout* self, intptr_t slot);
int QLayout_SuperCount(const QLayout* self);
void QLayout_OnIsEmpty(const QLayout* self, intptr_t slot);
bool QLayout_SuperIsEmpty(const QLayout* self);
void QLayout_OnControlTypes(const QLayout* self, intptr_t slot);
int QLayout_SuperControlTypes(const QLayout* self);
void QLayout_OnReplaceWidget(QLayout* self, intptr_t slot);
QLayoutItem* QLayout_SuperReplaceWidget(QLayout* self, QWidget* from, QWidget* to, int options);
void QLayout_OnLayout(QLayout* self, intptr_t slot);
QLayout* QLayout_SuperLayout(QLayout* self);
void QLayout_OnChildEvent(QLayout* self, intptr_t slot);
void QLayout_SuperChildEvent(QLayout* self, QChildEvent* e);
bool QLayout_Event(QLayout* self, QEvent* event);
void QLayout_OnEvent(QLayout* self, intptr_t slot);
bool QLayout_SuperEvent(QLayout* self, QEvent* event);
bool QLayout_EventFilter(QLayout* self, QObject* watched, QEvent* event);
void QLayout_OnEventFilter(QLayout* self, intptr_t slot);
bool QLayout_SuperEventFilter(QLayout* self, QObject* watched, QEvent* event);
void QLayout_TimerEvent(QLayout* self, QTimerEvent* event);
void QLayout_OnTimerEvent(QLayout* self, intptr_t slot);
void QLayout_SuperTimerEvent(QLayout* self, QTimerEvent* event);
void QLayout_CustomEvent(QLayout* self, QEvent* event);
void QLayout_OnCustomEvent(QLayout* self, intptr_t slot);
void QLayout_SuperCustomEvent(QLayout* self, QEvent* event);
void QLayout_ConnectNotify(QLayout* self, const QMetaMethod* signal);
void QLayout_OnConnectNotify(QLayout* self, intptr_t slot);
void QLayout_SuperConnectNotify(QLayout* self, const QMetaMethod* signal);
void QLayout_DisconnectNotify(QLayout* self, const QMetaMethod* signal);
void QLayout_OnDisconnectNotify(QLayout* self, intptr_t slot);
void QLayout_SuperDisconnectNotify(QLayout* self, const QMetaMethod* signal);
QSize* QLayout_SizeHint(const QLayout* self);
void QLayout_OnSizeHint(const QLayout* self, intptr_t slot);
QSize* QLayout_SuperSizeHint(const QLayout* self);
bool QLayout_HasHeightForWidth(const QLayout* self);
void QLayout_OnHasHeightForWidth(const QLayout* self, intptr_t slot);
bool QLayout_SuperHasHeightForWidth(const QLayout* self);
int QLayout_HeightForWidth(const QLayout* self, int param1);
void QLayout_OnHeightForWidth(const QLayout* self, intptr_t slot);
int QLayout_SuperHeightForWidth(const QLayout* self, int param1);
int QLayout_MinimumHeightForWidth(const QLayout* self, int param1);
void QLayout_OnMinimumHeightForWidth(const QLayout* self, intptr_t slot);
int QLayout_SuperMinimumHeightForWidth(const QLayout* self, int param1);
QWidget* QLayout_Widget(const QLayout* self);
void QLayout_OnWidget(const QLayout* self, intptr_t slot);
QWidget* QLayout_SuperWidget(const QLayout* self);
QSpacerItem* QLayout_SpacerItem(QLayout* self);
void QLayout_OnSpacerItem(QLayout* self, intptr_t slot);
QSpacerItem* QLayout_SuperSpacerItem(QLayout* self);
void QLayout_WidgetEvent(QLayout* self, QEvent* param1);
void QLayout_OnWidgetEvent(QLayout* self, intptr_t slot);
void QLayout_SuperWidgetEvent(QLayout* self, QEvent* param1);
void QLayout_AddChildLayout(QLayout* self, QLayout* l);
void QLayout_OnAddChildLayout(QLayout* self, intptr_t slot);
void QLayout_SuperAddChildLayout(QLayout* self, QLayout* l);
void QLayout_AddChildWidget(QLayout* self, QWidget* w);
void QLayout_OnAddChildWidget(QLayout* self, intptr_t slot);
void QLayout_SuperAddChildWidget(QLayout* self, QWidget* w);
bool QLayout_AdoptLayout(QLayout* self, QLayout* layout);
void QLayout_OnAdoptLayout(QLayout* self, intptr_t slot);
bool QLayout_SuperAdoptLayout(QLayout* self, QLayout* layout);
QRect* QLayout_AlignmentRect(const QLayout* self, const QRect* param1);
void QLayout_OnAlignmentRect(const QLayout* self, intptr_t slot);
QRect* QLayout_SuperAlignmentRect(const QLayout* self, const QRect* param1);
QObject* QLayout_Sender(const QLayout* self);
void QLayout_OnSender(const QLayout* self, intptr_t slot);
QObject* QLayout_SuperSender(const QLayout* self);
int QLayout_SenderSignalIndex(const QLayout* self);
void QLayout_OnSenderSignalIndex(const QLayout* self, intptr_t slot);
int QLayout_SuperSenderSignalIndex(const QLayout* self);
int QLayout_Receivers(const QLayout* self, const char* signal);
void QLayout_OnReceivers(const QLayout* self, intptr_t slot);
int QLayout_SuperReceivers(const QLayout* self, const char* signal);
bool QLayout_IsSignalConnected(const QLayout* self, const QMetaMethod* signal);
void QLayout_OnIsSignalConnected(const QLayout* self, intptr_t slot);
bool QLayout_SuperIsSignalConnected(const QLayout* self, const QMetaMethod* signal);
void QLayout_Delete(QLayout* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
