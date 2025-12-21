#pragma once
#ifndef SRC_DESIGNERC_LIBVIRTUALABSTRACTFORMWINDOWMANAGER_H
#define SRC_DESIGNERC_LIBVIRTUALABSTRACTFORMWINDOWMANAGER_H

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

// This class is a subclass of QDesignerFormWindowManagerInterface so that we can call protected methods
class VirtualQDesignerFormWindowManagerInterface : public QDesignerFormWindowManagerInterface {

  public:
    // Virtual class boolean flag
    bool isVirtualQDesignerFormWindowManagerInterface = true;

    // Virtual class public types (including callbacks)
    using QDesignerFormWindowManagerInterface_Metacall_Callback = int (*)(QDesignerFormWindowManagerInterface*, int, int, void**);
    using QDesignerFormWindowManagerInterface_Action_Callback = QAction* (*)(const QDesignerFormWindowManagerInterface*, int);
    using QDesignerFormWindowManagerInterface_ActionGroup_Callback = QActionGroup* (*)(const QDesignerFormWindowManagerInterface*, int);
    using QDesignerFormWindowManagerInterface_ActiveFormWindow_Callback = QDesignerFormWindowInterface* (*)();
    using QDesignerFormWindowManagerInterface_FormWindowCount_Callback = int (*)();
    using QDesignerFormWindowManagerInterface_FormWindow_Callback = QDesignerFormWindowInterface* (*)(const QDesignerFormWindowManagerInterface*, int);
    using QDesignerFormWindowManagerInterface_CreateFormWindow_Callback = QDesignerFormWindowInterface* (*)(QDesignerFormWindowManagerInterface*, QWidget*, int);
    using QDesignerFormWindowManagerInterface_Core_Callback = QDesignerFormEditorInterface* (*)();
    using QDesignerFormWindowManagerInterface_DragItems_Callback = void (*)(QDesignerFormWindowManagerInterface*, libqt_list /* of QDesignerDnDItemInterface* */);
    using QDesignerFormWindowManagerInterface_CreatePreviewPixmap_Callback = QPixmap* (*)();
    using QDesignerFormWindowManagerInterface_AddFormWindow_Callback = void (*)(QDesignerFormWindowManagerInterface*, QDesignerFormWindowInterface*);
    using QDesignerFormWindowManagerInterface_RemoveFormWindow_Callback = void (*)(QDesignerFormWindowManagerInterface*, QDesignerFormWindowInterface*);
    using QDesignerFormWindowManagerInterface_SetActiveFormWindow_Callback = void (*)(QDesignerFormWindowManagerInterface*, QDesignerFormWindowInterface*);
    using QDesignerFormWindowManagerInterface_ShowPreview_Callback = void (*)();
    using QDesignerFormWindowManagerInterface_CloseAllPreviews_Callback = void (*)();
    using QDesignerFormWindowManagerInterface_ShowPluginDialog_Callback = void (*)();
    using QDesignerFormWindowManagerInterface_Event_Callback = bool (*)(QDesignerFormWindowManagerInterface*, QEvent*);
    using QDesignerFormWindowManagerInterface_EventFilter_Callback = bool (*)(QDesignerFormWindowManagerInterface*, QObject*, QEvent*);
    using QDesignerFormWindowManagerInterface_TimerEvent_Callback = void (*)(QDesignerFormWindowManagerInterface*, QTimerEvent*);
    using QDesignerFormWindowManagerInterface_ChildEvent_Callback = void (*)(QDesignerFormWindowManagerInterface*, QChildEvent*);
    using QDesignerFormWindowManagerInterface_CustomEvent_Callback = void (*)(QDesignerFormWindowManagerInterface*, QEvent*);
    using QDesignerFormWindowManagerInterface_ConnectNotify_Callback = void (*)(QDesignerFormWindowManagerInterface*, QMetaMethod*);
    using QDesignerFormWindowManagerInterface_DisconnectNotify_Callback = void (*)(QDesignerFormWindowManagerInterface*, QMetaMethod*);
    using QDesignerFormWindowManagerInterface_Sender_Callback = QObject* (*)();
    using QDesignerFormWindowManagerInterface_SenderSignalIndex_Callback = int (*)();
    using QDesignerFormWindowManagerInterface_Receivers_Callback = int (*)(const QDesignerFormWindowManagerInterface*, const char*);
    using QDesignerFormWindowManagerInterface_IsSignalConnected_Callback = bool (*)(const QDesignerFormWindowManagerInterface*, QMetaMethod*);

