#pragma once
#ifndef LIBQWIDGETACTION_HXX
#define LIBQWIDGETACTION_HXX

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"

// This class is a subclass of QWidgetAction
class VirtualQWidgetAction final : public QWidgetAction {
  public:
    // Virtual class public types (including callbacks and access types)
    using QWidgetAction_MetaObject_Callback = QMetaObject* (*)(const QWidgetAction*);
    using QWidgetAction_Metacast_Callback = void* (*)(QWidgetAction*, const char*);
    using QWidgetAction_Metacall_Callback = int (*)(QWidgetAction*, int, int, void**);
    using QWidgetAction_Event_Callback = bool (*)(QWidgetAction*, QEvent*);
    using QWidgetAction_EventFilter_Callback = bool (*)(QWidgetAction*, QObject*, QEvent*);
    using QWidgetAction_CreateWidget_Callback = QWidget* (*)(QWidgetAction*, QWidget*);
    using QWidgetAction_DeleteWidget_Callback = void (*)(QWidgetAction*, QWidget*);
    using QWidgetAction_TimerEvent_Callback = void (*)(QWidgetAction*, QTimerEvent*);
    using QWidgetAction_ChildEvent_Callback = void (*)(QWidgetAction*, QChildEvent*);
    using QWidgetAction_CustomEvent_Callback = void (*)(QWidgetAction*, QEvent*);
    using QWidgetAction_ConnectNotify_Callback = void (*)(QWidgetAction*, QMetaMethod*);
    using QWidgetAction_DisconnectNotify_Callback = void (*)(QWidgetAction*, QMetaMethod*);
    using QWidgetAction::createdWidgets;
    using QWidgetAction::isSignalConnected;
    using QWidgetAction::receivers;
    using QWidgetAction::sender;
    using QWidgetAction::senderSignalIndex;

    // Instance callback storage
    QWidgetAction_MetaObject_Callback qwidgetaction_metaobject_callback = nullptr;
    QWidgetAction_Metacast_Callback qwidgetaction_metacast_callback = nullptr;
    QWidgetAction_Metacall_Callback qwidgetaction_metacall_callback = nullptr;
    QWidgetAction_Event_Callback qwidgetaction_event_callback = nullptr;
    QWidgetAction_EventFilter_Callback qwidgetaction_eventfilter_callback = nullptr;
    QWidgetAction_CreateWidget_Callback qwidgetaction_createwidget_callback = nullptr;
    QWidgetAction_DeleteWidget_Callback qwidgetaction_deletewidget_callback = nullptr;
    QWidgetAction_TimerEvent_Callback qwidgetaction_timerevent_callback = nullptr;
    QWidgetAction_ChildEvent_Callback qwidgetaction_childevent_callback = nullptr;
    QWidgetAction_CustomEvent_Callback qwidgetaction_customevent_callback = nullptr;
    QWidgetAction_ConnectNotify_Callback qwidgetaction_connectnotify_callback = nullptr;
    QWidgetAction_DisconnectNotify_Callback qwidgetaction_disconnectnotify_callback = nullptr;

    // Access struct
    struct Base : QWidgetAction {
        using QWidgetAction::childEvent;
        using QWidgetAction::connectNotify;
        using QWidgetAction::createWidget;
        using QWidgetAction::customEvent;
        using QWidgetAction::deleteWidget;
        using QWidgetAction::disconnectNotify;
        using QWidgetAction::event;
        using QWidgetAction::eventFilter;
        using QWidgetAction::timerEvent;
    };

    VirtualQWidgetAction(QObject* parent) : QWidgetAction(parent) {};

    // Virtual method for C ABI access and custom callback
    virtual const QMetaObject* metaObject() const override {
        if (qwidgetaction_metaobject_callback) {
            QMetaObject* callback_ret = qwidgetaction_metaobject_callback(this);
            return callback_ret;
        }
        return QWidgetAction::metaObject();
    }

