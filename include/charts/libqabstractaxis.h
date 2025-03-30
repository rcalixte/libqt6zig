#pragma once
#ifndef SRC_CHARTSC_LIBQABSTRACTAXIS_H
#define SRC_CHARTSC_LIBQABSTRACTAXIS_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"


#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
#if defined(WORKAROUND_INNER_CLASS_DEFINITION_QMetaObject__Connection)
typedef QMetaObject::Connection QMetaObject__Connection;
#endif
#else
typedef struct QAbstractAxis QAbstractAxis;
typedef struct QAnyStringView QAnyStringView;
typedef struct QBindingStorage QBindingStorage;
typedef struct QBrush QBrush;
typedef struct QChildEvent QChildEvent;
typedef struct QColor QColor;
typedef struct QEvent QEvent;
typedef struct QFont QFont;
typedef struct QMetaMethod QMetaMethod;
typedef struct QMetaObject QMetaObject;
typedef struct QMetaObject__Connection QMetaObject__Connection;
typedef struct QObject QObject;
typedef struct QPen QPen;
typedef struct QThread QThread;
typedef struct QTimerEvent QTimerEvent;
typedef struct QVariant QVariant;
#endif

#ifdef __cplusplus
typedef QAbstractAxis::AxisType AxisType; // C++ enum
typedef QAbstractAxis::AxisTypes AxisTypes; // C++ QFlags
#else
typedef int AxisType; // C ABI enum
typedef int AxisTypes; // C ABI QFlags
#endif

