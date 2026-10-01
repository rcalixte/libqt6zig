#pragma once
#ifndef RESTRICTED_EXTRAS_KTEXTADDONS_LIBPLAINTEXTSYNTAXSPELLCHECKINGHIGHLIGHTER_HXX
#define RESTRICTED_EXTRAS_KTEXTADDONS_LIBPLAINTEXTSYNTAXSPELLCHECKINGHIGHLIGHTER_HXX

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

// This class is a subclass of TextCustomEditor::PlainTextSyntaxSpellCheckingHighlighter
class VirtualTextCustomEditorPlainTextSyntaxSpellCheckingHighlighter final : public TextCustomEditor::PlainTextSyntaxSpellCheckingHighlighter {
  public:
    // Virtual class public types (including callbacks and access types)
    using TextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter_SetDefinition_Callback = void (*)(TextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter*, KSyntaxHighlighting__Definition*);
    using TextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter_HighlightBlock_Callback = void (*)(TextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter*, const char*);
    using TextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter_UnsetMisspelled_Callback = void (*)(TextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter*, int, int);
    using TextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter_SetMisspelled_Callback = void (*)(TextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter*, int, int);
    using TextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter_ApplyFormat_Callback = void (*)(TextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter*, int, int, KSyntaxHighlighting__Format*);
    using TextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter_MetaObject_Callback = QMetaObject* (*)(const TextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter*);
    using TextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter_Metacast_Callback = void* (*)(TextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter*, const char*);
    using TextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter_Metacall_Callback = int (*)(TextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter*, int, int, void**);
    using TextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter_EventFilter_Callback = bool (*)(TextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter*, QObject*, QEvent*);
    using TextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter_Event_Callback = bool (*)(TextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter*, QEvent*);
    using TextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter_TimerEvent_Callback = void (*)(TextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter*, QTimerEvent*);
    using TextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter_ChildEvent_Callback = void (*)(TextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter*, QChildEvent*);
    using TextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter_CustomEvent_Callback = void (*)(TextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter*, QEvent*);
    using TextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter_ConnectNotify_Callback = void (*)(TextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter*, QMetaMethod*);
    using TextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter_DisconnectNotify_Callback = void (*)(TextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter*, QMetaMethod*);
    using TextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter_SetTheme_Callback = void (*)(TextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter*, KSyntaxHighlighting__Theme*);
    using TextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter_ApplyFolding_Callback = void (*)(TextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter*, int, int, KSyntaxHighlighting__FoldingRegion*);
    using TextCustomEditor::PlainTextSyntaxSpellCheckingHighlighter::currentBlock;
    using TextCustomEditor::PlainTextSyntaxSpellCheckingHighlighter::currentBlockState;
    using TextCustomEditor::PlainTextSyntaxSpellCheckingHighlighter::currentBlockUserData;
    using TextCustomEditor::PlainTextSyntaxSpellCheckingHighlighter::format;
    using TextCustomEditor::PlainTextSyntaxSpellCheckingHighlighter::highlightLine;
    using TextCustomEditor::PlainTextSyntaxSpellCheckingHighlighter::intraWordEditing;
    using TextCustomEditor::PlainTextSyntaxSpellCheckingHighlighter::isSignalConnected;
    using TextCustomEditor::PlainTextSyntaxSpellCheckingHighlighter::previousBlockState;
    using TextCustomEditor::PlainTextSyntaxSpellCheckingHighlighter::receivers;
    using TextCustomEditor::PlainTextSyntaxSpellCheckingHighlighter::sender;
    using TextCustomEditor::PlainTextSyntaxSpellCheckingHighlighter::senderSignalIndex;
    using TextCustomEditor::PlainTextSyntaxSpellCheckingHighlighter::setCurrentBlockState;
    using TextCustomEditor::PlainTextSyntaxSpellCheckingHighlighter::setCurrentBlockUserData;
    using TextCustomEditor::PlainTextSyntaxSpellCheckingHighlighter::setFormat;
    using TextCustomEditor::PlainTextSyntaxSpellCheckingHighlighter::setIntraWordEditing;

