#pragma once
#ifndef NETWORK_LIBQNETWORKCOOKIEJAR_HXX
#define NETWORK_LIBQNETWORKCOOKIEJAR_HXX

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

// This class is a subclass of QNetworkCookieJar
class VirtualQNetworkCookieJar final : public QNetworkCookieJar {
  public:
    // Virtual class public types (including callbacks and access types)
    using QNetworkCookieJar_MetaObject_Callback = QMetaObject* (*)(const QNetworkCookieJar*);
    using QNetworkCookieJar_Metacast_Callback = void* (*)(QNetworkCookieJar*, const char*);
    using QNetworkCookieJar_Metacall_Callback = int (*)(QNetworkCookieJar*, int, int, void**);
    using QNetworkCookieJar_CookiesForUrl_Callback = libqt_list /* of QNetworkCookie* */ (*)(const QNetworkCookieJar*, QUrl*);
    using QNetworkCookieJar_SetCookiesFromUrl_Callback = bool (*)(QNetworkCookieJar*, libqt_list /* of QNetworkCookie* */, QUrl*);
    using QNetworkCookieJar_InsertCookie_Callback = bool (*)(QNetworkCookieJar*, QNetworkCookie*);
    using QNetworkCookieJar_UpdateCookie_Callback = bool (*)(QNetworkCookieJar*, QNetworkCookie*);
    using QNetworkCookieJar_DeleteCookie_Callback = bool (*)(QNetworkCookieJar*, QNetworkCookie*);
    using QNetworkCookieJar_ValidateCookie_Callback = bool (*)(const QNetworkCookieJar*, QNetworkCookie*, QUrl*);
    using QNetworkCookieJar_Event_Callback = bool (*)(QNetworkCookieJar*, QEvent*);
    using QNetworkCookieJar_EventFilter_Callback = bool (*)(QNetworkCookieJar*, QObject*, QEvent*);
    using QNetworkCookieJar_TimerEvent_Callback = void (*)(QNetworkCookieJar*, QTimerEvent*);
    using QNetworkCookieJar_ChildEvent_Callback = void (*)(QNetworkCookieJar*, QChildEvent*);
    using QNetworkCookieJar_CustomEvent_Callback = void (*)(QNetworkCookieJar*, QEvent*);
    using QNetworkCookieJar_ConnectNotify_Callback = void (*)(QNetworkCookieJar*, QMetaMethod*);
    using QNetworkCookieJar_DisconnectNotify_Callback = void (*)(QNetworkCookieJar*, QMetaMethod*);
    using QNetworkCookieJar::allCookies;
    using QNetworkCookieJar::isSignalConnected;
    using QNetworkCookieJar::receivers;
    using QNetworkCookieJar::sender;
    using QNetworkCookieJar::senderSignalIndex;
    using QNetworkCookieJar::setAllCookies;

    // Instance callback storage
    QNetworkCookieJar_MetaObject_Callback qnetworkcookiejar_metaobject_callback = nullptr;
    QNetworkCookieJar_Metacast_Callback qnetworkcookiejar_metacast_callback = nullptr;
    QNetworkCookieJar_Metacall_Callback qnetworkcookiejar_metacall_callback = nullptr;
    QNetworkCookieJar_CookiesForUrl_Callback qnetworkcookiejar_cookiesforurl_callback = nullptr;
    QNetworkCookieJar_SetCookiesFromUrl_Callback qnetworkcookiejar_setcookiesfromurl_callback = nullptr;
    QNetworkCookieJar_InsertCookie_Callback qnetworkcookiejar_insertcookie_callback = nullptr;
    QNetworkCookieJar_UpdateCookie_Callback qnetworkcookiejar_updatecookie_callback = nullptr;
    QNetworkCookieJar_DeleteCookie_Callback qnetworkcookiejar_deletecookie_callback = nullptr;
    QNetworkCookieJar_ValidateCookie_Callback qnetworkcookiejar_validatecookie_callback = nullptr;
    QNetworkCookieJar_Event_Callback qnetworkcookiejar_event_callback = nullptr;
    QNetworkCookieJar_EventFilter_Callback qnetworkcookiejar_eventfilter_callback = nullptr;
    QNetworkCookieJar_TimerEvent_Callback qnetworkcookiejar_timerevent_callback = nullptr;
    QNetworkCookieJar_ChildEvent_Callback qnetworkcookiejar_childevent_callback = nullptr;
    QNetworkCookieJar_CustomEvent_Callback qnetworkcookiejar_customevent_callback = nullptr;
    QNetworkCookieJar_ConnectNotify_Callback qnetworkcookiejar_connectnotify_callback = nullptr;
    QNetworkCookieJar_DisconnectNotify_Callback qnetworkcookiejar_disconnectnotify_callback = nullptr;

