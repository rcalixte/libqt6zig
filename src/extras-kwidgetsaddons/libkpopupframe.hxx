#pragma once
#ifndef SRC_EXTRAS_KWIDGETSADDONSC_LIBVIRTUALKPOPUPFRAME_H
#define SRC_EXTRAS_KWIDGETSADDONSC_LIBVIRTUALKPOPUPFRAME_H

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

// This class is a subclass of KPopupFrame so that we can call protected methods
class VirtualKPopupFrame final : public KPopupFrame {

  public:
    // Virtual class boolean flag
    bool isVirtualKPopupFrame = true;

    // Virtual class public types (including callbacks)
    using KPopupFrame_Metacall_Callback = int (*)(KPopupFrame*, int, int, void**);
    using KPopupFrame_KeyPressEvent_Callback = void (*)(KPopupFrame*, QKeyEvent*);
    using KPopupFrame_HideEvent_Callback = void (*)(KPopupFrame*, QHideEvent*);
    using KPopupFrame_ResizeEvent_Callback = void (*)(KPopupFrame*, QResizeEvent*);
    using KPopupFrame_SizeHint_Callback = QSize* (*)();
    using KPopupFrame_Event_Callback = bool (*)(KPopupFrame*, QEvent*);
    using KPopupFrame_PaintEvent_Callback = void (*)(KPopupFrame*, QPaintEvent*);
    using KPopupFrame_ChangeEvent_Callback = void (*)(KPopupFrame*, QEvent*);
    using KPopupFrame_InitStyleOption_Callback = void (*)(const KPopupFrame*, QStyleOptionFrame*);
    using KPopupFrame_DevType_Callback = int (*)();
    using KPopupFrame_SetVisible_Callback = void (*)(KPopupFrame*, bool);
    using KPopupFrame_MinimumSizeHint_Callback = QSize* (*)();
    using KPopupFrame_HeightForWidth_Callback = int (*)(const KPopupFrame*, int);
    using KPopupFrame_HasHeightForWidth_Callback = bool (*)();
    using KPopupFrame_PaintEngine_Callback = QPaintEngine* (*)();
    using KPopupFrame_MousePressEvent_Callback = void (*)(KPopupFrame*, QMouseEvent*);
    using KPopupFrame_MouseReleaseEvent_Callback = void (*)(KPopupFrame*, QMouseEvent*);
    using KPopupFrame_MouseDoubleClickEvent_Callback = void (*)(KPopupFrame*, QMouseEvent*);
    using KPopupFrame_MouseMoveEvent_Callback = void (*)(KPopupFrame*, QMouseEvent*);
    using KPopupFrame_WheelEvent_Callback = void (*)(KPopupFrame*, QWheelEvent*);
    using KPopupFrame_KeyReleaseEvent_Callback = void (*)(KPopupFrame*, QKeyEvent*);
    using KPopupFrame_FocusInEvent_Callback = void (*)(KPopupFrame*, QFocusEvent*);
    using KPopupFrame_FocusOutEvent_Callback = void (*)(KPopupFrame*, QFocusEvent*);
    using KPopupFrame_EnterEvent_Callback = void (*)(KPopupFrame*, QEnterEvent*);
    using KPopupFrame_LeaveEvent_Callback = void (*)(KPopupFrame*, QEvent*);
    using KPopupFrame_MoveEvent_Callback = void (*)(KPopupFrame*, QMoveEvent*);
    using KPopupFrame_CloseEvent_Callback = void (*)(KPopupFrame*, QCloseEvent*);
    using KPopupFrame_ContextMenuEvent_Callback = void (*)(KPopupFrame*, QContextMenuEvent*);
    using KPopupFrame_TabletEvent_Callback = void (*)(KPopupFrame*, QTabletEvent*);
    using KPopupFrame_ActionEvent_Callback = void (*)(KPopupFrame*, QActionEvent*);
    using KPopupFrame_DragEnterEvent_Callback = void (*)(KPopupFrame*, QDragEnterEvent*);
    using KPopupFrame_DragMoveEvent_Callback = void (*)(KPopupFrame*, QDragMoveEvent*);
    using KPopupFrame_DragLeaveEvent_Callback = void (*)(KPopupFrame*, QDragLeaveEvent*);
    using KPopupFrame_DropEvent_Callback = void (*)(KPopupFrame*, QDropEvent*);
    using KPopupFrame_ShowEvent_Callback = void (*)(KPopupFrame*, QShowEvent*);
    using KPopupFrame_NativeEvent_Callback = bool (*)(KPopupFrame*, libqt_string, void*, intptr_t*);
    using KPopupFrame_Metric_Callback = int (*)(const KPopupFrame*, int);
    using KPopupFrame_InitPainter_Callback = void (*)(const KPopupFrame*, QPainter*);
    using KPopupFrame_Redirected_Callback = QPaintDevice* (*)(const KPopupFrame*, QPoint*);
    using KPopupFrame_SharedPainter_Callback = QPainter* (*)();
    using KPopupFrame_InputMethodEvent_Callback = void (*)(KPopupFrame*, QInputMethodEvent*);
    using KPopupFrame_InputMethodQuery_Callback = QVariant* (*)(const KPopupFrame*, int);
    using KPopupFrame_FocusNextPrevChild_Callback = bool (*)(KPopupFrame*, bool);
    using KPopupFrame_EventFilter_Callback = bool (*)(KPopupFrame*, QObject*, QEvent*);
    using KPopupFrame_TimerEvent_Callback = void (*)(KPopupFrame*, QTimerEvent*);
    using KPopupFrame_ChildEvent_Callback = void (*)(KPopupFrame*, QChildEvent*);
    using KPopupFrame_CustomEvent_Callback = void (*)(KPopupFrame*, QEvent*);
    using KPopupFrame_ConnectNotify_Callback = void (*)(KPopupFrame*, QMetaMethod*);
    using KPopupFrame_DisconnectNotify_Callback = void (*)(KPopupFrame*, QMetaMethod*);
    using KPopupFrame_DrawFrame_Callback = void (*)(KPopupFrame*, QPainter*);
    using KPopupFrame_UpdateMicroFocus_Callback = void (*)();
    using KPopupFrame_Create_Callback = void (*)();
    using KPopupFrame_Destroy_Callback = void (*)();
    using KPopupFrame_FocusNextChild_Callback = bool (*)();
    using KPopupFrame_FocusPreviousChild_Callback = bool (*)();
    using KPopupFrame_Sender_Callback = QObject* (*)();
    using KPopupFrame_SenderSignalIndex_Callback = int (*)();
    using KPopupFrame_Receivers_Callback = int (*)(const KPopupFrame*, const char*);
    using KPopupFrame_IsSignalConnected_Callback = bool (*)(const KPopupFrame*, QMetaMethod*);
    using KPopupFrame_GetDecodedMetricF_Callback = double (*)(const KPopupFrame*, int, int);

