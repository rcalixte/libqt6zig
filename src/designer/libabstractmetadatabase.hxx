#pragma once
#ifndef DESIGNER_LIBABSTRACTMETADATABASE_HXX
#define DESIGNER_LIBABSTRACTMETADATABASE_HXX

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

// This class is a subclass of QDesignerMetaDataBaseItemInterface
class VirtualQDesignerMetaDataBaseItemInterface : public QDesignerMetaDataBaseItemInterface {
  public:
    // Virtual class public types (including callbacks and access types)
    using QDesignerMetaDataBaseItemInterface_Name_Callback = const char* (*)(const QDesignerMetaDataBaseItemInterface*);
    using QDesignerMetaDataBaseItemInterface_SetName_Callback = void (*)(QDesignerMetaDataBaseItemInterface*, const char*);
    using QDesignerMetaDataBaseItemInterface_TabOrder_Callback = libqt_list /* of QWidget* */ (*)(const QDesignerMetaDataBaseItemInterface*);
    using QDesignerMetaDataBaseItemInterface_SetTabOrder_Callback = void (*)(QDesignerMetaDataBaseItemInterface*, libqt_list /* of QWidget* */);
    using QDesignerMetaDataBaseItemInterface_Enabled_Callback = bool (*)(const QDesignerMetaDataBaseItemInterface*);
    using QDesignerMetaDataBaseItemInterface_SetEnabled_Callback = void (*)(QDesignerMetaDataBaseItemInterface*, bool);

    // Instance callback storage
    QDesignerMetaDataBaseItemInterface_Name_Callback qdesignermetadatabaseiteminterface_name_callback = nullptr;
    QDesignerMetaDataBaseItemInterface_SetName_Callback qdesignermetadatabaseiteminterface_setname_callback = nullptr;
    QDesignerMetaDataBaseItemInterface_TabOrder_Callback qdesignermetadatabaseiteminterface_taborder_callback = nullptr;
    QDesignerMetaDataBaseItemInterface_SetTabOrder_Callback qdesignermetadatabaseiteminterface_settaborder_callback = nullptr;
    QDesignerMetaDataBaseItemInterface_Enabled_Callback qdesignermetadatabaseiteminterface_enabled_callback = nullptr;
    QDesignerMetaDataBaseItemInterface_SetEnabled_Callback qdesignermetadatabaseiteminterface_setenabled_callback = nullptr;

    VirtualQDesignerMetaDataBaseItemInterface() : QDesignerMetaDataBaseItemInterface() {};

    // Virtual method for C ABI access and custom callback
    virtual QString name() const override {
        if (qdesignermetadatabaseiteminterface_name_callback) {
            const char* callback_ret = qdesignermetadatabaseiteminterface_name_callback(this);
            QString callback_ret_QString = QString::fromUtf8(callback_ret);
            return callback_ret_QString;
        }
        // Pure virtual method
        qFatal("Error: Pure virtual method QDesignerMetaDataBaseItemInterface::name called without being implemented");
    }

    // Virtual method for C ABI access and custom callback
    virtual void setName(const QString& name) override {
        if (qdesignermetadatabaseiteminterface_setname_callback) {
            const auto name_ret = name;
            // Convert QString from UTF-16 in C++ RAII memory to UTF-8 chars in manually-managed C memory
            QByteArray name_b = name_ret.toUtf8();
            auto name_str_len = name_b.length();
            const char* name_str = static_cast<const char*>(malloc(name_str_len + 1));
            memcpy((void*)name_str, name_b.data(), name_str_len);
            ((char*)name_str)[name_str_len] = '\0';
            const char* cbval1 = name_str;
            qdesignermetadatabaseiteminterface_setname_callback(this, cbval1);
            libqt_free(name_str);
            return;
        }
        // Pure virtual method
        qFatal("Error: Pure virtual method QDesignerMetaDataBaseItemInterface::setName called without being implemented");
    }

