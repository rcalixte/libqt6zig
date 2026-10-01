#include <QAudioDevice>
#include <QAudioOutput>
#include <QChildEvent>
#include <QEvent>
#include <QMetaMethod>
#include <QMetaObject>
#include <QObject>
#include <QString>
#include <QTimerEvent>
#include <qaudiooutput.h>
#include "libqaudiooutput.h"
#include "libqaudiooutput.hxx"

QAudioOutput* QAudioOutput_new() {
    return new VirtualQAudioOutput();
}

QAudioOutput* QAudioOutput_new2(const QAudioDevice* device) {
    return new VirtualQAudioOutput(*device);
}

QAudioOutput* QAudioOutput_new3(QObject* parent) {
    return new VirtualQAudioOutput(parent);
}

QAudioOutput* QAudioOutput_new4(const QAudioDevice* device, QObject* parent) {
    return new VirtualQAudioOutput(*device, parent);
}

QMetaObject* QAudioOutput_MetaObject(const QAudioOutput* self) {
    return (QMetaObject*)self->metaObject();
}

void* QAudioOutput_Metacast(QAudioOutput* self, const char* param1) {
    return self->qt_metacast(param1);
}

int QAudioOutput_Metacall(QAudioOutput* self, int param1, int param2, void** param3) {
    return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

libqt_string QAudioOutput_Tr(const char* s) {
    auto _ret = QAudioOutput::tr(s);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

QAudioDevice* QAudioOutput_Device(const QAudioOutput* self) {
    return new QAudioDevice(self->device());
}

float QAudioOutput_Volume(const QAudioOutput* self) {
    return self->volume();
}

bool QAudioOutput_IsMuted(const QAudioOutput* self) {
    return self->isMuted();
}

void QAudioOutput_SetDevice(QAudioOutput* self, const QAudioDevice* device) {
    self->setDevice(*device);
}

void QAudioOutput_SetVolume(QAudioOutput* self, float volume) {
    self->setVolume(static_cast<float>(volume));
}

void QAudioOutput_SetMuted(QAudioOutput* self, bool muted) {
    self->setMuted(muted);
}

void QAudioOutput_DeviceChanged(QAudioOutput* self) {
    self->deviceChanged();
}

void QAudioOutput_Connect_DeviceChanged(QAudioOutput* self, intptr_t slot) {
    void (*slotFunc)(QAudioOutput*) = reinterpret_cast<void (*)(QAudioOutput*)>(slot);
    QAudioOutput::connect(self,
                          static_cast<void (QAudioOutput::*)()>(&QAudioOutput::deviceChanged),
                          [self, slotFunc]() {
                              slotFunc(self);
                          });
}

void QAudioOutput_VolumeChanged(QAudioOutput* self, float volume) {
    self->volumeChanged(static_cast<float>(volume));
}

void QAudioOutput_Connect_VolumeChanged(QAudioOutput* self, intptr_t slot) {
    void (*slotFunc)(QAudioOutput*, float) = reinterpret_cast<void (*)(QAudioOutput*, float)>(slot);
    QAudioOutput::connect(self,
                          static_cast<void (QAudioOutput::*)(float)>(&QAudioOutput::volumeChanged),
                          [self, slotFunc](float volume) {
                              float sigval1 = volume;
                              slotFunc(self, sigval1);
                          });
}

void QAudioOutput_MutedChanged(QAudioOutput* self, bool muted) {
    self->mutedChanged(muted);
}

void QAudioOutput_Connect_MutedChanged(QAudioOutput* self, intptr_t slot) {
    void (*slotFunc)(QAudioOutput*, bool) = reinterpret_cast<void (*)(QAudioOutput*, bool)>(slot);
    QAudioOutput::connect(self,
                          static_cast<void (QAudioOutput::*)(bool)>(&QAudioOutput::mutedChanged),
                          [self, slotFunc](bool muted) {
                              bool sigval1 = muted;
                              slotFunc(self, sigval1);
                          });
}

libqt_string QAudioOutput_Tr2(const char* s, const char* c) {
    auto _ret = QAudioOutput::tr(s, c);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string QAudioOutput_Tr3(const char* s, const char* c, int n) {
    auto _ret = QAudioOutput::tr(s, c, static_cast<int>(n));
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
QMetaObject* QAudioOutput_SuperMetaObject(const QAudioOutput* self) {
    return (QMetaObject*)self->QAudioOutput::metaObject();
}

// Auxiliary method to allow providing re-implementation
void QAudioOutput_OnMetaObject(QAudioOutput* self, intptr_t slot) {
    if (auto* vqaudiooutput = const_cast<VirtualQAudioOutput*>(dynamic_cast<const VirtualQAudioOutput*>(self)))
        vqaudiooutput->qaudiooutput_metaobject_callback = reinterpret_cast<VirtualQAudioOutput::QAudioOutput_MetaObject_Callback>(slot);
}

// Base class handler implementation
void* QAudioOutput_SuperMetacast(QAudioOutput* self, const char* param1) {
    return self->QAudioOutput::qt_metacast(param1);
}

// Auxiliary method to allow providing re-implementation
void QAudioOutput_OnMetacast(QAudioOutput* self, intptr_t slot) {
    if (auto* vqaudiooutput = dynamic_cast<VirtualQAudioOutput*>(self))
        vqaudiooutput->qaudiooutput_metacast_callback = reinterpret_cast<VirtualQAudioOutput::QAudioOutput_Metacast_Callback>(slot);
}

// Base class handler implementation
int QAudioOutput_SuperMetacall(QAudioOutput* self, int param1, int param2, void** param3) {
    return self->QAudioOutput::qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

// Auxiliary method to allow providing re-implementation
void QAudioOutput_OnMetacall(QAudioOutput* self, intptr_t slot) {
    if (auto* vqaudiooutput = dynamic_cast<VirtualQAudioOutput*>(self))
        vqaudiooutput->qaudiooutput_metacall_callback = reinterpret_cast<VirtualQAudioOutput::QAudioOutput_Metacall_Callback>(slot);
}

// Derived class handler implementation
bool QAudioOutput_Event(QAudioOutput* self, QEvent* event) {
    return self->event(event);
}

// Base class handler implementation
bool QAudioOutput_SuperEvent(QAudioOutput* self, QEvent* event) {
    return self->QAudioOutput::event(event);
}

// Auxiliary method to allow providing re-implementation
void QAudioOutput_OnEvent(QAudioOutput* self, intptr_t slot) {
    if (auto* vqaudiooutput = dynamic_cast<VirtualQAudioOutput*>(self))
        vqaudiooutput->qaudiooutput_event_callback = reinterpret_cast<VirtualQAudioOutput::QAudioOutput_Event_Callback>(slot);
}

// Derived class handler implementation
bool QAudioOutput_EventFilter(QAudioOutput* self, QObject* watched, QEvent* event) {
    return self->eventFilter(watched, event);
}

// Base class handler implementation
bool QAudioOutput_SuperEventFilter(QAudioOutput* self, QObject* watched, QEvent* event) {
    return self->QAudioOutput::eventFilter(watched, event);
}

// Auxiliary method to allow providing re-implementation
void QAudioOutput_OnEventFilter(QAudioOutput* self, intptr_t slot) {
    if (auto* vqaudiooutput = dynamic_cast<VirtualQAudioOutput*>(self))
        vqaudiooutput->qaudiooutput_eventfilter_callback = reinterpret_cast<VirtualQAudioOutput::QAudioOutput_EventFilter_Callback>(slot);
}

// Derived class handler implementation
void QAudioOutput_TimerEvent(QAudioOutput* self, QTimerEvent* event) {
    auto* vqaudiooutput = dynamic_cast<VirtualQAudioOutput*>(self);
    if (vqaudiooutput) {
        vqaudiooutput->timerEvent(event);
    } else {
        qFatal("Error: Protected virtual method QAudioOutput::timerEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QAudioOutput_SuperTimerEvent(QAudioOutput* self, QTimerEvent* event) {
    if (auto* vqaudiooutput = dynamic_cast<VirtualQAudioOutput*>(self)) {
        vqaudiooutput->QAudioOutput::timerEvent(event);
    } else
        qFatal("Error: Protected virtual method QAudioOutput::timerEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QAudioOutput_OnTimerEvent(QAudioOutput* self, intptr_t slot) {
    if (auto* vqaudiooutput = dynamic_cast<VirtualQAudioOutput*>(self))
        vqaudiooutput->qaudiooutput_timerevent_callback = reinterpret_cast<VirtualQAudioOutput::QAudioOutput_TimerEvent_Callback>(slot);
}

// Derived class handler implementation
void QAudioOutput_ChildEvent(QAudioOutput* self, QChildEvent* event) {
    auto* vqaudiooutput = dynamic_cast<VirtualQAudioOutput*>(self);
    if (vqaudiooutput) {
        vqaudiooutput->childEvent(event);
    } else {
        qFatal("Error: Protected virtual method QAudioOutput::childEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QAudioOutput_SuperChildEvent(QAudioOutput* self, QChildEvent* event) {
    if (auto* vqaudiooutput = dynamic_cast<VirtualQAudioOutput*>(self)) {
        vqaudiooutput->QAudioOutput::childEvent(event);
    } else
        qFatal("Error: Protected virtual method QAudioOutput::childEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QAudioOutput_OnChildEvent(QAudioOutput* self, intptr_t slot) {
    if (auto* vqaudiooutput = dynamic_cast<VirtualQAudioOutput*>(self))
        vqaudiooutput->qaudiooutput_childevent_callback = reinterpret_cast<VirtualQAudioOutput::QAudioOutput_ChildEvent_Callback>(slot);
}

// Derived class handler implementation
void QAudioOutput_CustomEvent(QAudioOutput* self, QEvent* event) {
    auto* vqaudiooutput = dynamic_cast<VirtualQAudioOutput*>(self);
    if (vqaudiooutput) {
        vqaudiooutput->customEvent(event);
    } else {
        qFatal("Error: Protected virtual method QAudioOutput::customEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QAudioOutput_SuperCustomEvent(QAudioOutput* self, QEvent* event) {
    if (auto* vqaudiooutput = dynamic_cast<VirtualQAudioOutput*>(self)) {
        vqaudiooutput->QAudioOutput::customEvent(event);
    } else
        qFatal("Error: Protected virtual method QAudioOutput::customEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QAudioOutput_OnCustomEvent(QAudioOutput* self, intptr_t slot) {
    if (auto* vqaudiooutput = dynamic_cast<VirtualQAudioOutput*>(self))
        vqaudiooutput->qaudiooutput_customevent_callback = reinterpret_cast<VirtualQAudioOutput::QAudioOutput_CustomEvent_Callback>(slot);
}

// Derived class handler implementation
void QAudioOutput_ConnectNotify(QAudioOutput* self, const QMetaMethod* signal) {
    auto* vqaudiooutput = dynamic_cast<VirtualQAudioOutput*>(self);
    if (vqaudiooutput) {
        vqaudiooutput->connectNotify(*signal);
    } else {
        qFatal("Error: Protected virtual method QAudioOutput::connectNotify called without a directly constructed type");
    }
}

// Base class handler implementation
void QAudioOutput_SuperConnectNotify(QAudioOutput* self, const QMetaMethod* signal) {
    if (auto* vqaudiooutput = dynamic_cast<VirtualQAudioOutput*>(self)) {
        vqaudiooutput->QAudioOutput::connectNotify(*signal);
    } else
        qFatal("Error: Protected virtual method QAudioOutput::connectNotify called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QAudioOutput_OnConnectNotify(QAudioOutput* self, intptr_t slot) {
    if (auto* vqaudiooutput = dynamic_cast<VirtualQAudioOutput*>(self))
        vqaudiooutput->qaudiooutput_connectnotify_callback = reinterpret_cast<VirtualQAudioOutput::QAudioOutput_ConnectNotify_Callback>(slot);
}

// Derived class handler implementation
void QAudioOutput_DisconnectNotify(QAudioOutput* self, const QMetaMethod* signal) {
    auto* vqaudiooutput = dynamic_cast<VirtualQAudioOutput*>(self);
    if (vqaudiooutput) {
        vqaudiooutput->disconnectNotify(*signal);
    } else {
        qFatal("Error: Protected virtual method QAudioOutput::disconnectNotify called without a directly constructed type");
    }
}

// Base class handler implementation
void QAudioOutput_SuperDisconnectNotify(QAudioOutput* self, const QMetaMethod* signal) {
    if (auto* vqaudiooutput = dynamic_cast<VirtualQAudioOutput*>(self)) {
        vqaudiooutput->QAudioOutput::disconnectNotify(*signal);
    } else
        qFatal("Error: Protected virtual method QAudioOutput::disconnectNotify called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QAudioOutput_OnDisconnectNotify(QAudioOutput* self, intptr_t slot) {
    if (auto* vqaudiooutput = dynamic_cast<VirtualQAudioOutput*>(self))
        vqaudiooutput->qaudiooutput_disconnectnotify_callback = reinterpret_cast<VirtualQAudioOutput::QAudioOutput_DisconnectNotify_Callback>(slot);
}

// Derived class protected handler implementation
QObject* QAudioOutput_Sender(const QAudioOutput* self) {
    if (auto* vqaudiooutput = const_cast<VirtualQAudioOutput*>(dynamic_cast<const VirtualQAudioOutput*>(self))) {
        return vqaudiooutput->VirtualQAudioOutput::sender();
    } else
        qFatal("Error: Protected method QAudioOutput::sender called without a directly constructed type");
}

// Derived class protected handler implementation
int QAudioOutput_SenderSignalIndex(const QAudioOutput* self) {
    if (auto* vqaudiooutput = const_cast<VirtualQAudioOutput*>(dynamic_cast<const VirtualQAudioOutput*>(self))) {
        return vqaudiooutput->VirtualQAudioOutput::senderSignalIndex();
    } else
        qFatal("Error: Protected method QAudioOutput::senderSignalIndex called without a directly constructed type");
}

// Derived class protected handler implementation
int QAudioOutput_Receivers(const QAudioOutput* self, const char* signal) {
    if (auto* vqaudiooutput = const_cast<VirtualQAudioOutput*>(dynamic_cast<const VirtualQAudioOutput*>(self))) {
        return vqaudiooutput->VirtualQAudioOutput::receivers(signal);
    } else
        qFatal("Error: Protected method QAudioOutput::receivers called without a directly constructed type");
}

// Derived class protected handler implementation
bool QAudioOutput_IsSignalConnected(const QAudioOutput* self, const QMetaMethod* signal) {
    if (auto* vqaudiooutput = const_cast<VirtualQAudioOutput*>(dynamic_cast<const VirtualQAudioOutput*>(self))) {
        return vqaudiooutput->VirtualQAudioOutput::isSignalConnected(*signal);
    } else
        qFatal("Error: Protected method QAudioOutput::isSignalConnected called without a directly constructed type");
}

void QAudioOutput_Delete(QAudioOutput* self) {
    delete self;
}
