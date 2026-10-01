#include <QChildEvent>
#include <QEvent>
#include <QGeoCodeReply>
#include <QGeoLocation>
#include <QGeoShape>
#include <QList>
#include <QMetaMethod>
#include <QMetaObject>
#include <QObject>
#include <QString>
#include <QTimerEvent>
#include <qgeocodereply.h>
#include "libqgeocodereply.h"
#include "libqgeocodereply.hxx"

QGeoCodeReply* QGeoCodeReply_new(int errorVal, const libqt_string errorString) {
    QString errorString_QString = QString::fromUtf8(errorString.data, errorString.len);
    return new VirtualQGeoCodeReply(static_cast<QGeoCodeReply::Error>(errorVal), errorString_QString);
}

QGeoCodeReply* QGeoCodeReply_new2(int errorVal, const libqt_string errorString, QObject* parent) {
    QString errorString_QString = QString::fromUtf8(errorString.data, errorString.len);
    return new VirtualQGeoCodeReply(static_cast<QGeoCodeReply::Error>(errorVal), errorString_QString, parent);
}

QMetaObject* QGeoCodeReply_MetaObject(const QGeoCodeReply* self) {
    return (QMetaObject*)self->metaObject();
}

void* QGeoCodeReply_Metacast(QGeoCodeReply* self, const char* param1) {
    return self->qt_metacast(param1);
}

