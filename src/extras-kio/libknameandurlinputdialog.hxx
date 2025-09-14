#pragma once
#ifndef SRC_EXTRAS_KIOC_LIBVIRTUALKNAMEANDURLINPUTDIALOG_H
#define SRC_EXTRAS_KIOC_LIBVIRTUALKNAMEANDURLINPUTDIALOG_H

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

// This class is a subclass of KNameAndUrlInputDialog so that we can call protected methods
class VirtualKNameAndUrlInputDialog final : public KNameAndUrlInputDialog {

  public:
    // Virtual class boolean flag
    bool isVirtualKNameAndUrlInputDialog = true;

    // Virtual class public types (including callbacks)
    using KNameAndUrlInputDialog_Metacall_Callback = int (*)(KNameAndUrlInputDialog*, int, int, void**);
    using KNameAndUrlInputDialog_SetVisible_Callback = void (*)(KNameAndUrlInputDialog*, bool);
    using KNameAndUrlInputDialog_SizeHint_Callback = QSize* (*)();
    using KNameAndUrlInputDialog_MinimumSizeHint_Callback = QSize* (*)();
    using KNameAndUrlInputDialog_Open_Callback = void (*)();
    using KNameAndUrlInputDialog_Exec_Callback = int (*)();
    using KNameAndUrlInputDialog_Done_Callback = void (*)(KNameAndUrlInputDialog*, int);
    using KNameAndUrlInputDialog_Accept_Callback = void (*)();
    using KNameAndUrlInputDialog_Reject_Callback = void (*)();
    using KNameAndUrlInputDialog_KeyPressEvent_Callback = void (*)(KNameAndUrlInputDialog*, QKeyEvent*);
    using KNameAndUrlInputDialog_CloseEvent_Callback = void (*)(KNameAndUrlInputDialog*, QCloseEvent*);
    using KNameAndUrlInputDialog_ShowEvent_Callback = void (*)(KNameAndUrlInputDialog*, QShowEvent*);
    using KNameAndUrlInputDialog_ResizeEvent_Callback = void (*)(KNameAndUrlInputDialog*, QResizeEvent*);
    using KNameAndUrlInputDialog_ContextMenuEvent_Callback = void (*)(KNameAndUrlInputDialog*, QContextMenuEvent*);
    using KNameAndUrlInputDialog_EventFilter_Callback = bool (*)(KNameAndUrlInputDialog*, QObject*, QEvent*);
    using KNameAndUrlInputDialog_DevType_Callback = int (*)();
    using KNameAndUrlInputDialog_HeightForWidth_Callback = int (*)(const KNameAndUrlInputDialog*, int);
    using KNameAndUrlInputDialog_HasHeightForWidth_Callback = bool (*)();
    using KNameAndUrlInputDialog_PaintEngine_Callback = QPaintEngine* (*)();
    using KNameAndUrlInputDialog_Event_Callback = bool (*)(KNameAndUrlInputDialog*, QEvent*);
    using KNameAndUrlInputDialog_MousePressEvent_Callback = void (*)(KNameAndUrlInputDialog*, QMouseEvent*);
    using KNameAndUrlInputDialog_MouseReleaseEvent_Callback = void (*)(KNameAndUrlInputDialog*, QMouseEvent*);
    using KNameAndUrlInputDialog_MouseDoubleClickEvent_Callback = void (*)(KNameAndUrlInputDialog*, QMouseEvent*);
    using KNameAndUrlInputDialog_MouseMoveEvent_Callback = void (*)(KNameAndUrlInputDialog*, QMouseEvent*);
    using KNameAndUrlInputDialog_WheelEvent_Callback = void (*)(KNameAndUrlInputDialog*, QWheelEvent*);
    using KNameAndUrlInputDialog_KeyReleaseEvent_Callback = void (*)(KNameAndUrlInputDialog*, QKeyEvent*);
    using KNameAndUrlInputDialog_FocusInEvent_Callback = void (*)(KNameAndUrlInputDialog*, QFocusEvent*);
    using KNameAndUrlInputDialog_FocusOutEvent_Callback = void (*)(KNameAndUrlInputDialog*, QFocusEvent*);
    using KNameAndUrlInputDialog_EnterEvent_Callback = void (*)(KNameAndUrlInputDialog*, QEnterEvent*);
    using KNameAndUrlInputDialog_LeaveEvent_Callback = void (*)(KNameAndUrlInputDialog*, QEvent*);
    using KNameAndUrlInputDialog_PaintEvent_Callback = void (*)(KNameAndUrlInputDialog*, QPaintEvent*);
    using KNameAndUrlInputDialog_MoveEvent_Callback = void (*)(KNameAndUrlInputDialog*, QMoveEvent*);
    using KNameAndUrlInputDialog_TabletEvent_Callback = void (*)(KNameAndUrlInputDialog*, QTabletEvent*);
    using KNameAndUrlInputDialog_ActionEvent_Callback = void (*)(KNameAndUrlInputDialog*, QActionEvent*);
    using KNameAndUrlInputDialog_DragEnterEvent_Callback = void (*)(KNameAndUrlInputDialog*, QDragEnterEvent*);
    using KNameAndUrlInputDialog_DragMoveEvent_Callback = void (*)(KNameAndUrlInputDialog*, QDragMoveEvent*);
    using KNameAndUrlInputDialog_DragLeaveEvent_Callback = void (*)(KNameAndUrlInputDialog*, QDragLeaveEvent*);
    using KNameAndUrlInputDialog_DropEvent_Callback = void (*)(KNameAndUrlInputDialog*, QDropEvent*);
    using KNameAndUrlInputDialog_HideEvent_Callback = void (*)(KNameAndUrlInputDialog*, QHideEvent*);
    using KNameAndUrlInputDialog_NativeEvent_Callback = bool (*)(KNameAndUrlInputDialog*, libqt_string, void*, intptr_t*);
    using KNameAndUrlInputDialog_ChangeEvent_Callback = void (*)(KNameAndUrlInputDialog*, QEvent*);
    using KNameAndUrlInputDialog_Metric_Callback = int (*)(const KNameAndUrlInputDialog*, int);
    using KNameAndUrlInputDialog_InitPainter_Callback = void (*)(const KNameAndUrlInputDialog*, QPainter*);
    using KNameAndUrlInputDialog_Redirected_Callback = QPaintDevice* (*)(const KNameAndUrlInputDialog*, QPoint*);
    using KNameAndUrlInputDialog_SharedPainter_Callback = QPainter* (*)();
    using KNameAndUrlInputDialog_InputMethodEvent_Callback = void (*)(KNameAndUrlInputDialog*, QInputMethodEvent*);
    using KNameAndUrlInputDialog_InputMethodQuery_Callback = QVariant* (*)(const KNameAndUrlInputDialog*, int);
    using KNameAndUrlInputDialog_FocusNextPrevChild_Callback = bool (*)(KNameAndUrlInputDialog*, bool);
    using KNameAndUrlInputDialog_TimerEvent_Callback = void (*)(KNameAndUrlInputDialog*, QTimerEvent*);
    using KNameAndUrlInputDialog_ChildEvent_Callback = void (*)(KNameAndUrlInputDialog*, QChildEvent*);
    using KNameAndUrlInputDialog_CustomEvent_Callback = void (*)(KNameAndUrlInputDialog*, QEvent*);
    using KNameAndUrlInputDialog_ConnectNotify_Callback = void (*)(KNameAndUrlInputDialog*, QMetaMethod*);
    using KNameAndUrlInputDialog_DisconnectNotify_Callback = void (*)(KNameAndUrlInputDialog*, QMetaMethod*);
    using KNameAndUrlInputDialog_AdjustPosition_Callback = void (*)(KNameAndUrlInputDialog*, QWidget*);
    using KNameAndUrlInputDialog_UpdateMicroFocus_Callback = void (*)();
    using KNameAndUrlInputDialog_Create_Callback = void (*)();
    using KNameAndUrlInputDialog_Destroy_Callback = void (*)();
    using KNameAndUrlInputDialog_FocusNextChild_Callback = bool (*)();
    using KNameAndUrlInputDialog_FocusPreviousChild_Callback = bool (*)();
    using KNameAndUrlInputDialog_Sender_Callback = QObject* (*)();
    using KNameAndUrlInputDialog_SenderSignalIndex_Callback = int (*)();
    using KNameAndUrlInputDialog_Receivers_Callback = int (*)(const KNameAndUrlInputDialog*, const char*);
    using KNameAndUrlInputDialog_IsSignalConnected_Callback = bool (*)(const KNameAndUrlInputDialog*, QMetaMethod*);
    using KNameAndUrlInputDialog_GetDecodedMetricF_Callback = double (*)(const KNameAndUrlInputDialog*, int, int);