  protected:
    // Instance callback storage
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
    QDesignerFormWindowManagerInterface_Sender_Callback qdesignerformwindowmanagerinterface_sender_callback = nullptr;
    QDesignerFormWindowManagerInterface_SenderSignalIndex_Callback qdesignerformwindowmanagerinterface_sendersignalindex_callback = nullptr;
    QDesignerFormWindowManagerInterface_Receivers_Callback qdesignerformwindowmanagerinterface_receivers_callback = nullptr;
    QDesignerFormWindowManagerInterface_IsSignalConnected_Callback qdesignerformwindowmanagerinterface_issignalconnected_callback = nullptr;

    // Instance base flags
    mutable bool qdesignerformwindowmanagerinterface_metacall_isbase = false;
    mutable bool qdesignerformwindowmanagerinterface_action_isbase = false;
    mutable bool qdesignerformwindowmanagerinterface_actiongroup_isbase = false;
    mutable bool qdesignerformwindowmanagerinterface_activeformwindow_isbase = false;
    mutable bool qdesignerformwindowmanagerinterface_formwindowcount_isbase = false;
    mutable bool qdesignerformwindowmanagerinterface_formwindow_isbase = false;
    mutable bool qdesignerformwindowmanagerinterface_createformwindow_isbase = false;
    mutable bool qdesignerformwindowmanagerinterface_core_isbase = false;
    mutable bool qdesignerformwindowmanagerinterface_dragitems_isbase = false;
    mutable bool qdesignerformwindowmanagerinterface_createpreviewpixmap_isbase = false;
    mutable bool qdesignerformwindowmanagerinterface_addformwindow_isbase = false;
    mutable bool qdesignerformwindowmanagerinterface_removeformwindow_isbase = false;
    mutable bool qdesignerformwindowmanagerinterface_setactiveformwindow_isbase = false;
    mutable bool qdesignerformwindowmanagerinterface_showpreview_isbase = false;
    mutable bool qdesignerformwindowmanagerinterface_closeallpreviews_isbase = false;
    mutable bool qdesignerformwindowmanagerinterface_showplugindialog_isbase = false;
    mutable bool qdesignerformwindowmanagerinterface_event_isbase = false;
    mutable bool qdesignerformwindowmanagerinterface_eventfilter_isbase = false;
    mutable bool qdesignerformwindowmanagerinterface_timerevent_isbase = false;
    mutable bool qdesignerformwindowmanagerinterface_childevent_isbase = false;
    mutable bool qdesignerformwindowmanagerinterface_customevent_isbase = false;
    mutable bool qdesignerformwindowmanagerinterface_connectnotify_isbase = false;
    mutable bool qdesignerformwindowmanagerinterface_disconnectnotify_isbase = false;
    mutable bool qdesignerformwindowmanagerinterface_sender_isbase = false;
    mutable bool qdesignerformwindowmanagerinterface_sendersignalindex_isbase = false;
    mutable bool qdesignerformwindowmanagerinterface_receivers_isbase = false;
    mutable bool qdesignerformwindowmanagerinterface_issignalconnected_isbase = false;

  public:
    VirtualQDesignerFormWindowManagerInterface() : QDesignerFormWindowManagerInterface() {};
    VirtualQDesignerFormWindowManagerInterface(QObject* parent) : QDesignerFormWindowManagerInterface(parent) {};

    ~VirtualQDesignerFormWindowManagerInterface() {
        qdesignerformwindowmanagerinterface_metacall_callback = nullptr;
        qdesignerformwindowmanagerinterface_action_callback = nullptr;
        qdesignerformwindowmanagerinterface_actiongroup_callback = nullptr;
        qdesignerformwindowmanagerinterface_activeformwindow_callback = nullptr;
        qdesignerformwindowmanagerinterface_formwindowcount_callback = nullptr;
        qdesignerformwindowmanagerinterface_formwindow_callback = nullptr;
        qdesignerformwindowmanagerinterface_createformwindow_callback = nullptr;
        qdesignerformwindowmanagerinterface_core_callback = nullptr;
        qdesignerformwindowmanagerinterface_dragitems_callback = nullptr;
        qdesignerformwindowmanagerinterface_createpreviewpixmap_callback = nullptr;
        qdesignerformwindowmanagerinterface_addformwindow_callback = nullptr;
        qdesignerformwindowmanagerinterface_removeformwindow_callback = nullptr;
        qdesignerformwindowmanagerinterface_setactiveformwindow_callback = nullptr;
        qdesignerformwindowmanagerinterface_showpreview_callback = nullptr;
        qdesignerformwindowmanagerinterface_closeallpreviews_callback = nullptr;
        qdesignerformwindowmanagerinterface_showplugindialog_callback = nullptr;
        qdesignerformwindowmanagerinterface_event_callback = nullptr;
        qdesignerformwindowmanagerinterface_eventfilter_callback = nullptr;
        qdesignerformwindowmanagerinterface_timerevent_callback = nullptr;
        qdesignerformwindowmanagerinterface_childevent_callback = nullptr;
        qdesignerformwindowmanagerinterface_customevent_callback = nullptr;
        qdesignerformwindowmanagerinterface_connectnotify_callback = nullptr;
        qdesignerformwindowmanagerinterface_disconnectnotify_callback = nullptr;
        qdesignerformwindowmanagerinterface_sender_callback = nullptr;
        qdesignerformwindowmanagerinterface_sendersignalindex_callback = nullptr;
        qdesignerformwindowmanagerinterface_receivers_callback = nullptr;
        qdesignerformwindowmanagerinterface_issignalconnected_callback = nullptr;
    }

