#pragma once
#ifndef SRC_LOCATIONC_LIBVIRTUALQPLACEDETAILSREPLY_H
#define SRC_LOCATIONC_LIBVIRTUALQPLACEDETAILSREPLY_H

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

// This class is a subclass of QPlaceDetailsReply so that we can call protected methods
class VirtualQPlaceDetailsReply final : public QPlaceDetailsReply {

  public:
    // Virtual class boolean flag
    bool isVirtualQPlaceDetailsReply = true;

    // Virtual class public types (including callbacks)
    using QPlaceDetailsReply_MetaObject_Callback = QMetaObject* (*)();
    using QPlaceDetailsReply_Metacast_Callback = void* (*)(QPlaceDetailsReply*, const char*);
    using QPlaceDetailsReply_Metacall_Callback = int (*)(QPlaceDetailsReply*, int, int, void**);
    using QPlaceDetailsReply_Type_Callback = int (*)();
    using QPlaceDetailsReply_Abort_Callback = void (*)();
    using QPlaceDetailsReply_Event_Callback = bool (*)(QPlaceDetailsReply*, QEvent*);
    using QPlaceDetailsReply_EventFilter_Callback = bool (*)(QPlaceDetailsReply*, QObject*, QEvent*);
    using QPlaceDetailsReply_TimerEvent_Callback = void (*)(QPlaceDetailsReply*, QTimerEvent*);
    using QPlaceDetailsReply_ChildEvent_Callback = void (*)(QPlaceDetailsReply*, QChildEvent*);
    using QPlaceDetailsReply_CustomEvent_Callback = void (*)(QPlaceDetailsReply*, QEvent*);
    using QPlaceDetailsReply_ConnectNotify_Callback = void (*)(QPlaceDetailsReply*, QMetaMethod*);
    using QPlaceDetailsReply_DisconnectNotify_Callback = void (*)(QPlaceDetailsReply*, QMetaMethod*);
    using QPlaceDetailsReply_SetPlace_Callback = void (*)(QPlaceDetailsReply*, QPlace*);
    using QPlaceDetailsReply_SetFinished_Callback = void (*)(QPlaceDetailsReply*, bool);
    using QPlaceDetailsReply_SetError_Callback = void (*)(QPlaceDetailsReply*, int, libqt_string);
    using QPlaceDetailsReply_Sender_Callback = QObject* (*)();
    using QPlaceDetailsReply_SenderSignalIndex_Callback = int (*)();
    using QPlaceDetailsReply_Receivers_Callback = int (*)(const QPlaceDetailsReply*, const char*);
    using QPlaceDetailsReply_IsSignalConnected_Callback = bool (*)(const QPlaceDetailsReply*, QMetaMethod*);

  protected:
    // Instance callback storage
    QPlaceDetailsReply_MetaObject_Callback qplacedetailsreply_metaobject_callback = nullptr;
    QPlaceDetailsReply_Metacast_Callback qplacedetailsreply_metacast_callback = nullptr;
    QPlaceDetailsReply_Metacall_Callback qplacedetailsreply_metacall_callback = nullptr;
    QPlaceDetailsReply_Type_Callback qplacedetailsreply_type_callback = nullptr;
    QPlaceDetailsReply_Abort_Callback qplacedetailsreply_abort_callback = nullptr;
    QPlaceDetailsReply_Event_Callback qplacedetailsreply_event_callback = nullptr;
    QPlaceDetailsReply_EventFilter_Callback qplacedetailsreply_eventfilter_callback = nullptr;
    QPlaceDetailsReply_TimerEvent_Callback qplacedetailsreply_timerevent_callback = nullptr;
    QPlaceDetailsReply_ChildEvent_Callback qplacedetailsreply_childevent_callback = nullptr;
    QPlaceDetailsReply_CustomEvent_Callback qplacedetailsreply_customevent_callback = nullptr;
    QPlaceDetailsReply_ConnectNotify_Callback qplacedetailsreply_connectnotify_callback = nullptr;
    QPlaceDetailsReply_DisconnectNotify_Callback qplacedetailsreply_disconnectnotify_callback = nullptr;
    QPlaceDetailsReply_SetPlace_Callback qplacedetailsreply_setplace_callback = nullptr;
    QPlaceDetailsReply_SetFinished_Callback qplacedetailsreply_setfinished_callback = nullptr;
    QPlaceDetailsReply_SetError_Callback qplacedetailsreply_seterror_callback = nullptr;
    QPlaceDetailsReply_Sender_Callback qplacedetailsreply_sender_callback = nullptr;
    QPlaceDetailsReply_SenderSignalIndex_Callback qplacedetailsreply_sendersignalindex_callback = nullptr;
    QPlaceDetailsReply_Receivers_Callback qplacedetailsreply_receivers_callback = nullptr;
    QPlaceDetailsReply_IsSignalConnected_Callback qplacedetailsreply_issignalconnected_callback = nullptr;

