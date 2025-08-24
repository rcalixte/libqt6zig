#pragma once
#ifndef SRC_EXTRAS_KWIDGETSADDONSC_LIBVIRTUALKPAGEDIALOG_H
#define SRC_EXTRAS_KWIDGETSADDONSC_LIBVIRTUALKPAGEDIALOG_H

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

// This class is a subclass of KPageDialog so that we can call protected methods
class VirtualKPageDialog final : public KPageDialog {

  public:
    // Virtual class boolean flag
    bool isVirtualKPageDialog = true;

    // Virtual class public types (including callbacks)
    using KPageDialog_Metacall_Callback = int (*)(KPageDialog*, int, int, void**);
    using KPageDialog_SetVisible_Callback = void (*)(KPageDialog*, bool);
    using KPageDialog_SizeHint_Callback = QSize* (*)();
    using KPageDialog_MinimumSizeHint_Callback = QSize* (*)();
    using KPageDialog_Open_Callback = void (*)();
    using KPageDialog_Exec_Callback = int (*)();
    using KPageDialog_Done_Callback = void (*)(KPageDialog*, int);
    using KPageDialog_Accept_Callback = void (*)();
    using KPageDialog_Reject_Callback = void (*)();
    using KPageDialog_KeyPressEvent_Callback = void (*)(KPageDialog*, QKeyEvent*);
    using KPageDialog_CloseEvent_Callback = void (*)(KPageDialog*, QCloseEvent*);
    using KPageDialog_ShowEvent_Callback = void (*)(KPageDialog*, QShowEvent*);
    using KPageDialog_ResizeEvent_Callback = void (*)(KPageDialog*, QResizeEvent*);
    using KPageDialog_ContextMenuEvent_Callback = void (*)(KPageDialog*, QContextMenuEvent*);
    using KPageDialog_EventFilter_Callback = bool (*)(KPageDialog*, QObject*, QEvent*);
    using KPageDialog_DevType_Callback = int (*)();
    using KPageDialog_HeightForWidth_Callback = int (*)(const KPageDialog*, int);
    using KPageDialog_HasHeightForWidth_Callback = bool (*)();
    using KPageDialog_PaintEngine_Callback = QPaintEngine* (*)();
    using KPageDialog_Event_Callback = bool (*)(KPageDialog*, QEvent*);
    using KPageDialog_MousePressEvent_Callback = void (*)(KPageDialog*, QMouseEvent*);
    using KPageDialog_MouseReleaseEvent_Callback = void (*)(KPageDialog*, QMouseEvent*);
    using KPageDialog_MouseDoubleClickEvent_Callback = void (*)(KPageDialog*, QMouseEvent*);
    using KPageDialog_MouseMoveEvent_Callback = void (*)(KPageDialog*, QMouseEvent*);
    using KPageDialog_WheelEvent_Callback = void (*)(KPageDialog*, QWheelEvent*);
    using KPageDialog_KeyReleaseEvent_Callback = void (*)(KPageDialog*, QKeyEvent*);
    using KPageDialog_FocusInEvent_Callback = void (*)(KPageDialog*, QFocusEvent*);
    using KPageDialog_FocusOutEvent_Callback = void (*)(KPageDialog*, QFocusEvent*);
    using KPageDialog_EnterEvent_Callback = void (*)(KPageDialog*, QEnterEvent*);
    using KPageDialog_LeaveEvent_Callback = void (*)(KPageDialog*, QEvent*);
    using KPageDialog_PaintEvent_Callback = void (*)(KPageDialog*, QPaintEvent*);
    using KPageDialog_MoveEvent_Callback = void (*)(KPageDialog*, QMoveEvent*);
    using KPageDialog_TabletEvent_Callback = void (*)(KPageDialog*, QTabletEvent*);
    using KPageDialog_ActionEvent_Callback = void (*)(KPageDialog*, QActionEvent*);
    using KPageDialog_DragEnterEvent_Callback = void (*)(KPageDialog*, QDragEnterEvent*);
    using KPageDialog_DragMoveEvent_Callback = void (*)(KPageDialog*, QDragMoveEvent*);
    using KPageDialog_DragLeaveEvent_Callback = void (*)(KPageDialog*, QDragLeaveEvent*);
    using KPageDialog_DropEvent_Callback = void (*)(KPageDialog*, QDropEvent*);
    using KPageDialog_HideEvent_Callback = void (*)(KPageDialog*, QHideEvent*);
    using KPageDialog_NativeEvent_Callback = bool (*)(KPageDialog*, libqt_string, void*, intptr_t*);
    using KPageDialog_ChangeEvent_Callback = void (*)(KPageDialog*, QEvent*);
    using KPageDialog_Metric_Callback = int (*)(const KPageDialog*, int);
    using KPageDialog_InitPainter_Callback = void (*)(const KPageDialog*, QPainter*);
    using KPageDialog_Redirected_Callback = QPaintDevice* (*)(const KPageDialog*, QPoint*);
    using KPageDialog_SharedPainter_Callback = QPainter* (*)();
    using KPageDialog_InputMethodEvent_Callback = void (*)(KPageDialog*, QInputMethodEvent*);
    using KPageDialog_InputMethodQuery_Callback = QVariant* (*)(const KPageDialog*, int);
    using KPageDialog_FocusNextPrevChild_Callback = bool (*)(KPageDialog*, bool);
    using KPageDialog_TimerEvent_Callback = void (*)(KPageDialog*, QTimerEvent*);
    using KPageDialog_ChildEvent_Callback = void (*)(KPageDialog*, QChildEvent*);
    using KPageDialog_CustomEvent_Callback = void (*)(KPageDialog*, QEvent*);
    using KPageDialog_ConnectNotify_Callback = void (*)(KPageDialog*, QMetaMethod*);
    using KPageDialog_DisconnectNotify_Callback = void (*)(KPageDialog*, QMetaMethod*);
    using KPageDialog_PageWidget_Callback = KPageWidget* (*)();
    using KPageDialog_PageWidget2_Callback = KPageWidget* (*)();
    using KPageDialog_SetPageWidget_Callback = void (*)(KPageDialog*, KPageWidget*);
    using KPageDialog_ButtonBox_Callback = QDialogButtonBox* (*)();
    using KPageDialog_ButtonBox2_Callback = QDialogButtonBox* (*)();
    using KPageDialog_SetButtonBox_Callback = void (*)(KPageDialog*, QDialogButtonBox*);
    using KPageDialog_AdjustPosition_Callback = void (*)(KPageDialog*, QWidget*);
    using KPageDialog_UpdateMicroFocus_Callback = void (*)();
    using KPageDialog_Create_Callback = void (*)();
    using KPageDialog_Destroy_Callback = void (*)();
    using KPageDialog_FocusNextChild_Callback = bool (*)();
    using KPageDialog_FocusPreviousChild_Callback = bool (*)();
    using KPageDialog_Sender_Callback = QObject* (*)();
    using KPageDialog_SenderSignalIndex_Callback = int (*)();
    using KPageDialog_Receivers_Callback = int (*)(const KPageDialog*, const char*);
    using KPageDialog_IsSignalConnected_Callback = bool (*)(const KPageDialog*, QMetaMethod*);
    using KPageDialog_GetDecodedMetricF_Callback = double (*)(const KPageDialog*, int, int);