    // Virtual method for C ABI access and custom callback
    virtual void* qt_metacast(const char* param1) override {
        if (qwidgetaction_metacast_callback) {
            const char* cbval1 = (const char*)param1;
            void* callback_ret = qwidgetaction_metacast_callback(this, cbval1);
            return callback_ret;
        }
        return QWidgetAction::qt_metacast(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (qwidgetaction_metacall_callback) {
            int cbval1 = static_cast<int>(param1);
            int cbval2 = param2;
            void** cbval3 = param3;
            int callback_ret = qwidgetaction_metacall_callback(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        }
        return QWidgetAction::qt_metacall(param1, param2, param3);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* param1) override {
        if (qwidgetaction_event_callback) {
            QEvent* cbval1 = param1;
            bool callback_ret = qwidgetaction_event_callback(this, cbval1);
            return callback_ret;
        }
        return QWidgetAction::event(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* param1, QEvent* param2) override {
        if (qwidgetaction_eventfilter_callback) {
            QObject* cbval1 = param1;
            QEvent* cbval2 = param2;
            bool callback_ret = qwidgetaction_eventfilter_callback(this, cbval1, cbval2);
            return callback_ret;
        }
        return QWidgetAction::eventFilter(param1, param2);
    }

    // Virtual method for C ABI access and custom callback
    virtual QWidget* createWidget(QWidget* parent) override {
        if (qwidgetaction_createwidget_callback) {
            QWidget* cbval1 = parent;
            QWidget* callback_ret = qwidgetaction_createwidget_callback(this, cbval1);
            return callback_ret;
        }
        return QWidgetAction::createWidget(parent);
    }

    // Virtual method for C ABI access and custom callback
    virtual void deleteWidget(QWidget* widget) override {
        if (qwidgetaction_deletewidget_callback) {
            QWidget* cbval1 = widget;
            qwidgetaction_deletewidget_callback(this, cbval1);
            return;
        }
        QWidgetAction::deleteWidget(widget);
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (qwidgetaction_timerevent_callback) {
            QTimerEvent* cbval1 = event;
            qwidgetaction_timerevent_callback(this, cbval1);
            return;
        }
        QWidgetAction::timerEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (qwidgetaction_childevent_callback) {
            QChildEvent* cbval1 = event;
            qwidgetaction_childevent_callback(this, cbval1);
            return;
        }
        QWidgetAction::childEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (qwidgetaction_customevent_callback) {
            QEvent* cbval1 = event;
            qwidgetaction_customevent_callback(this, cbval1);
            return;
        }
        QWidgetAction::customEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (qwidgetaction_connectnotify_callback) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            qwidgetaction_connectnotify_callback(this, cbval1);
            return;
        }
        QWidgetAction::connectNotify(signal);
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (qwidgetaction_disconnectnotify_callback) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            qwidgetaction_disconnectnotify_callback(this, cbval1);
            return;
        }
        QWidgetAction::disconnectNotify(signal);
    }

    // Friend functions
    friend bool QWidgetAction_SuperEvent(QWidgetAction* self, QEvent* param1);
    friend bool QWidgetAction_SuperEventFilter(QWidgetAction* self, QObject* param1, QEvent* param2);
    friend QWidget* QWidgetAction_SuperCreateWidget(QWidgetAction* self, QWidget* parent);
    friend void QWidgetAction_SuperDeleteWidget(QWidgetAction* self, QWidget* widget);
    friend void QWidgetAction_SuperTimerEvent(QWidgetAction* self, QTimerEvent* event);
    friend void QWidgetAction_SuperChildEvent(QWidgetAction* self, QChildEvent* event);
    friend void QWidgetAction_SuperCustomEvent(QWidgetAction* self, QEvent* event);
    friend void QWidgetAction_SuperConnectNotify(QWidgetAction* self, const QMetaMethod* signal);
    friend void QWidgetAction_SuperDisconnectNotify(QWidgetAction* self, const QMetaMethod* signal);
};

#endif
