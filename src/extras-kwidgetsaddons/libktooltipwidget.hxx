#pragma once
#ifndef SRC_EXTRAS_KWIDGETSADDONSC_LIBVIRTUALKTOOLTIPWIDGET_H
#define SRC_EXTRAS_KWIDGETSADDONSC_LIBVIRTUALKTOOLTIPWIDGET_H

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

// This class is a subclass of KToolTipWidget so that we can call protected methods
class VirtualKToolTipWidget final : public KToolTipWidget {

  public:
    // Virtual class boolean flag
    bool isVirtualKToolTipWidget = true;

    // Virtual class public types (including callbacks)
    using KToolTipWidget_Metacall_Callback = int (*)(KToolTipWidget*, int, int, void**);
    using KToolTipWidget_EnterEvent_Callback = void (*)(KToolTipWidget*, QEnterEvent*);
    using KToolTipWidget_HideEvent_Callback = void (*)(KToolTipWidget*, QHideEvent*);
    using KToolTipWidget_LeaveEvent_Callback = void (*)(KToolTipWidget*, QEvent*);
    using KToolTipWidget_PaintEvent_Callback = void (*)(KToolTipWidget*, QPaintEvent*);
    using KToolTipWidget_DevType_Callback = int (*)();
    using KToolTipWidget_SetVisible_Callback = void (*)(KToolTipWidget*, bool);
    using KToolTipWidget_SizeHint_Callback = QSize* (*)();
    using KToolTipWidget_MinimumSizeHint_Callback = QSize* (*)();
    using KToolTipWidget_HeightForWidth_Callback = int (*)(const KToolTipWidget*, int);
    using KToolTipWidget_HasHeightForWidth_Callback = bool (*)();
    using KToolTipWidget_PaintEngine_Callback = QPaintEngine* (*)();
    using KToolTipWidget_Event_Callback = bool (*)(KToolTipWidget*, QEvent*);
    using KToolTipWidget_MousePressEvent_Callback = void (*)(KToolTipWidget*, QMouseEvent*);
    using KToolTipWidget_MouseReleaseEvent_Callback = void (*)(KToolTipWidget*, QMouseEvent*);
    using KToolTipWidget_MouseDoubleClickEvent_Callback = void (*)(KToolTipWidget*, QMouseEvent*);
    using KToolTipWidget_MouseMoveEvent_Callback = void (*)(KToolTipWidget*, QMouseEvent*);
    using KToolTipWidget_WheelEvent_Callback = void (*)(KToolTipWidget*, QWheelEvent*);
    using KToolTipWidget_KeyPressEvent_Callback = void (*)(KToolTipWidget*, QKeyEvent*);
    using KToolTipWidget_KeyReleaseEvent_Callback = void (*)(KToolTipWidget*, QKeyEvent*);
    using KToolTipWidget_FocusInEvent_Callback = void (*)(KToolTipWidget*, QFocusEvent*);
    using KToolTipWidget_FocusOutEvent_Callback = void (*)(KToolTipWidget*, QFocusEvent*);
    using KToolTipWidget_MoveEvent_Callback = void (*)(KToolTipWidget*, QMoveEvent*);
    using KToolTipWidget_ResizeEvent_Callback = void (*)(KToolTipWidget*, QResizeEvent*);
    using KToolTipWidget_CloseEvent_Callback = void (*)(KToolTipWidget*, QCloseEvent*);
    using KToolTipWidget_ContextMenuEvent_Callback = void (*)(KToolTipWidget*, QContextMenuEvent*);
    using KToolTipWidget_TabletEvent_Callback = void (*)(KToolTipWidget*, QTabletEvent*);
    using KToolTipWidget_ActionEvent_Callback = void (*)(KToolTipWidget*, QActionEvent*);
    using KToolTipWidget_DragEnterEvent_Callback = void (*)(KToolTipWidget*, QDragEnterEvent*);
    using KToolTipWidget_DragMoveEvent_Callback = void (*)(KToolTipWidget*, QDragMoveEvent*);
    using KToolTipWidget_DragLeaveEvent_Callback = void (*)(KToolTipWidget*, QDragLeaveEvent*);
    using KToolTipWidget_DropEvent_Callback = void (*)(KToolTipWidget*, QDropEvent*);
    using KToolTipWidget_ShowEvent_Callback = void (*)(KToolTipWidget*, QShowEvent*);
    using KToolTipWidget_NativeEvent_Callback = bool (*)(KToolTipWidget*, libqt_string, void*, intptr_t*);
    using KToolTipWidget_ChangeEvent_Callback = void (*)(KToolTipWidget*, QEvent*);
    using KToolTipWidget_Metric_Callback = int (*)(const KToolTipWidget*, int);
    using KToolTipWidget_InitPainter_Callback = void (*)(const KToolTipWidget*, QPainter*);
    using KToolTipWidget_Redirected_Callback = QPaintDevice* (*)(const KToolTipWidget*, QPoint*);
    using KToolTipWidget_SharedPainter_Callback = QPainter* (*)();
    using KToolTipWidget_InputMethodEvent_Callback = void (*)(KToolTipWidget*, QInputMethodEvent*);
    using KToolTipWidget_InputMethodQuery_Callback = QVariant* (*)(const KToolTipWidget*, int);
    using KToolTipWidget_FocusNextPrevChild_Callback = bool (*)(KToolTipWidget*, bool);
    using KToolTipWidget_EventFilter_Callback = bool (*)(KToolTipWidget*, QObject*, QEvent*);
    using KToolTipWidget_TimerEvent_Callback = void (*)(KToolTipWidget*, QTimerEvent*);
    using KToolTipWidget_ChildEvent_Callback = void (*)(KToolTipWidget*, QChildEvent*);
    using KToolTipWidget_CustomEvent_Callback = void (*)(KToolTipWidget*, QEvent*);
    using KToolTipWidget_ConnectNotify_Callback = void (*)(KToolTipWidget*, QMetaMethod*);
    using KToolTipWidget_DisconnectNotify_Callback = void (*)(KToolTipWidget*, QMetaMethod*);
    using KToolTipWidget_UpdateMicroFocus_Callback = void (*)();
    using KToolTipWidget_Create_Callback = void (*)();
    using KToolTipWidget_Destroy_Callback = void (*)();
    using KToolTipWidget_FocusNextChild_Callback = bool (*)();
    using KToolTipWidget_FocusPreviousChild_Callback = bool (*)();
    using KToolTipWidget_Sender_Callback = QObject* (*)();
    using KToolTipWidget_SenderSignalIndex_Callback = int (*)();
    using KToolTipWidget_Receivers_Callback = int (*)(const KToolTipWidget*, const char*);
    using KToolTipWidget_IsSignalConnected_Callback = bool (*)(const KToolTipWidget*, QMetaMethod*);
    using KToolTipWidget_GetDecodedMetricF_Callback = double (*)(const KToolTipWidget*, int, int);

