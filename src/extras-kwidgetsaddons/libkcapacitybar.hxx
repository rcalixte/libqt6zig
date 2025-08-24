#pragma once
#ifndef SRC_EXTRAS_KWIDGETSADDONSC_LIBVIRTUALKCAPACITYBAR_H
#define SRC_EXTRAS_KWIDGETSADDONSC_LIBVIRTUALKCAPACITYBAR_H

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

// This class is a subclass of KCapacityBar so that we can call protected methods
class VirtualKCapacityBar final : public KCapacityBar {

  public:
    // Virtual class boolean flag
    bool isVirtualKCapacityBar = true;

    // Virtual class public types (including callbacks)
    using KCapacityBar_Metacall_Callback = int (*)(KCapacityBar*, int, int, void**);
    using KCapacityBar_MinimumSizeHint_Callback = QSize* (*)();
    using KCapacityBar_PaintEvent_Callback = void (*)(KCapacityBar*, QPaintEvent*);
    using KCapacityBar_ChangeEvent_Callback = void (*)(KCapacityBar*, QEvent*);
    using KCapacityBar_DevType_Callback = int (*)();
    using KCapacityBar_SetVisible_Callback = void (*)(KCapacityBar*, bool);
    using KCapacityBar_SizeHint_Callback = QSize* (*)();
    using KCapacityBar_HeightForWidth_Callback = int (*)(const KCapacityBar*, int);
    using KCapacityBar_HasHeightForWidth_Callback = bool (*)();
    using KCapacityBar_PaintEngine_Callback = QPaintEngine* (*)();
    using KCapacityBar_Event_Callback = bool (*)(KCapacityBar*, QEvent*);
    using KCapacityBar_MousePressEvent_Callback = void (*)(KCapacityBar*, QMouseEvent*);
    using KCapacityBar_MouseReleaseEvent_Callback = void (*)(KCapacityBar*, QMouseEvent*);
    using KCapacityBar_MouseDoubleClickEvent_Callback = void (*)(KCapacityBar*, QMouseEvent*);
    using KCapacityBar_MouseMoveEvent_Callback = void (*)(KCapacityBar*, QMouseEvent*);
    using KCapacityBar_WheelEvent_Callback = void (*)(KCapacityBar*, QWheelEvent*);
    using KCapacityBar_KeyPressEvent_Callback = void (*)(KCapacityBar*, QKeyEvent*);
    using KCapacityBar_KeyReleaseEvent_Callback = void (*)(KCapacityBar*, QKeyEvent*);
    using KCapacityBar_FocusInEvent_Callback = void (*)(KCapacityBar*, QFocusEvent*);
    using KCapacityBar_FocusOutEvent_Callback = void (*)(KCapacityBar*, QFocusEvent*);
    using KCapacityBar_EnterEvent_Callback = void (*)(KCapacityBar*, QEnterEvent*);
    using KCapacityBar_LeaveEvent_Callback = void (*)(KCapacityBar*, QEvent*);
    using KCapacityBar_MoveEvent_Callback = void (*)(KCapacityBar*, QMoveEvent*);
    using KCapacityBar_ResizeEvent_Callback = void (*)(KCapacityBar*, QResizeEvent*);
    using KCapacityBar_CloseEvent_Callback = void (*)(KCapacityBar*, QCloseEvent*);
    using KCapacityBar_ContextMenuEvent_Callback = void (*)(KCapacityBar*, QContextMenuEvent*);
    using KCapacityBar_TabletEvent_Callback = void (*)(KCapacityBar*, QTabletEvent*);
    using KCapacityBar_ActionEvent_Callback = void (*)(KCapacityBar*, QActionEvent*);
    using KCapacityBar_DragEnterEvent_Callback = void (*)(KCapacityBar*, QDragEnterEvent*);
    using KCapacityBar_DragMoveEvent_Callback = void (*)(KCapacityBar*, QDragMoveEvent*);
    using KCapacityBar_DragLeaveEvent_Callback = void (*)(KCapacityBar*, QDragLeaveEvent*);
    using KCapacityBar_DropEvent_Callback = void (*)(KCapacityBar*, QDropEvent*);
    using KCapacityBar_ShowEvent_Callback = void (*)(KCapacityBar*, QShowEvent*);
    using KCapacityBar_HideEvent_Callback = void (*)(KCapacityBar*, QHideEvent*);
    using KCapacityBar_NativeEvent_Callback = bool (*)(KCapacityBar*, libqt_string, void*, intptr_t*);
    using KCapacityBar_Metric_Callback = int (*)(const KCapacityBar*, int);
    using KCapacityBar_InitPainter_Callback = void (*)(const KCapacityBar*, QPainter*);
    using KCapacityBar_Redirected_Callback = QPaintDevice* (*)(const KCapacityBar*, QPoint*);
    using KCapacityBar_SharedPainter_Callback = QPainter* (*)();
    using KCapacityBar_InputMethodEvent_Callback = void (*)(KCapacityBar*, QInputMethodEvent*);
    using KCapacityBar_InputMethodQuery_Callback = QVariant* (*)(const KCapacityBar*, int);
    using KCapacityBar_FocusNextPrevChild_Callback = bool (*)(KCapacityBar*, bool);
    using KCapacityBar_EventFilter_Callback = bool (*)(KCapacityBar*, QObject*, QEvent*);
    using KCapacityBar_TimerEvent_Callback = void (*)(KCapacityBar*, QTimerEvent*);
    using KCapacityBar_ChildEvent_Callback = void (*)(KCapacityBar*, QChildEvent*);
    using KCapacityBar_CustomEvent_Callback = void (*)(KCapacityBar*, QEvent*);
    using KCapacityBar_ConnectNotify_Callback = void (*)(KCapacityBar*, QMetaMethod*);
    using KCapacityBar_DisconnectNotify_Callback = void (*)(KCapacityBar*, QMetaMethod*);
    using KCapacityBar_UpdateMicroFocus_Callback = void (*)();
    using KCapacityBar_Create_Callback = void (*)();
    using KCapacityBar_Destroy_Callback = void (*)();
    using KCapacityBar_FocusNextChild_Callback = bool (*)();
    using KCapacityBar_FocusPreviousChild_Callback = bool (*)();
    using KCapacityBar_Sender_Callback = QObject* (*)();
    using KCapacityBar_SenderSignalIndex_Callback = int (*)();
    using KCapacityBar_Receivers_Callback = int (*)(const KCapacityBar*, const char*);
    using KCapacityBar_IsSignalConnected_Callback = bool (*)(const KCapacityBar*, QMetaMethod*);
    using KCapacityBar_GetDecodedMetricF_Callback = double (*)(const KCapacityBar*, int, int);

