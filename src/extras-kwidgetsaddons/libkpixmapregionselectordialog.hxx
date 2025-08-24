#pragma once
#ifndef SRC_EXTRAS_KWIDGETSADDONSC_LIBVIRTUALKPIXMAPREGIONSELECTORDIALOG_H
#define SRC_EXTRAS_KWIDGETSADDONSC_LIBVIRTUALKPIXMAPREGIONSELECTORDIALOG_H

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

// This class is a subclass of KPixmapRegionSelectorDialog so that we can call protected methods
class VirtualKPixmapRegionSelectorDialog final : public KPixmapRegionSelectorDialog {

  public:
    // Virtual class boolean flag
    bool isVirtualKPixmapRegionSelectorDialog = true;

    // Virtual class public types (including callbacks)
    using KPixmapRegionSelectorDialog_Metacall_Callback = int (*)(KPixmapRegionSelectorDialog*, int, int, void**);
    using KPixmapRegionSelectorDialog_SetVisible_Callback = void (*)(KPixmapRegionSelectorDialog*, bool);
    using KPixmapRegionSelectorDialog_SizeHint_Callback = QSize* (*)();
    using KPixmapRegionSelectorDialog_MinimumSizeHint_Callback = QSize* (*)();
    using KPixmapRegionSelectorDialog_Open_Callback = void (*)();
    using KPixmapRegionSelectorDialog_Exec_Callback = int (*)();
    using KPixmapRegionSelectorDialog_Done_Callback = void (*)(KPixmapRegionSelectorDialog*, int);
    using KPixmapRegionSelectorDialog_Accept_Callback = void (*)();
    using KPixmapRegionSelectorDialog_Reject_Callback = void (*)();
    using KPixmapRegionSelectorDialog_KeyPressEvent_Callback = void (*)(KPixmapRegionSelectorDialog*, QKeyEvent*);
    using KPixmapRegionSelectorDialog_CloseEvent_Callback = void (*)(KPixmapRegionSelectorDialog*, QCloseEvent*);
    using KPixmapRegionSelectorDialog_ShowEvent_Callback = void (*)(KPixmapRegionSelectorDialog*, QShowEvent*);
    using KPixmapRegionSelectorDialog_ResizeEvent_Callback = void (*)(KPixmapRegionSelectorDialog*, QResizeEvent*);
    using KPixmapRegionSelectorDialog_ContextMenuEvent_Callback = void (*)(KPixmapRegionSelectorDialog*, QContextMenuEvent*);
    using KPixmapRegionSelectorDialog_EventFilter_Callback = bool (*)(KPixmapRegionSelectorDialog*, QObject*, QEvent*);
    using KPixmapRegionSelectorDialog_DevType_Callback = int (*)();
    using KPixmapRegionSelectorDialog_HeightForWidth_Callback = int (*)(const KPixmapRegionSelectorDialog*, int);
    using KPixmapRegionSelectorDialog_HasHeightForWidth_Callback = bool (*)();
    using KPixmapRegionSelectorDialog_PaintEngine_Callback = QPaintEngine* (*)();
    using KPixmapRegionSelectorDialog_Event_Callback = bool (*)(KPixmapRegionSelectorDialog*, QEvent*);
    using KPixmapRegionSelectorDialog_MousePressEvent_Callback = void (*)(KPixmapRegionSelectorDialog*, QMouseEvent*);
    using KPixmapRegionSelectorDialog_MouseReleaseEvent_Callback = void (*)(KPixmapRegionSelectorDialog*, QMouseEvent*);
    using KPixmapRegionSelectorDialog_MouseDoubleClickEvent_Callback = void (*)(KPixmapRegionSelectorDialog*, QMouseEvent*);
    using KPixmapRegionSelectorDialog_MouseMoveEvent_Callback = void (*)(KPixmapRegionSelectorDialog*, QMouseEvent*);
    using KPixmapRegionSelectorDialog_WheelEvent_Callback = void (*)(KPixmapRegionSelectorDialog*, QWheelEvent*);
    using KPixmapRegionSelectorDialog_KeyReleaseEvent_Callback = void (*)(KPixmapRegionSelectorDialog*, QKeyEvent*);
    using KPixmapRegionSelectorDialog_FocusInEvent_Callback = void (*)(KPixmapRegionSelectorDialog*, QFocusEvent*);
    using KPixmapRegionSelectorDialog_FocusOutEvent_Callback = void (*)(KPixmapRegionSelectorDialog*, QFocusEvent*);
    using KPixmapRegionSelectorDialog_EnterEvent_Callback = void (*)(KPixmapRegionSelectorDialog*, QEnterEvent*);
    using KPixmapRegionSelectorDialog_LeaveEvent_Callback = void (*)(KPixmapRegionSelectorDialog*, QEvent*);
    using KPixmapRegionSelectorDialog_PaintEvent_Callback = void (*)(KPixmapRegionSelectorDialog*, QPaintEvent*);
    using KPixmapRegionSelectorDialog_MoveEvent_Callback = void (*)(KPixmapRegionSelectorDialog*, QMoveEvent*);
    using KPixmapRegionSelectorDialog_TabletEvent_Callback = void (*)(KPixmapRegionSelectorDialog*, QTabletEvent*);
    using KPixmapRegionSelectorDialog_ActionEvent_Callback = void (*)(KPixmapRegionSelectorDialog*, QActionEvent*);
    using KPixmapRegionSelectorDialog_DragEnterEvent_Callback = void (*)(KPixmapRegionSelectorDialog*, QDragEnterEvent*);
    using KPixmapRegionSelectorDialog_DragMoveEvent_Callback = void (*)(KPixmapRegionSelectorDialog*, QDragMoveEvent*);
    using KPixmapRegionSelectorDialog_DragLeaveEvent_Callback = void (*)(KPixmapRegionSelectorDialog*, QDragLeaveEvent*);
    using KPixmapRegionSelectorDialog_DropEvent_Callback = void (*)(KPixmapRegionSelectorDialog*, QDropEvent*);
    using KPixmapRegionSelectorDialog_HideEvent_Callback = void (*)(KPixmapRegionSelectorDialog*, QHideEvent*);
    using KPixmapRegionSelectorDialog_NativeEvent_Callback = bool (*)(KPixmapRegionSelectorDialog*, libqt_string, void*, intptr_t*);
    using KPixmapRegionSelectorDialog_ChangeEvent_Callback = void (*)(KPixmapRegionSelectorDialog*, QEvent*);
    using KPixmapRegionSelectorDialog_Metric_Callback = int (*)(const KPixmapRegionSelectorDialog*, int);
    using KPixmapRegionSelectorDialog_InitPainter_Callback = void (*)(const KPixmapRegionSelectorDialog*, QPainter*);
    using KPixmapRegionSelectorDialog_Redirected_Callback = QPaintDevice* (*)(const KPixmapRegionSelectorDialog*, QPoint*);
    using KPixmapRegionSelectorDialog_SharedPainter_Callback = QPainter* (*)();
    using KPixmapRegionSelectorDialog_InputMethodEvent_Callback = void (*)(KPixmapRegionSelectorDialog*, QInputMethodEvent*);
    using KPixmapRegionSelectorDialog_InputMethodQuery_Callback = QVariant* (*)(const KPixmapRegionSelectorDialog*, int);
    using KPixmapRegionSelectorDialog_FocusNextPrevChild_Callback = bool (*)(KPixmapRegionSelectorDialog*, bool);
    using KPixmapRegionSelectorDialog_TimerEvent_Callback = void (*)(KPixmapRegionSelectorDialog*, QTimerEvent*);
    using KPixmapRegionSelectorDialog_ChildEvent_Callback = void (*)(KPixmapRegionSelectorDialog*, QChildEvent*);
    using KPixmapRegionSelectorDialog_CustomEvent_Callback = void (*)(KPixmapRegionSelectorDialog*, QEvent*);
    using KPixmapRegionSelectorDialog_ConnectNotify_Callback = void (*)(KPixmapRegionSelectorDialog*, QMetaMethod*);
    using KPixmapRegionSelectorDialog_DisconnectNotify_Callback = void (*)(KPixmapRegionSelectorDialog*, QMetaMethod*);
    using KPixmapRegionSelectorDialog_AdjustPosition_Callback = void (*)(KPixmapRegionSelectorDialog*, QWidget*);
    using KPixmapRegionSelectorDialog_UpdateMicroFocus_Callback = void (*)();
    using KPixmapRegionSelectorDialog_Create_Callback = void (*)();
    using KPixmapRegionSelectorDialog_Destroy_Callback = void (*)();
    using KPixmapRegionSelectorDialog_FocusNextChild_Callback = bool (*)();
    using KPixmapRegionSelectorDialog_FocusPreviousChild_Callback = bool (*)();
    using KPixmapRegionSelectorDialog_Sender_Callback = QObject* (*)();
    using KPixmapRegionSelectorDialog_SenderSignalIndex_Callback = int (*)();
    using KPixmapRegionSelectorDialog_Receivers_Callback = int (*)(const KPixmapRegionSelectorDialog*, const char*);
    using KPixmapRegionSelectorDialog_IsSignalConnected_Callback = bool (*)(const KPixmapRegionSelectorDialog*, QMetaMethod*);
    using KPixmapRegionSelectorDialog_GetDecodedMetricF_Callback = double (*)(const KPixmapRegionSelectorDialog*, int, int);

