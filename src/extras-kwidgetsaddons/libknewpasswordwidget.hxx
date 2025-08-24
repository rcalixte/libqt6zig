#pragma once
#ifndef SRC_EXTRAS_KWIDGETSADDONSC_LIBVIRTUALKNEWPASSWORDWIDGET_H
#define SRC_EXTRAS_KWIDGETSADDONSC_LIBVIRTUALKNEWPASSWORDWIDGET_H

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

// This class is a subclass of KNewPasswordWidget so that we can call protected methods
class VirtualKNewPasswordWidget final : public KNewPasswordWidget {

  public:
    // Virtual class boolean flag
    bool isVirtualKNewPasswordWidget = true;

    // Virtual class public types (including callbacks)
    using KNewPasswordWidget_Metacall_Callback = int (*)(KNewPasswordWidget*, int, int, void**);
    using KNewPasswordWidget_DevType_Callback = int (*)();
    using KNewPasswordWidget_SetVisible_Callback = void (*)(KNewPasswordWidget*, bool);
    using KNewPasswordWidget_SizeHint_Callback = QSize* (*)();
    using KNewPasswordWidget_MinimumSizeHint_Callback = QSize* (*)();
    using KNewPasswordWidget_HeightForWidth_Callback = int (*)(const KNewPasswordWidget*, int);
    using KNewPasswordWidget_HasHeightForWidth_Callback = bool (*)();
    using KNewPasswordWidget_PaintEngine_Callback = QPaintEngine* (*)();
    using KNewPasswordWidget_Event_Callback = bool (*)(KNewPasswordWidget*, QEvent*);
    using KNewPasswordWidget_MousePressEvent_Callback = void (*)(KNewPasswordWidget*, QMouseEvent*);
    using KNewPasswordWidget_MouseReleaseEvent_Callback = void (*)(KNewPasswordWidget*, QMouseEvent*);
    using KNewPasswordWidget_MouseDoubleClickEvent_Callback = void (*)(KNewPasswordWidget*, QMouseEvent*);
    using KNewPasswordWidget_MouseMoveEvent_Callback = void (*)(KNewPasswordWidget*, QMouseEvent*);
    using KNewPasswordWidget_WheelEvent_Callback = void (*)(KNewPasswordWidget*, QWheelEvent*);
    using KNewPasswordWidget_KeyPressEvent_Callback = void (*)(KNewPasswordWidget*, QKeyEvent*);
    using KNewPasswordWidget_KeyReleaseEvent_Callback = void (*)(KNewPasswordWidget*, QKeyEvent*);
    using KNewPasswordWidget_FocusInEvent_Callback = void (*)(KNewPasswordWidget*, QFocusEvent*);
    using KNewPasswordWidget_FocusOutEvent_Callback = void (*)(KNewPasswordWidget*, QFocusEvent*);
    using KNewPasswordWidget_EnterEvent_Callback = void (*)(KNewPasswordWidget*, QEnterEvent*);
    using KNewPasswordWidget_LeaveEvent_Callback = void (*)(KNewPasswordWidget*, QEvent*);
    using KNewPasswordWidget_PaintEvent_Callback = void (*)(KNewPasswordWidget*, QPaintEvent*);
    using KNewPasswordWidget_MoveEvent_Callback = void (*)(KNewPasswordWidget*, QMoveEvent*);
    using KNewPasswordWidget_ResizeEvent_Callback = void (*)(KNewPasswordWidget*, QResizeEvent*);
    using KNewPasswordWidget_CloseEvent_Callback = void (*)(KNewPasswordWidget*, QCloseEvent*);
    using KNewPasswordWidget_ContextMenuEvent_Callback = void (*)(KNewPasswordWidget*, QContextMenuEvent*);
    using KNewPasswordWidget_TabletEvent_Callback = void (*)(KNewPasswordWidget*, QTabletEvent*);
    using KNewPasswordWidget_ActionEvent_Callback = void (*)(KNewPasswordWidget*, QActionEvent*);
    using KNewPasswordWidget_DragEnterEvent_Callback = void (*)(KNewPasswordWidget*, QDragEnterEvent*);
    using KNewPasswordWidget_DragMoveEvent_Callback = void (*)(KNewPasswordWidget*, QDragMoveEvent*);
    using KNewPasswordWidget_DragLeaveEvent_Callback = void (*)(KNewPasswordWidget*, QDragLeaveEvent*);
    using KNewPasswordWidget_DropEvent_Callback = void (*)(KNewPasswordWidget*, QDropEvent*);
    using KNewPasswordWidget_ShowEvent_Callback = void (*)(KNewPasswordWidget*, QShowEvent*);
    using KNewPasswordWidget_HideEvent_Callback = void (*)(KNewPasswordWidget*, QHideEvent*);
    using KNewPasswordWidget_NativeEvent_Callback = bool (*)(KNewPasswordWidget*, libqt_string, void*, intptr_t*);
    using KNewPasswordWidget_ChangeEvent_Callback = void (*)(KNewPasswordWidget*, QEvent*);
    using KNewPasswordWidget_Metric_Callback = int (*)(const KNewPasswordWidget*, int);
    using KNewPasswordWidget_InitPainter_Callback = void (*)(const KNewPasswordWidget*, QPainter*);
    using KNewPasswordWidget_Redirected_Callback = QPaintDevice* (*)(const KNewPasswordWidget*, QPoint*);
    using KNewPasswordWidget_SharedPainter_Callback = QPainter* (*)();
    using KNewPasswordWidget_InputMethodEvent_Callback = void (*)(KNewPasswordWidget*, QInputMethodEvent*);
    using KNewPasswordWidget_InputMethodQuery_Callback = QVariant* (*)(const KNewPasswordWidget*, int);
    using KNewPasswordWidget_FocusNextPrevChild_Callback = bool (*)(KNewPasswordWidget*, bool);
    using KNewPasswordWidget_EventFilter_Callback = bool (*)(KNewPasswordWidget*, QObject*, QEvent*);
    using KNewPasswordWidget_TimerEvent_Callback = void (*)(KNewPasswordWidget*, QTimerEvent*);
    using KNewPasswordWidget_ChildEvent_Callback = void (*)(KNewPasswordWidget*, QChildEvent*);
    using KNewPasswordWidget_CustomEvent_Callback = void (*)(KNewPasswordWidget*, QEvent*);
    using KNewPasswordWidget_ConnectNotify_Callback = void (*)(KNewPasswordWidget*, QMetaMethod*);
    using KNewPasswordWidget_DisconnectNotify_Callback = void (*)(KNewPasswordWidget*, QMetaMethod*);
    using KNewPasswordWidget_UpdateMicroFocus_Callback = void (*)();
    using KNewPasswordWidget_Create_Callback = void (*)();
    using KNewPasswordWidget_Destroy_Callback = void (*)();
    using KNewPasswordWidget_FocusNextChild_Callback = bool (*)();
    using KNewPasswordWidget_FocusPreviousChild_Callback = bool (*)();
    using KNewPasswordWidget_Sender_Callback = QObject* (*)();
    using KNewPasswordWidget_SenderSignalIndex_Callback = int (*)();
    using KNewPasswordWidget_Receivers_Callback = int (*)(const KNewPasswordWidget*, const char*);
    using KNewPasswordWidget_IsSignalConnected_Callback = bool (*)(const KNewPasswordWidget*, QMetaMethod*);
    using KNewPasswordWidget_GetDecodedMetricF_Callback = double (*)(const KNewPasswordWidget*, int, int);

