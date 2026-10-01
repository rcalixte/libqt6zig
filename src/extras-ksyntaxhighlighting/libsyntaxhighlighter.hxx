#pragma once
#ifndef EXTRAS_KSYNTAXHIGHLIGHTING_LIBSYNTAXHIGHLIGHTER_HXX
#define EXTRAS_KSYNTAXHIGHLIGHTING_LIBSYNTAXHIGHLIGHTER_HXX

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

// This class is a subclass of KSyntaxHighlighting::SyntaxHighlighter
class VirtualKSyntaxHighlightingSyntaxHighlighter final : public KSyntaxHighlighting::SyntaxHighlighter {
  public:
    // Virtual class public types (including callbacks and access types)
    using KSyntaxHighlighting__SyntaxHighlighter_MetaObject_Callback = QMetaObject* (*)(const KSyntaxHighlighting__SyntaxHighlighter*);
    using KSyntaxHighlighting__SyntaxHighlighter_Metacast_Callback = void* (*)(KSyntaxHighlighting__SyntaxHighlighter*, const char*);
    using KSyntaxHighlighting__SyntaxHighlighter_Metacall_Callback = int (*)(KSyntaxHighlighting__SyntaxHighlighter*, int, int, void**);
    using KSyntaxHighlighting__SyntaxHighlighter_SetDefinition_Callback = void (*)(KSyntaxHighlighting__SyntaxHighlighter*, KSyntaxHighlighting__Definition*);
    using KSyntaxHighlighting__SyntaxHighlighter_SetTheme_Callback = void (*)(KSyntaxHighlighting__SyntaxHighlighter*, KSyntaxHighlighting__Theme*);
    using KSyntaxHighlighting__SyntaxHighlighter_HighlightBlock_Callback = void (*)(KSyntaxHighlighting__SyntaxHighlighter*, const char*);
    using KSyntaxHighlighting__SyntaxHighlighter_ApplyFormat_Callback = void (*)(KSyntaxHighlighting__SyntaxHighlighter*, int, int, KSyntaxHighlighting__Format*);
    using KSyntaxHighlighting__SyntaxHighlighter_ApplyFolding_Callback = void (*)(KSyntaxHighlighting__SyntaxHighlighter*, int, int, KSyntaxHighlighting__FoldingRegion*);
    using KSyntaxHighlighting__SyntaxHighlighter_Event_Callback = bool (*)(KSyntaxHighlighting__SyntaxHighlighter*, QEvent*);
    using KSyntaxHighlighting__SyntaxHighlighter_EventFilter_Callback = bool (*)(KSyntaxHighlighting__SyntaxHighlighter*, QObject*, QEvent*);
    using KSyntaxHighlighting__SyntaxHighlighter_TimerEvent_Callback = void (*)(KSyntaxHighlighting__SyntaxHighlighter*, QTimerEvent*);
    using KSyntaxHighlighting__SyntaxHighlighter_ChildEvent_Callback = void (*)(KSyntaxHighlighting__SyntaxHighlighter*, QChildEvent*);
    using KSyntaxHighlighting__SyntaxHighlighter_CustomEvent_Callback = void (*)(KSyntaxHighlighting__SyntaxHighlighter*, QEvent*);
    using KSyntaxHighlighting__SyntaxHighlighter_ConnectNotify_Callback = void (*)(KSyntaxHighlighting__SyntaxHighlighter*, QMetaMethod*);
    using KSyntaxHighlighting__SyntaxHighlighter_DisconnectNotify_Callback = void (*)(KSyntaxHighlighting__SyntaxHighlighter*, QMetaMethod*);
    using KSyntaxHighlighting::SyntaxHighlighter::currentBlock;
    using KSyntaxHighlighting::SyntaxHighlighter::currentBlockState;
    using KSyntaxHighlighting::SyntaxHighlighter::currentBlockUserData;
    using KSyntaxHighlighting::SyntaxHighlighter::format;
    using KSyntaxHighlighting::SyntaxHighlighter::highlightLine;
    using KSyntaxHighlighting::SyntaxHighlighter::isSignalConnected;
    using KSyntaxHighlighting::SyntaxHighlighter::previousBlockState;
    using KSyntaxHighlighting::SyntaxHighlighter::receivers;
    using KSyntaxHighlighting::SyntaxHighlighter::sender;
    using KSyntaxHighlighting::SyntaxHighlighter::senderSignalIndex;
    using KSyntaxHighlighting::SyntaxHighlighter::setCurrentBlockState;
    using KSyntaxHighlighting::SyntaxHighlighter::setCurrentBlockUserData;
    using KSyntaxHighlighting::SyntaxHighlighter::setFormat;

