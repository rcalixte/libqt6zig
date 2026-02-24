#pragma once
#ifndef SRC_LOCATIONC_LIBVIRTUALQPLACESEARCHREPLY_H
#define SRC_LOCATIONC_LIBVIRTUALQPLACESEARCHREPLY_H

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

// This class is a subclass of QPlaceSearchReply so that we can call protected methods
class VirtualQPlaceSearchReply final : public QPlaceSearchReply {

  public:
    // Virtual class boolean flag
    bool isVirtualQPlaceSearchReply = true;

    // Virtual class public types (including callbacks)
    using QPlaceSearchReply_MetaObject_Callback = QMetaObject* (*)();
    using QPlaceSearchReply_Metacast_Callback = void* (*)(QPlaceSearchReply*, const char*);
    using QPlaceSearchReply_Metacall_Callback = int (*)(QPlaceSearchReply*, int, int, void**);
    using QPlaceSearchReply_Type_Callback = int (*)();
    using QPlaceSearchReply_Abort_Callback = void (*)();
    using QPlaceSearchReply_Event_Callback = bool (*)(QPlaceSearchReply*, QEvent*);
    using QPlaceSearchReply_EventFilter_Callback = bool (*)(QPlaceSearchReply*, QObject*, QEvent*);
    using QPlaceSearchReply_TimerEvent_Callback = void (*)(QPlaceSearchReply*, QTimerEvent*);
    using QPlaceSearchReply_ChildEvent_Callback = void (*)(QPlaceSearchReply*, QChildEvent*);
    using QPlaceSearchReply_CustomEvent_Callback = void (*)(QPlaceSearchReply*, QEvent*);
    using QPlaceSearchReply_ConnectNotify_Callback = void (*)(QPlaceSearchReply*, QMetaMethod*);
    using QPlaceSearchReply_DisconnectNotify_Callback = void (*)(QPlaceSearchReply*, QMetaMethod*);
    using QPlaceSearchReply_SetResults_Callback = void (*)(QPlaceSearchReply*, libqt_list /* of QPlaceSearchResult* */);
    using QPlaceSearchReply_SetRequest_Callback = void (*)(QPlaceSearchReply*, QPlaceSearchRequest*);
    using QPlaceSearchReply_SetPreviousPageRequest_Callback = void (*)(QPlaceSearchReply*, QPlaceSearchRequest*);
    using QPlaceSearchReply_SetNextPageRequest_Callback = void (*)(QPlaceSearchReply*, QPlaceSearchRequest*);
    using QPlaceSearchReply_SetFinished_Callback = void (*)(QPlaceSearchReply*, bool);
    using QPlaceSearchReply_SetError_Callback = void (*)(QPlaceSearchReply*, int, const char*);
    using QPlaceSearchReply_Sender_Callback = QObject* (*)();
    using QPlaceSearchReply_SenderSignalIndex_Callback = int (*)();
    using QPlaceSearchReply_Receivers_Callback = int (*)(const QPlaceSearchReply*, const char*);
    using QPlaceSearchReply_IsSignalConnected_Callback = bool (*)(const QPlaceSearchReply*, QMetaMethod*);

