#pragma once
#ifndef SRC_RESTRICTED_EXTRAS_QSCINTILLAC_LIBVIRTUALQSCIAPIS_H
#define SRC_RESTRICTED_EXTRAS_QSCINTILLAC_LIBVIRTUALQSCIAPIS_H

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

// This class is a subclass of QsciAPIs so that we can call protected methods
class VirtualQsciAPIs final : public QsciAPIs {

  public:
    // Virtual class boolean flag
    bool isVirtualQsciAPIs = true;

    // Virtual class public types (including callbacks)
    using QsciAPIs_MetaObject_Callback = QMetaObject* (*)();
    using QsciAPIs_Metacast_Callback = void* (*)(QsciAPIs*, const char*);
    using QsciAPIs_Metacall_Callback = int (*)(QsciAPIs*, int, int, void**);
    using QsciAPIs_UpdateAutoCompletionList_Callback = void (*)(QsciAPIs*, const char**, const char**);
    using QsciAPIs_AutoCompletionSelected_Callback = void (*)(QsciAPIs*, const char*);
    using QsciAPIs_CallTips_Callback = const char** (*)(QsciAPIs*, const char**, int, int, libqt_list /* of int */);
    using QsciAPIs_Event_Callback = bool (*)(QsciAPIs*, QEvent*);
    using QsciAPIs_EventFilter_Callback = bool (*)(QsciAPIs*, QObject*, QEvent*);
    using QsciAPIs_TimerEvent_Callback = void (*)(QsciAPIs*, QTimerEvent*);
    using QsciAPIs_ChildEvent_Callback = void (*)(QsciAPIs*, QChildEvent*);
    using QsciAPIs_CustomEvent_Callback = void (*)(QsciAPIs*, QEvent*);
    using QsciAPIs_ConnectNotify_Callback = void (*)(QsciAPIs*, QMetaMethod*);
    using QsciAPIs_DisconnectNotify_Callback = void (*)(QsciAPIs*, QMetaMethod*);
    using QsciAPIs_Sender_Callback = QObject* (*)();
    using QsciAPIs_SenderSignalIndex_Callback = int (*)();
    using QsciAPIs_Receivers_Callback = int (*)(const QsciAPIs*, const char*);
    using QsciAPIs_IsSignalConnected_Callback = bool (*)(const QsciAPIs*, QMetaMethod*);

  protected:
    // Instance callback storage
    QsciAPIs_MetaObject_Callback qsciapis_metaobject_callback = nullptr;
    QsciAPIs_Metacast_Callback qsciapis_metacast_callback = nullptr;
    QsciAPIs_Metacall_Callback qsciapis_metacall_callback = nullptr;
    QsciAPIs_UpdateAutoCompletionList_Callback qsciapis_updateautocompletionlist_callback = nullptr;
    QsciAPIs_AutoCompletionSelected_Callback qsciapis_autocompletionselected_callback = nullptr;
    QsciAPIs_CallTips_Callback qsciapis_calltips_callback = nullptr;
    QsciAPIs_Event_Callback qsciapis_event_callback = nullptr;
    QsciAPIs_EventFilter_Callback qsciapis_eventfilter_callback = nullptr;
    QsciAPIs_TimerEvent_Callback qsciapis_timerevent_callback = nullptr;
    QsciAPIs_ChildEvent_Callback qsciapis_childevent_callback = nullptr;
    QsciAPIs_CustomEvent_Callback qsciapis_customevent_callback = nullptr;
    QsciAPIs_ConnectNotify_Callback qsciapis_connectnotify_callback = nullptr;
    QsciAPIs_DisconnectNotify_Callback qsciapis_disconnectnotify_callback = nullptr;
    QsciAPIs_Sender_Callback qsciapis_sender_callback = nullptr;
    QsciAPIs_SenderSignalIndex_Callback qsciapis_sendersignalindex_callback = nullptr;
    QsciAPIs_Receivers_Callback qsciapis_receivers_callback = nullptr;
    QsciAPIs_IsSignalConnected_Callback qsciapis_issignalconnected_callback = nullptr;

