#include <QAudioEngine>
#include <QAudioRoom>
#include <QChildEvent>
#include <QEvent>
#include <QMetaMethod>
#include <QMetaObject>
#include <QObject>
#include <QQuaternion>
#include <QString>
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
    return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

libqt_string QAudioRoom_Tr(const char* s) {
    auto _ret = QAudioRoom::tr(s);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
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
    QAudioRoom::connect(self,
                        static_cast<void (QAudioRoom::*)()>(&QAudioRoom::positionChanged),
                        [self, slotFunc]() {
                            slotFunc(self);
                        });
}

void QAudioRoom_DimensionsChanged(QAudioRoom* self) {
    self->dimensionsChanged();
}

void QAudioRoom_Connect_DimensionsChanged(QAudioRoom* self, intptr_t slot) {
    void (*slotFunc)(QAudioRoom*) = reinterpret_cast<void (*)(QAudioRoom*)>(slot);
    QAudioRoom::connect(self,
                        static_cast<void (QAudioRoom::*)()>(&QAudioRoom::dimensionsChanged),
                        [self, slotFunc]() {
                            slotFunc(self);
                        });
}

void QAudioRoom_RotationChanged(QAudioRoom* self) {
    self->rotationChanged();
}

void QAudioRoom_Connect_RotationChanged(QAudioRoom* self, intptr_t slot) {
    void (*slotFunc)(QAudioRoom*) = reinterpret_cast<void (*)(QAudioRoom*)>(slot);
    QAudioRoom::connect(self,
                        static_cast<void (QAudioRoom::*)()>(&QAudioRoom::rotationChanged),
                        [self, slotFunc]() {
                            slotFunc(self);
                        });
}

void QAudioRoom_WallsChanged(QAudioRoom* self) {
    self->wallsChanged();
}

void QAudioRoom_Connect_WallsChanged(QAudioRoom* self, intptr_t slot) {
    void (*slotFunc)(QAudioRoom*) = reinterpret_cast<void (*)(QAudioRoom*)>(slot);
    QAudioRoom::connect(self,
                        static_cast<void (QAudioRoom::*)()>(&QAudioRoom::wallsChanged),
                        [self, slotFunc]() {
                            slotFunc(self);
                        });
}

void QAudioRoom_ReflectionGainChanged(QAudioRoom* self) {
    self->reflectionGainChanged();
}

void QAudioRoom_Connect_ReflectionGainChanged(QAudioRoom* self, intptr_t slot) {
    void (*slotFunc)(QAudioRoom*) = reinterpret_cast<void (*)(QAudioRoom*)>(slot);
    QAudioRoom::connect(self,
                        static_cast<void (QAudioRoom::*)()>(&QAudioRoom::reflectionGainChanged),
                        [self, slotFunc]() {
                            slotFunc(self);
                        });
}

void QAudioRoom_ReverbGainChanged(QAudioRoom* self) {
    self->reverbGainChanged();
}

void QAudioRoom_Connect_ReverbGainChanged(QAudioRoom* self, intptr_t slot) {
    void (*slotFunc)(QAudioRoom*) = reinterpret_cast<void (*)(QAudioRoom*)>(slot);
    QAudioRoom::connect(self,
                        static_cast<void (QAudioRoom::*)()>(&QAudioRoom::reverbGainChanged),
                        [self, slotFunc]() {
                            slotFunc(self);
                        });
}

void QAudioRoom_ReverbTimeChanged(QAudioRoom* self) {
    self->reverbTimeChanged();
}

void QAudioRoom_Connect_ReverbTimeChanged(QAudioRoom* self, intptr_t slot) {
    void (*slotFunc)(QAudioRoom*) = reinterpret_cast<void (*)(QAudioRoom*)>(slot);
    QAudioRoom::connect(self,
                        static_cast<void (QAudioRoom::*)()>(&QAudioRoom::reverbTimeChanged),
                        [self, slotFunc]() {
                            slotFunc(self);
                        });
}

