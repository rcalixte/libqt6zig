#include <QAudioBuffer>
#include <QAudioBufferInput>
#include <QAudioFormat>
#include <QChildEvent>
#include <QEvent>
#include <QMediaCaptureSession>
#include <QMetaMethod>
#include <QMetaObject>
#include <QObject>
#include <QString>
#include <QTimerEvent>
#include <qaudiobufferinput.h>
#include "libqaudiobufferinput.h"
#include "libqaudiobufferinput.hxx"

QAudioBufferInput* QAudioBufferInput_new() {
    return new VirtualQAudioBufferInput();
}

QAudioBufferInput* QAudioBufferInput_new2(const QAudioFormat* format) {
    return new VirtualQAudioBufferInput(*format);
}

QAudioBufferInput* QAudioBufferInput_new3(QObject* parent) {
    return new VirtualQAudioBufferInput(parent);
}

QAudioBufferInput* QAudioBufferInput_new4(const QAudioFormat* format, QObject* parent) {
    return new VirtualQAudioBufferInput(*format, parent);
}

QMetaObject* QAudioBufferInput_MetaObject(const QAudioBufferInput* self) {
    return (QMetaObject*)self->metaObject();
}

void* QAudioBufferInput_Metacast(QAudioBufferInput* self, const char* param1) {
    return self->qt_metacast(param1);
}