    // Instance base flags
    mutable bool qsciapis_metaobject_isbase = false;
    mutable bool qsciapis_metacast_isbase = false;
    mutable bool qsciapis_metacall_isbase = false;
    mutable bool qsciapis_updateautocompletionlist_isbase = false;
    mutable bool qsciapis_autocompletionselected_isbase = false;
    mutable bool qsciapis_calltips_isbase = false;
    mutable bool qsciapis_event_isbase = false;
    mutable bool qsciapis_eventfilter_isbase = false;
    mutable bool qsciapis_timerevent_isbase = false;
    mutable bool qsciapis_childevent_isbase = false;
    mutable bool qsciapis_customevent_isbase = false;
    mutable bool qsciapis_connectnotify_isbase = false;
    mutable bool qsciapis_disconnectnotify_isbase = false;
    mutable bool qsciapis_sender_isbase = false;
    mutable bool qsciapis_sendersignalindex_isbase = false;
    mutable bool qsciapis_receivers_isbase = false;
    mutable bool qsciapis_issignalconnected_isbase = false;

  public:
    VirtualQsciAPIs(QsciLexer* lexer) : QsciAPIs(lexer) {};

    // Callback setters
    inline void setQsciAPIs_MetaObject_Callback(QsciAPIs_MetaObject_Callback cb) { qsciapis_metaobject_callback = cb; }
    inline void setQsciAPIs_Metacast_Callback(QsciAPIs_Metacast_Callback cb) { qsciapis_metacast_callback = cb; }
    inline void setQsciAPIs_Metacall_Callback(QsciAPIs_Metacall_Callback cb) { qsciapis_metacall_callback = cb; }
    inline void setQsciAPIs_UpdateAutoCompletionList_Callback(QsciAPIs_UpdateAutoCompletionList_Callback cb) { qsciapis_updateautocompletionlist_callback = cb; }
    inline void setQsciAPIs_AutoCompletionSelected_Callback(QsciAPIs_AutoCompletionSelected_Callback cb) { qsciapis_autocompletionselected_callback = cb; }
    inline void setQsciAPIs_CallTips_Callback(QsciAPIs_CallTips_Callback cb) { qsciapis_calltips_callback = cb; }
    inline void setQsciAPIs_Event_Callback(QsciAPIs_Event_Callback cb) { qsciapis_event_callback = cb; }
    inline void setQsciAPIs_EventFilter_Callback(QsciAPIs_EventFilter_Callback cb) { qsciapis_eventfilter_callback = cb; }
    inline void setQsciAPIs_TimerEvent_Callback(QsciAPIs_TimerEvent_Callback cb) { qsciapis_timerevent_callback = cb; }
    inline void setQsciAPIs_ChildEvent_Callback(QsciAPIs_ChildEvent_Callback cb) { qsciapis_childevent_callback = cb; }
    inline void setQsciAPIs_CustomEvent_Callback(QsciAPIs_CustomEvent_Callback cb) { qsciapis_customevent_callback = cb; }
    inline void setQsciAPIs_ConnectNotify_Callback(QsciAPIs_ConnectNotify_Callback cb) { qsciapis_connectnotify_callback = cb; }
    inline void setQsciAPIs_DisconnectNotify_Callback(QsciAPIs_DisconnectNotify_Callback cb) { qsciapis_disconnectnotify_callback = cb; }
    inline void setQsciAPIs_Sender_Callback(QsciAPIs_Sender_Callback cb) { qsciapis_sender_callback = cb; }
    inline void setQsciAPIs_SenderSignalIndex_Callback(QsciAPIs_SenderSignalIndex_Callback cb) { qsciapis_sendersignalindex_callback = cb; }
    inline void setQsciAPIs_Receivers_Callback(QsciAPIs_Receivers_Callback cb) { qsciapis_receivers_callback = cb; }
    inline void setQsciAPIs_IsSignalConnected_Callback(QsciAPIs_IsSignalConnected_Callback cb) { qsciapis_issignalconnected_callback = cb; }