    // Access struct
    struct Base : QNetworkCookieJar {
        using QNetworkCookieJar::childEvent;
        using QNetworkCookieJar::connectNotify;
        using QNetworkCookieJar::customEvent;
        using QNetworkCookieJar::disconnectNotify;
        using QNetworkCookieJar::timerEvent;
        using QNetworkCookieJar::validateCookie;
    };

    VirtualQNetworkCookieJar() : QNetworkCookieJar() {};
    VirtualQNetworkCookieJar(QObject* parent) : QNetworkCookieJar(parent) {};

    // Virtual method for C ABI access and custom callback
    virtual const QMetaObject* metaObject() const override {
        if (qnetworkcookiejar_metaobject_callback) {
            QMetaObject* callback_ret = qnetworkcookiejar_metaobject_callback(this);
            return callback_ret;
        }
        return QNetworkCookieJar::metaObject();
    }

    // Virtual method for C ABI access and custom callback
    virtual void* qt_metacast(const char* param1) override {
        if (qnetworkcookiejar_metacast_callback) {
            const char* cbval1 = (const char*)param1;
            void* callback_ret = qnetworkcookiejar_metacast_callback(this, cbval1);
            return callback_ret;
        }
        return QNetworkCookieJar::qt_metacast(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (qnetworkcookiejar_metacall_callback) {
            int cbval1 = static_cast<int>(param1);
            int cbval2 = param2;
            void** cbval3 = param3;
            int callback_ret = qnetworkcookiejar_metacall_callback(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        }
        return QNetworkCookieJar::qt_metacall(param1, param2, param3);
    }

    // Virtual method for C ABI access and custom callback
    virtual QList<QNetworkCookie> cookiesForUrl(const QUrl& url) const override {
        if (qnetworkcookiejar_cookiesforurl_callback) {
            const QUrl& url_ret = url;
            // Cast returned reference into pointer
            QUrl* cbval1 = const_cast<QUrl*>(&url_ret);
            libqt_list /* of QNetworkCookie* */ callback_ret = qnetworkcookiejar_cookiesforurl_callback(this, cbval1);
            QList<QNetworkCookie> callback_ret_QList;
            callback_ret_QList.reserve(callback_ret.len);
            QNetworkCookie** callback_ret_arr = static_cast<QNetworkCookie**>(callback_ret.data);
            for (size_t i = 0; i < callback_ret.len; ++i) {
                callback_ret_QList.push_back(*(callback_ret_arr[i]));
            }
            libqt_free(callback_ret.data);
            return callback_ret_QList;
        }
        return QNetworkCookieJar::cookiesForUrl(url);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool setCookiesFromUrl(const QList<QNetworkCookie>& cookieList, const QUrl& url) override {
        if (qnetworkcookiejar_setcookiesfromurl_callback) {
            const QList<QNetworkCookie>& cookieList_ret = cookieList;
            // Convert QList<> from C++ memory to manually-managed C memory
            QNetworkCookie** cookieList_arr = static_cast<QNetworkCookie**>(malloc(sizeof(QNetworkCookie*) * (cookieList_ret.size())));
            for (qsizetype i = 0; i < cookieList_ret.size(); ++i) {
                cookieList_arr[i] = new QNetworkCookie(cookieList_ret[i]);
            }
            libqt_list cookieList_out;
            cookieList_out.len = cookieList_ret.size();
            cookieList_out.data = static_cast<void*>(cookieList_arr);
            libqt_list /* of QNetworkCookie* */ cbval1 = cookieList_out;
            const QUrl& url_ret = url;
            // Cast returned reference into pointer
            QUrl* cbval2 = const_cast<QUrl*>(&url_ret);
            bool callback_ret = qnetworkcookiejar_setcookiesfromurl_callback(this, cbval1, cbval2);
            free(cookieList_arr);
            return callback_ret;
        }
        return QNetworkCookieJar::setCookiesFromUrl(cookieList, url);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool insertCookie(const QNetworkCookie& cookie) override {
        if (qnetworkcookiejar_insertcookie_callback) {
            const QNetworkCookie& cookie_ret = cookie;
            // Cast returned reference into pointer
            QNetworkCookie* cbval1 = const_cast<QNetworkCookie*>(&cookie_ret);
            bool callback_ret = qnetworkcookiejar_insertcookie_callback(this, cbval1);
            return callback_ret;
        }
        return QNetworkCookieJar::insertCookie(cookie);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool updateCookie(const QNetworkCookie& cookie) override {
        if (qnetworkcookiejar_updatecookie_callback) {
            const QNetworkCookie& cookie_ret = cookie;
            // Cast returned reference into pointer
            QNetworkCookie* cbval1 = const_cast<QNetworkCookie*>(&cookie_ret);
            bool callback_ret = qnetworkcookiejar_updatecookie_callback(this, cbval1);
            return callback_ret;
        }
        return QNetworkCookieJar::updateCookie(cookie);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool deleteCookie(const QNetworkCookie& cookie) override {
        if (qnetworkcookiejar_deletecookie_callback) {
            const QNetworkCookie& cookie_ret = cookie;
            // Cast returned reference into pointer
            QNetworkCookie* cbval1 = const_cast<QNetworkCookie*>(&cookie_ret);
            bool callback_ret = qnetworkcookiejar_deletecookie_callback(this, cbval1);
            return callback_ret;
        }
        return QNetworkCookieJar::deleteCookie(cookie);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool validateCookie(const QNetworkCookie& cookie, const QUrl& url) const override {
        if (qnetworkcookiejar_validatecookie_callback) {
            const QNetworkCookie& cookie_ret = cookie;
            // Cast returned reference into pointer
            QNetworkCookie* cbval1 = const_cast<QNetworkCookie*>(&cookie_ret);
            const QUrl& url_ret = url;
            // Cast returned reference into pointer
            QUrl* cbval2 = const_cast<QUrl*>(&url_ret);
            bool callback_ret = qnetworkcookiejar_validatecookie_callback(this, cbval1, cbval2);
            return callback_ret;
        }
        return QNetworkCookieJar::validateCookie(cookie, url);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* event) override {
        if (qnetworkcookiejar_event_callback) {
            QEvent* cbval1 = event;
            bool callback_ret = qnetworkcookiejar_event_callback(this, cbval1);
            return callback_ret;
        }
        return QNetworkCookieJar::event(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* watched, QEvent* event) override {
        if (qnetworkcookiejar_eventfilter_callback) {
            QObject* cbval1 = watched;
            QEvent* cbval2 = event;
            bool callback_ret = qnetworkcookiejar_eventfilter_callback(this, cbval1, cbval2);
            return callback_ret;
        }
        return QNetworkCookieJar::eventFilter(watched, event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (qnetworkcookiejar_timerevent_callback) {
            QTimerEvent* cbval1 = event;
            qnetworkcookiejar_timerevent_callback(this, cbval1);
            return;
        }
        QNetworkCookieJar::timerEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (qnetworkcookiejar_childevent_callback) {
            QChildEvent* cbval1 = event;
            qnetworkcookiejar_childevent_callback(this, cbval1);
            return;
        }
        QNetworkCookieJar::childEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (qnetworkcookiejar_customevent_callback) {
            QEvent* cbval1 = event;
            qnetworkcookiejar_customevent_callback(this, cbval1);
            return;
        }
        QNetworkCookieJar::customEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (qnetworkcookiejar_connectnotify_callback) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            qnetworkcookiejar_connectnotify_callback(this, cbval1);
            return;
        }
        QNetworkCookieJar::connectNotify(signal);
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (qnetworkcookiejar_disconnectnotify_callback) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            qnetworkcookiejar_disconnectnotify_callback(this, cbval1);
            return;
        }
        QNetworkCookieJar::disconnectNotify(signal);
    }

    // Friend functions
    friend bool QNetworkCookieJar_SuperValidateCookie(const QNetworkCookieJar* self, const QNetworkCookie* cookie, const QUrl* url);
    friend void QNetworkCookieJar_SuperTimerEvent(QNetworkCookieJar* self, QTimerEvent* event);
    friend void QNetworkCookieJar_SuperChildEvent(QNetworkCookieJar* self, QChildEvent* event);
    friend void QNetworkCookieJar_SuperCustomEvent(QNetworkCookieJar* self, QEvent* event);
    friend void QNetworkCookieJar_SuperConnectNotify(QNetworkCookieJar* self, const QMetaMethod* signal);
    friend void QNetworkCookieJar_SuperDisconnectNotify(QNetworkCookieJar* self, const QMetaMethod* signal);
};

#endif
