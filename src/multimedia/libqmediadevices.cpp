#include <QAudioDevice>
#include <QCameraDevice>
#include <QChildEvent>
#include <QEvent>
#include <QList>
#include <QMediaDevices>
#include <QMetaMethod>
#include <QMetaObject>
#include <QObject>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <QTimerEvent>
#include <qmediadevices.h>
#include "libqmediadevices.h"
#include "libqmediadevices.hxx"

QMediaDevices* QMediaDevices_new() {
    return new VirtualQMediaDevices();
}

QMediaDevices* QMediaDevices_new2(QObject* parent) {
    return new VirtualQMediaDevices(parent);
}

QMetaObject* QMediaDevices_MetaObject(const QMediaDevices* self) {
    return (QMetaObject*)self->metaObject();
}

void* QMediaDevices_Metacast(QMediaDevices* self, const char* param1) {
    return self->qt_metacast(param1);
}

int QMediaDevices_Metacall(QMediaDevices* self, int param1, int param2, void** param3) {
    auto* vqmediadevices = dynamic_cast<VirtualQMediaDevices*>(self);
    if (vqmediadevices && vqmediadevices->isVirtualQMediaDevices) {
        return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return ((VirtualQMediaDevices*)self)->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

// Subclass method to allow providing a virtual method re-implementation
void QMediaDevices_OnMetacall(QMediaDevices* self, intptr_t slot) {
    auto* vqmediadevices = dynamic_cast<VirtualQMediaDevices*>(self);
    if (vqmediadevices && vqmediadevices->isVirtualQMediaDevices) {
        vqmediadevices->setQMediaDevices_Metacall_Callback(reinterpret_cast<VirtualQMediaDevices::QMediaDevices_Metacall_Callback>(slot));
    }
}

// Virtual base class handler implementation
int QMediaDevices_QBaseMetacall(QMediaDevices* self, int param1, int param2, void** param3) {
    auto* vqmediadevices = dynamic_cast<VirtualQMediaDevices*>(self);
    if (vqmediadevices && vqmediadevices->isVirtualQMediaDevices) {
        vqmediadevices->setQMediaDevices_Metacall_IsBase(true);
        return vqmediadevices->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return ((VirtualQMediaDevices*)self)->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

libqt_string QMediaDevices_Tr(const char* s) {
    QString _ret = QMediaDevices::tr(s);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<char*>(malloc((_str.len + 1) * sizeof(char)));
    memcpy(_str.data, _b.data(), _str.len);
    _str.data[_str.len] = '\0';
    return _str;
}

libqt_list /* of QAudioDevice* */ QMediaDevices_AudioInputs() {
    QList<QAudioDevice> _ret = QMediaDevices::audioInputs();
    // Convert QList<> from C++ memory to manually-managed C memory
    QAudioDevice** _arr = static_cast<QAudioDevice**>(malloc(sizeof(QAudioDevice*) * _ret.length()));
    for (size_t i = 0; i < _ret.length(); ++i) {
        _arr[i] = new QAudioDevice(_ret[i]);
    }
    libqt_list _out;
    _out.len = _ret.length();
    _out.data = static_cast<void*>(_arr);
    return _out;
}

libqt_list /* of QAudioDevice* */ QMediaDevices_AudioOutputs() {
    QList<QAudioDevice> _ret = QMediaDevices::audioOutputs();
    // Convert QList<> from C++ memory to manually-managed C memory
    QAudioDevice** _arr = static_cast<QAudioDevice**>(malloc(sizeof(QAudioDevice*) * _ret.length()));
    for (size_t i = 0; i < _ret.length(); ++i) {
        _arr[i] = new QAudioDevice(_ret[i]);
    }
    libqt_list _out;
    _out.len = _ret.length();
    _out.data = static_cast<void*>(_arr);
    return _out;
}

libqt_list /* of QCameraDevice* */ QMediaDevices_VideoInputs() {
    QList<QCameraDevice> _ret = QMediaDevices::videoInputs();
    // Convert QList<> from C++ memory to manually-managed C memory
    QCameraDevice** _arr = static_cast<QCameraDevice**>(malloc(sizeof(QCameraDevice*) * _ret.length()));
    for (size_t i = 0; i < _ret.length(); ++i) {
        _arr[i] = new QCameraDevice(_ret[i]);
    }
    libqt_list _out;
    _out.len = _ret.length();
    _out.data = static_cast<void*>(_arr);
    return _out;
}

QAudioDevice* QMediaDevices_DefaultAudioInput() {
    return new QAudioDevice(QMediaDevices::defaultAudioInput());
}

QAudioDevice* QMediaDevices_DefaultAudioOutput() {
    return new QAudioDevice(QMediaDevices::defaultAudioOutput());
}

QCameraDevice* QMediaDevices_DefaultVideoInput() {
    return new QCameraDevice(QMediaDevices::defaultVideoInput());
}

void QMediaDevices_AudioInputsChanged(QMediaDevices* self) {
    self->audioInputsChanged();
}

void QMediaDevices_Connect_AudioInputsChanged(QMediaDevices* self, intptr_t slot) {
    void (*slotFunc)(QMediaDevices*) = reinterpret_cast<void (*)(QMediaDevices*)>(slot);
    QMediaDevices::connect(self, &QMediaDevices::audioInputsChanged, [self, slotFunc]() {
        slotFunc(self);
    });
}

void QMediaDevices_AudioOutputsChanged(QMediaDevices* self) {
    self->audioOutputsChanged();
}

void QMediaDevices_Connect_AudioOutputsChanged(QMediaDevices* self, intptr_t slot) {
    void (*slotFunc)(QMediaDevices*) = reinterpret_cast<void (*)(QMediaDevices*)>(slot);
    QMediaDevices::connect(self, &QMediaDevices::audioOutputsChanged, [self, slotFunc]() {
        slotFunc(self);
    });
}

void QMediaDevices_VideoInputsChanged(QMediaDevices* self) {
    self->videoInputsChanged();
}

void QMediaDevices_Connect_VideoInputsChanged(QMediaDevices* self, intptr_t slot) {
    void (*slotFunc)(QMediaDevices*) = reinterpret_cast<void (*)(QMediaDevices*)>(slot);
    QMediaDevices::connect(self, &QMediaDevices::videoInputsChanged, [self, slotFunc]() {
        slotFunc(self);
    });
}

libqt_string QMediaDevices_Tr2(const char* s, const char* c) {
    QString _ret = QMediaDevices::tr(s, c);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<char*>(malloc((_str.len + 1) * sizeof(char)));
    memcpy(_str.data, _b.data(), _str.len);
    _str.data[_str.len] = '\0';
    return _str;
}

libqt_string QMediaDevices_Tr3(const char* s, const char* c, int n) {
    QString _ret = QMediaDevices::tr(s, c, static_cast<int>(n));
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
bool QMediaDevices_Event(QMediaDevices* self, QEvent* event) {
    auto* vqmediadevices = dynamic_cast<VirtualQMediaDevices*>(self);
    if (vqmediadevices && vqmediadevices->isVirtualQMediaDevices) {
        return vqmediadevices->event(event);
    } else {
        return self->QMediaDevices::event(event);
    }
}

// Base class handler implementation
bool QMediaDevices_QBaseEvent(QMediaDevices* self, QEvent* event) {
    auto* vqmediadevices = dynamic_cast<VirtualQMediaDevices*>(self);
    if (vqmediadevices && vqmediadevices->isVirtualQMediaDevices) {
        vqmediadevices->setQMediaDevices_Event_IsBase(true);
        return vqmediadevices->event(event);
    } else {
        return self->QMediaDevices::event(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QMediaDevices_OnEvent(QMediaDevices* self, intptr_t slot) {
    auto* vqmediadevices = dynamic_cast<VirtualQMediaDevices*>(self);
    if (vqmediadevices && vqmediadevices->isVirtualQMediaDevices) {
        vqmediadevices->setQMediaDevices_Event_Callback(reinterpret_cast<VirtualQMediaDevices::QMediaDevices_Event_Callback>(slot));
    }
}

// Derived class handler implementation
bool QMediaDevices_EventFilter(QMediaDevices* self, QObject* watched, QEvent* event) {
    auto* vqmediadevices = dynamic_cast<VirtualQMediaDevices*>(self);
    if (vqmediadevices && vqmediadevices->isVirtualQMediaDevices) {
        return vqmediadevices->eventFilter(watched, event);
    } else {
        return self->QMediaDevices::eventFilter(watched, event);
    }
}

// Base class handler implementation
bool QMediaDevices_QBaseEventFilter(QMediaDevices* self, QObject* watched, QEvent* event) {
    auto* vqmediadevices = dynamic_cast<VirtualQMediaDevices*>(self);
    if (vqmediadevices && vqmediadevices->isVirtualQMediaDevices) {
        vqmediadevices->setQMediaDevices_EventFilter_IsBase(true);
        return vqmediadevices->eventFilter(watched, event);
    } else {
        return self->QMediaDevices::eventFilter(watched, event);
    }
}

// Auxiliary method to allow providing re-implementation
void QMediaDevices_OnEventFilter(QMediaDevices* self, intptr_t slot) {
    auto* vqmediadevices = dynamic_cast<VirtualQMediaDevices*>(self);
    if (vqmediadevices && vqmediadevices->isVirtualQMediaDevices) {
        vqmediadevices->setQMediaDevices_EventFilter_Callback(reinterpret_cast<VirtualQMediaDevices::QMediaDevices_EventFilter_Callback>(slot));
    }
}

// Derived class handler implementation
void QMediaDevices_TimerEvent(QMediaDevices* self, QTimerEvent* event) {
    auto* vqmediadevices = dynamic_cast<VirtualQMediaDevices*>(self);
    if (vqmediadevices && vqmediadevices->isVirtualQMediaDevices) {
        vqmediadevices->timerEvent(event);
    } else {
        ((VirtualQMediaDevices*)self)->timerEvent(event);
    }
}

// Base class handler implementation
void QMediaDevices_QBaseTimerEvent(QMediaDevices* self, QTimerEvent* event) {
    auto* vqmediadevices = dynamic_cast<VirtualQMediaDevices*>(self);
    if (vqmediadevices && vqmediadevices->isVirtualQMediaDevices) {
        vqmediadevices->setQMediaDevices_TimerEvent_IsBase(true);
        vqmediadevices->timerEvent(event);
    } else {
        ((VirtualQMediaDevices*)self)->timerEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QMediaDevices_OnTimerEvent(QMediaDevices* self, intptr_t slot) {
    auto* vqmediadevices = dynamic_cast<VirtualQMediaDevices*>(self);
    if (vqmediadevices && vqmediadevices->isVirtualQMediaDevices) {
        vqmediadevices->setQMediaDevices_TimerEvent_Callback(reinterpret_cast<VirtualQMediaDevices::QMediaDevices_TimerEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QMediaDevices_ChildEvent(QMediaDevices* self, QChildEvent* event) {
    auto* vqmediadevices = dynamic_cast<VirtualQMediaDevices*>(self);
    if (vqmediadevices && vqmediadevices->isVirtualQMediaDevices) {
        vqmediadevices->childEvent(event);
    } else {
        ((VirtualQMediaDevices*)self)->childEvent(event);
    }
}

// Base class handler implementation
void QMediaDevices_QBaseChildEvent(QMediaDevices* self, QChildEvent* event) {
    auto* vqmediadevices = dynamic_cast<VirtualQMediaDevices*>(self);
    if (vqmediadevices && vqmediadevices->isVirtualQMediaDevices) {
        vqmediadevices->setQMediaDevices_ChildEvent_IsBase(true);
        vqmediadevices->childEvent(event);
    } else {
        ((VirtualQMediaDevices*)self)->childEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QMediaDevices_OnChildEvent(QMediaDevices* self, intptr_t slot) {
    auto* vqmediadevices = dynamic_cast<VirtualQMediaDevices*>(self);
    if (vqmediadevices && vqmediadevices->isVirtualQMediaDevices) {
        vqmediadevices->setQMediaDevices_ChildEvent_Callback(reinterpret_cast<VirtualQMediaDevices::QMediaDevices_ChildEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QMediaDevices_CustomEvent(QMediaDevices* self, QEvent* event) {
    auto* vqmediadevices = dynamic_cast<VirtualQMediaDevices*>(self);
    if (vqmediadevices && vqmediadevices->isVirtualQMediaDevices) {
        vqmediadevices->customEvent(event);
    } else {
        ((VirtualQMediaDevices*)self)->customEvent(event);
    }
}

// Base class handler implementation
void QMediaDevices_QBaseCustomEvent(QMediaDevices* self, QEvent* event) {
    auto* vqmediadevices = dynamic_cast<VirtualQMediaDevices*>(self);
    if (vqmediadevices && vqmediadevices->isVirtualQMediaDevices) {
        vqmediadevices->setQMediaDevices_CustomEvent_IsBase(true);
        vqmediadevices->customEvent(event);
    } else {
        ((VirtualQMediaDevices*)self)->customEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QMediaDevices_OnCustomEvent(QMediaDevices* self, intptr_t slot) {
    auto* vqmediadevices = dynamic_cast<VirtualQMediaDevices*>(self);
    if (vqmediadevices && vqmediadevices->isVirtualQMediaDevices) {
        vqmediadevices->setQMediaDevices_CustomEvent_Callback(reinterpret_cast<VirtualQMediaDevices::QMediaDevices_CustomEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QMediaDevices_ConnectNotify(QMediaDevices* self, const QMetaMethod* signal) {
    auto* vqmediadevices = dynamic_cast<VirtualQMediaDevices*>(self);
    if (vqmediadevices && vqmediadevices->isVirtualQMediaDevices) {
        vqmediadevices->connectNotify(*signal);
    } else {
        ((VirtualQMediaDevices*)self)->connectNotify(*signal);
    }
}

// Base class handler implementation
void QMediaDevices_QBaseConnectNotify(QMediaDevices* self, const QMetaMethod* signal) {
    auto* vqmediadevices = dynamic_cast<VirtualQMediaDevices*>(self);
    if (vqmediadevices && vqmediadevices->isVirtualQMediaDevices) {
        vqmediadevices->setQMediaDevices_ConnectNotify_IsBase(true);
        vqmediadevices->connectNotify(*signal);
    } else {
        ((VirtualQMediaDevices*)self)->connectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QMediaDevices_OnConnectNotify(QMediaDevices* self, intptr_t slot) {
    auto* vqmediadevices = dynamic_cast<VirtualQMediaDevices*>(self);
    if (vqmediadevices && vqmediadevices->isVirtualQMediaDevices) {
        vqmediadevices->setQMediaDevices_ConnectNotify_Callback(reinterpret_cast<VirtualQMediaDevices::QMediaDevices_ConnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
void QMediaDevices_DisconnectNotify(QMediaDevices* self, const QMetaMethod* signal) {
    auto* vqmediadevices = dynamic_cast<VirtualQMediaDevices*>(self);
    if (vqmediadevices && vqmediadevices->isVirtualQMediaDevices) {
        vqmediadevices->disconnectNotify(*signal);
    } else {
        ((VirtualQMediaDevices*)self)->disconnectNotify(*signal);
    }
}

// Base class handler implementation
void QMediaDevices_QBaseDisconnectNotify(QMediaDevices* self, const QMetaMethod* signal) {
    auto* vqmediadevices = dynamic_cast<VirtualQMediaDevices*>(self);
    if (vqmediadevices && vqmediadevices->isVirtualQMediaDevices) {
        vqmediadevices->setQMediaDevices_DisconnectNotify_IsBase(true);
        vqmediadevices->disconnectNotify(*signal);
    } else {
        ((VirtualQMediaDevices*)self)->disconnectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QMediaDevices_OnDisconnectNotify(QMediaDevices* self, intptr_t slot) {
    auto* vqmediadevices = dynamic_cast<VirtualQMediaDevices*>(self);
    if (vqmediadevices && vqmediadevices->isVirtualQMediaDevices) {
        vqmediadevices->setQMediaDevices_DisconnectNotify_Callback(reinterpret_cast<VirtualQMediaDevices::QMediaDevices_DisconnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
QObject* QMediaDevices_Sender(const QMediaDevices* self) {
    auto* vqmediadevices = const_cast<VirtualQMediaDevices*>(dynamic_cast<const VirtualQMediaDevices*>(self));
    if (vqmediadevices && vqmediadevices->isVirtualQMediaDevices) {
        return vqmediadevices->sender();
    } else {
        return ((VirtualQMediaDevices*)self)->sender();
    }
}

// Base class handler implementation
QObject* QMediaDevices_QBaseSender(const QMediaDevices* self) {
    auto* vqmediadevices = const_cast<VirtualQMediaDevices*>(dynamic_cast<const VirtualQMediaDevices*>(self));
    if (vqmediadevices && vqmediadevices->isVirtualQMediaDevices) {
        vqmediadevices->setQMediaDevices_Sender_IsBase(true);
        return vqmediadevices->sender();
    } else {
        return ((VirtualQMediaDevices*)self)->sender();
    }
}

// Auxiliary method to allow providing re-implementation
void QMediaDevices_OnSender(const QMediaDevices* self, intptr_t slot) {
    auto* vqmediadevices = const_cast<VirtualQMediaDevices*>(dynamic_cast<const VirtualQMediaDevices*>(self));
    if (vqmediadevices && vqmediadevices->isVirtualQMediaDevices) {
        vqmediadevices->setQMediaDevices_Sender_Callback(reinterpret_cast<VirtualQMediaDevices::QMediaDevices_Sender_Callback>(slot));
    }
}

// Derived class handler implementation
int QMediaDevices_SenderSignalIndex(const QMediaDevices* self) {
    auto* vqmediadevices = const_cast<VirtualQMediaDevices*>(dynamic_cast<const VirtualQMediaDevices*>(self));
    if (vqmediadevices && vqmediadevices->isVirtualQMediaDevices) {
        return vqmediadevices->senderSignalIndex();
    } else {
        return ((VirtualQMediaDevices*)self)->senderSignalIndex();
    }
}

// Base class handler implementation
int QMediaDevices_QBaseSenderSignalIndex(const QMediaDevices* self) {
    auto* vqmediadevices = const_cast<VirtualQMediaDevices*>(dynamic_cast<const VirtualQMediaDevices*>(self));
    if (vqmediadevices && vqmediadevices->isVirtualQMediaDevices) {
        vqmediadevices->setQMediaDevices_SenderSignalIndex_IsBase(true);
        return vqmediadevices->senderSignalIndex();
    } else {
        return ((VirtualQMediaDevices*)self)->senderSignalIndex();
    }
}

// Auxiliary method to allow providing re-implementation
void QMediaDevices_OnSenderSignalIndex(const QMediaDevices* self, intptr_t slot) {
    auto* vqmediadevices = const_cast<VirtualQMediaDevices*>(dynamic_cast<const VirtualQMediaDevices*>(self));
    if (vqmediadevices && vqmediadevices->isVirtualQMediaDevices) {
        vqmediadevices->setQMediaDevices_SenderSignalIndex_Callback(reinterpret_cast<VirtualQMediaDevices::QMediaDevices_SenderSignalIndex_Callback>(slot));
    }
}

// Derived class handler implementation
int QMediaDevices_Receivers(const QMediaDevices* self, const char* signal) {
    auto* vqmediadevices = const_cast<VirtualQMediaDevices*>(dynamic_cast<const VirtualQMediaDevices*>(self));
    if (vqmediadevices && vqmediadevices->isVirtualQMediaDevices) {
        return vqmediadevices->receivers(signal);
    } else {
        return ((VirtualQMediaDevices*)self)->receivers(signal);
    }
}

// Base class handler implementation
int QMediaDevices_QBaseReceivers(const QMediaDevices* self, const char* signal) {
    auto* vqmediadevices = const_cast<VirtualQMediaDevices*>(dynamic_cast<const VirtualQMediaDevices*>(self));
    if (vqmediadevices && vqmediadevices->isVirtualQMediaDevices) {
        vqmediadevices->setQMediaDevices_Receivers_IsBase(true);
        return vqmediadevices->receivers(signal);
    } else {
        return ((VirtualQMediaDevices*)self)->receivers(signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QMediaDevices_OnReceivers(const QMediaDevices* self, intptr_t slot) {
    auto* vqmediadevices = const_cast<VirtualQMediaDevices*>(dynamic_cast<const VirtualQMediaDevices*>(self));
    if (vqmediadevices && vqmediadevices->isVirtualQMediaDevices) {
        vqmediadevices->setQMediaDevices_Receivers_Callback(reinterpret_cast<VirtualQMediaDevices::QMediaDevices_Receivers_Callback>(slot));
    }
}

// Derived class handler implementation
bool QMediaDevices_IsSignalConnected(const QMediaDevices* self, const QMetaMethod* signal) {
    auto* vqmediadevices = const_cast<VirtualQMediaDevices*>(dynamic_cast<const VirtualQMediaDevices*>(self));
    if (vqmediadevices && vqmediadevices->isVirtualQMediaDevices) {
        return vqmediadevices->isSignalConnected(*signal);
    } else {
        return ((VirtualQMediaDevices*)self)->isSignalConnected(*signal);
    }
}

// Base class handler implementation
bool QMediaDevices_QBaseIsSignalConnected(const QMediaDevices* self, const QMetaMethod* signal) {
    auto* vqmediadevices = const_cast<VirtualQMediaDevices*>(dynamic_cast<const VirtualQMediaDevices*>(self));
    if (vqmediadevices && vqmediadevices->isVirtualQMediaDevices) {
        vqmediadevices->setQMediaDevices_IsSignalConnected_IsBase(true);
        return vqmediadevices->isSignalConnected(*signal);
    } else {
        return ((VirtualQMediaDevices*)self)->isSignalConnected(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QMediaDevices_OnIsSignalConnected(const QMediaDevices* self, intptr_t slot) {
    auto* vqmediadevices = const_cast<VirtualQMediaDevices*>(dynamic_cast<const VirtualQMediaDevices*>(self));
    if (vqmediadevices && vqmediadevices->isVirtualQMediaDevices) {
        vqmediadevices->setQMediaDevices_IsSignalConnected_Callback(reinterpret_cast<VirtualQMediaDevices::QMediaDevices_IsSignalConnected_Callback>(slot));
    }
}

void QMediaDevices_Delete(QMediaDevices* self) {
    delete self;
}
