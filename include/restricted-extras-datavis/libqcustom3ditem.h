#pragma once
#ifndef RESTRICTED_EXTRAS_DATAVIS_LIBQCUSTOM3DITEM_H
#define RESTRICTED_EXTRAS_DATAVIS_LIBQCUSTOM3DITEM_H

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
typedef struct QCustom3DItem QCustom3DItem;
typedef struct QEvent QEvent;
typedef struct QImage QImage;
typedef struct QMetaMethod QMetaMethod;
typedef struct QMetaObject QMetaObject;
typedef struct QObject QObject;
typedef struct QQuaternion QQuaternion;
typedef struct QTimerEvent QTimerEvent;
typedef struct QVector3D QVector3D;
#endif

QCustom3DItem* QCustom3DItem_new();
QCustom3DItem* QCustom3DItem_new2(const libqt_string meshFile, const QVector3D* position, const QVector3D* scaling, const QQuaternion* rotation, const QImage* texture);
QCustom3DItem* QCustom3DItem_new3(QObject* parent);
QCustom3DItem* QCustom3DItem_new4(const libqt_string meshFile, const QVector3D* position, const QVector3D* scaling, const QQuaternion* rotation, const QImage* texture, QObject* parent);
QMetaObject* QCustom3DItem_MetaObject(const QCustom3DItem* self);
void* QCustom3DItem_Metacast(QCustom3DItem* self, const char* param1);
int QCustom3DItem_Metacall(QCustom3DItem* self, int param1, int param2, void** param3);
libqt_string QCustom3DItem_Tr(const char* s);
void QCustom3DItem_SetMeshFile(QCustom3DItem* self, const libqt_string meshFile);
libqt_string QCustom3DItem_MeshFile(const QCustom3DItem* self);
void QCustom3DItem_SetTextureFile(QCustom3DItem* self, const libqt_string textureFile);
libqt_string QCustom3DItem_TextureFile(const QCustom3DItem* self);
void QCustom3DItem_SetPosition(QCustom3DItem* self, const QVector3D* position);
QVector3D* QCustom3DItem_Position(const QCustom3DItem* self);
void QCustom3DItem_SetPositionAbsolute(QCustom3DItem* self, bool positionAbsolute);
bool QCustom3DItem_IsPositionAbsolute(const QCustom3DItem* self);
void QCustom3DItem_SetScaling(QCustom3DItem* self, const QVector3D* scaling);
QVector3D* QCustom3DItem_Scaling(const QCustom3DItem* self);
void QCustom3DItem_SetScalingAbsolute(QCustom3DItem* self, bool scalingAbsolute);
bool QCustom3DItem_IsScalingAbsolute(const QCustom3DItem* self);
void QCustom3DItem_SetRotation(QCustom3DItem* self, const QQuaternion* rotation);
QQuaternion* QCustom3DItem_Rotation(QCustom3DItem* self);
void QCustom3DItem_SetVisible(QCustom3DItem* self, bool visible);
bool QCustom3DItem_IsVisible(const QCustom3DItem* self);
void QCustom3DItem_SetShadowCasting(QCustom3DItem* self, bool enabled);
bool QCustom3DItem_IsShadowCasting(const QCustom3DItem* self);
void QCustom3DItem_SetRotationAxisAndAngle(QCustom3DItem* self, const QVector3D* axis, float angle);
void QCustom3DItem_SetTextureImage(QCustom3DItem* self, const QImage* textureImage);
void QCustom3DItem_MeshFileChanged(QCustom3DItem* self, const libqt_string meshFile);
void QCustom3DItem_Connect_MeshFileChanged(QCustom3DItem* self, intptr_t slot);
void QCustom3DItem_TextureFileChanged(QCustom3DItem* self, const libqt_string textureFile);
void QCustom3DItem_Connect_TextureFileChanged(QCustom3DItem* self, intptr_t slot);
void QCustom3DItem_PositionChanged(QCustom3DItem* self, const QVector3D* position);
void QCustom3DItem_Connect_PositionChanged(QCustom3DItem* self, intptr_t slot);
void QCustom3DItem_PositionAbsoluteChanged(QCustom3DItem* self, bool positionAbsolute);
void QCustom3DItem_Connect_PositionAbsoluteChanged(QCustom3DItem* self, intptr_t slot);
void QCustom3DItem_ScalingChanged(QCustom3DItem* self, const QVector3D* scaling);
void QCustom3DItem_Connect_ScalingChanged(QCustom3DItem* self, intptr_t slot);
void QCustom3DItem_RotationChanged(QCustom3DItem* self, const QQuaternion* rotation);
void QCustom3DItem_Connect_RotationChanged(QCustom3DItem* self, intptr_t slot);
void QCustom3DItem_VisibleChanged(QCustom3DItem* self, bool visible);
void QCustom3DItem_Connect_VisibleChanged(QCustom3DItem* self, intptr_t slot);
void QCustom3DItem_ShadowCastingChanged(QCustom3DItem* self, bool shadowCasting);
void QCustom3DItem_Connect_ShadowCastingChanged(QCustom3DItem* self, intptr_t slot);
void QCustom3DItem_ScalingAbsoluteChanged(QCustom3DItem* self, bool scalingAbsolute);
void QCustom3DItem_Connect_ScalingAbsoluteChanged(QCustom3DItem* self, intptr_t slot);
libqt_string QCustom3DItem_Tr2(const char* s, const char* c);
libqt_string QCustom3DItem_Tr3(const char* s, const char* c, int n);
void QCustom3DItem_OnMetaObject(QCustom3DItem* self, intptr_t slot);
QMetaObject* QCustom3DItem_SuperMetaObject(const QCustom3DItem* self);
void QCustom3DItem_OnMetacast(QCustom3DItem* self, intptr_t slot);
void* QCustom3DItem_SuperMetacast(QCustom3DItem* self, const char* param1);
void QCustom3DItem_OnMetacall(QCustom3DItem* self, intptr_t slot);
int QCustom3DItem_SuperMetacall(QCustom3DItem* self, int param1, int param2, void** param3);
bool QCustom3DItem_Event(QCustom3DItem* self, QEvent* event);
void QCustom3DItem_OnEvent(QCustom3DItem* self, intptr_t slot);
bool QCustom3DItem_SuperEvent(QCustom3DItem* self, QEvent* event);
bool QCustom3DItem_EventFilter(QCustom3DItem* self, QObject* watched, QEvent* event);
void QCustom3DItem_OnEventFilter(QCustom3DItem* self, intptr_t slot);
bool QCustom3DItem_SuperEventFilter(QCustom3DItem* self, QObject* watched, QEvent* event);
void QCustom3DItem_TimerEvent(QCustom3DItem* self, QTimerEvent* event);
void QCustom3DItem_OnTimerEvent(QCustom3DItem* self, intptr_t slot);
void QCustom3DItem_SuperTimerEvent(QCustom3DItem* self, QTimerEvent* event);
void QCustom3DItem_ChildEvent(QCustom3DItem* self, QChildEvent* event);
void QCustom3DItem_OnChildEvent(QCustom3DItem* self, intptr_t slot);
void QCustom3DItem_SuperChildEvent(QCustom3DItem* self, QChildEvent* event);
void QCustom3DItem_CustomEvent(QCustom3DItem* self, QEvent* event);
void QCustom3DItem_OnCustomEvent(QCustom3DItem* self, intptr_t slot);
void QCustom3DItem_SuperCustomEvent(QCustom3DItem* self, QEvent* event);
void QCustom3DItem_ConnectNotify(QCustom3DItem* self, const QMetaMethod* signal);
void QCustom3DItem_OnConnectNotify(QCustom3DItem* self, intptr_t slot);
void QCustom3DItem_SuperConnectNotify(QCustom3DItem* self, const QMetaMethod* signal);
void QCustom3DItem_DisconnectNotify(QCustom3DItem* self, const QMetaMethod* signal);
void QCustom3DItem_OnDisconnectNotify(QCustom3DItem* self, intptr_t slot);
void QCustom3DItem_SuperDisconnectNotify(QCustom3DItem* self, const QMetaMethod* signal);
QObject* QCustom3DItem_Sender(const QCustom3DItem* self);
int QCustom3DItem_SenderSignalIndex(const QCustom3DItem* self);
int QCustom3DItem_Receivers(const QCustom3DItem* self, const char* signal);
bool QCustom3DItem_IsSignalConnected(const QCustom3DItem* self, const QMetaMethod* signal);
void QCustom3DItem_Delete(QCustom3DItem* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
