#pragma once
#ifndef SRC_EXTRAS_KCONFIGWIDGETSC_LIBVIRTUALKCOMMANDBAR_H
#define SRC_EXTRAS_KCONFIGWIDGETSC_LIBVIRTUALKCOMMANDBAR_H

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

// This class is a subclass of KCommandBar so that we can call protected methods
class VirtualKCommandBar final : public KCommandBar {

  public:
    // Virtual class boolean flag
    bool isVirtualKCommandBar = true;

    // Virtual class public types (including callbacks)
    using KCommandBar_Metacall_Callback = int (*)(KCommandBar*, int, int, void**);
    using KCommandBar_EventFilter_Callback = bool (*)(KCommandBar*, QObject*, QEvent*);
    using KCommandBar_SizeHint_Callback = QSize* (*)();
    using KCommandBar_Event_Callback = bool (*)(KCommandBar*, QEvent*);
    using KCommandBar_PaintEvent_Callback = void (*)(KCommandBar*, QPaintEvent*);
    using KCommandBar_ChangeEvent_Callback = void (*)(KCommandBar*, QEvent*);
    using KCommandBar_InitStyleOption_Callback = void (*)(const KCommandBar*, QStyleOptionFrame*);
    using KCommandBar_DevType_Callback = int (*)();
    using KCommandBar_SetVisible_Callback = void (*)(KCommandBar*, bool);
    using KCommandBar_MinimumSizeHint_Callback = QSize* (*)();
    using KCommandBar_HeightForWidth_Callback = int (*)(const KCommandBar*, int);
    using KCommandBar_HasHeightForWidth_Callback = bool (*)();
    using KCommandBar_PaintEngine_Callback = QPaintEngine* (*)();
    using KCommandBar_MousePressEvent_Callback = void (*)(KCommandBar*, QMouseEvent*);
    using KCommandBar_MouseReleaseEvent_Callback = void (*)(KCommandBar*, QMouseEvent*);
    using KCommandBar_MouseDoubleClickEvent_Callback = void (*)(KCommandBar*, QMouseEvent*);
    using KCommandBar_MouseMoveEvent_Callback = void (*)(KCommandBar*, QMouseEvent*);
    using KCommandBar_WheelEvent_Callback = void (*)(KCommandBar*, QWheelEvent*);
    using KCommandBar_KeyPressEvent_Callback = void (*)(KCommandBar*, QKeyEvent*);
    using KCommandBar_KeyReleaseEvent_Callback = void (*)(KCommandBar*, QKeyEvent*);
    using KCommandBar_FocusInEvent_Callback = void (*)(KCommandBar*, QFocusEvent*);
    using KCommandBar_FocusOutEvent_Callback = void (*)(KCommandBar*, QFocusEvent*);
    using KCommandBar_EnterEvent_Callback = void (*)(KCommandBar*, QEnterEvent*);
    using KCommandBar_LeaveEvent_Callback = void (*)(KCommandBar*, QEvent*);
    using KCommandBar_MoveEvent_Callback = void (*)(KCommandBar*, QMoveEvent*);
    using KCommandBar_ResizeEvent_Callback = void (*)(KCommandBar*, QResizeEvent*);
    using KCommandBar_CloseEvent_Callback = void (*)(KCommandBar*, QCloseEvent*);
    using KCommandBar_ContextMenuEvent_Callback = void (*)(KCommandBar*, QContextMenuEvent*);
    using KCommandBar_TabletEvent_Callback = void (*)(KCommandBar*, QTabletEvent*);
    using KCommandBar_ActionEvent_Callback = void (*)(KCommandBar*, QActionEvent*);
    using KCommandBar_DragEnterEvent_Callback = void (*)(KCommandBar*, QDragEnterEvent*);
    using KCommandBar_DragMoveEvent_Callback = void (*)(KCommandBar*, QDragMoveEvent*);
    using KCommandBar_DragLeaveEvent_Callback = void (*)(KCommandBar*, QDragLeaveEvent*);
    using KCommandBar_DropEvent_Callback = void (*)(KCommandBar*, QDropEvent*);
    using KCommandBar_ShowEvent_Callback = void (*)(KCommandBar*, QShowEvent*);
    using KCommandBar_HideEvent_Callback = void (*)(KCommandBar*, QHideEvent*);
    using KCommandBar_NativeEvent_Callback = bool (*)(KCommandBar*, libqt_string, void*, intptr_t*);
    using KCommandBar_Metric_Callback = int (*)(const KCommandBar*, int);
    using KCommandBar_InitPainter_Callback = void (*)(const KCommandBar*, QPainter*);
    using KCommandBar_Redirected_Callback = QPaintDevice* (*)(const KCommandBar*, QPoint*);
    using KCommandBar_SharedPainter_Callback = QPainter* (*)();
    using KCommandBar_InputMethodEvent_Callback = void (*)(KCommandBar*, QInputMethodEvent*);
    using KCommandBar_InputMethodQuery_Callback = QVariant* (*)(const KCommandBar*, int);
    using KCommandBar_FocusNextPrevChild_Callback = bool (*)(KCommandBar*, bool);
    using KCommandBar_TimerEvent_Callback = void (*)(KCommandBar*, QTimerEvent*);
    using KCommandBar_ChildEvent_Callback = void (*)(KCommandBar*, QChildEvent*);
    using KCommandBar_CustomEvent_Callback = void (*)(KCommandBar*, QEvent*);
    using KCommandBar_ConnectNotify_Callback = void (*)(KCommandBar*, QMetaMethod*);
    using KCommandBar_DisconnectNotify_Callback = void (*)(KCommandBar*, QMetaMethod*);
    using KCommandBar_DrawFrame_Callback = void (*)(KCommandBar*, QPainter*);
    using KCommandBar_UpdateMicroFocus_Callback = void (*)();
    using KCommandBar_Create_Callback = void (*)();
    using KCommandBar_Destroy_Callback = void (*)();
    using KCommandBar_FocusNextChild_Callback = bool (*)();
    using KCommandBar_FocusPreviousChild_Callback = bool (*)();
    using KCommandBar_Sender_Callback = QObject* (*)();
    using KCommandBar_SenderSignalIndex_Callback = int (*)();
    using KCommandBar_Receivers_Callback = int (*)(const KCommandBar*, const char*);
    using KCommandBar_IsSignalConnected_Callback = bool (*)(const KCommandBar*, QMetaMethod*);
    using KCommandBar_GetDecodedMetricF_Callback = double (*)(const KCommandBar*, int, int);

