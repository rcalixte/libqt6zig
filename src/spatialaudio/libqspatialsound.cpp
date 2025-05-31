#include <QAudioEngine>
#include <QChildEvent>
#include <QEvent>
#include <QMetaMethod>
#include <QMetaObject>
#include <QObject>
#include <QQuaternion>
#include <QSpatialSound>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <QTimerEvent>
#include <QUrl>
#include <QVector3D>
#include <qspatialsound.h>
#include "libqspatialsound.h"
#include "libqspatialsound.hxx"

QSpatialSound* QSpatialSound_new(QAudioEngine* engine) {
    return new VirtualQSpatialSound(engine);
}

QMetaObject* QSpatialSound_MetaObject(const QSpatialSound* self) {
    return (QMetaObject*)self->metaObject();
}

void* QSpatialSound_Metacast(QSpatialSound* self, const char* param1) {
    return self->qt_metacast(param1);
}

int QSpatialSound_Metacall(QSpatialSound* self, int param1, int param2, void** param3) {
    auto* vqspatialsound = dynamic_cast<VirtualQSpatialSound*>(self);
    if (vqspatialsound && vqspatialsound->isVirtualQSpatialSound) {
        return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return ((VirtualQSpatialSound*)self)->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

// Subclass method to allow providing a virtual method re-implementation
void QSpatialSound_OnMetacall(QSpatialSound* self, intptr_t slot) {
    auto* vqspatialsound = dynamic_cast<VirtualQSpatialSound*>(self);
    if (vqspatialsound && vqspatialsound->isVirtualQSpatialSound) {
        vqspatialsound->setQSpatialSound_Metacall_Callback(reinterpret_cast<VirtualQSpatialSound::QSpatialSound_Metacall_Callback>(slot));
    }
}

// Virtual base class handler implementation
int QSpatialSound_QBaseMetacall(QSpatialSound* self, int param1, int param2, void** param3) {
    auto* vqspatialsound = dynamic_cast<VirtualQSpatialSound*>(self);
    if (vqspatialsound && vqspatialsound->isVirtualQSpatialSound) {
        vqspatialsound->setQSpatialSound_Metacall_IsBase(true);
        return vqspatialsound->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return ((VirtualQSpatialSound*)self)->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

libqt_string QSpatialSound_Tr(const char* s) {
    QString _ret = QSpatialSound::tr(s);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<char*>(malloc((_str.len + 1) * sizeof(char)));
    memcpy(_str.data, _b.data(), _str.len);
    _str.data[_str.len] = '\0';
    return _str;
}

void QSpatialSound_SetSource(QSpatialSound* self, const QUrl* url) {
    self->setSource(*url);
}

QUrl* QSpatialSound_Source(const QSpatialSound* self) {
    return new QUrl(self->source());
}

int QSpatialSound_Loops(const QSpatialSound* self) {
    return self->loops();
}

void QSpatialSound_SetLoops(QSpatialSound* self, int loops) {
    self->setLoops(static_cast<int>(loops));
}

bool QSpatialSound_AutoPlay(const QSpatialSound* self) {
    return self->autoPlay();
}

void QSpatialSound_SetAutoPlay(QSpatialSound* self, bool autoPlay) {
    self->setAutoPlay(autoPlay);
}

void QSpatialSound_SetPosition(QSpatialSound* self, QVector3D* pos) {
    self->setPosition(*pos);
}

QVector3D* QSpatialSound_Position(const QSpatialSound* self) {
    return new QVector3D(self->position());
}

void QSpatialSound_SetRotation(QSpatialSound* self, const QQuaternion* q) {
    self->setRotation(*q);
}

QQuaternion* QSpatialSound_Rotation(const QSpatialSound* self) {
    return new QQuaternion(self->rotation());
}

void QSpatialSound_SetVolume(QSpatialSound* self, float volume) {
    self->setVolume(static_cast<float>(volume));
}

float QSpatialSound_Volume(const QSpatialSound* self) {
    return self->volume();
}

void QSpatialSound_SetDistanceModel(QSpatialSound* self, int model) {
    self->setDistanceModel(static_cast<QSpatialSound::DistanceModel>(model));
}

int QSpatialSound_DistanceModel(const QSpatialSound* self) {
    return static_cast<int>(self->distanceModel());
}

void QSpatialSound_SetSize(QSpatialSound* self, float size) {
    self->setSize(static_cast<float>(size));
}

float QSpatialSound_Size(const QSpatialSound* self) {
    return self->size();
}

void QSpatialSound_SetDistanceCutoff(QSpatialSound* self, float cutoff) {
    self->setDistanceCutoff(static_cast<float>(cutoff));
}

float QSpatialSound_DistanceCutoff(const QSpatialSound* self) {
    return self->distanceCutoff();
}

void QSpatialSound_SetManualAttenuation(QSpatialSound* self, float attenuation) {
    self->setManualAttenuation(static_cast<float>(attenuation));
}

float QSpatialSound_ManualAttenuation(const QSpatialSound* self) {
    return self->manualAttenuation();
}

void QSpatialSound_SetOcclusionIntensity(QSpatialSound* self, float occlusion) {
    self->setOcclusionIntensity(static_cast<float>(occlusion));
}

float QSpatialSound_OcclusionIntensity(const QSpatialSound* self) {
    return self->occlusionIntensity();
}

void QSpatialSound_SetDirectivity(QSpatialSound* self, float alpha) {
    self->setDirectivity(static_cast<float>(alpha));
}

float QSpatialSound_Directivity(const QSpatialSound* self) {
    return self->directivity();
}

void QSpatialSound_SetDirectivityOrder(QSpatialSound* self, float alpha) {
    self->setDirectivityOrder(static_cast<float>(alpha));
}

float QSpatialSound_DirectivityOrder(const QSpatialSound* self) {
    return self->directivityOrder();
}

void QSpatialSound_SetNearFieldGain(QSpatialSound* self, float gain) {
    self->setNearFieldGain(static_cast<float>(gain));
}

float QSpatialSound_NearFieldGain(const QSpatialSound* self) {
    return self->nearFieldGain();
}

QAudioEngine* QSpatialSound_Engine(const QSpatialSound* self) {
    return self->engine();
}

void QSpatialSound_SourceChanged(QSpatialSound* self) {
    self->sourceChanged();
}

void QSpatialSound_Connect_SourceChanged(QSpatialSound* self, intptr_t slot) {
    void (*slotFunc)(QSpatialSound*) = reinterpret_cast<void (*)(QSpatialSound*)>(slot);
    QSpatialSound::connect(self, &QSpatialSound::sourceChanged, [self, slotFunc]() {
        slotFunc(self);
    });
}

void QSpatialSound_LoopsChanged(QSpatialSound* self) {
    self->loopsChanged();
}

void QSpatialSound_Connect_LoopsChanged(QSpatialSound* self, intptr_t slot) {
    void (*slotFunc)(QSpatialSound*) = reinterpret_cast<void (*)(QSpatialSound*)>(slot);
    QSpatialSound::connect(self, &QSpatialSound::loopsChanged, [self, slotFunc]() {
        slotFunc(self);
    });
}

void QSpatialSound_AutoPlayChanged(QSpatialSound* self) {
    self->autoPlayChanged();
}

void QSpatialSound_Connect_AutoPlayChanged(QSpatialSound* self, intptr_t slot) {
    void (*slotFunc)(QSpatialSound*) = reinterpret_cast<void (*)(QSpatialSound*)>(slot);
    QSpatialSound::connect(self, &QSpatialSound::autoPlayChanged, [self, slotFunc]() {
        slotFunc(self);
    });
}

void QSpatialSound_PositionChanged(QSpatialSound* self) {
    self->positionChanged();
}

void QSpatialSound_Connect_PositionChanged(QSpatialSound* self, intptr_t slot) {
    void (*slotFunc)(QSpatialSound*) = reinterpret_cast<void (*)(QSpatialSound*)>(slot);
    QSpatialSound::connect(self, &QSpatialSound::positionChanged, [self, slotFunc]() {
        slotFunc(self);
    });
}

void QSpatialSound_RotationChanged(QSpatialSound* self) {
    self->rotationChanged();
}

void QSpatialSound_Connect_RotationChanged(QSpatialSound* self, intptr_t slot) {
    void (*slotFunc)(QSpatialSound*) = reinterpret_cast<void (*)(QSpatialSound*)>(slot);
    QSpatialSound::connect(self, &QSpatialSound::rotationChanged, [self, slotFunc]() {
        slotFunc(self);
    });
}

void QSpatialSound_VolumeChanged(QSpatialSound* self) {
    self->volumeChanged();
}

void QSpatialSound_Connect_VolumeChanged(QSpatialSound* self, intptr_t slot) {
    void (*slotFunc)(QSpatialSound*) = reinterpret_cast<void (*)(QSpatialSound*)>(slot);
    QSpatialSound::connect(self, &QSpatialSound::volumeChanged, [self, slotFunc]() {
        slotFunc(self);
    });
}

void QSpatialSound_DistanceModelChanged(QSpatialSound* self) {
    self->distanceModelChanged();
}

void QSpatialSound_Connect_DistanceModelChanged(QSpatialSound* self, intptr_t slot) {
    void (*slotFunc)(QSpatialSound*) = reinterpret_cast<void (*)(QSpatialSound*)>(slot);
    QSpatialSound::connect(self, &QSpatialSound::distanceModelChanged, [self, slotFunc]() {
        slotFunc(self);
    });
}

void QSpatialSound_SizeChanged(QSpatialSound* self) {
    self->sizeChanged();
}

void QSpatialSound_Connect_SizeChanged(QSpatialSound* self, intptr_t slot) {
    void (*slotFunc)(QSpatialSound*) = reinterpret_cast<void (*)(QSpatialSound*)>(slot);
    QSpatialSound::connect(self, &QSpatialSound::sizeChanged, [self, slotFunc]() {
        slotFunc(self);
    });
}

void QSpatialSound_DistanceCutoffChanged(QSpatialSound* self) {
    self->distanceCutoffChanged();
}

void QSpatialSound_Connect_DistanceCutoffChanged(QSpatialSound* self, intptr_t slot) {
    void (*slotFunc)(QSpatialSound*) = reinterpret_cast<void (*)(QSpatialSound*)>(slot);
    QSpatialSound::connect(self, &QSpatialSound::distanceCutoffChanged, [self, slotFunc]() {
        slotFunc(self);
    });
}

void QSpatialSound_ManualAttenuationChanged(QSpatialSound* self) {
    self->manualAttenuationChanged();
}

void QSpatialSound_Connect_ManualAttenuationChanged(QSpatialSound* self, intptr_t slot) {
    void (*slotFunc)(QSpatialSound*) = reinterpret_cast<void (*)(QSpatialSound*)>(slot);
    QSpatialSound::connect(self, &QSpatialSound::manualAttenuationChanged, [self, slotFunc]() {
        slotFunc(self);
    });
}

void QSpatialSound_OcclusionIntensityChanged(QSpatialSound* self) {
    self->occlusionIntensityChanged();
}

void QSpatialSound_Connect_OcclusionIntensityChanged(QSpatialSound* self, intptr_t slot) {
    void (*slotFunc)(QSpatialSound*) = reinterpret_cast<void (*)(QSpatialSound*)>(slot);
    QSpatialSound::connect(self, &QSpatialSound::occlusionIntensityChanged, [self, slotFunc]() {
        slotFunc(self);
    });
}

void QSpatialSound_DirectivityChanged(QSpatialSound* self) {
    self->directivityChanged();
}

void QSpatialSound_Connect_DirectivityChanged(QSpatialSound* self, intptr_t slot) {
    void (*slotFunc)(QSpatialSound*) = reinterpret_cast<void (*)(QSpatialSound*)>(slot);
    QSpatialSound::connect(self, &QSpatialSound::directivityChanged, [self, slotFunc]() {
        slotFunc(self);
    });
}

void QSpatialSound_DirectivityOrderChanged(QSpatialSound* self) {
    self->directivityOrderChanged();
}

void QSpatialSound_Connect_DirectivityOrderChanged(QSpatialSound* self, intptr_t slot) {
    void (*slotFunc)(QSpatialSound*) = reinterpret_cast<void (*)(QSpatialSound*)>(slot);
    QSpatialSound::connect(self, &QSpatialSound::directivityOrderChanged, [self, slotFunc]() {
        slotFunc(self);
    });
}

void QSpatialSound_NearFieldGainChanged(QSpatialSound* self) {
    self->nearFieldGainChanged();
}

void QSpatialSound_Connect_NearFieldGainChanged(QSpatialSound* self, intptr_t slot) {
    void (*slotFunc)(QSpatialSound*) = reinterpret_cast<void (*)(QSpatialSound*)>(slot);
    QSpatialSound::connect(self, &QSpatialSound::nearFieldGainChanged, [self, slotFunc]() {
        slotFunc(self);
    });
}

void QSpatialSound_Play(QSpatialSound* self) {
    self->play();
}

void QSpatialSound_Pause(QSpatialSound* self) {
    self->pause();
}

void QSpatialSound_Stop(QSpatialSound* self) {
    self->stop();
}

libqt_string QSpatialSound_Tr2(const char* s, const char* c) {
    QString _ret = QSpatialSound::tr(s, c);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<char*>(malloc((_str.len + 1) * sizeof(char)));
    memcpy(_str.data, _b.data(), _str.len);
    _str.data[_str.len] = '\0';
    return _str;
}

libqt_string QSpatialSound_Tr3(const char* s, const char* c, int n) {
    QString _ret = QSpatialSound::tr(s, c, static_cast<int>(n));
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
bool QSpatialSound_Event(QSpatialSound* self, QEvent* event) {
    auto* vqspatialsound = dynamic_cast<VirtualQSpatialSound*>(self);
    if (vqspatialsound && vqspatialsound->isVirtualQSpatialSound) {
        return vqspatialsound->event(event);
    } else {
        return self->QSpatialSound::event(event);
    }
}

// Base class handler implementation
bool QSpatialSound_QBaseEvent(QSpatialSound* self, QEvent* event) {
    auto* vqspatialsound = dynamic_cast<VirtualQSpatialSound*>(self);
    if (vqspatialsound && vqspatialsound->isVirtualQSpatialSound) {
        vqspatialsound->setQSpatialSound_Event_IsBase(true);
        return vqspatialsound->event(event);
    } else {
        return self->QSpatialSound::event(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QSpatialSound_OnEvent(QSpatialSound* self, intptr_t slot) {
    auto* vqspatialsound = dynamic_cast<VirtualQSpatialSound*>(self);
    if (vqspatialsound && vqspatialsound->isVirtualQSpatialSound) {
        vqspatialsound->setQSpatialSound_Event_Callback(reinterpret_cast<VirtualQSpatialSound::QSpatialSound_Event_Callback>(slot));
    }
}

// Derived class handler implementation
bool QSpatialSound_EventFilter(QSpatialSound* self, QObject* watched, QEvent* event) {
    auto* vqspatialsound = dynamic_cast<VirtualQSpatialSound*>(self);
    if (vqspatialsound && vqspatialsound->isVirtualQSpatialSound) {
        return vqspatialsound->eventFilter(watched, event);
    } else {
        return self->QSpatialSound::eventFilter(watched, event);
    }
}

// Base class handler implementation
bool QSpatialSound_QBaseEventFilter(QSpatialSound* self, QObject* watched, QEvent* event) {
    auto* vqspatialsound = dynamic_cast<VirtualQSpatialSound*>(self);
    if (vqspatialsound && vqspatialsound->isVirtualQSpatialSound) {
        vqspatialsound->setQSpatialSound_EventFilter_IsBase(true);
        return vqspatialsound->eventFilter(watched, event);
    } else {
        return self->QSpatialSound::eventFilter(watched, event);
    }
}

// Auxiliary method to allow providing re-implementation
void QSpatialSound_OnEventFilter(QSpatialSound* self, intptr_t slot) {
    auto* vqspatialsound = dynamic_cast<VirtualQSpatialSound*>(self);
    if (vqspatialsound && vqspatialsound->isVirtualQSpatialSound) {
        vqspatialsound->setQSpatialSound_EventFilter_Callback(reinterpret_cast<VirtualQSpatialSound::QSpatialSound_EventFilter_Callback>(slot));
    }
}

// Derived class handler implementation
void QSpatialSound_TimerEvent(QSpatialSound* self, QTimerEvent* event) {
    auto* vqspatialsound = dynamic_cast<VirtualQSpatialSound*>(self);
    if (vqspatialsound && vqspatialsound->isVirtualQSpatialSound) {
        vqspatialsound->timerEvent(event);
    } else {
        ((VirtualQSpatialSound*)self)->timerEvent(event);
    }
}

// Base class handler implementation
void QSpatialSound_QBaseTimerEvent(QSpatialSound* self, QTimerEvent* event) {
    auto* vqspatialsound = dynamic_cast<VirtualQSpatialSound*>(self);
    if (vqspatialsound && vqspatialsound->isVirtualQSpatialSound) {
        vqspatialsound->setQSpatialSound_TimerEvent_IsBase(true);
        vqspatialsound->timerEvent(event);
    } else {
        ((VirtualQSpatialSound*)self)->timerEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QSpatialSound_OnTimerEvent(QSpatialSound* self, intptr_t slot) {
    auto* vqspatialsound = dynamic_cast<VirtualQSpatialSound*>(self);
    if (vqspatialsound && vqspatialsound->isVirtualQSpatialSound) {
        vqspatialsound->setQSpatialSound_TimerEvent_Callback(reinterpret_cast<VirtualQSpatialSound::QSpatialSound_TimerEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QSpatialSound_ChildEvent(QSpatialSound* self, QChildEvent* event) {
    auto* vqspatialsound = dynamic_cast<VirtualQSpatialSound*>(self);
    if (vqspatialsound && vqspatialsound->isVirtualQSpatialSound) {
        vqspatialsound->childEvent(event);
    } else {
        ((VirtualQSpatialSound*)self)->childEvent(event);
    }
}

// Base class handler implementation
void QSpatialSound_QBaseChildEvent(QSpatialSound* self, QChildEvent* event) {
    auto* vqspatialsound = dynamic_cast<VirtualQSpatialSound*>(self);
    if (vqspatialsound && vqspatialsound->isVirtualQSpatialSound) {
        vqspatialsound->setQSpatialSound_ChildEvent_IsBase(true);
        vqspatialsound->childEvent(event);
    } else {
        ((VirtualQSpatialSound*)self)->childEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QSpatialSound_OnChildEvent(QSpatialSound* self, intptr_t slot) {
    auto* vqspatialsound = dynamic_cast<VirtualQSpatialSound*>(self);
    if (vqspatialsound && vqspatialsound->isVirtualQSpatialSound) {
        vqspatialsound->setQSpatialSound_ChildEvent_Callback(reinterpret_cast<VirtualQSpatialSound::QSpatialSound_ChildEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QSpatialSound_CustomEvent(QSpatialSound* self, QEvent* event) {
    auto* vqspatialsound = dynamic_cast<VirtualQSpatialSound*>(self);
    if (vqspatialsound && vqspatialsound->isVirtualQSpatialSound) {
        vqspatialsound->customEvent(event);
    } else {
        ((VirtualQSpatialSound*)self)->customEvent(event);
    }
}

// Base class handler implementation
void QSpatialSound_QBaseCustomEvent(QSpatialSound* self, QEvent* event) {
    auto* vqspatialsound = dynamic_cast<VirtualQSpatialSound*>(self);
    if (vqspatialsound && vqspatialsound->isVirtualQSpatialSound) {
        vqspatialsound->setQSpatialSound_CustomEvent_IsBase(true);
        vqspatialsound->customEvent(event);
    } else {
        ((VirtualQSpatialSound*)self)->customEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QSpatialSound_OnCustomEvent(QSpatialSound* self, intptr_t slot) {
    auto* vqspatialsound = dynamic_cast<VirtualQSpatialSound*>(self);
    if (vqspatialsound && vqspatialsound->isVirtualQSpatialSound) {
        vqspatialsound->setQSpatialSound_CustomEvent_Callback(reinterpret_cast<VirtualQSpatialSound::QSpatialSound_CustomEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QSpatialSound_ConnectNotify(QSpatialSound* self, const QMetaMethod* signal) {
    auto* vqspatialsound = dynamic_cast<VirtualQSpatialSound*>(self);
    if (vqspatialsound && vqspatialsound->isVirtualQSpatialSound) {
        vqspatialsound->connectNotify(*signal);
    } else {
        ((VirtualQSpatialSound*)self)->connectNotify(*signal);
    }
}

// Base class handler implementation
void QSpatialSound_QBaseConnectNotify(QSpatialSound* self, const QMetaMethod* signal) {
    auto* vqspatialsound = dynamic_cast<VirtualQSpatialSound*>(self);
    if (vqspatialsound && vqspatialsound->isVirtualQSpatialSound) {
        vqspatialsound->setQSpatialSound_ConnectNotify_IsBase(true);
        vqspatialsound->connectNotify(*signal);
    } else {
        ((VirtualQSpatialSound*)self)->connectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QSpatialSound_OnConnectNotify(QSpatialSound* self, intptr_t slot) {
    auto* vqspatialsound = dynamic_cast<VirtualQSpatialSound*>(self);
    if (vqspatialsound && vqspatialsound->isVirtualQSpatialSound) {
        vqspatialsound->setQSpatialSound_ConnectNotify_Callback(reinterpret_cast<VirtualQSpatialSound::QSpatialSound_ConnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
void QSpatialSound_DisconnectNotify(QSpatialSound* self, const QMetaMethod* signal) {
    auto* vqspatialsound = dynamic_cast<VirtualQSpatialSound*>(self);
    if (vqspatialsound && vqspatialsound->isVirtualQSpatialSound) {
        vqspatialsound->disconnectNotify(*signal);
    } else {
        ((VirtualQSpatialSound*)self)->disconnectNotify(*signal);
    }
}

// Base class handler implementation
void QSpatialSound_QBaseDisconnectNotify(QSpatialSound* self, const QMetaMethod* signal) {
    auto* vqspatialsound = dynamic_cast<VirtualQSpatialSound*>(self);
    if (vqspatialsound && vqspatialsound->isVirtualQSpatialSound) {
        vqspatialsound->setQSpatialSound_DisconnectNotify_IsBase(true);
        vqspatialsound->disconnectNotify(*signal);
    } else {
        ((VirtualQSpatialSound*)self)->disconnectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QSpatialSound_OnDisconnectNotify(QSpatialSound* self, intptr_t slot) {
    auto* vqspatialsound = dynamic_cast<VirtualQSpatialSound*>(self);
    if (vqspatialsound && vqspatialsound->isVirtualQSpatialSound) {
        vqspatialsound->setQSpatialSound_DisconnectNotify_Callback(reinterpret_cast<VirtualQSpatialSound::QSpatialSound_DisconnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
QObject* QSpatialSound_Sender(const QSpatialSound* self) {
    auto* vqspatialsound = const_cast<VirtualQSpatialSound*>(dynamic_cast<const VirtualQSpatialSound*>(self));
    if (vqspatialsound && vqspatialsound->isVirtualQSpatialSound) {
        return vqspatialsound->sender();
    } else {
        return ((VirtualQSpatialSound*)self)->sender();
    }
}

// Base class handler implementation
QObject* QSpatialSound_QBaseSender(const QSpatialSound* self) {
    auto* vqspatialsound = const_cast<VirtualQSpatialSound*>(dynamic_cast<const VirtualQSpatialSound*>(self));
    if (vqspatialsound && vqspatialsound->isVirtualQSpatialSound) {
        vqspatialsound->setQSpatialSound_Sender_IsBase(true);
        return vqspatialsound->sender();
    } else {
        return ((VirtualQSpatialSound*)self)->sender();
    }
}

// Auxiliary method to allow providing re-implementation
void QSpatialSound_OnSender(const QSpatialSound* self, intptr_t slot) {
    auto* vqspatialsound = const_cast<VirtualQSpatialSound*>(dynamic_cast<const VirtualQSpatialSound*>(self));
    if (vqspatialsound && vqspatialsound->isVirtualQSpatialSound) {
        vqspatialsound->setQSpatialSound_Sender_Callback(reinterpret_cast<VirtualQSpatialSound::QSpatialSound_Sender_Callback>(slot));
    }
}

// Derived class handler implementation
int QSpatialSound_SenderSignalIndex(const QSpatialSound* self) {
    auto* vqspatialsound = const_cast<VirtualQSpatialSound*>(dynamic_cast<const VirtualQSpatialSound*>(self));
    if (vqspatialsound && vqspatialsound->isVirtualQSpatialSound) {
        return vqspatialsound->senderSignalIndex();
    } else {
        return ((VirtualQSpatialSound*)self)->senderSignalIndex();
    }
}

// Base class handler implementation
int QSpatialSound_QBaseSenderSignalIndex(const QSpatialSound* self) {
    auto* vqspatialsound = const_cast<VirtualQSpatialSound*>(dynamic_cast<const VirtualQSpatialSound*>(self));
    if (vqspatialsound && vqspatialsound->isVirtualQSpatialSound) {
        vqspatialsound->setQSpatialSound_SenderSignalIndex_IsBase(true);
        return vqspatialsound->senderSignalIndex();
    } else {
        return ((VirtualQSpatialSound*)self)->senderSignalIndex();
    }
}

// Auxiliary method to allow providing re-implementation
void QSpatialSound_OnSenderSignalIndex(const QSpatialSound* self, intptr_t slot) {
    auto* vqspatialsound = const_cast<VirtualQSpatialSound*>(dynamic_cast<const VirtualQSpatialSound*>(self));
    if (vqspatialsound && vqspatialsound->isVirtualQSpatialSound) {
        vqspatialsound->setQSpatialSound_SenderSignalIndex_Callback(reinterpret_cast<VirtualQSpatialSound::QSpatialSound_SenderSignalIndex_Callback>(slot));
    }
}

// Derived class handler implementation
int QSpatialSound_Receivers(const QSpatialSound* self, const char* signal) {
    auto* vqspatialsound = const_cast<VirtualQSpatialSound*>(dynamic_cast<const VirtualQSpatialSound*>(self));
    if (vqspatialsound && vqspatialsound->isVirtualQSpatialSound) {
        return vqspatialsound->receivers(signal);
    } else {
        return ((VirtualQSpatialSound*)self)->receivers(signal);
    }
}

// Base class handler implementation
int QSpatialSound_QBaseReceivers(const QSpatialSound* self, const char* signal) {
    auto* vqspatialsound = const_cast<VirtualQSpatialSound*>(dynamic_cast<const VirtualQSpatialSound*>(self));
    if (vqspatialsound && vqspatialsound->isVirtualQSpatialSound) {
        vqspatialsound->setQSpatialSound_Receivers_IsBase(true);
        return vqspatialsound->receivers(signal);
    } else {
        return ((VirtualQSpatialSound*)self)->receivers(signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QSpatialSound_OnReceivers(const QSpatialSound* self, intptr_t slot) {
    auto* vqspatialsound = const_cast<VirtualQSpatialSound*>(dynamic_cast<const VirtualQSpatialSound*>(self));
    if (vqspatialsound && vqspatialsound->isVirtualQSpatialSound) {
        vqspatialsound->setQSpatialSound_Receivers_Callback(reinterpret_cast<VirtualQSpatialSound::QSpatialSound_Receivers_Callback>(slot));
    }
}

// Derived class handler implementation
bool QSpatialSound_IsSignalConnected(const QSpatialSound* self, const QMetaMethod* signal) {
    auto* vqspatialsound = const_cast<VirtualQSpatialSound*>(dynamic_cast<const VirtualQSpatialSound*>(self));
    if (vqspatialsound && vqspatialsound->isVirtualQSpatialSound) {
        return vqspatialsound->isSignalConnected(*signal);
    } else {
        return ((VirtualQSpatialSound*)self)->isSignalConnected(*signal);
    }
}

// Base class handler implementation
bool QSpatialSound_QBaseIsSignalConnected(const QSpatialSound* self, const QMetaMethod* signal) {
    auto* vqspatialsound = const_cast<VirtualQSpatialSound*>(dynamic_cast<const VirtualQSpatialSound*>(self));
    if (vqspatialsound && vqspatialsound->isVirtualQSpatialSound) {
        vqspatialsound->setQSpatialSound_IsSignalConnected_IsBase(true);
        return vqspatialsound->isSignalConnected(*signal);
    } else {
        return ((VirtualQSpatialSound*)self)->isSignalConnected(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QSpatialSound_OnIsSignalConnected(const QSpatialSound* self, intptr_t slot) {
    auto* vqspatialsound = const_cast<VirtualQSpatialSound*>(dynamic_cast<const VirtualQSpatialSound*>(self));
    if (vqspatialsound && vqspatialsound->isVirtualQSpatialSound) {
        vqspatialsound->setQSpatialSound_IsSignalConnected_Callback(reinterpret_cast<VirtualQSpatialSound::QSpatialSound_IsSignalConnected_Callback>(slot));
    }
}

void QSpatialSound_Delete(QSpatialSound* self) {
    delete self;
}
