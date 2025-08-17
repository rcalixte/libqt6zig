#include <QAmbientSound>
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
    auto* vqambientsound = dynamic_cast<VirtualQAmbientSound*>(self);
    if (vqambientsound && vqambientsound->isVirtualQAmbientSound) {
        return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return ((VirtualQAmbientSound*)self)->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

// Subclass method to allow providing a virtual method re-implementation
void QAmbientSound_OnMetacall(QAmbientSound* self, intptr_t slot) {
    auto* vqambientsound = dynamic_cast<VirtualQAmbientSound*>(self);
    if (vqambientsound && vqambientsound->isVirtualQAmbientSound) {
        vqambientsound->setQAmbientSound_Metacall_Callback(reinterpret_cast<VirtualQAmbientSound::QAmbientSound_Metacall_Callback>(slot));
    }
}

// Virtual base class handler implementation
int QAmbientSound_QBaseMetacall(QAmbientSound* self, int param1, int param2, void** param3) {
    auto* vqambientsound = dynamic_cast<VirtualQAmbientSound*>(self);
    if (vqambientsound && vqambientsound->isVirtualQAmbientSound) {
        vqambientsound->setQAmbientSound_Metacall_IsBase(true);
        return vqambientsound->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return ((VirtualQAmbientSound*)self)->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

libqt_string QAmbientSound_Tr(const char* s) {
    QString _ret = QAmbientSound::tr(s);
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
    QAmbientSound::connect(self, &QAmbientSound::sourceChanged, [self, slotFunc]() {
        slotFunc(self);
    });
}

void QAmbientSound_LoopsChanged(QAmbientSound* self) {
    self->loopsChanged();
}

void QAmbientSound_Connect_LoopsChanged(QAmbientSound* self, intptr_t slot) {
    void (*slotFunc)(QAmbientSound*) = reinterpret_cast<void (*)(QAmbientSound*)>(slot);
    QAmbientSound::connect(self, &QAmbientSound::loopsChanged, [self, slotFunc]() {
        slotFunc(self);
    });
}

void QAmbientSound_AutoPlayChanged(QAmbientSound* self) {
    self->autoPlayChanged();
}

void QAmbientSound_Connect_AutoPlayChanged(QAmbientSound* self, intptr_t slot) {
    void (*slotFunc)(QAmbientSound*) = reinterpret_cast<void (*)(QAmbientSound*)>(slot);
    QAmbientSound::connect(self, &QAmbientSound::autoPlayChanged, [self, slotFunc]() {
        slotFunc(self);
    });
}

void QAmbientSound_VolumeChanged(QAmbientSound* self) {
    self->volumeChanged();
}

void QAmbientSound_Connect_VolumeChanged(QAmbientSound* self, intptr_t slot) {
    void (*slotFunc)(QAmbientSound*) = reinterpret_cast<void (*)(QAmbientSound*)>(slot);
    QAmbientSound::connect(self, &QAmbientSound::volumeChanged, [self, slotFunc]() {
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
    QString _ret = QAmbientSound::tr(s, c);
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
    QString _ret = QAmbientSound::tr(s, c, static_cast<int>(n));
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

// Derived class handler implementation
bool QAmbientSound_Event(QAmbientSound* self, QEvent* event) {
    auto* vqambientsound = dynamic_cast<VirtualQAmbientSound*>(self);
    if (vqambientsound && vqambientsound->isVirtualQAmbientSound) {
        return vqambientsound->event(event);
    } else {
        return self->QAmbientSound::event(event);
    }
}

// Base class handler implementation
bool QAmbientSound_QBaseEvent(QAmbientSound* self, QEvent* event) {
    auto* vqambientsound = dynamic_cast<VirtualQAmbientSound*>(self);
    if (vqambientsound && vqambientsound->isVirtualQAmbientSound) {
        vqambientsound->setQAmbientSound_Event_IsBase(true);
        return vqambientsound->event(event);
    } else {
        return self->QAmbientSound::event(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QAmbientSound_OnEvent(QAmbientSound* self, intptr_t slot) {
    auto* vqambientsound = dynamic_cast<VirtualQAmbientSound*>(self);
    if (vqambientsound && vqambientsound->isVirtualQAmbientSound) {
        vqambientsound->setQAmbientSound_Event_Callback(reinterpret_cast<VirtualQAmbientSound::QAmbientSound_Event_Callback>(slot));
    }
}

// Derived class handler implementation
bool QAmbientSound_EventFilter(QAmbientSound* self, QObject* watched, QEvent* event) {
    auto* vqambientsound = dynamic_cast<VirtualQAmbientSound*>(self);
    if (vqambientsound && vqambientsound->isVirtualQAmbientSound) {
        return vqambientsound->eventFilter(watched, event);
    } else {
        return self->QAmbientSound::eventFilter(watched, event);
    }
}

// Base class handler implementation
bool QAmbientSound_QBaseEventFilter(QAmbientSound* self, QObject* watched, QEvent* event) {
    auto* vqambientsound = dynamic_cast<VirtualQAmbientSound*>(self);
    if (vqambientsound && vqambientsound->isVirtualQAmbientSound) {
        vqambientsound->setQAmbientSound_EventFilter_IsBase(true);
        return vqambientsound->eventFilter(watched, event);
    } else {
        return self->QAmbientSound::eventFilter(watched, event);
    }
}

// Auxiliary method to allow providing re-implementation
void QAmbientSound_OnEventFilter(QAmbientSound* self, intptr_t slot) {
    auto* vqambientsound = dynamic_cast<VirtualQAmbientSound*>(self);
    if (vqambientsound && vqambientsound->isVirtualQAmbientSound) {
        vqambientsound->setQAmbientSound_EventFilter_Callback(reinterpret_cast<VirtualQAmbientSound::QAmbientSound_EventFilter_Callback>(slot));
    }
}

// Derived class handler implementation
void QAmbientSound_TimerEvent(QAmbientSound* self, QTimerEvent* event) {
    auto* vqambientsound = dynamic_cast<VirtualQAmbientSound*>(self);
    if (vqambientsound && vqambientsound->isVirtualQAmbientSound) {
        vqambientsound->timerEvent(event);
    } else {
        ((VirtualQAmbientSound*)self)->timerEvent(event);
    }
}

// Base class handler implementation
void QAmbientSound_QBaseTimerEvent(QAmbientSound* self, QTimerEvent* event) {
    auto* vqambientsound = dynamic_cast<VirtualQAmbientSound*>(self);
    if (vqambientsound && vqambientsound->isVirtualQAmbientSound) {
        vqambientsound->setQAmbientSound_TimerEvent_IsBase(true);
        vqambientsound->timerEvent(event);
    } else {
        ((VirtualQAmbientSound*)self)->timerEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QAmbientSound_OnTimerEvent(QAmbientSound* self, intptr_t slot) {
    auto* vqambientsound = dynamic_cast<VirtualQAmbientSound*>(self);
    if (vqambientsound && vqambientsound->isVirtualQAmbientSound) {
        vqambientsound->setQAmbientSound_TimerEvent_Callback(reinterpret_cast<VirtualQAmbientSound::QAmbientSound_TimerEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QAmbientSound_ChildEvent(QAmbientSound* self, QChildEvent* event) {
    auto* vqambientsound = dynamic_cast<VirtualQAmbientSound*>(self);
    if (vqambientsound && vqambientsound->isVirtualQAmbientSound) {
        vqambientsound->childEvent(event);
    } else {
        ((VirtualQAmbientSound*)self)->childEvent(event);
    }
}

// Base class handler implementation
void QAmbientSound_QBaseChildEvent(QAmbientSound* self, QChildEvent* event) {
    auto* vqambientsound = dynamic_cast<VirtualQAmbientSound*>(self);
    if (vqambientsound && vqambientsound->isVirtualQAmbientSound) {
        vqambientsound->setQAmbientSound_ChildEvent_IsBase(true);
        vqambientsound->childEvent(event);
    } else {
        ((VirtualQAmbientSound*)self)->childEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QAmbientSound_OnChildEvent(QAmbientSound* self, intptr_t slot) {
    auto* vqambientsound = dynamic_cast<VirtualQAmbientSound*>(self);
    if (vqambientsound && vqambientsound->isVirtualQAmbientSound) {
        vqambientsound->setQAmbientSound_ChildEvent_Callback(reinterpret_cast<VirtualQAmbientSound::QAmbientSound_ChildEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QAmbientSound_CustomEvent(QAmbientSound* self, QEvent* event) {
    auto* vqambientsound = dynamic_cast<VirtualQAmbientSound*>(self);
    if (vqambientsound && vqambientsound->isVirtualQAmbientSound) {
        vqambientsound->customEvent(event);
    } else {
        ((VirtualQAmbientSound*)self)->customEvent(event);
    }
}

// Base class handler implementation
void QAmbientSound_QBaseCustomEvent(QAmbientSound* self, QEvent* event) {
    auto* vqambientsound = dynamic_cast<VirtualQAmbientSound*>(self);
    if (vqambientsound && vqambientsound->isVirtualQAmbientSound) {
        vqambientsound->setQAmbientSound_CustomEvent_IsBase(true);
        vqambientsound->customEvent(event);
    } else {
        ((VirtualQAmbientSound*)self)->customEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QAmbientSound_OnCustomEvent(QAmbientSound* self, intptr_t slot) {
    auto* vqambientsound = dynamic_cast<VirtualQAmbientSound*>(self);
    if (vqambientsound && vqambientsound->isVirtualQAmbientSound) {
        vqambientsound->setQAmbientSound_CustomEvent_Callback(reinterpret_cast<VirtualQAmbientSound::QAmbientSound_CustomEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QAmbientSound_ConnectNotify(QAmbientSound* self, const QMetaMethod* signal) {
    auto* vqambientsound = dynamic_cast<VirtualQAmbientSound*>(self);
    if (vqambientsound && vqambientsound->isVirtualQAmbientSound) {
        vqambientsound->connectNotify(*signal);
    } else {
        ((VirtualQAmbientSound*)self)->connectNotify(*signal);
    }
}

// Base class handler implementation
void QAmbientSound_QBaseConnectNotify(QAmbientSound* self, const QMetaMethod* signal) {
    auto* vqambientsound = dynamic_cast<VirtualQAmbientSound*>(self);
    if (vqambientsound && vqambientsound->isVirtualQAmbientSound) {
        vqambientsound->setQAmbientSound_ConnectNotify_IsBase(true);
        vqambientsound->connectNotify(*signal);
    } else {
        ((VirtualQAmbientSound*)self)->connectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QAmbientSound_OnConnectNotify(QAmbientSound* self, intptr_t slot) {
    auto* vqambientsound = dynamic_cast<VirtualQAmbientSound*>(self);
    if (vqambientsound && vqambientsound->isVirtualQAmbientSound) {
        vqambientsound->setQAmbientSound_ConnectNotify_Callback(reinterpret_cast<VirtualQAmbientSound::QAmbientSound_ConnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
void QAmbientSound_DisconnectNotify(QAmbientSound* self, const QMetaMethod* signal) {
    auto* vqambientsound = dynamic_cast<VirtualQAmbientSound*>(self);
    if (vqambientsound && vqambientsound->isVirtualQAmbientSound) {
        vqambientsound->disconnectNotify(*signal);
    } else {
        ((VirtualQAmbientSound*)self)->disconnectNotify(*signal);
    }
}

// Base class handler implementation
void QAmbientSound_QBaseDisconnectNotify(QAmbientSound* self, const QMetaMethod* signal) {
    auto* vqambientsound = dynamic_cast<VirtualQAmbientSound*>(self);
    if (vqambientsound && vqambientsound->isVirtualQAmbientSound) {
        vqambientsound->setQAmbientSound_DisconnectNotify_IsBase(true);
        vqambientsound->disconnectNotify(*signal);
    } else {
        ((VirtualQAmbientSound*)self)->disconnectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QAmbientSound_OnDisconnectNotify(QAmbientSound* self, intptr_t slot) {
    auto* vqambientsound = dynamic_cast<VirtualQAmbientSound*>(self);
    if (vqambientsound && vqambientsound->isVirtualQAmbientSound) {
        vqambientsound->setQAmbientSound_DisconnectNotify_Callback(reinterpret_cast<VirtualQAmbientSound::QAmbientSound_DisconnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
QObject* QAmbientSound_Sender(const QAmbientSound* self) {
    auto* vqambientsound = const_cast<VirtualQAmbientSound*>(dynamic_cast<const VirtualQAmbientSound*>(self));
    if (vqambientsound && vqambientsound->isVirtualQAmbientSound) {
        return vqambientsound->sender();
    } else {
        return ((VirtualQAmbientSound*)self)->sender();
    }
}

// Base class handler implementation
QObject* QAmbientSound_QBaseSender(const QAmbientSound* self) {
    auto* vqambientsound = const_cast<VirtualQAmbientSound*>(dynamic_cast<const VirtualQAmbientSound*>(self));
    if (vqambientsound && vqambientsound->isVirtualQAmbientSound) {
        vqambientsound->setQAmbientSound_Sender_IsBase(true);
        return vqambientsound->sender();
    } else {
        return ((VirtualQAmbientSound*)self)->sender();
    }
}

// Auxiliary method to allow providing re-implementation
void QAmbientSound_OnSender(const QAmbientSound* self, intptr_t slot) {
    auto* vqambientsound = const_cast<VirtualQAmbientSound*>(dynamic_cast<const VirtualQAmbientSound*>(self));
    if (vqambientsound && vqambientsound->isVirtualQAmbientSound) {
        vqambientsound->setQAmbientSound_Sender_Callback(reinterpret_cast<VirtualQAmbientSound::QAmbientSound_Sender_Callback>(slot));
    }
}

// Derived class handler implementation
int QAmbientSound_SenderSignalIndex(const QAmbientSound* self) {
    auto* vqambientsound = const_cast<VirtualQAmbientSound*>(dynamic_cast<const VirtualQAmbientSound*>(self));
    if (vqambientsound && vqambientsound->isVirtualQAmbientSound) {
        return vqambientsound->senderSignalIndex();
    } else {
        return ((VirtualQAmbientSound*)self)->senderSignalIndex();
    }
}

// Base class handler implementation
int QAmbientSound_QBaseSenderSignalIndex(const QAmbientSound* self) {
    auto* vqambientsound = const_cast<VirtualQAmbientSound*>(dynamic_cast<const VirtualQAmbientSound*>(self));
    if (vqambientsound && vqambientsound->isVirtualQAmbientSound) {
        vqambientsound->setQAmbientSound_SenderSignalIndex_IsBase(true);
        return vqambientsound->senderSignalIndex();
    } else {
        return ((VirtualQAmbientSound*)self)->senderSignalIndex();
    }
}

// Auxiliary method to allow providing re-implementation
void QAmbientSound_OnSenderSignalIndex(const QAmbientSound* self, intptr_t slot) {
    auto* vqambientsound = const_cast<VirtualQAmbientSound*>(dynamic_cast<const VirtualQAmbientSound*>(self));
    if (vqambientsound && vqambientsound->isVirtualQAmbientSound) {
        vqambientsound->setQAmbientSound_SenderSignalIndex_Callback(reinterpret_cast<VirtualQAmbientSound::QAmbientSound_SenderSignalIndex_Callback>(slot));
    }
}

// Derived class handler implementation
int QAmbientSound_Receivers(const QAmbientSound* self, const char* signal) {
    auto* vqambientsound = const_cast<VirtualQAmbientSound*>(dynamic_cast<const VirtualQAmbientSound*>(self));
    if (vqambientsound && vqambientsound->isVirtualQAmbientSound) {
        return vqambientsound->receivers(signal);
    } else {
        return ((VirtualQAmbientSound*)self)->receivers(signal);
    }
}

// Base class handler implementation
int QAmbientSound_QBaseReceivers(const QAmbientSound* self, const char* signal) {
    auto* vqambientsound = const_cast<VirtualQAmbientSound*>(dynamic_cast<const VirtualQAmbientSound*>(self));
    if (vqambientsound && vqambientsound->isVirtualQAmbientSound) {
        vqambientsound->setQAmbientSound_Receivers_IsBase(true);
        return vqambientsound->receivers(signal);
    } else {
        return ((VirtualQAmbientSound*)self)->receivers(signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QAmbientSound_OnReceivers(const QAmbientSound* self, intptr_t slot) {
    auto* vqambientsound = const_cast<VirtualQAmbientSound*>(dynamic_cast<const VirtualQAmbientSound*>(self));
    if (vqambientsound && vqambientsound->isVirtualQAmbientSound) {
        vqambientsound->setQAmbientSound_Receivers_Callback(reinterpret_cast<VirtualQAmbientSound::QAmbientSound_Receivers_Callback>(slot));
    }
}

// Derived class handler implementation
bool QAmbientSound_IsSignalConnected(const QAmbientSound* self, const QMetaMethod* signal) {
    auto* vqambientsound = const_cast<VirtualQAmbientSound*>(dynamic_cast<const VirtualQAmbientSound*>(self));
    if (vqambientsound && vqambientsound->isVirtualQAmbientSound) {
        return vqambientsound->isSignalConnected(*signal);
    } else {
        return ((VirtualQAmbientSound*)self)->isSignalConnected(*signal);
    }
}

// Base class handler implementation
bool QAmbientSound_QBaseIsSignalConnected(const QAmbientSound* self, const QMetaMethod* signal) {
    auto* vqambientsound = const_cast<VirtualQAmbientSound*>(dynamic_cast<const VirtualQAmbientSound*>(self));
    if (vqambientsound && vqambientsound->isVirtualQAmbientSound) {
        vqambientsound->setQAmbientSound_IsSignalConnected_IsBase(true);
        return vqambientsound->isSignalConnected(*signal);
    } else {
        return ((VirtualQAmbientSound*)self)->isSignalConnected(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QAmbientSound_OnIsSignalConnected(const QAmbientSound* self, intptr_t slot) {
    auto* vqambientsound = const_cast<VirtualQAmbientSound*>(dynamic_cast<const VirtualQAmbientSound*>(self));
    if (vqambientsound && vqambientsound->isVirtualQAmbientSound) {
        vqambientsound->setQAmbientSound_IsSignalConnected_Callback(reinterpret_cast<VirtualQAmbientSound::QAmbientSound_IsSignalConnected_Callback>(slot));
    }
}

void QAmbientSound_Delete(QAmbientSound* self) {
    delete self;
}
