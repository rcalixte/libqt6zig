#pragma once
#ifndef DESIGNER_LIBABSTRACTINTEGRATION_HXX
#define DESIGNER_LIBABSTRACTINTEGRATION_HXX

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

// This class is a subclass of QDesignerIntegrationInterface
class VirtualQDesignerIntegrationInterface : public QDesignerIntegrationInterface {
  public:
    // Virtual class public types (including callbacks and access types)
    using QDesignerIntegrationInterface_MetaObject_Callback = QMetaObject* (*)(const QDesignerIntegrationInterface*);
    using QDesignerIntegrationInterface_Metacast_Callback = void* (*)(QDesignerIntegrationInterface*, const char*);
    using QDesignerIntegrationInterface_Metacall_Callback = int (*)(QDesignerIntegrationInterface*, int, int, void**);
    using QDesignerIntegrationInterface_ContainerWindow_Callback = QWidget* (*)(const QDesignerIntegrationInterface*, QWidget*);
    using QDesignerIntegrationInterface_CreateResourceBrowser_Callback = QDesignerResourceBrowserInterface* (*)(QDesignerIntegrationInterface*, QWidget*);
    using QDesignerIntegrationInterface_HeaderSuffix_Callback = const char* (*)(const QDesignerIntegrationInterface*);
    using QDesignerIntegrationInterface_SetHeaderSuffix_Callback = void (*)(QDesignerIntegrationInterface*, const char*);
    using QDesignerIntegrationInterface_IsHeaderLowercase_Callback = bool (*)(const QDesignerIntegrationInterface*);
    using QDesignerIntegrationInterface_SetHeaderLowercase_Callback = void (*)(QDesignerIntegrationInterface*, bool);
    using QDesignerIntegrationInterface_Features_Callback = int (*)(const QDesignerIntegrationInterface*);
    using QDesignerIntegrationInterface_ResourceFileWatcherBehaviour_Callback = int (*)(const QDesignerIntegrationInterface*);
    using QDesignerIntegrationInterface_SetResourceFileWatcherBehaviour_Callback = void (*)(QDesignerIntegrationInterface*, int);
    using QDesignerIntegrationInterface_ContextHelpId_Callback = const char* (*)(const QDesignerIntegrationInterface*);
    using QDesignerIntegrationInterface_SetFeatures_Callback = void (*)(QDesignerIntegrationInterface*, int);
    using QDesignerIntegrationInterface_UpdateProperty_Callback = void (*)(QDesignerIntegrationInterface*, const char*, QVariant*, bool);
    using QDesignerIntegrationInterface_UpdateProperty2_Callback = void (*)(QDesignerIntegrationInterface*, const char*, QVariant*);
    using QDesignerIntegrationInterface_ResetProperty_Callback = void (*)(QDesignerIntegrationInterface*, const char*);
    using QDesignerIntegrationInterface_AddDynamicProperty_Callback = void (*)(QDesignerIntegrationInterface*, const char*, QVariant*);
    using QDesignerIntegrationInterface_RemoveDynamicProperty_Callback = void (*)(QDesignerIntegrationInterface*, const char*);
    using QDesignerIntegrationInterface_UpdateActiveFormWindow_Callback = void (*)(QDesignerIntegrationInterface*, QDesignerFormWindowInterface*);
    using QDesignerIntegrationInterface_SetupFormWindow_Callback = void (*)(QDesignerIntegrationInterface*, QDesignerFormWindowInterface*);
    using QDesignerIntegrationInterface_UpdateSelection_Callback = void (*)(QDesignerIntegrationInterface*);
    using QDesignerIntegrationInterface_UpdateCustomWidgetPlugins_Callback = void (*)(QDesignerIntegrationInterface*);
    using QDesignerIntegrationInterface_Event_Callback = bool (*)(QDesignerIntegrationInterface*, QEvent*);
    using QDesignerIntegrationInterface_EventFilter_Callback = bool (*)(QDesignerIntegrationInterface*, QObject*, QEvent*);
    using QDesignerIntegrationInterface_TimerEvent_Callback = void (*)(QDesignerIntegrationInterface*, QTimerEvent*);
    using QDesignerIntegrationInterface_ChildEvent_Callback = void (*)(QDesignerIntegrationInterface*, QChildEvent*);
    using QDesignerIntegrationInterface_CustomEvent_Callback = void (*)(QDesignerIntegrationInterface*, QEvent*);
    using QDesignerIntegrationInterface_ConnectNotify_Callback = void (*)(QDesignerIntegrationInterface*, QMetaMethod*);
    using QDesignerIntegrationInterface_DisconnectNotify_Callback = void (*)(QDesignerIntegrationInterface*, QMetaMethod*);
    using QDesignerIntegrationInterface::isSignalConnected;
    using QDesignerIntegrationInterface::receivers;
    using QDesignerIntegrationInterface::sender;
    using QDesignerIntegrationInterface::senderSignalIndex;