  protected:
    // Instance callback storage
    KCommandBar_Metacall_Callback kcommandbar_metacall_callback = nullptr;
    KCommandBar_EventFilter_Callback kcommandbar_eventfilter_callback = nullptr;
    KCommandBar_SizeHint_Callback kcommandbar_sizehint_callback = nullptr;
    KCommandBar_Event_Callback kcommandbar_event_callback = nullptr;
    KCommandBar_PaintEvent_Callback kcommandbar_paintevent_callback = nullptr;
    KCommandBar_ChangeEvent_Callback kcommandbar_changeevent_callback = nullptr;
    KCommandBar_InitStyleOption_Callback kcommandbar_initstyleoption_callback = nullptr;
    KCommandBar_DevType_Callback kcommandbar_devtype_callback = nullptr;
    KCommandBar_SetVisible_Callback kcommandbar_setvisible_callback = nullptr;
    KCommandBar_MinimumSizeHint_Callback kcommandbar_minimumsizehint_callback = nullptr;
    KCommandBar_HeightForWidth_Callback kcommandbar_heightforwidth_callback = nullptr;
    KCommandBar_HasHeightForWidth_Callback kcommandbar_hasheightforwidth_callback = nullptr;
    KCommandBar_PaintEngine_Callback kcommandbar_paintengine_callback = nullptr;
    KCommandBar_MousePressEvent_Callback kcommandbar_mousepressevent_callback = nullptr;
    KCommandBar_MouseReleaseEvent_Callback kcommandbar_mousereleaseevent_callback = nullptr;
    KCommandBar_MouseDoubleClickEvent_Callback kcommandbar_mousedoubleclickevent_callback = nullptr;
    KCommandBar_MouseMoveEvent_Callback kcommandbar_mousemoveevent_callback = nullptr;
    KCommandBar_WheelEvent_Callback kcommandbar_wheelevent_callback = nullptr;
    KCommandBar_KeyPressEvent_Callback kcommandbar_keypressevent_callback = nullptr;
    KCommandBar_KeyReleaseEvent_Callback kcommandbar_keyreleaseevent_callback = nullptr;
    KCommandBar_FocusInEvent_Callback kcommandbar_focusinevent_callback = nullptr;
    KCommandBar_FocusOutEvent_Callback kcommandbar_focusoutevent_callback = nullptr;
    KCommandBar_EnterEvent_Callback kcommandbar_enterevent_callback = nullptr;
    KCommandBar_LeaveEvent_Callback kcommandbar_leaveevent_callback = nullptr;
    KCommandBar_MoveEvent_Callback kcommandbar_moveevent_callback = nullptr;
    KCommandBar_ResizeEvent_Callback kcommandbar_resizeevent_callback = nullptr;
    KCommandBar_CloseEvent_Callback kcommandbar_closeevent_callback = nullptr;
    KCommandBar_ContextMenuEvent_Callback kcommandbar_contextmenuevent_callback = nullptr;
    KCommandBar_TabletEvent_Callback kcommandbar_tabletevent_callback = nullptr;
    KCommandBar_ActionEvent_Callback kcommandbar_actionevent_callback = nullptr;
    KCommandBar_DragEnterEvent_Callback kcommandbar_dragenterevent_callback = nullptr;
    KCommandBar_DragMoveEvent_Callback kcommandbar_dragmoveevent_callback = nullptr;
    KCommandBar_DragLeaveEvent_Callback kcommandbar_dragleaveevent_callback = nullptr;
    KCommandBar_DropEvent_Callback kcommandbar_dropevent_callback = nullptr;
    KCommandBar_ShowEvent_Callback kcommandbar_showevent_callback = nullptr;
    KCommandBar_HideEvent_Callback kcommandbar_hideevent_callback = nullptr;
    KCommandBar_NativeEvent_Callback kcommandbar_nativeevent_callback = nullptr;
    KCommandBar_Metric_Callback kcommandbar_metric_callback = nullptr;
    KCommandBar_InitPainter_Callback kcommandbar_initpainter_callback = nullptr;
    KCommandBar_Redirected_Callback kcommandbar_redirected_callback = nullptr;
    KCommandBar_SharedPainter_Callback kcommandbar_sharedpainter_callback = nullptr;
    KCommandBar_InputMethodEvent_Callback kcommandbar_inputmethodevent_callback = nullptr;
    KCommandBar_InputMethodQuery_Callback kcommandbar_inputmethodquery_callback = nullptr;
    KCommandBar_FocusNextPrevChild_Callback kcommandbar_focusnextprevchild_callback = nullptr;
    KCommandBar_TimerEvent_Callback kcommandbar_timerevent_callback = nullptr;
    KCommandBar_ChildEvent_Callback kcommandbar_childevent_callback = nullptr;
    KCommandBar_CustomEvent_Callback kcommandbar_customevent_callback = nullptr;
    KCommandBar_ConnectNotify_Callback kcommandbar_connectnotify_callback = nullptr;
    KCommandBar_DisconnectNotify_Callback kcommandbar_disconnectnotify_callback = nullptr;
    KCommandBar_DrawFrame_Callback kcommandbar_drawframe_callback = nullptr;
    KCommandBar_UpdateMicroFocus_Callback kcommandbar_updatemicrofocus_callback = nullptr;
    KCommandBar_Create_Callback kcommandbar_create_callback = nullptr;
    KCommandBar_Destroy_Callback kcommandbar_destroy_callback = nullptr;
    KCommandBar_FocusNextChild_Callback kcommandbar_focusnextchild_callback = nullptr;
    KCommandBar_FocusPreviousChild_Callback kcommandbar_focuspreviouschild_callback = nullptr;
    KCommandBar_Sender_Callback kcommandbar_sender_callback = nullptr;
    KCommandBar_SenderSignalIndex_Callback kcommandbar_sendersignalindex_callback = nullptr;
    KCommandBar_Receivers_Callback kcommandbar_receivers_callback = nullptr;
    KCommandBar_IsSignalConnected_Callback kcommandbar_issignalconnected_callback = nullptr;
    KCommandBar_GetDecodedMetricF_Callback kcommandbar_getdecodedmetricf_callback = nullptr;

    // Instance base flags
    mutable bool kcommandbar_metacall_isbase = false;
    mutable bool kcommandbar_eventfilter_isbase = false;
    mutable bool kcommandbar_sizehint_isbase = false;
    mutable bool kcommandbar_event_isbase = false;
    mutable bool kcommandbar_paintevent_isbase = false;
    mutable bool kcommandbar_changeevent_isbase = false;
    mutable bool kcommandbar_initstyleoption_isbase = false;
    mutable bool kcommandbar_devtype_isbase = false;
    mutable bool kcommandbar_setvisible_isbase = false;
    mutable bool kcommandbar_minimumsizehint_isbase = false;
    mutable bool kcommandbar_heightforwidth_isbase = false;
    mutable bool kcommandbar_hasheightforwidth_isbase = false;
    mutable bool kcommandbar_paintengine_isbase = false;
    mutable bool kcommandbar_mousepressevent_isbase = false;
    mutable bool kcommandbar_mousereleaseevent_isbase = false;
    mutable bool kcommandbar_mousedoubleclickevent_isbase = false;
    mutable bool kcommandbar_mousemoveevent_isbase = false;
    mutable bool kcommandbar_wheelevent_isbase = false;
    mutable bool kcommandbar_keypressevent_isbase = false;
    mutable bool kcommandbar_keyreleaseevent_isbase = false;
    mutable bool kcommandbar_focusinevent_isbase = false;
    mutable bool kcommandbar_focusoutevent_isbase = false;
    mutable bool kcommandbar_enterevent_isbase = false;
    mutable bool kcommandbar_leaveevent_isbase = false;
    mutable bool kcommandbar_moveevent_isbase = false;
    mutable bool kcommandbar_resizeevent_isbase = false;
    mutable bool kcommandbar_closeevent_isbase = false;
    mutable bool kcommandbar_contextmenuevent_isbase = false;
    mutable bool kcommandbar_tabletevent_isbase = false;
    mutable bool kcommandbar_actionevent_isbase = false;
    mutable bool kcommandbar_dragenterevent_isbase = false;
    mutable bool kcommandbar_dragmoveevent_isbase = false;
    mutable bool kcommandbar_dragleaveevent_isbase = false;
    mutable bool kcommandbar_dropevent_isbase = false;
    mutable bool kcommandbar_showevent_isbase = false;
    mutable bool kcommandbar_hideevent_isbase = false;
    mutable bool kcommandbar_nativeevent_isbase = false;
    mutable bool kcommandbar_metric_isbase = false;
    mutable bool kcommandbar_initpainter_isbase = false;
    mutable bool kcommandbar_redirected_isbase = false;
    mutable bool kcommandbar_sharedpainter_isbase = false;
    mutable bool kcommandbar_inputmethodevent_isbase = false;
    mutable bool kcommandbar_inputmethodquery_isbase = false;
    mutable bool kcommandbar_focusnextprevchild_isbase = false;
    mutable bool kcommandbar_timerevent_isbase = false;
    mutable bool kcommandbar_childevent_isbase = false;
    mutable bool kcommandbar_customevent_isbase = false;
    mutable bool kcommandbar_connectnotify_isbase = false;
    mutable bool kcommandbar_disconnectnotify_isbase = false;
    mutable bool kcommandbar_drawframe_isbase = false;
    mutable bool kcommandbar_updatemicrofocus_isbase = false;
    mutable bool kcommandbar_create_isbase = false;
    mutable bool kcommandbar_destroy_isbase = false;
    mutable bool kcommandbar_focusnextchild_isbase = false;
    mutable bool kcommandbar_focuspreviouschild_isbase = false;
    mutable bool kcommandbar_sender_isbase = false;
    mutable bool kcommandbar_sendersignalindex_isbase = false;
    mutable bool kcommandbar_receivers_isbase = false;
    mutable bool kcommandbar_issignalconnected_isbase = false;
    mutable bool kcommandbar_getdecodedmetricf_isbase = false;

  public:
    VirtualKCommandBar(QWidget* parent) : KCommandBar(parent) {};

    ~VirtualKCommandBar() {
        kcommandbar_metacall_callback = nullptr;
        kcommandbar_eventfilter_callback = nullptr;
        kcommandbar_sizehint_callback = nullptr;
        kcommandbar_event_callback = nullptr;
        kcommandbar_paintevent_callback = nullptr;
        kcommandbar_changeevent_callback = nullptr;
        kcommandbar_initstyleoption_callback = nullptr;
        kcommandbar_devtype_callback = nullptr;
        kcommandbar_setvisible_callback = nullptr;
        kcommandbar_minimumsizehint_callback = nullptr;
        kcommandbar_heightforwidth_callback = nullptr;
        kcommandbar_hasheightforwidth_callback = nullptr;
        kcommandbar_paintengine_callback = nullptr;
        kcommandbar_mousepressevent_callback = nullptr;
        kcommandbar_mousereleaseevent_callback = nullptr;
        kcommandbar_mousedoubleclickevent_callback = nullptr;
        kcommandbar_mousemoveevent_callback = nullptr;
        kcommandbar_wheelevent_callback = nullptr;
        kcommandbar_keypressevent_callback = nullptr;
        kcommandbar_keyreleaseevent_callback = nullptr;
        kcommandbar_focusinevent_callback = nullptr;
        kcommandbar_focusoutevent_callback = nullptr;
        kcommandbar_enterevent_callback = nullptr;
        kcommandbar_leaveevent_callback = nullptr;
        kcommandbar_moveevent_callback = nullptr;
        kcommandbar_resizeevent_callback = nullptr;
        kcommandbar_closeevent_callback = nullptr;
        kcommandbar_contextmenuevent_callback = nullptr;
        kcommandbar_tabletevent_callback = nullptr;
        kcommandbar_actionevent_callback = nullptr;
        kcommandbar_dragenterevent_callback = nullptr;
        kcommandbar_dragmoveevent_callback = nullptr;
        kcommandbar_dragleaveevent_callback = nullptr;
        kcommandbar_dropevent_callback = nullptr;
        kcommandbar_showevent_callback = nullptr;
        kcommandbar_hideevent_callback = nullptr;
        kcommandbar_nativeevent_callback = nullptr;
        kcommandbar_metric_callback = nullptr;
        kcommandbar_initpainter_callback = nullptr;
        kcommandbar_redirected_callback = nullptr;
        kcommandbar_sharedpainter_callback = nullptr;
        kcommandbar_inputmethodevent_callback = nullptr;
        kcommandbar_inputmethodquery_callback = nullptr;
        kcommandbar_focusnextprevchild_callback = nullptr;
        kcommandbar_timerevent_callback = nullptr;
        kcommandbar_childevent_callback = nullptr;
        kcommandbar_customevent_callback = nullptr;
        kcommandbar_connectnotify_callback = nullptr;
        kcommandbar_disconnectnotify_callback = nullptr;
        kcommandbar_drawframe_callback = nullptr;
        kcommandbar_updatemicrofocus_callback = nullptr;
        kcommandbar_create_callback = nullptr;
        kcommandbar_destroy_callback = nullptr;
        kcommandbar_focusnextchild_callback = nullptr;
        kcommandbar_focuspreviouschild_callback = nullptr;
        kcommandbar_sender_callback = nullptr;
        kcommandbar_sendersignalindex_callback = nullptr;
        kcommandbar_receivers_callback = nullptr;
        kcommandbar_issignalconnected_callback = nullptr;
        kcommandbar_getdecodedmetricf_callback = nullptr;
    }

