#include <QAudioDevice>
#include <QAudioEngine>
#include <QChildEvent>
#include <QEvent>
#include <QMetaMethod>
#include <QMetaObject>
#include <QObject>
#include <QString>
#include <QTimerEvent>
#include <qaudioengine.h>
#include "libqaudioengine.h"
#include "libqaudioengine.hxx"

QAudioEngine* QAudioEngine_new() {
    return new VirtualQAudioEngine();
}

QAudioEngine* QAudioEngine_new2(QObject* parent) {
    return new VirtualQAudioEngine(parent);
}

QAudioEngine* QAudioEngine_new3(int sampleRate) {
    return new VirtualQAudioEngine(static_cast<int>(sampleRate));
}

QAudioEngine* QAudioEngine_new4(int sampleRate, QObject* parent) {
    return new VirtualQAudioEngine(static_cast<int>(sampleRate), parent);
}

QMetaObject* QAudioEngine_MetaObject(const QAudioEngine* self) {
    return (QMetaObject*)self->metaObject();
}

void* QAudioEngine_Metacast(QAudioEngine* self, const char* param1) {
    return self->qt_metacast(param1);
}

int QAudioEngine_Metacall(QAudioEngine* self, int param1, int param2, void** param3) {
    return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

libqt_string QAudioEngine_Tr(const char* s) {
    auto _ret = QAudioEngine::tr(s);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

void QAudioEngine_SetOutputMode(QAudioEngine* self, int mode) {
    self->setOutputMode(static_cast<QAudioEngine::OutputMode>(mode));
}

int QAudioEngine_OutputMode(const QAudioEngine* self) {
    return static_cast<int>(self->outputMode());
}

int QAudioEngine_SampleRate(const QAudioEngine* self) {
    return self->sampleRate();
}

void QAudioEngine_SetOutputDevice(QAudioEngine* self, const QAudioDevice* device) {
    self->setOutputDevice(*device);
}

QAudioDevice* QAudioEngine_OutputDevice(const QAudioEngine* self) {
    return new QAudioDevice(self->outputDevice());
}

void QAudioEngine_SetMasterVolume(QAudioEngine* self, float volume) {
    self->setMasterVolume(static_cast<float>(volume));
}

float QAudioEngine_MasterVolume(const QAudioEngine* self) {
    return self->masterVolume();
}

void QAudioEngine_SetPaused(QAudioEngine* self, bool paused) {
    self->setPaused(paused);
}

bool QAudioEngine_Paused(const QAudioEngine* self) {
    return self->paused();
}

void QAudioEngine_SetRoomEffectsEnabled(QAudioEngine* self, bool enabled) {
    self->setRoomEffectsEnabled(enabled);
}

bool QAudioEngine_RoomEffectsEnabled(const QAudioEngine* self) {
    return self->roomEffectsEnabled();
}

void QAudioEngine_SetDistanceScale(QAudioEngine* self, float scale) {
    self->setDistanceScale(static_cast<float>(scale));
}

float QAudioEngine_DistanceScale(const QAudioEngine* self) {
    return self->distanceScale();
}

void QAudioEngine_OutputModeChanged(QAudioEngine* self) {
    self->outputModeChanged();
}

void QAudioEngine_Connect_OutputModeChanged(QAudioEngine* self, intptr_t slot) {
    void (*slotFunc)(QAudioEngine*) = reinterpret_cast<void (*)(QAudioEngine*)>(slot);
    QAudioEngine::connect(self,
                          static_cast<void (QAudioEngine::*)()>(&QAudioEngine::outputModeChanged),
                          [self, slotFunc]() {
                              slotFunc(self);
                          });
}

void QAudioEngine_OutputDeviceChanged(QAudioEngine* self) {
    self->outputDeviceChanged();
}

void QAudioEngine_Connect_OutputDeviceChanged(QAudioEngine* self, intptr_t slot) {
    void (*slotFunc)(QAudioEngine*) = reinterpret_cast<void (*)(QAudioEngine*)>(slot);
    QAudioEngine::connect(self,
                          static_cast<void (QAudioEngine::*)()>(&QAudioEngine::outputDeviceChanged),
                          [self, slotFunc]() {
                              slotFunc(self);
                          });
}

void QAudioEngine_MasterVolumeChanged(QAudioEngine* self) {
    self->masterVolumeChanged();
}

void QAudioEngine_Connect_MasterVolumeChanged(QAudioEngine* self, intptr_t slot) {
    void (*slotFunc)(QAudioEngine*) = reinterpret_cast<void (*)(QAudioEngine*)>(slot);
    QAudioEngine::connect(self,
                          static_cast<void (QAudioEngine::*)()>(&QAudioEngine::masterVolumeChanged),
                          [self, slotFunc]() {
                              slotFunc(self);
                          });
}

void QAudioEngine_PausedChanged(QAudioEngine* self) {
    self->pausedChanged();
}

void QAudioEngine_Connect_PausedChanged(QAudioEngine* self, intptr_t slot) {
    void (*slotFunc)(QAudioEngine*) = reinterpret_cast<void (*)(QAudioEngine*)>(slot);
    QAudioEngine::connect(self,
                          static_cast<void (QAudioEngine::*)()>(&QAudioEngine::pausedChanged),
                          [self, slotFunc]() {
                              slotFunc(self);
                          });
}

void QAudioEngine_DistanceScaleChanged(QAudioEngine* self) {
    self->distanceScaleChanged();
}

void QAudioEngine_Connect_DistanceScaleChanged(QAudioEngine* self, intptr_t slot) {
    void (*slotFunc)(QAudioEngine*) = reinterpret_cast<void (*)(QAudioEngine*)>(slot);
    QAudioEngine::connect(self,
                          static_cast<void (QAudioEngine::*)()>(&QAudioEngine::distanceScaleChanged),
                          [self, slotFunc]() {
                              slotFunc(self);
                          });
}

void QAudioEngine_Start(QAudioEngine* self) {
    self->start();
}

void QAudioEngine_Stop(QAudioEngine* self) {
    self->stop();
}

void QAudioEngine_Pause(QAudioEngine* self) {
    self->pause();
}

void QAudioEngine_Resume(QAudioEngine* self) {
    self->resume();
}

libqt_string QAudioEngine_Tr2(const char* s, const char* c) {
    auto _ret = QAudioEngine::tr(s, c);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string QAudioEngine_Tr3(const char* s, const char* c, int n) {
    auto _ret = QAudioEngine::tr(s, c, static_cast<int>(n));
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
QMetaObject* QAudioEngine_SuperMetaObject(const QAudioEngine* self) {
    return (QMetaObject*)self->QAudioEngine::metaObject();
}

// Auxiliary method to allow providing re-implementation
void QAudioEngine_OnMetaObject(QAudioEngine* self, intptr_t slot) {
    if (auto* vqaudioengine = const_cast<VirtualQAudioEngine*>(dynamic_cast<const VirtualQAudioEngine*>(self)))
        vqaudioengine->qaudioengine_metaobject_callback = reinterpret_cast<VirtualQAudioEngine::QAudioEngine_MetaObject_Callback>(slot);
}

// Base class handler implementation
void* QAudioEngine_SuperMetacast(QAudioEngine* self, const char* param1) {
    return self->QAudioEngine::qt_metacast(param1);
}

// Auxiliary method to allow providing re-implementation
void QAudioEngine_OnMetacast(QAudioEngine* self, intptr_t slot) {
    if (auto* vqaudioengine = dynamic_cast<VirtualQAudioEngine*>(self))
        vqaudioengine->qaudioengine_metacast_callback = reinterpret_cast<VirtualQAudioEngine::QAudioEngine_Metacast_Callback>(slot);
}

// Base class handler implementation
int QAudioEngine_SuperMetacall(QAudioEngine* self, int param1, int param2, void** param3) {
    return self->QAudioEngine::qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

// Auxiliary method to allow providing re-implementation
void QAudioEngine_OnMetacall(QAudioEngine* self, intptr_t slot) {
    if (auto* vqaudioengine = dynamic_cast<VirtualQAudioEngine*>(self))
        vqaudioengine->qaudioengine_metacall_callback = reinterpret_cast<VirtualQAudioEngine::QAudioEngine_Metacall_Callback>(slot);
}

// Derived class handler implementation
bool QAudioEngine_Event(QAudioEngine* self, QEvent* event) {
    return self->event(event);
}

// Base class handler implementation
bool QAudioEngine_SuperEvent(QAudioEngine* self, QEvent* event) {
    return self->QAudioEngine::event(event);
}

// Auxiliary method to allow providing re-implementation
void QAudioEngine_OnEvent(QAudioEngine* self, intptr_t slot) {
    if (auto* vqaudioengine = dynamic_cast<VirtualQAudioEngine*>(self))
        vqaudioengine->qaudioengine_event_callback = reinterpret_cast<VirtualQAudioEngine::QAudioEngine_Event_Callback>(slot);
}

// Derived class handler implementation
bool QAudioEngine_EventFilter(QAudioEngine* self, QObject* watched, QEvent* event) {
    return self->eventFilter(watched, event);
}

// Base class handler implementation
bool QAudioEngine_SuperEventFilter(QAudioEngine* self, QObject* watched, QEvent* event) {
    return self->QAudioEngine::eventFilter(watched, event);
}

// Auxiliary method to allow providing re-implementation
void QAudioEngine_OnEventFilter(QAudioEngine* self, intptr_t slot) {
    if (auto* vqaudioengine = dynamic_cast<VirtualQAudioEngine*>(self))
        vqaudioengine->qaudioengine_eventfilter_callback = reinterpret_cast<VirtualQAudioEngine::QAudioEngine_EventFilter_Callback>(slot);
}

// Derived class handler implementation
void QAudioEngine_TimerEvent(QAudioEngine* self, QTimerEvent* event) {
    auto* vqaudioengine = dynamic_cast<VirtualQAudioEngine*>(self);
    if (vqaudioengine) {
        vqaudioengine->timerEvent(event);
    } else {
        qFatal("Error: Protected virtual method QAudioEngine::timerEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QAudioEngine_SuperTimerEvent(QAudioEngine* self, QTimerEvent* event) {
    if (auto* vqaudioengine = dynamic_cast<VirtualQAudioEngine*>(self)) {
        vqaudioengine->QAudioEngine::timerEvent(event);
    } else
        qFatal("Error: Protected virtual method QAudioEngine::timerEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QAudioEngine_OnTimerEvent(QAudioEngine* self, intptr_t slot) {
    if (auto* vqaudioengine = dynamic_cast<VirtualQAudioEngine*>(self))
        vqaudioengine->qaudioengine_timerevent_callback = reinterpret_cast<VirtualQAudioEngine::QAudioEngine_TimerEvent_Callback>(slot);
}

// Derived class handler implementation
void QAudioEngine_ChildEvent(QAudioEngine* self, QChildEvent* event) {
    auto* vqaudioengine = dynamic_cast<VirtualQAudioEngine*>(self);
    if (vqaudioengine) {
        vqaudioengine->childEvent(event);
    } else {
        qFatal("Error: Protected virtual method QAudioEngine::childEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QAudioEngine_SuperChildEvent(QAudioEngine* self, QChildEvent* event) {
    if (auto* vqaudioengine = dynamic_cast<VirtualQAudioEngine*>(self)) {
        vqaudioengine->QAudioEngine::childEvent(event);
    } else
        qFatal("Error: Protected virtual method QAudioEngine::childEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QAudioEngine_OnChildEvent(QAudioEngine* self, intptr_t slot) {
    if (auto* vqaudioengine = dynamic_cast<VirtualQAudioEngine*>(self))
        vqaudioengine->qaudioengine_childevent_callback = reinterpret_cast<VirtualQAudioEngine::QAudioEngine_ChildEvent_Callback>(slot);
}

// Derived class handler implementation
void QAudioEngine_CustomEvent(QAudioEngine* self, QEvent* event) {
    auto* vqaudioengine = dynamic_cast<VirtualQAudioEngine*>(self);
    if (vqaudioengine) {
        vqaudioengine->customEvent(event);
    } else {
        qFatal("Error: Protected virtual method QAudioEngine::customEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QAudioEngine_SuperCustomEvent(QAudioEngine* self, QEvent* event) {
    if (auto* vqaudioengine = dynamic_cast<VirtualQAudioEngine*>(self)) {
        vqaudioengine->QAudioEngine::customEvent(event);
    } else
        qFatal("Error: Protected virtual method QAudioEngine::customEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QAudioEngine_OnCustomEvent(QAudioEngine* self, intptr_t slot) {
    if (auto* vqaudioengine = dynamic_cast<VirtualQAudioEngine*>(self))
        vqaudioengine->qaudioengine_customevent_callback = reinterpret_cast<VirtualQAudioEngine::QAudioEngine_CustomEvent_Callback>(slot);
}

// Derived class handler implementation
void QAudioEngine_ConnectNotify(QAudioEngine* self, const QMetaMethod* signal) {
    auto* vqaudioengine = dynamic_cast<VirtualQAudioEngine*>(self);
    if (vqaudioengine) {
        vqaudioengine->connectNotify(*signal);
    } else {
        qFatal("Error: Protected virtual method QAudioEngine::connectNotify called without a directly constructed type");
    }
}

// Base class handler implementation
void QAudioEngine_SuperConnectNotify(QAudioEngine* self, const QMetaMethod* signal) {
    if (auto* vqaudioengine = dynamic_cast<VirtualQAudioEngine*>(self)) {
        vqaudioengine->QAudioEngine::connectNotify(*signal);
    } else
        qFatal("Error: Protected virtual method QAudioEngine::connectNotify called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QAudioEngine_OnConnectNotify(QAudioEngine* self, intptr_t slot) {
    if (auto* vqaudioengine = dynamic_cast<VirtualQAudioEngine*>(self))
        vqaudioengine->qaudioengine_connectnotify_callback = reinterpret_cast<VirtualQAudioEngine::QAudioEngine_ConnectNotify_Callback>(slot);
}

// Derived class handler implementation
void QAudioEngine_DisconnectNotify(QAudioEngine* self, const QMetaMethod* signal) {
    auto* vqaudioengine = dynamic_cast<VirtualQAudioEngine*>(self);
    if (vqaudioengine) {
        vqaudioengine->disconnectNotify(*signal);
    } else {
        qFatal("Error: Protected virtual method QAudioEngine::disconnectNotify called without a directly constructed type");
    }
}

// Base class handler implementation
void QAudioEngine_SuperDisconnectNotify(QAudioEngine* self, const QMetaMethod* signal) {
    if (auto* vqaudioengine = dynamic_cast<VirtualQAudioEngine*>(self)) {
        vqaudioengine->QAudioEngine::disconnectNotify(*signal);
    } else
        qFatal("Error: Protected virtual method QAudioEngine::disconnectNotify called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QAudioEngine_OnDisconnectNotify(QAudioEngine* self, intptr_t slot) {
    if (auto* vqaudioengine = dynamic_cast<VirtualQAudioEngine*>(self))
        vqaudioengine->qaudioengine_disconnectnotify_callback = reinterpret_cast<VirtualQAudioEngine::QAudioEngine_DisconnectNotify_Callback>(slot);
}

// Derived class protected handler implementation
QObject* QAudioEngine_Sender(const QAudioEngine* self) {
    if (auto* vqaudioengine = const_cast<VirtualQAudioEngine*>(dynamic_cast<const VirtualQAudioEngine*>(self))) {
        return vqaudioengine->VirtualQAudioEngine::sender();
    } else
        qFatal("Error: Protected method QAudioEngine::sender called without a directly constructed type");
}

// Derived class protected handler implementation
int QAudioEngine_SenderSignalIndex(const QAudioEngine* self) {
    if (auto* vqaudioengine = const_cast<VirtualQAudioEngine*>(dynamic_cast<const VirtualQAudioEngine*>(self))) {
        return vqaudioengine->VirtualQAudioEngine::senderSignalIndex();
    } else
        qFatal("Error: Protected method QAudioEngine::senderSignalIndex called without a directly constructed type");
}

// Derived class protected handler implementation
int QAudioEngine_Receivers(const QAudioEngine* self, const char* signal) {
    if (auto* vqaudioengine = const_cast<VirtualQAudioEngine*>(dynamic_cast<const VirtualQAudioEngine*>(self))) {
        return vqaudioengine->VirtualQAudioEngine::receivers(signal);
    } else
        qFatal("Error: Protected method QAudioEngine::receivers called without a directly constructed type");
}

// Derived class protected handler implementation
bool QAudioEngine_IsSignalConnected(const QAudioEngine* self, const QMetaMethod* signal) {
    if (auto* vqaudioengine = const_cast<VirtualQAudioEngine*>(dynamic_cast<const VirtualQAudioEngine*>(self))) {
        return vqaudioengine->VirtualQAudioEngine::isSignalConnected(*signal);
    } else
        qFatal("Error: Protected method QAudioEngine::isSignalConnected called without a directly constructed type");
}

void QAudioEngine_Delete(QAudioEngine* self) {
    delete self;
}
