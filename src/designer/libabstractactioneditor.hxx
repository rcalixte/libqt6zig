#pragma once
#ifndef SRC_DESIGNERC_LIBVIRTUALABSTRACTACTIONEDITOR_H
#define SRC_DESIGNERC_LIBVIRTUALABSTRACTACTIONEDITOR_H

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

// This class is a subclass of QDesignerActionEditorInterface so that we can call protected methods
class VirtualQDesignerActionEditorInterface : public QDesignerActionEditorInterface {

  public:
    // Virtual class boolean flag
    bool isVirtualQDesignerActionEditorInterface = true;

    // Virtual class public types (including callbacks)
    using QDesignerActionEditorInterface_MetaObject_Callback = QMetaObject* (*)();
    using QDesignerActionEditorInterface_Metacast_Callback = void* (*)(QDesignerActionEditorInterface*, const char*);
    using QDesignerActionEditorInterface_Metacall_Callback = int (*)(QDesignerActionEditorInterface*, int, int, void**);
    using QDesignerActionEditorInterface_Core_Callback = QDesignerFormEditorInterface* (*)();
    using QDesignerActionEditorInterface_ManageAction_Callback = void (*)(QDesignerActionEditorInterface*, QAction*);
    using QDesignerActionEditorInterface_UnmanageAction_Callback = void (*)(QDesignerActionEditorInterface*, QAction*);
    using QDesignerActionEditorInterface_SetFormWindow_Callback = void (*)(QDesignerActionEditorInterface*, QDesignerFormWindowInterface*);
    using QDesignerActionEditorInterface_DevType_Callback = int (*)();
    using QDesignerActionEditorInterface_SetVisible_Callback = void (*)(QDesignerActionEditorInterface*, bool);
    using QDesignerActionEditorInterface_SizeHint_Callback = QSize* (*)();
    using QDesignerActionEditorInterface_MinimumSizeHint_Callback = QSize* (*)();
    using QDesignerActionEditorInterface_HeightForWidth_Callback = int (*)(const QDesignerActionEditorInterface*, int);
    using QDesignerActionEditorInterface_HasHeightForWidth_Callback = bool (*)();
    using QDesignerActionEditorInterface_PaintEngine_Callback = QPaintEngine* (*)();
    using QDesignerActionEditorInterface_Event_Callback = bool (*)(QDesignerActionEditorInterface*, QEvent*);
    using QDesignerActionEditorInterface_MousePressEvent_Callback = void (*)(QDesignerActionEditorInterface*, QMouseEvent*);
    using QDesignerActionEditorInterface_MouseReleaseEvent_Callback = void (*)(QDesignerActionEditorInterface*, QMouseEvent*);
    using QDesignerActionEditorInterface_MouseDoubleClickEvent_Callback = void (*)(QDesignerActionEditorInterface*, QMouseEvent*);
    using QDesignerActionEditorInterface_MouseMoveEvent_Callback = void (*)(QDesignerActionEditorInterface*, QMouseEvent*);
    using QDesignerActionEditorInterface_WheelEvent_Callback = void (*)(QDesignerActionEditorInterface*, QWheelEvent*);
    using QDesignerActionEditorInterface_KeyPressEvent_Callback = void (*)(QDesignerActionEditorInterface*, QKeyEvent*);
    using QDesignerActionEditorInterface_KeyReleaseEvent_Callback = void (*)(QDesignerActionEditorInterface*, QKeyEvent*);
    using QDesignerActionEditorInterface_FocusInEvent_Callback = void (*)(QDesignerActionEditorInterface*, QFocusEvent*);
    using QDesignerActionEditorInterface_FocusOutEvent_Callback = void (*)(QDesignerActionEditorInterface*, QFocusEvent*);
    using QDesignerActionEditorInterface_EnterEvent_Callback = void (*)(QDesignerActionEditorInterface*, QEnterEvent*);
    using QDesignerActionEditorInterface_LeaveEvent_Callback = void (*)(QDesignerActionEditorInterface*, QEvent*);
    using QDesignerActionEditorInterface_PaintEvent_Callback = void (*)(QDesignerActionEditorInterface*, QPaintEvent*);
    using QDesignerActionEditorInterface_MoveEvent_Callback = void (*)(QDesignerActionEditorInterface*, QMoveEvent*);
    using QDesignerActionEditorInterface_ResizeEvent_Callback = void (*)(QDesignerActionEditorInterface*, QResizeEvent*);
    using QDesignerActionEditorInterface_CloseEvent_Callback = void (*)(QDesignerActionEditorInterface*, QCloseEvent*);
    using QDesignerActionEditorInterface_ContextMenuEvent_Callback = void (*)(QDesignerActionEditorInterface*, QContextMenuEvent*);
    using QDesignerActionEditorInterface_TabletEvent_Callback = void (*)(QDesignerActionEditorInterface*, QTabletEvent*);
    using QDesignerActionEditorInterface_ActionEvent_Callback = void (*)(QDesignerActionEditorInterface*, QActionEvent*);
    using QDesignerActionEditorInterface_DragEnterEvent_Callback = void (*)(QDesignerActionEditorInterface*, QDragEnterEvent*);
    using QDesignerActionEditorInterface_DragMoveEvent_Callback = void (*)(QDesignerActionEditorInterface*, QDragMoveEvent*);
    using QDesignerActionEditorInterface_DragLeaveEvent_Callback = void (*)(QDesignerActionEditorInterface*, QDragLeaveEvent*);
    using QDesignerActionEditorInterface_DropEvent_Callback = void (*)(QDesignerActionEditorInterface*, QDropEvent*);
    using QDesignerActionEditorInterface_ShowEvent_Callback = void (*)(QDesignerActionEditorInterface*, QShowEvent*);
    using QDesignerActionEditorInterface_HideEvent_Callback = void (*)(QDesignerActionEditorInterface*, QHideEvent*);
    using QDesignerActionEditorInterface_NativeEvent_Callback = bool (*)(QDesignerActionEditorInterface*, libqt_string, void*, intptr_t*);
    using QDesignerActionEditorInterface_ChangeEvent_Callback = void (*)(QDesignerActionEditorInterface*, QEvent*);
    using QDesignerActionEditorInterface_Metric_Callback = int (*)(const QDesignerActionEditorInterface*, int);
    using QDesignerActionEditorInterface_InitPainter_Callback = void (*)(const QDesignerActionEditorInterface*, QPainter*);
    using QDesignerActionEditorInterface_Redirected_Callback = QPaintDevice* (*)(const QDesignerActionEditorInterface*, QPoint*);
    using QDesignerActionEditorInterface_SharedPainter_Callback = QPainter* (*)();
    using QDesignerActionEditorInterface_InputMethodEvent_Callback = void (*)(QDesignerActionEditorInterface*, QInputMethodEvent*);
    using QDesignerActionEditorInterface_InputMethodQuery_Callback = QVariant* (*)(const QDesignerActionEditorInterface*, int);
    using QDesignerActionEditorInterface_FocusNextPrevChild_Callback = bool (*)(QDesignerActionEditorInterface*, bool);
    using QDesignerActionEditorInterface_EventFilter_Callback = bool (*)(QDesignerActionEditorInterface*, QObject*, QEvent*);
    using QDesignerActionEditorInterface_TimerEvent_Callback = void (*)(QDesignerActionEditorInterface*, QTimerEvent*);
    using QDesignerActionEditorInterface_ChildEvent_Callback = void (*)(QDesignerActionEditorInterface*, QChildEvent*);
    using QDesignerActionEditorInterface_CustomEvent_Callback = void (*)(QDesignerActionEditorInterface*, QEvent*);
    using QDesignerActionEditorInterface_ConnectNotify_Callback = void (*)(QDesignerActionEditorInterface*, QMetaMethod*);
    using QDesignerActionEditorInterface_DisconnectNotify_Callback = void (*)(QDesignerActionEditorInterface*, QMetaMethod*);
    using QDesignerActionEditorInterface_UpdateMicroFocus_Callback = void (*)();
    using QDesignerActionEditorInterface_Create_Callback = void (*)();
    using QDesignerActionEditorInterface_Destroy_Callback = void (*)();
    using QDesignerActionEditorInterface_FocusNextChild_Callback = bool (*)();
    using QDesignerActionEditorInterface_FocusPreviousChild_Callback = bool (*)();
    using QDesignerActionEditorInterface_Sender_Callback = QObject* (*)();
    using QDesignerActionEditorInterface_SenderSignalIndex_Callback = int (*)();
    using QDesignerActionEditorInterface_Receivers_Callback = int (*)(const QDesignerActionEditorInterface*, const char*);
    using QDesignerActionEditorInterface_IsSignalConnected_Callback = bool (*)(const QDesignerActionEditorInterface*, QMetaMethod*);
    using QDesignerActionEditorInterface_GetDecodedMetricF_Callback = double (*)(const QDesignerActionEditorInterface*, int, int);

