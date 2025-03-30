#pragma once
#ifndef SRC_CHARTSC_LIBQXYSERIES_H
#define SRC_CHARTSC_LIBQXYSERIES_H

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
typedef struct QAbstractSeries QAbstractSeries;
typedef struct QAnyStringView QAnyStringView;
typedef struct QBindingStorage QBindingStorage;
typedef struct QBrush QBrush;
typedef struct QChart QChart;
typedef struct QChildEvent QChildEvent;
typedef struct QColor QColor;
typedef struct QEvent QEvent;
typedef struct QFont QFont;
typedef struct QImage QImage;
typedef struct QLinearGradient QLinearGradient;
typedef struct QMetaMethod QMetaMethod;
typedef struct QMetaObject QMetaObject;
typedef struct QMetaObject__Connection QMetaObject__Connection;
typedef struct QObject QObject;
typedef struct QPen QPen;
typedef struct QPointF QPointF;
typedef struct QThread QThread;
typedef struct QTimerEvent QTimerEvent;
typedef struct QVariant QVariant;
typedef struct QXYSeries QXYSeries;
#endif

#ifdef __cplusplus
typedef QXYSeries::PointConfiguration PointConfiguration; // C++ enum
#else
typedef int PointConfiguration; // C ABI enum
#endif

QMetaObject* QXYSeries_MetaObject(const QXYSeries* self);
void* QXYSeries_Metacast(QXYSeries* self, const char* param1);
int QXYSeries_Metacall(QXYSeries* self, int param1, int param2, void** param3);
libqt_string QXYSeries_Tr(const char* s);
void QXYSeries_Append(QXYSeries* self, double x, double y);
void QXYSeries_AppendWithPoint(QXYSeries* self, QPointF* point);
void QXYSeries_AppendWithPoints(QXYSeries* self, libqt_list /* of QPointF* */ points);
void QXYSeries_Replace(QXYSeries* self, double oldX, double oldY, double newX, double newY);
void QXYSeries_Replace2(QXYSeries* self, QPointF* oldPoint, QPointF* newPoint);
void QXYSeries_Replace3(QXYSeries* self, int index, double newX, double newY);
void QXYSeries_Replace4(QXYSeries* self, int index, QPointF* newPoint);
void QXYSeries_Remove(QXYSeries* self, double x, double y);
void QXYSeries_RemoveWithPoint(QXYSeries* self, QPointF* point);
void QXYSeries_RemoveWithIndex(QXYSeries* self, int index);
void QXYSeries_RemovePoints(QXYSeries* self, int index, int count);
void QXYSeries_Insert(QXYSeries* self, int index, QPointF* point);
void QXYSeries_Clear(QXYSeries* self);
int QXYSeries_Count(const QXYSeries* self);
libqt_list /* of QPointF* */ QXYSeries_Points(const QXYSeries* self);
libqt_list /* of QPointF* */ QXYSeries_PointsVector(const QXYSeries* self);
QPointF* QXYSeries_At(const QXYSeries* self, int index);
QXYSeries* QXYSeries_OperatorShiftLeft(QXYSeries* self, QPointF* point);
QXYSeries* QXYSeries_OperatorShiftLeftWithPoints(QXYSeries* self, libqt_list /* of QPointF* */ points);
void QXYSeries_SetPen(QXYSeries* self, QPen* pen);
QPen* QXYSeries_Pen(const QXYSeries* self);
void QXYSeries_SetBrush(QXYSeries* self, QBrush* brush);
QBrush* QXYSeries_Brush(const QXYSeries* self);
void QXYSeries_SetColor(QXYSeries* self, QColor* color);
QColor* QXYSeries_Color(const QXYSeries* self);
void QXYSeries_SetSelectedColor(QXYSeries* self, QColor* color);
QColor* QXYSeries_SelectedColor(const QXYSeries* self);
void QXYSeries_SetPointsVisible(QXYSeries* self);
bool QXYSeries_PointsVisible(const QXYSeries* self);
void QXYSeries_SetPointLabelsFormat(QXYSeries* self, libqt_string format);
libqt_string QXYSeries_PointLabelsFormat(const QXYSeries* self);
void QXYSeries_SetPointLabelsVisible(QXYSeries* self);
bool QXYSeries_PointLabelsVisible(const QXYSeries* self);
void QXYSeries_SetPointLabelsFont(QXYSeries* self, QFont* font);
QFont* QXYSeries_PointLabelsFont(const QXYSeries* self);
void QXYSeries_SetPointLabelsColor(QXYSeries* self, QColor* color);
QColor* QXYSeries_PointLabelsColor(const QXYSeries* self);
void QXYSeries_SetPointLabelsClipping(QXYSeries* self);
bool QXYSeries_PointLabelsClipping(const QXYSeries* self);
void QXYSeries_ReplaceWithPoints(QXYSeries* self, libqt_list /* of QPointF* */ points);
bool QXYSeries_IsPointSelected(QXYSeries* self, int index);
void QXYSeries_SelectPoint(QXYSeries* self, int index);
void QXYSeries_DeselectPoint(QXYSeries* self, int index);
void QXYSeries_SetPointSelected(QXYSeries* self, int index, bool selected);
void QXYSeries_SelectAllPoints(QXYSeries* self);
void QXYSeries_DeselectAllPoints(QXYSeries* self);
void QXYSeries_SelectPoints(QXYSeries* self, libqt_list /* of int */ indexes);
void QXYSeries_DeselectPoints(QXYSeries* self, libqt_list /* of int */ indexes);
void QXYSeries_ToggleSelection(QXYSeries* self, libqt_list /* of int */ indexes);
libqt_list /* of int */ QXYSeries_SelectedPoints(const QXYSeries* self);
void QXYSeries_SetLightMarker(QXYSeries* self, QImage* lightMarker);
QImage* QXYSeries_LightMarker(const QXYSeries* self);
void QXYSeries_SetSelectedLightMarker(QXYSeries* self, QImage* selectedLightMarker);
QImage* QXYSeries_SelectedLightMarker(const QXYSeries* self);
void QXYSeries_SetMarkerSize(QXYSeries* self, double size);
double QXYSeries_MarkerSize(const QXYSeries* self);
void QXYSeries_SetBestFitLineVisible(QXYSeries* self);
bool QXYSeries_BestFitLineVisible(const QXYSeries* self);
libqt_pair /* tuple of double and double */ QXYSeries_BestFitLineEquation(const QXYSeries* self, bool* ok);
void QXYSeries_SetBestFitLinePen(QXYSeries* self, QPen* pen);
QPen* QXYSeries_BestFitLinePen(const QXYSeries* self);
void QXYSeries_SetBestFitLineColor(QXYSeries* self, QColor* color);
QColor* QXYSeries_BestFitLineColor(const QXYSeries* self);
void QXYSeries_ClearPointConfiguration(QXYSeries* self, const int index);
void QXYSeries_ClearPointConfiguration2(QXYSeries* self, const int index, int key);
void QXYSeries_ClearPointsConfiguration(QXYSeries* self);
void QXYSeries_ClearPointsConfigurationWithKey(QXYSeries* self, int key);
void QXYSeries_SetPointConfiguration(QXYSeries* self, const int index, libqt_map /* of int to QVariant* */ configuration);
void QXYSeries_SetPointConfiguration2(QXYSeries* self, const int index, int key, QVariant* value);
void QXYSeries_SetPointsConfiguration(QXYSeries* self, libqt_map /* of int to libqt_map  of int to QVariant*  */ pointsConfiguration);
libqt_map /* of int to QVariant* */ QXYSeries_PointConfiguration(const QXYSeries* self, const int index);
libqt_map /* of int to libqt_map  of int to QVariant*  */ QXYSeries_PointsConfiguration(const QXYSeries* self);
void QXYSeries_SizeBy(QXYSeries* self, libqt_list /* of double */ sourceData, const double minSize, const double maxSize);
void QXYSeries_ColorBy(QXYSeries* self, libqt_list /* of double */ sourceData);
void QXYSeries_Clicked(QXYSeries* self, QPointF* point);
void QXYSeries_Connect_Clicked(QXYSeries* self, intptr_t slot);
void QXYSeries_Hovered(QXYSeries* self, QPointF* point, bool state);
void QXYSeries_Connect_Hovered(QXYSeries* self, intptr_t slot);
void QXYSeries_Pressed(QXYSeries* self, QPointF* point);
void QXYSeries_Connect_Pressed(QXYSeries* self, intptr_t slot);
void QXYSeries_Released(QXYSeries* self, QPointF* point);
void QXYSeries_Connect_Released(QXYSeries* self, intptr_t slot);
void QXYSeries_DoubleClicked(QXYSeries* self, QPointF* point);
void QXYSeries_Connect_DoubleClicked(QXYSeries* self, intptr_t slot);
void QXYSeries_PointReplaced(QXYSeries* self, int index);
void QXYSeries_Connect_PointReplaced(QXYSeries* self, intptr_t slot);
void QXYSeries_PointRemoved(QXYSeries* self, int index);
void QXYSeries_Connect_PointRemoved(QXYSeries* self, intptr_t slot);
void QXYSeries_PointAdded(QXYSeries* self, int index);
void QXYSeries_Connect_PointAdded(QXYSeries* self, intptr_t slot);
void QXYSeries_ColorChanged(QXYSeries* self, QColor* color);
void QXYSeries_Connect_ColorChanged(QXYSeries* self, intptr_t slot);
void QXYSeries_SelectedColorChanged(QXYSeries* self, QColor* color);
void QXYSeries_Connect_SelectedColorChanged(QXYSeries* self, intptr_t slot);
void QXYSeries_PointsReplaced(QXYSeries* self);
void QXYSeries_Connect_PointsReplaced(QXYSeries* self, intptr_t slot);
void QXYSeries_PointLabelsFormatChanged(QXYSeries* self, libqt_string format);
void QXYSeries_Connect_PointLabelsFormatChanged(QXYSeries* self, intptr_t slot);
void QXYSeries_PointLabelsVisibilityChanged(QXYSeries* self, bool visible);
void QXYSeries_Connect_PointLabelsVisibilityChanged(QXYSeries* self, intptr_t slot);
void QXYSeries_PointLabelsFontChanged(QXYSeries* self, QFont* font);
void QXYSeries_Connect_PointLabelsFontChanged(QXYSeries* self, intptr_t slot);
void QXYSeries_PointLabelsColorChanged(QXYSeries* self, QColor* color);
void QXYSeries_Connect_PointLabelsColorChanged(QXYSeries* self, intptr_t slot);
void QXYSeries_PointLabelsClippingChanged(QXYSeries* self, bool clipping);
void QXYSeries_Connect_PointLabelsClippingChanged(QXYSeries* self, intptr_t slot);
void QXYSeries_PointsRemoved(QXYSeries* self, int index, int count);
void QXYSeries_Connect_PointsRemoved(QXYSeries* self, intptr_t slot);
void QXYSeries_PenChanged(QXYSeries* self, QPen* pen);
void QXYSeries_Connect_PenChanged(QXYSeries* self, intptr_t slot);
void QXYSeries_SelectedPointsChanged(QXYSeries* self);
void QXYSeries_Connect_SelectedPointsChanged(QXYSeries* self, intptr_t slot);
void QXYSeries_LightMarkerChanged(QXYSeries* self, QImage* lightMarker);
void QXYSeries_Connect_LightMarkerChanged(QXYSeries* self, intptr_t slot);
void QXYSeries_SelectedLightMarkerChanged(QXYSeries* self, QImage* selectedLightMarker);
void QXYSeries_Connect_SelectedLightMarkerChanged(QXYSeries* self, intptr_t slot);
void QXYSeries_BestFitLineVisibilityChanged(QXYSeries* self, bool visible);
void QXYSeries_Connect_BestFitLineVisibilityChanged(QXYSeries* self, intptr_t slot);
void QXYSeries_BestFitLinePenChanged(QXYSeries* self, QPen* pen);
void QXYSeries_Connect_BestFitLinePenChanged(QXYSeries* self, intptr_t slot);
void QXYSeries_BestFitLineColorChanged(QXYSeries* self, QColor* color);
void QXYSeries_Connect_BestFitLineColorChanged(QXYSeries* self, intptr_t slot);
void QXYSeries_PointsConfigurationChanged(QXYSeries* self, libqt_map /* of int to libqt_map  of int to QVariant*  */ configuration);
void QXYSeries_Connect_PointsConfigurationChanged(QXYSeries* self, intptr_t slot);
void QXYSeries_MarkerSizeChanged(QXYSeries* self, double size);
void QXYSeries_Connect_MarkerSizeChanged(QXYSeries* self, intptr_t slot);
libqt_string QXYSeries_Tr2(const char* s, const char* c);
libqt_string QXYSeries_Tr3(const char* s, const char* c, int n);
void QXYSeries_SetPointsVisible1(QXYSeries* self, bool visible);
void QXYSeries_SetPointLabelsVisible1(QXYSeries* self, bool visible);
void QXYSeries_SetPointLabelsClipping1(QXYSeries* self, bool enabled);
void QXYSeries_SetBestFitLineVisible1(QXYSeries* self, bool visible);
void QXYSeries_ColorBy2(QXYSeries* self, libqt_list /* of double */ sourceData, QLinearGradient* gradient);
int QXYSeries_Type(const QXYSeries* self);
bool QXYSeries_Event(QXYSeries* self, QEvent* event);
bool QXYSeries_EventFilter(QXYSeries* self, QObject* watched, QEvent* event);
void QXYSeries_Delete(QXYSeries* self);

#ifdef __cplusplus
} /* extern C */
#endif 

#endif
