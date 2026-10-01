#pragma once
#ifndef EXTRAS_KTEXTEDITOR_LIBCOMMAND_HXX
#define EXTRAS_KTEXTEDITOR_LIBCOMMAND_HXX

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

// This class is a subclass of KTextEditor::Command
class VirtualKTextEditorCommand : public KTextEditor::Command {
  public:
    // Virtual class public types (including callbacks and access types)
    using KTextEditor__Command_MetaObject_Callback = QMetaObject* (*)(const KTextEditor__Command*);
    using KTextEditor__Command_Metacast_Callback = void* (*)(KTextEditor__Command*, const char*);
    using KTextEditor__Command_Metacall_Callback = int (*)(KTextEditor__Command*, int, int, void**);
    using KTextEditor__Command_SupportsRange_Callback = bool (*)(KTextEditor__Command*, const char*);
    using KTextEditor__Command_Exec_Callback = bool (*)(KTextEditor__Command*, KTextEditor__View*, const char*, const char*, KTextEditor__Range*);
    using KTextEditor__Command_Help_Callback = bool (*)(KTextEditor__Command*, KTextEditor__View*, const char*, const char*);
    using KTextEditor__Command_CompletionObject_Callback = KCompletion* (*)(KTextEditor__Command*, KTextEditor__View*, const char*);
    using KTextEditor__Command_WantsToProcessText_Callback = bool (*)(KTextEditor__Command*, const char*);
    using KTextEditor__Command_ProcessText_Callback = void (*)(KTextEditor__Command*, KTextEditor__View*, const char*);
    using KTextEditor__Command_Event_Callback = bool (*)(KTextEditor__Command*, QEvent*);
    using KTextEditor__Command_EventFilter_Callback = bool (*)(KTextEditor__Command*, QObject*, QEvent*);
    using KTextEditor__Command_TimerEvent_Callback = void (*)(KTextEditor__Command*, QTimerEvent*);
    using KTextEditor__Command_ChildEvent_Callback = void (*)(KTextEditor__Command*, QChildEvent*);
    using KTextEditor__Command_CustomEvent_Callback = void (*)(KTextEditor__Command*, QEvent*);
    using KTextEditor__Command_ConnectNotify_Callback = void (*)(KTextEditor__Command*, QMetaMethod*);
    using KTextEditor__Command_DisconnectNotify_Callback = void (*)(KTextEditor__Command*, QMetaMethod*);
    using KTextEditor::Command::isSignalConnected;
    using KTextEditor::Command::receivers;
    using KTextEditor::Command::sender;
    using KTextEditor::Command::senderSignalIndex;

    // Instance callback storage
    KTextEditor__Command_MetaObject_Callback ktexteditor__command_metaobject_callback = nullptr;
    KTextEditor__Command_Metacast_Callback ktexteditor__command_metacast_callback = nullptr;
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

    // Access struct
    struct Base : KTextEditor::Command {
        using KTextEditor::Command::childEvent;
        using KTextEditor::Command::connectNotify;
        using KTextEditor::Command::customEvent;
        using KTextEditor::Command::disconnectNotify;
        using KTextEditor::Command::timerEvent;
    };

    VirtualKTextEditorCommand(const QList<QString>& cmds) : KTextEditor::Command(cmds) {};
    VirtualKTextEditorCommand(const QList<QString>& cmds, QObject* parent) : KTextEditor::Command(cmds, parent) {};

    // Virtual method for C ABI access and custom callback
    virtual const QMetaObject* metaObject() const override {
        if (ktexteditor__command_metaobject_callback) {
            QMetaObject* callback_ret = ktexteditor__command_metaobject_callback(this);
            return callback_ret;
        }
        return KTextEditor__Command::metaObject();
    }