  protected:
    // Instance callback storage
    KNewPasswordWidget_Metacall_Callback knewpasswordwidget_metacall_callback = nullptr;
    KNewPasswordWidget_DevType_Callback knewpasswordwidget_devtype_callback = nullptr;
    KNewPasswordWidget_SetVisible_Callback knewpasswordwidget_setvisible_callback = nullptr;
    KNewPasswordWidget_SizeHint_Callback knewpasswordwidget_sizehint_callback = nullptr;
    KNewPasswordWidget_MinimumSizeHint_Callback knewpasswordwidget_minimumsizehint_callback = nullptr;
    KNewPasswordWidget_HeightForWidth_Callback knewpasswordwidget_heightforwidth_callback = nullptr;
    KNewPasswordWidget_HasHeightForWidth_Callback knewpasswordwidget_hasheightforwidth_callback = nullptr;
    KNewPasswordWidget_PaintEngine_Callback knewpasswordwidget_paintengine_callback = nullptr;
    KNewPasswordWidget_Event_Callback knewpasswordwidget_event_callback = nullptr;
    KNewPasswordWidget_MousePressEvent_Callback knewpasswordwidget_mousepressevent_callback = nullptr;
    KNewPasswordWidget_MouseReleaseEvent_Callback knewpasswordwidget_mousereleaseevent_callback = nullptr;
    KNewPasswordWidget_MouseDoubleClickEvent_Callback knewpasswordwidget_mousedoubleclickevent_callback = nullptr;
    KNewPasswordWidget_MouseMoveEvent_Callback knewpasswordwidget_mousemoveevent_callback = nullptr;
    KNewPasswordWidget_WheelEvent_Callback knewpasswordwidget_wheelevent_callback = nullptr;
    KNewPasswordWidget_KeyPressEvent_Callback knewpasswordwidget_keypressevent_callback = nullptr;
    KNewPasswordWidget_KeyReleaseEvent_Callback knewpasswordwidget_keyreleaseevent_callback = nullptr;
    KNewPasswordWidget_FocusInEvent_Callback knewpasswordwidget_focusinevent_callback = nullptr;
    KNewPasswordWidget_FocusOutEvent_Callback knewpasswordwidget_focusoutevent_callback = nullptr;
    KNewPasswordWidget_EnterEvent_Callback knewpasswordwidget_enterevent_callback = nullptr;
    KNewPasswordWidget_LeaveEvent_Callback knewpasswordwidget_leaveevent_callback = nullptr;
    KNewPasswordWidget_PaintEvent_Callback knewpasswordwidget_paintevent_callback = nullptr;
    KNewPasswordWidget_MoveEvent_Callback knewpasswordwidget_moveevent_callback = nullptr;
    KNewPasswordWidget_ResizeEvent_Callback knewpasswordwidget_resizeevent_callback = nullptr;
    KNewPasswordWidget_CloseEvent_Callback knewpasswordwidget_closeevent_callback = nullptr;
    KNewPasswordWidget_ContextMenuEvent_Callback knewpasswordwidget_contextmenuevent_callback = nullptr;
    KNewPasswordWidget_TabletEvent_Callback knewpasswordwidget_tabletevent_callback = nullptr;
    KNewPasswordWidget_ActionEvent_Callback knewpasswordwidget_actionevent_callback = nullptr;
    KNewPasswordWidget_DragEnterEvent_Callback knewpasswordwidget_dragenterevent_callback = nullptr;
    KNewPasswordWidget_DragMoveEvent_Callback knewpasswordwidget_dragmoveevent_callback = nullptr;
    KNewPasswordWidget_DragLeaveEvent_Callback knewpasswordwidget_dragleaveevent_callback = nullptr;
    KNewPasswordWidget_DropEvent_Callback knewpasswordwidget_dropevent_callback = nullptr;
    KNewPasswordWidget_ShowEvent_Callback knewpasswordwidget_showevent_callback = nullptr;
    KNewPasswordWidget_HideEvent_Callback knewpasswordwidget_hideevent_callback = nullptr;
    KNewPasswordWidget_NativeEvent_Callback knewpasswordwidget_nativeevent_callback = nullptr;
    KNewPasswordWidget_ChangeEvent_Callback knewpasswordwidget_changeevent_callback = nullptr;
    KNewPasswordWidget_Metric_Callback knewpasswordwidget_metric_callback = nullptr;
    KNewPasswordWidget_InitPainter_Callback knewpasswordwidget_initpainter_callback = nullptr;
    KNewPasswordWidget_Redirected_Callback knewpasswordwidget_redirected_callback = nullptr;
    KNewPasswordWidget_SharedPainter_Callback knewpasswordwidget_sharedpainter_callback = nullptr;
    KNewPasswordWidget_InputMethodEvent_Callback knewpasswordwidget_inputmethodevent_callback = nullptr;
    KNewPasswordWidget_InputMethodQuery_Callback knewpasswordwidget_inputmethodquery_callback = nullptr;
    KNewPasswordWidget_FocusNextPrevChild_Callback knewpasswordwidget_focusnextprevchild_callback = nullptr;
    KNewPasswordWidget_EventFilter_Callback knewpasswordwidget_eventfilter_callback = nullptr;
    KNewPasswordWidget_TimerEvent_Callback knewpasswordwidget_timerevent_callback = nullptr;
    KNewPasswordWidget_ChildEvent_Callback knewpasswordwidget_childevent_callback = nullptr;
    KNewPasswordWidget_CustomEvent_Callback knewpasswordwidget_customevent_callback = nullptr;
    KNewPasswordWidget_ConnectNotify_Callback knewpasswordwidget_connectnotify_callback = nullptr;
    KNewPasswordWidget_DisconnectNotify_Callback knewpasswordwidget_disconnectnotify_callback = nullptr;
    KNewPasswordWidget_UpdateMicroFocus_Callback knewpasswordwidget_updatemicrofocus_callback = nullptr;
    KNewPasswordWidget_Create_Callback knewpasswordwidget_create_callback = nullptr;
    KNewPasswordWidget_Destroy_Callback knewpasswordwidget_destroy_callback = nullptr;
    KNewPasswordWidget_FocusNextChild_Callback knewpasswordwidget_focusnextchild_callback = nullptr;
    KNewPasswordWidget_FocusPreviousChild_Callback knewpasswordwidget_focuspreviouschild_callback = nullptr;
    KNewPasswordWidget_Sender_Callback knewpasswordwidget_sender_callback = nullptr;
    KNewPasswordWidget_SenderSignalIndex_Callback knewpasswordwidget_sendersignalindex_callback = nullptr;
    KNewPasswordWidget_Receivers_Callback knewpasswordwidget_receivers_callback = nullptr;
    KNewPasswordWidget_IsSignalConnected_Callback knewpasswordwidget_issignalconnected_callback = nullptr;
    KNewPasswordWidget_GetDecodedMetricF_Callback knewpasswordwidget_getdecodedmetricf_callback = nullptr;

    // Instance base flags
    mutable bool knewpasswordwidget_metacall_isbase = false;
    mutable bool knewpasswordwidget_devtype_isbase = false;
    mutable bool knewpasswordwidget_setvisible_isbase = false;
    mutable bool knewpasswordwidget_sizehint_isbase = false;
    mutable bool knewpasswordwidget_minimumsizehint_isbase = false;
    mutable bool knewpasswordwidget_heightforwidth_isbase = false;
    mutable bool knewpasswordwidget_hasheightforwidth_isbase = false;
    mutable bool knewpasswordwidget_paintengine_isbase = false;
    mutable bool knewpasswordwidget_event_isbase = false;
    mutable bool knewpasswordwidget_mousepressevent_isbase = false;
    mutable bool knewpasswordwidget_mousereleaseevent_isbase = false;
    mutable bool knewpasswordwidget_mousedoubleclickevent_isbase = false;
    mutable bool knewpasswordwidget_mousemoveevent_isbase = false;
    mutable bool knewpasswordwidget_wheelevent_isbase = false;
    mutable bool knewpasswordwidget_keypressevent_isbase = false;
    mutable bool knewpasswordwidget_keyreleaseevent_isbase = false;
    mutable bool knewpasswordwidget_focusinevent_isbase = false;
    mutable bool knewpasswordwidget_focusoutevent_isbase = false;
    mutable bool knewpasswordwidget_enterevent_isbase = false;
    mutable bool knewpasswordwidget_leaveevent_isbase = false;
    mutable bool knewpasswordwidget_paintevent_isbase = false;
    mutable bool knewpasswordwidget_moveevent_isbase = false;
    mutable bool knewpasswordwidget_resizeevent_isbase = false;
    mutable bool knewpasswordwidget_closeevent_isbase = false;
    mutable bool knewpasswordwidget_contextmenuevent_isbase = false;
    mutable bool knewpasswordwidget_tabletevent_isbase = false;
    mutable bool knewpasswordwidget_actionevent_isbase = false;
    mutable bool knewpasswordwidget_dragenterevent_isbase = false;
    mutable bool knewpasswordwidget_dragmoveevent_isbase = false;
    mutable bool knewpasswordwidget_dragleaveevent_isbase = false;
    mutable bool knewpasswordwidget_dropevent_isbase = false;
    mutable bool knewpasswordwidget_showevent_isbase = false;
    mutable bool knewpasswordwidget_hideevent_isbase = false;
    mutable bool knewpasswordwidget_nativeevent_isbase = false;
    mutable bool knewpasswordwidget_changeevent_isbase = false;
    mutable bool knewpasswordwidget_metric_isbase = false;
    mutable bool knewpasswordwidget_initpainter_isbase = false;
    mutable bool knewpasswordwidget_redirected_isbase = false;
    mutable bool knewpasswordwidget_sharedpainter_isbase = false;
    mutable bool knewpasswordwidget_inputmethodevent_isbase = false;
    mutable bool knewpasswordwidget_inputmethodquery_isbase = false;
    mutable bool knewpasswordwidget_focusnextprevchild_isbase = false;
    mutable bool knewpasswordwidget_eventfilter_isbase = false;
    mutable bool knewpasswordwidget_timerevent_isbase = false;
    mutable bool knewpasswordwidget_childevent_isbase = false;
    mutable bool knewpasswordwidget_customevent_isbase = false;
    mutable bool knewpasswordwidget_connectnotify_isbase = false;
    mutable bool knewpasswordwidget_disconnectnotify_isbase = false;
    mutable bool knewpasswordwidget_updatemicrofocus_isbase = false;
    mutable bool knewpasswordwidget_create_isbase = false;
    mutable bool knewpasswordwidget_destroy_isbase = false;
    mutable bool knewpasswordwidget_focusnextchild_isbase = false;
    mutable bool knewpasswordwidget_focuspreviouschild_isbase = false;
    mutable bool knewpasswordwidget_sender_isbase = false;
    mutable bool knewpasswordwidget_sendersignalindex_isbase = false;
    mutable bool knewpasswordwidget_receivers_isbase = false;
    mutable bool knewpasswordwidget_issignalconnected_isbase = false;
    mutable bool knewpasswordwidget_getdecodedmetricf_isbase = false;

  public:
    VirtualKNewPasswordWidget(QWidget* parent) : KNewPasswordWidget(parent) {};
    VirtualKNewPasswordWidget() : KNewPasswordWidget() {};

