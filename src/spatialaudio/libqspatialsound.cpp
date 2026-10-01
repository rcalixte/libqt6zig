#include <QAudioEngine>
#include <QChildEvent>
#include <QEvent>
#include <QMetaMethod>
#include <QMetaObject>
#include <QObject>
#include <QQuaternion>
#include <QSpatialSound>
#include <QString>
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
    return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

libqt_string QSpatialSound_Tr(const char* s) {
    auto _ret = QSpatialSound::tr(s);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
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
    QSpatialSound::connect(self,
                           static_cast<void (QSpatialSound::*)()>(&QSpatialSound::sourceChanged),
                           [self, slotFunc]() {
                               slotFunc(self);
                           });
}

void QSpatialSound_LoopsChanged(QSpatialSound* self) {
    self->loopsChanged();
}

void QSpatialSound_Connect_LoopsChanged(QSpatialSound* self, intptr_t slot) {
    void (*slotFunc)(QSpatialSound*) = reinterpret_cast<void (*)(QSpatialSound*)>(slot);
    QSpatialSound::connect(self,
                           static_cast<void (QSpatialSound::*)()>(&QSpatialSound::loopsChanged),
                           [self, slotFunc]() {
                               slotFunc(self);
                           });
}

void QSpatialSound_AutoPlayChanged(QSpatialSound* self) {
    self->autoPlayChanged();
}

void QSpatialSound_Connect_AutoPlayChanged(QSpatialSound* self, intptr_t slot) {
    void (*slotFunc)(QSpatialSound*) = reinterpret_cast<void (*)(QSpatialSound*)>(slot);
    QSpatialSound::connect(self,
                           static_cast<void (QSpatialSound::*)()>(&QSpatialSound::autoPlayChanged),
                           [self, slotFunc]() {
                               slotFunc(self);
                           });
}

void QSpatialSound_PositionChanged(QSpatialSound* self) {
    self->positionChanged();
}

void QSpatialSound_Connect_PositionChanged(QSpatialSound* self, intptr_t slot) {
    void (*slotFunc)(QSpatialSound*) = reinterpret_cast<void (*)(QSpatialSound*)>(slot);
    QSpatialSound::connect(self,
                           static_cast<void (QSpatialSound::*)()>(&QSpatialSound::positionChanged),
                           [self, slotFunc]() {
                               slotFunc(self);
                           });
}

void QSpatialSound_RotationChanged(QSpatialSound* self) {
    self->rotationChanged();
}

void QSpatialSound_Connect_RotationChanged(QSpatialSound* self, intptr_t slot) {
    void (*slotFunc)(QSpatialSound*) = reinterpret_cast<void (*)(QSpatialSound*)>(slot);
    QSpatialSound::connect(self,
                           static_cast<void (QSpatialSound::*)()>(&QSpatialSound::rotationChanged),
                           [self, slotFunc]() {
                               slotFunc(self);
                           });
}

void QSpatialSound_VolumeChanged(QSpatialSound* self) {
    self->volumeChanged();
}

void QSpatialSound_Connect_VolumeChanged(QSpatialSound* self, intptr_t slot) {
    void (*slotFunc)(QSpatialSound*) = reinterpret_cast<void (*)(QSpatialSound*)>(slot);
    QSpatialSound::connect(self,
                           static_cast<void (QSpatialSound::*)()>(&QSpatialSound::volumeChanged),
                           [self, slotFunc]() {
                               slotFunc(self);
                           });
}

void QSpatialSound_DistanceModelChanged(QSpatialSound* self) {
    self->distanceModelChanged();
}

void QSpatialSound_Connect_DistanceModelChanged(QSpatialSound* self, intptr_t slot) {
    void (*slotFunc)(QSpatialSound*) = reinterpret_cast<void (*)(QSpatialSound*)>(slot);
    QSpatialSound::connect(self,
                           static_cast<void (QSpatialSound::*)()>(&QSpatialSound::distanceModelChanged),
                           [self, slotFunc]() {
                               slotFunc(self);
                           });
}

void QSpatialSound_SizeChanged(QSpatialSound* self) {
    self->sizeChanged();
}

void QSpatialSound_Connect_SizeChanged(QSpatialSound* self, intptr_t slot) {
    void (*slotFunc)(QSpatialSound*) = reinterpret_cast<void (*)(QSpatialSound*)>(slot);
    QSpatialSound::connect(self,
                           static_cast<void (QSpatialSound::*)()>(&QSpatialSound::sizeChanged),
                           [self, slotFunc]() {
                               slotFunc(self);
                           });
}

void QSpatialSound_DistanceCutoffChanged(QSpatialSound* self) {
    self->distanceCutoffChanged();
}

