#pragma once
#ifndef SRC_EXTRAS_SONNETC_LIBVIRTUALCONFIGVIEW_H
#define SRC_EXTRAS_SONNETC_LIBVIRTUALCONFIGVIEW_H

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

// This class is a subclass of Sonnet::ConfigView so that we can call protected methods
class VirtualSonnetConfigView final : public Sonnet::ConfigView {

  public:
    // Virtual class boolean flag
    bool isVirtualSonnetConfigView = true;

    // Virtual class public types (including callbacks)
    using Sonnet__ConfigView_Metacall_Callback = int (*)(Sonnet__ConfigView*, int, int, void**);
    using Sonnet__ConfigView_DevType_Callback = int (*)();
    using Sonnet__ConfigView_SetVisible_Callback = void (*)(Sonnet__ConfigView*, bool);
    using Sonnet__ConfigView_SizeHint_Callback = QSize* (*)();
    using Sonnet__ConfigView_MinimumSizeHint_Callback = QSize* (*)();
    using Sonnet__ConfigView_HeightForWidth_Callback = int (*)(const Sonnet__ConfigView*, int);
    using Sonnet__ConfigView_HasHeightForWidth_Callback = bool (*)();
    using Sonnet__ConfigView_PaintEngine_Callback = QPaintEngine* (*)();
    using Sonnet__ConfigView_Event_Callback = bool (*)(Sonnet__ConfigView*, QEvent*);
    using Sonnet__ConfigView_MousePressEvent_Callback = void (*)(Sonnet__ConfigView*, QMouseEvent*);
    using Sonnet__ConfigView_MouseReleaseEvent_Callback = void (*)(Sonnet__ConfigView*, QMouseEvent*);
    using Sonnet__ConfigView_MouseDoubleClickEvent_Callback = void (*)(Sonnet__ConfigView*, QMouseEvent*);
    using Sonnet__ConfigView_MouseMoveEvent_Callback = void (*)(Sonnet__ConfigView*, QMouseEvent*);
    using Sonnet__ConfigView_WheelEvent_Callback = void (*)(Sonnet__ConfigView*, QWheelEvent*);
    using Sonnet__ConfigView_KeyPressEvent_Callback = void (*)(Sonnet__ConfigView*, QKeyEvent*);
    using Sonnet__ConfigView_KeyReleaseEvent_Callback = void (*)(Sonnet__ConfigView*, QKeyEvent*);
    using Sonnet__ConfigView_FocusInEvent_Callback = void (*)(Sonnet__ConfigView*, QFocusEvent*);
    using Sonnet__ConfigView_FocusOutEvent_Callback = void (*)(Sonnet__ConfigView*, QFocusEvent*);
    using Sonnet__ConfigView_EnterEvent_Callback = void (*)(Sonnet__ConfigView*, QEnterEvent*);
    using Sonnet__ConfigView_LeaveEvent_Callback = void (*)(Sonnet__ConfigView*, QEvent*);
    using Sonnet__ConfigView_PaintEvent_Callback = void (*)(Sonnet__ConfigView*, QPaintEvent*);
    using Sonnet__ConfigView_MoveEvent_Callback = void (*)(Sonnet__ConfigView*, QMoveEvent*);
    using Sonnet__ConfigView_ResizeEvent_Callback = void (*)(Sonnet__ConfigView*, QResizeEvent*);
    using Sonnet__ConfigView_CloseEvent_Callback = void (*)(Sonnet__ConfigView*, QCloseEvent*);
    using Sonnet__ConfigView_ContextMenuEvent_Callback = void (*)(Sonnet__ConfigView*, QContextMenuEvent*);
    using Sonnet__ConfigView_TabletEvent_Callback = void (*)(Sonnet__ConfigView*, QTabletEvent*);
    using Sonnet__ConfigView_ActionEvent_Callback = void (*)(Sonnet__ConfigView*, QActionEvent*);
    using Sonnet__ConfigView_DragEnterEvent_Callback = void (*)(Sonnet__ConfigView*, QDragEnterEvent*);
    using Sonnet__ConfigView_DragMoveEvent_Callback = void (*)(Sonnet__ConfigView*, QDragMoveEvent*);
    using Sonnet__ConfigView_DragLeaveEvent_Callback = void (*)(Sonnet__ConfigView*, QDragLeaveEvent*);
    using Sonnet__ConfigView_DropEvent_Callback = void (*)(Sonnet__ConfigView*, QDropEvent*);
    using Sonnet__ConfigView_ShowEvent_Callback = void (*)(Sonnet__ConfigView*, QShowEvent*);
    using Sonnet__ConfigView_HideEvent_Callback = void (*)(Sonnet__ConfigView*, QHideEvent*);
    using Sonnet__ConfigView_NativeEvent_Callback = bool (*)(Sonnet__ConfigView*, libqt_string, void*, intptr_t*);
    using Sonnet__ConfigView_ChangeEvent_Callback = void (*)(Sonnet__ConfigView*, QEvent*);
    using Sonnet__ConfigView_Metric_Callback = int (*)(const Sonnet__ConfigView*, int);
    using Sonnet__ConfigView_InitPainter_Callback = void (*)(const Sonnet__ConfigView*, QPainter*);
    using Sonnet__ConfigView_Redirected_Callback = QPaintDevice* (*)(const Sonnet__ConfigView*, QPoint*);
    using Sonnet__ConfigView_SharedPainter_Callback = QPainter* (*)();
    using Sonnet__ConfigView_InputMethodEvent_Callback = void (*)(Sonnet__ConfigView*, QInputMethodEvent*);
    using Sonnet__ConfigView_InputMethodQuery_Callback = QVariant* (*)(const Sonnet__ConfigView*, int);
    using Sonnet__ConfigView_FocusNextPrevChild_Callback = bool (*)(Sonnet__ConfigView*, bool);
    using Sonnet__ConfigView_EventFilter_Callback = bool (*)(Sonnet__ConfigView*, QObject*, QEvent*);
    using Sonnet__ConfigView_TimerEvent_Callback = void (*)(Sonnet__ConfigView*, QTimerEvent*);
    using Sonnet__ConfigView_ChildEvent_Callback = void (*)(Sonnet__ConfigView*, QChildEvent*);
    using Sonnet__ConfigView_CustomEvent_Callback = void (*)(Sonnet__ConfigView*, QEvent*);
    using Sonnet__ConfigView_ConnectNotify_Callback = void (*)(Sonnet__ConfigView*, QMetaMethod*);
    using Sonnet__ConfigView_DisconnectNotify_Callback = void (*)(Sonnet__ConfigView*, QMetaMethod*);
    using Sonnet__ConfigView_UpdateMicroFocus_Callback = void (*)();
    using Sonnet__ConfigView_Create_Callback = void (*)();
    using Sonnet__ConfigView_Destroy_Callback = void (*)();
    using Sonnet__ConfigView_FocusNextChild_Callback = bool (*)();
    using Sonnet__ConfigView_FocusPreviousChild_Callback = bool (*)();
    using Sonnet__ConfigView_Sender_Callback = QObject* (*)();
    using Sonnet__ConfigView_SenderSignalIndex_Callback = int (*)();
    using Sonnet__ConfigView_Receivers_Callback = int (*)(const Sonnet__ConfigView*, const char*);
    using Sonnet__ConfigView_IsSignalConnected_Callback = bool (*)(const Sonnet__ConfigView*, QMetaMethod*);
    using Sonnet__ConfigView_GetDecodedMetricF_Callback = double (*)(const Sonnet__ConfigView*, int, int);