  protected:
    // Instance callback storage
    KToolTipWidget_Metacall_Callback ktooltipwidget_metacall_callback = nullptr;
    KToolTipWidget_EnterEvent_Callback ktooltipwidget_enterevent_callback = nullptr;
    KToolTipWidget_HideEvent_Callback ktooltipwidget_hideevent_callback = nullptr;
    KToolTipWidget_LeaveEvent_Callback ktooltipwidget_leaveevent_callback = nullptr;
    KToolTipWidget_PaintEvent_Callback ktooltipwidget_paintevent_callback = nullptr;
    KToolTipWidget_DevType_Callback ktooltipwidget_devtype_callback = nullptr;
    KToolTipWidget_SetVisible_Callback ktooltipwidget_setvisible_callback = nullptr;
    KToolTipWidget_SizeHint_Callback ktooltipwidget_sizehint_callback = nullptr;
    KToolTipWidget_MinimumSizeHint_Callback ktooltipwidget_minimumsizehint_callback = nullptr;
    KToolTipWidget_HeightForWidth_Callback ktooltipwidget_heightforwidth_callback = nullptr;
    KToolTipWidget_HasHeightForWidth_Callback ktooltipwidget_hasheightforwidth_callback = nullptr;
    KToolTipWidget_PaintEngine_Callback ktooltipwidget_paintengine_callback = nullptr;
    KToolTipWidget_Event_Callback ktooltipwidget_event_callback = nullptr;
    KToolTipWidget_MousePressEvent_Callback ktooltipwidget_mousepressevent_callback = nullptr;
    KToolTipWidget_MouseReleaseEvent_Callback ktooltipwidget_mousereleaseevent_callback = nullptr;
    KToolTipWidget_MouseDoubleClickEvent_Callback ktooltipwidget_mousedoubleclickevent_callback = nullptr;
    KToolTipWidget_MouseMoveEvent_Callback ktooltipwidget_mousemoveevent_callback = nullptr;
    KToolTipWidget_WheelEvent_Callback ktooltipwidget_wheelevent_callback = nullptr;
    KToolTipWidget_KeyPressEvent_Callback ktooltipwidget_keypressevent_callback = nullptr;
    KToolTipWidget_KeyReleaseEvent_Callback ktooltipwidget_keyreleaseevent_callback = nullptr;
    KToolTipWidget_FocusInEvent_Callback ktooltipwidget_focusinevent_callback = nullptr;
    KToolTipWidget_FocusOutEvent_Callback ktooltipwidget_focusoutevent_callback = nullptr;
    KToolTipWidget_MoveEvent_Callback ktooltipwidget_moveevent_callback = nullptr;
    KToolTipWidget_ResizeEvent_Callback ktooltipwidget_resizeevent_callback = nullptr;
    KToolTipWidget_CloseEvent_Callback ktooltipwidget_closeevent_callback = nullptr;
    KToolTipWidget_ContextMenuEvent_Callback ktooltipwidget_contextmenuevent_callback = nullptr;
    KToolTipWidget_TabletEvent_Callback ktooltipwidget_tabletevent_callback = nullptr;
    KToolTipWidget_ActionEvent_Callback ktooltipwidget_actionevent_callback = nullptr;
    KToolTipWidget_DragEnterEvent_Callback ktooltipwidget_dragenterevent_callback = nullptr;
    KToolTipWidget_DragMoveEvent_Callback ktooltipwidget_dragmoveevent_callback = nullptr;
    KToolTipWidget_DragLeaveEvent_Callback ktooltipwidget_dragleaveevent_callback = nullptr;
    KToolTipWidget_DropEvent_Callback ktooltipwidget_dropevent_callback = nullptr;
    KToolTipWidget_ShowEvent_Callback ktooltipwidget_showevent_callback = nullptr;
    KToolTipWidget_NativeEvent_Callback ktooltipwidget_nativeevent_callback = nullptr;
    KToolTipWidget_ChangeEvent_Callback ktooltipwidget_changeevent_callback = nullptr;
    KToolTipWidget_Metric_Callback ktooltipwidget_metric_callback = nullptr;
    KToolTipWidget_InitPainter_Callback ktooltipwidget_initpainter_callback = nullptr;
    KToolTipWidget_Redirected_Callback ktooltipwidget_redirected_callback = nullptr;
    KToolTipWidget_SharedPainter_Callback ktooltipwidget_sharedpainter_callback = nullptr;
    KToolTipWidget_InputMethodEvent_Callback ktooltipwidget_inputmethodevent_callback = nullptr;
    KToolTipWidget_InputMethodQuery_Callback ktooltipwidget_inputmethodquery_callback = nullptr;
    KToolTipWidget_FocusNextPrevChild_Callback ktooltipwidget_focusnextprevchild_callback = nullptr;
    KToolTipWidget_EventFilter_Callback ktooltipwidget_eventfilter_callback = nullptr;
    KToolTipWidget_TimerEvent_Callback ktooltipwidget_timerevent_callback = nullptr;
    KToolTipWidget_ChildEvent_Callback ktooltipwidget_childevent_callback = nullptr;
    KToolTipWidget_CustomEvent_Callback ktooltipwidget_customevent_callback = nullptr;
    KToolTipWidget_ConnectNotify_Callback ktooltipwidget_connectnotify_callback = nullptr;
    KToolTipWidget_DisconnectNotify_Callback ktooltipwidget_disconnectnotify_callback = nullptr;
    KToolTipWidget_UpdateMicroFocus_Callback ktooltipwidget_updatemicrofocus_callback = nullptr;
    KToolTipWidget_Create_Callback ktooltipwidget_create_callback = nullptr;
    KToolTipWidget_Destroy_Callback ktooltipwidget_destroy_callback = nullptr;
    KToolTipWidget_FocusNextChild_Callback ktooltipwidget_focusnextchild_callback = nullptr;
    KToolTipWidget_FocusPreviousChild_Callback ktooltipwidget_focuspreviouschild_callback = nullptr;
    KToolTipWidget_Sender_Callback ktooltipwidget_sender_callback = nullptr;
    KToolTipWidget_SenderSignalIndex_Callback ktooltipwidget_sendersignalindex_callback = nullptr;
    KToolTipWidget_Receivers_Callback ktooltipwidget_receivers_callback = nullptr;
    KToolTipWidget_IsSignalConnected_Callback ktooltipwidget_issignalconnected_callback = nullptr;
    KToolTipWidget_GetDecodedMetricF_Callback ktooltipwidget_getdecodedmetricf_callback = nullptr;

    // Instance base flags
    mutable bool ktooltipwidget_metacall_isbase = false;
    mutable bool ktooltipwidget_enterevent_isbase = false;
    mutable bool ktooltipwidget_hideevent_isbase = false;
    mutable bool ktooltipwidget_leaveevent_isbase = false;
    mutable bool ktooltipwidget_paintevent_isbase = false;
    mutable bool ktooltipwidget_devtype_isbase = false;
    mutable bool ktooltipwidget_setvisible_isbase = false;
    mutable bool ktooltipwidget_sizehint_isbase = false;
    mutable bool ktooltipwidget_minimumsizehint_isbase = false;
    mutable bool ktooltipwidget_heightforwidth_isbase = false;
    mutable bool ktooltipwidget_hasheightforwidth_isbase = false;
    mutable bool ktooltipwidget_paintengine_isbase = false;
    mutable bool ktooltipwidget_event_isbase = false;
    mutable bool ktooltipwidget_mousepressevent_isbase = false;
    mutable bool ktooltipwidget_mousereleaseevent_isbase = false;
    mutable bool ktooltipwidget_mousedoubleclickevent_isbase = false;
    mutable bool ktooltipwidget_mousemoveevent_isbase = false;
    mutable bool ktooltipwidget_wheelevent_isbase = false;
    mutable bool ktooltipwidget_keypressevent_isbase = false;
    mutable bool ktooltipwidget_keyreleaseevent_isbase = false;
    mutable bool ktooltipwidget_focusinevent_isbase = false;
    mutable bool ktooltipwidget_focusoutevent_isbase = false;
    mutable bool ktooltipwidget_moveevent_isbase = false;
    mutable bool ktooltipwidget_resizeevent_isbase = false;
    mutable bool ktooltipwidget_closeevent_isbase = false;
    mutable bool ktooltipwidget_contextmenuevent_isbase = false;
    mutable bool ktooltipwidget_tabletevent_isbase = false;
    mutable bool ktooltipwidget_actionevent_isbase = false;
    mutable bool ktooltipwidget_dragenterevent_isbase = false;
    mutable bool ktooltipwidget_dragmoveevent_isbase = false;
    mutable bool ktooltipwidget_dragleaveevent_isbase = false;
    mutable bool ktooltipwidget_dropevent_isbase = false;
    mutable bool ktooltipwidget_showevent_isbase = false;
    mutable bool ktooltipwidget_nativeevent_isbase = false;
    mutable bool ktooltipwidget_changeevent_isbase = false;
    mutable bool ktooltipwidget_metric_isbase = false;
    mutable bool ktooltipwidget_initpainter_isbase = false;
    mutable bool ktooltipwidget_redirected_isbase = false;
    mutable bool ktooltipwidget_sharedpainter_isbase = false;
    mutable bool ktooltipwidget_inputmethodevent_isbase = false;
    mutable bool ktooltipwidget_inputmethodquery_isbase = false;
    mutable bool ktooltipwidget_focusnextprevchild_isbase = false;
    mutable bool ktooltipwidget_eventfilter_isbase = false;
    mutable bool ktooltipwidget_timerevent_isbase = false;
    mutable bool ktooltipwidget_childevent_isbase = false;
    mutable bool ktooltipwidget_customevent_isbase = false;
    mutable bool ktooltipwidget_connectnotify_isbase = false;
    mutable bool ktooltipwidget_disconnectnotify_isbase = false;
    mutable bool ktooltipwidget_updatemicrofocus_isbase = false;
    mutable bool ktooltipwidget_create_isbase = false;
    mutable bool ktooltipwidget_destroy_isbase = false;
    mutable bool ktooltipwidget_focusnextchild_isbase = false;
    mutable bool ktooltipwidget_focuspreviouschild_isbase = false;
    mutable bool ktooltipwidget_sender_isbase = false;
    mutable bool ktooltipwidget_sendersignalindex_isbase = false;
    mutable bool ktooltipwidget_receivers_isbase = false;
    mutable bool ktooltipwidget_issignalconnected_isbase = false;
    mutable bool ktooltipwidget_getdecodedmetricf_isbase = false;

  public:
    VirtualKToolTipWidget(QWidget* parent) : KToolTipWidget(parent) {};
    VirtualKToolTipWidget() : KToolTipWidget() {};

