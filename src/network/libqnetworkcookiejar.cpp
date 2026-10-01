#include <QChildEvent>
#include <QEvent>
#include <QList>
#include <QMetaMethod>
#include <QMetaObject>
#include <QNetworkCookie>
#include <QNetworkCookieJar>
#include <QObject>
#include <QString>
#include <QTimerEvent>
#include <QUrl>
#include <qnetworkcookiejar.h>
#include "libqnetworkcookiejar.h"
#include "libqnetworkcookiejar.hxx"

QNetworkCookieJar* QNetworkCookieJar_new() {
    return new VirtualQNetworkCookieJar();
}

QNetworkCookieJar* QNetworkCookieJar_new2(QObject* parent) {
    return new VirtualQNetworkCookieJar(parent);
}

QMetaObject* QNetworkCookieJar_MetaObject(const QNetworkCookieJar* self) {
    return (QMetaObject*)self->metaObject();
}

void* QNetworkCookieJar_Metacast(QNetworkCookieJar* self, const char* param1) {
    return self->qt_metacast(param1);
}

int QNetworkCookieJar_Metacall(QNetworkCookieJar* self, int param1, int param2, void** param3) {
    return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

libqt_string QNetworkCookieJar_Tr(const char* s) {
    auto _ret = QNetworkCookieJar::tr(s);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_list /* of QNetworkCookie* */ QNetworkCookieJar_CookiesForUrl(const QNetworkCookieJar* self, const QUrl* url) {
    QList<QNetworkCookie> _ret = self->cookiesForUrl(*url);
    // Convert QList<> from C++ memory to manually-managed C memory
    QNetworkCookie** _arr = static_cast<QNetworkCookie**>(malloc(sizeof(QNetworkCookie*) * (_ret.size())));
    for (qsizetype i = 0; i < _ret.size(); ++i) {
        _arr[i] = new QNetworkCookie(_ret[i]);
    }
    libqt_list _out;
    _out.len = _ret.size();
    _out.data = static_cast<void*>(_arr);
    return _out;
}

bool QNetworkCookieJar_SetCookiesFromUrl(QNetworkCookieJar* self, const libqt_list /* of QNetworkCookie* */ cookieList, const QUrl* url) {
    QList<QNetworkCookie> cookieList_QList;
    cookieList_QList.reserve(cookieList.len);
    QNetworkCookie** cookieList_arr = static_cast<QNetworkCookie**>(cookieList.data);
    for (size_t i = 0; i < cookieList.len; ++i) {
        cookieList_QList.push_back(*(cookieList_arr[i]));
    }
    return self->setCookiesFromUrl(cookieList_QList, *url);
}

bool QNetworkCookieJar_InsertCookie(QNetworkCookieJar* self, const QNetworkCookie* cookie) {
    return self->insertCookie(*cookie);
}

bool QNetworkCookieJar_UpdateCookie(QNetworkCookieJar* self, const QNetworkCookie* cookie) {
    return self->updateCookie(*cookie);
}

bool QNetworkCookieJar_DeleteCookie(QNetworkCookieJar* self, const QNetworkCookie* cookie) {
    return self->deleteCookie(*cookie);
}

bool QNetworkCookieJar_ValidateCookie(const QNetworkCookieJar* self, const QNetworkCookie* cookie, const QUrl* url) {
    auto* vqnetworkcookiejar = dynamic_cast<const VirtualQNetworkCookieJar*>(self);
    if (vqnetworkcookiejar) {
        return vqnetworkcookiejar->validateCookie(*cookie, *url);
    }
    qFatal("Error: Protected method QNetworkCookieJar::validateCookie called without a directly constructed type");
}

libqt_string QNetworkCookieJar_Tr2(const char* s, const char* c) {
    auto _ret = QNetworkCookieJar::tr(s, c);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string QNetworkCookieJar_Tr3(const char* s, const char* c, int n) {
    auto _ret = QNetworkCookieJar::tr(s, c, static_cast<int>(n));
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
QMetaObject* QNetworkCookieJar_SuperMetaObject(const QNetworkCookieJar* self) {
    return (QMetaObject*)self->QNetworkCookieJar::metaObject();
}

// Auxiliary method to allow providing re-implementation
void QNetworkCookieJar_OnMetaObject(QNetworkCookieJar* self, intptr_t slot) {
    if (auto* vqnetworkcookiejar = const_cast<VirtualQNetworkCookieJar*>(dynamic_cast<const VirtualQNetworkCookieJar*>(self)))
        vqnetworkcookiejar->qnetworkcookiejar_metaobject_callback = reinterpret_cast<VirtualQNetworkCookieJar::QNetworkCookieJar_MetaObject_Callback>(slot);
}

// Base class handler implementation
void* QNetworkCookieJar_SuperMetacast(QNetworkCookieJar* self, const char* param1) {
    return self->QNetworkCookieJar::qt_metacast(param1);
}

// Auxiliary method to allow providing re-implementation
void QNetworkCookieJar_OnMetacast(QNetworkCookieJar* self, intptr_t slot) {
    if (auto* vqnetworkcookiejar = dynamic_cast<VirtualQNetworkCookieJar*>(self))
        vqnetworkcookiejar->qnetworkcookiejar_metacast_callback = reinterpret_cast<VirtualQNetworkCookieJar::QNetworkCookieJar_Metacast_Callback>(slot);
}

// Base class handler implementation
int QNetworkCookieJar_SuperMetacall(QNetworkCookieJar* self, int param1, int param2, void** param3) {
    return self->QNetworkCookieJar::qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

// Auxiliary method to allow providing re-implementation
void QNetworkCookieJar_OnMetacall(QNetworkCookieJar* self, intptr_t slot) {
    if (auto* vqnetworkcookiejar = dynamic_cast<VirtualQNetworkCookieJar*>(self))
        vqnetworkcookiejar->qnetworkcookiejar_metacall_callback = reinterpret_cast<VirtualQNetworkCookieJar::QNetworkCookieJar_Metacall_Callback>(slot);
}

// Base class handler implementation
libqt_list /* of QNetworkCookie* */ QNetworkCookieJar_SuperCookiesForUrl(const QNetworkCookieJar* self, const QUrl* url) {
    QList<QNetworkCookie> _ret = self->QNetworkCookieJar::cookiesForUrl(*url);
    // Convert QList<> from C++ memory to manually-managed C memory
    QNetworkCookie** _arr = static_cast<QNetworkCookie**>(malloc(sizeof(QNetworkCookie*) * (_ret.size())));
    for (qsizetype i = 0; i < _ret.size(); ++i) {
        _arr[i] = new QNetworkCookie(_ret[i]);
    }
    libqt_list _out;
    _out.len = _ret.size();
    _out.data = static_cast<void*>(_arr);
    return _out;
}

// Auxiliary method to allow providing re-implementation
void QNetworkCookieJar_OnCookiesForUrl(QNetworkCookieJar* self, intptr_t slot) {
    if (auto* vqnetworkcookiejar = const_cast<VirtualQNetworkCookieJar*>(dynamic_cast<const VirtualQNetworkCookieJar*>(self)))
        vqnetworkcookiejar->qnetworkcookiejar_cookiesforurl_callback = reinterpret_cast<VirtualQNetworkCookieJar::QNetworkCookieJar_CookiesForUrl_Callback>(slot);
}

// Base class handler implementation
bool QNetworkCookieJar_SuperSetCookiesFromUrl(QNetworkCookieJar* self, const libqt_list /* of QNetworkCookie* */ cookieList, const QUrl* url) {
    QList<QNetworkCookie> cookieList_QList;
    cookieList_QList.reserve(cookieList.len);
    QNetworkCookie** cookieList_arr = static_cast<QNetworkCookie**>(cookieList.data);
    for (size_t i = 0; i < cookieList.len; ++i) {
        cookieList_QList.push_back(*(cookieList_arr[i]));
    }
    return self->QNetworkCookieJar::setCookiesFromUrl(cookieList_QList, *url);
}

// Auxiliary method to allow providing re-implementation
void QNetworkCookieJar_OnSetCookiesFromUrl(QNetworkCookieJar* self, intptr_t slot) {
    if (auto* vqnetworkcookiejar = dynamic_cast<VirtualQNetworkCookieJar*>(self))
        vqnetworkcookiejar->qnetworkcookiejar_setcookiesfromurl_callback = reinterpret_cast<VirtualQNetworkCookieJar::QNetworkCookieJar_SetCookiesFromUrl_Callback>(slot);
}

// Base class handler implementation
bool QNetworkCookieJar_SuperInsertCookie(QNetworkCookieJar* self, const QNetworkCookie* cookie) {
    return self->QNetworkCookieJar::insertCookie(*cookie);
}

// Auxiliary method to allow providing re-implementation
void QNetworkCookieJar_OnInsertCookie(QNetworkCookieJar* self, intptr_t slot) {
    if (auto* vqnetworkcookiejar = dynamic_cast<VirtualQNetworkCookieJar*>(self))
        vqnetworkcookiejar->qnetworkcookiejar_insertcookie_callback = reinterpret_cast<VirtualQNetworkCookieJar::QNetworkCookieJar_InsertCookie_Callback>(slot);
}

// Base class handler implementation
bool QNetworkCookieJar_SuperUpdateCookie(QNetworkCookieJar* self, const QNetworkCookie* cookie) {
    return self->QNetworkCookieJar::updateCookie(*cookie);
}

// Auxiliary method to allow providing re-implementation
void QNetworkCookieJar_OnUpdateCookie(QNetworkCookieJar* self, intptr_t slot) {
    if (auto* vqnetworkcookiejar = dynamic_cast<VirtualQNetworkCookieJar*>(self))
        vqnetworkcookiejar->qnetworkcookiejar_updatecookie_callback = reinterpret_cast<VirtualQNetworkCookieJar::QNetworkCookieJar_UpdateCookie_Callback>(slot);
}

// Base class handler implementation
bool QNetworkCookieJar_SuperDeleteCookie(QNetworkCookieJar* self, const QNetworkCookie* cookie) {
    return self->QNetworkCookieJar::deleteCookie(*cookie);
}

// Auxiliary method to allow providing re-implementation
void QNetworkCookieJar_OnDeleteCookie(QNetworkCookieJar* self, intptr_t slot) {
    if (auto* vqnetworkcookiejar = dynamic_cast<VirtualQNetworkCookieJar*>(self))
        vqnetworkcookiejar->qnetworkcookiejar_deletecookie_callback = reinterpret_cast<VirtualQNetworkCookieJar::QNetworkCookieJar_DeleteCookie_Callback>(slot);
}

// Base class handler implementation
bool QNetworkCookieJar_SuperValidateCookie(const QNetworkCookieJar* self, const QNetworkCookie* cookie, const QUrl* url) {
    if (auto* vqnetworkcookiejar = const_cast<VirtualQNetworkCookieJar*>(dynamic_cast<const VirtualQNetworkCookieJar*>(self))) {
        return vqnetworkcookiejar->QNetworkCookieJar::validateCookie(*cookie, *url);
    } else
        qFatal("Error: Protected virtual method QNetworkCookieJar::validateCookie called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QNetworkCookieJar_OnValidateCookie(QNetworkCookieJar* self, intptr_t slot) {
    if (auto* vqnetworkcookiejar = const_cast<VirtualQNetworkCookieJar*>(dynamic_cast<const VirtualQNetworkCookieJar*>(self)))
        vqnetworkcookiejar->qnetworkcookiejar_validatecookie_callback = reinterpret_cast<VirtualQNetworkCookieJar::QNetworkCookieJar_ValidateCookie_Callback>(slot);
}

// Derived class handler implementation
bool QNetworkCookieJar_Event(QNetworkCookieJar* self, QEvent* event) {
    return self->event(event);
}

// Base class handler implementation
bool QNetworkCookieJar_SuperEvent(QNetworkCookieJar* self, QEvent* event) {
    return self->QNetworkCookieJar::event(event);
}

// Auxiliary method to allow providing re-implementation
void QNetworkCookieJar_OnEvent(QNetworkCookieJar* self, intptr_t slot) {
    if (auto* vqnetworkcookiejar = dynamic_cast<VirtualQNetworkCookieJar*>(self))
        vqnetworkcookiejar->qnetworkcookiejar_event_callback = reinterpret_cast<VirtualQNetworkCookieJar::QNetworkCookieJar_Event_Callback>(slot);
}

// Derived class handler implementation
bool QNetworkCookieJar_EventFilter(QNetworkCookieJar* self, QObject* watched, QEvent* event) {
    return self->eventFilter(watched, event);
}

// Base class handler implementation
bool QNetworkCookieJar_SuperEventFilter(QNetworkCookieJar* self, QObject* watched, QEvent* event) {
    return self->QNetworkCookieJar::eventFilter(watched, event);
}

// Auxiliary method to allow providing re-implementation
void QNetworkCookieJar_OnEventFilter(QNetworkCookieJar* self, intptr_t slot) {
    if (auto* vqnetworkcookiejar = dynamic_cast<VirtualQNetworkCookieJar*>(self))
        vqnetworkcookiejar->qnetworkcookiejar_eventfilter_callback = reinterpret_cast<VirtualQNetworkCookieJar::QNetworkCookieJar_EventFilter_Callback>(slot);
}

// Derived class handler implementation
void QNetworkCookieJar_TimerEvent(QNetworkCookieJar* self, QTimerEvent* event) {
    auto* vqnetworkcookiejar = dynamic_cast<VirtualQNetworkCookieJar*>(self);
    if (vqnetworkcookiejar) {
        vqnetworkcookiejar->timerEvent(event);
    } else {
        qFatal("Error: Protected virtual method QNetworkCookieJar::timerEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QNetworkCookieJar_SuperTimerEvent(QNetworkCookieJar* self, QTimerEvent* event) {
    if (auto* vqnetworkcookiejar = dynamic_cast<VirtualQNetworkCookieJar*>(self)) {
        vqnetworkcookiejar->QNetworkCookieJar::timerEvent(event);
    } else
        qFatal("Error: Protected virtual method QNetworkCookieJar::timerEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QNetworkCookieJar_OnTimerEvent(QNetworkCookieJar* self, intptr_t slot) {
    if (auto* vqnetworkcookiejar = dynamic_cast<VirtualQNetworkCookieJar*>(self))
        vqnetworkcookiejar->qnetworkcookiejar_timerevent_callback = reinterpret_cast<VirtualQNetworkCookieJar::QNetworkCookieJar_TimerEvent_Callback>(slot);
}

// Derived class handler implementation
void QNetworkCookieJar_ChildEvent(QNetworkCookieJar* self, QChildEvent* event) {
    auto* vqnetworkcookiejar = dynamic_cast<VirtualQNetworkCookieJar*>(self);
    if (vqnetworkcookiejar) {
        vqnetworkcookiejar->childEvent(event);
    } else {
        qFatal("Error: Protected virtual method QNetworkCookieJar::childEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QNetworkCookieJar_SuperChildEvent(QNetworkCookieJar* self, QChildEvent* event) {
    if (auto* vqnetworkcookiejar = dynamic_cast<VirtualQNetworkCookieJar*>(self)) {
        vqnetworkcookiejar->QNetworkCookieJar::childEvent(event);
    } else
        qFatal("Error: Protected virtual method QNetworkCookieJar::childEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QNetworkCookieJar_OnChildEvent(QNetworkCookieJar* self, intptr_t slot) {
    if (auto* vqnetworkcookiejar = dynamic_cast<VirtualQNetworkCookieJar*>(self))
        vqnetworkcookiejar->qnetworkcookiejar_childevent_callback = reinterpret_cast<VirtualQNetworkCookieJar::QNetworkCookieJar_ChildEvent_Callback>(slot);
}

// Derived class handler implementation
void QNetworkCookieJar_CustomEvent(QNetworkCookieJar* self, QEvent* event) {
    auto* vqnetworkcookiejar = dynamic_cast<VirtualQNetworkCookieJar*>(self);
    if (vqnetworkcookiejar) {
        vqnetworkcookiejar->customEvent(event);
    } else {
        qFatal("Error: Protected virtual method QNetworkCookieJar::customEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QNetworkCookieJar_SuperCustomEvent(QNetworkCookieJar* self, QEvent* event) {
    if (auto* vqnetworkcookiejar = dynamic_cast<VirtualQNetworkCookieJar*>(self)) {
        vqnetworkcookiejar->QNetworkCookieJar::customEvent(event);
    } else
        qFatal("Error: Protected virtual method QNetworkCookieJar::customEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QNetworkCookieJar_OnCustomEvent(QNetworkCookieJar* self, intptr_t slot) {
    if (auto* vqnetworkcookiejar = dynamic_cast<VirtualQNetworkCookieJar*>(self))
        vqnetworkcookiejar->qnetworkcookiejar_customevent_callback = reinterpret_cast<VirtualQNetworkCookieJar::QNetworkCookieJar_CustomEvent_Callback>(slot);
}

// Derived class handler implementation
void QNetworkCookieJar_ConnectNotify(QNetworkCookieJar* self, const QMetaMethod* signal) {
    auto* vqnetworkcookiejar = dynamic_cast<VirtualQNetworkCookieJar*>(self);
    if (vqnetworkcookiejar) {
        vqnetworkcookiejar->connectNotify(*signal);
    } else {
        qFatal("Error: Protected virtual method QNetworkCookieJar::connectNotify called without a directly constructed type");
    }
}

// Base class handler implementation
void QNetworkCookieJar_SuperConnectNotify(QNetworkCookieJar* self, const QMetaMethod* signal) {
    if (auto* vqnetworkcookiejar = dynamic_cast<VirtualQNetworkCookieJar*>(self)) {
        vqnetworkcookiejar->QNetworkCookieJar::connectNotify(*signal);
    } else
        qFatal("Error: Protected virtual method QNetworkCookieJar::connectNotify called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QNetworkCookieJar_OnConnectNotify(QNetworkCookieJar* self, intptr_t slot) {
    if (auto* vqnetworkcookiejar = dynamic_cast<VirtualQNetworkCookieJar*>(self))
        vqnetworkcookiejar->qnetworkcookiejar_connectnotify_callback = reinterpret_cast<VirtualQNetworkCookieJar::QNetworkCookieJar_ConnectNotify_Callback>(slot);
}

// Derived class handler implementation
void QNetworkCookieJar_DisconnectNotify(QNetworkCookieJar* self, const QMetaMethod* signal) {
    auto* vqnetworkcookiejar = dynamic_cast<VirtualQNetworkCookieJar*>(self);
    if (vqnetworkcookiejar) {
        vqnetworkcookiejar->disconnectNotify(*signal);
    } else {
        qFatal("Error: Protected virtual method QNetworkCookieJar::disconnectNotify called without a directly constructed type");
    }
}

// Base class handler implementation
void QNetworkCookieJar_SuperDisconnectNotify(QNetworkCookieJar* self, const QMetaMethod* signal) {
    if (auto* vqnetworkcookiejar = dynamic_cast<VirtualQNetworkCookieJar*>(self)) {
        vqnetworkcookiejar->QNetworkCookieJar::disconnectNotify(*signal);
    } else
        qFatal("Error: Protected virtual method QNetworkCookieJar::disconnectNotify called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QNetworkCookieJar_OnDisconnectNotify(QNetworkCookieJar* self, intptr_t slot) {
    if (auto* vqnetworkcookiejar = dynamic_cast<VirtualQNetworkCookieJar*>(self))
        vqnetworkcookiejar->qnetworkcookiejar_disconnectnotify_callback = reinterpret_cast<VirtualQNetworkCookieJar::QNetworkCookieJar_DisconnectNotify_Callback>(slot);
}

// Derived class protected handler implementation
libqt_list /* of QNetworkCookie* */ QNetworkCookieJar_AllCookies(const QNetworkCookieJar* self) {
    if (auto* vqnetworkcookiejar = const_cast<VirtualQNetworkCookieJar*>(dynamic_cast<const VirtualQNetworkCookieJar*>(self))) {
        QList<QNetworkCookie> _ret = vqnetworkcookiejar->VirtualQNetworkCookieJar::allCookies();
        // Convert QList<> from C++ memory to manually-managed C memory
        QNetworkCookie** _arr = static_cast<QNetworkCookie**>(malloc(sizeof(QNetworkCookie*) * (_ret.size())));
        for (qsizetype i = 0; i < _ret.size(); ++i) {
            _arr[i] = new QNetworkCookie(_ret[i]);
        }
        libqt_list _out;
        _out.len = _ret.size();
        _out.data = static_cast<void*>(_arr);
        return _out;
    } else
        qFatal("Error: Protected method QNetworkCookieJar::allCookies called without a directly constructed type");
}

// Derived class protected handler implementation
void QNetworkCookieJar_SetAllCookies(QNetworkCookieJar* self, const libqt_list /* of QNetworkCookie* */ cookieList) {
    if (auto* vqnetworkcookiejar = dynamic_cast<VirtualQNetworkCookieJar*>(self)) {
        QList<QNetworkCookie> cookieList_QList;
        cookieList_QList.reserve(cookieList.len);
        QNetworkCookie** cookieList_arr = static_cast<QNetworkCookie**>(cookieList.data);
        for (size_t i = 0; i < cookieList.len; ++i) {
            cookieList_QList.push_back(*(cookieList_arr[i]));
        }
        vqnetworkcookiejar->VirtualQNetworkCookieJar::setAllCookies(cookieList_QList);
    } else
        qFatal("Error: Protected method QNetworkCookieJar::setAllCookies called without a directly constructed type");
}

// Derived class protected handler implementation
QObject* QNetworkCookieJar_Sender(const QNetworkCookieJar* self) {
    if (auto* vqnetworkcookiejar = const_cast<VirtualQNetworkCookieJar*>(dynamic_cast<const VirtualQNetworkCookieJar*>(self))) {
        return vqnetworkcookiejar->VirtualQNetworkCookieJar::sender();
    } else
        qFatal("Error: Protected method QNetworkCookieJar::sender called without a directly constructed type");
}

// Derived class protected handler implementation
int QNetworkCookieJar_SenderSignalIndex(const QNetworkCookieJar* self) {
    if (auto* vqnetworkcookiejar = const_cast<VirtualQNetworkCookieJar*>(dynamic_cast<const VirtualQNetworkCookieJar*>(self))) {
        return vqnetworkcookiejar->VirtualQNetworkCookieJar::senderSignalIndex();
    } else
        qFatal("Error: Protected method QNetworkCookieJar::senderSignalIndex called without a directly constructed type");
}

// Derived class protected handler implementation
int QNetworkCookieJar_Receivers(const QNetworkCookieJar* self, const char* signal) {
    if (auto* vqnetworkcookiejar = const_cast<VirtualQNetworkCookieJar*>(dynamic_cast<const VirtualQNetworkCookieJar*>(self))) {
        return vqnetworkcookiejar->VirtualQNetworkCookieJar::receivers(signal);
    } else
        qFatal("Error: Protected method QNetworkCookieJar::receivers called without a directly constructed type");
}

// Derived class protected handler implementation
bool QNetworkCookieJar_IsSignalConnected(const QNetworkCookieJar* self, const QMetaMethod* signal) {
    if (auto* vqnetworkcookiejar = const_cast<VirtualQNetworkCookieJar*>(dynamic_cast<const VirtualQNetworkCookieJar*>(self))) {
        return vqnetworkcookiejar->VirtualQNetworkCookieJar::isSignalConnected(*signal);
    } else
        qFatal("Error: Protected method QNetworkCookieJar::isSignalConnected called without a directly constructed type");
}

void QNetworkCookieJar_Delete(QNetworkCookieJar* self) {
    delete self;
}