  protected:
    // Instance callback storage
    QDesignerActionEditorInterface_MetaObject_Callback qdesigneractioneditorinterface_metaobject_callback = nullptr;
    QDesignerActionEditorInterface_Metacast_Callback qdesigneractioneditorinterface_metacast_callback = nullptr;
    QDesignerActionEditorInterface_Metacall_Callback qdesigneractioneditorinterface_metacall_callback = nullptr;
    QDesignerActionEditorInterface_Core_Callback qdesigneractioneditorinterface_core_callback = nullptr;
    QDesignerActionEditorInterface_ManageAction_Callback qdesigneractioneditorinterface_manageaction_callback = nullptr;
    QDesignerActionEditorInterface_UnmanageAction_Callback qdesigneractioneditorinterface_unmanageaction_callback = nullptr;
    QDesignerActionEditorInterface_SetFormWindow_Callback qdesigneractioneditorinterface_setformwindow_callback = nullptr;
    QDesignerActionEditorInterface_DevType_Callback qdesigneractioneditorinterface_devtype_callback = nullptr;
    QDesignerActionEditorInterface_SetVisible_Callback qdesigneractioneditorinterface_setvisible_callback = nullptr;
    QDesignerActionEditorInterface_SizeHint_Callback qdesigneractioneditorinterface_sizehint_callback = nullptr;
    QDesignerActionEditorInterface_MinimumSizeHint_Callback qdesigneractioneditorinterface_minimumsizehint_callback = nullptr;
    QDesignerActionEditorInterface_HeightForWidth_Callback qdesigneractioneditorinterface_heightforwidth_callback = nullptr;
    QDesignerActionEditorInterface_HasHeightForWidth_Callback qdesigneractioneditorinterface_hasheightforwidth_callback = nullptr;
    QDesignerActionEditorInterface_PaintEngine_Callback qdesigneractioneditorinterface_paintengine_callback = nullptr;
    QDesignerActionEditorInterface_Event_Callback qdesigneractioneditorinterface_event_callback = nullptr;
    QDesignerActionEditorInterface_MousePressEvent_Callback qdesigneractioneditorinterface_mousepressevent_callback = nullptr;
    QDesignerActionEditorInterface_MouseReleaseEvent_Callback qdesigneractioneditorinterface_mousereleaseevent_callback = nullptr;
    QDesignerActionEditorInterface_MouseDoubleClickEvent_Callback qdesigneractioneditorinterface_mousedoubleclickevent_callback = nullptr;
    QDesignerActionEditorInterface_MouseMoveEvent_Callback qdesigneractioneditorinterface_mousemoveevent_callback = nullptr;
    QDesignerActionEditorInterface_WheelEvent_Callback qdesigneractioneditorinterface_wheelevent_callback = nullptr;
    QDesignerActionEditorInterface_KeyPressEvent_Callback qdesigneractioneditorinterface_keypressevent_callback = nullptr;
    QDesignerActionEditorInterface_KeyReleaseEvent_Callback qdesigneractioneditorinterface_keyreleaseevent_callback = nullptr;
    QDesignerActionEditorInterface_FocusInEvent_Callback qdesigneractioneditorinterface_focusinevent_callback = nullptr;
    QDesignerActionEditorInterface_FocusOutEvent_Callback qdesigneractioneditorinterface_focusoutevent_callback = nullptr;
    QDesignerActionEditorInterface_EnterEvent_Callback qdesigneractioneditorinterface_enterevent_callback = nullptr;
    QDesignerActionEditorInterface_LeaveEvent_Callback qdesigneractioneditorinterface_leaveevent_callback = nullptr;
    QDesignerActionEditorInterface_PaintEvent_Callback qdesigneractioneditorinterface_paintevent_callback = nullptr;
    QDesignerActionEditorInterface_MoveEvent_Callback qdesigneractioneditorinterface_moveevent_callback = nullptr;
    QDesignerActionEditorInterface_ResizeEvent_Callback qdesigneractioneditorinterface_resizeevent_callback = nullptr;
    QDesignerActionEditorInterface_CloseEvent_Callback qdesigneractioneditorinterface_closeevent_callback = nullptr;
    QDesignerActionEditorInterface_ContextMenuEvent_Callback qdesigneractioneditorinterface_contextmenuevent_callback = nullptr;
    QDesignerActionEditorInterface_TabletEvent_Callback qdesigneractioneditorinterface_tabletevent_callback = nullptr;
    QDesignerActionEditorInterface_ActionEvent_Callback qdesigneractioneditorinterface_actionevent_callback = nullptr;
    QDesignerActionEditorInterface_DragEnterEvent_Callback qdesigneractioneditorinterface_dragenterevent_callback = nullptr;
    QDesignerActionEditorInterface_DragMoveEvent_Callback qdesigneractioneditorinterface_dragmoveevent_callback = nullptr;
    QDesignerActionEditorInterface_DragLeaveEvent_Callback qdesigneractioneditorinterface_dragleaveevent_callback = nullptr;
    QDesignerActionEditorInterface_DropEvent_Callback qdesigneractioneditorinterface_dropevent_callback = nullptr;
    QDesignerActionEditorInterface_ShowEvent_Callback qdesigneractioneditorinterface_showevent_callback = nullptr;
    QDesignerActionEditorInterface_HideEvent_Callback qdesigneractioneditorinterface_hideevent_callback = nullptr;
    QDesignerActionEditorInterface_NativeEvent_Callback qdesigneractioneditorinterface_nativeevent_callback = nullptr;
    QDesignerActionEditorInterface_ChangeEvent_Callback qdesigneractioneditorinterface_changeevent_callback = nullptr;
    QDesignerActionEditorInterface_Metric_Callback qdesigneractioneditorinterface_metric_callback = nullptr;
    QDesignerActionEditorInterface_InitPainter_Callback qdesigneractioneditorinterface_initpainter_callback = nullptr;
    QDesignerActionEditorInterface_Redirected_Callback qdesigneractioneditorinterface_redirected_callback = nullptr;
    QDesignerActionEditorInterface_SharedPainter_Callback qdesigneractioneditorinterface_sharedpainter_callback = nullptr;
    QDesignerActionEditorInterface_InputMethodEvent_Callback qdesigneractioneditorinterface_inputmethodevent_callback = nullptr;
    QDesignerActionEditorInterface_InputMethodQuery_Callback qdesigneractioneditorinterface_inputmethodquery_callback = nullptr;
    QDesignerActionEditorInterface_FocusNextPrevChild_Callback qdesigneractioneditorinterface_focusnextprevchild_callback = nullptr;
    QDesignerActionEditorInterface_EventFilter_Callback qdesigneractioneditorinterface_eventfilter_callback = nullptr;
    QDesignerActionEditorInterface_TimerEvent_Callback qdesigneractioneditorinterface_timerevent_callback = nullptr;
    QDesignerActionEditorInterface_ChildEvent_Callback qdesigneractioneditorinterface_childevent_callback = nullptr;
    QDesignerActionEditorInterface_CustomEvent_Callback qdesigneractioneditorinterface_customevent_callback = nullptr;
    QDesignerActionEditorInterface_ConnectNotify_Callback qdesigneractioneditorinterface_connectnotify_callback = nullptr;
    QDesignerActionEditorInterface_DisconnectNotify_Callback qdesigneractioneditorinterface_disconnectnotify_callback = nullptr;
    QDesignerActionEditorInterface_UpdateMicroFocus_Callback qdesigneractioneditorinterface_updatemicrofocus_callback = nullptr;
    QDesignerActionEditorInterface_Create_Callback qdesigneractioneditorinterface_create_callback = nullptr;
    QDesignerActionEditorInterface_Destroy_Callback qdesigneractioneditorinterface_destroy_callback = nullptr;
    QDesignerActionEditorInterface_FocusNextChild_Callback qdesigneractioneditorinterface_focusnextchild_callback = nullptr;
    QDesignerActionEditorInterface_FocusPreviousChild_Callback qdesigneractioneditorinterface_focuspreviouschild_callback = nullptr;
    QDesignerActionEditorInterface_Sender_Callback qdesigneractioneditorinterface_sender_callback = nullptr;
    QDesignerActionEditorInterface_SenderSignalIndex_Callback qdesigneractioneditorinterface_sendersignalindex_callback = nullptr;
    QDesignerActionEditorInterface_Receivers_Callback qdesigneractioneditorinterface_receivers_callback = nullptr;
    QDesignerActionEditorInterface_IsSignalConnected_Callback qdesigneractioneditorinterface_issignalconnected_callback = nullptr;
    QDesignerActionEditorInterface_GetDecodedMetricF_Callback qdesigneractioneditorinterface_getdecodedmetricf_callback = nullptr;

    // Instance base flags
    mutable bool qdesigneractioneditorinterface_metaobject_isbase = false;
    mutable bool qdesigneractioneditorinterface_metacast_isbase = false;
    mutable bool qdesigneractioneditorinterface_metacall_isbase = false;
    mutable bool qdesigneractioneditorinterface_core_isbase = false;
    mutable bool qdesigneractioneditorinterface_manageaction_isbase = false;
    mutable bool qdesigneractioneditorinterface_unmanageaction_isbase = false;
    mutable bool qdesigneractioneditorinterface_setformwindow_isbase = false;
    mutable bool qdesigneractioneditorinterface_devtype_isbase = false;
    mutable bool qdesigneractioneditorinterface_setvisible_isbase = false;
    mutable bool qdesigneractioneditorinterface_sizehint_isbase = false;
    mutable bool qdesigneractioneditorinterface_minimumsizehint_isbase = false;
    mutable bool qdesigneractioneditorinterface_heightforwidth_isbase = false;
    mutable bool qdesigneractioneditorinterface_hasheightforwidth_isbase = false;
    mutable bool qdesigneractioneditorinterface_paintengine_isbase = false;
    mutable bool qdesigneractioneditorinterface_event_isbase = false;
    mutable bool qdesigneractioneditorinterface_mousepressevent_isbase = false;
    mutable bool qdesigneractioneditorinterface_mousereleaseevent_isbase = false;
    mutable bool qdesigneractioneditorinterface_mousedoubleclickevent_isbase = false;
    mutable bool qdesigneractioneditorinterface_mousemoveevent_isbase = false;
    mutable bool qdesigneractioneditorinterface_wheelevent_isbase = false;
    mutable bool qdesigneractioneditorinterface_keypressevent_isbase = false;
    mutable bool qdesigneractioneditorinterface_keyreleaseevent_isbase = false;
    mutable bool qdesigneractioneditorinterface_focusinevent_isbase = false;
    mutable bool qdesigneractioneditorinterface_focusoutevent_isbase = false;
    mutable bool qdesigneractioneditorinterface_enterevent_isbase = false;
    mutable bool qdesigneractioneditorinterface_leaveevent_isbase = false;
    mutable bool qdesigneractioneditorinterface_paintevent_isbase = false;
    mutable bool qdesigneractioneditorinterface_moveevent_isbase = false;
    mutable bool qdesigneractioneditorinterface_resizeevent_isbase = false;
    mutable bool qdesigneractioneditorinterface_closeevent_isbase = false;
    mutable bool qdesigneractioneditorinterface_contextmenuevent_isbase = false;
    mutable bool qdesigneractioneditorinterface_tabletevent_isbase = false;
    mutable bool qdesigneractioneditorinterface_actionevent_isbase = false;
    mutable bool qdesigneractioneditorinterface_dragenterevent_isbase = false;
    mutable bool qdesigneractioneditorinterface_dragmoveevent_isbase = false;
    mutable bool qdesigneractioneditorinterface_dragleaveevent_isbase = false;
    mutable bool qdesigneractioneditorinterface_dropevent_isbase = false;
    mutable bool qdesigneractioneditorinterface_showevent_isbase = false;
    mutable bool qdesigneractioneditorinterface_hideevent_isbase = false;
    mutable bool qdesigneractioneditorinterface_nativeevent_isbase = false;
    mutable bool qdesigneractioneditorinterface_changeevent_isbase = false;
    mutable bool qdesigneractioneditorinterface_metric_isbase = false;
    mutable bool qdesigneractioneditorinterface_initpainter_isbase = false;
    mutable bool qdesigneractioneditorinterface_redirected_isbase = false;
    mutable bool qdesigneractioneditorinterface_sharedpainter_isbase = false;
    mutable bool qdesigneractioneditorinterface_inputmethodevent_isbase = false;
    mutable bool qdesigneractioneditorinterface_inputmethodquery_isbase = false;
    mutable bool qdesigneractioneditorinterface_focusnextprevchild_isbase = false;
    mutable bool qdesigneractioneditorinterface_eventfilter_isbase = false;
    mutable bool qdesigneractioneditorinterface_timerevent_isbase = false;
    mutable bool qdesigneractioneditorinterface_childevent_isbase = false;
    mutable bool qdesigneractioneditorinterface_customevent_isbase = false;
    mutable bool qdesigneractioneditorinterface_connectnotify_isbase = false;
    mutable bool qdesigneractioneditorinterface_disconnectnotify_isbase = false;
    mutable bool qdesigneractioneditorinterface_updatemicrofocus_isbase = false;
    mutable bool qdesigneractioneditorinterface_create_isbase = false;
    mutable bool qdesigneractioneditorinterface_destroy_isbase = false;
    mutable bool qdesigneractioneditorinterface_focusnextchild_isbase = false;
    mutable bool qdesigneractioneditorinterface_focuspreviouschild_isbase = false;
    mutable bool qdesigneractioneditorinterface_sender_isbase = false;
    mutable bool qdesigneractioneditorinterface_sendersignalindex_isbase = false;
    mutable bool qdesigneractioneditorinterface_receivers_isbase = false;
    mutable bool qdesigneractioneditorinterface_issignalconnected_isbase = false;
    mutable bool qdesigneractioneditorinterface_getdecodedmetricf_isbase = false;

  public:
    VirtualQDesignerActionEditorInterface(QWidget* parent) : QDesignerActionEditorInterface(parent) {};
    VirtualQDesignerActionEditorInterface(QWidget* parent, Qt::WindowFlags flags) : QDesignerActionEditorInterface(parent, flags) {};

