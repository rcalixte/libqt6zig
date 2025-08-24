#pragma once
#ifndef SRC_EXTRAS_KWIDGETSADDONSC_LIBVIRTUALKPAGEVIEW_H
#define SRC_EXTRAS_KWIDGETSADDONSC_LIBVIRTUALKPAGEVIEW_H

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

// This class is a subclass of KPageView so that we can call protected methods
class VirtualKPageView final : public KPageView {

  public:
    // Virtual class boolean flag
    bool isVirtualKPageView = true;

    // Virtual class public types (including callbacks)
    using KPageView_Metacall_Callback = int (*)(KPageView*, int, int, void**);
    using KPageView_CreateView_Callback = QAbstractItemView* (*)();
    using KPageView_ShowPageHeader_Callback = bool (*)();
    using KPageView_ViewPosition_Callback = int (*)();
    using KPageView_DevType_Callback = int (*)();
    using KPageView_SetVisible_Callback = void (*)(KPageView*, bool);
    using KPageView_SizeHint_Callback = QSize* (*)();
    using KPageView_MinimumSizeHint_Callback = QSize* (*)();
    using KPageView_HeightForWidth_Callback = int (*)(const KPageView*, int);
    using KPageView_HasHeightForWidth_Callback = bool (*)();
    using KPageView_PaintEngine_Callback = QPaintEngine* (*)();
    using KPageView_Event_Callback = bool (*)(KPageView*, QEvent*);
    using KPageView_MousePressEvent_Callback = void (*)(KPageView*, QMouseEvent*);
    using KPageView_MouseReleaseEvent_Callback = void (*)(KPageView*, QMouseEvent*);
    using KPageView_MouseDoubleClickEvent_Callback = void (*)(KPageView*, QMouseEvent*);
    using KPageView_MouseMoveEvent_Callback = void (*)(KPageView*, QMouseEvent*);
    using KPageView_WheelEvent_Callback = void (*)(KPageView*, QWheelEvent*);
    using KPageView_KeyPressEvent_Callback = void (*)(KPageView*, QKeyEvent*);
    using KPageView_KeyReleaseEvent_Callback = void (*)(KPageView*, QKeyEvent*);
    using KPageView_FocusInEvent_Callback = void (*)(KPageView*, QFocusEvent*);
    using KPageView_FocusOutEvent_Callback = void (*)(KPageView*, QFocusEvent*);
    using KPageView_EnterEvent_Callback = void (*)(KPageView*, QEnterEvent*);
    using KPageView_LeaveEvent_Callback = void (*)(KPageView*, QEvent*);
    using KPageView_PaintEvent_Callback = void (*)(KPageView*, QPaintEvent*);
    using KPageView_MoveEvent_Callback = void (*)(KPageView*, QMoveEvent*);
    using KPageView_ResizeEvent_Callback = void (*)(KPageView*, QResizeEvent*);
    using KPageView_CloseEvent_Callback = void (*)(KPageView*, QCloseEvent*);
    using KPageView_ContextMenuEvent_Callback = void (*)(KPageView*, QContextMenuEvent*);
    using KPageView_TabletEvent_Callback = void (*)(KPageView*, QTabletEvent*);
    using KPageView_ActionEvent_Callback = void (*)(KPageView*, QActionEvent*);
    using KPageView_DragEnterEvent_Callback = void (*)(KPageView*, QDragEnterEvent*);
    using KPageView_DragMoveEvent_Callback = void (*)(KPageView*, QDragMoveEvent*);
    using KPageView_DragLeaveEvent_Callback = void (*)(KPageView*, QDragLeaveEvent*);
    using KPageView_DropEvent_Callback = void (*)(KPageView*, QDropEvent*);
    using KPageView_ShowEvent_Callback = void (*)(KPageView*, QShowEvent*);
    using KPageView_HideEvent_Callback = void (*)(KPageView*, QHideEvent*);
    using KPageView_NativeEvent_Callback = bool (*)(KPageView*, libqt_string, void*, intptr_t*);
    using KPageView_ChangeEvent_Callback = void (*)(KPageView*, QEvent*);
    using KPageView_Metric_Callback = int (*)(const KPageView*, int);
    using KPageView_InitPainter_Callback = void (*)(const KPageView*, QPainter*);
    using KPageView_Redirected_Callback = QPaintDevice* (*)(const KPageView*, QPoint*);
    using KPageView_SharedPainter_Callback = QPainter* (*)();
    using KPageView_InputMethodEvent_Callback = void (*)(KPageView*, QInputMethodEvent*);
    using KPageView_InputMethodQuery_Callback = QVariant* (*)(const KPageView*, int);
    using KPageView_FocusNextPrevChild_Callback = bool (*)(KPageView*, bool);
    using KPageView_EventFilter_Callback = bool (*)(KPageView*, QObject*, QEvent*);
    using KPageView_TimerEvent_Callback = void (*)(KPageView*, QTimerEvent*);
    using KPageView_ChildEvent_Callback = void (*)(KPageView*, QChildEvent*);
    using KPageView_CustomEvent_Callback = void (*)(KPageView*, QEvent*);
    using KPageView_ConnectNotify_Callback = void (*)(KPageView*, QMetaMethod*);
    using KPageView_DisconnectNotify_Callback = void (*)(KPageView*, QMetaMethod*);
    using KPageView_UpdateMicroFocus_Callback = void (*)();
    using KPageView_Create_Callback = void (*)();
    using KPageView_Destroy_Callback = void (*)();
    using KPageView_FocusNextChild_Callback = bool (*)();
    using KPageView_FocusPreviousChild_Callback = bool (*)();
    using KPageView_Sender_Callback = QObject* (*)();
    using KPageView_SenderSignalIndex_Callback = int (*)();
    using KPageView_Receivers_Callback = int (*)(const KPageView*, const char*);
    using KPageView_IsSignalConnected_Callback = bool (*)(const KPageView*, QMetaMethod*);
    using KPageView_GetDecodedMetricF_Callback = double (*)(const KPageView*, int, int);

