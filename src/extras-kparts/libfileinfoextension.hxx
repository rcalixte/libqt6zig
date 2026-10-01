#pragma once
#ifndef EXTRAS_KPARTS_LIBFILEINFOEXTENSION_HXX
#define EXTRAS_KPARTS_LIBFILEINFOEXTENSION_HXX

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

// This class is a subclass of KParts::FileInfoExtension
class VirtualKPartsFileInfoExtension : public KParts::FileInfoExtension {
  public:
    // Virtual class public types (including callbacks and access types)
    using KParts__FileInfoExtension_MetaObject_Callback = QMetaObject* (*)(const KParts__FileInfoExtension*);
    using KParts__FileInfoExtension_Metacast_Callback = void* (*)(KParts__FileInfoExtension*, const char*);
    using KParts__FileInfoExtension_Metacall_Callback = int (*)(KParts__FileInfoExtension*, int, int, void**);
    using KParts__FileInfoExtension_HasSelection_Callback = bool (*)(const KParts__FileInfoExtension*);
    using KParts__FileInfoExtension_SupportedQueryModes_Callback = int (*)(const KParts__FileInfoExtension*);
    using KParts__FileInfoExtension_QueryFor_Callback = KFileItemList* (*)(const KParts__FileInfoExtension*, int);
    using KParts__FileInfoExtension_Event_Callback = bool (*)(KParts__FileInfoExtension*, QEvent*);
    using KParts__FileInfoExtension_EventFilter_Callback = bool (*)(KParts__FileInfoExtension*, QObject*, QEvent*);
    using KParts__FileInfoExtension_TimerEvent_Callback = void (*)(KParts__FileInfoExtension*, QTimerEvent*);
    using KParts__FileInfoExtension_ChildEvent_Callback = void (*)(KParts__FileInfoExtension*, QChildEvent*);
    using KParts__FileInfoExtension_CustomEvent_Callback = void (*)(KParts__FileInfoExtension*, QEvent*);
    using KParts__FileInfoExtension_ConnectNotify_Callback = void (*)(KParts__FileInfoExtension*, QMetaMethod*);
    using KParts__FileInfoExtension_DisconnectNotify_Callback = void (*)(KParts__FileInfoExtension*, QMetaMethod*);
    using KParts::FileInfoExtension::isSignalConnected;
    using KParts::FileInfoExtension::receivers;
    using KParts::FileInfoExtension::sender;
    using KParts::FileInfoExtension::senderSignalIndex;

    // Instance callback storage
    KParts__FileInfoExtension_MetaObject_Callback kparts__fileinfoextension_metaobject_callback = nullptr;
    KParts__FileInfoExtension_Metacast_Callback kparts__fileinfoextension_metacast_callback = nullptr;
    KParts__FileInfoExtension_Metacall_Callback kparts__fileinfoextension_metacall_callback = nullptr;
    KParts__FileInfoExtension_HasSelection_Callback kparts__fileinfoextension_hasselection_callback = nullptr;
    KParts__FileInfoExtension_SupportedQueryModes_Callback kparts__fileinfoextension_supportedquerymodes_callback = nullptr;
    KParts__FileInfoExtension_QueryFor_Callback kparts__fileinfoextension_queryfor_callback = nullptr;
    KParts__FileInfoExtension_Event_Callback kparts__fileinfoextension_event_callback = nullptr;
    KParts__FileInfoExtension_EventFilter_Callback kparts__fileinfoextension_eventfilter_callback = nullptr;
    KParts__FileInfoExtension_TimerEvent_Callback kparts__fileinfoextension_timerevent_callback = nullptr;
    KParts__FileInfoExtension_ChildEvent_Callback kparts__fileinfoextension_childevent_callback = nullptr;
    KParts__FileInfoExtension_CustomEvent_Callback kparts__fileinfoextension_customevent_callback = nullptr;
    KParts__FileInfoExtension_ConnectNotify_Callback kparts__fileinfoextension_connectnotify_callback = nullptr;
    KParts__FileInfoExtension_DisconnectNotify_Callback kparts__fileinfoextension_disconnectnotify_callback = nullptr;

    // Access struct
    struct Base : KParts::FileInfoExtension {
        using KParts::FileInfoExtension::childEvent;
        using KParts::FileInfoExtension::connectNotify;
        using KParts::FileInfoExtension::customEvent;
        using KParts::FileInfoExtension::disconnectNotify;
        using KParts::FileInfoExtension::timerEvent;
    };

    VirtualKPartsFileInfoExtension(KParts::ReadOnlyPart* parent) : KParts::FileInfoExtension(parent) {};