  protected:
    // Instance callback storage
    KPopupFrame_Metacall_Callback kpopupframe_metacall_callback = nullptr;
    KPopupFrame_KeyPressEvent_Callback kpopupframe_keypressevent_callback = nullptr;
    KPopupFrame_HideEvent_Callback kpopupframe_hideevent_callback = nullptr;
    KPopupFrame_ResizeEvent_Callback kpopupframe_resizeevent_callback = nullptr;
    KPopupFrame_SizeHint_Callback kpopupframe_sizehint_callback = nullptr;
    KPopupFrame_Event_Callback kpopupframe_event_callback = nullptr;
    KPopupFrame_PaintEvent_Callback kpopupframe_paintevent_callback = nullptr;
    KPopupFrame_ChangeEvent_Callback kpopupframe_changeevent_callback = nullptr;
    KPopupFrame_InitStyleOption_Callback kpopupframe_initstyleoption_callback = nullptr;
    KPopupFrame_DevType_Callback kpopupframe_devtype_callback = nullptr;
    KPopupFrame_SetVisible_Callback kpopupframe_setvisible_callback = nullptr;
    KPopupFrame_MinimumSizeHint_Callback kpopupframe_minimumsizehint_callback = nullptr;
    KPopupFrame_HeightForWidth_Callback kpopupframe_heightforwidth_callback = nullptr;
    KPopupFrame_HasHeightForWidth_Callback kpopupframe_hasheightforwidth_callback = nullptr;
    KPopupFrame_PaintEngine_Callback kpopupframe_paintengine_callback = nullptr;
    KPopupFrame_MousePressEvent_Callback kpopupframe_mousepressevent_callback = nullptr;
    KPopupFrame_MouseReleaseEvent_Callback kpopupframe_mousereleaseevent_callback = nullptr;
    KPopupFrame_MouseDoubleClickEvent_Callback kpopupframe_mousedoubleclickevent_callback = nullptr;
    KPopupFrame_MouseMoveEvent_Callback kpopupframe_mousemoveevent_callback = nullptr;
    KPopupFrame_WheelEvent_Callback kpopupframe_wheelevent_callback = nullptr;
    KPopupFrame_KeyReleaseEvent_Callback kpopupframe_keyreleaseevent_callback = nullptr;
    KPopupFrame_FocusInEvent_Callback kpopupframe_focusinevent_callback = nullptr;
    KPopupFrame_FocusOutEvent_Callback kpopupframe_focusoutevent_callback = nullptr;
    KPopupFrame_EnterEvent_Callback kpopupframe_enterevent_callback = nullptr;
    KPopupFrame_LeaveEvent_Callback kpopupframe_leaveevent_callback = nullptr;
    KPopupFrame_MoveEvent_Callback kpopupframe_moveevent_callback = nullptr;
    KPopupFrame_CloseEvent_Callback kpopupframe_closeevent_callback = nullptr;
    KPopupFrame_ContextMenuEvent_Callback kpopupframe_contextmenuevent_callback = nullptr;
    KPopupFrame_TabletEvent_Callback kpopupframe_tabletevent_callback = nullptr;
    KPopupFrame_ActionEvent_Callback kpopupframe_actionevent_callback = nullptr;
    KPopupFrame_DragEnterEvent_Callback kpopupframe_dragenterevent_callback = nullptr;
    KPopupFrame_DragMoveEvent_Callback kpopupframe_dragmoveevent_callback = nullptr;
    KPopupFrame_DragLeaveEvent_Callback kpopupframe_dragleaveevent_callback = nullptr;
    KPopupFrame_DropEvent_Callback kpopupframe_dropevent_callback = nullptr;
    KPopupFrame_ShowEvent_Callback kpopupframe_showevent_callback = nullptr;
    KPopupFrame_NativeEvent_Callback kpopupframe_nativeevent_callback = nullptr;
    KPopupFrame_Metric_Callback kpopupframe_metric_callback = nullptr;
    KPopupFrame_InitPainter_Callback kpopupframe_initpainter_callback = nullptr;
    KPopupFrame_Redirected_Callback kpopupframe_redirected_callback = nullptr;
    KPopupFrame_SharedPainter_Callback kpopupframe_sharedpainter_callback = nullptr;
    KPopupFrame_InputMethodEvent_Callback kpopupframe_inputmethodevent_callback = nullptr;
    KPopupFrame_InputMethodQuery_Callback kpopupframe_inputmethodquery_callback = nullptr;
    KPopupFrame_FocusNextPrevChild_Callback kpopupframe_focusnextprevchild_callback = nullptr;
    KPopupFrame_EventFilter_Callback kpopupframe_eventfilter_callback = nullptr;
    KPopupFrame_TimerEvent_Callback kpopupframe_timerevent_callback = nullptr;
    KPopupFrame_ChildEvent_Callback kpopupframe_childevent_callback = nullptr;
    KPopupFrame_CustomEvent_Callback kpopupframe_customevent_callback = nullptr;
    KPopupFrame_ConnectNotify_Callback kpopupframe_connectnotify_callback = nullptr;
    KPopupFrame_DisconnectNotify_Callback kpopupframe_disconnectnotify_callback = nullptr;
    KPopupFrame_DrawFrame_Callback kpopupframe_drawframe_callback = nullptr;
    KPopupFrame_UpdateMicroFocus_Callback kpopupframe_updatemicrofocus_callback = nullptr;
    KPopupFrame_Create_Callback kpopupframe_create_callback = nullptr;
    KPopupFrame_Destroy_Callback kpopupframe_destroy_callback = nullptr;
    KPopupFrame_FocusNextChild_Callback kpopupframe_focusnextchild_callback = nullptr;
    KPopupFrame_FocusPreviousChild_Callback kpopupframe_focuspreviouschild_callback = nullptr;
    KPopupFrame_Sender_Callback kpopupframe_sender_callback = nullptr;
    KPopupFrame_SenderSignalIndex_Callback kpopupframe_sendersignalindex_callback = nullptr;
    KPopupFrame_Receivers_Callback kpopupframe_receivers_callback = nullptr;
    KPopupFrame_IsSignalConnected_Callback kpopupframe_issignalconnected_callback = nullptr;
    KPopupFrame_GetDecodedMetricF_Callback kpopupframe_getdecodedmetricf_callback = nullptr;

    // Instance base flags
    mutable bool kpopupframe_metacall_isbase = false;
    mutable bool kpopupframe_keypressevent_isbase = false;
    mutable bool kpopupframe_hideevent_isbase = false;
    mutable bool kpopupframe_resizeevent_isbase = false;
    mutable bool kpopupframe_sizehint_isbase = false;
    mutable bool kpopupframe_event_isbase = false;
    mutable bool kpopupframe_paintevent_isbase = false;
    mutable bool kpopupframe_changeevent_isbase = false;
    mutable bool kpopupframe_initstyleoption_isbase = false;
    mutable bool kpopupframe_devtype_isbase = false;
    mutable bool kpopupframe_setvisible_isbase = false;
    mutable bool kpopupframe_minimumsizehint_isbase = false;
    mutable bool kpopupframe_heightforwidth_isbase = false;
    mutable bool kpopupframe_hasheightforwidth_isbase = false;
    mutable bool kpopupframe_paintengine_isbase = false;
    mutable bool kpopupframe_mousepressevent_isbase = false;
    mutable bool kpopupframe_mousereleaseevent_isbase = false;
    mutable bool kpopupframe_mousedoubleclickevent_isbase = false;
    mutable bool kpopupframe_mousemoveevent_isbase = false;
    mutable bool kpopupframe_wheelevent_isbase = false;
    mutable bool kpopupframe_keyreleaseevent_isbase = false;
    mutable bool kpopupframe_focusinevent_isbase = false;
    mutable bool kpopupframe_focusoutevent_isbase = false;
    mutable bool kpopupframe_enterevent_isbase = false;
    mutable bool kpopupframe_leaveevent_isbase = false;
    mutable bool kpopupframe_moveevent_isbase = false;
    mutable bool kpopupframe_closeevent_isbase = false;
    mutable bool kpopupframe_contextmenuevent_isbase = false;
    mutable bool kpopupframe_tabletevent_isbase = false;
    mutable bool kpopupframe_actionevent_isbase = false;
    mutable bool kpopupframe_dragenterevent_isbase = false;
    mutable bool kpopupframe_dragmoveevent_isbase = false;
    mutable bool kpopupframe_dragleaveevent_isbase = false;
    mutable bool kpopupframe_dropevent_isbase = false;
    mutable bool kpopupframe_showevent_isbase = false;
    mutable bool kpopupframe_nativeevent_isbase = false;
    mutable bool kpopupframe_metric_isbase = false;
    mutable bool kpopupframe_initpainter_isbase = false;
    mutable bool kpopupframe_redirected_isbase = false;
    mutable bool kpopupframe_sharedpainter_isbase = false;
    mutable bool kpopupframe_inputmethodevent_isbase = false;
    mutable bool kpopupframe_inputmethodquery_isbase = false;
    mutable bool kpopupframe_focusnextprevchild_isbase = false;
    mutable bool kpopupframe_eventfilter_isbase = false;
    mutable bool kpopupframe_timerevent_isbase = false;
    mutable bool kpopupframe_childevent_isbase = false;
    mutable bool kpopupframe_customevent_isbase = false;
    mutable bool kpopupframe_connectnotify_isbase = false;
    mutable bool kpopupframe_disconnectnotify_isbase = false;
    mutable bool kpopupframe_drawframe_isbase = false;
    mutable bool kpopupframe_updatemicrofocus_isbase = false;
    mutable bool kpopupframe_create_isbase = false;
    mutable bool kpopupframe_destroy_isbase = false;
    mutable bool kpopupframe_focusnextchild_isbase = false;
    mutable bool kpopupframe_focuspreviouschild_isbase = false;
    mutable bool kpopupframe_sender_isbase = false;
    mutable bool kpopupframe_sendersignalindex_isbase = false;
    mutable bool kpopupframe_receivers_isbase = false;
    mutable bool kpopupframe_issignalconnected_isbase = false;
    mutable bool kpopupframe_getdecodedmetricf_isbase = false;

  public:
    VirtualKPopupFrame(QWidget* parent) : KPopupFrame(parent) {};
    VirtualKPopupFrame() : KPopupFrame() {};

