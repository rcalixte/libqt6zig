#pragma once
#ifndef SRC_DESIGNERC_LIBVIRTUALABSTRACTOBJECTINSPECTOR_H
#define SRC_DESIGNERC_LIBVIRTUALABSTRACTOBJECTINSPECTOR_H

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

// This class is a subclass of QDesignerObjectInspectorInterface so that we can call protected methods
class VirtualQDesignerObjectInspectorInterface : public QDesignerObjectInspectorInterface {

  public:
    // Virtual class boolean flag
    bool isVirtualQDesignerObjectInspectorInterface = true;

    // Virtual class public types (including callbacks)
    using QDesignerObjectInspectorInterface_MetaObject_Callback = QMetaObject* (*)();
    using QDesignerObjectInspectorInterface_Metacast_Callback = void* (*)(QDesignerObjectInspectorInterface*, const char*);
    using QDesignerObjectInspectorInterface_Metacall_Callback = int (*)(QDesignerObjectInspectorInterface*, int, int, void**);
    using QDesignerObjectInspectorInterface_Core_Callback = QDesignerFormEditorInterface* (*)();
    using QDesignerObjectInspectorInterface_SetFormWindow_Callback = void (*)(QDesignerObjectInspectorInterface*, QDesignerFormWindowInterface*);
    using QDesignerObjectInspectorInterface_DevType_Callback = int (*)();
    using QDesignerObjectInspectorInterface_SetVisible_Callback = void (*)(QDesignerObjectInspectorInterface*, bool);
    using QDesignerObjectInspectorInterface_SizeHint_Callback = QSize* (*)();
    using QDesignerObjectInspectorInterface_MinimumSizeHint_Callback = QSize* (*)();
    using QDesignerObjectInspectorInterface_HeightForWidth_Callback = int (*)(const QDesignerObjectInspectorInterface*, int);
    using QDesignerObjectInspectorInterface_HasHeightForWidth_Callback = bool (*)();
    using QDesignerObjectInspectorInterface_PaintEngine_Callback = QPaintEngine* (*)();
    using QDesignerObjectInspectorInterface_Event_Callback = bool (*)(QDesignerObjectInspectorInterface*, QEvent*);
    using QDesignerObjectInspectorInterface_MousePressEvent_Callback = void (*)(QDesignerObjectInspectorInterface*, QMouseEvent*);
    using QDesignerObjectInspectorInterface_MouseReleaseEvent_Callback = void (*)(QDesignerObjectInspectorInterface*, QMouseEvent*);
    using QDesignerObjectInspectorInterface_MouseDoubleClickEvent_Callback = void (*)(QDesignerObjectInspectorInterface*, QMouseEvent*);
    using QDesignerObjectInspectorInterface_MouseMoveEvent_Callback = void (*)(QDesignerObjectInspectorInterface*, QMouseEvent*);
    using QDesignerObjectInspectorInterface_WheelEvent_Callback = void (*)(QDesignerObjectInspectorInterface*, QWheelEvent*);
    using QDesignerObjectInspectorInterface_KeyPressEvent_Callback = void (*)(QDesignerObjectInspectorInterface*, QKeyEvent*);
    using QDesignerObjectInspectorInterface_KeyReleaseEvent_Callback = void (*)(QDesignerObjectInspectorInterface*, QKeyEvent*);
    using QDesignerObjectInspectorInterface_FocusInEvent_Callback = void (*)(QDesignerObjectInspectorInterface*, QFocusEvent*);
    using QDesignerObjectInspectorInterface_FocusOutEvent_Callback = void (*)(QDesignerObjectInspectorInterface*, QFocusEvent*);
    using QDesignerObjectInspectorInterface_EnterEvent_Callback = void (*)(QDesignerObjectInspectorInterface*, QEnterEvent*);
    using QDesignerObjectInspectorInterface_LeaveEvent_Callback = void (*)(QDesignerObjectInspectorInterface*, QEvent*);
    using QDesignerObjectInspectorInterface_PaintEvent_Callback = void (*)(QDesignerObjectInspectorInterface*, QPaintEvent*);
    using QDesignerObjectInspectorInterface_MoveEvent_Callback = void (*)(QDesignerObjectInspectorInterface*, QMoveEvent*);
    using QDesignerObjectInspectorInterface_ResizeEvent_Callback = void (*)(QDesignerObjectInspectorInterface*, QResizeEvent*);
    using QDesignerObjectInspectorInterface_CloseEvent_Callback = void (*)(QDesignerObjectInspectorInterface*, QCloseEvent*);
    using QDesignerObjectInspectorInterface_ContextMenuEvent_Callback = void (*)(QDesignerObjectInspectorInterface*, QContextMenuEvent*);
    using QDesignerObjectInspectorInterface_TabletEvent_Callback = void (*)(QDesignerObjectInspectorInterface*, QTabletEvent*);
    using QDesignerObjectInspectorInterface_ActionEvent_Callback = void (*)(QDesignerObjectInspectorInterface*, QActionEvent*);
    using QDesignerObjectInspectorInterface_DragEnterEvent_Callback = void (*)(QDesignerObjectInspectorInterface*, QDragEnterEvent*);
    using QDesignerObjectInspectorInterface_DragMoveEvent_Callback = void (*)(QDesignerObjectInspectorInterface*, QDragMoveEvent*);
    using QDesignerObjectInspectorInterface_DragLeaveEvent_Callback = void (*)(QDesignerObjectInspectorInterface*, QDragLeaveEvent*);
    using QDesignerObjectInspectorInterface_DropEvent_Callback = void (*)(QDesignerObjectInspectorInterface*, QDropEvent*);
    using QDesignerObjectInspectorInterface_ShowEvent_Callback = void (*)(QDesignerObjectInspectorInterface*, QShowEvent*);
    using QDesignerObjectInspectorInterface_HideEvent_Callback = void (*)(QDesignerObjectInspectorInterface*, QHideEvent*);
    using QDesignerObjectInspectorInterface_NativeEvent_Callback = bool (*)(QDesignerObjectInspectorInterface*, libqt_string, void*, intptr_t*);
    using QDesignerObjectInspectorInterface_ChangeEvent_Callback = void (*)(QDesignerObjectInspectorInterface*, QEvent*);
    using QDesignerObjectInspectorInterface_Metric_Callback = int (*)(const QDesignerObjectInspectorInterface*, int);
    using QDesignerObjectInspectorInterface_InitPainter_Callback = void (*)(const QDesignerObjectInspectorInterface*, QPainter*);
    using QDesignerObjectInspectorInterface_Redirected_Callback = QPaintDevice* (*)(const QDesignerObjectInspectorInterface*, QPoint*);
    using QDesignerObjectInspectorInterface_SharedPainter_Callback = QPainter* (*)();
    using QDesignerObjectInspectorInterface_InputMethodEvent_Callback = void (*)(QDesignerObjectInspectorInterface*, QInputMethodEvent*);
    using QDesignerObjectInspectorInterface_InputMethodQuery_Callback = QVariant* (*)(const QDesignerObjectInspectorInterface*, int);
    using QDesignerObjectInspectorInterface_FocusNextPrevChild_Callback = bool (*)(QDesignerObjectInspectorInterface*, bool);
    using QDesignerObjectInspectorInterface_EventFilter_Callback = bool (*)(QDesignerObjectInspectorInterface*, QObject*, QEvent*);
    using QDesignerObjectInspectorInterface_TimerEvent_Callback = void (*)(QDesignerObjectInspectorInterface*, QTimerEvent*);
    using QDesignerObjectInspectorInterface_ChildEvent_Callback = void (*)(QDesignerObjectInspectorInterface*, QChildEvent*);
    using QDesignerObjectInspectorInterface_CustomEvent_Callback = void (*)(QDesignerObjectInspectorInterface*, QEvent*);
    using QDesignerObjectInspectorInterface_ConnectNotify_Callback = void (*)(QDesignerObjectInspectorInterface*, QMetaMethod*);
    using QDesignerObjectInspectorInterface_DisconnectNotify_Callback = void (*)(QDesignerObjectInspectorInterface*, QMetaMethod*);
    using QDesignerObjectInspectorInterface_UpdateMicroFocus_Callback = void (*)();
    using QDesignerObjectInspectorInterface_Create_Callback = void (*)();
    using QDesignerObjectInspectorInterface_Destroy_Callback = void (*)();
    using QDesignerObjectInspectorInterface_FocusNextChild_Callback = bool (*)();
    using QDesignerObjectInspectorInterface_FocusPreviousChild_Callback = bool (*)();
    using QDesignerObjectInspectorInterface_Sender_Callback = QObject* (*)();
    using QDesignerObjectInspectorInterface_SenderSignalIndex_Callback = int (*)();
    using QDesignerObjectInspectorInterface_Receivers_Callback = int (*)(const QDesignerObjectInspectorInterface*, const char*);
    using QDesignerObjectInspectorInterface_IsSignalConnected_Callback = bool (*)(const QDesignerObjectInspectorInterface*, QMetaMethod*);
    using QDesignerObjectInspectorInterface_GetDecodedMetricF_Callback = double (*)(const QDesignerObjectInspectorInterface*, int, int);

