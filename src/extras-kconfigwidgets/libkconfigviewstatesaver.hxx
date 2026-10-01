#pragma once
#ifndef EXTRAS_KCONFIGWIDGETS_LIBKCONFIGVIEWSTATESAVER_HXX
#define EXTRAS_KCONFIGWIDGETS_LIBKCONFIGVIEWSTATESAVER_HXX

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

// This class is a subclass of KConfigViewStateSaver
class VirtualKConfigViewStateSaver : public KConfigViewStateSaver {
  public:
    // Virtual class public types (including callbacks and access types)
    using KConfigViewStateSaver_MetaObject_Callback = QMetaObject* (*)(const KConfigViewStateSaver*);
    using KConfigViewStateSaver_Metacast_Callback = void* (*)(KConfigViewStateSaver*, const char*);
    using KConfigViewStateSaver_Metacall_Callback = int (*)(KConfigViewStateSaver*, int, int, void**);
    using KConfigViewStateSaver_IndexFromConfigString_Callback = QModelIndex* (*)(const KConfigViewStateSaver*, QAbstractItemModel*, const char*);
    using KConfigViewStateSaver_IndexToConfigString_Callback = const char* (*)(const KConfigViewStateSaver*, QModelIndex*);
    using KConfigViewStateSaver_Event_Callback = bool (*)(KConfigViewStateSaver*, QEvent*);
    using KConfigViewStateSaver_EventFilter_Callback = bool (*)(KConfigViewStateSaver*, QObject*, QEvent*);
    using KConfigViewStateSaver_TimerEvent_Callback = void (*)(KConfigViewStateSaver*, QTimerEvent*);
    using KConfigViewStateSaver_ChildEvent_Callback = void (*)(KConfigViewStateSaver*, QChildEvent*);
    using KConfigViewStateSaver_CustomEvent_Callback = void (*)(KConfigViewStateSaver*, QEvent*);
    using KConfigViewStateSaver_ConnectNotify_Callback = void (*)(KConfigViewStateSaver*, QMetaMethod*);
    using KConfigViewStateSaver_DisconnectNotify_Callback = void (*)(KConfigViewStateSaver*, QMetaMethod*);
    using KConfigViewStateSaver::isSignalConnected;
    using KConfigViewStateSaver::receivers;
    using KConfigViewStateSaver::sender;
    using KConfigViewStateSaver::senderSignalIndex;

    // Instance callback storage
    KConfigViewStateSaver_MetaObject_Callback kconfigviewstatesaver_metaobject_callback = nullptr;
    KConfigViewStateSaver_Metacast_Callback kconfigviewstatesaver_metacast_callback = nullptr;
    KConfigViewStateSaver_Metacall_Callback kconfigviewstatesaver_metacall_callback = nullptr;
    KConfigViewStateSaver_IndexFromConfigString_Callback kconfigviewstatesaver_indexfromconfigstring_callback = nullptr;
    KConfigViewStateSaver_IndexToConfigString_Callback kconfigviewstatesaver_indextoconfigstring_callback = nullptr;
    KConfigViewStateSaver_Event_Callback kconfigviewstatesaver_event_callback = nullptr;
    KConfigViewStateSaver_EventFilter_Callback kconfigviewstatesaver_eventfilter_callback = nullptr;
    KConfigViewStateSaver_TimerEvent_Callback kconfigviewstatesaver_timerevent_callback = nullptr;
    KConfigViewStateSaver_ChildEvent_Callback kconfigviewstatesaver_childevent_callback = nullptr;
    KConfigViewStateSaver_CustomEvent_Callback kconfigviewstatesaver_customevent_callback = nullptr;
    KConfigViewStateSaver_ConnectNotify_Callback kconfigviewstatesaver_connectnotify_callback = nullptr;
    KConfigViewStateSaver_DisconnectNotify_Callback kconfigviewstatesaver_disconnectnotify_callback = nullptr;

    // Access struct
    struct Base : KConfigViewStateSaver {
        using KConfigViewStateSaver::childEvent;
        using KConfigViewStateSaver::connectNotify;
        using KConfigViewStateSaver::customEvent;
        using KConfigViewStateSaver::disconnectNotify;
        using KConfigViewStateSaver::indexFromConfigString;
        using KConfigViewStateSaver::indexToConfigString;
        using KConfigViewStateSaver::timerEvent;
    };

    VirtualKConfigViewStateSaver() : KConfigViewStateSaver() {};
    VirtualKConfigViewStateSaver(QObject* parent) : KConfigViewStateSaver(parent) {};

    // Virtual method for C ABI access and custom callback
    virtual const QMetaObject* metaObject() const override {
        if (kconfigviewstatesaver_metaobject_callback) {
            QMetaObject* callback_ret = kconfigviewstatesaver_metaobject_callback(this);
            return callback_ret;
        }
        return KConfigViewStateSaver::metaObject();
    }

