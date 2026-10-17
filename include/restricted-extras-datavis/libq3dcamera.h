#pragma once
#ifndef RESTRICTED_EXTRAS_DATAVIS_LIBQ3DCAMERA_H
#define RESTRICTED_EXTRAS_DATAVIS_LIBQ3DCAMERA_H

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
#else
typedef struct Q3DCamera Q3DCamera;
typedef struct Q3DObject Q3DObject;
typedef struct QChildEvent QChildEvent;
typedef struct QEvent QEvent;
typedef struct QMetaMethod QMetaMethod;
typedef struct QMetaObject QMetaObject;
typedef struct QObject QObject;
typedef struct QTimerEvent QTimerEvent;
typedef struct QVector3D QVector3D;
#endif

Q3DCamera* Q3DCamera_new();
Q3DCamera* Q3DCamera_new2(QObject* parent);
QMetaObject* Q3DCamera_MetaObject(const Q3DCamera* self);
void* Q3DCamera_Metacast(Q3DCamera* self, const char* param1);
int Q3DCamera_Metacall(Q3DCamera* self, int param1, int param2, void** param3);
libqt_string Q3DCamera_Tr(const char* s);
float Q3DCamera_XRotation(const Q3DCamera* self);
void Q3DCamera_SetXRotation(Q3DCamera* self, float rotation);
float Q3DCamera_YRotation(const Q3DCamera* self);
void Q3DCamera_SetYRotation(Q3DCamera* self, float rotation);
bool Q3DCamera_WrapXRotation(const Q3DCamera* self);
void Q3DCamera_SetWrapXRotation(Q3DCamera* self, bool isEnabled);
bool Q3DCamera_WrapYRotation(const Q3DCamera* self);
void Q3DCamera_SetWrapYRotation(Q3DCamera* self, bool isEnabled);
void Q3DCamera_CopyValuesFrom(Q3DCamera* self, const Q3DObject* source);
int Q3DCamera_CameraPreset(const Q3DCamera* self);
void Q3DCamera_SetCameraPreset(Q3DCamera* self, int preset);
float Q3DCamera_ZoomLevel(const Q3DCamera* self);
void Q3DCamera_SetZoomLevel(Q3DCamera* self, float zoomLevel);
float Q3DCamera_MinZoomLevel(const Q3DCamera* self);
void Q3DCamera_SetMinZoomLevel(Q3DCamera* self, float zoomLevel);
float Q3DCamera_MaxZoomLevel(const Q3DCamera* self);
void Q3DCamera_SetMaxZoomLevel(Q3DCamera* self, float zoomLevel);
void Q3DCamera_SetCameraPosition(Q3DCamera* self, float horizontal, float vertical);
QVector3D* Q3DCamera_Target(const Q3DCamera* self);
void Q3DCamera_SetTarget(Q3DCamera* self, const QVector3D* target);
void Q3DCamera_XRotationChanged(Q3DCamera* self, float rotation);
void Q3DCamera_Connect_XRotationChanged(Q3DCamera* self, intptr_t slot);
void Q3DCamera_YRotationChanged(Q3DCamera* self, float rotation);
void Q3DCamera_Connect_YRotationChanged(Q3DCamera* self, intptr_t slot);
void Q3DCamera_ZoomLevelChanged(Q3DCamera* self, float zoomLevel);
void Q3DCamera_Connect_ZoomLevelChanged(Q3DCamera* self, intptr_t slot);
void Q3DCamera_CameraPresetChanged(Q3DCamera* self, int preset);
void Q3DCamera_Connect_CameraPresetChanged(Q3DCamera* self, intptr_t slot);
void Q3DCamera_WrapXRotationChanged(Q3DCamera* self, bool isEnabled);
void Q3DCamera_Connect_WrapXRotationChanged(Q3DCamera* self, intptr_t slot);
void Q3DCamera_WrapYRotationChanged(Q3DCamera* self, bool isEnabled);
void Q3DCamera_Connect_WrapYRotationChanged(Q3DCamera* self, intptr_t slot);
void Q3DCamera_TargetChanged(Q3DCamera* self, const QVector3D* target);
void Q3DCamera_Connect_TargetChanged(Q3DCamera* self, intptr_t slot);
void Q3DCamera_MinZoomLevelChanged(Q3DCamera* self, float zoomLevel);
void Q3DCamera_Connect_MinZoomLevelChanged(Q3DCamera* self, intptr_t slot);
void Q3DCamera_MaxZoomLevelChanged(Q3DCamera* self, float zoomLevel);
void Q3DCamera_Connect_MaxZoomLevelChanged(Q3DCamera* self, intptr_t slot);
libqt_string Q3DCamera_Tr2(const char* s, const char* c);
libqt_string Q3DCamera_Tr3(const char* s, const char* c, int n);
void Q3DCamera_SetCameraPosition3(Q3DCamera* self, float horizontal, float vertical, float zoom);
void Q3DCamera_OnMetaObject(Q3DCamera* self, intptr_t slot);
QMetaObject* Q3DCamera_SuperMetaObject(const Q3DCamera* self);
void Q3DCamera_OnMetacast(Q3DCamera* self, intptr_t slot);
void* Q3DCamera_SuperMetacast(Q3DCamera* self, const char* param1);
void Q3DCamera_OnMetacall(Q3DCamera* self, intptr_t slot);
int Q3DCamera_SuperMetacall(Q3DCamera* self, int param1, int param2, void** param3);
void Q3DCamera_OnCopyValuesFrom(Q3DCamera* self, intptr_t slot);
void Q3DCamera_SuperCopyValuesFrom(Q3DCamera* self, const Q3DObject* source);
bool Q3DCamera_Event(Q3DCamera* self, QEvent* event);
void Q3DCamera_OnEvent(Q3DCamera* self, intptr_t slot);
bool Q3DCamera_SuperEvent(Q3DCamera* self, QEvent* event);
bool Q3DCamera_EventFilter(Q3DCamera* self, QObject* watched, QEvent* event);
void Q3DCamera_OnEventFilter(Q3DCamera* self, intptr_t slot);
bool Q3DCamera_SuperEventFilter(Q3DCamera* self, QObject* watched, QEvent* event);
void Q3DCamera_TimerEvent(Q3DCamera* self, QTimerEvent* event);
void Q3DCamera_OnTimerEvent(Q3DCamera* self, intptr_t slot);
void Q3DCamera_SuperTimerEvent(Q3DCamera* self, QTimerEvent* event);
void Q3DCamera_ChildEvent(Q3DCamera* self, QChildEvent* event);
void Q3DCamera_OnChildEvent(Q3DCamera* self, intptr_t slot);
void Q3DCamera_SuperChildEvent(Q3DCamera* self, QChildEvent* event);
void Q3DCamera_CustomEvent(Q3DCamera* self, QEvent* event);
void Q3DCamera_OnCustomEvent(Q3DCamera* self, intptr_t slot);
void Q3DCamera_SuperCustomEvent(Q3DCamera* self, QEvent* event);
void Q3DCamera_ConnectNotify(Q3DCamera* self, const QMetaMethod* signal);
void Q3DCamera_OnConnectNotify(Q3DCamera* self, intptr_t slot);
void Q3DCamera_SuperConnectNotify(Q3DCamera* self, const QMetaMethod* signal);
void Q3DCamera_DisconnectNotify(Q3DCamera* self, const QMetaMethod* signal);
void Q3DCamera_OnDisconnectNotify(Q3DCamera* self, intptr_t slot);
void Q3DCamera_SuperDisconnectNotify(Q3DCamera* self, const QMetaMethod* signal);
void Q3DCamera_SetDirty(Q3DCamera* self, bool dirty);
bool Q3DCamera_IsDirty(const Q3DCamera* self);
QObject* Q3DCamera_Sender(const Q3DCamera* self);
int Q3DCamera_SenderSignalIndex(const Q3DCamera* self);
int Q3DCamera_Receivers(const Q3DCamera* self, const char* signal);
bool Q3DCamera_IsSignalConnected(const Q3DCamera* self, const QMetaMethod* signal);
void Q3DCamera_Delete(Q3DCamera* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
