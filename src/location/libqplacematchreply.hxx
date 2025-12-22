#pragma once
#ifndef SRC_LOCATIONC_LIBVIRTUALQPLACEMATCHREPLY_H
#define SRC_LOCATIONC_LIBVIRTUALQPLACEMATCHREPLY_H

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

// This class is a subclass of QPlaceMatchReply so that we can call protected methods
class VirtualQPlaceMatchReply final : public QPlaceMatchReply {

  public:
    // Virtual class boolean flag
    bool isVirtualQPlaceMatchReply = true;

    // Virtual class public types (including callbacks)
    using QPlaceMatchReply_Metacall_Callback = int (*)(QPlaceMatchReply*, int, int, void**);
    using QPlaceMatchReply_Type_Callback = int (*)();
    using QPlaceMatchReply_Abort_Callback = void (*)();
    using QPlaceMatchReply_Event_Callback = bool (*)(QPlaceMatchReply*, QEvent*);
    using QPlaceMatchReply_EventFilter_Callback = bool (*)(QPlaceMatchReply*, QObject*, QEvent*);
    using QPlaceMatchReply_TimerEvent_Callback = void (*)(QPlaceMatchReply*, QTimerEvent*);
    using QPlaceMatchReply_ChildEvent_Callback = void (*)(QPlaceMatchReply*, QChildEvent*);
    using QPlaceMatchReply_CustomEvent_Callback = void (*)(QPlaceMatchReply*, QEvent*);
    using QPlaceMatchReply_ConnectNotify_Callback = void (*)(QPlaceMatchReply*, QMetaMethod*);
    using QPlaceMatchReply_DisconnectNotify_Callback = void (*)(QPlaceMatchReply*, QMetaMethod*);
    using QPlaceMatchReply_SetPlaces_Callback = void (*)(QPlaceMatchReply*, libqt_list /* of QPlace* */);
    using QPlaceMatchReply_SetRequest_Callback = void (*)(QPlaceMatchReply*, QPlaceMatchRequest*);
    using QPlaceMatchReply_SetFinished_Callback = void (*)(QPlaceMatchReply*, bool);
    using QPlaceMatchReply_SetError_Callback = void (*)(QPlaceMatchReply*, int, libqt_string);
    using QPlaceMatchReply_Sender_Callback = QObject* (*)();
    using QPlaceMatchReply_SenderSignalIndex_Callback = int (*)();
    using QPlaceMatchReply_Receivers_Callback = int (*)(const QPlaceMatchReply*, const char*);
    using QPlaceMatchReply_IsSignalConnected_Callback = bool (*)(const QPlaceMatchReply*, QMetaMethod*);

  protected:
    // Instance callback storage
    QPlaceMatchReply_Metacall_Callback qplacematchreply_metacall_callback = nullptr;
    QPlaceMatchReply_Type_Callback qplacematchreply_type_callback = nullptr;
    QPlaceMatchReply_Abort_Callback qplacematchreply_abort_callback = nullptr;
    QPlaceMatchReply_Event_Callback qplacematchreply_event_callback = nullptr;
    QPlaceMatchReply_EventFilter_Callback qplacematchreply_eventfilter_callback = nullptr;
    QPlaceMatchReply_TimerEvent_Callback qplacematchreply_timerevent_callback = nullptr;
    QPlaceMatchReply_ChildEvent_Callback qplacematchreply_childevent_callback = nullptr;
    QPlaceMatchReply_CustomEvent_Callback qplacematchreply_customevent_callback = nullptr;
    QPlaceMatchReply_ConnectNotify_Callback qplacematchreply_connectnotify_callback = nullptr;
    QPlaceMatchReply_DisconnectNotify_Callback qplacematchreply_disconnectnotify_callback = nullptr;
    QPlaceMatchReply_SetPlaces_Callback qplacematchreply_setplaces_callback = nullptr;
    QPlaceMatchReply_SetRequest_Callback qplacematchreply_setrequest_callback = nullptr;
    QPlaceMatchReply_SetFinished_Callback qplacematchreply_setfinished_callback = nullptr;
    QPlaceMatchReply_SetError_Callback qplacematchreply_seterror_callback = nullptr;
    QPlaceMatchReply_Sender_Callback qplacematchreply_sender_callback = nullptr;
    QPlaceMatchReply_SenderSignalIndex_Callback qplacematchreply_sendersignalindex_callback = nullptr;
    QPlaceMatchReply_Receivers_Callback qplacematchreply_receivers_callback = nullptr;
    QPlaceMatchReply_IsSignalConnected_Callback qplacematchreply_issignalconnected_callback = nullptr;

