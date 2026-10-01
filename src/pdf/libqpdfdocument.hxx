#pragma once
#ifndef PDF_LIBQPDFDOCUMENT_HXX
#define PDF_LIBQPDFDOCUMENT_HXX

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

// This class is a subclass of QPdfDocument
class VirtualQPdfDocument final : public QPdfDocument {
  public:
    // Virtual class public types (including callbacks and access types)
    using QPdfDocument_MetaObject_Callback = QMetaObject* (*)(const QPdfDocument*);
    using QPdfDocument_Metacast_Callback = void* (*)(QPdfDocument*, const char*);
    using QPdfDocument_Metacall_Callback = int (*)(QPdfDocument*, int, int, void**);
    using QPdfDocument_Event_Callback = bool (*)(QPdfDocument*, QEvent*);
    using QPdfDocument_EventFilter_Callback = bool (*)(QPdfDocument*, QObject*, QEvent*);
    using QPdfDocument_TimerEvent_Callback = void (*)(QPdfDocument*, QTimerEvent*);
    using QPdfDocument_ChildEvent_Callback = void (*)(QPdfDocument*, QChildEvent*);
    using QPdfDocument_CustomEvent_Callback = void (*)(QPdfDocument*, QEvent*);
    using QPdfDocument_ConnectNotify_Callback = void (*)(QPdfDocument*, QMetaMethod*);
    using QPdfDocument_DisconnectNotify_Callback = void (*)(QPdfDocument*, QMetaMethod*);
    using QPdfDocument::isSignalConnected;
    using QPdfDocument::receivers;
    using QPdfDocument::sender;
    using QPdfDocument::senderSignalIndex;

    // Instance callback storage
    QPdfDocument_MetaObject_Callback qpdfdocument_metaobject_callback = nullptr;
    QPdfDocument_Metacast_Callback qpdfdocument_metacast_callback = nullptr;
    QPdfDocument_Metacall_Callback qpdfdocument_metacall_callback = nullptr;
    QPdfDocument_Event_Callback qpdfdocument_event_callback = nullptr;
    QPdfDocument_EventFilter_Callback qpdfdocument_eventfilter_callback = nullptr;
    QPdfDocument_TimerEvent_Callback qpdfdocument_timerevent_callback = nullptr;
    QPdfDocument_ChildEvent_Callback qpdfdocument_childevent_callback = nullptr;
    QPdfDocument_CustomEvent_Callback qpdfdocument_customevent_callback = nullptr;
    QPdfDocument_ConnectNotify_Callback qpdfdocument_connectnotify_callback = nullptr;
    QPdfDocument_DisconnectNotify_Callback qpdfdocument_disconnectnotify_callback = nullptr;

    // Access struct
    struct Base : QPdfDocument {
        using QPdfDocument::childEvent;
        using QPdfDocument::connectNotify;
        using QPdfDocument::customEvent;
        using QPdfDocument::disconnectNotify;
        using QPdfDocument::timerEvent;
    };

    VirtualQPdfDocument() : QPdfDocument() {};
    VirtualQPdfDocument(QObject* parent) : QPdfDocument(parent) {};

    // Virtual method for C ABI access and custom callback
    virtual const QMetaObject* metaObject() const override {
        if (qpdfdocument_metaobject_callback) {
            QMetaObject* callback_ret = qpdfdocument_metaobject_callback(this);
            return callback_ret;
        }
        return QPdfDocument::metaObject();
    }

    // Virtual method for C ABI access and custom callback
    virtual void* qt_metacast(const char* param1) override {
        if (qpdfdocument_metacast_callback) {
            const char* cbval1 = (const char*)param1;
            void* callback_ret = qpdfdocument_metacast_callback(this, cbval1);
            return callback_ret;
        }
        return QPdfDocument::qt_metacast(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (qpdfdocument_metacall_callback) {
            int cbval1 = static_cast<int>(param1);
            int cbval2 = param2;
            void** cbval3 = param3;
            int callback_ret = qpdfdocument_metacall_callback(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        }
        return QPdfDocument::qt_metacall(param1, param2, param3);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* event) override {
        if (qpdfdocument_event_callback) {
            QEvent* cbval1 = event;
            bool callback_ret = qpdfdocument_event_callback(this, cbval1);
            return callback_ret;
        }
        return QPdfDocument::event(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* watched, QEvent* event) override {
        if (qpdfdocument_eventfilter_callback) {
            QObject* cbval1 = watched;
            QEvent* cbval2 = event;
            bool callback_ret = qpdfdocument_eventfilter_callback(this, cbval1, cbval2);
            return callback_ret;
        }
        return QPdfDocument::eventFilter(watched, event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (qpdfdocument_timerevent_callback) {
            QTimerEvent* cbval1 = event;
            qpdfdocument_timerevent_callback(this, cbval1);
            return;
        }
        QPdfDocument::timerEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (qpdfdocument_childevent_callback) {
            QChildEvent* cbval1 = event;
            qpdfdocument_childevent_callback(this, cbval1);
            return;
        }
        QPdfDocument::childEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (qpdfdocument_customevent_callback) {
            QEvent* cbval1 = event;
            qpdfdocument_customevent_callback(this, cbval1);
            return;
        }
        QPdfDocument::customEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (qpdfdocument_connectnotify_callback) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            qpdfdocument_connectnotify_callback(this, cbval1);
            return;
        }
        QPdfDocument::connectNotify(signal);
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (qpdfdocument_disconnectnotify_callback) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            qpdfdocument_disconnectnotify_callback(this, cbval1);
            return;
        }
        QPdfDocument::disconnectNotify(signal);
    }

    // Friend functions
    friend void QPdfDocument_SuperTimerEvent(QPdfDocument* self, QTimerEvent* event);
    friend void QPdfDocument_SuperChildEvent(QPdfDocument* self, QChildEvent* event);
    friend void QPdfDocument_SuperCustomEvent(QPdfDocument* self, QEvent* event);
    friend void QPdfDocument_SuperConnectNotify(QPdfDocument* self, const QMetaMethod* signal);
    friend void QPdfDocument_SuperDisconnectNotify(QPdfDocument* self, const QMetaMethod* signal);
};

#endif