    // Virtual method for C ABI access and custom callback
    virtual QList<QWidget*> tabOrder() const override {
        if (qdesignermetadatabaseiteminterface_taborder_callback) {
            libqt_list /* of QWidget* */ callback_ret = qdesignermetadatabaseiteminterface_taborder_callback(this);
            QList<QWidget*> callback_ret_QList;
            callback_ret_QList.reserve(callback_ret.len);
            QWidget** callback_ret_arr = static_cast<QWidget**>(callback_ret.data);
            for (size_t i = 0; i < callback_ret.len; ++i) {
                callback_ret_QList.push_back(callback_ret_arr[i]);
            }
            libqt_free(callback_ret.data);
            return callback_ret_QList;
        }
        // Pure virtual method
        qFatal("Error: Pure virtual method QDesignerMetaDataBaseItemInterface::tabOrder called without being implemented");
    }

    // Virtual method for C ABI access and custom callback
    virtual void setTabOrder(const QList<QWidget*>& tabOrder) override {
        if (qdesignermetadatabaseiteminterface_settaborder_callback) {
            const QList<QWidget*>& tabOrder_ret = tabOrder;
            // Convert QList<> from C++ memory to manually-managed C memory
            QWidget** tabOrder_arr = static_cast<QWidget**>(malloc(sizeof(QWidget*) * (tabOrder_ret.size())));
            for (qsizetype i = 0; i < tabOrder_ret.size(); ++i) {
                tabOrder_arr[i] = tabOrder_ret[i];
            }
            libqt_list tabOrder_out;
            tabOrder_out.len = tabOrder_ret.size();
            tabOrder_out.data = static_cast<void*>(tabOrder_arr);
            libqt_list /* of QWidget* */ cbval1 = tabOrder_out;
            qdesignermetadatabaseiteminterface_settaborder_callback(this, cbval1);
            free(tabOrder_arr);
            return;
        }
        // Pure virtual method
        qFatal("Error: Pure virtual method QDesignerMetaDataBaseItemInterface::setTabOrder called without being implemented");
    }

    // Virtual method for C ABI access and custom callback
    virtual bool enabled() const override {
        if (qdesignermetadatabaseiteminterface_enabled_callback) {
            bool callback_ret = qdesignermetadatabaseiteminterface_enabled_callback(this);
            return callback_ret;
        }
        // Pure virtual method
        qFatal("Error: Pure virtual method QDesignerMetaDataBaseItemInterface::enabled called without being implemented");
    }

    // Virtual method for C ABI access and custom callback
    virtual void setEnabled(bool b) override {
        if (qdesignermetadatabaseiteminterface_setenabled_callback) {
            bool cbval1 = b;
            qdesignermetadatabaseiteminterface_setenabled_callback(this, cbval1);
            return;
        }
        // Pure virtual method
        qFatal("Error: Pure virtual method QDesignerMetaDataBaseItemInterface::setEnabled called without being implemented");
    }
};

// This class is a subclass of QDesignerMetaDataBaseInterface
class VirtualQDesignerMetaDataBaseInterface : public QDesignerMetaDataBaseInterface {
  public:
    // Virtual class public types (including callbacks and access types)
    using QDesignerMetaDataBaseInterface_MetaObject_Callback = QMetaObject* (*)(const QDesignerMetaDataBaseInterface*);
    using QDesignerMetaDataBaseInterface_Metacast_Callback = void* (*)(QDesignerMetaDataBaseInterface*, const char*);
    using QDesignerMetaDataBaseInterface_Metacall_Callback = int (*)(QDesignerMetaDataBaseInterface*, int, int, void**);
    using QDesignerMetaDataBaseInterface_Item_Callback = QDesignerMetaDataBaseItemInterface* (*)(const QDesignerMetaDataBaseInterface*, QObject*);
    using QDesignerMetaDataBaseInterface_Add_Callback = void (*)(QDesignerMetaDataBaseInterface*, QObject*);
    using QDesignerMetaDataBaseInterface_Remove_Callback = void (*)(QDesignerMetaDataBaseInterface*, QObject*);
    using QDesignerMetaDataBaseInterface_Objects_Callback = libqt_list /* of QObject* */ (*)(const QDesignerMetaDataBaseInterface*);
    using QDesignerMetaDataBaseInterface_Core_Callback = QDesignerFormEditorInterface* (*)(const QDesignerMetaDataBaseInterface*);
    using QDesignerMetaDataBaseInterface_Event_Callback = bool (*)(QDesignerMetaDataBaseInterface*, QEvent*);
    using QDesignerMetaDataBaseInterface_EventFilter_Callback = bool (*)(QDesignerMetaDataBaseInterface*, QObject*, QEvent*);
    using QDesignerMetaDataBaseInterface_TimerEvent_Callback = void (*)(QDesignerMetaDataBaseInterface*, QTimerEvent*);
    using QDesignerMetaDataBaseInterface_ChildEvent_Callback = void (*)(QDesignerMetaDataBaseInterface*, QChildEvent*);
    using QDesignerMetaDataBaseInterface_CustomEvent_Callback = void (*)(QDesignerMetaDataBaseInterface*, QEvent*);
    using QDesignerMetaDataBaseInterface_ConnectNotify_Callback = void (*)(QDesignerMetaDataBaseInterface*, QMetaMethod*);
    using QDesignerMetaDataBaseInterface_DisconnectNotify_Callback = void (*)(QDesignerMetaDataBaseInterface*, QMetaMethod*);
    using QDesignerMetaDataBaseInterface::isSignalConnected;
    using QDesignerMetaDataBaseInterface::receivers;
    using QDesignerMetaDataBaseInterface::sender;
    using QDesignerMetaDataBaseInterface::senderSignalIndex;

