#pragma once
#ifndef SRC_LOCATIONC_LIBVIRTUALQGEOROUTEREPLY_H
#define SRC_LOCATIONC_LIBVIRTUALQGEOROUTEREPLY_H

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

// This class is a subclass of QGeoRouteReply so that we can call protected methods
class VirtualQGeoRouteReply final : public QGeoRouteReply {

  public:
    // Virtual class boolean flag
    bool isVirtualQGeoRouteReply = true;

    // Virtual class public types (including callbacks)
    using QGeoRouteReply_Metacall_Callback = int (*)(QGeoRouteReply*, int, int, void**);
    using QGeoRouteReply_Abort_Callback = void (*)();
    using QGeoRouteReply_Event_Callback = bool (*)(QGeoRouteReply*, QEvent*);
    using QGeoRouteReply_EventFilter_Callback = bool (*)(QGeoRouteReply*, QObject*, QEvent*);
    using QGeoRouteReply_TimerEvent_Callback = void (*)(QGeoRouteReply*, QTimerEvent*);
    using QGeoRouteReply_ChildEvent_Callback = void (*)(QGeoRouteReply*, QChildEvent*);
    using QGeoRouteReply_CustomEvent_Callback = void (*)(QGeoRouteReply*, QEvent*);
    using QGeoRouteReply_ConnectNotify_Callback = void (*)(QGeoRouteReply*, QMetaMethod*);
    using QGeoRouteReply_DisconnectNotify_Callback = void (*)(QGeoRouteReply*, QMetaMethod*);
    using QGeoRouteReply_SetError_Callback = void (*)(QGeoRouteReply*, int, libqt_string);
    using QGeoRouteReply_SetFinished_Callback = void (*)(QGeoRouteReply*, bool);
    using QGeoRouteReply_SetRoutes_Callback = void (*)(QGeoRouteReply*, libqt_list /* of QGeoRoute* */);
    using QGeoRouteReply_AddRoutes_Callback = void (*)(QGeoRouteReply*, libqt_list /* of QGeoRoute* */);
    using QGeoRouteReply_Sender_Callback = QObject* (*)();
    using QGeoRouteReply_SenderSignalIndex_Callback = int (*)();
    using QGeoRouteReply_Receivers_Callback = int (*)(const QGeoRouteReply*, const char*);
    using QGeoRouteReply_IsSignalConnected_Callback = bool (*)(const QGeoRouteReply*, QMetaMethod*);

  protected:
    // Instance callback storage
    QGeoRouteReply_Metacall_Callback qgeoroutereply_metacall_callback = nullptr;
    QGeoRouteReply_Abort_Callback qgeoroutereply_abort_callback = nullptr;
    QGeoRouteReply_Event_Callback qgeoroutereply_event_callback = nullptr;
    QGeoRouteReply_EventFilter_Callback qgeoroutereply_eventfilter_callback = nullptr;
    QGeoRouteReply_TimerEvent_Callback qgeoroutereply_timerevent_callback = nullptr;
    QGeoRouteReply_ChildEvent_Callback qgeoroutereply_childevent_callback = nullptr;
    QGeoRouteReply_CustomEvent_Callback qgeoroutereply_customevent_callback = nullptr;
    QGeoRouteReply_ConnectNotify_Callback qgeoroutereply_connectnotify_callback = nullptr;
    QGeoRouteReply_DisconnectNotify_Callback qgeoroutereply_disconnectnotify_callback = nullptr;
    QGeoRouteReply_SetError_Callback qgeoroutereply_seterror_callback = nullptr;
    QGeoRouteReply_SetFinished_Callback qgeoroutereply_setfinished_callback = nullptr;
    QGeoRouteReply_SetRoutes_Callback qgeoroutereply_setroutes_callback = nullptr;
    QGeoRouteReply_AddRoutes_Callback qgeoroutereply_addroutes_callback = nullptr;
    QGeoRouteReply_Sender_Callback qgeoroutereply_sender_callback = nullptr;
    QGeoRouteReply_SenderSignalIndex_Callback qgeoroutereply_sendersignalindex_callback = nullptr;
    QGeoRouteReply_Receivers_Callback qgeoroutereply_receivers_callback = nullptr;
    QGeoRouteReply_IsSignalConnected_Callback qgeoroutereply_issignalconnected_callback = nullptr;

