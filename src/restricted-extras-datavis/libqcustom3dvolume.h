#pragma once
#ifndef RESTRICTED_EXTRAS_DATAVIS_LIBQCUSTOM3DVOLUME_H
#define RESTRICTED_EXTRAS_DATAVIS_LIBQCUSTOM3DVOLUME_H

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
#else
typedef struct QChildEvent QChildEvent;
typedef struct QColor QColor;
typedef struct QCustom3DItem QCustom3DItem;
typedef struct QCustom3DVolume QCustom3DVolume;
typedef struct QEvent QEvent;
typedef struct QImage QImage;
typedef struct QMetaMethod QMetaMethod;
typedef struct QMetaObject QMetaObject;
typedef struct QObject QObject;
typedef struct QQuaternion QQuaternion;
typedef struct QTimerEvent QTimerEvent;
typedef struct QVector3D QVector3D;
#endif

QCustom3DVolume* QCustom3DVolume_new();
QCustom3DVolume* QCustom3DVolume_new2(const QVector3D* position, const QVector3D* scaling, const QQuaternion* rotation, int textureWidth, int textureHeight, int textureDepth, libqt_list /* of unsigned char */ textureData, int textureFormat, const libqt_list /* of unsigned int */ colorTable);
QCustom3DVolume* QCustom3DVolume_new3(QObject* parent);
QCustom3DVolume* QCustom3DVolume_new4(const QVector3D* position, const QVector3D* scaling, const QQuaternion* rotation, int textureWidth, int textureHeight, int textureDepth, libqt_list /* of unsigned char */ textureData, int textureFormat, const libqt_list /* of unsigned int */ colorTable, QObject* parent);
QMetaObject* QCustom3DVolume_MetaObject(const QCustom3DVolume* self);
void* QCustom3DVolume_Metacast(QCustom3DVolume* self, const char* param1);
int QCustom3DVolume_Metacall(QCustom3DVolume* self, int param1, int param2, void** param3);
libqt_string QCustom3DVolume_Tr(const char* s);
void QCustom3DVolume_SetTextureWidth(QCustom3DVolume* self, int value);
int QCustom3DVolume_TextureWidth(const QCustom3DVolume* self);
void QCustom3DVolume_SetTextureHeight(QCustom3DVolume* self, int value);
int QCustom3DVolume_TextureHeight(const QCustom3DVolume* self);
void QCustom3DVolume_SetTextureDepth(QCustom3DVolume* self, int value);
int QCustom3DVolume_TextureDepth(const QCustom3DVolume* self);
void QCustom3DVolume_SetTextureDimensions(QCustom3DVolume* self, int width, int height, int depth);
int QCustom3DVolume_TextureDataWidth(const QCustom3DVolume* self);
void QCustom3DVolume_SetSliceIndexX(QCustom3DVolume* self, int value);
int QCustom3DVolume_SliceIndexX(const QCustom3DVolume* self);
void QCustom3DVolume_SetSliceIndexY(QCustom3DVolume* self, int value);
int QCustom3DVolume_SliceIndexY(const QCustom3DVolume* self);
void QCustom3DVolume_SetSliceIndexZ(QCustom3DVolume* self, int value);
int QCustom3DVolume_SliceIndexZ(const QCustom3DVolume* self);
void QCustom3DVolume_SetSliceIndices(QCustom3DVolume* self, int x, int y, int z);
void QCustom3DVolume_SetColorTable(QCustom3DVolume* self, const libqt_list /* of unsigned int */ colors);
libqt_list /* of unsigned int */ QCustom3DVolume_ColorTable(const QCustom3DVolume* self);
void QCustom3DVolume_SetTextureData(QCustom3DVolume* self, libqt_list /* of unsigned char */ data);
libqt_list /* of unsigned char */ QCustom3DVolume_CreateTextureData(QCustom3DVolume* self, const libqt_list /* of QImage* */ images);
libqt_list /* of unsigned char */ QCustom3DVolume_TextureData(const QCustom3DVolume* self);
void QCustom3DVolume_SetSubTextureData(QCustom3DVolume* self, int axis, int index, const unsigned char* data);
void QCustom3DVolume_SetSubTextureData2(QCustom3DVolume* self, int axis, int index, const QImage* image);
void QCustom3DVolume_SetTextureFormat(QCustom3DVolume* self, int format);
int QCustom3DVolume_TextureFormat(const QCustom3DVolume* self);
void QCustom3DVolume_SetAlphaMultiplier(QCustom3DVolume* self, float mult);
float QCustom3DVolume_AlphaMultiplier(const QCustom3DVolume* self);
void QCustom3DVolume_SetPreserveOpacity(QCustom3DVolume* self, bool enable);
bool QCustom3DVolume_PreserveOpacity(const QCustom3DVolume* self);
void QCustom3DVolume_SetUseHighDefShader(QCustom3DVolume* self, bool enable);
bool QCustom3DVolume_UseHighDefShader(const QCustom3DVolume* self);
void QCustom3DVolume_SetDrawSlices(QCustom3DVolume* self, bool enable);
bool QCustom3DVolume_DrawSlices(const QCustom3DVolume* self);
void QCustom3DVolume_SetDrawSliceFrames(QCustom3DVolume* self, bool enable);
bool QCustom3DVolume_DrawSliceFrames(const QCustom3DVolume* self);
void QCustom3DVolume_SetSliceFrameColor(QCustom3DVolume* self, const QColor* color);
QColor* QCustom3DVolume_SliceFrameColor(const QCustom3DVolume* self);
void QCustom3DVolume_SetSliceFrameWidths(QCustom3DVolume* self, const QVector3D* values);
QVector3D* QCustom3DVolume_SliceFrameWidths(const QCustom3DVolume* self);
void QCustom3DVolume_SetSliceFrameGaps(QCustom3DVolume* self, const QVector3D* values);
QVector3D* QCustom3DVolume_SliceFrameGaps(const QCustom3DVolume* self);
void QCustom3DVolume_SetSliceFrameThicknesses(QCustom3DVolume* self, const QVector3D* values);
QVector3D* QCustom3DVolume_SliceFrameThicknesses(const QCustom3DVolume* self);
QImage* QCustom3DVolume_RenderSlice(QCustom3DVolume* self, int axis, int index);
void QCustom3DVolume_TextureWidthChanged(QCustom3DVolume* self, int value);
void QCustom3DVolume_Connect_TextureWidthChanged(QCustom3DVolume* self, intptr_t slot);
void QCustom3DVolume_TextureHeightChanged(QCustom3DVolume* self, int value);
void QCustom3DVolume_Connect_TextureHeightChanged(QCustom3DVolume* self, intptr_t slot);
void QCustom3DVolume_TextureDepthChanged(QCustom3DVolume* self, int value);
void QCustom3DVolume_Connect_TextureDepthChanged(QCustom3DVolume* self, intptr_t slot);
void QCustom3DVolume_SliceIndexXChanged(QCustom3DVolume* self, int value);
void QCustom3DVolume_Connect_SliceIndexXChanged(QCustom3DVolume* self, intptr_t slot);
void QCustom3DVolume_SliceIndexYChanged(QCustom3DVolume* self, int value);
void QCustom3DVolume_Connect_SliceIndexYChanged(QCustom3DVolume* self, intptr_t slot);
void QCustom3DVolume_SliceIndexZChanged(QCustom3DVolume* self, int value);
void QCustom3DVolume_Connect_SliceIndexZChanged(QCustom3DVolume* self, intptr_t slot);
void QCustom3DVolume_ColorTableChanged(QCustom3DVolume* self);
void QCustom3DVolume_Connect_ColorTableChanged(QCustom3DVolume* self, intptr_t slot);
void QCustom3DVolume_TextureDataChanged(QCustom3DVolume* self, libqt_list /* of unsigned char */ data);
void QCustom3DVolume_Connect_TextureDataChanged(QCustom3DVolume* self, intptr_t slot);
void QCustom3DVolume_TextureFormatChanged(QCustom3DVolume* self, int format);
void QCustom3DVolume_Connect_TextureFormatChanged(QCustom3DVolume* self, intptr_t slot);
void QCustom3DVolume_AlphaMultiplierChanged(QCustom3DVolume* self, float mult);
void QCustom3DVolume_Connect_AlphaMultiplierChanged(QCustom3DVolume* self, intptr_t slot);
void QCustom3DVolume_PreserveOpacityChanged(QCustom3DVolume* self, bool enabled);
void QCustom3DVolume_Connect_PreserveOpacityChanged(QCustom3DVolume* self, intptr_t slot);
void QCustom3DVolume_UseHighDefShaderChanged(QCustom3DVolume* self, bool enabled);
void QCustom3DVolume_Connect_UseHighDefShaderChanged(QCustom3DVolume* self, intptr_t slot);
void QCustom3DVolume_DrawSlicesChanged(QCustom3DVolume* self, bool enabled);
void QCustom3DVolume_Connect_DrawSlicesChanged(QCustom3DVolume* self, intptr_t slot);
void QCustom3DVolume_DrawSliceFramesChanged(QCustom3DVolume* self, bool enabled);
void QCustom3DVolume_Connect_DrawSliceFramesChanged(QCustom3DVolume* self, intptr_t slot);
void QCustom3DVolume_SliceFrameColorChanged(QCustom3DVolume* self, const QColor* color);
void QCustom3DVolume_Connect_SliceFrameColorChanged(QCustom3DVolume* self, intptr_t slot);
void QCustom3DVolume_SliceFrameWidthsChanged(QCustom3DVolume* self, const QVector3D* values);
void QCustom3DVolume_Connect_SliceFrameWidthsChanged(QCustom3DVolume* self, intptr_t slot);
void QCustom3DVolume_SliceFrameGapsChanged(QCustom3DVolume* self, const QVector3D* values);
void QCustom3DVolume_Connect_SliceFrameGapsChanged(QCustom3DVolume* self, intptr_t slot);
void QCustom3DVolume_SliceFrameThicknessesChanged(QCustom3DVolume* self, const QVector3D* values);
void QCustom3DVolume_Connect_SliceFrameThicknessesChanged(QCustom3DVolume* self, intptr_t slot);
libqt_string QCustom3DVolume_Tr2(const char* s, const char* c);
libqt_string QCustom3DVolume_Tr3(const char* s, const char* c, int n);
void QCustom3DVolume_OnMetaObject(QCustom3DVolume* self, intptr_t slot);
QMetaObject* QCustom3DVolume_SuperMetaObject(const QCustom3DVolume* self);
void QCustom3DVolume_OnMetacast(QCustom3DVolume* self, intptr_t slot);
void* QCustom3DVolume_SuperMetacast(QCustom3DVolume* self, const char* param1);
void QCustom3DVolume_OnMetacall(QCustom3DVolume* self, intptr_t slot);
int QCustom3DVolume_SuperMetacall(QCustom3DVolume* self, int param1, int param2, void** param3);
bool QCustom3DVolume_Event(QCustom3DVolume* self, QEvent* event);
void QCustom3DVolume_OnEvent(QCustom3DVolume* self, intptr_t slot);
bool QCustom3DVolume_SuperEvent(QCustom3DVolume* self, QEvent* event);
bool QCustom3DVolume_EventFilter(QCustom3DVolume* self, QObject* watched, QEvent* event);
void QCustom3DVolume_OnEventFilter(QCustom3DVolume* self, intptr_t slot);
bool QCustom3DVolume_SuperEventFilter(QCustom3DVolume* self, QObject* watched, QEvent* event);
void QCustom3DVolume_TimerEvent(QCustom3DVolume* self, QTimerEvent* event);
void QCustom3DVolume_OnTimerEvent(QCustom3DVolume* self, intptr_t slot);
void QCustom3DVolume_SuperTimerEvent(QCustom3DVolume* self, QTimerEvent* event);
void QCustom3DVolume_ChildEvent(QCustom3DVolume* self, QChildEvent* event);
void QCustom3DVolume_OnChildEvent(QCustom3DVolume* self, intptr_t slot);
void QCustom3DVolume_SuperChildEvent(QCustom3DVolume* self, QChildEvent* event);
void QCustom3DVolume_CustomEvent(QCustom3DVolume* self, QEvent* event);
void QCustom3DVolume_OnCustomEvent(QCustom3DVolume* self, intptr_t slot);
void QCustom3DVolume_SuperCustomEvent(QCustom3DVolume* self, QEvent* event);
void QCustom3DVolume_ConnectNotify(QCustom3DVolume* self, const QMetaMethod* signal);
void QCustom3DVolume_OnConnectNotify(QCustom3DVolume* self, intptr_t slot);
void QCustom3DVolume_SuperConnectNotify(QCustom3DVolume* self, const QMetaMethod* signal);
void QCustom3DVolume_DisconnectNotify(QCustom3DVolume* self, const QMetaMethod* signal);
void QCustom3DVolume_OnDisconnectNotify(QCustom3DVolume* self, intptr_t slot);
void QCustom3DVolume_SuperDisconnectNotify(QCustom3DVolume* self, const QMetaMethod* signal);
QObject* QCustom3DVolume_Sender(const QCustom3DVolume* self);
int QCustom3DVolume_SenderSignalIndex(const QCustom3DVolume* self);
int QCustom3DVolume_Receivers(const QCustom3DVolume* self, const char* signal);
bool QCustom3DVolume_IsSignalConnected(const QCustom3DVolume* self, const QMetaMethod* signal);
void QCustom3DVolume_Delete(QCustom3DVolume* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