    // Instance base flags
    mutable bool qplacedetailsreply_metaobject_isbase = false;
    mutable bool qplacedetailsreply_metacast_isbase = false;
    mutable bool qplacedetailsreply_metacall_isbase = false;
    mutable bool qplacedetailsreply_type_isbase = false;
    mutable bool qplacedetailsreply_abort_isbase = false;
    mutable bool qplacedetailsreply_event_isbase = false;
    mutable bool qplacedetailsreply_eventfilter_isbase = false;
    mutable bool qplacedetailsreply_timerevent_isbase = false;
    mutable bool qplacedetailsreply_childevent_isbase = false;
    mutable bool qplacedetailsreply_customevent_isbase = false;
    mutable bool qplacedetailsreply_connectnotify_isbase = false;
    mutable bool qplacedetailsreply_disconnectnotify_isbase = false;
    mutable bool qplacedetailsreply_setplace_isbase = false;
    mutable bool qplacedetailsreply_setfinished_isbase = false;
    mutable bool qplacedetailsreply_seterror_isbase = false;
    mutable bool qplacedetailsreply_sender_isbase = false;
    mutable bool qplacedetailsreply_sendersignalindex_isbase = false;
    mutable bool qplacedetailsreply_receivers_isbase = false;
    mutable bool qplacedetailsreply_issignalconnected_isbase = false;

  public:
    VirtualQPlaceDetailsReply() : QPlaceDetailsReply() {};
    VirtualQPlaceDetailsReply(QObject* parent) : QPlaceDetailsReply(parent) {};

    ~VirtualQPlaceDetailsReply() {
        qplacedetailsreply_metaobject_callback = nullptr;
        qplacedetailsreply_metacast_callback = nullptr;
        qplacedetailsreply_metacall_callback = nullptr;
        qplacedetailsreply_type_callback = nullptr;
        qplacedetailsreply_abort_callback = nullptr;
        qplacedetailsreply_event_callback = nullptr;
        qplacedetailsreply_eventfilter_callback = nullptr;
        qplacedetailsreply_timerevent_callback = nullptr;
        qplacedetailsreply_childevent_callback = nullptr;
        qplacedetailsreply_customevent_callback = nullptr;
        qplacedetailsreply_connectnotify_callback = nullptr;
        qplacedetailsreply_disconnectnotify_callback = nullptr;
        qplacedetailsreply_setplace_callback = nullptr;
        qplacedetailsreply_setfinished_callback = nullptr;
        qplacedetailsreply_seterror_callback = nullptr;
        qplacedetailsreply_sender_callback = nullptr;
        qplacedetailsreply_sendersignalindex_callback = nullptr;
        qplacedetailsreply_receivers_callback = nullptr;
        qplacedetailsreply_issignalconnected_callback = nullptr;
    }

