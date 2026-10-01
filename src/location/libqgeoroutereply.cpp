#include <QChildEvent>
#include <QEvent>
#include <QGeoRoute>
#include <QGeoRouteReply>
#include <QGeoRouteRequest>
#include <QList>
#include <QMetaMethod>
#include <QMetaObject>
#include <QObject>
#include <QString>
#include <QTimerEvent>
#include <qgeoroutereply.h>
#include "libqgeoroutereply.h"
#include "libqgeoroutereply.hxx"

QGeoRouteReply* QGeoRouteReply_new(int errorVal, const libqt_string errorString) {
    QString errorString_QString = QString::fromUtf8(errorString.data, errorString.len);
    return new VirtualQGeoRouteReply(static_cast<QGeoRouteReply::Error>(errorVal), errorString_QString);
}

QGeoRouteReply* QGeoRouteReply_new2(int errorVal, const libqt_string errorString, QObject* parent) {
    QString errorString_QString = QString::fromUtf8(errorString.data, errorString.len);
    return new VirtualQGeoRouteReply(static_cast<QGeoRouteReply::Error>(errorVal), errorString_QString, parent);
}

QMetaObject* QGeoRouteReply_MetaObject(const QGeoRouteReply* self) {
    return (QMetaObject*)self->metaObject();
}

void* QGeoRouteReply_Metacast(QGeoRouteReply* self, const char* param1) {
    return self->qt_metacast(param1);
}

