#pragma once
#ifndef EXTRAS_KI18N_LIBKLOCALIZEDTRANSLATOR_HXX
#define EXTRAS_KI18N_LIBKLOCALIZEDTRANSLATOR_HXX

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

// This class is a subclass of KLocalizedTranslator
class VirtualKLocalizedTranslator final : public KLocalizedTranslator {
  public:
    // Virtual class public types (including callbacks and access types)
    using KLocalizedTranslator_MetaObject_Callback = QMetaObject* (*)(const KLocalizedTranslator*);
    using KLocalizedTranslator_Metacast_Callback = void* (*)(KLocalizedTranslator*, const char*);
    using KLocalizedTranslator_Metacall_Callback = int (*)(KLocalizedTranslator*, int, int, void**);
    using KLocalizedTranslator_Translate_Callback = const char* (*)(const KLocalizedTranslator*, const char*, const char*, const char*, int);
    using KLocalizedTranslator_IsEmpty_Callback = bool (*)(const KLocalizedTranslator*);
    using KLocalizedTranslator_Event_Callback = bool (*)(KLocalizedTranslator*, QEvent*);
    using KLocalizedTranslator_EventFilter_Callback = bool (*)(KLocalizedTranslator*, QObject*, QEvent*);
    using KLocalizedTranslator_TimerEvent_Callback = void (*)(KLocalizedTranslator*, QTimerEvent*);
    using KLocalizedTranslator_ChildEvent_Callback = void (*)(KLocalizedTranslator*, QChildEvent*);
    using KLocalizedTranslator_CustomEvent_Callback = void (*)(KLocalizedTranslator*, QEvent*);
    using KLocalizedTranslator_ConnectNotify_Callback = void (*)(KLocalizedTranslator*, QMetaMethod*);
    using KLocalizedTranslator_DisconnectNotify_Callback = void (*)(KLocalizedTranslator*, QMetaMethod*);
    using KLocalizedTranslator::isSignalConnected;
    using KLocalizedTranslator::receivers;
    using KLocalizedTranslator::sender;
    using KLocalizedTranslator::senderSignalIndex;

    // Instance callback storage
    KLocalizedTranslator_MetaObject_Callback klocalizedtranslator_metaobject_callback = nullptr;
    KLocalizedTranslator_Metacast_Callback klocalizedtranslator_metacast_callback = nullptr;
    KLocalizedTranslator_Metacall_Callback klocalizedtranslator_metacall_callback = nullptr;
    KLocalizedTranslator_Translate_Callback klocalizedtranslator_translate_callback = nullptr;
    KLocalizedTranslator_IsEmpty_Callback klocalizedtranslator_isempty_callback = nullptr;
    KLocalizedTranslator_Event_Callback klocalizedtranslator_event_callback = nullptr;
    KLocalizedTranslator_EventFilter_Callback klocalizedtranslator_eventfilter_callback = nullptr;
    KLocalizedTranslator_TimerEvent_Callback klocalizedtranslator_timerevent_callback = nullptr;
    KLocalizedTranslator_ChildEvent_Callback klocalizedtranslator_childevent_callback = nullptr;
    KLocalizedTranslator_CustomEvent_Callback klocalizedtranslator_customevent_callback = nullptr;
    KLocalizedTranslator_ConnectNotify_Callback klocalizedtranslator_connectnotify_callback = nullptr;
    KLocalizedTranslator_DisconnectNotify_Callback klocalizedtranslator_disconnectnotify_callback = nullptr;

    // Access struct
    struct Base : KLocalizedTranslator {
        using KLocalizedTranslator::childEvent;
        using KLocalizedTranslator::connectNotify;
        using KLocalizedTranslator::customEvent;
        using KLocalizedTranslator::disconnectNotify;
        using KLocalizedTranslator::timerEvent;
    };

    VirtualKLocalizedTranslator() : KLocalizedTranslator() {};
    VirtualKLocalizedTranslator(QObject* parent) : KLocalizedTranslator(parent) {};

