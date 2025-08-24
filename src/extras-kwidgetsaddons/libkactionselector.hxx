#pragma once
#ifndef SRC_EXTRAS_KWIDGETSADDONSC_LIBVIRTUALKACTIONSELECTOR_H
#define SRC_EXTRAS_KWIDGETSADDONSC_LIBVIRTUALKACTIONSELECTOR_H

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

// This class is a subclass of KActionSelector so that we can call protected methods
class VirtualKActionSelector final : public KActionSelector {

  public:
    // Virtual class boolean flag
    bool isVirtualKActionSelector = true;

    // Virtual class public types (including callbacks)
    using KActionSelector_Metacall_Callback = int (*)(KActionSelector*, int, int, void**);
    using KActionSelector_KeyPressEvent_Callback = void (*)(KActionSelector*, QKeyEvent*);
    using KActionSelector_EventFilter_Callback = bool (*)(KActionSelector*, QObject*, QEvent*);
    using KActionSelector_DevType_Callback = int (*)();
    using KActionSelector_SetVisible_Callback = void (*)(KActionSelector*, bool);
    using KActionSelector_SizeHint_Callback = QSize* (*)();
    using KActionSelector_MinimumSizeHint_Callback = QSize* (*)();
    using KActionSelector_HeightForWidth_Callback = int (*)(const KActionSelector*, int);
    using KActionSelector_HasHeightForWidth_Callback = bool (*)();
    using KActionSelector_PaintEngine_Callback = QPaintEngine* (*)();
    using KActionSelector_Event_Callback = bool (*)(KActionSelector*, QEvent*);
    using KActionSelector_MousePressEvent_Callback = void (*)(KActionSelector*, QMouseEvent*);
    using KActionSelector_MouseReleaseEvent_Callback = void (*)(KActionSelector*, QMouseEvent*);
    using KActionSelector_MouseDoubleClickEvent_Callback = void (*)(KActionSelector*, QMouseEvent*);
    using KActionSelector_MouseMoveEvent_Callback = void (*)(KActionSelector*, QMouseEvent*);
    using KActionSelector_WheelEvent_Callback = void (*)(KActionSelector*, QWheelEvent*);
    using KActionSelector_KeyReleaseEvent_Callback = void (*)(KActionSelector*, QKeyEvent*);
    using KActionSelector_FocusInEvent_Callback = void (*)(KActionSelector*, QFocusEvent*);
    using KActionSelector_FocusOutEvent_Callback = void (*)(KActionSelector*, QFocusEvent*);
    using KActionSelector_EnterEvent_Callback = void (*)(KActionSelector*, QEnterEvent*);
    using KActionSelector_LeaveEvent_Callback = void (*)(KActionSelector*, QEvent*);
    using KActionSelector_PaintEvent_Callback = void (*)(KActionSelector*, QPaintEvent*);
    using KActionSelector_MoveEvent_Callback = void (*)(KActionSelector*, QMoveEvent*);
    using KActionSelector_ResizeEvent_Callback = void (*)(KActionSelector*, QResizeEvent*);
    using KActionSelector_CloseEvent_Callback = void (*)(KActionSelector*, QCloseEvent*);
    using KActionSelector_ContextMenuEvent_Callback = void (*)(KActionSelector*, QContextMenuEvent*);
    using KActionSelector_TabletEvent_Callback = void (*)(KActionSelector*, QTabletEvent*);
    using KActionSelector_ActionEvent_Callback = void (*)(KActionSelector*, QActionEvent*);
    using KActionSelector_DragEnterEvent_Callback = void (*)(KActionSelector*, QDragEnterEvent*);
    using KActionSelector_DragMoveEvent_Callback = void (*)(KActionSelector*, QDragMoveEvent*);
    using KActionSelector_DragLeaveEvent_Callback = void (*)(KActionSelector*, QDragLeaveEvent*);
    using KActionSelector_DropEvent_Callback = void (*)(KActionSelector*, QDropEvent*);
    using KActionSelector_ShowEvent_Callback = void (*)(KActionSelector*, QShowEvent*);
    using KActionSelector_HideEvent_Callback = void (*)(KActionSelector*, QHideEvent*);
    using KActionSelector_NativeEvent_Callback = bool (*)(KActionSelector*, libqt_string, void*, intptr_t*);
    using KActionSelector_ChangeEvent_Callback = void (*)(KActionSelector*, QEvent*);
    using KActionSelector_Metric_Callback = int (*)(const KActionSelector*, int);
    using KActionSelector_InitPainter_Callback = void (*)(const KActionSelector*, QPainter*);
    using KActionSelector_Redirected_Callback = QPaintDevice* (*)(const KActionSelector*, QPoint*);
    using KActionSelector_SharedPainter_Callback = QPainter* (*)();
    using KActionSelector_InputMethodEvent_Callback = void (*)(KActionSelector*, QInputMethodEvent*);
    using KActionSelector_InputMethodQuery_Callback = QVariant* (*)(const KActionSelector*, int);
    using KActionSelector_FocusNextPrevChild_Callback = bool (*)(KActionSelector*, bool);
    using KActionSelector_TimerEvent_Callback = void (*)(KActionSelector*, QTimerEvent*);
    using KActionSelector_ChildEvent_Callback = void (*)(KActionSelector*, QChildEvent*);
    using KActionSelector_CustomEvent_Callback = void (*)(KActionSelector*, QEvent*);
    using KActionSelector_ConnectNotify_Callback = void (*)(KActionSelector*, QMetaMethod*);
    using KActionSelector_DisconnectNotify_Callback = void (*)(KActionSelector*, QMetaMethod*);
    using KActionSelector_UpdateMicroFocus_Callback = void (*)();
    using KActionSelector_Create_Callback = void (*)();
    using KActionSelector_Destroy_Callback = void (*)();
    using KActionSelector_FocusNextChild_Callback = bool (*)();
    using KActionSelector_FocusPreviousChild_Callback = bool (*)();
    using KActionSelector_Sender_Callback = QObject* (*)();
    using KActionSelector_SenderSignalIndex_Callback = int (*)();
    using KActionSelector_Receivers_Callback = int (*)(const KActionSelector*, const char*);
    using KActionSelector_IsSignalConnected_Callback = bool (*)(const KActionSelector*, QMetaMethod*);
    using KActionSelector_GetDecodedMetricF_Callback = double (*)(const KActionSelector*, int, int);

