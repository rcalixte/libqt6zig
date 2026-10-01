#pragma once
#ifndef EXTRAS_KTEXTWIDGETS_LIBKFIND_HXX
#define EXTRAS_KTEXTWIDGETS_LIBKFIND_HXX

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

// This class is a subclass of KFind
class VirtualKFind final : public KFind {
  public:
    // Virtual class public types (including callbacks and access types)
    using KFind_MetaObject_Callback = QMetaObject* (*)(const KFind*);
    using KFind_Metacast_Callback = void* (*)(KFind*, const char*);
    using KFind_Metacall_Callback = int (*)(KFind*, int, int, void**);
    using KFind_SetOptions_Callback = void (*)(KFind*, long);
    using KFind_ResetCounts_Callback = void (*)(KFind*);
    using KFind_ValidateMatch_Callback = bool (*)(KFind*, const char*, int, int);
    using KFind_ShouldRestart_Callback = bool (*)(const KFind*, bool, bool);
    using KFind_DisplayFinalDialog_Callback = void (*)(const KFind*);
    using KFind_Event_Callback = bool (*)(KFind*, QEvent*);
    using KFind_EventFilter_Callback = bool (*)(KFind*, QObject*, QEvent*);
    using KFind_TimerEvent_Callback = void (*)(KFind*, QTimerEvent*);
    using KFind_ChildEvent_Callback = void (*)(KFind*, QChildEvent*);
    using KFind_CustomEvent_Callback = void (*)(KFind*, QEvent*);
    using KFind_ConnectNotify_Callback = void (*)(KFind*, QMetaMethod*);
    using KFind_DisconnectNotify_Callback = void (*)(KFind*, QMetaMethod*);
    using KFind::dialogsParent;
    using KFind::isSignalConnected;
    using KFind::parentWidget;
    using KFind::receivers;
    using KFind::sender;
    using KFind::senderSignalIndex;

    // Instance callback storage
    KFind_MetaObject_Callback kfind_metaobject_callback = nullptr;
    KFind_Metacast_Callback kfind_metacast_callback = nullptr;
    KFind_Metacall_Callback kfind_metacall_callback = nullptr;
    KFind_SetOptions_Callback kfind_setoptions_callback = nullptr;
    KFind_ResetCounts_Callback kfind_resetcounts_callback = nullptr;
    KFind_ValidateMatch_Callback kfind_validatematch_callback = nullptr;
    KFind_ShouldRestart_Callback kfind_shouldrestart_callback = nullptr;
    KFind_DisplayFinalDialog_Callback kfind_displayfinaldialog_callback = nullptr;
    KFind_Event_Callback kfind_event_callback = nullptr;
    KFind_EventFilter_Callback kfind_eventfilter_callback = nullptr;
    KFind_TimerEvent_Callback kfind_timerevent_callback = nullptr;
    KFind_ChildEvent_Callback kfind_childevent_callback = nullptr;
    KFind_CustomEvent_Callback kfind_customevent_callback = nullptr;
    KFind_ConnectNotify_Callback kfind_connectnotify_callback = nullptr;
    KFind_DisconnectNotify_Callback kfind_disconnectnotify_callback = nullptr;

    // Access struct
    struct Base : KFind {
        using KFind::childEvent;
        using KFind::connectNotify;
        using KFind::customEvent;
        using KFind::disconnectNotify;
        using KFind::timerEvent;
    };

    VirtualKFind(const QString& pattern, long options, QWidget* parent) : KFind(pattern, options, parent) {};
    VirtualKFind(const QString& pattern, long options, QWidget* parent, QWidget* findDialog) : KFind(pattern, options, parent, findDialog) {};

    // Virtual method for C ABI access and custom callback
    virtual const QMetaObject* metaObject() const override {
        if (kfind_metaobject_callback) {
            QMetaObject* callback_ret = kfind_metaobject_callback(this);
            return callback_ret;
        }
        return KFind::metaObject();
    }

