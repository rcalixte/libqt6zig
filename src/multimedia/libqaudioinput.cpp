#include <QAudioDevice>
#include <QAudioInput>
#include <QChildEvent>
#include <QEvent>
#include <QMetaMethod>
#include <QMetaObject>
#include <QObject>
#include <QString>
#include <QTimerEvent>
#include <qaudioinput.h>
#include "libqaudioinput.h"
#include "libqaudioinput.hxx"

QAudioInput* QAudioInput_new() {
    return new VirtualQAudioInput();
}

QAudioInput* QAudioInput_new2(const QAudioDevice* deviceInfo) {
    return new VirtualQAudioInput(*deviceInfo);
}

QAudioInput* QAudioInput_new3(QObject* parent) {
    return new VirtualQAudioInput(parent);
}

QAudioInput* QAudioInput_new4(const QAudioDevice* deviceInfo, QObject* parent) {
    return new VirtualQAudioInput(*deviceInfo, parent);
}

QMetaObject* QAudioInput_MetaObject(const QAudioInput* self) {
    return (QMetaObject*)self->metaObject();
}

void* QAudioInput_Metacast(QAudioInput* self, const char* param1) {
    return self->qt_metacast(param1);
}

int QAudioInput_Metacall(QAudioInput* self, int param1, int param2, void** param3) {
    return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

libqt_string QAudioInput_Tr(const char* s) {
    auto _ret = QAudioInput::tr(s);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

QAudioDevice* QAudioInput_Device(const QAudioInput* self) {
    return new QAudioDevice(self->device());
}

float QAudioInput_Volume(const QAudioInput* self) {
    return self->volume();
}

bool QAudioInput_IsMuted(const QAudioInput* self) {
    return self->isMuted();
}

void QAudioInput_SetDevice(QAudioInput* self, const QAudioDevice* device) {
    self->setDevice(*device);
}

void QAudioInput_SetVolume(QAudioInput* self, float volume) {
    self->setVolume(static_cast<float>(volume));
}

void QAudioInput_SetMuted(QAudioInput* self, bool muted) {
    self->setMuted(muted);
}

void QAudioInput_DeviceChanged(QAudioInput* self) {
    self->deviceChanged();
}

void QAudioInput_Connect_DeviceChanged(QAudioInput* self, intptr_t slot) {
    void (*slotFunc)(QAudioInput*) = reinterpret_cast<void (*)(QAudioInput*)>(slot);
    QAudioInput::connect(self,
                         static_cast<void (QAudioInput::*)()>(&QAudioInput::deviceChanged),
                         [self, slotFunc]() {
                             slotFunc(self);
                         });
}

void QAudioInput_VolumeChanged(QAudioInput* self, float volume) {
    self->volumeChanged(static_cast<float>(volume));
}

void QAudioInput_Connect_VolumeChanged(QAudioInput* self, intptr_t slot) {
    void (*slotFunc)(QAudioInput*, float) = reinterpret_cast<void (*)(QAudioInput*, float)>(slot);
    QAudioInput::connect(self,
                         static_cast<void (QAudioInput::*)(float)>(&QAudioInput::volumeChanged),
                         [self, slotFunc](float volume) {
                             float sigval1 = volume;
                             slotFunc(self, sigval1);
                         });
}

void QAudioInput_MutedChanged(QAudioInput* self, bool muted) {
    self->mutedChanged(muted);
}

void QAudioInput_Connect_MutedChanged(QAudioInput* self, intptr_t slot) {
    void (*slotFunc)(QAudioInput*, bool) = reinterpret_cast<void (*)(QAudioInput*, bool)>(slot);
    QAudioInput::connect(self,
                         static_cast<void (QAudioInput::*)(bool)>(&QAudioInput::mutedChanged),
                         [self, slotFunc](bool muted) {
                             bool sigval1 = muted;
                             slotFunc(self, sigval1);
                         });
}

libqt_string QAudioInput_Tr2(const char* s, const char* c) {
    auto _ret = QAudioInput::tr(s, c);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string QAudioInput_Tr3(const char* s, const char* c, int n) {
    auto _ret = QAudioInput::tr(s, c, static_cast<int>(n));
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
QMetaObject* QAudioInput_SuperMetaObject(const QAudioInput* self) {
    return (QMetaObject*)self->QAudioInput::metaObject();
}

// Auxiliary method to allow providing re-implementation
void QAudioInput_OnMetaObject(QAudioInput* self, intptr_t slot) {
    if (auto* vqaudioinput = const_cast<VirtualQAudioInput*>(dynamic_cast<const VirtualQAudioInput*>(self)))
        vqaudioinput->qaudioinput_metaobject_callback = reinterpret_cast<VirtualQAudioInput::QAudioInput_MetaObject_Callback>(slot);
}

// Base class handler implementation
void* QAudioInput_SuperMetacast(QAudioInput* self, const char* param1) {
    return self->QAudioInput::qt_metacast(param1);
}

// Auxiliary method to allow providing re-implementation
void QAudioInput_OnMetacast(QAudioInput* self, intptr_t slot) {
    if (auto* vqaudioinput = dynamic_cast<VirtualQAudioInput*>(self))
        vqaudioinput->qaudioinput_metacast_callback = reinterpret_cast<VirtualQAudioInput::QAudioInput_Metacast_Callback>(slot);
}

// Base class handler implementation
int QAudioInput_SuperMetacall(QAudioInput* self, int param1, int param2, void** param3) {
    return self->QAudioInput::qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

// Auxiliary method to allow providing re-implementation
void QAudioInput_OnMetacall(QAudioInput* self, intptr_t slot) {
    if (auto* vqaudioinput = dynamic_cast<VirtualQAudioInput*>(self))
        vqaudioinput->qaudioinput_metacall_callback = reinterpret_cast<VirtualQAudioInput::QAudioInput_Metacall_Callback>(slot);
}

// Derived class handler implementation
bool QAudioInput_Event(QAudioInput* self, QEvent* event) {
    return self->event(event);
}

// Base class handler implementation
bool QAudioInput_SuperEvent(QAudioInput* self, QEvent* event) {
    return self->QAudioInput::event(event);
}

// Auxiliary method to allow providing re-implementation
void QAudioInput_OnEvent(QAudioInput* self, intptr_t slot) {
    if (auto* vqaudioinput = dynamic_cast<VirtualQAudioInput*>(self))
        vqaudioinput->qaudioinput_event_callback = reinterpret_cast<VirtualQAudioInput::QAudioInput_Event_Callback>(slot);
}

// Derived class handler implementation
bool QAudioInput_EventFilter(QAudioInput* self, QObject* watched, QEvent* event) {
    return self->eventFilter(watched, event);
}

// Base class handler implementation
bool QAudioInput_SuperEventFilter(QAudioInput* self, QObject* watched, QEvent* event) {
    return self->QAudioInput::eventFilter(watched, event);
}

// Auxiliary method to allow providing re-implementation
void QAudioInput_OnEventFilter(QAudioInput* self, intptr_t slot) {
    if (auto* vqaudioinput = dynamic_cast<VirtualQAudioInput*>(self))
        vqaudioinput->qaudioinput_eventfilter_callback = reinterpret_cast<VirtualQAudioInput::QAudioInput_EventFilter_Callback>(slot);
}

// Derived class handler implementation
void QAudioInput_TimerEvent(QAudioInput* self, QTimerEvent* event) {
    auto* vqaudioinput = dynamic_cast<VirtualQAudioInput*>(self);
    if (vqaudioinput) {
        vqaudioinput->timerEvent(event);
    } else {
        qFatal("Error: Protected virtual method QAudioInput::timerEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QAudioInput_SuperTimerEvent(QAudioInput* self, QTimerEvent* event) {
    if (auto* vqaudioinput = dynamic_cast<VirtualQAudioInput*>(self)) {
        vqaudioinput->QAudioInput::timerEvent(event);
    } else
        qFatal("Error: Protected virtual method QAudioInput::timerEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QAudioInput_OnTimerEvent(QAudioInput* self, intptr_t slot) {
    if (auto* vqaudioinput = dynamic_cast<VirtualQAudioInput*>(self))
        vqaudioinput->qaudioinput_timerevent_callback = reinterpret_cast<VirtualQAudioInput::QAudioInput_TimerEvent_Callback>(slot);
}

// Derived class handler implementation
void QAudioInput_ChildEvent(QAudioInput* self, QChildEvent* event) {
    auto* vqaudioinput = dynamic_cast<VirtualQAudioInput*>(self);
    if (vqaudioinput) {
        vqaudioinput->childEvent(event);
    } else {
        qFatal("Error: Protected virtual method QAudioInput::childEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QAudioInput_SuperChildEvent(QAudioInput* self, QChildEvent* event) {
    if (auto* vqaudioinput = dynamic_cast<VirtualQAudioInput*>(self)) {
        vqaudioinput->QAudioInput::childEvent(event);
    } else
        qFatal("Error: Protected virtual method QAudioInput::childEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QAudioInput_OnChildEvent(QAudioInput* self, intptr_t slot) {
    if (auto* vqaudioinput = dynamic_cast<VirtualQAudioInput*>(self))
        vqaudioinput->qaudioinput_childevent_callback = reinterpret_cast<VirtualQAudioInput::QAudioInput_ChildEvent_Callback>(slot);
}

// Derived class handler implementation
void QAudioInput_CustomEvent(QAudioInput* self, QEvent* event) {
    auto* vqaudioinput = dynamic_cast<VirtualQAudioInput*>(self);
    if (vqaudioinput) {
        vqaudioinput->customEvent(event);
    } else {
        qFatal("Error: Protected virtual method QAudioInput::customEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QAudioInput_SuperCustomEvent(QAudioInput* self, QEvent* event) {
    if (auto* vqaudioinput = dynamic_cast<VirtualQAudioInput*>(self)) {
        vqaudioinput->QAudioInput::customEvent(event);
    } else
        qFatal("Error: Protected virtual method QAudioInput::customEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QAudioInput_OnCustomEvent(QAudioInput* self, intptr_t slot) {
    if (auto* vqaudioinput = dynamic_cast<VirtualQAudioInput*>(self))
        vqaudioinput->qaudioinput_customevent_callback = reinterpret_cast<VirtualQAudioInput::QAudioInput_CustomEvent_Callback>(slot);
}

// Derived class handler implementation
void QAudioInput_ConnectNotify(QAudioInput* self, const QMetaMethod* signal) {
    auto* vqaudioinput = dynamic_cast<VirtualQAudioInput*>(self);
    if (vqaudioinput) {
        vqaudioinput->connectNotify(*signal);
    } else {
        qFatal("Error: Protected virtual method QAudioInput::connectNotify called without a directly constructed type");
    }
}

// Base class handler implementation
void QAudioInput_SuperConnectNotify(QAudioInput* self, const QMetaMethod* signal) {
    if (auto* vqaudioinput = dynamic_cast<VirtualQAudioInput*>(self)) {
        vqaudioinput->QAudioInput::connectNotify(*signal);
    } else
        qFatal("Error: Protected virtual method QAudioInput::connectNotify called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QAudioInput_OnConnectNotify(QAudioInput* self, intptr_t slot) {
    if (auto* vqaudioinput = dynamic_cast<VirtualQAudioInput*>(self))
        vqaudioinput->qaudioinput_connectnotify_callback = reinterpret_cast<VirtualQAudioInput::QAudioInput_ConnectNotify_Callback>(slot);
}

// Derived class handler implementation
void QAudioInput_DisconnectNotify(QAudioInput* self, const QMetaMethod* signal) {
    auto* vqaudioinput = dynamic_cast<VirtualQAudioInput*>(self);
    if (vqaudioinput) {
        vqaudioinput->disconnectNotify(*signal);
    } else {
        qFatal("Error: Protected virtual method QAudioInput::disconnectNotify called without a directly constructed type");
    }
}

// Base class handler implementation
void QAudioInput_SuperDisconnectNotify(QAudioInput* self, const QMetaMethod* signal) {
    if (auto* vqaudioinput = dynamic_cast<VirtualQAudioInput*>(self)) {
        vqaudioinput->QAudioInput::disconnectNotify(*signal);
    } else
        qFatal("Error: Protected virtual method QAudioInput::disconnectNotify called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QAudioInput_OnDisconnectNotify(QAudioInput* self, intptr_t slot) {
    if (auto* vqaudioinput = dynamic_cast<VirtualQAudioInput*>(self))
        vqaudioinput->qaudioinput_disconnectnotify_callback = reinterpret_cast<VirtualQAudioInput::QAudioInput_DisconnectNotify_Callback>(slot);
}

// Derived class protected handler implementation
QObject* QAudioInput_Sender(const QAudioInput* self) {
    if (auto* vqaudioinput = const_cast<VirtualQAudioInput*>(dynamic_cast<const VirtualQAudioInput*>(self))) {
        return vqaudioinput->VirtualQAudioInput::sender();
    } else
        qFatal("Error: Protected method QAudioInput::sender called without a directly constructed type");
}

// Derived class protected handler implementation
int QAudioInput_SenderSignalIndex(const QAudioInput* self) {
    if (auto* vqaudioinput = const_cast<VirtualQAudioInput*>(dynamic_cast<const VirtualQAudioInput*>(self))) {
        return vqaudioinput->VirtualQAudioInput::senderSignalIndex();
    } else
        qFatal("Error: Protected method QAudioInput::senderSignalIndex called without a directly constructed type");
}

// Derived class protected handler implementation
int QAudioInput_Receivers(const QAudioInput* self, const char* signal) {
    if (auto* vqaudioinput = const_cast<VirtualQAudioInput*>(dynamic_cast<const VirtualQAudioInput*>(self))) {
        return vqaudioinput->VirtualQAudioInput::receivers(signal);
    } else
        qFatal("Error: Protected method QAudioInput::receivers called without a directly constructed type");
}

// Derived class protected handler implementation
bool QAudioInput_IsSignalConnected(const QAudioInput* self, const QMetaMethod* signal) {
    if (auto* vqaudioinput = const_cast<VirtualQAudioInput*>(dynamic_cast<const VirtualQAudioInput*>(self))) {
        return vqaudioinput->VirtualQAudioInput::isSignalConnected(*signal);
    } else
        qFatal("Error: Protected method QAudioInput::isSignalConnected called without a directly constructed type");
}

void QAudioInput_Delete(QAudioInput* self) {
    delete self;
}
