#pragma once
#ifndef SRC_EXTRAS_KXMLGUIC_LIBVIRTUALKEDITTOOLBAR_H
#define SRC_EXTRAS_KXMLGUIC_LIBVIRTUALKEDITTOOLBAR_H

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

// This class is a subclass of KEditToolBar so that we can call protected methods
class VirtualKEditToolBar final : public KEditToolBar {

  public:
    // Virtual class boolean flag
    bool isVirtualKEditToolBar = true;

    // Virtual class public types (including callbacks)
    using KEditToolBar_MetaObject_Callback = QMetaObject* (*)();
    using KEditToolBar_Metacast_Callback = void* (*)(KEditToolBar*, const char*);
    using KEditToolBar_Metacall_Callback = int (*)(KEditToolBar*, int, int, void**);
    using KEditToolBar_ShowEvent_Callback = void (*)(KEditToolBar*, QShowEvent*);
    using KEditToolBar_HideEvent_Callback = void (*)(KEditToolBar*, QHideEvent*);
    using KEditToolBar_SetVisible_Callback = void (*)(KEditToolBar*, bool);
    using KEditToolBar_SizeHint_Callback = QSize* (*)();
    using KEditToolBar_MinimumSizeHint_Callback = QSize* (*)();
    using KEditToolBar_Open_Callback = void (*)();
    using KEditToolBar_Exec_Callback = int (*)();
    using KEditToolBar_Done_Callback = void (*)(KEditToolBar*, int);
    using KEditToolBar_Accept_Callback = void (*)();
    using KEditToolBar_Reject_Callback = void (*)();
    using KEditToolBar_KeyPressEvent_Callback = void (*)(KEditToolBar*, QKeyEvent*);
    using KEditToolBar_CloseEvent_Callback = void (*)(KEditToolBar*, QCloseEvent*);
    using KEditToolBar_ResizeEvent_Callback = void (*)(KEditToolBar*, QResizeEvent*);
    using KEditToolBar_ContextMenuEvent_Callback = void (*)(KEditToolBar*, QContextMenuEvent*);
    using KEditToolBar_EventFilter_Callback = bool (*)(KEditToolBar*, QObject*, QEvent*);
    using KEditToolBar_DevType_Callback = int (*)();
    using KEditToolBar_HeightForWidth_Callback = int (*)(const KEditToolBar*, int);
    using KEditToolBar_HasHeightForWidth_Callback = bool (*)();
    using KEditToolBar_PaintEngine_Callback = QPaintEngine* (*)();
    using KEditToolBar_Event_Callback = bool (*)(KEditToolBar*, QEvent*);
    using KEditToolBar_MousePressEvent_Callback = void (*)(KEditToolBar*, QMouseEvent*);
    using KEditToolBar_MouseReleaseEvent_Callback = void (*)(KEditToolBar*, QMouseEvent*);
    using KEditToolBar_MouseDoubleClickEvent_Callback = void (*)(KEditToolBar*, QMouseEvent*);
    using KEditToolBar_MouseMoveEvent_Callback = void (*)(KEditToolBar*, QMouseEvent*);
    using KEditToolBar_WheelEvent_Callback = void (*)(KEditToolBar*, QWheelEvent*);
    using KEditToolBar_KeyReleaseEvent_Callback = void (*)(KEditToolBar*, QKeyEvent*);
    using KEditToolBar_FocusInEvent_Callback = void (*)(KEditToolBar*, QFocusEvent*);
    using KEditToolBar_FocusOutEvent_Callback = void (*)(KEditToolBar*, QFocusEvent*);
    using KEditToolBar_EnterEvent_Callback = void (*)(KEditToolBar*, QEnterEvent*);
    using KEditToolBar_LeaveEvent_Callback = void (*)(KEditToolBar*, QEvent*);
    using KEditToolBar_PaintEvent_Callback = void (*)(KEditToolBar*, QPaintEvent*);
    using KEditToolBar_MoveEvent_Callback = void (*)(KEditToolBar*, QMoveEvent*);
    using KEditToolBar_TabletEvent_Callback = void (*)(KEditToolBar*, QTabletEvent*);
    using KEditToolBar_ActionEvent_Callback = void (*)(KEditToolBar*, QActionEvent*);
    using KEditToolBar_DragEnterEvent_Callback = void (*)(KEditToolBar*, QDragEnterEvent*);
    using KEditToolBar_DragMoveEvent_Callback = void (*)(KEditToolBar*, QDragMoveEvent*);
    using KEditToolBar_DragLeaveEvent_Callback = void (*)(KEditToolBar*, QDragLeaveEvent*);
    using KEditToolBar_DropEvent_Callback = void (*)(KEditToolBar*, QDropEvent*);
    using KEditToolBar_NativeEvent_Callback = bool (*)(KEditToolBar*, libqt_string, void*, intptr_t*);
    using KEditToolBar_ChangeEvent_Callback = void (*)(KEditToolBar*, QEvent*);
    using KEditToolBar_Metric_Callback = int (*)(const KEditToolBar*, int);
    using KEditToolBar_InitPainter_Callback = void (*)(const KEditToolBar*, QPainter*);
    using KEditToolBar_Redirected_Callback = QPaintDevice* (*)(const KEditToolBar*, QPoint*);
    using KEditToolBar_SharedPainter_Callback = QPainter* (*)();
    using KEditToolBar_InputMethodEvent_Callback = void (*)(KEditToolBar*, QInputMethodEvent*);
    using KEditToolBar_InputMethodQuery_Callback = QVariant* (*)(const KEditToolBar*, int);
    using KEditToolBar_FocusNextPrevChild_Callback = bool (*)(KEditToolBar*, bool);
    using KEditToolBar_TimerEvent_Callback = void (*)(KEditToolBar*, QTimerEvent*);
    using KEditToolBar_ChildEvent_Callback = void (*)(KEditToolBar*, QChildEvent*);
    using KEditToolBar_CustomEvent_Callback = void (*)(KEditToolBar*, QEvent*);
    using KEditToolBar_ConnectNotify_Callback = void (*)(KEditToolBar*, QMetaMethod*);
    using KEditToolBar_DisconnectNotify_Callback = void (*)(KEditToolBar*, QMetaMethod*);
    using KEditToolBar_AdjustPosition_Callback = void (*)(KEditToolBar*, QWidget*);
    using KEditToolBar_UpdateMicroFocus_Callback = void (*)();
    using KEditToolBar_Create_Callback = void (*)();
    using KEditToolBar_Destroy_Callback = void (*)();
    using KEditToolBar_FocusNextChild_Callback = bool (*)();
    using KEditToolBar_FocusPreviousChild_Callback = bool (*)();
    using KEditToolBar_Sender_Callback = QObject* (*)();
    using KEditToolBar_SenderSignalIndex_Callback = int (*)();
    using KEditToolBar_Receivers_Callback = int (*)(const KEditToolBar*, const char*);
    using KEditToolBar_IsSignalConnected_Callback = bool (*)(const KEditToolBar*, QMetaMethod*);
    using KEditToolBar_GetDecodedMetricF_Callback = double (*)(const KEditToolBar*, int, int);