    // Instance callback storage
    KSyntaxHighlighting__SyntaxHighlighter_MetaObject_Callback ksyntaxhighlighting__syntaxhighlighter_metaobject_callback = nullptr;
    KSyntaxHighlighting__SyntaxHighlighter_Metacast_Callback ksyntaxhighlighting__syntaxhighlighter_metacast_callback = nullptr;
    KSyntaxHighlighting__SyntaxHighlighter_Metacall_Callback ksyntaxhighlighting__syntaxhighlighter_metacall_callback = nullptr;
    KSyntaxHighlighting__SyntaxHighlighter_SetDefinition_Callback ksyntaxhighlighting__syntaxhighlighter_setdefinition_callback = nullptr;
    KSyntaxHighlighting__SyntaxHighlighter_SetTheme_Callback ksyntaxhighlighting__syntaxhighlighter_settheme_callback = nullptr;
    KSyntaxHighlighting__SyntaxHighlighter_HighlightBlock_Callback ksyntaxhighlighting__syntaxhighlighter_highlightblock_callback = nullptr;
    KSyntaxHighlighting__SyntaxHighlighter_ApplyFormat_Callback ksyntaxhighlighting__syntaxhighlighter_applyformat_callback = nullptr;
    KSyntaxHighlighting__SyntaxHighlighter_ApplyFolding_Callback ksyntaxhighlighting__syntaxhighlighter_applyfolding_callback = nullptr;
    KSyntaxHighlighting__SyntaxHighlighter_Event_Callback ksyntaxhighlighting__syntaxhighlighter_event_callback = nullptr;
    KSyntaxHighlighting__SyntaxHighlighter_EventFilter_Callback ksyntaxhighlighting__syntaxhighlighter_eventfilter_callback = nullptr;
    KSyntaxHighlighting__SyntaxHighlighter_TimerEvent_Callback ksyntaxhighlighting__syntaxhighlighter_timerevent_callback = nullptr;
    KSyntaxHighlighting__SyntaxHighlighter_ChildEvent_Callback ksyntaxhighlighting__syntaxhighlighter_childevent_callback = nullptr;
    KSyntaxHighlighting__SyntaxHighlighter_CustomEvent_Callback ksyntaxhighlighting__syntaxhighlighter_customevent_callback = nullptr;
    KSyntaxHighlighting__SyntaxHighlighter_ConnectNotify_Callback ksyntaxhighlighting__syntaxhighlighter_connectnotify_callback = nullptr;
    KSyntaxHighlighting__SyntaxHighlighter_DisconnectNotify_Callback ksyntaxhighlighting__syntaxhighlighter_disconnectnotify_callback = nullptr;

    // Access struct
    struct Base : KSyntaxHighlighting::SyntaxHighlighter {
        using KSyntaxHighlighting::SyntaxHighlighter::applyFolding;
        using KSyntaxHighlighting::SyntaxHighlighter::applyFormat;
        using KSyntaxHighlighting::SyntaxHighlighter::childEvent;
        using KSyntaxHighlighting::SyntaxHighlighter::connectNotify;
        using KSyntaxHighlighting::SyntaxHighlighter::customEvent;
        using KSyntaxHighlighting::SyntaxHighlighter::disconnectNotify;
        using KSyntaxHighlighting::SyntaxHighlighter::highlightBlock;
        using KSyntaxHighlighting::SyntaxHighlighter::timerEvent;
    };

    VirtualKSyntaxHighlightingSyntaxHighlighter() : KSyntaxHighlighting::SyntaxHighlighter() {};
    VirtualKSyntaxHighlightingSyntaxHighlighter(QTextDocument* document) : KSyntaxHighlighting::SyntaxHighlighter(document) {};
    VirtualKSyntaxHighlightingSyntaxHighlighter(QObject* parent) : KSyntaxHighlighting::SyntaxHighlighter(parent) {};

