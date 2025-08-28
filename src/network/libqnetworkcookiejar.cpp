#include <QChildEvent>
#include <QEvent>
#include <QList>
#include <QMetaMethod>
#include <QMetaObject>
#include <QNetworkCookie>
#include <QNetworkCookieJar>
#include <QObject>
#include <QString>
#include <QByteArray>
#include <cstring>
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
    auto* vqnetworkcookiejar = dynamic_cast<VirtualQNetworkCookieJar*>(self);
    if (vqnetworkcookiejar && vqnetworkcookiejar->isVirtualQNetworkCookieJar) {
        return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return ((VirtualQNetworkCookieJar*)self)->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

libqt_string QNetworkCookieJar_Tr(const char* s) {
    QString _ret = QNetworkCookieJar::tr(s);
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
    auto* vqnetworkcookiejar = dynamic_cast<const VirtualQNetworkCookieJar*>(self);
    if (vqnetworkcookiejar && vqnetworkcookiejar->isVirtualQNetworkCookieJar) {
        QList<QNetworkCookie> _ret = self->cookiesForUrl(*url);
        // Convert QList<> from C++ memory to manually-managed C memory
        QNetworkCookie** _arr = static_cast<QNetworkCookie**>(malloc(sizeof(QNetworkCookie*) * (_ret.size() + 1)));
        for (qsizetype i = 0; i < _ret.size(); ++i) {
            _arr[i] = new QNetworkCookie(_ret[i]);
        }
        libqt_list _out;
        _out.len = _ret.size();
        _out.data = static_cast<void*>(_arr);
        return _out;
    } else {
        QList<QNetworkCookie> _ret = ((VirtualQNetworkCookieJar*)self)->cookiesForUrl(*url);
        // Convert QList<> from C++ memory to manually-managed C memory
        QNetworkCookie** _arr = static_cast<QNetworkCookie**>(malloc(sizeof(QNetworkCookie*) * (_ret.size() + 1)));
        for (qsizetype i = 0; i < _ret.size(); ++i) {
            _arr[i] = new QNetworkCookie(_ret[i]);
        }
        libqt_list _out;
        _out.len = _ret.size();
        _out.data = static_cast<void*>(_arr);
        return _out;
    }
}

bool QNetworkCookieJar_SetCookiesFromUrl(QNetworkCookieJar* self, const libqt_list /* of QNetworkCookie* */ cookieList, const QUrl* url) {
    QList<QNetworkCookie> cookieList_QList;
    cookieList_QList.reserve(cookieList.len);
    QNetworkCookie** cookieList_arr = static_cast<QNetworkCookie**>(cookieList.data);
    for (size_t i = 0; i < cookieList.len; ++i) {
        cookieList_QList.push_back(*(cookieList_arr[i]));
    }
    auto* vqnetworkcookiejar = dynamic_cast<VirtualQNetworkCookieJar*>(self);
    if (vqnetworkcookiejar && vqnetworkcookiejar->isVirtualQNetworkCookieJar) {
        return self->setCookiesFromUrl(cookieList_QList, *url);
    } else {
        return ((VirtualQNetworkCookieJar*)self)->setCookiesFromUrl(cookieList_QList, *url);
    }
}

bool QNetworkCookieJar_InsertCookie(QNetworkCookieJar* self, const QNetworkCookie* cookie) {
    auto* vqnetworkcookiejar = dynamic_cast<VirtualQNetworkCookieJar*>(self);
    if (vqnetworkcookiejar && vqnetworkcookiejar->isVirtualQNetworkCookieJar) {
        return self->insertCookie(*cookie);
    } else {
        return ((VirtualQNetworkCookieJar*)self)->insertCookie(*cookie);
    }
}

bool QNetworkCookieJar_UpdateCookie(QNetworkCookieJar* self, const QNetworkCookie* cookie) {
    auto* vqnetworkcookiejar = dynamic_cast<VirtualQNetworkCookieJar*>(self);
    if (vqnetworkcookiejar && vqnetworkcookiejar->isVirtualQNetworkCookieJar) {
        return self->updateCookie(*cookie);
    } else {
        return ((VirtualQNetworkCookieJar*)self)->updateCookie(*cookie);
    }
}

bool QNetworkCookieJar_DeleteCookie(QNetworkCookieJar* self, const QNetworkCookie* cookie) {
    auto* vqnetworkcookiejar = dynamic_cast<VirtualQNetworkCookieJar*>(self);
    if (vqnetworkcookiejar && vqnetworkcookiejar->isVirtualQNetworkCookieJar) {
        return self->deleteCookie(*cookie);
    } else {
        return ((VirtualQNetworkCookieJar*)self)->deleteCookie(*cookie);
    }
}

bool QNetworkCookieJar_ValidateCookie(const QNetworkCookieJar* self, const QNetworkCookie* cookie, const QUrl* url) {
    auto* vqnetworkcookiejar = dynamic_cast<const VirtualQNetworkCookieJar*>(self);
    if (vqnetworkcookiejar && vqnetworkcookiejar->isVirtualQNetworkCookieJar) {
        return vqnetworkcookiejar->validateCookie(*cookie, *url);
    }
    return {};
}

libqt_string QNetworkCookieJar_Tr2(const char* s, const char* c) {
    QString _ret = QNetworkCookieJar::tr(s, c);
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
    QString _ret = QNetworkCookieJar::tr(s, c, static_cast<int>(n));
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
int QNetworkCookieJar_QBaseMetacall(QNetworkCookieJar* self, int param1, int param2, void** param3) {
    auto* vqnetworkcookiejar = dynamic_cast<VirtualQNetworkCookieJar*>(self);
    if (vqnetworkcookiejar && vqnetworkcookiejar->isVirtualQNetworkCookieJar) {
        vqnetworkcookiejar->setQNetworkCookieJar_Metacall_IsBase(true);
        return vqnetworkcookiejar->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return self->QNetworkCookieJar::qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

// Auxiliary method to allow providing re-implementation
void QNetworkCookieJar_OnMetacall(QNetworkCookieJar* self, intptr_t slot) {
    auto* vqnetworkcookiejar = dynamic_cast<VirtualQNetworkCookieJar*>(self);
    if (vqnetworkcookiejar && vqnetworkcookiejar->isVirtualQNetworkCookieJar) {
        vqnetworkcookiejar->setQNetworkCookieJar_Metacall_Callback(reinterpret_cast<VirtualQNetworkCookieJar::QNetworkCookieJar_Metacall_Callback>(slot));
    }
}

// Base class handler implementation
libqt_list /* of QNetworkCookie* */ QNetworkCookieJar_QBaseCookiesForUrl(const QNetworkCookieJar* self, const QUrl* url) {
    auto* vqnetworkcookiejar = const_cast<VirtualQNetworkCookieJar*>(dynamic_cast<const VirtualQNetworkCookieJar*>(self));
    if (vqnetworkcookiejar && vqnetworkcookiejar->isVirtualQNetworkCookieJar) {
        vqnetworkcookiejar->setQNetworkCookieJar_CookiesForUrl_IsBase(true);
        QList<QNetworkCookie> _ret = vqnetworkcookiejar->cookiesForUrl(*url);
        // Convert QList<> from C++ memory to manually-managed C memory
        QNetworkCookie** _arr = static_cast<QNetworkCookie**>(malloc(sizeof(QNetworkCookie*) * (_ret.size() + 1)));
        for (qsizetype i = 0; i < _ret.size(); ++i) {
            _arr[i] = new QNetworkCookie(_ret[i]);
        }
        libqt_list _out;
        _out.len = _ret.size();
        _out.data = static_cast<void*>(_arr);
        return _out;
    } else {
        QList<QNetworkCookie> _ret = self->QNetworkCookieJar::cookiesForUrl(*url);
        // Convert QList<> from C++ memory to manually-managed C memory
        QNetworkCookie** _arr = static_cast<QNetworkCookie**>(malloc(sizeof(QNetworkCookie*) * (_ret.size() + 1)));
        for (qsizetype i = 0; i < _ret.size(); ++i) {
            _arr[i] = new QNetworkCookie(_ret[i]);
        }
        libqt_list _out;
        _out.len = _ret.size();
        _out.data = static_cast<void*>(_arr);
        return _out;
    }
}

// Auxiliary method to allow providing re-implementation
void QNetworkCookieJar_OnCookiesForUrl(const QNetworkCookieJar* self, intptr_t slot) {
    auto* vqnetworkcookiejar = const_cast<VirtualQNetworkCookieJar*>(dynamic_cast<const VirtualQNetworkCookieJar*>(self));
    if (vqnetworkcookiejar && vqnetworkcookiejar->isVirtualQNetworkCookieJar) {
        vqnetworkcookiejar->setQNetworkCookieJar_CookiesForUrl_Callback(reinterpret_cast<VirtualQNetworkCookieJar::QNetworkCookieJar_CookiesForUrl_Callback>(slot));
    }
}

// Base class handler implementation
bool QNetworkCookieJar_QBaseSetCookiesFromUrl(QNetworkCookieJar* self, const libqt_list /* of QNetworkCookie* */ cookieList, const QUrl* url) {
    auto* vqnetworkcookiejar = dynamic_cast<VirtualQNetworkCookieJar*>(self);
    QList<QNetworkCookie> cookieList_QList;
    cookieList_QList.reserve(cookieList.len);
    QNetworkCookie** cookieList_arr = static_cast<QNetworkCookie**>(cookieList.data);
    for (size_t i = 0; i < cookieList.len; ++i) {
        cookieList_QList.push_back(*(cookieList_arr[i]));
    }
    if (vqnetworkcookiejar && vqnetworkcookiejar->isVirtualQNetworkCookieJar) {
        vqnetworkcookiejar->setQNetworkCookieJar_SetCookiesFromUrl_IsBase(true);
        return vqnetworkcookiejar->setCookiesFromUrl(cookieList_QList, *url);
    } else {
        return self->QNetworkCookieJar::setCookiesFromUrl(cookieList_QList, *url);
    }
}

// Auxiliary method to allow providing re-implementation
void QNetworkCookieJar_OnSetCookiesFromUrl(QNetworkCookieJar* self, intptr_t slot) {
    auto* vqnetworkcookiejar = dynamic_cast<VirtualQNetworkCookieJar*>(self);
    if (vqnetworkcookiejar && vqnetworkcookiejar->isVirtualQNetworkCookieJar) {
        vqnetworkcookiejar->setQNetworkCookieJar_SetCookiesFromUrl_Callback(reinterpret_cast<VirtualQNetworkCookieJar::QNetworkCookieJar_SetCookiesFromUrl_Callback>(slot));
    }
}

// Base class handler implementation
bool QNetworkCookieJar_QBaseInsertCookie(QNetworkCookieJar* self, const QNetworkCookie* cookie) {
    auto* vqnetworkcookiejar = dynamic_cast<VirtualQNetworkCookieJar*>(self);
    if (vqnetworkcookiejar && vqnetworkcookiejar->isVirtualQNetworkCookieJar) {
        vqnetworkcookiejar->setQNetworkCookieJar_InsertCookie_IsBase(true);
        return vqnetworkcookiejar->insertCookie(*cookie);
    } else {
        return self->QNetworkCookieJar::insertCookie(*cookie);
    }
}

// Auxiliary method to allow providing re-implementation
void QNetworkCookieJar_OnInsertCookie(QNetworkCookieJar* self, intptr_t slot) {
    auto* vqnetworkcookiejar = dynamic_cast<VirtualQNetworkCookieJar*>(self);
    if (vqnetworkcookiejar && vqnetworkcookiejar->isVirtualQNetworkCookieJar) {
        vqnetworkcookiejar->setQNetworkCookieJar_InsertCookie_Callback(reinterpret_cast<VirtualQNetworkCookieJar::QNetworkCookieJar_InsertCookie_Callback>(slot));
    }
}

// Base class handler implementation
bool QNetworkCookieJar_QBaseUpdateCookie(QNetworkCookieJar* self, const QNetworkCookie* cookie) {
    auto* vqnetworkcookiejar = dynamic_cast<VirtualQNetworkCookieJar*>(self);
    if (vqnetworkcookiejar && vqnetworkcookiejar->isVirtualQNetworkCookieJar) {
        vqnetworkcookiejar->setQNetworkCookieJar_UpdateCookie_IsBase(true);
        return vqnetworkcookiejar->updateCookie(*cookie);
    } else {
        return self->QNetworkCookieJar::updateCookie(*cookie);
    }
}

// Auxiliary method to allow providing re-implementation
void QNetworkCookieJar_OnUpdateCookie(QNetworkCookieJar* self, intptr_t slot) {
    auto* vqnetworkcookiejar = dynamic_cast<VirtualQNetworkCookieJar*>(self);
    if (vqnetworkcookiejar && vqnetworkcookiejar->isVirtualQNetworkCookieJar) {
        vqnetworkcookiejar->setQNetworkCookieJar_UpdateCookie_Callback(reinterpret_cast<VirtualQNetworkCookieJar::QNetworkCookieJar_UpdateCookie_Callback>(slot));
    }
}

// Base class handler implementation
bool QNetworkCookieJar_QBaseDeleteCookie(QNetworkCookieJar* self, const QNetworkCookie* cookie) {
    auto* vqnetworkcookiejar = dynamic_cast<VirtualQNetworkCookieJar*>(self);
    if (vqnetworkcookiejar && vqnetworkcookiejar->isVirtualQNetworkCookieJar) {
        vqnetworkcookiejar->setQNetworkCookieJar_DeleteCookie_IsBase(true);
        return vqnetworkcookiejar->deleteCookie(*cookie);
    } else {
        return self->QNetworkCookieJar::deleteCookie(*cookie);
    }
}

// Auxiliary method to allow providing re-implementation
void QNetworkCookieJar_OnDeleteCookie(QNetworkCookieJar* self, intptr_t slot) {
    auto* vqnetworkcookiejar = dynamic_cast<VirtualQNetworkCookieJar*>(self);
    if (vqnetworkcookiejar && vqnetworkcookiejar->isVirtualQNetworkCookieJar) {
        vqnetworkcookiejar->setQNetworkCookieJar_DeleteCookie_Callback(reinterpret_cast<VirtualQNetworkCookieJar::QNetworkCookieJar_DeleteCookie_Callback>(slot));
    }
}

// Base class handler implementation
bool QNetworkCookieJar_QBaseValidateCookie(const QNetworkCookieJar* self, const QNetworkCookie* cookie, const QUrl* url) {
    auto* vqnetworkcookiejar = const_cast<VirtualQNetworkCookieJar*>(dynamic_cast<const VirtualQNetworkCookieJar*>(self));
    if (vqnetworkcookiejar && vqnetworkcookiejar->isVirtualQNetworkCookieJar) {
        vqnetworkcookiejar->setQNetworkCookieJar_ValidateCookie_IsBase(true);
        return vqnetworkcookiejar->validateCookie(*cookie, *url);
    } else {
        return ((VirtualQNetworkCookieJar*)self)->validateCookie(*cookie, *url);
    }
}

// Auxiliary method to allow providing re-implementation
void QNetworkCookieJar_OnValidateCookie(const QNetworkCookieJar* self, intptr_t slot) {
    auto* vqnetworkcookiejar = const_cast<VirtualQNetworkCookieJar*>(dynamic_cast<const VirtualQNetworkCookieJar*>(self));
    if (vqnetworkcookiejar && vqnetworkcookiejar->isVirtualQNetworkCookieJar) {
        vqnetworkcookiejar->setQNetworkCookieJar_ValidateCookie_Callback(reinterpret_cast<VirtualQNetworkCookieJar::QNetworkCookieJar_ValidateCookie_Callback>(slot));
    }
}

// Derived class handler implementation
bool QNetworkCookieJar_Event(QNetworkCookieJar* self, QEvent* event) {
    auto* vqnetworkcookiejar = dynamic_cast<VirtualQNetworkCookieJar*>(self);
    if (vqnetworkcookiejar && vqnetworkcookiejar->isVirtualQNetworkCookieJar) {
        return vqnetworkcookiejar->event(event);
    } else {
        return self->QNetworkCookieJar::event(event);
    }
}

// Base class handler implementation
bool QNetworkCookieJar_QBaseEvent(QNetworkCookieJar* self, QEvent* event) {
    auto* vqnetworkcookiejar = dynamic_cast<VirtualQNetworkCookieJar*>(self);
    if (vqnetworkcookiejar && vqnetworkcookiejar->isVirtualQNetworkCookieJar) {
        vqnetworkcookiejar->setQNetworkCookieJar_Event_IsBase(true);
        return vqnetworkcookiejar->event(event);
    } else {
        return self->QNetworkCookieJar::event(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QNetworkCookieJar_OnEvent(QNetworkCookieJar* self, intptr_t slot) {
    auto* vqnetworkcookiejar = dynamic_cast<VirtualQNetworkCookieJar*>(self);
    if (vqnetworkcookiejar && vqnetworkcookiejar->isVirtualQNetworkCookieJar) {
        vqnetworkcookiejar->setQNetworkCookieJar_Event_Callback(reinterpret_cast<VirtualQNetworkCookieJar::QNetworkCookieJar_Event_Callback>(slot));
    }
}

// Derived class handler implementation
bool QNetworkCookieJar_EventFilter(QNetworkCookieJar* self, QObject* watched, QEvent* event) {
    auto* vqnetworkcookiejar = dynamic_cast<VirtualQNetworkCookieJar*>(self);
    if (vqnetworkcookiejar && vqnetworkcookiejar->isVirtualQNetworkCookieJar) {
        return vqnetworkcookiejar->eventFilter(watched, event);
    } else {
        return self->QNetworkCookieJar::eventFilter(watched, event);
    }
}

// Base class handler implementation
bool QNetworkCookieJar_QBaseEventFilter(QNetworkCookieJar* self, QObject* watched, QEvent* event) {
    auto* vqnetworkcookiejar = dynamic_cast<VirtualQNetworkCookieJar*>(self);
    if (vqnetworkcookiejar && vqnetworkcookiejar->isVirtualQNetworkCookieJar) {
        vqnetworkcookiejar->setQNetworkCookieJar_EventFilter_IsBase(true);
        return vqnetworkcookiejar->eventFilter(watched, event);
    } else {
        return self->QNetworkCookieJar::eventFilter(watched, event);
    }
}

// Auxiliary method to allow providing re-implementation
void QNetworkCookieJar_OnEventFilter(QNetworkCookieJar* self, intptr_t slot) {
    auto* vqnetworkcookiejar = dynamic_cast<VirtualQNetworkCookieJar*>(self);
    if (vqnetworkcookiejar && vqnetworkcookiejar->isVirtualQNetworkCookieJar) {
        vqnetworkcookiejar->setQNetworkCookieJar_EventFilter_Callback(reinterpret_cast<VirtualQNetworkCookieJar::QNetworkCookieJar_EventFilter_Callback>(slot));
    }
}

// Derived class handler implementation
void QNetworkCookieJar_TimerEvent(QNetworkCookieJar* self, QTimerEvent* event) {
    auto* vqnetworkcookiejar = dynamic_cast<VirtualQNetworkCookieJar*>(self);
    if (vqnetworkcookiejar && vqnetworkcookiejar->isVirtualQNetworkCookieJar) {
        vqnetworkcookiejar->timerEvent(event);
    } else {
        ((VirtualQNetworkCookieJar*)self)->timerEvent(event);
    }
}

// Base class handler implementation
void QNetworkCookieJar_QBaseTimerEvent(QNetworkCookieJar* self, QTimerEvent* event) {
    auto* vqnetworkcookiejar = dynamic_cast<VirtualQNetworkCookieJar*>(self);
    if (vqnetworkcookiejar && vqnetworkcookiejar->isVirtualQNetworkCookieJar) {
        vqnetworkcookiejar->setQNetworkCookieJar_TimerEvent_IsBase(true);
        vqnetworkcookiejar->timerEvent(event);
    } else {
        ((VirtualQNetworkCookieJar*)self)->timerEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QNetworkCookieJar_OnTimerEvent(QNetworkCookieJar* self, intptr_t slot) {
    auto* vqnetworkcookiejar = dynamic_cast<VirtualQNetworkCookieJar*>(self);
    if (vqnetworkcookiejar && vqnetworkcookiejar->isVirtualQNetworkCookieJar) {
        vqnetworkcookiejar->setQNetworkCookieJar_TimerEvent_Callback(reinterpret_cast<VirtualQNetworkCookieJar::QNetworkCookieJar_TimerEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QNetworkCookieJar_ChildEvent(QNetworkCookieJar* self, QChildEvent* event) {
    auto* vqnetworkcookiejar = dynamic_cast<VirtualQNetworkCookieJar*>(self);
    if (vqnetworkcookiejar && vqnetworkcookiejar->isVirtualQNetworkCookieJar) {
        vqnetworkcookiejar->childEvent(event);
    } else {
        ((VirtualQNetworkCookieJar*)self)->childEvent(event);
    }
}

// Base class handler implementation
void QNetworkCookieJar_QBaseChildEvent(QNetworkCookieJar* self, QChildEvent* event) {
    auto* vqnetworkcookiejar = dynamic_cast<VirtualQNetworkCookieJar*>(self);
    if (vqnetworkcookiejar && vqnetworkcookiejar->isVirtualQNetworkCookieJar) {
        vqnetworkcookiejar->setQNetworkCookieJar_ChildEvent_IsBase(true);
        vqnetworkcookiejar->childEvent(event);
    } else {
        ((VirtualQNetworkCookieJar*)self)->childEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QNetworkCookieJar_OnChildEvent(QNetworkCookieJar* self, intptr_t slot) {
    auto* vqnetworkcookiejar = dynamic_cast<VirtualQNetworkCookieJar*>(self);
    if (vqnetworkcookiejar && vqnetworkcookiejar->isVirtualQNetworkCookieJar) {
        vqnetworkcookiejar->setQNetworkCookieJar_ChildEvent_Callback(reinterpret_cast<VirtualQNetworkCookieJar::QNetworkCookieJar_ChildEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QNetworkCookieJar_CustomEvent(QNetworkCookieJar* self, QEvent* event) {
    auto* vqnetworkcookiejar = dynamic_cast<VirtualQNetworkCookieJar*>(self);
    if (vqnetworkcookiejar && vqnetworkcookiejar->isVirtualQNetworkCookieJar) {
        vqnetworkcookiejar->customEvent(event);
    } else {
        ((VirtualQNetworkCookieJar*)self)->customEvent(event);
    }
}

// Base class handler implementation
void QNetworkCookieJar_QBaseCustomEvent(QNetworkCookieJar* self, QEvent* event) {
    auto* vqnetworkcookiejar = dynamic_cast<VirtualQNetworkCookieJar*>(self);
    if (vqnetworkcookiejar && vqnetworkcookiejar->isVirtualQNetworkCookieJar) {
        vqnetworkcookiejar->setQNetworkCookieJar_CustomEvent_IsBase(true);
        vqnetworkcookiejar->customEvent(event);
    } else {
        ((VirtualQNetworkCookieJar*)self)->customEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QNetworkCookieJar_OnCustomEvent(QNetworkCookieJar* self, intptr_t slot) {
    auto* vqnetworkcookiejar = dynamic_cast<VirtualQNetworkCookieJar*>(self);
    if (vqnetworkcookiejar && vqnetworkcookiejar->isVirtualQNetworkCookieJar) {
        vqnetworkcookiejar->setQNetworkCookieJar_CustomEvent_Callback(reinterpret_cast<VirtualQNetworkCookieJar::QNetworkCookieJar_CustomEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QNetworkCookieJar_ConnectNotify(QNetworkCookieJar* self, const QMetaMethod* signal) {
    auto* vqnetworkcookiejar = dynamic_cast<VirtualQNetworkCookieJar*>(self);
    if (vqnetworkcookiejar && vqnetworkcookiejar->isVirtualQNetworkCookieJar) {
        vqnetworkcookiejar->connectNotify(*signal);
    } else {
        ((VirtualQNetworkCookieJar*)self)->connectNotify(*signal);
    }
}

// Base class handler implementation
void QNetworkCookieJar_QBaseConnectNotify(QNetworkCookieJar* self, const QMetaMethod* signal) {
    auto* vqnetworkcookiejar = dynamic_cast<VirtualQNetworkCookieJar*>(self);
    if (vqnetworkcookiejar && vqnetworkcookiejar->isVirtualQNetworkCookieJar) {
        vqnetworkcookiejar->setQNetworkCookieJar_ConnectNotify_IsBase(true);
        vqnetworkcookiejar->connectNotify(*signal);
    } else {
        ((VirtualQNetworkCookieJar*)self)->connectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QNetworkCookieJar_OnConnectNotify(QNetworkCookieJar* self, intptr_t slot) {
    auto* vqnetworkcookiejar = dynamic_cast<VirtualQNetworkCookieJar*>(self);
    if (vqnetworkcookiejar && vqnetworkcookiejar->isVirtualQNetworkCookieJar) {
        vqnetworkcookiejar->setQNetworkCookieJar_ConnectNotify_Callback(reinterpret_cast<VirtualQNetworkCookieJar::QNetworkCookieJar_ConnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
void QNetworkCookieJar_DisconnectNotify(QNetworkCookieJar* self, const QMetaMethod* signal) {
    auto* vqnetworkcookiejar = dynamic_cast<VirtualQNetworkCookieJar*>(self);
    if (vqnetworkcookiejar && vqnetworkcookiejar->isVirtualQNetworkCookieJar) {
        vqnetworkcookiejar->disconnectNotify(*signal);
    } else {
        ((VirtualQNetworkCookieJar*)self)->disconnectNotify(*signal);
    }
}

// Base class handler implementation
void QNetworkCookieJar_QBaseDisconnectNotify(QNetworkCookieJar* self, const QMetaMethod* signal) {
    auto* vqnetworkcookiejar = dynamic_cast<VirtualQNetworkCookieJar*>(self);
    if (vqnetworkcookiejar && vqnetworkcookiejar->isVirtualQNetworkCookieJar) {
        vqnetworkcookiejar->setQNetworkCookieJar_DisconnectNotify_IsBase(true);
        vqnetworkcookiejar->disconnectNotify(*signal);
    } else {
        ((VirtualQNetworkCookieJar*)self)->disconnectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QNetworkCookieJar_OnDisconnectNotify(QNetworkCookieJar* self, intptr_t slot) {
    auto* vqnetworkcookiejar = dynamic_cast<VirtualQNetworkCookieJar*>(self);
    if (vqnetworkcookiejar && vqnetworkcookiejar->isVirtualQNetworkCookieJar) {
        vqnetworkcookiejar->setQNetworkCookieJar_DisconnectNotify_Callback(reinterpret_cast<VirtualQNetworkCookieJar::QNetworkCookieJar_DisconnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
libqt_list /* of QNetworkCookie* */ QNetworkCookieJar_AllCookies(const QNetworkCookieJar* self) {
    auto* vqnetworkcookiejar = const_cast<VirtualQNetworkCookieJar*>(dynamic_cast<const VirtualQNetworkCookieJar*>(self));
    if (vqnetworkcookiejar && vqnetworkcookiejar->isVirtualQNetworkCookieJar) {
        QList<QNetworkCookie> _ret = vqnetworkcookiejar->allCookies();
        // Convert QList<> from C++ memory to manually-managed C memory
        QNetworkCookie** _arr = static_cast<QNetworkCookie**>(malloc(sizeof(QNetworkCookie*) * (_ret.size() + 1)));
        for (qsizetype i = 0; i < _ret.size(); ++i) {
            _arr[i] = new QNetworkCookie(_ret[i]);
        }
        libqt_list _out;
        _out.len = _ret.size();
        _out.data = static_cast<void*>(_arr);
        return _out;
    } else {
        QList<QNetworkCookie> _ret = ((VirtualQNetworkCookieJar*)self)->allCookies();
        // Convert QList<> from C++ memory to manually-managed C memory
        QNetworkCookie** _arr = static_cast<QNetworkCookie**>(malloc(sizeof(QNetworkCookie*) * (_ret.size() + 1)));
        for (qsizetype i = 0; i < _ret.size(); ++i) {
            _arr[i] = new QNetworkCookie(_ret[i]);
        }
        libqt_list _out;
        _out.len = _ret.size();
        _out.data = static_cast<void*>(_arr);
        return _out;
    }
}

// Base class handler implementation
libqt_list /* of QNetworkCookie* */ QNetworkCookieJar_QBaseAllCookies(const QNetworkCookieJar* self) {
    auto* vqnetworkcookiejar = const_cast<VirtualQNetworkCookieJar*>(dynamic_cast<const VirtualQNetworkCookieJar*>(self));
    if (vqnetworkcookiejar && vqnetworkcookiejar->isVirtualQNetworkCookieJar) {
        vqnetworkcookiejar->setQNetworkCookieJar_AllCookies_IsBase(true);
        QList<QNetworkCookie> _ret = vqnetworkcookiejar->allCookies();
        // Convert QList<> from C++ memory to manually-managed C memory
        QNetworkCookie** _arr = static_cast<QNetworkCookie**>(malloc(sizeof(QNetworkCookie*) * (_ret.size() + 1)));
        for (qsizetype i = 0; i < _ret.size(); ++i) {
            _arr[i] = new QNetworkCookie(_ret[i]);
        }
        libqt_list _out;
        _out.len = _ret.size();
        _out.data = static_cast<void*>(_arr);
        return _out;
    } else {
        QList<QNetworkCookie> _ret = ((VirtualQNetworkCookieJar*)self)->allCookies();
        // Convert QList<> from C++ memory to manually-managed C memory
        QNetworkCookie** _arr = static_cast<QNetworkCookie**>(malloc(sizeof(QNetworkCookie*) * (_ret.size() + 1)));
        for (qsizetype i = 0; i < _ret.size(); ++i) {
            _arr[i] = new QNetworkCookie(_ret[i]);
        }
        libqt_list _out;
        _out.len = _ret.size();
        _out.data = static_cast<void*>(_arr);
        return _out;
    }
}

// Auxiliary method to allow providing re-implementation
void QNetworkCookieJar_OnAllCookies(const QNetworkCookieJar* self, intptr_t slot) {
    auto* vqnetworkcookiejar = const_cast<VirtualQNetworkCookieJar*>(dynamic_cast<const VirtualQNetworkCookieJar*>(self));
    if (vqnetworkcookiejar && vqnetworkcookiejar->isVirtualQNetworkCookieJar) {
        vqnetworkcookiejar->setQNetworkCookieJar_AllCookies_Callback(reinterpret_cast<VirtualQNetworkCookieJar::QNetworkCookieJar_AllCookies_Callback>(slot));
    }
}

// Derived class handler implementation
void QNetworkCookieJar_SetAllCookies(QNetworkCookieJar* self, const libqt_list /* of QNetworkCookie* */ cookieList) {
    auto* vqnetworkcookiejar = dynamic_cast<VirtualQNetworkCookieJar*>(self);
    QList<QNetworkCookie> cookieList_QList;
    cookieList_QList.reserve(cookieList.len);
    QNetworkCookie** cookieList_arr = static_cast<QNetworkCookie**>(cookieList.data);
    for (size_t i = 0; i < cookieList.len; ++i) {
        cookieList_QList.push_back(*(cookieList_arr[i]));
    }
    if (vqnetworkcookiejar && vqnetworkcookiejar->isVirtualQNetworkCookieJar) {
        vqnetworkcookiejar->setAllCookies(cookieList_QList);
    } else {
        ((VirtualQNetworkCookieJar*)self)->setAllCookies(cookieList_QList);
    }
}

// Base class handler implementation
void QNetworkCookieJar_QBaseSetAllCookies(QNetworkCookieJar* self, const libqt_list /* of QNetworkCookie* */ cookieList) {
    auto* vqnetworkcookiejar = dynamic_cast<VirtualQNetworkCookieJar*>(self);
    QList<QNetworkCookie> cookieList_QList;
    cookieList_QList.reserve(cookieList.len);
    QNetworkCookie** cookieList_arr = static_cast<QNetworkCookie**>(cookieList.data);
    for (size_t i = 0; i < cookieList.len; ++i) {
        cookieList_QList.push_back(*(cookieList_arr[i]));
    }
    if (vqnetworkcookiejar && vqnetworkcookiejar->isVirtualQNetworkCookieJar) {
        vqnetworkcookiejar->setQNetworkCookieJar_SetAllCookies_IsBase(true);
        vqnetworkcookiejar->setAllCookies(cookieList_QList);
    } else {
        ((VirtualQNetworkCookieJar*)self)->setAllCookies(cookieList_QList);
    }
}

// Auxiliary method to allow providing re-implementation
void QNetworkCookieJar_OnSetAllCookies(QNetworkCookieJar* self, intptr_t slot) {
    auto* vqnetworkcookiejar = dynamic_cast<VirtualQNetworkCookieJar*>(self);
    if (vqnetworkcookiejar && vqnetworkcookiejar->isVirtualQNetworkCookieJar) {
        vqnetworkcookiejar->setQNetworkCookieJar_SetAllCookies_Callback(reinterpret_cast<VirtualQNetworkCookieJar::QNetworkCookieJar_SetAllCookies_Callback>(slot));
    }
}

// Derived class handler implementation
QObject* QNetworkCookieJar_Sender(const QNetworkCookieJar* self) {
    auto* vqnetworkcookiejar = const_cast<VirtualQNetworkCookieJar*>(dynamic_cast<const VirtualQNetworkCookieJar*>(self));
    if (vqnetworkcookiejar && vqnetworkcookiejar->isVirtualQNetworkCookieJar) {
        return vqnetworkcookiejar->sender();
    } else {
        return ((VirtualQNetworkCookieJar*)self)->sender();
    }
}

// Base class handler implementation
QObject* QNetworkCookieJar_QBaseSender(const QNetworkCookieJar* self) {
    auto* vqnetworkcookiejar = const_cast<VirtualQNetworkCookieJar*>(dynamic_cast<const VirtualQNetworkCookieJar*>(self));
    if (vqnetworkcookiejar && vqnetworkcookiejar->isVirtualQNetworkCookieJar) {
        vqnetworkcookiejar->setQNetworkCookieJar_Sender_IsBase(true);
        return vqnetworkcookiejar->sender();
    } else {
        return ((VirtualQNetworkCookieJar*)self)->sender();
    }
}

// Auxiliary method to allow providing re-implementation
void QNetworkCookieJar_OnSender(const QNetworkCookieJar* self, intptr_t slot) {
    auto* vqnetworkcookiejar = const_cast<VirtualQNetworkCookieJar*>(dynamic_cast<const VirtualQNetworkCookieJar*>(self));
    if (vqnetworkcookiejar && vqnetworkcookiejar->isVirtualQNetworkCookieJar) {
        vqnetworkcookiejar->setQNetworkCookieJar_Sender_Callback(reinterpret_cast<VirtualQNetworkCookieJar::QNetworkCookieJar_Sender_Callback>(slot));
    }
}

// Derived class handler implementation
int QNetworkCookieJar_SenderSignalIndex(const QNetworkCookieJar* self) {
    auto* vqnetworkcookiejar = const_cast<VirtualQNetworkCookieJar*>(dynamic_cast<const VirtualQNetworkCookieJar*>(self));
    if (vqnetworkcookiejar && vqnetworkcookiejar->isVirtualQNetworkCookieJar) {
        return vqnetworkcookiejar->senderSignalIndex();
    } else {
        return ((VirtualQNetworkCookieJar*)self)->senderSignalIndex();
    }
}

// Base class handler implementation
int QNetworkCookieJar_QBaseSenderSignalIndex(const QNetworkCookieJar* self) {
    auto* vqnetworkcookiejar = const_cast<VirtualQNetworkCookieJar*>(dynamic_cast<const VirtualQNetworkCookieJar*>(self));
    if (vqnetworkcookiejar && vqnetworkcookiejar->isVirtualQNetworkCookieJar) {
        vqnetworkcookiejar->setQNetworkCookieJar_SenderSignalIndex_IsBase(true);
        return vqnetworkcookiejar->senderSignalIndex();
    } else {
        return ((VirtualQNetworkCookieJar*)self)->senderSignalIndex();
    }
}

// Auxiliary method to allow providing re-implementation
void QNetworkCookieJar_OnSenderSignalIndex(const QNetworkCookieJar* self, intptr_t slot) {
    auto* vqnetworkcookiejar = const_cast<VirtualQNetworkCookieJar*>(dynamic_cast<const VirtualQNetworkCookieJar*>(self));
    if (vqnetworkcookiejar && vqnetworkcookiejar->isVirtualQNetworkCookieJar) {
        vqnetworkcookiejar->setQNetworkCookieJar_SenderSignalIndex_Callback(reinterpret_cast<VirtualQNetworkCookieJar::QNetworkCookieJar_SenderSignalIndex_Callback>(slot));
    }
}

// Derived class handler implementation
int QNetworkCookieJar_Receivers(const QNetworkCookieJar* self, const char* signal) {
    auto* vqnetworkcookiejar = const_cast<VirtualQNetworkCookieJar*>(dynamic_cast<const VirtualQNetworkCookieJar*>(self));
    if (vqnetworkcookiejar && vqnetworkcookiejar->isVirtualQNetworkCookieJar) {
        return vqnetworkcookiejar->receivers(signal);
    } else {
        return ((VirtualQNetworkCookieJar*)self)->receivers(signal);
    }
}

// Base class handler implementation
int QNetworkCookieJar_QBaseReceivers(const QNetworkCookieJar* self, const char* signal) {
    auto* vqnetworkcookiejar = const_cast<VirtualQNetworkCookieJar*>(dynamic_cast<const VirtualQNetworkCookieJar*>(self));
    if (vqnetworkcookiejar && vqnetworkcookiejar->isVirtualQNetworkCookieJar) {
        vqnetworkcookiejar->setQNetworkCookieJar_Receivers_IsBase(true);
        return vqnetworkcookiejar->receivers(signal);
    } else {
        return ((VirtualQNetworkCookieJar*)self)->receivers(signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QNetworkCookieJar_OnReceivers(const QNetworkCookieJar* self, intptr_t slot) {
    auto* vqnetworkcookiejar = const_cast<VirtualQNetworkCookieJar*>(dynamic_cast<const VirtualQNetworkCookieJar*>(self));
    if (vqnetworkcookiejar && vqnetworkcookiejar->isVirtualQNetworkCookieJar) {
        vqnetworkcookiejar->setQNetworkCookieJar_Receivers_Callback(reinterpret_cast<VirtualQNetworkCookieJar::QNetworkCookieJar_Receivers_Callback>(slot));
    }
}

// Derived class handler implementation
bool QNetworkCookieJar_IsSignalConnected(const QNetworkCookieJar* self, const QMetaMethod* signal) {
    auto* vqnetworkcookiejar = const_cast<VirtualQNetworkCookieJar*>(dynamic_cast<const VirtualQNetworkCookieJar*>(self));
    if (vqnetworkcookiejar && vqnetworkcookiejar->isVirtualQNetworkCookieJar) {
        return vqnetworkcookiejar->isSignalConnected(*signal);
    } else {
        return ((VirtualQNetworkCookieJar*)self)->isSignalConnected(*signal);
    }
}

// Base class handler implementation
bool QNetworkCookieJar_QBaseIsSignalConnected(const QNetworkCookieJar* self, const QMetaMethod* signal) {
    auto* vqnetworkcookiejar = const_cast<VirtualQNetworkCookieJar*>(dynamic_cast<const VirtualQNetworkCookieJar*>(self));
    if (vqnetworkcookiejar && vqnetworkcookiejar->isVirtualQNetworkCookieJar) {
        vqnetworkcookiejar->setQNetworkCookieJar_IsSignalConnected_IsBase(true);
        return vqnetworkcookiejar->isSignalConnected(*signal);
    } else {
        return ((VirtualQNetworkCookieJar*)self)->isSignalConnected(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QNetworkCookieJar_OnIsSignalConnected(const QNetworkCookieJar* self, intptr_t slot) {
    auto* vqnetworkcookiejar = const_cast<VirtualQNetworkCookieJar*>(dynamic_cast<const VirtualQNetworkCookieJar*>(self));
    if (vqnetworkcookiejar && vqnetworkcookiejar->isVirtualQNetworkCookieJar) {
        vqnetworkcookiejar->setQNetworkCookieJar_IsSignalConnected_Callback(reinterpret_cast<VirtualQNetworkCookieJar::QNetworkCookieJar_IsSignalConnected_Callback>(slot));
    }
}

void QNetworkCookieJar_Delete(QNetworkCookieJar* self) {
    delete self;
}
