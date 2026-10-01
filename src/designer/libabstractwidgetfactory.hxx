#pragma once
#ifndef DESIGNER_LIBABSTRACTWIDGETFACTORY_HXX
#define DESIGNER_LIBABSTRACTWIDGETFACTORY_HXX

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

// This class is a subclass of QDesignerWidgetFactoryInterface
class VirtualQDesignerWidgetFactoryInterface : public QDesignerWidgetFactoryInterface {
  public:
    // Virtual class public types (including callbacks and access types)
    using QDesignerWidgetFactoryInterface_MetaObject_Callback = QMetaObject* (*)(const QDesignerWidgetFactoryInterface*);
    using QDesignerWidgetFactoryInterface_Metacast_Callback = void* (*)(QDesignerWidgetFactoryInterface*, const char*);
    using QDesignerWidgetFactoryInterface_Metacall_Callback = int (*)(QDesignerWidgetFactoryInterface*, int, int, void**);
    using QDesignerWidgetFactoryInterface_Core_Callback = QDesignerFormEditorInterface* (*)(const QDesignerWidgetFactoryInterface*);
    using QDesignerWidgetFactoryInterface_ContainerOfWidget_Callback = QWidget* (*)(const QDesignerWidgetFactoryInterface*, QWidget*);
    using QDesignerWidgetFactoryInterface_WidgetOfContainer_Callback = QWidget* (*)(const QDesignerWidgetFactoryInterface*, QWidget*);
    using QDesignerWidgetFactoryInterface_CreateWidget_Callback = QWidget* (*)(const QDesignerWidgetFactoryInterface*, const char*, QWidget*);
    using QDesignerWidgetFactoryInterface_CreateLayout_Callback = QLayout* (*)(const QDesignerWidgetFactoryInterface*, QWidget*, QLayout*, int);
    using QDesignerWidgetFactoryInterface_IsPassiveInteractor_Callback = bool (*)(QDesignerWidgetFactoryInterface*, QWidget*);
    using QDesignerWidgetFactoryInterface_Initialize_Callback = void (*)(const QDesignerWidgetFactoryInterface*, QObject*);
    using QDesignerWidgetFactoryInterface_Event_Callback = bool (*)(QDesignerWidgetFactoryInterface*, QEvent*);
    using QDesignerWidgetFactoryInterface_EventFilter_Callback = bool (*)(QDesignerWidgetFactoryInterface*, QObject*, QEvent*);
    using QDesignerWidgetFactoryInterface_TimerEvent_Callback = void (*)(QDesignerWidgetFactoryInterface*, QTimerEvent*);
    using QDesignerWidgetFactoryInterface_ChildEvent_Callback = void (*)(QDesignerWidgetFactoryInterface*, QChildEvent*);
    using QDesignerWidgetFactoryInterface_CustomEvent_Callback = void (*)(QDesignerWidgetFactoryInterface*, QEvent*);
    using QDesignerWidgetFactoryInterface_ConnectNotify_Callback = void (*)(QDesignerWidgetFactoryInterface*, QMetaMethod*);
    using QDesignerWidgetFactoryInterface_DisconnectNotify_Callback = void (*)(QDesignerWidgetFactoryInterface*, QMetaMethod*);
    using QDesignerWidgetFactoryInterface::isSignalConnected;
    using QDesignerWidgetFactoryInterface::receivers;
    using QDesignerWidgetFactoryInterface::sender;
    using QDesignerWidgetFactoryInterface::senderSignalIndex;

    // Instance callback storage
    QDesignerWidgetFactoryInterface_MetaObject_Callback qdesignerwidgetfactoryinterface_metaobject_callback = nullptr;
    QDesignerWidgetFactoryInterface_Metacast_Callback qdesignerwidgetfactoryinterface_metacast_callback = nullptr;
    QDesignerWidgetFactoryInterface_Metacall_Callback qdesignerwidgetfactoryinterface_metacall_callback = nullptr;
    QDesignerWidgetFactoryInterface_Core_Callback qdesignerwidgetfactoryinterface_core_callback = nullptr;
    QDesignerWidgetFactoryInterface_ContainerOfWidget_Callback qdesignerwidgetfactoryinterface_containerofwidget_callback = nullptr;
    QDesignerWidgetFactoryInterface_WidgetOfContainer_Callback qdesignerwidgetfactoryinterface_widgetofcontainer_callback = nullptr;
    QDesignerWidgetFactoryInterface_CreateWidget_Callback qdesignerwidgetfactoryinterface_createwidget_callback = nullptr;
    QDesignerWidgetFactoryInterface_CreateLayout_Callback qdesignerwidgetfactoryinterface_createlayout_callback = nullptr;
    QDesignerWidgetFactoryInterface_IsPassiveInteractor_Callback qdesignerwidgetfactoryinterface_ispassiveinteractor_callback = nullptr;
    QDesignerWidgetFactoryInterface_Initialize_Callback qdesignerwidgetfactoryinterface_initialize_callback = nullptr;
    QDesignerWidgetFactoryInterface_Event_Callback qdesignerwidgetfactoryinterface_event_callback = nullptr;
    QDesignerWidgetFactoryInterface_EventFilter_Callback qdesignerwidgetfactoryinterface_eventfilter_callback = nullptr;
    QDesignerWidgetFactoryInterface_TimerEvent_Callback qdesignerwidgetfactoryinterface_timerevent_callback = nullptr;
    QDesignerWidgetFactoryInterface_ChildEvent_Callback qdesignerwidgetfactoryinterface_childevent_callback = nullptr;
    QDesignerWidgetFactoryInterface_CustomEvent_Callback qdesignerwidgetfactoryinterface_customevent_callback = nullptr;
    QDesignerWidgetFactoryInterface_ConnectNotify_Callback qdesignerwidgetfactoryinterface_connectnotify_callback = nullptr;
    QDesignerWidgetFactoryInterface_DisconnectNotify_Callback qdesignerwidgetfactoryinterface_disconnectnotify_callback = nullptr;

