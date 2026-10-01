#pragma once
#ifndef EXTRAS_SONNET_LIBSPELLCHECKDECORATOR_HXX
#define EXTRAS_SONNET_LIBSPELLCHECKDECORATOR_HXX

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

// This class is a subclass of Sonnet::SpellCheckDecorator
class VirtualSonnetSpellCheckDecorator final : public Sonnet::SpellCheckDecorator {
  public:
    // Virtual class public types (including callbacks and access types)
    using Sonnet__SpellCheckDecorator_MetaObject_Callback = QMetaObject* (*)(const Sonnet__SpellCheckDecorator*);
    using Sonnet__SpellCheckDecorator_Metacast_Callback = void* (*)(Sonnet__SpellCheckDecorator*, const char*);
    using Sonnet__SpellCheckDecorator_Metacall_Callback = int (*)(Sonnet__SpellCheckDecorator*, int, int, void**);
    using Sonnet__SpellCheckDecorator_EventFilter_Callback = bool (*)(Sonnet__SpellCheckDecorator*, QObject*, QEvent*);
    using Sonnet__SpellCheckDecorator_IsSpellCheckingEnabledForBlock_Callback = bool (*)(const Sonnet__SpellCheckDecorator*, const char*);
    using Sonnet__SpellCheckDecorator_Event_Callback = bool (*)(Sonnet__SpellCheckDecorator*, QEvent*);
    using Sonnet__SpellCheckDecorator_TimerEvent_Callback = void (*)(Sonnet__SpellCheckDecorator*, QTimerEvent*);
    using Sonnet__SpellCheckDecorator_ChildEvent_Callback = void (*)(Sonnet__SpellCheckDecorator*, QChildEvent*);
    using Sonnet__SpellCheckDecorator_CustomEvent_Callback = void (*)(Sonnet__SpellCheckDecorator*, QEvent*);
    using Sonnet__SpellCheckDecorator_ConnectNotify_Callback = void (*)(Sonnet__SpellCheckDecorator*, QMetaMethod*);
    using Sonnet__SpellCheckDecorator_DisconnectNotify_Callback = void (*)(Sonnet__SpellCheckDecorator*, QMetaMethod*);
    using Sonnet::SpellCheckDecorator::isSignalConnected;
    using Sonnet::SpellCheckDecorator::receivers;
    using Sonnet::SpellCheckDecorator::sender;
    using Sonnet::SpellCheckDecorator::senderSignalIndex;

    // Instance callback storage
    Sonnet__SpellCheckDecorator_MetaObject_Callback sonnet__spellcheckdecorator_metaobject_callback = nullptr;
    Sonnet__SpellCheckDecorator_Metacast_Callback sonnet__spellcheckdecorator_metacast_callback = nullptr;
    Sonnet__SpellCheckDecorator_Metacall_Callback sonnet__spellcheckdecorator_metacall_callback = nullptr;
    Sonnet__SpellCheckDecorator_EventFilter_Callback sonnet__spellcheckdecorator_eventfilter_callback = nullptr;
    Sonnet__SpellCheckDecorator_IsSpellCheckingEnabledForBlock_Callback sonnet__spellcheckdecorator_isspellcheckingenabledforblock_callback = nullptr;
    Sonnet__SpellCheckDecorator_Event_Callback sonnet__spellcheckdecorator_event_callback = nullptr;
    Sonnet__SpellCheckDecorator_TimerEvent_Callback sonnet__spellcheckdecorator_timerevent_callback = nullptr;
    Sonnet__SpellCheckDecorator_ChildEvent_Callback sonnet__spellcheckdecorator_childevent_callback = nullptr;
    Sonnet__SpellCheckDecorator_CustomEvent_Callback sonnet__spellcheckdecorator_customevent_callback = nullptr;
    Sonnet__SpellCheckDecorator_ConnectNotify_Callback sonnet__spellcheckdecorator_connectnotify_callback = nullptr;
    Sonnet__SpellCheckDecorator_DisconnectNotify_Callback sonnet__spellcheckdecorator_disconnectnotify_callback = nullptr;

    // Access struct
    struct Base : Sonnet::SpellCheckDecorator {
        using Sonnet::SpellCheckDecorator::childEvent;
        using Sonnet::SpellCheckDecorator::connectNotify;
        using Sonnet::SpellCheckDecorator::customEvent;
        using Sonnet::SpellCheckDecorator::disconnectNotify;
        using Sonnet::SpellCheckDecorator::eventFilter;
        using Sonnet::SpellCheckDecorator::isSpellCheckingEnabledForBlock;
        using Sonnet::SpellCheckDecorator::timerEvent;
    };

    VirtualSonnetSpellCheckDecorator(QTextEdit* textEdit) : Sonnet::SpellCheckDecorator(textEdit) {};
    VirtualSonnetSpellCheckDecorator(QPlainTextEdit* textEdit) : Sonnet::SpellCheckDecorator(textEdit) {};

    // Virtual method for C ABI access and custom callback
    virtual const QMetaObject* metaObject() const override {
        if (sonnet__spellcheckdecorator_metaobject_callback) {
            QMetaObject* callback_ret = sonnet__spellcheckdecorator_metaobject_callback(this);
            return callback_ret;
        }
        return Sonnet__SpellCheckDecorator::metaObject();
    }

