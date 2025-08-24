#pragma once
#ifndef SRC_EXTRAS_KWIDGETSADDONSC_LIBVIRTUALKCHARSELECT_H
#define SRC_EXTRAS_KWIDGETSADDONSC_LIBVIRTUALKCHARSELECT_H

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

// This class is a subclass of KCharSelect so that we can call protected methods
class VirtualKCharSelect final : public KCharSelect {

  public:
    // Virtual class boolean flag
    bool isVirtualKCharSelect = true;

    // Virtual class public types (including callbacks)
    using KCharSelect_Metacall_Callback = int (*)(KCharSelect*, int, int, void**);
    using KCharSelect_SizeHint_Callback = QSize* (*)();
    using KCharSelect_DevType_Callback = int (*)();
    using KCharSelect_SetVisible_Callback = void (*)(KCharSelect*, bool);
    using KCharSelect_MinimumSizeHint_Callback = QSize* (*)();
    using KCharSelect_HeightForWidth_Callback = int (*)(const KCharSelect*, int);
    using KCharSelect_HasHeightForWidth_Callback = bool (*)();
    using KCharSelect_PaintEngine_Callback = QPaintEngine* (*)();
    using KCharSelect_Event_Callback = bool (*)(KCharSelect*, QEvent*);
    using KCharSelect_MousePressEvent_Callback = void (*)(KCharSelect*, QMouseEvent*);
    using KCharSelect_MouseReleaseEvent_Callback = void (*)(KCharSelect*, QMouseEvent*);
    using KCharSelect_MouseDoubleClickEvent_Callback = void (*)(KCharSelect*, QMouseEvent*);
    using KCharSelect_MouseMoveEvent_Callback = void (*)(KCharSelect*, QMouseEvent*);
    using KCharSelect_WheelEvent_Callback = void (*)(KCharSelect*, QWheelEvent*);
    using KCharSelect_KeyPressEvent_Callback = void (*)(KCharSelect*, QKeyEvent*);
    using KCharSelect_KeyReleaseEvent_Callback = void (*)(KCharSelect*, QKeyEvent*);
    using KCharSelect_FocusInEvent_Callback = void (*)(KCharSelect*, QFocusEvent*);
    using KCharSelect_FocusOutEvent_Callback = void (*)(KCharSelect*, QFocusEvent*);
    using KCharSelect_EnterEvent_Callback = void (*)(KCharSelect*, QEnterEvent*);
    using KCharSelect_LeaveEvent_Callback = void (*)(KCharSelect*, QEvent*);
    using KCharSelect_PaintEvent_Callback = void (*)(KCharSelect*, QPaintEvent*);
    using KCharSelect_MoveEvent_Callback = void (*)(KCharSelect*, QMoveEvent*);
    using KCharSelect_ResizeEvent_Callback = void (*)(KCharSelect*, QResizeEvent*);
    using KCharSelect_CloseEvent_Callback = void (*)(KCharSelect*, QCloseEvent*);
    using KCharSelect_ContextMenuEvent_Callback = void (*)(KCharSelect*, QContextMenuEvent*);
    using KCharSelect_TabletEvent_Callback = void (*)(KCharSelect*, QTabletEvent*);
    using KCharSelect_ActionEvent_Callback = void (*)(KCharSelect*, QActionEvent*);
    using KCharSelect_DragEnterEvent_Callback = void (*)(KCharSelect*, QDragEnterEvent*);
    using KCharSelect_DragMoveEvent_Callback = void (*)(KCharSelect*, QDragMoveEvent*);
    using KCharSelect_DragLeaveEvent_Callback = void (*)(KCharSelect*, QDragLeaveEvent*);
    using KCharSelect_DropEvent_Callback = void (*)(KCharSelect*, QDropEvent*);
    using KCharSelect_ShowEvent_Callback = void (*)(KCharSelect*, QShowEvent*);
    using KCharSelect_HideEvent_Callback = void (*)(KCharSelect*, QHideEvent*);
    using KCharSelect_NativeEvent_Callback = bool (*)(KCharSelect*, libqt_string, void*, intptr_t*);
    using KCharSelect_ChangeEvent_Callback = void (*)(KCharSelect*, QEvent*);
    using KCharSelect_Metric_Callback = int (*)(const KCharSelect*, int);
    using KCharSelect_InitPainter_Callback = void (*)(const KCharSelect*, QPainter*);
    using KCharSelect_Redirected_Callback = QPaintDevice* (*)(const KCharSelect*, QPoint*);
    using KCharSelect_SharedPainter_Callback = QPainter* (*)();
    using KCharSelect_InputMethodEvent_Callback = void (*)(KCharSelect*, QInputMethodEvent*);
    using KCharSelect_InputMethodQuery_Callback = QVariant* (*)(const KCharSelect*, int);
    using KCharSelect_FocusNextPrevChild_Callback = bool (*)(KCharSelect*, bool);
    using KCharSelect_EventFilter_Callback = bool (*)(KCharSelect*, QObject*, QEvent*);
    using KCharSelect_TimerEvent_Callback = void (*)(KCharSelect*, QTimerEvent*);
    using KCharSelect_ChildEvent_Callback = void (*)(KCharSelect*, QChildEvent*);
    using KCharSelect_CustomEvent_Callback = void (*)(KCharSelect*, QEvent*);
    using KCharSelect_ConnectNotify_Callback = void (*)(KCharSelect*, QMetaMethod*);
    using KCharSelect_DisconnectNotify_Callback = void (*)(KCharSelect*, QMetaMethod*);
    using KCharSelect_UpdateMicroFocus_Callback = void (*)();
    using KCharSelect_Create_Callback = void (*)();
    using KCharSelect_Destroy_Callback = void (*)();
    using KCharSelect_FocusNextChild_Callback = bool (*)();
    using KCharSelect_FocusPreviousChild_Callback = bool (*)();
    using KCharSelect_Sender_Callback = QObject* (*)();
    using KCharSelect_SenderSignalIndex_Callback = int (*)();
    using KCharSelect_Receivers_Callback = int (*)(const KCharSelect*, const char*);
    using KCharSelect_IsSignalConnected_Callback = bool (*)(const KCharSelect*, QMetaMethod*);
    using KCharSelect_GetDecodedMetricF_Callback = double (*)(const KCharSelect*, int, int);