void QSpatialSound_Connect_DistanceCutoffChanged(QSpatialSound* self, intptr_t slot) {
    void (*slotFunc)(QSpatialSound*) = reinterpret_cast<void (*)(QSpatialSound*)>(slot);
    QSpatialSound::connect(self,
                           static_cast<void (QSpatialSound::*)()>(&QSpatialSound::distanceCutoffChanged),
                           [self, slotFunc]() {
                               slotFunc(self);
                           });
}

void QSpatialSound_ManualAttenuationChanged(QSpatialSound* self) {
    self->manualAttenuationChanged();
}

void QSpatialSound_Connect_ManualAttenuationChanged(QSpatialSound* self, intptr_t slot) {
    void (*slotFunc)(QSpatialSound*) = reinterpret_cast<void (*)(QSpatialSound*)>(slot);
    QSpatialSound::connect(self,
                           static_cast<void (QSpatialSound::*)()>(&QSpatialSound::manualAttenuationChanged),
                           [self, slotFunc]() {
                               slotFunc(self);
                           });
}

void QSpatialSound_OcclusionIntensityChanged(QSpatialSound* self) {
    self->occlusionIntensityChanged();
}

void QSpatialSound_Connect_OcclusionIntensityChanged(QSpatialSound* self, intptr_t slot) {
    void (*slotFunc)(QSpatialSound*) = reinterpret_cast<void (*)(QSpatialSound*)>(slot);
    QSpatialSound::connect(self,
                           static_cast<void (QSpatialSound::*)()>(&QSpatialSound::occlusionIntensityChanged),
                           [self, slotFunc]() {
                               slotFunc(self);
                           });
}

void QSpatialSound_DirectivityChanged(QSpatialSound* self) {
    self->directivityChanged();
}

void QSpatialSound_Connect_DirectivityChanged(QSpatialSound* self, intptr_t slot) {
    void (*slotFunc)(QSpatialSound*) = reinterpret_cast<void (*)(QSpatialSound*)>(slot);
    QSpatialSound::connect(self,
                           static_cast<void (QSpatialSound::*)()>(&QSpatialSound::directivityChanged),
                           [self, slotFunc]() {
                               slotFunc(self);
                           });
}

void QSpatialSound_DirectivityOrderChanged(QSpatialSound* self) {
    self->directivityOrderChanged();
}

void QSpatialSound_Connect_DirectivityOrderChanged(QSpatialSound* self, intptr_t slot) {
    void (*slotFunc)(QSpatialSound*) = reinterpret_cast<void (*)(QSpatialSound*)>(slot);
    QSpatialSound::connect(self,
                           static_cast<void (QSpatialSound::*)()>(&QSpatialSound::directivityOrderChanged),
                           [self, slotFunc]() {
                               slotFunc(self);
                           });
}

void QSpatialSound_NearFieldGainChanged(QSpatialSound* self) {
    self->nearFieldGainChanged();
}

