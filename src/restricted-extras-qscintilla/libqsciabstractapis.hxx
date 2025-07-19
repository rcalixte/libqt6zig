#pragma once
#ifndef SRC_RESTRICTED_EXTRAS_QSCINTILLAC_LIBVIRTUALQSCIABSTRACTAPIS_H
#define SRC_RESTRICTED_EXTRAS_QSCINTILLAC_LIBVIRTUALQSCIABSTRACTAPIS_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

// This class is a subclass of QsciAbstractAPIs so that we can call protected methods
class VirtualQsciAbstractAPIs final : public QsciAbstractAPIs {

  public:
    // Virtual class boolean flag
    bool isVirtualQsciAbstractAPIs = true;

    // Virtual class public types (including callbacks)
    using QsciAbstractAPIs_Metacall_Callback = int (*)(QsciAbstractAPIs*, int, int, void**);
    using QsciAbstractAPIs_UpdateAutoCompletionList_Callback = void (*)(QsciAbstractAPIs*, libqt_list /* of libqt_string */, libqt_list /* of libqt_string */);
    using QsciAbstractAPIs_AutoCompletionSelected_Callback = void (*)(QsciAbstractAPIs*, libqt_string);
    using QsciAbstractAPIs_CallTips_Callback = libqt_list /* of libqt_string */ (*)(QsciAbstractAPIs*, libqt_list /* of libqt_string */, int, int, libqt_list /* of int */);
    using QsciAbstractAPIs_Event_Callback = bool (*)(QsciAbstractAPIs*, QEvent*);
    using QsciAbstractAPIs_EventFilter_Callback = bool (*)(QsciAbstractAPIs*, QObject*, QEvent*);
    using QsciAbstractAPIs_TimerEvent_Callback = void (*)(QsciAbstractAPIs*, QTimerEvent*);
    using QsciAbstractAPIs_ChildEvent_Callback = void (*)(QsciAbstractAPIs*, QChildEvent*);
    using QsciAbstractAPIs_CustomEvent_Callback = void (*)(QsciAbstractAPIs*, QEvent*);
    using QsciAbstractAPIs_ConnectNotify_Callback = void (*)(QsciAbstractAPIs*, QMetaMethod*);
    using QsciAbstractAPIs_DisconnectNotify_Callback = void (*)(QsciAbstractAPIs*, QMetaMethod*);
    using QsciAbstractAPIs_Sender_Callback = QObject* (*)();
    using QsciAbstractAPIs_SenderSignalIndex_Callback = int (*)();
    using QsciAbstractAPIs_Receivers_Callback = int (*)(const QsciAbstractAPIs*, const char*);
    using QsciAbstractAPIs_IsSignalConnected_Callback = bool (*)(const QsciAbstractAPIs*, QMetaMethod*);

  protected:
    // Instance callback storage
    QsciAbstractAPIs_Metacall_Callback qsciabstractapis_metacall_callback = nullptr;
    QsciAbstractAPIs_UpdateAutoCompletionList_Callback qsciabstractapis_updateautocompletionlist_callback = nullptr;
    QsciAbstractAPIs_AutoCompletionSelected_Callback qsciabstractapis_autocompletionselected_callback = nullptr;
    QsciAbstractAPIs_CallTips_Callback qsciabstractapis_calltips_callback = nullptr;
    QsciAbstractAPIs_Event_Callback qsciabstractapis_event_callback = nullptr;
    QsciAbstractAPIs_EventFilter_Callback qsciabstractapis_eventfilter_callback = nullptr;
    QsciAbstractAPIs_TimerEvent_Callback qsciabstractapis_timerevent_callback = nullptr;
    QsciAbstractAPIs_ChildEvent_Callback qsciabstractapis_childevent_callback = nullptr;
    QsciAbstractAPIs_CustomEvent_Callback qsciabstractapis_customevent_callback = nullptr;
    QsciAbstractAPIs_ConnectNotify_Callback qsciabstractapis_connectnotify_callback = nullptr;
    QsciAbstractAPIs_DisconnectNotify_Callback qsciabstractapis_disconnectnotify_callback = nullptr;
    QsciAbstractAPIs_Sender_Callback qsciabstractapis_sender_callback = nullptr;
    QsciAbstractAPIs_SenderSignalIndex_Callback qsciabstractapis_sendersignalindex_callback = nullptr;
    QsciAbstractAPIs_Receivers_Callback qsciabstractapis_receivers_callback = nullptr;
    QsciAbstractAPIs_IsSignalConnected_Callback qsciabstractapis_issignalconnected_callback = nullptr;

