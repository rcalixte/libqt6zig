#pragma once
#ifndef RESTRICTED_EXTRAS_DATAVIS_LIBQ3DSCENE_H
#define RESTRICTED_EXTRAS_DATAVIS_LIBQ3DSCENE_H

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
typedef struct Q3DLight Q3DLight;
typedef struct Q3DScene Q3DScene;
typedef struct QChildEvent QChildEvent;
typedef struct QEvent QEvent;
typedef struct QMetaMethod QMetaMethod;
typedef struct QMetaObject QMetaObject;
typedef struct QObject QObject;
typedef struct QPoint QPoint;
typedef struct QRect QRect;
typedef struct QTimerEvent QTimerEvent;
#endif

Q3DScene* Q3DScene_new();
Q3DScene* Q3DScene_new2(QObject* parent);
QMetaObject* Q3DScene_MetaObject(const Q3DScene* self);
void* Q3DScene_Metacast(Q3DScene* self, const char* param1);
int Q3DScene_Metacall(Q3DScene* self, int param1, int param2, void** param3);
libqt_string Q3DScene_Tr(const char* s);
QRect* Q3DScene_Viewport(const Q3DScene* self);
QRect* Q3DScene_PrimarySubViewport(const Q3DScene* self);
void Q3DScene_SetPrimarySubViewport(Q3DScene* self, const QRect* primarySubViewport);
bool Q3DScene_IsPointInPrimarySubView(Q3DScene* self, const QPoint* point);
QRect* Q3DScene_SecondarySubViewport(const Q3DScene* self);
void Q3DScene_SetSecondarySubViewport(Q3DScene* self, const QRect* secondarySubViewport);
bool Q3DScene_IsPointInSecondarySubView(Q3DScene* self, const QPoint* point);
void Q3DScene_SetSelectionQueryPosition(Q3DScene* self, const QPoint* point);
QPoint* Q3DScene_SelectionQueryPosition(const Q3DScene* self);
QPoint* Q3DScene_InvalidSelectionPoint();
void Q3DScene_SetGraphPositionQuery(Q3DScene* self, const QPoint* point);
QPoint* Q3DScene_GraphPositionQuery(const Q3DScene* self);
void Q3DScene_SetSlicingActive(Q3DScene* self, bool isSlicing);
bool Q3DScene_IsSlicingActive(const Q3DScene* self);
void Q3DScene_SetSecondarySubviewOnTop(Q3DScene* self, bool isSecondaryOnTop);
bool Q3DScene_IsSecondarySubviewOnTop(const Q3DScene* self);
Q3DCamera* Q3DScene_ActiveCamera(const Q3DScene* self);
void Q3DScene_SetActiveCamera(Q3DScene* self, Q3DCamera* camera);
Q3DLight* Q3DScene_ActiveLight(const Q3DScene* self);
void Q3DScene_SetActiveLight(Q3DScene* self, Q3DLight* light);
float Q3DScene_DevicePixelRatio(const Q3DScene* self);
void Q3DScene_SetDevicePixelRatio(Q3DScene* self, float pixelRatio);
void Q3DScene_ViewportChanged(Q3DScene* self, const QRect* viewport);
void Q3DScene_Connect_ViewportChanged(Q3DScene* self, intptr_t slot);
void Q3DScene_PrimarySubViewportChanged(Q3DScene* self, const QRect* subViewport);
void Q3DScene_Connect_PrimarySubViewportChanged(Q3DScene* self, intptr_t slot);
void Q3DScene_SecondarySubViewportChanged(Q3DScene* self, const QRect* subViewport);
void Q3DScene_Connect_SecondarySubViewportChanged(Q3DScene* self, intptr_t slot);
void Q3DScene_SecondarySubviewOnTopChanged(Q3DScene* self, bool isSecondaryOnTop);
void Q3DScene_Connect_SecondarySubviewOnTopChanged(Q3DScene* self, intptr_t slot);
void Q3DScene_SlicingActiveChanged(Q3DScene* self, bool isSlicingActive);
void Q3DScene_Connect_SlicingActiveChanged(Q3DScene* self, intptr_t slot);
void Q3DScene_ActiveCameraChanged(Q3DScene* self, Q3DCamera* camera);
void Q3DScene_Connect_ActiveCameraChanged(Q3DScene* self, intptr_t slot);
void Q3DScene_ActiveLightChanged(Q3DScene* self, Q3DLight* light);
void Q3DScene_Connect_ActiveLightChanged(Q3DScene* self, intptr_t slot);
void Q3DScene_DevicePixelRatioChanged(Q3DScene* self, float pixelRatio);
void Q3DScene_Connect_DevicePixelRatioChanged(Q3DScene* self, intptr_t slot);
void Q3DScene_SelectionQueryPositionChanged(Q3DScene* self, const QPoint* position);
void Q3DScene_Connect_SelectionQueryPositionChanged(Q3DScene* self, intptr_t slot);
void Q3DScene_GraphPositionQueryChanged(Q3DScene* self, const QPoint* position);
void Q3DScene_Connect_GraphPositionQueryChanged(Q3DScene* self, intptr_t slot);
libqt_string Q3DScene_Tr2(const char* s, const char* c);
libqt_string Q3DScene_Tr3(const char* s, const char* c, int n);
void Q3DScene_OnMetaObject(Q3DScene* self, intptr_t slot);
QMetaObject* Q3DScene_SuperMetaObject(const Q3DScene* self);
void Q3DScene_OnMetacast(Q3DScene* self, intptr_t slot);
void* Q3DScene_SuperMetacast(Q3DScene* self, const char* param1);
void Q3DScene_OnMetacall(Q3DScene* self, intptr_t slot);
int Q3DScene_SuperMetacall(Q3DScene* self, int param1, int param2, void** param3);
bool Q3DScene_Event(Q3DScene* self, QEvent* event);
void Q3DScene_OnEvent(Q3DScene* self, intptr_t slot);
bool Q3DScene_SuperEvent(Q3DScene* self, QEvent* event);
bool Q3DScene_EventFilter(Q3DScene* self, QObject* watched, QEvent* event);
void Q3DScene_OnEventFilter(Q3DScene* self, intptr_t slot);
bool Q3DScene_SuperEventFilter(Q3DScene* self, QObject* watched, QEvent* event);
void Q3DScene_TimerEvent(Q3DScene* self, QTimerEvent* event);
void Q3DScene_OnTimerEvent(Q3DScene* self, intptr_t slot);
void Q3DScene_SuperTimerEvent(Q3DScene* self, QTimerEvent* event);
void Q3DScene_ChildEvent(Q3DScene* self, QChildEvent* event);
void Q3DScene_OnChildEvent(Q3DScene* self, intptr_t slot);
void Q3DScene_SuperChildEvent(Q3DScene* self, QChildEvent* event);
void Q3DScene_CustomEvent(Q3DScene* self, QEvent* event);
void Q3DScene_OnCustomEvent(Q3DScene* self, intptr_t slot);
void Q3DScene_SuperCustomEvent(Q3DScene* self, QEvent* event);
void Q3DScene_ConnectNotify(Q3DScene* self, const QMetaMethod* signal);
void Q3DScene_OnConnectNotify(Q3DScene* self, intptr_t slot);
void Q3DScene_SuperConnectNotify(Q3DScene* self, const QMetaMethod* signal);
void Q3DScene_DisconnectNotify(Q3DScene* self, const QMetaMethod* signal);
void Q3DScene_OnDisconnectNotify(Q3DScene* self, intptr_t slot);
void Q3DScene_SuperDisconnectNotify(Q3DScene* self, const QMetaMethod* signal);
QObject* Q3DScene_Sender(const Q3DScene* self);
int Q3DScene_SenderSignalIndex(const Q3DScene* self);
int Q3DScene_Receivers(const Q3DScene* self, const char* signal);
bool Q3DScene_IsSignalConnected(const Q3DScene* self, const QMetaMethod* signal);
void Q3DScene_Delete(Q3DScene* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
