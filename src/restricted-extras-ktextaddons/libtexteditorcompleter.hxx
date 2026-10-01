#pragma once
#ifndef RESTRICTED_EXTRAS_KTEXTADDONS_LIBTEXTEDITORCOMPLETER_HXX
#define RESTRICTED_EXTRAS_KTEXTADDONS_LIBTEXTEDITORCOMPLETER_HXX

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

// This class is a subclass of TextCustomEditor::TextEditorCompleter
class VirtualTextCustomEditorTextEditorCompleter final : public TextCustomEditor::TextEditorCompleter {
  public:
    // Virtual class public types (including callbacks and access types)
    using TextCustomEditor__TextEditorCompleter_MetaObject_Callback = QMetaObject* (*)(const TextCustomEditor__TextEditorCompleter*);
    using TextCustomEditor__TextEditorCompleter_Metacast_Callback = void* (*)(TextCustomEditor__TextEditorCompleter*, const char*);
    using TextCustomEditor__TextEditorCompleter_Metacall_Callback = int (*)(TextCustomEditor__TextEditorCompleter*, int, int, void**);
    using TextCustomEditor__TextEditorCompleter_Event_Callback = bool (*)(TextCustomEditor__TextEditorCompleter*, QEvent*);
    using TextCustomEditor__TextEditorCompleter_EventFilter_Callback = bool (*)(TextCustomEditor__TextEditorCompleter*, QObject*, QEvent*);
    using TextCustomEditor__TextEditorCompleter_TimerEvent_Callback = void (*)(TextCustomEditor__TextEditorCompleter*, QTimerEvent*);
    using TextCustomEditor__TextEditorCompleter_ChildEvent_Callback = void (*)(TextCustomEditor__TextEditorCompleter*, QChildEvent*);
    using TextCustomEditor__TextEditorCompleter_CustomEvent_Callback = void (*)(TextCustomEditor__TextEditorCompleter*, QEvent*);
    using TextCustomEditor__TextEditorCompleter_ConnectNotify_Callback = void (*)(TextCustomEditor__TextEditorCompleter*, QMetaMethod*);
    using TextCustomEditor__TextEditorCompleter_DisconnectNotify_Callback = void (*)(TextCustomEditor__TextEditorCompleter*, QMetaMethod*);
    using TextCustomEditor::TextEditorCompleter::isSignalConnected;
    using TextCustomEditor::TextEditorCompleter::receivers;
    using TextCustomEditor::TextEditorCompleter::sender;
    using TextCustomEditor::TextEditorCompleter::senderSignalIndex;

    // Instance callback storage
    TextCustomEditor__TextEditorCompleter_MetaObject_Callback textcustomeditor__texteditorcompleter_metaobject_callback = nullptr;
    TextCustomEditor__TextEditorCompleter_Metacast_Callback textcustomeditor__texteditorcompleter_metacast_callback = nullptr;
    TextCustomEditor__TextEditorCompleter_Metacall_Callback textcustomeditor__texteditorcompleter_metacall_callback = nullptr;
    TextCustomEditor__TextEditorCompleter_Event_Callback textcustomeditor__texteditorcompleter_event_callback = nullptr;
    TextCustomEditor__TextEditorCompleter_EventFilter_Callback textcustomeditor__texteditorcompleter_eventfilter_callback = nullptr;
    TextCustomEditor__TextEditorCompleter_TimerEvent_Callback textcustomeditor__texteditorcompleter_timerevent_callback = nullptr;
    TextCustomEditor__TextEditorCompleter_ChildEvent_Callback textcustomeditor__texteditorcompleter_childevent_callback = nullptr;
    TextCustomEditor__TextEditorCompleter_CustomEvent_Callback textcustomeditor__texteditorcompleter_customevent_callback = nullptr;
    TextCustomEditor__TextEditorCompleter_ConnectNotify_Callback textcustomeditor__texteditorcompleter_connectnotify_callback = nullptr;
    TextCustomEditor__TextEditorCompleter_DisconnectNotify_Callback textcustomeditor__texteditorcompleter_disconnectnotify_callback = nullptr;

    // Access struct
    struct Base : TextCustomEditor::TextEditorCompleter {
        using TextCustomEditor::TextEditorCompleter::childEvent;
        using TextCustomEditor::TextEditorCompleter::connectNotify;
        using TextCustomEditor::TextEditorCompleter::customEvent;
        using TextCustomEditor::TextEditorCompleter::disconnectNotify;
        using TextCustomEditor::TextEditorCompleter::timerEvent;
    };