  protected:
    // Instance callback storage
    KEditToolBar_MetaObject_Callback kedittoolbar_metaobject_callback = nullptr;
    KEditToolBar_Metacast_Callback kedittoolbar_metacast_callback = nullptr;
    KEditToolBar_Metacall_Callback kedittoolbar_metacall_callback = nullptr;
    KEditToolBar_ShowEvent_Callback kedittoolbar_showevent_callback = nullptr;
    KEditToolBar_HideEvent_Callback kedittoolbar_hideevent_callback = nullptr;
    KEditToolBar_SetVisible_Callback kedittoolbar_setvisible_callback = nullptr;
    KEditToolBar_SizeHint_Callback kedittoolbar_sizehint_callback = nullptr;
    KEditToolBar_MinimumSizeHint_Callback kedittoolbar_minimumsizehint_callback = nullptr;
    KEditToolBar_Open_Callback kedittoolbar_open_callback = nullptr;
    KEditToolBar_Exec_Callback kedittoolbar_exec_callback = nullptr;
    KEditToolBar_Done_Callback kedittoolbar_done_callback = nullptr;
    KEditToolBar_Accept_Callback kedittoolbar_accept_callback = nullptr;
    KEditToolBar_Reject_Callback kedittoolbar_reject_callback = nullptr;
    KEditToolBar_KeyPressEvent_Callback kedittoolbar_keypressevent_callback = nullptr;
    KEditToolBar_CloseEvent_Callback kedittoolbar_closeevent_callback = nullptr;
    KEditToolBar_ResizeEvent_Callback kedittoolbar_resizeevent_callback = nullptr;
    KEditToolBar_ContextMenuEvent_Callback kedittoolbar_contextmenuevent_callback = nullptr;
    KEditToolBar_EventFilter_Callback kedittoolbar_eventfilter_callback = nullptr;
    KEditToolBar_DevType_Callback kedittoolbar_devtype_callback = nullptr;
    KEditToolBar_HeightForWidth_Callback kedittoolbar_heightforwidth_callback = nullptr;
    KEditToolBar_HasHeightForWidth_Callback kedittoolbar_hasheightforwidth_callback = nullptr;
    KEditToolBar_PaintEngine_Callback kedittoolbar_paintengine_callback = nullptr;
    KEditToolBar_Event_Callback kedittoolbar_event_callback = nullptr;
    KEditToolBar_MousePressEvent_Callback kedittoolbar_mousepressevent_callback = nullptr;
    KEditToolBar_MouseReleaseEvent_Callback kedittoolbar_mousereleaseevent_callback = nullptr;
    KEditToolBar_MouseDoubleClickEvent_Callback kedittoolbar_mousedoubleclickevent_callback = nullptr;
    KEditToolBar_MouseMoveEvent_Callback kedittoolbar_mousemoveevent_callback = nullptr;
    KEditToolBar_WheelEvent_Callback kedittoolbar_wheelevent_callback = nullptr;
    KEditToolBar_KeyReleaseEvent_Callback kedittoolbar_keyreleaseevent_callback = nullptr;
    KEditToolBar_FocusInEvent_Callback kedittoolbar_focusinevent_callback = nullptr;
    KEditToolBar_FocusOutEvent_Callback kedittoolbar_focusoutevent_callback = nullptr;
    KEditToolBar_EnterEvent_Callback kedittoolbar_enterevent_callback = nullptr;
    KEditToolBar_LeaveEvent_Callback kedittoolbar_leaveevent_callback = nullptr;
    KEditToolBar_PaintEvent_Callback kedittoolbar_paintevent_callback = nullptr;
    KEditToolBar_MoveEvent_Callback kedittoolbar_moveevent_callback = nullptr;
    KEditToolBar_TabletEvent_Callback kedittoolbar_tabletevent_callback = nullptr;
    KEditToolBar_ActionEvent_Callback kedittoolbar_actionevent_callback = nullptr;
    KEditToolBar_DragEnterEvent_Callback kedittoolbar_dragenterevent_callback = nullptr;
    KEditToolBar_DragMoveEvent_Callback kedittoolbar_dragmoveevent_callback = nullptr;
    KEditToolBar_DragLeaveEvent_Callback kedittoolbar_dragleaveevent_callback = nullptr;
    KEditToolBar_DropEvent_Callback kedittoolbar_dropevent_callback = nullptr;
    KEditToolBar_NativeEvent_Callback kedittoolbar_nativeevent_callback = nullptr;
    KEditToolBar_ChangeEvent_Callback kedittoolbar_changeevent_callback = nullptr;
    KEditToolBar_Metric_Callback kedittoolbar_metric_callback = nullptr;
    KEditToolBar_InitPainter_Callback kedittoolbar_initpainter_callback = nullptr;
    KEditToolBar_Redirected_Callback kedittoolbar_redirected_callback = nullptr;
    KEditToolBar_SharedPainter_Callback kedittoolbar_sharedpainter_callback = nullptr;
    KEditToolBar_InputMethodEvent_Callback kedittoolbar_inputmethodevent_callback = nullptr;
    KEditToolBar_InputMethodQuery_Callback kedittoolbar_inputmethodquery_callback = nullptr;
    KEditToolBar_FocusNextPrevChild_Callback kedittoolbar_focusnextprevchild_callback = nullptr;
    KEditToolBar_TimerEvent_Callback kedittoolbar_timerevent_callback = nullptr;
    KEditToolBar_ChildEvent_Callback kedittoolbar_childevent_callback = nullptr;
    KEditToolBar_CustomEvent_Callback kedittoolbar_customevent_callback = nullptr;
    KEditToolBar_ConnectNotify_Callback kedittoolbar_connectnotify_callback = nullptr;
    KEditToolBar_DisconnectNotify_Callback kedittoolbar_disconnectnotify_callback = nullptr;
    KEditToolBar_AdjustPosition_Callback kedittoolbar_adjustposition_callback = nullptr;
    KEditToolBar_UpdateMicroFocus_Callback kedittoolbar_updatemicrofocus_callback = nullptr;
    KEditToolBar_Create_Callback kedittoolbar_create_callback = nullptr;
    KEditToolBar_Destroy_Callback kedittoolbar_destroy_callback = nullptr;
    KEditToolBar_FocusNextChild_Callback kedittoolbar_focusnextchild_callback = nullptr;
    KEditToolBar_FocusPreviousChild_Callback kedittoolbar_focuspreviouschild_callback = nullptr;
    KEditToolBar_Sender_Callback kedittoolbar_sender_callback = nullptr;
    KEditToolBar_SenderSignalIndex_Callback kedittoolbar_sendersignalindex_callback = nullptr;
    KEditToolBar_Receivers_Callback kedittoolbar_receivers_callback = nullptr;
    KEditToolBar_IsSignalConnected_Callback kedittoolbar_issignalconnected_callback = nullptr;
    KEditToolBar_GetDecodedMetricF_Callback kedittoolbar_getdecodedmetricf_callback = nullptr;

    // Instance base flags
    mutable bool kedittoolbar_metaobject_isbase = false;
    mutable bool kedittoolbar_metacast_isbase = false;
    mutable bool kedittoolbar_metacall_isbase = false;
    mutable bool kedittoolbar_showevent_isbase = false;
    mutable bool kedittoolbar_hideevent_isbase = false;
    mutable bool kedittoolbar_setvisible_isbase = false;
    mutable bool kedittoolbar_sizehint_isbase = false;
    mutable bool kedittoolbar_minimumsizehint_isbase = false;
    mutable bool kedittoolbar_open_isbase = false;
    mutable bool kedittoolbar_exec_isbase = false;
    mutable bool kedittoolbar_done_isbase = false;
    mutable bool kedittoolbar_accept_isbase = false;
    mutable bool kedittoolbar_reject_isbase = false;
    mutable bool kedittoolbar_keypressevent_isbase = false;
    mutable bool kedittoolbar_closeevent_isbase = false;
    mutable bool kedittoolbar_resizeevent_isbase = false;
    mutable bool kedittoolbar_contextmenuevent_isbase = false;
    mutable bool kedittoolbar_eventfilter_isbase = false;
    mutable bool kedittoolbar_devtype_isbase = false;
    mutable bool kedittoolbar_heightforwidth_isbase = false;
    mutable bool kedittoolbar_hasheightforwidth_isbase = false;
    mutable bool kedittoolbar_paintengine_isbase = false;
    mutable bool kedittoolbar_event_isbase = false;
    mutable bool kedittoolbar_mousepressevent_isbase = false;
    mutable bool kedittoolbar_mousereleaseevent_isbase = false;
    mutable bool kedittoolbar_mousedoubleclickevent_isbase = false;
    mutable bool kedittoolbar_mousemoveevent_isbase = false;
    mutable bool kedittoolbar_wheelevent_isbase = false;
    mutable bool kedittoolbar_keyreleaseevent_isbase = false;
    mutable bool kedittoolbar_focusinevent_isbase = false;
    mutable bool kedittoolbar_focusoutevent_isbase = false;
    mutable bool kedittoolbar_enterevent_isbase = false;
    mutable bool kedittoolbar_leaveevent_isbase = false;
    mutable bool kedittoolbar_paintevent_isbase = false;
    mutable bool kedittoolbar_moveevent_isbase = false;
    mutable bool kedittoolbar_tabletevent_isbase = false;
    mutable bool kedittoolbar_actionevent_isbase = false;
    mutable bool kedittoolbar_dragenterevent_isbase = false;
    mutable bool kedittoolbar_dragmoveevent_isbase = false;
    mutable bool kedittoolbar_dragleaveevent_isbase = false;
    mutable bool kedittoolbar_dropevent_isbase = false;
    mutable bool kedittoolbar_nativeevent_isbase = false;
    mutable bool kedittoolbar_changeevent_isbase = false;
    mutable bool kedittoolbar_metric_isbase = false;
    mutable bool kedittoolbar_initpainter_isbase = false;
    mutable bool kedittoolbar_redirected_isbase = false;
    mutable bool kedittoolbar_sharedpainter_isbase = false;
    mutable bool kedittoolbar_inputmethodevent_isbase = false;
    mutable bool kedittoolbar_inputmethodquery_isbase = false;
    mutable bool kedittoolbar_focusnextprevchild_isbase = false;
    mutable bool kedittoolbar_timerevent_isbase = false;
    mutable bool kedittoolbar_childevent_isbase = false;
    mutable bool kedittoolbar_customevent_isbase = false;
    mutable bool kedittoolbar_connectnotify_isbase = false;
    mutable bool kedittoolbar_disconnectnotify_isbase = false;
    mutable bool kedittoolbar_adjustposition_isbase = false;
    mutable bool kedittoolbar_updatemicrofocus_isbase = false;
    mutable bool kedittoolbar_create_isbase = false;
    mutable bool kedittoolbar_destroy_isbase = false;
    mutable bool kedittoolbar_focusnextchild_isbase = false;
    mutable bool kedittoolbar_focuspreviouschild_isbase = false;
    mutable bool kedittoolbar_sender_isbase = false;
    mutable bool kedittoolbar_sendersignalindex_isbase = false;
    mutable bool kedittoolbar_receivers_isbase = false;
    mutable bool kedittoolbar_issignalconnected_isbase = false;
    mutable bool kedittoolbar_getdecodedmetricf_isbase = false;

  public:
    VirtualKEditToolBar(KActionCollection* collection) : KEditToolBar(collection) {};
    VirtualKEditToolBar(KXMLGUIFactory* factory) : KEditToolBar(factory) {};
    VirtualKEditToolBar(KActionCollection* collection, QWidget* parent) : KEditToolBar(collection, parent) {};
    VirtualKEditToolBar(KXMLGUIFactory* factory, QWidget* parent) : KEditToolBar(factory, parent) {};

