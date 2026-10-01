#include <QAudioDevice>
#include <QAudioFormat>
#include <QAudioSink>
#include <QChildEvent>
#include <QEvent>
#include <QIODevice>
#include <QMetaMethod>
#include <QMetaObject>
#include <QObject>
#include <QString>
#include <QTimerEvent>
#include <qaudiosink.h>
#include "libqaudiosink.h"
#include "libqaudiosink.hxx"

QAudioSink* QAudioSink_new() {
    return new VirtualQAudioSink();
}

QAudioSink* QAudioSink_new2(const QAudioDevice* audioDeviceInfo) {
    return new VirtualQAudioSink(*audioDeviceInfo);
}

QAudioSink* QAudioSink_new3(const QAudioFormat* format) {
    return new VirtualQAudioSink(*format);
}

QAudioSink* QAudioSink_new4(const QAudioFormat* format, QObject* parent) {
    return new VirtualQAudioSink(*format, parent);
}

QAudioSink* QAudioSink_new5(const QAudioDevice* audioDeviceInfo, const QAudioFormat* format) {
    return new VirtualQAudioSink(*audioDeviceInfo, *format);
}

QAudioSink* QAudioSink_new6(const QAudioDevice* audioDeviceInfo, const QAudioFormat* format, QObject* parent) {
    return new VirtualQAudioSink(*audioDeviceInfo, *format, parent);
}

QMetaObject* QAudioSink_MetaObject(const QAudioSink* self) {
    return (QMetaObject*)self->metaObject();
}

void* QAudioSink_Metacast(QAudioSink* self, const char* param1) {
    return self->qt_metacast(param1);
}