  protected:
    // Instance callback storage
    QPlaceSearchReply_MetaObject_Callback qplacesearchreply_metaobject_callback = nullptr;
    QPlaceSearchReply_Metacast_Callback qplacesearchreply_metacast_callback = nullptr;
    QPlaceSearchReply_Metacall_Callback qplacesearchreply_metacall_callback = nullptr;
    QPlaceSearchReply_Type_Callback qplacesearchreply_type_callback = nullptr;
    QPlaceSearchReply_Abort_Callback qplacesearchreply_abort_callback = nullptr;
    QPlaceSearchReply_Event_Callback qplacesearchreply_event_callback = nullptr;
    QPlaceSearchReply_EventFilter_Callback qplacesearchreply_eventfilter_callback = nullptr;
    QPlaceSearchReply_TimerEvent_Callback qplacesearchreply_timerevent_callback = nullptr;
    QPlaceSearchReply_ChildEvent_Callback qplacesearchreply_childevent_callback = nullptr;
    QPlaceSearchReply_CustomEvent_Callback qplacesearchreply_customevent_callback = nullptr;
    QPlaceSearchReply_ConnectNotify_Callback qplacesearchreply_connectnotify_callback = nullptr;
    QPlaceSearchReply_DisconnectNotify_Callback qplacesearchreply_disconnectnotify_callback = nullptr;
    QPlaceSearchReply_SetResults_Callback qplacesearchreply_setresults_callback = nullptr;
    QPlaceSearchReply_SetRequest_Callback qplacesearchreply_setrequest_callback = nullptr;
    QPlaceSearchReply_SetPreviousPageRequest_Callback qplacesearchreply_setpreviouspagerequest_callback = nullptr;
    QPlaceSearchReply_SetNextPageRequest_Callback qplacesearchreply_setnextpagerequest_callback = nullptr;
    QPlaceSearchReply_SetFinished_Callback qplacesearchreply_setfinished_callback = nullptr;
    QPlaceSearchReply_SetError_Callback qplacesearchreply_seterror_callback = nullptr;
    QPlaceSearchReply_Sender_Callback qplacesearchreply_sender_callback = nullptr;
    QPlaceSearchReply_SenderSignalIndex_Callback qplacesearchreply_sendersignalindex_callback = nullptr;
    QPlaceSearchReply_Receivers_Callback qplacesearchreply_receivers_callback = nullptr;
    QPlaceSearchReply_IsSignalConnected_Callback qplacesearchreply_issignalconnected_callback = nullptr;

    // Instance base flags
    mutable bool qplacesearchreply_metaobject_isbase = false;
    mutable bool qplacesearchreply_metacast_isbase = false;
    mutable bool qplacesearchreply_metacall_isbase = false;
    mutable bool qplacesearchreply_type_isbase = false;
    mutable bool qplacesearchreply_abort_isbase = false;
    mutable bool qplacesearchreply_event_isbase = false;
    mutable bool qplacesearchreply_eventfilter_isbase = false;
    mutable bool qplacesearchreply_timerevent_isbase = false;
    mutable bool qplacesearchreply_childevent_isbase = false;
    mutable bool qplacesearchreply_customevent_isbase = false;
    mutable bool qplacesearchreply_connectnotify_isbase = false;
    mutable bool qplacesearchreply_disconnectnotify_isbase = false;
    mutable bool qplacesearchreply_setresults_isbase = false;
    mutable bool qplacesearchreply_setrequest_isbase = false;
    mutable bool qplacesearchreply_setpreviouspagerequest_isbase = false;
    mutable bool qplacesearchreply_setnextpagerequest_isbase = false;
    mutable bool qplacesearchreply_setfinished_isbase = false;
    mutable bool qplacesearchreply_seterror_isbase = false;
    mutable bool qplacesearchreply_sender_isbase = false;
    mutable bool qplacesearchreply_sendersignalindex_isbase = false;
    mutable bool qplacesearchreply_receivers_isbase = false;
    mutable bool qplacesearchreply_issignalconnected_isbase = false;

  public:
    VirtualQPlaceSearchReply() : QPlaceSearchReply() {};
    VirtualQPlaceSearchReply(QObject* parent) : QPlaceSearchReply(parent) {};

