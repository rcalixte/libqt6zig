#pragma once
#ifndef RESTRICTED_EXTRAS_DATAVIS_LIBQABSTRACT3DAXIS_H
#define RESTRICTED_EXTRAS_DATAVIS_LIBQABSTRACT3DAXIS_H

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
#else
typedef struct QAbstract3DAxis QAbstract3DAxis;
typedef struct QMetaMethod QMetaMethod;
typedef struct QMetaObject QMetaObject;
typedef struct QObject QObject;
#endif

QMetaObject* QAbstract3DAxis_MetaObject(const QAbstract3DAxis* self);
void* QAbstract3DAxis_Metacast(QAbstract3DAxis* self, const char* param1);
int QAbstract3DAxis_Metacall(QAbstract3DAxis* self, int param1, int param2, void** param3);
libqt_string QAbstract3DAxis_Tr(const char* s);
void QAbstract3DAxis_SetTitle(QAbstract3DAxis* self, const libqt_string title);
libqt_string QAbstract3DAxis_Title(const QAbstract3DAxis* self);
void QAbstract3DAxis_SetLabels(QAbstract3DAxis* self, const libqt_list /* of libqt_string */ labels);
libqt_list /* of libqt_string */ QAbstract3DAxis_Labels(const QAbstract3DAxis* self);
int QAbstract3DAxis_Orientation(const QAbstract3DAxis* self);
int QAbstract3DAxis_Type(const QAbstract3DAxis* self);
void QAbstract3DAxis_SetMin(QAbstract3DAxis* self, float min);
float QAbstract3DAxis_Min(const QAbstract3DAxis* self);
void QAbstract3DAxis_SetMax(QAbstract3DAxis* self, float max);
float QAbstract3DAxis_Max(const QAbstract3DAxis* self);
void QAbstract3DAxis_SetAutoAdjustRange(QAbstract3DAxis* self, bool autoAdjust);
bool QAbstract3DAxis_IsAutoAdjustRange(const QAbstract3DAxis* self);
void QAbstract3DAxis_SetRange(QAbstract3DAxis* self, float min, float max);
void QAbstract3DAxis_SetLabelAutoRotation(QAbstract3DAxis* self, float angle);
float QAbstract3DAxis_LabelAutoRotation(const QAbstract3DAxis* self);
void QAbstract3DAxis_SetTitleVisible(QAbstract3DAxis* self, bool visible);
bool QAbstract3DAxis_IsTitleVisible(const QAbstract3DAxis* self);
void QAbstract3DAxis_SetTitleFixed(QAbstract3DAxis* self, bool fixed);
bool QAbstract3DAxis_IsTitleFixed(const QAbstract3DAxis* self);
void QAbstract3DAxis_TitleChanged(QAbstract3DAxis* self, const libqt_string newTitle);
void QAbstract3DAxis_Connect_TitleChanged(QAbstract3DAxis* self, intptr_t slot);
void QAbstract3DAxis_LabelsChanged(QAbstract3DAxis* self);
void QAbstract3DAxis_Connect_LabelsChanged(QAbstract3DAxis* self, intptr_t slot);
void QAbstract3DAxis_OrientationChanged(QAbstract3DAxis* self, int orientation);
void QAbstract3DAxis_Connect_OrientationChanged(QAbstract3DAxis* self, intptr_t slot);
void QAbstract3DAxis_MinChanged(QAbstract3DAxis* self, float value);
void QAbstract3DAxis_Connect_MinChanged(QAbstract3DAxis* self, intptr_t slot);
void QAbstract3DAxis_MaxChanged(QAbstract3DAxis* self, float value);
void QAbstract3DAxis_Connect_MaxChanged(QAbstract3DAxis* self, intptr_t slot);
void QAbstract3DAxis_RangeChanged(QAbstract3DAxis* self, float min, float max);
void QAbstract3DAxis_Connect_RangeChanged(QAbstract3DAxis* self, intptr_t slot);
void QAbstract3DAxis_AutoAdjustRangeChanged(QAbstract3DAxis* self, bool autoAdjust);
void QAbstract3DAxis_Connect_AutoAdjustRangeChanged(QAbstract3DAxis* self, intptr_t slot);
void QAbstract3DAxis_LabelAutoRotationChanged(QAbstract3DAxis* self, float angle);
void QAbstract3DAxis_Connect_LabelAutoRotationChanged(QAbstract3DAxis* self, intptr_t slot);
void QAbstract3DAxis_TitleVisibilityChanged(QAbstract3DAxis* self, bool visible);
void QAbstract3DAxis_Connect_TitleVisibilityChanged(QAbstract3DAxis* self, intptr_t slot);
void QAbstract3DAxis_TitleFixedChanged(QAbstract3DAxis* self, bool fixed);
void QAbstract3DAxis_Connect_TitleFixedChanged(QAbstract3DAxis* self, intptr_t slot);
libqt_string QAbstract3DAxis_Tr2(const char* s, const char* c);
libqt_string QAbstract3DAxis_Tr3(const char* s, const char* c, int n);
void QAbstract3DAxis_Delete(QAbstract3DAxis* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
