#include <QAudioEngine>
#include <QAudioRoom>
#include <QChildEvent>
#include <QEvent>
#include <QMetaMethod>
#include <QMetaObject>
#include <QObject>
#include <QQuaternion>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <QTimerEvent>
#include <QVector3D>
#include <qaudioroom.h>
#include "libqaudioroom.h"
#include "libqaudioroom.hxx"

QAudioRoom* QAudioRoom_new(QAudioEngine* engine) {
    return new VirtualQAudioRoom(engine);
}

QMetaObject* QAudioRoom_MetaObject(const QAudioRoom* self) {
    return (QMetaObject*)self->metaObject();
}

void* QAudioRoom_Metacast(QAudioRoom* self, const char* param1) {
    return self->qt_metacast(param1);
}

int QAudioRoom_Metacall(QAudioRoom* self, int param1, int param2, void** param3) {
    auto* vqaudioroom = dynamic_cast<VirtualQAudioRoom*>(self);
    if (vqaudioroom && vqaudioroom->isVirtualQAudioRoom) {
        return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return ((VirtualQAudioRoom*)self)->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

// Subclass method to allow providing a virtual method re-implementation
void QAudioRoom_OnMetacall(QAudioRoom* self, intptr_t slot) {
    auto* vqaudioroom = dynamic_cast<VirtualQAudioRoom*>(self);
    if (vqaudioroom && vqaudioroom->isVirtualQAudioRoom) {
        vqaudioroom->setQAudioRoom_Metacall_Callback(reinterpret_cast<VirtualQAudioRoom::QAudioRoom_Metacall_Callback>(slot));
    }
}

// Virtual base class handler implementation
int QAudioRoom_QBaseMetacall(QAudioRoom* self, int param1, int param2, void** param3) {
    auto* vqaudioroom = dynamic_cast<VirtualQAudioRoom*>(self);
    if (vqaudioroom && vqaudioroom->isVirtualQAudioRoom) {
        vqaudioroom->setQAudioRoom_Metacall_IsBase(true);
        return vqaudioroom->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return ((VirtualQAudioRoom*)self)->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

libqt_string QAudioRoom_Tr(const char* s) {
    QString _ret = QAudioRoom::tr(s);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc((_str.len + 1) * sizeof(char)));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

void QAudioRoom_SetPosition(QAudioRoom* self, QVector3D* pos) {
    self->setPosition(*pos);
}

QVector3D* QAudioRoom_Position(const QAudioRoom* self) {
    return new QVector3D(self->position());
}

void QAudioRoom_SetDimensions(QAudioRoom* self, QVector3D* dim) {
    self->setDimensions(*dim);
}

QVector3D* QAudioRoom_Dimensions(const QAudioRoom* self) {
    return new QVector3D(self->dimensions());
}

void QAudioRoom_SetRotation(QAudioRoom* self, const QQuaternion* q) {
    self->setRotation(*q);
}

QQuaternion* QAudioRoom_Rotation(const QAudioRoom* self) {
    return new QQuaternion(self->rotation());
}

void QAudioRoom_SetWallMaterial(QAudioRoom* self, int wall, int material) {
    self->setWallMaterial(static_cast<QAudioRoom::Wall>(wall), static_cast<QAudioRoom::Material>(material));
}

int QAudioRoom_WallMaterial(const QAudioRoom* self, int wall) {
    return static_cast<int>(self->wallMaterial(static_cast<QAudioRoom::Wall>(wall)));
}

void QAudioRoom_SetReflectionGain(QAudioRoom* self, float factor) {
    self->setReflectionGain(static_cast<float>(factor));
}

float QAudioRoom_ReflectionGain(const QAudioRoom* self) {
    return self->reflectionGain();
}

void QAudioRoom_SetReverbGain(QAudioRoom* self, float factor) {
    self->setReverbGain(static_cast<float>(factor));
}

float QAudioRoom_ReverbGain(const QAudioRoom* self) {
    return self->reverbGain();
}

void QAudioRoom_SetReverbTime(QAudioRoom* self, float factor) {
    self->setReverbTime(static_cast<float>(factor));
}

float QAudioRoom_ReverbTime(const QAudioRoom* self) {
    return self->reverbTime();
}

void QAudioRoom_SetReverbBrightness(QAudioRoom* self, float factor) {
    self->setReverbBrightness(static_cast<float>(factor));
}

float QAudioRoom_ReverbBrightness(const QAudioRoom* self) {
    return self->reverbBrightness();
}

void QAudioRoom_PositionChanged(QAudioRoom* self) {
    self->positionChanged();
}

void QAudioRoom_Connect_PositionChanged(QAudioRoom* self, intptr_t slot) {
    void (*slotFunc)(QAudioRoom*) = reinterpret_cast<void (*)(QAudioRoom*)>(slot);
    QAudioRoom::connect(self, &QAudioRoom::positionChanged, [self, slotFunc]() {
        slotFunc(self);
    });
}

void QAudioRoom_DimensionsChanged(QAudioRoom* self) {
    self->dimensionsChanged();
}

void QAudioRoom_Connect_DimensionsChanged(QAudioRoom* self, intptr_t slot) {
    void (*slotFunc)(QAudioRoom*) = reinterpret_cast<void (*)(QAudioRoom*)>(slot);
    QAudioRoom::connect(self, &QAudioRoom::dimensionsChanged, [self, slotFunc]() {
        slotFunc(self);
    });
}

void QAudioRoom_RotationChanged(QAudioRoom* self) {
    self->rotationChanged();
}

void QAudioRoom_Connect_RotationChanged(QAudioRoom* self, intptr_t slot) {
    void (*slotFunc)(QAudioRoom*) = reinterpret_cast<void (*)(QAudioRoom*)>(slot);
    QAudioRoom::connect(self, &QAudioRoom::rotationChanged, [self, slotFunc]() {
        slotFunc(self);
    });
}

void QAudioRoom_WallsChanged(QAudioRoom* self) {
    self->wallsChanged();
}

void QAudioRoom_Connect_WallsChanged(QAudioRoom* self, intptr_t slot) {
    void (*slotFunc)(QAudioRoom*) = reinterpret_cast<void (*)(QAudioRoom*)>(slot);
    QAudioRoom::connect(self, &QAudioRoom::wallsChanged, [self, slotFunc]() {
        slotFunc(self);
    });
}

void QAudioRoom_ReflectionGainChanged(QAudioRoom* self) {
    self->reflectionGainChanged();
}

void QAudioRoom_Connect_ReflectionGainChanged(QAudioRoom* self, intptr_t slot) {
    void (*slotFunc)(QAudioRoom*) = reinterpret_cast<void (*)(QAudioRoom*)>(slot);
    QAudioRoom::connect(self, &QAudioRoom::reflectionGainChanged, [self, slotFunc]() {
        slotFunc(self);
    });
}

void QAudioRoom_ReverbGainChanged(QAudioRoom* self) {
    self->reverbGainChanged();
}

void QAudioRoom_Connect_ReverbGainChanged(QAudioRoom* self, intptr_t slot) {
    void (*slotFunc)(QAudioRoom*) = reinterpret_cast<void (*)(QAudioRoom*)>(slot);
    QAudioRoom::connect(self, &QAudioRoom::reverbGainChanged, [self, slotFunc]() {
        slotFunc(self);
    });
}

void QAudioRoom_ReverbTimeChanged(QAudioRoom* self) {
    self->reverbTimeChanged();
}

void QAudioRoom_Connect_ReverbTimeChanged(QAudioRoom* self, intptr_t slot) {
    void (*slotFunc)(QAudioRoom*) = reinterpret_cast<void (*)(QAudioRoom*)>(slot);
    QAudioRoom::connect(self, &QAudioRoom::reverbTimeChanged, [self, slotFunc]() {
        slotFunc(self);
    });
}

void QAudioRoom_ReverbBrightnessChanged(QAudioRoom* self) {
    self->reverbBrightnessChanged();
}

void QAudioRoom_Connect_ReverbBrightnessChanged(QAudioRoom* self, intptr_t slot) {
    void (*slotFunc)(QAudioRoom*) = reinterpret_cast<void (*)(QAudioRoom*)>(slot);
    QAudioRoom::connect(self, &QAudioRoom::reverbBrightnessChanged, [self, slotFunc]() {
        slotFunc(self);
    });
}

libqt_string QAudioRoom_Tr2(const char* s, const char* c) {
    QString _ret = QAudioRoom::tr(s, c);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc((_str.len + 1) * sizeof(char)));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string QAudioRoom_Tr3(const char* s, const char* c, int n) {
    QString _ret = QAudioRoom::tr(s, c, static_cast<int>(n));
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc((_str.len + 1) * sizeof(char)));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

// Derived class handler implementation
bool QAudioRoom_Event(QAudioRoom* self, QEvent* event) {
    auto* vqaudioroom = dynamic_cast<VirtualQAudioRoom*>(self);
    if (vqaudioroom && vqaudioroom->isVirtualQAudioRoom) {
        return vqaudioroom->event(event);
    } else {
        return self->QAudioRoom::event(event);
    }
}

// Base class handler implementation
bool QAudioRoom_QBaseEvent(QAudioRoom* self, QEvent* event) {
    auto* vqaudioroom = dynamic_cast<VirtualQAudioRoom*>(self);
    if (vqaudioroom && vqaudioroom->isVirtualQAudioRoom) {
        vqaudioroom->setQAudioRoom_Event_IsBase(true);
        return vqaudioroom->event(event);
    } else {
        return self->QAudioRoom::event(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QAudioRoom_OnEvent(QAudioRoom* self, intptr_t slot) {
    auto* vqaudioroom = dynamic_cast<VirtualQAudioRoom*>(self);
    if (vqaudioroom && vqaudioroom->isVirtualQAudioRoom) {
        vqaudioroom->setQAudioRoom_Event_Callback(reinterpret_cast<VirtualQAudioRoom::QAudioRoom_Event_Callback>(slot));
    }
}

// Derived class handler implementation
bool QAudioRoom_EventFilter(QAudioRoom* self, QObject* watched, QEvent* event) {
    auto* vqaudioroom = dynamic_cast<VirtualQAudioRoom*>(self);
    if (vqaudioroom && vqaudioroom->isVirtualQAudioRoom) {
        return vqaudioroom->eventFilter(watched, event);
    } else {
        return self->QAudioRoom::eventFilter(watched, event);
    }
}

// Base class handler implementation
bool QAudioRoom_QBaseEventFilter(QAudioRoom* self, QObject* watched, QEvent* event) {
    auto* vqaudioroom = dynamic_cast<VirtualQAudioRoom*>(self);
    if (vqaudioroom && vqaudioroom->isVirtualQAudioRoom) {
        vqaudioroom->setQAudioRoom_EventFilter_IsBase(true);
        return vqaudioroom->eventFilter(watched, event);
    } else {
        return self->QAudioRoom::eventFilter(watched, event);
    }
}

// Auxiliary method to allow providing re-implementation
void QAudioRoom_OnEventFilter(QAudioRoom* self, intptr_t slot) {
    auto* vqaudioroom = dynamic_cast<VirtualQAudioRoom*>(self);
    if (vqaudioroom && vqaudioroom->isVirtualQAudioRoom) {
        vqaudioroom->setQAudioRoom_EventFilter_Callback(reinterpret_cast<VirtualQAudioRoom::QAudioRoom_EventFilter_Callback>(slot));
    }
}

// Derived class handler implementation
void QAudioRoom_TimerEvent(QAudioRoom* self, QTimerEvent* event) {
    auto* vqaudioroom = dynamic_cast<VirtualQAudioRoom*>(self);
    if (vqaudioroom && vqaudioroom->isVirtualQAudioRoom) {
        vqaudioroom->timerEvent(event);
    } else {
        ((VirtualQAudioRoom*)self)->timerEvent(event);
    }
}

// Base class handler implementation
void QAudioRoom_QBaseTimerEvent(QAudioRoom* self, QTimerEvent* event) {
    auto* vqaudioroom = dynamic_cast<VirtualQAudioRoom*>(self);
    if (vqaudioroom && vqaudioroom->isVirtualQAudioRoom) {
        vqaudioroom->setQAudioRoom_TimerEvent_IsBase(true);
        vqaudioroom->timerEvent(event);
    } else {
        ((VirtualQAudioRoom*)self)->timerEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QAudioRoom_OnTimerEvent(QAudioRoom* self, intptr_t slot) {
    auto* vqaudioroom = dynamic_cast<VirtualQAudioRoom*>(self);
    if (vqaudioroom && vqaudioroom->isVirtualQAudioRoom) {
        vqaudioroom->setQAudioRoom_TimerEvent_Callback(reinterpret_cast<VirtualQAudioRoom::QAudioRoom_TimerEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QAudioRoom_ChildEvent(QAudioRoom* self, QChildEvent* event) {
    auto* vqaudioroom = dynamic_cast<VirtualQAudioRoom*>(self);
    if (vqaudioroom && vqaudioroom->isVirtualQAudioRoom) {
        vqaudioroom->childEvent(event);
    } else {
        ((VirtualQAudioRoom*)self)->childEvent(event);
    }
}

// Base class handler implementation
void QAudioRoom_QBaseChildEvent(QAudioRoom* self, QChildEvent* event) {
    auto* vqaudioroom = dynamic_cast<VirtualQAudioRoom*>(self);
    if (vqaudioroom && vqaudioroom->isVirtualQAudioRoom) {
        vqaudioroom->setQAudioRoom_ChildEvent_IsBase(true);
        vqaudioroom->childEvent(event);
    } else {
        ((VirtualQAudioRoom*)self)->childEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QAudioRoom_OnChildEvent(QAudioRoom* self, intptr_t slot) {
    auto* vqaudioroom = dynamic_cast<VirtualQAudioRoom*>(self);
    if (vqaudioroom && vqaudioroom->isVirtualQAudioRoom) {
        vqaudioroom->setQAudioRoom_ChildEvent_Callback(reinterpret_cast<VirtualQAudioRoom::QAudioRoom_ChildEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QAudioRoom_CustomEvent(QAudioRoom* self, QEvent* event) {
    auto* vqaudioroom = dynamic_cast<VirtualQAudioRoom*>(self);
    if (vqaudioroom && vqaudioroom->isVirtualQAudioRoom) {
        vqaudioroom->customEvent(event);
    } else {
        ((VirtualQAudioRoom*)self)->customEvent(event);
    }
}

// Base class handler implementation
void QAudioRoom_QBaseCustomEvent(QAudioRoom* self, QEvent* event) {
    auto* vqaudioroom = dynamic_cast<VirtualQAudioRoom*>(self);
    if (vqaudioroom && vqaudioroom->isVirtualQAudioRoom) {
        vqaudioroom->setQAudioRoom_CustomEvent_IsBase(true);
        vqaudioroom->customEvent(event);
    } else {
        ((VirtualQAudioRoom*)self)->customEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QAudioRoom_OnCustomEvent(QAudioRoom* self, intptr_t slot) {
    auto* vqaudioroom = dynamic_cast<VirtualQAudioRoom*>(self);
    if (vqaudioroom && vqaudioroom->isVirtualQAudioRoom) {
        vqaudioroom->setQAudioRoom_CustomEvent_Callback(reinterpret_cast<VirtualQAudioRoom::QAudioRoom_CustomEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QAudioRoom_ConnectNotify(QAudioRoom* self, const QMetaMethod* signal) {
    auto* vqaudioroom = dynamic_cast<VirtualQAudioRoom*>(self);
    if (vqaudioroom && vqaudioroom->isVirtualQAudioRoom) {
        vqaudioroom->connectNotify(*signal);
    } else {
        ((VirtualQAudioRoom*)self)->connectNotify(*signal);
    }
}

// Base class handler implementation
void QAudioRoom_QBaseConnectNotify(QAudioRoom* self, const QMetaMethod* signal) {
    auto* vqaudioroom = dynamic_cast<VirtualQAudioRoom*>(self);
    if (vqaudioroom && vqaudioroom->isVirtualQAudioRoom) {
        vqaudioroom->setQAudioRoom_ConnectNotify_IsBase(true);
        vqaudioroom->connectNotify(*signal);
    } else {
        ((VirtualQAudioRoom*)self)->connectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QAudioRoom_OnConnectNotify(QAudioRoom* self, intptr_t slot) {
    auto* vqaudioroom = dynamic_cast<VirtualQAudioRoom*>(self);
    if (vqaudioroom && vqaudioroom->isVirtualQAudioRoom) {
        vqaudioroom->setQAudioRoom_ConnectNotify_Callback(reinterpret_cast<VirtualQAudioRoom::QAudioRoom_ConnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
void QAudioRoom_DisconnectNotify(QAudioRoom* self, const QMetaMethod* signal) {
    auto* vqaudioroom = dynamic_cast<VirtualQAudioRoom*>(self);
    if (vqaudioroom && vqaudioroom->isVirtualQAudioRoom) {
        vqaudioroom->disconnectNotify(*signal);
    } else {
        ((VirtualQAudioRoom*)self)->disconnectNotify(*signal);
    }
}

// Base class handler implementation
void QAudioRoom_QBaseDisconnectNotify(QAudioRoom* self, const QMetaMethod* signal) {
    auto* vqaudioroom = dynamic_cast<VirtualQAudioRoom*>(self);
    if (vqaudioroom && vqaudioroom->isVirtualQAudioRoom) {
        vqaudioroom->setQAudioRoom_DisconnectNotify_IsBase(true);
        vqaudioroom->disconnectNotify(*signal);
    } else {
        ((VirtualQAudioRoom*)self)->disconnectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QAudioRoom_OnDisconnectNotify(QAudioRoom* self, intptr_t slot) {
    auto* vqaudioroom = dynamic_cast<VirtualQAudioRoom*>(self);
    if (vqaudioroom && vqaudioroom->isVirtualQAudioRoom) {
        vqaudioroom->setQAudioRoom_DisconnectNotify_Callback(reinterpret_cast<VirtualQAudioRoom::QAudioRoom_DisconnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
QObject* QAudioRoom_Sender(const QAudioRoom* self) {
    auto* vqaudioroom = const_cast<VirtualQAudioRoom*>(dynamic_cast<const VirtualQAudioRoom*>(self));
    if (vqaudioroom && vqaudioroom->isVirtualQAudioRoom) {
        return vqaudioroom->sender();
    } else {
        return ((VirtualQAudioRoom*)self)->sender();
    }
}

// Base class handler implementation
QObject* QAudioRoom_QBaseSender(const QAudioRoom* self) {
    auto* vqaudioroom = const_cast<VirtualQAudioRoom*>(dynamic_cast<const VirtualQAudioRoom*>(self));
    if (vqaudioroom && vqaudioroom->isVirtualQAudioRoom) {
        vqaudioroom->setQAudioRoom_Sender_IsBase(true);
        return vqaudioroom->sender();
    } else {
        return ((VirtualQAudioRoom*)self)->sender();
    }
}

// Auxiliary method to allow providing re-implementation
void QAudioRoom_OnSender(const QAudioRoom* self, intptr_t slot) {
    auto* vqaudioroom = const_cast<VirtualQAudioRoom*>(dynamic_cast<const VirtualQAudioRoom*>(self));
    if (vqaudioroom && vqaudioroom->isVirtualQAudioRoom) {
        vqaudioroom->setQAudioRoom_Sender_Callback(reinterpret_cast<VirtualQAudioRoom::QAudioRoom_Sender_Callback>(slot));
    }
}

// Derived class handler implementation
int QAudioRoom_SenderSignalIndex(const QAudioRoom* self) {
    auto* vqaudioroom = const_cast<VirtualQAudioRoom*>(dynamic_cast<const VirtualQAudioRoom*>(self));
    if (vqaudioroom && vqaudioroom->isVirtualQAudioRoom) {
        return vqaudioroom->senderSignalIndex();
    } else {
        return ((VirtualQAudioRoom*)self)->senderSignalIndex();
    }
}

// Base class handler implementation
int QAudioRoom_QBaseSenderSignalIndex(const QAudioRoom* self) {
    auto* vqaudioroom = const_cast<VirtualQAudioRoom*>(dynamic_cast<const VirtualQAudioRoom*>(self));
    if (vqaudioroom && vqaudioroom->isVirtualQAudioRoom) {
        vqaudioroom->setQAudioRoom_SenderSignalIndex_IsBase(true);
        return vqaudioroom->senderSignalIndex();
    } else {
        return ((VirtualQAudioRoom*)self)->senderSignalIndex();
    }
}

// Auxiliary method to allow providing re-implementation
void QAudioRoom_OnSenderSignalIndex(const QAudioRoom* self, intptr_t slot) {
    auto* vqaudioroom = const_cast<VirtualQAudioRoom*>(dynamic_cast<const VirtualQAudioRoom*>(self));
    if (vqaudioroom && vqaudioroom->isVirtualQAudioRoom) {
        vqaudioroom->setQAudioRoom_SenderSignalIndex_Callback(reinterpret_cast<VirtualQAudioRoom::QAudioRoom_SenderSignalIndex_Callback>(slot));
    }
}

// Derived class handler implementation
int QAudioRoom_Receivers(const QAudioRoom* self, const char* signal) {
    auto* vqaudioroom = const_cast<VirtualQAudioRoom*>(dynamic_cast<const VirtualQAudioRoom*>(self));
    if (vqaudioroom && vqaudioroom->isVirtualQAudioRoom) {
        return vqaudioroom->receivers(signal);
    } else {
        return ((VirtualQAudioRoom*)self)->receivers(signal);
    }
}

// Base class handler implementation
int QAudioRoom_QBaseReceivers(const QAudioRoom* self, const char* signal) {
    auto* vqaudioroom = const_cast<VirtualQAudioRoom*>(dynamic_cast<const VirtualQAudioRoom*>(self));
    if (vqaudioroom && vqaudioroom->isVirtualQAudioRoom) {
        vqaudioroom->setQAudioRoom_Receivers_IsBase(true);
        return vqaudioroom->receivers(signal);
    } else {
        return ((VirtualQAudioRoom*)self)->receivers(signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QAudioRoom_OnReceivers(const QAudioRoom* self, intptr_t slot) {
    auto* vqaudioroom = const_cast<VirtualQAudioRoom*>(dynamic_cast<const VirtualQAudioRoom*>(self));
    if (vqaudioroom && vqaudioroom->isVirtualQAudioRoom) {
        vqaudioroom->setQAudioRoom_Receivers_Callback(reinterpret_cast<VirtualQAudioRoom::QAudioRoom_Receivers_Callback>(slot));
    }
}

// Derived class handler implementation
bool QAudioRoom_IsSignalConnected(const QAudioRoom* self, const QMetaMethod* signal) {
    auto* vqaudioroom = const_cast<VirtualQAudioRoom*>(dynamic_cast<const VirtualQAudioRoom*>(self));
    if (vqaudioroom && vqaudioroom->isVirtualQAudioRoom) {
        return vqaudioroom->isSignalConnected(*signal);
    } else {
        return ((VirtualQAudioRoom*)self)->isSignalConnected(*signal);
    }
}

// Base class handler implementation
bool QAudioRoom_QBaseIsSignalConnected(const QAudioRoom* self, const QMetaMethod* signal) {
    auto* vqaudioroom = const_cast<VirtualQAudioRoom*>(dynamic_cast<const VirtualQAudioRoom*>(self));
    if (vqaudioroom && vqaudioroom->isVirtualQAudioRoom) {
        vqaudioroom->setQAudioRoom_IsSignalConnected_IsBase(true);
        return vqaudioroom->isSignalConnected(*signal);
    } else {
        return ((VirtualQAudioRoom*)self)->isSignalConnected(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QAudioRoom_OnIsSignalConnected(const QAudioRoom* self, intptr_t slot) {
    auto* vqaudioroom = const_cast<VirtualQAudioRoom*>(dynamic_cast<const VirtualQAudioRoom*>(self));
    if (vqaudioroom && vqaudioroom->isVirtualQAudioRoom) {
        vqaudioroom->setQAudioRoom_IsSignalConnected_Callback(reinterpret_cast<VirtualQAudioRoom::QAudioRoom_IsSignalConnected_Callback>(slot));
    }
}

void QAudioRoom_Delete(QAudioRoom* self) {
    delete self;
}
