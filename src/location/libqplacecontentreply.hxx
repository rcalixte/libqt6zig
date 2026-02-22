#pragma once
#ifndef SRC_LOCATIONC_LIBVIRTUALQPLACECONTENTREPLY_H
#define SRC_LOCATIONC_LIBVIRTUALQPLACECONTENTREPLY_H

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

// This class is a subclass of QPlaceContentReply so that we can call protected methods
class VirtualQPlaceContentReply final : public QPlaceContentReply {

  public:
    // Virtual class boolean flag
    bool isVirtualQPlaceContentReply = true;

    // Virtual class public types (including callbacks)
    using QPlaceContentReply_MetaObject_Callback = QMetaObject* (*)();
    using QPlaceContentReply_Metacast_Callback = void* (*)(QPlaceContentReply*, const char*);
    using QPlaceContentReply_Metacall_Callback = int (*)(QPlaceContentReply*, int, int, void**);
    using QPlaceContentReply_Type_Callback = int (*)();
    using QPlaceContentReply_Abort_Callback = void (*)();
    using QPlaceContentReply_Event_Callback = bool (*)(QPlaceContentReply*, QEvent*);
    using QPlaceContentReply_EventFilter_Callback = bool (*)(QPlaceContentReply*, QObject*, QEvent*);
    using QPlaceContentReply_TimerEvent_Callback = void (*)(QPlaceContentReply*, QTimerEvent*);
    using QPlaceContentReply_ChildEvent_Callback = void (*)(QPlaceContentReply*, QChildEvent*);
    using QPlaceContentReply_CustomEvent_Callback = void (*)(QPlaceContentReply*, QEvent*);
    using QPlaceContentReply_ConnectNotify_Callback = void (*)(QPlaceContentReply*, QMetaMethod*);
    using QPlaceContentReply_DisconnectNotify_Callback = void (*)(QPlaceContentReply*, QMetaMethod*);
    using QPlaceContentReply_SetContent_Callback = void (*)(QPlaceContentReply*, libqt_map /* of int to QPlaceContent* */);
    using QPlaceContentReply_SetTotalCount_Callback = void (*)(QPlaceContentReply*, int);
    using QPlaceContentReply_SetRequest_Callback = void (*)(QPlaceContentReply*, QPlaceContentRequest*);
    using QPlaceContentReply_SetPreviousPageRequest_Callback = void (*)(QPlaceContentReply*, QPlaceContentRequest*);
    using QPlaceContentReply_SetNextPageRequest_Callback = void (*)(QPlaceContentReply*, QPlaceContentRequest*);
    using QPlaceContentReply_SetFinished_Callback = void (*)(QPlaceContentReply*, bool);
    using QPlaceContentReply_SetError_Callback = void (*)(QPlaceContentReply*, int, const char*);
    using QPlaceContentReply_Sender_Callback = QObject* (*)();
    using QPlaceContentReply_SenderSignalIndex_Callback = int (*)();
    using QPlaceContentReply_Receivers_Callback = int (*)(const QPlaceContentReply*, const char*);
    using QPlaceContentReply_IsSignalConnected_Callback = bool (*)(const QPlaceContentReply*, QMetaMethod*);

