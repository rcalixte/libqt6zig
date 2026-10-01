#include <QAmbientSound>
#include <QAudioEngine>
#include <QChildEvent>
#include <QEvent>
#include <QMetaMethod>
#include <QMetaObject>
#include <QObject>
#include <QString>
#include <QTimerEvent>
#include <QUrl>
#include <qambientsound.h>
#include "libqambientsound.h"
#include "libqambientsound.hxx"

QAmbientSound* QAmbientSound_new(QAudioEngine* engine) {
    return new VirtualQAmbientSound(engine);
}

QMetaObject* QAmbientSound_MetaObject(const QAmbientSound* self) {
    return (QMetaObject*)self->metaObject();
}

void* QAmbientSound_Metacast(QAmbientSound* self, const char* param1) {
    return self->qt_metacast(param1);
}

int QAmbientSound_Metacall(QAmbientSound* self, int param1, int param2, void** param3) {
    return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

libqt_string QAmbientSound_Tr(const char* s) {
    auto _ret = QAmbientSound::tr(s);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

void QAmbientSound_SetSource(QAmbientSound* self, const QUrl* url) {
    self->setSource(*url);
}

QUrl* QAmbientSound_Source(const QAmbientSound* self) {
    return new QUrl(self->source());
}

int QAmbientSound_Loops(const QAmbientSound* self) {
    return self->loops();
}

void QAmbientSound_SetLoops(QAmbientSound* self, int loops) {
    self->setLoops(static_cast<int>(loops));
}

bool QAmbientSound_AutoPlay(const QAmbientSound* self) {
    return self->autoPlay();
}

void QAmbientSound_SetAutoPlay(QAmbientSound* self, bool autoPlay) {
    self->setAutoPlay(autoPlay);
}

void QAmbientSound_SetVolume(QAmbientSound* self, float volume) {
    self->setVolume(static_cast<float>(volume));
}

float QAmbientSound_Volume(const QAmbientSound* self) {
    return self->volume();
}

QAudioEngine* QAmbientSound_Engine(const QAmbientSound* self) {
    return self->engine();
}

void QAmbientSound_SourceChanged(QAmbientSound* self) {
    self->sourceChanged();
}

void QAmbientSound_Connect_SourceChanged(QAmbientSound* self, intptr_t slot) {
    void (*slotFunc)(QAmbientSound*) = reinterpret_cast<void (*)(QAmbientSound*)>(slot);
    QAmbientSound::connect(self,
                           static_cast<void (QAmbientSound::*)()>(&QAmbientSound::sourceChanged),
                           [self, slotFunc]() {
                               slotFunc(self);
                           });
}

void QAmbientSound_LoopsChanged(QAmbientSound* self) {
    self->loopsChanged();
}

void QAmbientSound_Connect_LoopsChanged(QAmbientSound* self, intptr_t slot) {
    void (*slotFunc)(QAmbientSound*) = reinterpret_cast<void (*)(QAmbientSound*)>(slot);
    QAmbientSound::connect(self,
                           static_cast<void (QAmbientSound::*)()>(&QAmbientSound::loopsChanged),
                           [self, slotFunc]() {
                               slotFunc(self);
                           });
}

void QAmbientSound_AutoPlayChanged(QAmbientSound* self) {
    self->autoPlayChanged();
}

void QAmbientSound_Connect_AutoPlayChanged(QAmbientSound* self, intptr_t slot) {
    void (*slotFunc)(QAmbientSound*) = reinterpret_cast<void (*)(QAmbientSound*)>(slot);
    QAmbientSound::connect(self,
                           static_cast<void (QAmbientSound::*)()>(&QAmbientSound::autoPlayChanged),
                           [self, slotFunc]() {
                               slotFunc(self);
                           });
}

void QAmbientSound_VolumeChanged(QAmbientSound* self) {
    self->volumeChanged();
}

void QAmbientSound_Connect_VolumeChanged(QAmbientSound* self, intptr_t slot) {
    void (*slotFunc)(QAmbientSound*) = reinterpret_cast<void (*)(QAmbientSound*)>(slot);
    QAmbientSound::connect(self,
                           static_cast<void (QAmbientSound::*)()>(&QAmbientSound::volumeChanged),
                           [self, slotFunc]() {
                               slotFunc(self);
                           });
}

void QAmbientSound_Play(QAmbientSound* self) {
    self->play();
}

void QAmbientSound_Pause(QAmbientSound* self) {
    self->pause();
}

void QAmbientSound_Stop(QAmbientSound* self) {
    self->stop();
}

libqt_string QAmbientSound_Tr2(const char* s, const char* c) {
    auto _ret = QAmbientSound::tr(s, c);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string QAmbientSound_Tr3(const char* s, const char* c, int n) {
    auto _ret = QAmbientSound::tr(s, c, static_cast<int>(n));
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
QMetaObject* QAmbientSound_SuperMetaObject(const QAmbientSound* self) {
    return (QMetaObject*)self->QAmbientSound::metaObject();
}

// Auxiliary method to allow providing re-implementation
void QAmbientSound_OnMetaObject(QAmbientSound* self, intptr_t slot) {
    if (auto* vqambientsound = const_cast<VirtualQAmbientSound*>(dynamic_cast<const VirtualQAmbientSound*>(self)))
        vqambientsound->qambientsound_metaobject_callback = reinterpret_cast<VirtualQAmbientSound::QAmbientSound_MetaObject_Callback>(slot);
}

// Base class handler implementation
void* QAmbientSound_SuperMetacast(QAmbientSound* self, const char* param1) {
    return self->QAmbientSound::qt_metacast(param1);
}

// Auxiliary method to allow providing re-implementation
void QAmbientSound_OnMetacast(QAmbientSound* self, intptr_t slot) {
    if (auto* vqambientsound = dynamic_cast<VirtualQAmbientSound*>(self))
        vqambientsound->qambientsound_metacast_callback = reinterpret_cast<VirtualQAmbientSound::QAmbientSound_Metacast_Callback>(slot);
}

// Base class handler implementation
int QAmbientSound_SuperMetacall(QAmbientSound* self, int param1, int param2, void** param3) {
    return self->QAmbientSound::qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

// Auxiliary method to allow providing re-implementation
void QAmbientSound_OnMetacall(QAmbientSound* self, intptr_t slot) {
    if (auto* vqambientsound = dynamic_cast<VirtualQAmbientSound*>(self))
        vqambientsound->qambientsound_metacall_callback = reinterpret_cast<VirtualQAmbientSound::QAmbientSound_Metacall_Callback>(slot);
}

// Derived class handler implementation
bool QAmbientSound_Event(QAmbientSound* self, QEvent* event) {
    return self->event(event);
}

// Base class handler implementation
bool QAmbientSound_SuperEvent(QAmbientSound* self, QEvent* event) {
    return self->QAmbientSound::event(event);
}

// Auxiliary method to allow providing re-implementation
void QAmbientSound_OnEvent(QAmbientSound* self, intptr_t slot) {
    if (auto* vqambientsound = dynamic_cast<VirtualQAmbientSound*>(self))
        vqambientsound->qambientsound_event_callback = reinterpret_cast<VirtualQAmbientSound::QAmbientSound_Event_Callback>(slot);
}

// Derived class handler implementation
bool QAmbientSound_EventFilter(QAmbientSound* self, QObject* watched, QEvent* event) {
    return self->eventFilter(watched, event);
}

// Base class handler implementation
bool QAmbientSound_SuperEventFilter(QAmbientSound* self, QObject* watched, QEvent* event) {
    return self->QAmbientSound::eventFilter(watched, event);
}

// Auxiliary method to allow providing re-implementation
void QAmbientSound_OnEventFilter(QAmbientSound* self, intptr_t slot) {
    if (auto* vqambientsound = dynamic_cast<VirtualQAmbientSound*>(self))
        vqambientsound->qambientsound_eventfilter_callback = reinterpret_cast<VirtualQAmbientSound::QAmbientSound_EventFilter_Callback>(slot);
}

// Derived class handler implementation
void QAmbientSound_TimerEvent(QAmbientSound* self, QTimerEvent* event) {
    auto* vqambientsound = dynamic_cast<VirtualQAmbientSound*>(self);
    if (vqambientsound) {
        vqambientsound->timerEvent(event);
    } else {
        qFatal("Error: Protected virtual method QAmbientSound::timerEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QAmbientSound_SuperTimerEvent(QAmbientSound* self, QTimerEvent* event) {
    if (auto* vqambientsound = dynamic_cast<VirtualQAmbientSound*>(self)) {
        vqambientsound->QAmbientSound::timerEvent(event);
    } else
        qFatal("Error: Protected virtual method QAmbientSound::timerEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QAmbientSound_OnTimerEvent(QAmbientSound* self, intptr_t slot) {
    if (auto* vqambientsound = dynamic_cast<VirtualQAmbientSound*>(self))
        vqambientsound->qambientsound_timerevent_callback = reinterpret_cast<VirtualQAmbientSound::QAmbientSound_TimerEvent_Callback>(slot);
}

// Derived class handler implementation
void QAmbientSound_ChildEvent(QAmbientSound* self, QChildEvent* event) {
    auto* vqambientsound = dynamic_cast<VirtualQAmbientSound*>(self);
    if (vqambientsound) {
        vqambientsound->childEvent(event);
    } else {
        qFatal("Error: Protected virtual method QAmbientSound::childEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QAmbientSound_SuperChildEvent(QAmbientSound* self, QChildEvent* event) {
    if (auto* vqambientsound = dynamic_cast<VirtualQAmbientSound*>(self)) {
        vqambientsound->QAmbientSound::childEvent(event);
    } else
        qFatal("Error: Protected virtual method QAmbientSound::childEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QAmbientSound_OnChildEvent(QAmbientSound* self, intptr_t slot) {
    if (auto* vqambientsound = dynamic_cast<VirtualQAmbientSound*>(self))
        vqambientsound->qambientsound_childevent_callback = reinterpret_cast<VirtualQAmbientSound::QAmbientSound_ChildEvent_Callback>(slot);
}

// Derived class handler implementation
void QAmbientSound_CustomEvent(QAmbientSound* self, QEvent* event) {
    auto* vqambientsound = dynamic_cast<VirtualQAmbientSound*>(self);
    if (vqambientsound) {
        vqambientsound->customEvent(event);
    } else {
        qFatal("Error: Protected virtual method QAmbientSound::customEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QAmbientSound_SuperCustomEvent(QAmbientSound* self, QEvent* event) {
    if (auto* vqambientsound = dynamic_cast<VirtualQAmbientSound*>(self)) {
        vqambientsound->QAmbientSound::customEvent(event);
    } else
        qFatal("Error: Protected virtual method QAmbientSound::customEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QAmbientSound_OnCustomEvent(QAmbientSound* self, intptr_t slot) {
    if (auto* vqambientsound = dynamic_cast<VirtualQAmbientSound*>(self))
        vqambientsound->qambientsound_customevent_callback = reinterpret_cast<VirtualQAmbientSound::QAmbientSound_CustomEvent_Callback>(slot);
}

// Derived class handler implementation
void QAmbientSound_ConnectNotify(QAmbientSound* self, const QMetaMethod* signal) {
    auto* vqambientsound = dynamic_cast<VirtualQAmbientSound*>(self);
    if (vqambientsound) {
        vqambientsound->connectNotify(*signal);
    } else {
        qFatal("Error: Protected virtual method QAmbientSound::connectNotify called without a directly constructed type");
    }
}

// Base class handler implementation
void QAmbientSound_SuperConnectNotify(QAmbientSound* self, const QMetaMethod* signal) {
    if (auto* vqambientsound = dynamic_cast<VirtualQAmbientSound*>(self)) {
        vqambientsound->QAmbientSound::connectNotify(*signal);
    } else
        qFatal("Error: Protected virtual method QAmbientSound::connectNotify called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QAmbientSound_OnConnectNotify(QAmbientSound* self, intptr_t slot) {
    if (auto* vqambientsound = dynamic_cast<VirtualQAmbientSound*>(self))
        vqambientsound->qambientsound_connectnotify_callback = reinterpret_cast<VirtualQAmbientSound::QAmbientSound_ConnectNotify_Callback>(slot);
}

// Derived class handler implementation
void QAmbientSound_DisconnectNotify(QAmbientSound* self, const QMetaMethod* signal) {
    auto* vqambientsound = dynamic_cast<VirtualQAmbientSound*>(self);
    if (vqambientsound) {
        vqambientsound->disconnectNotify(*signal);
    } else {
        qFatal("Error: Protected virtual method QAmbientSound::disconnectNotify called without a directly constructed type");
    }
}

// Base class handler implementation
void QAmbientSound_SuperDisconnectNotify(QAmbientSound* self, const QMetaMethod* signal) {
    if (auto* vqambientsound = dynamic_cast<VirtualQAmbientSound*>(self)) {
        vqambientsound->QAmbientSound::disconnectNotify(*signal);
    } else
        qFatal("Error: Protected virtual method QAmbientSound::disconnectNotify called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QAmbientSound_OnDisconnectNotify(QAmbientSound* self, intptr_t slot) {
    if (auto* vqambientsound = dynamic_cast<VirtualQAmbientSound*>(self))
        vqambientsound->qambientsound_disconnectnotify_callback = reinterpret_cast<VirtualQAmbientSound::QAmbientSound_DisconnectNotify_Callback>(slot);
}

// Derived class protected handler implementation
QObject* QAmbientSound_Sender(const QAmbientSound* self) {
    if (auto* vqambientsound = const_cast<VirtualQAmbientSound*>(dynamic_cast<const VirtualQAmbientSound*>(self))) {
        return vqambientsound->VirtualQAmbientSound::sender();
    } else
        qFatal("Error: Protected method QAmbientSound::sender called without a directly constructed type");
}

// Derived class protected handler implementation
int QAmbientSound_SenderSignalIndex(const QAmbientSound* self) {
    if (auto* vqambientsound = const_cast<VirtualQAmbientSound*>(dynamic_cast<const VirtualQAmbientSound*>(self))) {
        return vqambientsound->VirtualQAmbientSound::senderSignalIndex();
    } else
        qFatal("Error: Protected method QAmbientSound::senderSignalIndex called without a directly constructed type");
}

// Derived class protected handler implementation
int QAmbientSound_Receivers(const QAmbientSound* self, const char* signal) {
    if (auto* vqambientsound = const_cast<VirtualQAmbientSound*>(dynamic_cast<const VirtualQAmbientSound*>(self))) {
        return vqambientsound->VirtualQAmbientSound::receivers(signal);
    } else
        qFatal("Error: Protected method QAmbientSound::receivers called without a directly constructed type");
}

// Derived class protected handler implementation
bool QAmbientSound_IsSignalConnected(const QAmbientSound* self, const QMetaMethod* signal) {
    if (auto* vqambientsound = const_cast<VirtualQAmbientSound*>(dynamic_cast<const VirtualQAmbientSound*>(self))) {
        return vqambientsound->VirtualQAmbientSound::isSignalConnected(*signal);
    } else
        qFatal("Error: Protected method QAmbientSound::isSignalConnected called without a directly constructed type");
}

void QAmbientSound_Delete(QAmbientSound* self) {
    delete self;
}