    VirtualTextCustomEditorTextEditorCompleter(QTextEdit* editor, QObject* parent) : TextCustomEditor::TextEditorCompleter(editor, parent) {};
    VirtualTextCustomEditorTextEditorCompleter(QPlainTextEdit* editor, QObject* parent) : TextCustomEditor::TextEditorCompleter(editor, parent) {};

    // Virtual method for C ABI access and custom callback
    virtual const QMetaObject* metaObject() const override {
        if (textcustomeditor__texteditorcompleter_metaobject_callback) {
            QMetaObject* callback_ret = textcustomeditor__texteditorcompleter_metaobject_callback(this);
            return callback_ret;
        }
        return TextCustomEditor__TextEditorCompleter::metaObject();
    }

    // Virtual method for C ABI access and custom callback
    virtual void* qt_metacast(const char* param1) override {
        if (textcustomeditor__texteditorcompleter_metacast_callback) {
            const char* cbval1 = (const char*)param1;
            void* callback_ret = textcustomeditor__texteditorcompleter_metacast_callback(this, cbval1);
            return callback_ret;
        }
        return TextCustomEditor__TextEditorCompleter::qt_metacast(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (textcustomeditor__texteditorcompleter_metacall_callback) {
            int cbval1 = static_cast<int>(param1);
            int cbval2 = param2;
            void** cbval3 = param3;
            int callback_ret = textcustomeditor__texteditorcompleter_metacall_callback(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        }
        return TextCustomEditor__TextEditorCompleter::qt_metacall(param1, param2, param3);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* event) override {
        if (textcustomeditor__texteditorcompleter_event_callback) {
            QEvent* cbval1 = event;
            bool callback_ret = textcustomeditor__texteditorcompleter_event_callback(this, cbval1);
            return callback_ret;
        }
        return TextCustomEditor__TextEditorCompleter::event(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* watched, QEvent* event) override {
        if (textcustomeditor__texteditorcompleter_eventfilter_callback) {
            QObject* cbval1 = watched;
            QEvent* cbval2 = event;
            bool callback_ret = textcustomeditor__texteditorcompleter_eventfilter_callback(this, cbval1, cbval2);
            return callback_ret;
        }
        return TextCustomEditor__TextEditorCompleter::eventFilter(watched, event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (textcustomeditor__texteditorcompleter_timerevent_callback) {
            QTimerEvent* cbval1 = event;
            textcustomeditor__texteditorcompleter_timerevent_callback(this, cbval1);
            return;
        }
        TextCustomEditor__TextEditorCompleter::timerEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (textcustomeditor__texteditorcompleter_childevent_callback) {
            QChildEvent* cbval1 = event;
            textcustomeditor__texteditorcompleter_childevent_callback(this, cbval1);
            return;
        }
        TextCustomEditor__TextEditorCompleter::childEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (textcustomeditor__texteditorcompleter_customevent_callback) {
            QEvent* cbval1 = event;
            textcustomeditor__texteditorcompleter_customevent_callback(this, cbval1);
            return;
        }
        TextCustomEditor__TextEditorCompleter::customEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (textcustomeditor__texteditorcompleter_connectnotify_callback) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            textcustomeditor__texteditorcompleter_connectnotify_callback(this, cbval1);
            return;
        }
        TextCustomEditor__TextEditorCompleter::connectNotify(signal);
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (textcustomeditor__texteditorcompleter_disconnectnotify_callback) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            textcustomeditor__texteditorcompleter_disconnectnotify_callback(this, cbval1);
            return;
        }
        TextCustomEditor__TextEditorCompleter::disconnectNotify(signal);
    }

    // Friend functions
    friend void TextCustomEditor__TextEditorCompleter_SuperTimerEvent(TextCustomEditor::TextEditorCompleter* self, QTimerEvent* event);
    friend void TextCustomEditor__TextEditorCompleter_SuperChildEvent(TextCustomEditor::TextEditorCompleter* self, QChildEvent* event);
    friend void TextCustomEditor__TextEditorCompleter_SuperCustomEvent(TextCustomEditor::TextEditorCompleter* self, QEvent* event);
    friend void TextCustomEditor__TextEditorCompleter_SuperConnectNotify(TextCustomEditor::TextEditorCompleter* self, const QMetaMethod* signal);
    friend void TextCustomEditor__TextEditorCompleter_SuperDisconnectNotify(TextCustomEditor::TextEditorCompleter* self, const QMetaMethod* signal);
};

#endif