  protected:
    // Instance callback storage
    KPageView_Metacall_Callback kpageview_metacall_callback = nullptr;
    KPageView_CreateView_Callback kpageview_createview_callback = nullptr;
    KPageView_ShowPageHeader_Callback kpageview_showpageheader_callback = nullptr;
    KPageView_ViewPosition_Callback kpageview_viewposition_callback = nullptr;
    KPageView_DevType_Callback kpageview_devtype_callback = nullptr;
    KPageView_SetVisible_Callback kpageview_setvisible_callback = nullptr;
    KPageView_SizeHint_Callback kpageview_sizehint_callback = nullptr;
    KPageView_MinimumSizeHint_Callback kpageview_minimumsizehint_callback = nullptr;
    KPageView_HeightForWidth_Callback kpageview_heightforwidth_callback = nullptr;
    KPageView_HasHeightForWidth_Callback kpageview_hasheightforwidth_callback = nullptr;
    KPageView_PaintEngine_Callback kpageview_paintengine_callback = nullptr;
    KPageView_Event_Callback kpageview_event_callback = nullptr;
    KPageView_MousePressEvent_Callback kpageview_mousepressevent_callback = nullptr;
    KPageView_MouseReleaseEvent_Callback kpageview_mousereleaseevent_callback = nullptr;
    KPageView_MouseDoubleClickEvent_Callback kpageview_mousedoubleclickevent_callback = nullptr;
    KPageView_MouseMoveEvent_Callback kpageview_mousemoveevent_callback = nullptr;
    KPageView_WheelEvent_Callback kpageview_wheelevent_callback = nullptr;
    KPageView_KeyPressEvent_Callback kpageview_keypressevent_callback = nullptr;
    KPageView_KeyReleaseEvent_Callback kpageview_keyreleaseevent_callback = nullptr;
    KPageView_FocusInEvent_Callback kpageview_focusinevent_callback = nullptr;
    KPageView_FocusOutEvent_Callback kpageview_focusoutevent_callback = nullptr;
    KPageView_EnterEvent_Callback kpageview_enterevent_callback = nullptr;
    KPageView_LeaveEvent_Callback kpageview_leaveevent_callback = nullptr;
    KPageView_PaintEvent_Callback kpageview_paintevent_callback = nullptr;
    KPageView_MoveEvent_Callback kpageview_moveevent_callback = nullptr;
    KPageView_ResizeEvent_Callback kpageview_resizeevent_callback = nullptr;
    KPageView_CloseEvent_Callback kpageview_closeevent_callback = nullptr;
    KPageView_ContextMenuEvent_Callback kpageview_contextmenuevent_callback = nullptr;
    KPageView_TabletEvent_Callback kpageview_tabletevent_callback = nullptr;
    KPageView_ActionEvent_Callback kpageview_actionevent_callback = nullptr;
    KPageView_DragEnterEvent_Callback kpageview_dragenterevent_callback = nullptr;
    KPageView_DragMoveEvent_Callback kpageview_dragmoveevent_callback = nullptr;
    KPageView_DragLeaveEvent_Callback kpageview_dragleaveevent_callback = nullptr;
    KPageView_DropEvent_Callback kpageview_dropevent_callback = nullptr;
    KPageView_ShowEvent_Callback kpageview_showevent_callback = nullptr;
    KPageView_HideEvent_Callback kpageview_hideevent_callback = nullptr;
    KPageView_NativeEvent_Callback kpageview_nativeevent_callback = nullptr;
    KPageView_ChangeEvent_Callback kpageview_changeevent_callback = nullptr;
    KPageView_Metric_Callback kpageview_metric_callback = nullptr;
    KPageView_InitPainter_Callback kpageview_initpainter_callback = nullptr;
    KPageView_Redirected_Callback kpageview_redirected_callback = nullptr;
    KPageView_SharedPainter_Callback kpageview_sharedpainter_callback = nullptr;
    KPageView_InputMethodEvent_Callback kpageview_inputmethodevent_callback = nullptr;
    KPageView_InputMethodQuery_Callback kpageview_inputmethodquery_callback = nullptr;
    KPageView_FocusNextPrevChild_Callback kpageview_focusnextprevchild_callback = nullptr;
    KPageView_EventFilter_Callback kpageview_eventfilter_callback = nullptr;
    KPageView_TimerEvent_Callback kpageview_timerevent_callback = nullptr;
    KPageView_ChildEvent_Callback kpageview_childevent_callback = nullptr;
    KPageView_CustomEvent_Callback kpageview_customevent_callback = nullptr;
    KPageView_ConnectNotify_Callback kpageview_connectnotify_callback = nullptr;
    KPageView_DisconnectNotify_Callback kpageview_disconnectnotify_callback = nullptr;
    KPageView_UpdateMicroFocus_Callback kpageview_updatemicrofocus_callback = nullptr;
    KPageView_Create_Callback kpageview_create_callback = nullptr;
    KPageView_Destroy_Callback kpageview_destroy_callback = nullptr;
    KPageView_FocusNextChild_Callback kpageview_focusnextchild_callback = nullptr;
    KPageView_FocusPreviousChild_Callback kpageview_focuspreviouschild_callback = nullptr;
    KPageView_Sender_Callback kpageview_sender_callback = nullptr;
    KPageView_SenderSignalIndex_Callback kpageview_sendersignalindex_callback = nullptr;
    KPageView_Receivers_Callback kpageview_receivers_callback = nullptr;
    KPageView_IsSignalConnected_Callback kpageview_issignalconnected_callback = nullptr;
    KPageView_GetDecodedMetricF_Callback kpageview_getdecodedmetricf_callback = nullptr;

    // Instance base flags
    mutable bool kpageview_metacall_isbase = false;
    mutable bool kpageview_createview_isbase = false;
    mutable bool kpageview_showpageheader_isbase = false;
    mutable bool kpageview_viewposition_isbase = false;
    mutable bool kpageview_devtype_isbase = false;
    mutable bool kpageview_setvisible_isbase = false;
    mutable bool kpageview_sizehint_isbase = false;
    mutable bool kpageview_minimumsizehint_isbase = false;
    mutable bool kpageview_heightforwidth_isbase = false;
    mutable bool kpageview_hasheightforwidth_isbase = false;
    mutable bool kpageview_paintengine_isbase = false;
    mutable bool kpageview_event_isbase = false;
    mutable bool kpageview_mousepressevent_isbase = false;
    mutable bool kpageview_mousereleaseevent_isbase = false;
    mutable bool kpageview_mousedoubleclickevent_isbase = false;
    mutable bool kpageview_mousemoveevent_isbase = false;
    mutable bool kpageview_wheelevent_isbase = false;
    mutable bool kpageview_keypressevent_isbase = false;
    mutable bool kpageview_keyreleaseevent_isbase = false;
    mutable bool kpageview_focusinevent_isbase = false;
    mutable bool kpageview_focusoutevent_isbase = false;
    mutable bool kpageview_enterevent_isbase = false;
    mutable bool kpageview_leaveevent_isbase = false;
    mutable bool kpageview_paintevent_isbase = false;
    mutable bool kpageview_moveevent_isbase = false;
    mutable bool kpageview_resizeevent_isbase = false;
    mutable bool kpageview_closeevent_isbase = false;
    mutable bool kpageview_contextmenuevent_isbase = false;
    mutable bool kpageview_tabletevent_isbase = false;
    mutable bool kpageview_actionevent_isbase = false;
    mutable bool kpageview_dragenterevent_isbase = false;
    mutable bool kpageview_dragmoveevent_isbase = false;
    mutable bool kpageview_dragleaveevent_isbase = false;
    mutable bool kpageview_dropevent_isbase = false;
    mutable bool kpageview_showevent_isbase = false;
    mutable bool kpageview_hideevent_isbase = false;
    mutable bool kpageview_nativeevent_isbase = false;
    mutable bool kpageview_changeevent_isbase = false;
    mutable bool kpageview_metric_isbase = false;
    mutable bool kpageview_initpainter_isbase = false;
    mutable bool kpageview_redirected_isbase = false;
    mutable bool kpageview_sharedpainter_isbase = false;
    mutable bool kpageview_inputmethodevent_isbase = false;
    mutable bool kpageview_inputmethodquery_isbase = false;
    mutable bool kpageview_focusnextprevchild_isbase = false;
    mutable bool kpageview_eventfilter_isbase = false;
    mutable bool kpageview_timerevent_isbase = false;
    mutable bool kpageview_childevent_isbase = false;
    mutable bool kpageview_customevent_isbase = false;
    mutable bool kpageview_connectnotify_isbase = false;
    mutable bool kpageview_disconnectnotify_isbase = false;
    mutable bool kpageview_updatemicrofocus_isbase = false;
    mutable bool kpageview_create_isbase = false;
    mutable bool kpageview_destroy_isbase = false;
    mutable bool kpageview_focusnextchild_isbase = false;
    mutable bool kpageview_focuspreviouschild_isbase = false;
    mutable bool kpageview_sender_isbase = false;
    mutable bool kpageview_sendersignalindex_isbase = false;
    mutable bool kpageview_receivers_isbase = false;
    mutable bool kpageview_issignalconnected_isbase = false;
    mutable bool kpageview_getdecodedmetricf_isbase = false;

  public:
    VirtualKPageView(QWidget* parent) : KPageView(parent) {};
    VirtualKPageView() : KPageView() {};

    ~VirtualKPageView() {
        kpageview_metacall_callback = nullptr;
        kpageview_createview_callback = nullptr;
        kpageview_showpageheader_callback = nullptr;
        kpageview_viewposition_callback = nullptr;
        kpageview_devtype_callback = nullptr;
        kpageview_setvisible_callback = nullptr;
        kpageview_sizehint_callback = nullptr;
        kpageview_minimumsizehint_callback = nullptr;
        kpageview_heightforwidth_callback = nullptr;
        kpageview_hasheightforwidth_callback = nullptr;
        kpageview_paintengine_callback = nullptr;
        kpageview_event_callback = nullptr;
        kpageview_mousepressevent_callback = nullptr;
        kpageview_mousereleaseevent_callback = nullptr;
        kpageview_mousedoubleclickevent_callback = nullptr;
        kpageview_mousemoveevent_callback = nullptr;
        kpageview_wheelevent_callback = nullptr;
        kpageview_keypressevent_callback = nullptr;
        kpageview_keyreleaseevent_callback = nullptr;
        kpageview_focusinevent_callback = nullptr;
        kpageview_focusoutevent_callback = nullptr;
        kpageview_enterevent_callback = nullptr;
        kpageview_leaveevent_callback = nullptr;
        kpageview_paintevent_callback = nullptr;
        kpageview_moveevent_callback = nullptr;
        kpageview_resizeevent_callback = nullptr;
        kpageview_closeevent_callback = nullptr;
        kpageview_contextmenuevent_callback = nullptr;
        kpageview_tabletevent_callback = nullptr;
        kpageview_actionevent_callback = nullptr;
        kpageview_dragenterevent_callback = nullptr;
        kpageview_dragmoveevent_callback = nullptr;
        kpageview_dragleaveevent_callback = nullptr;
        kpageview_dropevent_callback = nullptr;
        kpageview_showevent_callback = nullptr;
        kpageview_hideevent_callback = nullptr;
        kpageview_nativeevent_callback = nullptr;
        kpageview_changeevent_callback = nullptr;
        kpageview_metric_callback = nullptr;
        kpageview_initpainter_callback = nullptr;
        kpageview_redirected_callback = nullptr;
        kpageview_sharedpainter_callback = nullptr;
        kpageview_inputmethodevent_callback = nullptr;
        kpageview_inputmethodquery_callback = nullptr;
        kpageview_focusnextprevchild_callback = nullptr;
        kpageview_eventfilter_callback = nullptr;
        kpageview_timerevent_callback = nullptr;
        kpageview_childevent_callback = nullptr;
        kpageview_customevent_callback = nullptr;
        kpageview_connectnotify_callback = nullptr;
        kpageview_disconnectnotify_callback = nullptr;
        kpageview_updatemicrofocus_callback = nullptr;
        kpageview_create_callback = nullptr;
        kpageview_destroy_callback = nullptr;
        kpageview_focusnextchild_callback = nullptr;
        kpageview_focuspreviouschild_callback = nullptr;
        kpageview_sender_callback = nullptr;
        kpageview_sendersignalindex_callback = nullptr;
        kpageview_receivers_callback = nullptr;
        kpageview_issignalconnected_callback = nullptr;
        kpageview_getdecodedmetricf_callback = nullptr;
    }

