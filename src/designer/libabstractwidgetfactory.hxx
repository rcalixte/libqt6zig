#pragma once
#ifndef SRC_DESIGNERC_LIBVIRTUALABSTRACTWIDGETFACTORY_H
#define SRC_DESIGNERC_LIBVIRTUALABSTRACTWIDGETFACTORY_H

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

// This class is a subclass of QDesignerWidgetFactoryInterface so that we can call protected methods
class VirtualQDesignerWidgetFactoryInterface : public QDesignerWidgetFactoryInterface {

  public:
    // Virtual class boolean flag
    bool isVirtualQDesignerWidgetFactoryInterface = true;

    // Virtual class public types (including callbacks)
    using QDesignerWidgetFactoryInterface_MetaObject_Callback = QMetaObject* (*)();
    using QDesignerWidgetFactoryInterface_Metacast_Callback = void* (*)(QDesignerWidgetFactoryInterface*, const char*);
    using QDesignerWidgetFactoryInterface_Metacall_Callback = int (*)(QDesignerWidgetFactoryInterface*, int, int, void**);
    using QDesignerWidgetFactoryInterface_Core_Callback = QDesignerFormEditorInterface* (*)();
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
    using QDesignerWidgetFactoryInterface_Sender_Callback = QObject* (*)();
    using QDesignerWidgetFactoryInterface_SenderSignalIndex_Callback = int (*)();
    using QDesignerWidgetFactoryInterface_Receivers_Callback = int (*)(const QDesignerWidgetFactoryInterface*, const char*);
    using QDesignerWidgetFactoryInterface_IsSignalConnected_Callback = bool (*)(const QDesignerWidgetFactoryInterface*, QMetaMethod*);

  protected:
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
    QDesignerWidgetFactoryInterface_Sender_Callback qdesignerwidgetfactoryinterface_sender_callback = nullptr;
    QDesignerWidgetFactoryInterface_SenderSignalIndex_Callback qdesignerwidgetfactoryinterface_sendersignalindex_callback = nullptr;
    QDesignerWidgetFactoryInterface_Receivers_Callback qdesignerwidgetfactoryinterface_receivers_callback = nullptr;
    QDesignerWidgetFactoryInterface_IsSignalConnected_Callback qdesignerwidgetfactoryinterface_issignalconnected_callback = nullptr;

    // Instance base flags
    mutable bool qdesignerwidgetfactoryinterface_metaobject_isbase = false;
    mutable bool qdesignerwidgetfactoryinterface_metacast_isbase = false;
    mutable bool qdesignerwidgetfactoryinterface_metacall_isbase = false;
    mutable bool qdesignerwidgetfactoryinterface_core_isbase = false;
    mutable bool qdesignerwidgetfactoryinterface_containerofwidget_isbase = false;
    mutable bool qdesignerwidgetfactoryinterface_widgetofcontainer_isbase = false;
    mutable bool qdesignerwidgetfactoryinterface_createwidget_isbase = false;
    mutable bool qdesignerwidgetfactoryinterface_createlayout_isbase = false;
    mutable bool qdesignerwidgetfactoryinterface_ispassiveinteractor_isbase = false;
    mutable bool qdesignerwidgetfactoryinterface_initialize_isbase = false;
    mutable bool qdesignerwidgetfactoryinterface_event_isbase = false;
    mutable bool qdesignerwidgetfactoryinterface_eventfilter_isbase = false;
    mutable bool qdesignerwidgetfactoryinterface_timerevent_isbase = false;
    mutable bool qdesignerwidgetfactoryinterface_childevent_isbase = false;
    mutable bool qdesignerwidgetfactoryinterface_customevent_isbase = false;
    mutable bool qdesignerwidgetfactoryinterface_connectnotify_isbase = false;
    mutable bool qdesignerwidgetfactoryinterface_disconnectnotify_isbase = false;
    mutable bool qdesignerwidgetfactoryinterface_sender_isbase = false;
    mutable bool qdesignerwidgetfactoryinterface_sendersignalindex_isbase = false;
    mutable bool qdesignerwidgetfactoryinterface_receivers_isbase = false;
    mutable bool qdesignerwidgetfactoryinterface_issignalconnected_isbase = false;

