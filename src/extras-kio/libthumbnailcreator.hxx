#pragma once
#ifndef EXTRAS_KIO_LIBTHUMBNAILCREATOR_HXX
#define EXTRAS_KIO_LIBTHUMBNAILCREATOR_HXX

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

// This class is a subclass of KIO::ThumbnailCreator
class VirtualKIOThumbnailCreator : public KIO::ThumbnailCreator {
  public:
    // Virtual class public types (including callbacks and access types)
    using KIO__ThumbnailCreator_MetaObject_Callback = QMetaObject* (*)(const KIO__ThumbnailCreator*);
    using KIO__ThumbnailCreator_Metacast_Callback = void* (*)(KIO__ThumbnailCreator*, const char*);
    using KIO__ThumbnailCreator_Metacall_Callback = int (*)(KIO__ThumbnailCreator*, int, int, void**);
    using KIO__ThumbnailCreator_Create_Callback = KIO__ThumbnailResult* (*)(KIO__ThumbnailCreator*, KIO__ThumbnailRequest*);
    using KIO__ThumbnailCreator_Event_Callback = bool (*)(KIO__ThumbnailCreator*, QEvent*);
    using KIO__ThumbnailCreator_EventFilter_Callback = bool (*)(KIO__ThumbnailCreator*, QObject*, QEvent*);
    using KIO__ThumbnailCreator_TimerEvent_Callback = void (*)(KIO__ThumbnailCreator*, QTimerEvent*);
    using KIO__ThumbnailCreator_ChildEvent_Callback = void (*)(KIO__ThumbnailCreator*, QChildEvent*);
    using KIO__ThumbnailCreator_CustomEvent_Callback = void (*)(KIO__ThumbnailCreator*, QEvent*);
    using KIO__ThumbnailCreator_ConnectNotify_Callback = void (*)(KIO__ThumbnailCreator*, QMetaMethod*);
    using KIO__ThumbnailCreator_DisconnectNotify_Callback = void (*)(KIO__ThumbnailCreator*, QMetaMethod*);
    using KIO::ThumbnailCreator::isSignalConnected;
    using KIO::ThumbnailCreator::receivers;
    using KIO::ThumbnailCreator::sender;
    using KIO::ThumbnailCreator::senderSignalIndex;

    // Instance callback storage
    KIO__ThumbnailCreator_MetaObject_Callback kio__thumbnailcreator_metaobject_callback = nullptr;
    KIO__ThumbnailCreator_Metacast_Callback kio__thumbnailcreator_metacast_callback = nullptr;
    KIO__ThumbnailCreator_Metacall_Callback kio__thumbnailcreator_metacall_callback = nullptr;
    KIO__ThumbnailCreator_Create_Callback kio__thumbnailcreator_create_callback = nullptr;
    KIO__ThumbnailCreator_Event_Callback kio__thumbnailcreator_event_callback = nullptr;
    KIO__ThumbnailCreator_EventFilter_Callback kio__thumbnailcreator_eventfilter_callback = nullptr;
    KIO__ThumbnailCreator_TimerEvent_Callback kio__thumbnailcreator_timerevent_callback = nullptr;
    KIO__ThumbnailCreator_ChildEvent_Callback kio__thumbnailcreator_childevent_callback = nullptr;
    KIO__ThumbnailCreator_CustomEvent_Callback kio__thumbnailcreator_customevent_callback = nullptr;
    KIO__ThumbnailCreator_ConnectNotify_Callback kio__thumbnailcreator_connectnotify_callback = nullptr;
    KIO__ThumbnailCreator_DisconnectNotify_Callback kio__thumbnailcreator_disconnectnotify_callback = nullptr;

    // Access struct
    struct Base : KIO::ThumbnailCreator {
        using KIO::ThumbnailCreator::childEvent;
        using KIO::ThumbnailCreator::connectNotify;
        using KIO::ThumbnailCreator::customEvent;
        using KIO::ThumbnailCreator::disconnectNotify;
        using KIO::ThumbnailCreator::timerEvent;
    };

    VirtualKIOThumbnailCreator(QObject* parent, const QList<QVariant>& args) : KIO::ThumbnailCreator(parent, args) {};

