#pragma once
#ifndef SRCC_LIBQSTACKEDLAYOUT_H
#define SRCC_LIBQSTACKEDLAYOUT_H

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
typedef struct QMetaMethod QMetaMethod;
typedef struct QMetaObject QMetaObject;
typedef struct QObject QObject;
typedef struct QRect QRect;
typedef struct QSize QSize;
typedef struct QSpacerItem QSpacerItem;
typedef struct QStackedLayout QStackedLayout;
typedef struct QTimerEvent QTimerEvent;
typedef struct QWidget QWidget;
#endif

QStackedLayout* QStackedLayout_new(QWidget* parent);
QStackedLayout* QStackedLayout_new2();
QStackedLayout* QStackedLayout_new3(QLayout* parentLayout);
QMetaObject* QStackedLayout_MetaObject(const QStackedLayout* self);
void* QStackedLayout_Metacast(QStackedLayout* self, const char* param1);
int QStackedLayout_Metacall(QStackedLayout* self, int param1, int param2, void** param3);
void QStackedLayout_OnMetacall(QStackedLayout* self, intptr_t slot);
int QStackedLayout_QBaseMetacall(QStackedLayout* self, int param1, int param2, void** param3);
libqt_string QStackedLayout_Tr(const char* s);
int QStackedLayout_AddWidget(QStackedLayout* self, QWidget* w);
int QStackedLayout_InsertWidget(QStackedLayout* self, int index, QWidget* w);
QWidget* QStackedLayout_CurrentWidget(const QStackedLayout* self);
int QStackedLayout_CurrentIndex(const QStackedLayout* self);
QWidget* QStackedLayout_Widget(const QStackedLayout* self, int param1);
int QStackedLayout_Count(const QStackedLayout* self);
void QStackedLayout_OnCount(const QStackedLayout* self, intptr_t slot);
int QStackedLayout_QBaseCount(const QStackedLayout* self);
int QStackedLayout_StackingMode(const QStackedLayout* self);
void QStackedLayout_SetStackingMode(QStackedLayout* self, int stackingMode);
void QStackedLayout_AddItem(QStackedLayout* self, QLayoutItem* item);
void QStackedLayout_OnAddItem(QStackedLayout* self, intptr_t slot);
void QStackedLayout_QBaseAddItem(QStackedLayout* self, QLayoutItem* item);
QSize* QStackedLayout_SizeHint(const QStackedLayout* self);
void QStackedLayout_OnSizeHint(const QStackedLayout* self, intptr_t slot);
QSize* QStackedLayout_QBaseSizeHint(const QStackedLayout* self);
QSize* QStackedLayout_MinimumSize(const QStackedLayout* self);
void QStackedLayout_OnMinimumSize(const QStackedLayout* self, intptr_t slot);
QSize* QStackedLayout_QBaseMinimumSize(const QStackedLayout* self);
QLayoutItem* QStackedLayout_ItemAt(const QStackedLayout* self, int param1);
void QStackedLayout_OnItemAt(const QStackedLayout* self, intptr_t slot);
QLayoutItem* QStackedLayout_QBaseItemAt(const QStackedLayout* self, int param1);
QLayoutItem* QStackedLayout_TakeAt(QStackedLayout* self, int param1);
void QStackedLayout_OnTakeAt(QStackedLayout* self, intptr_t slot);
QLayoutItem* QStackedLayout_QBaseTakeAt(QStackedLayout* self, int param1);
void QStackedLayout_SetGeometry(QStackedLayout* self, const QRect* rect);
void QStackedLayout_OnSetGeometry(QStackedLayout* self, intptr_t slot);
void QStackedLayout_QBaseSetGeometry(QStackedLayout* self, const QRect* rect);
bool QStackedLayout_HasHeightForWidth(const QStackedLayout* self);
void QStackedLayout_OnHasHeightForWidth(const QStackedLayout* self, intptr_t slot);
bool QStackedLayout_QBaseHasHeightForWidth(const QStackedLayout* self);
int QStackedLayout_HeightForWidth(const QStackedLayout* self, int width);
void QStackedLayout_OnHeightForWidth(const QStackedLayout* self, intptr_t slot);
int QStackedLayout_QBaseHeightForWidth(const QStackedLayout* self, int width);
void QStackedLayout_WidgetRemoved(QStackedLayout* self, int index);
void QStackedLayout_Connect_WidgetRemoved(QStackedLayout* self, intptr_t slot);
void QStackedLayout_CurrentChanged(QStackedLayout* self, int index);
void QStackedLayout_Connect_CurrentChanged(QStackedLayout* self, intptr_t slot);
void QStackedLayout_SetCurrentIndex(QStackedLayout* self, int index);
void QStackedLayout_SetCurrentWidget(QStackedLayout* self, QWidget* w);
libqt_string QStackedLayout_Tr2(const char* s, const char* c);
libqt_string QStackedLayout_Tr3(const char* s, const char* c, int n);
int QStackedLayout_Spacing(const QStackedLayout* self);
void QStackedLayout_OnSpacing(const QStackedLayout* self, intptr_t slot);
int QStackedLayout_QBaseSpacing(const QStackedLayout* self);
void QStackedLayout_SetSpacing(QStackedLayout* self, int spacing);
void QStackedLayout_OnSetSpacing(QStackedLayout* self, intptr_t slot);
void QStackedLayout_QBaseSetSpacing(QStackedLayout* self, int spacing);
void QStackedLayout_Invalidate(QStackedLayout* self);
void QStackedLayout_OnInvalidate(QStackedLayout* self, intptr_t slot);
void QStackedLayout_QBaseInvalidate(QStackedLayout* self);
QRect* QStackedLayout_Geometry(const QStackedLayout* self);
void QStackedLayout_OnGeometry(const QStackedLayout* self, intptr_t slot);
QRect* QStackedLayout_QBaseGeometry(const QStackedLayout* self);
int QStackedLayout_ExpandingDirections(const QStackedLayout* self);
void QStackedLayout_OnExpandingDirections(const QStackedLayout* self, intptr_t slot);
int QStackedLayout_QBaseExpandingDirections(const QStackedLayout* self);
QSize* QStackedLayout_MaximumSize(const QStackedLayout* self);
void QStackedLayout_OnMaximumSize(const QStackedLayout* self, intptr_t slot);
QSize* QStackedLayout_QBaseMaximumSize(const QStackedLayout* self);
int QStackedLayout_IndexOf(const QStackedLayout* self, const QWidget* param1);
void QStackedLayout_OnIndexOf(const QStackedLayout* self, intptr_t slot);
int QStackedLayout_QBaseIndexOf(const QStackedLayout* self, const QWidget* param1);
bool QStackedLayout_IsEmpty(const QStackedLayout* self);
void QStackedLayout_OnIsEmpty(const QStackedLayout* self, intptr_t slot);
bool QStackedLayout_QBaseIsEmpty(const QStackedLayout* self);
int QStackedLayout_ControlTypes(const QStackedLayout* self);
void QStackedLayout_OnControlTypes(const QStackedLayout* self, intptr_t slot);
int QStackedLayout_QBaseControlTypes(const QStackedLayout* self);
QLayoutItem* QStackedLayout_ReplaceWidget(QStackedLayout* self, QWidget* from, QWidget* to, int options);
void QStackedLayout_OnReplaceWidget(QStackedLayout* self, intptr_t slot);
QLayoutItem* QStackedLayout_QBaseReplaceWidget(QStackedLayout* self, QWidget* from, QWidget* to, int options);
QLayout* QStackedLayout_Layout(QStackedLayout* self);
void QStackedLayout_OnLayout(QStackedLayout* self, intptr_t slot);
QLayout* QStackedLayout_QBaseLayout(QStackedLayout* self);
void QStackedLayout_ChildEvent(QStackedLayout* self, QChildEvent* e);
void QStackedLayout_OnChildEvent(QStackedLayout* self, intptr_t slot);
void QStackedLayout_QBaseChildEvent(QStackedLayout* self, QChildEvent* e);
bool QStackedLayout_Event(QStackedLayout* self, QEvent* event);
void QStackedLayout_OnEvent(QStackedLayout* self, intptr_t slot);
bool QStackedLayout_QBaseEvent(QStackedLayout* self, QEvent* event);
bool QStackedLayout_EventFilter(QStackedLayout* self, QObject* watched, QEvent* event);
void QStackedLayout_OnEventFilter(QStackedLayout* self, intptr_t slot);
bool QStackedLayout_QBaseEventFilter(QStackedLayout* self, QObject* watched, QEvent* event);
void QStackedLayout_TimerEvent(QStackedLayout* self, QTimerEvent* event);
void QStackedLayout_OnTimerEvent(QStackedLayout* self, intptr_t slot);
void QStackedLayout_QBaseTimerEvent(QStackedLayout* self, QTimerEvent* event);
void QStackedLayout_CustomEvent(QStackedLayout* self, QEvent* event);
void QStackedLayout_OnCustomEvent(QStackedLayout* self, intptr_t slot);
void QStackedLayout_QBaseCustomEvent(QStackedLayout* self, QEvent* event);
void QStackedLayout_ConnectNotify(QStackedLayout* self, const QMetaMethod* signal);
void QStackedLayout_OnConnectNotify(QStackedLayout* self, intptr_t slot);
void QStackedLayout_QBaseConnectNotify(QStackedLayout* self, const QMetaMethod* signal);
void QStackedLayout_DisconnectNotify(QStackedLayout* self, const QMetaMethod* signal);
void QStackedLayout_OnDisconnectNotify(QStackedLayout* self, intptr_t slot);
void QStackedLayout_QBaseDisconnectNotify(QStackedLayout* self, const QMetaMethod* signal);
int QStackedLayout_MinimumHeightForWidth(const QStackedLayout* self, int param1);
void QStackedLayout_OnMinimumHeightForWidth(const QStackedLayout* self, intptr_t slot);
int QStackedLayout_QBaseMinimumHeightForWidth(const QStackedLayout* self, int param1);
QSpacerItem* QStackedLayout_SpacerItem(QStackedLayout* self);
void QStackedLayout_OnSpacerItem(QStackedLayout* self, intptr_t slot);
QSpacerItem* QStackedLayout_QBaseSpacerItem(QStackedLayout* self);
void QStackedLayout_WidgetEvent(QStackedLayout* self, QEvent* param1);
void QStackedLayout_OnWidgetEvent(QStackedLayout* self, intptr_t slot);
void QStackedLayout_QBaseWidgetEvent(QStackedLayout* self, QEvent* param1);
void QStackedLayout_AddChildLayout(QStackedLayout* self, QLayout* l);
void QStackedLayout_OnAddChildLayout(QStackedLayout* self, intptr_t slot);
void QStackedLayout_QBaseAddChildLayout(QStackedLayout* self, QLayout* l);
void QStackedLayout_AddChildWidget(QStackedLayout* self, QWidget* w);
void QStackedLayout_OnAddChildWidget(QStackedLayout* self, intptr_t slot);
void QStackedLayout_QBaseAddChildWidget(QStackedLayout* self, QWidget* w);
bool QStackedLayout_AdoptLayout(QStackedLayout* self, QLayout* layout);
void QStackedLayout_OnAdoptLayout(QStackedLayout* self, intptr_t slot);
bool QStackedLayout_QBaseAdoptLayout(QStackedLayout* self, QLayout* layout);
QRect* QStackedLayout_AlignmentRect(const QStackedLayout* self, const QRect* param1);
void QStackedLayout_OnAlignmentRect(const QStackedLayout* self, intptr_t slot);
QRect* QStackedLayout_QBaseAlignmentRect(const QStackedLayout* self, const QRect* param1);
QObject* QStackedLayout_Sender(const QStackedLayout* self);
void QStackedLayout_OnSender(const QStackedLayout* self, intptr_t slot);
QObject* QStackedLayout_QBaseSender(const QStackedLayout* self);
int QStackedLayout_SenderSignalIndex(const QStackedLayout* self);
void QStackedLayout_OnSenderSignalIndex(const QStackedLayout* self, intptr_t slot);
int QStackedLayout_QBaseSenderSignalIndex(const QStackedLayout* self);
int QStackedLayout_Receivers(const QStackedLayout* self, const char* signal);
void QStackedLayout_OnReceivers(const QStackedLayout* self, intptr_t slot);
int QStackedLayout_QBaseReceivers(const QStackedLayout* self, const char* signal);
bool QStackedLayout_IsSignalConnected(const QStackedLayout* self, const QMetaMethod* signal);
void QStackedLayout_OnIsSignalConnected(const QStackedLayout* self, intptr_t slot);
bool QStackedLayout_QBaseIsSignalConnected(const QStackedLayout* self, const QMetaMethod* signal);
void QStackedLayout_Delete(QStackedLayout* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