    ~VirtualKNewPasswordWidget() {
        knewpasswordwidget_metacall_callback = nullptr;
        knewpasswordwidget_devtype_callback = nullptr;
        knewpasswordwidget_setvisible_callback = nullptr;
        knewpasswordwidget_sizehint_callback = nullptr;
        knewpasswordwidget_minimumsizehint_callback = nullptr;
        knewpasswordwidget_heightforwidth_callback = nullptr;
        knewpasswordwidget_hasheightforwidth_callback = nullptr;
        knewpasswordwidget_paintengine_callback = nullptr;
        knewpasswordwidget_event_callback = nullptr;
        knewpasswordwidget_mousepressevent_callback = nullptr;
        knewpasswordwidget_mousereleaseevent_callback = nullptr;
        knewpasswordwidget_mousedoubleclickevent_callback = nullptr;
        knewpasswordwidget_mousemoveevent_callback = nullptr;
        knewpasswordwidget_wheelevent_callback = nullptr;
        knewpasswordwidget_keypressevent_callback = nullptr;
        knewpasswordwidget_keyreleaseevent_callback = nullptr;
        knewpasswordwidget_focusinevent_callback = nullptr;
        knewpasswordwidget_focusoutevent_callback = nullptr;
        knewpasswordwidget_enterevent_callback = nullptr;
        knewpasswordwidget_leaveevent_callback = nullptr;
        knewpasswordwidget_paintevent_callback = nullptr;
        knewpasswordwidget_moveevent_callback = nullptr;
        knewpasswordwidget_resizeevent_callback = nullptr;
        knewpasswordwidget_closeevent_callback = nullptr;
        knewpasswordwidget_contextmenuevent_callback = nullptr;
        knewpasswordwidget_tabletevent_callback = nullptr;
        knewpasswordwidget_actionevent_callback = nullptr;
        knewpasswordwidget_dragenterevent_callback = nullptr;
        knewpasswordwidget_dragmoveevent_callback = nullptr;
        knewpasswordwidget_dragleaveevent_callback = nullptr;
        knewpasswordwidget_dropevent_callback = nullptr;
        knewpasswordwidget_showevent_callback = nullptr;
        knewpasswordwidget_hideevent_callback = nullptr;
        knewpasswordwidget_nativeevent_callback = nullptr;
        knewpasswordwidget_changeevent_callback = nullptr;
        knewpasswordwidget_metric_callback = nullptr;
        knewpasswordwidget_initpainter_callback = nullptr;
        knewpasswordwidget_redirected_callback = nullptr;
        knewpasswordwidget_sharedpainter_callback = nullptr;
        knewpasswordwidget_inputmethodevent_callback = nullptr;
        knewpasswordwidget_inputmethodquery_callback = nullptr;
        knewpasswordwidget_focusnextprevchild_callback = nullptr;
        knewpasswordwidget_eventfilter_callback = nullptr;
        knewpasswordwidget_timerevent_callback = nullptr;
        knewpasswordwidget_childevent_callback = nullptr;
        knewpasswordwidget_customevent_callback = nullptr;
        knewpasswordwidget_connectnotify_callback = nullptr;
        knewpasswordwidget_disconnectnotify_callback = nullptr;
        knewpasswordwidget_updatemicrofocus_callback = nullptr;
        knewpasswordwidget_create_callback = nullptr;
        knewpasswordwidget_destroy_callback = nullptr;
        knewpasswordwidget_focusnextchild_callback = nullptr;
        knewpasswordwidget_focuspreviouschild_callback = nullptr;
        knewpasswordwidget_sender_callback = nullptr;
        knewpasswordwidget_sendersignalindex_callback = nullptr;
        knewpasswordwidget_receivers_callback = nullptr;
        knewpasswordwidget_issignalconnected_callback = nullptr;
        knewpasswordwidget_getdecodedmetricf_callback = nullptr;
    }

    // Callback setters
    inline void setKNewPasswordWidget_Metacall_Callback(KNewPasswordWidget_Metacall_Callback cb) { knewpasswordwidget_metacall_callback = cb; }
    inline void setKNewPasswordWidget_DevType_Callback(KNewPasswordWidget_DevType_Callback cb) { knewpasswordwidget_devtype_callback = cb; }
    inline void setKNewPasswordWidget_SetVisible_Callback(KNewPasswordWidget_SetVisible_Callback cb) { knewpasswordwidget_setvisible_callback = cb; }
    inline void setKNewPasswordWidget_SizeHint_Callback(KNewPasswordWidget_SizeHint_Callback cb) { knewpasswordwidget_sizehint_callback = cb; }
    inline void setKNewPasswordWidget_MinimumSizeHint_Callback(KNewPasswordWidget_MinimumSizeHint_Callback cb) { knewpasswordwidget_minimumsizehint_callback = cb; }
    inline void setKNewPasswordWidget_HeightForWidth_Callback(KNewPasswordWidget_HeightForWidth_Callback cb) { knewpasswordwidget_heightforwidth_callback = cb; }
    inline void setKNewPasswordWidget_HasHeightForWidth_Callback(KNewPasswordWidget_HasHeightForWidth_Callback cb) { knewpasswordwidget_hasheightforwidth_callback = cb; }
    inline void setKNewPasswordWidget_PaintEngine_Callback(KNewPasswordWidget_PaintEngine_Callback cb) { knewpasswordwidget_paintengine_callback = cb; }
    inline void setKNewPasswordWidget_Event_Callback(KNewPasswordWidget_Event_Callback cb) { knewpasswordwidget_event_callback = cb; }
    inline void setKNewPasswordWidget_MousePressEvent_Callback(KNewPasswordWidget_MousePressEvent_Callback cb) { knewpasswordwidget_mousepressevent_callback = cb; }
    inline void setKNewPasswordWidget_MouseReleaseEvent_Callback(KNewPasswordWidget_MouseReleaseEvent_Callback cb) { knewpasswordwidget_mousereleaseevent_callback = cb; }
    inline void setKNewPasswordWidget_MouseDoubleClickEvent_Callback(KNewPasswordWidget_MouseDoubleClickEvent_Callback cb) { knewpasswordwidget_mousedoubleclickevent_callback = cb; }
    inline void setKNewPasswordWidget_MouseMoveEvent_Callback(KNewPasswordWidget_MouseMoveEvent_Callback cb) { knewpasswordwidget_mousemoveevent_callback = cb; }
    inline void setKNewPasswordWidget_WheelEvent_Callback(KNewPasswordWidget_WheelEvent_Callback cb) { knewpasswordwidget_wheelevent_callback = cb; }
    inline void setKNewPasswordWidget_KeyPressEvent_Callback(KNewPasswordWidget_KeyPressEvent_Callback cb) { knewpasswordwidget_keypressevent_callback = cb; }
    inline void setKNewPasswordWidget_KeyReleaseEvent_Callback(KNewPasswordWidget_KeyReleaseEvent_Callback cb) { knewpasswordwidget_keyreleaseevent_callback = cb; }
    inline void setKNewPasswordWidget_FocusInEvent_Callback(KNewPasswordWidget_FocusInEvent_Callback cb) { knewpasswordwidget_focusinevent_callback = cb; }
    inline void setKNewPasswordWidget_FocusOutEvent_Callback(KNewPasswordWidget_FocusOutEvent_Callback cb) { knewpasswordwidget_focusoutevent_callback = cb; }
    inline void setKNewPasswordWidget_EnterEvent_Callback(KNewPasswordWidget_EnterEvent_Callback cb) { knewpasswordwidget_enterevent_callback = cb; }
    inline void setKNewPasswordWidget_LeaveEvent_Callback(KNewPasswordWidget_LeaveEvent_Callback cb) { knewpasswordwidget_leaveevent_callback = cb; }
    inline void setKNewPasswordWidget_PaintEvent_Callback(KNewPasswordWidget_PaintEvent_Callback cb) { knewpasswordwidget_paintevent_callback = cb; }
    inline void setKNewPasswordWidget_MoveEvent_Callback(KNewPasswordWidget_MoveEvent_Callback cb) { knewpasswordwidget_moveevent_callback = cb; }
    inline void setKNewPasswordWidget_ResizeEvent_Callback(KNewPasswordWidget_ResizeEvent_Callback cb) { knewpasswordwidget_resizeevent_callback = cb; }
    inline void setKNewPasswordWidget_CloseEvent_Callback(KNewPasswordWidget_CloseEvent_Callback cb) { knewpasswordwidget_closeevent_callback = cb; }
    inline void setKNewPasswordWidget_ContextMenuEvent_Callback(KNewPasswordWidget_ContextMenuEvent_Callback cb) { knewpasswordwidget_contextmenuevent_callback = cb; }
    inline void setKNewPasswordWidget_TabletEvent_Callback(KNewPasswordWidget_TabletEvent_Callback cb) { knewpasswordwidget_tabletevent_callback = cb; }
    inline void setKNewPasswordWidget_ActionEvent_Callback(KNewPasswordWidget_ActionEvent_Callback cb) { knewpasswordwidget_actionevent_callback = cb; }
    inline void setKNewPasswordWidget_DragEnterEvent_Callback(KNewPasswordWidget_DragEnterEvent_Callback cb) { knewpasswordwidget_dragenterevent_callback = cb; }
    inline void setKNewPasswordWidget_DragMoveEvent_Callback(KNewPasswordWidget_DragMoveEvent_Callback cb) { knewpasswordwidget_dragmoveevent_callback = cb; }
    inline void setKNewPasswordWidget_DragLeaveEvent_Callback(KNewPasswordWidget_DragLeaveEvent_Callback cb) { knewpasswordwidget_dragleaveevent_callback = cb; }
    inline void setKNewPasswordWidget_DropEvent_Callback(KNewPasswordWidget_DropEvent_Callback cb) { knewpasswordwidget_dropevent_callback = cb; }
    inline void setKNewPasswordWidget_ShowEvent_Callback(KNewPasswordWidget_ShowEvent_Callback cb) { knewpasswordwidget_showevent_callback = cb; }
    inline void setKNewPasswordWidget_HideEvent_Callback(KNewPasswordWidget_HideEvent_Callback cb) { knewpasswordwidget_hideevent_callback = cb; }
    inline void setKNewPasswordWidget_NativeEvent_Callback(KNewPasswordWidget_NativeEvent_Callback cb) { knewpasswordwidget_nativeevent_callback = cb; }
    inline void setKNewPasswordWidget_ChangeEvent_Callback(KNewPasswordWidget_ChangeEvent_Callback cb) { knewpasswordwidget_changeevent_callback = cb; }
    inline void setKNewPasswordWidget_Metric_Callback(KNewPasswordWidget_Metric_Callback cb) { knewpasswordwidget_metric_callback = cb; }
    inline void setKNewPasswordWidget_InitPainter_Callback(KNewPasswordWidget_InitPainter_Callback cb) { knewpasswordwidget_initpainter_callback = cb; }
    inline void setKNewPasswordWidget_Redirected_Callback(KNewPasswordWidget_Redirected_Callback cb) { knewpasswordwidget_redirected_callback = cb; }
    inline void setKNewPasswordWidget_SharedPainter_Callback(KNewPasswordWidget_SharedPainter_Callback cb) { knewpasswordwidget_sharedpainter_callback = cb; }
    inline void setKNewPasswordWidget_InputMethodEvent_Callback(KNewPasswordWidget_InputMethodEvent_Callback cb) { knewpasswordwidget_inputmethodevent_callback = cb; }
    inline void setKNewPasswordWidget_InputMethodQuery_Callback(KNewPasswordWidget_InputMethodQuery_Callback cb) { knewpasswordwidget_inputmethodquery_callback = cb; }
    inline void setKNewPasswordWidget_FocusNextPrevChild_Callback(KNewPasswordWidget_FocusNextPrevChild_Callback cb) { knewpasswordwidget_focusnextprevchild_callback = cb; }
    inline void setKNewPasswordWidget_EventFilter_Callback(KNewPasswordWidget_EventFilter_Callback cb) { knewpasswordwidget_eventfilter_callback = cb; }
    inline void setKNewPasswordWidget_TimerEvent_Callback(KNewPasswordWidget_TimerEvent_Callback cb) { knewpasswordwidget_timerevent_callback = cb; }
    inline void setKNewPasswordWidget_ChildEvent_Callback(KNewPasswordWidget_ChildEvent_Callback cb) { knewpasswordwidget_childevent_callback = cb; }
    inline void setKNewPasswordWidget_CustomEvent_Callback(KNewPasswordWidget_CustomEvent_Callback cb) { knewpasswordwidget_customevent_callback = cb; }
    inline void setKNewPasswordWidget_ConnectNotify_Callback(KNewPasswordWidget_ConnectNotify_Callback cb) { knewpasswordwidget_connectnotify_callback = cb; }
    inline void setKNewPasswordWidget_DisconnectNotify_Callback(KNewPasswordWidget_DisconnectNotify_Callback cb) { knewpasswordwidget_disconnectnotify_callback = cb; }
    inline void setKNewPasswordWidget_UpdateMicroFocus_Callback(KNewPasswordWidget_UpdateMicroFocus_Callback cb) { knewpasswordwidget_updatemicrofocus_callback = cb; }
    inline void setKNewPasswordWidget_Create_Callback(KNewPasswordWidget_Create_Callback cb) { knewpasswordwidget_create_callback = cb; }
    inline void setKNewPasswordWidget_Destroy_Callback(KNewPasswordWidget_Destroy_Callback cb) { knewpasswordwidget_destroy_callback = cb; }
    inline void setKNewPasswordWidget_FocusNextChild_Callback(KNewPasswordWidget_FocusNextChild_Callback cb) { knewpasswordwidget_focusnextchild_callback = cb; }
    inline void setKNewPasswordWidget_FocusPreviousChild_Callback(KNewPasswordWidget_FocusPreviousChild_Callback cb) { knewpasswordwidget_focuspreviouschild_callback = cb; }
    inline void setKNewPasswordWidget_Sender_Callback(KNewPasswordWidget_Sender_Callback cb) { knewpasswordwidget_sender_callback = cb; }
    inline void setKNewPasswordWidget_SenderSignalIndex_Callback(KNewPasswordWidget_SenderSignalIndex_Callback cb) { knewpasswordwidget_sendersignalindex_callback = cb; }
    inline void setKNewPasswordWidget_Receivers_Callback(KNewPasswordWidget_Receivers_Callback cb) { knewpasswordwidget_receivers_callback = cb; }
    inline void setKNewPasswordWidget_IsSignalConnected_Callback(KNewPasswordWidget_IsSignalConnected_Callback cb) { knewpasswordwidget_issignalconnected_callback = cb; }
    inline void setKNewPasswordWidget_GetDecodedMetricF_Callback(KNewPasswordWidget_GetDecodedMetricF_Callback cb) { knewpasswordwidget_getdecodedmetricf_callback = cb; }