    // Callback setters
    inline void setQPlaceDetailsReply_MetaObject_Callback(QPlaceDetailsReply_MetaObject_Callback cb) { qplacedetailsreply_metaobject_callback = cb; }
    inline void setQPlaceDetailsReply_Metacast_Callback(QPlaceDetailsReply_Metacast_Callback cb) { qplacedetailsreply_metacast_callback = cb; }
    inline void setQPlaceDetailsReply_Metacall_Callback(QPlaceDetailsReply_Metacall_Callback cb) { qplacedetailsreply_metacall_callback = cb; }
    inline void setQPlaceDetailsReply_Type_Callback(QPlaceDetailsReply_Type_Callback cb) { qplacedetailsreply_type_callback = cb; }
    inline void setQPlaceDetailsReply_Abort_Callback(QPlaceDetailsReply_Abort_Callback cb) { qplacedetailsreply_abort_callback = cb; }
    inline void setQPlaceDetailsReply_Event_Callback(QPlaceDetailsReply_Event_Callback cb) { qplacedetailsreply_event_callback = cb; }
    inline void setQPlaceDetailsReply_EventFilter_Callback(QPlaceDetailsReply_EventFilter_Callback cb) { qplacedetailsreply_eventfilter_callback = cb; }
    inline void setQPlaceDetailsReply_TimerEvent_Callback(QPlaceDetailsReply_TimerEvent_Callback cb) { qplacedetailsreply_timerevent_callback = cb; }
    inline void setQPlaceDetailsReply_ChildEvent_Callback(QPlaceDetailsReply_ChildEvent_Callback cb) { qplacedetailsreply_childevent_callback = cb; }
    inline void setQPlaceDetailsReply_CustomEvent_Callback(QPlaceDetailsReply_CustomEvent_Callback cb) { qplacedetailsreply_customevent_callback = cb; }
    inline void setQPlaceDetailsReply_ConnectNotify_Callback(QPlaceDetailsReply_ConnectNotify_Callback cb) { qplacedetailsreply_connectnotify_callback = cb; }
    inline void setQPlaceDetailsReply_DisconnectNotify_Callback(QPlaceDetailsReply_DisconnectNotify_Callback cb) { qplacedetailsreply_disconnectnotify_callback = cb; }
    inline void setQPlaceDetailsReply_SetPlace_Callback(QPlaceDetailsReply_SetPlace_Callback cb) { qplacedetailsreply_setplace_callback = cb; }
    inline void setQPlaceDetailsReply_SetFinished_Callback(QPlaceDetailsReply_SetFinished_Callback cb) { qplacedetailsreply_setfinished_callback = cb; }
    inline void setQPlaceDetailsReply_SetError_Callback(QPlaceDetailsReply_SetError_Callback cb) { qplacedetailsreply_seterror_callback = cb; }
    inline void setQPlaceDetailsReply_Sender_Callback(QPlaceDetailsReply_Sender_Callback cb) { qplacedetailsreply_sender_callback = cb; }
    inline void setQPlaceDetailsReply_SenderSignalIndex_Callback(QPlaceDetailsReply_SenderSignalIndex_Callback cb) { qplacedetailsreply_sendersignalindex_callback = cb; }
    inline void setQPlaceDetailsReply_Receivers_Callback(QPlaceDetailsReply_Receivers_Callback cb) { qplacedetailsreply_receivers_callback = cb; }
    inline void setQPlaceDetailsReply_IsSignalConnected_Callback(QPlaceDetailsReply_IsSignalConnected_Callback cb) { qplacedetailsreply_issignalconnected_callback = cb; }

    // Base flag setters
    inline void setQPlaceDetailsReply_MetaObject_IsBase(bool value) const { qplacedetailsreply_metaobject_isbase = value; }
    inline void setQPlaceDetailsReply_Metacast_IsBase(bool value) const { qplacedetailsreply_metacast_isbase = value; }
    inline void setQPlaceDetailsReply_Metacall_IsBase(bool value) const { qplacedetailsreply_metacall_isbase = value; }
    inline void setQPlaceDetailsReply_Type_IsBase(bool value) const { qplacedetailsreply_type_isbase = value; }
    inline void setQPlaceDetailsReply_Abort_IsBase(bool value) const { qplacedetailsreply_abort_isbase = value; }
    inline void setQPlaceDetailsReply_Event_IsBase(bool value) const { qplacedetailsreply_event_isbase = value; }
    inline void setQPlaceDetailsReply_EventFilter_IsBase(bool value) const { qplacedetailsreply_eventfilter_isbase = value; }
    inline void setQPlaceDetailsReply_TimerEvent_IsBase(bool value) const { qplacedetailsreply_timerevent_isbase = value; }
    inline void setQPlaceDetailsReply_ChildEvent_IsBase(bool value) const { qplacedetailsreply_childevent_isbase = value; }
    inline void setQPlaceDetailsReply_CustomEvent_IsBase(bool value) const { qplacedetailsreply_customevent_isbase = value; }
    inline void setQPlaceDetailsReply_ConnectNotify_IsBase(bool value) const { qplacedetailsreply_connectnotify_isbase = value; }
    inline void setQPlaceDetailsReply_DisconnectNotify_IsBase(bool value) const { qplacedetailsreply_disconnectnotify_isbase = value; }
    inline void setQPlaceDetailsReply_SetPlace_IsBase(bool value) const { qplacedetailsreply_setplace_isbase = value; }
    inline void setQPlaceDetailsReply_SetFinished_IsBase(bool value) const { qplacedetailsreply_setfinished_isbase = value; }
    inline void setQPlaceDetailsReply_SetError_IsBase(bool value) const { qplacedetailsreply_seterror_isbase = value; }
    inline void setQPlaceDetailsReply_Sender_IsBase(bool value) const { qplacedetailsreply_sender_isbase = value; }
    inline void setQPlaceDetailsReply_SenderSignalIndex_IsBase(bool value) const { qplacedetailsreply_sendersignalindex_isbase = value; }
    inline void setQPlaceDetailsReply_Receivers_IsBase(bool value) const { qplacedetailsreply_receivers_isbase = value; }
    inline void setQPlaceDetailsReply_IsSignalConnected_IsBase(bool value) const { qplacedetailsreply_issignalconnected_isbase = value; }