  protected:
    // Instance callback storage
    QDesignerObjectInspectorInterface_MetaObject_Callback qdesignerobjectinspectorinterface_metaobject_callback = nullptr;
    QDesignerObjectInspectorInterface_Metacast_Callback qdesignerobjectinspectorinterface_metacast_callback = nullptr;
    QDesignerObjectInspectorInterface_Metacall_Callback qdesignerobjectinspectorinterface_metacall_callback = nullptr;
    QDesignerObjectInspectorInterface_Core_Callback qdesignerobjectinspectorinterface_core_callback = nullptr;
    QDesignerObjectInspectorInterface_SetFormWindow_Callback qdesignerobjectinspectorinterface_setformwindow_callback = nullptr;
    QDesignerObjectInspectorInterface_DevType_Callback qdesignerobjectinspectorinterface_devtype_callback = nullptr;
    QDesignerObjectInspectorInterface_SetVisible_Callback qdesignerobjectinspectorinterface_setvisible_callback = nullptr;
    QDesignerObjectInspectorInterface_SizeHint_Callback qdesignerobjectinspectorinterface_sizehint_callback = nullptr;
    QDesignerObjectInspectorInterface_MinimumSizeHint_Callback qdesignerobjectinspectorinterface_minimumsizehint_callback = nullptr;
    QDesignerObjectInspectorInterface_HeightForWidth_Callback qdesignerobjectinspectorinterface_heightforwidth_callback = nullptr;
    QDesignerObjectInspectorInterface_HasHeightForWidth_Callback qdesignerobjectinspectorinterface_hasheightforwidth_callback = nullptr;
    QDesignerObjectInspectorInterface_PaintEngine_Callback qdesignerobjectinspectorinterface_paintengine_callback = nullptr;
    QDesignerObjectInspectorInterface_Event_Callback qdesignerobjectinspectorinterface_event_callback = nullptr;
    QDesignerObjectInspectorInterface_MousePressEvent_Callback qdesignerobjectinspectorinterface_mousepressevent_callback = nullptr;
    QDesignerObjectInspectorInterface_MouseReleaseEvent_Callback qdesignerobjectinspectorinterface_mousereleaseevent_callback = nullptr;
    QDesignerObjectInspectorInterface_MouseDoubleClickEvent_Callback qdesignerobjectinspectorinterface_mousedoubleclickevent_callback = nullptr;
    QDesignerObjectInspectorInterface_MouseMoveEvent_Callback qdesignerobjectinspectorinterface_mousemoveevent_callback = nullptr;
    QDesignerObjectInspectorInterface_WheelEvent_Callback qdesignerobjectinspectorinterface_wheelevent_callback = nullptr;
    QDesignerObjectInspectorInterface_KeyPressEvent_Callback qdesignerobjectinspectorinterface_keypressevent_callback = nullptr;
    QDesignerObjectInspectorInterface_KeyReleaseEvent_Callback qdesignerobjectinspectorinterface_keyreleaseevent_callback = nullptr;
    QDesignerObjectInspectorInterface_FocusInEvent_Callback qdesignerobjectinspectorinterface_focusinevent_callback = nullptr;
    QDesignerObjectInspectorInterface_FocusOutEvent_Callback qdesignerobjectinspectorinterface_focusoutevent_callback = nullptr;
    QDesignerObjectInspectorInterface_EnterEvent_Callback qdesignerobjectinspectorinterface_enterevent_callback = nullptr;
    QDesignerObjectInspectorInterface_LeaveEvent_Callback qdesignerobjectinspectorinterface_leaveevent_callback = nullptr;
    QDesignerObjectInspectorInterface_PaintEvent_Callback qdesignerobjectinspectorinterface_paintevent_callback = nullptr;
    QDesignerObjectInspectorInterface_MoveEvent_Callback qdesignerobjectinspectorinterface_moveevent_callback = nullptr;
    QDesignerObjectInspectorInterface_ResizeEvent_Callback qdesignerobjectinspectorinterface_resizeevent_callback = nullptr;
    QDesignerObjectInspectorInterface_CloseEvent_Callback qdesignerobjectinspectorinterface_closeevent_callback = nullptr;
    QDesignerObjectInspectorInterface_ContextMenuEvent_Callback qdesignerobjectinspectorinterface_contextmenuevent_callback = nullptr;
    QDesignerObjectInspectorInterface_TabletEvent_Callback qdesignerobjectinspectorinterface_tabletevent_callback = nullptr;
    QDesignerObjectInspectorInterface_ActionEvent_Callback qdesignerobjectinspectorinterface_actionevent_callback = nullptr;
    QDesignerObjectInspectorInterface_DragEnterEvent_Callback qdesignerobjectinspectorinterface_dragenterevent_callback = nullptr;
    QDesignerObjectInspectorInterface_DragMoveEvent_Callback qdesignerobjectinspectorinterface_dragmoveevent_callback = nullptr;
    QDesignerObjectInspectorInterface_DragLeaveEvent_Callback qdesignerobjectinspectorinterface_dragleaveevent_callback = nullptr;
    QDesignerObjectInspectorInterface_DropEvent_Callback qdesignerobjectinspectorinterface_dropevent_callback = nullptr;
    QDesignerObjectInspectorInterface_ShowEvent_Callback qdesignerobjectinspectorinterface_showevent_callback = nullptr;
    QDesignerObjectInspectorInterface_HideEvent_Callback qdesignerobjectinspectorinterface_hideevent_callback = nullptr;
    QDesignerObjectInspectorInterface_NativeEvent_Callback qdesignerobjectinspectorinterface_nativeevent_callback = nullptr;
    QDesignerObjectInspectorInterface_ChangeEvent_Callback qdesignerobjectinspectorinterface_changeevent_callback = nullptr;
    QDesignerObjectInspectorInterface_Metric_Callback qdesignerobjectinspectorinterface_metric_callback = nullptr;
    QDesignerObjectInspectorInterface_InitPainter_Callback qdesignerobjectinspectorinterface_initpainter_callback = nullptr;
    QDesignerObjectInspectorInterface_Redirected_Callback qdesignerobjectinspectorinterface_redirected_callback = nullptr;
    QDesignerObjectInspectorInterface_SharedPainter_Callback qdesignerobjectinspectorinterface_sharedpainter_callback = nullptr;
    QDesignerObjectInspectorInterface_InputMethodEvent_Callback qdesignerobjectinspectorinterface_inputmethodevent_callback = nullptr;
    QDesignerObjectInspectorInterface_InputMethodQuery_Callback qdesignerobjectinspectorinterface_inputmethodquery_callback = nullptr;
    QDesignerObjectInspectorInterface_FocusNextPrevChild_Callback qdesignerobjectinspectorinterface_focusnextprevchild_callback = nullptr;
    QDesignerObjectInspectorInterface_EventFilter_Callback qdesignerobjectinspectorinterface_eventfilter_callback = nullptr;
    QDesignerObjectInspectorInterface_TimerEvent_Callback qdesignerobjectinspectorinterface_timerevent_callback = nullptr;
    QDesignerObjectInspectorInterface_ChildEvent_Callback qdesignerobjectinspectorinterface_childevent_callback = nullptr;
    QDesignerObjectInspectorInterface_CustomEvent_Callback qdesignerobjectinspectorinterface_customevent_callback = nullptr;
    QDesignerObjectInspectorInterface_ConnectNotify_Callback qdesignerobjectinspectorinterface_connectnotify_callback = nullptr;
    QDesignerObjectInspectorInterface_DisconnectNotify_Callback qdesignerobjectinspectorinterface_disconnectnotify_callback = nullptr;
    QDesignerObjectInspectorInterface_UpdateMicroFocus_Callback qdesignerobjectinspectorinterface_updatemicrofocus_callback = nullptr;
    QDesignerObjectInspectorInterface_Create_Callback qdesignerobjectinspectorinterface_create_callback = nullptr;
    QDesignerObjectInspectorInterface_Destroy_Callback qdesignerobjectinspectorinterface_destroy_callback = nullptr;
    QDesignerObjectInspectorInterface_FocusNextChild_Callback qdesignerobjectinspectorinterface_focusnextchild_callback = nullptr;
    QDesignerObjectInspectorInterface_FocusPreviousChild_Callback qdesignerobjectinspectorinterface_focuspreviouschild_callback = nullptr;
    QDesignerObjectInspectorInterface_Sender_Callback qdesignerobjectinspectorinterface_sender_callback = nullptr;
    QDesignerObjectInspectorInterface_SenderSignalIndex_Callback qdesignerobjectinspectorinterface_sendersignalindex_callback = nullptr;
    QDesignerObjectInspectorInterface_Receivers_Callback qdesignerobjectinspectorinterface_receivers_callback = nullptr;
    QDesignerObjectInspectorInterface_IsSignalConnected_Callback qdesignerobjectinspectorinterface_issignalconnected_callback = nullptr;
    QDesignerObjectInspectorInterface_GetDecodedMetricF_Callback qdesignerobjectinspectorinterface_getdecodedmetricf_callback = nullptr;

    // Instance base flags
    mutable bool qdesignerobjectinspectorinterface_metaobject_isbase = false;
    mutable bool qdesignerobjectinspectorinterface_metacast_isbase = false;
    mutable bool qdesignerobjectinspectorinterface_metacall_isbase = false;
    mutable bool qdesignerobjectinspectorinterface_core_isbase = false;
    mutable bool qdesignerobjectinspectorinterface_setformwindow_isbase = false;
    mutable bool qdesignerobjectinspectorinterface_devtype_isbase = false;
    mutable bool qdesignerobjectinspectorinterface_setvisible_isbase = false;
    mutable bool qdesignerobjectinspectorinterface_sizehint_isbase = false;
    mutable bool qdesignerobjectinspectorinterface_minimumsizehint_isbase = false;
    mutable bool qdesignerobjectinspectorinterface_heightforwidth_isbase = false;
    mutable bool qdesignerobjectinspectorinterface_hasheightforwidth_isbase = false;
    mutable bool qdesignerobjectinspectorinterface_paintengine_isbase = false;
    mutable bool qdesignerobjectinspectorinterface_event_isbase = false;
    mutable bool qdesignerobjectinspectorinterface_mousepressevent_isbase = false;
    mutable bool qdesignerobjectinspectorinterface_mousereleaseevent_isbase = false;
    mutable bool qdesignerobjectinspectorinterface_mousedoubleclickevent_isbase = false;
    mutable bool qdesignerobjectinspectorinterface_mousemoveevent_isbase = false;
    mutable bool qdesignerobjectinspectorinterface_wheelevent_isbase = false;
    mutable bool qdesignerobjectinspectorinterface_keypressevent_isbase = false;
    mutable bool qdesignerobjectinspectorinterface_keyreleaseevent_isbase = false;
    mutable bool qdesignerobjectinspectorinterface_focusinevent_isbase = false;
    mutable bool qdesignerobjectinspectorinterface_focusoutevent_isbase = false;
    mutable bool qdesignerobjectinspectorinterface_enterevent_isbase = false;
    mutable bool qdesignerobjectinspectorinterface_leaveevent_isbase = false;
    mutable bool qdesignerobjectinspectorinterface_paintevent_isbase = false;
    mutable bool qdesignerobjectinspectorinterface_moveevent_isbase = false;
    mutable bool qdesignerobjectinspectorinterface_resizeevent_isbase = false;
    mutable bool qdesignerobjectinspectorinterface_closeevent_isbase = false;
    mutable bool qdesignerobjectinspectorinterface_contextmenuevent_isbase = false;
    mutable bool qdesignerobjectinspectorinterface_tabletevent_isbase = false;
    mutable bool qdesignerobjectinspectorinterface_actionevent_isbase = false;
    mutable bool qdesignerobjectinspectorinterface_dragenterevent_isbase = false;
    mutable bool qdesignerobjectinspectorinterface_dragmoveevent_isbase = false;
    mutable bool qdesignerobjectinspectorinterface_dragleaveevent_isbase = false;
    mutable bool qdesignerobjectinspectorinterface_dropevent_isbase = false;
    mutable bool qdesignerobjectinspectorinterface_showevent_isbase = false;
    mutable bool qdesignerobjectinspectorinterface_hideevent_isbase = false;
    mutable bool qdesignerobjectinspectorinterface_nativeevent_isbase = false;
    mutable bool qdesignerobjectinspectorinterface_changeevent_isbase = false;
    mutable bool qdesignerobjectinspectorinterface_metric_isbase = false;
    mutable bool qdesignerobjectinspectorinterface_initpainter_isbase = false;
    mutable bool qdesignerobjectinspectorinterface_redirected_isbase = false;
    mutable bool qdesignerobjectinspectorinterface_sharedpainter_isbase = false;
    mutable bool qdesignerobjectinspectorinterface_inputmethodevent_isbase = false;
    mutable bool qdesignerobjectinspectorinterface_inputmethodquery_isbase = false;
    mutable bool qdesignerobjectinspectorinterface_focusnextprevchild_isbase = false;
    mutable bool qdesignerobjectinspectorinterface_eventfilter_isbase = false;
    mutable bool qdesignerobjectinspectorinterface_timerevent_isbase = false;
    mutable bool qdesignerobjectinspectorinterface_childevent_isbase = false;
    mutable bool qdesignerobjectinspectorinterface_customevent_isbase = false;
    mutable bool qdesignerobjectinspectorinterface_connectnotify_isbase = false;
    mutable bool qdesignerobjectinspectorinterface_disconnectnotify_isbase = false;
    mutable bool qdesignerobjectinspectorinterface_updatemicrofocus_isbase = false;
    mutable bool qdesignerobjectinspectorinterface_create_isbase = false;
    mutable bool qdesignerobjectinspectorinterface_destroy_isbase = false;
    mutable bool qdesignerobjectinspectorinterface_focusnextchild_isbase = false;
    mutable bool qdesignerobjectinspectorinterface_focuspreviouschild_isbase = false;
    mutable bool qdesignerobjectinspectorinterface_sender_isbase = false;
    mutable bool qdesignerobjectinspectorinterface_sendersignalindex_isbase = false;
    mutable bool qdesignerobjectinspectorinterface_receivers_isbase = false;
    mutable bool qdesignerobjectinspectorinterface_issignalconnected_isbase = false;
    mutable bool qdesignerobjectinspectorinterface_getdecodedmetricf_isbase = false;

  public:
    VirtualQDesignerObjectInspectorInterface(QWidget* parent) : QDesignerObjectInspectorInterface(parent) {};
    VirtualQDesignerObjectInspectorInterface(QWidget* parent, Qt::WindowFlags flags) : QDesignerObjectInspectorInterface(parent, flags) {};