  protected:
    // Instance callback storage
    KCapacityBar_Metacall_Callback kcapacitybar_metacall_callback = nullptr;
    KCapacityBar_MinimumSizeHint_Callback kcapacitybar_minimumsizehint_callback = nullptr;
    KCapacityBar_PaintEvent_Callback kcapacitybar_paintevent_callback = nullptr;
    KCapacityBar_ChangeEvent_Callback kcapacitybar_changeevent_callback = nullptr;
    KCapacityBar_DevType_Callback kcapacitybar_devtype_callback = nullptr;
    KCapacityBar_SetVisible_Callback kcapacitybar_setvisible_callback = nullptr;
    KCapacityBar_SizeHint_Callback kcapacitybar_sizehint_callback = nullptr;
    KCapacityBar_HeightForWidth_Callback kcapacitybar_heightforwidth_callback = nullptr;
    KCapacityBar_HasHeightForWidth_Callback kcapacitybar_hasheightforwidth_callback = nullptr;
    KCapacityBar_PaintEngine_Callback kcapacitybar_paintengine_callback = nullptr;
    KCapacityBar_Event_Callback kcapacitybar_event_callback = nullptr;
    KCapacityBar_MousePressEvent_Callback kcapacitybar_mousepressevent_callback = nullptr;
    KCapacityBar_MouseReleaseEvent_Callback kcapacitybar_mousereleaseevent_callback = nullptr;
    KCapacityBar_MouseDoubleClickEvent_Callback kcapacitybar_mousedoubleclickevent_callback = nullptr;
    KCapacityBar_MouseMoveEvent_Callback kcapacitybar_mousemoveevent_callback = nullptr;
    KCapacityBar_WheelEvent_Callback kcapacitybar_wheelevent_callback = nullptr;
    KCapacityBar_KeyPressEvent_Callback kcapacitybar_keypressevent_callback = nullptr;
    KCapacityBar_KeyReleaseEvent_Callback kcapacitybar_keyreleaseevent_callback = nullptr;
    KCapacityBar_FocusInEvent_Callback kcapacitybar_focusinevent_callback = nullptr;
    KCapacityBar_FocusOutEvent_Callback kcapacitybar_focusoutevent_callback = nullptr;
    KCapacityBar_EnterEvent_Callback kcapacitybar_enterevent_callback = nullptr;
    KCapacityBar_LeaveEvent_Callback kcapacitybar_leaveevent_callback = nullptr;
    KCapacityBar_MoveEvent_Callback kcapacitybar_moveevent_callback = nullptr;
    KCapacityBar_ResizeEvent_Callback kcapacitybar_resizeevent_callback = nullptr;
    KCapacityBar_CloseEvent_Callback kcapacitybar_closeevent_callback = nullptr;
    KCapacityBar_ContextMenuEvent_Callback kcapacitybar_contextmenuevent_callback = nullptr;
    KCapacityBar_TabletEvent_Callback kcapacitybar_tabletevent_callback = nullptr;
    KCapacityBar_ActionEvent_Callback kcapacitybar_actionevent_callback = nullptr;
    KCapacityBar_DragEnterEvent_Callback kcapacitybar_dragenterevent_callback = nullptr;
    KCapacityBar_DragMoveEvent_Callback kcapacitybar_dragmoveevent_callback = nullptr;
    KCapacityBar_DragLeaveEvent_Callback kcapacitybar_dragleaveevent_callback = nullptr;
    KCapacityBar_DropEvent_Callback kcapacitybar_dropevent_callback = nullptr;
    KCapacityBar_ShowEvent_Callback kcapacitybar_showevent_callback = nullptr;
    KCapacityBar_HideEvent_Callback kcapacitybar_hideevent_callback = nullptr;
    KCapacityBar_NativeEvent_Callback kcapacitybar_nativeevent_callback = nullptr;
    KCapacityBar_Metric_Callback kcapacitybar_metric_callback = nullptr;
    KCapacityBar_InitPainter_Callback kcapacitybar_initpainter_callback = nullptr;
    KCapacityBar_Redirected_Callback kcapacitybar_redirected_callback = nullptr;
    KCapacityBar_SharedPainter_Callback kcapacitybar_sharedpainter_callback = nullptr;
    KCapacityBar_InputMethodEvent_Callback kcapacitybar_inputmethodevent_callback = nullptr;
    KCapacityBar_InputMethodQuery_Callback kcapacitybar_inputmethodquery_callback = nullptr;
    KCapacityBar_FocusNextPrevChild_Callback kcapacitybar_focusnextprevchild_callback = nullptr;
    KCapacityBar_EventFilter_Callback kcapacitybar_eventfilter_callback = nullptr;
    KCapacityBar_TimerEvent_Callback kcapacitybar_timerevent_callback = nullptr;
    KCapacityBar_ChildEvent_Callback kcapacitybar_childevent_callback = nullptr;
    KCapacityBar_CustomEvent_Callback kcapacitybar_customevent_callback = nullptr;
    KCapacityBar_ConnectNotify_Callback kcapacitybar_connectnotify_callback = nullptr;
    KCapacityBar_DisconnectNotify_Callback kcapacitybar_disconnectnotify_callback = nullptr;
    KCapacityBar_UpdateMicroFocus_Callback kcapacitybar_updatemicrofocus_callback = nullptr;
    KCapacityBar_Create_Callback kcapacitybar_create_callback = nullptr;
    KCapacityBar_Destroy_Callback kcapacitybar_destroy_callback = nullptr;
    KCapacityBar_FocusNextChild_Callback kcapacitybar_focusnextchild_callback = nullptr;
    KCapacityBar_FocusPreviousChild_Callback kcapacitybar_focuspreviouschild_callback = nullptr;
    KCapacityBar_Sender_Callback kcapacitybar_sender_callback = nullptr;
    KCapacityBar_SenderSignalIndex_Callback kcapacitybar_sendersignalindex_callback = nullptr;
    KCapacityBar_Receivers_Callback kcapacitybar_receivers_callback = nullptr;
    KCapacityBar_IsSignalConnected_Callback kcapacitybar_issignalconnected_callback = nullptr;
    KCapacityBar_GetDecodedMetricF_Callback kcapacitybar_getdecodedmetricf_callback = nullptr;

    // Instance base flags
    mutable bool kcapacitybar_metacall_isbase = false;
    mutable bool kcapacitybar_minimumsizehint_isbase = false;
    mutable bool kcapacitybar_paintevent_isbase = false;
    mutable bool kcapacitybar_changeevent_isbase = false;
    mutable bool kcapacitybar_devtype_isbase = false;
    mutable bool kcapacitybar_setvisible_isbase = false;
    mutable bool kcapacitybar_sizehint_isbase = false;
    mutable bool kcapacitybar_heightforwidth_isbase = false;
    mutable bool kcapacitybar_hasheightforwidth_isbase = false;
    mutable bool kcapacitybar_paintengine_isbase = false;
    mutable bool kcapacitybar_event_isbase = false;
    mutable bool kcapacitybar_mousepressevent_isbase = false;
    mutable bool kcapacitybar_mousereleaseevent_isbase = false;
    mutable bool kcapacitybar_mousedoubleclickevent_isbase = false;
    mutable bool kcapacitybar_mousemoveevent_isbase = false;
    mutable bool kcapacitybar_wheelevent_isbase = false;
    mutable bool kcapacitybar_keypressevent_isbase = false;
    mutable bool kcapacitybar_keyreleaseevent_isbase = false;
    mutable bool kcapacitybar_focusinevent_isbase = false;
    mutable bool kcapacitybar_focusoutevent_isbase = false;
    mutable bool kcapacitybar_enterevent_isbase = false;
    mutable bool kcapacitybar_leaveevent_isbase = false;
    mutable bool kcapacitybar_moveevent_isbase = false;
    mutable bool kcapacitybar_resizeevent_isbase = false;
    mutable bool kcapacitybar_closeevent_isbase = false;
    mutable bool kcapacitybar_contextmenuevent_isbase = false;
    mutable bool kcapacitybar_tabletevent_isbase = false;
    mutable bool kcapacitybar_actionevent_isbase = false;
    mutable bool kcapacitybar_dragenterevent_isbase = false;
    mutable bool kcapacitybar_dragmoveevent_isbase = false;
    mutable bool kcapacitybar_dragleaveevent_isbase = false;
    mutable bool kcapacitybar_dropevent_isbase = false;
    mutable bool kcapacitybar_showevent_isbase = false;
    mutable bool kcapacitybar_hideevent_isbase = false;
    mutable bool kcapacitybar_nativeevent_isbase = false;
    mutable bool kcapacitybar_metric_isbase = false;
    mutable bool kcapacitybar_initpainter_isbase = false;
    mutable bool kcapacitybar_redirected_isbase = false;
    mutable bool kcapacitybar_sharedpainter_isbase = false;
    mutable bool kcapacitybar_inputmethodevent_isbase = false;
    mutable bool kcapacitybar_inputmethodquery_isbase = false;
    mutable bool kcapacitybar_focusnextprevchild_isbase = false;
    mutable bool kcapacitybar_eventfilter_isbase = false;
    mutable bool kcapacitybar_timerevent_isbase = false;
    mutable bool kcapacitybar_childevent_isbase = false;
    mutable bool kcapacitybar_customevent_isbase = false;
    mutable bool kcapacitybar_connectnotify_isbase = false;
    mutable bool kcapacitybar_disconnectnotify_isbase = false;
    mutable bool kcapacitybar_updatemicrofocus_isbase = false;
    mutable bool kcapacitybar_create_isbase = false;
    mutable bool kcapacitybar_destroy_isbase = false;
    mutable bool kcapacitybar_focusnextchild_isbase = false;
    mutable bool kcapacitybar_focuspreviouschild_isbase = false;
    mutable bool kcapacitybar_sender_isbase = false;
    mutable bool kcapacitybar_sendersignalindex_isbase = false;
    mutable bool kcapacitybar_receivers_isbase = false;
    mutable bool kcapacitybar_issignalconnected_isbase = false;
    mutable bool kcapacitybar_getdecodedmetricf_isbase = false;

  public:
    VirtualKCapacityBar(QWidget* parent) : KCapacityBar(parent) {};
    VirtualKCapacityBar() : KCapacityBar() {};
    VirtualKCapacityBar(KCapacityBar::DrawTextMode drawTextMode) : KCapacityBar(drawTextMode) {};
    VirtualKCapacityBar(KCapacityBar::DrawTextMode drawTextMode, QWidget* parent) : KCapacityBar(drawTextMode, parent) {};