    // Callback setters
    inline void setKCommandBar_Metacall_Callback(KCommandBar_Metacall_Callback cb) { kcommandbar_metacall_callback = cb; }
    inline void setKCommandBar_EventFilter_Callback(KCommandBar_EventFilter_Callback cb) { kcommandbar_eventfilter_callback = cb; }
    inline void setKCommandBar_SizeHint_Callback(KCommandBar_SizeHint_Callback cb) { kcommandbar_sizehint_callback = cb; }
    inline void setKCommandBar_Event_Callback(KCommandBar_Event_Callback cb) { kcommandbar_event_callback = cb; }
    inline void setKCommandBar_PaintEvent_Callback(KCommandBar_PaintEvent_Callback cb) { kcommandbar_paintevent_callback = cb; }
    inline void setKCommandBar_ChangeEvent_Callback(KCommandBar_ChangeEvent_Callback cb) { kcommandbar_changeevent_callback = cb; }
    inline void setKCommandBar_InitStyleOption_Callback(KCommandBar_InitStyleOption_Callback cb) { kcommandbar_initstyleoption_callback = cb; }
    inline void setKCommandBar_DevType_Callback(KCommandBar_DevType_Callback cb) { kcommandbar_devtype_callback = cb; }
    inline void setKCommandBar_SetVisible_Callback(KCommandBar_SetVisible_Callback cb) { kcommandbar_setvisible_callback = cb; }
    inline void setKCommandBar_MinimumSizeHint_Callback(KCommandBar_MinimumSizeHint_Callback cb) { kcommandbar_minimumsizehint_callback = cb; }
    inline void setKCommandBar_HeightForWidth_Callback(KCommandBar_HeightForWidth_Callback cb) { kcommandbar_heightforwidth_callback = cb; }
    inline void setKCommandBar_HasHeightForWidth_Callback(KCommandBar_HasHeightForWidth_Callback cb) { kcommandbar_hasheightforwidth_callback = cb; }
    inline void setKCommandBar_PaintEngine_Callback(KCommandBar_PaintEngine_Callback cb) { kcommandbar_paintengine_callback = cb; }
    inline void setKCommandBar_MousePressEvent_Callback(KCommandBar_MousePressEvent_Callback cb) { kcommandbar_mousepressevent_callback = cb; }
    inline void setKCommandBar_MouseReleaseEvent_Callback(KCommandBar_MouseReleaseEvent_Callback cb) { kcommandbar_mousereleaseevent_callback = cb; }
    inline void setKCommandBar_MouseDoubleClickEvent_Callback(KCommandBar_MouseDoubleClickEvent_Callback cb) { kcommandbar_mousedoubleclickevent_callback = cb; }
    inline void setKCommandBar_MouseMoveEvent_Callback(KCommandBar_MouseMoveEvent_Callback cb) { kcommandbar_mousemoveevent_callback = cb; }
    inline void setKCommandBar_WheelEvent_Callback(KCommandBar_WheelEvent_Callback cb) { kcommandbar_wheelevent_callback = cb; }
    inline void setKCommandBar_KeyPressEvent_Callback(KCommandBar_KeyPressEvent_Callback cb) { kcommandbar_keypressevent_callback = cb; }
    inline void setKCommandBar_KeyReleaseEvent_Callback(KCommandBar_KeyReleaseEvent_Callback cb) { kcommandbar_keyreleaseevent_callback = cb; }
    inline void setKCommandBar_FocusInEvent_Callback(KCommandBar_FocusInEvent_Callback cb) { kcommandbar_focusinevent_callback = cb; }
    inline void setKCommandBar_FocusOutEvent_Callback(KCommandBar_FocusOutEvent_Callback cb) { kcommandbar_focusoutevent_callback = cb; }
    inline void setKCommandBar_EnterEvent_Callback(KCommandBar_EnterEvent_Callback cb) { kcommandbar_enterevent_callback = cb; }
    inline void setKCommandBar_LeaveEvent_Callback(KCommandBar_LeaveEvent_Callback cb) { kcommandbar_leaveevent_callback = cb; }
    inline void setKCommandBar_MoveEvent_Callback(KCommandBar_MoveEvent_Callback cb) { kcommandbar_moveevent_callback = cb; }
    inline void setKCommandBar_ResizeEvent_Callback(KCommandBar_ResizeEvent_Callback cb) { kcommandbar_resizeevent_callback = cb; }
    inline void setKCommandBar_CloseEvent_Callback(KCommandBar_CloseEvent_Callback cb) { kcommandbar_closeevent_callback = cb; }
    inline void setKCommandBar_ContextMenuEvent_Callback(KCommandBar_ContextMenuEvent_Callback cb) { kcommandbar_contextmenuevent_callback = cb; }
    inline void setKCommandBar_TabletEvent_Callback(KCommandBar_TabletEvent_Callback cb) { kcommandbar_tabletevent_callback = cb; }
    inline void setKCommandBar_ActionEvent_Callback(KCommandBar_ActionEvent_Callback cb) { kcommandbar_actionevent_callback = cb; }
    inline void setKCommandBar_DragEnterEvent_Callback(KCommandBar_DragEnterEvent_Callback cb) { kcommandbar_dragenterevent_callback = cb; }
    inline void setKCommandBar_DragMoveEvent_Callback(KCommandBar_DragMoveEvent_Callback cb) { kcommandbar_dragmoveevent_callback = cb; }
    inline void setKCommandBar_DragLeaveEvent_Callback(KCommandBar_DragLeaveEvent_Callback cb) { kcommandbar_dragleaveevent_callback = cb; }
    inline void setKCommandBar_DropEvent_Callback(KCommandBar_DropEvent_Callback cb) { kcommandbar_dropevent_callback = cb; }
    inline void setKCommandBar_ShowEvent_Callback(KCommandBar_ShowEvent_Callback cb) { kcommandbar_showevent_callback = cb; }
    inline void setKCommandBar_HideEvent_Callback(KCommandBar_HideEvent_Callback cb) { kcommandbar_hideevent_callback = cb; }
    inline void setKCommandBar_NativeEvent_Callback(KCommandBar_NativeEvent_Callback cb) { kcommandbar_nativeevent_callback = cb; }
    inline void setKCommandBar_Metric_Callback(KCommandBar_Metric_Callback cb) { kcommandbar_metric_callback = cb; }
    inline void setKCommandBar_InitPainter_Callback(KCommandBar_InitPainter_Callback cb) { kcommandbar_initpainter_callback = cb; }
    inline void setKCommandBar_Redirected_Callback(KCommandBar_Redirected_Callback cb) { kcommandbar_redirected_callback = cb; }
    inline void setKCommandBar_SharedPainter_Callback(KCommandBar_SharedPainter_Callback cb) { kcommandbar_sharedpainter_callback = cb; }
    inline void setKCommandBar_InputMethodEvent_Callback(KCommandBar_InputMethodEvent_Callback cb) { kcommandbar_inputmethodevent_callback = cb; }
    inline void setKCommandBar_InputMethodQuery_Callback(KCommandBar_InputMethodQuery_Callback cb) { kcommandbar_inputmethodquery_callback = cb; }
    inline void setKCommandBar_FocusNextPrevChild_Callback(KCommandBar_FocusNextPrevChild_Callback cb) { kcommandbar_focusnextprevchild_callback = cb; }
    inline void setKCommandBar_TimerEvent_Callback(KCommandBar_TimerEvent_Callback cb) { kcommandbar_timerevent_callback = cb; }
    inline void setKCommandBar_ChildEvent_Callback(KCommandBar_ChildEvent_Callback cb) { kcommandbar_childevent_callback = cb; }
    inline void setKCommandBar_CustomEvent_Callback(KCommandBar_CustomEvent_Callback cb) { kcommandbar_customevent_callback = cb; }
    inline void setKCommandBar_ConnectNotify_Callback(KCommandBar_ConnectNotify_Callback cb) { kcommandbar_connectnotify_callback = cb; }
    inline void setKCommandBar_DisconnectNotify_Callback(KCommandBar_DisconnectNotify_Callback cb) { kcommandbar_disconnectnotify_callback = cb; }
    inline void setKCommandBar_DrawFrame_Callback(KCommandBar_DrawFrame_Callback cb) { kcommandbar_drawframe_callback = cb; }
    inline void setKCommandBar_UpdateMicroFocus_Callback(KCommandBar_UpdateMicroFocus_Callback cb) { kcommandbar_updatemicrofocus_callback = cb; }
    inline void setKCommandBar_Create_Callback(KCommandBar_Create_Callback cb) { kcommandbar_create_callback = cb; }
    inline void setKCommandBar_Destroy_Callback(KCommandBar_Destroy_Callback cb) { kcommandbar_destroy_callback = cb; }
    inline void setKCommandBar_FocusNextChild_Callback(KCommandBar_FocusNextChild_Callback cb) { kcommandbar_focusnextchild_callback = cb; }
    inline void setKCommandBar_FocusPreviousChild_Callback(KCommandBar_FocusPreviousChild_Callback cb) { kcommandbar_focuspreviouschild_callback = cb; }
    inline void setKCommandBar_Sender_Callback(KCommandBar_Sender_Callback cb) { kcommandbar_sender_callback = cb; }
    inline void setKCommandBar_SenderSignalIndex_Callback(KCommandBar_SenderSignalIndex_Callback cb) { kcommandbar_sendersignalindex_callback = cb; }
    inline void setKCommandBar_Receivers_Callback(KCommandBar_Receivers_Callback cb) { kcommandbar_receivers_callback = cb; }
    inline void setKCommandBar_IsSignalConnected_Callback(KCommandBar_IsSignalConnected_Callback cb) { kcommandbar_issignalconnected_callback = cb; }
    inline void setKCommandBar_GetDecodedMetricF_Callback(KCommandBar_GetDecodedMetricF_Callback cb) { kcommandbar_getdecodedmetricf_callback = cb; }