  protected:
    // Instance callback storage
    QPlaceContentReply_MetaObject_Callback qplacecontentreply_metaobject_callback = nullptr;
    QPlaceContentReply_Metacast_Callback qplacecontentreply_metacast_callback = nullptr;
    QPlaceContentReply_Metacall_Callback qplacecontentreply_metacall_callback = nullptr;
    QPlaceContentReply_Type_Callback qplacecontentreply_type_callback = nullptr;
    QPlaceContentReply_Abort_Callback qplacecontentreply_abort_callback = nullptr;
    QPlaceContentReply_Event_Callback qplacecontentreply_event_callback = nullptr;
    QPlaceContentReply_EventFilter_Callback qplacecontentreply_eventfilter_callback = nullptr;
    QPlaceContentReply_TimerEvent_Callback qplacecontentreply_timerevent_callback = nullptr;
    QPlaceContentReply_ChildEvent_Callback qplacecontentreply_childevent_callback = nullptr;
    QPlaceContentReply_CustomEvent_Callback qplacecontentreply_customevent_callback = nullptr;
    QPlaceContentReply_ConnectNotify_Callback qplacecontentreply_connectnotify_callback = nullptr;
    QPlaceContentReply_DisconnectNotify_Callback qplacecontentreply_disconnectnotify_callback = nullptr;
    QPlaceContentReply_SetContent_Callback qplacecontentreply_setcontent_callback = nullptr;
    QPlaceContentReply_SetTotalCount_Callback qplacecontentreply_settotalcount_callback = nullptr;
    QPlaceContentReply_SetRequest_Callback qplacecontentreply_setrequest_callback = nullptr;
    QPlaceContentReply_SetPreviousPageRequest_Callback qplacecontentreply_setpreviouspagerequest_callback = nullptr;
    QPlaceContentReply_SetNextPageRequest_Callback qplacecontentreply_setnextpagerequest_callback = nullptr;
    QPlaceContentReply_SetFinished_Callback qplacecontentreply_setfinished_callback = nullptr;
    QPlaceContentReply_SetError_Callback qplacecontentreply_seterror_callback = nullptr;
    QPlaceContentReply_Sender_Callback qplacecontentreply_sender_callback = nullptr;
    QPlaceContentReply_SenderSignalIndex_Callback qplacecontentreply_sendersignalindex_callback = nullptr;
    QPlaceContentReply_Receivers_Callback qplacecontentreply_receivers_callback = nullptr;
    QPlaceContentReply_IsSignalConnected_Callback qplacecontentreply_issignalconnected_callback = nullptr;

    // Instance base flags
    mutable bool qplacecontentreply_metaobject_isbase = false;
    mutable bool qplacecontentreply_metacast_isbase = false;
    mutable bool qplacecontentreply_metacall_isbase = false;
    mutable bool qplacecontentreply_type_isbase = false;
    mutable bool qplacecontentreply_abort_isbase = false;
    mutable bool qplacecontentreply_event_isbase = false;
    mutable bool qplacecontentreply_eventfilter_isbase = false;
    mutable bool qplacecontentreply_timerevent_isbase = false;
    mutable bool qplacecontentreply_childevent_isbase = false;
    mutable bool qplacecontentreply_customevent_isbase = false;
    mutable bool qplacecontentreply_connectnotify_isbase = false;
    mutable bool qplacecontentreply_disconnectnotify_isbase = false;
    mutable bool qplacecontentreply_setcontent_isbase = false;
    mutable bool qplacecontentreply_settotalcount_isbase = false;
    mutable bool qplacecontentreply_setrequest_isbase = false;
    mutable bool qplacecontentreply_setpreviouspagerequest_isbase = false;
    mutable bool qplacecontentreply_setnextpagerequest_isbase = false;
    mutable bool qplacecontentreply_setfinished_isbase = false;
    mutable bool qplacecontentreply_seterror_isbase = false;
    mutable bool qplacecontentreply_sender_isbase = false;
    mutable bool qplacecontentreply_sendersignalindex_isbase = false;
    mutable bool qplacecontentreply_receivers_isbase = false;
    mutable bool qplacecontentreply_issignalconnected_isbase = false;

  public:
    VirtualQPlaceContentReply() : QPlaceContentReply() {};
    VirtualQPlaceContentReply(QObject* parent) : QPlaceContentReply(parent) {};

    ~VirtualQPlaceContentReply() {
        qplacecontentreply_metaobject_callback = nullptr;
        qplacecontentreply_metacast_callback = nullptr;
        qplacecontentreply_metacall_callback = nullptr;
        qplacecontentreply_type_callback = nullptr;
        qplacecontentreply_abort_callback = nullptr;
        qplacecontentreply_event_callback = nullptr;
        qplacecontentreply_eventfilter_callback = nullptr;
        qplacecontentreply_timerevent_callback = nullptr;
        qplacecontentreply_childevent_callback = nullptr;
        qplacecontentreply_customevent_callback = nullptr;
        qplacecontentreply_connectnotify_callback = nullptr;
        qplacecontentreply_disconnectnotify_callback = nullptr;
        qplacecontentreply_setcontent_callback = nullptr;
        qplacecontentreply_settotalcount_callback = nullptr;
        qplacecontentreply_setrequest_callback = nullptr;
        qplacecontentreply_setpreviouspagerequest_callback = nullptr;
        qplacecontentreply_setnextpagerequest_callback = nullptr;
        qplacecontentreply_setfinished_callback = nullptr;
        qplacecontentreply_seterror_callback = nullptr;
        qplacecontentreply_sender_callback = nullptr;
        qplacecontentreply_sendersignalindex_callback = nullptr;
        qplacecontentreply_receivers_callback = nullptr;
        qplacecontentreply_issignalconnected_callback = nullptr;
    }

