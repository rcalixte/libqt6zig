#pragma once
#ifndef SRC_DESIGNERC_LIBVIRTUALABSTRACTMETADATABASE_H
#define SRC_DESIGNERC_LIBVIRTUALABSTRACTMETADATABASE_H

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

// This class is a subclass of QDesignerMetaDataBaseItemInterface so that we can call protected methods
class VirtualQDesignerMetaDataBaseItemInterface : public QDesignerMetaDataBaseItemInterface {

  public:
    // Virtual class boolean flag
    bool isVirtualQDesignerMetaDataBaseItemInterface = true;

    // Virtual class public types (including callbacks)
    using QDesignerMetaDataBaseItemInterface_Name_Callback = const char* (*)();
    using QDesignerMetaDataBaseItemInterface_SetName_Callback = void (*)(QDesignerMetaDataBaseItemInterface*, libqt_string);
    using QDesignerMetaDataBaseItemInterface_TabOrder_Callback = QWidget** (*)();
    using QDesignerMetaDataBaseItemInterface_SetTabOrder_Callback = void (*)(QDesignerMetaDataBaseItemInterface*, libqt_list /* of QWidget* */);
    using QDesignerMetaDataBaseItemInterface_Enabled_Callback = bool (*)();
    using QDesignerMetaDataBaseItemInterface_SetEnabled_Callback = void (*)(QDesignerMetaDataBaseItemInterface*, bool);

  protected:
    // Instance callback storage
    QDesignerMetaDataBaseItemInterface_Name_Callback qdesignermetadatabaseiteminterface_name_callback = nullptr;
    QDesignerMetaDataBaseItemInterface_SetName_Callback qdesignermetadatabaseiteminterface_setname_callback = nullptr;
    QDesignerMetaDataBaseItemInterface_TabOrder_Callback qdesignermetadatabaseiteminterface_taborder_callback = nullptr;
    QDesignerMetaDataBaseItemInterface_SetTabOrder_Callback qdesignermetadatabaseiteminterface_settaborder_callback = nullptr;
    QDesignerMetaDataBaseItemInterface_Enabled_Callback qdesignermetadatabaseiteminterface_enabled_callback = nullptr;
    QDesignerMetaDataBaseItemInterface_SetEnabled_Callback qdesignermetadatabaseiteminterface_setenabled_callback = nullptr;

    // Instance base flags
    mutable bool qdesignermetadatabaseiteminterface_name_isbase = false;
    mutable bool qdesignermetadatabaseiteminterface_setname_isbase = false;
    mutable bool qdesignermetadatabaseiteminterface_taborder_isbase = false;
    mutable bool qdesignermetadatabaseiteminterface_settaborder_isbase = false;
    mutable bool qdesignermetadatabaseiteminterface_enabled_isbase = false;
    mutable bool qdesignermetadatabaseiteminterface_setenabled_isbase = false;

  public:
    VirtualQDesignerMetaDataBaseItemInterface() : QDesignerMetaDataBaseItemInterface() {};

    ~VirtualQDesignerMetaDataBaseItemInterface() {
        qdesignermetadatabaseiteminterface_name_callback = nullptr;
        qdesignermetadatabaseiteminterface_setname_callback = nullptr;
        qdesignermetadatabaseiteminterface_taborder_callback = nullptr;
        qdesignermetadatabaseiteminterface_settaborder_callback = nullptr;
        qdesignermetadatabaseiteminterface_enabled_callback = nullptr;
        qdesignermetadatabaseiteminterface_setenabled_callback = nullptr;
    }

    // Callback setters
    inline void setQDesignerMetaDataBaseItemInterface_Name_Callback(QDesignerMetaDataBaseItemInterface_Name_Callback cb) { qdesignermetadatabaseiteminterface_name_callback = cb; }
    inline void setQDesignerMetaDataBaseItemInterface_SetName_Callback(QDesignerMetaDataBaseItemInterface_SetName_Callback cb) { qdesignermetadatabaseiteminterface_setname_callback = cb; }
    inline void setQDesignerMetaDataBaseItemInterface_TabOrder_Callback(QDesignerMetaDataBaseItemInterface_TabOrder_Callback cb) { qdesignermetadatabaseiteminterface_taborder_callback = cb; }
    inline void setQDesignerMetaDataBaseItemInterface_SetTabOrder_Callback(QDesignerMetaDataBaseItemInterface_SetTabOrder_Callback cb) { qdesignermetadatabaseiteminterface_settaborder_callback = cb; }
    inline void setQDesignerMetaDataBaseItemInterface_Enabled_Callback(QDesignerMetaDataBaseItemInterface_Enabled_Callback cb) { qdesignermetadatabaseiteminterface_enabled_callback = cb; }
    inline void setQDesignerMetaDataBaseItemInterface_SetEnabled_Callback(QDesignerMetaDataBaseItemInterface_SetEnabled_Callback cb) { qdesignermetadatabaseiteminterface_setenabled_callback = cb; }

