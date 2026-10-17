#pragma once
#ifndef RESTRICTED_EXTRAS_DATAVIS_LIBQABSTRACT3DGRAPH_H
#define RESTRICTED_EXTRAS_DATAVIS_LIBQABSTRACT3DGRAPH_H

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
#else
typedef struct Q3DScene Q3DScene;
typedef struct Q3DTheme Q3DTheme;
typedef struct QAbstract3DAxis QAbstract3DAxis;
typedef struct QAbstract3DGraph QAbstract3DGraph;
typedef struct QAbstract3DInputHandler QAbstract3DInputHandler;
typedef struct QAbstract3DSeries QAbstract3DSeries;
typedef struct QCustom3DItem QCustom3DItem;
typedef struct QEvent QEvent;
typedef struct QExposeEvent QExposeEvent;
typedef struct QImage QImage;
typedef struct QLocale QLocale;
typedef struct QMetaMethod QMetaMethod;
typedef struct QMetaObject QMetaObject;
typedef struct QMouseEvent QMouseEvent;
typedef struct QObject QObject;
typedef struct QResizeEvent QResizeEvent;
typedef struct QSize QSize;
typedef struct QSurface QSurface;
typedef struct QTouchEvent QTouchEvent;
typedef struct QVector3D QVector3D;
typedef struct QWheelEvent QWheelEvent;
typedef struct QWindow QWindow;
#endif