    // Callback setters
    inline void setQDesignerFormWindowManagerInterface_Metacall_Callback(QDesignerFormWindowManagerInterface_Metacall_Callback cb) { qdesignerformwindowmanagerinterface_metacall_callback = cb; }
    inline void setQDesignerFormWindowManagerInterface_Action_Callback(QDesignerFormWindowManagerInterface_Action_Callback cb) { qdesignerformwindowmanagerinterface_action_callback = cb; }
    inline void setQDesignerFormWindowManagerInterface_ActionGroup_Callback(QDesignerFormWindowManagerInterface_ActionGroup_Callback cb) { qdesignerformwindowmanagerinterface_actiongroup_callback = cb; }
    inline void setQDesignerFormWindowManagerInterface_ActiveFormWindow_Callback(QDesignerFormWindowManagerInterface_ActiveFormWindow_Callback cb) { qdesignerformwindowmanagerinterface_activeformwindow_callback = cb; }
    inline void setQDesignerFormWindowManagerInterface_FormWindowCount_Callback(QDesignerFormWindowManagerInterface_FormWindowCount_Callback cb) { qdesignerformwindowmanagerinterface_formwindowcount_callback = cb; }
    inline void setQDesignerFormWindowManagerInterface_FormWindow_Callback(QDesignerFormWindowManagerInterface_FormWindow_Callback cb) { qdesignerformwindowmanagerinterface_formwindow_callback = cb; }
    inline void setQDesignerFormWindowManagerInterface_CreateFormWindow_Callback(QDesignerFormWindowManagerInterface_CreateFormWindow_Callback cb) { qdesignerformwindowmanagerinterface_createformwindow_callback = cb; }
    inline void setQDesignerFormWindowManagerInterface_Core_Callback(QDesignerFormWindowManagerInterface_Core_Callback cb) { qdesignerformwindowmanagerinterface_core_callback = cb; }
    inline void setQDesignerFormWindowManagerInterface_DragItems_Callback(QDesignerFormWindowManagerInterface_DragItems_Callback cb) { qdesignerformwindowmanagerinterface_dragitems_callback = cb; }
    inline void setQDesignerFormWindowManagerInterface_CreatePreviewPixmap_Callback(QDesignerFormWindowManagerInterface_CreatePreviewPixmap_Callback cb) { qdesignerformwindowmanagerinterface_createpreviewpixmap_callback = cb; }
    inline void setQDesignerFormWindowManagerInterface_AddFormWindow_Callback(QDesignerFormWindowManagerInterface_AddFormWindow_Callback cb) { qdesignerformwindowmanagerinterface_addformwindow_callback = cb; }
    inline void setQDesignerFormWindowManagerInterface_RemoveFormWindow_Callback(QDesignerFormWindowManagerInterface_RemoveFormWindow_Callback cb) { qdesignerformwindowmanagerinterface_removeformwindow_callback = cb; }
    inline void setQDesignerFormWindowManagerInterface_SetActiveFormWindow_Callback(QDesignerFormWindowManagerInterface_SetActiveFormWindow_Callback cb) { qdesignerformwindowmanagerinterface_setactiveformwindow_callback = cb; }
    inline void setQDesignerFormWindowManagerInterface_ShowPreview_Callback(QDesignerFormWindowManagerInterface_ShowPreview_Callback cb) { qdesignerformwindowmanagerinterface_showpreview_callback = cb; }
    inline void setQDesignerFormWindowManagerInterface_CloseAllPreviews_Callback(QDesignerFormWindowManagerInterface_CloseAllPreviews_Callback cb) { qdesignerformwindowmanagerinterface_closeallpreviews_callback = cb; }
    inline void setQDesignerFormWindowManagerInterface_ShowPluginDialog_Callback(QDesignerFormWindowManagerInterface_ShowPluginDialog_Callback cb) { qdesignerformwindowmanagerinterface_showplugindialog_callback = cb; }
    inline void setQDesignerFormWindowManagerInterface_Event_Callback(QDesignerFormWindowManagerInterface_Event_Callback cb) { qdesignerformwindowmanagerinterface_event_callback = cb; }
    inline void setQDesignerFormWindowManagerInterface_EventFilter_Callback(QDesignerFormWindowManagerInterface_EventFilter_Callback cb) { qdesignerformwindowmanagerinterface_eventfilter_callback = cb; }
    inline void setQDesignerFormWindowManagerInterface_TimerEvent_Callback(QDesignerFormWindowManagerInterface_TimerEvent_Callback cb) { qdesignerformwindowmanagerinterface_timerevent_callback = cb; }
    inline void setQDesignerFormWindowManagerInterface_ChildEvent_Callback(QDesignerFormWindowManagerInterface_ChildEvent_Callback cb) { qdesignerformwindowmanagerinterface_childevent_callback = cb; }
    inline void setQDesignerFormWindowManagerInterface_CustomEvent_Callback(QDesignerFormWindowManagerInterface_CustomEvent_Callback cb) { qdesignerformwindowmanagerinterface_customevent_callback = cb; }
    inline void setQDesignerFormWindowManagerInterface_ConnectNotify_Callback(QDesignerFormWindowManagerInterface_ConnectNotify_Callback cb) { qdesignerformwindowmanagerinterface_connectnotify_callback = cb; }
    inline void setQDesignerFormWindowManagerInterface_DisconnectNotify_Callback(QDesignerFormWindowManagerInterface_DisconnectNotify_Callback cb) { qdesignerformwindowmanagerinterface_disconnectnotify_callback = cb; }
    inline void setQDesignerFormWindowManagerInterface_Sender_Callback(QDesignerFormWindowManagerInterface_Sender_Callback cb) { qdesignerformwindowmanagerinterface_sender_callback = cb; }
    inline void setQDesignerFormWindowManagerInterface_SenderSignalIndex_Callback(QDesignerFormWindowManagerInterface_SenderSignalIndex_Callback cb) { qdesignerformwindowmanagerinterface_sendersignalindex_callback = cb; }
    inline void setQDesignerFormWindowManagerInterface_Receivers_Callback(QDesignerFormWindowManagerInterface_Receivers_Callback cb) { qdesignerformwindowmanagerinterface_receivers_callback = cb; }
    inline void setQDesignerFormWindowManagerInterface_IsSignalConnected_Callback(QDesignerFormWindowManagerInterface_IsSignalConnected_Callback cb) { qdesignerformwindowmanagerinterface_issignalconnected_callback = cb; }

