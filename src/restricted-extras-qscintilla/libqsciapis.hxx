#pragma once
#ifndef SRC_RESTRICTED_EXTRAS_QSCINTILLAC_LIBVIRTUALQSCIAPIS_H
#define SRC_RESTRICTED_EXTRAS_QSCINTILLAC_LIBVIRTUALQSCIAPIS_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

// This class is a subclass of QsciAPIs so that we can call protected methods
class VirtualQsciAPIs final : public QsciAPIs {

  public:
    // Virtual class boolean flag
    bool isVirtualQsciAPIs = true;

    // Virtual class public types (including callbacks)
    using QsciAPIs_Metacall_Callback = int (*)(QsciAPIs*, int, int, void**);
    using QsciAPIs_UpdateAutoCompletionList_Callback = void (*)(QsciAPIs*, libqt_list /* of libqt_string */, libqt_list /* of libqt_string */);
    using QsciAPIs_AutoCompletionSelected_Callback = void (*)(QsciAPIs*, libqt_string);
    using QsciAPIs_CallTips_Callback = libqt_list /* of libqt_string */ (*)(QsciAPIs*, libqt_list /* of libqt_string */, int, int, libqt_list /* of int */);
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

    ~VirtualQsciAPIs() {
        qsciapis_metacall_callback = nullptr;
        qsciapis_updateautocompletionlist_callback = nullptr;
        qsciapis_autocompletionselected_callback = nullptr;
        qsciapis_calltips_callback = nullptr;
        qsciapis_event_callback = nullptr;
        qsciapis_eventfilter_callback = nullptr;
        qsciapis_timerevent_callback = nullptr;
        qsciapis_childevent_callback = nullptr;
        qsciapis_customevent_callback = nullptr;
        qsciapis_connectnotify_callback = nullptr;
        qsciapis_disconnectnotify_callback = nullptr;
        qsciapis_sender_callback = nullptr;
        qsciapis_sendersignalindex_callback = nullptr;
        qsciapis_receivers_callback = nullptr;
        qsciapis_issignalconnected_callback = nullptr;
    }