void QSpatialSound_Connect_NearFieldGainChanged(QSpatialSound* self, intptr_t slot) {
    void (*slotFunc)(QSpatialSound*) = reinterpret_cast<void (*)(QSpatialSound*)>(slot);
    QSpatialSound::connect(self,
                           static_cast<void (QSpatialSound::*)()>(&QSpatialSound::nearFieldGainChanged),
                           [self, slotFunc]() {
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
    auto _ret = QSpatialSound::tr(s, c);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string QSpatialSound_Tr3(const char* s, const char* c, int n) {
    auto _ret = QSpatialSound::tr(s, c, static_cast<int>(n));
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
QMetaObject* QSpatialSound_SuperMetaObject(const QSpatialSound* self) {
    return (QMetaObject*)self->QSpatialSound::metaObject();
}

// Auxiliary method to allow providing re-implementation
void QSpatialSound_OnMetaObject(QSpatialSound* self, intptr_t slot) {
    if (auto* vqspatialsound = const_cast<VirtualQSpatialSound*>(dynamic_cast<const VirtualQSpatialSound*>(self)))
        vqspatialsound->qspatialsound_metaobject_callback = reinterpret_cast<VirtualQSpatialSound::QSpatialSound_MetaObject_Callback>(slot);
}

// Base class handler implementation
void* QSpatialSound_SuperMetacast(QSpatialSound* self, const char* param1) {
    return self->QSpatialSound::qt_metacast(param1);
}

// Auxiliary method to allow providing re-implementation
void QSpatialSound_OnMetacast(QSpatialSound* self, intptr_t slot) {
    if (auto* vqspatialsound = dynamic_cast<VirtualQSpatialSound*>(self))
        vqspatialsound->qspatialsound_metacast_callback = reinterpret_cast<VirtualQSpatialSound::QSpatialSound_Metacast_Callback>(slot);
}

// Base class handler implementation
int QSpatialSound_SuperMetacall(QSpatialSound* self, int param1, int param2, void** param3) {
    return self->QSpatialSound::qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

// Auxiliary method to allow providing re-implementation
void QSpatialSound_OnMetacall(QSpatialSound* self, intptr_t slot) {
    if (auto* vqspatialsound = dynamic_cast<VirtualQSpatialSound*>(self))
        vqspatialsound->qspatialsound_metacall_callback = reinterpret_cast<VirtualQSpatialSound::QSpatialSound_Metacall_Callback>(slot);
}

// Derived class handler implementation
bool QSpatialSound_Event(QSpatialSound* self, QEvent* event) {
    return self->event(event);
}

// Base class handler implementation
bool QSpatialSound_SuperEvent(QSpatialSound* self, QEvent* event) {
    return self->QSpatialSound::event(event);
}

// Auxiliary method to allow providing re-implementation
void QSpatialSound_OnEvent(QSpatialSound* self, intptr_t slot) {
    if (auto* vqspatialsound = dynamic_cast<VirtualQSpatialSound*>(self))
        vqspatialsound->qspatialsound_event_callback = reinterpret_cast<VirtualQSpatialSound::QSpatialSound_Event_Callback>(slot);
}

// Derived class handler implementation
bool QSpatialSound_EventFilter(QSpatialSound* self, QObject* watched, QEvent* event) {
    return self->eventFilter(watched, event);
}

// Base class handler implementation
bool QSpatialSound_SuperEventFilter(QSpatialSound* self, QObject* watched, QEvent* event) {
    return self->QSpatialSound::eventFilter(watched, event);
}

// Auxiliary method to allow providing re-implementation
void QSpatialSound_OnEventFilter(QSpatialSound* self, intptr_t slot) {
    if (auto* vqspatialsound = dynamic_cast<VirtualQSpatialSound*>(self))
        vqspatialsound->qspatialsound_eventfilter_callback = reinterpret_cast<VirtualQSpatialSound::QSpatialSound_EventFilter_Callback>(slot);
}

// Derived class handler implementation
void QSpatialSound_TimerEvent(QSpatialSound* self, QTimerEvent* event) {
    auto* vqspatialsound = dynamic_cast<VirtualQSpatialSound*>(self);
    if (vqspatialsound) {
        vqspatialsound->timerEvent(event);
    } else {
        qFatal("Error: Protected virtual method QSpatialSound::timerEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QSpatialSound_SuperTimerEvent(QSpatialSound* self, QTimerEvent* event) {
    if (auto* vqspatialsound = dynamic_cast<VirtualQSpatialSound*>(self)) {
        vqspatialsound->QSpatialSound::timerEvent(event);
    } else
        qFatal("Error: Protected virtual method QSpatialSound::timerEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QSpatialSound_OnTimerEvent(QSpatialSound* self, intptr_t slot) {
    if (auto* vqspatialsound = dynamic_cast<VirtualQSpatialSound*>(self))
        vqspatialsound->qspatialsound_timerevent_callback = reinterpret_cast<VirtualQSpatialSound::QSpatialSound_TimerEvent_Callback>(slot);
}

// Derived class handler implementation
void QSpatialSound_ChildEvent(QSpatialSound* self, QChildEvent* event) {
    auto* vqspatialsound = dynamic_cast<VirtualQSpatialSound*>(self);
    if (vqspatialsound) {
        vqspatialsound->childEvent(event);
    } else {
        qFatal("Error: Protected virtual method QSpatialSound::childEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QSpatialSound_SuperChildEvent(QSpatialSound* self, QChildEvent* event) {
    if (auto* vqspatialsound = dynamic_cast<VirtualQSpatialSound*>(self)) {
        vqspatialsound->QSpatialSound::childEvent(event);
    } else
        qFatal("Error: Protected virtual method QSpatialSound::childEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QSpatialSound_OnChildEvent(QSpatialSound* self, intptr_t slot) {
    if (auto* vqspatialsound = dynamic_cast<VirtualQSpatialSound*>(self))
        vqspatialsound->qspatialsound_childevent_callback = reinterpret_cast<VirtualQSpatialSound::QSpatialSound_ChildEvent_Callback>(slot);
}

// Derived class handler implementation
void QSpatialSound_CustomEvent(QSpatialSound* self, QEvent* event) {
    auto* vqspatialsound = dynamic_cast<VirtualQSpatialSound*>(self);
    if (vqspatialsound) {
        vqspatialsound->customEvent(event);
    } else {
        qFatal("Error: Protected virtual method QSpatialSound::customEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QSpatialSound_SuperCustomEvent(QSpatialSound* self, QEvent* event) {
    if (auto* vqspatialsound = dynamic_cast<VirtualQSpatialSound*>(self)) {
        vqspatialsound->QSpatialSound::customEvent(event);
    } else
        qFatal("Error: Protected virtual method QSpatialSound::customEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QSpatialSound_OnCustomEvent(QSpatialSound* self, intptr_t slot) {
    if (auto* vqspatialsound = dynamic_cast<VirtualQSpatialSound*>(self))
        vqspatialsound->qspatialsound_customevent_callback = reinterpret_cast<VirtualQSpatialSound::QSpatialSound_CustomEvent_Callback>(slot);
}

// Derived class handler implementation
void QSpatialSound_ConnectNotify(QSpatialSound* self, const QMetaMethod* signal) {
    auto* vqspatialsound = dynamic_cast<VirtualQSpatialSound*>(self);
    if (vqspatialsound) {
        vqspatialsound->connectNotify(*signal);
    } else {
        qFatal("Error: Protected virtual method QSpatialSound::connectNotify called without a directly constructed type");
    }
}

// Base class handler implementation
void QSpatialSound_SuperConnectNotify(QSpatialSound* self, const QMetaMethod* signal) {
    if (auto* vqspatialsound = dynamic_cast<VirtualQSpatialSound*>(self)) {
        vqspatialsound->QSpatialSound::connectNotify(*signal);
    } else
        qFatal("Error: Protected virtual method QSpatialSound::connectNotify called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QSpatialSound_OnConnectNotify(QSpatialSound* self, intptr_t slot) {
    if (auto* vqspatialsound = dynamic_cast<VirtualQSpatialSound*>(self))
        vqspatialsound->qspatialsound_connectnotify_callback = reinterpret_cast<VirtualQSpatialSound::QSpatialSound_ConnectNotify_Callback>(slot);
}

// Derived class handler implementation
void QSpatialSound_DisconnectNotify(QSpatialSound* self, const QMetaMethod* signal) {
    auto* vqspatialsound = dynamic_cast<VirtualQSpatialSound*>(self);
    if (vqspatialsound) {
        vqspatialsound->disconnectNotify(*signal);
    } else {
        qFatal("Error: Protected virtual method QSpatialSound::disconnectNotify called without a directly constructed type");
    }
}

// Base class handler implementation
void QSpatialSound_SuperDisconnectNotify(QSpatialSound* self, const QMetaMethod* signal) {
    if (auto* vqspatialsound = dynamic_cast<VirtualQSpatialSound*>(self)) {
        vqspatialsound->QSpatialSound::disconnectNotify(*signal);
    } else
        qFatal("Error: Protected virtual method QSpatialSound::disconnectNotify called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QSpatialSound_OnDisconnectNotify(QSpatialSound* self, intptr_t slot) {
    if (auto* vqspatialsound = dynamic_cast<VirtualQSpatialSound*>(self))
        vqspatialsound->qspatialsound_disconnectnotify_callback = reinterpret_cast<VirtualQSpatialSound::QSpatialSound_DisconnectNotify_Callback>(slot);
}

// Derived class protected handler implementation
QObject* QSpatialSound_Sender(const QSpatialSound* self) {
    if (auto* vqspatialsound = const_cast<VirtualQSpatialSound*>(dynamic_cast<const VirtualQSpatialSound*>(self))) {
        return vqspatialsound->VirtualQSpatialSound::sender();
    } else
        qFatal("Error: Protected method QSpatialSound::sender called without a directly constructed type");
}

// Derived class protected handler implementation
int QSpatialSound_SenderSignalIndex(const QSpatialSound* self) {
    if (auto* vqspatialsound = const_cast<VirtualQSpatialSound*>(dynamic_cast<const VirtualQSpatialSound*>(self))) {
        return vqspatialsound->VirtualQSpatialSound::senderSignalIndex();
    } else
        qFatal("Error: Protected method QSpatialSound::senderSignalIndex called without a directly constructed type");
}

// Derived class protected handler implementation
int QSpatialSound_Receivers(const QSpatialSound* self, const char* signal) {
    if (auto* vqspatialsound = const_cast<VirtualQSpatialSound*>(dynamic_cast<const VirtualQSpatialSound*>(self))) {
        return vqspatialsound->VirtualQSpatialSound::receivers(signal);
    } else
        qFatal("Error: Protected method QSpatialSound::receivers called without a directly constructed type");
}

// Derived class protected handler implementation
bool QSpatialSound_IsSignalConnected(const QSpatialSound* self, const QMetaMethod* signal) {
    if (auto* vqspatialsound = const_cast<VirtualQSpatialSound*>(dynamic_cast<const VirtualQSpatialSound*>(self))) {
        return vqspatialsound->VirtualQSpatialSound::isSignalConnected(*signal);
    } else
        qFatal("Error: Protected method QSpatialSound::isSignalConnected called without a directly constructed type");
}

void QSpatialSound_Delete(QSpatialSound* self) {
    delete self;
}