    // Virtual method for C ABI access and custom callback
    virtual const QMetaObject* metaObject() const override {
        if (qplacedetailsreply_metaobject_isbase) {
            qplacedetailsreply_metaobject_isbase = false;
            return QPlaceDetailsReply::metaObject();
        } else if (qplacedetailsreply_metaobject_callback != nullptr) {
            QMetaObject* callback_ret = qplacedetailsreply_metaobject_callback();
            return callback_ret;
        } else {
            return QPlaceDetailsReply::metaObject();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void* qt_metacast(const char* param1) override {
        if (qplacedetailsreply_metacast_isbase) {
            qplacedetailsreply_metacast_isbase = false;
            return QPlaceDetailsReply::qt_metacast(param1);
        } else if (qplacedetailsreply_metacast_callback != nullptr) {
            const char* cbval1 = (const char*)param1;

            void* callback_ret = qplacedetailsreply_metacast_callback(this, cbval1);
            return callback_ret;
        } else {
            return QPlaceDetailsReply::qt_metacast(param1);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (qplacedetailsreply_metacall_isbase) {
            qplacedetailsreply_metacall_isbase = false;
            return QPlaceDetailsReply::qt_metacall(param1, param2, param3);
        } else if (qplacedetailsreply_metacall_callback != nullptr) {
            int cbval1 = static_cast<int>(param1);
            int cbval2 = param2;
            void** cbval3 = param3;

            int callback_ret = qplacedetailsreply_metacall_callback(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        } else {
            return QPlaceDetailsReply::qt_metacall(param1, param2, param3);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QPlaceReply::Type type() const override {
        if (qplacedetailsreply_type_isbase) {
            qplacedetailsreply_type_isbase = false;
            return QPlaceDetailsReply::type();
        } else if (qplacedetailsreply_type_callback != nullptr) {
            int callback_ret = qplacedetailsreply_type_callback();
            return static_cast<QPlaceReply::Type>(callback_ret);
        } else {
            return QPlaceDetailsReply::type();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void abort() override {
        if (qplacedetailsreply_abort_isbase) {
            qplacedetailsreply_abort_isbase = false;
            QPlaceDetailsReply::abort();
        } else if (qplacedetailsreply_abort_callback != nullptr) {
            qplacedetailsreply_abort_callback();
        } else {
            QPlaceDetailsReply::abort();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* event) override {
        if (qplacedetailsreply_event_isbase) {
            qplacedetailsreply_event_isbase = false;
            return QPlaceDetailsReply::event(event);
        } else if (qplacedetailsreply_event_callback != nullptr) {
            QEvent* cbval1 = event;

            bool callback_ret = qplacedetailsreply_event_callback(this, cbval1);
            return callback_ret;
        } else {
            return QPlaceDetailsReply::event(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* watched, QEvent* event) override {
        if (qplacedetailsreply_eventfilter_isbase) {
            qplacedetailsreply_eventfilter_isbase = false;
            return QPlaceDetailsReply::eventFilter(watched, event);
        } else if (qplacedetailsreply_eventfilter_callback != nullptr) {
            QObject* cbval1 = watched;
            QEvent* cbval2 = event;

            bool callback_ret = qplacedetailsreply_eventfilter_callback(this, cbval1, cbval2);
            return callback_ret;
        } else {
            return QPlaceDetailsReply::eventFilter(watched, event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (qplacedetailsreply_timerevent_isbase) {
            qplacedetailsreply_timerevent_isbase = false;
            QPlaceDetailsReply::timerEvent(event);
        } else if (qplacedetailsreply_timerevent_callback != nullptr) {
            QTimerEvent* cbval1 = event;

            qplacedetailsreply_timerevent_callback(this, cbval1);
        } else {
            QPlaceDetailsReply::timerEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (qplacedetailsreply_childevent_isbase) {
            qplacedetailsreply_childevent_isbase = false;
            QPlaceDetailsReply::childEvent(event);
        } else if (qplacedetailsreply_childevent_callback != nullptr) {
            QChildEvent* cbval1 = event;

            qplacedetailsreply_childevent_callback(this, cbval1);
        } else {
            QPlaceDetailsReply::childEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (qplacedetailsreply_customevent_isbase) {
            qplacedetailsreply_customevent_isbase = false;
            QPlaceDetailsReply::customEvent(event);
        } else if (qplacedetailsreply_customevent_callback != nullptr) {
            QEvent* cbval1 = event;

            qplacedetailsreply_customevent_callback(this, cbval1);
        } else {
            QPlaceDetailsReply::customEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (qplacedetailsreply_connectnotify_isbase) {
            qplacedetailsreply_connectnotify_isbase = false;
            QPlaceDetailsReply::connectNotify(signal);
        } else if (qplacedetailsreply_connectnotify_callback != nullptr) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            qplacedetailsreply_connectnotify_callback(this, cbval1);
        } else {
            QPlaceDetailsReply::connectNotify(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (qplacedetailsreply_disconnectnotify_isbase) {
            qplacedetailsreply_disconnectnotify_isbase = false;
            QPlaceDetailsReply::disconnectNotify(signal);
        } else if (qplacedetailsreply_disconnectnotify_callback != nullptr) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            qplacedetailsreply_disconnectnotify_callback(this, cbval1);
        } else {
            QPlaceDetailsReply::disconnectNotify(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    void setPlace(const QPlace& place) {
        if (qplacedetailsreply_setplace_isbase) {
            qplacedetailsreply_setplace_isbase = false;
            QPlaceDetailsReply::setPlace(place);
        } else if (qplacedetailsreply_setplace_callback != nullptr) {
            const QPlace& place_ret = place;
            // Cast returned reference into pointer
            QPlace* cbval1 = const_cast<QPlace*>(&place_ret);

            qplacedetailsreply_setplace_callback(this, cbval1);
        } else {
            QPlaceDetailsReply::setPlace(place);
        }
    }

    // Virtual method for C ABI access and custom callback
    void setFinished(bool finished) {
        if (qplacedetailsreply_setfinished_isbase) {
            qplacedetailsreply_setfinished_isbase = false;
            QPlaceDetailsReply::setFinished(finished);
        } else if (qplacedetailsreply_setfinished_callback != nullptr) {
            bool cbval1 = finished;

            qplacedetailsreply_setfinished_callback(this, cbval1);
        } else {
            QPlaceDetailsReply::setFinished(finished);
        }
    }

    // Virtual method for C ABI access and custom callback
    void setError(QPlaceReply::Error errorVal, const QString& errorString) {
        if (qplacedetailsreply_seterror_isbase) {
            qplacedetailsreply_seterror_isbase = false;
            QPlaceDetailsReply::setError(errorVal, errorString);
        } else if (qplacedetailsreply_seterror_callback != nullptr) {
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

            qplacedetailsreply_seterror_callback(this, cbval1, cbval2);
        } else {
            QPlaceDetailsReply::setError(errorVal, errorString);
        }
    }

    // Virtual method for C ABI access and custom callback
    QObject* sender() const {
        if (qplacedetailsreply_sender_isbase) {
            qplacedetailsreply_sender_isbase = false;
            return QPlaceDetailsReply::sender();
        } else if (qplacedetailsreply_sender_callback != nullptr) {
            QObject* callback_ret = qplacedetailsreply_sender_callback();
            return callback_ret;
        } else {
            return QPlaceDetailsReply::sender();
        }
    }

    // Virtual method for C ABI access and custom callback
    int senderSignalIndex() const {
        if (qplacedetailsreply_sendersignalindex_isbase) {
            qplacedetailsreply_sendersignalindex_isbase = false;
            return QPlaceDetailsReply::senderSignalIndex();
        } else if (qplacedetailsreply_sendersignalindex_callback != nullptr) {
            int callback_ret = qplacedetailsreply_sendersignalindex_callback();
            return static_cast<int>(callback_ret);
        } else {
            return QPlaceDetailsReply::senderSignalIndex();
        }
    }

    // Virtual method for C ABI access and custom callback
    int receivers(const char* signal) const {
        if (qplacedetailsreply_receivers_isbase) {
            qplacedetailsreply_receivers_isbase = false;
            return QPlaceDetailsReply::receivers(signal);
        } else if (qplacedetailsreply_receivers_callback != nullptr) {
            const char* cbval1 = (const char*)signal;

            int callback_ret = qplacedetailsreply_receivers_callback(this, cbval1);
            return static_cast<int>(callback_ret);
        } else {
            return QPlaceDetailsReply::receivers(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    bool isSignalConnected(const QMetaMethod& signal) const {
        if (qplacedetailsreply_issignalconnected_isbase) {
            qplacedetailsreply_issignalconnected_isbase = false;
            return QPlaceDetailsReply::isSignalConnected(signal);
        } else if (qplacedetailsreply_issignalconnected_callback != nullptr) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            bool callback_ret = qplacedetailsreply_issignalconnected_callback(this, cbval1);
            return callback_ret;
        } else {
            return QPlaceDetailsReply::isSignalConnected(signal);
        }
    }

    // Friend functions
    friend void QPlaceDetailsReply_TimerEvent(QPlaceDetailsReply* self, QTimerEvent* event);
    friend void QPlaceDetailsReply_QBaseTimerEvent(QPlaceDetailsReply* self, QTimerEvent* event);
    friend void QPlaceDetailsReply_ChildEvent(QPlaceDetailsReply* self, QChildEvent* event);
    friend void QPlaceDetailsReply_QBaseChildEvent(QPlaceDetailsReply* self, QChildEvent* event);
    friend void QPlaceDetailsReply_CustomEvent(QPlaceDetailsReply* self, QEvent* event);
    friend void QPlaceDetailsReply_QBaseCustomEvent(QPlaceDetailsReply* self, QEvent* event);
    friend void QPlaceDetailsReply_ConnectNotify(QPlaceDetailsReply* self, const QMetaMethod* signal);
    friend void QPlaceDetailsReply_QBaseConnectNotify(QPlaceDetailsReply* self, const QMetaMethod* signal);
    friend void QPlaceDetailsReply_DisconnectNotify(QPlaceDetailsReply* self, const QMetaMethod* signal);
    friend void QPlaceDetailsReply_QBaseDisconnectNotify(QPlaceDetailsReply* self, const QMetaMethod* signal);
    friend void QPlaceDetailsReply_SetPlace(QPlaceDetailsReply* self, const QPlace* place);
    friend void QPlaceDetailsReply_QBaseSetPlace(QPlaceDetailsReply* self, const QPlace* place);
    friend void QPlaceDetailsReply_SetFinished(QPlaceDetailsReply* self, bool finished);
    friend void QPlaceDetailsReply_QBaseSetFinished(QPlaceDetailsReply* self, bool finished);
    friend void QPlaceDetailsReply_SetError(QPlaceDetailsReply* self, int errorVal, const libqt_string errorString);
    friend void QPlaceDetailsReply_QBaseSetError(QPlaceDetailsReply* self, int errorVal, const libqt_string errorString);
    friend QObject* QPlaceDetailsReply_Sender(const QPlaceDetailsReply* self);
    friend QObject* QPlaceDetailsReply_QBaseSender(const QPlaceDetailsReply* self);
    friend int QPlaceDetailsReply_SenderSignalIndex(const QPlaceDetailsReply* self);
    friend int QPlaceDetailsReply_QBaseSenderSignalIndex(const QPlaceDetailsReply* self);
    friend int QPlaceDetailsReply_Receivers(const QPlaceDetailsReply* self, const char* signal);
    friend int QPlaceDetailsReply_QBaseReceivers(const QPlaceDetailsReply* self, const char* signal);
    friend bool QPlaceDetailsReply_IsSignalConnected(const QPlaceDetailsReply* self, const QMetaMethod* signal);
    friend bool QPlaceDetailsReply_QBaseIsSignalConnected(const QPlaceDetailsReply* self, const QMetaMethod* signal);
};

#endif
