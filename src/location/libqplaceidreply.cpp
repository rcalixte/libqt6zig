#include <QChildEvent>
#include <QEvent>
#include <QMetaMethod>
#include <QMetaObject>
#include <QObject>
#include <QPlaceIdReply>
#include <QPlaceReply>
#include <QString>
#include <QTimerEvent>
#include <qplaceidreply.h>
#include "libqplaceidreply.h"
#include "libqplaceidreply.hxx"

QPlaceIdReply* QPlaceIdReply_new(int operationType) {
    return new VirtualQPlaceIdReply(static_cast<QPlaceIdReply::OperationType>(operationType));
}

QPlaceIdReply* QPlaceIdReply_new2(int operationType, QObject* parent) {
    return new VirtualQPlaceIdReply(static_cast<QPlaceIdReply::OperationType>(operationType), parent);
}

QMetaObject* QPlaceIdReply_MetaObject(const QPlaceIdReply* self) {
    return (QMetaObject*)self->metaObject();
}

void* QPlaceIdReply_Metacast(QPlaceIdReply* self, const char* param1) {
    return self->qt_metacast(param1);
}

int QPlaceIdReply_Metacall(QPlaceIdReply* self, int param1, int param2, void** param3) {
    return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

libqt_string QPlaceIdReply_Tr(const char* s) {
    auto _ret = QPlaceIdReply::tr(s);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

int QPlaceIdReply_Type(const QPlaceIdReply* self) {
    return static_cast<int>(self->type());
}

int QPlaceIdReply_OperationType(const QPlaceIdReply* self) {
    return static_cast<int>(self->operationType());
}

libqt_string QPlaceIdReply_Id(const QPlaceIdReply* self) {
    auto _ret = self->id();
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string QPlaceIdReply_Tr2(const char* s, const char* c) {
    auto _ret = QPlaceIdReply::tr(s, c);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string QPlaceIdReply_Tr3(const char* s, const char* c, int n) {
    auto _ret = QPlaceIdReply::tr(s, c, static_cast<int>(n));
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
QMetaObject* QPlaceIdReply_SuperMetaObject(const QPlaceIdReply* self) {
    return (QMetaObject*)self->QPlaceIdReply::metaObject();
}

// Auxiliary method to allow providing re-implementation
void QPlaceIdReply_OnMetaObject(QPlaceIdReply* self, intptr_t slot) {
    if (auto* vqplaceidreply = const_cast<VirtualQPlaceIdReply*>(dynamic_cast<const VirtualQPlaceIdReply*>(self)))
        vqplaceidreply->qplaceidreply_metaobject_callback = reinterpret_cast<VirtualQPlaceIdReply::QPlaceIdReply_MetaObject_Callback>(slot);
}

// Base class handler implementation
void* QPlaceIdReply_SuperMetacast(QPlaceIdReply* self, const char* param1) {
    return self->QPlaceIdReply::qt_metacast(param1);
}

// Auxiliary method to allow providing re-implementation
void QPlaceIdReply_OnMetacast(QPlaceIdReply* self, intptr_t slot) {
    if (auto* vqplaceidreply = dynamic_cast<VirtualQPlaceIdReply*>(self))
        vqplaceidreply->qplaceidreply_metacast_callback = reinterpret_cast<VirtualQPlaceIdReply::QPlaceIdReply_Metacast_Callback>(slot);
}

// Base class handler implementation
int QPlaceIdReply_SuperMetacall(QPlaceIdReply* self, int param1, int param2, void** param3) {
    return self->QPlaceIdReply::qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

// Auxiliary method to allow providing re-implementation
void QPlaceIdReply_OnMetacall(QPlaceIdReply* self, intptr_t slot) {
    if (auto* vqplaceidreply = dynamic_cast<VirtualQPlaceIdReply*>(self))
        vqplaceidreply->qplaceidreply_metacall_callback = reinterpret_cast<VirtualQPlaceIdReply::QPlaceIdReply_Metacall_Callback>(slot);
}

// Base class handler implementation
int QPlaceIdReply_SuperType(const QPlaceIdReply* self) {
    return static_cast<int>(self->QPlaceIdReply::type());
}

// Auxiliary method to allow providing re-implementation
void QPlaceIdReply_OnType(QPlaceIdReply* self, intptr_t slot) {
    if (auto* vqplaceidreply = const_cast<VirtualQPlaceIdReply*>(dynamic_cast<const VirtualQPlaceIdReply*>(self)))
        vqplaceidreply->qplaceidreply_type_callback = reinterpret_cast<VirtualQPlaceIdReply::QPlaceIdReply_Type_Callback>(slot);
}

// Derived class handler implementation
void QPlaceIdReply_Abort(QPlaceIdReply* self) {
    self->abort();
}

// Base class handler implementation
void QPlaceIdReply_SuperAbort(QPlaceIdReply* self) {
    self->QPlaceIdReply::abort();
}

// Auxiliary method to allow providing re-implementation
void QPlaceIdReply_OnAbort(QPlaceIdReply* self, intptr_t slot) {
    if (auto* vqplaceidreply = dynamic_cast<VirtualQPlaceIdReply*>(self))
        vqplaceidreply->qplaceidreply_abort_callback = reinterpret_cast<VirtualQPlaceIdReply::QPlaceIdReply_Abort_Callback>(slot);
}

// Derived class handler implementation
bool QPlaceIdReply_Event(QPlaceIdReply* self, QEvent* event) {
    return self->event(event);
}

// Base class handler implementation
bool QPlaceIdReply_SuperEvent(QPlaceIdReply* self, QEvent* event) {
    return self->QPlaceIdReply::event(event);
}

// Auxiliary method to allow providing re-implementation
void QPlaceIdReply_OnEvent(QPlaceIdReply* self, intptr_t slot) {
    if (auto* vqplaceidreply = dynamic_cast<VirtualQPlaceIdReply*>(self))
        vqplaceidreply->qplaceidreply_event_callback = reinterpret_cast<VirtualQPlaceIdReply::QPlaceIdReply_Event_Callback>(slot);
}

// Derived class handler implementation
bool QPlaceIdReply_EventFilter(QPlaceIdReply* self, QObject* watched, QEvent* event) {
    return self->eventFilter(watched, event);
}

// Base class handler implementation
bool QPlaceIdReply_SuperEventFilter(QPlaceIdReply* self, QObject* watched, QEvent* event) {
    return self->QPlaceIdReply::eventFilter(watched, event);
}

// Auxiliary method to allow providing re-implementation
void QPlaceIdReply_OnEventFilter(QPlaceIdReply* self, intptr_t slot) {
    if (auto* vqplaceidreply = dynamic_cast<VirtualQPlaceIdReply*>(self))
        vqplaceidreply->qplaceidreply_eventfilter_callback = reinterpret_cast<VirtualQPlaceIdReply::QPlaceIdReply_EventFilter_Callback>(slot);
}

// Derived class handler implementation
void QPlaceIdReply_TimerEvent(QPlaceIdReply* self, QTimerEvent* event) {
    auto* vqplaceidreply = dynamic_cast<VirtualQPlaceIdReply*>(self);
    if (vqplaceidreply) {
        vqplaceidreply->timerEvent(event);
    } else {
        qFatal("Error: Protected virtual method QPlaceIdReply::timerEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QPlaceIdReply_SuperTimerEvent(QPlaceIdReply* self, QTimerEvent* event) {
    if (auto* vqplaceidreply = dynamic_cast<VirtualQPlaceIdReply*>(self)) {
        vqplaceidreply->QPlaceIdReply::timerEvent(event);
    } else
        qFatal("Error: Protected virtual method QPlaceIdReply::timerEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QPlaceIdReply_OnTimerEvent(QPlaceIdReply* self, intptr_t slot) {
    if (auto* vqplaceidreply = dynamic_cast<VirtualQPlaceIdReply*>(self))
        vqplaceidreply->qplaceidreply_timerevent_callback = reinterpret_cast<VirtualQPlaceIdReply::QPlaceIdReply_TimerEvent_Callback>(slot);
}

// Derived class handler implementation
void QPlaceIdReply_ChildEvent(QPlaceIdReply* self, QChildEvent* event) {
    auto* vqplaceidreply = dynamic_cast<VirtualQPlaceIdReply*>(self);
    if (vqplaceidreply) {
        vqplaceidreply->childEvent(event);
    } else {
        qFatal("Error: Protected virtual method QPlaceIdReply::childEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QPlaceIdReply_SuperChildEvent(QPlaceIdReply* self, QChildEvent* event) {
    if (auto* vqplaceidreply = dynamic_cast<VirtualQPlaceIdReply*>(self)) {
        vqplaceidreply->QPlaceIdReply::childEvent(event);
    } else
        qFatal("Error: Protected virtual method QPlaceIdReply::childEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QPlaceIdReply_OnChildEvent(QPlaceIdReply* self, intptr_t slot) {
    if (auto* vqplaceidreply = dynamic_cast<VirtualQPlaceIdReply*>(self))
        vqplaceidreply->qplaceidreply_childevent_callback = reinterpret_cast<VirtualQPlaceIdReply::QPlaceIdReply_ChildEvent_Callback>(slot);
}

// Derived class handler implementation
void QPlaceIdReply_CustomEvent(QPlaceIdReply* self, QEvent* event) {
    auto* vqplaceidreply = dynamic_cast<VirtualQPlaceIdReply*>(self);
    if (vqplaceidreply) {
        vqplaceidreply->customEvent(event);
    } else {
        qFatal("Error: Protected virtual method QPlaceIdReply::customEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QPlaceIdReply_SuperCustomEvent(QPlaceIdReply* self, QEvent* event) {
    if (auto* vqplaceidreply = dynamic_cast<VirtualQPlaceIdReply*>(self)) {
        vqplaceidreply->QPlaceIdReply::customEvent(event);
    } else
        qFatal("Error: Protected virtual method QPlaceIdReply::customEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QPlaceIdReply_OnCustomEvent(QPlaceIdReply* self, intptr_t slot) {
    if (auto* vqplaceidreply = dynamic_cast<VirtualQPlaceIdReply*>(self))
        vqplaceidreply->qplaceidreply_customevent_callback = reinterpret_cast<VirtualQPlaceIdReply::QPlaceIdReply_CustomEvent_Callback>(slot);
}

// Derived class handler implementation
void QPlaceIdReply_ConnectNotify(QPlaceIdReply* self, const QMetaMethod* signal) {
    auto* vqplaceidreply = dynamic_cast<VirtualQPlaceIdReply*>(self);
    if (vqplaceidreply) {
        vqplaceidreply->connectNotify(*signal);
    } else {
        qFatal("Error: Protected virtual method QPlaceIdReply::connectNotify called without a directly constructed type");
    }
}

// Base class handler implementation
void QPlaceIdReply_SuperConnectNotify(QPlaceIdReply* self, const QMetaMethod* signal) {
    if (auto* vqplaceidreply = dynamic_cast<VirtualQPlaceIdReply*>(self)) {
        vqplaceidreply->QPlaceIdReply::connectNotify(*signal);
    } else
        qFatal("Error: Protected virtual method QPlaceIdReply::connectNotify called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QPlaceIdReply_OnConnectNotify(QPlaceIdReply* self, intptr_t slot) {
    if (auto* vqplaceidreply = dynamic_cast<VirtualQPlaceIdReply*>(self))
        vqplaceidreply->qplaceidreply_connectnotify_callback = reinterpret_cast<VirtualQPlaceIdReply::QPlaceIdReply_ConnectNotify_Callback>(slot);
}

// Derived class handler implementation
void QPlaceIdReply_DisconnectNotify(QPlaceIdReply* self, const QMetaMethod* signal) {
    auto* vqplaceidreply = dynamic_cast<VirtualQPlaceIdReply*>(self);
    if (vqplaceidreply) {
        vqplaceidreply->disconnectNotify(*signal);
    } else {
        qFatal("Error: Protected virtual method QPlaceIdReply::disconnectNotify called without a directly constructed type");
    }
}

// Base class handler implementation
void QPlaceIdReply_SuperDisconnectNotify(QPlaceIdReply* self, const QMetaMethod* signal) {
    if (auto* vqplaceidreply = dynamic_cast<VirtualQPlaceIdReply*>(self)) {
        vqplaceidreply->QPlaceIdReply::disconnectNotify(*signal);
    } else
        qFatal("Error: Protected virtual method QPlaceIdReply::disconnectNotify called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QPlaceIdReply_OnDisconnectNotify(QPlaceIdReply* self, intptr_t slot) {
    if (auto* vqplaceidreply = dynamic_cast<VirtualQPlaceIdReply*>(self))
        vqplaceidreply->qplaceidreply_disconnectnotify_callback = reinterpret_cast<VirtualQPlaceIdReply::QPlaceIdReply_DisconnectNotify_Callback>(slot);
}

// Derived class protected handler implementation
void QPlaceIdReply_SetId(QPlaceIdReply* self, const libqt_string identifier) {
    if (auto* vqplaceidreply = dynamic_cast<VirtualQPlaceIdReply*>(self)) {
        QString identifier_QString = QString::fromUtf8(identifier.data, identifier.len);
        vqplaceidreply->VirtualQPlaceIdReply::setId(identifier_QString);
    } else
        qFatal("Error: Protected method QPlaceIdReply::setId called without a directly constructed type");
}

// Derived class protected handler implementation
void QPlaceIdReply_SetFinished(QPlaceIdReply* self, bool finished) {
    if (auto* vqplaceidreply = dynamic_cast<VirtualQPlaceIdReply*>(self)) {
        vqplaceidreply->VirtualQPlaceIdReply::setFinished(finished);
    } else
        qFatal("Error: Protected method QPlaceIdReply::setFinished called without a directly constructed type");
}

// Derived class protected handler implementation
void QPlaceIdReply_SetError(QPlaceIdReply* self, int errorVal, const libqt_string errorString) {
    if (auto* vqplaceidreply = dynamic_cast<VirtualQPlaceIdReply*>(self)) {
        QString errorString_QString = QString::fromUtf8(errorString.data, errorString.len);
        vqplaceidreply->VirtualQPlaceIdReply::setError(static_cast<QPlaceReply::Error>(errorVal), errorString_QString);
    } else
        qFatal("Error: Protected method QPlaceIdReply::setError called without a directly constructed type");
}

// Derived class protected handler implementation
QObject* QPlaceIdReply_Sender(const QPlaceIdReply* self) {
    if (auto* vqplaceidreply = const_cast<VirtualQPlaceIdReply*>(dynamic_cast<const VirtualQPlaceIdReply*>(self))) {
        return vqplaceidreply->VirtualQPlaceIdReply::sender();
    } else
        qFatal("Error: Protected method QPlaceIdReply::sender called without a directly constructed type");
}

// Derived class protected handler implementation
int QPlaceIdReply_SenderSignalIndex(const QPlaceIdReply* self) {
    if (auto* vqplaceidreply = const_cast<VirtualQPlaceIdReply*>(dynamic_cast<const VirtualQPlaceIdReply*>(self))) {
        return vqplaceidreply->VirtualQPlaceIdReply::senderSignalIndex();
    } else
        qFatal("Error: Protected method QPlaceIdReply::senderSignalIndex called without a directly constructed type");
}

// Derived class protected handler implementation
int QPlaceIdReply_Receivers(const QPlaceIdReply* self, const char* signal) {
    if (auto* vqplaceidreply = const_cast<VirtualQPlaceIdReply*>(dynamic_cast<const VirtualQPlaceIdReply*>(self))) {
        return vqplaceidreply->VirtualQPlaceIdReply::receivers(signal);
    } else
        qFatal("Error: Protected method QPlaceIdReply::receivers called without a directly constructed type");
}

// Derived class protected handler implementation
bool QPlaceIdReply_IsSignalConnected(const QPlaceIdReply* self, const QMetaMethod* signal) {
    if (auto* vqplaceidreply = const_cast<VirtualQPlaceIdReply*>(dynamic_cast<const VirtualQPlaceIdReply*>(self))) {
        return vqplaceidreply->VirtualQPlaceIdReply::isSignalConnected(*signal);
    } else
        qFatal("Error: Protected method QPlaceIdReply::isSignalConnected called without a directly constructed type");
}

void QPlaceIdReply_Delete(QPlaceIdReply* self) {
    delete self;
}