    // Instance base flags
    mutable bool qgeoroutereply_metacall_isbase = false;
    mutable bool qgeoroutereply_abort_isbase = false;
    mutable bool qgeoroutereply_event_isbase = false;
    mutable bool qgeoroutereply_eventfilter_isbase = false;
    mutable bool qgeoroutereply_timerevent_isbase = false;
    mutable bool qgeoroutereply_childevent_isbase = false;
    mutable bool qgeoroutereply_customevent_isbase = false;
    mutable bool qgeoroutereply_connectnotify_isbase = false;
    mutable bool qgeoroutereply_disconnectnotify_isbase = false;
    mutable bool qgeoroutereply_seterror_isbase = false;
    mutable bool qgeoroutereply_setfinished_isbase = false;
    mutable bool qgeoroutereply_setroutes_isbase = false;
    mutable bool qgeoroutereply_addroutes_isbase = false;
    mutable bool qgeoroutereply_sender_isbase = false;
    mutable bool qgeoroutereply_sendersignalindex_isbase = false;
    mutable bool qgeoroutereply_receivers_isbase = false;
    mutable bool qgeoroutereply_issignalconnected_isbase = false;

  public:
    VirtualQGeoRouteReply(QGeoRouteReply::Error errorVal, const QString& errorString) : QGeoRouteReply(errorVal, errorString) {};
    VirtualQGeoRouteReply(QGeoRouteReply::Error errorVal, const QString& errorString, QObject* parent) : QGeoRouteReply(errorVal, errorString, parent) {};

    ~VirtualQGeoRouteReply() {
        qgeoroutereply_metacall_callback = nullptr;
        qgeoroutereply_abort_callback = nullptr;
        qgeoroutereply_event_callback = nullptr;
        qgeoroutereply_eventfilter_callback = nullptr;
        qgeoroutereply_timerevent_callback = nullptr;
        qgeoroutereply_childevent_callback = nullptr;
        qgeoroutereply_customevent_callback = nullptr;
        qgeoroutereply_connectnotify_callback = nullptr;
        qgeoroutereply_disconnectnotify_callback = nullptr;
        qgeoroutereply_seterror_callback = nullptr;
        qgeoroutereply_setfinished_callback = nullptr;
        qgeoroutereply_setroutes_callback = nullptr;
        qgeoroutereply_addroutes_callback = nullptr;
        qgeoroutereply_sender_callback = nullptr;
        qgeoroutereply_sendersignalindex_callback = nullptr;
        qgeoroutereply_receivers_callback = nullptr;
        qgeoroutereply_issignalconnected_callback = nullptr;
    }

