#include <QCapturableWindow>
#include <QChildEvent>
#include <QEvent>
#include <QList>
#include <QMediaCaptureSession>
#include <QMetaMethod>
#include <QMetaObject>
#include <QObject>
#include <QString>
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
    return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

libqt_string QWindowCapture_Tr(const char* s) {
    auto _ret = QWindowCapture::tr(s);
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
    QCapturableWindow** _arr = static_cast<QCapturableWindow**>(malloc(sizeof(QCapturableWindow*) * (_ret.size())));
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
    QWindowCapture::connect(self,
                            static_cast<void (QWindowCapture::*)(bool)>(&QWindowCapture::activeChanged),
                            [self, slotFunc](bool param1) {
                                bool sigval1 = param1;
                                slotFunc(self, sigval1);
                            });
}

void QWindowCapture_WindowChanged(QWindowCapture* self, QCapturableWindow* window) {
    self->windowChanged(*window);
}

void QWindowCapture_Connect_WindowChanged(QWindowCapture* self, intptr_t slot) {
    void (*slotFunc)(QWindowCapture*, QCapturableWindow*) = reinterpret_cast<void (*)(QWindowCapture*, QCapturableWindow*)>(slot);
    QWindowCapture::connect(self,
                            static_cast<void (QWindowCapture::*)(QCapturableWindow)>(&QWindowCapture::windowChanged),
                            [self, slotFunc](QCapturableWindow window) {
                                QCapturableWindow* sigval1 = new QCapturableWindow(window);
                                slotFunc(self, sigval1);
                            });
}

void QWindowCapture_ErrorChanged(QWindowCapture* self) {
    self->errorChanged();
}

void QWindowCapture_Connect_ErrorChanged(QWindowCapture* self, intptr_t slot) {
    void (*slotFunc)(QWindowCapture*) = reinterpret_cast<void (*)(QWindowCapture*)>(slot);
    QWindowCapture::connect(self,
                            static_cast<void (QWindowCapture::*)()>(&QWindowCapture::errorChanged),
                            [self, slotFunc]() {
                                slotFunc(self);
                            });
}

void QWindowCapture_ErrorOccurred(QWindowCapture* self, int errorVal, const libqt_string errorString) {
    QString errorString_QString = QString::fromUtf8(errorString.data, errorString.len);
    self->errorOccurred(static_cast<QWindowCapture::Error>(errorVal), errorString_QString);
}

