#pragma once
#ifndef EXTRAS_SONNET_LIBHIGHLIGHTER_HXX
#define EXTRAS_SONNET_LIBHIGHLIGHTER_HXX

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

// This class is a subclass of Sonnet::Highlighter
class VirtualSonnetHighlighter final : public Sonnet::Highlighter {
  public:
    // Virtual class public types (including callbacks and access types)
    using Sonnet__Highlighter_MetaObject_Callback = QMetaObject* (*)(const Sonnet__Highlighter*);
    using Sonnet__Highlighter_Metacast_Callback = void* (*)(Sonnet__Highlighter*, const char*);
    using Sonnet__Highlighter_Metacall_Callback = int (*)(Sonnet__Highlighter*, int, int, void**);
    using Sonnet__Highlighter_HighlightBlock_Callback = void (*)(Sonnet__Highlighter*, const char*);
    using Sonnet__Highlighter_SetMisspelled_Callback = void (*)(Sonnet__Highlighter*, int, int);
    using Sonnet__Highlighter_UnsetMisspelled_Callback = void (*)(Sonnet__Highlighter*, int, int);
    using Sonnet__Highlighter_EventFilter_Callback = bool (*)(Sonnet__Highlighter*, QObject*, QEvent*);
    using Sonnet__Highlighter_Event_Callback = bool (*)(Sonnet__Highlighter*, QEvent*);
    using Sonnet__Highlighter_TimerEvent_Callback = void (*)(Sonnet__Highlighter*, QTimerEvent*);
    using Sonnet__Highlighter_ChildEvent_Callback = void (*)(Sonnet__Highlighter*, QChildEvent*);
    using Sonnet__Highlighter_CustomEvent_Callback = void (*)(Sonnet__Highlighter*, QEvent*);
    using Sonnet__Highlighter_ConnectNotify_Callback = void (*)(Sonnet__Highlighter*, QMetaMethod*);
    using Sonnet__Highlighter_DisconnectNotify_Callback = void (*)(Sonnet__Highlighter*, QMetaMethod*);
    using Sonnet::Highlighter::currentBlock;
    using Sonnet::Highlighter::currentBlockState;
    using Sonnet::Highlighter::currentBlockUserData;
    using Sonnet::Highlighter::format;
    using Sonnet::Highlighter::intraWordEditing;
    using Sonnet::Highlighter::isSignalConnected;
    using Sonnet::Highlighter::previousBlockState;
    using Sonnet::Highlighter::receivers;
    using Sonnet::Highlighter::sender;
    using Sonnet::Highlighter::senderSignalIndex;
    using Sonnet::Highlighter::setCurrentBlockState;
    using Sonnet::Highlighter::setCurrentBlockUserData;
    using Sonnet::Highlighter::setFormat;
    using Sonnet::Highlighter::setIntraWordEditing;

    // Instance callback storage
    Sonnet__Highlighter_MetaObject_Callback sonnet__highlighter_metaobject_callback = nullptr;
    Sonnet__Highlighter_Metacast_Callback sonnet__highlighter_metacast_callback = nullptr;
    Sonnet__Highlighter_Metacall_Callback sonnet__highlighter_metacall_callback = nullptr;
    Sonnet__Highlighter_HighlightBlock_Callback sonnet__highlighter_highlightblock_callback = nullptr;
    Sonnet__Highlighter_SetMisspelled_Callback sonnet__highlighter_setmisspelled_callback = nullptr;
    Sonnet__Highlighter_UnsetMisspelled_Callback sonnet__highlighter_unsetmisspelled_callback = nullptr;
    Sonnet__Highlighter_EventFilter_Callback sonnet__highlighter_eventfilter_callback = nullptr;
    Sonnet__Highlighter_Event_Callback sonnet__highlighter_event_callback = nullptr;
    Sonnet__Highlighter_TimerEvent_Callback sonnet__highlighter_timerevent_callback = nullptr;
    Sonnet__Highlighter_ChildEvent_Callback sonnet__highlighter_childevent_callback = nullptr;
    Sonnet__Highlighter_CustomEvent_Callback sonnet__highlighter_customevent_callback = nullptr;
    Sonnet__Highlighter_ConnectNotify_Callback sonnet__highlighter_connectnotify_callback = nullptr;
    Sonnet__Highlighter_DisconnectNotify_Callback sonnet__highlighter_disconnectnotify_callback = nullptr;

    // Access struct
    struct Base : Sonnet::Highlighter {
        using Sonnet::Highlighter::childEvent;
        using Sonnet::Highlighter::connectNotify;
        using Sonnet::Highlighter::customEvent;
        using Sonnet::Highlighter::disconnectNotify;
        using Sonnet::Highlighter::eventFilter;
        using Sonnet::Highlighter::highlightBlock;
        using Sonnet::Highlighter::setMisspelled;
        using Sonnet::Highlighter::timerEvent;
        using Sonnet::Highlighter::unsetMisspelled;
    };

    VirtualSonnetHighlighter(QTextEdit* textEdit) : Sonnet::Highlighter(textEdit) {};
    VirtualSonnetHighlighter(QPlainTextEdit* textEdit) : Sonnet::Highlighter(textEdit) {};
    VirtualSonnetHighlighter(QTextEdit* textEdit, const QColor& col) : Sonnet::Highlighter(textEdit, col) {};
    VirtualSonnetHighlighter(QPlainTextEdit* textEdit, const QColor& col) : Sonnet::Highlighter(textEdit, col) {};

