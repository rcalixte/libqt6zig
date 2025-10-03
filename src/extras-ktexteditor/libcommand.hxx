#pragma once
#ifndef SRC_EXTRAS_KTEXTEDITORC_LIBVIRTUALCOMMAND_H
#define SRC_EXTRAS_KTEXTEDITORC_LIBVIRTUALCOMMAND_H

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

// This class is a subclass of KTextEditor::Command so that we can call protected methods
class VirtualKTextEditorCommand : public KTextEditor::Command {

  public:
    // Virtual class boolean flag
    bool isVirtualKTextEditorCommand = true;

    // Virtual class public types (including callbacks)
    using KTextEditor__Command_Metacall_Callback = int (*)(KTextEditor__Command*, int, int, void**);
    using KTextEditor__Command_SupportsRange_Callback = bool (*)(KTextEditor__Command*, libqt_string);
    using KTextEditor__Command_Exec_Callback = bool (*)(KTextEditor__Command*, KTextEditor__View*, libqt_string, libqt_string, KTextEditor__Range*);
    using KTextEditor__Command_Help_Callback = bool (*)(KTextEditor__Command*, KTextEditor__View*, libqt_string, libqt_string);
    using KTextEditor__Command_CompletionObject_Callback = KCompletion* (*)(KTextEditor__Command*, KTextEditor__View*, libqt_string);
    using KTextEditor__Command_WantsToProcessText_Callback = bool (*)(KTextEditor__Command*, libqt_string);
    using KTextEditor__Command_ProcessText_Callback = void (*)(KTextEditor__Command*, KTextEditor__View*, libqt_string);
    using KTextEditor__Command_Event_Callback = bool (*)(KTextEditor__Command*, QEvent*);
    using KTextEditor__Command_EventFilter_Callback = bool (*)(KTextEditor__Command*, QObject*, QEvent*);
    using KTextEditor__Command_TimerEvent_Callback = void (*)(KTextEditor__Command*, QTimerEvent*);
    using KTextEditor__Command_ChildEvent_Callback = void (*)(KTextEditor__Command*, QChildEvent*);
    using KTextEditor__Command_CustomEvent_Callback = void (*)(KTextEditor__Command*, QEvent*);
    using KTextEditor__Command_ConnectNotify_Callback = void (*)(KTextEditor__Command*, QMetaMethod*);
    using KTextEditor__Command_DisconnectNotify_Callback = void (*)(KTextEditor__Command*, QMetaMethod*);
    using KTextEditor__Command_Sender_Callback = QObject* (*)();
    using KTextEditor__Command_SenderSignalIndex_Callback = int (*)();
    using KTextEditor__Command_Receivers_Callback = int (*)(const KTextEditor__Command*, const char*);
    using KTextEditor__Command_IsSignalConnected_Callback = bool (*)(const KTextEditor__Command*, QMetaMethod*);

  protected:
    // Instance callback storage
    KTextEditor__Command_Metacall_Callback ktexteditor__command_metacall_callback = nullptr;
    KTextEditor__Command_SupportsRange_Callback ktexteditor__command_supportsrange_callback = nullptr;
    KTextEditor__Command_Exec_Callback ktexteditor__command_exec_callback = nullptr;
    KTextEditor__Command_Help_Callback ktexteditor__command_help_callback = nullptr;
    KTextEditor__Command_CompletionObject_Callback ktexteditor__command_completionobject_callback = nullptr;
    KTextEditor__Command_WantsToProcessText_Callback ktexteditor__command_wantstoprocesstext_callback = nullptr;
    KTextEditor__Command_ProcessText_Callback ktexteditor__command_processtext_callback = nullptr;
    KTextEditor__Command_Event_Callback ktexteditor__command_event_callback = nullptr;
    KTextEditor__Command_EventFilter_Callback ktexteditor__command_eventfilter_callback = nullptr;
    KTextEditor__Command_TimerEvent_Callback ktexteditor__command_timerevent_callback = nullptr;
    KTextEditor__Command_ChildEvent_Callback ktexteditor__command_childevent_callback = nullptr;
    KTextEditor__Command_CustomEvent_Callback ktexteditor__command_customevent_callback = nullptr;
    KTextEditor__Command_ConnectNotify_Callback ktexteditor__command_connectnotify_callback = nullptr;
    KTextEditor__Command_DisconnectNotify_Callback ktexteditor__command_disconnectnotify_callback = nullptr;
    KTextEditor__Command_Sender_Callback ktexteditor__command_sender_callback = nullptr;
    KTextEditor__Command_SenderSignalIndex_Callback ktexteditor__command_sendersignalindex_callback = nullptr;
    KTextEditor__Command_Receivers_Callback ktexteditor__command_receivers_callback = nullptr;
    KTextEditor__Command_IsSignalConnected_Callback ktexteditor__command_issignalconnected_callback = nullptr;

