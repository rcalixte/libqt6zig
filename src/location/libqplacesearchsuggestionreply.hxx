#pragma once
#ifndef SRC_LOCATIONC_LIBVIRTUALQPLACESEARCHSUGGESTIONREPLY_H
#define SRC_LOCATIONC_LIBVIRTUALQPLACESEARCHSUGGESTIONREPLY_H

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

// This class is a subclass of QPlaceSearchSuggestionReply so that we can call protected methods
class VirtualQPlaceSearchSuggestionReply final : public QPlaceSearchSuggestionReply {

  public:
    // Virtual class boolean flag
    bool isVirtualQPlaceSearchSuggestionReply = true;

    // Virtual class public types (including callbacks)
    using QPlaceSearchSuggestionReply_MetaObject_Callback = QMetaObject* (*)();
    using QPlaceSearchSuggestionReply_Metacast_Callback = void* (*)(QPlaceSearchSuggestionReply*, const char*);
    using QPlaceSearchSuggestionReply_Metacall_Callback = int (*)(QPlaceSearchSuggestionReply*, int, int, void**);
    using QPlaceSearchSuggestionReply_Type_Callback = int (*)();
    using QPlaceSearchSuggestionReply_Abort_Callback = void (*)();
    using QPlaceSearchSuggestionReply_Event_Callback = bool (*)(QPlaceSearchSuggestionReply*, QEvent*);
    using QPlaceSearchSuggestionReply_EventFilter_Callback = bool (*)(QPlaceSearchSuggestionReply*, QObject*, QEvent*);
    using QPlaceSearchSuggestionReply_TimerEvent_Callback = void (*)(QPlaceSearchSuggestionReply*, QTimerEvent*);
    using QPlaceSearchSuggestionReply_ChildEvent_Callback = void (*)(QPlaceSearchSuggestionReply*, QChildEvent*);
    using QPlaceSearchSuggestionReply_CustomEvent_Callback = void (*)(QPlaceSearchSuggestionReply*, QEvent*);
    using QPlaceSearchSuggestionReply_ConnectNotify_Callback = void (*)(QPlaceSearchSuggestionReply*, QMetaMethod*);
    using QPlaceSearchSuggestionReply_DisconnectNotify_Callback = void (*)(QPlaceSearchSuggestionReply*, QMetaMethod*);
    using QPlaceSearchSuggestionReply_SetSuggestions_Callback = void (*)(QPlaceSearchSuggestionReply*, const char**);
    using QPlaceSearchSuggestionReply_SetFinished_Callback = void (*)(QPlaceSearchSuggestionReply*, bool);
    using QPlaceSearchSuggestionReply_SetError_Callback = void (*)(QPlaceSearchSuggestionReply*, int, const char*);
    using QPlaceSearchSuggestionReply_Sender_Callback = QObject* (*)();
    using QPlaceSearchSuggestionReply_SenderSignalIndex_Callback = int (*)();
    using QPlaceSearchSuggestionReply_Receivers_Callback = int (*)(const QPlaceSearchSuggestionReply*, const char*);
    using QPlaceSearchSuggestionReply_IsSignalConnected_Callback = bool (*)(const QPlaceSearchSuggestionReply*, QMetaMethod*);