    // Base flag setters
    inline void setQsciAPIs_MetaObject_IsBase(bool value) const { qsciapis_metaobject_isbase = value; }
    inline void setQsciAPIs_Metacast_IsBase(bool value) const { qsciapis_metacast_isbase = value; }
    inline void setQsciAPIs_Metacall_IsBase(bool value) const { qsciapis_metacall_isbase = value; }
    inline void setQsciAPIs_UpdateAutoCompletionList_IsBase(bool value) const { qsciapis_updateautocompletionlist_isbase = value; }
    inline void setQsciAPIs_AutoCompletionSelected_IsBase(bool value) const { qsciapis_autocompletionselected_isbase = value; }
    inline void setQsciAPIs_CallTips_IsBase(bool value) const { qsciapis_calltips_isbase = value; }
    inline void setQsciAPIs_Event_IsBase(bool value) const { qsciapis_event_isbase = value; }
    inline void setQsciAPIs_EventFilter_IsBase(bool value) const { qsciapis_eventfilter_isbase = value; }
    inline void setQsciAPIs_TimerEvent_IsBase(bool value) const { qsciapis_timerevent_isbase = value; }
    inline void setQsciAPIs_ChildEvent_IsBase(bool value) const { qsciapis_childevent_isbase = value; }
    inline void setQsciAPIs_CustomEvent_IsBase(bool value) const { qsciapis_customevent_isbase = value; }
    inline void setQsciAPIs_ConnectNotify_IsBase(bool value) const { qsciapis_connectnotify_isbase = value; }
    inline void setQsciAPIs_DisconnectNotify_IsBase(bool value) const { qsciapis_disconnectnotify_isbase = value; }
    inline void setQsciAPIs_Sender_IsBase(bool value) const { qsciapis_sender_isbase = value; }
    inline void setQsciAPIs_SenderSignalIndex_IsBase(bool value) const { qsciapis_sendersignalindex_isbase = value; }
    inline void setQsciAPIs_Receivers_IsBase(bool value) const { qsciapis_receivers_isbase = value; }
    inline void setQsciAPIs_IsSignalConnected_IsBase(bool value) const { qsciapis_issignalconnected_isbase = value; }

    // Virtual method for C ABI access and custom callback
    virtual const QMetaObject* metaObject() const override {
        if (qsciapis_metaobject_isbase) {
            qsciapis_metaobject_isbase = false;
            return QsciAPIs::metaObject();
        }
        auto metaobject_cb = qsciapis_metaobject_callback;
        if (metaobject_cb) {
            QMetaObject* callback_ret = metaobject_cb();
            return callback_ret;
        }
        return QsciAPIs::metaObject();
    }