    ~VirtualKCapacityBar() {
        kcapacitybar_metacall_callback = nullptr;
        kcapacitybar_minimumsizehint_callback = nullptr;
        kcapacitybar_paintevent_callback = nullptr;
        kcapacitybar_changeevent_callback = nullptr;
        kcapacitybar_devtype_callback = nullptr;
        kcapacitybar_setvisible_callback = nullptr;
        kcapacitybar_sizehint_callback = nullptr;
        kcapacitybar_heightforwidth_callback = nullptr;
        kcapacitybar_hasheightforwidth_callback = nullptr;
        kcapacitybar_paintengine_callback = nullptr;
        kcapacitybar_event_callback = nullptr;
        kcapacitybar_mousepressevent_callback = nullptr;
        kcapacitybar_mousereleaseevent_callback = nullptr;
        kcapacitybar_mousedoubleclickevent_callback = nullptr;
        kcapacitybar_mousemoveevent_callback = nullptr;
        kcapacitybar_wheelevent_callback = nullptr;
        kcapacitybar_keypressevent_callback = nullptr;
        kcapacitybar_keyreleaseevent_callback = nullptr;
        kcapacitybar_focusinevent_callback = nullptr;
        kcapacitybar_focusoutevent_callback = nullptr;
        kcapacitybar_enterevent_callback = nullptr;
        kcapacitybar_leaveevent_callback = nullptr;
        kcapacitybar_moveevent_callback = nullptr;
        kcapacitybar_resizeevent_callback = nullptr;
        kcapacitybar_closeevent_callback = nullptr;
        kcapacitybar_contextmenuevent_callback = nullptr;
        kcapacitybar_tabletevent_callback = nullptr;
        kcapacitybar_actionevent_callback = nullptr;
        kcapacitybar_dragenterevent_callback = nullptr;
        kcapacitybar_dragmoveevent_callback = nullptr;
        kcapacitybar_dragleaveevent_callback = nullptr;
        kcapacitybar_dropevent_callback = nullptr;
        kcapacitybar_showevent_callback = nullptr;
        kcapacitybar_hideevent_callback = nullptr;
        kcapacitybar_nativeevent_callback = nullptr;
        kcapacitybar_metric_callback = nullptr;
        kcapacitybar_initpainter_callback = nullptr;
        kcapacitybar_redirected_callback = nullptr;
        kcapacitybar_sharedpainter_callback = nullptr;
        kcapacitybar_inputmethodevent_callback = nullptr;
        kcapacitybar_inputmethodquery_callback = nullptr;
        kcapacitybar_focusnextprevchild_callback = nullptr;
        kcapacitybar_eventfilter_callback = nullptr;
        kcapacitybar_timerevent_callback = nullptr;
        kcapacitybar_childevent_callback = nullptr;
        kcapacitybar_customevent_callback = nullptr;
        kcapacitybar_connectnotify_callback = nullptr;
        kcapacitybar_disconnectnotify_callback = nullptr;
        kcapacitybar_updatemicrofocus_callback = nullptr;
        kcapacitybar_create_callback = nullptr;
        kcapacitybar_destroy_callback = nullptr;
        kcapacitybar_focusnextchild_callback = nullptr;
        kcapacitybar_focuspreviouschild_callback = nullptr;
        kcapacitybar_sender_callback = nullptr;
        kcapacitybar_sendersignalindex_callback = nullptr;
        kcapacitybar_receivers_callback = nullptr;
        kcapacitybar_issignalconnected_callback = nullptr;
        kcapacitybar_getdecodedmetricf_callback = nullptr;
    }

    // Callback setters
    inline void setKCapacityBar_Metacall_Callback(KCapacityBar_Metacall_Callback cb) { kcapacitybar_metacall_callback = cb; }
    inline void setKCapacityBar_MinimumSizeHint_Callback(KCapacityBar_MinimumSizeHint_Callback cb) { kcapacitybar_minimumsizehint_callback = cb; }
    inline void setKCapacityBar_PaintEvent_Callback(KCapacityBar_PaintEvent_Callback cb) { kcapacitybar_paintevent_callback = cb; }
    inline void setKCapacityBar_ChangeEvent_Callback(KCapacityBar_ChangeEvent_Callback cb) { kcapacitybar_changeevent_callback = cb; }
    inline void setKCapacityBar_DevType_Callback(KCapacityBar_DevType_Callback cb) { kcapacitybar_devtype_callback = cb; }
    inline void setKCapacityBar_SetVisible_Callback(KCapacityBar_SetVisible_Callback cb) { kcapacitybar_setvisible_callback = cb; }
    inline void setKCapacityBar_SizeHint_Callback(KCapacityBar_SizeHint_Callback cb) { kcapacitybar_sizehint_callback = cb; }
    inline void setKCapacityBar_HeightForWidth_Callback(KCapacityBar_HeightForWidth_Callback cb) { kcapacitybar_heightforwidth_callback = cb; }
    inline void setKCapacityBar_HasHeightForWidth_Callback(KCapacityBar_HasHeightForWidth_Callback cb) { kcapacitybar_hasheightforwidth_callback = cb; }
    inline void setKCapacityBar_PaintEngine_Callback(KCapacityBar_PaintEngine_Callback cb) { kcapacitybar_paintengine_callback = cb; }
    inline void setKCapacityBar_Event_Callback(KCapacityBar_Event_Callback cb) { kcapacitybar_event_callback = cb; }
    inline void setKCapacityBar_MousePressEvent_Callback(KCapacityBar_MousePressEvent_Callback cb) { kcapacitybar_mousepressevent_callback = cb; }
    inline void setKCapacityBar_MouseReleaseEvent_Callback(KCapacityBar_MouseReleaseEvent_Callback cb) { kcapacitybar_mousereleaseevent_callback = cb; }
    inline void setKCapacityBar_MouseDoubleClickEvent_Callback(KCapacityBar_MouseDoubleClickEvent_Callback cb) { kcapacitybar_mousedoubleclickevent_callback = cb; }
    inline void setKCapacityBar_MouseMoveEvent_Callback(KCapacityBar_MouseMoveEvent_Callback cb) { kcapacitybar_mousemoveevent_callback = cb; }
    inline void setKCapacityBar_WheelEvent_Callback(KCapacityBar_WheelEvent_Callback cb) { kcapacitybar_wheelevent_callback = cb; }
    inline void setKCapacityBar_KeyPressEvent_Callback(KCapacityBar_KeyPressEvent_Callback cb) { kcapacitybar_keypressevent_callback = cb; }
    inline void setKCapacityBar_KeyReleaseEvent_Callback(KCapacityBar_KeyReleaseEvent_Callback cb) { kcapacitybar_keyreleaseevent_callback = cb; }
    inline void setKCapacityBar_FocusInEvent_Callback(KCapacityBar_FocusInEvent_Callback cb) { kcapacitybar_focusinevent_callback = cb; }
    inline void setKCapacityBar_FocusOutEvent_Callback(KCapacityBar_FocusOutEvent_Callback cb) { kcapacitybar_focusoutevent_callback = cb; }
    inline void setKCapacityBar_EnterEvent_Callback(KCapacityBar_EnterEvent_Callback cb) { kcapacitybar_enterevent_callback = cb; }
    inline void setKCapacityBar_LeaveEvent_Callback(KCapacityBar_LeaveEvent_Callback cb) { kcapacitybar_leaveevent_callback = cb; }
    inline void setKCapacityBar_MoveEvent_Callback(KCapacityBar_MoveEvent_Callback cb) { kcapacitybar_moveevent_callback = cb; }
    inline void setKCapacityBar_ResizeEvent_Callback(KCapacityBar_ResizeEvent_Callback cb) { kcapacitybar_resizeevent_callback = cb; }
    inline void setKCapacityBar_CloseEvent_Callback(KCapacityBar_CloseEvent_Callback cb) { kcapacitybar_closeevent_callback = cb; }
    inline void setKCapacityBar_ContextMenuEvent_Callback(KCapacityBar_ContextMenuEvent_Callback cb) { kcapacitybar_contextmenuevent_callback = cb; }
    inline void setKCapacityBar_TabletEvent_Callback(KCapacityBar_TabletEvent_Callback cb) { kcapacitybar_tabletevent_callback = cb; }
    inline void setKCapacityBar_ActionEvent_Callback(KCapacityBar_ActionEvent_Callback cb) { kcapacitybar_actionevent_callback = cb; }
    inline void setKCapacityBar_DragEnterEvent_Callback(KCapacityBar_DragEnterEvent_Callback cb) { kcapacitybar_dragenterevent_callback = cb; }
    inline void setKCapacityBar_DragMoveEvent_Callback(KCapacityBar_DragMoveEvent_Callback cb) { kcapacitybar_dragmoveevent_callback = cb; }
    inline void setKCapacityBar_DragLeaveEvent_Callback(KCapacityBar_DragLeaveEvent_Callback cb) { kcapacitybar_dragleaveevent_callback = cb; }
    inline void setKCapacityBar_DropEvent_Callback(KCapacityBar_DropEvent_Callback cb) { kcapacitybar_dropevent_callback = cb; }
    inline void setKCapacityBar_ShowEvent_Callback(KCapacityBar_ShowEvent_Callback cb) { kcapacitybar_showevent_callback = cb; }
    inline void setKCapacityBar_HideEvent_Callback(KCapacityBar_HideEvent_Callback cb) { kcapacitybar_hideevent_callback = cb; }
    inline void setKCapacityBar_NativeEvent_Callback(KCapacityBar_NativeEvent_Callback cb) { kcapacitybar_nativeevent_callback = cb; }
    inline void setKCapacityBar_Metric_Callback(KCapacityBar_Metric_Callback cb) { kcapacitybar_metric_callback = cb; }
    inline void setKCapacityBar_InitPainter_Callback(KCapacityBar_InitPainter_Callback cb) { kcapacitybar_initpainter_callback = cb; }
    inline void setKCapacityBar_Redirected_Callback(KCapacityBar_Redirected_Callback cb) { kcapacitybar_redirected_callback = cb; }
    inline void setKCapacityBar_SharedPainter_Callback(KCapacityBar_SharedPainter_Callback cb) { kcapacitybar_sharedpainter_callback = cb; }
    inline void setKCapacityBar_InputMethodEvent_Callback(KCapacityBar_InputMethodEvent_Callback cb) { kcapacitybar_inputmethodevent_callback = cb; }
    inline void setKCapacityBar_InputMethodQuery_Callback(KCapacityBar_InputMethodQuery_Callback cb) { kcapacitybar_inputmethodquery_callback = cb; }
    inline void setKCapacityBar_FocusNextPrevChild_Callback(KCapacityBar_FocusNextPrevChild_Callback cb) { kcapacitybar_focusnextprevchild_callback = cb; }
    inline void setKCapacityBar_EventFilter_Callback(KCapacityBar_EventFilter_Callback cb) { kcapacitybar_eventfilter_callback = cb; }
    inline void setKCapacityBar_TimerEvent_Callback(KCapacityBar_TimerEvent_Callback cb) { kcapacitybar_timerevent_callback = cb; }
    inline void setKCapacityBar_ChildEvent_Callback(KCapacityBar_ChildEvent_Callback cb) { kcapacitybar_childevent_callback = cb; }
    inline void setKCapacityBar_CustomEvent_Callback(KCapacityBar_CustomEvent_Callback cb) { kcapacitybar_customevent_callback = cb; }
    inline void setKCapacityBar_ConnectNotify_Callback(KCapacityBar_ConnectNotify_Callback cb) { kcapacitybar_connectnotify_callback = cb; }
    inline void setKCapacityBar_DisconnectNotify_Callback(KCapacityBar_DisconnectNotify_Callback cb) { kcapacitybar_disconnectnotify_callback = cb; }
    inline void setKCapacityBar_UpdateMicroFocus_Callback(KCapacityBar_UpdateMicroFocus_Callback cb) { kcapacitybar_updatemicrofocus_callback = cb; }
    inline void setKCapacityBar_Create_Callback(KCapacityBar_Create_Callback cb) { kcapacitybar_create_callback = cb; }
    inline void setKCapacityBar_Destroy_Callback(KCapacityBar_Destroy_Callback cb) { kcapacitybar_destroy_callback = cb; }
    inline void setKCapacityBar_FocusNextChild_Callback(KCapacityBar_FocusNextChild_Callback cb) { kcapacitybar_focusnextchild_callback = cb; }
    inline void setKCapacityBar_FocusPreviousChild_Callback(KCapacityBar_FocusPreviousChild_Callback cb) { kcapacitybar_focuspreviouschild_callback = cb; }
    inline void setKCapacityBar_Sender_Callback(KCapacityBar_Sender_Callback cb) { kcapacitybar_sender_callback = cb; }
    inline void setKCapacityBar_SenderSignalIndex_Callback(KCapacityBar_SenderSignalIndex_Callback cb) { kcapacitybar_sendersignalindex_callback = cb; }
    inline void setKCapacityBar_Receivers_Callback(KCapacityBar_Receivers_Callback cb) { kcapacitybar_receivers_callback = cb; }
    inline void setKCapacityBar_IsSignalConnected_Callback(KCapacityBar_IsSignalConnected_Callback cb) { kcapacitybar_issignalconnected_callback = cb; }
    inline void setKCapacityBar_GetDecodedMetricF_Callback(KCapacityBar_GetDecodedMetricF_Callback cb) { kcapacitybar_getdecodedmetricf_callback = cb; }