    // Virtual method for C ABI access and custom callback
    virtual const QMetaObject* metaObject() const override {
        if (sonnet__highlighter_metaobject_callback) {
            QMetaObject* callback_ret = sonnet__highlighter_metaobject_callback(this);
            return callback_ret;
        }
        return Sonnet__Highlighter::metaObject();
    }

    // Virtual method for C ABI access and custom callback
    virtual void* qt_metacast(const char* param1) override {
        if (sonnet__highlighter_metacast_callback) {
            const char* cbval1 = (const char*)param1;
            void* callback_ret = sonnet__highlighter_metacast_callback(this, cbval1);
            return callback_ret;
        }
        return Sonnet__Highlighter::qt_metacast(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (sonnet__highlighter_metacall_callback) {
            int cbval1 = static_cast<int>(param1);
            int cbval2 = param2;
            void** cbval3 = param3;
            int callback_ret = sonnet__highlighter_metacall_callback(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        }
        return Sonnet__Highlighter::qt_metacall(param1, param2, param3);
    }

    // Virtual method for C ABI access and custom callback
    virtual void highlightBlock(const QString& text) override {
        if (sonnet__highlighter_highlightblock_callback) {
            const auto text_ret = text;
            // Convert QString from UTF-16 in C++ RAII memory to UTF-8 chars in manually-managed C memory
            QByteArray text_b = text_ret.toUtf8();
            auto text_str_len = text_b.length();
            const char* text_str = static_cast<const char*>(malloc(text_str_len + 1));
            memcpy((void*)text_str, text_b.data(), text_str_len);
            ((char*)text_str)[text_str_len] = '\0';
            const char* cbval1 = text_str;
            sonnet__highlighter_highlightblock_callback(this, cbval1);
            libqt_free(text_str);
            return;
        }
        Sonnet__Highlighter::highlightBlock(text);
    }

    // Virtual method for C ABI access and custom callback
    virtual void setMisspelled(int start, int count) override {
        if (sonnet__highlighter_setmisspelled_callback) {
            int cbval1 = start;
            int cbval2 = count;
            sonnet__highlighter_setmisspelled_callback(this, cbval1, cbval2);
            return;
        }
        Sonnet__Highlighter::setMisspelled(start, count);
    }

    // Virtual method for C ABI access and custom callback
    virtual void unsetMisspelled(int start, int count) override {
        if (sonnet__highlighter_unsetmisspelled_callback) {
            int cbval1 = start;
            int cbval2 = count;
            sonnet__highlighter_unsetmisspelled_callback(this, cbval1, cbval2);
            return;
        }
        Sonnet__Highlighter::unsetMisspelled(start, count);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* o, QEvent* e) override {
        if (sonnet__highlighter_eventfilter_callback) {
            QObject* cbval1 = o;
            QEvent* cbval2 = e;
            bool callback_ret = sonnet__highlighter_eventfilter_callback(this, cbval1, cbval2);
            return callback_ret;
        }
        return Sonnet__Highlighter::eventFilter(o, e);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* event) override {
        if (sonnet__highlighter_event_callback) {
            QEvent* cbval1 = event;
            bool callback_ret = sonnet__highlighter_event_callback(this, cbval1);
            return callback_ret;
        }
        return Sonnet__Highlighter::event(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (sonnet__highlighter_timerevent_callback) {
            QTimerEvent* cbval1 = event;
            sonnet__highlighter_timerevent_callback(this, cbval1);
            return;
        }
        Sonnet__Highlighter::timerEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (sonnet__highlighter_childevent_callback) {
            QChildEvent* cbval1 = event;
            sonnet__highlighter_childevent_callback(this, cbval1);
            return;
        }
        Sonnet__Highlighter::childEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (sonnet__highlighter_customevent_callback) {
            QEvent* cbval1 = event;
            sonnet__highlighter_customevent_callback(this, cbval1);
            return;
        }
        Sonnet__Highlighter::customEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (sonnet__highlighter_connectnotify_callback) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            sonnet__highlighter_connectnotify_callback(this, cbval1);
            return;
        }
        Sonnet__Highlighter::connectNotify(signal);
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (sonnet__highlighter_disconnectnotify_callback) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            sonnet__highlighter_disconnectnotify_callback(this, cbval1);
            return;
        }
        Sonnet__Highlighter::disconnectNotify(signal);
    }

    // Friend functions
    friend void Sonnet__Highlighter_SuperHighlightBlock(Sonnet::Highlighter* self, const libqt_string text);
    friend void Sonnet__Highlighter_SuperSetMisspelled(Sonnet::Highlighter* self, int start, int count);
    friend void Sonnet__Highlighter_SuperUnsetMisspelled(Sonnet::Highlighter* self, int start, int count);
    friend bool Sonnet__Highlighter_SuperEventFilter(Sonnet::Highlighter* self, QObject* o, QEvent* e);
    friend void Sonnet__Highlighter_SuperTimerEvent(Sonnet::Highlighter* self, QTimerEvent* event);
    friend void Sonnet__Highlighter_SuperChildEvent(Sonnet::Highlighter* self, QChildEvent* event);
    friend void Sonnet__Highlighter_SuperCustomEvent(Sonnet::Highlighter* self, QEvent* event);
    friend void Sonnet__Highlighter_SuperConnectNotify(Sonnet::Highlighter* self, const QMetaMethod* signal);
    friend void Sonnet__Highlighter_SuperDisconnectNotify(Sonnet::Highlighter* self, const QMetaMethod* signal);
};

#endif
