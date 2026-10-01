#pragma once
#ifndef EXTRAS_KTEXTWIDGETS_LIBKREPLACE_HXX
#define EXTRAS_KTEXTWIDGETS_LIBKREPLACE_HXX

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

// This class is a subclass of KReplace
class VirtualKReplace final : public KReplace {
  public:
    // Virtual class public types (including callbacks and access types)
    using KReplace_MetaObject_Callback = QMetaObject* (*)(const KReplace*);
    using KReplace_Metacast_Callback = void* (*)(KReplace*, const char*);
    using KReplace_Metacall_Callback = int (*)(KReplace*, int, int, void**);
    using KReplace_ResetCounts_Callback = void (*)(KReplace*);
    using KReplace_ShouldRestart_Callback = bool (*)(const KReplace*, bool, bool);
    using KReplace_DisplayFinalDialog_Callback = void (*)(const KReplace*);
    using KReplace_SetOptions_Callback = void (*)(KReplace*, long);
    using KReplace_ValidateMatch_Callback = bool (*)(KReplace*, const char*, int, int);
    using KReplace_Event_Callback = bool (*)(KReplace*, QEvent*);
    using KReplace_EventFilter_Callback = bool (*)(KReplace*, QObject*, QEvent*);
    using KReplace_TimerEvent_Callback = void (*)(KReplace*, QTimerEvent*);
    using KReplace_ChildEvent_Callback = void (*)(KReplace*, QChildEvent*);
    using KReplace_CustomEvent_Callback = void (*)(KReplace*, QEvent*);
    using KReplace_ConnectNotify_Callback = void (*)(KReplace*, QMetaMethod*);
    using KReplace_DisconnectNotify_Callback = void (*)(KReplace*, QMetaMethod*);
    using KReplace::dialogsParent;
    using KReplace::isSignalConnected;
    using KReplace::parentWidget;
    using KReplace::receivers;
    using KReplace::sender;
    using KReplace::senderSignalIndex;

    // Instance callback storage
    KReplace_MetaObject_Callback kreplace_metaobject_callback = nullptr;
    KReplace_Metacast_Callback kreplace_metacast_callback = nullptr;
    KReplace_Metacall_Callback kreplace_metacall_callback = nullptr;
    KReplace_ResetCounts_Callback kreplace_resetcounts_callback = nullptr;
    KReplace_ShouldRestart_Callback kreplace_shouldrestart_callback = nullptr;
    KReplace_DisplayFinalDialog_Callback kreplace_displayfinaldialog_callback = nullptr;
    KReplace_SetOptions_Callback kreplace_setoptions_callback = nullptr;
    KReplace_ValidateMatch_Callback kreplace_validatematch_callback = nullptr;
    KReplace_Event_Callback kreplace_event_callback = nullptr;
    KReplace_EventFilter_Callback kreplace_eventfilter_callback = nullptr;
    KReplace_TimerEvent_Callback kreplace_timerevent_callback = nullptr;
    KReplace_ChildEvent_Callback kreplace_childevent_callback = nullptr;
    KReplace_CustomEvent_Callback kreplace_customevent_callback = nullptr;
    KReplace_ConnectNotify_Callback kreplace_connectnotify_callback = nullptr;
    KReplace_DisconnectNotify_Callback kreplace_disconnectnotify_callback = nullptr;

    // Access struct
    struct Base : KReplace {
        using KReplace::childEvent;
        using KReplace::connectNotify;
        using KReplace::customEvent;
        using KReplace::disconnectNotify;
        using KReplace::timerEvent;
    };

    VirtualKReplace(const QString& pattern, const QString& replacement, long options) : KReplace(pattern, replacement, options) {};
    VirtualKReplace(const QString& pattern, const QString& replacement, long options, QWidget* parent, QWidget* replaceDialog) : KReplace(pattern, replacement, options, parent, replaceDialog) {};
    VirtualKReplace(const QString& pattern, const QString& replacement, long options, QWidget* parent) : KReplace(pattern, replacement, options, parent) {};

    // Virtual method for C ABI access and custom callback
    virtual const QMetaObject* metaObject() const override {
        if (kreplace_metaobject_callback) {
            QMetaObject* callback_ret = kreplace_metaobject_callback(this);
            return callback_ret;
        }
        return KReplace::metaObject();
    }