    // Callback setters
    inline void setKPageView_Metacall_Callback(KPageView_Metacall_Callback cb) { kpageview_metacall_callback = cb; }
    inline void setKPageView_CreateView_Callback(KPageView_CreateView_Callback cb) { kpageview_createview_callback = cb; }
    inline void setKPageView_ShowPageHeader_Callback(KPageView_ShowPageHeader_Callback cb) { kpageview_showpageheader_callback = cb; }
    inline void setKPageView_ViewPosition_Callback(KPageView_ViewPosition_Callback cb) { kpageview_viewposition_callback = cb; }
    inline void setKPageView_DevType_Callback(KPageView_DevType_Callback cb) { kpageview_devtype_callback = cb; }
    inline void setKPageView_SetVisible_Callback(KPageView_SetVisible_Callback cb) { kpageview_setvisible_callback = cb; }
    inline void setKPageView_SizeHint_Callback(KPageView_SizeHint_Callback cb) { kpageview_sizehint_callback = cb; }
    inline void setKPageView_MinimumSizeHint_Callback(KPageView_MinimumSizeHint_Callback cb) { kpageview_minimumsizehint_callback = cb; }
    inline void setKPageView_HeightForWidth_Callback(KPageView_HeightForWidth_Callback cb) { kpageview_heightforwidth_callback = cb; }
    inline void setKPageView_HasHeightForWidth_Callback(KPageView_HasHeightForWidth_Callback cb) { kpageview_hasheightforwidth_callback = cb; }
    inline void setKPageView_PaintEngine_Callback(KPageView_PaintEngine_Callback cb) { kpageview_paintengine_callback = cb; }
    inline void setKPageView_Event_Callback(KPageView_Event_Callback cb) { kpageview_event_callback = cb; }
    inline void setKPageView_MousePressEvent_Callback(KPageView_MousePressEvent_Callback cb) { kpageview_mousepressevent_callback = cb; }
    inline void setKPageView_MouseReleaseEvent_Callback(KPageView_MouseReleaseEvent_Callback cb) { kpageview_mousereleaseevent_callback = cb; }
    inline void setKPageView_MouseDoubleClickEvent_Callback(KPageView_MouseDoubleClickEvent_Callback cb) { kpageview_mousedoubleclickevent_callback = cb; }
    inline void setKPageView_MouseMoveEvent_Callback(KPageView_MouseMoveEvent_Callback cb) { kpageview_mousemoveevent_callback = cb; }
    inline void setKPageView_WheelEvent_Callback(KPageView_WheelEvent_Callback cb) { kpageview_wheelevent_callback = cb; }
    inline void setKPageView_KeyPressEvent_Callback(KPageView_KeyPressEvent_Callback cb) { kpageview_keypressevent_callback = cb; }
    inline void setKPageView_KeyReleaseEvent_Callback(KPageView_KeyReleaseEvent_Callback cb) { kpageview_keyreleaseevent_callback = cb; }
    inline void setKPageView_FocusInEvent_Callback(KPageView_FocusInEvent_Callback cb) { kpageview_focusinevent_callback = cb; }
    inline void setKPageView_FocusOutEvent_Callback(KPageView_FocusOutEvent_Callback cb) { kpageview_focusoutevent_callback = cb; }
    inline void setKPageView_EnterEvent_Callback(KPageView_EnterEvent_Callback cb) { kpageview_enterevent_callback = cb; }
    inline void setKPageView_LeaveEvent_Callback(KPageView_LeaveEvent_Callback cb) { kpageview_leaveevent_callback = cb; }
    inline void setKPageView_PaintEvent_Callback(KPageView_PaintEvent_Callback cb) { kpageview_paintevent_callback = cb; }
    inline void setKPageView_MoveEvent_Callback(KPageView_MoveEvent_Callback cb) { kpageview_moveevent_callback = cb; }
    inline void setKPageView_ResizeEvent_Callback(KPageView_ResizeEvent_Callback cb) { kpageview_resizeevent_callback = cb; }
    inline void setKPageView_CloseEvent_Callback(KPageView_CloseEvent_Callback cb) { kpageview_closeevent_callback = cb; }
    inline void setKPageView_ContextMenuEvent_Callback(KPageView_ContextMenuEvent_Callback cb) { kpageview_contextmenuevent_callback = cb; }
    inline void setKPageView_TabletEvent_Callback(KPageView_TabletEvent_Callback cb) { kpageview_tabletevent_callback = cb; }
    inline void setKPageView_ActionEvent_Callback(KPageView_ActionEvent_Callback cb) { kpageview_actionevent_callback = cb; }
    inline void setKPageView_DragEnterEvent_Callback(KPageView_DragEnterEvent_Callback cb) { kpageview_dragenterevent_callback = cb; }
    inline void setKPageView_DragMoveEvent_Callback(KPageView_DragMoveEvent_Callback cb) { kpageview_dragmoveevent_callback = cb; }
    inline void setKPageView_DragLeaveEvent_Callback(KPageView_DragLeaveEvent_Callback cb) { kpageview_dragleaveevent_callback = cb; }
    inline void setKPageView_DropEvent_Callback(KPageView_DropEvent_Callback cb) { kpageview_dropevent_callback = cb; }
    inline void setKPageView_ShowEvent_Callback(KPageView_ShowEvent_Callback cb) { kpageview_showevent_callback = cb; }
    inline void setKPageView_HideEvent_Callback(KPageView_HideEvent_Callback cb) { kpageview_hideevent_callback = cb; }
    inline void setKPageView_NativeEvent_Callback(KPageView_NativeEvent_Callback cb) { kpageview_nativeevent_callback = cb; }
    inline void setKPageView_ChangeEvent_Callback(KPageView_ChangeEvent_Callback cb) { kpageview_changeevent_callback = cb; }
    inline void setKPageView_Metric_Callback(KPageView_Metric_Callback cb) { kpageview_metric_callback = cb; }
    inline void setKPageView_InitPainter_Callback(KPageView_InitPainter_Callback cb) { kpageview_initpainter_callback = cb; }
    inline void setKPageView_Redirected_Callback(KPageView_Redirected_Callback cb) { kpageview_redirected_callback = cb; }
    inline void setKPageView_SharedPainter_Callback(KPageView_SharedPainter_Callback cb) { kpageview_sharedpainter_callback = cb; }
    inline void setKPageView_InputMethodEvent_Callback(KPageView_InputMethodEvent_Callback cb) { kpageview_inputmethodevent_callback = cb; }
    inline void setKPageView_InputMethodQuery_Callback(KPageView_InputMethodQuery_Callback cb) { kpageview_inputmethodquery_callback = cb; }
    inline void setKPageView_FocusNextPrevChild_Callback(KPageView_FocusNextPrevChild_Callback cb) { kpageview_focusnextprevchild_callback = cb; }
    inline void setKPageView_EventFilter_Callback(KPageView_EventFilter_Callback cb) { kpageview_eventfilter_callback = cb; }
    inline void setKPageView_TimerEvent_Callback(KPageView_TimerEvent_Callback cb) { kpageview_timerevent_callback = cb; }
    inline void setKPageView_ChildEvent_Callback(KPageView_ChildEvent_Callback cb) { kpageview_childevent_callback = cb; }
    inline void setKPageView_CustomEvent_Callback(KPageView_CustomEvent_Callback cb) { kpageview_customevent_callback = cb; }
    inline void setKPageView_ConnectNotify_Callback(KPageView_ConnectNotify_Callback cb) { kpageview_connectnotify_callback = cb; }
    inline void setKPageView_DisconnectNotify_Callback(KPageView_DisconnectNotify_Callback cb) { kpageview_disconnectnotify_callback = cb; }
    inline void setKPageView_UpdateMicroFocus_Callback(KPageView_UpdateMicroFocus_Callback cb) { kpageview_updatemicrofocus_callback = cb; }
    inline void setKPageView_Create_Callback(KPageView_Create_Callback cb) { kpageview_create_callback = cb; }
    inline void setKPageView_Destroy_Callback(KPageView_Destroy_Callback cb) { kpageview_destroy_callback = cb; }
    inline void setKPageView_FocusNextChild_Callback(KPageView_FocusNextChild_Callback cb) { kpageview_focusnextchild_callback = cb; }
    inline void setKPageView_FocusPreviousChild_Callback(KPageView_FocusPreviousChild_Callback cb) { kpageview_focuspreviouschild_callback = cb; }
    inline void setKPageView_Sender_Callback(KPageView_Sender_Callback cb) { kpageview_sender_callback = cb; }
    inline void setKPageView_SenderSignalIndex_Callback(KPageView_SenderSignalIndex_Callback cb) { kpageview_sendersignalindex_callback = cb; }
    inline void setKPageView_Receivers_Callback(KPageView_Receivers_Callback cb) { kpageview_receivers_callback = cb; }
    inline void setKPageView_IsSignalConnected_Callback(KPageView_IsSignalConnected_Callback cb) { kpageview_issignalconnected_callback = cb; }
    inline void setKPageView_GetDecodedMetricF_Callback(KPageView_GetDecodedMetricF_Callback cb) { kpageview_getdecodedmetricf_callback = cb; }

