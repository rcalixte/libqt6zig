#pragma once
#ifndef RESTRICTED_EXTRAS_KTEXTADDONS_LIBTRANSLATORMENU_HXX
#define RESTRICTED_EXTRAS_KTEXTADDONS_LIBTRANSLATORMENU_HXX

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

// This class is a subclass of TextTranslator::TranslatorMenu
class VirtualTextTranslatorTranslatorMenu final : public TextTranslator::TranslatorMenu {
  public:
    // Virtual class public types (including callbacks and access types)
    using TextTranslator__TranslatorMenu_MetaObject_Callback = QMetaObject* (*)(const TextTranslator__TranslatorMenu*);
    using TextTranslator__TranslatorMenu_Metacast_Callback = void* (*)(TextTranslator__TranslatorMenu*, const char*);
    using TextTranslator__TranslatorMenu_Metacall_Callback = int (*)(TextTranslator__TranslatorMenu*, int, int, void**);
    using TextTranslator__TranslatorMenu_Event_Callback = bool (*)(TextTranslator__TranslatorMenu*, QEvent*);
    using TextTranslator__TranslatorMenu_EventFilter_Callback = bool (*)(TextTranslator__TranslatorMenu*, QObject*, QEvent*);
    using TextTranslator__TranslatorMenu_TimerEvent_Callback = void (*)(TextTranslator__TranslatorMenu*, QTimerEvent*);
    using TextTranslator__TranslatorMenu_ChildEvent_Callback = void (*)(TextTranslator__TranslatorMenu*, QChildEvent*);
    using TextTranslator__TranslatorMenu_CustomEvent_Callback = void (*)(TextTranslator__TranslatorMenu*, QEvent*);
    using TextTranslator__TranslatorMenu_ConnectNotify_Callback = void (*)(TextTranslator__TranslatorMenu*, QMetaMethod*);
    using TextTranslator__TranslatorMenu_DisconnectNotify_Callback = void (*)(TextTranslator__TranslatorMenu*, QMetaMethod*);
    using TextTranslator::TranslatorMenu::isSignalConnected;
    using TextTranslator::TranslatorMenu::receivers;
    using TextTranslator::TranslatorMenu::sender;
    using TextTranslator::TranslatorMenu::senderSignalIndex;

    // Instance callback storage
    TextTranslator__TranslatorMenu_MetaObject_Callback texttranslator__translatormenu_metaobject_callback = nullptr;
    TextTranslator__TranslatorMenu_Metacast_Callback texttranslator__translatormenu_metacast_callback = nullptr;
    TextTranslator__TranslatorMenu_Metacall_Callback texttranslator__translatormenu_metacall_callback = nullptr;
    TextTranslator__TranslatorMenu_Event_Callback texttranslator__translatormenu_event_callback = nullptr;
    TextTranslator__TranslatorMenu_EventFilter_Callback texttranslator__translatormenu_eventfilter_callback = nullptr;
    TextTranslator__TranslatorMenu_TimerEvent_Callback texttranslator__translatormenu_timerevent_callback = nullptr;
    TextTranslator__TranslatorMenu_ChildEvent_Callback texttranslator__translatormenu_childevent_callback = nullptr;
    TextTranslator__TranslatorMenu_CustomEvent_Callback texttranslator__translatormenu_customevent_callback = nullptr;
    TextTranslator__TranslatorMenu_ConnectNotify_Callback texttranslator__translatormenu_connectnotify_callback = nullptr;
    TextTranslator__TranslatorMenu_DisconnectNotify_Callback texttranslator__translatormenu_disconnectnotify_callback = nullptr;

    // Access struct
    struct Base : TextTranslator::TranslatorMenu {
        using TextTranslator::TranslatorMenu::childEvent;
        using TextTranslator::TranslatorMenu::connectNotify;
        using TextTranslator::TranslatorMenu::customEvent;
        using TextTranslator::TranslatorMenu::disconnectNotify;
        using TextTranslator::TranslatorMenu::timerEvent;
    };