  protected:
    // Instance callback storage
    KPixmapRegionSelectorDialog_Metacall_Callback kpixmapregionselectordialog_metacall_callback = nullptr;
    KPixmapRegionSelectorDialog_SetVisible_Callback kpixmapregionselectordialog_setvisible_callback = nullptr;
    KPixmapRegionSelectorDialog_SizeHint_Callback kpixmapregionselectordialog_sizehint_callback = nullptr;
    KPixmapRegionSelectorDialog_MinimumSizeHint_Callback kpixmapregionselectordialog_minimumsizehint_callback = nullptr;
    KPixmapRegionSelectorDialog_Open_Callback kpixmapregionselectordialog_open_callback = nullptr;
    KPixmapRegionSelectorDialog_Exec_Callback kpixmapregionselectordialog_exec_callback = nullptr;
    KPixmapRegionSelectorDialog_Done_Callback kpixmapregionselectordialog_done_callback = nullptr;
    KPixmapRegionSelectorDialog_Accept_Callback kpixmapregionselectordialog_accept_callback = nullptr;
    KPixmapRegionSelectorDialog_Reject_Callback kpixmapregionselectordialog_reject_callback = nullptr;
    KPixmapRegionSelectorDialog_KeyPressEvent_Callback kpixmapregionselectordialog_keypressevent_callback = nullptr;
    KPixmapRegionSelectorDialog_CloseEvent_Callback kpixmapregionselectordialog_closeevent_callback = nullptr;
    KPixmapRegionSelectorDialog_ShowEvent_Callback kpixmapregionselectordialog_showevent_callback = nullptr;
    KPixmapRegionSelectorDialog_ResizeEvent_Callback kpixmapregionselectordialog_resizeevent_callback = nullptr;
    KPixmapRegionSelectorDialog_ContextMenuEvent_Callback kpixmapregionselectordialog_contextmenuevent_callback = nullptr;
    KPixmapRegionSelectorDialog_EventFilter_Callback kpixmapregionselectordialog_eventfilter_callback = nullptr;
    KPixmapRegionSelectorDialog_DevType_Callback kpixmapregionselectordialog_devtype_callback = nullptr;
    KPixmapRegionSelectorDialog_HeightForWidth_Callback kpixmapregionselectordialog_heightforwidth_callback = nullptr;
    KPixmapRegionSelectorDialog_HasHeightForWidth_Callback kpixmapregionselectordialog_hasheightforwidth_callback = nullptr;
    KPixmapRegionSelectorDialog_PaintEngine_Callback kpixmapregionselectordialog_paintengine_callback = nullptr;
    KPixmapRegionSelectorDialog_Event_Callback kpixmapregionselectordialog_event_callback = nullptr;
    KPixmapRegionSelectorDialog_MousePressEvent_Callback kpixmapregionselectordialog_mousepressevent_callback = nullptr;
    KPixmapRegionSelectorDialog_MouseReleaseEvent_Callback kpixmapregionselectordialog_mousereleaseevent_callback = nullptr;
    KPixmapRegionSelectorDialog_MouseDoubleClickEvent_Callback kpixmapregionselectordialog_mousedoubleclickevent_callback = nullptr;
    KPixmapRegionSelectorDialog_MouseMoveEvent_Callback kpixmapregionselectordialog_mousemoveevent_callback = nullptr;
    KPixmapRegionSelectorDialog_WheelEvent_Callback kpixmapregionselectordialog_wheelevent_callback = nullptr;
    KPixmapRegionSelectorDialog_KeyReleaseEvent_Callback kpixmapregionselectordialog_keyreleaseevent_callback = nullptr;
    KPixmapRegionSelectorDialog_FocusInEvent_Callback kpixmapregionselectordialog_focusinevent_callback = nullptr;
    KPixmapRegionSelectorDialog_FocusOutEvent_Callback kpixmapregionselectordialog_focusoutevent_callback = nullptr;
    KPixmapRegionSelectorDialog_EnterEvent_Callback kpixmapregionselectordialog_enterevent_callback = nullptr;
    KPixmapRegionSelectorDialog_LeaveEvent_Callback kpixmapregionselectordialog_leaveevent_callback = nullptr;
    KPixmapRegionSelectorDialog_PaintEvent_Callback kpixmapregionselectordialog_paintevent_callback = nullptr;
    KPixmapRegionSelectorDialog_MoveEvent_Callback kpixmapregionselectordialog_moveevent_callback = nullptr;
    KPixmapRegionSelectorDialog_TabletEvent_Callback kpixmapregionselectordialog_tabletevent_callback = nullptr;
    KPixmapRegionSelectorDialog_ActionEvent_Callback kpixmapregionselectordialog_actionevent_callback = nullptr;
    KPixmapRegionSelectorDialog_DragEnterEvent_Callback kpixmapregionselectordialog_dragenterevent_callback = nullptr;
    KPixmapRegionSelectorDialog_DragMoveEvent_Callback kpixmapregionselectordialog_dragmoveevent_callback = nullptr;
    KPixmapRegionSelectorDialog_DragLeaveEvent_Callback kpixmapregionselectordialog_dragleaveevent_callback = nullptr;
    KPixmapRegionSelectorDialog_DropEvent_Callback kpixmapregionselectordialog_dropevent_callback = nullptr;
    KPixmapRegionSelectorDialog_HideEvent_Callback kpixmapregionselectordialog_hideevent_callback = nullptr;
    KPixmapRegionSelectorDialog_NativeEvent_Callback kpixmapregionselectordialog_nativeevent_callback = nullptr;
    KPixmapRegionSelectorDialog_ChangeEvent_Callback kpixmapregionselectordialog_changeevent_callback = nullptr;
    KPixmapRegionSelectorDialog_Metric_Callback kpixmapregionselectordialog_metric_callback = nullptr;
    KPixmapRegionSelectorDialog_InitPainter_Callback kpixmapregionselectordialog_initpainter_callback = nullptr;
    KPixmapRegionSelectorDialog_Redirected_Callback kpixmapregionselectordialog_redirected_callback = nullptr;
    KPixmapRegionSelectorDialog_SharedPainter_Callback kpixmapregionselectordialog_sharedpainter_callback = nullptr;
    KPixmapRegionSelectorDialog_InputMethodEvent_Callback kpixmapregionselectordialog_inputmethodevent_callback = nullptr;
    KPixmapRegionSelectorDialog_InputMethodQuery_Callback kpixmapregionselectordialog_inputmethodquery_callback = nullptr;
    KPixmapRegionSelectorDialog_FocusNextPrevChild_Callback kpixmapregionselectordialog_focusnextprevchild_callback = nullptr;
    KPixmapRegionSelectorDialog_TimerEvent_Callback kpixmapregionselectordialog_timerevent_callback = nullptr;
    KPixmapRegionSelectorDialog_ChildEvent_Callback kpixmapregionselectordialog_childevent_callback = nullptr;
    KPixmapRegionSelectorDialog_CustomEvent_Callback kpixmapregionselectordialog_customevent_callback = nullptr;
    KPixmapRegionSelectorDialog_ConnectNotify_Callback kpixmapregionselectordialog_connectnotify_callback = nullptr;
    KPixmapRegionSelectorDialog_DisconnectNotify_Callback kpixmapregionselectordialog_disconnectnotify_callback = nullptr;
    KPixmapRegionSelectorDialog_AdjustPosition_Callback kpixmapregionselectordialog_adjustposition_callback = nullptr;
    KPixmapRegionSelectorDialog_UpdateMicroFocus_Callback kpixmapregionselectordialog_updatemicrofocus_callback = nullptr;
    KPixmapRegionSelectorDialog_Create_Callback kpixmapregionselectordialog_create_callback = nullptr;
    KPixmapRegionSelectorDialog_Destroy_Callback kpixmapregionselectordialog_destroy_callback = nullptr;
    KPixmapRegionSelectorDialog_FocusNextChild_Callback kpixmapregionselectordialog_focusnextchild_callback = nullptr;
    KPixmapRegionSelectorDialog_FocusPreviousChild_Callback kpixmapregionselectordialog_focuspreviouschild_callback = nullptr;
    KPixmapRegionSelectorDialog_Sender_Callback kpixmapregionselectordialog_sender_callback = nullptr;
    KPixmapRegionSelectorDialog_SenderSignalIndex_Callback kpixmapregionselectordialog_sendersignalindex_callback = nullptr;
    KPixmapRegionSelectorDialog_Receivers_Callback kpixmapregionselectordialog_receivers_callback = nullptr;
    KPixmapRegionSelectorDialog_IsSignalConnected_Callback kpixmapregionselectordialog_issignalconnected_callback = nullptr;
    KPixmapRegionSelectorDialog_GetDecodedMetricF_Callback kpixmapregionselectordialog_getdecodedmetricf_callback = nullptr;

    // Instance base flags
    mutable bool kpixmapregionselectordialog_metacall_isbase = false;
    mutable bool kpixmapregionselectordialog_setvisible_isbase = false;
    mutable bool kpixmapregionselectordialog_sizehint_isbase = false;
    mutable bool kpixmapregionselectordialog_minimumsizehint_isbase = false;
    mutable bool kpixmapregionselectordialog_open_isbase = false;
    mutable bool kpixmapregionselectordialog_exec_isbase = false;
    mutable bool kpixmapregionselectordialog_done_isbase = false;
    mutable bool kpixmapregionselectordialog_accept_isbase = false;
    mutable bool kpixmapregionselectordialog_reject_isbase = false;
    mutable bool kpixmapregionselectordialog_keypressevent_isbase = false;
    mutable bool kpixmapregionselectordialog_closeevent_isbase = false;
    mutable bool kpixmapregionselectordialog_showevent_isbase = false;
    mutable bool kpixmapregionselectordialog_resizeevent_isbase = false;
    mutable bool kpixmapregionselectordialog_contextmenuevent_isbase = false;
    mutable bool kpixmapregionselectordialog_eventfilter_isbase = false;
    mutable bool kpixmapregionselectordialog_devtype_isbase = false;
    mutable bool kpixmapregionselectordialog_heightforwidth_isbase = false;
    mutable bool kpixmapregionselectordialog_hasheightforwidth_isbase = false;
    mutable bool kpixmapregionselectordialog_paintengine_isbase = false;
    mutable bool kpixmapregionselectordialog_event_isbase = false;
    mutable bool kpixmapregionselectordialog_mousepressevent_isbase = false;
    mutable bool kpixmapregionselectordialog_mousereleaseevent_isbase = false;
    mutable bool kpixmapregionselectordialog_mousedoubleclickevent_isbase = false;
    mutable bool kpixmapregionselectordialog_mousemoveevent_isbase = false;
    mutable bool kpixmapregionselectordialog_wheelevent_isbase = false;
    mutable bool kpixmapregionselectordialog_keyreleaseevent_isbase = false;
    mutable bool kpixmapregionselectordialog_focusinevent_isbase = false;
    mutable bool kpixmapregionselectordialog_focusoutevent_isbase = false;
    mutable bool kpixmapregionselectordialog_enterevent_isbase = false;
    mutable bool kpixmapregionselectordialog_leaveevent_isbase = false;
    mutable bool kpixmapregionselectordialog_paintevent_isbase = false;
    mutable bool kpixmapregionselectordialog_moveevent_isbase = false;
    mutable bool kpixmapregionselectordialog_tabletevent_isbase = false;
    mutable bool kpixmapregionselectordialog_actionevent_isbase = false;
    mutable bool kpixmapregionselectordialog_dragenterevent_isbase = false;
    mutable bool kpixmapregionselectordialog_dragmoveevent_isbase = false;
    mutable bool kpixmapregionselectordialog_dragleaveevent_isbase = false;
    mutable bool kpixmapregionselectordialog_dropevent_isbase = false;
    mutable bool kpixmapregionselectordialog_hideevent_isbase = false;
    mutable bool kpixmapregionselectordialog_nativeevent_isbase = false;
    mutable bool kpixmapregionselectordialog_changeevent_isbase = false;
    mutable bool kpixmapregionselectordialog_metric_isbase = false;
    mutable bool kpixmapregionselectordialog_initpainter_isbase = false;
    mutable bool kpixmapregionselectordialog_redirected_isbase = false;
    mutable bool kpixmapregionselectordialog_sharedpainter_isbase = false;
    mutable bool kpixmapregionselectordialog_inputmethodevent_isbase = false;
    mutable bool kpixmapregionselectordialog_inputmethodquery_isbase = false;
    mutable bool kpixmapregionselectordialog_focusnextprevchild_isbase = false;
    mutable bool kpixmapregionselectordialog_timerevent_isbase = false;
    mutable bool kpixmapregionselectordialog_childevent_isbase = false;
    mutable bool kpixmapregionselectordialog_customevent_isbase = false;
    mutable bool kpixmapregionselectordialog_connectnotify_isbase = false;
    mutable bool kpixmapregionselectordialog_disconnectnotify_isbase = false;
    mutable bool kpixmapregionselectordialog_adjustposition_isbase = false;
    mutable bool kpixmapregionselectordialog_updatemicrofocus_isbase = false;
    mutable bool kpixmapregionselectordialog_create_isbase = false;
    mutable bool kpixmapregionselectordialog_destroy_isbase = false;
    mutable bool kpixmapregionselectordialog_focusnextchild_isbase = false;
    mutable bool kpixmapregionselectordialog_focuspreviouschild_isbase = false;
    mutable bool kpixmapregionselectordialog_sender_isbase = false;
    mutable bool kpixmapregionselectordialog_sendersignalindex_isbase = false;
    mutable bool kpixmapregionselectordialog_receivers_isbase = false;
    mutable bool kpixmapregionselectordialog_issignalconnected_isbase = false;
    mutable bool kpixmapregionselectordialog_getdecodedmetricf_isbase = false;

  public:
    VirtualKPixmapRegionSelectorDialog(QWidget* parent) : KPixmapRegionSelectorDialog(parent) {};
    VirtualKPixmapRegionSelectorDialog() : KPixmapRegionSelectorDialog() {};