    // Virtual method for C ABI access and custom callback
    virtual void* qt_metacast(const char* param1) override {
        if (qsciapis_metacast_isbase) {
            qsciapis_metacast_isbase = false;
            return QsciAPIs::qt_metacast(param1);
        }
        auto metacast_cb = qsciapis_metacast_callback;
        if (metacast_cb) {
            const char* cbval1 = (const char*)param1;

            void* callback_ret = metacast_cb(this, cbval1);
            return callback_ret;
        }
        return QsciAPIs::qt_metacast(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (qsciapis_metacall_isbase) {
            qsciapis_metacall_isbase = false;
            return QsciAPIs::qt_metacall(param1, param2, param3);
        }
        auto metacall_cb = qsciapis_metacall_callback;
        if (metacall_cb) {
            int cbval1 = static_cast<int>(param1);
            int cbval2 = param2;
            void** cbval3 = param3;

            int callback_ret = metacall_cb(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        }
        return QsciAPIs::qt_metacall(param1, param2, param3);
    }

    // Virtual method for C ABI access and custom callback
    virtual void updateAutoCompletionList(const QList<QString>& context, QList<QString>& list) override {
        if (qsciapis_updateautocompletionlist_isbase) {
            qsciapis_updateautocompletionlist_isbase = false;
            QsciAPIs::updateAutoCompletionList(context, list);
            return;
        }
        auto updateautocompletionlist_cb = qsciapis_updateautocompletionlist_callback;
        if (updateautocompletionlist_cb) {
            const QList<QString>& context_ret = context;
            // Convert QString from UTF-16 in C++ RAII memory to null-terminated UTF-8 chars in manually-managed C memory
            const char** context_arr = static_cast<const char**>(malloc(sizeof(const char*) * (context_ret.size() + 1)));
            for (qsizetype i = 0; i < context_ret.size(); ++i) {
                QByteArray context_b = context_ret[i].toUtf8();
                auto context_str_len = context_b.length();
                char* context_str = static_cast<char*>(malloc(context_str_len + 1));
                memcpy(context_str, context_b.data(), context_str_len);
                context_str[context_str_len] = '\0';
                context_arr[i] = context_str;
            }
            // Append sentinel null terminator to the list
            context_arr[context_ret.size()] = nullptr;
            const char** cbval1 = context_arr;
            QList<QString>& list_ret = list;
            // Convert QString from UTF-16 in C++ RAII memory to null-terminated UTF-8 chars in manually-managed C memory
            const char** list_arr = static_cast<const char**>(malloc(sizeof(const char*) * (list_ret.size() + 1)));
            for (qsizetype i = 0; i < list_ret.size(); ++i) {
                QByteArray list_b = list_ret[i].toUtf8();
                auto list_str_len = list_b.length();
                char* list_str = static_cast<char*>(malloc(list_str_len + 1));
                memcpy(list_str, list_b.data(), list_str_len);
                list_str[list_str_len] = '\0';
                list_arr[i] = list_str;
            }
            // Append sentinel null terminator to the list
            list_arr[list_ret.size()] = nullptr;
            const char** cbval2 = list_arr;

            updateautocompletionlist_cb(this, cbval1, cbval2);
            libqt_free(context_arr);
            libqt_free(list_arr);
            return;
        }
        QsciAPIs::updateAutoCompletionList(context, list);
    }

    // Virtual method for C ABI access and custom callback
    virtual void autoCompletionSelected(const QString& sel) override {
        if (qsciapis_autocompletionselected_isbase) {
            qsciapis_autocompletionselected_isbase = false;
            QsciAPIs::autoCompletionSelected(sel);
            return;
        }
        auto autocompletionselected_cb = qsciapis_autocompletionselected_callback;
        if (autocompletionselected_cb) {
            const QString sel_ret = sel;
            // Convert QString from UTF-16 in C++ RAII memory to UTF-8 chars in manually-managed C memory
            QByteArray sel_b = sel_ret.toUtf8();
            auto sel_str_len = sel_b.length();
            const char* sel_str = static_cast<const char*>(malloc(sel_str_len + 1));
            memcpy((void*)sel_str, sel_b.data(), sel_str_len);
            ((char*)sel_str)[sel_str_len] = '\0';
            const char* cbval1 = sel_str;

            autocompletionselected_cb(this, cbval1);
            libqt_free(sel_str);
            return;
        }
        QsciAPIs::autoCompletionSelected(sel);
    }

    // Virtual method for C ABI access and custom callback
    virtual QList<QString> callTips(const QList<QString>& context, int commas, QsciScintilla::CallTipsStyle style, QList<int>& shifts) override {
        if (qsciapis_calltips_isbase) {
            qsciapis_calltips_isbase = false;
            return QsciAPIs::callTips(context, commas, style, shifts);
        }
        auto calltips_cb = qsciapis_calltips_callback;
        if (calltips_cb) {
            const QList<QString>& context_ret = context;
            // Convert QString from UTF-16 in C++ RAII memory to null-terminated UTF-8 chars in manually-managed C memory
            const char** context_arr = static_cast<const char**>(malloc(sizeof(const char*) * (context_ret.size() + 1)));
            for (qsizetype i = 0; i < context_ret.size(); ++i) {
                QByteArray context_b = context_ret[i].toUtf8();
                auto context_str_len = context_b.length();
                char* context_str = static_cast<char*>(malloc(context_str_len + 1));
                memcpy(context_str, context_b.data(), context_str_len);
                context_str[context_str_len] = '\0';
                context_arr[i] = context_str;
            }
            // Append sentinel null terminator to the list
            context_arr[context_ret.size()] = nullptr;
            const char** cbval1 = context_arr;
            int cbval2 = commas;
            int cbval3 = static_cast<int>(style);
            QList<int>& shifts_ret = shifts;
            // Convert QList<> from C++ memory to manually-managed C memory
            int* shifts_arr = static_cast<int*>(malloc(sizeof(int) * (shifts_ret.size())));
            for (qsizetype i = 0; i < shifts_ret.size(); ++i) {
                shifts_arr[i] = shifts_ret[i];
            }
            libqt_list shifts_out;
            shifts_out.len = shifts_ret.size();
            shifts_out.data = static_cast<void*>(shifts_arr);
            libqt_list /* of int */ cbval4 = shifts_out;

            const char** callback_ret = calltips_cb(this, cbval1, cbval2, cbval3, cbval4);
            QList<QString> callback_ret_QList;
            size_t callback_ret_len = libqt_strv_length(callback_ret);
            callback_ret_QList.reserve(callback_ret_len);
            const char** callback_ret_arr = static_cast<const char**>(callback_ret);
            for (size_t i = 0; i < callback_ret_len; ++i) {
                QString callback_ret_arr_i_QString = QString::fromUtf8(callback_ret_arr[i]);
                callback_ret_QList.push_back(callback_ret_arr_i_QString);
            }
            libqt_free(callback_ret);
            libqt_free(context_arr);
            free(shifts_arr);
            return callback_ret_QList;
        }
        return QsciAPIs::callTips(context, commas, style, shifts);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* e) override {
        if (qsciapis_event_isbase) {
            qsciapis_event_isbase = false;
            return QsciAPIs::event(e);
        }
        auto event_cb = qsciapis_event_callback;
        if (event_cb) {
            QEvent* cbval1 = e;

            bool callback_ret = event_cb(this, cbval1);
            return callback_ret;
        }
        return QsciAPIs::event(e);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* watched, QEvent* event) override {
        if (qsciapis_eventfilter_isbase) {
            qsciapis_eventfilter_isbase = false;
            return QsciAPIs::eventFilter(watched, event);
        }
        auto eventfilter_cb = qsciapis_eventfilter_callback;
        if (eventfilter_cb) {
            QObject* cbval1 = watched;
            QEvent* cbval2 = event;

            bool callback_ret = eventfilter_cb(this, cbval1, cbval2);
            return callback_ret;
        }
        return QsciAPIs::eventFilter(watched, event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (qsciapis_timerevent_isbase) {
            qsciapis_timerevent_isbase = false;
            QsciAPIs::timerEvent(event);
            return;
        }
        auto timerevent_cb = qsciapis_timerevent_callback;
        if (timerevent_cb) {
            QTimerEvent* cbval1 = event;

            timerevent_cb(this, cbval1);
            return;
        }
        QsciAPIs::timerEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (qsciapis_childevent_isbase) {
            qsciapis_childevent_isbase = false;
            QsciAPIs::childEvent(event);
            return;
        }
        auto childevent_cb = qsciapis_childevent_callback;
        if (childevent_cb) {
            QChildEvent* cbval1 = event;

            childevent_cb(this, cbval1);
            return;
        }
        QsciAPIs::childEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (qsciapis_customevent_isbase) {
            qsciapis_customevent_isbase = false;
            QsciAPIs::customEvent(event);
            return;
        }
        auto customevent_cb = qsciapis_customevent_callback;
        if (customevent_cb) {
            QEvent* cbval1 = event;

            customevent_cb(this, cbval1);
            return;
        }
        QsciAPIs::customEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (qsciapis_connectnotify_isbase) {
            qsciapis_connectnotify_isbase = false;
            QsciAPIs::connectNotify(signal);
            return;
        }
        auto connectnotify_cb = qsciapis_connectnotify_callback;
        if (connectnotify_cb) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            connectnotify_cb(this, cbval1);
            return;
        }
        QsciAPIs::connectNotify(signal);
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (qsciapis_disconnectnotify_isbase) {
            qsciapis_disconnectnotify_isbase = false;
            QsciAPIs::disconnectNotify(signal);
            return;
        }
        auto disconnectnotify_cb = qsciapis_disconnectnotify_callback;
        if (disconnectnotify_cb) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            disconnectnotify_cb(this, cbval1);
            return;
        }
        QsciAPIs::disconnectNotify(signal);
    }

    // Virtual method for C ABI access and custom callback
    QObject* sender() const {
        if (qsciapis_sender_isbase) {
            qsciapis_sender_isbase = false;
            return QsciAPIs::sender();
        }
        auto sender_cb = qsciapis_sender_callback;
        if (sender_cb) {
            QObject* callback_ret = sender_cb();
            return callback_ret;
        }
        return QsciAPIs::sender();
    }

    // Virtual method for C ABI access and custom callback
    int senderSignalIndex() const {
        if (qsciapis_sendersignalindex_isbase) {
            qsciapis_sendersignalindex_isbase = false;
            return QsciAPIs::senderSignalIndex();
        }
        auto sendersignalindex_cb = qsciapis_sendersignalindex_callback;
        if (sendersignalindex_cb) {
            int callback_ret = sendersignalindex_cb();
            return static_cast<int>(callback_ret);
        }
        return QsciAPIs::senderSignalIndex();
    }

    // Virtual method for C ABI access and custom callback
    int receivers(const char* signal) const {
        if (qsciapis_receivers_isbase) {
            qsciapis_receivers_isbase = false;
            return QsciAPIs::receivers(signal);
        }
        auto receivers_cb = qsciapis_receivers_callback;
        if (receivers_cb) {
            const char* cbval1 = (const char*)signal;

            int callback_ret = receivers_cb(this, cbval1);
            return static_cast<int>(callback_ret);
        }
        return QsciAPIs::receivers(signal);
    }

    // Virtual method for C ABI access and custom callback
    bool isSignalConnected(const QMetaMethod& signal) const {
        if (qsciapis_issignalconnected_isbase) {
            qsciapis_issignalconnected_isbase = false;
            return QsciAPIs::isSignalConnected(signal);
        }
        auto issignalconnected_cb = qsciapis_issignalconnected_callback;
        if (issignalconnected_cb) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            bool callback_ret = issignalconnected_cb(this, cbval1);
            return callback_ret;
        }
        return QsciAPIs::isSignalConnected(signal);
    }