    ~VirtualQPlaceSearchReply() {
        qplacesearchreply_metaobject_callback = nullptr;
        qplacesearchreply_metacast_callback = nullptr;
        qplacesearchreply_metacall_callback = nullptr;
        qplacesearchreply_type_callback = nullptr;
        qplacesearchreply_abort_callback = nullptr;
        qplacesearchreply_event_callback = nullptr;
        qplacesearchreply_eventfilter_callback = nullptr;
        qplacesearchreply_timerevent_callback = nullptr;
        qplacesearchreply_childevent_callback = nullptr;
        qplacesearchreply_customevent_callback = nullptr;
        qplacesearchreply_connectnotify_callback = nullptr;
        qplacesearchreply_disconnectnotify_callback = nullptr;
        qplacesearchreply_setresults_callback = nullptr;
        qplacesearchreply_setrequest_callback = nullptr;
        qplacesearchreply_setpreviouspagerequest_callback = nullptr;
        qplacesearchreply_setnextpagerequest_callback = nullptr;
        qplacesearchreply_setfinished_callback = nullptr;
        qplacesearchreply_seterror_callback = nullptr;
        qplacesearchreply_sender_callback = nullptr;
        qplacesearchreply_sendersignalindex_callback = nullptr;
        qplacesearchreply_receivers_callback = nullptr;
        qplacesearchreply_issignalconnected_callback = nullptr;
    }

    // Callback setters
    inline void setQPlaceSearchReply_MetaObject_Callback(QPlaceSearchReply_MetaObject_Callback cb) { qplacesearchreply_metaobject_callback = cb; }
    inline void setQPlaceSearchReply_Metacast_Callback(QPlaceSearchReply_Metacast_Callback cb) { qplacesearchreply_metacast_callback = cb; }
    inline void setQPlaceSearchReply_Metacall_Callback(QPlaceSearchReply_Metacall_Callback cb) { qplacesearchreply_metacall_callback = cb; }
    inline void setQPlaceSearchReply_Type_Callback(QPlaceSearchReply_Type_Callback cb) { qplacesearchreply_type_callback = cb; }
    inline void setQPlaceSearchReply_Abort_Callback(QPlaceSearchReply_Abort_Callback cb) { qplacesearchreply_abort_callback = cb; }
    inline void setQPlaceSearchReply_Event_Callback(QPlaceSearchReply_Event_Callback cb) { qplacesearchreply_event_callback = cb; }
    inline void setQPlaceSearchReply_EventFilter_Callback(QPlaceSearchReply_EventFilter_Callback cb) { qplacesearchreply_eventfilter_callback = cb; }
    inline void setQPlaceSearchReply_TimerEvent_Callback(QPlaceSearchReply_TimerEvent_Callback cb) { qplacesearchreply_timerevent_callback = cb; }
    inline void setQPlaceSearchReply_ChildEvent_Callback(QPlaceSearchReply_ChildEvent_Callback cb) { qplacesearchreply_childevent_callback = cb; }
    inline void setQPlaceSearchReply_CustomEvent_Callback(QPlaceSearchReply_CustomEvent_Callback cb) { qplacesearchreply_customevent_callback = cb; }
    inline void setQPlaceSearchReply_ConnectNotify_Callback(QPlaceSearchReply_ConnectNotify_Callback cb) { qplacesearchreply_connectnotify_callback = cb; }
    inline void setQPlaceSearchReply_DisconnectNotify_Callback(QPlaceSearchReply_DisconnectNotify_Callback cb) { qplacesearchreply_disconnectnotify_callback = cb; }
    inline void setQPlaceSearchReply_SetResults_Callback(QPlaceSearchReply_SetResults_Callback cb) { qplacesearchreply_setresults_callback = cb; }
    inline void setQPlaceSearchReply_SetRequest_Callback(QPlaceSearchReply_SetRequest_Callback cb) { qplacesearchreply_setrequest_callback = cb; }
    inline void setQPlaceSearchReply_SetPreviousPageRequest_Callback(QPlaceSearchReply_SetPreviousPageRequest_Callback cb) { qplacesearchreply_setpreviouspagerequest_callback = cb; }
    inline void setQPlaceSearchReply_SetNextPageRequest_Callback(QPlaceSearchReply_SetNextPageRequest_Callback cb) { qplacesearchreply_setnextpagerequest_callback = cb; }
    inline void setQPlaceSearchReply_SetFinished_Callback(QPlaceSearchReply_SetFinished_Callback cb) { qplacesearchreply_setfinished_callback = cb; }
    inline void setQPlaceSearchReply_SetError_Callback(QPlaceSearchReply_SetError_Callback cb) { qplacesearchreply_seterror_callback = cb; }
    inline void setQPlaceSearchReply_Sender_Callback(QPlaceSearchReply_Sender_Callback cb) { qplacesearchreply_sender_callback = cb; }
    inline void setQPlaceSearchReply_SenderSignalIndex_Callback(QPlaceSearchReply_SenderSignalIndex_Callback cb) { qplacesearchreply_sendersignalindex_callback = cb; }
    inline void setQPlaceSearchReply_Receivers_Callback(QPlaceSearchReply_Receivers_Callback cb) { qplacesearchreply_receivers_callback = cb; }
    inline void setQPlaceSearchReply_IsSignalConnected_Callback(QPlaceSearchReply_IsSignalConnected_Callback cb) { qplacesearchreply_issignalconnected_callback = cb; }