  protected:
    // Instance callback storage
    QPlaceSearchSuggestionReply_MetaObject_Callback qplacesearchsuggestionreply_metaobject_callback = nullptr;
    QPlaceSearchSuggestionReply_Metacast_Callback qplacesearchsuggestionreply_metacast_callback = nullptr;
    QPlaceSearchSuggestionReply_Metacall_Callback qplacesearchsuggestionreply_metacall_callback = nullptr;
    QPlaceSearchSuggestionReply_Type_Callback qplacesearchsuggestionreply_type_callback = nullptr;
    QPlaceSearchSuggestionReply_Abort_Callback qplacesearchsuggestionreply_abort_callback = nullptr;
    QPlaceSearchSuggestionReply_Event_Callback qplacesearchsuggestionreply_event_callback = nullptr;
    QPlaceSearchSuggestionReply_EventFilter_Callback qplacesearchsuggestionreply_eventfilter_callback = nullptr;
    QPlaceSearchSuggestionReply_TimerEvent_Callback qplacesearchsuggestionreply_timerevent_callback = nullptr;
    QPlaceSearchSuggestionReply_ChildEvent_Callback qplacesearchsuggestionreply_childevent_callback = nullptr;
    QPlaceSearchSuggestionReply_CustomEvent_Callback qplacesearchsuggestionreply_customevent_callback = nullptr;
    QPlaceSearchSuggestionReply_ConnectNotify_Callback qplacesearchsuggestionreply_connectnotify_callback = nullptr;
    QPlaceSearchSuggestionReply_DisconnectNotify_Callback qplacesearchsuggestionreply_disconnectnotify_callback = nullptr;
    QPlaceSearchSuggestionReply_SetSuggestions_Callback qplacesearchsuggestionreply_setsuggestions_callback = nullptr;
    QPlaceSearchSuggestionReply_SetFinished_Callback qplacesearchsuggestionreply_setfinished_callback = nullptr;
    QPlaceSearchSuggestionReply_SetError_Callback qplacesearchsuggestionreply_seterror_callback = nullptr;
    QPlaceSearchSuggestionReply_Sender_Callback qplacesearchsuggestionreply_sender_callback = nullptr;
    QPlaceSearchSuggestionReply_SenderSignalIndex_Callback qplacesearchsuggestionreply_sendersignalindex_callback = nullptr;
    QPlaceSearchSuggestionReply_Receivers_Callback qplacesearchsuggestionreply_receivers_callback = nullptr;
    QPlaceSearchSuggestionReply_IsSignalConnected_Callback qplacesearchsuggestionreply_issignalconnected_callback = nullptr;

    // Instance base flags
    mutable bool qplacesearchsuggestionreply_metaobject_isbase = false;
    mutable bool qplacesearchsuggestionreply_metacast_isbase = false;
    mutable bool qplacesearchsuggestionreply_metacall_isbase = false;
    mutable bool qplacesearchsuggestionreply_type_isbase = false;
    mutable bool qplacesearchsuggestionreply_abort_isbase = false;
    mutable bool qplacesearchsuggestionreply_event_isbase = false;
    mutable bool qplacesearchsuggestionreply_eventfilter_isbase = false;
    mutable bool qplacesearchsuggestionreply_timerevent_isbase = false;
    mutable bool qplacesearchsuggestionreply_childevent_isbase = false;
    mutable bool qplacesearchsuggestionreply_customevent_isbase = false;
    mutable bool qplacesearchsuggestionreply_connectnotify_isbase = false;
    mutable bool qplacesearchsuggestionreply_disconnectnotify_isbase = false;
    mutable bool qplacesearchsuggestionreply_setsuggestions_isbase = false;
    mutable bool qplacesearchsuggestionreply_setfinished_isbase = false;
    mutable bool qplacesearchsuggestionreply_seterror_isbase = false;
    mutable bool qplacesearchsuggestionreply_sender_isbase = false;
    mutable bool qplacesearchsuggestionreply_sendersignalindex_isbase = false;
    mutable bool qplacesearchsuggestionreply_receivers_isbase = false;
    mutable bool qplacesearchsuggestionreply_issignalconnected_isbase = false;

  public:
    VirtualQPlaceSearchSuggestionReply() : QPlaceSearchSuggestionReply() {};
    VirtualQPlaceSearchSuggestionReply(QObject* parent) : QPlaceSearchSuggestionReply(parent) {};