int QAudioSink_Metacall(QAudioSink* self, int param1, int param2, void** param3) {
    return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

libqt_string QAudioSink_Tr(const char* s) {
    auto _ret = QAudioSink::tr(s);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

bool QAudioSink_IsNull(const QAudioSink* self) {
    return self->isNull();
}

QAudioFormat* QAudioSink_Format(const QAudioSink* self) {
    return new QAudioFormat(self->format());
}

void QAudioSink_Start(QAudioSink* self, QIODevice* device) {
    self->start(device);
}

QIODevice* QAudioSink_Start2(QAudioSink* self) {
    return self->start();
}

void QAudioSink_Stop(QAudioSink* self) {
    self->stop();
}

void QAudioSink_Reset(QAudioSink* self) {
    self->reset();
}

void QAudioSink_Suspend(QAudioSink* self) {
    self->suspend();
}

void QAudioSink_Resume(QAudioSink* self) {
    self->resume();
}

void QAudioSink_SetBufferSize(QAudioSink* self, ptrdiff_t bytes) {
    self->setBufferSize((qsizetype)(bytes));
}

ptrdiff_t QAudioSink_BufferSize(const QAudioSink* self) {
    return static_cast<ptrdiff_t>(self->bufferSize());
}

ptrdiff_t QAudioSink_BytesFree(const QAudioSink* self) {
    return static_cast<ptrdiff_t>(self->bytesFree());
}

long long QAudioSink_ProcessedUSecs(const QAudioSink* self) {
    return static_cast<long long>(self->processedUSecs());
}

long long QAudioSink_ElapsedUSecs(const QAudioSink* self) {
    return static_cast<long long>(self->elapsedUSecs());
}

int QAudioSink_Error(const QAudioSink* self) {
    return static_cast<int>(self->error());
}

int QAudioSink_State(const QAudioSink* self) {
    return static_cast<int>(self->state());
}

void QAudioSink_SetVolume(QAudioSink* self, double volume) {
    self->setVolume(static_cast<qreal>(volume));
}

double QAudioSink_Volume(const QAudioSink* self) {
    return static_cast<double>(self->volume());
}

void QAudioSink_StateChanged(QAudioSink* self, int state) {
    self->stateChanged(static_cast<QAudio::State>(state));
}

void QAudioSink_Connect_StateChanged(QAudioSink* self, intptr_t slot) {
    void (*slotFunc)(QAudioSink*, int) = reinterpret_cast<void (*)(QAudioSink*, int)>(slot);
    QAudioSink::connect(self,
                        static_cast<void (QAudioSink::*)(QAudio::State)>(&QAudioSink::stateChanged),
                        [self, slotFunc](QAudio::State state) {
                            int sigval1 = static_cast<int>(state);
                            slotFunc(self, sigval1);
                        });
}

libqt_string QAudioSink_Tr2(const char* s, const char* c) {
    auto _ret = QAudioSink::tr(s, c);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string QAudioSink_Tr3(const char* s, const char* c, int n) {
    auto _ret = QAudioSink::tr(s, c, static_cast<int>(n));
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
QMetaObject* QAudioSink_SuperMetaObject(const QAudioSink* self) {
    return (QMetaObject*)self->QAudioSink::metaObject();
}

// Auxiliary method to allow providing re-implementation
void QAudioSink_OnMetaObject(QAudioSink* self, intptr_t slot) {
    if (auto* vqaudiosink = const_cast<VirtualQAudioSink*>(dynamic_cast<const VirtualQAudioSink*>(self)))
        vqaudiosink->qaudiosink_metaobject_callback = reinterpret_cast<VirtualQAudioSink::QAudioSink_MetaObject_Callback>(slot);
}

// Base class handler implementation
void* QAudioSink_SuperMetacast(QAudioSink* self, const char* param1) {
    return self->QAudioSink::qt_metacast(param1);
}

// Auxiliary method to allow providing re-implementation
void QAudioSink_OnMetacast(QAudioSink* self, intptr_t slot) {
    if (auto* vqaudiosink = dynamic_cast<VirtualQAudioSink*>(self))
        vqaudiosink->qaudiosink_metacast_callback = reinterpret_cast<VirtualQAudioSink::QAudioSink_Metacast_Callback>(slot);
}

// Base class handler implementation
int QAudioSink_SuperMetacall(QAudioSink* self, int param1, int param2, void** param3) {
    return self->QAudioSink::qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

// Auxiliary method to allow providing re-implementation
void QAudioSink_OnMetacall(QAudioSink* self, intptr_t slot) {
    if (auto* vqaudiosink = dynamic_cast<VirtualQAudioSink*>(self))
        vqaudiosink->qaudiosink_metacall_callback = reinterpret_cast<VirtualQAudioSink::QAudioSink_Metacall_Callback>(slot);
}

// Derived class handler implementation
bool QAudioSink_Event(QAudioSink* self, QEvent* event) {
    return self->event(event);
}

// Base class handler implementation
bool QAudioSink_SuperEvent(QAudioSink* self, QEvent* event) {
    return self->QAudioSink::event(event);
}

// Auxiliary method to allow providing re-implementation
void QAudioSink_OnEvent(QAudioSink* self, intptr_t slot) {
    if (auto* vqaudiosink = dynamic_cast<VirtualQAudioSink*>(self))
        vqaudiosink->qaudiosink_event_callback = reinterpret_cast<VirtualQAudioSink::QAudioSink_Event_Callback>(slot);
}

// Derived class handler implementation
bool QAudioSink_EventFilter(QAudioSink* self, QObject* watched, QEvent* event) {
    return self->eventFilter(watched, event);
}

// Base class handler implementation
bool QAudioSink_SuperEventFilter(QAudioSink* self, QObject* watched, QEvent* event) {
    return self->QAudioSink::eventFilter(watched, event);
}

// Auxiliary method to allow providing re-implementation
void QAudioSink_OnEventFilter(QAudioSink* self, intptr_t slot) {
    if (auto* vqaudiosink = dynamic_cast<VirtualQAudioSink*>(self))
        vqaudiosink->qaudiosink_eventfilter_callback = reinterpret_cast<VirtualQAudioSink::QAudioSink_EventFilter_Callback>(slot);
}

// Derived class handler implementation
void QAudioSink_TimerEvent(QAudioSink* self, QTimerEvent* event) {
    auto* vqaudiosink = dynamic_cast<VirtualQAudioSink*>(self);
    if (vqaudiosink) {
        vqaudiosink->timerEvent(event);
    } else {
        qFatal("Error: Protected virtual method QAudioSink::timerEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QAudioSink_SuperTimerEvent(QAudioSink* self, QTimerEvent* event) {
    if (auto* vqaudiosink = dynamic_cast<VirtualQAudioSink*>(self)) {
        vqaudiosink->QAudioSink::timerEvent(event);
    } else
        qFatal("Error: Protected virtual method QAudioSink::timerEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QAudioSink_OnTimerEvent(QAudioSink* self, intptr_t slot) {
    if (auto* vqaudiosink = dynamic_cast<VirtualQAudioSink*>(self))
        vqaudiosink->qaudiosink_timerevent_callback = reinterpret_cast<VirtualQAudioSink::QAudioSink_TimerEvent_Callback>(slot);
}

// Derived class handler implementation
void QAudioSink_ChildEvent(QAudioSink* self, QChildEvent* event) {
    auto* vqaudiosink = dynamic_cast<VirtualQAudioSink*>(self);
    if (vqaudiosink) {
        vqaudiosink->childEvent(event);
    } else {
        qFatal("Error: Protected virtual method QAudioSink::childEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QAudioSink_SuperChildEvent(QAudioSink* self, QChildEvent* event) {
    if (auto* vqaudiosink = dynamic_cast<VirtualQAudioSink*>(self)) {
        vqaudiosink->QAudioSink::childEvent(event);
    } else
        qFatal("Error: Protected virtual method QAudioSink::childEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QAudioSink_OnChildEvent(QAudioSink* self, intptr_t slot) {
    if (auto* vqaudiosink = dynamic_cast<VirtualQAudioSink*>(self))
        vqaudiosink->qaudiosink_childevent_callback = reinterpret_cast<VirtualQAudioSink::QAudioSink_ChildEvent_Callback>(slot);
}

// Derived class handler implementation
void QAudioSink_CustomEvent(QAudioSink* self, QEvent* event) {
    auto* vqaudiosink = dynamic_cast<VirtualQAudioSink*>(self);
    if (vqaudiosink) {
        vqaudiosink->customEvent(event);
    } else {
        qFatal("Error: Protected virtual method QAudioSink::customEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QAudioSink_SuperCustomEvent(QAudioSink* self, QEvent* event) {
    if (auto* vqaudiosink = dynamic_cast<VirtualQAudioSink*>(self)) {
        vqaudiosink->QAudioSink::customEvent(event);
    } else
        qFatal("Error: Protected virtual method QAudioSink::customEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QAudioSink_OnCustomEvent(QAudioSink* self, intptr_t slot) {
    if (auto* vqaudiosink = dynamic_cast<VirtualQAudioSink*>(self))
        vqaudiosink->qaudiosink_customevent_callback = reinterpret_cast<VirtualQAudioSink::QAudioSink_CustomEvent_Callback>(slot);
}

// Derived class handler implementation
void QAudioSink_ConnectNotify(QAudioSink* self, const QMetaMethod* signal) {
    auto* vqaudiosink = dynamic_cast<VirtualQAudioSink*>(self);
    if (vqaudiosink) {
        vqaudiosink->connectNotify(*signal);
    } else {
        qFatal("Error: Protected virtual method QAudioSink::connectNotify called without a directly constructed type");
    }
}

// Base class handler implementation
void QAudioSink_SuperConnectNotify(QAudioSink* self, const QMetaMethod* signal) {
    if (auto* vqaudiosink = dynamic_cast<VirtualQAudioSink*>(self)) {
        vqaudiosink->QAudioSink::connectNotify(*signal);
    } else
        qFatal("Error: Protected virtual method QAudioSink::connectNotify called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QAudioSink_OnConnectNotify(QAudioSink* self, intptr_t slot) {
    if (auto* vqaudiosink = dynamic_cast<VirtualQAudioSink*>(self))
        vqaudiosink->qaudiosink_connectnotify_callback = reinterpret_cast<VirtualQAudioSink::QAudioSink_ConnectNotify_Callback>(slot);
}

// Derived class handler implementation
void QAudioSink_DisconnectNotify(QAudioSink* self, const QMetaMethod* signal) {
    auto* vqaudiosink = dynamic_cast<VirtualQAudioSink*>(self);
    if (vqaudiosink) {
        vqaudiosink->disconnectNotify(*signal);
    } else {
        qFatal("Error: Protected virtual method QAudioSink::disconnectNotify called without a directly constructed type");
    }
}

// Base class handler implementation
void QAudioSink_SuperDisconnectNotify(QAudioSink* self, const QMetaMethod* signal) {
    if (auto* vqaudiosink = dynamic_cast<VirtualQAudioSink*>(self)) {
        vqaudiosink->QAudioSink::disconnectNotify(*signal);
    } else
        qFatal("Error: Protected virtual method QAudioSink::disconnectNotify called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QAudioSink_OnDisconnectNotify(QAudioSink* self, intptr_t slot) {
    if (auto* vqaudiosink = dynamic_cast<VirtualQAudioSink*>(self))
        vqaudiosink->qaudiosink_disconnectnotify_callback = reinterpret_cast<VirtualQAudioSink::QAudioSink_DisconnectNotify_Callback>(slot);
}

// Derived class protected handler implementation
QObject* QAudioSink_Sender(const QAudioSink* self) {
    if (auto* vqaudiosink = const_cast<VirtualQAudioSink*>(dynamic_cast<const VirtualQAudioSink*>(self))) {
        return vqaudiosink->VirtualQAudioSink::sender();
    } else
        qFatal("Error: Protected method QAudioSink::sender called without a directly constructed type");
}

// Derived class protected handler implementation
int QAudioSink_SenderSignalIndex(const QAudioSink* self) {
    if (auto* vqaudiosink = const_cast<VirtualQAudioSink*>(dynamic_cast<const VirtualQAudioSink*>(self))) {
        return vqaudiosink->VirtualQAudioSink::senderSignalIndex();
    } else
        qFatal("Error: Protected method QAudioSink::senderSignalIndex called without a directly constructed type");
}

// Derived class protected handler implementation
int QAudioSink_Receivers(const QAudioSink* self, const char* signal) {
    if (auto* vqaudiosink = const_cast<VirtualQAudioSink*>(dynamic_cast<const VirtualQAudioSink*>(self))) {
        return vqaudiosink->VirtualQAudioSink::receivers(signal);
    } else
        qFatal("Error: Protected method QAudioSink::receivers called without a directly constructed type");
}

// Derived class protected handler implementation
bool QAudioSink_IsSignalConnected(const QAudioSink* self, const QMetaMethod* signal) {
    if (auto* vqaudiosink = const_cast<VirtualQAudioSink*>(dynamic_cast<const VirtualQAudioSink*>(self))) {
        return vqaudiosink->VirtualQAudioSink::isSignalConnected(*signal);
    } else
        qFatal("Error: Protected method QAudioSink::isSignalConnected called without a directly constructed type");
}

void QAudioSink_Delete(QAudioSink* self) {
    delete self;
}
