#pragma once
#ifndef DESIGNER_LIBABSTRACTFORMWINDOWMANAGER_HXX
#define DESIGNER_LIBABSTRACTFORMWINDOWMANAGER_HXX

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

// This class is a subclass of QDesignerFormWindowManagerInterface
class VirtualQDesignerFormWindowManagerInterface : public QDesignerFormWindowManagerInterface {
  public:
    // Virtual class public types (including callbacks and access types)
    using QDesignerFormWindowManagerInterface_MetaObject_Callback = QMetaObject* (*)(const QDesignerFormWindowManagerInterface*);
    using QDesignerFormWindowManagerInterface_Metacast_Callback = void* (*)(QDesignerFormWindowManagerInterface*, const char*);
    using QDesignerFormWindowManagerInterface_Metacall_Callback = int (*)(QDesignerFormWindowManagerInterface*, int, int, void**);
    using QDesignerFormWindowManagerInterface_Action_Callback = QAction* (*)(const QDesignerFormWindowManagerInterface*, int);
    using QDesignerFormWindowManagerInterface_ActionGroup_Callback = QActionGroup* (*)(const QDesignerFormWindowManagerInterface*, int);
    using QDesignerFormWindowManagerInterface_ActiveFormWindow_Callback = QDesignerFormWindowInterface* (*)(const QDesignerFormWindowManagerInterface*);
    using QDesignerFormWindowManagerInterface_FormWindowCount_Callback = int (*)(const QDesignerFormWindowManagerInterface*);
    using QDesignerFormWindowManagerInterface_FormWindow_Callback = QDesignerFormWindowInterface* (*)(const QDesignerFormWindowManagerInterface*, int);
    using QDesignerFormWindowManagerInterface_CreateFormWindow_Callback = QDesignerFormWindowInterface* (*)(QDesignerFormWindowManagerInterface*, QWidget*, int);
    using QDesignerFormWindowManagerInterface_Core_Callback = QDesignerFormEditorInterface* (*)(const QDesignerFormWindowManagerInterface*);
    using QDesignerFormWindowManagerInterface_DragItems_Callback = void (*)(QDesignerFormWindowManagerInterface*, libqt_list /* of QDesignerDnDItemInterface* */);
    using QDesignerFormWindowManagerInterface_CreatePreviewPixmap_Callback = QPixmap* (*)(const QDesignerFormWindowManagerInterface*);
    using QDesignerFormWindowManagerInterface_AddFormWindow_Callback = void (*)(QDesignerFormWindowManagerInterface*, QDesignerFormWindowInterface*);
    using QDesignerFormWindowManagerInterface_RemoveFormWindow_Callback = void (*)(QDesignerFormWindowManagerInterface*, QDesignerFormWindowInterface*);
    using QDesignerFormWindowManagerInterface_SetActiveFormWindow_Callback = void (*)(QDesignerFormWindowManagerInterface*, QDesignerFormWindowInterface*);
    using QDesignerFormWindowManagerInterface_ShowPreview_Callback = void (*)(QDesignerFormWindowManagerInterface*);
    using QDesignerFormWindowManagerInterface_CloseAllPreviews_Callback = void (*)(QDesignerFormWindowManagerInterface*);
    using QDesignerFormWindowManagerInterface_ShowPluginDialog_Callback = void (*)(QDesignerFormWindowManagerInterface*);
    using QDesignerFormWindowManagerInterface_Event_Callback = bool (*)(QDesignerFormWindowManagerInterface*, QEvent*);
    using QDesignerFormWindowManagerInterface_EventFilter_Callback = bool (*)(QDesignerFormWindowManagerInterface*, QObject*, QEvent*);
    using QDesignerFormWindowManagerInterface_TimerEvent_Callback = void (*)(QDesignerFormWindowManagerInterface*, QTimerEvent*);
    using QDesignerFormWindowManagerInterface_ChildEvent_Callback = void (*)(QDesignerFormWindowManagerInterface*, QChildEvent*);
    using QDesignerFormWindowManagerInterface_CustomEvent_Callback = void (*)(QDesignerFormWindowManagerInterface*, QEvent*);
    using QDesignerFormWindowManagerInterface_ConnectNotify_Callback = void (*)(QDesignerFormWindowManagerInterface*, QMetaMethod*);
    using QDesignerFormWindowManagerInterface_DisconnectNotify_Callback = void (*)(QDesignerFormWindowManagerInterface*, QMetaMethod*);
    using QDesignerFormWindowManagerInterface::isSignalConnected;
    using QDesignerFormWindowManagerInterface::receivers;
    using QDesignerFormWindowManagerInterface::sender;
    using QDesignerFormWindowManagerInterface::senderSignalIndex;