    // Instance callback storage
    QDesignerIntegrationInterface_MetaObject_Callback qdesignerintegrationinterface_metaobject_callback = nullptr;
    QDesignerIntegrationInterface_Metacast_Callback qdesignerintegrationinterface_metacast_callback = nullptr;
    QDesignerIntegrationInterface_Metacall_Callback qdesignerintegrationinterface_metacall_callback = nullptr;
    QDesignerIntegrationInterface_ContainerWindow_Callback qdesignerintegrationinterface_containerwindow_callback = nullptr;
    QDesignerIntegrationInterface_CreateResourceBrowser_Callback qdesignerintegrationinterface_createresourcebrowser_callback = nullptr;
    QDesignerIntegrationInterface_HeaderSuffix_Callback qdesignerintegrationinterface_headersuffix_callback = nullptr;
    QDesignerIntegrationInterface_SetHeaderSuffix_Callback qdesignerintegrationinterface_setheadersuffix_callback = nullptr;
    QDesignerIntegrationInterface_IsHeaderLowercase_Callback qdesignerintegrationinterface_isheaderlowercase_callback = nullptr;
    QDesignerIntegrationInterface_SetHeaderLowercase_Callback qdesignerintegrationinterface_setheaderlowercase_callback = nullptr;
    QDesignerIntegrationInterface_Features_Callback qdesignerintegrationinterface_features_callback = nullptr;
    QDesignerIntegrationInterface_ResourceFileWatcherBehaviour_Callback qdesignerintegrationinterface_resourcefilewatcherbehaviour_callback = nullptr;
    QDesignerIntegrationInterface_SetResourceFileWatcherBehaviour_Callback qdesignerintegrationinterface_setresourcefilewatcherbehaviour_callback = nullptr;
    QDesignerIntegrationInterface_ContextHelpId_Callback qdesignerintegrationinterface_contexthelpid_callback = nullptr;
    QDesignerIntegrationInterface_SetFeatures_Callback qdesignerintegrationinterface_setfeatures_callback = nullptr;
    QDesignerIntegrationInterface_UpdateProperty_Callback qdesignerintegrationinterface_updateproperty_callback = nullptr;
    QDesignerIntegrationInterface_UpdateProperty2_Callback qdesignerintegrationinterface_updateproperty2_callback = nullptr;
    QDesignerIntegrationInterface_ResetProperty_Callback qdesignerintegrationinterface_resetproperty_callback = nullptr;
    QDesignerIntegrationInterface_AddDynamicProperty_Callback qdesignerintegrationinterface_adddynamicproperty_callback = nullptr;
    QDesignerIntegrationInterface_RemoveDynamicProperty_Callback qdesignerintegrationinterface_removedynamicproperty_callback = nullptr;
    QDesignerIntegrationInterface_UpdateActiveFormWindow_Callback qdesignerintegrationinterface_updateactiveformwindow_callback = nullptr;
    QDesignerIntegrationInterface_SetupFormWindow_Callback qdesignerintegrationinterface_setupformwindow_callback = nullptr;
    QDesignerIntegrationInterface_UpdateSelection_Callback qdesignerintegrationinterface_updateselection_callback = nullptr;
    QDesignerIntegrationInterface_UpdateCustomWidgetPlugins_Callback qdesignerintegrationinterface_updatecustomwidgetplugins_callback = nullptr;
    QDesignerIntegrationInterface_Event_Callback qdesignerintegrationinterface_event_callback = nullptr;
    QDesignerIntegrationInterface_EventFilter_Callback qdesignerintegrationinterface_eventfilter_callback = nullptr;
    QDesignerIntegrationInterface_TimerEvent_Callback qdesignerintegrationinterface_timerevent_callback = nullptr;
    QDesignerIntegrationInterface_ChildEvent_Callback qdesignerintegrationinterface_childevent_callback = nullptr;
    QDesignerIntegrationInterface_CustomEvent_Callback qdesignerintegrationinterface_customevent_callback = nullptr;
    QDesignerIntegrationInterface_ConnectNotify_Callback qdesignerintegrationinterface_connectnotify_callback = nullptr;
    QDesignerIntegrationInterface_DisconnectNotify_Callback qdesignerintegrationinterface_disconnectnotify_callback = nullptr;

    // Access struct
    struct Base : QDesignerIntegrationInterface {
        using QDesignerIntegrationInterface::childEvent;
        using QDesignerIntegrationInterface::connectNotify;
        using QDesignerIntegrationInterface::customEvent;
        using QDesignerIntegrationInterface::disconnectNotify;
        using QDesignerIntegrationInterface::timerEvent;
    };

    VirtualQDesignerIntegrationInterface(QDesignerFormEditorInterface* core) : QDesignerIntegrationInterface(core) {};
    VirtualQDesignerIntegrationInterface(QDesignerFormEditorInterface* core, QObject* parent) : QDesignerIntegrationInterface(core, parent) {};

    // Virtual method for C ABI access and custom callback
    virtual const QMetaObject* metaObject() const override {
        if (qdesignerintegrationinterface_metaobject_callback) {
            QMetaObject* callback_ret = qdesignerintegrationinterface_metaobject_callback(this);
            return callback_ret;
        }
        return QDesignerIntegrationInterface::metaObject();
    }