    ~VirtualQDesignerObjectInspectorInterface() {
        qdesignerobjectinspectorinterface_metaobject_callback = nullptr;
        qdesignerobjectinspectorinterface_metacast_callback = nullptr;
        qdesignerobjectinspectorinterface_metacall_callback = nullptr;
        qdesignerobjectinspectorinterface_core_callback = nullptr;
        qdesignerobjectinspectorinterface_setformwindow_callback = nullptr;
        qdesignerobjectinspectorinterface_devtype_callback = nullptr;
        qdesignerobjectinspectorinterface_setvisible_callback = nullptr;
        qdesignerobjectinspectorinterface_sizehint_callback = nullptr;
        qdesignerobjectinspectorinterface_minimumsizehint_callback = nullptr;
        qdesignerobjectinspectorinterface_heightforwidth_callback = nullptr;
        qdesignerobjectinspectorinterface_hasheightforwidth_callback = nullptr;
        qdesignerobjectinspectorinterface_paintengine_callback = nullptr;
        qdesignerobjectinspectorinterface_event_callback = nullptr;
        qdesignerobjectinspectorinterface_mousepressevent_callback = nullptr;
        qdesignerobjectinspectorinterface_mousereleaseevent_callback = nullptr;
        qdesignerobjectinspectorinterface_mousedoubleclickevent_callback = nullptr;
        qdesignerobjectinspectorinterface_mousemoveevent_callback = nullptr;
        qdesignerobjectinspectorinterface_wheelevent_callback = nullptr;
        qdesignerobjectinspectorinterface_keypressevent_callback = nullptr;
        qdesignerobjectinspectorinterface_keyreleaseevent_callback = nullptr;
        qdesignerobjectinspectorinterface_focusinevent_callback = nullptr;
        qdesignerobjectinspectorinterface_focusoutevent_callback = nullptr;
        qdesignerobjectinspectorinterface_enterevent_callback = nullptr;
        qdesignerobjectinspectorinterface_leaveevent_callback = nullptr;
        qdesignerobjectinspectorinterface_paintevent_callback = nullptr;
        qdesignerobjectinspectorinterface_moveevent_callback = nullptr;
        qdesignerobjectinspectorinterface_resizeevent_callback = nullptr;
        qdesignerobjectinspectorinterface_closeevent_callback = nullptr;
        qdesignerobjectinspectorinterface_contextmenuevent_callback = nullptr;
        qdesignerobjectinspectorinterface_tabletevent_callback = nullptr;
        qdesignerobjectinspectorinterface_actionevent_callback = nullptr;
        qdesignerobjectinspectorinterface_dragenterevent_callback = nullptr;
        qdesignerobjectinspectorinterface_dragmoveevent_callback = nullptr;
        qdesignerobjectinspectorinterface_dragleaveevent_callback = nullptr;
        qdesignerobjectinspectorinterface_dropevent_callback = nullptr;
        qdesignerobjectinspectorinterface_showevent_callback = nullptr;
        qdesignerobjectinspectorinterface_hideevent_callback = nullptr;
        qdesignerobjectinspectorinterface_nativeevent_callback = nullptr;
        qdesignerobjectinspectorinterface_changeevent_callback = nullptr;
        qdesignerobjectinspectorinterface_metric_callback = nullptr;
        qdesignerobjectinspectorinterface_initpainter_callback = nullptr;
        qdesignerobjectinspectorinterface_redirected_callback = nullptr;
        qdesignerobjectinspectorinterface_sharedpainter_callback = nullptr;
        qdesignerobjectinspectorinterface_inputmethodevent_callback = nullptr;
        qdesignerobjectinspectorinterface_inputmethodquery_callback = nullptr;
        qdesignerobjectinspectorinterface_focusnextprevchild_callback = nullptr;
        qdesignerobjectinspectorinterface_eventfilter_callback = nullptr;
        qdesignerobjectinspectorinterface_timerevent_callback = nullptr;
        qdesignerobjectinspectorinterface_childevent_callback = nullptr;
        qdesignerobjectinspectorinterface_customevent_callback = nullptr;
        qdesignerobjectinspectorinterface_connectnotify_callback = nullptr;
        qdesignerobjectinspectorinterface_disconnectnotify_callback = nullptr;
        qdesignerobjectinspectorinterface_updatemicrofocus_callback = nullptr;
        qdesignerobjectinspectorinterface_create_callback = nullptr;
        qdesignerobjectinspectorinterface_destroy_callback = nullptr;
        qdesignerobjectinspectorinterface_focusnextchild_callback = nullptr;
        qdesignerobjectinspectorinterface_focuspreviouschild_callback = nullptr;
        qdesignerobjectinspectorinterface_sender_callback = nullptr;
        qdesignerobjectinspectorinterface_sendersignalindex_callback = nullptr;
        qdesignerobjectinspectorinterface_receivers_callback = nullptr;
        qdesignerobjectinspectorinterface_issignalconnected_callback = nullptr;
        qdesignerobjectinspectorinterface_getdecodedmetricf_callback = nullptr;
    }

    // Callback setters
    inline void setQDesignerObjectInspectorInterface_MetaObject_Callback(QDesignerObjectInspectorInterface_MetaObject_Callback cb) { qdesignerobjectinspectorinterface_metaobject_callback = cb; }
    inline void setQDesignerObjectInspectorInterface_Metacast_Callback(QDesignerObjectInspectorInterface_Metacast_Callback cb) { qdesignerobjectinspectorinterface_metacast_callback = cb; }
    inline void setQDesignerObjectInspectorInterface_Metacall_Callback(QDesignerObjectInspectorInterface_Metacall_Callback cb) { qdesignerobjectinspectorinterface_metacall_callback = cb; }
    inline void setQDesignerObjectInspectorInterface_Core_Callback(QDesignerObjectInspectorInterface_Core_Callback cb) { qdesignerobjectinspectorinterface_core_callback = cb; }
    inline void setQDesignerObjectInspectorInterface_SetFormWindow_Callback(QDesignerObjectInspectorInterface_SetFormWindow_Callback cb) { qdesignerobjectinspectorinterface_setformwindow_callback = cb; }
    inline void setQDesignerObjectInspectorInterface_DevType_Callback(QDesignerObjectInspectorInterface_DevType_Callback cb) { qdesignerobjectinspectorinterface_devtype_callback = cb; }
    inline void setQDesignerObjectInspectorInterface_SetVisible_Callback(QDesignerObjectInspectorInterface_SetVisible_Callback cb) { qdesignerobjectinspectorinterface_setvisible_callback = cb; }
    inline void setQDesignerObjectInspectorInterface_SizeHint_Callback(QDesignerObjectInspectorInterface_SizeHint_Callback cb) { qdesignerobjectinspectorinterface_sizehint_callback = cb; }
    inline void setQDesignerObjectInspectorInterface_MinimumSizeHint_Callback(QDesignerObjectInspectorInterface_MinimumSizeHint_Callback cb) { qdesignerobjectinspectorinterface_minimumsizehint_callback = cb; }
    inline void setQDesignerObjectInspectorInterface_HeightForWidth_Callback(QDesignerObjectInspectorInterface_HeightForWidth_Callback cb) { qdesignerobjectinspectorinterface_heightforwidth_callback = cb; }
    inline void setQDesignerObjectInspectorInterface_HasHeightForWidth_Callback(QDesignerObjectInspectorInterface_HasHeightForWidth_Callback cb) { qdesignerobjectinspectorinterface_hasheightforwidth_callback = cb; }
    inline void setQDesignerObjectInspectorInterface_PaintEngine_Callback(QDesignerObjectInspectorInterface_PaintEngine_Callback cb) { qdesignerobjectinspectorinterface_paintengine_callback = cb; }
    inline void setQDesignerObjectInspectorInterface_Event_Callback(QDesignerObjectInspectorInterface_Event_Callback cb) { qdesignerobjectinspectorinterface_event_callback = cb; }
    inline void setQDesignerObjectInspectorInterface_MousePressEvent_Callback(QDesignerObjectInspectorInterface_MousePressEvent_Callback cb) { qdesignerobjectinspectorinterface_mousepressevent_callback = cb; }
    inline void setQDesignerObjectInspectorInterface_MouseReleaseEvent_Callback(QDesignerObjectInspectorInterface_MouseReleaseEvent_Callback cb) { qdesignerobjectinspectorinterface_mousereleaseevent_callback = cb; }
    inline void setQDesignerObjectInspectorInterface_MouseDoubleClickEvent_Callback(QDesignerObjectInspectorInterface_MouseDoubleClickEvent_Callback cb) { qdesignerobjectinspectorinterface_mousedoubleclickevent_callback = cb; }
    inline void setQDesignerObjectInspectorInterface_MouseMoveEvent_Callback(QDesignerObjectInspectorInterface_MouseMoveEvent_Callback cb) { qdesignerobjectinspectorinterface_mousemoveevent_callback = cb; }
    inline void setQDesignerObjectInspectorInterface_WheelEvent_Callback(QDesignerObjectInspectorInterface_WheelEvent_Callback cb) { qdesignerobjectinspectorinterface_wheelevent_callback = cb; }
    inline void setQDesignerObjectInspectorInterface_KeyPressEvent_Callback(QDesignerObjectInspectorInterface_KeyPressEvent_Callback cb) { qdesignerobjectinspectorinterface_keypressevent_callback = cb; }
    inline void setQDesignerObjectInspectorInterface_KeyReleaseEvent_Callback(QDesignerObjectInspectorInterface_KeyReleaseEvent_Callback cb) { qdesignerobjectinspectorinterface_keyreleaseevent_callback = cb; }
    inline void setQDesignerObjectInspectorInterface_FocusInEvent_Callback(QDesignerObjectInspectorInterface_FocusInEvent_Callback cb) { qdesignerobjectinspectorinterface_focusinevent_callback = cb; }
    inline void setQDesignerObjectInspectorInterface_FocusOutEvent_Callback(QDesignerObjectInspectorInterface_FocusOutEvent_Callback cb) { qdesignerobjectinspectorinterface_focusoutevent_callback = cb; }
    inline void setQDesignerObjectInspectorInterface_EnterEvent_Callback(QDesignerObjectInspectorInterface_EnterEvent_Callback cb) { qdesignerobjectinspectorinterface_enterevent_callback = cb; }
    inline void setQDesignerObjectInspectorInterface_LeaveEvent_Callback(QDesignerObjectInspectorInterface_LeaveEvent_Callback cb) { qdesignerobjectinspectorinterface_leaveevent_callback = cb; }
    inline void setQDesignerObjectInspectorInterface_PaintEvent_Callback(QDesignerObjectInspectorInterface_PaintEvent_Callback cb) { qdesignerobjectinspectorinterface_paintevent_callback = cb; }
    inline void setQDesignerObjectInspectorInterface_MoveEvent_Callback(QDesignerObjectInspectorInterface_MoveEvent_Callback cb) { qdesignerobjectinspectorinterface_moveevent_callback = cb; }
    inline void setQDesignerObjectInspectorInterface_ResizeEvent_Callback(QDesignerObjectInspectorInterface_ResizeEvent_Callback cb) { qdesignerobjectinspectorinterface_resizeevent_callback = cb; }
    inline void setQDesignerObjectInspectorInterface_CloseEvent_Callback(QDesignerObjectInspectorInterface_CloseEvent_Callback cb) { qdesignerobjectinspectorinterface_closeevent_callback = cb; }
    inline void setQDesignerObjectInspectorInterface_ContextMenuEvent_Callback(QDesignerObjectInspectorInterface_ContextMenuEvent_Callback cb) { qdesignerobjectinspectorinterface_contextmenuevent_callback = cb; }
    inline void setQDesignerObjectInspectorInterface_TabletEvent_Callback(QDesignerObjectInspectorInterface_TabletEvent_Callback cb) { qdesignerobjectinspectorinterface_tabletevent_callback = cb; }
    inline void setQDesignerObjectInspectorInterface_ActionEvent_Callback(QDesignerObjectInspectorInterface_ActionEvent_Callback cb) { qdesignerobjectinspectorinterface_actionevent_callback = cb; }
    inline void setQDesignerObjectInspectorInterface_DragEnterEvent_Callback(QDesignerObjectInspectorInterface_DragEnterEvent_Callback cb) { qdesignerobjectinspectorinterface_dragenterevent_callback = cb; }
    inline void setQDesignerObjectInspectorInterface_DragMoveEvent_Callback(QDesignerObjectInspectorInterface_DragMoveEvent_Callback cb) { qdesignerobjectinspectorinterface_dragmoveevent_callback = cb; }
    inline void setQDesignerObjectInspectorInterface_DragLeaveEvent_Callback(QDesignerObjectInspectorInterface_DragLeaveEvent_Callback cb) { qdesignerobjectinspectorinterface_dragleaveevent_callback = cb; }
    inline void setQDesignerObjectInspectorInterface_DropEvent_Callback(QDesignerObjectInspectorInterface_DropEvent_Callback cb) { qdesignerobjectinspectorinterface_dropevent_callback = cb; }
    inline void setQDesignerObjectInspectorInterface_ShowEvent_Callback(QDesignerObjectInspectorInterface_ShowEvent_Callback cb) { qdesignerobjectinspectorinterface_showevent_callback = cb; }
    inline void setQDesignerObjectInspectorInterface_HideEvent_Callback(QDesignerObjectInspectorInterface_HideEvent_Callback cb) { qdesignerobjectinspectorinterface_hideevent_callback = cb; }
    inline void setQDesignerObjectInspectorInterface_NativeEvent_Callback(QDesignerObjectInspectorInterface_NativeEvent_Callback cb) { qdesignerobjectinspectorinterface_nativeevent_callback = cb; }
    inline void setQDesignerObjectInspectorInterface_ChangeEvent_Callback(QDesignerObjectInspectorInterface_ChangeEvent_Callback cb) { qdesignerobjectinspectorinterface_changeevent_callback = cb; }
    inline void setQDesignerObjectInspectorInterface_Metric_Callback(QDesignerObjectInspectorInterface_Metric_Callback cb) { qdesignerobjectinspectorinterface_metric_callback = cb; }
    inline void setQDesignerObjectInspectorInterface_InitPainter_Callback(QDesignerObjectInspectorInterface_InitPainter_Callback cb) { qdesignerobjectinspectorinterface_initpainter_callback = cb; }
    inline void setQDesignerObjectInspectorInterface_Redirected_Callback(QDesignerObjectInspectorInterface_Redirected_Callback cb) { qdesignerobjectinspectorinterface_redirected_callback = cb; }
    inline void setQDesignerObjectInspectorInterface_SharedPainter_Callback(QDesignerObjectInspectorInterface_SharedPainter_Callback cb) { qdesignerobjectinspectorinterface_sharedpainter_callback = cb; }
    inline void setQDesignerObjectInspectorInterface_InputMethodEvent_Callback(QDesignerObjectInspectorInterface_InputMethodEvent_Callback cb) { qdesignerobjectinspectorinterface_inputmethodevent_callback = cb; }
    inline void setQDesignerObjectInspectorInterface_InputMethodQuery_Callback(QDesignerObjectInspectorInterface_InputMethodQuery_Callback cb) { qdesignerobjectinspectorinterface_inputmethodquery_callback = cb; }
    inline void setQDesignerObjectInspectorInterface_FocusNextPrevChild_Callback(QDesignerObjectInspectorInterface_FocusNextPrevChild_Callback cb) { qdesignerobjectinspectorinterface_focusnextprevchild_callback = cb; }
    inline void setQDesignerObjectInspectorInterface_EventFilter_Callback(QDesignerObjectInspectorInterface_EventFilter_Callback cb) { qdesignerobjectinspectorinterface_eventfilter_callback = cb; }
    inline void setQDesignerObjectInspectorInterface_TimerEvent_Callback(QDesignerObjectInspectorInterface_TimerEvent_Callback cb) { qdesignerobjectinspectorinterface_timerevent_callback = cb; }
    inline void setQDesignerObjectInspectorInterface_ChildEvent_Callback(QDesignerObjectInspectorInterface_ChildEvent_Callback cb) { qdesignerobjectinspectorinterface_childevent_callback = cb; }
    inline void setQDesignerObjectInspectorInterface_CustomEvent_Callback(QDesignerObjectInspectorInterface_CustomEvent_Callback cb) { qdesignerobjectinspectorinterface_customevent_callback = cb; }
    inline void setQDesignerObjectInspectorInterface_ConnectNotify_Callback(QDesignerObjectInspectorInterface_ConnectNotify_Callback cb) { qdesignerobjectinspectorinterface_connectnotify_callback = cb; }
    inline void setQDesignerObjectInspectorInterface_DisconnectNotify_Callback(QDesignerObjectInspectorInterface_DisconnectNotify_Callback cb) { qdesignerobjectinspectorinterface_disconnectnotify_callback = cb; }
    inline void setQDesignerObjectInspectorInterface_UpdateMicroFocus_Callback(QDesignerObjectInspectorInterface_UpdateMicroFocus_Callback cb) { qdesignerobjectinspectorinterface_updatemicrofocus_callback = cb; }
    inline void setQDesignerObjectInspectorInterface_Create_Callback(QDesignerObjectInspectorInterface_Create_Callback cb) { qdesignerobjectinspectorinterface_create_callback = cb; }
    inline void setQDesignerObjectInspectorInterface_Destroy_Callback(QDesignerObjectInspectorInterface_Destroy_Callback cb) { qdesignerobjectinspectorinterface_destroy_callback = cb; }
    inline void setQDesignerObjectInspectorInterface_FocusNextChild_Callback(QDesignerObjectInspectorInterface_FocusNextChild_Callback cb) { qdesignerobjectinspectorinterface_focusnextchild_callback = cb; }
    inline void setQDesignerObjectInspectorInterface_FocusPreviousChild_Callback(QDesignerObjectInspectorInterface_FocusPreviousChild_Callback cb) { qdesignerobjectinspectorinterface_focuspreviouschild_callback = cb; }
    inline void setQDesignerObjectInspectorInterface_Sender_Callback(QDesignerObjectInspectorInterface_Sender_Callback cb) { qdesignerobjectinspectorinterface_sender_callback = cb; }
    inline void setQDesignerObjectInspectorInterface_SenderSignalIndex_Callback(QDesignerObjectInspectorInterface_SenderSignalIndex_Callback cb) { qdesignerobjectinspectorinterface_sendersignalindex_callback = cb; }
    inline void setQDesignerObjectInspectorInterface_Receivers_Callback(QDesignerObjectInspectorInterface_Receivers_Callback cb) { qdesignerobjectinspectorinterface_receivers_callback = cb; }
    inline void setQDesignerObjectInspectorInterface_IsSignalConnected_Callback(QDesignerObjectInspectorInterface_IsSignalConnected_Callback cb) { qdesignerobjectinspectorinterface_issignalconnected_callback = cb; }
    inline void setQDesignerObjectInspectorInterface_GetDecodedMetricF_Callback(QDesignerObjectInspectorInterface_GetDecodedMetricF_Callback cb) { qdesignerobjectinspectorinterface_getdecodedmetricf_callback = cb; }

