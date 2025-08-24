#pragma once
#ifndef SRC_EXTRAS_KWIDGETSADDONSC_LIBVIRTUALKSEPARATOR_H
#define SRC_EXTRAS_KWIDGETSADDONSC_LIBVIRTUALKSEPARATOR_H

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

// This class is a subclass of KSeparator so that we can call protected methods
class VirtualKSeparator final : public KSeparator {

  public:
    // Virtual class boolean flag
    bool isVirtualKSeparator = true;

    // Virtual class public types (including callbacks)
    using KSeparator_Metacall_Callback = int (*)(KSeparator*, int, int, void**);
    using KSeparator_SizeHint_Callback = QSize* (*)();
    using KSeparator_Event_Callback = bool (*)(KSeparator*, QEvent*);
    using KSeparator_PaintEvent_Callback = void (*)(KSeparator*, QPaintEvent*);
    using KSeparator_ChangeEvent_Callback = void (*)(KSeparator*, QEvent*);
    using KSeparator_InitStyleOption_Callback = void (*)(const KSeparator*, QStyleOptionFrame*);
    using KSeparator_DevType_Callback = int (*)();
    using KSeparator_SetVisible_Callback = void (*)(KSeparator*, bool);
    using KSeparator_MinimumSizeHint_Callback = QSize* (*)();
    using KSeparator_HeightForWidth_Callback = int (*)(const KSeparator*, int);
    using KSeparator_HasHeightForWidth_Callback = bool (*)();
    using KSeparator_PaintEngine_Callback = QPaintEngine* (*)();
    using KSeparator_MousePressEvent_Callback = void (*)(KSeparator*, QMouseEvent*);
    using KSeparator_MouseReleaseEvent_Callback = void (*)(KSeparator*, QMouseEvent*);
    using KSeparator_MouseDoubleClickEvent_Callback = void (*)(KSeparator*, QMouseEvent*);
    using KSeparator_MouseMoveEvent_Callback = void (*)(KSeparator*, QMouseEvent*);
    using KSeparator_WheelEvent_Callback = void (*)(KSeparator*, QWheelEvent*);
    using KSeparator_KeyPressEvent_Callback = void (*)(KSeparator*, QKeyEvent*);
    using KSeparator_KeyReleaseEvent_Callback = void (*)(KSeparator*, QKeyEvent*);
    using KSeparator_FocusInEvent_Callback = void (*)(KSeparator*, QFocusEvent*);
    using KSeparator_FocusOutEvent_Callback = void (*)(KSeparator*, QFocusEvent*);
    using KSeparator_EnterEvent_Callback = void (*)(KSeparator*, QEnterEvent*);
    using KSeparator_LeaveEvent_Callback = void (*)(KSeparator*, QEvent*);
    using KSeparator_MoveEvent_Callback = void (*)(KSeparator*, QMoveEvent*);
    using KSeparator_ResizeEvent_Callback = void (*)(KSeparator*, QResizeEvent*);
    using KSeparator_CloseEvent_Callback = void (*)(KSeparator*, QCloseEvent*);
    using KSeparator_ContextMenuEvent_Callback = void (*)(KSeparator*, QContextMenuEvent*);
    using KSeparator_TabletEvent_Callback = void (*)(KSeparator*, QTabletEvent*);
    using KSeparator_ActionEvent_Callback = void (*)(KSeparator*, QActionEvent*);
    using KSeparator_DragEnterEvent_Callback = void (*)(KSeparator*, QDragEnterEvent*);
    using KSeparator_DragMoveEvent_Callback = void (*)(KSeparator*, QDragMoveEvent*);
    using KSeparator_DragLeaveEvent_Callback = void (*)(KSeparator*, QDragLeaveEvent*);
    using KSeparator_DropEvent_Callback = void (*)(KSeparator*, QDropEvent*);
    using KSeparator_ShowEvent_Callback = void (*)(KSeparator*, QShowEvent*);
    using KSeparator_HideEvent_Callback = void (*)(KSeparator*, QHideEvent*);
    using KSeparator_NativeEvent_Callback = bool (*)(KSeparator*, libqt_string, void*, intptr_t*);
    using KSeparator_Metric_Callback = int (*)(const KSeparator*, int);
    using KSeparator_InitPainter_Callback = void (*)(const KSeparator*, QPainter*);
    using KSeparator_Redirected_Callback = QPaintDevice* (*)(const KSeparator*, QPoint*);
    using KSeparator_SharedPainter_Callback = QPainter* (*)();
    using KSeparator_InputMethodEvent_Callback = void (*)(KSeparator*, QInputMethodEvent*);
    using KSeparator_InputMethodQuery_Callback = QVariant* (*)(const KSeparator*, int);
    using KSeparator_FocusNextPrevChild_Callback = bool (*)(KSeparator*, bool);
    using KSeparator_EventFilter_Callback = bool (*)(KSeparator*, QObject*, QEvent*);
    using KSeparator_TimerEvent_Callback = void (*)(KSeparator*, QTimerEvent*);
    using KSeparator_ChildEvent_Callback = void (*)(KSeparator*, QChildEvent*);
    using KSeparator_CustomEvent_Callback = void (*)(KSeparator*, QEvent*);
    using KSeparator_ConnectNotify_Callback = void (*)(KSeparator*, QMetaMethod*);
    using KSeparator_DisconnectNotify_Callback = void (*)(KSeparator*, QMetaMethod*);
    using KSeparator_DrawFrame_Callback = void (*)(KSeparator*, QPainter*);
    using KSeparator_UpdateMicroFocus_Callback = void (*)();
    using KSeparator_Create_Callback = void (*)();
    using KSeparator_Destroy_Callback = void (*)();
    using KSeparator_FocusNextChild_Callback = bool (*)();
    using KSeparator_FocusPreviousChild_Callback = bool (*)();
    using KSeparator_Sender_Callback = QObject* (*)();
    using KSeparator_SenderSignalIndex_Callback = int (*)();
    using KSeparator_Receivers_Callback = int (*)(const KSeparator*, const char*);
    using KSeparator_IsSignalConnected_Callback = bool (*)(const KSeparator*, QMetaMethod*);
    using KSeparator_GetDecodedMetricF_Callback = double (*)(const KSeparator*, int, int);

