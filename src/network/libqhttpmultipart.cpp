#include <QByteArray>
#include <QChildEvent>
#include <QEvent>
#include <QHttpMultiPart>
#include <QHttpPart>
#include <QIODevice>
#include <QMetaMethod>
#include <QMetaObject>
#include <QObject>
#include <QString>
#include <QTimerEvent>
#include <QVariant>
#include <qhttpmultipart.h>
#include "libqhttpmultipart.h"
#include "libqhttpmultipart.hxx"

QHttpPart* QHttpPart_new() {
    return new QHttpPart();
}

QHttpPart* QHttpPart_new2(const QHttpPart* other) {
    return new QHttpPart(*other);
}

void QHttpPart_OperatorAssign(QHttpPart* self, const QHttpPart* other) {
    self->operator=(*other);
}

void QHttpPart_Swap(QHttpPart* self, QHttpPart* other) {
    self->swap(*other);
}

bool QHttpPart_OperatorEqual(const QHttpPart* self, const QHttpPart* other) {
    return (*self == *other);
}

bool QHttpPart_OperatorNotEqual(const QHttpPart* self, const QHttpPart* other) {
    return (*self != *other);
}

void QHttpPart_SetHeader(QHttpPart* self, int header, const QVariant* value) {
    self->setHeader(static_cast<QNetworkRequest::KnownHeaders>(header), *value);
}

void QHttpPart_SetRawHeader(QHttpPart* self, const libqt_string headerName, const libqt_string headerValue) {
    QByteArray headerName_QByteArray(headerName.data, headerName.len);
    QByteArray headerValue_QByteArray(headerValue.data, headerValue.len);
    self->setRawHeader(headerName_QByteArray, headerValue_QByteArray);
}

void QHttpPart_SetBody(QHttpPart* self, const libqt_string body) {
    QByteArray body_QByteArray(body.data, body.len);
    self->setBody(body_QByteArray);
}

void QHttpPart_SetBodyDevice(QHttpPart* self, QIODevice* device) {
    self->setBodyDevice(device);
}

void QHttpPart_Delete(QHttpPart* self) {
    delete self;
}

QHttpMultiPart* QHttpMultiPart_new() {
    return new VirtualQHttpMultiPart();
}

QHttpMultiPart* QHttpMultiPart_new2(int contentType) {
    return new VirtualQHttpMultiPart(static_cast<QHttpMultiPart::ContentType>(contentType));
}

QHttpMultiPart* QHttpMultiPart_new3(QObject* parent) {
    return new VirtualQHttpMultiPart(parent);
}

QHttpMultiPart* QHttpMultiPart_new4(int contentType, QObject* parent) {
    return new VirtualQHttpMultiPart(static_cast<QHttpMultiPart::ContentType>(contentType), parent);
}

QMetaObject* QHttpMultiPart_MetaObject(const QHttpMultiPart* self) {
    return (QMetaObject*)self->metaObject();
}

void* QHttpMultiPart_Metacast(QHttpMultiPart* self, const char* param1) {
    return self->qt_metacast(param1);
}

