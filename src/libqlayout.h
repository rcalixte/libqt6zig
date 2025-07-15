#pragma once
#ifndef SRCC_LIBQLAYOUT_H
#define SRCC_LIBQLAYOUT_H

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
void QLayout_OnMetacall(QLayout* self, intptr_t slot);
int QLayout_QBaseMetacall(QLayout* self, int param1, int param2, void** param3);
libqt_string QLayout_Tr(const char* s);
int QLayout_Spacing(const QLayout* self);
void QLayout_OnSpacing(const QLayout* self, intptr_t slot);
int QLayout_QBaseSpacing(const QLayout* self);
void QLayout_SetSpacing(QLayout* self, int spacing);
void QLayout_OnSetSpacing(QLayout* self, intptr_t slot);
void QLayout_QBaseSetSpacing(QLayout* self, int spacing);
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
void QLayout_OnInvalidate(QLayout* self, intptr_t slot);
void QLayout_QBaseInvalidate(QLayout* self);
QRect* QLayout_Geometry(const QLayout* self);
void QLayout_OnGeometry(const QLayout* self, intptr_t slot);
QRect* QLayout_QBaseGeometry(const QLayout* self);
bool QLayout_Activate(QLayout* self);
void QLayout_Update(QLayout* self);
void QLayout_AddWidget(QLayout* self, QWidget* w);
void QLayout_AddItem(QLayout* self, QLayoutItem* param1);
void QLayout_OnAddItem(QLayout* self, intptr_t slot);
void QLayout_QBaseAddItem(QLayout* self, QLayoutItem* param1);
void QLayout_RemoveWidget(QLayout* self, QWidget* w);
void QLayout_RemoveItem(QLayout* self, QLayoutItem* param1);
int QLayout_ExpandingDirections(const QLayout* self);
void QLayout_OnExpandingDirections(const QLayout* self, intptr_t slot);
int QLayout_QBaseExpandingDirections(const QLayout* self);
QSize* QLayout_MinimumSize(const QLayout* self);
void QLayout_OnMinimumSize(const QLayout* self, intptr_t slot);
QSize* QLayout_QBaseMinimumSize(const QLayout* self);
QSize* QLayout_MaximumSize(const QLayout* self);
void QLayout_OnMaximumSize(const QLayout* self, intptr_t slot);
QSize* QLayout_QBaseMaximumSize(const QLayout* self);
void QLayout_SetGeometry(QLayout* self, const QRect* geometry);
void QLayout_OnSetGeometry(QLayout* self, intptr_t slot);
void QLayout_QBaseSetGeometry(QLayout* self, const QRect* geometry);
QLayoutItem* QLayout_ItemAt(const QLayout* self, int index);
void QLayout_OnItemAt(const QLayout* self, intptr_t slot);
QLayoutItem* QLayout_QBaseItemAt(const QLayout* self, int index);
QLayoutItem* QLayout_TakeAt(QLayout* self, int index);
void QLayout_OnTakeAt(QLayout* self, intptr_t slot);
QLayoutItem* QLayout_QBaseTakeAt(QLayout* self, int index);
int QLayout_IndexOf(const QLayout* self, const QWidget* param1);
void QLayout_OnIndexOf(const QLayout* self, intptr_t slot);
int QLayout_QBaseIndexOf(const QLayout* self, const QWidget* param1);
int QLayout_IndexOf2(const QLayout* self, const QLayoutItem* param1);
void QLayout_OnIndexOf2(const QLayout* self, intptr_t slot);
int QLayout_QBaseIndexOf2(const QLayout* self, const QLayoutItem* param1);
int QLayout_Count(const QLayout* self);
void QLayout_OnCount(const QLayout* self, intptr_t slot);
int QLayout_QBaseCount(const QLayout* self);
bool QLayout_IsEmpty(const QLayout* self);
void QLayout_OnIsEmpty(const QLayout* self, intptr_t slot);
bool QLayout_QBaseIsEmpty(const QLayout* self);
int QLayout_ControlTypes(const QLayout* self);
void QLayout_OnControlTypes(const QLayout* self, intptr_t slot);
int QLayout_QBaseControlTypes(const QLayout* self);
QLayoutItem* QLayout_ReplaceWidget(QLayout* self, QWidget* from, QWidget* to, int options);
void QLayout_OnReplaceWidget(QLayout* self, intptr_t slot);
QLayoutItem* QLayout_QBaseReplaceWidget(QLayout* self, QWidget* from, QWidget* to, int options);
int QLayout_TotalMinimumHeightForWidth(const QLayout* self, int w);
int QLayout_TotalHeightForWidth(const QLayout* self, int w);
QSize* QLayout_TotalMinimumSize(const QLayout* self);
QSize* QLayout_TotalMaximumSize(const QLayout* self);
QSize* QLayout_TotalSizeHint(const QLayout* self);
QLayout* QLayout_Layout(QLayout* self);
void QLayout_OnLayout(QLayout* self, intptr_t slot);
QLayout* QLayout_QBaseLayout(QLayout* self);
void QLayout_SetEnabled(QLayout* self, bool enabled);
bool QLayout_IsEnabled(const QLayout* self);
QSize* QLayout_ClosestAcceptableSize(const QWidget* w, const QSize* s);
void QLayout_ChildEvent(QLayout* self, QChildEvent* e);
void QLayout_OnChildEvent(QLayout* self, intptr_t slot);
void QLayout_QBaseChildEvent(QLayout* self, QChildEvent* e);
libqt_string QLayout_Tr2(const char* s, const char* c);
libqt_string QLayout_Tr3(const char* s, const char* c, int n);
bool QLayout_Event(QLayout* self, QEvent* event);
void QLayout_OnEvent(QLayout* self, intptr_t slot);
bool QLayout_QBaseEvent(QLayout* self, QEvent* event);
bool QLayout_EventFilter(QLayout* self, QObject* watched, QEvent* event);
void QLayout_OnEventFilter(QLayout* self, intptr_t slot);
bool QLayout_QBaseEventFilter(QLayout* self, QObject* watched, QEvent* event);
void QLayout_TimerEvent(QLayout* self, QTimerEvent* event);
void QLayout_OnTimerEvent(QLayout* self, intptr_t slot);
void QLayout_QBaseTimerEvent(QLayout* self, QTimerEvent* event);
void QLayout_CustomEvent(QLayout* self, QEvent* event);
void QLayout_OnCustomEvent(QLayout* self, intptr_t slot);
void QLayout_QBaseCustomEvent(QLayout* self, QEvent* event);
void QLayout_ConnectNotify(QLayout* self, const QMetaMethod* signal);
void QLayout_OnConnectNotify(QLayout* self, intptr_t slot);
void QLayout_QBaseConnectNotify(QLayout* self, const QMetaMethod* signal);
void QLayout_DisconnectNotify(QLayout* self, const QMetaMethod* signal);
void QLayout_OnDisconnectNotify(QLayout* self, intptr_t slot);
void QLayout_QBaseDisconnectNotify(QLayout* self, const QMetaMethod* signal);
QSize* QLayout_SizeHint(const QLayout* self);
void QLayout_OnSizeHint(const QLayout* self, intptr_t slot);
QSize* QLayout_QBaseSizeHint(const QLayout* self);
bool QLayout_HasHeightForWidth(const QLayout* self);
void QLayout_OnHasHeightForWidth(const QLayout* self, intptr_t slot);
bool QLayout_QBaseHasHeightForWidth(const QLayout* self);
int QLayout_HeightForWidth(const QLayout* self, int param1);
void QLayout_OnHeightForWidth(const QLayout* self, intptr_t slot);
int QLayout_QBaseHeightForWidth(const QLayout* self, int param1);
int QLayout_MinimumHeightForWidth(const QLayout* self, int param1);
void QLayout_OnMinimumHeightForWidth(const QLayout* self, intptr_t slot);
int QLayout_QBaseMinimumHeightForWidth(const QLayout* self, int param1);
QWidget* QLayout_Widget(const QLayout* self);
void QLayout_OnWidget(const QLayout* self, intptr_t slot);
QWidget* QLayout_QBaseWidget(const QLayout* self);
QSpacerItem* QLayout_SpacerItem(QLayout* self);
void QLayout_OnSpacerItem(QLayout* self, intptr_t slot);
QSpacerItem* QLayout_QBaseSpacerItem(QLayout* self);
void QLayout_WidgetEvent(QLayout* self, QEvent* param1);
void QLayout_OnWidgetEvent(QLayout* self, intptr_t slot);
void QLayout_QBaseWidgetEvent(QLayout* self, QEvent* param1);
void QLayout_AddChildLayout(QLayout* self, QLayout* l);
void QLayout_OnAddChildLayout(QLayout* self, intptr_t slot);
void QLayout_QBaseAddChildLayout(QLayout* self, QLayout* l);
void QLayout_AddChildWidget(QLayout* self, QWidget* w);
void QLayout_OnAddChildWidget(QLayout* self, intptr_t slot);
void QLayout_QBaseAddChildWidget(QLayout* self, QWidget* w);
bool QLayout_AdoptLayout(QLayout* self, QLayout* layout);
void QLayout_OnAdoptLayout(QLayout* self, intptr_t slot);
bool QLayout_QBaseAdoptLayout(QLayout* self, QLayout* layout);
QRect* QLayout_AlignmentRect(const QLayout* self, const QRect* param1);
void QLayout_OnAlignmentRect(const QLayout* self, intptr_t slot);
QRect* QLayout_QBaseAlignmentRect(const QLayout* self, const QRect* param1);
QObject* QLayout_Sender(const QLayout* self);
void QLayout_OnSender(const QLayout* self, intptr_t slot);
QObject* QLayout_QBaseSender(const QLayout* self);
int QLayout_SenderSignalIndex(const QLayout* self);
void QLayout_OnSenderSignalIndex(const QLayout* self, intptr_t slot);
int QLayout_QBaseSenderSignalIndex(const QLayout* self);
int QLayout_Receivers(const QLayout* self, const char* signal);
void QLayout_OnReceivers(const QLayout* self, intptr_t slot);
int QLayout_QBaseReceivers(const QLayout* self, const char* signal);
bool QLayout_IsSignalConnected(const QLayout* self, const QMetaMethod* signal);
void QLayout_OnIsSignalConnected(const QLayout* self, intptr_t slot);
bool QLayout_QBaseIsSignalConnected(const QLayout* self, const QMetaMethod* signal);
void QLayout_Delete(QLayout* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