    // Callback setters
    inline void setQPlaceSearchSuggestionReply_MetaObject_Callback(QPlaceSearchSuggestionReply_MetaObject_Callback cb) { qplacesearchsuggestionreply_metaobject_callback = cb; }
    inline void setQPlaceSearchSuggestionReply_Metacast_Callback(QPlaceSearchSuggestionReply_Metacast_Callback cb) { qplacesearchsuggestionreply_metacast_callback = cb; }
    inline void setQPlaceSearchSuggestionReply_Metacall_Callback(QPlaceSearchSuggestionReply_Metacall_Callback cb) { qplacesearchsuggestionreply_metacall_callback = cb; }
    inline void setQPlaceSearchSuggestionReply_Type_Callback(QPlaceSearchSuggestionReply_Type_Callback cb) { qplacesearchsuggestionreply_type_callback = cb; }
    inline void setQPlaceSearchSuggestionReply_Abort_Callback(QPlaceSearchSuggestionReply_Abort_Callback cb) { qplacesearchsuggestionreply_abort_callback = cb; }
    inline void setQPlaceSearchSuggestionReply_Event_Callback(QPlaceSearchSuggestionReply_Event_Callback cb) { qplacesearchsuggestionreply_event_callback = cb; }
    inline void setQPlaceSearchSuggestionReply_EventFilter_Callback(QPlaceSearchSuggestionReply_EventFilter_Callback cb) { qplacesearchsuggestionreply_eventfilter_callback = cb; }
    inline void setQPlaceSearchSuggestionReply_TimerEvent_Callback(QPlaceSearchSuggestionReply_TimerEvent_Callback cb) { qplacesearchsuggestionreply_timerevent_callback = cb; }
    inline void setQPlaceSearchSuggestionReply_ChildEvent_Callback(QPlaceSearchSuggestionReply_ChildEvent_Callback cb) { qplacesearchsuggestionreply_childevent_callback = cb; }
    inline void setQPlaceSearchSuggestionReply_CustomEvent_Callback(QPlaceSearchSuggestionReply_CustomEvent_Callback cb) { qplacesearchsuggestionreply_customevent_callback = cb; }
    inline void setQPlaceSearchSuggestionReply_ConnectNotify_Callback(QPlaceSearchSuggestionReply_ConnectNotify_Callback cb) { qplacesearchsuggestionreply_connectnotify_callback = cb; }
    inline void setQPlaceSearchSuggestionReply_DisconnectNotify_Callback(QPlaceSearchSuggestionReply_DisconnectNotify_Callback cb) { qplacesearchsuggestionreply_disconnectnotify_callback = cb; }
    inline void setQPlaceSearchSuggestionReply_SetSuggestions_Callback(QPlaceSearchSuggestionReply_SetSuggestions_Callback cb) { qplacesearchsuggestionreply_setsuggestions_callback = cb; }
    inline void setQPlaceSearchSuggestionReply_SetFinished_Callback(QPlaceSearchSuggestionReply_SetFinished_Callback cb) { qplacesearchsuggestionreply_setfinished_callback = cb; }
    inline void setQPlaceSearchSuggestionReply_SetError_Callback(QPlaceSearchSuggestionReply_SetError_Callback cb) { qplacesearchsuggestionreply_seterror_callback = cb; }
    inline void setQPlaceSearchSuggestionReply_Sender_Callback(QPlaceSearchSuggestionReply_Sender_Callback cb) { qplacesearchsuggestionreply_sender_callback = cb; }
    inline void setQPlaceSearchSuggestionReply_SenderSignalIndex_Callback(QPlaceSearchSuggestionReply_SenderSignalIndex_Callback cb) { qplacesearchsuggestionreply_sendersignalindex_callback = cb; }
    inline void setQPlaceSearchSuggestionReply_Receivers_Callback(QPlaceSearchSuggestionReply_Receivers_Callback cb) { qplacesearchsuggestionreply_receivers_callback = cb; }
    inline void setQPlaceSearchSuggestionReply_IsSignalConnected_Callback(QPlaceSearchSuggestionReply_IsSignalConnected_Callback cb) { qplacesearchsuggestionreply_issignalconnected_callback = cb; }