    // Virtual method for C ABI access and custom callback
    virtual void* qt_metacast(const char* param1) override {
        if (kreplace_metacast_callback) {
            const char* cbval1 = (const char*)param1;
            void* callback_ret = kreplace_metacast_callback(this, cbval1);
            return callback_ret;
        }
        return KReplace::qt_metacast(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (kreplace_metacall_callback) {
            int cbval1 = static_cast<int>(param1);
            int cbval2 = param2;
            void** cbval3 = param3;
            int callback_ret = kreplace_metacall_callback(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        }
        return KReplace::qt_metacall(param1, param2, param3);
    }

    // Virtual method for C ABI access and custom callback
    virtual void resetCounts() override {
        if (kreplace_resetcounts_callback) {
            kreplace_resetcounts_callback(this);
            return;
        }
        KReplace::resetCounts();
    }

    // Virtual method for C ABI access and custom callback
    virtual bool shouldRestart(bool forceAsking, bool showNumMatches) const override {
        if (kreplace_shouldrestart_callback) {
            bool cbval1 = forceAsking;
            bool cbval2 = showNumMatches;
            bool callback_ret = kreplace_shouldrestart_callback(this, cbval1, cbval2);
            return callback_ret;
        }
        return KReplace::shouldRestart(forceAsking, showNumMatches);
    }

    // Virtual method for C ABI access and custom callback
    virtual void displayFinalDialog() const override {
        if (kreplace_displayfinaldialog_callback) {
            kreplace_displayfinaldialog_callback(this);
            return;
        }
        KReplace::displayFinalDialog();
    }

    // Virtual method for C ABI access and custom callback
    virtual void setOptions(long options) override {
        if (kreplace_setoptions_callback) {
            long cbval1 = options;
            kreplace_setoptions_callback(this, cbval1);
            return;
        }
        KReplace::setOptions(options);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool validateMatch(const QString& text, int index, int matchedlength) override {
        if (kreplace_validatematch_callback) {
            const auto text_ret = text;
            // Convert QString from UTF-16 in C++ RAII memory to UTF-8 chars in manually-managed C memory
            QByteArray text_b = text_ret.toUtf8();
            auto text_str_len = text_b.length();
            const char* text_str = static_cast<const char*>(malloc(text_str_len + 1));
            memcpy((void*)text_str, text_b.data(), text_str_len);
            ((char*)text_str)[text_str_len] = '\0';
            const char* cbval1 = text_str;
            int cbval2 = index;
            int cbval3 = matchedlength;
            bool callback_ret = kreplace_validatematch_callback(this, cbval1, cbval2, cbval3);
            libqt_free(text_str);
            return callback_ret;
        }
        return KReplace::validateMatch(text, index, matchedlength);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* event) override {
        if (kreplace_event_callback) {
            QEvent* cbval1 = event;
            bool callback_ret = kreplace_event_callback(this, cbval1);
            return callback_ret;
        }
        return KReplace::event(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* watched, QEvent* event) override {
        if (kreplace_eventfilter_callback) {
            QObject* cbval1 = watched;
            QEvent* cbval2 = event;
            bool callback_ret = kreplace_eventfilter_callback(this, cbval1, cbval2);
            return callback_ret;
        }
        return KReplace::eventFilter(watched, event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (kreplace_timerevent_callback) {
            QTimerEvent* cbval1 = event;
            kreplace_timerevent_callback(this, cbval1);
            return;
        }
        KReplace::timerEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (kreplace_childevent_callback) {
            QChildEvent* cbval1 = event;
            kreplace_childevent_callback(this, cbval1);
            return;
        }
        KReplace::childEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (kreplace_customevent_callback) {
            QEvent* cbval1 = event;
            kreplace_customevent_callback(this, cbval1);
            return;
        }
        KReplace::customEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (kreplace_connectnotify_callback) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            kreplace_connectnotify_callback(this, cbval1);
            return;
        }
        KReplace::connectNotify(signal);
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (kreplace_disconnectnotify_callback) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            kreplace_disconnectnotify_callback(this, cbval1);
            return;
        }
        KReplace::disconnectNotify(signal);
    }

    // Friend functions
    friend void KReplace_SuperTimerEvent(KReplace* self, QTimerEvent* event);
    friend void KReplace_SuperChildEvent(KReplace* self, QChildEvent* event);
    friend void KReplace_SuperCustomEvent(KReplace* self, QEvent* event);
    friend void KReplace_SuperConnectNotify(KReplace* self, const QMetaMethod* signal);
    friend void KReplace_SuperDisconnectNotify(KReplace* self, const QMetaMethod* signal);
};

#endif
