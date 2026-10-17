#pragma once
#ifndef RESTRICTED_EXTRAS_DATAVIS_LIBQABSTRACT3DSERIES_H
#define RESTRICTED_EXTRAS_DATAVIS_LIBQABSTRACT3DSERIES_H

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
#else
typedef struct QAbstract3DSeries QAbstract3DSeries;
typedef struct QColor QColor;
typedef struct QLinearGradient QLinearGradient;
typedef struct QMetaMethod QMetaMethod;
typedef struct QMetaObject QMetaObject;
typedef struct QObject QObject;
typedef struct QQuaternion QQuaternion;
typedef struct QVector3D QVector3D;
#endif

QMetaObject* QAbstract3DSeries_MetaObject(const QAbstract3DSeries* self);
void* QAbstract3DSeries_Metacast(QAbstract3DSeries* self, const char* param1);
int QAbstract3DSeries_Metacall(QAbstract3DSeries* self, int param1, int param2, void** param3);
libqt_string QAbstract3DSeries_Tr(const char* s);
int QAbstract3DSeries_Type(const QAbstract3DSeries* self);
void QAbstract3DSeries_SetItemLabelFormat(QAbstract3DSeries* self, const libqt_string format);
libqt_string QAbstract3DSeries_ItemLabelFormat(const QAbstract3DSeries* self);
void QAbstract3DSeries_SetVisible(QAbstract3DSeries* self, bool visible);
bool QAbstract3DSeries_IsVisible(const QAbstract3DSeries* self);
void QAbstract3DSeries_SetMesh(QAbstract3DSeries* self, int mesh);
int QAbstract3DSeries_Mesh(const QAbstract3DSeries* self);
void QAbstract3DSeries_SetMeshSmooth(QAbstract3DSeries* self, bool enable);
bool QAbstract3DSeries_IsMeshSmooth(const QAbstract3DSeries* self);
void QAbstract3DSeries_SetMeshRotation(QAbstract3DSeries* self, const QQuaternion* rotation);
QQuaternion* QAbstract3DSeries_MeshRotation(const QAbstract3DSeries* self);
void QAbstract3DSeries_SetMeshAxisAndAngle(QAbstract3DSeries* self, const QVector3D* axis, float angle);
void QAbstract3DSeries_SetUserDefinedMesh(QAbstract3DSeries* self, const libqt_string fileName);
libqt_string QAbstract3DSeries_UserDefinedMesh(const QAbstract3DSeries* self);
void QAbstract3DSeries_SetColorStyle(QAbstract3DSeries* self, int style);
int QAbstract3DSeries_ColorStyle(const QAbstract3DSeries* self);
void QAbstract3DSeries_SetBaseColor(QAbstract3DSeries* self, const QColor* color);
QColor* QAbstract3DSeries_BaseColor(const QAbstract3DSeries* self);
void QAbstract3DSeries_SetBaseGradient(QAbstract3DSeries* self, const QLinearGradient* gradient);
QLinearGradient* QAbstract3DSeries_BaseGradient(const QAbstract3DSeries* self);
void QAbstract3DSeries_SetSingleHighlightColor(QAbstract3DSeries* self, const QColor* color);
QColor* QAbstract3DSeries_SingleHighlightColor(const QAbstract3DSeries* self);
void QAbstract3DSeries_SetSingleHighlightGradient(QAbstract3DSeries* self, const QLinearGradient* gradient);
QLinearGradient* QAbstract3DSeries_SingleHighlightGradient(const QAbstract3DSeries* self);
void QAbstract3DSeries_SetMultiHighlightColor(QAbstract3DSeries* self, const QColor* color);
QColor* QAbstract3DSeries_MultiHighlightColor(const QAbstract3DSeries* self);
void QAbstract3DSeries_SetMultiHighlightGradient(QAbstract3DSeries* self, const QLinearGradient* gradient);
QLinearGradient* QAbstract3DSeries_MultiHighlightGradient(const QAbstract3DSeries* self);
void QAbstract3DSeries_SetName(QAbstract3DSeries* self, const libqt_string name);
libqt_string QAbstract3DSeries_Name(const QAbstract3DSeries* self);
libqt_string QAbstract3DSeries_ItemLabel(const QAbstract3DSeries* self);
void QAbstract3DSeries_SetItemLabelVisible(QAbstract3DSeries* self, bool visible);
bool QAbstract3DSeries_IsItemLabelVisible(const QAbstract3DSeries* self);
void QAbstract3DSeries_ItemLabelFormatChanged(QAbstract3DSeries* self, const libqt_string format);
void QAbstract3DSeries_Connect_ItemLabelFormatChanged(QAbstract3DSeries* self, intptr_t slot);
void QAbstract3DSeries_VisibilityChanged(QAbstract3DSeries* self, bool visible);
void QAbstract3DSeries_Connect_VisibilityChanged(QAbstract3DSeries* self, intptr_t slot);
void QAbstract3DSeries_MeshChanged(QAbstract3DSeries* self, int mesh);
void QAbstract3DSeries_Connect_MeshChanged(QAbstract3DSeries* self, intptr_t slot);
void QAbstract3DSeries_MeshSmoothChanged(QAbstract3DSeries* self, bool enabled);
void QAbstract3DSeries_Connect_MeshSmoothChanged(QAbstract3DSeries* self, intptr_t slot);
void QAbstract3DSeries_MeshRotationChanged(QAbstract3DSeries* self, const QQuaternion* rotation);
void QAbstract3DSeries_Connect_MeshRotationChanged(QAbstract3DSeries* self, intptr_t slot);
void QAbstract3DSeries_UserDefinedMeshChanged(QAbstract3DSeries* self, const libqt_string fileName);
void QAbstract3DSeries_Connect_UserDefinedMeshChanged(QAbstract3DSeries* self, intptr_t slot);
void QAbstract3DSeries_ColorStyleChanged(QAbstract3DSeries* self, int style);
void QAbstract3DSeries_Connect_ColorStyleChanged(QAbstract3DSeries* self, intptr_t slot);
void QAbstract3DSeries_BaseColorChanged(QAbstract3DSeries* self, const QColor* color);
void QAbstract3DSeries_Connect_BaseColorChanged(QAbstract3DSeries* self, intptr_t slot);
void QAbstract3DSeries_BaseGradientChanged(QAbstract3DSeries* self, const QLinearGradient* gradient);
void QAbstract3DSeries_Connect_BaseGradientChanged(QAbstract3DSeries* self, intptr_t slot);
void QAbstract3DSeries_SingleHighlightColorChanged(QAbstract3DSeries* self, const QColor* color);
void QAbstract3DSeries_Connect_SingleHighlightColorChanged(QAbstract3DSeries* self, intptr_t slot);
void QAbstract3DSeries_SingleHighlightGradientChanged(QAbstract3DSeries* self, const QLinearGradient* gradient);
void QAbstract3DSeries_Connect_SingleHighlightGradientChanged(QAbstract3DSeries* self, intptr_t slot);
void QAbstract3DSeries_MultiHighlightColorChanged(QAbstract3DSeries* self, const QColor* color);
void QAbstract3DSeries_Connect_MultiHighlightColorChanged(QAbstract3DSeries* self, intptr_t slot);
void QAbstract3DSeries_MultiHighlightGradientChanged(QAbstract3DSeries* self, const QLinearGradient* gradient);
void QAbstract3DSeries_Connect_MultiHighlightGradientChanged(QAbstract3DSeries* self, intptr_t slot);
void QAbstract3DSeries_NameChanged(QAbstract3DSeries* self, const libqt_string name);
void QAbstract3DSeries_Connect_NameChanged(QAbstract3DSeries* self, intptr_t slot);
void QAbstract3DSeries_ItemLabelChanged(QAbstract3DSeries* self, const libqt_string label);
void QAbstract3DSeries_Connect_ItemLabelChanged(QAbstract3DSeries* self, intptr_t slot);
void QAbstract3DSeries_ItemLabelVisibilityChanged(QAbstract3DSeries* self, bool visible);
void QAbstract3DSeries_Connect_ItemLabelVisibilityChanged(QAbstract3DSeries* self, intptr_t slot);
libqt_string QAbstract3DSeries_Tr2(const char* s, const char* c);
libqt_string QAbstract3DSeries_Tr3(const char* s, const char* c, int n);
void QAbstract3DSeries_Delete(QAbstract3DSeries* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
