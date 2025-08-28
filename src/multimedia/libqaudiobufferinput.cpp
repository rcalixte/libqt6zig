#include <QAudioBuffer>
#include <QAudioBufferInput>
#include <QAudioFormat>
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
#include <qaudiobufferinput.h>
#include "libqaudiobufferinput.h"
#include "libqaudiobufferinput.hxx"

QAudioBufferInput* QAudioBufferInput_new() {
    return new VirtualQAudioBufferInput();
}

QAudioBufferInput* QAudioBufferInput_new2(const QAudioFormat* format) {
    return new VirtualQAudioBufferInput(*format);
}

QAudioBufferInput* QAudioBufferInput_new3(QObject* parent) {
    return new VirtualQAudioBufferInput(parent);
}

QAudioBufferInput* QAudioBufferInput_new4(const QAudioFormat* format, QObject* parent) {
    return new VirtualQAudioBufferInput(*format, parent);
}

QMetaObject* QAudioBufferInput_MetaObject(const QAudioBufferInput* self) {
    return (QMetaObject*)self->metaObject();
}

void* QAudioBufferInput_Metacast(QAudioBufferInput* self, const char* param1) {
    return self->qt_metacast(param1);
}

int QAudioBufferInput_Metacall(QAudioBufferInput* self, int param1, int param2, void** param3) {
    auto* vqaudiobufferinput = dynamic_cast<VirtualQAudioBufferInput*>(self);
    if (vqaudiobufferinput && vqaudiobufferinput->isVirtualQAudioBufferInput) {
        return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return ((VirtualQAudioBufferInput*)self)->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

libqt_string QAudioBufferInput_Tr(const char* s) {
    QString _ret = QAudioBufferInput::tr(s);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

bool QAudioBufferInput_SendAudioBuffer(QAudioBufferInput* self, const QAudioBuffer* audioBuffer) {
    return self->sendAudioBuffer(*audioBuffer);
}

QAudioFormat* QAudioBufferInput_Format(const QAudioBufferInput* self) {
    return new QAudioFormat(self->format());
}

QMediaCaptureSession* QAudioBufferInput_CaptureSession(const QAudioBufferInput* self) {
    return self->captureSession();
}

void QAudioBufferInput_ReadyToSendAudioBuffer(QAudioBufferInput* self) {
    self->readyToSendAudioBuffer();
}

void QAudioBufferInput_Connect_ReadyToSendAudioBuffer(QAudioBufferInput* self, intptr_t slot) {
    void (*slotFunc)(QAudioBufferInput*) = reinterpret_cast<void (*)(QAudioBufferInput*)>(slot);
    QAudioBufferInput::connect(self, &QAudioBufferInput::readyToSendAudioBuffer, [self, slotFunc]() {
        slotFunc(self);
    });
}

libqt_string QAudioBufferInput_Tr2(const char* s, const char* c) {
    QString _ret = QAudioBufferInput::tr(s, c);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string QAudioBufferInput_Tr3(const char* s, const char* c, int n) {
    QString _ret = QAudioBufferInput::tr(s, c, static_cast<int>(n));
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
int QAudioBufferInput_QBaseMetacall(QAudioBufferInput* self, int param1, int param2, void** param3) {
    auto* vqaudiobufferinput = dynamic_cast<VirtualQAudioBufferInput*>(self);
    if (vqaudiobufferinput && vqaudiobufferinput->isVirtualQAudioBufferInput) {
        vqaudiobufferinput->setQAudioBufferInput_Metacall_IsBase(true);
        return vqaudiobufferinput->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return self->QAudioBufferInput::qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

// Auxiliary method to allow providing re-implementation
void QAudioBufferInput_OnMetacall(QAudioBufferInput* self, intptr_t slot) {
    auto* vqaudiobufferinput = dynamic_cast<VirtualQAudioBufferInput*>(self);
    if (vqaudiobufferinput && vqaudiobufferinput->isVirtualQAudioBufferInput) {
        vqaudiobufferinput->setQAudioBufferInput_Metacall_Callback(reinterpret_cast<VirtualQAudioBufferInput::QAudioBufferInput_Metacall_Callback>(slot));
    }
}

// Derived class handler implementation
bool QAudioBufferInput_Event(QAudioBufferInput* self, QEvent* event) {
    auto* vqaudiobufferinput = dynamic_cast<VirtualQAudioBufferInput*>(self);
    if (vqaudiobufferinput && vqaudiobufferinput->isVirtualQAudioBufferInput) {
        return vqaudiobufferinput->event(event);
    } else {
        return self->QAudioBufferInput::event(event);
    }
}

// Base class handler implementation
bool QAudioBufferInput_QBaseEvent(QAudioBufferInput* self, QEvent* event) {
    auto* vqaudiobufferinput = dynamic_cast<VirtualQAudioBufferInput*>(self);
    if (vqaudiobufferinput && vqaudiobufferinput->isVirtualQAudioBufferInput) {
        vqaudiobufferinput->setQAudioBufferInput_Event_IsBase(true);
        return vqaudiobufferinput->event(event);
    } else {
        return self->QAudioBufferInput::event(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QAudioBufferInput_OnEvent(QAudioBufferInput* self, intptr_t slot) {
    auto* vqaudiobufferinput = dynamic_cast<VirtualQAudioBufferInput*>(self);
    if (vqaudiobufferinput && vqaudiobufferinput->isVirtualQAudioBufferInput) {
        vqaudiobufferinput->setQAudioBufferInput_Event_Callback(reinterpret_cast<VirtualQAudioBufferInput::QAudioBufferInput_Event_Callback>(slot));
    }
}

// Derived class handler implementation
bool QAudioBufferInput_EventFilter(QAudioBufferInput* self, QObject* watched, QEvent* event) {
    auto* vqaudiobufferinput = dynamic_cast<VirtualQAudioBufferInput*>(self);
    if (vqaudiobufferinput && vqaudiobufferinput->isVirtualQAudioBufferInput) {
        return vqaudiobufferinput->eventFilter(watched, event);
    } else {
        return self->QAudioBufferInput::eventFilter(watched, event);
    }
}

// Base class handler implementation
bool QAudioBufferInput_QBaseEventFilter(QAudioBufferInput* self, QObject* watched, QEvent* event) {
    auto* vqaudiobufferinput = dynamic_cast<VirtualQAudioBufferInput*>(self);
    if (vqaudiobufferinput && vqaudiobufferinput->isVirtualQAudioBufferInput) {
        vqaudiobufferinput->setQAudioBufferInput_EventFilter_IsBase(true);
        return vqaudiobufferinput->eventFilter(watched, event);
    } else {
        return self->QAudioBufferInput::eventFilter(watched, event);
    }
}

// Auxiliary method to allow providing re-implementation
void QAudioBufferInput_OnEventFilter(QAudioBufferInput* self, intptr_t slot) {
    auto* vqaudiobufferinput = dynamic_cast<VirtualQAudioBufferInput*>(self);
    if (vqaudiobufferinput && vqaudiobufferinput->isVirtualQAudioBufferInput) {
        vqaudiobufferinput->setQAudioBufferInput_EventFilter_Callback(reinterpret_cast<VirtualQAudioBufferInput::QAudioBufferInput_EventFilter_Callback>(slot));
    }
}

// Derived class handler implementation
void QAudioBufferInput_TimerEvent(QAudioBufferInput* self, QTimerEvent* event) {
    auto* vqaudiobufferinput = dynamic_cast<VirtualQAudioBufferInput*>(self);
    if (vqaudiobufferinput && vqaudiobufferinput->isVirtualQAudioBufferInput) {
        vqaudiobufferinput->timerEvent(event);
    } else {
        ((VirtualQAudioBufferInput*)self)->timerEvent(event);
    }
}

// Base class handler implementation
void QAudioBufferInput_QBaseTimerEvent(QAudioBufferInput* self, QTimerEvent* event) {
    auto* vqaudiobufferinput = dynamic_cast<VirtualQAudioBufferInput*>(self);
    if (vqaudiobufferinput && vqaudiobufferinput->isVirtualQAudioBufferInput) {
        vqaudiobufferinput->setQAudioBufferInput_TimerEvent_IsBase(true);
        vqaudiobufferinput->timerEvent(event);
    } else {
        ((VirtualQAudioBufferInput*)self)->timerEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QAudioBufferInput_OnTimerEvent(QAudioBufferInput* self, intptr_t slot) {
    auto* vqaudiobufferinput = dynamic_cast<VirtualQAudioBufferInput*>(self);
    if (vqaudiobufferinput && vqaudiobufferinput->isVirtualQAudioBufferInput) {
        vqaudiobufferinput->setQAudioBufferInput_TimerEvent_Callback(reinterpret_cast<VirtualQAudioBufferInput::QAudioBufferInput_TimerEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QAudioBufferInput_ChildEvent(QAudioBufferInput* self, QChildEvent* event) {
    auto* vqaudiobufferinput = dynamic_cast<VirtualQAudioBufferInput*>(self);
    if (vqaudiobufferinput && vqaudiobufferinput->isVirtualQAudioBufferInput) {
        vqaudiobufferinput->childEvent(event);
    } else {
        ((VirtualQAudioBufferInput*)self)->childEvent(event);
    }
}

// Base class handler implementation
void QAudioBufferInput_QBaseChildEvent(QAudioBufferInput* self, QChildEvent* event) {
    auto* vqaudiobufferinput = dynamic_cast<VirtualQAudioBufferInput*>(self);
    if (vqaudiobufferinput && vqaudiobufferinput->isVirtualQAudioBufferInput) {
        vqaudiobufferinput->setQAudioBufferInput_ChildEvent_IsBase(true);
        vqaudiobufferinput->childEvent(event);
    } else {
        ((VirtualQAudioBufferInput*)self)->childEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QAudioBufferInput_OnChildEvent(QAudioBufferInput* self, intptr_t slot) {
    auto* vqaudiobufferinput = dynamic_cast<VirtualQAudioBufferInput*>(self);
    if (vqaudiobufferinput && vqaudiobufferinput->isVirtualQAudioBufferInput) {
        vqaudiobufferinput->setQAudioBufferInput_ChildEvent_Callback(reinterpret_cast<VirtualQAudioBufferInput::QAudioBufferInput_ChildEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QAudioBufferInput_CustomEvent(QAudioBufferInput* self, QEvent* event) {
    auto* vqaudiobufferinput = dynamic_cast<VirtualQAudioBufferInput*>(self);
    if (vqaudiobufferinput && vqaudiobufferinput->isVirtualQAudioBufferInput) {
        vqaudiobufferinput->customEvent(event);
    } else {
        ((VirtualQAudioBufferInput*)self)->customEvent(event);
    }
}

// Base class handler implementation
void QAudioBufferInput_QBaseCustomEvent(QAudioBufferInput* self, QEvent* event) {
    auto* vqaudiobufferinput = dynamic_cast<VirtualQAudioBufferInput*>(self);
    if (vqaudiobufferinput && vqaudiobufferinput->isVirtualQAudioBufferInput) {
        vqaudiobufferinput->setQAudioBufferInput_CustomEvent_IsBase(true);
        vqaudiobufferinput->customEvent(event);
    } else {
        ((VirtualQAudioBufferInput*)self)->customEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QAudioBufferInput_OnCustomEvent(QAudioBufferInput* self, intptr_t slot) {
    auto* vqaudiobufferinput = dynamic_cast<VirtualQAudioBufferInput*>(self);
    if (vqaudiobufferinput && vqaudiobufferinput->isVirtualQAudioBufferInput) {
        vqaudiobufferinput->setQAudioBufferInput_CustomEvent_Callback(reinterpret_cast<VirtualQAudioBufferInput::QAudioBufferInput_CustomEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QAudioBufferInput_ConnectNotify(QAudioBufferInput* self, const QMetaMethod* signal) {
    auto* vqaudiobufferinput = dynamic_cast<VirtualQAudioBufferInput*>(self);
    if (vqaudiobufferinput && vqaudiobufferinput->isVirtualQAudioBufferInput) {
        vqaudiobufferinput->connectNotify(*signal);
    } else {
        ((VirtualQAudioBufferInput*)self)->connectNotify(*signal);
    }
}

// Base class handler implementation
void QAudioBufferInput_QBaseConnectNotify(QAudioBufferInput* self, const QMetaMethod* signal) {
    auto* vqaudiobufferinput = dynamic_cast<VirtualQAudioBufferInput*>(self);
    if (vqaudiobufferinput && vqaudiobufferinput->isVirtualQAudioBufferInput) {
        vqaudiobufferinput->setQAudioBufferInput_ConnectNotify_IsBase(true);
        vqaudiobufferinput->connectNotify(*signal);
    } else {
        ((VirtualQAudioBufferInput*)self)->connectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QAudioBufferInput_OnConnectNotify(QAudioBufferInput* self, intptr_t slot) {
    auto* vqaudiobufferinput = dynamic_cast<VirtualQAudioBufferInput*>(self);
    if (vqaudiobufferinput && vqaudiobufferinput->isVirtualQAudioBufferInput) {
        vqaudiobufferinput->setQAudioBufferInput_ConnectNotify_Callback(reinterpret_cast<VirtualQAudioBufferInput::QAudioBufferInput_ConnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
void QAudioBufferInput_DisconnectNotify(QAudioBufferInput* self, const QMetaMethod* signal) {
    auto* vqaudiobufferinput = dynamic_cast<VirtualQAudioBufferInput*>(self);
    if (vqaudiobufferinput && vqaudiobufferinput->isVirtualQAudioBufferInput) {
        vqaudiobufferinput->disconnectNotify(*signal);
    } else {
        ((VirtualQAudioBufferInput*)self)->disconnectNotify(*signal);
    }
}

// Base class handler implementation
void QAudioBufferInput_QBaseDisconnectNotify(QAudioBufferInput* self, const QMetaMethod* signal) {
    auto* vqaudiobufferinput = dynamic_cast<VirtualQAudioBufferInput*>(self);
    if (vqaudiobufferinput && vqaudiobufferinput->isVirtualQAudioBufferInput) {
        vqaudiobufferinput->setQAudioBufferInput_DisconnectNotify_IsBase(true);
        vqaudiobufferinput->disconnectNotify(*signal);
    } else {
        ((VirtualQAudioBufferInput*)self)->disconnectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QAudioBufferInput_OnDisconnectNotify(QAudioBufferInput* self, intptr_t slot) {
    auto* vqaudiobufferinput = dynamic_cast<VirtualQAudioBufferInput*>(self);
    if (vqaudiobufferinput && vqaudiobufferinput->isVirtualQAudioBufferInput) {
        vqaudiobufferinput->setQAudioBufferInput_DisconnectNotify_Callback(reinterpret_cast<VirtualQAudioBufferInput::QAudioBufferInput_DisconnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
QObject* QAudioBufferInput_Sender(const QAudioBufferInput* self) {
    auto* vqaudiobufferinput = const_cast<VirtualQAudioBufferInput*>(dynamic_cast<const VirtualQAudioBufferInput*>(self));
    if (vqaudiobufferinput && vqaudiobufferinput->isVirtualQAudioBufferInput) {
        return vqaudiobufferinput->sender();
    } else {
        return ((VirtualQAudioBufferInput*)self)->sender();
    }
}

// Base class handler implementation
QObject* QAudioBufferInput_QBaseSender(const QAudioBufferInput* self) {
    auto* vqaudiobufferinput = const_cast<VirtualQAudioBufferInput*>(dynamic_cast<const VirtualQAudioBufferInput*>(self));
    if (vqaudiobufferinput && vqaudiobufferinput->isVirtualQAudioBufferInput) {
        vqaudiobufferinput->setQAudioBufferInput_Sender_IsBase(true);
        return vqaudiobufferinput->sender();
    } else {
        return ((VirtualQAudioBufferInput*)self)->sender();
    }
}

// Auxiliary method to allow providing re-implementation
void QAudioBufferInput_OnSender(const QAudioBufferInput* self, intptr_t slot) {
    auto* vqaudiobufferinput = const_cast<VirtualQAudioBufferInput*>(dynamic_cast<const VirtualQAudioBufferInput*>(self));
    if (vqaudiobufferinput && vqaudiobufferinput->isVirtualQAudioBufferInput) {
        vqaudiobufferinput->setQAudioBufferInput_Sender_Callback(reinterpret_cast<VirtualQAudioBufferInput::QAudioBufferInput_Sender_Callback>(slot));
    }
}

// Derived class handler implementation
int QAudioBufferInput_SenderSignalIndex(const QAudioBufferInput* self) {
    auto* vqaudiobufferinput = const_cast<VirtualQAudioBufferInput*>(dynamic_cast<const VirtualQAudioBufferInput*>(self));
    if (vqaudiobufferinput && vqaudiobufferinput->isVirtualQAudioBufferInput) {
        return vqaudiobufferinput->senderSignalIndex();
    } else {
        return ((VirtualQAudioBufferInput*)self)->senderSignalIndex();
    }
}

// Base class handler implementation
int QAudioBufferInput_QBaseSenderSignalIndex(const QAudioBufferInput* self) {
    auto* vqaudiobufferinput = const_cast<VirtualQAudioBufferInput*>(dynamic_cast<const VirtualQAudioBufferInput*>(self));
    if (vqaudiobufferinput && vqaudiobufferinput->isVirtualQAudioBufferInput) {
        vqaudiobufferinput->setQAudioBufferInput_SenderSignalIndex_IsBase(true);
        return vqaudiobufferinput->senderSignalIndex();
    } else {
        return ((VirtualQAudioBufferInput*)self)->senderSignalIndex();
    }
}

// Auxiliary method to allow providing re-implementation
void QAudioBufferInput_OnSenderSignalIndex(const QAudioBufferInput* self, intptr_t slot) {
    auto* vqaudiobufferinput = const_cast<VirtualQAudioBufferInput*>(dynamic_cast<const VirtualQAudioBufferInput*>(self));
    if (vqaudiobufferinput && vqaudiobufferinput->isVirtualQAudioBufferInput) {
        vqaudiobufferinput->setQAudioBufferInput_SenderSignalIndex_Callback(reinterpret_cast<VirtualQAudioBufferInput::QAudioBufferInput_SenderSignalIndex_Callback>(slot));
    }
}

// Derived class handler implementation
int QAudioBufferInput_Receivers(const QAudioBufferInput* self, const char* signal) {
    auto* vqaudiobufferinput = const_cast<VirtualQAudioBufferInput*>(dynamic_cast<const VirtualQAudioBufferInput*>(self));
    if (vqaudiobufferinput && vqaudiobufferinput->isVirtualQAudioBufferInput) {
        return vqaudiobufferinput->receivers(signal);
    } else {
        return ((VirtualQAudioBufferInput*)self)->receivers(signal);
    }
}

// Base class handler implementation
int QAudioBufferInput_QBaseReceivers(const QAudioBufferInput* self, const char* signal) {
    auto* vqaudiobufferinput = const_cast<VirtualQAudioBufferInput*>(dynamic_cast<const VirtualQAudioBufferInput*>(self));
    if (vqaudiobufferinput && vqaudiobufferinput->isVirtualQAudioBufferInput) {
        vqaudiobufferinput->setQAudioBufferInput_Receivers_IsBase(true);
        return vqaudiobufferinput->receivers(signal);
    } else {
        return ((VirtualQAudioBufferInput*)self)->receivers(signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QAudioBufferInput_OnReceivers(const QAudioBufferInput* self, intptr_t slot) {
    auto* vqaudiobufferinput = const_cast<VirtualQAudioBufferInput*>(dynamic_cast<const VirtualQAudioBufferInput*>(self));
    if (vqaudiobufferinput && vqaudiobufferinput->isVirtualQAudioBufferInput) {
        vqaudiobufferinput->setQAudioBufferInput_Receivers_Callback(reinterpret_cast<VirtualQAudioBufferInput::QAudioBufferInput_Receivers_Callback>(slot));
    }
}

// Derived class handler implementation
bool QAudioBufferInput_IsSignalConnected(const QAudioBufferInput* self, const QMetaMethod* signal) {
    auto* vqaudiobufferinput = const_cast<VirtualQAudioBufferInput*>(dynamic_cast<const VirtualQAudioBufferInput*>(self));
    if (vqaudiobufferinput && vqaudiobufferinput->isVirtualQAudioBufferInput) {
        return vqaudiobufferinput->isSignalConnected(*signal);
    } else {
        return ((VirtualQAudioBufferInput*)self)->isSignalConnected(*signal);
    }
}

// Base class handler implementation
bool QAudioBufferInput_QBaseIsSignalConnected(const QAudioBufferInput* self, const QMetaMethod* signal) {
    auto* vqaudiobufferinput = const_cast<VirtualQAudioBufferInput*>(dynamic_cast<const VirtualQAudioBufferInput*>(self));
    if (vqaudiobufferinput && vqaudiobufferinput->isVirtualQAudioBufferInput) {
        vqaudiobufferinput->setQAudioBufferInput_IsSignalConnected_IsBase(true);
        return vqaudiobufferinput->isSignalConnected(*signal);
    } else {
        return ((VirtualQAudioBufferInput*)self)->isSignalConnected(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QAudioBufferInput_OnIsSignalConnected(const QAudioBufferInput* self, intptr_t slot) {
    auto* vqaudiobufferinput = const_cast<VirtualQAudioBufferInput*>(dynamic_cast<const VirtualQAudioBufferInput*>(self));
    if (vqaudiobufferinput && vqaudiobufferinput->isVirtualQAudioBufferInput) {
        vqaudiobufferinput->setQAudioBufferInput_IsSignalConnected_Callback(reinterpret_cast<VirtualQAudioBufferInput::QAudioBufferInput_IsSignalConnected_Callback>(slot));
    }
}

void QAudioBufferInput_Delete(QAudioBufferInput* self) {
    delete self;
}