    // Instance base flags
    mutable bool ktexteditor__command_metacall_isbase = false;
    mutable bool ktexteditor__command_supportsrange_isbase = false;
    mutable bool ktexteditor__command_exec_isbase = false;
    mutable bool ktexteditor__command_help_isbase = false;
    mutable bool ktexteditor__command_completionobject_isbase = false;
    mutable bool ktexteditor__command_wantstoprocesstext_isbase = false;
    mutable bool ktexteditor__command_processtext_isbase = false;
    mutable bool ktexteditor__command_event_isbase = false;
    mutable bool ktexteditor__command_eventfilter_isbase = false;
    mutable bool ktexteditor__command_timerevent_isbase = false;
    mutable bool ktexteditor__command_childevent_isbase = false;
    mutable bool ktexteditor__command_customevent_isbase = false;
    mutable bool ktexteditor__command_connectnotify_isbase = false;
    mutable bool ktexteditor__command_disconnectnotify_isbase = false;
    mutable bool ktexteditor__command_sender_isbase = false;
    mutable bool ktexteditor__command_sendersignalindex_isbase = false;
    mutable bool ktexteditor__command_receivers_isbase = false;
    mutable bool ktexteditor__command_issignalconnected_isbase = false;

  public:
    VirtualKTextEditorCommand(const QList<QString>& cmds) : KTextEditor::Command(cmds) {};
    VirtualKTextEditorCommand(const QList<QString>& cmds, QObject* parent) : KTextEditor::Command(cmds, parent) {};

    ~VirtualKTextEditorCommand() {
        ktexteditor__command_metacall_callback = nullptr;
        ktexteditor__command_supportsrange_callback = nullptr;
        ktexteditor__command_exec_callback = nullptr;
        ktexteditor__command_help_callback = nullptr;
        ktexteditor__command_completionobject_callback = nullptr;
        ktexteditor__command_wantstoprocesstext_callback = nullptr;
        ktexteditor__command_processtext_callback = nullptr;
        ktexteditor__command_event_callback = nullptr;
        ktexteditor__command_eventfilter_callback = nullptr;
        ktexteditor__command_timerevent_callback = nullptr;
        ktexteditor__command_childevent_callback = nullptr;
        ktexteditor__command_customevent_callback = nullptr;
        ktexteditor__command_connectnotify_callback = nullptr;
        ktexteditor__command_disconnectnotify_callback = nullptr;
        ktexteditor__command_sender_callback = nullptr;
        ktexteditor__command_sendersignalindex_callback = nullptr;
        ktexteditor__command_receivers_callback = nullptr;
        ktexteditor__command_issignalconnected_callback = nullptr;
    }