    // Virtual method for C ABI access and custom callback
    virtual const QMetaObject* metaObject() const override {
        if (kparts__fileinfoextension_metaobject_callback) {
            QMetaObject* callback_ret = kparts__fileinfoextension_metaobject_callback(this);
            return callback_ret;
        }
        return KParts__FileInfoExtension::metaObject();
    }

    // Virtual method for C ABI access and custom callback
    virtual void* qt_metacast(const char* param1) override {
        if (kparts__fileinfoextension_metacast_callback) {
            const char* cbval1 = (const char*)param1;
            void* callback_ret = kparts__fileinfoextension_metacast_callback(this, cbval1);
            return callback_ret;
        }
        return KParts__FileInfoExtension::qt_metacast(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (kparts__fileinfoextension_metacall_callback) {
            int cbval1 = static_cast<int>(param1);
            int cbval2 = param2;
            void** cbval3 = param3;
            int callback_ret = kparts__fileinfoextension_metacall_callback(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        }
        return KParts__FileInfoExtension::qt_metacall(param1, param2, param3);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool hasSelection() const override {
        if (kparts__fileinfoextension_hasselection_callback) {
            bool callback_ret = kparts__fileinfoextension_hasselection_callback(this);
            return callback_ret;
        }
        return KParts__FileInfoExtension::hasSelection();
    }

    // Virtual method for C ABI access and custom callback
    virtual KParts::FileInfoExtension::QueryModes supportedQueryModes() const override {
        if (kparts__fileinfoextension_supportedquerymodes_callback) {
            int callback_ret = kparts__fileinfoextension_supportedquerymodes_callback(this);
            return static_cast<KParts::FileInfoExtension::QueryModes>(callback_ret);
        }
        return KParts__FileInfoExtension::supportedQueryModes();
    }

    // Virtual method for C ABI access and custom callback
    virtual KFileItemList queryFor(KParts::FileInfoExtension::QueryMode mode) const override {
        if (kparts__fileinfoextension_queryfor_callback) {
            int cbval1 = static_cast<int>(mode);
            KFileItemList* callback_ret = kparts__fileinfoextension_queryfor_callback(this, cbval1);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        // Pure virtual method
        qFatal("Error: Pure virtual method KParts::FileInfoExtension::queryFor called without being implemented");
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* event) override {
        if (kparts__fileinfoextension_event_callback) {
            QEvent* cbval1 = event;
            bool callback_ret = kparts__fileinfoextension_event_callback(this, cbval1);
            return callback_ret;
        }
        return KParts__FileInfoExtension::event(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* watched, QEvent* event) override {
        if (kparts__fileinfoextension_eventfilter_callback) {
            QObject* cbval1 = watched;
            QEvent* cbval2 = event;
            bool callback_ret = kparts__fileinfoextension_eventfilter_callback(this, cbval1, cbval2);
            return callback_ret;
        }
        return KParts__FileInfoExtension::eventFilter(watched, event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (kparts__fileinfoextension_timerevent_callback) {
            QTimerEvent* cbval1 = event;
            kparts__fileinfoextension_timerevent_callback(this, cbval1);
            return;
        }
        KParts__FileInfoExtension::timerEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (kparts__fileinfoextension_childevent_callback) {
            QChildEvent* cbval1 = event;
            kparts__fileinfoextension_childevent_callback(this, cbval1);
            return;
        }
        KParts__FileInfoExtension::childEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (kparts__fileinfoextension_customevent_callback) {
            QEvent* cbval1 = event;
            kparts__fileinfoextension_customevent_callback(this, cbval1);
            return;
        }
        KParts__FileInfoExtension::customEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (kparts__fileinfoextension_connectnotify_callback) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            kparts__fileinfoextension_connectnotify_callback(this, cbval1);
            return;
        }
        KParts__FileInfoExtension::connectNotify(signal);
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (kparts__fileinfoextension_disconnectnotify_callback) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            kparts__fileinfoextension_disconnectnotify_callback(this, cbval1);
            return;
        }
        KParts__FileInfoExtension::disconnectNotify(signal);
    }

    // Friend functions
    friend void KParts__FileInfoExtension_SuperTimerEvent(KParts::FileInfoExtension* self, QTimerEvent* event);
    friend void KParts__FileInfoExtension_SuperChildEvent(KParts::FileInfoExtension* self, QChildEvent* event);
    friend void KParts__FileInfoExtension_SuperCustomEvent(KParts::FileInfoExtension* self, QEvent* event);
    friend void KParts__FileInfoExtension_SuperConnectNotify(KParts::FileInfoExtension* self, const QMetaMethod* signal);
    friend void KParts__FileInfoExtension_SuperDisconnectNotify(KParts::FileInfoExtension* self, const QMetaMethod* signal);
};

#endif
