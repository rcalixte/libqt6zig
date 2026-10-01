#pragma once
#ifndef DESIGNER_LIBABSTRACTFORMWINDOWTOOL_HXX
#define DESIGNER_LIBABSTRACTFORMWINDOWTOOL_HXX

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

// This class is a subclass of QDesignerFormWindowToolInterface
class VirtualQDesignerFormWindowToolInterface : public QDesignerFormWindowToolInterface {
  public:
    // Virtual class public types (including callbacks and access types)
    using QDesignerFormWindowToolInterface_MetaObject_Callback = QMetaObject* (*)(const QDesignerFormWindowToolInterface*);
    using QDesignerFormWindowToolInterface_Metacast_Callback = void* (*)(QDesignerFormWindowToolInterface*, const char*);
    using QDesignerFormWindowToolInterface_Metacall_Callback = int (*)(QDesignerFormWindowToolInterface*, int, int, void**);
    using QDesignerFormWindowToolInterface_Core_Callback = QDesignerFormEditorInterface* (*)(const QDesignerFormWindowToolInterface*);
    using QDesignerFormWindowToolInterface_FormWindow_Callback = QDesignerFormWindowInterface* (*)(const QDesignerFormWindowToolInterface*);
    using QDesignerFormWindowToolInterface_Editor_Callback = QWidget* (*)(const QDesignerFormWindowToolInterface*);
    using QDesignerFormWindowToolInterface_Action_Callback = QAction* (*)(const QDesignerFormWindowToolInterface*);
    using QDesignerFormWindowToolInterface_Activated_Callback = void (*)(QDesignerFormWindowToolInterface*);
    using QDesignerFormWindowToolInterface_Deactivated_Callback = void (*)(QDesignerFormWindowToolInterface*);
    using QDesignerFormWindowToolInterface_HandleEvent_Callback = bool (*)(QDesignerFormWindowToolInterface*, QWidget*, QWidget*, QEvent*);
    using QDesignerFormWindowToolInterface_Event_Callback = bool (*)(QDesignerFormWindowToolInterface*, QEvent*);
    using QDesignerFormWindowToolInterface_EventFilter_Callback = bool (*)(QDesignerFormWindowToolInterface*, QObject*, QEvent*);
    using QDesignerFormWindowToolInterface_TimerEvent_Callback = void (*)(QDesignerFormWindowToolInterface*, QTimerEvent*);
    using QDesignerFormWindowToolInterface_ChildEvent_Callback = void (*)(QDesignerFormWindowToolInterface*, QChildEvent*);
    using QDesignerFormWindowToolInterface_CustomEvent_Callback = void (*)(QDesignerFormWindowToolInterface*, QEvent*);
    using QDesignerFormWindowToolInterface_ConnectNotify_Callback = void (*)(QDesignerFormWindowToolInterface*, QMetaMethod*);
    using QDesignerFormWindowToolInterface_DisconnectNotify_Callback = void (*)(QDesignerFormWindowToolInterface*, QMetaMethod*);
    using QDesignerFormWindowToolInterface::isSignalConnected;
    using QDesignerFormWindowToolInterface::receivers;
    using QDesignerFormWindowToolInterface::sender;
    using QDesignerFormWindowToolInterface::senderSignalIndex;

    // Instance callback storage
    QDesignerFormWindowToolInterface_MetaObject_Callback qdesignerformwindowtoolinterface_metaobject_callback = nullptr;
    QDesignerFormWindowToolInterface_Metacast_Callback qdesignerformwindowtoolinterface_metacast_callback = nullptr;
    QDesignerFormWindowToolInterface_Metacall_Callback qdesignerformwindowtoolinterface_metacall_callback = nullptr;
    QDesignerFormWindowToolInterface_Core_Callback qdesignerformwindowtoolinterface_core_callback = nullptr;
    QDesignerFormWindowToolInterface_FormWindow_Callback qdesignerformwindowtoolinterface_formwindow_callback = nullptr;
    QDesignerFormWindowToolInterface_Editor_Callback qdesignerformwindowtoolinterface_editor_callback = nullptr;
    QDesignerFormWindowToolInterface_Action_Callback qdesignerformwindowtoolinterface_action_callback = nullptr;
    QDesignerFormWindowToolInterface_Activated_Callback qdesignerformwindowtoolinterface_activated_callback = nullptr;
    QDesignerFormWindowToolInterface_Deactivated_Callback qdesignerformwindowtoolinterface_deactivated_callback = nullptr;
    QDesignerFormWindowToolInterface_HandleEvent_Callback qdesignerformwindowtoolinterface_handleevent_callback = nullptr;
    QDesignerFormWindowToolInterface_Event_Callback qdesignerformwindowtoolinterface_event_callback = nullptr;
    QDesignerFormWindowToolInterface_EventFilter_Callback qdesignerformwindowtoolinterface_eventfilter_callback = nullptr;
    QDesignerFormWindowToolInterface_TimerEvent_Callback qdesignerformwindowtoolinterface_timerevent_callback = nullptr;
    QDesignerFormWindowToolInterface_ChildEvent_Callback qdesignerformwindowtoolinterface_childevent_callback = nullptr;
    QDesignerFormWindowToolInterface_CustomEvent_Callback qdesignerformwindowtoolinterface_customevent_callback = nullptr;
    QDesignerFormWindowToolInterface_ConnectNotify_Callback qdesignerformwindowtoolinterface_connectnotify_callback = nullptr;
    QDesignerFormWindowToolInterface_DisconnectNotify_Callback qdesignerformwindowtoolinterface_disconnectnotify_callback = nullptr;