    // Instance callback storage
    QDesignerMetaDataBaseInterface_MetaObject_Callback qdesignermetadatabaseinterface_metaobject_callback = nullptr;
    QDesignerMetaDataBaseInterface_Metacast_Callback qdesignermetadatabaseinterface_metacast_callback = nullptr;
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

    // Access struct
    struct Base : QDesignerMetaDataBaseInterface {
        using QDesignerMetaDataBaseInterface::childEvent;
        using QDesignerMetaDataBaseInterface::connectNotify;
        using QDesignerMetaDataBaseInterface::customEvent;
        using QDesignerMetaDataBaseInterface::disconnectNotify;
        using QDesignerMetaDataBaseInterface::timerEvent;
    };

    VirtualQDesignerMetaDataBaseInterface() : QDesignerMetaDataBaseInterface() {};
    VirtualQDesignerMetaDataBaseInterface(QObject* parent) : QDesignerMetaDataBaseInterface(parent) {};

    // Virtual method for C ABI access and custom callback
    virtual const QMetaObject* metaObject() const override {
        if (qdesignermetadatabaseinterface_metaobject_callback) {
            QMetaObject* callback_ret = qdesignermetadatabaseinterface_metaobject_callback(this);
            return callback_ret;
        }
        return QDesignerMetaDataBaseInterface::metaObject();
    }