    // Instance callback storage
    TextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter_SetDefinition_Callback textcustomeditor__plaintextsyntaxspellcheckinghighlighter_setdefinition_callback = nullptr;
    TextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter_HighlightBlock_Callback textcustomeditor__plaintextsyntaxspellcheckinghighlighter_highlightblock_callback = nullptr;
    TextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter_UnsetMisspelled_Callback textcustomeditor__plaintextsyntaxspellcheckinghighlighter_unsetmisspelled_callback = nullptr;
    TextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter_SetMisspelled_Callback textcustomeditor__plaintextsyntaxspellcheckinghighlighter_setmisspelled_callback = nullptr;
    TextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter_ApplyFormat_Callback textcustomeditor__plaintextsyntaxspellcheckinghighlighter_applyformat_callback = nullptr;
    TextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter_MetaObject_Callback textcustomeditor__plaintextsyntaxspellcheckinghighlighter_metaobject_callback = nullptr;
    TextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter_Metacast_Callback textcustomeditor__plaintextsyntaxspellcheckinghighlighter_metacast_callback = nullptr;
    TextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter_Metacall_Callback textcustomeditor__plaintextsyntaxspellcheckinghighlighter_metacall_callback = nullptr;
    TextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter_EventFilter_Callback textcustomeditor__plaintextsyntaxspellcheckinghighlighter_eventfilter_callback = nullptr;
    TextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter_Event_Callback textcustomeditor__plaintextsyntaxspellcheckinghighlighter_event_callback = nullptr;
    TextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter_TimerEvent_Callback textcustomeditor__plaintextsyntaxspellcheckinghighlighter_timerevent_callback = nullptr;
    TextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter_ChildEvent_Callback textcustomeditor__plaintextsyntaxspellcheckinghighlighter_childevent_callback = nullptr;
    TextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter_CustomEvent_Callback textcustomeditor__plaintextsyntaxspellcheckinghighlighter_customevent_callback = nullptr;
    TextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter_ConnectNotify_Callback textcustomeditor__plaintextsyntaxspellcheckinghighlighter_connectnotify_callback = nullptr;
    TextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter_DisconnectNotify_Callback textcustomeditor__plaintextsyntaxspellcheckinghighlighter_disconnectnotify_callback = nullptr;
    TextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter_SetTheme_Callback textcustomeditor__plaintextsyntaxspellcheckinghighlighter_settheme_callback = nullptr;
    TextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter_ApplyFolding_Callback textcustomeditor__plaintextsyntaxspellcheckinghighlighter_applyfolding_callback = nullptr;

    // Access struct
    struct Base : TextCustomEditor::PlainTextSyntaxSpellCheckingHighlighter {
        using TextCustomEditor::PlainTextSyntaxSpellCheckingHighlighter::applyFolding;
        using TextCustomEditor::PlainTextSyntaxSpellCheckingHighlighter::applyFormat;
        using TextCustomEditor::PlainTextSyntaxSpellCheckingHighlighter::childEvent;
        using TextCustomEditor::PlainTextSyntaxSpellCheckingHighlighter::connectNotify;
        using TextCustomEditor::PlainTextSyntaxSpellCheckingHighlighter::customEvent;
        using TextCustomEditor::PlainTextSyntaxSpellCheckingHighlighter::disconnectNotify;
        using TextCustomEditor::PlainTextSyntaxSpellCheckingHighlighter::eventFilter;
        using TextCustomEditor::PlainTextSyntaxSpellCheckingHighlighter::setMisspelled;
        using TextCustomEditor::PlainTextSyntaxSpellCheckingHighlighter::timerEvent;
        using TextCustomEditor::PlainTextSyntaxSpellCheckingHighlighter::unsetMisspelled;
    };

    VirtualTextCustomEditorPlainTextSyntaxSpellCheckingHighlighter(TextCustomEditor::PlainTextEditor* plainText) : TextCustomEditor::PlainTextSyntaxSpellCheckingHighlighter(plainText) {};
    VirtualTextCustomEditorPlainTextSyntaxSpellCheckingHighlighter(TextCustomEditor::PlainTextEditor* plainText, const QColor& misspelledColor) : TextCustomEditor::PlainTextSyntaxSpellCheckingHighlighter(plainText, misspelledColor) {};

    // Virtual method for C ABI access and custom callback
    virtual void setDefinition(const KSyntaxHighlighting::Definition& def) override {
        if (textcustomeditor__plaintextsyntaxspellcheckinghighlighter_setdefinition_callback) {
            const KSyntaxHighlighting::Definition& def_ret = def;
            // Cast returned reference into pointer
            KSyntaxHighlighting__Definition* cbval1 = const_cast<KSyntaxHighlighting::Definition*>(&def_ret);
            textcustomeditor__plaintextsyntaxspellcheckinghighlighter_setdefinition_callback(this, cbval1);
            return;
        }
        TextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter::setDefinition(def);
    }

