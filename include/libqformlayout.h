#pragma once
#ifndef SRCC_LIBQFORMLAYOUT_H
#define SRCC_LIBQFORMLAYOUT_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

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
void QFormLayout_OnMetacall(QFormLayout* self, intptr_t slot);
int QFormLayout_QBaseMetacall(QFormLayout* self, int param1, int param2, void** param3);
libqt_string QFormLayout_Tr(const char* s);
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
void QFormLayout_OnSpacing(const QFormLayout* self, intptr_t slot);
int QFormLayout_QBaseSpacing(const QFormLayout* self);
void QFormLayout_SetSpacing(QFormLayout* self, int spacing);
void QFormLayout_OnSetSpacing(QFormLayout* self, intptr_t slot);
void QFormLayout_QBaseSetSpacing(QFormLayout* self, int spacing);
void QFormLayout_AddRow(QFormLayout* self, QWidget* label, QWidget* field);
void QFormLayout_AddRow2(QFormLayout* self, QWidget* label, QLayout* field);
void QFormLayout_AddRow3(QFormLayout* self, const libqt_string labelText, QWidget* field);
void QFormLayout_AddRow4(QFormLayout* self, const libqt_string labelText, QLayout* field);
void QFormLayout_AddRowWithWidget(QFormLayout* self, QWidget* widget);
void QFormLayout_AddRowWithLayout(QFormLayout* self, QLayout* layout);
void QFormLayout_InsertRow(QFormLayout* self, int row, QWidget* label, QWidget* field);
void QFormLayout_InsertRow2(QFormLayout* self, int row, QWidget* label, QLayout* field);
void QFormLayout_InsertRow3(QFormLayout* self, int row, const libqt_string labelText, QWidget* field);
void QFormLayout_InsertRow4(QFormLayout* self, int row, const libqt_string labelText, QLayout* field);
void QFormLayout_InsertRow5(QFormLayout* self, int row, QWidget* widget);
void QFormLayout_InsertRow6(QFormLayout* self, int row, QLayout* layout);
void QFormLayout_RemoveRow(QFormLayout* self, int row);
void QFormLayout_RemoveRowWithWidget(QFormLayout* self, QWidget* widget);
void QFormLayout_RemoveRowWithLayout(QFormLayout* self, QLayout* layout);
QFormLayout__TakeRowResult* QFormLayout_TakeRow(QFormLayout* self, int row);
QFormLayout__TakeRowResult* QFormLayout_TakeRowWithWidget(QFormLayout* self, QWidget* widget);
QFormLayout__TakeRowResult* QFormLayout_TakeRowWithLayout(QFormLayout* self, QLayout* layout);
void QFormLayout_SetItem(QFormLayout* self, int row, int role, QLayoutItem* item);
void QFormLayout_SetWidget(QFormLayout* self, int row, int role, QWidget* widget);
void QFormLayout_SetLayout(QFormLayout* self, int row, int role, QLayout* layout);
void QFormLayout_SetRowVisible(QFormLayout* self, int row, bool on);
void QFormLayout_SetRowVisible2(QFormLayout* self, QWidget* widget, bool on);
void QFormLayout_SetRowVisible3(QFormLayout* self, QLayout* layout, bool on);
bool QFormLayout_IsRowVisible(const QFormLayout* self, int row);
bool QFormLayout_IsRowVisibleWithWidget(const QFormLayout* self, QWidget* widget);
bool QFormLayout_IsRowVisibleWithLayout(const QFormLayout* self, QLayout* layout);
QLayoutItem* QFormLayout_ItemAt(const QFormLayout* self, int row, int role);
QWidget* QFormLayout_LabelForField(const QFormLayout* self, QWidget* field);
QWidget* QFormLayout_LabelForFieldWithField(const QFormLayout* self, QLayout* field);
void QFormLayout_AddItem(QFormLayout* self, QLayoutItem* item);
void QFormLayout_OnAddItem(QFormLayout* self, intptr_t slot);
void QFormLayout_QBaseAddItem(QFormLayout* self, QLayoutItem* item);
QLayoutItem* QFormLayout_ItemAtWithIndex(const QFormLayout* self, int index);
void QFormLayout_OnItemAtWithIndex(const QFormLayout* self, intptr_t slot);
QLayoutItem* QFormLayout_QBaseItemAtWithIndex(const QFormLayout* self, int index);
QLayoutItem* QFormLayout_TakeAt(QFormLayout* self, int index);
void QFormLayout_OnTakeAt(QFormLayout* self, intptr_t slot);
QLayoutItem* QFormLayout_QBaseTakeAt(QFormLayout* self, int index);
void QFormLayout_SetGeometry(QFormLayout* self, const QRect* rect);
void QFormLayout_OnSetGeometry(QFormLayout* self, intptr_t slot);
void QFormLayout_QBaseSetGeometry(QFormLayout* self, const QRect* rect);
QSize* QFormLayout_MinimumSize(const QFormLayout* self);
void QFormLayout_OnMinimumSize(const QFormLayout* self, intptr_t slot);
QSize* QFormLayout_QBaseMinimumSize(const QFormLayout* self);
QSize* QFormLayout_SizeHint(const QFormLayout* self);
void QFormLayout_OnSizeHint(const QFormLayout* self, intptr_t slot);
QSize* QFormLayout_QBaseSizeHint(const QFormLayout* self);
void QFormLayout_Invalidate(QFormLayout* self);
void QFormLayout_OnInvalidate(QFormLayout* self, intptr_t slot);
void QFormLayout_QBaseInvalidate(QFormLayout* self);
bool QFormLayout_HasHeightForWidth(const QFormLayout* self);
void QFormLayout_OnHasHeightForWidth(const QFormLayout* self, intptr_t slot);
bool QFormLayout_QBaseHasHeightForWidth(const QFormLayout* self);
int QFormLayout_HeightForWidth(const QFormLayout* self, int width);
void QFormLayout_OnHeightForWidth(const QFormLayout* self, intptr_t slot);
int QFormLayout_QBaseHeightForWidth(const QFormLayout* self, int width);
int QFormLayout_ExpandingDirections(const QFormLayout* self);
void QFormLayout_OnExpandingDirections(const QFormLayout* self, intptr_t slot);
int QFormLayout_QBaseExpandingDirections(const QFormLayout* self);
int QFormLayout_Count(const QFormLayout* self);
void QFormLayout_OnCount(const QFormLayout* self, intptr_t slot);
int QFormLayout_QBaseCount(const QFormLayout* self);
int QFormLayout_RowCount(const QFormLayout* self);
libqt_string QFormLayout_Tr2(const char* s, const char* c);
libqt_string QFormLayout_Tr3(const char* s, const char* c, int n);
QRect* QFormLayout_Geometry(const QFormLayout* self);
void QFormLayout_OnGeometry(const QFormLayout* self, intptr_t slot);
QRect* QFormLayout_QBaseGeometry(const QFormLayout* self);
QSize* QFormLayout_MaximumSize(const QFormLayout* self);
void QFormLayout_OnMaximumSize(const QFormLayout* self, intptr_t slot);
QSize* QFormLayout_QBaseMaximumSize(const QFormLayout* self);
int QFormLayout_IndexOf(const QFormLayout* self, const QWidget* param1);
void QFormLayout_OnIndexOf(const QFormLayout* self, intptr_t slot);
int QFormLayout_QBaseIndexOf(const QFormLayout* self, const QWidget* param1);
bool QFormLayout_IsEmpty(const QFormLayout* self);
void QFormLayout_OnIsEmpty(const QFormLayout* self, intptr_t slot);
bool QFormLayout_QBaseIsEmpty(const QFormLayout* self);
int QFormLayout_ControlTypes(const QFormLayout* self);
void QFormLayout_OnControlTypes(const QFormLayout* self, intptr_t slot);
int QFormLayout_QBaseControlTypes(const QFormLayout* self);
QLayoutItem* QFormLayout_ReplaceWidget(QFormLayout* self, QWidget* from, QWidget* to, int options);
void QFormLayout_OnReplaceWidget(QFormLayout* self, intptr_t slot);
QLayoutItem* QFormLayout_QBaseReplaceWidget(QFormLayout* self, QWidget* from, QWidget* to, int options);
QLayout* QFormLayout_Layout(QFormLayout* self);
void QFormLayout_OnLayout(QFormLayout* self, intptr_t slot);
QLayout* QFormLayout_QBaseLayout(QFormLayout* self);
void QFormLayout_ChildEvent(QFormLayout* self, QChildEvent* e);
void QFormLayout_OnChildEvent(QFormLayout* self, intptr_t slot);
void QFormLayout_QBaseChildEvent(QFormLayout* self, QChildEvent* e);
bool QFormLayout_Event(QFormLayout* self, QEvent* event);
void QFormLayout_OnEvent(QFormLayout* self, intptr_t slot);
bool QFormLayout_QBaseEvent(QFormLayout* self, QEvent* event);
bool QFormLayout_EventFilter(QFormLayout* self, QObject* watched, QEvent* event);
void QFormLayout_OnEventFilter(QFormLayout* self, intptr_t slot);
bool QFormLayout_QBaseEventFilter(QFormLayout* self, QObject* watched, QEvent* event);
void QFormLayout_TimerEvent(QFormLayout* self, QTimerEvent* event);
void QFormLayout_OnTimerEvent(QFormLayout* self, intptr_t slot);
void QFormLayout_QBaseTimerEvent(QFormLayout* self, QTimerEvent* event);
void QFormLayout_CustomEvent(QFormLayout* self, QEvent* event);
void QFormLayout_OnCustomEvent(QFormLayout* self, intptr_t slot);
void QFormLayout_QBaseCustomEvent(QFormLayout* self, QEvent* event);
void QFormLayout_ConnectNotify(QFormLayout* self, const QMetaMethod* signal);
void QFormLayout_OnConnectNotify(QFormLayout* self, intptr_t slot);
void QFormLayout_QBaseConnectNotify(QFormLayout* self, const QMetaMethod* signal);
void QFormLayout_DisconnectNotify(QFormLayout* self, const QMetaMethod* signal);
void QFormLayout_OnDisconnectNotify(QFormLayout* self, intptr_t slot);
void QFormLayout_QBaseDisconnectNotify(QFormLayout* self, const QMetaMethod* signal);
int QFormLayout_MinimumHeightForWidth(const QFormLayout* self, int param1);
void QFormLayout_OnMinimumHeightForWidth(const QFormLayout* self, intptr_t slot);
int QFormLayout_QBaseMinimumHeightForWidth(const QFormLayout* self, int param1);
QWidget* QFormLayout_Widget(const QFormLayout* self);
void QFormLayout_OnWidget(const QFormLayout* self, intptr_t slot);
QWidget* QFormLayout_QBaseWidget(const QFormLayout* self);
QSpacerItem* QFormLayout_SpacerItem(QFormLayout* self);
void QFormLayout_OnSpacerItem(QFormLayout* self, intptr_t slot);
QSpacerItem* QFormLayout_QBaseSpacerItem(QFormLayout* self);
void QFormLayout_WidgetEvent(QFormLayout* self, QEvent* param1);
void QFormLayout_OnWidgetEvent(QFormLayout* self, intptr_t slot);
void QFormLayout_QBaseWidgetEvent(QFormLayout* self, QEvent* param1);
void QFormLayout_AddChildLayout(QFormLayout* self, QLayout* l);
void QFormLayout_OnAddChildLayout(QFormLayout* self, intptr_t slot);
void QFormLayout_QBaseAddChildLayout(QFormLayout* self, QLayout* l);
void QFormLayout_AddChildWidget(QFormLayout* self, QWidget* w);
void QFormLayout_OnAddChildWidget(QFormLayout* self, intptr_t slot);
void QFormLayout_QBaseAddChildWidget(QFormLayout* self, QWidget* w);
bool QFormLayout_AdoptLayout(QFormLayout* self, QLayout* layout);
void QFormLayout_OnAdoptLayout(QFormLayout* self, intptr_t slot);
bool QFormLayout_QBaseAdoptLayout(QFormLayout* self, QLayout* layout);
QRect* QFormLayout_AlignmentRect(const QFormLayout* self, const QRect* param1);
void QFormLayout_OnAlignmentRect(const QFormLayout* self, intptr_t slot);
QRect* QFormLayout_QBaseAlignmentRect(const QFormLayout* self, const QRect* param1);
QObject* QFormLayout_Sender(const QFormLayout* self);
void QFormLayout_OnSender(const QFormLayout* self, intptr_t slot);
QObject* QFormLayout_QBaseSender(const QFormLayout* self);
int QFormLayout_SenderSignalIndex(const QFormLayout* self);
void QFormLayout_OnSenderSignalIndex(const QFormLayout* self, intptr_t slot);
int QFormLayout_QBaseSenderSignalIndex(const QFormLayout* self);
int QFormLayout_Receivers(const QFormLayout* self, const char* signal);
void QFormLayout_OnReceivers(const QFormLayout* self, intptr_t slot);
int QFormLayout_QBaseReceivers(const QFormLayout* self, const char* signal);
bool QFormLayout_IsSignalConnected(const QFormLayout* self, const QMetaMethod* signal);
void QFormLayout_OnIsSignalConnected(const QFormLayout* self, intptr_t slot);
bool QFormLayout_QBaseIsSignalConnected(const QFormLayout* self, const QMetaMethod* signal);
void QFormLayout_Delete(QFormLayout* self);

QFormLayout__TakeRowResult* QFormLayout__TakeRowResult_new();
QFormLayout__TakeRowResult* QFormLayout__TakeRowResult_new2(const QFormLayout__TakeRowResult* param1);
void QFormLayout__TakeRowResult_Delete(QFormLayout__TakeRowResult* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
