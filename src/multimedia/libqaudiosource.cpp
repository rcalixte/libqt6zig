#include <QAudioDevice>
#include <QAudioFormat>
#include <QAudioSource>
#include <QChildEvent>
#include <QEvent>
#include <QIODevice>
#include <QMetaMethod>
#include <QMetaObject>
#include <QObject>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <QTimerEvent>
#include <qaudiosource.h>
#include "libqaudiosource.h"
#include "libqaudiosource.hxx"

QAudioSource* QAudioSource_new() {
    return new VirtualQAudioSource();
}

QAudioSource* QAudioSource_new2(const QAudioDevice* audioDeviceInfo) {
    return new VirtualQAudioSource(*audioDeviceInfo);
}

QAudioSource* QAudioSource_new3(const QAudioFormat* format) {
    return new VirtualQAudioSource(*format);
}

QAudioSource* QAudioSource_new4(const QAudioFormat* format, QObject* parent) {
    return new VirtualQAudioSource(*format, parent);
}

QAudioSource* QAudioSource_new5(const QAudioDevice* audioDeviceInfo, const QAudioFormat* format) {
    return new VirtualQAudioSource(*audioDeviceInfo, *format);
}

QAudioSource* QAudioSource_new6(const QAudioDevice* audioDeviceInfo, const QAudioFormat* format, QObject* parent) {
    return new VirtualQAudioSource(*audioDeviceInfo, *format, parent);
}

QMetaObject* QAudioSource_MetaObject(const QAudioSource* self) {
    return (QMetaObject*)self->metaObject();
}

void* QAudioSource_Metacast(QAudioSource* self, const char* param1) {
    return self->qt_metacast(param1);
}