    ~VirtualQDesignerActionEditorInterface() {
        qdesigneractioneditorinterface_metaobject_callback = nullptr;
        qdesigneractioneditorinterface_metacast_callback = nullptr;
        qdesigneractioneditorinterface_metacall_callback = nullptr;
        qdesigneractioneditorinterface_core_callback = nullptr;
        qdesigneractioneditorinterface_manageaction_callback = nullptr;
        qdesigneractioneditorinterface_unmanageaction_callback = nullptr;
        qdesigneractioneditorinterface_setformwindow_callback = nullptr;
        qdesigneractioneditorinterface_devtype_callback = nullptr;
        qdesigneractioneditorinterface_setvisible_callback = nullptr;
        qdesigneractioneditorinterface_sizehint_callback = nullptr;
        qdesigneractioneditorinterface_minimumsizehint_callback = nullptr;
        qdesigneractioneditorinterface_heightforwidth_callback = nullptr;
        qdesigneractioneditorinterface_hasheightforwidth_callback = nullptr;
        qdesigneractioneditorinterface_paintengine_callback = nullptr;
        qdesigneractioneditorinterface_event_callback = nullptr;
        qdesigneractioneditorinterface_mousepressevent_callback = nullptr;
        qdesigneractioneditorinterface_mousereleaseevent_callback = nullptr;
        qdesigneractioneditorinterface_mousedoubleclickevent_callback = nullptr;
        qdesigneractioneditorinterface_mousemoveevent_callback = nullptr;
        qdesigneractioneditorinterface_wheelevent_callback = nullptr;
        qdesigneractioneditorinterface_keypressevent_callback = nullptr;
        qdesigneractioneditorinterface_keyreleaseevent_callback = nullptr;
        qdesigneractioneditorinterface_focusinevent_callback = nullptr;
        qdesigneractioneditorinterface_focusoutevent_callback = nullptr;
        qdesigneractioneditorinterface_enterevent_callback = nullptr;
        qdesigneractioneditorinterface_leaveevent_callback = nullptr;
        qdesigneractioneditorinterface_paintevent_callback = nullptr;
        qdesigneractioneditorinterface_moveevent_callback = nullptr;
        qdesigneractioneditorinterface_resizeevent_callback = nullptr;
        qdesigneractioneditorinterface_closeevent_callback = nullptr;
        qdesigneractioneditorinterface_contextmenuevent_callback = nullptr;
        qdesigneractioneditorinterface_tabletevent_callback = nullptr;
        qdesigneractioneditorinterface_actionevent_callback = nullptr;
        qdesigneractioneditorinterface_dragenterevent_callback = nullptr;
        qdesigneractioneditorinterface_dragmoveevent_callback = nullptr;
        qdesigneractioneditorinterface_dragleaveevent_callback = nullptr;
        qdesigneractioneditorinterface_dropevent_callback = nullptr;
        qdesigneractioneditorinterface_showevent_callback = nullptr;
        qdesigneractioneditorinterface_hideevent_callback = nullptr;
        qdesigneractioneditorinterface_nativeevent_callback = nullptr;
        qdesigneractioneditorinterface_changeevent_callback = nullptr;
        qdesigneractioneditorinterface_metric_callback = nullptr;
        qdesigneractioneditorinterface_initpainter_callback = nullptr;
        qdesigneractioneditorinterface_redirected_callback = nullptr;
        qdesigneractioneditorinterface_sharedpainter_callback = nullptr;
        qdesigneractioneditorinterface_inputmethodevent_callback = nullptr;
        qdesigneractioneditorinterface_inputmethodquery_callback = nullptr;
        qdesigneractioneditorinterface_focusnextprevchild_callback = nullptr;
        qdesigneractioneditorinterface_eventfilter_callback = nullptr;
        qdesigneractioneditorinterface_timerevent_callback = nullptr;
        qdesigneractioneditorinterface_childevent_callback = nullptr;
        qdesigneractioneditorinterface_customevent_callback = nullptr;
        qdesigneractioneditorinterface_connectnotify_callback = nullptr;
        qdesigneractioneditorinterface_disconnectnotify_callback = nullptr;
        qdesigneractioneditorinterface_updatemicrofocus_callback = nullptr;
        qdesigneractioneditorinterface_create_callback = nullptr;
        qdesigneractioneditorinterface_destroy_callback = nullptr;
        qdesigneractioneditorinterface_focusnextchild_callback = nullptr;
        qdesigneractioneditorinterface_focuspreviouschild_callback = nullptr;
        qdesigneractioneditorinterface_sender_callback = nullptr;
        qdesigneractioneditorinterface_sendersignalindex_callback = nullptr;
        qdesigneractioneditorinterface_receivers_callback = nullptr;
        qdesigneractioneditorinterface_issignalconnected_callback = nullptr;
        qdesigneractioneditorinterface_getdecodedmetricf_callback = nullptr;
    }

    // Callback setters
    inline void setQDesignerActionEditorInterface_MetaObject_Callback(QDesignerActionEditorInterface_MetaObject_Callback cb) { qdesigneractioneditorinterface_metaobject_callback = cb; }
    inline void setQDesignerActionEditorInterface_Metacast_Callback(QDesignerActionEditorInterface_Metacast_Callback cb) { qdesigneractioneditorinterface_metacast_callback = cb; }
    inline void setQDesignerActionEditorInterface_Metacall_Callback(QDesignerActionEditorInterface_Metacall_Callback cb) { qdesigneractioneditorinterface_metacall_callback = cb; }
    inline void setQDesignerActionEditorInterface_Core_Callback(QDesignerActionEditorInterface_Core_Callback cb) { qdesigneractioneditorinterface_core_callback = cb; }
    inline void setQDesignerActionEditorInterface_ManageAction_Callback(QDesignerActionEditorInterface_ManageAction_Callback cb) { qdesigneractioneditorinterface_manageaction_callback = cb; }
    inline void setQDesignerActionEditorInterface_UnmanageAction_Callback(QDesignerActionEditorInterface_UnmanageAction_Callback cb) { qdesigneractioneditorinterface_unmanageaction_callback = cb; }
    inline void setQDesignerActionEditorInterface_SetFormWindow_Callback(QDesignerActionEditorInterface_SetFormWindow_Callback cb) { qdesigneractioneditorinterface_setformwindow_callback = cb; }
    inline void setQDesignerActionEditorInterface_DevType_Callback(QDesignerActionEditorInterface_DevType_Callback cb) { qdesigneractioneditorinterface_devtype_callback = cb; }
    inline void setQDesignerActionEditorInterface_SetVisible_Callback(QDesignerActionEditorInterface_SetVisible_Callback cb) { qdesigneractioneditorinterface_setvisible_callback = cb; }
    inline void setQDesignerActionEditorInterface_SizeHint_Callback(QDesignerActionEditorInterface_SizeHint_Callback cb) { qdesigneractioneditorinterface_sizehint_callback = cb; }
    inline void setQDesignerActionEditorInterface_MinimumSizeHint_Callback(QDesignerActionEditorInterface_MinimumSizeHint_Callback cb) { qdesigneractioneditorinterface_minimumsizehint_callback = cb; }
    inline void setQDesignerActionEditorInterface_HeightForWidth_Callback(QDesignerActionEditorInterface_HeightForWidth_Callback cb) { qdesigneractioneditorinterface_heightforwidth_callback = cb; }
    inline void setQDesignerActionEditorInterface_HasHeightForWidth_Callback(QDesignerActionEditorInterface_HasHeightForWidth_Callback cb) { qdesigneractioneditorinterface_hasheightforwidth_callback = cb; }
    inline void setQDesignerActionEditorInterface_PaintEngine_Callback(QDesignerActionEditorInterface_PaintEngine_Callback cb) { qdesigneractioneditorinterface_paintengine_callback = cb; }
    inline void setQDesignerActionEditorInterface_Event_Callback(QDesignerActionEditorInterface_Event_Callback cb) { qdesigneractioneditorinterface_event_callback = cb; }
    inline void setQDesignerActionEditorInterface_MousePressEvent_Callback(QDesignerActionEditorInterface_MousePressEvent_Callback cb) { qdesigneractioneditorinterface_mousepressevent_callback = cb; }
    inline void setQDesignerActionEditorInterface_MouseReleaseEvent_Callback(QDesignerActionEditorInterface_MouseReleaseEvent_Callback cb) { qdesigneractioneditorinterface_mousereleaseevent_callback = cb; }
    inline void setQDesignerActionEditorInterface_MouseDoubleClickEvent_Callback(QDesignerActionEditorInterface_MouseDoubleClickEvent_Callback cb) { qdesigneractioneditorinterface_mousedoubleclickevent_callback = cb; }
    inline void setQDesignerActionEditorInterface_MouseMoveEvent_Callback(QDesignerActionEditorInterface_MouseMoveEvent_Callback cb) { qdesigneractioneditorinterface_mousemoveevent_callback = cb; }
    inline void setQDesignerActionEditorInterface_WheelEvent_Callback(QDesignerActionEditorInterface_WheelEvent_Callback cb) { qdesigneractioneditorinterface_wheelevent_callback = cb; }
    inline void setQDesignerActionEditorInterface_KeyPressEvent_Callback(QDesignerActionEditorInterface_KeyPressEvent_Callback cb) { qdesigneractioneditorinterface_keypressevent_callback = cb; }
    inline void setQDesignerActionEditorInterface_KeyReleaseEvent_Callback(QDesignerActionEditorInterface_KeyReleaseEvent_Callback cb) { qdesigneractioneditorinterface_keyreleaseevent_callback = cb; }
    inline void setQDesignerActionEditorInterface_FocusInEvent_Callback(QDesignerActionEditorInterface_FocusInEvent_Callback cb) { qdesigneractioneditorinterface_focusinevent_callback = cb; }
    inline void setQDesignerActionEditorInterface_FocusOutEvent_Callback(QDesignerActionEditorInterface_FocusOutEvent_Callback cb) { qdesigneractioneditorinterface_focusoutevent_callback = cb; }
    inline void setQDesignerActionEditorInterface_EnterEvent_Callback(QDesignerActionEditorInterface_EnterEvent_Callback cb) { qdesigneractioneditorinterface_enterevent_callback = cb; }
    inline void setQDesignerActionEditorInterface_LeaveEvent_Callback(QDesignerActionEditorInterface_LeaveEvent_Callback cb) { qdesigneractioneditorinterface_leaveevent_callback = cb; }
    inline void setQDesignerActionEditorInterface_PaintEvent_Callback(QDesignerActionEditorInterface_PaintEvent_Callback cb) { qdesigneractioneditorinterface_paintevent_callback = cb; }
    inline void setQDesignerActionEditorInterface_MoveEvent_Callback(QDesignerActionEditorInterface_MoveEvent_Callback cb) { qdesigneractioneditorinterface_moveevent_callback = cb; }
    inline void setQDesignerActionEditorInterface_ResizeEvent_Callback(QDesignerActionEditorInterface_ResizeEvent_Callback cb) { qdesigneractioneditorinterface_resizeevent_callback = cb; }
    inline void setQDesignerActionEditorInterface_CloseEvent_Callback(QDesignerActionEditorInterface_CloseEvent_Callback cb) { qdesigneractioneditorinterface_closeevent_callback = cb; }
    inline void setQDesignerActionEditorInterface_ContextMenuEvent_Callback(QDesignerActionEditorInterface_ContextMenuEvent_Callback cb) { qdesigneractioneditorinterface_contextmenuevent_callback = cb; }
    inline void setQDesignerActionEditorInterface_TabletEvent_Callback(QDesignerActionEditorInterface_TabletEvent_Callback cb) { qdesigneractioneditorinterface_tabletevent_callback = cb; }
    inline void setQDesignerActionEditorInterface_ActionEvent_Callback(QDesignerActionEditorInterface_ActionEvent_Callback cb) { qdesigneractioneditorinterface_actionevent_callback = cb; }
    inline void setQDesignerActionEditorInterface_DragEnterEvent_Callback(QDesignerActionEditorInterface_DragEnterEvent_Callback cb) { qdesigneractioneditorinterface_dragenterevent_callback = cb; }
    inline void setQDesignerActionEditorInterface_DragMoveEvent_Callback(QDesignerActionEditorInterface_DragMoveEvent_Callback cb) { qdesigneractioneditorinterface_dragmoveevent_callback = cb; }
    inline void setQDesignerActionEditorInterface_DragLeaveEvent_Callback(QDesignerActionEditorInterface_DragLeaveEvent_Callback cb) { qdesigneractioneditorinterface_dragleaveevent_callback = cb; }
    inline void setQDesignerActionEditorInterface_DropEvent_Callback(QDesignerActionEditorInterface_DropEvent_Callback cb) { qdesigneractioneditorinterface_dropevent_callback = cb; }
    inline void setQDesignerActionEditorInterface_ShowEvent_Callback(QDesignerActionEditorInterface_ShowEvent_Callback cb) { qdesigneractioneditorinterface_showevent_callback = cb; }
    inline void setQDesignerActionEditorInterface_HideEvent_Callback(QDesignerActionEditorInterface_HideEvent_Callback cb) { qdesigneractioneditorinterface_hideevent_callback = cb; }
    inline void setQDesignerActionEditorInterface_NativeEvent_Callback(QDesignerActionEditorInterface_NativeEvent_Callback cb) { qdesigneractioneditorinterface_nativeevent_callback = cb; }
    inline void setQDesignerActionEditorInterface_ChangeEvent_Callback(QDesignerActionEditorInterface_ChangeEvent_Callback cb) { qdesigneractioneditorinterface_changeevent_callback = cb; }
    inline void setQDesignerActionEditorInterface_Metric_Callback(QDesignerActionEditorInterface_Metric_Callback cb) { qdesigneractioneditorinterface_metric_callback = cb; }
    inline void setQDesignerActionEditorInterface_InitPainter_Callback(QDesignerActionEditorInterface_InitPainter_Callback cb) { qdesigneractioneditorinterface_initpainter_callback = cb; }
    inline void setQDesignerActionEditorInterface_Redirected_Callback(QDesignerActionEditorInterface_Redirected_Callback cb) { qdesigneractioneditorinterface_redirected_callback = cb; }
    inline void setQDesignerActionEditorInterface_SharedPainter_Callback(QDesignerActionEditorInterface_SharedPainter_Callback cb) { qdesigneractioneditorinterface_sharedpainter_callback = cb; }
    inline void setQDesignerActionEditorInterface_InputMethodEvent_Callback(QDesignerActionEditorInterface_InputMethodEvent_Callback cb) { qdesigneractioneditorinterface_inputmethodevent_callback = cb; }
    inline void setQDesignerActionEditorInterface_InputMethodQuery_Callback(QDesignerActionEditorInterface_InputMethodQuery_Callback cb) { qdesigneractioneditorinterface_inputmethodquery_callback = cb; }
    inline void setQDesignerActionEditorInterface_FocusNextPrevChild_Callback(QDesignerActionEditorInterface_FocusNextPrevChild_Callback cb) { qdesigneractioneditorinterface_focusnextprevchild_callback = cb; }
    inline void setQDesignerActionEditorInterface_EventFilter_Callback(QDesignerActionEditorInterface_EventFilter_Callback cb) { qdesigneractioneditorinterface_eventfilter_callback = cb; }
    inline void setQDesignerActionEditorInterface_TimerEvent_Callback(QDesignerActionEditorInterface_TimerEvent_Callback cb) { qdesigneractioneditorinterface_timerevent_callback = cb; }
    inline void setQDesignerActionEditorInterface_ChildEvent_Callback(QDesignerActionEditorInterface_ChildEvent_Callback cb) { qdesigneractioneditorinterface_childevent_callback = cb; }
    inline void setQDesignerActionEditorInterface_CustomEvent_Callback(QDesignerActionEditorInterface_CustomEvent_Callback cb) { qdesigneractioneditorinterface_customevent_callback = cb; }
    inline void setQDesignerActionEditorInterface_ConnectNotify_Callback(QDesignerActionEditorInterface_ConnectNotify_Callback cb) { qdesigneractioneditorinterface_connectnotify_callback = cb; }
    inline void setQDesignerActionEditorInterface_DisconnectNotify_Callback(QDesignerActionEditorInterface_DisconnectNotify_Callback cb) { qdesigneractioneditorinterface_disconnectnotify_callback = cb; }
    inline void setQDesignerActionEditorInterface_UpdateMicroFocus_Callback(QDesignerActionEditorInterface_UpdateMicroFocus_Callback cb) { qdesigneractioneditorinterface_updatemicrofocus_callback = cb; }
    inline void setQDesignerActionEditorInterface_Create_Callback(QDesignerActionEditorInterface_Create_Callback cb) { qdesigneractioneditorinterface_create_callback = cb; }
    inline void setQDesignerActionEditorInterface_Destroy_Callback(QDesignerActionEditorInterface_Destroy_Callback cb) { qdesigneractioneditorinterface_destroy_callback = cb; }
    inline void setQDesignerActionEditorInterface_FocusNextChild_Callback(QDesignerActionEditorInterface_FocusNextChild_Callback cb) { qdesigneractioneditorinterface_focusnextchild_callback = cb; }
    inline void setQDesignerActionEditorInterface_FocusPreviousChild_Callback(QDesignerActionEditorInterface_FocusPreviousChild_Callback cb) { qdesigneractioneditorinterface_focuspreviouschild_callback = cb; }
    inline void setQDesignerActionEditorInterface_Sender_Callback(QDesignerActionEditorInterface_Sender_Callback cb) { qdesigneractioneditorinterface_sender_callback = cb; }
    inline void setQDesignerActionEditorInterface_SenderSignalIndex_Callback(QDesignerActionEditorInterface_SenderSignalIndex_Callback cb) { qdesigneractioneditorinterface_sendersignalindex_callback = cb; }
    inline void setQDesignerActionEditorInterface_Receivers_Callback(QDesignerActionEditorInterface_Receivers_Callback cb) { qdesigneractioneditorinterface_receivers_callback = cb; }
    inline void setQDesignerActionEditorInterface_IsSignalConnected_Callback(QDesignerActionEditorInterface_IsSignalConnected_Callback cb) { qdesigneractioneditorinterface_issignalconnected_callback = cb; }
    inline void setQDesignerActionEditorInterface_GetDecodedMetricF_Callback(QDesignerActionEditorInterface_GetDecodedMetricF_Callback cb) { qdesigneractioneditorinterface_getdecodedmetricf_callback = cb; }