  protected:
    // Instance callback storage
    KSeparator_Metacall_Callback kseparator_metacall_callback = nullptr;
    KSeparator_SizeHint_Callback kseparator_sizehint_callback = nullptr;
    KSeparator_Event_Callback kseparator_event_callback = nullptr;
    KSeparator_PaintEvent_Callback kseparator_paintevent_callback = nullptr;
    KSeparator_ChangeEvent_Callback kseparator_changeevent_callback = nullptr;
    KSeparator_InitStyleOption_Callback kseparator_initstyleoption_callback = nullptr;
    KSeparator_DevType_Callback kseparator_devtype_callback = nullptr;
    KSeparator_SetVisible_Callback kseparator_setvisible_callback = nullptr;
    KSeparator_MinimumSizeHint_Callback kseparator_minimumsizehint_callback = nullptr;
    KSeparator_HeightForWidth_Callback kseparator_heightforwidth_callback = nullptr;
    KSeparator_HasHeightForWidth_Callback kseparator_hasheightforwidth_callback = nullptr;
    KSeparator_PaintEngine_Callback kseparator_paintengine_callback = nullptr;
    KSeparator_MousePressEvent_Callback kseparator_mousepressevent_callback = nullptr;
    KSeparator_MouseReleaseEvent_Callback kseparator_mousereleaseevent_callback = nullptr;
    KSeparator_MouseDoubleClickEvent_Callback kseparator_mousedoubleclickevent_callback = nullptr;
    KSeparator_MouseMoveEvent_Callback kseparator_mousemoveevent_callback = nullptr;
    KSeparator_WheelEvent_Callback kseparator_wheelevent_callback = nullptr;
    KSeparator_KeyPressEvent_Callback kseparator_keypressevent_callback = nullptr;
    KSeparator_KeyReleaseEvent_Callback kseparator_keyreleaseevent_callback = nullptr;
    KSeparator_FocusInEvent_Callback kseparator_focusinevent_callback = nullptr;
    KSeparator_FocusOutEvent_Callback kseparator_focusoutevent_callback = nullptr;
    KSeparator_EnterEvent_Callback kseparator_enterevent_callback = nullptr;
    KSeparator_LeaveEvent_Callback kseparator_leaveevent_callback = nullptr;
    KSeparator_MoveEvent_Callback kseparator_moveevent_callback = nullptr;
    KSeparator_ResizeEvent_Callback kseparator_resizeevent_callback = nullptr;
    KSeparator_CloseEvent_Callback kseparator_closeevent_callback = nullptr;
    KSeparator_ContextMenuEvent_Callback kseparator_contextmenuevent_callback = nullptr;
    KSeparator_TabletEvent_Callback kseparator_tabletevent_callback = nullptr;
    KSeparator_ActionEvent_Callback kseparator_actionevent_callback = nullptr;
    KSeparator_DragEnterEvent_Callback kseparator_dragenterevent_callback = nullptr;
    KSeparator_DragMoveEvent_Callback kseparator_dragmoveevent_callback = nullptr;
    KSeparator_DragLeaveEvent_Callback kseparator_dragleaveevent_callback = nullptr;
    KSeparator_DropEvent_Callback kseparator_dropevent_callback = nullptr;
    KSeparator_ShowEvent_Callback kseparator_showevent_callback = nullptr;
    KSeparator_HideEvent_Callback kseparator_hideevent_callback = nullptr;
    KSeparator_NativeEvent_Callback kseparator_nativeevent_callback = nullptr;
    KSeparator_Metric_Callback kseparator_metric_callback = nullptr;
    KSeparator_InitPainter_Callback kseparator_initpainter_callback = nullptr;
    KSeparator_Redirected_Callback kseparator_redirected_callback = nullptr;
    KSeparator_SharedPainter_Callback kseparator_sharedpainter_callback = nullptr;
    KSeparator_InputMethodEvent_Callback kseparator_inputmethodevent_callback = nullptr;
    KSeparator_InputMethodQuery_Callback kseparator_inputmethodquery_callback = nullptr;
    KSeparator_FocusNextPrevChild_Callback kseparator_focusnextprevchild_callback = nullptr;
    KSeparator_EventFilter_Callback kseparator_eventfilter_callback = nullptr;
    KSeparator_TimerEvent_Callback kseparator_timerevent_callback = nullptr;
    KSeparator_ChildEvent_Callback kseparator_childevent_callback = nullptr;
    KSeparator_CustomEvent_Callback kseparator_customevent_callback = nullptr;
    KSeparator_ConnectNotify_Callback kseparator_connectnotify_callback = nullptr;
    KSeparator_DisconnectNotify_Callback kseparator_disconnectnotify_callback = nullptr;
    KSeparator_DrawFrame_Callback kseparator_drawframe_callback = nullptr;
    KSeparator_UpdateMicroFocus_Callback kseparator_updatemicrofocus_callback = nullptr;
    KSeparator_Create_Callback kseparator_create_callback = nullptr;
    KSeparator_Destroy_Callback kseparator_destroy_callback = nullptr;
    KSeparator_FocusNextChild_Callback kseparator_focusnextchild_callback = nullptr;
    KSeparator_FocusPreviousChild_Callback kseparator_focuspreviouschild_callback = nullptr;
    KSeparator_Sender_Callback kseparator_sender_callback = nullptr;
    KSeparator_SenderSignalIndex_Callback kseparator_sendersignalindex_callback = nullptr;
    KSeparator_Receivers_Callback kseparator_receivers_callback = nullptr;
    KSeparator_IsSignalConnected_Callback kseparator_issignalconnected_callback = nullptr;
    KSeparator_GetDecodedMetricF_Callback kseparator_getdecodedmetricf_callback = nullptr;

    // Instance base flags
    mutable bool kseparator_metacall_isbase = false;
    mutable bool kseparator_sizehint_isbase = false;
    mutable bool kseparator_event_isbase = false;
    mutable bool kseparator_paintevent_isbase = false;
    mutable bool kseparator_changeevent_isbase = false;
    mutable bool kseparator_initstyleoption_isbase = false;
    mutable bool kseparator_devtype_isbase = false;
    mutable bool kseparator_setvisible_isbase = false;
    mutable bool kseparator_minimumsizehint_isbase = false;
    mutable bool kseparator_heightforwidth_isbase = false;
    mutable bool kseparator_hasheightforwidth_isbase = false;
    mutable bool kseparator_paintengine_isbase = false;
    mutable bool kseparator_mousepressevent_isbase = false;
    mutable bool kseparator_mousereleaseevent_isbase = false;
    mutable bool kseparator_mousedoubleclickevent_isbase = false;
    mutable bool kseparator_mousemoveevent_isbase = false;
    mutable bool kseparator_wheelevent_isbase = false;
    mutable bool kseparator_keypressevent_isbase = false;
    mutable bool kseparator_keyreleaseevent_isbase = false;
    mutable bool kseparator_focusinevent_isbase = false;
    mutable bool kseparator_focusoutevent_isbase = false;
    mutable bool kseparator_enterevent_isbase = false;
    mutable bool kseparator_leaveevent_isbase = false;
    mutable bool kseparator_moveevent_isbase = false;
    mutable bool kseparator_resizeevent_isbase = false;
    mutable bool kseparator_closeevent_isbase = false;
    mutable bool kseparator_contextmenuevent_isbase = false;
    mutable bool kseparator_tabletevent_isbase = false;
    mutable bool kseparator_actionevent_isbase = false;
    mutable bool kseparator_dragenterevent_isbase = false;
    mutable bool kseparator_dragmoveevent_isbase = false;
    mutable bool kseparator_dragleaveevent_isbase = false;
    mutable bool kseparator_dropevent_isbase = false;
    mutable bool kseparator_showevent_isbase = false;
    mutable bool kseparator_hideevent_isbase = false;
    mutable bool kseparator_nativeevent_isbase = false;
    mutable bool kseparator_metric_isbase = false;
    mutable bool kseparator_initpainter_isbase = false;
    mutable bool kseparator_redirected_isbase = false;
    mutable bool kseparator_sharedpainter_isbase = false;
    mutable bool kseparator_inputmethodevent_isbase = false;
    mutable bool kseparator_inputmethodquery_isbase = false;
    mutable bool kseparator_focusnextprevchild_isbase = false;
    mutable bool kseparator_eventfilter_isbase = false;
    mutable bool kseparator_timerevent_isbase = false;
    mutable bool kseparator_childevent_isbase = false;
    mutable bool kseparator_customevent_isbase = false;
    mutable bool kseparator_connectnotify_isbase = false;
    mutable bool kseparator_disconnectnotify_isbase = false;
    mutable bool kseparator_drawframe_isbase = false;
    mutable bool kseparator_updatemicrofocus_isbase = false;
    mutable bool kseparator_create_isbase = false;
    mutable bool kseparator_destroy_isbase = false;
    mutable bool kseparator_focusnextchild_isbase = false;
    mutable bool kseparator_focuspreviouschild_isbase = false;
    mutable bool kseparator_sender_isbase = false;
    mutable bool kseparator_sendersignalindex_isbase = false;
    mutable bool kseparator_receivers_isbase = false;
    mutable bool kseparator_issignalconnected_isbase = false;
    mutable bool kseparator_getdecodedmetricf_isbase = false;

  public:
    VirtualKSeparator(QWidget* parent) : KSeparator(parent) {};
    VirtualKSeparator() : KSeparator() {};
    VirtualKSeparator(Qt::Orientation orientation) : KSeparator(orientation) {};
    VirtualKSeparator(QWidget* parent, Qt::WindowFlags f) : KSeparator(parent, f) {};
    VirtualKSeparator(Qt::Orientation orientation, QWidget* parent) : KSeparator(orientation, parent) {};
    VirtualKSeparator(Qt::Orientation orientation, QWidget* parent, Qt::WindowFlags f) : KSeparator(orientation, parent, f) {};

