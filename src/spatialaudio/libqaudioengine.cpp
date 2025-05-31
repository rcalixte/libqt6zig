#include <QAudioDevice>
#include <QAudioEngine>
#include <QChildEvent>
#include <QEvent>
#include <QMetaMethod>
#include <QMetaObject>
#include <QObject>
#include <QString>
#include <QByteArray>
#include <cstring>
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
    auto* vqaudioengine = dynamic_cast<VirtualQAudioEngine*>(self);
    if (vqaudioengine && vqaudioengine->isVirtualQAudioEngine) {
        return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return ((VirtualQAudioEngine*)self)->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

// Subclass method to allow providing a virtual method re-implementation
void QAudioEngine_OnMetacall(QAudioEngine* self, intptr_t slot) {
    auto* vqaudioengine = dynamic_cast<VirtualQAudioEngine*>(self);
    if (vqaudioengine && vqaudioengine->isVirtualQAudioEngine) {
        vqaudioengine->setQAudioEngine_Metacall_Callback(reinterpret_cast<VirtualQAudioEngine::QAudioEngine_Metacall_Callback>(slot));
    }
}

// Virtual base class handler implementation
int QAudioEngine_QBaseMetacall(QAudioEngine* self, int param1, int param2, void** param3) {
    auto* vqaudioengine = dynamic_cast<VirtualQAudioEngine*>(self);
    if (vqaudioengine && vqaudioengine->isVirtualQAudioEngine) {
        vqaudioengine->setQAudioEngine_Metacall_IsBase(true);
        return vqaudioengine->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return ((VirtualQAudioEngine*)self)->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

libqt_string QAudioEngine_Tr(const char* s) {
    QString _ret = QAudioEngine::tr(s);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<char*>(malloc((_str.len + 1) * sizeof(char)));
    memcpy(_str.data, _b.data(), _str.len);
    _str.data[_str.len] = '\0';
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
    QAudioEngine::connect(self, &QAudioEngine::outputModeChanged, [self, slotFunc]() {
        slotFunc(self);
    });
}

void QAudioEngine_OutputDeviceChanged(QAudioEngine* self) {
    self->outputDeviceChanged();
}

void QAudioEngine_Connect_OutputDeviceChanged(QAudioEngine* self, intptr_t slot) {
    void (*slotFunc)(QAudioEngine*) = reinterpret_cast<void (*)(QAudioEngine*)>(slot);
    QAudioEngine::connect(self, &QAudioEngine::outputDeviceChanged, [self, slotFunc]() {
        slotFunc(self);
    });
}

void QAudioEngine_MasterVolumeChanged(QAudioEngine* self) {
    self->masterVolumeChanged();
}

void QAudioEngine_Connect_MasterVolumeChanged(QAudioEngine* self, intptr_t slot) {
    void (*slotFunc)(QAudioEngine*) = reinterpret_cast<void (*)(QAudioEngine*)>(slot);
    QAudioEngine::connect(self, &QAudioEngine::masterVolumeChanged, [self, slotFunc]() {
        slotFunc(self);
    });
}

void QAudioEngine_PausedChanged(QAudioEngine* self) {
    self->pausedChanged();
}

void QAudioEngine_Connect_PausedChanged(QAudioEngine* self, intptr_t slot) {
    void (*slotFunc)(QAudioEngine*) = reinterpret_cast<void (*)(QAudioEngine*)>(slot);
    QAudioEngine::connect(self, &QAudioEngine::pausedChanged, [self, slotFunc]() {
        slotFunc(self);
    });
}

void QAudioEngine_DistanceScaleChanged(QAudioEngine* self) {
    self->distanceScaleChanged();
}

void QAudioEngine_Connect_DistanceScaleChanged(QAudioEngine* self, intptr_t slot) {
    void (*slotFunc)(QAudioEngine*) = reinterpret_cast<void (*)(QAudioEngine*)>(slot);
    QAudioEngine::connect(self, &QAudioEngine::distanceScaleChanged, [self, slotFunc]() {
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
    QString _ret = QAudioEngine::tr(s, c);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<char*>(malloc((_str.len + 1) * sizeof(char)));
    memcpy(_str.data, _b.data(), _str.len);
    _str.data[_str.len] = '\0';
    return _str;
}

libqt_string QAudioEngine_Tr3(const char* s, const char* c, int n) {
    QString _ret = QAudioEngine::tr(s, c, static_cast<int>(n));
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
bool QAudioEngine_Event(QAudioEngine* self, QEvent* event) {
    auto* vqaudioengine = dynamic_cast<VirtualQAudioEngine*>(self);
    if (vqaudioengine && vqaudioengine->isVirtualQAudioEngine) {
        return vqaudioengine->event(event);
    } else {
        return self->QAudioEngine::event(event);
    }
}

// Base class handler implementation
bool QAudioEngine_QBaseEvent(QAudioEngine* self, QEvent* event) {
    auto* vqaudioengine = dynamic_cast<VirtualQAudioEngine*>(self);
    if (vqaudioengine && vqaudioengine->isVirtualQAudioEngine) {
        vqaudioengine->setQAudioEngine_Event_IsBase(true);
        return vqaudioengine->event(event);
    } else {
        return self->QAudioEngine::event(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QAudioEngine_OnEvent(QAudioEngine* self, intptr_t slot) {
    auto* vqaudioengine = dynamic_cast<VirtualQAudioEngine*>(self);
    if (vqaudioengine && vqaudioengine->isVirtualQAudioEngine) {
        vqaudioengine->setQAudioEngine_Event_Callback(reinterpret_cast<VirtualQAudioEngine::QAudioEngine_Event_Callback>(slot));
    }
}

// Derived class handler implementation
bool QAudioEngine_EventFilter(QAudioEngine* self, QObject* watched, QEvent* event) {
    auto* vqaudioengine = dynamic_cast<VirtualQAudioEngine*>(self);
    if (vqaudioengine && vqaudioengine->isVirtualQAudioEngine) {
        return vqaudioengine->eventFilter(watched, event);
    } else {
        return self->QAudioEngine::eventFilter(watched, event);
    }
}

// Base class handler implementation
bool QAudioEngine_QBaseEventFilter(QAudioEngine* self, QObject* watched, QEvent* event) {
    auto* vqaudioengine = dynamic_cast<VirtualQAudioEngine*>(self);
    if (vqaudioengine && vqaudioengine->isVirtualQAudioEngine) {
        vqaudioengine->setQAudioEngine_EventFilter_IsBase(true);
        return vqaudioengine->eventFilter(watched, event);
    } else {
        return self->QAudioEngine::eventFilter(watched, event);
    }
}

// Auxiliary method to allow providing re-implementation
void QAudioEngine_OnEventFilter(QAudioEngine* self, intptr_t slot) {
    auto* vqaudioengine = dynamic_cast<VirtualQAudioEngine*>(self);
    if (vqaudioengine && vqaudioengine->isVirtualQAudioEngine) {
        vqaudioengine->setQAudioEngine_EventFilter_Callback(reinterpret_cast<VirtualQAudioEngine::QAudioEngine_EventFilter_Callback>(slot));
    }
}

// Derived class handler implementation
void QAudioEngine_TimerEvent(QAudioEngine* self, QTimerEvent* event) {
    auto* vqaudioengine = dynamic_cast<VirtualQAudioEngine*>(self);
    if (vqaudioengine && vqaudioengine->isVirtualQAudioEngine) {
        vqaudioengine->timerEvent(event);
    } else {
        ((VirtualQAudioEngine*)self)->timerEvent(event);
    }
}

// Base class handler implementation
void QAudioEngine_QBaseTimerEvent(QAudioEngine* self, QTimerEvent* event) {
    auto* vqaudioengine = dynamic_cast<VirtualQAudioEngine*>(self);
    if (vqaudioengine && vqaudioengine->isVirtualQAudioEngine) {
        vqaudioengine->setQAudioEngine_TimerEvent_IsBase(true);
        vqaudioengine->timerEvent(event);
    } else {
        ((VirtualQAudioEngine*)self)->timerEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QAudioEngine_OnTimerEvent(QAudioEngine* self, intptr_t slot) {
    auto* vqaudioengine = dynamic_cast<VirtualQAudioEngine*>(self);
    if (vqaudioengine && vqaudioengine->isVirtualQAudioEngine) {
        vqaudioengine->setQAudioEngine_TimerEvent_Callback(reinterpret_cast<VirtualQAudioEngine::QAudioEngine_TimerEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QAudioEngine_ChildEvent(QAudioEngine* self, QChildEvent* event) {
    auto* vqaudioengine = dynamic_cast<VirtualQAudioEngine*>(self);
    if (vqaudioengine && vqaudioengine->isVirtualQAudioEngine) {
        vqaudioengine->childEvent(event);
    } else {
        ((VirtualQAudioEngine*)self)->childEvent(event);
    }
}

// Base class handler implementation
void QAudioEngine_QBaseChildEvent(QAudioEngine* self, QChildEvent* event) {
    auto* vqaudioengine = dynamic_cast<VirtualQAudioEngine*>(self);
    if (vqaudioengine && vqaudioengine->isVirtualQAudioEngine) {
        vqaudioengine->setQAudioEngine_ChildEvent_IsBase(true);
        vqaudioengine->childEvent(event);
    } else {
        ((VirtualQAudioEngine*)self)->childEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QAudioEngine_OnChildEvent(QAudioEngine* self, intptr_t slot) {
    auto* vqaudioengine = dynamic_cast<VirtualQAudioEngine*>(self);
    if (vqaudioengine && vqaudioengine->isVirtualQAudioEngine) {
        vqaudioengine->setQAudioEngine_ChildEvent_Callback(reinterpret_cast<VirtualQAudioEngine::QAudioEngine_ChildEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QAudioEngine_CustomEvent(QAudioEngine* self, QEvent* event) {
    auto* vqaudioengine = dynamic_cast<VirtualQAudioEngine*>(self);
    if (vqaudioengine && vqaudioengine->isVirtualQAudioEngine) {
        vqaudioengine->customEvent(event);
    } else {
        ((VirtualQAudioEngine*)self)->customEvent(event);
    }
}

// Base class handler implementation
void QAudioEngine_QBaseCustomEvent(QAudioEngine* self, QEvent* event) {
    auto* vqaudioengine = dynamic_cast<VirtualQAudioEngine*>(self);
    if (vqaudioengine && vqaudioengine->isVirtualQAudioEngine) {
        vqaudioengine->setQAudioEngine_CustomEvent_IsBase(true);
        vqaudioengine->customEvent(event);
    } else {
        ((VirtualQAudioEngine*)self)->customEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QAudioEngine_OnCustomEvent(QAudioEngine* self, intptr_t slot) {
    auto* vqaudioengine = dynamic_cast<VirtualQAudioEngine*>(self);
    if (vqaudioengine && vqaudioengine->isVirtualQAudioEngine) {
        vqaudioengine->setQAudioEngine_CustomEvent_Callback(reinterpret_cast<VirtualQAudioEngine::QAudioEngine_CustomEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QAudioEngine_ConnectNotify(QAudioEngine* self, const QMetaMethod* signal) {
    auto* vqaudioengine = dynamic_cast<VirtualQAudioEngine*>(self);
    if (vqaudioengine && vqaudioengine->isVirtualQAudioEngine) {
        vqaudioengine->connectNotify(*signal);
    } else {
        ((VirtualQAudioEngine*)self)->connectNotify(*signal);
    }
}

// Base class handler implementation
void QAudioEngine_QBaseConnectNotify(QAudioEngine* self, const QMetaMethod* signal) {
    auto* vqaudioengine = dynamic_cast<VirtualQAudioEngine*>(self);
    if (vqaudioengine && vqaudioengine->isVirtualQAudioEngine) {
        vqaudioengine->setQAudioEngine_ConnectNotify_IsBase(true);
        vqaudioengine->connectNotify(*signal);
    } else {
        ((VirtualQAudioEngine*)self)->connectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QAudioEngine_OnConnectNotify(QAudioEngine* self, intptr_t slot) {
    auto* vqaudioengine = dynamic_cast<VirtualQAudioEngine*>(self);
    if (vqaudioengine && vqaudioengine->isVirtualQAudioEngine) {
        vqaudioengine->setQAudioEngine_ConnectNotify_Callback(reinterpret_cast<VirtualQAudioEngine::QAudioEngine_ConnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
void QAudioEngine_DisconnectNotify(QAudioEngine* self, const QMetaMethod* signal) {
    auto* vqaudioengine = dynamic_cast<VirtualQAudioEngine*>(self);
    if (vqaudioengine && vqaudioengine->isVirtualQAudioEngine) {
        vqaudioengine->disconnectNotify(*signal);
    } else {
        ((VirtualQAudioEngine*)self)->disconnectNotify(*signal);
    }
}

// Base class handler implementation
void QAudioEngine_QBaseDisconnectNotify(QAudioEngine* self, const QMetaMethod* signal) {
    auto* vqaudioengine = dynamic_cast<VirtualQAudioEngine*>(self);
    if (vqaudioengine && vqaudioengine->isVirtualQAudioEngine) {
        vqaudioengine->setQAudioEngine_DisconnectNotify_IsBase(true);
        vqaudioengine->disconnectNotify(*signal);
    } else {
        ((VirtualQAudioEngine*)self)->disconnectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QAudioEngine_OnDisconnectNotify(QAudioEngine* self, intptr_t slot) {
    auto* vqaudioengine = dynamic_cast<VirtualQAudioEngine*>(self);
    if (vqaudioengine && vqaudioengine->isVirtualQAudioEngine) {
        vqaudioengine->setQAudioEngine_DisconnectNotify_Callback(reinterpret_cast<VirtualQAudioEngine::QAudioEngine_DisconnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
QObject* QAudioEngine_Sender(const QAudioEngine* self) {
    auto* vqaudioengine = const_cast<VirtualQAudioEngine*>(dynamic_cast<const VirtualQAudioEngine*>(self));
    if (vqaudioengine && vqaudioengine->isVirtualQAudioEngine) {
        return vqaudioengine->sender();
    } else {
        return ((VirtualQAudioEngine*)self)->sender();
    }
}

// Base class handler implementation
QObject* QAudioEngine_QBaseSender(const QAudioEngine* self) {
    auto* vqaudioengine = const_cast<VirtualQAudioEngine*>(dynamic_cast<const VirtualQAudioEngine*>(self));
    if (vqaudioengine && vqaudioengine->isVirtualQAudioEngine) {
        vqaudioengine->setQAudioEngine_Sender_IsBase(true);
        return vqaudioengine->sender();
    } else {
        return ((VirtualQAudioEngine*)self)->sender();
    }
}

// Auxiliary method to allow providing re-implementation
void QAudioEngine_OnSender(const QAudioEngine* self, intptr_t slot) {
    auto* vqaudioengine = const_cast<VirtualQAudioEngine*>(dynamic_cast<const VirtualQAudioEngine*>(self));
    if (vqaudioengine && vqaudioengine->isVirtualQAudioEngine) {
        vqaudioengine->setQAudioEngine_Sender_Callback(reinterpret_cast<VirtualQAudioEngine::QAudioEngine_Sender_Callback>(slot));
    }
}

// Derived class handler implementation
int QAudioEngine_SenderSignalIndex(const QAudioEngine* self) {
    auto* vqaudioengine = const_cast<VirtualQAudioEngine*>(dynamic_cast<const VirtualQAudioEngine*>(self));
    if (vqaudioengine && vqaudioengine->isVirtualQAudioEngine) {
        return vqaudioengine->senderSignalIndex();
    } else {
        return ((VirtualQAudioEngine*)self)->senderSignalIndex();
    }
}

// Base class handler implementation
int QAudioEngine_QBaseSenderSignalIndex(const QAudioEngine* self) {
    auto* vqaudioengine = const_cast<VirtualQAudioEngine*>(dynamic_cast<const VirtualQAudioEngine*>(self));
    if (vqaudioengine && vqaudioengine->isVirtualQAudioEngine) {
        vqaudioengine->setQAudioEngine_SenderSignalIndex_IsBase(true);
        return vqaudioengine->senderSignalIndex();
    } else {
        return ((VirtualQAudioEngine*)self)->senderSignalIndex();
    }
}

// Auxiliary method to allow providing re-implementation
void QAudioEngine_OnSenderSignalIndex(const QAudioEngine* self, intptr_t slot) {
    auto* vqaudioengine = const_cast<VirtualQAudioEngine*>(dynamic_cast<const VirtualQAudioEngine*>(self));
    if (vqaudioengine && vqaudioengine->isVirtualQAudioEngine) {
        vqaudioengine->setQAudioEngine_SenderSignalIndex_Callback(reinterpret_cast<VirtualQAudioEngine::QAudioEngine_SenderSignalIndex_Callback>(slot));
    }
}

// Derived class handler implementation
int QAudioEngine_Receivers(const QAudioEngine* self, const char* signal) {
    auto* vqaudioengine = const_cast<VirtualQAudioEngine*>(dynamic_cast<const VirtualQAudioEngine*>(self));
    if (vqaudioengine && vqaudioengine->isVirtualQAudioEngine) {
        return vqaudioengine->receivers(signal);
    } else {
        return ((VirtualQAudioEngine*)self)->receivers(signal);
    }
}

// Base class handler implementation
int QAudioEngine_QBaseReceivers(const QAudioEngine* self, const char* signal) {
    auto* vqaudioengine = const_cast<VirtualQAudioEngine*>(dynamic_cast<const VirtualQAudioEngine*>(self));
    if (vqaudioengine && vqaudioengine->isVirtualQAudioEngine) {
        vqaudioengine->setQAudioEngine_Receivers_IsBase(true);
        return vqaudioengine->receivers(signal);
    } else {
        return ((VirtualQAudioEngine*)self)->receivers(signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QAudioEngine_OnReceivers(const QAudioEngine* self, intptr_t slot) {
    auto* vqaudioengine = const_cast<VirtualQAudioEngine*>(dynamic_cast<const VirtualQAudioEngine*>(self));
    if (vqaudioengine && vqaudioengine->isVirtualQAudioEngine) {
        vqaudioengine->setQAudioEngine_Receivers_Callback(reinterpret_cast<VirtualQAudioEngine::QAudioEngine_Receivers_Callback>(slot));
    }
}

// Derived class handler implementation
bool QAudioEngine_IsSignalConnected(const QAudioEngine* self, const QMetaMethod* signal) {
    auto* vqaudioengine = const_cast<VirtualQAudioEngine*>(dynamic_cast<const VirtualQAudioEngine*>(self));
    if (vqaudioengine && vqaudioengine->isVirtualQAudioEngine) {
        return vqaudioengine->isSignalConnected(*signal);
    } else {
        return ((VirtualQAudioEngine*)self)->isSignalConnected(*signal);
    }
}

// Base class handler implementation
bool QAudioEngine_QBaseIsSignalConnected(const QAudioEngine* self, const QMetaMethod* signal) {
    auto* vqaudioengine = const_cast<VirtualQAudioEngine*>(dynamic_cast<const VirtualQAudioEngine*>(self));
    if (vqaudioengine && vqaudioengine->isVirtualQAudioEngine) {
        vqaudioengine->setQAudioEngine_IsSignalConnected_IsBase(true);
        return vqaudioengine->isSignalConnected(*signal);
    } else {
        return ((VirtualQAudioEngine*)self)->isSignalConnected(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QAudioEngine_OnIsSignalConnected(const QAudioEngine* self, intptr_t slot) {
    auto* vqaudioengine = const_cast<VirtualQAudioEngine*>(dynamic_cast<const VirtualQAudioEngine*>(self));
    if (vqaudioengine && vqaudioengine->isVirtualQAudioEngine) {
        vqaudioengine->setQAudioEngine_IsSignalConnected_Callback(reinterpret_cast<VirtualQAudioEngine::QAudioEngine_IsSignalConnected_Callback>(slot));
    }
}

void QAudioEngine_Delete(QAudioEngine* self) {
    delete self;
}
