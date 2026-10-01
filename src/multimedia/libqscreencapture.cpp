#include <QChildEvent>
#include <QEvent>
#include <QMediaCaptureSession>
#include <QMetaMethod>
#include <QMetaObject>
#include <QObject>
#include <QScreen>
#include <QScreenCapture>
#include <QString>
#include <QTimerEvent>
#include <qscreencapture.h>
#include "libqscreencapture.h"
#include "libqscreencapture.hxx"

QScreenCapture* QScreenCapture_new() {
    return new VirtualQScreenCapture();
}

QScreenCapture* QScreenCapture_new2(QObject* parent) {
    return new VirtualQScreenCapture(parent);
}

QMetaObject* QScreenCapture_MetaObject(const QScreenCapture* self) {
    return (QMetaObject*)self->metaObject();
}

void* QScreenCapture_Metacast(QScreenCapture* self, const char* param1) {
    return self->qt_metacast(param1);
}

int QScreenCapture_Metacall(QScreenCapture* self, int param1, int param2, void** param3) {
    return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

libqt_string QScreenCapture_Tr(const char* s) {
    auto _ret = QScreenCapture::tr(s);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

QMediaCaptureSession* QScreenCapture_CaptureSession(const QScreenCapture* self) {
    return self->captureSession();
}

void QScreenCapture_SetScreen(QScreenCapture* self, QScreen* screen) {
    self->setScreen(screen);
}

QScreen* QScreenCapture_Screen(const QScreenCapture* self) {
    return self->screen();
}

bool QScreenCapture_IsActive(const QScreenCapture* self) {
    return self->isActive();
}

int QScreenCapture_Error(const QScreenCapture* self) {
    return static_cast<int>(self->error());
}

libqt_string QScreenCapture_ErrorString(const QScreenCapture* self) {
    auto _ret = self->errorString();
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

void QScreenCapture_SetActive(QScreenCapture* self, bool active) {
    self->setActive(active);
}

void QScreenCapture_Start(QScreenCapture* self) {
    self->start();
}

void QScreenCapture_Stop(QScreenCapture* self) {
    self->stop();
}

void QScreenCapture_ActiveChanged(QScreenCapture* self, bool param1) {
    self->activeChanged(param1);
}

void QScreenCapture_Connect_ActiveChanged(QScreenCapture* self, intptr_t slot) {
    void (*slotFunc)(QScreenCapture*, bool) = reinterpret_cast<void (*)(QScreenCapture*, bool)>(slot);
    QScreenCapture::connect(self,
                            static_cast<void (QScreenCapture::*)(bool)>(&QScreenCapture::activeChanged),
                            [self, slotFunc](bool param1) {
                                bool sigval1 = param1;
                                slotFunc(self, sigval1);
                            });
}

void QScreenCapture_ErrorChanged(QScreenCapture* self) {
    self->errorChanged();
}

void QScreenCapture_Connect_ErrorChanged(QScreenCapture* self, intptr_t slot) {
    void (*slotFunc)(QScreenCapture*) = reinterpret_cast<void (*)(QScreenCapture*)>(slot);
    QScreenCapture::connect(self,
                            static_cast<void (QScreenCapture::*)()>(&QScreenCapture::errorChanged),
                            [self, slotFunc]() {
                                slotFunc(self);
                            });
}

void QScreenCapture_ScreenChanged(QScreenCapture* self, QScreen* param1) {
    self->screenChanged(param1);
}

void QScreenCapture_Connect_ScreenChanged(QScreenCapture* self, intptr_t slot) {
    void (*slotFunc)(QScreenCapture*, QScreen*) = reinterpret_cast<void (*)(QScreenCapture*, QScreen*)>(slot);
    QScreenCapture::connect(self,
                            static_cast<void (QScreenCapture::*)(QScreen*)>(&QScreenCapture::screenChanged),
                            [self, slotFunc](QScreen* param1) {
                                QScreen* sigval1 = param1;
                                slotFunc(self, sigval1);
                            });
}

void QScreenCapture_ErrorOccurred(QScreenCapture* self, int errorVal, const libqt_string errorString) {
    QString errorString_QString = QString::fromUtf8(errorString.data, errorString.len);
    self->errorOccurred(static_cast<QScreenCapture::Error>(errorVal), errorString_QString);
}

void QScreenCapture_Connect_ErrorOccurred(QScreenCapture* self, intptr_t slot) {
    void (*slotFunc)(QScreenCapture*, int, const char*) = reinterpret_cast<void (*)(QScreenCapture*, int, const char*)>(slot);
    QScreenCapture::connect(self,
                            static_cast<void (QScreenCapture::*)(QScreenCapture::Error, const QString&)>(&QScreenCapture::errorOccurred),
                            [self, slotFunc](QScreenCapture::Error errorVal, const QString& errorString) {
                                int sigval1 = static_cast<int>(errorVal);
                                const auto errorString_ret = errorString;
                                // Convert QString from UTF-16 in C++ RAII memory to UTF-8 chars in manually-managed C memory
                                QByteArray errorString_b = errorString_ret.toUtf8();
                                auto errorString_str_len = errorString_b.length();
                                const char* errorString_str = static_cast<const char*>(malloc(errorString_str_len + 1));
                                memcpy((void*)errorString_str, errorString_b.data(), errorString_str_len);
                                ((char*)errorString_str)[errorString_str_len] = '\0';
                                const char* sigval2 = errorString_str;
                                slotFunc(self, sigval1, sigval2);
                                libqt_free(errorString_str);
                            });
}

libqt_string QScreenCapture_Tr2(const char* s, const char* c) {
    auto _ret = QScreenCapture::tr(s, c);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string QScreenCapture_Tr3(const char* s, const char* c, int n) {
    auto _ret = QScreenCapture::tr(s, c, static_cast<int>(n));
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
QMetaObject* QScreenCapture_SuperMetaObject(const QScreenCapture* self) {
    return (QMetaObject*)self->QScreenCapture::metaObject();
}

// Auxiliary method to allow providing re-implementation
void QScreenCapture_OnMetaObject(QScreenCapture* self, intptr_t slot) {
    if (auto* vqscreencapture = const_cast<VirtualQScreenCapture*>(dynamic_cast<const VirtualQScreenCapture*>(self)))
        vqscreencapture->qscreencapture_metaobject_callback = reinterpret_cast<VirtualQScreenCapture::QScreenCapture_MetaObject_Callback>(slot);
}

// Base class handler implementation
void* QScreenCapture_SuperMetacast(QScreenCapture* self, const char* param1) {
    return self->QScreenCapture::qt_metacast(param1);
}

// Auxiliary method to allow providing re-implementation
void QScreenCapture_OnMetacast(QScreenCapture* self, intptr_t slot) {
    if (auto* vqscreencapture = dynamic_cast<VirtualQScreenCapture*>(self))
        vqscreencapture->qscreencapture_metacast_callback = reinterpret_cast<VirtualQScreenCapture::QScreenCapture_Metacast_Callback>(slot);
}

// Base class handler implementation
int QScreenCapture_SuperMetacall(QScreenCapture* self, int param1, int param2, void** param3) {
    return self->QScreenCapture::qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

// Auxiliary method to allow providing re-implementation
void QScreenCapture_OnMetacall(QScreenCapture* self, intptr_t slot) {
    if (auto* vqscreencapture = dynamic_cast<VirtualQScreenCapture*>(self))
        vqscreencapture->qscreencapture_metacall_callback = reinterpret_cast<VirtualQScreenCapture::QScreenCapture_Metacall_Callback>(slot);
}

// Derived class handler implementation
bool QScreenCapture_Event(QScreenCapture* self, QEvent* event) {
    return self->event(event);
}

// Base class handler implementation
bool QScreenCapture_SuperEvent(QScreenCapture* self, QEvent* event) {
    return self->QScreenCapture::event(event);
}

// Auxiliary method to allow providing re-implementation
void QScreenCapture_OnEvent(QScreenCapture* self, intptr_t slot) {
    if (auto* vqscreencapture = dynamic_cast<VirtualQScreenCapture*>(self))
        vqscreencapture->qscreencapture_event_callback = reinterpret_cast<VirtualQScreenCapture::QScreenCapture_Event_Callback>(slot);
}

// Derived class handler implementation
bool QScreenCapture_EventFilter(QScreenCapture* self, QObject* watched, QEvent* event) {
    return self->eventFilter(watched, event);
}

// Base class handler implementation
bool QScreenCapture_SuperEventFilter(QScreenCapture* self, QObject* watched, QEvent* event) {
    return self->QScreenCapture::eventFilter(watched, event);
}

// Auxiliary method to allow providing re-implementation
void QScreenCapture_OnEventFilter(QScreenCapture* self, intptr_t slot) {
    if (auto* vqscreencapture = dynamic_cast<VirtualQScreenCapture*>(self))
        vqscreencapture->qscreencapture_eventfilter_callback = reinterpret_cast<VirtualQScreenCapture::QScreenCapture_EventFilter_Callback>(slot);
}

// Derived class handler implementation
void QScreenCapture_TimerEvent(QScreenCapture* self, QTimerEvent* event) {
    auto* vqscreencapture = dynamic_cast<VirtualQScreenCapture*>(self);
    if (vqscreencapture) {
        vqscreencapture->timerEvent(event);
    } else {
        qFatal("Error: Protected virtual method QScreenCapture::timerEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QScreenCapture_SuperTimerEvent(QScreenCapture* self, QTimerEvent* event) {
    if (auto* vqscreencapture = dynamic_cast<VirtualQScreenCapture*>(self)) {
        vqscreencapture->QScreenCapture::timerEvent(event);
    } else
        qFatal("Error: Protected virtual method QScreenCapture::timerEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QScreenCapture_OnTimerEvent(QScreenCapture* self, intptr_t slot) {
    if (auto* vqscreencapture = dynamic_cast<VirtualQScreenCapture*>(self))
        vqscreencapture->qscreencapture_timerevent_callback = reinterpret_cast<VirtualQScreenCapture::QScreenCapture_TimerEvent_Callback>(slot);
}

// Derived class handler implementation
void QScreenCapture_ChildEvent(QScreenCapture* self, QChildEvent* event) {
    auto* vqscreencapture = dynamic_cast<VirtualQScreenCapture*>(self);
    if (vqscreencapture) {
        vqscreencapture->childEvent(event);
    } else {
        qFatal("Error: Protected virtual method QScreenCapture::childEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QScreenCapture_SuperChildEvent(QScreenCapture* self, QChildEvent* event) {
    if (auto* vqscreencapture = dynamic_cast<VirtualQScreenCapture*>(self)) {
        vqscreencapture->QScreenCapture::childEvent(event);
    } else
        qFatal("Error: Protected virtual method QScreenCapture::childEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QScreenCapture_OnChildEvent(QScreenCapture* self, intptr_t slot) {
    if (auto* vqscreencapture = dynamic_cast<VirtualQScreenCapture*>(self))
        vqscreencapture->qscreencapture_childevent_callback = reinterpret_cast<VirtualQScreenCapture::QScreenCapture_ChildEvent_Callback>(slot);
}

// Derived class handler implementation
void QScreenCapture_CustomEvent(QScreenCapture* self, QEvent* event) {
    auto* vqscreencapture = dynamic_cast<VirtualQScreenCapture*>(self);
    if (vqscreencapture) {
        vqscreencapture->customEvent(event);
    } else {
        qFatal("Error: Protected virtual method QScreenCapture::customEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QScreenCapture_SuperCustomEvent(QScreenCapture* self, QEvent* event) {
    if (auto* vqscreencapture = dynamic_cast<VirtualQScreenCapture*>(self)) {
        vqscreencapture->QScreenCapture::customEvent(event);
    } else
        qFatal("Error: Protected virtual method QScreenCapture::customEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QScreenCapture_OnCustomEvent(QScreenCapture* self, intptr_t slot) {
    if (auto* vqscreencapture = dynamic_cast<VirtualQScreenCapture*>(self))
        vqscreencapture->qscreencapture_customevent_callback = reinterpret_cast<VirtualQScreenCapture::QScreenCapture_CustomEvent_Callback>(slot);
}

// Derived class handler implementation
void QScreenCapture_ConnectNotify(QScreenCapture* self, const QMetaMethod* signal) {
    auto* vqscreencapture = dynamic_cast<VirtualQScreenCapture*>(self);
    if (vqscreencapture) {
        vqscreencapture->connectNotify(*signal);
    } else {
        qFatal("Error: Protected virtual method QScreenCapture::connectNotify called without a directly constructed type");
    }
}

// Base class handler implementation
void QScreenCapture_SuperConnectNotify(QScreenCapture* self, const QMetaMethod* signal) {
    if (auto* vqscreencapture = dynamic_cast<VirtualQScreenCapture*>(self)) {
        vqscreencapture->QScreenCapture::connectNotify(*signal);
    } else
        qFatal("Error: Protected virtual method QScreenCapture::connectNotify called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QScreenCapture_OnConnectNotify(QScreenCapture* self, intptr_t slot) {
    if (auto* vqscreencapture = dynamic_cast<VirtualQScreenCapture*>(self))
        vqscreencapture->qscreencapture_connectnotify_callback = reinterpret_cast<VirtualQScreenCapture::QScreenCapture_ConnectNotify_Callback>(slot);
}

// Derived class handler implementation
void QScreenCapture_DisconnectNotify(QScreenCapture* self, const QMetaMethod* signal) {
    auto* vqscreencapture = dynamic_cast<VirtualQScreenCapture*>(self);
    if (vqscreencapture) {
        vqscreencapture->disconnectNotify(*signal);
    } else {
        qFatal("Error: Protected virtual method QScreenCapture::disconnectNotify called without a directly constructed type");
    }
}

// Base class handler implementation
void QScreenCapture_SuperDisconnectNotify(QScreenCapture* self, const QMetaMethod* signal) {
    if (auto* vqscreencapture = dynamic_cast<VirtualQScreenCapture*>(self)) {
        vqscreencapture->QScreenCapture::disconnectNotify(*signal);
    } else
        qFatal("Error: Protected virtual method QScreenCapture::disconnectNotify called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QScreenCapture_OnDisconnectNotify(QScreenCapture* self, intptr_t slot) {
    if (auto* vqscreencapture = dynamic_cast<VirtualQScreenCapture*>(self))
        vqscreencapture->qscreencapture_disconnectnotify_callback = reinterpret_cast<VirtualQScreenCapture::QScreenCapture_DisconnectNotify_Callback>(slot);
}

// Derived class protected handler implementation
QObject* QScreenCapture_Sender(const QScreenCapture* self) {
    if (auto* vqscreencapture = const_cast<VirtualQScreenCapture*>(dynamic_cast<const VirtualQScreenCapture*>(self))) {
        return vqscreencapture->VirtualQScreenCapture::sender();
    } else
        qFatal("Error: Protected method QScreenCapture::sender called without a directly constructed type");
}

// Derived class protected handler implementation
int QScreenCapture_SenderSignalIndex(const QScreenCapture* self) {
    if (auto* vqscreencapture = const_cast<VirtualQScreenCapture*>(dynamic_cast<const VirtualQScreenCapture*>(self))) {
        return vqscreencapture->VirtualQScreenCapture::senderSignalIndex();
    } else
        qFatal("Error: Protected method QScreenCapture::senderSignalIndex called without a directly constructed type");
}

// Derived class protected handler implementation
int QScreenCapture_Receivers(const QScreenCapture* self, const char* signal) {
    if (auto* vqscreencapture = const_cast<VirtualQScreenCapture*>(dynamic_cast<const VirtualQScreenCapture*>(self))) {
        return vqscreencapture->VirtualQScreenCapture::receivers(signal);
    } else
        qFatal("Error: Protected method QScreenCapture::receivers called without a directly constructed type");
}

// Derived class protected handler implementation
bool QScreenCapture_IsSignalConnected(const QScreenCapture* self, const QMetaMethod* signal) {
    if (auto* vqscreencapture = const_cast<VirtualQScreenCapture*>(dynamic_cast<const VirtualQScreenCapture*>(self))) {
        return vqscreencapture->VirtualQScreenCapture::isSignalConnected(*signal);
    } else
        qFatal("Error: Protected method QScreenCapture::isSignalConnected called without a directly constructed type");
}

void QScreenCapture_Delete(QScreenCapture* self) {
    delete self;
}