  protected:
    // Instance callback storage
    KActionSelector_Metacall_Callback kactionselector_metacall_callback = nullptr;
    KActionSelector_KeyPressEvent_Callback kactionselector_keypressevent_callback = nullptr;
    KActionSelector_EventFilter_Callback kactionselector_eventfilter_callback = nullptr;
    KActionSelector_DevType_Callback kactionselector_devtype_callback = nullptr;
    KActionSelector_SetVisible_Callback kactionselector_setvisible_callback = nullptr;
    KActionSelector_SizeHint_Callback kactionselector_sizehint_callback = nullptr;
    KActionSelector_MinimumSizeHint_Callback kactionselector_minimumsizehint_callback = nullptr;
    KActionSelector_HeightForWidth_Callback kactionselector_heightforwidth_callback = nullptr;
    KActionSelector_HasHeightForWidth_Callback kactionselector_hasheightforwidth_callback = nullptr;
    KActionSelector_PaintEngine_Callback kactionselector_paintengine_callback = nullptr;
    KActionSelector_Event_Callback kactionselector_event_callback = nullptr;
    KActionSelector_MousePressEvent_Callback kactionselector_mousepressevent_callback = nullptr;
    KActionSelector_MouseReleaseEvent_Callback kactionselector_mousereleaseevent_callback = nullptr;
    KActionSelector_MouseDoubleClickEvent_Callback kactionselector_mousedoubleclickevent_callback = nullptr;
    KActionSelector_MouseMoveEvent_Callback kactionselector_mousemoveevent_callback = nullptr;
    KActionSelector_WheelEvent_Callback kactionselector_wheelevent_callback = nullptr;
    KActionSelector_KeyReleaseEvent_Callback kactionselector_keyreleaseevent_callback = nullptr;
    KActionSelector_FocusInEvent_Callback kactionselector_focusinevent_callback = nullptr;
    KActionSelector_FocusOutEvent_Callback kactionselector_focusoutevent_callback = nullptr;
    KActionSelector_EnterEvent_Callback kactionselector_enterevent_callback = nullptr;
    KActionSelector_LeaveEvent_Callback kactionselector_leaveevent_callback = nullptr;
    KActionSelector_PaintEvent_Callback kactionselector_paintevent_callback = nullptr;
    KActionSelector_MoveEvent_Callback kactionselector_moveevent_callback = nullptr;
    KActionSelector_ResizeEvent_Callback kactionselector_resizeevent_callback = nullptr;
    KActionSelector_CloseEvent_Callback kactionselector_closeevent_callback = nullptr;
    KActionSelector_ContextMenuEvent_Callback kactionselector_contextmenuevent_callback = nullptr;
    KActionSelector_TabletEvent_Callback kactionselector_tabletevent_callback = nullptr;
    KActionSelector_ActionEvent_Callback kactionselector_actionevent_callback = nullptr;
    KActionSelector_DragEnterEvent_Callback kactionselector_dragenterevent_callback = nullptr;
    KActionSelector_DragMoveEvent_Callback kactionselector_dragmoveevent_callback = nullptr;
    KActionSelector_DragLeaveEvent_Callback kactionselector_dragleaveevent_callback = nullptr;
    KActionSelector_DropEvent_Callback kactionselector_dropevent_callback = nullptr;
    KActionSelector_ShowEvent_Callback kactionselector_showevent_callback = nullptr;
    KActionSelector_HideEvent_Callback kactionselector_hideevent_callback = nullptr;
    KActionSelector_NativeEvent_Callback kactionselector_nativeevent_callback = nullptr;
    KActionSelector_ChangeEvent_Callback kactionselector_changeevent_callback = nullptr;
    KActionSelector_Metric_Callback kactionselector_metric_callback = nullptr;
    KActionSelector_InitPainter_Callback kactionselector_initpainter_callback = nullptr;
    KActionSelector_Redirected_Callback kactionselector_redirected_callback = nullptr;
    KActionSelector_SharedPainter_Callback kactionselector_sharedpainter_callback = nullptr;
    KActionSelector_InputMethodEvent_Callback kactionselector_inputmethodevent_callback = nullptr;
    KActionSelector_InputMethodQuery_Callback kactionselector_inputmethodquery_callback = nullptr;
    KActionSelector_FocusNextPrevChild_Callback kactionselector_focusnextprevchild_callback = nullptr;
    KActionSelector_TimerEvent_Callback kactionselector_timerevent_callback = nullptr;
    KActionSelector_ChildEvent_Callback kactionselector_childevent_callback = nullptr;
    KActionSelector_CustomEvent_Callback kactionselector_customevent_callback = nullptr;
    KActionSelector_ConnectNotify_Callback kactionselector_connectnotify_callback = nullptr;
    KActionSelector_DisconnectNotify_Callback kactionselector_disconnectnotify_callback = nullptr;
    KActionSelector_UpdateMicroFocus_Callback kactionselector_updatemicrofocus_callback = nullptr;
    KActionSelector_Create_Callback kactionselector_create_callback = nullptr;
    KActionSelector_Destroy_Callback kactionselector_destroy_callback = nullptr;
    KActionSelector_FocusNextChild_Callback kactionselector_focusnextchild_callback = nullptr;
    KActionSelector_FocusPreviousChild_Callback kactionselector_focuspreviouschild_callback = nullptr;
    KActionSelector_Sender_Callback kactionselector_sender_callback = nullptr;
    KActionSelector_SenderSignalIndex_Callback kactionselector_sendersignalindex_callback = nullptr;
    KActionSelector_Receivers_Callback kactionselector_receivers_callback = nullptr;
    KActionSelector_IsSignalConnected_Callback kactionselector_issignalconnected_callback = nullptr;
    KActionSelector_GetDecodedMetricF_Callback kactionselector_getdecodedmetricf_callback = nullptr;

    // Instance base flags
    mutable bool kactionselector_metacall_isbase = false;
    mutable bool kactionselector_keypressevent_isbase = false;
    mutable bool kactionselector_eventfilter_isbase = false;
    mutable bool kactionselector_devtype_isbase = false;
    mutable bool kactionselector_setvisible_isbase = false;
    mutable bool kactionselector_sizehint_isbase = false;
    mutable bool kactionselector_minimumsizehint_isbase = false;
    mutable bool kactionselector_heightforwidth_isbase = false;
    mutable bool kactionselector_hasheightforwidth_isbase = false;
    mutable bool kactionselector_paintengine_isbase = false;
    mutable bool kactionselector_event_isbase = false;
    mutable bool kactionselector_mousepressevent_isbase = false;
    mutable bool kactionselector_mousereleaseevent_isbase = false;
    mutable bool kactionselector_mousedoubleclickevent_isbase = false;
    mutable bool kactionselector_mousemoveevent_isbase = false;
    mutable bool kactionselector_wheelevent_isbase = false;
    mutable bool kactionselector_keyreleaseevent_isbase = false;
    mutable bool kactionselector_focusinevent_isbase = false;
    mutable bool kactionselector_focusoutevent_isbase = false;
    mutable bool kactionselector_enterevent_isbase = false;
    mutable bool kactionselector_leaveevent_isbase = false;
    mutable bool kactionselector_paintevent_isbase = false;
    mutable bool kactionselector_moveevent_isbase = false;
    mutable bool kactionselector_resizeevent_isbase = false;
    mutable bool kactionselector_closeevent_isbase = false;
    mutable bool kactionselector_contextmenuevent_isbase = false;
    mutable bool kactionselector_tabletevent_isbase = false;
    mutable bool kactionselector_actionevent_isbase = false;
    mutable bool kactionselector_dragenterevent_isbase = false;
    mutable bool kactionselector_dragmoveevent_isbase = false;
    mutable bool kactionselector_dragleaveevent_isbase = false;
    mutable bool kactionselector_dropevent_isbase = false;
    mutable bool kactionselector_showevent_isbase = false;
    mutable bool kactionselector_hideevent_isbase = false;
    mutable bool kactionselector_nativeevent_isbase = false;
    mutable bool kactionselector_changeevent_isbase = false;
    mutable bool kactionselector_metric_isbase = false;
    mutable bool kactionselector_initpainter_isbase = false;
    mutable bool kactionselector_redirected_isbase = false;
    mutable bool kactionselector_sharedpainter_isbase = false;
    mutable bool kactionselector_inputmethodevent_isbase = false;
    mutable bool kactionselector_inputmethodquery_isbase = false;
    mutable bool kactionselector_focusnextprevchild_isbase = false;
    mutable bool kactionselector_timerevent_isbase = false;
    mutable bool kactionselector_childevent_isbase = false;
    mutable bool kactionselector_customevent_isbase = false;
    mutable bool kactionselector_connectnotify_isbase = false;
    mutable bool kactionselector_disconnectnotify_isbase = false;
    mutable bool kactionselector_updatemicrofocus_isbase = false;
    mutable bool kactionselector_create_isbase = false;
    mutable bool kactionselector_destroy_isbase = false;
    mutable bool kactionselector_focusnextchild_isbase = false;
    mutable bool kactionselector_focuspreviouschild_isbase = false;
    mutable bool kactionselector_sender_isbase = false;
    mutable bool kactionselector_sendersignalindex_isbase = false;
    mutable bool kactionselector_receivers_isbase = false;
    mutable bool kactionselector_issignalconnected_isbase = false;
    mutable bool kactionselector_getdecodedmetricf_isbase = false;

  public:
    VirtualKActionSelector(QWidget* parent) : KActionSelector(parent) {};
    VirtualKActionSelector() : KActionSelector() {};

    ~VirtualKActionSelector() {
        kactionselector_metacall_callback = nullptr;
        kactionselector_keypressevent_callback = nullptr;
        kactionselector_eventfilter_callback = nullptr;
        kactionselector_devtype_callback = nullptr;
        kactionselector_setvisible_callback = nullptr;
        kactionselector_sizehint_callback = nullptr;
        kactionselector_minimumsizehint_callback = nullptr;
        kactionselector_heightforwidth_callback = nullptr;
        kactionselector_hasheightforwidth_callback = nullptr;
        kactionselector_paintengine_callback = nullptr;
        kactionselector_event_callback = nullptr;
        kactionselector_mousepressevent_callback = nullptr;
        kactionselector_mousereleaseevent_callback = nullptr;
        kactionselector_mousedoubleclickevent_callback = nullptr;
        kactionselector_mousemoveevent_callback = nullptr;
        kactionselector_wheelevent_callback = nullptr;
        kactionselector_keyreleaseevent_callback = nullptr;
        kactionselector_focusinevent_callback = nullptr;
        kactionselector_focusoutevent_callback = nullptr;
        kactionselector_enterevent_callback = nullptr;
        kactionselector_leaveevent_callback = nullptr;
        kactionselector_paintevent_callback = nullptr;
        kactionselector_moveevent_callback = nullptr;
        kactionselector_resizeevent_callback = nullptr;
        kactionselector_closeevent_callback = nullptr;
        kactionselector_contextmenuevent_callback = nullptr;
        kactionselector_tabletevent_callback = nullptr;
        kactionselector_actionevent_callback = nullptr;
        kactionselector_dragenterevent_callback = nullptr;
        kactionselector_dragmoveevent_callback = nullptr;
        kactionselector_dragleaveevent_callback = nullptr;
        kactionselector_dropevent_callback = nullptr;
        kactionselector_showevent_callback = nullptr;
        kactionselector_hideevent_callback = nullptr;
        kactionselector_nativeevent_callback = nullptr;
        kactionselector_changeevent_callback = nullptr;
        kactionselector_metric_callback = nullptr;
        kactionselector_initpainter_callback = nullptr;
        kactionselector_redirected_callback = nullptr;
        kactionselector_sharedpainter_callback = nullptr;
        kactionselector_inputmethodevent_callback = nullptr;
        kactionselector_inputmethodquery_callback = nullptr;
        kactionselector_focusnextprevchild_callback = nullptr;
        kactionselector_timerevent_callback = nullptr;
        kactionselector_childevent_callback = nullptr;
        kactionselector_customevent_callback = nullptr;
        kactionselector_connectnotify_callback = nullptr;
        kactionselector_disconnectnotify_callback = nullptr;
        kactionselector_updatemicrofocus_callback = nullptr;
        kactionselector_create_callback = nullptr;
        kactionselector_destroy_callback = nullptr;
        kactionselector_focusnextchild_callback = nullptr;
        kactionselector_focuspreviouschild_callback = nullptr;
        kactionselector_sender_callback = nullptr;
        kactionselector_sendersignalindex_callback = nullptr;
        kactionselector_receivers_callback = nullptr;
        kactionselector_issignalconnected_callback = nullptr;
        kactionselector_getdecodedmetricf_callback = nullptr;
    }

