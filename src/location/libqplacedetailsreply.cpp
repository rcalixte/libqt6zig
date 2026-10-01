#include <QChildEvent>
#include <QEvent>
#include <QMetaMethod>
#include <QMetaObject>
#include <QObject>
#include <QPlace>
#include <QPlaceDetailsReply>
#include <QPlaceReply>
#include <QString>
#include <QTimerEvent>
#include <qplacedetailsreply.h>
#include "libqplacedetailsreply.h"
#include "libqplacedetailsreply.hxx"

QPlaceDetailsReply* QPlaceDetailsReply_new() {
    return new VirtualQPlaceDetailsReply();
}

QPlaceDetailsReply* QPlaceDetailsReply_new2(QObject* parent) {
    return new VirtualQPlaceDetailsReply(parent);
}

QMetaObject* QPlaceDetailsReply_MetaObject(const QPlaceDetailsReply* self) {
    return (QMetaObject*)self->metaObject();
}

void* QPlaceDetailsReply_Metacast(QPlaceDetailsReply* self, const char* param1) {
    return self->qt_metacast(param1);
}

int QPlaceDetailsReply_Metacall(QPlaceDetailsReply* self, int param1, int param2, void** param3) {
    return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

libqt_string QPlaceDetailsReply_Tr(const char* s) {
    auto _ret = QPlaceDetailsReply::tr(s);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

int QPlaceDetailsReply_Type(const QPlaceDetailsReply* self) {
    return static_cast<int>(self->type());
}

QPlace* QPlaceDetailsReply_Place(const QPlaceDetailsReply* self) {
    return new QPlace(self->place());
}

libqt_string QPlaceDetailsReply_Tr2(const char* s, const char* c) {
    auto _ret = QPlaceDetailsReply::tr(s, c);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string QPlaceDetailsReply_Tr3(const char* s, const char* c, int n) {
    auto _ret = QPlaceDetailsReply::tr(s, c, static_cast<int>(n));
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
QMetaObject* QPlaceDetailsReply_SuperMetaObject(const QPlaceDetailsReply* self) {
    return (QMetaObject*)self->QPlaceDetailsReply::metaObject();
}

// Auxiliary method to allow providing re-implementation
void QPlaceDetailsReply_OnMetaObject(QPlaceDetailsReply* self, intptr_t slot) {
    if (auto* vqplacedetailsreply = const_cast<VirtualQPlaceDetailsReply*>(dynamic_cast<const VirtualQPlaceDetailsReply*>(self)))
        vqplacedetailsreply->qplacedetailsreply_metaobject_callback = reinterpret_cast<VirtualQPlaceDetailsReply::QPlaceDetailsReply_MetaObject_Callback>(slot);
}

// Base class handler implementation
void* QPlaceDetailsReply_SuperMetacast(QPlaceDetailsReply* self, const char* param1) {
    return self->QPlaceDetailsReply::qt_metacast(param1);
}

// Auxiliary method to allow providing re-implementation
void QPlaceDetailsReply_OnMetacast(QPlaceDetailsReply* self, intptr_t slot) {
    if (auto* vqplacedetailsreply = dynamic_cast<VirtualQPlaceDetailsReply*>(self))
        vqplacedetailsreply->qplacedetailsreply_metacast_callback = reinterpret_cast<VirtualQPlaceDetailsReply::QPlaceDetailsReply_Metacast_Callback>(slot);
}

// Base class handler implementation
int QPlaceDetailsReply_SuperMetacall(QPlaceDetailsReply* self, int param1, int param2, void** param3) {
    return self->QPlaceDetailsReply::qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

// Auxiliary method to allow providing re-implementation
void QPlaceDetailsReply_OnMetacall(QPlaceDetailsReply* self, intptr_t slot) {
    if (auto* vqplacedetailsreply = dynamic_cast<VirtualQPlaceDetailsReply*>(self))
        vqplacedetailsreply->qplacedetailsreply_metacall_callback = reinterpret_cast<VirtualQPlaceDetailsReply::QPlaceDetailsReply_Metacall_Callback>(slot);
}

// Base class handler implementation
int QPlaceDetailsReply_SuperType(const QPlaceDetailsReply* self) {
    return static_cast<int>(self->QPlaceDetailsReply::type());
}

// Auxiliary method to allow providing re-implementation
void QPlaceDetailsReply_OnType(QPlaceDetailsReply* self, intptr_t slot) {
    if (auto* vqplacedetailsreply = const_cast<VirtualQPlaceDetailsReply*>(dynamic_cast<const VirtualQPlaceDetailsReply*>(self)))
        vqplacedetailsreply->qplacedetailsreply_type_callback = reinterpret_cast<VirtualQPlaceDetailsReply::QPlaceDetailsReply_Type_Callback>(slot);
}

// Derived class handler implementation
void QPlaceDetailsReply_Abort(QPlaceDetailsReply* self) {
    self->abort();
}

// Base class handler implementation
void QPlaceDetailsReply_SuperAbort(QPlaceDetailsReply* self) {
    self->QPlaceDetailsReply::abort();
}

// Auxiliary method to allow providing re-implementation
void QPlaceDetailsReply_OnAbort(QPlaceDetailsReply* self, intptr_t slot) {
    if (auto* vqplacedetailsreply = dynamic_cast<VirtualQPlaceDetailsReply*>(self))
        vqplacedetailsreply->qplacedetailsreply_abort_callback = reinterpret_cast<VirtualQPlaceDetailsReply::QPlaceDetailsReply_Abort_Callback>(slot);
}

// Derived class handler implementation
bool QPlaceDetailsReply_Event(QPlaceDetailsReply* self, QEvent* event) {
    return self->event(event);
}

// Base class handler implementation
bool QPlaceDetailsReply_SuperEvent(QPlaceDetailsReply* self, QEvent* event) {
    return self->QPlaceDetailsReply::event(event);
}

// Auxiliary method to allow providing re-implementation
void QPlaceDetailsReply_OnEvent(QPlaceDetailsReply* self, intptr_t slot) {
    if (auto* vqplacedetailsreply = dynamic_cast<VirtualQPlaceDetailsReply*>(self))
        vqplacedetailsreply->qplacedetailsreply_event_callback = reinterpret_cast<VirtualQPlaceDetailsReply::QPlaceDetailsReply_Event_Callback>(slot);
}

// Derived class handler implementation
bool QPlaceDetailsReply_EventFilter(QPlaceDetailsReply* self, QObject* watched, QEvent* event) {
    return self->eventFilter(watched, event);
}

// Base class handler implementation
bool QPlaceDetailsReply_SuperEventFilter(QPlaceDetailsReply* self, QObject* watched, QEvent* event) {
    return self->QPlaceDetailsReply::eventFilter(watched, event);
}

// Auxiliary method to allow providing re-implementation
void QPlaceDetailsReply_OnEventFilter(QPlaceDetailsReply* self, intptr_t slot) {
    if (auto* vqplacedetailsreply = dynamic_cast<VirtualQPlaceDetailsReply*>(self))
        vqplacedetailsreply->qplacedetailsreply_eventfilter_callback = reinterpret_cast<VirtualQPlaceDetailsReply::QPlaceDetailsReply_EventFilter_Callback>(slot);
}

// Derived class handler implementation
void QPlaceDetailsReply_TimerEvent(QPlaceDetailsReply* self, QTimerEvent* event) {
    auto* vqplacedetailsreply = dynamic_cast<VirtualQPlaceDetailsReply*>(self);
    if (vqplacedetailsreply) {
        vqplacedetailsreply->timerEvent(event);
    } else {
        qFatal("Error: Protected virtual method QPlaceDetailsReply::timerEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QPlaceDetailsReply_SuperTimerEvent(QPlaceDetailsReply* self, QTimerEvent* event) {
    if (auto* vqplacedetailsreply = dynamic_cast<VirtualQPlaceDetailsReply*>(self)) {
        vqplacedetailsreply->QPlaceDetailsReply::timerEvent(event);
    } else
        qFatal("Error: Protected virtual method QPlaceDetailsReply::timerEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QPlaceDetailsReply_OnTimerEvent(QPlaceDetailsReply* self, intptr_t slot) {
    if (auto* vqplacedetailsreply = dynamic_cast<VirtualQPlaceDetailsReply*>(self))
        vqplacedetailsreply->qplacedetailsreply_timerevent_callback = reinterpret_cast<VirtualQPlaceDetailsReply::QPlaceDetailsReply_TimerEvent_Callback>(slot);
}

// Derived class handler implementation
void QPlaceDetailsReply_ChildEvent(QPlaceDetailsReply* self, QChildEvent* event) {
    auto* vqplacedetailsreply = dynamic_cast<VirtualQPlaceDetailsReply*>(self);
    if (vqplacedetailsreply) {
        vqplacedetailsreply->childEvent(event);
    } else {
        qFatal("Error: Protected virtual method QPlaceDetailsReply::childEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QPlaceDetailsReply_SuperChildEvent(QPlaceDetailsReply* self, QChildEvent* event) {
    if (auto* vqplacedetailsreply = dynamic_cast<VirtualQPlaceDetailsReply*>(self)) {
        vqplacedetailsreply->QPlaceDetailsReply::childEvent(event);
    } else
        qFatal("Error: Protected virtual method QPlaceDetailsReply::childEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QPlaceDetailsReply_OnChildEvent(QPlaceDetailsReply* self, intptr_t slot) {
    if (auto* vqplacedetailsreply = dynamic_cast<VirtualQPlaceDetailsReply*>(self))
        vqplacedetailsreply->qplacedetailsreply_childevent_callback = reinterpret_cast<VirtualQPlaceDetailsReply::QPlaceDetailsReply_ChildEvent_Callback>(slot);
}

// Derived class handler implementation
void QPlaceDetailsReply_CustomEvent(QPlaceDetailsReply* self, QEvent* event) {
    auto* vqplacedetailsreply = dynamic_cast<VirtualQPlaceDetailsReply*>(self);
    if (vqplacedetailsreply) {
        vqplacedetailsreply->customEvent(event);
    } else {
        qFatal("Error: Protected virtual method QPlaceDetailsReply::customEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QPlaceDetailsReply_SuperCustomEvent(QPlaceDetailsReply* self, QEvent* event) {
    if (auto* vqplacedetailsreply = dynamic_cast<VirtualQPlaceDetailsReply*>(self)) {
        vqplacedetailsreply->QPlaceDetailsReply::customEvent(event);
    } else
        qFatal("Error: Protected virtual method QPlaceDetailsReply::customEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QPlaceDetailsReply_OnCustomEvent(QPlaceDetailsReply* self, intptr_t slot) {
    if (auto* vqplacedetailsreply = dynamic_cast<VirtualQPlaceDetailsReply*>(self))
        vqplacedetailsreply->qplacedetailsreply_customevent_callback = reinterpret_cast<VirtualQPlaceDetailsReply::QPlaceDetailsReply_CustomEvent_Callback>(slot);
}

// Derived class handler implementation
void QPlaceDetailsReply_ConnectNotify(QPlaceDetailsReply* self, const QMetaMethod* signal) {
    auto* vqplacedetailsreply = dynamic_cast<VirtualQPlaceDetailsReply*>(self);
    if (vqplacedetailsreply) {
        vqplacedetailsreply->connectNotify(*signal);
    } else {
        qFatal("Error: Protected virtual method QPlaceDetailsReply::connectNotify called without a directly constructed type");
    }
}

// Base class handler implementation
void QPlaceDetailsReply_SuperConnectNotify(QPlaceDetailsReply* self, const QMetaMethod* signal) {
    if (auto* vqplacedetailsreply = dynamic_cast<VirtualQPlaceDetailsReply*>(self)) {
        vqplacedetailsreply->QPlaceDetailsReply::connectNotify(*signal);
    } else
        qFatal("Error: Protected virtual method QPlaceDetailsReply::connectNotify called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QPlaceDetailsReply_OnConnectNotify(QPlaceDetailsReply* self, intptr_t slot) {
    if (auto* vqplacedetailsreply = dynamic_cast<VirtualQPlaceDetailsReply*>(self))
        vqplacedetailsreply->qplacedetailsreply_connectnotify_callback = reinterpret_cast<VirtualQPlaceDetailsReply::QPlaceDetailsReply_ConnectNotify_Callback>(slot);
}

// Derived class handler implementation
void QPlaceDetailsReply_DisconnectNotify(QPlaceDetailsReply* self, const QMetaMethod* signal) {
    auto* vqplacedetailsreply = dynamic_cast<VirtualQPlaceDetailsReply*>(self);
    if (vqplacedetailsreply) {
        vqplacedetailsreply->disconnectNotify(*signal);
    } else {
        qFatal("Error: Protected virtual method QPlaceDetailsReply::disconnectNotify called without a directly constructed type");
    }
}

// Base class handler implementation
void QPlaceDetailsReply_SuperDisconnectNotify(QPlaceDetailsReply* self, const QMetaMethod* signal) {
    if (auto* vqplacedetailsreply = dynamic_cast<VirtualQPlaceDetailsReply*>(self)) {
        vqplacedetailsreply->QPlaceDetailsReply::disconnectNotify(*signal);
    } else
        qFatal("Error: Protected virtual method QPlaceDetailsReply::disconnectNotify called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QPlaceDetailsReply_OnDisconnectNotify(QPlaceDetailsReply* self, intptr_t slot) {
    if (auto* vqplacedetailsreply = dynamic_cast<VirtualQPlaceDetailsReply*>(self))
        vqplacedetailsreply->qplacedetailsreply_disconnectnotify_callback = reinterpret_cast<VirtualQPlaceDetailsReply::QPlaceDetailsReply_DisconnectNotify_Callback>(slot);
}

// Derived class protected handler implementation
void QPlaceDetailsReply_SetPlace(QPlaceDetailsReply* self, const QPlace* place) {
    if (auto* vqplacedetailsreply = dynamic_cast<VirtualQPlaceDetailsReply*>(self)) {
        vqplacedetailsreply->VirtualQPlaceDetailsReply::setPlace(*place);
    } else
        qFatal("Error: Protected method QPlaceDetailsReply::setPlace called without a directly constructed type");
}

// Derived class protected handler implementation
void QPlaceDetailsReply_SetFinished(QPlaceDetailsReply* self, bool finished) {
    if (auto* vqplacedetailsreply = dynamic_cast<VirtualQPlaceDetailsReply*>(self)) {
        vqplacedetailsreply->VirtualQPlaceDetailsReply::setFinished(finished);
    } else
        qFatal("Error: Protected method QPlaceDetailsReply::setFinished called without a directly constructed type");
}

// Derived class protected handler implementation
void QPlaceDetailsReply_SetError(QPlaceDetailsReply* self, int errorVal, const libqt_string errorString) {
    if (auto* vqplacedetailsreply = dynamic_cast<VirtualQPlaceDetailsReply*>(self)) {
        QString errorString_QString = QString::fromUtf8(errorString.data, errorString.len);
        vqplacedetailsreply->VirtualQPlaceDetailsReply::setError(static_cast<QPlaceReply::Error>(errorVal), errorString_QString);
    } else
        qFatal("Error: Protected method QPlaceDetailsReply::setError called without a directly constructed type");
}

// Derived class protected handler implementation
QObject* QPlaceDetailsReply_Sender(const QPlaceDetailsReply* self) {
    if (auto* vqplacedetailsreply = const_cast<VirtualQPlaceDetailsReply*>(dynamic_cast<const VirtualQPlaceDetailsReply*>(self))) {
        return vqplacedetailsreply->VirtualQPlaceDetailsReply::sender();
    } else
        qFatal("Error: Protected method QPlaceDetailsReply::sender called without a directly constructed type");
}

// Derived class protected handler implementation
int QPlaceDetailsReply_SenderSignalIndex(const QPlaceDetailsReply* self) {
    if (auto* vqplacedetailsreply = const_cast<VirtualQPlaceDetailsReply*>(dynamic_cast<const VirtualQPlaceDetailsReply*>(self))) {
        return vqplacedetailsreply->VirtualQPlaceDetailsReply::senderSignalIndex();
    } else
        qFatal("Error: Protected method QPlaceDetailsReply::senderSignalIndex called without a directly constructed type");
}

// Derived class protected handler implementation
int QPlaceDetailsReply_Receivers(const QPlaceDetailsReply* self, const char* signal) {
    if (auto* vqplacedetailsreply = const_cast<VirtualQPlaceDetailsReply*>(dynamic_cast<const VirtualQPlaceDetailsReply*>(self))) {
        return vqplacedetailsreply->VirtualQPlaceDetailsReply::receivers(signal);
    } else
        qFatal("Error: Protected method QPlaceDetailsReply::receivers called without a directly constructed type");
}

// Derived class protected handler implementation
bool QPlaceDetailsReply_IsSignalConnected(const QPlaceDetailsReply* self, const QMetaMethod* signal) {
    if (auto* vqplacedetailsreply = const_cast<VirtualQPlaceDetailsReply*>(dynamic_cast<const VirtualQPlaceDetailsReply*>(self))) {
        return vqplacedetailsreply->VirtualQPlaceDetailsReply::isSignalConnected(*signal);
    } else
        qFatal("Error: Protected method QPlaceDetailsReply::isSignalConnected called without a directly constructed type");
}

void QPlaceDetailsReply_Delete(QPlaceDetailsReply* self) {
    delete self;
}
