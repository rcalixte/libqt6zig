#include <QChildEvent>
#include <QEvent>
#include <QList>
#include <QMetaMethod>
#include <QMetaObject>
#include <QObject>
#include <QPlaceReply>
#include <QPlaceSearchSuggestionReply>
#include <QString>
#include <QTimerEvent>
#include <qplacesearchsuggestionreply.h>
#include "libqplacesearchsuggestionreply.h"
#include "libqplacesearchsuggestionreply.hxx"

QPlaceSearchSuggestionReply* QPlaceSearchSuggestionReply_new() {
    return new VirtualQPlaceSearchSuggestionReply();
}

QPlaceSearchSuggestionReply* QPlaceSearchSuggestionReply_new2(QObject* parent) {
    return new VirtualQPlaceSearchSuggestionReply(parent);
}

QMetaObject* QPlaceSearchSuggestionReply_MetaObject(const QPlaceSearchSuggestionReply* self) {
    return (QMetaObject*)self->metaObject();
}

void* QPlaceSearchSuggestionReply_Metacast(QPlaceSearchSuggestionReply* self, const char* param1) {
    return self->qt_metacast(param1);
}

int QPlaceSearchSuggestionReply_Metacall(QPlaceSearchSuggestionReply* self, int param1, int param2, void** param3) {
    return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

libqt_string QPlaceSearchSuggestionReply_Tr(const char* s) {
    auto _ret = QPlaceSearchSuggestionReply::tr(s);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_list /* of libqt_string */ QPlaceSearchSuggestionReply_Suggestions(const QPlaceSearchSuggestionReply* self) {
    QList<QString> _ret = self->suggestions();
    // Convert QList<> from C++ memory to manually-managed C memory
    libqt_string* _arr = static_cast<libqt_string*>(malloc(sizeof(libqt_string) * (_ret.size())));
    for (qsizetype i = 0; i < _ret.size(); ++i) {
        auto _lv_ret = _ret[i];
        // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
        QByteArray _lv_b = _lv_ret.toUtf8();
        libqt_string _lv_str;
        _lv_str.len = _lv_b.length();
        _lv_str.data = static_cast<const char*>(malloc(_lv_str.len + 1));
        memcpy((void*)_lv_str.data, _lv_b.data(), _lv_str.len);
        ((char*)_lv_str.data)[_lv_str.len] = '\0';
        _arr[i] = _lv_str;
    }
    libqt_list _out;
    _out.len = _ret.size();
    _out.data = static_cast<void*>(_arr);
    return _out;
}

int QPlaceSearchSuggestionReply_Type(const QPlaceSearchSuggestionReply* self) {
    return static_cast<int>(self->type());
}

libqt_string QPlaceSearchSuggestionReply_Tr2(const char* s, const char* c) {
    auto _ret = QPlaceSearchSuggestionReply::tr(s, c);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string QPlaceSearchSuggestionReply_Tr3(const char* s, const char* c, int n) {
    auto _ret = QPlaceSearchSuggestionReply::tr(s, c, static_cast<int>(n));
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
QMetaObject* QPlaceSearchSuggestionReply_SuperMetaObject(const QPlaceSearchSuggestionReply* self) {
    return (QMetaObject*)self->QPlaceSearchSuggestionReply::metaObject();
}

// Auxiliary method to allow providing re-implementation
void QPlaceSearchSuggestionReply_OnMetaObject(QPlaceSearchSuggestionReply* self, intptr_t slot) {
    if (auto* vqplacesearchsuggestionreply = const_cast<VirtualQPlaceSearchSuggestionReply*>(dynamic_cast<const VirtualQPlaceSearchSuggestionReply*>(self)))
        vqplacesearchsuggestionreply->qplacesearchsuggestionreply_metaobject_callback = reinterpret_cast<VirtualQPlaceSearchSuggestionReply::QPlaceSearchSuggestionReply_MetaObject_Callback>(slot);
}

// Base class handler implementation
void* QPlaceSearchSuggestionReply_SuperMetacast(QPlaceSearchSuggestionReply* self, const char* param1) {
    return self->QPlaceSearchSuggestionReply::qt_metacast(param1);
}

// Auxiliary method to allow providing re-implementation
void QPlaceSearchSuggestionReply_OnMetacast(QPlaceSearchSuggestionReply* self, intptr_t slot) {
    if (auto* vqplacesearchsuggestionreply = dynamic_cast<VirtualQPlaceSearchSuggestionReply*>(self))
        vqplacesearchsuggestionreply->qplacesearchsuggestionreply_metacast_callback = reinterpret_cast<VirtualQPlaceSearchSuggestionReply::QPlaceSearchSuggestionReply_Metacast_Callback>(slot);
}

// Base class handler implementation
int QPlaceSearchSuggestionReply_SuperMetacall(QPlaceSearchSuggestionReply* self, int param1, int param2, void** param3) {
    return self->QPlaceSearchSuggestionReply::qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

// Auxiliary method to allow providing re-implementation
void QPlaceSearchSuggestionReply_OnMetacall(QPlaceSearchSuggestionReply* self, intptr_t slot) {
    if (auto* vqplacesearchsuggestionreply = dynamic_cast<VirtualQPlaceSearchSuggestionReply*>(self))
        vqplacesearchsuggestionreply->qplacesearchsuggestionreply_metacall_callback = reinterpret_cast<VirtualQPlaceSearchSuggestionReply::QPlaceSearchSuggestionReply_Metacall_Callback>(slot);
}

// Base class handler implementation
int QPlaceSearchSuggestionReply_SuperType(const QPlaceSearchSuggestionReply* self) {
    return static_cast<int>(self->QPlaceSearchSuggestionReply::type());
}

// Auxiliary method to allow providing re-implementation
void QPlaceSearchSuggestionReply_OnType(QPlaceSearchSuggestionReply* self, intptr_t slot) {
    if (auto* vqplacesearchsuggestionreply = const_cast<VirtualQPlaceSearchSuggestionReply*>(dynamic_cast<const VirtualQPlaceSearchSuggestionReply*>(self)))
        vqplacesearchsuggestionreply->qplacesearchsuggestionreply_type_callback = reinterpret_cast<VirtualQPlaceSearchSuggestionReply::QPlaceSearchSuggestionReply_Type_Callback>(slot);
}

// Derived class handler implementation
void QPlaceSearchSuggestionReply_Abort(QPlaceSearchSuggestionReply* self) {
    self->abort();
}

// Base class handler implementation
void QPlaceSearchSuggestionReply_SuperAbort(QPlaceSearchSuggestionReply* self) {
    self->QPlaceSearchSuggestionReply::abort();
}

// Auxiliary method to allow providing re-implementation
void QPlaceSearchSuggestionReply_OnAbort(QPlaceSearchSuggestionReply* self, intptr_t slot) {
    if (auto* vqplacesearchsuggestionreply = dynamic_cast<VirtualQPlaceSearchSuggestionReply*>(self))
        vqplacesearchsuggestionreply->qplacesearchsuggestionreply_abort_callback = reinterpret_cast<VirtualQPlaceSearchSuggestionReply::QPlaceSearchSuggestionReply_Abort_Callback>(slot);
}

// Derived class handler implementation
bool QPlaceSearchSuggestionReply_Event(QPlaceSearchSuggestionReply* self, QEvent* event) {
    return self->event(event);
}

// Base class handler implementation
bool QPlaceSearchSuggestionReply_SuperEvent(QPlaceSearchSuggestionReply* self, QEvent* event) {
    return self->QPlaceSearchSuggestionReply::event(event);
}

// Auxiliary method to allow providing re-implementation
void QPlaceSearchSuggestionReply_OnEvent(QPlaceSearchSuggestionReply* self, intptr_t slot) {
    if (auto* vqplacesearchsuggestionreply = dynamic_cast<VirtualQPlaceSearchSuggestionReply*>(self))
        vqplacesearchsuggestionreply->qplacesearchsuggestionreply_event_callback = reinterpret_cast<VirtualQPlaceSearchSuggestionReply::QPlaceSearchSuggestionReply_Event_Callback>(slot);
}

// Derived class handler implementation
bool QPlaceSearchSuggestionReply_EventFilter(QPlaceSearchSuggestionReply* self, QObject* watched, QEvent* event) {
    return self->eventFilter(watched, event);
}

// Base class handler implementation
bool QPlaceSearchSuggestionReply_SuperEventFilter(QPlaceSearchSuggestionReply* self, QObject* watched, QEvent* event) {
    return self->QPlaceSearchSuggestionReply::eventFilter(watched, event);
}

// Auxiliary method to allow providing re-implementation
void QPlaceSearchSuggestionReply_OnEventFilter(QPlaceSearchSuggestionReply* self, intptr_t slot) {
    if (auto* vqplacesearchsuggestionreply = dynamic_cast<VirtualQPlaceSearchSuggestionReply*>(self))
        vqplacesearchsuggestionreply->qplacesearchsuggestionreply_eventfilter_callback = reinterpret_cast<VirtualQPlaceSearchSuggestionReply::QPlaceSearchSuggestionReply_EventFilter_Callback>(slot);
}

// Derived class handler implementation
void QPlaceSearchSuggestionReply_TimerEvent(QPlaceSearchSuggestionReply* self, QTimerEvent* event) {
    auto* vqplacesearchsuggestionreply = dynamic_cast<VirtualQPlaceSearchSuggestionReply*>(self);
    if (vqplacesearchsuggestionreply) {
        vqplacesearchsuggestionreply->timerEvent(event);
    } else {
        qFatal("Error: Protected virtual method QPlaceSearchSuggestionReply::timerEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QPlaceSearchSuggestionReply_SuperTimerEvent(QPlaceSearchSuggestionReply* self, QTimerEvent* event) {
    if (auto* vqplacesearchsuggestionreply = dynamic_cast<VirtualQPlaceSearchSuggestionReply*>(self)) {
        vqplacesearchsuggestionreply->QPlaceSearchSuggestionReply::timerEvent(event);
    } else
        qFatal("Error: Protected virtual method QPlaceSearchSuggestionReply::timerEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QPlaceSearchSuggestionReply_OnTimerEvent(QPlaceSearchSuggestionReply* self, intptr_t slot) {
    if (auto* vqplacesearchsuggestionreply = dynamic_cast<VirtualQPlaceSearchSuggestionReply*>(self))
        vqplacesearchsuggestionreply->qplacesearchsuggestionreply_timerevent_callback = reinterpret_cast<VirtualQPlaceSearchSuggestionReply::QPlaceSearchSuggestionReply_TimerEvent_Callback>(slot);
}

// Derived class handler implementation
void QPlaceSearchSuggestionReply_ChildEvent(QPlaceSearchSuggestionReply* self, QChildEvent* event) {
    auto* vqplacesearchsuggestionreply = dynamic_cast<VirtualQPlaceSearchSuggestionReply*>(self);
    if (vqplacesearchsuggestionreply) {
        vqplacesearchsuggestionreply->childEvent(event);
    } else {
        qFatal("Error: Protected virtual method QPlaceSearchSuggestionReply::childEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QPlaceSearchSuggestionReply_SuperChildEvent(QPlaceSearchSuggestionReply* self, QChildEvent* event) {
    if (auto* vqplacesearchsuggestionreply = dynamic_cast<VirtualQPlaceSearchSuggestionReply*>(self)) {
        vqplacesearchsuggestionreply->QPlaceSearchSuggestionReply::childEvent(event);
    } else
        qFatal("Error: Protected virtual method QPlaceSearchSuggestionReply::childEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QPlaceSearchSuggestionReply_OnChildEvent(QPlaceSearchSuggestionReply* self, intptr_t slot) {
    if (auto* vqplacesearchsuggestionreply = dynamic_cast<VirtualQPlaceSearchSuggestionReply*>(self))
        vqplacesearchsuggestionreply->qplacesearchsuggestionreply_childevent_callback = reinterpret_cast<VirtualQPlaceSearchSuggestionReply::QPlaceSearchSuggestionReply_ChildEvent_Callback>(slot);
}

// Derived class handler implementation
void QPlaceSearchSuggestionReply_CustomEvent(QPlaceSearchSuggestionReply* self, QEvent* event) {
    auto* vqplacesearchsuggestionreply = dynamic_cast<VirtualQPlaceSearchSuggestionReply*>(self);
    if (vqplacesearchsuggestionreply) {
        vqplacesearchsuggestionreply->customEvent(event);
    } else {
        qFatal("Error: Protected virtual method QPlaceSearchSuggestionReply::customEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QPlaceSearchSuggestionReply_SuperCustomEvent(QPlaceSearchSuggestionReply* self, QEvent* event) {
    if (auto* vqplacesearchsuggestionreply = dynamic_cast<VirtualQPlaceSearchSuggestionReply*>(self)) {
        vqplacesearchsuggestionreply->QPlaceSearchSuggestionReply::customEvent(event);
    } else
        qFatal("Error: Protected virtual method QPlaceSearchSuggestionReply::customEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QPlaceSearchSuggestionReply_OnCustomEvent(QPlaceSearchSuggestionReply* self, intptr_t slot) {
    if (auto* vqplacesearchsuggestionreply = dynamic_cast<VirtualQPlaceSearchSuggestionReply*>(self))
        vqplacesearchsuggestionreply->qplacesearchsuggestionreply_customevent_callback = reinterpret_cast<VirtualQPlaceSearchSuggestionReply::QPlaceSearchSuggestionReply_CustomEvent_Callback>(slot);
}

// Derived class handler implementation
void QPlaceSearchSuggestionReply_ConnectNotify(QPlaceSearchSuggestionReply* self, const QMetaMethod* signal) {
    auto* vqplacesearchsuggestionreply = dynamic_cast<VirtualQPlaceSearchSuggestionReply*>(self);
    if (vqplacesearchsuggestionreply) {
        vqplacesearchsuggestionreply->connectNotify(*signal);
    } else {
        qFatal("Error: Protected virtual method QPlaceSearchSuggestionReply::connectNotify called without a directly constructed type");
    }
}

// Base class handler implementation
void QPlaceSearchSuggestionReply_SuperConnectNotify(QPlaceSearchSuggestionReply* self, const QMetaMethod* signal) {
    if (auto* vqplacesearchsuggestionreply = dynamic_cast<VirtualQPlaceSearchSuggestionReply*>(self)) {
        vqplacesearchsuggestionreply->QPlaceSearchSuggestionReply::connectNotify(*signal);
    } else
        qFatal("Error: Protected virtual method QPlaceSearchSuggestionReply::connectNotify called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QPlaceSearchSuggestionReply_OnConnectNotify(QPlaceSearchSuggestionReply* self, intptr_t slot) {
    if (auto* vqplacesearchsuggestionreply = dynamic_cast<VirtualQPlaceSearchSuggestionReply*>(self))
        vqplacesearchsuggestionreply->qplacesearchsuggestionreply_connectnotify_callback = reinterpret_cast<VirtualQPlaceSearchSuggestionReply::QPlaceSearchSuggestionReply_ConnectNotify_Callback>(slot);
}

// Derived class handler implementation
void QPlaceSearchSuggestionReply_DisconnectNotify(QPlaceSearchSuggestionReply* self, const QMetaMethod* signal) {
    auto* vqplacesearchsuggestionreply = dynamic_cast<VirtualQPlaceSearchSuggestionReply*>(self);
    if (vqplacesearchsuggestionreply) {
        vqplacesearchsuggestionreply->disconnectNotify(*signal);
    } else {
        qFatal("Error: Protected virtual method QPlaceSearchSuggestionReply::disconnectNotify called without a directly constructed type");
    }
}

// Base class handler implementation
void QPlaceSearchSuggestionReply_SuperDisconnectNotify(QPlaceSearchSuggestionReply* self, const QMetaMethod* signal) {
    if (auto* vqplacesearchsuggestionreply = dynamic_cast<VirtualQPlaceSearchSuggestionReply*>(self)) {
        vqplacesearchsuggestionreply->QPlaceSearchSuggestionReply::disconnectNotify(*signal);
    } else
        qFatal("Error: Protected virtual method QPlaceSearchSuggestionReply::disconnectNotify called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QPlaceSearchSuggestionReply_OnDisconnectNotify(QPlaceSearchSuggestionReply* self, intptr_t slot) {
    if (auto* vqplacesearchsuggestionreply = dynamic_cast<VirtualQPlaceSearchSuggestionReply*>(self))
        vqplacesearchsuggestionreply->qplacesearchsuggestionreply_disconnectnotify_callback = reinterpret_cast<VirtualQPlaceSearchSuggestionReply::QPlaceSearchSuggestionReply_DisconnectNotify_Callback>(slot);
}

// Derived class protected handler implementation
void QPlaceSearchSuggestionReply_SetSuggestions(QPlaceSearchSuggestionReply* self, const libqt_list /* of libqt_string */ suggestions) {
    if (auto* vqplacesearchsuggestionreply = dynamic_cast<VirtualQPlaceSearchSuggestionReply*>(self)) {
        QList<QString> suggestions_QList;
        suggestions_QList.reserve(suggestions.len);
        libqt_string* suggestions_arr = static_cast<libqt_string*>(suggestions.data);
        for (size_t i = 0; i < suggestions.len; ++i) {
            QString suggestions_arr_i_QString = QString::fromUtf8(suggestions_arr[i].data, suggestions_arr[i].len);
            suggestions_QList.push_back(suggestions_arr_i_QString);
        }
        vqplacesearchsuggestionreply->VirtualQPlaceSearchSuggestionReply::setSuggestions(suggestions_QList);
    } else
        qFatal("Error: Protected method QPlaceSearchSuggestionReply::setSuggestions called without a directly constructed type");
}

// Derived class protected handler implementation
void QPlaceSearchSuggestionReply_SetFinished(QPlaceSearchSuggestionReply* self, bool finished) {
    if (auto* vqplacesearchsuggestionreply = dynamic_cast<VirtualQPlaceSearchSuggestionReply*>(self)) {
        vqplacesearchsuggestionreply->VirtualQPlaceSearchSuggestionReply::setFinished(finished);
    } else
        qFatal("Error: Protected method QPlaceSearchSuggestionReply::setFinished called without a directly constructed type");
}

// Derived class protected handler implementation
void QPlaceSearchSuggestionReply_SetError(QPlaceSearchSuggestionReply* self, int errorVal, const libqt_string errorString) {
    if (auto* vqplacesearchsuggestionreply = dynamic_cast<VirtualQPlaceSearchSuggestionReply*>(self)) {
        QString errorString_QString = QString::fromUtf8(errorString.data, errorString.len);
        vqplacesearchsuggestionreply->VirtualQPlaceSearchSuggestionReply::setError(static_cast<QPlaceReply::Error>(errorVal), errorString_QString);
    } else
        qFatal("Error: Protected method QPlaceSearchSuggestionReply::setError called without a directly constructed type");
}

// Derived class protected handler implementation
QObject* QPlaceSearchSuggestionReply_Sender(const QPlaceSearchSuggestionReply* self) {
    if (auto* vqplacesearchsuggestionreply = const_cast<VirtualQPlaceSearchSuggestionReply*>(dynamic_cast<const VirtualQPlaceSearchSuggestionReply*>(self))) {
        return vqplacesearchsuggestionreply->VirtualQPlaceSearchSuggestionReply::sender();
    } else
        qFatal("Error: Protected method QPlaceSearchSuggestionReply::sender called without a directly constructed type");
}

// Derived class protected handler implementation
int QPlaceSearchSuggestionReply_SenderSignalIndex(const QPlaceSearchSuggestionReply* self) {
    if (auto* vqplacesearchsuggestionreply = const_cast<VirtualQPlaceSearchSuggestionReply*>(dynamic_cast<const VirtualQPlaceSearchSuggestionReply*>(self))) {
        return vqplacesearchsuggestionreply->VirtualQPlaceSearchSuggestionReply::senderSignalIndex();
    } else
        qFatal("Error: Protected method QPlaceSearchSuggestionReply::senderSignalIndex called without a directly constructed type");
}

// Derived class protected handler implementation
int QPlaceSearchSuggestionReply_Receivers(const QPlaceSearchSuggestionReply* self, const char* signal) {
    if (auto* vqplacesearchsuggestionreply = const_cast<VirtualQPlaceSearchSuggestionReply*>(dynamic_cast<const VirtualQPlaceSearchSuggestionReply*>(self))) {
        return vqplacesearchsuggestionreply->VirtualQPlaceSearchSuggestionReply::receivers(signal);
    } else
        qFatal("Error: Protected method QPlaceSearchSuggestionReply::receivers called without a directly constructed type");
}

// Derived class protected handler implementation
bool QPlaceSearchSuggestionReply_IsSignalConnected(const QPlaceSearchSuggestionReply* self, const QMetaMethod* signal) {
    if (auto* vqplacesearchsuggestionreply = const_cast<VirtualQPlaceSearchSuggestionReply*>(dynamic_cast<const VirtualQPlaceSearchSuggestionReply*>(self))) {
        return vqplacesearchsuggestionreply->VirtualQPlaceSearchSuggestionReply::isSignalConnected(*signal);
    } else
        qFatal("Error: Protected method QPlaceSearchSuggestionReply::isSignalConnected called without a directly constructed type");
}

void QPlaceSearchSuggestionReply_Delete(QPlaceSearchSuggestionReply* self) {
    delete self;
}
