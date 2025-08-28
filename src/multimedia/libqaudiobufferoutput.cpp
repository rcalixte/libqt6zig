#include <QAudioBuffer>
#include <QAudioBufferOutput>
#include <QAudioFormat>
#include <QChildEvent>
#include <QEvent>
#include <QMetaMethod>
#include <QMetaObject>
#include <QObject>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <QTimerEvent>
#include <qaudiobufferoutput.h>
#include "libqaudiobufferoutput.h"
#include "libqaudiobufferoutput.hxx"

QAudioBufferOutput* QAudioBufferOutput_new() {
    return new VirtualQAudioBufferOutput();
}

QAudioBufferOutput* QAudioBufferOutput_new2(const QAudioFormat* format) {
    return new VirtualQAudioBufferOutput(*format);
}

QAudioBufferOutput* QAudioBufferOutput_new3(QObject* parent) {
    return new VirtualQAudioBufferOutput(parent);
}

QAudioBufferOutput* QAudioBufferOutput_new4(const QAudioFormat* format, QObject* parent) {
    return new VirtualQAudioBufferOutput(*format, parent);
}

QMetaObject* QAudioBufferOutput_MetaObject(const QAudioBufferOutput* self) {
    return (QMetaObject*)self->metaObject();
}

void* QAudioBufferOutput_Metacast(QAudioBufferOutput* self, const char* param1) {
    return self->qt_metacast(param1);
}

