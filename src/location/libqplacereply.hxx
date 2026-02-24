#pragma once
#ifndef SRC_LOCATIONC_LIBVIRTUALQPLACEREPLY_H
#define SRC_LOCATIONC_LIBVIRTUALQPLACEREPLY_H

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

// This class is a subclass of QPlaceReply so that we can call protected methods
class VirtualQPlaceReply final : public QPlaceReply {

  public:
    // Virtual class boolean flag
    bool isVirtualQPlaceReply = true;

    // Virtual class public types (including callbacks)
    using QPlaceReply_MetaObject_Callback = QMetaObject* (*)();
    using QPlaceReply_Metacast_Callback = void* (*)(QPlaceReply*, const char*);
    using QPlaceReply_Metacall_Callback = int (*)(QPlaceReply*, int, int, void**);
    using QPlaceReply_Type_Callback = int (*)();
    using QPlaceReply_Abort_Callback = void (*)();
    using QPlaceReply_Event_Callback = bool (*)(QPlaceReply*, QEvent*);
    using QPlaceReply_EventFilter_Callback = bool (*)(QPlaceReply*, QObject*, QEvent*);
    using QPlaceReply_TimerEvent_Callback = void (*)(QPlaceReply*, QTimerEvent*);
    using QPlaceReply_ChildEvent_Callback = void (*)(QPlaceReply*, QChildEvent*);
    using QPlaceReply_CustomEvent_Callback = void (*)(QPlaceReply*, QEvent*);
    using QPlaceReply_ConnectNotify_Callback = void (*)(QPlaceReply*, QMetaMethod*);
    using QPlaceReply_DisconnectNotify_Callback = void (*)(QPlaceReply*, QMetaMethod*);
    using QPlaceReply_SetFinished_Callback = void (*)(QPlaceReply*, bool);
    using QPlaceReply_SetError_Callback = void (*)(QPlaceReply*, int, const char*);
    using QPlaceReply_Sender_Callback = QObject* (*)();
    using QPlaceReply_SenderSignalIndex_Callback = int (*)();
    using QPlaceReply_Receivers_Callback = int (*)(const QPlaceReply*, const char*);
    using QPlaceReply_IsSignalConnected_Callback = bool (*)(const QPlaceReply*, QMetaMethod*);

  protected:
    // Instance callback storage
    QPlaceReply_MetaObject_Callback qplacereply_metaobject_callback = nullptr;
    QPlaceReply_Metacast_Callback qplacereply_metacast_callback = nullptr;
    QPlaceReply_Metacall_Callback qplacereply_metacall_callback = nullptr;
    QPlaceReply_Type_Callback qplacereply_type_callback = nullptr;
    QPlaceReply_Abort_Callback qplacereply_abort_callback = nullptr;
    QPlaceReply_Event_Callback qplacereply_event_callback = nullptr;
    QPlaceReply_EventFilter_Callback qplacereply_eventfilter_callback = nullptr;
    QPlaceReply_TimerEvent_Callback qplacereply_timerevent_callback = nullptr;
    QPlaceReply_ChildEvent_Callback qplacereply_childevent_callback = nullptr;
    QPlaceReply_CustomEvent_Callback qplacereply_customevent_callback = nullptr;
    QPlaceReply_ConnectNotify_Callback qplacereply_connectnotify_callback = nullptr;
    QPlaceReply_DisconnectNotify_Callback qplacereply_disconnectnotify_callback = nullptr;
    QPlaceReply_SetFinished_Callback qplacereply_setfinished_callback = nullptr;
    QPlaceReply_SetError_Callback qplacereply_seterror_callback = nullptr;
    QPlaceReply_Sender_Callback qplacereply_sender_callback = nullptr;
    QPlaceReply_SenderSignalIndex_Callback qplacereply_sendersignalindex_callback = nullptr;
    QPlaceReply_Receivers_Callback qplacereply_receivers_callback = nullptr;
    QPlaceReply_IsSignalConnected_Callback qplacereply_issignalconnected_callback = nullptr;