QMetaObject* QAbstractAxis_MetaObject(const QAbstractAxis* self);
void* QAbstractAxis_Metacast(QAbstractAxis* self, const char* param1);
int QAbstractAxis_Metacall(QAbstractAxis* self, int param1, int param2, void** param3);
libqt_string QAbstractAxis_Tr(const char* s);
int QAbstractAxis_Type(const QAbstractAxis* self);
bool QAbstractAxis_IsVisible(const QAbstractAxis* self);
void QAbstractAxis_SetVisible(QAbstractAxis* self);
void QAbstractAxis_Show(QAbstractAxis* self);
void QAbstractAxis_Hide(QAbstractAxis* self);
bool QAbstractAxis_IsLineVisible(const QAbstractAxis* self);
void QAbstractAxis_SetLineVisible(QAbstractAxis* self);
void QAbstractAxis_SetLinePen(QAbstractAxis* self, QPen* pen);
QPen* QAbstractAxis_LinePen(const QAbstractAxis* self);
void QAbstractAxis_SetLinePenColor(QAbstractAxis* self, QColor* color);
QColor* QAbstractAxis_LinePenColor(const QAbstractAxis* self);
bool QAbstractAxis_IsGridLineVisible(const QAbstractAxis* self);
void QAbstractAxis_SetGridLineVisible(QAbstractAxis* self);
void QAbstractAxis_SetGridLinePen(QAbstractAxis* self, QPen* pen);
QPen* QAbstractAxis_GridLinePen(const QAbstractAxis* self);
bool QAbstractAxis_IsMinorGridLineVisible(const QAbstractAxis* self);
void QAbstractAxis_SetMinorGridLineVisible(QAbstractAxis* self);
void QAbstractAxis_SetMinorGridLinePen(QAbstractAxis* self, QPen* pen);
QPen* QAbstractAxis_MinorGridLinePen(const QAbstractAxis* self);
void QAbstractAxis_SetGridLineColor(QAbstractAxis* self, QColor* color);
QColor* QAbstractAxis_GridLineColor(QAbstractAxis* self);
void QAbstractAxis_SetMinorGridLineColor(QAbstractAxis* self, QColor* color);
QColor* QAbstractAxis_MinorGridLineColor(QAbstractAxis* self);
bool QAbstractAxis_LabelsVisible(const QAbstractAxis* self);
void QAbstractAxis_SetLabelsVisible(QAbstractAxis* self);
void QAbstractAxis_SetLabelsBrush(QAbstractAxis* self, QBrush* brush);
QBrush* QAbstractAxis_LabelsBrush(const QAbstractAxis* self);
void QAbstractAxis_SetLabelsFont(QAbstractAxis* self, QFont* font);
QFont* QAbstractAxis_LabelsFont(const QAbstractAxis* self);
void QAbstractAxis_SetLabelsAngle(QAbstractAxis* self, int angle);
int QAbstractAxis_LabelsAngle(const QAbstractAxis* self);
void QAbstractAxis_SetLabelsColor(QAbstractAxis* self, QColor* color);
QColor* QAbstractAxis_LabelsColor(const QAbstractAxis* self);
bool QAbstractAxis_IsTitleVisible(const QAbstractAxis* self);
void QAbstractAxis_SetTitleVisible(QAbstractAxis* self);
void QAbstractAxis_SetTitleBrush(QAbstractAxis* self, QBrush* brush);
QBrush* QAbstractAxis_TitleBrush(const QAbstractAxis* self);
void QAbstractAxis_SetTitleFont(QAbstractAxis* self, QFont* font);
QFont* QAbstractAxis_TitleFont(const QAbstractAxis* self);
void QAbstractAxis_SetTitleText(QAbstractAxis* self, libqt_string title);
libqt_string QAbstractAxis_TitleText(const QAbstractAxis* self);
bool QAbstractAxis_ShadesVisible(const QAbstractAxis* self);
void QAbstractAxis_SetShadesVisible(QAbstractAxis* self);
void QAbstractAxis_SetShadesPen(QAbstractAxis* self, QPen* pen);
QPen* QAbstractAxis_ShadesPen(const QAbstractAxis* self);
void QAbstractAxis_SetShadesBrush(QAbstractAxis* self, QBrush* brush);
QBrush* QAbstractAxis_ShadesBrush(const QAbstractAxis* self);
void QAbstractAxis_SetShadesColor(QAbstractAxis* self, QColor* color);
QColor* QAbstractAxis_ShadesColor(const QAbstractAxis* self);
void QAbstractAxis_SetShadesBorderColor(QAbstractAxis* self, QColor* color);
QColor* QAbstractAxis_ShadesBorderColor(const QAbstractAxis* self);
int QAbstractAxis_Orientation(const QAbstractAxis* self);
int QAbstractAxis_Alignment(const QAbstractAxis* self);
void QAbstractAxis_SetMin(QAbstractAxis* self, QVariant* min);
void QAbstractAxis_SetMax(QAbstractAxis* self, QVariant* max);
void QAbstractAxis_SetRange(QAbstractAxis* self, QVariant* min, QVariant* max);
void QAbstractAxis_SetReverse(QAbstractAxis* self);
bool QAbstractAxis_IsReverse(const QAbstractAxis* self);
void QAbstractAxis_SetLabelsEditable(QAbstractAxis* self);
bool QAbstractAxis_LabelsEditable(const QAbstractAxis* self);
bool QAbstractAxis_LabelsTruncated(const QAbstractAxis* self);
void QAbstractAxis_SetTruncateLabels(QAbstractAxis* self);
bool QAbstractAxis_TruncateLabels(const QAbstractAxis* self);
void QAbstractAxis_VisibleChanged(QAbstractAxis* self, bool visible);
void QAbstractAxis_Connect_VisibleChanged(QAbstractAxis* self, intptr_t slot);
void QAbstractAxis_LinePenChanged(QAbstractAxis* self, QPen* pen);
void QAbstractAxis_Connect_LinePenChanged(QAbstractAxis* self, intptr_t slot);
void QAbstractAxis_LineVisibleChanged(QAbstractAxis* self, bool visible);
void QAbstractAxis_Connect_LineVisibleChanged(QAbstractAxis* self, intptr_t slot);
void QAbstractAxis_LabelsVisibleChanged(QAbstractAxis* self, bool visible);
void QAbstractAxis_Connect_LabelsVisibleChanged(QAbstractAxis* self, intptr_t slot);
void QAbstractAxis_LabelsBrushChanged(QAbstractAxis* self, QBrush* brush);
void QAbstractAxis_Connect_LabelsBrushChanged(QAbstractAxis* self, intptr_t slot);
void QAbstractAxis_LabelsFontChanged(QAbstractAxis* self, QFont* pen);
void QAbstractAxis_Connect_LabelsFontChanged(QAbstractAxis* self, intptr_t slot);
void QAbstractAxis_LabelsAngleChanged(QAbstractAxis* self, int angle);
void QAbstractAxis_Connect_LabelsAngleChanged(QAbstractAxis* self, intptr_t slot);
void QAbstractAxis_GridLinePenChanged(QAbstractAxis* self, QPen* pen);
void QAbstractAxis_Connect_GridLinePenChanged(QAbstractAxis* self, intptr_t slot);
void QAbstractAxis_GridVisibleChanged(QAbstractAxis* self, bool visible);
void QAbstractAxis_Connect_GridVisibleChanged(QAbstractAxis* self, intptr_t slot);
void QAbstractAxis_MinorGridVisibleChanged(QAbstractAxis* self, bool visible);
void QAbstractAxis_Connect_MinorGridVisibleChanged(QAbstractAxis* self, intptr_t slot);
void QAbstractAxis_MinorGridLinePenChanged(QAbstractAxis* self, QPen* pen);
void QAbstractAxis_Connect_MinorGridLinePenChanged(QAbstractAxis* self, intptr_t slot);
void QAbstractAxis_GridLineColorChanged(QAbstractAxis* self, QColor* color);
void QAbstractAxis_Connect_GridLineColorChanged(QAbstractAxis* self, intptr_t slot);
void QAbstractAxis_MinorGridLineColorChanged(QAbstractAxis* self, QColor* color);
void QAbstractAxis_Connect_MinorGridLineColorChanged(QAbstractAxis* self, intptr_t slot);
void QAbstractAxis_ColorChanged(QAbstractAxis* self, QColor* color);
void QAbstractAxis_Connect_ColorChanged(QAbstractAxis* self, intptr_t slot);
void QAbstractAxis_LabelsColorChanged(QAbstractAxis* self, QColor* color);
void QAbstractAxis_Connect_LabelsColorChanged(QAbstractAxis* self, intptr_t slot);
void QAbstractAxis_TitleTextChanged(QAbstractAxis* self, libqt_string title);
void QAbstractAxis_Connect_TitleTextChanged(QAbstractAxis* self, intptr_t slot);
void QAbstractAxis_TitleBrushChanged(QAbstractAxis* self, QBrush* brush);
void QAbstractAxis_Connect_TitleBrushChanged(QAbstractAxis* self, intptr_t slot);
void QAbstractAxis_TitleVisibleChanged(QAbstractAxis* self, bool visible);
void QAbstractAxis_Connect_TitleVisibleChanged(QAbstractAxis* self, intptr_t slot);
void QAbstractAxis_TitleFontChanged(QAbstractAxis* self, QFont* font);
void QAbstractAxis_Connect_TitleFontChanged(QAbstractAxis* self, intptr_t slot);
void QAbstractAxis_ShadesVisibleChanged(QAbstractAxis* self, bool visible);
void QAbstractAxis_Connect_ShadesVisibleChanged(QAbstractAxis* self, intptr_t slot);
void QAbstractAxis_ShadesColorChanged(QAbstractAxis* self, QColor* color);
void QAbstractAxis_Connect_ShadesColorChanged(QAbstractAxis* self, intptr_t slot);
void QAbstractAxis_ShadesBorderColorChanged(QAbstractAxis* self, QColor* color);
void QAbstractAxis_Connect_ShadesBorderColorChanged(QAbstractAxis* self, intptr_t slot);
void QAbstractAxis_ShadesPenChanged(QAbstractAxis* self, QPen* pen);
void QAbstractAxis_Connect_ShadesPenChanged(QAbstractAxis* self, intptr_t slot);
void QAbstractAxis_ShadesBrushChanged(QAbstractAxis* self, QBrush* brush);
void QAbstractAxis_Connect_ShadesBrushChanged(QAbstractAxis* self, intptr_t slot);
void QAbstractAxis_ReverseChanged(QAbstractAxis* self, bool reverse);
void QAbstractAxis_Connect_ReverseChanged(QAbstractAxis* self, intptr_t slot);
void QAbstractAxis_LabelsEditableChanged(QAbstractAxis* self, bool editable);
void QAbstractAxis_Connect_LabelsEditableChanged(QAbstractAxis* self, intptr_t slot);
void QAbstractAxis_LabelsTruncatedChanged(QAbstractAxis* self, bool labelsTruncated);
void QAbstractAxis_Connect_LabelsTruncatedChanged(QAbstractAxis* self, intptr_t slot);
void QAbstractAxis_TruncateLabelsChanged(QAbstractAxis* self, bool truncateLabels);
void QAbstractAxis_Connect_TruncateLabelsChanged(QAbstractAxis* self, intptr_t slot);
libqt_string QAbstractAxis_Tr2(const char* s, const char* c);
libqt_string QAbstractAxis_Tr3(const char* s, const char* c, int n);
void QAbstractAxis_SetVisible1(QAbstractAxis* self, bool visible);
void QAbstractAxis_SetLineVisible1(QAbstractAxis* self, bool visible);
void QAbstractAxis_SetGridLineVisible1(QAbstractAxis* self, bool visible);
void QAbstractAxis_SetMinorGridLineVisible1(QAbstractAxis* self, bool visible);
void QAbstractAxis_SetLabelsVisible1(QAbstractAxis* self, bool visible);
void QAbstractAxis_SetTitleVisible1(QAbstractAxis* self, bool visible);
void QAbstractAxis_SetShadesVisible1(QAbstractAxis* self, bool visible);
void QAbstractAxis_SetReverse1(QAbstractAxis* self, bool reverse);
void QAbstractAxis_SetLabelsEditable1(QAbstractAxis* self, bool editable);
void QAbstractAxis_SetTruncateLabels1(QAbstractAxis* self, bool truncateLabels);
bool QAbstractAxis_Event(QAbstractAxis* self, QEvent* event);
bool QAbstractAxis_EventFilter(QAbstractAxis* self, QObject* watched, QEvent* event);
void QAbstractAxis_Delete(QAbstractAxis* self);

#ifdef __cplusplus
} /* extern C */
#endif 

#endif