    // Callback setters
    inline void setKTextEditor__Command_Metacall_Callback(KTextEditor__Command_Metacall_Callback cb) { ktexteditor__command_metacall_callback = cb; }
    inline void setKTextEditor__Command_SupportsRange_Callback(KTextEditor__Command_SupportsRange_Callback cb) { ktexteditor__command_supportsrange_callback = cb; }
    inline void setKTextEditor__Command_Exec_Callback(KTextEditor__Command_Exec_Callback cb) { ktexteditor__command_exec_callback = cb; }
    inline void setKTextEditor__Command_Help_Callback(KTextEditor__Command_Help_Callback cb) { ktexteditor__command_help_callback = cb; }
    inline void setKTextEditor__Command_CompletionObject_Callback(KTextEditor__Command_CompletionObject_Callback cb) { ktexteditor__command_completionobject_callback = cb; }
    inline void setKTextEditor__Command_WantsToProcessText_Callback(KTextEditor__Command_WantsToProcessText_Callback cb) { ktexteditor__command_wantstoprocesstext_callback = cb; }
    inline void setKTextEditor__Command_ProcessText_Callback(KTextEditor__Command_ProcessText_Callback cb) { ktexteditor__command_processtext_callback = cb; }
    inline void setKTextEditor__Command_Event_Callback(KTextEditor__Command_Event_Callback cb) { ktexteditor__command_event_callback = cb; }
    inline void setKTextEditor__Command_EventFilter_Callback(KTextEditor__Command_EventFilter_Callback cb) { ktexteditor__command_eventfilter_callback = cb; }
    inline void setKTextEditor__Command_TimerEvent_Callback(KTextEditor__Command_TimerEvent_Callback cb) { ktexteditor__command_timerevent_callback = cb; }
    inline void setKTextEditor__Command_ChildEvent_Callback(KTextEditor__Command_ChildEvent_Callback cb) { ktexteditor__command_childevent_callback = cb; }
    inline void setKTextEditor__Command_CustomEvent_Callback(KTextEditor__Command_CustomEvent_Callback cb) { ktexteditor__command_customevent_callback = cb; }
    inline void setKTextEditor__Command_ConnectNotify_Callback(KTextEditor__Command_ConnectNotify_Callback cb) { ktexteditor__command_connectnotify_callback = cb; }
    inline void setKTextEditor__Command_DisconnectNotify_Callback(KTextEditor__Command_DisconnectNotify_Callback cb) { ktexteditor__command_disconnectnotify_callback = cb; }
    inline void setKTextEditor__Command_Sender_Callback(KTextEditor__Command_Sender_Callback cb) { ktexteditor__command_sender_callback = cb; }
    inline void setKTextEditor__Command_SenderSignalIndex_Callback(KTextEditor__Command_SenderSignalIndex_Callback cb) { ktexteditor__command_sendersignalindex_callback = cb; }
    inline void setKTextEditor__Command_Receivers_Callback(KTextEditor__Command_Receivers_Callback cb) { ktexteditor__command_receivers_callback = cb; }
    inline void setKTextEditor__Command_IsSignalConnected_Callback(KTextEditor__Command_IsSignalConnected_Callback cb) { ktexteditor__command_issignalconnected_callback = cb; }