  public:
    VirtualQDesignerWidgetFactoryInterface() : QDesignerWidgetFactoryInterface() {};
    VirtualQDesignerWidgetFactoryInterface(QObject* parent) : QDesignerWidgetFactoryInterface(parent) {};

    // Callback setters
    inline void setQDesignerWidgetFactoryInterface_MetaObject_Callback(QDesignerWidgetFactoryInterface_MetaObject_Callback cb) { qdesignerwidgetfactoryinterface_metaobject_callback = cb; }
    inline void setQDesignerWidgetFactoryInterface_Metacast_Callback(QDesignerWidgetFactoryInterface_Metacast_Callback cb) { qdesignerwidgetfactoryinterface_metacast_callback = cb; }
    inline void setQDesignerWidgetFactoryInterface_Metacall_Callback(QDesignerWidgetFactoryInterface_Metacall_Callback cb) { qdesignerwidgetfactoryinterface_metacall_callback = cb; }
    inline void setQDesignerWidgetFactoryInterface_Core_Callback(QDesignerWidgetFactoryInterface_Core_Callback cb) { qdesignerwidgetfactoryinterface_core_callback = cb; }
    inline void setQDesignerWidgetFactoryInterface_ContainerOfWidget_Callback(QDesignerWidgetFactoryInterface_ContainerOfWidget_Callback cb) { qdesignerwidgetfactoryinterface_containerofwidget_callback = cb; }
    inline void setQDesignerWidgetFactoryInterface_WidgetOfContainer_Callback(QDesignerWidgetFactoryInterface_WidgetOfContainer_Callback cb) { qdesignerwidgetfactoryinterface_widgetofcontainer_callback = cb; }
    inline void setQDesignerWidgetFactoryInterface_CreateWidget_Callback(QDesignerWidgetFactoryInterface_CreateWidget_Callback cb) { qdesignerwidgetfactoryinterface_createwidget_callback = cb; }
    inline void setQDesignerWidgetFactoryInterface_CreateLayout_Callback(QDesignerWidgetFactoryInterface_CreateLayout_Callback cb) { qdesignerwidgetfactoryinterface_createlayout_callback = cb; }
    inline void setQDesignerWidgetFactoryInterface_IsPassiveInteractor_Callback(QDesignerWidgetFactoryInterface_IsPassiveInteractor_Callback cb) { qdesignerwidgetfactoryinterface_ispassiveinteractor_callback = cb; }
    inline void setQDesignerWidgetFactoryInterface_Initialize_Callback(QDesignerWidgetFactoryInterface_Initialize_Callback cb) { qdesignerwidgetfactoryinterface_initialize_callback = cb; }
    inline void setQDesignerWidgetFactoryInterface_Event_Callback(QDesignerWidgetFactoryInterface_Event_Callback cb) { qdesignerwidgetfactoryinterface_event_callback = cb; }
    inline void setQDesignerWidgetFactoryInterface_EventFilter_Callback(QDesignerWidgetFactoryInterface_EventFilter_Callback cb) { qdesignerwidgetfactoryinterface_eventfilter_callback = cb; }
    inline void setQDesignerWidgetFactoryInterface_TimerEvent_Callback(QDesignerWidgetFactoryInterface_TimerEvent_Callback cb) { qdesignerwidgetfactoryinterface_timerevent_callback = cb; }
    inline void setQDesignerWidgetFactoryInterface_ChildEvent_Callback(QDesignerWidgetFactoryInterface_ChildEvent_Callback cb) { qdesignerwidgetfactoryinterface_childevent_callback = cb; }
    inline void setQDesignerWidgetFactoryInterface_CustomEvent_Callback(QDesignerWidgetFactoryInterface_CustomEvent_Callback cb) { qdesignerwidgetfactoryinterface_customevent_callback = cb; }
    inline void setQDesignerWidgetFactoryInterface_ConnectNotify_Callback(QDesignerWidgetFactoryInterface_ConnectNotify_Callback cb) { qdesignerwidgetfactoryinterface_connectnotify_callback = cb; }
    inline void setQDesignerWidgetFactoryInterface_DisconnectNotify_Callback(QDesignerWidgetFactoryInterface_DisconnectNotify_Callback cb) { qdesignerwidgetfactoryinterface_disconnectnotify_callback = cb; }
    inline void setQDesignerWidgetFactoryInterface_Sender_Callback(QDesignerWidgetFactoryInterface_Sender_Callback cb) { qdesignerwidgetfactoryinterface_sender_callback = cb; }
    inline void setQDesignerWidgetFactoryInterface_SenderSignalIndex_Callback(QDesignerWidgetFactoryInterface_SenderSignalIndex_Callback cb) { qdesignerwidgetfactoryinterface_sendersignalindex_callback = cb; }
    inline void setQDesignerWidgetFactoryInterface_Receivers_Callback(QDesignerWidgetFactoryInterface_Receivers_Callback cb) { qdesignerwidgetfactoryinterface_receivers_callback = cb; }
    inline void setQDesignerWidgetFactoryInterface_IsSignalConnected_Callback(QDesignerWidgetFactoryInterface_IsSignalConnected_Callback cb) { qdesignerwidgetfactoryinterface_issignalconnected_callback = cb; }

