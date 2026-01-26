#pragma once
#ifndef SRC_LOCATIONC_LIBVIRTUALQPLACEIDREPLY_H
#define SRC_LOCATIONC_LIBVIRTUALQPLACEIDREPLY_H

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

// This class is a subclass of QPlaceIdReply so that we can call protected methods
class VirtualQPlaceIdReply final : public QPlaceIdReply {

  public:
    // Virtual class boolean flag
    bool isVirtualQPlaceIdReply = true;

    // Virtual class public types (including callbacks)
    using QPlaceIdReply_MetaObject_Callback = QMetaObject* (*)();
    using QPlaceIdReply_Metacast_Callback = void* (*)(QPlaceIdReply*, const char*);
    using QPlaceIdReply_Metacall_Callback = int (*)(QPlaceIdReply*, int, int, void**);
    using QPlaceIdReply_Type_Callback = int (*)();
    using QPlaceIdReply_Abort_Callback = void (*)();
    using QPlaceIdReply_Event_Callback = bool (*)(QPlaceIdReply*, QEvent*);
    using QPlaceIdReply_EventFilter_Callback = bool (*)(QPlaceIdReply*, QObject*, QEvent*);
    using QPlaceIdReply_TimerEvent_Callback = void (*)(QPlaceIdReply*, QTimerEvent*);
    using QPlaceIdReply_ChildEvent_Callback = void (*)(QPlaceIdReply*, QChildEvent*);
    using QPlaceIdReply_CustomEvent_Callback = void (*)(QPlaceIdReply*, QEvent*);
    using QPlaceIdReply_ConnectNotify_Callback = void (*)(QPlaceIdReply*, QMetaMethod*);
    using QPlaceIdReply_DisconnectNotify_Callback = void (*)(QPlaceIdReply*, QMetaMethod*);
    using QPlaceIdReply_SetId_Callback = void (*)(QPlaceIdReply*, libqt_string);
    using QPlaceIdReply_SetFinished_Callback = void (*)(QPlaceIdReply*, bool);
    using QPlaceIdReply_SetError_Callback = void (*)(QPlaceIdReply*, int, libqt_string);
    using QPlaceIdReply_Sender_Callback = QObject* (*)();
    using QPlaceIdReply_SenderSignalIndex_Callback = int (*)();
    using QPlaceIdReply_Receivers_Callback = int (*)(const QPlaceIdReply*, const char*);
    using QPlaceIdReply_IsSignalConnected_Callback = bool (*)(const QPlaceIdReply*, QMetaMethod*);

  protected:
    // Instance callback storage
    QPlaceIdReply_MetaObject_Callback qplaceidreply_metaobject_callback = nullptr;
    QPlaceIdReply_Metacast_Callback qplaceidreply_metacast_callback = nullptr;
    QPlaceIdReply_Metacall_Callback qplaceidreply_metacall_callback = nullptr;
    QPlaceIdReply_Type_Callback qplaceidreply_type_callback = nullptr;
    QPlaceIdReply_Abort_Callback qplaceidreply_abort_callback = nullptr;
    QPlaceIdReply_Event_Callback qplaceidreply_event_callback = nullptr;
    QPlaceIdReply_EventFilter_Callback qplaceidreply_eventfilter_callback = nullptr;
    QPlaceIdReply_TimerEvent_Callback qplaceidreply_timerevent_callback = nullptr;
    QPlaceIdReply_ChildEvent_Callback qplaceidreply_childevent_callback = nullptr;
    QPlaceIdReply_CustomEvent_Callback qplaceidreply_customevent_callback = nullptr;
    QPlaceIdReply_ConnectNotify_Callback qplaceidreply_connectnotify_callback = nullptr;
    QPlaceIdReply_DisconnectNotify_Callback qplaceidreply_disconnectnotify_callback = nullptr;
    QPlaceIdReply_SetId_Callback qplaceidreply_setid_callback = nullptr;
    QPlaceIdReply_SetFinished_Callback qplaceidreply_setfinished_callback = nullptr;
    QPlaceIdReply_SetError_Callback qplaceidreply_seterror_callback = nullptr;
    QPlaceIdReply_Sender_Callback qplaceidreply_sender_callback = nullptr;
    QPlaceIdReply_SenderSignalIndex_Callback qplaceidreply_sendersignalindex_callback = nullptr;
    QPlaceIdReply_Receivers_Callback qplaceidreply_receivers_callback = nullptr;
    QPlaceIdReply_IsSignalConnected_Callback qplaceidreply_issignalconnected_callback = nullptr;