    // Instance base flags
    mutable bool qplacereply_metaobject_isbase = false;
    mutable bool qplacereply_metacast_isbase = false;
    mutable bool qplacereply_metacall_isbase = false;
    mutable bool qplacereply_type_isbase = false;
    mutable bool qplacereply_abort_isbase = false;
    mutable bool qplacereply_event_isbase = false;
    mutable bool qplacereply_eventfilter_isbase = false;
    mutable bool qplacereply_timerevent_isbase = false;
    mutable bool qplacereply_childevent_isbase = false;
    mutable bool qplacereply_customevent_isbase = false;
    mutable bool qplacereply_connectnotify_isbase = false;
    mutable bool qplacereply_disconnectnotify_isbase = false;
    mutable bool qplacereply_setfinished_isbase = false;
    mutable bool qplacereply_seterror_isbase = false;
    mutable bool qplacereply_sender_isbase = false;
    mutable bool qplacereply_sendersignalindex_isbase = false;
    mutable bool qplacereply_receivers_isbase = false;
    mutable bool qplacereply_issignalconnected_isbase = false;

  public:
    VirtualQPlaceReply() : QPlaceReply() {};
    VirtualQPlaceReply(QObject* parent) : QPlaceReply(parent) {};

    ~VirtualQPlaceReply() {
        qplacereply_metaobject_callback = nullptr;
        qplacereply_metacast_callback = nullptr;
        qplacereply_metacall_callback = nullptr;
        qplacereply_type_callback = nullptr;
        qplacereply_abort_callback = nullptr;
        qplacereply_event_callback = nullptr;
        qplacereply_eventfilter_callback = nullptr;
        qplacereply_timerevent_callback = nullptr;
        qplacereply_childevent_callback = nullptr;
        qplacereply_customevent_callback = nullptr;
        qplacereply_connectnotify_callback = nullptr;
        qplacereply_disconnectnotify_callback = nullptr;
        qplacereply_setfinished_callback = nullptr;
        qplacereply_seterror_callback = nullptr;
        qplacereply_sender_callback = nullptr;
        qplacereply_sendersignalindex_callback = nullptr;
        qplacereply_receivers_callback = nullptr;
        qplacereply_issignalconnected_callback = nullptr;
    }

    // Callback setters
    inline void setQPlaceReply_MetaObject_Callback(QPlaceReply_MetaObject_Callback cb) { qplacereply_metaobject_callback = cb; }
    inline void setQPlaceReply_Metacast_Callback(QPlaceReply_Metacast_Callback cb) { qplacereply_metacast_callback = cb; }
    inline void setQPlaceReply_Metacall_Callback(QPlaceReply_Metacall_Callback cb) { qplacereply_metacall_callback = cb; }
    inline void setQPlaceReply_Type_Callback(QPlaceReply_Type_Callback cb) { qplacereply_type_callback = cb; }
    inline void setQPlaceReply_Abort_Callback(QPlaceReply_Abort_Callback cb) { qplacereply_abort_callback = cb; }
    inline void setQPlaceReply_Event_Callback(QPlaceReply_Event_Callback cb) { qplacereply_event_callback = cb; }
    inline void setQPlaceReply_EventFilter_Callback(QPlaceReply_EventFilter_Callback cb) { qplacereply_eventfilter_callback = cb; }
    inline void setQPlaceReply_TimerEvent_Callback(QPlaceReply_TimerEvent_Callback cb) { qplacereply_timerevent_callback = cb; }
    inline void setQPlaceReply_ChildEvent_Callback(QPlaceReply_ChildEvent_Callback cb) { qplacereply_childevent_callback = cb; }
    inline void setQPlaceReply_CustomEvent_Callback(QPlaceReply_CustomEvent_Callback cb) { qplacereply_customevent_callback = cb; }
    inline void setQPlaceReply_ConnectNotify_Callback(QPlaceReply_ConnectNotify_Callback cb) { qplacereply_connectnotify_callback = cb; }
    inline void setQPlaceReply_DisconnectNotify_Callback(QPlaceReply_DisconnectNotify_Callback cb) { qplacereply_disconnectnotify_callback = cb; }
    inline void setQPlaceReply_SetFinished_Callback(QPlaceReply_SetFinished_Callback cb) { qplacereply_setfinished_callback = cb; }
    inline void setQPlaceReply_SetError_Callback(QPlaceReply_SetError_Callback cb) { qplacereply_seterror_callback = cb; }
    inline void setQPlaceReply_Sender_Callback(QPlaceReply_Sender_Callback cb) { qplacereply_sender_callback = cb; }
    inline void setQPlaceReply_SenderSignalIndex_Callback(QPlaceReply_SenderSignalIndex_Callback cb) { qplacereply_sendersignalindex_callback = cb; }
    inline void setQPlaceReply_Receivers_Callback(QPlaceReply_Receivers_Callback cb) { qplacereply_receivers_callback = cb; }
    inline void setQPlaceReply_IsSignalConnected_Callback(QPlaceReply_IsSignalConnected_Callback cb) { qplacereply_issignalconnected_callback = cb; }