    // Base flag setters
    inline void setQDesignerObjectInspectorInterface_MetaObject_IsBase(bool value) const { qdesignerobjectinspectorinterface_metaobject_isbase = value; }
    inline void setQDesignerObjectInspectorInterface_Metacast_IsBase(bool value) const { qdesignerobjectinspectorinterface_metacast_isbase = value; }
    inline void setQDesignerObjectInspectorInterface_Metacall_IsBase(bool value) const { qdesignerobjectinspectorinterface_metacall_isbase = value; }
    inline void setQDesignerObjectInspectorInterface_Core_IsBase(bool value) const { qdesignerobjectinspectorinterface_core_isbase = value; }
    inline void setQDesignerObjectInspectorInterface_SetFormWindow_IsBase(bool value) const { qdesignerobjectinspectorinterface_setformwindow_isbase = value; }
    inline void setQDesignerObjectInspectorInterface_DevType_IsBase(bool value) const { qdesignerobjectinspectorinterface_devtype_isbase = value; }
    inline void setQDesignerObjectInspectorInterface_SetVisible_IsBase(bool value) const { qdesignerobjectinspectorinterface_setvisible_isbase = value; }
    inline void setQDesignerObjectInspectorInterface_SizeHint_IsBase(bool value) const { qdesignerobjectinspectorinterface_sizehint_isbase = value; }
    inline void setQDesignerObjectInspectorInterface_MinimumSizeHint_IsBase(bool value) const { qdesignerobjectinspectorinterface_minimumsizehint_isbase = value; }
    inline void setQDesignerObjectInspectorInterface_HeightForWidth_IsBase(bool value) const { qdesignerobjectinspectorinterface_heightforwidth_isbase = value; }
    inline void setQDesignerObjectInspectorInterface_HasHeightForWidth_IsBase(bool value) const { qdesignerobjectinspectorinterface_hasheightforwidth_isbase = value; }
    inline void setQDesignerObjectInspectorInterface_PaintEngine_IsBase(bool value) const { qdesignerobjectinspectorinterface_paintengine_isbase = value; }
    inline void setQDesignerObjectInspectorInterface_Event_IsBase(bool value) const { qdesignerobjectinspectorinterface_event_isbase = value; }
    inline void setQDesignerObjectInspectorInterface_MousePressEvent_IsBase(bool value) const { qdesignerobjectinspectorinterface_mousepressevent_isbase = value; }
    inline void setQDesignerObjectInspectorInterface_MouseReleaseEvent_IsBase(bool value) const { qdesignerobjectinspectorinterface_mousereleaseevent_isbase = value; }
    inline void setQDesignerObjectInspectorInterface_MouseDoubleClickEvent_IsBase(bool value) const { qdesignerobjectinspectorinterface_mousedoubleclickevent_isbase = value; }
    inline void setQDesignerObjectInspectorInterface_MouseMoveEvent_IsBase(bool value) const { qdesignerobjectinspectorinterface_mousemoveevent_isbase = value; }
    inline void setQDesignerObjectInspectorInterface_WheelEvent_IsBase(bool value) const { qdesignerobjectinspectorinterface_wheelevent_isbase = value; }
    inline void setQDesignerObjectInspectorInterface_KeyPressEvent_IsBase(bool value) const { qdesignerobjectinspectorinterface_keypressevent_isbase = value; }
    inline void setQDesignerObjectInspectorInterface_KeyReleaseEvent_IsBase(bool value) const { qdesignerobjectinspectorinterface_keyreleaseevent_isbase = value; }
    inline void setQDesignerObjectInspectorInterface_FocusInEvent_IsBase(bool value) const { qdesignerobjectinspectorinterface_focusinevent_isbase = value; }
    inline void setQDesignerObjectInspectorInterface_FocusOutEvent_IsBase(bool value) const { qdesignerobjectinspectorinterface_focusoutevent_isbase = value; }
    inline void setQDesignerObjectInspectorInterface_EnterEvent_IsBase(bool value) const { qdesignerobjectinspectorinterface_enterevent_isbase = value; }
    inline void setQDesignerObjectInspectorInterface_LeaveEvent_IsBase(bool value) const { qdesignerobjectinspectorinterface_leaveevent_isbase = value; }
    inline void setQDesignerObjectInspectorInterface_PaintEvent_IsBase(bool value) const { qdesignerobjectinspectorinterface_paintevent_isbase = value; }
    inline void setQDesignerObjectInspectorInterface_MoveEvent_IsBase(bool value) const { qdesignerobjectinspectorinterface_moveevent_isbase = value; }
    inline void setQDesignerObjectInspectorInterface_ResizeEvent_IsBase(bool value) const { qdesignerobjectinspectorinterface_resizeevent_isbase = value; }
    inline void setQDesignerObjectInspectorInterface_CloseEvent_IsBase(bool value) const { qdesignerobjectinspectorinterface_closeevent_isbase = value; }
    inline void setQDesignerObjectInspectorInterface_ContextMenuEvent_IsBase(bool value) const { qdesignerobjectinspectorinterface_contextmenuevent_isbase = value; }
    inline void setQDesignerObjectInspectorInterface_TabletEvent_IsBase(bool value) const { qdesignerobjectinspectorinterface_tabletevent_isbase = value; }
    inline void setQDesignerObjectInspectorInterface_ActionEvent_IsBase(bool value) const { qdesignerobjectinspectorinterface_actionevent_isbase = value; }
    inline void setQDesignerObjectInspectorInterface_DragEnterEvent_IsBase(bool value) const { qdesignerobjectinspectorinterface_dragenterevent_isbase = value; }
    inline void setQDesignerObjectInspectorInterface_DragMoveEvent_IsBase(bool value) const { qdesignerobjectinspectorinterface_dragmoveevent_isbase = value; }
    inline void setQDesignerObjectInspectorInterface_DragLeaveEvent_IsBase(bool value) const { qdesignerobjectinspectorinterface_dragleaveevent_isbase = value; }
    inline void setQDesignerObjectInspectorInterface_DropEvent_IsBase(bool value) const { qdesignerobjectinspectorinterface_dropevent_isbase = value; }
    inline void setQDesignerObjectInspectorInterface_ShowEvent_IsBase(bool value) const { qdesignerobjectinspectorinterface_showevent_isbase = value; }
    inline void setQDesignerObjectInspectorInterface_HideEvent_IsBase(bool value) const { qdesignerobjectinspectorinterface_hideevent_isbase = value; }
    inline void setQDesignerObjectInspectorInterface_NativeEvent_IsBase(bool value) const { qdesignerobjectinspectorinterface_nativeevent_isbase = value; }
    inline void setQDesignerObjectInspectorInterface_ChangeEvent_IsBase(bool value) const { qdesignerobjectinspectorinterface_changeevent_isbase = value; }
    inline void setQDesignerObjectInspectorInterface_Metric_IsBase(bool value) const { qdesignerobjectinspectorinterface_metric_isbase = value; }
    inline void setQDesignerObjectInspectorInterface_InitPainter_IsBase(bool value) const { qdesignerobjectinspectorinterface_initpainter_isbase = value; }
    inline void setQDesignerObjectInspectorInterface_Redirected_IsBase(bool value) const { qdesignerobjectinspectorinterface_redirected_isbase = value; }
    inline void setQDesignerObjectInspectorInterface_SharedPainter_IsBase(bool value) const { qdesignerobjectinspectorinterface_sharedpainter_isbase = value; }
    inline void setQDesignerObjectInspectorInterface_InputMethodEvent_IsBase(bool value) const { qdesignerobjectinspectorinterface_inputmethodevent_isbase = value; }
    inline void setQDesignerObjectInspectorInterface_InputMethodQuery_IsBase(bool value) const { qdesignerobjectinspectorinterface_inputmethodquery_isbase = value; }
    inline void setQDesignerObjectInspectorInterface_FocusNextPrevChild_IsBase(bool value) const { qdesignerobjectinspectorinterface_focusnextprevchild_isbase = value; }
    inline void setQDesignerObjectInspectorInterface_EventFilter_IsBase(bool value) const { qdesignerobjectinspectorinterface_eventfilter_isbase = value; }
    inline void setQDesignerObjectInspectorInterface_TimerEvent_IsBase(bool value) const { qdesignerobjectinspectorinterface_timerevent_isbase = value; }
    inline void setQDesignerObjectInspectorInterface_ChildEvent_IsBase(bool value) const { qdesignerobjectinspectorinterface_childevent_isbase = value; }
    inline void setQDesignerObjectInspectorInterface_CustomEvent_IsBase(bool value) const { qdesignerobjectinspectorinterface_customevent_isbase = value; }
    inline void setQDesignerObjectInspectorInterface_ConnectNotify_IsBase(bool value) const { qdesignerobjectinspectorinterface_connectnotify_isbase = value; }
    inline void setQDesignerObjectInspectorInterface_DisconnectNotify_IsBase(bool value) const { qdesignerobjectinspectorinterface_disconnectnotify_isbase = value; }
    inline void setQDesignerObjectInspectorInterface_UpdateMicroFocus_IsBase(bool value) const { qdesignerobjectinspectorinterface_updatemicrofocus_isbase = value; }
    inline void setQDesignerObjectInspectorInterface_Create_IsBase(bool value) const { qdesignerobjectinspectorinterface_create_isbase = value; }
    inline void setQDesignerObjectInspectorInterface_Destroy_IsBase(bool value) const { qdesignerobjectinspectorinterface_destroy_isbase = value; }
    inline void setQDesignerObjectInspectorInterface_FocusNextChild_IsBase(bool value) const { qdesignerobjectinspectorinterface_focusnextchild_isbase = value; }
    inline void setQDesignerObjectInspectorInterface_FocusPreviousChild_IsBase(bool value) const { qdesignerobjectinspectorinterface_focuspreviouschild_isbase = value; }
    inline void setQDesignerObjectInspectorInterface_Sender_IsBase(bool value) const { qdesignerobjectinspectorinterface_sender_isbase = value; }
    inline void setQDesignerObjectInspectorInterface_SenderSignalIndex_IsBase(bool value) const { qdesignerobjectinspectorinterface_sendersignalindex_isbase = value; }
    inline void setQDesignerObjectInspectorInterface_Receivers_IsBase(bool value) const { qdesignerobjectinspectorinterface_receivers_isbase = value; }
    inline void setQDesignerObjectInspectorInterface_IsSignalConnected_IsBase(bool value) const { qdesignerobjectinspectorinterface_issignalconnected_isbase = value; }
    inline void setQDesignerObjectInspectorInterface_GetDecodedMetricF_IsBase(bool value) const { qdesignerobjectinspectorinterface_getdecodedmetricf_isbase = value; }