    // Instance base flags
    mutable bool qplaceidreply_metaobject_isbase = false;
    mutable bool qplaceidreply_metacast_isbase = false;
    mutable bool qplaceidreply_metacall_isbase = false;
    mutable bool qplaceidreply_type_isbase = false;
    mutable bool qplaceidreply_abort_isbase = false;
    mutable bool qplaceidreply_event_isbase = false;
    mutable bool qplaceidreply_eventfilter_isbase = false;
    mutable bool qplaceidreply_timerevent_isbase = false;
    mutable bool qplaceidreply_childevent_isbase = false;
    mutable bool qplaceidreply_customevent_isbase = false;
    mutable bool qplaceidreply_connectnotify_isbase = false;
    mutable bool qplaceidreply_disconnectnotify_isbase = false;
    mutable bool qplaceidreply_setid_isbase = false;
    mutable bool qplaceidreply_setfinished_isbase = false;
    mutable bool qplaceidreply_seterror_isbase = false;
    mutable bool qplaceidreply_sender_isbase = false;
    mutable bool qplaceidreply_sendersignalindex_isbase = false;
    mutable bool qplaceidreply_receivers_isbase = false;
    mutable bool qplaceidreply_issignalconnected_isbase = false;

  public:
    VirtualQPlaceIdReply(QPlaceIdReply::OperationType operationType) : QPlaceIdReply(operationType) {};
    VirtualQPlaceIdReply(QPlaceIdReply::OperationType operationType, QObject* parent) : QPlaceIdReply(operationType, parent) {};

    ~VirtualQPlaceIdReply() {
        qplaceidreply_metaobject_callback = nullptr;
        qplaceidreply_metacast_callback = nullptr;
        qplaceidreply_metacall_callback = nullptr;
        qplaceidreply_type_callback = nullptr;
        qplaceidreply_abort_callback = nullptr;
        qplaceidreply_event_callback = nullptr;
        qplaceidreply_eventfilter_callback = nullptr;
        qplaceidreply_timerevent_callback = nullptr;
        qplaceidreply_childevent_callback = nullptr;
        qplaceidreply_customevent_callback = nullptr;
        qplaceidreply_connectnotify_callback = nullptr;
        qplaceidreply_disconnectnotify_callback = nullptr;
        qplaceidreply_setid_callback = nullptr;
        qplaceidreply_setfinished_callback = nullptr;
        qplaceidreply_seterror_callback = nullptr;
        qplaceidreply_sender_callback = nullptr;
        qplaceidreply_sendersignalindex_callback = nullptr;
        qplaceidreply_receivers_callback = nullptr;
        qplaceidreply_issignalconnected_callback = nullptr;
    }