    ~VirtualKPixmapRegionSelectorDialog() {
        kpixmapregionselectordialog_metacall_callback = nullptr;
        kpixmapregionselectordialog_setvisible_callback = nullptr;
        kpixmapregionselectordialog_sizehint_callback = nullptr;
        kpixmapregionselectordialog_minimumsizehint_callback = nullptr;
        kpixmapregionselectordialog_open_callback = nullptr;
        kpixmapregionselectordialog_exec_callback = nullptr;
        kpixmapregionselectordialog_done_callback = nullptr;
        kpixmapregionselectordialog_accept_callback = nullptr;
        kpixmapregionselectordialog_reject_callback = nullptr;
        kpixmapregionselectordialog_keypressevent_callback = nullptr;
        kpixmapregionselectordialog_closeevent_callback = nullptr;
        kpixmapregionselectordialog_showevent_callback = nullptr;
        kpixmapregionselectordialog_resizeevent_callback = nullptr;
        kpixmapregionselectordialog_contextmenuevent_callback = nullptr;
        kpixmapregionselectordialog_eventfilter_callback = nullptr;
        kpixmapregionselectordialog_devtype_callback = nullptr;
        kpixmapregionselectordialog_heightforwidth_callback = nullptr;
        kpixmapregionselectordialog_hasheightforwidth_callback = nullptr;
        kpixmapregionselectordialog_paintengine_callback = nullptr;
        kpixmapregionselectordialog_event_callback = nullptr;
        kpixmapregionselectordialog_mousepressevent_callback = nullptr;
        kpixmapregionselectordialog_mousereleaseevent_callback = nullptr;
        kpixmapregionselectordialog_mousedoubleclickevent_callback = nullptr;
        kpixmapregionselectordialog_mousemoveevent_callback = nullptr;
        kpixmapregionselectordialog_wheelevent_callback = nullptr;
        kpixmapregionselectordialog_keyreleaseevent_callback = nullptr;
        kpixmapregionselectordialog_focusinevent_callback = nullptr;
        kpixmapregionselectordialog_focusoutevent_callback = nullptr;
        kpixmapregionselectordialog_enterevent_callback = nullptr;
        kpixmapregionselectordialog_leaveevent_callback = nullptr;
        kpixmapregionselectordialog_paintevent_callback = nullptr;
        kpixmapregionselectordialog_moveevent_callback = nullptr;
        kpixmapregionselectordialog_tabletevent_callback = nullptr;
        kpixmapregionselectordialog_actionevent_callback = nullptr;
        kpixmapregionselectordialog_dragenterevent_callback = nullptr;
        kpixmapregionselectordialog_dragmoveevent_callback = nullptr;
        kpixmapregionselectordialog_dragleaveevent_callback = nullptr;
        kpixmapregionselectordialog_dropevent_callback = nullptr;
        kpixmapregionselectordialog_hideevent_callback = nullptr;
        kpixmapregionselectordialog_nativeevent_callback = nullptr;
        kpixmapregionselectordialog_changeevent_callback = nullptr;
        kpixmapregionselectordialog_metric_callback = nullptr;
        kpixmapregionselectordialog_initpainter_callback = nullptr;
        kpixmapregionselectordialog_redirected_callback = nullptr;
        kpixmapregionselectordialog_sharedpainter_callback = nullptr;
        kpixmapregionselectordialog_inputmethodevent_callback = nullptr;
        kpixmapregionselectordialog_inputmethodquery_callback = nullptr;
        kpixmapregionselectordialog_focusnextprevchild_callback = nullptr;
        kpixmapregionselectordialog_timerevent_callback = nullptr;
        kpixmapregionselectordialog_childevent_callback = nullptr;
        kpixmapregionselectordialog_customevent_callback = nullptr;
        kpixmapregionselectordialog_connectnotify_callback = nullptr;
        kpixmapregionselectordialog_disconnectnotify_callback = nullptr;
        kpixmapregionselectordialog_adjustposition_callback = nullptr;
        kpixmapregionselectordialog_updatemicrofocus_callback = nullptr;
        kpixmapregionselectordialog_create_callback = nullptr;
        kpixmapregionselectordialog_destroy_callback = nullptr;
        kpixmapregionselectordialog_focusnextchild_callback = nullptr;
        kpixmapregionselectordialog_focuspreviouschild_callback = nullptr;
        kpixmapregionselectordialog_sender_callback = nullptr;
        kpixmapregionselectordialog_sendersignalindex_callback = nullptr;
        kpixmapregionselectordialog_receivers_callback = nullptr;
        kpixmapregionselectordialog_issignalconnected_callback = nullptr;
        kpixmapregionselectordialog_getdecodedmetricf_callback = nullptr;
    }

    // Callback setters
    inline void setKPixmapRegionSelectorDialog_Metacall_Callback(KPixmapRegionSelectorDialog_Metacall_Callback cb) { kpixmapregionselectordialog_metacall_callback = cb; }
    inline void setKPixmapRegionSelectorDialog_SetVisible_Callback(KPixmapRegionSelectorDialog_SetVisible_Callback cb) { kpixmapregionselectordialog_setvisible_callback = cb; }
    inline void setKPixmapRegionSelectorDialog_SizeHint_Callback(KPixmapRegionSelectorDialog_SizeHint_Callback cb) { kpixmapregionselectordialog_sizehint_callback = cb; }
    inline void setKPixmapRegionSelectorDialog_MinimumSizeHint_Callback(KPixmapRegionSelectorDialog_MinimumSizeHint_Callback cb) { kpixmapregionselectordialog_minimumsizehint_callback = cb; }
    inline void setKPixmapRegionSelectorDialog_Open_Callback(KPixmapRegionSelectorDialog_Open_Callback cb) { kpixmapregionselectordialog_open_callback = cb; }
    inline void setKPixmapRegionSelectorDialog_Exec_Callback(KPixmapRegionSelectorDialog_Exec_Callback cb) { kpixmapregionselectordialog_exec_callback = cb; }
    inline void setKPixmapRegionSelectorDialog_Done_Callback(KPixmapRegionSelectorDialog_Done_Callback cb) { kpixmapregionselectordialog_done_callback = cb; }
    inline void setKPixmapRegionSelectorDialog_Accept_Callback(KPixmapRegionSelectorDialog_Accept_Callback cb) { kpixmapregionselectordialog_accept_callback = cb; }
    inline void setKPixmapRegionSelectorDialog_Reject_Callback(KPixmapRegionSelectorDialog_Reject_Callback cb) { kpixmapregionselectordialog_reject_callback = cb; }
    inline void setKPixmapRegionSelectorDialog_KeyPressEvent_Callback(KPixmapRegionSelectorDialog_KeyPressEvent_Callback cb) { kpixmapregionselectordialog_keypressevent_callback = cb; }
    inline void setKPixmapRegionSelectorDialog_CloseEvent_Callback(KPixmapRegionSelectorDialog_CloseEvent_Callback cb) { kpixmapregionselectordialog_closeevent_callback = cb; }
    inline void setKPixmapRegionSelectorDialog_ShowEvent_Callback(KPixmapRegionSelectorDialog_ShowEvent_Callback cb) { kpixmapregionselectordialog_showevent_callback = cb; }
    inline void setKPixmapRegionSelectorDialog_ResizeEvent_Callback(KPixmapRegionSelectorDialog_ResizeEvent_Callback cb) { kpixmapregionselectordialog_resizeevent_callback = cb; }
    inline void setKPixmapRegionSelectorDialog_ContextMenuEvent_Callback(KPixmapRegionSelectorDialog_ContextMenuEvent_Callback cb) { kpixmapregionselectordialog_contextmenuevent_callback = cb; }
    inline void setKPixmapRegionSelectorDialog_EventFilter_Callback(KPixmapRegionSelectorDialog_EventFilter_Callback cb) { kpixmapregionselectordialog_eventfilter_callback = cb; }
    inline void setKPixmapRegionSelectorDialog_DevType_Callback(KPixmapRegionSelectorDialog_DevType_Callback cb) { kpixmapregionselectordialog_devtype_callback = cb; }
    inline void setKPixmapRegionSelectorDialog_HeightForWidth_Callback(KPixmapRegionSelectorDialog_HeightForWidth_Callback cb) { kpixmapregionselectordialog_heightforwidth_callback = cb; }
    inline void setKPixmapRegionSelectorDialog_HasHeightForWidth_Callback(KPixmapRegionSelectorDialog_HasHeightForWidth_Callback cb) { kpixmapregionselectordialog_hasheightforwidth_callback = cb; }
    inline void setKPixmapRegionSelectorDialog_PaintEngine_Callback(KPixmapRegionSelectorDialog_PaintEngine_Callback cb) { kpixmapregionselectordialog_paintengine_callback = cb; }
    inline void setKPixmapRegionSelectorDialog_Event_Callback(KPixmapRegionSelectorDialog_Event_Callback cb) { kpixmapregionselectordialog_event_callback = cb; }
    inline void setKPixmapRegionSelectorDialog_MousePressEvent_Callback(KPixmapRegionSelectorDialog_MousePressEvent_Callback cb) { kpixmapregionselectordialog_mousepressevent_callback = cb; }
    inline void setKPixmapRegionSelectorDialog_MouseReleaseEvent_Callback(KPixmapRegionSelectorDialog_MouseReleaseEvent_Callback cb) { kpixmapregionselectordialog_mousereleaseevent_callback = cb; }
    inline void setKPixmapRegionSelectorDialog_MouseDoubleClickEvent_Callback(KPixmapRegionSelectorDialog_MouseDoubleClickEvent_Callback cb) { kpixmapregionselectordialog_mousedoubleclickevent_callback = cb; }
    inline void setKPixmapRegionSelectorDialog_MouseMoveEvent_Callback(KPixmapRegionSelectorDialog_MouseMoveEvent_Callback cb) { kpixmapregionselectordialog_mousemoveevent_callback = cb; }
    inline void setKPixmapRegionSelectorDialog_WheelEvent_Callback(KPixmapRegionSelectorDialog_WheelEvent_Callback cb) { kpixmapregionselectordialog_wheelevent_callback = cb; }
    inline void setKPixmapRegionSelectorDialog_KeyReleaseEvent_Callback(KPixmapRegionSelectorDialog_KeyReleaseEvent_Callback cb) { kpixmapregionselectordialog_keyreleaseevent_callback = cb; }
    inline void setKPixmapRegionSelectorDialog_FocusInEvent_Callback(KPixmapRegionSelectorDialog_FocusInEvent_Callback cb) { kpixmapregionselectordialog_focusinevent_callback = cb; }
    inline void setKPixmapRegionSelectorDialog_FocusOutEvent_Callback(KPixmapRegionSelectorDialog_FocusOutEvent_Callback cb) { kpixmapregionselectordialog_focusoutevent_callback = cb; }
    inline void setKPixmapRegionSelectorDialog_EnterEvent_Callback(KPixmapRegionSelectorDialog_EnterEvent_Callback cb) { kpixmapregionselectordialog_enterevent_callback = cb; }
    inline void setKPixmapRegionSelectorDialog_LeaveEvent_Callback(KPixmapRegionSelectorDialog_LeaveEvent_Callback cb) { kpixmapregionselectordialog_leaveevent_callback = cb; }
    inline void setKPixmapRegionSelectorDialog_PaintEvent_Callback(KPixmapRegionSelectorDialog_PaintEvent_Callback cb) { kpixmapregionselectordialog_paintevent_callback = cb; }
    inline void setKPixmapRegionSelectorDialog_MoveEvent_Callback(KPixmapRegionSelectorDialog_MoveEvent_Callback cb) { kpixmapregionselectordialog_moveevent_callback = cb; }
    inline void setKPixmapRegionSelectorDialog_TabletEvent_Callback(KPixmapRegionSelectorDialog_TabletEvent_Callback cb) { kpixmapregionselectordialog_tabletevent_callback = cb; }
    inline void setKPixmapRegionSelectorDialog_ActionEvent_Callback(KPixmapRegionSelectorDialog_ActionEvent_Callback cb) { kpixmapregionselectordialog_actionevent_callback = cb; }
    inline void setKPixmapRegionSelectorDialog_DragEnterEvent_Callback(KPixmapRegionSelectorDialog_DragEnterEvent_Callback cb) { kpixmapregionselectordialog_dragenterevent_callback = cb; }
    inline void setKPixmapRegionSelectorDialog_DragMoveEvent_Callback(KPixmapRegionSelectorDialog_DragMoveEvent_Callback cb) { kpixmapregionselectordialog_dragmoveevent_callback = cb; }
    inline void setKPixmapRegionSelectorDialog_DragLeaveEvent_Callback(KPixmapRegionSelectorDialog_DragLeaveEvent_Callback cb) { kpixmapregionselectordialog_dragleaveevent_callback = cb; }
    inline void setKPixmapRegionSelectorDialog_DropEvent_Callback(KPixmapRegionSelectorDialog_DropEvent_Callback cb) { kpixmapregionselectordialog_dropevent_callback = cb; }
    inline void setKPixmapRegionSelectorDialog_HideEvent_Callback(KPixmapRegionSelectorDialog_HideEvent_Callback cb) { kpixmapregionselectordialog_hideevent_callback = cb; }
    inline void setKPixmapRegionSelectorDialog_NativeEvent_Callback(KPixmapRegionSelectorDialog_NativeEvent_Callback cb) { kpixmapregionselectordialog_nativeevent_callback = cb; }
    inline void setKPixmapRegionSelectorDialog_ChangeEvent_Callback(KPixmapRegionSelectorDialog_ChangeEvent_Callback cb) { kpixmapregionselectordialog_changeevent_callback = cb; }
    inline void setKPixmapRegionSelectorDialog_Metric_Callback(KPixmapRegionSelectorDialog_Metric_Callback cb) { kpixmapregionselectordialog_metric_callback = cb; }
    inline void setKPixmapRegionSelectorDialog_InitPainter_Callback(KPixmapRegionSelectorDialog_InitPainter_Callback cb) { kpixmapregionselectordialog_initpainter_callback = cb; }
    inline void setKPixmapRegionSelectorDialog_Redirected_Callback(KPixmapRegionSelectorDialog_Redirected_Callback cb) { kpixmapregionselectordialog_redirected_callback = cb; }
    inline void setKPixmapRegionSelectorDialog_SharedPainter_Callback(KPixmapRegionSelectorDialog_SharedPainter_Callback cb) { kpixmapregionselectordialog_sharedpainter_callback = cb; }
    inline void setKPixmapRegionSelectorDialog_InputMethodEvent_Callback(KPixmapRegionSelectorDialog_InputMethodEvent_Callback cb) { kpixmapregionselectordialog_inputmethodevent_callback = cb; }
    inline void setKPixmapRegionSelectorDialog_InputMethodQuery_Callback(KPixmapRegionSelectorDialog_InputMethodQuery_Callback cb) { kpixmapregionselectordialog_inputmethodquery_callback = cb; }
    inline void setKPixmapRegionSelectorDialog_FocusNextPrevChild_Callback(KPixmapRegionSelectorDialog_FocusNextPrevChild_Callback cb) { kpixmapregionselectordialog_focusnextprevchild_callback = cb; }
    inline void setKPixmapRegionSelectorDialog_TimerEvent_Callback(KPixmapRegionSelectorDialog_TimerEvent_Callback cb) { kpixmapregionselectordialog_timerevent_callback = cb; }
    inline void setKPixmapRegionSelectorDialog_ChildEvent_Callback(KPixmapRegionSelectorDialog_ChildEvent_Callback cb) { kpixmapregionselectordialog_childevent_callback = cb; }
    inline void setKPixmapRegionSelectorDialog_CustomEvent_Callback(KPixmapRegionSelectorDialog_CustomEvent_Callback cb) { kpixmapregionselectordialog_customevent_callback = cb; }
    inline void setKPixmapRegionSelectorDialog_ConnectNotify_Callback(KPixmapRegionSelectorDialog_ConnectNotify_Callback cb) { kpixmapregionselectordialog_connectnotify_callback = cb; }
    inline void setKPixmapRegionSelectorDialog_DisconnectNotify_Callback(KPixmapRegionSelectorDialog_DisconnectNotify_Callback cb) { kpixmapregionselectordialog_disconnectnotify_callback = cb; }
    inline void setKPixmapRegionSelectorDialog_AdjustPosition_Callback(KPixmapRegionSelectorDialog_AdjustPosition_Callback cb) { kpixmapregionselectordialog_adjustposition_callback = cb; }
    inline void setKPixmapRegionSelectorDialog_UpdateMicroFocus_Callback(KPixmapRegionSelectorDialog_UpdateMicroFocus_Callback cb) { kpixmapregionselectordialog_updatemicrofocus_callback = cb; }
    inline void setKPixmapRegionSelectorDialog_Create_Callback(KPixmapRegionSelectorDialog_Create_Callback cb) { kpixmapregionselectordialog_create_callback = cb; }
    inline void setKPixmapRegionSelectorDialog_Destroy_Callback(KPixmapRegionSelectorDialog_Destroy_Callback cb) { kpixmapregionselectordialog_destroy_callback = cb; }
    inline void setKPixmapRegionSelectorDialog_FocusNextChild_Callback(KPixmapRegionSelectorDialog_FocusNextChild_Callback cb) { kpixmapregionselectordialog_focusnextchild_callback = cb; }
    inline void setKPixmapRegionSelectorDialog_FocusPreviousChild_Callback(KPixmapRegionSelectorDialog_FocusPreviousChild_Callback cb) { kpixmapregionselectordialog_focuspreviouschild_callback = cb; }
    inline void setKPixmapRegionSelectorDialog_Sender_Callback(KPixmapRegionSelectorDialog_Sender_Callback cb) { kpixmapregionselectordialog_sender_callback = cb; }
    inline void setKPixmapRegionSelectorDialog_SenderSignalIndex_Callback(KPixmapRegionSelectorDialog_SenderSignalIndex_Callback cb) { kpixmapregionselectordialog_sendersignalindex_callback = cb; }
    inline void setKPixmapRegionSelectorDialog_Receivers_Callback(KPixmapRegionSelectorDialog_Receivers_Callback cb) { kpixmapregionselectordialog_receivers_callback = cb; }
    inline void setKPixmapRegionSelectorDialog_IsSignalConnected_Callback(KPixmapRegionSelectorDialog_IsSignalConnected_Callback cb) { kpixmapregionselectordialog_issignalconnected_callback = cb; }
    inline void setKPixmapRegionSelectorDialog_GetDecodedMetricF_Callback(KPixmapRegionSelectorDialog_GetDecodedMetricF_Callback cb) { kpixmapregionselectordialog_getdecodedmetricf_callback = cb; }