    // Virtual method for C ABI access and custom callback
    virtual void highlightBlock(const QString& text) override {
        if (textcustomeditor__plaintextsyntaxspellcheckinghighlighter_highlightblock_callback) {
            const auto text_ret = text;
            // Convert QString from UTF-16 in C++ RAII memory to UTF-8 chars in manually-managed C memory
            QByteArray text_b = text_ret.toUtf8();
            auto text_str_len = text_b.length();
            const char* text_str = static_cast<const char*>(malloc(text_str_len + 1));
            memcpy((void*)text_str, text_b.data(), text_str_len);
            ((char*)text_str)[text_str_len] = '\0';
            const char* cbval1 = text_str;
            textcustomeditor__plaintextsyntaxspellcheckinghighlighter_highlightblock_callback(this, cbval1);
            libqt_free(text_str);
            return;
        }
        TextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter::highlightBlock(text);
    }

    // Virtual method for C ABI access and custom callback
    virtual void unsetMisspelled(int start, int count) override {
        if (textcustomeditor__plaintextsyntaxspellcheckinghighlighter_unsetmisspelled_callback) {
            int cbval1 = start;
            int cbval2 = count;
            textcustomeditor__plaintextsyntaxspellcheckinghighlighter_unsetmisspelled_callback(this, cbval1, cbval2);
            return;
        }
        TextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter::unsetMisspelled(start, count);
    }

    // Virtual method for C ABI access and custom callback
    virtual void setMisspelled(int start, int count) override {
        if (textcustomeditor__plaintextsyntaxspellcheckinghighlighter_setmisspelled_callback) {
            int cbval1 = start;
            int cbval2 = count;
            textcustomeditor__plaintextsyntaxspellcheckinghighlighter_setmisspelled_callback(this, cbval1, cbval2);
            return;
        }
        TextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter::setMisspelled(start, count);
    }

    // Virtual method for C ABI access and custom callback
    virtual void applyFormat(int offset, int length, const KSyntaxHighlighting::Format& format) override {
        if (textcustomeditor__plaintextsyntaxspellcheckinghighlighter_applyformat_callback) {
            int cbval1 = offset;
            int cbval2 = length;
            const KSyntaxHighlighting::Format& format_ret = format;
            // Cast returned reference into pointer
            KSyntaxHighlighting__Format* cbval3 = const_cast<KSyntaxHighlighting::Format*>(&format_ret);
            textcustomeditor__plaintextsyntaxspellcheckinghighlighter_applyformat_callback(this, cbval1, cbval2, cbval3);
            return;
        }
        TextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter::applyFormat(offset, length, format);
    }

    // Virtual method for C ABI access and custom callback
    virtual const QMetaObject* metaObject() const override {
        if (textcustomeditor__plaintextsyntaxspellcheckinghighlighter_metaobject_callback) {
            QMetaObject* callback_ret = textcustomeditor__plaintextsyntaxspellcheckinghighlighter_metaobject_callback(this);
            return callback_ret;
        }
        return TextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter::metaObject();
    }