  protected:
    // Instance callback storage
    KPageDialog_Metacall_Callback kpagedialog_metacall_callback = nullptr;
    KPageDialog_SetVisible_Callback kpagedialog_setvisible_callback = nullptr;
    KPageDialog_SizeHint_Callback kpagedialog_sizehint_callback = nullptr;
    KPageDialog_MinimumSizeHint_Callback kpagedialog_minimumsizehint_callback = nullptr;
    KPageDialog_Open_Callback kpagedialog_open_callback = nullptr;
    KPageDialog_Exec_Callback kpagedialog_exec_callback = nullptr;
    KPageDialog_Done_Callback kpagedialog_done_callback = nullptr;
    KPageDialog_Accept_Callback kpagedialog_accept_callback = nullptr;
    KPageDialog_Reject_Callback kpagedialog_reject_callback = nullptr;
    KPageDialog_KeyPressEvent_Callback kpagedialog_keypressevent_callback = nullptr;
    KPageDialog_CloseEvent_Callback kpagedialog_closeevent_callback = nullptr;
    KPageDialog_ShowEvent_Callback kpagedialog_showevent_callback = nullptr;
    KPageDialog_ResizeEvent_Callback kpagedialog_resizeevent_callback = nullptr;
    KPageDialog_ContextMenuEvent_Callback kpagedialog_contextmenuevent_callback = nullptr;
    KPageDialog_EventFilter_Callback kpagedialog_eventfilter_callback = nullptr;
    KPageDialog_DevType_Callback kpagedialog_devtype_callback = nullptr;
    KPageDialog_HeightForWidth_Callback kpagedialog_heightforwidth_callback = nullptr;
    KPageDialog_HasHeightForWidth_Callback kpagedialog_hasheightforwidth_callback = nullptr;
    KPageDialog_PaintEngine_Callback kpagedialog_paintengine_callback = nullptr;
    KPageDialog_Event_Callback kpagedialog_event_callback = nullptr;
    KPageDialog_MousePressEvent_Callback kpagedialog_mousepressevent_callback = nullptr;
    KPageDialog_MouseReleaseEvent_Callback kpagedialog_mousereleaseevent_callback = nullptr;
    KPageDialog_MouseDoubleClickEvent_Callback kpagedialog_mousedoubleclickevent_callback = nullptr;
    KPageDialog_MouseMoveEvent_Callback kpagedialog_mousemoveevent_callback = nullptr;
    KPageDialog_WheelEvent_Callback kpagedialog_wheelevent_callback = nullptr;
    KPageDialog_KeyReleaseEvent_Callback kpagedialog_keyreleaseevent_callback = nullptr;
    KPageDialog_FocusInEvent_Callback kpagedialog_focusinevent_callback = nullptr;
    KPageDialog_FocusOutEvent_Callback kpagedialog_focusoutevent_callback = nullptr;
    KPageDialog_EnterEvent_Callback kpagedialog_enterevent_callback = nullptr;
    KPageDialog_LeaveEvent_Callback kpagedialog_leaveevent_callback = nullptr;
    KPageDialog_PaintEvent_Callback kpagedialog_paintevent_callback = nullptr;
    KPageDialog_MoveEvent_Callback kpagedialog_moveevent_callback = nullptr;
    KPageDialog_TabletEvent_Callback kpagedialog_tabletevent_callback = nullptr;
    KPageDialog_ActionEvent_Callback kpagedialog_actionevent_callback = nullptr;
    KPageDialog_DragEnterEvent_Callback kpagedialog_dragenterevent_callback = nullptr;
    KPageDialog_DragMoveEvent_Callback kpagedialog_dragmoveevent_callback = nullptr;
    KPageDialog_DragLeaveEvent_Callback kpagedialog_dragleaveevent_callback = nullptr;
    KPageDialog_DropEvent_Callback kpagedialog_dropevent_callback = nullptr;
    KPageDialog_HideEvent_Callback kpagedialog_hideevent_callback = nullptr;
    KPageDialog_NativeEvent_Callback kpagedialog_nativeevent_callback = nullptr;
    KPageDialog_ChangeEvent_Callback kpagedialog_changeevent_callback = nullptr;
    KPageDialog_Metric_Callback kpagedialog_metric_callback = nullptr;
    KPageDialog_InitPainter_Callback kpagedialog_initpainter_callback = nullptr;
    KPageDialog_Redirected_Callback kpagedialog_redirected_callback = nullptr;
    KPageDialog_SharedPainter_Callback kpagedialog_sharedpainter_callback = nullptr;
    KPageDialog_InputMethodEvent_Callback kpagedialog_inputmethodevent_callback = nullptr;
    KPageDialog_InputMethodQuery_Callback kpagedialog_inputmethodquery_callback = nullptr;
    KPageDialog_FocusNextPrevChild_Callback kpagedialog_focusnextprevchild_callback = nullptr;
    KPageDialog_TimerEvent_Callback kpagedialog_timerevent_callback = nullptr;
    KPageDialog_ChildEvent_Callback kpagedialog_childevent_callback = nullptr;
    KPageDialog_CustomEvent_Callback kpagedialog_customevent_callback = nullptr;
    KPageDialog_ConnectNotify_Callback kpagedialog_connectnotify_callback = nullptr;
    KPageDialog_DisconnectNotify_Callback kpagedialog_disconnectnotify_callback = nullptr;
    KPageDialog_PageWidget_Callback kpagedialog_pagewidget_callback = nullptr;
    KPageDialog_PageWidget2_Callback kpagedialog_pagewidget2_callback = nullptr;
    KPageDialog_SetPageWidget_Callback kpagedialog_setpagewidget_callback = nullptr;
    KPageDialog_ButtonBox_Callback kpagedialog_buttonbox_callback = nullptr;
    KPageDialog_ButtonBox2_Callback kpagedialog_buttonbox2_callback = nullptr;
    KPageDialog_SetButtonBox_Callback kpagedialog_setbuttonbox_callback = nullptr;
    KPageDialog_AdjustPosition_Callback kpagedialog_adjustposition_callback = nullptr;
    KPageDialog_UpdateMicroFocus_Callback kpagedialog_updatemicrofocus_callback = nullptr;
    KPageDialog_Create_Callback kpagedialog_create_callback = nullptr;
    KPageDialog_Destroy_Callback kpagedialog_destroy_callback = nullptr;
    KPageDialog_FocusNextChild_Callback kpagedialog_focusnextchild_callback = nullptr;
    KPageDialog_FocusPreviousChild_Callback kpagedialog_focuspreviouschild_callback = nullptr;
    KPageDialog_Sender_Callback kpagedialog_sender_callback = nullptr;
    KPageDialog_SenderSignalIndex_Callback kpagedialog_sendersignalindex_callback = nullptr;
    KPageDialog_Receivers_Callback kpagedialog_receivers_callback = nullptr;
    KPageDialog_IsSignalConnected_Callback kpagedialog_issignalconnected_callback = nullptr;
    KPageDialog_GetDecodedMetricF_Callback kpagedialog_getdecodedmetricf_callback = nullptr;

    // Instance base flags
    mutable bool kpagedialog_metacall_isbase = false;
    mutable bool kpagedialog_setvisible_isbase = false;
    mutable bool kpagedialog_sizehint_isbase = false;
    mutable bool kpagedialog_minimumsizehint_isbase = false;
    mutable bool kpagedialog_open_isbase = false;
    mutable bool kpagedialog_exec_isbase = false;
    mutable bool kpagedialog_done_isbase = false;
    mutable bool kpagedialog_accept_isbase = false;
    mutable bool kpagedialog_reject_isbase = false;
    mutable bool kpagedialog_keypressevent_isbase = false;
    mutable bool kpagedialog_closeevent_isbase = false;
    mutable bool kpagedialog_showevent_isbase = false;
    mutable bool kpagedialog_resizeevent_isbase = false;
    mutable bool kpagedialog_contextmenuevent_isbase = false;
    mutable bool kpagedialog_eventfilter_isbase = false;
    mutable bool kpagedialog_devtype_isbase = false;
    mutable bool kpagedialog_heightforwidth_isbase = false;
    mutable bool kpagedialog_hasheightforwidth_isbase = false;
    mutable bool kpagedialog_paintengine_isbase = false;
    mutable bool kpagedialog_event_isbase = false;
    mutable bool kpagedialog_mousepressevent_isbase = false;
    mutable bool kpagedialog_mousereleaseevent_isbase = false;
    mutable bool kpagedialog_mousedoubleclickevent_isbase = false;
    mutable bool kpagedialog_mousemoveevent_isbase = false;
    mutable bool kpagedialog_wheelevent_isbase = false;
    mutable bool kpagedialog_keyreleaseevent_isbase = false;
    mutable bool kpagedialog_focusinevent_isbase = false;
    mutable bool kpagedialog_focusoutevent_isbase = false;
    mutable bool kpagedialog_enterevent_isbase = false;
    mutable bool kpagedialog_leaveevent_isbase = false;
    mutable bool kpagedialog_paintevent_isbase = false;
    mutable bool kpagedialog_moveevent_isbase = false;
    mutable bool kpagedialog_tabletevent_isbase = false;
    mutable bool kpagedialog_actionevent_isbase = false;
    mutable bool kpagedialog_dragenterevent_isbase = false;
    mutable bool kpagedialog_dragmoveevent_isbase = false;
    mutable bool kpagedialog_dragleaveevent_isbase = false;
    mutable bool kpagedialog_dropevent_isbase = false;
    mutable bool kpagedialog_hideevent_isbase = false;
    mutable bool kpagedialog_nativeevent_isbase = false;
    mutable bool kpagedialog_changeevent_isbase = false;
    mutable bool kpagedialog_metric_isbase = false;
    mutable bool kpagedialog_initpainter_isbase = false;
    mutable bool kpagedialog_redirected_isbase = false;
    mutable bool kpagedialog_sharedpainter_isbase = false;
    mutable bool kpagedialog_inputmethodevent_isbase = false;
    mutable bool kpagedialog_inputmethodquery_isbase = false;
    mutable bool kpagedialog_focusnextprevchild_isbase = false;
    mutable bool kpagedialog_timerevent_isbase = false;
    mutable bool kpagedialog_childevent_isbase = false;
    mutable bool kpagedialog_customevent_isbase = false;
    mutable bool kpagedialog_connectnotify_isbase = false;
    mutable bool kpagedialog_disconnectnotify_isbase = false;
    mutable bool kpagedialog_pagewidget_isbase = false;
    mutable bool kpagedialog_pagewidget2_isbase = false;
    mutable bool kpagedialog_setpagewidget_isbase = false;
    mutable bool kpagedialog_buttonbox_isbase = false;
    mutable bool kpagedialog_buttonbox2_isbase = false;
    mutable bool kpagedialog_setbuttonbox_isbase = false;
    mutable bool kpagedialog_adjustposition_isbase = false;
    mutable bool kpagedialog_updatemicrofocus_isbase = false;
    mutable bool kpagedialog_create_isbase = false;
    mutable bool kpagedialog_destroy_isbase = false;
    mutable bool kpagedialog_focusnextchild_isbase = false;
    mutable bool kpagedialog_focuspreviouschild_isbase = false;
    mutable bool kpagedialog_sender_isbase = false;
    mutable bool kpagedialog_sendersignalindex_isbase = false;
    mutable bool kpagedialog_receivers_isbase = false;
    mutable bool kpagedialog_issignalconnected_isbase = false;
    mutable bool kpagedialog_getdecodedmetricf_isbase = false;

  public:
    VirtualKPageDialog(QWidget* parent) : KPageDialog(parent) {};
    VirtualKPageDialog() : KPageDialog() {};
    VirtualKPageDialog(QWidget* parent, Qt::WindowFlags flags) : KPageDialog(parent, flags) {};

    ~VirtualKPageDialog() {
        kpagedialog_metacall_callback = nullptr;
        kpagedialog_setvisible_callback = nullptr;
        kpagedialog_sizehint_callback = nullptr;
        kpagedialog_minimumsizehint_callback = nullptr;
        kpagedialog_open_callback = nullptr;
        kpagedialog_exec_callback = nullptr;
        kpagedialog_done_callback = nullptr;
        kpagedialog_accept_callback = nullptr;
        kpagedialog_reject_callback = nullptr;
        kpagedialog_keypressevent_callback = nullptr;
        kpagedialog_closeevent_callback = nullptr;
        kpagedialog_showevent_callback = nullptr;
        kpagedialog_resizeevent_callback = nullptr;
        kpagedialog_contextmenuevent_callback = nullptr;
        kpagedialog_eventfilter_callback = nullptr;
        kpagedialog_devtype_callback = nullptr;
        kpagedialog_heightforwidth_callback = nullptr;
        kpagedialog_hasheightforwidth_callback = nullptr;
        kpagedialog_paintengine_callback = nullptr;
        kpagedialog_event_callback = nullptr;
        kpagedialog_mousepressevent_callback = nullptr;
        kpagedialog_mousereleaseevent_callback = nullptr;
        kpagedialog_mousedoubleclickevent_callback = nullptr;
        kpagedialog_mousemoveevent_callback = nullptr;
        kpagedialog_wheelevent_callback = nullptr;
        kpagedialog_keyreleaseevent_callback = nullptr;
        kpagedialog_focusinevent_callback = nullptr;
        kpagedialog_focusoutevent_callback = nullptr;
        kpagedialog_enterevent_callback = nullptr;
        kpagedialog_leaveevent_callback = nullptr;
        kpagedialog_paintevent_callback = nullptr;
        kpagedialog_moveevent_callback = nullptr;
        kpagedialog_tabletevent_callback = nullptr;
        kpagedialog_actionevent_callback = nullptr;
        kpagedialog_dragenterevent_callback = nullptr;
        kpagedialog_dragmoveevent_callback = nullptr;
        kpagedialog_dragleaveevent_callback = nullptr;
        kpagedialog_dropevent_callback = nullptr;
        kpagedialog_hideevent_callback = nullptr;
        kpagedialog_nativeevent_callback = nullptr;
        kpagedialog_changeevent_callback = nullptr;
        kpagedialog_metric_callback = nullptr;
        kpagedialog_initpainter_callback = nullptr;
        kpagedialog_redirected_callback = nullptr;
        kpagedialog_sharedpainter_callback = nullptr;
        kpagedialog_inputmethodevent_callback = nullptr;
        kpagedialog_inputmethodquery_callback = nullptr;
        kpagedialog_focusnextprevchild_callback = nullptr;
        kpagedialog_timerevent_callback = nullptr;
        kpagedialog_childevent_callback = nullptr;
        kpagedialog_customevent_callback = nullptr;
        kpagedialog_connectnotify_callback = nullptr;
        kpagedialog_disconnectnotify_callback = nullptr;
        kpagedialog_pagewidget_callback = nullptr;
        kpagedialog_pagewidget2_callback = nullptr;
        kpagedialog_setpagewidget_callback = nullptr;
        kpagedialog_buttonbox_callback = nullptr;
        kpagedialog_buttonbox2_callback = nullptr;
        kpagedialog_setbuttonbox_callback = nullptr;
        kpagedialog_adjustposition_callback = nullptr;
        kpagedialog_updatemicrofocus_callback = nullptr;
        kpagedialog_create_callback = nullptr;
        kpagedialog_destroy_callback = nullptr;
        kpagedialog_focusnextchild_callback = nullptr;
        kpagedialog_focuspreviouschild_callback = nullptr;
        kpagedialog_sender_callback = nullptr;
        kpagedialog_sendersignalindex_callback = nullptr;
        kpagedialog_receivers_callback = nullptr;
        kpagedialog_issignalconnected_callback = nullptr;
        kpagedialog_getdecodedmetricf_callback = nullptr;
    }