    // Base flag setters
    inline void setQPlaceSearchSuggestionReply_MetaObject_IsBase(bool value) const { qplacesearchsuggestionreply_metaobject_isbase = value; }
    inline void setQPlaceSearchSuggestionReply_Metacast_IsBase(bool value) const { qplacesearchsuggestionreply_metacast_isbase = value; }
    inline void setQPlaceSearchSuggestionReply_Metacall_IsBase(bool value) const { qplacesearchsuggestionreply_metacall_isbase = value; }
    inline void setQPlaceSearchSuggestionReply_Type_IsBase(bool value) const { qplacesearchsuggestionreply_type_isbase = value; }
    inline void setQPlaceSearchSuggestionReply_Abort_IsBase(bool value) const { qplacesearchsuggestionreply_abort_isbase = value; }
    inline void setQPlaceSearchSuggestionReply_Event_IsBase(bool value) const { qplacesearchsuggestionreply_event_isbase = value; }
    inline void setQPlaceSearchSuggestionReply_EventFilter_IsBase(bool value) const { qplacesearchsuggestionreply_eventfilter_isbase = value; }
    inline void setQPlaceSearchSuggestionReply_TimerEvent_IsBase(bool value) const { qplacesearchsuggestionreply_timerevent_isbase = value; }
    inline void setQPlaceSearchSuggestionReply_ChildEvent_IsBase(bool value) const { qplacesearchsuggestionreply_childevent_isbase = value; }
    inline void setQPlaceSearchSuggestionReply_CustomEvent_IsBase(bool value) const { qplacesearchsuggestionreply_customevent_isbase = value; }
    inline void setQPlaceSearchSuggestionReply_ConnectNotify_IsBase(bool value) const { qplacesearchsuggestionreply_connectnotify_isbase = value; }
    inline void setQPlaceSearchSuggestionReply_DisconnectNotify_IsBase(bool value) const { qplacesearchsuggestionreply_disconnectnotify_isbase = value; }
    inline void setQPlaceSearchSuggestionReply_SetSuggestions_IsBase(bool value) const { qplacesearchsuggestionreply_setsuggestions_isbase = value; }
    inline void setQPlaceSearchSuggestionReply_SetFinished_IsBase(bool value) const { qplacesearchsuggestionreply_setfinished_isbase = value; }
    inline void setQPlaceSearchSuggestionReply_SetError_IsBase(bool value) const { qplacesearchsuggestionreply_seterror_isbase = value; }
    inline void setQPlaceSearchSuggestionReply_Sender_IsBase(bool value) const { qplacesearchsuggestionreply_sender_isbase = value; }
    inline void setQPlaceSearchSuggestionReply_SenderSignalIndex_IsBase(bool value) const { qplacesearchsuggestionreply_sendersignalindex_isbase = value; }
    inline void setQPlaceSearchSuggestionReply_Receivers_IsBase(bool value) const { qplacesearchsuggestionreply_receivers_isbase = value; }
    inline void setQPlaceSearchSuggestionReply_IsSignalConnected_IsBase(bool value) const { qplacesearchsuggestionreply_issignalconnected_isbase = value; }

    // Virtual method for C ABI access and custom callback
    virtual const QMetaObject* metaObject() const override {
        if (qplacesearchsuggestionreply_metaobject_isbase) {
            qplacesearchsuggestionreply_metaobject_isbase = false;
            return QPlaceSearchSuggestionReply::metaObject();
        }
        auto metaobject_cb = qplacesearchsuggestionreply_metaobject_callback;
        if (metaobject_cb) {
            QMetaObject* callback_ret = metaobject_cb();
            return callback_ret;
        }
        return QPlaceSearchSuggestionReply::metaObject();
    }