    ~VirtualKSeparator() {
        kseparator_metacall_callback = nullptr;
        kseparator_sizehint_callback = nullptr;
        kseparator_event_callback = nullptr;
        kseparator_paintevent_callback = nullptr;
        kseparator_changeevent_callback = nullptr;
        kseparator_initstyleoption_callback = nullptr;
        kseparator_devtype_callback = nullptr;
        kseparator_setvisible_callback = nullptr;
        kseparator_minimumsizehint_callback = nullptr;
        kseparator_heightforwidth_callback = nullptr;
        kseparator_hasheightforwidth_callback = nullptr;
        kseparator_paintengine_callback = nullptr;
        kseparator_mousepressevent_callback = nullptr;
        kseparator_mousereleaseevent_callback = nullptr;
        kseparator_mousedoubleclickevent_callback = nullptr;
        kseparator_mousemoveevent_callback = nullptr;
        kseparator_wheelevent_callback = nullptr;
        kseparator_keypressevent_callback = nullptr;
        kseparator_keyreleaseevent_callback = nullptr;
        kseparator_focusinevent_callback = nullptr;
        kseparator_focusoutevent_callback = nullptr;
        kseparator_enterevent_callback = nullptr;
        kseparator_leaveevent_callback = nullptr;
        kseparator_moveevent_callback = nullptr;
        kseparator_resizeevent_callback = nullptr;
        kseparator_closeevent_callback = nullptr;
        kseparator_contextmenuevent_callback = nullptr;
        kseparator_tabletevent_callback = nullptr;
        kseparator_actionevent_callback = nullptr;
        kseparator_dragenterevent_callback = nullptr;
        kseparator_dragmoveevent_callback = nullptr;
        kseparator_dragleaveevent_callback = nullptr;
        kseparator_dropevent_callback = nullptr;
        kseparator_showevent_callback = nullptr;
        kseparator_hideevent_callback = nullptr;
        kseparator_nativeevent_callback = nullptr;
        kseparator_metric_callback = nullptr;
        kseparator_initpainter_callback = nullptr;
        kseparator_redirected_callback = nullptr;
        kseparator_sharedpainter_callback = nullptr;
        kseparator_inputmethodevent_callback = nullptr;
        kseparator_inputmethodquery_callback = nullptr;
        kseparator_focusnextprevchild_callback = nullptr;
        kseparator_eventfilter_callback = nullptr;
        kseparator_timerevent_callback = nullptr;
        kseparator_childevent_callback = nullptr;
        kseparator_customevent_callback = nullptr;
        kseparator_connectnotify_callback = nullptr;
        kseparator_disconnectnotify_callback = nullptr;
        kseparator_drawframe_callback = nullptr;
        kseparator_updatemicrofocus_callback = nullptr;
        kseparator_create_callback = nullptr;
        kseparator_destroy_callback = nullptr;
        kseparator_focusnextchild_callback = nullptr;
        kseparator_focuspreviouschild_callback = nullptr;
        kseparator_sender_callback = nullptr;
        kseparator_sendersignalindex_callback = nullptr;
        kseparator_receivers_callback = nullptr;
        kseparator_issignalconnected_callback = nullptr;
        kseparator_getdecodedmetricf_callback = nullptr;
    }

    // Callback setters
    inline void setKSeparator_Metacall_Callback(KSeparator_Metacall_Callback cb) { kseparator_metacall_callback = cb; }
    inline void setKSeparator_SizeHint_Callback(KSeparator_SizeHint_Callback cb) { kseparator_sizehint_callback = cb; }
    inline void setKSeparator_Event_Callback(KSeparator_Event_Callback cb) { kseparator_event_callback = cb; }
    inline void setKSeparator_PaintEvent_Callback(KSeparator_PaintEvent_Callback cb) { kseparator_paintevent_callback = cb; }
    inline void setKSeparator_ChangeEvent_Callback(KSeparator_ChangeEvent_Callback cb) { kseparator_changeevent_callback = cb; }
    inline void setKSeparator_InitStyleOption_Callback(KSeparator_InitStyleOption_Callback cb) { kseparator_initstyleoption_callback = cb; }
    inline void setKSeparator_DevType_Callback(KSeparator_DevType_Callback cb) { kseparator_devtype_callback = cb; }
    inline void setKSeparator_SetVisible_Callback(KSeparator_SetVisible_Callback cb) { kseparator_setvisible_callback = cb; }
    inline void setKSeparator_MinimumSizeHint_Callback(KSeparator_MinimumSizeHint_Callback cb) { kseparator_minimumsizehint_callback = cb; }
    inline void setKSeparator_HeightForWidth_Callback(KSeparator_HeightForWidth_Callback cb) { kseparator_heightforwidth_callback = cb; }
    inline void setKSeparator_HasHeightForWidth_Callback(KSeparator_HasHeightForWidth_Callback cb) { kseparator_hasheightforwidth_callback = cb; }
    inline void setKSeparator_PaintEngine_Callback(KSeparator_PaintEngine_Callback cb) { kseparator_paintengine_callback = cb; }
    inline void setKSeparator_MousePressEvent_Callback(KSeparator_MousePressEvent_Callback cb) { kseparator_mousepressevent_callback = cb; }
    inline void setKSeparator_MouseReleaseEvent_Callback(KSeparator_MouseReleaseEvent_Callback cb) { kseparator_mousereleaseevent_callback = cb; }
    inline void setKSeparator_MouseDoubleClickEvent_Callback(KSeparator_MouseDoubleClickEvent_Callback cb) { kseparator_mousedoubleclickevent_callback = cb; }
    inline void setKSeparator_MouseMoveEvent_Callback(KSeparator_MouseMoveEvent_Callback cb) { kseparator_mousemoveevent_callback = cb; }
    inline void setKSeparator_WheelEvent_Callback(KSeparator_WheelEvent_Callback cb) { kseparator_wheelevent_callback = cb; }
    inline void setKSeparator_KeyPressEvent_Callback(KSeparator_KeyPressEvent_Callback cb) { kseparator_keypressevent_callback = cb; }
    inline void setKSeparator_KeyReleaseEvent_Callback(KSeparator_KeyReleaseEvent_Callback cb) { kseparator_keyreleaseevent_callback = cb; }
    inline void setKSeparator_FocusInEvent_Callback(KSeparator_FocusInEvent_Callback cb) { kseparator_focusinevent_callback = cb; }
    inline void setKSeparator_FocusOutEvent_Callback(KSeparator_FocusOutEvent_Callback cb) { kseparator_focusoutevent_callback = cb; }
    inline void setKSeparator_EnterEvent_Callback(KSeparator_EnterEvent_Callback cb) { kseparator_enterevent_callback = cb; }
    inline void setKSeparator_LeaveEvent_Callback(KSeparator_LeaveEvent_Callback cb) { kseparator_leaveevent_callback = cb; }
    inline void setKSeparator_MoveEvent_Callback(KSeparator_MoveEvent_Callback cb) { kseparator_moveevent_callback = cb; }
    inline void setKSeparator_ResizeEvent_Callback(KSeparator_ResizeEvent_Callback cb) { kseparator_resizeevent_callback = cb; }
    inline void setKSeparator_CloseEvent_Callback(KSeparator_CloseEvent_Callback cb) { kseparator_closeevent_callback = cb; }
    inline void setKSeparator_ContextMenuEvent_Callback(KSeparator_ContextMenuEvent_Callback cb) { kseparator_contextmenuevent_callback = cb; }
    inline void setKSeparator_TabletEvent_Callback(KSeparator_TabletEvent_Callback cb) { kseparator_tabletevent_callback = cb; }
    inline void setKSeparator_ActionEvent_Callback(KSeparator_ActionEvent_Callback cb) { kseparator_actionevent_callback = cb; }
    inline void setKSeparator_DragEnterEvent_Callback(KSeparator_DragEnterEvent_Callback cb) { kseparator_dragenterevent_callback = cb; }
    inline void setKSeparator_DragMoveEvent_Callback(KSeparator_DragMoveEvent_Callback cb) { kseparator_dragmoveevent_callback = cb; }
    inline void setKSeparator_DragLeaveEvent_Callback(KSeparator_DragLeaveEvent_Callback cb) { kseparator_dragleaveevent_callback = cb; }
    inline void setKSeparator_DropEvent_Callback(KSeparator_DropEvent_Callback cb) { kseparator_dropevent_callback = cb; }
    inline void setKSeparator_ShowEvent_Callback(KSeparator_ShowEvent_Callback cb) { kseparator_showevent_callback = cb; }
    inline void setKSeparator_HideEvent_Callback(KSeparator_HideEvent_Callback cb) { kseparator_hideevent_callback = cb; }
    inline void setKSeparator_NativeEvent_Callback(KSeparator_NativeEvent_Callback cb) { kseparator_nativeevent_callback = cb; }
    inline void setKSeparator_Metric_Callback(KSeparator_Metric_Callback cb) { kseparator_metric_callback = cb; }
    inline void setKSeparator_InitPainter_Callback(KSeparator_InitPainter_Callback cb) { kseparator_initpainter_callback = cb; }
    inline void setKSeparator_Redirected_Callback(KSeparator_Redirected_Callback cb) { kseparator_redirected_callback = cb; }
    inline void setKSeparator_SharedPainter_Callback(KSeparator_SharedPainter_Callback cb) { kseparator_sharedpainter_callback = cb; }
    inline void setKSeparator_InputMethodEvent_Callback(KSeparator_InputMethodEvent_Callback cb) { kseparator_inputmethodevent_callback = cb; }
    inline void setKSeparator_InputMethodQuery_Callback(KSeparator_InputMethodQuery_Callback cb) { kseparator_inputmethodquery_callback = cb; }
    inline void setKSeparator_FocusNextPrevChild_Callback(KSeparator_FocusNextPrevChild_Callback cb) { kseparator_focusnextprevchild_callback = cb; }
    inline void setKSeparator_EventFilter_Callback(KSeparator_EventFilter_Callback cb) { kseparator_eventfilter_callback = cb; }
    inline void setKSeparator_TimerEvent_Callback(KSeparator_TimerEvent_Callback cb) { kseparator_timerevent_callback = cb; }
    inline void setKSeparator_ChildEvent_Callback(KSeparator_ChildEvent_Callback cb) { kseparator_childevent_callback = cb; }
    inline void setKSeparator_CustomEvent_Callback(KSeparator_CustomEvent_Callback cb) { kseparator_customevent_callback = cb; }
    inline void setKSeparator_ConnectNotify_Callback(KSeparator_ConnectNotify_Callback cb) { kseparator_connectnotify_callback = cb; }
    inline void setKSeparator_DisconnectNotify_Callback(KSeparator_DisconnectNotify_Callback cb) { kseparator_disconnectnotify_callback = cb; }
    inline void setKSeparator_DrawFrame_Callback(KSeparator_DrawFrame_Callback cb) { kseparator_drawframe_callback = cb; }
    inline void setKSeparator_UpdateMicroFocus_Callback(KSeparator_UpdateMicroFocus_Callback cb) { kseparator_updatemicrofocus_callback = cb; }
    inline void setKSeparator_Create_Callback(KSeparator_Create_Callback cb) { kseparator_create_callback = cb; }
    inline void setKSeparator_Destroy_Callback(KSeparator_Destroy_Callback cb) { kseparator_destroy_callback = cb; }
    inline void setKSeparator_FocusNextChild_Callback(KSeparator_FocusNextChild_Callback cb) { kseparator_focusnextchild_callback = cb; }
    inline void setKSeparator_FocusPreviousChild_Callback(KSeparator_FocusPreviousChild_Callback cb) { kseparator_focuspreviouschild_callback = cb; }
    inline void setKSeparator_Sender_Callback(KSeparator_Sender_Callback cb) { kseparator_sender_callback = cb; }
    inline void setKSeparator_SenderSignalIndex_Callback(KSeparator_SenderSignalIndex_Callback cb) { kseparator_sendersignalindex_callback = cb; }
    inline void setKSeparator_Receivers_Callback(KSeparator_Receivers_Callback cb) { kseparator_receivers_callback = cb; }
    inline void setKSeparator_IsSignalConnected_Callback(KSeparator_IsSignalConnected_Callback cb) { kseparator_issignalconnected_callback = cb; }
    inline void setKSeparator_GetDecodedMetricF_Callback(KSeparator_GetDecodedMetricF_Callback cb) { kseparator_getdecodedmetricf_callback = cb; }