    // Callback setters
    inline void setKPageDialog_Metacall_Callback(KPageDialog_Metacall_Callback cb) { kpagedialog_metacall_callback = cb; }
    inline void setKPageDialog_SetVisible_Callback(KPageDialog_SetVisible_Callback cb) { kpagedialog_setvisible_callback = cb; }
    inline void setKPageDialog_SizeHint_Callback(KPageDialog_SizeHint_Callback cb) { kpagedialog_sizehint_callback = cb; }
    inline void setKPageDialog_MinimumSizeHint_Callback(KPageDialog_MinimumSizeHint_Callback cb) { kpagedialog_minimumsizehint_callback = cb; }
    inline void setKPageDialog_Open_Callback(KPageDialog_Open_Callback cb) { kpagedialog_open_callback = cb; }
    inline void setKPageDialog_Exec_Callback(KPageDialog_Exec_Callback cb) { kpagedialog_exec_callback = cb; }
    inline void setKPageDialog_Done_Callback(KPageDialog_Done_Callback cb) { kpagedialog_done_callback = cb; }
    inline void setKPageDialog_Accept_Callback(KPageDialog_Accept_Callback cb) { kpagedialog_accept_callback = cb; }
    inline void setKPageDialog_Reject_Callback(KPageDialog_Reject_Callback cb) { kpagedialog_reject_callback = cb; }
    inline void setKPageDialog_KeyPressEvent_Callback(KPageDialog_KeyPressEvent_Callback cb) { kpagedialog_keypressevent_callback = cb; }
    inline void setKPageDialog_CloseEvent_Callback(KPageDialog_CloseEvent_Callback cb) { kpagedialog_closeevent_callback = cb; }
    inline void setKPageDialog_ShowEvent_Callback(KPageDialog_ShowEvent_Callback cb) { kpagedialog_showevent_callback = cb; }
    inline void setKPageDialog_ResizeEvent_Callback(KPageDialog_ResizeEvent_Callback cb) { kpagedialog_resizeevent_callback = cb; }
    inline void setKPageDialog_ContextMenuEvent_Callback(KPageDialog_ContextMenuEvent_Callback cb) { kpagedialog_contextmenuevent_callback = cb; }
    inline void setKPageDialog_EventFilter_Callback(KPageDialog_EventFilter_Callback cb) { kpagedialog_eventfilter_callback = cb; }
    inline void setKPageDialog_DevType_Callback(KPageDialog_DevType_Callback cb) { kpagedialog_devtype_callback = cb; }
    inline void setKPageDialog_HeightForWidth_Callback(KPageDialog_HeightForWidth_Callback cb) { kpagedialog_heightforwidth_callback = cb; }
    inline void setKPageDialog_HasHeightForWidth_Callback(KPageDialog_HasHeightForWidth_Callback cb) { kpagedialog_hasheightforwidth_callback = cb; }
    inline void setKPageDialog_PaintEngine_Callback(KPageDialog_PaintEngine_Callback cb) { kpagedialog_paintengine_callback = cb; }
    inline void setKPageDialog_Event_Callback(KPageDialog_Event_Callback cb) { kpagedialog_event_callback = cb; }
    inline void setKPageDialog_MousePressEvent_Callback(KPageDialog_MousePressEvent_Callback cb) { kpagedialog_mousepressevent_callback = cb; }
    inline void setKPageDialog_MouseReleaseEvent_Callback(KPageDialog_MouseReleaseEvent_Callback cb) { kpagedialog_mousereleaseevent_callback = cb; }
    inline void setKPageDialog_MouseDoubleClickEvent_Callback(KPageDialog_MouseDoubleClickEvent_Callback cb) { kpagedialog_mousedoubleclickevent_callback = cb; }
    inline void setKPageDialog_MouseMoveEvent_Callback(KPageDialog_MouseMoveEvent_Callback cb) { kpagedialog_mousemoveevent_callback = cb; }
    inline void setKPageDialog_WheelEvent_Callback(KPageDialog_WheelEvent_Callback cb) { kpagedialog_wheelevent_callback = cb; }
    inline void setKPageDialog_KeyReleaseEvent_Callback(KPageDialog_KeyReleaseEvent_Callback cb) { kpagedialog_keyreleaseevent_callback = cb; }
    inline void setKPageDialog_FocusInEvent_Callback(KPageDialog_FocusInEvent_Callback cb) { kpagedialog_focusinevent_callback = cb; }
    inline void setKPageDialog_FocusOutEvent_Callback(KPageDialog_FocusOutEvent_Callback cb) { kpagedialog_focusoutevent_callback = cb; }
    inline void setKPageDialog_EnterEvent_Callback(KPageDialog_EnterEvent_Callback cb) { kpagedialog_enterevent_callback = cb; }
    inline void setKPageDialog_LeaveEvent_Callback(KPageDialog_LeaveEvent_Callback cb) { kpagedialog_leaveevent_callback = cb; }
    inline void setKPageDialog_PaintEvent_Callback(KPageDialog_PaintEvent_Callback cb) { kpagedialog_paintevent_callback = cb; }
    inline void setKPageDialog_MoveEvent_Callback(KPageDialog_MoveEvent_Callback cb) { kpagedialog_moveevent_callback = cb; }
    inline void setKPageDialog_TabletEvent_Callback(KPageDialog_TabletEvent_Callback cb) { kpagedialog_tabletevent_callback = cb; }
    inline void setKPageDialog_ActionEvent_Callback(KPageDialog_ActionEvent_Callback cb) { kpagedialog_actionevent_callback = cb; }
    inline void setKPageDialog_DragEnterEvent_Callback(KPageDialog_DragEnterEvent_Callback cb) { kpagedialog_dragenterevent_callback = cb; }
    inline void setKPageDialog_DragMoveEvent_Callback(KPageDialog_DragMoveEvent_Callback cb) { kpagedialog_dragmoveevent_callback = cb; }
    inline void setKPageDialog_DragLeaveEvent_Callback(KPageDialog_DragLeaveEvent_Callback cb) { kpagedialog_dragleaveevent_callback = cb; }
    inline void setKPageDialog_DropEvent_Callback(KPageDialog_DropEvent_Callback cb) { kpagedialog_dropevent_callback = cb; }
    inline void setKPageDialog_HideEvent_Callback(KPageDialog_HideEvent_Callback cb) { kpagedialog_hideevent_callback = cb; }
    inline void setKPageDialog_NativeEvent_Callback(KPageDialog_NativeEvent_Callback cb) { kpagedialog_nativeevent_callback = cb; }
    inline void setKPageDialog_ChangeEvent_Callback(KPageDialog_ChangeEvent_Callback cb) { kpagedialog_changeevent_callback = cb; }
    inline void setKPageDialog_Metric_Callback(KPageDialog_Metric_Callback cb) { kpagedialog_metric_callback = cb; }
    inline void setKPageDialog_InitPainter_Callback(KPageDialog_InitPainter_Callback cb) { kpagedialog_initpainter_callback = cb; }
    inline void setKPageDialog_Redirected_Callback(KPageDialog_Redirected_Callback cb) { kpagedialog_redirected_callback = cb; }
    inline void setKPageDialog_SharedPainter_Callback(KPageDialog_SharedPainter_Callback cb) { kpagedialog_sharedpainter_callback = cb; }
    inline void setKPageDialog_InputMethodEvent_Callback(KPageDialog_InputMethodEvent_Callback cb) { kpagedialog_inputmethodevent_callback = cb; }
    inline void setKPageDialog_InputMethodQuery_Callback(KPageDialog_InputMethodQuery_Callback cb) { kpagedialog_inputmethodquery_callback = cb; }
    inline void setKPageDialog_FocusNextPrevChild_Callback(KPageDialog_FocusNextPrevChild_Callback cb) { kpagedialog_focusnextprevchild_callback = cb; }
    inline void setKPageDialog_TimerEvent_Callback(KPageDialog_TimerEvent_Callback cb) { kpagedialog_timerevent_callback = cb; }
    inline void setKPageDialog_ChildEvent_Callback(KPageDialog_ChildEvent_Callback cb) { kpagedialog_childevent_callback = cb; }
    inline void setKPageDialog_CustomEvent_Callback(KPageDialog_CustomEvent_Callback cb) { kpagedialog_customevent_callback = cb; }
    inline void setKPageDialog_ConnectNotify_Callback(KPageDialog_ConnectNotify_Callback cb) { kpagedialog_connectnotify_callback = cb; }
    inline void setKPageDialog_DisconnectNotify_Callback(KPageDialog_DisconnectNotify_Callback cb) { kpagedialog_disconnectnotify_callback = cb; }
    inline void setKPageDialog_PageWidget_Callback(KPageDialog_PageWidget_Callback cb) { kpagedialog_pagewidget_callback = cb; }
    inline void setKPageDialog_PageWidget2_Callback(KPageDialog_PageWidget2_Callback cb) { kpagedialog_pagewidget2_callback = cb; }
    inline void setKPageDialog_SetPageWidget_Callback(KPageDialog_SetPageWidget_Callback cb) { kpagedialog_setpagewidget_callback = cb; }
    inline void setKPageDialog_ButtonBox_Callback(KPageDialog_ButtonBox_Callback cb) { kpagedialog_buttonbox_callback = cb; }
    inline void setKPageDialog_ButtonBox2_Callback(KPageDialog_ButtonBox2_Callback cb) { kpagedialog_buttonbox2_callback = cb; }
    inline void setKPageDialog_SetButtonBox_Callback(KPageDialog_SetButtonBox_Callback cb) { kpagedialog_setbuttonbox_callback = cb; }
    inline void setKPageDialog_AdjustPosition_Callback(KPageDialog_AdjustPosition_Callback cb) { kpagedialog_adjustposition_callback = cb; }
    inline void setKPageDialog_UpdateMicroFocus_Callback(KPageDialog_UpdateMicroFocus_Callback cb) { kpagedialog_updatemicrofocus_callback = cb; }
    inline void setKPageDialog_Create_Callback(KPageDialog_Create_Callback cb) { kpagedialog_create_callback = cb; }
    inline void setKPageDialog_Destroy_Callback(KPageDialog_Destroy_Callback cb) { kpagedialog_destroy_callback = cb; }
    inline void setKPageDialog_FocusNextChild_Callback(KPageDialog_FocusNextChild_Callback cb) { kpagedialog_focusnextchild_callback = cb; }
    inline void setKPageDialog_FocusPreviousChild_Callback(KPageDialog_FocusPreviousChild_Callback cb) { kpagedialog_focuspreviouschild_callback = cb; }
    inline void setKPageDialog_Sender_Callback(KPageDialog_Sender_Callback cb) { kpagedialog_sender_callback = cb; }
    inline void setKPageDialog_SenderSignalIndex_Callback(KPageDialog_SenderSignalIndex_Callback cb) { kpagedialog_sendersignalindex_callback = cb; }
    inline void setKPageDialog_Receivers_Callback(KPageDialog_Receivers_Callback cb) { kpagedialog_receivers_callback = cb; }
    inline void setKPageDialog_IsSignalConnected_Callback(KPageDialog_IsSignalConnected_Callback cb) { kpagedialog_issignalconnected_callback = cb; }
    inline void setKPageDialog_GetDecodedMetricF_Callback(KPageDialog_GetDecodedMetricF_Callback cb) { kpagedialog_getdecodedmetricf_callback = cb; }

