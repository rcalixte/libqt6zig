#include <QChildEvent>
#include <QEvent>
#include <QList>
#include <QMetaMethod>
#include <QMetaObject>
#include <QObject>
#include <QPlace>
#include <QPlaceMatchReply>
#include <QPlaceMatchRequest>
#include <QPlaceReply>
#include <QString>
#include <QTimerEvent>
#include <qplacematchreply.h>
#include "libqplacematchreply.h"
#include "libqplacematchreply.hxx"

QPlaceMatchReply* QPlaceMatchReply_new() {
    return new VirtualQPlaceMatchReply();
}

QPlaceMatchReply* QPlaceMatchReply_new2(QObject* parent) {
    return new VirtualQPlaceMatchReply(parent);
}

QMetaObject* QPlaceMatchReply_MetaObject(const QPlaceMatchReply* self) {
    return (QMetaObject*)self->metaObject();
}

void* QPlaceMatchReply_Metacast(QPlaceMatchReply* self, const char* param1) {
    return self->qt_metacast(param1);
}

int QPlaceMatchReply_Metacall(QPlaceMatchReply* self, int param1, int param2, void** param3) {
    return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

libqt_string QPlaceMatchReply_Tr(const char* s) {
    auto _ret = QPlaceMatchReply::tr(s);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

int QPlaceMatchReply_Type(const QPlaceMatchReply* self) {
    return static_cast<int>(self->type());
}

libqt_list /* of QPlace* */ QPlaceMatchReply_Places(const QPlaceMatchReply* self) {
    QList<QPlace> _ret = self->places();
    // Convert QList<> from C++ memory to manually-managed C memory
    QPlace** _arr = static_cast<QPlace**>(malloc(sizeof(QPlace*) * (_ret.size())));
    for (qsizetype i = 0; i < _ret.size(); ++i) {
        _arr[i] = new QPlace(_ret[i]);
    }
    libqt_list _out;
    _out.len = _ret.size();
    _out.data = static_cast<void*>(_arr);
    return _out;
}

QPlaceMatchRequest* QPlaceMatchReply_Request(const QPlaceMatchReply* self) {
    return new QPlaceMatchRequest(self->request());
}

libqt_string QPlaceMatchReply_Tr2(const char* s, const char* c) {
    auto _ret = QPlaceMatchReply::tr(s, c);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string QPlaceMatchReply_Tr3(const char* s, const char* c, int n) {
    auto _ret = QPlaceMatchReply::tr(s, c, static_cast<int>(n));
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
QMetaObject* QPlaceMatchReply_SuperMetaObject(const QPlaceMatchReply* self) {
    return (QMetaObject*)self->QPlaceMatchReply::metaObject();
}

// Auxiliary method to allow providing re-implementation
void QPlaceMatchReply_OnMetaObject(QPlaceMatchReply* self, intptr_t slot) {
    if (auto* vqplacematchreply = const_cast<VirtualQPlaceMatchReply*>(dynamic_cast<const VirtualQPlaceMatchReply*>(self)))
        vqplacematchreply->qplacematchreply_metaobject_callback = reinterpret_cast<VirtualQPlaceMatchReply::QPlaceMatchReply_MetaObject_Callback>(slot);
}

// Base class handler implementation
void* QPlaceMatchReply_SuperMetacast(QPlaceMatchReply* self, const char* param1) {
    return self->QPlaceMatchReply::qt_metacast(param1);
}

// Auxiliary method to allow providing re-implementation
void QPlaceMatchReply_OnMetacast(QPlaceMatchReply* self, intptr_t slot) {
    if (auto* vqplacematchreply = dynamic_cast<VirtualQPlaceMatchReply*>(self))
        vqplacematchreply->qplacematchreply_metacast_callback = reinterpret_cast<VirtualQPlaceMatchReply::QPlaceMatchReply_Metacast_Callback>(slot);
}

// Base class handler implementation
int QPlaceMatchReply_SuperMetacall(QPlaceMatchReply* self, int param1, int param2, void** param3) {
    return self->QPlaceMatchReply::qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

// Auxiliary method to allow providing re-implementation
void QPlaceMatchReply_OnMetacall(QPlaceMatchReply* self, intptr_t slot) {
    if (auto* vqplacematchreply = dynamic_cast<VirtualQPlaceMatchReply*>(self))
        vqplacematchreply->qplacematchreply_metacall_callback = reinterpret_cast<VirtualQPlaceMatchReply::QPlaceMatchReply_Metacall_Callback>(slot);
}

// Base class handler implementation
int QPlaceMatchReply_SuperType(const QPlaceMatchReply* self) {
    return static_cast<int>(self->QPlaceMatchReply::type());
}

// Auxiliary method to allow providing re-implementation
void QPlaceMatchReply_OnType(QPlaceMatchReply* self, intptr_t slot) {
    if (auto* vqplacematchreply = const_cast<VirtualQPlaceMatchReply*>(dynamic_cast<const VirtualQPlaceMatchReply*>(self)))
        vqplacematchreply->qplacematchreply_type_callback = reinterpret_cast<VirtualQPlaceMatchReply::QPlaceMatchReply_Type_Callback>(slot);
}

// Derived class handler implementation
void QPlaceMatchReply_Abort(QPlaceMatchReply* self) {
    self->abort();
}

// Base class handler implementation
void QPlaceMatchReply_SuperAbort(QPlaceMatchReply* self) {
    self->QPlaceMatchReply::abort();
}

// Auxiliary method to allow providing re-implementation
void QPlaceMatchReply_OnAbort(QPlaceMatchReply* self, intptr_t slot) {
    if (auto* vqplacematchreply = dynamic_cast<VirtualQPlaceMatchReply*>(self))
        vqplacematchreply->qplacematchreply_abort_callback = reinterpret_cast<VirtualQPlaceMatchReply::QPlaceMatchReply_Abort_Callback>(slot);
}

// Derived class handler implementation
bool QPlaceMatchReply_Event(QPlaceMatchReply* self, QEvent* event) {
    return self->event(event);
}

// Base class handler implementation
bool QPlaceMatchReply_SuperEvent(QPlaceMatchReply* self, QEvent* event) {
    return self->QPlaceMatchReply::event(event);
}

// Auxiliary method to allow providing re-implementation
void QPlaceMatchReply_OnEvent(QPlaceMatchReply* self, intptr_t slot) {
    if (auto* vqplacematchreply = dynamic_cast<VirtualQPlaceMatchReply*>(self))
        vqplacematchreply->qplacematchreply_event_callback = reinterpret_cast<VirtualQPlaceMatchReply::QPlaceMatchReply_Event_Callback>(slot);
}

// Derived class handler implementation
bool QPlaceMatchReply_EventFilter(QPlaceMatchReply* self, QObject* watched, QEvent* event) {
    return self->eventFilter(watched, event);
}

// Base class handler implementation
bool QPlaceMatchReply_SuperEventFilter(QPlaceMatchReply* self, QObject* watched, QEvent* event) {
    return self->QPlaceMatchReply::eventFilter(watched, event);
}

// Auxiliary method to allow providing re-implementation
void QPlaceMatchReply_OnEventFilter(QPlaceMatchReply* self, intptr_t slot) {
    if (auto* vqplacematchreply = dynamic_cast<VirtualQPlaceMatchReply*>(self))
        vqplacematchreply->qplacematchreply_eventfilter_callback = reinterpret_cast<VirtualQPlaceMatchReply::QPlaceMatchReply_EventFilter_Callback>(slot);
}

// Derived class handler implementation
void QPlaceMatchReply_TimerEvent(QPlaceMatchReply* self, QTimerEvent* event) {
    auto* vqplacematchreply = dynamic_cast<VirtualQPlaceMatchReply*>(self);
    if (vqplacematchreply) {
        vqplacematchreply->timerEvent(event);
    } else {
        qFatal("Error: Protected virtual method QPlaceMatchReply::timerEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QPlaceMatchReply_SuperTimerEvent(QPlaceMatchReply* self, QTimerEvent* event) {
    if (auto* vqplacematchreply = dynamic_cast<VirtualQPlaceMatchReply*>(self)) {
        vqplacematchreply->QPlaceMatchReply::timerEvent(event);
    } else
        qFatal("Error: Protected virtual method QPlaceMatchReply::timerEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QPlaceMatchReply_OnTimerEvent(QPlaceMatchReply* self, intptr_t slot) {
    if (auto* vqplacematchreply = dynamic_cast<VirtualQPlaceMatchReply*>(self))
        vqplacematchreply->qplacematchreply_timerevent_callback = reinterpret_cast<VirtualQPlaceMatchReply::QPlaceMatchReply_TimerEvent_Callback>(slot);
}

// Derived class handler implementation
void QPlaceMatchReply_ChildEvent(QPlaceMatchReply* self, QChildEvent* event) {
    auto* vqplacematchreply = dynamic_cast<VirtualQPlaceMatchReply*>(self);
    if (vqplacematchreply) {
        vqplacematchreply->childEvent(event);
    } else {
        qFatal("Error: Protected virtual method QPlaceMatchReply::childEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QPlaceMatchReply_SuperChildEvent(QPlaceMatchReply* self, QChildEvent* event) {
    if (auto* vqplacematchreply = dynamic_cast<VirtualQPlaceMatchReply*>(self)) {
        vqplacematchreply->QPlaceMatchReply::childEvent(event);
    } else
        qFatal("Error: Protected virtual method QPlaceMatchReply::childEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QPlaceMatchReply_OnChildEvent(QPlaceMatchReply* self, intptr_t slot) {
    if (auto* vqplacematchreply = dynamic_cast<VirtualQPlaceMatchReply*>(self))
        vqplacematchreply->qplacematchreply_childevent_callback = reinterpret_cast<VirtualQPlaceMatchReply::QPlaceMatchReply_ChildEvent_Callback>(slot);
}

// Derived class handler implementation
void QPlaceMatchReply_CustomEvent(QPlaceMatchReply* self, QEvent* event) {
    auto* vqplacematchreply = dynamic_cast<VirtualQPlaceMatchReply*>(self);
    if (vqplacematchreply) {
        vqplacematchreply->customEvent(event);
    } else {
        qFatal("Error: Protected virtual method QPlaceMatchReply::customEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QPlaceMatchReply_SuperCustomEvent(QPlaceMatchReply* self, QEvent* event) {
    if (auto* vqplacematchreply = dynamic_cast<VirtualQPlaceMatchReply*>(self)) {
        vqplacematchreply->QPlaceMatchReply::customEvent(event);
    } else
        qFatal("Error: Protected virtual method QPlaceMatchReply::customEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QPlaceMatchReply_OnCustomEvent(QPlaceMatchReply* self, intptr_t slot) {
    if (auto* vqplacematchreply = dynamic_cast<VirtualQPlaceMatchReply*>(self))
        vqplacematchreply->qplacematchreply_customevent_callback = reinterpret_cast<VirtualQPlaceMatchReply::QPlaceMatchReply_CustomEvent_Callback>(slot);
}

// Derived class handler implementation
void QPlaceMatchReply_ConnectNotify(QPlaceMatchReply* self, const QMetaMethod* signal) {
    auto* vqplacematchreply = dynamic_cast<VirtualQPlaceMatchReply*>(self);
    if (vqplacematchreply) {
        vqplacematchreply->connectNotify(*signal);
    } else {
        qFatal("Error: Protected virtual method QPlaceMatchReply::connectNotify called without a directly constructed type");
    }
}

// Base class handler implementation
void QPlaceMatchReply_SuperConnectNotify(QPlaceMatchReply* self, const QMetaMethod* signal) {
    if (auto* vqplacematchreply = dynamic_cast<VirtualQPlaceMatchReply*>(self)) {
        vqplacematchreply->QPlaceMatchReply::connectNotify(*signal);
    } else
        qFatal("Error: Protected virtual method QPlaceMatchReply::connectNotify called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QPlaceMatchReply_OnConnectNotify(QPlaceMatchReply* self, intptr_t slot) {
    if (auto* vqplacematchreply = dynamic_cast<VirtualQPlaceMatchReply*>(self))
        vqplacematchreply->qplacematchreply_connectnotify_callback = reinterpret_cast<VirtualQPlaceMatchReply::QPlaceMatchReply_ConnectNotify_Callback>(slot);
}

// Derived class handler implementation
void QPlaceMatchReply_DisconnectNotify(QPlaceMatchReply* self, const QMetaMethod* signal) {
    auto* vqplacematchreply = dynamic_cast<VirtualQPlaceMatchReply*>(self);
    if (vqplacematchreply) {
        vqplacematchreply->disconnectNotify(*signal);
    } else {
        qFatal("Error: Protected virtual method QPlaceMatchReply::disconnectNotify called without a directly constructed type");
    }
}

// Base class handler implementation
void QPlaceMatchReply_SuperDisconnectNotify(QPlaceMatchReply* self, const QMetaMethod* signal) {
    if (auto* vqplacematchreply = dynamic_cast<VirtualQPlaceMatchReply*>(self)) {
        vqplacematchreply->QPlaceMatchReply::disconnectNotify(*signal);
    } else
        qFatal("Error: Protected virtual method QPlaceMatchReply::disconnectNotify called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QPlaceMatchReply_OnDisconnectNotify(QPlaceMatchReply* self, intptr_t slot) {
    if (auto* vqplacematchreply = dynamic_cast<VirtualQPlaceMatchReply*>(self))
        vqplacematchreply->qplacematchreply_disconnectnotify_callback = reinterpret_cast<VirtualQPlaceMatchReply::QPlaceMatchReply_DisconnectNotify_Callback>(slot);
}

// Derived class protected handler implementation
void QPlaceMatchReply_SetPlaces(QPlaceMatchReply* self, const libqt_list /* of QPlace* */ results) {
    if (auto* vqplacematchreply = dynamic_cast<VirtualQPlaceMatchReply*>(self)) {
        QList<QPlace> results_QList;
        results_QList.reserve(results.len);
        QPlace** results_arr = static_cast<QPlace**>(results.data);
        for (size_t i = 0; i < results.len; ++i) {
            results_QList.push_back(*(results_arr[i]));
        }
        vqplacematchreply->VirtualQPlaceMatchReply::setPlaces(results_QList);
    } else
        qFatal("Error: Protected method QPlaceMatchReply::setPlaces called without a directly constructed type");
}

// Derived class protected handler implementation
void QPlaceMatchReply_SetRequest(QPlaceMatchReply* self, const QPlaceMatchRequest* request) {
    if (auto* vqplacematchreply = dynamic_cast<VirtualQPlaceMatchReply*>(self)) {
        vqplacematchreply->VirtualQPlaceMatchReply::setRequest(*request);
    } else
        qFatal("Error: Protected method QPlaceMatchReply::setRequest called without a directly constructed type");
}

// Derived class protected handler implementation
void QPlaceMatchReply_SetFinished(QPlaceMatchReply* self, bool finished) {
    if (auto* vqplacematchreply = dynamic_cast<VirtualQPlaceMatchReply*>(self)) {
        vqplacematchreply->VirtualQPlaceMatchReply::setFinished(finished);
    } else
        qFatal("Error: Protected method QPlaceMatchReply::setFinished called without a directly constructed type");
}

// Derived class protected handler implementation
void QPlaceMatchReply_SetError(QPlaceMatchReply* self, int errorVal, const libqt_string errorString) {
    if (auto* vqplacematchreply = dynamic_cast<VirtualQPlaceMatchReply*>(self)) {
        QString errorString_QString = QString::fromUtf8(errorString.data, errorString.len);
        vqplacematchreply->VirtualQPlaceMatchReply::setError(static_cast<QPlaceReply::Error>(errorVal), errorString_QString);
    } else
        qFatal("Error: Protected method QPlaceMatchReply::setError called without a directly constructed type");
}

// Derived class protected handler implementation
QObject* QPlaceMatchReply_Sender(const QPlaceMatchReply* self) {
    if (auto* vqplacematchreply = const_cast<VirtualQPlaceMatchReply*>(dynamic_cast<const VirtualQPlaceMatchReply*>(self))) {
        return vqplacematchreply->VirtualQPlaceMatchReply::sender();
    } else
        qFatal("Error: Protected method QPlaceMatchReply::sender called without a directly constructed type");
}

// Derived class protected handler implementation
int QPlaceMatchReply_SenderSignalIndex(const QPlaceMatchReply* self) {
    if (auto* vqplacematchreply = const_cast<VirtualQPlaceMatchReply*>(dynamic_cast<const VirtualQPlaceMatchReply*>(self))) {
        return vqplacematchreply->VirtualQPlaceMatchReply::senderSignalIndex();
    } else
        qFatal("Error: Protected method QPlaceMatchReply::senderSignalIndex called without a directly constructed type");
}

// Derived class protected handler implementation
int QPlaceMatchReply_Receivers(const QPlaceMatchReply* self, const char* signal) {
    if (auto* vqplacematchreply = const_cast<VirtualQPlaceMatchReply*>(dynamic_cast<const VirtualQPlaceMatchReply*>(self))) {
        return vqplacematchreply->VirtualQPlaceMatchReply::receivers(signal);
    } else
        qFatal("Error: Protected method QPlaceMatchReply::receivers called without a directly constructed type");
}

// Derived class protected handler implementation
bool QPlaceMatchReply_IsSignalConnected(const QPlaceMatchReply* self, const QMetaMethod* signal) {
    if (auto* vqplacematchreply = const_cast<VirtualQPlaceMatchReply*>(dynamic_cast<const VirtualQPlaceMatchReply*>(self))) {
        return vqplacematchreply->VirtualQPlaceMatchReply::isSignalConnected(*signal);
    } else
        qFatal("Error: Protected method QPlaceMatchReply::isSignalConnected called without a directly constructed type");
}

void QPlaceMatchReply_Delete(QPlaceMatchReply* self) {
    delete self;
}