QMetaObject* QAbstract3DGraph_MetaObject(const QAbstract3DGraph* self);
void* QAbstract3DGraph_Metacast(QAbstract3DGraph* self, const char* param1);
int QAbstract3DGraph_Metacall(QAbstract3DGraph* self, int param1, int param2, void** param3);
libqt_string QAbstract3DGraph_Tr(const char* s);
void QAbstract3DGraph_AddInputHandler(QAbstract3DGraph* self, QAbstract3DInputHandler* inputHandler);
void QAbstract3DGraph_ReleaseInputHandler(QAbstract3DGraph* self, QAbstract3DInputHandler* inputHandler);
void QAbstract3DGraph_SetActiveInputHandler(QAbstract3DGraph* self, QAbstract3DInputHandler* inputHandler);
QAbstract3DInputHandler* QAbstract3DGraph_ActiveInputHandler(const QAbstract3DGraph* self);
libqt_list /* of QAbstract3DInputHandler* */ QAbstract3DGraph_InputHandlers(const QAbstract3DGraph* self);
void QAbstract3DGraph_AddTheme(QAbstract3DGraph* self, Q3DTheme* theme);
void QAbstract3DGraph_ReleaseTheme(QAbstract3DGraph* self, Q3DTheme* theme);
void QAbstract3DGraph_SetActiveTheme(QAbstract3DGraph* self, Q3DTheme* theme);
Q3DTheme* QAbstract3DGraph_ActiveTheme(const QAbstract3DGraph* self);
libqt_list /* of Q3DTheme* */ QAbstract3DGraph_Themes(const QAbstract3DGraph* self);
void QAbstract3DGraph_SetSelectionMode(QAbstract3DGraph* self, int mode);
int QAbstract3DGraph_SelectionMode(const QAbstract3DGraph* self);
void QAbstract3DGraph_SetShadowQuality(QAbstract3DGraph* self, int quality);
int QAbstract3DGraph_ShadowQuality(const QAbstract3DGraph* self);
bool QAbstract3DGraph_ShadowsSupported(const QAbstract3DGraph* self);
Q3DScene* QAbstract3DGraph_Scene(const QAbstract3DGraph* self);
void QAbstract3DGraph_ClearSelection(QAbstract3DGraph* self);
bool QAbstract3DGraph_HasSeries(const QAbstract3DGraph* self, QAbstract3DSeries* series);
int QAbstract3DGraph_AddCustomItem(QAbstract3DGraph* self, QCustom3DItem* item);
void QAbstract3DGraph_RemoveCustomItems(QAbstract3DGraph* self);
void QAbstract3DGraph_RemoveCustomItem(QAbstract3DGraph* self, QCustom3DItem* item);
void QAbstract3DGraph_RemoveCustomItemAt(QAbstract3DGraph* self, const QVector3D* position);
void QAbstract3DGraph_ReleaseCustomItem(QAbstract3DGraph* self, QCustom3DItem* item);
libqt_list /* of QCustom3DItem* */ QAbstract3DGraph_CustomItems(const QAbstract3DGraph* self);
int QAbstract3DGraph_SelectedLabelIndex(const QAbstract3DGraph* self);
QAbstract3DAxis* QAbstract3DGraph_SelectedAxis(const QAbstract3DGraph* self);
int QAbstract3DGraph_SelectedCustomItemIndex(const QAbstract3DGraph* self);
QCustom3DItem* QAbstract3DGraph_SelectedCustomItem(const QAbstract3DGraph* self);
QImage* QAbstract3DGraph_RenderToImage(QAbstract3DGraph* self);
void QAbstract3DGraph_SetMeasureFps(QAbstract3DGraph* self, bool enable);
bool QAbstract3DGraph_MeasureFps(const QAbstract3DGraph* self);
double QAbstract3DGraph_CurrentFps(const QAbstract3DGraph* self);
void QAbstract3DGraph_SetOrthoProjection(QAbstract3DGraph* self, bool enable);
bool QAbstract3DGraph_IsOrthoProjection(const QAbstract3DGraph* self);
int QAbstract3DGraph_SelectedElement(const QAbstract3DGraph* self);
void QAbstract3DGraph_SetAspectRatio(QAbstract3DGraph* self, double ratio);
double QAbstract3DGraph_AspectRatio(const QAbstract3DGraph* self);
void QAbstract3DGraph_SetOptimizationHints(QAbstract3DGraph* self, int hints);
int QAbstract3DGraph_OptimizationHints(const QAbstract3DGraph* self);
void QAbstract3DGraph_SetPolar(QAbstract3DGraph* self, bool enable);
bool QAbstract3DGraph_IsPolar(const QAbstract3DGraph* self);
void QAbstract3DGraph_SetRadialLabelOffset(QAbstract3DGraph* self, float offset);
float QAbstract3DGraph_RadialLabelOffset(const QAbstract3DGraph* self);
void QAbstract3DGraph_SetHorizontalAspectRatio(QAbstract3DGraph* self, double ratio);
double QAbstract3DGraph_HorizontalAspectRatio(const QAbstract3DGraph* self);
void QAbstract3DGraph_SetReflection(QAbstract3DGraph* self, bool enable);
bool QAbstract3DGraph_IsReflection(const QAbstract3DGraph* self);
void QAbstract3DGraph_SetReflectivity(QAbstract3DGraph* self, double reflectivity);
double QAbstract3DGraph_Reflectivity(const QAbstract3DGraph* self);
void QAbstract3DGraph_SetLocale(QAbstract3DGraph* self, const QLocale* locale);
QLocale* QAbstract3DGraph_Locale(const QAbstract3DGraph* self);
QVector3D* QAbstract3DGraph_QueriedGraphPosition(const QAbstract3DGraph* self);
void QAbstract3DGraph_SetMargin(QAbstract3DGraph* self, double margin);
double QAbstract3DGraph_Margin(const QAbstract3DGraph* self);
bool QAbstract3DGraph_HasContext(const QAbstract3DGraph* self);
void QAbstract3DGraph_ActiveInputHandlerChanged(QAbstract3DGraph* self, QAbstract3DInputHandler* inputHandler);
void QAbstract3DGraph_Connect_ActiveInputHandlerChanged(QAbstract3DGraph* self, intptr_t slot);
void QAbstract3DGraph_ActiveThemeChanged(QAbstract3DGraph* self, Q3DTheme* theme);
void QAbstract3DGraph_Connect_ActiveThemeChanged(QAbstract3DGraph* self, intptr_t slot);
void QAbstract3DGraph_SelectionModeChanged(QAbstract3DGraph* self, int mode);
void QAbstract3DGraph_Connect_SelectionModeChanged(QAbstract3DGraph* self, intptr_t slot);
void QAbstract3DGraph_ShadowQualityChanged(QAbstract3DGraph* self, int quality);
void QAbstract3DGraph_Connect_ShadowQualityChanged(QAbstract3DGraph* self, intptr_t slot);
void QAbstract3DGraph_SelectedElementChanged(QAbstract3DGraph* self, int typeVal);
void QAbstract3DGraph_Connect_SelectedElementChanged(QAbstract3DGraph* self, intptr_t slot);
void QAbstract3DGraph_MeasureFpsChanged(QAbstract3DGraph* self, bool enabled);
void QAbstract3DGraph_Connect_MeasureFpsChanged(QAbstract3DGraph* self, intptr_t slot);
void QAbstract3DGraph_CurrentFpsChanged(QAbstract3DGraph* self, double fps);
void QAbstract3DGraph_Connect_CurrentFpsChanged(QAbstract3DGraph* self, intptr_t slot);
void QAbstract3DGraph_OrthoProjectionChanged(QAbstract3DGraph* self, bool enabled);
void QAbstract3DGraph_Connect_OrthoProjectionChanged(QAbstract3DGraph* self, intptr_t slot);
void QAbstract3DGraph_AspectRatioChanged(QAbstract3DGraph* self, double ratio);
void QAbstract3DGraph_Connect_AspectRatioChanged(QAbstract3DGraph* self, intptr_t slot);
void QAbstract3DGraph_OptimizationHintsChanged(QAbstract3DGraph* self, int hints);
void QAbstract3DGraph_Connect_OptimizationHintsChanged(QAbstract3DGraph* self, intptr_t slot);
void QAbstract3DGraph_PolarChanged(QAbstract3DGraph* self, bool enabled);
void QAbstract3DGraph_Connect_PolarChanged(QAbstract3DGraph* self, intptr_t slot);
void QAbstract3DGraph_RadialLabelOffsetChanged(QAbstract3DGraph* self, float offset);
void QAbstract3DGraph_Connect_RadialLabelOffsetChanged(QAbstract3DGraph* self, intptr_t slot);
void QAbstract3DGraph_HorizontalAspectRatioChanged(QAbstract3DGraph* self, double ratio);
void QAbstract3DGraph_Connect_HorizontalAspectRatioChanged(QAbstract3DGraph* self, intptr_t slot);
void QAbstract3DGraph_ReflectionChanged(QAbstract3DGraph* self, bool enabled);
void QAbstract3DGraph_Connect_ReflectionChanged(QAbstract3DGraph* self, intptr_t slot);
void QAbstract3DGraph_ReflectivityChanged(QAbstract3DGraph* self, double reflectivity);
void QAbstract3DGraph_Connect_ReflectivityChanged(QAbstract3DGraph* self, intptr_t slot);
void QAbstract3DGraph_LocaleChanged(QAbstract3DGraph* self, const QLocale* locale);
void QAbstract3DGraph_Connect_LocaleChanged(QAbstract3DGraph* self, intptr_t slot);
void QAbstract3DGraph_QueriedGraphPositionChanged(QAbstract3DGraph* self, const QVector3D* data);
void QAbstract3DGraph_Connect_QueriedGraphPositionChanged(QAbstract3DGraph* self, intptr_t slot);
void QAbstract3DGraph_MarginChanged(QAbstract3DGraph* self, double margin);
void QAbstract3DGraph_Connect_MarginChanged(QAbstract3DGraph* self, intptr_t slot);
libqt_string QAbstract3DGraph_Tr2(const char* s, const char* c);
libqt_string QAbstract3DGraph_Tr3(const char* s, const char* c, int n);
QImage* QAbstract3DGraph_RenderToImage1(QAbstract3DGraph* self, int msaaSamples);
QImage* QAbstract3DGraph_RenderToImage2(QAbstract3DGraph* self, int msaaSamples, const QSize* imageSize);
void QAbstract3DGraph_Delete(QAbstract3DGraph* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