    // Virtual method for C ABI access and custom callback
    virtual const QMetaObject* metaObject() const override {
        if (klocalizedtranslator_metaobject_callback) {
            QMetaObject* callback_ret = klocalizedtranslator_metaobject_callback(this);
            return callback_ret;
        }
        return KLocalizedTranslator::metaObject();
    }

    // Virtual method for C ABI access and custom callback
    virtual void* qt_metacast(const char* param1) override {
        if (klocalizedtranslator_metacast_callback) {
            const char* cbval1 = (const char*)param1;
            void* callback_ret = klocalizedtranslator_metacast_callback(this, cbval1);
            return callback_ret;
        }
        return KLocalizedTranslator::qt_metacast(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (klocalizedtranslator_metacall_callback) {
            int cbval1 = static_cast<int>(param1);
            int cbval2 = param2;
            void** cbval3 = param3;
            int callback_ret = klocalizedtranslator_metacall_callback(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        }
        return KLocalizedTranslator::qt_metacall(param1, param2, param3);
    }

    // Virtual method for C ABI access and custom callback
    virtual QString translate(const char* context, const char* sourceText, const char* disambiguation, int n) const override {
        if (klocalizedtranslator_translate_callback) {
            const char* cbval1 = (const char*)context;
            const char* cbval2 = (const char*)sourceText;
            const char* cbval3 = (const char*)disambiguation;
            int cbval4 = n;
            const char* callback_ret = klocalizedtranslator_translate_callback(this, cbval1, cbval2, cbval3, cbval4);
            QString callback_ret_QString = QString::fromUtf8(callback_ret);
            return callback_ret_QString;
        }
        return KLocalizedTranslator::translate(context, sourceText, disambiguation, n);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool isEmpty() const override {
        if (klocalizedtranslator_isempty_callback) {
            bool callback_ret = klocalizedtranslator_isempty_callback(this);
            return callback_ret;
        }
        return KLocalizedTranslator::isEmpty();
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* event) override {
        if (klocalizedtranslator_event_callback) {
            QEvent* cbval1 = event;
            bool callback_ret = klocalizedtranslator_event_callback(this, cbval1);
            return callback_ret;
        }
        return KLocalizedTranslator::event(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* watched, QEvent* event) override {
        if (klocalizedtranslator_eventfilter_callback) {
            QObject* cbval1 = watched;
            QEvent* cbval2 = event;
            bool callback_ret = klocalizedtranslator_eventfilter_callback(this, cbval1, cbval2);
            return callback_ret;
        }
        return KLocalizedTranslator::eventFilter(watched, event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (klocalizedtranslator_timerevent_callback) {
            QTimerEvent* cbval1 = event;
            klocalizedtranslator_timerevent_callback(this, cbval1);
            return;
        }
        KLocalizedTranslator::timerEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (klocalizedtranslator_childevent_callback) {
            QChildEvent* cbval1 = event;
            klocalizedtranslator_childevent_callback(this, cbval1);
            return;
        }
        KLocalizedTranslator::childEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (klocalizedtranslator_customevent_callback) {
            QEvent* cbval1 = event;
            klocalizedtranslator_customevent_callback(this, cbval1);
            return;
        }
        KLocalizedTranslator::customEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (klocalizedtranslator_connectnotify_callback) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            klocalizedtranslator_connectnotify_callback(this, cbval1);
            return;
        }
        KLocalizedTranslator::connectNotify(signal);
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (klocalizedtranslator_disconnectnotify_callback) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            klocalizedtranslator_disconnectnotify_callback(this, cbval1);
            return;
        }
        KLocalizedTranslator::disconnectNotify(signal);
    }

    // Friend functions
    friend void KLocalizedTranslator_SuperTimerEvent(KLocalizedTranslator* self, QTimerEvent* event);
    friend void KLocalizedTranslator_SuperChildEvent(KLocalizedTranslator* self, QChildEvent* event);
    friend void KLocalizedTranslator_SuperCustomEvent(KLocalizedTranslator* self, QEvent* event);
    friend void KLocalizedTranslator_SuperConnectNotify(KLocalizedTranslator* self, const QMetaMethod* signal);
    friend void KLocalizedTranslator_SuperDisconnectNotify(KLocalizedTranslator* self, const QMetaMethod* signal);
};

#endif