    // Instance base flags
    mutable bool qplacematchreply_metacall_isbase = false;
    mutable bool qplacematchreply_type_isbase = false;
    mutable bool qplacematchreply_abort_isbase = false;
    mutable bool qplacematchreply_event_isbase = false;
    mutable bool qplacematchreply_eventfilter_isbase = false;
    mutable bool qplacematchreply_timerevent_isbase = false;
    mutable bool qplacematchreply_childevent_isbase = false;
    mutable bool qplacematchreply_customevent_isbase = false;
    mutable bool qplacematchreply_connectnotify_isbase = false;
    mutable bool qplacematchreply_disconnectnotify_isbase = false;
    mutable bool qplacematchreply_setplaces_isbase = false;
    mutable bool qplacematchreply_setrequest_isbase = false;
    mutable bool qplacematchreply_setfinished_isbase = false;
    mutable bool qplacematchreply_seterror_isbase = false;
    mutable bool qplacematchreply_sender_isbase = false;
    mutable bool qplacematchreply_sendersignalindex_isbase = false;
    mutable bool qplacematchreply_receivers_isbase = false;
    mutable bool qplacematchreply_issignalconnected_isbase = false;

  public:
    VirtualQPlaceMatchReply() : QPlaceMatchReply() {};
    VirtualQPlaceMatchReply(QObject* parent) : QPlaceMatchReply(parent) {};

    ~VirtualQPlaceMatchReply() {
        qplacematchreply_metacall_callback = nullptr;
        qplacematchreply_type_callback = nullptr;
        qplacematchreply_abort_callback = nullptr;
        qplacematchreply_event_callback = nullptr;
        qplacematchreply_eventfilter_callback = nullptr;
        qplacematchreply_timerevent_callback = nullptr;
        qplacematchreply_childevent_callback = nullptr;
        qplacematchreply_customevent_callback = nullptr;
        qplacematchreply_connectnotify_callback = nullptr;
        qplacematchreply_disconnectnotify_callback = nullptr;
        qplacematchreply_setplaces_callback = nullptr;
        qplacematchreply_setrequest_callback = nullptr;
        qplacematchreply_setfinished_callback = nullptr;
        qplacematchreply_seterror_callback = nullptr;
        qplacematchreply_sender_callback = nullptr;
        qplacematchreply_sendersignalindex_callback = nullptr;
        qplacematchreply_receivers_callback = nullptr;
        qplacematchreply_issignalconnected_callback = nullptr;
    }

