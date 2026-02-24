#pragma once
#ifndef SRCC_LIBQFORMLAYOUT_H
#define SRCC_LIBQFORMLAYOUT_H

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
#if defined(WORKAROUND_INNER_CLASS_DEFINITION_QFormLayout__TakeRowResult)
typedef QFormLayout::TakeRowResult QFormLayout__TakeRowResult;
#endif
#else
typedef struct QChildEvent QChildEvent;
typedef struct QEvent QEvent;
typedef struct QFormLayout QFormLayout;
typedef struct QFormLayout__TakeRowResult QFormLayout__TakeRowResult;
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

QFormLayout* QFormLayout_new(QWidget* parent);
QFormLayout* QFormLayout_new2();
QMetaObject* QFormLayout_MetaObject(const QFormLayout* self);
void* QFormLayout_Metacast(QFormLayout* self, const char* param1);
int QFormLayout_Metacall(QFormLayout* self, int param1, int param2, void** param3);
void QFormLayout_SetFieldGrowthPolicy(QFormLayout* self, int policy);
int QFormLayout_FieldGrowthPolicy(const QFormLayout* self);
void QFormLayout_SetRowWrapPolicy(QFormLayout* self, int policy);
int QFormLayout_RowWrapPolicy(const QFormLayout* self);
void QFormLayout_SetLabelAlignment(QFormLayout* self, int alignment);
int QFormLayout_LabelAlignment(const QFormLayout* self);
void QFormLayout_SetFormAlignment(QFormLayout* self, int alignment);
int QFormLayout_FormAlignment(const QFormLayout* self);
void QFormLayout_SetHorizontalSpacing(QFormLayout* self, int spacing);
int QFormLayout_HorizontalSpacing(const QFormLayout* self);
void QFormLayout_SetVerticalSpacing(QFormLayout* self, int spacing);
int QFormLayout_VerticalSpacing(const QFormLayout* self);
int QFormLayout_Spacing(const QFormLayout* self);
void QFormLayout_SetSpacing(QFormLayout* self, int spacing);
void QFormLayout_AddRow(QFormLayout* self, QWidget* label, QWidget* field);
void QFormLayout_AddRow2(QFormLayout* self, QWidget* label, QLayout* field);
void QFormLayout_AddRow3(QFormLayout* self, const libqt_string labelText, QWidget* field);
void QFormLayout_AddRow4(QFormLayout* self, const libqt_string labelText, QLayout* field);
void QFormLayout_AddRow5(QFormLayout* self, QWidget* widget);
void QFormLayout_AddRow6(QFormLayout* self, QLayout* layout);
void QFormLayout_InsertRow(QFormLayout* self, int row, QWidget* label, QWidget* field);
void QFormLayout_InsertRow2(QFormLayout* self, int row, QWidget* label, QLayout* field);
void QFormLayout_InsertRow3(QFormLayout* self, int row, const libqt_string labelText, QWidget* field);
void QFormLayout_InsertRow4(QFormLayout* self, int row, const libqt_string labelText, QLayout* field);
void QFormLayout_InsertRow5(QFormLayout* self, int row, QWidget* widget);
void QFormLayout_InsertRow6(QFormLayout* self, int row, QLayout* layout);
void QFormLayout_RemoveRow(QFormLayout* self, int row);
void QFormLayout_RemoveRow2(QFormLayout* self, QWidget* widget);
void QFormLayout_RemoveRow3(QFormLayout* self, QLayout* layout);
QFormLayout__TakeRowResult* QFormLayout_TakeRow(QFormLayout* self, int row);
QFormLayout__TakeRowResult* QFormLayout_TakeRow2(QFormLayout* self, QWidget* widget);
QFormLayout__TakeRowResult* QFormLayout_TakeRow3(QFormLayout* self, QLayout* layout);
void QFormLayout_SetItem(QFormLayout* self, int row, int role, QLayoutItem* item);
void QFormLayout_SetWidget(QFormLayout* self, int row, int role, QWidget* widget);
void QFormLayout_SetLayout(QFormLayout* self, int row, int role, QLayout* layout);
void QFormLayout_SetRowVisible(QFormLayout* self, int row, bool on);
void QFormLayout_SetRowVisible2(QFormLayout* self, QWidget* widget, bool on);
void QFormLayout_SetRowVisible3(QFormLayout* self, QLayout* layout, bool on);
bool QFormLayout_IsRowVisible(const QFormLayout* self, int row);
bool QFormLayout_IsRowVisible2(const QFormLayout* self, QWidget* widget);
bool QFormLayout_IsRowVisible3(const QFormLayout* self, QLayout* layout);
QLayoutItem* QFormLayout_ItemAt(const QFormLayout* self, int row, int role);
void QFormLayout_GetItemPosition(const QFormLayout* self, int index, int* rowPtr, int* rolePtr);
void QFormLayout_GetWidgetPosition(const QFormLayout* self, QWidget* widget, int* rowPtr, int* rolePtr);
void QFormLayout_GetLayoutPosition(const QFormLayout* self, QLayout* layout, int* rowPtr, int* rolePtr);
QWidget* QFormLayout_LabelForField(const QFormLayout* self, QWidget* field);
QWidget* QFormLayout_LabelForField2(const QFormLayout* self, QLayout* field);
void QFormLayout_AddItem(QFormLayout* self, QLayoutItem* item);
QLayoutItem* QFormLayout_ItemAt2(const QFormLayout* self, int index);
QLayoutItem* QFormLayout_TakeAt(QFormLayout* self, int index);
void QFormLayout_SetGeometry(QFormLayout* self, const QRect* rect);
QSize* QFormLayout_MinimumSize(const QFormLayout* self);
QSize* QFormLayout_SizeHint(const QFormLayout* self);
void QFormLayout_Invalidate(QFormLayout* self);
bool QFormLayout_HasHeightForWidth(const QFormLayout* self);
int QFormLayout_HeightForWidth(const QFormLayout* self, int width);
int QFormLayout_ExpandingDirections(const QFormLayout* self);
int QFormLayout_Count(const QFormLayout* self);
int QFormLayout_RowCount(const QFormLayout* self);
void QFormLayout_OnMetaObject(const QFormLayout* self, intptr_t slot);
QMetaObject* QFormLayout_SuperMetaObject(const QFormLayout* self);
void QFormLayout_OnMetacast(QFormLayout* self, intptr_t slot);
void* QFormLayout_SuperMetacast(QFormLayout* self, const char* param1);
void QFormLayout_OnMetacall(QFormLayout* self, intptr_t slot);
int QFormLayout_SuperMetacall(QFormLayout* self, int param1, int param2, void** param3);
void QFormLayout_OnSpacing(const QFormLayout* self, intptr_t slot);
int QFormLayout_SuperSpacing(const QFormLayout* self);
void QFormLayout_OnSetSpacing(QFormLayout* self, intptr_t slot);
void QFormLayout_SuperSetSpacing(QFormLayout* self, int spacing);
void QFormLayout_OnAddItem(QFormLayout* self, intptr_t slot);
void QFormLayout_SuperAddItem(QFormLayout* self, QLayoutItem* item);
void QFormLayout_OnItemAt2(const QFormLayout* self, intptr_t slot);
QLayoutItem* QFormLayout_SuperItemAt2(const QFormLayout* self, int index);
void QFormLayout_OnTakeAt(QFormLayout* self, intptr_t slot);
QLayoutItem* QFormLayout_SuperTakeAt(QFormLayout* self, int index);
void QFormLayout_OnSetGeometry(QFormLayout* self, intptr_t slot);
void QFormLayout_SuperSetGeometry(QFormLayout* self, const QRect* rect);
void QFormLayout_OnMinimumSize(const QFormLayout* self, intptr_t slot);
QSize* QFormLayout_SuperMinimumSize(const QFormLayout* self);
void QFormLayout_OnSizeHint(const QFormLayout* self, intptr_t slot);
QSize* QFormLayout_SuperSizeHint(const QFormLayout* self);
void QFormLayout_OnInvalidate(QFormLayout* self, intptr_t slot);
void QFormLayout_SuperInvalidate(QFormLayout* self);
void QFormLayout_OnHasHeightForWidth(const QFormLayout* self, intptr_t slot);
bool QFormLayout_SuperHasHeightForWidth(const QFormLayout* self);
void QFormLayout_OnHeightForWidth(const QFormLayout* self, intptr_t slot);
int QFormLayout_SuperHeightForWidth(const QFormLayout* self, int width);
void QFormLayout_OnExpandingDirections(const QFormLayout* self, intptr_t slot);
int QFormLayout_SuperExpandingDirections(const QFormLayout* self);
void QFormLayout_OnCount(const QFormLayout* self, intptr_t slot);
int QFormLayout_SuperCount(const QFormLayout* self);
QRect* QFormLayout_Geometry(const QFormLayout* self);
void QFormLayout_OnGeometry(const QFormLayout* self, intptr_t slot);
QRect* QFormLayout_SuperGeometry(const QFormLayout* self);
QSize* QFormLayout_MaximumSize(const QFormLayout* self);
void QFormLayout_OnMaximumSize(const QFormLayout* self, intptr_t slot);
QSize* QFormLayout_SuperMaximumSize(const QFormLayout* self);
int QFormLayout_IndexOf(const QFormLayout* self, const QWidget* param1);
void QFormLayout_OnIndexOf(const QFormLayout* self, intptr_t slot);
int QFormLayout_SuperIndexOf(const QFormLayout* self, const QWidget* param1);
bool QFormLayout_IsEmpty(const QFormLayout* self);
void QFormLayout_OnIsEmpty(const QFormLayout* self, intptr_t slot);
bool QFormLayout_SuperIsEmpty(const QFormLayout* self);
int QFormLayout_ControlTypes(const QFormLayout* self);
void QFormLayout_OnControlTypes(const QFormLayout* self, intptr_t slot);
int QFormLayout_SuperControlTypes(const QFormLayout* self);
QLayoutItem* QFormLayout_ReplaceWidget(QFormLayout* self, QWidget* from, QWidget* to, int options);
void QFormLayout_OnReplaceWidget(QFormLayout* self, intptr_t slot);
QLayoutItem* QFormLayout_SuperReplaceWidget(QFormLayout* self, QWidget* from, QWidget* to, int options);
QLayout* QFormLayout_Layout(QFormLayout* self);
void QFormLayout_OnLayout(QFormLayout* self, intptr_t slot);
QLayout* QFormLayout_SuperLayout(QFormLayout* self);
void QFormLayout_ChildEvent(QFormLayout* self, QChildEvent* e);
void QFormLayout_OnChildEvent(QFormLayout* self, intptr_t slot);
void QFormLayout_SuperChildEvent(QFormLayout* self, QChildEvent* e);
bool QFormLayout_Event(QFormLayout* self, QEvent* event);
void QFormLayout_OnEvent(QFormLayout* self, intptr_t slot);
bool QFormLayout_SuperEvent(QFormLayout* self, QEvent* event);
bool QFormLayout_EventFilter(QFormLayout* self, QObject* watched, QEvent* event);
void QFormLayout_OnEventFilter(QFormLayout* self, intptr_t slot);
bool QFormLayout_SuperEventFilter(QFormLayout* self, QObject* watched, QEvent* event);
void QFormLayout_TimerEvent(QFormLayout* self, QTimerEvent* event);
void QFormLayout_OnTimerEvent(QFormLayout* self, intptr_t slot);
void QFormLayout_SuperTimerEvent(QFormLayout* self, QTimerEvent* event);
void QFormLayout_CustomEvent(QFormLayout* self, QEvent* event);
void QFormLayout_OnCustomEvent(QFormLayout* self, intptr_t slot);
void QFormLayout_SuperCustomEvent(QFormLayout* self, QEvent* event);
void QFormLayout_ConnectNotify(QFormLayout* self, const QMetaMethod* signal);
void QFormLayout_OnConnectNotify(QFormLayout* self, intptr_t slot);
void QFormLayout_SuperConnectNotify(QFormLayout* self, const QMetaMethod* signal);
void QFormLayout_DisconnectNotify(QFormLayout* self, const QMetaMethod* signal);
void QFormLayout_OnDisconnectNotify(QFormLayout* self, intptr_t slot);
void QFormLayout_SuperDisconnectNotify(QFormLayout* self, const QMetaMethod* signal);
int QFormLayout_MinimumHeightForWidth(const QFormLayout* self, int param1);
void QFormLayout_OnMinimumHeightForWidth(const QFormLayout* self, intptr_t slot);
int QFormLayout_SuperMinimumHeightForWidth(const QFormLayout* self, int param1);
QWidget* QFormLayout_Widget(const QFormLayout* self);
void QFormLayout_OnWidget(const QFormLayout* self, intptr_t slot);
QWidget* QFormLayout_SuperWidget(const QFormLayout* self);
QSpacerItem* QFormLayout_SpacerItem(QFormLayout* self);
void QFormLayout_OnSpacerItem(QFormLayout* self, intptr_t slot);
QSpacerItem* QFormLayout_SuperSpacerItem(QFormLayout* self);
void QFormLayout_WidgetEvent(QFormLayout* self, QEvent* param1);
void QFormLayout_OnWidgetEvent(QFormLayout* self, intptr_t slot);
void QFormLayout_SuperWidgetEvent(QFormLayout* self, QEvent* param1);
void QFormLayout_AddChildLayout(QFormLayout* self, QLayout* l);
void QFormLayout_OnAddChildLayout(QFormLayout* self, intptr_t slot);
void QFormLayout_SuperAddChildLayout(QFormLayout* self, QLayout* l);
void QFormLayout_AddChildWidget(QFormLayout* self, QWidget* w);
void QFormLayout_OnAddChildWidget(QFormLayout* self, intptr_t slot);
void QFormLayout_SuperAddChildWidget(QFormLayout* self, QWidget* w);
bool QFormLayout_AdoptLayout(QFormLayout* self, QLayout* layout);
void QFormLayout_OnAdoptLayout(QFormLayout* self, intptr_t slot);
bool QFormLayout_SuperAdoptLayout(QFormLayout* self, QLayout* layout);
QRect* QFormLayout_AlignmentRect(const QFormLayout* self, const QRect* param1);
void QFormLayout_OnAlignmentRect(const QFormLayout* self, intptr_t slot);
QRect* QFormLayout_SuperAlignmentRect(const QFormLayout* self, const QRect* param1);
QObject* QFormLayout_Sender(const QFormLayout* self);
void QFormLayout_OnSender(const QFormLayout* self, intptr_t slot);
QObject* QFormLayout_SuperSender(const QFormLayout* self);
int QFormLayout_SenderSignalIndex(const QFormLayout* self);
void QFormLayout_OnSenderSignalIndex(const QFormLayout* self, intptr_t slot);
int QFormLayout_SuperSenderSignalIndex(const QFormLayout* self);
int QFormLayout_Receivers(const QFormLayout* self, const char* signal);
void QFormLayout_OnReceivers(const QFormLayout* self, intptr_t slot);
int QFormLayout_SuperReceivers(const QFormLayout* self, const char* signal);
bool QFormLayout_IsSignalConnected(const QFormLayout* self, const QMetaMethod* signal);
void QFormLayout_OnIsSignalConnected(const QFormLayout* self, intptr_t slot);
bool QFormLayout_SuperIsSignalConnected(const QFormLayout* self, const QMetaMethod* signal);
void QFormLayout_Delete(QFormLayout* self);

QFormLayout__TakeRowResult* QFormLayout__TakeRowResult_new();
QFormLayout__TakeRowResult* QFormLayout__TakeRowResult_new2(const QFormLayout__TakeRowResult* param1);
QLayoutItem* QFormLayout__TakeRowResult_LabelItem(const QFormLayout__TakeRowResult* self);
void QFormLayout__TakeRowResult_SetLabelItem(QFormLayout__TakeRowResult* self, QLayoutItem* labelItem);
QLayoutItem* QFormLayout__TakeRowResult_FieldItem(const QFormLayout__TakeRowResult* self);
void QFormLayout__TakeRowResult_SetFieldItem(QFormLayout__TakeRowResult* self, QLayoutItem* fieldItem);
void QFormLayout__TakeRowResult_Delete(QFormLayout__TakeRowResult* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