  protected:
    // Instance callback storage
    KCharSelect_Metacall_Callback kcharselect_metacall_callback = nullptr;
    KCharSelect_SizeHint_Callback kcharselect_sizehint_callback = nullptr;
    KCharSelect_DevType_Callback kcharselect_devtype_callback = nullptr;
    KCharSelect_SetVisible_Callback kcharselect_setvisible_callback = nullptr;
    KCharSelect_MinimumSizeHint_Callback kcharselect_minimumsizehint_callback = nullptr;
    KCharSelect_HeightForWidth_Callback kcharselect_heightforwidth_callback = nullptr;
    KCharSelect_HasHeightForWidth_Callback kcharselect_hasheightforwidth_callback = nullptr;
    KCharSelect_PaintEngine_Callback kcharselect_paintengine_callback = nullptr;
    KCharSelect_Event_Callback kcharselect_event_callback = nullptr;
    KCharSelect_MousePressEvent_Callback kcharselect_mousepressevent_callback = nullptr;
    KCharSelect_MouseReleaseEvent_Callback kcharselect_mousereleaseevent_callback = nullptr;
    KCharSelect_MouseDoubleClickEvent_Callback kcharselect_mousedoubleclickevent_callback = nullptr;
    KCharSelect_MouseMoveEvent_Callback kcharselect_mousemoveevent_callback = nullptr;
    KCharSelect_WheelEvent_Callback kcharselect_wheelevent_callback = nullptr;
    KCharSelect_KeyPressEvent_Callback kcharselect_keypressevent_callback = nullptr;
    KCharSelect_KeyReleaseEvent_Callback kcharselect_keyreleaseevent_callback = nullptr;
    KCharSelect_FocusInEvent_Callback kcharselect_focusinevent_callback = nullptr;
    KCharSelect_FocusOutEvent_Callback kcharselect_focusoutevent_callback = nullptr;
    KCharSelect_EnterEvent_Callback kcharselect_enterevent_callback = nullptr;
    KCharSelect_LeaveEvent_Callback kcharselect_leaveevent_callback = nullptr;
    KCharSelect_PaintEvent_Callback kcharselect_paintevent_callback = nullptr;
    KCharSelect_MoveEvent_Callback kcharselect_moveevent_callback = nullptr;
    KCharSelect_ResizeEvent_Callback kcharselect_resizeevent_callback = nullptr;
    KCharSelect_CloseEvent_Callback kcharselect_closeevent_callback = nullptr;
    KCharSelect_ContextMenuEvent_Callback kcharselect_contextmenuevent_callback = nullptr;
    KCharSelect_TabletEvent_Callback kcharselect_tabletevent_callback = nullptr;
    KCharSelect_ActionEvent_Callback kcharselect_actionevent_callback = nullptr;
    KCharSelect_DragEnterEvent_Callback kcharselect_dragenterevent_callback = nullptr;
    KCharSelect_DragMoveEvent_Callback kcharselect_dragmoveevent_callback = nullptr;
    KCharSelect_DragLeaveEvent_Callback kcharselect_dragleaveevent_callback = nullptr;
    KCharSelect_DropEvent_Callback kcharselect_dropevent_callback = nullptr;
    KCharSelect_ShowEvent_Callback kcharselect_showevent_callback = nullptr;
    KCharSelect_HideEvent_Callback kcharselect_hideevent_callback = nullptr;
    KCharSelect_NativeEvent_Callback kcharselect_nativeevent_callback = nullptr;
    KCharSelect_ChangeEvent_Callback kcharselect_changeevent_callback = nullptr;
    KCharSelect_Metric_Callback kcharselect_metric_callback = nullptr;
    KCharSelect_InitPainter_Callback kcharselect_initpainter_callback = nullptr;
    KCharSelect_Redirected_Callback kcharselect_redirected_callback = nullptr;
    KCharSelect_SharedPainter_Callback kcharselect_sharedpainter_callback = nullptr;
    KCharSelect_InputMethodEvent_Callback kcharselect_inputmethodevent_callback = nullptr;
    KCharSelect_InputMethodQuery_Callback kcharselect_inputmethodquery_callback = nullptr;
    KCharSelect_FocusNextPrevChild_Callback kcharselect_focusnextprevchild_callback = nullptr;
    KCharSelect_EventFilter_Callback kcharselect_eventfilter_callback = nullptr;
    KCharSelect_TimerEvent_Callback kcharselect_timerevent_callback = nullptr;
    KCharSelect_ChildEvent_Callback kcharselect_childevent_callback = nullptr;
    KCharSelect_CustomEvent_Callback kcharselect_customevent_callback = nullptr;
    KCharSelect_ConnectNotify_Callback kcharselect_connectnotify_callback = nullptr;
    KCharSelect_DisconnectNotify_Callback kcharselect_disconnectnotify_callback = nullptr;
    KCharSelect_UpdateMicroFocus_Callback kcharselect_updatemicrofocus_callback = nullptr;
    KCharSelect_Create_Callback kcharselect_create_callback = nullptr;
    KCharSelect_Destroy_Callback kcharselect_destroy_callback = nullptr;
    KCharSelect_FocusNextChild_Callback kcharselect_focusnextchild_callback = nullptr;
    KCharSelect_FocusPreviousChild_Callback kcharselect_focuspreviouschild_callback = nullptr;
    KCharSelect_Sender_Callback kcharselect_sender_callback = nullptr;
    KCharSelect_SenderSignalIndex_Callback kcharselect_sendersignalindex_callback = nullptr;
    KCharSelect_Receivers_Callback kcharselect_receivers_callback = nullptr;
    KCharSelect_IsSignalConnected_Callback kcharselect_issignalconnected_callback = nullptr;
    KCharSelect_GetDecodedMetricF_Callback kcharselect_getdecodedmetricf_callback = nullptr;

    // Instance base flags
    mutable bool kcharselect_metacall_isbase = false;
    mutable bool kcharselect_sizehint_isbase = false;
    mutable bool kcharselect_devtype_isbase = false;
    mutable bool kcharselect_setvisible_isbase = false;
    mutable bool kcharselect_minimumsizehint_isbase = false;
    mutable bool kcharselect_heightforwidth_isbase = false;
    mutable bool kcharselect_hasheightforwidth_isbase = false;
    mutable bool kcharselect_paintengine_isbase = false;
    mutable bool kcharselect_event_isbase = false;
    mutable bool kcharselect_mousepressevent_isbase = false;
    mutable bool kcharselect_mousereleaseevent_isbase = false;
    mutable bool kcharselect_mousedoubleclickevent_isbase = false;
    mutable bool kcharselect_mousemoveevent_isbase = false;
    mutable bool kcharselect_wheelevent_isbase = false;
    mutable bool kcharselect_keypressevent_isbase = false;
    mutable bool kcharselect_keyreleaseevent_isbase = false;
    mutable bool kcharselect_focusinevent_isbase = false;
    mutable bool kcharselect_focusoutevent_isbase = false;
    mutable bool kcharselect_enterevent_isbase = false;
    mutable bool kcharselect_leaveevent_isbase = false;
    mutable bool kcharselect_paintevent_isbase = false;
    mutable bool kcharselect_moveevent_isbase = false;
    mutable bool kcharselect_resizeevent_isbase = false;
    mutable bool kcharselect_closeevent_isbase = false;
    mutable bool kcharselect_contextmenuevent_isbase = false;
    mutable bool kcharselect_tabletevent_isbase = false;
    mutable bool kcharselect_actionevent_isbase = false;
    mutable bool kcharselect_dragenterevent_isbase = false;
    mutable bool kcharselect_dragmoveevent_isbase = false;
    mutable bool kcharselect_dragleaveevent_isbase = false;
    mutable bool kcharselect_dropevent_isbase = false;
    mutable bool kcharselect_showevent_isbase = false;
    mutable bool kcharselect_hideevent_isbase = false;
    mutable bool kcharselect_nativeevent_isbase = false;
    mutable bool kcharselect_changeevent_isbase = false;
    mutable bool kcharselect_metric_isbase = false;
    mutable bool kcharselect_initpainter_isbase = false;
    mutable bool kcharselect_redirected_isbase = false;
    mutable bool kcharselect_sharedpainter_isbase = false;
    mutable bool kcharselect_inputmethodevent_isbase = false;
    mutable bool kcharselect_inputmethodquery_isbase = false;
    mutable bool kcharselect_focusnextprevchild_isbase = false;
    mutable bool kcharselect_eventfilter_isbase = false;
    mutable bool kcharselect_timerevent_isbase = false;
    mutable bool kcharselect_childevent_isbase = false;
    mutable bool kcharselect_customevent_isbase = false;
    mutable bool kcharselect_connectnotify_isbase = false;
    mutable bool kcharselect_disconnectnotify_isbase = false;
    mutable bool kcharselect_updatemicrofocus_isbase = false;
    mutable bool kcharselect_create_isbase = false;
    mutable bool kcharselect_destroy_isbase = false;
    mutable bool kcharselect_focusnextchild_isbase = false;
    mutable bool kcharselect_focuspreviouschild_isbase = false;
    mutable bool kcharselect_sender_isbase = false;
    mutable bool kcharselect_sendersignalindex_isbase = false;
    mutable bool kcharselect_receivers_isbase = false;
    mutable bool kcharselect_issignalconnected_isbase = false;
    mutable bool kcharselect_getdecodedmetricf_isbase = false;

  public:
    VirtualKCharSelect(QWidget* parent) : KCharSelect(parent) {};
    VirtualKCharSelect(QWidget* parent, QObject* actionParent) : KCharSelect(parent, actionParent) {};
    VirtualKCharSelect(QWidget* parent, const KCharSelect::Controls controls) : KCharSelect(parent, controls) {};
    VirtualKCharSelect(QWidget* parent, QObject* actionParent, const KCharSelect::Controls controls) : KCharSelect(parent, actionParent, controls) {};

