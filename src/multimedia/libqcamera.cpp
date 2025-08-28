#include <QCamera>
#include <QCameraDevice>
#include <QCameraFormat>
#include <QChildEvent>
#include <QEvent>
#include <QMediaCaptureSession>
#include <QMetaMethod>
#include <QMetaObject>
#include <QObject>
#include <QPointF>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <QTimerEvent>
#include <qcamera.h>
#include "libqcamera.h"
#include "libqcamera.hxx"

QCamera* QCamera_new() {
    return new VirtualQCamera();
}

QCamera* QCamera_new2(const QCameraDevice* cameraDevice) {
    return new VirtualQCamera(*cameraDevice);
}

QCamera* QCamera_new3(int position) {
    return new VirtualQCamera(static_cast<QCameraDevice::Position>(position));
}

QCamera* QCamera_new4(QObject* parent) {
    return new VirtualQCamera(parent);
}

QCamera* QCamera_new5(const QCameraDevice* cameraDevice, QObject* parent) {
    return new VirtualQCamera(*cameraDevice, parent);
}

QCamera* QCamera_new6(int position, QObject* parent) {
    return new VirtualQCamera(static_cast<QCameraDevice::Position>(position), parent);
}

QMetaObject* QCamera_MetaObject(const QCamera* self) {
    return (QMetaObject*)self->metaObject();
}

void* QCamera_Metacast(QCamera* self, const char* param1) {
    return self->qt_metacast(param1);
}