    // Callback setters
    inline void setQPlaceContentReply_MetaObject_Callback(QPlaceContentReply_MetaObject_Callback cb) { qplacecontentreply_metaobject_callback = cb; }
    inline void setQPlaceContentReply_Metacast_Callback(QPlaceContentReply_Metacast_Callback cb) { qplacecontentreply_metacast_callback = cb; }
    inline void setQPlaceContentReply_Metacall_Callback(QPlaceContentReply_Metacall_Callback cb) { qplacecontentreply_metacall_callback = cb; }
    inline void setQPlaceContentReply_Type_Callback(QPlaceContentReply_Type_Callback cb) { qplacecontentreply_type_callback = cb; }
    inline void setQPlaceContentReply_Abort_Callback(QPlaceContentReply_Abort_Callback cb) { qplacecontentreply_abort_callback = cb; }
    inline void setQPlaceContentReply_Event_Callback(QPlaceContentReply_Event_Callback cb) { qplacecontentreply_event_callback = cb; }
    inline void setQPlaceContentReply_EventFilter_Callback(QPlaceContentReply_EventFilter_Callback cb) { qplacecontentreply_eventfilter_callback = cb; }
    inline void setQPlaceContentReply_TimerEvent_Callback(QPlaceContentReply_TimerEvent_Callback cb) { qplacecontentreply_timerevent_callback = cb; }
    inline void setQPlaceContentReply_ChildEvent_Callback(QPlaceContentReply_ChildEvent_Callback cb) { qplacecontentreply_childevent_callback = cb; }
    inline void setQPlaceContentReply_CustomEvent_Callback(QPlaceContentReply_CustomEvent_Callback cb) { qplacecontentreply_customevent_callback = cb; }
    inline void setQPlaceContentReply_ConnectNotify_Callback(QPlaceContentReply_ConnectNotify_Callback cb) { qplacecontentreply_connectnotify_callback = cb; }
    inline void setQPlaceContentReply_DisconnectNotify_Callback(QPlaceContentReply_DisconnectNotify_Callback cb) { qplacecontentreply_disconnectnotify_callback = cb; }
    inline void setQPlaceContentReply_SetContent_Callback(QPlaceContentReply_SetContent_Callback cb) { qplacecontentreply_setcontent_callback = cb; }
    inline void setQPlaceContentReply_SetTotalCount_Callback(QPlaceContentReply_SetTotalCount_Callback cb) { qplacecontentreply_settotalcount_callback = cb; }
    inline void setQPlaceContentReply_SetRequest_Callback(QPlaceContentReply_SetRequest_Callback cb) { qplacecontentreply_setrequest_callback = cb; }
    inline void setQPlaceContentReply_SetPreviousPageRequest_Callback(QPlaceContentReply_SetPreviousPageRequest_Callback cb) { qplacecontentreply_setpreviouspagerequest_callback = cb; }
    inline void setQPlaceContentReply_SetNextPageRequest_Callback(QPlaceContentReply_SetNextPageRequest_Callback cb) { qplacecontentreply_setnextpagerequest_callback = cb; }
    inline void setQPlaceContentReply_SetFinished_Callback(QPlaceContentReply_SetFinished_Callback cb) { qplacecontentreply_setfinished_callback = cb; }
    inline void setQPlaceContentReply_SetError_Callback(QPlaceContentReply_SetError_Callback cb) { qplacecontentreply_seterror_callback = cb; }
    inline void setQPlaceContentReply_Sender_Callback(QPlaceContentReply_Sender_Callback cb) { qplacecontentreply_sender_callback = cb; }
    inline void setQPlaceContentReply_SenderSignalIndex_Callback(QPlaceContentReply_SenderSignalIndex_Callback cb) { qplacecontentreply_sendersignalindex_callback = cb; }
    inline void setQPlaceContentReply_Receivers_Callback(QPlaceContentReply_Receivers_Callback cb) { qplacecontentreply_receivers_callback = cb; }
    inline void setQPlaceContentReply_IsSignalConnected_Callback(QPlaceContentReply_IsSignalConnected_Callback cb) { qplacecontentreply_issignalconnected_callback = cb; }