  protected:
    // Instance callback storage
    KNameAndUrlInputDialog_Metacall_Callback knameandurlinputdialog_metacall_callback = nullptr;
    KNameAndUrlInputDialog_SetVisible_Callback knameandurlinputdialog_setvisible_callback = nullptr;
    KNameAndUrlInputDialog_SizeHint_Callback knameandurlinputdialog_sizehint_callback = nullptr;
    KNameAndUrlInputDialog_MinimumSizeHint_Callback knameandurlinputdialog_minimumsizehint_callback = nullptr;
    KNameAndUrlInputDialog_Open_Callback knameandurlinputdialog_open_callback = nullptr;
    KNameAndUrlInputDialog_Exec_Callback knameandurlinputdialog_exec_callback = nullptr;
    KNameAndUrlInputDialog_Done_Callback knameandurlinputdialog_done_callback = nullptr;
    KNameAndUrlInputDialog_Accept_Callback knameandurlinputdialog_accept_callback = nullptr;
    KNameAndUrlInputDialog_Reject_Callback knameandurlinputdialog_reject_callback = nullptr;
    KNameAndUrlInputDialog_KeyPressEvent_Callback knameandurlinputdialog_keypressevent_callback = nullptr;
    KNameAndUrlInputDialog_CloseEvent_Callback knameandurlinputdialog_closeevent_callback = nullptr;
    KNameAndUrlInputDialog_ShowEvent_Callback knameandurlinputdialog_showevent_callback = nullptr;
    KNameAndUrlInputDialog_ResizeEvent_Callback knameandurlinputdialog_resizeevent_callback = nullptr;
    KNameAndUrlInputDialog_ContextMenuEvent_Callback knameandurlinputdialog_contextmenuevent_callback = nullptr;
    KNameAndUrlInputDialog_EventFilter_Callback knameandurlinputdialog_eventfilter_callback = nullptr;
    KNameAndUrlInputDialog_DevType_Callback knameandurlinputdialog_devtype_callback = nullptr;
    KNameAndUrlInputDialog_HeightForWidth_Callback knameandurlinputdialog_heightforwidth_callback = nullptr;
    KNameAndUrlInputDialog_HasHeightForWidth_Callback knameandurlinputdialog_hasheightforwidth_callback = nullptr;
    KNameAndUrlInputDialog_PaintEngine_Callback knameandurlinputdialog_paintengine_callback = nullptr;
    KNameAndUrlInputDialog_Event_Callback knameandurlinputdialog_event_callback = nullptr;
    KNameAndUrlInputDialog_MousePressEvent_Callback knameandurlinputdialog_mousepressevent_callback = nullptr;
    KNameAndUrlInputDialog_MouseReleaseEvent_Callback knameandurlinputdialog_mousereleaseevent_callback = nullptr;
    KNameAndUrlInputDialog_MouseDoubleClickEvent_Callback knameandurlinputdialog_mousedoubleclickevent_callback = nullptr;
    KNameAndUrlInputDialog_MouseMoveEvent_Callback knameandurlinputdialog_mousemoveevent_callback = nullptr;
    KNameAndUrlInputDialog_WheelEvent_Callback knameandurlinputdialog_wheelevent_callback = nullptr;
    KNameAndUrlInputDialog_KeyReleaseEvent_Callback knameandurlinputdialog_keyreleaseevent_callback = nullptr;
    KNameAndUrlInputDialog_FocusInEvent_Callback knameandurlinputdialog_focusinevent_callback = nullptr;
    KNameAndUrlInputDialog_FocusOutEvent_Callback knameandurlinputdialog_focusoutevent_callback = nullptr;
    KNameAndUrlInputDialog_EnterEvent_Callback knameandurlinputdialog_enterevent_callback = nullptr;
    KNameAndUrlInputDialog_LeaveEvent_Callback knameandurlinputdialog_leaveevent_callback = nullptr;
    KNameAndUrlInputDialog_PaintEvent_Callback knameandurlinputdialog_paintevent_callback = nullptr;
    KNameAndUrlInputDialog_MoveEvent_Callback knameandurlinputdialog_moveevent_callback = nullptr;
    KNameAndUrlInputDialog_TabletEvent_Callback knameandurlinputdialog_tabletevent_callback = nullptr;
    KNameAndUrlInputDialog_ActionEvent_Callback knameandurlinputdialog_actionevent_callback = nullptr;
    KNameAndUrlInputDialog_DragEnterEvent_Callback knameandurlinputdialog_dragenterevent_callback = nullptr;
    KNameAndUrlInputDialog_DragMoveEvent_Callback knameandurlinputdialog_dragmoveevent_callback = nullptr;
    KNameAndUrlInputDialog_DragLeaveEvent_Callback knameandurlinputdialog_dragleaveevent_callback = nullptr;
    KNameAndUrlInputDialog_DropEvent_Callback knameandurlinputdialog_dropevent_callback = nullptr;
    KNameAndUrlInputDialog_HideEvent_Callback knameandurlinputdialog_hideevent_callback = nullptr;
    KNameAndUrlInputDialog_NativeEvent_Callback knameandurlinputdialog_nativeevent_callback = nullptr;
    KNameAndUrlInputDialog_ChangeEvent_Callback knameandurlinputdialog_changeevent_callback = nullptr;
    KNameAndUrlInputDialog_Metric_Callback knameandurlinputdialog_metric_callback = nullptr;
    KNameAndUrlInputDialog_InitPainter_Callback knameandurlinputdialog_initpainter_callback = nullptr;
    KNameAndUrlInputDialog_Redirected_Callback knameandurlinputdialog_redirected_callback = nullptr;
    KNameAndUrlInputDialog_SharedPainter_Callback knameandurlinputdialog_sharedpainter_callback = nullptr;
    KNameAndUrlInputDialog_InputMethodEvent_Callback knameandurlinputdialog_inputmethodevent_callback = nullptr;
    KNameAndUrlInputDialog_InputMethodQuery_Callback knameandurlinputdialog_inputmethodquery_callback = nullptr;
    KNameAndUrlInputDialog_FocusNextPrevChild_Callback knameandurlinputdialog_focusnextprevchild_callback = nullptr;
    KNameAndUrlInputDialog_TimerEvent_Callback knameandurlinputdialog_timerevent_callback = nullptr;
    KNameAndUrlInputDialog_ChildEvent_Callback knameandurlinputdialog_childevent_callback = nullptr;
    KNameAndUrlInputDialog_CustomEvent_Callback knameandurlinputdialog_customevent_callback = nullptr;
    KNameAndUrlInputDialog_ConnectNotify_Callback knameandurlinputdialog_connectnotify_callback = nullptr;
    KNameAndUrlInputDialog_DisconnectNotify_Callback knameandurlinputdialog_disconnectnotify_callback = nullptr;
    KNameAndUrlInputDialog_AdjustPosition_Callback knameandurlinputdialog_adjustposition_callback = nullptr;
    KNameAndUrlInputDialog_UpdateMicroFocus_Callback knameandurlinputdialog_updatemicrofocus_callback = nullptr;
    KNameAndUrlInputDialog_Create_Callback knameandurlinputdialog_create_callback = nullptr;
    KNameAndUrlInputDialog_Destroy_Callback knameandurlinputdialog_destroy_callback = nullptr;
    KNameAndUrlInputDialog_FocusNextChild_Callback knameandurlinputdialog_focusnextchild_callback = nullptr;
    KNameAndUrlInputDialog_FocusPreviousChild_Callback knameandurlinputdialog_focuspreviouschild_callback = nullptr;
    KNameAndUrlInputDialog_Sender_Callback knameandurlinputdialog_sender_callback = nullptr;
    KNameAndUrlInputDialog_SenderSignalIndex_Callback knameandurlinputdialog_sendersignalindex_callback = nullptr;
    KNameAndUrlInputDialog_Receivers_Callback knameandurlinputdialog_receivers_callback = nullptr;
    KNameAndUrlInputDialog_IsSignalConnected_Callback knameandurlinputdialog_issignalconnected_callback = nullptr;
    KNameAndUrlInputDialog_GetDecodedMetricF_Callback knameandurlinputdialog_getdecodedmetricf_callback = nullptr;

    // Instance base flags
    mutable bool knameandurlinputdialog_metacall_isbase = false;
    mutable bool knameandurlinputdialog_setvisible_isbase = false;
    mutable bool knameandurlinputdialog_sizehint_isbase = false;
    mutable bool knameandurlinputdialog_minimumsizehint_isbase = false;
    mutable bool knameandurlinputdialog_open_isbase = false;
    mutable bool knameandurlinputdialog_exec_isbase = false;
    mutable bool knameandurlinputdialog_done_isbase = false;
    mutable bool knameandurlinputdialog_accept_isbase = false;
    mutable bool knameandurlinputdialog_reject_isbase = false;
    mutable bool knameandurlinputdialog_keypressevent_isbase = false;
    mutable bool knameandurlinputdialog_closeevent_isbase = false;
    mutable bool knameandurlinputdialog_showevent_isbase = false;
    mutable bool knameandurlinputdialog_resizeevent_isbase = false;
    mutable bool knameandurlinputdialog_contextmenuevent_isbase = false;
    mutable bool knameandurlinputdialog_eventfilter_isbase = false;
    mutable bool knameandurlinputdialog_devtype_isbase = false;
    mutable bool knameandurlinputdialog_heightforwidth_isbase = false;
    mutable bool knameandurlinputdialog_hasheightforwidth_isbase = false;
    mutable bool knameandurlinputdialog_paintengine_isbase = false;
    mutable bool knameandurlinputdialog_event_isbase = false;
    mutable bool knameandurlinputdialog_mousepressevent_isbase = false;
    mutable bool knameandurlinputdialog_mousereleaseevent_isbase = false;
    mutable bool knameandurlinputdialog_mousedoubleclickevent_isbase = false;
    mutable bool knameandurlinputdialog_mousemoveevent_isbase = false;
    mutable bool knameandurlinputdialog_wheelevent_isbase = false;
    mutable bool knameandurlinputdialog_keyreleaseevent_isbase = false;
    mutable bool knameandurlinputdialog_focusinevent_isbase = false;
    mutable bool knameandurlinputdialog_focusoutevent_isbase = false;
    mutable bool knameandurlinputdialog_enterevent_isbase = false;
    mutable bool knameandurlinputdialog_leaveevent_isbase = false;
    mutable bool knameandurlinputdialog_paintevent_isbase = false;
    mutable bool knameandurlinputdialog_moveevent_isbase = false;
    mutable bool knameandurlinputdialog_tabletevent_isbase = false;
    mutable bool knameandurlinputdialog_actionevent_isbase = false;
    mutable bool knameandurlinputdialog_dragenterevent_isbase = false;
    mutable bool knameandurlinputdialog_dragmoveevent_isbase = false;
    mutable bool knameandurlinputdialog_dragleaveevent_isbase = false;
    mutable bool knameandurlinputdialog_dropevent_isbase = false;
    mutable bool knameandurlinputdialog_hideevent_isbase = false;
    mutable bool knameandurlinputdialog_nativeevent_isbase = false;
    mutable bool knameandurlinputdialog_changeevent_isbase = false;
    mutable bool knameandurlinputdialog_metric_isbase = false;
    mutable bool knameandurlinputdialog_initpainter_isbase = false;
    mutable bool knameandurlinputdialog_redirected_isbase = false;
    mutable bool knameandurlinputdialog_sharedpainter_isbase = false;
    mutable bool knameandurlinputdialog_inputmethodevent_isbase = false;
    mutable bool knameandurlinputdialog_inputmethodquery_isbase = false;
    mutable bool knameandurlinputdialog_focusnextprevchild_isbase = false;
    mutable bool knameandurlinputdialog_timerevent_isbase = false;
    mutable bool knameandurlinputdialog_childevent_isbase = false;
    mutable bool knameandurlinputdialog_customevent_isbase = false;
    mutable bool knameandurlinputdialog_connectnotify_isbase = false;
    mutable bool knameandurlinputdialog_disconnectnotify_isbase = false;
    mutable bool knameandurlinputdialog_adjustposition_isbase = false;
    mutable bool knameandurlinputdialog_updatemicrofocus_isbase = false;
    mutable bool knameandurlinputdialog_create_isbase = false;
    mutable bool knameandurlinputdialog_destroy_isbase = false;
    mutable bool knameandurlinputdialog_focusnextchild_isbase = false;
    mutable bool knameandurlinputdialog_focuspreviouschild_isbase = false;
    mutable bool knameandurlinputdialog_sender_isbase = false;
    mutable bool knameandurlinputdialog_sendersignalindex_isbase = false;
    mutable bool knameandurlinputdialog_receivers_isbase = false;
    mutable bool knameandurlinputdialog_issignalconnected_isbase = false;
    mutable bool knameandurlinputdialog_getdecodedmetricf_isbase = false;

  public:
    VirtualKNameAndUrlInputDialog(const QString& nameLabel, const QString& urlLabel, const QUrl& startDir, QWidget* parent) : KNameAndUrlInputDialog(nameLabel, urlLabel, startDir, parent) {};