int QCamera_Metacall(QCamera* self, int param1, int param2, void** param3) {
    auto* vqcamera = dynamic_cast<VirtualQCamera*>(self);
    if (vqcamera && vqcamera->isVirtualQCamera) {
        return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return ((VirtualQCamera*)self)->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

libqt_string QCamera_Tr(const char* s) {
    QString _ret = QCamera::tr(s);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

bool QCamera_IsAvailable(const QCamera* self) {
    return self->isAvailable();
}

bool QCamera_IsActive(const QCamera* self) {
    return self->isActive();
}

QMediaCaptureSession* QCamera_CaptureSession(const QCamera* self) {
    return self->captureSession();
}

QCameraDevice* QCamera_CameraDevice(const QCamera* self) {
    return new QCameraDevice(self->cameraDevice());
}

void QCamera_SetCameraDevice(QCamera* self, const QCameraDevice* cameraDevice) {
    self->setCameraDevice(*cameraDevice);
}

QCameraFormat* QCamera_CameraFormat(const QCamera* self) {
    return new QCameraFormat(self->cameraFormat());
}

void QCamera_SetCameraFormat(QCamera* self, const QCameraFormat* format) {
    self->setCameraFormat(*format);
}

int QCamera_Error(const QCamera* self) {
    return static_cast<int>(self->error());
}

libqt_string QCamera_ErrorString(const QCamera* self) {
    QString _ret = self->errorString();
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

int QCamera_SupportedFeatures(const QCamera* self) {
    return static_cast<int>(self->supportedFeatures());
}

int QCamera_FocusMode(const QCamera* self) {
    return static_cast<int>(self->focusMode());
}

void QCamera_SetFocusMode(QCamera* self, int mode) {
    self->setFocusMode(static_cast<QCamera::FocusMode>(mode));
}

bool QCamera_IsFocusModeSupported(const QCamera* self, int mode) {
    return self->isFocusModeSupported(static_cast<QCamera::FocusMode>(mode));
}

QPointF* QCamera_FocusPoint(const QCamera* self) {
    return new QPointF(self->focusPoint());
}

QPointF* QCamera_CustomFocusPoint(const QCamera* self) {
    return new QPointF(self->customFocusPoint());
}

void QCamera_SetCustomFocusPoint(QCamera* self, const QPointF* point) {
    self->setCustomFocusPoint(*point);
}

void QCamera_SetFocusDistance(QCamera* self, float d) {
    self->setFocusDistance(static_cast<float>(d));
}

float QCamera_FocusDistance(const QCamera* self) {
    return self->focusDistance();
}

float QCamera_MinimumZoomFactor(const QCamera* self) {
    return self->minimumZoomFactor();
}

float QCamera_MaximumZoomFactor(const QCamera* self) {
    return self->maximumZoomFactor();
}

float QCamera_ZoomFactor(const QCamera* self) {
    return self->zoomFactor();
}

void QCamera_SetZoomFactor(QCamera* self, float factor) {
    self->setZoomFactor(static_cast<float>(factor));
}

int QCamera_FlashMode(const QCamera* self) {
    return static_cast<int>(self->flashMode());
}

bool QCamera_IsFlashModeSupported(const QCamera* self, int mode) {
    return self->isFlashModeSupported(static_cast<QCamera::FlashMode>(mode));
}

bool QCamera_IsFlashReady(const QCamera* self) {
    return self->isFlashReady();
}

int QCamera_TorchMode(const QCamera* self) {
    return static_cast<int>(self->torchMode());
}

bool QCamera_IsTorchModeSupported(const QCamera* self, int mode) {
    return self->isTorchModeSupported(static_cast<QCamera::TorchMode>(mode));
}

int QCamera_ExposureMode(const QCamera* self) {
    return static_cast<int>(self->exposureMode());
}

bool QCamera_IsExposureModeSupported(const QCamera* self, int mode) {
    return self->isExposureModeSupported(static_cast<QCamera::ExposureMode>(mode));
}

float QCamera_ExposureCompensation(const QCamera* self) {
    return self->exposureCompensation();
}

int QCamera_IsoSensitivity(const QCamera* self) {
    return self->isoSensitivity();
}

int QCamera_ManualIsoSensitivity(const QCamera* self) {
    return self->manualIsoSensitivity();
}

float QCamera_ExposureTime(const QCamera* self) {
    return self->exposureTime();
}

float QCamera_ManualExposureTime(const QCamera* self) {
    return self->manualExposureTime();
}

int QCamera_MinimumIsoSensitivity(const QCamera* self) {
    return self->minimumIsoSensitivity();
}

int QCamera_MaximumIsoSensitivity(const QCamera* self) {
    return self->maximumIsoSensitivity();
}

float QCamera_MinimumExposureTime(const QCamera* self) {
    return self->minimumExposureTime();
}

float QCamera_MaximumExposureTime(const QCamera* self) {
    return self->maximumExposureTime();
}

int QCamera_WhiteBalanceMode(const QCamera* self) {
    return static_cast<int>(self->whiteBalanceMode());
}

bool QCamera_IsWhiteBalanceModeSupported(const QCamera* self, int mode) {
    return self->isWhiteBalanceModeSupported(static_cast<QCamera::WhiteBalanceMode>(mode));
}

int QCamera_ColorTemperature(const QCamera* self) {
    return self->colorTemperature();
}

void QCamera_SetActive(QCamera* self, bool active) {
    self->setActive(active);
}

void QCamera_Start(QCamera* self) {
    self->start();
}

void QCamera_Stop(QCamera* self) {
    self->stop();
}

void QCamera_ZoomTo(QCamera* self, float zoom, float rate) {
    self->zoomTo(static_cast<float>(zoom), static_cast<float>(rate));
}

void QCamera_SetFlashMode(QCamera* self, int mode) {
    self->setFlashMode(static_cast<QCamera::FlashMode>(mode));
}

void QCamera_SetTorchMode(QCamera* self, int mode) {
    self->setTorchMode(static_cast<QCamera::TorchMode>(mode));
}

void QCamera_SetExposureMode(QCamera* self, int mode) {
    self->setExposureMode(static_cast<QCamera::ExposureMode>(mode));
}

void QCamera_SetExposureCompensation(QCamera* self, float ev) {
    self->setExposureCompensation(static_cast<float>(ev));
}

void QCamera_SetManualIsoSensitivity(QCamera* self, int iso) {
    self->setManualIsoSensitivity(static_cast<int>(iso));
}

void QCamera_SetAutoIsoSensitivity(QCamera* self) {
    self->setAutoIsoSensitivity();
}

void QCamera_SetManualExposureTime(QCamera* self, float seconds) {
    self->setManualExposureTime(static_cast<float>(seconds));
}

void QCamera_SetAutoExposureTime(QCamera* self) {
    self->setAutoExposureTime();
}

void QCamera_SetWhiteBalanceMode(QCamera* self, int mode) {
    self->setWhiteBalanceMode(static_cast<QCamera::WhiteBalanceMode>(mode));
}

void QCamera_SetColorTemperature(QCamera* self, int colorTemperature) {
    self->setColorTemperature(static_cast<int>(colorTemperature));
}

void QCamera_ActiveChanged(QCamera* self, bool param1) {
    self->activeChanged(param1);
}

void QCamera_Connect_ActiveChanged(QCamera* self, intptr_t slot) {
    void (*slotFunc)(QCamera*, bool) = reinterpret_cast<void (*)(QCamera*, bool)>(slot);
    QCamera::connect(self, &QCamera::activeChanged, [self, slotFunc](bool param1) {
        bool sigval1 = param1;
        slotFunc(self, sigval1);
    });
}

void QCamera_ErrorChanged(QCamera* self) {
    self->errorChanged();
}

void QCamera_Connect_ErrorChanged(QCamera* self, intptr_t slot) {
    void (*slotFunc)(QCamera*) = reinterpret_cast<void (*)(QCamera*)>(slot);
    QCamera::connect(self, &QCamera::errorChanged, [self, slotFunc]() {
        slotFunc(self);
    });
}

void QCamera_ErrorOccurred(QCamera* self, int errorVal, const libqt_string errorString) {
    QString errorString_QString = QString::fromUtf8(errorString.data, errorString.len);
    self->errorOccurred(static_cast<QCamera::Error>(errorVal), errorString_QString);
}

void QCamera_Connect_ErrorOccurred(QCamera* self, intptr_t slot) {
    void (*slotFunc)(QCamera*, int, const char*) = reinterpret_cast<void (*)(QCamera*, int, const char*)>(slot);
    QCamera::connect(self, &QCamera::errorOccurred, [self, slotFunc](QCamera::Error errorVal, const QString& errorString) {
        int sigval1 = static_cast<int>(errorVal);
        const QString errorString_ret = errorString;
        // Convert QString from UTF-16 in C++ RAII memory to UTF-8 chars in manually-managed C memory
        QByteArray errorString_b = errorString_ret.toUtf8();
        const char* errorString_str = static_cast<const char*>(malloc(errorString_b.length() + 1));
        memcpy((void*)errorString_str, errorString_b.data(), errorString_b.length());
        ((char*)errorString_str)[errorString_b.length()] = '\0';
        const char* sigval2 = errorString_str;
        slotFunc(self, sigval1, sigval2);
        libqt_free(errorString_str);
    });
}

void QCamera_CameraDeviceChanged(QCamera* self) {
    self->cameraDeviceChanged();
}

void QCamera_Connect_CameraDeviceChanged(QCamera* self, intptr_t slot) {
    void (*slotFunc)(QCamera*) = reinterpret_cast<void (*)(QCamera*)>(slot);
    QCamera::connect(self, &QCamera::cameraDeviceChanged, [self, slotFunc]() {
        slotFunc(self);
    });
}

void QCamera_CameraFormatChanged(QCamera* self) {
    self->cameraFormatChanged();
}

void QCamera_Connect_CameraFormatChanged(QCamera* self, intptr_t slot) {
    void (*slotFunc)(QCamera*) = reinterpret_cast<void (*)(QCamera*)>(slot);
    QCamera::connect(self, &QCamera::cameraFormatChanged, [self, slotFunc]() {
        slotFunc(self);
    });
}

void QCamera_SupportedFeaturesChanged(QCamera* self) {
    self->supportedFeaturesChanged();
}

void QCamera_Connect_SupportedFeaturesChanged(QCamera* self, intptr_t slot) {
    void (*slotFunc)(QCamera*) = reinterpret_cast<void (*)(QCamera*)>(slot);
    QCamera::connect(self, &QCamera::supportedFeaturesChanged, [self, slotFunc]() {
        slotFunc(self);
    });
}

void QCamera_FocusModeChanged(QCamera* self) {
    self->focusModeChanged();
}

void QCamera_Connect_FocusModeChanged(QCamera* self, intptr_t slot) {
    void (*slotFunc)(QCamera*) = reinterpret_cast<void (*)(QCamera*)>(slot);
    QCamera::connect(self, &QCamera::focusModeChanged, [self, slotFunc]() {
        slotFunc(self);
    });
}

void QCamera_ZoomFactorChanged(QCamera* self, float param1) {
    self->zoomFactorChanged(static_cast<float>(param1));
}

void QCamera_Connect_ZoomFactorChanged(QCamera* self, intptr_t slot) {
    void (*slotFunc)(QCamera*, float) = reinterpret_cast<void (*)(QCamera*, float)>(slot);
    QCamera::connect(self, &QCamera::zoomFactorChanged, [self, slotFunc](float param1) {
        float sigval1 = param1;
        slotFunc(self, sigval1);
    });
}

void QCamera_MinimumZoomFactorChanged(QCamera* self, float param1) {
    self->minimumZoomFactorChanged(static_cast<float>(param1));
}

void QCamera_Connect_MinimumZoomFactorChanged(QCamera* self, intptr_t slot) {
    void (*slotFunc)(QCamera*, float) = reinterpret_cast<void (*)(QCamera*, float)>(slot);
    QCamera::connect(self, &QCamera::minimumZoomFactorChanged, [self, slotFunc](float param1) {
        float sigval1 = param1;
        slotFunc(self, sigval1);
    });
}

void QCamera_MaximumZoomFactorChanged(QCamera* self, float param1) {
    self->maximumZoomFactorChanged(static_cast<float>(param1));
}

void QCamera_Connect_MaximumZoomFactorChanged(QCamera* self, intptr_t slot) {
    void (*slotFunc)(QCamera*, float) = reinterpret_cast<void (*)(QCamera*, float)>(slot);
    QCamera::connect(self, &QCamera::maximumZoomFactorChanged, [self, slotFunc](float param1) {
        float sigval1 = param1;
        slotFunc(self, sigval1);
    });
}

void QCamera_FocusDistanceChanged(QCamera* self, float param1) {
    self->focusDistanceChanged(static_cast<float>(param1));
}

void QCamera_Connect_FocusDistanceChanged(QCamera* self, intptr_t slot) {
    void (*slotFunc)(QCamera*, float) = reinterpret_cast<void (*)(QCamera*, float)>(slot);
    QCamera::connect(self, &QCamera::focusDistanceChanged, [self, slotFunc](float param1) {
        float sigval1 = param1;
        slotFunc(self, sigval1);
    });
}

void QCamera_FocusPointChanged(QCamera* self) {
    self->focusPointChanged();
}

void QCamera_Connect_FocusPointChanged(QCamera* self, intptr_t slot) {
    void (*slotFunc)(QCamera*) = reinterpret_cast<void (*)(QCamera*)>(slot);
    QCamera::connect(self, &QCamera::focusPointChanged, [self, slotFunc]() {
        slotFunc(self);
    });
}

void QCamera_CustomFocusPointChanged(QCamera* self) {
    self->customFocusPointChanged();
}

void QCamera_Connect_CustomFocusPointChanged(QCamera* self, intptr_t slot) {
    void (*slotFunc)(QCamera*) = reinterpret_cast<void (*)(QCamera*)>(slot);
    QCamera::connect(self, &QCamera::customFocusPointChanged, [self, slotFunc]() {
        slotFunc(self);
    });
}

void QCamera_FlashReady(QCamera* self, bool param1) {
    self->flashReady(param1);
}

void QCamera_Connect_FlashReady(QCamera* self, intptr_t slot) {
    void (*slotFunc)(QCamera*, bool) = reinterpret_cast<void (*)(QCamera*, bool)>(slot);
    QCamera::connect(self, &QCamera::flashReady, [self, slotFunc](bool param1) {
        bool sigval1 = param1;
        slotFunc(self, sigval1);
    });
}

void QCamera_FlashModeChanged(QCamera* self) {
    self->flashModeChanged();
}

void QCamera_Connect_FlashModeChanged(QCamera* self, intptr_t slot) {
    void (*slotFunc)(QCamera*) = reinterpret_cast<void (*)(QCamera*)>(slot);
    QCamera::connect(self, &QCamera::flashModeChanged, [self, slotFunc]() {
        slotFunc(self);
    });
}

void QCamera_TorchModeChanged(QCamera* self) {
    self->torchModeChanged();
}

void QCamera_Connect_TorchModeChanged(QCamera* self, intptr_t slot) {
    void (*slotFunc)(QCamera*) = reinterpret_cast<void (*)(QCamera*)>(slot);
    QCamera::connect(self, &QCamera::torchModeChanged, [self, slotFunc]() {
        slotFunc(self);
    });
}

void QCamera_ExposureTimeChanged(QCamera* self, float speed) {
    self->exposureTimeChanged(static_cast<float>(speed));
}

void QCamera_Connect_ExposureTimeChanged(QCamera* self, intptr_t slot) {
    void (*slotFunc)(QCamera*, float) = reinterpret_cast<void (*)(QCamera*, float)>(slot);
    QCamera::connect(self, &QCamera::exposureTimeChanged, [self, slotFunc](float speed) {
        float sigval1 = speed;
        slotFunc(self, sigval1);
    });
}

void QCamera_ManualExposureTimeChanged(QCamera* self, float speed) {
    self->manualExposureTimeChanged(static_cast<float>(speed));
}

void QCamera_Connect_ManualExposureTimeChanged(QCamera* self, intptr_t slot) {
    void (*slotFunc)(QCamera*, float) = reinterpret_cast<void (*)(QCamera*, float)>(slot);
    QCamera::connect(self, &QCamera::manualExposureTimeChanged, [self, slotFunc](float speed) {
        float sigval1 = speed;
        slotFunc(self, sigval1);
    });
}

void QCamera_IsoSensitivityChanged(QCamera* self, int param1) {
    self->isoSensitivityChanged(static_cast<int>(param1));
}

void QCamera_Connect_IsoSensitivityChanged(QCamera* self, intptr_t slot) {
    void (*slotFunc)(QCamera*, int) = reinterpret_cast<void (*)(QCamera*, int)>(slot);
    QCamera::connect(self, &QCamera::isoSensitivityChanged, [self, slotFunc](int param1) {
        int sigval1 = param1;
        slotFunc(self, sigval1);
    });
}

void QCamera_ManualIsoSensitivityChanged(QCamera* self, int param1) {
    self->manualIsoSensitivityChanged(static_cast<int>(param1));
}

void QCamera_Connect_ManualIsoSensitivityChanged(QCamera* self, intptr_t slot) {
    void (*slotFunc)(QCamera*, int) = reinterpret_cast<void (*)(QCamera*, int)>(slot);
    QCamera::connect(self, &QCamera::manualIsoSensitivityChanged, [self, slotFunc](int param1) {
        int sigval1 = param1;
        slotFunc(self, sigval1);
    });
}

void QCamera_ExposureCompensationChanged(QCamera* self, float param1) {
    self->exposureCompensationChanged(static_cast<float>(param1));
}

void QCamera_Connect_ExposureCompensationChanged(QCamera* self, intptr_t slot) {
    void (*slotFunc)(QCamera*, float) = reinterpret_cast<void (*)(QCamera*, float)>(slot);
    QCamera::connect(self, &QCamera::exposureCompensationChanged, [self, slotFunc](float param1) {
        float sigval1 = param1;
        slotFunc(self, sigval1);
    });
}

void QCamera_ExposureModeChanged(QCamera* self) {
    self->exposureModeChanged();
}

void QCamera_Connect_ExposureModeChanged(QCamera* self, intptr_t slot) {
    void (*slotFunc)(QCamera*) = reinterpret_cast<void (*)(QCamera*)>(slot);
    QCamera::connect(self, &QCamera::exposureModeChanged, [self, slotFunc]() {
        slotFunc(self);
    });
}

void QCamera_WhiteBalanceModeChanged(const QCamera* self) {
    self->whiteBalanceModeChanged();
}

void QCamera_Connect_WhiteBalanceModeChanged(QCamera* self, intptr_t slot) {
    void (*slotFunc)(QCamera*) = reinterpret_cast<void (*)(QCamera*)>(slot);
    QCamera::connect(self, &QCamera::whiteBalanceModeChanged, [self, slotFunc]() {
        slotFunc(self);
    });
}

void QCamera_ColorTemperatureChanged(const QCamera* self) {
    self->colorTemperatureChanged();
}

void QCamera_Connect_ColorTemperatureChanged(QCamera* self, intptr_t slot) {
    void (*slotFunc)(QCamera*) = reinterpret_cast<void (*)(QCamera*)>(slot);
    QCamera::connect(self, &QCamera::colorTemperatureChanged, [self, slotFunc]() {
        slotFunc(self);
    });
}

void QCamera_BrightnessChanged(QCamera* self) {
    self->brightnessChanged();
}

void QCamera_Connect_BrightnessChanged(QCamera* self, intptr_t slot) {
    void (*slotFunc)(QCamera*) = reinterpret_cast<void (*)(QCamera*)>(slot);
    QCamera::connect(self, &QCamera::brightnessChanged, [self, slotFunc]() {
        slotFunc(self);
    });
}

void QCamera_ContrastChanged(QCamera* self) {
    self->contrastChanged();
}

void QCamera_Connect_ContrastChanged(QCamera* self, intptr_t slot) {
    void (*slotFunc)(QCamera*) = reinterpret_cast<void (*)(QCamera*)>(slot);
    QCamera::connect(self, &QCamera::contrastChanged, [self, slotFunc]() {
        slotFunc(self);
    });
}

void QCamera_SaturationChanged(QCamera* self) {
    self->saturationChanged();
}

void QCamera_Connect_SaturationChanged(QCamera* self, intptr_t slot) {
    void (*slotFunc)(QCamera*) = reinterpret_cast<void (*)(QCamera*)>(slot);
    QCamera::connect(self, &QCamera::saturationChanged, [self, slotFunc]() {
        slotFunc(self);
    });
}

void QCamera_HueChanged(QCamera* self) {
    self->hueChanged();
}

void QCamera_Connect_HueChanged(QCamera* self, intptr_t slot) {
    void (*slotFunc)(QCamera*) = reinterpret_cast<void (*)(QCamera*)>(slot);
    QCamera::connect(self, &QCamera::hueChanged, [self, slotFunc]() {
        slotFunc(self);
    });
}

libqt_string QCamera_Tr2(const char* s, const char* c) {
    QString _ret = QCamera::tr(s, c);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string QCamera_Tr3(const char* s, const char* c, int n) {
    QString _ret = QCamera::tr(s, c, static_cast<int>(n));
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

// Base class handler implementation
int QCamera_QBaseMetacall(QCamera* self, int param1, int param2, void** param3) {
    auto* vqcamera = dynamic_cast<VirtualQCamera*>(self);
    if (vqcamera && vqcamera->isVirtualQCamera) {
        vqcamera->setQCamera_Metacall_IsBase(true);
        return vqcamera->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return self->QCamera::qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

// Auxiliary method to allow providing re-implementation
void QCamera_OnMetacall(QCamera* self, intptr_t slot) {
    auto* vqcamera = dynamic_cast<VirtualQCamera*>(self);
    if (vqcamera && vqcamera->isVirtualQCamera) {
        vqcamera->setQCamera_Metacall_Callback(reinterpret_cast<VirtualQCamera::QCamera_Metacall_Callback>(slot));
    }
}

// Derived class handler implementation
bool QCamera_Event(QCamera* self, QEvent* event) {
    auto* vqcamera = dynamic_cast<VirtualQCamera*>(self);
    if (vqcamera && vqcamera->isVirtualQCamera) {
        return vqcamera->event(event);
    } else {
        return self->QCamera::event(event);
    }
}

// Base class handler implementation
bool QCamera_QBaseEvent(QCamera* self, QEvent* event) {
    auto* vqcamera = dynamic_cast<VirtualQCamera*>(self);
    if (vqcamera && vqcamera->isVirtualQCamera) {
        vqcamera->setQCamera_Event_IsBase(true);
        return vqcamera->event(event);
    } else {
        return self->QCamera::event(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QCamera_OnEvent(QCamera* self, intptr_t slot) {
    auto* vqcamera = dynamic_cast<VirtualQCamera*>(self);
    if (vqcamera && vqcamera->isVirtualQCamera) {
        vqcamera->setQCamera_Event_Callback(reinterpret_cast<VirtualQCamera::QCamera_Event_Callback>(slot));
    }
}

// Derived class handler implementation
bool QCamera_EventFilter(QCamera* self, QObject* watched, QEvent* event) {
    auto* vqcamera = dynamic_cast<VirtualQCamera*>(self);
    if (vqcamera && vqcamera->isVirtualQCamera) {
        return vqcamera->eventFilter(watched, event);
    } else {
        return self->QCamera::eventFilter(watched, event);
    }
}

// Base class handler implementation
bool QCamera_QBaseEventFilter(QCamera* self, QObject* watched, QEvent* event) {
    auto* vqcamera = dynamic_cast<VirtualQCamera*>(self);
    if (vqcamera && vqcamera->isVirtualQCamera) {
        vqcamera->setQCamera_EventFilter_IsBase(true);
        return vqcamera->eventFilter(watched, event);
    } else {
        return self->QCamera::eventFilter(watched, event);
    }
}

// Auxiliary method to allow providing re-implementation
void QCamera_OnEventFilter(QCamera* self, intptr_t slot) {
    auto* vqcamera = dynamic_cast<VirtualQCamera*>(self);
    if (vqcamera && vqcamera->isVirtualQCamera) {
        vqcamera->setQCamera_EventFilter_Callback(reinterpret_cast<VirtualQCamera::QCamera_EventFilter_Callback>(slot));
    }
}

// Derived class handler implementation
void QCamera_TimerEvent(QCamera* self, QTimerEvent* event) {
    auto* vqcamera = dynamic_cast<VirtualQCamera*>(self);
    if (vqcamera && vqcamera->isVirtualQCamera) {
        vqcamera->timerEvent(event);
    } else {
        ((VirtualQCamera*)self)->timerEvent(event);
    }
}

// Base class handler implementation
void QCamera_QBaseTimerEvent(QCamera* self, QTimerEvent* event) {
    auto* vqcamera = dynamic_cast<VirtualQCamera*>(self);
    if (vqcamera && vqcamera->isVirtualQCamera) {
        vqcamera->setQCamera_TimerEvent_IsBase(true);
        vqcamera->timerEvent(event);
    } else {
        ((VirtualQCamera*)self)->timerEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QCamera_OnTimerEvent(QCamera* self, intptr_t slot) {
    auto* vqcamera = dynamic_cast<VirtualQCamera*>(self);
    if (vqcamera && vqcamera->isVirtualQCamera) {
        vqcamera->setQCamera_TimerEvent_Callback(reinterpret_cast<VirtualQCamera::QCamera_TimerEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QCamera_ChildEvent(QCamera* self, QChildEvent* event) {
    auto* vqcamera = dynamic_cast<VirtualQCamera*>(self);
    if (vqcamera && vqcamera->isVirtualQCamera) {
        vqcamera->childEvent(event);
    } else {
        ((VirtualQCamera*)self)->childEvent(event);
    }
}

// Base class handler implementation
void QCamera_QBaseChildEvent(QCamera* self, QChildEvent* event) {
    auto* vqcamera = dynamic_cast<VirtualQCamera*>(self);
    if (vqcamera && vqcamera->isVirtualQCamera) {
        vqcamera->setQCamera_ChildEvent_IsBase(true);
        vqcamera->childEvent(event);
    } else {
        ((VirtualQCamera*)self)->childEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QCamera_OnChildEvent(QCamera* self, intptr_t slot) {
    auto* vqcamera = dynamic_cast<VirtualQCamera*>(self);
    if (vqcamera && vqcamera->isVirtualQCamera) {
        vqcamera->setQCamera_ChildEvent_Callback(reinterpret_cast<VirtualQCamera::QCamera_ChildEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QCamera_CustomEvent(QCamera* self, QEvent* event) {
    auto* vqcamera = dynamic_cast<VirtualQCamera*>(self);
    if (vqcamera && vqcamera->isVirtualQCamera) {
        vqcamera->customEvent(event);
    } else {
        ((VirtualQCamera*)self)->customEvent(event);
    }
}

// Base class handler implementation
void QCamera_QBaseCustomEvent(QCamera* self, QEvent* event) {
    auto* vqcamera = dynamic_cast<VirtualQCamera*>(self);
    if (vqcamera && vqcamera->isVirtualQCamera) {
        vqcamera->setQCamera_CustomEvent_IsBase(true);
        vqcamera->customEvent(event);
    } else {
        ((VirtualQCamera*)self)->customEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QCamera_OnCustomEvent(QCamera* self, intptr_t slot) {
    auto* vqcamera = dynamic_cast<VirtualQCamera*>(self);
    if (vqcamera && vqcamera->isVirtualQCamera) {
        vqcamera->setQCamera_CustomEvent_Callback(reinterpret_cast<VirtualQCamera::QCamera_CustomEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QCamera_ConnectNotify(QCamera* self, const QMetaMethod* signal) {
    auto* vqcamera = dynamic_cast<VirtualQCamera*>(self);
    if (vqcamera && vqcamera->isVirtualQCamera) {
        vqcamera->connectNotify(*signal);
    } else {
        ((VirtualQCamera*)self)->connectNotify(*signal);
    }
}

// Base class handler implementation
void QCamera_QBaseConnectNotify(QCamera* self, const QMetaMethod* signal) {
    auto* vqcamera = dynamic_cast<VirtualQCamera*>(self);
    if (vqcamera && vqcamera->isVirtualQCamera) {
        vqcamera->setQCamera_ConnectNotify_IsBase(true);
        vqcamera->connectNotify(*signal);
    } else {
        ((VirtualQCamera*)self)->connectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QCamera_OnConnectNotify(QCamera* self, intptr_t slot) {
    auto* vqcamera = dynamic_cast<VirtualQCamera*>(self);
    if (vqcamera && vqcamera->isVirtualQCamera) {
        vqcamera->setQCamera_ConnectNotify_Callback(reinterpret_cast<VirtualQCamera::QCamera_ConnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
void QCamera_DisconnectNotify(QCamera* self, const QMetaMethod* signal) {
    auto* vqcamera = dynamic_cast<VirtualQCamera*>(self);
    if (vqcamera && vqcamera->isVirtualQCamera) {
        vqcamera->disconnectNotify(*signal);
    } else {
        ((VirtualQCamera*)self)->disconnectNotify(*signal);
    }
}

// Base class handler implementation
void QCamera_QBaseDisconnectNotify(QCamera* self, const QMetaMethod* signal) {
    auto* vqcamera = dynamic_cast<VirtualQCamera*>(self);
    if (vqcamera && vqcamera->isVirtualQCamera) {
        vqcamera->setQCamera_DisconnectNotify_IsBase(true);
        vqcamera->disconnectNotify(*signal);
    } else {
        ((VirtualQCamera*)self)->disconnectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QCamera_OnDisconnectNotify(QCamera* self, intptr_t slot) {
    auto* vqcamera = dynamic_cast<VirtualQCamera*>(self);
    if (vqcamera && vqcamera->isVirtualQCamera) {
        vqcamera->setQCamera_DisconnectNotify_Callback(reinterpret_cast<VirtualQCamera::QCamera_DisconnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
QObject* QCamera_Sender(const QCamera* self) {
    auto* vqcamera = const_cast<VirtualQCamera*>(dynamic_cast<const VirtualQCamera*>(self));
    if (vqcamera && vqcamera->isVirtualQCamera) {
        return vqcamera->sender();
    } else {
        return ((VirtualQCamera*)self)->sender();
    }
}

// Base class handler implementation
QObject* QCamera_QBaseSender(const QCamera* self) {
    auto* vqcamera = const_cast<VirtualQCamera*>(dynamic_cast<const VirtualQCamera*>(self));
    if (vqcamera && vqcamera->isVirtualQCamera) {
        vqcamera->setQCamera_Sender_IsBase(true);
        return vqcamera->sender();
    } else {
        return ((VirtualQCamera*)self)->sender();
    }
}

// Auxiliary method to allow providing re-implementation
void QCamera_OnSender(const QCamera* self, intptr_t slot) {
    auto* vqcamera = const_cast<VirtualQCamera*>(dynamic_cast<const VirtualQCamera*>(self));
    if (vqcamera && vqcamera->isVirtualQCamera) {
        vqcamera->setQCamera_Sender_Callback(reinterpret_cast<VirtualQCamera::QCamera_Sender_Callback>(slot));
    }
}

// Derived class handler implementation
int QCamera_SenderSignalIndex(const QCamera* self) {
    auto* vqcamera = const_cast<VirtualQCamera*>(dynamic_cast<const VirtualQCamera*>(self));
    if (vqcamera && vqcamera->isVirtualQCamera) {
        return vqcamera->senderSignalIndex();
    } else {
        return ((VirtualQCamera*)self)->senderSignalIndex();
    }
}

// Base class handler implementation
int QCamera_QBaseSenderSignalIndex(const QCamera* self) {
    auto* vqcamera = const_cast<VirtualQCamera*>(dynamic_cast<const VirtualQCamera*>(self));
    if (vqcamera && vqcamera->isVirtualQCamera) {
        vqcamera->setQCamera_SenderSignalIndex_IsBase(true);
        return vqcamera->senderSignalIndex();
    } else {
        return ((VirtualQCamera*)self)->senderSignalIndex();
    }
}

// Auxiliary method to allow providing re-implementation
void QCamera_OnSenderSignalIndex(const QCamera* self, intptr_t slot) {
    auto* vqcamera = const_cast<VirtualQCamera*>(dynamic_cast<const VirtualQCamera*>(self));
    if (vqcamera && vqcamera->isVirtualQCamera) {
        vqcamera->setQCamera_SenderSignalIndex_Callback(reinterpret_cast<VirtualQCamera::QCamera_SenderSignalIndex_Callback>(slot));
    }
}

// Derived class handler implementation
int QCamera_Receivers(const QCamera* self, const char* signal) {
    auto* vqcamera = const_cast<VirtualQCamera*>(dynamic_cast<const VirtualQCamera*>(self));
    if (vqcamera && vqcamera->isVirtualQCamera) {
        return vqcamera->receivers(signal);
    } else {
        return ((VirtualQCamera*)self)->receivers(signal);
    }
}

// Base class handler implementation
int QCamera_QBaseReceivers(const QCamera* self, const char* signal) {
    auto* vqcamera = const_cast<VirtualQCamera*>(dynamic_cast<const VirtualQCamera*>(self));
    if (vqcamera && vqcamera->isVirtualQCamera) {
        vqcamera->setQCamera_Receivers_IsBase(true);
        return vqcamera->receivers(signal);
    } else {
        return ((VirtualQCamera*)self)->receivers(signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QCamera_OnReceivers(const QCamera* self, intptr_t slot) {
    auto* vqcamera = const_cast<VirtualQCamera*>(dynamic_cast<const VirtualQCamera*>(self));
    if (vqcamera && vqcamera->isVirtualQCamera) {
        vqcamera->setQCamera_Receivers_Callback(reinterpret_cast<VirtualQCamera::QCamera_Receivers_Callback>(slot));
    }
}

// Derived class handler implementation
bool QCamera_IsSignalConnected(const QCamera* self, const QMetaMethod* signal) {
    auto* vqcamera = const_cast<VirtualQCamera*>(dynamic_cast<const VirtualQCamera*>(self));
    if (vqcamera && vqcamera->isVirtualQCamera) {
        return vqcamera->isSignalConnected(*signal);
    } else {
        return ((VirtualQCamera*)self)->isSignalConnected(*signal);
    }
}

// Base class handler implementation
bool QCamera_QBaseIsSignalConnected(const QCamera* self, const QMetaMethod* signal) {
    auto* vqcamera = const_cast<VirtualQCamera*>(dynamic_cast<const VirtualQCamera*>(self));
    if (vqcamera && vqcamera->isVirtualQCamera) {
        vqcamera->setQCamera_IsSignalConnected_IsBase(true);
        return vqcamera->isSignalConnected(*signal);
    } else {
        return ((VirtualQCamera*)self)->isSignalConnected(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QCamera_OnIsSignalConnected(const QCamera* self, intptr_t slot) {
    auto* vqcamera = const_cast<VirtualQCamera*>(dynamic_cast<const VirtualQCamera*>(self));
    if (vqcamera && vqcamera->isVirtualQCamera) {
        vqcamera->setQCamera_IsSignalConnected_Callback(reinterpret_cast<VirtualQCamera::QCamera_IsSignalConnected_Callback>(slot));
    }
}

void QCamera_Delete(QCamera* self) {
    delete self;
}