    // Access struct
    struct Base : QDesignerFormWindowToolInterface {
        using QDesignerFormWindowToolInterface::childEvent;
        using QDesignerFormWindowToolInterface::connectNotify;
        using QDesignerFormWindowToolInterface::customEvent;
        using QDesignerFormWindowToolInterface::disconnectNotify;
        using QDesignerFormWindowToolInterface::timerEvent;
    };

    VirtualQDesignerFormWindowToolInterface() : QDesignerFormWindowToolInterface() {};
    VirtualQDesignerFormWindowToolInterface(QObject* parent) : QDesignerFormWindowToolInterface(parent) {};

    // Virtual method for C ABI access and custom callback
    virtual const QMetaObject* metaObject() const override {
        if (qdesignerformwindowtoolinterface_metaobject_callback) {
            QMetaObject* callback_ret = qdesignerformwindowtoolinterface_metaobject_callback(this);
            return callback_ret;
        }
        return QDesignerFormWindowToolInterface::metaObject();
    }

    // Virtual method for C ABI access and custom callback
    virtual void* qt_metacast(const char* param1) override {
        if (qdesignerformwindowtoolinterface_metacast_callback) {
            const char* cbval1 = (const char*)param1;
            void* callback_ret = qdesignerformwindowtoolinterface_metacast_callback(this, cbval1);
            return callback_ret;
        }
        return QDesignerFormWindowToolInterface::qt_metacast(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (qdesignerformwindowtoolinterface_metacall_callback) {
            int cbval1 = static_cast<int>(param1);
            int cbval2 = param2;
            void** cbval3 = param3;
            int callback_ret = qdesignerformwindowtoolinterface_metacall_callback(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        }
        return QDesignerFormWindowToolInterface::qt_metacall(param1, param2, param3);
    }

    // Virtual method for C ABI access and custom callback
    virtual QDesignerFormEditorInterface* core() const override {
        if (qdesignerformwindowtoolinterface_core_callback) {
            QDesignerFormEditorInterface* callback_ret = qdesignerformwindowtoolinterface_core_callback(this);
            return callback_ret;
        }
        // Pure virtual method
        qFatal("Error: Pure virtual method QDesignerFormWindowToolInterface::core called without being implemented");
    }

    // Virtual method for C ABI access and custom callback
    virtual QDesignerFormWindowInterface* formWindow() const override {
        if (qdesignerformwindowtoolinterface_formwindow_callback) {
            QDesignerFormWindowInterface* callback_ret = qdesignerformwindowtoolinterface_formwindow_callback(this);
            return callback_ret;
        }
        // Pure virtual method
        qFatal("Error: Pure virtual method QDesignerFormWindowToolInterface::formWindow called without being implemented");
    }

    // Virtual method for C ABI access and custom callback
    virtual QWidget* editor() const override {
        if (qdesignerformwindowtoolinterface_editor_callback) {
            QWidget* callback_ret = qdesignerformwindowtoolinterface_editor_callback(this);
            return callback_ret;
        }
        // Pure virtual method
        qFatal("Error: Pure virtual method QDesignerFormWindowToolInterface::editor called without being implemented");
    }

    // Virtual method for C ABI access and custom callback
    virtual QAction* action() const override {
        if (qdesignerformwindowtoolinterface_action_callback) {
            QAction* callback_ret = qdesignerformwindowtoolinterface_action_callback(this);
            return callback_ret;
        }
        // Pure virtual method
        qFatal("Error: Pure virtual method QDesignerFormWindowToolInterface::action called without being implemented");
    }

    // Virtual method for C ABI access and custom callback
    virtual void activated() override {
        if (qdesignerformwindowtoolinterface_activated_callback) {
            qdesignerformwindowtoolinterface_activated_callback(this);
            return;
        }
        // Pure virtual method
        qFatal("Error: Pure virtual method QDesignerFormWindowToolInterface::activated called without being implemented");
    }

    // Virtual method for C ABI access and custom callback
    virtual void deactivated() override {
        if (qdesignerformwindowtoolinterface_deactivated_callback) {
            qdesignerformwindowtoolinterface_deactivated_callback(this);
            return;
        }
        // Pure virtual method
        qFatal("Error: Pure virtual method QDesignerFormWindowToolInterface::deactivated called without being implemented");
    }

    // Virtual method for C ABI access and custom callback
    virtual bool handleEvent(QWidget* widget, QWidget* managedWidget, QEvent* event) override {
        if (qdesignerformwindowtoolinterface_handleevent_callback) {
            QWidget* cbval1 = widget;
            QWidget* cbval2 = managedWidget;
            QEvent* cbval3 = event;
            bool callback_ret = qdesignerformwindowtoolinterface_handleevent_callback(this, cbval1, cbval2, cbval3);
            return callback_ret;
        }
        // Pure virtual method
        qFatal("Error: Pure virtual method QDesignerFormWindowToolInterface::handleEvent called without being implemented");
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* event) override {
        if (qdesignerformwindowtoolinterface_event_callback) {
            QEvent* cbval1 = event;
            bool callback_ret = qdesignerformwindowtoolinterface_event_callback(this, cbval1);
            return callback_ret;
        }
        return QDesignerFormWindowToolInterface::event(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* watched, QEvent* event) override {
        if (qdesignerformwindowtoolinterface_eventfilter_callback) {
            QObject* cbval1 = watched;
            QEvent* cbval2 = event;
            bool callback_ret = qdesignerformwindowtoolinterface_eventfilter_callback(this, cbval1, cbval2);
            return callback_ret;
        }
        return QDesignerFormWindowToolInterface::eventFilter(watched, event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (qdesignerformwindowtoolinterface_timerevent_callback) {
            QTimerEvent* cbval1 = event;
            qdesignerformwindowtoolinterface_timerevent_callback(this, cbval1);
            return;
        }
        QDesignerFormWindowToolInterface::timerEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (qdesignerformwindowtoolinterface_childevent_callback) {
            QChildEvent* cbval1 = event;
            qdesignerformwindowtoolinterface_childevent_callback(this, cbval1);
            return;
        }
        QDesignerFormWindowToolInterface::childEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (qdesignerformwindowtoolinterface_customevent_callback) {
            QEvent* cbval1 = event;
            qdesignerformwindowtoolinterface_customevent_callback(this, cbval1);
            return;
        }
        QDesignerFormWindowToolInterface::customEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (qdesignerformwindowtoolinterface_connectnotify_callback) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            qdesignerformwindowtoolinterface_connectnotify_callback(this, cbval1);
            return;
        }
        QDesignerFormWindowToolInterface::connectNotify(signal);
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (qdesignerformwindowtoolinterface_disconnectnotify_callback) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            qdesignerformwindowtoolinterface_disconnectnotify_callback(this, cbval1);
            return;
        }
        QDesignerFormWindowToolInterface::disconnectNotify(signal);
    }

    // Friend functions
    friend void QDesignerFormWindowToolInterface_SuperTimerEvent(QDesignerFormWindowToolInterface* self, QTimerEvent* event);
    friend void QDesignerFormWindowToolInterface_SuperChildEvent(QDesignerFormWindowToolInterface* self, QChildEvent* event);
    friend void QDesignerFormWindowToolInterface_SuperCustomEvent(QDesignerFormWindowToolInterface* self, QEvent* event);
    friend void QDesignerFormWindowToolInterface_SuperConnectNotify(QDesignerFormWindowToolInterface* self, const QMetaMethod* signal);
    friend void QDesignerFormWindowToolInterface_SuperDisconnectNotify(QDesignerFormWindowToolInterface* self, const QMetaMethod* signal);
};

#endif