    ~VirtualKNameAndUrlInputDialog() {
        knameandurlinputdialog_metacall_callback = nullptr;
        knameandurlinputdialog_setvisible_callback = nullptr;
        knameandurlinputdialog_sizehint_callback = nullptr;
        knameandurlinputdialog_minimumsizehint_callback = nullptr;
        knameandurlinputdialog_open_callback = nullptr;
        knameandurlinputdialog_exec_callback = nullptr;
        knameandurlinputdialog_done_callback = nullptr;
        knameandurlinputdialog_accept_callback = nullptr;
        knameandurlinputdialog_reject_callback = nullptr;
        knameandurlinputdialog_keypressevent_callback = nullptr;
        knameandurlinputdialog_closeevent_callback = nullptr;
        knameandurlinputdialog_showevent_callback = nullptr;
        knameandurlinputdialog_resizeevent_callback = nullptr;
        knameandurlinputdialog_contextmenuevent_callback = nullptr;
        knameandurlinputdialog_eventfilter_callback = nullptr;
        knameandurlinputdialog_devtype_callback = nullptr;
        knameandurlinputdialog_heightforwidth_callback = nullptr;
        knameandurlinputdialog_hasheightforwidth_callback = nullptr;
        knameandurlinputdialog_paintengine_callback = nullptr;
        knameandurlinputdialog_event_callback = nullptr;
        knameandurlinputdialog_mousepressevent_callback = nullptr;
        knameandurlinputdialog_mousereleaseevent_callback = nullptr;
        knameandurlinputdialog_mousedoubleclickevent_callback = nullptr;
        knameandurlinputdialog_mousemoveevent_callback = nullptr;
        knameandurlinputdialog_wheelevent_callback = nullptr;
        knameandurlinputdialog_keyreleaseevent_callback = nullptr;
        knameandurlinputdialog_focusinevent_callback = nullptr;
        knameandurlinputdialog_focusoutevent_callback = nullptr;
        knameandurlinputdialog_enterevent_callback = nullptr;
        knameandurlinputdialog_leaveevent_callback = nullptr;
        knameandurlinputdialog_paintevent_callback = nullptr;
        knameandurlinputdialog_moveevent_callback = nullptr;
        knameandurlinputdialog_tabletevent_callback = nullptr;
        knameandurlinputdialog_actionevent_callback = nullptr;
        knameandurlinputdialog_dragenterevent_callback = nullptr;
        knameandurlinputdialog_dragmoveevent_callback = nullptr;
        knameandurlinputdialog_dragleaveevent_callback = nullptr;
        knameandurlinputdialog_dropevent_callback = nullptr;
        knameandurlinputdialog_hideevent_callback = nullptr;
        knameandurlinputdialog_nativeevent_callback = nullptr;
        knameandurlinputdialog_changeevent_callback = nullptr;
        knameandurlinputdialog_metric_callback = nullptr;
        knameandurlinputdialog_initpainter_callback = nullptr;
        knameandurlinputdialog_redirected_callback = nullptr;
        knameandurlinputdialog_sharedpainter_callback = nullptr;
        knameandurlinputdialog_inputmethodevent_callback = nullptr;
        knameandurlinputdialog_inputmethodquery_callback = nullptr;
        knameandurlinputdialog_focusnextprevchild_callback = nullptr;
        knameandurlinputdialog_timerevent_callback = nullptr;
        knameandurlinputdialog_childevent_callback = nullptr;
        knameandurlinputdialog_customevent_callback = nullptr;
        knameandurlinputdialog_connectnotify_callback = nullptr;
        knameandurlinputdialog_disconnectnotify_callback = nullptr;
        knameandurlinputdialog_adjustposition_callback = nullptr;
        knameandurlinputdialog_updatemicrofocus_callback = nullptr;
        knameandurlinputdialog_create_callback = nullptr;
        knameandurlinputdialog_destroy_callback = nullptr;
        knameandurlinputdialog_focusnextchild_callback = nullptr;
        knameandurlinputdialog_focuspreviouschild_callback = nullptr;
        knameandurlinputdialog_sender_callback = nullptr;
        knameandurlinputdialog_sendersignalindex_callback = nullptr;
        knameandurlinputdialog_receivers_callback = nullptr;
        knameandurlinputdialog_issignalconnected_callback = nullptr;
        knameandurlinputdialog_getdecodedmetricf_callback = nullptr;
    }

    // Callback setters
    inline void setKNameAndUrlInputDialog_Metacall_Callback(KNameAndUrlInputDialog_Metacall_Callback cb) { knameandurlinputdialog_metacall_callback = cb; }
    inline void setKNameAndUrlInputDialog_SetVisible_Callback(KNameAndUrlInputDialog_SetVisible_Callback cb) { knameandurlinputdialog_setvisible_callback = cb; }
    inline void setKNameAndUrlInputDialog_SizeHint_Callback(KNameAndUrlInputDialog_SizeHint_Callback cb) { knameandurlinputdialog_sizehint_callback = cb; }
    inline void setKNameAndUrlInputDialog_MinimumSizeHint_Callback(KNameAndUrlInputDialog_MinimumSizeHint_Callback cb) { knameandurlinputdialog_minimumsizehint_callback = cb; }
    inline void setKNameAndUrlInputDialog_Open_Callback(KNameAndUrlInputDialog_Open_Callback cb) { knameandurlinputdialog_open_callback = cb; }
    inline void setKNameAndUrlInputDialog_Exec_Callback(KNameAndUrlInputDialog_Exec_Callback cb) { knameandurlinputdialog_exec_callback = cb; }
    inline void setKNameAndUrlInputDialog_Done_Callback(KNameAndUrlInputDialog_Done_Callback cb) { knameandurlinputdialog_done_callback = cb; }
    inline void setKNameAndUrlInputDialog_Accept_Callback(KNameAndUrlInputDialog_Accept_Callback cb) { knameandurlinputdialog_accept_callback = cb; }
    inline void setKNameAndUrlInputDialog_Reject_Callback(KNameAndUrlInputDialog_Reject_Callback cb) { knameandurlinputdialog_reject_callback = cb; }
    inline void setKNameAndUrlInputDialog_KeyPressEvent_Callback(KNameAndUrlInputDialog_KeyPressEvent_Callback cb) { knameandurlinputdialog_keypressevent_callback = cb; }
    inline void setKNameAndUrlInputDialog_CloseEvent_Callback(KNameAndUrlInputDialog_CloseEvent_Callback cb) { knameandurlinputdialog_closeevent_callback = cb; }
    inline void setKNameAndUrlInputDialog_ShowEvent_Callback(KNameAndUrlInputDialog_ShowEvent_Callback cb) { knameandurlinputdialog_showevent_callback = cb; }
    inline void setKNameAndUrlInputDialog_ResizeEvent_Callback(KNameAndUrlInputDialog_ResizeEvent_Callback cb) { knameandurlinputdialog_resizeevent_callback = cb; }
    inline void setKNameAndUrlInputDialog_ContextMenuEvent_Callback(KNameAndUrlInputDialog_ContextMenuEvent_Callback cb) { knameandurlinputdialog_contextmenuevent_callback = cb; }
    inline void setKNameAndUrlInputDialog_EventFilter_Callback(KNameAndUrlInputDialog_EventFilter_Callback cb) { knameandurlinputdialog_eventfilter_callback = cb; }
    inline void setKNameAndUrlInputDialog_DevType_Callback(KNameAndUrlInputDialog_DevType_Callback cb) { knameandurlinputdialog_devtype_callback = cb; }
    inline void setKNameAndUrlInputDialog_HeightForWidth_Callback(KNameAndUrlInputDialog_HeightForWidth_Callback cb) { knameandurlinputdialog_heightforwidth_callback = cb; }
    inline void setKNameAndUrlInputDialog_HasHeightForWidth_Callback(KNameAndUrlInputDialog_HasHeightForWidth_Callback cb) { knameandurlinputdialog_hasheightforwidth_callback = cb; }
    inline void setKNameAndUrlInputDialog_PaintEngine_Callback(KNameAndUrlInputDialog_PaintEngine_Callback cb) { knameandurlinputdialog_paintengine_callback = cb; }
    inline void setKNameAndUrlInputDialog_Event_Callback(KNameAndUrlInputDialog_Event_Callback cb) { knameandurlinputdialog_event_callback = cb; }
    inline void setKNameAndUrlInputDialog_MousePressEvent_Callback(KNameAndUrlInputDialog_MousePressEvent_Callback cb) { knameandurlinputdialog_mousepressevent_callback = cb; }
    inline void setKNameAndUrlInputDialog_MouseReleaseEvent_Callback(KNameAndUrlInputDialog_MouseReleaseEvent_Callback cb) { knameandurlinputdialog_mousereleaseevent_callback = cb; }
    inline void setKNameAndUrlInputDialog_MouseDoubleClickEvent_Callback(KNameAndUrlInputDialog_MouseDoubleClickEvent_Callback cb) { knameandurlinputdialog_mousedoubleclickevent_callback = cb; }
    inline void setKNameAndUrlInputDialog_MouseMoveEvent_Callback(KNameAndUrlInputDialog_MouseMoveEvent_Callback cb) { knameandurlinputdialog_mousemoveevent_callback = cb; }
    inline void setKNameAndUrlInputDialog_WheelEvent_Callback(KNameAndUrlInputDialog_WheelEvent_Callback cb) { knameandurlinputdialog_wheelevent_callback = cb; }
    inline void setKNameAndUrlInputDialog_KeyReleaseEvent_Callback(KNameAndUrlInputDialog_KeyReleaseEvent_Callback cb) { knameandurlinputdialog_keyreleaseevent_callback = cb; }
    inline void setKNameAndUrlInputDialog_FocusInEvent_Callback(KNameAndUrlInputDialog_FocusInEvent_Callback cb) { knameandurlinputdialog_focusinevent_callback = cb; }
    inline void setKNameAndUrlInputDialog_FocusOutEvent_Callback(KNameAndUrlInputDialog_FocusOutEvent_Callback cb) { knameandurlinputdialog_focusoutevent_callback = cb; }
    inline void setKNameAndUrlInputDialog_EnterEvent_Callback(KNameAndUrlInputDialog_EnterEvent_Callback cb) { knameandurlinputdialog_enterevent_callback = cb; }
    inline void setKNameAndUrlInputDialog_LeaveEvent_Callback(KNameAndUrlInputDialog_LeaveEvent_Callback cb) { knameandurlinputdialog_leaveevent_callback = cb; }
    inline void setKNameAndUrlInputDialog_PaintEvent_Callback(KNameAndUrlInputDialog_PaintEvent_Callback cb) { knameandurlinputdialog_paintevent_callback = cb; }
    inline void setKNameAndUrlInputDialog_MoveEvent_Callback(KNameAndUrlInputDialog_MoveEvent_Callback cb) { knameandurlinputdialog_moveevent_callback = cb; }
    inline void setKNameAndUrlInputDialog_TabletEvent_Callback(KNameAndUrlInputDialog_TabletEvent_Callback cb) { knameandurlinputdialog_tabletevent_callback = cb; }
    inline void setKNameAndUrlInputDialog_ActionEvent_Callback(KNameAndUrlInputDialog_ActionEvent_Callback cb) { knameandurlinputdialog_actionevent_callback = cb; }
    inline void setKNameAndUrlInputDialog_DragEnterEvent_Callback(KNameAndUrlInputDialog_DragEnterEvent_Callback cb) { knameandurlinputdialog_dragenterevent_callback = cb; }
    inline void setKNameAndUrlInputDialog_DragMoveEvent_Callback(KNameAndUrlInputDialog_DragMoveEvent_Callback cb) { knameandurlinputdialog_dragmoveevent_callback = cb; }
    inline void setKNameAndUrlInputDialog_DragLeaveEvent_Callback(KNameAndUrlInputDialog_DragLeaveEvent_Callback cb) { knameandurlinputdialog_dragleaveevent_callback = cb; }
    inline void setKNameAndUrlInputDialog_DropEvent_Callback(KNameAndUrlInputDialog_DropEvent_Callback cb) { knameandurlinputdialog_dropevent_callback = cb; }
    inline void setKNameAndUrlInputDialog_HideEvent_Callback(KNameAndUrlInputDialog_HideEvent_Callback cb) { knameandurlinputdialog_hideevent_callback = cb; }
    inline void setKNameAndUrlInputDialog_NativeEvent_Callback(KNameAndUrlInputDialog_NativeEvent_Callback cb) { knameandurlinputdialog_nativeevent_callback = cb; }
    inline void setKNameAndUrlInputDialog_ChangeEvent_Callback(KNameAndUrlInputDialog_ChangeEvent_Callback cb) { knameandurlinputdialog_changeevent_callback = cb; }
    inline void setKNameAndUrlInputDialog_Metric_Callback(KNameAndUrlInputDialog_Metric_Callback cb) { knameandurlinputdialog_metric_callback = cb; }
    inline void setKNameAndUrlInputDialog_InitPainter_Callback(KNameAndUrlInputDialog_InitPainter_Callback cb) { knameandurlinputdialog_initpainter_callback = cb; }
    inline void setKNameAndUrlInputDialog_Redirected_Callback(KNameAndUrlInputDialog_Redirected_Callback cb) { knameandurlinputdialog_redirected_callback = cb; }
    inline void setKNameAndUrlInputDialog_SharedPainter_Callback(KNameAndUrlInputDialog_SharedPainter_Callback cb) { knameandurlinputdialog_sharedpainter_callback = cb; }
    inline void setKNameAndUrlInputDialog_InputMethodEvent_Callback(KNameAndUrlInputDialog_InputMethodEvent_Callback cb) { knameandurlinputdialog_inputmethodevent_callback = cb; }
    inline void setKNameAndUrlInputDialog_InputMethodQuery_Callback(KNameAndUrlInputDialog_InputMethodQuery_Callback cb) { knameandurlinputdialog_inputmethodquery_callback = cb; }
    inline void setKNameAndUrlInputDialog_FocusNextPrevChild_Callback(KNameAndUrlInputDialog_FocusNextPrevChild_Callback cb) { knameandurlinputdialog_focusnextprevchild_callback = cb; }
    inline void setKNameAndUrlInputDialog_TimerEvent_Callback(KNameAndUrlInputDialog_TimerEvent_Callback cb) { knameandurlinputdialog_timerevent_callback = cb; }
    inline void setKNameAndUrlInputDialog_ChildEvent_Callback(KNameAndUrlInputDialog_ChildEvent_Callback cb) { knameandurlinputdialog_childevent_callback = cb; }
    inline void setKNameAndUrlInputDialog_CustomEvent_Callback(KNameAndUrlInputDialog_CustomEvent_Callback cb) { knameandurlinputdialog_customevent_callback = cb; }
    inline void setKNameAndUrlInputDialog_ConnectNotify_Callback(KNameAndUrlInputDialog_ConnectNotify_Callback cb) { knameandurlinputdialog_connectnotify_callback = cb; }
    inline void setKNameAndUrlInputDialog_DisconnectNotify_Callback(KNameAndUrlInputDialog_DisconnectNotify_Callback cb) { knameandurlinputdialog_disconnectnotify_callback = cb; }
    inline void setKNameAndUrlInputDialog_AdjustPosition_Callback(KNameAndUrlInputDialog_AdjustPosition_Callback cb) { knameandurlinputdialog_adjustposition_callback = cb; }
    inline void setKNameAndUrlInputDialog_UpdateMicroFocus_Callback(KNameAndUrlInputDialog_UpdateMicroFocus_Callback cb) { knameandurlinputdialog_updatemicrofocus_callback = cb; }
    inline void setKNameAndUrlInputDialog_Create_Callback(KNameAndUrlInputDialog_Create_Callback cb) { knameandurlinputdialog_create_callback = cb; }
    inline void setKNameAndUrlInputDialog_Destroy_Callback(KNameAndUrlInputDialog_Destroy_Callback cb) { knameandurlinputdialog_destroy_callback = cb; }
    inline void setKNameAndUrlInputDialog_FocusNextChild_Callback(KNameAndUrlInputDialog_FocusNextChild_Callback cb) { knameandurlinputdialog_focusnextchild_callback = cb; }
    inline void setKNameAndUrlInputDialog_FocusPreviousChild_Callback(KNameAndUrlInputDialog_FocusPreviousChild_Callback cb) { knameandurlinputdialog_focuspreviouschild_callback = cb; }
    inline void setKNameAndUrlInputDialog_Sender_Callback(KNameAndUrlInputDialog_Sender_Callback cb) { knameandurlinputdialog_sender_callback = cb; }
    inline void setKNameAndUrlInputDialog_SenderSignalIndex_Callback(KNameAndUrlInputDialog_SenderSignalIndex_Callback cb) { knameandurlinputdialog_sendersignalindex_callback = cb; }
    inline void setKNameAndUrlInputDialog_Receivers_Callback(KNameAndUrlInputDialog_Receivers_Callback cb) { knameandurlinputdialog_receivers_callback = cb; }
    inline void setKNameAndUrlInputDialog_IsSignalConnected_Callback(KNameAndUrlInputDialog_IsSignalConnected_Callback cb) { knameandurlinputdialog_issignalconnected_callback = cb; }
    inline void setKNameAndUrlInputDialog_GetDecodedMetricF_Callback(KNameAndUrlInputDialog_GetDecodedMetricF_Callback cb) { knameandurlinputdialog_getdecodedmetricf_callback = cb; }