    // Virtual method for C ABI access and custom callback
    virtual void* qt_metacast(const char* param1) override {
        if (qdesignerintegrationinterface_metacast_callback) {
            const char* cbval1 = (const char*)param1;
            void* callback_ret = qdesignerintegrationinterface_metacast_callback(this, cbval1);
            return callback_ret;
        }
        return QDesignerIntegrationInterface::qt_metacast(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (qdesignerintegrationinterface_metacall_callback) {
            int cbval1 = static_cast<int>(param1);
            int cbval2 = param2;
            void** cbval3 = param3;
            int callback_ret = qdesignerintegrationinterface_metacall_callback(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        }
        return QDesignerIntegrationInterface::qt_metacall(param1, param2, param3);
    }

    // Virtual method for C ABI access and custom callback
    virtual QWidget* containerWindow(QWidget* widget) const override {
        if (qdesignerintegrationinterface_containerwindow_callback) {
            QWidget* cbval1 = widget;
            QWidget* callback_ret = qdesignerintegrationinterface_containerwindow_callback(this, cbval1);
            return callback_ret;
        }
        // Pure virtual method
        qFatal("Error: Pure virtual method QDesignerIntegrationInterface::containerWindow called without being implemented");
    }

    // Virtual method for C ABI access and custom callback
    virtual QDesignerResourceBrowserInterface* createResourceBrowser(QWidget* parent) override {
        if (qdesignerintegrationinterface_createresourcebrowser_callback) {
            QWidget* cbval1 = parent;
            QDesignerResourceBrowserInterface* callback_ret = qdesignerintegrationinterface_createresourcebrowser_callback(this, cbval1);
            return callback_ret;
        }
        // Pure virtual method
        qFatal("Error: Pure virtual method QDesignerIntegrationInterface::createResourceBrowser called without being implemented");
    }

    // Virtual method for C ABI access and custom callback
    virtual QString headerSuffix() const override {
        if (qdesignerintegrationinterface_headersuffix_callback) {
            const char* callback_ret = qdesignerintegrationinterface_headersuffix_callback(this);
            QString callback_ret_QString = QString::fromUtf8(callback_ret);
            return callback_ret_QString;
        }
        // Pure virtual method
        qFatal("Error: Pure virtual method QDesignerIntegrationInterface::headerSuffix called without being implemented");
    }

    // Virtual method for C ABI access and custom callback
    virtual void setHeaderSuffix(const QString& headerSuffix) override {
        if (qdesignerintegrationinterface_setheadersuffix_callback) {
            const auto headerSuffix_ret = headerSuffix;
            // Convert QString from UTF-16 in C++ RAII memory to UTF-8 chars in manually-managed C memory
            QByteArray headerSuffix_b = headerSuffix_ret.toUtf8();
            auto headerSuffix_str_len = headerSuffix_b.length();
            const char* headerSuffix_str = static_cast<const char*>(malloc(headerSuffix_str_len + 1));
            memcpy((void*)headerSuffix_str, headerSuffix_b.data(), headerSuffix_str_len);
            ((char*)headerSuffix_str)[headerSuffix_str_len] = '\0';
            const char* cbval1 = headerSuffix_str;
            qdesignerintegrationinterface_setheadersuffix_callback(this, cbval1);
            libqt_free(headerSuffix_str);
            return;
        }
        // Pure virtual method
        qFatal("Error: Pure virtual method QDesignerIntegrationInterface::setHeaderSuffix called without being implemented");
    }

    // Virtual method for C ABI access and custom callback
    virtual bool isHeaderLowercase() const override {
        if (qdesignerintegrationinterface_isheaderlowercase_callback) {
            bool callback_ret = qdesignerintegrationinterface_isheaderlowercase_callback(this);
            return callback_ret;
        }
        // Pure virtual method
        qFatal("Error: Pure virtual method QDesignerIntegrationInterface::isHeaderLowercase called without being implemented");
    }

    // Virtual method for C ABI access and custom callback
    virtual void setHeaderLowercase(bool headerLowerCase) override {
        if (qdesignerintegrationinterface_setheaderlowercase_callback) {
            bool cbval1 = headerLowerCase;
            qdesignerintegrationinterface_setheaderlowercase_callback(this, cbval1);
            return;
        }
        // Pure virtual method
        qFatal("Error: Pure virtual method QDesignerIntegrationInterface::setHeaderLowercase called without being implemented");
    }

    // Virtual method for C ABI access and custom callback
    virtual QDesignerIntegrationInterface::Feature features() const override {
        if (qdesignerintegrationinterface_features_callback) {
            int callback_ret = qdesignerintegrationinterface_features_callback(this);
            return static_cast<QDesignerIntegrationInterface::Feature>(callback_ret);
        }
        // Pure virtual method
        qFatal("Error: Pure virtual method QDesignerIntegrationInterface::features called without being implemented");
    }

    // Virtual method for C ABI access and custom callback
    virtual QDesignerIntegrationInterface::ResourceFileWatcherBehaviour resourceFileWatcherBehaviour() const override {
        if (qdesignerintegrationinterface_resourcefilewatcherbehaviour_callback) {
            int callback_ret = qdesignerintegrationinterface_resourcefilewatcherbehaviour_callback(this);
            return static_cast<QDesignerIntegrationInterface::ResourceFileWatcherBehaviour>(callback_ret);
        }
        // Pure virtual method
        qFatal("Error: Pure virtual method QDesignerIntegrationInterface::resourceFileWatcherBehaviour called without being implemented");
    }

    // Virtual method for C ABI access and custom callback
    virtual void setResourceFileWatcherBehaviour(QDesignerIntegrationInterface::ResourceFileWatcherBehaviour behaviour) override {
        if (qdesignerintegrationinterface_setresourcefilewatcherbehaviour_callback) {
            int cbval1 = static_cast<int>(behaviour);
            qdesignerintegrationinterface_setresourcefilewatcherbehaviour_callback(this, cbval1);
            return;
        }
        // Pure virtual method
        qFatal("Error: Pure virtual method QDesignerIntegrationInterface::setResourceFileWatcherBehaviour called without being implemented");
    }

    // Virtual method for C ABI access and custom callback
    virtual QString contextHelpId() const override {
        if (qdesignerintegrationinterface_contexthelpid_callback) {
            const char* callback_ret = qdesignerintegrationinterface_contexthelpid_callback(this);
            QString callback_ret_QString = QString::fromUtf8(callback_ret);
            return callback_ret_QString;
        }
        // Pure virtual method
        qFatal("Error: Pure virtual method QDesignerIntegrationInterface::contextHelpId called without being implemented");
    }

    // Virtual method for C ABI access and custom callback
    virtual void setFeatures(QDesignerIntegrationInterface::Feature f) override {
        if (qdesignerintegrationinterface_setfeatures_callback) {
            int cbval1 = static_cast<int>(f);
            qdesignerintegrationinterface_setfeatures_callback(this, cbval1);
            return;
        }
        // Pure virtual method
        qFatal("Error: Pure virtual method QDesignerIntegrationInterface::setFeatures called without being implemented");
    }

    // Virtual method for C ABI access and custom callback
    virtual void updateProperty(const QString& name, const QVariant& value, bool enableSubPropertyHandling) override {
        if (qdesignerintegrationinterface_updateproperty_callback) {
            const auto name_ret = name;
            // Convert QString from UTF-16 in C++ RAII memory to UTF-8 chars in manually-managed C memory
            QByteArray name_b = name_ret.toUtf8();
            auto name_str_len = name_b.length();
            const char* name_str = static_cast<const char*>(malloc(name_str_len + 1));
            memcpy((void*)name_str, name_b.data(), name_str_len);
            ((char*)name_str)[name_str_len] = '\0';
            const char* cbval1 = name_str;
            const QVariant& value_ret = value;
            // Cast returned reference into pointer
            QVariant* cbval2 = const_cast<QVariant*>(&value_ret);
            bool cbval3 = enableSubPropertyHandling;
            qdesignerintegrationinterface_updateproperty_callback(this, cbval1, cbval2, cbval3);
            libqt_free(name_str);
            return;
        }
        // Pure virtual method
        qFatal("Error: Pure virtual method QDesignerIntegrationInterface::updateProperty called without being implemented");
    }

    // Virtual method for C ABI access and custom callback
    virtual void updateProperty(const QString& name, const QVariant& value) override {
        if (qdesignerintegrationinterface_updateproperty2_callback) {
            const auto name_ret = name;
            // Convert QString from UTF-16 in C++ RAII memory to UTF-8 chars in manually-managed C memory
            QByteArray name_b = name_ret.toUtf8();
            auto name_str_len = name_b.length();
            const char* name_str = static_cast<const char*>(malloc(name_str_len + 1));
            memcpy((void*)name_str, name_b.data(), name_str_len);
            ((char*)name_str)[name_str_len] = '\0';
            const char* cbval1 = name_str;
            const QVariant& value_ret = value;
            // Cast returned reference into pointer
            QVariant* cbval2 = const_cast<QVariant*>(&value_ret);
            qdesignerintegrationinterface_updateproperty2_callback(this, cbval1, cbval2);
            libqt_free(name_str);
            return;
        }
        // Pure virtual method
        qFatal("Error: Pure virtual method QDesignerIntegrationInterface::updateProperty2 called without being implemented");
    }

    // Virtual method for C ABI access and custom callback
    virtual void resetProperty(const QString& name) override {
        if (qdesignerintegrationinterface_resetproperty_callback) {
            const auto name_ret = name;
            // Convert QString from UTF-16 in C++ RAII memory to UTF-8 chars in manually-managed C memory
            QByteArray name_b = name_ret.toUtf8();
            auto name_str_len = name_b.length();
            const char* name_str = static_cast<const char*>(malloc(name_str_len + 1));
            memcpy((void*)name_str, name_b.data(), name_str_len);
            ((char*)name_str)[name_str_len] = '\0';
            const char* cbval1 = name_str;
            qdesignerintegrationinterface_resetproperty_callback(this, cbval1);
            libqt_free(name_str);
            return;
        }
        // Pure virtual method
        qFatal("Error: Pure virtual method QDesignerIntegrationInterface::resetProperty called without being implemented");
    }

    // Virtual method for C ABI access and custom callback
    virtual void addDynamicProperty(const QString& name, const QVariant& value) override {
        if (qdesignerintegrationinterface_adddynamicproperty_callback) {
            const auto name_ret = name;
            // Convert QString from UTF-16 in C++ RAII memory to UTF-8 chars in manually-managed C memory
            QByteArray name_b = name_ret.toUtf8();
            auto name_str_len = name_b.length();
            const char* name_str = static_cast<const char*>(malloc(name_str_len + 1));
            memcpy((void*)name_str, name_b.data(), name_str_len);
            ((char*)name_str)[name_str_len] = '\0';
            const char* cbval1 = name_str;
            const QVariant& value_ret = value;
            // Cast returned reference into pointer
            QVariant* cbval2 = const_cast<QVariant*>(&value_ret);
            qdesignerintegrationinterface_adddynamicproperty_callback(this, cbval1, cbval2);
            libqt_free(name_str);
            return;
        }
        // Pure virtual method
        qFatal("Error: Pure virtual method QDesignerIntegrationInterface::addDynamicProperty called without being implemented");
    }

    // Virtual method for C ABI access and custom callback
    virtual void removeDynamicProperty(const QString& name) override {
        if (qdesignerintegrationinterface_removedynamicproperty_callback) {
            const auto name_ret = name;
            // Convert QString from UTF-16 in C++ RAII memory to UTF-8 chars in manually-managed C memory
            QByteArray name_b = name_ret.toUtf8();
            auto name_str_len = name_b.length();
            const char* name_str = static_cast<const char*>(malloc(name_str_len + 1));
            memcpy((void*)name_str, name_b.data(), name_str_len);
            ((char*)name_str)[name_str_len] = '\0';
            const char* cbval1 = name_str;
            qdesignerintegrationinterface_removedynamicproperty_callback(this, cbval1);
            libqt_free(name_str);
            return;
        }
        // Pure virtual method
        qFatal("Error: Pure virtual method QDesignerIntegrationInterface::removeDynamicProperty called without being implemented");
    }

    // Virtual method for C ABI access and custom callback
    virtual void updateActiveFormWindow(QDesignerFormWindowInterface* formWindow) override {
        if (qdesignerintegrationinterface_updateactiveformwindow_callback) {
            QDesignerFormWindowInterface* cbval1 = formWindow;
            qdesignerintegrationinterface_updateactiveformwindow_callback(this, cbval1);
            return;
        }
        // Pure virtual method
        qFatal("Error: Pure virtual method QDesignerIntegrationInterface::updateActiveFormWindow called without being implemented");
    }

    // Virtual method for C ABI access and custom callback
    virtual void setupFormWindow(QDesignerFormWindowInterface* formWindow) override {
        if (qdesignerintegrationinterface_setupformwindow_callback) {
            QDesignerFormWindowInterface* cbval1 = formWindow;
            qdesignerintegrationinterface_setupformwindow_callback(this, cbval1);
            return;
        }
        // Pure virtual method
        qFatal("Error: Pure virtual method QDesignerIntegrationInterface::setupFormWindow called without being implemented");
    }

    // Virtual method for C ABI access and custom callback
    virtual void updateSelection() override {
        if (qdesignerintegrationinterface_updateselection_callback) {
            qdesignerintegrationinterface_updateselection_callback(this);
            return;
        }
        // Pure virtual method
        qFatal("Error: Pure virtual method QDesignerIntegrationInterface::updateSelection called without being implemented");
    }

    // Virtual method for C ABI access and custom callback
    virtual void updateCustomWidgetPlugins() override {
        if (qdesignerintegrationinterface_updatecustomwidgetplugins_callback) {
            qdesignerintegrationinterface_updatecustomwidgetplugins_callback(this);
            return;
        }
        // Pure virtual method
        qFatal("Error: Pure virtual method QDesignerIntegrationInterface::updateCustomWidgetPlugins called without being implemented");
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* event) override {
        if (qdesignerintegrationinterface_event_callback) {
            QEvent* cbval1 = event;
            bool callback_ret = qdesignerintegrationinterface_event_callback(this, cbval1);
            return callback_ret;
        }
        return QDesignerIntegrationInterface::event(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* watched, QEvent* event) override {
        if (qdesignerintegrationinterface_eventfilter_callback) {
            QObject* cbval1 = watched;
            QEvent* cbval2 = event;
            bool callback_ret = qdesignerintegrationinterface_eventfilter_callback(this, cbval1, cbval2);
            return callback_ret;
        }
        return QDesignerIntegrationInterface::eventFilter(watched, event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (qdesignerintegrationinterface_timerevent_callback) {
            QTimerEvent* cbval1 = event;
            qdesignerintegrationinterface_timerevent_callback(this, cbval1);
            return;
        }
        QDesignerIntegrationInterface::timerEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (qdesignerintegrationinterface_childevent_callback) {
            QChildEvent* cbval1 = event;
            qdesignerintegrationinterface_childevent_callback(this, cbval1);
            return;
        }
        QDesignerIntegrationInterface::childEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (qdesignerintegrationinterface_customevent_callback) {
            QEvent* cbval1 = event;
            qdesignerintegrationinterface_customevent_callback(this, cbval1);
            return;
        }
        QDesignerIntegrationInterface::customEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (qdesignerintegrationinterface_connectnotify_callback) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            qdesignerintegrationinterface_connectnotify_callback(this, cbval1);
            return;
        }
        QDesignerIntegrationInterface::connectNotify(signal);
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (qdesignerintegrationinterface_disconnectnotify_callback) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            qdesignerintegrationinterface_disconnectnotify_callback(this, cbval1);
            return;
        }
        QDesignerIntegrationInterface::disconnectNotify(signal);
    }

    // Friend functions
    friend void QDesignerIntegrationInterface_SuperTimerEvent(QDesignerIntegrationInterface* self, QTimerEvent* event);
    friend void QDesignerIntegrationInterface_SuperChildEvent(QDesignerIntegrationInterface* self, QChildEvent* event);
    friend void QDesignerIntegrationInterface_SuperCustomEvent(QDesignerIntegrationInterface* self, QEvent* event);
    friend void QDesignerIntegrationInterface_SuperConnectNotify(QDesignerIntegrationInterface* self, const QMetaMethod* signal);
    friend void QDesignerIntegrationInterface_SuperDisconnectNotify(QDesignerIntegrationInterface* self, const QMetaMethod* signal);
};

// This class is a subclass of QDesignerIntegration
class VirtualQDesignerIntegration final : public QDesignerIntegration {
  public:
    // Virtual class public types (including callbacks and access types)
    using QDesignerIntegration_MetaObject_Callback = QMetaObject* (*)(const QDesignerIntegration*);
    using QDesignerIntegration_Metacast_Callback = void* (*)(QDesignerIntegration*, const char*);
    using QDesignerIntegration_Metacall_Callback = int (*)(QDesignerIntegration*, int, int, void**);
    using QDesignerIntegration_HeaderSuffix_Callback = const char* (*)(const QDesignerIntegration*);
    using QDesignerIntegration_SetHeaderSuffix_Callback = void (*)(QDesignerIntegration*, const char*);
    using QDesignerIntegration_IsHeaderLowercase_Callback = bool (*)(const QDesignerIntegration*);
    using QDesignerIntegration_SetHeaderLowercase_Callback = void (*)(QDesignerIntegration*, bool);
    using QDesignerIntegration_Features_Callback = int (*)(const QDesignerIntegration*);
    using QDesignerIntegration_SetFeatures_Callback = void (*)(QDesignerIntegration*, int);
    using QDesignerIntegration_ResourceFileWatcherBehaviour_Callback = int (*)(const QDesignerIntegration*);
    using QDesignerIntegration_SetResourceFileWatcherBehaviour_Callback = void (*)(QDesignerIntegration*, int);
    using QDesignerIntegration_ContainerWindow_Callback = QWidget* (*)(const QDesignerIntegration*, QWidget*);
    using QDesignerIntegration_CreateResourceBrowser_Callback = QDesignerResourceBrowserInterface* (*)(QDesignerIntegration*, QWidget*);
    using QDesignerIntegration_ContextHelpId_Callback = const char* (*)(const QDesignerIntegration*);
    using QDesignerIntegration_UpdateProperty_Callback = void (*)(QDesignerIntegration*, const char*, QVariant*, bool);
    using QDesignerIntegration_UpdateProperty2_Callback = void (*)(QDesignerIntegration*, const char*, QVariant*);
    using QDesignerIntegration_ResetProperty_Callback = void (*)(QDesignerIntegration*, const char*);
    using QDesignerIntegration_AddDynamicProperty_Callback = void (*)(QDesignerIntegration*, const char*, QVariant*);
    using QDesignerIntegration_RemoveDynamicProperty_Callback = void (*)(QDesignerIntegration*, const char*);
    using QDesignerIntegration_UpdateActiveFormWindow_Callback = void (*)(QDesignerIntegration*, QDesignerFormWindowInterface*);
    using QDesignerIntegration_SetupFormWindow_Callback = void (*)(QDesignerIntegration*, QDesignerFormWindowInterface*);
    using QDesignerIntegration_UpdateSelection_Callback = void (*)(QDesignerIntegration*);
    using QDesignerIntegration_UpdateCustomWidgetPlugins_Callback = void (*)(QDesignerIntegration*);
    using QDesignerIntegration_Event_Callback = bool (*)(QDesignerIntegration*, QEvent*);
    using QDesignerIntegration_EventFilter_Callback = bool (*)(QDesignerIntegration*, QObject*, QEvent*);
    using QDesignerIntegration_TimerEvent_Callback = void (*)(QDesignerIntegration*, QTimerEvent*);
    using QDesignerIntegration_ChildEvent_Callback = void (*)(QDesignerIntegration*, QChildEvent*);
    using QDesignerIntegration_CustomEvent_Callback = void (*)(QDesignerIntegration*, QEvent*);
    using QDesignerIntegration_ConnectNotify_Callback = void (*)(QDesignerIntegration*, QMetaMethod*);
    using QDesignerIntegration_DisconnectNotify_Callback = void (*)(QDesignerIntegration*, QMetaMethod*);
    using QDesignerIntegration::isSignalConnected;
    using QDesignerIntegration::receivers;
    using QDesignerIntegration::sender;
    using QDesignerIntegration::senderSignalIndex;

    // Instance callback storage
    QDesignerIntegration_MetaObject_Callback qdesignerintegration_metaobject_callback = nullptr;
    QDesignerIntegration_Metacast_Callback qdesignerintegration_metacast_callback = nullptr;
    QDesignerIntegration_Metacall_Callback qdesignerintegration_metacall_callback = nullptr;
    QDesignerIntegration_HeaderSuffix_Callback qdesignerintegration_headersuffix_callback = nullptr;
    QDesignerIntegration_SetHeaderSuffix_Callback qdesignerintegration_setheadersuffix_callback = nullptr;
    QDesignerIntegration_IsHeaderLowercase_Callback qdesignerintegration_isheaderlowercase_callback = nullptr;
    QDesignerIntegration_SetHeaderLowercase_Callback qdesignerintegration_setheaderlowercase_callback = nullptr;
    QDesignerIntegration_Features_Callback qdesignerintegration_features_callback = nullptr;
    QDesignerIntegration_SetFeatures_Callback qdesignerintegration_setfeatures_callback = nullptr;
    QDesignerIntegration_ResourceFileWatcherBehaviour_Callback qdesignerintegration_resourcefilewatcherbehaviour_callback = nullptr;
    QDesignerIntegration_SetResourceFileWatcherBehaviour_Callback qdesignerintegration_setresourcefilewatcherbehaviour_callback = nullptr;
    QDesignerIntegration_ContainerWindow_Callback qdesignerintegration_containerwindow_callback = nullptr;
    QDesignerIntegration_CreateResourceBrowser_Callback qdesignerintegration_createresourcebrowser_callback = nullptr;
    QDesignerIntegration_ContextHelpId_Callback qdesignerintegration_contexthelpid_callback = nullptr;
    QDesignerIntegration_UpdateProperty_Callback qdesignerintegration_updateproperty_callback = nullptr;
    QDesignerIntegration_UpdateProperty2_Callback qdesignerintegration_updateproperty2_callback = nullptr;
    QDesignerIntegration_ResetProperty_Callback qdesignerintegration_resetproperty_callback = nullptr;
    QDesignerIntegration_AddDynamicProperty_Callback qdesignerintegration_adddynamicproperty_callback = nullptr;
    QDesignerIntegration_RemoveDynamicProperty_Callback qdesignerintegration_removedynamicproperty_callback = nullptr;
    QDesignerIntegration_UpdateActiveFormWindow_Callback qdesignerintegration_updateactiveformwindow_callback = nullptr;
    QDesignerIntegration_SetupFormWindow_Callback qdesignerintegration_setupformwindow_callback = nullptr;
    QDesignerIntegration_UpdateSelection_Callback qdesignerintegration_updateselection_callback = nullptr;
    QDesignerIntegration_UpdateCustomWidgetPlugins_Callback qdesignerintegration_updatecustomwidgetplugins_callback = nullptr;
    QDesignerIntegration_Event_Callback qdesignerintegration_event_callback = nullptr;
    QDesignerIntegration_EventFilter_Callback qdesignerintegration_eventfilter_callback = nullptr;
    QDesignerIntegration_TimerEvent_Callback qdesignerintegration_timerevent_callback = nullptr;
    QDesignerIntegration_ChildEvent_Callback qdesignerintegration_childevent_callback = nullptr;
    QDesignerIntegration_CustomEvent_Callback qdesignerintegration_customevent_callback = nullptr;
    QDesignerIntegration_ConnectNotify_Callback qdesignerintegration_connectnotify_callback = nullptr;
    QDesignerIntegration_DisconnectNotify_Callback qdesignerintegration_disconnectnotify_callback = nullptr;

    // Access struct
    struct Base : QDesignerIntegration {
        using QDesignerIntegration::childEvent;
        using QDesignerIntegration::connectNotify;
        using QDesignerIntegration::customEvent;
        using QDesignerIntegration::disconnectNotify;
        using QDesignerIntegration::timerEvent;
    };

    VirtualQDesignerIntegration(QDesignerFormEditorInterface* core) : QDesignerIntegration(core) {};
    VirtualQDesignerIntegration(QDesignerFormEditorInterface* core, QObject* parent) : QDesignerIntegration(core, parent) {};

    // Virtual method for C ABI access and custom callback
    virtual const QMetaObject* metaObject() const override {
        if (qdesignerintegration_metaobject_callback) {
            QMetaObject* callback_ret = qdesignerintegration_metaobject_callback(this);
            return callback_ret;
        }
        return QDesignerIntegration::metaObject();
    }

    // Virtual method for C ABI access and custom callback
    virtual void* qt_metacast(const char* param1) override {
        if (qdesignerintegration_metacast_callback) {
            const char* cbval1 = (const char*)param1;
            void* callback_ret = qdesignerintegration_metacast_callback(this, cbval1);
            return callback_ret;
        }
        return QDesignerIntegration::qt_metacast(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (qdesignerintegration_metacall_callback) {
            int cbval1 = static_cast<int>(param1);
            int cbval2 = param2;
            void** cbval3 = param3;
            int callback_ret = qdesignerintegration_metacall_callback(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        }
        return QDesignerIntegration::qt_metacall(param1, param2, param3);
    }

    // Virtual method for C ABI access and custom callback
    virtual QString headerSuffix() const override {
        if (qdesignerintegration_headersuffix_callback) {
            const char* callback_ret = qdesignerintegration_headersuffix_callback(this);
            QString callback_ret_QString = QString::fromUtf8(callback_ret);
            return callback_ret_QString;
        }
        return QDesignerIntegration::headerSuffix();
    }

    // Virtual method for C ABI access and custom callback
    virtual void setHeaderSuffix(const QString& headerSuffix) override {
        if (qdesignerintegration_setheadersuffix_callback) {
            const auto headerSuffix_ret = headerSuffix;
            // Convert QString from UTF-16 in C++ RAII memory to UTF-8 chars in manually-managed C memory
            QByteArray headerSuffix_b = headerSuffix_ret.toUtf8();
            auto headerSuffix_str_len = headerSuffix_b.length();
            const char* headerSuffix_str = static_cast<const char*>(malloc(headerSuffix_str_len + 1));
            memcpy((void*)headerSuffix_str, headerSuffix_b.data(), headerSuffix_str_len);
            ((char*)headerSuffix_str)[headerSuffix_str_len] = '\0';
            const char* cbval1 = headerSuffix_str;
            qdesignerintegration_setheadersuffix_callback(this, cbval1);
            libqt_free(headerSuffix_str);
            return;
        }
        QDesignerIntegration::setHeaderSuffix(headerSuffix);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool isHeaderLowercase() const override {
        if (qdesignerintegration_isheaderlowercase_callback) {
            bool callback_ret = qdesignerintegration_isheaderlowercase_callback(this);
            return callback_ret;
        }
        return QDesignerIntegration::isHeaderLowercase();
    }

    // Virtual method for C ABI access and custom callback
    virtual void setHeaderLowercase(bool headerLowerCase) override {
        if (qdesignerintegration_setheaderlowercase_callback) {
            bool cbval1 = headerLowerCase;
            qdesignerintegration_setheaderlowercase_callback(this, cbval1);
            return;
        }
        QDesignerIntegration::setHeaderLowercase(headerLowerCase);
    }

    // Virtual method for C ABI access and custom callback
    virtual QDesignerIntegrationInterface::Feature features() const override {
        if (qdesignerintegration_features_callback) {
            int callback_ret = qdesignerintegration_features_callback(this);
            return static_cast<QDesignerIntegrationInterface::Feature>(callback_ret);
        }
        return QDesignerIntegration::features();
    }

    // Virtual method for C ABI access and custom callback
    virtual void setFeatures(QDesignerIntegrationInterface::Feature f) override {
        if (qdesignerintegration_setfeatures_callback) {
            int cbval1 = static_cast<int>(f);
            qdesignerintegration_setfeatures_callback(this, cbval1);
            return;
        }
        QDesignerIntegration::setFeatures(f);
    }

    // Virtual method for C ABI access and custom callback
    virtual QDesignerIntegrationInterface::ResourceFileWatcherBehaviour resourceFileWatcherBehaviour() const override {
        if (qdesignerintegration_resourcefilewatcherbehaviour_callback) {
            int callback_ret = qdesignerintegration_resourcefilewatcherbehaviour_callback(this);
            return static_cast<QDesignerIntegrationInterface::ResourceFileWatcherBehaviour>(callback_ret);
        }
        return QDesignerIntegration::resourceFileWatcherBehaviour();
    }

    // Virtual method for C ABI access and custom callback
    virtual void setResourceFileWatcherBehaviour(QDesignerIntegrationInterface::ResourceFileWatcherBehaviour behaviour) override {
        if (qdesignerintegration_setresourcefilewatcherbehaviour_callback) {
            int cbval1 = static_cast<int>(behaviour);
            qdesignerintegration_setresourcefilewatcherbehaviour_callback(this, cbval1);
            return;
        }
        QDesignerIntegration::setResourceFileWatcherBehaviour(behaviour);
    }

    // Virtual method for C ABI access and custom callback
    virtual QWidget* containerWindow(QWidget* widget) const override {
        if (qdesignerintegration_containerwindow_callback) {
            QWidget* cbval1 = widget;
            QWidget* callback_ret = qdesignerintegration_containerwindow_callback(this, cbval1);
            return callback_ret;
        }
        return QDesignerIntegration::containerWindow(widget);
    }

    // Virtual method for C ABI access and custom callback
    virtual QDesignerResourceBrowserInterface* createResourceBrowser(QWidget* parent) override {
        if (qdesignerintegration_createresourcebrowser_callback) {
            QWidget* cbval1 = parent;
            QDesignerResourceBrowserInterface* callback_ret = qdesignerintegration_createresourcebrowser_callback(this, cbval1);
            return callback_ret;
        }
        return QDesignerIntegration::createResourceBrowser(parent);
    }

    // Virtual method for C ABI access and custom callback
    virtual QString contextHelpId() const override {
        if (qdesignerintegration_contexthelpid_callback) {
            const char* callback_ret = qdesignerintegration_contexthelpid_callback(this);
            QString callback_ret_QString = QString::fromUtf8(callback_ret);
            return callback_ret_QString;
        }
        return QDesignerIntegration::contextHelpId();
    }

    // Virtual method for C ABI access and custom callback
    virtual void updateProperty(const QString& name, const QVariant& value, bool enableSubPropertyHandling) override {
        if (qdesignerintegration_updateproperty_callback) {
            const auto name_ret = name;
            // Convert QString from UTF-16 in C++ RAII memory to UTF-8 chars in manually-managed C memory
            QByteArray name_b = name_ret.toUtf8();
            auto name_str_len = name_b.length();
            const char* name_str = static_cast<const char*>(malloc(name_str_len + 1));
            memcpy((void*)name_str, name_b.data(), name_str_len);
            ((char*)name_str)[name_str_len] = '\0';
            const char* cbval1 = name_str;
            const QVariant& value_ret = value;
            // Cast returned reference into pointer
            QVariant* cbval2 = const_cast<QVariant*>(&value_ret);
            bool cbval3 = enableSubPropertyHandling;
            qdesignerintegration_updateproperty_callback(this, cbval1, cbval2, cbval3);
            libqt_free(name_str);
            return;
        }
        QDesignerIntegration::updateProperty(name, value, enableSubPropertyHandling);
    }

    // Virtual method for C ABI access and custom callback
    virtual void updateProperty(const QString& name, const QVariant& value) override {
        if (qdesignerintegration_updateproperty2_callback) {
            const auto name_ret = name;
            // Convert QString from UTF-16 in C++ RAII memory to UTF-8 chars in manually-managed C memory
            QByteArray name_b = name_ret.toUtf8();
            auto name_str_len = name_b.length();
            const char* name_str = static_cast<const char*>(malloc(name_str_len + 1));
            memcpy((void*)name_str, name_b.data(), name_str_len);
            ((char*)name_str)[name_str_len] = '\0';
            const char* cbval1 = name_str;
            const QVariant& value_ret = value;
            // Cast returned reference into pointer
            QVariant* cbval2 = const_cast<QVariant*>(&value_ret);
            qdesignerintegration_updateproperty2_callback(this, cbval1, cbval2);
            libqt_free(name_str);
            return;
        }
        QDesignerIntegration::updateProperty(name, value);
    }

    // Virtual method for C ABI access and custom callback
    virtual void resetProperty(const QString& name) override {
        if (qdesignerintegration_resetproperty_callback) {
            const auto name_ret = name;
            // Convert QString from UTF-16 in C++ RAII memory to UTF-8 chars in manually-managed C memory
            QByteArray name_b = name_ret.toUtf8();
            auto name_str_len = name_b.length();
            const char* name_str = static_cast<const char*>(malloc(name_str_len + 1));
            memcpy((void*)name_str, name_b.data(), name_str_len);
            ((char*)name_str)[name_str_len] = '\0';
            const char* cbval1 = name_str;
            qdesignerintegration_resetproperty_callback(this, cbval1);
            libqt_free(name_str);
            return;
        }
        QDesignerIntegration::resetProperty(name);
    }

    // Virtual method for C ABI access and custom callback
    virtual void addDynamicProperty(const QString& name, const QVariant& value) override {
        if (qdesignerintegration_adddynamicproperty_callback) {
            const auto name_ret = name;
            // Convert QString from UTF-16 in C++ RAII memory to UTF-8 chars in manually-managed C memory
            QByteArray name_b = name_ret.toUtf8();
            auto name_str_len = name_b.length();
            const char* name_str = static_cast<const char*>(malloc(name_str_len + 1));
            memcpy((void*)name_str, name_b.data(), name_str_len);
            ((char*)name_str)[name_str_len] = '\0';
            const char* cbval1 = name_str;
            const QVariant& value_ret = value;
            // Cast returned reference into pointer
            QVariant* cbval2 = const_cast<QVariant*>(&value_ret);
            qdesignerintegration_adddynamicproperty_callback(this, cbval1, cbval2);
            libqt_free(name_str);
            return;
        }
        QDesignerIntegration::addDynamicProperty(name, value);
    }

    // Virtual method for C ABI access and custom callback
    virtual void removeDynamicProperty(const QString& name) override {
        if (qdesignerintegration_removedynamicproperty_callback) {
            const auto name_ret = name;
            // Convert QString from UTF-16 in C++ RAII memory to UTF-8 chars in manually-managed C memory
            QByteArray name_b = name_ret.toUtf8();
            auto name_str_len = name_b.length();
            const char* name_str = static_cast<const char*>(malloc(name_str_len + 1));
            memcpy((void*)name_str, name_b.data(), name_str_len);
            ((char*)name_str)[name_str_len] = '\0';
            const char* cbval1 = name_str;
            qdesignerintegration_removedynamicproperty_callback(this, cbval1);
            libqt_free(name_str);
            return;
        }
        QDesignerIntegration::removeDynamicProperty(name);
    }

    // Virtual method for C ABI access and custom callback
    virtual void updateActiveFormWindow(QDesignerFormWindowInterface* formWindow) override {
        if (qdesignerintegration_updateactiveformwindow_callback) {
            QDesignerFormWindowInterface* cbval1 = formWindow;
            qdesignerintegration_updateactiveformwindow_callback(this, cbval1);
            return;
        }
        QDesignerIntegration::updateActiveFormWindow(formWindow);
    }

    // Virtual method for C ABI access and custom callback
    virtual void setupFormWindow(QDesignerFormWindowInterface* formWindow) override {
        if (qdesignerintegration_setupformwindow_callback) {
            QDesignerFormWindowInterface* cbval1 = formWindow;
            qdesignerintegration_setupformwindow_callback(this, cbval1);
            return;
        }
        QDesignerIntegration::setupFormWindow(formWindow);
    }

    // Virtual method for C ABI access and custom callback
    virtual void updateSelection() override {
        if (qdesignerintegration_updateselection_callback) {
            qdesignerintegration_updateselection_callback(this);
            return;
        }
        QDesignerIntegration::updateSelection();
    }

    // Virtual method for C ABI access and custom callback
    virtual void updateCustomWidgetPlugins() override {
        if (qdesignerintegration_updatecustomwidgetplugins_callback) {
            qdesignerintegration_updatecustomwidgetplugins_callback(this);
            return;
        }
        QDesignerIntegration::updateCustomWidgetPlugins();
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* event) override {
        if (qdesignerintegration_event_callback) {
            QEvent* cbval1 = event;
            bool callback_ret = qdesignerintegration_event_callback(this, cbval1);
            return callback_ret;
        }
        return QDesignerIntegration::event(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* watched, QEvent* event) override {
        if (qdesignerintegration_eventfilter_callback) {
            QObject* cbval1 = watched;
            QEvent* cbval2 = event;
            bool callback_ret = qdesignerintegration_eventfilter_callback(this, cbval1, cbval2);
            return callback_ret;
        }
        return QDesignerIntegration::eventFilter(watched, event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (qdesignerintegration_timerevent_callback) {
            QTimerEvent* cbval1 = event;
            qdesignerintegration_timerevent_callback(this, cbval1);
            return;
        }
        QDesignerIntegration::timerEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (qdesignerintegration_childevent_callback) {
            QChildEvent* cbval1 = event;
            qdesignerintegration_childevent_callback(this, cbval1);
            return;
        }
        QDesignerIntegration::childEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (qdesignerintegration_customevent_callback) {
            QEvent* cbval1 = event;
            qdesignerintegration_customevent_callback(this, cbval1);
            return;
        }
        QDesignerIntegration::customEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (qdesignerintegration_connectnotify_callback) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            qdesignerintegration_connectnotify_callback(this, cbval1);
            return;
        }
        QDesignerIntegration::connectNotify(signal);
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (qdesignerintegration_disconnectnotify_callback) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            qdesignerintegration_disconnectnotify_callback(this, cbval1);
            return;
        }
        QDesignerIntegration::disconnectNotify(signal);
    }

    // Friend functions
    friend void QDesignerIntegration_SuperTimerEvent(QDesignerIntegration* self, QTimerEvent* event);
    friend void QDesignerIntegration_SuperChildEvent(QDesignerIntegration* self, QChildEvent* event);
    friend void QDesignerIntegration_SuperCustomEvent(QDesignerIntegration* self, QEvent* event);
    friend void QDesignerIntegration_SuperConnectNotify(QDesignerIntegration* self, const QMetaMethod* signal);
    friend void QDesignerIntegration_SuperDisconnectNotify(QDesignerIntegration* self, const QMetaMethod* signal);
};

#endif