void QAudioRoom_ReverbBrightnessChanged(QAudioRoom* self) {
    self->reverbBrightnessChanged();
}

void QAudioRoom_Connect_ReverbBrightnessChanged(QAudioRoom* self, intptr_t slot) {
    void (*slotFunc)(QAudioRoom*) = reinterpret_cast<void (*)(QAudioRoom*)>(slot);
    QAudioRoom::connect(self,
                        static_cast<void (QAudioRoom::*)()>(&QAudioRoom::reverbBrightnessChanged),
                        [self, slotFunc]() {
                            slotFunc(self);
                        });
}

libqt_string QAudioRoom_Tr2(const char* s, const char* c) {
    auto _ret = QAudioRoom::tr(s, c);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string QAudioRoom_Tr3(const char* s, const char* c, int n) {
    auto _ret = QAudioRoom::tr(s, c, static_cast<int>(n));
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
QMetaObject* QAudioRoom_SuperMetaObject(const QAudioRoom* self) {
    return (QMetaObject*)self->QAudioRoom::metaObject();
}

// Auxiliary method to allow providing re-implementation
void QAudioRoom_OnMetaObject(QAudioRoom* self, intptr_t slot) {
    if (auto* vqaudioroom = const_cast<VirtualQAudioRoom*>(dynamic_cast<const VirtualQAudioRoom*>(self)))
        vqaudioroom->qaudioroom_metaobject_callback = reinterpret_cast<VirtualQAudioRoom::QAudioRoom_MetaObject_Callback>(slot);
}

// Base class handler implementation
void* QAudioRoom_SuperMetacast(QAudioRoom* self, const char* param1) {
    return self->QAudioRoom::qt_metacast(param1);
}

// Auxiliary method to allow providing re-implementation
void QAudioRoom_OnMetacast(QAudioRoom* self, intptr_t slot) {
    if (auto* vqaudioroom = dynamic_cast<VirtualQAudioRoom*>(self))
        vqaudioroom->qaudioroom_metacast_callback = reinterpret_cast<VirtualQAudioRoom::QAudioRoom_Metacast_Callback>(slot);
}

// Base class handler implementation
int QAudioRoom_SuperMetacall(QAudioRoom* self, int param1, int param2, void** param3) {
    return self->QAudioRoom::qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

// Auxiliary method to allow providing re-implementation
void QAudioRoom_OnMetacall(QAudioRoom* self, intptr_t slot) {
    if (auto* vqaudioroom = dynamic_cast<VirtualQAudioRoom*>(self))
        vqaudioroom->qaudioroom_metacall_callback = reinterpret_cast<VirtualQAudioRoom::QAudioRoom_Metacall_Callback>(slot);
}

// Derived class handler implementation
bool QAudioRoom_Event(QAudioRoom* self, QEvent* event) {
    return self->event(event);
}

// Base class handler implementation
bool QAudioRoom_SuperEvent(QAudioRoom* self, QEvent* event) {
    return self->QAudioRoom::event(event);
}

// Auxiliary method to allow providing re-implementation
void QAudioRoom_OnEvent(QAudioRoom* self, intptr_t slot) {
    if (auto* vqaudioroom = dynamic_cast<VirtualQAudioRoom*>(self))
        vqaudioroom->qaudioroom_event_callback = reinterpret_cast<VirtualQAudioRoom::QAudioRoom_Event_Callback>(slot);
}

// Derived class handler implementation
bool QAudioRoom_EventFilter(QAudioRoom* self, QObject* watched, QEvent* event) {
    return self->eventFilter(watched, event);
}

// Base class handler implementation
bool QAudioRoom_SuperEventFilter(QAudioRoom* self, QObject* watched, QEvent* event) {
    return self->QAudioRoom::eventFilter(watched, event);
}

// Auxiliary method to allow providing re-implementation
void QAudioRoom_OnEventFilter(QAudioRoom* self, intptr_t slot) {
    if (auto* vqaudioroom = dynamic_cast<VirtualQAudioRoom*>(self))
        vqaudioroom->qaudioroom_eventfilter_callback = reinterpret_cast<VirtualQAudioRoom::QAudioRoom_EventFilter_Callback>(slot);
}

// Derived class handler implementation
void QAudioRoom_TimerEvent(QAudioRoom* self, QTimerEvent* event) {
    auto* vqaudioroom = dynamic_cast<VirtualQAudioRoom*>(self);
    if (vqaudioroom) {
        vqaudioroom->timerEvent(event);
    } else {
        qFatal("Error: Protected virtual method QAudioRoom::timerEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QAudioRoom_SuperTimerEvent(QAudioRoom* self, QTimerEvent* event) {
    if (auto* vqaudioroom = dynamic_cast<VirtualQAudioRoom*>(self)) {
        vqaudioroom->QAudioRoom::timerEvent(event);
    } else
        qFatal("Error: Protected virtual method QAudioRoom::timerEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QAudioRoom_OnTimerEvent(QAudioRoom* self, intptr_t slot) {
    if (auto* vqaudioroom = dynamic_cast<VirtualQAudioRoom*>(self))
        vqaudioroom->qaudioroom_timerevent_callback = reinterpret_cast<VirtualQAudioRoom::QAudioRoom_TimerEvent_Callback>(slot);
}

// Derived class handler implementation
void QAudioRoom_ChildEvent(QAudioRoom* self, QChildEvent* event) {
    auto* vqaudioroom = dynamic_cast<VirtualQAudioRoom*>(self);
    if (vqaudioroom) {
        vqaudioroom->childEvent(event);
    } else {
        qFatal("Error: Protected virtual method QAudioRoom::childEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QAudioRoom_SuperChildEvent(QAudioRoom* self, QChildEvent* event) {
    if (auto* vqaudioroom = dynamic_cast<VirtualQAudioRoom*>(self)) {
        vqaudioroom->QAudioRoom::childEvent(event);
    } else
        qFatal("Error: Protected virtual method QAudioRoom::childEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QAudioRoom_OnChildEvent(QAudioRoom* self, intptr_t slot) {
    if (auto* vqaudioroom = dynamic_cast<VirtualQAudioRoom*>(self))
        vqaudioroom->qaudioroom_childevent_callback = reinterpret_cast<VirtualQAudioRoom::QAudioRoom_ChildEvent_Callback>(slot);
}

// Derived class handler implementation
void QAudioRoom_CustomEvent(QAudioRoom* self, QEvent* event) {
    auto* vqaudioroom = dynamic_cast<VirtualQAudioRoom*>(self);
    if (vqaudioroom) {
        vqaudioroom->customEvent(event);
    } else {
        qFatal("Error: Protected virtual method QAudioRoom::customEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QAudioRoom_SuperCustomEvent(QAudioRoom* self, QEvent* event) {
    if (auto* vqaudioroom = dynamic_cast<VirtualQAudioRoom*>(self)) {
        vqaudioroom->QAudioRoom::customEvent(event);
    } else
        qFatal("Error: Protected virtual method QAudioRoom::customEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QAudioRoom_OnCustomEvent(QAudioRoom* self, intptr_t slot) {
    if (auto* vqaudioroom = dynamic_cast<VirtualQAudioRoom*>(self))
        vqaudioroom->qaudioroom_customevent_callback = reinterpret_cast<VirtualQAudioRoom::QAudioRoom_CustomEvent_Callback>(slot);
}

// Derived class handler implementation
void QAudioRoom_ConnectNotify(QAudioRoom* self, const QMetaMethod* signal) {
    auto* vqaudioroom = dynamic_cast<VirtualQAudioRoom*>(self);
    if (vqaudioroom) {
        vqaudioroom->connectNotify(*signal);
    } else {
        qFatal("Error: Protected virtual method QAudioRoom::connectNotify called without a directly constructed type");
    }
}

// Base class handler implementation
void QAudioRoom_SuperConnectNotify(QAudioRoom* self, const QMetaMethod* signal) {
    if (auto* vqaudioroom = dynamic_cast<VirtualQAudioRoom*>(self)) {
        vqaudioroom->QAudioRoom::connectNotify(*signal);
    } else
        qFatal("Error: Protected virtual method QAudioRoom::connectNotify called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QAudioRoom_OnConnectNotify(QAudioRoom* self, intptr_t slot) {
    if (auto* vqaudioroom = dynamic_cast<VirtualQAudioRoom*>(self))
        vqaudioroom->qaudioroom_connectnotify_callback = reinterpret_cast<VirtualQAudioRoom::QAudioRoom_ConnectNotify_Callback>(slot);
}

// Derived class handler implementation
void QAudioRoom_DisconnectNotify(QAudioRoom* self, const QMetaMethod* signal) {
    auto* vqaudioroom = dynamic_cast<VirtualQAudioRoom*>(self);
    if (vqaudioroom) {
        vqaudioroom->disconnectNotify(*signal);
    } else {
        qFatal("Error: Protected virtual method QAudioRoom::disconnectNotify called without a directly constructed type");
    }
}

// Base class handler implementation
void QAudioRoom_SuperDisconnectNotify(QAudioRoom* self, const QMetaMethod* signal) {
    if (auto* vqaudioroom = dynamic_cast<VirtualQAudioRoom*>(self)) {
        vqaudioroom->QAudioRoom::disconnectNotify(*signal);
    } else
        qFatal("Error: Protected virtual method QAudioRoom::disconnectNotify called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QAudioRoom_OnDisconnectNotify(QAudioRoom* self, intptr_t slot) {
    if (auto* vqaudioroom = dynamic_cast<VirtualQAudioRoom*>(self))
        vqaudioroom->qaudioroom_disconnectnotify_callback = reinterpret_cast<VirtualQAudioRoom::QAudioRoom_DisconnectNotify_Callback>(slot);
}

// Derived class protected handler implementation
QObject* QAudioRoom_Sender(const QAudioRoom* self) {
    if (auto* vqaudioroom = const_cast<VirtualQAudioRoom*>(dynamic_cast<const VirtualQAudioRoom*>(self))) {
        return vqaudioroom->VirtualQAudioRoom::sender();
    } else
        qFatal("Error: Protected method QAudioRoom::sender called without a directly constructed type");
}

// Derived class protected handler implementation
int QAudioRoom_SenderSignalIndex(const QAudioRoom* self) {
    if (auto* vqaudioroom = const_cast<VirtualQAudioRoom*>(dynamic_cast<const VirtualQAudioRoom*>(self))) {
        return vqaudioroom->VirtualQAudioRoom::senderSignalIndex();
    } else
        qFatal("Error: Protected method QAudioRoom::senderSignalIndex called without a directly constructed type");
}

// Derived class protected handler implementation
int QAudioRoom_Receivers(const QAudioRoom* self, const char* signal) {
    if (auto* vqaudioroom = const_cast<VirtualQAudioRoom*>(dynamic_cast<const VirtualQAudioRoom*>(self))) {
        return vqaudioroom->VirtualQAudioRoom::receivers(signal);
    } else
        qFatal("Error: Protected method QAudioRoom::receivers called without a directly constructed type");
}

// Derived class protected handler implementation
bool QAudioRoom_IsSignalConnected(const QAudioRoom* self, const QMetaMethod* signal) {
    if (auto* vqaudioroom = const_cast<VirtualQAudioRoom*>(dynamic_cast<const VirtualQAudioRoom*>(self))) {
        return vqaudioroom->VirtualQAudioRoom::isSignalConnected(*signal);
    } else
        qFatal("Error: Protected method QAudioRoom::isSignalConnected called without a directly constructed type");
}

void QAudioRoom_Delete(QAudioRoom* self) {
    delete self;
}