    // Virtual method for C ABI access and custom callback
    virtual void* qt_metacast(const char* param1) override {
        if (ktexteditor__command_metacast_callback) {
            const char* cbval1 = (const char*)param1;
            void* callback_ret = ktexteditor__command_metacast_callback(this, cbval1);
            return callback_ret;
        }
        return KTextEditor__Command::qt_metacast(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (ktexteditor__command_metacall_callback) {
            int cbval1 = static_cast<int>(param1);
            int cbval2 = param2;
            void** cbval3 = param3;
            int callback_ret = ktexteditor__command_metacall_callback(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        }
        return KTextEditor__Command::qt_metacall(param1, param2, param3);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool supportsRange(const QString& cmd) override {
        if (ktexteditor__command_supportsrange_callback) {
            const auto cmd_ret = cmd;
            // Convert QString from UTF-16 in C++ RAII memory to UTF-8 chars in manually-managed C memory
            QByteArray cmd_b = cmd_ret.toUtf8();
            auto cmd_str_len = cmd_b.length();
            const char* cmd_str = static_cast<const char*>(malloc(cmd_str_len + 1));
            memcpy((void*)cmd_str, cmd_b.data(), cmd_str_len);
            ((char*)cmd_str)[cmd_str_len] = '\0';
            const char* cbval1 = cmd_str;
            bool callback_ret = ktexteditor__command_supportsrange_callback(this, cbval1);
            libqt_free(cmd_str);
            return callback_ret;
        }
        return KTextEditor__Command::supportsRange(cmd);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool exec(KTextEditor::View* view, const QString& cmd, QString& msg, const KTextEditor::Range& range) override {
        if (ktexteditor__command_exec_callback) {
            KTextEditor__View* cbval1 = view;
            const auto cmd_ret = cmd;
            // Convert QString from UTF-16 in C++ RAII memory to UTF-8 chars in manually-managed C memory
            QByteArray cmd_b = cmd_ret.toUtf8();
            auto cmd_str_len = cmd_b.length();
            const char* cmd_str = static_cast<const char*>(malloc(cmd_str_len + 1));
            memcpy((void*)cmd_str, cmd_b.data(), cmd_str_len);
            ((char*)cmd_str)[cmd_str_len] = '\0';
            const char* cbval2 = cmd_str;
            auto msg_ret = msg;
            // Convert QString from UTF-16 in C++ RAII memory to UTF-8 chars in manually-managed C memory
            QByteArray msg_b = msg_ret.toUtf8();
            auto msg_str_len = msg_b.length();
            const char* msg_str = static_cast<const char*>(malloc(msg_str_len + 1));
            memcpy((void*)msg_str, msg_b.data(), msg_str_len);
            ((char*)msg_str)[msg_str_len] = '\0';
            const char* cbval3 = msg_str;
            const KTextEditor::Range& range_ret = range;
            // Cast returned reference into pointer
            KTextEditor__Range* cbval4 = const_cast<KTextEditor::Range*>(&range_ret);
            bool callback_ret = ktexteditor__command_exec_callback(this, cbval1, cbval2, cbval3, cbval4);
            libqt_free(cmd_str);
            libqt_free(msg_str);
            return callback_ret;
        }
        // Pure virtual method
        qFatal("Error: Pure virtual method KTextEditor::Command::exec called without being implemented");
    }

    // Virtual method for C ABI access and custom callback
    virtual bool help(KTextEditor::View* view, const QString& cmd, QString& msg) override {
        if (ktexteditor__command_help_callback) {
            KTextEditor__View* cbval1 = view;
            const auto cmd_ret = cmd;
            // Convert QString from UTF-16 in C++ RAII memory to UTF-8 chars in manually-managed C memory
            QByteArray cmd_b = cmd_ret.toUtf8();
            auto cmd_str_len = cmd_b.length();
            const char* cmd_str = static_cast<const char*>(malloc(cmd_str_len + 1));
            memcpy((void*)cmd_str, cmd_b.data(), cmd_str_len);
            ((char*)cmd_str)[cmd_str_len] = '\0';
            const char* cbval2 = cmd_str;
            auto msg_ret = msg;
            // Convert QString from UTF-16 in C++ RAII memory to UTF-8 chars in manually-managed C memory
            QByteArray msg_b = msg_ret.toUtf8();
            auto msg_str_len = msg_b.length();
            const char* msg_str = static_cast<const char*>(malloc(msg_str_len + 1));
            memcpy((void*)msg_str, msg_b.data(), msg_str_len);
            ((char*)msg_str)[msg_str_len] = '\0';
            const char* cbval3 = msg_str;
            bool callback_ret = ktexteditor__command_help_callback(this, cbval1, cbval2, cbval3);
            libqt_free(cmd_str);
            libqt_free(msg_str);
            return callback_ret;
        }
        // Pure virtual method
        qFatal("Error: Pure virtual method KTextEditor::Command::help called without being implemented");
    }

    // Virtual method for C ABI access and custom callback
    virtual KCompletion* completionObject(KTextEditor::View* view, const QString& cmdname) override {
        if (ktexteditor__command_completionobject_callback) {
            KTextEditor__View* cbval1 = view;
            const auto cmdname_ret = cmdname;
            // Convert QString from UTF-16 in C++ RAII memory to UTF-8 chars in manually-managed C memory
            QByteArray cmdname_b = cmdname_ret.toUtf8();
            auto cmdname_str_len = cmdname_b.length();
            const char* cmdname_str = static_cast<const char*>(malloc(cmdname_str_len + 1));
            memcpy((void*)cmdname_str, cmdname_b.data(), cmdname_str_len);
            ((char*)cmdname_str)[cmdname_str_len] = '\0';
            const char* cbval2 = cmdname_str;
            KCompletion* callback_ret = ktexteditor__command_completionobject_callback(this, cbval1, cbval2);
            libqt_free(cmdname_str);
            return callback_ret;
        }
        return KTextEditor__Command::completionObject(view, cmdname);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool wantsToProcessText(const QString& cmdname) override {
        if (ktexteditor__command_wantstoprocesstext_callback) {
            const auto cmdname_ret = cmdname;
            // Convert QString from UTF-16 in C++ RAII memory to UTF-8 chars in manually-managed C memory
            QByteArray cmdname_b = cmdname_ret.toUtf8();
            auto cmdname_str_len = cmdname_b.length();
            const char* cmdname_str = static_cast<const char*>(malloc(cmdname_str_len + 1));
            memcpy((void*)cmdname_str, cmdname_b.data(), cmdname_str_len);
            ((char*)cmdname_str)[cmdname_str_len] = '\0';
            const char* cbval1 = cmdname_str;
            bool callback_ret = ktexteditor__command_wantstoprocesstext_callback(this, cbval1);
            libqt_free(cmdname_str);
            return callback_ret;
        }
        return KTextEditor__Command::wantsToProcessText(cmdname);
    }

    // Virtual method for C ABI access and custom callback
    virtual void processText(KTextEditor::View* view, const QString& text) override {
        if (ktexteditor__command_processtext_callback) {
            KTextEditor__View* cbval1 = view;
            const auto text_ret = text;
            // Convert QString from UTF-16 in C++ RAII memory to UTF-8 chars in manually-managed C memory
            QByteArray text_b = text_ret.toUtf8();
            auto text_str_len = text_b.length();
            const char* text_str = static_cast<const char*>(malloc(text_str_len + 1));
            memcpy((void*)text_str, text_b.data(), text_str_len);
            ((char*)text_str)[text_str_len] = '\0';
            const char* cbval2 = text_str;
            ktexteditor__command_processtext_callback(this, cbval1, cbval2);
            libqt_free(text_str);
            return;
        }
        KTextEditor__Command::processText(view, text);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* event) override {
        if (ktexteditor__command_event_callback) {
            QEvent* cbval1 = event;
            bool callback_ret = ktexteditor__command_event_callback(this, cbval1);
            return callback_ret;
        }
        return KTextEditor__Command::event(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* watched, QEvent* event) override {
        if (ktexteditor__command_eventfilter_callback) {
            QObject* cbval1 = watched;
            QEvent* cbval2 = event;
            bool callback_ret = ktexteditor__command_eventfilter_callback(this, cbval1, cbval2);
            return callback_ret;
        }
        return KTextEditor__Command::eventFilter(watched, event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (ktexteditor__command_timerevent_callback) {
            QTimerEvent* cbval1 = event;
            ktexteditor__command_timerevent_callback(this, cbval1);
            return;
        }
        KTextEditor__Command::timerEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (ktexteditor__command_childevent_callback) {
            QChildEvent* cbval1 = event;
            ktexteditor__command_childevent_callback(this, cbval1);
            return;
        }
        KTextEditor__Command::childEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (ktexteditor__command_customevent_callback) {
            QEvent* cbval1 = event;
            ktexteditor__command_customevent_callback(this, cbval1);
            return;
        }
        KTextEditor__Command::customEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (ktexteditor__command_connectnotify_callback) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            ktexteditor__command_connectnotify_callback(this, cbval1);
            return;
        }
        KTextEditor__Command::connectNotify(signal);
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (ktexteditor__command_disconnectnotify_callback) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            ktexteditor__command_disconnectnotify_callback(this, cbval1);
            return;
        }
        KTextEditor__Command::disconnectNotify(signal);
    }

    // Friend functions
    friend void KTextEditor__Command_SuperTimerEvent(KTextEditor::Command* self, QTimerEvent* event);
    friend void KTextEditor__Command_SuperChildEvent(KTextEditor::Command* self, QChildEvent* event);
    friend void KTextEditor__Command_SuperCustomEvent(KTextEditor::Command* self, QEvent* event);
    friend void KTextEditor__Command_SuperConnectNotify(KTextEditor::Command* self, const QMetaMethod* signal);
    friend void KTextEditor__Command_SuperDisconnectNotify(KTextEditor::Command* self, const QMetaMethod* signal);
};

#endif
