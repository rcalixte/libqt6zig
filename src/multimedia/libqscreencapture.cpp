#include <QChildEvent>
#include <QEvent>
#include <QMediaCaptureSession>
#include <QMetaMethod>
#include <QMetaObject>
#include <QObject>
#include <QScreen>
#include <QScreenCapture>
#include <QString>
#include <QByteArray>
#include <cstring>
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
    auto* vqscreencapture = dynamic_cast<VirtualQScreenCapture*>(self);
    if (vqscreencapture && vqscreencapture->isVirtualQScreenCapture) {
        return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return ((VirtualQScreenCapture*)self)->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

// Subclass method to allow providing a virtual method re-implementation
void QScreenCapture_OnMetacall(QScreenCapture* self, intptr_t slot) {
    auto* vqscreencapture = dynamic_cast<VirtualQScreenCapture*>(self);
    if (vqscreencapture && vqscreencapture->isVirtualQScreenCapture) {
        vqscreencapture->setQScreenCapture_Metacall_Callback(reinterpret_cast<VirtualQScreenCapture::QScreenCapture_Metacall_Callback>(slot));
    }
}

// Virtual base class handler implementation
int QScreenCapture_QBaseMetacall(QScreenCapture* self, int param1, int param2, void** param3) {
    auto* vqscreencapture = dynamic_cast<VirtualQScreenCapture*>(self);
    if (vqscreencapture && vqscreencapture->isVirtualQScreenCapture) {
        vqscreencapture->setQScreenCapture_Metacall_IsBase(true);
        return vqscreencapture->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return ((VirtualQScreenCapture*)self)->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

libqt_string QScreenCapture_Tr(const char* s) {
    QString _ret = QScreenCapture::tr(s);
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
    QString _ret = self->errorString();
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
    QScreenCapture::connect(self, &QScreenCapture::activeChanged, [self, slotFunc](bool param1) {
        bool sigval1 = param1;
        slotFunc(self, sigval1);
    });
}

void QScreenCapture_ErrorChanged(QScreenCapture* self) {
    self->errorChanged();
}

void QScreenCapture_Connect_ErrorChanged(QScreenCapture* self, intptr_t slot) {
    void (*slotFunc)(QScreenCapture*) = reinterpret_cast<void (*)(QScreenCapture*)>(slot);
    QScreenCapture::connect(self, &QScreenCapture::errorChanged, [self, slotFunc]() {
        slotFunc(self);
    });
}

void QScreenCapture_ScreenChanged(QScreenCapture* self, QScreen* param1) {
    self->screenChanged(param1);
}

void QScreenCapture_Connect_ScreenChanged(QScreenCapture* self, intptr_t slot) {
    void (*slotFunc)(QScreenCapture*, QScreen*) = reinterpret_cast<void (*)(QScreenCapture*, QScreen*)>(slot);
    QScreenCapture::connect(self, &QScreenCapture::screenChanged, [self, slotFunc](QScreen* param1) {
        QScreen* sigval1 = param1;
        slotFunc(self, sigval1);
    });
}

void QScreenCapture_ErrorOccurred(QScreenCapture* self, int errorVal, const libqt_string errorString) {
    QString errorString_QString = QString::fromUtf8(errorString.data, errorString.len);
    self->errorOccurred(static_cast<QScreenCapture::Error>(errorVal), errorString_QString);
}

void QScreenCapture_Connect_ErrorOccurred(QScreenCapture* self, intptr_t slot) {
    void (*slotFunc)(QScreenCapture*, int, libqt_string) = reinterpret_cast<void (*)(QScreenCapture*, int, libqt_string)>(slot);
    QScreenCapture::connect(self, &QScreenCapture::errorOccurred, [self, slotFunc](QScreenCapture::Error errorVal, const QString& errorString) {
        int sigval1 = static_cast<int>(errorVal);
        const QString errorString_ret = errorString;
        // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
        QByteArray errorString_b = errorString_ret.toUtf8();
        libqt_string errorString_str;
        errorString_str.len = errorString_b.length();
        errorString_str.data = static_cast<const char*>(malloc(errorString_str.len + 1));
        memcpy((void*)errorString_str.data, errorString_b.data(), errorString_str.len);
        ((char*)errorString_str.data)[errorString_str.len] = '\0';
        libqt_string sigval2 = errorString_str;
        slotFunc(self, sigval1, sigval2);
    });
}

libqt_string QScreenCapture_Tr2(const char* s, const char* c) {
    QString _ret = QScreenCapture::tr(s, c);
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
    QString _ret = QScreenCapture::tr(s, c, static_cast<int>(n));
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
bool QScreenCapture_Event(QScreenCapture* self, QEvent* event) {
    auto* vqscreencapture = dynamic_cast<VirtualQScreenCapture*>(self);
    if (vqscreencapture && vqscreencapture->isVirtualQScreenCapture) {
        return vqscreencapture->event(event);
    } else {
        return self->QScreenCapture::event(event);
    }
}

// Base class handler implementation
bool QScreenCapture_QBaseEvent(QScreenCapture* self, QEvent* event) {
    auto* vqscreencapture = dynamic_cast<VirtualQScreenCapture*>(self);
    if (vqscreencapture && vqscreencapture->isVirtualQScreenCapture) {
        vqscreencapture->setQScreenCapture_Event_IsBase(true);
        return vqscreencapture->event(event);
    } else {
        return self->QScreenCapture::event(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QScreenCapture_OnEvent(QScreenCapture* self, intptr_t slot) {
    auto* vqscreencapture = dynamic_cast<VirtualQScreenCapture*>(self);
    if (vqscreencapture && vqscreencapture->isVirtualQScreenCapture) {
        vqscreencapture->setQScreenCapture_Event_Callback(reinterpret_cast<VirtualQScreenCapture::QScreenCapture_Event_Callback>(slot));
    }
}

// Derived class handler implementation
bool QScreenCapture_EventFilter(QScreenCapture* self, QObject* watched, QEvent* event) {
    auto* vqscreencapture = dynamic_cast<VirtualQScreenCapture*>(self);
    if (vqscreencapture && vqscreencapture->isVirtualQScreenCapture) {
        return vqscreencapture->eventFilter(watched, event);
    } else {
        return self->QScreenCapture::eventFilter(watched, event);
    }
}

// Base class handler implementation
bool QScreenCapture_QBaseEventFilter(QScreenCapture* self, QObject* watched, QEvent* event) {
    auto* vqscreencapture = dynamic_cast<VirtualQScreenCapture*>(self);
    if (vqscreencapture && vqscreencapture->isVirtualQScreenCapture) {
        vqscreencapture->setQScreenCapture_EventFilter_IsBase(true);
        return vqscreencapture->eventFilter(watched, event);
    } else {
        return self->QScreenCapture::eventFilter(watched, event);
    }
}

// Auxiliary method to allow providing re-implementation
void QScreenCapture_OnEventFilter(QScreenCapture* self, intptr_t slot) {
    auto* vqscreencapture = dynamic_cast<VirtualQScreenCapture*>(self);
    if (vqscreencapture && vqscreencapture->isVirtualQScreenCapture) {
        vqscreencapture->setQScreenCapture_EventFilter_Callback(reinterpret_cast<VirtualQScreenCapture::QScreenCapture_EventFilter_Callback>(slot));
    }
}

// Derived class handler implementation
void QScreenCapture_TimerEvent(QScreenCapture* self, QTimerEvent* event) {
    auto* vqscreencapture = dynamic_cast<VirtualQScreenCapture*>(self);
    if (vqscreencapture && vqscreencapture->isVirtualQScreenCapture) {
        vqscreencapture->timerEvent(event);
    } else {
        ((VirtualQScreenCapture*)self)->timerEvent(event);
    }
}

// Base class handler implementation
void QScreenCapture_QBaseTimerEvent(QScreenCapture* self, QTimerEvent* event) {
    auto* vqscreencapture = dynamic_cast<VirtualQScreenCapture*>(self);
    if (vqscreencapture && vqscreencapture->isVirtualQScreenCapture) {
        vqscreencapture->setQScreenCapture_TimerEvent_IsBase(true);
        vqscreencapture->timerEvent(event);
    } else {
        ((VirtualQScreenCapture*)self)->timerEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QScreenCapture_OnTimerEvent(QScreenCapture* self, intptr_t slot) {
    auto* vqscreencapture = dynamic_cast<VirtualQScreenCapture*>(self);
    if (vqscreencapture && vqscreencapture->isVirtualQScreenCapture) {
        vqscreencapture->setQScreenCapture_TimerEvent_Callback(reinterpret_cast<VirtualQScreenCapture::QScreenCapture_TimerEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QScreenCapture_ChildEvent(QScreenCapture* self, QChildEvent* event) {
    auto* vqscreencapture = dynamic_cast<VirtualQScreenCapture*>(self);
    if (vqscreencapture && vqscreencapture->isVirtualQScreenCapture) {
        vqscreencapture->childEvent(event);
    } else {
        ((VirtualQScreenCapture*)self)->childEvent(event);
    }
}

// Base class handler implementation
void QScreenCapture_QBaseChildEvent(QScreenCapture* self, QChildEvent* event) {
    auto* vqscreencapture = dynamic_cast<VirtualQScreenCapture*>(self);
    if (vqscreencapture && vqscreencapture->isVirtualQScreenCapture) {
        vqscreencapture->setQScreenCapture_ChildEvent_IsBase(true);
        vqscreencapture->childEvent(event);
    } else {
        ((VirtualQScreenCapture*)self)->childEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QScreenCapture_OnChildEvent(QScreenCapture* self, intptr_t slot) {
    auto* vqscreencapture = dynamic_cast<VirtualQScreenCapture*>(self);
    if (vqscreencapture && vqscreencapture->isVirtualQScreenCapture) {
        vqscreencapture->setQScreenCapture_ChildEvent_Callback(reinterpret_cast<VirtualQScreenCapture::QScreenCapture_ChildEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QScreenCapture_CustomEvent(QScreenCapture* self, QEvent* event) {
    auto* vqscreencapture = dynamic_cast<VirtualQScreenCapture*>(self);
    if (vqscreencapture && vqscreencapture->isVirtualQScreenCapture) {
        vqscreencapture->customEvent(event);
    } else {
        ((VirtualQScreenCapture*)self)->customEvent(event);
    }
}

// Base class handler implementation
void QScreenCapture_QBaseCustomEvent(QScreenCapture* self, QEvent* event) {
    auto* vqscreencapture = dynamic_cast<VirtualQScreenCapture*>(self);
    if (vqscreencapture && vqscreencapture->isVirtualQScreenCapture) {
        vqscreencapture->setQScreenCapture_CustomEvent_IsBase(true);
        vqscreencapture->customEvent(event);
    } else {
        ((VirtualQScreenCapture*)self)->customEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QScreenCapture_OnCustomEvent(QScreenCapture* self, intptr_t slot) {
    auto* vqscreencapture = dynamic_cast<VirtualQScreenCapture*>(self);
    if (vqscreencapture && vqscreencapture->isVirtualQScreenCapture) {
        vqscreencapture->setQScreenCapture_CustomEvent_Callback(reinterpret_cast<VirtualQScreenCapture::QScreenCapture_CustomEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QScreenCapture_ConnectNotify(QScreenCapture* self, const QMetaMethod* signal) {
    auto* vqscreencapture = dynamic_cast<VirtualQScreenCapture*>(self);
    if (vqscreencapture && vqscreencapture->isVirtualQScreenCapture) {
        vqscreencapture->connectNotify(*signal);
    } else {
        ((VirtualQScreenCapture*)self)->connectNotify(*signal);
    }
}

// Base class handler implementation
void QScreenCapture_QBaseConnectNotify(QScreenCapture* self, const QMetaMethod* signal) {
    auto* vqscreencapture = dynamic_cast<VirtualQScreenCapture*>(self);
    if (vqscreencapture && vqscreencapture->isVirtualQScreenCapture) {
        vqscreencapture->setQScreenCapture_ConnectNotify_IsBase(true);
        vqscreencapture->connectNotify(*signal);
    } else {
        ((VirtualQScreenCapture*)self)->connectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QScreenCapture_OnConnectNotify(QScreenCapture* self, intptr_t slot) {
    auto* vqscreencapture = dynamic_cast<VirtualQScreenCapture*>(self);
    if (vqscreencapture && vqscreencapture->isVirtualQScreenCapture) {
        vqscreencapture->setQScreenCapture_ConnectNotify_Callback(reinterpret_cast<VirtualQScreenCapture::QScreenCapture_ConnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
void QScreenCapture_DisconnectNotify(QScreenCapture* self, const QMetaMethod* signal) {
    auto* vqscreencapture = dynamic_cast<VirtualQScreenCapture*>(self);
    if (vqscreencapture && vqscreencapture->isVirtualQScreenCapture) {
        vqscreencapture->disconnectNotify(*signal);
    } else {
        ((VirtualQScreenCapture*)self)->disconnectNotify(*signal);
    }
}

// Base class handler implementation
void QScreenCapture_QBaseDisconnectNotify(QScreenCapture* self, const QMetaMethod* signal) {
    auto* vqscreencapture = dynamic_cast<VirtualQScreenCapture*>(self);
    if (vqscreencapture && vqscreencapture->isVirtualQScreenCapture) {
        vqscreencapture->setQScreenCapture_DisconnectNotify_IsBase(true);
        vqscreencapture->disconnectNotify(*signal);
    } else {
        ((VirtualQScreenCapture*)self)->disconnectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QScreenCapture_OnDisconnectNotify(QScreenCapture* self, intptr_t slot) {
    auto* vqscreencapture = dynamic_cast<VirtualQScreenCapture*>(self);
    if (vqscreencapture && vqscreencapture->isVirtualQScreenCapture) {
        vqscreencapture->setQScreenCapture_DisconnectNotify_Callback(reinterpret_cast<VirtualQScreenCapture::QScreenCapture_DisconnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
QObject* QScreenCapture_Sender(const QScreenCapture* self) {
    auto* vqscreencapture = const_cast<VirtualQScreenCapture*>(dynamic_cast<const VirtualQScreenCapture*>(self));
    if (vqscreencapture && vqscreencapture->isVirtualQScreenCapture) {
        return vqscreencapture->sender();
    } else {
        return ((VirtualQScreenCapture*)self)->sender();
    }
}

// Base class handler implementation
QObject* QScreenCapture_QBaseSender(const QScreenCapture* self) {
    auto* vqscreencapture = const_cast<VirtualQScreenCapture*>(dynamic_cast<const VirtualQScreenCapture*>(self));
    if (vqscreencapture && vqscreencapture->isVirtualQScreenCapture) {
        vqscreencapture->setQScreenCapture_Sender_IsBase(true);
        return vqscreencapture->sender();
    } else {
        return ((VirtualQScreenCapture*)self)->sender();
    }
}

// Auxiliary method to allow providing re-implementation
void QScreenCapture_OnSender(const QScreenCapture* self, intptr_t slot) {
    auto* vqscreencapture = const_cast<VirtualQScreenCapture*>(dynamic_cast<const VirtualQScreenCapture*>(self));
    if (vqscreencapture && vqscreencapture->isVirtualQScreenCapture) {
        vqscreencapture->setQScreenCapture_Sender_Callback(reinterpret_cast<VirtualQScreenCapture::QScreenCapture_Sender_Callback>(slot));
    }
}

// Derived class handler implementation
int QScreenCapture_SenderSignalIndex(const QScreenCapture* self) {
    auto* vqscreencapture = const_cast<VirtualQScreenCapture*>(dynamic_cast<const VirtualQScreenCapture*>(self));
    if (vqscreencapture && vqscreencapture->isVirtualQScreenCapture) {
        return vqscreencapture->senderSignalIndex();
    } else {
        return ((VirtualQScreenCapture*)self)->senderSignalIndex();
    }
}

// Base class handler implementation
int QScreenCapture_QBaseSenderSignalIndex(const QScreenCapture* self) {
    auto* vqscreencapture = const_cast<VirtualQScreenCapture*>(dynamic_cast<const VirtualQScreenCapture*>(self));
    if (vqscreencapture && vqscreencapture->isVirtualQScreenCapture) {
        vqscreencapture->setQScreenCapture_SenderSignalIndex_IsBase(true);
        return vqscreencapture->senderSignalIndex();
    } else {
        return ((VirtualQScreenCapture*)self)->senderSignalIndex();
    }
}

// Auxiliary method to allow providing re-implementation
void QScreenCapture_OnSenderSignalIndex(const QScreenCapture* self, intptr_t slot) {
    auto* vqscreencapture = const_cast<VirtualQScreenCapture*>(dynamic_cast<const VirtualQScreenCapture*>(self));
    if (vqscreencapture && vqscreencapture->isVirtualQScreenCapture) {
        vqscreencapture->setQScreenCapture_SenderSignalIndex_Callback(reinterpret_cast<VirtualQScreenCapture::QScreenCapture_SenderSignalIndex_Callback>(slot));
    }
}

// Derived class handler implementation
int QScreenCapture_Receivers(const QScreenCapture* self, const char* signal) {
    auto* vqscreencapture = const_cast<VirtualQScreenCapture*>(dynamic_cast<const VirtualQScreenCapture*>(self));
    if (vqscreencapture && vqscreencapture->isVirtualQScreenCapture) {
        return vqscreencapture->receivers(signal);
    } else {
        return ((VirtualQScreenCapture*)self)->receivers(signal);
    }
}

// Base class handler implementation
int QScreenCapture_QBaseReceivers(const QScreenCapture* self, const char* signal) {
    auto* vqscreencapture = const_cast<VirtualQScreenCapture*>(dynamic_cast<const VirtualQScreenCapture*>(self));
    if (vqscreencapture && vqscreencapture->isVirtualQScreenCapture) {
        vqscreencapture->setQScreenCapture_Receivers_IsBase(true);
        return vqscreencapture->receivers(signal);
    } else {
        return ((VirtualQScreenCapture*)self)->receivers(signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QScreenCapture_OnReceivers(const QScreenCapture* self, intptr_t slot) {
    auto* vqscreencapture = const_cast<VirtualQScreenCapture*>(dynamic_cast<const VirtualQScreenCapture*>(self));
    if (vqscreencapture && vqscreencapture->isVirtualQScreenCapture) {
        vqscreencapture->setQScreenCapture_Receivers_Callback(reinterpret_cast<VirtualQScreenCapture::QScreenCapture_Receivers_Callback>(slot));
    }
}

// Derived class handler implementation
bool QScreenCapture_IsSignalConnected(const QScreenCapture* self, const QMetaMethod* signal) {
    auto* vqscreencapture = const_cast<VirtualQScreenCapture*>(dynamic_cast<const VirtualQScreenCapture*>(self));
    if (vqscreencapture && vqscreencapture->isVirtualQScreenCapture) {
        return vqscreencapture->isSignalConnected(*signal);
    } else {
        return ((VirtualQScreenCapture*)self)->isSignalConnected(*signal);
    }
}

// Base class handler implementation
bool QScreenCapture_QBaseIsSignalConnected(const QScreenCapture* self, const QMetaMethod* signal) {
    auto* vqscreencapture = const_cast<VirtualQScreenCapture*>(dynamic_cast<const VirtualQScreenCapture*>(self));
    if (vqscreencapture && vqscreencapture->isVirtualQScreenCapture) {
        vqscreencapture->setQScreenCapture_IsSignalConnected_IsBase(true);
        return vqscreencapture->isSignalConnected(*signal);
    } else {
        return ((VirtualQScreenCapture*)self)->isSignalConnected(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QScreenCapture_OnIsSignalConnected(const QScreenCapture* self, intptr_t slot) {
    auto* vqscreencapture = const_cast<VirtualQScreenCapture*>(dynamic_cast<const VirtualQScreenCapture*>(self));
    if (vqscreencapture && vqscreencapture->isVirtualQScreenCapture) {
        vqscreencapture->setQScreenCapture_IsSignalConnected_Callback(reinterpret_cast<VirtualQScreenCapture::QScreenCapture_IsSignalConnected_Callback>(slot));
    }
}

void QScreenCapture_Delete(QScreenCapture* self) {
    delete self;
}