int QAudioBufferOutput_Metacall(QAudioBufferOutput* self, int param1, int param2, void** param3) {
    auto* vqaudiobufferoutput = dynamic_cast<VirtualQAudioBufferOutput*>(self);
    if (vqaudiobufferoutput && vqaudiobufferoutput->isVirtualQAudioBufferOutput) {
        return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return ((VirtualQAudioBufferOutput*)self)->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

libqt_string QAudioBufferOutput_Tr(const char* s) {
    QString _ret = QAudioBufferOutput::tr(s);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

QAudioFormat* QAudioBufferOutput_Format(const QAudioBufferOutput* self) {
    return new QAudioFormat(self->format());
}

void QAudioBufferOutput_AudioBufferReceived(QAudioBufferOutput* self, const QAudioBuffer* buffer) {
    self->audioBufferReceived(*buffer);
}

void QAudioBufferOutput_Connect_AudioBufferReceived(QAudioBufferOutput* self, intptr_t slot) {
    void (*slotFunc)(QAudioBufferOutput*, QAudioBuffer*) = reinterpret_cast<void (*)(QAudioBufferOutput*, QAudioBuffer*)>(slot);
    QAudioBufferOutput::connect(self, &QAudioBufferOutput::audioBufferReceived, [self, slotFunc](const QAudioBuffer& buffer) {
        const QAudioBuffer& buffer_ret = buffer;
        // Cast returned reference into pointer
        QAudioBuffer* sigval1 = const_cast<QAudioBuffer*>(&buffer_ret);
        slotFunc(self, sigval1);
    });
}

libqt_string QAudioBufferOutput_Tr2(const char* s, const char* c) {
    QString _ret = QAudioBufferOutput::tr(s, c);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string QAudioBufferOutput_Tr3(const char* s, const char* c, int n) {
    QString _ret = QAudioBufferOutput::tr(s, c, static_cast<int>(n));
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
int QAudioBufferOutput_QBaseMetacall(QAudioBufferOutput* self, int param1, int param2, void** param3) {
    auto* vqaudiobufferoutput = dynamic_cast<VirtualQAudioBufferOutput*>(self);
    if (vqaudiobufferoutput && vqaudiobufferoutput->isVirtualQAudioBufferOutput) {
        vqaudiobufferoutput->setQAudioBufferOutput_Metacall_IsBase(true);
        return vqaudiobufferoutput->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return self->QAudioBufferOutput::qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

// Auxiliary method to allow providing re-implementation
void QAudioBufferOutput_OnMetacall(QAudioBufferOutput* self, intptr_t slot) {
    auto* vqaudiobufferoutput = dynamic_cast<VirtualQAudioBufferOutput*>(self);
    if (vqaudiobufferoutput && vqaudiobufferoutput->isVirtualQAudioBufferOutput) {
        vqaudiobufferoutput->setQAudioBufferOutput_Metacall_Callback(reinterpret_cast<VirtualQAudioBufferOutput::QAudioBufferOutput_Metacall_Callback>(slot));
    }
}

// Derived class handler implementation
bool QAudioBufferOutput_Event(QAudioBufferOutput* self, QEvent* event) {
    auto* vqaudiobufferoutput = dynamic_cast<VirtualQAudioBufferOutput*>(self);
    if (vqaudiobufferoutput && vqaudiobufferoutput->isVirtualQAudioBufferOutput) {
        return vqaudiobufferoutput->event(event);
    } else {
        return self->QAudioBufferOutput::event(event);
    }
}

// Base class handler implementation
bool QAudioBufferOutput_QBaseEvent(QAudioBufferOutput* self, QEvent* event) {
    auto* vqaudiobufferoutput = dynamic_cast<VirtualQAudioBufferOutput*>(self);
    if (vqaudiobufferoutput && vqaudiobufferoutput->isVirtualQAudioBufferOutput) {
        vqaudiobufferoutput->setQAudioBufferOutput_Event_IsBase(true);
        return vqaudiobufferoutput->event(event);
    } else {
        return self->QAudioBufferOutput::event(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QAudioBufferOutput_OnEvent(QAudioBufferOutput* self, intptr_t slot) {
    auto* vqaudiobufferoutput = dynamic_cast<VirtualQAudioBufferOutput*>(self);
    if (vqaudiobufferoutput && vqaudiobufferoutput->isVirtualQAudioBufferOutput) {
        vqaudiobufferoutput->setQAudioBufferOutput_Event_Callback(reinterpret_cast<VirtualQAudioBufferOutput::QAudioBufferOutput_Event_Callback>(slot));
    }
}

// Derived class handler implementation
bool QAudioBufferOutput_EventFilter(QAudioBufferOutput* self, QObject* watched, QEvent* event) {
    auto* vqaudiobufferoutput = dynamic_cast<VirtualQAudioBufferOutput*>(self);
    if (vqaudiobufferoutput && vqaudiobufferoutput->isVirtualQAudioBufferOutput) {
        return vqaudiobufferoutput->eventFilter(watched, event);
    } else {
        return self->QAudioBufferOutput::eventFilter(watched, event);
    }
}

// Base class handler implementation
bool QAudioBufferOutput_QBaseEventFilter(QAudioBufferOutput* self, QObject* watched, QEvent* event) {
    auto* vqaudiobufferoutput = dynamic_cast<VirtualQAudioBufferOutput*>(self);
    if (vqaudiobufferoutput && vqaudiobufferoutput->isVirtualQAudioBufferOutput) {
        vqaudiobufferoutput->setQAudioBufferOutput_EventFilter_IsBase(true);
        return vqaudiobufferoutput->eventFilter(watched, event);
    } else {
        return self->QAudioBufferOutput::eventFilter(watched, event);
    }
}

// Auxiliary method to allow providing re-implementation
void QAudioBufferOutput_OnEventFilter(QAudioBufferOutput* self, intptr_t slot) {
    auto* vqaudiobufferoutput = dynamic_cast<VirtualQAudioBufferOutput*>(self);
    if (vqaudiobufferoutput && vqaudiobufferoutput->isVirtualQAudioBufferOutput) {
        vqaudiobufferoutput->setQAudioBufferOutput_EventFilter_Callback(reinterpret_cast<VirtualQAudioBufferOutput::QAudioBufferOutput_EventFilter_Callback>(slot));
    }
}

// Derived class handler implementation
void QAudioBufferOutput_TimerEvent(QAudioBufferOutput* self, QTimerEvent* event) {
    auto* vqaudiobufferoutput = dynamic_cast<VirtualQAudioBufferOutput*>(self);
    if (vqaudiobufferoutput && vqaudiobufferoutput->isVirtualQAudioBufferOutput) {
        vqaudiobufferoutput->timerEvent(event);
    } else {
        ((VirtualQAudioBufferOutput*)self)->timerEvent(event);
    }
}

// Base class handler implementation
void QAudioBufferOutput_QBaseTimerEvent(QAudioBufferOutput* self, QTimerEvent* event) {
    auto* vqaudiobufferoutput = dynamic_cast<VirtualQAudioBufferOutput*>(self);
    if (vqaudiobufferoutput && vqaudiobufferoutput->isVirtualQAudioBufferOutput) {
        vqaudiobufferoutput->setQAudioBufferOutput_TimerEvent_IsBase(true);
        vqaudiobufferoutput->timerEvent(event);
    } else {
        ((VirtualQAudioBufferOutput*)self)->timerEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QAudioBufferOutput_OnTimerEvent(QAudioBufferOutput* self, intptr_t slot) {
    auto* vqaudiobufferoutput = dynamic_cast<VirtualQAudioBufferOutput*>(self);
    if (vqaudiobufferoutput && vqaudiobufferoutput->isVirtualQAudioBufferOutput) {
        vqaudiobufferoutput->setQAudioBufferOutput_TimerEvent_Callback(reinterpret_cast<VirtualQAudioBufferOutput::QAudioBufferOutput_TimerEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QAudioBufferOutput_ChildEvent(QAudioBufferOutput* self, QChildEvent* event) {
    auto* vqaudiobufferoutput = dynamic_cast<VirtualQAudioBufferOutput*>(self);
    if (vqaudiobufferoutput && vqaudiobufferoutput->isVirtualQAudioBufferOutput) {
        vqaudiobufferoutput->childEvent(event);
    } else {
        ((VirtualQAudioBufferOutput*)self)->childEvent(event);
    }
}

// Base class handler implementation
void QAudioBufferOutput_QBaseChildEvent(QAudioBufferOutput* self, QChildEvent* event) {
    auto* vqaudiobufferoutput = dynamic_cast<VirtualQAudioBufferOutput*>(self);
    if (vqaudiobufferoutput && vqaudiobufferoutput->isVirtualQAudioBufferOutput) {
        vqaudiobufferoutput->setQAudioBufferOutput_ChildEvent_IsBase(true);
        vqaudiobufferoutput->childEvent(event);
    } else {
        ((VirtualQAudioBufferOutput*)self)->childEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QAudioBufferOutput_OnChildEvent(QAudioBufferOutput* self, intptr_t slot) {
    auto* vqaudiobufferoutput = dynamic_cast<VirtualQAudioBufferOutput*>(self);
    if (vqaudiobufferoutput && vqaudiobufferoutput->isVirtualQAudioBufferOutput) {
        vqaudiobufferoutput->setQAudioBufferOutput_ChildEvent_Callback(reinterpret_cast<VirtualQAudioBufferOutput::QAudioBufferOutput_ChildEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QAudioBufferOutput_CustomEvent(QAudioBufferOutput* self, QEvent* event) {
    auto* vqaudiobufferoutput = dynamic_cast<VirtualQAudioBufferOutput*>(self);
    if (vqaudiobufferoutput && vqaudiobufferoutput->isVirtualQAudioBufferOutput) {
        vqaudiobufferoutput->customEvent(event);
    } else {
        ((VirtualQAudioBufferOutput*)self)->customEvent(event);
    }
}

// Base class handler implementation
void QAudioBufferOutput_QBaseCustomEvent(QAudioBufferOutput* self, QEvent* event) {
    auto* vqaudiobufferoutput = dynamic_cast<VirtualQAudioBufferOutput*>(self);
    if (vqaudiobufferoutput && vqaudiobufferoutput->isVirtualQAudioBufferOutput) {
        vqaudiobufferoutput->setQAudioBufferOutput_CustomEvent_IsBase(true);
        vqaudiobufferoutput->customEvent(event);
    } else {
        ((VirtualQAudioBufferOutput*)self)->customEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QAudioBufferOutput_OnCustomEvent(QAudioBufferOutput* self, intptr_t slot) {
    auto* vqaudiobufferoutput = dynamic_cast<VirtualQAudioBufferOutput*>(self);
    if (vqaudiobufferoutput && vqaudiobufferoutput->isVirtualQAudioBufferOutput) {
        vqaudiobufferoutput->setQAudioBufferOutput_CustomEvent_Callback(reinterpret_cast<VirtualQAudioBufferOutput::QAudioBufferOutput_CustomEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QAudioBufferOutput_ConnectNotify(QAudioBufferOutput* self, const QMetaMethod* signal) {
    auto* vqaudiobufferoutput = dynamic_cast<VirtualQAudioBufferOutput*>(self);
    if (vqaudiobufferoutput && vqaudiobufferoutput->isVirtualQAudioBufferOutput) {
        vqaudiobufferoutput->connectNotify(*signal);
    } else {
        ((VirtualQAudioBufferOutput*)self)->connectNotify(*signal);
    }
}

// Base class handler implementation
void QAudioBufferOutput_QBaseConnectNotify(QAudioBufferOutput* self, const QMetaMethod* signal) {
    auto* vqaudiobufferoutput = dynamic_cast<VirtualQAudioBufferOutput*>(self);
    if (vqaudiobufferoutput && vqaudiobufferoutput->isVirtualQAudioBufferOutput) {
        vqaudiobufferoutput->setQAudioBufferOutput_ConnectNotify_IsBase(true);
        vqaudiobufferoutput->connectNotify(*signal);
    } else {
        ((VirtualQAudioBufferOutput*)self)->connectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QAudioBufferOutput_OnConnectNotify(QAudioBufferOutput* self, intptr_t slot) {
    auto* vqaudiobufferoutput = dynamic_cast<VirtualQAudioBufferOutput*>(self);
    if (vqaudiobufferoutput && vqaudiobufferoutput->isVirtualQAudioBufferOutput) {
        vqaudiobufferoutput->setQAudioBufferOutput_ConnectNotify_Callback(reinterpret_cast<VirtualQAudioBufferOutput::QAudioBufferOutput_ConnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
void QAudioBufferOutput_DisconnectNotify(QAudioBufferOutput* self, const QMetaMethod* signal) {
    auto* vqaudiobufferoutput = dynamic_cast<VirtualQAudioBufferOutput*>(self);
    if (vqaudiobufferoutput && vqaudiobufferoutput->isVirtualQAudioBufferOutput) {
        vqaudiobufferoutput->disconnectNotify(*signal);
    } else {
        ((VirtualQAudioBufferOutput*)self)->disconnectNotify(*signal);
    }
}

// Base class handler implementation
void QAudioBufferOutput_QBaseDisconnectNotify(QAudioBufferOutput* self, const QMetaMethod* signal) {
    auto* vqaudiobufferoutput = dynamic_cast<VirtualQAudioBufferOutput*>(self);
    if (vqaudiobufferoutput && vqaudiobufferoutput->isVirtualQAudioBufferOutput) {
        vqaudiobufferoutput->setQAudioBufferOutput_DisconnectNotify_IsBase(true);
        vqaudiobufferoutput->disconnectNotify(*signal);
    } else {
        ((VirtualQAudioBufferOutput*)self)->disconnectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QAudioBufferOutput_OnDisconnectNotify(QAudioBufferOutput* self, intptr_t slot) {
    auto* vqaudiobufferoutput = dynamic_cast<VirtualQAudioBufferOutput*>(self);
    if (vqaudiobufferoutput && vqaudiobufferoutput->isVirtualQAudioBufferOutput) {
        vqaudiobufferoutput->setQAudioBufferOutput_DisconnectNotify_Callback(reinterpret_cast<VirtualQAudioBufferOutput::QAudioBufferOutput_DisconnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
QObject* QAudioBufferOutput_Sender(const QAudioBufferOutput* self) {
    auto* vqaudiobufferoutput = const_cast<VirtualQAudioBufferOutput*>(dynamic_cast<const VirtualQAudioBufferOutput*>(self));
    if (vqaudiobufferoutput && vqaudiobufferoutput->isVirtualQAudioBufferOutput) {
        return vqaudiobufferoutput->sender();
    } else {
        return ((VirtualQAudioBufferOutput*)self)->sender();
    }
}

// Base class handler implementation
QObject* QAudioBufferOutput_QBaseSender(const QAudioBufferOutput* self) {
    auto* vqaudiobufferoutput = const_cast<VirtualQAudioBufferOutput*>(dynamic_cast<const VirtualQAudioBufferOutput*>(self));
    if (vqaudiobufferoutput && vqaudiobufferoutput->isVirtualQAudioBufferOutput) {
        vqaudiobufferoutput->setQAudioBufferOutput_Sender_IsBase(true);
        return vqaudiobufferoutput->sender();
    } else {
        return ((VirtualQAudioBufferOutput*)self)->sender();
    }
}

// Auxiliary method to allow providing re-implementation
void QAudioBufferOutput_OnSender(const QAudioBufferOutput* self, intptr_t slot) {
    auto* vqaudiobufferoutput = const_cast<VirtualQAudioBufferOutput*>(dynamic_cast<const VirtualQAudioBufferOutput*>(self));
    if (vqaudiobufferoutput && vqaudiobufferoutput->isVirtualQAudioBufferOutput) {
        vqaudiobufferoutput->setQAudioBufferOutput_Sender_Callback(reinterpret_cast<VirtualQAudioBufferOutput::QAudioBufferOutput_Sender_Callback>(slot));
    }
}

// Derived class handler implementation
int QAudioBufferOutput_SenderSignalIndex(const QAudioBufferOutput* self) {
    auto* vqaudiobufferoutput = const_cast<VirtualQAudioBufferOutput*>(dynamic_cast<const VirtualQAudioBufferOutput*>(self));
    if (vqaudiobufferoutput && vqaudiobufferoutput->isVirtualQAudioBufferOutput) {
        return vqaudiobufferoutput->senderSignalIndex();
    } else {
        return ((VirtualQAudioBufferOutput*)self)->senderSignalIndex();
    }
}

// Base class handler implementation
int QAudioBufferOutput_QBaseSenderSignalIndex(const QAudioBufferOutput* self) {
    auto* vqaudiobufferoutput = const_cast<VirtualQAudioBufferOutput*>(dynamic_cast<const VirtualQAudioBufferOutput*>(self));
    if (vqaudiobufferoutput && vqaudiobufferoutput->isVirtualQAudioBufferOutput) {
        vqaudiobufferoutput->setQAudioBufferOutput_SenderSignalIndex_IsBase(true);
        return vqaudiobufferoutput->senderSignalIndex();
    } else {
        return ((VirtualQAudioBufferOutput*)self)->senderSignalIndex();
    }
}

// Auxiliary method to allow providing re-implementation
void QAudioBufferOutput_OnSenderSignalIndex(const QAudioBufferOutput* self, intptr_t slot) {
    auto* vqaudiobufferoutput = const_cast<VirtualQAudioBufferOutput*>(dynamic_cast<const VirtualQAudioBufferOutput*>(self));
    if (vqaudiobufferoutput && vqaudiobufferoutput->isVirtualQAudioBufferOutput) {
        vqaudiobufferoutput->setQAudioBufferOutput_SenderSignalIndex_Callback(reinterpret_cast<VirtualQAudioBufferOutput::QAudioBufferOutput_SenderSignalIndex_Callback>(slot));
    }
}

// Derived class handler implementation
int QAudioBufferOutput_Receivers(const QAudioBufferOutput* self, const char* signal) {
    auto* vqaudiobufferoutput = const_cast<VirtualQAudioBufferOutput*>(dynamic_cast<const VirtualQAudioBufferOutput*>(self));
    if (vqaudiobufferoutput && vqaudiobufferoutput->isVirtualQAudioBufferOutput) {
        return vqaudiobufferoutput->receivers(signal);
    } else {
        return ((VirtualQAudioBufferOutput*)self)->receivers(signal);
    }
}

// Base class handler implementation
int QAudioBufferOutput_QBaseReceivers(const QAudioBufferOutput* self, const char* signal) {
    auto* vqaudiobufferoutput = const_cast<VirtualQAudioBufferOutput*>(dynamic_cast<const VirtualQAudioBufferOutput*>(self));
    if (vqaudiobufferoutput && vqaudiobufferoutput->isVirtualQAudioBufferOutput) {
        vqaudiobufferoutput->setQAudioBufferOutput_Receivers_IsBase(true);
        return vqaudiobufferoutput->receivers(signal);
    } else {
        return ((VirtualQAudioBufferOutput*)self)->receivers(signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QAudioBufferOutput_OnReceivers(const QAudioBufferOutput* self, intptr_t slot) {
    auto* vqaudiobufferoutput = const_cast<VirtualQAudioBufferOutput*>(dynamic_cast<const VirtualQAudioBufferOutput*>(self));
    if (vqaudiobufferoutput && vqaudiobufferoutput->isVirtualQAudioBufferOutput) {
        vqaudiobufferoutput->setQAudioBufferOutput_Receivers_Callback(reinterpret_cast<VirtualQAudioBufferOutput::QAudioBufferOutput_Receivers_Callback>(slot));
    }
}

// Derived class handler implementation
bool QAudioBufferOutput_IsSignalConnected(const QAudioBufferOutput* self, const QMetaMethod* signal) {
    auto* vqaudiobufferoutput = const_cast<VirtualQAudioBufferOutput*>(dynamic_cast<const VirtualQAudioBufferOutput*>(self));
    if (vqaudiobufferoutput && vqaudiobufferoutput->isVirtualQAudioBufferOutput) {
        return vqaudiobufferoutput->isSignalConnected(*signal);
    } else {
        return ((VirtualQAudioBufferOutput*)self)->isSignalConnected(*signal);
    }
}

// Base class handler implementation
bool QAudioBufferOutput_QBaseIsSignalConnected(const QAudioBufferOutput* self, const QMetaMethod* signal) {
    auto* vqaudiobufferoutput = const_cast<VirtualQAudioBufferOutput*>(dynamic_cast<const VirtualQAudioBufferOutput*>(self));
    if (vqaudiobufferoutput && vqaudiobufferoutput->isVirtualQAudioBufferOutput) {
        vqaudiobufferoutput->setQAudioBufferOutput_IsSignalConnected_IsBase(true);
        return vqaudiobufferoutput->isSignalConnected(*signal);
    } else {
        return ((VirtualQAudioBufferOutput*)self)->isSignalConnected(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QAudioBufferOutput_OnIsSignalConnected(const QAudioBufferOutput* self, intptr_t slot) {
    auto* vqaudiobufferoutput = const_cast<VirtualQAudioBufferOutput*>(dynamic_cast<const VirtualQAudioBufferOutput*>(self));
    if (vqaudiobufferoutput && vqaudiobufferoutput->isVirtualQAudioBufferOutput) {
        vqaudiobufferoutput->setQAudioBufferOutput_IsSignalConnected_Callback(reinterpret_cast<VirtualQAudioBufferOutput::QAudioBufferOutput_IsSignalConnected_Callback>(slot));
    }
}

void QAudioBufferOutput_Delete(QAudioBufferOutput* self) {
    delete self;
}
