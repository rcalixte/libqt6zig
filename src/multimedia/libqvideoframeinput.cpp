#include <QChildEvent>
#include <QEvent>
#include <QMediaCaptureSession>
#include <QMetaMethod>
#include <QMetaObject>
#include <QObject>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <QTimerEvent>
#include <QVideoFrame>
#include <QVideoFrameFormat>
#include <QVideoFrameInput>
#include <qvideoframeinput.h>
#include "libqvideoframeinput.h"
#include "libqvideoframeinput.hxx"

QVideoFrameInput* QVideoFrameInput_new() {
    return new VirtualQVideoFrameInput();
}

QVideoFrameInput* QVideoFrameInput_new2(const QVideoFrameFormat* format) {
    return new VirtualQVideoFrameInput(*format);
}

QVideoFrameInput* QVideoFrameInput_new3(QObject* parent) {
    return new VirtualQVideoFrameInput(parent);
}

QVideoFrameInput* QVideoFrameInput_new4(const QVideoFrameFormat* format, QObject* parent) {
    return new VirtualQVideoFrameInput(*format, parent);
}

QMetaObject* QVideoFrameInput_MetaObject(const QVideoFrameInput* self) {
    return (QMetaObject*)self->metaObject();
}

void* QVideoFrameInput_Metacast(QVideoFrameInput* self, const char* param1) {
    return self->qt_metacast(param1);
}