int QHttpMultiPart_Metacall(QHttpMultiPart* self, int param1, int param2, void** param3) {
    return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

libqt_string QHttpMultiPart_Tr(const char* s) {
    auto _ret = QHttpMultiPart::tr(s);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

void QHttpMultiPart_Append(QHttpMultiPart* self, const QHttpPart* httpPart) {
    self->append(*httpPart);
}

void QHttpMultiPart_SetContentType(QHttpMultiPart* self, int contentType) {
    self->setContentType(static_cast<QHttpMultiPart::ContentType>(contentType));
}

libqt_string QHttpMultiPart_Boundary(const QHttpMultiPart* self) {
    QByteArray _qb = self->boundary();
    libqt_string _str;
    _str.len = _qb.length();
    _str.data = static_cast<char*>(malloc(_str.len));
    memcpy((void*)_str.data, _qb.data(), _str.len);
    return _str;
}

void QHttpMultiPart_SetBoundary(QHttpMultiPart* self, const libqt_string boundary) {
    QByteArray boundary_QByteArray(boundary.data, boundary.len);
    self->setBoundary(boundary_QByteArray);
}

libqt_string QHttpMultiPart_Tr2(const char* s, const char* c) {
    auto _ret = QHttpMultiPart::tr(s, c);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string QHttpMultiPart_Tr3(const char* s, const char* c, int n) {
    auto _ret = QHttpMultiPart::tr(s, c, static_cast<int>(n));
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
QMetaObject* QHttpMultiPart_SuperMetaObject(const QHttpMultiPart* self) {
    return (QMetaObject*)self->QHttpMultiPart::metaObject();
}

// Auxiliary method to allow providing re-implementation
void QHttpMultiPart_OnMetaObject(QHttpMultiPart* self, intptr_t slot) {
    if (auto* vqhttpmultipart = const_cast<VirtualQHttpMultiPart*>(dynamic_cast<const VirtualQHttpMultiPart*>(self)))
        vqhttpmultipart->qhttpmultipart_metaobject_callback = reinterpret_cast<VirtualQHttpMultiPart::QHttpMultiPart_MetaObject_Callback>(slot);
}

// Base class handler implementation
void* QHttpMultiPart_SuperMetacast(QHttpMultiPart* self, const char* param1) {
    return self->QHttpMultiPart::qt_metacast(param1);
}

// Auxiliary method to allow providing re-implementation
void QHttpMultiPart_OnMetacast(QHttpMultiPart* self, intptr_t slot) {
    if (auto* vqhttpmultipart = dynamic_cast<VirtualQHttpMultiPart*>(self))
        vqhttpmultipart->qhttpmultipart_metacast_callback = reinterpret_cast<VirtualQHttpMultiPart::QHttpMultiPart_Metacast_Callback>(slot);
}

// Base class handler implementation
int QHttpMultiPart_SuperMetacall(QHttpMultiPart* self, int param1, int param2, void** param3) {
    return self->QHttpMultiPart::qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

// Auxiliary method to allow providing re-implementation
void QHttpMultiPart_OnMetacall(QHttpMultiPart* self, intptr_t slot) {
    if (auto* vqhttpmultipart = dynamic_cast<VirtualQHttpMultiPart*>(self))
        vqhttpmultipart->qhttpmultipart_metacall_callback = reinterpret_cast<VirtualQHttpMultiPart::QHttpMultiPart_Metacall_Callback>(slot);
}

// Derived class handler implementation
bool QHttpMultiPart_Event(QHttpMultiPart* self, QEvent* event) {
    return self->event(event);
}

// Base class handler implementation
bool QHttpMultiPart_SuperEvent(QHttpMultiPart* self, QEvent* event) {
    return self->QHttpMultiPart::event(event);
}

// Auxiliary method to allow providing re-implementation
void QHttpMultiPart_OnEvent(QHttpMultiPart* self, intptr_t slot) {
    if (auto* vqhttpmultipart = dynamic_cast<VirtualQHttpMultiPart*>(self))
        vqhttpmultipart->qhttpmultipart_event_callback = reinterpret_cast<VirtualQHttpMultiPart::QHttpMultiPart_Event_Callback>(slot);
}

// Derived class handler implementation
bool QHttpMultiPart_EventFilter(QHttpMultiPart* self, QObject* watched, QEvent* event) {
    return self->eventFilter(watched, event);
}

// Base class handler implementation
bool QHttpMultiPart_SuperEventFilter(QHttpMultiPart* self, QObject* watched, QEvent* event) {
    return self->QHttpMultiPart::eventFilter(watched, event);
}

// Auxiliary method to allow providing re-implementation
void QHttpMultiPart_OnEventFilter(QHttpMultiPart* self, intptr_t slot) {
    if (auto* vqhttpmultipart = dynamic_cast<VirtualQHttpMultiPart*>(self))
        vqhttpmultipart->qhttpmultipart_eventfilter_callback = reinterpret_cast<VirtualQHttpMultiPart::QHttpMultiPart_EventFilter_Callback>(slot);
}

// Derived class handler implementation
void QHttpMultiPart_TimerEvent(QHttpMultiPart* self, QTimerEvent* event) {
    auto* vqhttpmultipart = dynamic_cast<VirtualQHttpMultiPart*>(self);
    if (vqhttpmultipart) {
        vqhttpmultipart->timerEvent(event);
    } else {
        qFatal("Error: Protected virtual method QHttpMultiPart::timerEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QHttpMultiPart_SuperTimerEvent(QHttpMultiPart* self, QTimerEvent* event) {
    if (auto* vqhttpmultipart = dynamic_cast<VirtualQHttpMultiPart*>(self)) {
        vqhttpmultipart->QHttpMultiPart::timerEvent(event);
    } else
        qFatal("Error: Protected virtual method QHttpMultiPart::timerEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QHttpMultiPart_OnTimerEvent(QHttpMultiPart* self, intptr_t slot) {
    if (auto* vqhttpmultipart = dynamic_cast<VirtualQHttpMultiPart*>(self))
        vqhttpmultipart->qhttpmultipart_timerevent_callback = reinterpret_cast<VirtualQHttpMultiPart::QHttpMultiPart_TimerEvent_Callback>(slot);
}

// Derived class handler implementation
void QHttpMultiPart_ChildEvent(QHttpMultiPart* self, QChildEvent* event) {
    auto* vqhttpmultipart = dynamic_cast<VirtualQHttpMultiPart*>(self);
    if (vqhttpmultipart) {
        vqhttpmultipart->childEvent(event);
    } else {
        qFatal("Error: Protected virtual method QHttpMultiPart::childEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QHttpMultiPart_SuperChildEvent(QHttpMultiPart* self, QChildEvent* event) {
    if (auto* vqhttpmultipart = dynamic_cast<VirtualQHttpMultiPart*>(self)) {
        vqhttpmultipart->QHttpMultiPart::childEvent(event);
    } else
        qFatal("Error: Protected virtual method QHttpMultiPart::childEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QHttpMultiPart_OnChildEvent(QHttpMultiPart* self, intptr_t slot) {
    if (auto* vqhttpmultipart = dynamic_cast<VirtualQHttpMultiPart*>(self))
        vqhttpmultipart->qhttpmultipart_childevent_callback = reinterpret_cast<VirtualQHttpMultiPart::QHttpMultiPart_ChildEvent_Callback>(slot);
}

// Derived class handler implementation
void QHttpMultiPart_CustomEvent(QHttpMultiPart* self, QEvent* event) {
    auto* vqhttpmultipart = dynamic_cast<VirtualQHttpMultiPart*>(self);
    if (vqhttpmultipart) {
        vqhttpmultipart->customEvent(event);
    } else {
        qFatal("Error: Protected virtual method QHttpMultiPart::customEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QHttpMultiPart_SuperCustomEvent(QHttpMultiPart* self, QEvent* event) {
    if (auto* vqhttpmultipart = dynamic_cast<VirtualQHttpMultiPart*>(self)) {
        vqhttpmultipart->QHttpMultiPart::customEvent(event);
    } else
        qFatal("Error: Protected virtual method QHttpMultiPart::customEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QHttpMultiPart_OnCustomEvent(QHttpMultiPart* self, intptr_t slot) {
    if (auto* vqhttpmultipart = dynamic_cast<VirtualQHttpMultiPart*>(self))
        vqhttpmultipart->qhttpmultipart_customevent_callback = reinterpret_cast<VirtualQHttpMultiPart::QHttpMultiPart_CustomEvent_Callback>(slot);
}

// Derived class handler implementation
void QHttpMultiPart_ConnectNotify(QHttpMultiPart* self, const QMetaMethod* signal) {
    auto* vqhttpmultipart = dynamic_cast<VirtualQHttpMultiPart*>(self);
    if (vqhttpmultipart) {
        vqhttpmultipart->connectNotify(*signal);
    } else {
        qFatal("Error: Protected virtual method QHttpMultiPart::connectNotify called without a directly constructed type");
    }
}

// Base class handler implementation
void QHttpMultiPart_SuperConnectNotify(QHttpMultiPart* self, const QMetaMethod* signal) {
    if (auto* vqhttpmultipart = dynamic_cast<VirtualQHttpMultiPart*>(self)) {
        vqhttpmultipart->QHttpMultiPart::connectNotify(*signal);
    } else
        qFatal("Error: Protected virtual method QHttpMultiPart::connectNotify called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QHttpMultiPart_OnConnectNotify(QHttpMultiPart* self, intptr_t slot) {
    if (auto* vqhttpmultipart = dynamic_cast<VirtualQHttpMultiPart*>(self))
        vqhttpmultipart->qhttpmultipart_connectnotify_callback = reinterpret_cast<VirtualQHttpMultiPart::QHttpMultiPart_ConnectNotify_Callback>(slot);
}

// Derived class handler implementation
void QHttpMultiPart_DisconnectNotify(QHttpMultiPart* self, const QMetaMethod* signal) {
    auto* vqhttpmultipart = dynamic_cast<VirtualQHttpMultiPart*>(self);
    if (vqhttpmultipart) {
        vqhttpmultipart->disconnectNotify(*signal);
    } else {
        qFatal("Error: Protected virtual method QHttpMultiPart::disconnectNotify called without a directly constructed type");
    }
}

// Base class handler implementation
void QHttpMultiPart_SuperDisconnectNotify(QHttpMultiPart* self, const QMetaMethod* signal) {
    if (auto* vqhttpmultipart = dynamic_cast<VirtualQHttpMultiPart*>(self)) {
        vqhttpmultipart->QHttpMultiPart::disconnectNotify(*signal);
    } else
        qFatal("Error: Protected virtual method QHttpMultiPart::disconnectNotify called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QHttpMultiPart_OnDisconnectNotify(QHttpMultiPart* self, intptr_t slot) {
    if (auto* vqhttpmultipart = dynamic_cast<VirtualQHttpMultiPart*>(self))
        vqhttpmultipart->qhttpmultipart_disconnectnotify_callback = reinterpret_cast<VirtualQHttpMultiPart::QHttpMultiPart_DisconnectNotify_Callback>(slot);
}

// Derived class protected handler implementation
QObject* QHttpMultiPart_Sender(const QHttpMultiPart* self) {
    if (auto* vqhttpmultipart = const_cast<VirtualQHttpMultiPart*>(dynamic_cast<const VirtualQHttpMultiPart*>(self))) {
        return vqhttpmultipart->VirtualQHttpMultiPart::sender();
    } else
        qFatal("Error: Protected method QHttpMultiPart::sender called without a directly constructed type");
}

// Derived class protected handler implementation
int QHttpMultiPart_SenderSignalIndex(const QHttpMultiPart* self) {
    if (auto* vqhttpmultipart = const_cast<VirtualQHttpMultiPart*>(dynamic_cast<const VirtualQHttpMultiPart*>(self))) {
        return vqhttpmultipart->VirtualQHttpMultiPart::senderSignalIndex();
    } else
        qFatal("Error: Protected method QHttpMultiPart::senderSignalIndex called without a directly constructed type");
}

// Derived class protected handler implementation
int QHttpMultiPart_Receivers(const QHttpMultiPart* self, const char* signal) {
    if (auto* vqhttpmultipart = const_cast<VirtualQHttpMultiPart*>(dynamic_cast<const VirtualQHttpMultiPart*>(self))) {
        return vqhttpmultipart->VirtualQHttpMultiPart::receivers(signal);
    } else
        qFatal("Error: Protected method QHttpMultiPart::receivers called without a directly constructed type");
}

// Derived class protected handler implementation
bool QHttpMultiPart_IsSignalConnected(const QHttpMultiPart* self, const QMetaMethod* signal) {
    if (auto* vqhttpmultipart = const_cast<VirtualQHttpMultiPart*>(dynamic_cast<const VirtualQHttpMultiPart*>(self))) {
        return vqhttpmultipart->VirtualQHttpMultiPart::isSignalConnected(*signal);
    } else
        qFatal("Error: Protected method QHttpMultiPart::isSignalConnected called without a directly constructed type");
}

void QHttpMultiPart_Delete(QHttpMultiPart* self) {
    delete self;
}
