#include <QAudioDevice>
#include <QChildEvent>
#include <QEvent>
#include <QList>
#include <QMetaMethod>
#include <QMetaObject>
#include <QObject>
#include <QSoundEffect>
#include <QString>
#include <QTimerEvent>
#include <QUrl>
#include <qsoundeffect.h>
#include "libqsoundeffect.h"
#include "libqsoundeffect.hxx"

QSoundEffect* QSoundEffect_new() {
    return new VirtualQSoundEffect();
}

QSoundEffect* QSoundEffect_new2(const QAudioDevice* audioDevice) {
    return new VirtualQSoundEffect(*audioDevice);
}

QSoundEffect* QSoundEffect_new3(QObject* parent) {
    return new VirtualQSoundEffect(parent);
}

QSoundEffect* QSoundEffect_new4(const QAudioDevice* audioDevice, QObject* parent) {
    return new VirtualQSoundEffect(*audioDevice, parent);
}

QMetaObject* QSoundEffect_MetaObject(const QSoundEffect* self) {
    return (QMetaObject*)self->metaObject();
}

void* QSoundEffect_Metacast(QSoundEffect* self, const char* param1) {
    return self->qt_metacast(param1);
}

int QSoundEffect_Metacall(QSoundEffect* self, int param1, int param2, void** param3) {
    return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

libqt_string QSoundEffect_Tr(const char* s) {
    auto _ret = QSoundEffect::tr(s);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_list /* of libqt_string */ QSoundEffect_SupportedMimeTypes() {
    QList<QString> _ret = QSoundEffect::supportedMimeTypes();
    // Convert QList<> from C++ memory to manually-managed C memory
    libqt_string* _arr = static_cast<libqt_string*>(malloc(sizeof(libqt_string) * (_ret.size())));
    for (qsizetype i = 0; i < _ret.size(); ++i) {
        auto _lv_ret = _ret[i];
        // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
        QByteArray _lv_b = _lv_ret.toUtf8();
        libqt_string _lv_str;
        _lv_str.len = _lv_b.length();
        _lv_str.data = static_cast<const char*>(malloc(_lv_str.len + 1));
        memcpy((void*)_lv_str.data, _lv_b.data(), _lv_str.len);
        ((char*)_lv_str.data)[_lv_str.len] = '\0';
        _arr[i] = _lv_str;
    }
    libqt_list _out;
    _out.len = _ret.size();
    _out.data = static_cast<void*>(_arr);
    return _out;
}

QUrl* QSoundEffect_Source(const QSoundEffect* self) {
    return new QUrl(self->source());
}

void QSoundEffect_SetSource(QSoundEffect* self, const QUrl* url) {
    self->setSource(*url);
}

int QSoundEffect_LoopCount(const QSoundEffect* self) {
    return self->loopCount();
}

int QSoundEffect_LoopsRemaining(const QSoundEffect* self) {
    return self->loopsRemaining();
}

void QSoundEffect_SetLoopCount(QSoundEffect* self, int loopCount) {
    self->setLoopCount(static_cast<int>(loopCount));
}

QAudioDevice* QSoundEffect_AudioDevice(QSoundEffect* self) {
    return new QAudioDevice(self->audioDevice());
}

void QSoundEffect_SetAudioDevice(QSoundEffect* self, const QAudioDevice* device) {
    self->setAudioDevice(*device);
}

float QSoundEffect_Volume(const QSoundEffect* self) {
    return self->volume();
}

void QSoundEffect_SetVolume(QSoundEffect* self, float volume) {
    self->setVolume(static_cast<float>(volume));
}

bool QSoundEffect_IsMuted(const QSoundEffect* self) {
    return self->isMuted();
}

void QSoundEffect_SetMuted(QSoundEffect* self, bool muted) {
    self->setMuted(muted);
}

bool QSoundEffect_IsLoaded(const QSoundEffect* self) {
    return self->isLoaded();
}

bool QSoundEffect_IsPlaying(const QSoundEffect* self) {
    return self->isPlaying();
}

int QSoundEffect_Status(const QSoundEffect* self) {
    return static_cast<int>(self->status());
}

void QSoundEffect_SourceChanged(QSoundEffect* self) {
    self->sourceChanged();
}

void QSoundEffect_Connect_SourceChanged(QSoundEffect* self, intptr_t slot) {
    void (*slotFunc)(QSoundEffect*) = reinterpret_cast<void (*)(QSoundEffect*)>(slot);
    QSoundEffect::connect(self,
                          static_cast<void (QSoundEffect::*)()>(&QSoundEffect::sourceChanged),
                          [self, slotFunc]() {
                              slotFunc(self);
                          });
}

void QSoundEffect_LoopCountChanged(QSoundEffect* self) {
    self->loopCountChanged();
}

void QSoundEffect_Connect_LoopCountChanged(QSoundEffect* self, intptr_t slot) {
    void (*slotFunc)(QSoundEffect*) = reinterpret_cast<void (*)(QSoundEffect*)>(slot);
    QSoundEffect::connect(self,
                          static_cast<void (QSoundEffect::*)()>(&QSoundEffect::loopCountChanged),
                          [self, slotFunc]() {
                              slotFunc(self);
                          });
}

void QSoundEffect_LoopsRemainingChanged(QSoundEffect* self) {
    self->loopsRemainingChanged();
}

void QSoundEffect_Connect_LoopsRemainingChanged(QSoundEffect* self, intptr_t slot) {
    void (*slotFunc)(QSoundEffect*) = reinterpret_cast<void (*)(QSoundEffect*)>(slot);
    QSoundEffect::connect(self,
                          static_cast<void (QSoundEffect::*)()>(&QSoundEffect::loopsRemainingChanged),
                          [self, slotFunc]() {
                              slotFunc(self);
                          });
}

void QSoundEffect_VolumeChanged(QSoundEffect* self) {
    self->volumeChanged();
}

void QSoundEffect_Connect_VolumeChanged(QSoundEffect* self, intptr_t slot) {
    void (*slotFunc)(QSoundEffect*) = reinterpret_cast<void (*)(QSoundEffect*)>(slot);
    QSoundEffect::connect(self,
                          static_cast<void (QSoundEffect::*)()>(&QSoundEffect::volumeChanged),
                          [self, slotFunc]() {
                              slotFunc(self);
                          });
}

void QSoundEffect_MutedChanged(QSoundEffect* self) {
    self->mutedChanged();
}

void QSoundEffect_Connect_MutedChanged(QSoundEffect* self, intptr_t slot) {
    void (*slotFunc)(QSoundEffect*) = reinterpret_cast<void (*)(QSoundEffect*)>(slot);
    QSoundEffect::connect(self,
                          static_cast<void (QSoundEffect::*)()>(&QSoundEffect::mutedChanged),
                          [self, slotFunc]() {
                              slotFunc(self);
                          });
}

void QSoundEffect_LoadedChanged(QSoundEffect* self) {
    self->loadedChanged();
}

void QSoundEffect_Connect_LoadedChanged(QSoundEffect* self, intptr_t slot) {
    void (*slotFunc)(QSoundEffect*) = reinterpret_cast<void (*)(QSoundEffect*)>(slot);
    QSoundEffect::connect(self,
                          static_cast<void (QSoundEffect::*)()>(&QSoundEffect::loadedChanged),
                          [self, slotFunc]() {
                              slotFunc(self);
                          });
}

void QSoundEffect_PlayingChanged(QSoundEffect* self) {
    self->playingChanged();
}

void QSoundEffect_Connect_PlayingChanged(QSoundEffect* self, intptr_t slot) {
    void (*slotFunc)(QSoundEffect*) = reinterpret_cast<void (*)(QSoundEffect*)>(slot);
    QSoundEffect::connect(self,
                          static_cast<void (QSoundEffect::*)()>(&QSoundEffect::playingChanged),
                          [self, slotFunc]() {
                              slotFunc(self);
                          });
}

void QSoundEffect_StatusChanged(QSoundEffect* self) {
    self->statusChanged();
}

void QSoundEffect_Connect_StatusChanged(QSoundEffect* self, intptr_t slot) {
    void (*slotFunc)(QSoundEffect*) = reinterpret_cast<void (*)(QSoundEffect*)>(slot);
    QSoundEffect::connect(self,
                          static_cast<void (QSoundEffect::*)()>(&QSoundEffect::statusChanged),
                          [self, slotFunc]() {
                              slotFunc(self);
                          });
}

void QSoundEffect_AudioDeviceChanged(QSoundEffect* self) {
    self->audioDeviceChanged();
}

void QSoundEffect_Connect_AudioDeviceChanged(QSoundEffect* self, intptr_t slot) {
    void (*slotFunc)(QSoundEffect*) = reinterpret_cast<void (*)(QSoundEffect*)>(slot);
    QSoundEffect::connect(self,
                          static_cast<void (QSoundEffect::*)()>(&QSoundEffect::audioDeviceChanged),
                          [self, slotFunc]() {
                              slotFunc(self);
                          });
}

void QSoundEffect_Play(QSoundEffect* self) {
    self->play();
}

void QSoundEffect_Stop(QSoundEffect* self) {
    self->stop();
}

libqt_string QSoundEffect_Tr2(const char* s, const char* c) {
    auto _ret = QSoundEffect::tr(s, c);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string QSoundEffect_Tr3(const char* s, const char* c, int n) {
    auto _ret = QSoundEffect::tr(s, c, static_cast<int>(n));
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
QMetaObject* QSoundEffect_SuperMetaObject(const QSoundEffect* self) {
    return (QMetaObject*)self->QSoundEffect::metaObject();
}

// Auxiliary method to allow providing re-implementation
void QSoundEffect_OnMetaObject(QSoundEffect* self, intptr_t slot) {
    if (auto* vqsoundeffect = const_cast<VirtualQSoundEffect*>(dynamic_cast<const VirtualQSoundEffect*>(self)))
        vqsoundeffect->qsoundeffect_metaobject_callback = reinterpret_cast<VirtualQSoundEffect::QSoundEffect_MetaObject_Callback>(slot);
}

// Base class handler implementation
void* QSoundEffect_SuperMetacast(QSoundEffect* self, const char* param1) {
    return self->QSoundEffect::qt_metacast(param1);
}

// Auxiliary method to allow providing re-implementation
void QSoundEffect_OnMetacast(QSoundEffect* self, intptr_t slot) {
    if (auto* vqsoundeffect = dynamic_cast<VirtualQSoundEffect*>(self))
        vqsoundeffect->qsoundeffect_metacast_callback = reinterpret_cast<VirtualQSoundEffect::QSoundEffect_Metacast_Callback>(slot);
}

// Base class handler implementation
int QSoundEffect_SuperMetacall(QSoundEffect* self, int param1, int param2, void** param3) {
    return self->QSoundEffect::qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

// Auxiliary method to allow providing re-implementation
void QSoundEffect_OnMetacall(QSoundEffect* self, intptr_t slot) {
    if (auto* vqsoundeffect = dynamic_cast<VirtualQSoundEffect*>(self))
        vqsoundeffect->qsoundeffect_metacall_callback = reinterpret_cast<VirtualQSoundEffect::QSoundEffect_Metacall_Callback>(slot);
}

// Derived class handler implementation
bool QSoundEffect_Event(QSoundEffect* self, QEvent* event) {
    return self->event(event);
}

// Base class handler implementation
bool QSoundEffect_SuperEvent(QSoundEffect* self, QEvent* event) {
    return self->QSoundEffect::event(event);
}

// Auxiliary method to allow providing re-implementation
void QSoundEffect_OnEvent(QSoundEffect* self, intptr_t slot) {
    if (auto* vqsoundeffect = dynamic_cast<VirtualQSoundEffect*>(self))
        vqsoundeffect->qsoundeffect_event_callback = reinterpret_cast<VirtualQSoundEffect::QSoundEffect_Event_Callback>(slot);
}

// Derived class handler implementation
bool QSoundEffect_EventFilter(QSoundEffect* self, QObject* watched, QEvent* event) {
    return self->eventFilter(watched, event);
}

// Base class handler implementation
bool QSoundEffect_SuperEventFilter(QSoundEffect* self, QObject* watched, QEvent* event) {
    return self->QSoundEffect::eventFilter(watched, event);
}

// Auxiliary method to allow providing re-implementation
void QSoundEffect_OnEventFilter(QSoundEffect* self, intptr_t slot) {
    if (auto* vqsoundeffect = dynamic_cast<VirtualQSoundEffect*>(self))
        vqsoundeffect->qsoundeffect_eventfilter_callback = reinterpret_cast<VirtualQSoundEffect::QSoundEffect_EventFilter_Callback>(slot);
}

// Derived class handler implementation
void QSoundEffect_TimerEvent(QSoundEffect* self, QTimerEvent* event) {
    auto* vqsoundeffect = dynamic_cast<VirtualQSoundEffect*>(self);
    if (vqsoundeffect) {
        vqsoundeffect->timerEvent(event);
    } else {
        qFatal("Error: Protected virtual method QSoundEffect::timerEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QSoundEffect_SuperTimerEvent(QSoundEffect* self, QTimerEvent* event) {
    if (auto* vqsoundeffect = dynamic_cast<VirtualQSoundEffect*>(self)) {
        vqsoundeffect->QSoundEffect::timerEvent(event);
    } else
        qFatal("Error: Protected virtual method QSoundEffect::timerEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QSoundEffect_OnTimerEvent(QSoundEffect* self, intptr_t slot) {
    if (auto* vqsoundeffect = dynamic_cast<VirtualQSoundEffect*>(self))
        vqsoundeffect->qsoundeffect_timerevent_callback = reinterpret_cast<VirtualQSoundEffect::QSoundEffect_TimerEvent_Callback>(slot);
}

// Derived class handler implementation
void QSoundEffect_ChildEvent(QSoundEffect* self, QChildEvent* event) {
    auto* vqsoundeffect = dynamic_cast<VirtualQSoundEffect*>(self);
    if (vqsoundeffect) {
        vqsoundeffect->childEvent(event);
    } else {
        qFatal("Error: Protected virtual method QSoundEffect::childEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QSoundEffect_SuperChildEvent(QSoundEffect* self, QChildEvent* event) {
    if (auto* vqsoundeffect = dynamic_cast<VirtualQSoundEffect*>(self)) {
        vqsoundeffect->QSoundEffect::childEvent(event);
    } else
        qFatal("Error: Protected virtual method QSoundEffect::childEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QSoundEffect_OnChildEvent(QSoundEffect* self, intptr_t slot) {
    if (auto* vqsoundeffect = dynamic_cast<VirtualQSoundEffect*>(self))
        vqsoundeffect->qsoundeffect_childevent_callback = reinterpret_cast<VirtualQSoundEffect::QSoundEffect_ChildEvent_Callback>(slot);
}

// Derived class handler implementation
void QSoundEffect_CustomEvent(QSoundEffect* self, QEvent* event) {
    auto* vqsoundeffect = dynamic_cast<VirtualQSoundEffect*>(self);
    if (vqsoundeffect) {
        vqsoundeffect->customEvent(event);
    } else {
        qFatal("Error: Protected virtual method QSoundEffect::customEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QSoundEffect_SuperCustomEvent(QSoundEffect* self, QEvent* event) {
    if (auto* vqsoundeffect = dynamic_cast<VirtualQSoundEffect*>(self)) {
        vqsoundeffect->QSoundEffect::customEvent(event);
    } else
        qFatal("Error: Protected virtual method QSoundEffect::customEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QSoundEffect_OnCustomEvent(QSoundEffect* self, intptr_t slot) {
    if (auto* vqsoundeffect = dynamic_cast<VirtualQSoundEffect*>(self))
        vqsoundeffect->qsoundeffect_customevent_callback = reinterpret_cast<VirtualQSoundEffect::QSoundEffect_CustomEvent_Callback>(slot);
}

// Derived class handler implementation
void QSoundEffect_ConnectNotify(QSoundEffect* self, const QMetaMethod* signal) {
    auto* vqsoundeffect = dynamic_cast<VirtualQSoundEffect*>(self);
    if (vqsoundeffect) {
        vqsoundeffect->connectNotify(*signal);
    } else {
        qFatal("Error: Protected virtual method QSoundEffect::connectNotify called without a directly constructed type");
    }
}

// Base class handler implementation
void QSoundEffect_SuperConnectNotify(QSoundEffect* self, const QMetaMethod* signal) {
    if (auto* vqsoundeffect = dynamic_cast<VirtualQSoundEffect*>(self)) {
        vqsoundeffect->QSoundEffect::connectNotify(*signal);
    } else
        qFatal("Error: Protected virtual method QSoundEffect::connectNotify called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QSoundEffect_OnConnectNotify(QSoundEffect* self, intptr_t slot) {
    if (auto* vqsoundeffect = dynamic_cast<VirtualQSoundEffect*>(self))
        vqsoundeffect->qsoundeffect_connectnotify_callback = reinterpret_cast<VirtualQSoundEffect::QSoundEffect_ConnectNotify_Callback>(slot);
}

// Derived class handler implementation
void QSoundEffect_DisconnectNotify(QSoundEffect* self, const QMetaMethod* signal) {
    auto* vqsoundeffect = dynamic_cast<VirtualQSoundEffect*>(self);
    if (vqsoundeffect) {
        vqsoundeffect->disconnectNotify(*signal);
    } else {
        qFatal("Error: Protected virtual method QSoundEffect::disconnectNotify called without a directly constructed type");
    }
}

// Base class handler implementation
void QSoundEffect_SuperDisconnectNotify(QSoundEffect* self, const QMetaMethod* signal) {
    if (auto* vqsoundeffect = dynamic_cast<VirtualQSoundEffect*>(self)) {
        vqsoundeffect->QSoundEffect::disconnectNotify(*signal);
    } else
        qFatal("Error: Protected virtual method QSoundEffect::disconnectNotify called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QSoundEffect_OnDisconnectNotify(QSoundEffect* self, intptr_t slot) {
    if (auto* vqsoundeffect = dynamic_cast<VirtualQSoundEffect*>(self))
        vqsoundeffect->qsoundeffect_disconnectnotify_callback = reinterpret_cast<VirtualQSoundEffect::QSoundEffect_DisconnectNotify_Callback>(slot);
}

// Derived class protected handler implementation
QObject* QSoundEffect_Sender(const QSoundEffect* self) {
    if (auto* vqsoundeffect = const_cast<VirtualQSoundEffect*>(dynamic_cast<const VirtualQSoundEffect*>(self))) {
        return vqsoundeffect->VirtualQSoundEffect::sender();
    } else
        qFatal("Error: Protected method QSoundEffect::sender called without a directly constructed type");
}

// Derived class protected handler implementation
int QSoundEffect_SenderSignalIndex(const QSoundEffect* self) {
    if (auto* vqsoundeffect = const_cast<VirtualQSoundEffect*>(dynamic_cast<const VirtualQSoundEffect*>(self))) {
        return vqsoundeffect->VirtualQSoundEffect::senderSignalIndex();
    } else
        qFatal("Error: Protected method QSoundEffect::senderSignalIndex called without a directly constructed type");
}

// Derived class protected handler implementation
int QSoundEffect_Receivers(const QSoundEffect* self, const char* signal) {
    if (auto* vqsoundeffect = const_cast<VirtualQSoundEffect*>(dynamic_cast<const VirtualQSoundEffect*>(self))) {
        return vqsoundeffect->VirtualQSoundEffect::receivers(signal);
    } else
        qFatal("Error: Protected method QSoundEffect::receivers called without a directly constructed type");
}

// Derived class protected handler implementation
bool QSoundEffect_IsSignalConnected(const QSoundEffect* self, const QMetaMethod* signal) {
    if (auto* vqsoundeffect = const_cast<VirtualQSoundEffect*>(dynamic_cast<const VirtualQSoundEffect*>(self))) {
        return vqsoundeffect->VirtualQSoundEffect::isSignalConnected(*signal);
    } else
        qFatal("Error: Protected method QSoundEffect::isSignalConnected called without a directly constructed type");
}

void QSoundEffect_Delete(QSoundEffect* self) {
    delete self;
}