    // Callback setters
    inline void setQGeoRouteReply_Metacall_Callback(QGeoRouteReply_Metacall_Callback cb) { qgeoroutereply_metacall_callback = cb; }
    inline void setQGeoRouteReply_Abort_Callback(QGeoRouteReply_Abort_Callback cb) { qgeoroutereply_abort_callback = cb; }
    inline void setQGeoRouteReply_Event_Callback(QGeoRouteReply_Event_Callback cb) { qgeoroutereply_event_callback = cb; }
    inline void setQGeoRouteReply_EventFilter_Callback(QGeoRouteReply_EventFilter_Callback cb) { qgeoroutereply_eventfilter_callback = cb; }
    inline void setQGeoRouteReply_TimerEvent_Callback(QGeoRouteReply_TimerEvent_Callback cb) { qgeoroutereply_timerevent_callback = cb; }
    inline void setQGeoRouteReply_ChildEvent_Callback(QGeoRouteReply_ChildEvent_Callback cb) { qgeoroutereply_childevent_callback = cb; }
    inline void setQGeoRouteReply_CustomEvent_Callback(QGeoRouteReply_CustomEvent_Callback cb) { qgeoroutereply_customevent_callback = cb; }
    inline void setQGeoRouteReply_ConnectNotify_Callback(QGeoRouteReply_ConnectNotify_Callback cb) { qgeoroutereply_connectnotify_callback = cb; }
    inline void setQGeoRouteReply_DisconnectNotify_Callback(QGeoRouteReply_DisconnectNotify_Callback cb) { qgeoroutereply_disconnectnotify_callback = cb; }
    inline void setQGeoRouteReply_SetError_Callback(QGeoRouteReply_SetError_Callback cb) { qgeoroutereply_seterror_callback = cb; }
    inline void setQGeoRouteReply_SetFinished_Callback(QGeoRouteReply_SetFinished_Callback cb) { qgeoroutereply_setfinished_callback = cb; }
    inline void setQGeoRouteReply_SetRoutes_Callback(QGeoRouteReply_SetRoutes_Callback cb) { qgeoroutereply_setroutes_callback = cb; }
    inline void setQGeoRouteReply_AddRoutes_Callback(QGeoRouteReply_AddRoutes_Callback cb) { qgeoroutereply_addroutes_callback = cb; }
    inline void setQGeoRouteReply_Sender_Callback(QGeoRouteReply_Sender_Callback cb) { qgeoroutereply_sender_callback = cb; }
    inline void setQGeoRouteReply_SenderSignalIndex_Callback(QGeoRouteReply_SenderSignalIndex_Callback cb) { qgeoroutereply_sendersignalindex_callback = cb; }
    inline void setQGeoRouteReply_Receivers_Callback(QGeoRouteReply_Receivers_Callback cb) { qgeoroutereply_receivers_callback = cb; }
    inline void setQGeoRouteReply_IsSignalConnected_Callback(QGeoRouteReply_IsSignalConnected_Callback cb) { qgeoroutereply_issignalconnected_callback = cb; }

