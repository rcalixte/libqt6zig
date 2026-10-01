#pragma once
#ifndef PDF_LIBQPDFPAGENAVIGATOR_HXX
#define PDF_LIBQPDFPAGENAVIGATOR_HXX

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

// This class is a subclass of QPdfPageNavigator
class VirtualQPdfPageNavigator final : public QPdfPageNavigator {
  public:
    // Virtual class public types (including callbacks and access types)
    using QPdfPageNavigator_MetaObject_Callback = QMetaObject* (*)(const QPdfPageNavigator*);
    using QPdfPageNavigator_Metacast_Callback = void* (*)(QPdfPageNavigator*, const char*);
    using QPdfPageNavigator_Metacall_Callback = int (*)(QPdfPageNavigator*, int, int, void**);
    using QPdfPageNavigator_Event_Callback = bool (*)(QPdfPageNavigator*, QEvent*);
    using QPdfPageNavigator_EventFilter_Callback = bool (*)(QPdfPageNavigator*, QObject*, QEvent*);
    using QPdfPageNavigator_TimerEvent_Callback = void (*)(QPdfPageNavigator*, QTimerEvent*);
    using QPdfPageNavigator_ChildEvent_Callback = void (*)(QPdfPageNavigator*, QChildEvent*);
    using QPdfPageNavigator_CustomEvent_Callback = void (*)(QPdfPageNavigator*, QEvent*);
    using QPdfPageNavigator_ConnectNotify_Callback = void (*)(QPdfPageNavigator*, QMetaMethod*);
    using QPdfPageNavigator_DisconnectNotify_Callback = void (*)(QPdfPageNavigator*, QMetaMethod*);
    using QPdfPageNavigator::currentLink;
    using QPdfPageNavigator::isSignalConnected;
    using QPdfPageNavigator::receivers;
    using QPdfPageNavigator::sender;
    using QPdfPageNavigator::senderSignalIndex;

    // Instance callback storage
    QPdfPageNavigator_MetaObject_Callback qpdfpagenavigator_metaobject_callback = nullptr;
    QPdfPageNavigator_Metacast_Callback qpdfpagenavigator_metacast_callback = nullptr;
    QPdfPageNavigator_Metacall_Callback qpdfpagenavigator_metacall_callback = nullptr;
    QPdfPageNavigator_Event_Callback qpdfpagenavigator_event_callback = nullptr;
    QPdfPageNavigator_EventFilter_Callback qpdfpagenavigator_eventfilter_callback = nullptr;
    QPdfPageNavigator_TimerEvent_Callback qpdfpagenavigator_timerevent_callback = nullptr;
    QPdfPageNavigator_ChildEvent_Callback qpdfpagenavigator_childevent_callback = nullptr;
    QPdfPageNavigator_CustomEvent_Callback qpdfpagenavigator_customevent_callback = nullptr;
    QPdfPageNavigator_ConnectNotify_Callback qpdfpagenavigator_connectnotify_callback = nullptr;
    QPdfPageNavigator_DisconnectNotify_Callback qpdfpagenavigator_disconnectnotify_callback = nullptr;

    // Access struct
    struct Base : QPdfPageNavigator {
        using QPdfPageNavigator::childEvent;
        using QPdfPageNavigator::connectNotify;
        using QPdfPageNavigator::customEvent;
        using QPdfPageNavigator::disconnectNotify;
        using QPdfPageNavigator::timerEvent;
    };

    VirtualQPdfPageNavigator() : QPdfPageNavigator() {};
    VirtualQPdfPageNavigator(QObject* parent) : QPdfPageNavigator(parent) {};

    // Virtual method for C ABI access and custom callback
    virtual const QMetaObject* metaObject() const override {
        if (qpdfpagenavigator_metaobject_callback) {
            QMetaObject* callback_ret = qpdfpagenavigator_metaobject_callback(this);
            return callback_ret;
        }
        return QPdfPageNavigator::metaObject();
    }

    // Virtual method for C ABI access and custom callback
    virtual void* qt_metacast(const char* param1) override {
        if (qpdfpagenavigator_metacast_callback) {
            const char* cbval1 = (const char*)param1;
            void* callback_ret = qpdfpagenavigator_metacast_callback(this, cbval1);
            return callback_ret;
        }
        return QPdfPageNavigator::qt_metacast(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (qpdfpagenavigator_metacall_callback) {
            int cbval1 = static_cast<int>(param1);
            int cbval2 = param2;
            void** cbval3 = param3;
            int callback_ret = qpdfpagenavigator_metacall_callback(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        }
        return QPdfPageNavigator::qt_metacall(param1, param2, param3);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* event) override {
        if (qpdfpagenavigator_event_callback) {
            QEvent* cbval1 = event;
            bool callback_ret = qpdfpagenavigator_event_callback(this, cbval1);
            return callback_ret;
        }
        return QPdfPageNavigator::event(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* watched, QEvent* event) override {
        if (qpdfpagenavigator_eventfilter_callback) {
            QObject* cbval1 = watched;
            QEvent* cbval2 = event;
            bool callback_ret = qpdfpagenavigator_eventfilter_callback(this, cbval1, cbval2);
            return callback_ret;
        }
        return QPdfPageNavigator::eventFilter(watched, event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (qpdfpagenavigator_timerevent_callback) {
            QTimerEvent* cbval1 = event;
            qpdfpagenavigator_timerevent_callback(this, cbval1);
            return;
        }
        QPdfPageNavigator::timerEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (qpdfpagenavigator_childevent_callback) {
            QChildEvent* cbval1 = event;
            qpdfpagenavigator_childevent_callback(this, cbval1);
            return;
        }
        QPdfPageNavigator::childEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (qpdfpagenavigator_customevent_callback) {
            QEvent* cbval1 = event;
            qpdfpagenavigator_customevent_callback(this, cbval1);
            return;
        }
        QPdfPageNavigator::customEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (qpdfpagenavigator_connectnotify_callback) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            qpdfpagenavigator_connectnotify_callback(this, cbval1);
            return;
        }
        QPdfPageNavigator::connectNotify(signal);
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (qpdfpagenavigator_disconnectnotify_callback) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            qpdfpagenavigator_disconnectnotify_callback(this, cbval1);
            return;
        }
        QPdfPageNavigator::disconnectNotify(signal);
    }

    // Friend functions
    friend void QPdfPageNavigator_SuperTimerEvent(QPdfPageNavigator* self, QTimerEvent* event);
    friend void QPdfPageNavigator_SuperChildEvent(QPdfPageNavigator* self, QChildEvent* event);
    friend void QPdfPageNavigator_SuperCustomEvent(QPdfPageNavigator* self, QEvent* event);
    friend void QPdfPageNavigator_SuperConnectNotify(QPdfPageNavigator* self, const QMetaMethod* signal);
    friend void QPdfPageNavigator_SuperDisconnectNotify(QPdfPageNavigator* self, const QMetaMethod* signal);
};

#endif
