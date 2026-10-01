#include <QChildEvent>
#include <QEvent>
#include <QMediaCaptureSession>
#include <QMetaMethod>
#include <QMetaObject>
#include <QObject>
#include <QString>
#include <QTimerEvent>
#include <QVideoFrame>
#include <QVideoFrameFormat>
#include <QVideoFrameInput>
#include <qvideoframeinput.h>
#include "libqvideoframeinput.h"
#include "libqvideoframeinput.hxx"

QVideoFrameInput* QVideoFrameInput_new() {
    return new VirtualQVideoFrameInput();
}

QVideoFrameInput* QVideoFrameInput_new2(const QVideoFrameFormat* format) {
    return new VirtualQVideoFrameInput(*format);
}

QVideoFrameInput* QVideoFrameInput_new3(QObject* parent) {
    return new VirtualQVideoFrameInput(parent);
}

QVideoFrameInput* QVideoFrameInput_new4(const QVideoFrameFormat* format, QObject* parent) {
    return new VirtualQVideoFrameInput(*format, parent);
}

QMetaObject* QVideoFrameInput_MetaObject(const QVideoFrameInput* self) {
    return (QMetaObject*)self->metaObject();
}

void* QVideoFrameInput_Metacast(QVideoFrameInput* self, const char* param1) {
    return self->qt_metacast(param1);
}