    // Virtual method for C ABI access and custom callback
    virtual const QMetaObject* metaObject() const override {
        if (qdesignerobjectinspectorinterface_metaobject_isbase) {
            qdesignerobjectinspectorinterface_metaobject_isbase = false;
            return QDesignerObjectInspectorInterface::metaObject();
        } else if (qdesignerobjectinspectorinterface_metaobject_callback != nullptr) {
            QMetaObject* callback_ret = qdesignerobjectinspectorinterface_metaobject_callback();
            return callback_ret;
        } else {
            return QDesignerObjectInspectorInterface::metaObject();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void* qt_metacast(const char* param1) override {
        if (qdesignerobjectinspectorinterface_metacast_isbase) {
            qdesignerobjectinspectorinterface_metacast_isbase = false;
            return QDesignerObjectInspectorInterface::qt_metacast(param1);
        } else if (qdesignerobjectinspectorinterface_metacast_callback != nullptr) {
            const char* cbval1 = (const char*)param1;

            void* callback_ret = qdesignerobjectinspectorinterface_metacast_callback(this, cbval1);
            return callback_ret;
        } else {
            return QDesignerObjectInspectorInterface::qt_metacast(param1);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (qdesignerobjectinspectorinterface_metacall_isbase) {
            qdesignerobjectinspectorinterface_metacall_isbase = false;
            return QDesignerObjectInspectorInterface::qt_metacall(param1, param2, param3);
        } else if (qdesignerobjectinspectorinterface_metacall_callback != nullptr) {
            int cbval1 = static_cast<int>(param1);
            int cbval2 = param2;
            void** cbval3 = param3;

            int callback_ret = qdesignerobjectinspectorinterface_metacall_callback(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        } else {
            return QDesignerObjectInspectorInterface::qt_metacall(param1, param2, param3);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QDesignerFormEditorInterface* core() const override {
        if (qdesignerobjectinspectorinterface_core_isbase) {
            qdesignerobjectinspectorinterface_core_isbase = false;
            return QDesignerObjectInspectorInterface::core();
        } else if (qdesignerobjectinspectorinterface_core_callback != nullptr) {
            QDesignerFormEditorInterface* callback_ret = qdesignerobjectinspectorinterface_core_callback();
            return callback_ret;
        } else {
            return QDesignerObjectInspectorInterface::core();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void setFormWindow(QDesignerFormWindowInterface* formWindow) override {
        if (qdesignerobjectinspectorinterface_setformwindow_callback != nullptr) {
            QDesignerFormWindowInterface* cbval1 = formWindow;

            qdesignerobjectinspectorinterface_setformwindow_callback(this, cbval1);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual int devType() const override {
        if (qdesignerobjectinspectorinterface_devtype_isbase) {
            qdesignerobjectinspectorinterface_devtype_isbase = false;
            return QDesignerObjectInspectorInterface::devType();
        } else if (qdesignerobjectinspectorinterface_devtype_callback != nullptr) {
            int callback_ret = qdesignerobjectinspectorinterface_devtype_callback();
            return static_cast<int>(callback_ret);
        } else {
            return QDesignerObjectInspectorInterface::devType();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void setVisible(bool visible) override {
        if (qdesignerobjectinspectorinterface_setvisible_isbase) {
            qdesignerobjectinspectorinterface_setvisible_isbase = false;
            QDesignerObjectInspectorInterface::setVisible(visible);
        } else if (qdesignerobjectinspectorinterface_setvisible_callback != nullptr) {
            bool cbval1 = visible;

            qdesignerobjectinspectorinterface_setvisible_callback(this, cbval1);
        } else {
            QDesignerObjectInspectorInterface::setVisible(visible);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QSize sizeHint() const override {
        if (qdesignerobjectinspectorinterface_sizehint_isbase) {
            qdesignerobjectinspectorinterface_sizehint_isbase = false;
            return QDesignerObjectInspectorInterface::sizeHint();
        } else if (qdesignerobjectinspectorinterface_sizehint_callback != nullptr) {
            QSize* callback_ret = qdesignerobjectinspectorinterface_sizehint_callback();
            return *callback_ret;
        } else {
            return QDesignerObjectInspectorInterface::sizeHint();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QSize minimumSizeHint() const override {
        if (qdesignerobjectinspectorinterface_minimumsizehint_isbase) {
            qdesignerobjectinspectorinterface_minimumsizehint_isbase = false;
            return QDesignerObjectInspectorInterface::minimumSizeHint();
        } else if (qdesignerobjectinspectorinterface_minimumsizehint_callback != nullptr) {
            QSize* callback_ret = qdesignerobjectinspectorinterface_minimumsizehint_callback();
            return *callback_ret;
        } else {
            return QDesignerObjectInspectorInterface::minimumSizeHint();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual int heightForWidth(int param1) const override {
        if (qdesignerobjectinspectorinterface_heightforwidth_isbase) {
            qdesignerobjectinspectorinterface_heightforwidth_isbase = false;
            return QDesignerObjectInspectorInterface::heightForWidth(param1);
        } else if (qdesignerobjectinspectorinterface_heightforwidth_callback != nullptr) {
            int cbval1 = param1;

            int callback_ret = qdesignerobjectinspectorinterface_heightforwidth_callback(this, cbval1);
            return static_cast<int>(callback_ret);
        } else {
            return QDesignerObjectInspectorInterface::heightForWidth(param1);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool hasHeightForWidth() const override {
        if (qdesignerobjectinspectorinterface_hasheightforwidth_isbase) {
            qdesignerobjectinspectorinterface_hasheightforwidth_isbase = false;
            return QDesignerObjectInspectorInterface::hasHeightForWidth();
        } else if (qdesignerobjectinspectorinterface_hasheightforwidth_callback != nullptr) {
            bool callback_ret = qdesignerobjectinspectorinterface_hasheightforwidth_callback();
            return callback_ret;
        } else {
            return QDesignerObjectInspectorInterface::hasHeightForWidth();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QPaintEngine* paintEngine() const override {
        if (qdesignerobjectinspectorinterface_paintengine_isbase) {
            qdesignerobjectinspectorinterface_paintengine_isbase = false;
            return QDesignerObjectInspectorInterface::paintEngine();
        } else if (qdesignerobjectinspectorinterface_paintengine_callback != nullptr) {
            QPaintEngine* callback_ret = qdesignerobjectinspectorinterface_paintengine_callback();
            return callback_ret;
        } else {
            return QDesignerObjectInspectorInterface::paintEngine();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* event) override {
        if (qdesignerobjectinspectorinterface_event_isbase) {
            qdesignerobjectinspectorinterface_event_isbase = false;
            return QDesignerObjectInspectorInterface::event(event);
        } else if (qdesignerobjectinspectorinterface_event_callback != nullptr) {
            QEvent* cbval1 = event;

            bool callback_ret = qdesignerobjectinspectorinterface_event_callback(this, cbval1);
            return callback_ret;
        } else {
            return QDesignerObjectInspectorInterface::event(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void mousePressEvent(QMouseEvent* event) override {
        if (qdesignerobjectinspectorinterface_mousepressevent_isbase) {
            qdesignerobjectinspectorinterface_mousepressevent_isbase = false;
            QDesignerObjectInspectorInterface::mousePressEvent(event);
        } else if (qdesignerobjectinspectorinterface_mousepressevent_callback != nullptr) {
            QMouseEvent* cbval1 = event;

            qdesignerobjectinspectorinterface_mousepressevent_callback(this, cbval1);
        } else {
            QDesignerObjectInspectorInterface::mousePressEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseReleaseEvent(QMouseEvent* event) override {
        if (qdesignerobjectinspectorinterface_mousereleaseevent_isbase) {
            qdesignerobjectinspectorinterface_mousereleaseevent_isbase = false;
            QDesignerObjectInspectorInterface::mouseReleaseEvent(event);
        } else if (qdesignerobjectinspectorinterface_mousereleaseevent_callback != nullptr) {
            QMouseEvent* cbval1 = event;

            qdesignerobjectinspectorinterface_mousereleaseevent_callback(this, cbval1);
        } else {
            QDesignerObjectInspectorInterface::mouseReleaseEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseDoubleClickEvent(QMouseEvent* event) override {
        if (qdesignerobjectinspectorinterface_mousedoubleclickevent_isbase) {
            qdesignerobjectinspectorinterface_mousedoubleclickevent_isbase = false;
            QDesignerObjectInspectorInterface::mouseDoubleClickEvent(event);
        } else if (qdesignerobjectinspectorinterface_mousedoubleclickevent_callback != nullptr) {
            QMouseEvent* cbval1 = event;

            qdesignerobjectinspectorinterface_mousedoubleclickevent_callback(this, cbval1);
        } else {
            QDesignerObjectInspectorInterface::mouseDoubleClickEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseMoveEvent(QMouseEvent* event) override {
        if (qdesignerobjectinspectorinterface_mousemoveevent_isbase) {
            qdesignerobjectinspectorinterface_mousemoveevent_isbase = false;
            QDesignerObjectInspectorInterface::mouseMoveEvent(event);
        } else if (qdesignerobjectinspectorinterface_mousemoveevent_callback != nullptr) {
            QMouseEvent* cbval1 = event;

            qdesignerobjectinspectorinterface_mousemoveevent_callback(this, cbval1);
        } else {
            QDesignerObjectInspectorInterface::mouseMoveEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void wheelEvent(QWheelEvent* event) override {
        if (qdesignerobjectinspectorinterface_wheelevent_isbase) {
            qdesignerobjectinspectorinterface_wheelevent_isbase = false;
            QDesignerObjectInspectorInterface::wheelEvent(event);
        } else if (qdesignerobjectinspectorinterface_wheelevent_callback != nullptr) {
            QWheelEvent* cbval1 = event;

            qdesignerobjectinspectorinterface_wheelevent_callback(this, cbval1);
        } else {
            QDesignerObjectInspectorInterface::wheelEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void keyPressEvent(QKeyEvent* event) override {
        if (qdesignerobjectinspectorinterface_keypressevent_isbase) {
            qdesignerobjectinspectorinterface_keypressevent_isbase = false;
            QDesignerObjectInspectorInterface::keyPressEvent(event);
        } else if (qdesignerobjectinspectorinterface_keypressevent_callback != nullptr) {
            QKeyEvent* cbval1 = event;

            qdesignerobjectinspectorinterface_keypressevent_callback(this, cbval1);
        } else {
            QDesignerObjectInspectorInterface::keyPressEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void keyReleaseEvent(QKeyEvent* event) override {
        if (qdesignerobjectinspectorinterface_keyreleaseevent_isbase) {
            qdesignerobjectinspectorinterface_keyreleaseevent_isbase = false;
            QDesignerObjectInspectorInterface::keyReleaseEvent(event);
        } else if (qdesignerobjectinspectorinterface_keyreleaseevent_callback != nullptr) {
            QKeyEvent* cbval1 = event;

            qdesignerobjectinspectorinterface_keyreleaseevent_callback(this, cbval1);
        } else {
            QDesignerObjectInspectorInterface::keyReleaseEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void focusInEvent(QFocusEvent* event) override {
        if (qdesignerobjectinspectorinterface_focusinevent_isbase) {
            qdesignerobjectinspectorinterface_focusinevent_isbase = false;
            QDesignerObjectInspectorInterface::focusInEvent(event);
        } else if (qdesignerobjectinspectorinterface_focusinevent_callback != nullptr) {
            QFocusEvent* cbval1 = event;

            qdesignerobjectinspectorinterface_focusinevent_callback(this, cbval1);
        } else {
            QDesignerObjectInspectorInterface::focusInEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void focusOutEvent(QFocusEvent* event) override {
        if (qdesignerobjectinspectorinterface_focusoutevent_isbase) {
            qdesignerobjectinspectorinterface_focusoutevent_isbase = false;
            QDesignerObjectInspectorInterface::focusOutEvent(event);
        } else if (qdesignerobjectinspectorinterface_focusoutevent_callback != nullptr) {
            QFocusEvent* cbval1 = event;

            qdesignerobjectinspectorinterface_focusoutevent_callback(this, cbval1);
        } else {
            QDesignerObjectInspectorInterface::focusOutEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void enterEvent(QEnterEvent* event) override {
        if (qdesignerobjectinspectorinterface_enterevent_isbase) {
            qdesignerobjectinspectorinterface_enterevent_isbase = false;
            QDesignerObjectInspectorInterface::enterEvent(event);
        } else if (qdesignerobjectinspectorinterface_enterevent_callback != nullptr) {
            QEnterEvent* cbval1 = event;

            qdesignerobjectinspectorinterface_enterevent_callback(this, cbval1);
        } else {
            QDesignerObjectInspectorInterface::enterEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void leaveEvent(QEvent* event) override {
        if (qdesignerobjectinspectorinterface_leaveevent_isbase) {
            qdesignerobjectinspectorinterface_leaveevent_isbase = false;
            QDesignerObjectInspectorInterface::leaveEvent(event);
        } else if (qdesignerobjectinspectorinterface_leaveevent_callback != nullptr) {
            QEvent* cbval1 = event;

            qdesignerobjectinspectorinterface_leaveevent_callback(this, cbval1);
        } else {
            QDesignerObjectInspectorInterface::leaveEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void paintEvent(QPaintEvent* event) override {
        if (qdesignerobjectinspectorinterface_paintevent_isbase) {
            qdesignerobjectinspectorinterface_paintevent_isbase = false;
            QDesignerObjectInspectorInterface::paintEvent(event);
        } else if (qdesignerobjectinspectorinterface_paintevent_callback != nullptr) {
            QPaintEvent* cbval1 = event;

            qdesignerobjectinspectorinterface_paintevent_callback(this, cbval1);
        } else {
            QDesignerObjectInspectorInterface::paintEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void moveEvent(QMoveEvent* event) override {
        if (qdesignerobjectinspectorinterface_moveevent_isbase) {
            qdesignerobjectinspectorinterface_moveevent_isbase = false;
            QDesignerObjectInspectorInterface::moveEvent(event);
        } else if (qdesignerobjectinspectorinterface_moveevent_callback != nullptr) {
            QMoveEvent* cbval1 = event;

            qdesignerobjectinspectorinterface_moveevent_callback(this, cbval1);
        } else {
            QDesignerObjectInspectorInterface::moveEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void resizeEvent(QResizeEvent* event) override {
        if (qdesignerobjectinspectorinterface_resizeevent_isbase) {
            qdesignerobjectinspectorinterface_resizeevent_isbase = false;
            QDesignerObjectInspectorInterface::resizeEvent(event);
        } else if (qdesignerobjectinspectorinterface_resizeevent_callback != nullptr) {
            QResizeEvent* cbval1 = event;

            qdesignerobjectinspectorinterface_resizeevent_callback(this, cbval1);
        } else {
            QDesignerObjectInspectorInterface::resizeEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void closeEvent(QCloseEvent* event) override {
        if (qdesignerobjectinspectorinterface_closeevent_isbase) {
            qdesignerobjectinspectorinterface_closeevent_isbase = false;
            QDesignerObjectInspectorInterface::closeEvent(event);
        } else if (qdesignerobjectinspectorinterface_closeevent_callback != nullptr) {
            QCloseEvent* cbval1 = event;

            qdesignerobjectinspectorinterface_closeevent_callback(this, cbval1);
        } else {
            QDesignerObjectInspectorInterface::closeEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void contextMenuEvent(QContextMenuEvent* event) override {
        if (qdesignerobjectinspectorinterface_contextmenuevent_isbase) {
            qdesignerobjectinspectorinterface_contextmenuevent_isbase = false;
            QDesignerObjectInspectorInterface::contextMenuEvent(event);
        } else if (qdesignerobjectinspectorinterface_contextmenuevent_callback != nullptr) {
            QContextMenuEvent* cbval1 = event;

            qdesignerobjectinspectorinterface_contextmenuevent_callback(this, cbval1);
        } else {
            QDesignerObjectInspectorInterface::contextMenuEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void tabletEvent(QTabletEvent* event) override {
        if (qdesignerobjectinspectorinterface_tabletevent_isbase) {
            qdesignerobjectinspectorinterface_tabletevent_isbase = false;
            QDesignerObjectInspectorInterface::tabletEvent(event);
        } else if (qdesignerobjectinspectorinterface_tabletevent_callback != nullptr) {
            QTabletEvent* cbval1 = event;

            qdesignerobjectinspectorinterface_tabletevent_callback(this, cbval1);
        } else {
            QDesignerObjectInspectorInterface::tabletEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void actionEvent(QActionEvent* event) override {
        if (qdesignerobjectinspectorinterface_actionevent_isbase) {
            qdesignerobjectinspectorinterface_actionevent_isbase = false;
            QDesignerObjectInspectorInterface::actionEvent(event);
        } else if (qdesignerobjectinspectorinterface_actionevent_callback != nullptr) {
            QActionEvent* cbval1 = event;

            qdesignerobjectinspectorinterface_actionevent_callback(this, cbval1);
        } else {
            QDesignerObjectInspectorInterface::actionEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragEnterEvent(QDragEnterEvent* event) override {
        if (qdesignerobjectinspectorinterface_dragenterevent_isbase) {
            qdesignerobjectinspectorinterface_dragenterevent_isbase = false;
            QDesignerObjectInspectorInterface::dragEnterEvent(event);
        } else if (qdesignerobjectinspectorinterface_dragenterevent_callback != nullptr) {
            QDragEnterEvent* cbval1 = event;

            qdesignerobjectinspectorinterface_dragenterevent_callback(this, cbval1);
        } else {
            QDesignerObjectInspectorInterface::dragEnterEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragMoveEvent(QDragMoveEvent* event) override {
        if (qdesignerobjectinspectorinterface_dragmoveevent_isbase) {
            qdesignerobjectinspectorinterface_dragmoveevent_isbase = false;
            QDesignerObjectInspectorInterface::dragMoveEvent(event);
        } else if (qdesignerobjectinspectorinterface_dragmoveevent_callback != nullptr) {
            QDragMoveEvent* cbval1 = event;

            qdesignerobjectinspectorinterface_dragmoveevent_callback(this, cbval1);
        } else {
            QDesignerObjectInspectorInterface::dragMoveEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragLeaveEvent(QDragLeaveEvent* event) override {
        if (qdesignerobjectinspectorinterface_dragleaveevent_isbase) {
            qdesignerobjectinspectorinterface_dragleaveevent_isbase = false;
            QDesignerObjectInspectorInterface::dragLeaveEvent(event);
        } else if (qdesignerobjectinspectorinterface_dragleaveevent_callback != nullptr) {
            QDragLeaveEvent* cbval1 = event;

            qdesignerobjectinspectorinterface_dragleaveevent_callback(this, cbval1);
        } else {
            QDesignerObjectInspectorInterface::dragLeaveEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void dropEvent(QDropEvent* event) override {
        if (qdesignerobjectinspectorinterface_dropevent_isbase) {
            qdesignerobjectinspectorinterface_dropevent_isbase = false;
            QDesignerObjectInspectorInterface::dropEvent(event);
        } else if (qdesignerobjectinspectorinterface_dropevent_callback != nullptr) {
            QDropEvent* cbval1 = event;

            qdesignerobjectinspectorinterface_dropevent_callback(this, cbval1);
        } else {
            QDesignerObjectInspectorInterface::dropEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void showEvent(QShowEvent* event) override {
        if (qdesignerobjectinspectorinterface_showevent_isbase) {
            qdesignerobjectinspectorinterface_showevent_isbase = false;
            QDesignerObjectInspectorInterface::showEvent(event);
        } else if (qdesignerobjectinspectorinterface_showevent_callback != nullptr) {
            QShowEvent* cbval1 = event;

            qdesignerobjectinspectorinterface_showevent_callback(this, cbval1);
        } else {
            QDesignerObjectInspectorInterface::showEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void hideEvent(QHideEvent* event) override {
        if (qdesignerobjectinspectorinterface_hideevent_isbase) {
            qdesignerobjectinspectorinterface_hideevent_isbase = false;
            QDesignerObjectInspectorInterface::hideEvent(event);
        } else if (qdesignerobjectinspectorinterface_hideevent_callback != nullptr) {
            QHideEvent* cbval1 = event;

            qdesignerobjectinspectorinterface_hideevent_callback(this, cbval1);
        } else {
            QDesignerObjectInspectorInterface::hideEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool nativeEvent(const QByteArray& eventType, void* message, qintptr* result) override {
        if (qdesignerobjectinspectorinterface_nativeevent_isbase) {
            qdesignerobjectinspectorinterface_nativeevent_isbase = false;
            return QDesignerObjectInspectorInterface::nativeEvent(eventType, message, result);
        } else if (qdesignerobjectinspectorinterface_nativeevent_callback != nullptr) {
            const QByteArray eventType_qb = eventType;
            libqt_string eventType_str;
            eventType_str.len = eventType_qb.length();
            eventType_str.data = static_cast<char*>(malloc(eventType_str.len));
            memcpy((void*)eventType_str.data, eventType_qb.data(), eventType_str.len);
            libqt_string cbval1 = eventType_str;
            void* cbval2 = message;
            qintptr* result_ret = result;
            intptr_t* cbval3 = (intptr_t*)(result_ret);

            bool callback_ret = qdesignerobjectinspectorinterface_nativeevent_callback(this, cbval1, cbval2, cbval3);
            return callback_ret;
        } else {
            return QDesignerObjectInspectorInterface::nativeEvent(eventType, message, result);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void changeEvent(QEvent* param1) override {
        if (qdesignerobjectinspectorinterface_changeevent_isbase) {
            qdesignerobjectinspectorinterface_changeevent_isbase = false;
            QDesignerObjectInspectorInterface::changeEvent(param1);
        } else if (qdesignerobjectinspectorinterface_changeevent_callback != nullptr) {
            QEvent* cbval1 = param1;

            qdesignerobjectinspectorinterface_changeevent_callback(this, cbval1);
        } else {
            QDesignerObjectInspectorInterface::changeEvent(param1);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual int metric(QPaintDevice::PaintDeviceMetric param1) const override {
        if (qdesignerobjectinspectorinterface_metric_isbase) {
            qdesignerobjectinspectorinterface_metric_isbase = false;
            return QDesignerObjectInspectorInterface::metric(param1);
        } else if (qdesignerobjectinspectorinterface_metric_callback != nullptr) {
            int cbval1 = static_cast<int>(param1);

            int callback_ret = qdesignerobjectinspectorinterface_metric_callback(this, cbval1);
            return static_cast<int>(callback_ret);
        } else {
            return QDesignerObjectInspectorInterface::metric(param1);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void initPainter(QPainter* painter) const override {
        if (qdesignerobjectinspectorinterface_initpainter_isbase) {
            qdesignerobjectinspectorinterface_initpainter_isbase = false;
            QDesignerObjectInspectorInterface::initPainter(painter);
        } else if (qdesignerobjectinspectorinterface_initpainter_callback != nullptr) {
            QPainter* cbval1 = painter;

            qdesignerobjectinspectorinterface_initpainter_callback(this, cbval1);
        } else {
            QDesignerObjectInspectorInterface::initPainter(painter);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QPaintDevice* redirected(QPoint* offset) const override {
        if (qdesignerobjectinspectorinterface_redirected_isbase) {
            qdesignerobjectinspectorinterface_redirected_isbase = false;
            return QDesignerObjectInspectorInterface::redirected(offset);
        } else if (qdesignerobjectinspectorinterface_redirected_callback != nullptr) {
            QPoint* cbval1 = offset;

            QPaintDevice* callback_ret = qdesignerobjectinspectorinterface_redirected_callback(this, cbval1);
            return callback_ret;
        } else {
            return QDesignerObjectInspectorInterface::redirected(offset);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QPainter* sharedPainter() const override {
        if (qdesignerobjectinspectorinterface_sharedpainter_isbase) {
            qdesignerobjectinspectorinterface_sharedpainter_isbase = false;
            return QDesignerObjectInspectorInterface::sharedPainter();
        } else if (qdesignerobjectinspectorinterface_sharedpainter_callback != nullptr) {
            QPainter* callback_ret = qdesignerobjectinspectorinterface_sharedpainter_callback();
            return callback_ret;
        } else {
            return QDesignerObjectInspectorInterface::sharedPainter();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void inputMethodEvent(QInputMethodEvent* param1) override {
        if (qdesignerobjectinspectorinterface_inputmethodevent_isbase) {
            qdesignerobjectinspectorinterface_inputmethodevent_isbase = false;
            QDesignerObjectInspectorInterface::inputMethodEvent(param1);
        } else if (qdesignerobjectinspectorinterface_inputmethodevent_callback != nullptr) {
            QInputMethodEvent* cbval1 = param1;

            qdesignerobjectinspectorinterface_inputmethodevent_callback(this, cbval1);
        } else {
            QDesignerObjectInspectorInterface::inputMethodEvent(param1);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QVariant inputMethodQuery(Qt::InputMethodQuery param1) const override {
        if (qdesignerobjectinspectorinterface_inputmethodquery_isbase) {
            qdesignerobjectinspectorinterface_inputmethodquery_isbase = false;
            return QDesignerObjectInspectorInterface::inputMethodQuery(param1);
        } else if (qdesignerobjectinspectorinterface_inputmethodquery_callback != nullptr) {
            int cbval1 = static_cast<int>(param1);

            QVariant* callback_ret = qdesignerobjectinspectorinterface_inputmethodquery_callback(this, cbval1);
            return *callback_ret;
        } else {
            return QDesignerObjectInspectorInterface::inputMethodQuery(param1);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool focusNextPrevChild(bool next) override {
        if (qdesignerobjectinspectorinterface_focusnextprevchild_isbase) {
            qdesignerobjectinspectorinterface_focusnextprevchild_isbase = false;
            return QDesignerObjectInspectorInterface::focusNextPrevChild(next);
        } else if (qdesignerobjectinspectorinterface_focusnextprevchild_callback != nullptr) {
            bool cbval1 = next;

            bool callback_ret = qdesignerobjectinspectorinterface_focusnextprevchild_callback(this, cbval1);
            return callback_ret;
        } else {
            return QDesignerObjectInspectorInterface::focusNextPrevChild(next);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* watched, QEvent* event) override {
        if (qdesignerobjectinspectorinterface_eventfilter_isbase) {
            qdesignerobjectinspectorinterface_eventfilter_isbase = false;
            return QDesignerObjectInspectorInterface::eventFilter(watched, event);
        } else if (qdesignerobjectinspectorinterface_eventfilter_callback != nullptr) {
            QObject* cbval1 = watched;
            QEvent* cbval2 = event;

            bool callback_ret = qdesignerobjectinspectorinterface_eventfilter_callback(this, cbval1, cbval2);
            return callback_ret;
        } else {
            return QDesignerObjectInspectorInterface::eventFilter(watched, event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (qdesignerobjectinspectorinterface_timerevent_isbase) {
            qdesignerobjectinspectorinterface_timerevent_isbase = false;
            QDesignerObjectInspectorInterface::timerEvent(event);
        } else if (qdesignerobjectinspectorinterface_timerevent_callback != nullptr) {
            QTimerEvent* cbval1 = event;

            qdesignerobjectinspectorinterface_timerevent_callback(this, cbval1);
        } else {
            QDesignerObjectInspectorInterface::timerEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (qdesignerobjectinspectorinterface_childevent_isbase) {
            qdesignerobjectinspectorinterface_childevent_isbase = false;
            QDesignerObjectInspectorInterface::childEvent(event);
        } else if (qdesignerobjectinspectorinterface_childevent_callback != nullptr) {
            QChildEvent* cbval1 = event;

            qdesignerobjectinspectorinterface_childevent_callback(this, cbval1);
        } else {
            QDesignerObjectInspectorInterface::childEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (qdesignerobjectinspectorinterface_customevent_isbase) {
            qdesignerobjectinspectorinterface_customevent_isbase = false;
            QDesignerObjectInspectorInterface::customEvent(event);
        } else if (qdesignerobjectinspectorinterface_customevent_callback != nullptr) {
            QEvent* cbval1 = event;

            qdesignerobjectinspectorinterface_customevent_callback(this, cbval1);
        } else {
            QDesignerObjectInspectorInterface::customEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (qdesignerobjectinspectorinterface_connectnotify_isbase) {
            qdesignerobjectinspectorinterface_connectnotify_isbase = false;
            QDesignerObjectInspectorInterface::connectNotify(signal);
        } else if (qdesignerobjectinspectorinterface_connectnotify_callback != nullptr) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            qdesignerobjectinspectorinterface_connectnotify_callback(this, cbval1);
        } else {
            QDesignerObjectInspectorInterface::connectNotify(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (qdesignerobjectinspectorinterface_disconnectnotify_isbase) {
            qdesignerobjectinspectorinterface_disconnectnotify_isbase = false;
            QDesignerObjectInspectorInterface::disconnectNotify(signal);
        } else if (qdesignerobjectinspectorinterface_disconnectnotify_callback != nullptr) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            qdesignerobjectinspectorinterface_disconnectnotify_callback(this, cbval1);
        } else {
            QDesignerObjectInspectorInterface::disconnectNotify(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    void updateMicroFocus() {
        if (qdesignerobjectinspectorinterface_updatemicrofocus_isbase) {
            qdesignerobjectinspectorinterface_updatemicrofocus_isbase = false;
            QDesignerObjectInspectorInterface::updateMicroFocus();
        } else if (qdesignerobjectinspectorinterface_updatemicrofocus_callback != nullptr) {
            qdesignerobjectinspectorinterface_updatemicrofocus_callback();
        } else {
            QDesignerObjectInspectorInterface::updateMicroFocus();
        }
    }

    // Virtual method for C ABI access and custom callback
    void create() {
        if (qdesignerobjectinspectorinterface_create_isbase) {
            qdesignerobjectinspectorinterface_create_isbase = false;
            QDesignerObjectInspectorInterface::create();
        } else if (qdesignerobjectinspectorinterface_create_callback != nullptr) {
            qdesignerobjectinspectorinterface_create_callback();
        } else {
            QDesignerObjectInspectorInterface::create();
        }
    }

    // Virtual method for C ABI access and custom callback
    void destroy() {
        if (qdesignerobjectinspectorinterface_destroy_isbase) {
            qdesignerobjectinspectorinterface_destroy_isbase = false;
            QDesignerObjectInspectorInterface::destroy();
        } else if (qdesignerobjectinspectorinterface_destroy_callback != nullptr) {
            qdesignerobjectinspectorinterface_destroy_callback();
        } else {
            QDesignerObjectInspectorInterface::destroy();
        }
    }

    // Virtual method for C ABI access and custom callback
    bool focusNextChild() {
        if (qdesignerobjectinspectorinterface_focusnextchild_isbase) {
            qdesignerobjectinspectorinterface_focusnextchild_isbase = false;
            return QDesignerObjectInspectorInterface::focusNextChild();
        } else if (qdesignerobjectinspectorinterface_focusnextchild_callback != nullptr) {
            bool callback_ret = qdesignerobjectinspectorinterface_focusnextchild_callback();
            return callback_ret;
        } else {
            return QDesignerObjectInspectorInterface::focusNextChild();
        }
    }

    // Virtual method for C ABI access and custom callback
    bool focusPreviousChild() {
        if (qdesignerobjectinspectorinterface_focuspreviouschild_isbase) {
            qdesignerobjectinspectorinterface_focuspreviouschild_isbase = false;
            return QDesignerObjectInspectorInterface::focusPreviousChild();
        } else if (qdesignerobjectinspectorinterface_focuspreviouschild_callback != nullptr) {
            bool callback_ret = qdesignerobjectinspectorinterface_focuspreviouschild_callback();
            return callback_ret;
        } else {
            return QDesignerObjectInspectorInterface::focusPreviousChild();
        }
    }

    // Virtual method for C ABI access and custom callback
    QObject* sender() const {
        if (qdesignerobjectinspectorinterface_sender_isbase) {
            qdesignerobjectinspectorinterface_sender_isbase = false;
            return QDesignerObjectInspectorInterface::sender();
        } else if (qdesignerobjectinspectorinterface_sender_callback != nullptr) {
            QObject* callback_ret = qdesignerobjectinspectorinterface_sender_callback();
            return callback_ret;
        } else {
            return QDesignerObjectInspectorInterface::sender();
        }
    }

    // Virtual method for C ABI access and custom callback
    int senderSignalIndex() const {
        if (qdesignerobjectinspectorinterface_sendersignalindex_isbase) {
            qdesignerobjectinspectorinterface_sendersignalindex_isbase = false;
            return QDesignerObjectInspectorInterface::senderSignalIndex();
        } else if (qdesignerobjectinspectorinterface_sendersignalindex_callback != nullptr) {
            int callback_ret = qdesignerobjectinspectorinterface_sendersignalindex_callback();
            return static_cast<int>(callback_ret);
        } else {
            return QDesignerObjectInspectorInterface::senderSignalIndex();
        }
    }

    // Virtual method for C ABI access and custom callback
    int receivers(const char* signal) const {
        if (qdesignerobjectinspectorinterface_receivers_isbase) {
            qdesignerobjectinspectorinterface_receivers_isbase = false;
            return QDesignerObjectInspectorInterface::receivers(signal);
        } else if (qdesignerobjectinspectorinterface_receivers_callback != nullptr) {
            const char* cbval1 = (const char*)signal;

            int callback_ret = qdesignerobjectinspectorinterface_receivers_callback(this, cbval1);
            return static_cast<int>(callback_ret);
        } else {
            return QDesignerObjectInspectorInterface::receivers(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    bool isSignalConnected(const QMetaMethod& signal) const {
        if (qdesignerobjectinspectorinterface_issignalconnected_isbase) {
            qdesignerobjectinspectorinterface_issignalconnected_isbase = false;
            return QDesignerObjectInspectorInterface::isSignalConnected(signal);
        } else if (qdesignerobjectinspectorinterface_issignalconnected_callback != nullptr) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            bool callback_ret = qdesignerobjectinspectorinterface_issignalconnected_callback(this, cbval1);
            return callback_ret;
        } else {
            return QDesignerObjectInspectorInterface::isSignalConnected(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    double getDecodedMetricF(QPaintDevice::PaintDeviceMetric metricA, QPaintDevice::PaintDeviceMetric metricB) const {
        if (qdesignerobjectinspectorinterface_getdecodedmetricf_isbase) {
            qdesignerobjectinspectorinterface_getdecodedmetricf_isbase = false;
            return QDesignerObjectInspectorInterface::getDecodedMetricF(metricA, metricB);
        } else if (qdesignerobjectinspectorinterface_getdecodedmetricf_callback != nullptr) {
            int cbval1 = static_cast<int>(metricA);
            int cbval2 = static_cast<int>(metricB);

            double callback_ret = qdesignerobjectinspectorinterface_getdecodedmetricf_callback(this, cbval1, cbval2);
            return static_cast<double>(callback_ret);
        } else {
            return QDesignerObjectInspectorInterface::getDecodedMetricF(metricA, metricB);
        }
    }

    // Friend functions
    friend bool QDesignerObjectInspectorInterface_Event(QDesignerObjectInspectorInterface* self, QEvent* event);
    friend bool QDesignerObjectInspectorInterface_QBaseEvent(QDesignerObjectInspectorInterface* self, QEvent* event);
    friend void QDesignerObjectInspectorInterface_MousePressEvent(QDesignerObjectInspectorInterface* self, QMouseEvent* event);
    friend void QDesignerObjectInspectorInterface_QBaseMousePressEvent(QDesignerObjectInspectorInterface* self, QMouseEvent* event);
    friend void QDesignerObjectInspectorInterface_MouseReleaseEvent(QDesignerObjectInspectorInterface* self, QMouseEvent* event);
    friend void QDesignerObjectInspectorInterface_QBaseMouseReleaseEvent(QDesignerObjectInspectorInterface* self, QMouseEvent* event);
    friend void QDesignerObjectInspectorInterface_MouseDoubleClickEvent(QDesignerObjectInspectorInterface* self, QMouseEvent* event);
    friend void QDesignerObjectInspectorInterface_QBaseMouseDoubleClickEvent(QDesignerObjectInspectorInterface* self, QMouseEvent* event);
    friend void QDesignerObjectInspectorInterface_MouseMoveEvent(QDesignerObjectInspectorInterface* self, QMouseEvent* event);
    friend void QDesignerObjectInspectorInterface_QBaseMouseMoveEvent(QDesignerObjectInspectorInterface* self, QMouseEvent* event);
    friend void QDesignerObjectInspectorInterface_WheelEvent(QDesignerObjectInspectorInterface* self, QWheelEvent* event);
    friend void QDesignerObjectInspectorInterface_QBaseWheelEvent(QDesignerObjectInspectorInterface* self, QWheelEvent* event);
    friend void QDesignerObjectInspectorInterface_KeyPressEvent(QDesignerObjectInspectorInterface* self, QKeyEvent* event);
    friend void QDesignerObjectInspectorInterface_QBaseKeyPressEvent(QDesignerObjectInspectorInterface* self, QKeyEvent* event);
    friend void QDesignerObjectInspectorInterface_KeyReleaseEvent(QDesignerObjectInspectorInterface* self, QKeyEvent* event);
    friend void QDesignerObjectInspectorInterface_QBaseKeyReleaseEvent(QDesignerObjectInspectorInterface* self, QKeyEvent* event);
    friend void QDesignerObjectInspectorInterface_FocusInEvent(QDesignerObjectInspectorInterface* self, QFocusEvent* event);
    friend void QDesignerObjectInspectorInterface_QBaseFocusInEvent(QDesignerObjectInspectorInterface* self, QFocusEvent* event);
    friend void QDesignerObjectInspectorInterface_FocusOutEvent(QDesignerObjectInspectorInterface* self, QFocusEvent* event);
    friend void QDesignerObjectInspectorInterface_QBaseFocusOutEvent(QDesignerObjectInspectorInterface* self, QFocusEvent* event);
    friend void QDesignerObjectInspectorInterface_EnterEvent(QDesignerObjectInspectorInterface* self, QEnterEvent* event);
    friend void QDesignerObjectInspectorInterface_QBaseEnterEvent(QDesignerObjectInspectorInterface* self, QEnterEvent* event);
    friend void QDesignerObjectInspectorInterface_LeaveEvent(QDesignerObjectInspectorInterface* self, QEvent* event);
    friend void QDesignerObjectInspectorInterface_QBaseLeaveEvent(QDesignerObjectInspectorInterface* self, QEvent* event);
    friend void QDesignerObjectInspectorInterface_PaintEvent(QDesignerObjectInspectorInterface* self, QPaintEvent* event);
    friend void QDesignerObjectInspectorInterface_QBasePaintEvent(QDesignerObjectInspectorInterface* self, QPaintEvent* event);
    friend void QDesignerObjectInspectorInterface_MoveEvent(QDesignerObjectInspectorInterface* self, QMoveEvent* event);
    friend void QDesignerObjectInspectorInterface_QBaseMoveEvent(QDesignerObjectInspectorInterface* self, QMoveEvent* event);
    friend void QDesignerObjectInspectorInterface_ResizeEvent(QDesignerObjectInspectorInterface* self, QResizeEvent* event);
    friend void QDesignerObjectInspectorInterface_QBaseResizeEvent(QDesignerObjectInspectorInterface* self, QResizeEvent* event);
    friend void QDesignerObjectInspectorInterface_CloseEvent(QDesignerObjectInspectorInterface* self, QCloseEvent* event);
    friend void QDesignerObjectInspectorInterface_QBaseCloseEvent(QDesignerObjectInspectorInterface* self, QCloseEvent* event);
    friend void QDesignerObjectInspectorInterface_ContextMenuEvent(QDesignerObjectInspectorInterface* self, QContextMenuEvent* event);
    friend void QDesignerObjectInspectorInterface_QBaseContextMenuEvent(QDesignerObjectInspectorInterface* self, QContextMenuEvent* event);
    friend void QDesignerObjectInspectorInterface_TabletEvent(QDesignerObjectInspectorInterface* self, QTabletEvent* event);
    friend void QDesignerObjectInspectorInterface_QBaseTabletEvent(QDesignerObjectInspectorInterface* self, QTabletEvent* event);
    friend void QDesignerObjectInspectorInterface_ActionEvent(QDesignerObjectInspectorInterface* self, QActionEvent* event);
    friend void QDesignerObjectInspectorInterface_QBaseActionEvent(QDesignerObjectInspectorInterface* self, QActionEvent* event);
    friend void QDesignerObjectInspectorInterface_DragEnterEvent(QDesignerObjectInspectorInterface* self, QDragEnterEvent* event);
    friend void QDesignerObjectInspectorInterface_QBaseDragEnterEvent(QDesignerObjectInspectorInterface* self, QDragEnterEvent* event);
    friend void QDesignerObjectInspectorInterface_DragMoveEvent(QDesignerObjectInspectorInterface* self, QDragMoveEvent* event);
    friend void QDesignerObjectInspectorInterface_QBaseDragMoveEvent(QDesignerObjectInspectorInterface* self, QDragMoveEvent* event);
    friend void QDesignerObjectInspectorInterface_DragLeaveEvent(QDesignerObjectInspectorInterface* self, QDragLeaveEvent* event);
    friend void QDesignerObjectInspectorInterface_QBaseDragLeaveEvent(QDesignerObjectInspectorInterface* self, QDragLeaveEvent* event);
    friend void QDesignerObjectInspectorInterface_DropEvent(QDesignerObjectInspectorInterface* self, QDropEvent* event);
    friend void QDesignerObjectInspectorInterface_QBaseDropEvent(QDesignerObjectInspectorInterface* self, QDropEvent* event);
    friend void QDesignerObjectInspectorInterface_ShowEvent(QDesignerObjectInspectorInterface* self, QShowEvent* event);
    friend void QDesignerObjectInspectorInterface_QBaseShowEvent(QDesignerObjectInspectorInterface* self, QShowEvent* event);
    friend void QDesignerObjectInspectorInterface_HideEvent(QDesignerObjectInspectorInterface* self, QHideEvent* event);
    friend void QDesignerObjectInspectorInterface_QBaseHideEvent(QDesignerObjectInspectorInterface* self, QHideEvent* event);
    friend bool QDesignerObjectInspectorInterface_NativeEvent(QDesignerObjectInspectorInterface* self, const libqt_string eventType, void* message, intptr_t* result);
    friend bool QDesignerObjectInspectorInterface_QBaseNativeEvent(QDesignerObjectInspectorInterface* self, const libqt_string eventType, void* message, intptr_t* result);
    friend void QDesignerObjectInspectorInterface_ChangeEvent(QDesignerObjectInspectorInterface* self, QEvent* param1);
    friend void QDesignerObjectInspectorInterface_QBaseChangeEvent(QDesignerObjectInspectorInterface* self, QEvent* param1);
    friend int QDesignerObjectInspectorInterface_Metric(const QDesignerObjectInspectorInterface* self, int param1);
    friend int QDesignerObjectInspectorInterface_QBaseMetric(const QDesignerObjectInspectorInterface* self, int param1);
    friend void QDesignerObjectInspectorInterface_InitPainter(const QDesignerObjectInspectorInterface* self, QPainter* painter);
    friend void QDesignerObjectInspectorInterface_QBaseInitPainter(const QDesignerObjectInspectorInterface* self, QPainter* painter);
    friend QPaintDevice* QDesignerObjectInspectorInterface_Redirected(const QDesignerObjectInspectorInterface* self, QPoint* offset);
    friend QPaintDevice* QDesignerObjectInspectorInterface_QBaseRedirected(const QDesignerObjectInspectorInterface* self, QPoint* offset);
    friend QPainter* QDesignerObjectInspectorInterface_SharedPainter(const QDesignerObjectInspectorInterface* self);
    friend QPainter* QDesignerObjectInspectorInterface_QBaseSharedPainter(const QDesignerObjectInspectorInterface* self);
    friend void QDesignerObjectInspectorInterface_InputMethodEvent(QDesignerObjectInspectorInterface* self, QInputMethodEvent* param1);
    friend void QDesignerObjectInspectorInterface_QBaseInputMethodEvent(QDesignerObjectInspectorInterface* self, QInputMethodEvent* param1);
    friend bool QDesignerObjectInspectorInterface_FocusNextPrevChild(QDesignerObjectInspectorInterface* self, bool next);
    friend bool QDesignerObjectInspectorInterface_QBaseFocusNextPrevChild(QDesignerObjectInspectorInterface* self, bool next);
    friend void QDesignerObjectInspectorInterface_TimerEvent(QDesignerObjectInspectorInterface* self, QTimerEvent* event);
    friend void QDesignerObjectInspectorInterface_QBaseTimerEvent(QDesignerObjectInspectorInterface* self, QTimerEvent* event);
    friend void QDesignerObjectInspectorInterface_ChildEvent(QDesignerObjectInspectorInterface* self, QChildEvent* event);
    friend void QDesignerObjectInspectorInterface_QBaseChildEvent(QDesignerObjectInspectorInterface* self, QChildEvent* event);
    friend void QDesignerObjectInspectorInterface_CustomEvent(QDesignerObjectInspectorInterface* self, QEvent* event);
    friend void QDesignerObjectInspectorInterface_QBaseCustomEvent(QDesignerObjectInspectorInterface* self, QEvent* event);
    friend void QDesignerObjectInspectorInterface_ConnectNotify(QDesignerObjectInspectorInterface* self, const QMetaMethod* signal);
    friend void QDesignerObjectInspectorInterface_QBaseConnectNotify(QDesignerObjectInspectorInterface* self, const QMetaMethod* signal);
    friend void QDesignerObjectInspectorInterface_DisconnectNotify(QDesignerObjectInspectorInterface* self, const QMetaMethod* signal);
    friend void QDesignerObjectInspectorInterface_QBaseDisconnectNotify(QDesignerObjectInspectorInterface* self, const QMetaMethod* signal);
    friend void QDesignerObjectInspectorInterface_UpdateMicroFocus(QDesignerObjectInspectorInterface* self);
    friend void QDesignerObjectInspectorInterface_QBaseUpdateMicroFocus(QDesignerObjectInspectorInterface* self);
    friend void QDesignerObjectInspectorInterface_Create(QDesignerObjectInspectorInterface* self);
    friend void QDesignerObjectInspectorInterface_QBaseCreate(QDesignerObjectInspectorInterface* self);
    friend void QDesignerObjectInspectorInterface_Destroy(QDesignerObjectInspectorInterface* self);
    friend void QDesignerObjectInspectorInterface_QBaseDestroy(QDesignerObjectInspectorInterface* self);
    friend bool QDesignerObjectInspectorInterface_FocusNextChild(QDesignerObjectInspectorInterface* self);
    friend bool QDesignerObjectInspectorInterface_QBaseFocusNextChild(QDesignerObjectInspectorInterface* self);
    friend bool QDesignerObjectInspectorInterface_FocusPreviousChild(QDesignerObjectInspectorInterface* self);
    friend bool QDesignerObjectInspectorInterface_QBaseFocusPreviousChild(QDesignerObjectInspectorInterface* self);
    friend QObject* QDesignerObjectInspectorInterface_Sender(const QDesignerObjectInspectorInterface* self);
    friend QObject* QDesignerObjectInspectorInterface_QBaseSender(const QDesignerObjectInspectorInterface* self);
    friend int QDesignerObjectInspectorInterface_SenderSignalIndex(const QDesignerObjectInspectorInterface* self);
    friend int QDesignerObjectInspectorInterface_QBaseSenderSignalIndex(const QDesignerObjectInspectorInterface* self);
    friend int QDesignerObjectInspectorInterface_Receivers(const QDesignerObjectInspectorInterface* self, const char* signal);
    friend int QDesignerObjectInspectorInterface_QBaseReceivers(const QDesignerObjectInspectorInterface* self, const char* signal);
    friend bool QDesignerObjectInspectorInterface_IsSignalConnected(const QDesignerObjectInspectorInterface* self, const QMetaMethod* signal);
    friend bool QDesignerObjectInspectorInterface_QBaseIsSignalConnected(const QDesignerObjectInspectorInterface* self, const QMetaMethod* signal);
    friend double QDesignerObjectInspectorInterface_GetDecodedMetricF(const QDesignerObjectInspectorInterface* self, int metricA, int metricB);
    friend double QDesignerObjectInspectorInterface_QBaseGetDecodedMetricF(const QDesignerObjectInspectorInterface* self, int metricA, int metricB);
};

#endif