    // Callback setters
    inline void setKEditToolBar_MetaObject_Callback(KEditToolBar_MetaObject_Callback cb) { kedittoolbar_metaobject_callback = cb; }
    inline void setKEditToolBar_Metacast_Callback(KEditToolBar_Metacast_Callback cb) { kedittoolbar_metacast_callback = cb; }
    inline void setKEditToolBar_Metacall_Callback(KEditToolBar_Metacall_Callback cb) { kedittoolbar_metacall_callback = cb; }
    inline void setKEditToolBar_ShowEvent_Callback(KEditToolBar_ShowEvent_Callback cb) { kedittoolbar_showevent_callback = cb; }
    inline void setKEditToolBar_HideEvent_Callback(KEditToolBar_HideEvent_Callback cb) { kedittoolbar_hideevent_callback = cb; }
    inline void setKEditToolBar_SetVisible_Callback(KEditToolBar_SetVisible_Callback cb) { kedittoolbar_setvisible_callback = cb; }
    inline void setKEditToolBar_SizeHint_Callback(KEditToolBar_SizeHint_Callback cb) { kedittoolbar_sizehint_callback = cb; }
    inline void setKEditToolBar_MinimumSizeHint_Callback(KEditToolBar_MinimumSizeHint_Callback cb) { kedittoolbar_minimumsizehint_callback = cb; }
    inline void setKEditToolBar_Open_Callback(KEditToolBar_Open_Callback cb) { kedittoolbar_open_callback = cb; }
    inline void setKEditToolBar_Exec_Callback(KEditToolBar_Exec_Callback cb) { kedittoolbar_exec_callback = cb; }
    inline void setKEditToolBar_Done_Callback(KEditToolBar_Done_Callback cb) { kedittoolbar_done_callback = cb; }
    inline void setKEditToolBar_Accept_Callback(KEditToolBar_Accept_Callback cb) { kedittoolbar_accept_callback = cb; }
    inline void setKEditToolBar_Reject_Callback(KEditToolBar_Reject_Callback cb) { kedittoolbar_reject_callback = cb; }
    inline void setKEditToolBar_KeyPressEvent_Callback(KEditToolBar_KeyPressEvent_Callback cb) { kedittoolbar_keypressevent_callback = cb; }
    inline void setKEditToolBar_CloseEvent_Callback(KEditToolBar_CloseEvent_Callback cb) { kedittoolbar_closeevent_callback = cb; }
    inline void setKEditToolBar_ResizeEvent_Callback(KEditToolBar_ResizeEvent_Callback cb) { kedittoolbar_resizeevent_callback = cb; }
    inline void setKEditToolBar_ContextMenuEvent_Callback(KEditToolBar_ContextMenuEvent_Callback cb) { kedittoolbar_contextmenuevent_callback = cb; }
    inline void setKEditToolBar_EventFilter_Callback(KEditToolBar_EventFilter_Callback cb) { kedittoolbar_eventfilter_callback = cb; }
    inline void setKEditToolBar_DevType_Callback(KEditToolBar_DevType_Callback cb) { kedittoolbar_devtype_callback = cb; }
    inline void setKEditToolBar_HeightForWidth_Callback(KEditToolBar_HeightForWidth_Callback cb) { kedittoolbar_heightforwidth_callback = cb; }
    inline void setKEditToolBar_HasHeightForWidth_Callback(KEditToolBar_HasHeightForWidth_Callback cb) { kedittoolbar_hasheightforwidth_callback = cb; }
    inline void setKEditToolBar_PaintEngine_Callback(KEditToolBar_PaintEngine_Callback cb) { kedittoolbar_paintengine_callback = cb; }
    inline void setKEditToolBar_Event_Callback(KEditToolBar_Event_Callback cb) { kedittoolbar_event_callback = cb; }
    inline void setKEditToolBar_MousePressEvent_Callback(KEditToolBar_MousePressEvent_Callback cb) { kedittoolbar_mousepressevent_callback = cb; }
    inline void setKEditToolBar_MouseReleaseEvent_Callback(KEditToolBar_MouseReleaseEvent_Callback cb) { kedittoolbar_mousereleaseevent_callback = cb; }
    inline void setKEditToolBar_MouseDoubleClickEvent_Callback(KEditToolBar_MouseDoubleClickEvent_Callback cb) { kedittoolbar_mousedoubleclickevent_callback = cb; }
    inline void setKEditToolBar_MouseMoveEvent_Callback(KEditToolBar_MouseMoveEvent_Callback cb) { kedittoolbar_mousemoveevent_callback = cb; }
    inline void setKEditToolBar_WheelEvent_Callback(KEditToolBar_WheelEvent_Callback cb) { kedittoolbar_wheelevent_callback = cb; }
    inline void setKEditToolBar_KeyReleaseEvent_Callback(KEditToolBar_KeyReleaseEvent_Callback cb) { kedittoolbar_keyreleaseevent_callback = cb; }
    inline void setKEditToolBar_FocusInEvent_Callback(KEditToolBar_FocusInEvent_Callback cb) { kedittoolbar_focusinevent_callback = cb; }
    inline void setKEditToolBar_FocusOutEvent_Callback(KEditToolBar_FocusOutEvent_Callback cb) { kedittoolbar_focusoutevent_callback = cb; }
    inline void setKEditToolBar_EnterEvent_Callback(KEditToolBar_EnterEvent_Callback cb) { kedittoolbar_enterevent_callback = cb; }
    inline void setKEditToolBar_LeaveEvent_Callback(KEditToolBar_LeaveEvent_Callback cb) { kedittoolbar_leaveevent_callback = cb; }
    inline void setKEditToolBar_PaintEvent_Callback(KEditToolBar_PaintEvent_Callback cb) { kedittoolbar_paintevent_callback = cb; }
    inline void setKEditToolBar_MoveEvent_Callback(KEditToolBar_MoveEvent_Callback cb) { kedittoolbar_moveevent_callback = cb; }
    inline void setKEditToolBar_TabletEvent_Callback(KEditToolBar_TabletEvent_Callback cb) { kedittoolbar_tabletevent_callback = cb; }
    inline void setKEditToolBar_ActionEvent_Callback(KEditToolBar_ActionEvent_Callback cb) { kedittoolbar_actionevent_callback = cb; }
    inline void setKEditToolBar_DragEnterEvent_Callback(KEditToolBar_DragEnterEvent_Callback cb) { kedittoolbar_dragenterevent_callback = cb; }
    inline void setKEditToolBar_DragMoveEvent_Callback(KEditToolBar_DragMoveEvent_Callback cb) { kedittoolbar_dragmoveevent_callback = cb; }
    inline void setKEditToolBar_DragLeaveEvent_Callback(KEditToolBar_DragLeaveEvent_Callback cb) { kedittoolbar_dragleaveevent_callback = cb; }
    inline void setKEditToolBar_DropEvent_Callback(KEditToolBar_DropEvent_Callback cb) { kedittoolbar_dropevent_callback = cb; }
    inline void setKEditToolBar_NativeEvent_Callback(KEditToolBar_NativeEvent_Callback cb) { kedittoolbar_nativeevent_callback = cb; }
    inline void setKEditToolBar_ChangeEvent_Callback(KEditToolBar_ChangeEvent_Callback cb) { kedittoolbar_changeevent_callback = cb; }
    inline void setKEditToolBar_Metric_Callback(KEditToolBar_Metric_Callback cb) { kedittoolbar_metric_callback = cb; }
    inline void setKEditToolBar_InitPainter_Callback(KEditToolBar_InitPainter_Callback cb) { kedittoolbar_initpainter_callback = cb; }
    inline void setKEditToolBar_Redirected_Callback(KEditToolBar_Redirected_Callback cb) { kedittoolbar_redirected_callback = cb; }
    inline void setKEditToolBar_SharedPainter_Callback(KEditToolBar_SharedPainter_Callback cb) { kedittoolbar_sharedpainter_callback = cb; }
    inline void setKEditToolBar_InputMethodEvent_Callback(KEditToolBar_InputMethodEvent_Callback cb) { kedittoolbar_inputmethodevent_callback = cb; }
    inline void setKEditToolBar_InputMethodQuery_Callback(KEditToolBar_InputMethodQuery_Callback cb) { kedittoolbar_inputmethodquery_callback = cb; }
    inline void setKEditToolBar_FocusNextPrevChild_Callback(KEditToolBar_FocusNextPrevChild_Callback cb) { kedittoolbar_focusnextprevchild_callback = cb; }
    inline void setKEditToolBar_TimerEvent_Callback(KEditToolBar_TimerEvent_Callback cb) { kedittoolbar_timerevent_callback = cb; }
    inline void setKEditToolBar_ChildEvent_Callback(KEditToolBar_ChildEvent_Callback cb) { kedittoolbar_childevent_callback = cb; }
    inline void setKEditToolBar_CustomEvent_Callback(KEditToolBar_CustomEvent_Callback cb) { kedittoolbar_customevent_callback = cb; }
    inline void setKEditToolBar_ConnectNotify_Callback(KEditToolBar_ConnectNotify_Callback cb) { kedittoolbar_connectnotify_callback = cb; }
    inline void setKEditToolBar_DisconnectNotify_Callback(KEditToolBar_DisconnectNotify_Callback cb) { kedittoolbar_disconnectnotify_callback = cb; }
    inline void setKEditToolBar_AdjustPosition_Callback(KEditToolBar_AdjustPosition_Callback cb) { kedittoolbar_adjustposition_callback = cb; }
    inline void setKEditToolBar_UpdateMicroFocus_Callback(KEditToolBar_UpdateMicroFocus_Callback cb) { kedittoolbar_updatemicrofocus_callback = cb; }
    inline void setKEditToolBar_Create_Callback(KEditToolBar_Create_Callback cb) { kedittoolbar_create_callback = cb; }
    inline void setKEditToolBar_Destroy_Callback(KEditToolBar_Destroy_Callback cb) { kedittoolbar_destroy_callback = cb; }
    inline void setKEditToolBar_FocusNextChild_Callback(KEditToolBar_FocusNextChild_Callback cb) { kedittoolbar_focusnextchild_callback = cb; }
    inline void setKEditToolBar_FocusPreviousChild_Callback(KEditToolBar_FocusPreviousChild_Callback cb) { kedittoolbar_focuspreviouschild_callback = cb; }
    inline void setKEditToolBar_Sender_Callback(KEditToolBar_Sender_Callback cb) { kedittoolbar_sender_callback = cb; }
    inline void setKEditToolBar_SenderSignalIndex_Callback(KEditToolBar_SenderSignalIndex_Callback cb) { kedittoolbar_sendersignalindex_callback = cb; }
    inline void setKEditToolBar_Receivers_Callback(KEditToolBar_Receivers_Callback cb) { kedittoolbar_receivers_callback = cb; }
    inline void setKEditToolBar_IsSignalConnected_Callback(KEditToolBar_IsSignalConnected_Callback cb) { kedittoolbar_issignalconnected_callback = cb; }
    inline void setKEditToolBar_GetDecodedMetricF_Callback(KEditToolBar_GetDecodedMetricF_Callback cb) { kedittoolbar_getdecodedmetricf_callback = cb; }