    // Virtual method for C ABI access and custom callback
    virtual void* qt_metacast(const char* param1) override {
        if (sonnet__spellcheckdecorator_metacast_callback) {
            const char* cbval1 = (const char*)param1;
            void* callback_ret = sonnet__spellcheckdecorator_metacast_callback(this, cbval1);
            return callback_ret;
        }
        return Sonnet__SpellCheckDecorator::qt_metacast(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (sonnet__spellcheckdecorator_metacall_callback) {
            int cbval1 = static_cast<int>(param1);
            int cbval2 = param2;
            void** cbval3 = param3;
            int callback_ret = sonnet__spellcheckdecorator_metacall_callback(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        }
        return Sonnet__SpellCheckDecorator::qt_metacall(param1, param2, param3);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* obj, QEvent* event) override {
        if (sonnet__spellcheckdecorator_eventfilter_callback) {
            QObject* cbval1 = obj;
            QEvent* cbval2 = event;
            bool callback_ret = sonnet__spellcheckdecorator_eventfilter_callback(this, cbval1, cbval2);
            return callback_ret;
        }
        return Sonnet__SpellCheckDecorator::eventFilter(obj, event);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool isSpellCheckingEnabledForBlock(const QString& textBlock) const override {
        if (sonnet__spellcheckdecorator_isspellcheckingenabledforblock_callback) {
            const auto textBlock_ret = textBlock;
            // Convert QString from UTF-16 in C++ RAII memory to UTF-8 chars in manually-managed C memory
            QByteArray textBlock_b = textBlock_ret.toUtf8();
            auto textBlock_str_len = textBlock_b.length();
            const char* textBlock_str = static_cast<const char*>(malloc(textBlock_str_len + 1));
            memcpy((void*)textBlock_str, textBlock_b.data(), textBlock_str_len);
            ((char*)textBlock_str)[textBlock_str_len] = '\0';
            const char* cbval1 = textBlock_str;
            bool callback_ret = sonnet__spellcheckdecorator_isspellcheckingenabledforblock_callback(this, cbval1);
            libqt_free(textBlock_str);
            return callback_ret;
        }
        return Sonnet__SpellCheckDecorator::isSpellCheckingEnabledForBlock(textBlock);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* event) override {
        if (sonnet__spellcheckdecorator_event_callback) {
            QEvent* cbval1 = event;
            bool callback_ret = sonnet__spellcheckdecorator_event_callback(this, cbval1);
            return callback_ret;
        }
        return Sonnet__SpellCheckDecorator::event(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (sonnet__spellcheckdecorator_timerevent_callback) {
            QTimerEvent* cbval1 = event;
            sonnet__spellcheckdecorator_timerevent_callback(this, cbval1);
            return;
        }
        Sonnet__SpellCheckDecorator::timerEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (sonnet__spellcheckdecorator_childevent_callback) {
            QChildEvent* cbval1 = event;
            sonnet__spellcheckdecorator_childevent_callback(this, cbval1);
            return;
        }
        Sonnet__SpellCheckDecorator::childEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (sonnet__spellcheckdecorator_customevent_callback) {
            QEvent* cbval1 = event;
            sonnet__spellcheckdecorator_customevent_callback(this, cbval1);
            return;
        }
        Sonnet__SpellCheckDecorator::customEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (sonnet__spellcheckdecorator_connectnotify_callback) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            sonnet__spellcheckdecorator_connectnotify_callback(this, cbval1);
            return;
        }
        Sonnet__SpellCheckDecorator::connectNotify(signal);
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (sonnet__spellcheckdecorator_disconnectnotify_callback) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            sonnet__spellcheckdecorator_disconnectnotify_callback(this, cbval1);
            return;
        }
        Sonnet__SpellCheckDecorator::disconnectNotify(signal);
    }

    // Friend functions
    friend bool Sonnet__SpellCheckDecorator_SuperEventFilter(Sonnet::SpellCheckDecorator* self, QObject* obj, QEvent* event);
    friend bool Sonnet__SpellCheckDecorator_SuperIsSpellCheckingEnabledForBlock(const Sonnet::SpellCheckDecorator* self, const libqt_string textBlock);
    friend void Sonnet__SpellCheckDecorator_SuperTimerEvent(Sonnet::SpellCheckDecorator* self, QTimerEvent* event);
    friend void Sonnet__SpellCheckDecorator_SuperChildEvent(Sonnet::SpellCheckDecorator* self, QChildEvent* event);
    friend void Sonnet__SpellCheckDecorator_SuperCustomEvent(Sonnet::SpellCheckDecorator* self, QEvent* event);
    friend void Sonnet__SpellCheckDecorator_SuperConnectNotify(Sonnet::SpellCheckDecorator* self, const QMetaMethod* signal);
    friend void Sonnet__SpellCheckDecorator_SuperDisconnectNotify(Sonnet::SpellCheckDecorator* self, const QMetaMethod* signal);
};

#endif