    // Base flag setters
    inline void setQDesignerWidgetFactoryInterface_MetaObject_IsBase(bool value) const { qdesignerwidgetfactoryinterface_metaobject_isbase = value; }
    inline void setQDesignerWidgetFactoryInterface_Metacast_IsBase(bool value) const { qdesignerwidgetfactoryinterface_metacast_isbase = value; }
    inline void setQDesignerWidgetFactoryInterface_Metacall_IsBase(bool value) const { qdesignerwidgetfactoryinterface_metacall_isbase = value; }
    inline void setQDesignerWidgetFactoryInterface_Core_IsBase(bool value) const { qdesignerwidgetfactoryinterface_core_isbase = value; }
    inline void setQDesignerWidgetFactoryInterface_ContainerOfWidget_IsBase(bool value) const { qdesignerwidgetfactoryinterface_containerofwidget_isbase = value; }
    inline void setQDesignerWidgetFactoryInterface_WidgetOfContainer_IsBase(bool value) const { qdesignerwidgetfactoryinterface_widgetofcontainer_isbase = value; }
    inline void setQDesignerWidgetFactoryInterface_CreateWidget_IsBase(bool value) const { qdesignerwidgetfactoryinterface_createwidget_isbase = value; }
    inline void setQDesignerWidgetFactoryInterface_CreateLayout_IsBase(bool value) const { qdesignerwidgetfactoryinterface_createlayout_isbase = value; }
    inline void setQDesignerWidgetFactoryInterface_IsPassiveInteractor_IsBase(bool value) const { qdesignerwidgetfactoryinterface_ispassiveinteractor_isbase = value; }
    inline void setQDesignerWidgetFactoryInterface_Initialize_IsBase(bool value) const { qdesignerwidgetfactoryinterface_initialize_isbase = value; }
    inline void setQDesignerWidgetFactoryInterface_Event_IsBase(bool value) const { qdesignerwidgetfactoryinterface_event_isbase = value; }
    inline void setQDesignerWidgetFactoryInterface_EventFilter_IsBase(bool value) const { qdesignerwidgetfactoryinterface_eventfilter_isbase = value; }
    inline void setQDesignerWidgetFactoryInterface_TimerEvent_IsBase(bool value) const { qdesignerwidgetfactoryinterface_timerevent_isbase = value; }
    inline void setQDesignerWidgetFactoryInterface_ChildEvent_IsBase(bool value) const { qdesignerwidgetfactoryinterface_childevent_isbase = value; }
    inline void setQDesignerWidgetFactoryInterface_CustomEvent_IsBase(bool value) const { qdesignerwidgetfactoryinterface_customevent_isbase = value; }
    inline void setQDesignerWidgetFactoryInterface_ConnectNotify_IsBase(bool value) const { qdesignerwidgetfactoryinterface_connectnotify_isbase = value; }
    inline void setQDesignerWidgetFactoryInterface_DisconnectNotify_IsBase(bool value) const { qdesignerwidgetfactoryinterface_disconnectnotify_isbase = value; }
    inline void setQDesignerWidgetFactoryInterface_Sender_IsBase(bool value) const { qdesignerwidgetfactoryinterface_sender_isbase = value; }
    inline void setQDesignerWidgetFactoryInterface_SenderSignalIndex_IsBase(bool value) const { qdesignerwidgetfactoryinterface_sendersignalindex_isbase = value; }
    inline void setQDesignerWidgetFactoryInterface_Receivers_IsBase(bool value) const { qdesignerwidgetfactoryinterface_receivers_isbase = value; }
    inline void setQDesignerWidgetFactoryInterface_IsSignalConnected_IsBase(bool value) const { qdesignerwidgetfactoryinterface_issignalconnected_isbase = value; }

