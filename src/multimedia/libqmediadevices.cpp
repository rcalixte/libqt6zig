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
    auto* vqmediadevices = dynamic_cast<const VirtualQMediaDevices*>(self);
    if (vqmediadevices && vqmediadevices->isVirtualQMediaDevices) {
        return (QMetaObject*)self->metaObject();
    } else {
        return (QMetaObject*)((VirtualQMediaDevices*)self)->metaObject();
    }
}

void* QMediaDevices_Metacast(QMediaDevices* self, const char* param1) {
    auto* vqmediadevices = dynamic_cast<VirtualQMediaDevices*>(self);
    if (vqmediadevices && vqmediadevices->isVirtualQMediaDevices) {
        return self->qt_metacast(param1);
    } else {
        return ((VirtualQMediaDevices*)self)->qt_metacast(param1);
    }
}

int QMediaDevices_Metacall(QMediaDevices* self, int param1, int param2, void** param3) {
    auto* vqmediadevices = dynamic_cast<VirtualQMediaDevices*>(self);
    if (vqmediadevices && vqmediadevices->isVirtualQMediaDevices) {
        return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return ((VirtualQMediaDevices*)self)->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

libqt_list /* of QAudioDevice* */ QMediaDevices_AudioInputs() {
    QList<QAudioDevice> _ret = QMediaDevices::audioInputs();
    // Convert QList<> from C++ memory to manually-managed C memory
    QAudioDevice** _arr = static_cast<QAudioDevice**>(malloc(sizeof(QAudioDevice*) * (_ret.size())));
    for (qsizetype i = 0; i < _ret.size(); ++i) {
        _arr[i] = new QAudioDevice(_ret[i]);
    }
    libqt_list _out;
    _out.len = _ret.size();
    _out.data = static_cast<void*>(_arr);
    return _out;
}

libqt_list /* of QAudioDevice* */ QMediaDevices_AudioOutputs() {
    QList<QAudioDevice> _ret = QMediaDevices::audioOutputs();
    // Convert QList<> from C++ memory to manually-managed C memory
    QAudioDevice** _arr = static_cast<QAudioDevice**>(malloc(sizeof(QAudioDevice*) * (_ret.size())));
    for (qsizetype i = 0; i < _ret.size(); ++i) {
        _arr[i] = new QAudioDevice(_ret[i]);
    }
    libqt_list _out;
    _out.len = _ret.size();
    _out.data = static_cast<void*>(_arr);
    return _out;
}

libqt_list /* of QCameraDevice* */ QMediaDevices_VideoInputs() {
    QList<QCameraDevice> _ret = QMediaDevices::videoInputs();
    // Convert QList<> from C++ memory to manually-managed C memory
    QCameraDevice** _arr = static_cast<QCameraDevice**>(malloc(sizeof(QCameraDevice*) * (_ret.size())));
    for (qsizetype i = 0; i < _ret.size(); ++i) {
        _arr[i] = new QCameraDevice(_ret[i]);
    }
    libqt_list _out;
    _out.len = _ret.size();
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

void QMediaDevices_ConnectNotify(QMediaDevices* self, const QMetaMethod* signal) {
    auto* vqmediadevices = dynamic_cast<VirtualQMediaDevices*>(self);
    if (vqmediadevices && vqmediadevices->isVirtualQMediaDevices) {
        vqmediadevices->connectNotify(*signal);
    }
}

// Base class handler implementation
QMetaObject* QMediaDevices_SuperMetaObject(const QMediaDevices* self) {
    auto* vqmediadevices = const_cast<VirtualQMediaDevices*>(dynamic_cast<const VirtualQMediaDevices*>(self));
    if (vqmediadevices && vqmediadevices->isVirtualQMediaDevices) {
        vqmediadevices->setQMediaDevices_MetaObject_IsBase(true);
        return (QMetaObject*)vqmediadevices->metaObject();
    } else {
        return (QMetaObject*)self->QMediaDevices::metaObject();
    }
}

// Auxiliary method to allow providing re-implementation
void QMediaDevices_OnMetaObject(const QMediaDevices* self, intptr_t slot) {
    auto* vqmediadevices = const_cast<VirtualQMediaDevices*>(dynamic_cast<const VirtualQMediaDevices*>(self));
    if (vqmediadevices && vqmediadevices->isVirtualQMediaDevices) {
        vqmediadevices->setQMediaDevices_MetaObject_Callback(reinterpret_cast<VirtualQMediaDevices::QMediaDevices_MetaObject_Callback>(slot));
    }
}

// Base class handler implementation
void* QMediaDevices_SuperMetacast(QMediaDevices* self, const char* param1) {
    auto* vqmediadevices = dynamic_cast<VirtualQMediaDevices*>(self);
    if (vqmediadevices && vqmediadevices->isVirtualQMediaDevices) {
        vqmediadevices->setQMediaDevices_Metacast_IsBase(true);
        return vqmediadevices->qt_metacast(param1);
    } else {
        return self->QMediaDevices::qt_metacast(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void QMediaDevices_OnMetacast(QMediaDevices* self, intptr_t slot) {
    auto* vqmediadevices = dynamic_cast<VirtualQMediaDevices*>(self);
    if (vqmediadevices && vqmediadevices->isVirtualQMediaDevices) {
        vqmediadevices->setQMediaDevices_Metacast_Callback(reinterpret_cast<VirtualQMediaDevices::QMediaDevices_Metacast_Callback>(slot));
    }
}

// Base class handler implementation
int QMediaDevices_SuperMetacall(QMediaDevices* self, int param1, int param2, void** param3) {
    auto* vqmediadevices = dynamic_cast<VirtualQMediaDevices*>(self);
    if (vqmediadevices && vqmediadevices->isVirtualQMediaDevices) {
        vqmediadevices->setQMediaDevices_Metacall_IsBase(true);
        return vqmediadevices->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return self->QMediaDevices::qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

// Auxiliary method to allow providing re-implementation
void QMediaDevices_OnMetacall(QMediaDevices* self, intptr_t slot) {
    auto* vqmediadevices = dynamic_cast<VirtualQMediaDevices*>(self);
    if (vqmediadevices && vqmediadevices->isVirtualQMediaDevices) {
        vqmediadevices->setQMediaDevices_Metacall_Callback(reinterpret_cast<VirtualQMediaDevices::QMediaDevices_Metacall_Callback>(slot));
    }
}

// Base class handler implementation
void QMediaDevices_SuperConnectNotify(QMediaDevices* self, const QMetaMethod* signal) {
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
bool QMediaDevices_Event(QMediaDevices* self, QEvent* event) {
    auto* vqmediadevices = dynamic_cast<VirtualQMediaDevices*>(self);
    if (vqmediadevices && vqmediadevices->isVirtualQMediaDevices) {
        return vqmediadevices->event(event);
    } else {
        return self->QMediaDevices::event(event);
    }
}

// Base class handler implementation
bool QMediaDevices_SuperEvent(QMediaDevices* self, QEvent* event) {
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
bool QMediaDevices_SuperEventFilter(QMediaDevices* self, QObject* watched, QEvent* event) {
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
void QMediaDevices_SuperTimerEvent(QMediaDevices* self, QTimerEvent* event) {
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
void QMediaDevices_SuperChildEvent(QMediaDevices* self, QChildEvent* event) {
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
void QMediaDevices_SuperCustomEvent(QMediaDevices* self, QEvent* event) {
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
void QMediaDevices_DisconnectNotify(QMediaDevices* self, const QMetaMethod* signal) {
    auto* vqmediadevices = dynamic_cast<VirtualQMediaDevices*>(self);
    if (vqmediadevices && vqmediadevices->isVirtualQMediaDevices) {
        vqmediadevices->disconnectNotify(*signal);
    } else {
        ((VirtualQMediaDevices*)self)->disconnectNotify(*signal);
    }
}

// Base class handler implementation
void QMediaDevices_SuperDisconnectNotify(QMediaDevices* self, const QMetaMethod* signal) {
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
QObject* QMediaDevices_SuperSender(const QMediaDevices* self) {
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
int QMediaDevices_SuperSenderSignalIndex(const QMediaDevices* self) {
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
int QMediaDevices_SuperReceivers(const QMediaDevices* self, const char* signal) {
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
bool QMediaDevices_SuperIsSignalConnected(const QMediaDevices* self, const QMetaMethod* signal) {
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