    // Callback setters
    inline void setKActionSelector_Metacall_Callback(KActionSelector_Metacall_Callback cb) { kactionselector_metacall_callback = cb; }
    inline void setKActionSelector_KeyPressEvent_Callback(KActionSelector_KeyPressEvent_Callback cb) { kactionselector_keypressevent_callback = cb; }
    inline void setKActionSelector_EventFilter_Callback(KActionSelector_EventFilter_Callback cb) { kactionselector_eventfilter_callback = cb; }
    inline void setKActionSelector_DevType_Callback(KActionSelector_DevType_Callback cb) { kactionselector_devtype_callback = cb; }
    inline void setKActionSelector_SetVisible_Callback(KActionSelector_SetVisible_Callback cb) { kactionselector_setvisible_callback = cb; }
    inline void setKActionSelector_SizeHint_Callback(KActionSelector_SizeHint_Callback cb) { kactionselector_sizehint_callback = cb; }
    inline void setKActionSelector_MinimumSizeHint_Callback(KActionSelector_MinimumSizeHint_Callback cb) { kactionselector_minimumsizehint_callback = cb; }
    inline void setKActionSelector_HeightForWidth_Callback(KActionSelector_HeightForWidth_Callback cb) { kactionselector_heightforwidth_callback = cb; }
    inline void setKActionSelector_HasHeightForWidth_Callback(KActionSelector_HasHeightForWidth_Callback cb) { kactionselector_hasheightforwidth_callback = cb; }
    inline void setKActionSelector_PaintEngine_Callback(KActionSelector_PaintEngine_Callback cb) { kactionselector_paintengine_callback = cb; }
    inline void setKActionSelector_Event_Callback(KActionSelector_Event_Callback cb) { kactionselector_event_callback = cb; }
    inline void setKActionSelector_MousePressEvent_Callback(KActionSelector_MousePressEvent_Callback cb) { kactionselector_mousepressevent_callback = cb; }
    inline void setKActionSelector_MouseReleaseEvent_Callback(KActionSelector_MouseReleaseEvent_Callback cb) { kactionselector_mousereleaseevent_callback = cb; }
    inline void setKActionSelector_MouseDoubleClickEvent_Callback(KActionSelector_MouseDoubleClickEvent_Callback cb) { kactionselector_mousedoubleclickevent_callback = cb; }
    inline void setKActionSelector_MouseMoveEvent_Callback(KActionSelector_MouseMoveEvent_Callback cb) { kactionselector_mousemoveevent_callback = cb; }
    inline void setKActionSelector_WheelEvent_Callback(KActionSelector_WheelEvent_Callback cb) { kactionselector_wheelevent_callback = cb; }
    inline void setKActionSelector_KeyReleaseEvent_Callback(KActionSelector_KeyReleaseEvent_Callback cb) { kactionselector_keyreleaseevent_callback = cb; }
    inline void setKActionSelector_FocusInEvent_Callback(KActionSelector_FocusInEvent_Callback cb) { kactionselector_focusinevent_callback = cb; }
    inline void setKActionSelector_FocusOutEvent_Callback(KActionSelector_FocusOutEvent_Callback cb) { kactionselector_focusoutevent_callback = cb; }
    inline void setKActionSelector_EnterEvent_Callback(KActionSelector_EnterEvent_Callback cb) { kactionselector_enterevent_callback = cb; }
    inline void setKActionSelector_LeaveEvent_Callback(KActionSelector_LeaveEvent_Callback cb) { kactionselector_leaveevent_callback = cb; }
    inline void setKActionSelector_PaintEvent_Callback(KActionSelector_PaintEvent_Callback cb) { kactionselector_paintevent_callback = cb; }
    inline void setKActionSelector_MoveEvent_Callback(KActionSelector_MoveEvent_Callback cb) { kactionselector_moveevent_callback = cb; }
    inline void setKActionSelector_ResizeEvent_Callback(KActionSelector_ResizeEvent_Callback cb) { kactionselector_resizeevent_callback = cb; }
    inline void setKActionSelector_CloseEvent_Callback(KActionSelector_CloseEvent_Callback cb) { kactionselector_closeevent_callback = cb; }
    inline void setKActionSelector_ContextMenuEvent_Callback(KActionSelector_ContextMenuEvent_Callback cb) { kactionselector_contextmenuevent_callback = cb; }
    inline void setKActionSelector_TabletEvent_Callback(KActionSelector_TabletEvent_Callback cb) { kactionselector_tabletevent_callback = cb; }
    inline void setKActionSelector_ActionEvent_Callback(KActionSelector_ActionEvent_Callback cb) { kactionselector_actionevent_callback = cb; }
    inline void setKActionSelector_DragEnterEvent_Callback(KActionSelector_DragEnterEvent_Callback cb) { kactionselector_dragenterevent_callback = cb; }
    inline void setKActionSelector_DragMoveEvent_Callback(KActionSelector_DragMoveEvent_Callback cb) { kactionselector_dragmoveevent_callback = cb; }
    inline void setKActionSelector_DragLeaveEvent_Callback(KActionSelector_DragLeaveEvent_Callback cb) { kactionselector_dragleaveevent_callback = cb; }
    inline void setKActionSelector_DropEvent_Callback(KActionSelector_DropEvent_Callback cb) { kactionselector_dropevent_callback = cb; }
    inline void setKActionSelector_ShowEvent_Callback(KActionSelector_ShowEvent_Callback cb) { kactionselector_showevent_callback = cb; }
    inline void setKActionSelector_HideEvent_Callback(KActionSelector_HideEvent_Callback cb) { kactionselector_hideevent_callback = cb; }
    inline void setKActionSelector_NativeEvent_Callback(KActionSelector_NativeEvent_Callback cb) { kactionselector_nativeevent_callback = cb; }
    inline void setKActionSelector_ChangeEvent_Callback(KActionSelector_ChangeEvent_Callback cb) { kactionselector_changeevent_callback = cb; }
    inline void setKActionSelector_Metric_Callback(KActionSelector_Metric_Callback cb) { kactionselector_metric_callback = cb; }
    inline void setKActionSelector_InitPainter_Callback(KActionSelector_InitPainter_Callback cb) { kactionselector_initpainter_callback = cb; }
    inline void setKActionSelector_Redirected_Callback(KActionSelector_Redirected_Callback cb) { kactionselector_redirected_callback = cb; }
    inline void setKActionSelector_SharedPainter_Callback(KActionSelector_SharedPainter_Callback cb) { kactionselector_sharedpainter_callback = cb; }
    inline void setKActionSelector_InputMethodEvent_Callback(KActionSelector_InputMethodEvent_Callback cb) { kactionselector_inputmethodevent_callback = cb; }
    inline void setKActionSelector_InputMethodQuery_Callback(KActionSelector_InputMethodQuery_Callback cb) { kactionselector_inputmethodquery_callback = cb; }
    inline void setKActionSelector_FocusNextPrevChild_Callback(KActionSelector_FocusNextPrevChild_Callback cb) { kactionselector_focusnextprevchild_callback = cb; }
    inline void setKActionSelector_TimerEvent_Callback(KActionSelector_TimerEvent_Callback cb) { kactionselector_timerevent_callback = cb; }
    inline void setKActionSelector_ChildEvent_Callback(KActionSelector_ChildEvent_Callback cb) { kactionselector_childevent_callback = cb; }
    inline void setKActionSelector_CustomEvent_Callback(KActionSelector_CustomEvent_Callback cb) { kactionselector_customevent_callback = cb; }
    inline void setKActionSelector_ConnectNotify_Callback(KActionSelector_ConnectNotify_Callback cb) { kactionselector_connectnotify_callback = cb; }
    inline void setKActionSelector_DisconnectNotify_Callback(KActionSelector_DisconnectNotify_Callback cb) { kactionselector_disconnectnotify_callback = cb; }
    inline void setKActionSelector_UpdateMicroFocus_Callback(KActionSelector_UpdateMicroFocus_Callback cb) { kactionselector_updatemicrofocus_callback = cb; }
    inline void setKActionSelector_Create_Callback(KActionSelector_Create_Callback cb) { kactionselector_create_callback = cb; }
    inline void setKActionSelector_Destroy_Callback(KActionSelector_Destroy_Callback cb) { kactionselector_destroy_callback = cb; }
    inline void setKActionSelector_FocusNextChild_Callback(KActionSelector_FocusNextChild_Callback cb) { kactionselector_focusnextchild_callback = cb; }
    inline void setKActionSelector_FocusPreviousChild_Callback(KActionSelector_FocusPreviousChild_Callback cb) { kactionselector_focuspreviouschild_callback = cb; }
    inline void setKActionSelector_Sender_Callback(KActionSelector_Sender_Callback cb) { kactionselector_sender_callback = cb; }
    inline void setKActionSelector_SenderSignalIndex_Callback(KActionSelector_SenderSignalIndex_Callback cb) { kactionselector_sendersignalindex_callback = cb; }
    inline void setKActionSelector_Receivers_Callback(KActionSelector_Receivers_Callback cb) { kactionselector_receivers_callback = cb; }
    inline void setKActionSelector_IsSignalConnected_Callback(KActionSelector_IsSignalConnected_Callback cb) { kactionselector_issignalconnected_callback = cb; }
    inline void setKActionSelector_GetDecodedMetricF_Callback(KActionSelector_GetDecodedMetricF_Callback cb) { kactionselector_getdecodedmetricf_callback = cb; }