void QWindowCapture_Connect_ErrorOccurred(QWindowCapture* self, intptr_t slot) {
    void (*slotFunc)(QWindowCapture*, int, const char*) = reinterpret_cast<void (*)(QWindowCapture*, int, const char*)>(slot);
    QWindowCapture::connect(self,
                            static_cast<void (QWindowCapture::*)(QWindowCapture::Error, const QString&)>(&QWindowCapture::errorOccurred),
                            [self, slotFunc](QWindowCapture::Error errorVal, const QString& errorString) {
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

libqt_string QWindowCapture_Tr2(const char* s, const char* c) {
    auto _ret = QWindowCapture::tr(s, c);
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
    auto _ret = QWindowCapture::tr(s, c, static_cast<int>(n));
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
QMetaObject* QWindowCapture_SuperMetaObject(const QWindowCapture* self) {
    return (QMetaObject*)self->QWindowCapture::metaObject();
}

// Auxiliary method to allow providing re-implementation
void QWindowCapture_OnMetaObject(QWindowCapture* self, intptr_t slot) {
    if (auto* vqwindowcapture = const_cast<VirtualQWindowCapture*>(dynamic_cast<const VirtualQWindowCapture*>(self)))
        vqwindowcapture->qwindowcapture_metaobject_callback = reinterpret_cast<VirtualQWindowCapture::QWindowCapture_MetaObject_Callback>(slot);
}

// Base class handler implementation
void* QWindowCapture_SuperMetacast(QWindowCapture* self, const char* param1) {
    return self->QWindowCapture::qt_metacast(param1);
}

// Auxiliary method to allow providing re-implementation
void QWindowCapture_OnMetacast(QWindowCapture* self, intptr_t slot) {
    if (auto* vqwindowcapture = dynamic_cast<VirtualQWindowCapture*>(self))
        vqwindowcapture->qwindowcapture_metacast_callback = reinterpret_cast<VirtualQWindowCapture::QWindowCapture_Metacast_Callback>(slot);
}

// Base class handler implementation
int QWindowCapture_SuperMetacall(QWindowCapture* self, int param1, int param2, void** param3) {
    return self->QWindowCapture::qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

// Auxiliary method to allow providing re-implementation
void QWindowCapture_OnMetacall(QWindowCapture* self, intptr_t slot) {
    if (auto* vqwindowcapture = dynamic_cast<VirtualQWindowCapture*>(self))
        vqwindowcapture->qwindowcapture_metacall_callback = reinterpret_cast<VirtualQWindowCapture::QWindowCapture_Metacall_Callback>(slot);
}

// Derived class handler implementation
bool QWindowCapture_Event(QWindowCapture* self, QEvent* event) {
    return self->event(event);
}

// Base class handler implementation
bool QWindowCapture_SuperEvent(QWindowCapture* self, QEvent* event) {
    return self->QWindowCapture::event(event);
}

// Auxiliary method to allow providing re-implementation
void QWindowCapture_OnEvent(QWindowCapture* self, intptr_t slot) {
    if (auto* vqwindowcapture = dynamic_cast<VirtualQWindowCapture*>(self))
        vqwindowcapture->qwindowcapture_event_callback = reinterpret_cast<VirtualQWindowCapture::QWindowCapture_Event_Callback>(slot);
}

// Derived class handler implementation
bool QWindowCapture_EventFilter(QWindowCapture* self, QObject* watched, QEvent* event) {
    return self->eventFilter(watched, event);
}

// Base class handler implementation
bool QWindowCapture_SuperEventFilter(QWindowCapture* self, QObject* watched, QEvent* event) {
    return self->QWindowCapture::eventFilter(watched, event);
}

// Auxiliary method to allow providing re-implementation
void QWindowCapture_OnEventFilter(QWindowCapture* self, intptr_t slot) {
    if (auto* vqwindowcapture = dynamic_cast<VirtualQWindowCapture*>(self))
        vqwindowcapture->qwindowcapture_eventfilter_callback = reinterpret_cast<VirtualQWindowCapture::QWindowCapture_EventFilter_Callback>(slot);
}

// Derived class handler implementation
void QWindowCapture_TimerEvent(QWindowCapture* self, QTimerEvent* event) {
    auto* vqwindowcapture = dynamic_cast<VirtualQWindowCapture*>(self);
    if (vqwindowcapture) {
        vqwindowcapture->timerEvent(event);
    } else {
        qFatal("Error: Protected virtual method QWindowCapture::timerEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QWindowCapture_SuperTimerEvent(QWindowCapture* self, QTimerEvent* event) {
    if (auto* vqwindowcapture = dynamic_cast<VirtualQWindowCapture*>(self)) {
        vqwindowcapture->QWindowCapture::timerEvent(event);
    } else
        qFatal("Error: Protected virtual method QWindowCapture::timerEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QWindowCapture_OnTimerEvent(QWindowCapture* self, intptr_t slot) {
    if (auto* vqwindowcapture = dynamic_cast<VirtualQWindowCapture*>(self))
        vqwindowcapture->qwindowcapture_timerevent_callback = reinterpret_cast<VirtualQWindowCapture::QWindowCapture_TimerEvent_Callback>(slot);
}

// Derived class handler implementation
void QWindowCapture_ChildEvent(QWindowCapture* self, QChildEvent* event) {
    auto* vqwindowcapture = dynamic_cast<VirtualQWindowCapture*>(self);
    if (vqwindowcapture) {
        vqwindowcapture->childEvent(event);
    } else {
        qFatal("Error: Protected virtual method QWindowCapture::childEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QWindowCapture_SuperChildEvent(QWindowCapture* self, QChildEvent* event) {
    if (auto* vqwindowcapture = dynamic_cast<VirtualQWindowCapture*>(self)) {
        vqwindowcapture->QWindowCapture::childEvent(event);
    } else
        qFatal("Error: Protected virtual method QWindowCapture::childEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QWindowCapture_OnChildEvent(QWindowCapture* self, intptr_t slot) {
    if (auto* vqwindowcapture = dynamic_cast<VirtualQWindowCapture*>(self))
        vqwindowcapture->qwindowcapture_childevent_callback = reinterpret_cast<VirtualQWindowCapture::QWindowCapture_ChildEvent_Callback>(slot);
}

// Derived class handler implementation
void QWindowCapture_CustomEvent(QWindowCapture* self, QEvent* event) {
    auto* vqwindowcapture = dynamic_cast<VirtualQWindowCapture*>(self);
    if (vqwindowcapture) {
        vqwindowcapture->customEvent(event);
    } else {
        qFatal("Error: Protected virtual method QWindowCapture::customEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QWindowCapture_SuperCustomEvent(QWindowCapture* self, QEvent* event) {
    if (auto* vqwindowcapture = dynamic_cast<VirtualQWindowCapture*>(self)) {
        vqwindowcapture->QWindowCapture::customEvent(event);
    } else
        qFatal("Error: Protected virtual method QWindowCapture::customEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QWindowCapture_OnCustomEvent(QWindowCapture* self, intptr_t slot) {
    if (auto* vqwindowcapture = dynamic_cast<VirtualQWindowCapture*>(self))
        vqwindowcapture->qwindowcapture_customevent_callback = reinterpret_cast<VirtualQWindowCapture::QWindowCapture_CustomEvent_Callback>(slot);
}

// Derived class handler implementation
void QWindowCapture_ConnectNotify(QWindowCapture* self, const QMetaMethod* signal) {
    auto* vqwindowcapture = dynamic_cast<VirtualQWindowCapture*>(self);
    if (vqwindowcapture) {
        vqwindowcapture->connectNotify(*signal);
    } else {
        qFatal("Error: Protected virtual method QWindowCapture::connectNotify called without a directly constructed type");
    }
}

// Base class handler implementation
void QWindowCapture_SuperConnectNotify(QWindowCapture* self, const QMetaMethod* signal) {
    if (auto* vqwindowcapture = dynamic_cast<VirtualQWindowCapture*>(self)) {
        vqwindowcapture->QWindowCapture::connectNotify(*signal);
    } else
        qFatal("Error: Protected virtual method QWindowCapture::connectNotify called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QWindowCapture_OnConnectNotify(QWindowCapture* self, intptr_t slot) {
    if (auto* vqwindowcapture = dynamic_cast<VirtualQWindowCapture*>(self))
        vqwindowcapture->qwindowcapture_connectnotify_callback = reinterpret_cast<VirtualQWindowCapture::QWindowCapture_ConnectNotify_Callback>(slot);
}

// Derived class handler implementation
void QWindowCapture_DisconnectNotify(QWindowCapture* self, const QMetaMethod* signal) {
    auto* vqwindowcapture = dynamic_cast<VirtualQWindowCapture*>(self);
    if (vqwindowcapture) {
        vqwindowcapture->disconnectNotify(*signal);
    } else {
        qFatal("Error: Protected virtual method QWindowCapture::disconnectNotify called without a directly constructed type");
    }
}

// Base class handler implementation
void QWindowCapture_SuperDisconnectNotify(QWindowCapture* self, const QMetaMethod* signal) {
    if (auto* vqwindowcapture = dynamic_cast<VirtualQWindowCapture*>(self)) {
        vqwindowcapture->QWindowCapture::disconnectNotify(*signal);
    } else
        qFatal("Error: Protected virtual method QWindowCapture::disconnectNotify called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QWindowCapture_OnDisconnectNotify(QWindowCapture* self, intptr_t slot) {
    if (auto* vqwindowcapture = dynamic_cast<VirtualQWindowCapture*>(self))
        vqwindowcapture->qwindowcapture_disconnectnotify_callback = reinterpret_cast<VirtualQWindowCapture::QWindowCapture_DisconnectNotify_Callback>(slot);
}

// Derived class protected handler implementation
QObject* QWindowCapture_Sender(const QWindowCapture* self) {
    if (auto* vqwindowcapture = const_cast<VirtualQWindowCapture*>(dynamic_cast<const VirtualQWindowCapture*>(self))) {
        return vqwindowcapture->VirtualQWindowCapture::sender();
    } else
        qFatal("Error: Protected method QWindowCapture::sender called without a directly constructed type");
}

// Derived class protected handler implementation
int QWindowCapture_SenderSignalIndex(const QWindowCapture* self) {
    if (auto* vqwindowcapture = const_cast<VirtualQWindowCapture*>(dynamic_cast<const VirtualQWindowCapture*>(self))) {
        return vqwindowcapture->VirtualQWindowCapture::senderSignalIndex();
    } else
        qFatal("Error: Protected method QWindowCapture::senderSignalIndex called without a directly constructed type");
}

// Derived class protected handler implementation
int QWindowCapture_Receivers(const QWindowCapture* self, const char* signal) {
    if (auto* vqwindowcapture = const_cast<VirtualQWindowCapture*>(dynamic_cast<const VirtualQWindowCapture*>(self))) {
        return vqwindowcapture->VirtualQWindowCapture::receivers(signal);
    } else
        qFatal("Error: Protected method QWindowCapture::receivers called without a directly constructed type");
}

// Derived class protected handler implementation
bool QWindowCapture_IsSignalConnected(const QWindowCapture* self, const QMetaMethod* signal) {
    if (auto* vqwindowcapture = const_cast<VirtualQWindowCapture*>(dynamic_cast<const VirtualQWindowCapture*>(self))) {
        return vqwindowcapture->VirtualQWindowCapture::isSignalConnected(*signal);
    } else
        qFatal("Error: Protected method QWindowCapture::isSignalConnected called without a directly constructed type");
}

void QWindowCapture_Delete(QWindowCapture* self) {
    delete self;
}
