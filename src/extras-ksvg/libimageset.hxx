#pragma once
#ifndef EXTRAS_KSVG_LIBIMAGESET_HXX
#define EXTRAS_KSVG_LIBIMAGESET_HXX

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

// This class is a subclass of KSvg::ImageSet
class VirtualKSvgImageSet final : public KSvg::ImageSet {
  public:
    // Virtual class public types (including callbacks and access types)
    using KSvg__ImageSet_MetaObject_Callback = QMetaObject* (*)(const KSvg__ImageSet*);
    using KSvg__ImageSet_Metacast_Callback = void* (*)(KSvg__ImageSet*, const char*);
    using KSvg__ImageSet_Metacall_Callback = int (*)(KSvg__ImageSet*, int, int, void**);
    using KSvg__ImageSet_Event_Callback = bool (*)(KSvg__ImageSet*, QEvent*);
    using KSvg__ImageSet_EventFilter_Callback = bool (*)(KSvg__ImageSet*, QObject*, QEvent*);
    using KSvg__ImageSet_TimerEvent_Callback = void (*)(KSvg__ImageSet*, QTimerEvent*);
    using KSvg__ImageSet_ChildEvent_Callback = void (*)(KSvg__ImageSet*, QChildEvent*);
    using KSvg__ImageSet_CustomEvent_Callback = void (*)(KSvg__ImageSet*, QEvent*);
    using KSvg__ImageSet_ConnectNotify_Callback = void (*)(KSvg__ImageSet*, QMetaMethod*);
    using KSvg__ImageSet_DisconnectNotify_Callback = void (*)(KSvg__ImageSet*, QMetaMethod*);
    using KSvg::ImageSet::isSignalConnected;
    using KSvg::ImageSet::receivers;
    using KSvg::ImageSet::sender;
    using KSvg::ImageSet::senderSignalIndex;

    // Instance callback storage
    KSvg__ImageSet_MetaObject_Callback ksvg__imageset_metaobject_callback = nullptr;
    KSvg__ImageSet_Metacast_Callback ksvg__imageset_metacast_callback = nullptr;
    KSvg__ImageSet_Metacall_Callback ksvg__imageset_metacall_callback = nullptr;
    KSvg__ImageSet_Event_Callback ksvg__imageset_event_callback = nullptr;
    KSvg__ImageSet_EventFilter_Callback ksvg__imageset_eventfilter_callback = nullptr;
    KSvg__ImageSet_TimerEvent_Callback ksvg__imageset_timerevent_callback = nullptr;
    KSvg__ImageSet_ChildEvent_Callback ksvg__imageset_childevent_callback = nullptr;
    KSvg__ImageSet_CustomEvent_Callback ksvg__imageset_customevent_callback = nullptr;
    KSvg__ImageSet_ConnectNotify_Callback ksvg__imageset_connectnotify_callback = nullptr;
    KSvg__ImageSet_DisconnectNotify_Callback ksvg__imageset_disconnectnotify_callback = nullptr;

    // Access struct
    struct Base : KSvg::ImageSet {
        using KSvg::ImageSet::childEvent;
        using KSvg::ImageSet::connectNotify;
        using KSvg::ImageSet::customEvent;
        using KSvg::ImageSet::disconnectNotify;
        using KSvg::ImageSet::timerEvent;
    };

    VirtualKSvgImageSet() : KSvg::ImageSet() {};
    VirtualKSvgImageSet(const QString& imageSetName) : KSvg::ImageSet(imageSetName) {};
    VirtualKSvgImageSet(QObject* parent) : KSvg::ImageSet(parent) {};
    VirtualKSvgImageSet(const QString& imageSetName, const QString& basePath) : KSvg::ImageSet(imageSetName, basePath) {};
    VirtualKSvgImageSet(const QString& imageSetName, const QString& basePath, QObject* parent) : KSvg::ImageSet(imageSetName, basePath, parent) {};

    // Virtual method for C ABI access and custom callback
    virtual const QMetaObject* metaObject() const override {
        if (ksvg__imageset_metaobject_callback) {
            QMetaObject* callback_ret = ksvg__imageset_metaobject_callback(this);
            return callback_ret;
        }
        return KSvg__ImageSet::metaObject();
    }

    // Virtual method for C ABI access and custom callback
    virtual void* qt_metacast(const char* param1) override {
        if (ksvg__imageset_metacast_callback) {
            const char* cbval1 = (const char*)param1;
            void* callback_ret = ksvg__imageset_metacast_callback(this, cbval1);
            return callback_ret;
        }
        return KSvg__ImageSet::qt_metacast(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (ksvg__imageset_metacall_callback) {
            int cbval1 = static_cast<int>(param1);
            int cbval2 = param2;
            void** cbval3 = param3;
            int callback_ret = ksvg__imageset_metacall_callback(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        }
        return KSvg__ImageSet::qt_metacall(param1, param2, param3);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* event) override {
        if (ksvg__imageset_event_callback) {
            QEvent* cbval1 = event;
            bool callback_ret = ksvg__imageset_event_callback(this, cbval1);
            return callback_ret;
        }
        return KSvg__ImageSet::event(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* watched, QEvent* event) override {
        if (ksvg__imageset_eventfilter_callback) {
            QObject* cbval1 = watched;
            QEvent* cbval2 = event;
            bool callback_ret = ksvg__imageset_eventfilter_callback(this, cbval1, cbval2);
            return callback_ret;
        }
        return KSvg__ImageSet::eventFilter(watched, event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (ksvg__imageset_timerevent_callback) {
            QTimerEvent* cbval1 = event;
            ksvg__imageset_timerevent_callback(this, cbval1);
            return;
        }
        KSvg__ImageSet::timerEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (ksvg__imageset_childevent_callback) {
            QChildEvent* cbval1 = event;
            ksvg__imageset_childevent_callback(this, cbval1);
            return;
        }
        KSvg__ImageSet::childEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (ksvg__imageset_customevent_callback) {
            QEvent* cbval1 = event;
            ksvg__imageset_customevent_callback(this, cbval1);
            return;
        }
        KSvg__ImageSet::customEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (ksvg__imageset_connectnotify_callback) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            ksvg__imageset_connectnotify_callback(this, cbval1);
            return;
        }
        KSvg__ImageSet::connectNotify(signal);
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (ksvg__imageset_disconnectnotify_callback) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            ksvg__imageset_disconnectnotify_callback(this, cbval1);
            return;
        }
        KSvg__ImageSet::disconnectNotify(signal);
    }

    // Friend functions
    friend void KSvg__ImageSet_SuperTimerEvent(KSvg::ImageSet* self, QTimerEvent* event);
    friend void KSvg__ImageSet_SuperChildEvent(KSvg::ImageSet* self, QChildEvent* event);
    friend void KSvg__ImageSet_SuperCustomEvent(KSvg::ImageSet* self, QEvent* event);
    friend void KSvg__ImageSet_SuperConnectNotify(KSvg::ImageSet* self, const QMetaMethod* signal);
    friend void KSvg__ImageSet_SuperDisconnectNotify(KSvg::ImageSet* self, const QMetaMethod* signal);
};

#endif