    // Virtual method for C ABI access and custom callback
    virtual void* qt_metacast(const char* param1) override {
        if (kfind_metacast_callback) {
            const char* cbval1 = (const char*)param1;
            void* callback_ret = kfind_metacast_callback(this, cbval1);
            return callback_ret;
        }
        return KFind::qt_metacast(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (kfind_metacall_callback) {
            int cbval1 = static_cast<int>(param1);
            int cbval2 = param2;
            void** cbval3 = param3;
            int callback_ret = kfind_metacall_callback(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        }
        return KFind::qt_metacall(param1, param2, param3);
    }

    // Virtual method for C ABI access and custom callback
    virtual void setOptions(long options) override {
        if (kfind_setoptions_callback) {
            long cbval1 = options;
            kfind_setoptions_callback(this, cbval1);
            return;
        }
        KFind::setOptions(options);
    }

    // Virtual method for C ABI access and custom callback
    virtual void resetCounts() override {
        if (kfind_resetcounts_callback) {
            kfind_resetcounts_callback(this);
            return;
        }
        KFind::resetCounts();
    }

    // Virtual method for C ABI access and custom callback
    virtual bool validateMatch(const QString& text, int index, int matchedlength) override {
        if (kfind_validatematch_callback) {
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
            bool callback_ret = kfind_validatematch_callback(this, cbval1, cbval2, cbval3);
            libqt_free(text_str);
            return callback_ret;
        }
        return KFind::validateMatch(text, index, matchedlength);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool shouldRestart(bool forceAsking, bool showNumMatches) const override {
        if (kfind_shouldrestart_callback) {
            bool cbval1 = forceAsking;
            bool cbval2 = showNumMatches;
            bool callback_ret = kfind_shouldrestart_callback(this, cbval1, cbval2);
            return callback_ret;
        }
        return KFind::shouldRestart(forceAsking, showNumMatches);
    }

    // Virtual method for C ABI access and custom callback
    virtual void displayFinalDialog() const override {
        if (kfind_displayfinaldialog_callback) {
            kfind_displayfinaldialog_callback(this);
            return;
        }
        KFind::displayFinalDialog();
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* event) override {
        if (kfind_event_callback) {
            QEvent* cbval1 = event;
            bool callback_ret = kfind_event_callback(this, cbval1);
            return callback_ret;
        }
        return KFind::event(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* watched, QEvent* event) override {
        if (kfind_eventfilter_callback) {
            QObject* cbval1 = watched;
            QEvent* cbval2 = event;
            bool callback_ret = kfind_eventfilter_callback(this, cbval1, cbval2);
            return callback_ret;
        }
        return KFind::eventFilter(watched, event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (kfind_timerevent_callback) {
            QTimerEvent* cbval1 = event;
            kfind_timerevent_callback(this, cbval1);
            return;
        }
        KFind::timerEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (kfind_childevent_callback) {
            QChildEvent* cbval1 = event;
            kfind_childevent_callback(this, cbval1);
            return;
        }
        KFind::childEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (kfind_customevent_callback) {
            QEvent* cbval1 = event;
            kfind_customevent_callback(this, cbval1);
            return;
        }
        KFind::customEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (kfind_connectnotify_callback) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            kfind_connectnotify_callback(this, cbval1);
            return;
        }
        KFind::connectNotify(signal);
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (kfind_disconnectnotify_callback) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            kfind_disconnectnotify_callback(this, cbval1);
            return;
        }
        KFind::disconnectNotify(signal);
    }

    // Friend functions
    friend void KFind_SuperTimerEvent(KFind* self, QTimerEvent* event);
    friend void KFind_SuperChildEvent(KFind* self, QChildEvent* event);
    friend void KFind_SuperCustomEvent(KFind* self, QEvent* event);
    friend void KFind_SuperConnectNotify(KFind* self, const QMetaMethod* signal);
    friend void KFind_SuperDisconnectNotify(KFind* self, const QMetaMethod* signal);
};

#endif