    // Base flag setters
    inline void setKSeparator_Metacall_IsBase(bool value) const { kseparator_metacall_isbase = value; }
    inline void setKSeparator_SizeHint_IsBase(bool value) const { kseparator_sizehint_isbase = value; }
    inline void setKSeparator_Event_IsBase(bool value) const { kseparator_event_isbase = value; }
    inline void setKSeparator_PaintEvent_IsBase(bool value) const { kseparator_paintevent_isbase = value; }
    inline void setKSeparator_ChangeEvent_IsBase(bool value) const { kseparator_changeevent_isbase = value; }
    inline void setKSeparator_InitStyleOption_IsBase(bool value) const { kseparator_initstyleoption_isbase = value; }
    inline void setKSeparator_DevType_IsBase(bool value) const { kseparator_devtype_isbase = value; }
    inline void setKSeparator_SetVisible_IsBase(bool value) const { kseparator_setvisible_isbase = value; }
    inline void setKSeparator_MinimumSizeHint_IsBase(bool value) const { kseparator_minimumsizehint_isbase = value; }
    inline void setKSeparator_HeightForWidth_IsBase(bool value) const { kseparator_heightforwidth_isbase = value; }
    inline void setKSeparator_HasHeightForWidth_IsBase(bool value) const { kseparator_hasheightforwidth_isbase = value; }
    inline void setKSeparator_PaintEngine_IsBase(bool value) const { kseparator_paintengine_isbase = value; }
    inline void setKSeparator_MousePressEvent_IsBase(bool value) const { kseparator_mousepressevent_isbase = value; }
    inline void setKSeparator_MouseReleaseEvent_IsBase(bool value) const { kseparator_mousereleaseevent_isbase = value; }
    inline void setKSeparator_MouseDoubleClickEvent_IsBase(bool value) const { kseparator_mousedoubleclickevent_isbase = value; }
    inline void setKSeparator_MouseMoveEvent_IsBase(bool value) const { kseparator_mousemoveevent_isbase = value; }
    inline void setKSeparator_WheelEvent_IsBase(bool value) const { kseparator_wheelevent_isbase = value; }
    inline void setKSeparator_KeyPressEvent_IsBase(bool value) const { kseparator_keypressevent_isbase = value; }
    inline void setKSeparator_KeyReleaseEvent_IsBase(bool value) const { kseparator_keyreleaseevent_isbase = value; }
    inline void setKSeparator_FocusInEvent_IsBase(bool value) const { kseparator_focusinevent_isbase = value; }
    inline void setKSeparator_FocusOutEvent_IsBase(bool value) const { kseparator_focusoutevent_isbase = value; }
    inline void setKSeparator_EnterEvent_IsBase(bool value) const { kseparator_enterevent_isbase = value; }
    inline void setKSeparator_LeaveEvent_IsBase(bool value) const { kseparator_leaveevent_isbase = value; }
    inline void setKSeparator_MoveEvent_IsBase(bool value) const { kseparator_moveevent_isbase = value; }
    inline void setKSeparator_ResizeEvent_IsBase(bool value) const { kseparator_resizeevent_isbase = value; }
    inline void setKSeparator_CloseEvent_IsBase(bool value) const { kseparator_closeevent_isbase = value; }
    inline void setKSeparator_ContextMenuEvent_IsBase(bool value) const { kseparator_contextmenuevent_isbase = value; }
    inline void setKSeparator_TabletEvent_IsBase(bool value) const { kseparator_tabletevent_isbase = value; }
    inline void setKSeparator_ActionEvent_IsBase(bool value) const { kseparator_actionevent_isbase = value; }
    inline void setKSeparator_DragEnterEvent_IsBase(bool value) const { kseparator_dragenterevent_isbase = value; }
    inline void setKSeparator_DragMoveEvent_IsBase(bool value) const { kseparator_dragmoveevent_isbase = value; }
    inline void setKSeparator_DragLeaveEvent_IsBase(bool value) const { kseparator_dragleaveevent_isbase = value; }
    inline void setKSeparator_DropEvent_IsBase(bool value) const { kseparator_dropevent_isbase = value; }
    inline void setKSeparator_ShowEvent_IsBase(bool value) const { kseparator_showevent_isbase = value; }
    inline void setKSeparator_HideEvent_IsBase(bool value) const { kseparator_hideevent_isbase = value; }
    inline void setKSeparator_NativeEvent_IsBase(bool value) const { kseparator_nativeevent_isbase = value; }
    inline void setKSeparator_Metric_IsBase(bool value) const { kseparator_metric_isbase = value; }
    inline void setKSeparator_InitPainter_IsBase(bool value) const { kseparator_initpainter_isbase = value; }
    inline void setKSeparator_Redirected_IsBase(bool value) const { kseparator_redirected_isbase = value; }
    inline void setKSeparator_SharedPainter_IsBase(bool value) const { kseparator_sharedpainter_isbase = value; }
    inline void setKSeparator_InputMethodEvent_IsBase(bool value) const { kseparator_inputmethodevent_isbase = value; }
    inline void setKSeparator_InputMethodQuery_IsBase(bool value) const { kseparator_inputmethodquery_isbase = value; }
    inline void setKSeparator_FocusNextPrevChild_IsBase(bool value) const { kseparator_focusnextprevchild_isbase = value; }
    inline void setKSeparator_EventFilter_IsBase(bool value) const { kseparator_eventfilter_isbase = value; }
    inline void setKSeparator_TimerEvent_IsBase(bool value) const { kseparator_timerevent_isbase = value; }
    inline void setKSeparator_ChildEvent_IsBase(bool value) const { kseparator_childevent_isbase = value; }
    inline void setKSeparator_CustomEvent_IsBase(bool value) const { kseparator_customevent_isbase = value; }
    inline void setKSeparator_ConnectNotify_IsBase(bool value) const { kseparator_connectnotify_isbase = value; }
    inline void setKSeparator_DisconnectNotify_IsBase(bool value) const { kseparator_disconnectnotify_isbase = value; }
    inline void setKSeparator_DrawFrame_IsBase(bool value) const { kseparator_drawframe_isbase = value; }
    inline void setKSeparator_UpdateMicroFocus_IsBase(bool value) const { kseparator_updatemicrofocus_isbase = value; }
    inline void setKSeparator_Create_IsBase(bool value) const { kseparator_create_isbase = value; }
    inline void setKSeparator_Destroy_IsBase(bool value) const { kseparator_destroy_isbase = value; }
    inline void setKSeparator_FocusNextChild_IsBase(bool value) const { kseparator_focusnextchild_isbase = value; }
    inline void setKSeparator_FocusPreviousChild_IsBase(bool value) const { kseparator_focuspreviouschild_isbase = value; }
    inline void setKSeparator_Sender_IsBase(bool value) const { kseparator_sender_isbase = value; }
    inline void setKSeparator_SenderSignalIndex_IsBase(bool value) const { kseparator_sendersignalindex_isbase = value; }
    inline void setKSeparator_Receivers_IsBase(bool value) const { kseparator_receivers_isbase = value; }
    inline void setKSeparator_IsSignalConnected_IsBase(bool value) const { kseparator_issignalconnected_isbase = value; }
    inline void setKSeparator_GetDecodedMetricF_IsBase(bool value) const { kseparator_getdecodedmetricf_isbase = value; }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (kseparator_metacall_isbase) {
            kseparator_metacall_isbase = false;
            return KSeparator::qt_metacall(param1, param2, param3);
        } else if (kseparator_metacall_callback != nullptr) {
            int cbval1 = static_cast<int>(param1);
            int cbval2 = param2;
            void** cbval3 = param3;

            int callback_ret = kseparator_metacall_callback(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        } else {
            return KSeparator::qt_metacall(param1, param2, param3);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QSize sizeHint() const override {
        if (kseparator_sizehint_isbase) {
            kseparator_sizehint_isbase = false;
            return KSeparator::sizeHint();
        } else if (kseparator_sizehint_callback != nullptr) {
            QSize* callback_ret = kseparator_sizehint_callback();
            return *callback_ret;
        } else {
            return KSeparator::sizeHint();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* e) override {
        if (kseparator_event_isbase) {
            kseparator_event_isbase = false;
            return KSeparator::event(e);
        } else if (kseparator_event_callback != nullptr) {
            QEvent* cbval1 = e;

            bool callback_ret = kseparator_event_callback(this, cbval1);
            return callback_ret;
        } else {
            return KSeparator::event(e);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void paintEvent(QPaintEvent* param1) override {
        if (kseparator_paintevent_isbase) {
            kseparator_paintevent_isbase = false;
            KSeparator::paintEvent(param1);
        } else if (kseparator_paintevent_callback != nullptr) {
            QPaintEvent* cbval1 = param1;

            kseparator_paintevent_callback(this, cbval1);
        } else {
            KSeparator::paintEvent(param1);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void changeEvent(QEvent* param1) override {
        if (kseparator_changeevent_isbase) {
            kseparator_changeevent_isbase = false;
            KSeparator::changeEvent(param1);
        } else if (kseparator_changeevent_callback != nullptr) {
            QEvent* cbval1 = param1;

            kseparator_changeevent_callback(this, cbval1);
        } else {
            KSeparator::changeEvent(param1);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void initStyleOption(QStyleOptionFrame* option) const override {
        if (kseparator_initstyleoption_isbase) {
            kseparator_initstyleoption_isbase = false;
            KSeparator::initStyleOption(option);
        } else if (kseparator_initstyleoption_callback != nullptr) {
            QStyleOptionFrame* cbval1 = option;

            kseparator_initstyleoption_callback(this, cbval1);
        } else {
            KSeparator::initStyleOption(option);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual int devType() const override {
        if (kseparator_devtype_isbase) {
            kseparator_devtype_isbase = false;
            return KSeparator::devType();
        } else if (kseparator_devtype_callback != nullptr) {
            int callback_ret = kseparator_devtype_callback();
            return static_cast<int>(callback_ret);
        } else {
            return KSeparator::devType();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void setVisible(bool visible) override {
        if (kseparator_setvisible_isbase) {
            kseparator_setvisible_isbase = false;
            KSeparator::setVisible(visible);
        } else if (kseparator_setvisible_callback != nullptr) {
            bool cbval1 = visible;

            kseparator_setvisible_callback(this, cbval1);
        } else {
            KSeparator::setVisible(visible);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QSize minimumSizeHint() const override {
        if (kseparator_minimumsizehint_isbase) {
            kseparator_minimumsizehint_isbase = false;
            return KSeparator::minimumSizeHint();
        } else if (kseparator_minimumsizehint_callback != nullptr) {
            QSize* callback_ret = kseparator_minimumsizehint_callback();
            return *callback_ret;
        } else {
            return KSeparator::minimumSizeHint();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual int heightForWidth(int param1) const override {
        if (kseparator_heightforwidth_isbase) {
            kseparator_heightforwidth_isbase = false;
            return KSeparator::heightForWidth(param1);
        } else if (kseparator_heightforwidth_callback != nullptr) {
            int cbval1 = param1;

            int callback_ret = kseparator_heightforwidth_callback(this, cbval1);
            return static_cast<int>(callback_ret);
        } else {
            return KSeparator::heightForWidth(param1);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool hasHeightForWidth() const override {
        if (kseparator_hasheightforwidth_isbase) {
            kseparator_hasheightforwidth_isbase = false;
            return KSeparator::hasHeightForWidth();
        } else if (kseparator_hasheightforwidth_callback != nullptr) {
            bool callback_ret = kseparator_hasheightforwidth_callback();
            return callback_ret;
        } else {
            return KSeparator::hasHeightForWidth();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QPaintEngine* paintEngine() const override {
        if (kseparator_paintengine_isbase) {
            kseparator_paintengine_isbase = false;
            return KSeparator::paintEngine();
        } else if (kseparator_paintengine_callback != nullptr) {
            QPaintEngine* callback_ret = kseparator_paintengine_callback();
            return callback_ret;
        } else {
            return KSeparator::paintEngine();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void mousePressEvent(QMouseEvent* event) override {
        if (kseparator_mousepressevent_isbase) {
            kseparator_mousepressevent_isbase = false;
            KSeparator::mousePressEvent(event);
        } else if (kseparator_mousepressevent_callback != nullptr) {
            QMouseEvent* cbval1 = event;

            kseparator_mousepressevent_callback(this, cbval1);
        } else {
            KSeparator::mousePressEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseReleaseEvent(QMouseEvent* event) override {
        if (kseparator_mousereleaseevent_isbase) {
            kseparator_mousereleaseevent_isbase = false;
            KSeparator::mouseReleaseEvent(event);
        } else if (kseparator_mousereleaseevent_callback != nullptr) {
            QMouseEvent* cbval1 = event;

            kseparator_mousereleaseevent_callback(this, cbval1);
        } else {
            KSeparator::mouseReleaseEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseDoubleClickEvent(QMouseEvent* event) override {
        if (kseparator_mousedoubleclickevent_isbase) {
            kseparator_mousedoubleclickevent_isbase = false;
            KSeparator::mouseDoubleClickEvent(event);
        } else if (kseparator_mousedoubleclickevent_callback != nullptr) {
            QMouseEvent* cbval1 = event;

            kseparator_mousedoubleclickevent_callback(this, cbval1);
        } else {
            KSeparator::mouseDoubleClickEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseMoveEvent(QMouseEvent* event) override {
        if (kseparator_mousemoveevent_isbase) {
            kseparator_mousemoveevent_isbase = false;
            KSeparator::mouseMoveEvent(event);
        } else if (kseparator_mousemoveevent_callback != nullptr) {
            QMouseEvent* cbval1 = event;

            kseparator_mousemoveevent_callback(this, cbval1);
        } else {
            KSeparator::mouseMoveEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void wheelEvent(QWheelEvent* event) override {
        if (kseparator_wheelevent_isbase) {
            kseparator_wheelevent_isbase = false;
            KSeparator::wheelEvent(event);
        } else if (kseparator_wheelevent_callback != nullptr) {
            QWheelEvent* cbval1 = event;

            kseparator_wheelevent_callback(this, cbval1);
        } else {
            KSeparator::wheelEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void keyPressEvent(QKeyEvent* event) override {
        if (kseparator_keypressevent_isbase) {
            kseparator_keypressevent_isbase = false;
            KSeparator::keyPressEvent(event);
        } else if (kseparator_keypressevent_callback != nullptr) {
            QKeyEvent* cbval1 = event;

            kseparator_keypressevent_callback(this, cbval1);
        } else {
            KSeparator::keyPressEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void keyReleaseEvent(QKeyEvent* event) override {
        if (kseparator_keyreleaseevent_isbase) {
            kseparator_keyreleaseevent_isbase = false;
            KSeparator::keyReleaseEvent(event);
        } else if (kseparator_keyreleaseevent_callback != nullptr) {
            QKeyEvent* cbval1 = event;

            kseparator_keyreleaseevent_callback(this, cbval1);
        } else {
            KSeparator::keyReleaseEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void focusInEvent(QFocusEvent* event) override {
        if (kseparator_focusinevent_isbase) {
            kseparator_focusinevent_isbase = false;
            KSeparator::focusInEvent(event);
        } else if (kseparator_focusinevent_callback != nullptr) {
            QFocusEvent* cbval1 = event;

            kseparator_focusinevent_callback(this, cbval1);
        } else {
            KSeparator::focusInEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void focusOutEvent(QFocusEvent* event) override {
        if (kseparator_focusoutevent_isbase) {
            kseparator_focusoutevent_isbase = false;
            KSeparator::focusOutEvent(event);
        } else if (kseparator_focusoutevent_callback != nullptr) {
            QFocusEvent* cbval1 = event;

            kseparator_focusoutevent_callback(this, cbval1);
        } else {
            KSeparator::focusOutEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void enterEvent(QEnterEvent* event) override {
        if (kseparator_enterevent_isbase) {
            kseparator_enterevent_isbase = false;
            KSeparator::enterEvent(event);
        } else if (kseparator_enterevent_callback != nullptr) {
            QEnterEvent* cbval1 = event;

            kseparator_enterevent_callback(this, cbval1);
        } else {
            KSeparator::enterEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void leaveEvent(QEvent* event) override {
        if (kseparator_leaveevent_isbase) {
            kseparator_leaveevent_isbase = false;
            KSeparator::leaveEvent(event);
        } else if (kseparator_leaveevent_callback != nullptr) {
            QEvent* cbval1 = event;

            kseparator_leaveevent_callback(this, cbval1);
        } else {
            KSeparator::leaveEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void moveEvent(QMoveEvent* event) override {
        if (kseparator_moveevent_isbase) {
            kseparator_moveevent_isbase = false;
            KSeparator::moveEvent(event);
        } else if (kseparator_moveevent_callback != nullptr) {
            QMoveEvent* cbval1 = event;

            kseparator_moveevent_callback(this, cbval1);
        } else {
            KSeparator::moveEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void resizeEvent(QResizeEvent* event) override {
        if (kseparator_resizeevent_isbase) {
            kseparator_resizeevent_isbase = false;
            KSeparator::resizeEvent(event);
        } else if (kseparator_resizeevent_callback != nullptr) {
            QResizeEvent* cbval1 = event;

            kseparator_resizeevent_callback(this, cbval1);
        } else {
            KSeparator::resizeEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void closeEvent(QCloseEvent* event) override {
        if (kseparator_closeevent_isbase) {
            kseparator_closeevent_isbase = false;
            KSeparator::closeEvent(event);
        } else if (kseparator_closeevent_callback != nullptr) {
            QCloseEvent* cbval1 = event;

            kseparator_closeevent_callback(this, cbval1);
        } else {
            KSeparator::closeEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void contextMenuEvent(QContextMenuEvent* event) override {
        if (kseparator_contextmenuevent_isbase) {
            kseparator_contextmenuevent_isbase = false;
            KSeparator::contextMenuEvent(event);
        } else if (kseparator_contextmenuevent_callback != nullptr) {
            QContextMenuEvent* cbval1 = event;

            kseparator_contextmenuevent_callback(this, cbval1);
        } else {
            KSeparator::contextMenuEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void tabletEvent(QTabletEvent* event) override {
        if (kseparator_tabletevent_isbase) {
            kseparator_tabletevent_isbase = false;
            KSeparator::tabletEvent(event);
        } else if (kseparator_tabletevent_callback != nullptr) {
            QTabletEvent* cbval1 = event;

            kseparator_tabletevent_callback(this, cbval1);
        } else {
            KSeparator::tabletEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void actionEvent(QActionEvent* event) override {
        if (kseparator_actionevent_isbase) {
            kseparator_actionevent_isbase = false;
            KSeparator::actionEvent(event);
        } else if (kseparator_actionevent_callback != nullptr) {
            QActionEvent* cbval1 = event;

            kseparator_actionevent_callback(this, cbval1);
        } else {
            KSeparator::actionEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragEnterEvent(QDragEnterEvent* event) override {
        if (kseparator_dragenterevent_isbase) {
            kseparator_dragenterevent_isbase = false;
            KSeparator::dragEnterEvent(event);
        } else if (kseparator_dragenterevent_callback != nullptr) {
            QDragEnterEvent* cbval1 = event;

            kseparator_dragenterevent_callback(this, cbval1);
        } else {
            KSeparator::dragEnterEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragMoveEvent(QDragMoveEvent* event) override {
        if (kseparator_dragmoveevent_isbase) {
            kseparator_dragmoveevent_isbase = false;
            KSeparator::dragMoveEvent(event);
        } else if (kseparator_dragmoveevent_callback != nullptr) {
            QDragMoveEvent* cbval1 = event;

            kseparator_dragmoveevent_callback(this, cbval1);
        } else {
            KSeparator::dragMoveEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragLeaveEvent(QDragLeaveEvent* event) override {
        if (kseparator_dragleaveevent_isbase) {
            kseparator_dragleaveevent_isbase = false;
            KSeparator::dragLeaveEvent(event);
        } else if (kseparator_dragleaveevent_callback != nullptr) {
            QDragLeaveEvent* cbval1 = event;

            kseparator_dragleaveevent_callback(this, cbval1);
        } else {
            KSeparator::dragLeaveEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void dropEvent(QDropEvent* event) override {
        if (kseparator_dropevent_isbase) {
            kseparator_dropevent_isbase = false;
            KSeparator::dropEvent(event);
        } else if (kseparator_dropevent_callback != nullptr) {
            QDropEvent* cbval1 = event;

            kseparator_dropevent_callback(this, cbval1);
        } else {
            KSeparator::dropEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void showEvent(QShowEvent* event) override {
        if (kseparator_showevent_isbase) {
            kseparator_showevent_isbase = false;
            KSeparator::showEvent(event);
        } else if (kseparator_showevent_callback != nullptr) {
            QShowEvent* cbval1 = event;

            kseparator_showevent_callback(this, cbval1);
        } else {
            KSeparator::showEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void hideEvent(QHideEvent* event) override {
        if (kseparator_hideevent_isbase) {
            kseparator_hideevent_isbase = false;
            KSeparator::hideEvent(event);
        } else if (kseparator_hideevent_callback != nullptr) {
            QHideEvent* cbval1 = event;

            kseparator_hideevent_callback(this, cbval1);
        } else {
            KSeparator::hideEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool nativeEvent(const QByteArray& eventType, void* message, qintptr* result) override {
        if (kseparator_nativeevent_isbase) {
            kseparator_nativeevent_isbase = false;
            return KSeparator::nativeEvent(eventType, message, result);
        } else if (kseparator_nativeevent_callback != nullptr) {
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

            bool callback_ret = kseparator_nativeevent_callback(this, cbval1, cbval2, cbval3);
            return callback_ret;
        } else {
            return KSeparator::nativeEvent(eventType, message, result);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual int metric(QPaintDevice::PaintDeviceMetric param1) const override {
        if (kseparator_metric_isbase) {
            kseparator_metric_isbase = false;
            return KSeparator::metric(param1);
        } else if (kseparator_metric_callback != nullptr) {
            int cbval1 = static_cast<int>(param1);

            int callback_ret = kseparator_metric_callback(this, cbval1);
            return static_cast<int>(callback_ret);
        } else {
            return KSeparator::metric(param1);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void initPainter(QPainter* painter) const override {
        if (kseparator_initpainter_isbase) {
            kseparator_initpainter_isbase = false;
            KSeparator::initPainter(painter);
        } else if (kseparator_initpainter_callback != nullptr) {
            QPainter* cbval1 = painter;

            kseparator_initpainter_callback(this, cbval1);
        } else {
            KSeparator::initPainter(painter);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QPaintDevice* redirected(QPoint* offset) const override {
        if (kseparator_redirected_isbase) {
            kseparator_redirected_isbase = false;
            return KSeparator::redirected(offset);
        } else if (kseparator_redirected_callback != nullptr) {
            QPoint* cbval1 = offset;

            QPaintDevice* callback_ret = kseparator_redirected_callback(this, cbval1);
            return callback_ret;
        } else {
            return KSeparator::redirected(offset);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QPainter* sharedPainter() const override {
        if (kseparator_sharedpainter_isbase) {
            kseparator_sharedpainter_isbase = false;
            return KSeparator::sharedPainter();
        } else if (kseparator_sharedpainter_callback != nullptr) {
            QPainter* callback_ret = kseparator_sharedpainter_callback();
            return callback_ret;
        } else {
            return KSeparator::sharedPainter();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void inputMethodEvent(QInputMethodEvent* param1) override {
        if (kseparator_inputmethodevent_isbase) {
            kseparator_inputmethodevent_isbase = false;
            KSeparator::inputMethodEvent(param1);
        } else if (kseparator_inputmethodevent_callback != nullptr) {
            QInputMethodEvent* cbval1 = param1;

            kseparator_inputmethodevent_callback(this, cbval1);
        } else {
            KSeparator::inputMethodEvent(param1);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QVariant inputMethodQuery(Qt::InputMethodQuery param1) const override {
        if (kseparator_inputmethodquery_isbase) {
            kseparator_inputmethodquery_isbase = false;
            return KSeparator::inputMethodQuery(param1);
        } else if (kseparator_inputmethodquery_callback != nullptr) {
            int cbval1 = static_cast<int>(param1);

            QVariant* callback_ret = kseparator_inputmethodquery_callback(this, cbval1);
            return *callback_ret;
        } else {
            return KSeparator::inputMethodQuery(param1);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool focusNextPrevChild(bool next) override {
        if (kseparator_focusnextprevchild_isbase) {
            kseparator_focusnextprevchild_isbase = false;
            return KSeparator::focusNextPrevChild(next);
        } else if (kseparator_focusnextprevchild_callback != nullptr) {
            bool cbval1 = next;

            bool callback_ret = kseparator_focusnextprevchild_callback(this, cbval1);
            return callback_ret;
        } else {
            return KSeparator::focusNextPrevChild(next);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* watched, QEvent* event) override {
        if (kseparator_eventfilter_isbase) {
            kseparator_eventfilter_isbase = false;
            return KSeparator::eventFilter(watched, event);
        } else if (kseparator_eventfilter_callback != nullptr) {
            QObject* cbval1 = watched;
            QEvent* cbval2 = event;

            bool callback_ret = kseparator_eventfilter_callback(this, cbval1, cbval2);
            return callback_ret;
        } else {
            return KSeparator::eventFilter(watched, event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (kseparator_timerevent_isbase) {
            kseparator_timerevent_isbase = false;
            KSeparator::timerEvent(event);
        } else if (kseparator_timerevent_callback != nullptr) {
            QTimerEvent* cbval1 = event;

            kseparator_timerevent_callback(this, cbval1);
        } else {
            KSeparator::timerEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (kseparator_childevent_isbase) {
            kseparator_childevent_isbase = false;
            KSeparator::childEvent(event);
        } else if (kseparator_childevent_callback != nullptr) {
            QChildEvent* cbval1 = event;

            kseparator_childevent_callback(this, cbval1);
        } else {
            KSeparator::childEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (kseparator_customevent_isbase) {
            kseparator_customevent_isbase = false;
            KSeparator::customEvent(event);
        } else if (kseparator_customevent_callback != nullptr) {
            QEvent* cbval1 = event;

            kseparator_customevent_callback(this, cbval1);
        } else {
            KSeparator::customEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (kseparator_connectnotify_isbase) {
            kseparator_connectnotify_isbase = false;
            KSeparator::connectNotify(signal);
        } else if (kseparator_connectnotify_callback != nullptr) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            kseparator_connectnotify_callback(this, cbval1);
        } else {
            KSeparator::connectNotify(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (kseparator_disconnectnotify_isbase) {
            kseparator_disconnectnotify_isbase = false;
            KSeparator::disconnectNotify(signal);
        } else if (kseparator_disconnectnotify_callback != nullptr) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            kseparator_disconnectnotify_callback(this, cbval1);
        } else {
            KSeparator::disconnectNotify(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    void drawFrame(QPainter* param1) {
        if (kseparator_drawframe_isbase) {
            kseparator_drawframe_isbase = false;
            KSeparator::drawFrame(param1);
        } else if (kseparator_drawframe_callback != nullptr) {
            QPainter* cbval1 = param1;

            kseparator_drawframe_callback(this, cbval1);
        } else {
            KSeparator::drawFrame(param1);
        }
    }

    // Virtual method for C ABI access and custom callback
    void updateMicroFocus() {
        if (kseparator_updatemicrofocus_isbase) {
            kseparator_updatemicrofocus_isbase = false;
            KSeparator::updateMicroFocus();
        } else if (kseparator_updatemicrofocus_callback != nullptr) {
            kseparator_updatemicrofocus_callback();
        } else {
            KSeparator::updateMicroFocus();
        }
    }

    // Virtual method for C ABI access and custom callback
    void create() {
        if (kseparator_create_isbase) {
            kseparator_create_isbase = false;
            KSeparator::create();
        } else if (kseparator_create_callback != nullptr) {
            kseparator_create_callback();
        } else {
            KSeparator::create();
        }
    }

    // Virtual method for C ABI access and custom callback
    void destroy() {
        if (kseparator_destroy_isbase) {
            kseparator_destroy_isbase = false;
            KSeparator::destroy();
        } else if (kseparator_destroy_callback != nullptr) {
            kseparator_destroy_callback();
        } else {
            KSeparator::destroy();
        }
    }

    // Virtual method for C ABI access and custom callback
    bool focusNextChild() {
        if (kseparator_focusnextchild_isbase) {
            kseparator_focusnextchild_isbase = false;
            return KSeparator::focusNextChild();
        } else if (kseparator_focusnextchild_callback != nullptr) {
            bool callback_ret = kseparator_focusnextchild_callback();
            return callback_ret;
        } else {
            return KSeparator::focusNextChild();
        }
    }

    // Virtual method for C ABI access and custom callback
    bool focusPreviousChild() {
        if (kseparator_focuspreviouschild_isbase) {
            kseparator_focuspreviouschild_isbase = false;
            return KSeparator::focusPreviousChild();
        } else if (kseparator_focuspreviouschild_callback != nullptr) {
            bool callback_ret = kseparator_focuspreviouschild_callback();
            return callback_ret;
        } else {
            return KSeparator::focusPreviousChild();
        }
    }

    // Virtual method for C ABI access and custom callback
    QObject* sender() const {
        if (kseparator_sender_isbase) {
            kseparator_sender_isbase = false;
            return KSeparator::sender();
        } else if (kseparator_sender_callback != nullptr) {
            QObject* callback_ret = kseparator_sender_callback();
            return callback_ret;
        } else {
            return KSeparator::sender();
        }
    }

    // Virtual method for C ABI access and custom callback
    int senderSignalIndex() const {
        if (kseparator_sendersignalindex_isbase) {
            kseparator_sendersignalindex_isbase = false;
            return KSeparator::senderSignalIndex();
        } else if (kseparator_sendersignalindex_callback != nullptr) {
            int callback_ret = kseparator_sendersignalindex_callback();
            return static_cast<int>(callback_ret);
        } else {
            return KSeparator::senderSignalIndex();
        }
    }

    // Virtual method for C ABI access and custom callback
    int receivers(const char* signal) const {
        if (kseparator_receivers_isbase) {
            kseparator_receivers_isbase = false;
            return KSeparator::receivers(signal);
        } else if (kseparator_receivers_callback != nullptr) {
            const char* cbval1 = (const char*)signal;

            int callback_ret = kseparator_receivers_callback(this, cbval1);
            return static_cast<int>(callback_ret);
        } else {
            return KSeparator::receivers(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    bool isSignalConnected(const QMetaMethod& signal) const {
        if (kseparator_issignalconnected_isbase) {
            kseparator_issignalconnected_isbase = false;
            return KSeparator::isSignalConnected(signal);
        } else if (kseparator_issignalconnected_callback != nullptr) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            bool callback_ret = kseparator_issignalconnected_callback(this, cbval1);
            return callback_ret;
        } else {
            return KSeparator::isSignalConnected(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    double getDecodedMetricF(QPaintDevice::PaintDeviceMetric metricA, QPaintDevice::PaintDeviceMetric metricB) const {
        if (kseparator_getdecodedmetricf_isbase) {
            kseparator_getdecodedmetricf_isbase = false;
            return KSeparator::getDecodedMetricF(metricA, metricB);
        } else if (kseparator_getdecodedmetricf_callback != nullptr) {
            int cbval1 = static_cast<int>(metricA);
            int cbval2 = static_cast<int>(metricB);

            double callback_ret = kseparator_getdecodedmetricf_callback(this, cbval1, cbval2);
            return static_cast<double>(callback_ret);
        } else {
            return KSeparator::getDecodedMetricF(metricA, metricB);
        }
    }

    // Friend functions
    friend bool KSeparator_Event(KSeparator* self, QEvent* e);
    friend bool KSeparator_QBaseEvent(KSeparator* self, QEvent* e);
    friend void KSeparator_PaintEvent(KSeparator* self, QPaintEvent* param1);
    friend void KSeparator_QBasePaintEvent(KSeparator* self, QPaintEvent* param1);
    friend void KSeparator_ChangeEvent(KSeparator* self, QEvent* param1);
    friend void KSeparator_QBaseChangeEvent(KSeparator* self, QEvent* param1);
    friend void KSeparator_InitStyleOption(const KSeparator* self, QStyleOptionFrame* option);
    friend void KSeparator_QBaseInitStyleOption(const KSeparator* self, QStyleOptionFrame* option);
    friend void KSeparator_MousePressEvent(KSeparator* self, QMouseEvent* event);
    friend void KSeparator_QBaseMousePressEvent(KSeparator* self, QMouseEvent* event);
    friend void KSeparator_MouseReleaseEvent(KSeparator* self, QMouseEvent* event);
    friend void KSeparator_QBaseMouseReleaseEvent(KSeparator* self, QMouseEvent* event);
    friend void KSeparator_MouseDoubleClickEvent(KSeparator* self, QMouseEvent* event);
    friend void KSeparator_QBaseMouseDoubleClickEvent(KSeparator* self, QMouseEvent* event);
    friend void KSeparator_MouseMoveEvent(KSeparator* self, QMouseEvent* event);
    friend void KSeparator_QBaseMouseMoveEvent(KSeparator* self, QMouseEvent* event);
    friend void KSeparator_WheelEvent(KSeparator* self, QWheelEvent* event);
    friend void KSeparator_QBaseWheelEvent(KSeparator* self, QWheelEvent* event);
    friend void KSeparator_KeyPressEvent(KSeparator* self, QKeyEvent* event);
    friend void KSeparator_QBaseKeyPressEvent(KSeparator* self, QKeyEvent* event);
    friend void KSeparator_KeyReleaseEvent(KSeparator* self, QKeyEvent* event);
    friend void KSeparator_QBaseKeyReleaseEvent(KSeparator* self, QKeyEvent* event);
    friend void KSeparator_FocusInEvent(KSeparator* self, QFocusEvent* event);
    friend void KSeparator_QBaseFocusInEvent(KSeparator* self, QFocusEvent* event);
    friend void KSeparator_FocusOutEvent(KSeparator* self, QFocusEvent* event);
    friend void KSeparator_QBaseFocusOutEvent(KSeparator* self, QFocusEvent* event);
    friend void KSeparator_EnterEvent(KSeparator* self, QEnterEvent* event);
    friend void KSeparator_QBaseEnterEvent(KSeparator* self, QEnterEvent* event);
    friend void KSeparator_LeaveEvent(KSeparator* self, QEvent* event);
    friend void KSeparator_QBaseLeaveEvent(KSeparator* self, QEvent* event);
    friend void KSeparator_MoveEvent(KSeparator* self, QMoveEvent* event);
    friend void KSeparator_QBaseMoveEvent(KSeparator* self, QMoveEvent* event);
    friend void KSeparator_ResizeEvent(KSeparator* self, QResizeEvent* event);
    friend void KSeparator_QBaseResizeEvent(KSeparator* self, QResizeEvent* event);
    friend void KSeparator_CloseEvent(KSeparator* self, QCloseEvent* event);
    friend void KSeparator_QBaseCloseEvent(KSeparator* self, QCloseEvent* event);
    friend void KSeparator_ContextMenuEvent(KSeparator* self, QContextMenuEvent* event);
    friend void KSeparator_QBaseContextMenuEvent(KSeparator* self, QContextMenuEvent* event);
    friend void KSeparator_TabletEvent(KSeparator* self, QTabletEvent* event);
    friend void KSeparator_QBaseTabletEvent(KSeparator* self, QTabletEvent* event);
    friend void KSeparator_ActionEvent(KSeparator* self, QActionEvent* event);
    friend void KSeparator_QBaseActionEvent(KSeparator* self, QActionEvent* event);
    friend void KSeparator_DragEnterEvent(KSeparator* self, QDragEnterEvent* event);
    friend void KSeparator_QBaseDragEnterEvent(KSeparator* self, QDragEnterEvent* event);
    friend void KSeparator_DragMoveEvent(KSeparator* self, QDragMoveEvent* event);
    friend void KSeparator_QBaseDragMoveEvent(KSeparator* self, QDragMoveEvent* event);
    friend void KSeparator_DragLeaveEvent(KSeparator* self, QDragLeaveEvent* event);
    friend void KSeparator_QBaseDragLeaveEvent(KSeparator* self, QDragLeaveEvent* event);
    friend void KSeparator_DropEvent(KSeparator* self, QDropEvent* event);
    friend void KSeparator_QBaseDropEvent(KSeparator* self, QDropEvent* event);
    friend void KSeparator_ShowEvent(KSeparator* self, QShowEvent* event);
    friend void KSeparator_QBaseShowEvent(KSeparator* self, QShowEvent* event);
    friend void KSeparator_HideEvent(KSeparator* self, QHideEvent* event);
    friend void KSeparator_QBaseHideEvent(KSeparator* self, QHideEvent* event);
    friend bool KSeparator_NativeEvent(KSeparator* self, const libqt_string eventType, void* message, intptr_t* result);
    friend bool KSeparator_QBaseNativeEvent(KSeparator* self, const libqt_string eventType, void* message, intptr_t* result);
    friend int KSeparator_Metric(const KSeparator* self, int param1);
    friend int KSeparator_QBaseMetric(const KSeparator* self, int param1);
    friend void KSeparator_InitPainter(const KSeparator* self, QPainter* painter);
    friend void KSeparator_QBaseInitPainter(const KSeparator* self, QPainter* painter);
    friend QPaintDevice* KSeparator_Redirected(const KSeparator* self, QPoint* offset);
    friend QPaintDevice* KSeparator_QBaseRedirected(const KSeparator* self, QPoint* offset);
    friend QPainter* KSeparator_SharedPainter(const KSeparator* self);
    friend QPainter* KSeparator_QBaseSharedPainter(const KSeparator* self);
    friend void KSeparator_InputMethodEvent(KSeparator* self, QInputMethodEvent* param1);
    friend void KSeparator_QBaseInputMethodEvent(KSeparator* self, QInputMethodEvent* param1);
    friend bool KSeparator_FocusNextPrevChild(KSeparator* self, bool next);
    friend bool KSeparator_QBaseFocusNextPrevChild(KSeparator* self, bool next);
    friend void KSeparator_TimerEvent(KSeparator* self, QTimerEvent* event);
    friend void KSeparator_QBaseTimerEvent(KSeparator* self, QTimerEvent* event);
    friend void KSeparator_ChildEvent(KSeparator* self, QChildEvent* event);
    friend void KSeparator_QBaseChildEvent(KSeparator* self, QChildEvent* event);
    friend void KSeparator_CustomEvent(KSeparator* self, QEvent* event);
    friend void KSeparator_QBaseCustomEvent(KSeparator* self, QEvent* event);
    friend void KSeparator_ConnectNotify(KSeparator* self, const QMetaMethod* signal);
    friend void KSeparator_QBaseConnectNotify(KSeparator* self, const QMetaMethod* signal);
    friend void KSeparator_DisconnectNotify(KSeparator* self, const QMetaMethod* signal);
    friend void KSeparator_QBaseDisconnectNotify(KSeparator* self, const QMetaMethod* signal);
    friend void KSeparator_DrawFrame(KSeparator* self, QPainter* param1);
    friend void KSeparator_QBaseDrawFrame(KSeparator* self, QPainter* param1);
    friend void KSeparator_UpdateMicroFocus(KSeparator* self);
    friend void KSeparator_QBaseUpdateMicroFocus(KSeparator* self);
    friend void KSeparator_Create(KSeparator* self);
    friend void KSeparator_QBaseCreate(KSeparator* self);
    friend void KSeparator_Destroy(KSeparator* self);
    friend void KSeparator_QBaseDestroy(KSeparator* self);
    friend bool KSeparator_FocusNextChild(KSeparator* self);
    friend bool KSeparator_QBaseFocusNextChild(KSeparator* self);
    friend bool KSeparator_FocusPreviousChild(KSeparator* self);
    friend bool KSeparator_QBaseFocusPreviousChild(KSeparator* self);
    friend QObject* KSeparator_Sender(const KSeparator* self);
    friend QObject* KSeparator_QBaseSender(const KSeparator* self);
    friend int KSeparator_SenderSignalIndex(const KSeparator* self);
    friend int KSeparator_QBaseSenderSignalIndex(const KSeparator* self);
    friend int KSeparator_Receivers(const KSeparator* self, const char* signal);
    friend int KSeparator_QBaseReceivers(const KSeparator* self, const char* signal);
    friend bool KSeparator_IsSignalConnected(const KSeparator* self, const QMetaMethod* signal);
    friend bool KSeparator_QBaseIsSignalConnected(const KSeparator* self, const QMetaMethod* signal);
    friend double KSeparator_GetDecodedMetricF(const KSeparator* self, int metricA, int metricB);
    friend double KSeparator_QBaseGetDecodedMetricF(const KSeparator* self, int metricA, int metricB);
};

#endif