    VirtualTextTranslatorTranslatorMenu() : TextTranslator::TranslatorMenu() {};
    VirtualTextTranslatorTranslatorMenu(QObject* parent) : TextTranslator::TranslatorMenu(parent) {};

    // Virtual method for C ABI access and custom callback
    virtual const QMetaObject* metaObject() const override {
        if (texttranslator__translatormenu_metaobject_callback) {
            QMetaObject* callback_ret = texttranslator__translatormenu_metaobject_callback(this);
            return callback_ret;
        }
        return TextTranslator__TranslatorMenu::metaObject();
    }

    // Virtual method for C ABI access and custom callback
    virtual void* qt_metacast(const char* param1) override {
        if (texttranslator__translatormenu_metacast_callback) {
            const char* cbval1 = (const char*)param1;
            void* callback_ret = texttranslator__translatormenu_metacast_callback(this, cbval1);
            return callback_ret;
        }
        return TextTranslator__TranslatorMenu::qt_metacast(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (texttranslator__translatormenu_metacall_callback) {
            int cbval1 = static_cast<int>(param1);
            int cbval2 = param2;
            void** cbval3 = param3;
            int callback_ret = texttranslator__translatormenu_metacall_callback(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        }
        return TextTranslator__TranslatorMenu::qt_metacall(param1, param2, param3);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* event) override {
        if (texttranslator__translatormenu_event_callback) {
            QEvent* cbval1 = event;
            bool callback_ret = texttranslator__translatormenu_event_callback(this, cbval1);
            return callback_ret;
        }
        return TextTranslator__TranslatorMenu::event(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* watched, QEvent* event) override {
        if (texttranslator__translatormenu_eventfilter_callback) {
            QObject* cbval1 = watched;
            QEvent* cbval2 = event;
            bool callback_ret = texttranslator__translatormenu_eventfilter_callback(this, cbval1, cbval2);
            return callback_ret;
        }
        return TextTranslator__TranslatorMenu::eventFilter(watched, event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (texttranslator__translatormenu_timerevent_callback) {
            QTimerEvent* cbval1 = event;
            texttranslator__translatormenu_timerevent_callback(this, cbval1);
            return;
        }
        TextTranslator__TranslatorMenu::timerEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (texttranslator__translatormenu_childevent_callback) {
            QChildEvent* cbval1 = event;
            texttranslator__translatormenu_childevent_callback(this, cbval1);
            return;
        }
        TextTranslator__TranslatorMenu::childEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (texttranslator__translatormenu_customevent_callback) {
            QEvent* cbval1 = event;
            texttranslator__translatormenu_customevent_callback(this, cbval1);
            return;
        }
        TextTranslator__TranslatorMenu::customEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (texttranslator__translatormenu_connectnotify_callback) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            texttranslator__translatormenu_connectnotify_callback(this, cbval1);
            return;
        }
        TextTranslator__TranslatorMenu::connectNotify(signal);
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (texttranslator__translatormenu_disconnectnotify_callback) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            texttranslator__translatormenu_disconnectnotify_callback(this, cbval1);
            return;
        }
        TextTranslator__TranslatorMenu::disconnectNotify(signal);
    }

    // Friend functions
    friend void TextTranslator__TranslatorMenu_SuperTimerEvent(TextTranslator::TranslatorMenu* self, QTimerEvent* event);
    friend void TextTranslator__TranslatorMenu_SuperChildEvent(TextTranslator::TranslatorMenu* self, QChildEvent* event);
    friend void TextTranslator__TranslatorMenu_SuperCustomEvent(TextTranslator::TranslatorMenu* self, QEvent* event);
    friend void TextTranslator__TranslatorMenu_SuperConnectNotify(TextTranslator::TranslatorMenu* self, const QMetaMethod* signal);
    friend void TextTranslator__TranslatorMenu_SuperDisconnectNotify(TextTranslator::TranslatorMenu* self, const QMetaMethod* signal);
};

#endif