    // Base flag setters
    inline void setKPixmapRegionSelectorDialog_Metacall_IsBase(bool value) const { kpixmapregionselectordialog_metacall_isbase = value; }
    inline void setKPixmapRegionSelectorDialog_SetVisible_IsBase(bool value) const { kpixmapregionselectordialog_setvisible_isbase = value; }
    inline void setKPixmapRegionSelectorDialog_SizeHint_IsBase(bool value) const { kpixmapregionselectordialog_sizehint_isbase = value; }
    inline void setKPixmapRegionSelectorDialog_MinimumSizeHint_IsBase(bool value) const { kpixmapregionselectordialog_minimumsizehint_isbase = value; }
    inline void setKPixmapRegionSelectorDialog_Open_IsBase(bool value) const { kpixmapregionselectordialog_open_isbase = value; }
    inline void setKPixmapRegionSelectorDialog_Exec_IsBase(bool value) const { kpixmapregionselectordialog_exec_isbase = value; }
    inline void setKPixmapRegionSelectorDialog_Done_IsBase(bool value) const { kpixmapregionselectordialog_done_isbase = value; }
    inline void setKPixmapRegionSelectorDialog_Accept_IsBase(bool value) const { kpixmapregionselectordialog_accept_isbase = value; }
    inline void setKPixmapRegionSelectorDialog_Reject_IsBase(bool value) const { kpixmapregionselectordialog_reject_isbase = value; }
    inline void setKPixmapRegionSelectorDialog_KeyPressEvent_IsBase(bool value) const { kpixmapregionselectordialog_keypressevent_isbase = value; }
    inline void setKPixmapRegionSelectorDialog_CloseEvent_IsBase(bool value) const { kpixmapregionselectordialog_closeevent_isbase = value; }
    inline void setKPixmapRegionSelectorDialog_ShowEvent_IsBase(bool value) const { kpixmapregionselectordialog_showevent_isbase = value; }
    inline void setKPixmapRegionSelectorDialog_ResizeEvent_IsBase(bool value) const { kpixmapregionselectordialog_resizeevent_isbase = value; }
    inline void setKPixmapRegionSelectorDialog_ContextMenuEvent_IsBase(bool value) const { kpixmapregionselectordialog_contextmenuevent_isbase = value; }
    inline void setKPixmapRegionSelectorDialog_EventFilter_IsBase(bool value) const { kpixmapregionselectordialog_eventfilter_isbase = value; }
    inline void setKPixmapRegionSelectorDialog_DevType_IsBase(bool value) const { kpixmapregionselectordialog_devtype_isbase = value; }
    inline void setKPixmapRegionSelectorDialog_HeightForWidth_IsBase(bool value) const { kpixmapregionselectordialog_heightforwidth_isbase = value; }
    inline void setKPixmapRegionSelectorDialog_HasHeightForWidth_IsBase(bool value) const { kpixmapregionselectordialog_hasheightforwidth_isbase = value; }
    inline void setKPixmapRegionSelectorDialog_PaintEngine_IsBase(bool value) const { kpixmapregionselectordialog_paintengine_isbase = value; }
    inline void setKPixmapRegionSelectorDialog_Event_IsBase(bool value) const { kpixmapregionselectordialog_event_isbase = value; }
    inline void setKPixmapRegionSelectorDialog_MousePressEvent_IsBase(bool value) const { kpixmapregionselectordialog_mousepressevent_isbase = value; }
    inline void setKPixmapRegionSelectorDialog_MouseReleaseEvent_IsBase(bool value) const { kpixmapregionselectordialog_mousereleaseevent_isbase = value; }
    inline void setKPixmapRegionSelectorDialog_MouseDoubleClickEvent_IsBase(bool value) const { kpixmapregionselectordialog_mousedoubleclickevent_isbase = value; }
    inline void setKPixmapRegionSelectorDialog_MouseMoveEvent_IsBase(bool value) const { kpixmapregionselectordialog_mousemoveevent_isbase = value; }
    inline void setKPixmapRegionSelectorDialog_WheelEvent_IsBase(bool value) const { kpixmapregionselectordialog_wheelevent_isbase = value; }
    inline void setKPixmapRegionSelectorDialog_KeyReleaseEvent_IsBase(bool value) const { kpixmapregionselectordialog_keyreleaseevent_isbase = value; }
    inline void setKPixmapRegionSelectorDialog_FocusInEvent_IsBase(bool value) const { kpixmapregionselectordialog_focusinevent_isbase = value; }
    inline void setKPixmapRegionSelectorDialog_FocusOutEvent_IsBase(bool value) const { kpixmapregionselectordialog_focusoutevent_isbase = value; }
    inline void setKPixmapRegionSelectorDialog_EnterEvent_IsBase(bool value) const { kpixmapregionselectordialog_enterevent_isbase = value; }
    inline void setKPixmapRegionSelectorDialog_LeaveEvent_IsBase(bool value) const { kpixmapregionselectordialog_leaveevent_isbase = value; }
    inline void setKPixmapRegionSelectorDialog_PaintEvent_IsBase(bool value) const { kpixmapregionselectordialog_paintevent_isbase = value; }
    inline void setKPixmapRegionSelectorDialog_MoveEvent_IsBase(bool value) const { kpixmapregionselectordialog_moveevent_isbase = value; }
    inline void setKPixmapRegionSelectorDialog_TabletEvent_IsBase(bool value) const { kpixmapregionselectordialog_tabletevent_isbase = value; }
    inline void setKPixmapRegionSelectorDialog_ActionEvent_IsBase(bool value) const { kpixmapregionselectordialog_actionevent_isbase = value; }
    inline void setKPixmapRegionSelectorDialog_DragEnterEvent_IsBase(bool value) const { kpixmapregionselectordialog_dragenterevent_isbase = value; }
    inline void setKPixmapRegionSelectorDialog_DragMoveEvent_IsBase(bool value) const { kpixmapregionselectordialog_dragmoveevent_isbase = value; }
    inline void setKPixmapRegionSelectorDialog_DragLeaveEvent_IsBase(bool value) const { kpixmapregionselectordialog_dragleaveevent_isbase = value; }
    inline void setKPixmapRegionSelectorDialog_DropEvent_IsBase(bool value) const { kpixmapregionselectordialog_dropevent_isbase = value; }
    inline void setKPixmapRegionSelectorDialog_HideEvent_IsBase(bool value) const { kpixmapregionselectordialog_hideevent_isbase = value; }
    inline void setKPixmapRegionSelectorDialog_NativeEvent_IsBase(bool value) const { kpixmapregionselectordialog_nativeevent_isbase = value; }
    inline void setKPixmapRegionSelectorDialog_ChangeEvent_IsBase(bool value) const { kpixmapregionselectordialog_changeevent_isbase = value; }
    inline void setKPixmapRegionSelectorDialog_Metric_IsBase(bool value) const { kpixmapregionselectordialog_metric_isbase = value; }
    inline void setKPixmapRegionSelectorDialog_InitPainter_IsBase(bool value) const { kpixmapregionselectordialog_initpainter_isbase = value; }
    inline void setKPixmapRegionSelectorDialog_Redirected_IsBase(bool value) const { kpixmapregionselectordialog_redirected_isbase = value; }
    inline void setKPixmapRegionSelectorDialog_SharedPainter_IsBase(bool value) const { kpixmapregionselectordialog_sharedpainter_isbase = value; }
    inline void setKPixmapRegionSelectorDialog_InputMethodEvent_IsBase(bool value) const { kpixmapregionselectordialog_inputmethodevent_isbase = value; }
    inline void setKPixmapRegionSelectorDialog_InputMethodQuery_IsBase(bool value) const { kpixmapregionselectordialog_inputmethodquery_isbase = value; }
    inline void setKPixmapRegionSelectorDialog_FocusNextPrevChild_IsBase(bool value) const { kpixmapregionselectordialog_focusnextprevchild_isbase = value; }
    inline void setKPixmapRegionSelectorDialog_TimerEvent_IsBase(bool value) const { kpixmapregionselectordialog_timerevent_isbase = value; }
    inline void setKPixmapRegionSelectorDialog_ChildEvent_IsBase(bool value) const { kpixmapregionselectordialog_childevent_isbase = value; }
    inline void setKPixmapRegionSelectorDialog_CustomEvent_IsBase(bool value) const { kpixmapregionselectordialog_customevent_isbase = value; }
    inline void setKPixmapRegionSelectorDialog_ConnectNotify_IsBase(bool value) const { kpixmapregionselectordialog_connectnotify_isbase = value; }
    inline void setKPixmapRegionSelectorDialog_DisconnectNotify_IsBase(bool value) const { kpixmapregionselectordialog_disconnectnotify_isbase = value; }
    inline void setKPixmapRegionSelectorDialog_AdjustPosition_IsBase(bool value) const { kpixmapregionselectordialog_adjustposition_isbase = value; }
    inline void setKPixmapRegionSelectorDialog_UpdateMicroFocus_IsBase(bool value) const { kpixmapregionselectordialog_updatemicrofocus_isbase = value; }
    inline void setKPixmapRegionSelectorDialog_Create_IsBase(bool value) const { kpixmapregionselectordialog_create_isbase = value; }
    inline void setKPixmapRegionSelectorDialog_Destroy_IsBase(bool value) const { kpixmapregionselectordialog_destroy_isbase = value; }
    inline void setKPixmapRegionSelectorDialog_FocusNextChild_IsBase(bool value) const { kpixmapregionselectordialog_focusnextchild_isbase = value; }
    inline void setKPixmapRegionSelectorDialog_FocusPreviousChild_IsBase(bool value) const { kpixmapregionselectordialog_focuspreviouschild_isbase = value; }
    inline void setKPixmapRegionSelectorDialog_Sender_IsBase(bool value) const { kpixmapregionselectordialog_sender_isbase = value; }
    inline void setKPixmapRegionSelectorDialog_SenderSignalIndex_IsBase(bool value) const { kpixmapregionselectordialog_sendersignalindex_isbase = value; }
    inline void setKPixmapRegionSelectorDialog_Receivers_IsBase(bool value) const { kpixmapregionselectordialog_receivers_isbase = value; }
    inline void setKPixmapRegionSelectorDialog_IsSignalConnected_IsBase(bool value) const { kpixmapregionselectordialog_issignalconnected_isbase = value; }
    inline void setKPixmapRegionSelectorDialog_GetDecodedMetricF_IsBase(bool value) const { kpixmapregionselectordialog_getdecodedmetricf_isbase = value; }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (kpixmapregionselectordialog_metacall_isbase) {
            kpixmapregionselectordialog_metacall_isbase = false;
            return KPixmapRegionSelectorDialog::qt_metacall(param1, param2, param3);
        } else if (kpixmapregionselectordialog_metacall_callback != nullptr) {
            int cbval1 = static_cast<int>(param1);
            int cbval2 = param2;
            void** cbval3 = param3;

            int callback_ret = kpixmapregionselectordialog_metacall_callback(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        } else {
            return KPixmapRegionSelectorDialog::qt_metacall(param1, param2, param3);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void setVisible(bool visible) override {
        if (kpixmapregionselectordialog_setvisible_isbase) {
            kpixmapregionselectordialog_setvisible_isbase = false;
            KPixmapRegionSelectorDialog::setVisible(visible);
        } else if (kpixmapregionselectordialog_setvisible_callback != nullptr) {
            bool cbval1 = visible;

            kpixmapregionselectordialog_setvisible_callback(this, cbval1);
        } else {
            KPixmapRegionSelectorDialog::setVisible(visible);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QSize sizeHint() const override {
        if (kpixmapregionselectordialog_sizehint_isbase) {
            kpixmapregionselectordialog_sizehint_isbase = false;
            return KPixmapRegionSelectorDialog::sizeHint();
        } else if (kpixmapregionselectordialog_sizehint_callback != nullptr) {
            QSize* callback_ret = kpixmapregionselectordialog_sizehint_callback();
            return *callback_ret;
        } else {
            return KPixmapRegionSelectorDialog::sizeHint();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QSize minimumSizeHint() const override {
        if (kpixmapregionselectordialog_minimumsizehint_isbase) {
            kpixmapregionselectordialog_minimumsizehint_isbase = false;
            return KPixmapRegionSelectorDialog::minimumSizeHint();
        } else if (kpixmapregionselectordialog_minimumsizehint_callback != nullptr) {
            QSize* callback_ret = kpixmapregionselectordialog_minimumsizehint_callback();
            return *callback_ret;
        } else {
            return KPixmapRegionSelectorDialog::minimumSizeHint();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void open() override {
        if (kpixmapregionselectordialog_open_isbase) {
            kpixmapregionselectordialog_open_isbase = false;
            KPixmapRegionSelectorDialog::open();
        } else if (kpixmapregionselectordialog_open_callback != nullptr) {
            kpixmapregionselectordialog_open_callback();
        } else {
            KPixmapRegionSelectorDialog::open();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual int exec() override {
        if (kpixmapregionselectordialog_exec_isbase) {
            kpixmapregionselectordialog_exec_isbase = false;
            return KPixmapRegionSelectorDialog::exec();
        } else if (kpixmapregionselectordialog_exec_callback != nullptr) {
            int callback_ret = kpixmapregionselectordialog_exec_callback();
            return static_cast<int>(callback_ret);
        } else {
            return KPixmapRegionSelectorDialog::exec();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void done(int param1) override {
        if (kpixmapregionselectordialog_done_isbase) {
            kpixmapregionselectordialog_done_isbase = false;
            KPixmapRegionSelectorDialog::done(param1);
        } else if (kpixmapregionselectordialog_done_callback != nullptr) {
            int cbval1 = param1;

            kpixmapregionselectordialog_done_callback(this, cbval1);
        } else {
            KPixmapRegionSelectorDialog::done(param1);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void accept() override {
        if (kpixmapregionselectordialog_accept_isbase) {
            kpixmapregionselectordialog_accept_isbase = false;
            KPixmapRegionSelectorDialog::accept();
        } else if (kpixmapregionselectordialog_accept_callback != nullptr) {
            kpixmapregionselectordialog_accept_callback();
        } else {
            KPixmapRegionSelectorDialog::accept();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void reject() override {
        if (kpixmapregionselectordialog_reject_isbase) {
            kpixmapregionselectordialog_reject_isbase = false;
            KPixmapRegionSelectorDialog::reject();
        } else if (kpixmapregionselectordialog_reject_callback != nullptr) {
            kpixmapregionselectordialog_reject_callback();
        } else {
            KPixmapRegionSelectorDialog::reject();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void keyPressEvent(QKeyEvent* param1) override {
        if (kpixmapregionselectordialog_keypressevent_isbase) {
            kpixmapregionselectordialog_keypressevent_isbase = false;
            KPixmapRegionSelectorDialog::keyPressEvent(param1);
        } else if (kpixmapregionselectordialog_keypressevent_callback != nullptr) {
            QKeyEvent* cbval1 = param1;

            kpixmapregionselectordialog_keypressevent_callback(this, cbval1);
        } else {
            KPixmapRegionSelectorDialog::keyPressEvent(param1);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void closeEvent(QCloseEvent* param1) override {
        if (kpixmapregionselectordialog_closeevent_isbase) {
            kpixmapregionselectordialog_closeevent_isbase = false;
            KPixmapRegionSelectorDialog::closeEvent(param1);
        } else if (kpixmapregionselectordialog_closeevent_callback != nullptr) {
            QCloseEvent* cbval1 = param1;

            kpixmapregionselectordialog_closeevent_callback(this, cbval1);
        } else {
            KPixmapRegionSelectorDialog::closeEvent(param1);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void showEvent(QShowEvent* param1) override {
        if (kpixmapregionselectordialog_showevent_isbase) {
            kpixmapregionselectordialog_showevent_isbase = false;
            KPixmapRegionSelectorDialog::showEvent(param1);
        } else if (kpixmapregionselectordialog_showevent_callback != nullptr) {
            QShowEvent* cbval1 = param1;

            kpixmapregionselectordialog_showevent_callback(this, cbval1);
        } else {
            KPixmapRegionSelectorDialog::showEvent(param1);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void resizeEvent(QResizeEvent* param1) override {
        if (kpixmapregionselectordialog_resizeevent_isbase) {
            kpixmapregionselectordialog_resizeevent_isbase = false;
            KPixmapRegionSelectorDialog::resizeEvent(param1);
        } else if (kpixmapregionselectordialog_resizeevent_callback != nullptr) {
            QResizeEvent* cbval1 = param1;

            kpixmapregionselectordialog_resizeevent_callback(this, cbval1);
        } else {
            KPixmapRegionSelectorDialog::resizeEvent(param1);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void contextMenuEvent(QContextMenuEvent* param1) override {
        if (kpixmapregionselectordialog_contextmenuevent_isbase) {
            kpixmapregionselectordialog_contextmenuevent_isbase = false;
            KPixmapRegionSelectorDialog::contextMenuEvent(param1);
        } else if (kpixmapregionselectordialog_contextmenuevent_callback != nullptr) {
            QContextMenuEvent* cbval1 = param1;

            kpixmapregionselectordialog_contextmenuevent_callback(this, cbval1);
        } else {
            KPixmapRegionSelectorDialog::contextMenuEvent(param1);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* param1, QEvent* param2) override {
        if (kpixmapregionselectordialog_eventfilter_isbase) {
            kpixmapregionselectordialog_eventfilter_isbase = false;
            return KPixmapRegionSelectorDialog::eventFilter(param1, param2);
        } else if (kpixmapregionselectordialog_eventfilter_callback != nullptr) {
            QObject* cbval1 = param1;
            QEvent* cbval2 = param2;

            bool callback_ret = kpixmapregionselectordialog_eventfilter_callback(this, cbval1, cbval2);
            return callback_ret;
        } else {
            return KPixmapRegionSelectorDialog::eventFilter(param1, param2);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual int devType() const override {
        if (kpixmapregionselectordialog_devtype_isbase) {
            kpixmapregionselectordialog_devtype_isbase = false;
            return KPixmapRegionSelectorDialog::devType();
        } else if (kpixmapregionselectordialog_devtype_callback != nullptr) {
            int callback_ret = kpixmapregionselectordialog_devtype_callback();
            return static_cast<int>(callback_ret);
        } else {
            return KPixmapRegionSelectorDialog::devType();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual int heightForWidth(int param1) const override {
        if (kpixmapregionselectordialog_heightforwidth_isbase) {
            kpixmapregionselectordialog_heightforwidth_isbase = false;
            return KPixmapRegionSelectorDialog::heightForWidth(param1);
        } else if (kpixmapregionselectordialog_heightforwidth_callback != nullptr) {
            int cbval1 = param1;

            int callback_ret = kpixmapregionselectordialog_heightforwidth_callback(this, cbval1);
            return static_cast<int>(callback_ret);
        } else {
            return KPixmapRegionSelectorDialog::heightForWidth(param1);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool hasHeightForWidth() const override {
        if (kpixmapregionselectordialog_hasheightforwidth_isbase) {
            kpixmapregionselectordialog_hasheightforwidth_isbase = false;
            return KPixmapRegionSelectorDialog::hasHeightForWidth();
        } else if (kpixmapregionselectordialog_hasheightforwidth_callback != nullptr) {
            bool callback_ret = kpixmapregionselectordialog_hasheightforwidth_callback();
            return callback_ret;
        } else {
            return KPixmapRegionSelectorDialog::hasHeightForWidth();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QPaintEngine* paintEngine() const override {
        if (kpixmapregionselectordialog_paintengine_isbase) {
            kpixmapregionselectordialog_paintengine_isbase = false;
            return KPixmapRegionSelectorDialog::paintEngine();
        } else if (kpixmapregionselectordialog_paintengine_callback != nullptr) {
            QPaintEngine* callback_ret = kpixmapregionselectordialog_paintengine_callback();
            return callback_ret;
        } else {
            return KPixmapRegionSelectorDialog::paintEngine();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* event) override {
        if (kpixmapregionselectordialog_event_isbase) {
            kpixmapregionselectordialog_event_isbase = false;
            return KPixmapRegionSelectorDialog::event(event);
        } else if (kpixmapregionselectordialog_event_callback != nullptr) {
            QEvent* cbval1 = event;

            bool callback_ret = kpixmapregionselectordialog_event_callback(this, cbval1);
            return callback_ret;
        } else {
            return KPixmapRegionSelectorDialog::event(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void mousePressEvent(QMouseEvent* event) override {
        if (kpixmapregionselectordialog_mousepressevent_isbase) {
            kpixmapregionselectordialog_mousepressevent_isbase = false;
            KPixmapRegionSelectorDialog::mousePressEvent(event);
        } else if (kpixmapregionselectordialog_mousepressevent_callback != nullptr) {
            QMouseEvent* cbval1 = event;

            kpixmapregionselectordialog_mousepressevent_callback(this, cbval1);
        } else {
            KPixmapRegionSelectorDialog::mousePressEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseReleaseEvent(QMouseEvent* event) override {
        if (kpixmapregionselectordialog_mousereleaseevent_isbase) {
            kpixmapregionselectordialog_mousereleaseevent_isbase = false;
            KPixmapRegionSelectorDialog::mouseReleaseEvent(event);
        } else if (kpixmapregionselectordialog_mousereleaseevent_callback != nullptr) {
            QMouseEvent* cbval1 = event;

            kpixmapregionselectordialog_mousereleaseevent_callback(this, cbval1);
        } else {
            KPixmapRegionSelectorDialog::mouseReleaseEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseDoubleClickEvent(QMouseEvent* event) override {
        if (kpixmapregionselectordialog_mousedoubleclickevent_isbase) {
            kpixmapregionselectordialog_mousedoubleclickevent_isbase = false;
            KPixmapRegionSelectorDialog::mouseDoubleClickEvent(event);
        } else if (kpixmapregionselectordialog_mousedoubleclickevent_callback != nullptr) {
            QMouseEvent* cbval1 = event;

            kpixmapregionselectordialog_mousedoubleclickevent_callback(this, cbval1);
        } else {
            KPixmapRegionSelectorDialog::mouseDoubleClickEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseMoveEvent(QMouseEvent* event) override {
        if (kpixmapregionselectordialog_mousemoveevent_isbase) {
            kpixmapregionselectordialog_mousemoveevent_isbase = false;
            KPixmapRegionSelectorDialog::mouseMoveEvent(event);
        } else if (kpixmapregionselectordialog_mousemoveevent_callback != nullptr) {
            QMouseEvent* cbval1 = event;

            kpixmapregionselectordialog_mousemoveevent_callback(this, cbval1);
        } else {
            KPixmapRegionSelectorDialog::mouseMoveEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void wheelEvent(QWheelEvent* event) override {
        if (kpixmapregionselectordialog_wheelevent_isbase) {
            kpixmapregionselectordialog_wheelevent_isbase = false;
            KPixmapRegionSelectorDialog::wheelEvent(event);
        } else if (kpixmapregionselectordialog_wheelevent_callback != nullptr) {
            QWheelEvent* cbval1 = event;

            kpixmapregionselectordialog_wheelevent_callback(this, cbval1);
        } else {
            KPixmapRegionSelectorDialog::wheelEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void keyReleaseEvent(QKeyEvent* event) override {
        if (kpixmapregionselectordialog_keyreleaseevent_isbase) {
            kpixmapregionselectordialog_keyreleaseevent_isbase = false;
            KPixmapRegionSelectorDialog::keyReleaseEvent(event);
        } else if (kpixmapregionselectordialog_keyreleaseevent_callback != nullptr) {
            QKeyEvent* cbval1 = event;

            kpixmapregionselectordialog_keyreleaseevent_callback(this, cbval1);
        } else {
            KPixmapRegionSelectorDialog::keyReleaseEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void focusInEvent(QFocusEvent* event) override {
        if (kpixmapregionselectordialog_focusinevent_isbase) {
            kpixmapregionselectordialog_focusinevent_isbase = false;
            KPixmapRegionSelectorDialog::focusInEvent(event);
        } else if (kpixmapregionselectordialog_focusinevent_callback != nullptr) {
            QFocusEvent* cbval1 = event;

            kpixmapregionselectordialog_focusinevent_callback(this, cbval1);
        } else {
            KPixmapRegionSelectorDialog::focusInEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void focusOutEvent(QFocusEvent* event) override {
        if (kpixmapregionselectordialog_focusoutevent_isbase) {
            kpixmapregionselectordialog_focusoutevent_isbase = false;
            KPixmapRegionSelectorDialog::focusOutEvent(event);
        } else if (kpixmapregionselectordialog_focusoutevent_callback != nullptr) {
            QFocusEvent* cbval1 = event;

            kpixmapregionselectordialog_focusoutevent_callback(this, cbval1);
        } else {
            KPixmapRegionSelectorDialog::focusOutEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void enterEvent(QEnterEvent* event) override {
        if (kpixmapregionselectordialog_enterevent_isbase) {
            kpixmapregionselectordialog_enterevent_isbase = false;
            KPixmapRegionSelectorDialog::enterEvent(event);
        } else if (kpixmapregionselectordialog_enterevent_callback != nullptr) {
            QEnterEvent* cbval1 = event;

            kpixmapregionselectordialog_enterevent_callback(this, cbval1);
        } else {
            KPixmapRegionSelectorDialog::enterEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void leaveEvent(QEvent* event) override {
        if (kpixmapregionselectordialog_leaveevent_isbase) {
            kpixmapregionselectordialog_leaveevent_isbase = false;
            KPixmapRegionSelectorDialog::leaveEvent(event);
        } else if (kpixmapregionselectordialog_leaveevent_callback != nullptr) {
            QEvent* cbval1 = event;

            kpixmapregionselectordialog_leaveevent_callback(this, cbval1);
        } else {
            KPixmapRegionSelectorDialog::leaveEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void paintEvent(QPaintEvent* event) override {
        if (kpixmapregionselectordialog_paintevent_isbase) {
            kpixmapregionselectordialog_paintevent_isbase = false;
            KPixmapRegionSelectorDialog::paintEvent(event);
        } else if (kpixmapregionselectordialog_paintevent_callback != nullptr) {
            QPaintEvent* cbval1 = event;

            kpixmapregionselectordialog_paintevent_callback(this, cbval1);
        } else {
            KPixmapRegionSelectorDialog::paintEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void moveEvent(QMoveEvent* event) override {
        if (kpixmapregionselectordialog_moveevent_isbase) {
            kpixmapregionselectordialog_moveevent_isbase = false;
            KPixmapRegionSelectorDialog::moveEvent(event);
        } else if (kpixmapregionselectordialog_moveevent_callback != nullptr) {
            QMoveEvent* cbval1 = event;

            kpixmapregionselectordialog_moveevent_callback(this, cbval1);
        } else {
            KPixmapRegionSelectorDialog::moveEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void tabletEvent(QTabletEvent* event) override {
        if (kpixmapregionselectordialog_tabletevent_isbase) {
            kpixmapregionselectordialog_tabletevent_isbase = false;
            KPixmapRegionSelectorDialog::tabletEvent(event);
        } else if (kpixmapregionselectordialog_tabletevent_callback != nullptr) {
            QTabletEvent* cbval1 = event;

            kpixmapregionselectordialog_tabletevent_callback(this, cbval1);
        } else {
            KPixmapRegionSelectorDialog::tabletEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void actionEvent(QActionEvent* event) override {
        if (kpixmapregionselectordialog_actionevent_isbase) {
            kpixmapregionselectordialog_actionevent_isbase = false;
            KPixmapRegionSelectorDialog::actionEvent(event);
        } else if (kpixmapregionselectordialog_actionevent_callback != nullptr) {
            QActionEvent* cbval1 = event;

            kpixmapregionselectordialog_actionevent_callback(this, cbval1);
        } else {
            KPixmapRegionSelectorDialog::actionEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragEnterEvent(QDragEnterEvent* event) override {
        if (kpixmapregionselectordialog_dragenterevent_isbase) {
            kpixmapregionselectordialog_dragenterevent_isbase = false;
            KPixmapRegionSelectorDialog::dragEnterEvent(event);
        } else if (kpixmapregionselectordialog_dragenterevent_callback != nullptr) {
            QDragEnterEvent* cbval1 = event;

            kpixmapregionselectordialog_dragenterevent_callback(this, cbval1);
        } else {
            KPixmapRegionSelectorDialog::dragEnterEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragMoveEvent(QDragMoveEvent* event) override {
        if (kpixmapregionselectordialog_dragmoveevent_isbase) {
            kpixmapregionselectordialog_dragmoveevent_isbase = false;
            KPixmapRegionSelectorDialog::dragMoveEvent(event);
        } else if (kpixmapregionselectordialog_dragmoveevent_callback != nullptr) {
            QDragMoveEvent* cbval1 = event;

            kpixmapregionselectordialog_dragmoveevent_callback(this, cbval1);
        } else {
            KPixmapRegionSelectorDialog::dragMoveEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragLeaveEvent(QDragLeaveEvent* event) override {
        if (kpixmapregionselectordialog_dragleaveevent_isbase) {
            kpixmapregionselectordialog_dragleaveevent_isbase = false;
            KPixmapRegionSelectorDialog::dragLeaveEvent(event);
        } else if (kpixmapregionselectordialog_dragleaveevent_callback != nullptr) {
            QDragLeaveEvent* cbval1 = event;

            kpixmapregionselectordialog_dragleaveevent_callback(this, cbval1);
        } else {
            KPixmapRegionSelectorDialog::dragLeaveEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void dropEvent(QDropEvent* event) override {
        if (kpixmapregionselectordialog_dropevent_isbase) {
            kpixmapregionselectordialog_dropevent_isbase = false;
            KPixmapRegionSelectorDialog::dropEvent(event);
        } else if (kpixmapregionselectordialog_dropevent_callback != nullptr) {
            QDropEvent* cbval1 = event;

            kpixmapregionselectordialog_dropevent_callback(this, cbval1);
        } else {
            KPixmapRegionSelectorDialog::dropEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void hideEvent(QHideEvent* event) override {
        if (kpixmapregionselectordialog_hideevent_isbase) {
            kpixmapregionselectordialog_hideevent_isbase = false;
            KPixmapRegionSelectorDialog::hideEvent(event);
        } else if (kpixmapregionselectordialog_hideevent_callback != nullptr) {
            QHideEvent* cbval1 = event;

            kpixmapregionselectordialog_hideevent_callback(this, cbval1);
        } else {
            KPixmapRegionSelectorDialog::hideEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool nativeEvent(const QByteArray& eventType, void* message, qintptr* result) override {
        if (kpixmapregionselectordialog_nativeevent_isbase) {
            kpixmapregionselectordialog_nativeevent_isbase = false;
            return KPixmapRegionSelectorDialog::nativeEvent(eventType, message, result);
        } else if (kpixmapregionselectordialog_nativeevent_callback != nullptr) {
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

            bool callback_ret = kpixmapregionselectordialog_nativeevent_callback(this, cbval1, cbval2, cbval3);
            return callback_ret;
        } else {
            return KPixmapRegionSelectorDialog::nativeEvent(eventType, message, result);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void changeEvent(QEvent* param1) override {
        if (kpixmapregionselectordialog_changeevent_isbase) {
            kpixmapregionselectordialog_changeevent_isbase = false;
            KPixmapRegionSelectorDialog::changeEvent(param1);
        } else if (kpixmapregionselectordialog_changeevent_callback != nullptr) {
            QEvent* cbval1 = param1;

            kpixmapregionselectordialog_changeevent_callback(this, cbval1);
        } else {
            KPixmapRegionSelectorDialog::changeEvent(param1);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual int metric(QPaintDevice::PaintDeviceMetric param1) const override {
        if (kpixmapregionselectordialog_metric_isbase) {
            kpixmapregionselectordialog_metric_isbase = false;
            return KPixmapRegionSelectorDialog::metric(param1);
        } else if (kpixmapregionselectordialog_metric_callback != nullptr) {
            int cbval1 = static_cast<int>(param1);

            int callback_ret = kpixmapregionselectordialog_metric_callback(this, cbval1);
            return static_cast<int>(callback_ret);
        } else {
            return KPixmapRegionSelectorDialog::metric(param1);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void initPainter(QPainter* painter) const override {
        if (kpixmapregionselectordialog_initpainter_isbase) {
            kpixmapregionselectordialog_initpainter_isbase = false;
            KPixmapRegionSelectorDialog::initPainter(painter);
        } else if (kpixmapregionselectordialog_initpainter_callback != nullptr) {
            QPainter* cbval1 = painter;

            kpixmapregionselectordialog_initpainter_callback(this, cbval1);
        } else {
            KPixmapRegionSelectorDialog::initPainter(painter);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QPaintDevice* redirected(QPoint* offset) const override {
        if (kpixmapregionselectordialog_redirected_isbase) {
            kpixmapregionselectordialog_redirected_isbase = false;
            return KPixmapRegionSelectorDialog::redirected(offset);
        } else if (kpixmapregionselectordialog_redirected_callback != nullptr) {
            QPoint* cbval1 = offset;

            QPaintDevice* callback_ret = kpixmapregionselectordialog_redirected_callback(this, cbval1);
            return callback_ret;
        } else {
            return KPixmapRegionSelectorDialog::redirected(offset);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QPainter* sharedPainter() const override {
        if (kpixmapregionselectordialog_sharedpainter_isbase) {
            kpixmapregionselectordialog_sharedpainter_isbase = false;
            return KPixmapRegionSelectorDialog::sharedPainter();
        } else if (kpixmapregionselectordialog_sharedpainter_callback != nullptr) {
            QPainter* callback_ret = kpixmapregionselectordialog_sharedpainter_callback();
            return callback_ret;
        } else {
            return KPixmapRegionSelectorDialog::sharedPainter();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void inputMethodEvent(QInputMethodEvent* param1) override {
        if (kpixmapregionselectordialog_inputmethodevent_isbase) {
            kpixmapregionselectordialog_inputmethodevent_isbase = false;
            KPixmapRegionSelectorDialog::inputMethodEvent(param1);
        } else if (kpixmapregionselectordialog_inputmethodevent_callback != nullptr) {
            QInputMethodEvent* cbval1 = param1;

            kpixmapregionselectordialog_inputmethodevent_callback(this, cbval1);
        } else {
            KPixmapRegionSelectorDialog::inputMethodEvent(param1);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QVariant inputMethodQuery(Qt::InputMethodQuery param1) const override {
        if (kpixmapregionselectordialog_inputmethodquery_isbase) {
            kpixmapregionselectordialog_inputmethodquery_isbase = false;
            return KPixmapRegionSelectorDialog::inputMethodQuery(param1);
        } else if (kpixmapregionselectordialog_inputmethodquery_callback != nullptr) {
            int cbval1 = static_cast<int>(param1);

            QVariant* callback_ret = kpixmapregionselectordialog_inputmethodquery_callback(this, cbval1);
            return *callback_ret;
        } else {
            return KPixmapRegionSelectorDialog::inputMethodQuery(param1);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool focusNextPrevChild(bool next) override {
        if (kpixmapregionselectordialog_focusnextprevchild_isbase) {
            kpixmapregionselectordialog_focusnextprevchild_isbase = false;
            return KPixmapRegionSelectorDialog::focusNextPrevChild(next);
        } else if (kpixmapregionselectordialog_focusnextprevchild_callback != nullptr) {
            bool cbval1 = next;

            bool callback_ret = kpixmapregionselectordialog_focusnextprevchild_callback(this, cbval1);
            return callback_ret;
        } else {
            return KPixmapRegionSelectorDialog::focusNextPrevChild(next);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (kpixmapregionselectordialog_timerevent_isbase) {
            kpixmapregionselectordialog_timerevent_isbase = false;
            KPixmapRegionSelectorDialog::timerEvent(event);
        } else if (kpixmapregionselectordialog_timerevent_callback != nullptr) {
            QTimerEvent* cbval1 = event;

            kpixmapregionselectordialog_timerevent_callback(this, cbval1);
        } else {
            KPixmapRegionSelectorDialog::timerEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (kpixmapregionselectordialog_childevent_isbase) {
            kpixmapregionselectordialog_childevent_isbase = false;
            KPixmapRegionSelectorDialog::childEvent(event);
        } else if (kpixmapregionselectordialog_childevent_callback != nullptr) {
            QChildEvent* cbval1 = event;

            kpixmapregionselectordialog_childevent_callback(this, cbval1);
        } else {
            KPixmapRegionSelectorDialog::childEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (kpixmapregionselectordialog_customevent_isbase) {
            kpixmapregionselectordialog_customevent_isbase = false;
            KPixmapRegionSelectorDialog::customEvent(event);
        } else if (kpixmapregionselectordialog_customevent_callback != nullptr) {
            QEvent* cbval1 = event;

            kpixmapregionselectordialog_customevent_callback(this, cbval1);
        } else {
            KPixmapRegionSelectorDialog::customEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (kpixmapregionselectordialog_connectnotify_isbase) {
            kpixmapregionselectordialog_connectnotify_isbase = false;
            KPixmapRegionSelectorDialog::connectNotify(signal);
        } else if (kpixmapregionselectordialog_connectnotify_callback != nullptr) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            kpixmapregionselectordialog_connectnotify_callback(this, cbval1);
        } else {
            KPixmapRegionSelectorDialog::connectNotify(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (kpixmapregionselectordialog_disconnectnotify_isbase) {
            kpixmapregionselectordialog_disconnectnotify_isbase = false;
            KPixmapRegionSelectorDialog::disconnectNotify(signal);
        } else if (kpixmapregionselectordialog_disconnectnotify_callback != nullptr) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            kpixmapregionselectordialog_disconnectnotify_callback(this, cbval1);
        } else {
            KPixmapRegionSelectorDialog::disconnectNotify(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    void adjustPosition(QWidget* param1) {
        if (kpixmapregionselectordialog_adjustposition_isbase) {
            kpixmapregionselectordialog_adjustposition_isbase = false;
            KPixmapRegionSelectorDialog::adjustPosition(param1);
        } else if (kpixmapregionselectordialog_adjustposition_callback != nullptr) {
            QWidget* cbval1 = param1;

            kpixmapregionselectordialog_adjustposition_callback(this, cbval1);
        } else {
            KPixmapRegionSelectorDialog::adjustPosition(param1);
        }
    }

    // Virtual method for C ABI access and custom callback
    void updateMicroFocus() {
        if (kpixmapregionselectordialog_updatemicrofocus_isbase) {
            kpixmapregionselectordialog_updatemicrofocus_isbase = false;
            KPixmapRegionSelectorDialog::updateMicroFocus();
        } else if (kpixmapregionselectordialog_updatemicrofocus_callback != nullptr) {
            kpixmapregionselectordialog_updatemicrofocus_callback();
        } else {
            KPixmapRegionSelectorDialog::updateMicroFocus();
        }
    }

    // Virtual method for C ABI access and custom callback
    void create() {
        if (kpixmapregionselectordialog_create_isbase) {
            kpixmapregionselectordialog_create_isbase = false;
            KPixmapRegionSelectorDialog::create();
        } else if (kpixmapregionselectordialog_create_callback != nullptr) {
            kpixmapregionselectordialog_create_callback();
        } else {
            KPixmapRegionSelectorDialog::create();
        }
    }

    // Virtual method for C ABI access and custom callback
    void destroy() {
        if (kpixmapregionselectordialog_destroy_isbase) {
            kpixmapregionselectordialog_destroy_isbase = false;
            KPixmapRegionSelectorDialog::destroy();
        } else if (kpixmapregionselectordialog_destroy_callback != nullptr) {
            kpixmapregionselectordialog_destroy_callback();
        } else {
            KPixmapRegionSelectorDialog::destroy();
        }
    }

    // Virtual method for C ABI access and custom callback
    bool focusNextChild() {
        if (kpixmapregionselectordialog_focusnextchild_isbase) {
            kpixmapregionselectordialog_focusnextchild_isbase = false;
            return KPixmapRegionSelectorDialog::focusNextChild();
        } else if (kpixmapregionselectordialog_focusnextchild_callback != nullptr) {
            bool callback_ret = kpixmapregionselectordialog_focusnextchild_callback();
            return callback_ret;
        } else {
            return KPixmapRegionSelectorDialog::focusNextChild();
        }
    }

    // Virtual method for C ABI access and custom callback
    bool focusPreviousChild() {
        if (kpixmapregionselectordialog_focuspreviouschild_isbase) {
            kpixmapregionselectordialog_focuspreviouschild_isbase = false;
            return KPixmapRegionSelectorDialog::focusPreviousChild();
        } else if (kpixmapregionselectordialog_focuspreviouschild_callback != nullptr) {
            bool callback_ret = kpixmapregionselectordialog_focuspreviouschild_callback();
            return callback_ret;
        } else {
            return KPixmapRegionSelectorDialog::focusPreviousChild();
        }
    }

    // Virtual method for C ABI access and custom callback
    QObject* sender() const {
        if (kpixmapregionselectordialog_sender_isbase) {
            kpixmapregionselectordialog_sender_isbase = false;
            return KPixmapRegionSelectorDialog::sender();
        } else if (kpixmapregionselectordialog_sender_callback != nullptr) {
            QObject* callback_ret = kpixmapregionselectordialog_sender_callback();
            return callback_ret;
        } else {
            return KPixmapRegionSelectorDialog::sender();
        }
    }

    // Virtual method for C ABI access and custom callback
    int senderSignalIndex() const {
        if (kpixmapregionselectordialog_sendersignalindex_isbase) {
            kpixmapregionselectordialog_sendersignalindex_isbase = false;
            return KPixmapRegionSelectorDialog::senderSignalIndex();
        } else if (kpixmapregionselectordialog_sendersignalindex_callback != nullptr) {
            int callback_ret = kpixmapregionselectordialog_sendersignalindex_callback();
            return static_cast<int>(callback_ret);
        } else {
            return KPixmapRegionSelectorDialog::senderSignalIndex();
        }
    }

    // Virtual method for C ABI access and custom callback
    int receivers(const char* signal) const {
        if (kpixmapregionselectordialog_receivers_isbase) {
            kpixmapregionselectordialog_receivers_isbase = false;
            return KPixmapRegionSelectorDialog::receivers(signal);
        } else if (kpixmapregionselectordialog_receivers_callback != nullptr) {
            const char* cbval1 = (const char*)signal;

            int callback_ret = kpixmapregionselectordialog_receivers_callback(this, cbval1);
            return static_cast<int>(callback_ret);
        } else {
            return KPixmapRegionSelectorDialog::receivers(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    bool isSignalConnected(const QMetaMethod& signal) const {
        if (kpixmapregionselectordialog_issignalconnected_isbase) {
            kpixmapregionselectordialog_issignalconnected_isbase = false;
            return KPixmapRegionSelectorDialog::isSignalConnected(signal);
        } else if (kpixmapregionselectordialog_issignalconnected_callback != nullptr) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            bool callback_ret = kpixmapregionselectordialog_issignalconnected_callback(this, cbval1);
            return callback_ret;
        } else {
            return KPixmapRegionSelectorDialog::isSignalConnected(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    double getDecodedMetricF(QPaintDevice::PaintDeviceMetric metricA, QPaintDevice::PaintDeviceMetric metricB) const {
        if (kpixmapregionselectordialog_getdecodedmetricf_isbase) {
            kpixmapregionselectordialog_getdecodedmetricf_isbase = false;
            return KPixmapRegionSelectorDialog::getDecodedMetricF(metricA, metricB);
        } else if (kpixmapregionselectordialog_getdecodedmetricf_callback != nullptr) {
            int cbval1 = static_cast<int>(metricA);
            int cbval2 = static_cast<int>(metricB);

            double callback_ret = kpixmapregionselectordialog_getdecodedmetricf_callback(this, cbval1, cbval2);
            return static_cast<double>(callback_ret);
        } else {
            return KPixmapRegionSelectorDialog::getDecodedMetricF(metricA, metricB);
        }
    }

    // Friend functions
    friend void KPixmapRegionSelectorDialog_KeyPressEvent(KPixmapRegionSelectorDialog* self, QKeyEvent* param1);
    friend void KPixmapRegionSelectorDialog_QBaseKeyPressEvent(KPixmapRegionSelectorDialog* self, QKeyEvent* param1);
    friend void KPixmapRegionSelectorDialog_CloseEvent(KPixmapRegionSelectorDialog* self, QCloseEvent* param1);
    friend void KPixmapRegionSelectorDialog_QBaseCloseEvent(KPixmapRegionSelectorDialog* self, QCloseEvent* param1);
    friend void KPixmapRegionSelectorDialog_ShowEvent(KPixmapRegionSelectorDialog* self, QShowEvent* param1);
    friend void KPixmapRegionSelectorDialog_QBaseShowEvent(KPixmapRegionSelectorDialog* self, QShowEvent* param1);
    friend void KPixmapRegionSelectorDialog_ResizeEvent(KPixmapRegionSelectorDialog* self, QResizeEvent* param1);
    friend void KPixmapRegionSelectorDialog_QBaseResizeEvent(KPixmapRegionSelectorDialog* self, QResizeEvent* param1);
    friend void KPixmapRegionSelectorDialog_ContextMenuEvent(KPixmapRegionSelectorDialog* self, QContextMenuEvent* param1);
    friend void KPixmapRegionSelectorDialog_QBaseContextMenuEvent(KPixmapRegionSelectorDialog* self, QContextMenuEvent* param1);
    friend bool KPixmapRegionSelectorDialog_EventFilter(KPixmapRegionSelectorDialog* self, QObject* param1, QEvent* param2);
    friend bool KPixmapRegionSelectorDialog_QBaseEventFilter(KPixmapRegionSelectorDialog* self, QObject* param1, QEvent* param2);
    friend bool KPixmapRegionSelectorDialog_Event(KPixmapRegionSelectorDialog* self, QEvent* event);
    friend bool KPixmapRegionSelectorDialog_QBaseEvent(KPixmapRegionSelectorDialog* self, QEvent* event);
    friend void KPixmapRegionSelectorDialog_MousePressEvent(KPixmapRegionSelectorDialog* self, QMouseEvent* event);
    friend void KPixmapRegionSelectorDialog_QBaseMousePressEvent(KPixmapRegionSelectorDialog* self, QMouseEvent* event);
    friend void KPixmapRegionSelectorDialog_MouseReleaseEvent(KPixmapRegionSelectorDialog* self, QMouseEvent* event);
    friend void KPixmapRegionSelectorDialog_QBaseMouseReleaseEvent(KPixmapRegionSelectorDialog* self, QMouseEvent* event);
    friend void KPixmapRegionSelectorDialog_MouseDoubleClickEvent(KPixmapRegionSelectorDialog* self, QMouseEvent* event);
    friend void KPixmapRegionSelectorDialog_QBaseMouseDoubleClickEvent(KPixmapRegionSelectorDialog* self, QMouseEvent* event);
    friend void KPixmapRegionSelectorDialog_MouseMoveEvent(KPixmapRegionSelectorDialog* self, QMouseEvent* event);
    friend void KPixmapRegionSelectorDialog_QBaseMouseMoveEvent(KPixmapRegionSelectorDialog* self, QMouseEvent* event);
    friend void KPixmapRegionSelectorDialog_WheelEvent(KPixmapRegionSelectorDialog* self, QWheelEvent* event);
    friend void KPixmapRegionSelectorDialog_QBaseWheelEvent(KPixmapRegionSelectorDialog* self, QWheelEvent* event);
    friend void KPixmapRegionSelectorDialog_KeyReleaseEvent(KPixmapRegionSelectorDialog* self, QKeyEvent* event);
    friend void KPixmapRegionSelectorDialog_QBaseKeyReleaseEvent(KPixmapRegionSelectorDialog* self, QKeyEvent* event);
    friend void KPixmapRegionSelectorDialog_FocusInEvent(KPixmapRegionSelectorDialog* self, QFocusEvent* event);
    friend void KPixmapRegionSelectorDialog_QBaseFocusInEvent(KPixmapRegionSelectorDialog* self, QFocusEvent* event);
    friend void KPixmapRegionSelectorDialog_FocusOutEvent(KPixmapRegionSelectorDialog* self, QFocusEvent* event);
    friend void KPixmapRegionSelectorDialog_QBaseFocusOutEvent(KPixmapRegionSelectorDialog* self, QFocusEvent* event);
    friend void KPixmapRegionSelectorDialog_EnterEvent(KPixmapRegionSelectorDialog* self, QEnterEvent* event);
    friend void KPixmapRegionSelectorDialog_QBaseEnterEvent(KPixmapRegionSelectorDialog* self, QEnterEvent* event);
    friend void KPixmapRegionSelectorDialog_LeaveEvent(KPixmapRegionSelectorDialog* self, QEvent* event);
    friend void KPixmapRegionSelectorDialog_QBaseLeaveEvent(KPixmapRegionSelectorDialog* self, QEvent* event);
    friend void KPixmapRegionSelectorDialog_PaintEvent(KPixmapRegionSelectorDialog* self, QPaintEvent* event);
    friend void KPixmapRegionSelectorDialog_QBasePaintEvent(KPixmapRegionSelectorDialog* self, QPaintEvent* event);
    friend void KPixmapRegionSelectorDialog_MoveEvent(KPixmapRegionSelectorDialog* self, QMoveEvent* event);
    friend void KPixmapRegionSelectorDialog_QBaseMoveEvent(KPixmapRegionSelectorDialog* self, QMoveEvent* event);
    friend void KPixmapRegionSelectorDialog_TabletEvent(KPixmapRegionSelectorDialog* self, QTabletEvent* event);
    friend void KPixmapRegionSelectorDialog_QBaseTabletEvent(KPixmapRegionSelectorDialog* self, QTabletEvent* event);
    friend void KPixmapRegionSelectorDialog_ActionEvent(KPixmapRegionSelectorDialog* self, QActionEvent* event);
    friend void KPixmapRegionSelectorDialog_QBaseActionEvent(KPixmapRegionSelectorDialog* self, QActionEvent* event);
    friend void KPixmapRegionSelectorDialog_DragEnterEvent(KPixmapRegionSelectorDialog* self, QDragEnterEvent* event);
    friend void KPixmapRegionSelectorDialog_QBaseDragEnterEvent(KPixmapRegionSelectorDialog* self, QDragEnterEvent* event);
    friend void KPixmapRegionSelectorDialog_DragMoveEvent(KPixmapRegionSelectorDialog* self, QDragMoveEvent* event);
    friend void KPixmapRegionSelectorDialog_QBaseDragMoveEvent(KPixmapRegionSelectorDialog* self, QDragMoveEvent* event);
    friend void KPixmapRegionSelectorDialog_DragLeaveEvent(KPixmapRegionSelectorDialog* self, QDragLeaveEvent* event);
    friend void KPixmapRegionSelectorDialog_QBaseDragLeaveEvent(KPixmapRegionSelectorDialog* self, QDragLeaveEvent* event);
    friend void KPixmapRegionSelectorDialog_DropEvent(KPixmapRegionSelectorDialog* self, QDropEvent* event);
    friend void KPixmapRegionSelectorDialog_QBaseDropEvent(KPixmapRegionSelectorDialog* self, QDropEvent* event);
    friend void KPixmapRegionSelectorDialog_HideEvent(KPixmapRegionSelectorDialog* self, QHideEvent* event);
    friend void KPixmapRegionSelectorDialog_QBaseHideEvent(KPixmapRegionSelectorDialog* self, QHideEvent* event);
    friend bool KPixmapRegionSelectorDialog_NativeEvent(KPixmapRegionSelectorDialog* self, const libqt_string eventType, void* message, intptr_t* result);
    friend bool KPixmapRegionSelectorDialog_QBaseNativeEvent(KPixmapRegionSelectorDialog* self, const libqt_string eventType, void* message, intptr_t* result);
    friend void KPixmapRegionSelectorDialog_ChangeEvent(KPixmapRegionSelectorDialog* self, QEvent* param1);
    friend void KPixmapRegionSelectorDialog_QBaseChangeEvent(KPixmapRegionSelectorDialog* self, QEvent* param1);
    friend int KPixmapRegionSelectorDialog_Metric(const KPixmapRegionSelectorDialog* self, int param1);
    friend int KPixmapRegionSelectorDialog_QBaseMetric(const KPixmapRegionSelectorDialog* self, int param1);
    friend void KPixmapRegionSelectorDialog_InitPainter(const KPixmapRegionSelectorDialog* self, QPainter* painter);
    friend void KPixmapRegionSelectorDialog_QBaseInitPainter(const KPixmapRegionSelectorDialog* self, QPainter* painter);
    friend QPaintDevice* KPixmapRegionSelectorDialog_Redirected(const KPixmapRegionSelectorDialog* self, QPoint* offset);
    friend QPaintDevice* KPixmapRegionSelectorDialog_QBaseRedirected(const KPixmapRegionSelectorDialog* self, QPoint* offset);
    friend QPainter* KPixmapRegionSelectorDialog_SharedPainter(const KPixmapRegionSelectorDialog* self);
    friend QPainter* KPixmapRegionSelectorDialog_QBaseSharedPainter(const KPixmapRegionSelectorDialog* self);
    friend void KPixmapRegionSelectorDialog_InputMethodEvent(KPixmapRegionSelectorDialog* self, QInputMethodEvent* param1);
    friend void KPixmapRegionSelectorDialog_QBaseInputMethodEvent(KPixmapRegionSelectorDialog* self, QInputMethodEvent* param1);
    friend bool KPixmapRegionSelectorDialog_FocusNextPrevChild(KPixmapRegionSelectorDialog* self, bool next);
    friend bool KPixmapRegionSelectorDialog_QBaseFocusNextPrevChild(KPixmapRegionSelectorDialog* self, bool next);
    friend void KPixmapRegionSelectorDialog_TimerEvent(KPixmapRegionSelectorDialog* self, QTimerEvent* event);
    friend void KPixmapRegionSelectorDialog_QBaseTimerEvent(KPixmapRegionSelectorDialog* self, QTimerEvent* event);
    friend void KPixmapRegionSelectorDialog_ChildEvent(KPixmapRegionSelectorDialog* self, QChildEvent* event);
    friend void KPixmapRegionSelectorDialog_QBaseChildEvent(KPixmapRegionSelectorDialog* self, QChildEvent* event);
    friend void KPixmapRegionSelectorDialog_CustomEvent(KPixmapRegionSelectorDialog* self, QEvent* event);
    friend void KPixmapRegionSelectorDialog_QBaseCustomEvent(KPixmapRegionSelectorDialog* self, QEvent* event);
    friend void KPixmapRegionSelectorDialog_ConnectNotify(KPixmapRegionSelectorDialog* self, const QMetaMethod* signal);
    friend void KPixmapRegionSelectorDialog_QBaseConnectNotify(KPixmapRegionSelectorDialog* self, const QMetaMethod* signal);
    friend void KPixmapRegionSelectorDialog_DisconnectNotify(KPixmapRegionSelectorDialog* self, const QMetaMethod* signal);
    friend void KPixmapRegionSelectorDialog_QBaseDisconnectNotify(KPixmapRegionSelectorDialog* self, const QMetaMethod* signal);
    friend void KPixmapRegionSelectorDialog_AdjustPosition(KPixmapRegionSelectorDialog* self, QWidget* param1);
    friend void KPixmapRegionSelectorDialog_QBaseAdjustPosition(KPixmapRegionSelectorDialog* self, QWidget* param1);
    friend void KPixmapRegionSelectorDialog_UpdateMicroFocus(KPixmapRegionSelectorDialog* self);
    friend void KPixmapRegionSelectorDialog_QBaseUpdateMicroFocus(KPixmapRegionSelectorDialog* self);
    friend void KPixmapRegionSelectorDialog_Create(KPixmapRegionSelectorDialog* self);
    friend void KPixmapRegionSelectorDialog_QBaseCreate(KPixmapRegionSelectorDialog* self);
    friend void KPixmapRegionSelectorDialog_Destroy(KPixmapRegionSelectorDialog* self);
    friend void KPixmapRegionSelectorDialog_QBaseDestroy(KPixmapRegionSelectorDialog* self);
    friend bool KPixmapRegionSelectorDialog_FocusNextChild(KPixmapRegionSelectorDialog* self);
    friend bool KPixmapRegionSelectorDialog_QBaseFocusNextChild(KPixmapRegionSelectorDialog* self);
    friend bool KPixmapRegionSelectorDialog_FocusPreviousChild(KPixmapRegionSelectorDialog* self);
    friend bool KPixmapRegionSelectorDialog_QBaseFocusPreviousChild(KPixmapRegionSelectorDialog* self);
    friend QObject* KPixmapRegionSelectorDialog_Sender(const KPixmapRegionSelectorDialog* self);
    friend QObject* KPixmapRegionSelectorDialog_QBaseSender(const KPixmapRegionSelectorDialog* self);
    friend int KPixmapRegionSelectorDialog_SenderSignalIndex(const KPixmapRegionSelectorDialog* self);
    friend int KPixmapRegionSelectorDialog_QBaseSenderSignalIndex(const KPixmapRegionSelectorDialog* self);
    friend int KPixmapRegionSelectorDialog_Receivers(const KPixmapRegionSelectorDialog* self, const char* signal);
    friend int KPixmapRegionSelectorDialog_QBaseReceivers(const KPixmapRegionSelectorDialog* self, const char* signal);
    friend bool KPixmapRegionSelectorDialog_IsSignalConnected(const KPixmapRegionSelectorDialog* self, const QMetaMethod* signal);
    friend bool KPixmapRegionSelectorDialog_QBaseIsSignalConnected(const KPixmapRegionSelectorDialog* self, const QMetaMethod* signal);
    friend double KPixmapRegionSelectorDialog_GetDecodedMetricF(const KPixmapRegionSelectorDialog* self, int metricA, int metricB);
    friend double KPixmapRegionSelectorDialog_QBaseGetDecodedMetricF(const KPixmapRegionSelectorDialog* self, int metricA, int metricB);
};

#endif
