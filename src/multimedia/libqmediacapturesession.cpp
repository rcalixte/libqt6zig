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
#include <QString>
#include <QByteArray>
#include <cstring>
#include <QTimerEvent>
#include <QVideoSink>
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
    auto* vqmediacapturesession = dynamic_cast<VirtualQMediaCaptureSession*>(self);
    if (vqmediacapturesession && vqmediacapturesession->isVirtualQMediaCaptureSession) {
        return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return ((VirtualQMediaCaptureSession*)self)->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

// Subclass method to allow providing a virtual method re-implementation
void QMediaCaptureSession_OnMetacall(QMediaCaptureSession* self, intptr_t slot) {
    auto* vqmediacapturesession = dynamic_cast<VirtualQMediaCaptureSession*>(self);
    if (vqmediacapturesession && vqmediacapturesession->isVirtualQMediaCaptureSession) {
        vqmediacapturesession->setQMediaCaptureSession_Metacall_Callback(reinterpret_cast<VirtualQMediaCaptureSession::QMediaCaptureSession_Metacall_Callback>(slot));
    }
}

// Virtual base class handler implementation
int QMediaCaptureSession_QBaseMetacall(QMediaCaptureSession* self, int param1, int param2, void** param3) {
    auto* vqmediacapturesession = dynamic_cast<VirtualQMediaCaptureSession*>(self);
    if (vqmediacapturesession && vqmediacapturesession->isVirtualQMediaCaptureSession) {
        vqmediacapturesession->setQMediaCaptureSession_Metacall_IsBase(true);
        return vqmediacapturesession->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return ((VirtualQMediaCaptureSession*)self)->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

libqt_string QMediaCaptureSession_Tr(const char* s) {
    QString _ret = QMediaCaptureSession::tr(s);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<char*>(malloc((_str.len + 1) * sizeof(char)));
    memcpy(_str.data, _b.data(), _str.len);
    _str.data[_str.len] = '\0';
    return _str;
}

QAudioInput* QMediaCaptureSession_AudioInput(const QMediaCaptureSession* self) {
    return self->audioInput();
}

void QMediaCaptureSession_SetAudioInput(QMediaCaptureSession* self, QAudioInput* input) {
    self->setAudioInput(input);
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
    QMediaCaptureSession::connect(self, &QMediaCaptureSession::audioInputChanged, [self, slotFunc]() {
        slotFunc(self);
    });
}

void QMediaCaptureSession_CameraChanged(QMediaCaptureSession* self) {
    self->cameraChanged();
}

void QMediaCaptureSession_Connect_CameraChanged(QMediaCaptureSession* self, intptr_t slot) {
    void (*slotFunc)(QMediaCaptureSession*) = reinterpret_cast<void (*)(QMediaCaptureSession*)>(slot);
    QMediaCaptureSession::connect(self, &QMediaCaptureSession::cameraChanged, [self, slotFunc]() {
        slotFunc(self);
    });
}

void QMediaCaptureSession_ImageCaptureChanged(QMediaCaptureSession* self) {
    self->imageCaptureChanged();
}

void QMediaCaptureSession_Connect_ImageCaptureChanged(QMediaCaptureSession* self, intptr_t slot) {
    void (*slotFunc)(QMediaCaptureSession*) = reinterpret_cast<void (*)(QMediaCaptureSession*)>(slot);
    QMediaCaptureSession::connect(self, &QMediaCaptureSession::imageCaptureChanged, [self, slotFunc]() {
        slotFunc(self);
    });
}

void QMediaCaptureSession_RecorderChanged(QMediaCaptureSession* self) {
    self->recorderChanged();
}

void QMediaCaptureSession_Connect_RecorderChanged(QMediaCaptureSession* self, intptr_t slot) {
    void (*slotFunc)(QMediaCaptureSession*) = reinterpret_cast<void (*)(QMediaCaptureSession*)>(slot);
    QMediaCaptureSession::connect(self, &QMediaCaptureSession::recorderChanged, [self, slotFunc]() {
        slotFunc(self);
    });
}

void QMediaCaptureSession_VideoOutputChanged(QMediaCaptureSession* self) {
    self->videoOutputChanged();
}

void QMediaCaptureSession_Connect_VideoOutputChanged(QMediaCaptureSession* self, intptr_t slot) {
    void (*slotFunc)(QMediaCaptureSession*) = reinterpret_cast<void (*)(QMediaCaptureSession*)>(slot);
    QMediaCaptureSession::connect(self, &QMediaCaptureSession::videoOutputChanged, [self, slotFunc]() {
        slotFunc(self);
    });
}

void QMediaCaptureSession_AudioOutputChanged(QMediaCaptureSession* self) {
    self->audioOutputChanged();
}

void QMediaCaptureSession_Connect_AudioOutputChanged(QMediaCaptureSession* self, intptr_t slot) {
    void (*slotFunc)(QMediaCaptureSession*) = reinterpret_cast<void (*)(QMediaCaptureSession*)>(slot);
    QMediaCaptureSession::connect(self, &QMediaCaptureSession::audioOutputChanged, [self, slotFunc]() {
        slotFunc(self);
    });
}

libqt_string QMediaCaptureSession_Tr2(const char* s, const char* c) {
    QString _ret = QMediaCaptureSession::tr(s, c);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<char*>(malloc((_str.len + 1) * sizeof(char)));
    memcpy(_str.data, _b.data(), _str.len);
    _str.data[_str.len] = '\0';
    return _str;
}

libqt_string QMediaCaptureSession_Tr3(const char* s, const char* c, int n) {
    QString _ret = QMediaCaptureSession::tr(s, c, static_cast<int>(n));
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<char*>(malloc((_str.len + 1) * sizeof(char)));
    memcpy(_str.data, _b.data(), _str.len);
    _str.data[_str.len] = '\0';
    return _str;
}

// Derived class handler implementation
bool QMediaCaptureSession_Event(QMediaCaptureSession* self, QEvent* event) {
    auto* vqmediacapturesession = dynamic_cast<VirtualQMediaCaptureSession*>(self);
    if (vqmediacapturesession && vqmediacapturesession->isVirtualQMediaCaptureSession) {
        return vqmediacapturesession->event(event);
    } else {
        return self->QMediaCaptureSession::event(event);
    }
}

// Base class handler implementation
bool QMediaCaptureSession_QBaseEvent(QMediaCaptureSession* self, QEvent* event) {
    auto* vqmediacapturesession = dynamic_cast<VirtualQMediaCaptureSession*>(self);
    if (vqmediacapturesession && vqmediacapturesession->isVirtualQMediaCaptureSession) {
        vqmediacapturesession->setQMediaCaptureSession_Event_IsBase(true);
        return vqmediacapturesession->event(event);
    } else {
        return self->QMediaCaptureSession::event(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QMediaCaptureSession_OnEvent(QMediaCaptureSession* self, intptr_t slot) {
    auto* vqmediacapturesession = dynamic_cast<VirtualQMediaCaptureSession*>(self);
    if (vqmediacapturesession && vqmediacapturesession->isVirtualQMediaCaptureSession) {
        vqmediacapturesession->setQMediaCaptureSession_Event_Callback(reinterpret_cast<VirtualQMediaCaptureSession::QMediaCaptureSession_Event_Callback>(slot));
    }
}

// Derived class handler implementation
bool QMediaCaptureSession_EventFilter(QMediaCaptureSession* self, QObject* watched, QEvent* event) {
    auto* vqmediacapturesession = dynamic_cast<VirtualQMediaCaptureSession*>(self);
    if (vqmediacapturesession && vqmediacapturesession->isVirtualQMediaCaptureSession) {
        return vqmediacapturesession->eventFilter(watched, event);
    } else {
        return self->QMediaCaptureSession::eventFilter(watched, event);
    }
}

// Base class handler implementation
bool QMediaCaptureSession_QBaseEventFilter(QMediaCaptureSession* self, QObject* watched, QEvent* event) {
    auto* vqmediacapturesession = dynamic_cast<VirtualQMediaCaptureSession*>(self);
    if (vqmediacapturesession && vqmediacapturesession->isVirtualQMediaCaptureSession) {
        vqmediacapturesession->setQMediaCaptureSession_EventFilter_IsBase(true);
        return vqmediacapturesession->eventFilter(watched, event);
    } else {
        return self->QMediaCaptureSession::eventFilter(watched, event);
    }
}

// Auxiliary method to allow providing re-implementation
void QMediaCaptureSession_OnEventFilter(QMediaCaptureSession* self, intptr_t slot) {
    auto* vqmediacapturesession = dynamic_cast<VirtualQMediaCaptureSession*>(self);
    if (vqmediacapturesession && vqmediacapturesession->isVirtualQMediaCaptureSession) {
        vqmediacapturesession->setQMediaCaptureSession_EventFilter_Callback(reinterpret_cast<VirtualQMediaCaptureSession::QMediaCaptureSession_EventFilter_Callback>(slot));
    }
}

// Derived class handler implementation
void QMediaCaptureSession_TimerEvent(QMediaCaptureSession* self, QTimerEvent* event) {
    auto* vqmediacapturesession = dynamic_cast<VirtualQMediaCaptureSession*>(self);
    if (vqmediacapturesession && vqmediacapturesession->isVirtualQMediaCaptureSession) {
        vqmediacapturesession->timerEvent(event);
    } else {
        ((VirtualQMediaCaptureSession*)self)->timerEvent(event);
    }
}

// Base class handler implementation
void QMediaCaptureSession_QBaseTimerEvent(QMediaCaptureSession* self, QTimerEvent* event) {
    auto* vqmediacapturesession = dynamic_cast<VirtualQMediaCaptureSession*>(self);
    if (vqmediacapturesession && vqmediacapturesession->isVirtualQMediaCaptureSession) {
        vqmediacapturesession->setQMediaCaptureSession_TimerEvent_IsBase(true);
        vqmediacapturesession->timerEvent(event);
    } else {
        ((VirtualQMediaCaptureSession*)self)->timerEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QMediaCaptureSession_OnTimerEvent(QMediaCaptureSession* self, intptr_t slot) {
    auto* vqmediacapturesession = dynamic_cast<VirtualQMediaCaptureSession*>(self);
    if (vqmediacapturesession && vqmediacapturesession->isVirtualQMediaCaptureSession) {
        vqmediacapturesession->setQMediaCaptureSession_TimerEvent_Callback(reinterpret_cast<VirtualQMediaCaptureSession::QMediaCaptureSession_TimerEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QMediaCaptureSession_ChildEvent(QMediaCaptureSession* self, QChildEvent* event) {
    auto* vqmediacapturesession = dynamic_cast<VirtualQMediaCaptureSession*>(self);
    if (vqmediacapturesession && vqmediacapturesession->isVirtualQMediaCaptureSession) {
        vqmediacapturesession->childEvent(event);
    } else {
        ((VirtualQMediaCaptureSession*)self)->childEvent(event);
    }
}

// Base class handler implementation
void QMediaCaptureSession_QBaseChildEvent(QMediaCaptureSession* self, QChildEvent* event) {
    auto* vqmediacapturesession = dynamic_cast<VirtualQMediaCaptureSession*>(self);
    if (vqmediacapturesession && vqmediacapturesession->isVirtualQMediaCaptureSession) {
        vqmediacapturesession->setQMediaCaptureSession_ChildEvent_IsBase(true);
        vqmediacapturesession->childEvent(event);
    } else {
        ((VirtualQMediaCaptureSession*)self)->childEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QMediaCaptureSession_OnChildEvent(QMediaCaptureSession* self, intptr_t slot) {
    auto* vqmediacapturesession = dynamic_cast<VirtualQMediaCaptureSession*>(self);
    if (vqmediacapturesession && vqmediacapturesession->isVirtualQMediaCaptureSession) {
        vqmediacapturesession->setQMediaCaptureSession_ChildEvent_Callback(reinterpret_cast<VirtualQMediaCaptureSession::QMediaCaptureSession_ChildEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QMediaCaptureSession_CustomEvent(QMediaCaptureSession* self, QEvent* event) {
    auto* vqmediacapturesession = dynamic_cast<VirtualQMediaCaptureSession*>(self);
    if (vqmediacapturesession && vqmediacapturesession->isVirtualQMediaCaptureSession) {
        vqmediacapturesession->customEvent(event);
    } else {
        ((VirtualQMediaCaptureSession*)self)->customEvent(event);
    }
}

// Base class handler implementation
void QMediaCaptureSession_QBaseCustomEvent(QMediaCaptureSession* self, QEvent* event) {
    auto* vqmediacapturesession = dynamic_cast<VirtualQMediaCaptureSession*>(self);
    if (vqmediacapturesession && vqmediacapturesession->isVirtualQMediaCaptureSession) {
        vqmediacapturesession->setQMediaCaptureSession_CustomEvent_IsBase(true);
        vqmediacapturesession->customEvent(event);
    } else {
        ((VirtualQMediaCaptureSession*)self)->customEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QMediaCaptureSession_OnCustomEvent(QMediaCaptureSession* self, intptr_t slot) {
    auto* vqmediacapturesession = dynamic_cast<VirtualQMediaCaptureSession*>(self);
    if (vqmediacapturesession && vqmediacapturesession->isVirtualQMediaCaptureSession) {
        vqmediacapturesession->setQMediaCaptureSession_CustomEvent_Callback(reinterpret_cast<VirtualQMediaCaptureSession::QMediaCaptureSession_CustomEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QMediaCaptureSession_ConnectNotify(QMediaCaptureSession* self, const QMetaMethod* signal) {
    auto* vqmediacapturesession = dynamic_cast<VirtualQMediaCaptureSession*>(self);
    if (vqmediacapturesession && vqmediacapturesession->isVirtualQMediaCaptureSession) {
        vqmediacapturesession->connectNotify(*signal);
    } else {
        ((VirtualQMediaCaptureSession*)self)->connectNotify(*signal);
    }
}

// Base class handler implementation
void QMediaCaptureSession_QBaseConnectNotify(QMediaCaptureSession* self, const QMetaMethod* signal) {
    auto* vqmediacapturesession = dynamic_cast<VirtualQMediaCaptureSession*>(self);
    if (vqmediacapturesession && vqmediacapturesession->isVirtualQMediaCaptureSession) {
        vqmediacapturesession->setQMediaCaptureSession_ConnectNotify_IsBase(true);
        vqmediacapturesession->connectNotify(*signal);
    } else {
        ((VirtualQMediaCaptureSession*)self)->connectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QMediaCaptureSession_OnConnectNotify(QMediaCaptureSession* self, intptr_t slot) {
    auto* vqmediacapturesession = dynamic_cast<VirtualQMediaCaptureSession*>(self);
    if (vqmediacapturesession && vqmediacapturesession->isVirtualQMediaCaptureSession) {
        vqmediacapturesession->setQMediaCaptureSession_ConnectNotify_Callback(reinterpret_cast<VirtualQMediaCaptureSession::QMediaCaptureSession_ConnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
void QMediaCaptureSession_DisconnectNotify(QMediaCaptureSession* self, const QMetaMethod* signal) {
    auto* vqmediacapturesession = dynamic_cast<VirtualQMediaCaptureSession*>(self);
    if (vqmediacapturesession && vqmediacapturesession->isVirtualQMediaCaptureSession) {
        vqmediacapturesession->disconnectNotify(*signal);
    } else {
        ((VirtualQMediaCaptureSession*)self)->disconnectNotify(*signal);
    }
}

// Base class handler implementation
void QMediaCaptureSession_QBaseDisconnectNotify(QMediaCaptureSession* self, const QMetaMethod* signal) {
    auto* vqmediacapturesession = dynamic_cast<VirtualQMediaCaptureSession*>(self);
    if (vqmediacapturesession && vqmediacapturesession->isVirtualQMediaCaptureSession) {
        vqmediacapturesession->setQMediaCaptureSession_DisconnectNotify_IsBase(true);
        vqmediacapturesession->disconnectNotify(*signal);
    } else {
        ((VirtualQMediaCaptureSession*)self)->disconnectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QMediaCaptureSession_OnDisconnectNotify(QMediaCaptureSession* self, intptr_t slot) {
    auto* vqmediacapturesession = dynamic_cast<VirtualQMediaCaptureSession*>(self);
    if (vqmediacapturesession && vqmediacapturesession->isVirtualQMediaCaptureSession) {
        vqmediacapturesession->setQMediaCaptureSession_DisconnectNotify_Callback(reinterpret_cast<VirtualQMediaCaptureSession::QMediaCaptureSession_DisconnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
QObject* QMediaCaptureSession_Sender(const QMediaCaptureSession* self) {
    auto* vqmediacapturesession = const_cast<VirtualQMediaCaptureSession*>(dynamic_cast<const VirtualQMediaCaptureSession*>(self));
    if (vqmediacapturesession && vqmediacapturesession->isVirtualQMediaCaptureSession) {
        return vqmediacapturesession->sender();
    } else {
        return ((VirtualQMediaCaptureSession*)self)->sender();
    }
}

// Base class handler implementation
QObject* QMediaCaptureSession_QBaseSender(const QMediaCaptureSession* self) {
    auto* vqmediacapturesession = const_cast<VirtualQMediaCaptureSession*>(dynamic_cast<const VirtualQMediaCaptureSession*>(self));
    if (vqmediacapturesession && vqmediacapturesession->isVirtualQMediaCaptureSession) {
        vqmediacapturesession->setQMediaCaptureSession_Sender_IsBase(true);
        return vqmediacapturesession->sender();
    } else {
        return ((VirtualQMediaCaptureSession*)self)->sender();
    }
}

// Auxiliary method to allow providing re-implementation
void QMediaCaptureSession_OnSender(const QMediaCaptureSession* self, intptr_t slot) {
    auto* vqmediacapturesession = const_cast<VirtualQMediaCaptureSession*>(dynamic_cast<const VirtualQMediaCaptureSession*>(self));
    if (vqmediacapturesession && vqmediacapturesession->isVirtualQMediaCaptureSession) {
        vqmediacapturesession->setQMediaCaptureSession_Sender_Callback(reinterpret_cast<VirtualQMediaCaptureSession::QMediaCaptureSession_Sender_Callback>(slot));
    }
}

// Derived class handler implementation
int QMediaCaptureSession_SenderSignalIndex(const QMediaCaptureSession* self) {
    auto* vqmediacapturesession = const_cast<VirtualQMediaCaptureSession*>(dynamic_cast<const VirtualQMediaCaptureSession*>(self));
    if (vqmediacapturesession && vqmediacapturesession->isVirtualQMediaCaptureSession) {
        return vqmediacapturesession->senderSignalIndex();
    } else {
        return ((VirtualQMediaCaptureSession*)self)->senderSignalIndex();
    }
}

// Base class handler implementation
int QMediaCaptureSession_QBaseSenderSignalIndex(const QMediaCaptureSession* self) {
    auto* vqmediacapturesession = const_cast<VirtualQMediaCaptureSession*>(dynamic_cast<const VirtualQMediaCaptureSession*>(self));
    if (vqmediacapturesession && vqmediacapturesession->isVirtualQMediaCaptureSession) {
        vqmediacapturesession->setQMediaCaptureSession_SenderSignalIndex_IsBase(true);
        return vqmediacapturesession->senderSignalIndex();
    } else {
        return ((VirtualQMediaCaptureSession*)self)->senderSignalIndex();
    }
}

// Auxiliary method to allow providing re-implementation
void QMediaCaptureSession_OnSenderSignalIndex(const QMediaCaptureSession* self, intptr_t slot) {
    auto* vqmediacapturesession = const_cast<VirtualQMediaCaptureSession*>(dynamic_cast<const VirtualQMediaCaptureSession*>(self));
    if (vqmediacapturesession && vqmediacapturesession->isVirtualQMediaCaptureSession) {
        vqmediacapturesession->setQMediaCaptureSession_SenderSignalIndex_Callback(reinterpret_cast<VirtualQMediaCaptureSession::QMediaCaptureSession_SenderSignalIndex_Callback>(slot));
    }
}

// Derived class handler implementation
int QMediaCaptureSession_Receivers(const QMediaCaptureSession* self, const char* signal) {
    auto* vqmediacapturesession = const_cast<VirtualQMediaCaptureSession*>(dynamic_cast<const VirtualQMediaCaptureSession*>(self));
    if (vqmediacapturesession && vqmediacapturesession->isVirtualQMediaCaptureSession) {
        return vqmediacapturesession->receivers(signal);
    } else {
        return ((VirtualQMediaCaptureSession*)self)->receivers(signal);
    }
}

// Base class handler implementation
int QMediaCaptureSession_QBaseReceivers(const QMediaCaptureSession* self, const char* signal) {
    auto* vqmediacapturesession = const_cast<VirtualQMediaCaptureSession*>(dynamic_cast<const VirtualQMediaCaptureSession*>(self));
    if (vqmediacapturesession && vqmediacapturesession->isVirtualQMediaCaptureSession) {
        vqmediacapturesession->setQMediaCaptureSession_Receivers_IsBase(true);
        return vqmediacapturesession->receivers(signal);
    } else {
        return ((VirtualQMediaCaptureSession*)self)->receivers(signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QMediaCaptureSession_OnReceivers(const QMediaCaptureSession* self, intptr_t slot) {
    auto* vqmediacapturesession = const_cast<VirtualQMediaCaptureSession*>(dynamic_cast<const VirtualQMediaCaptureSession*>(self));
    if (vqmediacapturesession && vqmediacapturesession->isVirtualQMediaCaptureSession) {
        vqmediacapturesession->setQMediaCaptureSession_Receivers_Callback(reinterpret_cast<VirtualQMediaCaptureSession::QMediaCaptureSession_Receivers_Callback>(slot));
    }
}

// Derived class handler implementation
bool QMediaCaptureSession_IsSignalConnected(const QMediaCaptureSession* self, const QMetaMethod* signal) {
    auto* vqmediacapturesession = const_cast<VirtualQMediaCaptureSession*>(dynamic_cast<const VirtualQMediaCaptureSession*>(self));
    if (vqmediacapturesession && vqmediacapturesession->isVirtualQMediaCaptureSession) {
        return vqmediacapturesession->isSignalConnected(*signal);
    } else {
        return ((VirtualQMediaCaptureSession*)self)->isSignalConnected(*signal);
    }
}

// Base class handler implementation
bool QMediaCaptureSession_QBaseIsSignalConnected(const QMediaCaptureSession* self, const QMetaMethod* signal) {
    auto* vqmediacapturesession = const_cast<VirtualQMediaCaptureSession*>(dynamic_cast<const VirtualQMediaCaptureSession*>(self));
    if (vqmediacapturesession && vqmediacapturesession->isVirtualQMediaCaptureSession) {
        vqmediacapturesession->setQMediaCaptureSession_IsSignalConnected_IsBase(true);
        return vqmediacapturesession->isSignalConnected(*signal);
    } else {
        return ((VirtualQMediaCaptureSession*)self)->isSignalConnected(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QMediaCaptureSession_OnIsSignalConnected(const QMediaCaptureSession* self, intptr_t slot) {
    auto* vqmediacapturesession = const_cast<VirtualQMediaCaptureSession*>(dynamic_cast<const VirtualQMediaCaptureSession*>(self));
    if (vqmediacapturesession && vqmediacapturesession->isVirtualQMediaCaptureSession) {
        vqmediacapturesession->setQMediaCaptureSession_IsSignalConnected_Callback(reinterpret_cast<VirtualQMediaCaptureSession::QMediaCaptureSession_IsSignalConnected_Callback>(slot));
    }
}

void QMediaCaptureSession_Delete(QMediaCaptureSession* self) {
    delete self;
}
