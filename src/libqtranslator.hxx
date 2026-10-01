#pragma once
#ifndef LIBQTRANSLATOR_HXX
#define LIBQTRANSLATOR_HXX

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"

// This class is a subclass of QTranslator
class VirtualQTranslator final : public QTranslator {
  public:
    // Virtual class public types (including callbacks and access types)
    using QTranslator_MetaObject_Callback = QMetaObject* (*)(const QTranslator*);
    using QTranslator_Metacast_Callback = void* (*)(QTranslator*, const char*);
    using QTranslator_Metacall_Callback = int (*)(QTranslator*, int, int, void**);
    using QTranslator_Translate_Callback = const char* (*)(const QTranslator*, const char*, const char*, const char*, int);
    using QTranslator_IsEmpty_Callback = bool (*)(const QTranslator*);
    using QTranslator_Event_Callback = bool (*)(QTranslator*, QEvent*);
    using QTranslator_EventFilter_Callback = bool (*)(QTranslator*, QObject*, QEvent*);
    using QTranslator_TimerEvent_Callback = void (*)(QTranslator*, QTimerEvent*);
    using QTranslator_ChildEvent_Callback = void (*)(QTranslator*, QChildEvent*);
    using QTranslator_CustomEvent_Callback = void (*)(QTranslator*, QEvent*);
    using QTranslator_ConnectNotify_Callback = void (*)(QTranslator*, QMetaMethod*);
    using QTranslator_DisconnectNotify_Callback = void (*)(QTranslator*, QMetaMethod*);
    using QTranslator::isSignalConnected;
    using QTranslator::receivers;
    using QTranslator::sender;
    using QTranslator::senderSignalIndex;

    // Instance callback storage
    QTranslator_MetaObject_Callback qtranslator_metaobject_callback = nullptr;
    QTranslator_Metacast_Callback qtranslator_metacast_callback = nullptr;
    QTranslator_Metacall_Callback qtranslator_metacall_callback = nullptr;
    QTranslator_Translate_Callback qtranslator_translate_callback = nullptr;
    QTranslator_IsEmpty_Callback qtranslator_isempty_callback = nullptr;
    QTranslator_Event_Callback qtranslator_event_callback = nullptr;
    QTranslator_EventFilter_Callback qtranslator_eventfilter_callback = nullptr;
    QTranslator_TimerEvent_Callback qtranslator_timerevent_callback = nullptr;
    QTranslator_ChildEvent_Callback qtranslator_childevent_callback = nullptr;
    QTranslator_CustomEvent_Callback qtranslator_customevent_callback = nullptr;
    QTranslator_ConnectNotify_Callback qtranslator_connectnotify_callback = nullptr;
    QTranslator_DisconnectNotify_Callback qtranslator_disconnectnotify_callback = nullptr;

    // Access struct
    struct Base : QTranslator {
        using QTranslator::childEvent;
        using QTranslator::connectNotify;
        using QTranslator::customEvent;
        using QTranslator::disconnectNotify;
        using QTranslator::timerEvent;
    };

    VirtualQTranslator() : QTranslator() {};
    VirtualQTranslator(QObject* parent) : QTranslator(parent) {};

    // Virtual method for C ABI access and custom callback
    virtual const QMetaObject* metaObject() const override {
        if (qtranslator_metaobject_callback) {
            QMetaObject* callback_ret = qtranslator_metaobject_callback(this);
            return callback_ret;
        }
        return QTranslator::metaObject();
    }

    // Virtual method for C ABI access and custom callback
    virtual void* qt_metacast(const char* param1) override {
        if (qtranslator_metacast_callback) {
            const char* cbval1 = (const char*)param1;
            void* callback_ret = qtranslator_metacast_callback(this, cbval1);
            return callback_ret;
        }
        return QTranslator::qt_metacast(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (qtranslator_metacall_callback) {
            int cbval1 = static_cast<int>(param1);
            int cbval2 = param2;
            void** cbval3 = param3;
            int callback_ret = qtranslator_metacall_callback(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        }
        return QTranslator::qt_metacall(param1, param2, param3);
    }

    // Virtual method for C ABI access and custom callback
    virtual QString translate(const char* context, const char* sourceText, const char* disambiguation, int n) const override {
        if (qtranslator_translate_callback) {
            const char* cbval1 = (const char*)context;
            const char* cbval2 = (const char*)sourceText;
            const char* cbval3 = (const char*)disambiguation;
            int cbval4 = n;
            const char* callback_ret = qtranslator_translate_callback(this, cbval1, cbval2, cbval3, cbval4);
            QString callback_ret_QString = QString::fromUtf8(callback_ret);
            return callback_ret_QString;
        }
        return QTranslator::translate(context, sourceText, disambiguation, n);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool isEmpty() const override {
        if (qtranslator_isempty_callback) {
            bool callback_ret = qtranslator_isempty_callback(this);
            return callback_ret;
        }
        return QTranslator::isEmpty();
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* event) override {
        if (qtranslator_event_callback) {
            QEvent* cbval1 = event;
            bool callback_ret = qtranslator_event_callback(this, cbval1);
            return callback_ret;
        }
        return QTranslator::event(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* watched, QEvent* event) override {
        if (qtranslator_eventfilter_callback) {
            QObject* cbval1 = watched;
            QEvent* cbval2 = event;
            bool callback_ret = qtranslator_eventfilter_callback(this, cbval1, cbval2);
            return callback_ret;
        }
        return QTranslator::eventFilter(watched, event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (qtranslator_timerevent_callback) {
            QTimerEvent* cbval1 = event;
            qtranslator_timerevent_callback(this, cbval1);
            return;
        }
        QTranslator::timerEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (qtranslator_childevent_callback) {
            QChildEvent* cbval1 = event;
            qtranslator_childevent_callback(this, cbval1);
            return;
        }
        QTranslator::childEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (qtranslator_customevent_callback) {
            QEvent* cbval1 = event;
            qtranslator_customevent_callback(this, cbval1);
            return;
        }
        QTranslator::customEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (qtranslator_connectnotify_callback) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            qtranslator_connectnotify_callback(this, cbval1);
            return;
        }
        QTranslator::connectNotify(signal);
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (qtranslator_disconnectnotify_callback) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            qtranslator_disconnectnotify_callback(this, cbval1);
            return;
        }
        QTranslator::disconnectNotify(signal);
    }

    // Friend functions
    friend void QTranslator_SuperTimerEvent(QTranslator* self, QTimerEvent* event);
    friend void QTranslator_SuperChildEvent(QTranslator* self, QChildEvent* event);
    friend void QTranslator_SuperCustomEvent(QTranslator* self, QEvent* event);
    friend void QTranslator_SuperConnectNotify(QTranslator* self, const QMetaMethod* signal);
    friend void QTranslator_SuperDisconnectNotify(QTranslator* self, const QMetaMethod* signal);
};

#endif