    // Virtual method for C ABI access and custom callback
    virtual void* qt_metacast(const char* param1) override {
        if (textcustomeditor__plaintextsyntaxspellcheckinghighlighter_metacast_callback) {
            const char* cbval1 = (const char*)param1;
            void* callback_ret = textcustomeditor__plaintextsyntaxspellcheckinghighlighter_metacast_callback(this, cbval1);
            return callback_ret;
        }
        return TextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter::qt_metacast(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (textcustomeditor__plaintextsyntaxspellcheckinghighlighter_metacall_callback) {
            int cbval1 = static_cast<int>(param1);
            int cbval2 = param2;
            void** cbval3 = param3;
            int callback_ret = textcustomeditor__plaintextsyntaxspellcheckinghighlighter_metacall_callback(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        }
        return TextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter::qt_metacall(param1, param2, param3);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* o, QEvent* e) override {
        if (textcustomeditor__plaintextsyntaxspellcheckinghighlighter_eventfilter_callback) {
            QObject* cbval1 = o;
            QEvent* cbval2 = e;
            bool callback_ret = textcustomeditor__plaintextsyntaxspellcheckinghighlighter_eventfilter_callback(this, cbval1, cbval2);
            return callback_ret;
        }
        return TextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter::eventFilter(o, e);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* event) override {
        if (textcustomeditor__plaintextsyntaxspellcheckinghighlighter_event_callback) {
            QEvent* cbval1 = event;
            bool callback_ret = textcustomeditor__plaintextsyntaxspellcheckinghighlighter_event_callback(this, cbval1);
            return callback_ret;
        }
        return TextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter::event(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (textcustomeditor__plaintextsyntaxspellcheckinghighlighter_timerevent_callback) {
            QTimerEvent* cbval1 = event;
            textcustomeditor__plaintextsyntaxspellcheckinghighlighter_timerevent_callback(this, cbval1);
            return;
        }
        TextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter::timerEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (textcustomeditor__plaintextsyntaxspellcheckinghighlighter_childevent_callback) {
            QChildEvent* cbval1 = event;
            textcustomeditor__plaintextsyntaxspellcheckinghighlighter_childevent_callback(this, cbval1);
            return;
        }
        TextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter::childEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (textcustomeditor__plaintextsyntaxspellcheckinghighlighter_customevent_callback) {
            QEvent* cbval1 = event;
            textcustomeditor__plaintextsyntaxspellcheckinghighlighter_customevent_callback(this, cbval1);
            return;
        }
        TextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter::customEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (textcustomeditor__plaintextsyntaxspellcheckinghighlighter_connectnotify_callback) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            textcustomeditor__plaintextsyntaxspellcheckinghighlighter_connectnotify_callback(this, cbval1);
            return;
        }
        TextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter::connectNotify(signal);
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (textcustomeditor__plaintextsyntaxspellcheckinghighlighter_disconnectnotify_callback) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            textcustomeditor__plaintextsyntaxspellcheckinghighlighter_disconnectnotify_callback(this, cbval1);
            return;
        }
        TextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter::disconnectNotify(signal);
    }

    // Virtual method for C ABI access and custom callback
    virtual void setTheme(const KSyntaxHighlighting::Theme& theme) override {
        if (textcustomeditor__plaintextsyntaxspellcheckinghighlighter_settheme_callback) {
            const KSyntaxHighlighting::Theme& theme_ret = theme;
            // Cast returned reference into pointer
            KSyntaxHighlighting__Theme* cbval1 = const_cast<KSyntaxHighlighting::Theme*>(&theme_ret);
            textcustomeditor__plaintextsyntaxspellcheckinghighlighter_settheme_callback(this, cbval1);
            return;
        }
        TextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter::setTheme(theme);
    }

    // Virtual method for C ABI access and custom callback
    virtual void applyFolding(int offset, int length, KSyntaxHighlighting::FoldingRegion region) override {
        if (textcustomeditor__plaintextsyntaxspellcheckinghighlighter_applyfolding_callback) {
            int cbval1 = offset;
            int cbval2 = length;
            KSyntaxHighlighting__FoldingRegion* cbval3 = new KSyntaxHighlighting::FoldingRegion(region);
            textcustomeditor__plaintextsyntaxspellcheckinghighlighter_applyfolding_callback(this, cbval1, cbval2, cbval3);
            return;
        }
        TextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter::applyFolding(offset, length, region);
    }

    // Friend functions
    friend void TextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter_SuperUnsetMisspelled(TextCustomEditor::PlainTextSyntaxSpellCheckingHighlighter* self, int start, int count);
    friend void TextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter_SuperSetMisspelled(TextCustomEditor::PlainTextSyntaxSpellCheckingHighlighter* self, int start, int count);
    friend void TextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter_SuperApplyFormat(TextCustomEditor::PlainTextSyntaxSpellCheckingHighlighter* self, int offset, int length, const KSyntaxHighlighting__Format* format);
    friend bool TextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter_SuperEventFilter(TextCustomEditor::PlainTextSyntaxSpellCheckingHighlighter* self, QObject* o, QEvent* e);
    friend void TextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter_SuperTimerEvent(TextCustomEditor::PlainTextSyntaxSpellCheckingHighlighter* self, QTimerEvent* event);
    friend void TextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter_SuperChildEvent(TextCustomEditor::PlainTextSyntaxSpellCheckingHighlighter* self, QChildEvent* event);
    friend void TextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter_SuperCustomEvent(TextCustomEditor::PlainTextSyntaxSpellCheckingHighlighter* self, QEvent* event);
    friend void TextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter_SuperConnectNotify(TextCustomEditor::PlainTextSyntaxSpellCheckingHighlighter* self, const QMetaMethod* signal);
    friend void TextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter_SuperDisconnectNotify(TextCustomEditor::PlainTextSyntaxSpellCheckingHighlighter* self, const QMetaMethod* signal);
    friend void TextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter_SuperApplyFolding(TextCustomEditor::PlainTextSyntaxSpellCheckingHighlighter* self, int offset, int length, KSyntaxHighlighting__FoldingRegion* region);
};

#endif