    // Virtual method for C ABI access and custom callback
    virtual const QMetaObject* metaObject() const override {
        if (qdesignerwidgetfactoryinterface_metaobject_isbase) {
            qdesignerwidgetfactoryinterface_metaobject_isbase = false;
            return QDesignerWidgetFactoryInterface::metaObject();
        }
        auto metaobject_cb = qdesignerwidgetfactoryinterface_metaobject_callback;
        if (metaobject_cb) {
            QMetaObject* callback_ret = metaobject_cb();
            return callback_ret;
        }
        return QDesignerWidgetFactoryInterface::metaObject();
    }

    // Virtual method for C ABI access and custom callback
    virtual void* qt_metacast(const char* param1) override {
        if (qdesignerwidgetfactoryinterface_metacast_isbase) {
            qdesignerwidgetfactoryinterface_metacast_isbase = false;
            return QDesignerWidgetFactoryInterface::qt_metacast(param1);
        }
        auto metacast_cb = qdesignerwidgetfactoryinterface_metacast_callback;
        if (metacast_cb) {
            const char* cbval1 = (const char*)param1;

            void* callback_ret = metacast_cb(this, cbval1);
            return callback_ret;
        }
        return QDesignerWidgetFactoryInterface::qt_metacast(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (qdesignerwidgetfactoryinterface_metacall_isbase) {
            qdesignerwidgetfactoryinterface_metacall_isbase = false;
            return QDesignerWidgetFactoryInterface::qt_metacall(param1, param2, param3);
        }
        auto metacall_cb = qdesignerwidgetfactoryinterface_metacall_callback;
        if (metacall_cb) {
            int cbval1 = static_cast<int>(param1);
            int cbval2 = param2;
            void** cbval3 = param3;

            int callback_ret = metacall_cb(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        }
        return QDesignerWidgetFactoryInterface::qt_metacall(param1, param2, param3);
    }

    // Virtual method for C ABI access and custom callback
    virtual QDesignerFormEditorInterface* core() const override {
        auto core_cb = qdesignerwidgetfactoryinterface_core_callback;
        if (core_cb) {
            QDesignerFormEditorInterface* callback_ret = core_cb();
            return callback_ret;
        }
        return {};
    }

    // Virtual method for C ABI access and custom callback
    virtual QWidget* containerOfWidget(QWidget* w) const override {
        auto containerofwidget_cb = qdesignerwidgetfactoryinterface_containerofwidget_callback;
        if (containerofwidget_cb) {
            QWidget* cbval1 = w;

            QWidget* callback_ret = containerofwidget_cb(this, cbval1);
            return callback_ret;
        }
        return {};
    }

    // Virtual method for C ABI access and custom callback
    virtual QWidget* widgetOfContainer(QWidget* w) const override {
        auto widgetofcontainer_cb = qdesignerwidgetfactoryinterface_widgetofcontainer_callback;
        if (widgetofcontainer_cb) {
            QWidget* cbval1 = w;

            QWidget* callback_ret = widgetofcontainer_cb(this, cbval1);
            return callback_ret;
        }
        return {};
    }

    // Virtual method for C ABI access and custom callback
    virtual QWidget* createWidget(const QString& name, QWidget* parentWidget) const override {
        auto createwidget_cb = qdesignerwidgetfactoryinterface_createwidget_callback;
        if (createwidget_cb) {
            const QString name_ret = name;
            // Convert QString from UTF-16 in C++ RAII memory to UTF-8 chars in manually-managed C memory
            QByteArray name_b = name_ret.toUtf8();
            auto name_str_len = name_b.length();
            const char* name_str = static_cast<const char*>(malloc(name_str_len + 1));
            memcpy((void*)name_str, name_b.data(), name_str_len);
            ((char*)name_str)[name_str_len] = '\0';
            const char* cbval1 = name_str;
            QWidget* cbval2 = parentWidget;

            QWidget* callback_ret = createwidget_cb(this, cbval1, cbval2);
            libqt_free(name_str);
            return callback_ret;
        }
        return {};
    }

    // Virtual method for C ABI access and custom callback
    virtual QLayout* createLayout(QWidget* widget, QLayout* layout, int typeVal) const override {
        auto createlayout_cb = qdesignerwidgetfactoryinterface_createlayout_callback;
        if (createlayout_cb) {
            QWidget* cbval1 = widget;
            QLayout* cbval2 = layout;
            int cbval3 = typeVal;

            QLayout* callback_ret = createlayout_cb(this, cbval1, cbval2, cbval3);
            return callback_ret;
        }
        return {};
    }

    // Virtual method for C ABI access and custom callback
    virtual bool isPassiveInteractor(QWidget* widget) override {
        auto ispassiveinteractor_cb = qdesignerwidgetfactoryinterface_ispassiveinteractor_callback;
        if (ispassiveinteractor_cb) {
            QWidget* cbval1 = widget;

            bool callback_ret = ispassiveinteractor_cb(this, cbval1);
            return callback_ret;
        }
        return {};
    }

    // Virtual method for C ABI access and custom callback
    virtual void initialize(QObject* object) const override {
        auto initialize_cb = qdesignerwidgetfactoryinterface_initialize_callback;
        if (initialize_cb) {
            QObject* cbval1 = object;

            initialize_cb(this, cbval1);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* event) override {
        if (qdesignerwidgetfactoryinterface_event_isbase) {
            qdesignerwidgetfactoryinterface_event_isbase = false;
            return QDesignerWidgetFactoryInterface::event(event);
        }
        auto event_cb = qdesignerwidgetfactoryinterface_event_callback;
        if (event_cb) {
            QEvent* cbval1 = event;

            bool callback_ret = event_cb(this, cbval1);
            return callback_ret;
        }
        return QDesignerWidgetFactoryInterface::event(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* watched, QEvent* event) override {
        if (qdesignerwidgetfactoryinterface_eventfilter_isbase) {
            qdesignerwidgetfactoryinterface_eventfilter_isbase = false;
            return QDesignerWidgetFactoryInterface::eventFilter(watched, event);
        }
        auto eventfilter_cb = qdesignerwidgetfactoryinterface_eventfilter_callback;
        if (eventfilter_cb) {
            QObject* cbval1 = watched;
            QEvent* cbval2 = event;

            bool callback_ret = eventfilter_cb(this, cbval1, cbval2);
            return callback_ret;
        }
        return QDesignerWidgetFactoryInterface::eventFilter(watched, event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (qdesignerwidgetfactoryinterface_timerevent_isbase) {
            qdesignerwidgetfactoryinterface_timerevent_isbase = false;
            QDesignerWidgetFactoryInterface::timerEvent(event);
            return;
        }
        auto timerevent_cb = qdesignerwidgetfactoryinterface_timerevent_callback;
        if (timerevent_cb) {
            QTimerEvent* cbval1 = event;

            timerevent_cb(this, cbval1);
            return;
        }
        QDesignerWidgetFactoryInterface::timerEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (qdesignerwidgetfactoryinterface_childevent_isbase) {
            qdesignerwidgetfactoryinterface_childevent_isbase = false;
            QDesignerWidgetFactoryInterface::childEvent(event);
            return;
        }
        auto childevent_cb = qdesignerwidgetfactoryinterface_childevent_callback;
        if (childevent_cb) {
            QChildEvent* cbval1 = event;

            childevent_cb(this, cbval1);
            return;
        }
        QDesignerWidgetFactoryInterface::childEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (qdesignerwidgetfactoryinterface_customevent_isbase) {
            qdesignerwidgetfactoryinterface_customevent_isbase = false;
            QDesignerWidgetFactoryInterface::customEvent(event);
            return;
        }
        auto customevent_cb = qdesignerwidgetfactoryinterface_customevent_callback;
        if (customevent_cb) {
            QEvent* cbval1 = event;

            customevent_cb(this, cbval1);
            return;
        }
        QDesignerWidgetFactoryInterface::customEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (qdesignerwidgetfactoryinterface_connectnotify_isbase) {
            qdesignerwidgetfactoryinterface_connectnotify_isbase = false;
            QDesignerWidgetFactoryInterface::connectNotify(signal);
            return;
        }
        auto connectnotify_cb = qdesignerwidgetfactoryinterface_connectnotify_callback;
        if (connectnotify_cb) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            connectnotify_cb(this, cbval1);
            return;
        }
        QDesignerWidgetFactoryInterface::connectNotify(signal);
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (qdesignerwidgetfactoryinterface_disconnectnotify_isbase) {
            qdesignerwidgetfactoryinterface_disconnectnotify_isbase = false;
            QDesignerWidgetFactoryInterface::disconnectNotify(signal);
            return;
        }
        auto disconnectnotify_cb = qdesignerwidgetfactoryinterface_disconnectnotify_callback;
        if (disconnectnotify_cb) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            disconnectnotify_cb(this, cbval1);
            return;
        }
        QDesignerWidgetFactoryInterface::disconnectNotify(signal);
    }

    // Virtual method for C ABI access and custom callback
    QObject* sender() const {
        if (qdesignerwidgetfactoryinterface_sender_isbase) {
            qdesignerwidgetfactoryinterface_sender_isbase = false;
            return QDesignerWidgetFactoryInterface::sender();
        }
        auto sender_cb = qdesignerwidgetfactoryinterface_sender_callback;
        if (sender_cb) {
            QObject* callback_ret = sender_cb();
            return callback_ret;
        }
        return QDesignerWidgetFactoryInterface::sender();
    }

    // Virtual method for C ABI access and custom callback
    int senderSignalIndex() const {
        if (qdesignerwidgetfactoryinterface_sendersignalindex_isbase) {
            qdesignerwidgetfactoryinterface_sendersignalindex_isbase = false;
            return QDesignerWidgetFactoryInterface::senderSignalIndex();
        }
        auto sendersignalindex_cb = qdesignerwidgetfactoryinterface_sendersignalindex_callback;
        if (sendersignalindex_cb) {
            int callback_ret = sendersignalindex_cb();
            return static_cast<int>(callback_ret);
        }
        return QDesignerWidgetFactoryInterface::senderSignalIndex();
    }

    // Virtual method for C ABI access and custom callback
    int receivers(const char* signal) const {
        if (qdesignerwidgetfactoryinterface_receivers_isbase) {
            qdesignerwidgetfactoryinterface_receivers_isbase = false;
            return QDesignerWidgetFactoryInterface::receivers(signal);
        }
        auto receivers_cb = qdesignerwidgetfactoryinterface_receivers_callback;
        if (receivers_cb) {
            const char* cbval1 = (const char*)signal;

            int callback_ret = receivers_cb(this, cbval1);
            return static_cast<int>(callback_ret);
        }
        return QDesignerWidgetFactoryInterface::receivers(signal);
    }

    // Virtual method for C ABI access and custom callback
    bool isSignalConnected(const QMetaMethod& signal) const {
        if (qdesignerwidgetfactoryinterface_issignalconnected_isbase) {
            qdesignerwidgetfactoryinterface_issignalconnected_isbase = false;
            return QDesignerWidgetFactoryInterface::isSignalConnected(signal);
        }
        auto issignalconnected_cb = qdesignerwidgetfactoryinterface_issignalconnected_callback;
        if (issignalconnected_cb) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            bool callback_ret = issignalconnected_cb(this, cbval1);
            return callback_ret;
        }
        return QDesignerWidgetFactoryInterface::isSignalConnected(signal);
    }

    // Friend functions
    friend void QDesignerWidgetFactoryInterface_TimerEvent(QDesignerWidgetFactoryInterface* self, QTimerEvent* event);
    friend void QDesignerWidgetFactoryInterface_SuperTimerEvent(QDesignerWidgetFactoryInterface* self, QTimerEvent* event);
    friend void QDesignerWidgetFactoryInterface_ChildEvent(QDesignerWidgetFactoryInterface* self, QChildEvent* event);
    friend void QDesignerWidgetFactoryInterface_SuperChildEvent(QDesignerWidgetFactoryInterface* self, QChildEvent* event);
    friend void QDesignerWidgetFactoryInterface_CustomEvent(QDesignerWidgetFactoryInterface* self, QEvent* event);
    friend void QDesignerWidgetFactoryInterface_SuperCustomEvent(QDesignerWidgetFactoryInterface* self, QEvent* event);
    friend void QDesignerWidgetFactoryInterface_ConnectNotify(QDesignerWidgetFactoryInterface* self, const QMetaMethod* signal);
    friend void QDesignerWidgetFactoryInterface_SuperConnectNotify(QDesignerWidgetFactoryInterface* self, const QMetaMethod* signal);
    friend void QDesignerWidgetFactoryInterface_DisconnectNotify(QDesignerWidgetFactoryInterface* self, const QMetaMethod* signal);
    friend void QDesignerWidgetFactoryInterface_SuperDisconnectNotify(QDesignerWidgetFactoryInterface* self, const QMetaMethod* signal);
    friend QObject* QDesignerWidgetFactoryInterface_Sender(const QDesignerWidgetFactoryInterface* self);
    friend QObject* QDesignerWidgetFactoryInterface_SuperSender(const QDesignerWidgetFactoryInterface* self);
    friend int QDesignerWidgetFactoryInterface_SenderSignalIndex(const QDesignerWidgetFactoryInterface* self);
    friend int QDesignerWidgetFactoryInterface_SuperSenderSignalIndex(const QDesignerWidgetFactoryInterface* self);
    friend int QDesignerWidgetFactoryInterface_Receivers(const QDesignerWidgetFactoryInterface* self, const char* signal);
    friend int QDesignerWidgetFactoryInterface_SuperReceivers(const QDesignerWidgetFactoryInterface* self, const char* signal);
    friend bool QDesignerWidgetFactoryInterface_IsSignalConnected(const QDesignerWidgetFactoryInterface* self, const QMetaMethod* signal);
    friend bool QDesignerWidgetFactoryInterface_SuperIsSignalConnected(const QDesignerWidgetFactoryInterface* self, const QMetaMethod* signal);
};

#endif