    // Friend functions
    friend void QsciAPIs_TimerEvent(QsciAPIs* self, QTimerEvent* event);
    friend void QsciAPIs_SuperTimerEvent(QsciAPIs* self, QTimerEvent* event);
    friend void QsciAPIs_ChildEvent(QsciAPIs* self, QChildEvent* event);
    friend void QsciAPIs_SuperChildEvent(QsciAPIs* self, QChildEvent* event);
    friend void QsciAPIs_CustomEvent(QsciAPIs* self, QEvent* event);
    friend void QsciAPIs_SuperCustomEvent(QsciAPIs* self, QEvent* event);
    friend void QsciAPIs_ConnectNotify(QsciAPIs* self, const QMetaMethod* signal);
    friend void QsciAPIs_SuperConnectNotify(QsciAPIs* self, const QMetaMethod* signal);
    friend void QsciAPIs_DisconnectNotify(QsciAPIs* self, const QMetaMethod* signal);
    friend void QsciAPIs_SuperDisconnectNotify(QsciAPIs* self, const QMetaMethod* signal);
    friend QObject* QsciAPIs_Sender(const QsciAPIs* self);
    friend QObject* QsciAPIs_SuperSender(const QsciAPIs* self);
    friend int QsciAPIs_SenderSignalIndex(const QsciAPIs* self);
    friend int QsciAPIs_SuperSenderSignalIndex(const QsciAPIs* self);
    friend int QsciAPIs_Receivers(const QsciAPIs* self, const char* signal);
    friend int QsciAPIs_SuperReceivers(const QsciAPIs* self, const char* signal);
    friend bool QsciAPIs_IsSignalConnected(const QsciAPIs* self, const QMetaMethod* signal);
    friend bool QsciAPIs_SuperIsSignalConnected(const QsciAPIs* self, const QMetaMethod* signal);
};

#endif