    // Base flag setters
    inline void setKTextEditor__Command_Metacall_IsBase(bool value) const { ktexteditor__command_metacall_isbase = value; }
    inline void setKTextEditor__Command_SupportsRange_IsBase(bool value) const { ktexteditor__command_supportsrange_isbase = value; }
    inline void setKTextEditor__Command_Exec_IsBase(bool value) const { ktexteditor__command_exec_isbase = value; }
    inline void setKTextEditor__Command_Help_IsBase(bool value) const { ktexteditor__command_help_isbase = value; }
    inline void setKTextEditor__Command_CompletionObject_IsBase(bool value) const { ktexteditor__command_completionobject_isbase = value; }
    inline void setKTextEditor__Command_WantsToProcessText_IsBase(bool value) const { ktexteditor__command_wantstoprocesstext_isbase = value; }
    inline void setKTextEditor__Command_ProcessText_IsBase(bool value) const { ktexteditor__command_processtext_isbase = value; }
    inline void setKTextEditor__Command_Event_IsBase(bool value) const { ktexteditor__command_event_isbase = value; }
    inline void setKTextEditor__Command_EventFilter_IsBase(bool value) const { ktexteditor__command_eventfilter_isbase = value; }
    inline void setKTextEditor__Command_TimerEvent_IsBase(bool value) const { ktexteditor__command_timerevent_isbase = value; }
    inline void setKTextEditor__Command_ChildEvent_IsBase(bool value) const { ktexteditor__command_childevent_isbase = value; }
    inline void setKTextEditor__Command_CustomEvent_IsBase(bool value) const { ktexteditor__command_customevent_isbase = value; }
    inline void setKTextEditor__Command_ConnectNotify_IsBase(bool value) const { ktexteditor__command_connectnotify_isbase = value; }
    inline void setKTextEditor__Command_DisconnectNotify_IsBase(bool value) const { ktexteditor__command_disconnectnotify_isbase = value; }
    inline void setKTextEditor__Command_Sender_IsBase(bool value) const { ktexteditor__command_sender_isbase = value; }
    inline void setKTextEditor__Command_SenderSignalIndex_IsBase(bool value) const { ktexteditor__command_sendersignalindex_isbase = value; }
    inline void setKTextEditor__Command_Receivers_IsBase(bool value) const { ktexteditor__command_receivers_isbase = value; }
    inline void setKTextEditor__Command_IsSignalConnected_IsBase(bool value) const { ktexteditor__command_issignalconnected_isbase = value; }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (ktexteditor__command_metacall_isbase) {
            ktexteditor__command_metacall_isbase = false;
            return KTextEditor__Command::qt_metacall(param1, param2, param3);
        } else if (ktexteditor__command_metacall_callback != nullptr) {
            int cbval1 = static_cast<int>(param1);
            int cbval2 = param2;
            void** cbval3 = param3;

            int callback_ret = ktexteditor__command_metacall_callback(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        } else {
            return KTextEditor__Command::qt_metacall(param1, param2, param3);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool supportsRange(const QString& cmd) override {
        if (ktexteditor__command_supportsrange_isbase) {
            ktexteditor__command_supportsrange_isbase = false;
            return KTextEditor__Command::supportsRange(cmd);
        } else if (ktexteditor__command_supportsrange_callback != nullptr) {
            const QString cmd_ret = cmd;
            // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
            QByteArray cmd_b = cmd_ret.toUtf8();
            libqt_string cmd_str;
            cmd_str.len = cmd_b.length();
            cmd_str.data = static_cast<const char*>(malloc(cmd_str.len + 1));
            memcpy((void*)cmd_str.data, cmd_b.data(), cmd_str.len);
            ((char*)cmd_str.data)[cmd_str.len] = '\0';
            libqt_string cbval1 = cmd_str;

            bool callback_ret = ktexteditor__command_supportsrange_callback(this, cbval1);
            return callback_ret;
        } else {
            return KTextEditor__Command::supportsRange(cmd);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool exec(KTextEditor::View* view, const QString& cmd, QString& msg, const KTextEditor::Range& range) override {
        if (ktexteditor__command_exec_callback != nullptr) {
            KTextEditor__View* cbval1 = view;
            const QString cmd_ret = cmd;
            // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
            QByteArray cmd_b = cmd_ret.toUtf8();
            libqt_string cmd_str;
            cmd_str.len = cmd_b.length();
            cmd_str.data = static_cast<const char*>(malloc(cmd_str.len + 1));
            memcpy((void*)cmd_str.data, cmd_b.data(), cmd_str.len);
            ((char*)cmd_str.data)[cmd_str.len] = '\0';
            libqt_string cbval2 = cmd_str;
            QString msg_ret = msg;
            // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
            QByteArray msg_b = msg_ret.toUtf8();
            libqt_string msg_str;
            msg_str.len = msg_b.length();
            msg_str.data = static_cast<const char*>(malloc(msg_str.len + 1));
            memcpy((void*)msg_str.data, msg_b.data(), msg_str.len);
            ((char*)msg_str.data)[msg_str.len] = '\0';
            libqt_string cbval3 = msg_str;
            const KTextEditor::Range& range_ret = range;
            // Cast returned reference into pointer
            KTextEditor__Range* cbval4 = const_cast<KTextEditor::Range*>(&range_ret);

            bool callback_ret = ktexteditor__command_exec_callback(this, cbval1, cbval2, cbval3, cbval4);
            return callback_ret;
        } else {
            return {};
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool help(KTextEditor::View* view, const QString& cmd, QString& msg) override {
        if (ktexteditor__command_help_callback != nullptr) {
            KTextEditor__View* cbval1 = view;
            const QString cmd_ret = cmd;
            // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
            QByteArray cmd_b = cmd_ret.toUtf8();
            libqt_string cmd_str;
            cmd_str.len = cmd_b.length();
            cmd_str.data = static_cast<const char*>(malloc(cmd_str.len + 1));
            memcpy((void*)cmd_str.data, cmd_b.data(), cmd_str.len);
            ((char*)cmd_str.data)[cmd_str.len] = '\0';
            libqt_string cbval2 = cmd_str;
            QString msg_ret = msg;
            // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
            QByteArray msg_b = msg_ret.toUtf8();
            libqt_string msg_str;
            msg_str.len = msg_b.length();
            msg_str.data = static_cast<const char*>(malloc(msg_str.len + 1));
            memcpy((void*)msg_str.data, msg_b.data(), msg_str.len);
            ((char*)msg_str.data)[msg_str.len] = '\0';
            libqt_string cbval3 = msg_str;

            bool callback_ret = ktexteditor__command_help_callback(this, cbval1, cbval2, cbval3);
            return callback_ret;
        } else {
            return {};
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual KCompletion* completionObject(KTextEditor::View* view, const QString& cmdname) override {
        if (ktexteditor__command_completionobject_isbase) {
            ktexteditor__command_completionobject_isbase = false;
            return KTextEditor__Command::completionObject(view, cmdname);
        } else if (ktexteditor__command_completionobject_callback != nullptr) {
            KTextEditor__View* cbval1 = view;
            const QString cmdname_ret = cmdname;
            // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
            QByteArray cmdname_b = cmdname_ret.toUtf8();
            libqt_string cmdname_str;
            cmdname_str.len = cmdname_b.length();
            cmdname_str.data = static_cast<const char*>(malloc(cmdname_str.len + 1));
            memcpy((void*)cmdname_str.data, cmdname_b.data(), cmdname_str.len);
            ((char*)cmdname_str.data)[cmdname_str.len] = '\0';
            libqt_string cbval2 = cmdname_str;

            KCompletion* callback_ret = ktexteditor__command_completionobject_callback(this, cbval1, cbval2);
            return callback_ret;
        } else {
            return KTextEditor__Command::completionObject(view, cmdname);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool wantsToProcessText(const QString& cmdname) override {
        if (ktexteditor__command_wantstoprocesstext_isbase) {
            ktexteditor__command_wantstoprocesstext_isbase = false;
            return KTextEditor__Command::wantsToProcessText(cmdname);
        } else if (ktexteditor__command_wantstoprocesstext_callback != nullptr) {
            const QString cmdname_ret = cmdname;
            // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
            QByteArray cmdname_b = cmdname_ret.toUtf8();
            libqt_string cmdname_str;
            cmdname_str.len = cmdname_b.length();
            cmdname_str.data = static_cast<const char*>(malloc(cmdname_str.len + 1));
            memcpy((void*)cmdname_str.data, cmdname_b.data(), cmdname_str.len);
            ((char*)cmdname_str.data)[cmdname_str.len] = '\0';
            libqt_string cbval1 = cmdname_str;

            bool callback_ret = ktexteditor__command_wantstoprocesstext_callback(this, cbval1);
            return callback_ret;
        } else {
            return KTextEditor__Command::wantsToProcessText(cmdname);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void processText(KTextEditor::View* view, const QString& text) override {
        if (ktexteditor__command_processtext_isbase) {
            ktexteditor__command_processtext_isbase = false;
            KTextEditor__Command::processText(view, text);
        } else if (ktexteditor__command_processtext_callback != nullptr) {
            KTextEditor__View* cbval1 = view;
            const QString text_ret = text;
            // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
            QByteArray text_b = text_ret.toUtf8();
            libqt_string text_str;
            text_str.len = text_b.length();
            text_str.data = static_cast<const char*>(malloc(text_str.len + 1));
            memcpy((void*)text_str.data, text_b.data(), text_str.len);
            ((char*)text_str.data)[text_str.len] = '\0';
            libqt_string cbval2 = text_str;

            ktexteditor__command_processtext_callback(this, cbval1, cbval2);
        } else {
            KTextEditor__Command::processText(view, text);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* event) override {
        if (ktexteditor__command_event_isbase) {
            ktexteditor__command_event_isbase = false;
            return KTextEditor__Command::event(event);
        } else if (ktexteditor__command_event_callback != nullptr) {
            QEvent* cbval1 = event;

            bool callback_ret = ktexteditor__command_event_callback(this, cbval1);
            return callback_ret;
        } else {
            return KTextEditor__Command::event(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* watched, QEvent* event) override {
        if (ktexteditor__command_eventfilter_isbase) {
            ktexteditor__command_eventfilter_isbase = false;
            return KTextEditor__Command::eventFilter(watched, event);
        } else if (ktexteditor__command_eventfilter_callback != nullptr) {
            QObject* cbval1 = watched;
            QEvent* cbval2 = event;

            bool callback_ret = ktexteditor__command_eventfilter_callback(this, cbval1, cbval2);
            return callback_ret;
        } else {
            return KTextEditor__Command::eventFilter(watched, event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (ktexteditor__command_timerevent_isbase) {
            ktexteditor__command_timerevent_isbase = false;
            KTextEditor__Command::timerEvent(event);
        } else if (ktexteditor__command_timerevent_callback != nullptr) {
            QTimerEvent* cbval1 = event;

            ktexteditor__command_timerevent_callback(this, cbval1);
        } else {
            KTextEditor__Command::timerEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (ktexteditor__command_childevent_isbase) {
            ktexteditor__command_childevent_isbase = false;
            KTextEditor__Command::childEvent(event);
        } else if (ktexteditor__command_childevent_callback != nullptr) {
            QChildEvent* cbval1 = event;

            ktexteditor__command_childevent_callback(this, cbval1);
        } else {
            KTextEditor__Command::childEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (ktexteditor__command_customevent_isbase) {
            ktexteditor__command_customevent_isbase = false;
            KTextEditor__Command::customEvent(event);
        } else if (ktexteditor__command_customevent_callback != nullptr) {
            QEvent* cbval1 = event;

            ktexteditor__command_customevent_callback(this, cbval1);
        } else {
            KTextEditor__Command::customEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (ktexteditor__command_connectnotify_isbase) {
            ktexteditor__command_connectnotify_isbase = false;
            KTextEditor__Command::connectNotify(signal);
        } else if (ktexteditor__command_connectnotify_callback != nullptr) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            ktexteditor__command_connectnotify_callback(this, cbval1);
        } else {
            KTextEditor__Command::connectNotify(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (ktexteditor__command_disconnectnotify_isbase) {
            ktexteditor__command_disconnectnotify_isbase = false;
            KTextEditor__Command::disconnectNotify(signal);
        } else if (ktexteditor__command_disconnectnotify_callback != nullptr) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            ktexteditor__command_disconnectnotify_callback(this, cbval1);
        } else {
            KTextEditor__Command::disconnectNotify(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    QObject* sender() const {
        if (ktexteditor__command_sender_isbase) {
            ktexteditor__command_sender_isbase = false;
            return KTextEditor__Command::sender();
        } else if (ktexteditor__command_sender_callback != nullptr) {
            QObject* callback_ret = ktexteditor__command_sender_callback();
            return callback_ret;
        } else {
            return KTextEditor__Command::sender();
        }
    }

    // Virtual method for C ABI access and custom callback
    int senderSignalIndex() const {
        if (ktexteditor__command_sendersignalindex_isbase) {
            ktexteditor__command_sendersignalindex_isbase = false;
            return KTextEditor__Command::senderSignalIndex();
        } else if (ktexteditor__command_sendersignalindex_callback != nullptr) {
            int callback_ret = ktexteditor__command_sendersignalindex_callback();
            return static_cast<int>(callback_ret);
        } else {
            return KTextEditor__Command::senderSignalIndex();
        }
    }

    // Virtual method for C ABI access and custom callback
    int receivers(const char* signal) const {
        if (ktexteditor__command_receivers_isbase) {
            ktexteditor__command_receivers_isbase = false;
            return KTextEditor__Command::receivers(signal);
        } else if (ktexteditor__command_receivers_callback != nullptr) {
            const char* cbval1 = (const char*)signal;

            int callback_ret = ktexteditor__command_receivers_callback(this, cbval1);
            return static_cast<int>(callback_ret);
        } else {
            return KTextEditor__Command::receivers(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    bool isSignalConnected(const QMetaMethod& signal) const {
        if (ktexteditor__command_issignalconnected_isbase) {
            ktexteditor__command_issignalconnected_isbase = false;
            return KTextEditor__Command::isSignalConnected(signal);
        } else if (ktexteditor__command_issignalconnected_callback != nullptr) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            bool callback_ret = ktexteditor__command_issignalconnected_callback(this, cbval1);
            return callback_ret;
        } else {
            return KTextEditor__Command::isSignalConnected(signal);
        }
    }

    // Friend functions
    friend void KTextEditor__Command_TimerEvent(KTextEditor::Command* self, QTimerEvent* event);
    friend void KTextEditor__Command_QBaseTimerEvent(KTextEditor::Command* self, QTimerEvent* event);
    friend void KTextEditor__Command_ChildEvent(KTextEditor::Command* self, QChildEvent* event);
    friend void KTextEditor__Command_QBaseChildEvent(KTextEditor::Command* self, QChildEvent* event);
    friend void KTextEditor__Command_CustomEvent(KTextEditor::Command* self, QEvent* event);
    friend void KTextEditor__Command_QBaseCustomEvent(KTextEditor::Command* self, QEvent* event);
    friend void KTextEditor__Command_ConnectNotify(KTextEditor::Command* self, const QMetaMethod* signal);
    friend void KTextEditor__Command_QBaseConnectNotify(KTextEditor::Command* self, const QMetaMethod* signal);
    friend void KTextEditor__Command_DisconnectNotify(KTextEditor::Command* self, const QMetaMethod* signal);
    friend void KTextEditor__Command_QBaseDisconnectNotify(KTextEditor::Command* self, const QMetaMethod* signal);
    friend QObject* KTextEditor__Command_Sender(const KTextEditor::Command* self);
    friend QObject* KTextEditor__Command_QBaseSender(const KTextEditor::Command* self);
    friend int KTextEditor__Command_SenderSignalIndex(const KTextEditor::Command* self);
    friend int KTextEditor__Command_QBaseSenderSignalIndex(const KTextEditor::Command* self);
    friend int KTextEditor__Command_Receivers(const KTextEditor::Command* self, const char* signal);
    friend int KTextEditor__Command_QBaseReceivers(const KTextEditor::Command* self, const char* signal);
    friend bool KTextEditor__Command_IsSignalConnected(const KTextEditor::Command* self, const QMetaMethod* signal);
    friend bool KTextEditor__Command_QBaseIsSignalConnected(const KTextEditor::Command* self, const QMetaMethod* signal);
};

#endif
