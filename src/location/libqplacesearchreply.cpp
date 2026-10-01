#include <QChildEvent>
#include <QEvent>
#include <QList>
#include <QMetaMethod>
#include <QMetaObject>
#include <QObject>
#include <QPlaceReply>
#include <QPlaceSearchReply>
#include <QPlaceSearchRequest>
#include <QPlaceSearchResult>
#include <QString>
#include <QTimerEvent>
#include <qplacesearchreply.h>
#include "libqplacesearchreply.h"
#include "libqplacesearchreply.hxx"

QPlaceSearchReply* QPlaceSearchReply_new() {
    return new VirtualQPlaceSearchReply();
}

QPlaceSearchReply* QPlaceSearchReply_new2(QObject* parent) {
    return new VirtualQPlaceSearchReply(parent);
}

QMetaObject* QPlaceSearchReply_MetaObject(const QPlaceSearchReply* self) {
    return (QMetaObject*)self->metaObject();
}

void* QPlaceSearchReply_Metacast(QPlaceSearchReply* self, const char* param1) {
    return self->qt_metacast(param1);
}

int QPlaceSearchReply_Metacall(QPlaceSearchReply* self, int param1, int param2, void** param3) {
    return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

libqt_string QPlaceSearchReply_Tr(const char* s) {
    auto _ret = QPlaceSearchReply::tr(s);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

int QPlaceSearchReply_Type(const QPlaceSearchReply* self) {
    return static_cast<int>(self->type());
}

libqt_list /* of QPlaceSearchResult* */ QPlaceSearchReply_Results(const QPlaceSearchReply* self) {
    QList<QPlaceSearchResult> _ret = self->results();
    // Convert QList<> from C++ memory to manually-managed C memory
    QPlaceSearchResult** _arr = static_cast<QPlaceSearchResult**>(malloc(sizeof(QPlaceSearchResult*) * (_ret.size())));
    for (qsizetype i = 0; i < _ret.size(); ++i) {
        _arr[i] = new QPlaceSearchResult(_ret[i]);
    }
    libqt_list _out;
    _out.len = _ret.size();
    _out.data = static_cast<void*>(_arr);
    return _out;
}

QPlaceSearchRequest* QPlaceSearchReply_Request(const QPlaceSearchReply* self) {
    return new QPlaceSearchRequest(self->request());
}

QPlaceSearchRequest* QPlaceSearchReply_PreviousPageRequest(const QPlaceSearchReply* self) {
    return new QPlaceSearchRequest(self->previousPageRequest());
}

QPlaceSearchRequest* QPlaceSearchReply_NextPageRequest(const QPlaceSearchReply* self) {
    return new QPlaceSearchRequest(self->nextPageRequest());
}

libqt_string QPlaceSearchReply_Tr2(const char* s, const char* c) {
    auto _ret = QPlaceSearchReply::tr(s, c);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string QPlaceSearchReply_Tr3(const char* s, const char* c, int n) {
    auto _ret = QPlaceSearchReply::tr(s, c, static_cast<int>(n));
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
QMetaObject* QPlaceSearchReply_SuperMetaObject(const QPlaceSearchReply* self) {
    return (QMetaObject*)self->QPlaceSearchReply::metaObject();
}

// Auxiliary method to allow providing re-implementation
void QPlaceSearchReply_OnMetaObject(QPlaceSearchReply* self, intptr_t slot) {
    if (auto* vqplacesearchreply = const_cast<VirtualQPlaceSearchReply*>(dynamic_cast<const VirtualQPlaceSearchReply*>(self)))
        vqplacesearchreply->qplacesearchreply_metaobject_callback = reinterpret_cast<VirtualQPlaceSearchReply::QPlaceSearchReply_MetaObject_Callback>(slot);
}

// Base class handler implementation
void* QPlaceSearchReply_SuperMetacast(QPlaceSearchReply* self, const char* param1) {
    return self->QPlaceSearchReply::qt_metacast(param1);
}

// Auxiliary method to allow providing re-implementation
void QPlaceSearchReply_OnMetacast(QPlaceSearchReply* self, intptr_t slot) {
    if (auto* vqplacesearchreply = dynamic_cast<VirtualQPlaceSearchReply*>(self))
        vqplacesearchreply->qplacesearchreply_metacast_callback = reinterpret_cast<VirtualQPlaceSearchReply::QPlaceSearchReply_Metacast_Callback>(slot);
}

// Base class handler implementation
int QPlaceSearchReply_SuperMetacall(QPlaceSearchReply* self, int param1, int param2, void** param3) {
    return self->QPlaceSearchReply::qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

// Auxiliary method to allow providing re-implementation
void QPlaceSearchReply_OnMetacall(QPlaceSearchReply* self, intptr_t slot) {
    if (auto* vqplacesearchreply = dynamic_cast<VirtualQPlaceSearchReply*>(self))
        vqplacesearchreply->qplacesearchreply_metacall_callback = reinterpret_cast<VirtualQPlaceSearchReply::QPlaceSearchReply_Metacall_Callback>(slot);
}

// Base class handler implementation
int QPlaceSearchReply_SuperType(const QPlaceSearchReply* self) {
    return static_cast<int>(self->QPlaceSearchReply::type());
}

// Auxiliary method to allow providing re-implementation
void QPlaceSearchReply_OnType(QPlaceSearchReply* self, intptr_t slot) {
    if (auto* vqplacesearchreply = const_cast<VirtualQPlaceSearchReply*>(dynamic_cast<const VirtualQPlaceSearchReply*>(self)))
        vqplacesearchreply->qplacesearchreply_type_callback = reinterpret_cast<VirtualQPlaceSearchReply::QPlaceSearchReply_Type_Callback>(slot);
}

// Derived class handler implementation
void QPlaceSearchReply_Abort(QPlaceSearchReply* self) {
    self->abort();
}

// Base class handler implementation
void QPlaceSearchReply_SuperAbort(QPlaceSearchReply* self) {
    self->QPlaceSearchReply::abort();
}

// Auxiliary method to allow providing re-implementation
void QPlaceSearchReply_OnAbort(QPlaceSearchReply* self, intptr_t slot) {
    if (auto* vqplacesearchreply = dynamic_cast<VirtualQPlaceSearchReply*>(self))
        vqplacesearchreply->qplacesearchreply_abort_callback = reinterpret_cast<VirtualQPlaceSearchReply::QPlaceSearchReply_Abort_Callback>(slot);
}

// Derived class handler implementation
bool QPlaceSearchReply_Event(QPlaceSearchReply* self, QEvent* event) {
    return self->event(event);
}

// Base class handler implementation
bool QPlaceSearchReply_SuperEvent(QPlaceSearchReply* self, QEvent* event) {
    return self->QPlaceSearchReply::event(event);
}

// Auxiliary method to allow providing re-implementation
void QPlaceSearchReply_OnEvent(QPlaceSearchReply* self, intptr_t slot) {
    if (auto* vqplacesearchreply = dynamic_cast<VirtualQPlaceSearchReply*>(self))
        vqplacesearchreply->qplacesearchreply_event_callback = reinterpret_cast<VirtualQPlaceSearchReply::QPlaceSearchReply_Event_Callback>(slot);
}

// Derived class handler implementation
bool QPlaceSearchReply_EventFilter(QPlaceSearchReply* self, QObject* watched, QEvent* event) {
    return self->eventFilter(watched, event);
}

// Base class handler implementation
bool QPlaceSearchReply_SuperEventFilter(QPlaceSearchReply* self, QObject* watched, QEvent* event) {
    return self->QPlaceSearchReply::eventFilter(watched, event);
}

// Auxiliary method to allow providing re-implementation
void QPlaceSearchReply_OnEventFilter(QPlaceSearchReply* self, intptr_t slot) {
    if (auto* vqplacesearchreply = dynamic_cast<VirtualQPlaceSearchReply*>(self))
        vqplacesearchreply->qplacesearchreply_eventfilter_callback = reinterpret_cast<VirtualQPlaceSearchReply::QPlaceSearchReply_EventFilter_Callback>(slot);
}

// Derived class handler implementation
void QPlaceSearchReply_TimerEvent(QPlaceSearchReply* self, QTimerEvent* event) {
    auto* vqplacesearchreply = dynamic_cast<VirtualQPlaceSearchReply*>(self);
    if (vqplacesearchreply) {
        vqplacesearchreply->timerEvent(event);
    } else {
        qFatal("Error: Protected virtual method QPlaceSearchReply::timerEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QPlaceSearchReply_SuperTimerEvent(QPlaceSearchReply* self, QTimerEvent* event) {
    if (auto* vqplacesearchreply = dynamic_cast<VirtualQPlaceSearchReply*>(self)) {
        vqplacesearchreply->QPlaceSearchReply::timerEvent(event);
    } else
        qFatal("Error: Protected virtual method QPlaceSearchReply::timerEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QPlaceSearchReply_OnTimerEvent(QPlaceSearchReply* self, intptr_t slot) {
    if (auto* vqplacesearchreply = dynamic_cast<VirtualQPlaceSearchReply*>(self))
        vqplacesearchreply->qplacesearchreply_timerevent_callback = reinterpret_cast<VirtualQPlaceSearchReply::QPlaceSearchReply_TimerEvent_Callback>(slot);
}

// Derived class handler implementation
void QPlaceSearchReply_ChildEvent(QPlaceSearchReply* self, QChildEvent* event) {
    auto* vqplacesearchreply = dynamic_cast<VirtualQPlaceSearchReply*>(self);
    if (vqplacesearchreply) {
        vqplacesearchreply->childEvent(event);
    } else {
        qFatal("Error: Protected virtual method QPlaceSearchReply::childEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QPlaceSearchReply_SuperChildEvent(QPlaceSearchReply* self, QChildEvent* event) {
    if (auto* vqplacesearchreply = dynamic_cast<VirtualQPlaceSearchReply*>(self)) {
        vqplacesearchreply->QPlaceSearchReply::childEvent(event);
    } else
        qFatal("Error: Protected virtual method QPlaceSearchReply::childEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QPlaceSearchReply_OnChildEvent(QPlaceSearchReply* self, intptr_t slot) {
    if (auto* vqplacesearchreply = dynamic_cast<VirtualQPlaceSearchReply*>(self))
        vqplacesearchreply->qplacesearchreply_childevent_callback = reinterpret_cast<VirtualQPlaceSearchReply::QPlaceSearchReply_ChildEvent_Callback>(slot);
}

// Derived class handler implementation
void QPlaceSearchReply_CustomEvent(QPlaceSearchReply* self, QEvent* event) {
    auto* vqplacesearchreply = dynamic_cast<VirtualQPlaceSearchReply*>(self);
    if (vqplacesearchreply) {
        vqplacesearchreply->customEvent(event);
    } else {
        qFatal("Error: Protected virtual method QPlaceSearchReply::customEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QPlaceSearchReply_SuperCustomEvent(QPlaceSearchReply* self, QEvent* event) {
    if (auto* vqplacesearchreply = dynamic_cast<VirtualQPlaceSearchReply*>(self)) {
        vqplacesearchreply->QPlaceSearchReply::customEvent(event);
    } else
        qFatal("Error: Protected virtual method QPlaceSearchReply::customEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QPlaceSearchReply_OnCustomEvent(QPlaceSearchReply* self, intptr_t slot) {
    if (auto* vqplacesearchreply = dynamic_cast<VirtualQPlaceSearchReply*>(self))
        vqplacesearchreply->qplacesearchreply_customevent_callback = reinterpret_cast<VirtualQPlaceSearchReply::QPlaceSearchReply_CustomEvent_Callback>(slot);
}

// Derived class handler implementation
void QPlaceSearchReply_ConnectNotify(QPlaceSearchReply* self, const QMetaMethod* signal) {
    auto* vqplacesearchreply = dynamic_cast<VirtualQPlaceSearchReply*>(self);
    if (vqplacesearchreply) {
        vqplacesearchreply->connectNotify(*signal);
    } else {
        qFatal("Error: Protected virtual method QPlaceSearchReply::connectNotify called without a directly constructed type");
    }
}

// Base class handler implementation
void QPlaceSearchReply_SuperConnectNotify(QPlaceSearchReply* self, const QMetaMethod* signal) {
    if (auto* vqplacesearchreply = dynamic_cast<VirtualQPlaceSearchReply*>(self)) {
        vqplacesearchreply->QPlaceSearchReply::connectNotify(*signal);
    } else
        qFatal("Error: Protected virtual method QPlaceSearchReply::connectNotify called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QPlaceSearchReply_OnConnectNotify(QPlaceSearchReply* self, intptr_t slot) {
    if (auto* vqplacesearchreply = dynamic_cast<VirtualQPlaceSearchReply*>(self))
        vqplacesearchreply->qplacesearchreply_connectnotify_callback = reinterpret_cast<VirtualQPlaceSearchReply::QPlaceSearchReply_ConnectNotify_Callback>(slot);
}

// Derived class handler implementation
void QPlaceSearchReply_DisconnectNotify(QPlaceSearchReply* self, const QMetaMethod* signal) {
    auto* vqplacesearchreply = dynamic_cast<VirtualQPlaceSearchReply*>(self);
    if (vqplacesearchreply) {
        vqplacesearchreply->disconnectNotify(*signal);
    } else {
        qFatal("Error: Protected virtual method QPlaceSearchReply::disconnectNotify called without a directly constructed type");
    }
}

// Base class handler implementation
void QPlaceSearchReply_SuperDisconnectNotify(QPlaceSearchReply* self, const QMetaMethod* signal) {
    if (auto* vqplacesearchreply = dynamic_cast<VirtualQPlaceSearchReply*>(self)) {
        vqplacesearchreply->QPlaceSearchReply::disconnectNotify(*signal);
    } else
        qFatal("Error: Protected virtual method QPlaceSearchReply::disconnectNotify called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QPlaceSearchReply_OnDisconnectNotify(QPlaceSearchReply* self, intptr_t slot) {
    if (auto* vqplacesearchreply = dynamic_cast<VirtualQPlaceSearchReply*>(self))
        vqplacesearchreply->qplacesearchreply_disconnectnotify_callback = reinterpret_cast<VirtualQPlaceSearchReply::QPlaceSearchReply_DisconnectNotify_Callback>(slot);
}

// Derived class protected handler implementation
void QPlaceSearchReply_SetResults(QPlaceSearchReply* self, const libqt_list /* of QPlaceSearchResult* */ results) {
    if (auto* vqplacesearchreply = dynamic_cast<VirtualQPlaceSearchReply*>(self)) {
        QList<QPlaceSearchResult> results_QList;
        results_QList.reserve(results.len);
        QPlaceSearchResult** results_arr = static_cast<QPlaceSearchResult**>(results.data);
        for (size_t i = 0; i < results.len; ++i) {
            results_QList.push_back(*(results_arr[i]));
        }
        vqplacesearchreply->VirtualQPlaceSearchReply::setResults(results_QList);
    } else
        qFatal("Error: Protected method QPlaceSearchReply::setResults called without a directly constructed type");
}

// Derived class protected handler implementation
void QPlaceSearchReply_SetRequest(QPlaceSearchReply* self, const QPlaceSearchRequest* request) {
    if (auto* vqplacesearchreply = dynamic_cast<VirtualQPlaceSearchReply*>(self)) {
        vqplacesearchreply->VirtualQPlaceSearchReply::setRequest(*request);
    } else
        qFatal("Error: Protected method QPlaceSearchReply::setRequest called without a directly constructed type");
}

// Derived class protected handler implementation
void QPlaceSearchReply_SetPreviousPageRequest(QPlaceSearchReply* self, const QPlaceSearchRequest* previous) {
    if (auto* vqplacesearchreply = dynamic_cast<VirtualQPlaceSearchReply*>(self)) {
        vqplacesearchreply->VirtualQPlaceSearchReply::setPreviousPageRequest(*previous);
    } else
        qFatal("Error: Protected method QPlaceSearchReply::setPreviousPageRequest called without a directly constructed type");
}

// Derived class protected handler implementation
void QPlaceSearchReply_SetNextPageRequest(QPlaceSearchReply* self, const QPlaceSearchRequest* next) {
    if (auto* vqplacesearchreply = dynamic_cast<VirtualQPlaceSearchReply*>(self)) {
        vqplacesearchreply->VirtualQPlaceSearchReply::setNextPageRequest(*next);
    } else
        qFatal("Error: Protected method QPlaceSearchReply::setNextPageRequest called without a directly constructed type");
}

// Derived class protected handler implementation
void QPlaceSearchReply_SetFinished(QPlaceSearchReply* self, bool finished) {
    if (auto* vqplacesearchreply = dynamic_cast<VirtualQPlaceSearchReply*>(self)) {
        vqplacesearchreply->VirtualQPlaceSearchReply::setFinished(finished);
    } else
        qFatal("Error: Protected method QPlaceSearchReply::setFinished called without a directly constructed type");
}

// Derived class protected handler implementation
void QPlaceSearchReply_SetError(QPlaceSearchReply* self, int errorVal, const libqt_string errorString) {
    if (auto* vqplacesearchreply = dynamic_cast<VirtualQPlaceSearchReply*>(self)) {
        QString errorString_QString = QString::fromUtf8(errorString.data, errorString.len);
        vqplacesearchreply->VirtualQPlaceSearchReply::setError(static_cast<QPlaceReply::Error>(errorVal), errorString_QString);
    } else
        qFatal("Error: Protected method QPlaceSearchReply::setError called without a directly constructed type");
}

// Derived class protected handler implementation
QObject* QPlaceSearchReply_Sender(const QPlaceSearchReply* self) {
    if (auto* vqplacesearchreply = const_cast<VirtualQPlaceSearchReply*>(dynamic_cast<const VirtualQPlaceSearchReply*>(self))) {
        return vqplacesearchreply->VirtualQPlaceSearchReply::sender();
    } else
        qFatal("Error: Protected method QPlaceSearchReply::sender called without a directly constructed type");
}

// Derived class protected handler implementation
int QPlaceSearchReply_SenderSignalIndex(const QPlaceSearchReply* self) {
    if (auto* vqplacesearchreply = const_cast<VirtualQPlaceSearchReply*>(dynamic_cast<const VirtualQPlaceSearchReply*>(self))) {
        return vqplacesearchreply->VirtualQPlaceSearchReply::senderSignalIndex();
    } else
        qFatal("Error: Protected method QPlaceSearchReply::senderSignalIndex called without a directly constructed type");
}

// Derived class protected handler implementation
int QPlaceSearchReply_Receivers(const QPlaceSearchReply* self, const char* signal) {
    if (auto* vqplacesearchreply = const_cast<VirtualQPlaceSearchReply*>(dynamic_cast<const VirtualQPlaceSearchReply*>(self))) {
        return vqplacesearchreply->VirtualQPlaceSearchReply::receivers(signal);
    } else
        qFatal("Error: Protected method QPlaceSearchReply::receivers called without a directly constructed type");
}

// Derived class protected handler implementation
bool QPlaceSearchReply_IsSignalConnected(const QPlaceSearchReply* self, const QMetaMethod* signal) {
    if (auto* vqplacesearchreply = const_cast<VirtualQPlaceSearchReply*>(dynamic_cast<const VirtualQPlaceSearchReply*>(self))) {
        return vqplacesearchreply->VirtualQPlaceSearchReply::isSignalConnected(*signal);
    } else
        qFatal("Error: Protected method QPlaceSearchReply::isSignalConnected called without a directly constructed type");
}

void QPlaceSearchReply_Delete(QPlaceSearchReply* self) {
    delete self;
}