    // Base flag setters
    inline void setQPlaceReply_MetaObject_IsBase(bool value) const { qplacereply_metaobject_isbase = value; }
    inline void setQPlaceReply_Metacast_IsBase(bool value) const { qplacereply_metacast_isbase = value; }
    inline void setQPlaceReply_Metacall_IsBase(bool value) const { qplacereply_metacall_isbase = value; }
    inline void setQPlaceReply_Type_IsBase(bool value) const { qplacereply_type_isbase = value; }
    inline void setQPlaceReply_Abort_IsBase(bool value) const { qplacereply_abort_isbase = value; }
    inline void setQPlaceReply_Event_IsBase(bool value) const { qplacereply_event_isbase = value; }
    inline void setQPlaceReply_EventFilter_IsBase(bool value) const { qplacereply_eventfilter_isbase = value; }
    inline void setQPlaceReply_TimerEvent_IsBase(bool value) const { qplacereply_timerevent_isbase = value; }
    inline void setQPlaceReply_ChildEvent_IsBase(bool value) const { qplacereply_childevent_isbase = value; }
    inline void setQPlaceReply_CustomEvent_IsBase(bool value) const { qplacereply_customevent_isbase = value; }
    inline void setQPlaceReply_ConnectNotify_IsBase(bool value) const { qplacereply_connectnotify_isbase = value; }
    inline void setQPlaceReply_DisconnectNotify_IsBase(bool value) const { qplacereply_disconnectnotify_isbase = value; }
    inline void setQPlaceReply_SetFinished_IsBase(bool value) const { qplacereply_setfinished_isbase = value; }
    inline void setQPlaceReply_SetError_IsBase(bool value) const { qplacereply_seterror_isbase = value; }
    inline void setQPlaceReply_Sender_IsBase(bool value) const { qplacereply_sender_isbase = value; }
    inline void setQPlaceReply_SenderSignalIndex_IsBase(bool value) const { qplacereply_sendersignalindex_isbase = value; }
    inline void setQPlaceReply_Receivers_IsBase(bool value) const { qplacereply_receivers_isbase = value; }
    inline void setQPlaceReply_IsSignalConnected_IsBase(bool value) const { qplacereply_issignalconnected_isbase = value; }