    // Base flag setters
    inline void setKPageDialog_Metacall_IsBase(bool value) const { kpagedialog_metacall_isbase = value; }
    inline void setKPageDialog_SetVisible_IsBase(bool value) const { kpagedialog_setvisible_isbase = value; }
    inline void setKPageDialog_SizeHint_IsBase(bool value) const { kpagedialog_sizehint_isbase = value; }
    inline void setKPageDialog_MinimumSizeHint_IsBase(bool value) const { kpagedialog_minimumsizehint_isbase = value; }
    inline void setKPageDialog_Open_IsBase(bool value) const { kpagedialog_open_isbase = value; }
    inline void setKPageDialog_Exec_IsBase(bool value) const { kpagedialog_exec_isbase = value; }
    inline void setKPageDialog_Done_IsBase(bool value) const { kpagedialog_done_isbase = value; }
    inline void setKPageDialog_Accept_IsBase(bool value) const { kpagedialog_accept_isbase = value; }
    inline void setKPageDialog_Reject_IsBase(bool value) const { kpagedialog_reject_isbase = value; }
    inline void setKPageDialog_KeyPressEvent_IsBase(bool value) const { kpagedialog_keypressevent_isbase = value; }
    inline void setKPageDialog_CloseEvent_IsBase(bool value) const { kpagedialog_closeevent_isbase = value; }
    inline void setKPageDialog_ShowEvent_IsBase(bool value) const { kpagedialog_showevent_isbase = value; }
    inline void setKPageDialog_ResizeEvent_IsBase(bool value) const { kpagedialog_resizeevent_isbase = value; }
    inline void setKPageDialog_ContextMenuEvent_IsBase(bool value) const { kpagedialog_contextmenuevent_isbase = value; }
    inline void setKPageDialog_EventFilter_IsBase(bool value) const { kpagedialog_eventfilter_isbase = value; }
    inline void setKPageDialog_DevType_IsBase(bool value) const { kpagedialog_devtype_isbase = value; }
    inline void setKPageDialog_HeightForWidth_IsBase(bool value) const { kpagedialog_heightforwidth_isbase = value; }
    inline void setKPageDialog_HasHeightForWidth_IsBase(bool value) const { kpagedialog_hasheightforwidth_isbase = value; }
    inline void setKPageDialog_PaintEngine_IsBase(bool value) const { kpagedialog_paintengine_isbase = value; }
    inline void setKPageDialog_Event_IsBase(bool value) const { kpagedialog_event_isbase = value; }
    inline void setKPageDialog_MousePressEvent_IsBase(bool value) const { kpagedialog_mousepressevent_isbase = value; }
    inline void setKPageDialog_MouseReleaseEvent_IsBase(bool value) const { kpagedialog_mousereleaseevent_isbase = value; }
    inline void setKPageDialog_MouseDoubleClickEvent_IsBase(bool value) const { kpagedialog_mousedoubleclickevent_isbase = value; }
    inline void setKPageDialog_MouseMoveEvent_IsBase(bool value) const { kpagedialog_mousemoveevent_isbase = value; }
    inline void setKPageDialog_WheelEvent_IsBase(bool value) const { kpagedialog_wheelevent_isbase = value; }
    inline void setKPageDialog_KeyReleaseEvent_IsBase(bool value) const { kpagedialog_keyreleaseevent_isbase = value; }
    inline void setKPageDialog_FocusInEvent_IsBase(bool value) const { kpagedialog_focusinevent_isbase = value; }
    inline void setKPageDialog_FocusOutEvent_IsBase(bool value) const { kpagedialog_focusoutevent_isbase = value; }
    inline void setKPageDialog_EnterEvent_IsBase(bool value) const { kpagedialog_enterevent_isbase = value; }
    inline void setKPageDialog_LeaveEvent_IsBase(bool value) const { kpagedialog_leaveevent_isbase = value; }
    inline void setKPageDialog_PaintEvent_IsBase(bool value) const { kpagedialog_paintevent_isbase = value; }
    inline void setKPageDialog_MoveEvent_IsBase(bool value) const { kpagedialog_moveevent_isbase = value; }
    inline void setKPageDialog_TabletEvent_IsBase(bool value) const { kpagedialog_tabletevent_isbase = value; }
    inline void setKPageDialog_ActionEvent_IsBase(bool value) const { kpagedialog_actionevent_isbase = value; }
    inline void setKPageDialog_DragEnterEvent_IsBase(bool value) const { kpagedialog_dragenterevent_isbase = value; }
    inline void setKPageDialog_DragMoveEvent_IsBase(bool value) const { kpagedialog_dragmoveevent_isbase = value; }
    inline void setKPageDialog_DragLeaveEvent_IsBase(bool value) const { kpagedialog_dragleaveevent_isbase = value; }
    inline void setKPageDialog_DropEvent_IsBase(bool value) const { kpagedialog_dropevent_isbase = value; }
    inline void setKPageDialog_HideEvent_IsBase(bool value) const { kpagedialog_hideevent_isbase = value; }
    inline void setKPageDialog_NativeEvent_IsBase(bool value) const { kpagedialog_nativeevent_isbase = value; }
    inline void setKPageDialog_ChangeEvent_IsBase(bool value) const { kpagedialog_changeevent_isbase = value; }
    inline void setKPageDialog_Metric_IsBase(bool value) const { kpagedialog_metric_isbase = value; }
    inline void setKPageDialog_InitPainter_IsBase(bool value) const { kpagedialog_initpainter_isbase = value; }
    inline void setKPageDialog_Redirected_IsBase(bool value) const { kpagedialog_redirected_isbase = value; }
    inline void setKPageDialog_SharedPainter_IsBase(bool value) const { kpagedialog_sharedpainter_isbase = value; }
    inline void setKPageDialog_InputMethodEvent_IsBase(bool value) const { kpagedialog_inputmethodevent_isbase = value; }
    inline void setKPageDialog_InputMethodQuery_IsBase(bool value) const { kpagedialog_inputmethodquery_isbase = value; }
    inline void setKPageDialog_FocusNextPrevChild_IsBase(bool value) const { kpagedialog_focusnextprevchild_isbase = value; }
    inline void setKPageDialog_TimerEvent_IsBase(bool value) const { kpagedialog_timerevent_isbase = value; }
    inline void setKPageDialog_ChildEvent_IsBase(bool value) const { kpagedialog_childevent_isbase = value; }
    inline void setKPageDialog_CustomEvent_IsBase(bool value) const { kpagedialog_customevent_isbase = value; }
    inline void setKPageDialog_ConnectNotify_IsBase(bool value) const { kpagedialog_connectnotify_isbase = value; }
    inline void setKPageDialog_DisconnectNotify_IsBase(bool value) const { kpagedialog_disconnectnotify_isbase = value; }
    inline void setKPageDialog_PageWidget_IsBase(bool value) const { kpagedialog_pagewidget_isbase = value; }
    inline void setKPageDialog_PageWidget2_IsBase(bool value) const { kpagedialog_pagewidget2_isbase = value; }
    inline void setKPageDialog_SetPageWidget_IsBase(bool value) const { kpagedialog_setpagewidget_isbase = value; }
    inline void setKPageDialog_ButtonBox_IsBase(bool value) const { kpagedialog_buttonbox_isbase = value; }
    inline void setKPageDialog_ButtonBox2_IsBase(bool value) const { kpagedialog_buttonbox2_isbase = value; }
    inline void setKPageDialog_SetButtonBox_IsBase(bool value) const { kpagedialog_setbuttonbox_isbase = value; }
    inline void setKPageDialog_AdjustPosition_IsBase(bool value) const { kpagedialog_adjustposition_isbase = value; }
    inline void setKPageDialog_UpdateMicroFocus_IsBase(bool value) const { kpagedialog_updatemicrofocus_isbase = value; }
    inline void setKPageDialog_Create_IsBase(bool value) const { kpagedialog_create_isbase = value; }
    inline void setKPageDialog_Destroy_IsBase(bool value) const { kpagedialog_destroy_isbase = value; }
    inline void setKPageDialog_FocusNextChild_IsBase(bool value) const { kpagedialog_focusnextchild_isbase = value; }
    inline void setKPageDialog_FocusPreviousChild_IsBase(bool value) const { kpagedialog_focuspreviouschild_isbase = value; }
    inline void setKPageDialog_Sender_IsBase(bool value) const { kpagedialog_sender_isbase = value; }
    inline void setKPageDialog_SenderSignalIndex_IsBase(bool value) const { kpagedialog_sendersignalindex_isbase = value; }
    inline void setKPageDialog_Receivers_IsBase(bool value) const { kpagedialog_receivers_isbase = value; }
    inline void setKPageDialog_IsSignalConnected_IsBase(bool value) const { kpagedialog_issignalconnected_isbase = value; }
    inline void setKPageDialog_GetDecodedMetricF_IsBase(bool value) const { kpagedialog_getdecodedmetricf_isbase = value; }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (kpagedialog_metacall_isbase) {
            kpagedialog_metacall_isbase = false;
            return KPageDialog::qt_metacall(param1, param2, param3);
        } else if (kpagedialog_metacall_callback != nullptr) {
            int cbval1 = static_cast<int>(param1);
            int cbval2 = param2;
            void** cbval3 = param3;

            int callback_ret = kpagedialog_metacall_callback(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        } else {
            return KPageDialog::qt_metacall(param1, param2, param3);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void setVisible(bool visible) override {
        if (kpagedialog_setvisible_isbase) {
            kpagedialog_setvisible_isbase = false;
            KPageDialog::setVisible(visible);
        } else if (kpagedialog_setvisible_callback != nullptr) {
            bool cbval1 = visible;

            kpagedialog_setvisible_callback(this, cbval1);
        } else {
            KPageDialog::setVisible(visible);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QSize sizeHint() const override {
        if (kpagedialog_sizehint_isbase) {
            kpagedialog_sizehint_isbase = false;
            return KPageDialog::sizeHint();
        } else if (kpagedialog_sizehint_callback != nullptr) {
            QSize* callback_ret = kpagedialog_sizehint_callback();
            return *callback_ret;
        } else {
            return KPageDialog::sizeHint();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QSize minimumSizeHint() const override {
        if (kpagedialog_minimumsizehint_isbase) {
            kpagedialog_minimumsizehint_isbase = false;
            return KPageDialog::minimumSizeHint();
        } else if (kpagedialog_minimumsizehint_callback != nullptr) {
            QSize* callback_ret = kpagedialog_minimumsizehint_callback();
            return *callback_ret;
        } else {
            return KPageDialog::minimumSizeHint();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void open() override {
        if (kpagedialog_open_isbase) {
            kpagedialog_open_isbase = false;
            KPageDialog::open();
        } else if (kpagedialog_open_callback != nullptr) {
            kpagedialog_open_callback();
        } else {
            KPageDialog::open();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual int exec() override {
        if (kpagedialog_exec_isbase) {
            kpagedialog_exec_isbase = false;
            return KPageDialog::exec();
        } else if (kpagedialog_exec_callback != nullptr) {
            int callback_ret = kpagedialog_exec_callback();
            return static_cast<int>(callback_ret);
        } else {
            return KPageDialog::exec();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void done(int param1) override {
        if (kpagedialog_done_isbase) {
            kpagedialog_done_isbase = false;
            KPageDialog::done(param1);
        } else if (kpagedialog_done_callback != nullptr) {
            int cbval1 = param1;

            kpagedialog_done_callback(this, cbval1);
        } else {
            KPageDialog::done(param1);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void accept() override {
        if (kpagedialog_accept_isbase) {
            kpagedialog_accept_isbase = false;
            KPageDialog::accept();
        } else if (kpagedialog_accept_callback != nullptr) {
            kpagedialog_accept_callback();
        } else {
            KPageDialog::accept();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void reject() override {
        if (kpagedialog_reject_isbase) {
            kpagedialog_reject_isbase = false;
            KPageDialog::reject();
        } else if (kpagedialog_reject_callback != nullptr) {
            kpagedialog_reject_callback();
        } else {
            KPageDialog::reject();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void keyPressEvent(QKeyEvent* param1) override {
        if (kpagedialog_keypressevent_isbase) {
            kpagedialog_keypressevent_isbase = false;
            KPageDialog::keyPressEvent(param1);
        } else if (kpagedialog_keypressevent_callback != nullptr) {
            QKeyEvent* cbval1 = param1;

            kpagedialog_keypressevent_callback(this, cbval1);
        } else {
            KPageDialog::keyPressEvent(param1);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void closeEvent(QCloseEvent* param1) override {
        if (kpagedialog_closeevent_isbase) {
            kpagedialog_closeevent_isbase = false;
            KPageDialog::closeEvent(param1);
        } else if (kpagedialog_closeevent_callback != nullptr) {
            QCloseEvent* cbval1 = param1;

            kpagedialog_closeevent_callback(this, cbval1);
        } else {
            KPageDialog::closeEvent(param1);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void showEvent(QShowEvent* param1) override {
        if (kpagedialog_showevent_isbase) {
            kpagedialog_showevent_isbase = false;
            KPageDialog::showEvent(param1);
        } else if (kpagedialog_showevent_callback != nullptr) {
            QShowEvent* cbval1 = param1;

            kpagedialog_showevent_callback(this, cbval1);
        } else {
            KPageDialog::showEvent(param1);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void resizeEvent(QResizeEvent* param1) override {
        if (kpagedialog_resizeevent_isbase) {
            kpagedialog_resizeevent_isbase = false;
            KPageDialog::resizeEvent(param1);
        } else if (kpagedialog_resizeevent_callback != nullptr) {
            QResizeEvent* cbval1 = param1;

            kpagedialog_resizeevent_callback(this, cbval1);
        } else {
            KPageDialog::resizeEvent(param1);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void contextMenuEvent(QContextMenuEvent* param1) override {
        if (kpagedialog_contextmenuevent_isbase) {
            kpagedialog_contextmenuevent_isbase = false;
            KPageDialog::contextMenuEvent(param1);
        } else if (kpagedialog_contextmenuevent_callback != nullptr) {
            QContextMenuEvent* cbval1 = param1;

            kpagedialog_contextmenuevent_callback(this, cbval1);
        } else {
            KPageDialog::contextMenuEvent(param1);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* param1, QEvent* param2) override {
        if (kpagedialog_eventfilter_isbase) {
            kpagedialog_eventfilter_isbase = false;
            return KPageDialog::eventFilter(param1, param2);
        } else if (kpagedialog_eventfilter_callback != nullptr) {
            QObject* cbval1 = param1;
            QEvent* cbval2 = param2;

            bool callback_ret = kpagedialog_eventfilter_callback(this, cbval1, cbval2);
            return callback_ret;
        } else {
            return KPageDialog::eventFilter(param1, param2);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual int devType() const override {
        if (kpagedialog_devtype_isbase) {
            kpagedialog_devtype_isbase = false;
            return KPageDialog::devType();
        } else if (kpagedialog_devtype_callback != nullptr) {
            int callback_ret = kpagedialog_devtype_callback();
            return static_cast<int>(callback_ret);
        } else {
            return KPageDialog::devType();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual int heightForWidth(int param1) const override {
        if (kpagedialog_heightforwidth_isbase) {
            kpagedialog_heightforwidth_isbase = false;
            return KPageDialog::heightForWidth(param1);
        } else if (kpagedialog_heightforwidth_callback != nullptr) {
            int cbval1 = param1;

            int callback_ret = kpagedialog_heightforwidth_callback(this, cbval1);
            return static_cast<int>(callback_ret);
        } else {
            return KPageDialog::heightForWidth(param1);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool hasHeightForWidth() const override {
        if (kpagedialog_hasheightforwidth_isbase) {
            kpagedialog_hasheightforwidth_isbase = false;
            return KPageDialog::hasHeightForWidth();
        } else if (kpagedialog_hasheightforwidth_callback != nullptr) {
            bool callback_ret = kpagedialog_hasheightforwidth_callback();
            return callback_ret;
        } else {
            return KPageDialog::hasHeightForWidth();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QPaintEngine* paintEngine() const override {
        if (kpagedialog_paintengine_isbase) {
            kpagedialog_paintengine_isbase = false;
            return KPageDialog::paintEngine();
        } else if (kpagedialog_paintengine_callback != nullptr) {
            QPaintEngine* callback_ret = kpagedialog_paintengine_callback();
            return callback_ret;
        } else {
            return KPageDialog::paintEngine();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* event) override {
        if (kpagedialog_event_isbase) {
            kpagedialog_event_isbase = false;
            return KPageDialog::event(event);
        } else if (kpagedialog_event_callback != nullptr) {
            QEvent* cbval1 = event;

            bool callback_ret = kpagedialog_event_callback(this, cbval1);
            return callback_ret;
        } else {
            return KPageDialog::event(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void mousePressEvent(QMouseEvent* event) override {
        if (kpagedialog_mousepressevent_isbase) {
            kpagedialog_mousepressevent_isbase = false;
            KPageDialog::mousePressEvent(event);
        } else if (kpagedialog_mousepressevent_callback != nullptr) {
            QMouseEvent* cbval1 = event;

            kpagedialog_mousepressevent_callback(this, cbval1);
        } else {
            KPageDialog::mousePressEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseReleaseEvent(QMouseEvent* event) override {
        if (kpagedialog_mousereleaseevent_isbase) {
            kpagedialog_mousereleaseevent_isbase = false;
            KPageDialog::mouseReleaseEvent(event);
        } else if (kpagedialog_mousereleaseevent_callback != nullptr) {
            QMouseEvent* cbval1 = event;

            kpagedialog_mousereleaseevent_callback(this, cbval1);
        } else {
            KPageDialog::mouseReleaseEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseDoubleClickEvent(QMouseEvent* event) override {
        if (kpagedialog_mousedoubleclickevent_isbase) {
            kpagedialog_mousedoubleclickevent_isbase = false;
            KPageDialog::mouseDoubleClickEvent(event);
        } else if (kpagedialog_mousedoubleclickevent_callback != nullptr) {
            QMouseEvent* cbval1 = event;

            kpagedialog_mousedoubleclickevent_callback(this, cbval1);
        } else {
            KPageDialog::mouseDoubleClickEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseMoveEvent(QMouseEvent* event) override {
        if (kpagedialog_mousemoveevent_isbase) {
            kpagedialog_mousemoveevent_isbase = false;
            KPageDialog::mouseMoveEvent(event);
        } else if (kpagedialog_mousemoveevent_callback != nullptr) {
            QMouseEvent* cbval1 = event;

            kpagedialog_mousemoveevent_callback(this, cbval1);
        } else {
            KPageDialog::mouseMoveEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void wheelEvent(QWheelEvent* event) override {
        if (kpagedialog_wheelevent_isbase) {
            kpagedialog_wheelevent_isbase = false;
            KPageDialog::wheelEvent(event);
        } else if (kpagedialog_wheelevent_callback != nullptr) {
            QWheelEvent* cbval1 = event;

            kpagedialog_wheelevent_callback(this, cbval1);
        } else {
            KPageDialog::wheelEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void keyReleaseEvent(QKeyEvent* event) override {
        if (kpagedialog_keyreleaseevent_isbase) {
            kpagedialog_keyreleaseevent_isbase = false;
            KPageDialog::keyReleaseEvent(event);
        } else if (kpagedialog_keyreleaseevent_callback != nullptr) {
            QKeyEvent* cbval1 = event;

            kpagedialog_keyreleaseevent_callback(this, cbval1);
        } else {
            KPageDialog::keyReleaseEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void focusInEvent(QFocusEvent* event) override {
        if (kpagedialog_focusinevent_isbase) {
            kpagedialog_focusinevent_isbase = false;
            KPageDialog::focusInEvent(event);
        } else if (kpagedialog_focusinevent_callback != nullptr) {
            QFocusEvent* cbval1 = event;

            kpagedialog_focusinevent_callback(this, cbval1);
        } else {
            KPageDialog::focusInEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void focusOutEvent(QFocusEvent* event) override {
        if (kpagedialog_focusoutevent_isbase) {
            kpagedialog_focusoutevent_isbase = false;
            KPageDialog::focusOutEvent(event);
        } else if (kpagedialog_focusoutevent_callback != nullptr) {
            QFocusEvent* cbval1 = event;

            kpagedialog_focusoutevent_callback(this, cbval1);
        } else {
            KPageDialog::focusOutEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void enterEvent(QEnterEvent* event) override {
        if (kpagedialog_enterevent_isbase) {
            kpagedialog_enterevent_isbase = false;
            KPageDialog::enterEvent(event);
        } else if (kpagedialog_enterevent_callback != nullptr) {
            QEnterEvent* cbval1 = event;

            kpagedialog_enterevent_callback(this, cbval1);
        } else {
            KPageDialog::enterEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void leaveEvent(QEvent* event) override {
        if (kpagedialog_leaveevent_isbase) {
            kpagedialog_leaveevent_isbase = false;
            KPageDialog::leaveEvent(event);
        } else if (kpagedialog_leaveevent_callback != nullptr) {
            QEvent* cbval1 = event;

            kpagedialog_leaveevent_callback(this, cbval1);
        } else {
            KPageDialog::leaveEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void paintEvent(QPaintEvent* event) override {
        if (kpagedialog_paintevent_isbase) {
            kpagedialog_paintevent_isbase = false;
            KPageDialog::paintEvent(event);
        } else if (kpagedialog_paintevent_callback != nullptr) {
            QPaintEvent* cbval1 = event;

            kpagedialog_paintevent_callback(this, cbval1);
        } else {
            KPageDialog::paintEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void moveEvent(QMoveEvent* event) override {
        if (kpagedialog_moveevent_isbase) {
            kpagedialog_moveevent_isbase = false;
            KPageDialog::moveEvent(event);
        } else if (kpagedialog_moveevent_callback != nullptr) {
            QMoveEvent* cbval1 = event;

            kpagedialog_moveevent_callback(this, cbval1);
        } else {
            KPageDialog::moveEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void tabletEvent(QTabletEvent* event) override {
        if (kpagedialog_tabletevent_isbase) {
            kpagedialog_tabletevent_isbase = false;
            KPageDialog::tabletEvent(event);
        } else if (kpagedialog_tabletevent_callback != nullptr) {
            QTabletEvent* cbval1 = event;

            kpagedialog_tabletevent_callback(this, cbval1);
        } else {
            KPageDialog::tabletEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void actionEvent(QActionEvent* event) override {
        if (kpagedialog_actionevent_isbase) {
            kpagedialog_actionevent_isbase = false;
            KPageDialog::actionEvent(event);
        } else if (kpagedialog_actionevent_callback != nullptr) {
            QActionEvent* cbval1 = event;

            kpagedialog_actionevent_callback(this, cbval1);
        } else {
            KPageDialog::actionEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragEnterEvent(QDragEnterEvent* event) override {
        if (kpagedialog_dragenterevent_isbase) {
            kpagedialog_dragenterevent_isbase = false;
            KPageDialog::dragEnterEvent(event);
        } else if (kpagedialog_dragenterevent_callback != nullptr) {
            QDragEnterEvent* cbval1 = event;

            kpagedialog_dragenterevent_callback(this, cbval1);
        } else {
            KPageDialog::dragEnterEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragMoveEvent(QDragMoveEvent* event) override {
        if (kpagedialog_dragmoveevent_isbase) {
            kpagedialog_dragmoveevent_isbase = false;
            KPageDialog::dragMoveEvent(event);
        } else if (kpagedialog_dragmoveevent_callback != nullptr) {
            QDragMoveEvent* cbval1 = event;

            kpagedialog_dragmoveevent_callback(this, cbval1);
        } else {
            KPageDialog::dragMoveEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragLeaveEvent(QDragLeaveEvent* event) override {
        if (kpagedialog_dragleaveevent_isbase) {
            kpagedialog_dragleaveevent_isbase = false;
            KPageDialog::dragLeaveEvent(event);
        } else if (kpagedialog_dragleaveevent_callback != nullptr) {
            QDragLeaveEvent* cbval1 = event;

            kpagedialog_dragleaveevent_callback(this, cbval1);
        } else {
            KPageDialog::dragLeaveEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void dropEvent(QDropEvent* event) override {
        if (kpagedialog_dropevent_isbase) {
            kpagedialog_dropevent_isbase = false;
            KPageDialog::dropEvent(event);
        } else if (kpagedialog_dropevent_callback != nullptr) {
            QDropEvent* cbval1 = event;

            kpagedialog_dropevent_callback(this, cbval1);
        } else {
            KPageDialog::dropEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void hideEvent(QHideEvent* event) override {
        if (kpagedialog_hideevent_isbase) {
            kpagedialog_hideevent_isbase = false;
            KPageDialog::hideEvent(event);
        } else if (kpagedialog_hideevent_callback != nullptr) {
            QHideEvent* cbval1 = event;

            kpagedialog_hideevent_callback(this, cbval1);
        } else {
            KPageDialog::hideEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool nativeEvent(const QByteArray& eventType, void* message, qintptr* result) override {
        if (kpagedialog_nativeevent_isbase) {
            kpagedialog_nativeevent_isbase = false;
            return KPageDialog::nativeEvent(eventType, message, result);
        } else if (kpagedialog_nativeevent_callback != nullptr) {
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

            bool callback_ret = kpagedialog_nativeevent_callback(this, cbval1, cbval2, cbval3);
            return callback_ret;
        } else {
            return KPageDialog::nativeEvent(eventType, message, result);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void changeEvent(QEvent* param1) override {
        if (kpagedialog_changeevent_isbase) {
            kpagedialog_changeevent_isbase = false;
            KPageDialog::changeEvent(param1);
        } else if (kpagedialog_changeevent_callback != nullptr) {
            QEvent* cbval1 = param1;

            kpagedialog_changeevent_callback(this, cbval1);
        } else {
            KPageDialog::changeEvent(param1);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual int metric(QPaintDevice::PaintDeviceMetric param1) const override {
        if (kpagedialog_metric_isbase) {
            kpagedialog_metric_isbase = false;
            return KPageDialog::metric(param1);
        } else if (kpagedialog_metric_callback != nullptr) {
            int cbval1 = static_cast<int>(param1);

            int callback_ret = kpagedialog_metric_callback(this, cbval1);
            return static_cast<int>(callback_ret);
        } else {
            return KPageDialog::metric(param1);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void initPainter(QPainter* painter) const override {
        if (kpagedialog_initpainter_isbase) {
            kpagedialog_initpainter_isbase = false;
            KPageDialog::initPainter(painter);
        } else if (kpagedialog_initpainter_callback != nullptr) {
            QPainter* cbval1 = painter;

            kpagedialog_initpainter_callback(this, cbval1);
        } else {
            KPageDialog::initPainter(painter);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QPaintDevice* redirected(QPoint* offset) const override {
        if (kpagedialog_redirected_isbase) {
            kpagedialog_redirected_isbase = false;
            return KPageDialog::redirected(offset);
        } else if (kpagedialog_redirected_callback != nullptr) {
            QPoint* cbval1 = offset;

            QPaintDevice* callback_ret = kpagedialog_redirected_callback(this, cbval1);
            return callback_ret;
        } else {
            return KPageDialog::redirected(offset);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QPainter* sharedPainter() const override {
        if (kpagedialog_sharedpainter_isbase) {
            kpagedialog_sharedpainter_isbase = false;
            return KPageDialog::sharedPainter();
        } else if (kpagedialog_sharedpainter_callback != nullptr) {
            QPainter* callback_ret = kpagedialog_sharedpainter_callback();
            return callback_ret;
        } else {
            return KPageDialog::sharedPainter();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void inputMethodEvent(QInputMethodEvent* param1) override {
        if (kpagedialog_inputmethodevent_isbase) {
            kpagedialog_inputmethodevent_isbase = false;
            KPageDialog::inputMethodEvent(param1);
        } else if (kpagedialog_inputmethodevent_callback != nullptr) {
            QInputMethodEvent* cbval1 = param1;

            kpagedialog_inputmethodevent_callback(this, cbval1);
        } else {
            KPageDialog::inputMethodEvent(param1);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QVariant inputMethodQuery(Qt::InputMethodQuery param1) const override {
        if (kpagedialog_inputmethodquery_isbase) {
            kpagedialog_inputmethodquery_isbase = false;
            return KPageDialog::inputMethodQuery(param1);
        } else if (kpagedialog_inputmethodquery_callback != nullptr) {
            int cbval1 = static_cast<int>(param1);

            QVariant* callback_ret = kpagedialog_inputmethodquery_callback(this, cbval1);
            return *callback_ret;
        } else {
            return KPageDialog::inputMethodQuery(param1);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool focusNextPrevChild(bool next) override {
        if (kpagedialog_focusnextprevchild_isbase) {
            kpagedialog_focusnextprevchild_isbase = false;
            return KPageDialog::focusNextPrevChild(next);
        } else if (kpagedialog_focusnextprevchild_callback != nullptr) {
            bool cbval1 = next;

            bool callback_ret = kpagedialog_focusnextprevchild_callback(this, cbval1);
            return callback_ret;
        } else {
            return KPageDialog::focusNextPrevChild(next);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (kpagedialog_timerevent_isbase) {
            kpagedialog_timerevent_isbase = false;
            KPageDialog::timerEvent(event);
        } else if (kpagedialog_timerevent_callback != nullptr) {
            QTimerEvent* cbval1 = event;

            kpagedialog_timerevent_callback(this, cbval1);
        } else {
            KPageDialog::timerEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (kpagedialog_childevent_isbase) {
            kpagedialog_childevent_isbase = false;
            KPageDialog::childEvent(event);
        } else if (kpagedialog_childevent_callback != nullptr) {
            QChildEvent* cbval1 = event;

            kpagedialog_childevent_callback(this, cbval1);
        } else {
            KPageDialog::childEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (kpagedialog_customevent_isbase) {
            kpagedialog_customevent_isbase = false;
            KPageDialog::customEvent(event);
        } else if (kpagedialog_customevent_callback != nullptr) {
            QEvent* cbval1 = event;

            kpagedialog_customevent_callback(this, cbval1);
        } else {
            KPageDialog::customEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (kpagedialog_connectnotify_isbase) {
            kpagedialog_connectnotify_isbase = false;
            KPageDialog::connectNotify(signal);
        } else if (kpagedialog_connectnotify_callback != nullptr) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            kpagedialog_connectnotify_callback(this, cbval1);
        } else {
            KPageDialog::connectNotify(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (kpagedialog_disconnectnotify_isbase) {
            kpagedialog_disconnectnotify_isbase = false;
            KPageDialog::disconnectNotify(signal);
        } else if (kpagedialog_disconnectnotify_callback != nullptr) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            kpagedialog_disconnectnotify_callback(this, cbval1);
        } else {
            KPageDialog::disconnectNotify(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    KPageWidget* pageWidget() {
        if (kpagedialog_pagewidget_isbase) {
            kpagedialog_pagewidget_isbase = false;
            return KPageDialog::pageWidget();
        } else if (kpagedialog_pagewidget_callback != nullptr) {
            KPageWidget* callback_ret = kpagedialog_pagewidget_callback();
            return callback_ret;
        } else {
            return KPageDialog::pageWidget();
        }
    }

    // Virtual method for C ABI access and custom callback
    const KPageWidget* pageWidget() const {
        if (kpagedialog_pagewidget2_isbase) {
            kpagedialog_pagewidget2_isbase = false;
            return KPageDialog::pageWidget();
        } else if (kpagedialog_pagewidget2_callback != nullptr) {
            KPageWidget* callback_ret = kpagedialog_pagewidget2_callback();
            return callback_ret;
        } else {
            return KPageDialog::pageWidget();
        }
    }

    // Virtual method for C ABI access and custom callback
    void setPageWidget(KPageWidget* widget) {
        if (kpagedialog_setpagewidget_isbase) {
            kpagedialog_setpagewidget_isbase = false;
            KPageDialog::setPageWidget(widget);
        } else if (kpagedialog_setpagewidget_callback != nullptr) {
            KPageWidget* cbval1 = widget;

            kpagedialog_setpagewidget_callback(this, cbval1);
        } else {
            KPageDialog::setPageWidget(widget);
        }
    }

    // Virtual method for C ABI access and custom callback
    QDialogButtonBox* buttonBox() {
        if (kpagedialog_buttonbox_isbase) {
            kpagedialog_buttonbox_isbase = false;
            return KPageDialog::buttonBox();
        } else if (kpagedialog_buttonbox_callback != nullptr) {
            QDialogButtonBox* callback_ret = kpagedialog_buttonbox_callback();
            return callback_ret;
        } else {
            return KPageDialog::buttonBox();
        }
    }

    // Virtual method for C ABI access and custom callback
    const QDialogButtonBox* buttonBox() const {
        if (kpagedialog_buttonbox2_isbase) {
            kpagedialog_buttonbox2_isbase = false;
            return KPageDialog::buttonBox();
        } else if (kpagedialog_buttonbox2_callback != nullptr) {
            QDialogButtonBox* callback_ret = kpagedialog_buttonbox2_callback();
            return callback_ret;
        } else {
            return KPageDialog::buttonBox();
        }
    }

    // Virtual method for C ABI access and custom callback
    void setButtonBox(QDialogButtonBox* box) {
        if (kpagedialog_setbuttonbox_isbase) {
            kpagedialog_setbuttonbox_isbase = false;
            KPageDialog::setButtonBox(box);
        } else if (kpagedialog_setbuttonbox_callback != nullptr) {
            QDialogButtonBox* cbval1 = box;

            kpagedialog_setbuttonbox_callback(this, cbval1);
        } else {
            KPageDialog::setButtonBox(box);
        }
    }

    // Virtual method for C ABI access and custom callback
    void adjustPosition(QWidget* param1) {
        if (kpagedialog_adjustposition_isbase) {
            kpagedialog_adjustposition_isbase = false;
            KPageDialog::adjustPosition(param1);
        } else if (kpagedialog_adjustposition_callback != nullptr) {
            QWidget* cbval1 = param1;

            kpagedialog_adjustposition_callback(this, cbval1);
        } else {
            KPageDialog::adjustPosition(param1);
        }
    }

    // Virtual method for C ABI access and custom callback
    void updateMicroFocus() {
        if (kpagedialog_updatemicrofocus_isbase) {
            kpagedialog_updatemicrofocus_isbase = false;
            KPageDialog::updateMicroFocus();
        } else if (kpagedialog_updatemicrofocus_callback != nullptr) {
            kpagedialog_updatemicrofocus_callback();
        } else {
            KPageDialog::updateMicroFocus();
        }
    }

    // Virtual method for C ABI access and custom callback
    void create() {
        if (kpagedialog_create_isbase) {
            kpagedialog_create_isbase = false;
            KPageDialog::create();
        } else if (kpagedialog_create_callback != nullptr) {
            kpagedialog_create_callback();
        } else {
            KPageDialog::create();
        }
    }

    // Virtual method for C ABI access and custom callback
    void destroy() {
        if (kpagedialog_destroy_isbase) {
            kpagedialog_destroy_isbase = false;
            KPageDialog::destroy();
        } else if (kpagedialog_destroy_callback != nullptr) {
            kpagedialog_destroy_callback();
        } else {
            KPageDialog::destroy();
        }
    }

    // Virtual method for C ABI access and custom callback
    bool focusNextChild() {
        if (kpagedialog_focusnextchild_isbase) {
            kpagedialog_focusnextchild_isbase = false;
            return KPageDialog::focusNextChild();
        } else if (kpagedialog_focusnextchild_callback != nullptr) {
            bool callback_ret = kpagedialog_focusnextchild_callback();
            return callback_ret;
        } else {
            return KPageDialog::focusNextChild();
        }
    }

    // Virtual method for C ABI access and custom callback
    bool focusPreviousChild() {
        if (kpagedialog_focuspreviouschild_isbase) {
            kpagedialog_focuspreviouschild_isbase = false;
            return KPageDialog::focusPreviousChild();
        } else if (kpagedialog_focuspreviouschild_callback != nullptr) {
            bool callback_ret = kpagedialog_focuspreviouschild_callback();
            return callback_ret;
        } else {
            return KPageDialog::focusPreviousChild();
        }
    }

    // Virtual method for C ABI access and custom callback
    QObject* sender() const {
        if (kpagedialog_sender_isbase) {
            kpagedialog_sender_isbase = false;
            return KPageDialog::sender();
        } else if (kpagedialog_sender_callback != nullptr) {
            QObject* callback_ret = kpagedialog_sender_callback();
            return callback_ret;
        } else {
            return KPageDialog::sender();
        }
    }

    // Virtual method for C ABI access and custom callback
    int senderSignalIndex() const {
        if (kpagedialog_sendersignalindex_isbase) {
            kpagedialog_sendersignalindex_isbase = false;
            return KPageDialog::senderSignalIndex();
        } else if (kpagedialog_sendersignalindex_callback != nullptr) {
            int callback_ret = kpagedialog_sendersignalindex_callback();
            return static_cast<int>(callback_ret);
        } else {
            return KPageDialog::senderSignalIndex();
        }
    }

    // Virtual method for C ABI access and custom callback
    int receivers(const char* signal) const {
        if (kpagedialog_receivers_isbase) {
            kpagedialog_receivers_isbase = false;
            return KPageDialog::receivers(signal);
        } else if (kpagedialog_receivers_callback != nullptr) {
            const char* cbval1 = (const char*)signal;

            int callback_ret = kpagedialog_receivers_callback(this, cbval1);
            return static_cast<int>(callback_ret);
        } else {
            return KPageDialog::receivers(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    bool isSignalConnected(const QMetaMethod& signal) const {
        if (kpagedialog_issignalconnected_isbase) {
            kpagedialog_issignalconnected_isbase = false;
            return KPageDialog::isSignalConnected(signal);
        } else if (kpagedialog_issignalconnected_callback != nullptr) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            bool callback_ret = kpagedialog_issignalconnected_callback(this, cbval1);
            return callback_ret;
        } else {
            return KPageDialog::isSignalConnected(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    double getDecodedMetricF(QPaintDevice::PaintDeviceMetric metricA, QPaintDevice::PaintDeviceMetric metricB) const {
        if (kpagedialog_getdecodedmetricf_isbase) {
            kpagedialog_getdecodedmetricf_isbase = false;
            return KPageDialog::getDecodedMetricF(metricA, metricB);
        } else if (kpagedialog_getdecodedmetricf_callback != nullptr) {
            int cbval1 = static_cast<int>(metricA);
            int cbval2 = static_cast<int>(metricB);

            double callback_ret = kpagedialog_getdecodedmetricf_callback(this, cbval1, cbval2);
            return static_cast<double>(callback_ret);
        } else {
            return KPageDialog::getDecodedMetricF(metricA, metricB);
        }
    }

    // Friend functions
    friend void KPageDialog_KeyPressEvent(KPageDialog* self, QKeyEvent* param1);
    friend void KPageDialog_QBaseKeyPressEvent(KPageDialog* self, QKeyEvent* param1);
    friend void KPageDialog_CloseEvent(KPageDialog* self, QCloseEvent* param1);
    friend void KPageDialog_QBaseCloseEvent(KPageDialog* self, QCloseEvent* param1);
    friend void KPageDialog_ShowEvent(KPageDialog* self, QShowEvent* param1);
    friend void KPageDialog_QBaseShowEvent(KPageDialog* self, QShowEvent* param1);
    friend void KPageDialog_ResizeEvent(KPageDialog* self, QResizeEvent* param1);
    friend void KPageDialog_QBaseResizeEvent(KPageDialog* self, QResizeEvent* param1);
    friend void KPageDialog_ContextMenuEvent(KPageDialog* self, QContextMenuEvent* param1);
    friend void KPageDialog_QBaseContextMenuEvent(KPageDialog* self, QContextMenuEvent* param1);
    friend bool KPageDialog_EventFilter(KPageDialog* self, QObject* param1, QEvent* param2);
    friend bool KPageDialog_QBaseEventFilter(KPageDialog* self, QObject* param1, QEvent* param2);
    friend bool KPageDialog_Event(KPageDialog* self, QEvent* event);
    friend bool KPageDialog_QBaseEvent(KPageDialog* self, QEvent* event);
    friend void KPageDialog_MousePressEvent(KPageDialog* self, QMouseEvent* event);
    friend void KPageDialog_QBaseMousePressEvent(KPageDialog* self, QMouseEvent* event);
    friend void KPageDialog_MouseReleaseEvent(KPageDialog* self, QMouseEvent* event);
    friend void KPageDialog_QBaseMouseReleaseEvent(KPageDialog* self, QMouseEvent* event);
    friend void KPageDialog_MouseDoubleClickEvent(KPageDialog* self, QMouseEvent* event);
    friend void KPageDialog_QBaseMouseDoubleClickEvent(KPageDialog* self, QMouseEvent* event);
    friend void KPageDialog_MouseMoveEvent(KPageDialog* self, QMouseEvent* event);
    friend void KPageDialog_QBaseMouseMoveEvent(KPageDialog* self, QMouseEvent* event);
    friend void KPageDialog_WheelEvent(KPageDialog* self, QWheelEvent* event);
    friend void KPageDialog_QBaseWheelEvent(KPageDialog* self, QWheelEvent* event);
    friend void KPageDialog_KeyReleaseEvent(KPageDialog* self, QKeyEvent* event);
    friend void KPageDialog_QBaseKeyReleaseEvent(KPageDialog* self, QKeyEvent* event);
    friend void KPageDialog_FocusInEvent(KPageDialog* self, QFocusEvent* event);
    friend void KPageDialog_QBaseFocusInEvent(KPageDialog* self, QFocusEvent* event);
    friend void KPageDialog_FocusOutEvent(KPageDialog* self, QFocusEvent* event);
    friend void KPageDialog_QBaseFocusOutEvent(KPageDialog* self, QFocusEvent* event);
    friend void KPageDialog_EnterEvent(KPageDialog* self, QEnterEvent* event);
    friend void KPageDialog_QBaseEnterEvent(KPageDialog* self, QEnterEvent* event);
    friend void KPageDialog_LeaveEvent(KPageDialog* self, QEvent* event);
    friend void KPageDialog_QBaseLeaveEvent(KPageDialog* self, QEvent* event);
    friend void KPageDialog_PaintEvent(KPageDialog* self, QPaintEvent* event);
    friend void KPageDialog_QBasePaintEvent(KPageDialog* self, QPaintEvent* event);
    friend void KPageDialog_MoveEvent(KPageDialog* self, QMoveEvent* event);
    friend void KPageDialog_QBaseMoveEvent(KPageDialog* self, QMoveEvent* event);
    friend void KPageDialog_TabletEvent(KPageDialog* self, QTabletEvent* event);
    friend void KPageDialog_QBaseTabletEvent(KPageDialog* self, QTabletEvent* event);
    friend void KPageDialog_ActionEvent(KPageDialog* self, QActionEvent* event);
    friend void KPageDialog_QBaseActionEvent(KPageDialog* self, QActionEvent* event);
    friend void KPageDialog_DragEnterEvent(KPageDialog* self, QDragEnterEvent* event);
    friend void KPageDialog_QBaseDragEnterEvent(KPageDialog* self, QDragEnterEvent* event);
    friend void KPageDialog_DragMoveEvent(KPageDialog* self, QDragMoveEvent* event);
    friend void KPageDialog_QBaseDragMoveEvent(KPageDialog* self, QDragMoveEvent* event);
    friend void KPageDialog_DragLeaveEvent(KPageDialog* self, QDragLeaveEvent* event);
    friend void KPageDialog_QBaseDragLeaveEvent(KPageDialog* self, QDragLeaveEvent* event);
    friend void KPageDialog_DropEvent(KPageDialog* self, QDropEvent* event);
    friend void KPageDialog_QBaseDropEvent(KPageDialog* self, QDropEvent* event);
    friend void KPageDialog_HideEvent(KPageDialog* self, QHideEvent* event);
    friend void KPageDialog_QBaseHideEvent(KPageDialog* self, QHideEvent* event);
    friend bool KPageDialog_NativeEvent(KPageDialog* self, const libqt_string eventType, void* message, intptr_t* result);
    friend bool KPageDialog_QBaseNativeEvent(KPageDialog* self, const libqt_string eventType, void* message, intptr_t* result);
    friend void KPageDialog_ChangeEvent(KPageDialog* self, QEvent* param1);
    friend void KPageDialog_QBaseChangeEvent(KPageDialog* self, QEvent* param1);
    friend int KPageDialog_Metric(const KPageDialog* self, int param1);
    friend int KPageDialog_QBaseMetric(const KPageDialog* self, int param1);
    friend void KPageDialog_InitPainter(const KPageDialog* self, QPainter* painter);
    friend void KPageDialog_QBaseInitPainter(const KPageDialog* self, QPainter* painter);
    friend QPaintDevice* KPageDialog_Redirected(const KPageDialog* self, QPoint* offset);
    friend QPaintDevice* KPageDialog_QBaseRedirected(const KPageDialog* self, QPoint* offset);
    friend QPainter* KPageDialog_SharedPainter(const KPageDialog* self);
    friend QPainter* KPageDialog_QBaseSharedPainter(const KPageDialog* self);
    friend void KPageDialog_InputMethodEvent(KPageDialog* self, QInputMethodEvent* param1);
    friend void KPageDialog_QBaseInputMethodEvent(KPageDialog* self, QInputMethodEvent* param1);
    friend bool KPageDialog_FocusNextPrevChild(KPageDialog* self, bool next);
    friend bool KPageDialog_QBaseFocusNextPrevChild(KPageDialog* self, bool next);
    friend void KPageDialog_TimerEvent(KPageDialog* self, QTimerEvent* event);
    friend void KPageDialog_QBaseTimerEvent(KPageDialog* self, QTimerEvent* event);
    friend void KPageDialog_ChildEvent(KPageDialog* self, QChildEvent* event);
    friend void KPageDialog_QBaseChildEvent(KPageDialog* self, QChildEvent* event);
    friend void KPageDialog_CustomEvent(KPageDialog* self, QEvent* event);
    friend void KPageDialog_QBaseCustomEvent(KPageDialog* self, QEvent* event);
    friend void KPageDialog_ConnectNotify(KPageDialog* self, const QMetaMethod* signal);
    friend void KPageDialog_QBaseConnectNotify(KPageDialog* self, const QMetaMethod* signal);
    friend void KPageDialog_DisconnectNotify(KPageDialog* self, const QMetaMethod* signal);
    friend void KPageDialog_QBaseDisconnectNotify(KPageDialog* self, const QMetaMethod* signal);
    friend KPageWidget* KPageDialog_PageWidget(KPageDialog* self);
    friend KPageWidget* KPageDialog_QBasePageWidget(KPageDialog* self);
    friend KPageWidget* KPageDialog_PageWidget2(const KPageDialog* self);
    friend KPageWidget* KPageDialog_QBasePageWidget2(const KPageDialog* self);
    friend void KPageDialog_SetPageWidget(KPageDialog* self, KPageWidget* widget);
    friend void KPageDialog_QBaseSetPageWidget(KPageDialog* self, KPageWidget* widget);
    friend QDialogButtonBox* KPageDialog_ButtonBox(KPageDialog* self);
    friend QDialogButtonBox* KPageDialog_QBaseButtonBox(KPageDialog* self);
    friend QDialogButtonBox* KPageDialog_ButtonBox2(const KPageDialog* self);
    friend QDialogButtonBox* KPageDialog_QBaseButtonBox2(const KPageDialog* self);
    friend void KPageDialog_SetButtonBox(KPageDialog* self, QDialogButtonBox* box);
    friend void KPageDialog_QBaseSetButtonBox(KPageDialog* self, QDialogButtonBox* box);
    friend void KPageDialog_AdjustPosition(KPageDialog* self, QWidget* param1);
    friend void KPageDialog_QBaseAdjustPosition(KPageDialog* self, QWidget* param1);
    friend void KPageDialog_UpdateMicroFocus(KPageDialog* self);
    friend void KPageDialog_QBaseUpdateMicroFocus(KPageDialog* self);
    friend void KPageDialog_Create(KPageDialog* self);
    friend void KPageDialog_QBaseCreate(KPageDialog* self);
    friend void KPageDialog_Destroy(KPageDialog* self);
    friend void KPageDialog_QBaseDestroy(KPageDialog* self);
    friend bool KPageDialog_FocusNextChild(KPageDialog* self);
    friend bool KPageDialog_QBaseFocusNextChild(KPageDialog* self);
    friend bool KPageDialog_FocusPreviousChild(KPageDialog* self);
    friend bool KPageDialog_QBaseFocusPreviousChild(KPageDialog* self);
    friend QObject* KPageDialog_Sender(const KPageDialog* self);
    friend QObject* KPageDialog_QBaseSender(const KPageDialog* self);
    friend int KPageDialog_SenderSignalIndex(const KPageDialog* self);
    friend int KPageDialog_QBaseSenderSignalIndex(const KPageDialog* self);
    friend int KPageDialog_Receivers(const KPageDialog* self, const char* signal);
    friend int KPageDialog_QBaseReceivers(const KPageDialog* self, const char* signal);
    friend bool KPageDialog_IsSignalConnected(const KPageDialog* self, const QMetaMethod* signal);
    friend bool KPageDialog_QBaseIsSignalConnected(const KPageDialog* self, const QMetaMethod* signal);
    friend double KPageDialog_GetDecodedMetricF(const KPageDialog* self, int metricA, int metricB);
    friend double KPageDialog_QBaseGetDecodedMetricF(const KPageDialog* self, int metricA, int metricB);
};

#endif
