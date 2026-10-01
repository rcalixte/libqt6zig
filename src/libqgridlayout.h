#pragma once
#ifndef LIBQGRIDLAYOUT_H
#define LIBQGRIDLAYOUT_H

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
typedef struct QGridLayout QGridLayout;
typedef struct QLayout QLayout;
typedef struct QLayoutItem QLayoutItem;
typedef struct QMetaMethod QMetaMethod;
typedef struct QMetaObject QMetaObject;
typedef struct QObject QObject;
typedef struct QRect QRect;
typedef struct QSize QSize;
typedef struct QSpacerItem QSpacerItem;
typedef struct QTimerEvent QTimerEvent;
typedef struct QWidget QWidget;
#endif

QGridLayout* QGridLayout_new(QWidget* parent);
QGridLayout* QGridLayout_new2();
QMetaObject* QGridLayout_MetaObject(const QGridLayout* self);
void* QGridLayout_Metacast(QGridLayout* self, const char* param1);
int QGridLayout_Metacall(QGridLayout* self, int param1, int param2, void** param3);
libqt_string QGridLayout_Tr(const char* s);
QSize* QGridLayout_SizeHint(const QGridLayout* self);
QSize* QGridLayout_MinimumSize(const QGridLayout* self);
QSize* QGridLayout_MaximumSize(const QGridLayout* self);
void QGridLayout_SetHorizontalSpacing(QGridLayout* self, int spacing);
int QGridLayout_HorizontalSpacing(const QGridLayout* self);
void QGridLayout_SetVerticalSpacing(QGridLayout* self, int spacing);
int QGridLayout_VerticalSpacing(const QGridLayout* self);
void QGridLayout_SetSpacing(QGridLayout* self, int spacing);
int QGridLayout_Spacing(const QGridLayout* self);
void QGridLayout_SetRowStretch(QGridLayout* self, int row, int stretch);
void QGridLayout_SetColumnStretch(QGridLayout* self, int column, int stretch);
int QGridLayout_RowStretch(const QGridLayout* self, int row);
int QGridLayout_ColumnStretch(const QGridLayout* self, int column);
void QGridLayout_SetRowMinimumHeight(QGridLayout* self, int row, int minSize);
void QGridLayout_SetColumnMinimumWidth(QGridLayout* self, int column, int minSize);
int QGridLayout_RowMinimumHeight(const QGridLayout* self, int row);
int QGridLayout_ColumnMinimumWidth(const QGridLayout* self, int column);
int QGridLayout_ColumnCount(const QGridLayout* self);
int QGridLayout_RowCount(const QGridLayout* self);
QRect* QGridLayout_CellRect(const QGridLayout* self, int row, int column);
bool QGridLayout_HasHeightForWidth(const QGridLayout* self);
int QGridLayout_HeightForWidth(const QGridLayout* self, int param1);
int QGridLayout_MinimumHeightForWidth(const QGridLayout* self, int param1);
int QGridLayout_ExpandingDirections(const QGridLayout* self);
void QGridLayout_Invalidate(QGridLayout* self);
void QGridLayout_AddWidget(QGridLayout* self, QWidget* w);
void QGridLayout_AddWidget2(QGridLayout* self, QWidget* param1, int row, int column);
void QGridLayout_AddWidget3(QGridLayout* self, QWidget* param1, int row, int column, int rowSpan, int columnSpan);
void QGridLayout_AddLayout(QGridLayout* self, QLayout* param1, int row, int column);
void QGridLayout_AddLayout2(QGridLayout* self, QLayout* param1, int row, int column, int rowSpan, int columnSpan);
void QGridLayout_SetOriginCorner(QGridLayout* self, int originCorner);
int QGridLayout_OriginCorner(const QGridLayout* self);
QLayoutItem* QGridLayout_ItemAt(const QGridLayout* self, int index);
QLayoutItem* QGridLayout_ItemAtPosition(const QGridLayout* self, int row, int column);
QLayoutItem* QGridLayout_TakeAt(QGridLayout* self, int index);
int QGridLayout_Count(const QGridLayout* self);
void QGridLayout_SetGeometry(QGridLayout* self, const QRect* geometry);
void QGridLayout_AddItem(QGridLayout* self, QLayoutItem* item, int row, int column);
void QGridLayout_SetDefaultPositioning(QGridLayout* self, int n, int orient);
void QGridLayout_GetItemPosition(const QGridLayout* self, int idx, int* row, int* column, int* rowSpan, int* columnSpan);
void QGridLayout_AddItem2(QGridLayout* self, QLayoutItem* param1);
libqt_string QGridLayout_Tr2(const char* s, const char* c);
libqt_string QGridLayout_Tr3(const char* s, const char* c, int n);
void QGridLayout_AddWidget4(QGridLayout* self, QWidget* param1, int row, int column, int param4);
void QGridLayout_AddWidget6(QGridLayout* self, QWidget* param1, int row, int column, int rowSpan, int columnSpan, int param6);
void QGridLayout_AddLayout4(QGridLayout* self, QLayout* param1, int row, int column, int param4);
void QGridLayout_AddLayout6(QGridLayout* self, QLayout* param1, int row, int column, int rowSpan, int columnSpan, int param6);
void QGridLayout_AddItem4(QGridLayout* self, QLayoutItem* item, int row, int column, int rowSpan);
void QGridLayout_AddItem5(QGridLayout* self, QLayoutItem* item, int row, int column, int rowSpan, int columnSpan);
void QGridLayout_AddItem6(QGridLayout* self, QLayoutItem* item, int row, int column, int rowSpan, int columnSpan, int param6);
void QGridLayout_OnMetaObject(QGridLayout* self, intptr_t slot);
QMetaObject* QGridLayout_SuperMetaObject(const QGridLayout* self);
void QGridLayout_OnMetacast(QGridLayout* self, intptr_t slot);
void* QGridLayout_SuperMetacast(QGridLayout* self, const char* param1);
void QGridLayout_OnMetacall(QGridLayout* self, intptr_t slot);
int QGridLayout_SuperMetacall(QGridLayout* self, int param1, int param2, void** param3);
void QGridLayout_OnSizeHint(QGridLayout* self, intptr_t slot);
QSize* QGridLayout_SuperSizeHint(const QGridLayout* self);
void QGridLayout_OnMinimumSize(QGridLayout* self, intptr_t slot);
QSize* QGridLayout_SuperMinimumSize(const QGridLayout* self);
void QGridLayout_OnMaximumSize(QGridLayout* self, intptr_t slot);
QSize* QGridLayout_SuperMaximumSize(const QGridLayout* self);
void QGridLayout_OnSetSpacing(QGridLayout* self, intptr_t slot);
void QGridLayout_SuperSetSpacing(QGridLayout* self, int spacing);
void QGridLayout_OnSpacing(QGridLayout* self, intptr_t slot);
int QGridLayout_SuperSpacing(const QGridLayout* self);
void QGridLayout_OnHasHeightForWidth(QGridLayout* self, intptr_t slot);
bool QGridLayout_SuperHasHeightForWidth(const QGridLayout* self);
void QGridLayout_OnHeightForWidth(QGridLayout* self, intptr_t slot);
int QGridLayout_SuperHeightForWidth(const QGridLayout* self, int param1);
void QGridLayout_OnMinimumHeightForWidth(QGridLayout* self, intptr_t slot);
int QGridLayout_SuperMinimumHeightForWidth(const QGridLayout* self, int param1);
void QGridLayout_OnExpandingDirections(QGridLayout* self, intptr_t slot);
int QGridLayout_SuperExpandingDirections(const QGridLayout* self);
void QGridLayout_OnInvalidate(QGridLayout* self, intptr_t slot);
void QGridLayout_SuperInvalidate(QGridLayout* self);
void QGridLayout_OnItemAt(QGridLayout* self, intptr_t slot);
QLayoutItem* QGridLayout_SuperItemAt(const QGridLayout* self, int index);
void QGridLayout_OnTakeAt(QGridLayout* self, intptr_t slot);
QLayoutItem* QGridLayout_SuperTakeAt(QGridLayout* self, int index);
void QGridLayout_OnCount(QGridLayout* self, intptr_t slot);
int QGridLayout_SuperCount(const QGridLayout* self);
void QGridLayout_OnSetGeometry(QGridLayout* self, intptr_t slot);
void QGridLayout_SuperSetGeometry(QGridLayout* self, const QRect* geometry);
void QGridLayout_OnAddItem2(QGridLayout* self, intptr_t slot);
void QGridLayout_SuperAddItem2(QGridLayout* self, QLayoutItem* param1);
QRect* QGridLayout_Geometry(const QGridLayout* self);
void QGridLayout_OnGeometry(QGridLayout* self, intptr_t slot);
QRect* QGridLayout_SuperGeometry(const QGridLayout* self);
int QGridLayout_IndexOf(const QGridLayout* self, const QWidget* param1);
void QGridLayout_OnIndexOf(QGridLayout* self, intptr_t slot);
int QGridLayout_SuperIndexOf(const QGridLayout* self, const QWidget* param1);
bool QGridLayout_IsEmpty(const QGridLayout* self);
void QGridLayout_OnIsEmpty(QGridLayout* self, intptr_t slot);
bool QGridLayout_SuperIsEmpty(const QGridLayout* self);
int QGridLayout_ControlTypes(const QGridLayout* self);
void QGridLayout_OnControlTypes(QGridLayout* self, intptr_t slot);
int QGridLayout_SuperControlTypes(const QGridLayout* self);
QLayoutItem* QGridLayout_ReplaceWidget(QGridLayout* self, QWidget* from, QWidget* to, int options);
void QGridLayout_OnReplaceWidget(QGridLayout* self, intptr_t slot);
QLayoutItem* QGridLayout_SuperReplaceWidget(QGridLayout* self, QWidget* from, QWidget* to, int options);
QLayout* QGridLayout_Layout(QGridLayout* self);
void QGridLayout_OnLayout(QGridLayout* self, intptr_t slot);
QLayout* QGridLayout_SuperLayout(QGridLayout* self);
void QGridLayout_ChildEvent(QGridLayout* self, QChildEvent* e);
void QGridLayout_OnChildEvent(QGridLayout* self, intptr_t slot);
void QGridLayout_SuperChildEvent(QGridLayout* self, QChildEvent* e);
bool QGridLayout_Event(QGridLayout* self, QEvent* event);
void QGridLayout_OnEvent(QGridLayout* self, intptr_t slot);
bool QGridLayout_SuperEvent(QGridLayout* self, QEvent* event);
bool QGridLayout_EventFilter(QGridLayout* self, QObject* watched, QEvent* event);
void QGridLayout_OnEventFilter(QGridLayout* self, intptr_t slot);
bool QGridLayout_SuperEventFilter(QGridLayout* self, QObject* watched, QEvent* event);
void QGridLayout_TimerEvent(QGridLayout* self, QTimerEvent* event);
void QGridLayout_OnTimerEvent(QGridLayout* self, intptr_t slot);
void QGridLayout_SuperTimerEvent(QGridLayout* self, QTimerEvent* event);
void QGridLayout_CustomEvent(QGridLayout* self, QEvent* event);
void QGridLayout_OnCustomEvent(QGridLayout* self, intptr_t slot);
void QGridLayout_SuperCustomEvent(QGridLayout* self, QEvent* event);
void QGridLayout_ConnectNotify(QGridLayout* self, const QMetaMethod* signal);
void QGridLayout_OnConnectNotify(QGridLayout* self, intptr_t slot);
void QGridLayout_SuperConnectNotify(QGridLayout* self, const QMetaMethod* signal);
void QGridLayout_DisconnectNotify(QGridLayout* self, const QMetaMethod* signal);
void QGridLayout_OnDisconnectNotify(QGridLayout* self, intptr_t slot);
void QGridLayout_SuperDisconnectNotify(QGridLayout* self, const QMetaMethod* signal);
QWidget* QGridLayout_Widget(const QGridLayout* self);
void QGridLayout_OnWidget(QGridLayout* self, intptr_t slot);
QWidget* QGridLayout_SuperWidget(const QGridLayout* self);
QSpacerItem* QGridLayout_SpacerItem(QGridLayout* self);
void QGridLayout_OnSpacerItem(QGridLayout* self, intptr_t slot);
QSpacerItem* QGridLayout_SuperSpacerItem(QGridLayout* self);
void QGridLayout_WidgetEvent(QGridLayout* self, QEvent* param1);
void QGridLayout_AddChildLayout(QGridLayout* self, QLayout* l);
void QGridLayout_AddChildWidget(QGridLayout* self, QWidget* w);
bool QGridLayout_AdoptLayout(QGridLayout* self, QLayout* layout);
QRect* QGridLayout_AlignmentRect(const QGridLayout* self, const QRect* param1);
QObject* QGridLayout_Sender(const QGridLayout* self);
int QGridLayout_SenderSignalIndex(const QGridLayout* self);
int QGridLayout_Receivers(const QGridLayout* self, const char* signal);
bool QGridLayout_IsSignalConnected(const QGridLayout* self, const QMetaMethod* signal);
void QGridLayout_Delete(QGridLayout* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