int QAudioSource_Metacall(QAudioSource* self, int param1, int param2, void** param3) {
    auto* vqaudiosource = dynamic_cast<VirtualQAudioSource*>(self);
    if (vqaudiosource && vqaudiosource->isVirtualQAudioSource) {
        return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return ((VirtualQAudioSource*)self)->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

libqt_string QAudioSource_Tr(const char* s) {
    QString _ret = QAudioSource::tr(s);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

bool QAudioSource_IsNull(const QAudioSource* self) {
    return self->isNull();
}

QAudioFormat* QAudioSource_Format(const QAudioSource* self) {
    return new QAudioFormat(self->format());
}

void QAudioSource_Start(QAudioSource* self, QIODevice* device) {
    self->start(device);
}

QIODevice* QAudioSource_Start2(QAudioSource* self) {
    return self->start();
}

void QAudioSource_Stop(QAudioSource* self) {
    self->stop();
}

void QAudioSource_Reset(QAudioSource* self) {
    self->reset();
}

void QAudioSource_Suspend(QAudioSource* self) {
    self->suspend();
}

void QAudioSource_Resume(QAudioSource* self) {
    self->resume();
}

void QAudioSource_SetBufferSize(QAudioSource* self, ptrdiff_t bytes) {
    self->setBufferSize((qsizetype)(bytes));
}

ptrdiff_t QAudioSource_BufferSize(const QAudioSource* self) {
    return static_cast<ptrdiff_t>(self->bufferSize());
}

ptrdiff_t QAudioSource_BytesAvailable(const QAudioSource* self) {
    return static_cast<ptrdiff_t>(self->bytesAvailable());
}

void QAudioSource_SetVolume(QAudioSource* self, double volume) {
    self->setVolume(static_cast<qreal>(volume));
}

double QAudioSource_Volume(const QAudioSource* self) {
    return static_cast<double>(self->volume());
}

long long QAudioSource_ProcessedUSecs(const QAudioSource* self) {
    return static_cast<long long>(self->processedUSecs());
}

long long QAudioSource_ElapsedUSecs(const QAudioSource* self) {
    return static_cast<long long>(self->elapsedUSecs());
}

int QAudioSource_Error(const QAudioSource* self) {
    return static_cast<int>(self->error());
}

int QAudioSource_State(const QAudioSource* self) {
    return static_cast<int>(self->state());
}

void QAudioSource_StateChanged(QAudioSource* self, int state) {
    self->stateChanged(static_cast<QAudio::State>(state));
}

void QAudioSource_Connect_StateChanged(QAudioSource* self, intptr_t slot) {
    void (*slotFunc)(QAudioSource*, int) = reinterpret_cast<void (*)(QAudioSource*, int)>(slot);
    QAudioSource::connect(self, &QAudioSource::stateChanged, [self, slotFunc](QAudio::State state) {
        int sigval1 = static_cast<int>(state);
        slotFunc(self, sigval1);
    });
}

libqt_string QAudioSource_Tr2(const char* s, const char* c) {
    QString _ret = QAudioSource::tr(s, c);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string QAudioSource_Tr3(const char* s, const char* c, int n) {
    QString _ret = QAudioSource::tr(s, c, static_cast<int>(n));
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
int QAudioSource_QBaseMetacall(QAudioSource* self, int param1, int param2, void** param3) {
    auto* vqaudiosource = dynamic_cast<VirtualQAudioSource*>(self);
    if (vqaudiosource && vqaudiosource->isVirtualQAudioSource) {
        vqaudiosource->setQAudioSource_Metacall_IsBase(true);
        return vqaudiosource->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return self->QAudioSource::qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

// Auxiliary method to allow providing re-implementation
void QAudioSource_OnMetacall(QAudioSource* self, intptr_t slot) {
    auto* vqaudiosource = dynamic_cast<VirtualQAudioSource*>(self);
    if (vqaudiosource && vqaudiosource->isVirtualQAudioSource) {
        vqaudiosource->setQAudioSource_Metacall_Callback(reinterpret_cast<VirtualQAudioSource::QAudioSource_Metacall_Callback>(slot));
    }
}

// Derived class handler implementation
bool QAudioSource_Event(QAudioSource* self, QEvent* event) {
    auto* vqaudiosource = dynamic_cast<VirtualQAudioSource*>(self);
    if (vqaudiosource && vqaudiosource->isVirtualQAudioSource) {
        return vqaudiosource->event(event);
    } else {
        return self->QAudioSource::event(event);
    }
}

// Base class handler implementation
bool QAudioSource_QBaseEvent(QAudioSource* self, QEvent* event) {
    auto* vqaudiosource = dynamic_cast<VirtualQAudioSource*>(self);
    if (vqaudiosource && vqaudiosource->isVirtualQAudioSource) {
        vqaudiosource->setQAudioSource_Event_IsBase(true);
        return vqaudiosource->event(event);
    } else {
        return self->QAudioSource::event(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QAudioSource_OnEvent(QAudioSource* self, intptr_t slot) {
    auto* vqaudiosource = dynamic_cast<VirtualQAudioSource*>(self);
    if (vqaudiosource && vqaudiosource->isVirtualQAudioSource) {
        vqaudiosource->setQAudioSource_Event_Callback(reinterpret_cast<VirtualQAudioSource::QAudioSource_Event_Callback>(slot));
    }
}

// Derived class handler implementation
bool QAudioSource_EventFilter(QAudioSource* self, QObject* watched, QEvent* event) {
    auto* vqaudiosource = dynamic_cast<VirtualQAudioSource*>(self);
    if (vqaudiosource && vqaudiosource->isVirtualQAudioSource) {
        return vqaudiosource->eventFilter(watched, event);
    } else {
        return self->QAudioSource::eventFilter(watched, event);
    }
}

// Base class handler implementation
bool QAudioSource_QBaseEventFilter(QAudioSource* self, QObject* watched, QEvent* event) {
    auto* vqaudiosource = dynamic_cast<VirtualQAudioSource*>(self);
    if (vqaudiosource && vqaudiosource->isVirtualQAudioSource) {
        vqaudiosource->setQAudioSource_EventFilter_IsBase(true);
        return vqaudiosource->eventFilter(watched, event);
    } else {
        return self->QAudioSource::eventFilter(watched, event);
    }
}

// Auxiliary method to allow providing re-implementation
void QAudioSource_OnEventFilter(QAudioSource* self, intptr_t slot) {
    auto* vqaudiosource = dynamic_cast<VirtualQAudioSource*>(self);
    if (vqaudiosource && vqaudiosource->isVirtualQAudioSource) {
        vqaudiosource->setQAudioSource_EventFilter_Callback(reinterpret_cast<VirtualQAudioSource::QAudioSource_EventFilter_Callback>(slot));
    }
}

// Derived class handler implementation
void QAudioSource_TimerEvent(QAudioSource* self, QTimerEvent* event) {
    auto* vqaudiosource = dynamic_cast<VirtualQAudioSource*>(self);
    if (vqaudiosource && vqaudiosource->isVirtualQAudioSource) {
        vqaudiosource->timerEvent(event);
    } else {
        ((VirtualQAudioSource*)self)->timerEvent(event);
    }
}

// Base class handler implementation
void QAudioSource_QBaseTimerEvent(QAudioSource* self, QTimerEvent* event) {
    auto* vqaudiosource = dynamic_cast<VirtualQAudioSource*>(self);
    if (vqaudiosource && vqaudiosource->isVirtualQAudioSource) {
        vqaudiosource->setQAudioSource_TimerEvent_IsBase(true);
        vqaudiosource->timerEvent(event);
    } else {
        ((VirtualQAudioSource*)self)->timerEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QAudioSource_OnTimerEvent(QAudioSource* self, intptr_t slot) {
    auto* vqaudiosource = dynamic_cast<VirtualQAudioSource*>(self);
    if (vqaudiosource && vqaudiosource->isVirtualQAudioSource) {
        vqaudiosource->setQAudioSource_TimerEvent_Callback(reinterpret_cast<VirtualQAudioSource::QAudioSource_TimerEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QAudioSource_ChildEvent(QAudioSource* self, QChildEvent* event) {
    auto* vqaudiosource = dynamic_cast<VirtualQAudioSource*>(self);
    if (vqaudiosource && vqaudiosource->isVirtualQAudioSource) {
        vqaudiosource->childEvent(event);
    } else {
        ((VirtualQAudioSource*)self)->childEvent(event);
    }
}

// Base class handler implementation
void QAudioSource_QBaseChildEvent(QAudioSource* self, QChildEvent* event) {
    auto* vqaudiosource = dynamic_cast<VirtualQAudioSource*>(self);
    if (vqaudiosource && vqaudiosource->isVirtualQAudioSource) {
        vqaudiosource->setQAudioSource_ChildEvent_IsBase(true);
        vqaudiosource->childEvent(event);
    } else {
        ((VirtualQAudioSource*)self)->childEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QAudioSource_OnChildEvent(QAudioSource* self, intptr_t slot) {
    auto* vqaudiosource = dynamic_cast<VirtualQAudioSource*>(self);
    if (vqaudiosource && vqaudiosource->isVirtualQAudioSource) {
        vqaudiosource->setQAudioSource_ChildEvent_Callback(reinterpret_cast<VirtualQAudioSource::QAudioSource_ChildEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QAudioSource_CustomEvent(QAudioSource* self, QEvent* event) {
    auto* vqaudiosource = dynamic_cast<VirtualQAudioSource*>(self);
    if (vqaudiosource && vqaudiosource->isVirtualQAudioSource) {
        vqaudiosource->customEvent(event);
    } else {
        ((VirtualQAudioSource*)self)->customEvent(event);
    }
}

// Base class handler implementation
void QAudioSource_QBaseCustomEvent(QAudioSource* self, QEvent* event) {
    auto* vqaudiosource = dynamic_cast<VirtualQAudioSource*>(self);
    if (vqaudiosource && vqaudiosource->isVirtualQAudioSource) {
        vqaudiosource->setQAudioSource_CustomEvent_IsBase(true);
        vqaudiosource->customEvent(event);
    } else {
        ((VirtualQAudioSource*)self)->customEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QAudioSource_OnCustomEvent(QAudioSource* self, intptr_t slot) {
    auto* vqaudiosource = dynamic_cast<VirtualQAudioSource*>(self);
    if (vqaudiosource && vqaudiosource->isVirtualQAudioSource) {
        vqaudiosource->setQAudioSource_CustomEvent_Callback(reinterpret_cast<VirtualQAudioSource::QAudioSource_CustomEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QAudioSource_ConnectNotify(QAudioSource* self, const QMetaMethod* signal) {
    auto* vqaudiosource = dynamic_cast<VirtualQAudioSource*>(self);
    if (vqaudiosource && vqaudiosource->isVirtualQAudioSource) {
        vqaudiosource->connectNotify(*signal);
    } else {
        ((VirtualQAudioSource*)self)->connectNotify(*signal);
    }
}

// Base class handler implementation
void QAudioSource_QBaseConnectNotify(QAudioSource* self, const QMetaMethod* signal) {
    auto* vqaudiosource = dynamic_cast<VirtualQAudioSource*>(self);
    if (vqaudiosource && vqaudiosource->isVirtualQAudioSource) {
        vqaudiosource->setQAudioSource_ConnectNotify_IsBase(true);
        vqaudiosource->connectNotify(*signal);
    } else {
        ((VirtualQAudioSource*)self)->connectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QAudioSource_OnConnectNotify(QAudioSource* self, intptr_t slot) {
    auto* vqaudiosource = dynamic_cast<VirtualQAudioSource*>(self);
    if (vqaudiosource && vqaudiosource->isVirtualQAudioSource) {
        vqaudiosource->setQAudioSource_ConnectNotify_Callback(reinterpret_cast<VirtualQAudioSource::QAudioSource_ConnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
void QAudioSource_DisconnectNotify(QAudioSource* self, const QMetaMethod* signal) {
    auto* vqaudiosource = dynamic_cast<VirtualQAudioSource*>(self);
    if (vqaudiosource && vqaudiosource->isVirtualQAudioSource) {
        vqaudiosource->disconnectNotify(*signal);
    } else {
        ((VirtualQAudioSource*)self)->disconnectNotify(*signal);
    }
}

// Base class handler implementation
void QAudioSource_QBaseDisconnectNotify(QAudioSource* self, const QMetaMethod* signal) {
    auto* vqaudiosource = dynamic_cast<VirtualQAudioSource*>(self);
    if (vqaudiosource && vqaudiosource->isVirtualQAudioSource) {
        vqaudiosource->setQAudioSource_DisconnectNotify_IsBase(true);
        vqaudiosource->disconnectNotify(*signal);
    } else {
        ((VirtualQAudioSource*)self)->disconnectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QAudioSource_OnDisconnectNotify(QAudioSource* self, intptr_t slot) {
    auto* vqaudiosource = dynamic_cast<VirtualQAudioSource*>(self);
    if (vqaudiosource && vqaudiosource->isVirtualQAudioSource) {
        vqaudiosource->setQAudioSource_DisconnectNotify_Callback(reinterpret_cast<VirtualQAudioSource::QAudioSource_DisconnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
QObject* QAudioSource_Sender(const QAudioSource* self) {
    auto* vqaudiosource = const_cast<VirtualQAudioSource*>(dynamic_cast<const VirtualQAudioSource*>(self));
    if (vqaudiosource && vqaudiosource->isVirtualQAudioSource) {
        return vqaudiosource->sender();
    } else {
        return ((VirtualQAudioSource*)self)->sender();
    }
}

// Base class handler implementation
QObject* QAudioSource_QBaseSender(const QAudioSource* self) {
    auto* vqaudiosource = const_cast<VirtualQAudioSource*>(dynamic_cast<const VirtualQAudioSource*>(self));
    if (vqaudiosource && vqaudiosource->isVirtualQAudioSource) {
        vqaudiosource->setQAudioSource_Sender_IsBase(true);
        return vqaudiosource->sender();
    } else {
        return ((VirtualQAudioSource*)self)->sender();
    }
}

// Auxiliary method to allow providing re-implementation
void QAudioSource_OnSender(const QAudioSource* self, intptr_t slot) {
    auto* vqaudiosource = const_cast<VirtualQAudioSource*>(dynamic_cast<const VirtualQAudioSource*>(self));
    if (vqaudiosource && vqaudiosource->isVirtualQAudioSource) {
        vqaudiosource->setQAudioSource_Sender_Callback(reinterpret_cast<VirtualQAudioSource::QAudioSource_Sender_Callback>(slot));
    }
}

// Derived class handler implementation
int QAudioSource_SenderSignalIndex(const QAudioSource* self) {
    auto* vqaudiosource = const_cast<VirtualQAudioSource*>(dynamic_cast<const VirtualQAudioSource*>(self));
    if (vqaudiosource && vqaudiosource->isVirtualQAudioSource) {
        return vqaudiosource->senderSignalIndex();
    } else {
        return ((VirtualQAudioSource*)self)->senderSignalIndex();
    }
}

// Base class handler implementation
int QAudioSource_QBaseSenderSignalIndex(const QAudioSource* self) {
    auto* vqaudiosource = const_cast<VirtualQAudioSource*>(dynamic_cast<const VirtualQAudioSource*>(self));
    if (vqaudiosource && vqaudiosource->isVirtualQAudioSource) {
        vqaudiosource->setQAudioSource_SenderSignalIndex_IsBase(true);
        return vqaudiosource->senderSignalIndex();
    } else {
        return ((VirtualQAudioSource*)self)->senderSignalIndex();
    }
}

// Auxiliary method to allow providing re-implementation
void QAudioSource_OnSenderSignalIndex(const QAudioSource* self, intptr_t slot) {
    auto* vqaudiosource = const_cast<VirtualQAudioSource*>(dynamic_cast<const VirtualQAudioSource*>(self));
    if (vqaudiosource && vqaudiosource->isVirtualQAudioSource) {
        vqaudiosource->setQAudioSource_SenderSignalIndex_Callback(reinterpret_cast<VirtualQAudioSource::QAudioSource_SenderSignalIndex_Callback>(slot));
    }
}

// Derived class handler implementation
int QAudioSource_Receivers(const QAudioSource* self, const char* signal) {
    auto* vqaudiosource = const_cast<VirtualQAudioSource*>(dynamic_cast<const VirtualQAudioSource*>(self));
    if (vqaudiosource && vqaudiosource->isVirtualQAudioSource) {
        return vqaudiosource->receivers(signal);
    } else {
        return ((VirtualQAudioSource*)self)->receivers(signal);
    }
}

// Base class handler implementation
int QAudioSource_QBaseReceivers(const QAudioSource* self, const char* signal) {
    auto* vqaudiosource = const_cast<VirtualQAudioSource*>(dynamic_cast<const VirtualQAudioSource*>(self));
    if (vqaudiosource && vqaudiosource->isVirtualQAudioSource) {
        vqaudiosource->setQAudioSource_Receivers_IsBase(true);
        return vqaudiosource->receivers(signal);
    } else {
        return ((VirtualQAudioSource*)self)->receivers(signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QAudioSource_OnReceivers(const QAudioSource* self, intptr_t slot) {
    auto* vqaudiosource = const_cast<VirtualQAudioSource*>(dynamic_cast<const VirtualQAudioSource*>(self));
    if (vqaudiosource && vqaudiosource->isVirtualQAudioSource) {
        vqaudiosource->setQAudioSource_Receivers_Callback(reinterpret_cast<VirtualQAudioSource::QAudioSource_Receivers_Callback>(slot));
    }
}

// Derived class handler implementation
bool QAudioSource_IsSignalConnected(const QAudioSource* self, const QMetaMethod* signal) {
    auto* vqaudiosource = const_cast<VirtualQAudioSource*>(dynamic_cast<const VirtualQAudioSource*>(self));
    if (vqaudiosource && vqaudiosource->isVirtualQAudioSource) {
        return vqaudiosource->isSignalConnected(*signal);
    } else {
        return ((VirtualQAudioSource*)self)->isSignalConnected(*signal);
    }
}

// Base class handler implementation
bool QAudioSource_QBaseIsSignalConnected(const QAudioSource* self, const QMetaMethod* signal) {
    auto* vqaudiosource = const_cast<VirtualQAudioSource*>(dynamic_cast<const VirtualQAudioSource*>(self));
    if (vqaudiosource && vqaudiosource->isVirtualQAudioSource) {
        vqaudiosource->setQAudioSource_IsSignalConnected_IsBase(true);
        return vqaudiosource->isSignalConnected(*signal);
    } else {
        return ((VirtualQAudioSource*)self)->isSignalConnected(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QAudioSource_OnIsSignalConnected(const QAudioSource* self, intptr_t slot) {
    auto* vqaudiosource = const_cast<VirtualQAudioSource*>(dynamic_cast<const VirtualQAudioSource*>(self));
    if (vqaudiosource && vqaudiosource->isVirtualQAudioSource) {
        vqaudiosource->setQAudioSource_IsSignalConnected_Callback(reinterpret_cast<VirtualQAudioSource::QAudioSource_IsSignalConnected_Callback>(slot));
    }
}

void QAudioSource_Delete(QAudioSource* self) {
    delete self;
}