    ~VirtualKPopupFrame() {
        kpopupframe_metacall_callback = nullptr;
        kpopupframe_keypressevent_callback = nullptr;
        kpopupframe_hideevent_callback = nullptr;
        kpopupframe_resizeevent_callback = nullptr;
        kpopupframe_sizehint_callback = nullptr;
        kpopupframe_event_callback = nullptr;
        kpopupframe_paintevent_callback = nullptr;
        kpopupframe_changeevent_callback = nullptr;
        kpopupframe_initstyleoption_callback = nullptr;
        kpopupframe_devtype_callback = nullptr;
        kpopupframe_setvisible_callback = nullptr;
        kpopupframe_minimumsizehint_callback = nullptr;
        kpopupframe_heightforwidth_callback = nullptr;
        kpopupframe_hasheightforwidth_callback = nullptr;
        kpopupframe_paintengine_callback = nullptr;
        kpopupframe_mousepressevent_callback = nullptr;
        kpopupframe_mousereleaseevent_callback = nullptr;
        kpopupframe_mousedoubleclickevent_callback = nullptr;
        kpopupframe_mousemoveevent_callback = nullptr;
        kpopupframe_wheelevent_callback = nullptr;
        kpopupframe_keyreleaseevent_callback = nullptr;
        kpopupframe_focusinevent_callback = nullptr;
        kpopupframe_focusoutevent_callback = nullptr;
        kpopupframe_enterevent_callback = nullptr;
        kpopupframe_leaveevent_callback = nullptr;
        kpopupframe_moveevent_callback = nullptr;
        kpopupframe_closeevent_callback = nullptr;
        kpopupframe_contextmenuevent_callback = nullptr;
        kpopupframe_tabletevent_callback = nullptr;
        kpopupframe_actionevent_callback = nullptr;
        kpopupframe_dragenterevent_callback = nullptr;
        kpopupframe_dragmoveevent_callback = nullptr;
        kpopupframe_dragleaveevent_callback = nullptr;
        kpopupframe_dropevent_callback = nullptr;
        kpopupframe_showevent_callback = nullptr;
        kpopupframe_nativeevent_callback = nullptr;
        kpopupframe_metric_callback = nullptr;
        kpopupframe_initpainter_callback = nullptr;
        kpopupframe_redirected_callback = nullptr;
        kpopupframe_sharedpainter_callback = nullptr;
        kpopupframe_inputmethodevent_callback = nullptr;
        kpopupframe_inputmethodquery_callback = nullptr;
        kpopupframe_focusnextprevchild_callback = nullptr;
        kpopupframe_eventfilter_callback = nullptr;
        kpopupframe_timerevent_callback = nullptr;
        kpopupframe_childevent_callback = nullptr;
        kpopupframe_customevent_callback = nullptr;
        kpopupframe_connectnotify_callback = nullptr;
        kpopupframe_disconnectnotify_callback = nullptr;
        kpopupframe_drawframe_callback = nullptr;
        kpopupframe_updatemicrofocus_callback = nullptr;
        kpopupframe_create_callback = nullptr;
        kpopupframe_destroy_callback = nullptr;
        kpopupframe_focusnextchild_callback = nullptr;
        kpopupframe_focuspreviouschild_callback = nullptr;
        kpopupframe_sender_callback = nullptr;
        kpopupframe_sendersignalindex_callback = nullptr;
        kpopupframe_receivers_callback = nullptr;
        kpopupframe_issignalconnected_callback = nullptr;
        kpopupframe_getdecodedmetricf_callback = nullptr;
    }

    // Callback setters
    inline void setKPopupFrame_Metacall_Callback(KPopupFrame_Metacall_Callback cb) { kpopupframe_metacall_callback = cb; }
    inline void setKPopupFrame_KeyPressEvent_Callback(KPopupFrame_KeyPressEvent_Callback cb) { kpopupframe_keypressevent_callback = cb; }
    inline void setKPopupFrame_HideEvent_Callback(KPopupFrame_HideEvent_Callback cb) { kpopupframe_hideevent_callback = cb; }
    inline void setKPopupFrame_ResizeEvent_Callback(KPopupFrame_ResizeEvent_Callback cb) { kpopupframe_resizeevent_callback = cb; }
    inline void setKPopupFrame_SizeHint_Callback(KPopupFrame_SizeHint_Callback cb) { kpopupframe_sizehint_callback = cb; }
    inline void setKPopupFrame_Event_Callback(KPopupFrame_Event_Callback cb) { kpopupframe_event_callback = cb; }
    inline void setKPopupFrame_PaintEvent_Callback(KPopupFrame_PaintEvent_Callback cb) { kpopupframe_paintevent_callback = cb; }
    inline void setKPopupFrame_ChangeEvent_Callback(KPopupFrame_ChangeEvent_Callback cb) { kpopupframe_changeevent_callback = cb; }
    inline void setKPopupFrame_InitStyleOption_Callback(KPopupFrame_InitStyleOption_Callback cb) { kpopupframe_initstyleoption_callback = cb; }
    inline void setKPopupFrame_DevType_Callback(KPopupFrame_DevType_Callback cb) { kpopupframe_devtype_callback = cb; }
    inline void setKPopupFrame_SetVisible_Callback(KPopupFrame_SetVisible_Callback cb) { kpopupframe_setvisible_callback = cb; }
    inline void setKPopupFrame_MinimumSizeHint_Callback(KPopupFrame_MinimumSizeHint_Callback cb) { kpopupframe_minimumsizehint_callback = cb; }
    inline void setKPopupFrame_HeightForWidth_Callback(KPopupFrame_HeightForWidth_Callback cb) { kpopupframe_heightforwidth_callback = cb; }
    inline void setKPopupFrame_HasHeightForWidth_Callback(KPopupFrame_HasHeightForWidth_Callback cb) { kpopupframe_hasheightforwidth_callback = cb; }
    inline void setKPopupFrame_PaintEngine_Callback(KPopupFrame_PaintEngine_Callback cb) { kpopupframe_paintengine_callback = cb; }
    inline void setKPopupFrame_MousePressEvent_Callback(KPopupFrame_MousePressEvent_Callback cb) { kpopupframe_mousepressevent_callback = cb; }
    inline void setKPopupFrame_MouseReleaseEvent_Callback(KPopupFrame_MouseReleaseEvent_Callback cb) { kpopupframe_mousereleaseevent_callback = cb; }
    inline void setKPopupFrame_MouseDoubleClickEvent_Callback(KPopupFrame_MouseDoubleClickEvent_Callback cb) { kpopupframe_mousedoubleclickevent_callback = cb; }
    inline void setKPopupFrame_MouseMoveEvent_Callback(KPopupFrame_MouseMoveEvent_Callback cb) { kpopupframe_mousemoveevent_callback = cb; }
    inline void setKPopupFrame_WheelEvent_Callback(KPopupFrame_WheelEvent_Callback cb) { kpopupframe_wheelevent_callback = cb; }
    inline void setKPopupFrame_KeyReleaseEvent_Callback(KPopupFrame_KeyReleaseEvent_Callback cb) { kpopupframe_keyreleaseevent_callback = cb; }
    inline void setKPopupFrame_FocusInEvent_Callback(KPopupFrame_FocusInEvent_Callback cb) { kpopupframe_focusinevent_callback = cb; }
    inline void setKPopupFrame_FocusOutEvent_Callback(KPopupFrame_FocusOutEvent_Callback cb) { kpopupframe_focusoutevent_callback = cb; }
    inline void setKPopupFrame_EnterEvent_Callback(KPopupFrame_EnterEvent_Callback cb) { kpopupframe_enterevent_callback = cb; }
    inline void setKPopupFrame_LeaveEvent_Callback(KPopupFrame_LeaveEvent_Callback cb) { kpopupframe_leaveevent_callback = cb; }
    inline void setKPopupFrame_MoveEvent_Callback(KPopupFrame_MoveEvent_Callback cb) { kpopupframe_moveevent_callback = cb; }
    inline void setKPopupFrame_CloseEvent_Callback(KPopupFrame_CloseEvent_Callback cb) { kpopupframe_closeevent_callback = cb; }
    inline void setKPopupFrame_ContextMenuEvent_Callback(KPopupFrame_ContextMenuEvent_Callback cb) { kpopupframe_contextmenuevent_callback = cb; }
    inline void setKPopupFrame_TabletEvent_Callback(KPopupFrame_TabletEvent_Callback cb) { kpopupframe_tabletevent_callback = cb; }
    inline void setKPopupFrame_ActionEvent_Callback(KPopupFrame_ActionEvent_Callback cb) { kpopupframe_actionevent_callback = cb; }
    inline void setKPopupFrame_DragEnterEvent_Callback(KPopupFrame_DragEnterEvent_Callback cb) { kpopupframe_dragenterevent_callback = cb; }
    inline void setKPopupFrame_DragMoveEvent_Callback(KPopupFrame_DragMoveEvent_Callback cb) { kpopupframe_dragmoveevent_callback = cb; }
    inline void setKPopupFrame_DragLeaveEvent_Callback(KPopupFrame_DragLeaveEvent_Callback cb) { kpopupframe_dragleaveevent_callback = cb; }
    inline void setKPopupFrame_DropEvent_Callback(KPopupFrame_DropEvent_Callback cb) { kpopupframe_dropevent_callback = cb; }
    inline void setKPopupFrame_ShowEvent_Callback(KPopupFrame_ShowEvent_Callback cb) { kpopupframe_showevent_callback = cb; }
    inline void setKPopupFrame_NativeEvent_Callback(KPopupFrame_NativeEvent_Callback cb) { kpopupframe_nativeevent_callback = cb; }
    inline void setKPopupFrame_Metric_Callback(KPopupFrame_Metric_Callback cb) { kpopupframe_metric_callback = cb; }
    inline void setKPopupFrame_InitPainter_Callback(KPopupFrame_InitPainter_Callback cb) { kpopupframe_initpainter_callback = cb; }
    inline void setKPopupFrame_Redirected_Callback(KPopupFrame_Redirected_Callback cb) { kpopupframe_redirected_callback = cb; }
    inline void setKPopupFrame_SharedPainter_Callback(KPopupFrame_SharedPainter_Callback cb) { kpopupframe_sharedpainter_callback = cb; }
    inline void setKPopupFrame_InputMethodEvent_Callback(KPopupFrame_InputMethodEvent_Callback cb) { kpopupframe_inputmethodevent_callback = cb; }
    inline void setKPopupFrame_InputMethodQuery_Callback(KPopupFrame_InputMethodQuery_Callback cb) { kpopupframe_inputmethodquery_callback = cb; }
    inline void setKPopupFrame_FocusNextPrevChild_Callback(KPopupFrame_FocusNextPrevChild_Callback cb) { kpopupframe_focusnextprevchild_callback = cb; }
    inline void setKPopupFrame_EventFilter_Callback(KPopupFrame_EventFilter_Callback cb) { kpopupframe_eventfilter_callback = cb; }
    inline void setKPopupFrame_TimerEvent_Callback(KPopupFrame_TimerEvent_Callback cb) { kpopupframe_timerevent_callback = cb; }
    inline void setKPopupFrame_ChildEvent_Callback(KPopupFrame_ChildEvent_Callback cb) { kpopupframe_childevent_callback = cb; }
    inline void setKPopupFrame_CustomEvent_Callback(KPopupFrame_CustomEvent_Callback cb) { kpopupframe_customevent_callback = cb; }
    inline void setKPopupFrame_ConnectNotify_Callback(KPopupFrame_ConnectNotify_Callback cb) { kpopupframe_connectnotify_callback = cb; }
    inline void setKPopupFrame_DisconnectNotify_Callback(KPopupFrame_DisconnectNotify_Callback cb) { kpopupframe_disconnectnotify_callback = cb; }
    inline void setKPopupFrame_DrawFrame_Callback(KPopupFrame_DrawFrame_Callback cb) { kpopupframe_drawframe_callback = cb; }
    inline void setKPopupFrame_UpdateMicroFocus_Callback(KPopupFrame_UpdateMicroFocus_Callback cb) { kpopupframe_updatemicrofocus_callback = cb; }
    inline void setKPopupFrame_Create_Callback(KPopupFrame_Create_Callback cb) { kpopupframe_create_callback = cb; }
    inline void setKPopupFrame_Destroy_Callback(KPopupFrame_Destroy_Callback cb) { kpopupframe_destroy_callback = cb; }
    inline void setKPopupFrame_FocusNextChild_Callback(KPopupFrame_FocusNextChild_Callback cb) { kpopupframe_focusnextchild_callback = cb; }
    inline void setKPopupFrame_FocusPreviousChild_Callback(KPopupFrame_FocusPreviousChild_Callback cb) { kpopupframe_focuspreviouschild_callback = cb; }
    inline void setKPopupFrame_Sender_Callback(KPopupFrame_Sender_Callback cb) { kpopupframe_sender_callback = cb; }
    inline void setKPopupFrame_SenderSignalIndex_Callback(KPopupFrame_SenderSignalIndex_Callback cb) { kpopupframe_sendersignalindex_callback = cb; }
    inline void setKPopupFrame_Receivers_Callback(KPopupFrame_Receivers_Callback cb) { kpopupframe_receivers_callback = cb; }
    inline void setKPopupFrame_IsSignalConnected_Callback(KPopupFrame_IsSignalConnected_Callback cb) { kpopupframe_issignalconnected_callback = cb; }
    inline void setKPopupFrame_GetDecodedMetricF_Callback(KPopupFrame_GetDecodedMetricF_Callback cb) { kpopupframe_getdecodedmetricf_callback = cb; }