    // Base flag setters
    inline void setKCommandBar_Metacall_IsBase(bool value) const { kcommandbar_metacall_isbase = value; }
    inline void setKCommandBar_EventFilter_IsBase(bool value) const { kcommandbar_eventfilter_isbase = value; }
    inline void setKCommandBar_SizeHint_IsBase(bool value) const { kcommandbar_sizehint_isbase = value; }
    inline void setKCommandBar_Event_IsBase(bool value) const { kcommandbar_event_isbase = value; }
    inline void setKCommandBar_PaintEvent_IsBase(bool value) const { kcommandbar_paintevent_isbase = value; }
    inline void setKCommandBar_ChangeEvent_IsBase(bool value) const { kcommandbar_changeevent_isbase = value; }
    inline void setKCommandBar_InitStyleOption_IsBase(bool value) const { kcommandbar_initstyleoption_isbase = value; }
    inline void setKCommandBar_DevType_IsBase(bool value) const { kcommandbar_devtype_isbase = value; }
    inline void setKCommandBar_SetVisible_IsBase(bool value) const { kcommandbar_setvisible_isbase = value; }
    inline void setKCommandBar_MinimumSizeHint_IsBase(bool value) const { kcommandbar_minimumsizehint_isbase = value; }
    inline void setKCommandBar_HeightForWidth_IsBase(bool value) const { kcommandbar_heightforwidth_isbase = value; }
    inline void setKCommandBar_HasHeightForWidth_IsBase(bool value) const { kcommandbar_hasheightforwidth_isbase = value; }
    inline void setKCommandBar_PaintEngine_IsBase(bool value) const { kcommandbar_paintengine_isbase = value; }
    inline void setKCommandBar_MousePressEvent_IsBase(bool value) const { kcommandbar_mousepressevent_isbase = value; }
    inline void setKCommandBar_MouseReleaseEvent_IsBase(bool value) const { kcommandbar_mousereleaseevent_isbase = value; }
    inline void setKCommandBar_MouseDoubleClickEvent_IsBase(bool value) const { kcommandbar_mousedoubleclickevent_isbase = value; }
    inline void setKCommandBar_MouseMoveEvent_IsBase(bool value) const { kcommandbar_mousemoveevent_isbase = value; }
    inline void setKCommandBar_WheelEvent_IsBase(bool value) const { kcommandbar_wheelevent_isbase = value; }
    inline void setKCommandBar_KeyPressEvent_IsBase(bool value) const { kcommandbar_keypressevent_isbase = value; }
    inline void setKCommandBar_KeyReleaseEvent_IsBase(bool value) const { kcommandbar_keyreleaseevent_isbase = value; }
    inline void setKCommandBar_FocusInEvent_IsBase(bool value) const { kcommandbar_focusinevent_isbase = value; }
    inline void setKCommandBar_FocusOutEvent_IsBase(bool value) const { kcommandbar_focusoutevent_isbase = value; }
    inline void setKCommandBar_EnterEvent_IsBase(bool value) const { kcommandbar_enterevent_isbase = value; }
    inline void setKCommandBar_LeaveEvent_IsBase(bool value) const { kcommandbar_leaveevent_isbase = value; }
    inline void setKCommandBar_MoveEvent_IsBase(bool value) const { kcommandbar_moveevent_isbase = value; }
    inline void setKCommandBar_ResizeEvent_IsBase(bool value) const { kcommandbar_resizeevent_isbase = value; }
    inline void setKCommandBar_CloseEvent_IsBase(bool value) const { kcommandbar_closeevent_isbase = value; }
    inline void setKCommandBar_ContextMenuEvent_IsBase(bool value) const { kcommandbar_contextmenuevent_isbase = value; }
    inline void setKCommandBar_TabletEvent_IsBase(bool value) const { kcommandbar_tabletevent_isbase = value; }
    inline void setKCommandBar_ActionEvent_IsBase(bool value) const { kcommandbar_actionevent_isbase = value; }
    inline void setKCommandBar_DragEnterEvent_IsBase(bool value) const { kcommandbar_dragenterevent_isbase = value; }
    inline void setKCommandBar_DragMoveEvent_IsBase(bool value) const { kcommandbar_dragmoveevent_isbase = value; }
    inline void setKCommandBar_DragLeaveEvent_IsBase(bool value) const { kcommandbar_dragleaveevent_isbase = value; }
    inline void setKCommandBar_DropEvent_IsBase(bool value) const { kcommandbar_dropevent_isbase = value; }
    inline void setKCommandBar_ShowEvent_IsBase(bool value) const { kcommandbar_showevent_isbase = value; }
    inline void setKCommandBar_HideEvent_IsBase(bool value) const { kcommandbar_hideevent_isbase = value; }
    inline void setKCommandBar_NativeEvent_IsBase(bool value) const { kcommandbar_nativeevent_isbase = value; }
    inline void setKCommandBar_Metric_IsBase(bool value) const { kcommandbar_metric_isbase = value; }
    inline void setKCommandBar_InitPainter_IsBase(bool value) const { kcommandbar_initpainter_isbase = value; }
    inline void setKCommandBar_Redirected_IsBase(bool value) const { kcommandbar_redirected_isbase = value; }
    inline void setKCommandBar_SharedPainter_IsBase(bool value) const { kcommandbar_sharedpainter_isbase = value; }
    inline void setKCommandBar_InputMethodEvent_IsBase(bool value) const { kcommandbar_inputmethodevent_isbase = value; }
    inline void setKCommandBar_InputMethodQuery_IsBase(bool value) const { kcommandbar_inputmethodquery_isbase = value; }
    inline void setKCommandBar_FocusNextPrevChild_IsBase(bool value) const { kcommandbar_focusnextprevchild_isbase = value; }
    inline void setKCommandBar_TimerEvent_IsBase(bool value) const { kcommandbar_timerevent_isbase = value; }
    inline void setKCommandBar_ChildEvent_IsBase(bool value) const { kcommandbar_childevent_isbase = value; }
    inline void setKCommandBar_CustomEvent_IsBase(bool value) const { kcommandbar_customevent_isbase = value; }
    inline void setKCommandBar_ConnectNotify_IsBase(bool value) const { kcommandbar_connectnotify_isbase = value; }
    inline void setKCommandBar_DisconnectNotify_IsBase(bool value) const { kcommandbar_disconnectnotify_isbase = value; }
    inline void setKCommandBar_DrawFrame_IsBase(bool value) const { kcommandbar_drawframe_isbase = value; }
    inline void setKCommandBar_UpdateMicroFocus_IsBase(bool value) const { kcommandbar_updatemicrofocus_isbase = value; }
    inline void setKCommandBar_Create_IsBase(bool value) const { kcommandbar_create_isbase = value; }
    inline void setKCommandBar_Destroy_IsBase(bool value) const { kcommandbar_destroy_isbase = value; }
    inline void setKCommandBar_FocusNextChild_IsBase(bool value) const { kcommandbar_focusnextchild_isbase = value; }
    inline void setKCommandBar_FocusPreviousChild_IsBase(bool value) const { kcommandbar_focuspreviouschild_isbase = value; }
    inline void setKCommandBar_Sender_IsBase(bool value) const { kcommandbar_sender_isbase = value; }
    inline void setKCommandBar_SenderSignalIndex_IsBase(bool value) const { kcommandbar_sendersignalindex_isbase = value; }
    inline void setKCommandBar_Receivers_IsBase(bool value) const { kcommandbar_receivers_isbase = value; }
    inline void setKCommandBar_IsSignalConnected_IsBase(bool value) const { kcommandbar_issignalconnected_isbase = value; }
    inline void setKCommandBar_GetDecodedMetricF_IsBase(bool value) const { kcommandbar_getdecodedmetricf_isbase = value; }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (kcommandbar_metacall_isbase) {
            kcommandbar_metacall_isbase = false;
            return KCommandBar::qt_metacall(param1, param2, param3);
        } else if (kcommandbar_metacall_callback != nullptr) {
            int cbval1 = static_cast<int>(param1);
            int cbval2 = param2;
            void** cbval3 = param3;

            int callback_ret = kcommandbar_metacall_callback(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        } else {
            return KCommandBar::qt_metacall(param1, param2, param3);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* obj, QEvent* event) override {
        if (kcommandbar_eventfilter_isbase) {
            kcommandbar_eventfilter_isbase = false;
            return KCommandBar::eventFilter(obj, event);
        } else if (kcommandbar_eventfilter_callback != nullptr) {
            QObject* cbval1 = obj;
            QEvent* cbval2 = event;

            bool callback_ret = kcommandbar_eventfilter_callback(this, cbval1, cbval2);
            return callback_ret;
        } else {
            return KCommandBar::eventFilter(obj, event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QSize sizeHint() const override {
        if (kcommandbar_sizehint_isbase) {
            kcommandbar_sizehint_isbase = false;
            return KCommandBar::sizeHint();
        } else if (kcommandbar_sizehint_callback != nullptr) {
            QSize* callback_ret = kcommandbar_sizehint_callback();
            return *callback_ret;
        } else {
            return KCommandBar::sizeHint();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* e) override {
        if (kcommandbar_event_isbase) {
            kcommandbar_event_isbase = false;
            return KCommandBar::event(e);
        } else if (kcommandbar_event_callback != nullptr) {
            QEvent* cbval1 = e;

            bool callback_ret = kcommandbar_event_callback(this, cbval1);
            return callback_ret;
        } else {
            return KCommandBar::event(e);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void paintEvent(QPaintEvent* param1) override {
        if (kcommandbar_paintevent_isbase) {
            kcommandbar_paintevent_isbase = false;
            KCommandBar::paintEvent(param1);
        } else if (kcommandbar_paintevent_callback != nullptr) {
            QPaintEvent* cbval1 = param1;

            kcommandbar_paintevent_callback(this, cbval1);
        } else {
            KCommandBar::paintEvent(param1);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void changeEvent(QEvent* param1) override {
        if (kcommandbar_changeevent_isbase) {
            kcommandbar_changeevent_isbase = false;
            KCommandBar::changeEvent(param1);
        } else if (kcommandbar_changeevent_callback != nullptr) {
            QEvent* cbval1 = param1;

            kcommandbar_changeevent_callback(this, cbval1);
        } else {
            KCommandBar::changeEvent(param1);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void initStyleOption(QStyleOptionFrame* option) const override {
        if (kcommandbar_initstyleoption_isbase) {
            kcommandbar_initstyleoption_isbase = false;
            KCommandBar::initStyleOption(option);
        } else if (kcommandbar_initstyleoption_callback != nullptr) {
            QStyleOptionFrame* cbval1 = option;

            kcommandbar_initstyleoption_callback(this, cbval1);
        } else {
            KCommandBar::initStyleOption(option);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual int devType() const override {
        if (kcommandbar_devtype_isbase) {
            kcommandbar_devtype_isbase = false;
            return KCommandBar::devType();
        } else if (kcommandbar_devtype_callback != nullptr) {
            int callback_ret = kcommandbar_devtype_callback();
            return static_cast<int>(callback_ret);
        } else {
            return KCommandBar::devType();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void setVisible(bool visible) override {
        if (kcommandbar_setvisible_isbase) {
            kcommandbar_setvisible_isbase = false;
            KCommandBar::setVisible(visible);
        } else if (kcommandbar_setvisible_callback != nullptr) {
            bool cbval1 = visible;

            kcommandbar_setvisible_callback(this, cbval1);
        } else {
            KCommandBar::setVisible(visible);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QSize minimumSizeHint() const override {
        if (kcommandbar_minimumsizehint_isbase) {
            kcommandbar_minimumsizehint_isbase = false;
            return KCommandBar::minimumSizeHint();
        } else if (kcommandbar_minimumsizehint_callback != nullptr) {
            QSize* callback_ret = kcommandbar_minimumsizehint_callback();
            return *callback_ret;
        } else {
            return KCommandBar::minimumSizeHint();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual int heightForWidth(int param1) const override {
        if (kcommandbar_heightforwidth_isbase) {
            kcommandbar_heightforwidth_isbase = false;
            return KCommandBar::heightForWidth(param1);
        } else if (kcommandbar_heightforwidth_callback != nullptr) {
            int cbval1 = param1;

            int callback_ret = kcommandbar_heightforwidth_callback(this, cbval1);
            return static_cast<int>(callback_ret);
        } else {
            return KCommandBar::heightForWidth(param1);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool hasHeightForWidth() const override {
        if (kcommandbar_hasheightforwidth_isbase) {
            kcommandbar_hasheightforwidth_isbase = false;
            return KCommandBar::hasHeightForWidth();
        } else if (kcommandbar_hasheightforwidth_callback != nullptr) {
            bool callback_ret = kcommandbar_hasheightforwidth_callback();
            return callback_ret;
        } else {
            return KCommandBar::hasHeightForWidth();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QPaintEngine* paintEngine() const override {
        if (kcommandbar_paintengine_isbase) {
            kcommandbar_paintengine_isbase = false;
            return KCommandBar::paintEngine();
        } else if (kcommandbar_paintengine_callback != nullptr) {
            QPaintEngine* callback_ret = kcommandbar_paintengine_callback();
            return callback_ret;
        } else {
            return KCommandBar::paintEngine();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void mousePressEvent(QMouseEvent* event) override {
        if (kcommandbar_mousepressevent_isbase) {
            kcommandbar_mousepressevent_isbase = false;
            KCommandBar::mousePressEvent(event);
        } else if (kcommandbar_mousepressevent_callback != nullptr) {
            QMouseEvent* cbval1 = event;

            kcommandbar_mousepressevent_callback(this, cbval1);
        } else {
            KCommandBar::mousePressEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseReleaseEvent(QMouseEvent* event) override {
        if (kcommandbar_mousereleaseevent_isbase) {
            kcommandbar_mousereleaseevent_isbase = false;
            KCommandBar::mouseReleaseEvent(event);
        } else if (kcommandbar_mousereleaseevent_callback != nullptr) {
            QMouseEvent* cbval1 = event;

            kcommandbar_mousereleaseevent_callback(this, cbval1);
        } else {
            KCommandBar::mouseReleaseEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseDoubleClickEvent(QMouseEvent* event) override {
        if (kcommandbar_mousedoubleclickevent_isbase) {
            kcommandbar_mousedoubleclickevent_isbase = false;
            KCommandBar::mouseDoubleClickEvent(event);
        } else if (kcommandbar_mousedoubleclickevent_callback != nullptr) {
            QMouseEvent* cbval1 = event;

            kcommandbar_mousedoubleclickevent_callback(this, cbval1);
        } else {
            KCommandBar::mouseDoubleClickEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseMoveEvent(QMouseEvent* event) override {
        if (kcommandbar_mousemoveevent_isbase) {
            kcommandbar_mousemoveevent_isbase = false;
            KCommandBar::mouseMoveEvent(event);
        } else if (kcommandbar_mousemoveevent_callback != nullptr) {
            QMouseEvent* cbval1 = event;

            kcommandbar_mousemoveevent_callback(this, cbval1);
        } else {
            KCommandBar::mouseMoveEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void wheelEvent(QWheelEvent* event) override {
        if (kcommandbar_wheelevent_isbase) {
            kcommandbar_wheelevent_isbase = false;
            KCommandBar::wheelEvent(event);
        } else if (kcommandbar_wheelevent_callback != nullptr) {
            QWheelEvent* cbval1 = event;

            kcommandbar_wheelevent_callback(this, cbval1);
        } else {
            KCommandBar::wheelEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void keyPressEvent(QKeyEvent* event) override {
        if (kcommandbar_keypressevent_isbase) {
            kcommandbar_keypressevent_isbase = false;
            KCommandBar::keyPressEvent(event);
        } else if (kcommandbar_keypressevent_callback != nullptr) {
            QKeyEvent* cbval1 = event;

            kcommandbar_keypressevent_callback(this, cbval1);
        } else {
            KCommandBar::keyPressEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void keyReleaseEvent(QKeyEvent* event) override {
        if (kcommandbar_keyreleaseevent_isbase) {
            kcommandbar_keyreleaseevent_isbase = false;
            KCommandBar::keyReleaseEvent(event);
        } else if (kcommandbar_keyreleaseevent_callback != nullptr) {
            QKeyEvent* cbval1 = event;

            kcommandbar_keyreleaseevent_callback(this, cbval1);
        } else {
            KCommandBar::keyReleaseEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void focusInEvent(QFocusEvent* event) override {
        if (kcommandbar_focusinevent_isbase) {
            kcommandbar_focusinevent_isbase = false;
            KCommandBar::focusInEvent(event);
        } else if (kcommandbar_focusinevent_callback != nullptr) {
            QFocusEvent* cbval1 = event;

            kcommandbar_focusinevent_callback(this, cbval1);
        } else {
            KCommandBar::focusInEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void focusOutEvent(QFocusEvent* event) override {
        if (kcommandbar_focusoutevent_isbase) {
            kcommandbar_focusoutevent_isbase = false;
            KCommandBar::focusOutEvent(event);
        } else if (kcommandbar_focusoutevent_callback != nullptr) {
            QFocusEvent* cbval1 = event;

            kcommandbar_focusoutevent_callback(this, cbval1);
        } else {
            KCommandBar::focusOutEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void enterEvent(QEnterEvent* event) override {
        if (kcommandbar_enterevent_isbase) {
            kcommandbar_enterevent_isbase = false;
            KCommandBar::enterEvent(event);
        } else if (kcommandbar_enterevent_callback != nullptr) {
            QEnterEvent* cbval1 = event;

            kcommandbar_enterevent_callback(this, cbval1);
        } else {
            KCommandBar::enterEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void leaveEvent(QEvent* event) override {
        if (kcommandbar_leaveevent_isbase) {
            kcommandbar_leaveevent_isbase = false;
            KCommandBar::leaveEvent(event);
        } else if (kcommandbar_leaveevent_callback != nullptr) {
            QEvent* cbval1 = event;

            kcommandbar_leaveevent_callback(this, cbval1);
        } else {
            KCommandBar::leaveEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void moveEvent(QMoveEvent* event) override {
        if (kcommandbar_moveevent_isbase) {
            kcommandbar_moveevent_isbase = false;
            KCommandBar::moveEvent(event);
        } else if (kcommandbar_moveevent_callback != nullptr) {
            QMoveEvent* cbval1 = event;

            kcommandbar_moveevent_callback(this, cbval1);
        } else {
            KCommandBar::moveEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void resizeEvent(QResizeEvent* event) override {
        if (kcommandbar_resizeevent_isbase) {
            kcommandbar_resizeevent_isbase = false;
            KCommandBar::resizeEvent(event);
        } else if (kcommandbar_resizeevent_callback != nullptr) {
            QResizeEvent* cbval1 = event;

            kcommandbar_resizeevent_callback(this, cbval1);
        } else {
            KCommandBar::resizeEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void closeEvent(QCloseEvent* event) override {
        if (kcommandbar_closeevent_isbase) {
            kcommandbar_closeevent_isbase = false;
            KCommandBar::closeEvent(event);
        } else if (kcommandbar_closeevent_callback != nullptr) {
            QCloseEvent* cbval1 = event;

            kcommandbar_closeevent_callback(this, cbval1);
        } else {
            KCommandBar::closeEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void contextMenuEvent(QContextMenuEvent* event) override {
        if (kcommandbar_contextmenuevent_isbase) {
            kcommandbar_contextmenuevent_isbase = false;
            KCommandBar::contextMenuEvent(event);
        } else if (kcommandbar_contextmenuevent_callback != nullptr) {
            QContextMenuEvent* cbval1 = event;

            kcommandbar_contextmenuevent_callback(this, cbval1);
        } else {
            KCommandBar::contextMenuEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void tabletEvent(QTabletEvent* event) override {
        if (kcommandbar_tabletevent_isbase) {
            kcommandbar_tabletevent_isbase = false;
            KCommandBar::tabletEvent(event);
        } else if (kcommandbar_tabletevent_callback != nullptr) {
            QTabletEvent* cbval1 = event;

            kcommandbar_tabletevent_callback(this, cbval1);
        } else {
            KCommandBar::tabletEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void actionEvent(QActionEvent* event) override {
        if (kcommandbar_actionevent_isbase) {
            kcommandbar_actionevent_isbase = false;
            KCommandBar::actionEvent(event);
        } else if (kcommandbar_actionevent_callback != nullptr) {
            QActionEvent* cbval1 = event;

            kcommandbar_actionevent_callback(this, cbval1);
        } else {
            KCommandBar::actionEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragEnterEvent(QDragEnterEvent* event) override {
        if (kcommandbar_dragenterevent_isbase) {
            kcommandbar_dragenterevent_isbase = false;
            KCommandBar::dragEnterEvent(event);
        } else if (kcommandbar_dragenterevent_callback != nullptr) {
            QDragEnterEvent* cbval1 = event;

            kcommandbar_dragenterevent_callback(this, cbval1);
        } else {
            KCommandBar::dragEnterEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragMoveEvent(QDragMoveEvent* event) override {
        if (kcommandbar_dragmoveevent_isbase) {
            kcommandbar_dragmoveevent_isbase = false;
            KCommandBar::dragMoveEvent(event);
        } else if (kcommandbar_dragmoveevent_callback != nullptr) {
            QDragMoveEvent* cbval1 = event;

            kcommandbar_dragmoveevent_callback(this, cbval1);
        } else {
            KCommandBar::dragMoveEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragLeaveEvent(QDragLeaveEvent* event) override {
        if (kcommandbar_dragleaveevent_isbase) {
            kcommandbar_dragleaveevent_isbase = false;
            KCommandBar::dragLeaveEvent(event);
        } else if (kcommandbar_dragleaveevent_callback != nullptr) {
            QDragLeaveEvent* cbval1 = event;

            kcommandbar_dragleaveevent_callback(this, cbval1);
        } else {
            KCommandBar::dragLeaveEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void dropEvent(QDropEvent* event) override {
        if (kcommandbar_dropevent_isbase) {
            kcommandbar_dropevent_isbase = false;
            KCommandBar::dropEvent(event);
        } else if (kcommandbar_dropevent_callback != nullptr) {
            QDropEvent* cbval1 = event;

            kcommandbar_dropevent_callback(this, cbval1);
        } else {
            KCommandBar::dropEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void showEvent(QShowEvent* event) override {
        if (kcommandbar_showevent_isbase) {
            kcommandbar_showevent_isbase = false;
            KCommandBar::showEvent(event);
        } else if (kcommandbar_showevent_callback != nullptr) {
            QShowEvent* cbval1 = event;

            kcommandbar_showevent_callback(this, cbval1);
        } else {
            KCommandBar::showEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void hideEvent(QHideEvent* event) override {
        if (kcommandbar_hideevent_isbase) {
            kcommandbar_hideevent_isbase = false;
            KCommandBar::hideEvent(event);
        } else if (kcommandbar_hideevent_callback != nullptr) {
            QHideEvent* cbval1 = event;

            kcommandbar_hideevent_callback(this, cbval1);
        } else {
            KCommandBar::hideEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool nativeEvent(const QByteArray& eventType, void* message, qintptr* result) override {
        if (kcommandbar_nativeevent_isbase) {
            kcommandbar_nativeevent_isbase = false;
            return KCommandBar::nativeEvent(eventType, message, result);
        } else if (kcommandbar_nativeevent_callback != nullptr) {
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

            bool callback_ret = kcommandbar_nativeevent_callback(this, cbval1, cbval2, cbval3);
            return callback_ret;
        } else {
            return KCommandBar::nativeEvent(eventType, message, result);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual int metric(QPaintDevice::PaintDeviceMetric param1) const override {
        if (kcommandbar_metric_isbase) {
            kcommandbar_metric_isbase = false;
            return KCommandBar::metric(param1);
        } else if (kcommandbar_metric_callback != nullptr) {
            int cbval1 = static_cast<int>(param1);

            int callback_ret = kcommandbar_metric_callback(this, cbval1);
            return static_cast<int>(callback_ret);
        } else {
            return KCommandBar::metric(param1);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void initPainter(QPainter* painter) const override {
        if (kcommandbar_initpainter_isbase) {
            kcommandbar_initpainter_isbase = false;
            KCommandBar::initPainter(painter);
        } else if (kcommandbar_initpainter_callback != nullptr) {
            QPainter* cbval1 = painter;

            kcommandbar_initpainter_callback(this, cbval1);
        } else {
            KCommandBar::initPainter(painter);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QPaintDevice* redirected(QPoint* offset) const override {
        if (kcommandbar_redirected_isbase) {
            kcommandbar_redirected_isbase = false;
            return KCommandBar::redirected(offset);
        } else if (kcommandbar_redirected_callback != nullptr) {
            QPoint* cbval1 = offset;

            QPaintDevice* callback_ret = kcommandbar_redirected_callback(this, cbval1);
            return callback_ret;
        } else {
            return KCommandBar::redirected(offset);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QPainter* sharedPainter() const override {
        if (kcommandbar_sharedpainter_isbase) {
            kcommandbar_sharedpainter_isbase = false;
            return KCommandBar::sharedPainter();
        } else if (kcommandbar_sharedpainter_callback != nullptr) {
            QPainter* callback_ret = kcommandbar_sharedpainter_callback();
            return callback_ret;
        } else {
            return KCommandBar::sharedPainter();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void inputMethodEvent(QInputMethodEvent* param1) override {
        if (kcommandbar_inputmethodevent_isbase) {
            kcommandbar_inputmethodevent_isbase = false;
            KCommandBar::inputMethodEvent(param1);
        } else if (kcommandbar_inputmethodevent_callback != nullptr) {
            QInputMethodEvent* cbval1 = param1;

            kcommandbar_inputmethodevent_callback(this, cbval1);
        } else {
            KCommandBar::inputMethodEvent(param1);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QVariant inputMethodQuery(Qt::InputMethodQuery param1) const override {
        if (kcommandbar_inputmethodquery_isbase) {
            kcommandbar_inputmethodquery_isbase = false;
            return KCommandBar::inputMethodQuery(param1);
        } else if (kcommandbar_inputmethodquery_callback != nullptr) {
            int cbval1 = static_cast<int>(param1);

            QVariant* callback_ret = kcommandbar_inputmethodquery_callback(this, cbval1);
            return *callback_ret;
        } else {
            return KCommandBar::inputMethodQuery(param1);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool focusNextPrevChild(bool next) override {
        if (kcommandbar_focusnextprevchild_isbase) {
            kcommandbar_focusnextprevchild_isbase = false;
            return KCommandBar::focusNextPrevChild(next);
        } else if (kcommandbar_focusnextprevchild_callback != nullptr) {
            bool cbval1 = next;

            bool callback_ret = kcommandbar_focusnextprevchild_callback(this, cbval1);
            return callback_ret;
        } else {
            return KCommandBar::focusNextPrevChild(next);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (kcommandbar_timerevent_isbase) {
            kcommandbar_timerevent_isbase = false;
            KCommandBar::timerEvent(event);
        } else if (kcommandbar_timerevent_callback != nullptr) {
            QTimerEvent* cbval1 = event;

            kcommandbar_timerevent_callback(this, cbval1);
        } else {
            KCommandBar::timerEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (kcommandbar_childevent_isbase) {
            kcommandbar_childevent_isbase = false;
            KCommandBar::childEvent(event);
        } else if (kcommandbar_childevent_callback != nullptr) {
            QChildEvent* cbval1 = event;

            kcommandbar_childevent_callback(this, cbval1);
        } else {
            KCommandBar::childEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (kcommandbar_customevent_isbase) {
            kcommandbar_customevent_isbase = false;
            KCommandBar::customEvent(event);
        } else if (kcommandbar_customevent_callback != nullptr) {
            QEvent* cbval1 = event;

            kcommandbar_customevent_callback(this, cbval1);
        } else {
            KCommandBar::customEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (kcommandbar_connectnotify_isbase) {
            kcommandbar_connectnotify_isbase = false;
            KCommandBar::connectNotify(signal);
        } else if (kcommandbar_connectnotify_callback != nullptr) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            kcommandbar_connectnotify_callback(this, cbval1);
        } else {
            KCommandBar::connectNotify(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (kcommandbar_disconnectnotify_isbase) {
            kcommandbar_disconnectnotify_isbase = false;
            KCommandBar::disconnectNotify(signal);
        } else if (kcommandbar_disconnectnotify_callback != nullptr) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            kcommandbar_disconnectnotify_callback(this, cbval1);
        } else {
            KCommandBar::disconnectNotify(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    void drawFrame(QPainter* param1) {
        if (kcommandbar_drawframe_isbase) {
            kcommandbar_drawframe_isbase = false;
            KCommandBar::drawFrame(param1);
        } else if (kcommandbar_drawframe_callback != nullptr) {
            QPainter* cbval1 = param1;

            kcommandbar_drawframe_callback(this, cbval1);
        } else {
            KCommandBar::drawFrame(param1);
        }
    }

    // Virtual method for C ABI access and custom callback
    void updateMicroFocus() {
        if (kcommandbar_updatemicrofocus_isbase) {
            kcommandbar_updatemicrofocus_isbase = false;
            KCommandBar::updateMicroFocus();
        } else if (kcommandbar_updatemicrofocus_callback != nullptr) {
            kcommandbar_updatemicrofocus_callback();
        } else {
            KCommandBar::updateMicroFocus();
        }
    }

    // Virtual method for C ABI access and custom callback
    void create() {
        if (kcommandbar_create_isbase) {
            kcommandbar_create_isbase = false;
            KCommandBar::create();
        } else if (kcommandbar_create_callback != nullptr) {
            kcommandbar_create_callback();
        } else {
            KCommandBar::create();
        }
    }

    // Virtual method for C ABI access and custom callback
    void destroy() {
        if (kcommandbar_destroy_isbase) {
            kcommandbar_destroy_isbase = false;
            KCommandBar::destroy();
        } else if (kcommandbar_destroy_callback != nullptr) {
            kcommandbar_destroy_callback();
        } else {
            KCommandBar::destroy();
        }
    }

    // Virtual method for C ABI access and custom callback
    bool focusNextChild() {
        if (kcommandbar_focusnextchild_isbase) {
            kcommandbar_focusnextchild_isbase = false;
            return KCommandBar::focusNextChild();
        } else if (kcommandbar_focusnextchild_callback != nullptr) {
            bool callback_ret = kcommandbar_focusnextchild_callback();
            return callback_ret;
        } else {
            return KCommandBar::focusNextChild();
        }
    }

    // Virtual method for C ABI access and custom callback
    bool focusPreviousChild() {
        if (kcommandbar_focuspreviouschild_isbase) {
            kcommandbar_focuspreviouschild_isbase = false;
            return KCommandBar::focusPreviousChild();
        } else if (kcommandbar_focuspreviouschild_callback != nullptr) {
            bool callback_ret = kcommandbar_focuspreviouschild_callback();
            return callback_ret;
        } else {
            return KCommandBar::focusPreviousChild();
        }
    }

    // Virtual method for C ABI access and custom callback
    QObject* sender() const {
        if (kcommandbar_sender_isbase) {
            kcommandbar_sender_isbase = false;
            return KCommandBar::sender();
        } else if (kcommandbar_sender_callback != nullptr) {
            QObject* callback_ret = kcommandbar_sender_callback();
            return callback_ret;
        } else {
            return KCommandBar::sender();
        }
    }

    // Virtual method for C ABI access and custom callback
    int senderSignalIndex() const {
        if (kcommandbar_sendersignalindex_isbase) {
            kcommandbar_sendersignalindex_isbase = false;
            return KCommandBar::senderSignalIndex();
        } else if (kcommandbar_sendersignalindex_callback != nullptr) {
            int callback_ret = kcommandbar_sendersignalindex_callback();
            return static_cast<int>(callback_ret);
        } else {
            return KCommandBar::senderSignalIndex();
        }
    }

    // Virtual method for C ABI access and custom callback
    int receivers(const char* signal) const {
        if (kcommandbar_receivers_isbase) {
            kcommandbar_receivers_isbase = false;
            return KCommandBar::receivers(signal);
        } else if (kcommandbar_receivers_callback != nullptr) {
            const char* cbval1 = (const char*)signal;

            int callback_ret = kcommandbar_receivers_callback(this, cbval1);
            return static_cast<int>(callback_ret);
        } else {
            return KCommandBar::receivers(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    bool isSignalConnected(const QMetaMethod& signal) const {
        if (kcommandbar_issignalconnected_isbase) {
            kcommandbar_issignalconnected_isbase = false;
            return KCommandBar::isSignalConnected(signal);
        } else if (kcommandbar_issignalconnected_callback != nullptr) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            bool callback_ret = kcommandbar_issignalconnected_callback(this, cbval1);
            return callback_ret;
        } else {
            return KCommandBar::isSignalConnected(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    double getDecodedMetricF(QPaintDevice::PaintDeviceMetric metricA, QPaintDevice::PaintDeviceMetric metricB) const {
        if (kcommandbar_getdecodedmetricf_isbase) {
            kcommandbar_getdecodedmetricf_isbase = false;
            return KCommandBar::getDecodedMetricF(metricA, metricB);
        } else if (kcommandbar_getdecodedmetricf_callback != nullptr) {
            int cbval1 = static_cast<int>(metricA);
            int cbval2 = static_cast<int>(metricB);

            double callback_ret = kcommandbar_getdecodedmetricf_callback(this, cbval1, cbval2);
            return static_cast<double>(callback_ret);
        } else {
            return KCommandBar::getDecodedMetricF(metricA, metricB);
        }
    }

    // Friend functions
    friend bool KCommandBar_EventFilter(KCommandBar* self, QObject* obj, QEvent* event);
    friend bool KCommandBar_QBaseEventFilter(KCommandBar* self, QObject* obj, QEvent* event);
    friend bool KCommandBar_Event(KCommandBar* self, QEvent* e);
    friend bool KCommandBar_QBaseEvent(KCommandBar* self, QEvent* e);
    friend void KCommandBar_PaintEvent(KCommandBar* self, QPaintEvent* param1);
    friend void KCommandBar_QBasePaintEvent(KCommandBar* self, QPaintEvent* param1);
    friend void KCommandBar_ChangeEvent(KCommandBar* self, QEvent* param1);
    friend void KCommandBar_QBaseChangeEvent(KCommandBar* self, QEvent* param1);
    friend void KCommandBar_InitStyleOption(const KCommandBar* self, QStyleOptionFrame* option);
    friend void KCommandBar_QBaseInitStyleOption(const KCommandBar* self, QStyleOptionFrame* option);
    friend void KCommandBar_MousePressEvent(KCommandBar* self, QMouseEvent* event);
    friend void KCommandBar_QBaseMousePressEvent(KCommandBar* self, QMouseEvent* event);
    friend void KCommandBar_MouseReleaseEvent(KCommandBar* self, QMouseEvent* event);
    friend void KCommandBar_QBaseMouseReleaseEvent(KCommandBar* self, QMouseEvent* event);
    friend void KCommandBar_MouseDoubleClickEvent(KCommandBar* self, QMouseEvent* event);
    friend void KCommandBar_QBaseMouseDoubleClickEvent(KCommandBar* self, QMouseEvent* event);
    friend void KCommandBar_MouseMoveEvent(KCommandBar* self, QMouseEvent* event);
    friend void KCommandBar_QBaseMouseMoveEvent(KCommandBar* self, QMouseEvent* event);
    friend void KCommandBar_WheelEvent(KCommandBar* self, QWheelEvent* event);
    friend void KCommandBar_QBaseWheelEvent(KCommandBar* self, QWheelEvent* event);
    friend void KCommandBar_KeyPressEvent(KCommandBar* self, QKeyEvent* event);
    friend void KCommandBar_QBaseKeyPressEvent(KCommandBar* self, QKeyEvent* event);
    friend void KCommandBar_KeyReleaseEvent(KCommandBar* self, QKeyEvent* event);
    friend void KCommandBar_QBaseKeyReleaseEvent(KCommandBar* self, QKeyEvent* event);
    friend void KCommandBar_FocusInEvent(KCommandBar* self, QFocusEvent* event);
    friend void KCommandBar_QBaseFocusInEvent(KCommandBar* self, QFocusEvent* event);
    friend void KCommandBar_FocusOutEvent(KCommandBar* self, QFocusEvent* event);
    friend void KCommandBar_QBaseFocusOutEvent(KCommandBar* self, QFocusEvent* event);
    friend void KCommandBar_EnterEvent(KCommandBar* self, QEnterEvent* event);
    friend void KCommandBar_QBaseEnterEvent(KCommandBar* self, QEnterEvent* event);
    friend void KCommandBar_LeaveEvent(KCommandBar* self, QEvent* event);
    friend void KCommandBar_QBaseLeaveEvent(KCommandBar* self, QEvent* event);
    friend void KCommandBar_MoveEvent(KCommandBar* self, QMoveEvent* event);
    friend void KCommandBar_QBaseMoveEvent(KCommandBar* self, QMoveEvent* event);
    friend void KCommandBar_ResizeEvent(KCommandBar* self, QResizeEvent* event);
    friend void KCommandBar_QBaseResizeEvent(KCommandBar* self, QResizeEvent* event);
    friend void KCommandBar_CloseEvent(KCommandBar* self, QCloseEvent* event);
    friend void KCommandBar_QBaseCloseEvent(KCommandBar* self, QCloseEvent* event);
    friend void KCommandBar_ContextMenuEvent(KCommandBar* self, QContextMenuEvent* event);
    friend void KCommandBar_QBaseContextMenuEvent(KCommandBar* self, QContextMenuEvent* event);
    friend void KCommandBar_TabletEvent(KCommandBar* self, QTabletEvent* event);
    friend void KCommandBar_QBaseTabletEvent(KCommandBar* self, QTabletEvent* event);
    friend void KCommandBar_ActionEvent(KCommandBar* self, QActionEvent* event);
    friend void KCommandBar_QBaseActionEvent(KCommandBar* self, QActionEvent* event);
    friend void KCommandBar_DragEnterEvent(KCommandBar* self, QDragEnterEvent* event);
    friend void KCommandBar_QBaseDragEnterEvent(KCommandBar* self, QDragEnterEvent* event);
    friend void KCommandBar_DragMoveEvent(KCommandBar* self, QDragMoveEvent* event);
    friend void KCommandBar_QBaseDragMoveEvent(KCommandBar* self, QDragMoveEvent* event);
    friend void KCommandBar_DragLeaveEvent(KCommandBar* self, QDragLeaveEvent* event);
    friend void KCommandBar_QBaseDragLeaveEvent(KCommandBar* self, QDragLeaveEvent* event);
    friend void KCommandBar_DropEvent(KCommandBar* self, QDropEvent* event);
    friend void KCommandBar_QBaseDropEvent(KCommandBar* self, QDropEvent* event);
    friend void KCommandBar_ShowEvent(KCommandBar* self, QShowEvent* event);
    friend void KCommandBar_QBaseShowEvent(KCommandBar* self, QShowEvent* event);
    friend void KCommandBar_HideEvent(KCommandBar* self, QHideEvent* event);
    friend void KCommandBar_QBaseHideEvent(KCommandBar* self, QHideEvent* event);
    friend bool KCommandBar_NativeEvent(KCommandBar* self, const libqt_string eventType, void* message, intptr_t* result);
    friend bool KCommandBar_QBaseNativeEvent(KCommandBar* self, const libqt_string eventType, void* message, intptr_t* result);
    friend int KCommandBar_Metric(const KCommandBar* self, int param1);
    friend int KCommandBar_QBaseMetric(const KCommandBar* self, int param1);
    friend void KCommandBar_InitPainter(const KCommandBar* self, QPainter* painter);
    friend void KCommandBar_QBaseInitPainter(const KCommandBar* self, QPainter* painter);
    friend QPaintDevice* KCommandBar_Redirected(const KCommandBar* self, QPoint* offset);
    friend QPaintDevice* KCommandBar_QBaseRedirected(const KCommandBar* self, QPoint* offset);
    friend QPainter* KCommandBar_SharedPainter(const KCommandBar* self);
    friend QPainter* KCommandBar_QBaseSharedPainter(const KCommandBar* self);
    friend void KCommandBar_InputMethodEvent(KCommandBar* self, QInputMethodEvent* param1);
    friend void KCommandBar_QBaseInputMethodEvent(KCommandBar* self, QInputMethodEvent* param1);
    friend bool KCommandBar_FocusNextPrevChild(KCommandBar* self, bool next);
    friend bool KCommandBar_QBaseFocusNextPrevChild(KCommandBar* self, bool next);
    friend void KCommandBar_TimerEvent(KCommandBar* self, QTimerEvent* event);
    friend void KCommandBar_QBaseTimerEvent(KCommandBar* self, QTimerEvent* event);
    friend void KCommandBar_ChildEvent(KCommandBar* self, QChildEvent* event);
    friend void KCommandBar_QBaseChildEvent(KCommandBar* self, QChildEvent* event);
    friend void KCommandBar_CustomEvent(KCommandBar* self, QEvent* event);
    friend void KCommandBar_QBaseCustomEvent(KCommandBar* self, QEvent* event);
    friend void KCommandBar_ConnectNotify(KCommandBar* self, const QMetaMethod* signal);
    friend void KCommandBar_QBaseConnectNotify(KCommandBar* self, const QMetaMethod* signal);
    friend void KCommandBar_DisconnectNotify(KCommandBar* self, const QMetaMethod* signal);
    friend void KCommandBar_QBaseDisconnectNotify(KCommandBar* self, const QMetaMethod* signal);
    friend void KCommandBar_DrawFrame(KCommandBar* self, QPainter* param1);
    friend void KCommandBar_QBaseDrawFrame(KCommandBar* self, QPainter* param1);
    friend void KCommandBar_UpdateMicroFocus(KCommandBar* self);
    friend void KCommandBar_QBaseUpdateMicroFocus(KCommandBar* self);
    friend void KCommandBar_Create(KCommandBar* self);
    friend void KCommandBar_QBaseCreate(KCommandBar* self);
    friend void KCommandBar_Destroy(KCommandBar* self);
    friend void KCommandBar_QBaseDestroy(KCommandBar* self);
    friend bool KCommandBar_FocusNextChild(KCommandBar* self);
    friend bool KCommandBar_QBaseFocusNextChild(KCommandBar* self);
    friend bool KCommandBar_FocusPreviousChild(KCommandBar* self);
    friend bool KCommandBar_QBaseFocusPreviousChild(KCommandBar* self);
    friend QObject* KCommandBar_Sender(const KCommandBar* self);
    friend QObject* KCommandBar_QBaseSender(const KCommandBar* self);
    friend int KCommandBar_SenderSignalIndex(const KCommandBar* self);
    friend int KCommandBar_QBaseSenderSignalIndex(const KCommandBar* self);
    friend int KCommandBar_Receivers(const KCommandBar* self, const char* signal);
    friend int KCommandBar_QBaseReceivers(const KCommandBar* self, const char* signal);
    friend bool KCommandBar_IsSignalConnected(const KCommandBar* self, const QMetaMethod* signal);
    friend bool KCommandBar_QBaseIsSignalConnected(const KCommandBar* self, const QMetaMethod* signal);
    friend double KCommandBar_GetDecodedMetricF(const KCommandBar* self, int metricA, int metricB);
    friend double KCommandBar_QBaseGetDecodedMetricF(const KCommandBar* self, int metricA, int metricB);
};

#endif