    // Base flag setters
    inline void setKEditToolBar_MetaObject_IsBase(bool value) const { kedittoolbar_metaobject_isbase = value; }
    inline void setKEditToolBar_Metacast_IsBase(bool value) const { kedittoolbar_metacast_isbase = value; }
    inline void setKEditToolBar_Metacall_IsBase(bool value) const { kedittoolbar_metacall_isbase = value; }
    inline void setKEditToolBar_ShowEvent_IsBase(bool value) const { kedittoolbar_showevent_isbase = value; }
    inline void setKEditToolBar_HideEvent_IsBase(bool value) const { kedittoolbar_hideevent_isbase = value; }
    inline void setKEditToolBar_SetVisible_IsBase(bool value) const { kedittoolbar_setvisible_isbase = value; }
    inline void setKEditToolBar_SizeHint_IsBase(bool value) const { kedittoolbar_sizehint_isbase = value; }
    inline void setKEditToolBar_MinimumSizeHint_IsBase(bool value) const { kedittoolbar_minimumsizehint_isbase = value; }
    inline void setKEditToolBar_Open_IsBase(bool value) const { kedittoolbar_open_isbase = value; }
    inline void setKEditToolBar_Exec_IsBase(bool value) const { kedittoolbar_exec_isbase = value; }
    inline void setKEditToolBar_Done_IsBase(bool value) const { kedittoolbar_done_isbase = value; }
    inline void setKEditToolBar_Accept_IsBase(bool value) const { kedittoolbar_accept_isbase = value; }
    inline void setKEditToolBar_Reject_IsBase(bool value) const { kedittoolbar_reject_isbase = value; }
    inline void setKEditToolBar_KeyPressEvent_IsBase(bool value) const { kedittoolbar_keypressevent_isbase = value; }
    inline void setKEditToolBar_CloseEvent_IsBase(bool value) const { kedittoolbar_closeevent_isbase = value; }
    inline void setKEditToolBar_ResizeEvent_IsBase(bool value) const { kedittoolbar_resizeevent_isbase = value; }
    inline void setKEditToolBar_ContextMenuEvent_IsBase(bool value) const { kedittoolbar_contextmenuevent_isbase = value; }
    inline void setKEditToolBar_EventFilter_IsBase(bool value) const { kedittoolbar_eventfilter_isbase = value; }
    inline void setKEditToolBar_DevType_IsBase(bool value) const { kedittoolbar_devtype_isbase = value; }
    inline void setKEditToolBar_HeightForWidth_IsBase(bool value) const { kedittoolbar_heightforwidth_isbase = value; }
    inline void setKEditToolBar_HasHeightForWidth_IsBase(bool value) const { kedittoolbar_hasheightforwidth_isbase = value; }
    inline void setKEditToolBar_PaintEngine_IsBase(bool value) const { kedittoolbar_paintengine_isbase = value; }
    inline void setKEditToolBar_Event_IsBase(bool value) const { kedittoolbar_event_isbase = value; }
    inline void setKEditToolBar_MousePressEvent_IsBase(bool value) const { kedittoolbar_mousepressevent_isbase = value; }
    inline void setKEditToolBar_MouseReleaseEvent_IsBase(bool value) const { kedittoolbar_mousereleaseevent_isbase = value; }
    inline void setKEditToolBar_MouseDoubleClickEvent_IsBase(bool value) const { kedittoolbar_mousedoubleclickevent_isbase = value; }
    inline void setKEditToolBar_MouseMoveEvent_IsBase(bool value) const { kedittoolbar_mousemoveevent_isbase = value; }
    inline void setKEditToolBar_WheelEvent_IsBase(bool value) const { kedittoolbar_wheelevent_isbase = value; }
    inline void setKEditToolBar_KeyReleaseEvent_IsBase(bool value) const { kedittoolbar_keyreleaseevent_isbase = value; }
    inline void setKEditToolBar_FocusInEvent_IsBase(bool value) const { kedittoolbar_focusinevent_isbase = value; }
    inline void setKEditToolBar_FocusOutEvent_IsBase(bool value) const { kedittoolbar_focusoutevent_isbase = value; }
    inline void setKEditToolBar_EnterEvent_IsBase(bool value) const { kedittoolbar_enterevent_isbase = value; }
    inline void setKEditToolBar_LeaveEvent_IsBase(bool value) const { kedittoolbar_leaveevent_isbase = value; }
    inline void setKEditToolBar_PaintEvent_IsBase(bool value) const { kedittoolbar_paintevent_isbase = value; }
    inline void setKEditToolBar_MoveEvent_IsBase(bool value) const { kedittoolbar_moveevent_isbase = value; }
    inline void setKEditToolBar_TabletEvent_IsBase(bool value) const { kedittoolbar_tabletevent_isbase = value; }
    inline void setKEditToolBar_ActionEvent_IsBase(bool value) const { kedittoolbar_actionevent_isbase = value; }
    inline void setKEditToolBar_DragEnterEvent_IsBase(bool value) const { kedittoolbar_dragenterevent_isbase = value; }
    inline void setKEditToolBar_DragMoveEvent_IsBase(bool value) const { kedittoolbar_dragmoveevent_isbase = value; }
    inline void setKEditToolBar_DragLeaveEvent_IsBase(bool value) const { kedittoolbar_dragleaveevent_isbase = value; }
    inline void setKEditToolBar_DropEvent_IsBase(bool value) const { kedittoolbar_dropevent_isbase = value; }
    inline void setKEditToolBar_NativeEvent_IsBase(bool value) const { kedittoolbar_nativeevent_isbase = value; }
    inline void setKEditToolBar_ChangeEvent_IsBase(bool value) const { kedittoolbar_changeevent_isbase = value; }
    inline void setKEditToolBar_Metric_IsBase(bool value) const { kedittoolbar_metric_isbase = value; }
    inline void setKEditToolBar_InitPainter_IsBase(bool value) const { kedittoolbar_initpainter_isbase = value; }
    inline void setKEditToolBar_Redirected_IsBase(bool value) const { kedittoolbar_redirected_isbase = value; }
    inline void setKEditToolBar_SharedPainter_IsBase(bool value) const { kedittoolbar_sharedpainter_isbase = value; }
    inline void setKEditToolBar_InputMethodEvent_IsBase(bool value) const { kedittoolbar_inputmethodevent_isbase = value; }
    inline void setKEditToolBar_InputMethodQuery_IsBase(bool value) const { kedittoolbar_inputmethodquery_isbase = value; }
    inline void setKEditToolBar_FocusNextPrevChild_IsBase(bool value) const { kedittoolbar_focusnextprevchild_isbase = value; }
    inline void setKEditToolBar_TimerEvent_IsBase(bool value) const { kedittoolbar_timerevent_isbase = value; }
    inline void setKEditToolBar_ChildEvent_IsBase(bool value) const { kedittoolbar_childevent_isbase = value; }
    inline void setKEditToolBar_CustomEvent_IsBase(bool value) const { kedittoolbar_customevent_isbase = value; }
    inline void setKEditToolBar_ConnectNotify_IsBase(bool value) const { kedittoolbar_connectnotify_isbase = value; }
    inline void setKEditToolBar_DisconnectNotify_IsBase(bool value) const { kedittoolbar_disconnectnotify_isbase = value; }
    inline void setKEditToolBar_AdjustPosition_IsBase(bool value) const { kedittoolbar_adjustposition_isbase = value; }
    inline void setKEditToolBar_UpdateMicroFocus_IsBase(bool value) const { kedittoolbar_updatemicrofocus_isbase = value; }
    inline void setKEditToolBar_Create_IsBase(bool value) const { kedittoolbar_create_isbase = value; }
    inline void setKEditToolBar_Destroy_IsBase(bool value) const { kedittoolbar_destroy_isbase = value; }
    inline void setKEditToolBar_FocusNextChild_IsBase(bool value) const { kedittoolbar_focusnextchild_isbase = value; }
    inline void setKEditToolBar_FocusPreviousChild_IsBase(bool value) const { kedittoolbar_focuspreviouschild_isbase = value; }
    inline void setKEditToolBar_Sender_IsBase(bool value) const { kedittoolbar_sender_isbase = value; }
    inline void setKEditToolBar_SenderSignalIndex_IsBase(bool value) const { kedittoolbar_sendersignalindex_isbase = value; }
    inline void setKEditToolBar_Receivers_IsBase(bool value) const { kedittoolbar_receivers_isbase = value; }
    inline void setKEditToolBar_IsSignalConnected_IsBase(bool value) const { kedittoolbar_issignalconnected_isbase = value; }
    inline void setKEditToolBar_GetDecodedMetricF_IsBase(bool value) const { kedittoolbar_getdecodedmetricf_isbase = value; }

    // Virtual method for C ABI access and custom callback
    virtual const QMetaObject* metaObject() const override {
        if (kedittoolbar_metaobject_isbase) {
            kedittoolbar_metaobject_isbase = false;
            return KEditToolBar::metaObject();
        }
        auto metaobject_cb = kedittoolbar_metaobject_callback;
        if (metaobject_cb) {
            QMetaObject* callback_ret = metaobject_cb();
            return callback_ret;
        }
        return KEditToolBar::metaObject();
    }