    ~VirtualKToolTipWidget() {
        ktooltipwidget_metacall_callback = nullptr;
        ktooltipwidget_enterevent_callback = nullptr;
        ktooltipwidget_hideevent_callback = nullptr;
        ktooltipwidget_leaveevent_callback = nullptr;
        ktooltipwidget_paintevent_callback = nullptr;
        ktooltipwidget_devtype_callback = nullptr;
        ktooltipwidget_setvisible_callback = nullptr;
        ktooltipwidget_sizehint_callback = nullptr;
        ktooltipwidget_minimumsizehint_callback = nullptr;
        ktooltipwidget_heightforwidth_callback = nullptr;
        ktooltipwidget_hasheightforwidth_callback = nullptr;
        ktooltipwidget_paintengine_callback = nullptr;
        ktooltipwidget_event_callback = nullptr;
        ktooltipwidget_mousepressevent_callback = nullptr;
        ktooltipwidget_mousereleaseevent_callback = nullptr;
        ktooltipwidget_mousedoubleclickevent_callback = nullptr;
        ktooltipwidget_mousemoveevent_callback = nullptr;
        ktooltipwidget_wheelevent_callback = nullptr;
        ktooltipwidget_keypressevent_callback = nullptr;
        ktooltipwidget_keyreleaseevent_callback = nullptr;
        ktooltipwidget_focusinevent_callback = nullptr;
        ktooltipwidget_focusoutevent_callback = nullptr;
        ktooltipwidget_moveevent_callback = nullptr;
        ktooltipwidget_resizeevent_callback = nullptr;
        ktooltipwidget_closeevent_callback = nullptr;
        ktooltipwidget_contextmenuevent_callback = nullptr;
        ktooltipwidget_tabletevent_callback = nullptr;
        ktooltipwidget_actionevent_callback = nullptr;
        ktooltipwidget_dragenterevent_callback = nullptr;
        ktooltipwidget_dragmoveevent_callback = nullptr;
        ktooltipwidget_dragleaveevent_callback = nullptr;
        ktooltipwidget_dropevent_callback = nullptr;
        ktooltipwidget_showevent_callback = nullptr;
        ktooltipwidget_nativeevent_callback = nullptr;
        ktooltipwidget_changeevent_callback = nullptr;
        ktooltipwidget_metric_callback = nullptr;
        ktooltipwidget_initpainter_callback = nullptr;
        ktooltipwidget_redirected_callback = nullptr;
        ktooltipwidget_sharedpainter_callback = nullptr;
        ktooltipwidget_inputmethodevent_callback = nullptr;
        ktooltipwidget_inputmethodquery_callback = nullptr;
        ktooltipwidget_focusnextprevchild_callback = nullptr;
        ktooltipwidget_eventfilter_callback = nullptr;
        ktooltipwidget_timerevent_callback = nullptr;
        ktooltipwidget_childevent_callback = nullptr;
        ktooltipwidget_customevent_callback = nullptr;
        ktooltipwidget_connectnotify_callback = nullptr;
        ktooltipwidget_disconnectnotify_callback = nullptr;
        ktooltipwidget_updatemicrofocus_callback = nullptr;
        ktooltipwidget_create_callback = nullptr;
        ktooltipwidget_destroy_callback = nullptr;
        ktooltipwidget_focusnextchild_callback = nullptr;
        ktooltipwidget_focuspreviouschild_callback = nullptr;
        ktooltipwidget_sender_callback = nullptr;
        ktooltipwidget_sendersignalindex_callback = nullptr;
        ktooltipwidget_receivers_callback = nullptr;
        ktooltipwidget_issignalconnected_callback = nullptr;
        ktooltipwidget_getdecodedmetricf_callback = nullptr;
    }

    // Callback setters
    inline void setKToolTipWidget_Metacall_Callback(KToolTipWidget_Metacall_Callback cb) { ktooltipwidget_metacall_callback = cb; }
    inline void setKToolTipWidget_EnterEvent_Callback(KToolTipWidget_EnterEvent_Callback cb) { ktooltipwidget_enterevent_callback = cb; }
    inline void setKToolTipWidget_HideEvent_Callback(KToolTipWidget_HideEvent_Callback cb) { ktooltipwidget_hideevent_callback = cb; }
    inline void setKToolTipWidget_LeaveEvent_Callback(KToolTipWidget_LeaveEvent_Callback cb) { ktooltipwidget_leaveevent_callback = cb; }
    inline void setKToolTipWidget_PaintEvent_Callback(KToolTipWidget_PaintEvent_Callback cb) { ktooltipwidget_paintevent_callback = cb; }
    inline void setKToolTipWidget_DevType_Callback(KToolTipWidget_DevType_Callback cb) { ktooltipwidget_devtype_callback = cb; }
    inline void setKToolTipWidget_SetVisible_Callback(KToolTipWidget_SetVisible_Callback cb) { ktooltipwidget_setvisible_callback = cb; }
    inline void setKToolTipWidget_SizeHint_Callback(KToolTipWidget_SizeHint_Callback cb) { ktooltipwidget_sizehint_callback = cb; }
    inline void setKToolTipWidget_MinimumSizeHint_Callback(KToolTipWidget_MinimumSizeHint_Callback cb) { ktooltipwidget_minimumsizehint_callback = cb; }
    inline void setKToolTipWidget_HeightForWidth_Callback(KToolTipWidget_HeightForWidth_Callback cb) { ktooltipwidget_heightforwidth_callback = cb; }
    inline void setKToolTipWidget_HasHeightForWidth_Callback(KToolTipWidget_HasHeightForWidth_Callback cb) { ktooltipwidget_hasheightforwidth_callback = cb; }
    inline void setKToolTipWidget_PaintEngine_Callback(KToolTipWidget_PaintEngine_Callback cb) { ktooltipwidget_paintengine_callback = cb; }
    inline void setKToolTipWidget_Event_Callback(KToolTipWidget_Event_Callback cb) { ktooltipwidget_event_callback = cb; }
    inline void setKToolTipWidget_MousePressEvent_Callback(KToolTipWidget_MousePressEvent_Callback cb) { ktooltipwidget_mousepressevent_callback = cb; }
    inline void setKToolTipWidget_MouseReleaseEvent_Callback(KToolTipWidget_MouseReleaseEvent_Callback cb) { ktooltipwidget_mousereleaseevent_callback = cb; }
    inline void setKToolTipWidget_MouseDoubleClickEvent_Callback(KToolTipWidget_MouseDoubleClickEvent_Callback cb) { ktooltipwidget_mousedoubleclickevent_callback = cb; }
    inline void setKToolTipWidget_MouseMoveEvent_Callback(KToolTipWidget_MouseMoveEvent_Callback cb) { ktooltipwidget_mousemoveevent_callback = cb; }
    inline void setKToolTipWidget_WheelEvent_Callback(KToolTipWidget_WheelEvent_Callback cb) { ktooltipwidget_wheelevent_callback = cb; }
    inline void setKToolTipWidget_KeyPressEvent_Callback(KToolTipWidget_KeyPressEvent_Callback cb) { ktooltipwidget_keypressevent_callback = cb; }
    inline void setKToolTipWidget_KeyReleaseEvent_Callback(KToolTipWidget_KeyReleaseEvent_Callback cb) { ktooltipwidget_keyreleaseevent_callback = cb; }
    inline void setKToolTipWidget_FocusInEvent_Callback(KToolTipWidget_FocusInEvent_Callback cb) { ktooltipwidget_focusinevent_callback = cb; }
    inline void setKToolTipWidget_FocusOutEvent_Callback(KToolTipWidget_FocusOutEvent_Callback cb) { ktooltipwidget_focusoutevent_callback = cb; }
    inline void setKToolTipWidget_MoveEvent_Callback(KToolTipWidget_MoveEvent_Callback cb) { ktooltipwidget_moveevent_callback = cb; }
    inline void setKToolTipWidget_ResizeEvent_Callback(KToolTipWidget_ResizeEvent_Callback cb) { ktooltipwidget_resizeevent_callback = cb; }
    inline void setKToolTipWidget_CloseEvent_Callback(KToolTipWidget_CloseEvent_Callback cb) { ktooltipwidget_closeevent_callback = cb; }
    inline void setKToolTipWidget_ContextMenuEvent_Callback(KToolTipWidget_ContextMenuEvent_Callback cb) { ktooltipwidget_contextmenuevent_callback = cb; }
    inline void setKToolTipWidget_TabletEvent_Callback(KToolTipWidget_TabletEvent_Callback cb) { ktooltipwidget_tabletevent_callback = cb; }
    inline void setKToolTipWidget_ActionEvent_Callback(KToolTipWidget_ActionEvent_Callback cb) { ktooltipwidget_actionevent_callback = cb; }
    inline void setKToolTipWidget_DragEnterEvent_Callback(KToolTipWidget_DragEnterEvent_Callback cb) { ktooltipwidget_dragenterevent_callback = cb; }
    inline void setKToolTipWidget_DragMoveEvent_Callback(KToolTipWidget_DragMoveEvent_Callback cb) { ktooltipwidget_dragmoveevent_callback = cb; }
    inline void setKToolTipWidget_DragLeaveEvent_Callback(KToolTipWidget_DragLeaveEvent_Callback cb) { ktooltipwidget_dragleaveevent_callback = cb; }
    inline void setKToolTipWidget_DropEvent_Callback(KToolTipWidget_DropEvent_Callback cb) { ktooltipwidget_dropevent_callback = cb; }
    inline void setKToolTipWidget_ShowEvent_Callback(KToolTipWidget_ShowEvent_Callback cb) { ktooltipwidget_showevent_callback = cb; }
    inline void setKToolTipWidget_NativeEvent_Callback(KToolTipWidget_NativeEvent_Callback cb) { ktooltipwidget_nativeevent_callback = cb; }
    inline void setKToolTipWidget_ChangeEvent_Callback(KToolTipWidget_ChangeEvent_Callback cb) { ktooltipwidget_changeevent_callback = cb; }
    inline void setKToolTipWidget_Metric_Callback(KToolTipWidget_Metric_Callback cb) { ktooltipwidget_metric_callback = cb; }
    inline void setKToolTipWidget_InitPainter_Callback(KToolTipWidget_InitPainter_Callback cb) { ktooltipwidget_initpainter_callback = cb; }
    inline void setKToolTipWidget_Redirected_Callback(KToolTipWidget_Redirected_Callback cb) { ktooltipwidget_redirected_callback = cb; }
    inline void setKToolTipWidget_SharedPainter_Callback(KToolTipWidget_SharedPainter_Callback cb) { ktooltipwidget_sharedpainter_callback = cb; }
    inline void setKToolTipWidget_InputMethodEvent_Callback(KToolTipWidget_InputMethodEvent_Callback cb) { ktooltipwidget_inputmethodevent_callback = cb; }
    inline void setKToolTipWidget_InputMethodQuery_Callback(KToolTipWidget_InputMethodQuery_Callback cb) { ktooltipwidget_inputmethodquery_callback = cb; }
    inline void setKToolTipWidget_FocusNextPrevChild_Callback(KToolTipWidget_FocusNextPrevChild_Callback cb) { ktooltipwidget_focusnextprevchild_callback = cb; }
    inline void setKToolTipWidget_EventFilter_Callback(KToolTipWidget_EventFilter_Callback cb) { ktooltipwidget_eventfilter_callback = cb; }
    inline void setKToolTipWidget_TimerEvent_Callback(KToolTipWidget_TimerEvent_Callback cb) { ktooltipwidget_timerevent_callback = cb; }
    inline void setKToolTipWidget_ChildEvent_Callback(KToolTipWidget_ChildEvent_Callback cb) { ktooltipwidget_childevent_callback = cb; }
    inline void setKToolTipWidget_CustomEvent_Callback(KToolTipWidget_CustomEvent_Callback cb) { ktooltipwidget_customevent_callback = cb; }
    inline void setKToolTipWidget_ConnectNotify_Callback(KToolTipWidget_ConnectNotify_Callback cb) { ktooltipwidget_connectnotify_callback = cb; }
    inline void setKToolTipWidget_DisconnectNotify_Callback(KToolTipWidget_DisconnectNotify_Callback cb) { ktooltipwidget_disconnectnotify_callback = cb; }
    inline void setKToolTipWidget_UpdateMicroFocus_Callback(KToolTipWidget_UpdateMicroFocus_Callback cb) { ktooltipwidget_updatemicrofocus_callback = cb; }
    inline void setKToolTipWidget_Create_Callback(KToolTipWidget_Create_Callback cb) { ktooltipwidget_create_callback = cb; }
    inline void setKToolTipWidget_Destroy_Callback(KToolTipWidget_Destroy_Callback cb) { ktooltipwidget_destroy_callback = cb; }
    inline void setKToolTipWidget_FocusNextChild_Callback(KToolTipWidget_FocusNextChild_Callback cb) { ktooltipwidget_focusnextchild_callback = cb; }
    inline void setKToolTipWidget_FocusPreviousChild_Callback(KToolTipWidget_FocusPreviousChild_Callback cb) { ktooltipwidget_focuspreviouschild_callback = cb; }
    inline void setKToolTipWidget_Sender_Callback(KToolTipWidget_Sender_Callback cb) { ktooltipwidget_sender_callback = cb; }
    inline void setKToolTipWidget_SenderSignalIndex_Callback(KToolTipWidget_SenderSignalIndex_Callback cb) { ktooltipwidget_sendersignalindex_callback = cb; }
    inline void setKToolTipWidget_Receivers_Callback(KToolTipWidget_Receivers_Callback cb) { ktooltipwidget_receivers_callback = cb; }
    inline void setKToolTipWidget_IsSignalConnected_Callback(KToolTipWidget_IsSignalConnected_Callback cb) { ktooltipwidget_issignalconnected_callback = cb; }
    inline void setKToolTipWidget_GetDecodedMetricF_Callback(KToolTipWidget_GetDecodedMetricF_Callback cb) { ktooltipwidget_getdecodedmetricf_callback = cb; }