    // Virtual method for C ABI access and custom callback
    virtual void* qt_metacast(const char* param1) override {
        if (qdesignermetadatabaseinterface_metacast_callback) {
            const char* cbval1 = (const char*)param1;
            void* callback_ret = qdesignermetadatabaseinterface_metacast_callback(this, cbval1);
            return callback_ret;
        }
        return QDesignerMetaDataBaseInterface::qt_metacast(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (qdesignermetadatabaseinterface_metacall_callback) {
            int cbval1 = static_cast<int>(param1);
            int cbval2 = param2;
            void** cbval3 = param3;
            int callback_ret = qdesignermetadatabaseinterface_metacall_callback(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        }
        return QDesignerMetaDataBaseInterface::qt_metacall(param1, param2, param3);
    }

    // Virtual method for C ABI access and custom callback
    virtual QDesignerMetaDataBaseItemInterface* item(QObject* object) const override {
        if (qdesignermetadatabaseinterface_item_callback) {
            QObject* cbval1 = object;
            QDesignerMetaDataBaseItemInterface* callback_ret = qdesignermetadatabaseinterface_item_callback(this, cbval1);
            return callback_ret;
        }
        // Pure virtual method
        qFatal("Error: Pure virtual method QDesignerMetaDataBaseInterface::item called without being implemented");
    }

    // Virtual method for C ABI access and custom callback
    virtual void add(QObject* object) override {
        if (qdesignermetadatabaseinterface_add_callback) {
            QObject* cbval1 = object;
            qdesignermetadatabaseinterface_add_callback(this, cbval1);
            return;
        }
        // Pure virtual method
        qFatal("Error: Pure virtual method QDesignerMetaDataBaseInterface::add called without being implemented");
    }

    // Virtual method for C ABI access and custom callback
    virtual void remove(QObject* object) override {
        if (qdesignermetadatabaseinterface_remove_callback) {
            QObject* cbval1 = object;
            qdesignermetadatabaseinterface_remove_callback(this, cbval1);
            return;
        }
        // Pure virtual method
        qFatal("Error: Pure virtual method QDesignerMetaDataBaseInterface::remove called without being implemented");
    }

    // Virtual method for C ABI access and custom callback
    virtual QList<QObject*> objects() const override {
        if (qdesignermetadatabaseinterface_objects_callback) {
            libqt_list /* of QObject* */ callback_ret = qdesignermetadatabaseinterface_objects_callback(this);
            QList<QObject*> callback_ret_QList;
            callback_ret_QList.reserve(callback_ret.len);
            QObject** callback_ret_arr = static_cast<QObject**>(callback_ret.data);
            for (size_t i = 0; i < callback_ret.len; ++i) {
                callback_ret_QList.push_back(callback_ret_arr[i]);
            }
            libqt_free(callback_ret.data);
            return callback_ret_QList;
        }
        // Pure virtual method
        qFatal("Error: Pure virtual method QDesignerMetaDataBaseInterface::objects called without being implemented");
    }

    // Virtual method for C ABI access and custom callback
    virtual QDesignerFormEditorInterface* core() const override {
        if (qdesignermetadatabaseinterface_core_callback) {
            QDesignerFormEditorInterface* callback_ret = qdesignermetadatabaseinterface_core_callback(this);
            return callback_ret;
        }
        // Pure virtual method
        qFatal("Error: Pure virtual method QDesignerMetaDataBaseInterface::core called without being implemented");
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* event) override {
        if (qdesignermetadatabaseinterface_event_callback) {
            QEvent* cbval1 = event;
            bool callback_ret = qdesignermetadatabaseinterface_event_callback(this, cbval1);
            return callback_ret;
        }
        return QDesignerMetaDataBaseInterface::event(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* watched, QEvent* event) override {
        if (qdesignermetadatabaseinterface_eventfilter_callback) {
            QObject* cbval1 = watched;
            QEvent* cbval2 = event;
            bool callback_ret = qdesignermetadatabaseinterface_eventfilter_callback(this, cbval1, cbval2);
            return callback_ret;
        }
        return QDesignerMetaDataBaseInterface::eventFilter(watched, event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (qdesignermetadatabaseinterface_timerevent_callback) {
            QTimerEvent* cbval1 = event;
            qdesignermetadatabaseinterface_timerevent_callback(this, cbval1);
            return;
        }
        QDesignerMetaDataBaseInterface::timerEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (qdesignermetadatabaseinterface_childevent_callback) {
            QChildEvent* cbval1 = event;
            qdesignermetadatabaseinterface_childevent_callback(this, cbval1);
            return;
        }
        QDesignerMetaDataBaseInterface::childEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (qdesignermetadatabaseinterface_customevent_callback) {
            QEvent* cbval1 = event;
            qdesignermetadatabaseinterface_customevent_callback(this, cbval1);
            return;
        }
        QDesignerMetaDataBaseInterface::customEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (qdesignermetadatabaseinterface_connectnotify_callback) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            qdesignermetadatabaseinterface_connectnotify_callback(this, cbval1);
            return;
        }
        QDesignerMetaDataBaseInterface::connectNotify(signal);
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (qdesignermetadatabaseinterface_disconnectnotify_callback) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            qdesignermetadatabaseinterface_disconnectnotify_callback(this, cbval1);
            return;
        }
        QDesignerMetaDataBaseInterface::disconnectNotify(signal);
    }

    // Friend functions
    friend void QDesignerMetaDataBaseInterface_SuperTimerEvent(QDesignerMetaDataBaseInterface* self, QTimerEvent* event);
    friend void QDesignerMetaDataBaseInterface_SuperChildEvent(QDesignerMetaDataBaseInterface* self, QChildEvent* event);
    friend void QDesignerMetaDataBaseInterface_SuperCustomEvent(QDesignerMetaDataBaseInterface* self, QEvent* event);
    friend void QDesignerMetaDataBaseInterface_SuperConnectNotify(QDesignerMetaDataBaseInterface* self, const QMetaMethod* signal);
    friend void QDesignerMetaDataBaseInterface_SuperDisconnectNotify(QDesignerMetaDataBaseInterface* self, const QMetaMethod* signal);
};

#endif
