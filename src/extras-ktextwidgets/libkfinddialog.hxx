#pragma once
#ifndef SRC_EXTRAS_KTEXTWIDGETSC_LIBVIRTUALKFINDDIALOG_H
#define SRC_EXTRAS_KTEXTWIDGETSC_LIBVIRTUALKFINDDIALOG_H

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

// This class is a subclass of KFindDialog so that we can call protected methods
class VirtualKFindDialog final : public KFindDialog {

  public:
    // Virtual class boolean flag
    bool isVirtualKFindDialog = true;

    // Virtual class public types (including callbacks)
    using KFindDialog_Metacall_Callback = int (*)(KFindDialog*, int, int, void**);
    using KFindDialog_ShowEvent_Callback = void (*)(KFindDialog*, QShowEvent*);
    using KFindDialog_SetVisible_Callback = void (*)(KFindDialog*, bool);
    using KFindDialog_SizeHint_Callback = QSize* (*)();
    using KFindDialog_MinimumSizeHint_Callback = QSize* (*)();
    using KFindDialog_Open_Callback = void (*)();
    using KFindDialog_Exec_Callback = int (*)();
    using KFindDialog_Done_Callback = void (*)(KFindDialog*, int);
    using KFindDialog_Accept_Callback = void (*)();
    using KFindDialog_Reject_Callback = void (*)();
    using KFindDialog_KeyPressEvent_Callback = void (*)(KFindDialog*, QKeyEvent*);
    using KFindDialog_CloseEvent_Callback = void (*)(KFindDialog*, QCloseEvent*);
    using KFindDialog_ResizeEvent_Callback = void (*)(KFindDialog*, QResizeEvent*);
    using KFindDialog_ContextMenuEvent_Callback = void (*)(KFindDialog*, QContextMenuEvent*);
    using KFindDialog_EventFilter_Callback = bool (*)(KFindDialog*, QObject*, QEvent*);
    using KFindDialog_DevType_Callback = int (*)();
    using KFindDialog_HeightForWidth_Callback = int (*)(const KFindDialog*, int);
    using KFindDialog_HasHeightForWidth_Callback = bool (*)();
    using KFindDialog_PaintEngine_Callback = QPaintEngine* (*)();
    using KFindDialog_Event_Callback = bool (*)(KFindDialog*, QEvent*);
    using KFindDialog_MousePressEvent_Callback = void (*)(KFindDialog*, QMouseEvent*);
    using KFindDialog_MouseReleaseEvent_Callback = void (*)(KFindDialog*, QMouseEvent*);
    using KFindDialog_MouseDoubleClickEvent_Callback = void (*)(KFindDialog*, QMouseEvent*);
    using KFindDialog_MouseMoveEvent_Callback = void (*)(KFindDialog*, QMouseEvent*);
    using KFindDialog_WheelEvent_Callback = void (*)(KFindDialog*, QWheelEvent*);
    using KFindDialog_KeyReleaseEvent_Callback = void (*)(KFindDialog*, QKeyEvent*);
    using KFindDialog_FocusInEvent_Callback = void (*)(KFindDialog*, QFocusEvent*);
    using KFindDialog_FocusOutEvent_Callback = void (*)(KFindDialog*, QFocusEvent*);
    using KFindDialog_EnterEvent_Callback = void (*)(KFindDialog*, QEnterEvent*);
    using KFindDialog_LeaveEvent_Callback = void (*)(KFindDialog*, QEvent*);
    using KFindDialog_PaintEvent_Callback = void (*)(KFindDialog*, QPaintEvent*);
    using KFindDialog_MoveEvent_Callback = void (*)(KFindDialog*, QMoveEvent*);
    using KFindDialog_TabletEvent_Callback = void (*)(KFindDialog*, QTabletEvent*);
    using KFindDialog_ActionEvent_Callback = void (*)(KFindDialog*, QActionEvent*);
    using KFindDialog_DragEnterEvent_Callback = void (*)(KFindDialog*, QDragEnterEvent*);
    using KFindDialog_DragMoveEvent_Callback = void (*)(KFindDialog*, QDragMoveEvent*);
    using KFindDialog_DragLeaveEvent_Callback = void (*)(KFindDialog*, QDragLeaveEvent*);
    using KFindDialog_DropEvent_Callback = void (*)(KFindDialog*, QDropEvent*);
    using KFindDialog_HideEvent_Callback = void (*)(KFindDialog*, QHideEvent*);
    using KFindDialog_NativeEvent_Callback = bool (*)(KFindDialog*, libqt_string, void*, intptr_t*);
    using KFindDialog_ChangeEvent_Callback = void (*)(KFindDialog*, QEvent*);
    using KFindDialog_Metric_Callback = int (*)(const KFindDialog*, int);
    using KFindDialog_InitPainter_Callback = void (*)(const KFindDialog*, QPainter*);
    using KFindDialog_Redirected_Callback = QPaintDevice* (*)(const KFindDialog*, QPoint*);
    using KFindDialog_SharedPainter_Callback = QPainter* (*)();
    using KFindDialog_InputMethodEvent_Callback = void (*)(KFindDialog*, QInputMethodEvent*);
    using KFindDialog_InputMethodQuery_Callback = QVariant* (*)(const KFindDialog*, int);
    using KFindDialog_FocusNextPrevChild_Callback = bool (*)(KFindDialog*, bool);
    using KFindDialog_TimerEvent_Callback = void (*)(KFindDialog*, QTimerEvent*);
    using KFindDialog_ChildEvent_Callback = void (*)(KFindDialog*, QChildEvent*);
    using KFindDialog_CustomEvent_Callback = void (*)(KFindDialog*, QEvent*);
    using KFindDialog_ConnectNotify_Callback = void (*)(KFindDialog*, QMetaMethod*);
    using KFindDialog_DisconnectNotify_Callback = void (*)(KFindDialog*, QMetaMethod*);
    using KFindDialog_AdjustPosition_Callback = void (*)(KFindDialog*, QWidget*);
    using KFindDialog_UpdateMicroFocus_Callback = void (*)();
    using KFindDialog_Create_Callback = void (*)();
    using KFindDialog_Destroy_Callback = void (*)();
    using KFindDialog_FocusNextChild_Callback = bool (*)();
    using KFindDialog_FocusPreviousChild_Callback = bool (*)();
    using KFindDialog_Sender_Callback = QObject* (*)();
    using KFindDialog_SenderSignalIndex_Callback = int (*)();
    using KFindDialog_Receivers_Callback = int (*)(const KFindDialog*, const char*);
    using KFindDialog_IsSignalConnected_Callback = bool (*)(const KFindDialog*, QMetaMethod*);
    using KFindDialog_GetDecodedMetricF_Callback = double (*)(const KFindDialog*, int, int);

