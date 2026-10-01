#include <QAudioBufferInput>
#include <QAudioInput>
#include <QAudioOutput>
#include <QCamera>
#include <QChildEvent>
#include <QEvent>
#include <QImageCapture>
#include <QMediaCaptureSession>
#include <QMediaRecorder>
#include <QMetaMethod>
#include <QMetaObject>
#include <QObject>
#include <QScreenCapture>
#include <QString>
#include <QTimerEvent>
#include <QVideoFrameInput>
#include <QVideoSink>
#include <QWindowCapture>
#include <qmediacapturesession.h>
#include "libqmediacapturesession.h"
#include "libqmediacapturesession.hxx"

QMediaCaptureSession* QMediaCaptureSession_new() {
    return new VirtualQMediaCaptureSession();
}

QMediaCaptureSession* QMediaCaptureSession_new2(QObject* parent) {
    return new VirtualQMediaCaptureSession(parent);
}

QMetaObject* QMediaCaptureSession_MetaObject(const QMediaCaptureSession* self) {
    return (QMetaObject*)self->metaObject();
}

void* QMediaCaptureSession_Metacast(QMediaCaptureSession* self, const char* param1) {
    return self->qt_metacast(param1);
}

int QMediaCaptureSession_Metacall(QMediaCaptureSession* self, int param1, int param2, void** param3) {
    return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

libqt_string QMediaCaptureSession_Tr(const char* s) {
    auto _ret = QMediaCaptureSession::tr(s);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

QAudioInput* QMediaCaptureSession_AudioInput(const QMediaCaptureSession* self) {
    return self->audioInput();
}

void QMediaCaptureSession_SetAudioInput(QMediaCaptureSession* self, QAudioInput* input) {
    self->setAudioInput(input);
}

QAudioBufferInput* QMediaCaptureSession_AudioBufferInput(const QMediaCaptureSession* self) {
    return self->audioBufferInput();
}

void QMediaCaptureSession_SetAudioBufferInput(QMediaCaptureSession* self, QAudioBufferInput* input) {
    self->setAudioBufferInput(input);
}

QCamera* QMediaCaptureSession_Camera(const QMediaCaptureSession* self) {
    return self->camera();
}

void QMediaCaptureSession_SetCamera(QMediaCaptureSession* self, QCamera* camera) {
    self->setCamera(camera);
}

QImageCapture* QMediaCaptureSession_ImageCapture(QMediaCaptureSession* self) {
    return self->imageCapture();
}

void QMediaCaptureSession_SetImageCapture(QMediaCaptureSession* self, QImageCapture* imageCapture) {
    self->setImageCapture(imageCapture);
}

QScreenCapture* QMediaCaptureSession_ScreenCapture(QMediaCaptureSession* self) {
    return self->screenCapture();
}

void QMediaCaptureSession_SetScreenCapture(QMediaCaptureSession* self, QScreenCapture* screenCapture) {
    self->setScreenCapture(screenCapture);
}

QWindowCapture* QMediaCaptureSession_WindowCapture(QMediaCaptureSession* self) {
    return self->windowCapture();
}

void QMediaCaptureSession_SetWindowCapture(QMediaCaptureSession* self, QWindowCapture* windowCapture) {
    self->setWindowCapture(windowCapture);
}

QVideoFrameInput* QMediaCaptureSession_VideoFrameInput(const QMediaCaptureSession* self) {
    return self->videoFrameInput();
}

void QMediaCaptureSession_SetVideoFrameInput(QMediaCaptureSession* self, QVideoFrameInput* input) {
    self->setVideoFrameInput(input);
}

QMediaRecorder* QMediaCaptureSession_Recorder(QMediaCaptureSession* self) {
    return self->recorder();
}

void QMediaCaptureSession_SetRecorder(QMediaCaptureSession* self, QMediaRecorder* recorder) {
    self->setRecorder(recorder);
}

void QMediaCaptureSession_SetVideoOutput(QMediaCaptureSession* self, QObject* output) {
    self->setVideoOutput(output);
}

QObject* QMediaCaptureSession_VideoOutput(const QMediaCaptureSession* self) {
    return self->videoOutput();
}

void QMediaCaptureSession_SetVideoSink(QMediaCaptureSession* self, QVideoSink* sink) {
    self->setVideoSink(sink);
}

QVideoSink* QMediaCaptureSession_VideoSink(const QMediaCaptureSession* self) {
    return self->videoSink();
}

void QMediaCaptureSession_SetAudioOutput(QMediaCaptureSession* self, QAudioOutput* output) {
    self->setAudioOutput(output);
}

QAudioOutput* QMediaCaptureSession_AudioOutput(const QMediaCaptureSession* self) {
    return self->audioOutput();
}

void QMediaCaptureSession_AudioInputChanged(QMediaCaptureSession* self) {
    self->audioInputChanged();
}

void QMediaCaptureSession_Connect_AudioInputChanged(QMediaCaptureSession* self, intptr_t slot) {
    void (*slotFunc)(QMediaCaptureSession*) = reinterpret_cast<void (*)(QMediaCaptureSession*)>(slot);
    QMediaCaptureSession::connect(self,
                                  static_cast<void (QMediaCaptureSession::*)()>(&QMediaCaptureSession::audioInputChanged),
                                  [self, slotFunc]() {
                                      slotFunc(self);
                                  });
}

void QMediaCaptureSession_AudioBufferInputChanged(QMediaCaptureSession* self) {
    self->audioBufferInputChanged();
}

void QMediaCaptureSession_Connect_AudioBufferInputChanged(QMediaCaptureSession* self, intptr_t slot) {
    void (*slotFunc)(QMediaCaptureSession*) = reinterpret_cast<void (*)(QMediaCaptureSession*)>(slot);
    QMediaCaptureSession::connect(self,
                                  static_cast<void (QMediaCaptureSession::*)()>(&QMediaCaptureSession::audioBufferInputChanged),
                                  [self, slotFunc]() {
                                      slotFunc(self);
                                  });
}

void QMediaCaptureSession_CameraChanged(QMediaCaptureSession* self) {
    self->cameraChanged();
}

void QMediaCaptureSession_Connect_CameraChanged(QMediaCaptureSession* self, intptr_t slot) {
    void (*slotFunc)(QMediaCaptureSession*) = reinterpret_cast<void (*)(QMediaCaptureSession*)>(slot);
    QMediaCaptureSession::connect(self,
                                  static_cast<void (QMediaCaptureSession::*)()>(&QMediaCaptureSession::cameraChanged),
                                  [self, slotFunc]() {
                                      slotFunc(self);
                                  });
}

void QMediaCaptureSession_ScreenCaptureChanged(QMediaCaptureSession* self) {
    self->screenCaptureChanged();
}

void QMediaCaptureSession_Connect_ScreenCaptureChanged(QMediaCaptureSession* self, intptr_t slot) {
    void (*slotFunc)(QMediaCaptureSession*) = reinterpret_cast<void (*)(QMediaCaptureSession*)>(slot);
    QMediaCaptureSession::connect(self,
                                  static_cast<void (QMediaCaptureSession::*)()>(&QMediaCaptureSession::screenCaptureChanged),
                                  [self, slotFunc]() {
                                      slotFunc(self);
                                  });
}

void QMediaCaptureSession_WindowCaptureChanged(QMediaCaptureSession* self) {
    self->windowCaptureChanged();
}

void QMediaCaptureSession_Connect_WindowCaptureChanged(QMediaCaptureSession* self, intptr_t slot) {
    void (*slotFunc)(QMediaCaptureSession*) = reinterpret_cast<void (*)(QMediaCaptureSession*)>(slot);
    QMediaCaptureSession::connect(self,
                                  static_cast<void (QMediaCaptureSession::*)()>(&QMediaCaptureSession::windowCaptureChanged),
                                  [self, slotFunc]() {
                                      slotFunc(self);
                                  });
}

void QMediaCaptureSession_VideoFrameInputChanged(QMediaCaptureSession* self) {
    self->videoFrameInputChanged();
}

void QMediaCaptureSession_Connect_VideoFrameInputChanged(QMediaCaptureSession* self, intptr_t slot) {
    void (*slotFunc)(QMediaCaptureSession*) = reinterpret_cast<void (*)(QMediaCaptureSession*)>(slot);
    QMediaCaptureSession::connect(self,
                                  static_cast<void (QMediaCaptureSession::*)()>(&QMediaCaptureSession::videoFrameInputChanged),
                                  [self, slotFunc]() {
                                      slotFunc(self);
                                  });
}

void QMediaCaptureSession_ImageCaptureChanged(QMediaCaptureSession* self) {
    self->imageCaptureChanged();
}

void QMediaCaptureSession_Connect_ImageCaptureChanged(QMediaCaptureSession* self, intptr_t slot) {
    void (*slotFunc)(QMediaCaptureSession*) = reinterpret_cast<void (*)(QMediaCaptureSession*)>(slot);
    QMediaCaptureSession::connect(self,
                                  static_cast<void (QMediaCaptureSession::*)()>(&QMediaCaptureSession::imageCaptureChanged),
                                  [self, slotFunc]() {
                                      slotFunc(self);
                                  });
}

void QMediaCaptureSession_RecorderChanged(QMediaCaptureSession* self) {
    self->recorderChanged();
}

void QMediaCaptureSession_Connect_RecorderChanged(QMediaCaptureSession* self, intptr_t slot) {
    void (*slotFunc)(QMediaCaptureSession*) = reinterpret_cast<void (*)(QMediaCaptureSession*)>(slot);
    QMediaCaptureSession::connect(self,
                                  static_cast<void (QMediaCaptureSession::*)()>(&QMediaCaptureSession::recorderChanged),
                                  [self, slotFunc]() {
                                      slotFunc(self);
                                  });
}

void QMediaCaptureSession_VideoOutputChanged(QMediaCaptureSession* self) {
    self->videoOutputChanged();
}

void QMediaCaptureSession_Connect_VideoOutputChanged(QMediaCaptureSession* self, intptr_t slot) {
    void (*slotFunc)(QMediaCaptureSession*) = reinterpret_cast<void (*)(QMediaCaptureSession*)>(slot);
    QMediaCaptureSession::connect(self,
                                  static_cast<void (QMediaCaptureSession::*)()>(&QMediaCaptureSession::videoOutputChanged),
                                  [self, slotFunc]() {
                                      slotFunc(self);
                                  });
}

void QMediaCaptureSession_AudioOutputChanged(QMediaCaptureSession* self) {
    self->audioOutputChanged();
}

void QMediaCaptureSession_Connect_AudioOutputChanged(QMediaCaptureSession* self, intptr_t slot) {
    void (*slotFunc)(QMediaCaptureSession*) = reinterpret_cast<void (*)(QMediaCaptureSession*)>(slot);
    QMediaCaptureSession::connect(self,
                                  static_cast<void (QMediaCaptureSession::*)()>(&QMediaCaptureSession::audioOutputChanged),
                                  [self, slotFunc]() {
                                      slotFunc(self);
                                  });
}

libqt_string QMediaCaptureSession_Tr2(const char* s, const char* c) {
    auto _ret = QMediaCaptureSession::tr(s, c);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string QMediaCaptureSession_Tr3(const char* s, const char* c, int n) {
    auto _ret = QMediaCaptureSession::tr(s, c, static_cast<int>(n));
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
QMetaObject* QMediaCaptureSession_SuperMetaObject(const QMediaCaptureSession* self) {
    return (QMetaObject*)self->QMediaCaptureSession::metaObject();
}

// Auxiliary method to allow providing re-implementation
void QMediaCaptureSession_OnMetaObject(QMediaCaptureSession* self, intptr_t slot) {
    if (auto* vqmediacapturesession = const_cast<VirtualQMediaCaptureSession*>(dynamic_cast<const VirtualQMediaCaptureSession*>(self)))
        vqmediacapturesession->qmediacapturesession_metaobject_callback = reinterpret_cast<VirtualQMediaCaptureSession::QMediaCaptureSession_MetaObject_Callback>(slot);
}

// Base class handler implementation
void* QMediaCaptureSession_SuperMetacast(QMediaCaptureSession* self, const char* param1) {
    return self->QMediaCaptureSession::qt_metacast(param1);
}

// Auxiliary method to allow providing re-implementation
void QMediaCaptureSession_OnMetacast(QMediaCaptureSession* self, intptr_t slot) {
    if (auto* vqmediacapturesession = dynamic_cast<VirtualQMediaCaptureSession*>(self))
        vqmediacapturesession->qmediacapturesession_metacast_callback = reinterpret_cast<VirtualQMediaCaptureSession::QMediaCaptureSession_Metacast_Callback>(slot);
}

// Base class handler implementation
int QMediaCaptureSession_SuperMetacall(QMediaCaptureSession* self, int param1, int param2, void** param3) {
    return self->QMediaCaptureSession::qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

// Auxiliary method to allow providing re-implementation
void QMediaCaptureSession_OnMetacall(QMediaCaptureSession* self, intptr_t slot) {
    if (auto* vqmediacapturesession = dynamic_cast<VirtualQMediaCaptureSession*>(self))
        vqmediacapturesession->qmediacapturesession_metacall_callback = reinterpret_cast<VirtualQMediaCaptureSession::QMediaCaptureSession_Metacall_Callback>(slot);
}

// Derived class handler implementation
bool QMediaCaptureSession_Event(QMediaCaptureSession* self, QEvent* event) {
    return self->event(event);
}

// Base class handler implementation
bool QMediaCaptureSession_SuperEvent(QMediaCaptureSession* self, QEvent* event) {
    return self->QMediaCaptureSession::event(event);
}

// Auxiliary method to allow providing re-implementation
void QMediaCaptureSession_OnEvent(QMediaCaptureSession* self, intptr_t slot) {
    if (auto* vqmediacapturesession = dynamic_cast<VirtualQMediaCaptureSession*>(self))
        vqmediacapturesession->qmediacapturesession_event_callback = reinterpret_cast<VirtualQMediaCaptureSession::QMediaCaptureSession_Event_Callback>(slot);
}

// Derived class handler implementation
bool QMediaCaptureSession_EventFilter(QMediaCaptureSession* self, QObject* watched, QEvent* event) {
    return self->eventFilter(watched, event);
}

// Base class handler implementation
bool QMediaCaptureSession_SuperEventFilter(QMediaCaptureSession* self, QObject* watched, QEvent* event) {
    return self->QMediaCaptureSession::eventFilter(watched, event);
}

// Auxiliary method to allow providing re-implementation
void QMediaCaptureSession_OnEventFilter(QMediaCaptureSession* self, intptr_t slot) {
    if (auto* vqmediacapturesession = dynamic_cast<VirtualQMediaCaptureSession*>(self))
        vqmediacapturesession->qmediacapturesession_eventfilter_callback = reinterpret_cast<VirtualQMediaCaptureSession::QMediaCaptureSession_EventFilter_Callback>(slot);
}

// Derived class handler implementation
void QMediaCaptureSession_TimerEvent(QMediaCaptureSession* self, QTimerEvent* event) {
    auto* vqmediacapturesession = dynamic_cast<VirtualQMediaCaptureSession*>(self);
    if (vqmediacapturesession) {
        vqmediacapturesession->timerEvent(event);
    } else {
        qFatal("Error: Protected virtual method QMediaCaptureSession::timerEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QMediaCaptureSession_SuperTimerEvent(QMediaCaptureSession* self, QTimerEvent* event) {
    if (auto* vqmediacapturesession = dynamic_cast<VirtualQMediaCaptureSession*>(self)) {
        vqmediacapturesession->QMediaCaptureSession::timerEvent(event);
    } else
        qFatal("Error: Protected virtual method QMediaCaptureSession::timerEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QMediaCaptureSession_OnTimerEvent(QMediaCaptureSession* self, intptr_t slot) {
    if (auto* vqmediacapturesession = dynamic_cast<VirtualQMediaCaptureSession*>(self))
        vqmediacapturesession->qmediacapturesession_timerevent_callback = reinterpret_cast<VirtualQMediaCaptureSession::QMediaCaptureSession_TimerEvent_Callback>(slot);
}

// Derived class handler implementation
void QMediaCaptureSession_ChildEvent(QMediaCaptureSession* self, QChildEvent* event) {
    auto* vqmediacapturesession = dynamic_cast<VirtualQMediaCaptureSession*>(self);
    if (vqmediacapturesession) {
        vqmediacapturesession->childEvent(event);
    } else {
        qFatal("Error: Protected virtual method QMediaCaptureSession::childEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QMediaCaptureSession_SuperChildEvent(QMediaCaptureSession* self, QChildEvent* event) {
    if (auto* vqmediacapturesession = dynamic_cast<VirtualQMediaCaptureSession*>(self)) {
        vqmediacapturesession->QMediaCaptureSession::childEvent(event);
    } else
        qFatal("Error: Protected virtual method QMediaCaptureSession::childEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QMediaCaptureSession_OnChildEvent(QMediaCaptureSession* self, intptr_t slot) {
    if (auto* vqmediacapturesession = dynamic_cast<VirtualQMediaCaptureSession*>(self))
        vqmediacapturesession->qmediacapturesession_childevent_callback = reinterpret_cast<VirtualQMediaCaptureSession::QMediaCaptureSession_ChildEvent_Callback>(slot);
}

// Derived class handler implementation
void QMediaCaptureSession_CustomEvent(QMediaCaptureSession* self, QEvent* event) {
    auto* vqmediacapturesession = dynamic_cast<VirtualQMediaCaptureSession*>(self);
    if (vqmediacapturesession) {
        vqmediacapturesession->customEvent(event);
    } else {
        qFatal("Error: Protected virtual method QMediaCaptureSession::customEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QMediaCaptureSession_SuperCustomEvent(QMediaCaptureSession* self, QEvent* event) {
    if (auto* vqmediacapturesession = dynamic_cast<VirtualQMediaCaptureSession*>(self)) {
        vqmediacapturesession->QMediaCaptureSession::customEvent(event);
    } else
        qFatal("Error: Protected virtual method QMediaCaptureSession::customEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QMediaCaptureSession_OnCustomEvent(QMediaCaptureSession* self, intptr_t slot) {
    if (auto* vqmediacapturesession = dynamic_cast<VirtualQMediaCaptureSession*>(self))
        vqmediacapturesession->qmediacapturesession_customevent_callback = reinterpret_cast<VirtualQMediaCaptureSession::QMediaCaptureSession_CustomEvent_Callback>(slot);
}

// Derived class handler implementation
void QMediaCaptureSession_ConnectNotify(QMediaCaptureSession* self, const QMetaMethod* signal) {
    auto* vqmediacapturesession = dynamic_cast<VirtualQMediaCaptureSession*>(self);
    if (vqmediacapturesession) {
        vqmediacapturesession->connectNotify(*signal);
    } else {
        qFatal("Error: Protected virtual method QMediaCaptureSession::connectNotify called without a directly constructed type");
    }
}

// Base class handler implementation
void QMediaCaptureSession_SuperConnectNotify(QMediaCaptureSession* self, const QMetaMethod* signal) {
    if (auto* vqmediacapturesession = dynamic_cast<VirtualQMediaCaptureSession*>(self)) {
        vqmediacapturesession->QMediaCaptureSession::connectNotify(*signal);
    } else
        qFatal("Error: Protected virtual method QMediaCaptureSession::connectNotify called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QMediaCaptureSession_OnConnectNotify(QMediaCaptureSession* self, intptr_t slot) {
    if (auto* vqmediacapturesession = dynamic_cast<VirtualQMediaCaptureSession*>(self))
        vqmediacapturesession->qmediacapturesession_connectnotify_callback = reinterpret_cast<VirtualQMediaCaptureSession::QMediaCaptureSession_ConnectNotify_Callback>(slot);
}

// Derived class handler implementation
void QMediaCaptureSession_DisconnectNotify(QMediaCaptureSession* self, const QMetaMethod* signal) {
    auto* vqmediacapturesession = dynamic_cast<VirtualQMediaCaptureSession*>(self);
    if (vqmediacapturesession) {
        vqmediacapturesession->disconnectNotify(*signal);
    } else {
        qFatal("Error: Protected virtual method QMediaCaptureSession::disconnectNotify called without a directly constructed type");
    }
}

// Base class handler implementation
void QMediaCaptureSession_SuperDisconnectNotify(QMediaCaptureSession* self, const QMetaMethod* signal) {
    if (auto* vqmediacapturesession = dynamic_cast<VirtualQMediaCaptureSession*>(self)) {
        vqmediacapturesession->QMediaCaptureSession::disconnectNotify(*signal);
    } else
        qFatal("Error: Protected virtual method QMediaCaptureSession::disconnectNotify called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QMediaCaptureSession_OnDisconnectNotify(QMediaCaptureSession* self, intptr_t slot) {
    if (auto* vqmediacapturesession = dynamic_cast<VirtualQMediaCaptureSession*>(self))
        vqmediacapturesession->qmediacapturesession_disconnectnotify_callback = reinterpret_cast<VirtualQMediaCaptureSession::QMediaCaptureSession_DisconnectNotify_Callback>(slot);
}

// Derived class protected handler implementation
QObject* QMediaCaptureSession_Sender(const QMediaCaptureSession* self) {
    if (auto* vqmediacapturesession = const_cast<VirtualQMediaCaptureSession*>(dynamic_cast<const VirtualQMediaCaptureSession*>(self))) {
        return vqmediacapturesession->VirtualQMediaCaptureSession::sender();
    } else
        qFatal("Error: Protected method QMediaCaptureSession::sender called without a directly constructed type");
}

// Derived class protected handler implementation
int QMediaCaptureSession_SenderSignalIndex(const QMediaCaptureSession* self) {
    if (auto* vqmediacapturesession = const_cast<VirtualQMediaCaptureSession*>(dynamic_cast<const VirtualQMediaCaptureSession*>(self))) {
        return vqmediacapturesession->VirtualQMediaCaptureSession::senderSignalIndex();
    } else
        qFatal("Error: Protected method QMediaCaptureSession::senderSignalIndex called without a directly constructed type");
}

// Derived class protected handler implementation
int QMediaCaptureSession_Receivers(const QMediaCaptureSession* self, const char* signal) {
    if (auto* vqmediacapturesession = const_cast<VirtualQMediaCaptureSession*>(dynamic_cast<const VirtualQMediaCaptureSession*>(self))) {
        return vqmediacapturesession->VirtualQMediaCaptureSession::receivers(signal);
    } else
        qFatal("Error: Protected method QMediaCaptureSession::receivers called without a directly constructed type");
}

// Derived class protected handler implementation
bool QMediaCaptureSession_IsSignalConnected(const QMediaCaptureSession* self, const QMetaMethod* signal) {
    if (auto* vqmediacapturesession = const_cast<VirtualQMediaCaptureSession*>(dynamic_cast<const VirtualQMediaCaptureSession*>(self))) {
        return vqmediacapturesession->VirtualQMediaCaptureSession::isSignalConnected(*signal);
    } else
        qFatal("Error: Protected method QMediaCaptureSession::isSignalConnected called without a directly constructed type");
}

void QMediaCaptureSession_Delete(QMediaCaptureSession* self) {
    delete self;
}