    // Instance base flags
    mutable bool qsciabstractapis_metacall_isbase = false;
    mutable bool qsciabstractapis_updateautocompletionlist_isbase = false;
    mutable bool qsciabstractapis_autocompletionselected_isbase = false;
    mutable bool qsciabstractapis_calltips_isbase = false;
    mutable bool qsciabstractapis_event_isbase = false;
    mutable bool qsciabstractapis_eventfilter_isbase = false;
    mutable bool qsciabstractapis_timerevent_isbase = false;
    mutable bool qsciabstractapis_childevent_isbase = false;
    mutable bool qsciabstractapis_customevent_isbase = false;
    mutable bool qsciabstractapis_connectnotify_isbase = false;
    mutable bool qsciabstractapis_disconnectnotify_isbase = false;
    mutable bool qsciabstractapis_sender_isbase = false;
    mutable bool qsciabstractapis_sendersignalindex_isbase = false;
    mutable bool qsciabstractapis_receivers_isbase = false;
    mutable bool qsciabstractapis_issignalconnected_isbase = false;

  public:
    VirtualQsciAbstractAPIs(QsciLexer* lexer) : QsciAbstractAPIs(lexer) {};

    ~VirtualQsciAbstractAPIs() {
        qsciabstractapis_metacall_callback = nullptr;
        qsciabstractapis_updateautocompletionlist_callback = nullptr;
        qsciabstractapis_autocompletionselected_callback = nullptr;
        qsciabstractapis_calltips_callback = nullptr;
        qsciabstractapis_event_callback = nullptr;
        qsciabstractapis_eventfilter_callback = nullptr;
        qsciabstractapis_timerevent_callback = nullptr;
        qsciabstractapis_childevent_callback = nullptr;
        qsciabstractapis_customevent_callback = nullptr;
        qsciabstractapis_connectnotify_callback = nullptr;
        qsciabstractapis_disconnectnotify_callback = nullptr;
        qsciabstractapis_sender_callback = nullptr;
        qsciabstractapis_sendersignalindex_callback = nullptr;
        qsciabstractapis_receivers_callback = nullptr;
        qsciabstractapis_issignalconnected_callback = nullptr;
    }

    // Callback setters
    inline void setQsciAbstractAPIs_Metacall_Callback(QsciAbstractAPIs_Metacall_Callback cb) { qsciabstractapis_metacall_callback = cb; }
    inline void setQsciAbstractAPIs_UpdateAutoCompletionList_Callback(QsciAbstractAPIs_UpdateAutoCompletionList_Callback cb) { qsciabstractapis_updateautocompletionlist_callback = cb; }
    inline void setQsciAbstractAPIs_AutoCompletionSelected_Callback(QsciAbstractAPIs_AutoCompletionSelected_Callback cb) { qsciabstractapis_autocompletionselected_callback = cb; }
    inline void setQsciAbstractAPIs_CallTips_Callback(QsciAbstractAPIs_CallTips_Callback cb) { qsciabstractapis_calltips_callback = cb; }
    inline void setQsciAbstractAPIs_Event_Callback(QsciAbstractAPIs_Event_Callback cb) { qsciabstractapis_event_callback = cb; }
    inline void setQsciAbstractAPIs_EventFilter_Callback(QsciAbstractAPIs_EventFilter_Callback cb) { qsciabstractapis_eventfilter_callback = cb; }
    inline void setQsciAbstractAPIs_TimerEvent_Callback(QsciAbstractAPIs_TimerEvent_Callback cb) { qsciabstractapis_timerevent_callback = cb; }
    inline void setQsciAbstractAPIs_ChildEvent_Callback(QsciAbstractAPIs_ChildEvent_Callback cb) { qsciabstractapis_childevent_callback = cb; }
    inline void setQsciAbstractAPIs_CustomEvent_Callback(QsciAbstractAPIs_CustomEvent_Callback cb) { qsciabstractapis_customevent_callback = cb; }
    inline void setQsciAbstractAPIs_ConnectNotify_Callback(QsciAbstractAPIs_ConnectNotify_Callback cb) { qsciabstractapis_connectnotify_callback = cb; }
    inline void setQsciAbstractAPIs_DisconnectNotify_Callback(QsciAbstractAPIs_DisconnectNotify_Callback cb) { qsciabstractapis_disconnectnotify_callback = cb; }
    inline void setQsciAbstractAPIs_Sender_Callback(QsciAbstractAPIs_Sender_Callback cb) { qsciabstractapis_sender_callback = cb; }
    inline void setQsciAbstractAPIs_SenderSignalIndex_Callback(QsciAbstractAPIs_SenderSignalIndex_Callback cb) { qsciabstractapis_sendersignalindex_callback = cb; }
    inline void setQsciAbstractAPIs_Receivers_Callback(QsciAbstractAPIs_Receivers_Callback cb) { qsciabstractapis_receivers_callback = cb; }
    inline void setQsciAbstractAPIs_IsSignalConnected_Callback(QsciAbstractAPIs_IsSignalConnected_Callback cb) { qsciabstractapis_issignalconnected_callback = cb; }