    // Virtual method for C ABI access and custom callback
    virtual const QMetaObject* metaObject() const override {
        if (ksyntaxhighlighting__syntaxhighlighter_metaobject_callback) {
            QMetaObject* callback_ret = ksyntaxhighlighting__syntaxhighlighter_metaobject_callback(this);
            return callback_ret;
        }
        return KSyntaxHighlighting__SyntaxHighlighter::metaObject();
    }

    // Virtual method for C ABI access and custom callback
    virtual void* qt_metacast(const char* param1) override {
        if (ksyntaxhighlighting__syntaxhighlighter_metacast_callback) {
            const char* cbval1 = (const char*)param1;
            void* callback_ret = ksyntaxhighlighting__syntaxhighlighter_metacast_callback(this, cbval1);
            return callback_ret;
        }
        return KSyntaxHighlighting__SyntaxHighlighter::qt_metacast(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (ksyntaxhighlighting__syntaxhighlighter_metacall_callback) {
            int cbval1 = static_cast<int>(param1);
            int cbval2 = param2;
            void** cbval3 = param3;
            int callback_ret = ksyntaxhighlighting__syntaxhighlighter_metacall_callback(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        }
        return KSyntaxHighlighting__SyntaxHighlighter::qt_metacall(param1, param2, param3);
    }

    // Virtual method for C ABI access and custom callback
    virtual void setDefinition(const KSyntaxHighlighting::Definition& def) override {
        if (ksyntaxhighlighting__syntaxhighlighter_setdefinition_callback) {
            const KSyntaxHighlighting::Definition& def_ret = def;
            // Cast returned reference into pointer
            KSyntaxHighlighting__Definition* cbval1 = const_cast<KSyntaxHighlighting::Definition*>(&def_ret);
            ksyntaxhighlighting__syntaxhighlighter_setdefinition_callback(this, cbval1);
            return;
        }
        KSyntaxHighlighting__SyntaxHighlighter::setDefinition(def);
    }

    // Virtual method for C ABI access and custom callback
    virtual void setTheme(const KSyntaxHighlighting::Theme& theme) override {
        if (ksyntaxhighlighting__syntaxhighlighter_settheme_callback) {
            const KSyntaxHighlighting::Theme& theme_ret = theme;
            // Cast returned reference into pointer
            KSyntaxHighlighting__Theme* cbval1 = const_cast<KSyntaxHighlighting::Theme*>(&theme_ret);
            ksyntaxhighlighting__syntaxhighlighter_settheme_callback(this, cbval1);
            return;
        }
        KSyntaxHighlighting__SyntaxHighlighter::setTheme(theme);
    }

    // Virtual method for C ABI access and custom callback
    virtual void highlightBlock(const QString& text) override {
        if (ksyntaxhighlighting__syntaxhighlighter_highlightblock_callback) {
            const auto text_ret = text;
            // Convert QString from UTF-16 in C++ RAII memory to UTF-8 chars in manually-managed C memory
            QByteArray text_b = text_ret.toUtf8();
            auto text_str_len = text_b.length();
            const char* text_str = static_cast<const char*>(malloc(text_str_len + 1));
            memcpy((void*)text_str, text_b.data(), text_str_len);
            ((char*)text_str)[text_str_len] = '\0';
            const char* cbval1 = text_str;
            ksyntaxhighlighting__syntaxhighlighter_highlightblock_callback(this, cbval1);
            libqt_free(text_str);
            return;
        }
        KSyntaxHighlighting__SyntaxHighlighter::highlightBlock(text);
    }

    // Virtual method for C ABI access and custom callback
    virtual void applyFormat(int offset, int length, const KSyntaxHighlighting::Format& format) override {
        if (ksyntaxhighlighting__syntaxhighlighter_applyformat_callback) {
            int cbval1 = offset;
            int cbval2 = length;
            const KSyntaxHighlighting::Format& format_ret = format;
            // Cast returned reference into pointer
            KSyntaxHighlighting__Format* cbval3 = const_cast<KSyntaxHighlighting::Format*>(&format_ret);
            ksyntaxhighlighting__syntaxhighlighter_applyformat_callback(this, cbval1, cbval2, cbval3);
            return;
        }
        KSyntaxHighlighting__SyntaxHighlighter::applyFormat(offset, length, format);
    }

    // Virtual method for C ABI access and custom callback
    virtual void applyFolding(int offset, int length, KSyntaxHighlighting::FoldingRegion region) override {
        if (ksyntaxhighlighting__syntaxhighlighter_applyfolding_callback) {
            int cbval1 = offset;
            int cbval2 = length;
            KSyntaxHighlighting__FoldingRegion* cbval3 = new KSyntaxHighlighting::FoldingRegion(region);
            ksyntaxhighlighting__syntaxhighlighter_applyfolding_callback(this, cbval1, cbval2, cbval3);
            return;
        }
        KSyntaxHighlighting__SyntaxHighlighter::applyFolding(offset, length, region);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* event) override {
        if (ksyntaxhighlighting__syntaxhighlighter_event_callback) {
            QEvent* cbval1 = event;
            bool callback_ret = ksyntaxhighlighting__syntaxhighlighter_event_callback(this, cbval1);
            return callback_ret;
        }
        return KSyntaxHighlighting__SyntaxHighlighter::event(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* watched, QEvent* event) override {
        if (ksyntaxhighlighting__syntaxhighlighter_eventfilter_callback) {
            QObject* cbval1 = watched;
            QEvent* cbval2 = event;
            bool callback_ret = ksyntaxhighlighting__syntaxhighlighter_eventfilter_callback(this, cbval1, cbval2);
            return callback_ret;
        }
        return KSyntaxHighlighting__SyntaxHighlighter::eventFilter(watched, event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (ksyntaxhighlighting__syntaxhighlighter_timerevent_callback) {
            QTimerEvent* cbval1 = event;
            ksyntaxhighlighting__syntaxhighlighter_timerevent_callback(this, cbval1);
            return;
        }
        KSyntaxHighlighting__SyntaxHighlighter::timerEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (ksyntaxhighlighting__syntaxhighlighter_childevent_callback) {
            QChildEvent* cbval1 = event;
            ksyntaxhighlighting__syntaxhighlighter_childevent_callback(this, cbval1);
            return;
        }
        KSyntaxHighlighting__SyntaxHighlighter::childEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (ksyntaxhighlighting__syntaxhighlighter_customevent_callback) {
            QEvent* cbval1 = event;
            ksyntaxhighlighting__syntaxhighlighter_customevent_callback(this, cbval1);
            return;
        }
        KSyntaxHighlighting__SyntaxHighlighter::customEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (ksyntaxhighlighting__syntaxhighlighter_connectnotify_callback) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            ksyntaxhighlighting__syntaxhighlighter_connectnotify_callback(this, cbval1);
            return;
        }
        KSyntaxHighlighting__SyntaxHighlighter::connectNotify(signal);
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (ksyntaxhighlighting__syntaxhighlighter_disconnectnotify_callback) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            ksyntaxhighlighting__syntaxhighlighter_disconnectnotify_callback(this, cbval1);
            return;
        }
        KSyntaxHighlighting__SyntaxHighlighter::disconnectNotify(signal);
    }

    // Friend functions
    friend void KSyntaxHighlighting__SyntaxHighlighter_SuperHighlightBlock(KSyntaxHighlighting::SyntaxHighlighter* self, const libqt_string text);
    friend void KSyntaxHighlighting__SyntaxHighlighter_SuperApplyFormat(KSyntaxHighlighting::SyntaxHighlighter* self, int offset, int length, const KSyntaxHighlighting__Format* format);
    friend void KSyntaxHighlighting__SyntaxHighlighter_SuperApplyFolding(KSyntaxHighlighting::SyntaxHighlighter* self, int offset, int length, KSyntaxHighlighting__FoldingRegion* region);
    friend void KSyntaxHighlighting__SyntaxHighlighter_SuperTimerEvent(KSyntaxHighlighting::SyntaxHighlighter* self, QTimerEvent* event);
    friend void KSyntaxHighlighting__SyntaxHighlighter_SuperChildEvent(KSyntaxHighlighting::SyntaxHighlighter* self, QChildEvent* event);
    friend void KSyntaxHighlighting__SyntaxHighlighter_SuperCustomEvent(KSyntaxHighlighting::SyntaxHighlighter* self, QEvent* event);
    friend void KSyntaxHighlighting__SyntaxHighlighter_SuperConnectNotify(KSyntaxHighlighting::SyntaxHighlighter* self, const QMetaMethod* signal);
    friend void KSyntaxHighlighting__SyntaxHighlighter_SuperDisconnectNotify(KSyntaxHighlighting::SyntaxHighlighter* self, const QMetaMethod* signal);
};

#endif