    // Base flag setters
    inline void setQGeoRouteReply_Metacall_IsBase(bool value) const { qgeoroutereply_metacall_isbase = value; }
    inline void setQGeoRouteReply_Abort_IsBase(bool value) const { qgeoroutereply_abort_isbase = value; }
    inline void setQGeoRouteReply_Event_IsBase(bool value) const { qgeoroutereply_event_isbase = value; }
    inline void setQGeoRouteReply_EventFilter_IsBase(bool value) const { qgeoroutereply_eventfilter_isbase = value; }
    inline void setQGeoRouteReply_TimerEvent_IsBase(bool value) const { qgeoroutereply_timerevent_isbase = value; }
    inline void setQGeoRouteReply_ChildEvent_IsBase(bool value) const { qgeoroutereply_childevent_isbase = value; }
    inline void setQGeoRouteReply_CustomEvent_IsBase(bool value) const { qgeoroutereply_customevent_isbase = value; }
    inline void setQGeoRouteReply_ConnectNotify_IsBase(bool value) const { qgeoroutereply_connectnotify_isbase = value; }
    inline void setQGeoRouteReply_DisconnectNotify_IsBase(bool value) const { qgeoroutereply_disconnectnotify_isbase = value; }
    inline void setQGeoRouteReply_SetError_IsBase(bool value) const { qgeoroutereply_seterror_isbase = value; }
    inline void setQGeoRouteReply_SetFinished_IsBase(bool value) const { qgeoroutereply_setfinished_isbase = value; }
    inline void setQGeoRouteReply_SetRoutes_IsBase(bool value) const { qgeoroutereply_setroutes_isbase = value; }
    inline void setQGeoRouteReply_AddRoutes_IsBase(bool value) const { qgeoroutereply_addroutes_isbase = value; }
    inline void setQGeoRouteReply_Sender_IsBase(bool value) const { qgeoroutereply_sender_isbase = value; }
    inline void setQGeoRouteReply_SenderSignalIndex_IsBase(bool value) const { qgeoroutereply_sendersignalindex_isbase = value; }
    inline void setQGeoRouteReply_Receivers_IsBase(bool value) const { qgeoroutereply_receivers_isbase = value; }
    inline void setQGeoRouteReply_IsSignalConnected_IsBase(bool value) const { qgeoroutereply_issignalconnected_isbase = value; }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (qgeoroutereply_metacall_isbase) {
            qgeoroutereply_metacall_isbase = false;
            return QGeoRouteReply::qt_metacall(param1, param2, param3);
        } else if (qgeoroutereply_metacall_callback != nullptr) {
            int cbval1 = static_cast<int>(param1);
            int cbval2 = param2;
            void** cbval3 = param3;

            int callback_ret = qgeoroutereply_metacall_callback(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        } else {
            return QGeoRouteReply::qt_metacall(param1, param2, param3);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void abort() override {
        if (qgeoroutereply_abort_isbase) {
            qgeoroutereply_abort_isbase = false;
            QGeoRouteReply::abort();
        } else if (qgeoroutereply_abort_callback != nullptr) {
            qgeoroutereply_abort_callback();
        } else {
            QGeoRouteReply::abort();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* event) override {
        if (qgeoroutereply_event_isbase) {
            qgeoroutereply_event_isbase = false;
            return QGeoRouteReply::event(event);
        } else if (qgeoroutereply_event_callback != nullptr) {
            QEvent* cbval1 = event;

            bool callback_ret = qgeoroutereply_event_callback(this, cbval1);
            return callback_ret;
        } else {
            return QGeoRouteReply::event(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* watched, QEvent* event) override {
        if (qgeoroutereply_eventfilter_isbase) {
            qgeoroutereply_eventfilter_isbase = false;
            return QGeoRouteReply::eventFilter(watched, event);
        } else if (qgeoroutereply_eventfilter_callback != nullptr) {
            QObject* cbval1 = watched;
            QEvent* cbval2 = event;

            bool callback_ret = qgeoroutereply_eventfilter_callback(this, cbval1, cbval2);
            return callback_ret;
        } else {
            return QGeoRouteReply::eventFilter(watched, event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (qgeoroutereply_timerevent_isbase) {
            qgeoroutereply_timerevent_isbase = false;
            QGeoRouteReply::timerEvent(event);
        } else if (qgeoroutereply_timerevent_callback != nullptr) {
            QTimerEvent* cbval1 = event;

            qgeoroutereply_timerevent_callback(this, cbval1);
        } else {
            QGeoRouteReply::timerEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (qgeoroutereply_childevent_isbase) {
            qgeoroutereply_childevent_isbase = false;
            QGeoRouteReply::childEvent(event);
        } else if (qgeoroutereply_childevent_callback != nullptr) {
            QChildEvent* cbval1 = event;

            qgeoroutereply_childevent_callback(this, cbval1);
        } else {
            QGeoRouteReply::childEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (qgeoroutereply_customevent_isbase) {
            qgeoroutereply_customevent_isbase = false;
            QGeoRouteReply::customEvent(event);
        } else if (qgeoroutereply_customevent_callback != nullptr) {
            QEvent* cbval1 = event;

            qgeoroutereply_customevent_callback(this, cbval1);
        } else {
            QGeoRouteReply::customEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (qgeoroutereply_connectnotify_isbase) {
            qgeoroutereply_connectnotify_isbase = false;
            QGeoRouteReply::connectNotify(signal);
        } else if (qgeoroutereply_connectnotify_callback != nullptr) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            qgeoroutereply_connectnotify_callback(this, cbval1);
        } else {
            QGeoRouteReply::connectNotify(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (qgeoroutereply_disconnectnotify_isbase) {
            qgeoroutereply_disconnectnotify_isbase = false;
            QGeoRouteReply::disconnectNotify(signal);
        } else if (qgeoroutereply_disconnectnotify_callback != nullptr) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            qgeoroutereply_disconnectnotify_callback(this, cbval1);
        } else {
            QGeoRouteReply::disconnectNotify(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    void setError(QGeoRouteReply::Error errorVal, const QString& errorString) {
        if (qgeoroutereply_seterror_isbase) {
            qgeoroutereply_seterror_isbase = false;
            QGeoRouteReply::setError(errorVal, errorString);
        } else if (qgeoroutereply_seterror_callback != nullptr) {
            int cbval1 = static_cast<int>(errorVal);
            const QString errorString_ret = errorString;
            // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
            QByteArray errorString_b = errorString_ret.toUtf8();
            libqt_string errorString_str;
            errorString_str.len = errorString_b.length();
            errorString_str.data = static_cast<const char*>(malloc(errorString_str.len + 1));
            memcpy((void*)errorString_str.data, errorString_b.data(), errorString_str.len);
            ((char*)errorString_str.data)[errorString_str.len] = '\0';
            libqt_string cbval2 = errorString_str;

            qgeoroutereply_seterror_callback(this, cbval1, cbval2);
        } else {
            QGeoRouteReply::setError(errorVal, errorString);
        }
    }

    // Virtual method for C ABI access and custom callback
    void setFinished(bool finished) {
        if (qgeoroutereply_setfinished_isbase) {
            qgeoroutereply_setfinished_isbase = false;
            QGeoRouteReply::setFinished(finished);
        } else if (qgeoroutereply_setfinished_callback != nullptr) {
            bool cbval1 = finished;

            qgeoroutereply_setfinished_callback(this, cbval1);
        } else {
            QGeoRouteReply::setFinished(finished);
        }
    }

    // Virtual method for C ABI access and custom callback
    void setRoutes(const QList<QGeoRoute>& routes) {
        if (qgeoroutereply_setroutes_isbase) {
            qgeoroutereply_setroutes_isbase = false;
            QGeoRouteReply::setRoutes(routes);
        } else if (qgeoroutereply_setroutes_callback != nullptr) {
            const QList<QGeoRoute>& routes_ret = routes;
            // Convert QList<> from C++ memory to manually-managed C memory
            QGeoRoute** routes_arr = static_cast<QGeoRoute**>(malloc(sizeof(QGeoRoute*) * (routes_ret.size() + 1)));
            for (qsizetype i = 0; i < routes_ret.size(); ++i) {
                routes_arr[i] = new QGeoRoute(routes_ret[i]);
            }
            libqt_list routes_out;
            routes_out.len = routes_ret.size();
            routes_out.data = static_cast<void*>(routes_arr);
            libqt_list /* of QGeoRoute* */ cbval1 = routes_out;

            qgeoroutereply_setroutes_callback(this, cbval1);
        } else {
            QGeoRouteReply::setRoutes(routes);
        }
    }

    // Virtual method for C ABI access and custom callback
    void addRoutes(const QList<QGeoRoute>& routes) {
        if (qgeoroutereply_addroutes_isbase) {
            qgeoroutereply_addroutes_isbase = false;
            QGeoRouteReply::addRoutes(routes);
        } else if (qgeoroutereply_addroutes_callback != nullptr) {
            const QList<QGeoRoute>& routes_ret = routes;
            // Convert QList<> from C++ memory to manually-managed C memory
            QGeoRoute** routes_arr = static_cast<QGeoRoute**>(malloc(sizeof(QGeoRoute*) * (routes_ret.size() + 1)));
            for (qsizetype i = 0; i < routes_ret.size(); ++i) {
                routes_arr[i] = new QGeoRoute(routes_ret[i]);
            }
            libqt_list routes_out;
            routes_out.len = routes_ret.size();
            routes_out.data = static_cast<void*>(routes_arr);
            libqt_list /* of QGeoRoute* */ cbval1 = routes_out;

            qgeoroutereply_addroutes_callback(this, cbval1);
        } else {
            QGeoRouteReply::addRoutes(routes);
        }
    }

    // Virtual method for C ABI access and custom callback
    QObject* sender() const {
        if (qgeoroutereply_sender_isbase) {
            qgeoroutereply_sender_isbase = false;
            return QGeoRouteReply::sender();
        } else if (qgeoroutereply_sender_callback != nullptr) {
            QObject* callback_ret = qgeoroutereply_sender_callback();
            return callback_ret;
        } else {
            return QGeoRouteReply::sender();
        }
    }

    // Virtual method for C ABI access and custom callback
    int senderSignalIndex() const {
        if (qgeoroutereply_sendersignalindex_isbase) {
            qgeoroutereply_sendersignalindex_isbase = false;
            return QGeoRouteReply::senderSignalIndex();
        } else if (qgeoroutereply_sendersignalindex_callback != nullptr) {
            int callback_ret = qgeoroutereply_sendersignalindex_callback();
            return static_cast<int>(callback_ret);
        } else {
            return QGeoRouteReply::senderSignalIndex();
        }
    }

    // Virtual method for C ABI access and custom callback
    int receivers(const char* signal) const {
        if (qgeoroutereply_receivers_isbase) {
            qgeoroutereply_receivers_isbase = false;
            return QGeoRouteReply::receivers(signal);
        } else if (qgeoroutereply_receivers_callback != nullptr) {
            const char* cbval1 = (const char*)signal;

            int callback_ret = qgeoroutereply_receivers_callback(this, cbval1);
            return static_cast<int>(callback_ret);
        } else {
            return QGeoRouteReply::receivers(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    bool isSignalConnected(const QMetaMethod& signal) const {
        if (qgeoroutereply_issignalconnected_isbase) {
            qgeoroutereply_issignalconnected_isbase = false;
            return QGeoRouteReply::isSignalConnected(signal);
        } else if (qgeoroutereply_issignalconnected_callback != nullptr) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            bool callback_ret = qgeoroutereply_issignalconnected_callback(this, cbval1);
            return callback_ret;
        } else {
            return QGeoRouteReply::isSignalConnected(signal);
        }
    }

    // Friend functions
    friend void QGeoRouteReply_TimerEvent(QGeoRouteReply* self, QTimerEvent* event);
    friend void QGeoRouteReply_QBaseTimerEvent(QGeoRouteReply* self, QTimerEvent* event);
    friend void QGeoRouteReply_ChildEvent(QGeoRouteReply* self, QChildEvent* event);
    friend void QGeoRouteReply_QBaseChildEvent(QGeoRouteReply* self, QChildEvent* event);
    friend void QGeoRouteReply_CustomEvent(QGeoRouteReply* self, QEvent* event);
    friend void QGeoRouteReply_QBaseCustomEvent(QGeoRouteReply* self, QEvent* event);
    friend void QGeoRouteReply_ConnectNotify(QGeoRouteReply* self, const QMetaMethod* signal);
    friend void QGeoRouteReply_QBaseConnectNotify(QGeoRouteReply* self, const QMetaMethod* signal);
    friend void QGeoRouteReply_DisconnectNotify(QGeoRouteReply* self, const QMetaMethod* signal);
    friend void QGeoRouteReply_QBaseDisconnectNotify(QGeoRouteReply* self, const QMetaMethod* signal);
    friend void QGeoRouteReply_SetError(QGeoRouteReply* self, int errorVal, const libqt_string errorString);
    friend void QGeoRouteReply_QBaseSetError(QGeoRouteReply* self, int errorVal, const libqt_string errorString);
    friend void QGeoRouteReply_SetFinished(QGeoRouteReply* self, bool finished);
    friend void QGeoRouteReply_QBaseSetFinished(QGeoRouteReply* self, bool finished);
    friend void QGeoRouteReply_SetRoutes(QGeoRouteReply* self, const libqt_list /* of QGeoRoute* */ routes);
    friend void QGeoRouteReply_QBaseSetRoutes(QGeoRouteReply* self, const libqt_list /* of QGeoRoute* */ routes);
    friend void QGeoRouteReply_AddRoutes(QGeoRouteReply* self, const libqt_list /* of QGeoRoute* */ routes);
    friend void QGeoRouteReply_QBaseAddRoutes(QGeoRouteReply* self, const libqt_list /* of QGeoRoute* */ routes);
    friend QObject* QGeoRouteReply_Sender(const QGeoRouteReply* self);
    friend QObject* QGeoRouteReply_QBaseSender(const QGeoRouteReply* self);
    friend int QGeoRouteReply_SenderSignalIndex(const QGeoRouteReply* self);
    friend int QGeoRouteReply_QBaseSenderSignalIndex(const QGeoRouteReply* self);
    friend int QGeoRouteReply_Receivers(const QGeoRouteReply* self, const char* signal);
    friend int QGeoRouteReply_QBaseReceivers(const QGeoRouteReply* self, const char* signal);
    friend bool QGeoRouteReply_IsSignalConnected(const QGeoRouteReply* self, const QMetaMethod* signal);
    friend bool QGeoRouteReply_QBaseIsSignalConnected(const QGeoRouteReply* self, const QMetaMethod* signal);
};

#endif