  protected:
    // Instance callback storage
    Sonnet__ConfigView_Metacall_Callback sonnet__configview_metacall_callback = nullptr;
    Sonnet__ConfigView_DevType_Callback sonnet__configview_devtype_callback = nullptr;
    Sonnet__ConfigView_SetVisible_Callback sonnet__configview_setvisible_callback = nullptr;
    Sonnet__ConfigView_SizeHint_Callback sonnet__configview_sizehint_callback = nullptr;
    Sonnet__ConfigView_MinimumSizeHint_Callback sonnet__configview_minimumsizehint_callback = nullptr;
    Sonnet__ConfigView_HeightForWidth_Callback sonnet__configview_heightforwidth_callback = nullptr;
    Sonnet__ConfigView_HasHeightForWidth_Callback sonnet__configview_hasheightforwidth_callback = nullptr;
    Sonnet__ConfigView_PaintEngine_Callback sonnet__configview_paintengine_callback = nullptr;
    Sonnet__ConfigView_Event_Callback sonnet__configview_event_callback = nullptr;
    Sonnet__ConfigView_MousePressEvent_Callback sonnet__configview_mousepressevent_callback = nullptr;
    Sonnet__ConfigView_MouseReleaseEvent_Callback sonnet__configview_mousereleaseevent_callback = nullptr;
    Sonnet__ConfigView_MouseDoubleClickEvent_Callback sonnet__configview_mousedoubleclickevent_callback = nullptr;
    Sonnet__ConfigView_MouseMoveEvent_Callback sonnet__configview_mousemoveevent_callback = nullptr;
    Sonnet__ConfigView_WheelEvent_Callback sonnet__configview_wheelevent_callback = nullptr;
    Sonnet__ConfigView_KeyPressEvent_Callback sonnet__configview_keypressevent_callback = nullptr;
    Sonnet__ConfigView_KeyReleaseEvent_Callback sonnet__configview_keyreleaseevent_callback = nullptr;
    Sonnet__ConfigView_FocusInEvent_Callback sonnet__configview_focusinevent_callback = nullptr;
    Sonnet__ConfigView_FocusOutEvent_Callback sonnet__configview_focusoutevent_callback = nullptr;
    Sonnet__ConfigView_EnterEvent_Callback sonnet__configview_enterevent_callback = nullptr;
    Sonnet__ConfigView_LeaveEvent_Callback sonnet__configview_leaveevent_callback = nullptr;
    Sonnet__ConfigView_PaintEvent_Callback sonnet__configview_paintevent_callback = nullptr;
    Sonnet__ConfigView_MoveEvent_Callback sonnet__configview_moveevent_callback = nullptr;
    Sonnet__ConfigView_ResizeEvent_Callback sonnet__configview_resizeevent_callback = nullptr;
    Sonnet__ConfigView_CloseEvent_Callback sonnet__configview_closeevent_callback = nullptr;
    Sonnet__ConfigView_ContextMenuEvent_Callback sonnet__configview_contextmenuevent_callback = nullptr;
    Sonnet__ConfigView_TabletEvent_Callback sonnet__configview_tabletevent_callback = nullptr;
    Sonnet__ConfigView_ActionEvent_Callback sonnet__configview_actionevent_callback = nullptr;
    Sonnet__ConfigView_DragEnterEvent_Callback sonnet__configview_dragenterevent_callback = nullptr;
    Sonnet__ConfigView_DragMoveEvent_Callback sonnet__configview_dragmoveevent_callback = nullptr;
    Sonnet__ConfigView_DragLeaveEvent_Callback sonnet__configview_dragleaveevent_callback = nullptr;
    Sonnet__ConfigView_DropEvent_Callback sonnet__configview_dropevent_callback = nullptr;
    Sonnet__ConfigView_ShowEvent_Callback sonnet__configview_showevent_callback = nullptr;
    Sonnet__ConfigView_HideEvent_Callback sonnet__configview_hideevent_callback = nullptr;
    Sonnet__ConfigView_NativeEvent_Callback sonnet__configview_nativeevent_callback = nullptr;
    Sonnet__ConfigView_ChangeEvent_Callback sonnet__configview_changeevent_callback = nullptr;
    Sonnet__ConfigView_Metric_Callback sonnet__configview_metric_callback = nullptr;
    Sonnet__ConfigView_InitPainter_Callback sonnet__configview_initpainter_callback = nullptr;
    Sonnet__ConfigView_Redirected_Callback sonnet__configview_redirected_callback = nullptr;
    Sonnet__ConfigView_SharedPainter_Callback sonnet__configview_sharedpainter_callback = nullptr;
    Sonnet__ConfigView_InputMethodEvent_Callback sonnet__configview_inputmethodevent_callback = nullptr;
    Sonnet__ConfigView_InputMethodQuery_Callback sonnet__configview_inputmethodquery_callback = nullptr;
    Sonnet__ConfigView_FocusNextPrevChild_Callback sonnet__configview_focusnextprevchild_callback = nullptr;
    Sonnet__ConfigView_EventFilter_Callback sonnet__configview_eventfilter_callback = nullptr;
    Sonnet__ConfigView_TimerEvent_Callback sonnet__configview_timerevent_callback = nullptr;
    Sonnet__ConfigView_ChildEvent_Callback sonnet__configview_childevent_callback = nullptr;
    Sonnet__ConfigView_CustomEvent_Callback sonnet__configview_customevent_callback = nullptr;
    Sonnet__ConfigView_ConnectNotify_Callback sonnet__configview_connectnotify_callback = nullptr;
    Sonnet__ConfigView_DisconnectNotify_Callback sonnet__configview_disconnectnotify_callback = nullptr;
    Sonnet__ConfigView_UpdateMicroFocus_Callback sonnet__configview_updatemicrofocus_callback = nullptr;
    Sonnet__ConfigView_Create_Callback sonnet__configview_create_callback = nullptr;
    Sonnet__ConfigView_Destroy_Callback sonnet__configview_destroy_callback = nullptr;
    Sonnet__ConfigView_FocusNextChild_Callback sonnet__configview_focusnextchild_callback = nullptr;
    Sonnet__ConfigView_FocusPreviousChild_Callback sonnet__configview_focuspreviouschild_callback = nullptr;
    Sonnet__ConfigView_Sender_Callback sonnet__configview_sender_callback = nullptr;
    Sonnet__ConfigView_SenderSignalIndex_Callback sonnet__configview_sendersignalindex_callback = nullptr;
    Sonnet__ConfigView_Receivers_Callback sonnet__configview_receivers_callback = nullptr;
    Sonnet__ConfigView_IsSignalConnected_Callback sonnet__configview_issignalconnected_callback = nullptr;
    Sonnet__ConfigView_GetDecodedMetricF_Callback sonnet__configview_getdecodedmetricf_callback = nullptr;

    // Instance base flags
    mutable bool sonnet__configview_metacall_isbase = false;
    mutable bool sonnet__configview_devtype_isbase = false;
    mutable bool sonnet__configview_setvisible_isbase = false;
    mutable bool sonnet__configview_sizehint_isbase = false;
    mutable bool sonnet__configview_minimumsizehint_isbase = false;
    mutable bool sonnet__configview_heightforwidth_isbase = false;
    mutable bool sonnet__configview_hasheightforwidth_isbase = false;
    mutable bool sonnet__configview_paintengine_isbase = false;
    mutable bool sonnet__configview_event_isbase = false;
    mutable bool sonnet__configview_mousepressevent_isbase = false;
    mutable bool sonnet__configview_mousereleaseevent_isbase = false;
    mutable bool sonnet__configview_mousedoubleclickevent_isbase = false;
    mutable bool sonnet__configview_mousemoveevent_isbase = false;
    mutable bool sonnet__configview_wheelevent_isbase = false;
    mutable bool sonnet__configview_keypressevent_isbase = false;
    mutable bool sonnet__configview_keyreleaseevent_isbase = false;
    mutable bool sonnet__configview_focusinevent_isbase = false;
    mutable bool sonnet__configview_focusoutevent_isbase = false;
    mutable bool sonnet__configview_enterevent_isbase = false;
    mutable bool sonnet__configview_leaveevent_isbase = false;
    mutable bool sonnet__configview_paintevent_isbase = false;
    mutable bool sonnet__configview_moveevent_isbase = false;
    mutable bool sonnet__configview_resizeevent_isbase = false;
    mutable bool sonnet__configview_closeevent_isbase = false;
    mutable bool sonnet__configview_contextmenuevent_isbase = false;
    mutable bool sonnet__configview_tabletevent_isbase = false;
    mutable bool sonnet__configview_actionevent_isbase = false;
    mutable bool sonnet__configview_dragenterevent_isbase = false;
    mutable bool sonnet__configview_dragmoveevent_isbase = false;
    mutable bool sonnet__configview_dragleaveevent_isbase = false;
    mutable bool sonnet__configview_dropevent_isbase = false;
    mutable bool sonnet__configview_showevent_isbase = false;
    mutable bool sonnet__configview_hideevent_isbase = false;
    mutable bool sonnet__configview_nativeevent_isbase = false;
    mutable bool sonnet__configview_changeevent_isbase = false;
    mutable bool sonnet__configview_metric_isbase = false;
    mutable bool sonnet__configview_initpainter_isbase = false;
    mutable bool sonnet__configview_redirected_isbase = false;
    mutable bool sonnet__configview_sharedpainter_isbase = false;
    mutable bool sonnet__configview_inputmethodevent_isbase = false;
    mutable bool sonnet__configview_inputmethodquery_isbase = false;
    mutable bool sonnet__configview_focusnextprevchild_isbase = false;
    mutable bool sonnet__configview_eventfilter_isbase = false;
    mutable bool sonnet__configview_timerevent_isbase = false;
    mutable bool sonnet__configview_childevent_isbase = false;
    mutable bool sonnet__configview_customevent_isbase = false;
    mutable bool sonnet__configview_connectnotify_isbase = false;
    mutable bool sonnet__configview_disconnectnotify_isbase = false;
    mutable bool sonnet__configview_updatemicrofocus_isbase = false;
    mutable bool sonnet__configview_create_isbase = false;
    mutable bool sonnet__configview_destroy_isbase = false;
    mutable bool sonnet__configview_focusnextchild_isbase = false;
    mutable bool sonnet__configview_focuspreviouschild_isbase = false;
    mutable bool sonnet__configview_sender_isbase = false;
    mutable bool sonnet__configview_sendersignalindex_isbase = false;
    mutable bool sonnet__configview_receivers_isbase = false;
    mutable bool sonnet__configview_issignalconnected_isbase = false;
    mutable bool sonnet__configview_getdecodedmetricf_isbase = false;

  public:
    VirtualSonnetConfigView(QWidget* parent) : Sonnet::ConfigView(parent) {};
    VirtualSonnetConfigView() : Sonnet::ConfigView() {};