    // Access struct
    struct Base : QDesignerWidgetFactoryInterface {
        using QDesignerWidgetFactoryInterface::childEvent;
        using QDesignerWidgetFactoryInterface::connectNotify;
        using QDesignerWidgetFactoryInterface::customEvent;
        using QDesignerWidgetFactoryInterface::disconnectNotify;
        using QDesignerWidgetFactoryInterface::timerEvent;
    };

    VirtualQDesignerWidgetFactoryInterface() : QDesignerWidgetFactoryInterface() {};
    VirtualQDesignerWidgetFactoryInterface(QObject* parent) : QDesignerWidgetFactoryInterface(parent) {};

    // Virtual method for C ABI access and custom callback
    virtual const QMetaObject* metaObject() const override {
        if (qdesignerwidgetfactoryinterface_metaobject_callback) {
            QMetaObject* callback_ret = qdesignerwidgetfactoryinterface_metaobject_callback(this);
            return callback_ret;
        }
        return QDesignerWidgetFactoryInterface::metaObject();
    }

    // Virtual method for C ABI access and custom callback
    virtual void* qt_metacast(const char* param1) override {
        if (qdesignerwidgetfactoryinterface_metacast_callback) {
            const char* cbval1 = (const char*)param1;
            void* callback_ret = qdesignerwidgetfactoryinterface_metacast_callback(this, cbval1);
            return callback_ret;
        }
        return QDesignerWidgetFactoryInterface::qt_metacast(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (qdesignerwidgetfactoryinterface_metacall_callback) {
            int cbval1 = static_cast<int>(param1);
            int cbval2 = param2;
            void** cbval3 = param3;
            int callback_ret = qdesignerwidgetfactoryinterface_metacall_callback(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        }
        return QDesignerWidgetFactoryInterface::qt_metacall(param1, param2, param3);
    }

    // Virtual method for C ABI access and custom callback
    virtual QDesignerFormEditorInterface* core() const override {
        if (qdesignerwidgetfactoryinterface_core_callback) {
            QDesignerFormEditorInterface* callback_ret = qdesignerwidgetfactoryinterface_core_callback(this);
            return callback_ret;
        }
        // Pure virtual method
        qFatal("Error: Pure virtual method QDesignerWidgetFactoryInterface::core called without being implemented");
    }

    // Virtual method for C ABI access and custom callback
    virtual QWidget* containerOfWidget(QWidget* w) const override {
        if (qdesignerwidgetfactoryinterface_containerofwidget_callback) {
            QWidget* cbval1 = w;
            QWidget* callback_ret = qdesignerwidgetfactoryinterface_containerofwidget_callback(this, cbval1);
            return callback_ret;
        }
        // Pure virtual method
        qFatal("Error: Pure virtual method QDesignerWidgetFactoryInterface::containerOfWidget called without being implemented");
    }

    // Virtual method for C ABI access and custom callback
    virtual QWidget* widgetOfContainer(QWidget* w) const override {
        if (qdesignerwidgetfactoryinterface_widgetofcontainer_callback) {
            QWidget* cbval1 = w;
            QWidget* callback_ret = qdesignerwidgetfactoryinterface_widgetofcontainer_callback(this, cbval1);
            return callback_ret;
        }
        // Pure virtual method
        qFatal("Error: Pure virtual method QDesignerWidgetFactoryInterface::widgetOfContainer called without being implemented");
    }

    // Virtual method for C ABI access and custom callback
    virtual QWidget* createWidget(const QString& name, QWidget* parentWidget) const override {
        if (qdesignerwidgetfactoryinterface_createwidget_callback) {
            const auto name_ret = name;
            // Convert QString from UTF-16 in C++ RAII memory to UTF-8 chars in manually-managed C memory
            QByteArray name_b = name_ret.toUtf8();
            auto name_str_len = name_b.length();
            const char* name_str = static_cast<const char*>(malloc(name_str_len + 1));
            memcpy((void*)name_str, name_b.data(), name_str_len);
            ((char*)name_str)[name_str_len] = '\0';
            const char* cbval1 = name_str;
            QWidget* cbval2 = parentWidget;
            QWidget* callback_ret = qdesignerwidgetfactoryinterface_createwidget_callback(this, cbval1, cbval2);
            libqt_free(name_str);
            return callback_ret;
        }
        // Pure virtual method
        qFatal("Error: Pure virtual method QDesignerWidgetFactoryInterface::createWidget called without being implemented");
    }

    // Virtual method for C ABI access and custom callback
    virtual QLayout* createLayout(QWidget* widget, QLayout* layout, int typeVal) const override {
        if (qdesignerwidgetfactoryinterface_createlayout_callback) {
            QWidget* cbval1 = widget;
            QLayout* cbval2 = layout;
            int cbval3 = typeVal;
            QLayout* callback_ret = qdesignerwidgetfactoryinterface_createlayout_callback(this, cbval1, cbval2, cbval3);
            return callback_ret;
        }
        // Pure virtual method
        qFatal("Error: Pure virtual method QDesignerWidgetFactoryInterface::createLayout called without being implemented");
    }

    // Virtual method for C ABI access and custom callback
    virtual bool isPassiveInteractor(QWidget* widget) override {
        if (qdesignerwidgetfactoryinterface_ispassiveinteractor_callback) {
            QWidget* cbval1 = widget;
            bool callback_ret = qdesignerwidgetfactoryinterface_ispassiveinteractor_callback(this, cbval1);
            return callback_ret;
        }
        // Pure virtual method
        qFatal("Error: Pure virtual method QDesignerWidgetFactoryInterface::isPassiveInteractor called without being implemented");
    }

    // Virtual method for C ABI access and custom callback
    virtual void initialize(QObject* object) const override {
        if (qdesignerwidgetfactoryinterface_initialize_callback) {
            QObject* cbval1 = object;
            qdesignerwidgetfactoryinterface_initialize_callback(this, cbval1);
            return;
        }
        // Pure virtual method
        qFatal("Error: Pure virtual method QDesignerWidgetFactoryInterface::initialize called without being implemented");
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* event) override {
        if (qdesignerwidgetfactoryinterface_event_callback) {
            QEvent* cbval1 = event;
            bool callback_ret = qdesignerwidgetfactoryinterface_event_callback(this, cbval1);
            return callback_ret;
        }
        return QDesignerWidgetFactoryInterface::event(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* watched, QEvent* event) override {
        if (qdesignerwidgetfactoryinterface_eventfilter_callback) {
            QObject* cbval1 = watched;
            QEvent* cbval2 = event;
            bool callback_ret = qdesignerwidgetfactoryinterface_eventfilter_callback(this, cbval1, cbval2);
            return callback_ret;
        }
        return QDesignerWidgetFactoryInterface::eventFilter(watched, event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (qdesignerwidgetfactoryinterface_timerevent_callback) {
            QTimerEvent* cbval1 = event;
            qdesignerwidgetfactoryinterface_timerevent_callback(this, cbval1);
            return;
        }
        QDesignerWidgetFactoryInterface::timerEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (qdesignerwidgetfactoryinterface_childevent_callback) {
            QChildEvent* cbval1 = event;
            qdesignerwidgetfactoryinterface_childevent_callback(this, cbval1);
            return;
        }
        QDesignerWidgetFactoryInterface::childEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (qdesignerwidgetfactoryinterface_customevent_callback) {
            QEvent* cbval1 = event;
            qdesignerwidgetfactoryinterface_customevent_callback(this, cbval1);
            return;
        }
        QDesignerWidgetFactoryInterface::customEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (qdesignerwidgetfactoryinterface_connectnotify_callback) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            qdesignerwidgetfactoryinterface_connectnotify_callback(this, cbval1);
            return;
        }
        QDesignerWidgetFactoryInterface::connectNotify(signal);
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (qdesignerwidgetfactoryinterface_disconnectnotify_callback) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            qdesignerwidgetfactoryinterface_disconnectnotify_callback(this, cbval1);
            return;
        }
        QDesignerWidgetFactoryInterface::disconnectNotify(signal);
    }

    // Friend functions
    friend void QDesignerWidgetFactoryInterface_SuperTimerEvent(QDesignerWidgetFactoryInterface* self, QTimerEvent* event);
    friend void QDesignerWidgetFactoryInterface_SuperChildEvent(QDesignerWidgetFactoryInterface* self, QChildEvent* event);
    friend void QDesignerWidgetFactoryInterface_SuperCustomEvent(QDesignerWidgetFactoryInterface* self, QEvent* event);
    friend void QDesignerWidgetFactoryInterface_SuperConnectNotify(QDesignerWidgetFactoryInterface* self, const QMetaMethod* signal);
    friend void QDesignerWidgetFactoryInterface_SuperDisconnectNotify(QDesignerWidgetFactoryInterface* self, const QMetaMethod* signal);
};

#endif