    // Callback setters
    inline void setQPlaceMatchReply_Metacall_Callback(QPlaceMatchReply_Metacall_Callback cb) { qplacematchreply_metacall_callback = cb; }
    inline void setQPlaceMatchReply_Type_Callback(QPlaceMatchReply_Type_Callback cb) { qplacematchreply_type_callback = cb; }
    inline void setQPlaceMatchReply_Abort_Callback(QPlaceMatchReply_Abort_Callback cb) { qplacematchreply_abort_callback = cb; }
    inline void setQPlaceMatchReply_Event_Callback(QPlaceMatchReply_Event_Callback cb) { qplacematchreply_event_callback = cb; }
    inline void setQPlaceMatchReply_EventFilter_Callback(QPlaceMatchReply_EventFilter_Callback cb) { qplacematchreply_eventfilter_callback = cb; }
    inline void setQPlaceMatchReply_TimerEvent_Callback(QPlaceMatchReply_TimerEvent_Callback cb) { qplacematchreply_timerevent_callback = cb; }
    inline void setQPlaceMatchReply_ChildEvent_Callback(QPlaceMatchReply_ChildEvent_Callback cb) { qplacematchreply_childevent_callback = cb; }
    inline void setQPlaceMatchReply_CustomEvent_Callback(QPlaceMatchReply_CustomEvent_Callback cb) { qplacematchreply_customevent_callback = cb; }
    inline void setQPlaceMatchReply_ConnectNotify_Callback(QPlaceMatchReply_ConnectNotify_Callback cb) { qplacematchreply_connectnotify_callback = cb; }
    inline void setQPlaceMatchReply_DisconnectNotify_Callback(QPlaceMatchReply_DisconnectNotify_Callback cb) { qplacematchreply_disconnectnotify_callback = cb; }
    inline void setQPlaceMatchReply_SetPlaces_Callback(QPlaceMatchReply_SetPlaces_Callback cb) { qplacematchreply_setplaces_callback = cb; }
    inline void setQPlaceMatchReply_SetRequest_Callback(QPlaceMatchReply_SetRequest_Callback cb) { qplacematchreply_setrequest_callback = cb; }
    inline void setQPlaceMatchReply_SetFinished_Callback(QPlaceMatchReply_SetFinished_Callback cb) { qplacematchreply_setfinished_callback = cb; }
    inline void setQPlaceMatchReply_SetError_Callback(QPlaceMatchReply_SetError_Callback cb) { qplacematchreply_seterror_callback = cb; }
    inline void setQPlaceMatchReply_Sender_Callback(QPlaceMatchReply_Sender_Callback cb) { qplacematchreply_sender_callback = cb; }
    inline void setQPlaceMatchReply_SenderSignalIndex_Callback(QPlaceMatchReply_SenderSignalIndex_Callback cb) { qplacematchreply_sendersignalindex_callback = cb; }
    inline void setQPlaceMatchReply_Receivers_Callback(QPlaceMatchReply_Receivers_Callback cb) { qplacematchreply_receivers_callback = cb; }
    inline void setQPlaceMatchReply_IsSignalConnected_Callback(QPlaceMatchReply_IsSignalConnected_Callback cb) { qplacematchreply_issignalconnected_callback = cb; }

