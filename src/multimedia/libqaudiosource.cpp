#include <QAudioDevice>
#include <QAudioFormat>
#include <QAudioSource>
#include <QChildEvent>
#include <QEvent>
#include <QIODevice>
#include <QMetaMethod>
#include <QMetaObject>
#include <QObject>
#include <QString>
#include <QTimerEvent>
#include <qaudiosource.h>
#include "libqaudiosource.h"
#include "libqaudiosource.hxx"

QAudioSource* QAudioSource_new() {
    return new VirtualQAudioSource();
}

QAudioSource* QAudioSource_new2(const QAudioDevice* audioDeviceInfo) {
    return new VirtualQAudioSource(*audioDeviceInfo);
}

QAudioSource* QAudioSource_new3(const QAudioFormat* format) {
    return new VirtualQAudioSource(*format);
}

QAudioSource* QAudioSource_new4(const QAudioFormat* format, QObject* parent) {
    return new VirtualQAudioSource(*format, parent);
}

QAudioSource* QAudioSource_new5(const QAudioDevice* audioDeviceInfo, const QAudioFormat* format) {
    return new VirtualQAudioSource(*audioDeviceInfo, *format);
}

QAudioSource* QAudioSource_new6(const QAudioDevice* audioDeviceInfo, const QAudioFormat* format, QObject* parent) {
    return new VirtualQAudioSource(*audioDeviceInfo, *format, parent);
}

QMetaObject* QAudioSource_MetaObject(const QAudioSource* self) {
    return (QMetaObject*)self->metaObject();
}

void* QAudioSource_Metacast(QAudioSource* self, const char* param1) {
    return self->qt_metacast(param1);
}