    // Base flag setters
    inline void setQPlaceSearchReply_MetaObject_IsBase(bool value) const { qplacesearchreply_metaobject_isbase = value; }
    inline void setQPlaceSearchReply_Metacast_IsBase(bool value) const { qplacesearchreply_metacast_isbase = value; }
    inline void setQPlaceSearchReply_Metacall_IsBase(bool value) const { qplacesearchreply_metacall_isbase = value; }
    inline void setQPlaceSearchReply_Type_IsBase(bool value) const { qplacesearchreply_type_isbase = value; }
    inline void setQPlaceSearchReply_Abort_IsBase(bool value) const { qplacesearchreply_abort_isbase = value; }
    inline void setQPlaceSearchReply_Event_IsBase(bool value) const { qplacesearchreply_event_isbase = value; }
    inline void setQPlaceSearchReply_EventFilter_IsBase(bool value) const { qplacesearchreply_eventfilter_isbase = value; }
    inline void setQPlaceSearchReply_TimerEvent_IsBase(bool value) const { qplacesearchreply_timerevent_isbase = value; }
    inline void setQPlaceSearchReply_ChildEvent_IsBase(bool value) const { qplacesearchreply_childevent_isbase = value; }
    inline void setQPlaceSearchReply_CustomEvent_IsBase(bool value) const { qplacesearchreply_customevent_isbase = value; }
    inline void setQPlaceSearchReply_ConnectNotify_IsBase(bool value) const { qplacesearchreply_connectnotify_isbase = value; }
    inline void setQPlaceSearchReply_DisconnectNotify_IsBase(bool value) const { qplacesearchreply_disconnectnotify_isbase = value; }
    inline void setQPlaceSearchReply_SetResults_IsBase(bool value) const { qplacesearchreply_setresults_isbase = value; }
    inline void setQPlaceSearchReply_SetRequest_IsBase(bool value) const { qplacesearchreply_setrequest_isbase = value; }
    inline void setQPlaceSearchReply_SetPreviousPageRequest_IsBase(bool value) const { qplacesearchreply_setpreviouspagerequest_isbase = value; }
    inline void setQPlaceSearchReply_SetNextPageRequest_IsBase(bool value) const { qplacesearchreply_setnextpagerequest_isbase = value; }
    inline void setQPlaceSearchReply_SetFinished_IsBase(bool value) const { qplacesearchreply_setfinished_isbase = value; }
    inline void setQPlaceSearchReply_SetError_IsBase(bool value) const { qplacesearchreply_seterror_isbase = value; }
    inline void setQPlaceSearchReply_Sender_IsBase(bool value) const { qplacesearchreply_sender_isbase = value; }
    inline void setQPlaceSearchReply_SenderSignalIndex_IsBase(bool value) const { qplacesearchreply_sendersignalindex_isbase = value; }
    inline void setQPlaceSearchReply_Receivers_IsBase(bool value) const { qplacesearchreply_receivers_isbase = value; }
    inline void setQPlaceSearchReply_IsSignalConnected_IsBase(bool value) const { qplacesearchreply_issignalconnected_isbase = value; }