    // Base flag setters
    inline void setQsciAbstractAPIs_Metacall_IsBase(bool value) const { qsciabstractapis_metacall_isbase = value; }
    inline void setQsciAbstractAPIs_UpdateAutoCompletionList_IsBase(bool value) const { qsciabstractapis_updateautocompletionlist_isbase = value; }
    inline void setQsciAbstractAPIs_AutoCompletionSelected_IsBase(bool value) const { qsciabstractapis_autocompletionselected_isbase = value; }
    inline void setQsciAbstractAPIs_CallTips_IsBase(bool value) const { qsciabstractapis_calltips_isbase = value; }
    inline void setQsciAbstractAPIs_Event_IsBase(bool value) const { qsciabstractapis_event_isbase = value; }
    inline void setQsciAbstractAPIs_EventFilter_IsBase(bool value) const { qsciabstractapis_eventfilter_isbase = value; }
    inline void setQsciAbstractAPIs_TimerEvent_IsBase(bool value) const { qsciabstractapis_timerevent_isbase = value; }
    inline void setQsciAbstractAPIs_ChildEvent_IsBase(bool value) const { qsciabstractapis_childevent_isbase = value; }
    inline void setQsciAbstractAPIs_CustomEvent_IsBase(bool value) const { qsciabstractapis_customevent_isbase = value; }
    inline void setQsciAbstractAPIs_ConnectNotify_IsBase(bool value) const { qsciabstractapis_connectnotify_isbase = value; }
    inline void setQsciAbstractAPIs_DisconnectNotify_IsBase(bool value) const { qsciabstractapis_disconnectnotify_isbase = value; }
    inline void setQsciAbstractAPIs_Sender_IsBase(bool value) const { qsciabstractapis_sender_isbase = value; }
    inline void setQsciAbstractAPIs_SenderSignalIndex_IsBase(bool value) const { qsciabstractapis_sendersignalindex_isbase = value; }
    inline void setQsciAbstractAPIs_Receivers_IsBase(bool value) const { qsciabstractapis_receivers_isbase = value; }
    inline void setQsciAbstractAPIs_IsSignalConnected_IsBase(bool value) const { qsciabstractapis_issignalconnected_isbase = value; }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (qsciabstractapis_metacall_isbase) {
            qsciabstractapis_metacall_isbase = false;
            return QsciAbstractAPIs::qt_metacall(param1, param2, param3);
        } else if (qsciabstractapis_metacall_callback != nullptr) {
            int cbval1 = static_cast<int>(param1);
            int cbval2 = param2;
            void** cbval3 = param3;

            int callback_ret = qsciabstractapis_metacall_callback(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        } else {
            return QsciAbstractAPIs::qt_metacall(param1, param2, param3);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void updateAutoCompletionList(const QList<QString>& context, QList<QString>& list) override {
        if (qsciabstractapis_updateautocompletionlist_callback != nullptr) {
            const QList<QString>& context_ret = context;
            // Convert QList<> from C++ memory to manually-managed C memory
            libqt_string* context_arr = static_cast<libqt_string*>(malloc(sizeof(libqt_string) * context_ret.size()));
            for (size_t i = 0; i < context_ret.size(); ++i) {
                QString context_lv_ret = context_ret[i];
                // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
                QByteArray context_lv_b = context_lv_ret.toUtf8();
                libqt_string context_lv_str;
                context_lv_str.len = context_lv_b.length();
                context_lv_str.data = static_cast<const char*>(malloc((context_lv_str.len + 1) * sizeof(char)));
                memcpy((void*)context_lv_str.data, context_lv_b.data(), context_lv_str.len);
                ((char*)context_lv_str.data)[context_lv_str.len] = '\0';
                context_arr[i] = context_lv_str;
            }
            libqt_list context_out;
            context_out.len = context_ret.size();
            context_out.data = static_cast<void*>(context_arr);
            libqt_list /* of libqt_string */ cbval1 = context_out;
            QList<QString>& list_ret = list;
            // Convert QList<> from C++ memory to manually-managed C memory
            libqt_string* list_arr = static_cast<libqt_string*>(malloc(sizeof(libqt_string) * list_ret.size()));
            for (size_t i = 0; i < list_ret.size(); ++i) {
                QString list_lv_ret = list_ret[i];
                // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
                QByteArray list_lv_b = list_lv_ret.toUtf8();
                libqt_string list_lv_str;
                list_lv_str.len = list_lv_b.length();
                list_lv_str.data = static_cast<const char*>(malloc((list_lv_str.len + 1) * sizeof(char)));
                memcpy((void*)list_lv_str.data, list_lv_b.data(), list_lv_str.len);
                ((char*)list_lv_str.data)[list_lv_str.len] = '\0';
                list_arr[i] = list_lv_str;
            }
            libqt_list list_out;
            list_out.len = list_ret.size();
            list_out.data = static_cast<void*>(list_arr);
            libqt_list /* of libqt_string */ cbval2 = list_out;

            qsciabstractapis_updateautocompletionlist_callback(this, cbval1, cbval2);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void autoCompletionSelected(const QString& selection) override {
        if (qsciabstractapis_autocompletionselected_isbase) {
            qsciabstractapis_autocompletionselected_isbase = false;
            QsciAbstractAPIs::autoCompletionSelected(selection);
        } else if (qsciabstractapis_autocompletionselected_callback != nullptr) {
            const QString selection_ret = selection;
            // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
            QByteArray selection_b = selection_ret.toUtf8();
            libqt_string selection_str;
            selection_str.len = selection_b.length();
            selection_str.data = static_cast<const char*>(malloc((selection_str.len + 1) * sizeof(char)));
            memcpy((void*)selection_str.data, selection_b.data(), selection_str.len);
            ((char*)selection_str.data)[selection_str.len] = '\0';
            libqt_string cbval1 = selection_str;

            qsciabstractapis_autocompletionselected_callback(this, cbval1);
        } else {
            QsciAbstractAPIs::autoCompletionSelected(selection);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QList<QString> callTips(const QList<QString>& context, int commas, QsciScintilla::CallTipsStyle style, QList<int>& shifts) override {
        if (qsciabstractapis_calltips_callback != nullptr) {
            const QList<QString>& context_ret = context;
            // Convert QList<> from C++ memory to manually-managed C memory
            libqt_string* context_arr = static_cast<libqt_string*>(malloc(sizeof(libqt_string) * context_ret.size()));
            for (size_t i = 0; i < context_ret.size(); ++i) {
                QString context_lv_ret = context_ret[i];
                // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
                QByteArray context_lv_b = context_lv_ret.toUtf8();
                libqt_string context_lv_str;
                context_lv_str.len = context_lv_b.length();
                context_lv_str.data = static_cast<const char*>(malloc((context_lv_str.len + 1) * sizeof(char)));
                memcpy((void*)context_lv_str.data, context_lv_b.data(), context_lv_str.len);
                ((char*)context_lv_str.data)[context_lv_str.len] = '\0';
                context_arr[i] = context_lv_str;
            }
            libqt_list context_out;
            context_out.len = context_ret.size();
            context_out.data = static_cast<void*>(context_arr);
            libqt_list /* of libqt_string */ cbval1 = context_out;
            int cbval2 = commas;
            int cbval3 = static_cast<int>(style);
            QList<int>& shifts_ret = shifts;
            // Convert QList<> from C++ memory to manually-managed C memory
            int* shifts_arr = static_cast<int*>(malloc(sizeof(int) * shifts_ret.size()));
            for (size_t i = 0; i < shifts_ret.size(); ++i) {
                shifts_arr[i] = shifts_ret[i];
            }
            libqt_list shifts_out;
            shifts_out.len = shifts_ret.size();
            shifts_out.data = static_cast<void*>(shifts_arr);
            libqt_list /* of int */ cbval4 = shifts_out;

            libqt_list /* of libqt_string */ callback_ret = qsciabstractapis_calltips_callback(this, cbval1, cbval2, cbval3, cbval4);
            QList<QString> callback_ret_QList;
            callback_ret_QList.reserve(callback_ret.len);
            libqt_string* callback_ret_arr = static_cast<libqt_string*>(callback_ret.data);
            for (size_t i = 0; i < callback_ret.len; ++i) {
                QString callback_ret_arr_i_QString = QString::fromUtf8(callback_ret_arr[i].data, callback_ret_arr[i].len);
                callback_ret_QList.push_back(callback_ret_arr_i_QString);
            }
            return callback_ret_QList;
        } else {
            return {};
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* event) override {
        if (qsciabstractapis_event_isbase) {
            qsciabstractapis_event_isbase = false;
            return QsciAbstractAPIs::event(event);
        } else if (qsciabstractapis_event_callback != nullptr) {
            QEvent* cbval1 = event;

            bool callback_ret = qsciabstractapis_event_callback(this, cbval1);
            return callback_ret;
        } else {
            return QsciAbstractAPIs::event(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* watched, QEvent* event) override {
        if (qsciabstractapis_eventfilter_isbase) {
            qsciabstractapis_eventfilter_isbase = false;
            return QsciAbstractAPIs::eventFilter(watched, event);
        } else if (qsciabstractapis_eventfilter_callback != nullptr) {
            QObject* cbval1 = watched;
            QEvent* cbval2 = event;

            bool callback_ret = qsciabstractapis_eventfilter_callback(this, cbval1, cbval2);
            return callback_ret;
        } else {
            return QsciAbstractAPIs::eventFilter(watched, event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (qsciabstractapis_timerevent_isbase) {
            qsciabstractapis_timerevent_isbase = false;
            QsciAbstractAPIs::timerEvent(event);
        } else if (qsciabstractapis_timerevent_callback != nullptr) {
            QTimerEvent* cbval1 = event;

            qsciabstractapis_timerevent_callback(this, cbval1);
        } else {
            QsciAbstractAPIs::timerEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (qsciabstractapis_childevent_isbase) {
            qsciabstractapis_childevent_isbase = false;
            QsciAbstractAPIs::childEvent(event);
        } else if (qsciabstractapis_childevent_callback != nullptr) {
            QChildEvent* cbval1 = event;

            qsciabstractapis_childevent_callback(this, cbval1);
        } else {
            QsciAbstractAPIs::childEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (qsciabstractapis_customevent_isbase) {
            qsciabstractapis_customevent_isbase = false;
            QsciAbstractAPIs::customEvent(event);
        } else if (qsciabstractapis_customevent_callback != nullptr) {
            QEvent* cbval1 = event;

            qsciabstractapis_customevent_callback(this, cbval1);
        } else {
            QsciAbstractAPIs::customEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (qsciabstractapis_connectnotify_isbase) {
            qsciabstractapis_connectnotify_isbase = false;
            QsciAbstractAPIs::connectNotify(signal);
        } else if (qsciabstractapis_connectnotify_callback != nullptr) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            qsciabstractapis_connectnotify_callback(this, cbval1);
        } else {
            QsciAbstractAPIs::connectNotify(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (qsciabstractapis_disconnectnotify_isbase) {
            qsciabstractapis_disconnectnotify_isbase = false;
            QsciAbstractAPIs::disconnectNotify(signal);
        } else if (qsciabstractapis_disconnectnotify_callback != nullptr) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            qsciabstractapis_disconnectnotify_callback(this, cbval1);
        } else {
            QsciAbstractAPIs::disconnectNotify(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    QObject* sender() const {
        if (qsciabstractapis_sender_isbase) {
            qsciabstractapis_sender_isbase = false;
            return QsciAbstractAPIs::sender();
        } else if (qsciabstractapis_sender_callback != nullptr) {
            QObject* callback_ret = qsciabstractapis_sender_callback();
            return callback_ret;
        } else {
            return QsciAbstractAPIs::sender();
        }
    }

    // Virtual method for C ABI access and custom callback
    int senderSignalIndex() const {
        if (qsciabstractapis_sendersignalindex_isbase) {
            qsciabstractapis_sendersignalindex_isbase = false;
            return QsciAbstractAPIs::senderSignalIndex();
        } else if (qsciabstractapis_sendersignalindex_callback != nullptr) {
            int callback_ret = qsciabstractapis_sendersignalindex_callback();
            return static_cast<int>(callback_ret);
        } else {
            return QsciAbstractAPIs::senderSignalIndex();
        }
    }

    // Virtual method for C ABI access and custom callback
    int receivers(const char* signal) const {
        if (qsciabstractapis_receivers_isbase) {
            qsciabstractapis_receivers_isbase = false;
            return QsciAbstractAPIs::receivers(signal);
        } else if (qsciabstractapis_receivers_callback != nullptr) {
            const char* cbval1 = (const char*)signal;

            int callback_ret = qsciabstractapis_receivers_callback(this, cbval1);
            return static_cast<int>(callback_ret);
        } else {
            return QsciAbstractAPIs::receivers(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    bool isSignalConnected(const QMetaMethod& signal) const {
        if (qsciabstractapis_issignalconnected_isbase) {
            qsciabstractapis_issignalconnected_isbase = false;
            return QsciAbstractAPIs::isSignalConnected(signal);
        } else if (qsciabstractapis_issignalconnected_callback != nullptr) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            bool callback_ret = qsciabstractapis_issignalconnected_callback(this, cbval1);
            return callback_ret;
        } else {
            return QsciAbstractAPIs::isSignalConnected(signal);
        }
    }

    // Friend functions
    friend void QsciAbstractAPIs_TimerEvent(QsciAbstractAPIs* self, QTimerEvent* event);
    friend void QsciAbstractAPIs_QBaseTimerEvent(QsciAbstractAPIs* self, QTimerEvent* event);
    friend void QsciAbstractAPIs_ChildEvent(QsciAbstractAPIs* self, QChildEvent* event);
    friend void QsciAbstractAPIs_QBaseChildEvent(QsciAbstractAPIs* self, QChildEvent* event);
    friend void QsciAbstractAPIs_CustomEvent(QsciAbstractAPIs* self, QEvent* event);
    friend void QsciAbstractAPIs_QBaseCustomEvent(QsciAbstractAPIs* self, QEvent* event);
    friend void QsciAbstractAPIs_ConnectNotify(QsciAbstractAPIs* self, const QMetaMethod* signal);
    friend void QsciAbstractAPIs_QBaseConnectNotify(QsciAbstractAPIs* self, const QMetaMethod* signal);
    friend void QsciAbstractAPIs_DisconnectNotify(QsciAbstractAPIs* self, const QMetaMethod* signal);
    friend void QsciAbstractAPIs_QBaseDisconnectNotify(QsciAbstractAPIs* self, const QMetaMethod* signal);
    friend QObject* QsciAbstractAPIs_Sender(const QsciAbstractAPIs* self);
    friend QObject* QsciAbstractAPIs_QBaseSender(const QsciAbstractAPIs* self);
    friend int QsciAbstractAPIs_SenderSignalIndex(const QsciAbstractAPIs* self);
    friend int QsciAbstractAPIs_QBaseSenderSignalIndex(const QsciAbstractAPIs* self);
    friend int QsciAbstractAPIs_Receivers(const QsciAbstractAPIs* self, const char* signal);
    friend int QsciAbstractAPIs_QBaseReceivers(const QsciAbstractAPIs* self, const char* signal);
    friend bool QsciAbstractAPIs_IsSignalConnected(const QsciAbstractAPIs* self, const QMetaMethod* signal);
    friend bool QsciAbstractAPIs_QBaseIsSignalConnected(const QsciAbstractAPIs* self, const QMetaMethod* signal);
};

#endif