int QAudioSource_Metacall(QAudioSource* self, int param1, int param2, void** param3) {
    return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

libqt_string QAudioSource_Tr(const char* s) {
    auto _ret = QAudioSource::tr(s);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

bool QAudioSource_IsNull(const QAudioSource* self) {
    return self->isNull();
}

QAudioFormat* QAudioSource_Format(const QAudioSource* self) {
    return new QAudioFormat(self->format());
}

void QAudioSource_Start(QAudioSource* self, QIODevice* device) {
    self->start(device);
}

QIODevice* QAudioSource_Start2(QAudioSource* self) {
    return self->start();
}

void QAudioSource_Stop(QAudioSource* self) {
    self->stop();
}

void QAudioSource_Reset(QAudioSource* self) {
    self->reset();
}

void QAudioSource_Suspend(QAudioSource* self) {
    self->suspend();
}

void QAudioSource_Resume(QAudioSource* self) {
    self->resume();
}

void QAudioSource_SetBufferSize(QAudioSource* self, ptrdiff_t bytes) {
    self->setBufferSize((qsizetype)(bytes));
}

ptrdiff_t QAudioSource_BufferSize(const QAudioSource* self) {
    return static_cast<ptrdiff_t>(self->bufferSize());
}

ptrdiff_t QAudioSource_BytesAvailable(const QAudioSource* self) {
    return static_cast<ptrdiff_t>(self->bytesAvailable());
}

void QAudioSource_SetVolume(QAudioSource* self, double volume) {
    self->setVolume(static_cast<qreal>(volume));
}

double QAudioSource_Volume(const QAudioSource* self) {
    return static_cast<double>(self->volume());
}

long long QAudioSource_ProcessedUSecs(const QAudioSource* self) {
    return static_cast<long long>(self->processedUSecs());
}

long long QAudioSource_ElapsedUSecs(const QAudioSource* self) {
    return static_cast<long long>(self->elapsedUSecs());
}

int QAudioSource_Error(const QAudioSource* self) {
    return static_cast<int>(self->error());
}

int QAudioSource_State(const QAudioSource* self) {
    return static_cast<int>(self->state());
}

void QAudioSource_StateChanged(QAudioSource* self, int state) {
    self->stateChanged(static_cast<QAudio::State>(state));
}

void QAudioSource_Connect_StateChanged(QAudioSource* self, intptr_t slot) {
    void (*slotFunc)(QAudioSource*, int) = reinterpret_cast<void (*)(QAudioSource*, int)>(slot);
    QAudioSource::connect(self,
                          static_cast<void (QAudioSource::*)(QAudio::State)>(&QAudioSource::stateChanged),
                          [self, slotFunc](QAudio::State state) {
                              int sigval1 = static_cast<int>(state);
                              slotFunc(self, sigval1);
                          });
}

libqt_string QAudioSource_Tr2(const char* s, const char* c) {
    auto _ret = QAudioSource::tr(s, c);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string QAudioSource_Tr3(const char* s, const char* c, int n) {
    auto _ret = QAudioSource::tr(s, c, static_cast<int>(n));
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
QMetaObject* QAudioSource_SuperMetaObject(const QAudioSource* self) {
    return (QMetaObject*)self->QAudioSource::metaObject();
}

// Auxiliary method to allow providing re-implementation
void QAudioSource_OnMetaObject(QAudioSource* self, intptr_t slot) {
    if (auto* vqaudiosource = const_cast<VirtualQAudioSource*>(dynamic_cast<const VirtualQAudioSource*>(self)))
        vqaudiosource->qaudiosource_metaobject_callback = reinterpret_cast<VirtualQAudioSource::QAudioSource_MetaObject_Callback>(slot);
}

// Base class handler implementation
void* QAudioSource_SuperMetacast(QAudioSource* self, const char* param1) {
    return self->QAudioSource::qt_metacast(param1);
}

// Auxiliary method to allow providing re-implementation
void QAudioSource_OnMetacast(QAudioSource* self, intptr_t slot) {
    if (auto* vqaudiosource = dynamic_cast<VirtualQAudioSource*>(self))
        vqaudiosource->qaudiosource_metacast_callback = reinterpret_cast<VirtualQAudioSource::QAudioSource_Metacast_Callback>(slot);
}

// Base class handler implementation
int QAudioSource_SuperMetacall(QAudioSource* self, int param1, int param2, void** param3) {
    return self->QAudioSource::qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

// Auxiliary method to allow providing re-implementation
void QAudioSource_OnMetacall(QAudioSource* self, intptr_t slot) {
    if (auto* vqaudiosource = dynamic_cast<VirtualQAudioSource*>(self))
        vqaudiosource->qaudiosource_metacall_callback = reinterpret_cast<VirtualQAudioSource::QAudioSource_Metacall_Callback>(slot);
}

// Derived class handler implementation
bool QAudioSource_Event(QAudioSource* self, QEvent* event) {
    return self->event(event);
}

// Base class handler implementation
bool QAudioSource_SuperEvent(QAudioSource* self, QEvent* event) {
    return self->QAudioSource::event(event);
}

// Auxiliary method to allow providing re-implementation
void QAudioSource_OnEvent(QAudioSource* self, intptr_t slot) {
    if (auto* vqaudiosource = dynamic_cast<VirtualQAudioSource*>(self))
        vqaudiosource->qaudiosource_event_callback = reinterpret_cast<VirtualQAudioSource::QAudioSource_Event_Callback>(slot);
}

// Derived class handler implementation
bool QAudioSource_EventFilter(QAudioSource* self, QObject* watched, QEvent* event) {
    return self->eventFilter(watched, event);
}

// Base class handler implementation
bool QAudioSource_SuperEventFilter(QAudioSource* self, QObject* watched, QEvent* event) {
    return self->QAudioSource::eventFilter(watched, event);
}

// Auxiliary method to allow providing re-implementation
void QAudioSource_OnEventFilter(QAudioSource* self, intptr_t slot) {
    if (auto* vqaudiosource = dynamic_cast<VirtualQAudioSource*>(self))
        vqaudiosource->qaudiosource_eventfilter_callback = reinterpret_cast<VirtualQAudioSource::QAudioSource_EventFilter_Callback>(slot);
}

// Derived class handler implementation
void QAudioSource_TimerEvent(QAudioSource* self, QTimerEvent* event) {
    auto* vqaudiosource = dynamic_cast<VirtualQAudioSource*>(self);
    if (vqaudiosource) {
        vqaudiosource->timerEvent(event);
    } else {
        qFatal("Error: Protected virtual method QAudioSource::timerEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QAudioSource_SuperTimerEvent(QAudioSource* self, QTimerEvent* event) {
    if (auto* vqaudiosource = dynamic_cast<VirtualQAudioSource*>(self)) {
        vqaudiosource->QAudioSource::timerEvent(event);
    } else
        qFatal("Error: Protected virtual method QAudioSource::timerEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QAudioSource_OnTimerEvent(QAudioSource* self, intptr_t slot) {
    if (auto* vqaudiosource = dynamic_cast<VirtualQAudioSource*>(self))
        vqaudiosource->qaudiosource_timerevent_callback = reinterpret_cast<VirtualQAudioSource::QAudioSource_TimerEvent_Callback>(slot);
}

// Derived class handler implementation
void QAudioSource_ChildEvent(QAudioSource* self, QChildEvent* event) {
    auto* vqaudiosource = dynamic_cast<VirtualQAudioSource*>(self);
    if (vqaudiosource) {
        vqaudiosource->childEvent(event);
    } else {
        qFatal("Error: Protected virtual method QAudioSource::childEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QAudioSource_SuperChildEvent(QAudioSource* self, QChildEvent* event) {
    if (auto* vqaudiosource = dynamic_cast<VirtualQAudioSource*>(self)) {
        vqaudiosource->QAudioSource::childEvent(event);
    } else
        qFatal("Error: Protected virtual method QAudioSource::childEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QAudioSource_OnChildEvent(QAudioSource* self, intptr_t slot) {
    if (auto* vqaudiosource = dynamic_cast<VirtualQAudioSource*>(self))
        vqaudiosource->qaudiosource_childevent_callback = reinterpret_cast<VirtualQAudioSource::QAudioSource_ChildEvent_Callback>(slot);
}

// Derived class handler implementation
void QAudioSource_CustomEvent(QAudioSource* self, QEvent* event) {
    auto* vqaudiosource = dynamic_cast<VirtualQAudioSource*>(self);
    if (vqaudiosource) {
        vqaudiosource->customEvent(event);
    } else {
        qFatal("Error: Protected virtual method QAudioSource::customEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QAudioSource_SuperCustomEvent(QAudioSource* self, QEvent* event) {
    if (auto* vqaudiosource = dynamic_cast<VirtualQAudioSource*>(self)) {
        vqaudiosource->QAudioSource::customEvent(event);
    } else
        qFatal("Error: Protected virtual method QAudioSource::customEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QAudioSource_OnCustomEvent(QAudioSource* self, intptr_t slot) {
    if (auto* vqaudiosource = dynamic_cast<VirtualQAudioSource*>(self))
        vqaudiosource->qaudiosource_customevent_callback = reinterpret_cast<VirtualQAudioSource::QAudioSource_CustomEvent_Callback>(slot);
}

// Derived class handler implementation
void QAudioSource_ConnectNotify(QAudioSource* self, const QMetaMethod* signal) {
    auto* vqaudiosource = dynamic_cast<VirtualQAudioSource*>(self);
    if (vqaudiosource) {
        vqaudiosource->connectNotify(*signal);
    } else {
        qFatal("Error: Protected virtual method QAudioSource::connectNotify called without a directly constructed type");
    }
}

// Base class handler implementation
void QAudioSource_SuperConnectNotify(QAudioSource* self, const QMetaMethod* signal) {
    if (auto* vqaudiosource = dynamic_cast<VirtualQAudioSource*>(self)) {
        vqaudiosource->QAudioSource::connectNotify(*signal);
    } else
        qFatal("Error: Protected virtual method QAudioSource::connectNotify called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QAudioSource_OnConnectNotify(QAudioSource* self, intptr_t slot) {
    if (auto* vqaudiosource = dynamic_cast<VirtualQAudioSource*>(self))
        vqaudiosource->qaudiosource_connectnotify_callback = reinterpret_cast<VirtualQAudioSource::QAudioSource_ConnectNotify_Callback>(slot);
}

// Derived class handler implementation
void QAudioSource_DisconnectNotify(QAudioSource* self, const QMetaMethod* signal) {
    auto* vqaudiosource = dynamic_cast<VirtualQAudioSource*>(self);
    if (vqaudiosource) {
        vqaudiosource->disconnectNotify(*signal);
    } else {
        qFatal("Error: Protected virtual method QAudioSource::disconnectNotify called without a directly constructed type");
    }
}

// Base class handler implementation
void QAudioSource_SuperDisconnectNotify(QAudioSource* self, const QMetaMethod* signal) {
    if (auto* vqaudiosource = dynamic_cast<VirtualQAudioSource*>(self)) {
        vqaudiosource->QAudioSource::disconnectNotify(*signal);
    } else
        qFatal("Error: Protected virtual method QAudioSource::disconnectNotify called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QAudioSource_OnDisconnectNotify(QAudioSource* self, intptr_t slot) {
    if (auto* vqaudiosource = dynamic_cast<VirtualQAudioSource*>(self))
        vqaudiosource->qaudiosource_disconnectnotify_callback = reinterpret_cast<VirtualQAudioSource::QAudioSource_DisconnectNotify_Callback>(slot);
}

// Derived class protected handler implementation
QObject* QAudioSource_Sender(const QAudioSource* self) {
    if (auto* vqaudiosource = const_cast<VirtualQAudioSource*>(dynamic_cast<const VirtualQAudioSource*>(self))) {
        return vqaudiosource->VirtualQAudioSource::sender();
    } else
        qFatal("Error: Protected method QAudioSource::sender called without a directly constructed type");
}

// Derived class protected handler implementation
int QAudioSource_SenderSignalIndex(const QAudioSource* self) {
    if (auto* vqaudiosource = const_cast<VirtualQAudioSource*>(dynamic_cast<const VirtualQAudioSource*>(self))) {
        return vqaudiosource->VirtualQAudioSource::senderSignalIndex();
    } else
        qFatal("Error: Protected method QAudioSource::senderSignalIndex called without a directly constructed type");
}

// Derived class protected handler implementation
int QAudioSource_Receivers(const QAudioSource* self, const char* signal) {
    if (auto* vqaudiosource = const_cast<VirtualQAudioSource*>(dynamic_cast<const VirtualQAudioSource*>(self))) {
        return vqaudiosource->VirtualQAudioSource::receivers(signal);
    } else
        qFatal("Error: Protected method QAudioSource::receivers called without a directly constructed type");
}

// Derived class protected handler implementation
bool QAudioSource_IsSignalConnected(const QAudioSource* self, const QMetaMethod* signal) {
    if (auto* vqaudiosource = const_cast<VirtualQAudioSource*>(dynamic_cast<const VirtualQAudioSource*>(self))) {
        return vqaudiosource->VirtualQAudioSource::isSignalConnected(*signal);
    } else
        qFatal("Error: Protected method QAudioSource::isSignalConnected called without a directly constructed type");
}

void QAudioSource_Delete(QAudioSource* self) {
    delete self;
}