    // Virtual method for C ABI access and custom callback
    virtual const QMetaObject* metaObject() const override {
        if (qplacesearchreply_metaobject_isbase) {
            qplacesearchreply_metaobject_isbase = false;
            return QPlaceSearchReply::metaObject();
        } else if (qplacesearchreply_metaobject_callback != nullptr) {
            QMetaObject* callback_ret = qplacesearchreply_metaobject_callback();
            return callback_ret;
        } else {
            return QPlaceSearchReply::metaObject();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void* qt_metacast(const char* param1) override {
        if (qplacesearchreply_metacast_isbase) {
            qplacesearchreply_metacast_isbase = false;
            return QPlaceSearchReply::qt_metacast(param1);
        } else if (qplacesearchreply_metacast_callback != nullptr) {
            const char* cbval1 = (const char*)param1;

            void* callback_ret = qplacesearchreply_metacast_callback(this, cbval1);
            return callback_ret;
        } else {
            return QPlaceSearchReply::qt_metacast(param1);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (qplacesearchreply_metacall_isbase) {
            qplacesearchreply_metacall_isbase = false;
            return QPlaceSearchReply::qt_metacall(param1, param2, param3);
        } else if (qplacesearchreply_metacall_callback != nullptr) {
            int cbval1 = static_cast<int>(param1);
            int cbval2 = param2;
            void** cbval3 = param3;

            int callback_ret = qplacesearchreply_metacall_callback(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        } else {
            return QPlaceSearchReply::qt_metacall(param1, param2, param3);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QPlaceReply::Type type() const override {
        if (qplacesearchreply_type_isbase) {
            qplacesearchreply_type_isbase = false;
            return QPlaceSearchReply::type();
        } else if (qplacesearchreply_type_callback != nullptr) {
            int callback_ret = qplacesearchreply_type_callback();
            return static_cast<QPlaceReply::Type>(callback_ret);
        } else {
            return QPlaceSearchReply::type();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void abort() override {
        if (qplacesearchreply_abort_isbase) {
            qplacesearchreply_abort_isbase = false;
            QPlaceSearchReply::abort();
        } else if (qplacesearchreply_abort_callback != nullptr) {
            qplacesearchreply_abort_callback();
        } else {
            QPlaceSearchReply::abort();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* event) override {
        if (qplacesearchreply_event_isbase) {
            qplacesearchreply_event_isbase = false;
            return QPlaceSearchReply::event(event);
        } else if (qplacesearchreply_event_callback != nullptr) {
            QEvent* cbval1 = event;

            bool callback_ret = qplacesearchreply_event_callback(this, cbval1);
            return callback_ret;
        } else {
            return QPlaceSearchReply::event(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* watched, QEvent* event) override {
        if (qplacesearchreply_eventfilter_isbase) {
            qplacesearchreply_eventfilter_isbase = false;
            return QPlaceSearchReply::eventFilter(watched, event);
        } else if (qplacesearchreply_eventfilter_callback != nullptr) {
            QObject* cbval1 = watched;
            QEvent* cbval2 = event;

            bool callback_ret = qplacesearchreply_eventfilter_callback(this, cbval1, cbval2);
            return callback_ret;
        } else {
            return QPlaceSearchReply::eventFilter(watched, event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (qplacesearchreply_timerevent_isbase) {
            qplacesearchreply_timerevent_isbase = false;
            QPlaceSearchReply::timerEvent(event);
        } else if (qplacesearchreply_timerevent_callback != nullptr) {
            QTimerEvent* cbval1 = event;

            qplacesearchreply_timerevent_callback(this, cbval1);
        } else {
            QPlaceSearchReply::timerEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (qplacesearchreply_childevent_isbase) {
            qplacesearchreply_childevent_isbase = false;
            QPlaceSearchReply::childEvent(event);
        } else if (qplacesearchreply_childevent_callback != nullptr) {
            QChildEvent* cbval1 = event;

            qplacesearchreply_childevent_callback(this, cbval1);
        } else {
            QPlaceSearchReply::childEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (qplacesearchreply_customevent_isbase) {
            qplacesearchreply_customevent_isbase = false;
            QPlaceSearchReply::customEvent(event);
        } else if (qplacesearchreply_customevent_callback != nullptr) {
            QEvent* cbval1 = event;

            qplacesearchreply_customevent_callback(this, cbval1);
        } else {
            QPlaceSearchReply::customEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (qplacesearchreply_connectnotify_isbase) {
            qplacesearchreply_connectnotify_isbase = false;
            QPlaceSearchReply::connectNotify(signal);
        } else if (qplacesearchreply_connectnotify_callback != nullptr) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            qplacesearchreply_connectnotify_callback(this, cbval1);
        } else {
            QPlaceSearchReply::connectNotify(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (qplacesearchreply_disconnectnotify_isbase) {
            qplacesearchreply_disconnectnotify_isbase = false;
            QPlaceSearchReply::disconnectNotify(signal);
        } else if (qplacesearchreply_disconnectnotify_callback != nullptr) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            qplacesearchreply_disconnectnotify_callback(this, cbval1);
        } else {
            QPlaceSearchReply::disconnectNotify(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    void setResults(const QList<QPlaceSearchResult>& results) {
        if (qplacesearchreply_setresults_isbase) {
            qplacesearchreply_setresults_isbase = false;
            QPlaceSearchReply::setResults(results);
        } else if (qplacesearchreply_setresults_callback != nullptr) {
            const QList<QPlaceSearchResult>& results_ret = results;
            // Convert QList<> from C++ memory to manually-managed C memory
            QPlaceSearchResult** results_arr = static_cast<QPlaceSearchResult**>(malloc(sizeof(QPlaceSearchResult*) * (results_ret.size())));
            for (qsizetype i = 0; i < results_ret.size(); ++i) {
                results_arr[i] = new QPlaceSearchResult(results_ret[i]);
            }
            libqt_list results_out;
            results_out.len = results_ret.size();
            results_out.data = static_cast<void*>(results_arr);
            libqt_list /* of QPlaceSearchResult* */ cbval1 = results_out;

            qplacesearchreply_setresults_callback(this, cbval1);
            free(results_arr);
        } else {
            QPlaceSearchReply::setResults(results);
        }
    }

    // Virtual method for C ABI access and custom callback
    void setRequest(const QPlaceSearchRequest& request) {
        if (qplacesearchreply_setrequest_isbase) {
            qplacesearchreply_setrequest_isbase = false;
            QPlaceSearchReply::setRequest(request);
        } else if (qplacesearchreply_setrequest_callback != nullptr) {
            const QPlaceSearchRequest& request_ret = request;
            // Cast returned reference into pointer
            QPlaceSearchRequest* cbval1 = const_cast<QPlaceSearchRequest*>(&request_ret);

            qplacesearchreply_setrequest_callback(this, cbval1);
        } else {
            QPlaceSearchReply::setRequest(request);
        }
    }

    // Virtual method for C ABI access and custom callback
    void setPreviousPageRequest(const QPlaceSearchRequest& previous) {
        if (qplacesearchreply_setpreviouspagerequest_isbase) {
            qplacesearchreply_setpreviouspagerequest_isbase = false;
            QPlaceSearchReply::setPreviousPageRequest(previous);
        } else if (qplacesearchreply_setpreviouspagerequest_callback != nullptr) {
            const QPlaceSearchRequest& previous_ret = previous;
            // Cast returned reference into pointer
            QPlaceSearchRequest* cbval1 = const_cast<QPlaceSearchRequest*>(&previous_ret);

            qplacesearchreply_setpreviouspagerequest_callback(this, cbval1);
        } else {
            QPlaceSearchReply::setPreviousPageRequest(previous);
        }
    }

    // Virtual method for C ABI access and custom callback
    void setNextPageRequest(const QPlaceSearchRequest& next) {
        if (qplacesearchreply_setnextpagerequest_isbase) {
            qplacesearchreply_setnextpagerequest_isbase = false;
            QPlaceSearchReply::setNextPageRequest(next);
        } else if (qplacesearchreply_setnextpagerequest_callback != nullptr) {
            const QPlaceSearchRequest& next_ret = next;
            // Cast returned reference into pointer
            QPlaceSearchRequest* cbval1 = const_cast<QPlaceSearchRequest*>(&next_ret);

            qplacesearchreply_setnextpagerequest_callback(this, cbval1);
        } else {
            QPlaceSearchReply::setNextPageRequest(next);
        }
    }

    // Virtual method for C ABI access and custom callback
    void setFinished(bool finished) {
        if (qplacesearchreply_setfinished_isbase) {
            qplacesearchreply_setfinished_isbase = false;
            QPlaceSearchReply::setFinished(finished);
        } else if (qplacesearchreply_setfinished_callback != nullptr) {
            bool cbval1 = finished;

            qplacesearchreply_setfinished_callback(this, cbval1);
        } else {
            QPlaceSearchReply::setFinished(finished);
        }
    }

    // Virtual method for C ABI access and custom callback
    void setError(QPlaceReply::Error errorVal, const QString& errorString) {
        if (qplacesearchreply_seterror_isbase) {
            qplacesearchreply_seterror_isbase = false;
            QPlaceSearchReply::setError(errorVal, errorString);
        } else if (qplacesearchreply_seterror_callback != nullptr) {
            int cbval1 = static_cast<int>(errorVal);
            const QString errorString_ret = errorString;
            // Convert QString from UTF-16 in C++ RAII memory to UTF-8 chars in manually-managed C memory
            QByteArray errorString_b = errorString_ret.toUtf8();
            auto errorString_str_len = errorString_b.length();
            const char* errorString_str = static_cast<const char*>(malloc(errorString_str_len + 1));
            memcpy((void*)errorString_str, errorString_b.data(), errorString_str_len);
            ((char*)errorString_str)[errorString_str_len] = '\0';
            const char* cbval2 = errorString_str;

            qplacesearchreply_seterror_callback(this, cbval1, cbval2);
            libqt_free(errorString_str);
        } else {
            QPlaceSearchReply::setError(errorVal, errorString);
        }
    }

    // Virtual method for C ABI access and custom callback
    QObject* sender() const {
        if (qplacesearchreply_sender_isbase) {
            qplacesearchreply_sender_isbase = false;
            return QPlaceSearchReply::sender();
        } else if (qplacesearchreply_sender_callback != nullptr) {
            QObject* callback_ret = qplacesearchreply_sender_callback();
            return callback_ret;
        } else {
            return QPlaceSearchReply::sender();
        }
    }

    // Virtual method for C ABI access and custom callback
    int senderSignalIndex() const {
        if (qplacesearchreply_sendersignalindex_isbase) {
            qplacesearchreply_sendersignalindex_isbase = false;
            return QPlaceSearchReply::senderSignalIndex();
        } else if (qplacesearchreply_sendersignalindex_callback != nullptr) {
            int callback_ret = qplacesearchreply_sendersignalindex_callback();
            return static_cast<int>(callback_ret);
        } else {
            return QPlaceSearchReply::senderSignalIndex();
        }
    }

    // Virtual method for C ABI access and custom callback
    int receivers(const char* signal) const {
        if (qplacesearchreply_receivers_isbase) {
            qplacesearchreply_receivers_isbase = false;
            return QPlaceSearchReply::receivers(signal);
        } else if (qplacesearchreply_receivers_callback != nullptr) {
            const char* cbval1 = (const char*)signal;

            int callback_ret = qplacesearchreply_receivers_callback(this, cbval1);
            return static_cast<int>(callback_ret);
        } else {
            return QPlaceSearchReply::receivers(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    bool isSignalConnected(const QMetaMethod& signal) const {
        if (qplacesearchreply_issignalconnected_isbase) {
            qplacesearchreply_issignalconnected_isbase = false;
            return QPlaceSearchReply::isSignalConnected(signal);
        } else if (qplacesearchreply_issignalconnected_callback != nullptr) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            bool callback_ret = qplacesearchreply_issignalconnected_callback(this, cbval1);
            return callback_ret;
        } else {
            return QPlaceSearchReply::isSignalConnected(signal);
        }
    }

    // Friend functions
    friend void QPlaceSearchReply_TimerEvent(QPlaceSearchReply* self, QTimerEvent* event);
    friend void QPlaceSearchReply_SuperTimerEvent(QPlaceSearchReply* self, QTimerEvent* event);
    friend void QPlaceSearchReply_ChildEvent(QPlaceSearchReply* self, QChildEvent* event);
    friend void QPlaceSearchReply_SuperChildEvent(QPlaceSearchReply* self, QChildEvent* event);
    friend void QPlaceSearchReply_CustomEvent(QPlaceSearchReply* self, QEvent* event);
    friend void QPlaceSearchReply_SuperCustomEvent(QPlaceSearchReply* self, QEvent* event);
    friend void QPlaceSearchReply_ConnectNotify(QPlaceSearchReply* self, const QMetaMethod* signal);
    friend void QPlaceSearchReply_SuperConnectNotify(QPlaceSearchReply* self, const QMetaMethod* signal);
    friend void QPlaceSearchReply_DisconnectNotify(QPlaceSearchReply* self, const QMetaMethod* signal);
    friend void QPlaceSearchReply_SuperDisconnectNotify(QPlaceSearchReply* self, const QMetaMethod* signal);
    friend void QPlaceSearchReply_SetResults(QPlaceSearchReply* self, const libqt_list /* of QPlaceSearchResult* */ results);
    friend void QPlaceSearchReply_SuperSetResults(QPlaceSearchReply* self, const libqt_list /* of QPlaceSearchResult* */ results);
    friend void QPlaceSearchReply_SetRequest(QPlaceSearchReply* self, const QPlaceSearchRequest* request);
    friend void QPlaceSearchReply_SuperSetRequest(QPlaceSearchReply* self, const QPlaceSearchRequest* request);
    friend void QPlaceSearchReply_SetPreviousPageRequest(QPlaceSearchReply* self, const QPlaceSearchRequest* previous);
    friend void QPlaceSearchReply_SuperSetPreviousPageRequest(QPlaceSearchReply* self, const QPlaceSearchRequest* previous);
    friend void QPlaceSearchReply_SetNextPageRequest(QPlaceSearchReply* self, const QPlaceSearchRequest* next);
    friend void QPlaceSearchReply_SuperSetNextPageRequest(QPlaceSearchReply* self, const QPlaceSearchRequest* next);
    friend void QPlaceSearchReply_SetFinished(QPlaceSearchReply* self, bool finished);
    friend void QPlaceSearchReply_SuperSetFinished(QPlaceSearchReply* self, bool finished);
    friend void QPlaceSearchReply_SetError(QPlaceSearchReply* self, int errorVal, const libqt_string errorString);
    friend void QPlaceSearchReply_SuperSetError(QPlaceSearchReply* self, int errorVal, const libqt_string errorString);
    friend QObject* QPlaceSearchReply_Sender(const QPlaceSearchReply* self);
    friend QObject* QPlaceSearchReply_SuperSender(const QPlaceSearchReply* self);
    friend int QPlaceSearchReply_SenderSignalIndex(const QPlaceSearchReply* self);
    friend int QPlaceSearchReply_SuperSenderSignalIndex(const QPlaceSearchReply* self);
    friend int QPlaceSearchReply_Receivers(const QPlaceSearchReply* self, const char* signal);
    friend int QPlaceSearchReply_SuperReceivers(const QPlaceSearchReply* self, const char* signal);
    friend bool QPlaceSearchReply_IsSignalConnected(const QPlaceSearchReply* self, const QMetaMethod* signal);
    friend bool QPlaceSearchReply_SuperIsSignalConnected(const QPlaceSearchReply* self, const QMetaMethod* signal);
};

#endif