  protected:
    // Instance callback storage
    KFindDialog_Metacall_Callback kfinddialog_metacall_callback = nullptr;
    KFindDialog_ShowEvent_Callback kfinddialog_showevent_callback = nullptr;
    KFindDialog_SetVisible_Callback kfinddialog_setvisible_callback = nullptr;
    KFindDialog_SizeHint_Callback kfinddialog_sizehint_callback = nullptr;
    KFindDialog_MinimumSizeHint_Callback kfinddialog_minimumsizehint_callback = nullptr;
    KFindDialog_Open_Callback kfinddialog_open_callback = nullptr;
    KFindDialog_Exec_Callback kfinddialog_exec_callback = nullptr;
    KFindDialog_Done_Callback kfinddialog_done_callback = nullptr;
    KFindDialog_Accept_Callback kfinddialog_accept_callback = nullptr;
    KFindDialog_Reject_Callback kfinddialog_reject_callback = nullptr;
    KFindDialog_KeyPressEvent_Callback kfinddialog_keypressevent_callback = nullptr;
    KFindDialog_CloseEvent_Callback kfinddialog_closeevent_callback = nullptr;
    KFindDialog_ResizeEvent_Callback kfinddialog_resizeevent_callback = nullptr;
    KFindDialog_ContextMenuEvent_Callback kfinddialog_contextmenuevent_callback = nullptr;
    KFindDialog_EventFilter_Callback kfinddialog_eventfilter_callback = nullptr;
    KFindDialog_DevType_Callback kfinddialog_devtype_callback = nullptr;
    KFindDialog_HeightForWidth_Callback kfinddialog_heightforwidth_callback = nullptr;
    KFindDialog_HasHeightForWidth_Callback kfinddialog_hasheightforwidth_callback = nullptr;
    KFindDialog_PaintEngine_Callback kfinddialog_paintengine_callback = nullptr;
    KFindDialog_Event_Callback kfinddialog_event_callback = nullptr;
    KFindDialog_MousePressEvent_Callback kfinddialog_mousepressevent_callback = nullptr;
    KFindDialog_MouseReleaseEvent_Callback kfinddialog_mousereleaseevent_callback = nullptr;
    KFindDialog_MouseDoubleClickEvent_Callback kfinddialog_mousedoubleclickevent_callback = nullptr;
    KFindDialog_MouseMoveEvent_Callback kfinddialog_mousemoveevent_callback = nullptr;
    KFindDialog_WheelEvent_Callback kfinddialog_wheelevent_callback = nullptr;
    KFindDialog_KeyReleaseEvent_Callback kfinddialog_keyreleaseevent_callback = nullptr;
    KFindDialog_FocusInEvent_Callback kfinddialog_focusinevent_callback = nullptr;
    KFindDialog_FocusOutEvent_Callback kfinddialog_focusoutevent_callback = nullptr;
    KFindDialog_EnterEvent_Callback kfinddialog_enterevent_callback = nullptr;
    KFindDialog_LeaveEvent_Callback kfinddialog_leaveevent_callback = nullptr;
    KFindDialog_PaintEvent_Callback kfinddialog_paintevent_callback = nullptr;
    KFindDialog_MoveEvent_Callback kfinddialog_moveevent_callback = nullptr;
    KFindDialog_TabletEvent_Callback kfinddialog_tabletevent_callback = nullptr;
    KFindDialog_ActionEvent_Callback kfinddialog_actionevent_callback = nullptr;
    KFindDialog_DragEnterEvent_Callback kfinddialog_dragenterevent_callback = nullptr;
    KFindDialog_DragMoveEvent_Callback kfinddialog_dragmoveevent_callback = nullptr;
    KFindDialog_DragLeaveEvent_Callback kfinddialog_dragleaveevent_callback = nullptr;
    KFindDialog_DropEvent_Callback kfinddialog_dropevent_callback = nullptr;
    KFindDialog_HideEvent_Callback kfinddialog_hideevent_callback = nullptr;
    KFindDialog_NativeEvent_Callback kfinddialog_nativeevent_callback = nullptr;
    KFindDialog_ChangeEvent_Callback kfinddialog_changeevent_callback = nullptr;
    KFindDialog_Metric_Callback kfinddialog_metric_callback = nullptr;
    KFindDialog_InitPainter_Callback kfinddialog_initpainter_callback = nullptr;
    KFindDialog_Redirected_Callback kfinddialog_redirected_callback = nullptr;
    KFindDialog_SharedPainter_Callback kfinddialog_sharedpainter_callback = nullptr;
    KFindDialog_InputMethodEvent_Callback kfinddialog_inputmethodevent_callback = nullptr;
    KFindDialog_InputMethodQuery_Callback kfinddialog_inputmethodquery_callback = nullptr;
    KFindDialog_FocusNextPrevChild_Callback kfinddialog_focusnextprevchild_callback = nullptr;
    KFindDialog_TimerEvent_Callback kfinddialog_timerevent_callback = nullptr;
    KFindDialog_ChildEvent_Callback kfinddialog_childevent_callback = nullptr;
    KFindDialog_CustomEvent_Callback kfinddialog_customevent_callback = nullptr;
    KFindDialog_ConnectNotify_Callback kfinddialog_connectnotify_callback = nullptr;
    KFindDialog_DisconnectNotify_Callback kfinddialog_disconnectnotify_callback = nullptr;
    KFindDialog_AdjustPosition_Callback kfinddialog_adjustposition_callback = nullptr;
    KFindDialog_UpdateMicroFocus_Callback kfinddialog_updatemicrofocus_callback = nullptr;
    KFindDialog_Create_Callback kfinddialog_create_callback = nullptr;
    KFindDialog_Destroy_Callback kfinddialog_destroy_callback = nullptr;
    KFindDialog_FocusNextChild_Callback kfinddialog_focusnextchild_callback = nullptr;
    KFindDialog_FocusPreviousChild_Callback kfinddialog_focuspreviouschild_callback = nullptr;
    KFindDialog_Sender_Callback kfinddialog_sender_callback = nullptr;
    KFindDialog_SenderSignalIndex_Callback kfinddialog_sendersignalindex_callback = nullptr;
    KFindDialog_Receivers_Callback kfinddialog_receivers_callback = nullptr;
    KFindDialog_IsSignalConnected_Callback kfinddialog_issignalconnected_callback = nullptr;
    KFindDialog_GetDecodedMetricF_Callback kfinddialog_getdecodedmetricf_callback = nullptr;

    // Instance base flags
    mutable bool kfinddialog_metacall_isbase = false;
    mutable bool kfinddialog_showevent_isbase = false;
    mutable bool kfinddialog_setvisible_isbase = false;
    mutable bool kfinddialog_sizehint_isbase = false;
    mutable bool kfinddialog_minimumsizehint_isbase = false;
    mutable bool kfinddialog_open_isbase = false;
    mutable bool kfinddialog_exec_isbase = false;
    mutable bool kfinddialog_done_isbase = false;
    mutable bool kfinddialog_accept_isbase = false;
    mutable bool kfinddialog_reject_isbase = false;
    mutable bool kfinddialog_keypressevent_isbase = false;
    mutable bool kfinddialog_closeevent_isbase = false;
    mutable bool kfinddialog_resizeevent_isbase = false;
    mutable bool kfinddialog_contextmenuevent_isbase = false;
    mutable bool kfinddialog_eventfilter_isbase = false;
    mutable bool kfinddialog_devtype_isbase = false;
    mutable bool kfinddialog_heightforwidth_isbase = false;
    mutable bool kfinddialog_hasheightforwidth_isbase = false;
    mutable bool kfinddialog_paintengine_isbase = false;
    mutable bool kfinddialog_event_isbase = false;
    mutable bool kfinddialog_mousepressevent_isbase = false;
    mutable bool kfinddialog_mousereleaseevent_isbase = false;
    mutable bool kfinddialog_mousedoubleclickevent_isbase = false;
    mutable bool kfinddialog_mousemoveevent_isbase = false;
    mutable bool kfinddialog_wheelevent_isbase = false;
    mutable bool kfinddialog_keyreleaseevent_isbase = false;
    mutable bool kfinddialog_focusinevent_isbase = false;
    mutable bool kfinddialog_focusoutevent_isbase = false;
    mutable bool kfinddialog_enterevent_isbase = false;
    mutable bool kfinddialog_leaveevent_isbase = false;
    mutable bool kfinddialog_paintevent_isbase = false;
    mutable bool kfinddialog_moveevent_isbase = false;
    mutable bool kfinddialog_tabletevent_isbase = false;
    mutable bool kfinddialog_actionevent_isbase = false;
    mutable bool kfinddialog_dragenterevent_isbase = false;
    mutable bool kfinddialog_dragmoveevent_isbase = false;
    mutable bool kfinddialog_dragleaveevent_isbase = false;
    mutable bool kfinddialog_dropevent_isbase = false;
    mutable bool kfinddialog_hideevent_isbase = false;
    mutable bool kfinddialog_nativeevent_isbase = false;
    mutable bool kfinddialog_changeevent_isbase = false;
    mutable bool kfinddialog_metric_isbase = false;
    mutable bool kfinddialog_initpainter_isbase = false;
    mutable bool kfinddialog_redirected_isbase = false;
    mutable bool kfinddialog_sharedpainter_isbase = false;
    mutable bool kfinddialog_inputmethodevent_isbase = false;
    mutable bool kfinddialog_inputmethodquery_isbase = false;
    mutable bool kfinddialog_focusnextprevchild_isbase = false;
    mutable bool kfinddialog_timerevent_isbase = false;
    mutable bool kfinddialog_childevent_isbase = false;
    mutable bool kfinddialog_customevent_isbase = false;
    mutable bool kfinddialog_connectnotify_isbase = false;
    mutable bool kfinddialog_disconnectnotify_isbase = false;
    mutable bool kfinddialog_adjustposition_isbase = false;
    mutable bool kfinddialog_updatemicrofocus_isbase = false;
    mutable bool kfinddialog_create_isbase = false;
    mutable bool kfinddialog_destroy_isbase = false;
    mutable bool kfinddialog_focusnextchild_isbase = false;
    mutable bool kfinddialog_focuspreviouschild_isbase = false;
    mutable bool kfinddialog_sender_isbase = false;
    mutable bool kfinddialog_sendersignalindex_isbase = false;
    mutable bool kfinddialog_receivers_isbase = false;
    mutable bool kfinddialog_issignalconnected_isbase = false;
    mutable bool kfinddialog_getdecodedmetricf_isbase = false;

  public:
    VirtualKFindDialog(QWidget* parent) : KFindDialog(parent) {};
    VirtualKFindDialog() : KFindDialog() {};
    VirtualKFindDialog(QWidget* parent, long options) : KFindDialog(parent, options) {};
    VirtualKFindDialog(QWidget* parent, long options, const QList<QString>& findStrings) : KFindDialog(parent, options, findStrings) {};
    VirtualKFindDialog(QWidget* parent, long options, const QList<QString>& findStrings, bool hasSelection) : KFindDialog(parent, options, findStrings, hasSelection) {};
    VirtualKFindDialog(QWidget* parent, long options, const QList<QString>& findStrings, bool hasSelection, bool replaceDialog) : KFindDialog(parent, options, findStrings, hasSelection, replaceDialog) {};