    // Instance callback storage
    QDesignerFormWindowManagerInterface_MetaObject_Callback qdesignerformwindowmanagerinterface_metaobject_callback = nullptr;
    QDesignerFormWindowManagerInterface_Metacast_Callback qdesignerformwindowmanagerinterface_metacast_callback = nullptr;
    QDesignerFormWindowManagerInterface_Metacall_Callback qdesignerformwindowmanagerinterface_metacall_callback = nullptr;
    QDesignerFormWindowManagerInterface_Action_Callback qdesignerformwindowmanagerinterface_action_callback = nullptr;
    QDesignerFormWindowManagerInterface_ActionGroup_Callback qdesignerformwindowmanagerinterface_actiongroup_callback = nullptr;
    QDesignerFormWindowManagerInterface_ActiveFormWindow_Callback qdesignerformwindowmanagerinterface_activeformwindow_callback = nullptr;
    QDesignerFormWindowManagerInterface_FormWindowCount_Callback qdesignerformwindowmanagerinterface_formwindowcount_callback = nullptr;
    QDesignerFormWindowManagerInterface_FormWindow_Callback qdesignerformwindowmanagerinterface_formwindow_callback = nullptr;
    QDesignerFormWindowManagerInterface_CreateFormWindow_Callback qdesignerformwindowmanagerinterface_createformwindow_callback = nullptr;
    QDesignerFormWindowManagerInterface_Core_Callback qdesignerformwindowmanagerinterface_core_callback = nullptr;
    QDesignerFormWindowManagerInterface_DragItems_Callback qdesignerformwindowmanagerinterface_dragitems_callback = nullptr;
    QDesignerFormWindowManagerInterface_CreatePreviewPixmap_Callback qdesignerformwindowmanagerinterface_createpreviewpixmap_callback = nullptr;
    QDesignerFormWindowManagerInterface_AddFormWindow_Callback qdesignerformwindowmanagerinterface_addformwindow_callback = nullptr;
    QDesignerFormWindowManagerInterface_RemoveFormWindow_Callback qdesignerformwindowmanagerinterface_removeformwindow_callback = nullptr;
    QDesignerFormWindowManagerInterface_SetActiveFormWindow_Callback qdesignerformwindowmanagerinterface_setactiveformwindow_callback = nullptr;
    QDesignerFormWindowManagerInterface_ShowPreview_Callback qdesignerformwindowmanagerinterface_showpreview_callback = nullptr;
    QDesignerFormWindowManagerInterface_CloseAllPreviews_Callback qdesignerformwindowmanagerinterface_closeallpreviews_callback = nullptr;
    QDesignerFormWindowManagerInterface_ShowPluginDialog_Callback qdesignerformwindowmanagerinterface_showplugindialog_callback = nullptr;
    QDesignerFormWindowManagerInterface_Event_Callback qdesignerformwindowmanagerinterface_event_callback = nullptr;
    QDesignerFormWindowManagerInterface_EventFilter_Callback qdesignerformwindowmanagerinterface_eventfilter_callback = nullptr;
    QDesignerFormWindowManagerInterface_TimerEvent_Callback qdesignerformwindowmanagerinterface_timerevent_callback = nullptr;
    QDesignerFormWindowManagerInterface_ChildEvent_Callback qdesignerformwindowmanagerinterface_childevent_callback = nullptr;
    QDesignerFormWindowManagerInterface_CustomEvent_Callback qdesignerformwindowmanagerinterface_customevent_callback = nullptr;
    QDesignerFormWindowManagerInterface_ConnectNotify_Callback qdesignerformwindowmanagerinterface_connectnotify_callback = nullptr;
    QDesignerFormWindowManagerInterface_DisconnectNotify_Callback qdesignerformwindowmanagerinterface_disconnectnotify_callback = nullptr;