    // Base flag setters
    inline void setKCapacityBar_Metacall_IsBase(bool value) const { kcapacitybar_metacall_isbase = value; }
    inline void setKCapacityBar_MinimumSizeHint_IsBase(bool value) const { kcapacitybar_minimumsizehint_isbase = value; }
    inline void setKCapacityBar_PaintEvent_IsBase(bool value) const { kcapacitybar_paintevent_isbase = value; }
    inline void setKCapacityBar_ChangeEvent_IsBase(bool value) const { kcapacitybar_changeevent_isbase = value; }
    inline void setKCapacityBar_DevType_IsBase(bool value) const { kcapacitybar_devtype_isbase = value; }
    inline void setKCapacityBar_SetVisible_IsBase(bool value) const { kcapacitybar_setvisible_isbase = value; }
    inline void setKCapacityBar_SizeHint_IsBase(bool value) const { kcapacitybar_sizehint_isbase = value; }
    inline void setKCapacityBar_HeightForWidth_IsBase(bool value) const { kcapacitybar_heightforwidth_isbase = value; }
    inline void setKCapacityBar_HasHeightForWidth_IsBase(bool value) const { kcapacitybar_hasheightforwidth_isbase = value; }
    inline void setKCapacityBar_PaintEngine_IsBase(bool value) const { kcapacitybar_paintengine_isbase = value; }
    inline void setKCapacityBar_Event_IsBase(bool value) const { kcapacitybar_event_isbase = value; }
    inline void setKCapacityBar_MousePressEvent_IsBase(bool value) const { kcapacitybar_mousepressevent_isbase = value; }
    inline void setKCapacityBar_MouseReleaseEvent_IsBase(bool value) const { kcapacitybar_mousereleaseevent_isbase = value; }
    inline void setKCapacityBar_MouseDoubleClickEvent_IsBase(bool value) const { kcapacitybar_mousedoubleclickevent_isbase = value; }
    inline void setKCapacityBar_MouseMoveEvent_IsBase(bool value) const { kcapacitybar_mousemoveevent_isbase = value; }
    inline void setKCapacityBar_WheelEvent_IsBase(bool value) const { kcapacitybar_wheelevent_isbase = value; }
    inline void setKCapacityBar_KeyPressEvent_IsBase(bool value) const { kcapacitybar_keypressevent_isbase = value; }
    inline void setKCapacityBar_KeyReleaseEvent_IsBase(bool value) const { kcapacitybar_keyreleaseevent_isbase = value; }
    inline void setKCapacityBar_FocusInEvent_IsBase(bool value) const { kcapacitybar_focusinevent_isbase = value; }
    inline void setKCapacityBar_FocusOutEvent_IsBase(bool value) const { kcapacitybar_focusoutevent_isbase = value; }
    inline void setKCapacityBar_EnterEvent_IsBase(bool value) const { kcapacitybar_enterevent_isbase = value; }
    inline void setKCapacityBar_LeaveEvent_IsBase(bool value) const { kcapacitybar_leaveevent_isbase = value; }
    inline void setKCapacityBar_MoveEvent_IsBase(bool value) const { kcapacitybar_moveevent_isbase = value; }
    inline void setKCapacityBar_ResizeEvent_IsBase(bool value) const { kcapacitybar_resizeevent_isbase = value; }
    inline void setKCapacityBar_CloseEvent_IsBase(bool value) const { kcapacitybar_closeevent_isbase = value; }
    inline void setKCapacityBar_ContextMenuEvent_IsBase(bool value) const { kcapacitybar_contextmenuevent_isbase = value; }
    inline void setKCapacityBar_TabletEvent_IsBase(bool value) const { kcapacitybar_tabletevent_isbase = value; }
    inline void setKCapacityBar_ActionEvent_IsBase(bool value) const { kcapacitybar_actionevent_isbase = value; }
    inline void setKCapacityBar_DragEnterEvent_IsBase(bool value) const { kcapacitybar_dragenterevent_isbase = value; }
    inline void setKCapacityBar_DragMoveEvent_IsBase(bool value) const { kcapacitybar_dragmoveevent_isbase = value; }
    inline void setKCapacityBar_DragLeaveEvent_IsBase(bool value) const { kcapacitybar_dragleaveevent_isbase = value; }
    inline void setKCapacityBar_DropEvent_IsBase(bool value) const { kcapacitybar_dropevent_isbase = value; }
    inline void setKCapacityBar_ShowEvent_IsBase(bool value) const { kcapacitybar_showevent_isbase = value; }
    inline void setKCapacityBar_HideEvent_IsBase(bool value) const { kcapacitybar_hideevent_isbase = value; }
    inline void setKCapacityBar_NativeEvent_IsBase(bool value) const { kcapacitybar_nativeevent_isbase = value; }
    inline void setKCapacityBar_Metric_IsBase(bool value) const { kcapacitybar_metric_isbase = value; }
    inline void setKCapacityBar_InitPainter_IsBase(bool value) const { kcapacitybar_initpainter_isbase = value; }
    inline void setKCapacityBar_Redirected_IsBase(bool value) const { kcapacitybar_redirected_isbase = value; }
    inline void setKCapacityBar_SharedPainter_IsBase(bool value) const { kcapacitybar_sharedpainter_isbase = value; }
    inline void setKCapacityBar_InputMethodEvent_IsBase(bool value) const { kcapacitybar_inputmethodevent_isbase = value; }
    inline void setKCapacityBar_InputMethodQuery_IsBase(bool value) const { kcapacitybar_inputmethodquery_isbase = value; }
    inline void setKCapacityBar_FocusNextPrevChild_IsBase(bool value) const { kcapacitybar_focusnextprevchild_isbase = value; }
    inline void setKCapacityBar_EventFilter_IsBase(bool value) const { kcapacitybar_eventfilter_isbase = value; }
    inline void setKCapacityBar_TimerEvent_IsBase(bool value) const { kcapacitybar_timerevent_isbase = value; }
    inline void setKCapacityBar_ChildEvent_IsBase(bool value) const { kcapacitybar_childevent_isbase = value; }
    inline void setKCapacityBar_CustomEvent_IsBase(bool value) const { kcapacitybar_customevent_isbase = value; }
    inline void setKCapacityBar_ConnectNotify_IsBase(bool value) const { kcapacitybar_connectnotify_isbase = value; }
    inline void setKCapacityBar_DisconnectNotify_IsBase(bool value) const { kcapacitybar_disconnectnotify_isbase = value; }
    inline void setKCapacityBar_UpdateMicroFocus_IsBase(bool value) const { kcapacitybar_updatemicrofocus_isbase = value; }
    inline void setKCapacityBar_Create_IsBase(bool value) const { kcapacitybar_create_isbase = value; }
    inline void setKCapacityBar_Destroy_IsBase(bool value) const { kcapacitybar_destroy_isbase = value; }
    inline void setKCapacityBar_FocusNextChild_IsBase(bool value) const { kcapacitybar_focusnextchild_isbase = value; }
    inline void setKCapacityBar_FocusPreviousChild_IsBase(bool value) const { kcapacitybar_focuspreviouschild_isbase = value; }
    inline void setKCapacityBar_Sender_IsBase(bool value) const { kcapacitybar_sender_isbase = value; }
    inline void setKCapacityBar_SenderSignalIndex_IsBase(bool value) const { kcapacitybar_sendersignalindex_isbase = value; }
    inline void setKCapacityBar_Receivers_IsBase(bool value) const { kcapacitybar_receivers_isbase = value; }
    inline void setKCapacityBar_IsSignalConnected_IsBase(bool value) const { kcapacitybar_issignalconnected_isbase = value; }
    inline void setKCapacityBar_GetDecodedMetricF_IsBase(bool value) const { kcapacitybar_getdecodedmetricf_isbase = value; }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (kcapacitybar_metacall_isbase) {
            kcapacitybar_metacall_isbase = false;
            return KCapacityBar::qt_metacall(param1, param2, param3);
        } else if (kcapacitybar_metacall_callback != nullptr) {
            int cbval1 = static_cast<int>(param1);
            int cbval2 = param2;
            void** cbval3 = param3;

            int callback_ret = kcapacitybar_metacall_callback(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        } else {
            return KCapacityBar::qt_metacall(param1, param2, param3);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QSize minimumSizeHint() const override {
        if (kcapacitybar_minimumsizehint_isbase) {
            kcapacitybar_minimumsizehint_isbase = false;
            return KCapacityBar::minimumSizeHint();
        } else if (kcapacitybar_minimumsizehint_callback != nullptr) {
            QSize* callback_ret = kcapacitybar_minimumsizehint_callback();
            return *callback_ret;
        } else {
            return KCapacityBar::minimumSizeHint();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void paintEvent(QPaintEvent* event) override {
        if (kcapacitybar_paintevent_isbase) {
            kcapacitybar_paintevent_isbase = false;
            KCapacityBar::paintEvent(event);
        } else if (kcapacitybar_paintevent_callback != nullptr) {
            QPaintEvent* cbval1 = event;

            kcapacitybar_paintevent_callback(this, cbval1);
        } else {
            KCapacityBar::paintEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void changeEvent(QEvent* event) override {
        if (kcapacitybar_changeevent_isbase) {
            kcapacitybar_changeevent_isbase = false;
            KCapacityBar::changeEvent(event);
        } else if (kcapacitybar_changeevent_callback != nullptr) {
            QEvent* cbval1 = event;

            kcapacitybar_changeevent_callback(this, cbval1);
        } else {
            KCapacityBar::changeEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual int devType() const override {
        if (kcapacitybar_devtype_isbase) {
            kcapacitybar_devtype_isbase = false;
            return KCapacityBar::devType();
        } else if (kcapacitybar_devtype_callback != nullptr) {
            int callback_ret = kcapacitybar_devtype_callback();
            return static_cast<int>(callback_ret);
        } else {
            return KCapacityBar::devType();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void setVisible(bool visible) override {
        if (kcapacitybar_setvisible_isbase) {
            kcapacitybar_setvisible_isbase = false;
            KCapacityBar::setVisible(visible);
        } else if (kcapacitybar_setvisible_callback != nullptr) {
            bool cbval1 = visible;

            kcapacitybar_setvisible_callback(this, cbval1);
        } else {
            KCapacityBar::setVisible(visible);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QSize sizeHint() const override {
        if (kcapacitybar_sizehint_isbase) {
            kcapacitybar_sizehint_isbase = false;
            return KCapacityBar::sizeHint();
        } else if (kcapacitybar_sizehint_callback != nullptr) {
            QSize* callback_ret = kcapacitybar_sizehint_callback();
            return *callback_ret;
        } else {
            return KCapacityBar::sizeHint();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual int heightForWidth(int param1) const override {
        if (kcapacitybar_heightforwidth_isbase) {
            kcapacitybar_heightforwidth_isbase = false;
            return KCapacityBar::heightForWidth(param1);
        } else if (kcapacitybar_heightforwidth_callback != nullptr) {
            int cbval1 = param1;

            int callback_ret = kcapacitybar_heightforwidth_callback(this, cbval1);
            return static_cast<int>(callback_ret);
        } else {
            return KCapacityBar::heightForWidth(param1);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool hasHeightForWidth() const override {
        if (kcapacitybar_hasheightforwidth_isbase) {
            kcapacitybar_hasheightforwidth_isbase = false;
            return KCapacityBar::hasHeightForWidth();
        } else if (kcapacitybar_hasheightforwidth_callback != nullptr) {
            bool callback_ret = kcapacitybar_hasheightforwidth_callback();
            return callback_ret;
        } else {
            return KCapacityBar::hasHeightForWidth();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QPaintEngine* paintEngine() const override {
        if (kcapacitybar_paintengine_isbase) {
            kcapacitybar_paintengine_isbase = false;
            return KCapacityBar::paintEngine();
        } else if (kcapacitybar_paintengine_callback != nullptr) {
            QPaintEngine* callback_ret = kcapacitybar_paintengine_callback();
            return callback_ret;
        } else {
            return KCapacityBar::paintEngine();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* event) override {
        if (kcapacitybar_event_isbase) {
            kcapacitybar_event_isbase = false;
            return KCapacityBar::event(event);
        } else if (kcapacitybar_event_callback != nullptr) {
            QEvent* cbval1 = event;

            bool callback_ret = kcapacitybar_event_callback(this, cbval1);
            return callback_ret;
        } else {
            return KCapacityBar::event(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void mousePressEvent(QMouseEvent* event) override {
        if (kcapacitybar_mousepressevent_isbase) {
            kcapacitybar_mousepressevent_isbase = false;
            KCapacityBar::mousePressEvent(event);
        } else if (kcapacitybar_mousepressevent_callback != nullptr) {
            QMouseEvent* cbval1 = event;

            kcapacitybar_mousepressevent_callback(this, cbval1);
        } else {
            KCapacityBar::mousePressEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseReleaseEvent(QMouseEvent* event) override {
        if (kcapacitybar_mousereleaseevent_isbase) {
            kcapacitybar_mousereleaseevent_isbase = false;
            KCapacityBar::mouseReleaseEvent(event);
        } else if (kcapacitybar_mousereleaseevent_callback != nullptr) {
            QMouseEvent* cbval1 = event;

            kcapacitybar_mousereleaseevent_callback(this, cbval1);
        } else {
            KCapacityBar::mouseReleaseEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseDoubleClickEvent(QMouseEvent* event) override {
        if (kcapacitybar_mousedoubleclickevent_isbase) {
            kcapacitybar_mousedoubleclickevent_isbase = false;
            KCapacityBar::mouseDoubleClickEvent(event);
        } else if (kcapacitybar_mousedoubleclickevent_callback != nullptr) {
            QMouseEvent* cbval1 = event;

            kcapacitybar_mousedoubleclickevent_callback(this, cbval1);
        } else {
            KCapacityBar::mouseDoubleClickEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseMoveEvent(QMouseEvent* event) override {
        if (kcapacitybar_mousemoveevent_isbase) {
            kcapacitybar_mousemoveevent_isbase = false;
            KCapacityBar::mouseMoveEvent(event);
        } else if (kcapacitybar_mousemoveevent_callback != nullptr) {
            QMouseEvent* cbval1 = event;

            kcapacitybar_mousemoveevent_callback(this, cbval1);
        } else {
            KCapacityBar::mouseMoveEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void wheelEvent(QWheelEvent* event) override {
        if (kcapacitybar_wheelevent_isbase) {
            kcapacitybar_wheelevent_isbase = false;
            KCapacityBar::wheelEvent(event);
        } else if (kcapacitybar_wheelevent_callback != nullptr) {
            QWheelEvent* cbval1 = event;

            kcapacitybar_wheelevent_callback(this, cbval1);
        } else {
            KCapacityBar::wheelEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void keyPressEvent(QKeyEvent* event) override {
        if (kcapacitybar_keypressevent_isbase) {
            kcapacitybar_keypressevent_isbase = false;
            KCapacityBar::keyPressEvent(event);
        } else if (kcapacitybar_keypressevent_callback != nullptr) {
            QKeyEvent* cbval1 = event;

            kcapacitybar_keypressevent_callback(this, cbval1);
        } else {
            KCapacityBar::keyPressEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void keyReleaseEvent(QKeyEvent* event) override {
        if (kcapacitybar_keyreleaseevent_isbase) {
            kcapacitybar_keyreleaseevent_isbase = false;
            KCapacityBar::keyReleaseEvent(event);
        } else if (kcapacitybar_keyreleaseevent_callback != nullptr) {
            QKeyEvent* cbval1 = event;

            kcapacitybar_keyreleaseevent_callback(this, cbval1);
        } else {
            KCapacityBar::keyReleaseEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void focusInEvent(QFocusEvent* event) override {
        if (kcapacitybar_focusinevent_isbase) {
            kcapacitybar_focusinevent_isbase = false;
            KCapacityBar::focusInEvent(event);
        } else if (kcapacitybar_focusinevent_callback != nullptr) {
            QFocusEvent* cbval1 = event;

            kcapacitybar_focusinevent_callback(this, cbval1);
        } else {
            KCapacityBar::focusInEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void focusOutEvent(QFocusEvent* event) override {
        if (kcapacitybar_focusoutevent_isbase) {
            kcapacitybar_focusoutevent_isbase = false;
            KCapacityBar::focusOutEvent(event);
        } else if (kcapacitybar_focusoutevent_callback != nullptr) {
            QFocusEvent* cbval1 = event;

            kcapacitybar_focusoutevent_callback(this, cbval1);
        } else {
            KCapacityBar::focusOutEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void enterEvent(QEnterEvent* event) override {
        if (kcapacitybar_enterevent_isbase) {
            kcapacitybar_enterevent_isbase = false;
            KCapacityBar::enterEvent(event);
        } else if (kcapacitybar_enterevent_callback != nullptr) {
            QEnterEvent* cbval1 = event;

            kcapacitybar_enterevent_callback(this, cbval1);
        } else {
            KCapacityBar::enterEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void leaveEvent(QEvent* event) override {
        if (kcapacitybar_leaveevent_isbase) {
            kcapacitybar_leaveevent_isbase = false;
            KCapacityBar::leaveEvent(event);
        } else if (kcapacitybar_leaveevent_callback != nullptr) {
            QEvent* cbval1 = event;

            kcapacitybar_leaveevent_callback(this, cbval1);
        } else {
            KCapacityBar::leaveEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void moveEvent(QMoveEvent* event) override {
        if (kcapacitybar_moveevent_isbase) {
            kcapacitybar_moveevent_isbase = false;
            KCapacityBar::moveEvent(event);
        } else if (kcapacitybar_moveevent_callback != nullptr) {
            QMoveEvent* cbval1 = event;

            kcapacitybar_moveevent_callback(this, cbval1);
        } else {
            KCapacityBar::moveEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void resizeEvent(QResizeEvent* event) override {
        if (kcapacitybar_resizeevent_isbase) {
            kcapacitybar_resizeevent_isbase = false;
            KCapacityBar::resizeEvent(event);
        } else if (kcapacitybar_resizeevent_callback != nullptr) {
            QResizeEvent* cbval1 = event;

            kcapacitybar_resizeevent_callback(this, cbval1);
        } else {
            KCapacityBar::resizeEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void closeEvent(QCloseEvent* event) override {
        if (kcapacitybar_closeevent_isbase) {
            kcapacitybar_closeevent_isbase = false;
            KCapacityBar::closeEvent(event);
        } else if (kcapacitybar_closeevent_callback != nullptr) {
            QCloseEvent* cbval1 = event;

            kcapacitybar_closeevent_callback(this, cbval1);
        } else {
            KCapacityBar::closeEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void contextMenuEvent(QContextMenuEvent* event) override {
        if (kcapacitybar_contextmenuevent_isbase) {
            kcapacitybar_contextmenuevent_isbase = false;
            KCapacityBar::contextMenuEvent(event);
        } else if (kcapacitybar_contextmenuevent_callback != nullptr) {
            QContextMenuEvent* cbval1 = event;

            kcapacitybar_contextmenuevent_callback(this, cbval1);
        } else {
            KCapacityBar::contextMenuEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void tabletEvent(QTabletEvent* event) override {
        if (kcapacitybar_tabletevent_isbase) {
            kcapacitybar_tabletevent_isbase = false;
            KCapacityBar::tabletEvent(event);
        } else if (kcapacitybar_tabletevent_callback != nullptr) {
            QTabletEvent* cbval1 = event;

            kcapacitybar_tabletevent_callback(this, cbval1);
        } else {
            KCapacityBar::tabletEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void actionEvent(QActionEvent* event) override {
        if (kcapacitybar_actionevent_isbase) {
            kcapacitybar_actionevent_isbase = false;
            KCapacityBar::actionEvent(event);
        } else if (kcapacitybar_actionevent_callback != nullptr) {
            QActionEvent* cbval1 = event;

            kcapacitybar_actionevent_callback(this, cbval1);
        } else {
            KCapacityBar::actionEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragEnterEvent(QDragEnterEvent* event) override {
        if (kcapacitybar_dragenterevent_isbase) {
            kcapacitybar_dragenterevent_isbase = false;
            KCapacityBar::dragEnterEvent(event);
        } else if (kcapacitybar_dragenterevent_callback != nullptr) {
            QDragEnterEvent* cbval1 = event;

            kcapacitybar_dragenterevent_callback(this, cbval1);
        } else {
            KCapacityBar::dragEnterEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragMoveEvent(QDragMoveEvent* event) override {
        if (kcapacitybar_dragmoveevent_isbase) {
            kcapacitybar_dragmoveevent_isbase = false;
            KCapacityBar::dragMoveEvent(event);
        } else if (kcapacitybar_dragmoveevent_callback != nullptr) {
            QDragMoveEvent* cbval1 = event;

            kcapacitybar_dragmoveevent_callback(this, cbval1);
        } else {
            KCapacityBar::dragMoveEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragLeaveEvent(QDragLeaveEvent* event) override {
        if (kcapacitybar_dragleaveevent_isbase) {
            kcapacitybar_dragleaveevent_isbase = false;
            KCapacityBar::dragLeaveEvent(event);
        } else if (kcapacitybar_dragleaveevent_callback != nullptr) {
            QDragLeaveEvent* cbval1 = event;

            kcapacitybar_dragleaveevent_callback(this, cbval1);
        } else {
            KCapacityBar::dragLeaveEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void dropEvent(QDropEvent* event) override {
        if (kcapacitybar_dropevent_isbase) {
            kcapacitybar_dropevent_isbase = false;
            KCapacityBar::dropEvent(event);
        } else if (kcapacitybar_dropevent_callback != nullptr) {
            QDropEvent* cbval1 = event;

            kcapacitybar_dropevent_callback(this, cbval1);
        } else {
            KCapacityBar::dropEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void showEvent(QShowEvent* event) override {
        if (kcapacitybar_showevent_isbase) {
            kcapacitybar_showevent_isbase = false;
            KCapacityBar::showEvent(event);
        } else if (kcapacitybar_showevent_callback != nullptr) {
            QShowEvent* cbval1 = event;

            kcapacitybar_showevent_callback(this, cbval1);
        } else {
            KCapacityBar::showEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void hideEvent(QHideEvent* event) override {
        if (kcapacitybar_hideevent_isbase) {
            kcapacitybar_hideevent_isbase = false;
            KCapacityBar::hideEvent(event);
        } else if (kcapacitybar_hideevent_callback != nullptr) {
            QHideEvent* cbval1 = event;

            kcapacitybar_hideevent_callback(this, cbval1);
        } else {
            KCapacityBar::hideEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool nativeEvent(const QByteArray& eventType, void* message, qintptr* result) override {
        if (kcapacitybar_nativeevent_isbase) {
            kcapacitybar_nativeevent_isbase = false;
            return KCapacityBar::nativeEvent(eventType, message, result);
        } else if (kcapacitybar_nativeevent_callback != nullptr) {
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

            bool callback_ret = kcapacitybar_nativeevent_callback(this, cbval1, cbval2, cbval3);
            return callback_ret;
        } else {
            return KCapacityBar::nativeEvent(eventType, message, result);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual int metric(QPaintDevice::PaintDeviceMetric param1) const override {
        if (kcapacitybar_metric_isbase) {
            kcapacitybar_metric_isbase = false;
            return KCapacityBar::metric(param1);
        } else if (kcapacitybar_metric_callback != nullptr) {
            int cbval1 = static_cast<int>(param1);

            int callback_ret = kcapacitybar_metric_callback(this, cbval1);
            return static_cast<int>(callback_ret);
        } else {
            return KCapacityBar::metric(param1);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void initPainter(QPainter* painter) const override {
        if (kcapacitybar_initpainter_isbase) {
            kcapacitybar_initpainter_isbase = false;
            KCapacityBar::initPainter(painter);
        } else if (kcapacitybar_initpainter_callback != nullptr) {
            QPainter* cbval1 = painter;

            kcapacitybar_initpainter_callback(this, cbval1);
        } else {
            KCapacityBar::initPainter(painter);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QPaintDevice* redirected(QPoint* offset) const override {
        if (kcapacitybar_redirected_isbase) {
            kcapacitybar_redirected_isbase = false;
            return KCapacityBar::redirected(offset);
        } else if (kcapacitybar_redirected_callback != nullptr) {
            QPoint* cbval1 = offset;

            QPaintDevice* callback_ret = kcapacitybar_redirected_callback(this, cbval1);
            return callback_ret;
        } else {
            return KCapacityBar::redirected(offset);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QPainter* sharedPainter() const override {
        if (kcapacitybar_sharedpainter_isbase) {
            kcapacitybar_sharedpainter_isbase = false;
            return KCapacityBar::sharedPainter();
        } else if (kcapacitybar_sharedpainter_callback != nullptr) {
            QPainter* callback_ret = kcapacitybar_sharedpainter_callback();
            return callback_ret;
        } else {
            return KCapacityBar::sharedPainter();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void inputMethodEvent(QInputMethodEvent* param1) override {
        if (kcapacitybar_inputmethodevent_isbase) {
            kcapacitybar_inputmethodevent_isbase = false;
            KCapacityBar::inputMethodEvent(param1);
        } else if (kcapacitybar_inputmethodevent_callback != nullptr) {
            QInputMethodEvent* cbval1 = param1;

            kcapacitybar_inputmethodevent_callback(this, cbval1);
        } else {
            KCapacityBar::inputMethodEvent(param1);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QVariant inputMethodQuery(Qt::InputMethodQuery param1) const override {
        if (kcapacitybar_inputmethodquery_isbase) {
            kcapacitybar_inputmethodquery_isbase = false;
            return KCapacityBar::inputMethodQuery(param1);
        } else if (kcapacitybar_inputmethodquery_callback != nullptr) {
            int cbval1 = static_cast<int>(param1);

            QVariant* callback_ret = kcapacitybar_inputmethodquery_callback(this, cbval1);
            return *callback_ret;
        } else {
            return KCapacityBar::inputMethodQuery(param1);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool focusNextPrevChild(bool next) override {
        if (kcapacitybar_focusnextprevchild_isbase) {
            kcapacitybar_focusnextprevchild_isbase = false;
            return KCapacityBar::focusNextPrevChild(next);
        } else if (kcapacitybar_focusnextprevchild_callback != nullptr) {
            bool cbval1 = next;

            bool callback_ret = kcapacitybar_focusnextprevchild_callback(this, cbval1);
            return callback_ret;
        } else {
            return KCapacityBar::focusNextPrevChild(next);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* watched, QEvent* event) override {
        if (kcapacitybar_eventfilter_isbase) {
            kcapacitybar_eventfilter_isbase = false;
            return KCapacityBar::eventFilter(watched, event);
        } else if (kcapacitybar_eventfilter_callback != nullptr) {
            QObject* cbval1 = watched;
            QEvent* cbval2 = event;

            bool callback_ret = kcapacitybar_eventfilter_callback(this, cbval1, cbval2);
            return callback_ret;
        } else {
            return KCapacityBar::eventFilter(watched, event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (kcapacitybar_timerevent_isbase) {
            kcapacitybar_timerevent_isbase = false;
            KCapacityBar::timerEvent(event);
        } else if (kcapacitybar_timerevent_callback != nullptr) {
            QTimerEvent* cbval1 = event;

            kcapacitybar_timerevent_callback(this, cbval1);
        } else {
            KCapacityBar::timerEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (kcapacitybar_childevent_isbase) {
            kcapacitybar_childevent_isbase = false;
            KCapacityBar::childEvent(event);
        } else if (kcapacitybar_childevent_callback != nullptr) {
            QChildEvent* cbval1 = event;

            kcapacitybar_childevent_callback(this, cbval1);
        } else {
            KCapacityBar::childEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (kcapacitybar_customevent_isbase) {
            kcapacitybar_customevent_isbase = false;
            KCapacityBar::customEvent(event);
        } else if (kcapacitybar_customevent_callback != nullptr) {
            QEvent* cbval1 = event;

            kcapacitybar_customevent_callback(this, cbval1);
        } else {
            KCapacityBar::customEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (kcapacitybar_connectnotify_isbase) {
            kcapacitybar_connectnotify_isbase = false;
            KCapacityBar::connectNotify(signal);
        } else if (kcapacitybar_connectnotify_callback != nullptr) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            kcapacitybar_connectnotify_callback(this, cbval1);
        } else {
            KCapacityBar::connectNotify(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (kcapacitybar_disconnectnotify_isbase) {
            kcapacitybar_disconnectnotify_isbase = false;
            KCapacityBar::disconnectNotify(signal);
        } else if (kcapacitybar_disconnectnotify_callback != nullptr) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            kcapacitybar_disconnectnotify_callback(this, cbval1);
        } else {
            KCapacityBar::disconnectNotify(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    void updateMicroFocus() {
        if (kcapacitybar_updatemicrofocus_isbase) {
            kcapacitybar_updatemicrofocus_isbase = false;
            KCapacityBar::updateMicroFocus();
        } else if (kcapacitybar_updatemicrofocus_callback != nullptr) {
            kcapacitybar_updatemicrofocus_callback();
        } else {
            KCapacityBar::updateMicroFocus();
        }
    }

    // Virtual method for C ABI access and custom callback
    void create() {
        if (kcapacitybar_create_isbase) {
            kcapacitybar_create_isbase = false;
            KCapacityBar::create();
        } else if (kcapacitybar_create_callback != nullptr) {
            kcapacitybar_create_callback();
        } else {
            KCapacityBar::create();
        }
    }

    // Virtual method for C ABI access and custom callback
    void destroy() {
        if (kcapacitybar_destroy_isbase) {
            kcapacitybar_destroy_isbase = false;
            KCapacityBar::destroy();
        } else if (kcapacitybar_destroy_callback != nullptr) {
            kcapacitybar_destroy_callback();
        } else {
            KCapacityBar::destroy();
        }
    }

    // Virtual method for C ABI access and custom callback
    bool focusNextChild() {
        if (kcapacitybar_focusnextchild_isbase) {
            kcapacitybar_focusnextchild_isbase = false;
            return KCapacityBar::focusNextChild();
        } else if (kcapacitybar_focusnextchild_callback != nullptr) {
            bool callback_ret = kcapacitybar_focusnextchild_callback();
            return callback_ret;
        } else {
            return KCapacityBar::focusNextChild();
        }
    }

    // Virtual method for C ABI access and custom callback
    bool focusPreviousChild() {
        if (kcapacitybar_focuspreviouschild_isbase) {
            kcapacitybar_focuspreviouschild_isbase = false;
            return KCapacityBar::focusPreviousChild();
        } else if (kcapacitybar_focuspreviouschild_callback != nullptr) {
            bool callback_ret = kcapacitybar_focuspreviouschild_callback();
            return callback_ret;
        } else {
            return KCapacityBar::focusPreviousChild();
        }
    }

    // Virtual method for C ABI access and custom callback
    QObject* sender() const {
        if (kcapacitybar_sender_isbase) {
            kcapacitybar_sender_isbase = false;
            return KCapacityBar::sender();
        } else if (kcapacitybar_sender_callback != nullptr) {
            QObject* callback_ret = kcapacitybar_sender_callback();
            return callback_ret;
        } else {
            return KCapacityBar::sender();
        }
    }

    // Virtual method for C ABI access and custom callback
    int senderSignalIndex() const {
        if (kcapacitybar_sendersignalindex_isbase) {
            kcapacitybar_sendersignalindex_isbase = false;
            return KCapacityBar::senderSignalIndex();
        } else if (kcapacitybar_sendersignalindex_callback != nullptr) {
            int callback_ret = kcapacitybar_sendersignalindex_callback();
            return static_cast<int>(callback_ret);
        } else {
            return KCapacityBar::senderSignalIndex();
        }
    }

    // Virtual method for C ABI access and custom callback
    int receivers(const char* signal) const {
        if (kcapacitybar_receivers_isbase) {
            kcapacitybar_receivers_isbase = false;
            return KCapacityBar::receivers(signal);
        } else if (kcapacitybar_receivers_callback != nullptr) {
            const char* cbval1 = (const char*)signal;

            int callback_ret = kcapacitybar_receivers_callback(this, cbval1);
            return static_cast<int>(callback_ret);
        } else {
            return KCapacityBar::receivers(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    bool isSignalConnected(const QMetaMethod& signal) const {
        if (kcapacitybar_issignalconnected_isbase) {
            kcapacitybar_issignalconnected_isbase = false;
            return KCapacityBar::isSignalConnected(signal);
        } else if (kcapacitybar_issignalconnected_callback != nullptr) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            bool callback_ret = kcapacitybar_issignalconnected_callback(this, cbval1);
            return callback_ret;
        } else {
            return KCapacityBar::isSignalConnected(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    double getDecodedMetricF(QPaintDevice::PaintDeviceMetric metricA, QPaintDevice::PaintDeviceMetric metricB) const {
        if (kcapacitybar_getdecodedmetricf_isbase) {
            kcapacitybar_getdecodedmetricf_isbase = false;
            return KCapacityBar::getDecodedMetricF(metricA, metricB);
        } else if (kcapacitybar_getdecodedmetricf_callback != nullptr) {
            int cbval1 = static_cast<int>(metricA);
            int cbval2 = static_cast<int>(metricB);

            double callback_ret = kcapacitybar_getdecodedmetricf_callback(this, cbval1, cbval2);
            return static_cast<double>(callback_ret);
        } else {
            return KCapacityBar::getDecodedMetricF(metricA, metricB);
        }
    }

    // Friend functions
    friend void KCapacityBar_PaintEvent(KCapacityBar* self, QPaintEvent* event);
    friend void KCapacityBar_QBasePaintEvent(KCapacityBar* self, QPaintEvent* event);
    friend void KCapacityBar_ChangeEvent(KCapacityBar* self, QEvent* event);
    friend void KCapacityBar_QBaseChangeEvent(KCapacityBar* self, QEvent* event);
    friend bool KCapacityBar_Event(KCapacityBar* self, QEvent* event);
    friend bool KCapacityBar_QBaseEvent(KCapacityBar* self, QEvent* event);
    friend void KCapacityBar_MousePressEvent(KCapacityBar* self, QMouseEvent* event);
    friend void KCapacityBar_QBaseMousePressEvent(KCapacityBar* self, QMouseEvent* event);
    friend void KCapacityBar_MouseReleaseEvent(KCapacityBar* self, QMouseEvent* event);
    friend void KCapacityBar_QBaseMouseReleaseEvent(KCapacityBar* self, QMouseEvent* event);
    friend void KCapacityBar_MouseDoubleClickEvent(KCapacityBar* self, QMouseEvent* event);
    friend void KCapacityBar_QBaseMouseDoubleClickEvent(KCapacityBar* self, QMouseEvent* event);
    friend void KCapacityBar_MouseMoveEvent(KCapacityBar* self, QMouseEvent* event);
    friend void KCapacityBar_QBaseMouseMoveEvent(KCapacityBar* self, QMouseEvent* event);
    friend void KCapacityBar_WheelEvent(KCapacityBar* self, QWheelEvent* event);
    friend void KCapacityBar_QBaseWheelEvent(KCapacityBar* self, QWheelEvent* event);
    friend void KCapacityBar_KeyPressEvent(KCapacityBar* self, QKeyEvent* event);
    friend void KCapacityBar_QBaseKeyPressEvent(KCapacityBar* self, QKeyEvent* event);
    friend void KCapacityBar_KeyReleaseEvent(KCapacityBar* self, QKeyEvent* event);
    friend void KCapacityBar_QBaseKeyReleaseEvent(KCapacityBar* self, QKeyEvent* event);
    friend void KCapacityBar_FocusInEvent(KCapacityBar* self, QFocusEvent* event);
    friend void KCapacityBar_QBaseFocusInEvent(KCapacityBar* self, QFocusEvent* event);
    friend void KCapacityBar_FocusOutEvent(KCapacityBar* self, QFocusEvent* event);
    friend void KCapacityBar_QBaseFocusOutEvent(KCapacityBar* self, QFocusEvent* event);
    friend void KCapacityBar_EnterEvent(KCapacityBar* self, QEnterEvent* event);
    friend void KCapacityBar_QBaseEnterEvent(KCapacityBar* self, QEnterEvent* event);
    friend void KCapacityBar_LeaveEvent(KCapacityBar* self, QEvent* event);
    friend void KCapacityBar_QBaseLeaveEvent(KCapacityBar* self, QEvent* event);
    friend void KCapacityBar_MoveEvent(KCapacityBar* self, QMoveEvent* event);
    friend void KCapacityBar_QBaseMoveEvent(KCapacityBar* self, QMoveEvent* event);
    friend void KCapacityBar_ResizeEvent(KCapacityBar* self, QResizeEvent* event);
    friend void KCapacityBar_QBaseResizeEvent(KCapacityBar* self, QResizeEvent* event);
    friend void KCapacityBar_CloseEvent(KCapacityBar* self, QCloseEvent* event);
    friend void KCapacityBar_QBaseCloseEvent(KCapacityBar* self, QCloseEvent* event);
    friend void KCapacityBar_ContextMenuEvent(KCapacityBar* self, QContextMenuEvent* event);
    friend void KCapacityBar_QBaseContextMenuEvent(KCapacityBar* self, QContextMenuEvent* event);
    friend void KCapacityBar_TabletEvent(KCapacityBar* self, QTabletEvent* event);
    friend void KCapacityBar_QBaseTabletEvent(KCapacityBar* self, QTabletEvent* event);
    friend void KCapacityBar_ActionEvent(KCapacityBar* self, QActionEvent* event);
    friend void KCapacityBar_QBaseActionEvent(KCapacityBar* self, QActionEvent* event);
    friend void KCapacityBar_DragEnterEvent(KCapacityBar* self, QDragEnterEvent* event);
    friend void KCapacityBar_QBaseDragEnterEvent(KCapacityBar* self, QDragEnterEvent* event);
    friend void KCapacityBar_DragMoveEvent(KCapacityBar* self, QDragMoveEvent* event);
    friend void KCapacityBar_QBaseDragMoveEvent(KCapacityBar* self, QDragMoveEvent* event);
    friend void KCapacityBar_DragLeaveEvent(KCapacityBar* self, QDragLeaveEvent* event);
    friend void KCapacityBar_QBaseDragLeaveEvent(KCapacityBar* self, QDragLeaveEvent* event);
    friend void KCapacityBar_DropEvent(KCapacityBar* self, QDropEvent* event);
    friend void KCapacityBar_QBaseDropEvent(KCapacityBar* self, QDropEvent* event);
    friend void KCapacityBar_ShowEvent(KCapacityBar* self, QShowEvent* event);
    friend void KCapacityBar_QBaseShowEvent(KCapacityBar* self, QShowEvent* event);
    friend void KCapacityBar_HideEvent(KCapacityBar* self, QHideEvent* event);
    friend void KCapacityBar_QBaseHideEvent(KCapacityBar* self, QHideEvent* event);
    friend bool KCapacityBar_NativeEvent(KCapacityBar* self, const libqt_string eventType, void* message, intptr_t* result);
    friend bool KCapacityBar_QBaseNativeEvent(KCapacityBar* self, const libqt_string eventType, void* message, intptr_t* result);
    friend int KCapacityBar_Metric(const KCapacityBar* self, int param1);
    friend int KCapacityBar_QBaseMetric(const KCapacityBar* self, int param1);
    friend void KCapacityBar_InitPainter(const KCapacityBar* self, QPainter* painter);
    friend void KCapacityBar_QBaseInitPainter(const KCapacityBar* self, QPainter* painter);
    friend QPaintDevice* KCapacityBar_Redirected(const KCapacityBar* self, QPoint* offset);
    friend QPaintDevice* KCapacityBar_QBaseRedirected(const KCapacityBar* self, QPoint* offset);
    friend QPainter* KCapacityBar_SharedPainter(const KCapacityBar* self);
    friend QPainter* KCapacityBar_QBaseSharedPainter(const KCapacityBar* self);
    friend void KCapacityBar_InputMethodEvent(KCapacityBar* self, QInputMethodEvent* param1);
    friend void KCapacityBar_QBaseInputMethodEvent(KCapacityBar* self, QInputMethodEvent* param1);
    friend bool KCapacityBar_FocusNextPrevChild(KCapacityBar* self, bool next);
    friend bool KCapacityBar_QBaseFocusNextPrevChild(KCapacityBar* self, bool next);
    friend void KCapacityBar_TimerEvent(KCapacityBar* self, QTimerEvent* event);
    friend void KCapacityBar_QBaseTimerEvent(KCapacityBar* self, QTimerEvent* event);
    friend void KCapacityBar_ChildEvent(KCapacityBar* self, QChildEvent* event);
    friend void KCapacityBar_QBaseChildEvent(KCapacityBar* self, QChildEvent* event);
    friend void KCapacityBar_CustomEvent(KCapacityBar* self, QEvent* event);
    friend void KCapacityBar_QBaseCustomEvent(KCapacityBar* self, QEvent* event);
    friend void KCapacityBar_ConnectNotify(KCapacityBar* self, const QMetaMethod* signal);
    friend void KCapacityBar_QBaseConnectNotify(KCapacityBar* self, const QMetaMethod* signal);
    friend void KCapacityBar_DisconnectNotify(KCapacityBar* self, const QMetaMethod* signal);
    friend void KCapacityBar_QBaseDisconnectNotify(KCapacityBar* self, const QMetaMethod* signal);
    friend void KCapacityBar_UpdateMicroFocus(KCapacityBar* self);
    friend void KCapacityBar_QBaseUpdateMicroFocus(KCapacityBar* self);
    friend void KCapacityBar_Create(KCapacityBar* self);
    friend void KCapacityBar_QBaseCreate(KCapacityBar* self);
    friend void KCapacityBar_Destroy(KCapacityBar* self);
    friend void KCapacityBar_QBaseDestroy(KCapacityBar* self);
    friend bool KCapacityBar_FocusNextChild(KCapacityBar* self);
    friend bool KCapacityBar_QBaseFocusNextChild(KCapacityBar* self);
    friend bool KCapacityBar_FocusPreviousChild(KCapacityBar* self);
    friend bool KCapacityBar_QBaseFocusPreviousChild(KCapacityBar* self);
    friend QObject* KCapacityBar_Sender(const KCapacityBar* self);
    friend QObject* KCapacityBar_QBaseSender(const KCapacityBar* self);
    friend int KCapacityBar_SenderSignalIndex(const KCapacityBar* self);
    friend int KCapacityBar_QBaseSenderSignalIndex(const KCapacityBar* self);
    friend int KCapacityBar_Receivers(const KCapacityBar* self, const char* signal);
    friend int KCapacityBar_QBaseReceivers(const KCapacityBar* self, const char* signal);
    friend bool KCapacityBar_IsSignalConnected(const KCapacityBar* self, const QMetaMethod* signal);
    friend bool KCapacityBar_QBaseIsSignalConnected(const KCapacityBar* self, const QMetaMethod* signal);
    friend double KCapacityBar_GetDecodedMetricF(const KCapacityBar* self, int metricA, int metricB);
    friend double KCapacityBar_QBaseGetDecodedMetricF(const KCapacityBar* self, int metricA, int metricB);
};

#endif