    // Callback setters
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
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (qsciapis_metacall_isbase) {
            qsciapis_metacall_isbase = false;
            return QsciAPIs::qt_metacall(param1, param2, param3);
        } else if (qsciapis_metacall_callback != nullptr) {
            int cbval1 = static_cast<int>(param1);
            int cbval2 = param2;
            void** cbval3 = param3;

            int callback_ret = qsciapis_metacall_callback(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        } else {
            return QsciAPIs::qt_metacall(param1, param2, param3);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void updateAutoCompletionList(const QList<QString>& context, QList<QString>& list) override {
        if (qsciapis_updateautocompletionlist_isbase) {
            qsciapis_updateautocompletionlist_isbase = false;
            QsciAPIs::updateAutoCompletionList(context, list);
        } else if (qsciapis_updateautocompletionlist_callback != nullptr) {
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

            qsciapis_updateautocompletionlist_callback(this, cbval1, cbval2);
        } else {
            QsciAPIs::updateAutoCompletionList(context, list);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void autoCompletionSelected(const QString& sel) override {
        if (qsciapis_autocompletionselected_isbase) {
            qsciapis_autocompletionselected_isbase = false;
            QsciAPIs::autoCompletionSelected(sel);
        } else if (qsciapis_autocompletionselected_callback != nullptr) {
            const QString sel_ret = sel;
            // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
            QByteArray sel_b = sel_ret.toUtf8();
            libqt_string sel_str;
            sel_str.len = sel_b.length();
            sel_str.data = static_cast<const char*>(malloc((sel_str.len + 1) * sizeof(char)));
            memcpy((void*)sel_str.data, sel_b.data(), sel_str.len);
            ((char*)sel_str.data)[sel_str.len] = '\0';
            libqt_string cbval1 = sel_str;

            qsciapis_autocompletionselected_callback(this, cbval1);
        } else {
            QsciAPIs::autoCompletionSelected(sel);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QList<QString> callTips(const QList<QString>& context, int commas, QsciScintilla::CallTipsStyle style, QList<int>& shifts) override {
        if (qsciapis_calltips_isbase) {
            qsciapis_calltips_isbase = false;
            return QsciAPIs::callTips(context, commas, style, shifts);
        } else if (qsciapis_calltips_callback != nullptr) {
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

            libqt_list /* of libqt_string */ callback_ret = qsciapis_calltips_callback(this, cbval1, cbval2, cbval3, cbval4);
            QList<QString> callback_ret_QList;
            callback_ret_QList.reserve(callback_ret.len);
            libqt_string* callback_ret_arr = static_cast<libqt_string*>(callback_ret.data);
            for (size_t i = 0; i < callback_ret.len; ++i) {
                QString callback_ret_arr_i_QString = QString::fromUtf8(callback_ret_arr[i].data, callback_ret_arr[i].len);
                callback_ret_QList.push_back(callback_ret_arr_i_QString);
            }
            return callback_ret_QList;
        } else {
            return QsciAPIs::callTips(context, commas, style, shifts);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* e) override {
        if (qsciapis_event_isbase) {
            qsciapis_event_isbase = false;
            return QsciAPIs::event(e);
        } else if (qsciapis_event_callback != nullptr) {
            QEvent* cbval1 = e;

            bool callback_ret = qsciapis_event_callback(this, cbval1);
            return callback_ret;
        } else {
            return QsciAPIs::event(e);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* watched, QEvent* event) override {
        if (qsciapis_eventfilter_isbase) {
            qsciapis_eventfilter_isbase = false;
            return QsciAPIs::eventFilter(watched, event);
        } else if (qsciapis_eventfilter_callback != nullptr) {
            QObject* cbval1 = watched;
            QEvent* cbval2 = event;

            bool callback_ret = qsciapis_eventfilter_callback(this, cbval1, cbval2);
            return callback_ret;
        } else {
            return QsciAPIs::eventFilter(watched, event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (qsciapis_timerevent_isbase) {
            qsciapis_timerevent_isbase = false;
            QsciAPIs::timerEvent(event);
        } else if (qsciapis_timerevent_callback != nullptr) {
            QTimerEvent* cbval1 = event;

            qsciapis_timerevent_callback(this, cbval1);
        } else {
            QsciAPIs::timerEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (qsciapis_childevent_isbase) {
            qsciapis_childevent_isbase = false;
            QsciAPIs::childEvent(event);
        } else if (qsciapis_childevent_callback != nullptr) {
            QChildEvent* cbval1 = event;

            qsciapis_childevent_callback(this, cbval1);
        } else {
            QsciAPIs::childEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (qsciapis_customevent_isbase) {
            qsciapis_customevent_isbase = false;
            QsciAPIs::customEvent(event);
        } else if (qsciapis_customevent_callback != nullptr) {
            QEvent* cbval1 = event;

            qsciapis_customevent_callback(this, cbval1);
        } else {
            QsciAPIs::customEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (qsciapis_connectnotify_isbase) {
            qsciapis_connectnotify_isbase = false;
            QsciAPIs::connectNotify(signal);
        } else if (qsciapis_connectnotify_callback != nullptr) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            qsciapis_connectnotify_callback(this, cbval1);
        } else {
            QsciAPIs::connectNotify(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (qsciapis_disconnectnotify_isbase) {
            qsciapis_disconnectnotify_isbase = false;
            QsciAPIs::disconnectNotify(signal);
        } else if (qsciapis_disconnectnotify_callback != nullptr) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            qsciapis_disconnectnotify_callback(this, cbval1);
        } else {
            QsciAPIs::disconnectNotify(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    QObject* sender() const {
        if (qsciapis_sender_isbase) {
            qsciapis_sender_isbase = false;
            return QsciAPIs::sender();
        } else if (qsciapis_sender_callback != nullptr) {
            QObject* callback_ret = qsciapis_sender_callback();
            return callback_ret;
        } else {
            return QsciAPIs::sender();
        }
    }

    // Virtual method for C ABI access and custom callback
    int senderSignalIndex() const {
        if (qsciapis_sendersignalindex_isbase) {
            qsciapis_sendersignalindex_isbase = false;
            return QsciAPIs::senderSignalIndex();
        } else if (qsciapis_sendersignalindex_callback != nullptr) {
            int callback_ret = qsciapis_sendersignalindex_callback();
            return static_cast<int>(callback_ret);
        } else {
            return QsciAPIs::senderSignalIndex();
        }
    }

    // Virtual method for C ABI access and custom callback
    int receivers(const char* signal) const {
        if (qsciapis_receivers_isbase) {
            qsciapis_receivers_isbase = false;
            return QsciAPIs::receivers(signal);
        } else if (qsciapis_receivers_callback != nullptr) {
            const char* cbval1 = (const char*)signal;

            int callback_ret = qsciapis_receivers_callback(this, cbval1);
            return static_cast<int>(callback_ret);
        } else {
            return QsciAPIs::receivers(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    bool isSignalConnected(const QMetaMethod& signal) const {
        if (qsciapis_issignalconnected_isbase) {
            qsciapis_issignalconnected_isbase = false;
            return QsciAPIs::isSignalConnected(signal);
        } else if (qsciapis_issignalconnected_callback != nullptr) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            bool callback_ret = qsciapis_issignalconnected_callback(this, cbval1);
            return callback_ret;
        } else {
            return QsciAPIs::isSignalConnected(signal);
        }
    }

    // Friend functions
    friend void QsciAPIs_TimerEvent(QsciAPIs* self, QTimerEvent* event);
    friend void QsciAPIs_QBaseTimerEvent(QsciAPIs* self, QTimerEvent* event);
    friend void QsciAPIs_ChildEvent(QsciAPIs* self, QChildEvent* event);
    friend void QsciAPIs_QBaseChildEvent(QsciAPIs* self, QChildEvent* event);
    friend void QsciAPIs_CustomEvent(QsciAPIs* self, QEvent* event);
    friend void QsciAPIs_QBaseCustomEvent(QsciAPIs* self, QEvent* event);
    friend void QsciAPIs_ConnectNotify(QsciAPIs* self, const QMetaMethod* signal);
    friend void QsciAPIs_QBaseConnectNotify(QsciAPIs* self, const QMetaMethod* signal);
    friend void QsciAPIs_DisconnectNotify(QsciAPIs* self, const QMetaMethod* signal);
    friend void QsciAPIs_QBaseDisconnectNotify(QsciAPIs* self, const QMetaMethod* signal);
    friend QObject* QsciAPIs_Sender(const QsciAPIs* self);
    friend QObject* QsciAPIs_QBaseSender(const QsciAPIs* self);
    friend int QsciAPIs_SenderSignalIndex(const QsciAPIs* self);
    friend int QsciAPIs_QBaseSenderSignalIndex(const QsciAPIs* self);
    friend int QsciAPIs_Receivers(const QsciAPIs* self, const char* signal);
    friend int QsciAPIs_QBaseReceivers(const QsciAPIs* self, const char* signal);
    friend bool QsciAPIs_IsSignalConnected(const QsciAPIs* self, const QMetaMethod* signal);
    friend bool QsciAPIs_QBaseIsSignalConnected(const QsciAPIs* self, const QMetaMethod* signal);
};

#endif
