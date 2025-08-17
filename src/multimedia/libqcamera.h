#pragma once
#ifndef SRC_MULTIMEDIAC_LIBQCAMERA_H
#define SRC_MULTIMEDIAC_LIBQCAMERA_H

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
#else
typedef struct QCamera QCamera;
typedef struct QCameraDevice QCameraDevice;
typedef struct QCameraFormat QCameraFormat;
typedef struct QChildEvent QChildEvent;
typedef struct QEvent QEvent;
typedef struct QMediaCaptureSession QMediaCaptureSession;
typedef struct QMetaMethod QMetaMethod;
typedef struct QMetaObject QMetaObject;
typedef struct QObject QObject;
typedef struct QPointF QPointF;
typedef struct QTimerEvent QTimerEvent;
#endif

QCamera* QCamera_new();
QCamera* QCamera_new2(const QCameraDevice* cameraDevice);
QCamera* QCamera_new3(int position);
QCamera* QCamera_new4(QObject* parent);
QCamera* QCamera_new5(const QCameraDevice* cameraDevice, QObject* parent);
QCamera* QCamera_new6(int position, QObject* parent);
QMetaObject* QCamera_MetaObject(const QCamera* self);
void* QCamera_Metacast(QCamera* self, const char* param1);
int QCamera_Metacall(QCamera* self, int param1, int param2, void** param3);
void QCamera_OnMetacall(QCamera* self, intptr_t slot);
int QCamera_QBaseMetacall(QCamera* self, int param1, int param2, void** param3);
libqt_string QCamera_Tr(const char* s);
bool QCamera_IsAvailable(const QCamera* self);
bool QCamera_IsActive(const QCamera* self);
QMediaCaptureSession* QCamera_CaptureSession(const QCamera* self);
QCameraDevice* QCamera_CameraDevice(const QCamera* self);
void QCamera_SetCameraDevice(QCamera* self, const QCameraDevice* cameraDevice);
QCameraFormat* QCamera_CameraFormat(const QCamera* self);
void QCamera_SetCameraFormat(QCamera* self, const QCameraFormat* format);
int QCamera_Error(const QCamera* self);
libqt_string QCamera_ErrorString(const QCamera* self);
int QCamera_SupportedFeatures(const QCamera* self);
int QCamera_FocusMode(const QCamera* self);
void QCamera_SetFocusMode(QCamera* self, int mode);
bool QCamera_IsFocusModeSupported(const QCamera* self, int mode);
QPointF* QCamera_FocusPoint(const QCamera* self);
QPointF* QCamera_CustomFocusPoint(const QCamera* self);
void QCamera_SetCustomFocusPoint(QCamera* self, const QPointF* point);
void QCamera_SetFocusDistance(QCamera* self, float d);
float QCamera_FocusDistance(const QCamera* self);
float QCamera_MinimumZoomFactor(const QCamera* self);
float QCamera_MaximumZoomFactor(const QCamera* self);
float QCamera_ZoomFactor(const QCamera* self);
void QCamera_SetZoomFactor(QCamera* self, float factor);
int QCamera_FlashMode(const QCamera* self);
bool QCamera_IsFlashModeSupported(const QCamera* self, int mode);
bool QCamera_IsFlashReady(const QCamera* self);
int QCamera_TorchMode(const QCamera* self);
bool QCamera_IsTorchModeSupported(const QCamera* self, int mode);
int QCamera_ExposureMode(const QCamera* self);
bool QCamera_IsExposureModeSupported(const QCamera* self, int mode);
float QCamera_ExposureCompensation(const QCamera* self);
int QCamera_IsoSensitivity(const QCamera* self);
int QCamera_ManualIsoSensitivity(const QCamera* self);
float QCamera_ExposureTime(const QCamera* self);
float QCamera_ManualExposureTime(const QCamera* self);
int QCamera_MinimumIsoSensitivity(const QCamera* self);
int QCamera_MaximumIsoSensitivity(const QCamera* self);
float QCamera_MinimumExposureTime(const QCamera* self);
float QCamera_MaximumExposureTime(const QCamera* self);
int QCamera_WhiteBalanceMode(const QCamera* self);
bool QCamera_IsWhiteBalanceModeSupported(const QCamera* self, int mode);
int QCamera_ColorTemperature(const QCamera* self);
void QCamera_SetActive(QCamera* self, bool active);
void QCamera_Start(QCamera* self);
void QCamera_Stop(QCamera* self);
void QCamera_ZoomTo(QCamera* self, float zoom, float rate);
void QCamera_SetFlashMode(QCamera* self, int mode);
void QCamera_SetTorchMode(QCamera* self, int mode);
void QCamera_SetExposureMode(QCamera* self, int mode);
void QCamera_SetExposureCompensation(QCamera* self, float ev);
void QCamera_SetManualIsoSensitivity(QCamera* self, int iso);
void QCamera_SetAutoIsoSensitivity(QCamera* self);
void QCamera_SetManualExposureTime(QCamera* self, float seconds);
void QCamera_SetAutoExposureTime(QCamera* self);
void QCamera_SetWhiteBalanceMode(QCamera* self, int mode);
void QCamera_SetColorTemperature(QCamera* self, int colorTemperature);
void QCamera_ActiveChanged(QCamera* self, bool param1);
void QCamera_Connect_ActiveChanged(QCamera* self, intptr_t slot);
void QCamera_ErrorChanged(QCamera* self);
void QCamera_Connect_ErrorChanged(QCamera* self, intptr_t slot);
void QCamera_ErrorOccurred(QCamera* self, int errorVal, const libqt_string errorString);
void QCamera_Connect_ErrorOccurred(QCamera* self, intptr_t slot);
void QCamera_CameraDeviceChanged(QCamera* self);
void QCamera_Connect_CameraDeviceChanged(QCamera* self, intptr_t slot);
void QCamera_CameraFormatChanged(QCamera* self);
void QCamera_Connect_CameraFormatChanged(QCamera* self, intptr_t slot);
void QCamera_SupportedFeaturesChanged(QCamera* self);
void QCamera_Connect_SupportedFeaturesChanged(QCamera* self, intptr_t slot);
void QCamera_FocusModeChanged(QCamera* self);
void QCamera_Connect_FocusModeChanged(QCamera* self, intptr_t slot);
void QCamera_ZoomFactorChanged(QCamera* self, float param1);
void QCamera_Connect_ZoomFactorChanged(QCamera* self, intptr_t slot);
void QCamera_MinimumZoomFactorChanged(QCamera* self, float param1);
void QCamera_Connect_MinimumZoomFactorChanged(QCamera* self, intptr_t slot);
void QCamera_MaximumZoomFactorChanged(QCamera* self, float param1);
void QCamera_Connect_MaximumZoomFactorChanged(QCamera* self, intptr_t slot);
void QCamera_FocusDistanceChanged(QCamera* self, float param1);
void QCamera_Connect_FocusDistanceChanged(QCamera* self, intptr_t slot);
void QCamera_FocusPointChanged(QCamera* self);
void QCamera_Connect_FocusPointChanged(QCamera* self, intptr_t slot);
void QCamera_CustomFocusPointChanged(QCamera* self);
void QCamera_Connect_CustomFocusPointChanged(QCamera* self, intptr_t slot);
void QCamera_FlashReady(QCamera* self, bool param1);
void QCamera_Connect_FlashReady(QCamera* self, intptr_t slot);
void QCamera_FlashModeChanged(QCamera* self);
void QCamera_Connect_FlashModeChanged(QCamera* self, intptr_t slot);
void QCamera_TorchModeChanged(QCamera* self);
void QCamera_Connect_TorchModeChanged(QCamera* self, intptr_t slot);
void QCamera_ExposureTimeChanged(QCamera* self, float speed);
void QCamera_Connect_ExposureTimeChanged(QCamera* self, intptr_t slot);
void QCamera_ManualExposureTimeChanged(QCamera* self, float speed);
void QCamera_Connect_ManualExposureTimeChanged(QCamera* self, intptr_t slot);
void QCamera_IsoSensitivityChanged(QCamera* self, int param1);
void QCamera_Connect_IsoSensitivityChanged(QCamera* self, intptr_t slot);
void QCamera_ManualIsoSensitivityChanged(QCamera* self, int param1);
void QCamera_Connect_ManualIsoSensitivityChanged(QCamera* self, intptr_t slot);
void QCamera_ExposureCompensationChanged(QCamera* self, float param1);
void QCamera_Connect_ExposureCompensationChanged(QCamera* self, intptr_t slot);
void QCamera_ExposureModeChanged(QCamera* self);
void QCamera_Connect_ExposureModeChanged(QCamera* self, intptr_t slot);
void QCamera_WhiteBalanceModeChanged(const QCamera* self);
void QCamera_Connect_WhiteBalanceModeChanged(QCamera* self, intptr_t slot);
void QCamera_ColorTemperatureChanged(const QCamera* self);
void QCamera_Connect_ColorTemperatureChanged(QCamera* self, intptr_t slot);
void QCamera_BrightnessChanged(QCamera* self);
void QCamera_Connect_BrightnessChanged(QCamera* self, intptr_t slot);
void QCamera_ContrastChanged(QCamera* self);
void QCamera_Connect_ContrastChanged(QCamera* self, intptr_t slot);
void QCamera_SaturationChanged(QCamera* self);
void QCamera_Connect_SaturationChanged(QCamera* self, intptr_t slot);
void QCamera_HueChanged(QCamera* self);
void QCamera_Connect_HueChanged(QCamera* self, intptr_t slot);
libqt_string QCamera_Tr2(const char* s, const char* c);
libqt_string QCamera_Tr3(const char* s, const char* c, int n);
bool QCamera_Event(QCamera* self, QEvent* event);
void QCamera_OnEvent(QCamera* self, intptr_t slot);
bool QCamera_QBaseEvent(QCamera* self, QEvent* event);
bool QCamera_EventFilter(QCamera* self, QObject* watched, QEvent* event);
void QCamera_OnEventFilter(QCamera* self, intptr_t slot);
bool QCamera_QBaseEventFilter(QCamera* self, QObject* watched, QEvent* event);
void QCamera_TimerEvent(QCamera* self, QTimerEvent* event);
void QCamera_OnTimerEvent(QCamera* self, intptr_t slot);
void QCamera_QBaseTimerEvent(QCamera* self, QTimerEvent* event);
void QCamera_ChildEvent(QCamera* self, QChildEvent* event);
void QCamera_OnChildEvent(QCamera* self, intptr_t slot);
void QCamera_QBaseChildEvent(QCamera* self, QChildEvent* event);
void QCamera_CustomEvent(QCamera* self, QEvent* event);
void QCamera_OnCustomEvent(QCamera* self, intptr_t slot);
void QCamera_QBaseCustomEvent(QCamera* self, QEvent* event);
void QCamera_ConnectNotify(QCamera* self, const QMetaMethod* signal);
void QCamera_OnConnectNotify(QCamera* self, intptr_t slot);
void QCamera_QBaseConnectNotify(QCamera* self, const QMetaMethod* signal);
void QCamera_DisconnectNotify(QCamera* self, const QMetaMethod* signal);
void QCamera_OnDisconnectNotify(QCamera* self, intptr_t slot);
void QCamera_QBaseDisconnectNotify(QCamera* self, const QMetaMethod* signal);
QObject* QCamera_Sender(const QCamera* self);
void QCamera_OnSender(const QCamera* self, intptr_t slot);
QObject* QCamera_QBaseSender(const QCamera* self);
int QCamera_SenderSignalIndex(const QCamera* self);
void QCamera_OnSenderSignalIndex(const QCamera* self, intptr_t slot);
int QCamera_QBaseSenderSignalIndex(const QCamera* self);
int QCamera_Receivers(const QCamera* self, const char* signal);
void QCamera_OnReceivers(const QCamera* self, intptr_t slot);
int QCamera_QBaseReceivers(const QCamera* self, const char* signal);
bool QCamera_IsSignalConnected(const QCamera* self, const QMetaMethod* signal);
void QCamera_OnIsSignalConnected(const QCamera* self, intptr_t slot);
bool QCamera_QBaseIsSignalConnected(const QCamera* self, const QMetaMethod* signal);
void QCamera_Delete(QCamera* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