    // Access struct
    struct Base : QDesignerFormWindowManagerInterface {
        using QDesignerFormWindowManagerInterface::childEvent;
        using QDesignerFormWindowManagerInterface::connectNotify;
        using QDesignerFormWindowManagerInterface::customEvent;
        using QDesignerFormWindowManagerInterface::disconnectNotify;
        using QDesignerFormWindowManagerInterface::timerEvent;
    };

    VirtualQDesignerFormWindowManagerInterface() : QDesignerFormWindowManagerInterface() {};
    VirtualQDesignerFormWindowManagerInterface(QObject* parent) : QDesignerFormWindowManagerInterface(parent) {};

    // Virtual method for C ABI access and custom callback
    virtual const QMetaObject* metaObject() const override {
        if (qdesignerformwindowmanagerinterface_metaobject_callback) {
            QMetaObject* callback_ret = qdesignerformwindowmanagerinterface_metaobject_callback(this);
            return callback_ret;
        }
        return QDesignerFormWindowManagerInterface::metaObject();
    }

    // Virtual method for C ABI access and custom callback
    virtual void* qt_metacast(const char* param1) override {
        if (qdesignerformwindowmanagerinterface_metacast_callback) {
            const char* cbval1 = (const char*)param1;
            void* callback_ret = qdesignerformwindowmanagerinterface_metacast_callback(this, cbval1);
            return callback_ret;
        }
        return QDesignerFormWindowManagerInterface::qt_metacast(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (qdesignerformwindowmanagerinterface_metacall_callback) {
            int cbval1 = static_cast<int>(param1);
            int cbval2 = param2;
            void** cbval3 = param3;
            int callback_ret = qdesignerformwindowmanagerinterface_metacall_callback(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        }
        return QDesignerFormWindowManagerInterface::qt_metacall(param1, param2, param3);
    }

    // Virtual method for C ABI access and custom callback
    virtual QAction* action(QDesignerFormWindowManagerInterface::Action action) const override {
        if (qdesignerformwindowmanagerinterface_action_callback) {
            int cbval1 = static_cast<int>(action);
            QAction* callback_ret = qdesignerformwindowmanagerinterface_action_callback(this, cbval1);
            return callback_ret;
        }
        // Pure virtual method
        qFatal("Error: Pure virtual method QDesignerFormWindowManagerInterface::action called without being implemented");
    }

    // Virtual method for C ABI access and custom callback
    virtual QActionGroup* actionGroup(QDesignerFormWindowManagerInterface::ActionGroup actionGroup) const override {
        if (qdesignerformwindowmanagerinterface_actiongroup_callback) {
            int cbval1 = static_cast<int>(actionGroup);
            QActionGroup* callback_ret = qdesignerformwindowmanagerinterface_actiongroup_callback(this, cbval1);
            return callback_ret;
        }
        // Pure virtual method
        qFatal("Error: Pure virtual method QDesignerFormWindowManagerInterface::actionGroup called without being implemented");
    }

    // Virtual method for C ABI access and custom callback
    virtual QDesignerFormWindowInterface* activeFormWindow() const override {
        if (qdesignerformwindowmanagerinterface_activeformwindow_callback) {
            QDesignerFormWindowInterface* callback_ret = qdesignerformwindowmanagerinterface_activeformwindow_callback(this);
            return callback_ret;
        }
        // Pure virtual method
        qFatal("Error: Pure virtual method QDesignerFormWindowManagerInterface::activeFormWindow called without being implemented");
    }

    // Virtual method for C ABI access and custom callback
    virtual int formWindowCount() const override {
        if (qdesignerformwindowmanagerinterface_formwindowcount_callback) {
            int callback_ret = qdesignerformwindowmanagerinterface_formwindowcount_callback(this);
            return static_cast<int>(callback_ret);
        }
        // Pure virtual method
        qFatal("Error: Pure virtual method QDesignerFormWindowManagerInterface::formWindowCount called without being implemented");
    }

    // Virtual method for C ABI access and custom callback
    virtual QDesignerFormWindowInterface* formWindow(int index) const override {
        if (qdesignerformwindowmanagerinterface_formwindow_callback) {
            int cbval1 = index;
            QDesignerFormWindowInterface* callback_ret = qdesignerformwindowmanagerinterface_formwindow_callback(this, cbval1);
            return callback_ret;
        }
        // Pure virtual method
        qFatal("Error: Pure virtual method QDesignerFormWindowManagerInterface::formWindow called without being implemented");
    }

    // Virtual method for C ABI access and custom callback
    virtual QDesignerFormWindowInterface* createFormWindow(QWidget* parentWidget, Qt::WindowFlags flags) override {
        if (qdesignerformwindowmanagerinterface_createformwindow_callback) {
            QWidget* cbval1 = parentWidget;
            int cbval2 = static_cast<int>(flags);
            QDesignerFormWindowInterface* callback_ret = qdesignerformwindowmanagerinterface_createformwindow_callback(this, cbval1, cbval2);
            return callback_ret;
        }
        // Pure virtual method
        qFatal("Error: Pure virtual method QDesignerFormWindowManagerInterface::createFormWindow called without being implemented");
    }

    // Virtual method for C ABI access and custom callback
    virtual QDesignerFormEditorInterface* core() const override {
        if (qdesignerformwindowmanagerinterface_core_callback) {
            QDesignerFormEditorInterface* callback_ret = qdesignerformwindowmanagerinterface_core_callback(this);
            return callback_ret;
        }
        // Pure virtual method
        qFatal("Error: Pure virtual method QDesignerFormWindowManagerInterface::core called without being implemented");
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragItems(const QList<QDesignerDnDItemInterface*>& item_list) override {
        if (qdesignerformwindowmanagerinterface_dragitems_callback) {
            const QList<QDesignerDnDItemInterface*>& item_list_ret = item_list;
            // Convert QList<> from C++ memory to manually-managed C memory
            QDesignerDnDItemInterface** item_list_arr = static_cast<QDesignerDnDItemInterface**>(malloc(sizeof(QDesignerDnDItemInterface*) * (item_list_ret.size())));
            for (qsizetype i = 0; i < item_list_ret.size(); ++i) {
                item_list_arr[i] = item_list_ret[i];
            }
            libqt_list item_list_out;
            item_list_out.len = item_list_ret.size();
            item_list_out.data = static_cast<void*>(item_list_arr);
            libqt_list /* of QDesignerDnDItemInterface* */ cbval1 = item_list_out;
            qdesignerformwindowmanagerinterface_dragitems_callback(this, cbval1);
            free(item_list_arr);
            return;
        }
        // Pure virtual method
        qFatal("Error: Pure virtual method QDesignerFormWindowManagerInterface::dragItems called without being implemented");
    }

    // Virtual method for C ABI access and custom callback
    virtual QPixmap createPreviewPixmap() const override {
        if (qdesignerformwindowmanagerinterface_createpreviewpixmap_callback) {
            QPixmap* callback_ret = qdesignerformwindowmanagerinterface_createpreviewpixmap_callback(this);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        // Pure virtual method
        qFatal("Error: Pure virtual method QDesignerFormWindowManagerInterface::createPreviewPixmap called without being implemented");
    }

    // Virtual method for C ABI access and custom callback
    virtual void addFormWindow(QDesignerFormWindowInterface* formWindow) override {
        if (qdesignerformwindowmanagerinterface_addformwindow_callback) {
            QDesignerFormWindowInterface* cbval1 = formWindow;
            qdesignerformwindowmanagerinterface_addformwindow_callback(this, cbval1);
            return;
        }
        // Pure virtual method
        qFatal("Error: Pure virtual method QDesignerFormWindowManagerInterface::addFormWindow called without being implemented");
    }

    // Virtual method for C ABI access and custom callback
    virtual void removeFormWindow(QDesignerFormWindowInterface* formWindow) override {
        if (qdesignerformwindowmanagerinterface_removeformwindow_callback) {
            QDesignerFormWindowInterface* cbval1 = formWindow;
            qdesignerformwindowmanagerinterface_removeformwindow_callback(this, cbval1);
            return;
        }
        // Pure virtual method
        qFatal("Error: Pure virtual method QDesignerFormWindowManagerInterface::removeFormWindow called without being implemented");
    }

    // Virtual method for C ABI access and custom callback
    virtual void setActiveFormWindow(QDesignerFormWindowInterface* formWindow) override {
        if (qdesignerformwindowmanagerinterface_setactiveformwindow_callback) {
            QDesignerFormWindowInterface* cbval1 = formWindow;
            qdesignerformwindowmanagerinterface_setactiveformwindow_callback(this, cbval1);
            return;
        }
        // Pure virtual method
        qFatal("Error: Pure virtual method QDesignerFormWindowManagerInterface::setActiveFormWindow called without being implemented");
    }

    // Virtual method for C ABI access and custom callback
    virtual void showPreview() override {
        if (qdesignerformwindowmanagerinterface_showpreview_callback) {
            qdesignerformwindowmanagerinterface_showpreview_callback(this);
            return;
        }
        // Pure virtual method
        qFatal("Error: Pure virtual method QDesignerFormWindowManagerInterface::showPreview called without being implemented");
    }

    // Virtual method for C ABI access and custom callback
    virtual void closeAllPreviews() override {
        if (qdesignerformwindowmanagerinterface_closeallpreviews_callback) {
            qdesignerformwindowmanagerinterface_closeallpreviews_callback(this);
            return;
        }
        // Pure virtual method
        qFatal("Error: Pure virtual method QDesignerFormWindowManagerInterface::closeAllPreviews called without being implemented");
    }

    // Virtual method for C ABI access and custom callback
    virtual void showPluginDialog() override {
        if (qdesignerformwindowmanagerinterface_showplugindialog_callback) {
            qdesignerformwindowmanagerinterface_showplugindialog_callback(this);
            return;
        }
        // Pure virtual method
        qFatal("Error: Pure virtual method QDesignerFormWindowManagerInterface::showPluginDialog called without being implemented");
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* event) override {
        if (qdesignerformwindowmanagerinterface_event_callback) {
            QEvent* cbval1 = event;
            bool callback_ret = qdesignerformwindowmanagerinterface_event_callback(this, cbval1);
            return callback_ret;
        }
        return QDesignerFormWindowManagerInterface::event(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* watched, QEvent* event) override {
        if (qdesignerformwindowmanagerinterface_eventfilter_callback) {
            QObject* cbval1 = watched;
            QEvent* cbval2 = event;
            bool callback_ret = qdesignerformwindowmanagerinterface_eventfilter_callback(this, cbval1, cbval2);
            return callback_ret;
        }
        return QDesignerFormWindowManagerInterface::eventFilter(watched, event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (qdesignerformwindowmanagerinterface_timerevent_callback) {
            QTimerEvent* cbval1 = event;
            qdesignerformwindowmanagerinterface_timerevent_callback(this, cbval1);
            return;
        }
        QDesignerFormWindowManagerInterface::timerEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (qdesignerformwindowmanagerinterface_childevent_callback) {
            QChildEvent* cbval1 = event;
            qdesignerformwindowmanagerinterface_childevent_callback(this, cbval1);
            return;
        }
        QDesignerFormWindowManagerInterface::childEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (qdesignerformwindowmanagerinterface_customevent_callback) {
            QEvent* cbval1 = event;
            qdesignerformwindowmanagerinterface_customevent_callback(this, cbval1);
            return;
        }
        QDesignerFormWindowManagerInterface::customEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (qdesignerformwindowmanagerinterface_connectnotify_callback) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            qdesignerformwindowmanagerinterface_connectnotify_callback(this, cbval1);
            return;
        }
        QDesignerFormWindowManagerInterface::connectNotify(signal);
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (qdesignerformwindowmanagerinterface_disconnectnotify_callback) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            qdesignerformwindowmanagerinterface_disconnectnotify_callback(this, cbval1);
            return;
        }
        QDesignerFormWindowManagerInterface::disconnectNotify(signal);
    }

    // Friend functions
    friend void QDesignerFormWindowManagerInterface_SuperTimerEvent(QDesignerFormWindowManagerInterface* self, QTimerEvent* event);
    friend void QDesignerFormWindowManagerInterface_SuperChildEvent(QDesignerFormWindowManagerInterface* self, QChildEvent* event);
    friend void QDesignerFormWindowManagerInterface_SuperCustomEvent(QDesignerFormWindowManagerInterface* self, QEvent* event);
    friend void QDesignerFormWindowManagerInterface_SuperConnectNotify(QDesignerFormWindowManagerInterface* self, const QMetaMethod* signal);
    friend void QDesignerFormWindowManagerInterface_SuperDisconnectNotify(QDesignerFormWindowManagerInterface* self, const QMetaMethod* signal);
};

#endif