    // Virtual method for C ABI access and custom callback
    virtual void* qt_metacast(const char* param1) override {
        if (kedittoolbar_metacast_isbase) {
            kedittoolbar_metacast_isbase = false;
            return KEditToolBar::qt_metacast(param1);
        }
        auto metacast_cb = kedittoolbar_metacast_callback;
        if (metacast_cb) {
            const char* cbval1 = (const char*)param1;

            void* callback_ret = metacast_cb(this, cbval1);
            return callback_ret;
        }
        return KEditToolBar::qt_metacast(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (kedittoolbar_metacall_isbase) {
            kedittoolbar_metacall_isbase = false;
            return KEditToolBar::qt_metacall(param1, param2, param3);
        }
        auto metacall_cb = kedittoolbar_metacall_callback;
        if (metacall_cb) {
            int cbval1 = static_cast<int>(param1);
            int cbval2 = param2;
            void** cbval3 = param3;

            int callback_ret = metacall_cb(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        }
        return KEditToolBar::qt_metacall(param1, param2, param3);
    }

    // Virtual method for C ABI access and custom callback
    virtual void showEvent(QShowEvent* event) override {
        if (kedittoolbar_showevent_isbase) {
            kedittoolbar_showevent_isbase = false;
            KEditToolBar::showEvent(event);
            return;
        }
        auto showevent_cb = kedittoolbar_showevent_callback;
        if (showevent_cb) {
            QShowEvent* cbval1 = event;

            showevent_cb(this, cbval1);
            return;
        }
        KEditToolBar::showEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void hideEvent(QHideEvent* event) override {
        if (kedittoolbar_hideevent_isbase) {
            kedittoolbar_hideevent_isbase = false;
            KEditToolBar::hideEvent(event);
            return;
        }
        auto hideevent_cb = kedittoolbar_hideevent_callback;
        if (hideevent_cb) {
            QHideEvent* cbval1 = event;

            hideevent_cb(this, cbval1);
            return;
        }
        KEditToolBar::hideEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void setVisible(bool visible) override {
        if (kedittoolbar_setvisible_isbase) {
            kedittoolbar_setvisible_isbase = false;
            KEditToolBar::setVisible(visible);
            return;
        }
        auto setvisible_cb = kedittoolbar_setvisible_callback;
        if (setvisible_cb) {
            bool cbval1 = visible;

            setvisible_cb(this, cbval1);
            return;
        }
        KEditToolBar::setVisible(visible);
    }

    // Virtual method for C ABI access and custom callback
    virtual QSize sizeHint() const override {
        if (kedittoolbar_sizehint_isbase) {
            kedittoolbar_sizehint_isbase = false;
            return KEditToolBar::sizeHint();
        }
        auto sizehint_cb = kedittoolbar_sizehint_callback;
        if (sizehint_cb) {
            QSize* callback_ret = sizehint_cb();
            return *callback_ret;
        }
        return KEditToolBar::sizeHint();
    }

    // Virtual method for C ABI access and custom callback
    virtual QSize minimumSizeHint() const override {
        if (kedittoolbar_minimumsizehint_isbase) {
            kedittoolbar_minimumsizehint_isbase = false;
            return KEditToolBar::minimumSizeHint();
        }
        auto minimumsizehint_cb = kedittoolbar_minimumsizehint_callback;
        if (minimumsizehint_cb) {
            QSize* callback_ret = minimumsizehint_cb();
            return *callback_ret;
        }
        return KEditToolBar::minimumSizeHint();
    }

    // Virtual method for C ABI access and custom callback
    virtual void open() override {
        if (kedittoolbar_open_isbase) {
            kedittoolbar_open_isbase = false;
            KEditToolBar::open();
            return;
        }
        auto open_cb = kedittoolbar_open_callback;
        if (open_cb) {
            open_cb();
            return;
        }
        KEditToolBar::open();
    }

    // Virtual method for C ABI access and custom callback
    virtual int exec() override {
        if (kedittoolbar_exec_isbase) {
            kedittoolbar_exec_isbase = false;
            return KEditToolBar::exec();
        }
        auto exec_cb = kedittoolbar_exec_callback;
        if (exec_cb) {
            int callback_ret = exec_cb();
            return static_cast<int>(callback_ret);
        }
        return KEditToolBar::exec();
    }

    // Virtual method for C ABI access and custom callback
    virtual void done(int param1) override {
        if (kedittoolbar_done_isbase) {
            kedittoolbar_done_isbase = false;
            KEditToolBar::done(param1);
            return;
        }
        auto done_cb = kedittoolbar_done_callback;
        if (done_cb) {
            int cbval1 = param1;

            done_cb(this, cbval1);
            return;
        }
        KEditToolBar::done(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual void accept() override {
        if (kedittoolbar_accept_isbase) {
            kedittoolbar_accept_isbase = false;
            KEditToolBar::accept();
            return;
        }
        auto accept_cb = kedittoolbar_accept_callback;
        if (accept_cb) {
            accept_cb();
            return;
        }
        KEditToolBar::accept();
    }

    // Virtual method for C ABI access and custom callback
    virtual void reject() override {
        if (kedittoolbar_reject_isbase) {
            kedittoolbar_reject_isbase = false;
            KEditToolBar::reject();
            return;
        }
        auto reject_cb = kedittoolbar_reject_callback;
        if (reject_cb) {
            reject_cb();
            return;
        }
        KEditToolBar::reject();
    }

    // Virtual method for C ABI access and custom callback
    virtual void keyPressEvent(QKeyEvent* param1) override {
        if (kedittoolbar_keypressevent_isbase) {
            kedittoolbar_keypressevent_isbase = false;
            KEditToolBar::keyPressEvent(param1);
            return;
        }
        auto keypressevent_cb = kedittoolbar_keypressevent_callback;
        if (keypressevent_cb) {
            QKeyEvent* cbval1 = param1;

            keypressevent_cb(this, cbval1);
            return;
        }
        KEditToolBar::keyPressEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual void closeEvent(QCloseEvent* param1) override {
        if (kedittoolbar_closeevent_isbase) {
            kedittoolbar_closeevent_isbase = false;
            KEditToolBar::closeEvent(param1);
            return;
        }
        auto closeevent_cb = kedittoolbar_closeevent_callback;
        if (closeevent_cb) {
            QCloseEvent* cbval1 = param1;

            closeevent_cb(this, cbval1);
            return;
        }
        KEditToolBar::closeEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual void resizeEvent(QResizeEvent* param1) override {
        if (kedittoolbar_resizeevent_isbase) {
            kedittoolbar_resizeevent_isbase = false;
            KEditToolBar::resizeEvent(param1);
            return;
        }
        auto resizeevent_cb = kedittoolbar_resizeevent_callback;
        if (resizeevent_cb) {
            QResizeEvent* cbval1 = param1;

            resizeevent_cb(this, cbval1);
            return;
        }
        KEditToolBar::resizeEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual void contextMenuEvent(QContextMenuEvent* param1) override {
        if (kedittoolbar_contextmenuevent_isbase) {
            kedittoolbar_contextmenuevent_isbase = false;
            KEditToolBar::contextMenuEvent(param1);
            return;
        }
        auto contextmenuevent_cb = kedittoolbar_contextmenuevent_callback;
        if (contextmenuevent_cb) {
            QContextMenuEvent* cbval1 = param1;

            contextmenuevent_cb(this, cbval1);
            return;
        }
        KEditToolBar::contextMenuEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* param1, QEvent* param2) override {
        if (kedittoolbar_eventfilter_isbase) {
            kedittoolbar_eventfilter_isbase = false;
            return KEditToolBar::eventFilter(param1, param2);
        }
        auto eventfilter_cb = kedittoolbar_eventfilter_callback;
        if (eventfilter_cb) {
            QObject* cbval1 = param1;
            QEvent* cbval2 = param2;

            bool callback_ret = eventfilter_cb(this, cbval1, cbval2);
            return callback_ret;
        }
        return KEditToolBar::eventFilter(param1, param2);
    }

    // Virtual method for C ABI access and custom callback
    virtual int devType() const override {
        if (kedittoolbar_devtype_isbase) {
            kedittoolbar_devtype_isbase = false;
            return KEditToolBar::devType();
        }
        auto devtype_cb = kedittoolbar_devtype_callback;
        if (devtype_cb) {
            int callback_ret = devtype_cb();
            return static_cast<int>(callback_ret);
        }
        return KEditToolBar::devType();
    }

    // Virtual method for C ABI access and custom callback
    virtual int heightForWidth(int param1) const override {
        if (kedittoolbar_heightforwidth_isbase) {
            kedittoolbar_heightforwidth_isbase = false;
            return KEditToolBar::heightForWidth(param1);
        }
        auto heightforwidth_cb = kedittoolbar_heightforwidth_callback;
        if (heightforwidth_cb) {
            int cbval1 = param1;

            int callback_ret = heightforwidth_cb(this, cbval1);
            return static_cast<int>(callback_ret);
        }
        return KEditToolBar::heightForWidth(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool hasHeightForWidth() const override {
        if (kedittoolbar_hasheightforwidth_isbase) {
            kedittoolbar_hasheightforwidth_isbase = false;
            return KEditToolBar::hasHeightForWidth();
        }
        auto hasheightforwidth_cb = kedittoolbar_hasheightforwidth_callback;
        if (hasheightforwidth_cb) {
            bool callback_ret = hasheightforwidth_cb();
            return callback_ret;
        }
        return KEditToolBar::hasHeightForWidth();
    }

    // Virtual method for C ABI access and custom callback
    virtual QPaintEngine* paintEngine() const override {
        if (kedittoolbar_paintengine_isbase) {
            kedittoolbar_paintengine_isbase = false;
            return KEditToolBar::paintEngine();
        }
        auto paintengine_cb = kedittoolbar_paintengine_callback;
        if (paintengine_cb) {
            QPaintEngine* callback_ret = paintengine_cb();
            return callback_ret;
        }
        return KEditToolBar::paintEngine();
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* event) override {
        if (kedittoolbar_event_isbase) {
            kedittoolbar_event_isbase = false;
            return KEditToolBar::event(event);
        }
        auto event_cb = kedittoolbar_event_callback;
        if (event_cb) {
            QEvent* cbval1 = event;

            bool callback_ret = event_cb(this, cbval1);
            return callback_ret;
        }
        return KEditToolBar::event(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void mousePressEvent(QMouseEvent* event) override {
        if (kedittoolbar_mousepressevent_isbase) {
            kedittoolbar_mousepressevent_isbase = false;
            KEditToolBar::mousePressEvent(event);
            return;
        }
        auto mousepressevent_cb = kedittoolbar_mousepressevent_callback;
        if (mousepressevent_cb) {
            QMouseEvent* cbval1 = event;

            mousepressevent_cb(this, cbval1);
            return;
        }
        KEditToolBar::mousePressEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseReleaseEvent(QMouseEvent* event) override {
        if (kedittoolbar_mousereleaseevent_isbase) {
            kedittoolbar_mousereleaseevent_isbase = false;
            KEditToolBar::mouseReleaseEvent(event);
            return;
        }
        auto mousereleaseevent_cb = kedittoolbar_mousereleaseevent_callback;
        if (mousereleaseevent_cb) {
            QMouseEvent* cbval1 = event;

            mousereleaseevent_cb(this, cbval1);
            return;
        }
        KEditToolBar::mouseReleaseEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseDoubleClickEvent(QMouseEvent* event) override {
        if (kedittoolbar_mousedoubleclickevent_isbase) {
            kedittoolbar_mousedoubleclickevent_isbase = false;
            KEditToolBar::mouseDoubleClickEvent(event);
            return;
        }
        auto mousedoubleclickevent_cb = kedittoolbar_mousedoubleclickevent_callback;
        if (mousedoubleclickevent_cb) {
            QMouseEvent* cbval1 = event;

            mousedoubleclickevent_cb(this, cbval1);
            return;
        }
        KEditToolBar::mouseDoubleClickEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseMoveEvent(QMouseEvent* event) override {
        if (kedittoolbar_mousemoveevent_isbase) {
            kedittoolbar_mousemoveevent_isbase = false;
            KEditToolBar::mouseMoveEvent(event);
            return;
        }
        auto mousemoveevent_cb = kedittoolbar_mousemoveevent_callback;
        if (mousemoveevent_cb) {
            QMouseEvent* cbval1 = event;

            mousemoveevent_cb(this, cbval1);
            return;
        }
        KEditToolBar::mouseMoveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void wheelEvent(QWheelEvent* event) override {
        if (kedittoolbar_wheelevent_isbase) {
            kedittoolbar_wheelevent_isbase = false;
            KEditToolBar::wheelEvent(event);
            return;
        }
        auto wheelevent_cb = kedittoolbar_wheelevent_callback;
        if (wheelevent_cb) {
            QWheelEvent* cbval1 = event;

            wheelevent_cb(this, cbval1);
            return;
        }
        KEditToolBar::wheelEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void keyReleaseEvent(QKeyEvent* event) override {
        if (kedittoolbar_keyreleaseevent_isbase) {
            kedittoolbar_keyreleaseevent_isbase = false;
            KEditToolBar::keyReleaseEvent(event);
            return;
        }
        auto keyreleaseevent_cb = kedittoolbar_keyreleaseevent_callback;
        if (keyreleaseevent_cb) {
            QKeyEvent* cbval1 = event;

            keyreleaseevent_cb(this, cbval1);
            return;
        }
        KEditToolBar::keyReleaseEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void focusInEvent(QFocusEvent* event) override {
        if (kedittoolbar_focusinevent_isbase) {
            kedittoolbar_focusinevent_isbase = false;
            KEditToolBar::focusInEvent(event);
            return;
        }
        auto focusinevent_cb = kedittoolbar_focusinevent_callback;
        if (focusinevent_cb) {
            QFocusEvent* cbval1 = event;

            focusinevent_cb(this, cbval1);
            return;
        }
        KEditToolBar::focusInEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void focusOutEvent(QFocusEvent* event) override {
        if (kedittoolbar_focusoutevent_isbase) {
            kedittoolbar_focusoutevent_isbase = false;
            KEditToolBar::focusOutEvent(event);
            return;
        }
        auto focusoutevent_cb = kedittoolbar_focusoutevent_callback;
        if (focusoutevent_cb) {
            QFocusEvent* cbval1 = event;

            focusoutevent_cb(this, cbval1);
            return;
        }
        KEditToolBar::focusOutEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void enterEvent(QEnterEvent* event) override {
        if (kedittoolbar_enterevent_isbase) {
            kedittoolbar_enterevent_isbase = false;
            KEditToolBar::enterEvent(event);
            return;
        }
        auto enterevent_cb = kedittoolbar_enterevent_callback;
        if (enterevent_cb) {
            QEnterEvent* cbval1 = event;

            enterevent_cb(this, cbval1);
            return;
        }
        KEditToolBar::enterEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void leaveEvent(QEvent* event) override {
        if (kedittoolbar_leaveevent_isbase) {
            kedittoolbar_leaveevent_isbase = false;
            KEditToolBar::leaveEvent(event);
            return;
        }
        auto leaveevent_cb = kedittoolbar_leaveevent_callback;
        if (leaveevent_cb) {
            QEvent* cbval1 = event;

            leaveevent_cb(this, cbval1);
            return;
        }
        KEditToolBar::leaveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void paintEvent(QPaintEvent* event) override {
        if (kedittoolbar_paintevent_isbase) {
            kedittoolbar_paintevent_isbase = false;
            KEditToolBar::paintEvent(event);
            return;
        }
        auto paintevent_cb = kedittoolbar_paintevent_callback;
        if (paintevent_cb) {
            QPaintEvent* cbval1 = event;

            paintevent_cb(this, cbval1);
            return;
        }
        KEditToolBar::paintEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void moveEvent(QMoveEvent* event) override {
        if (kedittoolbar_moveevent_isbase) {
            kedittoolbar_moveevent_isbase = false;
            KEditToolBar::moveEvent(event);
            return;
        }
        auto moveevent_cb = kedittoolbar_moveevent_callback;
        if (moveevent_cb) {
            QMoveEvent* cbval1 = event;

            moveevent_cb(this, cbval1);
            return;
        }
        KEditToolBar::moveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void tabletEvent(QTabletEvent* event) override {
        if (kedittoolbar_tabletevent_isbase) {
            kedittoolbar_tabletevent_isbase = false;
            KEditToolBar::tabletEvent(event);
            return;
        }
        auto tabletevent_cb = kedittoolbar_tabletevent_callback;
        if (tabletevent_cb) {
            QTabletEvent* cbval1 = event;

            tabletevent_cb(this, cbval1);
            return;
        }
        KEditToolBar::tabletEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void actionEvent(QActionEvent* event) override {
        if (kedittoolbar_actionevent_isbase) {
            kedittoolbar_actionevent_isbase = false;
            KEditToolBar::actionEvent(event);
            return;
        }
        auto actionevent_cb = kedittoolbar_actionevent_callback;
        if (actionevent_cb) {
            QActionEvent* cbval1 = event;

            actionevent_cb(this, cbval1);
            return;
        }
        KEditToolBar::actionEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragEnterEvent(QDragEnterEvent* event) override {
        if (kedittoolbar_dragenterevent_isbase) {
            kedittoolbar_dragenterevent_isbase = false;
            KEditToolBar::dragEnterEvent(event);
            return;
        }
        auto dragenterevent_cb = kedittoolbar_dragenterevent_callback;
        if (dragenterevent_cb) {
            QDragEnterEvent* cbval1 = event;

            dragenterevent_cb(this, cbval1);
            return;
        }
        KEditToolBar::dragEnterEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragMoveEvent(QDragMoveEvent* event) override {
        if (kedittoolbar_dragmoveevent_isbase) {
            kedittoolbar_dragmoveevent_isbase = false;
            KEditToolBar::dragMoveEvent(event);
            return;
        }
        auto dragmoveevent_cb = kedittoolbar_dragmoveevent_callback;
        if (dragmoveevent_cb) {
            QDragMoveEvent* cbval1 = event;

            dragmoveevent_cb(this, cbval1);
            return;
        }
        KEditToolBar::dragMoveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragLeaveEvent(QDragLeaveEvent* event) override {
        if (kedittoolbar_dragleaveevent_isbase) {
            kedittoolbar_dragleaveevent_isbase = false;
            KEditToolBar::dragLeaveEvent(event);
            return;
        }
        auto dragleaveevent_cb = kedittoolbar_dragleaveevent_callback;
        if (dragleaveevent_cb) {
            QDragLeaveEvent* cbval1 = event;

            dragleaveevent_cb(this, cbval1);
            return;
        }
        KEditToolBar::dragLeaveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void dropEvent(QDropEvent* event) override {
        if (kedittoolbar_dropevent_isbase) {
            kedittoolbar_dropevent_isbase = false;
            KEditToolBar::dropEvent(event);
            return;
        }
        auto dropevent_cb = kedittoolbar_dropevent_callback;
        if (dropevent_cb) {
            QDropEvent* cbval1 = event;

            dropevent_cb(this, cbval1);
            return;
        }
        KEditToolBar::dropEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool nativeEvent(const QByteArray& eventType, void* message, qintptr* result) override {
        if (kedittoolbar_nativeevent_isbase) {
            kedittoolbar_nativeevent_isbase = false;
            return KEditToolBar::nativeEvent(eventType, message, result);
        }
        auto nativeevent_cb = kedittoolbar_nativeevent_callback;
        if (nativeevent_cb) {
            const QByteArray eventType_qb = eventType;
            libqt_string eventType_str;
            eventType_str.len = eventType_qb.length();
            eventType_str.data = static_cast<char*>(malloc(eventType_str.len));
            memcpy((void*)eventType_str.data, eventType_qb.data(), eventType_str.len);
            libqt_string cbval1 = eventType_str;
            void* cbval2 = message;
            qintptr* result_ret = result;
            intptr_t* cbval3 = (intptr_t*)(result_ret);

            bool callback_ret = nativeevent_cb(this, cbval1, cbval2, cbval3);
            libqt_free(eventType_str.data);
            return callback_ret;
        }
        return KEditToolBar::nativeEvent(eventType, message, result);
    }

    // Virtual method for C ABI access and custom callback
    virtual void changeEvent(QEvent* param1) override {
        if (kedittoolbar_changeevent_isbase) {
            kedittoolbar_changeevent_isbase = false;
            KEditToolBar::changeEvent(param1);
            return;
        }
        auto changeevent_cb = kedittoolbar_changeevent_callback;
        if (changeevent_cb) {
            QEvent* cbval1 = param1;

            changeevent_cb(this, cbval1);
            return;
        }
        KEditToolBar::changeEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual int metric(QPaintDevice::PaintDeviceMetric param1) const override {
        if (kedittoolbar_metric_isbase) {
            kedittoolbar_metric_isbase = false;
            return KEditToolBar::metric(param1);
        }
        auto metric_cb = kedittoolbar_metric_callback;
        if (metric_cb) {
            int cbval1 = static_cast<int>(param1);

            int callback_ret = metric_cb(this, cbval1);
            return static_cast<int>(callback_ret);
        }
        return KEditToolBar::metric(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual void initPainter(QPainter* painter) const override {
        if (kedittoolbar_initpainter_isbase) {
            kedittoolbar_initpainter_isbase = false;
            KEditToolBar::initPainter(painter);
            return;
        }
        auto initpainter_cb = kedittoolbar_initpainter_callback;
        if (initpainter_cb) {
            QPainter* cbval1 = painter;

            initpainter_cb(this, cbval1);
            return;
        }
        KEditToolBar::initPainter(painter);
    }

    // Virtual method for C ABI access and custom callback
    virtual QPaintDevice* redirected(QPoint* offset) const override {
        if (kedittoolbar_redirected_isbase) {
            kedittoolbar_redirected_isbase = false;
            return KEditToolBar::redirected(offset);
        }
        auto redirected_cb = kedittoolbar_redirected_callback;
        if (redirected_cb) {
            QPoint* cbval1 = offset;

            QPaintDevice* callback_ret = redirected_cb(this, cbval1);
            return callback_ret;
        }
        return KEditToolBar::redirected(offset);
    }

    // Virtual method for C ABI access and custom callback
    virtual QPainter* sharedPainter() const override {
        if (kedittoolbar_sharedpainter_isbase) {
            kedittoolbar_sharedpainter_isbase = false;
            return KEditToolBar::sharedPainter();
        }
        auto sharedpainter_cb = kedittoolbar_sharedpainter_callback;
        if (sharedpainter_cb) {
            QPainter* callback_ret = sharedpainter_cb();
            return callback_ret;
        }
        return KEditToolBar::sharedPainter();
    }

    // Virtual method for C ABI access and custom callback
    virtual void inputMethodEvent(QInputMethodEvent* param1) override {
        if (kedittoolbar_inputmethodevent_isbase) {
            kedittoolbar_inputmethodevent_isbase = false;
            KEditToolBar::inputMethodEvent(param1);
            return;
        }
        auto inputmethodevent_cb = kedittoolbar_inputmethodevent_callback;
        if (inputmethodevent_cb) {
            QInputMethodEvent* cbval1 = param1;

            inputmethodevent_cb(this, cbval1);
            return;
        }
        KEditToolBar::inputMethodEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual QVariant inputMethodQuery(Qt::InputMethodQuery param1) const override {
        if (kedittoolbar_inputmethodquery_isbase) {
            kedittoolbar_inputmethodquery_isbase = false;
            return KEditToolBar::inputMethodQuery(param1);
        }
        auto inputmethodquery_cb = kedittoolbar_inputmethodquery_callback;
        if (inputmethodquery_cb) {
            int cbval1 = static_cast<int>(param1);

            QVariant* callback_ret = inputmethodquery_cb(this, cbval1);
            return *callback_ret;
        }
        return KEditToolBar::inputMethodQuery(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool focusNextPrevChild(bool next) override {
        if (kedittoolbar_focusnextprevchild_isbase) {
            kedittoolbar_focusnextprevchild_isbase = false;
            return KEditToolBar::focusNextPrevChild(next);
        }
        auto focusnextprevchild_cb = kedittoolbar_focusnextprevchild_callback;
        if (focusnextprevchild_cb) {
            bool cbval1 = next;

            bool callback_ret = focusnextprevchild_cb(this, cbval1);
            return callback_ret;
        }
        return KEditToolBar::focusNextPrevChild(next);
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (kedittoolbar_timerevent_isbase) {
            kedittoolbar_timerevent_isbase = false;
            KEditToolBar::timerEvent(event);
            return;
        }
        auto timerevent_cb = kedittoolbar_timerevent_callback;
        if (timerevent_cb) {
            QTimerEvent* cbval1 = event;

            timerevent_cb(this, cbval1);
            return;
        }
        KEditToolBar::timerEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (kedittoolbar_childevent_isbase) {
            kedittoolbar_childevent_isbase = false;
            KEditToolBar::childEvent(event);
            return;
        }
        auto childevent_cb = kedittoolbar_childevent_callback;
        if (childevent_cb) {
            QChildEvent* cbval1 = event;

            childevent_cb(this, cbval1);
            return;
        }
        KEditToolBar::childEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (kedittoolbar_customevent_isbase) {
            kedittoolbar_customevent_isbase = false;
            KEditToolBar::customEvent(event);
            return;
        }
        auto customevent_cb = kedittoolbar_customevent_callback;
        if (customevent_cb) {
            QEvent* cbval1 = event;

            customevent_cb(this, cbval1);
            return;
        }
        KEditToolBar::customEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (kedittoolbar_connectnotify_isbase) {
            kedittoolbar_connectnotify_isbase = false;
            KEditToolBar::connectNotify(signal);
            return;
        }
        auto connectnotify_cb = kedittoolbar_connectnotify_callback;
        if (connectnotify_cb) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            connectnotify_cb(this, cbval1);
            return;
        }
        KEditToolBar::connectNotify(signal);
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (kedittoolbar_disconnectnotify_isbase) {
            kedittoolbar_disconnectnotify_isbase = false;
            KEditToolBar::disconnectNotify(signal);
            return;
        }
        auto disconnectnotify_cb = kedittoolbar_disconnectnotify_callback;
        if (disconnectnotify_cb) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            disconnectnotify_cb(this, cbval1);
            return;
        }
        KEditToolBar::disconnectNotify(signal);
    }

    // Virtual method for C ABI access and custom callback
    void adjustPosition(QWidget* param1) {
        if (kedittoolbar_adjustposition_isbase) {
            kedittoolbar_adjustposition_isbase = false;
            KEditToolBar::adjustPosition(param1);
            return;
        }
        auto adjustposition_cb = kedittoolbar_adjustposition_callback;
        if (adjustposition_cb) {
            QWidget* cbval1 = param1;

            adjustposition_cb(this, cbval1);
            return;
        }
        KEditToolBar::adjustPosition(param1);
    }

    // Virtual method for C ABI access and custom callback
    void updateMicroFocus() {
        if (kedittoolbar_updatemicrofocus_isbase) {
            kedittoolbar_updatemicrofocus_isbase = false;
            KEditToolBar::updateMicroFocus();
            return;
        }
        auto updatemicrofocus_cb = kedittoolbar_updatemicrofocus_callback;
        if (updatemicrofocus_cb) {
            updatemicrofocus_cb();
            return;
        }
        KEditToolBar::updateMicroFocus();
    }

    // Virtual method for C ABI access and custom callback
    void create() {
        if (kedittoolbar_create_isbase) {
            kedittoolbar_create_isbase = false;
            KEditToolBar::create();
            return;
        }
        auto create_cb = kedittoolbar_create_callback;
        if (create_cb) {
            create_cb();
            return;
        }
        KEditToolBar::create();
    }

    // Virtual method for C ABI access and custom callback
    void destroy() {
        if (kedittoolbar_destroy_isbase) {
            kedittoolbar_destroy_isbase = false;
            KEditToolBar::destroy();
            return;
        }
        auto destroy_cb = kedittoolbar_destroy_callback;
        if (destroy_cb) {
            destroy_cb();
            return;
        }
        KEditToolBar::destroy();
    }

    // Virtual method for C ABI access and custom callback
    bool focusNextChild() {
        if (kedittoolbar_focusnextchild_isbase) {
            kedittoolbar_focusnextchild_isbase = false;
            return KEditToolBar::focusNextChild();
        }
        auto focusnextchild_cb = kedittoolbar_focusnextchild_callback;
        if (focusnextchild_cb) {
            bool callback_ret = focusnextchild_cb();
            return callback_ret;
        }
        return KEditToolBar::focusNextChild();
    }

    // Virtual method for C ABI access and custom callback
    bool focusPreviousChild() {
        if (kedittoolbar_focuspreviouschild_isbase) {
            kedittoolbar_focuspreviouschild_isbase = false;
            return KEditToolBar::focusPreviousChild();
        }
        auto focuspreviouschild_cb = kedittoolbar_focuspreviouschild_callback;
        if (focuspreviouschild_cb) {
            bool callback_ret = focuspreviouschild_cb();
            return callback_ret;
        }
        return KEditToolBar::focusPreviousChild();
    }

    // Virtual method for C ABI access and custom callback
    QObject* sender() const {
        if (kedittoolbar_sender_isbase) {
            kedittoolbar_sender_isbase = false;
            return KEditToolBar::sender();
        }
        auto sender_cb = kedittoolbar_sender_callback;
        if (sender_cb) {
            QObject* callback_ret = sender_cb();
            return callback_ret;
        }
        return KEditToolBar::sender();
    }

    // Virtual method for C ABI access and custom callback
    int senderSignalIndex() const {
        if (kedittoolbar_sendersignalindex_isbase) {
            kedittoolbar_sendersignalindex_isbase = false;
            return KEditToolBar::senderSignalIndex();
        }
        auto sendersignalindex_cb = kedittoolbar_sendersignalindex_callback;
        if (sendersignalindex_cb) {
            int callback_ret = sendersignalindex_cb();
            return static_cast<int>(callback_ret);
        }
        return KEditToolBar::senderSignalIndex();
    }

    // Virtual method for C ABI access and custom callback
    int receivers(const char* signal) const {
        if (kedittoolbar_receivers_isbase) {
            kedittoolbar_receivers_isbase = false;
            return KEditToolBar::receivers(signal);
        }
        auto receivers_cb = kedittoolbar_receivers_callback;
        if (receivers_cb) {
            const char* cbval1 = (const char*)signal;

            int callback_ret = receivers_cb(this, cbval1);
            return static_cast<int>(callback_ret);
        }
        return KEditToolBar::receivers(signal);
    }

    // Virtual method for C ABI access and custom callback
    bool isSignalConnected(const QMetaMethod& signal) const {
        if (kedittoolbar_issignalconnected_isbase) {
            kedittoolbar_issignalconnected_isbase = false;
            return KEditToolBar::isSignalConnected(signal);
        }
        auto issignalconnected_cb = kedittoolbar_issignalconnected_callback;
        if (issignalconnected_cb) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            bool callback_ret = issignalconnected_cb(this, cbval1);
            return callback_ret;
        }
        return KEditToolBar::isSignalConnected(signal);
    }

    // Virtual method for C ABI access and custom callback
    double getDecodedMetricF(QPaintDevice::PaintDeviceMetric metricA, QPaintDevice::PaintDeviceMetric metricB) const {
        if (kedittoolbar_getdecodedmetricf_isbase) {
            kedittoolbar_getdecodedmetricf_isbase = false;
            return KEditToolBar::getDecodedMetricF(metricA, metricB);
        }
        auto getdecodedmetricf_cb = kedittoolbar_getdecodedmetricf_callback;
        if (getdecodedmetricf_cb) {
            int cbval1 = static_cast<int>(metricA);
            int cbval2 = static_cast<int>(metricB);

            double callback_ret = getdecodedmetricf_cb(this, cbval1, cbval2);
            return static_cast<double>(callback_ret);
        }
        return KEditToolBar::getDecodedMetricF(metricA, metricB);
    }

    // Friend functions
    friend void KEditToolBar_ShowEvent(KEditToolBar* self, QShowEvent* event);
    friend void KEditToolBar_SuperShowEvent(KEditToolBar* self, QShowEvent* event);
    friend void KEditToolBar_HideEvent(KEditToolBar* self, QHideEvent* event);
    friend void KEditToolBar_SuperHideEvent(KEditToolBar* self, QHideEvent* event);
    friend void KEditToolBar_KeyPressEvent(KEditToolBar* self, QKeyEvent* param1);
    friend void KEditToolBar_SuperKeyPressEvent(KEditToolBar* self, QKeyEvent* param1);
    friend void KEditToolBar_CloseEvent(KEditToolBar* self, QCloseEvent* param1);
    friend void KEditToolBar_SuperCloseEvent(KEditToolBar* self, QCloseEvent* param1);
    friend void KEditToolBar_ResizeEvent(KEditToolBar* self, QResizeEvent* param1);
    friend void KEditToolBar_SuperResizeEvent(KEditToolBar* self, QResizeEvent* param1);
    friend void KEditToolBar_ContextMenuEvent(KEditToolBar* self, QContextMenuEvent* param1);
    friend void KEditToolBar_SuperContextMenuEvent(KEditToolBar* self, QContextMenuEvent* param1);
    friend bool KEditToolBar_EventFilter(KEditToolBar* self, QObject* param1, QEvent* param2);
    friend bool KEditToolBar_SuperEventFilter(KEditToolBar* self, QObject* param1, QEvent* param2);
    friend bool KEditToolBar_Event(KEditToolBar* self, QEvent* event);
    friend bool KEditToolBar_SuperEvent(KEditToolBar* self, QEvent* event);
    friend void KEditToolBar_MousePressEvent(KEditToolBar* self, QMouseEvent* event);
    friend void KEditToolBar_SuperMousePressEvent(KEditToolBar* self, QMouseEvent* event);
    friend void KEditToolBar_MouseReleaseEvent(KEditToolBar* self, QMouseEvent* event);
    friend void KEditToolBar_SuperMouseReleaseEvent(KEditToolBar* self, QMouseEvent* event);
    friend void KEditToolBar_MouseDoubleClickEvent(KEditToolBar* self, QMouseEvent* event);
    friend void KEditToolBar_SuperMouseDoubleClickEvent(KEditToolBar* self, QMouseEvent* event);
    friend void KEditToolBar_MouseMoveEvent(KEditToolBar* self, QMouseEvent* event);
    friend void KEditToolBar_SuperMouseMoveEvent(KEditToolBar* self, QMouseEvent* event);
    friend void KEditToolBar_WheelEvent(KEditToolBar* self, QWheelEvent* event);
    friend void KEditToolBar_SuperWheelEvent(KEditToolBar* self, QWheelEvent* event);
    friend void KEditToolBar_KeyReleaseEvent(KEditToolBar* self, QKeyEvent* event);
    friend void KEditToolBar_SuperKeyReleaseEvent(KEditToolBar* self, QKeyEvent* event);
    friend void KEditToolBar_FocusInEvent(KEditToolBar* self, QFocusEvent* event);
    friend void KEditToolBar_SuperFocusInEvent(KEditToolBar* self, QFocusEvent* event);
    friend void KEditToolBar_FocusOutEvent(KEditToolBar* self, QFocusEvent* event);
    friend void KEditToolBar_SuperFocusOutEvent(KEditToolBar* self, QFocusEvent* event);
    friend void KEditToolBar_EnterEvent(KEditToolBar* self, QEnterEvent* event);
    friend void KEditToolBar_SuperEnterEvent(KEditToolBar* self, QEnterEvent* event);
    friend void KEditToolBar_LeaveEvent(KEditToolBar* self, QEvent* event);
    friend void KEditToolBar_SuperLeaveEvent(KEditToolBar* self, QEvent* event);
    friend void KEditToolBar_PaintEvent(KEditToolBar* self, QPaintEvent* event);
    friend void KEditToolBar_SuperPaintEvent(KEditToolBar* self, QPaintEvent* event);
    friend void KEditToolBar_MoveEvent(KEditToolBar* self, QMoveEvent* event);
    friend void KEditToolBar_SuperMoveEvent(KEditToolBar* self, QMoveEvent* event);
    friend void KEditToolBar_TabletEvent(KEditToolBar* self, QTabletEvent* event);
    friend void KEditToolBar_SuperTabletEvent(KEditToolBar* self, QTabletEvent* event);
    friend void KEditToolBar_ActionEvent(KEditToolBar* self, QActionEvent* event);
    friend void KEditToolBar_SuperActionEvent(KEditToolBar* self, QActionEvent* event);
    friend void KEditToolBar_DragEnterEvent(KEditToolBar* self, QDragEnterEvent* event);
    friend void KEditToolBar_SuperDragEnterEvent(KEditToolBar* self, QDragEnterEvent* event);
    friend void KEditToolBar_DragMoveEvent(KEditToolBar* self, QDragMoveEvent* event);
    friend void KEditToolBar_SuperDragMoveEvent(KEditToolBar* self, QDragMoveEvent* event);
    friend void KEditToolBar_DragLeaveEvent(KEditToolBar* self, QDragLeaveEvent* event);
    friend void KEditToolBar_SuperDragLeaveEvent(KEditToolBar* self, QDragLeaveEvent* event);
    friend void KEditToolBar_DropEvent(KEditToolBar* self, QDropEvent* event);
    friend void KEditToolBar_SuperDropEvent(KEditToolBar* self, QDropEvent* event);
    friend bool KEditToolBar_NativeEvent(KEditToolBar* self, const libqt_string eventType, void* message, intptr_t* result);
    friend bool KEditToolBar_SuperNativeEvent(KEditToolBar* self, const libqt_string eventType, void* message, intptr_t* result);
    friend void KEditToolBar_ChangeEvent(KEditToolBar* self, QEvent* param1);
    friend void KEditToolBar_SuperChangeEvent(KEditToolBar* self, QEvent* param1);
    friend int KEditToolBar_Metric(const KEditToolBar* self, int param1);
    friend int KEditToolBar_SuperMetric(const KEditToolBar* self, int param1);
    friend void KEditToolBar_InitPainter(const KEditToolBar* self, QPainter* painter);
    friend void KEditToolBar_SuperInitPainter(const KEditToolBar* self, QPainter* painter);
    friend QPaintDevice* KEditToolBar_Redirected(const KEditToolBar* self, QPoint* offset);
    friend QPaintDevice* KEditToolBar_SuperRedirected(const KEditToolBar* self, QPoint* offset);
    friend QPainter* KEditToolBar_SharedPainter(const KEditToolBar* self);
    friend QPainter* KEditToolBar_SuperSharedPainter(const KEditToolBar* self);
    friend void KEditToolBar_InputMethodEvent(KEditToolBar* self, QInputMethodEvent* param1);
    friend void KEditToolBar_SuperInputMethodEvent(KEditToolBar* self, QInputMethodEvent* param1);
    friend bool KEditToolBar_FocusNextPrevChild(KEditToolBar* self, bool next);
    friend bool KEditToolBar_SuperFocusNextPrevChild(KEditToolBar* self, bool next);
    friend void KEditToolBar_TimerEvent(KEditToolBar* self, QTimerEvent* event);
    friend void KEditToolBar_SuperTimerEvent(KEditToolBar* self, QTimerEvent* event);
    friend void KEditToolBar_ChildEvent(KEditToolBar* self, QChildEvent* event);
    friend void KEditToolBar_SuperChildEvent(KEditToolBar* self, QChildEvent* event);
    friend void KEditToolBar_CustomEvent(KEditToolBar* self, QEvent* event);
    friend void KEditToolBar_SuperCustomEvent(KEditToolBar* self, QEvent* event);
    friend void KEditToolBar_ConnectNotify(KEditToolBar* self, const QMetaMethod* signal);
    friend void KEditToolBar_SuperConnectNotify(KEditToolBar* self, const QMetaMethod* signal);
    friend void KEditToolBar_DisconnectNotify(KEditToolBar* self, const QMetaMethod* signal);
    friend void KEditToolBar_SuperDisconnectNotify(KEditToolBar* self, const QMetaMethod* signal);
    friend void KEditToolBar_AdjustPosition(KEditToolBar* self, QWidget* param1);
    friend void KEditToolBar_SuperAdjustPosition(KEditToolBar* self, QWidget* param1);
    friend void KEditToolBar_UpdateMicroFocus(KEditToolBar* self);
    friend void KEditToolBar_SuperUpdateMicroFocus(KEditToolBar* self);
    friend void KEditToolBar_Create(KEditToolBar* self);
    friend void KEditToolBar_SuperCreate(KEditToolBar* self);
    friend void KEditToolBar_Destroy(KEditToolBar* self);
    friend void KEditToolBar_SuperDestroy(KEditToolBar* self);
    friend bool KEditToolBar_FocusNextChild(KEditToolBar* self);
    friend bool KEditToolBar_SuperFocusNextChild(KEditToolBar* self);
    friend bool KEditToolBar_FocusPreviousChild(KEditToolBar* self);
    friend bool KEditToolBar_SuperFocusPreviousChild(KEditToolBar* self);
    friend QObject* KEditToolBar_Sender(const KEditToolBar* self);
    friend QObject* KEditToolBar_SuperSender(const KEditToolBar* self);
    friend int KEditToolBar_SenderSignalIndex(const KEditToolBar* self);
    friend int KEditToolBar_SuperSenderSignalIndex(const KEditToolBar* self);
    friend int KEditToolBar_Receivers(const KEditToolBar* self, const char* signal);
    friend int KEditToolBar_SuperReceivers(const KEditToolBar* self, const char* signal);
    friend bool KEditToolBar_IsSignalConnected(const KEditToolBar* self, const QMetaMethod* signal);
    friend bool KEditToolBar_SuperIsSignalConnected(const KEditToolBar* self, const QMetaMethod* signal);
    friend double KEditToolBar_GetDecodedMetricF(const KEditToolBar* self, int metricA, int metricB);
    friend double KEditToolBar_SuperGetDecodedMetricF(const KEditToolBar* self, int metricA, int metricB);
};

#endif