int QAudioBufferInput_Metacall(QAudioBufferInput* self, int param1, int param2, void** param3) {
    return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

libqt_string QAudioBufferInput_Tr(const char* s) {
    auto _ret = QAudioBufferInput::tr(s);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

bool QAudioBufferInput_SendAudioBuffer(QAudioBufferInput* self, const QAudioBuffer* audioBuffer) {
    return self->sendAudioBuffer(*audioBuffer);
}

QAudioFormat* QAudioBufferInput_Format(const QAudioBufferInput* self) {
    return new QAudioFormat(self->format());
}

QMediaCaptureSession* QAudioBufferInput_CaptureSession(const QAudioBufferInput* self) {
    return self->captureSession();
}

void QAudioBufferInput_ReadyToSendAudioBuffer(QAudioBufferInput* self) {
    self->readyToSendAudioBuffer();
}

void QAudioBufferInput_Connect_ReadyToSendAudioBuffer(QAudioBufferInput* self, intptr_t slot) {
    void (*slotFunc)(QAudioBufferInput*) = reinterpret_cast<void (*)(QAudioBufferInput*)>(slot);
    QAudioBufferInput::connect(self,
                               static_cast<void (QAudioBufferInput::*)()>(&QAudioBufferInput::readyToSendAudioBuffer),
                               [self, slotFunc]() {
                                   slotFunc(self);
                               });
}

libqt_string QAudioBufferInput_Tr2(const char* s, const char* c) {
    auto _ret = QAudioBufferInput::tr(s, c);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string QAudioBufferInput_Tr3(const char* s, const char* c, int n) {
    auto _ret = QAudioBufferInput::tr(s, c, static_cast<int>(n));
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
QMetaObject* QAudioBufferInput_SuperMetaObject(const QAudioBufferInput* self) {
    return (QMetaObject*)self->QAudioBufferInput::metaObject();
}

// Auxiliary method to allow providing re-implementation
void QAudioBufferInput_OnMetaObject(QAudioBufferInput* self, intptr_t slot) {
    if (auto* vqaudiobufferinput = const_cast<VirtualQAudioBufferInput*>(dynamic_cast<const VirtualQAudioBufferInput*>(self)))
        vqaudiobufferinput->qaudiobufferinput_metaobject_callback = reinterpret_cast<VirtualQAudioBufferInput::QAudioBufferInput_MetaObject_Callback>(slot);
}

// Base class handler implementation
void* QAudioBufferInput_SuperMetacast(QAudioBufferInput* self, const char* param1) {
    return self->QAudioBufferInput::qt_metacast(param1);
}

// Auxiliary method to allow providing re-implementation
void QAudioBufferInput_OnMetacast(QAudioBufferInput* self, intptr_t slot) {
    if (auto* vqaudiobufferinput = dynamic_cast<VirtualQAudioBufferInput*>(self))
        vqaudiobufferinput->qaudiobufferinput_metacast_callback = reinterpret_cast<VirtualQAudioBufferInput::QAudioBufferInput_Metacast_Callback>(slot);
}

// Base class handler implementation
int QAudioBufferInput_SuperMetacall(QAudioBufferInput* self, int param1, int param2, void** param3) {
    return self->QAudioBufferInput::qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

// Auxiliary method to allow providing re-implementation
void QAudioBufferInput_OnMetacall(QAudioBufferInput* self, intptr_t slot) {
    if (auto* vqaudiobufferinput = dynamic_cast<VirtualQAudioBufferInput*>(self))
        vqaudiobufferinput->qaudiobufferinput_metacall_callback = reinterpret_cast<VirtualQAudioBufferInput::QAudioBufferInput_Metacall_Callback>(slot);
}

// Derived class handler implementation
bool QAudioBufferInput_Event(QAudioBufferInput* self, QEvent* event) {
    return self->event(event);
}

// Base class handler implementation
bool QAudioBufferInput_SuperEvent(QAudioBufferInput* self, QEvent* event) {
    return self->QAudioBufferInput::event(event);
}

// Auxiliary method to allow providing re-implementation
void QAudioBufferInput_OnEvent(QAudioBufferInput* self, intptr_t slot) {
    if (auto* vqaudiobufferinput = dynamic_cast<VirtualQAudioBufferInput*>(self))
        vqaudiobufferinput->qaudiobufferinput_event_callback = reinterpret_cast<VirtualQAudioBufferInput::QAudioBufferInput_Event_Callback>(slot);
}

// Derived class handler implementation
bool QAudioBufferInput_EventFilter(QAudioBufferInput* self, QObject* watched, QEvent* event) {
    return self->eventFilter(watched, event);
}

// Base class handler implementation
bool QAudioBufferInput_SuperEventFilter(QAudioBufferInput* self, QObject* watched, QEvent* event) {
    return self->QAudioBufferInput::eventFilter(watched, event);
}

// Auxiliary method to allow providing re-implementation
void QAudioBufferInput_OnEventFilter(QAudioBufferInput* self, intptr_t slot) {
    if (auto* vqaudiobufferinput = dynamic_cast<VirtualQAudioBufferInput*>(self))
        vqaudiobufferinput->qaudiobufferinput_eventfilter_callback = reinterpret_cast<VirtualQAudioBufferInput::QAudioBufferInput_EventFilter_Callback>(slot);
}

// Derived class handler implementation
void QAudioBufferInput_TimerEvent(QAudioBufferInput* self, QTimerEvent* event) {
    auto* vqaudiobufferinput = dynamic_cast<VirtualQAudioBufferInput*>(self);
    if (vqaudiobufferinput) {
        vqaudiobufferinput->timerEvent(event);
    } else {
        qFatal("Error: Protected virtual method QAudioBufferInput::timerEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QAudioBufferInput_SuperTimerEvent(QAudioBufferInput* self, QTimerEvent* event) {
    if (auto* vqaudiobufferinput = dynamic_cast<VirtualQAudioBufferInput*>(self)) {
        vqaudiobufferinput->QAudioBufferInput::timerEvent(event);
    } else
        qFatal("Error: Protected virtual method QAudioBufferInput::timerEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QAudioBufferInput_OnTimerEvent(QAudioBufferInput* self, intptr_t slot) {
    if (auto* vqaudiobufferinput = dynamic_cast<VirtualQAudioBufferInput*>(self))
        vqaudiobufferinput->qaudiobufferinput_timerevent_callback = reinterpret_cast<VirtualQAudioBufferInput::QAudioBufferInput_TimerEvent_Callback>(slot);
}

// Derived class handler implementation
void QAudioBufferInput_ChildEvent(QAudioBufferInput* self, QChildEvent* event) {
    auto* vqaudiobufferinput = dynamic_cast<VirtualQAudioBufferInput*>(self);
    if (vqaudiobufferinput) {
        vqaudiobufferinput->childEvent(event);
    } else {
        qFatal("Error: Protected virtual method QAudioBufferInput::childEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QAudioBufferInput_SuperChildEvent(QAudioBufferInput* self, QChildEvent* event) {
    if (auto* vqaudiobufferinput = dynamic_cast<VirtualQAudioBufferInput*>(self)) {
        vqaudiobufferinput->QAudioBufferInput::childEvent(event);
    } else
        qFatal("Error: Protected virtual method QAudioBufferInput::childEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QAudioBufferInput_OnChildEvent(QAudioBufferInput* self, intptr_t slot) {
    if (auto* vqaudiobufferinput = dynamic_cast<VirtualQAudioBufferInput*>(self))
        vqaudiobufferinput->qaudiobufferinput_childevent_callback = reinterpret_cast<VirtualQAudioBufferInput::QAudioBufferInput_ChildEvent_Callback>(slot);
}

// Derived class handler implementation
void QAudioBufferInput_CustomEvent(QAudioBufferInput* self, QEvent* event) {
    auto* vqaudiobufferinput = dynamic_cast<VirtualQAudioBufferInput*>(self);
    if (vqaudiobufferinput) {
        vqaudiobufferinput->customEvent(event);
    } else {
        qFatal("Error: Protected virtual method QAudioBufferInput::customEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QAudioBufferInput_SuperCustomEvent(QAudioBufferInput* self, QEvent* event) {
    if (auto* vqaudiobufferinput = dynamic_cast<VirtualQAudioBufferInput*>(self)) {
        vqaudiobufferinput->QAudioBufferInput::customEvent(event);
    } else
        qFatal("Error: Protected virtual method QAudioBufferInput::customEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QAudioBufferInput_OnCustomEvent(QAudioBufferInput* self, intptr_t slot) {
    if (auto* vqaudiobufferinput = dynamic_cast<VirtualQAudioBufferInput*>(self))
        vqaudiobufferinput->qaudiobufferinput_customevent_callback = reinterpret_cast<VirtualQAudioBufferInput::QAudioBufferInput_CustomEvent_Callback>(slot);
}

// Derived class handler implementation
void QAudioBufferInput_ConnectNotify(QAudioBufferInput* self, const QMetaMethod* signal) {
    auto* vqaudiobufferinput = dynamic_cast<VirtualQAudioBufferInput*>(self);
    if (vqaudiobufferinput) {
        vqaudiobufferinput->connectNotify(*signal);
    } else {
        qFatal("Error: Protected virtual method QAudioBufferInput::connectNotify called without a directly constructed type");
    }
}

// Base class handler implementation
void QAudioBufferInput_SuperConnectNotify(QAudioBufferInput* self, const QMetaMethod* signal) {
    if (auto* vqaudiobufferinput = dynamic_cast<VirtualQAudioBufferInput*>(self)) {
        vqaudiobufferinput->QAudioBufferInput::connectNotify(*signal);
    } else
        qFatal("Error: Protected virtual method QAudioBufferInput::connectNotify called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QAudioBufferInput_OnConnectNotify(QAudioBufferInput* self, intptr_t slot) {
    if (auto* vqaudiobufferinput = dynamic_cast<VirtualQAudioBufferInput*>(self))
        vqaudiobufferinput->qaudiobufferinput_connectnotify_callback = reinterpret_cast<VirtualQAudioBufferInput::QAudioBufferInput_ConnectNotify_Callback>(slot);
}

// Derived class handler implementation
void QAudioBufferInput_DisconnectNotify(QAudioBufferInput* self, const QMetaMethod* signal) {
    auto* vqaudiobufferinput = dynamic_cast<VirtualQAudioBufferInput*>(self);
    if (vqaudiobufferinput) {
        vqaudiobufferinput->disconnectNotify(*signal);
    } else {
        qFatal("Error: Protected virtual method QAudioBufferInput::disconnectNotify called without a directly constructed type");
    }
}

// Base class handler implementation
void QAudioBufferInput_SuperDisconnectNotify(QAudioBufferInput* self, const QMetaMethod* signal) {
    if (auto* vqaudiobufferinput = dynamic_cast<VirtualQAudioBufferInput*>(self)) {
        vqaudiobufferinput->QAudioBufferInput::disconnectNotify(*signal);
    } else
        qFatal("Error: Protected virtual method QAudioBufferInput::disconnectNotify called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QAudioBufferInput_OnDisconnectNotify(QAudioBufferInput* self, intptr_t slot) {
    if (auto* vqaudiobufferinput = dynamic_cast<VirtualQAudioBufferInput*>(self))
        vqaudiobufferinput->qaudiobufferinput_disconnectnotify_callback = reinterpret_cast<VirtualQAudioBufferInput::QAudioBufferInput_DisconnectNotify_Callback>(slot);
}

// Derived class protected handler implementation
QObject* QAudioBufferInput_Sender(const QAudioBufferInput* self) {
    if (auto* vqaudiobufferinput = const_cast<VirtualQAudioBufferInput*>(dynamic_cast<const VirtualQAudioBufferInput*>(self))) {
        return vqaudiobufferinput->VirtualQAudioBufferInput::sender();
    } else
        qFatal("Error: Protected method QAudioBufferInput::sender called without a directly constructed type");
}

// Derived class protected handler implementation
int QAudioBufferInput_SenderSignalIndex(const QAudioBufferInput* self) {
    if (auto* vqaudiobufferinput = const_cast<VirtualQAudioBufferInput*>(dynamic_cast<const VirtualQAudioBufferInput*>(self))) {
        return vqaudiobufferinput->VirtualQAudioBufferInput::senderSignalIndex();
    } else
        qFatal("Error: Protected method QAudioBufferInput::senderSignalIndex called without a directly constructed type");
}

// Derived class protected handler implementation
int QAudioBufferInput_Receivers(const QAudioBufferInput* self, const char* signal) {
    if (auto* vqaudiobufferinput = const_cast<VirtualQAudioBufferInput*>(dynamic_cast<const VirtualQAudioBufferInput*>(self))) {
        return vqaudiobufferinput->VirtualQAudioBufferInput::receivers(signal);
    } else
        qFatal("Error: Protected method QAudioBufferInput::receivers called without a directly constructed type");
}

// Derived class protected handler implementation
bool QAudioBufferInput_IsSignalConnected(const QAudioBufferInput* self, const QMetaMethod* signal) {
    if (auto* vqaudiobufferinput = const_cast<VirtualQAudioBufferInput*>(dynamic_cast<const VirtualQAudioBufferInput*>(self))) {
        return vqaudiobufferinput->VirtualQAudioBufferInput::isSignalConnected(*signal);
    } else
        qFatal("Error: Protected method QAudioBufferInput::isSignalConnected called without a directly constructed type");
}

void QAudioBufferInput_Delete(QAudioBufferInput* self) {
    delete self;
}