    ~VirtualKCharSelect() {
        kcharselect_metacall_callback = nullptr;
        kcharselect_sizehint_callback = nullptr;
        kcharselect_devtype_callback = nullptr;
        kcharselect_setvisible_callback = nullptr;
        kcharselect_minimumsizehint_callback = nullptr;
        kcharselect_heightforwidth_callback = nullptr;
        kcharselect_hasheightforwidth_callback = nullptr;
        kcharselect_paintengine_callback = nullptr;
        kcharselect_event_callback = nullptr;
        kcharselect_mousepressevent_callback = nullptr;
        kcharselect_mousereleaseevent_callback = nullptr;
        kcharselect_mousedoubleclickevent_callback = nullptr;
        kcharselect_mousemoveevent_callback = nullptr;
        kcharselect_wheelevent_callback = nullptr;
        kcharselect_keypressevent_callback = nullptr;
        kcharselect_keyreleaseevent_callback = nullptr;
        kcharselect_focusinevent_callback = nullptr;
        kcharselect_focusoutevent_callback = nullptr;
        kcharselect_enterevent_callback = nullptr;
        kcharselect_leaveevent_callback = nullptr;
        kcharselect_paintevent_callback = nullptr;
        kcharselect_moveevent_callback = nullptr;
        kcharselect_resizeevent_callback = nullptr;
        kcharselect_closeevent_callback = nullptr;
        kcharselect_contextmenuevent_callback = nullptr;
        kcharselect_tabletevent_callback = nullptr;
        kcharselect_actionevent_callback = nullptr;
        kcharselect_dragenterevent_callback = nullptr;
        kcharselect_dragmoveevent_callback = nullptr;
        kcharselect_dragleaveevent_callback = nullptr;
        kcharselect_dropevent_callback = nullptr;
        kcharselect_showevent_callback = nullptr;
        kcharselect_hideevent_callback = nullptr;
        kcharselect_nativeevent_callback = nullptr;
        kcharselect_changeevent_callback = nullptr;
        kcharselect_metric_callback = nullptr;
        kcharselect_initpainter_callback = nullptr;
        kcharselect_redirected_callback = nullptr;
        kcharselect_sharedpainter_callback = nullptr;
        kcharselect_inputmethodevent_callback = nullptr;
        kcharselect_inputmethodquery_callback = nullptr;
        kcharselect_focusnextprevchild_callback = nullptr;
        kcharselect_eventfilter_callback = nullptr;
        kcharselect_timerevent_callback = nullptr;
        kcharselect_childevent_callback = nullptr;
        kcharselect_customevent_callback = nullptr;
        kcharselect_connectnotify_callback = nullptr;
        kcharselect_disconnectnotify_callback = nullptr;
        kcharselect_updatemicrofocus_callback = nullptr;
        kcharselect_create_callback = nullptr;
        kcharselect_destroy_callback = nullptr;
        kcharselect_focusnextchild_callback = nullptr;
        kcharselect_focuspreviouschild_callback = nullptr;
        kcharselect_sender_callback = nullptr;
        kcharselect_sendersignalindex_callback = nullptr;
        kcharselect_receivers_callback = nullptr;
        kcharselect_issignalconnected_callback = nullptr;
        kcharselect_getdecodedmetricf_callback = nullptr;
    }

    // Callback setters
    inline void setKCharSelect_Metacall_Callback(KCharSelect_Metacall_Callback cb) { kcharselect_metacall_callback = cb; }
    inline void setKCharSelect_SizeHint_Callback(KCharSelect_SizeHint_Callback cb) { kcharselect_sizehint_callback = cb; }
    inline void setKCharSelect_DevType_Callback(KCharSelect_DevType_Callback cb) { kcharselect_devtype_callback = cb; }
    inline void setKCharSelect_SetVisible_Callback(KCharSelect_SetVisible_Callback cb) { kcharselect_setvisible_callback = cb; }
    inline void setKCharSelect_MinimumSizeHint_Callback(KCharSelect_MinimumSizeHint_Callback cb) { kcharselect_minimumsizehint_callback = cb; }
    inline void setKCharSelect_HeightForWidth_Callback(KCharSelect_HeightForWidth_Callback cb) { kcharselect_heightforwidth_callback = cb; }
    inline void setKCharSelect_HasHeightForWidth_Callback(KCharSelect_HasHeightForWidth_Callback cb) { kcharselect_hasheightforwidth_callback = cb; }
    inline void setKCharSelect_PaintEngine_Callback(KCharSelect_PaintEngine_Callback cb) { kcharselect_paintengine_callback = cb; }
    inline void setKCharSelect_Event_Callback(KCharSelect_Event_Callback cb) { kcharselect_event_callback = cb; }
    inline void setKCharSelect_MousePressEvent_Callback(KCharSelect_MousePressEvent_Callback cb) { kcharselect_mousepressevent_callback = cb; }
    inline void setKCharSelect_MouseReleaseEvent_Callback(KCharSelect_MouseReleaseEvent_Callback cb) { kcharselect_mousereleaseevent_callback = cb; }
    inline void setKCharSelect_MouseDoubleClickEvent_Callback(KCharSelect_MouseDoubleClickEvent_Callback cb) { kcharselect_mousedoubleclickevent_callback = cb; }
    inline void setKCharSelect_MouseMoveEvent_Callback(KCharSelect_MouseMoveEvent_Callback cb) { kcharselect_mousemoveevent_callback = cb; }
    inline void setKCharSelect_WheelEvent_Callback(KCharSelect_WheelEvent_Callback cb) { kcharselect_wheelevent_callback = cb; }
    inline void setKCharSelect_KeyPressEvent_Callback(KCharSelect_KeyPressEvent_Callback cb) { kcharselect_keypressevent_callback = cb; }
    inline void setKCharSelect_KeyReleaseEvent_Callback(KCharSelect_KeyReleaseEvent_Callback cb) { kcharselect_keyreleaseevent_callback = cb; }
    inline void setKCharSelect_FocusInEvent_Callback(KCharSelect_FocusInEvent_Callback cb) { kcharselect_focusinevent_callback = cb; }
    inline void setKCharSelect_FocusOutEvent_Callback(KCharSelect_FocusOutEvent_Callback cb) { kcharselect_focusoutevent_callback = cb; }
    inline void setKCharSelect_EnterEvent_Callback(KCharSelect_EnterEvent_Callback cb) { kcharselect_enterevent_callback = cb; }
    inline void setKCharSelect_LeaveEvent_Callback(KCharSelect_LeaveEvent_Callback cb) { kcharselect_leaveevent_callback = cb; }
    inline void setKCharSelect_PaintEvent_Callback(KCharSelect_PaintEvent_Callback cb) { kcharselect_paintevent_callback = cb; }
    inline void setKCharSelect_MoveEvent_Callback(KCharSelect_MoveEvent_Callback cb) { kcharselect_moveevent_callback = cb; }
    inline void setKCharSelect_ResizeEvent_Callback(KCharSelect_ResizeEvent_Callback cb) { kcharselect_resizeevent_callback = cb; }
    inline void setKCharSelect_CloseEvent_Callback(KCharSelect_CloseEvent_Callback cb) { kcharselect_closeevent_callback = cb; }
    inline void setKCharSelect_ContextMenuEvent_Callback(KCharSelect_ContextMenuEvent_Callback cb) { kcharselect_contextmenuevent_callback = cb; }
    inline void setKCharSelect_TabletEvent_Callback(KCharSelect_TabletEvent_Callback cb) { kcharselect_tabletevent_callback = cb; }
    inline void setKCharSelect_ActionEvent_Callback(KCharSelect_ActionEvent_Callback cb) { kcharselect_actionevent_callback = cb; }
    inline void setKCharSelect_DragEnterEvent_Callback(KCharSelect_DragEnterEvent_Callback cb) { kcharselect_dragenterevent_callback = cb; }
    inline void setKCharSelect_DragMoveEvent_Callback(KCharSelect_DragMoveEvent_Callback cb) { kcharselect_dragmoveevent_callback = cb; }
    inline void setKCharSelect_DragLeaveEvent_Callback(KCharSelect_DragLeaveEvent_Callback cb) { kcharselect_dragleaveevent_callback = cb; }
    inline void setKCharSelect_DropEvent_Callback(KCharSelect_DropEvent_Callback cb) { kcharselect_dropevent_callback = cb; }
    inline void setKCharSelect_ShowEvent_Callback(KCharSelect_ShowEvent_Callback cb) { kcharselect_showevent_callback = cb; }
    inline void setKCharSelect_HideEvent_Callback(KCharSelect_HideEvent_Callback cb) { kcharselect_hideevent_callback = cb; }
    inline void setKCharSelect_NativeEvent_Callback(KCharSelect_NativeEvent_Callback cb) { kcharselect_nativeevent_callback = cb; }
    inline void setKCharSelect_ChangeEvent_Callback(KCharSelect_ChangeEvent_Callback cb) { kcharselect_changeevent_callback = cb; }
    inline void setKCharSelect_Metric_Callback(KCharSelect_Metric_Callback cb) { kcharselect_metric_callback = cb; }
    inline void setKCharSelect_InitPainter_Callback(KCharSelect_InitPainter_Callback cb) { kcharselect_initpainter_callback = cb; }
    inline void setKCharSelect_Redirected_Callback(KCharSelect_Redirected_Callback cb) { kcharselect_redirected_callback = cb; }
    inline void setKCharSelect_SharedPainter_Callback(KCharSelect_SharedPainter_Callback cb) { kcharselect_sharedpainter_callback = cb; }
    inline void setKCharSelect_InputMethodEvent_Callback(KCharSelect_InputMethodEvent_Callback cb) { kcharselect_inputmethodevent_callback = cb; }
    inline void setKCharSelect_InputMethodQuery_Callback(KCharSelect_InputMethodQuery_Callback cb) { kcharselect_inputmethodquery_callback = cb; }
    inline void setKCharSelect_FocusNextPrevChild_Callback(KCharSelect_FocusNextPrevChild_Callback cb) { kcharselect_focusnextprevchild_callback = cb; }
    inline void setKCharSelect_EventFilter_Callback(KCharSelect_EventFilter_Callback cb) { kcharselect_eventfilter_callback = cb; }
    inline void setKCharSelect_TimerEvent_Callback(KCharSelect_TimerEvent_Callback cb) { kcharselect_timerevent_callback = cb; }
    inline void setKCharSelect_ChildEvent_Callback(KCharSelect_ChildEvent_Callback cb) { kcharselect_childevent_callback = cb; }
    inline void setKCharSelect_CustomEvent_Callback(KCharSelect_CustomEvent_Callback cb) { kcharselect_customevent_callback = cb; }
    inline void setKCharSelect_ConnectNotify_Callback(KCharSelect_ConnectNotify_Callback cb) { kcharselect_connectnotify_callback = cb; }
    inline void setKCharSelect_DisconnectNotify_Callback(KCharSelect_DisconnectNotify_Callback cb) { kcharselect_disconnectnotify_callback = cb; }
    inline void setKCharSelect_UpdateMicroFocus_Callback(KCharSelect_UpdateMicroFocus_Callback cb) { kcharselect_updatemicrofocus_callback = cb; }
    inline void setKCharSelect_Create_Callback(KCharSelect_Create_Callback cb) { kcharselect_create_callback = cb; }
    inline void setKCharSelect_Destroy_Callback(KCharSelect_Destroy_Callback cb) { kcharselect_destroy_callback = cb; }
    inline void setKCharSelect_FocusNextChild_Callback(KCharSelect_FocusNextChild_Callback cb) { kcharselect_focusnextchild_callback = cb; }
    inline void setKCharSelect_FocusPreviousChild_Callback(KCharSelect_FocusPreviousChild_Callback cb) { kcharselect_focuspreviouschild_callback = cb; }
    inline void setKCharSelect_Sender_Callback(KCharSelect_Sender_Callback cb) { kcharselect_sender_callback = cb; }
    inline void setKCharSelect_SenderSignalIndex_Callback(KCharSelect_SenderSignalIndex_Callback cb) { kcharselect_sendersignalindex_callback = cb; }
    inline void setKCharSelect_Receivers_Callback(KCharSelect_Receivers_Callback cb) { kcharselect_receivers_callback = cb; }
    inline void setKCharSelect_IsSignalConnected_Callback(KCharSelect_IsSignalConnected_Callback cb) { kcharselect_issignalconnected_callback = cb; }
    inline void setKCharSelect_GetDecodedMetricF_Callback(KCharSelect_GetDecodedMetricF_Callback cb) { kcharselect_getdecodedmetricf_callback = cb; }