    // Base flag setters
    inline void setQDesignerActionEditorInterface_MetaObject_IsBase(bool value) const { qdesigneractioneditorinterface_metaobject_isbase = value; }
    inline void setQDesignerActionEditorInterface_Metacast_IsBase(bool value) const { qdesigneractioneditorinterface_metacast_isbase = value; }
    inline void setQDesignerActionEditorInterface_Metacall_IsBase(bool value) const { qdesigneractioneditorinterface_metacall_isbase = value; }
    inline void setQDesignerActionEditorInterface_Core_IsBase(bool value) const { qdesigneractioneditorinterface_core_isbase = value; }
    inline void setQDesignerActionEditorInterface_ManageAction_IsBase(bool value) const { qdesigneractioneditorinterface_manageaction_isbase = value; }
    inline void setQDesignerActionEditorInterface_UnmanageAction_IsBase(bool value) const { qdesigneractioneditorinterface_unmanageaction_isbase = value; }
    inline void setQDesignerActionEditorInterface_SetFormWindow_IsBase(bool value) const { qdesigneractioneditorinterface_setformwindow_isbase = value; }
    inline void setQDesignerActionEditorInterface_DevType_IsBase(bool value) const { qdesigneractioneditorinterface_devtype_isbase = value; }
    inline void setQDesignerActionEditorInterface_SetVisible_IsBase(bool value) const { qdesigneractioneditorinterface_setvisible_isbase = value; }
    inline void setQDesignerActionEditorInterface_SizeHint_IsBase(bool value) const { qdesigneractioneditorinterface_sizehint_isbase = value; }
    inline void setQDesignerActionEditorInterface_MinimumSizeHint_IsBase(bool value) const { qdesigneractioneditorinterface_minimumsizehint_isbase = value; }
    inline void setQDesignerActionEditorInterface_HeightForWidth_IsBase(bool value) const { qdesigneractioneditorinterface_heightforwidth_isbase = value; }
    inline void setQDesignerActionEditorInterface_HasHeightForWidth_IsBase(bool value) const { qdesigneractioneditorinterface_hasheightforwidth_isbase = value; }
    inline void setQDesignerActionEditorInterface_PaintEngine_IsBase(bool value) const { qdesigneractioneditorinterface_paintengine_isbase = value; }
    inline void setQDesignerActionEditorInterface_Event_IsBase(bool value) const { qdesigneractioneditorinterface_event_isbase = value; }
    inline void setQDesignerActionEditorInterface_MousePressEvent_IsBase(bool value) const { qdesigneractioneditorinterface_mousepressevent_isbase = value; }
    inline void setQDesignerActionEditorInterface_MouseReleaseEvent_IsBase(bool value) const { qdesigneractioneditorinterface_mousereleaseevent_isbase = value; }
    inline void setQDesignerActionEditorInterface_MouseDoubleClickEvent_IsBase(bool value) const { qdesigneractioneditorinterface_mousedoubleclickevent_isbase = value; }
    inline void setQDesignerActionEditorInterface_MouseMoveEvent_IsBase(bool value) const { qdesigneractioneditorinterface_mousemoveevent_isbase = value; }
    inline void setQDesignerActionEditorInterface_WheelEvent_IsBase(bool value) const { qdesigneractioneditorinterface_wheelevent_isbase = value; }
    inline void setQDesignerActionEditorInterface_KeyPressEvent_IsBase(bool value) const { qdesigneractioneditorinterface_keypressevent_isbase = value; }
    inline void setQDesignerActionEditorInterface_KeyReleaseEvent_IsBase(bool value) const { qdesigneractioneditorinterface_keyreleaseevent_isbase = value; }
    inline void setQDesignerActionEditorInterface_FocusInEvent_IsBase(bool value) const { qdesigneractioneditorinterface_focusinevent_isbase = value; }
    inline void setQDesignerActionEditorInterface_FocusOutEvent_IsBase(bool value) const { qdesigneractioneditorinterface_focusoutevent_isbase = value; }
    inline void setQDesignerActionEditorInterface_EnterEvent_IsBase(bool value) const { qdesigneractioneditorinterface_enterevent_isbase = value; }
    inline void setQDesignerActionEditorInterface_LeaveEvent_IsBase(bool value) const { qdesigneractioneditorinterface_leaveevent_isbase = value; }
    inline void setQDesignerActionEditorInterface_PaintEvent_IsBase(bool value) const { qdesigneractioneditorinterface_paintevent_isbase = value; }
    inline void setQDesignerActionEditorInterface_MoveEvent_IsBase(bool value) const { qdesigneractioneditorinterface_moveevent_isbase = value; }
    inline void setQDesignerActionEditorInterface_ResizeEvent_IsBase(bool value) const { qdesigneractioneditorinterface_resizeevent_isbase = value; }
    inline void setQDesignerActionEditorInterface_CloseEvent_IsBase(bool value) const { qdesigneractioneditorinterface_closeevent_isbase = value; }
    inline void setQDesignerActionEditorInterface_ContextMenuEvent_IsBase(bool value) const { qdesigneractioneditorinterface_contextmenuevent_isbase = value; }
    inline void setQDesignerActionEditorInterface_TabletEvent_IsBase(bool value) const { qdesigneractioneditorinterface_tabletevent_isbase = value; }
    inline void setQDesignerActionEditorInterface_ActionEvent_IsBase(bool value) const { qdesigneractioneditorinterface_actionevent_isbase = value; }
    inline void setQDesignerActionEditorInterface_DragEnterEvent_IsBase(bool value) const { qdesigneractioneditorinterface_dragenterevent_isbase = value; }
    inline void setQDesignerActionEditorInterface_DragMoveEvent_IsBase(bool value) const { qdesigneractioneditorinterface_dragmoveevent_isbase = value; }
    inline void setQDesignerActionEditorInterface_DragLeaveEvent_IsBase(bool value) const { qdesigneractioneditorinterface_dragleaveevent_isbase = value; }
    inline void setQDesignerActionEditorInterface_DropEvent_IsBase(bool value) const { qdesigneractioneditorinterface_dropevent_isbase = value; }
    inline void setQDesignerActionEditorInterface_ShowEvent_IsBase(bool value) const { qdesigneractioneditorinterface_showevent_isbase = value; }
    inline void setQDesignerActionEditorInterface_HideEvent_IsBase(bool value) const { qdesigneractioneditorinterface_hideevent_isbase = value; }
    inline void setQDesignerActionEditorInterface_NativeEvent_IsBase(bool value) const { qdesigneractioneditorinterface_nativeevent_isbase = value; }
    inline void setQDesignerActionEditorInterface_ChangeEvent_IsBase(bool value) const { qdesigneractioneditorinterface_changeevent_isbase = value; }
    inline void setQDesignerActionEditorInterface_Metric_IsBase(bool value) const { qdesigneractioneditorinterface_metric_isbase = value; }
    inline void setQDesignerActionEditorInterface_InitPainter_IsBase(bool value) const { qdesigneractioneditorinterface_initpainter_isbase = value; }
    inline void setQDesignerActionEditorInterface_Redirected_IsBase(bool value) const { qdesigneractioneditorinterface_redirected_isbase = value; }
    inline void setQDesignerActionEditorInterface_SharedPainter_IsBase(bool value) const { qdesigneractioneditorinterface_sharedpainter_isbase = value; }
    inline void setQDesignerActionEditorInterface_InputMethodEvent_IsBase(bool value) const { qdesigneractioneditorinterface_inputmethodevent_isbase = value; }
    inline void setQDesignerActionEditorInterface_InputMethodQuery_IsBase(bool value) const { qdesigneractioneditorinterface_inputmethodquery_isbase = value; }
    inline void setQDesignerActionEditorInterface_FocusNextPrevChild_IsBase(bool value) const { qdesigneractioneditorinterface_focusnextprevchild_isbase = value; }
    inline void setQDesignerActionEditorInterface_EventFilter_IsBase(bool value) const { qdesigneractioneditorinterface_eventfilter_isbase = value; }
    inline void setQDesignerActionEditorInterface_TimerEvent_IsBase(bool value) const { qdesigneractioneditorinterface_timerevent_isbase = value; }
    inline void setQDesignerActionEditorInterface_ChildEvent_IsBase(bool value) const { qdesigneractioneditorinterface_childevent_isbase = value; }
    inline void setQDesignerActionEditorInterface_CustomEvent_IsBase(bool value) const { qdesigneractioneditorinterface_customevent_isbase = value; }
    inline void setQDesignerActionEditorInterface_ConnectNotify_IsBase(bool value) const { qdesigneractioneditorinterface_connectnotify_isbase = value; }
    inline void setQDesignerActionEditorInterface_DisconnectNotify_IsBase(bool value) const { qdesigneractioneditorinterface_disconnectnotify_isbase = value; }
    inline void setQDesignerActionEditorInterface_UpdateMicroFocus_IsBase(bool value) const { qdesigneractioneditorinterface_updatemicrofocus_isbase = value; }
    inline void setQDesignerActionEditorInterface_Create_IsBase(bool value) const { qdesigneractioneditorinterface_create_isbase = value; }
    inline void setQDesignerActionEditorInterface_Destroy_IsBase(bool value) const { qdesigneractioneditorinterface_destroy_isbase = value; }
    inline void setQDesignerActionEditorInterface_FocusNextChild_IsBase(bool value) const { qdesigneractioneditorinterface_focusnextchild_isbase = value; }
    inline void setQDesignerActionEditorInterface_FocusPreviousChild_IsBase(bool value) const { qdesigneractioneditorinterface_focuspreviouschild_isbase = value; }
    inline void setQDesignerActionEditorInterface_Sender_IsBase(bool value) const { qdesigneractioneditorinterface_sender_isbase = value; }
    inline void setQDesignerActionEditorInterface_SenderSignalIndex_IsBase(bool value) const { qdesigneractioneditorinterface_sendersignalindex_isbase = value; }
    inline void setQDesignerActionEditorInterface_Receivers_IsBase(bool value) const { qdesigneractioneditorinterface_receivers_isbase = value; }
    inline void setQDesignerActionEditorInterface_IsSignalConnected_IsBase(bool value) const { qdesigneractioneditorinterface_issignalconnected_isbase = value; }
    inline void setQDesignerActionEditorInterface_GetDecodedMetricF_IsBase(bool value) const { qdesigneractioneditorinterface_getdecodedmetricf_isbase = value; }

