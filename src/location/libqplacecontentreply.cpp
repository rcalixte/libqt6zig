#include <QChildEvent>
#include <QEvent>
#include <QMap>
#include <QMetaMethod>
#include <QMetaObject>
#include <QObject>
#include <QPlaceContent>
#include <QPlaceContentReply>
#include <QPlaceContentRequest>
#include <QPlaceReply>
#include <QString>
#include <QTimerEvent>
#include <qplacecontentreply.h>
#include "libqplacecontentreply.h"
#include "libqplacecontentreply.hxx"

QPlaceContentReply* QPlaceContentReply_new() {
    return new VirtualQPlaceContentReply();
}

QPlaceContentReply* QPlaceContentReply_new2(QObject* parent) {
    return new VirtualQPlaceContentReply(parent);
}

QMetaObject* QPlaceContentReply_MetaObject(const QPlaceContentReply* self) {
    return (QMetaObject*)self->metaObject();
}

void* QPlaceContentReply_Metacast(QPlaceContentReply* self, const char* param1) {
    return self->qt_metacast(param1);
}

int QPlaceContentReply_Metacall(QPlaceContentReply* self, int param1, int param2, void** param3) {
    return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

libqt_string QPlaceContentReply_Tr(const char* s) {
    auto _ret = QPlaceContentReply::tr(s);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

int QPlaceContentReply_Type(const QPlaceContentReply* self) {
    return static_cast<int>(self->type());
}

libqt_map /* of int to QPlaceContent* */ QPlaceContentReply_Content(const QPlaceContentReply* self) {
    QMap<int, QPlaceContent> _ret = self->content();
    // Convert QMap<> from C++ memory to manually-managed C memory
    int* _karr = static_cast<int*>(malloc(sizeof(int) * _ret.size()));
    QPlaceContent** _varr = static_cast<QPlaceContent**>(malloc(sizeof(QPlaceContent*) * _ret.size()));
    int _ctr = 0;
    for (auto _itr = _ret.keyValueBegin(); _itr != _ret.keyValueEnd(); ++_itr) {
        _karr[_ctr] = _itr->first;
        _varr[_ctr] = new QPlaceContent(_itr->second);
        _ctr++;
    }
    libqt_map _out;
    _out.len = _ret.size();
    _out.keys = static_cast<void*>(_karr);
    _out.values = static_cast<void*>(_varr);
    return _out;
}

int QPlaceContentReply_TotalCount(const QPlaceContentReply* self) {
    return self->totalCount();
}

QPlaceContentRequest* QPlaceContentReply_Request(const QPlaceContentReply* self) {
    return new QPlaceContentRequest(self->request());
}

QPlaceContentRequest* QPlaceContentReply_PreviousPageRequest(const QPlaceContentReply* self) {
    return new QPlaceContentRequest(self->previousPageRequest());
}

QPlaceContentRequest* QPlaceContentReply_NextPageRequest(const QPlaceContentReply* self) {
    return new QPlaceContentRequest(self->nextPageRequest());
}

libqt_string QPlaceContentReply_Tr2(const char* s, const char* c) {
    auto _ret = QPlaceContentReply::tr(s, c);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string QPlaceContentReply_Tr3(const char* s, const char* c, int n) {
    auto _ret = QPlaceContentReply::tr(s, c, static_cast<int>(n));
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
QMetaObject* QPlaceContentReply_SuperMetaObject(const QPlaceContentReply* self) {
    return (QMetaObject*)self->QPlaceContentReply::metaObject();
}

// Auxiliary method to allow providing re-implementation
void QPlaceContentReply_OnMetaObject(QPlaceContentReply* self, intptr_t slot) {
    if (auto* vqplacecontentreply = const_cast<VirtualQPlaceContentReply*>(dynamic_cast<const VirtualQPlaceContentReply*>(self)))
        vqplacecontentreply->qplacecontentreply_metaobject_callback = reinterpret_cast<VirtualQPlaceContentReply::QPlaceContentReply_MetaObject_Callback>(slot);
}

// Base class handler implementation
void* QPlaceContentReply_SuperMetacast(QPlaceContentReply* self, const char* param1) {
    return self->QPlaceContentReply::qt_metacast(param1);
}

// Auxiliary method to allow providing re-implementation
void QPlaceContentReply_OnMetacast(QPlaceContentReply* self, intptr_t slot) {
    if (auto* vqplacecontentreply = dynamic_cast<VirtualQPlaceContentReply*>(self))
        vqplacecontentreply->qplacecontentreply_metacast_callback = reinterpret_cast<VirtualQPlaceContentReply::QPlaceContentReply_Metacast_Callback>(slot);
}

// Base class handler implementation
int QPlaceContentReply_SuperMetacall(QPlaceContentReply* self, int param1, int param2, void** param3) {
    return self->QPlaceContentReply::qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

// Auxiliary method to allow providing re-implementation
void QPlaceContentReply_OnMetacall(QPlaceContentReply* self, intptr_t slot) {
    if (auto* vqplacecontentreply = dynamic_cast<VirtualQPlaceContentReply*>(self))
        vqplacecontentreply->qplacecontentreply_metacall_callback = reinterpret_cast<VirtualQPlaceContentReply::QPlaceContentReply_Metacall_Callback>(slot);
}

// Base class handler implementation
int QPlaceContentReply_SuperType(const QPlaceContentReply* self) {
    return static_cast<int>(self->QPlaceContentReply::type());
}

// Auxiliary method to allow providing re-implementation
void QPlaceContentReply_OnType(QPlaceContentReply* self, intptr_t slot) {
    if (auto* vqplacecontentreply = const_cast<VirtualQPlaceContentReply*>(dynamic_cast<const VirtualQPlaceContentReply*>(self)))
        vqplacecontentreply->qplacecontentreply_type_callback = reinterpret_cast<VirtualQPlaceContentReply::QPlaceContentReply_Type_Callback>(slot);
}

// Derived class handler implementation
void QPlaceContentReply_Abort(QPlaceContentReply* self) {
    self->abort();
}

// Base class handler implementation
void QPlaceContentReply_SuperAbort(QPlaceContentReply* self) {
    self->QPlaceContentReply::abort();
}

// Auxiliary method to allow providing re-implementation
void QPlaceContentReply_OnAbort(QPlaceContentReply* self, intptr_t slot) {
    if (auto* vqplacecontentreply = dynamic_cast<VirtualQPlaceContentReply*>(self))
        vqplacecontentreply->qplacecontentreply_abort_callback = reinterpret_cast<VirtualQPlaceContentReply::QPlaceContentReply_Abort_Callback>(slot);
}

// Derived class handler implementation
bool QPlaceContentReply_Event(QPlaceContentReply* self, QEvent* event) {
    return self->event(event);
}

// Base class handler implementation
bool QPlaceContentReply_SuperEvent(QPlaceContentReply* self, QEvent* event) {
    return self->QPlaceContentReply::event(event);
}

// Auxiliary method to allow providing re-implementation
void QPlaceContentReply_OnEvent(QPlaceContentReply* self, intptr_t slot) {
    if (auto* vqplacecontentreply = dynamic_cast<VirtualQPlaceContentReply*>(self))
        vqplacecontentreply->qplacecontentreply_event_callback = reinterpret_cast<VirtualQPlaceContentReply::QPlaceContentReply_Event_Callback>(slot);
}

// Derived class handler implementation
bool QPlaceContentReply_EventFilter(QPlaceContentReply* self, QObject* watched, QEvent* event) {
    return self->eventFilter(watched, event);
}

// Base class handler implementation
bool QPlaceContentReply_SuperEventFilter(QPlaceContentReply* self, QObject* watched, QEvent* event) {
    return self->QPlaceContentReply::eventFilter(watched, event);
}

// Auxiliary method to allow providing re-implementation
void QPlaceContentReply_OnEventFilter(QPlaceContentReply* self, intptr_t slot) {
    if (auto* vqplacecontentreply = dynamic_cast<VirtualQPlaceContentReply*>(self))
        vqplacecontentreply->qplacecontentreply_eventfilter_callback = reinterpret_cast<VirtualQPlaceContentReply::QPlaceContentReply_EventFilter_Callback>(slot);
}

// Derived class handler implementation
void QPlaceContentReply_TimerEvent(QPlaceContentReply* self, QTimerEvent* event) {
    auto* vqplacecontentreply = dynamic_cast<VirtualQPlaceContentReply*>(self);
    if (vqplacecontentreply) {
        vqplacecontentreply->timerEvent(event);
    } else {
        qFatal("Error: Protected virtual method QPlaceContentReply::timerEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QPlaceContentReply_SuperTimerEvent(QPlaceContentReply* self, QTimerEvent* event) {
    if (auto* vqplacecontentreply = dynamic_cast<VirtualQPlaceContentReply*>(self)) {
        vqplacecontentreply->QPlaceContentReply::timerEvent(event);
    } else
        qFatal("Error: Protected virtual method QPlaceContentReply::timerEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QPlaceContentReply_OnTimerEvent(QPlaceContentReply* self, intptr_t slot) {
    if (auto* vqplacecontentreply = dynamic_cast<VirtualQPlaceContentReply*>(self))
        vqplacecontentreply->qplacecontentreply_timerevent_callback = reinterpret_cast<VirtualQPlaceContentReply::QPlaceContentReply_TimerEvent_Callback>(slot);
}

// Derived class handler implementation
void QPlaceContentReply_ChildEvent(QPlaceContentReply* self, QChildEvent* event) {
    auto* vqplacecontentreply = dynamic_cast<VirtualQPlaceContentReply*>(self);
    if (vqplacecontentreply) {
        vqplacecontentreply->childEvent(event);
    } else {
        qFatal("Error: Protected virtual method QPlaceContentReply::childEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QPlaceContentReply_SuperChildEvent(QPlaceContentReply* self, QChildEvent* event) {
    if (auto* vqplacecontentreply = dynamic_cast<VirtualQPlaceContentReply*>(self)) {
        vqplacecontentreply->QPlaceContentReply::childEvent(event);
    } else
        qFatal("Error: Protected virtual method QPlaceContentReply::childEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QPlaceContentReply_OnChildEvent(QPlaceContentReply* self, intptr_t slot) {
    if (auto* vqplacecontentreply = dynamic_cast<VirtualQPlaceContentReply*>(self))
        vqplacecontentreply->qplacecontentreply_childevent_callback = reinterpret_cast<VirtualQPlaceContentReply::QPlaceContentReply_ChildEvent_Callback>(slot);
}

// Derived class handler implementation
void QPlaceContentReply_CustomEvent(QPlaceContentReply* self, QEvent* event) {
    auto* vqplacecontentreply = dynamic_cast<VirtualQPlaceContentReply*>(self);
    if (vqplacecontentreply) {
        vqplacecontentreply->customEvent(event);
    } else {
        qFatal("Error: Protected virtual method QPlaceContentReply::customEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QPlaceContentReply_SuperCustomEvent(QPlaceContentReply* self, QEvent* event) {
    if (auto* vqplacecontentreply = dynamic_cast<VirtualQPlaceContentReply*>(self)) {
        vqplacecontentreply->QPlaceContentReply::customEvent(event);
    } else
        qFatal("Error: Protected virtual method QPlaceContentReply::customEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QPlaceContentReply_OnCustomEvent(QPlaceContentReply* self, intptr_t slot) {
    if (auto* vqplacecontentreply = dynamic_cast<VirtualQPlaceContentReply*>(self))
        vqplacecontentreply->qplacecontentreply_customevent_callback = reinterpret_cast<VirtualQPlaceContentReply::QPlaceContentReply_CustomEvent_Callback>(slot);
}

// Derived class handler implementation
void QPlaceContentReply_ConnectNotify(QPlaceContentReply* self, const QMetaMethod* signal) {
    auto* vqplacecontentreply = dynamic_cast<VirtualQPlaceContentReply*>(self);
    if (vqplacecontentreply) {
        vqplacecontentreply->connectNotify(*signal);
    } else {
        qFatal("Error: Protected virtual method QPlaceContentReply::connectNotify called without a directly constructed type");
    }
}

// Base class handler implementation
void QPlaceContentReply_SuperConnectNotify(QPlaceContentReply* self, const QMetaMethod* signal) {
    if (auto* vqplacecontentreply = dynamic_cast<VirtualQPlaceContentReply*>(self)) {
        vqplacecontentreply->QPlaceContentReply::connectNotify(*signal);
    } else
        qFatal("Error: Protected virtual method QPlaceContentReply::connectNotify called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QPlaceContentReply_OnConnectNotify(QPlaceContentReply* self, intptr_t slot) {
    if (auto* vqplacecontentreply = dynamic_cast<VirtualQPlaceContentReply*>(self))
        vqplacecontentreply->qplacecontentreply_connectnotify_callback = reinterpret_cast<VirtualQPlaceContentReply::QPlaceContentReply_ConnectNotify_Callback>(slot);
}

// Derived class handler implementation
void QPlaceContentReply_DisconnectNotify(QPlaceContentReply* self, const QMetaMethod* signal) {
    auto* vqplacecontentreply = dynamic_cast<VirtualQPlaceContentReply*>(self);
    if (vqplacecontentreply) {
        vqplacecontentreply->disconnectNotify(*signal);
    } else {
        qFatal("Error: Protected virtual method QPlaceContentReply::disconnectNotify called without a directly constructed type");
    }
}

// Base class handler implementation
void QPlaceContentReply_SuperDisconnectNotify(QPlaceContentReply* self, const QMetaMethod* signal) {
    if (auto* vqplacecontentreply = dynamic_cast<VirtualQPlaceContentReply*>(self)) {
        vqplacecontentreply->QPlaceContentReply::disconnectNotify(*signal);
    } else
        qFatal("Error: Protected virtual method QPlaceContentReply::disconnectNotify called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QPlaceContentReply_OnDisconnectNotify(QPlaceContentReply* self, intptr_t slot) {
    if (auto* vqplacecontentreply = dynamic_cast<VirtualQPlaceContentReply*>(self))
        vqplacecontentreply->qplacecontentreply_disconnectnotify_callback = reinterpret_cast<VirtualQPlaceContentReply::QPlaceContentReply_DisconnectNotify_Callback>(slot);
}

// Derived class protected handler implementation
void QPlaceContentReply_SetContent(QPlaceContentReply* self, const libqt_map /* of int to QPlaceContent* */ content) {
    if (auto* vqplacecontentreply = dynamic_cast<VirtualQPlaceContentReply*>(self)) {
        QMap<int, QPlaceContent> content_QMap;
        int* content_karr = static_cast<int*>(content.keys);
        QPlaceContent** content_varr = static_cast<QPlaceContent**>(content.values);
        for (size_t i = 0; i < content.len; ++i) {
            content_QMap.insert(static_cast<int>(content_karr[i]), *(content_varr[i]));
        }
        vqplacecontentreply->VirtualQPlaceContentReply::setContent(content_QMap);
    } else
        qFatal("Error: Protected method QPlaceContentReply::setContent called without a directly constructed type");
}

// Derived class protected handler implementation
void QPlaceContentReply_SetTotalCount(QPlaceContentReply* self, int total) {
    if (auto* vqplacecontentreply = dynamic_cast<VirtualQPlaceContentReply*>(self)) {
        vqplacecontentreply->VirtualQPlaceContentReply::setTotalCount(static_cast<int>(total));
    } else
        qFatal("Error: Protected method QPlaceContentReply::setTotalCount called without a directly constructed type");
}

// Derived class protected handler implementation
void QPlaceContentReply_SetRequest(QPlaceContentReply* self, const QPlaceContentRequest* request) {
    if (auto* vqplacecontentreply = dynamic_cast<VirtualQPlaceContentReply*>(self)) {
        vqplacecontentreply->VirtualQPlaceContentReply::setRequest(*request);
    } else
        qFatal("Error: Protected method QPlaceContentReply::setRequest called without a directly constructed type");
}

// Derived class protected handler implementation
void QPlaceContentReply_SetPreviousPageRequest(QPlaceContentReply* self, const QPlaceContentRequest* previous) {
    if (auto* vqplacecontentreply = dynamic_cast<VirtualQPlaceContentReply*>(self)) {
        vqplacecontentreply->VirtualQPlaceContentReply::setPreviousPageRequest(*previous);
    } else
        qFatal("Error: Protected method QPlaceContentReply::setPreviousPageRequest called without a directly constructed type");
}

// Derived class protected handler implementation
void QPlaceContentReply_SetNextPageRequest(QPlaceContentReply* self, const QPlaceContentRequest* next) {
    if (auto* vqplacecontentreply = dynamic_cast<VirtualQPlaceContentReply*>(self)) {
        vqplacecontentreply->VirtualQPlaceContentReply::setNextPageRequest(*next);
    } else
        qFatal("Error: Protected method QPlaceContentReply::setNextPageRequest called without a directly constructed type");
}

// Derived class protected handler implementation
void QPlaceContentReply_SetFinished(QPlaceContentReply* self, bool finished) {
    if (auto* vqplacecontentreply = dynamic_cast<VirtualQPlaceContentReply*>(self)) {
        vqplacecontentreply->VirtualQPlaceContentReply::setFinished(finished);
    } else
        qFatal("Error: Protected method QPlaceContentReply::setFinished called without a directly constructed type");
}

// Derived class protected handler implementation
void QPlaceContentReply_SetError(QPlaceContentReply* self, int errorVal, const libqt_string errorString) {
    if (auto* vqplacecontentreply = dynamic_cast<VirtualQPlaceContentReply*>(self)) {
        QString errorString_QString = QString::fromUtf8(errorString.data, errorString.len);
        vqplacecontentreply->VirtualQPlaceContentReply::setError(static_cast<QPlaceReply::Error>(errorVal), errorString_QString);
    } else
        qFatal("Error: Protected method QPlaceContentReply::setError called without a directly constructed type");
}

// Derived class protected handler implementation
QObject* QPlaceContentReply_Sender(const QPlaceContentReply* self) {
    if (auto* vqplacecontentreply = const_cast<VirtualQPlaceContentReply*>(dynamic_cast<const VirtualQPlaceContentReply*>(self))) {
        return vqplacecontentreply->VirtualQPlaceContentReply::sender();
    } else
        qFatal("Error: Protected method QPlaceContentReply::sender called without a directly constructed type");
}

// Derived class protected handler implementation
int QPlaceContentReply_SenderSignalIndex(const QPlaceContentReply* self) {
    if (auto* vqplacecontentreply = const_cast<VirtualQPlaceContentReply*>(dynamic_cast<const VirtualQPlaceContentReply*>(self))) {
        return vqplacecontentreply->VirtualQPlaceContentReply::senderSignalIndex();
    } else
        qFatal("Error: Protected method QPlaceContentReply::senderSignalIndex called without a directly constructed type");
}

// Derived class protected handler implementation
int QPlaceContentReply_Receivers(const QPlaceContentReply* self, const char* signal) {
    if (auto* vqplacecontentreply = const_cast<VirtualQPlaceContentReply*>(dynamic_cast<const VirtualQPlaceContentReply*>(self))) {
        return vqplacecontentreply->VirtualQPlaceContentReply::receivers(signal);
    } else
        qFatal("Error: Protected method QPlaceContentReply::receivers called without a directly constructed type");
}

// Derived class protected handler implementation
bool QPlaceContentReply_IsSignalConnected(const QPlaceContentReply* self, const QMetaMethod* signal) {
    if (auto* vqplacecontentreply = const_cast<VirtualQPlaceContentReply*>(dynamic_cast<const VirtualQPlaceContentReply*>(self))) {
        return vqplacecontentreply->VirtualQPlaceContentReply::isSignalConnected(*signal);
    } else
        qFatal("Error: Protected method QPlaceContentReply::isSignalConnected called without a directly constructed type");
}

void QPlaceContentReply_Delete(QPlaceContentReply* self) {
    delete self;
}