int QVideoFrameInput_Metacall(QVideoFrameInput* self, int param1, int param2, void** param3) {
    return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

libqt_string QVideoFrameInput_Tr(const char* s) {
    auto _ret = QVideoFrameInput::tr(s);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

bool QVideoFrameInput_SendVideoFrame(QVideoFrameInput* self, const QVideoFrame* frame) {
    return self->sendVideoFrame(*frame);
}

QVideoFrameFormat* QVideoFrameInput_Format(const QVideoFrameInput* self) {
    return new QVideoFrameFormat(self->format());
}

QMediaCaptureSession* QVideoFrameInput_CaptureSession(const QVideoFrameInput* self) {
    return self->captureSession();
}

void QVideoFrameInput_ReadyToSendVideoFrame(QVideoFrameInput* self) {
    self->readyToSendVideoFrame();
}

void QVideoFrameInput_Connect_ReadyToSendVideoFrame(QVideoFrameInput* self, intptr_t slot) {
    void (*slotFunc)(QVideoFrameInput*) = reinterpret_cast<void (*)(QVideoFrameInput*)>(slot);
    QVideoFrameInput::connect(self,
                              static_cast<void (QVideoFrameInput::*)()>(&QVideoFrameInput::readyToSendVideoFrame),
                              [self, slotFunc]() {
                                  slotFunc(self);
                              });
}

libqt_string QVideoFrameInput_Tr2(const char* s, const char* c) {
    auto _ret = QVideoFrameInput::tr(s, c);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string QVideoFrameInput_Tr3(const char* s, const char* c, int n) {
    auto _ret = QVideoFrameInput::tr(s, c, static_cast<int>(n));
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
QMetaObject* QVideoFrameInput_SuperMetaObject(const QVideoFrameInput* self) {
    return (QMetaObject*)self->QVideoFrameInput::metaObject();
}

// Auxiliary method to allow providing re-implementation
void QVideoFrameInput_OnMetaObject(QVideoFrameInput* self, intptr_t slot) {
    if (auto* vqvideoframeinput = const_cast<VirtualQVideoFrameInput*>(dynamic_cast<const VirtualQVideoFrameInput*>(self)))
        vqvideoframeinput->qvideoframeinput_metaobject_callback = reinterpret_cast<VirtualQVideoFrameInput::QVideoFrameInput_MetaObject_Callback>(slot);
}

// Base class handler implementation
void* QVideoFrameInput_SuperMetacast(QVideoFrameInput* self, const char* param1) {
    return self->QVideoFrameInput::qt_metacast(param1);
}

// Auxiliary method to allow providing re-implementation
void QVideoFrameInput_OnMetacast(QVideoFrameInput* self, intptr_t slot) {
    if (auto* vqvideoframeinput = dynamic_cast<VirtualQVideoFrameInput*>(self))
        vqvideoframeinput->qvideoframeinput_metacast_callback = reinterpret_cast<VirtualQVideoFrameInput::QVideoFrameInput_Metacast_Callback>(slot);
}

// Base class handler implementation
int QVideoFrameInput_SuperMetacall(QVideoFrameInput* self, int param1, int param2, void** param3) {
    return self->QVideoFrameInput::qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

// Auxiliary method to allow providing re-implementation
void QVideoFrameInput_OnMetacall(QVideoFrameInput* self, intptr_t slot) {
    if (auto* vqvideoframeinput = dynamic_cast<VirtualQVideoFrameInput*>(self))
        vqvideoframeinput->qvideoframeinput_metacall_callback = reinterpret_cast<VirtualQVideoFrameInput::QVideoFrameInput_Metacall_Callback>(slot);
}

// Derived class handler implementation
bool QVideoFrameInput_Event(QVideoFrameInput* self, QEvent* event) {
    return self->event(event);
}

// Base class handler implementation
bool QVideoFrameInput_SuperEvent(QVideoFrameInput* self, QEvent* event) {
    return self->QVideoFrameInput::event(event);
}

// Auxiliary method to allow providing re-implementation
void QVideoFrameInput_OnEvent(QVideoFrameInput* self, intptr_t slot) {
    if (auto* vqvideoframeinput = dynamic_cast<VirtualQVideoFrameInput*>(self))
        vqvideoframeinput->qvideoframeinput_event_callback = reinterpret_cast<VirtualQVideoFrameInput::QVideoFrameInput_Event_Callback>(slot);
}

// Derived class handler implementation
bool QVideoFrameInput_EventFilter(QVideoFrameInput* self, QObject* watched, QEvent* event) {
    return self->eventFilter(watched, event);
}

// Base class handler implementation
bool QVideoFrameInput_SuperEventFilter(QVideoFrameInput* self, QObject* watched, QEvent* event) {
    return self->QVideoFrameInput::eventFilter(watched, event);
}

// Auxiliary method to allow providing re-implementation
void QVideoFrameInput_OnEventFilter(QVideoFrameInput* self, intptr_t slot) {
    if (auto* vqvideoframeinput = dynamic_cast<VirtualQVideoFrameInput*>(self))
        vqvideoframeinput->qvideoframeinput_eventfilter_callback = reinterpret_cast<VirtualQVideoFrameInput::QVideoFrameInput_EventFilter_Callback>(slot);
}

// Derived class handler implementation
void QVideoFrameInput_TimerEvent(QVideoFrameInput* self, QTimerEvent* event) {
    auto* vqvideoframeinput = dynamic_cast<VirtualQVideoFrameInput*>(self);
    if (vqvideoframeinput) {
        vqvideoframeinput->timerEvent(event);
    } else {
        qFatal("Error: Protected virtual method QVideoFrameInput::timerEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QVideoFrameInput_SuperTimerEvent(QVideoFrameInput* self, QTimerEvent* event) {
    if (auto* vqvideoframeinput = dynamic_cast<VirtualQVideoFrameInput*>(self)) {
        vqvideoframeinput->QVideoFrameInput::timerEvent(event);
    } else
        qFatal("Error: Protected virtual method QVideoFrameInput::timerEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QVideoFrameInput_OnTimerEvent(QVideoFrameInput* self, intptr_t slot) {
    if (auto* vqvideoframeinput = dynamic_cast<VirtualQVideoFrameInput*>(self))
        vqvideoframeinput->qvideoframeinput_timerevent_callback = reinterpret_cast<VirtualQVideoFrameInput::QVideoFrameInput_TimerEvent_Callback>(slot);
}

// Derived class handler implementation
void QVideoFrameInput_ChildEvent(QVideoFrameInput* self, QChildEvent* event) {
    auto* vqvideoframeinput = dynamic_cast<VirtualQVideoFrameInput*>(self);
    if (vqvideoframeinput) {
        vqvideoframeinput->childEvent(event);
    } else {
        qFatal("Error: Protected virtual method QVideoFrameInput::childEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QVideoFrameInput_SuperChildEvent(QVideoFrameInput* self, QChildEvent* event) {
    if (auto* vqvideoframeinput = dynamic_cast<VirtualQVideoFrameInput*>(self)) {
        vqvideoframeinput->QVideoFrameInput::childEvent(event);
    } else
        qFatal("Error: Protected virtual method QVideoFrameInput::childEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QVideoFrameInput_OnChildEvent(QVideoFrameInput* self, intptr_t slot) {
    if (auto* vqvideoframeinput = dynamic_cast<VirtualQVideoFrameInput*>(self))
        vqvideoframeinput->qvideoframeinput_childevent_callback = reinterpret_cast<VirtualQVideoFrameInput::QVideoFrameInput_ChildEvent_Callback>(slot);
}

// Derived class handler implementation
void QVideoFrameInput_CustomEvent(QVideoFrameInput* self, QEvent* event) {
    auto* vqvideoframeinput = dynamic_cast<VirtualQVideoFrameInput*>(self);
    if (vqvideoframeinput) {
        vqvideoframeinput->customEvent(event);
    } else {
        qFatal("Error: Protected virtual method QVideoFrameInput::customEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QVideoFrameInput_SuperCustomEvent(QVideoFrameInput* self, QEvent* event) {
    if (auto* vqvideoframeinput = dynamic_cast<VirtualQVideoFrameInput*>(self)) {
        vqvideoframeinput->QVideoFrameInput::customEvent(event);
    } else
        qFatal("Error: Protected virtual method QVideoFrameInput::customEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QVideoFrameInput_OnCustomEvent(QVideoFrameInput* self, intptr_t slot) {
    if (auto* vqvideoframeinput = dynamic_cast<VirtualQVideoFrameInput*>(self))
        vqvideoframeinput->qvideoframeinput_customevent_callback = reinterpret_cast<VirtualQVideoFrameInput::QVideoFrameInput_CustomEvent_Callback>(slot);
}

// Derived class handler implementation
void QVideoFrameInput_ConnectNotify(QVideoFrameInput* self, const QMetaMethod* signal) {
    auto* vqvideoframeinput = dynamic_cast<VirtualQVideoFrameInput*>(self);
    if (vqvideoframeinput) {
        vqvideoframeinput->connectNotify(*signal);
    } else {
        qFatal("Error: Protected virtual method QVideoFrameInput::connectNotify called without a directly constructed type");
    }
}

// Base class handler implementation
void QVideoFrameInput_SuperConnectNotify(QVideoFrameInput* self, const QMetaMethod* signal) {
    if (auto* vqvideoframeinput = dynamic_cast<VirtualQVideoFrameInput*>(self)) {
        vqvideoframeinput->QVideoFrameInput::connectNotify(*signal);
    } else
        qFatal("Error: Protected virtual method QVideoFrameInput::connectNotify called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QVideoFrameInput_OnConnectNotify(QVideoFrameInput* self, intptr_t slot) {
    if (auto* vqvideoframeinput = dynamic_cast<VirtualQVideoFrameInput*>(self))
        vqvideoframeinput->qvideoframeinput_connectnotify_callback = reinterpret_cast<VirtualQVideoFrameInput::QVideoFrameInput_ConnectNotify_Callback>(slot);
}

// Derived class handler implementation
void QVideoFrameInput_DisconnectNotify(QVideoFrameInput* self, const QMetaMethod* signal) {
    auto* vqvideoframeinput = dynamic_cast<VirtualQVideoFrameInput*>(self);
    if (vqvideoframeinput) {
        vqvideoframeinput->disconnectNotify(*signal);
    } else {
        qFatal("Error: Protected virtual method QVideoFrameInput::disconnectNotify called without a directly constructed type");
    }
}

// Base class handler implementation
void QVideoFrameInput_SuperDisconnectNotify(QVideoFrameInput* self, const QMetaMethod* signal) {
    if (auto* vqvideoframeinput = dynamic_cast<VirtualQVideoFrameInput*>(self)) {
        vqvideoframeinput->QVideoFrameInput::disconnectNotify(*signal);
    } else
        qFatal("Error: Protected virtual method QVideoFrameInput::disconnectNotify called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QVideoFrameInput_OnDisconnectNotify(QVideoFrameInput* self, intptr_t slot) {
    if (auto* vqvideoframeinput = dynamic_cast<VirtualQVideoFrameInput*>(self))
        vqvideoframeinput->qvideoframeinput_disconnectnotify_callback = reinterpret_cast<VirtualQVideoFrameInput::QVideoFrameInput_DisconnectNotify_Callback>(slot);
}

// Derived class protected handler implementation
QObject* QVideoFrameInput_Sender(const QVideoFrameInput* self) {
    if (auto* vqvideoframeinput = const_cast<VirtualQVideoFrameInput*>(dynamic_cast<const VirtualQVideoFrameInput*>(self))) {
        return vqvideoframeinput->VirtualQVideoFrameInput::sender();
    } else
        qFatal("Error: Protected method QVideoFrameInput::sender called without a directly constructed type");
}

// Derived class protected handler implementation
int QVideoFrameInput_SenderSignalIndex(const QVideoFrameInput* self) {
    if (auto* vqvideoframeinput = const_cast<VirtualQVideoFrameInput*>(dynamic_cast<const VirtualQVideoFrameInput*>(self))) {
        return vqvideoframeinput->VirtualQVideoFrameInput::senderSignalIndex();
    } else
        qFatal("Error: Protected method QVideoFrameInput::senderSignalIndex called without a directly constructed type");
}

// Derived class protected handler implementation
int QVideoFrameInput_Receivers(const QVideoFrameInput* self, const char* signal) {
    if (auto* vqvideoframeinput = const_cast<VirtualQVideoFrameInput*>(dynamic_cast<const VirtualQVideoFrameInput*>(self))) {
        return vqvideoframeinput->VirtualQVideoFrameInput::receivers(signal);
    } else
        qFatal("Error: Protected method QVideoFrameInput::receivers called without a directly constructed type");
}

// Derived class protected handler implementation
bool QVideoFrameInput_IsSignalConnected(const QVideoFrameInput* self, const QMetaMethod* signal) {
    if (auto* vqvideoframeinput = const_cast<VirtualQVideoFrameInput*>(dynamic_cast<const VirtualQVideoFrameInput*>(self))) {
        return vqvideoframeinput->VirtualQVideoFrameInput::isSignalConnected(*signal);
    } else
        qFatal("Error: Protected method QVideoFrameInput::isSignalConnected called without a directly constructed type");
}

void QVideoFrameInput_Delete(QVideoFrameInput* self) {
    delete self;
}