int QGeoRouteReply_Metacall(QGeoRouteReply* self, int param1, int param2, void** param3) {
    return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

libqt_string QGeoRouteReply_Tr(const char* s) {
    auto _ret = QGeoRouteReply::tr(s);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

bool QGeoRouteReply_IsFinished(const QGeoRouteReply* self) {
    return self->isFinished();
}

int QGeoRouteReply_Error(const QGeoRouteReply* self) {
    return static_cast<int>(self->error());
}

libqt_string QGeoRouteReply_ErrorString(const QGeoRouteReply* self) {
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

QGeoRouteRequest* QGeoRouteReply_Request(const QGeoRouteReply* self) {
    return new QGeoRouteRequest(self->request());
}

libqt_list /* of QGeoRoute* */ QGeoRouteReply_Routes(const QGeoRouteReply* self) {
    QList<QGeoRoute> _ret = self->routes();
    // Convert QList<> from C++ memory to manually-managed C memory
    QGeoRoute** _arr = static_cast<QGeoRoute**>(malloc(sizeof(QGeoRoute*) * (_ret.size())));
    for (qsizetype i = 0; i < _ret.size(); ++i) {
        _arr[i] = new QGeoRoute(_ret[i]);
    }
    libqt_list _out;
    _out.len = _ret.size();
    _out.data = static_cast<void*>(_arr);
    return _out;
}

void QGeoRouteReply_Abort(QGeoRouteReply* self) {
    self->abort();
}

void QGeoRouteReply_Finished(QGeoRouteReply* self) {
    self->finished();
}

void QGeoRouteReply_Connect_Finished(QGeoRouteReply* self, intptr_t slot) {
    void (*slotFunc)(QGeoRouteReply*) = reinterpret_cast<void (*)(QGeoRouteReply*)>(slot);
    QGeoRouteReply::connect(self,
                            static_cast<void (QGeoRouteReply::*)()>(&QGeoRouteReply::finished),
                            [self, slotFunc]() {
                                slotFunc(self);
                            });
}

void QGeoRouteReply_Aborted(QGeoRouteReply* self) {
    self->aborted();
}

void QGeoRouteReply_Connect_Aborted(QGeoRouteReply* self, intptr_t slot) {
    void (*slotFunc)(QGeoRouteReply*) = reinterpret_cast<void (*)(QGeoRouteReply*)>(slot);
    QGeoRouteReply::connect(self,
                            static_cast<void (QGeoRouteReply::*)()>(&QGeoRouteReply::aborted),
                            [self, slotFunc]() {
                                slotFunc(self);
                            });
}

void QGeoRouteReply_ErrorOccurred(QGeoRouteReply* self, int errorVal) {
    self->errorOccurred(static_cast<QGeoRouteReply::Error>(errorVal));
}

void QGeoRouteReply_Connect_ErrorOccurred(QGeoRouteReply* self, intptr_t slot) {
    void (*slotFunc)(QGeoRouteReply*, int) = reinterpret_cast<void (*)(QGeoRouteReply*, int)>(slot);
    QGeoRouteReply::connect(self,
                            static_cast<void (QGeoRouteReply::*)(QGeoRouteReply::Error, const QString&)>(&QGeoRouteReply::errorOccurred),
                            [self, slotFunc](QGeoRouteReply::Error errorVal) {
                                int sigval1 = static_cast<int>(errorVal);
                                slotFunc(self, sigval1);
                            });
}

libqt_string QGeoRouteReply_Tr2(const char* s, const char* c) {
    auto _ret = QGeoRouteReply::tr(s, c);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string QGeoRouteReply_Tr3(const char* s, const char* c, int n) {
    auto _ret = QGeoRouteReply::tr(s, c, static_cast<int>(n));
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

void QGeoRouteReply_ErrorOccurred2(QGeoRouteReply* self, int errorVal, const libqt_string errorString) {
    QString errorString_QString = QString::fromUtf8(errorString.data, errorString.len);
    self->errorOccurred(static_cast<QGeoRouteReply::Error>(errorVal), errorString_QString);
}

void QGeoRouteReply_Connect_ErrorOccurred2(QGeoRouteReply* self, intptr_t slot) {
    void (*slotFunc)(QGeoRouteReply*, int, const char*) = reinterpret_cast<void (*)(QGeoRouteReply*, int, const char*)>(slot);
    QGeoRouteReply::connect(self,
                            static_cast<void (QGeoRouteReply::*)(QGeoRouteReply::Error, const QString&)>(&QGeoRouteReply::errorOccurred),
                            [self, slotFunc](QGeoRouteReply::Error errorVal, const QString& errorString) {
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

// Base class handler implementation
QMetaObject* QGeoRouteReply_SuperMetaObject(const QGeoRouteReply* self) {
    return (QMetaObject*)self->QGeoRouteReply::metaObject();
}

// Auxiliary method to allow providing re-implementation
void QGeoRouteReply_OnMetaObject(QGeoRouteReply* self, intptr_t slot) {
    if (auto* vqgeoroutereply = const_cast<VirtualQGeoRouteReply*>(dynamic_cast<const VirtualQGeoRouteReply*>(self)))
        vqgeoroutereply->qgeoroutereply_metaobject_callback = reinterpret_cast<VirtualQGeoRouteReply::QGeoRouteReply_MetaObject_Callback>(slot);
}

// Base class handler implementation
void* QGeoRouteReply_SuperMetacast(QGeoRouteReply* self, const char* param1) {
    return self->QGeoRouteReply::qt_metacast(param1);
}

// Auxiliary method to allow providing re-implementation
void QGeoRouteReply_OnMetacast(QGeoRouteReply* self, intptr_t slot) {
    if (auto* vqgeoroutereply = dynamic_cast<VirtualQGeoRouteReply*>(self))
        vqgeoroutereply->qgeoroutereply_metacast_callback = reinterpret_cast<VirtualQGeoRouteReply::QGeoRouteReply_Metacast_Callback>(slot);
}

// Base class handler implementation
int QGeoRouteReply_SuperMetacall(QGeoRouteReply* self, int param1, int param2, void** param3) {
    return self->QGeoRouteReply::qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

// Auxiliary method to allow providing re-implementation
void QGeoRouteReply_OnMetacall(QGeoRouteReply* self, intptr_t slot) {
    if (auto* vqgeoroutereply = dynamic_cast<VirtualQGeoRouteReply*>(self))
        vqgeoroutereply->qgeoroutereply_metacall_callback = reinterpret_cast<VirtualQGeoRouteReply::QGeoRouteReply_Metacall_Callback>(slot);
}

// Base class handler implementation
void QGeoRouteReply_SuperAbort(QGeoRouteReply* self) {
    self->QGeoRouteReply::abort();
}

// Auxiliary method to allow providing re-implementation
void QGeoRouteReply_OnAbort(QGeoRouteReply* self, intptr_t slot) {
    if (auto* vqgeoroutereply = dynamic_cast<VirtualQGeoRouteReply*>(self))
        vqgeoroutereply->qgeoroutereply_abort_callback = reinterpret_cast<VirtualQGeoRouteReply::QGeoRouteReply_Abort_Callback>(slot);
}

// Derived class handler implementation
bool QGeoRouteReply_Event(QGeoRouteReply* self, QEvent* event) {
    return self->event(event);
}

// Base class handler implementation
bool QGeoRouteReply_SuperEvent(QGeoRouteReply* self, QEvent* event) {
    return self->QGeoRouteReply::event(event);
}

// Auxiliary method to allow providing re-implementation
void QGeoRouteReply_OnEvent(QGeoRouteReply* self, intptr_t slot) {
    if (auto* vqgeoroutereply = dynamic_cast<VirtualQGeoRouteReply*>(self))
        vqgeoroutereply->qgeoroutereply_event_callback = reinterpret_cast<VirtualQGeoRouteReply::QGeoRouteReply_Event_Callback>(slot);
}

// Derived class handler implementation
bool QGeoRouteReply_EventFilter(QGeoRouteReply* self, QObject* watched, QEvent* event) {
    return self->eventFilter(watched, event);
}

// Base class handler implementation
bool QGeoRouteReply_SuperEventFilter(QGeoRouteReply* self, QObject* watched, QEvent* event) {
    return self->QGeoRouteReply::eventFilter(watched, event);
}

// Auxiliary method to allow providing re-implementation
void QGeoRouteReply_OnEventFilter(QGeoRouteReply* self, intptr_t slot) {
    if (auto* vqgeoroutereply = dynamic_cast<VirtualQGeoRouteReply*>(self))
        vqgeoroutereply->qgeoroutereply_eventfilter_callback = reinterpret_cast<VirtualQGeoRouteReply::QGeoRouteReply_EventFilter_Callback>(slot);
}

// Derived class handler implementation
void QGeoRouteReply_TimerEvent(QGeoRouteReply* self, QTimerEvent* event) {
    auto* vqgeoroutereply = dynamic_cast<VirtualQGeoRouteReply*>(self);
    if (vqgeoroutereply) {
        vqgeoroutereply->timerEvent(event);
    } else {
        qFatal("Error: Protected virtual method QGeoRouteReply::timerEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QGeoRouteReply_SuperTimerEvent(QGeoRouteReply* self, QTimerEvent* event) {
    if (auto* vqgeoroutereply = dynamic_cast<VirtualQGeoRouteReply*>(self)) {
        vqgeoroutereply->QGeoRouteReply::timerEvent(event);
    } else
        qFatal("Error: Protected virtual method QGeoRouteReply::timerEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QGeoRouteReply_OnTimerEvent(QGeoRouteReply* self, intptr_t slot) {
    if (auto* vqgeoroutereply = dynamic_cast<VirtualQGeoRouteReply*>(self))
        vqgeoroutereply->qgeoroutereply_timerevent_callback = reinterpret_cast<VirtualQGeoRouteReply::QGeoRouteReply_TimerEvent_Callback>(slot);
}

// Derived class handler implementation
void QGeoRouteReply_ChildEvent(QGeoRouteReply* self, QChildEvent* event) {
    auto* vqgeoroutereply = dynamic_cast<VirtualQGeoRouteReply*>(self);
    if (vqgeoroutereply) {
        vqgeoroutereply->childEvent(event);
    } else {
        qFatal("Error: Protected virtual method QGeoRouteReply::childEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QGeoRouteReply_SuperChildEvent(QGeoRouteReply* self, QChildEvent* event) {
    if (auto* vqgeoroutereply = dynamic_cast<VirtualQGeoRouteReply*>(self)) {
        vqgeoroutereply->QGeoRouteReply::childEvent(event);
    } else
        qFatal("Error: Protected virtual method QGeoRouteReply::childEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QGeoRouteReply_OnChildEvent(QGeoRouteReply* self, intptr_t slot) {
    if (auto* vqgeoroutereply = dynamic_cast<VirtualQGeoRouteReply*>(self))
        vqgeoroutereply->qgeoroutereply_childevent_callback = reinterpret_cast<VirtualQGeoRouteReply::QGeoRouteReply_ChildEvent_Callback>(slot);
}

// Derived class handler implementation
void QGeoRouteReply_CustomEvent(QGeoRouteReply* self, QEvent* event) {
    auto* vqgeoroutereply = dynamic_cast<VirtualQGeoRouteReply*>(self);
    if (vqgeoroutereply) {
        vqgeoroutereply->customEvent(event);
    } else {
        qFatal("Error: Protected virtual method QGeoRouteReply::customEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QGeoRouteReply_SuperCustomEvent(QGeoRouteReply* self, QEvent* event) {
    if (auto* vqgeoroutereply = dynamic_cast<VirtualQGeoRouteReply*>(self)) {
        vqgeoroutereply->QGeoRouteReply::customEvent(event);
    } else
        qFatal("Error: Protected virtual method QGeoRouteReply::customEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QGeoRouteReply_OnCustomEvent(QGeoRouteReply* self, intptr_t slot) {
    if (auto* vqgeoroutereply = dynamic_cast<VirtualQGeoRouteReply*>(self))
        vqgeoroutereply->qgeoroutereply_customevent_callback = reinterpret_cast<VirtualQGeoRouteReply::QGeoRouteReply_CustomEvent_Callback>(slot);
}

// Derived class handler implementation
void QGeoRouteReply_ConnectNotify(QGeoRouteReply* self, const QMetaMethod* signal) {
    auto* vqgeoroutereply = dynamic_cast<VirtualQGeoRouteReply*>(self);
    if (vqgeoroutereply) {
        vqgeoroutereply->connectNotify(*signal);
    } else {
        qFatal("Error: Protected virtual method QGeoRouteReply::connectNotify called without a directly constructed type");
    }
}

// Base class handler implementation
void QGeoRouteReply_SuperConnectNotify(QGeoRouteReply* self, const QMetaMethod* signal) {
    if (auto* vqgeoroutereply = dynamic_cast<VirtualQGeoRouteReply*>(self)) {
        vqgeoroutereply->QGeoRouteReply::connectNotify(*signal);
    } else
        qFatal("Error: Protected virtual method QGeoRouteReply::connectNotify called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QGeoRouteReply_OnConnectNotify(QGeoRouteReply* self, intptr_t slot) {
    if (auto* vqgeoroutereply = dynamic_cast<VirtualQGeoRouteReply*>(self))
        vqgeoroutereply->qgeoroutereply_connectnotify_callback = reinterpret_cast<VirtualQGeoRouteReply::QGeoRouteReply_ConnectNotify_Callback>(slot);
}

// Derived class handler implementation
void QGeoRouteReply_DisconnectNotify(QGeoRouteReply* self, const QMetaMethod* signal) {
    auto* vqgeoroutereply = dynamic_cast<VirtualQGeoRouteReply*>(self);
    if (vqgeoroutereply) {
        vqgeoroutereply->disconnectNotify(*signal);
    } else {
        qFatal("Error: Protected virtual method QGeoRouteReply::disconnectNotify called without a directly constructed type");
    }
}

// Base class handler implementation
void QGeoRouteReply_SuperDisconnectNotify(QGeoRouteReply* self, const QMetaMethod* signal) {
    if (auto* vqgeoroutereply = dynamic_cast<VirtualQGeoRouteReply*>(self)) {
        vqgeoroutereply->QGeoRouteReply::disconnectNotify(*signal);
    } else
        qFatal("Error: Protected virtual method QGeoRouteReply::disconnectNotify called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QGeoRouteReply_OnDisconnectNotify(QGeoRouteReply* self, intptr_t slot) {
    if (auto* vqgeoroutereply = dynamic_cast<VirtualQGeoRouteReply*>(self))
        vqgeoroutereply->qgeoroutereply_disconnectnotify_callback = reinterpret_cast<VirtualQGeoRouteReply::QGeoRouteReply_DisconnectNotify_Callback>(slot);
}

// Derived class protected handler implementation
void QGeoRouteReply_SetError(QGeoRouteReply* self, int errorVal, const libqt_string errorString) {
    if (auto* vqgeoroutereply = dynamic_cast<VirtualQGeoRouteReply*>(self)) {
        QString errorString_QString = QString::fromUtf8(errorString.data, errorString.len);
        vqgeoroutereply->VirtualQGeoRouteReply::setError(static_cast<QGeoRouteReply::Error>(errorVal), errorString_QString);
    } else
        qFatal("Error: Protected method QGeoRouteReply::setError called without a directly constructed type");
}

// Derived class protected handler implementation
void QGeoRouteReply_SetFinished(QGeoRouteReply* self, bool finished) {
    if (auto* vqgeoroutereply = dynamic_cast<VirtualQGeoRouteReply*>(self)) {
        vqgeoroutereply->VirtualQGeoRouteReply::setFinished(finished);
    } else
        qFatal("Error: Protected method QGeoRouteReply::setFinished called without a directly constructed type");
}

// Derived class protected handler implementation
void QGeoRouteReply_SetRoutes(QGeoRouteReply* self, const libqt_list /* of QGeoRoute* */ routes) {
    if (auto* vqgeoroutereply = dynamic_cast<VirtualQGeoRouteReply*>(self)) {
        QList<QGeoRoute> routes_QList;
        routes_QList.reserve(routes.len);
        QGeoRoute** routes_arr = static_cast<QGeoRoute**>(routes.data);
        for (size_t i = 0; i < routes.len; ++i) {
            routes_QList.push_back(*(routes_arr[i]));
        }
        vqgeoroutereply->VirtualQGeoRouteReply::setRoutes(routes_QList);
    } else
        qFatal("Error: Protected method QGeoRouteReply::setRoutes called without a directly constructed type");
}

// Derived class protected handler implementation
void QGeoRouteReply_AddRoutes(QGeoRouteReply* self, const libqt_list /* of QGeoRoute* */ routes) {
    if (auto* vqgeoroutereply = dynamic_cast<VirtualQGeoRouteReply*>(self)) {
        QList<QGeoRoute> routes_QList;
        routes_QList.reserve(routes.len);
        QGeoRoute** routes_arr = static_cast<QGeoRoute**>(routes.data);
        for (size_t i = 0; i < routes.len; ++i) {
            routes_QList.push_back(*(routes_arr[i]));
        }
        vqgeoroutereply->VirtualQGeoRouteReply::addRoutes(routes_QList);
    } else
        qFatal("Error: Protected method QGeoRouteReply::addRoutes called without a directly constructed type");
}

// Derived class protected handler implementation
QObject* QGeoRouteReply_Sender(const QGeoRouteReply* self) {
    if (auto* vqgeoroutereply = const_cast<VirtualQGeoRouteReply*>(dynamic_cast<const VirtualQGeoRouteReply*>(self))) {
        return vqgeoroutereply->VirtualQGeoRouteReply::sender();
    } else
        qFatal("Error: Protected method QGeoRouteReply::sender called without a directly constructed type");
}

// Derived class protected handler implementation
int QGeoRouteReply_SenderSignalIndex(const QGeoRouteReply* self) {
    if (auto* vqgeoroutereply = const_cast<VirtualQGeoRouteReply*>(dynamic_cast<const VirtualQGeoRouteReply*>(self))) {
        return vqgeoroutereply->VirtualQGeoRouteReply::senderSignalIndex();
    } else
        qFatal("Error: Protected method QGeoRouteReply::senderSignalIndex called without a directly constructed type");
}

// Derived class protected handler implementation
int QGeoRouteReply_Receivers(const QGeoRouteReply* self, const char* signal) {
    if (auto* vqgeoroutereply = const_cast<VirtualQGeoRouteReply*>(dynamic_cast<const VirtualQGeoRouteReply*>(self))) {
        return vqgeoroutereply->VirtualQGeoRouteReply::receivers(signal);
    } else
        qFatal("Error: Protected method QGeoRouteReply::receivers called without a directly constructed type");
}

// Derived class protected handler implementation
bool QGeoRouteReply_IsSignalConnected(const QGeoRouteReply* self, const QMetaMethod* signal) {
    if (auto* vqgeoroutereply = const_cast<VirtualQGeoRouteReply*>(dynamic_cast<const VirtualQGeoRouteReply*>(self))) {
        return vqgeoroutereply->VirtualQGeoRouteReply::isSignalConnected(*signal);
    } else
        qFatal("Error: Protected method QGeoRouteReply::isSignalConnected called without a directly constructed type");
}

void QGeoRouteReply_Delete(QGeoRouteReply* self) {
    delete self;
}
