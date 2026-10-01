#pragma once
#ifndef DESIGNER_LIBABSTRACTFORMEDITOR_HXX
#define DESIGNER_LIBABSTRACTFORMEDITOR_HXX

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

// This class is a subclass of QDesignerFormEditorInterface
class VirtualQDesignerFormEditorInterface final : public QDesignerFormEditorInterface {
  public:
    // Virtual class public types (including callbacks and access types)
    using QDesignerFormEditorInterface_MetaObject_Callback = QMetaObject* (*)(const QDesignerFormEditorInterface*);
    using QDesignerFormEditorInterface_Metacast_Callback = void* (*)(QDesignerFormEditorInterface*, const char*);
    using QDesignerFormEditorInterface_Metacall_Callback = int (*)(QDesignerFormEditorInterface*, int, int, void**);
    using QDesignerFormEditorInterface_Event_Callback = bool (*)(QDesignerFormEditorInterface*, QEvent*);
    using QDesignerFormEditorInterface_EventFilter_Callback = bool (*)(QDesignerFormEditorInterface*, QObject*, QEvent*);
    using QDesignerFormEditorInterface_TimerEvent_Callback = void (*)(QDesignerFormEditorInterface*, QTimerEvent*);
    using QDesignerFormEditorInterface_ChildEvent_Callback = void (*)(QDesignerFormEditorInterface*, QChildEvent*);
    using QDesignerFormEditorInterface_CustomEvent_Callback = void (*)(QDesignerFormEditorInterface*, QEvent*);
    using QDesignerFormEditorInterface_ConnectNotify_Callback = void (*)(QDesignerFormEditorInterface*, QMetaMethod*);
    using QDesignerFormEditorInterface_DisconnectNotify_Callback = void (*)(QDesignerFormEditorInterface*, QMetaMethod*);
    using QDesignerFormEditorInterface::isSignalConnected;
    using QDesignerFormEditorInterface::receivers;
    using QDesignerFormEditorInterface::sender;
    using QDesignerFormEditorInterface::senderSignalIndex;
    using QDesignerFormEditorInterface::setExtensionManager;
    using QDesignerFormEditorInterface::setFormManager;
    using QDesignerFormEditorInterface::setMetaDataBase;
    using QDesignerFormEditorInterface::setPromotion;
    using QDesignerFormEditorInterface::setWidgetDataBase;
    using QDesignerFormEditorInterface::setWidgetFactory;

    // Instance callback storage
    QDesignerFormEditorInterface_MetaObject_Callback qdesignerformeditorinterface_metaobject_callback = nullptr;
    QDesignerFormEditorInterface_Metacast_Callback qdesignerformeditorinterface_metacast_callback = nullptr;
    QDesignerFormEditorInterface_Metacall_Callback qdesignerformeditorinterface_metacall_callback = nullptr;
    QDesignerFormEditorInterface_Event_Callback qdesignerformeditorinterface_event_callback = nullptr;
    QDesignerFormEditorInterface_EventFilter_Callback qdesignerformeditorinterface_eventfilter_callback = nullptr;
    QDesignerFormEditorInterface_TimerEvent_Callback qdesignerformeditorinterface_timerevent_callback = nullptr;
    QDesignerFormEditorInterface_ChildEvent_Callback qdesignerformeditorinterface_childevent_callback = nullptr;
    QDesignerFormEditorInterface_CustomEvent_Callback qdesignerformeditorinterface_customevent_callback = nullptr;
    QDesignerFormEditorInterface_ConnectNotify_Callback qdesignerformeditorinterface_connectnotify_callback = nullptr;
    QDesignerFormEditorInterface_DisconnectNotify_Callback qdesignerformeditorinterface_disconnectnotify_callback = nullptr;

    // Access struct
    struct Base : QDesignerFormEditorInterface {
        using QDesignerFormEditorInterface::childEvent;
        using QDesignerFormEditorInterface::connectNotify;
        using QDesignerFormEditorInterface::customEvent;
        using QDesignerFormEditorInterface::disconnectNotify;
        using QDesignerFormEditorInterface::timerEvent;
    };

