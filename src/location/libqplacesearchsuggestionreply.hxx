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
    using QPlaceSearchSuggestionReply_SetSuggestions_Callback = void (*)(QPlaceSearchSuggestionReply*, libqt_list /* of libqt_string */);
    using QPlaceSearchSuggestionReply_SetFinished_Callback = void (*)(QPlaceSearchSuggestionReply*, bool);
    using QPlaceSearchSuggestionReply_SetError_Callback = void (*)(QPlaceSearchSuggestionReply*, int, libqt_string);
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

    ~VirtualQPlaceSearchSuggestionReply() {
        qplacesearchsuggestionreply_metaobject_callback = nullptr;
        qplacesearchsuggestionreply_metacast_callback = nullptr;
        qplacesearchsuggestionreply_metacall_callback = nullptr;
        qplacesearchsuggestionreply_type_callback = nullptr;
        qplacesearchsuggestionreply_abort_callback = nullptr;
        qplacesearchsuggestionreply_event_callback = nullptr;
        qplacesearchsuggestionreply_eventfilter_callback = nullptr;
        qplacesearchsuggestionreply_timerevent_callback = nullptr;
        qplacesearchsuggestionreply_childevent_callback = nullptr;
        qplacesearchsuggestionreply_customevent_callback = nullptr;
        qplacesearchsuggestionreply_connectnotify_callback = nullptr;
        qplacesearchsuggestionreply_disconnectnotify_callback = nullptr;
        qplacesearchsuggestionreply_setsuggestions_callback = nullptr;
        qplacesearchsuggestionreply_setfinished_callback = nullptr;
        qplacesearchsuggestionreply_seterror_callback = nullptr;
        qplacesearchsuggestionreply_sender_callback = nullptr;
        qplacesearchsuggestionreply_sendersignalindex_callback = nullptr;
        qplacesearchsuggestionreply_receivers_callback = nullptr;
        qplacesearchsuggestionreply_issignalconnected_callback = nullptr;
    }

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
        } else if (qplacesearchsuggestionreply_metaobject_callback != nullptr) {
            QMetaObject* callback_ret = qplacesearchsuggestionreply_metaobject_callback();
            return callback_ret;
        } else {
            return QPlaceSearchSuggestionReply::metaObject();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void* qt_metacast(const char* param1) override {
        if (qplacesearchsuggestionreply_metacast_isbase) {
            qplacesearchsuggestionreply_metacast_isbase = false;
            return QPlaceSearchSuggestionReply::qt_metacast(param1);
        } else if (qplacesearchsuggestionreply_metacast_callback != nullptr) {
            const char* cbval1 = (const char*)param1;

            void* callback_ret = qplacesearchsuggestionreply_metacast_callback(this, cbval1);
            return callback_ret;
        } else {
            return QPlaceSearchSuggestionReply::qt_metacast(param1);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (qplacesearchsuggestionreply_metacall_isbase) {
            qplacesearchsuggestionreply_metacall_isbase = false;
            return QPlaceSearchSuggestionReply::qt_metacall(param1, param2, param3);
        } else if (qplacesearchsuggestionreply_metacall_callback != nullptr) {
            int cbval1 = static_cast<int>(param1);
            int cbval2 = param2;
            void** cbval3 = param3;

            int callback_ret = qplacesearchsuggestionreply_metacall_callback(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        } else {
            return QPlaceSearchSuggestionReply::qt_metacall(param1, param2, param3);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QPlaceReply::Type type() const override {
        if (qplacesearchsuggestionreply_type_isbase) {
            qplacesearchsuggestionreply_type_isbase = false;
            return QPlaceSearchSuggestionReply::type();
        } else if (qplacesearchsuggestionreply_type_callback != nullptr) {
            int callback_ret = qplacesearchsuggestionreply_type_callback();
            return static_cast<QPlaceReply::Type>(callback_ret);
        } else {
            return QPlaceSearchSuggestionReply::type();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void abort() override {
        if (qplacesearchsuggestionreply_abort_isbase) {
            qplacesearchsuggestionreply_abort_isbase = false;
            QPlaceSearchSuggestionReply::abort();
        } else if (qplacesearchsuggestionreply_abort_callback != nullptr) {
            qplacesearchsuggestionreply_abort_callback();
        } else {
            QPlaceSearchSuggestionReply::abort();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* event) override {
        if (qplacesearchsuggestionreply_event_isbase) {
            qplacesearchsuggestionreply_event_isbase = false;
            return QPlaceSearchSuggestionReply::event(event);
        } else if (qplacesearchsuggestionreply_event_callback != nullptr) {
            QEvent* cbval1 = event;

            bool callback_ret = qplacesearchsuggestionreply_event_callback(this, cbval1);
            return callback_ret;
        } else {
            return QPlaceSearchSuggestionReply::event(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* watched, QEvent* event) override {
        if (qplacesearchsuggestionreply_eventfilter_isbase) {
            qplacesearchsuggestionreply_eventfilter_isbase = false;
            return QPlaceSearchSuggestionReply::eventFilter(watched, event);
        } else if (qplacesearchsuggestionreply_eventfilter_callback != nullptr) {
            QObject* cbval1 = watched;
            QEvent* cbval2 = event;

            bool callback_ret = qplacesearchsuggestionreply_eventfilter_callback(this, cbval1, cbval2);
            return callback_ret;
        } else {
            return QPlaceSearchSuggestionReply::eventFilter(watched, event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (qplacesearchsuggestionreply_timerevent_isbase) {
            qplacesearchsuggestionreply_timerevent_isbase = false;
            QPlaceSearchSuggestionReply::timerEvent(event);
        } else if (qplacesearchsuggestionreply_timerevent_callback != nullptr) {
            QTimerEvent* cbval1 = event;

            qplacesearchsuggestionreply_timerevent_callback(this, cbval1);
        } else {
            QPlaceSearchSuggestionReply::timerEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (qplacesearchsuggestionreply_childevent_isbase) {
            qplacesearchsuggestionreply_childevent_isbase = false;
            QPlaceSearchSuggestionReply::childEvent(event);
        } else if (qplacesearchsuggestionreply_childevent_callback != nullptr) {
            QChildEvent* cbval1 = event;

            qplacesearchsuggestionreply_childevent_callback(this, cbval1);
        } else {
            QPlaceSearchSuggestionReply::childEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (qplacesearchsuggestionreply_customevent_isbase) {
            qplacesearchsuggestionreply_customevent_isbase = false;
            QPlaceSearchSuggestionReply::customEvent(event);
        } else if (qplacesearchsuggestionreply_customevent_callback != nullptr) {
            QEvent* cbval1 = event;

            qplacesearchsuggestionreply_customevent_callback(this, cbval1);
        } else {
            QPlaceSearchSuggestionReply::customEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (qplacesearchsuggestionreply_connectnotify_isbase) {
            qplacesearchsuggestionreply_connectnotify_isbase = false;
            QPlaceSearchSuggestionReply::connectNotify(signal);
        } else if (qplacesearchsuggestionreply_connectnotify_callback != nullptr) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            qplacesearchsuggestionreply_connectnotify_callback(this, cbval1);
        } else {
            QPlaceSearchSuggestionReply::connectNotify(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (qplacesearchsuggestionreply_disconnectnotify_isbase) {
            qplacesearchsuggestionreply_disconnectnotify_isbase = false;
            QPlaceSearchSuggestionReply::disconnectNotify(signal);
        } else if (qplacesearchsuggestionreply_disconnectnotify_callback != nullptr) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            qplacesearchsuggestionreply_disconnectnotify_callback(this, cbval1);
        } else {
            QPlaceSearchSuggestionReply::disconnectNotify(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    void setSuggestions(const QList<QString>& suggestions) {
        if (qplacesearchsuggestionreply_setsuggestions_isbase) {
            qplacesearchsuggestionreply_setsuggestions_isbase = false;
            QPlaceSearchSuggestionReply::setSuggestions(suggestions);
        } else if (qplacesearchsuggestionreply_setsuggestions_callback != nullptr) {
            const QList<QString>& suggestions_ret = suggestions;
            // Convert QList<> from C++ memory to manually-managed C memory
            libqt_string* suggestions_arr = static_cast<libqt_string*>(malloc(sizeof(libqt_string) * (suggestions_ret.size())));
            for (qsizetype i = 0; i < suggestions_ret.size(); ++i) {
                QString suggestions_lv_ret = suggestions_ret[i];
                // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
                QByteArray suggestions_lv_b = suggestions_lv_ret.toUtf8();
                libqt_string suggestions_lv_str;
                suggestions_lv_str.len = suggestions_lv_b.length();
                suggestions_lv_str.data = static_cast<const char*>(malloc(suggestions_lv_str.len + 1));
                memcpy((void*)suggestions_lv_str.data, suggestions_lv_b.data(), suggestions_lv_str.len);
                ((char*)suggestions_lv_str.data)[suggestions_lv_str.len] = '\0';
                suggestions_arr[i] = suggestions_lv_str;
            }
            libqt_list suggestions_out;
            suggestions_out.len = suggestions_ret.size();
            suggestions_out.data = static_cast<void*>(suggestions_arr);
            libqt_list /* of libqt_string */ cbval1 = suggestions_out;

            qplacesearchsuggestionreply_setsuggestions_callback(this, cbval1);
        } else {
            QPlaceSearchSuggestionReply::setSuggestions(suggestions);
        }
    }

    // Virtual method for C ABI access and custom callback
    void setFinished(bool finished) {
        if (qplacesearchsuggestionreply_setfinished_isbase) {
            qplacesearchsuggestionreply_setfinished_isbase = false;
            QPlaceSearchSuggestionReply::setFinished(finished);
        } else if (qplacesearchsuggestionreply_setfinished_callback != nullptr) {
            bool cbval1 = finished;

            qplacesearchsuggestionreply_setfinished_callback(this, cbval1);
        } else {
            QPlaceSearchSuggestionReply::setFinished(finished);
        }
    }

    // Virtual method for C ABI access and custom callback
    void setError(QPlaceReply::Error errorVal, const QString& errorString) {
        if (qplacesearchsuggestionreply_seterror_isbase) {
            qplacesearchsuggestionreply_seterror_isbase = false;
            QPlaceSearchSuggestionReply::setError(errorVal, errorString);
        } else if (qplacesearchsuggestionreply_seterror_callback != nullptr) {
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

            qplacesearchsuggestionreply_seterror_callback(this, cbval1, cbval2);
        } else {
            QPlaceSearchSuggestionReply::setError(errorVal, errorString);
        }
    }

    // Virtual method for C ABI access and custom callback
    QObject* sender() const {
        if (qplacesearchsuggestionreply_sender_isbase) {
            qplacesearchsuggestionreply_sender_isbase = false;
            return QPlaceSearchSuggestionReply::sender();
        } else if (qplacesearchsuggestionreply_sender_callback != nullptr) {
            QObject* callback_ret = qplacesearchsuggestionreply_sender_callback();
            return callback_ret;
        } else {
            return QPlaceSearchSuggestionReply::sender();
        }
    }

    // Virtual method for C ABI access and custom callback
    int senderSignalIndex() const {
        if (qplacesearchsuggestionreply_sendersignalindex_isbase) {
            qplacesearchsuggestionreply_sendersignalindex_isbase = false;
            return QPlaceSearchSuggestionReply::senderSignalIndex();
        } else if (qplacesearchsuggestionreply_sendersignalindex_callback != nullptr) {
            int callback_ret = qplacesearchsuggestionreply_sendersignalindex_callback();
            return static_cast<int>(callback_ret);
        } else {
            return QPlaceSearchSuggestionReply::senderSignalIndex();
        }
    }

    // Virtual method for C ABI access and custom callback
    int receivers(const char* signal) const {
        if (qplacesearchsuggestionreply_receivers_isbase) {
            qplacesearchsuggestionreply_receivers_isbase = false;
            return QPlaceSearchSuggestionReply::receivers(signal);
        } else if (qplacesearchsuggestionreply_receivers_callback != nullptr) {
            const char* cbval1 = (const char*)signal;

            int callback_ret = qplacesearchsuggestionreply_receivers_callback(this, cbval1);
            return static_cast<int>(callback_ret);
        } else {
            return QPlaceSearchSuggestionReply::receivers(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    bool isSignalConnected(const QMetaMethod& signal) const {
        if (qplacesearchsuggestionreply_issignalconnected_isbase) {
            qplacesearchsuggestionreply_issignalconnected_isbase = false;
            return QPlaceSearchSuggestionReply::isSignalConnected(signal);
        } else if (qplacesearchsuggestionreply_issignalconnected_callback != nullptr) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            bool callback_ret = qplacesearchsuggestionreply_issignalconnected_callback(this, cbval1);
            return callback_ret;
        } else {
            return QPlaceSearchSuggestionReply::isSignalConnected(signal);
        }
    }

    // Friend functions
    friend void QPlaceSearchSuggestionReply_TimerEvent(QPlaceSearchSuggestionReply* self, QTimerEvent* event);
    friend void QPlaceSearchSuggestionReply_QBaseTimerEvent(QPlaceSearchSuggestionReply* self, QTimerEvent* event);
    friend void QPlaceSearchSuggestionReply_ChildEvent(QPlaceSearchSuggestionReply* self, QChildEvent* event);
    friend void QPlaceSearchSuggestionReply_QBaseChildEvent(QPlaceSearchSuggestionReply* self, QChildEvent* event);
    friend void QPlaceSearchSuggestionReply_CustomEvent(QPlaceSearchSuggestionReply* self, QEvent* event);
    friend void QPlaceSearchSuggestionReply_QBaseCustomEvent(QPlaceSearchSuggestionReply* self, QEvent* event);
    friend void QPlaceSearchSuggestionReply_ConnectNotify(QPlaceSearchSuggestionReply* self, const QMetaMethod* signal);
    friend void QPlaceSearchSuggestionReply_QBaseConnectNotify(QPlaceSearchSuggestionReply* self, const QMetaMethod* signal);
    friend void QPlaceSearchSuggestionReply_DisconnectNotify(QPlaceSearchSuggestionReply* self, const QMetaMethod* signal);
    friend void QPlaceSearchSuggestionReply_QBaseDisconnectNotify(QPlaceSearchSuggestionReply* self, const QMetaMethod* signal);
    friend void QPlaceSearchSuggestionReply_SetSuggestions(QPlaceSearchSuggestionReply* self, const libqt_list /* of libqt_string */ suggestions);
    friend void QPlaceSearchSuggestionReply_QBaseSetSuggestions(QPlaceSearchSuggestionReply* self, const libqt_list /* of libqt_string */ suggestions);
    friend void QPlaceSearchSuggestionReply_SetFinished(QPlaceSearchSuggestionReply* self, bool finished);
    friend void QPlaceSearchSuggestionReply_QBaseSetFinished(QPlaceSearchSuggestionReply* self, bool finished);
    friend void QPlaceSearchSuggestionReply_SetError(QPlaceSearchSuggestionReply* self, int errorVal, const libqt_string errorString);
    friend void QPlaceSearchSuggestionReply_QBaseSetError(QPlaceSearchSuggestionReply* self, int errorVal, const libqt_string errorString);
    friend QObject* QPlaceSearchSuggestionReply_Sender(const QPlaceSearchSuggestionReply* self);
    friend QObject* QPlaceSearchSuggestionReply_QBaseSender(const QPlaceSearchSuggestionReply* self);
    friend int QPlaceSearchSuggestionReply_SenderSignalIndex(const QPlaceSearchSuggestionReply* self);
    friend int QPlaceSearchSuggestionReply_QBaseSenderSignalIndex(const QPlaceSearchSuggestionReply* self);
    friend int QPlaceSearchSuggestionReply_Receivers(const QPlaceSearchSuggestionReply* self, const char* signal);
    friend int QPlaceSearchSuggestionReply_QBaseReceivers(const QPlaceSearchSuggestionReply* self, const char* signal);
    friend bool QPlaceSearchSuggestionReply_IsSignalConnected(const QPlaceSearchSuggestionReply* self, const QMetaMethod* signal);
    friend bool QPlaceSearchSuggestionReply_QBaseIsSignalConnected(const QPlaceSearchSuggestionReply* self, const QMetaMethod* signal);
};

#endif