    // Base flag setters
    inline void setKPopupFrame_Metacall_IsBase(bool value) const { kpopupframe_metacall_isbase = value; }
    inline void setKPopupFrame_KeyPressEvent_IsBase(bool value) const { kpopupframe_keypressevent_isbase = value; }
    inline void setKPopupFrame_HideEvent_IsBase(bool value) const { kpopupframe_hideevent_isbase = value; }
    inline void setKPopupFrame_ResizeEvent_IsBase(bool value) const { kpopupframe_resizeevent_isbase = value; }
    inline void setKPopupFrame_SizeHint_IsBase(bool value) const { kpopupframe_sizehint_isbase = value; }
    inline void setKPopupFrame_Event_IsBase(bool value) const { kpopupframe_event_isbase = value; }
    inline void setKPopupFrame_PaintEvent_IsBase(bool value) const { kpopupframe_paintevent_isbase = value; }
    inline void setKPopupFrame_ChangeEvent_IsBase(bool value) const { kpopupframe_changeevent_isbase = value; }
    inline void setKPopupFrame_InitStyleOption_IsBase(bool value) const { kpopupframe_initstyleoption_isbase = value; }
    inline void setKPopupFrame_DevType_IsBase(bool value) const { kpopupframe_devtype_isbase = value; }
    inline void setKPopupFrame_SetVisible_IsBase(bool value) const { kpopupframe_setvisible_isbase = value; }
    inline void setKPopupFrame_MinimumSizeHint_IsBase(bool value) const { kpopupframe_minimumsizehint_isbase = value; }
    inline void setKPopupFrame_HeightForWidth_IsBase(bool value) const { kpopupframe_heightforwidth_isbase = value; }
    inline void setKPopupFrame_HasHeightForWidth_IsBase(bool value) const { kpopupframe_hasheightforwidth_isbase = value; }
    inline void setKPopupFrame_PaintEngine_IsBase(bool value) const { kpopupframe_paintengine_isbase = value; }
    inline void setKPopupFrame_MousePressEvent_IsBase(bool value) const { kpopupframe_mousepressevent_isbase = value; }
    inline void setKPopupFrame_MouseReleaseEvent_IsBase(bool value) const { kpopupframe_mousereleaseevent_isbase = value; }
    inline void setKPopupFrame_MouseDoubleClickEvent_IsBase(bool value) const { kpopupframe_mousedoubleclickevent_isbase = value; }
    inline void setKPopupFrame_MouseMoveEvent_IsBase(bool value) const { kpopupframe_mousemoveevent_isbase = value; }
    inline void setKPopupFrame_WheelEvent_IsBase(bool value) const { kpopupframe_wheelevent_isbase = value; }
    inline void setKPopupFrame_KeyReleaseEvent_IsBase(bool value) const { kpopupframe_keyreleaseevent_isbase = value; }
    inline void setKPopupFrame_FocusInEvent_IsBase(bool value) const { kpopupframe_focusinevent_isbase = value; }
    inline void setKPopupFrame_FocusOutEvent_IsBase(bool value) const { kpopupframe_focusoutevent_isbase = value; }
    inline void setKPopupFrame_EnterEvent_IsBase(bool value) const { kpopupframe_enterevent_isbase = value; }
    inline void setKPopupFrame_LeaveEvent_IsBase(bool value) const { kpopupframe_leaveevent_isbase = value; }
    inline void setKPopupFrame_MoveEvent_IsBase(bool value) const { kpopupframe_moveevent_isbase = value; }
    inline void setKPopupFrame_CloseEvent_IsBase(bool value) const { kpopupframe_closeevent_isbase = value; }
    inline void setKPopupFrame_ContextMenuEvent_IsBase(bool value) const { kpopupframe_contextmenuevent_isbase = value; }
    inline void setKPopupFrame_TabletEvent_IsBase(bool value) const { kpopupframe_tabletevent_isbase = value; }
    inline void setKPopupFrame_ActionEvent_IsBase(bool value) const { kpopupframe_actionevent_isbase = value; }
    inline void setKPopupFrame_DragEnterEvent_IsBase(bool value) const { kpopupframe_dragenterevent_isbase = value; }
    inline void setKPopupFrame_DragMoveEvent_IsBase(bool value) const { kpopupframe_dragmoveevent_isbase = value; }
    inline void setKPopupFrame_DragLeaveEvent_IsBase(bool value) const { kpopupframe_dragleaveevent_isbase = value; }
    inline void setKPopupFrame_DropEvent_IsBase(bool value) const { kpopupframe_dropevent_isbase = value; }
    inline void setKPopupFrame_ShowEvent_IsBase(bool value) const { kpopupframe_showevent_isbase = value; }
    inline void setKPopupFrame_NativeEvent_IsBase(bool value) const { kpopupframe_nativeevent_isbase = value; }
    inline void setKPopupFrame_Metric_IsBase(bool value) const { kpopupframe_metric_isbase = value; }
    inline void setKPopupFrame_InitPainter_IsBase(bool value) const { kpopupframe_initpainter_isbase = value; }
    inline void setKPopupFrame_Redirected_IsBase(bool value) const { kpopupframe_redirected_isbase = value; }
    inline void setKPopupFrame_SharedPainter_IsBase(bool value) const { kpopupframe_sharedpainter_isbase = value; }
    inline void setKPopupFrame_InputMethodEvent_IsBase(bool value) const { kpopupframe_inputmethodevent_isbase = value; }
    inline void setKPopupFrame_InputMethodQuery_IsBase(bool value) const { kpopupframe_inputmethodquery_isbase = value; }
    inline void setKPopupFrame_FocusNextPrevChild_IsBase(bool value) const { kpopupframe_focusnextprevchild_isbase = value; }
    inline void setKPopupFrame_EventFilter_IsBase(bool value) const { kpopupframe_eventfilter_isbase = value; }
    inline void setKPopupFrame_TimerEvent_IsBase(bool value) const { kpopupframe_timerevent_isbase = value; }
    inline void setKPopupFrame_ChildEvent_IsBase(bool value) const { kpopupframe_childevent_isbase = value; }
    inline void setKPopupFrame_CustomEvent_IsBase(bool value) const { kpopupframe_customevent_isbase = value; }
    inline void setKPopupFrame_ConnectNotify_IsBase(bool value) const { kpopupframe_connectnotify_isbase = value; }
    inline void setKPopupFrame_DisconnectNotify_IsBase(bool value) const { kpopupframe_disconnectnotify_isbase = value; }
    inline void setKPopupFrame_DrawFrame_IsBase(bool value) const { kpopupframe_drawframe_isbase = value; }
    inline void setKPopupFrame_UpdateMicroFocus_IsBase(bool value) const { kpopupframe_updatemicrofocus_isbase = value; }
    inline void setKPopupFrame_Create_IsBase(bool value) const { kpopupframe_create_isbase = value; }
    inline void setKPopupFrame_Destroy_IsBase(bool value) const { kpopupframe_destroy_isbase = value; }
    inline void setKPopupFrame_FocusNextChild_IsBase(bool value) const { kpopupframe_focusnextchild_isbase = value; }
    inline void setKPopupFrame_FocusPreviousChild_IsBase(bool value) const { kpopupframe_focuspreviouschild_isbase = value; }
    inline void setKPopupFrame_Sender_IsBase(bool value) const { kpopupframe_sender_isbase = value; }
    inline void setKPopupFrame_SenderSignalIndex_IsBase(bool value) const { kpopupframe_sendersignalindex_isbase = value; }
    inline void setKPopupFrame_Receivers_IsBase(bool value) const { kpopupframe_receivers_isbase = value; }
    inline void setKPopupFrame_IsSignalConnected_IsBase(bool value) const { kpopupframe_issignalconnected_isbase = value; }
    inline void setKPopupFrame_GetDecodedMetricF_IsBase(bool value) const { kpopupframe_getdecodedmetricf_isbase = value; }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (kpopupframe_metacall_isbase) {
            kpopupframe_metacall_isbase = false;
            return KPopupFrame::qt_metacall(param1, param2, param3);
        } else if (kpopupframe_metacall_callback != nullptr) {
            int cbval1 = static_cast<int>(param1);
            int cbval2 = param2;
            void** cbval3 = param3;

            int callback_ret = kpopupframe_metacall_callback(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        } else {
            return KPopupFrame::qt_metacall(param1, param2, param3);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void keyPressEvent(QKeyEvent* e) override {
        if (kpopupframe_keypressevent_isbase) {
            kpopupframe_keypressevent_isbase = false;
            KPopupFrame::keyPressEvent(e);
        } else if (kpopupframe_keypressevent_callback != nullptr) {
            QKeyEvent* cbval1 = e;

            kpopupframe_keypressevent_callback(this, cbval1);
        } else {
            KPopupFrame::keyPressEvent(e);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void hideEvent(QHideEvent* e) override {
        if (kpopupframe_hideevent_isbase) {
            kpopupframe_hideevent_isbase = false;
            KPopupFrame::hideEvent(e);
        } else if (kpopupframe_hideevent_callback != nullptr) {
            QHideEvent* cbval1 = e;

            kpopupframe_hideevent_callback(this, cbval1);
        } else {
            KPopupFrame::hideEvent(e);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void resizeEvent(QResizeEvent* resize) override {
        if (kpopupframe_resizeevent_isbase) {
            kpopupframe_resizeevent_isbase = false;
            KPopupFrame::resizeEvent(resize);
        } else if (kpopupframe_resizeevent_callback != nullptr) {
            QResizeEvent* cbval1 = resize;

            kpopupframe_resizeevent_callback(this, cbval1);
        } else {
            KPopupFrame::resizeEvent(resize);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QSize sizeHint() const override {
        if (kpopupframe_sizehint_isbase) {
            kpopupframe_sizehint_isbase = false;
            return KPopupFrame::sizeHint();
        } else if (kpopupframe_sizehint_callback != nullptr) {
            QSize* callback_ret = kpopupframe_sizehint_callback();
            return *callback_ret;
        } else {
            return KPopupFrame::sizeHint();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* e) override {
        if (kpopupframe_event_isbase) {
            kpopupframe_event_isbase = false;
            return KPopupFrame::event(e);
        } else if (kpopupframe_event_callback != nullptr) {
            QEvent* cbval1 = e;

            bool callback_ret = kpopupframe_event_callback(this, cbval1);
            return callback_ret;
        } else {
            return KPopupFrame::event(e);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void paintEvent(QPaintEvent* param1) override {
        if (kpopupframe_paintevent_isbase) {
            kpopupframe_paintevent_isbase = false;
            KPopupFrame::paintEvent(param1);
        } else if (kpopupframe_paintevent_callback != nullptr) {
            QPaintEvent* cbval1 = param1;

            kpopupframe_paintevent_callback(this, cbval1);
        } else {
            KPopupFrame::paintEvent(param1);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void changeEvent(QEvent* param1) override {
        if (kpopupframe_changeevent_isbase) {
            kpopupframe_changeevent_isbase = false;
            KPopupFrame::changeEvent(param1);
        } else if (kpopupframe_changeevent_callback != nullptr) {
            QEvent* cbval1 = param1;

            kpopupframe_changeevent_callback(this, cbval1);
        } else {
            KPopupFrame::changeEvent(param1);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void initStyleOption(QStyleOptionFrame* option) const override {
        if (kpopupframe_initstyleoption_isbase) {
            kpopupframe_initstyleoption_isbase = false;
            KPopupFrame::initStyleOption(option);
        } else if (kpopupframe_initstyleoption_callback != nullptr) {
            QStyleOptionFrame* cbval1 = option;

            kpopupframe_initstyleoption_callback(this, cbval1);
        } else {
            KPopupFrame::initStyleOption(option);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual int devType() const override {
        if (kpopupframe_devtype_isbase) {
            kpopupframe_devtype_isbase = false;
            return KPopupFrame::devType();
        } else if (kpopupframe_devtype_callback != nullptr) {
            int callback_ret = kpopupframe_devtype_callback();
            return static_cast<int>(callback_ret);
        } else {
            return KPopupFrame::devType();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void setVisible(bool visible) override {
        if (kpopupframe_setvisible_isbase) {
            kpopupframe_setvisible_isbase = false;
            KPopupFrame::setVisible(visible);
        } else if (kpopupframe_setvisible_callback != nullptr) {
            bool cbval1 = visible;

            kpopupframe_setvisible_callback(this, cbval1);
        } else {
            KPopupFrame::setVisible(visible);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QSize minimumSizeHint() const override {
        if (kpopupframe_minimumsizehint_isbase) {
            kpopupframe_minimumsizehint_isbase = false;
            return KPopupFrame::minimumSizeHint();
        } else if (kpopupframe_minimumsizehint_callback != nullptr) {
            QSize* callback_ret = kpopupframe_minimumsizehint_callback();
            return *callback_ret;
        } else {
            return KPopupFrame::minimumSizeHint();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual int heightForWidth(int param1) const override {
        if (kpopupframe_heightforwidth_isbase) {
            kpopupframe_heightforwidth_isbase = false;
            return KPopupFrame::heightForWidth(param1);
        } else if (kpopupframe_heightforwidth_callback != nullptr) {
            int cbval1 = param1;

            int callback_ret = kpopupframe_heightforwidth_callback(this, cbval1);
            return static_cast<int>(callback_ret);
        } else {
            return KPopupFrame::heightForWidth(param1);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool hasHeightForWidth() const override {
        if (kpopupframe_hasheightforwidth_isbase) {
            kpopupframe_hasheightforwidth_isbase = false;
            return KPopupFrame::hasHeightForWidth();
        } else if (kpopupframe_hasheightforwidth_callback != nullptr) {
            bool callback_ret = kpopupframe_hasheightforwidth_callback();
            return callback_ret;
        } else {
            return KPopupFrame::hasHeightForWidth();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QPaintEngine* paintEngine() const override {
        if (kpopupframe_paintengine_isbase) {
            kpopupframe_paintengine_isbase = false;
            return KPopupFrame::paintEngine();
        } else if (kpopupframe_paintengine_callback != nullptr) {
            QPaintEngine* callback_ret = kpopupframe_paintengine_callback();
            return callback_ret;
        } else {
            return KPopupFrame::paintEngine();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void mousePressEvent(QMouseEvent* event) override {
        if (kpopupframe_mousepressevent_isbase) {
            kpopupframe_mousepressevent_isbase = false;
            KPopupFrame::mousePressEvent(event);
        } else if (kpopupframe_mousepressevent_callback != nullptr) {
            QMouseEvent* cbval1 = event;

            kpopupframe_mousepressevent_callback(this, cbval1);
        } else {
            KPopupFrame::mousePressEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseReleaseEvent(QMouseEvent* event) override {
        if (kpopupframe_mousereleaseevent_isbase) {
            kpopupframe_mousereleaseevent_isbase = false;
            KPopupFrame::mouseReleaseEvent(event);
        } else if (kpopupframe_mousereleaseevent_callback != nullptr) {
            QMouseEvent* cbval1 = event;

            kpopupframe_mousereleaseevent_callback(this, cbval1);
        } else {
            KPopupFrame::mouseReleaseEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseDoubleClickEvent(QMouseEvent* event) override {
        if (kpopupframe_mousedoubleclickevent_isbase) {
            kpopupframe_mousedoubleclickevent_isbase = false;
            KPopupFrame::mouseDoubleClickEvent(event);
        } else if (kpopupframe_mousedoubleclickevent_callback != nullptr) {
            QMouseEvent* cbval1 = event;

            kpopupframe_mousedoubleclickevent_callback(this, cbval1);
        } else {
            KPopupFrame::mouseDoubleClickEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseMoveEvent(QMouseEvent* event) override {
        if (kpopupframe_mousemoveevent_isbase) {
            kpopupframe_mousemoveevent_isbase = false;
            KPopupFrame::mouseMoveEvent(event);
        } else if (kpopupframe_mousemoveevent_callback != nullptr) {
            QMouseEvent* cbval1 = event;

            kpopupframe_mousemoveevent_callback(this, cbval1);
        } else {
            KPopupFrame::mouseMoveEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void wheelEvent(QWheelEvent* event) override {
        if (kpopupframe_wheelevent_isbase) {
            kpopupframe_wheelevent_isbase = false;
            KPopupFrame::wheelEvent(event);
        } else if (kpopupframe_wheelevent_callback != nullptr) {
            QWheelEvent* cbval1 = event;

            kpopupframe_wheelevent_callback(this, cbval1);
        } else {
            KPopupFrame::wheelEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void keyReleaseEvent(QKeyEvent* event) override {
        if (kpopupframe_keyreleaseevent_isbase) {
            kpopupframe_keyreleaseevent_isbase = false;
            KPopupFrame::keyReleaseEvent(event);
        } else if (kpopupframe_keyreleaseevent_callback != nullptr) {
            QKeyEvent* cbval1 = event;

            kpopupframe_keyreleaseevent_callback(this, cbval1);
        } else {
            KPopupFrame::keyReleaseEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void focusInEvent(QFocusEvent* event) override {
        if (kpopupframe_focusinevent_isbase) {
            kpopupframe_focusinevent_isbase = false;
            KPopupFrame::focusInEvent(event);
        } else if (kpopupframe_focusinevent_callback != nullptr) {
            QFocusEvent* cbval1 = event;

            kpopupframe_focusinevent_callback(this, cbval1);
        } else {
            KPopupFrame::focusInEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void focusOutEvent(QFocusEvent* event) override {
        if (kpopupframe_focusoutevent_isbase) {
            kpopupframe_focusoutevent_isbase = false;
            KPopupFrame::focusOutEvent(event);
        } else if (kpopupframe_focusoutevent_callback != nullptr) {
            QFocusEvent* cbval1 = event;

            kpopupframe_focusoutevent_callback(this, cbval1);
        } else {
            KPopupFrame::focusOutEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void enterEvent(QEnterEvent* event) override {
        if (kpopupframe_enterevent_isbase) {
            kpopupframe_enterevent_isbase = false;
            KPopupFrame::enterEvent(event);
        } else if (kpopupframe_enterevent_callback != nullptr) {
            QEnterEvent* cbval1 = event;

            kpopupframe_enterevent_callback(this, cbval1);
        } else {
            KPopupFrame::enterEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void leaveEvent(QEvent* event) override {
        if (kpopupframe_leaveevent_isbase) {
            kpopupframe_leaveevent_isbase = false;
            KPopupFrame::leaveEvent(event);
        } else if (kpopupframe_leaveevent_callback != nullptr) {
            QEvent* cbval1 = event;

            kpopupframe_leaveevent_callback(this, cbval1);
        } else {
            KPopupFrame::leaveEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void moveEvent(QMoveEvent* event) override {
        if (kpopupframe_moveevent_isbase) {
            kpopupframe_moveevent_isbase = false;
            KPopupFrame::moveEvent(event);
        } else if (kpopupframe_moveevent_callback != nullptr) {
            QMoveEvent* cbval1 = event;

            kpopupframe_moveevent_callback(this, cbval1);
        } else {
            KPopupFrame::moveEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void closeEvent(QCloseEvent* event) override {
        if (kpopupframe_closeevent_isbase) {
            kpopupframe_closeevent_isbase = false;
            KPopupFrame::closeEvent(event);
        } else if (kpopupframe_closeevent_callback != nullptr) {
            QCloseEvent* cbval1 = event;

            kpopupframe_closeevent_callback(this, cbval1);
        } else {
            KPopupFrame::closeEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void contextMenuEvent(QContextMenuEvent* event) override {
        if (kpopupframe_contextmenuevent_isbase) {
            kpopupframe_contextmenuevent_isbase = false;
            KPopupFrame::contextMenuEvent(event);
        } else if (kpopupframe_contextmenuevent_callback != nullptr) {
            QContextMenuEvent* cbval1 = event;

            kpopupframe_contextmenuevent_callback(this, cbval1);
        } else {
            KPopupFrame::contextMenuEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void tabletEvent(QTabletEvent* event) override {
        if (kpopupframe_tabletevent_isbase) {
            kpopupframe_tabletevent_isbase = false;
            KPopupFrame::tabletEvent(event);
        } else if (kpopupframe_tabletevent_callback != nullptr) {
            QTabletEvent* cbval1 = event;

            kpopupframe_tabletevent_callback(this, cbval1);
        } else {
            KPopupFrame::tabletEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void actionEvent(QActionEvent* event) override {
        if (kpopupframe_actionevent_isbase) {
            kpopupframe_actionevent_isbase = false;
            KPopupFrame::actionEvent(event);
        } else if (kpopupframe_actionevent_callback != nullptr) {
            QActionEvent* cbval1 = event;

            kpopupframe_actionevent_callback(this, cbval1);
        } else {
            KPopupFrame::actionEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragEnterEvent(QDragEnterEvent* event) override {
        if (kpopupframe_dragenterevent_isbase) {
            kpopupframe_dragenterevent_isbase = false;
            KPopupFrame::dragEnterEvent(event);
        } else if (kpopupframe_dragenterevent_callback != nullptr) {
            QDragEnterEvent* cbval1 = event;

            kpopupframe_dragenterevent_callback(this, cbval1);
        } else {
            KPopupFrame::dragEnterEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragMoveEvent(QDragMoveEvent* event) override {
        if (kpopupframe_dragmoveevent_isbase) {
            kpopupframe_dragmoveevent_isbase = false;
            KPopupFrame::dragMoveEvent(event);
        } else if (kpopupframe_dragmoveevent_callback != nullptr) {
            QDragMoveEvent* cbval1 = event;

            kpopupframe_dragmoveevent_callback(this, cbval1);
        } else {
            KPopupFrame::dragMoveEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragLeaveEvent(QDragLeaveEvent* event) override {
        if (kpopupframe_dragleaveevent_isbase) {
            kpopupframe_dragleaveevent_isbase = false;
            KPopupFrame::dragLeaveEvent(event);
        } else if (kpopupframe_dragleaveevent_callback != nullptr) {
            QDragLeaveEvent* cbval1 = event;

            kpopupframe_dragleaveevent_callback(this, cbval1);
        } else {
            KPopupFrame::dragLeaveEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void dropEvent(QDropEvent* event) override {
        if (kpopupframe_dropevent_isbase) {
            kpopupframe_dropevent_isbase = false;
            KPopupFrame::dropEvent(event);
        } else if (kpopupframe_dropevent_callback != nullptr) {
            QDropEvent* cbval1 = event;

            kpopupframe_dropevent_callback(this, cbval1);
        } else {
            KPopupFrame::dropEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void showEvent(QShowEvent* event) override {
        if (kpopupframe_showevent_isbase) {
            kpopupframe_showevent_isbase = false;
            KPopupFrame::showEvent(event);
        } else if (kpopupframe_showevent_callback != nullptr) {
            QShowEvent* cbval1 = event;

            kpopupframe_showevent_callback(this, cbval1);
        } else {
            KPopupFrame::showEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool nativeEvent(const QByteArray& eventType, void* message, qintptr* result) override {
        if (kpopupframe_nativeevent_isbase) {
            kpopupframe_nativeevent_isbase = false;
            return KPopupFrame::nativeEvent(eventType, message, result);
        } else if (kpopupframe_nativeevent_callback != nullptr) {
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

            bool callback_ret = kpopupframe_nativeevent_callback(this, cbval1, cbval2, cbval3);
            return callback_ret;
        } else {
            return KPopupFrame::nativeEvent(eventType, message, result);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual int metric(QPaintDevice::PaintDeviceMetric param1) const override {
        if (kpopupframe_metric_isbase) {
            kpopupframe_metric_isbase = false;
            return KPopupFrame::metric(param1);
        } else if (kpopupframe_metric_callback != nullptr) {
            int cbval1 = static_cast<int>(param1);

            int callback_ret = kpopupframe_metric_callback(this, cbval1);
            return static_cast<int>(callback_ret);
        } else {
            return KPopupFrame::metric(param1);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void initPainter(QPainter* painter) const override {
        if (kpopupframe_initpainter_isbase) {
            kpopupframe_initpainter_isbase = false;
            KPopupFrame::initPainter(painter);
        } else if (kpopupframe_initpainter_callback != nullptr) {
            QPainter* cbval1 = painter;

            kpopupframe_initpainter_callback(this, cbval1);
        } else {
            KPopupFrame::initPainter(painter);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QPaintDevice* redirected(QPoint* offset) const override {
        if (kpopupframe_redirected_isbase) {
            kpopupframe_redirected_isbase = false;
            return KPopupFrame::redirected(offset);
        } else if (kpopupframe_redirected_callback != nullptr) {
            QPoint* cbval1 = offset;

            QPaintDevice* callback_ret = kpopupframe_redirected_callback(this, cbval1);
            return callback_ret;
        } else {
            return KPopupFrame::redirected(offset);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QPainter* sharedPainter() const override {
        if (kpopupframe_sharedpainter_isbase) {
            kpopupframe_sharedpainter_isbase = false;
            return KPopupFrame::sharedPainter();
        } else if (kpopupframe_sharedpainter_callback != nullptr) {
            QPainter* callback_ret = kpopupframe_sharedpainter_callback();
            return callback_ret;
        } else {
            return KPopupFrame::sharedPainter();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void inputMethodEvent(QInputMethodEvent* param1) override {
        if (kpopupframe_inputmethodevent_isbase) {
            kpopupframe_inputmethodevent_isbase = false;
            KPopupFrame::inputMethodEvent(param1);
        } else if (kpopupframe_inputmethodevent_callback != nullptr) {
            QInputMethodEvent* cbval1 = param1;

            kpopupframe_inputmethodevent_callback(this, cbval1);
        } else {
            KPopupFrame::inputMethodEvent(param1);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QVariant inputMethodQuery(Qt::InputMethodQuery param1) const override {
        if (kpopupframe_inputmethodquery_isbase) {
            kpopupframe_inputmethodquery_isbase = false;
            return KPopupFrame::inputMethodQuery(param1);
        } else if (kpopupframe_inputmethodquery_callback != nullptr) {
            int cbval1 = static_cast<int>(param1);

            QVariant* callback_ret = kpopupframe_inputmethodquery_callback(this, cbval1);
            return *callback_ret;
        } else {
            return KPopupFrame::inputMethodQuery(param1);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool focusNextPrevChild(bool next) override {
        if (kpopupframe_focusnextprevchild_isbase) {
            kpopupframe_focusnextprevchild_isbase = false;
            return KPopupFrame::focusNextPrevChild(next);
        } else if (kpopupframe_focusnextprevchild_callback != nullptr) {
            bool cbval1 = next;

            bool callback_ret = kpopupframe_focusnextprevchild_callback(this, cbval1);
            return callback_ret;
        } else {
            return KPopupFrame::focusNextPrevChild(next);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* watched, QEvent* event) override {
        if (kpopupframe_eventfilter_isbase) {
            kpopupframe_eventfilter_isbase = false;
            return KPopupFrame::eventFilter(watched, event);
        } else if (kpopupframe_eventfilter_callback != nullptr) {
            QObject* cbval1 = watched;
            QEvent* cbval2 = event;

            bool callback_ret = kpopupframe_eventfilter_callback(this, cbval1, cbval2);
            return callback_ret;
        } else {
            return KPopupFrame::eventFilter(watched, event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (kpopupframe_timerevent_isbase) {
            kpopupframe_timerevent_isbase = false;
            KPopupFrame::timerEvent(event);
        } else if (kpopupframe_timerevent_callback != nullptr) {
            QTimerEvent* cbval1 = event;

            kpopupframe_timerevent_callback(this, cbval1);
        } else {
            KPopupFrame::timerEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (kpopupframe_childevent_isbase) {
            kpopupframe_childevent_isbase = false;
            KPopupFrame::childEvent(event);
        } else if (kpopupframe_childevent_callback != nullptr) {
            QChildEvent* cbval1 = event;

            kpopupframe_childevent_callback(this, cbval1);
        } else {
            KPopupFrame::childEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (kpopupframe_customevent_isbase) {
            kpopupframe_customevent_isbase = false;
            KPopupFrame::customEvent(event);
        } else if (kpopupframe_customevent_callback != nullptr) {
            QEvent* cbval1 = event;

            kpopupframe_customevent_callback(this, cbval1);
        } else {
            KPopupFrame::customEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (kpopupframe_connectnotify_isbase) {
            kpopupframe_connectnotify_isbase = false;
            KPopupFrame::connectNotify(signal);
        } else if (kpopupframe_connectnotify_callback != nullptr) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            kpopupframe_connectnotify_callback(this, cbval1);
        } else {
            KPopupFrame::connectNotify(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (kpopupframe_disconnectnotify_isbase) {
            kpopupframe_disconnectnotify_isbase = false;
            KPopupFrame::disconnectNotify(signal);
        } else if (kpopupframe_disconnectnotify_callback != nullptr) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            kpopupframe_disconnectnotify_callback(this, cbval1);
        } else {
            KPopupFrame::disconnectNotify(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    void drawFrame(QPainter* param1) {
        if (kpopupframe_drawframe_isbase) {
            kpopupframe_drawframe_isbase = false;
            KPopupFrame::drawFrame(param1);
        } else if (kpopupframe_drawframe_callback != nullptr) {
            QPainter* cbval1 = param1;

            kpopupframe_drawframe_callback(this, cbval1);
        } else {
            KPopupFrame::drawFrame(param1);
        }
    }

    // Virtual method for C ABI access and custom callback
    void updateMicroFocus() {
        if (kpopupframe_updatemicrofocus_isbase) {
            kpopupframe_updatemicrofocus_isbase = false;
            KPopupFrame::updateMicroFocus();
        } else if (kpopupframe_updatemicrofocus_callback != nullptr) {
            kpopupframe_updatemicrofocus_callback();
        } else {
            KPopupFrame::updateMicroFocus();
        }
    }

    // Virtual method for C ABI access and custom callback
    void create() {
        if (kpopupframe_create_isbase) {
            kpopupframe_create_isbase = false;
            KPopupFrame::create();
        } else if (kpopupframe_create_callback != nullptr) {
            kpopupframe_create_callback();
        } else {
            KPopupFrame::create();
        }
    }

    // Virtual method for C ABI access and custom callback
    void destroy() {
        if (kpopupframe_destroy_isbase) {
            kpopupframe_destroy_isbase = false;
            KPopupFrame::destroy();
        } else if (kpopupframe_destroy_callback != nullptr) {
            kpopupframe_destroy_callback();
        } else {
            KPopupFrame::destroy();
        }
    }

    // Virtual method for C ABI access and custom callback
    bool focusNextChild() {
        if (kpopupframe_focusnextchild_isbase) {
            kpopupframe_focusnextchild_isbase = false;
            return KPopupFrame::focusNextChild();
        } else if (kpopupframe_focusnextchild_callback != nullptr) {
            bool callback_ret = kpopupframe_focusnextchild_callback();
            return callback_ret;
        } else {
            return KPopupFrame::focusNextChild();
        }
    }

    // Virtual method for C ABI access and custom callback
    bool focusPreviousChild() {
        if (kpopupframe_focuspreviouschild_isbase) {
            kpopupframe_focuspreviouschild_isbase = false;
            return KPopupFrame::focusPreviousChild();
        } else if (kpopupframe_focuspreviouschild_callback != nullptr) {
            bool callback_ret = kpopupframe_focuspreviouschild_callback();
            return callback_ret;
        } else {
            return KPopupFrame::focusPreviousChild();
        }
    }

    // Virtual method for C ABI access and custom callback
    QObject* sender() const {
        if (kpopupframe_sender_isbase) {
            kpopupframe_sender_isbase = false;
            return KPopupFrame::sender();
        } else if (kpopupframe_sender_callback != nullptr) {
            QObject* callback_ret = kpopupframe_sender_callback();
            return callback_ret;
        } else {
            return KPopupFrame::sender();
        }
    }

    // Virtual method for C ABI access and custom callback
    int senderSignalIndex() const {
        if (kpopupframe_sendersignalindex_isbase) {
            kpopupframe_sendersignalindex_isbase = false;
            return KPopupFrame::senderSignalIndex();
        } else if (kpopupframe_sendersignalindex_callback != nullptr) {
            int callback_ret = kpopupframe_sendersignalindex_callback();
            return static_cast<int>(callback_ret);
        } else {
            return KPopupFrame::senderSignalIndex();
        }
    }

    // Virtual method for C ABI access and custom callback
    int receivers(const char* signal) const {
        if (kpopupframe_receivers_isbase) {
            kpopupframe_receivers_isbase = false;
            return KPopupFrame::receivers(signal);
        } else if (kpopupframe_receivers_callback != nullptr) {
            const char* cbval1 = (const char*)signal;

            int callback_ret = kpopupframe_receivers_callback(this, cbval1);
            return static_cast<int>(callback_ret);
        } else {
            return KPopupFrame::receivers(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    bool isSignalConnected(const QMetaMethod& signal) const {
        if (kpopupframe_issignalconnected_isbase) {
            kpopupframe_issignalconnected_isbase = false;
            return KPopupFrame::isSignalConnected(signal);
        } else if (kpopupframe_issignalconnected_callback != nullptr) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            bool callback_ret = kpopupframe_issignalconnected_callback(this, cbval1);
            return callback_ret;
        } else {
            return KPopupFrame::isSignalConnected(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    double getDecodedMetricF(QPaintDevice::PaintDeviceMetric metricA, QPaintDevice::PaintDeviceMetric metricB) const {
        if (kpopupframe_getdecodedmetricf_isbase) {
            kpopupframe_getdecodedmetricf_isbase = false;
            return KPopupFrame::getDecodedMetricF(metricA, metricB);
        } else if (kpopupframe_getdecodedmetricf_callback != nullptr) {
            int cbval1 = static_cast<int>(metricA);
            int cbval2 = static_cast<int>(metricB);

            double callback_ret = kpopupframe_getdecodedmetricf_callback(this, cbval1, cbval2);
            return static_cast<double>(callback_ret);
        } else {
            return KPopupFrame::getDecodedMetricF(metricA, metricB);
        }
    }

    // Friend functions
    friend void KPopupFrame_KeyPressEvent(KPopupFrame* self, QKeyEvent* e);
    friend void KPopupFrame_QBaseKeyPressEvent(KPopupFrame* self, QKeyEvent* e);
    friend void KPopupFrame_HideEvent(KPopupFrame* self, QHideEvent* e);
    friend void KPopupFrame_QBaseHideEvent(KPopupFrame* self, QHideEvent* e);
    friend bool KPopupFrame_Event(KPopupFrame* self, QEvent* e);
    friend bool KPopupFrame_QBaseEvent(KPopupFrame* self, QEvent* e);
    friend void KPopupFrame_PaintEvent(KPopupFrame* self, QPaintEvent* param1);
    friend void KPopupFrame_QBasePaintEvent(KPopupFrame* self, QPaintEvent* param1);
    friend void KPopupFrame_ChangeEvent(KPopupFrame* self, QEvent* param1);
    friend void KPopupFrame_QBaseChangeEvent(KPopupFrame* self, QEvent* param1);
    friend void KPopupFrame_InitStyleOption(const KPopupFrame* self, QStyleOptionFrame* option);
    friend void KPopupFrame_QBaseInitStyleOption(const KPopupFrame* self, QStyleOptionFrame* option);
    friend void KPopupFrame_MousePressEvent(KPopupFrame* self, QMouseEvent* event);
    friend void KPopupFrame_QBaseMousePressEvent(KPopupFrame* self, QMouseEvent* event);
    friend void KPopupFrame_MouseReleaseEvent(KPopupFrame* self, QMouseEvent* event);
    friend void KPopupFrame_QBaseMouseReleaseEvent(KPopupFrame* self, QMouseEvent* event);
    friend void KPopupFrame_MouseDoubleClickEvent(KPopupFrame* self, QMouseEvent* event);
    friend void KPopupFrame_QBaseMouseDoubleClickEvent(KPopupFrame* self, QMouseEvent* event);
    friend void KPopupFrame_MouseMoveEvent(KPopupFrame* self, QMouseEvent* event);
    friend void KPopupFrame_QBaseMouseMoveEvent(KPopupFrame* self, QMouseEvent* event);
    friend void KPopupFrame_WheelEvent(KPopupFrame* self, QWheelEvent* event);
    friend void KPopupFrame_QBaseWheelEvent(KPopupFrame* self, QWheelEvent* event);
    friend void KPopupFrame_KeyReleaseEvent(KPopupFrame* self, QKeyEvent* event);
    friend void KPopupFrame_QBaseKeyReleaseEvent(KPopupFrame* self, QKeyEvent* event);
    friend void KPopupFrame_FocusInEvent(KPopupFrame* self, QFocusEvent* event);
    friend void KPopupFrame_QBaseFocusInEvent(KPopupFrame* self, QFocusEvent* event);
    friend void KPopupFrame_FocusOutEvent(KPopupFrame* self, QFocusEvent* event);
    friend void KPopupFrame_QBaseFocusOutEvent(KPopupFrame* self, QFocusEvent* event);
    friend void KPopupFrame_EnterEvent(KPopupFrame* self, QEnterEvent* event);
    friend void KPopupFrame_QBaseEnterEvent(KPopupFrame* self, QEnterEvent* event);
    friend void KPopupFrame_LeaveEvent(KPopupFrame* self, QEvent* event);
    friend void KPopupFrame_QBaseLeaveEvent(KPopupFrame* self, QEvent* event);
    friend void KPopupFrame_MoveEvent(KPopupFrame* self, QMoveEvent* event);
    friend void KPopupFrame_QBaseMoveEvent(KPopupFrame* self, QMoveEvent* event);
    friend void KPopupFrame_CloseEvent(KPopupFrame* self, QCloseEvent* event);
    friend void KPopupFrame_QBaseCloseEvent(KPopupFrame* self, QCloseEvent* event);
    friend void KPopupFrame_ContextMenuEvent(KPopupFrame* self, QContextMenuEvent* event);
    friend void KPopupFrame_QBaseContextMenuEvent(KPopupFrame* self, QContextMenuEvent* event);
    friend void KPopupFrame_TabletEvent(KPopupFrame* self, QTabletEvent* event);
    friend void KPopupFrame_QBaseTabletEvent(KPopupFrame* self, QTabletEvent* event);
    friend void KPopupFrame_ActionEvent(KPopupFrame* self, QActionEvent* event);
    friend void KPopupFrame_QBaseActionEvent(KPopupFrame* self, QActionEvent* event);
    friend void KPopupFrame_DragEnterEvent(KPopupFrame* self, QDragEnterEvent* event);
    friend void KPopupFrame_QBaseDragEnterEvent(KPopupFrame* self, QDragEnterEvent* event);
    friend void KPopupFrame_DragMoveEvent(KPopupFrame* self, QDragMoveEvent* event);
    friend void KPopupFrame_QBaseDragMoveEvent(KPopupFrame* self, QDragMoveEvent* event);
    friend void KPopupFrame_DragLeaveEvent(KPopupFrame* self, QDragLeaveEvent* event);
    friend void KPopupFrame_QBaseDragLeaveEvent(KPopupFrame* self, QDragLeaveEvent* event);
    friend void KPopupFrame_DropEvent(KPopupFrame* self, QDropEvent* event);
    friend void KPopupFrame_QBaseDropEvent(KPopupFrame* self, QDropEvent* event);
    friend void KPopupFrame_ShowEvent(KPopupFrame* self, QShowEvent* event);
    friend void KPopupFrame_QBaseShowEvent(KPopupFrame* self, QShowEvent* event);
    friend bool KPopupFrame_NativeEvent(KPopupFrame* self, const libqt_string eventType, void* message, intptr_t* result);
    friend bool KPopupFrame_QBaseNativeEvent(KPopupFrame* self, const libqt_string eventType, void* message, intptr_t* result);
    friend int KPopupFrame_Metric(const KPopupFrame* self, int param1);
    friend int KPopupFrame_QBaseMetric(const KPopupFrame* self, int param1);
    friend void KPopupFrame_InitPainter(const KPopupFrame* self, QPainter* painter);
    friend void KPopupFrame_QBaseInitPainter(const KPopupFrame* self, QPainter* painter);
    friend QPaintDevice* KPopupFrame_Redirected(const KPopupFrame* self, QPoint* offset);
    friend QPaintDevice* KPopupFrame_QBaseRedirected(const KPopupFrame* self, QPoint* offset);
    friend QPainter* KPopupFrame_SharedPainter(const KPopupFrame* self);
    friend QPainter* KPopupFrame_QBaseSharedPainter(const KPopupFrame* self);
    friend void KPopupFrame_InputMethodEvent(KPopupFrame* self, QInputMethodEvent* param1);
    friend void KPopupFrame_QBaseInputMethodEvent(KPopupFrame* self, QInputMethodEvent* param1);
    friend bool KPopupFrame_FocusNextPrevChild(KPopupFrame* self, bool next);
    friend bool KPopupFrame_QBaseFocusNextPrevChild(KPopupFrame* self, bool next);
    friend void KPopupFrame_TimerEvent(KPopupFrame* self, QTimerEvent* event);
    friend void KPopupFrame_QBaseTimerEvent(KPopupFrame* self, QTimerEvent* event);
    friend void KPopupFrame_ChildEvent(KPopupFrame* self, QChildEvent* event);
    friend void KPopupFrame_QBaseChildEvent(KPopupFrame* self, QChildEvent* event);
    friend void KPopupFrame_CustomEvent(KPopupFrame* self, QEvent* event);
    friend void KPopupFrame_QBaseCustomEvent(KPopupFrame* self, QEvent* event);
    friend void KPopupFrame_ConnectNotify(KPopupFrame* self, const QMetaMethod* signal);
    friend void KPopupFrame_QBaseConnectNotify(KPopupFrame* self, const QMetaMethod* signal);
    friend void KPopupFrame_DisconnectNotify(KPopupFrame* self, const QMetaMethod* signal);
    friend void KPopupFrame_QBaseDisconnectNotify(KPopupFrame* self, const QMetaMethod* signal);
    friend void KPopupFrame_DrawFrame(KPopupFrame* self, QPainter* param1);
    friend void KPopupFrame_QBaseDrawFrame(KPopupFrame* self, QPainter* param1);
    friend void KPopupFrame_UpdateMicroFocus(KPopupFrame* self);
    friend void KPopupFrame_QBaseUpdateMicroFocus(KPopupFrame* self);
    friend void KPopupFrame_Create(KPopupFrame* self);
    friend void KPopupFrame_QBaseCreate(KPopupFrame* self);
    friend void KPopupFrame_Destroy(KPopupFrame* self);
    friend void KPopupFrame_QBaseDestroy(KPopupFrame* self);
    friend bool KPopupFrame_FocusNextChild(KPopupFrame* self);
    friend bool KPopupFrame_QBaseFocusNextChild(KPopupFrame* self);
    friend bool KPopupFrame_FocusPreviousChild(KPopupFrame* self);
    friend bool KPopupFrame_QBaseFocusPreviousChild(KPopupFrame* self);
    friend QObject* KPopupFrame_Sender(const KPopupFrame* self);
    friend QObject* KPopupFrame_QBaseSender(const KPopupFrame* self);
    friend int KPopupFrame_SenderSignalIndex(const KPopupFrame* self);
    friend int KPopupFrame_QBaseSenderSignalIndex(const KPopupFrame* self);
    friend int KPopupFrame_Receivers(const KPopupFrame* self, const char* signal);
    friend int KPopupFrame_QBaseReceivers(const KPopupFrame* self, const char* signal);
    friend bool KPopupFrame_IsSignalConnected(const KPopupFrame* self, const QMetaMethod* signal);
    friend bool KPopupFrame_QBaseIsSignalConnected(const KPopupFrame* self, const QMetaMethod* signal);
    friend double KPopupFrame_GetDecodedMetricF(const KPopupFrame* self, int metricA, int metricB);
    friend double KPopupFrame_QBaseGetDecodedMetricF(const KPopupFrame* self, int metricA, int metricB);
};

#endif