    // Base flag setters
    inline void setQPlaceContentReply_MetaObject_IsBase(bool value) const { qplacecontentreply_metaobject_isbase = value; }
    inline void setQPlaceContentReply_Metacast_IsBase(bool value) const { qplacecontentreply_metacast_isbase = value; }
    inline void setQPlaceContentReply_Metacall_IsBase(bool value) const { qplacecontentreply_metacall_isbase = value; }
    inline void setQPlaceContentReply_Type_IsBase(bool value) const { qplacecontentreply_type_isbase = value; }
    inline void setQPlaceContentReply_Abort_IsBase(bool value) const { qplacecontentreply_abort_isbase = value; }
    inline void setQPlaceContentReply_Event_IsBase(bool value) const { qplacecontentreply_event_isbase = value; }
    inline void setQPlaceContentReply_EventFilter_IsBase(bool value) const { qplacecontentreply_eventfilter_isbase = value; }
    inline void setQPlaceContentReply_TimerEvent_IsBase(bool value) const { qplacecontentreply_timerevent_isbase = value; }
    inline void setQPlaceContentReply_ChildEvent_IsBase(bool value) const { qplacecontentreply_childevent_isbase = value; }
    inline void setQPlaceContentReply_CustomEvent_IsBase(bool value) const { qplacecontentreply_customevent_isbase = value; }
    inline void setQPlaceContentReply_ConnectNotify_IsBase(bool value) const { qplacecontentreply_connectnotify_isbase = value; }
    inline void setQPlaceContentReply_DisconnectNotify_IsBase(bool value) const { qplacecontentreply_disconnectnotify_isbase = value; }
    inline void setQPlaceContentReply_SetContent_IsBase(bool value) const { qplacecontentreply_setcontent_isbase = value; }
    inline void setQPlaceContentReply_SetTotalCount_IsBase(bool value) const { qplacecontentreply_settotalcount_isbase = value; }
    inline void setQPlaceContentReply_SetRequest_IsBase(bool value) const { qplacecontentreply_setrequest_isbase = value; }
    inline void setQPlaceContentReply_SetPreviousPageRequest_IsBase(bool value) const { qplacecontentreply_setpreviouspagerequest_isbase = value; }
    inline void setQPlaceContentReply_SetNextPageRequest_IsBase(bool value) const { qplacecontentreply_setnextpagerequest_isbase = value; }
    inline void setQPlaceContentReply_SetFinished_IsBase(bool value) const { qplacecontentreply_setfinished_isbase = value; }
    inline void setQPlaceContentReply_SetError_IsBase(bool value) const { qplacecontentreply_seterror_isbase = value; }
    inline void setQPlaceContentReply_Sender_IsBase(bool value) const { qplacecontentreply_sender_isbase = value; }
    inline void setQPlaceContentReply_SenderSignalIndex_IsBase(bool value) const { qplacecontentreply_sendersignalindex_isbase = value; }
    inline void setQPlaceContentReply_Receivers_IsBase(bool value) const { qplacecontentreply_receivers_isbase = value; }
    inline void setQPlaceContentReply_IsSignalConnected_IsBase(bool value) const { qplacecontentreply_issignalconnected_isbase = value; }