    // Base flag setters
    inline void setKToolTipWidget_Metacall_IsBase(bool value) const { ktooltipwidget_metacall_isbase = value; }
    inline void setKToolTipWidget_EnterEvent_IsBase(bool value) const { ktooltipwidget_enterevent_isbase = value; }
    inline void setKToolTipWidget_HideEvent_IsBase(bool value) const { ktooltipwidget_hideevent_isbase = value; }
    inline void setKToolTipWidget_LeaveEvent_IsBase(bool value) const { ktooltipwidget_leaveevent_isbase = value; }
    inline void setKToolTipWidget_PaintEvent_IsBase(bool value) const { ktooltipwidget_paintevent_isbase = value; }
    inline void setKToolTipWidget_DevType_IsBase(bool value) const { ktooltipwidget_devtype_isbase = value; }
    inline void setKToolTipWidget_SetVisible_IsBase(bool value) const { ktooltipwidget_setvisible_isbase = value; }
    inline void setKToolTipWidget_SizeHint_IsBase(bool value) const { ktooltipwidget_sizehint_isbase = value; }
    inline void setKToolTipWidget_MinimumSizeHint_IsBase(bool value) const { ktooltipwidget_minimumsizehint_isbase = value; }
    inline void setKToolTipWidget_HeightForWidth_IsBase(bool value) const { ktooltipwidget_heightforwidth_isbase = value; }
    inline void setKToolTipWidget_HasHeightForWidth_IsBase(bool value) const { ktooltipwidget_hasheightforwidth_isbase = value; }
    inline void setKToolTipWidget_PaintEngine_IsBase(bool value) const { ktooltipwidget_paintengine_isbase = value; }
    inline void setKToolTipWidget_Event_IsBase(bool value) const { ktooltipwidget_event_isbase = value; }
    inline void setKToolTipWidget_MousePressEvent_IsBase(bool value) const { ktooltipwidget_mousepressevent_isbase = value; }
    inline void setKToolTipWidget_MouseReleaseEvent_IsBase(bool value) const { ktooltipwidget_mousereleaseevent_isbase = value; }
    inline void setKToolTipWidget_MouseDoubleClickEvent_IsBase(bool value) const { ktooltipwidget_mousedoubleclickevent_isbase = value; }
    inline void setKToolTipWidget_MouseMoveEvent_IsBase(bool value) const { ktooltipwidget_mousemoveevent_isbase = value; }
    inline void setKToolTipWidget_WheelEvent_IsBase(bool value) const { ktooltipwidget_wheelevent_isbase = value; }
    inline void setKToolTipWidget_KeyPressEvent_IsBase(bool value) const { ktooltipwidget_keypressevent_isbase = value; }
    inline void setKToolTipWidget_KeyReleaseEvent_IsBase(bool value) const { ktooltipwidget_keyreleaseevent_isbase = value; }
    inline void setKToolTipWidget_FocusInEvent_IsBase(bool value) const { ktooltipwidget_focusinevent_isbase = value; }
    inline void setKToolTipWidget_FocusOutEvent_IsBase(bool value) const { ktooltipwidget_focusoutevent_isbase = value; }
    inline void setKToolTipWidget_MoveEvent_IsBase(bool value) const { ktooltipwidget_moveevent_isbase = value; }
    inline void setKToolTipWidget_ResizeEvent_IsBase(bool value) const { ktooltipwidget_resizeevent_isbase = value; }
    inline void setKToolTipWidget_CloseEvent_IsBase(bool value) const { ktooltipwidget_closeevent_isbase = value; }
    inline void setKToolTipWidget_ContextMenuEvent_IsBase(bool value) const { ktooltipwidget_contextmenuevent_isbase = value; }
    inline void setKToolTipWidget_TabletEvent_IsBase(bool value) const { ktooltipwidget_tabletevent_isbase = value; }
    inline void setKToolTipWidget_ActionEvent_IsBase(bool value) const { ktooltipwidget_actionevent_isbase = value; }
    inline void setKToolTipWidget_DragEnterEvent_IsBase(bool value) const { ktooltipwidget_dragenterevent_isbase = value; }
    inline void setKToolTipWidget_DragMoveEvent_IsBase(bool value) const { ktooltipwidget_dragmoveevent_isbase = value; }
    inline void setKToolTipWidget_DragLeaveEvent_IsBase(bool value) const { ktooltipwidget_dragleaveevent_isbase = value; }
    inline void setKToolTipWidget_DropEvent_IsBase(bool value) const { ktooltipwidget_dropevent_isbase = value; }
    inline void setKToolTipWidget_ShowEvent_IsBase(bool value) const { ktooltipwidget_showevent_isbase = value; }
    inline void setKToolTipWidget_NativeEvent_IsBase(bool value) const { ktooltipwidget_nativeevent_isbase = value; }
    inline void setKToolTipWidget_ChangeEvent_IsBase(bool value) const { ktooltipwidget_changeevent_isbase = value; }
    inline void setKToolTipWidget_Metric_IsBase(bool value) const { ktooltipwidget_metric_isbase = value; }
    inline void setKToolTipWidget_InitPainter_IsBase(bool value) const { ktooltipwidget_initpainter_isbase = value; }
    inline void setKToolTipWidget_Redirected_IsBase(bool value) const { ktooltipwidget_redirected_isbase = value; }
    inline void setKToolTipWidget_SharedPainter_IsBase(bool value) const { ktooltipwidget_sharedpainter_isbase = value; }
    inline void setKToolTipWidget_InputMethodEvent_IsBase(bool value) const { ktooltipwidget_inputmethodevent_isbase = value; }
    inline void setKToolTipWidget_InputMethodQuery_IsBase(bool value) const { ktooltipwidget_inputmethodquery_isbase = value; }
    inline void setKToolTipWidget_FocusNextPrevChild_IsBase(bool value) const { ktooltipwidget_focusnextprevchild_isbase = value; }
    inline void setKToolTipWidget_EventFilter_IsBase(bool value) const { ktooltipwidget_eventfilter_isbase = value; }
    inline void setKToolTipWidget_TimerEvent_IsBase(bool value) const { ktooltipwidget_timerevent_isbase = value; }
    inline void setKToolTipWidget_ChildEvent_IsBase(bool value) const { ktooltipwidget_childevent_isbase = value; }
    inline void setKToolTipWidget_CustomEvent_IsBase(bool value) const { ktooltipwidget_customevent_isbase = value; }
    inline void setKToolTipWidget_ConnectNotify_IsBase(bool value) const { ktooltipwidget_connectnotify_isbase = value; }
    inline void setKToolTipWidget_DisconnectNotify_IsBase(bool value) const { ktooltipwidget_disconnectnotify_isbase = value; }
    inline void setKToolTipWidget_UpdateMicroFocus_IsBase(bool value) const { ktooltipwidget_updatemicrofocus_isbase = value; }
    inline void setKToolTipWidget_Create_IsBase(bool value) const { ktooltipwidget_create_isbase = value; }
    inline void setKToolTipWidget_Destroy_IsBase(bool value) const { ktooltipwidget_destroy_isbase = value; }
    inline void setKToolTipWidget_FocusNextChild_IsBase(bool value) const { ktooltipwidget_focusnextchild_isbase = value; }
    inline void setKToolTipWidget_FocusPreviousChild_IsBase(bool value) const { ktooltipwidget_focuspreviouschild_isbase = value; }
    inline void setKToolTipWidget_Sender_IsBase(bool value) const { ktooltipwidget_sender_isbase = value; }
    inline void setKToolTipWidget_SenderSignalIndex_IsBase(bool value) const { ktooltipwidget_sendersignalindex_isbase = value; }
    inline void setKToolTipWidget_Receivers_IsBase(bool value) const { ktooltipwidget_receivers_isbase = value; }
    inline void setKToolTipWidget_IsSignalConnected_IsBase(bool value) const { ktooltipwidget_issignalconnected_isbase = value; }
    inline void setKToolTipWidget_GetDecodedMetricF_IsBase(bool value) const { ktooltipwidget_getdecodedmetricf_isbase = value; }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (ktooltipwidget_metacall_isbase) {
            ktooltipwidget_metacall_isbase = false;
            return KToolTipWidget::qt_metacall(param1, param2, param3);
        } else if (ktooltipwidget_metacall_callback != nullptr) {
            int cbval1 = static_cast<int>(param1);
            int cbval2 = param2;
            void** cbval3 = param3;

            int callback_ret = ktooltipwidget_metacall_callback(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        } else {
            return KToolTipWidget::qt_metacall(param1, param2, param3);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void enterEvent(QEnterEvent* event) override {
        if (ktooltipwidget_enterevent_isbase) {
            ktooltipwidget_enterevent_isbase = false;
            KToolTipWidget::enterEvent(event);
        } else if (ktooltipwidget_enterevent_callback != nullptr) {
            QEnterEvent* cbval1 = event;

            ktooltipwidget_enterevent_callback(this, cbval1);
        } else {
            KToolTipWidget::enterEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void hideEvent(QHideEvent* param1) override {
        if (ktooltipwidget_hideevent_isbase) {
            ktooltipwidget_hideevent_isbase = false;
            KToolTipWidget::hideEvent(param1);
        } else if (ktooltipwidget_hideevent_callback != nullptr) {
            QHideEvent* cbval1 = param1;

            ktooltipwidget_hideevent_callback(this, cbval1);
        } else {
            KToolTipWidget::hideEvent(param1);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void leaveEvent(QEvent* param1) override {
        if (ktooltipwidget_leaveevent_isbase) {
            ktooltipwidget_leaveevent_isbase = false;
            KToolTipWidget::leaveEvent(param1);
        } else if (ktooltipwidget_leaveevent_callback != nullptr) {
            QEvent* cbval1 = param1;

            ktooltipwidget_leaveevent_callback(this, cbval1);
        } else {
            KToolTipWidget::leaveEvent(param1);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void paintEvent(QPaintEvent* event) override {
        if (ktooltipwidget_paintevent_isbase) {
            ktooltipwidget_paintevent_isbase = false;
            KToolTipWidget::paintEvent(event);
        } else if (ktooltipwidget_paintevent_callback != nullptr) {
            QPaintEvent* cbval1 = event;

            ktooltipwidget_paintevent_callback(this, cbval1);
        } else {
            KToolTipWidget::paintEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual int devType() const override {
        if (ktooltipwidget_devtype_isbase) {
            ktooltipwidget_devtype_isbase = false;
            return KToolTipWidget::devType();
        } else if (ktooltipwidget_devtype_callback != nullptr) {
            int callback_ret = ktooltipwidget_devtype_callback();
            return static_cast<int>(callback_ret);
        } else {
            return KToolTipWidget::devType();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void setVisible(bool visible) override {
        if (ktooltipwidget_setvisible_isbase) {
            ktooltipwidget_setvisible_isbase = false;
            KToolTipWidget::setVisible(visible);
        } else if (ktooltipwidget_setvisible_callback != nullptr) {
            bool cbval1 = visible;

            ktooltipwidget_setvisible_callback(this, cbval1);
        } else {
            KToolTipWidget::setVisible(visible);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QSize sizeHint() const override {
        if (ktooltipwidget_sizehint_isbase) {
            ktooltipwidget_sizehint_isbase = false;
            return KToolTipWidget::sizeHint();
        } else if (ktooltipwidget_sizehint_callback != nullptr) {
            QSize* callback_ret = ktooltipwidget_sizehint_callback();
            return *callback_ret;
        } else {
            return KToolTipWidget::sizeHint();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QSize minimumSizeHint() const override {
        if (ktooltipwidget_minimumsizehint_isbase) {
            ktooltipwidget_minimumsizehint_isbase = false;
            return KToolTipWidget::minimumSizeHint();
        } else if (ktooltipwidget_minimumsizehint_callback != nullptr) {
            QSize* callback_ret = ktooltipwidget_minimumsizehint_callback();
            return *callback_ret;
        } else {
            return KToolTipWidget::minimumSizeHint();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual int heightForWidth(int param1) const override {
        if (ktooltipwidget_heightforwidth_isbase) {
            ktooltipwidget_heightforwidth_isbase = false;
            return KToolTipWidget::heightForWidth(param1);
        } else if (ktooltipwidget_heightforwidth_callback != nullptr) {
            int cbval1 = param1;

            int callback_ret = ktooltipwidget_heightforwidth_callback(this, cbval1);
            return static_cast<int>(callback_ret);
        } else {
            return KToolTipWidget::heightForWidth(param1);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool hasHeightForWidth() const override {
        if (ktooltipwidget_hasheightforwidth_isbase) {
            ktooltipwidget_hasheightforwidth_isbase = false;
            return KToolTipWidget::hasHeightForWidth();
        } else if (ktooltipwidget_hasheightforwidth_callback != nullptr) {
            bool callback_ret = ktooltipwidget_hasheightforwidth_callback();
            return callback_ret;
        } else {
            return KToolTipWidget::hasHeightForWidth();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QPaintEngine* paintEngine() const override {
        if (ktooltipwidget_paintengine_isbase) {
            ktooltipwidget_paintengine_isbase = false;
            return KToolTipWidget::paintEngine();
        } else if (ktooltipwidget_paintengine_callback != nullptr) {
            QPaintEngine* callback_ret = ktooltipwidget_paintengine_callback();
            return callback_ret;
        } else {
            return KToolTipWidget::paintEngine();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* event) override {
        if (ktooltipwidget_event_isbase) {
            ktooltipwidget_event_isbase = false;
            return KToolTipWidget::event(event);
        } else if (ktooltipwidget_event_callback != nullptr) {
            QEvent* cbval1 = event;

            bool callback_ret = ktooltipwidget_event_callback(this, cbval1);
            return callback_ret;
        } else {
            return KToolTipWidget::event(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void mousePressEvent(QMouseEvent* event) override {
        if (ktooltipwidget_mousepressevent_isbase) {
            ktooltipwidget_mousepressevent_isbase = false;
            KToolTipWidget::mousePressEvent(event);
        } else if (ktooltipwidget_mousepressevent_callback != nullptr) {
            QMouseEvent* cbval1 = event;

            ktooltipwidget_mousepressevent_callback(this, cbval1);
        } else {
            KToolTipWidget::mousePressEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseReleaseEvent(QMouseEvent* event) override {
        if (ktooltipwidget_mousereleaseevent_isbase) {
            ktooltipwidget_mousereleaseevent_isbase = false;
            KToolTipWidget::mouseReleaseEvent(event);
        } else if (ktooltipwidget_mousereleaseevent_callback != nullptr) {
            QMouseEvent* cbval1 = event;

            ktooltipwidget_mousereleaseevent_callback(this, cbval1);
        } else {
            KToolTipWidget::mouseReleaseEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseDoubleClickEvent(QMouseEvent* event) override {
        if (ktooltipwidget_mousedoubleclickevent_isbase) {
            ktooltipwidget_mousedoubleclickevent_isbase = false;
            KToolTipWidget::mouseDoubleClickEvent(event);
        } else if (ktooltipwidget_mousedoubleclickevent_callback != nullptr) {
            QMouseEvent* cbval1 = event;

            ktooltipwidget_mousedoubleclickevent_callback(this, cbval1);
        } else {
            KToolTipWidget::mouseDoubleClickEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseMoveEvent(QMouseEvent* event) override {
        if (ktooltipwidget_mousemoveevent_isbase) {
            ktooltipwidget_mousemoveevent_isbase = false;
            KToolTipWidget::mouseMoveEvent(event);
        } else if (ktooltipwidget_mousemoveevent_callback != nullptr) {
            QMouseEvent* cbval1 = event;

            ktooltipwidget_mousemoveevent_callback(this, cbval1);
        } else {
            KToolTipWidget::mouseMoveEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void wheelEvent(QWheelEvent* event) override {
        if (ktooltipwidget_wheelevent_isbase) {
            ktooltipwidget_wheelevent_isbase = false;
            KToolTipWidget::wheelEvent(event);
        } else if (ktooltipwidget_wheelevent_callback != nullptr) {
            QWheelEvent* cbval1 = event;

            ktooltipwidget_wheelevent_callback(this, cbval1);
        } else {
            KToolTipWidget::wheelEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void keyPressEvent(QKeyEvent* event) override {
        if (ktooltipwidget_keypressevent_isbase) {
            ktooltipwidget_keypressevent_isbase = false;
            KToolTipWidget::keyPressEvent(event);
        } else if (ktooltipwidget_keypressevent_callback != nullptr) {
            QKeyEvent* cbval1 = event;

            ktooltipwidget_keypressevent_callback(this, cbval1);
        } else {
            KToolTipWidget::keyPressEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void keyReleaseEvent(QKeyEvent* event) override {
        if (ktooltipwidget_keyreleaseevent_isbase) {
            ktooltipwidget_keyreleaseevent_isbase = false;
            KToolTipWidget::keyReleaseEvent(event);
        } else if (ktooltipwidget_keyreleaseevent_callback != nullptr) {
            QKeyEvent* cbval1 = event;

            ktooltipwidget_keyreleaseevent_callback(this, cbval1);
        } else {
            KToolTipWidget::keyReleaseEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void focusInEvent(QFocusEvent* event) override {
        if (ktooltipwidget_focusinevent_isbase) {
            ktooltipwidget_focusinevent_isbase = false;
            KToolTipWidget::focusInEvent(event);
        } else if (ktooltipwidget_focusinevent_callback != nullptr) {
            QFocusEvent* cbval1 = event;

            ktooltipwidget_focusinevent_callback(this, cbval1);
        } else {
            KToolTipWidget::focusInEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void focusOutEvent(QFocusEvent* event) override {
        if (ktooltipwidget_focusoutevent_isbase) {
            ktooltipwidget_focusoutevent_isbase = false;
            KToolTipWidget::focusOutEvent(event);
        } else if (ktooltipwidget_focusoutevent_callback != nullptr) {
            QFocusEvent* cbval1 = event;

            ktooltipwidget_focusoutevent_callback(this, cbval1);
        } else {
            KToolTipWidget::focusOutEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void moveEvent(QMoveEvent* event) override {
        if (ktooltipwidget_moveevent_isbase) {
            ktooltipwidget_moveevent_isbase = false;
            KToolTipWidget::moveEvent(event);
        } else if (ktooltipwidget_moveevent_callback != nullptr) {
            QMoveEvent* cbval1 = event;

            ktooltipwidget_moveevent_callback(this, cbval1);
        } else {
            KToolTipWidget::moveEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void resizeEvent(QResizeEvent* event) override {
        if (ktooltipwidget_resizeevent_isbase) {
            ktooltipwidget_resizeevent_isbase = false;
            KToolTipWidget::resizeEvent(event);
        } else if (ktooltipwidget_resizeevent_callback != nullptr) {
            QResizeEvent* cbval1 = event;

            ktooltipwidget_resizeevent_callback(this, cbval1);
        } else {
            KToolTipWidget::resizeEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void closeEvent(QCloseEvent* event) override {
        if (ktooltipwidget_closeevent_isbase) {
            ktooltipwidget_closeevent_isbase = false;
            KToolTipWidget::closeEvent(event);
        } else if (ktooltipwidget_closeevent_callback != nullptr) {
            QCloseEvent* cbval1 = event;

            ktooltipwidget_closeevent_callback(this, cbval1);
        } else {
            KToolTipWidget::closeEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void contextMenuEvent(QContextMenuEvent* event) override {
        if (ktooltipwidget_contextmenuevent_isbase) {
            ktooltipwidget_contextmenuevent_isbase = false;
            KToolTipWidget::contextMenuEvent(event);
        } else if (ktooltipwidget_contextmenuevent_callback != nullptr) {
            QContextMenuEvent* cbval1 = event;

            ktooltipwidget_contextmenuevent_callback(this, cbval1);
        } else {
            KToolTipWidget::contextMenuEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void tabletEvent(QTabletEvent* event) override {
        if (ktooltipwidget_tabletevent_isbase) {
            ktooltipwidget_tabletevent_isbase = false;
            KToolTipWidget::tabletEvent(event);
        } else if (ktooltipwidget_tabletevent_callback != nullptr) {
            QTabletEvent* cbval1 = event;

            ktooltipwidget_tabletevent_callback(this, cbval1);
        } else {
            KToolTipWidget::tabletEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void actionEvent(QActionEvent* event) override {
        if (ktooltipwidget_actionevent_isbase) {
            ktooltipwidget_actionevent_isbase = false;
            KToolTipWidget::actionEvent(event);
        } else if (ktooltipwidget_actionevent_callback != nullptr) {
            QActionEvent* cbval1 = event;

            ktooltipwidget_actionevent_callback(this, cbval1);
        } else {
            KToolTipWidget::actionEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragEnterEvent(QDragEnterEvent* event) override {
        if (ktooltipwidget_dragenterevent_isbase) {
            ktooltipwidget_dragenterevent_isbase = false;
            KToolTipWidget::dragEnterEvent(event);
        } else if (ktooltipwidget_dragenterevent_callback != nullptr) {
            QDragEnterEvent* cbval1 = event;

            ktooltipwidget_dragenterevent_callback(this, cbval1);
        } else {
            KToolTipWidget::dragEnterEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragMoveEvent(QDragMoveEvent* event) override {
        if (ktooltipwidget_dragmoveevent_isbase) {
            ktooltipwidget_dragmoveevent_isbase = false;
            KToolTipWidget::dragMoveEvent(event);
        } else if (ktooltipwidget_dragmoveevent_callback != nullptr) {
            QDragMoveEvent* cbval1 = event;

            ktooltipwidget_dragmoveevent_callback(this, cbval1);
        } else {
            KToolTipWidget::dragMoveEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragLeaveEvent(QDragLeaveEvent* event) override {
        if (ktooltipwidget_dragleaveevent_isbase) {
            ktooltipwidget_dragleaveevent_isbase = false;
            KToolTipWidget::dragLeaveEvent(event);
        } else if (ktooltipwidget_dragleaveevent_callback != nullptr) {
            QDragLeaveEvent* cbval1 = event;

            ktooltipwidget_dragleaveevent_callback(this, cbval1);
        } else {
            KToolTipWidget::dragLeaveEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void dropEvent(QDropEvent* event) override {
        if (ktooltipwidget_dropevent_isbase) {
            ktooltipwidget_dropevent_isbase = false;
            KToolTipWidget::dropEvent(event);
        } else if (ktooltipwidget_dropevent_callback != nullptr) {
            QDropEvent* cbval1 = event;

            ktooltipwidget_dropevent_callback(this, cbval1);
        } else {
            KToolTipWidget::dropEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void showEvent(QShowEvent* event) override {
        if (ktooltipwidget_showevent_isbase) {
            ktooltipwidget_showevent_isbase = false;
            KToolTipWidget::showEvent(event);
        } else if (ktooltipwidget_showevent_callback != nullptr) {
            QShowEvent* cbval1 = event;

            ktooltipwidget_showevent_callback(this, cbval1);
        } else {
            KToolTipWidget::showEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool nativeEvent(const QByteArray& eventType, void* message, qintptr* result) override {
        if (ktooltipwidget_nativeevent_isbase) {
            ktooltipwidget_nativeevent_isbase = false;
            return KToolTipWidget::nativeEvent(eventType, message, result);
        } else if (ktooltipwidget_nativeevent_callback != nullptr) {
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

            bool callback_ret = ktooltipwidget_nativeevent_callback(this, cbval1, cbval2, cbval3);
            return callback_ret;
        } else {
            return KToolTipWidget::nativeEvent(eventType, message, result);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void changeEvent(QEvent* param1) override {
        if (ktooltipwidget_changeevent_isbase) {
            ktooltipwidget_changeevent_isbase = false;
            KToolTipWidget::changeEvent(param1);
        } else if (ktooltipwidget_changeevent_callback != nullptr) {
            QEvent* cbval1 = param1;

            ktooltipwidget_changeevent_callback(this, cbval1);
        } else {
            KToolTipWidget::changeEvent(param1);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual int metric(QPaintDevice::PaintDeviceMetric param1) const override {
        if (ktooltipwidget_metric_isbase) {
            ktooltipwidget_metric_isbase = false;
            return KToolTipWidget::metric(param1);
        } else if (ktooltipwidget_metric_callback != nullptr) {
            int cbval1 = static_cast<int>(param1);

            int callback_ret = ktooltipwidget_metric_callback(this, cbval1);
            return static_cast<int>(callback_ret);
        } else {
            return KToolTipWidget::metric(param1);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void initPainter(QPainter* painter) const override {
        if (ktooltipwidget_initpainter_isbase) {
            ktooltipwidget_initpainter_isbase = false;
            KToolTipWidget::initPainter(painter);
        } else if (ktooltipwidget_initpainter_callback != nullptr) {
            QPainter* cbval1 = painter;

            ktooltipwidget_initpainter_callback(this, cbval1);
        } else {
            KToolTipWidget::initPainter(painter);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QPaintDevice* redirected(QPoint* offset) const override {
        if (ktooltipwidget_redirected_isbase) {
            ktooltipwidget_redirected_isbase = false;
            return KToolTipWidget::redirected(offset);
        } else if (ktooltipwidget_redirected_callback != nullptr) {
            QPoint* cbval1 = offset;

            QPaintDevice* callback_ret = ktooltipwidget_redirected_callback(this, cbval1);
            return callback_ret;
        } else {
            return KToolTipWidget::redirected(offset);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QPainter* sharedPainter() const override {
        if (ktooltipwidget_sharedpainter_isbase) {
            ktooltipwidget_sharedpainter_isbase = false;
            return KToolTipWidget::sharedPainter();
        } else if (ktooltipwidget_sharedpainter_callback != nullptr) {
            QPainter* callback_ret = ktooltipwidget_sharedpainter_callback();
            return callback_ret;
        } else {
            return KToolTipWidget::sharedPainter();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void inputMethodEvent(QInputMethodEvent* param1) override {
        if (ktooltipwidget_inputmethodevent_isbase) {
            ktooltipwidget_inputmethodevent_isbase = false;
            KToolTipWidget::inputMethodEvent(param1);
        } else if (ktooltipwidget_inputmethodevent_callback != nullptr) {
            QInputMethodEvent* cbval1 = param1;

            ktooltipwidget_inputmethodevent_callback(this, cbval1);
        } else {
            KToolTipWidget::inputMethodEvent(param1);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QVariant inputMethodQuery(Qt::InputMethodQuery param1) const override {
        if (ktooltipwidget_inputmethodquery_isbase) {
            ktooltipwidget_inputmethodquery_isbase = false;
            return KToolTipWidget::inputMethodQuery(param1);
        } else if (ktooltipwidget_inputmethodquery_callback != nullptr) {
            int cbval1 = static_cast<int>(param1);

            QVariant* callback_ret = ktooltipwidget_inputmethodquery_callback(this, cbval1);
            return *callback_ret;
        } else {
            return KToolTipWidget::inputMethodQuery(param1);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool focusNextPrevChild(bool next) override {
        if (ktooltipwidget_focusnextprevchild_isbase) {
            ktooltipwidget_focusnextprevchild_isbase = false;
            return KToolTipWidget::focusNextPrevChild(next);
        } else if (ktooltipwidget_focusnextprevchild_callback != nullptr) {
            bool cbval1 = next;

            bool callback_ret = ktooltipwidget_focusnextprevchild_callback(this, cbval1);
            return callback_ret;
        } else {
            return KToolTipWidget::focusNextPrevChild(next);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* watched, QEvent* event) override {
        if (ktooltipwidget_eventfilter_isbase) {
            ktooltipwidget_eventfilter_isbase = false;
            return KToolTipWidget::eventFilter(watched, event);
        } else if (ktooltipwidget_eventfilter_callback != nullptr) {
            QObject* cbval1 = watched;
            QEvent* cbval2 = event;

            bool callback_ret = ktooltipwidget_eventfilter_callback(this, cbval1, cbval2);
            return callback_ret;
        } else {
            return KToolTipWidget::eventFilter(watched, event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (ktooltipwidget_timerevent_isbase) {
            ktooltipwidget_timerevent_isbase = false;
            KToolTipWidget::timerEvent(event);
        } else if (ktooltipwidget_timerevent_callback != nullptr) {
            QTimerEvent* cbval1 = event;

            ktooltipwidget_timerevent_callback(this, cbval1);
        } else {
            KToolTipWidget::timerEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (ktooltipwidget_childevent_isbase) {
            ktooltipwidget_childevent_isbase = false;
            KToolTipWidget::childEvent(event);
        } else if (ktooltipwidget_childevent_callback != nullptr) {
            QChildEvent* cbval1 = event;

            ktooltipwidget_childevent_callback(this, cbval1);
        } else {
            KToolTipWidget::childEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (ktooltipwidget_customevent_isbase) {
            ktooltipwidget_customevent_isbase = false;
            KToolTipWidget::customEvent(event);
        } else if (ktooltipwidget_customevent_callback != nullptr) {
            QEvent* cbval1 = event;

            ktooltipwidget_customevent_callback(this, cbval1);
        } else {
            KToolTipWidget::customEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (ktooltipwidget_connectnotify_isbase) {
            ktooltipwidget_connectnotify_isbase = false;
            KToolTipWidget::connectNotify(signal);
        } else if (ktooltipwidget_connectnotify_callback != nullptr) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            ktooltipwidget_connectnotify_callback(this, cbval1);
        } else {
            KToolTipWidget::connectNotify(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (ktooltipwidget_disconnectnotify_isbase) {
            ktooltipwidget_disconnectnotify_isbase = false;
            KToolTipWidget::disconnectNotify(signal);
        } else if (ktooltipwidget_disconnectnotify_callback != nullptr) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            ktooltipwidget_disconnectnotify_callback(this, cbval1);
        } else {
            KToolTipWidget::disconnectNotify(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    void updateMicroFocus() {
        if (ktooltipwidget_updatemicrofocus_isbase) {
            ktooltipwidget_updatemicrofocus_isbase = false;
            KToolTipWidget::updateMicroFocus();
        } else if (ktooltipwidget_updatemicrofocus_callback != nullptr) {
            ktooltipwidget_updatemicrofocus_callback();
        } else {
            KToolTipWidget::updateMicroFocus();
        }
    }

    // Virtual method for C ABI access and custom callback
    void create() {
        if (ktooltipwidget_create_isbase) {
            ktooltipwidget_create_isbase = false;
            KToolTipWidget::create();
        } else if (ktooltipwidget_create_callback != nullptr) {
            ktooltipwidget_create_callback();
        } else {
            KToolTipWidget::create();
        }
    }

    // Virtual method for C ABI access and custom callback
    void destroy() {
        if (ktooltipwidget_destroy_isbase) {
            ktooltipwidget_destroy_isbase = false;
            KToolTipWidget::destroy();
        } else if (ktooltipwidget_destroy_callback != nullptr) {
            ktooltipwidget_destroy_callback();
        } else {
            KToolTipWidget::destroy();
        }
    }

    // Virtual method for C ABI access and custom callback
    bool focusNextChild() {
        if (ktooltipwidget_focusnextchild_isbase) {
            ktooltipwidget_focusnextchild_isbase = false;
            return KToolTipWidget::focusNextChild();
        } else if (ktooltipwidget_focusnextchild_callback != nullptr) {
            bool callback_ret = ktooltipwidget_focusnextchild_callback();
            return callback_ret;
        } else {
            return KToolTipWidget::focusNextChild();
        }
    }

    // Virtual method for C ABI access and custom callback
    bool focusPreviousChild() {
        if (ktooltipwidget_focuspreviouschild_isbase) {
            ktooltipwidget_focuspreviouschild_isbase = false;
            return KToolTipWidget::focusPreviousChild();
        } else if (ktooltipwidget_focuspreviouschild_callback != nullptr) {
            bool callback_ret = ktooltipwidget_focuspreviouschild_callback();
            return callback_ret;
        } else {
            return KToolTipWidget::focusPreviousChild();
        }
    }

    // Virtual method for C ABI access and custom callback
    QObject* sender() const {
        if (ktooltipwidget_sender_isbase) {
            ktooltipwidget_sender_isbase = false;
            return KToolTipWidget::sender();
        } else if (ktooltipwidget_sender_callback != nullptr) {
            QObject* callback_ret = ktooltipwidget_sender_callback();
            return callback_ret;
        } else {
            return KToolTipWidget::sender();
        }
    }

    // Virtual method for C ABI access and custom callback
    int senderSignalIndex() const {
        if (ktooltipwidget_sendersignalindex_isbase) {
            ktooltipwidget_sendersignalindex_isbase = false;
            return KToolTipWidget::senderSignalIndex();
        } else if (ktooltipwidget_sendersignalindex_callback != nullptr) {
            int callback_ret = ktooltipwidget_sendersignalindex_callback();
            return static_cast<int>(callback_ret);
        } else {
            return KToolTipWidget::senderSignalIndex();
        }
    }

    // Virtual method for C ABI access and custom callback
    int receivers(const char* signal) const {
        if (ktooltipwidget_receivers_isbase) {
            ktooltipwidget_receivers_isbase = false;
            return KToolTipWidget::receivers(signal);
        } else if (ktooltipwidget_receivers_callback != nullptr) {
            const char* cbval1 = (const char*)signal;

            int callback_ret = ktooltipwidget_receivers_callback(this, cbval1);
            return static_cast<int>(callback_ret);
        } else {
            return KToolTipWidget::receivers(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    bool isSignalConnected(const QMetaMethod& signal) const {
        if (ktooltipwidget_issignalconnected_isbase) {
            ktooltipwidget_issignalconnected_isbase = false;
            return KToolTipWidget::isSignalConnected(signal);
        } else if (ktooltipwidget_issignalconnected_callback != nullptr) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            bool callback_ret = ktooltipwidget_issignalconnected_callback(this, cbval1);
            return callback_ret;
        } else {
            return KToolTipWidget::isSignalConnected(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    double getDecodedMetricF(QPaintDevice::PaintDeviceMetric metricA, QPaintDevice::PaintDeviceMetric metricB) const {
        if (ktooltipwidget_getdecodedmetricf_isbase) {
            ktooltipwidget_getdecodedmetricf_isbase = false;
            return KToolTipWidget::getDecodedMetricF(metricA, metricB);
        } else if (ktooltipwidget_getdecodedmetricf_callback != nullptr) {
            int cbval1 = static_cast<int>(metricA);
            int cbval2 = static_cast<int>(metricB);

            double callback_ret = ktooltipwidget_getdecodedmetricf_callback(this, cbval1, cbval2);
            return static_cast<double>(callback_ret);
        } else {
            return KToolTipWidget::getDecodedMetricF(metricA, metricB);
        }
    }

    // Friend functions
    friend void KToolTipWidget_EnterEvent(KToolTipWidget* self, QEnterEvent* event);
    friend void KToolTipWidget_QBaseEnterEvent(KToolTipWidget* self, QEnterEvent* event);
    friend void KToolTipWidget_HideEvent(KToolTipWidget* self, QHideEvent* param1);
    friend void KToolTipWidget_QBaseHideEvent(KToolTipWidget* self, QHideEvent* param1);
    friend void KToolTipWidget_LeaveEvent(KToolTipWidget* self, QEvent* param1);
    friend void KToolTipWidget_QBaseLeaveEvent(KToolTipWidget* self, QEvent* param1);
    friend void KToolTipWidget_PaintEvent(KToolTipWidget* self, QPaintEvent* event);
    friend void KToolTipWidget_QBasePaintEvent(KToolTipWidget* self, QPaintEvent* event);
    friend bool KToolTipWidget_Event(KToolTipWidget* self, QEvent* event);
    friend bool KToolTipWidget_QBaseEvent(KToolTipWidget* self, QEvent* event);
    friend void KToolTipWidget_MousePressEvent(KToolTipWidget* self, QMouseEvent* event);
    friend void KToolTipWidget_QBaseMousePressEvent(KToolTipWidget* self, QMouseEvent* event);
    friend void KToolTipWidget_MouseReleaseEvent(KToolTipWidget* self, QMouseEvent* event);
    friend void KToolTipWidget_QBaseMouseReleaseEvent(KToolTipWidget* self, QMouseEvent* event);
    friend void KToolTipWidget_MouseDoubleClickEvent(KToolTipWidget* self, QMouseEvent* event);
    friend void KToolTipWidget_QBaseMouseDoubleClickEvent(KToolTipWidget* self, QMouseEvent* event);
    friend void KToolTipWidget_MouseMoveEvent(KToolTipWidget* self, QMouseEvent* event);
    friend void KToolTipWidget_QBaseMouseMoveEvent(KToolTipWidget* self, QMouseEvent* event);
    friend void KToolTipWidget_WheelEvent(KToolTipWidget* self, QWheelEvent* event);
    friend void KToolTipWidget_QBaseWheelEvent(KToolTipWidget* self, QWheelEvent* event);
    friend void KToolTipWidget_KeyPressEvent(KToolTipWidget* self, QKeyEvent* event);
    friend void KToolTipWidget_QBaseKeyPressEvent(KToolTipWidget* self, QKeyEvent* event);
    friend void KToolTipWidget_KeyReleaseEvent(KToolTipWidget* self, QKeyEvent* event);
    friend void KToolTipWidget_QBaseKeyReleaseEvent(KToolTipWidget* self, QKeyEvent* event);
    friend void KToolTipWidget_FocusInEvent(KToolTipWidget* self, QFocusEvent* event);
    friend void KToolTipWidget_QBaseFocusInEvent(KToolTipWidget* self, QFocusEvent* event);
    friend void KToolTipWidget_FocusOutEvent(KToolTipWidget* self, QFocusEvent* event);
    friend void KToolTipWidget_QBaseFocusOutEvent(KToolTipWidget* self, QFocusEvent* event);
    friend void KToolTipWidget_MoveEvent(KToolTipWidget* self, QMoveEvent* event);
    friend void KToolTipWidget_QBaseMoveEvent(KToolTipWidget* self, QMoveEvent* event);
    friend void KToolTipWidget_ResizeEvent(KToolTipWidget* self, QResizeEvent* event);
    friend void KToolTipWidget_QBaseResizeEvent(KToolTipWidget* self, QResizeEvent* event);
    friend void KToolTipWidget_CloseEvent(KToolTipWidget* self, QCloseEvent* event);
    friend void KToolTipWidget_QBaseCloseEvent(KToolTipWidget* self, QCloseEvent* event);
    friend void KToolTipWidget_ContextMenuEvent(KToolTipWidget* self, QContextMenuEvent* event);
    friend void KToolTipWidget_QBaseContextMenuEvent(KToolTipWidget* self, QContextMenuEvent* event);
    friend void KToolTipWidget_TabletEvent(KToolTipWidget* self, QTabletEvent* event);
    friend void KToolTipWidget_QBaseTabletEvent(KToolTipWidget* self, QTabletEvent* event);
    friend void KToolTipWidget_ActionEvent(KToolTipWidget* self, QActionEvent* event);
    friend void KToolTipWidget_QBaseActionEvent(KToolTipWidget* self, QActionEvent* event);
    friend void KToolTipWidget_DragEnterEvent(KToolTipWidget* self, QDragEnterEvent* event);
    friend void KToolTipWidget_QBaseDragEnterEvent(KToolTipWidget* self, QDragEnterEvent* event);
    friend void KToolTipWidget_DragMoveEvent(KToolTipWidget* self, QDragMoveEvent* event);
    friend void KToolTipWidget_QBaseDragMoveEvent(KToolTipWidget* self, QDragMoveEvent* event);
    friend void KToolTipWidget_DragLeaveEvent(KToolTipWidget* self, QDragLeaveEvent* event);
    friend void KToolTipWidget_QBaseDragLeaveEvent(KToolTipWidget* self, QDragLeaveEvent* event);
    friend void KToolTipWidget_DropEvent(KToolTipWidget* self, QDropEvent* event);
    friend void KToolTipWidget_QBaseDropEvent(KToolTipWidget* self, QDropEvent* event);
    friend void KToolTipWidget_ShowEvent(KToolTipWidget* self, QShowEvent* event);
    friend void KToolTipWidget_QBaseShowEvent(KToolTipWidget* self, QShowEvent* event);
    friend bool KToolTipWidget_NativeEvent(KToolTipWidget* self, const libqt_string eventType, void* message, intptr_t* result);
    friend bool KToolTipWidget_QBaseNativeEvent(KToolTipWidget* self, const libqt_string eventType, void* message, intptr_t* result);
    friend void KToolTipWidget_ChangeEvent(KToolTipWidget* self, QEvent* param1);
    friend void KToolTipWidget_QBaseChangeEvent(KToolTipWidget* self, QEvent* param1);
    friend int KToolTipWidget_Metric(const KToolTipWidget* self, int param1);
    friend int KToolTipWidget_QBaseMetric(const KToolTipWidget* self, int param1);
    friend void KToolTipWidget_InitPainter(const KToolTipWidget* self, QPainter* painter);
    friend void KToolTipWidget_QBaseInitPainter(const KToolTipWidget* self, QPainter* painter);
    friend QPaintDevice* KToolTipWidget_Redirected(const KToolTipWidget* self, QPoint* offset);
    friend QPaintDevice* KToolTipWidget_QBaseRedirected(const KToolTipWidget* self, QPoint* offset);
    friend QPainter* KToolTipWidget_SharedPainter(const KToolTipWidget* self);
    friend QPainter* KToolTipWidget_QBaseSharedPainter(const KToolTipWidget* self);
    friend void KToolTipWidget_InputMethodEvent(KToolTipWidget* self, QInputMethodEvent* param1);
    friend void KToolTipWidget_QBaseInputMethodEvent(KToolTipWidget* self, QInputMethodEvent* param1);
    friend bool KToolTipWidget_FocusNextPrevChild(KToolTipWidget* self, bool next);
    friend bool KToolTipWidget_QBaseFocusNextPrevChild(KToolTipWidget* self, bool next);
    friend void KToolTipWidget_TimerEvent(KToolTipWidget* self, QTimerEvent* event);
    friend void KToolTipWidget_QBaseTimerEvent(KToolTipWidget* self, QTimerEvent* event);
    friend void KToolTipWidget_ChildEvent(KToolTipWidget* self, QChildEvent* event);
    friend void KToolTipWidget_QBaseChildEvent(KToolTipWidget* self, QChildEvent* event);
    friend void KToolTipWidget_CustomEvent(KToolTipWidget* self, QEvent* event);
    friend void KToolTipWidget_QBaseCustomEvent(KToolTipWidget* self, QEvent* event);
    friend void KToolTipWidget_ConnectNotify(KToolTipWidget* self, const QMetaMethod* signal);
    friend void KToolTipWidget_QBaseConnectNotify(KToolTipWidget* self, const QMetaMethod* signal);
    friend void KToolTipWidget_DisconnectNotify(KToolTipWidget* self, const QMetaMethod* signal);
    friend void KToolTipWidget_QBaseDisconnectNotify(KToolTipWidget* self, const QMetaMethod* signal);
    friend void KToolTipWidget_UpdateMicroFocus(KToolTipWidget* self);
    friend void KToolTipWidget_QBaseUpdateMicroFocus(KToolTipWidget* self);
    friend void KToolTipWidget_Create(KToolTipWidget* self);
    friend void KToolTipWidget_QBaseCreate(KToolTipWidget* self);
    friend void KToolTipWidget_Destroy(KToolTipWidget* self);
    friend void KToolTipWidget_QBaseDestroy(KToolTipWidget* self);
    friend bool KToolTipWidget_FocusNextChild(KToolTipWidget* self);
    friend bool KToolTipWidget_QBaseFocusNextChild(KToolTipWidget* self);
    friend bool KToolTipWidget_FocusPreviousChild(KToolTipWidget* self);
    friend bool KToolTipWidget_QBaseFocusPreviousChild(KToolTipWidget* self);
    friend QObject* KToolTipWidget_Sender(const KToolTipWidget* self);
    friend QObject* KToolTipWidget_QBaseSender(const KToolTipWidget* self);
    friend int KToolTipWidget_SenderSignalIndex(const KToolTipWidget* self);
    friend int KToolTipWidget_QBaseSenderSignalIndex(const KToolTipWidget* self);
    friend int KToolTipWidget_Receivers(const KToolTipWidget* self, const char* signal);
    friend int KToolTipWidget_QBaseReceivers(const KToolTipWidget* self, const char* signal);
    friend bool KToolTipWidget_IsSignalConnected(const KToolTipWidget* self, const QMetaMethod* signal);
    friend bool KToolTipWidget_QBaseIsSignalConnected(const KToolTipWidget* self, const QMetaMethod* signal);
    friend double KToolTipWidget_GetDecodedMetricF(const KToolTipWidget* self, int metricA, int metricB);
    friend double KToolTipWidget_QBaseGetDecodedMetricF(const KToolTipWidget* self, int metricA, int metricB);
};

#endif
