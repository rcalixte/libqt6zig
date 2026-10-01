#include <QChildEvent>
#include <QEasingCurve>
#include <QEvent>
#include <QMetaMethod>
#include <QMetaObject>
#include <QObject>
#include <QString>
#include <QTimeLine>
#include <QTimerEvent>
#include <qtimeline.h>
#include "libqtimeline.h"
#include "libqtimeline.hxx"

QTimeLine* QTimeLine_new() {
    return new VirtualQTimeLine();
}

QTimeLine* QTimeLine_new2(int duration) {
    return new VirtualQTimeLine(static_cast<int>(duration));
}

QTimeLine* QTimeLine_new3(int duration, QObject* parent) {
    return new VirtualQTimeLine(static_cast<int>(duration), parent);
}

QMetaObject* QTimeLine_MetaObject(const QTimeLine* self) {
    return (QMetaObject*)self->metaObject();
}

void* QTimeLine_Metacast(QTimeLine* self, const char* param1) {
    return self->qt_metacast(param1);
}

int QTimeLine_Metacall(QTimeLine* self, int param1, int param2, void** param3) {
    return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

libqt_string QTimeLine_Tr(const char* s) {
    auto _ret = QTimeLine::tr(s);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

int QTimeLine_State(const QTimeLine* self) {
    return static_cast<int>(self->state());
}

int QTimeLine_LoopCount(const QTimeLine* self) {
    return self->loopCount();
}

void QTimeLine_SetLoopCount(QTimeLine* self, int count) {
    self->setLoopCount(static_cast<int>(count));
}

int QTimeLine_Direction(const QTimeLine* self) {
    return static_cast<int>(self->direction());
}

void QTimeLine_SetDirection(QTimeLine* self, int direction) {
    self->setDirection(static_cast<QTimeLine::Direction>(direction));
}

int QTimeLine_Duration(const QTimeLine* self) {
    return self->duration();
}

void QTimeLine_SetDuration(QTimeLine* self, int duration) {
    self->setDuration(static_cast<int>(duration));
}

int QTimeLine_StartFrame(const QTimeLine* self) {
    return self->startFrame();
}

void QTimeLine_SetStartFrame(QTimeLine* self, int frame) {
    self->setStartFrame(static_cast<int>(frame));
}

int QTimeLine_EndFrame(const QTimeLine* self) {
    return self->endFrame();
}

void QTimeLine_SetEndFrame(QTimeLine* self, int frame) {
    self->setEndFrame(static_cast<int>(frame));
}

void QTimeLine_SetFrameRange(QTimeLine* self, int startFrame, int endFrame) {
    self->setFrameRange(static_cast<int>(startFrame), static_cast<int>(endFrame));
}

int QTimeLine_UpdateInterval(const QTimeLine* self) {
    return self->updateInterval();
}

void QTimeLine_SetUpdateInterval(QTimeLine* self, int interval) {
    self->setUpdateInterval(static_cast<int>(interval));
}

QEasingCurve* QTimeLine_EasingCurve(const QTimeLine* self) {
    return new QEasingCurve(self->easingCurve());
}

void QTimeLine_SetEasingCurve(QTimeLine* self, const QEasingCurve* curve) {
    self->setEasingCurve(*curve);
}

int QTimeLine_CurrentTime(const QTimeLine* self) {
    return self->currentTime();
}

int QTimeLine_CurrentFrame(const QTimeLine* self) {
    return self->currentFrame();
}

double QTimeLine_CurrentValue(const QTimeLine* self) {
    return static_cast<double>(self->currentValue());
}

int QTimeLine_FrameForTime(const QTimeLine* self, int msec) {
    return self->frameForTime(static_cast<int>(msec));
}

double QTimeLine_ValueForTime(const QTimeLine* self, int msec) {
    return static_cast<double>(self->valueForTime(static_cast<int>(msec)));
}

void QTimeLine_Start(QTimeLine* self) {
    self->start();
}

void QTimeLine_Resume(QTimeLine* self) {
    self->resume();
}

void QTimeLine_Stop(QTimeLine* self) {
    self->stop();
}

void QTimeLine_SetPaused(QTimeLine* self, bool paused) {
    self->setPaused(paused);
}

void QTimeLine_SetCurrentTime(QTimeLine* self, int msec) {
    self->setCurrentTime(static_cast<int>(msec));
}

void QTimeLine_ToggleDirection(QTimeLine* self) {
    self->toggleDirection();
}

void QTimeLine_TimerEvent(QTimeLine* self, QTimerEvent* event) {
    auto* vqtimeline = dynamic_cast<VirtualQTimeLine*>(self);
    if (vqtimeline) {
        vqtimeline->timerEvent(event);
    }
}

libqt_string QTimeLine_Tr2(const char* s, const char* c) {
    auto _ret = QTimeLine::tr(s, c);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string QTimeLine_Tr3(const char* s, const char* c, int n) {
    auto _ret = QTimeLine::tr(s, c, static_cast<int>(n));
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
QMetaObject* QTimeLine_SuperMetaObject(const QTimeLine* self) {
    return (QMetaObject*)self->QTimeLine::metaObject();
}

// Auxiliary method to allow providing re-implementation
void QTimeLine_OnMetaObject(QTimeLine* self, intptr_t slot) {
    if (auto* vqtimeline = const_cast<VirtualQTimeLine*>(dynamic_cast<const VirtualQTimeLine*>(self)))
        vqtimeline->qtimeline_metaobject_callback = reinterpret_cast<VirtualQTimeLine::QTimeLine_MetaObject_Callback>(slot);
}

// Base class handler implementation
void* QTimeLine_SuperMetacast(QTimeLine* self, const char* param1) {
    return self->QTimeLine::qt_metacast(param1);
}

// Auxiliary method to allow providing re-implementation
void QTimeLine_OnMetacast(QTimeLine* self, intptr_t slot) {
    if (auto* vqtimeline = dynamic_cast<VirtualQTimeLine*>(self))
        vqtimeline->qtimeline_metacast_callback = reinterpret_cast<VirtualQTimeLine::QTimeLine_Metacast_Callback>(slot);
}

// Base class handler implementation
int QTimeLine_SuperMetacall(QTimeLine* self, int param1, int param2, void** param3) {
    return self->QTimeLine::qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

// Auxiliary method to allow providing re-implementation
void QTimeLine_OnMetacall(QTimeLine* self, intptr_t slot) {
    if (auto* vqtimeline = dynamic_cast<VirtualQTimeLine*>(self))
        vqtimeline->qtimeline_metacall_callback = reinterpret_cast<VirtualQTimeLine::QTimeLine_Metacall_Callback>(slot);
}

// Base class handler implementation
double QTimeLine_SuperValueForTime(const QTimeLine* self, int msec) {
    return static_cast<double>(self->QTimeLine::valueForTime(static_cast<int>(msec)));
}

// Auxiliary method to allow providing re-implementation
void QTimeLine_OnValueForTime(QTimeLine* self, intptr_t slot) {
    if (auto* vqtimeline = const_cast<VirtualQTimeLine*>(dynamic_cast<const VirtualQTimeLine*>(self)))
        vqtimeline->qtimeline_valuefortime_callback = reinterpret_cast<VirtualQTimeLine::QTimeLine_ValueForTime_Callback>(slot);
}

// Base class handler implementation
void QTimeLine_SuperTimerEvent(QTimeLine* self, QTimerEvent* event) {
    if (auto* vqtimeline = dynamic_cast<VirtualQTimeLine*>(self)) {
        vqtimeline->QTimeLine::timerEvent(event);
    } else
        qFatal("Error: Protected virtual method QTimeLine::timerEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QTimeLine_OnTimerEvent(QTimeLine* self, intptr_t slot) {
    if (auto* vqtimeline = dynamic_cast<VirtualQTimeLine*>(self))
        vqtimeline->qtimeline_timerevent_callback = reinterpret_cast<VirtualQTimeLine::QTimeLine_TimerEvent_Callback>(slot);
}

// Derived class handler implementation
bool QTimeLine_Event(QTimeLine* self, QEvent* event) {
    return self->event(event);
}

// Base class handler implementation
bool QTimeLine_SuperEvent(QTimeLine* self, QEvent* event) {
    return self->QTimeLine::event(event);
}

// Auxiliary method to allow providing re-implementation
void QTimeLine_OnEvent(QTimeLine* self, intptr_t slot) {
    if (auto* vqtimeline = dynamic_cast<VirtualQTimeLine*>(self))
        vqtimeline->qtimeline_event_callback = reinterpret_cast<VirtualQTimeLine::QTimeLine_Event_Callback>(slot);
}

// Derived class handler implementation
bool QTimeLine_EventFilter(QTimeLine* self, QObject* watched, QEvent* event) {
    return self->eventFilter(watched, event);
}

// Base class handler implementation
bool QTimeLine_SuperEventFilter(QTimeLine* self, QObject* watched, QEvent* event) {
    return self->QTimeLine::eventFilter(watched, event);
}

// Auxiliary method to allow providing re-implementation
void QTimeLine_OnEventFilter(QTimeLine* self, intptr_t slot) {
    if (auto* vqtimeline = dynamic_cast<VirtualQTimeLine*>(self))
        vqtimeline->qtimeline_eventfilter_callback = reinterpret_cast<VirtualQTimeLine::QTimeLine_EventFilter_Callback>(slot);
}

// Derived class handler implementation
void QTimeLine_ChildEvent(QTimeLine* self, QChildEvent* event) {
    auto* vqtimeline = dynamic_cast<VirtualQTimeLine*>(self);
    if (vqtimeline) {
        vqtimeline->childEvent(event);
    } else {
        qFatal("Error: Protected virtual method QTimeLine::childEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QTimeLine_SuperChildEvent(QTimeLine* self, QChildEvent* event) {
    if (auto* vqtimeline = dynamic_cast<VirtualQTimeLine*>(self)) {
        vqtimeline->QTimeLine::childEvent(event);
    } else
        qFatal("Error: Protected virtual method QTimeLine::childEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QTimeLine_OnChildEvent(QTimeLine* self, intptr_t slot) {
    if (auto* vqtimeline = dynamic_cast<VirtualQTimeLine*>(self))
        vqtimeline->qtimeline_childevent_callback = reinterpret_cast<VirtualQTimeLine::QTimeLine_ChildEvent_Callback>(slot);
}

// Derived class handler implementation
void QTimeLine_CustomEvent(QTimeLine* self, QEvent* event) {
    auto* vqtimeline = dynamic_cast<VirtualQTimeLine*>(self);
    if (vqtimeline) {
        vqtimeline->customEvent(event);
    } else {
        qFatal("Error: Protected virtual method QTimeLine::customEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QTimeLine_SuperCustomEvent(QTimeLine* self, QEvent* event) {
    if (auto* vqtimeline = dynamic_cast<VirtualQTimeLine*>(self)) {
        vqtimeline->QTimeLine::customEvent(event);
    } else
        qFatal("Error: Protected virtual method QTimeLine::customEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QTimeLine_OnCustomEvent(QTimeLine* self, intptr_t slot) {
    if (auto* vqtimeline = dynamic_cast<VirtualQTimeLine*>(self))
        vqtimeline->qtimeline_customevent_callback = reinterpret_cast<VirtualQTimeLine::QTimeLine_CustomEvent_Callback>(slot);
}

// Derived class handler implementation
void QTimeLine_ConnectNotify(QTimeLine* self, const QMetaMethod* signal) {
    auto* vqtimeline = dynamic_cast<VirtualQTimeLine*>(self);
    if (vqtimeline) {
        vqtimeline->connectNotify(*signal);
    } else {
        qFatal("Error: Protected virtual method QTimeLine::connectNotify called without a directly constructed type");
    }
}

// Base class handler implementation
void QTimeLine_SuperConnectNotify(QTimeLine* self, const QMetaMethod* signal) {
    if (auto* vqtimeline = dynamic_cast<VirtualQTimeLine*>(self)) {
        vqtimeline->QTimeLine::connectNotify(*signal);
    } else
        qFatal("Error: Protected virtual method QTimeLine::connectNotify called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QTimeLine_OnConnectNotify(QTimeLine* self, intptr_t slot) {
    if (auto* vqtimeline = dynamic_cast<VirtualQTimeLine*>(self))
        vqtimeline->qtimeline_connectnotify_callback = reinterpret_cast<VirtualQTimeLine::QTimeLine_ConnectNotify_Callback>(slot);
}

// Derived class handler implementation
void QTimeLine_DisconnectNotify(QTimeLine* self, const QMetaMethod* signal) {
    auto* vqtimeline = dynamic_cast<VirtualQTimeLine*>(self);
    if (vqtimeline) {
        vqtimeline->disconnectNotify(*signal);
    } else {
        qFatal("Error: Protected virtual method QTimeLine::disconnectNotify called without a directly constructed type");
    }
}

// Base class handler implementation
void QTimeLine_SuperDisconnectNotify(QTimeLine* self, const QMetaMethod* signal) {
    if (auto* vqtimeline = dynamic_cast<VirtualQTimeLine*>(self)) {
        vqtimeline->QTimeLine::disconnectNotify(*signal);
    } else
        qFatal("Error: Protected virtual method QTimeLine::disconnectNotify called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QTimeLine_OnDisconnectNotify(QTimeLine* self, intptr_t slot) {
    if (auto* vqtimeline = dynamic_cast<VirtualQTimeLine*>(self))
        vqtimeline->qtimeline_disconnectnotify_callback = reinterpret_cast<VirtualQTimeLine::QTimeLine_DisconnectNotify_Callback>(slot);
}

// Derived class protected handler implementation
QObject* QTimeLine_Sender(const QTimeLine* self) {
    if (auto* vqtimeline = const_cast<VirtualQTimeLine*>(dynamic_cast<const VirtualQTimeLine*>(self))) {
        return vqtimeline->VirtualQTimeLine::sender();
    } else
        qFatal("Error: Protected method QTimeLine::sender called without a directly constructed type");
}

// Derived class protected handler implementation
int QTimeLine_SenderSignalIndex(const QTimeLine* self) {
    if (auto* vqtimeline = const_cast<VirtualQTimeLine*>(dynamic_cast<const VirtualQTimeLine*>(self))) {
        return vqtimeline->VirtualQTimeLine::senderSignalIndex();
    } else
        qFatal("Error: Protected method QTimeLine::senderSignalIndex called without a directly constructed type");
}

// Derived class protected handler implementation
int QTimeLine_Receivers(const QTimeLine* self, const char* signal) {
    if (auto* vqtimeline = const_cast<VirtualQTimeLine*>(dynamic_cast<const VirtualQTimeLine*>(self))) {
        return vqtimeline->VirtualQTimeLine::receivers(signal);
    } else
        qFatal("Error: Protected method QTimeLine::receivers called without a directly constructed type");
}

// Derived class protected handler implementation
bool QTimeLine_IsSignalConnected(const QTimeLine* self, const QMetaMethod* signal) {
    if (auto* vqtimeline = const_cast<VirtualQTimeLine*>(dynamic_cast<const VirtualQTimeLine*>(self))) {
        return vqtimeline->VirtualQTimeLine::isSignalConnected(*signal);
    } else
        qFatal("Error: Protected method QTimeLine::isSignalConnected called without a directly constructed type");
}

void QTimeLine_Connect_ValueChanged(QTimeLine* self, intptr_t slot) {
    void (*slotFunc)(QTimeLine*, double) = reinterpret_cast<void (*)(QTimeLine*, double)>(slot);
    QTimeLine::connect(self, &QTimeLine::valueChanged, [self, slotFunc](qreal x) {
        double sigval1 = x;
        slotFunc(self, sigval1);
    });
}

void QTimeLine_Connect_FrameChanged(QTimeLine* self, intptr_t slot) {
    void (*slotFunc)(QTimeLine*, int) = reinterpret_cast<void (*)(QTimeLine*, int)>(slot);
    QTimeLine::connect(self, &QTimeLine::frameChanged, [self, slotFunc](int param1) {
        int sigval1 = param1;
        slotFunc(self, sigval1);
    });
}

void QTimeLine_Connect_StateChanged(QTimeLine* self, intptr_t slot) {
    void (*slotFunc)(QTimeLine*, int) = reinterpret_cast<void (*)(QTimeLine*, int)>(slot);
    QTimeLine::connect(self, &QTimeLine::stateChanged, [self, slotFunc](QTimeLine::State newState) {
        int sigval1 = static_cast<int>(newState);
        slotFunc(self, sigval1);
    });
}

void QTimeLine_Connect_Finished(QTimeLine* self, intptr_t slot) {
    void (*slotFunc)(QTimeLine*) = reinterpret_cast<void (*)(QTimeLine*)>(slot);
    QTimeLine::connect(self, &QTimeLine::finished, [self, slotFunc]() {
        slotFunc(self);
    });
}

void QTimeLine_Delete(QTimeLine* self) {
    delete self;
}