    // Virtual method for C ABI access and custom callback
    virtual void* qt_metacast(const char* param1) override {
        if (qplacesearchsuggestionreply_metacast_isbase) {
            qplacesearchsuggestionreply_metacast_isbase = false;
            return QPlaceSearchSuggestionReply::qt_metacast(param1);
        }
        auto metacast_cb = qplacesearchsuggestionreply_metacast_callback;
        if (metacast_cb) {
            const char* cbval1 = (const char*)param1;

            void* callback_ret = metacast_cb(this, cbval1);
            return callback_ret;
        }
        return QPlaceSearchSuggestionReply::qt_metacast(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (qplacesearchsuggestionreply_metacall_isbase) {
            qplacesearchsuggestionreply_metacall_isbase = false;
            return QPlaceSearchSuggestionReply::qt_metacall(param1, param2, param3);
        }
        auto metacall_cb = qplacesearchsuggestionreply_metacall_callback;
        if (metacall_cb) {
            int cbval1 = static_cast<int>(param1);
            int cbval2 = param2;
            void** cbval3 = param3;

            int callback_ret = metacall_cb(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        }
        return QPlaceSearchSuggestionReply::qt_metacall(param1, param2, param3);
    }

    // Virtual method for C ABI access and custom callback
    virtual QPlaceReply::Type type() const override {
        if (qplacesearchsuggestionreply_type_isbase) {
            qplacesearchsuggestionreply_type_isbase = false;
            return QPlaceSearchSuggestionReply::type();
        }
        auto type_cb = qplacesearchsuggestionreply_type_callback;
        if (type_cb) {
            int callback_ret = type_cb();
            return static_cast<QPlaceReply::Type>(callback_ret);
        }
        return QPlaceSearchSuggestionReply::type();
    }

    // Virtual method for C ABI access and custom callback
    virtual void abort() override {
        if (qplacesearchsuggestionreply_abort_isbase) {
            qplacesearchsuggestionreply_abort_isbase = false;
            QPlaceSearchSuggestionReply::abort();
            return;
        }
        auto abort_cb = qplacesearchsuggestionreply_abort_callback;
        if (abort_cb) {
            abort_cb();
            return;
        }
        QPlaceSearchSuggestionReply::abort();
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* event) override {
        if (qplacesearchsuggestionreply_event_isbase) {
            qplacesearchsuggestionreply_event_isbase = false;
            return QPlaceSearchSuggestionReply::event(event);
        }
        auto event_cb = qplacesearchsuggestionreply_event_callback;
        if (event_cb) {
            QEvent* cbval1 = event;

            bool callback_ret = event_cb(this, cbval1);
            return callback_ret;
        }
        return QPlaceSearchSuggestionReply::event(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* watched, QEvent* event) override {
        if (qplacesearchsuggestionreply_eventfilter_isbase) {
            qplacesearchsuggestionreply_eventfilter_isbase = false;
            return QPlaceSearchSuggestionReply::eventFilter(watched, event);
        }
        auto eventfilter_cb = qplacesearchsuggestionreply_eventfilter_callback;
        if (eventfilter_cb) {
            QObject* cbval1 = watched;
            QEvent* cbval2 = event;

            bool callback_ret = eventfilter_cb(this, cbval1, cbval2);
            return callback_ret;
        }
        return QPlaceSearchSuggestionReply::eventFilter(watched, event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (qplacesearchsuggestionreply_timerevent_isbase) {
            qplacesearchsuggestionreply_timerevent_isbase = false;
            QPlaceSearchSuggestionReply::timerEvent(event);
            return;
        }
        auto timerevent_cb = qplacesearchsuggestionreply_timerevent_callback;
        if (timerevent_cb) {
            QTimerEvent* cbval1 = event;

            timerevent_cb(this, cbval1);
            return;
        }
        QPlaceSearchSuggestionReply::timerEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (qplacesearchsuggestionreply_childevent_isbase) {
            qplacesearchsuggestionreply_childevent_isbase = false;
            QPlaceSearchSuggestionReply::childEvent(event);
            return;
        }
        auto childevent_cb = qplacesearchsuggestionreply_childevent_callback;
        if (childevent_cb) {
            QChildEvent* cbval1 = event;

            childevent_cb(this, cbval1);
            return;
        }
        QPlaceSearchSuggestionReply::childEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (qplacesearchsuggestionreply_customevent_isbase) {
            qplacesearchsuggestionreply_customevent_isbase = false;
            QPlaceSearchSuggestionReply::customEvent(event);
            return;
        }
        auto customevent_cb = qplacesearchsuggestionreply_customevent_callback;
        if (customevent_cb) {
            QEvent* cbval1 = event;

            customevent_cb(this, cbval1);
            return;
        }
        QPlaceSearchSuggestionReply::customEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (qplacesearchsuggestionreply_connectnotify_isbase) {
            qplacesearchsuggestionreply_connectnotify_isbase = false;
            QPlaceSearchSuggestionReply::connectNotify(signal);
            return;
        }
        auto connectnotify_cb = qplacesearchsuggestionreply_connectnotify_callback;
        if (connectnotify_cb) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            connectnotify_cb(this, cbval1);
            return;
        }
        QPlaceSearchSuggestionReply::connectNotify(signal);
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (qplacesearchsuggestionreply_disconnectnotify_isbase) {
            qplacesearchsuggestionreply_disconnectnotify_isbase = false;
            QPlaceSearchSuggestionReply::disconnectNotify(signal);
            return;
        }
        auto disconnectnotify_cb = qplacesearchsuggestionreply_disconnectnotify_callback;
        if (disconnectnotify_cb) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            disconnectnotify_cb(this, cbval1);
            return;
        }
        QPlaceSearchSuggestionReply::disconnectNotify(signal);
    }

    // Virtual method for C ABI access and custom callback
    void setSuggestions(const QList<QString>& suggestions) {
        if (qplacesearchsuggestionreply_setsuggestions_isbase) {
            qplacesearchsuggestionreply_setsuggestions_isbase = false;
            QPlaceSearchSuggestionReply::setSuggestions(suggestions);
            return;
        }
        auto setsuggestions_cb = qplacesearchsuggestionreply_setsuggestions_callback;
        if (setsuggestions_cb) {
            const QList<QString>& suggestions_ret = suggestions;
            // Convert QString from UTF-16 in C++ RAII memory to null-terminated UTF-8 chars in manually-managed C memory
            const char** suggestions_arr = static_cast<const char**>(malloc(sizeof(const char*) * (suggestions_ret.size() + 1)));
            for (qsizetype i = 0; i < suggestions_ret.size(); ++i) {
                QByteArray suggestions_b = suggestions_ret[i].toUtf8();
                auto suggestions_str_len = suggestions_b.length();
                char* suggestions_str = static_cast<char*>(malloc(suggestions_str_len + 1));
                memcpy(suggestions_str, suggestions_b.data(), suggestions_str_len);
                suggestions_str[suggestions_str_len] = '\0';
                suggestions_arr[i] = suggestions_str;
            }
            // Append sentinel null terminator to the list
            suggestions_arr[suggestions_ret.size()] = nullptr;
            const char** cbval1 = suggestions_arr;

            setsuggestions_cb(this, cbval1);
            libqt_free(suggestions_arr);
            return;
        }
        QPlaceSearchSuggestionReply::setSuggestions(suggestions);
    }

    // Virtual method for C ABI access and custom callback
    void setFinished(bool finished) {
        if (qplacesearchsuggestionreply_setfinished_isbase) {
            qplacesearchsuggestionreply_setfinished_isbase = false;
            QPlaceSearchSuggestionReply::setFinished(finished);
            return;
        }
        auto setfinished_cb = qplacesearchsuggestionreply_setfinished_callback;
        if (setfinished_cb) {
            bool cbval1 = finished;

            setfinished_cb(this, cbval1);
            return;
        }
        QPlaceSearchSuggestionReply::setFinished(finished);
    }

    // Virtual method for C ABI access and custom callback
    void setError(QPlaceReply::Error errorVal, const QString& errorString) {
        if (qplacesearchsuggestionreply_seterror_isbase) {
            qplacesearchsuggestionreply_seterror_isbase = false;
            QPlaceSearchSuggestionReply::setError(errorVal, errorString);
            return;
        }
        auto seterror_cb = qplacesearchsuggestionreply_seterror_callback;
        if (seterror_cb) {
            int cbval1 = static_cast<int>(errorVal);
            const QString errorString_ret = errorString;
            // Convert QString from UTF-16 in C++ RAII memory to UTF-8 chars in manually-managed C memory
            QByteArray errorString_b = errorString_ret.toUtf8();
            auto errorString_str_len = errorString_b.length();
            const char* errorString_str = static_cast<const char*>(malloc(errorString_str_len + 1));
            memcpy((void*)errorString_str, errorString_b.data(), errorString_str_len);
            ((char*)errorString_str)[errorString_str_len] = '\0';
            const char* cbval2 = errorString_str;

            seterror_cb(this, cbval1, cbval2);
            libqt_free(errorString_str);
            return;
        }
        QPlaceSearchSuggestionReply::setError(errorVal, errorString);
    }

    // Virtual method for C ABI access and custom callback
    QObject* sender() const {
        if (qplacesearchsuggestionreply_sender_isbase) {
            qplacesearchsuggestionreply_sender_isbase = false;
            return QPlaceSearchSuggestionReply::sender();
        }
        auto sender_cb = qplacesearchsuggestionreply_sender_callback;
        if (sender_cb) {
            QObject* callback_ret = sender_cb();
            return callback_ret;
        }
        return QPlaceSearchSuggestionReply::sender();
    }

    // Virtual method for C ABI access and custom callback
    int senderSignalIndex() const {
        if (qplacesearchsuggestionreply_sendersignalindex_isbase) {
            qplacesearchsuggestionreply_sendersignalindex_isbase = false;
            return QPlaceSearchSuggestionReply::senderSignalIndex();
        }
        auto sendersignalindex_cb = qplacesearchsuggestionreply_sendersignalindex_callback;
        if (sendersignalindex_cb) {
            int callback_ret = sendersignalindex_cb();
            return static_cast<int>(callback_ret);
        }
        return QPlaceSearchSuggestionReply::senderSignalIndex();
    }

    // Virtual method for C ABI access and custom callback
    int receivers(const char* signal) const {
        if (qplacesearchsuggestionreply_receivers_isbase) {
            qplacesearchsuggestionreply_receivers_isbase = false;
            return QPlaceSearchSuggestionReply::receivers(signal);
        }
        auto receivers_cb = qplacesearchsuggestionreply_receivers_callback;
        if (receivers_cb) {
            const char* cbval1 = (const char*)signal;

            int callback_ret = receivers_cb(this, cbval1);
            return static_cast<int>(callback_ret);
        }
        return QPlaceSearchSuggestionReply::receivers(signal);
    }

    // Virtual method for C ABI access and custom callback
    bool isSignalConnected(const QMetaMethod& signal) const {
        if (qplacesearchsuggestionreply_issignalconnected_isbase) {
            qplacesearchsuggestionreply_issignalconnected_isbase = false;
            return QPlaceSearchSuggestionReply::isSignalConnected(signal);
        }
        auto issignalconnected_cb = qplacesearchsuggestionreply_issignalconnected_callback;
        if (issignalconnected_cb) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            bool callback_ret = issignalconnected_cb(this, cbval1);
            return callback_ret;
        }
        return QPlaceSearchSuggestionReply::isSignalConnected(signal);
    }

    // Friend functions
    friend void QPlaceSearchSuggestionReply_TimerEvent(QPlaceSearchSuggestionReply* self, QTimerEvent* event);
    friend void QPlaceSearchSuggestionReply_SuperTimerEvent(QPlaceSearchSuggestionReply* self, QTimerEvent* event);
    friend void QPlaceSearchSuggestionReply_ChildEvent(QPlaceSearchSuggestionReply* self, QChildEvent* event);
    friend void QPlaceSearchSuggestionReply_SuperChildEvent(QPlaceSearchSuggestionReply* self, QChildEvent* event);
    friend void QPlaceSearchSuggestionReply_CustomEvent(QPlaceSearchSuggestionReply* self, QEvent* event);
    friend void QPlaceSearchSuggestionReply_SuperCustomEvent(QPlaceSearchSuggestionReply* self, QEvent* event);
    friend void QPlaceSearchSuggestionReply_ConnectNotify(QPlaceSearchSuggestionReply* self, const QMetaMethod* signal);
    friend void QPlaceSearchSuggestionReply_SuperConnectNotify(QPlaceSearchSuggestionReply* self, const QMetaMethod* signal);
    friend void QPlaceSearchSuggestionReply_DisconnectNotify(QPlaceSearchSuggestionReply* self, const QMetaMethod* signal);
    friend void QPlaceSearchSuggestionReply_SuperDisconnectNotify(QPlaceSearchSuggestionReply* self, const QMetaMethod* signal);
    friend void QPlaceSearchSuggestionReply_SetSuggestions(QPlaceSearchSuggestionReply* self, const libqt_list /* of libqt_string */ suggestions);
    friend void QPlaceSearchSuggestionReply_SuperSetSuggestions(QPlaceSearchSuggestionReply* self, const libqt_list /* of libqt_string */ suggestions);
    friend void QPlaceSearchSuggestionReply_SetFinished(QPlaceSearchSuggestionReply* self, bool finished);
    friend void QPlaceSearchSuggestionReply_SuperSetFinished(QPlaceSearchSuggestionReply* self, bool finished);
    friend void QPlaceSearchSuggestionReply_SetError(QPlaceSearchSuggestionReply* self, int errorVal, const libqt_string errorString);
    friend void QPlaceSearchSuggestionReply_SuperSetError(QPlaceSearchSuggestionReply* self, int errorVal, const libqt_string errorString);
    friend QObject* QPlaceSearchSuggestionReply_Sender(const QPlaceSearchSuggestionReply* self);
    friend QObject* QPlaceSearchSuggestionReply_SuperSender(const QPlaceSearchSuggestionReply* self);
    friend int QPlaceSearchSuggestionReply_SenderSignalIndex(const QPlaceSearchSuggestionReply* self);
    friend int QPlaceSearchSuggestionReply_SuperSenderSignalIndex(const QPlaceSearchSuggestionReply* self);
    friend int QPlaceSearchSuggestionReply_Receivers(const QPlaceSearchSuggestionReply* self, const char* signal);
    friend int QPlaceSearchSuggestionReply_SuperReceivers(const QPlaceSearchSuggestionReply* self, const char* signal);
    friend bool QPlaceSearchSuggestionReply_IsSignalConnected(const QPlaceSearchSuggestionReply* self, const QMetaMethod* signal);
    friend bool QPlaceSearchSuggestionReply_SuperIsSignalConnected(const QPlaceSearchSuggestionReply* self, const QMetaMethod* signal);
};

#endif