    // Base flag setters
    inline void setKPageView_Metacall_IsBase(bool value) const { kpageview_metacall_isbase = value; }
    inline void setKPageView_CreateView_IsBase(bool value) const { kpageview_createview_isbase = value; }
    inline void setKPageView_ShowPageHeader_IsBase(bool value) const { kpageview_showpageheader_isbase = value; }
    inline void setKPageView_ViewPosition_IsBase(bool value) const { kpageview_viewposition_isbase = value; }
    inline void setKPageView_DevType_IsBase(bool value) const { kpageview_devtype_isbase = value; }
    inline void setKPageView_SetVisible_IsBase(bool value) const { kpageview_setvisible_isbase = value; }
    inline void setKPageView_SizeHint_IsBase(bool value) const { kpageview_sizehint_isbase = value; }
    inline void setKPageView_MinimumSizeHint_IsBase(bool value) const { kpageview_minimumsizehint_isbase = value; }
    inline void setKPageView_HeightForWidth_IsBase(bool value) const { kpageview_heightforwidth_isbase = value; }
    inline void setKPageView_HasHeightForWidth_IsBase(bool value) const { kpageview_hasheightforwidth_isbase = value; }
    inline void setKPageView_PaintEngine_IsBase(bool value) const { kpageview_paintengine_isbase = value; }
    inline void setKPageView_Event_IsBase(bool value) const { kpageview_event_isbase = value; }
    inline void setKPageView_MousePressEvent_IsBase(bool value) const { kpageview_mousepressevent_isbase = value; }
    inline void setKPageView_MouseReleaseEvent_IsBase(bool value) const { kpageview_mousereleaseevent_isbase = value; }
    inline void setKPageView_MouseDoubleClickEvent_IsBase(bool value) const { kpageview_mousedoubleclickevent_isbase = value; }
    inline void setKPageView_MouseMoveEvent_IsBase(bool value) const { kpageview_mousemoveevent_isbase = value; }
    inline void setKPageView_WheelEvent_IsBase(bool value) const { kpageview_wheelevent_isbase = value; }
    inline void setKPageView_KeyPressEvent_IsBase(bool value) const { kpageview_keypressevent_isbase = value; }
    inline void setKPageView_KeyReleaseEvent_IsBase(bool value) const { kpageview_keyreleaseevent_isbase = value; }
    inline void setKPageView_FocusInEvent_IsBase(bool value) const { kpageview_focusinevent_isbase = value; }
    inline void setKPageView_FocusOutEvent_IsBase(bool value) const { kpageview_focusoutevent_isbase = value; }
    inline void setKPageView_EnterEvent_IsBase(bool value) const { kpageview_enterevent_isbase = value; }
    inline void setKPageView_LeaveEvent_IsBase(bool value) const { kpageview_leaveevent_isbase = value; }
    inline void setKPageView_PaintEvent_IsBase(bool value) const { kpageview_paintevent_isbase = value; }
    inline void setKPageView_MoveEvent_IsBase(bool value) const { kpageview_moveevent_isbase = value; }
    inline void setKPageView_ResizeEvent_IsBase(bool value) const { kpageview_resizeevent_isbase = value; }
    inline void setKPageView_CloseEvent_IsBase(bool value) const { kpageview_closeevent_isbase = value; }
    inline void setKPageView_ContextMenuEvent_IsBase(bool value) const { kpageview_contextmenuevent_isbase = value; }
    inline void setKPageView_TabletEvent_IsBase(bool value) const { kpageview_tabletevent_isbase = value; }
    inline void setKPageView_ActionEvent_IsBase(bool value) const { kpageview_actionevent_isbase = value; }
    inline void setKPageView_DragEnterEvent_IsBase(bool value) const { kpageview_dragenterevent_isbase = value; }
    inline void setKPageView_DragMoveEvent_IsBase(bool value) const { kpageview_dragmoveevent_isbase = value; }
    inline void setKPageView_DragLeaveEvent_IsBase(bool value) const { kpageview_dragleaveevent_isbase = value; }
    inline void setKPageView_DropEvent_IsBase(bool value) const { kpageview_dropevent_isbase = value; }
    inline void setKPageView_ShowEvent_IsBase(bool value) const { kpageview_showevent_isbase = value; }
    inline void setKPageView_HideEvent_IsBase(bool value) const { kpageview_hideevent_isbase = value; }
    inline void setKPageView_NativeEvent_IsBase(bool value) const { kpageview_nativeevent_isbase = value; }
    inline void setKPageView_ChangeEvent_IsBase(bool value) const { kpageview_changeevent_isbase = value; }
    inline void setKPageView_Metric_IsBase(bool value) const { kpageview_metric_isbase = value; }
    inline void setKPageView_InitPainter_IsBase(bool value) const { kpageview_initpainter_isbase = value; }
    inline void setKPageView_Redirected_IsBase(bool value) const { kpageview_redirected_isbase = value; }
    inline void setKPageView_SharedPainter_IsBase(bool value) const { kpageview_sharedpainter_isbase = value; }
    inline void setKPageView_InputMethodEvent_IsBase(bool value) const { kpageview_inputmethodevent_isbase = value; }
    inline void setKPageView_InputMethodQuery_IsBase(bool value) const { kpageview_inputmethodquery_isbase = value; }
    inline void setKPageView_FocusNextPrevChild_IsBase(bool value) const { kpageview_focusnextprevchild_isbase = value; }
    inline void setKPageView_EventFilter_IsBase(bool value) const { kpageview_eventfilter_isbase = value; }
    inline void setKPageView_TimerEvent_IsBase(bool value) const { kpageview_timerevent_isbase = value; }
    inline void setKPageView_ChildEvent_IsBase(bool value) const { kpageview_childevent_isbase = value; }
    inline void setKPageView_CustomEvent_IsBase(bool value) const { kpageview_customevent_isbase = value; }
    inline void setKPageView_ConnectNotify_IsBase(bool value) const { kpageview_connectnotify_isbase = value; }
    inline void setKPageView_DisconnectNotify_IsBase(bool value) const { kpageview_disconnectnotify_isbase = value; }
    inline void setKPageView_UpdateMicroFocus_IsBase(bool value) const { kpageview_updatemicrofocus_isbase = value; }
    inline void setKPageView_Create_IsBase(bool value) const { kpageview_create_isbase = value; }
    inline void setKPageView_Destroy_IsBase(bool value) const { kpageview_destroy_isbase = value; }
    inline void setKPageView_FocusNextChild_IsBase(bool value) const { kpageview_focusnextchild_isbase = value; }
    inline void setKPageView_FocusPreviousChild_IsBase(bool value) const { kpageview_focuspreviouschild_isbase = value; }
    inline void setKPageView_Sender_IsBase(bool value) const { kpageview_sender_isbase = value; }
    inline void setKPageView_SenderSignalIndex_IsBase(bool value) const { kpageview_sendersignalindex_isbase = value; }
    inline void setKPageView_Receivers_IsBase(bool value) const { kpageview_receivers_isbase = value; }
    inline void setKPageView_IsSignalConnected_IsBase(bool value) const { kpageview_issignalconnected_isbase = value; }
    inline void setKPageView_GetDecodedMetricF_IsBase(bool value) const { kpageview_getdecodedmetricf_isbase = value; }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (kpageview_metacall_isbase) {
            kpageview_metacall_isbase = false;
            return KPageView::qt_metacall(param1, param2, param3);
        } else if (kpageview_metacall_callback != nullptr) {
            int cbval1 = static_cast<int>(param1);
            int cbval2 = param2;
            void** cbval3 = param3;

            int callback_ret = kpageview_metacall_callback(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        } else {
            return KPageView::qt_metacall(param1, param2, param3);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QAbstractItemView* createView() override {
        if (kpageview_createview_isbase) {
            kpageview_createview_isbase = false;
            return KPageView::createView();
        } else if (kpageview_createview_callback != nullptr) {
            QAbstractItemView* callback_ret = kpageview_createview_callback();
            return callback_ret;
        } else {
            return KPageView::createView();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool showPageHeader() const override {
        if (kpageview_showpageheader_isbase) {
            kpageview_showpageheader_isbase = false;
            return KPageView::showPageHeader();
        } else if (kpageview_showpageheader_callback != nullptr) {
            bool callback_ret = kpageview_showpageheader_callback();
            return callback_ret;
        } else {
            return KPageView::showPageHeader();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual Qt::Alignment viewPosition() const override {
        if (kpageview_viewposition_isbase) {
            kpageview_viewposition_isbase = false;
            return KPageView::viewPosition();
        } else if (kpageview_viewposition_callback != nullptr) {
            int callback_ret = kpageview_viewposition_callback();
            return static_cast<Qt::Alignment>(callback_ret);
        } else {
            return KPageView::viewPosition();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual int devType() const override {
        if (kpageview_devtype_isbase) {
            kpageview_devtype_isbase = false;
            return KPageView::devType();
        } else if (kpageview_devtype_callback != nullptr) {
            int callback_ret = kpageview_devtype_callback();
            return static_cast<int>(callback_ret);
        } else {
            return KPageView::devType();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void setVisible(bool visible) override {
        if (kpageview_setvisible_isbase) {
            kpageview_setvisible_isbase = false;
            KPageView::setVisible(visible);
        } else if (kpageview_setvisible_callback != nullptr) {
            bool cbval1 = visible;

            kpageview_setvisible_callback(this, cbval1);
        } else {
            KPageView::setVisible(visible);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QSize sizeHint() const override {
        if (kpageview_sizehint_isbase) {
            kpageview_sizehint_isbase = false;
            return KPageView::sizeHint();
        } else if (kpageview_sizehint_callback != nullptr) {
            QSize* callback_ret = kpageview_sizehint_callback();
            return *callback_ret;
        } else {
            return KPageView::sizeHint();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QSize minimumSizeHint() const override {
        if (kpageview_minimumsizehint_isbase) {
            kpageview_minimumsizehint_isbase = false;
            return KPageView::minimumSizeHint();
        } else if (kpageview_minimumsizehint_callback != nullptr) {
            QSize* callback_ret = kpageview_minimumsizehint_callback();
            return *callback_ret;
        } else {
            return KPageView::minimumSizeHint();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual int heightForWidth(int param1) const override {
        if (kpageview_heightforwidth_isbase) {
            kpageview_heightforwidth_isbase = false;
            return KPageView::heightForWidth(param1);
        } else if (kpageview_heightforwidth_callback != nullptr) {
            int cbval1 = param1;

            int callback_ret = kpageview_heightforwidth_callback(this, cbval1);
            return static_cast<int>(callback_ret);
        } else {
            return KPageView::heightForWidth(param1);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool hasHeightForWidth() const override {
        if (kpageview_hasheightforwidth_isbase) {
            kpageview_hasheightforwidth_isbase = false;
            return KPageView::hasHeightForWidth();
        } else if (kpageview_hasheightforwidth_callback != nullptr) {
            bool callback_ret = kpageview_hasheightforwidth_callback();
            return callback_ret;
        } else {
            return KPageView::hasHeightForWidth();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QPaintEngine* paintEngine() const override {
        if (kpageview_paintengine_isbase) {
            kpageview_paintengine_isbase = false;
            return KPageView::paintEngine();
        } else if (kpageview_paintengine_callback != nullptr) {
            QPaintEngine* callback_ret = kpageview_paintengine_callback();
            return callback_ret;
        } else {
            return KPageView::paintEngine();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* event) override {
        if (kpageview_event_isbase) {
            kpageview_event_isbase = false;
            return KPageView::event(event);
        } else if (kpageview_event_callback != nullptr) {
            QEvent* cbval1 = event;

            bool callback_ret = kpageview_event_callback(this, cbval1);
            return callback_ret;
        } else {
            return KPageView::event(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void mousePressEvent(QMouseEvent* event) override {
        if (kpageview_mousepressevent_isbase) {
            kpageview_mousepressevent_isbase = false;
            KPageView::mousePressEvent(event);
        } else if (kpageview_mousepressevent_callback != nullptr) {
            QMouseEvent* cbval1 = event;

            kpageview_mousepressevent_callback(this, cbval1);
        } else {
            KPageView::mousePressEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseReleaseEvent(QMouseEvent* event) override {
        if (kpageview_mousereleaseevent_isbase) {
            kpageview_mousereleaseevent_isbase = false;
            KPageView::mouseReleaseEvent(event);
        } else if (kpageview_mousereleaseevent_callback != nullptr) {
            QMouseEvent* cbval1 = event;

            kpageview_mousereleaseevent_callback(this, cbval1);
        } else {
            KPageView::mouseReleaseEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseDoubleClickEvent(QMouseEvent* event) override {
        if (kpageview_mousedoubleclickevent_isbase) {
            kpageview_mousedoubleclickevent_isbase = false;
            KPageView::mouseDoubleClickEvent(event);
        } else if (kpageview_mousedoubleclickevent_callback != nullptr) {
            QMouseEvent* cbval1 = event;

            kpageview_mousedoubleclickevent_callback(this, cbval1);
        } else {
            KPageView::mouseDoubleClickEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseMoveEvent(QMouseEvent* event) override {
        if (kpageview_mousemoveevent_isbase) {
            kpageview_mousemoveevent_isbase = false;
            KPageView::mouseMoveEvent(event);
        } else if (kpageview_mousemoveevent_callback != nullptr) {
            QMouseEvent* cbval1 = event;

            kpageview_mousemoveevent_callback(this, cbval1);
        } else {
            KPageView::mouseMoveEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void wheelEvent(QWheelEvent* event) override {
        if (kpageview_wheelevent_isbase) {
            kpageview_wheelevent_isbase = false;
            KPageView::wheelEvent(event);
        } else if (kpageview_wheelevent_callback != nullptr) {
            QWheelEvent* cbval1 = event;

            kpageview_wheelevent_callback(this, cbval1);
        } else {
            KPageView::wheelEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void keyPressEvent(QKeyEvent* event) override {
        if (kpageview_keypressevent_isbase) {
            kpageview_keypressevent_isbase = false;
            KPageView::keyPressEvent(event);
        } else if (kpageview_keypressevent_callback != nullptr) {
            QKeyEvent* cbval1 = event;

            kpageview_keypressevent_callback(this, cbval1);
        } else {
            KPageView::keyPressEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void keyReleaseEvent(QKeyEvent* event) override {
        if (kpageview_keyreleaseevent_isbase) {
            kpageview_keyreleaseevent_isbase = false;
            KPageView::keyReleaseEvent(event);
        } else if (kpageview_keyreleaseevent_callback != nullptr) {
            QKeyEvent* cbval1 = event;

            kpageview_keyreleaseevent_callback(this, cbval1);
        } else {
            KPageView::keyReleaseEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void focusInEvent(QFocusEvent* event) override {
        if (kpageview_focusinevent_isbase) {
            kpageview_focusinevent_isbase = false;
            KPageView::focusInEvent(event);
        } else if (kpageview_focusinevent_callback != nullptr) {
            QFocusEvent* cbval1 = event;

            kpageview_focusinevent_callback(this, cbval1);
        } else {
            KPageView::focusInEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void focusOutEvent(QFocusEvent* event) override {
        if (kpageview_focusoutevent_isbase) {
            kpageview_focusoutevent_isbase = false;
            KPageView::focusOutEvent(event);
        } else if (kpageview_focusoutevent_callback != nullptr) {
            QFocusEvent* cbval1 = event;

            kpageview_focusoutevent_callback(this, cbval1);
        } else {
            KPageView::focusOutEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void enterEvent(QEnterEvent* event) override {
        if (kpageview_enterevent_isbase) {
            kpageview_enterevent_isbase = false;
            KPageView::enterEvent(event);
        } else if (kpageview_enterevent_callback != nullptr) {
            QEnterEvent* cbval1 = event;

            kpageview_enterevent_callback(this, cbval1);
        } else {
            KPageView::enterEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void leaveEvent(QEvent* event) override {
        if (kpageview_leaveevent_isbase) {
            kpageview_leaveevent_isbase = false;
            KPageView::leaveEvent(event);
        } else if (kpageview_leaveevent_callback != nullptr) {
            QEvent* cbval1 = event;

            kpageview_leaveevent_callback(this, cbval1);
        } else {
            KPageView::leaveEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void paintEvent(QPaintEvent* event) override {
        if (kpageview_paintevent_isbase) {
            kpageview_paintevent_isbase = false;
            KPageView::paintEvent(event);
        } else if (kpageview_paintevent_callback != nullptr) {
            QPaintEvent* cbval1 = event;

            kpageview_paintevent_callback(this, cbval1);
        } else {
            KPageView::paintEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void moveEvent(QMoveEvent* event) override {
        if (kpageview_moveevent_isbase) {
            kpageview_moveevent_isbase = false;
            KPageView::moveEvent(event);
        } else if (kpageview_moveevent_callback != nullptr) {
            QMoveEvent* cbval1 = event;

            kpageview_moveevent_callback(this, cbval1);
        } else {
            KPageView::moveEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void resizeEvent(QResizeEvent* event) override {
        if (kpageview_resizeevent_isbase) {
            kpageview_resizeevent_isbase = false;
            KPageView::resizeEvent(event);
        } else if (kpageview_resizeevent_callback != nullptr) {
            QResizeEvent* cbval1 = event;

            kpageview_resizeevent_callback(this, cbval1);
        } else {
            KPageView::resizeEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void closeEvent(QCloseEvent* event) override {
        if (kpageview_closeevent_isbase) {
            kpageview_closeevent_isbase = false;
            KPageView::closeEvent(event);
        } else if (kpageview_closeevent_callback != nullptr) {
            QCloseEvent* cbval1 = event;

            kpageview_closeevent_callback(this, cbval1);
        } else {
            KPageView::closeEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void contextMenuEvent(QContextMenuEvent* event) override {
        if (kpageview_contextmenuevent_isbase) {
            kpageview_contextmenuevent_isbase = false;
            KPageView::contextMenuEvent(event);
        } else if (kpageview_contextmenuevent_callback != nullptr) {
            QContextMenuEvent* cbval1 = event;

            kpageview_contextmenuevent_callback(this, cbval1);
        } else {
            KPageView::contextMenuEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void tabletEvent(QTabletEvent* event) override {
        if (kpageview_tabletevent_isbase) {
            kpageview_tabletevent_isbase = false;
            KPageView::tabletEvent(event);
        } else if (kpageview_tabletevent_callback != nullptr) {
            QTabletEvent* cbval1 = event;

            kpageview_tabletevent_callback(this, cbval1);
        } else {
            KPageView::tabletEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void actionEvent(QActionEvent* event) override {
        if (kpageview_actionevent_isbase) {
            kpageview_actionevent_isbase = false;
            KPageView::actionEvent(event);
        } else if (kpageview_actionevent_callback != nullptr) {
            QActionEvent* cbval1 = event;

            kpageview_actionevent_callback(this, cbval1);
        } else {
            KPageView::actionEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragEnterEvent(QDragEnterEvent* event) override {
        if (kpageview_dragenterevent_isbase) {
            kpageview_dragenterevent_isbase = false;
            KPageView::dragEnterEvent(event);
        } else if (kpageview_dragenterevent_callback != nullptr) {
            QDragEnterEvent* cbval1 = event;

            kpageview_dragenterevent_callback(this, cbval1);
        } else {
            KPageView::dragEnterEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragMoveEvent(QDragMoveEvent* event) override {
        if (kpageview_dragmoveevent_isbase) {
            kpageview_dragmoveevent_isbase = false;
            KPageView::dragMoveEvent(event);
        } else if (kpageview_dragmoveevent_callback != nullptr) {
            QDragMoveEvent* cbval1 = event;

            kpageview_dragmoveevent_callback(this, cbval1);
        } else {
            KPageView::dragMoveEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragLeaveEvent(QDragLeaveEvent* event) override {
        if (kpageview_dragleaveevent_isbase) {
            kpageview_dragleaveevent_isbase = false;
            KPageView::dragLeaveEvent(event);
        } else if (kpageview_dragleaveevent_callback != nullptr) {
            QDragLeaveEvent* cbval1 = event;

            kpageview_dragleaveevent_callback(this, cbval1);
        } else {
            KPageView::dragLeaveEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void dropEvent(QDropEvent* event) override {
        if (kpageview_dropevent_isbase) {
            kpageview_dropevent_isbase = false;
            KPageView::dropEvent(event);
        } else if (kpageview_dropevent_callback != nullptr) {
            QDropEvent* cbval1 = event;

            kpageview_dropevent_callback(this, cbval1);
        } else {
            KPageView::dropEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void showEvent(QShowEvent* event) override {
        if (kpageview_showevent_isbase) {
            kpageview_showevent_isbase = false;
            KPageView::showEvent(event);
        } else if (kpageview_showevent_callback != nullptr) {
            QShowEvent* cbval1 = event;

            kpageview_showevent_callback(this, cbval1);
        } else {
            KPageView::showEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void hideEvent(QHideEvent* event) override {
        if (kpageview_hideevent_isbase) {
            kpageview_hideevent_isbase = false;
            KPageView::hideEvent(event);
        } else if (kpageview_hideevent_callback != nullptr) {
            QHideEvent* cbval1 = event;

            kpageview_hideevent_callback(this, cbval1);
        } else {
            KPageView::hideEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool nativeEvent(const QByteArray& eventType, void* message, qintptr* result) override {
        if (kpageview_nativeevent_isbase) {
            kpageview_nativeevent_isbase = false;
            return KPageView::nativeEvent(eventType, message, result);
        } else if (kpageview_nativeevent_callback != nullptr) {
            const QByteArray eventType_qb = eventType;
            libqt_string eventType_str;
            eventType_str.len = eventType_qb.length();
            eventType_str.data = static_cast<const char*>(malloc(eventType_str.len + 1));
            memcpy((void*)eventType_str.data, eventType_qb.data(), eventType_str.len);
            ((char*)eventType_str.data)[eventType_str.len] = '\0';
            libqt_string cbval1 = eventType_str;
            void* cbval2 = message;
            qintptr* result_ret = result;
            intptr_t* cbval3 = (intptr_t*)(result_ret);

            bool callback_ret = kpageview_nativeevent_callback(this, cbval1, cbval2, cbval3);
            return callback_ret;
        } else {
            return KPageView::nativeEvent(eventType, message, result);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void changeEvent(QEvent* param1) override {
        if (kpageview_changeevent_isbase) {
            kpageview_changeevent_isbase = false;
            KPageView::changeEvent(param1);
        } else if (kpageview_changeevent_callback != nullptr) {
            QEvent* cbval1 = param1;

            kpageview_changeevent_callback(this, cbval1);
        } else {
            KPageView::changeEvent(param1);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual int metric(QPaintDevice::PaintDeviceMetric param1) const override {
        if (kpageview_metric_isbase) {
            kpageview_metric_isbase = false;
            return KPageView::metric(param1);
        } else if (kpageview_metric_callback != nullptr) {
            int cbval1 = static_cast<int>(param1);

            int callback_ret = kpageview_metric_callback(this, cbval1);
            return static_cast<int>(callback_ret);
        } else {
            return KPageView::metric(param1);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void initPainter(QPainter* painter) const override {
        if (kpageview_initpainter_isbase) {
            kpageview_initpainter_isbase = false;
            KPageView::initPainter(painter);
        } else if (kpageview_initpainter_callback != nullptr) {
            QPainter* cbval1 = painter;

            kpageview_initpainter_callback(this, cbval1);
        } else {
            KPageView::initPainter(painter);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QPaintDevice* redirected(QPoint* offset) const override {
        if (kpageview_redirected_isbase) {
            kpageview_redirected_isbase = false;
            return KPageView::redirected(offset);
        } else if (kpageview_redirected_callback != nullptr) {
            QPoint* cbval1 = offset;

            QPaintDevice* callback_ret = kpageview_redirected_callback(this, cbval1);
            return callback_ret;
        } else {
            return KPageView::redirected(offset);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QPainter* sharedPainter() const override {
        if (kpageview_sharedpainter_isbase) {
            kpageview_sharedpainter_isbase = false;
            return KPageView::sharedPainter();
        } else if (kpageview_sharedpainter_callback != nullptr) {
            QPainter* callback_ret = kpageview_sharedpainter_callback();
            return callback_ret;
        } else {
            return KPageView::sharedPainter();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void inputMethodEvent(QInputMethodEvent* param1) override {
        if (kpageview_inputmethodevent_isbase) {
            kpageview_inputmethodevent_isbase = false;
            KPageView::inputMethodEvent(param1);
        } else if (kpageview_inputmethodevent_callback != nullptr) {
            QInputMethodEvent* cbval1 = param1;

            kpageview_inputmethodevent_callback(this, cbval1);
        } else {
            KPageView::inputMethodEvent(param1);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QVariant inputMethodQuery(Qt::InputMethodQuery param1) const override {
        if (kpageview_inputmethodquery_isbase) {
            kpageview_inputmethodquery_isbase = false;
            return KPageView::inputMethodQuery(param1);
        } else if (kpageview_inputmethodquery_callback != nullptr) {
            int cbval1 = static_cast<int>(param1);

            QVariant* callback_ret = kpageview_inputmethodquery_callback(this, cbval1);
            return *callback_ret;
        } else {
            return KPageView::inputMethodQuery(param1);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool focusNextPrevChild(bool next) override {
        if (kpageview_focusnextprevchild_isbase) {
            kpageview_focusnextprevchild_isbase = false;
            return KPageView::focusNextPrevChild(next);
        } else if (kpageview_focusnextprevchild_callback != nullptr) {
            bool cbval1 = next;

            bool callback_ret = kpageview_focusnextprevchild_callback(this, cbval1);
            return callback_ret;
        } else {
            return KPageView::focusNextPrevChild(next);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* watched, QEvent* event) override {
        if (kpageview_eventfilter_isbase) {
            kpageview_eventfilter_isbase = false;
            return KPageView::eventFilter(watched, event);
        } else if (kpageview_eventfilter_callback != nullptr) {
            QObject* cbval1 = watched;
            QEvent* cbval2 = event;

            bool callback_ret = kpageview_eventfilter_callback(this, cbval1, cbval2);
            return callback_ret;
        } else {
            return KPageView::eventFilter(watched, event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (kpageview_timerevent_isbase) {
            kpageview_timerevent_isbase = false;
            KPageView::timerEvent(event);
        } else if (kpageview_timerevent_callback != nullptr) {
            QTimerEvent* cbval1 = event;

            kpageview_timerevent_callback(this, cbval1);
        } else {
            KPageView::timerEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (kpageview_childevent_isbase) {
            kpageview_childevent_isbase = false;
            KPageView::childEvent(event);
        } else if (kpageview_childevent_callback != nullptr) {
            QChildEvent* cbval1 = event;

            kpageview_childevent_callback(this, cbval1);
        } else {
            KPageView::childEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (kpageview_customevent_isbase) {
            kpageview_customevent_isbase = false;
            KPageView::customEvent(event);
        } else if (kpageview_customevent_callback != nullptr) {
            QEvent* cbval1 = event;

            kpageview_customevent_callback(this, cbval1);
        } else {
            KPageView::customEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (kpageview_connectnotify_isbase) {
            kpageview_connectnotify_isbase = false;
            KPageView::connectNotify(signal);
        } else if (kpageview_connectnotify_callback != nullptr) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            kpageview_connectnotify_callback(this, cbval1);
        } else {
            KPageView::connectNotify(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (kpageview_disconnectnotify_isbase) {
            kpageview_disconnectnotify_isbase = false;
            KPageView::disconnectNotify(signal);
        } else if (kpageview_disconnectnotify_callback != nullptr) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            kpageview_disconnectnotify_callback(this, cbval1);
        } else {
            KPageView::disconnectNotify(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    void updateMicroFocus() {
        if (kpageview_updatemicrofocus_isbase) {
            kpageview_updatemicrofocus_isbase = false;
            KPageView::updateMicroFocus();
        } else if (kpageview_updatemicrofocus_callback != nullptr) {
            kpageview_updatemicrofocus_callback();
        } else {
            KPageView::updateMicroFocus();
        }
    }

    // Virtual method for C ABI access and custom callback
    void create() {
        if (kpageview_create_isbase) {
            kpageview_create_isbase = false;
            KPageView::create();
        } else if (kpageview_create_callback != nullptr) {
            kpageview_create_callback();
        } else {
            KPageView::create();
        }
    }

    // Virtual method for C ABI access and custom callback
    void destroy() {
        if (kpageview_destroy_isbase) {
            kpageview_destroy_isbase = false;
            KPageView::destroy();
        } else if (kpageview_destroy_callback != nullptr) {
            kpageview_destroy_callback();
        } else {
            KPageView::destroy();
        }
    }

    // Virtual method for C ABI access and custom callback
    bool focusNextChild() {
        if (kpageview_focusnextchild_isbase) {
            kpageview_focusnextchild_isbase = false;
            return KPageView::focusNextChild();
        } else if (kpageview_focusnextchild_callback != nullptr) {
            bool callback_ret = kpageview_focusnextchild_callback();
            return callback_ret;
        } else {
            return KPageView::focusNextChild();
        }
    }

    // Virtual method for C ABI access and custom callback
    bool focusPreviousChild() {
        if (kpageview_focuspreviouschild_isbase) {
            kpageview_focuspreviouschild_isbase = false;
            return KPageView::focusPreviousChild();
        } else if (kpageview_focuspreviouschild_callback != nullptr) {
            bool callback_ret = kpageview_focuspreviouschild_callback();
            return callback_ret;
        } else {
            return KPageView::focusPreviousChild();
        }
    }

    // Virtual method for C ABI access and custom callback
    QObject* sender() const {
        if (kpageview_sender_isbase) {
            kpageview_sender_isbase = false;
            return KPageView::sender();
        } else if (kpageview_sender_callback != nullptr) {
            QObject* callback_ret = kpageview_sender_callback();
            return callback_ret;
        } else {
            return KPageView::sender();
        }
    }

    // Virtual method for C ABI access and custom callback
    int senderSignalIndex() const {
        if (kpageview_sendersignalindex_isbase) {
            kpageview_sendersignalindex_isbase = false;
            return KPageView::senderSignalIndex();
        } else if (kpageview_sendersignalindex_callback != nullptr) {
            int callback_ret = kpageview_sendersignalindex_callback();
            return static_cast<int>(callback_ret);
        } else {
            return KPageView::senderSignalIndex();
        }
    }

    // Virtual method for C ABI access and custom callback
    int receivers(const char* signal) const {
        if (kpageview_receivers_isbase) {
            kpageview_receivers_isbase = false;
            return KPageView::receivers(signal);
        } else if (kpageview_receivers_callback != nullptr) {
            const char* cbval1 = (const char*)signal;

            int callback_ret = kpageview_receivers_callback(this, cbval1);
            return static_cast<int>(callback_ret);
        } else {
            return KPageView::receivers(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    bool isSignalConnected(const QMetaMethod& signal) const {
        if (kpageview_issignalconnected_isbase) {
            kpageview_issignalconnected_isbase = false;
            return KPageView::isSignalConnected(signal);
        } else if (kpageview_issignalconnected_callback != nullptr) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            bool callback_ret = kpageview_issignalconnected_callback(this, cbval1);
            return callback_ret;
        } else {
            return KPageView::isSignalConnected(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    double getDecodedMetricF(QPaintDevice::PaintDeviceMetric metricA, QPaintDevice::PaintDeviceMetric metricB) const {
        if (kpageview_getdecodedmetricf_isbase) {
            kpageview_getdecodedmetricf_isbase = false;
            return KPageView::getDecodedMetricF(metricA, metricB);
        } else if (kpageview_getdecodedmetricf_callback != nullptr) {
            int cbval1 = static_cast<int>(metricA);
            int cbval2 = static_cast<int>(metricB);

            double callback_ret = kpageview_getdecodedmetricf_callback(this, cbval1, cbval2);
            return static_cast<double>(callback_ret);
        } else {
            return KPageView::getDecodedMetricF(metricA, metricB);
        }
    }

    // Friend functions
    friend QAbstractItemView* KPageView_CreateView(KPageView* self);
    friend QAbstractItemView* KPageView_QBaseCreateView(KPageView* self);
    friend bool KPageView_ShowPageHeader(const KPageView* self);
    friend bool KPageView_QBaseShowPageHeader(const KPageView* self);
    friend int KPageView_ViewPosition(const KPageView* self);
    friend int KPageView_QBaseViewPosition(const KPageView* self);
    friend bool KPageView_Event(KPageView* self, QEvent* event);
    friend bool KPageView_QBaseEvent(KPageView* self, QEvent* event);
    friend void KPageView_MousePressEvent(KPageView* self, QMouseEvent* event);
    friend void KPageView_QBaseMousePressEvent(KPageView* self, QMouseEvent* event);
    friend void KPageView_MouseReleaseEvent(KPageView* self, QMouseEvent* event);
    friend void KPageView_QBaseMouseReleaseEvent(KPageView* self, QMouseEvent* event);
    friend void KPageView_MouseDoubleClickEvent(KPageView* self, QMouseEvent* event);
    friend void KPageView_QBaseMouseDoubleClickEvent(KPageView* self, QMouseEvent* event);
    friend void KPageView_MouseMoveEvent(KPageView* self, QMouseEvent* event);
    friend void KPageView_QBaseMouseMoveEvent(KPageView* self, QMouseEvent* event);
    friend void KPageView_WheelEvent(KPageView* self, QWheelEvent* event);
    friend void KPageView_QBaseWheelEvent(KPageView* self, QWheelEvent* event);
    friend void KPageView_KeyPressEvent(KPageView* self, QKeyEvent* event);
    friend void KPageView_QBaseKeyPressEvent(KPageView* self, QKeyEvent* event);
    friend void KPageView_KeyReleaseEvent(KPageView* self, QKeyEvent* event);
    friend void KPageView_QBaseKeyReleaseEvent(KPageView* self, QKeyEvent* event);
    friend void KPageView_FocusInEvent(KPageView* self, QFocusEvent* event);
    friend void KPageView_QBaseFocusInEvent(KPageView* self, QFocusEvent* event);
    friend void KPageView_FocusOutEvent(KPageView* self, QFocusEvent* event);
    friend void KPageView_QBaseFocusOutEvent(KPageView* self, QFocusEvent* event);
    friend void KPageView_EnterEvent(KPageView* self, QEnterEvent* event);
    friend void KPageView_QBaseEnterEvent(KPageView* self, QEnterEvent* event);
    friend void KPageView_LeaveEvent(KPageView* self, QEvent* event);
    friend void KPageView_QBaseLeaveEvent(KPageView* self, QEvent* event);
    friend void KPageView_PaintEvent(KPageView* self, QPaintEvent* event);
    friend void KPageView_QBasePaintEvent(KPageView* self, QPaintEvent* event);
    friend void KPageView_MoveEvent(KPageView* self, QMoveEvent* event);
    friend void KPageView_QBaseMoveEvent(KPageView* self, QMoveEvent* event);
    friend void KPageView_ResizeEvent(KPageView* self, QResizeEvent* event);
    friend void KPageView_QBaseResizeEvent(KPageView* self, QResizeEvent* event);
    friend void KPageView_CloseEvent(KPageView* self, QCloseEvent* event);
    friend void KPageView_QBaseCloseEvent(KPageView* self, QCloseEvent* event);
    friend void KPageView_ContextMenuEvent(KPageView* self, QContextMenuEvent* event);
    friend void KPageView_QBaseContextMenuEvent(KPageView* self, QContextMenuEvent* event);
    friend void KPageView_TabletEvent(KPageView* self, QTabletEvent* event);
    friend void KPageView_QBaseTabletEvent(KPageView* self, QTabletEvent* event);
    friend void KPageView_ActionEvent(KPageView* self, QActionEvent* event);
    friend void KPageView_QBaseActionEvent(KPageView* self, QActionEvent* event);
    friend void KPageView_DragEnterEvent(KPageView* self, QDragEnterEvent* event);
    friend void KPageView_QBaseDragEnterEvent(KPageView* self, QDragEnterEvent* event);
    friend void KPageView_DragMoveEvent(KPageView* self, QDragMoveEvent* event);
    friend void KPageView_QBaseDragMoveEvent(KPageView* self, QDragMoveEvent* event);
    friend void KPageView_DragLeaveEvent(KPageView* self, QDragLeaveEvent* event);
    friend void KPageView_QBaseDragLeaveEvent(KPageView* self, QDragLeaveEvent* event);
    friend void KPageView_DropEvent(KPageView* self, QDropEvent* event);
    friend void KPageView_QBaseDropEvent(KPageView* self, QDropEvent* event);
    friend void KPageView_ShowEvent(KPageView* self, QShowEvent* event);
    friend void KPageView_QBaseShowEvent(KPageView* self, QShowEvent* event);
    friend void KPageView_HideEvent(KPageView* self, QHideEvent* event);
    friend void KPageView_QBaseHideEvent(KPageView* self, QHideEvent* event);
    friend bool KPageView_NativeEvent(KPageView* self, const libqt_string eventType, void* message, intptr_t* result);
    friend bool KPageView_QBaseNativeEvent(KPageView* self, const libqt_string eventType, void* message, intptr_t* result);
    friend void KPageView_ChangeEvent(KPageView* self, QEvent* param1);
    friend void KPageView_QBaseChangeEvent(KPageView* self, QEvent* param1);
    friend int KPageView_Metric(const KPageView* self, int param1);
    friend int KPageView_QBaseMetric(const KPageView* self, int param1);
    friend void KPageView_InitPainter(const KPageView* self, QPainter* painter);
    friend void KPageView_QBaseInitPainter(const KPageView* self, QPainter* painter);
    friend QPaintDevice* KPageView_Redirected(const KPageView* self, QPoint* offset);
    friend QPaintDevice* KPageView_QBaseRedirected(const KPageView* self, QPoint* offset);
    friend QPainter* KPageView_SharedPainter(const KPageView* self);
    friend QPainter* KPageView_QBaseSharedPainter(const KPageView* self);
    friend void KPageView_InputMethodEvent(KPageView* self, QInputMethodEvent* param1);
    friend void KPageView_QBaseInputMethodEvent(KPageView* self, QInputMethodEvent* param1);
    friend bool KPageView_FocusNextPrevChild(KPageView* self, bool next);
    friend bool KPageView_QBaseFocusNextPrevChild(KPageView* self, bool next);
    friend void KPageView_TimerEvent(KPageView* self, QTimerEvent* event);
    friend void KPageView_QBaseTimerEvent(KPageView* self, QTimerEvent* event);
    friend void KPageView_ChildEvent(KPageView* self, QChildEvent* event);
    friend void KPageView_QBaseChildEvent(KPageView* self, QChildEvent* event);
    friend void KPageView_CustomEvent(KPageView* self, QEvent* event);
    friend void KPageView_QBaseCustomEvent(KPageView* self, QEvent* event);
    friend void KPageView_ConnectNotify(KPageView* self, const QMetaMethod* signal);
    friend void KPageView_QBaseConnectNotify(KPageView* self, const QMetaMethod* signal);
    friend void KPageView_DisconnectNotify(KPageView* self, const QMetaMethod* signal);
    friend void KPageView_QBaseDisconnectNotify(KPageView* self, const QMetaMethod* signal);
    friend void KPageView_UpdateMicroFocus(KPageView* self);
    friend void KPageView_QBaseUpdateMicroFocus(KPageView* self);
    friend void KPageView_Create(KPageView* self);
    friend void KPageView_QBaseCreate(KPageView* self);
    friend void KPageView_Destroy(KPageView* self);
    friend void KPageView_QBaseDestroy(KPageView* self);
    friend bool KPageView_FocusNextChild(KPageView* self);
    friend bool KPageView_QBaseFocusNextChild(KPageView* self);
    friend bool KPageView_FocusPreviousChild(KPageView* self);
    friend bool KPageView_QBaseFocusPreviousChild(KPageView* self);
    friend QObject* KPageView_Sender(const KPageView* self);
    friend QObject* KPageView_QBaseSender(const KPageView* self);
    friend int KPageView_SenderSignalIndex(const KPageView* self);
    friend int KPageView_QBaseSenderSignalIndex(const KPageView* self);
    friend int KPageView_Receivers(const KPageView* self, const char* signal);
    friend int KPageView_QBaseReceivers(const KPageView* self, const char* signal);
    friend bool KPageView_IsSignalConnected(const KPageView* self, const QMetaMethod* signal);
    friend bool KPageView_QBaseIsSignalConnected(const KPageView* self, const QMetaMethod* signal);
    friend double KPageView_GetDecodedMetricF(const KPageView* self, int metricA, int metricB);
    friend double KPageView_QBaseGetDecodedMetricF(const KPageView* self, int metricA, int metricB);
};

#endif