    ~VirtualSonnetConfigView() {
        sonnet__configview_metacall_callback = nullptr;
        sonnet__configview_devtype_callback = nullptr;
        sonnet__configview_setvisible_callback = nullptr;
        sonnet__configview_sizehint_callback = nullptr;
        sonnet__configview_minimumsizehint_callback = nullptr;
        sonnet__configview_heightforwidth_callback = nullptr;
        sonnet__configview_hasheightforwidth_callback = nullptr;
        sonnet__configview_paintengine_callback = nullptr;
        sonnet__configview_event_callback = nullptr;
        sonnet__configview_mousepressevent_callback = nullptr;
        sonnet__configview_mousereleaseevent_callback = nullptr;
        sonnet__configview_mousedoubleclickevent_callback = nullptr;
        sonnet__configview_mousemoveevent_callback = nullptr;
        sonnet__configview_wheelevent_callback = nullptr;
        sonnet__configview_keypressevent_callback = nullptr;
        sonnet__configview_keyreleaseevent_callback = nullptr;
        sonnet__configview_focusinevent_callback = nullptr;
        sonnet__configview_focusoutevent_callback = nullptr;
        sonnet__configview_enterevent_callback = nullptr;
        sonnet__configview_leaveevent_callback = nullptr;
        sonnet__configview_paintevent_callback = nullptr;
        sonnet__configview_moveevent_callback = nullptr;
        sonnet__configview_resizeevent_callback = nullptr;
        sonnet__configview_closeevent_callback = nullptr;
        sonnet__configview_contextmenuevent_callback = nullptr;
        sonnet__configview_tabletevent_callback = nullptr;
        sonnet__configview_actionevent_callback = nullptr;
        sonnet__configview_dragenterevent_callback = nullptr;
        sonnet__configview_dragmoveevent_callback = nullptr;
        sonnet__configview_dragleaveevent_callback = nullptr;
        sonnet__configview_dropevent_callback = nullptr;
        sonnet__configview_showevent_callback = nullptr;
        sonnet__configview_hideevent_callback = nullptr;
        sonnet__configview_nativeevent_callback = nullptr;
        sonnet__configview_changeevent_callback = nullptr;
        sonnet__configview_metric_callback = nullptr;
        sonnet__configview_initpainter_callback = nullptr;
        sonnet__configview_redirected_callback = nullptr;
        sonnet__configview_sharedpainter_callback = nullptr;
        sonnet__configview_inputmethodevent_callback = nullptr;
        sonnet__configview_inputmethodquery_callback = nullptr;
        sonnet__configview_focusnextprevchild_callback = nullptr;
        sonnet__configview_eventfilter_callback = nullptr;
        sonnet__configview_timerevent_callback = nullptr;
        sonnet__configview_childevent_callback = nullptr;
        sonnet__configview_customevent_callback = nullptr;
        sonnet__configview_connectnotify_callback = nullptr;
        sonnet__configview_disconnectnotify_callback = nullptr;
        sonnet__configview_updatemicrofocus_callback = nullptr;
        sonnet__configview_create_callback = nullptr;
        sonnet__configview_destroy_callback = nullptr;
        sonnet__configview_focusnextchild_callback = nullptr;
        sonnet__configview_focuspreviouschild_callback = nullptr;
        sonnet__configview_sender_callback = nullptr;
        sonnet__configview_sendersignalindex_callback = nullptr;
        sonnet__configview_receivers_callback = nullptr;
        sonnet__configview_issignalconnected_callback = nullptr;
        sonnet__configview_getdecodedmetricf_callback = nullptr;
    }

    // Callback setters
    inline void setSonnet__ConfigView_Metacall_Callback(Sonnet__ConfigView_Metacall_Callback cb) { sonnet__configview_metacall_callback = cb; }
    inline void setSonnet__ConfigView_DevType_Callback(Sonnet__ConfigView_DevType_Callback cb) { sonnet__configview_devtype_callback = cb; }
    inline void setSonnet__ConfigView_SetVisible_Callback(Sonnet__ConfigView_SetVisible_Callback cb) { sonnet__configview_setvisible_callback = cb; }
    inline void setSonnet__ConfigView_SizeHint_Callback(Sonnet__ConfigView_SizeHint_Callback cb) { sonnet__configview_sizehint_callback = cb; }
    inline void setSonnet__ConfigView_MinimumSizeHint_Callback(Sonnet__ConfigView_MinimumSizeHint_Callback cb) { sonnet__configview_minimumsizehint_callback = cb; }
    inline void setSonnet__ConfigView_HeightForWidth_Callback(Sonnet__ConfigView_HeightForWidth_Callback cb) { sonnet__configview_heightforwidth_callback = cb; }
    inline void setSonnet__ConfigView_HasHeightForWidth_Callback(Sonnet__ConfigView_HasHeightForWidth_Callback cb) { sonnet__configview_hasheightforwidth_callback = cb; }
    inline void setSonnet__ConfigView_PaintEngine_Callback(Sonnet__ConfigView_PaintEngine_Callback cb) { sonnet__configview_paintengine_callback = cb; }
    inline void setSonnet__ConfigView_Event_Callback(Sonnet__ConfigView_Event_Callback cb) { sonnet__configview_event_callback = cb; }
    inline void setSonnet__ConfigView_MousePressEvent_Callback(Sonnet__ConfigView_MousePressEvent_Callback cb) { sonnet__configview_mousepressevent_callback = cb; }
    inline void setSonnet__ConfigView_MouseReleaseEvent_Callback(Sonnet__ConfigView_MouseReleaseEvent_Callback cb) { sonnet__configview_mousereleaseevent_callback = cb; }
    inline void setSonnet__ConfigView_MouseDoubleClickEvent_Callback(Sonnet__ConfigView_MouseDoubleClickEvent_Callback cb) { sonnet__configview_mousedoubleclickevent_callback = cb; }
    inline void setSonnet__ConfigView_MouseMoveEvent_Callback(Sonnet__ConfigView_MouseMoveEvent_Callback cb) { sonnet__configview_mousemoveevent_callback = cb; }
    inline void setSonnet__ConfigView_WheelEvent_Callback(Sonnet__ConfigView_WheelEvent_Callback cb) { sonnet__configview_wheelevent_callback = cb; }
    inline void setSonnet__ConfigView_KeyPressEvent_Callback(Sonnet__ConfigView_KeyPressEvent_Callback cb) { sonnet__configview_keypressevent_callback = cb; }
    inline void setSonnet__ConfigView_KeyReleaseEvent_Callback(Sonnet__ConfigView_KeyReleaseEvent_Callback cb) { sonnet__configview_keyreleaseevent_callback = cb; }
    inline void setSonnet__ConfigView_FocusInEvent_Callback(Sonnet__ConfigView_FocusInEvent_Callback cb) { sonnet__configview_focusinevent_callback = cb; }
    inline void setSonnet__ConfigView_FocusOutEvent_Callback(Sonnet__ConfigView_FocusOutEvent_Callback cb) { sonnet__configview_focusoutevent_callback = cb; }
    inline void setSonnet__ConfigView_EnterEvent_Callback(Sonnet__ConfigView_EnterEvent_Callback cb) { sonnet__configview_enterevent_callback = cb; }
    inline void setSonnet__ConfigView_LeaveEvent_Callback(Sonnet__ConfigView_LeaveEvent_Callback cb) { sonnet__configview_leaveevent_callback = cb; }
    inline void setSonnet__ConfigView_PaintEvent_Callback(Sonnet__ConfigView_PaintEvent_Callback cb) { sonnet__configview_paintevent_callback = cb; }
    inline void setSonnet__ConfigView_MoveEvent_Callback(Sonnet__ConfigView_MoveEvent_Callback cb) { sonnet__configview_moveevent_callback = cb; }
    inline void setSonnet__ConfigView_ResizeEvent_Callback(Sonnet__ConfigView_ResizeEvent_Callback cb) { sonnet__configview_resizeevent_callback = cb; }
    inline void setSonnet__ConfigView_CloseEvent_Callback(Sonnet__ConfigView_CloseEvent_Callback cb) { sonnet__configview_closeevent_callback = cb; }
    inline void setSonnet__ConfigView_ContextMenuEvent_Callback(Sonnet__ConfigView_ContextMenuEvent_Callback cb) { sonnet__configview_contextmenuevent_callback = cb; }
    inline void setSonnet__ConfigView_TabletEvent_Callback(Sonnet__ConfigView_TabletEvent_Callback cb) { sonnet__configview_tabletevent_callback = cb; }
    inline void setSonnet__ConfigView_ActionEvent_Callback(Sonnet__ConfigView_ActionEvent_Callback cb) { sonnet__configview_actionevent_callback = cb; }
    inline void setSonnet__ConfigView_DragEnterEvent_Callback(Sonnet__ConfigView_DragEnterEvent_Callback cb) { sonnet__configview_dragenterevent_callback = cb; }
    inline void setSonnet__ConfigView_DragMoveEvent_Callback(Sonnet__ConfigView_DragMoveEvent_Callback cb) { sonnet__configview_dragmoveevent_callback = cb; }
    inline void setSonnet__ConfigView_DragLeaveEvent_Callback(Sonnet__ConfigView_DragLeaveEvent_Callback cb) { sonnet__configview_dragleaveevent_callback = cb; }
    inline void setSonnet__ConfigView_DropEvent_Callback(Sonnet__ConfigView_DropEvent_Callback cb) { sonnet__configview_dropevent_callback = cb; }
    inline void setSonnet__ConfigView_ShowEvent_Callback(Sonnet__ConfigView_ShowEvent_Callback cb) { sonnet__configview_showevent_callback = cb; }
    inline void setSonnet__ConfigView_HideEvent_Callback(Sonnet__ConfigView_HideEvent_Callback cb) { sonnet__configview_hideevent_callback = cb; }
    inline void setSonnet__ConfigView_NativeEvent_Callback(Sonnet__ConfigView_NativeEvent_Callback cb) { sonnet__configview_nativeevent_callback = cb; }
    inline void setSonnet__ConfigView_ChangeEvent_Callback(Sonnet__ConfigView_ChangeEvent_Callback cb) { sonnet__configview_changeevent_callback = cb; }
    inline void setSonnet__ConfigView_Metric_Callback(Sonnet__ConfigView_Metric_Callback cb) { sonnet__configview_metric_callback = cb; }
    inline void setSonnet__ConfigView_InitPainter_Callback(Sonnet__ConfigView_InitPainter_Callback cb) { sonnet__configview_initpainter_callback = cb; }
    inline void setSonnet__ConfigView_Redirected_Callback(Sonnet__ConfigView_Redirected_Callback cb) { sonnet__configview_redirected_callback = cb; }
    inline void setSonnet__ConfigView_SharedPainter_Callback(Sonnet__ConfigView_SharedPainter_Callback cb) { sonnet__configview_sharedpainter_callback = cb; }
    inline void setSonnet__ConfigView_InputMethodEvent_Callback(Sonnet__ConfigView_InputMethodEvent_Callback cb) { sonnet__configview_inputmethodevent_callback = cb; }
    inline void setSonnet__ConfigView_InputMethodQuery_Callback(Sonnet__ConfigView_InputMethodQuery_Callback cb) { sonnet__configview_inputmethodquery_callback = cb; }
    inline void setSonnet__ConfigView_FocusNextPrevChild_Callback(Sonnet__ConfigView_FocusNextPrevChild_Callback cb) { sonnet__configview_focusnextprevchild_callback = cb; }
    inline void setSonnet__ConfigView_EventFilter_Callback(Sonnet__ConfigView_EventFilter_Callback cb) { sonnet__configview_eventfilter_callback = cb; }
    inline void setSonnet__ConfigView_TimerEvent_Callback(Sonnet__ConfigView_TimerEvent_Callback cb) { sonnet__configview_timerevent_callback = cb; }
    inline void setSonnet__ConfigView_ChildEvent_Callback(Sonnet__ConfigView_ChildEvent_Callback cb) { sonnet__configview_childevent_callback = cb; }
    inline void setSonnet__ConfigView_CustomEvent_Callback(Sonnet__ConfigView_CustomEvent_Callback cb) { sonnet__configview_customevent_callback = cb; }
    inline void setSonnet__ConfigView_ConnectNotify_Callback(Sonnet__ConfigView_ConnectNotify_Callback cb) { sonnet__configview_connectnotify_callback = cb; }
    inline void setSonnet__ConfigView_DisconnectNotify_Callback(Sonnet__ConfigView_DisconnectNotify_Callback cb) { sonnet__configview_disconnectnotify_callback = cb; }
    inline void setSonnet__ConfigView_UpdateMicroFocus_Callback(Sonnet__ConfigView_UpdateMicroFocus_Callback cb) { sonnet__configview_updatemicrofocus_callback = cb; }
    inline void setSonnet__ConfigView_Create_Callback(Sonnet__ConfigView_Create_Callback cb) { sonnet__configview_create_callback = cb; }
    inline void setSonnet__ConfigView_Destroy_Callback(Sonnet__ConfigView_Destroy_Callback cb) { sonnet__configview_destroy_callback = cb; }
    inline void setSonnet__ConfigView_FocusNextChild_Callback(Sonnet__ConfigView_FocusNextChild_Callback cb) { sonnet__configview_focusnextchild_callback = cb; }
    inline void setSonnet__ConfigView_FocusPreviousChild_Callback(Sonnet__ConfigView_FocusPreviousChild_Callback cb) { sonnet__configview_focuspreviouschild_callback = cb; }
    inline void setSonnet__ConfigView_Sender_Callback(Sonnet__ConfigView_Sender_Callback cb) { sonnet__configview_sender_callback = cb; }
    inline void setSonnet__ConfigView_SenderSignalIndex_Callback(Sonnet__ConfigView_SenderSignalIndex_Callback cb) { sonnet__configview_sendersignalindex_callback = cb; }
    inline void setSonnet__ConfigView_Receivers_Callback(Sonnet__ConfigView_Receivers_Callback cb) { sonnet__configview_receivers_callback = cb; }
    inline void setSonnet__ConfigView_IsSignalConnected_Callback(Sonnet__ConfigView_IsSignalConnected_Callback cb) { sonnet__configview_issignalconnected_callback = cb; }
    inline void setSonnet__ConfigView_GetDecodedMetricF_Callback(Sonnet__ConfigView_GetDecodedMetricF_Callback cb) { sonnet__configview_getdecodedmetricf_callback = cb; }