    // Base flag setters
    inline void setKNewPasswordWidget_Metacall_IsBase(bool value) const { knewpasswordwidget_metacall_isbase = value; }
    inline void setKNewPasswordWidget_DevType_IsBase(bool value) const { knewpasswordwidget_devtype_isbase = value; }
    inline void setKNewPasswordWidget_SetVisible_IsBase(bool value) const { knewpasswordwidget_setvisible_isbase = value; }
    inline void setKNewPasswordWidget_SizeHint_IsBase(bool value) const { knewpasswordwidget_sizehint_isbase = value; }
    inline void setKNewPasswordWidget_MinimumSizeHint_IsBase(bool value) const { knewpasswordwidget_minimumsizehint_isbase = value; }
    inline void setKNewPasswordWidget_HeightForWidth_IsBase(bool value) const { knewpasswordwidget_heightforwidth_isbase = value; }
    inline void setKNewPasswordWidget_HasHeightForWidth_IsBase(bool value) const { knewpasswordwidget_hasheightforwidth_isbase = value; }
    inline void setKNewPasswordWidget_PaintEngine_IsBase(bool value) const { knewpasswordwidget_paintengine_isbase = value; }
    inline void setKNewPasswordWidget_Event_IsBase(bool value) const { knewpasswordwidget_event_isbase = value; }
    inline void setKNewPasswordWidget_MousePressEvent_IsBase(bool value) const { knewpasswordwidget_mousepressevent_isbase = value; }
    inline void setKNewPasswordWidget_MouseReleaseEvent_IsBase(bool value) const { knewpasswordwidget_mousereleaseevent_isbase = value; }
    inline void setKNewPasswordWidget_MouseDoubleClickEvent_IsBase(bool value) const { knewpasswordwidget_mousedoubleclickevent_isbase = value; }
    inline void setKNewPasswordWidget_MouseMoveEvent_IsBase(bool value) const { knewpasswordwidget_mousemoveevent_isbase = value; }
    inline void setKNewPasswordWidget_WheelEvent_IsBase(bool value) const { knewpasswordwidget_wheelevent_isbase = value; }
    inline void setKNewPasswordWidget_KeyPressEvent_IsBase(bool value) const { knewpasswordwidget_keypressevent_isbase = value; }
    inline void setKNewPasswordWidget_KeyReleaseEvent_IsBase(bool value) const { knewpasswordwidget_keyreleaseevent_isbase = value; }
    inline void setKNewPasswordWidget_FocusInEvent_IsBase(bool value) const { knewpasswordwidget_focusinevent_isbase = value; }
    inline void setKNewPasswordWidget_FocusOutEvent_IsBase(bool value) const { knewpasswordwidget_focusoutevent_isbase = value; }
    inline void setKNewPasswordWidget_EnterEvent_IsBase(bool value) const { knewpasswordwidget_enterevent_isbase = value; }
    inline void setKNewPasswordWidget_LeaveEvent_IsBase(bool value) const { knewpasswordwidget_leaveevent_isbase = value; }
    inline void setKNewPasswordWidget_PaintEvent_IsBase(bool value) const { knewpasswordwidget_paintevent_isbase = value; }
    inline void setKNewPasswordWidget_MoveEvent_IsBase(bool value) const { knewpasswordwidget_moveevent_isbase = value; }
    inline void setKNewPasswordWidget_ResizeEvent_IsBase(bool value) const { knewpasswordwidget_resizeevent_isbase = value; }
    inline void setKNewPasswordWidget_CloseEvent_IsBase(bool value) const { knewpasswordwidget_closeevent_isbase = value; }
    inline void setKNewPasswordWidget_ContextMenuEvent_IsBase(bool value) const { knewpasswordwidget_contextmenuevent_isbase = value; }
    inline void setKNewPasswordWidget_TabletEvent_IsBase(bool value) const { knewpasswordwidget_tabletevent_isbase = value; }
    inline void setKNewPasswordWidget_ActionEvent_IsBase(bool value) const { knewpasswordwidget_actionevent_isbase = value; }
    inline void setKNewPasswordWidget_DragEnterEvent_IsBase(bool value) const { knewpasswordwidget_dragenterevent_isbase = value; }
    inline void setKNewPasswordWidget_DragMoveEvent_IsBase(bool value) const { knewpasswordwidget_dragmoveevent_isbase = value; }
    inline void setKNewPasswordWidget_DragLeaveEvent_IsBase(bool value) const { knewpasswordwidget_dragleaveevent_isbase = value; }
    inline void setKNewPasswordWidget_DropEvent_IsBase(bool value) const { knewpasswordwidget_dropevent_isbase = value; }
    inline void setKNewPasswordWidget_ShowEvent_IsBase(bool value) const { knewpasswordwidget_showevent_isbase = value; }
    inline void setKNewPasswordWidget_HideEvent_IsBase(bool value) const { knewpasswordwidget_hideevent_isbase = value; }
    inline void setKNewPasswordWidget_NativeEvent_IsBase(bool value) const { knewpasswordwidget_nativeevent_isbase = value; }
    inline void setKNewPasswordWidget_ChangeEvent_IsBase(bool value) const { knewpasswordwidget_changeevent_isbase = value; }
    inline void setKNewPasswordWidget_Metric_IsBase(bool value) const { knewpasswordwidget_metric_isbase = value; }
    inline void setKNewPasswordWidget_InitPainter_IsBase(bool value) const { knewpasswordwidget_initpainter_isbase = value; }
    inline void setKNewPasswordWidget_Redirected_IsBase(bool value) const { knewpasswordwidget_redirected_isbase = value; }
    inline void setKNewPasswordWidget_SharedPainter_IsBase(bool value) const { knewpasswordwidget_sharedpainter_isbase = value; }
    inline void setKNewPasswordWidget_InputMethodEvent_IsBase(bool value) const { knewpasswordwidget_inputmethodevent_isbase = value; }
    inline void setKNewPasswordWidget_InputMethodQuery_IsBase(bool value) const { knewpasswordwidget_inputmethodquery_isbase = value; }
    inline void setKNewPasswordWidget_FocusNextPrevChild_IsBase(bool value) const { knewpasswordwidget_focusnextprevchild_isbase = value; }
    inline void setKNewPasswordWidget_EventFilter_IsBase(bool value) const { knewpasswordwidget_eventfilter_isbase = value; }
    inline void setKNewPasswordWidget_TimerEvent_IsBase(bool value) const { knewpasswordwidget_timerevent_isbase = value; }
    inline void setKNewPasswordWidget_ChildEvent_IsBase(bool value) const { knewpasswordwidget_childevent_isbase = value; }
    inline void setKNewPasswordWidget_CustomEvent_IsBase(bool value) const { knewpasswordwidget_customevent_isbase = value; }
    inline void setKNewPasswordWidget_ConnectNotify_IsBase(bool value) const { knewpasswordwidget_connectnotify_isbase = value; }
    inline void setKNewPasswordWidget_DisconnectNotify_IsBase(bool value) const { knewpasswordwidget_disconnectnotify_isbase = value; }
    inline void setKNewPasswordWidget_UpdateMicroFocus_IsBase(bool value) const { knewpasswordwidget_updatemicrofocus_isbase = value; }
    inline void setKNewPasswordWidget_Create_IsBase(bool value) const { knewpasswordwidget_create_isbase = value; }
    inline void setKNewPasswordWidget_Destroy_IsBase(bool value) const { knewpasswordwidget_destroy_isbase = value; }
    inline void setKNewPasswordWidget_FocusNextChild_IsBase(bool value) const { knewpasswordwidget_focusnextchild_isbase = value; }
    inline void setKNewPasswordWidget_FocusPreviousChild_IsBase(bool value) const { knewpasswordwidget_focuspreviouschild_isbase = value; }
    inline void setKNewPasswordWidget_Sender_IsBase(bool value) const { knewpasswordwidget_sender_isbase = value; }
    inline void setKNewPasswordWidget_SenderSignalIndex_IsBase(bool value) const { knewpasswordwidget_sendersignalindex_isbase = value; }
    inline void setKNewPasswordWidget_Receivers_IsBase(bool value) const { knewpasswordwidget_receivers_isbase = value; }
    inline void setKNewPasswordWidget_IsSignalConnected_IsBase(bool value) const { knewpasswordwidget_issignalconnected_isbase = value; }
    inline void setKNewPasswordWidget_GetDecodedMetricF_IsBase(bool value) const { knewpasswordwidget_getdecodedmetricf_isbase = value; }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (knewpasswordwidget_metacall_isbase) {
            knewpasswordwidget_metacall_isbase = false;
            return KNewPasswordWidget::qt_metacall(param1, param2, param3);
        } else if (knewpasswordwidget_metacall_callback != nullptr) {
            int cbval1 = static_cast<int>(param1);
            int cbval2 = param2;
            void** cbval3 = param3;

            int callback_ret = knewpasswordwidget_metacall_callback(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        } else {
            return KNewPasswordWidget::qt_metacall(param1, param2, param3);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual int devType() const override {
        if (knewpasswordwidget_devtype_isbase) {
            knewpasswordwidget_devtype_isbase = false;
            return KNewPasswordWidget::devType();
        } else if (knewpasswordwidget_devtype_callback != nullptr) {
            int callback_ret = knewpasswordwidget_devtype_callback();
            return static_cast<int>(callback_ret);
        } else {
            return KNewPasswordWidget::devType();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void setVisible(bool visible) override {
        if (knewpasswordwidget_setvisible_isbase) {
            knewpasswordwidget_setvisible_isbase = false;
            KNewPasswordWidget::setVisible(visible);
        } else if (knewpasswordwidget_setvisible_callback != nullptr) {
            bool cbval1 = visible;

            knewpasswordwidget_setvisible_callback(this, cbval1);
        } else {
            KNewPasswordWidget::setVisible(visible);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QSize sizeHint() const override {
        if (knewpasswordwidget_sizehint_isbase) {
            knewpasswordwidget_sizehint_isbase = false;
            return KNewPasswordWidget::sizeHint();
        } else if (knewpasswordwidget_sizehint_callback != nullptr) {
            QSize* callback_ret = knewpasswordwidget_sizehint_callback();
            return *callback_ret;
        } else {
            return KNewPasswordWidget::sizeHint();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QSize minimumSizeHint() const override {
        if (knewpasswordwidget_minimumsizehint_isbase) {
            knewpasswordwidget_minimumsizehint_isbase = false;
            return KNewPasswordWidget::minimumSizeHint();
        } else if (knewpasswordwidget_minimumsizehint_callback != nullptr) {
            QSize* callback_ret = knewpasswordwidget_minimumsizehint_callback();
            return *callback_ret;
        } else {
            return KNewPasswordWidget::minimumSizeHint();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual int heightForWidth(int param1) const override {
        if (knewpasswordwidget_heightforwidth_isbase) {
            knewpasswordwidget_heightforwidth_isbase = false;
            return KNewPasswordWidget::heightForWidth(param1);
        } else if (knewpasswordwidget_heightforwidth_callback != nullptr) {
            int cbval1 = param1;

            int callback_ret = knewpasswordwidget_heightforwidth_callback(this, cbval1);
            return static_cast<int>(callback_ret);
        } else {
            return KNewPasswordWidget::heightForWidth(param1);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool hasHeightForWidth() const override {
        if (knewpasswordwidget_hasheightforwidth_isbase) {
            knewpasswordwidget_hasheightforwidth_isbase = false;
            return KNewPasswordWidget::hasHeightForWidth();
        } else if (knewpasswordwidget_hasheightforwidth_callback != nullptr) {
            bool callback_ret = knewpasswordwidget_hasheightforwidth_callback();
            return callback_ret;
        } else {
            return KNewPasswordWidget::hasHeightForWidth();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QPaintEngine* paintEngine() const override {
        if (knewpasswordwidget_paintengine_isbase) {
            knewpasswordwidget_paintengine_isbase = false;
            return KNewPasswordWidget::paintEngine();
        } else if (knewpasswordwidget_paintengine_callback != nullptr) {
            QPaintEngine* callback_ret = knewpasswordwidget_paintengine_callback();
            return callback_ret;
        } else {
            return KNewPasswordWidget::paintEngine();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* event) override {
        if (knewpasswordwidget_event_isbase) {
            knewpasswordwidget_event_isbase = false;
            return KNewPasswordWidget::event(event);
        } else if (knewpasswordwidget_event_callback != nullptr) {
            QEvent* cbval1 = event;

            bool callback_ret = knewpasswordwidget_event_callback(this, cbval1);
            return callback_ret;
        } else {
            return KNewPasswordWidget::event(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void mousePressEvent(QMouseEvent* event) override {
        if (knewpasswordwidget_mousepressevent_isbase) {
            knewpasswordwidget_mousepressevent_isbase = false;
            KNewPasswordWidget::mousePressEvent(event);
        } else if (knewpasswordwidget_mousepressevent_callback != nullptr) {
            QMouseEvent* cbval1 = event;

            knewpasswordwidget_mousepressevent_callback(this, cbval1);
        } else {
            KNewPasswordWidget::mousePressEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseReleaseEvent(QMouseEvent* event) override {
        if (knewpasswordwidget_mousereleaseevent_isbase) {
            knewpasswordwidget_mousereleaseevent_isbase = false;
            KNewPasswordWidget::mouseReleaseEvent(event);
        } else if (knewpasswordwidget_mousereleaseevent_callback != nullptr) {
            QMouseEvent* cbval1 = event;

            knewpasswordwidget_mousereleaseevent_callback(this, cbval1);
        } else {
            KNewPasswordWidget::mouseReleaseEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseDoubleClickEvent(QMouseEvent* event) override {
        if (knewpasswordwidget_mousedoubleclickevent_isbase) {
            knewpasswordwidget_mousedoubleclickevent_isbase = false;
            KNewPasswordWidget::mouseDoubleClickEvent(event);
        } else if (knewpasswordwidget_mousedoubleclickevent_callback != nullptr) {
            QMouseEvent* cbval1 = event;

            knewpasswordwidget_mousedoubleclickevent_callback(this, cbval1);
        } else {
            KNewPasswordWidget::mouseDoubleClickEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseMoveEvent(QMouseEvent* event) override {
        if (knewpasswordwidget_mousemoveevent_isbase) {
            knewpasswordwidget_mousemoveevent_isbase = false;
            KNewPasswordWidget::mouseMoveEvent(event);
        } else if (knewpasswordwidget_mousemoveevent_callback != nullptr) {
            QMouseEvent* cbval1 = event;

            knewpasswordwidget_mousemoveevent_callback(this, cbval1);
        } else {
            KNewPasswordWidget::mouseMoveEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void wheelEvent(QWheelEvent* event) override {
        if (knewpasswordwidget_wheelevent_isbase) {
            knewpasswordwidget_wheelevent_isbase = false;
            KNewPasswordWidget::wheelEvent(event);
        } else if (knewpasswordwidget_wheelevent_callback != nullptr) {
            QWheelEvent* cbval1 = event;

            knewpasswordwidget_wheelevent_callback(this, cbval1);
        } else {
            KNewPasswordWidget::wheelEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void keyPressEvent(QKeyEvent* event) override {
        if (knewpasswordwidget_keypressevent_isbase) {
            knewpasswordwidget_keypressevent_isbase = false;
            KNewPasswordWidget::keyPressEvent(event);
        } else if (knewpasswordwidget_keypressevent_callback != nullptr) {
            QKeyEvent* cbval1 = event;

            knewpasswordwidget_keypressevent_callback(this, cbval1);
        } else {
            KNewPasswordWidget::keyPressEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void keyReleaseEvent(QKeyEvent* event) override {
        if (knewpasswordwidget_keyreleaseevent_isbase) {
            knewpasswordwidget_keyreleaseevent_isbase = false;
            KNewPasswordWidget::keyReleaseEvent(event);
        } else if (knewpasswordwidget_keyreleaseevent_callback != nullptr) {
            QKeyEvent* cbval1 = event;

            knewpasswordwidget_keyreleaseevent_callback(this, cbval1);
        } else {
            KNewPasswordWidget::keyReleaseEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void focusInEvent(QFocusEvent* event) override {
        if (knewpasswordwidget_focusinevent_isbase) {
            knewpasswordwidget_focusinevent_isbase = false;
            KNewPasswordWidget::focusInEvent(event);
        } else if (knewpasswordwidget_focusinevent_callback != nullptr) {
            QFocusEvent* cbval1 = event;

            knewpasswordwidget_focusinevent_callback(this, cbval1);
        } else {
            KNewPasswordWidget::focusInEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void focusOutEvent(QFocusEvent* event) override {
        if (knewpasswordwidget_focusoutevent_isbase) {
            knewpasswordwidget_focusoutevent_isbase = false;
            KNewPasswordWidget::focusOutEvent(event);
        } else if (knewpasswordwidget_focusoutevent_callback != nullptr) {
            QFocusEvent* cbval1 = event;

            knewpasswordwidget_focusoutevent_callback(this, cbval1);
        } else {
            KNewPasswordWidget::focusOutEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void enterEvent(QEnterEvent* event) override {
        if (knewpasswordwidget_enterevent_isbase) {
            knewpasswordwidget_enterevent_isbase = false;
            KNewPasswordWidget::enterEvent(event);
        } else if (knewpasswordwidget_enterevent_callback != nullptr) {
            QEnterEvent* cbval1 = event;

            knewpasswordwidget_enterevent_callback(this, cbval1);
        } else {
            KNewPasswordWidget::enterEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void leaveEvent(QEvent* event) override {
        if (knewpasswordwidget_leaveevent_isbase) {
            knewpasswordwidget_leaveevent_isbase = false;
            KNewPasswordWidget::leaveEvent(event);
        } else if (knewpasswordwidget_leaveevent_callback != nullptr) {
            QEvent* cbval1 = event;

            knewpasswordwidget_leaveevent_callback(this, cbval1);
        } else {
            KNewPasswordWidget::leaveEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void paintEvent(QPaintEvent* event) override {
        if (knewpasswordwidget_paintevent_isbase) {
            knewpasswordwidget_paintevent_isbase = false;
            KNewPasswordWidget::paintEvent(event);
        } else if (knewpasswordwidget_paintevent_callback != nullptr) {
            QPaintEvent* cbval1 = event;

            knewpasswordwidget_paintevent_callback(this, cbval1);
        } else {
            KNewPasswordWidget::paintEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void moveEvent(QMoveEvent* event) override {
        if (knewpasswordwidget_moveevent_isbase) {
            knewpasswordwidget_moveevent_isbase = false;
            KNewPasswordWidget::moveEvent(event);
        } else if (knewpasswordwidget_moveevent_callback != nullptr) {
            QMoveEvent* cbval1 = event;

            knewpasswordwidget_moveevent_callback(this, cbval1);
        } else {
            KNewPasswordWidget::moveEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void resizeEvent(QResizeEvent* event) override {
        if (knewpasswordwidget_resizeevent_isbase) {
            knewpasswordwidget_resizeevent_isbase = false;
            KNewPasswordWidget::resizeEvent(event);
        } else if (knewpasswordwidget_resizeevent_callback != nullptr) {
            QResizeEvent* cbval1 = event;

            knewpasswordwidget_resizeevent_callback(this, cbval1);
        } else {
            KNewPasswordWidget::resizeEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void closeEvent(QCloseEvent* event) override {
        if (knewpasswordwidget_closeevent_isbase) {
            knewpasswordwidget_closeevent_isbase = false;
            KNewPasswordWidget::closeEvent(event);
        } else if (knewpasswordwidget_closeevent_callback != nullptr) {
            QCloseEvent* cbval1 = event;

            knewpasswordwidget_closeevent_callback(this, cbval1);
        } else {
            KNewPasswordWidget::closeEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void contextMenuEvent(QContextMenuEvent* event) override {
        if (knewpasswordwidget_contextmenuevent_isbase) {
            knewpasswordwidget_contextmenuevent_isbase = false;
            KNewPasswordWidget::contextMenuEvent(event);
        } else if (knewpasswordwidget_contextmenuevent_callback != nullptr) {
            QContextMenuEvent* cbval1 = event;

            knewpasswordwidget_contextmenuevent_callback(this, cbval1);
        } else {
            KNewPasswordWidget::contextMenuEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void tabletEvent(QTabletEvent* event) override {
        if (knewpasswordwidget_tabletevent_isbase) {
            knewpasswordwidget_tabletevent_isbase = false;
            KNewPasswordWidget::tabletEvent(event);
        } else if (knewpasswordwidget_tabletevent_callback != nullptr) {
            QTabletEvent* cbval1 = event;

            knewpasswordwidget_tabletevent_callback(this, cbval1);
        } else {
            KNewPasswordWidget::tabletEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void actionEvent(QActionEvent* event) override {
        if (knewpasswordwidget_actionevent_isbase) {
            knewpasswordwidget_actionevent_isbase = false;
            KNewPasswordWidget::actionEvent(event);
        } else if (knewpasswordwidget_actionevent_callback != nullptr) {
            QActionEvent* cbval1 = event;

            knewpasswordwidget_actionevent_callback(this, cbval1);
        } else {
            KNewPasswordWidget::actionEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragEnterEvent(QDragEnterEvent* event) override {
        if (knewpasswordwidget_dragenterevent_isbase) {
            knewpasswordwidget_dragenterevent_isbase = false;
            KNewPasswordWidget::dragEnterEvent(event);
        } else if (knewpasswordwidget_dragenterevent_callback != nullptr) {
            QDragEnterEvent* cbval1 = event;

            knewpasswordwidget_dragenterevent_callback(this, cbval1);
        } else {
            KNewPasswordWidget::dragEnterEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragMoveEvent(QDragMoveEvent* event) override {
        if (knewpasswordwidget_dragmoveevent_isbase) {
            knewpasswordwidget_dragmoveevent_isbase = false;
            KNewPasswordWidget::dragMoveEvent(event);
        } else if (knewpasswordwidget_dragmoveevent_callback != nullptr) {
            QDragMoveEvent* cbval1 = event;

            knewpasswordwidget_dragmoveevent_callback(this, cbval1);
        } else {
            KNewPasswordWidget::dragMoveEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragLeaveEvent(QDragLeaveEvent* event) override {
        if (knewpasswordwidget_dragleaveevent_isbase) {
            knewpasswordwidget_dragleaveevent_isbase = false;
            KNewPasswordWidget::dragLeaveEvent(event);
        } else if (knewpasswordwidget_dragleaveevent_callback != nullptr) {
            QDragLeaveEvent* cbval1 = event;

            knewpasswordwidget_dragleaveevent_callback(this, cbval1);
        } else {
            KNewPasswordWidget::dragLeaveEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void dropEvent(QDropEvent* event) override {
        if (knewpasswordwidget_dropevent_isbase) {
            knewpasswordwidget_dropevent_isbase = false;
            KNewPasswordWidget::dropEvent(event);
        } else if (knewpasswordwidget_dropevent_callback != nullptr) {
            QDropEvent* cbval1 = event;

            knewpasswordwidget_dropevent_callback(this, cbval1);
        } else {
            KNewPasswordWidget::dropEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void showEvent(QShowEvent* event) override {
        if (knewpasswordwidget_showevent_isbase) {
            knewpasswordwidget_showevent_isbase = false;
            KNewPasswordWidget::showEvent(event);
        } else if (knewpasswordwidget_showevent_callback != nullptr) {
            QShowEvent* cbval1 = event;

            knewpasswordwidget_showevent_callback(this, cbval1);
        } else {
            KNewPasswordWidget::showEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void hideEvent(QHideEvent* event) override {
        if (knewpasswordwidget_hideevent_isbase) {
            knewpasswordwidget_hideevent_isbase = false;
            KNewPasswordWidget::hideEvent(event);
        } else if (knewpasswordwidget_hideevent_callback != nullptr) {
            QHideEvent* cbval1 = event;

            knewpasswordwidget_hideevent_callback(this, cbval1);
        } else {
            KNewPasswordWidget::hideEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool nativeEvent(const QByteArray& eventType, void* message, qintptr* result) override {
        if (knewpasswordwidget_nativeevent_isbase) {
            knewpasswordwidget_nativeevent_isbase = false;
            return KNewPasswordWidget::nativeEvent(eventType, message, result);
        } else if (knewpasswordwidget_nativeevent_callback != nullptr) {
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

            bool callback_ret = knewpasswordwidget_nativeevent_callback(this, cbval1, cbval2, cbval3);
            return callback_ret;
        } else {
            return KNewPasswordWidget::nativeEvent(eventType, message, result);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void changeEvent(QEvent* param1) override {
        if (knewpasswordwidget_changeevent_isbase) {
            knewpasswordwidget_changeevent_isbase = false;
            KNewPasswordWidget::changeEvent(param1);
        } else if (knewpasswordwidget_changeevent_callback != nullptr) {
            QEvent* cbval1 = param1;

            knewpasswordwidget_changeevent_callback(this, cbval1);
        } else {
            KNewPasswordWidget::changeEvent(param1);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual int metric(QPaintDevice::PaintDeviceMetric param1) const override {
        if (knewpasswordwidget_metric_isbase) {
            knewpasswordwidget_metric_isbase = false;
            return KNewPasswordWidget::metric(param1);
        } else if (knewpasswordwidget_metric_callback != nullptr) {
            int cbval1 = static_cast<int>(param1);

            int callback_ret = knewpasswordwidget_metric_callback(this, cbval1);
            return static_cast<int>(callback_ret);
        } else {
            return KNewPasswordWidget::metric(param1);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void initPainter(QPainter* painter) const override {
        if (knewpasswordwidget_initpainter_isbase) {
            knewpasswordwidget_initpainter_isbase = false;
            KNewPasswordWidget::initPainter(painter);
        } else if (knewpasswordwidget_initpainter_callback != nullptr) {
            QPainter* cbval1 = painter;

            knewpasswordwidget_initpainter_callback(this, cbval1);
        } else {
            KNewPasswordWidget::initPainter(painter);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QPaintDevice* redirected(QPoint* offset) const override {
        if (knewpasswordwidget_redirected_isbase) {
            knewpasswordwidget_redirected_isbase = false;
            return KNewPasswordWidget::redirected(offset);
        } else if (knewpasswordwidget_redirected_callback != nullptr) {
            QPoint* cbval1 = offset;

            QPaintDevice* callback_ret = knewpasswordwidget_redirected_callback(this, cbval1);
            return callback_ret;
        } else {
            return KNewPasswordWidget::redirected(offset);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QPainter* sharedPainter() const override {
        if (knewpasswordwidget_sharedpainter_isbase) {
            knewpasswordwidget_sharedpainter_isbase = false;
            return KNewPasswordWidget::sharedPainter();
        } else if (knewpasswordwidget_sharedpainter_callback != nullptr) {
            QPainter* callback_ret = knewpasswordwidget_sharedpainter_callback();
            return callback_ret;
        } else {
            return KNewPasswordWidget::sharedPainter();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void inputMethodEvent(QInputMethodEvent* param1) override {
        if (knewpasswordwidget_inputmethodevent_isbase) {
            knewpasswordwidget_inputmethodevent_isbase = false;
            KNewPasswordWidget::inputMethodEvent(param1);
        } else if (knewpasswordwidget_inputmethodevent_callback != nullptr) {
            QInputMethodEvent* cbval1 = param1;

            knewpasswordwidget_inputmethodevent_callback(this, cbval1);
        } else {
            KNewPasswordWidget::inputMethodEvent(param1);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QVariant inputMethodQuery(Qt::InputMethodQuery param1) const override {
        if (knewpasswordwidget_inputmethodquery_isbase) {
            knewpasswordwidget_inputmethodquery_isbase = false;
            return KNewPasswordWidget::inputMethodQuery(param1);
        } else if (knewpasswordwidget_inputmethodquery_callback != nullptr) {
            int cbval1 = static_cast<int>(param1);

            QVariant* callback_ret = knewpasswordwidget_inputmethodquery_callback(this, cbval1);
            return *callback_ret;
        } else {
            return KNewPasswordWidget::inputMethodQuery(param1);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool focusNextPrevChild(bool next) override {
        if (knewpasswordwidget_focusnextprevchild_isbase) {
            knewpasswordwidget_focusnextprevchild_isbase = false;
            return KNewPasswordWidget::focusNextPrevChild(next);
        } else if (knewpasswordwidget_focusnextprevchild_callback != nullptr) {
            bool cbval1 = next;

            bool callback_ret = knewpasswordwidget_focusnextprevchild_callback(this, cbval1);
            return callback_ret;
        } else {
            return KNewPasswordWidget::focusNextPrevChild(next);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* watched, QEvent* event) override {
        if (knewpasswordwidget_eventfilter_isbase) {
            knewpasswordwidget_eventfilter_isbase = false;
            return KNewPasswordWidget::eventFilter(watched, event);
        } else if (knewpasswordwidget_eventfilter_callback != nullptr) {
            QObject* cbval1 = watched;
            QEvent* cbval2 = event;

            bool callback_ret = knewpasswordwidget_eventfilter_callback(this, cbval1, cbval2);
            return callback_ret;
        } else {
            return KNewPasswordWidget::eventFilter(watched, event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (knewpasswordwidget_timerevent_isbase) {
            knewpasswordwidget_timerevent_isbase = false;
            KNewPasswordWidget::timerEvent(event);
        } else if (knewpasswordwidget_timerevent_callback != nullptr) {
            QTimerEvent* cbval1 = event;

            knewpasswordwidget_timerevent_callback(this, cbval1);
        } else {
            KNewPasswordWidget::timerEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (knewpasswordwidget_childevent_isbase) {
            knewpasswordwidget_childevent_isbase = false;
            KNewPasswordWidget::childEvent(event);
        } else if (knewpasswordwidget_childevent_callback != nullptr) {
            QChildEvent* cbval1 = event;

            knewpasswordwidget_childevent_callback(this, cbval1);
        } else {
            KNewPasswordWidget::childEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (knewpasswordwidget_customevent_isbase) {
            knewpasswordwidget_customevent_isbase = false;
            KNewPasswordWidget::customEvent(event);
        } else if (knewpasswordwidget_customevent_callback != nullptr) {
            QEvent* cbval1 = event;

            knewpasswordwidget_customevent_callback(this, cbval1);
        } else {
            KNewPasswordWidget::customEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (knewpasswordwidget_connectnotify_isbase) {
            knewpasswordwidget_connectnotify_isbase = false;
            KNewPasswordWidget::connectNotify(signal);
        } else if (knewpasswordwidget_connectnotify_callback != nullptr) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            knewpasswordwidget_connectnotify_callback(this, cbval1);
        } else {
            KNewPasswordWidget::connectNotify(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (knewpasswordwidget_disconnectnotify_isbase) {
            knewpasswordwidget_disconnectnotify_isbase = false;
            KNewPasswordWidget::disconnectNotify(signal);
        } else if (knewpasswordwidget_disconnectnotify_callback != nullptr) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            knewpasswordwidget_disconnectnotify_callback(this, cbval1);
        } else {
            KNewPasswordWidget::disconnectNotify(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    void updateMicroFocus() {
        if (knewpasswordwidget_updatemicrofocus_isbase) {
            knewpasswordwidget_updatemicrofocus_isbase = false;
            KNewPasswordWidget::updateMicroFocus();
        } else if (knewpasswordwidget_updatemicrofocus_callback != nullptr) {
            knewpasswordwidget_updatemicrofocus_callback();
        } else {
            KNewPasswordWidget::updateMicroFocus();
        }
    }

    // Virtual method for C ABI access and custom callback
    void create() {
        if (knewpasswordwidget_create_isbase) {
            knewpasswordwidget_create_isbase = false;
            KNewPasswordWidget::create();
        } else if (knewpasswordwidget_create_callback != nullptr) {
            knewpasswordwidget_create_callback();
        } else {
            KNewPasswordWidget::create();
        }
    }

    // Virtual method for C ABI access and custom callback
    void destroy() {
        if (knewpasswordwidget_destroy_isbase) {
            knewpasswordwidget_destroy_isbase = false;
            KNewPasswordWidget::destroy();
        } else if (knewpasswordwidget_destroy_callback != nullptr) {
            knewpasswordwidget_destroy_callback();
        } else {
            KNewPasswordWidget::destroy();
        }
    }

    // Virtual method for C ABI access and custom callback
    bool focusNextChild() {
        if (knewpasswordwidget_focusnextchild_isbase) {
            knewpasswordwidget_focusnextchild_isbase = false;
            return KNewPasswordWidget::focusNextChild();
        } else if (knewpasswordwidget_focusnextchild_callback != nullptr) {
            bool callback_ret = knewpasswordwidget_focusnextchild_callback();
            return callback_ret;
        } else {
            return KNewPasswordWidget::focusNextChild();
        }
    }

    // Virtual method for C ABI access and custom callback
    bool focusPreviousChild() {
        if (knewpasswordwidget_focuspreviouschild_isbase) {
            knewpasswordwidget_focuspreviouschild_isbase = false;
            return KNewPasswordWidget::focusPreviousChild();
        } else if (knewpasswordwidget_focuspreviouschild_callback != nullptr) {
            bool callback_ret = knewpasswordwidget_focuspreviouschild_callback();
            return callback_ret;
        } else {
            return KNewPasswordWidget::focusPreviousChild();
        }
    }

    // Virtual method for C ABI access and custom callback
    QObject* sender() const {
        if (knewpasswordwidget_sender_isbase) {
            knewpasswordwidget_sender_isbase = false;
            return KNewPasswordWidget::sender();
        } else if (knewpasswordwidget_sender_callback != nullptr) {
            QObject* callback_ret = knewpasswordwidget_sender_callback();
            return callback_ret;
        } else {
            return KNewPasswordWidget::sender();
        }
    }

    // Virtual method for C ABI access and custom callback
    int senderSignalIndex() const {
        if (knewpasswordwidget_sendersignalindex_isbase) {
            knewpasswordwidget_sendersignalindex_isbase = false;
            return KNewPasswordWidget::senderSignalIndex();
        } else if (knewpasswordwidget_sendersignalindex_callback != nullptr) {
            int callback_ret = knewpasswordwidget_sendersignalindex_callback();
            return static_cast<int>(callback_ret);
        } else {
            return KNewPasswordWidget::senderSignalIndex();
        }
    }

    // Virtual method for C ABI access and custom callback
    int receivers(const char* signal) const {
        if (knewpasswordwidget_receivers_isbase) {
            knewpasswordwidget_receivers_isbase = false;
            return KNewPasswordWidget::receivers(signal);
        } else if (knewpasswordwidget_receivers_callback != nullptr) {
            const char* cbval1 = (const char*)signal;

            int callback_ret = knewpasswordwidget_receivers_callback(this, cbval1);
            return static_cast<int>(callback_ret);
        } else {
            return KNewPasswordWidget::receivers(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    bool isSignalConnected(const QMetaMethod& signal) const {
        if (knewpasswordwidget_issignalconnected_isbase) {
            knewpasswordwidget_issignalconnected_isbase = false;
            return KNewPasswordWidget::isSignalConnected(signal);
        } else if (knewpasswordwidget_issignalconnected_callback != nullptr) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            bool callback_ret = knewpasswordwidget_issignalconnected_callback(this, cbval1);
            return callback_ret;
        } else {
            return KNewPasswordWidget::isSignalConnected(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    double getDecodedMetricF(QPaintDevice::PaintDeviceMetric metricA, QPaintDevice::PaintDeviceMetric metricB) const {
        if (knewpasswordwidget_getdecodedmetricf_isbase) {
            knewpasswordwidget_getdecodedmetricf_isbase = false;
            return KNewPasswordWidget::getDecodedMetricF(metricA, metricB);
        } else if (knewpasswordwidget_getdecodedmetricf_callback != nullptr) {
            int cbval1 = static_cast<int>(metricA);
            int cbval2 = static_cast<int>(metricB);

            double callback_ret = knewpasswordwidget_getdecodedmetricf_callback(this, cbval1, cbval2);
            return static_cast<double>(callback_ret);
        } else {
            return KNewPasswordWidget::getDecodedMetricF(metricA, metricB);
        }
    }

    // Friend functions
    friend bool KNewPasswordWidget_Event(KNewPasswordWidget* self, QEvent* event);
    friend bool KNewPasswordWidget_QBaseEvent(KNewPasswordWidget* self, QEvent* event);
    friend void KNewPasswordWidget_MousePressEvent(KNewPasswordWidget* self, QMouseEvent* event);
    friend void KNewPasswordWidget_QBaseMousePressEvent(KNewPasswordWidget* self, QMouseEvent* event);
    friend void KNewPasswordWidget_MouseReleaseEvent(KNewPasswordWidget* self, QMouseEvent* event);
    friend void KNewPasswordWidget_QBaseMouseReleaseEvent(KNewPasswordWidget* self, QMouseEvent* event);
    friend void KNewPasswordWidget_MouseDoubleClickEvent(KNewPasswordWidget* self, QMouseEvent* event);
    friend void KNewPasswordWidget_QBaseMouseDoubleClickEvent(KNewPasswordWidget* self, QMouseEvent* event);
    friend void KNewPasswordWidget_MouseMoveEvent(KNewPasswordWidget* self, QMouseEvent* event);
    friend void KNewPasswordWidget_QBaseMouseMoveEvent(KNewPasswordWidget* self, QMouseEvent* event);
    friend void KNewPasswordWidget_WheelEvent(KNewPasswordWidget* self, QWheelEvent* event);
    friend void KNewPasswordWidget_QBaseWheelEvent(KNewPasswordWidget* self, QWheelEvent* event);
    friend void KNewPasswordWidget_KeyPressEvent(KNewPasswordWidget* self, QKeyEvent* event);
    friend void KNewPasswordWidget_QBaseKeyPressEvent(KNewPasswordWidget* self, QKeyEvent* event);
    friend void KNewPasswordWidget_KeyReleaseEvent(KNewPasswordWidget* self, QKeyEvent* event);
    friend void KNewPasswordWidget_QBaseKeyReleaseEvent(KNewPasswordWidget* self, QKeyEvent* event);
    friend void KNewPasswordWidget_FocusInEvent(KNewPasswordWidget* self, QFocusEvent* event);
    friend void KNewPasswordWidget_QBaseFocusInEvent(KNewPasswordWidget* self, QFocusEvent* event);
    friend void KNewPasswordWidget_FocusOutEvent(KNewPasswordWidget* self, QFocusEvent* event);
    friend void KNewPasswordWidget_QBaseFocusOutEvent(KNewPasswordWidget* self, QFocusEvent* event);
    friend void KNewPasswordWidget_EnterEvent(KNewPasswordWidget* self, QEnterEvent* event);
    friend void KNewPasswordWidget_QBaseEnterEvent(KNewPasswordWidget* self, QEnterEvent* event);
    friend void KNewPasswordWidget_LeaveEvent(KNewPasswordWidget* self, QEvent* event);
    friend void KNewPasswordWidget_QBaseLeaveEvent(KNewPasswordWidget* self, QEvent* event);
    friend void KNewPasswordWidget_PaintEvent(KNewPasswordWidget* self, QPaintEvent* event);
    friend void KNewPasswordWidget_QBasePaintEvent(KNewPasswordWidget* self, QPaintEvent* event);
    friend void KNewPasswordWidget_MoveEvent(KNewPasswordWidget* self, QMoveEvent* event);
    friend void KNewPasswordWidget_QBaseMoveEvent(KNewPasswordWidget* self, QMoveEvent* event);
    friend void KNewPasswordWidget_ResizeEvent(KNewPasswordWidget* self, QResizeEvent* event);
    friend void KNewPasswordWidget_QBaseResizeEvent(KNewPasswordWidget* self, QResizeEvent* event);
    friend void KNewPasswordWidget_CloseEvent(KNewPasswordWidget* self, QCloseEvent* event);
    friend void KNewPasswordWidget_QBaseCloseEvent(KNewPasswordWidget* self, QCloseEvent* event);
    friend void KNewPasswordWidget_ContextMenuEvent(KNewPasswordWidget* self, QContextMenuEvent* event);
    friend void KNewPasswordWidget_QBaseContextMenuEvent(KNewPasswordWidget* self, QContextMenuEvent* event);
    friend void KNewPasswordWidget_TabletEvent(KNewPasswordWidget* self, QTabletEvent* event);
    friend void KNewPasswordWidget_QBaseTabletEvent(KNewPasswordWidget* self, QTabletEvent* event);
    friend void KNewPasswordWidget_ActionEvent(KNewPasswordWidget* self, QActionEvent* event);
    friend void KNewPasswordWidget_QBaseActionEvent(KNewPasswordWidget* self, QActionEvent* event);
    friend void KNewPasswordWidget_DragEnterEvent(KNewPasswordWidget* self, QDragEnterEvent* event);
    friend void KNewPasswordWidget_QBaseDragEnterEvent(KNewPasswordWidget* self, QDragEnterEvent* event);
    friend void KNewPasswordWidget_DragMoveEvent(KNewPasswordWidget* self, QDragMoveEvent* event);
    friend void KNewPasswordWidget_QBaseDragMoveEvent(KNewPasswordWidget* self, QDragMoveEvent* event);
    friend void KNewPasswordWidget_DragLeaveEvent(KNewPasswordWidget* self, QDragLeaveEvent* event);
    friend void KNewPasswordWidget_QBaseDragLeaveEvent(KNewPasswordWidget* self, QDragLeaveEvent* event);
    friend void KNewPasswordWidget_DropEvent(KNewPasswordWidget* self, QDropEvent* event);
    friend void KNewPasswordWidget_QBaseDropEvent(KNewPasswordWidget* self, QDropEvent* event);
    friend void KNewPasswordWidget_ShowEvent(KNewPasswordWidget* self, QShowEvent* event);
    friend void KNewPasswordWidget_QBaseShowEvent(KNewPasswordWidget* self, QShowEvent* event);
    friend void KNewPasswordWidget_HideEvent(KNewPasswordWidget* self, QHideEvent* event);
    friend void KNewPasswordWidget_QBaseHideEvent(KNewPasswordWidget* self, QHideEvent* event);
    friend bool KNewPasswordWidget_NativeEvent(KNewPasswordWidget* self, const libqt_string eventType, void* message, intptr_t* result);
    friend bool KNewPasswordWidget_QBaseNativeEvent(KNewPasswordWidget* self, const libqt_string eventType, void* message, intptr_t* result);
    friend void KNewPasswordWidget_ChangeEvent(KNewPasswordWidget* self, QEvent* param1);
    friend void KNewPasswordWidget_QBaseChangeEvent(KNewPasswordWidget* self, QEvent* param1);
    friend int KNewPasswordWidget_Metric(const KNewPasswordWidget* self, int param1);
    friend int KNewPasswordWidget_QBaseMetric(const KNewPasswordWidget* self, int param1);
    friend void KNewPasswordWidget_InitPainter(const KNewPasswordWidget* self, QPainter* painter);
    friend void KNewPasswordWidget_QBaseInitPainter(const KNewPasswordWidget* self, QPainter* painter);
    friend QPaintDevice* KNewPasswordWidget_Redirected(const KNewPasswordWidget* self, QPoint* offset);
    friend QPaintDevice* KNewPasswordWidget_QBaseRedirected(const KNewPasswordWidget* self, QPoint* offset);
    friend QPainter* KNewPasswordWidget_SharedPainter(const KNewPasswordWidget* self);
    friend QPainter* KNewPasswordWidget_QBaseSharedPainter(const KNewPasswordWidget* self);
    friend void KNewPasswordWidget_InputMethodEvent(KNewPasswordWidget* self, QInputMethodEvent* param1);
    friend void KNewPasswordWidget_QBaseInputMethodEvent(KNewPasswordWidget* self, QInputMethodEvent* param1);
    friend bool KNewPasswordWidget_FocusNextPrevChild(KNewPasswordWidget* self, bool next);
    friend bool KNewPasswordWidget_QBaseFocusNextPrevChild(KNewPasswordWidget* self, bool next);
    friend void KNewPasswordWidget_TimerEvent(KNewPasswordWidget* self, QTimerEvent* event);
    friend void KNewPasswordWidget_QBaseTimerEvent(KNewPasswordWidget* self, QTimerEvent* event);
    friend void KNewPasswordWidget_ChildEvent(KNewPasswordWidget* self, QChildEvent* event);
    friend void KNewPasswordWidget_QBaseChildEvent(KNewPasswordWidget* self, QChildEvent* event);
    friend void KNewPasswordWidget_CustomEvent(KNewPasswordWidget* self, QEvent* event);
    friend void KNewPasswordWidget_QBaseCustomEvent(KNewPasswordWidget* self, QEvent* event);
    friend void KNewPasswordWidget_ConnectNotify(KNewPasswordWidget* self, const QMetaMethod* signal);
    friend void KNewPasswordWidget_QBaseConnectNotify(KNewPasswordWidget* self, const QMetaMethod* signal);
    friend void KNewPasswordWidget_DisconnectNotify(KNewPasswordWidget* self, const QMetaMethod* signal);
    friend void KNewPasswordWidget_QBaseDisconnectNotify(KNewPasswordWidget* self, const QMetaMethod* signal);
    friend void KNewPasswordWidget_UpdateMicroFocus(KNewPasswordWidget* self);
    friend void KNewPasswordWidget_QBaseUpdateMicroFocus(KNewPasswordWidget* self);
    friend void KNewPasswordWidget_Create(KNewPasswordWidget* self);
    friend void KNewPasswordWidget_QBaseCreate(KNewPasswordWidget* self);
    friend void KNewPasswordWidget_Destroy(KNewPasswordWidget* self);
    friend void KNewPasswordWidget_QBaseDestroy(KNewPasswordWidget* self);
    friend bool KNewPasswordWidget_FocusNextChild(KNewPasswordWidget* self);
    friend bool KNewPasswordWidget_QBaseFocusNextChild(KNewPasswordWidget* self);
    friend bool KNewPasswordWidget_FocusPreviousChild(KNewPasswordWidget* self);
    friend bool KNewPasswordWidget_QBaseFocusPreviousChild(KNewPasswordWidget* self);
    friend QObject* KNewPasswordWidget_Sender(const KNewPasswordWidget* self);
    friend QObject* KNewPasswordWidget_QBaseSender(const KNewPasswordWidget* self);
    friend int KNewPasswordWidget_SenderSignalIndex(const KNewPasswordWidget* self);
    friend int KNewPasswordWidget_QBaseSenderSignalIndex(const KNewPasswordWidget* self);
    friend int KNewPasswordWidget_Receivers(const KNewPasswordWidget* self, const char* signal);
    friend int KNewPasswordWidget_QBaseReceivers(const KNewPasswordWidget* self, const char* signal);
    friend bool KNewPasswordWidget_IsSignalConnected(const KNewPasswordWidget* self, const QMetaMethod* signal);
    friend bool KNewPasswordWidget_QBaseIsSignalConnected(const KNewPasswordWidget* self, const QMetaMethod* signal);
    friend double KNewPasswordWidget_GetDecodedMetricF(const KNewPasswordWidget* self, int metricA, int metricB);
    friend double KNewPasswordWidget_QBaseGetDecodedMetricF(const KNewPasswordWidget* self, int metricA, int metricB);
};

#endif