    // Virtual method for C ABI access and custom callback
    virtual const QMetaObject* metaObject() const override {
        if (qplacereply_metaobject_isbase) {
            qplacereply_metaobject_isbase = false;
            return QPlaceReply::metaObject();
        } else if (qplacereply_metaobject_callback != nullptr) {
            QMetaObject* callback_ret = qplacereply_metaobject_callback();
            return callback_ret;
        } else {
            return QPlaceReply::metaObject();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void* qt_metacast(const char* param1) override {
        if (qplacereply_metacast_isbase) {
            qplacereply_metacast_isbase = false;
            return QPlaceReply::qt_metacast(param1);
        } else if (qplacereply_metacast_callback != nullptr) {
            const char* cbval1 = (const char*)param1;

            void* callback_ret = qplacereply_metacast_callback(this, cbval1);
            return callback_ret;
        } else {
            return QPlaceReply::qt_metacast(param1);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (qplacereply_metacall_isbase) {
            qplacereply_metacall_isbase = false;
            return QPlaceReply::qt_metacall(param1, param2, param3);
        } else if (qplacereply_metacall_callback != nullptr) {
            int cbval1 = static_cast<int>(param1);
            int cbval2 = param2;
            void** cbval3 = param3;

            int callback_ret = qplacereply_metacall_callback(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        } else {
            return QPlaceReply::qt_metacall(param1, param2, param3);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QPlaceReply::Type type() const override {
        if (qplacereply_type_isbase) {
            qplacereply_type_isbase = false;
            return QPlaceReply::type();
        } else if (qplacereply_type_callback != nullptr) {
            int callback_ret = qplacereply_type_callback();
            return static_cast<QPlaceReply::Type>(callback_ret);
        } else {
            return QPlaceReply::type();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void abort() override {
        if (qplacereply_abort_isbase) {
            qplacereply_abort_isbase = false;
            QPlaceReply::abort();
        } else if (qplacereply_abort_callback != nullptr) {
            qplacereply_abort_callback();
        } else {
            QPlaceReply::abort();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* event) override {
        if (qplacereply_event_isbase) {
            qplacereply_event_isbase = false;
            return QPlaceReply::event(event);
        } else if (qplacereply_event_callback != nullptr) {
            QEvent* cbval1 = event;

            bool callback_ret = qplacereply_event_callback(this, cbval1);
            return callback_ret;
        } else {
            return QPlaceReply::event(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* watched, QEvent* event) override {
        if (qplacereply_eventfilter_isbase) {
            qplacereply_eventfilter_isbase = false;
            return QPlaceReply::eventFilter(watched, event);
        } else if (qplacereply_eventfilter_callback != nullptr) {
            QObject* cbval1 = watched;
            QEvent* cbval2 = event;

            bool callback_ret = qplacereply_eventfilter_callback(this, cbval1, cbval2);
            return callback_ret;
        } else {
            return QPlaceReply::eventFilter(watched, event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (qplacereply_timerevent_isbase) {
            qplacereply_timerevent_isbase = false;
            QPlaceReply::timerEvent(event);
        } else if (qplacereply_timerevent_callback != nullptr) {
            QTimerEvent* cbval1 = event;

            qplacereply_timerevent_callback(this, cbval1);
        } else {
            QPlaceReply::timerEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (qplacereply_childevent_isbase) {
            qplacereply_childevent_isbase = false;
            QPlaceReply::childEvent(event);
        } else if (qplacereply_childevent_callback != nullptr) {
            QChildEvent* cbval1 = event;

            qplacereply_childevent_callback(this, cbval1);
        } else {
            QPlaceReply::childEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (qplacereply_customevent_isbase) {
            qplacereply_customevent_isbase = false;
            QPlaceReply::customEvent(event);
        } else if (qplacereply_customevent_callback != nullptr) {
            QEvent* cbval1 = event;

            qplacereply_customevent_callback(this, cbval1);
        } else {
            QPlaceReply::customEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (qplacereply_connectnotify_isbase) {
            qplacereply_connectnotify_isbase = false;
            QPlaceReply::connectNotify(signal);
        } else if (qplacereply_connectnotify_callback != nullptr) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            qplacereply_connectnotify_callback(this, cbval1);
        } else {
            QPlaceReply::connectNotify(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (qplacereply_disconnectnotify_isbase) {
            qplacereply_disconnectnotify_isbase = false;
            QPlaceReply::disconnectNotify(signal);
        } else if (qplacereply_disconnectnotify_callback != nullptr) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            qplacereply_disconnectnotify_callback(this, cbval1);
        } else {
            QPlaceReply::disconnectNotify(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    void setFinished(bool finished) {
        if (qplacereply_setfinished_isbase) {
            qplacereply_setfinished_isbase = false;
            QPlaceReply::setFinished(finished);
        } else if (qplacereply_setfinished_callback != nullptr) {
            bool cbval1 = finished;

            qplacereply_setfinished_callback(this, cbval1);
        } else {
            QPlaceReply::setFinished(finished);
        }
    }

    // Virtual method for C ABI access and custom callback
    void setError(QPlaceReply::Error errorVal, const QString& errorString) {
        if (qplacereply_seterror_isbase) {
            qplacereply_seterror_isbase = false;
            QPlaceReply::setError(errorVal, errorString);
        } else if (qplacereply_seterror_callback != nullptr) {
            int cbval1 = static_cast<int>(errorVal);
            const QString errorString_ret = errorString;
            // Convert QString from UTF-16 in C++ RAII memory to UTF-8 chars in manually-managed C memory
            QByteArray errorString_b = errorString_ret.toUtf8();
            auto errorString_str_len = errorString_b.length();
            const char* errorString_str = static_cast<const char*>(malloc(errorString_str_len + 1));
            memcpy((void*)errorString_str, errorString_b.data(), errorString_str_len);
            ((char*)errorString_str)[errorString_str_len] = '\0';
            const char* cbval2 = errorString_str;

            qplacereply_seterror_callback(this, cbval1, cbval2);
            libqt_free(errorString_str);
        } else {
            QPlaceReply::setError(errorVal, errorString);
        }
    }

    // Virtual method for C ABI access and custom callback
    QObject* sender() const {
        if (qplacereply_sender_isbase) {
            qplacereply_sender_isbase = false;
            return QPlaceReply::sender();
        } else if (qplacereply_sender_callback != nullptr) {
            QObject* callback_ret = qplacereply_sender_callback();
            return callback_ret;
        } else {
            return QPlaceReply::sender();
        }
    }

    // Virtual method for C ABI access and custom callback
    int senderSignalIndex() const {
        if (qplacereply_sendersignalindex_isbase) {
            qplacereply_sendersignalindex_isbase = false;
            return QPlaceReply::senderSignalIndex();
        } else if (qplacereply_sendersignalindex_callback != nullptr) {
            int callback_ret = qplacereply_sendersignalindex_callback();
            return static_cast<int>(callback_ret);
        } else {
            return QPlaceReply::senderSignalIndex();
        }
    }

    // Virtual method for C ABI access and custom callback
    int receivers(const char* signal) const {
        if (qplacereply_receivers_isbase) {
            qplacereply_receivers_isbase = false;
            return QPlaceReply::receivers(signal);
        } else if (qplacereply_receivers_callback != nullptr) {
            const char* cbval1 = (const char*)signal;

            int callback_ret = qplacereply_receivers_callback(this, cbval1);
            return static_cast<int>(callback_ret);
        } else {
            return QPlaceReply::receivers(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    bool isSignalConnected(const QMetaMethod& signal) const {
        if (qplacereply_issignalconnected_isbase) {
            qplacereply_issignalconnected_isbase = false;
            return QPlaceReply::isSignalConnected(signal);
        } else if (qplacereply_issignalconnected_callback != nullptr) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            bool callback_ret = qplacereply_issignalconnected_callback(this, cbval1);
            return callback_ret;
        } else {
            return QPlaceReply::isSignalConnected(signal);
        }
    }

    // Friend functions
    friend void QPlaceReply_TimerEvent(QPlaceReply* self, QTimerEvent* event);
    friend void QPlaceReply_SuperTimerEvent(QPlaceReply* self, QTimerEvent* event);
    friend void QPlaceReply_ChildEvent(QPlaceReply* self, QChildEvent* event);
    friend void QPlaceReply_SuperChildEvent(QPlaceReply* self, QChildEvent* event);
    friend void QPlaceReply_CustomEvent(QPlaceReply* self, QEvent* event);
    friend void QPlaceReply_SuperCustomEvent(QPlaceReply* self, QEvent* event);
    friend void QPlaceReply_ConnectNotify(QPlaceReply* self, const QMetaMethod* signal);
    friend void QPlaceReply_SuperConnectNotify(QPlaceReply* self, const QMetaMethod* signal);
    friend void QPlaceReply_DisconnectNotify(QPlaceReply* self, const QMetaMethod* signal);
    friend void QPlaceReply_SuperDisconnectNotify(QPlaceReply* self, const QMetaMethod* signal);
    friend void QPlaceReply_SetFinished(QPlaceReply* self, bool finished);
    friend void QPlaceReply_SuperSetFinished(QPlaceReply* self, bool finished);
    friend void QPlaceReply_SetError(QPlaceReply* self, int errorVal, const libqt_string errorString);
    friend void QPlaceReply_SuperSetError(QPlaceReply* self, int errorVal, const libqt_string errorString);
    friend QObject* QPlaceReply_Sender(const QPlaceReply* self);
    friend QObject* QPlaceReply_SuperSender(const QPlaceReply* self);
    friend int QPlaceReply_SenderSignalIndex(const QPlaceReply* self);
    friend int QPlaceReply_SuperSenderSignalIndex(const QPlaceReply* self);
    friend int QPlaceReply_Receivers(const QPlaceReply* self, const char* signal);
    friend int QPlaceReply_SuperReceivers(const QPlaceReply* self, const char* signal);
    friend bool QPlaceReply_IsSignalConnected(const QPlaceReply* self, const QMetaMethod* signal);
    friend bool QPlaceReply_SuperIsSignalConnected(const QPlaceReply* self, const QMetaMethod* signal);
};

#endif