    // Callback setters
    inline void setQPlaceIdReply_MetaObject_Callback(QPlaceIdReply_MetaObject_Callback cb) { qplaceidreply_metaobject_callback = cb; }
    inline void setQPlaceIdReply_Metacast_Callback(QPlaceIdReply_Metacast_Callback cb) { qplaceidreply_metacast_callback = cb; }
    inline void setQPlaceIdReply_Metacall_Callback(QPlaceIdReply_Metacall_Callback cb) { qplaceidreply_metacall_callback = cb; }
    inline void setQPlaceIdReply_Type_Callback(QPlaceIdReply_Type_Callback cb) { qplaceidreply_type_callback = cb; }
    inline void setQPlaceIdReply_Abort_Callback(QPlaceIdReply_Abort_Callback cb) { qplaceidreply_abort_callback = cb; }
    inline void setQPlaceIdReply_Event_Callback(QPlaceIdReply_Event_Callback cb) { qplaceidreply_event_callback = cb; }
    inline void setQPlaceIdReply_EventFilter_Callback(QPlaceIdReply_EventFilter_Callback cb) { qplaceidreply_eventfilter_callback = cb; }
    inline void setQPlaceIdReply_TimerEvent_Callback(QPlaceIdReply_TimerEvent_Callback cb) { qplaceidreply_timerevent_callback = cb; }
    inline void setQPlaceIdReply_ChildEvent_Callback(QPlaceIdReply_ChildEvent_Callback cb) { qplaceidreply_childevent_callback = cb; }
    inline void setQPlaceIdReply_CustomEvent_Callback(QPlaceIdReply_CustomEvent_Callback cb) { qplaceidreply_customevent_callback = cb; }
    inline void setQPlaceIdReply_ConnectNotify_Callback(QPlaceIdReply_ConnectNotify_Callback cb) { qplaceidreply_connectnotify_callback = cb; }
    inline void setQPlaceIdReply_DisconnectNotify_Callback(QPlaceIdReply_DisconnectNotify_Callback cb) { qplaceidreply_disconnectnotify_callback = cb; }
    inline void setQPlaceIdReply_SetId_Callback(QPlaceIdReply_SetId_Callback cb) { qplaceidreply_setid_callback = cb; }
    inline void setQPlaceIdReply_SetFinished_Callback(QPlaceIdReply_SetFinished_Callback cb) { qplaceidreply_setfinished_callback = cb; }
    inline void setQPlaceIdReply_SetError_Callback(QPlaceIdReply_SetError_Callback cb) { qplaceidreply_seterror_callback = cb; }
    inline void setQPlaceIdReply_Sender_Callback(QPlaceIdReply_Sender_Callback cb) { qplaceidreply_sender_callback = cb; }
    inline void setQPlaceIdReply_SenderSignalIndex_Callback(QPlaceIdReply_SenderSignalIndex_Callback cb) { qplaceidreply_sendersignalindex_callback = cb; }
    inline void setQPlaceIdReply_Receivers_Callback(QPlaceIdReply_Receivers_Callback cb) { qplaceidreply_receivers_callback = cb; }
    inline void setQPlaceIdReply_IsSignalConnected_Callback(QPlaceIdReply_IsSignalConnected_Callback cb) { qplaceidreply_issignalconnected_callback = cb; }

    // Base flag setters
    inline void setQPlaceIdReply_MetaObject_IsBase(bool value) const { qplaceidreply_metaobject_isbase = value; }
    inline void setQPlaceIdReply_Metacast_IsBase(bool value) const { qplaceidreply_metacast_isbase = value; }
    inline void setQPlaceIdReply_Metacall_IsBase(bool value) const { qplaceidreply_metacall_isbase = value; }
    inline void setQPlaceIdReply_Type_IsBase(bool value) const { qplaceidreply_type_isbase = value; }
    inline void setQPlaceIdReply_Abort_IsBase(bool value) const { qplaceidreply_abort_isbase = value; }
    inline void setQPlaceIdReply_Event_IsBase(bool value) const { qplaceidreply_event_isbase = value; }
    inline void setQPlaceIdReply_EventFilter_IsBase(bool value) const { qplaceidreply_eventfilter_isbase = value; }
    inline void setQPlaceIdReply_TimerEvent_IsBase(bool value) const { qplaceidreply_timerevent_isbase = value; }
    inline void setQPlaceIdReply_ChildEvent_IsBase(bool value) const { qplaceidreply_childevent_isbase = value; }
    inline void setQPlaceIdReply_CustomEvent_IsBase(bool value) const { qplaceidreply_customevent_isbase = value; }
    inline void setQPlaceIdReply_ConnectNotify_IsBase(bool value) const { qplaceidreply_connectnotify_isbase = value; }
    inline void setQPlaceIdReply_DisconnectNotify_IsBase(bool value) const { qplaceidreply_disconnectnotify_isbase = value; }
    inline void setQPlaceIdReply_SetId_IsBase(bool value) const { qplaceidreply_setid_isbase = value; }
    inline void setQPlaceIdReply_SetFinished_IsBase(bool value) const { qplaceidreply_setfinished_isbase = value; }
    inline void setQPlaceIdReply_SetError_IsBase(bool value) const { qplaceidreply_seterror_isbase = value; }
    inline void setQPlaceIdReply_Sender_IsBase(bool value) const { qplaceidreply_sender_isbase = value; }
    inline void setQPlaceIdReply_SenderSignalIndex_IsBase(bool value) const { qplaceidreply_sendersignalindex_isbase = value; }
    inline void setQPlaceIdReply_Receivers_IsBase(bool value) const { qplaceidreply_receivers_isbase = value; }
    inline void setQPlaceIdReply_IsSignalConnected_IsBase(bool value) const { qplaceidreply_issignalconnected_isbase = value; }