    // Base flag setters
    inline void setKCharSelect_Metacall_IsBase(bool value) const { kcharselect_metacall_isbase = value; }
    inline void setKCharSelect_SizeHint_IsBase(bool value) const { kcharselect_sizehint_isbase = value; }
    inline void setKCharSelect_DevType_IsBase(bool value) const { kcharselect_devtype_isbase = value; }
    inline void setKCharSelect_SetVisible_IsBase(bool value) const { kcharselect_setvisible_isbase = value; }
    inline void setKCharSelect_MinimumSizeHint_IsBase(bool value) const { kcharselect_minimumsizehint_isbase = value; }
    inline void setKCharSelect_HeightForWidth_IsBase(bool value) const { kcharselect_heightforwidth_isbase = value; }
    inline void setKCharSelect_HasHeightForWidth_IsBase(bool value) const { kcharselect_hasheightforwidth_isbase = value; }
    inline void setKCharSelect_PaintEngine_IsBase(bool value) const { kcharselect_paintengine_isbase = value; }
    inline void setKCharSelect_Event_IsBase(bool value) const { kcharselect_event_isbase = value; }
    inline void setKCharSelect_MousePressEvent_IsBase(bool value) const { kcharselect_mousepressevent_isbase = value; }
    inline void setKCharSelect_MouseReleaseEvent_IsBase(bool value) const { kcharselect_mousereleaseevent_isbase = value; }
    inline void setKCharSelect_MouseDoubleClickEvent_IsBase(bool value) const { kcharselect_mousedoubleclickevent_isbase = value; }
    inline void setKCharSelect_MouseMoveEvent_IsBase(bool value) const { kcharselect_mousemoveevent_isbase = value; }
    inline void setKCharSelect_WheelEvent_IsBase(bool value) const { kcharselect_wheelevent_isbase = value; }
    inline void setKCharSelect_KeyPressEvent_IsBase(bool value) const { kcharselect_keypressevent_isbase = value; }
    inline void setKCharSelect_KeyReleaseEvent_IsBase(bool value) const { kcharselect_keyreleaseevent_isbase = value; }
    inline void setKCharSelect_FocusInEvent_IsBase(bool value) const { kcharselect_focusinevent_isbase = value; }
    inline void setKCharSelect_FocusOutEvent_IsBase(bool value) const { kcharselect_focusoutevent_isbase = value; }
    inline void setKCharSelect_EnterEvent_IsBase(bool value) const { kcharselect_enterevent_isbase = value; }
    inline void setKCharSelect_LeaveEvent_IsBase(bool value) const { kcharselect_leaveevent_isbase = value; }
    inline void setKCharSelect_PaintEvent_IsBase(bool value) const { kcharselect_paintevent_isbase = value; }
    inline void setKCharSelect_MoveEvent_IsBase(bool value) const { kcharselect_moveevent_isbase = value; }
    inline void setKCharSelect_ResizeEvent_IsBase(bool value) const { kcharselect_resizeevent_isbase = value; }
    inline void setKCharSelect_CloseEvent_IsBase(bool value) const { kcharselect_closeevent_isbase = value; }
    inline void setKCharSelect_ContextMenuEvent_IsBase(bool value) const { kcharselect_contextmenuevent_isbase = value; }
    inline void setKCharSelect_TabletEvent_IsBase(bool value) const { kcharselect_tabletevent_isbase = value; }
    inline void setKCharSelect_ActionEvent_IsBase(bool value) const { kcharselect_actionevent_isbase = value; }
    inline void setKCharSelect_DragEnterEvent_IsBase(bool value) const { kcharselect_dragenterevent_isbase = value; }
    inline void setKCharSelect_DragMoveEvent_IsBase(bool value) const { kcharselect_dragmoveevent_isbase = value; }
    inline void setKCharSelect_DragLeaveEvent_IsBase(bool value) const { kcharselect_dragleaveevent_isbase = value; }
    inline void setKCharSelect_DropEvent_IsBase(bool value) const { kcharselect_dropevent_isbase = value; }
    inline void setKCharSelect_ShowEvent_IsBase(bool value) const { kcharselect_showevent_isbase = value; }
    inline void setKCharSelect_HideEvent_IsBase(bool value) const { kcharselect_hideevent_isbase = value; }
    inline void setKCharSelect_NativeEvent_IsBase(bool value) const { kcharselect_nativeevent_isbase = value; }
    inline void setKCharSelect_ChangeEvent_IsBase(bool value) const { kcharselect_changeevent_isbase = value; }
    inline void setKCharSelect_Metric_IsBase(bool value) const { kcharselect_metric_isbase = value; }
    inline void setKCharSelect_InitPainter_IsBase(bool value) const { kcharselect_initpainter_isbase = value; }
    inline void setKCharSelect_Redirected_IsBase(bool value) const { kcharselect_redirected_isbase = value; }
    inline void setKCharSelect_SharedPainter_IsBase(bool value) const { kcharselect_sharedpainter_isbase = value; }
    inline void setKCharSelect_InputMethodEvent_IsBase(bool value) const { kcharselect_inputmethodevent_isbase = value; }
    inline void setKCharSelect_InputMethodQuery_IsBase(bool value) const { kcharselect_inputmethodquery_isbase = value; }
    inline void setKCharSelect_FocusNextPrevChild_IsBase(bool value) const { kcharselect_focusnextprevchild_isbase = value; }
    inline void setKCharSelect_EventFilter_IsBase(bool value) const { kcharselect_eventfilter_isbase = value; }
    inline void setKCharSelect_TimerEvent_IsBase(bool value) const { kcharselect_timerevent_isbase = value; }
    inline void setKCharSelect_ChildEvent_IsBase(bool value) const { kcharselect_childevent_isbase = value; }
    inline void setKCharSelect_CustomEvent_IsBase(bool value) const { kcharselect_customevent_isbase = value; }
    inline void setKCharSelect_ConnectNotify_IsBase(bool value) const { kcharselect_connectnotify_isbase = value; }
    inline void setKCharSelect_DisconnectNotify_IsBase(bool value) const { kcharselect_disconnectnotify_isbase = value; }
    inline void setKCharSelect_UpdateMicroFocus_IsBase(bool value) const { kcharselect_updatemicrofocus_isbase = value; }
    inline void setKCharSelect_Create_IsBase(bool value) const { kcharselect_create_isbase = value; }
    inline void setKCharSelect_Destroy_IsBase(bool value) const { kcharselect_destroy_isbase = value; }
    inline void setKCharSelect_FocusNextChild_IsBase(bool value) const { kcharselect_focusnextchild_isbase = value; }
    inline void setKCharSelect_FocusPreviousChild_IsBase(bool value) const { kcharselect_focuspreviouschild_isbase = value; }
    inline void setKCharSelect_Sender_IsBase(bool value) const { kcharselect_sender_isbase = value; }
    inline void setKCharSelect_SenderSignalIndex_IsBase(bool value) const { kcharselect_sendersignalindex_isbase = value; }
    inline void setKCharSelect_Receivers_IsBase(bool value) const { kcharselect_receivers_isbase = value; }
    inline void setKCharSelect_IsSignalConnected_IsBase(bool value) const { kcharselect_issignalconnected_isbase = value; }
    inline void setKCharSelect_GetDecodedMetricF_IsBase(bool value) const { kcharselect_getdecodedmetricf_isbase = value; }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (kcharselect_metacall_isbase) {
            kcharselect_metacall_isbase = false;
            return KCharSelect::qt_metacall(param1, param2, param3);
        } else if (kcharselect_metacall_callback != nullptr) {
            int cbval1 = static_cast<int>(param1);
            int cbval2 = param2;
            void** cbval3 = param3;

            int callback_ret = kcharselect_metacall_callback(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        } else {
            return KCharSelect::qt_metacall(param1, param2, param3);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QSize sizeHint() const override {
        if (kcharselect_sizehint_isbase) {
            kcharselect_sizehint_isbase = false;
            return KCharSelect::sizeHint();
        } else if (kcharselect_sizehint_callback != nullptr) {
            QSize* callback_ret = kcharselect_sizehint_callback();
            return *callback_ret;
        } else {
            return KCharSelect::sizeHint();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual int devType() const override {
        if (kcharselect_devtype_isbase) {
            kcharselect_devtype_isbase = false;
            return KCharSelect::devType();
        } else if (kcharselect_devtype_callback != nullptr) {
            int callback_ret = kcharselect_devtype_callback();
            return static_cast<int>(callback_ret);
        } else {
            return KCharSelect::devType();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void setVisible(bool visible) override {
        if (kcharselect_setvisible_isbase) {
            kcharselect_setvisible_isbase = false;
            KCharSelect::setVisible(visible);
        } else if (kcharselect_setvisible_callback != nullptr) {
            bool cbval1 = visible;

            kcharselect_setvisible_callback(this, cbval1);
        } else {
            KCharSelect::setVisible(visible);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QSize minimumSizeHint() const override {
        if (kcharselect_minimumsizehint_isbase) {
            kcharselect_minimumsizehint_isbase = false;
            return KCharSelect::minimumSizeHint();
        } else if (kcharselect_minimumsizehint_callback != nullptr) {
            QSize* callback_ret = kcharselect_minimumsizehint_callback();
            return *callback_ret;
        } else {
            return KCharSelect::minimumSizeHint();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual int heightForWidth(int param1) const override {
        if (kcharselect_heightforwidth_isbase) {
            kcharselect_heightforwidth_isbase = false;
            return KCharSelect::heightForWidth(param1);
        } else if (kcharselect_heightforwidth_callback != nullptr) {
            int cbval1 = param1;

            int callback_ret = kcharselect_heightforwidth_callback(this, cbval1);
            return static_cast<int>(callback_ret);
        } else {
            return KCharSelect::heightForWidth(param1);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool hasHeightForWidth() const override {
        if (kcharselect_hasheightforwidth_isbase) {
            kcharselect_hasheightforwidth_isbase = false;
            return KCharSelect::hasHeightForWidth();
        } else if (kcharselect_hasheightforwidth_callback != nullptr) {
            bool callback_ret = kcharselect_hasheightforwidth_callback();
            return callback_ret;
        } else {
            return KCharSelect::hasHeightForWidth();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QPaintEngine* paintEngine() const override {
        if (kcharselect_paintengine_isbase) {
            kcharselect_paintengine_isbase = false;
            return KCharSelect::paintEngine();
        } else if (kcharselect_paintengine_callback != nullptr) {
            QPaintEngine* callback_ret = kcharselect_paintengine_callback();
            return callback_ret;
        } else {
            return KCharSelect::paintEngine();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* event) override {
        if (kcharselect_event_isbase) {
            kcharselect_event_isbase = false;
            return KCharSelect::event(event);
        } else if (kcharselect_event_callback != nullptr) {
            QEvent* cbval1 = event;

            bool callback_ret = kcharselect_event_callback(this, cbval1);
            return callback_ret;
        } else {
            return KCharSelect::event(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void mousePressEvent(QMouseEvent* event) override {
        if (kcharselect_mousepressevent_isbase) {
            kcharselect_mousepressevent_isbase = false;
            KCharSelect::mousePressEvent(event);
        } else if (kcharselect_mousepressevent_callback != nullptr) {
            QMouseEvent* cbval1 = event;

            kcharselect_mousepressevent_callback(this, cbval1);
        } else {
            KCharSelect::mousePressEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseReleaseEvent(QMouseEvent* event) override {
        if (kcharselect_mousereleaseevent_isbase) {
            kcharselect_mousereleaseevent_isbase = false;
            KCharSelect::mouseReleaseEvent(event);
        } else if (kcharselect_mousereleaseevent_callback != nullptr) {
            QMouseEvent* cbval1 = event;

            kcharselect_mousereleaseevent_callback(this, cbval1);
        } else {
            KCharSelect::mouseReleaseEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseDoubleClickEvent(QMouseEvent* event) override {
        if (kcharselect_mousedoubleclickevent_isbase) {
            kcharselect_mousedoubleclickevent_isbase = false;
            KCharSelect::mouseDoubleClickEvent(event);
        } else if (kcharselect_mousedoubleclickevent_callback != nullptr) {
            QMouseEvent* cbval1 = event;

            kcharselect_mousedoubleclickevent_callback(this, cbval1);
        } else {
            KCharSelect::mouseDoubleClickEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseMoveEvent(QMouseEvent* event) override {
        if (kcharselect_mousemoveevent_isbase) {
            kcharselect_mousemoveevent_isbase = false;
            KCharSelect::mouseMoveEvent(event);
        } else if (kcharselect_mousemoveevent_callback != nullptr) {
            QMouseEvent* cbval1 = event;

            kcharselect_mousemoveevent_callback(this, cbval1);
        } else {
            KCharSelect::mouseMoveEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void wheelEvent(QWheelEvent* event) override {
        if (kcharselect_wheelevent_isbase) {
            kcharselect_wheelevent_isbase = false;
            KCharSelect::wheelEvent(event);
        } else if (kcharselect_wheelevent_callback != nullptr) {
            QWheelEvent* cbval1 = event;

            kcharselect_wheelevent_callback(this, cbval1);
        } else {
            KCharSelect::wheelEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void keyPressEvent(QKeyEvent* event) override {
        if (kcharselect_keypressevent_isbase) {
            kcharselect_keypressevent_isbase = false;
            KCharSelect::keyPressEvent(event);
        } else if (kcharselect_keypressevent_callback != nullptr) {
            QKeyEvent* cbval1 = event;

            kcharselect_keypressevent_callback(this, cbval1);
        } else {
            KCharSelect::keyPressEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void keyReleaseEvent(QKeyEvent* event) override {
        if (kcharselect_keyreleaseevent_isbase) {
            kcharselect_keyreleaseevent_isbase = false;
            KCharSelect::keyReleaseEvent(event);
        } else if (kcharselect_keyreleaseevent_callback != nullptr) {
            QKeyEvent* cbval1 = event;

            kcharselect_keyreleaseevent_callback(this, cbval1);
        } else {
            KCharSelect::keyReleaseEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void focusInEvent(QFocusEvent* event) override {
        if (kcharselect_focusinevent_isbase) {
            kcharselect_focusinevent_isbase = false;
            KCharSelect::focusInEvent(event);
        } else if (kcharselect_focusinevent_callback != nullptr) {
            QFocusEvent* cbval1 = event;

            kcharselect_focusinevent_callback(this, cbval1);
        } else {
            KCharSelect::focusInEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void focusOutEvent(QFocusEvent* event) override {
        if (kcharselect_focusoutevent_isbase) {
            kcharselect_focusoutevent_isbase = false;
            KCharSelect::focusOutEvent(event);
        } else if (kcharselect_focusoutevent_callback != nullptr) {
            QFocusEvent* cbval1 = event;

            kcharselect_focusoutevent_callback(this, cbval1);
        } else {
            KCharSelect::focusOutEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void enterEvent(QEnterEvent* event) override {
        if (kcharselect_enterevent_isbase) {
            kcharselect_enterevent_isbase = false;
            KCharSelect::enterEvent(event);
        } else if (kcharselect_enterevent_callback != nullptr) {
            QEnterEvent* cbval1 = event;

            kcharselect_enterevent_callback(this, cbval1);
        } else {
            KCharSelect::enterEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void leaveEvent(QEvent* event) override {
        if (kcharselect_leaveevent_isbase) {
            kcharselect_leaveevent_isbase = false;
            KCharSelect::leaveEvent(event);
        } else if (kcharselect_leaveevent_callback != nullptr) {
            QEvent* cbval1 = event;

            kcharselect_leaveevent_callback(this, cbval1);
        } else {
            KCharSelect::leaveEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void paintEvent(QPaintEvent* event) override {
        if (kcharselect_paintevent_isbase) {
            kcharselect_paintevent_isbase = false;
            KCharSelect::paintEvent(event);
        } else if (kcharselect_paintevent_callback != nullptr) {
            QPaintEvent* cbval1 = event;

            kcharselect_paintevent_callback(this, cbval1);
        } else {
            KCharSelect::paintEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void moveEvent(QMoveEvent* event) override {
        if (kcharselect_moveevent_isbase) {
            kcharselect_moveevent_isbase = false;
            KCharSelect::moveEvent(event);
        } else if (kcharselect_moveevent_callback != nullptr) {
            QMoveEvent* cbval1 = event;

            kcharselect_moveevent_callback(this, cbval1);
        } else {
            KCharSelect::moveEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void resizeEvent(QResizeEvent* event) override {
        if (kcharselect_resizeevent_isbase) {
            kcharselect_resizeevent_isbase = false;
            KCharSelect::resizeEvent(event);
        } else if (kcharselect_resizeevent_callback != nullptr) {
            QResizeEvent* cbval1 = event;

            kcharselect_resizeevent_callback(this, cbval1);
        } else {
            KCharSelect::resizeEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void closeEvent(QCloseEvent* event) override {
        if (kcharselect_closeevent_isbase) {
            kcharselect_closeevent_isbase = false;
            KCharSelect::closeEvent(event);
        } else if (kcharselect_closeevent_callback != nullptr) {
            QCloseEvent* cbval1 = event;

            kcharselect_closeevent_callback(this, cbval1);
        } else {
            KCharSelect::closeEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void contextMenuEvent(QContextMenuEvent* event) override {
        if (kcharselect_contextmenuevent_isbase) {
            kcharselect_contextmenuevent_isbase = false;
            KCharSelect::contextMenuEvent(event);
        } else if (kcharselect_contextmenuevent_callback != nullptr) {
            QContextMenuEvent* cbval1 = event;

            kcharselect_contextmenuevent_callback(this, cbval1);
        } else {
            KCharSelect::contextMenuEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void tabletEvent(QTabletEvent* event) override {
        if (kcharselect_tabletevent_isbase) {
            kcharselect_tabletevent_isbase = false;
            KCharSelect::tabletEvent(event);
        } else if (kcharselect_tabletevent_callback != nullptr) {
            QTabletEvent* cbval1 = event;

            kcharselect_tabletevent_callback(this, cbval1);
        } else {
            KCharSelect::tabletEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void actionEvent(QActionEvent* event) override {
        if (kcharselect_actionevent_isbase) {
            kcharselect_actionevent_isbase = false;
            KCharSelect::actionEvent(event);
        } else if (kcharselect_actionevent_callback != nullptr) {
            QActionEvent* cbval1 = event;

            kcharselect_actionevent_callback(this, cbval1);
        } else {
            KCharSelect::actionEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragEnterEvent(QDragEnterEvent* event) override {
        if (kcharselect_dragenterevent_isbase) {
            kcharselect_dragenterevent_isbase = false;
            KCharSelect::dragEnterEvent(event);
        } else if (kcharselect_dragenterevent_callback != nullptr) {
            QDragEnterEvent* cbval1 = event;

            kcharselect_dragenterevent_callback(this, cbval1);
        } else {
            KCharSelect::dragEnterEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragMoveEvent(QDragMoveEvent* event) override {
        if (kcharselect_dragmoveevent_isbase) {
            kcharselect_dragmoveevent_isbase = false;
            KCharSelect::dragMoveEvent(event);
        } else if (kcharselect_dragmoveevent_callback != nullptr) {
            QDragMoveEvent* cbval1 = event;

            kcharselect_dragmoveevent_callback(this, cbval1);
        } else {
            KCharSelect::dragMoveEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragLeaveEvent(QDragLeaveEvent* event) override {
        if (kcharselect_dragleaveevent_isbase) {
            kcharselect_dragleaveevent_isbase = false;
            KCharSelect::dragLeaveEvent(event);
        } else if (kcharselect_dragleaveevent_callback != nullptr) {
            QDragLeaveEvent* cbval1 = event;

            kcharselect_dragleaveevent_callback(this, cbval1);
        } else {
            KCharSelect::dragLeaveEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void dropEvent(QDropEvent* event) override {
        if (kcharselect_dropevent_isbase) {
            kcharselect_dropevent_isbase = false;
            KCharSelect::dropEvent(event);
        } else if (kcharselect_dropevent_callback != nullptr) {
            QDropEvent* cbval1 = event;

            kcharselect_dropevent_callback(this, cbval1);
        } else {
            KCharSelect::dropEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void showEvent(QShowEvent* event) override {
        if (kcharselect_showevent_isbase) {
            kcharselect_showevent_isbase = false;
            KCharSelect::showEvent(event);
        } else if (kcharselect_showevent_callback != nullptr) {
            QShowEvent* cbval1 = event;

            kcharselect_showevent_callback(this, cbval1);
        } else {
            KCharSelect::showEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void hideEvent(QHideEvent* event) override {
        if (kcharselect_hideevent_isbase) {
            kcharselect_hideevent_isbase = false;
            KCharSelect::hideEvent(event);
        } else if (kcharselect_hideevent_callback != nullptr) {
            QHideEvent* cbval1 = event;

            kcharselect_hideevent_callback(this, cbval1);
        } else {
            KCharSelect::hideEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool nativeEvent(const QByteArray& eventType, void* message, qintptr* result) override {
        if (kcharselect_nativeevent_isbase) {
            kcharselect_nativeevent_isbase = false;
            return KCharSelect::nativeEvent(eventType, message, result);
        } else if (kcharselect_nativeevent_callback != nullptr) {
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

            bool callback_ret = kcharselect_nativeevent_callback(this, cbval1, cbval2, cbval3);
            return callback_ret;
        } else {
            return KCharSelect::nativeEvent(eventType, message, result);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void changeEvent(QEvent* param1) override {
        if (kcharselect_changeevent_isbase) {
            kcharselect_changeevent_isbase = false;
            KCharSelect::changeEvent(param1);
        } else if (kcharselect_changeevent_callback != nullptr) {
            QEvent* cbval1 = param1;

            kcharselect_changeevent_callback(this, cbval1);
        } else {
            KCharSelect::changeEvent(param1);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual int metric(QPaintDevice::PaintDeviceMetric param1) const override {
        if (kcharselect_metric_isbase) {
            kcharselect_metric_isbase = false;
            return KCharSelect::metric(param1);
        } else if (kcharselect_metric_callback != nullptr) {
            int cbval1 = static_cast<int>(param1);

            int callback_ret = kcharselect_metric_callback(this, cbval1);
            return static_cast<int>(callback_ret);
        } else {
            return KCharSelect::metric(param1);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void initPainter(QPainter* painter) const override {
        if (kcharselect_initpainter_isbase) {
            kcharselect_initpainter_isbase = false;
            KCharSelect::initPainter(painter);
        } else if (kcharselect_initpainter_callback != nullptr) {
            QPainter* cbval1 = painter;

            kcharselect_initpainter_callback(this, cbval1);
        } else {
            KCharSelect::initPainter(painter);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QPaintDevice* redirected(QPoint* offset) const override {
        if (kcharselect_redirected_isbase) {
            kcharselect_redirected_isbase = false;
            return KCharSelect::redirected(offset);
        } else if (kcharselect_redirected_callback != nullptr) {
            QPoint* cbval1 = offset;

            QPaintDevice* callback_ret = kcharselect_redirected_callback(this, cbval1);
            return callback_ret;
        } else {
            return KCharSelect::redirected(offset);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QPainter* sharedPainter() const override {
        if (kcharselect_sharedpainter_isbase) {
            kcharselect_sharedpainter_isbase = false;
            return KCharSelect::sharedPainter();
        } else if (kcharselect_sharedpainter_callback != nullptr) {
            QPainter* callback_ret = kcharselect_sharedpainter_callback();
            return callback_ret;
        } else {
            return KCharSelect::sharedPainter();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void inputMethodEvent(QInputMethodEvent* param1) override {
        if (kcharselect_inputmethodevent_isbase) {
            kcharselect_inputmethodevent_isbase = false;
            KCharSelect::inputMethodEvent(param1);
        } else if (kcharselect_inputmethodevent_callback != nullptr) {
            QInputMethodEvent* cbval1 = param1;

            kcharselect_inputmethodevent_callback(this, cbval1);
        } else {
            KCharSelect::inputMethodEvent(param1);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QVariant inputMethodQuery(Qt::InputMethodQuery param1) const override {
        if (kcharselect_inputmethodquery_isbase) {
            kcharselect_inputmethodquery_isbase = false;
            return KCharSelect::inputMethodQuery(param1);
        } else if (kcharselect_inputmethodquery_callback != nullptr) {
            int cbval1 = static_cast<int>(param1);

            QVariant* callback_ret = kcharselect_inputmethodquery_callback(this, cbval1);
            return *callback_ret;
        } else {
            return KCharSelect::inputMethodQuery(param1);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool focusNextPrevChild(bool next) override {
        if (kcharselect_focusnextprevchild_isbase) {
            kcharselect_focusnextprevchild_isbase = false;
            return KCharSelect::focusNextPrevChild(next);
        } else if (kcharselect_focusnextprevchild_callback != nullptr) {
            bool cbval1 = next;

            bool callback_ret = kcharselect_focusnextprevchild_callback(this, cbval1);
            return callback_ret;
        } else {
            return KCharSelect::focusNextPrevChild(next);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* watched, QEvent* event) override {
        if (kcharselect_eventfilter_isbase) {
            kcharselect_eventfilter_isbase = false;
            return KCharSelect::eventFilter(watched, event);
        } else if (kcharselect_eventfilter_callback != nullptr) {
            QObject* cbval1 = watched;
            QEvent* cbval2 = event;

            bool callback_ret = kcharselect_eventfilter_callback(this, cbval1, cbval2);
            return callback_ret;
        } else {
            return KCharSelect::eventFilter(watched, event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (kcharselect_timerevent_isbase) {
            kcharselect_timerevent_isbase = false;
            KCharSelect::timerEvent(event);
        } else if (kcharselect_timerevent_callback != nullptr) {
            QTimerEvent* cbval1 = event;

            kcharselect_timerevent_callback(this, cbval1);
        } else {
            KCharSelect::timerEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (kcharselect_childevent_isbase) {
            kcharselect_childevent_isbase = false;
            KCharSelect::childEvent(event);
        } else if (kcharselect_childevent_callback != nullptr) {
            QChildEvent* cbval1 = event;

            kcharselect_childevent_callback(this, cbval1);
        } else {
            KCharSelect::childEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (kcharselect_customevent_isbase) {
            kcharselect_customevent_isbase = false;
            KCharSelect::customEvent(event);
        } else if (kcharselect_customevent_callback != nullptr) {
            QEvent* cbval1 = event;

            kcharselect_customevent_callback(this, cbval1);
        } else {
            KCharSelect::customEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (kcharselect_connectnotify_isbase) {
            kcharselect_connectnotify_isbase = false;
            KCharSelect::connectNotify(signal);
        } else if (kcharselect_connectnotify_callback != nullptr) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            kcharselect_connectnotify_callback(this, cbval1);
        } else {
            KCharSelect::connectNotify(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (kcharselect_disconnectnotify_isbase) {
            kcharselect_disconnectnotify_isbase = false;
            KCharSelect::disconnectNotify(signal);
        } else if (kcharselect_disconnectnotify_callback != nullptr) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            kcharselect_disconnectnotify_callback(this, cbval1);
        } else {
            KCharSelect::disconnectNotify(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    void updateMicroFocus() {
        if (kcharselect_updatemicrofocus_isbase) {
            kcharselect_updatemicrofocus_isbase = false;
            KCharSelect::updateMicroFocus();
        } else if (kcharselect_updatemicrofocus_callback != nullptr) {
            kcharselect_updatemicrofocus_callback();
        } else {
            KCharSelect::updateMicroFocus();
        }
    }

    // Virtual method for C ABI access and custom callback
    void create() {
        if (kcharselect_create_isbase) {
            kcharselect_create_isbase = false;
            KCharSelect::create();
        } else if (kcharselect_create_callback != nullptr) {
            kcharselect_create_callback();
        } else {
            KCharSelect::create();
        }
    }

    // Virtual method for C ABI access and custom callback
    void destroy() {
        if (kcharselect_destroy_isbase) {
            kcharselect_destroy_isbase = false;
            KCharSelect::destroy();
        } else if (kcharselect_destroy_callback != nullptr) {
            kcharselect_destroy_callback();
        } else {
            KCharSelect::destroy();
        }
    }

    // Virtual method for C ABI access and custom callback
    bool focusNextChild() {
        if (kcharselect_focusnextchild_isbase) {
            kcharselect_focusnextchild_isbase = false;
            return KCharSelect::focusNextChild();
        } else if (kcharselect_focusnextchild_callback != nullptr) {
            bool callback_ret = kcharselect_focusnextchild_callback();
            return callback_ret;
        } else {
            return KCharSelect::focusNextChild();
        }
    }

    // Virtual method for C ABI access and custom callback
    bool focusPreviousChild() {
        if (kcharselect_focuspreviouschild_isbase) {
            kcharselect_focuspreviouschild_isbase = false;
            return KCharSelect::focusPreviousChild();
        } else if (kcharselect_focuspreviouschild_callback != nullptr) {
            bool callback_ret = kcharselect_focuspreviouschild_callback();
            return callback_ret;
        } else {
            return KCharSelect::focusPreviousChild();
        }
    }

    // Virtual method for C ABI access and custom callback
    QObject* sender() const {
        if (kcharselect_sender_isbase) {
            kcharselect_sender_isbase = false;
            return KCharSelect::sender();
        } else if (kcharselect_sender_callback != nullptr) {
            QObject* callback_ret = kcharselect_sender_callback();
            return callback_ret;
        } else {
            return KCharSelect::sender();
        }
    }

    // Virtual method for C ABI access and custom callback
    int senderSignalIndex() const {
        if (kcharselect_sendersignalindex_isbase) {
            kcharselect_sendersignalindex_isbase = false;
            return KCharSelect::senderSignalIndex();
        } else if (kcharselect_sendersignalindex_callback != nullptr) {
            int callback_ret = kcharselect_sendersignalindex_callback();
            return static_cast<int>(callback_ret);
        } else {
            return KCharSelect::senderSignalIndex();
        }
    }

    // Virtual method for C ABI access and custom callback
    int receivers(const char* signal) const {
        if (kcharselect_receivers_isbase) {
            kcharselect_receivers_isbase = false;
            return KCharSelect::receivers(signal);
        } else if (kcharselect_receivers_callback != nullptr) {
            const char* cbval1 = (const char*)signal;

            int callback_ret = kcharselect_receivers_callback(this, cbval1);
            return static_cast<int>(callback_ret);
        } else {
            return KCharSelect::receivers(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    bool isSignalConnected(const QMetaMethod& signal) const {
        if (kcharselect_issignalconnected_isbase) {
            kcharselect_issignalconnected_isbase = false;
            return KCharSelect::isSignalConnected(signal);
        } else if (kcharselect_issignalconnected_callback != nullptr) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            bool callback_ret = kcharselect_issignalconnected_callback(this, cbval1);
            return callback_ret;
        } else {
            return KCharSelect::isSignalConnected(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    double getDecodedMetricF(QPaintDevice::PaintDeviceMetric metricA, QPaintDevice::PaintDeviceMetric metricB) const {
        if (kcharselect_getdecodedmetricf_isbase) {
            kcharselect_getdecodedmetricf_isbase = false;
            return KCharSelect::getDecodedMetricF(metricA, metricB);
        } else if (kcharselect_getdecodedmetricf_callback != nullptr) {
            int cbval1 = static_cast<int>(metricA);
            int cbval2 = static_cast<int>(metricB);

            double callback_ret = kcharselect_getdecodedmetricf_callback(this, cbval1, cbval2);
            return static_cast<double>(callback_ret);
        } else {
            return KCharSelect::getDecodedMetricF(metricA, metricB);
        }
    }

    // Friend functions
    friend bool KCharSelect_Event(KCharSelect* self, QEvent* event);
    friend bool KCharSelect_QBaseEvent(KCharSelect* self, QEvent* event);
    friend void KCharSelect_MousePressEvent(KCharSelect* self, QMouseEvent* event);
    friend void KCharSelect_QBaseMousePressEvent(KCharSelect* self, QMouseEvent* event);
    friend void KCharSelect_MouseReleaseEvent(KCharSelect* self, QMouseEvent* event);
    friend void KCharSelect_QBaseMouseReleaseEvent(KCharSelect* self, QMouseEvent* event);
    friend void KCharSelect_MouseDoubleClickEvent(KCharSelect* self, QMouseEvent* event);
    friend void KCharSelect_QBaseMouseDoubleClickEvent(KCharSelect* self, QMouseEvent* event);
    friend void KCharSelect_MouseMoveEvent(KCharSelect* self, QMouseEvent* event);
    friend void KCharSelect_QBaseMouseMoveEvent(KCharSelect* self, QMouseEvent* event);
    friend void KCharSelect_WheelEvent(KCharSelect* self, QWheelEvent* event);
    friend void KCharSelect_QBaseWheelEvent(KCharSelect* self, QWheelEvent* event);
    friend void KCharSelect_KeyPressEvent(KCharSelect* self, QKeyEvent* event);
    friend void KCharSelect_QBaseKeyPressEvent(KCharSelect* self, QKeyEvent* event);
    friend void KCharSelect_KeyReleaseEvent(KCharSelect* self, QKeyEvent* event);
    friend void KCharSelect_QBaseKeyReleaseEvent(KCharSelect* self, QKeyEvent* event);
    friend void KCharSelect_FocusInEvent(KCharSelect* self, QFocusEvent* event);
    friend void KCharSelect_QBaseFocusInEvent(KCharSelect* self, QFocusEvent* event);
    friend void KCharSelect_FocusOutEvent(KCharSelect* self, QFocusEvent* event);
    friend void KCharSelect_QBaseFocusOutEvent(KCharSelect* self, QFocusEvent* event);
    friend void KCharSelect_EnterEvent(KCharSelect* self, QEnterEvent* event);
    friend void KCharSelect_QBaseEnterEvent(KCharSelect* self, QEnterEvent* event);
    friend void KCharSelect_LeaveEvent(KCharSelect* self, QEvent* event);
    friend void KCharSelect_QBaseLeaveEvent(KCharSelect* self, QEvent* event);
    friend void KCharSelect_PaintEvent(KCharSelect* self, QPaintEvent* event);
    friend void KCharSelect_QBasePaintEvent(KCharSelect* self, QPaintEvent* event);
    friend void KCharSelect_MoveEvent(KCharSelect* self, QMoveEvent* event);
    friend void KCharSelect_QBaseMoveEvent(KCharSelect* self, QMoveEvent* event);
    friend void KCharSelect_ResizeEvent(KCharSelect* self, QResizeEvent* event);
    friend void KCharSelect_QBaseResizeEvent(KCharSelect* self, QResizeEvent* event);
    friend void KCharSelect_CloseEvent(KCharSelect* self, QCloseEvent* event);
    friend void KCharSelect_QBaseCloseEvent(KCharSelect* self, QCloseEvent* event);
    friend void KCharSelect_ContextMenuEvent(KCharSelect* self, QContextMenuEvent* event);
    friend void KCharSelect_QBaseContextMenuEvent(KCharSelect* self, QContextMenuEvent* event);
    friend void KCharSelect_TabletEvent(KCharSelect* self, QTabletEvent* event);
    friend void KCharSelect_QBaseTabletEvent(KCharSelect* self, QTabletEvent* event);
    friend void KCharSelect_ActionEvent(KCharSelect* self, QActionEvent* event);
    friend void KCharSelect_QBaseActionEvent(KCharSelect* self, QActionEvent* event);
    friend void KCharSelect_DragEnterEvent(KCharSelect* self, QDragEnterEvent* event);
    friend void KCharSelect_QBaseDragEnterEvent(KCharSelect* self, QDragEnterEvent* event);
    friend void KCharSelect_DragMoveEvent(KCharSelect* self, QDragMoveEvent* event);
    friend void KCharSelect_QBaseDragMoveEvent(KCharSelect* self, QDragMoveEvent* event);
    friend void KCharSelect_DragLeaveEvent(KCharSelect* self, QDragLeaveEvent* event);
    friend void KCharSelect_QBaseDragLeaveEvent(KCharSelect* self, QDragLeaveEvent* event);
    friend void KCharSelect_DropEvent(KCharSelect* self, QDropEvent* event);
    friend void KCharSelect_QBaseDropEvent(KCharSelect* self, QDropEvent* event);
    friend void KCharSelect_ShowEvent(KCharSelect* self, QShowEvent* event);
    friend void KCharSelect_QBaseShowEvent(KCharSelect* self, QShowEvent* event);
    friend void KCharSelect_HideEvent(KCharSelect* self, QHideEvent* event);
    friend void KCharSelect_QBaseHideEvent(KCharSelect* self, QHideEvent* event);
    friend bool KCharSelect_NativeEvent(KCharSelect* self, const libqt_string eventType, void* message, intptr_t* result);
    friend bool KCharSelect_QBaseNativeEvent(KCharSelect* self, const libqt_string eventType, void* message, intptr_t* result);
    friend void KCharSelect_ChangeEvent(KCharSelect* self, QEvent* param1);
    friend void KCharSelect_QBaseChangeEvent(KCharSelect* self, QEvent* param1);
    friend int KCharSelect_Metric(const KCharSelect* self, int param1);
    friend int KCharSelect_QBaseMetric(const KCharSelect* self, int param1);
    friend void KCharSelect_InitPainter(const KCharSelect* self, QPainter* painter);
    friend void KCharSelect_QBaseInitPainter(const KCharSelect* self, QPainter* painter);
    friend QPaintDevice* KCharSelect_Redirected(const KCharSelect* self, QPoint* offset);
    friend QPaintDevice* KCharSelect_QBaseRedirected(const KCharSelect* self, QPoint* offset);
    friend QPainter* KCharSelect_SharedPainter(const KCharSelect* self);
    friend QPainter* KCharSelect_QBaseSharedPainter(const KCharSelect* self);
    friend void KCharSelect_InputMethodEvent(KCharSelect* self, QInputMethodEvent* param1);
    friend void KCharSelect_QBaseInputMethodEvent(KCharSelect* self, QInputMethodEvent* param1);
    friend bool KCharSelect_FocusNextPrevChild(KCharSelect* self, bool next);
    friend bool KCharSelect_QBaseFocusNextPrevChild(KCharSelect* self, bool next);
    friend void KCharSelect_TimerEvent(KCharSelect* self, QTimerEvent* event);
    friend void KCharSelect_QBaseTimerEvent(KCharSelect* self, QTimerEvent* event);
    friend void KCharSelect_ChildEvent(KCharSelect* self, QChildEvent* event);
    friend void KCharSelect_QBaseChildEvent(KCharSelect* self, QChildEvent* event);
    friend void KCharSelect_CustomEvent(KCharSelect* self, QEvent* event);
    friend void KCharSelect_QBaseCustomEvent(KCharSelect* self, QEvent* event);
    friend void KCharSelect_ConnectNotify(KCharSelect* self, const QMetaMethod* signal);
    friend void KCharSelect_QBaseConnectNotify(KCharSelect* self, const QMetaMethod* signal);
    friend void KCharSelect_DisconnectNotify(KCharSelect* self, const QMetaMethod* signal);
    friend void KCharSelect_QBaseDisconnectNotify(KCharSelect* self, const QMetaMethod* signal);
    friend void KCharSelect_UpdateMicroFocus(KCharSelect* self);
    friend void KCharSelect_QBaseUpdateMicroFocus(KCharSelect* self);
    friend void KCharSelect_Create(KCharSelect* self);
    friend void KCharSelect_QBaseCreate(KCharSelect* self);
    friend void KCharSelect_Destroy(KCharSelect* self);
    friend void KCharSelect_QBaseDestroy(KCharSelect* self);
    friend bool KCharSelect_FocusNextChild(KCharSelect* self);
    friend bool KCharSelect_QBaseFocusNextChild(KCharSelect* self);
    friend bool KCharSelect_FocusPreviousChild(KCharSelect* self);
    friend bool KCharSelect_QBaseFocusPreviousChild(KCharSelect* self);
    friend QObject* KCharSelect_Sender(const KCharSelect* self);
    friend QObject* KCharSelect_QBaseSender(const KCharSelect* self);
    friend int KCharSelect_SenderSignalIndex(const KCharSelect* self);
    friend int KCharSelect_QBaseSenderSignalIndex(const KCharSelect* self);
    friend int KCharSelect_Receivers(const KCharSelect* self, const char* signal);
    friend int KCharSelect_QBaseReceivers(const KCharSelect* self, const char* signal);
    friend bool KCharSelect_IsSignalConnected(const KCharSelect* self, const QMetaMethod* signal);
    friend bool KCharSelect_QBaseIsSignalConnected(const KCharSelect* self, const QMetaMethod* signal);
    friend double KCharSelect_GetDecodedMetricF(const KCharSelect* self, int metricA, int metricB);
    friend double KCharSelect_QBaseGetDecodedMetricF(const KCharSelect* self, int metricA, int metricB);
};

#endif