int QGeoCodeReply_Metacall(QGeoCodeReply* self, int param1, int param2, void** param3) {
    return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

libqt_string QGeoCodeReply_Tr(const char* s) {
    auto _ret = QGeoCodeReply::tr(s);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

bool QGeoCodeReply_IsFinished(const QGeoCodeReply* self) {
    return self->isFinished();
}

int QGeoCodeReply_Error(const QGeoCodeReply* self) {
    return static_cast<int>(self->error());
}

libqt_string QGeoCodeReply_ErrorString(const QGeoCodeReply* self) {
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

QGeoShape* QGeoCodeReply_Viewport(const QGeoCodeReply* self) {
    return new QGeoShape(self->viewport());
}

libqt_list /* of QGeoLocation* */ QGeoCodeReply_Locations(const QGeoCodeReply* self) {
    QList<QGeoLocation> _ret = self->locations();
    // Convert QList<> from C++ memory to manually-managed C memory
    QGeoLocation** _arr = static_cast<QGeoLocation**>(malloc(sizeof(QGeoLocation*) * (_ret.size())));
    for (qsizetype i = 0; i < _ret.size(); ++i) {
        _arr[i] = new QGeoLocation(_ret[i]);
    }
    libqt_list _out;
    _out.len = _ret.size();
    _out.data = static_cast<void*>(_arr);
    return _out;
}

ptrdiff_t QGeoCodeReply_Limit(const QGeoCodeReply* self) {
    return static_cast<ptrdiff_t>(self->limit());
}

ptrdiff_t QGeoCodeReply_Offset(const QGeoCodeReply* self) {
    return static_cast<ptrdiff_t>(self->offset());
}

void QGeoCodeReply_Abort(QGeoCodeReply* self) {
    self->abort();
}

void QGeoCodeReply_Finished(QGeoCodeReply* self) {
    self->finished();
}

void QGeoCodeReply_Connect_Finished(QGeoCodeReply* self, intptr_t slot) {
    void (*slotFunc)(QGeoCodeReply*) = reinterpret_cast<void (*)(QGeoCodeReply*)>(slot);
    QGeoCodeReply::connect(self,
                           static_cast<void (QGeoCodeReply::*)()>(&QGeoCodeReply::finished),
                           [self, slotFunc]() {
                               slotFunc(self);
                           });
}

void QGeoCodeReply_Aborted(QGeoCodeReply* self) {
    self->aborted();
}

void QGeoCodeReply_Connect_Aborted(QGeoCodeReply* self, intptr_t slot) {
    void (*slotFunc)(QGeoCodeReply*) = reinterpret_cast<void (*)(QGeoCodeReply*)>(slot);
    QGeoCodeReply::connect(self,
                           static_cast<void (QGeoCodeReply::*)()>(&QGeoCodeReply::aborted),
                           [self, slotFunc]() {
                               slotFunc(self);
                           });
}

void QGeoCodeReply_ErrorOccurred(QGeoCodeReply* self, int errorVal) {
    self->errorOccurred(static_cast<QGeoCodeReply::Error>(errorVal));
}

void QGeoCodeReply_Connect_ErrorOccurred(QGeoCodeReply* self, intptr_t slot) {
    void (*slotFunc)(QGeoCodeReply*, int) = reinterpret_cast<void (*)(QGeoCodeReply*, int)>(slot);
    QGeoCodeReply::connect(self,
                           static_cast<void (QGeoCodeReply::*)(QGeoCodeReply::Error, const QString&)>(&QGeoCodeReply::errorOccurred),
                           [self, slotFunc](QGeoCodeReply::Error errorVal) {
                               int sigval1 = static_cast<int>(errorVal);
                               slotFunc(self, sigval1);
                           });
}

libqt_string QGeoCodeReply_Tr2(const char* s, const char* c) {
    auto _ret = QGeoCodeReply::tr(s, c);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string QGeoCodeReply_Tr3(const char* s, const char* c, int n) {
    auto _ret = QGeoCodeReply::tr(s, c, static_cast<int>(n));
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

void QGeoCodeReply_ErrorOccurred2(QGeoCodeReply* self, int errorVal, const libqt_string errorString) {
    QString errorString_QString = QString::fromUtf8(errorString.data, errorString.len);
    self->errorOccurred(static_cast<QGeoCodeReply::Error>(errorVal), errorString_QString);
}

void QGeoCodeReply_Connect_ErrorOccurred2(QGeoCodeReply* self, intptr_t slot) {
    void (*slotFunc)(QGeoCodeReply*, int, const char*) = reinterpret_cast<void (*)(QGeoCodeReply*, int, const char*)>(slot);
    QGeoCodeReply::connect(self,
                           static_cast<void (QGeoCodeReply::*)(QGeoCodeReply::Error, const QString&)>(&QGeoCodeReply::errorOccurred),
                           [self, slotFunc](QGeoCodeReply::Error errorVal, const QString& errorString) {
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
QMetaObject* QGeoCodeReply_SuperMetaObject(const QGeoCodeReply* self) {
    return (QMetaObject*)self->QGeoCodeReply::metaObject();
}

// Auxiliary method to allow providing re-implementation
void QGeoCodeReply_OnMetaObject(QGeoCodeReply* self, intptr_t slot) {
    if (auto* vqgeocodereply = const_cast<VirtualQGeoCodeReply*>(dynamic_cast<const VirtualQGeoCodeReply*>(self)))
        vqgeocodereply->qgeocodereply_metaobject_callback = reinterpret_cast<VirtualQGeoCodeReply::QGeoCodeReply_MetaObject_Callback>(slot);
}

// Base class handler implementation
void* QGeoCodeReply_SuperMetacast(QGeoCodeReply* self, const char* param1) {
    return self->QGeoCodeReply::qt_metacast(param1);
}

// Auxiliary method to allow providing re-implementation
void QGeoCodeReply_OnMetacast(QGeoCodeReply* self, intptr_t slot) {
    if (auto* vqgeocodereply = dynamic_cast<VirtualQGeoCodeReply*>(self))
        vqgeocodereply->qgeocodereply_metacast_callback = reinterpret_cast<VirtualQGeoCodeReply::QGeoCodeReply_Metacast_Callback>(slot);
}

// Base class handler implementation
int QGeoCodeReply_SuperMetacall(QGeoCodeReply* self, int param1, int param2, void** param3) {
    return self->QGeoCodeReply::qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

// Auxiliary method to allow providing re-implementation
void QGeoCodeReply_OnMetacall(QGeoCodeReply* self, intptr_t slot) {
    if (auto* vqgeocodereply = dynamic_cast<VirtualQGeoCodeReply*>(self))
        vqgeocodereply->qgeocodereply_metacall_callback = reinterpret_cast<VirtualQGeoCodeReply::QGeoCodeReply_Metacall_Callback>(slot);
}

// Base class handler implementation
void QGeoCodeReply_SuperAbort(QGeoCodeReply* self) {
    self->QGeoCodeReply::abort();
}

// Auxiliary method to allow providing re-implementation
void QGeoCodeReply_OnAbort(QGeoCodeReply* self, intptr_t slot) {
    if (auto* vqgeocodereply = dynamic_cast<VirtualQGeoCodeReply*>(self))
        vqgeocodereply->qgeocodereply_abort_callback = reinterpret_cast<VirtualQGeoCodeReply::QGeoCodeReply_Abort_Callback>(slot);
}

// Derived class handler implementation
bool QGeoCodeReply_Event(QGeoCodeReply* self, QEvent* event) {
    return self->event(event);
}

// Base class handler implementation
bool QGeoCodeReply_SuperEvent(QGeoCodeReply* self, QEvent* event) {
    return self->QGeoCodeReply::event(event);
}

// Auxiliary method to allow providing re-implementation
void QGeoCodeReply_OnEvent(QGeoCodeReply* self, intptr_t slot) {
    if (auto* vqgeocodereply = dynamic_cast<VirtualQGeoCodeReply*>(self))
        vqgeocodereply->qgeocodereply_event_callback = reinterpret_cast<VirtualQGeoCodeReply::QGeoCodeReply_Event_Callback>(slot);
}

// Derived class handler implementation
bool QGeoCodeReply_EventFilter(QGeoCodeReply* self, QObject* watched, QEvent* event) {
    return self->eventFilter(watched, event);
}

// Base class handler implementation
bool QGeoCodeReply_SuperEventFilter(QGeoCodeReply* self, QObject* watched, QEvent* event) {
    return self->QGeoCodeReply::eventFilter(watched, event);
}

// Auxiliary method to allow providing re-implementation
void QGeoCodeReply_OnEventFilter(QGeoCodeReply* self, intptr_t slot) {
    if (auto* vqgeocodereply = dynamic_cast<VirtualQGeoCodeReply*>(self))
        vqgeocodereply->qgeocodereply_eventfilter_callback = reinterpret_cast<VirtualQGeoCodeReply::QGeoCodeReply_EventFilter_Callback>(slot);
}

// Derived class handler implementation
void QGeoCodeReply_TimerEvent(QGeoCodeReply* self, QTimerEvent* event) {
    auto* vqgeocodereply = dynamic_cast<VirtualQGeoCodeReply*>(self);
    if (vqgeocodereply) {
        vqgeocodereply->timerEvent(event);
    } else {
        qFatal("Error: Protected virtual method QGeoCodeReply::timerEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QGeoCodeReply_SuperTimerEvent(QGeoCodeReply* self, QTimerEvent* event) {
    if (auto* vqgeocodereply = dynamic_cast<VirtualQGeoCodeReply*>(self)) {
        vqgeocodereply->QGeoCodeReply::timerEvent(event);
    } else
        qFatal("Error: Protected virtual method QGeoCodeReply::timerEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QGeoCodeReply_OnTimerEvent(QGeoCodeReply* self, intptr_t slot) {
    if (auto* vqgeocodereply = dynamic_cast<VirtualQGeoCodeReply*>(self))
        vqgeocodereply->qgeocodereply_timerevent_callback = reinterpret_cast<VirtualQGeoCodeReply::QGeoCodeReply_TimerEvent_Callback>(slot);
}

// Derived class handler implementation
void QGeoCodeReply_ChildEvent(QGeoCodeReply* self, QChildEvent* event) {
    auto* vqgeocodereply = dynamic_cast<VirtualQGeoCodeReply*>(self);
    if (vqgeocodereply) {
        vqgeocodereply->childEvent(event);
    } else {
        qFatal("Error: Protected virtual method QGeoCodeReply::childEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QGeoCodeReply_SuperChildEvent(QGeoCodeReply* self, QChildEvent* event) {
    if (auto* vqgeocodereply = dynamic_cast<VirtualQGeoCodeReply*>(self)) {
        vqgeocodereply->QGeoCodeReply::childEvent(event);
    } else
        qFatal("Error: Protected virtual method QGeoCodeReply::childEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QGeoCodeReply_OnChildEvent(QGeoCodeReply* self, intptr_t slot) {
    if (auto* vqgeocodereply = dynamic_cast<VirtualQGeoCodeReply*>(self))
        vqgeocodereply->qgeocodereply_childevent_callback = reinterpret_cast<VirtualQGeoCodeReply::QGeoCodeReply_ChildEvent_Callback>(slot);
}

// Derived class handler implementation
void QGeoCodeReply_CustomEvent(QGeoCodeReply* self, QEvent* event) {
    auto* vqgeocodereply = dynamic_cast<VirtualQGeoCodeReply*>(self);
    if (vqgeocodereply) {
        vqgeocodereply->customEvent(event);
    } else {
        qFatal("Error: Protected virtual method QGeoCodeReply::customEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QGeoCodeReply_SuperCustomEvent(QGeoCodeReply* self, QEvent* event) {
    if (auto* vqgeocodereply = dynamic_cast<VirtualQGeoCodeReply*>(self)) {
        vqgeocodereply->QGeoCodeReply::customEvent(event);
    } else
        qFatal("Error: Protected virtual method QGeoCodeReply::customEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QGeoCodeReply_OnCustomEvent(QGeoCodeReply* self, intptr_t slot) {
    if (auto* vqgeocodereply = dynamic_cast<VirtualQGeoCodeReply*>(self))
        vqgeocodereply->qgeocodereply_customevent_callback = reinterpret_cast<VirtualQGeoCodeReply::QGeoCodeReply_CustomEvent_Callback>(slot);
}

// Derived class handler implementation
void QGeoCodeReply_ConnectNotify(QGeoCodeReply* self, const QMetaMethod* signal) {
    auto* vqgeocodereply = dynamic_cast<VirtualQGeoCodeReply*>(self);
    if (vqgeocodereply) {
        vqgeocodereply->connectNotify(*signal);
    } else {
        qFatal("Error: Protected virtual method QGeoCodeReply::connectNotify called without a directly constructed type");
    }
}

// Base class handler implementation
void QGeoCodeReply_SuperConnectNotify(QGeoCodeReply* self, const QMetaMethod* signal) {
    if (auto* vqgeocodereply = dynamic_cast<VirtualQGeoCodeReply*>(self)) {
        vqgeocodereply->QGeoCodeReply::connectNotify(*signal);
    } else
        qFatal("Error: Protected virtual method QGeoCodeReply::connectNotify called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QGeoCodeReply_OnConnectNotify(QGeoCodeReply* self, intptr_t slot) {
    if (auto* vqgeocodereply = dynamic_cast<VirtualQGeoCodeReply*>(self))
        vqgeocodereply->qgeocodereply_connectnotify_callback = reinterpret_cast<VirtualQGeoCodeReply::QGeoCodeReply_ConnectNotify_Callback>(slot);
}

// Derived class handler implementation
void QGeoCodeReply_DisconnectNotify(QGeoCodeReply* self, const QMetaMethod* signal) {
    auto* vqgeocodereply = dynamic_cast<VirtualQGeoCodeReply*>(self);
    if (vqgeocodereply) {
        vqgeocodereply->disconnectNotify(*signal);
    } else {
        qFatal("Error: Protected virtual method QGeoCodeReply::disconnectNotify called without a directly constructed type");
    }
}

// Base class handler implementation
void QGeoCodeReply_SuperDisconnectNotify(QGeoCodeReply* self, const QMetaMethod* signal) {
    if (auto* vqgeocodereply = dynamic_cast<VirtualQGeoCodeReply*>(self)) {
        vqgeocodereply->QGeoCodeReply::disconnectNotify(*signal);
    } else
        qFatal("Error: Protected virtual method QGeoCodeReply::disconnectNotify called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QGeoCodeReply_OnDisconnectNotify(QGeoCodeReply* self, intptr_t slot) {
    if (auto* vqgeocodereply = dynamic_cast<VirtualQGeoCodeReply*>(self))
        vqgeocodereply->qgeocodereply_disconnectnotify_callback = reinterpret_cast<VirtualQGeoCodeReply::QGeoCodeReply_DisconnectNotify_Callback>(slot);
}

// Derived class protected handler implementation
void QGeoCodeReply_SetError(QGeoCodeReply* self, int errorVal, const libqt_string errorString) {
    if (auto* vqgeocodereply = dynamic_cast<VirtualQGeoCodeReply*>(self)) {
        QString errorString_QString = QString::fromUtf8(errorString.data, errorString.len);
        vqgeocodereply->VirtualQGeoCodeReply::setError(static_cast<QGeoCodeReply::Error>(errorVal), errorString_QString);
    } else
        qFatal("Error: Protected method QGeoCodeReply::setError called without a directly constructed type");
}

// Derived class protected handler implementation
void QGeoCodeReply_SetFinished(QGeoCodeReply* self, bool finished) {
    if (auto* vqgeocodereply = dynamic_cast<VirtualQGeoCodeReply*>(self)) {
        vqgeocodereply->VirtualQGeoCodeReply::setFinished(finished);
    } else
        qFatal("Error: Protected method QGeoCodeReply::setFinished called without a directly constructed type");
}

// Derived class protected handler implementation
void QGeoCodeReply_SetViewport(QGeoCodeReply* self, const QGeoShape* viewport) {
    if (auto* vqgeocodereply = dynamic_cast<VirtualQGeoCodeReply*>(self)) {
        vqgeocodereply->VirtualQGeoCodeReply::setViewport(*viewport);
    } else
        qFatal("Error: Protected method QGeoCodeReply::setViewport called without a directly constructed type");
}

// Derived class protected handler implementation
void QGeoCodeReply_AddLocation(QGeoCodeReply* self, const QGeoLocation* location) {
    if (auto* vqgeocodereply = dynamic_cast<VirtualQGeoCodeReply*>(self)) {
        vqgeocodereply->VirtualQGeoCodeReply::addLocation(*location);
    } else
        qFatal("Error: Protected method QGeoCodeReply::addLocation called without a directly constructed type");
}

// Derived class protected handler implementation
void QGeoCodeReply_SetLocations(QGeoCodeReply* self, const libqt_list /* of QGeoLocation* */ locations) {
    if (auto* vqgeocodereply = dynamic_cast<VirtualQGeoCodeReply*>(self)) {
        QList<QGeoLocation> locations_QList;
        locations_QList.reserve(locations.len);
        QGeoLocation** locations_arr = static_cast<QGeoLocation**>(locations.data);
        for (size_t i = 0; i < locations.len; ++i) {
            locations_QList.push_back(*(locations_arr[i]));
        }
        vqgeocodereply->VirtualQGeoCodeReply::setLocations(locations_QList);
    } else
        qFatal("Error: Protected method QGeoCodeReply::setLocations called without a directly constructed type");
}

// Derived class protected handler implementation
void QGeoCodeReply_SetLimit(QGeoCodeReply* self, ptrdiff_t limit) {
    if (auto* vqgeocodereply = dynamic_cast<VirtualQGeoCodeReply*>(self)) {
        vqgeocodereply->VirtualQGeoCodeReply::setLimit((qsizetype)(limit));
    } else
        qFatal("Error: Protected method QGeoCodeReply::setLimit called without a directly constructed type");
}

// Derived class protected handler implementation
void QGeoCodeReply_SetOffset(QGeoCodeReply* self, ptrdiff_t offset) {
    if (auto* vqgeocodereply = dynamic_cast<VirtualQGeoCodeReply*>(self)) {
        vqgeocodereply->VirtualQGeoCodeReply::setOffset((qsizetype)(offset));
    } else
        qFatal("Error: Protected method QGeoCodeReply::setOffset called without a directly constructed type");
}

// Derived class protected handler implementation
QObject* QGeoCodeReply_Sender(const QGeoCodeReply* self) {
    if (auto* vqgeocodereply = const_cast<VirtualQGeoCodeReply*>(dynamic_cast<const VirtualQGeoCodeReply*>(self))) {
        return vqgeocodereply->VirtualQGeoCodeReply::sender();
    } else
        qFatal("Error: Protected method QGeoCodeReply::sender called without a directly constructed type");
}

// Derived class protected handler implementation
int QGeoCodeReply_SenderSignalIndex(const QGeoCodeReply* self) {
    if (auto* vqgeocodereply = const_cast<VirtualQGeoCodeReply*>(dynamic_cast<const VirtualQGeoCodeReply*>(self))) {
        return vqgeocodereply->VirtualQGeoCodeReply::senderSignalIndex();
    } else
        qFatal("Error: Protected method QGeoCodeReply::senderSignalIndex called without a directly constructed type");
}

// Derived class protected handler implementation
int QGeoCodeReply_Receivers(const QGeoCodeReply* self, const char* signal) {
    if (auto* vqgeocodereply = const_cast<VirtualQGeoCodeReply*>(dynamic_cast<const VirtualQGeoCodeReply*>(self))) {
        return vqgeocodereply->VirtualQGeoCodeReply::receivers(signal);
    } else
        qFatal("Error: Protected method QGeoCodeReply::receivers called without a directly constructed type");
}

// Derived class protected handler implementation
bool QGeoCodeReply_IsSignalConnected(const QGeoCodeReply* self, const QMetaMethod* signal) {
    if (auto* vqgeocodereply = const_cast<VirtualQGeoCodeReply*>(dynamic_cast<const VirtualQGeoCodeReply*>(self))) {
        return vqgeocodereply->VirtualQGeoCodeReply::isSignalConnected(*signal);
    } else
        qFatal("Error: Protected method QGeoCodeReply::isSignalConnected called without a directly constructed type");
}

void QGeoCodeReply_Delete(QGeoCodeReply* self) {
    delete self;
}