    ~VirtualKFindDialog() {
        kfinddialog_metacall_callback = nullptr;
        kfinddialog_showevent_callback = nullptr;
        kfinddialog_setvisible_callback = nullptr;
        kfinddialog_sizehint_callback = nullptr;
        kfinddialog_minimumsizehint_callback = nullptr;
        kfinddialog_open_callback = nullptr;
        kfinddialog_exec_callback = nullptr;
        kfinddialog_done_callback = nullptr;
        kfinddialog_accept_callback = nullptr;
        kfinddialog_reject_callback = nullptr;
        kfinddialog_keypressevent_callback = nullptr;
        kfinddialog_closeevent_callback = nullptr;
        kfinddialog_resizeevent_callback = nullptr;
        kfinddialog_contextmenuevent_callback = nullptr;
        kfinddialog_eventfilter_callback = nullptr;
        kfinddialog_devtype_callback = nullptr;
        kfinddialog_heightforwidth_callback = nullptr;
        kfinddialog_hasheightforwidth_callback = nullptr;
        kfinddialog_paintengine_callback = nullptr;
        kfinddialog_event_callback = nullptr;
        kfinddialog_mousepressevent_callback = nullptr;
        kfinddialog_mousereleaseevent_callback = nullptr;
        kfinddialog_mousedoubleclickevent_callback = nullptr;
        kfinddialog_mousemoveevent_callback = nullptr;
        kfinddialog_wheelevent_callback = nullptr;
        kfinddialog_keyreleaseevent_callback = nullptr;
        kfinddialog_focusinevent_callback = nullptr;
        kfinddialog_focusoutevent_callback = nullptr;
        kfinddialog_enterevent_callback = nullptr;
        kfinddialog_leaveevent_callback = nullptr;
        kfinddialog_paintevent_callback = nullptr;
        kfinddialog_moveevent_callback = nullptr;
        kfinddialog_tabletevent_callback = nullptr;
        kfinddialog_actionevent_callback = nullptr;
        kfinddialog_dragenterevent_callback = nullptr;
        kfinddialog_dragmoveevent_callback = nullptr;
        kfinddialog_dragleaveevent_callback = nullptr;
        kfinddialog_dropevent_callback = nullptr;
        kfinddialog_hideevent_callback = nullptr;
        kfinddialog_nativeevent_callback = nullptr;
        kfinddialog_changeevent_callback = nullptr;
        kfinddialog_metric_callback = nullptr;
        kfinddialog_initpainter_callback = nullptr;
        kfinddialog_redirected_callback = nullptr;
        kfinddialog_sharedpainter_callback = nullptr;
        kfinddialog_inputmethodevent_callback = nullptr;
        kfinddialog_inputmethodquery_callback = nullptr;
        kfinddialog_focusnextprevchild_callback = nullptr;
        kfinddialog_timerevent_callback = nullptr;
        kfinddialog_childevent_callback = nullptr;
        kfinddialog_customevent_callback = nullptr;
        kfinddialog_connectnotify_callback = nullptr;
        kfinddialog_disconnectnotify_callback = nullptr;
        kfinddialog_adjustposition_callback = nullptr;
        kfinddialog_updatemicrofocus_callback = nullptr;
        kfinddialog_create_callback = nullptr;
        kfinddialog_destroy_callback = nullptr;
        kfinddialog_focusnextchild_callback = nullptr;
        kfinddialog_focuspreviouschild_callback = nullptr;
        kfinddialog_sender_callback = nullptr;
        kfinddialog_sendersignalindex_callback = nullptr;
        kfinddialog_receivers_callback = nullptr;
        kfinddialog_issignalconnected_callback = nullptr;
        kfinddialog_getdecodedmetricf_callback = nullptr;
    }

    // Callback setters
    inline void setKFindDialog_Metacall_Callback(KFindDialog_Metacall_Callback cb) { kfinddialog_metacall_callback = cb; }
    inline void setKFindDialog_ShowEvent_Callback(KFindDialog_ShowEvent_Callback cb) { kfinddialog_showevent_callback = cb; }
    inline void setKFindDialog_SetVisible_Callback(KFindDialog_SetVisible_Callback cb) { kfinddialog_setvisible_callback = cb; }
    inline void setKFindDialog_SizeHint_Callback(KFindDialog_SizeHint_Callback cb) { kfinddialog_sizehint_callback = cb; }
    inline void setKFindDialog_MinimumSizeHint_Callback(KFindDialog_MinimumSizeHint_Callback cb) { kfinddialog_minimumsizehint_callback = cb; }
    inline void setKFindDialog_Open_Callback(KFindDialog_Open_Callback cb) { kfinddialog_open_callback = cb; }
    inline void setKFindDialog_Exec_Callback(KFindDialog_Exec_Callback cb) { kfinddialog_exec_callback = cb; }
    inline void setKFindDialog_Done_Callback(KFindDialog_Done_Callback cb) { kfinddialog_done_callback = cb; }
    inline void setKFindDialog_Accept_Callback(KFindDialog_Accept_Callback cb) { kfinddialog_accept_callback = cb; }
    inline void setKFindDialog_Reject_Callback(KFindDialog_Reject_Callback cb) { kfinddialog_reject_callback = cb; }
    inline void setKFindDialog_KeyPressEvent_Callback(KFindDialog_KeyPressEvent_Callback cb) { kfinddialog_keypressevent_callback = cb; }
    inline void setKFindDialog_CloseEvent_Callback(KFindDialog_CloseEvent_Callback cb) { kfinddialog_closeevent_callback = cb; }
    inline void setKFindDialog_ResizeEvent_Callback(KFindDialog_ResizeEvent_Callback cb) { kfinddialog_resizeevent_callback = cb; }
    inline void setKFindDialog_ContextMenuEvent_Callback(KFindDialog_ContextMenuEvent_Callback cb) { kfinddialog_contextmenuevent_callback = cb; }
    inline void setKFindDialog_EventFilter_Callback(KFindDialog_EventFilter_Callback cb) { kfinddialog_eventfilter_callback = cb; }
    inline void setKFindDialog_DevType_Callback(KFindDialog_DevType_Callback cb) { kfinddialog_devtype_callback = cb; }
    inline void setKFindDialog_HeightForWidth_Callback(KFindDialog_HeightForWidth_Callback cb) { kfinddialog_heightforwidth_callback = cb; }
    inline void setKFindDialog_HasHeightForWidth_Callback(KFindDialog_HasHeightForWidth_Callback cb) { kfinddialog_hasheightforwidth_callback = cb; }
    inline void setKFindDialog_PaintEngine_Callback(KFindDialog_PaintEngine_Callback cb) { kfinddialog_paintengine_callback = cb; }
    inline void setKFindDialog_Event_Callback(KFindDialog_Event_Callback cb) { kfinddialog_event_callback = cb; }
    inline void setKFindDialog_MousePressEvent_Callback(KFindDialog_MousePressEvent_Callback cb) { kfinddialog_mousepressevent_callback = cb; }
    inline void setKFindDialog_MouseReleaseEvent_Callback(KFindDialog_MouseReleaseEvent_Callback cb) { kfinddialog_mousereleaseevent_callback = cb; }
    inline void setKFindDialog_MouseDoubleClickEvent_Callback(KFindDialog_MouseDoubleClickEvent_Callback cb) { kfinddialog_mousedoubleclickevent_callback = cb; }
    inline void setKFindDialog_MouseMoveEvent_Callback(KFindDialog_MouseMoveEvent_Callback cb) { kfinddialog_mousemoveevent_callback = cb; }
    inline void setKFindDialog_WheelEvent_Callback(KFindDialog_WheelEvent_Callback cb) { kfinddialog_wheelevent_callback = cb; }
    inline void setKFindDialog_KeyReleaseEvent_Callback(KFindDialog_KeyReleaseEvent_Callback cb) { kfinddialog_keyreleaseevent_callback = cb; }
    inline void setKFindDialog_FocusInEvent_Callback(KFindDialog_FocusInEvent_Callback cb) { kfinddialog_focusinevent_callback = cb; }
    inline void setKFindDialog_FocusOutEvent_Callback(KFindDialog_FocusOutEvent_Callback cb) { kfinddialog_focusoutevent_callback = cb; }
    inline void setKFindDialog_EnterEvent_Callback(KFindDialog_EnterEvent_Callback cb) { kfinddialog_enterevent_callback = cb; }
    inline void setKFindDialog_LeaveEvent_Callback(KFindDialog_LeaveEvent_Callback cb) { kfinddialog_leaveevent_callback = cb; }
    inline void setKFindDialog_PaintEvent_Callback(KFindDialog_PaintEvent_Callback cb) { kfinddialog_paintevent_callback = cb; }
    inline void setKFindDialog_MoveEvent_Callback(KFindDialog_MoveEvent_Callback cb) { kfinddialog_moveevent_callback = cb; }
    inline void setKFindDialog_TabletEvent_Callback(KFindDialog_TabletEvent_Callback cb) { kfinddialog_tabletevent_callback = cb; }
    inline void setKFindDialog_ActionEvent_Callback(KFindDialog_ActionEvent_Callback cb) { kfinddialog_actionevent_callback = cb; }
    inline void setKFindDialog_DragEnterEvent_Callback(KFindDialog_DragEnterEvent_Callback cb) { kfinddialog_dragenterevent_callback = cb; }
    inline void setKFindDialog_DragMoveEvent_Callback(KFindDialog_DragMoveEvent_Callback cb) { kfinddialog_dragmoveevent_callback = cb; }
    inline void setKFindDialog_DragLeaveEvent_Callback(KFindDialog_DragLeaveEvent_Callback cb) { kfinddialog_dragleaveevent_callback = cb; }
    inline void setKFindDialog_DropEvent_Callback(KFindDialog_DropEvent_Callback cb) { kfinddialog_dropevent_callback = cb; }
    inline void setKFindDialog_HideEvent_Callback(KFindDialog_HideEvent_Callback cb) { kfinddialog_hideevent_callback = cb; }
    inline void setKFindDialog_NativeEvent_Callback(KFindDialog_NativeEvent_Callback cb) { kfinddialog_nativeevent_callback = cb; }
    inline void setKFindDialog_ChangeEvent_Callback(KFindDialog_ChangeEvent_Callback cb) { kfinddialog_changeevent_callback = cb; }
    inline void setKFindDialog_Metric_Callback(KFindDialog_Metric_Callback cb) { kfinddialog_metric_callback = cb; }
    inline void setKFindDialog_InitPainter_Callback(KFindDialog_InitPainter_Callback cb) { kfinddialog_initpainter_callback = cb; }
    inline void setKFindDialog_Redirected_Callback(KFindDialog_Redirected_Callback cb) { kfinddialog_redirected_callback = cb; }
    inline void setKFindDialog_SharedPainter_Callback(KFindDialog_SharedPainter_Callback cb) { kfinddialog_sharedpainter_callback = cb; }
    inline void setKFindDialog_InputMethodEvent_Callback(KFindDialog_InputMethodEvent_Callback cb) { kfinddialog_inputmethodevent_callback = cb; }
    inline void setKFindDialog_InputMethodQuery_Callback(KFindDialog_InputMethodQuery_Callback cb) { kfinddialog_inputmethodquery_callback = cb; }
    inline void setKFindDialog_FocusNextPrevChild_Callback(KFindDialog_FocusNextPrevChild_Callback cb) { kfinddialog_focusnextprevchild_callback = cb; }
    inline void setKFindDialog_TimerEvent_Callback(KFindDialog_TimerEvent_Callback cb) { kfinddialog_timerevent_callback = cb; }
    inline void setKFindDialog_ChildEvent_Callback(KFindDialog_ChildEvent_Callback cb) { kfinddialog_childevent_callback = cb; }
    inline void setKFindDialog_CustomEvent_Callback(KFindDialog_CustomEvent_Callback cb) { kfinddialog_customevent_callback = cb; }
    inline void setKFindDialog_ConnectNotify_Callback(KFindDialog_ConnectNotify_Callback cb) { kfinddialog_connectnotify_callback = cb; }
    inline void setKFindDialog_DisconnectNotify_Callback(KFindDialog_DisconnectNotify_Callback cb) { kfinddialog_disconnectnotify_callback = cb; }
    inline void setKFindDialog_AdjustPosition_Callback(KFindDialog_AdjustPosition_Callback cb) { kfinddialog_adjustposition_callback = cb; }
    inline void setKFindDialog_UpdateMicroFocus_Callback(KFindDialog_UpdateMicroFocus_Callback cb) { kfinddialog_updatemicrofocus_callback = cb; }
    inline void setKFindDialog_Create_Callback(KFindDialog_Create_Callback cb) { kfinddialog_create_callback = cb; }
    inline void setKFindDialog_Destroy_Callback(KFindDialog_Destroy_Callback cb) { kfinddialog_destroy_callback = cb; }
    inline void setKFindDialog_FocusNextChild_Callback(KFindDialog_FocusNextChild_Callback cb) { kfinddialog_focusnextchild_callback = cb; }
    inline void setKFindDialog_FocusPreviousChild_Callback(KFindDialog_FocusPreviousChild_Callback cb) { kfinddialog_focuspreviouschild_callback = cb; }
    inline void setKFindDialog_Sender_Callback(KFindDialog_Sender_Callback cb) { kfinddialog_sender_callback = cb; }
    inline void setKFindDialog_SenderSignalIndex_Callback(KFindDialog_SenderSignalIndex_Callback cb) { kfinddialog_sendersignalindex_callback = cb; }
    inline void setKFindDialog_Receivers_Callback(KFindDialog_Receivers_Callback cb) { kfinddialog_receivers_callback = cb; }
    inline void setKFindDialog_IsSignalConnected_Callback(KFindDialog_IsSignalConnected_Callback cb) { kfinddialog_issignalconnected_callback = cb; }
    inline void setKFindDialog_GetDecodedMetricF_Callback(KFindDialog_GetDecodedMetricF_Callback cb) { kfinddialog_getdecodedmetricf_callback = cb; }