    // Base flag setters
    inline void setSonnet__ConfigView_Metacall_IsBase(bool value) const { sonnet__configview_metacall_isbase = value; }
    inline void setSonnet__ConfigView_DevType_IsBase(bool value) const { sonnet__configview_devtype_isbase = value; }
    inline void setSonnet__ConfigView_SetVisible_IsBase(bool value) const { sonnet__configview_setvisible_isbase = value; }
    inline void setSonnet__ConfigView_SizeHint_IsBase(bool value) const { sonnet__configview_sizehint_isbase = value; }
    inline void setSonnet__ConfigView_MinimumSizeHint_IsBase(bool value) const { sonnet__configview_minimumsizehint_isbase = value; }
    inline void setSonnet__ConfigView_HeightForWidth_IsBase(bool value) const { sonnet__configview_heightforwidth_isbase = value; }
    inline void setSonnet__ConfigView_HasHeightForWidth_IsBase(bool value) const { sonnet__configview_hasheightforwidth_isbase = value; }
    inline void setSonnet__ConfigView_PaintEngine_IsBase(bool value) const { sonnet__configview_paintengine_isbase = value; }
    inline void setSonnet__ConfigView_Event_IsBase(bool value) const { sonnet__configview_event_isbase = value; }
    inline void setSonnet__ConfigView_MousePressEvent_IsBase(bool value) const { sonnet__configview_mousepressevent_isbase = value; }
    inline void setSonnet__ConfigView_MouseReleaseEvent_IsBase(bool value) const { sonnet__configview_mousereleaseevent_isbase = value; }
    inline void setSonnet__ConfigView_MouseDoubleClickEvent_IsBase(bool value) const { sonnet__configview_mousedoubleclickevent_isbase = value; }
    inline void setSonnet__ConfigView_MouseMoveEvent_IsBase(bool value) const { sonnet__configview_mousemoveevent_isbase = value; }
    inline void setSonnet__ConfigView_WheelEvent_IsBase(bool value) const { sonnet__configview_wheelevent_isbase = value; }
    inline void setSonnet__ConfigView_KeyPressEvent_IsBase(bool value) const { sonnet__configview_keypressevent_isbase = value; }
    inline void setSonnet__ConfigView_KeyReleaseEvent_IsBase(bool value) const { sonnet__configview_keyreleaseevent_isbase = value; }
    inline void setSonnet__ConfigView_FocusInEvent_IsBase(bool value) const { sonnet__configview_focusinevent_isbase = value; }
    inline void setSonnet__ConfigView_FocusOutEvent_IsBase(bool value) const { sonnet__configview_focusoutevent_isbase = value; }
    inline void setSonnet__ConfigView_EnterEvent_IsBase(bool value) const { sonnet__configview_enterevent_isbase = value; }
    inline void setSonnet__ConfigView_LeaveEvent_IsBase(bool value) const { sonnet__configview_leaveevent_isbase = value; }
    inline void setSonnet__ConfigView_PaintEvent_IsBase(bool value) const { sonnet__configview_paintevent_isbase = value; }
    inline void setSonnet__ConfigView_MoveEvent_IsBase(bool value) const { sonnet__configview_moveevent_isbase = value; }
    inline void setSonnet__ConfigView_ResizeEvent_IsBase(bool value) const { sonnet__configview_resizeevent_isbase = value; }
    inline void setSonnet__ConfigView_CloseEvent_IsBase(bool value) const { sonnet__configview_closeevent_isbase = value; }
    inline void setSonnet__ConfigView_ContextMenuEvent_IsBase(bool value) const { sonnet__configview_contextmenuevent_isbase = value; }
    inline void setSonnet__ConfigView_TabletEvent_IsBase(bool value) const { sonnet__configview_tabletevent_isbase = value; }
    inline void setSonnet__ConfigView_ActionEvent_IsBase(bool value) const { sonnet__configview_actionevent_isbase = value; }
    inline void setSonnet__ConfigView_DragEnterEvent_IsBase(bool value) const { sonnet__configview_dragenterevent_isbase = value; }
    inline void setSonnet__ConfigView_DragMoveEvent_IsBase(bool value) const { sonnet__configview_dragmoveevent_isbase = value; }
    inline void setSonnet__ConfigView_DragLeaveEvent_IsBase(bool value) const { sonnet__configview_dragleaveevent_isbase = value; }
    inline void setSonnet__ConfigView_DropEvent_IsBase(bool value) const { sonnet__configview_dropevent_isbase = value; }
    inline void setSonnet__ConfigView_ShowEvent_IsBase(bool value) const { sonnet__configview_showevent_isbase = value; }
    inline void setSonnet__ConfigView_HideEvent_IsBase(bool value) const { sonnet__configview_hideevent_isbase = value; }
    inline void setSonnet__ConfigView_NativeEvent_IsBase(bool value) const { sonnet__configview_nativeevent_isbase = value; }
    inline void setSonnet__ConfigView_ChangeEvent_IsBase(bool value) const { sonnet__configview_changeevent_isbase = value; }
    inline void setSonnet__ConfigView_Metric_IsBase(bool value) const { sonnet__configview_metric_isbase = value; }
    inline void setSonnet__ConfigView_InitPainter_IsBase(bool value) const { sonnet__configview_initpainter_isbase = value; }
    inline void setSonnet__ConfigView_Redirected_IsBase(bool value) const { sonnet__configview_redirected_isbase = value; }
    inline void setSonnet__ConfigView_SharedPainter_IsBase(bool value) const { sonnet__configview_sharedpainter_isbase = value; }
    inline void setSonnet__ConfigView_InputMethodEvent_IsBase(bool value) const { sonnet__configview_inputmethodevent_isbase = value; }
    inline void setSonnet__ConfigView_InputMethodQuery_IsBase(bool value) const { sonnet__configview_inputmethodquery_isbase = value; }
    inline void setSonnet__ConfigView_FocusNextPrevChild_IsBase(bool value) const { sonnet__configview_focusnextprevchild_isbase = value; }
    inline void setSonnet__ConfigView_EventFilter_IsBase(bool value) const { sonnet__configview_eventfilter_isbase = value; }
    inline void setSonnet__ConfigView_TimerEvent_IsBase(bool value) const { sonnet__configview_timerevent_isbase = value; }
    inline void setSonnet__ConfigView_ChildEvent_IsBase(bool value) const { sonnet__configview_childevent_isbase = value; }
    inline void setSonnet__ConfigView_CustomEvent_IsBase(bool value) const { sonnet__configview_customevent_isbase = value; }
    inline void setSonnet__ConfigView_ConnectNotify_IsBase(bool value) const { sonnet__configview_connectnotify_isbase = value; }
    inline void setSonnet__ConfigView_DisconnectNotify_IsBase(bool value) const { sonnet__configview_disconnectnotify_isbase = value; }
    inline void setSonnet__ConfigView_UpdateMicroFocus_IsBase(bool value) const { sonnet__configview_updatemicrofocus_isbase = value; }
    inline void setSonnet__ConfigView_Create_IsBase(bool value) const { sonnet__configview_create_isbase = value; }
    inline void setSonnet__ConfigView_Destroy_IsBase(bool value) const { sonnet__configview_destroy_isbase = value; }
    inline void setSonnet__ConfigView_FocusNextChild_IsBase(bool value) const { sonnet__configview_focusnextchild_isbase = value; }
    inline void setSonnet__ConfigView_FocusPreviousChild_IsBase(bool value) const { sonnet__configview_focuspreviouschild_isbase = value; }
    inline void setSonnet__ConfigView_Sender_IsBase(bool value) const { sonnet__configview_sender_isbase = value; }
    inline void setSonnet__ConfigView_SenderSignalIndex_IsBase(bool value) const { sonnet__configview_sendersignalindex_isbase = value; }
    inline void setSonnet__ConfigView_Receivers_IsBase(bool value) const { sonnet__configview_receivers_isbase = value; }
    inline void setSonnet__ConfigView_IsSignalConnected_IsBase(bool value) const { sonnet__configview_issignalconnected_isbase = value; }
    inline void setSonnet__ConfigView_GetDecodedMetricF_IsBase(bool value) const { sonnet__configview_getdecodedmetricf_isbase = value; }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (sonnet__configview_metacall_isbase) {
            sonnet__configview_metacall_isbase = false;
            return Sonnet__ConfigView::qt_metacall(param1, param2, param3);
        } else if (sonnet__configview_metacall_callback != nullptr) {
            int cbval1 = static_cast<int>(param1);
            int cbval2 = param2;
            void** cbval3 = param3;

            int callback_ret = sonnet__configview_metacall_callback(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        } else {
            return Sonnet__ConfigView::qt_metacall(param1, param2, param3);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual int devType() const override {
        if (sonnet__configview_devtype_isbase) {
            sonnet__configview_devtype_isbase = false;
            return Sonnet__ConfigView::devType();
        } else if (sonnet__configview_devtype_callback != nullptr) {
            int callback_ret = sonnet__configview_devtype_callback();
            return static_cast<int>(callback_ret);
        } else {
            return Sonnet__ConfigView::devType();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void setVisible(bool visible) override {
        if (sonnet__configview_setvisible_isbase) {
            sonnet__configview_setvisible_isbase = false;
            Sonnet__ConfigView::setVisible(visible);
        } else if (sonnet__configview_setvisible_callback != nullptr) {
            bool cbval1 = visible;

            sonnet__configview_setvisible_callback(this, cbval1);
        } else {
            Sonnet__ConfigView::setVisible(visible);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QSize sizeHint() const override {
        if (sonnet__configview_sizehint_isbase) {
            sonnet__configview_sizehint_isbase = false;
            return Sonnet__ConfigView::sizeHint();
        } else if (sonnet__configview_sizehint_callback != nullptr) {
            QSize* callback_ret = sonnet__configview_sizehint_callback();
            return *callback_ret;
        } else {
            return Sonnet__ConfigView::sizeHint();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QSize minimumSizeHint() const override {
        if (sonnet__configview_minimumsizehint_isbase) {
            sonnet__configview_minimumsizehint_isbase = false;
            return Sonnet__ConfigView::minimumSizeHint();
        } else if (sonnet__configview_minimumsizehint_callback != nullptr) {
            QSize* callback_ret = sonnet__configview_minimumsizehint_callback();
            return *callback_ret;
        } else {
            return Sonnet__ConfigView::minimumSizeHint();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual int heightForWidth(int param1) const override {
        if (sonnet__configview_heightforwidth_isbase) {
            sonnet__configview_heightforwidth_isbase = false;
            return Sonnet__ConfigView::heightForWidth(param1);
        } else if (sonnet__configview_heightforwidth_callback != nullptr) {
            int cbval1 = param1;

            int callback_ret = sonnet__configview_heightforwidth_callback(this, cbval1);
            return static_cast<int>(callback_ret);
        } else {
            return Sonnet__ConfigView::heightForWidth(param1);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool hasHeightForWidth() const override {
        if (sonnet__configview_hasheightforwidth_isbase) {
            sonnet__configview_hasheightforwidth_isbase = false;
            return Sonnet__ConfigView::hasHeightForWidth();
        } else if (sonnet__configview_hasheightforwidth_callback != nullptr) {
            bool callback_ret = sonnet__configview_hasheightforwidth_callback();
            return callback_ret;
        } else {
            return Sonnet__ConfigView::hasHeightForWidth();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QPaintEngine* paintEngine() const override {
        if (sonnet__configview_paintengine_isbase) {
            sonnet__configview_paintengine_isbase = false;
            return Sonnet__ConfigView::paintEngine();
        } else if (sonnet__configview_paintengine_callback != nullptr) {
            QPaintEngine* callback_ret = sonnet__configview_paintengine_callback();
            return callback_ret;
        } else {
            return Sonnet__ConfigView::paintEngine();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* event) override {
        if (sonnet__configview_event_isbase) {
            sonnet__configview_event_isbase = false;
            return Sonnet__ConfigView::event(event);
        } else if (sonnet__configview_event_callback != nullptr) {
            QEvent* cbval1 = event;

            bool callback_ret = sonnet__configview_event_callback(this, cbval1);
            return callback_ret;
        } else {
            return Sonnet__ConfigView::event(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void mousePressEvent(QMouseEvent* event) override {
        if (sonnet__configview_mousepressevent_isbase) {
            sonnet__configview_mousepressevent_isbase = false;
            Sonnet__ConfigView::mousePressEvent(event);
        } else if (sonnet__configview_mousepressevent_callback != nullptr) {
            QMouseEvent* cbval1 = event;

            sonnet__configview_mousepressevent_callback(this, cbval1);
        } else {
            Sonnet__ConfigView::mousePressEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseReleaseEvent(QMouseEvent* event) override {
        if (sonnet__configview_mousereleaseevent_isbase) {
            sonnet__configview_mousereleaseevent_isbase = false;
            Sonnet__ConfigView::mouseReleaseEvent(event);
        } else if (sonnet__configview_mousereleaseevent_callback != nullptr) {
            QMouseEvent* cbval1 = event;

            sonnet__configview_mousereleaseevent_callback(this, cbval1);
        } else {
            Sonnet__ConfigView::mouseReleaseEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseDoubleClickEvent(QMouseEvent* event) override {
        if (sonnet__configview_mousedoubleclickevent_isbase) {
            sonnet__configview_mousedoubleclickevent_isbase = false;
            Sonnet__ConfigView::mouseDoubleClickEvent(event);
        } else if (sonnet__configview_mousedoubleclickevent_callback != nullptr) {
            QMouseEvent* cbval1 = event;

            sonnet__configview_mousedoubleclickevent_callback(this, cbval1);
        } else {
            Sonnet__ConfigView::mouseDoubleClickEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseMoveEvent(QMouseEvent* event) override {
        if (sonnet__configview_mousemoveevent_isbase) {
            sonnet__configview_mousemoveevent_isbase = false;
            Sonnet__ConfigView::mouseMoveEvent(event);
        } else if (sonnet__configview_mousemoveevent_callback != nullptr) {
            QMouseEvent* cbval1 = event;

            sonnet__configview_mousemoveevent_callback(this, cbval1);
        } else {
            Sonnet__ConfigView::mouseMoveEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void wheelEvent(QWheelEvent* event) override {
        if (sonnet__configview_wheelevent_isbase) {
            sonnet__configview_wheelevent_isbase = false;
            Sonnet__ConfigView::wheelEvent(event);
        } else if (sonnet__configview_wheelevent_callback != nullptr) {
            QWheelEvent* cbval1 = event;

            sonnet__configview_wheelevent_callback(this, cbval1);
        } else {
            Sonnet__ConfigView::wheelEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void keyPressEvent(QKeyEvent* event) override {
        if (sonnet__configview_keypressevent_isbase) {
            sonnet__configview_keypressevent_isbase = false;
            Sonnet__ConfigView::keyPressEvent(event);
        } else if (sonnet__configview_keypressevent_callback != nullptr) {
            QKeyEvent* cbval1 = event;

            sonnet__configview_keypressevent_callback(this, cbval1);
        } else {
            Sonnet__ConfigView::keyPressEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void keyReleaseEvent(QKeyEvent* event) override {
        if (sonnet__configview_keyreleaseevent_isbase) {
            sonnet__configview_keyreleaseevent_isbase = false;
            Sonnet__ConfigView::keyReleaseEvent(event);
        } else if (sonnet__configview_keyreleaseevent_callback != nullptr) {
            QKeyEvent* cbval1 = event;

            sonnet__configview_keyreleaseevent_callback(this, cbval1);
        } else {
            Sonnet__ConfigView::keyReleaseEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void focusInEvent(QFocusEvent* event) override {
        if (sonnet__configview_focusinevent_isbase) {
            sonnet__configview_focusinevent_isbase = false;
            Sonnet__ConfigView::focusInEvent(event);
        } else if (sonnet__configview_focusinevent_callback != nullptr) {
            QFocusEvent* cbval1 = event;

            sonnet__configview_focusinevent_callback(this, cbval1);
        } else {
            Sonnet__ConfigView::focusInEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void focusOutEvent(QFocusEvent* event) override {
        if (sonnet__configview_focusoutevent_isbase) {
            sonnet__configview_focusoutevent_isbase = false;
            Sonnet__ConfigView::focusOutEvent(event);
        } else if (sonnet__configview_focusoutevent_callback != nullptr) {
            QFocusEvent* cbval1 = event;

            sonnet__configview_focusoutevent_callback(this, cbval1);
        } else {
            Sonnet__ConfigView::focusOutEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void enterEvent(QEnterEvent* event) override {
        if (sonnet__configview_enterevent_isbase) {
            sonnet__configview_enterevent_isbase = false;
            Sonnet__ConfigView::enterEvent(event);
        } else if (sonnet__configview_enterevent_callback != nullptr) {
            QEnterEvent* cbval1 = event;

            sonnet__configview_enterevent_callback(this, cbval1);
        } else {
            Sonnet__ConfigView::enterEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void leaveEvent(QEvent* event) override {
        if (sonnet__configview_leaveevent_isbase) {
            sonnet__configview_leaveevent_isbase = false;
            Sonnet__ConfigView::leaveEvent(event);
        } else if (sonnet__configview_leaveevent_callback != nullptr) {
            QEvent* cbval1 = event;

            sonnet__configview_leaveevent_callback(this, cbval1);
        } else {
            Sonnet__ConfigView::leaveEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void paintEvent(QPaintEvent* event) override {
        if (sonnet__configview_paintevent_isbase) {
            sonnet__configview_paintevent_isbase = false;
            Sonnet__ConfigView::paintEvent(event);
        } else if (sonnet__configview_paintevent_callback != nullptr) {
            QPaintEvent* cbval1 = event;

            sonnet__configview_paintevent_callback(this, cbval1);
        } else {
            Sonnet__ConfigView::paintEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void moveEvent(QMoveEvent* event) override {
        if (sonnet__configview_moveevent_isbase) {
            sonnet__configview_moveevent_isbase = false;
            Sonnet__ConfigView::moveEvent(event);
        } else if (sonnet__configview_moveevent_callback != nullptr) {
            QMoveEvent* cbval1 = event;

            sonnet__configview_moveevent_callback(this, cbval1);
        } else {
            Sonnet__ConfigView::moveEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void resizeEvent(QResizeEvent* event) override {
        if (sonnet__configview_resizeevent_isbase) {
            sonnet__configview_resizeevent_isbase = false;
            Sonnet__ConfigView::resizeEvent(event);
        } else if (sonnet__configview_resizeevent_callback != nullptr) {
            QResizeEvent* cbval1 = event;

            sonnet__configview_resizeevent_callback(this, cbval1);
        } else {
            Sonnet__ConfigView::resizeEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void closeEvent(QCloseEvent* event) override {
        if (sonnet__configview_closeevent_isbase) {
            sonnet__configview_closeevent_isbase = false;
            Sonnet__ConfigView::closeEvent(event);
        } else if (sonnet__configview_closeevent_callback != nullptr) {
            QCloseEvent* cbval1 = event;

            sonnet__configview_closeevent_callback(this, cbval1);
        } else {
            Sonnet__ConfigView::closeEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void contextMenuEvent(QContextMenuEvent* event) override {
        if (sonnet__configview_contextmenuevent_isbase) {
            sonnet__configview_contextmenuevent_isbase = false;
            Sonnet__ConfigView::contextMenuEvent(event);
        } else if (sonnet__configview_contextmenuevent_callback != nullptr) {
            QContextMenuEvent* cbval1 = event;

            sonnet__configview_contextmenuevent_callback(this, cbval1);
        } else {
            Sonnet__ConfigView::contextMenuEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void tabletEvent(QTabletEvent* event) override {
        if (sonnet__configview_tabletevent_isbase) {
            sonnet__configview_tabletevent_isbase = false;
            Sonnet__ConfigView::tabletEvent(event);
        } else if (sonnet__configview_tabletevent_callback != nullptr) {
            QTabletEvent* cbval1 = event;

            sonnet__configview_tabletevent_callback(this, cbval1);
        } else {
            Sonnet__ConfigView::tabletEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void actionEvent(QActionEvent* event) override {
        if (sonnet__configview_actionevent_isbase) {
            sonnet__configview_actionevent_isbase = false;
            Sonnet__ConfigView::actionEvent(event);
        } else if (sonnet__configview_actionevent_callback != nullptr) {
            QActionEvent* cbval1 = event;

            sonnet__configview_actionevent_callback(this, cbval1);
        } else {
            Sonnet__ConfigView::actionEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragEnterEvent(QDragEnterEvent* event) override {
        if (sonnet__configview_dragenterevent_isbase) {
            sonnet__configview_dragenterevent_isbase = false;
            Sonnet__ConfigView::dragEnterEvent(event);
        } else if (sonnet__configview_dragenterevent_callback != nullptr) {
            QDragEnterEvent* cbval1 = event;

            sonnet__configview_dragenterevent_callback(this, cbval1);
        } else {
            Sonnet__ConfigView::dragEnterEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragMoveEvent(QDragMoveEvent* event) override {
        if (sonnet__configview_dragmoveevent_isbase) {
            sonnet__configview_dragmoveevent_isbase = false;
            Sonnet__ConfigView::dragMoveEvent(event);
        } else if (sonnet__configview_dragmoveevent_callback != nullptr) {
            QDragMoveEvent* cbval1 = event;

            sonnet__configview_dragmoveevent_callback(this, cbval1);
        } else {
            Sonnet__ConfigView::dragMoveEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragLeaveEvent(QDragLeaveEvent* event) override {
        if (sonnet__configview_dragleaveevent_isbase) {
            sonnet__configview_dragleaveevent_isbase = false;
            Sonnet__ConfigView::dragLeaveEvent(event);
        } else if (sonnet__configview_dragleaveevent_callback != nullptr) {
            QDragLeaveEvent* cbval1 = event;

            sonnet__configview_dragleaveevent_callback(this, cbval1);
        } else {
            Sonnet__ConfigView::dragLeaveEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void dropEvent(QDropEvent* event) override {
        if (sonnet__configview_dropevent_isbase) {
            sonnet__configview_dropevent_isbase = false;
            Sonnet__ConfigView::dropEvent(event);
        } else if (sonnet__configview_dropevent_callback != nullptr) {
            QDropEvent* cbval1 = event;

            sonnet__configview_dropevent_callback(this, cbval1);
        } else {
            Sonnet__ConfigView::dropEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void showEvent(QShowEvent* event) override {
        if (sonnet__configview_showevent_isbase) {
            sonnet__configview_showevent_isbase = false;
            Sonnet__ConfigView::showEvent(event);
        } else if (sonnet__configview_showevent_callback != nullptr) {
            QShowEvent* cbval1 = event;

            sonnet__configview_showevent_callback(this, cbval1);
        } else {
            Sonnet__ConfigView::showEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void hideEvent(QHideEvent* event) override {
        if (sonnet__configview_hideevent_isbase) {
            sonnet__configview_hideevent_isbase = false;
            Sonnet__ConfigView::hideEvent(event);
        } else if (sonnet__configview_hideevent_callback != nullptr) {
            QHideEvent* cbval1 = event;

            sonnet__configview_hideevent_callback(this, cbval1);
        } else {
            Sonnet__ConfigView::hideEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool nativeEvent(const QByteArray& eventType, void* message, qintptr* result) override {
        if (sonnet__configview_nativeevent_isbase) {
            sonnet__configview_nativeevent_isbase = false;
            return Sonnet__ConfigView::nativeEvent(eventType, message, result);
        } else if (sonnet__configview_nativeevent_callback != nullptr) {
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

            bool callback_ret = sonnet__configview_nativeevent_callback(this, cbval1, cbval2, cbval3);
            return callback_ret;
        } else {
            return Sonnet__ConfigView::nativeEvent(eventType, message, result);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void changeEvent(QEvent* param1) override {
        if (sonnet__configview_changeevent_isbase) {
            sonnet__configview_changeevent_isbase = false;
            Sonnet__ConfigView::changeEvent(param1);
        } else if (sonnet__configview_changeevent_callback != nullptr) {
            QEvent* cbval1 = param1;

            sonnet__configview_changeevent_callback(this, cbval1);
        } else {
            Sonnet__ConfigView::changeEvent(param1);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual int metric(QPaintDevice::PaintDeviceMetric param1) const override {
        if (sonnet__configview_metric_isbase) {
            sonnet__configview_metric_isbase = false;
            return Sonnet__ConfigView::metric(param1);
        } else if (sonnet__configview_metric_callback != nullptr) {
            int cbval1 = static_cast<int>(param1);

            int callback_ret = sonnet__configview_metric_callback(this, cbval1);
            return static_cast<int>(callback_ret);
        } else {
            return Sonnet__ConfigView::metric(param1);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void initPainter(QPainter* painter) const override {
        if (sonnet__configview_initpainter_isbase) {
            sonnet__configview_initpainter_isbase = false;
            Sonnet__ConfigView::initPainter(painter);
        } else if (sonnet__configview_initpainter_callback != nullptr) {
            QPainter* cbval1 = painter;

            sonnet__configview_initpainter_callback(this, cbval1);
        } else {
            Sonnet__ConfigView::initPainter(painter);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QPaintDevice* redirected(QPoint* offset) const override {
        if (sonnet__configview_redirected_isbase) {
            sonnet__configview_redirected_isbase = false;
            return Sonnet__ConfigView::redirected(offset);
        } else if (sonnet__configview_redirected_callback != nullptr) {
            QPoint* cbval1 = offset;

            QPaintDevice* callback_ret = sonnet__configview_redirected_callback(this, cbval1);
            return callback_ret;
        } else {
            return Sonnet__ConfigView::redirected(offset);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QPainter* sharedPainter() const override {
        if (sonnet__configview_sharedpainter_isbase) {
            sonnet__configview_sharedpainter_isbase = false;
            return Sonnet__ConfigView::sharedPainter();
        } else if (sonnet__configview_sharedpainter_callback != nullptr) {
            QPainter* callback_ret = sonnet__configview_sharedpainter_callback();
            return callback_ret;
        } else {
            return Sonnet__ConfigView::sharedPainter();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void inputMethodEvent(QInputMethodEvent* param1) override {
        if (sonnet__configview_inputmethodevent_isbase) {
            sonnet__configview_inputmethodevent_isbase = false;
            Sonnet__ConfigView::inputMethodEvent(param1);
        } else if (sonnet__configview_inputmethodevent_callback != nullptr) {
            QInputMethodEvent* cbval1 = param1;

            sonnet__configview_inputmethodevent_callback(this, cbval1);
        } else {
            Sonnet__ConfigView::inputMethodEvent(param1);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QVariant inputMethodQuery(Qt::InputMethodQuery param1) const override {
        if (sonnet__configview_inputmethodquery_isbase) {
            sonnet__configview_inputmethodquery_isbase = false;
            return Sonnet__ConfigView::inputMethodQuery(param1);
        } else if (sonnet__configview_inputmethodquery_callback != nullptr) {
            int cbval1 = static_cast<int>(param1);

            QVariant* callback_ret = sonnet__configview_inputmethodquery_callback(this, cbval1);
            return *callback_ret;
        } else {
            return Sonnet__ConfigView::inputMethodQuery(param1);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool focusNextPrevChild(bool next) override {
        if (sonnet__configview_focusnextprevchild_isbase) {
            sonnet__configview_focusnextprevchild_isbase = false;
            return Sonnet__ConfigView::focusNextPrevChild(next);
        } else if (sonnet__configview_focusnextprevchild_callback != nullptr) {
            bool cbval1 = next;

            bool callback_ret = sonnet__configview_focusnextprevchild_callback(this, cbval1);
            return callback_ret;
        } else {
            return Sonnet__ConfigView::focusNextPrevChild(next);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* watched, QEvent* event) override {
        if (sonnet__configview_eventfilter_isbase) {
            sonnet__configview_eventfilter_isbase = false;
            return Sonnet__ConfigView::eventFilter(watched, event);
        } else if (sonnet__configview_eventfilter_callback != nullptr) {
            QObject* cbval1 = watched;
            QEvent* cbval2 = event;

            bool callback_ret = sonnet__configview_eventfilter_callback(this, cbval1, cbval2);
            return callback_ret;
        } else {
            return Sonnet__ConfigView::eventFilter(watched, event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (sonnet__configview_timerevent_isbase) {
            sonnet__configview_timerevent_isbase = false;
            Sonnet__ConfigView::timerEvent(event);
        } else if (sonnet__configview_timerevent_callback != nullptr) {
            QTimerEvent* cbval1 = event;

            sonnet__configview_timerevent_callback(this, cbval1);
        } else {
            Sonnet__ConfigView::timerEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (sonnet__configview_childevent_isbase) {
            sonnet__configview_childevent_isbase = false;
            Sonnet__ConfigView::childEvent(event);
        } else if (sonnet__configview_childevent_callback != nullptr) {
            QChildEvent* cbval1 = event;

            sonnet__configview_childevent_callback(this, cbval1);
        } else {
            Sonnet__ConfigView::childEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (sonnet__configview_customevent_isbase) {
            sonnet__configview_customevent_isbase = false;
            Sonnet__ConfigView::customEvent(event);
        } else if (sonnet__configview_customevent_callback != nullptr) {
            QEvent* cbval1 = event;

            sonnet__configview_customevent_callback(this, cbval1);
        } else {
            Sonnet__ConfigView::customEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (sonnet__configview_connectnotify_isbase) {
            sonnet__configview_connectnotify_isbase = false;
            Sonnet__ConfigView::connectNotify(signal);
        } else if (sonnet__configview_connectnotify_callback != nullptr) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            sonnet__configview_connectnotify_callback(this, cbval1);
        } else {
            Sonnet__ConfigView::connectNotify(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (sonnet__configview_disconnectnotify_isbase) {
            sonnet__configview_disconnectnotify_isbase = false;
            Sonnet__ConfigView::disconnectNotify(signal);
        } else if (sonnet__configview_disconnectnotify_callback != nullptr) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            sonnet__configview_disconnectnotify_callback(this, cbval1);
        } else {
            Sonnet__ConfigView::disconnectNotify(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    void updateMicroFocus() {
        if (sonnet__configview_updatemicrofocus_isbase) {
            sonnet__configview_updatemicrofocus_isbase = false;
            Sonnet__ConfigView::updateMicroFocus();
        } else if (sonnet__configview_updatemicrofocus_callback != nullptr) {
            sonnet__configview_updatemicrofocus_callback();
        } else {
            Sonnet__ConfigView::updateMicroFocus();
        }
    }

    // Virtual method for C ABI access and custom callback
    void create() {
        if (sonnet__configview_create_isbase) {
            sonnet__configview_create_isbase = false;
            Sonnet__ConfigView::create();
        } else if (sonnet__configview_create_callback != nullptr) {
            sonnet__configview_create_callback();
        } else {
            Sonnet__ConfigView::create();
        }
    }

    // Virtual method for C ABI access and custom callback
    void destroy() {
        if (sonnet__configview_destroy_isbase) {
            sonnet__configview_destroy_isbase = false;
            Sonnet__ConfigView::destroy();
        } else if (sonnet__configview_destroy_callback != nullptr) {
            sonnet__configview_destroy_callback();
        } else {
            Sonnet__ConfigView::destroy();
        }
    }

    // Virtual method for C ABI access and custom callback
    bool focusNextChild() {
        if (sonnet__configview_focusnextchild_isbase) {
            sonnet__configview_focusnextchild_isbase = false;
            return Sonnet__ConfigView::focusNextChild();
        } else if (sonnet__configview_focusnextchild_callback != nullptr) {
            bool callback_ret = sonnet__configview_focusnextchild_callback();
            return callback_ret;
        } else {
            return Sonnet__ConfigView::focusNextChild();
        }
    }

    // Virtual method for C ABI access and custom callback
    bool focusPreviousChild() {
        if (sonnet__configview_focuspreviouschild_isbase) {
            sonnet__configview_focuspreviouschild_isbase = false;
            return Sonnet__ConfigView::focusPreviousChild();
        } else if (sonnet__configview_focuspreviouschild_callback != nullptr) {
            bool callback_ret = sonnet__configview_focuspreviouschild_callback();
            return callback_ret;
        } else {
            return Sonnet__ConfigView::focusPreviousChild();
        }
    }

    // Virtual method for C ABI access and custom callback
    QObject* sender() const {
        if (sonnet__configview_sender_isbase) {
            sonnet__configview_sender_isbase = false;
            return Sonnet__ConfigView::sender();
        } else if (sonnet__configview_sender_callback != nullptr) {
            QObject* callback_ret = sonnet__configview_sender_callback();
            return callback_ret;
        } else {
            return Sonnet__ConfigView::sender();
        }
    }

    // Virtual method for C ABI access and custom callback
    int senderSignalIndex() const {
        if (sonnet__configview_sendersignalindex_isbase) {
            sonnet__configview_sendersignalindex_isbase = false;
            return Sonnet__ConfigView::senderSignalIndex();
        } else if (sonnet__configview_sendersignalindex_callback != nullptr) {
            int callback_ret = sonnet__configview_sendersignalindex_callback();
            return static_cast<int>(callback_ret);
        } else {
            return Sonnet__ConfigView::senderSignalIndex();
        }
    }

    // Virtual method for C ABI access and custom callback
    int receivers(const char* signal) const {
        if (sonnet__configview_receivers_isbase) {
            sonnet__configview_receivers_isbase = false;
            return Sonnet__ConfigView::receivers(signal);
        } else if (sonnet__configview_receivers_callback != nullptr) {
            const char* cbval1 = (const char*)signal;

            int callback_ret = sonnet__configview_receivers_callback(this, cbval1);
            return static_cast<int>(callback_ret);
        } else {
            return Sonnet__ConfigView::receivers(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    bool isSignalConnected(const QMetaMethod& signal) const {
        if (sonnet__configview_issignalconnected_isbase) {
            sonnet__configview_issignalconnected_isbase = false;
            return Sonnet__ConfigView::isSignalConnected(signal);
        } else if (sonnet__configview_issignalconnected_callback != nullptr) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            bool callback_ret = sonnet__configview_issignalconnected_callback(this, cbval1);
            return callback_ret;
        } else {
            return Sonnet__ConfigView::isSignalConnected(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    double getDecodedMetricF(QPaintDevice::PaintDeviceMetric metricA, QPaintDevice::PaintDeviceMetric metricB) const {
        if (sonnet__configview_getdecodedmetricf_isbase) {
            sonnet__configview_getdecodedmetricf_isbase = false;
            return Sonnet__ConfigView::getDecodedMetricF(metricA, metricB);
        } else if (sonnet__configview_getdecodedmetricf_callback != nullptr) {
            int cbval1 = static_cast<int>(metricA);
            int cbval2 = static_cast<int>(metricB);

            double callback_ret = sonnet__configview_getdecodedmetricf_callback(this, cbval1, cbval2);
            return static_cast<double>(callback_ret);
        } else {
            return Sonnet__ConfigView::getDecodedMetricF(metricA, metricB);
        }
    }

    // Friend functions
    friend bool Sonnet__ConfigView_Event(Sonnet::ConfigView* self, QEvent* event);
    friend bool Sonnet__ConfigView_QBaseEvent(Sonnet::ConfigView* self, QEvent* event);
    friend void Sonnet__ConfigView_MousePressEvent(Sonnet::ConfigView* self, QMouseEvent* event);
    friend void Sonnet__ConfigView_QBaseMousePressEvent(Sonnet::ConfigView* self, QMouseEvent* event);
    friend void Sonnet__ConfigView_MouseReleaseEvent(Sonnet::ConfigView* self, QMouseEvent* event);
    friend void Sonnet__ConfigView_QBaseMouseReleaseEvent(Sonnet::ConfigView* self, QMouseEvent* event);
    friend void Sonnet__ConfigView_MouseDoubleClickEvent(Sonnet::ConfigView* self, QMouseEvent* event);
    friend void Sonnet__ConfigView_QBaseMouseDoubleClickEvent(Sonnet::ConfigView* self, QMouseEvent* event);
    friend void Sonnet__ConfigView_MouseMoveEvent(Sonnet::ConfigView* self, QMouseEvent* event);
    friend void Sonnet__ConfigView_QBaseMouseMoveEvent(Sonnet::ConfigView* self, QMouseEvent* event);
    friend void Sonnet__ConfigView_WheelEvent(Sonnet::ConfigView* self, QWheelEvent* event);
    friend void Sonnet__ConfigView_QBaseWheelEvent(Sonnet::ConfigView* self, QWheelEvent* event);
    friend void Sonnet__ConfigView_KeyPressEvent(Sonnet::ConfigView* self, QKeyEvent* event);
    friend void Sonnet__ConfigView_QBaseKeyPressEvent(Sonnet::ConfigView* self, QKeyEvent* event);
    friend void Sonnet__ConfigView_KeyReleaseEvent(Sonnet::ConfigView* self, QKeyEvent* event);
    friend void Sonnet__ConfigView_QBaseKeyReleaseEvent(Sonnet::ConfigView* self, QKeyEvent* event);
    friend void Sonnet__ConfigView_FocusInEvent(Sonnet::ConfigView* self, QFocusEvent* event);
    friend void Sonnet__ConfigView_QBaseFocusInEvent(Sonnet::ConfigView* self, QFocusEvent* event);
    friend void Sonnet__ConfigView_FocusOutEvent(Sonnet::ConfigView* self, QFocusEvent* event);
    friend void Sonnet__ConfigView_QBaseFocusOutEvent(Sonnet::ConfigView* self, QFocusEvent* event);
    friend void Sonnet__ConfigView_EnterEvent(Sonnet::ConfigView* self, QEnterEvent* event);
    friend void Sonnet__ConfigView_QBaseEnterEvent(Sonnet::ConfigView* self, QEnterEvent* event);
    friend void Sonnet__ConfigView_LeaveEvent(Sonnet::ConfigView* self, QEvent* event);
    friend void Sonnet__ConfigView_QBaseLeaveEvent(Sonnet::ConfigView* self, QEvent* event);
    friend void Sonnet__ConfigView_PaintEvent(Sonnet::ConfigView* self, QPaintEvent* event);
    friend void Sonnet__ConfigView_QBasePaintEvent(Sonnet::ConfigView* self, QPaintEvent* event);
    friend void Sonnet__ConfigView_MoveEvent(Sonnet::ConfigView* self, QMoveEvent* event);
    friend void Sonnet__ConfigView_QBaseMoveEvent(Sonnet::ConfigView* self, QMoveEvent* event);
    friend void Sonnet__ConfigView_ResizeEvent(Sonnet::ConfigView* self, QResizeEvent* event);
    friend void Sonnet__ConfigView_QBaseResizeEvent(Sonnet::ConfigView* self, QResizeEvent* event);
    friend void Sonnet__ConfigView_CloseEvent(Sonnet::ConfigView* self, QCloseEvent* event);
    friend void Sonnet__ConfigView_QBaseCloseEvent(Sonnet::ConfigView* self, QCloseEvent* event);
    friend void Sonnet__ConfigView_ContextMenuEvent(Sonnet::ConfigView* self, QContextMenuEvent* event);
    friend void Sonnet__ConfigView_QBaseContextMenuEvent(Sonnet::ConfigView* self, QContextMenuEvent* event);
    friend void Sonnet__ConfigView_TabletEvent(Sonnet::ConfigView* self, QTabletEvent* event);
    friend void Sonnet__ConfigView_QBaseTabletEvent(Sonnet::ConfigView* self, QTabletEvent* event);
    friend void Sonnet__ConfigView_ActionEvent(Sonnet::ConfigView* self, QActionEvent* event);
    friend void Sonnet__ConfigView_QBaseActionEvent(Sonnet::ConfigView* self, QActionEvent* event);
    friend void Sonnet__ConfigView_DragEnterEvent(Sonnet::ConfigView* self, QDragEnterEvent* event);
    friend void Sonnet__ConfigView_QBaseDragEnterEvent(Sonnet::ConfigView* self, QDragEnterEvent* event);
    friend void Sonnet__ConfigView_DragMoveEvent(Sonnet::ConfigView* self, QDragMoveEvent* event);
    friend void Sonnet__ConfigView_QBaseDragMoveEvent(Sonnet::ConfigView* self, QDragMoveEvent* event);
    friend void Sonnet__ConfigView_DragLeaveEvent(Sonnet::ConfigView* self, QDragLeaveEvent* event);
    friend void Sonnet__ConfigView_QBaseDragLeaveEvent(Sonnet::ConfigView* self, QDragLeaveEvent* event);
    friend void Sonnet__ConfigView_DropEvent(Sonnet::ConfigView* self, QDropEvent* event);
    friend void Sonnet__ConfigView_QBaseDropEvent(Sonnet::ConfigView* self, QDropEvent* event);
    friend void Sonnet__ConfigView_ShowEvent(Sonnet::ConfigView* self, QShowEvent* event);
    friend void Sonnet__ConfigView_QBaseShowEvent(Sonnet::ConfigView* self, QShowEvent* event);
    friend void Sonnet__ConfigView_HideEvent(Sonnet::ConfigView* self, QHideEvent* event);
    friend void Sonnet__ConfigView_QBaseHideEvent(Sonnet::ConfigView* self, QHideEvent* event);
    friend bool Sonnet__ConfigView_NativeEvent(Sonnet::ConfigView* self, const libqt_string eventType, void* message, intptr_t* result);
    friend bool Sonnet__ConfigView_QBaseNativeEvent(Sonnet::ConfigView* self, const libqt_string eventType, void* message, intptr_t* result);
    friend void Sonnet__ConfigView_ChangeEvent(Sonnet::ConfigView* self, QEvent* param1);
    friend void Sonnet__ConfigView_QBaseChangeEvent(Sonnet::ConfigView* self, QEvent* param1);
    friend int Sonnet__ConfigView_Metric(const Sonnet::ConfigView* self, int param1);
    friend int Sonnet__ConfigView_QBaseMetric(const Sonnet::ConfigView* self, int param1);
    friend void Sonnet__ConfigView_InitPainter(const Sonnet::ConfigView* self, QPainter* painter);
    friend void Sonnet__ConfigView_QBaseInitPainter(const Sonnet::ConfigView* self, QPainter* painter);
    friend QPaintDevice* Sonnet__ConfigView_Redirected(const Sonnet::ConfigView* self, QPoint* offset);
    friend QPaintDevice* Sonnet__ConfigView_QBaseRedirected(const Sonnet::ConfigView* self, QPoint* offset);
    friend QPainter* Sonnet__ConfigView_SharedPainter(const Sonnet::ConfigView* self);
    friend QPainter* Sonnet__ConfigView_QBaseSharedPainter(const Sonnet::ConfigView* self);
    friend void Sonnet__ConfigView_InputMethodEvent(Sonnet::ConfigView* self, QInputMethodEvent* param1);
    friend void Sonnet__ConfigView_QBaseInputMethodEvent(Sonnet::ConfigView* self, QInputMethodEvent* param1);
    friend bool Sonnet__ConfigView_FocusNextPrevChild(Sonnet::ConfigView* self, bool next);
    friend bool Sonnet__ConfigView_QBaseFocusNextPrevChild(Sonnet::ConfigView* self, bool next);
    friend void Sonnet__ConfigView_TimerEvent(Sonnet::ConfigView* self, QTimerEvent* event);
    friend void Sonnet__ConfigView_QBaseTimerEvent(Sonnet::ConfigView* self, QTimerEvent* event);
    friend void Sonnet__ConfigView_ChildEvent(Sonnet::ConfigView* self, QChildEvent* event);
    friend void Sonnet__ConfigView_QBaseChildEvent(Sonnet::ConfigView* self, QChildEvent* event);
    friend void Sonnet__ConfigView_CustomEvent(Sonnet::ConfigView* self, QEvent* event);
    friend void Sonnet__ConfigView_QBaseCustomEvent(Sonnet::ConfigView* self, QEvent* event);
    friend void Sonnet__ConfigView_ConnectNotify(Sonnet::ConfigView* self, const QMetaMethod* signal);
    friend void Sonnet__ConfigView_QBaseConnectNotify(Sonnet::ConfigView* self, const QMetaMethod* signal);
    friend void Sonnet__ConfigView_DisconnectNotify(Sonnet::ConfigView* self, const QMetaMethod* signal);
    friend void Sonnet__ConfigView_QBaseDisconnectNotify(Sonnet::ConfigView* self, const QMetaMethod* signal);
    friend void Sonnet__ConfigView_UpdateMicroFocus(Sonnet::ConfigView* self);
    friend void Sonnet__ConfigView_QBaseUpdateMicroFocus(Sonnet::ConfigView* self);
    friend void Sonnet__ConfigView_Create(Sonnet::ConfigView* self);
    friend void Sonnet__ConfigView_QBaseCreate(Sonnet::ConfigView* self);
    friend void Sonnet__ConfigView_Destroy(Sonnet::ConfigView* self);
    friend void Sonnet__ConfigView_QBaseDestroy(Sonnet::ConfigView* self);
    friend bool Sonnet__ConfigView_FocusNextChild(Sonnet::ConfigView* self);
    friend bool Sonnet__ConfigView_QBaseFocusNextChild(Sonnet::ConfigView* self);
    friend bool Sonnet__ConfigView_FocusPreviousChild(Sonnet::ConfigView* self);
    friend bool Sonnet__ConfigView_QBaseFocusPreviousChild(Sonnet::ConfigView* self);
    friend QObject* Sonnet__ConfigView_Sender(const Sonnet::ConfigView* self);
    friend QObject* Sonnet__ConfigView_QBaseSender(const Sonnet::ConfigView* self);
    friend int Sonnet__ConfigView_SenderSignalIndex(const Sonnet::ConfigView* self);
    friend int Sonnet__ConfigView_QBaseSenderSignalIndex(const Sonnet::ConfigView* self);
    friend int Sonnet__ConfigView_Receivers(const Sonnet::ConfigView* self, const char* signal);
    friend int Sonnet__ConfigView_QBaseReceivers(const Sonnet::ConfigView* self, const char* signal);
    friend bool Sonnet__ConfigView_IsSignalConnected(const Sonnet::ConfigView* self, const QMetaMethod* signal);
    friend bool Sonnet__ConfigView_QBaseIsSignalConnected(const Sonnet::ConfigView* self, const QMetaMethod* signal);
    friend double Sonnet__ConfigView_GetDecodedMetricF(const Sonnet::ConfigView* self, int metricA, int metricB);
    friend double Sonnet__ConfigView_QBaseGetDecodedMetricF(const Sonnet::ConfigView* self, int metricA, int metricB);
};

#endif