    // Base flag setters
    inline void setQPlaceMatchReply_Metacall_IsBase(bool value) const { qplacematchreply_metacall_isbase = value; }
    inline void setQPlaceMatchReply_Type_IsBase(bool value) const { qplacematchreply_type_isbase = value; }
    inline void setQPlaceMatchReply_Abort_IsBase(bool value) const { qplacematchreply_abort_isbase = value; }
    inline void setQPlaceMatchReply_Event_IsBase(bool value) const { qplacematchreply_event_isbase = value; }
    inline void setQPlaceMatchReply_EventFilter_IsBase(bool value) const { qplacematchreply_eventfilter_isbase = value; }
    inline void setQPlaceMatchReply_TimerEvent_IsBase(bool value) const { qplacematchreply_timerevent_isbase = value; }
    inline void setQPlaceMatchReply_ChildEvent_IsBase(bool value) const { qplacematchreply_childevent_isbase = value; }
    inline void setQPlaceMatchReply_CustomEvent_IsBase(bool value) const { qplacematchreply_customevent_isbase = value; }
    inline void setQPlaceMatchReply_ConnectNotify_IsBase(bool value) const { qplacematchreply_connectnotify_isbase = value; }
    inline void setQPlaceMatchReply_DisconnectNotify_IsBase(bool value) const { qplacematchreply_disconnectnotify_isbase = value; }
    inline void setQPlaceMatchReply_SetPlaces_IsBase(bool value) const { qplacematchreply_setplaces_isbase = value; }
    inline void setQPlaceMatchReply_SetRequest_IsBase(bool value) const { qplacematchreply_setrequest_isbase = value; }
    inline void setQPlaceMatchReply_SetFinished_IsBase(bool value) const { qplacematchreply_setfinished_isbase = value; }
    inline void setQPlaceMatchReply_SetError_IsBase(bool value) const { qplacematchreply_seterror_isbase = value; }
    inline void setQPlaceMatchReply_Sender_IsBase(bool value) const { qplacematchreply_sender_isbase = value; }
    inline void setQPlaceMatchReply_SenderSignalIndex_IsBase(bool value) const { qplacematchreply_sendersignalindex_isbase = value; }
    inline void setQPlaceMatchReply_Receivers_IsBase(bool value) const { qplacematchreply_receivers_isbase = value; }
    inline void setQPlaceMatchReply_IsSignalConnected_IsBase(bool value) const { qplacematchreply_issignalconnected_isbase = value; }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (qplacematchreply_metacall_isbase) {
            qplacematchreply_metacall_isbase = false;
            return QPlaceMatchReply::qt_metacall(param1, param2, param3);
        } else if (qplacematchreply_metacall_callback != nullptr) {
            int cbval1 = static_cast<int>(param1);
            int cbval2 = param2;
            void** cbval3 = param3;

            int callback_ret = qplacematchreply_metacall_callback(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        } else {
            return QPlaceMatchReply::qt_metacall(param1, param2, param3);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QPlaceReply::Type type() const override {
        if (qplacematchreply_type_isbase) {
            qplacematchreply_type_isbase = false;
            return QPlaceMatchReply::type();
        } else if (qplacematchreply_type_callback != nullptr) {
            int callback_ret = qplacematchreply_type_callback();
            return static_cast<QPlaceReply::Type>(callback_ret);
        } else {
            return QPlaceMatchReply::type();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void abort() override {
        if (qplacematchreply_abort_isbase) {
            qplacematchreply_abort_isbase = false;
            QPlaceMatchReply::abort();
        } else if (qplacematchreply_abort_callback != nullptr) {
            qplacematchreply_abort_callback();
        } else {
            QPlaceMatchReply::abort();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* event) override {
        if (qplacematchreply_event_isbase) {
            qplacematchreply_event_isbase = false;
            return QPlaceMatchReply::event(event);
        } else if (qplacematchreply_event_callback != nullptr) {
            QEvent* cbval1 = event;

            bool callback_ret = qplacematchreply_event_callback(this, cbval1);
            return callback_ret;
        } else {
            return QPlaceMatchReply::event(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* watched, QEvent* event) override {
        if (qplacematchreply_eventfilter_isbase) {
            qplacematchreply_eventfilter_isbase = false;
            return QPlaceMatchReply::eventFilter(watched, event);
        } else if (qplacematchreply_eventfilter_callback != nullptr) {
            QObject* cbval1 = watched;
            QEvent* cbval2 = event;

            bool callback_ret = qplacematchreply_eventfilter_callback(this, cbval1, cbval2);
            return callback_ret;
        } else {
            return QPlaceMatchReply::eventFilter(watched, event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (qplacematchreply_timerevent_isbase) {
            qplacematchreply_timerevent_isbase = false;
            QPlaceMatchReply::timerEvent(event);
        } else if (qplacematchreply_timerevent_callback != nullptr) {
            QTimerEvent* cbval1 = event;

            qplacematchreply_timerevent_callback(this, cbval1);
        } else {
            QPlaceMatchReply::timerEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (qplacematchreply_childevent_isbase) {
            qplacematchreply_childevent_isbase = false;
            QPlaceMatchReply::childEvent(event);
        } else if (qplacematchreply_childevent_callback != nullptr) {
            QChildEvent* cbval1 = event;

            qplacematchreply_childevent_callback(this, cbval1);
        } else {
            QPlaceMatchReply::childEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (qplacematchreply_customevent_isbase) {
            qplacematchreply_customevent_isbase = false;
            QPlaceMatchReply::customEvent(event);
        } else if (qplacematchreply_customevent_callback != nullptr) {
            QEvent* cbval1 = event;

            qplacematchreply_customevent_callback(this, cbval1);
        } else {
            QPlaceMatchReply::customEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (qplacematchreply_connectnotify_isbase) {
            qplacematchreply_connectnotify_isbase = false;
            QPlaceMatchReply::connectNotify(signal);
        } else if (qplacematchreply_connectnotify_callback != nullptr) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            qplacematchreply_connectnotify_callback(this, cbval1);
        } else {
            QPlaceMatchReply::connectNotify(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (qplacematchreply_disconnectnotify_isbase) {
            qplacematchreply_disconnectnotify_isbase = false;
            QPlaceMatchReply::disconnectNotify(signal);
        } else if (qplacematchreply_disconnectnotify_callback != nullptr) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            qplacematchreply_disconnectnotify_callback(this, cbval1);
        } else {
            QPlaceMatchReply::disconnectNotify(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    void setPlaces(const QList<QPlace>& results) {
        if (qplacematchreply_setplaces_isbase) {
            qplacematchreply_setplaces_isbase = false;
            QPlaceMatchReply::setPlaces(results);
        } else if (qplacematchreply_setplaces_callback != nullptr) {
            const QList<QPlace>& results_ret = results;
            // Convert QList<> from C++ memory to manually-managed C memory
            QPlace** results_arr = static_cast<QPlace**>(malloc(sizeof(QPlace*) * (results_ret.size() + 1)));
            for (qsizetype i = 0; i < results_ret.size(); ++i) {
                results_arr[i] = new QPlace(results_ret[i]);
            }
            libqt_list results_out;
            results_out.len = results_ret.size();
            results_out.data = static_cast<void*>(results_arr);
            libqt_list /* of QPlace* */ cbval1 = results_out;

            qplacematchreply_setplaces_callback(this, cbval1);
        } else {
            QPlaceMatchReply::setPlaces(results);
        }
    }

    // Virtual method for C ABI access and custom callback
    void setRequest(const QPlaceMatchRequest& request) {
        if (qplacematchreply_setrequest_isbase) {
            qplacematchreply_setrequest_isbase = false;
            QPlaceMatchReply::setRequest(request);
        } else if (qplacematchreply_setrequest_callback != nullptr) {
            const QPlaceMatchRequest& request_ret = request;
            // Cast returned reference into pointer
            QPlaceMatchRequest* cbval1 = const_cast<QPlaceMatchRequest*>(&request_ret);

            qplacematchreply_setrequest_callback(this, cbval1);
        } else {
            QPlaceMatchReply::setRequest(request);
        }
    }

    // Virtual method for C ABI access and custom callback
    void setFinished(bool finished) {
        if (qplacematchreply_setfinished_isbase) {
            qplacematchreply_setfinished_isbase = false;
            QPlaceMatchReply::setFinished(finished);
        } else if (qplacematchreply_setfinished_callback != nullptr) {
            bool cbval1 = finished;

            qplacematchreply_setfinished_callback(this, cbval1);
        } else {
            QPlaceMatchReply::setFinished(finished);
        }
    }

    // Virtual method for C ABI access and custom callback
    void setError(QPlaceReply::Error errorVal, const QString& errorString) {
        if (qplacematchreply_seterror_isbase) {
            qplacematchreply_seterror_isbase = false;
            QPlaceMatchReply::setError(errorVal, errorString);
        } else if (qplacematchreply_seterror_callback != nullptr) {
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

            qplacematchreply_seterror_callback(this, cbval1, cbval2);
        } else {
            QPlaceMatchReply::setError(errorVal, errorString);
        }
    }

    // Virtual method for C ABI access and custom callback
    QObject* sender() const {
        if (qplacematchreply_sender_isbase) {
            qplacematchreply_sender_isbase = false;
            return QPlaceMatchReply::sender();
        } else if (qplacematchreply_sender_callback != nullptr) {
            QObject* callback_ret = qplacematchreply_sender_callback();
            return callback_ret;
        } else {
            return QPlaceMatchReply::sender();
        }
    }

    // Virtual method for C ABI access and custom callback
    int senderSignalIndex() const {
        if (qplacematchreply_sendersignalindex_isbase) {
            qplacematchreply_sendersignalindex_isbase = false;
            return QPlaceMatchReply::senderSignalIndex();
        } else if (qplacematchreply_sendersignalindex_callback != nullptr) {
            int callback_ret = qplacematchreply_sendersignalindex_callback();
            return static_cast<int>(callback_ret);
        } else {
            return QPlaceMatchReply::senderSignalIndex();
        }
    }

    // Virtual method for C ABI access and custom callback
    int receivers(const char* signal) const {
        if (qplacematchreply_receivers_isbase) {
            qplacematchreply_receivers_isbase = false;
            return QPlaceMatchReply::receivers(signal);
        } else if (qplacematchreply_receivers_callback != nullptr) {
            const char* cbval1 = (const char*)signal;

            int callback_ret = qplacematchreply_receivers_callback(this, cbval1);
            return static_cast<int>(callback_ret);
        } else {
            return QPlaceMatchReply::receivers(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    bool isSignalConnected(const QMetaMethod& signal) const {
        if (qplacematchreply_issignalconnected_isbase) {
            qplacematchreply_issignalconnected_isbase = false;
            return QPlaceMatchReply::isSignalConnected(signal);
        } else if (qplacematchreply_issignalconnected_callback != nullptr) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            bool callback_ret = qplacematchreply_issignalconnected_callback(this, cbval1);
            return callback_ret;
        } else {
            return QPlaceMatchReply::isSignalConnected(signal);
        }
    }

    // Friend functions
    friend void QPlaceMatchReply_TimerEvent(QPlaceMatchReply* self, QTimerEvent* event);
    friend void QPlaceMatchReply_QBaseTimerEvent(QPlaceMatchReply* self, QTimerEvent* event);
    friend void QPlaceMatchReply_ChildEvent(QPlaceMatchReply* self, QChildEvent* event);
    friend void QPlaceMatchReply_QBaseChildEvent(QPlaceMatchReply* self, QChildEvent* event);
    friend void QPlaceMatchReply_CustomEvent(QPlaceMatchReply* self, QEvent* event);
    friend void QPlaceMatchReply_QBaseCustomEvent(QPlaceMatchReply* self, QEvent* event);
    friend void QPlaceMatchReply_ConnectNotify(QPlaceMatchReply* self, const QMetaMethod* signal);
    friend void QPlaceMatchReply_QBaseConnectNotify(QPlaceMatchReply* self, const QMetaMethod* signal);
    friend void QPlaceMatchReply_DisconnectNotify(QPlaceMatchReply* self, const QMetaMethod* signal);
    friend void QPlaceMatchReply_QBaseDisconnectNotify(QPlaceMatchReply* self, const QMetaMethod* signal);
    friend void QPlaceMatchReply_SetPlaces(QPlaceMatchReply* self, const libqt_list /* of QPlace* */ results);
    friend void QPlaceMatchReply_QBaseSetPlaces(QPlaceMatchReply* self, const libqt_list /* of QPlace* */ results);
    friend void QPlaceMatchReply_SetRequest(QPlaceMatchReply* self, const QPlaceMatchRequest* request);
    friend void QPlaceMatchReply_QBaseSetRequest(QPlaceMatchReply* self, const QPlaceMatchRequest* request);
    friend void QPlaceMatchReply_SetFinished(QPlaceMatchReply* self, bool finished);
    friend void QPlaceMatchReply_QBaseSetFinished(QPlaceMatchReply* self, bool finished);
    friend void QPlaceMatchReply_SetError(QPlaceMatchReply* self, int errorVal, const libqt_string errorString);
    friend void QPlaceMatchReply_QBaseSetError(QPlaceMatchReply* self, int errorVal, const libqt_string errorString);
    friend QObject* QPlaceMatchReply_Sender(const QPlaceMatchReply* self);
    friend QObject* QPlaceMatchReply_QBaseSender(const QPlaceMatchReply* self);
    friend int QPlaceMatchReply_SenderSignalIndex(const QPlaceMatchReply* self);
    friend int QPlaceMatchReply_QBaseSenderSignalIndex(const QPlaceMatchReply* self);
    friend int QPlaceMatchReply_Receivers(const QPlaceMatchReply* self, const char* signal);
    friend int QPlaceMatchReply_QBaseReceivers(const QPlaceMatchReply* self, const char* signal);
    friend bool QPlaceMatchReply_IsSignalConnected(const QPlaceMatchReply* self, const QMetaMethod* signal);
    friend bool QPlaceMatchReply_QBaseIsSignalConnected(const QPlaceMatchReply* self, const QMetaMethod* signal);
};

#endif