    // Virtual method for C ABI access and custom callback
    virtual const QMetaObject* metaObject() const override {
        if (qplacecontentreply_metaobject_isbase) {
            qplacecontentreply_metaobject_isbase = false;
            return QPlaceContentReply::metaObject();
        } else if (qplacecontentreply_metaobject_callback != nullptr) {
            QMetaObject* callback_ret = qplacecontentreply_metaobject_callback();
            return callback_ret;
        } else {
            return QPlaceContentReply::metaObject();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void* qt_metacast(const char* param1) override {
        if (qplacecontentreply_metacast_isbase) {
            qplacecontentreply_metacast_isbase = false;
            return QPlaceContentReply::qt_metacast(param1);
        } else if (qplacecontentreply_metacast_callback != nullptr) {
            const char* cbval1 = (const char*)param1;

            void* callback_ret = qplacecontentreply_metacast_callback(this, cbval1);
            return callback_ret;
        } else {
            return QPlaceContentReply::qt_metacast(param1);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (qplacecontentreply_metacall_isbase) {
            qplacecontentreply_metacall_isbase = false;
            return QPlaceContentReply::qt_metacall(param1, param2, param3);
        } else if (qplacecontentreply_metacall_callback != nullptr) {
            int cbval1 = static_cast<int>(param1);
            int cbval2 = param2;
            void** cbval3 = param3;

            int callback_ret = qplacecontentreply_metacall_callback(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        } else {
            return QPlaceContentReply::qt_metacall(param1, param2, param3);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QPlaceReply::Type type() const override {
        if (qplacecontentreply_type_isbase) {
            qplacecontentreply_type_isbase = false;
            return QPlaceContentReply::type();
        } else if (qplacecontentreply_type_callback != nullptr) {
            int callback_ret = qplacecontentreply_type_callback();
            return static_cast<QPlaceReply::Type>(callback_ret);
        } else {
            return QPlaceContentReply::type();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void abort() override {
        if (qplacecontentreply_abort_isbase) {
            qplacecontentreply_abort_isbase = false;
            QPlaceContentReply::abort();
        } else if (qplacecontentreply_abort_callback != nullptr) {
            qplacecontentreply_abort_callback();
        } else {
            QPlaceContentReply::abort();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* event) override {
        if (qplacecontentreply_event_isbase) {
            qplacecontentreply_event_isbase = false;
            return QPlaceContentReply::event(event);
        } else if (qplacecontentreply_event_callback != nullptr) {
            QEvent* cbval1 = event;

            bool callback_ret = qplacecontentreply_event_callback(this, cbval1);
            return callback_ret;
        } else {
            return QPlaceContentReply::event(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* watched, QEvent* event) override {
        if (qplacecontentreply_eventfilter_isbase) {
            qplacecontentreply_eventfilter_isbase = false;
            return QPlaceContentReply::eventFilter(watched, event);
        } else if (qplacecontentreply_eventfilter_callback != nullptr) {
            QObject* cbval1 = watched;
            QEvent* cbval2 = event;

            bool callback_ret = qplacecontentreply_eventfilter_callback(this, cbval1, cbval2);
            return callback_ret;
        } else {
            return QPlaceContentReply::eventFilter(watched, event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (qplacecontentreply_timerevent_isbase) {
            qplacecontentreply_timerevent_isbase = false;
            QPlaceContentReply::timerEvent(event);
        } else if (qplacecontentreply_timerevent_callback != nullptr) {
            QTimerEvent* cbval1 = event;

            qplacecontentreply_timerevent_callback(this, cbval1);
        } else {
            QPlaceContentReply::timerEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (qplacecontentreply_childevent_isbase) {
            qplacecontentreply_childevent_isbase = false;
            QPlaceContentReply::childEvent(event);
        } else if (qplacecontentreply_childevent_callback != nullptr) {
            QChildEvent* cbval1 = event;

            qplacecontentreply_childevent_callback(this, cbval1);
        } else {
            QPlaceContentReply::childEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (qplacecontentreply_customevent_isbase) {
            qplacecontentreply_customevent_isbase = false;
            QPlaceContentReply::customEvent(event);
        } else if (qplacecontentreply_customevent_callback != nullptr) {
            QEvent* cbval1 = event;

            qplacecontentreply_customevent_callback(this, cbval1);
        } else {
            QPlaceContentReply::customEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (qplacecontentreply_connectnotify_isbase) {
            qplacecontentreply_connectnotify_isbase = false;
            QPlaceContentReply::connectNotify(signal);
        } else if (qplacecontentreply_connectnotify_callback != nullptr) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            qplacecontentreply_connectnotify_callback(this, cbval1);
        } else {
            QPlaceContentReply::connectNotify(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (qplacecontentreply_disconnectnotify_isbase) {
            qplacecontentreply_disconnectnotify_isbase = false;
            QPlaceContentReply::disconnectNotify(signal);
        } else if (qplacecontentreply_disconnectnotify_callback != nullptr) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            qplacecontentreply_disconnectnotify_callback(this, cbval1);
        } else {
            QPlaceContentReply::disconnectNotify(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    void setContent(const QMap<int, QPlaceContent>& content) {
        if (qplacecontentreply_setcontent_isbase) {
            qplacecontentreply_setcontent_isbase = false;
            QPlaceContentReply::setContent(content);
        } else if (qplacecontentreply_setcontent_callback != nullptr) {
            const QMap<int, QPlaceContent>& content_ret = content;
            // Convert QMap<> from C++ memory to manually-managed C memory
            int* content_karr = static_cast<int*>(malloc(sizeof(int) * content_ret.size()));
            QPlaceContent** content_varr = static_cast<QPlaceContent**>(malloc(sizeof(QPlaceContent*) * content_ret.size()));
            int content_ctr = 0;
            for (auto content_itr = content_ret.keyValueBegin(); content_itr != content_ret.keyValueEnd(); ++content_itr) {
                content_karr[content_ctr] = content_itr->first;
                content_varr[content_ctr] = new QPlaceContent(content_itr->second);
                content_ctr++;
            }
            libqt_map content_out;
            content_out.len = content_ret.size();
            content_out.keys = static_cast<void*>(content_karr);
            content_out.values = static_cast<void*>(content_varr);
            libqt_map /* of int to QPlaceContent* */ cbval1 = content_out;

            qplacecontentreply_setcontent_callback(this, cbval1);
        } else {
            QPlaceContentReply::setContent(content);
        }
    }

    // Virtual method for C ABI access and custom callback
    void setTotalCount(int total) {
        if (qplacecontentreply_settotalcount_isbase) {
            qplacecontentreply_settotalcount_isbase = false;
            QPlaceContentReply::setTotalCount(total);
        } else if (qplacecontentreply_settotalcount_callback != nullptr) {
            int cbval1 = total;

            qplacecontentreply_settotalcount_callback(this, cbval1);
        } else {
            QPlaceContentReply::setTotalCount(total);
        }
    }

    // Virtual method for C ABI access and custom callback
    void setRequest(const QPlaceContentRequest& request) {
        if (qplacecontentreply_setrequest_isbase) {
            qplacecontentreply_setrequest_isbase = false;
            QPlaceContentReply::setRequest(request);
        } else if (qplacecontentreply_setrequest_callback != nullptr) {
            const QPlaceContentRequest& request_ret = request;
            // Cast returned reference into pointer
            QPlaceContentRequest* cbval1 = const_cast<QPlaceContentRequest*>(&request_ret);

            qplacecontentreply_setrequest_callback(this, cbval1);
        } else {
            QPlaceContentReply::setRequest(request);
        }
    }

    // Virtual method for C ABI access and custom callback
    void setPreviousPageRequest(const QPlaceContentRequest& previous) {
        if (qplacecontentreply_setpreviouspagerequest_isbase) {
            qplacecontentreply_setpreviouspagerequest_isbase = false;
            QPlaceContentReply::setPreviousPageRequest(previous);
        } else if (qplacecontentreply_setpreviouspagerequest_callback != nullptr) {
            const QPlaceContentRequest& previous_ret = previous;
            // Cast returned reference into pointer
            QPlaceContentRequest* cbval1 = const_cast<QPlaceContentRequest*>(&previous_ret);

            qplacecontentreply_setpreviouspagerequest_callback(this, cbval1);
        } else {
            QPlaceContentReply::setPreviousPageRequest(previous);
        }
    }

    // Virtual method for C ABI access and custom callback
    void setNextPageRequest(const QPlaceContentRequest& next) {
        if (qplacecontentreply_setnextpagerequest_isbase) {
            qplacecontentreply_setnextpagerequest_isbase = false;
            QPlaceContentReply::setNextPageRequest(next);
        } else if (qplacecontentreply_setnextpagerequest_callback != nullptr) {
            const QPlaceContentRequest& next_ret = next;
            // Cast returned reference into pointer
            QPlaceContentRequest* cbval1 = const_cast<QPlaceContentRequest*>(&next_ret);

            qplacecontentreply_setnextpagerequest_callback(this, cbval1);
        } else {
            QPlaceContentReply::setNextPageRequest(next);
        }
    }

    // Virtual method for C ABI access and custom callback
    void setFinished(bool finished) {
        if (qplacecontentreply_setfinished_isbase) {
            qplacecontentreply_setfinished_isbase = false;
            QPlaceContentReply::setFinished(finished);
        } else if (qplacecontentreply_setfinished_callback != nullptr) {
            bool cbval1 = finished;

            qplacecontentreply_setfinished_callback(this, cbval1);
        } else {
            QPlaceContentReply::setFinished(finished);
        }
    }

    // Virtual method for C ABI access and custom callback
    void setError(QPlaceReply::Error errorVal, const QString& errorString) {
        if (qplacecontentreply_seterror_isbase) {
            qplacecontentreply_seterror_isbase = false;
            QPlaceContentReply::setError(errorVal, errorString);
        } else if (qplacecontentreply_seterror_callback != nullptr) {
            int cbval1 = static_cast<int>(errorVal);
            const QString errorString_ret = errorString;
            // Convert QString from UTF-16 in C++ RAII memory to UTF-8 chars in manually-managed C memory
            QByteArray errorString_b = errorString_ret.toUtf8();
            auto errorString_str_len = errorString_b.length();
            const char* errorString_str = static_cast<const char*>(malloc(errorString_str_len + 1));
            memcpy((void*)errorString_str, errorString_b.data(), errorString_str_len);
            ((char*)errorString_str)[errorString_str_len] = '\0';
            const char* cbval2 = errorString_str;

            qplacecontentreply_seterror_callback(this, cbval1, cbval2);
            libqt_free(errorString_str);
        } else {
            QPlaceContentReply::setError(errorVal, errorString);
        }
    }

    // Virtual method for C ABI access and custom callback
    QObject* sender() const {
        if (qplacecontentreply_sender_isbase) {
            qplacecontentreply_sender_isbase = false;
            return QPlaceContentReply::sender();
        } else if (qplacecontentreply_sender_callback != nullptr) {
            QObject* callback_ret = qplacecontentreply_sender_callback();
            return callback_ret;
        } else {
            return QPlaceContentReply::sender();
        }
    }

    // Virtual method for C ABI access and custom callback
    int senderSignalIndex() const {
        if (qplacecontentreply_sendersignalindex_isbase) {
            qplacecontentreply_sendersignalindex_isbase = false;
            return QPlaceContentReply::senderSignalIndex();
        } else if (qplacecontentreply_sendersignalindex_callback != nullptr) {
            int callback_ret = qplacecontentreply_sendersignalindex_callback();
            return static_cast<int>(callback_ret);
        } else {
            return QPlaceContentReply::senderSignalIndex();
        }
    }

    // Virtual method for C ABI access and custom callback
    int receivers(const char* signal) const {
        if (qplacecontentreply_receivers_isbase) {
            qplacecontentreply_receivers_isbase = false;
            return QPlaceContentReply::receivers(signal);
        } else if (qplacecontentreply_receivers_callback != nullptr) {
            const char* cbval1 = (const char*)signal;

            int callback_ret = qplacecontentreply_receivers_callback(this, cbval1);
            return static_cast<int>(callback_ret);
        } else {
            return QPlaceContentReply::receivers(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    bool isSignalConnected(const QMetaMethod& signal) const {
        if (qplacecontentreply_issignalconnected_isbase) {
            qplacecontentreply_issignalconnected_isbase = false;
            return QPlaceContentReply::isSignalConnected(signal);
        } else if (qplacecontentreply_issignalconnected_callback != nullptr) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            bool callback_ret = qplacecontentreply_issignalconnected_callback(this, cbval1);
            return callback_ret;
        } else {
            return QPlaceContentReply::isSignalConnected(signal);
        }
    }

    // Friend functions
    friend void QPlaceContentReply_TimerEvent(QPlaceContentReply* self, QTimerEvent* event);
    friend void QPlaceContentReply_QBaseTimerEvent(QPlaceContentReply* self, QTimerEvent* event);
    friend void QPlaceContentReply_ChildEvent(QPlaceContentReply* self, QChildEvent* event);
    friend void QPlaceContentReply_QBaseChildEvent(QPlaceContentReply* self, QChildEvent* event);
    friend void QPlaceContentReply_CustomEvent(QPlaceContentReply* self, QEvent* event);
    friend void QPlaceContentReply_QBaseCustomEvent(QPlaceContentReply* self, QEvent* event);
    friend void QPlaceContentReply_ConnectNotify(QPlaceContentReply* self, const QMetaMethod* signal);
    friend void QPlaceContentReply_QBaseConnectNotify(QPlaceContentReply* self, const QMetaMethod* signal);
    friend void QPlaceContentReply_DisconnectNotify(QPlaceContentReply* self, const QMetaMethod* signal);
    friend void QPlaceContentReply_QBaseDisconnectNotify(QPlaceContentReply* self, const QMetaMethod* signal);
    friend void QPlaceContentReply_SetContent(QPlaceContentReply* self, const libqt_map /* of int to QPlaceContent* */ content);
    friend void QPlaceContentReply_QBaseSetContent(QPlaceContentReply* self, const libqt_map /* of int to QPlaceContent* */ content);
    friend void QPlaceContentReply_SetTotalCount(QPlaceContentReply* self, int total);
    friend void QPlaceContentReply_QBaseSetTotalCount(QPlaceContentReply* self, int total);
    friend void QPlaceContentReply_SetRequest(QPlaceContentReply* self, const QPlaceContentRequest* request);
    friend void QPlaceContentReply_QBaseSetRequest(QPlaceContentReply* self, const QPlaceContentRequest* request);
    friend void QPlaceContentReply_SetPreviousPageRequest(QPlaceContentReply* self, const QPlaceContentRequest* previous);
    friend void QPlaceContentReply_QBaseSetPreviousPageRequest(QPlaceContentReply* self, const QPlaceContentRequest* previous);
    friend void QPlaceContentReply_SetNextPageRequest(QPlaceContentReply* self, const QPlaceContentRequest* next);
    friend void QPlaceContentReply_QBaseSetNextPageRequest(QPlaceContentReply* self, const QPlaceContentRequest* next);
    friend void QPlaceContentReply_SetFinished(QPlaceContentReply* self, bool finished);
    friend void QPlaceContentReply_QBaseSetFinished(QPlaceContentReply* self, bool finished);
    friend void QPlaceContentReply_SetError(QPlaceContentReply* self, int errorVal, const libqt_string errorString);
    friend void QPlaceContentReply_QBaseSetError(QPlaceContentReply* self, int errorVal, const libqt_string errorString);
    friend QObject* QPlaceContentReply_Sender(const QPlaceContentReply* self);
    friend QObject* QPlaceContentReply_QBaseSender(const QPlaceContentReply* self);
    friend int QPlaceContentReply_SenderSignalIndex(const QPlaceContentReply* self);
    friend int QPlaceContentReply_QBaseSenderSignalIndex(const QPlaceContentReply* self);
    friend int QPlaceContentReply_Receivers(const QPlaceContentReply* self, const char* signal);
    friend int QPlaceContentReply_QBaseReceivers(const QPlaceContentReply* self, const char* signal);
    friend bool QPlaceContentReply_IsSignalConnected(const QPlaceContentReply* self, const QMetaMethod* signal);
    friend bool QPlaceContentReply_QBaseIsSignalConnected(const QPlaceContentReply* self, const QMetaMethod* signal);
};

#endif
