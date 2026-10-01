#pragma once
#ifndef WEBSOCKETS_LIBQMASKGENERATOR_HXX
#define WEBSOCKETS_LIBQMASKGENERATOR_HXX

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

// This class is a subclass of QMaskGenerator
class VirtualQMaskGenerator : public QMaskGenerator {
  public:
    // Virtual class public types (including callbacks and access types)
    using QMaskGenerator_Seed_Callback = bool (*)(QMaskGenerator*);
    using QMaskGenerator_NextMask_Callback = unsigned int (*)(QMaskGenerator*);
    using QMaskGenerator_MetaObject_Callback = QMetaObject* (*)(const QMaskGenerator*);
    using QMaskGenerator_Metacast_Callback = void* (*)(QMaskGenerator*, const char*);
    using QMaskGenerator_Metacall_Callback = int (*)(QMaskGenerator*, int, int, void**);
    using QMaskGenerator_Event_Callback = bool (*)(QMaskGenerator*, QEvent*);
    using QMaskGenerator_EventFilter_Callback = bool (*)(QMaskGenerator*, QObject*, QEvent*);
    using QMaskGenerator_TimerEvent_Callback = void (*)(QMaskGenerator*, QTimerEvent*);
    using QMaskGenerator_ChildEvent_Callback = void (*)(QMaskGenerator*, QChildEvent*);
    using QMaskGenerator_CustomEvent_Callback = void (*)(QMaskGenerator*, QEvent*);
    using QMaskGenerator_ConnectNotify_Callback = void (*)(QMaskGenerator*, QMetaMethod*);
    using QMaskGenerator_DisconnectNotify_Callback = void (*)(QMaskGenerator*, QMetaMethod*);
    using QMaskGenerator::isSignalConnected;
    using QMaskGenerator::receivers;
    using QMaskGenerator::sender;
    using QMaskGenerator::senderSignalIndex;

    // Instance callback storage
    QMaskGenerator_Seed_Callback qmaskgenerator_seed_callback = nullptr;
    QMaskGenerator_NextMask_Callback qmaskgenerator_nextmask_callback = nullptr;
    QMaskGenerator_MetaObject_Callback qmaskgenerator_metaobject_callback = nullptr;
    QMaskGenerator_Metacast_Callback qmaskgenerator_metacast_callback = nullptr;
    QMaskGenerator_Metacall_Callback qmaskgenerator_metacall_callback = nullptr;
    QMaskGenerator_Event_Callback qmaskgenerator_event_callback = nullptr;
    QMaskGenerator_EventFilter_Callback qmaskgenerator_eventfilter_callback = nullptr;
    QMaskGenerator_TimerEvent_Callback qmaskgenerator_timerevent_callback = nullptr;
    QMaskGenerator_ChildEvent_Callback qmaskgenerator_childevent_callback = nullptr;
    QMaskGenerator_CustomEvent_Callback qmaskgenerator_customevent_callback = nullptr;
    QMaskGenerator_ConnectNotify_Callback qmaskgenerator_connectnotify_callback = nullptr;
    QMaskGenerator_DisconnectNotify_Callback qmaskgenerator_disconnectnotify_callback = nullptr;

    // Access struct
    struct Base : QMaskGenerator {
        using QMaskGenerator::childEvent;
        using QMaskGenerator::connectNotify;
        using QMaskGenerator::customEvent;
        using QMaskGenerator::disconnectNotify;
        using QMaskGenerator::timerEvent;
    };

    VirtualQMaskGenerator() : QMaskGenerator() {};
    VirtualQMaskGenerator(QObject* parent) : QMaskGenerator(parent) {};

    // Virtual method for C ABI access and custom callback
    virtual bool seed() override {
        if (qmaskgenerator_seed_callback) {
            bool callback_ret = qmaskgenerator_seed_callback(this);
            return callback_ret;
        }
        // Pure virtual method
        qFatal("Error: Pure virtual method QMaskGenerator::seed called without being implemented");
    }

    // Virtual method for C ABI access and custom callback
    virtual quint32 nextMask() override {
        if (qmaskgenerator_nextmask_callback) {
            unsigned int callback_ret = qmaskgenerator_nextmask_callback(this);
            return static_cast<quint32>(callback_ret);
        }
        // Pure virtual method
        qFatal("Error: Pure virtual method QMaskGenerator::nextMask called without being implemented");
    }

    // Virtual method for C ABI access and custom callback
    virtual const QMetaObject* metaObject() const override {
        if (qmaskgenerator_metaobject_callback) {
            QMetaObject* callback_ret = qmaskgenerator_metaobject_callback(this);
            return callback_ret;
        }
        return QMaskGenerator::metaObject();
    }

    // Virtual method for C ABI access and custom callback
    virtual void* qt_metacast(const char* param1) override {
        if (qmaskgenerator_metacast_callback) {
            const char* cbval1 = (const char*)param1;
            void* callback_ret = qmaskgenerator_metacast_callback(this, cbval1);
            return callback_ret;
        }
        return QMaskGenerator::qt_metacast(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (qmaskgenerator_metacall_callback) {
            int cbval1 = static_cast<int>(param1);
            int cbval2 = param2;
            void** cbval3 = param3;
            int callback_ret = qmaskgenerator_metacall_callback(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        }
        return QMaskGenerator::qt_metacall(param1, param2, param3);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* event) override {
        if (qmaskgenerator_event_callback) {
            QEvent* cbval1 = event;
            bool callback_ret = qmaskgenerator_event_callback(this, cbval1);
            return callback_ret;
        }
        return QMaskGenerator::event(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* watched, QEvent* event) override {
        if (qmaskgenerator_eventfilter_callback) {
            QObject* cbval1 = watched;
            QEvent* cbval2 = event;
            bool callback_ret = qmaskgenerator_eventfilter_callback(this, cbval1, cbval2);
            return callback_ret;
        }
        return QMaskGenerator::eventFilter(watched, event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (qmaskgenerator_timerevent_callback) {
            QTimerEvent* cbval1 = event;
            qmaskgenerator_timerevent_callback(this, cbval1);
            return;
        }
        QMaskGenerator::timerEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (qmaskgenerator_childevent_callback) {
            QChildEvent* cbval1 = event;
            qmaskgenerator_childevent_callback(this, cbval1);
            return;
        }
        QMaskGenerator::childEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (qmaskgenerator_customevent_callback) {
            QEvent* cbval1 = event;
            qmaskgenerator_customevent_callback(this, cbval1);
            return;
        }
        QMaskGenerator::customEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (qmaskgenerator_connectnotify_callback) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            qmaskgenerator_connectnotify_callback(this, cbval1);
            return;
        }
        QMaskGenerator::connectNotify(signal);
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (qmaskgenerator_disconnectnotify_callback) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            qmaskgenerator_disconnectnotify_callback(this, cbval1);
            return;
        }
        QMaskGenerator::disconnectNotify(signal);
    }

    // Friend functions
    friend void QMaskGenerator_SuperTimerEvent(QMaskGenerator* self, QTimerEvent* event);
    friend void QMaskGenerator_SuperChildEvent(QMaskGenerator* self, QChildEvent* event);
    friend void QMaskGenerator_SuperCustomEvent(QMaskGenerator* self, QEvent* event);
    friend void QMaskGenerator_SuperConnectNotify(QMaskGenerator* self, const QMetaMethod* signal);
    friend void QMaskGenerator_SuperDisconnectNotify(QMaskGenerator* self, const QMetaMethod* signal);
};

#endif