    // Virtual method for C ABI access and custom callback
    virtual const QMetaObject* metaObject() const override {
        if (qdesigneractioneditorinterface_metaobject_isbase) {
            qdesigneractioneditorinterface_metaobject_isbase = false;
            return QDesignerActionEditorInterface::metaObject();
        } else if (qdesigneractioneditorinterface_metaobject_callback != nullptr) {
            QMetaObject* callback_ret = qdesigneractioneditorinterface_metaobject_callback();
            return callback_ret;
        } else {
            return QDesignerActionEditorInterface::metaObject();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void* qt_metacast(const char* param1) override {
        if (qdesigneractioneditorinterface_metacast_isbase) {
            qdesigneractioneditorinterface_metacast_isbase = false;
            return QDesignerActionEditorInterface::qt_metacast(param1);
        } else if (qdesigneractioneditorinterface_metacast_callback != nullptr) {
            const char* cbval1 = (const char*)param1;

            void* callback_ret = qdesigneractioneditorinterface_metacast_callback(this, cbval1);
            return callback_ret;
        } else {
            return QDesignerActionEditorInterface::qt_metacast(param1);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (qdesigneractioneditorinterface_metacall_isbase) {
            qdesigneractioneditorinterface_metacall_isbase = false;
            return QDesignerActionEditorInterface::qt_metacall(param1, param2, param3);
        } else if (qdesigneractioneditorinterface_metacall_callback != nullptr) {
            int cbval1 = static_cast<int>(param1);
            int cbval2 = param2;
            void** cbval3 = param3;

            int callback_ret = qdesigneractioneditorinterface_metacall_callback(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        } else {
            return QDesignerActionEditorInterface::qt_metacall(param1, param2, param3);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QDesignerFormEditorInterface* core() const override {
        if (qdesigneractioneditorinterface_core_isbase) {
            qdesigneractioneditorinterface_core_isbase = false;
            return QDesignerActionEditorInterface::core();
        } else if (qdesigneractioneditorinterface_core_callback != nullptr) {
            QDesignerFormEditorInterface* callback_ret = qdesigneractioneditorinterface_core_callback();
            return callback_ret;
        } else {
            return QDesignerActionEditorInterface::core();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void manageAction(QAction* action) override {
        if (qdesigneractioneditorinterface_manageaction_callback != nullptr) {
            QAction* cbval1 = action;

            qdesigneractioneditorinterface_manageaction_callback(this, cbval1);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void unmanageAction(QAction* action) override {
        if (qdesigneractioneditorinterface_unmanageaction_callback != nullptr) {
            QAction* cbval1 = action;

            qdesigneractioneditorinterface_unmanageaction_callback(this, cbval1);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void setFormWindow(QDesignerFormWindowInterface* formWindow) override {
        if (qdesigneractioneditorinterface_setformwindow_callback != nullptr) {
            QDesignerFormWindowInterface* cbval1 = formWindow;

            qdesigneractioneditorinterface_setformwindow_callback(this, cbval1);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual int devType() const override {
        if (qdesigneractioneditorinterface_devtype_isbase) {
            qdesigneractioneditorinterface_devtype_isbase = false;
            return QDesignerActionEditorInterface::devType();
        } else if (qdesigneractioneditorinterface_devtype_callback != nullptr) {
            int callback_ret = qdesigneractioneditorinterface_devtype_callback();
            return static_cast<int>(callback_ret);
        } else {
            return QDesignerActionEditorInterface::devType();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void setVisible(bool visible) override {
        if (qdesigneractioneditorinterface_setvisible_isbase) {
            qdesigneractioneditorinterface_setvisible_isbase = false;
            QDesignerActionEditorInterface::setVisible(visible);
        } else if (qdesigneractioneditorinterface_setvisible_callback != nullptr) {
            bool cbval1 = visible;

            qdesigneractioneditorinterface_setvisible_callback(this, cbval1);
        } else {
            QDesignerActionEditorInterface::setVisible(visible);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QSize sizeHint() const override {
        if (qdesigneractioneditorinterface_sizehint_isbase) {
            qdesigneractioneditorinterface_sizehint_isbase = false;
            return QDesignerActionEditorInterface::sizeHint();
        } else if (qdesigneractioneditorinterface_sizehint_callback != nullptr) {
            QSize* callback_ret = qdesigneractioneditorinterface_sizehint_callback();
            return *callback_ret;
        } else {
            return QDesignerActionEditorInterface::sizeHint();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QSize minimumSizeHint() const override {
        if (qdesigneractioneditorinterface_minimumsizehint_isbase) {
            qdesigneractioneditorinterface_minimumsizehint_isbase = false;
            return QDesignerActionEditorInterface::minimumSizeHint();
        } else if (qdesigneractioneditorinterface_minimumsizehint_callback != nullptr) {
            QSize* callback_ret = qdesigneractioneditorinterface_minimumsizehint_callback();
            return *callback_ret;
        } else {
            return QDesignerActionEditorInterface::minimumSizeHint();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual int heightForWidth(int param1) const override {
        if (qdesigneractioneditorinterface_heightforwidth_isbase) {
            qdesigneractioneditorinterface_heightforwidth_isbase = false;
            return QDesignerActionEditorInterface::heightForWidth(param1);
        } else if (qdesigneractioneditorinterface_heightforwidth_callback != nullptr) {
            int cbval1 = param1;

            int callback_ret = qdesigneractioneditorinterface_heightforwidth_callback(this, cbval1);
            return static_cast<int>(callback_ret);
        } else {
            return QDesignerActionEditorInterface::heightForWidth(param1);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool hasHeightForWidth() const override {
        if (qdesigneractioneditorinterface_hasheightforwidth_isbase) {
            qdesigneractioneditorinterface_hasheightforwidth_isbase = false;
            return QDesignerActionEditorInterface::hasHeightForWidth();
        } else if (qdesigneractioneditorinterface_hasheightforwidth_callback != nullptr) {
            bool callback_ret = qdesigneractioneditorinterface_hasheightforwidth_callback();
            return callback_ret;
        } else {
            return QDesignerActionEditorInterface::hasHeightForWidth();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QPaintEngine* paintEngine() const override {
        if (qdesigneractioneditorinterface_paintengine_isbase) {
            qdesigneractioneditorinterface_paintengine_isbase = false;
            return QDesignerActionEditorInterface::paintEngine();
        } else if (qdesigneractioneditorinterface_paintengine_callback != nullptr) {
            QPaintEngine* callback_ret = qdesigneractioneditorinterface_paintengine_callback();
            return callback_ret;
        } else {
            return QDesignerActionEditorInterface::paintEngine();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* event) override {
        if (qdesigneractioneditorinterface_event_isbase) {
            qdesigneractioneditorinterface_event_isbase = false;
            return QDesignerActionEditorInterface::event(event);
        } else if (qdesigneractioneditorinterface_event_callback != nullptr) {
            QEvent* cbval1 = event;

            bool callback_ret = qdesigneractioneditorinterface_event_callback(this, cbval1);
            return callback_ret;
        } else {
            return QDesignerActionEditorInterface::event(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void mousePressEvent(QMouseEvent* event) override {
        if (qdesigneractioneditorinterface_mousepressevent_isbase) {
            qdesigneractioneditorinterface_mousepressevent_isbase = false;
            QDesignerActionEditorInterface::mousePressEvent(event);
        } else if (qdesigneractioneditorinterface_mousepressevent_callback != nullptr) {
            QMouseEvent* cbval1 = event;

            qdesigneractioneditorinterface_mousepressevent_callback(this, cbval1);
        } else {
            QDesignerActionEditorInterface::mousePressEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseReleaseEvent(QMouseEvent* event) override {
        if (qdesigneractioneditorinterface_mousereleaseevent_isbase) {
            qdesigneractioneditorinterface_mousereleaseevent_isbase = false;
            QDesignerActionEditorInterface::mouseReleaseEvent(event);
        } else if (qdesigneractioneditorinterface_mousereleaseevent_callback != nullptr) {
            QMouseEvent* cbval1 = event;

            qdesigneractioneditorinterface_mousereleaseevent_callback(this, cbval1);
        } else {
            QDesignerActionEditorInterface::mouseReleaseEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseDoubleClickEvent(QMouseEvent* event) override {
        if (qdesigneractioneditorinterface_mousedoubleclickevent_isbase) {
            qdesigneractioneditorinterface_mousedoubleclickevent_isbase = false;
            QDesignerActionEditorInterface::mouseDoubleClickEvent(event);
        } else if (qdesigneractioneditorinterface_mousedoubleclickevent_callback != nullptr) {
            QMouseEvent* cbval1 = event;

            qdesigneractioneditorinterface_mousedoubleclickevent_callback(this, cbval1);
        } else {
            QDesignerActionEditorInterface::mouseDoubleClickEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseMoveEvent(QMouseEvent* event) override {
        if (qdesigneractioneditorinterface_mousemoveevent_isbase) {
            qdesigneractioneditorinterface_mousemoveevent_isbase = false;
            QDesignerActionEditorInterface::mouseMoveEvent(event);
        } else if (qdesigneractioneditorinterface_mousemoveevent_callback != nullptr) {
            QMouseEvent* cbval1 = event;

            qdesigneractioneditorinterface_mousemoveevent_callback(this, cbval1);
        } else {
            QDesignerActionEditorInterface::mouseMoveEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void wheelEvent(QWheelEvent* event) override {
        if (qdesigneractioneditorinterface_wheelevent_isbase) {
            qdesigneractioneditorinterface_wheelevent_isbase = false;
            QDesignerActionEditorInterface::wheelEvent(event);
        } else if (qdesigneractioneditorinterface_wheelevent_callback != nullptr) {
            QWheelEvent* cbval1 = event;

            qdesigneractioneditorinterface_wheelevent_callback(this, cbval1);
        } else {
            QDesignerActionEditorInterface::wheelEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void keyPressEvent(QKeyEvent* event) override {
        if (qdesigneractioneditorinterface_keypressevent_isbase) {
            qdesigneractioneditorinterface_keypressevent_isbase = false;
            QDesignerActionEditorInterface::keyPressEvent(event);
        } else if (qdesigneractioneditorinterface_keypressevent_callback != nullptr) {
            QKeyEvent* cbval1 = event;

            qdesigneractioneditorinterface_keypressevent_callback(this, cbval1);
        } else {
            QDesignerActionEditorInterface::keyPressEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void keyReleaseEvent(QKeyEvent* event) override {
        if (qdesigneractioneditorinterface_keyreleaseevent_isbase) {
            qdesigneractioneditorinterface_keyreleaseevent_isbase = false;
            QDesignerActionEditorInterface::keyReleaseEvent(event);
        } else if (qdesigneractioneditorinterface_keyreleaseevent_callback != nullptr) {
            QKeyEvent* cbval1 = event;

            qdesigneractioneditorinterface_keyreleaseevent_callback(this, cbval1);
        } else {
            QDesignerActionEditorInterface::keyReleaseEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void focusInEvent(QFocusEvent* event) override {
        if (qdesigneractioneditorinterface_focusinevent_isbase) {
            qdesigneractioneditorinterface_focusinevent_isbase = false;
            QDesignerActionEditorInterface::focusInEvent(event);
        } else if (qdesigneractioneditorinterface_focusinevent_callback != nullptr) {
            QFocusEvent* cbval1 = event;

            qdesigneractioneditorinterface_focusinevent_callback(this, cbval1);
        } else {
            QDesignerActionEditorInterface::focusInEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void focusOutEvent(QFocusEvent* event) override {
        if (qdesigneractioneditorinterface_focusoutevent_isbase) {
            qdesigneractioneditorinterface_focusoutevent_isbase = false;
            QDesignerActionEditorInterface::focusOutEvent(event);
        } else if (qdesigneractioneditorinterface_focusoutevent_callback != nullptr) {
            QFocusEvent* cbval1 = event;

            qdesigneractioneditorinterface_focusoutevent_callback(this, cbval1);
        } else {
            QDesignerActionEditorInterface::focusOutEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void enterEvent(QEnterEvent* event) override {
        if (qdesigneractioneditorinterface_enterevent_isbase) {
            qdesigneractioneditorinterface_enterevent_isbase = false;
            QDesignerActionEditorInterface::enterEvent(event);
        } else if (qdesigneractioneditorinterface_enterevent_callback != nullptr) {
            QEnterEvent* cbval1 = event;

            qdesigneractioneditorinterface_enterevent_callback(this, cbval1);
        } else {
            QDesignerActionEditorInterface::enterEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void leaveEvent(QEvent* event) override {
        if (qdesigneractioneditorinterface_leaveevent_isbase) {
            qdesigneractioneditorinterface_leaveevent_isbase = false;
            QDesignerActionEditorInterface::leaveEvent(event);
        } else if (qdesigneractioneditorinterface_leaveevent_callback != nullptr) {
            QEvent* cbval1 = event;

            qdesigneractioneditorinterface_leaveevent_callback(this, cbval1);
        } else {
            QDesignerActionEditorInterface::leaveEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void paintEvent(QPaintEvent* event) override {
        if (qdesigneractioneditorinterface_paintevent_isbase) {
            qdesigneractioneditorinterface_paintevent_isbase = false;
            QDesignerActionEditorInterface::paintEvent(event);
        } else if (qdesigneractioneditorinterface_paintevent_callback != nullptr) {
            QPaintEvent* cbval1 = event;

            qdesigneractioneditorinterface_paintevent_callback(this, cbval1);
        } else {
            QDesignerActionEditorInterface::paintEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void moveEvent(QMoveEvent* event) override {
        if (qdesigneractioneditorinterface_moveevent_isbase) {
            qdesigneractioneditorinterface_moveevent_isbase = false;
            QDesignerActionEditorInterface::moveEvent(event);
        } else if (qdesigneractioneditorinterface_moveevent_callback != nullptr) {
            QMoveEvent* cbval1 = event;

            qdesigneractioneditorinterface_moveevent_callback(this, cbval1);
        } else {
            QDesignerActionEditorInterface::moveEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void resizeEvent(QResizeEvent* event) override {
        if (qdesigneractioneditorinterface_resizeevent_isbase) {
            qdesigneractioneditorinterface_resizeevent_isbase = false;
            QDesignerActionEditorInterface::resizeEvent(event);
        } else if (qdesigneractioneditorinterface_resizeevent_callback != nullptr) {
            QResizeEvent* cbval1 = event;

            qdesigneractioneditorinterface_resizeevent_callback(this, cbval1);
        } else {
            QDesignerActionEditorInterface::resizeEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void closeEvent(QCloseEvent* event) override {
        if (qdesigneractioneditorinterface_closeevent_isbase) {
            qdesigneractioneditorinterface_closeevent_isbase = false;
            QDesignerActionEditorInterface::closeEvent(event);
        } else if (qdesigneractioneditorinterface_closeevent_callback != nullptr) {
            QCloseEvent* cbval1 = event;

            qdesigneractioneditorinterface_closeevent_callback(this, cbval1);
        } else {
            QDesignerActionEditorInterface::closeEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void contextMenuEvent(QContextMenuEvent* event) override {
        if (qdesigneractioneditorinterface_contextmenuevent_isbase) {
            qdesigneractioneditorinterface_contextmenuevent_isbase = false;
            QDesignerActionEditorInterface::contextMenuEvent(event);
        } else if (qdesigneractioneditorinterface_contextmenuevent_callback != nullptr) {
            QContextMenuEvent* cbval1 = event;

            qdesigneractioneditorinterface_contextmenuevent_callback(this, cbval1);
        } else {
            QDesignerActionEditorInterface::contextMenuEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void tabletEvent(QTabletEvent* event) override {
        if (qdesigneractioneditorinterface_tabletevent_isbase) {
            qdesigneractioneditorinterface_tabletevent_isbase = false;
            QDesignerActionEditorInterface::tabletEvent(event);
        } else if (qdesigneractioneditorinterface_tabletevent_callback != nullptr) {
            QTabletEvent* cbval1 = event;

            qdesigneractioneditorinterface_tabletevent_callback(this, cbval1);
        } else {
            QDesignerActionEditorInterface::tabletEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void actionEvent(QActionEvent* event) override {
        if (qdesigneractioneditorinterface_actionevent_isbase) {
            qdesigneractioneditorinterface_actionevent_isbase = false;
            QDesignerActionEditorInterface::actionEvent(event);
        } else if (qdesigneractioneditorinterface_actionevent_callback != nullptr) {
            QActionEvent* cbval1 = event;

            qdesigneractioneditorinterface_actionevent_callback(this, cbval1);
        } else {
            QDesignerActionEditorInterface::actionEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragEnterEvent(QDragEnterEvent* event) override {
        if (qdesigneractioneditorinterface_dragenterevent_isbase) {
            qdesigneractioneditorinterface_dragenterevent_isbase = false;
            QDesignerActionEditorInterface::dragEnterEvent(event);
        } else if (qdesigneractioneditorinterface_dragenterevent_callback != nullptr) {
            QDragEnterEvent* cbval1 = event;

            qdesigneractioneditorinterface_dragenterevent_callback(this, cbval1);
        } else {
            QDesignerActionEditorInterface::dragEnterEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragMoveEvent(QDragMoveEvent* event) override {
        if (qdesigneractioneditorinterface_dragmoveevent_isbase) {
            qdesigneractioneditorinterface_dragmoveevent_isbase = false;
            QDesignerActionEditorInterface::dragMoveEvent(event);
        } else if (qdesigneractioneditorinterface_dragmoveevent_callback != nullptr) {
            QDragMoveEvent* cbval1 = event;

            qdesigneractioneditorinterface_dragmoveevent_callback(this, cbval1);
        } else {
            QDesignerActionEditorInterface::dragMoveEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragLeaveEvent(QDragLeaveEvent* event) override {
        if (qdesigneractioneditorinterface_dragleaveevent_isbase) {
            qdesigneractioneditorinterface_dragleaveevent_isbase = false;
            QDesignerActionEditorInterface::dragLeaveEvent(event);
        } else if (qdesigneractioneditorinterface_dragleaveevent_callback != nullptr) {
            QDragLeaveEvent* cbval1 = event;

            qdesigneractioneditorinterface_dragleaveevent_callback(this, cbval1);
        } else {
            QDesignerActionEditorInterface::dragLeaveEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void dropEvent(QDropEvent* event) override {
        if (qdesigneractioneditorinterface_dropevent_isbase) {
            qdesigneractioneditorinterface_dropevent_isbase = false;
            QDesignerActionEditorInterface::dropEvent(event);
        } else if (qdesigneractioneditorinterface_dropevent_callback != nullptr) {
            QDropEvent* cbval1 = event;

            qdesigneractioneditorinterface_dropevent_callback(this, cbval1);
        } else {
            QDesignerActionEditorInterface::dropEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void showEvent(QShowEvent* event) override {
        if (qdesigneractioneditorinterface_showevent_isbase) {
            qdesigneractioneditorinterface_showevent_isbase = false;
            QDesignerActionEditorInterface::showEvent(event);
        } else if (qdesigneractioneditorinterface_showevent_callback != nullptr) {
            QShowEvent* cbval1 = event;

            qdesigneractioneditorinterface_showevent_callback(this, cbval1);
        } else {
            QDesignerActionEditorInterface::showEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void hideEvent(QHideEvent* event) override {
        if (qdesigneractioneditorinterface_hideevent_isbase) {
            qdesigneractioneditorinterface_hideevent_isbase = false;
            QDesignerActionEditorInterface::hideEvent(event);
        } else if (qdesigneractioneditorinterface_hideevent_callback != nullptr) {
            QHideEvent* cbval1 = event;

            qdesigneractioneditorinterface_hideevent_callback(this, cbval1);
        } else {
            QDesignerActionEditorInterface::hideEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool nativeEvent(const QByteArray& eventType, void* message, qintptr* result) override {
        if (qdesigneractioneditorinterface_nativeevent_isbase) {
            qdesigneractioneditorinterface_nativeevent_isbase = false;
            return QDesignerActionEditorInterface::nativeEvent(eventType, message, result);
        } else if (qdesigneractioneditorinterface_nativeevent_callback != nullptr) {
            const QByteArray eventType_qb = eventType;
            libqt_string eventType_str;
            eventType_str.len = eventType_qb.length();
            eventType_str.data = static_cast<char*>(malloc(eventType_str.len));
            memcpy((void*)eventType_str.data, eventType_qb.data(), eventType_str.len);
            libqt_string cbval1 = eventType_str;
            void* cbval2 = message;
            qintptr* result_ret = result;
            intptr_t* cbval3 = (intptr_t*)(result_ret);

            bool callback_ret = qdesigneractioneditorinterface_nativeevent_callback(this, cbval1, cbval2, cbval3);
            libqt_free(eventType_str.data);
            return callback_ret;
        } else {
            return QDesignerActionEditorInterface::nativeEvent(eventType, message, result);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void changeEvent(QEvent* param1) override {
        if (qdesigneractioneditorinterface_changeevent_isbase) {
            qdesigneractioneditorinterface_changeevent_isbase = false;
            QDesignerActionEditorInterface::changeEvent(param1);
        } else if (qdesigneractioneditorinterface_changeevent_callback != nullptr) {
            QEvent* cbval1 = param1;

            qdesigneractioneditorinterface_changeevent_callback(this, cbval1);
        } else {
            QDesignerActionEditorInterface::changeEvent(param1);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual int metric(QPaintDevice::PaintDeviceMetric param1) const override {
        if (qdesigneractioneditorinterface_metric_isbase) {
            qdesigneractioneditorinterface_metric_isbase = false;
            return QDesignerActionEditorInterface::metric(param1);
        } else if (qdesigneractioneditorinterface_metric_callback != nullptr) {
            int cbval1 = static_cast<int>(param1);

            int callback_ret = qdesigneractioneditorinterface_metric_callback(this, cbval1);
            return static_cast<int>(callback_ret);
        } else {
            return QDesignerActionEditorInterface::metric(param1);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void initPainter(QPainter* painter) const override {
        if (qdesigneractioneditorinterface_initpainter_isbase) {
            qdesigneractioneditorinterface_initpainter_isbase = false;
            QDesignerActionEditorInterface::initPainter(painter);
        } else if (qdesigneractioneditorinterface_initpainter_callback != nullptr) {
            QPainter* cbval1 = painter;

            qdesigneractioneditorinterface_initpainter_callback(this, cbval1);
        } else {
            QDesignerActionEditorInterface::initPainter(painter);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QPaintDevice* redirected(QPoint* offset) const override {
        if (qdesigneractioneditorinterface_redirected_isbase) {
            qdesigneractioneditorinterface_redirected_isbase = false;
            return QDesignerActionEditorInterface::redirected(offset);
        } else if (qdesigneractioneditorinterface_redirected_callback != nullptr) {
            QPoint* cbval1 = offset;

            QPaintDevice* callback_ret = qdesigneractioneditorinterface_redirected_callback(this, cbval1);
            return callback_ret;
        } else {
            return QDesignerActionEditorInterface::redirected(offset);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QPainter* sharedPainter() const override {
        if (qdesigneractioneditorinterface_sharedpainter_isbase) {
            qdesigneractioneditorinterface_sharedpainter_isbase = false;
            return QDesignerActionEditorInterface::sharedPainter();
        } else if (qdesigneractioneditorinterface_sharedpainter_callback != nullptr) {
            QPainter* callback_ret = qdesigneractioneditorinterface_sharedpainter_callback();
            return callback_ret;
        } else {
            return QDesignerActionEditorInterface::sharedPainter();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void inputMethodEvent(QInputMethodEvent* param1) override {
        if (qdesigneractioneditorinterface_inputmethodevent_isbase) {
            qdesigneractioneditorinterface_inputmethodevent_isbase = false;
            QDesignerActionEditorInterface::inputMethodEvent(param1);
        } else if (qdesigneractioneditorinterface_inputmethodevent_callback != nullptr) {
            QInputMethodEvent* cbval1 = param1;

            qdesigneractioneditorinterface_inputmethodevent_callback(this, cbval1);
        } else {
            QDesignerActionEditorInterface::inputMethodEvent(param1);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QVariant inputMethodQuery(Qt::InputMethodQuery param1) const override {
        if (qdesigneractioneditorinterface_inputmethodquery_isbase) {
            qdesigneractioneditorinterface_inputmethodquery_isbase = false;
            return QDesignerActionEditorInterface::inputMethodQuery(param1);
        } else if (qdesigneractioneditorinterface_inputmethodquery_callback != nullptr) {
            int cbval1 = static_cast<int>(param1);

            QVariant* callback_ret = qdesigneractioneditorinterface_inputmethodquery_callback(this, cbval1);
            return *callback_ret;
        } else {
            return QDesignerActionEditorInterface::inputMethodQuery(param1);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool focusNextPrevChild(bool next) override {
        if (qdesigneractioneditorinterface_focusnextprevchild_isbase) {
            qdesigneractioneditorinterface_focusnextprevchild_isbase = false;
            return QDesignerActionEditorInterface::focusNextPrevChild(next);
        } else if (qdesigneractioneditorinterface_focusnextprevchild_callback != nullptr) {
            bool cbval1 = next;

            bool callback_ret = qdesigneractioneditorinterface_focusnextprevchild_callback(this, cbval1);
            return callback_ret;
        } else {
            return QDesignerActionEditorInterface::focusNextPrevChild(next);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* watched, QEvent* event) override {
        if (qdesigneractioneditorinterface_eventfilter_isbase) {
            qdesigneractioneditorinterface_eventfilter_isbase = false;
            return QDesignerActionEditorInterface::eventFilter(watched, event);
        } else if (qdesigneractioneditorinterface_eventfilter_callback != nullptr) {
            QObject* cbval1 = watched;
            QEvent* cbval2 = event;

            bool callback_ret = qdesigneractioneditorinterface_eventfilter_callback(this, cbval1, cbval2);
            return callback_ret;
        } else {
            return QDesignerActionEditorInterface::eventFilter(watched, event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (qdesigneractioneditorinterface_timerevent_isbase) {
            qdesigneractioneditorinterface_timerevent_isbase = false;
            QDesignerActionEditorInterface::timerEvent(event);
        } else if (qdesigneractioneditorinterface_timerevent_callback != nullptr) {
            QTimerEvent* cbval1 = event;

            qdesigneractioneditorinterface_timerevent_callback(this, cbval1);
        } else {
            QDesignerActionEditorInterface::timerEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (qdesigneractioneditorinterface_childevent_isbase) {
            qdesigneractioneditorinterface_childevent_isbase = false;
            QDesignerActionEditorInterface::childEvent(event);
        } else if (qdesigneractioneditorinterface_childevent_callback != nullptr) {
            QChildEvent* cbval1 = event;

            qdesigneractioneditorinterface_childevent_callback(this, cbval1);
        } else {
            QDesignerActionEditorInterface::childEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (qdesigneractioneditorinterface_customevent_isbase) {
            qdesigneractioneditorinterface_customevent_isbase = false;
            QDesignerActionEditorInterface::customEvent(event);
        } else if (qdesigneractioneditorinterface_customevent_callback != nullptr) {
            QEvent* cbval1 = event;

            qdesigneractioneditorinterface_customevent_callback(this, cbval1);
        } else {
            QDesignerActionEditorInterface::customEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (qdesigneractioneditorinterface_connectnotify_isbase) {
            qdesigneractioneditorinterface_connectnotify_isbase = false;
            QDesignerActionEditorInterface::connectNotify(signal);
        } else if (qdesigneractioneditorinterface_connectnotify_callback != nullptr) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            qdesigneractioneditorinterface_connectnotify_callback(this, cbval1);
        } else {
            QDesignerActionEditorInterface::connectNotify(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (qdesigneractioneditorinterface_disconnectnotify_isbase) {
            qdesigneractioneditorinterface_disconnectnotify_isbase = false;
            QDesignerActionEditorInterface::disconnectNotify(signal);
        } else if (qdesigneractioneditorinterface_disconnectnotify_callback != nullptr) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            qdesigneractioneditorinterface_disconnectnotify_callback(this, cbval1);
        } else {
            QDesignerActionEditorInterface::disconnectNotify(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    void updateMicroFocus() {
        if (qdesigneractioneditorinterface_updatemicrofocus_isbase) {
            qdesigneractioneditorinterface_updatemicrofocus_isbase = false;
            QDesignerActionEditorInterface::updateMicroFocus();
        } else if (qdesigneractioneditorinterface_updatemicrofocus_callback != nullptr) {
            qdesigneractioneditorinterface_updatemicrofocus_callback();
        } else {
            QDesignerActionEditorInterface::updateMicroFocus();
        }
    }

    // Virtual method for C ABI access and custom callback
    void create() {
        if (qdesigneractioneditorinterface_create_isbase) {
            qdesigneractioneditorinterface_create_isbase = false;
            QDesignerActionEditorInterface::create();
        } else if (qdesigneractioneditorinterface_create_callback != nullptr) {
            qdesigneractioneditorinterface_create_callback();
        } else {
            QDesignerActionEditorInterface::create();
        }
    }

    // Virtual method for C ABI access and custom callback
    void destroy() {
        if (qdesigneractioneditorinterface_destroy_isbase) {
            qdesigneractioneditorinterface_destroy_isbase = false;
            QDesignerActionEditorInterface::destroy();
        } else if (qdesigneractioneditorinterface_destroy_callback != nullptr) {
            qdesigneractioneditorinterface_destroy_callback();
        } else {
            QDesignerActionEditorInterface::destroy();
        }
    }

    // Virtual method for C ABI access and custom callback
    bool focusNextChild() {
        if (qdesigneractioneditorinterface_focusnextchild_isbase) {
            qdesigneractioneditorinterface_focusnextchild_isbase = false;
            return QDesignerActionEditorInterface::focusNextChild();
        } else if (qdesigneractioneditorinterface_focusnextchild_callback != nullptr) {
            bool callback_ret = qdesigneractioneditorinterface_focusnextchild_callback();
            return callback_ret;
        } else {
            return QDesignerActionEditorInterface::focusNextChild();
        }
    }

    // Virtual method for C ABI access and custom callback
    bool focusPreviousChild() {
        if (qdesigneractioneditorinterface_focuspreviouschild_isbase) {
            qdesigneractioneditorinterface_focuspreviouschild_isbase = false;
            return QDesignerActionEditorInterface::focusPreviousChild();
        } else if (qdesigneractioneditorinterface_focuspreviouschild_callback != nullptr) {
            bool callback_ret = qdesigneractioneditorinterface_focuspreviouschild_callback();
            return callback_ret;
        } else {
            return QDesignerActionEditorInterface::focusPreviousChild();
        }
    }

    // Virtual method for C ABI access and custom callback
    QObject* sender() const {
        if (qdesigneractioneditorinterface_sender_isbase) {
            qdesigneractioneditorinterface_sender_isbase = false;
            return QDesignerActionEditorInterface::sender();
        } else if (qdesigneractioneditorinterface_sender_callback != nullptr) {
            QObject* callback_ret = qdesigneractioneditorinterface_sender_callback();
            return callback_ret;
        } else {
            return QDesignerActionEditorInterface::sender();
        }
    }

    // Virtual method for C ABI access and custom callback
    int senderSignalIndex() const {
        if (qdesigneractioneditorinterface_sendersignalindex_isbase) {
            qdesigneractioneditorinterface_sendersignalindex_isbase = false;
            return QDesignerActionEditorInterface::senderSignalIndex();
        } else if (qdesigneractioneditorinterface_sendersignalindex_callback != nullptr) {
            int callback_ret = qdesigneractioneditorinterface_sendersignalindex_callback();
            return static_cast<int>(callback_ret);
        } else {
            return QDesignerActionEditorInterface::senderSignalIndex();
        }
    }

    // Virtual method for C ABI access and custom callback
    int receivers(const char* signal) const {
        if (qdesigneractioneditorinterface_receivers_isbase) {
            qdesigneractioneditorinterface_receivers_isbase = false;
            return QDesignerActionEditorInterface::receivers(signal);
        } else if (qdesigneractioneditorinterface_receivers_callback != nullptr) {
            const char* cbval1 = (const char*)signal;

            int callback_ret = qdesigneractioneditorinterface_receivers_callback(this, cbval1);
            return static_cast<int>(callback_ret);
        } else {
            return QDesignerActionEditorInterface::receivers(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    bool isSignalConnected(const QMetaMethod& signal) const {
        if (qdesigneractioneditorinterface_issignalconnected_isbase) {
            qdesigneractioneditorinterface_issignalconnected_isbase = false;
            return QDesignerActionEditorInterface::isSignalConnected(signal);
        } else if (qdesigneractioneditorinterface_issignalconnected_callback != nullptr) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            bool callback_ret = qdesigneractioneditorinterface_issignalconnected_callback(this, cbval1);
            return callback_ret;
        } else {
            return QDesignerActionEditorInterface::isSignalConnected(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    double getDecodedMetricF(QPaintDevice::PaintDeviceMetric metricA, QPaintDevice::PaintDeviceMetric metricB) const {
        if (qdesigneractioneditorinterface_getdecodedmetricf_isbase) {
            qdesigneractioneditorinterface_getdecodedmetricf_isbase = false;
            return QDesignerActionEditorInterface::getDecodedMetricF(metricA, metricB);
        } else if (qdesigneractioneditorinterface_getdecodedmetricf_callback != nullptr) {
            int cbval1 = static_cast<int>(metricA);
            int cbval2 = static_cast<int>(metricB);

            double callback_ret = qdesigneractioneditorinterface_getdecodedmetricf_callback(this, cbval1, cbval2);
            return static_cast<double>(callback_ret);
        } else {
            return QDesignerActionEditorInterface::getDecodedMetricF(metricA, metricB);
        }
    }

    // Friend functions
    friend bool QDesignerActionEditorInterface_Event(QDesignerActionEditorInterface* self, QEvent* event);
    friend bool QDesignerActionEditorInterface_QBaseEvent(QDesignerActionEditorInterface* self, QEvent* event);
    friend void QDesignerActionEditorInterface_MousePressEvent(QDesignerActionEditorInterface* self, QMouseEvent* event);
    friend void QDesignerActionEditorInterface_QBaseMousePressEvent(QDesignerActionEditorInterface* self, QMouseEvent* event);
    friend void QDesignerActionEditorInterface_MouseReleaseEvent(QDesignerActionEditorInterface* self, QMouseEvent* event);
    friend void QDesignerActionEditorInterface_QBaseMouseReleaseEvent(QDesignerActionEditorInterface* self, QMouseEvent* event);
    friend void QDesignerActionEditorInterface_MouseDoubleClickEvent(QDesignerActionEditorInterface* self, QMouseEvent* event);
    friend void QDesignerActionEditorInterface_QBaseMouseDoubleClickEvent(QDesignerActionEditorInterface* self, QMouseEvent* event);
    friend void QDesignerActionEditorInterface_MouseMoveEvent(QDesignerActionEditorInterface* self, QMouseEvent* event);
    friend void QDesignerActionEditorInterface_QBaseMouseMoveEvent(QDesignerActionEditorInterface* self, QMouseEvent* event);
    friend void QDesignerActionEditorInterface_WheelEvent(QDesignerActionEditorInterface* self, QWheelEvent* event);
    friend void QDesignerActionEditorInterface_QBaseWheelEvent(QDesignerActionEditorInterface* self, QWheelEvent* event);
    friend void QDesignerActionEditorInterface_KeyPressEvent(QDesignerActionEditorInterface* self, QKeyEvent* event);
    friend void QDesignerActionEditorInterface_QBaseKeyPressEvent(QDesignerActionEditorInterface* self, QKeyEvent* event);
    friend void QDesignerActionEditorInterface_KeyReleaseEvent(QDesignerActionEditorInterface* self, QKeyEvent* event);
    friend void QDesignerActionEditorInterface_QBaseKeyReleaseEvent(QDesignerActionEditorInterface* self, QKeyEvent* event);
    friend void QDesignerActionEditorInterface_FocusInEvent(QDesignerActionEditorInterface* self, QFocusEvent* event);
    friend void QDesignerActionEditorInterface_QBaseFocusInEvent(QDesignerActionEditorInterface* self, QFocusEvent* event);
    friend void QDesignerActionEditorInterface_FocusOutEvent(QDesignerActionEditorInterface* self, QFocusEvent* event);
    friend void QDesignerActionEditorInterface_QBaseFocusOutEvent(QDesignerActionEditorInterface* self, QFocusEvent* event);
    friend void QDesignerActionEditorInterface_EnterEvent(QDesignerActionEditorInterface* self, QEnterEvent* event);
    friend void QDesignerActionEditorInterface_QBaseEnterEvent(QDesignerActionEditorInterface* self, QEnterEvent* event);
    friend void QDesignerActionEditorInterface_LeaveEvent(QDesignerActionEditorInterface* self, QEvent* event);
    friend void QDesignerActionEditorInterface_QBaseLeaveEvent(QDesignerActionEditorInterface* self, QEvent* event);
    friend void QDesignerActionEditorInterface_PaintEvent(QDesignerActionEditorInterface* self, QPaintEvent* event);
    friend void QDesignerActionEditorInterface_QBasePaintEvent(QDesignerActionEditorInterface* self, QPaintEvent* event);
    friend void QDesignerActionEditorInterface_MoveEvent(QDesignerActionEditorInterface* self, QMoveEvent* event);
    friend void QDesignerActionEditorInterface_QBaseMoveEvent(QDesignerActionEditorInterface* self, QMoveEvent* event);
    friend void QDesignerActionEditorInterface_ResizeEvent(QDesignerActionEditorInterface* self, QResizeEvent* event);
    friend void QDesignerActionEditorInterface_QBaseResizeEvent(QDesignerActionEditorInterface* self, QResizeEvent* event);
    friend void QDesignerActionEditorInterface_CloseEvent(QDesignerActionEditorInterface* self, QCloseEvent* event);
    friend void QDesignerActionEditorInterface_QBaseCloseEvent(QDesignerActionEditorInterface* self, QCloseEvent* event);
    friend void QDesignerActionEditorInterface_ContextMenuEvent(QDesignerActionEditorInterface* self, QContextMenuEvent* event);
    friend void QDesignerActionEditorInterface_QBaseContextMenuEvent(QDesignerActionEditorInterface* self, QContextMenuEvent* event);
    friend void QDesignerActionEditorInterface_TabletEvent(QDesignerActionEditorInterface* self, QTabletEvent* event);
    friend void QDesignerActionEditorInterface_QBaseTabletEvent(QDesignerActionEditorInterface* self, QTabletEvent* event);
    friend void QDesignerActionEditorInterface_ActionEvent(QDesignerActionEditorInterface* self, QActionEvent* event);
    friend void QDesignerActionEditorInterface_QBaseActionEvent(QDesignerActionEditorInterface* self, QActionEvent* event);
    friend void QDesignerActionEditorInterface_DragEnterEvent(QDesignerActionEditorInterface* self, QDragEnterEvent* event);
    friend void QDesignerActionEditorInterface_QBaseDragEnterEvent(QDesignerActionEditorInterface* self, QDragEnterEvent* event);
    friend void QDesignerActionEditorInterface_DragMoveEvent(QDesignerActionEditorInterface* self, QDragMoveEvent* event);
    friend void QDesignerActionEditorInterface_QBaseDragMoveEvent(QDesignerActionEditorInterface* self, QDragMoveEvent* event);
    friend void QDesignerActionEditorInterface_DragLeaveEvent(QDesignerActionEditorInterface* self, QDragLeaveEvent* event);
    friend void QDesignerActionEditorInterface_QBaseDragLeaveEvent(QDesignerActionEditorInterface* self, QDragLeaveEvent* event);
    friend void QDesignerActionEditorInterface_DropEvent(QDesignerActionEditorInterface* self, QDropEvent* event);
    friend void QDesignerActionEditorInterface_QBaseDropEvent(QDesignerActionEditorInterface* self, QDropEvent* event);
    friend void QDesignerActionEditorInterface_ShowEvent(QDesignerActionEditorInterface* self, QShowEvent* event);
    friend void QDesignerActionEditorInterface_QBaseShowEvent(QDesignerActionEditorInterface* self, QShowEvent* event);
    friend void QDesignerActionEditorInterface_HideEvent(QDesignerActionEditorInterface* self, QHideEvent* event);
    friend void QDesignerActionEditorInterface_QBaseHideEvent(QDesignerActionEditorInterface* self, QHideEvent* event);
    friend bool QDesignerActionEditorInterface_NativeEvent(QDesignerActionEditorInterface* self, const libqt_string eventType, void* message, intptr_t* result);
    friend bool QDesignerActionEditorInterface_QBaseNativeEvent(QDesignerActionEditorInterface* self, const libqt_string eventType, void* message, intptr_t* result);
    friend void QDesignerActionEditorInterface_ChangeEvent(QDesignerActionEditorInterface* self, QEvent* param1);
    friend void QDesignerActionEditorInterface_QBaseChangeEvent(QDesignerActionEditorInterface* self, QEvent* param1);
    friend int QDesignerActionEditorInterface_Metric(const QDesignerActionEditorInterface* self, int param1);
    friend int QDesignerActionEditorInterface_QBaseMetric(const QDesignerActionEditorInterface* self, int param1);
    friend void QDesignerActionEditorInterface_InitPainter(const QDesignerActionEditorInterface* self, QPainter* painter);
    friend void QDesignerActionEditorInterface_QBaseInitPainter(const QDesignerActionEditorInterface* self, QPainter* painter);
    friend QPaintDevice* QDesignerActionEditorInterface_Redirected(const QDesignerActionEditorInterface* self, QPoint* offset);
    friend QPaintDevice* QDesignerActionEditorInterface_QBaseRedirected(const QDesignerActionEditorInterface* self, QPoint* offset);
    friend QPainter* QDesignerActionEditorInterface_SharedPainter(const QDesignerActionEditorInterface* self);
    friend QPainter* QDesignerActionEditorInterface_QBaseSharedPainter(const QDesignerActionEditorInterface* self);
    friend void QDesignerActionEditorInterface_InputMethodEvent(QDesignerActionEditorInterface* self, QInputMethodEvent* param1);
    friend void QDesignerActionEditorInterface_QBaseInputMethodEvent(QDesignerActionEditorInterface* self, QInputMethodEvent* param1);
    friend bool QDesignerActionEditorInterface_FocusNextPrevChild(QDesignerActionEditorInterface* self, bool next);
    friend bool QDesignerActionEditorInterface_QBaseFocusNextPrevChild(QDesignerActionEditorInterface* self, bool next);
    friend void QDesignerActionEditorInterface_TimerEvent(QDesignerActionEditorInterface* self, QTimerEvent* event);
    friend void QDesignerActionEditorInterface_QBaseTimerEvent(QDesignerActionEditorInterface* self, QTimerEvent* event);
    friend void QDesignerActionEditorInterface_ChildEvent(QDesignerActionEditorInterface* self, QChildEvent* event);
    friend void QDesignerActionEditorInterface_QBaseChildEvent(QDesignerActionEditorInterface* self, QChildEvent* event);
    friend void QDesignerActionEditorInterface_CustomEvent(QDesignerActionEditorInterface* self, QEvent* event);
    friend void QDesignerActionEditorInterface_QBaseCustomEvent(QDesignerActionEditorInterface* self, QEvent* event);
    friend void QDesignerActionEditorInterface_ConnectNotify(QDesignerActionEditorInterface* self, const QMetaMethod* signal);
    friend void QDesignerActionEditorInterface_QBaseConnectNotify(QDesignerActionEditorInterface* self, const QMetaMethod* signal);
    friend void QDesignerActionEditorInterface_DisconnectNotify(QDesignerActionEditorInterface* self, const QMetaMethod* signal);
    friend void QDesignerActionEditorInterface_QBaseDisconnectNotify(QDesignerActionEditorInterface* self, const QMetaMethod* signal);
    friend void QDesignerActionEditorInterface_UpdateMicroFocus(QDesignerActionEditorInterface* self);
    friend void QDesignerActionEditorInterface_QBaseUpdateMicroFocus(QDesignerActionEditorInterface* self);
    friend void QDesignerActionEditorInterface_Create(QDesignerActionEditorInterface* self);
    friend void QDesignerActionEditorInterface_QBaseCreate(QDesignerActionEditorInterface* self);
    friend void QDesignerActionEditorInterface_Destroy(QDesignerActionEditorInterface* self);
    friend void QDesignerActionEditorInterface_QBaseDestroy(QDesignerActionEditorInterface* self);
    friend bool QDesignerActionEditorInterface_FocusNextChild(QDesignerActionEditorInterface* self);
    friend bool QDesignerActionEditorInterface_QBaseFocusNextChild(QDesignerActionEditorInterface* self);
    friend bool QDesignerActionEditorInterface_FocusPreviousChild(QDesignerActionEditorInterface* self);
    friend bool QDesignerActionEditorInterface_QBaseFocusPreviousChild(QDesignerActionEditorInterface* self);
    friend QObject* QDesignerActionEditorInterface_Sender(const QDesignerActionEditorInterface* self);
    friend QObject* QDesignerActionEditorInterface_QBaseSender(const QDesignerActionEditorInterface* self);
    friend int QDesignerActionEditorInterface_SenderSignalIndex(const QDesignerActionEditorInterface* self);
    friend int QDesignerActionEditorInterface_QBaseSenderSignalIndex(const QDesignerActionEditorInterface* self);
    friend int QDesignerActionEditorInterface_Receivers(const QDesignerActionEditorInterface* self, const char* signal);
    friend int QDesignerActionEditorInterface_QBaseReceivers(const QDesignerActionEditorInterface* self, const char* signal);
    friend bool QDesignerActionEditorInterface_IsSignalConnected(const QDesignerActionEditorInterface* self, const QMetaMethod* signal);
    friend bool QDesignerActionEditorInterface_QBaseIsSignalConnected(const QDesignerActionEditorInterface* self, const QMetaMethod* signal);
    friend double QDesignerActionEditorInterface_GetDecodedMetricF(const QDesignerActionEditorInterface* self, int metricA, int metricB);
    friend double QDesignerActionEditorInterface_QBaseGetDecodedMetricF(const QDesignerActionEditorInterface* self, int metricA, int metricB);
};

#endif