    // Base flag setters
    inline void setQDesignerFormWindowManagerInterface_Metacall_IsBase(bool value) const { qdesignerformwindowmanagerinterface_metacall_isbase = value; }
    inline void setQDesignerFormWindowManagerInterface_Action_IsBase(bool value) const { qdesignerformwindowmanagerinterface_action_isbase = value; }
    inline void setQDesignerFormWindowManagerInterface_ActionGroup_IsBase(bool value) const { qdesignerformwindowmanagerinterface_actiongroup_isbase = value; }
    inline void setQDesignerFormWindowManagerInterface_ActiveFormWindow_IsBase(bool value) const { qdesignerformwindowmanagerinterface_activeformwindow_isbase = value; }
    inline void setQDesignerFormWindowManagerInterface_FormWindowCount_IsBase(bool value) const { qdesignerformwindowmanagerinterface_formwindowcount_isbase = value; }
    inline void setQDesignerFormWindowManagerInterface_FormWindow_IsBase(bool value) const { qdesignerformwindowmanagerinterface_formwindow_isbase = value; }
    inline void setQDesignerFormWindowManagerInterface_CreateFormWindow_IsBase(bool value) const { qdesignerformwindowmanagerinterface_createformwindow_isbase = value; }
    inline void setQDesignerFormWindowManagerInterface_Core_IsBase(bool value) const { qdesignerformwindowmanagerinterface_core_isbase = value; }
    inline void setQDesignerFormWindowManagerInterface_DragItems_IsBase(bool value) const { qdesignerformwindowmanagerinterface_dragitems_isbase = value; }
    inline void setQDesignerFormWindowManagerInterface_CreatePreviewPixmap_IsBase(bool value) const { qdesignerformwindowmanagerinterface_createpreviewpixmap_isbase = value; }
    inline void setQDesignerFormWindowManagerInterface_AddFormWindow_IsBase(bool value) const { qdesignerformwindowmanagerinterface_addformwindow_isbase = value; }
    inline void setQDesignerFormWindowManagerInterface_RemoveFormWindow_IsBase(bool value) const { qdesignerformwindowmanagerinterface_removeformwindow_isbase = value; }
    inline void setQDesignerFormWindowManagerInterface_SetActiveFormWindow_IsBase(bool value) const { qdesignerformwindowmanagerinterface_setactiveformwindow_isbase = value; }
    inline void setQDesignerFormWindowManagerInterface_ShowPreview_IsBase(bool value) const { qdesignerformwindowmanagerinterface_showpreview_isbase = value; }
    inline void setQDesignerFormWindowManagerInterface_CloseAllPreviews_IsBase(bool value) const { qdesignerformwindowmanagerinterface_closeallpreviews_isbase = value; }
    inline void setQDesignerFormWindowManagerInterface_ShowPluginDialog_IsBase(bool value) const { qdesignerformwindowmanagerinterface_showplugindialog_isbase = value; }
    inline void setQDesignerFormWindowManagerInterface_Event_IsBase(bool value) const { qdesignerformwindowmanagerinterface_event_isbase = value; }
    inline void setQDesignerFormWindowManagerInterface_EventFilter_IsBase(bool value) const { qdesignerformwindowmanagerinterface_eventfilter_isbase = value; }
    inline void setQDesignerFormWindowManagerInterface_TimerEvent_IsBase(bool value) const { qdesignerformwindowmanagerinterface_timerevent_isbase = value; }
    inline void setQDesignerFormWindowManagerInterface_ChildEvent_IsBase(bool value) const { qdesignerformwindowmanagerinterface_childevent_isbase = value; }
    inline void setQDesignerFormWindowManagerInterface_CustomEvent_IsBase(bool value) const { qdesignerformwindowmanagerinterface_customevent_isbase = value; }
    inline void setQDesignerFormWindowManagerInterface_ConnectNotify_IsBase(bool value) const { qdesignerformwindowmanagerinterface_connectnotify_isbase = value; }
    inline void setQDesignerFormWindowManagerInterface_DisconnectNotify_IsBase(bool value) const { qdesignerformwindowmanagerinterface_disconnectnotify_isbase = value; }
    inline void setQDesignerFormWindowManagerInterface_Sender_IsBase(bool value) const { qdesignerformwindowmanagerinterface_sender_isbase = value; }
    inline void setQDesignerFormWindowManagerInterface_SenderSignalIndex_IsBase(bool value) const { qdesignerformwindowmanagerinterface_sendersignalindex_isbase = value; }
    inline void setQDesignerFormWindowManagerInterface_Receivers_IsBase(bool value) const { qdesignerformwindowmanagerinterface_receivers_isbase = value; }
    inline void setQDesignerFormWindowManagerInterface_IsSignalConnected_IsBase(bool value) const { qdesignerformwindowmanagerinterface_issignalconnected_isbase = value; }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (qdesignerformwindowmanagerinterface_metacall_isbase) {
            qdesignerformwindowmanagerinterface_metacall_isbase = false;
            return QDesignerFormWindowManagerInterface::qt_metacall(param1, param2, param3);
        } else if (qdesignerformwindowmanagerinterface_metacall_callback != nullptr) {
            int cbval1 = static_cast<int>(param1);
            int cbval2 = param2;
            void** cbval3 = param3;

            int callback_ret = qdesignerformwindowmanagerinterface_metacall_callback(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        } else {
            return QDesignerFormWindowManagerInterface::qt_metacall(param1, param2, param3);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QAction* action(QDesignerFormWindowManagerInterface::Action action) const override {
        if (qdesignerformwindowmanagerinterface_action_callback != nullptr) {
            int cbval1 = static_cast<int>(action);

            QAction* callback_ret = qdesignerformwindowmanagerinterface_action_callback(this, cbval1);
            return callback_ret;
        } else {
            return {};
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QActionGroup* actionGroup(QDesignerFormWindowManagerInterface::ActionGroup actionGroup) const override {
        if (qdesignerformwindowmanagerinterface_actiongroup_callback != nullptr) {
            int cbval1 = static_cast<int>(actionGroup);

            QActionGroup* callback_ret = qdesignerformwindowmanagerinterface_actiongroup_callback(this, cbval1);
            return callback_ret;
        } else {
            return {};
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QDesignerFormWindowInterface* activeFormWindow() const override {
        if (qdesignerformwindowmanagerinterface_activeformwindow_callback != nullptr) {
            QDesignerFormWindowInterface* callback_ret = qdesignerformwindowmanagerinterface_activeformwindow_callback();
            return callback_ret;
        } else {
            return {};
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual int formWindowCount() const override {
        if (qdesignerformwindowmanagerinterface_formwindowcount_callback != nullptr) {
            int callback_ret = qdesignerformwindowmanagerinterface_formwindowcount_callback();
            return static_cast<int>(callback_ret);
        } else {
            return {};
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QDesignerFormWindowInterface* formWindow(int index) const override {
        if (qdesignerformwindowmanagerinterface_formwindow_callback != nullptr) {
            int cbval1 = index;

            QDesignerFormWindowInterface* callback_ret = qdesignerformwindowmanagerinterface_formwindow_callback(this, cbval1);
            return callback_ret;
        } else {
            return {};
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QDesignerFormWindowInterface* createFormWindow(QWidget* parentWidget, Qt::WindowFlags flags) override {
        if (qdesignerformwindowmanagerinterface_createformwindow_callback != nullptr) {
            QWidget* cbval1 = parentWidget;
            int cbval2 = static_cast<int>(flags);

            QDesignerFormWindowInterface* callback_ret = qdesignerformwindowmanagerinterface_createformwindow_callback(this, cbval1, cbval2);
            return callback_ret;
        } else {
            return {};
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QDesignerFormEditorInterface* core() const override {
        if (qdesignerformwindowmanagerinterface_core_callback != nullptr) {
            QDesignerFormEditorInterface* callback_ret = qdesignerformwindowmanagerinterface_core_callback();
            return callback_ret;
        } else {
            return {};
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragItems(const QList<QDesignerDnDItemInterface*>& item_list) override {
        if (qdesignerformwindowmanagerinterface_dragitems_callback != nullptr) {
            const QList<QDesignerDnDItemInterface*>& item_list_ret = item_list;
            // Convert QList<> from C++ memory to manually-managed C memory
            QDesignerDnDItemInterface** item_list_arr = static_cast<QDesignerDnDItemInterface**>(malloc(sizeof(QDesignerDnDItemInterface*) * (item_list_ret.size() + 1)));
            for (qsizetype i = 0; i < item_list_ret.size(); ++i) {
                item_list_arr[i] = item_list_ret[i];
            }
            libqt_list item_list_out;
            item_list_out.len = item_list_ret.size();
            item_list_out.data = static_cast<void*>(item_list_arr);
            libqt_list /* of QDesignerDnDItemInterface* */ cbval1 = item_list_out;

            qdesignerformwindowmanagerinterface_dragitems_callback(this, cbval1);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QPixmap createPreviewPixmap() const override {
        if (qdesignerformwindowmanagerinterface_createpreviewpixmap_callback != nullptr) {
            QPixmap* callback_ret = qdesignerformwindowmanagerinterface_createpreviewpixmap_callback();
            return *callback_ret;
        } else {
            return {};
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void addFormWindow(QDesignerFormWindowInterface* formWindow) override {
        if (qdesignerformwindowmanagerinterface_addformwindow_callback != nullptr) {
            QDesignerFormWindowInterface* cbval1 = formWindow;

            qdesignerformwindowmanagerinterface_addformwindow_callback(this, cbval1);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void removeFormWindow(QDesignerFormWindowInterface* formWindow) override {
        if (qdesignerformwindowmanagerinterface_removeformwindow_callback != nullptr) {
            QDesignerFormWindowInterface* cbval1 = formWindow;

            qdesignerformwindowmanagerinterface_removeformwindow_callback(this, cbval1);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void setActiveFormWindow(QDesignerFormWindowInterface* formWindow) override {
        if (qdesignerformwindowmanagerinterface_setactiveformwindow_callback != nullptr) {
            QDesignerFormWindowInterface* cbval1 = formWindow;

            qdesignerformwindowmanagerinterface_setactiveformwindow_callback(this, cbval1);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void showPreview() override {
        if (qdesignerformwindowmanagerinterface_showpreview_callback != nullptr) {
            qdesignerformwindowmanagerinterface_showpreview_callback();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void closeAllPreviews() override {
        if (qdesignerformwindowmanagerinterface_closeallpreviews_callback != nullptr) {
            qdesignerformwindowmanagerinterface_closeallpreviews_callback();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void showPluginDialog() override {
        if (qdesignerformwindowmanagerinterface_showplugindialog_callback != nullptr) {
            qdesignerformwindowmanagerinterface_showplugindialog_callback();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* event) override {
        if (qdesignerformwindowmanagerinterface_event_isbase) {
            qdesignerformwindowmanagerinterface_event_isbase = false;
            return QDesignerFormWindowManagerInterface::event(event);
        } else if (qdesignerformwindowmanagerinterface_event_callback != nullptr) {
            QEvent* cbval1 = event;

            bool callback_ret = qdesignerformwindowmanagerinterface_event_callback(this, cbval1);
            return callback_ret;
        } else {
            return QDesignerFormWindowManagerInterface::event(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* watched, QEvent* event) override {
        if (qdesignerformwindowmanagerinterface_eventfilter_isbase) {
            qdesignerformwindowmanagerinterface_eventfilter_isbase = false;
            return QDesignerFormWindowManagerInterface::eventFilter(watched, event);
        } else if (qdesignerformwindowmanagerinterface_eventfilter_callback != nullptr) {
            QObject* cbval1 = watched;
            QEvent* cbval2 = event;

            bool callback_ret = qdesignerformwindowmanagerinterface_eventfilter_callback(this, cbval1, cbval2);
            return callback_ret;
        } else {
            return QDesignerFormWindowManagerInterface::eventFilter(watched, event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (qdesignerformwindowmanagerinterface_timerevent_isbase) {
            qdesignerformwindowmanagerinterface_timerevent_isbase = false;
            QDesignerFormWindowManagerInterface::timerEvent(event);
        } else if (qdesignerformwindowmanagerinterface_timerevent_callback != nullptr) {
            QTimerEvent* cbval1 = event;

            qdesignerformwindowmanagerinterface_timerevent_callback(this, cbval1);
        } else {
            QDesignerFormWindowManagerInterface::timerEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (qdesignerformwindowmanagerinterface_childevent_isbase) {
            qdesignerformwindowmanagerinterface_childevent_isbase = false;
            QDesignerFormWindowManagerInterface::childEvent(event);
        } else if (qdesignerformwindowmanagerinterface_childevent_callback != nullptr) {
            QChildEvent* cbval1 = event;

            qdesignerformwindowmanagerinterface_childevent_callback(this, cbval1);
        } else {
            QDesignerFormWindowManagerInterface::childEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (qdesignerformwindowmanagerinterface_customevent_isbase) {
            qdesignerformwindowmanagerinterface_customevent_isbase = false;
            QDesignerFormWindowManagerInterface::customEvent(event);
        } else if (qdesignerformwindowmanagerinterface_customevent_callback != nullptr) {
            QEvent* cbval1 = event;

            qdesignerformwindowmanagerinterface_customevent_callback(this, cbval1);
        } else {
            QDesignerFormWindowManagerInterface::customEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (qdesignerformwindowmanagerinterface_connectnotify_isbase) {
            qdesignerformwindowmanagerinterface_connectnotify_isbase = false;
            QDesignerFormWindowManagerInterface::connectNotify(signal);
        } else if (qdesignerformwindowmanagerinterface_connectnotify_callback != nullptr) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            qdesignerformwindowmanagerinterface_connectnotify_callback(this, cbval1);
        } else {
            QDesignerFormWindowManagerInterface::connectNotify(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (qdesignerformwindowmanagerinterface_disconnectnotify_isbase) {
            qdesignerformwindowmanagerinterface_disconnectnotify_isbase = false;
            QDesignerFormWindowManagerInterface::disconnectNotify(signal);
        } else if (qdesignerformwindowmanagerinterface_disconnectnotify_callback != nullptr) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            qdesignerformwindowmanagerinterface_disconnectnotify_callback(this, cbval1);
        } else {
            QDesignerFormWindowManagerInterface::disconnectNotify(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    QObject* sender() const {
        if (qdesignerformwindowmanagerinterface_sender_isbase) {
            qdesignerformwindowmanagerinterface_sender_isbase = false;
            return QDesignerFormWindowManagerInterface::sender();
        } else if (qdesignerformwindowmanagerinterface_sender_callback != nullptr) {
            QObject* callback_ret = qdesignerformwindowmanagerinterface_sender_callback();
            return callback_ret;
        } else {
            return QDesignerFormWindowManagerInterface::sender();
        }
    }

    // Virtual method for C ABI access and custom callback
    int senderSignalIndex() const {
        if (qdesignerformwindowmanagerinterface_sendersignalindex_isbase) {
            qdesignerformwindowmanagerinterface_sendersignalindex_isbase = false;
            return QDesignerFormWindowManagerInterface::senderSignalIndex();
        } else if (qdesignerformwindowmanagerinterface_sendersignalindex_callback != nullptr) {
            int callback_ret = qdesignerformwindowmanagerinterface_sendersignalindex_callback();
            return static_cast<int>(callback_ret);
        } else {
            return QDesignerFormWindowManagerInterface::senderSignalIndex();
        }
    }

    // Virtual method for C ABI access and custom callback
    int receivers(const char* signal) const {
        if (qdesignerformwindowmanagerinterface_receivers_isbase) {
            qdesignerformwindowmanagerinterface_receivers_isbase = false;
            return QDesignerFormWindowManagerInterface::receivers(signal);
        } else if (qdesignerformwindowmanagerinterface_receivers_callback != nullptr) {
            const char* cbval1 = (const char*)signal;

            int callback_ret = qdesignerformwindowmanagerinterface_receivers_callback(this, cbval1);
            return static_cast<int>(callback_ret);
        } else {
            return QDesignerFormWindowManagerInterface::receivers(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    bool isSignalConnected(const QMetaMethod& signal) const {
        if (qdesignerformwindowmanagerinterface_issignalconnected_isbase) {
            qdesignerformwindowmanagerinterface_issignalconnected_isbase = false;
            return QDesignerFormWindowManagerInterface::isSignalConnected(signal);
        } else if (qdesignerformwindowmanagerinterface_issignalconnected_callback != nullptr) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            bool callback_ret = qdesignerformwindowmanagerinterface_issignalconnected_callback(this, cbval1);
            return callback_ret;
        } else {
            return QDesignerFormWindowManagerInterface::isSignalConnected(signal);
        }
    }

    // Friend functions
    friend void QDesignerFormWindowManagerInterface_TimerEvent(QDesignerFormWindowManagerInterface* self, QTimerEvent* event);
    friend void QDesignerFormWindowManagerInterface_QBaseTimerEvent(QDesignerFormWindowManagerInterface* self, QTimerEvent* event);
    friend void QDesignerFormWindowManagerInterface_ChildEvent(QDesignerFormWindowManagerInterface* self, QChildEvent* event);
    friend void QDesignerFormWindowManagerInterface_QBaseChildEvent(QDesignerFormWindowManagerInterface* self, QChildEvent* event);
    friend void QDesignerFormWindowManagerInterface_CustomEvent(QDesignerFormWindowManagerInterface* self, QEvent* event);
    friend void QDesignerFormWindowManagerInterface_QBaseCustomEvent(QDesignerFormWindowManagerInterface* self, QEvent* event);
    friend void QDesignerFormWindowManagerInterface_ConnectNotify(QDesignerFormWindowManagerInterface* self, const QMetaMethod* signal);
    friend void QDesignerFormWindowManagerInterface_QBaseConnectNotify(QDesignerFormWindowManagerInterface* self, const QMetaMethod* signal);
    friend void QDesignerFormWindowManagerInterface_DisconnectNotify(QDesignerFormWindowManagerInterface* self, const QMetaMethod* signal);
    friend void QDesignerFormWindowManagerInterface_QBaseDisconnectNotify(QDesignerFormWindowManagerInterface* self, const QMetaMethod* signal);
    friend QObject* QDesignerFormWindowManagerInterface_Sender(const QDesignerFormWindowManagerInterface* self);
    friend QObject* QDesignerFormWindowManagerInterface_QBaseSender(const QDesignerFormWindowManagerInterface* self);
    friend int QDesignerFormWindowManagerInterface_SenderSignalIndex(const QDesignerFormWindowManagerInterface* self);
    friend int QDesignerFormWindowManagerInterface_QBaseSenderSignalIndex(const QDesignerFormWindowManagerInterface* self);
    friend int QDesignerFormWindowManagerInterface_Receivers(const QDesignerFormWindowManagerInterface* self, const char* signal);
    friend int QDesignerFormWindowManagerInterface_QBaseReceivers(const QDesignerFormWindowManagerInterface* self, const char* signal);
    friend bool QDesignerFormWindowManagerInterface_IsSignalConnected(const QDesignerFormWindowManagerInterface* self, const QMetaMethod* signal);
    friend bool QDesignerFormWindowManagerInterface_QBaseIsSignalConnected(const QDesignerFormWindowManagerInterface* self, const QMetaMethod* signal);
};

#endif