    VirtualQDesignerFormEditorInterface() : QDesignerFormEditorInterface() {};
    VirtualQDesignerFormEditorInterface(QObject* parent) : QDesignerFormEditorInterface(parent) {};

    // Virtual method for C ABI access and custom callback
    virtual const QMetaObject* metaObject() const override {
        if (qdesignerformeditorinterface_metaobject_callback) {
            QMetaObject* callback_ret = qdesignerformeditorinterface_metaobject_callback(this);
            return callback_ret;
        }
        return QDesignerFormEditorInterface::metaObject();
    }

    // Virtual method for C ABI access and custom callback
    virtual void* qt_metacast(const char* param1) override {
        if (qdesignerformeditorinterface_metacast_callback) {
            const char* cbval1 = (const char*)param1;
            void* callback_ret = qdesignerformeditorinterface_metacast_callback(this, cbval1);
            return callback_ret;
        }
        return QDesignerFormEditorInterface::qt_metacast(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (qdesignerformeditorinterface_metacall_callback) {
            int cbval1 = static_cast<int>(param1);
            int cbval2 = param2;
            void** cbval3 = param3;
            int callback_ret = qdesignerformeditorinterface_metacall_callback(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        }
        return QDesignerFormEditorInterface::qt_metacall(param1, param2, param3);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* event) override {
        if (qdesignerformeditorinterface_event_callback) {
            QEvent* cbval1 = event;
            bool callback_ret = qdesignerformeditorinterface_event_callback(this, cbval1);
            return callback_ret;
        }
        return QDesignerFormEditorInterface::event(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* watched, QEvent* event) override {
        if (qdesignerformeditorinterface_eventfilter_callback) {
            QObject* cbval1 = watched;
            QEvent* cbval2 = event;
            bool callback_ret = qdesignerformeditorinterface_eventfilter_callback(this, cbval1, cbval2);
            return callback_ret;
        }
        return QDesignerFormEditorInterface::eventFilter(watched, event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (qdesignerformeditorinterface_timerevent_callback) {
            QTimerEvent* cbval1 = event;
            qdesignerformeditorinterface_timerevent_callback(this, cbval1);
            return;
        }
        QDesignerFormEditorInterface::timerEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (qdesignerformeditorinterface_childevent_callback) {
            QChildEvent* cbval1 = event;
            qdesignerformeditorinterface_childevent_callback(this, cbval1);
            return;
        }
        QDesignerFormEditorInterface::childEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (qdesignerformeditorinterface_customevent_callback) {
            QEvent* cbval1 = event;
            qdesignerformeditorinterface_customevent_callback(this, cbval1);
            return;
        }
        QDesignerFormEditorInterface::customEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (qdesignerformeditorinterface_connectnotify_callback) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            qdesignerformeditorinterface_connectnotify_callback(this, cbval1);
            return;
        }
        QDesignerFormEditorInterface::connectNotify(signal);
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (qdesignerformeditorinterface_disconnectnotify_callback) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            qdesignerformeditorinterface_disconnectnotify_callback(this, cbval1);
            return;
        }
        QDesignerFormEditorInterface::disconnectNotify(signal);
    }

    // Friend functions
    friend void QDesignerFormEditorInterface_SuperTimerEvent(QDesignerFormEditorInterface* self, QTimerEvent* event);
    friend void QDesignerFormEditorInterface_SuperChildEvent(QDesignerFormEditorInterface* self, QChildEvent* event);
    friend void QDesignerFormEditorInterface_SuperCustomEvent(QDesignerFormEditorInterface* self, QEvent* event);
    friend void QDesignerFormEditorInterface_SuperConnectNotify(QDesignerFormEditorInterface* self, const QMetaMethod* signal);
    friend void QDesignerFormEditorInterface_SuperDisconnectNotify(QDesignerFormEditorInterface* self, const QMetaMethod* signal);
};

#endif