    // Base flag setters
    inline void setKNameAndUrlInputDialog_Metacall_IsBase(bool value) const { knameandurlinputdialog_metacall_isbase = value; }
    inline void setKNameAndUrlInputDialog_SetVisible_IsBase(bool value) const { knameandurlinputdialog_setvisible_isbase = value; }
    inline void setKNameAndUrlInputDialog_SizeHint_IsBase(bool value) const { knameandurlinputdialog_sizehint_isbase = value; }
    inline void setKNameAndUrlInputDialog_MinimumSizeHint_IsBase(bool value) const { knameandurlinputdialog_minimumsizehint_isbase = value; }
    inline void setKNameAndUrlInputDialog_Open_IsBase(bool value) const { knameandurlinputdialog_open_isbase = value; }
    inline void setKNameAndUrlInputDialog_Exec_IsBase(bool value) const { knameandurlinputdialog_exec_isbase = value; }
    inline void setKNameAndUrlInputDialog_Done_IsBase(bool value) const { knameandurlinputdialog_done_isbase = value; }
    inline void setKNameAndUrlInputDialog_Accept_IsBase(bool value) const { knameandurlinputdialog_accept_isbase = value; }
    inline void setKNameAndUrlInputDialog_Reject_IsBase(bool value) const { knameandurlinputdialog_reject_isbase = value; }
    inline void setKNameAndUrlInputDialog_KeyPressEvent_IsBase(bool value) const { knameandurlinputdialog_keypressevent_isbase = value; }
    inline void setKNameAndUrlInputDialog_CloseEvent_IsBase(bool value) const { knameandurlinputdialog_closeevent_isbase = value; }
    inline void setKNameAndUrlInputDialog_ShowEvent_IsBase(bool value) const { knameandurlinputdialog_showevent_isbase = value; }
    inline void setKNameAndUrlInputDialog_ResizeEvent_IsBase(bool value) const { knameandurlinputdialog_resizeevent_isbase = value; }
    inline void setKNameAndUrlInputDialog_ContextMenuEvent_IsBase(bool value) const { knameandurlinputdialog_contextmenuevent_isbase = value; }
    inline void setKNameAndUrlInputDialog_EventFilter_IsBase(bool value) const { knameandurlinputdialog_eventfilter_isbase = value; }
    inline void setKNameAndUrlInputDialog_DevType_IsBase(bool value) const { knameandurlinputdialog_devtype_isbase = value; }
    inline void setKNameAndUrlInputDialog_HeightForWidth_IsBase(bool value) const { knameandurlinputdialog_heightforwidth_isbase = value; }
    inline void setKNameAndUrlInputDialog_HasHeightForWidth_IsBase(bool value) const { knameandurlinputdialog_hasheightforwidth_isbase = value; }
    inline void setKNameAndUrlInputDialog_PaintEngine_IsBase(bool value) const { knameandurlinputdialog_paintengine_isbase = value; }
    inline void setKNameAndUrlInputDialog_Event_IsBase(bool value) const { knameandurlinputdialog_event_isbase = value; }
    inline void setKNameAndUrlInputDialog_MousePressEvent_IsBase(bool value) const { knameandurlinputdialog_mousepressevent_isbase = value; }
    inline void setKNameAndUrlInputDialog_MouseReleaseEvent_IsBase(bool value) const { knameandurlinputdialog_mousereleaseevent_isbase = value; }
    inline void setKNameAndUrlInputDialog_MouseDoubleClickEvent_IsBase(bool value) const { knameandurlinputdialog_mousedoubleclickevent_isbase = value; }
    inline void setKNameAndUrlInputDialog_MouseMoveEvent_IsBase(bool value) const { knameandurlinputdialog_mousemoveevent_isbase = value; }
    inline void setKNameAndUrlInputDialog_WheelEvent_IsBase(bool value) const { knameandurlinputdialog_wheelevent_isbase = value; }
    inline void setKNameAndUrlInputDialog_KeyReleaseEvent_IsBase(bool value) const { knameandurlinputdialog_keyreleaseevent_isbase = value; }
    inline void setKNameAndUrlInputDialog_FocusInEvent_IsBase(bool value) const { knameandurlinputdialog_focusinevent_isbase = value; }
    inline void setKNameAndUrlInputDialog_FocusOutEvent_IsBase(bool value) const { knameandurlinputdialog_focusoutevent_isbase = value; }
    inline void setKNameAndUrlInputDialog_EnterEvent_IsBase(bool value) const { knameandurlinputdialog_enterevent_isbase = value; }
    inline void setKNameAndUrlInputDialog_LeaveEvent_IsBase(bool value) const { knameandurlinputdialog_leaveevent_isbase = value; }
    inline void setKNameAndUrlInputDialog_PaintEvent_IsBase(bool value) const { knameandurlinputdialog_paintevent_isbase = value; }
    inline void setKNameAndUrlInputDialog_MoveEvent_IsBase(bool value) const { knameandurlinputdialog_moveevent_isbase = value; }
    inline void setKNameAndUrlInputDialog_TabletEvent_IsBase(bool value) const { knameandurlinputdialog_tabletevent_isbase = value; }
    inline void setKNameAndUrlInputDialog_ActionEvent_IsBase(bool value) const { knameandurlinputdialog_actionevent_isbase = value; }
    inline void setKNameAndUrlInputDialog_DragEnterEvent_IsBase(bool value) const { knameandurlinputdialog_dragenterevent_isbase = value; }
    inline void setKNameAndUrlInputDialog_DragMoveEvent_IsBase(bool value) const { knameandurlinputdialog_dragmoveevent_isbase = value; }
    inline void setKNameAndUrlInputDialog_DragLeaveEvent_IsBase(bool value) const { knameandurlinputdialog_dragleaveevent_isbase = value; }
    inline void setKNameAndUrlInputDialog_DropEvent_IsBase(bool value) const { knameandurlinputdialog_dropevent_isbase = value; }
    inline void setKNameAndUrlInputDialog_HideEvent_IsBase(bool value) const { knameandurlinputdialog_hideevent_isbase = value; }
    inline void setKNameAndUrlInputDialog_NativeEvent_IsBase(bool value) const { knameandurlinputdialog_nativeevent_isbase = value; }
    inline void setKNameAndUrlInputDialog_ChangeEvent_IsBase(bool value) const { knameandurlinputdialog_changeevent_isbase = value; }
    inline void setKNameAndUrlInputDialog_Metric_IsBase(bool value) const { knameandurlinputdialog_metric_isbase = value; }
    inline void setKNameAndUrlInputDialog_InitPainter_IsBase(bool value) const { knameandurlinputdialog_initpainter_isbase = value; }
    inline void setKNameAndUrlInputDialog_Redirected_IsBase(bool value) const { knameandurlinputdialog_redirected_isbase = value; }
    inline void setKNameAndUrlInputDialog_SharedPainter_IsBase(bool value) const { knameandurlinputdialog_sharedpainter_isbase = value; }
    inline void setKNameAndUrlInputDialog_InputMethodEvent_IsBase(bool value) const { knameandurlinputdialog_inputmethodevent_isbase = value; }
    inline void setKNameAndUrlInputDialog_InputMethodQuery_IsBase(bool value) const { knameandurlinputdialog_inputmethodquery_isbase = value; }
    inline void setKNameAndUrlInputDialog_FocusNextPrevChild_IsBase(bool value) const { knameandurlinputdialog_focusnextprevchild_isbase = value; }
    inline void setKNameAndUrlInputDialog_TimerEvent_IsBase(bool value) const { knameandurlinputdialog_timerevent_isbase = value; }
    inline void setKNameAndUrlInputDialog_ChildEvent_IsBase(bool value) const { knameandurlinputdialog_childevent_isbase = value; }
    inline void setKNameAndUrlInputDialog_CustomEvent_IsBase(bool value) const { knameandurlinputdialog_customevent_isbase = value; }
    inline void setKNameAndUrlInputDialog_ConnectNotify_IsBase(bool value) const { knameandurlinputdialog_connectnotify_isbase = value; }
    inline void setKNameAndUrlInputDialog_DisconnectNotify_IsBase(bool value) const { knameandurlinputdialog_disconnectnotify_isbase = value; }
    inline void setKNameAndUrlInputDialog_AdjustPosition_IsBase(bool value) const { knameandurlinputdialog_adjustposition_isbase = value; }
    inline void setKNameAndUrlInputDialog_UpdateMicroFocus_IsBase(bool value) const { knameandurlinputdialog_updatemicrofocus_isbase = value; }
    inline void setKNameAndUrlInputDialog_Create_IsBase(bool value) const { knameandurlinputdialog_create_isbase = value; }
    inline void setKNameAndUrlInputDialog_Destroy_IsBase(bool value) const { knameandurlinputdialog_destroy_isbase = value; }
    inline void setKNameAndUrlInputDialog_FocusNextChild_IsBase(bool value) const { knameandurlinputdialog_focusnextchild_isbase = value; }
    inline void setKNameAndUrlInputDialog_FocusPreviousChild_IsBase(bool value) const { knameandurlinputdialog_focuspreviouschild_isbase = value; }
    inline void setKNameAndUrlInputDialog_Sender_IsBase(bool value) const { knameandurlinputdialog_sender_isbase = value; }
    inline void setKNameAndUrlInputDialog_SenderSignalIndex_IsBase(bool value) const { knameandurlinputdialog_sendersignalindex_isbase = value; }
    inline void setKNameAndUrlInputDialog_Receivers_IsBase(bool value) const { knameandurlinputdialog_receivers_isbase = value; }
    inline void setKNameAndUrlInputDialog_IsSignalConnected_IsBase(bool value) const { knameandurlinputdialog_issignalconnected_isbase = value; }
    inline void setKNameAndUrlInputDialog_GetDecodedMetricF_IsBase(bool value) const { knameandurlinputdialog_getdecodedmetricf_isbase = value; }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (knameandurlinputdialog_metacall_isbase) {
            knameandurlinputdialog_metacall_isbase = false;
            return KNameAndUrlInputDialog::qt_metacall(param1, param2, param3);
        } else if (knameandurlinputdialog_metacall_callback != nullptr) {
            int cbval1 = static_cast<int>(param1);
            int cbval2 = param2;
            void** cbval3 = param3;

            int callback_ret = knameandurlinputdialog_metacall_callback(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        } else {
            return KNameAndUrlInputDialog::qt_metacall(param1, param2, param3);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void setVisible(bool visible) override {
        if (knameandurlinputdialog_setvisible_isbase) {
            knameandurlinputdialog_setvisible_isbase = false;
            KNameAndUrlInputDialog::setVisible(visible);
        } else if (knameandurlinputdialog_setvisible_callback != nullptr) {
            bool cbval1 = visible;

            knameandurlinputdialog_setvisible_callback(this, cbval1);
        } else {
            KNameAndUrlInputDialog::setVisible(visible);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QSize sizeHint() const override {
        if (knameandurlinputdialog_sizehint_isbase) {
            knameandurlinputdialog_sizehint_isbase = false;
            return KNameAndUrlInputDialog::sizeHint();
        } else if (knameandurlinputdialog_sizehint_callback != nullptr) {
            QSize* callback_ret = knameandurlinputdialog_sizehint_callback();
            return *callback_ret;
        } else {
            return KNameAndUrlInputDialog::sizeHint();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QSize minimumSizeHint() const override {
        if (knameandurlinputdialog_minimumsizehint_isbase) {
            knameandurlinputdialog_minimumsizehint_isbase = false;
            return KNameAndUrlInputDialog::minimumSizeHint();
        } else if (knameandurlinputdialog_minimumsizehint_callback != nullptr) {
            QSize* callback_ret = knameandurlinputdialog_minimumsizehint_callback();
            return *callback_ret;
        } else {
            return KNameAndUrlInputDialog::minimumSizeHint();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void open() override {
        if (knameandurlinputdialog_open_isbase) {
            knameandurlinputdialog_open_isbase = false;
            KNameAndUrlInputDialog::open();
        } else if (knameandurlinputdialog_open_callback != nullptr) {
            knameandurlinputdialog_open_callback();
        } else {
            KNameAndUrlInputDialog::open();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual int exec() override {
        if (knameandurlinputdialog_exec_isbase) {
            knameandurlinputdialog_exec_isbase = false;
            return KNameAndUrlInputDialog::exec();
        } else if (knameandurlinputdialog_exec_callback != nullptr) {
            int callback_ret = knameandurlinputdialog_exec_callback();
            return static_cast<int>(callback_ret);
        } else {
            return KNameAndUrlInputDialog::exec();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void done(int param1) override {
        if (knameandurlinputdialog_done_isbase) {
            knameandurlinputdialog_done_isbase = false;
            KNameAndUrlInputDialog::done(param1);
        } else if (knameandurlinputdialog_done_callback != nullptr) {
            int cbval1 = param1;

            knameandurlinputdialog_done_callback(this, cbval1);
        } else {
            KNameAndUrlInputDialog::done(param1);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void accept() override {
        if (knameandurlinputdialog_accept_isbase) {
            knameandurlinputdialog_accept_isbase = false;
            KNameAndUrlInputDialog::accept();
        } else if (knameandurlinputdialog_accept_callback != nullptr) {
            knameandurlinputdialog_accept_callback();
        } else {
            KNameAndUrlInputDialog::accept();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void reject() override {
        if (knameandurlinputdialog_reject_isbase) {
            knameandurlinputdialog_reject_isbase = false;
            KNameAndUrlInputDialog::reject();
        } else if (knameandurlinputdialog_reject_callback != nullptr) {
            knameandurlinputdialog_reject_callback();
        } else {
            KNameAndUrlInputDialog::reject();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void keyPressEvent(QKeyEvent* param1) override {
        if (knameandurlinputdialog_keypressevent_isbase) {
            knameandurlinputdialog_keypressevent_isbase = false;
            KNameAndUrlInputDialog::keyPressEvent(param1);
        } else if (knameandurlinputdialog_keypressevent_callback != nullptr) {
            QKeyEvent* cbval1 = param1;

            knameandurlinputdialog_keypressevent_callback(this, cbval1);
        } else {
            KNameAndUrlInputDialog::keyPressEvent(param1);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void closeEvent(QCloseEvent* param1) override {
        if (knameandurlinputdialog_closeevent_isbase) {
            knameandurlinputdialog_closeevent_isbase = false;
            KNameAndUrlInputDialog::closeEvent(param1);
        } else if (knameandurlinputdialog_closeevent_callback != nullptr) {
            QCloseEvent* cbval1 = param1;

            knameandurlinputdialog_closeevent_callback(this, cbval1);
        } else {
            KNameAndUrlInputDialog::closeEvent(param1);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void showEvent(QShowEvent* param1) override {
        if (knameandurlinputdialog_showevent_isbase) {
            knameandurlinputdialog_showevent_isbase = false;
            KNameAndUrlInputDialog::showEvent(param1);
        } else if (knameandurlinputdialog_showevent_callback != nullptr) {
            QShowEvent* cbval1 = param1;

            knameandurlinputdialog_showevent_callback(this, cbval1);
        } else {
            KNameAndUrlInputDialog::showEvent(param1);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void resizeEvent(QResizeEvent* param1) override {
        if (knameandurlinputdialog_resizeevent_isbase) {
            knameandurlinputdialog_resizeevent_isbase = false;
            KNameAndUrlInputDialog::resizeEvent(param1);
        } else if (knameandurlinputdialog_resizeevent_callback != nullptr) {
            QResizeEvent* cbval1 = param1;

            knameandurlinputdialog_resizeevent_callback(this, cbval1);
        } else {
            KNameAndUrlInputDialog::resizeEvent(param1);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void contextMenuEvent(QContextMenuEvent* param1) override {
        if (knameandurlinputdialog_contextmenuevent_isbase) {
            knameandurlinputdialog_contextmenuevent_isbase = false;
            KNameAndUrlInputDialog::contextMenuEvent(param1);
        } else if (knameandurlinputdialog_contextmenuevent_callback != nullptr) {
            QContextMenuEvent* cbval1 = param1;

            knameandurlinputdialog_contextmenuevent_callback(this, cbval1);
        } else {
            KNameAndUrlInputDialog::contextMenuEvent(param1);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* param1, QEvent* param2) override {
        if (knameandurlinputdialog_eventfilter_isbase) {
            knameandurlinputdialog_eventfilter_isbase = false;
            return KNameAndUrlInputDialog::eventFilter(param1, param2);
        } else if (knameandurlinputdialog_eventfilter_callback != nullptr) {
            QObject* cbval1 = param1;
            QEvent* cbval2 = param2;

            bool callback_ret = knameandurlinputdialog_eventfilter_callback(this, cbval1, cbval2);
            return callback_ret;
        } else {
            return KNameAndUrlInputDialog::eventFilter(param1, param2);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual int devType() const override {
        if (knameandurlinputdialog_devtype_isbase) {
            knameandurlinputdialog_devtype_isbase = false;
            return KNameAndUrlInputDialog::devType();
        } else if (knameandurlinputdialog_devtype_callback != nullptr) {
            int callback_ret = knameandurlinputdialog_devtype_callback();
            return static_cast<int>(callback_ret);
        } else {
            return KNameAndUrlInputDialog::devType();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual int heightForWidth(int param1) const override {
        if (knameandurlinputdialog_heightforwidth_isbase) {
            knameandurlinputdialog_heightforwidth_isbase = false;
            return KNameAndUrlInputDialog::heightForWidth(param1);
        } else if (knameandurlinputdialog_heightforwidth_callback != nullptr) {
            int cbval1 = param1;

            int callback_ret = knameandurlinputdialog_heightforwidth_callback(this, cbval1);
            return static_cast<int>(callback_ret);
        } else {
            return KNameAndUrlInputDialog::heightForWidth(param1);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool hasHeightForWidth() const override {
        if (knameandurlinputdialog_hasheightforwidth_isbase) {
            knameandurlinputdialog_hasheightforwidth_isbase = false;
            return KNameAndUrlInputDialog::hasHeightForWidth();
        } else if (knameandurlinputdialog_hasheightforwidth_callback != nullptr) {
            bool callback_ret = knameandurlinputdialog_hasheightforwidth_callback();
            return callback_ret;
        } else {
            return KNameAndUrlInputDialog::hasHeightForWidth();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QPaintEngine* paintEngine() const override {
        if (knameandurlinputdialog_paintengine_isbase) {
            knameandurlinputdialog_paintengine_isbase = false;
            return KNameAndUrlInputDialog::paintEngine();
        } else if (knameandurlinputdialog_paintengine_callback != nullptr) {
            QPaintEngine* callback_ret = knameandurlinputdialog_paintengine_callback();
            return callback_ret;
        } else {
            return KNameAndUrlInputDialog::paintEngine();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* event) override {
        if (knameandurlinputdialog_event_isbase) {
            knameandurlinputdialog_event_isbase = false;
            return KNameAndUrlInputDialog::event(event);
        } else if (knameandurlinputdialog_event_callback != nullptr) {
            QEvent* cbval1 = event;

            bool callback_ret = knameandurlinputdialog_event_callback(this, cbval1);
            return callback_ret;
        } else {
            return KNameAndUrlInputDialog::event(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void mousePressEvent(QMouseEvent* event) override {
        if (knameandurlinputdialog_mousepressevent_isbase) {
            knameandurlinputdialog_mousepressevent_isbase = false;
            KNameAndUrlInputDialog::mousePressEvent(event);
        } else if (knameandurlinputdialog_mousepressevent_callback != nullptr) {
            QMouseEvent* cbval1 = event;

            knameandurlinputdialog_mousepressevent_callback(this, cbval1);
        } else {
            KNameAndUrlInputDialog::mousePressEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseReleaseEvent(QMouseEvent* event) override {
        if (knameandurlinputdialog_mousereleaseevent_isbase) {
            knameandurlinputdialog_mousereleaseevent_isbase = false;
            KNameAndUrlInputDialog::mouseReleaseEvent(event);
        } else if (knameandurlinputdialog_mousereleaseevent_callback != nullptr) {
            QMouseEvent* cbval1 = event;

            knameandurlinputdialog_mousereleaseevent_callback(this, cbval1);
        } else {
            KNameAndUrlInputDialog::mouseReleaseEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseDoubleClickEvent(QMouseEvent* event) override {
        if (knameandurlinputdialog_mousedoubleclickevent_isbase) {
            knameandurlinputdialog_mousedoubleclickevent_isbase = false;
            KNameAndUrlInputDialog::mouseDoubleClickEvent(event);
        } else if (knameandurlinputdialog_mousedoubleclickevent_callback != nullptr) {
            QMouseEvent* cbval1 = event;

            knameandurlinputdialog_mousedoubleclickevent_callback(this, cbval1);
        } else {
            KNameAndUrlInputDialog::mouseDoubleClickEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseMoveEvent(QMouseEvent* event) override {
        if (knameandurlinputdialog_mousemoveevent_isbase) {
            knameandurlinputdialog_mousemoveevent_isbase = false;
            KNameAndUrlInputDialog::mouseMoveEvent(event);
        } else if (knameandurlinputdialog_mousemoveevent_callback != nullptr) {
            QMouseEvent* cbval1 = event;

            knameandurlinputdialog_mousemoveevent_callback(this, cbval1);
        } else {
            KNameAndUrlInputDialog::mouseMoveEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void wheelEvent(QWheelEvent* event) override {
        if (knameandurlinputdialog_wheelevent_isbase) {
            knameandurlinputdialog_wheelevent_isbase = false;
            KNameAndUrlInputDialog::wheelEvent(event);
        } else if (knameandurlinputdialog_wheelevent_callback != nullptr) {
            QWheelEvent* cbval1 = event;

            knameandurlinputdialog_wheelevent_callback(this, cbval1);
        } else {
            KNameAndUrlInputDialog::wheelEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void keyReleaseEvent(QKeyEvent* event) override {
        if (knameandurlinputdialog_keyreleaseevent_isbase) {
            knameandurlinputdialog_keyreleaseevent_isbase = false;
            KNameAndUrlInputDialog::keyReleaseEvent(event);
        } else if (knameandurlinputdialog_keyreleaseevent_callback != nullptr) {
            QKeyEvent* cbval1 = event;

            knameandurlinputdialog_keyreleaseevent_callback(this, cbval1);
        } else {
            KNameAndUrlInputDialog::keyReleaseEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void focusInEvent(QFocusEvent* event) override {
        if (knameandurlinputdialog_focusinevent_isbase) {
            knameandurlinputdialog_focusinevent_isbase = false;
            KNameAndUrlInputDialog::focusInEvent(event);
        } else if (knameandurlinputdialog_focusinevent_callback != nullptr) {
            QFocusEvent* cbval1 = event;

            knameandurlinputdialog_focusinevent_callback(this, cbval1);
        } else {
            KNameAndUrlInputDialog::focusInEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void focusOutEvent(QFocusEvent* event) override {
        if (knameandurlinputdialog_focusoutevent_isbase) {
            knameandurlinputdialog_focusoutevent_isbase = false;
            KNameAndUrlInputDialog::focusOutEvent(event);
        } else if (knameandurlinputdialog_focusoutevent_callback != nullptr) {
            QFocusEvent* cbval1 = event;

            knameandurlinputdialog_focusoutevent_callback(this, cbval1);
        } else {
            KNameAndUrlInputDialog::focusOutEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void enterEvent(QEnterEvent* event) override {
        if (knameandurlinputdialog_enterevent_isbase) {
            knameandurlinputdialog_enterevent_isbase = false;
            KNameAndUrlInputDialog::enterEvent(event);
        } else if (knameandurlinputdialog_enterevent_callback != nullptr) {
            QEnterEvent* cbval1 = event;

            knameandurlinputdialog_enterevent_callback(this, cbval1);
        } else {
            KNameAndUrlInputDialog::enterEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void leaveEvent(QEvent* event) override {
        if (knameandurlinputdialog_leaveevent_isbase) {
            knameandurlinputdialog_leaveevent_isbase = false;
            KNameAndUrlInputDialog::leaveEvent(event);
        } else if (knameandurlinputdialog_leaveevent_callback != nullptr) {
            QEvent* cbval1 = event;

            knameandurlinputdialog_leaveevent_callback(this, cbval1);
        } else {
            KNameAndUrlInputDialog::leaveEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void paintEvent(QPaintEvent* event) override {
        if (knameandurlinputdialog_paintevent_isbase) {
            knameandurlinputdialog_paintevent_isbase = false;
            KNameAndUrlInputDialog::paintEvent(event);
        } else if (knameandurlinputdialog_paintevent_callback != nullptr) {
            QPaintEvent* cbval1 = event;

            knameandurlinputdialog_paintevent_callback(this, cbval1);
        } else {
            KNameAndUrlInputDialog::paintEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void moveEvent(QMoveEvent* event) override {
        if (knameandurlinputdialog_moveevent_isbase) {
            knameandurlinputdialog_moveevent_isbase = false;
            KNameAndUrlInputDialog::moveEvent(event);
        } else if (knameandurlinputdialog_moveevent_callback != nullptr) {
            QMoveEvent* cbval1 = event;

            knameandurlinputdialog_moveevent_callback(this, cbval1);
        } else {
            KNameAndUrlInputDialog::moveEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void tabletEvent(QTabletEvent* event) override {
        if (knameandurlinputdialog_tabletevent_isbase) {
            knameandurlinputdialog_tabletevent_isbase = false;
            KNameAndUrlInputDialog::tabletEvent(event);
        } else if (knameandurlinputdialog_tabletevent_callback != nullptr) {
            QTabletEvent* cbval1 = event;

            knameandurlinputdialog_tabletevent_callback(this, cbval1);
        } else {
            KNameAndUrlInputDialog::tabletEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void actionEvent(QActionEvent* event) override {
        if (knameandurlinputdialog_actionevent_isbase) {
            knameandurlinputdialog_actionevent_isbase = false;
            KNameAndUrlInputDialog::actionEvent(event);
        } else if (knameandurlinputdialog_actionevent_callback != nullptr) {
            QActionEvent* cbval1 = event;

            knameandurlinputdialog_actionevent_callback(this, cbval1);
        } else {
            KNameAndUrlInputDialog::actionEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragEnterEvent(QDragEnterEvent* event) override {
        if (knameandurlinputdialog_dragenterevent_isbase) {
            knameandurlinputdialog_dragenterevent_isbase = false;
            KNameAndUrlInputDialog::dragEnterEvent(event);
        } else if (knameandurlinputdialog_dragenterevent_callback != nullptr) {
            QDragEnterEvent* cbval1 = event;

            knameandurlinputdialog_dragenterevent_callback(this, cbval1);
        } else {
            KNameAndUrlInputDialog::dragEnterEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragMoveEvent(QDragMoveEvent* event) override {
        if (knameandurlinputdialog_dragmoveevent_isbase) {
            knameandurlinputdialog_dragmoveevent_isbase = false;
            KNameAndUrlInputDialog::dragMoveEvent(event);
        } else if (knameandurlinputdialog_dragmoveevent_callback != nullptr) {
            QDragMoveEvent* cbval1 = event;

            knameandurlinputdialog_dragmoveevent_callback(this, cbval1);
        } else {
            KNameAndUrlInputDialog::dragMoveEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragLeaveEvent(QDragLeaveEvent* event) override {
        if (knameandurlinputdialog_dragleaveevent_isbase) {
            knameandurlinputdialog_dragleaveevent_isbase = false;
            KNameAndUrlInputDialog::dragLeaveEvent(event);
        } else if (knameandurlinputdialog_dragleaveevent_callback != nullptr) {
            QDragLeaveEvent* cbval1 = event;

            knameandurlinputdialog_dragleaveevent_callback(this, cbval1);
        } else {
            KNameAndUrlInputDialog::dragLeaveEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void dropEvent(QDropEvent* event) override {
        if (knameandurlinputdialog_dropevent_isbase) {
            knameandurlinputdialog_dropevent_isbase = false;
            KNameAndUrlInputDialog::dropEvent(event);
        } else if (knameandurlinputdialog_dropevent_callback != nullptr) {
            QDropEvent* cbval1 = event;

            knameandurlinputdialog_dropevent_callback(this, cbval1);
        } else {
            KNameAndUrlInputDialog::dropEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void hideEvent(QHideEvent* event) override {
        if (knameandurlinputdialog_hideevent_isbase) {
            knameandurlinputdialog_hideevent_isbase = false;
            KNameAndUrlInputDialog::hideEvent(event);
        } else if (knameandurlinputdialog_hideevent_callback != nullptr) {
            QHideEvent* cbval1 = event;

            knameandurlinputdialog_hideevent_callback(this, cbval1);
        } else {
            KNameAndUrlInputDialog::hideEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool nativeEvent(const QByteArray& eventType, void* message, qintptr* result) override {
        if (knameandurlinputdialog_nativeevent_isbase) {
            knameandurlinputdialog_nativeevent_isbase = false;
            return KNameAndUrlInputDialog::nativeEvent(eventType, message, result);
        } else if (knameandurlinputdialog_nativeevent_callback != nullptr) {
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

            bool callback_ret = knameandurlinputdialog_nativeevent_callback(this, cbval1, cbval2, cbval3);
            return callback_ret;
        } else {
            return KNameAndUrlInputDialog::nativeEvent(eventType, message, result);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void changeEvent(QEvent* param1) override {
        if (knameandurlinputdialog_changeevent_isbase) {
            knameandurlinputdialog_changeevent_isbase = false;
            KNameAndUrlInputDialog::changeEvent(param1);
        } else if (knameandurlinputdialog_changeevent_callback != nullptr) {
            QEvent* cbval1 = param1;

            knameandurlinputdialog_changeevent_callback(this, cbval1);
        } else {
            KNameAndUrlInputDialog::changeEvent(param1);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual int metric(QPaintDevice::PaintDeviceMetric param1) const override {
        if (knameandurlinputdialog_metric_isbase) {
            knameandurlinputdialog_metric_isbase = false;
            return KNameAndUrlInputDialog::metric(param1);
        } else if (knameandurlinputdialog_metric_callback != nullptr) {
            int cbval1 = static_cast<int>(param1);

            int callback_ret = knameandurlinputdialog_metric_callback(this, cbval1);
            return static_cast<int>(callback_ret);
        } else {
            return KNameAndUrlInputDialog::metric(param1);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void initPainter(QPainter* painter) const override {
        if (knameandurlinputdialog_initpainter_isbase) {
            knameandurlinputdialog_initpainter_isbase = false;
            KNameAndUrlInputDialog::initPainter(painter);
        } else if (knameandurlinputdialog_initpainter_callback != nullptr) {
            QPainter* cbval1 = painter;

            knameandurlinputdialog_initpainter_callback(this, cbval1);
        } else {
            KNameAndUrlInputDialog::initPainter(painter);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QPaintDevice* redirected(QPoint* offset) const override {
        if (knameandurlinputdialog_redirected_isbase) {
            knameandurlinputdialog_redirected_isbase = false;
            return KNameAndUrlInputDialog::redirected(offset);
        } else if (knameandurlinputdialog_redirected_callback != nullptr) {
            QPoint* cbval1 = offset;

            QPaintDevice* callback_ret = knameandurlinputdialog_redirected_callback(this, cbval1);
            return callback_ret;
        } else {
            return KNameAndUrlInputDialog::redirected(offset);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QPainter* sharedPainter() const override {
        if (knameandurlinputdialog_sharedpainter_isbase) {
            knameandurlinputdialog_sharedpainter_isbase = false;
            return KNameAndUrlInputDialog::sharedPainter();
        } else if (knameandurlinputdialog_sharedpainter_callback != nullptr) {
            QPainter* callback_ret = knameandurlinputdialog_sharedpainter_callback();
            return callback_ret;
        } else {
            return KNameAndUrlInputDialog::sharedPainter();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void inputMethodEvent(QInputMethodEvent* param1) override {
        if (knameandurlinputdialog_inputmethodevent_isbase) {
            knameandurlinputdialog_inputmethodevent_isbase = false;
            KNameAndUrlInputDialog::inputMethodEvent(param1);
        } else if (knameandurlinputdialog_inputmethodevent_callback != nullptr) {
            QInputMethodEvent* cbval1 = param1;

            knameandurlinputdialog_inputmethodevent_callback(this, cbval1);
        } else {
            KNameAndUrlInputDialog::inputMethodEvent(param1);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QVariant inputMethodQuery(Qt::InputMethodQuery param1) const override {
        if (knameandurlinputdialog_inputmethodquery_isbase) {
            knameandurlinputdialog_inputmethodquery_isbase = false;
            return KNameAndUrlInputDialog::inputMethodQuery(param1);
        } else if (knameandurlinputdialog_inputmethodquery_callback != nullptr) {
            int cbval1 = static_cast<int>(param1);

            QVariant* callback_ret = knameandurlinputdialog_inputmethodquery_callback(this, cbval1);
            return *callback_ret;
        } else {
            return KNameAndUrlInputDialog::inputMethodQuery(param1);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool focusNextPrevChild(bool next) override {
        if (knameandurlinputdialog_focusnextprevchild_isbase) {
            knameandurlinputdialog_focusnextprevchild_isbase = false;
            return KNameAndUrlInputDialog::focusNextPrevChild(next);
        } else if (knameandurlinputdialog_focusnextprevchild_callback != nullptr) {
            bool cbval1 = next;

            bool callback_ret = knameandurlinputdialog_focusnextprevchild_callback(this, cbval1);
            return callback_ret;
        } else {
            return KNameAndUrlInputDialog::focusNextPrevChild(next);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (knameandurlinputdialog_timerevent_isbase) {
            knameandurlinputdialog_timerevent_isbase = false;
            KNameAndUrlInputDialog::timerEvent(event);
        } else if (knameandurlinputdialog_timerevent_callback != nullptr) {
            QTimerEvent* cbval1 = event;

            knameandurlinputdialog_timerevent_callback(this, cbval1);
        } else {
            KNameAndUrlInputDialog::timerEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (knameandurlinputdialog_childevent_isbase) {
            knameandurlinputdialog_childevent_isbase = false;
            KNameAndUrlInputDialog::childEvent(event);
        } else if (knameandurlinputdialog_childevent_callback != nullptr) {
            QChildEvent* cbval1 = event;

            knameandurlinputdialog_childevent_callback(this, cbval1);
        } else {
            KNameAndUrlInputDialog::childEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (knameandurlinputdialog_customevent_isbase) {
            knameandurlinputdialog_customevent_isbase = false;
            KNameAndUrlInputDialog::customEvent(event);
        } else if (knameandurlinputdialog_customevent_callback != nullptr) {
            QEvent* cbval1 = event;

            knameandurlinputdialog_customevent_callback(this, cbval1);
        } else {
            KNameAndUrlInputDialog::customEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (knameandurlinputdialog_connectnotify_isbase) {
            knameandurlinputdialog_connectnotify_isbase = false;
            KNameAndUrlInputDialog::connectNotify(signal);
        } else if (knameandurlinputdialog_connectnotify_callback != nullptr) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            knameandurlinputdialog_connectnotify_callback(this, cbval1);
        } else {
            KNameAndUrlInputDialog::connectNotify(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (knameandurlinputdialog_disconnectnotify_isbase) {
            knameandurlinputdialog_disconnectnotify_isbase = false;
            KNameAndUrlInputDialog::disconnectNotify(signal);
        } else if (knameandurlinputdialog_disconnectnotify_callback != nullptr) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            knameandurlinputdialog_disconnectnotify_callback(this, cbval1);
        } else {
            KNameAndUrlInputDialog::disconnectNotify(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    void adjustPosition(QWidget* param1) {
        if (knameandurlinputdialog_adjustposition_isbase) {
            knameandurlinputdialog_adjustposition_isbase = false;
            KNameAndUrlInputDialog::adjustPosition(param1);
        } else if (knameandurlinputdialog_adjustposition_callback != nullptr) {
            QWidget* cbval1 = param1;

            knameandurlinputdialog_adjustposition_callback(this, cbval1);
        } else {
            KNameAndUrlInputDialog::adjustPosition(param1);
        }
    }

    // Virtual method for C ABI access and custom callback
    void updateMicroFocus() {
        if (knameandurlinputdialog_updatemicrofocus_isbase) {
            knameandurlinputdialog_updatemicrofocus_isbase = false;
            KNameAndUrlInputDialog::updateMicroFocus();
        } else if (knameandurlinputdialog_updatemicrofocus_callback != nullptr) {
            knameandurlinputdialog_updatemicrofocus_callback();
        } else {
            KNameAndUrlInputDialog::updateMicroFocus();
        }
    }

    // Virtual method for C ABI access and custom callback
    void create() {
        if (knameandurlinputdialog_create_isbase) {
            knameandurlinputdialog_create_isbase = false;
            KNameAndUrlInputDialog::create();
        } else if (knameandurlinputdialog_create_callback != nullptr) {
            knameandurlinputdialog_create_callback();
        } else {
            KNameAndUrlInputDialog::create();
        }
    }

    // Virtual method for C ABI access and custom callback
    void destroy() {
        if (knameandurlinputdialog_destroy_isbase) {
            knameandurlinputdialog_destroy_isbase = false;
            KNameAndUrlInputDialog::destroy();
        } else if (knameandurlinputdialog_destroy_callback != nullptr) {
            knameandurlinputdialog_destroy_callback();
        } else {
            KNameAndUrlInputDialog::destroy();
        }
    }

    // Virtual method for C ABI access and custom callback
    bool focusNextChild() {
        if (knameandurlinputdialog_focusnextchild_isbase) {
            knameandurlinputdialog_focusnextchild_isbase = false;
            return KNameAndUrlInputDialog::focusNextChild();
        } else if (knameandurlinputdialog_focusnextchild_callback != nullptr) {
            bool callback_ret = knameandurlinputdialog_focusnextchild_callback();
            return callback_ret;
        } else {
            return KNameAndUrlInputDialog::focusNextChild();
        }
    }

    // Virtual method for C ABI access and custom callback
    bool focusPreviousChild() {
        if (knameandurlinputdialog_focuspreviouschild_isbase) {
            knameandurlinputdialog_focuspreviouschild_isbase = false;
            return KNameAndUrlInputDialog::focusPreviousChild();
        } else if (knameandurlinputdialog_focuspreviouschild_callback != nullptr) {
            bool callback_ret = knameandurlinputdialog_focuspreviouschild_callback();
            return callback_ret;
        } else {
            return KNameAndUrlInputDialog::focusPreviousChild();
        }
    }

    // Virtual method for C ABI access and custom callback
    QObject* sender() const {
        if (knameandurlinputdialog_sender_isbase) {
            knameandurlinputdialog_sender_isbase = false;
            return KNameAndUrlInputDialog::sender();
        } else if (knameandurlinputdialog_sender_callback != nullptr) {
            QObject* callback_ret = knameandurlinputdialog_sender_callback();
            return callback_ret;
        } else {
            return KNameAndUrlInputDialog::sender();
        }
    }

    // Virtual method for C ABI access and custom callback
    int senderSignalIndex() const {
        if (knameandurlinputdialog_sendersignalindex_isbase) {
            knameandurlinputdialog_sendersignalindex_isbase = false;
            return KNameAndUrlInputDialog::senderSignalIndex();
        } else if (knameandurlinputdialog_sendersignalindex_callback != nullptr) {
            int callback_ret = knameandurlinputdialog_sendersignalindex_callback();
            return static_cast<int>(callback_ret);
        } else {
            return KNameAndUrlInputDialog::senderSignalIndex();
        }
    }

    // Virtual method for C ABI access and custom callback
    int receivers(const char* signal) const {
        if (knameandurlinputdialog_receivers_isbase) {
            knameandurlinputdialog_receivers_isbase = false;
            return KNameAndUrlInputDialog::receivers(signal);
        } else if (knameandurlinputdialog_receivers_callback != nullptr) {
            const char* cbval1 = (const char*)signal;

            int callback_ret = knameandurlinputdialog_receivers_callback(this, cbval1);
            return static_cast<int>(callback_ret);
        } else {
            return KNameAndUrlInputDialog::receivers(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    bool isSignalConnected(const QMetaMethod& signal) const {
        if (knameandurlinputdialog_issignalconnected_isbase) {
            knameandurlinputdialog_issignalconnected_isbase = false;
            return KNameAndUrlInputDialog::isSignalConnected(signal);
        } else if (knameandurlinputdialog_issignalconnected_callback != nullptr) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            bool callback_ret = knameandurlinputdialog_issignalconnected_callback(this, cbval1);
            return callback_ret;
        } else {
            return KNameAndUrlInputDialog::isSignalConnected(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    double getDecodedMetricF(QPaintDevice::PaintDeviceMetric metricA, QPaintDevice::PaintDeviceMetric metricB) const {
        if (knameandurlinputdialog_getdecodedmetricf_isbase) {
            knameandurlinputdialog_getdecodedmetricf_isbase = false;
            return KNameAndUrlInputDialog::getDecodedMetricF(metricA, metricB);
        } else if (knameandurlinputdialog_getdecodedmetricf_callback != nullptr) {
            int cbval1 = static_cast<int>(metricA);
            int cbval2 = static_cast<int>(metricB);

            double callback_ret = knameandurlinputdialog_getdecodedmetricf_callback(this, cbval1, cbval2);
            return static_cast<double>(callback_ret);
        } else {
            return KNameAndUrlInputDialog::getDecodedMetricF(metricA, metricB);
        }
    }

    // Friend functions
    friend void KNameAndUrlInputDialog_KeyPressEvent(KNameAndUrlInputDialog* self, QKeyEvent* param1);
    friend void KNameAndUrlInputDialog_QBaseKeyPressEvent(KNameAndUrlInputDialog* self, QKeyEvent* param1);
    friend void KNameAndUrlInputDialog_CloseEvent(KNameAndUrlInputDialog* self, QCloseEvent* param1);
    friend void KNameAndUrlInputDialog_QBaseCloseEvent(KNameAndUrlInputDialog* self, QCloseEvent* param1);
    friend void KNameAndUrlInputDialog_ShowEvent(KNameAndUrlInputDialog* self, QShowEvent* param1);
    friend void KNameAndUrlInputDialog_QBaseShowEvent(KNameAndUrlInputDialog* self, QShowEvent* param1);
    friend void KNameAndUrlInputDialog_ResizeEvent(KNameAndUrlInputDialog* self, QResizeEvent* param1);
    friend void KNameAndUrlInputDialog_QBaseResizeEvent(KNameAndUrlInputDialog* self, QResizeEvent* param1);
    friend void KNameAndUrlInputDialog_ContextMenuEvent(KNameAndUrlInputDialog* self, QContextMenuEvent* param1);
    friend void KNameAndUrlInputDialog_QBaseContextMenuEvent(KNameAndUrlInputDialog* self, QContextMenuEvent* param1);
    friend bool KNameAndUrlInputDialog_EventFilter(KNameAndUrlInputDialog* self, QObject* param1, QEvent* param2);
    friend bool KNameAndUrlInputDialog_QBaseEventFilter(KNameAndUrlInputDialog* self, QObject* param1, QEvent* param2);
    friend bool KNameAndUrlInputDialog_Event(KNameAndUrlInputDialog* self, QEvent* event);
    friend bool KNameAndUrlInputDialog_QBaseEvent(KNameAndUrlInputDialog* self, QEvent* event);
    friend void KNameAndUrlInputDialog_MousePressEvent(KNameAndUrlInputDialog* self, QMouseEvent* event);
    friend void KNameAndUrlInputDialog_QBaseMousePressEvent(KNameAndUrlInputDialog* self, QMouseEvent* event);
    friend void KNameAndUrlInputDialog_MouseReleaseEvent(KNameAndUrlInputDialog* self, QMouseEvent* event);
    friend void KNameAndUrlInputDialog_QBaseMouseReleaseEvent(KNameAndUrlInputDialog* self, QMouseEvent* event);
    friend void KNameAndUrlInputDialog_MouseDoubleClickEvent(KNameAndUrlInputDialog* self, QMouseEvent* event);
    friend void KNameAndUrlInputDialog_QBaseMouseDoubleClickEvent(KNameAndUrlInputDialog* self, QMouseEvent* event);
    friend void KNameAndUrlInputDialog_MouseMoveEvent(KNameAndUrlInputDialog* self, QMouseEvent* event);
    friend void KNameAndUrlInputDialog_QBaseMouseMoveEvent(KNameAndUrlInputDialog* self, QMouseEvent* event);
    friend void KNameAndUrlInputDialog_WheelEvent(KNameAndUrlInputDialog* self, QWheelEvent* event);
    friend void KNameAndUrlInputDialog_QBaseWheelEvent(KNameAndUrlInputDialog* self, QWheelEvent* event);
    friend void KNameAndUrlInputDialog_KeyReleaseEvent(KNameAndUrlInputDialog* self, QKeyEvent* event);
    friend void KNameAndUrlInputDialog_QBaseKeyReleaseEvent(KNameAndUrlInputDialog* self, QKeyEvent* event);
    friend void KNameAndUrlInputDialog_FocusInEvent(KNameAndUrlInputDialog* self, QFocusEvent* event);
    friend void KNameAndUrlInputDialog_QBaseFocusInEvent(KNameAndUrlInputDialog* self, QFocusEvent* event);
    friend void KNameAndUrlInputDialog_FocusOutEvent(KNameAndUrlInputDialog* self, QFocusEvent* event);
    friend void KNameAndUrlInputDialog_QBaseFocusOutEvent(KNameAndUrlInputDialog* self, QFocusEvent* event);
    friend void KNameAndUrlInputDialog_EnterEvent(KNameAndUrlInputDialog* self, QEnterEvent* event);
    friend void KNameAndUrlInputDialog_QBaseEnterEvent(KNameAndUrlInputDialog* self, QEnterEvent* event);
    friend void KNameAndUrlInputDialog_LeaveEvent(KNameAndUrlInputDialog* self, QEvent* event);
    friend void KNameAndUrlInputDialog_QBaseLeaveEvent(KNameAndUrlInputDialog* self, QEvent* event);
    friend void KNameAndUrlInputDialog_PaintEvent(KNameAndUrlInputDialog* self, QPaintEvent* event);
    friend void KNameAndUrlInputDialog_QBasePaintEvent(KNameAndUrlInputDialog* self, QPaintEvent* event);
    friend void KNameAndUrlInputDialog_MoveEvent(KNameAndUrlInputDialog* self, QMoveEvent* event);
    friend void KNameAndUrlInputDialog_QBaseMoveEvent(KNameAndUrlInputDialog* self, QMoveEvent* event);
    friend void KNameAndUrlInputDialog_TabletEvent(KNameAndUrlInputDialog* self, QTabletEvent* event);
    friend void KNameAndUrlInputDialog_QBaseTabletEvent(KNameAndUrlInputDialog* self, QTabletEvent* event);
    friend void KNameAndUrlInputDialog_ActionEvent(KNameAndUrlInputDialog* self, QActionEvent* event);
    friend void KNameAndUrlInputDialog_QBaseActionEvent(KNameAndUrlInputDialog* self, QActionEvent* event);
    friend void KNameAndUrlInputDialog_DragEnterEvent(KNameAndUrlInputDialog* self, QDragEnterEvent* event);
    friend void KNameAndUrlInputDialog_QBaseDragEnterEvent(KNameAndUrlInputDialog* self, QDragEnterEvent* event);
    friend void KNameAndUrlInputDialog_DragMoveEvent(KNameAndUrlInputDialog* self, QDragMoveEvent* event);
    friend void KNameAndUrlInputDialog_QBaseDragMoveEvent(KNameAndUrlInputDialog* self, QDragMoveEvent* event);
    friend void KNameAndUrlInputDialog_DragLeaveEvent(KNameAndUrlInputDialog* self, QDragLeaveEvent* event);
    friend void KNameAndUrlInputDialog_QBaseDragLeaveEvent(KNameAndUrlInputDialog* self, QDragLeaveEvent* event);
    friend void KNameAndUrlInputDialog_DropEvent(KNameAndUrlInputDialog* self, QDropEvent* event);
    friend void KNameAndUrlInputDialog_QBaseDropEvent(KNameAndUrlInputDialog* self, QDropEvent* event);
    friend void KNameAndUrlInputDialog_HideEvent(KNameAndUrlInputDialog* self, QHideEvent* event);
    friend void KNameAndUrlInputDialog_QBaseHideEvent(KNameAndUrlInputDialog* self, QHideEvent* event);
    friend bool KNameAndUrlInputDialog_NativeEvent(KNameAndUrlInputDialog* self, const libqt_string eventType, void* message, intptr_t* result);
    friend bool KNameAndUrlInputDialog_QBaseNativeEvent(KNameAndUrlInputDialog* self, const libqt_string eventType, void* message, intptr_t* result);
    friend void KNameAndUrlInputDialog_ChangeEvent(KNameAndUrlInputDialog* self, QEvent* param1);
    friend void KNameAndUrlInputDialog_QBaseChangeEvent(KNameAndUrlInputDialog* self, QEvent* param1);
    friend int KNameAndUrlInputDialog_Metric(const KNameAndUrlInputDialog* self, int param1);
    friend int KNameAndUrlInputDialog_QBaseMetric(const KNameAndUrlInputDialog* self, int param1);
    friend void KNameAndUrlInputDialog_InitPainter(const KNameAndUrlInputDialog* self, QPainter* painter);
    friend void KNameAndUrlInputDialog_QBaseInitPainter(const KNameAndUrlInputDialog* self, QPainter* painter);
    friend QPaintDevice* KNameAndUrlInputDialog_Redirected(const KNameAndUrlInputDialog* self, QPoint* offset);
    friend QPaintDevice* KNameAndUrlInputDialog_QBaseRedirected(const KNameAndUrlInputDialog* self, QPoint* offset);
    friend QPainter* KNameAndUrlInputDialog_SharedPainter(const KNameAndUrlInputDialog* self);
    friend QPainter* KNameAndUrlInputDialog_QBaseSharedPainter(const KNameAndUrlInputDialog* self);
    friend void KNameAndUrlInputDialog_InputMethodEvent(KNameAndUrlInputDialog* self, QInputMethodEvent* param1);
    friend void KNameAndUrlInputDialog_QBaseInputMethodEvent(KNameAndUrlInputDialog* self, QInputMethodEvent* param1);
    friend bool KNameAndUrlInputDialog_FocusNextPrevChild(KNameAndUrlInputDialog* self, bool next);
    friend bool KNameAndUrlInputDialog_QBaseFocusNextPrevChild(KNameAndUrlInputDialog* self, bool next);
    friend void KNameAndUrlInputDialog_TimerEvent(KNameAndUrlInputDialog* self, QTimerEvent* event);
    friend void KNameAndUrlInputDialog_QBaseTimerEvent(KNameAndUrlInputDialog* self, QTimerEvent* event);
    friend void KNameAndUrlInputDialog_ChildEvent(KNameAndUrlInputDialog* self, QChildEvent* event);
    friend void KNameAndUrlInputDialog_QBaseChildEvent(KNameAndUrlInputDialog* self, QChildEvent* event);
    friend void KNameAndUrlInputDialog_CustomEvent(KNameAndUrlInputDialog* self, QEvent* event);
    friend void KNameAndUrlInputDialog_QBaseCustomEvent(KNameAndUrlInputDialog* self, QEvent* event);
    friend void KNameAndUrlInputDialog_ConnectNotify(KNameAndUrlInputDialog* self, const QMetaMethod* signal);
    friend void KNameAndUrlInputDialog_QBaseConnectNotify(KNameAndUrlInputDialog* self, const QMetaMethod* signal);
    friend void KNameAndUrlInputDialog_DisconnectNotify(KNameAndUrlInputDialog* self, const QMetaMethod* signal);
    friend void KNameAndUrlInputDialog_QBaseDisconnectNotify(KNameAndUrlInputDialog* self, const QMetaMethod* signal);
    friend void KNameAndUrlInputDialog_AdjustPosition(KNameAndUrlInputDialog* self, QWidget* param1);
    friend void KNameAndUrlInputDialog_QBaseAdjustPosition(KNameAndUrlInputDialog* self, QWidget* param1);
    friend void KNameAndUrlInputDialog_UpdateMicroFocus(KNameAndUrlInputDialog* self);
    friend void KNameAndUrlInputDialog_QBaseUpdateMicroFocus(KNameAndUrlInputDialog* self);
    friend void KNameAndUrlInputDialog_Create(KNameAndUrlInputDialog* self);
    friend void KNameAndUrlInputDialog_QBaseCreate(KNameAndUrlInputDialog* self);
    friend void KNameAndUrlInputDialog_Destroy(KNameAndUrlInputDialog* self);
    friend void KNameAndUrlInputDialog_QBaseDestroy(KNameAndUrlInputDialog* self);
    friend bool KNameAndUrlInputDialog_FocusNextChild(KNameAndUrlInputDialog* self);
    friend bool KNameAndUrlInputDialog_QBaseFocusNextChild(KNameAndUrlInputDialog* self);
    friend bool KNameAndUrlInputDialog_FocusPreviousChild(KNameAndUrlInputDialog* self);
    friend bool KNameAndUrlInputDialog_QBaseFocusPreviousChild(KNameAndUrlInputDialog* self);
    friend QObject* KNameAndUrlInputDialog_Sender(const KNameAndUrlInputDialog* self);
    friend QObject* KNameAndUrlInputDialog_QBaseSender(const KNameAndUrlInputDialog* self);
    friend int KNameAndUrlInputDialog_SenderSignalIndex(const KNameAndUrlInputDialog* self);
    friend int KNameAndUrlInputDialog_QBaseSenderSignalIndex(const KNameAndUrlInputDialog* self);
    friend int KNameAndUrlInputDialog_Receivers(const KNameAndUrlInputDialog* self, const char* signal);
    friend int KNameAndUrlInputDialog_QBaseReceivers(const KNameAndUrlInputDialog* self, const char* signal);
    friend bool KNameAndUrlInputDialog_IsSignalConnected(const KNameAndUrlInputDialog* self, const QMetaMethod* signal);
    friend bool KNameAndUrlInputDialog_QBaseIsSignalConnected(const KNameAndUrlInputDialog* self, const QMetaMethod* signal);
    friend double KNameAndUrlInputDialog_GetDecodedMetricF(const KNameAndUrlInputDialog* self, int metricA, int metricB);
    friend double KNameAndUrlInputDialog_QBaseGetDecodedMetricF(const KNameAndUrlInputDialog* self, int metricA, int metricB);
};

#endif