    // Base flag setters
    inline void setKFindDialog_Metacall_IsBase(bool value) const { kfinddialog_metacall_isbase = value; }
    inline void setKFindDialog_ShowEvent_IsBase(bool value) const { kfinddialog_showevent_isbase = value; }
    inline void setKFindDialog_SetVisible_IsBase(bool value) const { kfinddialog_setvisible_isbase = value; }
    inline void setKFindDialog_SizeHint_IsBase(bool value) const { kfinddialog_sizehint_isbase = value; }
    inline void setKFindDialog_MinimumSizeHint_IsBase(bool value) const { kfinddialog_minimumsizehint_isbase = value; }
    inline void setKFindDialog_Open_IsBase(bool value) const { kfinddialog_open_isbase = value; }
    inline void setKFindDialog_Exec_IsBase(bool value) const { kfinddialog_exec_isbase = value; }
    inline void setKFindDialog_Done_IsBase(bool value) const { kfinddialog_done_isbase = value; }
    inline void setKFindDialog_Accept_IsBase(bool value) const { kfinddialog_accept_isbase = value; }
    inline void setKFindDialog_Reject_IsBase(bool value) const { kfinddialog_reject_isbase = value; }
    inline void setKFindDialog_KeyPressEvent_IsBase(bool value) const { kfinddialog_keypressevent_isbase = value; }
    inline void setKFindDialog_CloseEvent_IsBase(bool value) const { kfinddialog_closeevent_isbase = value; }
    inline void setKFindDialog_ResizeEvent_IsBase(bool value) const { kfinddialog_resizeevent_isbase = value; }
    inline void setKFindDialog_ContextMenuEvent_IsBase(bool value) const { kfinddialog_contextmenuevent_isbase = value; }
    inline void setKFindDialog_EventFilter_IsBase(bool value) const { kfinddialog_eventfilter_isbase = value; }
    inline void setKFindDialog_DevType_IsBase(bool value) const { kfinddialog_devtype_isbase = value; }
    inline void setKFindDialog_HeightForWidth_IsBase(bool value) const { kfinddialog_heightforwidth_isbase = value; }
    inline void setKFindDialog_HasHeightForWidth_IsBase(bool value) const { kfinddialog_hasheightforwidth_isbase = value; }
    inline void setKFindDialog_PaintEngine_IsBase(bool value) const { kfinddialog_paintengine_isbase = value; }
    inline void setKFindDialog_Event_IsBase(bool value) const { kfinddialog_event_isbase = value; }
    inline void setKFindDialog_MousePressEvent_IsBase(bool value) const { kfinddialog_mousepressevent_isbase = value; }
    inline void setKFindDialog_MouseReleaseEvent_IsBase(bool value) const { kfinddialog_mousereleaseevent_isbase = value; }
    inline void setKFindDialog_MouseDoubleClickEvent_IsBase(bool value) const { kfinddialog_mousedoubleclickevent_isbase = value; }
    inline void setKFindDialog_MouseMoveEvent_IsBase(bool value) const { kfinddialog_mousemoveevent_isbase = value; }
    inline void setKFindDialog_WheelEvent_IsBase(bool value) const { kfinddialog_wheelevent_isbase = value; }
    inline void setKFindDialog_KeyReleaseEvent_IsBase(bool value) const { kfinddialog_keyreleaseevent_isbase = value; }
    inline void setKFindDialog_FocusInEvent_IsBase(bool value) const { kfinddialog_focusinevent_isbase = value; }
    inline void setKFindDialog_FocusOutEvent_IsBase(bool value) const { kfinddialog_focusoutevent_isbase = value; }
    inline void setKFindDialog_EnterEvent_IsBase(bool value) const { kfinddialog_enterevent_isbase = value; }
    inline void setKFindDialog_LeaveEvent_IsBase(bool value) const { kfinddialog_leaveevent_isbase = value; }
    inline void setKFindDialog_PaintEvent_IsBase(bool value) const { kfinddialog_paintevent_isbase = value; }
    inline void setKFindDialog_MoveEvent_IsBase(bool value) const { kfinddialog_moveevent_isbase = value; }
    inline void setKFindDialog_TabletEvent_IsBase(bool value) const { kfinddialog_tabletevent_isbase = value; }
    inline void setKFindDialog_ActionEvent_IsBase(bool value) const { kfinddialog_actionevent_isbase = value; }
    inline void setKFindDialog_DragEnterEvent_IsBase(bool value) const { kfinddialog_dragenterevent_isbase = value; }
    inline void setKFindDialog_DragMoveEvent_IsBase(bool value) const { kfinddialog_dragmoveevent_isbase = value; }
    inline void setKFindDialog_DragLeaveEvent_IsBase(bool value) const { kfinddialog_dragleaveevent_isbase = value; }
    inline void setKFindDialog_DropEvent_IsBase(bool value) const { kfinddialog_dropevent_isbase = value; }
    inline void setKFindDialog_HideEvent_IsBase(bool value) const { kfinddialog_hideevent_isbase = value; }
    inline void setKFindDialog_NativeEvent_IsBase(bool value) const { kfinddialog_nativeevent_isbase = value; }
    inline void setKFindDialog_ChangeEvent_IsBase(bool value) const { kfinddialog_changeevent_isbase = value; }
    inline void setKFindDialog_Metric_IsBase(bool value) const { kfinddialog_metric_isbase = value; }
    inline void setKFindDialog_InitPainter_IsBase(bool value) const { kfinddialog_initpainter_isbase = value; }
    inline void setKFindDialog_Redirected_IsBase(bool value) const { kfinddialog_redirected_isbase = value; }
    inline void setKFindDialog_SharedPainter_IsBase(bool value) const { kfinddialog_sharedpainter_isbase = value; }
    inline void setKFindDialog_InputMethodEvent_IsBase(bool value) const { kfinddialog_inputmethodevent_isbase = value; }
    inline void setKFindDialog_InputMethodQuery_IsBase(bool value) const { kfinddialog_inputmethodquery_isbase = value; }
    inline void setKFindDialog_FocusNextPrevChild_IsBase(bool value) const { kfinddialog_focusnextprevchild_isbase = value; }
    inline void setKFindDialog_TimerEvent_IsBase(bool value) const { kfinddialog_timerevent_isbase = value; }
    inline void setKFindDialog_ChildEvent_IsBase(bool value) const { kfinddialog_childevent_isbase = value; }
    inline void setKFindDialog_CustomEvent_IsBase(bool value) const { kfinddialog_customevent_isbase = value; }
    inline void setKFindDialog_ConnectNotify_IsBase(bool value) const { kfinddialog_connectnotify_isbase = value; }
    inline void setKFindDialog_DisconnectNotify_IsBase(bool value) const { kfinddialog_disconnectnotify_isbase = value; }
    inline void setKFindDialog_AdjustPosition_IsBase(bool value) const { kfinddialog_adjustposition_isbase = value; }
    inline void setKFindDialog_UpdateMicroFocus_IsBase(bool value) const { kfinddialog_updatemicrofocus_isbase = value; }
    inline void setKFindDialog_Create_IsBase(bool value) const { kfinddialog_create_isbase = value; }
    inline void setKFindDialog_Destroy_IsBase(bool value) const { kfinddialog_destroy_isbase = value; }
    inline void setKFindDialog_FocusNextChild_IsBase(bool value) const { kfinddialog_focusnextchild_isbase = value; }
    inline void setKFindDialog_FocusPreviousChild_IsBase(bool value) const { kfinddialog_focuspreviouschild_isbase = value; }
    inline void setKFindDialog_Sender_IsBase(bool value) const { kfinddialog_sender_isbase = value; }
    inline void setKFindDialog_SenderSignalIndex_IsBase(bool value) const { kfinddialog_sendersignalindex_isbase = value; }
    inline void setKFindDialog_Receivers_IsBase(bool value) const { kfinddialog_receivers_isbase = value; }
    inline void setKFindDialog_IsSignalConnected_IsBase(bool value) const { kfinddialog_issignalconnected_isbase = value; }
    inline void setKFindDialog_GetDecodedMetricF_IsBase(bool value) const { kfinddialog_getdecodedmetricf_isbase = value; }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (kfinddialog_metacall_isbase) {
            kfinddialog_metacall_isbase = false;
            return KFindDialog::qt_metacall(param1, param2, param3);
        } else if (kfinddialog_metacall_callback != nullptr) {
            int cbval1 = static_cast<int>(param1);
            int cbval2 = param2;
            void** cbval3 = param3;

            int callback_ret = kfinddialog_metacall_callback(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        } else {
            return KFindDialog::qt_metacall(param1, param2, param3);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void showEvent(QShowEvent* param1) override {
        if (kfinddialog_showevent_isbase) {
            kfinddialog_showevent_isbase = false;
            KFindDialog::showEvent(param1);
        } else if (kfinddialog_showevent_callback != nullptr) {
            QShowEvent* cbval1 = param1;

            kfinddialog_showevent_callback(this, cbval1);
        } else {
            KFindDialog::showEvent(param1);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void setVisible(bool visible) override {
        if (kfinddialog_setvisible_isbase) {
            kfinddialog_setvisible_isbase = false;
            KFindDialog::setVisible(visible);
        } else if (kfinddialog_setvisible_callback != nullptr) {
            bool cbval1 = visible;

            kfinddialog_setvisible_callback(this, cbval1);
        } else {
            KFindDialog::setVisible(visible);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QSize sizeHint() const override {
        if (kfinddialog_sizehint_isbase) {
            kfinddialog_sizehint_isbase = false;
            return KFindDialog::sizeHint();
        } else if (kfinddialog_sizehint_callback != nullptr) {
            QSize* callback_ret = kfinddialog_sizehint_callback();
            return *callback_ret;
        } else {
            return KFindDialog::sizeHint();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QSize minimumSizeHint() const override {
        if (kfinddialog_minimumsizehint_isbase) {
            kfinddialog_minimumsizehint_isbase = false;
            return KFindDialog::minimumSizeHint();
        } else if (kfinddialog_minimumsizehint_callback != nullptr) {
            QSize* callback_ret = kfinddialog_minimumsizehint_callback();
            return *callback_ret;
        } else {
            return KFindDialog::minimumSizeHint();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void open() override {
        if (kfinddialog_open_isbase) {
            kfinddialog_open_isbase = false;
            KFindDialog::open();
        } else if (kfinddialog_open_callback != nullptr) {
            kfinddialog_open_callback();
        } else {
            KFindDialog::open();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual int exec() override {
        if (kfinddialog_exec_isbase) {
            kfinddialog_exec_isbase = false;
            return KFindDialog::exec();
        } else if (kfinddialog_exec_callback != nullptr) {
            int callback_ret = kfinddialog_exec_callback();
            return static_cast<int>(callback_ret);
        } else {
            return KFindDialog::exec();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void done(int param1) override {
        if (kfinddialog_done_isbase) {
            kfinddialog_done_isbase = false;
            KFindDialog::done(param1);
        } else if (kfinddialog_done_callback != nullptr) {
            int cbval1 = param1;

            kfinddialog_done_callback(this, cbval1);
        } else {
            KFindDialog::done(param1);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void accept() override {
        if (kfinddialog_accept_isbase) {
            kfinddialog_accept_isbase = false;
            KFindDialog::accept();
        } else if (kfinddialog_accept_callback != nullptr) {
            kfinddialog_accept_callback();
        } else {
            KFindDialog::accept();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void reject() override {
        if (kfinddialog_reject_isbase) {
            kfinddialog_reject_isbase = false;
            KFindDialog::reject();
        } else if (kfinddialog_reject_callback != nullptr) {
            kfinddialog_reject_callback();
        } else {
            KFindDialog::reject();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void keyPressEvent(QKeyEvent* param1) override {
        if (kfinddialog_keypressevent_isbase) {
            kfinddialog_keypressevent_isbase = false;
            KFindDialog::keyPressEvent(param1);
        } else if (kfinddialog_keypressevent_callback != nullptr) {
            QKeyEvent* cbval1 = param1;

            kfinddialog_keypressevent_callback(this, cbval1);
        } else {
            KFindDialog::keyPressEvent(param1);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void closeEvent(QCloseEvent* param1) override {
        if (kfinddialog_closeevent_isbase) {
            kfinddialog_closeevent_isbase = false;
            KFindDialog::closeEvent(param1);
        } else if (kfinddialog_closeevent_callback != nullptr) {
            QCloseEvent* cbval1 = param1;

            kfinddialog_closeevent_callback(this, cbval1);
        } else {
            KFindDialog::closeEvent(param1);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void resizeEvent(QResizeEvent* param1) override {
        if (kfinddialog_resizeevent_isbase) {
            kfinddialog_resizeevent_isbase = false;
            KFindDialog::resizeEvent(param1);
        } else if (kfinddialog_resizeevent_callback != nullptr) {
            QResizeEvent* cbval1 = param1;

            kfinddialog_resizeevent_callback(this, cbval1);
        } else {
            KFindDialog::resizeEvent(param1);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void contextMenuEvent(QContextMenuEvent* param1) override {
        if (kfinddialog_contextmenuevent_isbase) {
            kfinddialog_contextmenuevent_isbase = false;
            KFindDialog::contextMenuEvent(param1);
        } else if (kfinddialog_contextmenuevent_callback != nullptr) {
            QContextMenuEvent* cbval1 = param1;

            kfinddialog_contextmenuevent_callback(this, cbval1);
        } else {
            KFindDialog::contextMenuEvent(param1);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* param1, QEvent* param2) override {
        if (kfinddialog_eventfilter_isbase) {
            kfinddialog_eventfilter_isbase = false;
            return KFindDialog::eventFilter(param1, param2);
        } else if (kfinddialog_eventfilter_callback != nullptr) {
            QObject* cbval1 = param1;
            QEvent* cbval2 = param2;

            bool callback_ret = kfinddialog_eventfilter_callback(this, cbval1, cbval2);
            return callback_ret;
        } else {
            return KFindDialog::eventFilter(param1, param2);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual int devType() const override {
        if (kfinddialog_devtype_isbase) {
            kfinddialog_devtype_isbase = false;
            return KFindDialog::devType();
        } else if (kfinddialog_devtype_callback != nullptr) {
            int callback_ret = kfinddialog_devtype_callback();
            return static_cast<int>(callback_ret);
        } else {
            return KFindDialog::devType();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual int heightForWidth(int param1) const override {
        if (kfinddialog_heightforwidth_isbase) {
            kfinddialog_heightforwidth_isbase = false;
            return KFindDialog::heightForWidth(param1);
        } else if (kfinddialog_heightforwidth_callback != nullptr) {
            int cbval1 = param1;

            int callback_ret = kfinddialog_heightforwidth_callback(this, cbval1);
            return static_cast<int>(callback_ret);
        } else {
            return KFindDialog::heightForWidth(param1);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool hasHeightForWidth() const override {
        if (kfinddialog_hasheightforwidth_isbase) {
            kfinddialog_hasheightforwidth_isbase = false;
            return KFindDialog::hasHeightForWidth();
        } else if (kfinddialog_hasheightforwidth_callback != nullptr) {
            bool callback_ret = kfinddialog_hasheightforwidth_callback();
            return callback_ret;
        } else {
            return KFindDialog::hasHeightForWidth();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QPaintEngine* paintEngine() const override {
        if (kfinddialog_paintengine_isbase) {
            kfinddialog_paintengine_isbase = false;
            return KFindDialog::paintEngine();
        } else if (kfinddialog_paintengine_callback != nullptr) {
            QPaintEngine* callback_ret = kfinddialog_paintengine_callback();
            return callback_ret;
        } else {
            return KFindDialog::paintEngine();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* event) override {
        if (kfinddialog_event_isbase) {
            kfinddialog_event_isbase = false;
            return KFindDialog::event(event);
        } else if (kfinddialog_event_callback != nullptr) {
            QEvent* cbval1 = event;

            bool callback_ret = kfinddialog_event_callback(this, cbval1);
            return callback_ret;
        } else {
            return KFindDialog::event(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void mousePressEvent(QMouseEvent* event) override {
        if (kfinddialog_mousepressevent_isbase) {
            kfinddialog_mousepressevent_isbase = false;
            KFindDialog::mousePressEvent(event);
        } else if (kfinddialog_mousepressevent_callback != nullptr) {
            QMouseEvent* cbval1 = event;

            kfinddialog_mousepressevent_callback(this, cbval1);
        } else {
            KFindDialog::mousePressEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseReleaseEvent(QMouseEvent* event) override {
        if (kfinddialog_mousereleaseevent_isbase) {
            kfinddialog_mousereleaseevent_isbase = false;
            KFindDialog::mouseReleaseEvent(event);
        } else if (kfinddialog_mousereleaseevent_callback != nullptr) {
            QMouseEvent* cbval1 = event;

            kfinddialog_mousereleaseevent_callback(this, cbval1);
        } else {
            KFindDialog::mouseReleaseEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseDoubleClickEvent(QMouseEvent* event) override {
        if (kfinddialog_mousedoubleclickevent_isbase) {
            kfinddialog_mousedoubleclickevent_isbase = false;
            KFindDialog::mouseDoubleClickEvent(event);
        } else if (kfinddialog_mousedoubleclickevent_callback != nullptr) {
            QMouseEvent* cbval1 = event;

            kfinddialog_mousedoubleclickevent_callback(this, cbval1);
        } else {
            KFindDialog::mouseDoubleClickEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseMoveEvent(QMouseEvent* event) override {
        if (kfinddialog_mousemoveevent_isbase) {
            kfinddialog_mousemoveevent_isbase = false;
            KFindDialog::mouseMoveEvent(event);
        } else if (kfinddialog_mousemoveevent_callback != nullptr) {
            QMouseEvent* cbval1 = event;

            kfinddialog_mousemoveevent_callback(this, cbval1);
        } else {
            KFindDialog::mouseMoveEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void wheelEvent(QWheelEvent* event) override {
        if (kfinddialog_wheelevent_isbase) {
            kfinddialog_wheelevent_isbase = false;
            KFindDialog::wheelEvent(event);
        } else if (kfinddialog_wheelevent_callback != nullptr) {
            QWheelEvent* cbval1 = event;

            kfinddialog_wheelevent_callback(this, cbval1);
        } else {
            KFindDialog::wheelEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void keyReleaseEvent(QKeyEvent* event) override {
        if (kfinddialog_keyreleaseevent_isbase) {
            kfinddialog_keyreleaseevent_isbase = false;
            KFindDialog::keyReleaseEvent(event);
        } else if (kfinddialog_keyreleaseevent_callback != nullptr) {
            QKeyEvent* cbval1 = event;

            kfinddialog_keyreleaseevent_callback(this, cbval1);
        } else {
            KFindDialog::keyReleaseEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void focusInEvent(QFocusEvent* event) override {
        if (kfinddialog_focusinevent_isbase) {
            kfinddialog_focusinevent_isbase = false;
            KFindDialog::focusInEvent(event);
        } else if (kfinddialog_focusinevent_callback != nullptr) {
            QFocusEvent* cbval1 = event;

            kfinddialog_focusinevent_callback(this, cbval1);
        } else {
            KFindDialog::focusInEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void focusOutEvent(QFocusEvent* event) override {
        if (kfinddialog_focusoutevent_isbase) {
            kfinddialog_focusoutevent_isbase = false;
            KFindDialog::focusOutEvent(event);
        } else if (kfinddialog_focusoutevent_callback != nullptr) {
            QFocusEvent* cbval1 = event;

            kfinddialog_focusoutevent_callback(this, cbval1);
        } else {
            KFindDialog::focusOutEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void enterEvent(QEnterEvent* event) override {
        if (kfinddialog_enterevent_isbase) {
            kfinddialog_enterevent_isbase = false;
            KFindDialog::enterEvent(event);
        } else if (kfinddialog_enterevent_callback != nullptr) {
            QEnterEvent* cbval1 = event;

            kfinddialog_enterevent_callback(this, cbval1);
        } else {
            KFindDialog::enterEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void leaveEvent(QEvent* event) override {
        if (kfinddialog_leaveevent_isbase) {
            kfinddialog_leaveevent_isbase = false;
            KFindDialog::leaveEvent(event);
        } else if (kfinddialog_leaveevent_callback != nullptr) {
            QEvent* cbval1 = event;

            kfinddialog_leaveevent_callback(this, cbval1);
        } else {
            KFindDialog::leaveEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void paintEvent(QPaintEvent* event) override {
        if (kfinddialog_paintevent_isbase) {
            kfinddialog_paintevent_isbase = false;
            KFindDialog::paintEvent(event);
        } else if (kfinddialog_paintevent_callback != nullptr) {
            QPaintEvent* cbval1 = event;

            kfinddialog_paintevent_callback(this, cbval1);
        } else {
            KFindDialog::paintEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void moveEvent(QMoveEvent* event) override {
        if (kfinddialog_moveevent_isbase) {
            kfinddialog_moveevent_isbase = false;
            KFindDialog::moveEvent(event);
        } else if (kfinddialog_moveevent_callback != nullptr) {
            QMoveEvent* cbval1 = event;

            kfinddialog_moveevent_callback(this, cbval1);
        } else {
            KFindDialog::moveEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void tabletEvent(QTabletEvent* event) override {
        if (kfinddialog_tabletevent_isbase) {
            kfinddialog_tabletevent_isbase = false;
            KFindDialog::tabletEvent(event);
        } else if (kfinddialog_tabletevent_callback != nullptr) {
            QTabletEvent* cbval1 = event;

            kfinddialog_tabletevent_callback(this, cbval1);
        } else {
            KFindDialog::tabletEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void actionEvent(QActionEvent* event) override {
        if (kfinddialog_actionevent_isbase) {
            kfinddialog_actionevent_isbase = false;
            KFindDialog::actionEvent(event);
        } else if (kfinddialog_actionevent_callback != nullptr) {
            QActionEvent* cbval1 = event;

            kfinddialog_actionevent_callback(this, cbval1);
        } else {
            KFindDialog::actionEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragEnterEvent(QDragEnterEvent* event) override {
        if (kfinddialog_dragenterevent_isbase) {
            kfinddialog_dragenterevent_isbase = false;
            KFindDialog::dragEnterEvent(event);
        } else if (kfinddialog_dragenterevent_callback != nullptr) {
            QDragEnterEvent* cbval1 = event;

            kfinddialog_dragenterevent_callback(this, cbval1);
        } else {
            KFindDialog::dragEnterEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragMoveEvent(QDragMoveEvent* event) override {
        if (kfinddialog_dragmoveevent_isbase) {
            kfinddialog_dragmoveevent_isbase = false;
            KFindDialog::dragMoveEvent(event);
        } else if (kfinddialog_dragmoveevent_callback != nullptr) {
            QDragMoveEvent* cbval1 = event;

            kfinddialog_dragmoveevent_callback(this, cbval1);
        } else {
            KFindDialog::dragMoveEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragLeaveEvent(QDragLeaveEvent* event) override {
        if (kfinddialog_dragleaveevent_isbase) {
            kfinddialog_dragleaveevent_isbase = false;
            KFindDialog::dragLeaveEvent(event);
        } else if (kfinddialog_dragleaveevent_callback != nullptr) {
            QDragLeaveEvent* cbval1 = event;

            kfinddialog_dragleaveevent_callback(this, cbval1);
        } else {
            KFindDialog::dragLeaveEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void dropEvent(QDropEvent* event) override {
        if (kfinddialog_dropevent_isbase) {
            kfinddialog_dropevent_isbase = false;
            KFindDialog::dropEvent(event);
        } else if (kfinddialog_dropevent_callback != nullptr) {
            QDropEvent* cbval1 = event;

            kfinddialog_dropevent_callback(this, cbval1);
        } else {
            KFindDialog::dropEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void hideEvent(QHideEvent* event) override {
        if (kfinddialog_hideevent_isbase) {
            kfinddialog_hideevent_isbase = false;
            KFindDialog::hideEvent(event);
        } else if (kfinddialog_hideevent_callback != nullptr) {
            QHideEvent* cbval1 = event;

            kfinddialog_hideevent_callback(this, cbval1);
        } else {
            KFindDialog::hideEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool nativeEvent(const QByteArray& eventType, void* message, qintptr* result) override {
        if (kfinddialog_nativeevent_isbase) {
            kfinddialog_nativeevent_isbase = false;
            return KFindDialog::nativeEvent(eventType, message, result);
        } else if (kfinddialog_nativeevent_callback != nullptr) {
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

            bool callback_ret = kfinddialog_nativeevent_callback(this, cbval1, cbval2, cbval3);
            return callback_ret;
        } else {
            return KFindDialog::nativeEvent(eventType, message, result);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void changeEvent(QEvent* param1) override {
        if (kfinddialog_changeevent_isbase) {
            kfinddialog_changeevent_isbase = false;
            KFindDialog::changeEvent(param1);
        } else if (kfinddialog_changeevent_callback != nullptr) {
            QEvent* cbval1 = param1;

            kfinddialog_changeevent_callback(this, cbval1);
        } else {
            KFindDialog::changeEvent(param1);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual int metric(QPaintDevice::PaintDeviceMetric param1) const override {
        if (kfinddialog_metric_isbase) {
            kfinddialog_metric_isbase = false;
            return KFindDialog::metric(param1);
        } else if (kfinddialog_metric_callback != nullptr) {
            int cbval1 = static_cast<int>(param1);

            int callback_ret = kfinddialog_metric_callback(this, cbval1);
            return static_cast<int>(callback_ret);
        } else {
            return KFindDialog::metric(param1);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void initPainter(QPainter* painter) const override {
        if (kfinddialog_initpainter_isbase) {
            kfinddialog_initpainter_isbase = false;
            KFindDialog::initPainter(painter);
        } else if (kfinddialog_initpainter_callback != nullptr) {
            QPainter* cbval1 = painter;

            kfinddialog_initpainter_callback(this, cbval1);
        } else {
            KFindDialog::initPainter(painter);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QPaintDevice* redirected(QPoint* offset) const override {
        if (kfinddialog_redirected_isbase) {
            kfinddialog_redirected_isbase = false;
            return KFindDialog::redirected(offset);
        } else if (kfinddialog_redirected_callback != nullptr) {
            QPoint* cbval1 = offset;

            QPaintDevice* callback_ret = kfinddialog_redirected_callback(this, cbval1);
            return callback_ret;
        } else {
            return KFindDialog::redirected(offset);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QPainter* sharedPainter() const override {
        if (kfinddialog_sharedpainter_isbase) {
            kfinddialog_sharedpainter_isbase = false;
            return KFindDialog::sharedPainter();
        } else if (kfinddialog_sharedpainter_callback != nullptr) {
            QPainter* callback_ret = kfinddialog_sharedpainter_callback();
            return callback_ret;
        } else {
            return KFindDialog::sharedPainter();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void inputMethodEvent(QInputMethodEvent* param1) override {
        if (kfinddialog_inputmethodevent_isbase) {
            kfinddialog_inputmethodevent_isbase = false;
            KFindDialog::inputMethodEvent(param1);
        } else if (kfinddialog_inputmethodevent_callback != nullptr) {
            QInputMethodEvent* cbval1 = param1;

            kfinddialog_inputmethodevent_callback(this, cbval1);
        } else {
            KFindDialog::inputMethodEvent(param1);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QVariant inputMethodQuery(Qt::InputMethodQuery param1) const override {
        if (kfinddialog_inputmethodquery_isbase) {
            kfinddialog_inputmethodquery_isbase = false;
            return KFindDialog::inputMethodQuery(param1);
        } else if (kfinddialog_inputmethodquery_callback != nullptr) {
            int cbval1 = static_cast<int>(param1);

            QVariant* callback_ret = kfinddialog_inputmethodquery_callback(this, cbval1);
            return *callback_ret;
        } else {
            return KFindDialog::inputMethodQuery(param1);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool focusNextPrevChild(bool next) override {
        if (kfinddialog_focusnextprevchild_isbase) {
            kfinddialog_focusnextprevchild_isbase = false;
            return KFindDialog::focusNextPrevChild(next);
        } else if (kfinddialog_focusnextprevchild_callback != nullptr) {
            bool cbval1 = next;

            bool callback_ret = kfinddialog_focusnextprevchild_callback(this, cbval1);
            return callback_ret;
        } else {
            return KFindDialog::focusNextPrevChild(next);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (kfinddialog_timerevent_isbase) {
            kfinddialog_timerevent_isbase = false;
            KFindDialog::timerEvent(event);
        } else if (kfinddialog_timerevent_callback != nullptr) {
            QTimerEvent* cbval1 = event;

            kfinddialog_timerevent_callback(this, cbval1);
        } else {
            KFindDialog::timerEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (kfinddialog_childevent_isbase) {
            kfinddialog_childevent_isbase = false;
            KFindDialog::childEvent(event);
        } else if (kfinddialog_childevent_callback != nullptr) {
            QChildEvent* cbval1 = event;

            kfinddialog_childevent_callback(this, cbval1);
        } else {
            KFindDialog::childEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (kfinddialog_customevent_isbase) {
            kfinddialog_customevent_isbase = false;
            KFindDialog::customEvent(event);
        } else if (kfinddialog_customevent_callback != nullptr) {
            QEvent* cbval1 = event;

            kfinddialog_customevent_callback(this, cbval1);
        } else {
            KFindDialog::customEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (kfinddialog_connectnotify_isbase) {
            kfinddialog_connectnotify_isbase = false;
            KFindDialog::connectNotify(signal);
        } else if (kfinddialog_connectnotify_callback != nullptr) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            kfinddialog_connectnotify_callback(this, cbval1);
        } else {
            KFindDialog::connectNotify(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (kfinddialog_disconnectnotify_isbase) {
            kfinddialog_disconnectnotify_isbase = false;
            KFindDialog::disconnectNotify(signal);
        } else if (kfinddialog_disconnectnotify_callback != nullptr) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            kfinddialog_disconnectnotify_callback(this, cbval1);
        } else {
            KFindDialog::disconnectNotify(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    void adjustPosition(QWidget* param1) {
        if (kfinddialog_adjustposition_isbase) {
            kfinddialog_adjustposition_isbase = false;
            KFindDialog::adjustPosition(param1);
        } else if (kfinddialog_adjustposition_callback != nullptr) {
            QWidget* cbval1 = param1;

            kfinddialog_adjustposition_callback(this, cbval1);
        } else {
            KFindDialog::adjustPosition(param1);
        }
    }

    // Virtual method for C ABI access and custom callback
    void updateMicroFocus() {
        if (kfinddialog_updatemicrofocus_isbase) {
            kfinddialog_updatemicrofocus_isbase = false;
            KFindDialog::updateMicroFocus();
        } else if (kfinddialog_updatemicrofocus_callback != nullptr) {
            kfinddialog_updatemicrofocus_callback();
        } else {
            KFindDialog::updateMicroFocus();
        }
    }

    // Virtual method for C ABI access and custom callback
    void create() {
        if (kfinddialog_create_isbase) {
            kfinddialog_create_isbase = false;
            KFindDialog::create();
        } else if (kfinddialog_create_callback != nullptr) {
            kfinddialog_create_callback();
        } else {
            KFindDialog::create();
        }
    }

    // Virtual method for C ABI access and custom callback
    void destroy() {
        if (kfinddialog_destroy_isbase) {
            kfinddialog_destroy_isbase = false;
            KFindDialog::destroy();
        } else if (kfinddialog_destroy_callback != nullptr) {
            kfinddialog_destroy_callback();
        } else {
            KFindDialog::destroy();
        }
    }

    // Virtual method for C ABI access and custom callback
    bool focusNextChild() {
        if (kfinddialog_focusnextchild_isbase) {
            kfinddialog_focusnextchild_isbase = false;
            return KFindDialog::focusNextChild();
        } else if (kfinddialog_focusnextchild_callback != nullptr) {
            bool callback_ret = kfinddialog_focusnextchild_callback();
            return callback_ret;
        } else {
            return KFindDialog::focusNextChild();
        }
    }

    // Virtual method for C ABI access and custom callback
    bool focusPreviousChild() {
        if (kfinddialog_focuspreviouschild_isbase) {
            kfinddialog_focuspreviouschild_isbase = false;
            return KFindDialog::focusPreviousChild();
        } else if (kfinddialog_focuspreviouschild_callback != nullptr) {
            bool callback_ret = kfinddialog_focuspreviouschild_callback();
            return callback_ret;
        } else {
            return KFindDialog::focusPreviousChild();
        }
    }

    // Virtual method for C ABI access and custom callback
    QObject* sender() const {
        if (kfinddialog_sender_isbase) {
            kfinddialog_sender_isbase = false;
            return KFindDialog::sender();
        } else if (kfinddialog_sender_callback != nullptr) {
            QObject* callback_ret = kfinddialog_sender_callback();
            return callback_ret;
        } else {
            return KFindDialog::sender();
        }
    }

    // Virtual method for C ABI access and custom callback
    int senderSignalIndex() const {
        if (kfinddialog_sendersignalindex_isbase) {
            kfinddialog_sendersignalindex_isbase = false;
            return KFindDialog::senderSignalIndex();
        } else if (kfinddialog_sendersignalindex_callback != nullptr) {
            int callback_ret = kfinddialog_sendersignalindex_callback();
            return static_cast<int>(callback_ret);
        } else {
            return KFindDialog::senderSignalIndex();
        }
    }

    // Virtual method for C ABI access and custom callback
    int receivers(const char* signal) const {
        if (kfinddialog_receivers_isbase) {
            kfinddialog_receivers_isbase = false;
            return KFindDialog::receivers(signal);
        } else if (kfinddialog_receivers_callback != nullptr) {
            const char* cbval1 = (const char*)signal;

            int callback_ret = kfinddialog_receivers_callback(this, cbval1);
            return static_cast<int>(callback_ret);
        } else {
            return KFindDialog::receivers(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    bool isSignalConnected(const QMetaMethod& signal) const {
        if (kfinddialog_issignalconnected_isbase) {
            kfinddialog_issignalconnected_isbase = false;
            return KFindDialog::isSignalConnected(signal);
        } else if (kfinddialog_issignalconnected_callback != nullptr) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            bool callback_ret = kfinddialog_issignalconnected_callback(this, cbval1);
            return callback_ret;
        } else {
            return KFindDialog::isSignalConnected(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    double getDecodedMetricF(QPaintDevice::PaintDeviceMetric metricA, QPaintDevice::PaintDeviceMetric metricB) const {
        if (kfinddialog_getdecodedmetricf_isbase) {
            kfinddialog_getdecodedmetricf_isbase = false;
            return KFindDialog::getDecodedMetricF(metricA, metricB);
        } else if (kfinddialog_getdecodedmetricf_callback != nullptr) {
            int cbval1 = static_cast<int>(metricA);
            int cbval2 = static_cast<int>(metricB);

            double callback_ret = kfinddialog_getdecodedmetricf_callback(this, cbval1, cbval2);
            return static_cast<double>(callback_ret);
        } else {
            return KFindDialog::getDecodedMetricF(metricA, metricB);
        }
    }

    // Friend functions
    friend void KFindDialog_ShowEvent(KFindDialog* self, QShowEvent* param1);
    friend void KFindDialog_QBaseShowEvent(KFindDialog* self, QShowEvent* param1);
    friend void KFindDialog_KeyPressEvent(KFindDialog* self, QKeyEvent* param1);
    friend void KFindDialog_QBaseKeyPressEvent(KFindDialog* self, QKeyEvent* param1);
    friend void KFindDialog_CloseEvent(KFindDialog* self, QCloseEvent* param1);
    friend void KFindDialog_QBaseCloseEvent(KFindDialog* self, QCloseEvent* param1);
    friend void KFindDialog_ResizeEvent(KFindDialog* self, QResizeEvent* param1);
    friend void KFindDialog_QBaseResizeEvent(KFindDialog* self, QResizeEvent* param1);
    friend void KFindDialog_ContextMenuEvent(KFindDialog* self, QContextMenuEvent* param1);
    friend void KFindDialog_QBaseContextMenuEvent(KFindDialog* self, QContextMenuEvent* param1);
    friend bool KFindDialog_EventFilter(KFindDialog* self, QObject* param1, QEvent* param2);
    friend bool KFindDialog_QBaseEventFilter(KFindDialog* self, QObject* param1, QEvent* param2);
    friend bool KFindDialog_Event(KFindDialog* self, QEvent* event);
    friend bool KFindDialog_QBaseEvent(KFindDialog* self, QEvent* event);
    friend void KFindDialog_MousePressEvent(KFindDialog* self, QMouseEvent* event);
    friend void KFindDialog_QBaseMousePressEvent(KFindDialog* self, QMouseEvent* event);
    friend void KFindDialog_MouseReleaseEvent(KFindDialog* self, QMouseEvent* event);
    friend void KFindDialog_QBaseMouseReleaseEvent(KFindDialog* self, QMouseEvent* event);
    friend void KFindDialog_MouseDoubleClickEvent(KFindDialog* self, QMouseEvent* event);
    friend void KFindDialog_QBaseMouseDoubleClickEvent(KFindDialog* self, QMouseEvent* event);
    friend void KFindDialog_MouseMoveEvent(KFindDialog* self, QMouseEvent* event);
    friend void KFindDialog_QBaseMouseMoveEvent(KFindDialog* self, QMouseEvent* event);
    friend void KFindDialog_WheelEvent(KFindDialog* self, QWheelEvent* event);
    friend void KFindDialog_QBaseWheelEvent(KFindDialog* self, QWheelEvent* event);
    friend void KFindDialog_KeyReleaseEvent(KFindDialog* self, QKeyEvent* event);
    friend void KFindDialog_QBaseKeyReleaseEvent(KFindDialog* self, QKeyEvent* event);
    friend void KFindDialog_FocusInEvent(KFindDialog* self, QFocusEvent* event);
    friend void KFindDialog_QBaseFocusInEvent(KFindDialog* self, QFocusEvent* event);
    friend void KFindDialog_FocusOutEvent(KFindDialog* self, QFocusEvent* event);
    friend void KFindDialog_QBaseFocusOutEvent(KFindDialog* self, QFocusEvent* event);
    friend void KFindDialog_EnterEvent(KFindDialog* self, QEnterEvent* event);
    friend void KFindDialog_QBaseEnterEvent(KFindDialog* self, QEnterEvent* event);
    friend void KFindDialog_LeaveEvent(KFindDialog* self, QEvent* event);
    friend void KFindDialog_QBaseLeaveEvent(KFindDialog* self, QEvent* event);
    friend void KFindDialog_PaintEvent(KFindDialog* self, QPaintEvent* event);
    friend void KFindDialog_QBasePaintEvent(KFindDialog* self, QPaintEvent* event);
    friend void KFindDialog_MoveEvent(KFindDialog* self, QMoveEvent* event);
    friend void KFindDialog_QBaseMoveEvent(KFindDialog* self, QMoveEvent* event);
    friend void KFindDialog_TabletEvent(KFindDialog* self, QTabletEvent* event);
    friend void KFindDialog_QBaseTabletEvent(KFindDialog* self, QTabletEvent* event);
    friend void KFindDialog_ActionEvent(KFindDialog* self, QActionEvent* event);
    friend void KFindDialog_QBaseActionEvent(KFindDialog* self, QActionEvent* event);
    friend void KFindDialog_DragEnterEvent(KFindDialog* self, QDragEnterEvent* event);
    friend void KFindDialog_QBaseDragEnterEvent(KFindDialog* self, QDragEnterEvent* event);
    friend void KFindDialog_DragMoveEvent(KFindDialog* self, QDragMoveEvent* event);
    friend void KFindDialog_QBaseDragMoveEvent(KFindDialog* self, QDragMoveEvent* event);
    friend void KFindDialog_DragLeaveEvent(KFindDialog* self, QDragLeaveEvent* event);
    friend void KFindDialog_QBaseDragLeaveEvent(KFindDialog* self, QDragLeaveEvent* event);
    friend void KFindDialog_DropEvent(KFindDialog* self, QDropEvent* event);
    friend void KFindDialog_QBaseDropEvent(KFindDialog* self, QDropEvent* event);
    friend void KFindDialog_HideEvent(KFindDialog* self, QHideEvent* event);
    friend void KFindDialog_QBaseHideEvent(KFindDialog* self, QHideEvent* event);
    friend bool KFindDialog_NativeEvent(KFindDialog* self, const libqt_string eventType, void* message, intptr_t* result);
    friend bool KFindDialog_QBaseNativeEvent(KFindDialog* self, const libqt_string eventType, void* message, intptr_t* result);
    friend void KFindDialog_ChangeEvent(KFindDialog* self, QEvent* param1);
    friend void KFindDialog_QBaseChangeEvent(KFindDialog* self, QEvent* param1);
    friend int KFindDialog_Metric(const KFindDialog* self, int param1);
    friend int KFindDialog_QBaseMetric(const KFindDialog* self, int param1);
    friend void KFindDialog_InitPainter(const KFindDialog* self, QPainter* painter);
    friend void KFindDialog_QBaseInitPainter(const KFindDialog* self, QPainter* painter);
    friend QPaintDevice* KFindDialog_Redirected(const KFindDialog* self, QPoint* offset);
    friend QPaintDevice* KFindDialog_QBaseRedirected(const KFindDialog* self, QPoint* offset);
    friend QPainter* KFindDialog_SharedPainter(const KFindDialog* self);
    friend QPainter* KFindDialog_QBaseSharedPainter(const KFindDialog* self);
    friend void KFindDialog_InputMethodEvent(KFindDialog* self, QInputMethodEvent* param1);
    friend void KFindDialog_QBaseInputMethodEvent(KFindDialog* self, QInputMethodEvent* param1);
    friend bool KFindDialog_FocusNextPrevChild(KFindDialog* self, bool next);
    friend bool KFindDialog_QBaseFocusNextPrevChild(KFindDialog* self, bool next);
    friend void KFindDialog_TimerEvent(KFindDialog* self, QTimerEvent* event);
    friend void KFindDialog_QBaseTimerEvent(KFindDialog* self, QTimerEvent* event);
    friend void KFindDialog_ChildEvent(KFindDialog* self, QChildEvent* event);
    friend void KFindDialog_QBaseChildEvent(KFindDialog* self, QChildEvent* event);
    friend void KFindDialog_CustomEvent(KFindDialog* self, QEvent* event);
    friend void KFindDialog_QBaseCustomEvent(KFindDialog* self, QEvent* event);
    friend void KFindDialog_ConnectNotify(KFindDialog* self, const QMetaMethod* signal);
    friend void KFindDialog_QBaseConnectNotify(KFindDialog* self, const QMetaMethod* signal);
    friend void KFindDialog_DisconnectNotify(KFindDialog* self, const QMetaMethod* signal);
    friend void KFindDialog_QBaseDisconnectNotify(KFindDialog* self, const QMetaMethod* signal);
    friend void KFindDialog_AdjustPosition(KFindDialog* self, QWidget* param1);
    friend void KFindDialog_QBaseAdjustPosition(KFindDialog* self, QWidget* param1);
    friend void KFindDialog_UpdateMicroFocus(KFindDialog* self);
    friend void KFindDialog_QBaseUpdateMicroFocus(KFindDialog* self);
    friend void KFindDialog_Create(KFindDialog* self);
    friend void KFindDialog_QBaseCreate(KFindDialog* self);
    friend void KFindDialog_Destroy(KFindDialog* self);
    friend void KFindDialog_QBaseDestroy(KFindDialog* self);
    friend bool KFindDialog_FocusNextChild(KFindDialog* self);
    friend bool KFindDialog_QBaseFocusNextChild(KFindDialog* self);
    friend bool KFindDialog_FocusPreviousChild(KFindDialog* self);
    friend bool KFindDialog_QBaseFocusPreviousChild(KFindDialog* self);
    friend QObject* KFindDialog_Sender(const KFindDialog* self);
    friend QObject* KFindDialog_QBaseSender(const KFindDialog* self);
    friend int KFindDialog_SenderSignalIndex(const KFindDialog* self);
    friend int KFindDialog_QBaseSenderSignalIndex(const KFindDialog* self);
    friend int KFindDialog_Receivers(const KFindDialog* self, const char* signal);
    friend int KFindDialog_QBaseReceivers(const KFindDialog* self, const char* signal);
    friend bool KFindDialog_IsSignalConnected(const KFindDialog* self, const QMetaMethod* signal);
    friend bool KFindDialog_QBaseIsSignalConnected(const KFindDialog* self, const QMetaMethod* signal);
    friend double KFindDialog_GetDecodedMetricF(const KFindDialog* self, int metricA, int metricB);
    friend double KFindDialog_QBaseGetDecodedMetricF(const KFindDialog* self, int metricA, int metricB);
};

#endif
