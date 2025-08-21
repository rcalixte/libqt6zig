#include <QCapturableWindow>
#include <QChildEvent>
#include <QEvent>
#include <QList>
#include <QMediaCaptureSession>
#include <QMetaMethod>
#include <QMetaObject>
#include <QObject>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <QTimerEvent>
#include <QWindowCapture>
#include <qwindowcapture.h>
#include "libqwindowcapture.h"
#include "libqwindowcapture.hxx"

QWindowCapture* QWindowCapture_new() {
    return new VirtualQWindowCapture();
}

QWindowCapture* QWindowCapture_new2(QObject* parent) {
    return new VirtualQWindowCapture(parent);
}

QMetaObject* QWindowCapture_MetaObject(const QWindowCapture* self) {
    return (QMetaObject*)self->metaObject();
}

void* QWindowCapture_Metacast(QWindowCapture* self, const char* param1) {
    return self->qt_metacast(param1);
}

int QWindowCapture_Metacall(QWindowCapture* self, int param1, int param2, void** param3) {
    auto* vqwindowcapture = dynamic_cast<VirtualQWindowCapture*>(self);
    if (vqwindowcapture && vqwindowcapture->isVirtualQWindowCapture) {
        return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return ((VirtualQWindowCapture*)self)->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

// Subclass method to allow providing a virtual method re-implementation
void QWindowCapture_OnMetacall(QWindowCapture* self, intptr_t slot) {
    auto* vqwindowcapture = dynamic_cast<VirtualQWindowCapture*>(self);
    if (vqwindowcapture && vqwindowcapture->isVirtualQWindowCapture) {
        vqwindowcapture->setQWindowCapture_Metacall_Callback(reinterpret_cast<VirtualQWindowCapture::QWindowCapture_Metacall_Callback>(slot));
    }
}

// Virtual base class handler implementation
int QWindowCapture_QBaseMetacall(QWindowCapture* self, int param1, int param2, void** param3) {
    auto* vqwindowcapture = dynamic_cast<VirtualQWindowCapture*>(self);
    if (vqwindowcapture && vqwindowcapture->isVirtualQWindowCapture) {
        vqwindowcapture->setQWindowCapture_Metacall_IsBase(true);
        return vqwindowcapture->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return ((VirtualQWindowCapture*)self)->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

libqt_string QWindowCapture_Tr(const char* s) {
    QString _ret = QWindowCapture::tr(s);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_list /* of QCapturableWindow* */ QWindowCapture_CapturableWindows() {
    QList<QCapturableWindow> _ret = QWindowCapture::capturableWindows();
    // Convert QList<> from C++ memory to manually-managed C memory
    QCapturableWindow** _arr = static_cast<QCapturableWindow**>(malloc(sizeof(QCapturableWindow*) * _ret.size()));
    for (qsizetype i = 0; i < _ret.size(); ++i) {
        _arr[i] = new QCapturableWindow(_ret[i]);
    }
    libqt_list _out;
    _out.len = _ret.size();
    _out.data = static_cast<void*>(_arr);
    return _out;
}

QMediaCaptureSession* QWindowCapture_CaptureSession(const QWindowCapture* self) {
    return self->captureSession();
}

void QWindowCapture_SetWindow(QWindowCapture* self, QCapturableWindow* window) {
    self->setWindow(*window);
}

QCapturableWindow* QWindowCapture_Window(const QWindowCapture* self) {
    return new QCapturableWindow(self->window());
}

bool QWindowCapture_IsActive(const QWindowCapture* self) {
    return self->isActive();
}

int QWindowCapture_Error(const QWindowCapture* self) {
    return static_cast<int>(self->error());
}

libqt_string QWindowCapture_ErrorString(const QWindowCapture* self) {
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

void QWindowCapture_SetActive(QWindowCapture* self, bool active) {
    self->setActive(active);
}

void QWindowCapture_Start(QWindowCapture* self) {
    self->start();
}

void QWindowCapture_Stop(QWindowCapture* self) {
    self->stop();
}

void QWindowCapture_ActiveChanged(QWindowCapture* self, bool param1) {
    self->activeChanged(param1);
}

void QWindowCapture_Connect_ActiveChanged(QWindowCapture* self, intptr_t slot) {
    void (*slotFunc)(QWindowCapture*, bool) = reinterpret_cast<void (*)(QWindowCapture*, bool)>(slot);
    QWindowCapture::connect(self, &QWindowCapture::activeChanged, [self, slotFunc](bool param1) {
        bool sigval1 = param1;
        slotFunc(self, sigval1);
    });
}

void QWindowCapture_WindowChanged(QWindowCapture* self, QCapturableWindow* window) {
    self->windowChanged(*window);
}

void QWindowCapture_Connect_WindowChanged(QWindowCapture* self, intptr_t slot) {
    void (*slotFunc)(QWindowCapture*, QCapturableWindow*) = reinterpret_cast<void (*)(QWindowCapture*, QCapturableWindow*)>(slot);
    QWindowCapture::connect(self, &QWindowCapture::windowChanged, [self, slotFunc](QCapturableWindow window) {
        QCapturableWindow* sigval1 = new QCapturableWindow(window);
        slotFunc(self, sigval1);
    });
}

void QWindowCapture_ErrorChanged(QWindowCapture* self) {
    self->errorChanged();
}

void QWindowCapture_Connect_ErrorChanged(QWindowCapture* self, intptr_t slot) {
    void (*slotFunc)(QWindowCapture*) = reinterpret_cast<void (*)(QWindowCapture*)>(slot);
    QWindowCapture::connect(self, &QWindowCapture::errorChanged, [self, slotFunc]() {
        slotFunc(self);
    });
}

void QWindowCapture_ErrorOccurred(QWindowCapture* self, int errorVal, const libqt_string errorString) {
    QString errorString_QString = QString::fromUtf8(errorString.data, errorString.len);
    self->errorOccurred(static_cast<QWindowCapture::Error>(errorVal), errorString_QString);
}

void QWindowCapture_Connect_ErrorOccurred(QWindowCapture* self, intptr_t slot) {
    void (*slotFunc)(QWindowCapture*, int, const char*) = reinterpret_cast<void (*)(QWindowCapture*, int, const char*)>(slot);
    QWindowCapture::connect(self, &QWindowCapture::errorOccurred, [self, slotFunc](QWindowCapture::Error errorVal, const QString& errorString) {
        int sigval1 = static_cast<int>(errorVal);
        const QString errorString_ret = errorString;
        // Convert QString from UTF-16 in C++ RAII memory to UTF-8 chars in manually-managed C memory
        QByteArray errorString_b = errorString_ret.toUtf8();
        const char* errorString_str = static_cast<const char*>(malloc(errorString_b.length() + 1));
        memcpy((void*)errorString_str, errorString_b.data(), errorString_b.length());
        ((char*)errorString_str)[errorString_b.length()] = '\0';
        const char* sigval2 = errorString_str;
        slotFunc(self, sigval1, sigval2);
        libqt_free(errorString_str);
    });
}

libqt_string QWindowCapture_Tr2(const char* s, const char* c) {
    QString _ret = QWindowCapture::tr(s, c);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string QWindowCapture_Tr3(const char* s, const char* c, int n) {
    QString _ret = QWindowCapture::tr(s, c, static_cast<int>(n));
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
bool QWindowCapture_Event(QWindowCapture* self, QEvent* event) {
    auto* vqwindowcapture = dynamic_cast<VirtualQWindowCapture*>(self);
    if (vqwindowcapture && vqwindowcapture->isVirtualQWindowCapture) {
        return vqwindowcapture->event(event);
    } else {
        return self->QWindowCapture::event(event);
    }
}

// Base class handler implementation
bool QWindowCapture_QBaseEvent(QWindowCapture* self, QEvent* event) {
    auto* vqwindowcapture = dynamic_cast<VirtualQWindowCapture*>(self);
    if (vqwindowcapture && vqwindowcapture->isVirtualQWindowCapture) {
        vqwindowcapture->setQWindowCapture_Event_IsBase(true);
        return vqwindowcapture->event(event);
    } else {
        return self->QWindowCapture::event(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QWindowCapture_OnEvent(QWindowCapture* self, intptr_t slot) {
    auto* vqwindowcapture = dynamic_cast<VirtualQWindowCapture*>(self);
    if (vqwindowcapture && vqwindowcapture->isVirtualQWindowCapture) {
        vqwindowcapture->setQWindowCapture_Event_Callback(reinterpret_cast<VirtualQWindowCapture::QWindowCapture_Event_Callback>(slot));
    }
}

// Derived class handler implementation
bool QWindowCapture_EventFilter(QWindowCapture* self, QObject* watched, QEvent* event) {
    auto* vqwindowcapture = dynamic_cast<VirtualQWindowCapture*>(self);
    if (vqwindowcapture && vqwindowcapture->isVirtualQWindowCapture) {
        return vqwindowcapture->eventFilter(watched, event);
    } else {
        return self->QWindowCapture::eventFilter(watched, event);
    }
}

// Base class handler implementation
bool QWindowCapture_QBaseEventFilter(QWindowCapture* self, QObject* watched, QEvent* event) {
    auto* vqwindowcapture = dynamic_cast<VirtualQWindowCapture*>(self);
    if (vqwindowcapture && vqwindowcapture->isVirtualQWindowCapture) {
        vqwindowcapture->setQWindowCapture_EventFilter_IsBase(true);
        return vqwindowcapture->eventFilter(watched, event);
    } else {
        return self->QWindowCapture::eventFilter(watched, event);
    }
}

// Auxiliary method to allow providing re-implementation
void QWindowCapture_OnEventFilter(QWindowCapture* self, intptr_t slot) {
    auto* vqwindowcapture = dynamic_cast<VirtualQWindowCapture*>(self);
    if (vqwindowcapture && vqwindowcapture->isVirtualQWindowCapture) {
        vqwindowcapture->setQWindowCapture_EventFilter_Callback(reinterpret_cast<VirtualQWindowCapture::QWindowCapture_EventFilter_Callback>(slot));
    }
}

// Derived class handler implementation
void QWindowCapture_TimerEvent(QWindowCapture* self, QTimerEvent* event) {
    auto* vqwindowcapture = dynamic_cast<VirtualQWindowCapture*>(self);
    if (vqwindowcapture && vqwindowcapture->isVirtualQWindowCapture) {
        vqwindowcapture->timerEvent(event);
    } else {
        ((VirtualQWindowCapture*)self)->timerEvent(event);
    }
}

// Base class handler implementation
void QWindowCapture_QBaseTimerEvent(QWindowCapture* self, QTimerEvent* event) {
    auto* vqwindowcapture = dynamic_cast<VirtualQWindowCapture*>(self);
    if (vqwindowcapture && vqwindowcapture->isVirtualQWindowCapture) {
        vqwindowcapture->setQWindowCapture_TimerEvent_IsBase(true);
        vqwindowcapture->timerEvent(event);
    } else {
        ((VirtualQWindowCapture*)self)->timerEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QWindowCapture_OnTimerEvent(QWindowCapture* self, intptr_t slot) {
    auto* vqwindowcapture = dynamic_cast<VirtualQWindowCapture*>(self);
    if (vqwindowcapture && vqwindowcapture->isVirtualQWindowCapture) {
        vqwindowcapture->setQWindowCapture_TimerEvent_Callback(reinterpret_cast<VirtualQWindowCapture::QWindowCapture_TimerEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QWindowCapture_ChildEvent(QWindowCapture* self, QChildEvent* event) {
    auto* vqwindowcapture = dynamic_cast<VirtualQWindowCapture*>(self);
    if (vqwindowcapture && vqwindowcapture->isVirtualQWindowCapture) {
        vqwindowcapture->childEvent(event);
    } else {
        ((VirtualQWindowCapture*)self)->childEvent(event);
    }
}

// Base class handler implementation
void QWindowCapture_QBaseChildEvent(QWindowCapture* self, QChildEvent* event) {
    auto* vqwindowcapture = dynamic_cast<VirtualQWindowCapture*>(self);
    if (vqwindowcapture && vqwindowcapture->isVirtualQWindowCapture) {
        vqwindowcapture->setQWindowCapture_ChildEvent_IsBase(true);
        vqwindowcapture->childEvent(event);
    } else {
        ((VirtualQWindowCapture*)self)->childEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QWindowCapture_OnChildEvent(QWindowCapture* self, intptr_t slot) {
    auto* vqwindowcapture = dynamic_cast<VirtualQWindowCapture*>(self);
    if (vqwindowcapture && vqwindowcapture->isVirtualQWindowCapture) {
        vqwindowcapture->setQWindowCapture_ChildEvent_Callback(reinterpret_cast<VirtualQWindowCapture::QWindowCapture_ChildEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QWindowCapture_CustomEvent(QWindowCapture* self, QEvent* event) {
    auto* vqwindowcapture = dynamic_cast<VirtualQWindowCapture*>(self);
    if (vqwindowcapture && vqwindowcapture->isVirtualQWindowCapture) {
        vqwindowcapture->customEvent(event);
    } else {
        ((VirtualQWindowCapture*)self)->customEvent(event);
    }
}

// Base class handler implementation
void QWindowCapture_QBaseCustomEvent(QWindowCapture* self, QEvent* event) {
    auto* vqwindowcapture = dynamic_cast<VirtualQWindowCapture*>(self);
    if (vqwindowcapture && vqwindowcapture->isVirtualQWindowCapture) {
        vqwindowcapture->setQWindowCapture_CustomEvent_IsBase(true);
        vqwindowcapture->customEvent(event);
    } else {
        ((VirtualQWindowCapture*)self)->customEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QWindowCapture_OnCustomEvent(QWindowCapture* self, intptr_t slot) {
    auto* vqwindowcapture = dynamic_cast<VirtualQWindowCapture*>(self);
    if (vqwindowcapture && vqwindowcapture->isVirtualQWindowCapture) {
        vqwindowcapture->setQWindowCapture_CustomEvent_Callback(reinterpret_cast<VirtualQWindowCapture::QWindowCapture_CustomEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QWindowCapture_ConnectNotify(QWindowCapture* self, const QMetaMethod* signal) {
    auto* vqwindowcapture = dynamic_cast<VirtualQWindowCapture*>(self);
    if (vqwindowcapture && vqwindowcapture->isVirtualQWindowCapture) {
        vqwindowcapture->connectNotify(*signal);
    } else {
        ((VirtualQWindowCapture*)self)->connectNotify(*signal);
    }
}

// Base class handler implementation
void QWindowCapture_QBaseConnectNotify(QWindowCapture* self, const QMetaMethod* signal) {
    auto* vqwindowcapture = dynamic_cast<VirtualQWindowCapture*>(self);
    if (vqwindowcapture && vqwindowcapture->isVirtualQWindowCapture) {
        vqwindowcapture->setQWindowCapture_ConnectNotify_IsBase(true);
        vqwindowcapture->connectNotify(*signal);
    } else {
        ((VirtualQWindowCapture*)self)->connectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QWindowCapture_OnConnectNotify(QWindowCapture* self, intptr_t slot) {
    auto* vqwindowcapture = dynamic_cast<VirtualQWindowCapture*>(self);
    if (vqwindowcapture && vqwindowcapture->isVirtualQWindowCapture) {
        vqwindowcapture->setQWindowCapture_ConnectNotify_Callback(reinterpret_cast<VirtualQWindowCapture::QWindowCapture_ConnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
void QWindowCapture_DisconnectNotify(QWindowCapture* self, const QMetaMethod* signal) {
    auto* vqwindowcapture = dynamic_cast<VirtualQWindowCapture*>(self);
    if (vqwindowcapture && vqwindowcapture->isVirtualQWindowCapture) {
        vqwindowcapture->disconnectNotify(*signal);
    } else {
        ((VirtualQWindowCapture*)self)->disconnectNotify(*signal);
    }
}

// Base class handler implementation
void QWindowCapture_QBaseDisconnectNotify(QWindowCapture* self, const QMetaMethod* signal) {
    auto* vqwindowcapture = dynamic_cast<VirtualQWindowCapture*>(self);
    if (vqwindowcapture && vqwindowcapture->isVirtualQWindowCapture) {
        vqwindowcapture->setQWindowCapture_DisconnectNotify_IsBase(true);
        vqwindowcapture->disconnectNotify(*signal);
    } else {
        ((VirtualQWindowCapture*)self)->disconnectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QWindowCapture_OnDisconnectNotify(QWindowCapture* self, intptr_t slot) {
    auto* vqwindowcapture = dynamic_cast<VirtualQWindowCapture*>(self);
    if (vqwindowcapture && vqwindowcapture->isVirtualQWindowCapture) {
        vqwindowcapture->setQWindowCapture_DisconnectNotify_Callback(reinterpret_cast<VirtualQWindowCapture::QWindowCapture_DisconnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
QObject* QWindowCapture_Sender(const QWindowCapture* self) {
    auto* vqwindowcapture = const_cast<VirtualQWindowCapture*>(dynamic_cast<const VirtualQWindowCapture*>(self));
    if (vqwindowcapture && vqwindowcapture->isVirtualQWindowCapture) {
        return vqwindowcapture->sender();
    } else {
        return ((VirtualQWindowCapture*)self)->sender();
    }
}

// Base class handler implementation
QObject* QWindowCapture_QBaseSender(const QWindowCapture* self) {
    auto* vqwindowcapture = const_cast<VirtualQWindowCapture*>(dynamic_cast<const VirtualQWindowCapture*>(self));
    if (vqwindowcapture && vqwindowcapture->isVirtualQWindowCapture) {
        vqwindowcapture->setQWindowCapture_Sender_IsBase(true);
        return vqwindowcapture->sender();
    } else {
        return ((VirtualQWindowCapture*)self)->sender();
    }
}

// Auxiliary method to allow providing re-implementation
void QWindowCapture_OnSender(const QWindowCapture* self, intptr_t slot) {
    auto* vqwindowcapture = const_cast<VirtualQWindowCapture*>(dynamic_cast<const VirtualQWindowCapture*>(self));
    if (vqwindowcapture && vqwindowcapture->isVirtualQWindowCapture) {
        vqwindowcapture->setQWindowCapture_Sender_Callback(reinterpret_cast<VirtualQWindowCapture::QWindowCapture_Sender_Callback>(slot));
    }
}

// Derived class handler implementation
int QWindowCapture_SenderSignalIndex(const QWindowCapture* self) {
    auto* vqwindowcapture = const_cast<VirtualQWindowCapture*>(dynamic_cast<const VirtualQWindowCapture*>(self));
    if (vqwindowcapture && vqwindowcapture->isVirtualQWindowCapture) {
        return vqwindowcapture->senderSignalIndex();
    } else {
        return ((VirtualQWindowCapture*)self)->senderSignalIndex();
    }
}

// Base class handler implementation
int QWindowCapture_QBaseSenderSignalIndex(const QWindowCapture* self) {
    auto* vqwindowcapture = const_cast<VirtualQWindowCapture*>(dynamic_cast<const VirtualQWindowCapture*>(self));
    if (vqwindowcapture && vqwindowcapture->isVirtualQWindowCapture) {
        vqwindowcapture->setQWindowCapture_SenderSignalIndex_IsBase(true);
        return vqwindowcapture->senderSignalIndex();
    } else {
        return ((VirtualQWindowCapture*)self)->senderSignalIndex();
    }
}

// Auxiliary method to allow providing re-implementation
void QWindowCapture_OnSenderSignalIndex(const QWindowCapture* self, intptr_t slot) {
    auto* vqwindowcapture = const_cast<VirtualQWindowCapture*>(dynamic_cast<const VirtualQWindowCapture*>(self));
    if (vqwindowcapture && vqwindowcapture->isVirtualQWindowCapture) {
        vqwindowcapture->setQWindowCapture_SenderSignalIndex_Callback(reinterpret_cast<VirtualQWindowCapture::QWindowCapture_SenderSignalIndex_Callback>(slot));
    }
}

// Derived class handler implementation
int QWindowCapture_Receivers(const QWindowCapture* self, const char* signal) {
    auto* vqwindowcapture = const_cast<VirtualQWindowCapture*>(dynamic_cast<const VirtualQWindowCapture*>(self));
    if (vqwindowcapture && vqwindowcapture->isVirtualQWindowCapture) {
        return vqwindowcapture->receivers(signal);
    } else {
        return ((VirtualQWindowCapture*)self)->receivers(signal);
    }
}

// Base class handler implementation
int QWindowCapture_QBaseReceivers(const QWindowCapture* self, const char* signal) {
    auto* vqwindowcapture = const_cast<VirtualQWindowCapture*>(dynamic_cast<const VirtualQWindowCapture*>(self));
    if (vqwindowcapture && vqwindowcapture->isVirtualQWindowCapture) {
        vqwindowcapture->setQWindowCapture_Receivers_IsBase(true);
        return vqwindowcapture->receivers(signal);
    } else {
        return ((VirtualQWindowCapture*)self)->receivers(signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QWindowCapture_OnReceivers(const QWindowCapture* self, intptr_t slot) {
    auto* vqwindowcapture = const_cast<VirtualQWindowCapture*>(dynamic_cast<const VirtualQWindowCapture*>(self));
    if (vqwindowcapture && vqwindowcapture->isVirtualQWindowCapture) {
        vqwindowcapture->setQWindowCapture_Receivers_Callback(reinterpret_cast<VirtualQWindowCapture::QWindowCapture_Receivers_Callback>(slot));
    }
}

// Derived class handler implementation
bool QWindowCapture_IsSignalConnected(const QWindowCapture* self, const QMetaMethod* signal) {
    auto* vqwindowcapture = const_cast<VirtualQWindowCapture*>(dynamic_cast<const VirtualQWindowCapture*>(self));
    if (vqwindowcapture && vqwindowcapture->isVirtualQWindowCapture) {
        return vqwindowcapture->isSignalConnected(*signal);
    } else {
        return ((VirtualQWindowCapture*)self)->isSignalConnected(*signal);
    }
}

// Base class handler implementation
bool QWindowCapture_QBaseIsSignalConnected(const QWindowCapture* self, const QMetaMethod* signal) {
    auto* vqwindowcapture = const_cast<VirtualQWindowCapture*>(dynamic_cast<const VirtualQWindowCapture*>(self));
    if (vqwindowcapture && vqwindowcapture->isVirtualQWindowCapture) {
        vqwindowcapture->setQWindowCapture_IsSignalConnected_IsBase(true);
        return vqwindowcapture->isSignalConnected(*signal);
    } else {
        return ((VirtualQWindowCapture*)self)->isSignalConnected(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QWindowCapture_OnIsSignalConnected(const QWindowCapture* self, intptr_t slot) {
    auto* vqwindowcapture = const_cast<VirtualQWindowCapture*>(dynamic_cast<const VirtualQWindowCapture*>(self));
    if (vqwindowcapture && vqwindowcapture->isVirtualQWindowCapture) {
        vqwindowcapture->setQWindowCapture_IsSignalConnected_Callback(reinterpret_cast<VirtualQWindowCapture::QWindowCapture_IsSignalConnected_Callback>(slot));
    }
}

void QWindowCapture_Delete(QWindowCapture* self) {
    delete self;
}