int QVideoFrameInput_Metacall(QVideoFrameInput* self, int param1, int param2, void** param3) {
    auto* vqvideoframeinput = dynamic_cast<VirtualQVideoFrameInput*>(self);
    if (vqvideoframeinput && vqvideoframeinput->isVirtualQVideoFrameInput) {
        return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return ((VirtualQVideoFrameInput*)self)->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

libqt_string QVideoFrameInput_Tr(const char* s) {
    QString _ret = QVideoFrameInput::tr(s);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

bool QVideoFrameInput_SendVideoFrame(QVideoFrameInput* self, const QVideoFrame* frame) {
    return self->sendVideoFrame(*frame);
}

QVideoFrameFormat* QVideoFrameInput_Format(const QVideoFrameInput* self) {
    return new QVideoFrameFormat(self->format());
}

QMediaCaptureSession* QVideoFrameInput_CaptureSession(const QVideoFrameInput* self) {
    return self->captureSession();
}

void QVideoFrameInput_ReadyToSendVideoFrame(QVideoFrameInput* self) {
    self->readyToSendVideoFrame();
}

void QVideoFrameInput_Connect_ReadyToSendVideoFrame(QVideoFrameInput* self, intptr_t slot) {
    void (*slotFunc)(QVideoFrameInput*) = reinterpret_cast<void (*)(QVideoFrameInput*)>(slot);
    QVideoFrameInput::connect(self, &QVideoFrameInput::readyToSendVideoFrame, [self, slotFunc]() {
        slotFunc(self);
    });
}

libqt_string QVideoFrameInput_Tr2(const char* s, const char* c) {
    QString _ret = QVideoFrameInput::tr(s, c);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string QVideoFrameInput_Tr3(const char* s, const char* c, int n) {
    QString _ret = QVideoFrameInput::tr(s, c, static_cast<int>(n));
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
int QVideoFrameInput_QBaseMetacall(QVideoFrameInput* self, int param1, int param2, void** param3) {
    auto* vqvideoframeinput = dynamic_cast<VirtualQVideoFrameInput*>(self);
    if (vqvideoframeinput && vqvideoframeinput->isVirtualQVideoFrameInput) {
        vqvideoframeinput->setQVideoFrameInput_Metacall_IsBase(true);
        return vqvideoframeinput->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return self->QVideoFrameInput::qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

// Auxiliary method to allow providing re-implementation
void QVideoFrameInput_OnMetacall(QVideoFrameInput* self, intptr_t slot) {
    auto* vqvideoframeinput = dynamic_cast<VirtualQVideoFrameInput*>(self);
    if (vqvideoframeinput && vqvideoframeinput->isVirtualQVideoFrameInput) {
        vqvideoframeinput->setQVideoFrameInput_Metacall_Callback(reinterpret_cast<VirtualQVideoFrameInput::QVideoFrameInput_Metacall_Callback>(slot));
    }
}

// Derived class handler implementation
bool QVideoFrameInput_Event(QVideoFrameInput* self, QEvent* event) {
    auto* vqvideoframeinput = dynamic_cast<VirtualQVideoFrameInput*>(self);
    if (vqvideoframeinput && vqvideoframeinput->isVirtualQVideoFrameInput) {
        return vqvideoframeinput->event(event);
    } else {
        return self->QVideoFrameInput::event(event);
    }
}

// Base class handler implementation
bool QVideoFrameInput_QBaseEvent(QVideoFrameInput* self, QEvent* event) {
    auto* vqvideoframeinput = dynamic_cast<VirtualQVideoFrameInput*>(self);
    if (vqvideoframeinput && vqvideoframeinput->isVirtualQVideoFrameInput) {
        vqvideoframeinput->setQVideoFrameInput_Event_IsBase(true);
        return vqvideoframeinput->event(event);
    } else {
        return self->QVideoFrameInput::event(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QVideoFrameInput_OnEvent(QVideoFrameInput* self, intptr_t slot) {
    auto* vqvideoframeinput = dynamic_cast<VirtualQVideoFrameInput*>(self);
    if (vqvideoframeinput && vqvideoframeinput->isVirtualQVideoFrameInput) {
        vqvideoframeinput->setQVideoFrameInput_Event_Callback(reinterpret_cast<VirtualQVideoFrameInput::QVideoFrameInput_Event_Callback>(slot));
    }
}

// Derived class handler implementation
bool QVideoFrameInput_EventFilter(QVideoFrameInput* self, QObject* watched, QEvent* event) {
    auto* vqvideoframeinput = dynamic_cast<VirtualQVideoFrameInput*>(self);
    if (vqvideoframeinput && vqvideoframeinput->isVirtualQVideoFrameInput) {
        return vqvideoframeinput->eventFilter(watched, event);
    } else {
        return self->QVideoFrameInput::eventFilter(watched, event);
    }
}

// Base class handler implementation
bool QVideoFrameInput_QBaseEventFilter(QVideoFrameInput* self, QObject* watched, QEvent* event) {
    auto* vqvideoframeinput = dynamic_cast<VirtualQVideoFrameInput*>(self);
    if (vqvideoframeinput && vqvideoframeinput->isVirtualQVideoFrameInput) {
        vqvideoframeinput->setQVideoFrameInput_EventFilter_IsBase(true);
        return vqvideoframeinput->eventFilter(watched, event);
    } else {
        return self->QVideoFrameInput::eventFilter(watched, event);
    }
}

// Auxiliary method to allow providing re-implementation
void QVideoFrameInput_OnEventFilter(QVideoFrameInput* self, intptr_t slot) {
    auto* vqvideoframeinput = dynamic_cast<VirtualQVideoFrameInput*>(self);
    if (vqvideoframeinput && vqvideoframeinput->isVirtualQVideoFrameInput) {
        vqvideoframeinput->setQVideoFrameInput_EventFilter_Callback(reinterpret_cast<VirtualQVideoFrameInput::QVideoFrameInput_EventFilter_Callback>(slot));
    }
}

// Derived class handler implementation
void QVideoFrameInput_TimerEvent(QVideoFrameInput* self, QTimerEvent* event) {
    auto* vqvideoframeinput = dynamic_cast<VirtualQVideoFrameInput*>(self);
    if (vqvideoframeinput && vqvideoframeinput->isVirtualQVideoFrameInput) {
        vqvideoframeinput->timerEvent(event);
    } else {
        ((VirtualQVideoFrameInput*)self)->timerEvent(event);
    }
}

// Base class handler implementation
void QVideoFrameInput_QBaseTimerEvent(QVideoFrameInput* self, QTimerEvent* event) {
    auto* vqvideoframeinput = dynamic_cast<VirtualQVideoFrameInput*>(self);
    if (vqvideoframeinput && vqvideoframeinput->isVirtualQVideoFrameInput) {
        vqvideoframeinput->setQVideoFrameInput_TimerEvent_IsBase(true);
        vqvideoframeinput->timerEvent(event);
    } else {
        ((VirtualQVideoFrameInput*)self)->timerEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QVideoFrameInput_OnTimerEvent(QVideoFrameInput* self, intptr_t slot) {
    auto* vqvideoframeinput = dynamic_cast<VirtualQVideoFrameInput*>(self);
    if (vqvideoframeinput && vqvideoframeinput->isVirtualQVideoFrameInput) {
        vqvideoframeinput->setQVideoFrameInput_TimerEvent_Callback(reinterpret_cast<VirtualQVideoFrameInput::QVideoFrameInput_TimerEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QVideoFrameInput_ChildEvent(QVideoFrameInput* self, QChildEvent* event) {
    auto* vqvideoframeinput = dynamic_cast<VirtualQVideoFrameInput*>(self);
    if (vqvideoframeinput && vqvideoframeinput->isVirtualQVideoFrameInput) {
        vqvideoframeinput->childEvent(event);
    } else {
        ((VirtualQVideoFrameInput*)self)->childEvent(event);
    }
}

// Base class handler implementation
void QVideoFrameInput_QBaseChildEvent(QVideoFrameInput* self, QChildEvent* event) {
    auto* vqvideoframeinput = dynamic_cast<VirtualQVideoFrameInput*>(self);
    if (vqvideoframeinput && vqvideoframeinput->isVirtualQVideoFrameInput) {
        vqvideoframeinput->setQVideoFrameInput_ChildEvent_IsBase(true);
        vqvideoframeinput->childEvent(event);
    } else {
        ((VirtualQVideoFrameInput*)self)->childEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QVideoFrameInput_OnChildEvent(QVideoFrameInput* self, intptr_t slot) {
    auto* vqvideoframeinput = dynamic_cast<VirtualQVideoFrameInput*>(self);
    if (vqvideoframeinput && vqvideoframeinput->isVirtualQVideoFrameInput) {
        vqvideoframeinput->setQVideoFrameInput_ChildEvent_Callback(reinterpret_cast<VirtualQVideoFrameInput::QVideoFrameInput_ChildEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QVideoFrameInput_CustomEvent(QVideoFrameInput* self, QEvent* event) {
    auto* vqvideoframeinput = dynamic_cast<VirtualQVideoFrameInput*>(self);
    if (vqvideoframeinput && vqvideoframeinput->isVirtualQVideoFrameInput) {
        vqvideoframeinput->customEvent(event);
    } else {
        ((VirtualQVideoFrameInput*)self)->customEvent(event);
    }
}

// Base class handler implementation
void QVideoFrameInput_QBaseCustomEvent(QVideoFrameInput* self, QEvent* event) {
    auto* vqvideoframeinput = dynamic_cast<VirtualQVideoFrameInput*>(self);
    if (vqvideoframeinput && vqvideoframeinput->isVirtualQVideoFrameInput) {
        vqvideoframeinput->setQVideoFrameInput_CustomEvent_IsBase(true);
        vqvideoframeinput->customEvent(event);
    } else {
        ((VirtualQVideoFrameInput*)self)->customEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QVideoFrameInput_OnCustomEvent(QVideoFrameInput* self, intptr_t slot) {
    auto* vqvideoframeinput = dynamic_cast<VirtualQVideoFrameInput*>(self);
    if (vqvideoframeinput && vqvideoframeinput->isVirtualQVideoFrameInput) {
        vqvideoframeinput->setQVideoFrameInput_CustomEvent_Callback(reinterpret_cast<VirtualQVideoFrameInput::QVideoFrameInput_CustomEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QVideoFrameInput_ConnectNotify(QVideoFrameInput* self, const QMetaMethod* signal) {
    auto* vqvideoframeinput = dynamic_cast<VirtualQVideoFrameInput*>(self);
    if (vqvideoframeinput && vqvideoframeinput->isVirtualQVideoFrameInput) {
        vqvideoframeinput->connectNotify(*signal);
    } else {
        ((VirtualQVideoFrameInput*)self)->connectNotify(*signal);
    }
}

// Base class handler implementation
void QVideoFrameInput_QBaseConnectNotify(QVideoFrameInput* self, const QMetaMethod* signal) {
    auto* vqvideoframeinput = dynamic_cast<VirtualQVideoFrameInput*>(self);
    if (vqvideoframeinput && vqvideoframeinput->isVirtualQVideoFrameInput) {
        vqvideoframeinput->setQVideoFrameInput_ConnectNotify_IsBase(true);
        vqvideoframeinput->connectNotify(*signal);
    } else {
        ((VirtualQVideoFrameInput*)self)->connectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QVideoFrameInput_OnConnectNotify(QVideoFrameInput* self, intptr_t slot) {
    auto* vqvideoframeinput = dynamic_cast<VirtualQVideoFrameInput*>(self);
    if (vqvideoframeinput && vqvideoframeinput->isVirtualQVideoFrameInput) {
        vqvideoframeinput->setQVideoFrameInput_ConnectNotify_Callback(reinterpret_cast<VirtualQVideoFrameInput::QVideoFrameInput_ConnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
void QVideoFrameInput_DisconnectNotify(QVideoFrameInput* self, const QMetaMethod* signal) {
    auto* vqvideoframeinput = dynamic_cast<VirtualQVideoFrameInput*>(self);
    if (vqvideoframeinput && vqvideoframeinput->isVirtualQVideoFrameInput) {
        vqvideoframeinput->disconnectNotify(*signal);
    } else {
        ((VirtualQVideoFrameInput*)self)->disconnectNotify(*signal);
    }
}

// Base class handler implementation
void QVideoFrameInput_QBaseDisconnectNotify(QVideoFrameInput* self, const QMetaMethod* signal) {
    auto* vqvideoframeinput = dynamic_cast<VirtualQVideoFrameInput*>(self);
    if (vqvideoframeinput && vqvideoframeinput->isVirtualQVideoFrameInput) {
        vqvideoframeinput->setQVideoFrameInput_DisconnectNotify_IsBase(true);
        vqvideoframeinput->disconnectNotify(*signal);
    } else {
        ((VirtualQVideoFrameInput*)self)->disconnectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QVideoFrameInput_OnDisconnectNotify(QVideoFrameInput* self, intptr_t slot) {
    auto* vqvideoframeinput = dynamic_cast<VirtualQVideoFrameInput*>(self);
    if (vqvideoframeinput && vqvideoframeinput->isVirtualQVideoFrameInput) {
        vqvideoframeinput->setQVideoFrameInput_DisconnectNotify_Callback(reinterpret_cast<VirtualQVideoFrameInput::QVideoFrameInput_DisconnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
QObject* QVideoFrameInput_Sender(const QVideoFrameInput* self) {
    auto* vqvideoframeinput = const_cast<VirtualQVideoFrameInput*>(dynamic_cast<const VirtualQVideoFrameInput*>(self));
    if (vqvideoframeinput && vqvideoframeinput->isVirtualQVideoFrameInput) {
        return vqvideoframeinput->sender();
    } else {
        return ((VirtualQVideoFrameInput*)self)->sender();
    }
}

// Base class handler implementation
QObject* QVideoFrameInput_QBaseSender(const QVideoFrameInput* self) {
    auto* vqvideoframeinput = const_cast<VirtualQVideoFrameInput*>(dynamic_cast<const VirtualQVideoFrameInput*>(self));
    if (vqvideoframeinput && vqvideoframeinput->isVirtualQVideoFrameInput) {
        vqvideoframeinput->setQVideoFrameInput_Sender_IsBase(true);
        return vqvideoframeinput->sender();
    } else {
        return ((VirtualQVideoFrameInput*)self)->sender();
    }
}

// Auxiliary method to allow providing re-implementation
void QVideoFrameInput_OnSender(const QVideoFrameInput* self, intptr_t slot) {
    auto* vqvideoframeinput = const_cast<VirtualQVideoFrameInput*>(dynamic_cast<const VirtualQVideoFrameInput*>(self));
    if (vqvideoframeinput && vqvideoframeinput->isVirtualQVideoFrameInput) {
        vqvideoframeinput->setQVideoFrameInput_Sender_Callback(reinterpret_cast<VirtualQVideoFrameInput::QVideoFrameInput_Sender_Callback>(slot));
    }
}

// Derived class handler implementation
int QVideoFrameInput_SenderSignalIndex(const QVideoFrameInput* self) {
    auto* vqvideoframeinput = const_cast<VirtualQVideoFrameInput*>(dynamic_cast<const VirtualQVideoFrameInput*>(self));
    if (vqvideoframeinput && vqvideoframeinput->isVirtualQVideoFrameInput) {
        return vqvideoframeinput->senderSignalIndex();
    } else {
        return ((VirtualQVideoFrameInput*)self)->senderSignalIndex();
    }
}

// Base class handler implementation
int QVideoFrameInput_QBaseSenderSignalIndex(const QVideoFrameInput* self) {
    auto* vqvideoframeinput = const_cast<VirtualQVideoFrameInput*>(dynamic_cast<const VirtualQVideoFrameInput*>(self));
    if (vqvideoframeinput && vqvideoframeinput->isVirtualQVideoFrameInput) {
        vqvideoframeinput->setQVideoFrameInput_SenderSignalIndex_IsBase(true);
        return vqvideoframeinput->senderSignalIndex();
    } else {
        return ((VirtualQVideoFrameInput*)self)->senderSignalIndex();
    }
}

// Auxiliary method to allow providing re-implementation
void QVideoFrameInput_OnSenderSignalIndex(const QVideoFrameInput* self, intptr_t slot) {
    auto* vqvideoframeinput = const_cast<VirtualQVideoFrameInput*>(dynamic_cast<const VirtualQVideoFrameInput*>(self));
    if (vqvideoframeinput && vqvideoframeinput->isVirtualQVideoFrameInput) {
        vqvideoframeinput->setQVideoFrameInput_SenderSignalIndex_Callback(reinterpret_cast<VirtualQVideoFrameInput::QVideoFrameInput_SenderSignalIndex_Callback>(slot));
    }
}

// Derived class handler implementation
int QVideoFrameInput_Receivers(const QVideoFrameInput* self, const char* signal) {
    auto* vqvideoframeinput = const_cast<VirtualQVideoFrameInput*>(dynamic_cast<const VirtualQVideoFrameInput*>(self));
    if (vqvideoframeinput && vqvideoframeinput->isVirtualQVideoFrameInput) {
        return vqvideoframeinput->receivers(signal);
    } else {
        return ((VirtualQVideoFrameInput*)self)->receivers(signal);
    }
}

// Base class handler implementation
int QVideoFrameInput_QBaseReceivers(const QVideoFrameInput* self, const char* signal) {
    auto* vqvideoframeinput = const_cast<VirtualQVideoFrameInput*>(dynamic_cast<const VirtualQVideoFrameInput*>(self));
    if (vqvideoframeinput && vqvideoframeinput->isVirtualQVideoFrameInput) {
        vqvideoframeinput->setQVideoFrameInput_Receivers_IsBase(true);
        return vqvideoframeinput->receivers(signal);
    } else {
        return ((VirtualQVideoFrameInput*)self)->receivers(signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QVideoFrameInput_OnReceivers(const QVideoFrameInput* self, intptr_t slot) {
    auto* vqvideoframeinput = const_cast<VirtualQVideoFrameInput*>(dynamic_cast<const VirtualQVideoFrameInput*>(self));
    if (vqvideoframeinput && vqvideoframeinput->isVirtualQVideoFrameInput) {
        vqvideoframeinput->setQVideoFrameInput_Receivers_Callback(reinterpret_cast<VirtualQVideoFrameInput::QVideoFrameInput_Receivers_Callback>(slot));
    }
}

// Derived class handler implementation
bool QVideoFrameInput_IsSignalConnected(const QVideoFrameInput* self, const QMetaMethod* signal) {
    auto* vqvideoframeinput = const_cast<VirtualQVideoFrameInput*>(dynamic_cast<const VirtualQVideoFrameInput*>(self));
    if (vqvideoframeinput && vqvideoframeinput->isVirtualQVideoFrameInput) {
        return vqvideoframeinput->isSignalConnected(*signal);
    } else {
        return ((VirtualQVideoFrameInput*)self)->isSignalConnected(*signal);
    }
}

// Base class handler implementation
bool QVideoFrameInput_QBaseIsSignalConnected(const QVideoFrameInput* self, const QMetaMethod* signal) {
    auto* vqvideoframeinput = const_cast<VirtualQVideoFrameInput*>(dynamic_cast<const VirtualQVideoFrameInput*>(self));
    if (vqvideoframeinput && vqvideoframeinput->isVirtualQVideoFrameInput) {
        vqvideoframeinput->setQVideoFrameInput_IsSignalConnected_IsBase(true);
        return vqvideoframeinput->isSignalConnected(*signal);
    } else {
        return ((VirtualQVideoFrameInput*)self)->isSignalConnected(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QVideoFrameInput_OnIsSignalConnected(const QVideoFrameInput* self, intptr_t slot) {
    auto* vqvideoframeinput = const_cast<VirtualQVideoFrameInput*>(dynamic_cast<const VirtualQVideoFrameInput*>(self));
    if (vqvideoframeinput && vqvideoframeinput->isVirtualQVideoFrameInput) {
        vqvideoframeinput->setQVideoFrameInput_IsSignalConnected_Callback(reinterpret_cast<VirtualQVideoFrameInput::QVideoFrameInput_IsSignalConnected_Callback>(slot));
    }
}

void QVideoFrameInput_Delete(QVideoFrameInput* self) {
    delete self;
}