    // Virtual method for C ABI access and custom callback
    virtual void* qt_metacast(const char* param1) override {
        if (kconfigviewstatesaver_metacast_callback) {
            const char* cbval1 = (const char*)param1;
            void* callback_ret = kconfigviewstatesaver_metacast_callback(this, cbval1);
            return callback_ret;
        }
        return KConfigViewStateSaver::qt_metacast(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (kconfigviewstatesaver_metacall_callback) {
            int cbval1 = static_cast<int>(param1);
            int cbval2 = param2;
            void** cbval3 = param3;
            int callback_ret = kconfigviewstatesaver_metacall_callback(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        }
        return KConfigViewStateSaver::qt_metacall(param1, param2, param3);
    }

    // Virtual method for C ABI access and custom callback
    virtual QModelIndex indexFromConfigString(const QAbstractItemModel* model, const QString& key) const override {
        if (kconfigviewstatesaver_indexfromconfigstring_callback) {
            QAbstractItemModel* cbval1 = (QAbstractItemModel*)model;
            const auto key_ret = key;
            // Convert QString from UTF-16 in C++ RAII memory to UTF-8 chars in manually-managed C memory
            QByteArray key_b = key_ret.toUtf8();
            auto key_str_len = key_b.length();
            const char* key_str = static_cast<const char*>(malloc(key_str_len + 1));
            memcpy((void*)key_str, key_b.data(), key_str_len);
            ((char*)key_str)[key_str_len] = '\0';
            const char* cbval2 = key_str;
            QModelIndex* callback_ret = kconfigviewstatesaver_indexfromconfigstring_callback(this, cbval1, cbval2);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            libqt_free(key_str);
            return callback_ret_Value;
        }
        // Pure virtual method
        qFatal("Error: Pure virtual method KConfigViewStateSaver::indexFromConfigString called without being implemented");
    }

    // Virtual method for C ABI access and custom callback
    virtual QString indexToConfigString(const QModelIndex& index) const override {
        if (kconfigviewstatesaver_indextoconfigstring_callback) {
            const QModelIndex& index_ret = index;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&index_ret);
            const char* callback_ret = kconfigviewstatesaver_indextoconfigstring_callback(this, cbval1);
            QString callback_ret_QString = QString::fromUtf8(callback_ret);
            return callback_ret_QString;
        }
        // Pure virtual method
        qFatal("Error: Pure virtual method KConfigViewStateSaver::indexToConfigString called without being implemented");
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* event) override {
        if (kconfigviewstatesaver_event_callback) {
            QEvent* cbval1 = event;
            bool callback_ret = kconfigviewstatesaver_event_callback(this, cbval1);
            return callback_ret;
        }
        return KConfigViewStateSaver::event(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* watched, QEvent* event) override {
        if (kconfigviewstatesaver_eventfilter_callback) {
            QObject* cbval1 = watched;
            QEvent* cbval2 = event;
            bool callback_ret = kconfigviewstatesaver_eventfilter_callback(this, cbval1, cbval2);
            return callback_ret;
        }
        return KConfigViewStateSaver::eventFilter(watched, event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (kconfigviewstatesaver_timerevent_callback) {
            QTimerEvent* cbval1 = event;
            kconfigviewstatesaver_timerevent_callback(this, cbval1);
            return;
        }
        KConfigViewStateSaver::timerEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (kconfigviewstatesaver_childevent_callback) {
            QChildEvent* cbval1 = event;
            kconfigviewstatesaver_childevent_callback(this, cbval1);
            return;
        }
        KConfigViewStateSaver::childEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (kconfigviewstatesaver_customevent_callback) {
            QEvent* cbval1 = event;
            kconfigviewstatesaver_customevent_callback(this, cbval1);
            return;
        }
        KConfigViewStateSaver::customEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (kconfigviewstatesaver_connectnotify_callback) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            kconfigviewstatesaver_connectnotify_callback(this, cbval1);
            return;
        }
        KConfigViewStateSaver::connectNotify(signal);
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (kconfigviewstatesaver_disconnectnotify_callback) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            kconfigviewstatesaver_disconnectnotify_callback(this, cbval1);
            return;
        }
        KConfigViewStateSaver::disconnectNotify(signal);
    }

    // Friend functions
    friend void KConfigViewStateSaver_SuperTimerEvent(KConfigViewStateSaver* self, QTimerEvent* event);
    friend void KConfigViewStateSaver_SuperChildEvent(KConfigViewStateSaver* self, QChildEvent* event);
    friend void KConfigViewStateSaver_SuperCustomEvent(KConfigViewStateSaver* self, QEvent* event);
    friend void KConfigViewStateSaver_SuperConnectNotify(KConfigViewStateSaver* self, const QMetaMethod* signal);
    friend void KConfigViewStateSaver_SuperDisconnectNotify(KConfigViewStateSaver* self, const QMetaMethod* signal);
};

#endif