    // Virtual method for C ABI access and custom callback
    virtual const QMetaObject* metaObject() const override {
        if (kio__thumbnailcreator_metaobject_callback) {
            QMetaObject* callback_ret = kio__thumbnailcreator_metaobject_callback(this);
            return callback_ret;
        }
        return KIO__ThumbnailCreator::metaObject();
    }

    // Virtual method for C ABI access and custom callback
    virtual void* qt_metacast(const char* param1) override {
        if (kio__thumbnailcreator_metacast_callback) {
            const char* cbval1 = (const char*)param1;
            void* callback_ret = kio__thumbnailcreator_metacast_callback(this, cbval1);
            return callback_ret;
        }
        return KIO__ThumbnailCreator::qt_metacast(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (kio__thumbnailcreator_metacall_callback) {
            int cbval1 = static_cast<int>(param1);
            int cbval2 = param2;
            void** cbval3 = param3;
            int callback_ret = kio__thumbnailcreator_metacall_callback(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        }
        return KIO__ThumbnailCreator::qt_metacall(param1, param2, param3);
    }

    // Virtual method for C ABI access and custom callback
    virtual KIO::ThumbnailResult create(const KIO::ThumbnailRequest& request) override {
        if (kio__thumbnailcreator_create_callback) {
            const KIO::ThumbnailRequest& request_ret = request;
            // Cast returned reference into pointer
            KIO__ThumbnailRequest* cbval1 = const_cast<KIO::ThumbnailRequest*>(&request_ret);
            KIO__ThumbnailResult* callback_ret = kio__thumbnailcreator_create_callback(this, cbval1);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        // Pure virtual method
        qFatal("Error: Pure virtual method KIO::ThumbnailCreator::create called without being implemented");
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* event) override {
        if (kio__thumbnailcreator_event_callback) {
            QEvent* cbval1 = event;
            bool callback_ret = kio__thumbnailcreator_event_callback(this, cbval1);
            return callback_ret;
        }
        return KIO__ThumbnailCreator::event(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* watched, QEvent* event) override {
        if (kio__thumbnailcreator_eventfilter_callback) {
            QObject* cbval1 = watched;
            QEvent* cbval2 = event;
            bool callback_ret = kio__thumbnailcreator_eventfilter_callback(this, cbval1, cbval2);
            return callback_ret;
        }
        return KIO__ThumbnailCreator::eventFilter(watched, event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (kio__thumbnailcreator_timerevent_callback) {
            QTimerEvent* cbval1 = event;
            kio__thumbnailcreator_timerevent_callback(this, cbval1);
            return;
        }
        KIO__ThumbnailCreator::timerEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (kio__thumbnailcreator_childevent_callback) {
            QChildEvent* cbval1 = event;
            kio__thumbnailcreator_childevent_callback(this, cbval1);
            return;
        }
        KIO__ThumbnailCreator::childEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (kio__thumbnailcreator_customevent_callback) {
            QEvent* cbval1 = event;
            kio__thumbnailcreator_customevent_callback(this, cbval1);
            return;
        }
        KIO__ThumbnailCreator::customEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (kio__thumbnailcreator_connectnotify_callback) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            kio__thumbnailcreator_connectnotify_callback(this, cbval1);
            return;
        }
        KIO__ThumbnailCreator::connectNotify(signal);
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (kio__thumbnailcreator_disconnectnotify_callback) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            kio__thumbnailcreator_disconnectnotify_callback(this, cbval1);
            return;
        }
        KIO__ThumbnailCreator::disconnectNotify(signal);
    }

    // Friend functions
    friend void KIO__ThumbnailCreator_SuperTimerEvent(KIO::ThumbnailCreator* self, QTimerEvent* event);
    friend void KIO__ThumbnailCreator_SuperChildEvent(KIO::ThumbnailCreator* self, QChildEvent* event);
    friend void KIO__ThumbnailCreator_SuperCustomEvent(KIO::ThumbnailCreator* self, QEvent* event);
    friend void KIO__ThumbnailCreator_SuperConnectNotify(KIO::ThumbnailCreator* self, const QMetaMethod* signal);
    friend void KIO__ThumbnailCreator_SuperDisconnectNotify(KIO::ThumbnailCreator* self, const QMetaMethod* signal);
};

#endif