    // Base flag setters
    inline void setQDesignerMetaDataBaseItemInterface_Name_IsBase(bool value) const { qdesignermetadatabaseiteminterface_name_isbase = value; }
    inline void setQDesignerMetaDataBaseItemInterface_SetName_IsBase(bool value) const { qdesignermetadatabaseiteminterface_setname_isbase = value; }
    inline void setQDesignerMetaDataBaseItemInterface_TabOrder_IsBase(bool value) const { qdesignermetadatabaseiteminterface_taborder_isbase = value; }
    inline void setQDesignerMetaDataBaseItemInterface_SetTabOrder_IsBase(bool value) const { qdesignermetadatabaseiteminterface_settaborder_isbase = value; }
    inline void setQDesignerMetaDataBaseItemInterface_Enabled_IsBase(bool value) const { qdesignermetadatabaseiteminterface_enabled_isbase = value; }
    inline void setQDesignerMetaDataBaseItemInterface_SetEnabled_IsBase(bool value) const { qdesignermetadatabaseiteminterface_setenabled_isbase = value; }

    // Virtual method for C ABI access and custom callback
    virtual QString name() const override {
        if (qdesignermetadatabaseiteminterface_name_callback != nullptr) {
            const char* callback_ret = qdesignermetadatabaseiteminterface_name_callback();
            QString callback_ret_QString = QString::fromUtf8(callback_ret);
            return callback_ret_QString;
        } else {
            return {};
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void setName(const QString& name) override {
        if (qdesignermetadatabaseiteminterface_setname_callback != nullptr) {
            const QString name_ret = name;
            // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
            QByteArray name_b = name_ret.toUtf8();
            libqt_string name_str;
            name_str.len = name_b.length();
            name_str.data = static_cast<const char*>(malloc(name_str.len + 1));
            memcpy((void*)name_str.data, name_b.data(), name_str.len);
            ((char*)name_str.data)[name_str.len] = '\0';
            libqt_string cbval1 = name_str;

            qdesignermetadatabaseiteminterface_setname_callback(this, cbval1);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QList<QWidget*> tabOrder() const override {
        if (qdesignermetadatabaseiteminterface_taborder_callback != nullptr) {
            QWidget** callback_ret = qdesignermetadatabaseiteminterface_taborder_callback();
            QList<QWidget*> callback_ret_QList;
            // Iterate until null pointer sentinel
            for (QWidget** ptridx = callback_ret; *ptridx != nullptr; ptridx++) {
                callback_ret_QList.push_back(*ptridx);
            }
            free(callback_ret);
            return callback_ret_QList;
        } else {
            return {};
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void setTabOrder(const QList<QWidget*>& tabOrder) override {
        if (qdesignermetadatabaseiteminterface_settaborder_callback != nullptr) {
            const QList<QWidget*>& tabOrder_ret = tabOrder;
            // Convert QList<> from C++ memory to manually-managed C memory
            QWidget** tabOrder_arr = static_cast<QWidget**>(malloc(sizeof(QWidget*) * (tabOrder_ret.size() + 1)));
            for (qsizetype i = 0; i < tabOrder_ret.size(); ++i) {
                tabOrder_arr[i] = tabOrder_ret[i];
            }
            libqt_list tabOrder_out;
            tabOrder_out.len = tabOrder_ret.size();
            tabOrder_out.data = static_cast<void*>(tabOrder_arr);
            libqt_list /* of QWidget* */ cbval1 = tabOrder_out;

            qdesignermetadatabaseiteminterface_settaborder_callback(this, cbval1);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool enabled() const override {
        if (qdesignermetadatabaseiteminterface_enabled_callback != nullptr) {
            bool callback_ret = qdesignermetadatabaseiteminterface_enabled_callback();
            return callback_ret;
        } else {
            return {};
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void setEnabled(bool b) override {
        if (qdesignermetadatabaseiteminterface_setenabled_callback != nullptr) {
            bool cbval1 = b;

            qdesignermetadatabaseiteminterface_setenabled_callback(this, cbval1);
        }
    }
};

// This class is a subclass of QDesignerMetaDataBaseInterface so that we can call protected methods
class VirtualQDesignerMetaDataBaseInterface : public QDesignerMetaDataBaseInterface {

  public:
    // Virtual class boolean flag
    bool isVirtualQDesignerMetaDataBaseInterface = true;

    // Virtual class public types (including callbacks)
    using QDesignerMetaDataBaseInterface_Metacall_Callback = int (*)(QDesignerMetaDataBaseInterface*, int, int, void**);
    using QDesignerMetaDataBaseInterface_Item_Callback = QDesignerMetaDataBaseItemInterface* (*)(const QDesignerMetaDataBaseInterface*, QObject*);
    using QDesignerMetaDataBaseInterface_Add_Callback = void (*)(QDesignerMetaDataBaseInterface*, QObject*);
    using QDesignerMetaDataBaseInterface_Remove_Callback = void (*)(QDesignerMetaDataBaseInterface*, QObject*);
    using QDesignerMetaDataBaseInterface_Objects_Callback = QObject** (*)();
    using QDesignerMetaDataBaseInterface_Core_Callback = QDesignerFormEditorInterface* (*)();
    using QDesignerMetaDataBaseInterface_Event_Callback = bool (*)(QDesignerMetaDataBaseInterface*, QEvent*);
    using QDesignerMetaDataBaseInterface_EventFilter_Callback = bool (*)(QDesignerMetaDataBaseInterface*, QObject*, QEvent*);
    using QDesignerMetaDataBaseInterface_TimerEvent_Callback = void (*)(QDesignerMetaDataBaseInterface*, QTimerEvent*);
    using QDesignerMetaDataBaseInterface_ChildEvent_Callback = void (*)(QDesignerMetaDataBaseInterface*, QChildEvent*);
    using QDesignerMetaDataBaseInterface_CustomEvent_Callback = void (*)(QDesignerMetaDataBaseInterface*, QEvent*);
    using QDesignerMetaDataBaseInterface_ConnectNotify_Callback = void (*)(QDesignerMetaDataBaseInterface*, QMetaMethod*);
    using QDesignerMetaDataBaseInterface_DisconnectNotify_Callback = void (*)(QDesignerMetaDataBaseInterface*, QMetaMethod*);
    using QDesignerMetaDataBaseInterface_Sender_Callback = QObject* (*)();
    using QDesignerMetaDataBaseInterface_SenderSignalIndex_Callback = int (*)();
    using QDesignerMetaDataBaseInterface_Receivers_Callback = int (*)(const QDesignerMetaDataBaseInterface*, const char*);
    using QDesignerMetaDataBaseInterface_IsSignalConnected_Callback = bool (*)(const QDesignerMetaDataBaseInterface*, QMetaMethod*);

  protected:
    // Instance callback storage
    QDesignerMetaDataBaseInterface_Metacall_Callback qdesignermetadatabaseinterface_metacall_callback = nullptr;
    QDesignerMetaDataBaseInterface_Item_Callback qdesignermetadatabaseinterface_item_callback = nullptr;
    QDesignerMetaDataBaseInterface_Add_Callback qdesignermetadatabaseinterface_add_callback = nullptr;
    QDesignerMetaDataBaseInterface_Remove_Callback qdesignermetadatabaseinterface_remove_callback = nullptr;
    QDesignerMetaDataBaseInterface_Objects_Callback qdesignermetadatabaseinterface_objects_callback = nullptr;
    QDesignerMetaDataBaseInterface_Core_Callback qdesignermetadatabaseinterface_core_callback = nullptr;
    QDesignerMetaDataBaseInterface_Event_Callback qdesignermetadatabaseinterface_event_callback = nullptr;
    QDesignerMetaDataBaseInterface_EventFilter_Callback qdesignermetadatabaseinterface_eventfilter_callback = nullptr;
    QDesignerMetaDataBaseInterface_TimerEvent_Callback qdesignermetadatabaseinterface_timerevent_callback = nullptr;
    QDesignerMetaDataBaseInterface_ChildEvent_Callback qdesignermetadatabaseinterface_childevent_callback = nullptr;
    QDesignerMetaDataBaseInterface_CustomEvent_Callback qdesignermetadatabaseinterface_customevent_callback = nullptr;
    QDesignerMetaDataBaseInterface_ConnectNotify_Callback qdesignermetadatabaseinterface_connectnotify_callback = nullptr;
    QDesignerMetaDataBaseInterface_DisconnectNotify_Callback qdesignermetadatabaseinterface_disconnectnotify_callback = nullptr;
    QDesignerMetaDataBaseInterface_Sender_Callback qdesignermetadatabaseinterface_sender_callback = nullptr;
    QDesignerMetaDataBaseInterface_SenderSignalIndex_Callback qdesignermetadatabaseinterface_sendersignalindex_callback = nullptr;
    QDesignerMetaDataBaseInterface_Receivers_Callback qdesignermetadatabaseinterface_receivers_callback = nullptr;
    QDesignerMetaDataBaseInterface_IsSignalConnected_Callback qdesignermetadatabaseinterface_issignalconnected_callback = nullptr;

    // Instance base flags
    mutable bool qdesignermetadatabaseinterface_metacall_isbase = false;
    mutable bool qdesignermetadatabaseinterface_item_isbase = false;
    mutable bool qdesignermetadatabaseinterface_add_isbase = false;
    mutable bool qdesignermetadatabaseinterface_remove_isbase = false;
    mutable bool qdesignermetadatabaseinterface_objects_isbase = false;
    mutable bool qdesignermetadatabaseinterface_core_isbase = false;
    mutable bool qdesignermetadatabaseinterface_event_isbase = false;
    mutable bool qdesignermetadatabaseinterface_eventfilter_isbase = false;
    mutable bool qdesignermetadatabaseinterface_timerevent_isbase = false;
    mutable bool qdesignermetadatabaseinterface_childevent_isbase = false;
    mutable bool qdesignermetadatabaseinterface_customevent_isbase = false;
    mutable bool qdesignermetadatabaseinterface_connectnotify_isbase = false;
    mutable bool qdesignermetadatabaseinterface_disconnectnotify_isbase = false;
    mutable bool qdesignermetadatabaseinterface_sender_isbase = false;
    mutable bool qdesignermetadatabaseinterface_sendersignalindex_isbase = false;
    mutable bool qdesignermetadatabaseinterface_receivers_isbase = false;
    mutable bool qdesignermetadatabaseinterface_issignalconnected_isbase = false;

  public:
    VirtualQDesignerMetaDataBaseInterface() : QDesignerMetaDataBaseInterface() {};
    VirtualQDesignerMetaDataBaseInterface(QObject* parent) : QDesignerMetaDataBaseInterface(parent) {};

    ~VirtualQDesignerMetaDataBaseInterface() {
        qdesignermetadatabaseinterface_metacall_callback = nullptr;
        qdesignermetadatabaseinterface_item_callback = nullptr;
        qdesignermetadatabaseinterface_add_callback = nullptr;
        qdesignermetadatabaseinterface_remove_callback = nullptr;
        qdesignermetadatabaseinterface_objects_callback = nullptr;
        qdesignermetadatabaseinterface_core_callback = nullptr;
        qdesignermetadatabaseinterface_event_callback = nullptr;
        qdesignermetadatabaseinterface_eventfilter_callback = nullptr;
        qdesignermetadatabaseinterface_timerevent_callback = nullptr;
        qdesignermetadatabaseinterface_childevent_callback = nullptr;
        qdesignermetadatabaseinterface_customevent_callback = nullptr;
        qdesignermetadatabaseinterface_connectnotify_callback = nullptr;
        qdesignermetadatabaseinterface_disconnectnotify_callback = nullptr;
        qdesignermetadatabaseinterface_sender_callback = nullptr;
        qdesignermetadatabaseinterface_sendersignalindex_callback = nullptr;
        qdesignermetadatabaseinterface_receivers_callback = nullptr;
        qdesignermetadatabaseinterface_issignalconnected_callback = nullptr;
    }

    // Callback setters
    inline void setQDesignerMetaDataBaseInterface_Metacall_Callback(QDesignerMetaDataBaseInterface_Metacall_Callback cb) { qdesignermetadatabaseinterface_metacall_callback = cb; }
    inline void setQDesignerMetaDataBaseInterface_Item_Callback(QDesignerMetaDataBaseInterface_Item_Callback cb) { qdesignermetadatabaseinterface_item_callback = cb; }
    inline void setQDesignerMetaDataBaseInterface_Add_Callback(QDesignerMetaDataBaseInterface_Add_Callback cb) { qdesignermetadatabaseinterface_add_callback = cb; }
    inline void setQDesignerMetaDataBaseInterface_Remove_Callback(QDesignerMetaDataBaseInterface_Remove_Callback cb) { qdesignermetadatabaseinterface_remove_callback = cb; }
    inline void setQDesignerMetaDataBaseInterface_Objects_Callback(QDesignerMetaDataBaseInterface_Objects_Callback cb) { qdesignermetadatabaseinterface_objects_callback = cb; }
    inline void setQDesignerMetaDataBaseInterface_Core_Callback(QDesignerMetaDataBaseInterface_Core_Callback cb) { qdesignermetadatabaseinterface_core_callback = cb; }
    inline void setQDesignerMetaDataBaseInterface_Event_Callback(QDesignerMetaDataBaseInterface_Event_Callback cb) { qdesignermetadatabaseinterface_event_callback = cb; }
    inline void setQDesignerMetaDataBaseInterface_EventFilter_Callback(QDesignerMetaDataBaseInterface_EventFilter_Callback cb) { qdesignermetadatabaseinterface_eventfilter_callback = cb; }
    inline void setQDesignerMetaDataBaseInterface_TimerEvent_Callback(QDesignerMetaDataBaseInterface_TimerEvent_Callback cb) { qdesignermetadatabaseinterface_timerevent_callback = cb; }
    inline void setQDesignerMetaDataBaseInterface_ChildEvent_Callback(QDesignerMetaDataBaseInterface_ChildEvent_Callback cb) { qdesignermetadatabaseinterface_childevent_callback = cb; }
    inline void setQDesignerMetaDataBaseInterface_CustomEvent_Callback(QDesignerMetaDataBaseInterface_CustomEvent_Callback cb) { qdesignermetadatabaseinterface_customevent_callback = cb; }
    inline void setQDesignerMetaDataBaseInterface_ConnectNotify_Callback(QDesignerMetaDataBaseInterface_ConnectNotify_Callback cb) { qdesignermetadatabaseinterface_connectnotify_callback = cb; }
    inline void setQDesignerMetaDataBaseInterface_DisconnectNotify_Callback(QDesignerMetaDataBaseInterface_DisconnectNotify_Callback cb) { qdesignermetadatabaseinterface_disconnectnotify_callback = cb; }
    inline void setQDesignerMetaDataBaseInterface_Sender_Callback(QDesignerMetaDataBaseInterface_Sender_Callback cb) { qdesignermetadatabaseinterface_sender_callback = cb; }
    inline void setQDesignerMetaDataBaseInterface_SenderSignalIndex_Callback(QDesignerMetaDataBaseInterface_SenderSignalIndex_Callback cb) { qdesignermetadatabaseinterface_sendersignalindex_callback = cb; }
    inline void setQDesignerMetaDataBaseInterface_Receivers_Callback(QDesignerMetaDataBaseInterface_Receivers_Callback cb) { qdesignermetadatabaseinterface_receivers_callback = cb; }
    inline void setQDesignerMetaDataBaseInterface_IsSignalConnected_Callback(QDesignerMetaDataBaseInterface_IsSignalConnected_Callback cb) { qdesignermetadatabaseinterface_issignalconnected_callback = cb; }

    // Base flag setters
    inline void setQDesignerMetaDataBaseInterface_Metacall_IsBase(bool value) const { qdesignermetadatabaseinterface_metacall_isbase = value; }
    inline void setQDesignerMetaDataBaseInterface_Item_IsBase(bool value) const { qdesignermetadatabaseinterface_item_isbase = value; }
    inline void setQDesignerMetaDataBaseInterface_Add_IsBase(bool value) const { qdesignermetadatabaseinterface_add_isbase = value; }
    inline void setQDesignerMetaDataBaseInterface_Remove_IsBase(bool value) const { qdesignermetadatabaseinterface_remove_isbase = value; }
    inline void setQDesignerMetaDataBaseInterface_Objects_IsBase(bool value) const { qdesignermetadatabaseinterface_objects_isbase = value; }
    inline void setQDesignerMetaDataBaseInterface_Core_IsBase(bool value) const { qdesignermetadatabaseinterface_core_isbase = value; }
    inline void setQDesignerMetaDataBaseInterface_Event_IsBase(bool value) const { qdesignermetadatabaseinterface_event_isbase = value; }
    inline void setQDesignerMetaDataBaseInterface_EventFilter_IsBase(bool value) const { qdesignermetadatabaseinterface_eventfilter_isbase = value; }
    inline void setQDesignerMetaDataBaseInterface_TimerEvent_IsBase(bool value) const { qdesignermetadatabaseinterface_timerevent_isbase = value; }
    inline void setQDesignerMetaDataBaseInterface_ChildEvent_IsBase(bool value) const { qdesignermetadatabaseinterface_childevent_isbase = value; }
    inline void setQDesignerMetaDataBaseInterface_CustomEvent_IsBase(bool value) const { qdesignermetadatabaseinterface_customevent_isbase = value; }
    inline void setQDesignerMetaDataBaseInterface_ConnectNotify_IsBase(bool value) const { qdesignermetadatabaseinterface_connectnotify_isbase = value; }
    inline void setQDesignerMetaDataBaseInterface_DisconnectNotify_IsBase(bool value) const { qdesignermetadatabaseinterface_disconnectnotify_isbase = value; }
    inline void setQDesignerMetaDataBaseInterface_Sender_IsBase(bool value) const { qdesignermetadatabaseinterface_sender_isbase = value; }
    inline void setQDesignerMetaDataBaseInterface_SenderSignalIndex_IsBase(bool value) const { qdesignermetadatabaseinterface_sendersignalindex_isbase = value; }
    inline void setQDesignerMetaDataBaseInterface_Receivers_IsBase(bool value) const { qdesignermetadatabaseinterface_receivers_isbase = value; }
    inline void setQDesignerMetaDataBaseInterface_IsSignalConnected_IsBase(bool value) const { qdesignermetadatabaseinterface_issignalconnected_isbase = value; }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (qdesignermetadatabaseinterface_metacall_isbase) {
            qdesignermetadatabaseinterface_metacall_isbase = false;
            return QDesignerMetaDataBaseInterface::qt_metacall(param1, param2, param3);
        } else if (qdesignermetadatabaseinterface_metacall_callback != nullptr) {
            int cbval1 = static_cast<int>(param1);
            int cbval2 = param2;
            void** cbval3 = param3;

            int callback_ret = qdesignermetadatabaseinterface_metacall_callback(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        } else {
            return QDesignerMetaDataBaseInterface::qt_metacall(param1, param2, param3);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QDesignerMetaDataBaseItemInterface* item(QObject* object) const override {
        if (qdesignermetadatabaseinterface_item_callback != nullptr) {
            QObject* cbval1 = object;

            QDesignerMetaDataBaseItemInterface* callback_ret = qdesignermetadatabaseinterface_item_callback(this, cbval1);
            return callback_ret;
        } else {
            return {};
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void add(QObject* object) override {
        if (qdesignermetadatabaseinterface_add_callback != nullptr) {
            QObject* cbval1 = object;

            qdesignermetadatabaseinterface_add_callback(this, cbval1);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void remove(QObject* object) override {
        if (qdesignermetadatabaseinterface_remove_callback != nullptr) {
            QObject* cbval1 = object;

            qdesignermetadatabaseinterface_remove_callback(this, cbval1);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QList<QObject*> objects() const override {
        if (qdesignermetadatabaseinterface_objects_callback != nullptr) {
            QObject** callback_ret = qdesignermetadatabaseinterface_objects_callback();
            QList<QObject*> callback_ret_QList;
            // Iterate until null pointer sentinel
            for (QObject** ptridx = callback_ret; *ptridx != nullptr; ptridx++) {
                callback_ret_QList.push_back(*ptridx);
            }
            free(callback_ret);
            return callback_ret_QList;
        } else {
            return {};
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QDesignerFormEditorInterface* core() const override {
        if (qdesignermetadatabaseinterface_core_callback != nullptr) {
            QDesignerFormEditorInterface* callback_ret = qdesignermetadatabaseinterface_core_callback();
            return callback_ret;
        } else {
            return {};
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* event) override {
        if (qdesignermetadatabaseinterface_event_isbase) {
            qdesignermetadatabaseinterface_event_isbase = false;
            return QDesignerMetaDataBaseInterface::event(event);
        } else if (qdesignermetadatabaseinterface_event_callback != nullptr) {
            QEvent* cbval1 = event;

            bool callback_ret = qdesignermetadatabaseinterface_event_callback(this, cbval1);
            return callback_ret;
        } else {
            return QDesignerMetaDataBaseInterface::event(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* watched, QEvent* event) override {
        if (qdesignermetadatabaseinterface_eventfilter_isbase) {
            qdesignermetadatabaseinterface_eventfilter_isbase = false;
            return QDesignerMetaDataBaseInterface::eventFilter(watched, event);
        } else if (qdesignermetadatabaseinterface_eventfilter_callback != nullptr) {
            QObject* cbval1 = watched;
            QEvent* cbval2 = event;

            bool callback_ret = qdesignermetadatabaseinterface_eventfilter_callback(this, cbval1, cbval2);
            return callback_ret;
        } else {
            return QDesignerMetaDataBaseInterface::eventFilter(watched, event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (qdesignermetadatabaseinterface_timerevent_isbase) {
            qdesignermetadatabaseinterface_timerevent_isbase = false;
            QDesignerMetaDataBaseInterface::timerEvent(event);
        } else if (qdesignermetadatabaseinterface_timerevent_callback != nullptr) {
            QTimerEvent* cbval1 = event;

            qdesignermetadatabaseinterface_timerevent_callback(this, cbval1);
        } else {
            QDesignerMetaDataBaseInterface::timerEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (qdesignermetadatabaseinterface_childevent_isbase) {
            qdesignermetadatabaseinterface_childevent_isbase = false;
            QDesignerMetaDataBaseInterface::childEvent(event);
        } else if (qdesignermetadatabaseinterface_childevent_callback != nullptr) {
            QChildEvent* cbval1 = event;

            qdesignermetadatabaseinterface_childevent_callback(this, cbval1);
        } else {
            QDesignerMetaDataBaseInterface::childEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (qdesignermetadatabaseinterface_customevent_isbase) {
            qdesignermetadatabaseinterface_customevent_isbase = false;
            QDesignerMetaDataBaseInterface::customEvent(event);
        } else if (qdesignermetadatabaseinterface_customevent_callback != nullptr) {
            QEvent* cbval1 = event;

            qdesignermetadatabaseinterface_customevent_callback(this, cbval1);
        } else {
            QDesignerMetaDataBaseInterface::customEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (qdesignermetadatabaseinterface_connectnotify_isbase) {
            qdesignermetadatabaseinterface_connectnotify_isbase = false;
            QDesignerMetaDataBaseInterface::connectNotify(signal);
        } else if (qdesignermetadatabaseinterface_connectnotify_callback != nullptr) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            qdesignermetadatabaseinterface_connectnotify_callback(this, cbval1);
        } else {
            QDesignerMetaDataBaseInterface::connectNotify(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (qdesignermetadatabaseinterface_disconnectnotify_isbase) {
            qdesignermetadatabaseinterface_disconnectnotify_isbase = false;
            QDesignerMetaDataBaseInterface::disconnectNotify(signal);
        } else if (qdesignermetadatabaseinterface_disconnectnotify_callback != nullptr) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            qdesignermetadatabaseinterface_disconnectnotify_callback(this, cbval1);
        } else {
            QDesignerMetaDataBaseInterface::disconnectNotify(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    QObject* sender() const {
        if (qdesignermetadatabaseinterface_sender_isbase) {
            qdesignermetadatabaseinterface_sender_isbase = false;
            return QDesignerMetaDataBaseInterface::sender();
        } else if (qdesignermetadatabaseinterface_sender_callback != nullptr) {
            QObject* callback_ret = qdesignermetadatabaseinterface_sender_callback();
            return callback_ret;
        } else {
            return QDesignerMetaDataBaseInterface::sender();
        }
    }

    // Virtual method for C ABI access and custom callback
    int senderSignalIndex() const {
        if (qdesignermetadatabaseinterface_sendersignalindex_isbase) {
            qdesignermetadatabaseinterface_sendersignalindex_isbase = false;
            return QDesignerMetaDataBaseInterface::senderSignalIndex();
        } else if (qdesignermetadatabaseinterface_sendersignalindex_callback != nullptr) {
            int callback_ret = qdesignermetadatabaseinterface_sendersignalindex_callback();
            return static_cast<int>(callback_ret);
        } else {
            return QDesignerMetaDataBaseInterface::senderSignalIndex();
        }
    }

    // Virtual method for C ABI access and custom callback
    int receivers(const char* signal) const {
        if (qdesignermetadatabaseinterface_receivers_isbase) {
            qdesignermetadatabaseinterface_receivers_isbase = false;
            return QDesignerMetaDataBaseInterface::receivers(signal);
        } else if (qdesignermetadatabaseinterface_receivers_callback != nullptr) {
            const char* cbval1 = (const char*)signal;

            int callback_ret = qdesignermetadatabaseinterface_receivers_callback(this, cbval1);
            return static_cast<int>(callback_ret);
        } else {
            return QDesignerMetaDataBaseInterface::receivers(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    bool isSignalConnected(const QMetaMethod& signal) const {
        if (qdesignermetadatabaseinterface_issignalconnected_isbase) {
            qdesignermetadatabaseinterface_issignalconnected_isbase = false;
            return QDesignerMetaDataBaseInterface::isSignalConnected(signal);
        } else if (qdesignermetadatabaseinterface_issignalconnected_callback != nullptr) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            bool callback_ret = qdesignermetadatabaseinterface_issignalconnected_callback(this, cbval1);
            return callback_ret;
        } else {
            return QDesignerMetaDataBaseInterface::isSignalConnected(signal);
        }
    }

    // Friend functions
    friend void QDesignerMetaDataBaseInterface_TimerEvent(QDesignerMetaDataBaseInterface* self, QTimerEvent* event);
    friend void QDesignerMetaDataBaseInterface_QBaseTimerEvent(QDesignerMetaDataBaseInterface* self, QTimerEvent* event);
    friend void QDesignerMetaDataBaseInterface_ChildEvent(QDesignerMetaDataBaseInterface* self, QChildEvent* event);
    friend void QDesignerMetaDataBaseInterface_QBaseChildEvent(QDesignerMetaDataBaseInterface* self, QChildEvent* event);
    friend void QDesignerMetaDataBaseInterface_CustomEvent(QDesignerMetaDataBaseInterface* self, QEvent* event);
    friend void QDesignerMetaDataBaseInterface_QBaseCustomEvent(QDesignerMetaDataBaseInterface* self, QEvent* event);
    friend void QDesignerMetaDataBaseInterface_ConnectNotify(QDesignerMetaDataBaseInterface* self, const QMetaMethod* signal);
    friend void QDesignerMetaDataBaseInterface_QBaseConnectNotify(QDesignerMetaDataBaseInterface* self, const QMetaMethod* signal);
    friend void QDesignerMetaDataBaseInterface_DisconnectNotify(QDesignerMetaDataBaseInterface* self, const QMetaMethod* signal);
    friend void QDesignerMetaDataBaseInterface_QBaseDisconnectNotify(QDesignerMetaDataBaseInterface* self, const QMetaMethod* signal);
    friend QObject* QDesignerMetaDataBaseInterface_Sender(const QDesignerMetaDataBaseInterface* self);
    friend QObject* QDesignerMetaDataBaseInterface_QBaseSender(const QDesignerMetaDataBaseInterface* self);
    friend int QDesignerMetaDataBaseInterface_SenderSignalIndex(const QDesignerMetaDataBaseInterface* self);
    friend int QDesignerMetaDataBaseInterface_QBaseSenderSignalIndex(const QDesignerMetaDataBaseInterface* self);
    friend int QDesignerMetaDataBaseInterface_Receivers(const QDesignerMetaDataBaseInterface* self, const char* signal);
    friend int QDesignerMetaDataBaseInterface_QBaseReceivers(const QDesignerMetaDataBaseInterface* self, const char* signal);
    friend bool QDesignerMetaDataBaseInterface_IsSignalConnected(const QDesignerMetaDataBaseInterface* self, const QMetaMethod* signal);
    friend bool QDesignerMetaDataBaseInterface_QBaseIsSignalConnected(const QDesignerMetaDataBaseInterface* self, const QMetaMethod* signal);
};

#endif