    // Base flag setters
    inline void setKActionSelector_Metacall_IsBase(bool value) const { kactionselector_metacall_isbase = value; }
    inline void setKActionSelector_KeyPressEvent_IsBase(bool value) const { kactionselector_keypressevent_isbase = value; }
    inline void setKActionSelector_EventFilter_IsBase(bool value) const { kactionselector_eventfilter_isbase = value; }
    inline void setKActionSelector_DevType_IsBase(bool value) const { kactionselector_devtype_isbase = value; }
    inline void setKActionSelector_SetVisible_IsBase(bool value) const { kactionselector_setvisible_isbase = value; }
    inline void setKActionSelector_SizeHint_IsBase(bool value) const { kactionselector_sizehint_isbase = value; }
    inline void setKActionSelector_MinimumSizeHint_IsBase(bool value) const { kactionselector_minimumsizehint_isbase = value; }
    inline void setKActionSelector_HeightForWidth_IsBase(bool value) const { kactionselector_heightforwidth_isbase = value; }
    inline void setKActionSelector_HasHeightForWidth_IsBase(bool value) const { kactionselector_hasheightforwidth_isbase = value; }
    inline void setKActionSelector_PaintEngine_IsBase(bool value) const { kactionselector_paintengine_isbase = value; }
    inline void setKActionSelector_Event_IsBase(bool value) const { kactionselector_event_isbase = value; }
    inline void setKActionSelector_MousePressEvent_IsBase(bool value) const { kactionselector_mousepressevent_isbase = value; }
    inline void setKActionSelector_MouseReleaseEvent_IsBase(bool value) const { kactionselector_mousereleaseevent_isbase = value; }
    inline void setKActionSelector_MouseDoubleClickEvent_IsBase(bool value) const { kactionselector_mousedoubleclickevent_isbase = value; }
    inline void setKActionSelector_MouseMoveEvent_IsBase(bool value) const { kactionselector_mousemoveevent_isbase = value; }
    inline void setKActionSelector_WheelEvent_IsBase(bool value) const { kactionselector_wheelevent_isbase = value; }
    inline void setKActionSelector_KeyReleaseEvent_IsBase(bool value) const { kactionselector_keyreleaseevent_isbase = value; }
    inline void setKActionSelector_FocusInEvent_IsBase(bool value) const { kactionselector_focusinevent_isbase = value; }
    inline void setKActionSelector_FocusOutEvent_IsBase(bool value) const { kactionselector_focusoutevent_isbase = value; }
    inline void setKActionSelector_EnterEvent_IsBase(bool value) const { kactionselector_enterevent_isbase = value; }
    inline void setKActionSelector_LeaveEvent_IsBase(bool value) const { kactionselector_leaveevent_isbase = value; }
    inline void setKActionSelector_PaintEvent_IsBase(bool value) const { kactionselector_paintevent_isbase = value; }
    inline void setKActionSelector_MoveEvent_IsBase(bool value) const { kactionselector_moveevent_isbase = value; }
    inline void setKActionSelector_ResizeEvent_IsBase(bool value) const { kactionselector_resizeevent_isbase = value; }
    inline void setKActionSelector_CloseEvent_IsBase(bool value) const { kactionselector_closeevent_isbase = value; }
    inline void setKActionSelector_ContextMenuEvent_IsBase(bool value) const { kactionselector_contextmenuevent_isbase = value; }
    inline void setKActionSelector_TabletEvent_IsBase(bool value) const { kactionselector_tabletevent_isbase = value; }
    inline void setKActionSelector_ActionEvent_IsBase(bool value) const { kactionselector_actionevent_isbase = value; }
    inline void setKActionSelector_DragEnterEvent_IsBase(bool value) const { kactionselector_dragenterevent_isbase = value; }
    inline void setKActionSelector_DragMoveEvent_IsBase(bool value) const { kactionselector_dragmoveevent_isbase = value; }
    inline void setKActionSelector_DragLeaveEvent_IsBase(bool value) const { kactionselector_dragleaveevent_isbase = value; }
    inline void setKActionSelector_DropEvent_IsBase(bool value) const { kactionselector_dropevent_isbase = value; }
    inline void setKActionSelector_ShowEvent_IsBase(bool value) const { kactionselector_showevent_isbase = value; }
    inline void setKActionSelector_HideEvent_IsBase(bool value) const { kactionselector_hideevent_isbase = value; }
    inline void setKActionSelector_NativeEvent_IsBase(bool value) const { kactionselector_nativeevent_isbase = value; }
    inline void setKActionSelector_ChangeEvent_IsBase(bool value) const { kactionselector_changeevent_isbase = value; }
    inline void setKActionSelector_Metric_IsBase(bool value) const { kactionselector_metric_isbase = value; }
    inline void setKActionSelector_InitPainter_IsBase(bool value) const { kactionselector_initpainter_isbase = value; }
    inline void setKActionSelector_Redirected_IsBase(bool value) const { kactionselector_redirected_isbase = value; }
    inline void setKActionSelector_SharedPainter_IsBase(bool value) const { kactionselector_sharedpainter_isbase = value; }
    inline void setKActionSelector_InputMethodEvent_IsBase(bool value) const { kactionselector_inputmethodevent_isbase = value; }
    inline void setKActionSelector_InputMethodQuery_IsBase(bool value) const { kactionselector_inputmethodquery_isbase = value; }
    inline void setKActionSelector_FocusNextPrevChild_IsBase(bool value) const { kactionselector_focusnextprevchild_isbase = value; }
    inline void setKActionSelector_TimerEvent_IsBase(bool value) const { kactionselector_timerevent_isbase = value; }
    inline void setKActionSelector_ChildEvent_IsBase(bool value) const { kactionselector_childevent_isbase = value; }
    inline void setKActionSelector_CustomEvent_IsBase(bool value) const { kactionselector_customevent_isbase = value; }
    inline void setKActionSelector_ConnectNotify_IsBase(bool value) const { kactionselector_connectnotify_isbase = value; }
    inline void setKActionSelector_DisconnectNotify_IsBase(bool value) const { kactionselector_disconnectnotify_isbase = value; }
    inline void setKActionSelector_UpdateMicroFocus_IsBase(bool value) const { kactionselector_updatemicrofocus_isbase = value; }
    inline void setKActionSelector_Create_IsBase(bool value) const { kactionselector_create_isbase = value; }
    inline void setKActionSelector_Destroy_IsBase(bool value) const { kactionselector_destroy_isbase = value; }
    inline void setKActionSelector_FocusNextChild_IsBase(bool value) const { kactionselector_focusnextchild_isbase = value; }
    inline void setKActionSelector_FocusPreviousChild_IsBase(bool value) const { kactionselector_focuspreviouschild_isbase = value; }
    inline void setKActionSelector_Sender_IsBase(bool value) const { kactionselector_sender_isbase = value; }
    inline void setKActionSelector_SenderSignalIndex_IsBase(bool value) const { kactionselector_sendersignalindex_isbase = value; }
    inline void setKActionSelector_Receivers_IsBase(bool value) const { kactionselector_receivers_isbase = value; }
    inline void setKActionSelector_IsSignalConnected_IsBase(bool value) const { kactionselector_issignalconnected_isbase = value; }
    inline void setKActionSelector_GetDecodedMetricF_IsBase(bool value) const { kactionselector_getdecodedmetricf_isbase = value; }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (kactionselector_metacall_isbase) {
            kactionselector_metacall_isbase = false;
            return KActionSelector::qt_metacall(param1, param2, param3);
        } else if (kactionselector_metacall_callback != nullptr) {
            int cbval1 = static_cast<int>(param1);
            int cbval2 = param2;
            void** cbval3 = param3;

            int callback_ret = kactionselector_metacall_callback(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        } else {
            return KActionSelector::qt_metacall(param1, param2, param3);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void keyPressEvent(QKeyEvent* param1) override {
        if (kactionselector_keypressevent_isbase) {
            kactionselector_keypressevent_isbase = false;
            KActionSelector::keyPressEvent(param1);
        } else if (kactionselector_keypressevent_callback != nullptr) {
            QKeyEvent* cbval1 = param1;

            kactionselector_keypressevent_callback(this, cbval1);
        } else {
            KActionSelector::keyPressEvent(param1);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* param1, QEvent* param2) override {
        if (kactionselector_eventfilter_isbase) {
            kactionselector_eventfilter_isbase = false;
            return KActionSelector::eventFilter(param1, param2);
        } else if (kactionselector_eventfilter_callback != nullptr) {
            QObject* cbval1 = param1;
            QEvent* cbval2 = param2;

            bool callback_ret = kactionselector_eventfilter_callback(this, cbval1, cbval2);
            return callback_ret;
        } else {
            return KActionSelector::eventFilter(param1, param2);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual int devType() const override {
        if (kactionselector_devtype_isbase) {
            kactionselector_devtype_isbase = false;
            return KActionSelector::devType();
        } else if (kactionselector_devtype_callback != nullptr) {
            int callback_ret = kactionselector_devtype_callback();
            return static_cast<int>(callback_ret);
        } else {
            return KActionSelector::devType();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void setVisible(bool visible) override {
        if (kactionselector_setvisible_isbase) {
            kactionselector_setvisible_isbase = false;
            KActionSelector::setVisible(visible);
        } else if (kactionselector_setvisible_callback != nullptr) {
            bool cbval1 = visible;

            kactionselector_setvisible_callback(this, cbval1);
        } else {
            KActionSelector::setVisible(visible);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QSize sizeHint() const override {
        if (kactionselector_sizehint_isbase) {
            kactionselector_sizehint_isbase = false;
            return KActionSelector::sizeHint();
        } else if (kactionselector_sizehint_callback != nullptr) {
            QSize* callback_ret = kactionselector_sizehint_callback();
            return *callback_ret;
        } else {
            return KActionSelector::sizeHint();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QSize minimumSizeHint() const override {
        if (kactionselector_minimumsizehint_isbase) {
            kactionselector_minimumsizehint_isbase = false;
            return KActionSelector::minimumSizeHint();
        } else if (kactionselector_minimumsizehint_callback != nullptr) {
            QSize* callback_ret = kactionselector_minimumsizehint_callback();
            return *callback_ret;
        } else {
            return KActionSelector::minimumSizeHint();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual int heightForWidth(int param1) const override {
        if (kactionselector_heightforwidth_isbase) {
            kactionselector_heightforwidth_isbase = false;
            return KActionSelector::heightForWidth(param1);
        } else if (kactionselector_heightforwidth_callback != nullptr) {
            int cbval1 = param1;

            int callback_ret = kactionselector_heightforwidth_callback(this, cbval1);
            return static_cast<int>(callback_ret);
        } else {
            return KActionSelector::heightForWidth(param1);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool hasHeightForWidth() const override {
        if (kactionselector_hasheightforwidth_isbase) {
            kactionselector_hasheightforwidth_isbase = false;
            return KActionSelector::hasHeightForWidth();
        } else if (kactionselector_hasheightforwidth_callback != nullptr) {
            bool callback_ret = kactionselector_hasheightforwidth_callback();
            return callback_ret;
        } else {
            return KActionSelector::hasHeightForWidth();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QPaintEngine* paintEngine() const override {
        if (kactionselector_paintengine_isbase) {
            kactionselector_paintengine_isbase = false;
            return KActionSelector::paintEngine();
        } else if (kactionselector_paintengine_callback != nullptr) {
            QPaintEngine* callback_ret = kactionselector_paintengine_callback();
            return callback_ret;
        } else {
            return KActionSelector::paintEngine();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* event) override {
        if (kactionselector_event_isbase) {
            kactionselector_event_isbase = false;
            return KActionSelector::event(event);
        } else if (kactionselector_event_callback != nullptr) {
            QEvent* cbval1 = event;

            bool callback_ret = kactionselector_event_callback(this, cbval1);
            return callback_ret;
        } else {
            return KActionSelector::event(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void mousePressEvent(QMouseEvent* event) override {
        if (kactionselector_mousepressevent_isbase) {
            kactionselector_mousepressevent_isbase = false;
            KActionSelector::mousePressEvent(event);
        } else if (kactionselector_mousepressevent_callback != nullptr) {
            QMouseEvent* cbval1 = event;

            kactionselector_mousepressevent_callback(this, cbval1);
        } else {
            KActionSelector::mousePressEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseReleaseEvent(QMouseEvent* event) override {
        if (kactionselector_mousereleaseevent_isbase) {
            kactionselector_mousereleaseevent_isbase = false;
            KActionSelector::mouseReleaseEvent(event);
        } else if (kactionselector_mousereleaseevent_callback != nullptr) {
            QMouseEvent* cbval1 = event;

            kactionselector_mousereleaseevent_callback(this, cbval1);
        } else {
            KActionSelector::mouseReleaseEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseDoubleClickEvent(QMouseEvent* event) override {
        if (kactionselector_mousedoubleclickevent_isbase) {
            kactionselector_mousedoubleclickevent_isbase = false;
            KActionSelector::mouseDoubleClickEvent(event);
        } else if (kactionselector_mousedoubleclickevent_callback != nullptr) {
            QMouseEvent* cbval1 = event;

            kactionselector_mousedoubleclickevent_callback(this, cbval1);
        } else {
            KActionSelector::mouseDoubleClickEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseMoveEvent(QMouseEvent* event) override {
        if (kactionselector_mousemoveevent_isbase) {
            kactionselector_mousemoveevent_isbase = false;
            KActionSelector::mouseMoveEvent(event);
        } else if (kactionselector_mousemoveevent_callback != nullptr) {
            QMouseEvent* cbval1 = event;

            kactionselector_mousemoveevent_callback(this, cbval1);
        } else {
            KActionSelector::mouseMoveEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void wheelEvent(QWheelEvent* event) override {
        if (kactionselector_wheelevent_isbase) {
            kactionselector_wheelevent_isbase = false;
            KActionSelector::wheelEvent(event);
        } else if (kactionselector_wheelevent_callback != nullptr) {
            QWheelEvent* cbval1 = event;

            kactionselector_wheelevent_callback(this, cbval1);
        } else {
            KActionSelector::wheelEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void keyReleaseEvent(QKeyEvent* event) override {
        if (kactionselector_keyreleaseevent_isbase) {
            kactionselector_keyreleaseevent_isbase = false;
            KActionSelector::keyReleaseEvent(event);
        } else if (kactionselector_keyreleaseevent_callback != nullptr) {
            QKeyEvent* cbval1 = event;

            kactionselector_keyreleaseevent_callback(this, cbval1);
        } else {
            KActionSelector::keyReleaseEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void focusInEvent(QFocusEvent* event) override {
        if (kactionselector_focusinevent_isbase) {
            kactionselector_focusinevent_isbase = false;
            KActionSelector::focusInEvent(event);
        } else if (kactionselector_focusinevent_callback != nullptr) {
            QFocusEvent* cbval1 = event;

            kactionselector_focusinevent_callback(this, cbval1);
        } else {
            KActionSelector::focusInEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void focusOutEvent(QFocusEvent* event) override {
        if (kactionselector_focusoutevent_isbase) {
            kactionselector_focusoutevent_isbase = false;
            KActionSelector::focusOutEvent(event);
        } else if (kactionselector_focusoutevent_callback != nullptr) {
            QFocusEvent* cbval1 = event;

            kactionselector_focusoutevent_callback(this, cbval1);
        } else {
            KActionSelector::focusOutEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void enterEvent(QEnterEvent* event) override {
        if (kactionselector_enterevent_isbase) {
            kactionselector_enterevent_isbase = false;
            KActionSelector::enterEvent(event);
        } else if (kactionselector_enterevent_callback != nullptr) {
            QEnterEvent* cbval1 = event;

            kactionselector_enterevent_callback(this, cbval1);
        } else {
            KActionSelector::enterEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void leaveEvent(QEvent* event) override {
        if (kactionselector_leaveevent_isbase) {
            kactionselector_leaveevent_isbase = false;
            KActionSelector::leaveEvent(event);
        } else if (kactionselector_leaveevent_callback != nullptr) {
            QEvent* cbval1 = event;

            kactionselector_leaveevent_callback(this, cbval1);
        } else {
            KActionSelector::leaveEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void paintEvent(QPaintEvent* event) override {
        if (kactionselector_paintevent_isbase) {
            kactionselector_paintevent_isbase = false;
            KActionSelector::paintEvent(event);
        } else if (kactionselector_paintevent_callback != nullptr) {
            QPaintEvent* cbval1 = event;

            kactionselector_paintevent_callback(this, cbval1);
        } else {
            KActionSelector::paintEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void moveEvent(QMoveEvent* event) override {
        if (kactionselector_moveevent_isbase) {
            kactionselector_moveevent_isbase = false;
            KActionSelector::moveEvent(event);
        } else if (kactionselector_moveevent_callback != nullptr) {
            QMoveEvent* cbval1 = event;

            kactionselector_moveevent_callback(this, cbval1);
        } else {
            KActionSelector::moveEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void resizeEvent(QResizeEvent* event) override {
        if (kactionselector_resizeevent_isbase) {
            kactionselector_resizeevent_isbase = false;
            KActionSelector::resizeEvent(event);
        } else if (kactionselector_resizeevent_callback != nullptr) {
            QResizeEvent* cbval1 = event;

            kactionselector_resizeevent_callback(this, cbval1);
        } else {
            KActionSelector::resizeEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void closeEvent(QCloseEvent* event) override {
        if (kactionselector_closeevent_isbase) {
            kactionselector_closeevent_isbase = false;
            KActionSelector::closeEvent(event);
        } else if (kactionselector_closeevent_callback != nullptr) {
            QCloseEvent* cbval1 = event;

            kactionselector_closeevent_callback(this, cbval1);
        } else {
            KActionSelector::closeEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void contextMenuEvent(QContextMenuEvent* event) override {
        if (kactionselector_contextmenuevent_isbase) {
            kactionselector_contextmenuevent_isbase = false;
            KActionSelector::contextMenuEvent(event);
        } else if (kactionselector_contextmenuevent_callback != nullptr) {
            QContextMenuEvent* cbval1 = event;

            kactionselector_contextmenuevent_callback(this, cbval1);
        } else {
            KActionSelector::contextMenuEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void tabletEvent(QTabletEvent* event) override {
        if (kactionselector_tabletevent_isbase) {
            kactionselector_tabletevent_isbase = false;
            KActionSelector::tabletEvent(event);
        } else if (kactionselector_tabletevent_callback != nullptr) {
            QTabletEvent* cbval1 = event;

            kactionselector_tabletevent_callback(this, cbval1);
        } else {
            KActionSelector::tabletEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void actionEvent(QActionEvent* event) override {
        if (kactionselector_actionevent_isbase) {
            kactionselector_actionevent_isbase = false;
            KActionSelector::actionEvent(event);
        } else if (kactionselector_actionevent_callback != nullptr) {
            QActionEvent* cbval1 = event;

            kactionselector_actionevent_callback(this, cbval1);
        } else {
            KActionSelector::actionEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragEnterEvent(QDragEnterEvent* event) override {
        if (kactionselector_dragenterevent_isbase) {
            kactionselector_dragenterevent_isbase = false;
            KActionSelector::dragEnterEvent(event);
        } else if (kactionselector_dragenterevent_callback != nullptr) {
            QDragEnterEvent* cbval1 = event;

            kactionselector_dragenterevent_callback(this, cbval1);
        } else {
            KActionSelector::dragEnterEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragMoveEvent(QDragMoveEvent* event) override {
        if (kactionselector_dragmoveevent_isbase) {
            kactionselector_dragmoveevent_isbase = false;
            KActionSelector::dragMoveEvent(event);
        } else if (kactionselector_dragmoveevent_callback != nullptr) {
            QDragMoveEvent* cbval1 = event;

            kactionselector_dragmoveevent_callback(this, cbval1);
        } else {
            KActionSelector::dragMoveEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragLeaveEvent(QDragLeaveEvent* event) override {
        if (kactionselector_dragleaveevent_isbase) {
            kactionselector_dragleaveevent_isbase = false;
            KActionSelector::dragLeaveEvent(event);
        } else if (kactionselector_dragleaveevent_callback != nullptr) {
            QDragLeaveEvent* cbval1 = event;

            kactionselector_dragleaveevent_callback(this, cbval1);
        } else {
            KActionSelector::dragLeaveEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void dropEvent(QDropEvent* event) override {
        if (kactionselector_dropevent_isbase) {
            kactionselector_dropevent_isbase = false;
            KActionSelector::dropEvent(event);
        } else if (kactionselector_dropevent_callback != nullptr) {
            QDropEvent* cbval1 = event;

            kactionselector_dropevent_callback(this, cbval1);
        } else {
            KActionSelector::dropEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void showEvent(QShowEvent* event) override {
        if (kactionselector_showevent_isbase) {
            kactionselector_showevent_isbase = false;
            KActionSelector::showEvent(event);
        } else if (kactionselector_showevent_callback != nullptr) {
            QShowEvent* cbval1 = event;

            kactionselector_showevent_callback(this, cbval1);
        } else {
            KActionSelector::showEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void hideEvent(QHideEvent* event) override {
        if (kactionselector_hideevent_isbase) {
            kactionselector_hideevent_isbase = false;
            KActionSelector::hideEvent(event);
        } else if (kactionselector_hideevent_callback != nullptr) {
            QHideEvent* cbval1 = event;

            kactionselector_hideevent_callback(this, cbval1);
        } else {
            KActionSelector::hideEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool nativeEvent(const QByteArray& eventType, void* message, qintptr* result) override {
        if (kactionselector_nativeevent_isbase) {
            kactionselector_nativeevent_isbase = false;
            return KActionSelector::nativeEvent(eventType, message, result);
        } else if (kactionselector_nativeevent_callback != nullptr) {
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

            bool callback_ret = kactionselector_nativeevent_callback(this, cbval1, cbval2, cbval3);
            return callback_ret;
        } else {
            return KActionSelector::nativeEvent(eventType, message, result);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void changeEvent(QEvent* param1) override {
        if (kactionselector_changeevent_isbase) {
            kactionselector_changeevent_isbase = false;
            KActionSelector::changeEvent(param1);
        } else if (kactionselector_changeevent_callback != nullptr) {
            QEvent* cbval1 = param1;

            kactionselector_changeevent_callback(this, cbval1);
        } else {
            KActionSelector::changeEvent(param1);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual int metric(QPaintDevice::PaintDeviceMetric param1) const override {
        if (kactionselector_metric_isbase) {
            kactionselector_metric_isbase = false;
            return KActionSelector::metric(param1);
        } else if (kactionselector_metric_callback != nullptr) {
            int cbval1 = static_cast<int>(param1);

            int callback_ret = kactionselector_metric_callback(this, cbval1);
            return static_cast<int>(callback_ret);
        } else {
            return KActionSelector::metric(param1);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void initPainter(QPainter* painter) const override {
        if (kactionselector_initpainter_isbase) {
            kactionselector_initpainter_isbase = false;
            KActionSelector::initPainter(painter);
        } else if (kactionselector_initpainter_callback != nullptr) {
            QPainter* cbval1 = painter;

            kactionselector_initpainter_callback(this, cbval1);
        } else {
            KActionSelector::initPainter(painter);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QPaintDevice* redirected(QPoint* offset) const override {
        if (kactionselector_redirected_isbase) {
            kactionselector_redirected_isbase = false;
            return KActionSelector::redirected(offset);
        } else if (kactionselector_redirected_callback != nullptr) {
            QPoint* cbval1 = offset;

            QPaintDevice* callback_ret = kactionselector_redirected_callback(this, cbval1);
            return callback_ret;
        } else {
            return KActionSelector::redirected(offset);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QPainter* sharedPainter() const override {
        if (kactionselector_sharedpainter_isbase) {
            kactionselector_sharedpainter_isbase = false;
            return KActionSelector::sharedPainter();
        } else if (kactionselector_sharedpainter_callback != nullptr) {
            QPainter* callback_ret = kactionselector_sharedpainter_callback();
            return callback_ret;
        } else {
            return KActionSelector::sharedPainter();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void inputMethodEvent(QInputMethodEvent* param1) override {
        if (kactionselector_inputmethodevent_isbase) {
            kactionselector_inputmethodevent_isbase = false;
            KActionSelector::inputMethodEvent(param1);
        } else if (kactionselector_inputmethodevent_callback != nullptr) {
            QInputMethodEvent* cbval1 = param1;

            kactionselector_inputmethodevent_callback(this, cbval1);
        } else {
            KActionSelector::inputMethodEvent(param1);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QVariant inputMethodQuery(Qt::InputMethodQuery param1) const override {
        if (kactionselector_inputmethodquery_isbase) {
            kactionselector_inputmethodquery_isbase = false;
            return KActionSelector::inputMethodQuery(param1);
        } else if (kactionselector_inputmethodquery_callback != nullptr) {
            int cbval1 = static_cast<int>(param1);

            QVariant* callback_ret = kactionselector_inputmethodquery_callback(this, cbval1);
            return *callback_ret;
        } else {
            return KActionSelector::inputMethodQuery(param1);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool focusNextPrevChild(bool next) override {
        if (kactionselector_focusnextprevchild_isbase) {
            kactionselector_focusnextprevchild_isbase = false;
            return KActionSelector::focusNextPrevChild(next);
        } else if (kactionselector_focusnextprevchild_callback != nullptr) {
            bool cbval1 = next;

            bool callback_ret = kactionselector_focusnextprevchild_callback(this, cbval1);
            return callback_ret;
        } else {
            return KActionSelector::focusNextPrevChild(next);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (kactionselector_timerevent_isbase) {
            kactionselector_timerevent_isbase = false;
            KActionSelector::timerEvent(event);
        } else if (kactionselector_timerevent_callback != nullptr) {
            QTimerEvent* cbval1 = event;

            kactionselector_timerevent_callback(this, cbval1);
        } else {
            KActionSelector::timerEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (kactionselector_childevent_isbase) {
            kactionselector_childevent_isbase = false;
            KActionSelector::childEvent(event);
        } else if (kactionselector_childevent_callback != nullptr) {
            QChildEvent* cbval1 = event;

            kactionselector_childevent_callback(this, cbval1);
        } else {
            KActionSelector::childEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (kactionselector_customevent_isbase) {
            kactionselector_customevent_isbase = false;
            KActionSelector::customEvent(event);
        } else if (kactionselector_customevent_callback != nullptr) {
            QEvent* cbval1 = event;

            kactionselector_customevent_callback(this, cbval1);
        } else {
            KActionSelector::customEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (kactionselector_connectnotify_isbase) {
            kactionselector_connectnotify_isbase = false;
            KActionSelector::connectNotify(signal);
        } else if (kactionselector_connectnotify_callback != nullptr) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            kactionselector_connectnotify_callback(this, cbval1);
        } else {
            KActionSelector::connectNotify(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (kactionselector_disconnectnotify_isbase) {
            kactionselector_disconnectnotify_isbase = false;
            KActionSelector::disconnectNotify(signal);
        } else if (kactionselector_disconnectnotify_callback != nullptr) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            kactionselector_disconnectnotify_callback(this, cbval1);
        } else {
            KActionSelector::disconnectNotify(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    void updateMicroFocus() {
        if (kactionselector_updatemicrofocus_isbase) {
            kactionselector_updatemicrofocus_isbase = false;
            KActionSelector::updateMicroFocus();
        } else if (kactionselector_updatemicrofocus_callback != nullptr) {
            kactionselector_updatemicrofocus_callback();
        } else {
            KActionSelector::updateMicroFocus();
        }
    }

    // Virtual method for C ABI access and custom callback
    void create() {
        if (kactionselector_create_isbase) {
            kactionselector_create_isbase = false;
            KActionSelector::create();
        } else if (kactionselector_create_callback != nullptr) {
            kactionselector_create_callback();
        } else {
            KActionSelector::create();
        }
    }

    // Virtual method for C ABI access and custom callback
    void destroy() {
        if (kactionselector_destroy_isbase) {
            kactionselector_destroy_isbase = false;
            KActionSelector::destroy();
        } else if (kactionselector_destroy_callback != nullptr) {
            kactionselector_destroy_callback();
        } else {
            KActionSelector::destroy();
        }
    }

    // Virtual method for C ABI access and custom callback
    bool focusNextChild() {
        if (kactionselector_focusnextchild_isbase) {
            kactionselector_focusnextchild_isbase = false;
            return KActionSelector::focusNextChild();
        } else if (kactionselector_focusnextchild_callback != nullptr) {
            bool callback_ret = kactionselector_focusnextchild_callback();
            return callback_ret;
        } else {
            return KActionSelector::focusNextChild();
        }
    }

    // Virtual method for C ABI access and custom callback
    bool focusPreviousChild() {
        if (kactionselector_focuspreviouschild_isbase) {
            kactionselector_focuspreviouschild_isbase = false;
            return KActionSelector::focusPreviousChild();
        } else if (kactionselector_focuspreviouschild_callback != nullptr) {
            bool callback_ret = kactionselector_focuspreviouschild_callback();
            return callback_ret;
        } else {
            return KActionSelector::focusPreviousChild();
        }
    }

    // Virtual method for C ABI access and custom callback
    QObject* sender() const {
        if (kactionselector_sender_isbase) {
            kactionselector_sender_isbase = false;
            return KActionSelector::sender();
        } else if (kactionselector_sender_callback != nullptr) {
            QObject* callback_ret = kactionselector_sender_callback();
            return callback_ret;
        } else {
            return KActionSelector::sender();
        }
    }

    // Virtual method for C ABI access and custom callback
    int senderSignalIndex() const {
        if (kactionselector_sendersignalindex_isbase) {
            kactionselector_sendersignalindex_isbase = false;
            return KActionSelector::senderSignalIndex();
        } else if (kactionselector_sendersignalindex_callback != nullptr) {
            int callback_ret = kactionselector_sendersignalindex_callback();
            return static_cast<int>(callback_ret);
        } else {
            return KActionSelector::senderSignalIndex();
        }
    }

    // Virtual method for C ABI access and custom callback
    int receivers(const char* signal) const {
        if (kactionselector_receivers_isbase) {
            kactionselector_receivers_isbase = false;
            return KActionSelector::receivers(signal);
        } else if (kactionselector_receivers_callback != nullptr) {
            const char* cbval1 = (const char*)signal;

            int callback_ret = kactionselector_receivers_callback(this, cbval1);
            return static_cast<int>(callback_ret);
        } else {
            return KActionSelector::receivers(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    bool isSignalConnected(const QMetaMethod& signal) const {
        if (kactionselector_issignalconnected_isbase) {
            kactionselector_issignalconnected_isbase = false;
            return KActionSelector::isSignalConnected(signal);
        } else if (kactionselector_issignalconnected_callback != nullptr) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            bool callback_ret = kactionselector_issignalconnected_callback(this, cbval1);
            return callback_ret;
        } else {
            return KActionSelector::isSignalConnected(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    double getDecodedMetricF(QPaintDevice::PaintDeviceMetric metricA, QPaintDevice::PaintDeviceMetric metricB) const {
        if (kactionselector_getdecodedmetricf_isbase) {
            kactionselector_getdecodedmetricf_isbase = false;
            return KActionSelector::getDecodedMetricF(metricA, metricB);
        } else if (kactionselector_getdecodedmetricf_callback != nullptr) {
            int cbval1 = static_cast<int>(metricA);
            int cbval2 = static_cast<int>(metricB);

            double callback_ret = kactionselector_getdecodedmetricf_callback(this, cbval1, cbval2);
            return static_cast<double>(callback_ret);
        } else {
            return KActionSelector::getDecodedMetricF(metricA, metricB);
        }
    }

    // Friend functions
    friend void KActionSelector_KeyPressEvent(KActionSelector* self, QKeyEvent* param1);
    friend void KActionSelector_QBaseKeyPressEvent(KActionSelector* self, QKeyEvent* param1);
    friend bool KActionSelector_EventFilter(KActionSelector* self, QObject* param1, QEvent* param2);
    friend bool KActionSelector_QBaseEventFilter(KActionSelector* self, QObject* param1, QEvent* param2);
    friend bool KActionSelector_Event(KActionSelector* self, QEvent* event);
    friend bool KActionSelector_QBaseEvent(KActionSelector* self, QEvent* event);
    friend void KActionSelector_MousePressEvent(KActionSelector* self, QMouseEvent* event);
    friend void KActionSelector_QBaseMousePressEvent(KActionSelector* self, QMouseEvent* event);
    friend void KActionSelector_MouseReleaseEvent(KActionSelector* self, QMouseEvent* event);
    friend void KActionSelector_QBaseMouseReleaseEvent(KActionSelector* self, QMouseEvent* event);
    friend void KActionSelector_MouseDoubleClickEvent(KActionSelector* self, QMouseEvent* event);
    friend void KActionSelector_QBaseMouseDoubleClickEvent(KActionSelector* self, QMouseEvent* event);
    friend void KActionSelector_MouseMoveEvent(KActionSelector* self, QMouseEvent* event);
    friend void KActionSelector_QBaseMouseMoveEvent(KActionSelector* self, QMouseEvent* event);
    friend void KActionSelector_WheelEvent(KActionSelector* self, QWheelEvent* event);
    friend void KActionSelector_QBaseWheelEvent(KActionSelector* self, QWheelEvent* event);
    friend void KActionSelector_KeyReleaseEvent(KActionSelector* self, QKeyEvent* event);
    friend void KActionSelector_QBaseKeyReleaseEvent(KActionSelector* self, QKeyEvent* event);
    friend void KActionSelector_FocusInEvent(KActionSelector* self, QFocusEvent* event);
    friend void KActionSelector_QBaseFocusInEvent(KActionSelector* self, QFocusEvent* event);
    friend void KActionSelector_FocusOutEvent(KActionSelector* self, QFocusEvent* event);
    friend void KActionSelector_QBaseFocusOutEvent(KActionSelector* self, QFocusEvent* event);
    friend void KActionSelector_EnterEvent(KActionSelector* self, QEnterEvent* event);
    friend void KActionSelector_QBaseEnterEvent(KActionSelector* self, QEnterEvent* event);
    friend void KActionSelector_LeaveEvent(KActionSelector* self, QEvent* event);
    friend void KActionSelector_QBaseLeaveEvent(KActionSelector* self, QEvent* event);
    friend void KActionSelector_PaintEvent(KActionSelector* self, QPaintEvent* event);
    friend void KActionSelector_QBasePaintEvent(KActionSelector* self, QPaintEvent* event);
    friend void KActionSelector_MoveEvent(KActionSelector* self, QMoveEvent* event);
    friend void KActionSelector_QBaseMoveEvent(KActionSelector* self, QMoveEvent* event);
    friend void KActionSelector_ResizeEvent(KActionSelector* self, QResizeEvent* event);
    friend void KActionSelector_QBaseResizeEvent(KActionSelector* self, QResizeEvent* event);
    friend void KActionSelector_CloseEvent(KActionSelector* self, QCloseEvent* event);
    friend void KActionSelector_QBaseCloseEvent(KActionSelector* self, QCloseEvent* event);
    friend void KActionSelector_ContextMenuEvent(KActionSelector* self, QContextMenuEvent* event);
    friend void KActionSelector_QBaseContextMenuEvent(KActionSelector* self, QContextMenuEvent* event);
    friend void KActionSelector_TabletEvent(KActionSelector* self, QTabletEvent* event);
    friend void KActionSelector_QBaseTabletEvent(KActionSelector* self, QTabletEvent* event);
    friend void KActionSelector_ActionEvent(KActionSelector* self, QActionEvent* event);
    friend void KActionSelector_QBaseActionEvent(KActionSelector* self, QActionEvent* event);
    friend void KActionSelector_DragEnterEvent(KActionSelector* self, QDragEnterEvent* event);
    friend void KActionSelector_QBaseDragEnterEvent(KActionSelector* self, QDragEnterEvent* event);
    friend void KActionSelector_DragMoveEvent(KActionSelector* self, QDragMoveEvent* event);
    friend void KActionSelector_QBaseDragMoveEvent(KActionSelector* self, QDragMoveEvent* event);
    friend void KActionSelector_DragLeaveEvent(KActionSelector* self, QDragLeaveEvent* event);
    friend void KActionSelector_QBaseDragLeaveEvent(KActionSelector* self, QDragLeaveEvent* event);
    friend void KActionSelector_DropEvent(KActionSelector* self, QDropEvent* event);
    friend void KActionSelector_QBaseDropEvent(KActionSelector* self, QDropEvent* event);
    friend void KActionSelector_ShowEvent(KActionSelector* self, QShowEvent* event);
    friend void KActionSelector_QBaseShowEvent(KActionSelector* self, QShowEvent* event);
    friend void KActionSelector_HideEvent(KActionSelector* self, QHideEvent* event);
    friend void KActionSelector_QBaseHideEvent(KActionSelector* self, QHideEvent* event);
    friend bool KActionSelector_NativeEvent(KActionSelector* self, const libqt_string eventType, void* message, intptr_t* result);
    friend bool KActionSelector_QBaseNativeEvent(KActionSelector* self, const libqt_string eventType, void* message, intptr_t* result);
    friend void KActionSelector_ChangeEvent(KActionSelector* self, QEvent* param1);
    friend void KActionSelector_QBaseChangeEvent(KActionSelector* self, QEvent* param1);
    friend int KActionSelector_Metric(const KActionSelector* self, int param1);
    friend int KActionSelector_QBaseMetric(const KActionSelector* self, int param1);
    friend void KActionSelector_InitPainter(const KActionSelector* self, QPainter* painter);
    friend void KActionSelector_QBaseInitPainter(const KActionSelector* self, QPainter* painter);
    friend QPaintDevice* KActionSelector_Redirected(const KActionSelector* self, QPoint* offset);
    friend QPaintDevice* KActionSelector_QBaseRedirected(const KActionSelector* self, QPoint* offset);
    friend QPainter* KActionSelector_SharedPainter(const KActionSelector* self);
    friend QPainter* KActionSelector_QBaseSharedPainter(const KActionSelector* self);
    friend void KActionSelector_InputMethodEvent(KActionSelector* self, QInputMethodEvent* param1);
    friend void KActionSelector_QBaseInputMethodEvent(KActionSelector* self, QInputMethodEvent* param1);
    friend bool KActionSelector_FocusNextPrevChild(KActionSelector* self, bool next);
    friend bool KActionSelector_QBaseFocusNextPrevChild(KActionSelector* self, bool next);
    friend void KActionSelector_TimerEvent(KActionSelector* self, QTimerEvent* event);
    friend void KActionSelector_QBaseTimerEvent(KActionSelector* self, QTimerEvent* event);
    friend void KActionSelector_ChildEvent(KActionSelector* self, QChildEvent* event);
    friend void KActionSelector_QBaseChildEvent(KActionSelector* self, QChildEvent* event);
    friend void KActionSelector_CustomEvent(KActionSelector* self, QEvent* event);
    friend void KActionSelector_QBaseCustomEvent(KActionSelector* self, QEvent* event);
    friend void KActionSelector_ConnectNotify(KActionSelector* self, const QMetaMethod* signal);
    friend void KActionSelector_QBaseConnectNotify(KActionSelector* self, const QMetaMethod* signal);
    friend void KActionSelector_DisconnectNotify(KActionSelector* self, const QMetaMethod* signal);
    friend void KActionSelector_QBaseDisconnectNotify(KActionSelector* self, const QMetaMethod* signal);
    friend void KActionSelector_UpdateMicroFocus(KActionSelector* self);
    friend void KActionSelector_QBaseUpdateMicroFocus(KActionSelector* self);
    friend void KActionSelector_Create(KActionSelector* self);
    friend void KActionSelector_QBaseCreate(KActionSelector* self);
    friend void KActionSelector_Destroy(KActionSelector* self);
    friend void KActionSelector_QBaseDestroy(KActionSelector* self);
    friend bool KActionSelector_FocusNextChild(KActionSelector* self);
    friend bool KActionSelector_QBaseFocusNextChild(KActionSelector* self);
    friend bool KActionSelector_FocusPreviousChild(KActionSelector* self);
    friend bool KActionSelector_QBaseFocusPreviousChild(KActionSelector* self);
    friend QObject* KActionSelector_Sender(const KActionSelector* self);
    friend QObject* KActionSelector_QBaseSender(const KActionSelector* self);
    friend int KActionSelector_SenderSignalIndex(const KActionSelector* self);
    friend int KActionSelector_QBaseSenderSignalIndex(const KActionSelector* self);
    friend int KActionSelector_Receivers(const KActionSelector* self, const char* signal);
    friend int KActionSelector_QBaseReceivers(const KActionSelector* self, const char* signal);
    friend bool KActionSelector_IsSignalConnected(const KActionSelector* self, const QMetaMethod* signal);
    friend bool KActionSelector_QBaseIsSignalConnected(const KActionSelector* self, const QMetaMethod* signal);
    friend double KActionSelector_GetDecodedMetricF(const KActionSelector* self, int metricA, int metricB);
    friend double KActionSelector_QBaseGetDecodedMetricF(const KActionSelector* self, int metricA, int metricB);
};

#endif