    // Virtual method for C ABI access and custom callback
    virtual const QMetaObject* metaObject() const override {
        if (qplaceidreply_metaobject_isbase) {
            qplaceidreply_metaobject_isbase = false;
            return QPlaceIdReply::metaObject();
        } else if (qplaceidreply_metaobject_callback != nullptr) {
            QMetaObject* callback_ret = qplaceidreply_metaobject_callback();
            return callback_ret;
        } else {
            return QPlaceIdReply::metaObject();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void* qt_metacast(const char* param1) override {
        if (qplaceidreply_metacast_isbase) {
            qplaceidreply_metacast_isbase = false;
            return QPlaceIdReply::qt_metacast(param1);
        } else if (qplaceidreply_metacast_callback != nullptr) {
            const char* cbval1 = (const char*)param1;

            void* callback_ret = qplaceidreply_metacast_callback(this, cbval1);
            return callback_ret;
        } else {
            return QPlaceIdReply::qt_metacast(param1);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (qplaceidreply_metacall_isbase) {
            qplaceidreply_metacall_isbase = false;
            return QPlaceIdReply::qt_metacall(param1, param2, param3);
        } else if (qplaceidreply_metacall_callback != nullptr) {
            int cbval1 = static_cast<int>(param1);
            int cbval2 = param2;
            void** cbval3 = param3;

            int callback_ret = qplaceidreply_metacall_callback(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        } else {
            return QPlaceIdReply::qt_metacall(param1, param2, param3);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QPlaceReply::Type type() const override {
        if (qplaceidreply_type_isbase) {
            qplaceidreply_type_isbase = false;
            return QPlaceIdReply::type();
        } else if (qplaceidreply_type_callback != nullptr) {
            int callback_ret = qplaceidreply_type_callback();
            return static_cast<QPlaceReply::Type>(callback_ret);
        } else {
            return QPlaceIdReply::type();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void abort() override {
        if (qplaceidreply_abort_isbase) {
            qplaceidreply_abort_isbase = false;
            QPlaceIdReply::abort();
        } else if (qplaceidreply_abort_callback != nullptr) {
            qplaceidreply_abort_callback();
        } else {
            QPlaceIdReply::abort();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* event) override {
        if (qplaceidreply_event_isbase) {
            qplaceidreply_event_isbase = false;
            return QPlaceIdReply::event(event);
        } else if (qplaceidreply_event_callback != nullptr) {
            QEvent* cbval1 = event;

            bool callback_ret = qplaceidreply_event_callback(this, cbval1);
            return callback_ret;
        } else {
            return QPlaceIdReply::event(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* watched, QEvent* event) override {
        if (qplaceidreply_eventfilter_isbase) {
            qplaceidreply_eventfilter_isbase = false;
            return QPlaceIdReply::eventFilter(watched, event);
        } else if (qplaceidreply_eventfilter_callback != nullptr) {
            QObject* cbval1 = watched;
            QEvent* cbval2 = event;

            bool callback_ret = qplaceidreply_eventfilter_callback(this, cbval1, cbval2);
            return callback_ret;
        } else {
            return QPlaceIdReply::eventFilter(watched, event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (qplaceidreply_timerevent_isbase) {
            qplaceidreply_timerevent_isbase = false;
            QPlaceIdReply::timerEvent(event);
        } else if (qplaceidreply_timerevent_callback != nullptr) {
            QTimerEvent* cbval1 = event;

            qplaceidreply_timerevent_callback(this, cbval1);
        } else {
            QPlaceIdReply::timerEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (qplaceidreply_childevent_isbase) {
            qplaceidreply_childevent_isbase = false;
            QPlaceIdReply::childEvent(event);
        } else if (qplaceidreply_childevent_callback != nullptr) {
            QChildEvent* cbval1 = event;

            qplaceidreply_childevent_callback(this, cbval1);
        } else {
            QPlaceIdReply::childEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (qplaceidreply_customevent_isbase) {
            qplaceidreply_customevent_isbase = false;
            QPlaceIdReply::customEvent(event);
        } else if (qplaceidreply_customevent_callback != nullptr) {
            QEvent* cbval1 = event;

            qplaceidreply_customevent_callback(this, cbval1);
        } else {
            QPlaceIdReply::customEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (qplaceidreply_connectnotify_isbase) {
            qplaceidreply_connectnotify_isbase = false;
            QPlaceIdReply::connectNotify(signal);
        } else if (qplaceidreply_connectnotify_callback != nullptr) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            qplaceidreply_connectnotify_callback(this, cbval1);
        } else {
            QPlaceIdReply::connectNotify(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (qplaceidreply_disconnectnotify_isbase) {
            qplaceidreply_disconnectnotify_isbase = false;
            QPlaceIdReply::disconnectNotify(signal);
        } else if (qplaceidreply_disconnectnotify_callback != nullptr) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            qplaceidreply_disconnectnotify_callback(this, cbval1);
        } else {
            QPlaceIdReply::disconnectNotify(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    void setId(const QString& identifier) {
        if (qplaceidreply_setid_isbase) {
            qplaceidreply_setid_isbase = false;
            QPlaceIdReply::setId(identifier);
        } else if (qplaceidreply_setid_callback != nullptr) {
            const QString identifier_ret = identifier;
            // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
            QByteArray identifier_b = identifier_ret.toUtf8();
            libqt_string identifier_str;
            identifier_str.len = identifier_b.length();
            identifier_str.data = static_cast<const char*>(malloc(identifier_str.len + 1));
            memcpy((void*)identifier_str.data, identifier_b.data(), identifier_str.len);
            ((char*)identifier_str.data)[identifier_str.len] = '\0';
            libqt_string cbval1 = identifier_str;

            qplaceidreply_setid_callback(this, cbval1);
        } else {
            QPlaceIdReply::setId(identifier);
        }
    }

    // Virtual method for C ABI access and custom callback
    void setFinished(bool finished) {
        if (qplaceidreply_setfinished_isbase) {
            qplaceidreply_setfinished_isbase = false;
            QPlaceIdReply::setFinished(finished);
        } else if (qplaceidreply_setfinished_callback != nullptr) {
            bool cbval1 = finished;

            qplaceidreply_setfinished_callback(this, cbval1);
        } else {
            QPlaceIdReply::setFinished(finished);
        }
    }

    // Virtual method for C ABI access and custom callback
    void setError(QPlaceReply::Error errorVal, const QString& errorString) {
        if (qplaceidreply_seterror_isbase) {
            qplaceidreply_seterror_isbase = false;
            QPlaceIdReply::setError(errorVal, errorString);
        } else if (qplaceidreply_seterror_callback != nullptr) {
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

            qplaceidreply_seterror_callback(this, cbval1, cbval2);
        } else {
            QPlaceIdReply::setError(errorVal, errorString);
        }
    }

    // Virtual method for C ABI access and custom callback
    QObject* sender() const {
        if (qplaceidreply_sender_isbase) {
            qplaceidreply_sender_isbase = false;
            return QPlaceIdReply::sender();
        } else if (qplaceidreply_sender_callback != nullptr) {
            QObject* callback_ret = qplaceidreply_sender_callback();
            return callback_ret;
        } else {
            return QPlaceIdReply::sender();
        }
    }

    // Virtual method for C ABI access and custom callback
    int senderSignalIndex() const {
        if (qplaceidreply_sendersignalindex_isbase) {
            qplaceidreply_sendersignalindex_isbase = false;
            return QPlaceIdReply::senderSignalIndex();
        } else if (qplaceidreply_sendersignalindex_callback != nullptr) {
            int callback_ret = qplaceidreply_sendersignalindex_callback();
            return static_cast<int>(callback_ret);
        } else {
            return QPlaceIdReply::senderSignalIndex();
        }
    }

    // Virtual method for C ABI access and custom callback
    int receivers(const char* signal) const {
        if (qplaceidreply_receivers_isbase) {
            qplaceidreply_receivers_isbase = false;
            return QPlaceIdReply::receivers(signal);
        } else if (qplaceidreply_receivers_callback != nullptr) {
            const char* cbval1 = (const char*)signal;

            int callback_ret = qplaceidreply_receivers_callback(this, cbval1);
            return static_cast<int>(callback_ret);
        } else {
            return QPlaceIdReply::receivers(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    bool isSignalConnected(const QMetaMethod& signal) const {
        if (qplaceidreply_issignalconnected_isbase) {
            qplaceidreply_issignalconnected_isbase = false;
            return QPlaceIdReply::isSignalConnected(signal);
        } else if (qplaceidreply_issignalconnected_callback != nullptr) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            bool callback_ret = qplaceidreply_issignalconnected_callback(this, cbval1);
            return callback_ret;
        } else {
            return QPlaceIdReply::isSignalConnected(signal);
        }
    }

    // Friend functions
    friend void QPlaceIdReply_TimerEvent(QPlaceIdReply* self, QTimerEvent* event);
    friend void QPlaceIdReply_QBaseTimerEvent(QPlaceIdReply* self, QTimerEvent* event);
    friend void QPlaceIdReply_ChildEvent(QPlaceIdReply* self, QChildEvent* event);
    friend void QPlaceIdReply_QBaseChildEvent(QPlaceIdReply* self, QChildEvent* event);
    friend void QPlaceIdReply_CustomEvent(QPlaceIdReply* self, QEvent* event);
    friend void QPlaceIdReply_QBaseCustomEvent(QPlaceIdReply* self, QEvent* event);
    friend void QPlaceIdReply_ConnectNotify(QPlaceIdReply* self, const QMetaMethod* signal);
    friend void QPlaceIdReply_QBaseConnectNotify(QPlaceIdReply* self, const QMetaMethod* signal);
    friend void QPlaceIdReply_DisconnectNotify(QPlaceIdReply* self, const QMetaMethod* signal);
    friend void QPlaceIdReply_QBaseDisconnectNotify(QPlaceIdReply* self, const QMetaMethod* signal);
    friend void QPlaceIdReply_SetId(QPlaceIdReply* self, const libqt_string identifier);
    friend void QPlaceIdReply_QBaseSetId(QPlaceIdReply* self, const libqt_string identifier);
    friend void QPlaceIdReply_SetFinished(QPlaceIdReply* self, bool finished);
    friend void QPlaceIdReply_QBaseSetFinished(QPlaceIdReply* self, bool finished);
    friend void QPlaceIdReply_SetError(QPlaceIdReply* self, int errorVal, const libqt_string errorString);
    friend void QPlaceIdReply_QBaseSetError(QPlaceIdReply* self, int errorVal, const libqt_string errorString);
    friend QObject* QPlaceIdReply_Sender(const QPlaceIdReply* self);
    friend QObject* QPlaceIdReply_QBaseSender(const QPlaceIdReply* self);
    friend int QPlaceIdReply_SenderSignalIndex(const QPlaceIdReply* self);
    friend int QPlaceIdReply_QBaseSenderSignalIndex(const QPlaceIdReply* self);
    friend int QPlaceIdReply_Receivers(const QPlaceIdReply* self, const char* signal);
    friend int QPlaceIdReply_QBaseReceivers(const QPlaceIdReply* self, const char* signal);
    friend bool QPlaceIdReply_IsSignalConnected(const QPlaceIdReply* self, const QMetaMethod* signal);
    friend bool QPlaceIdReply_QBaseIsSignalConnected(const QPlaceIdReply* self, const QMetaMethod* signal);
};

#endif
