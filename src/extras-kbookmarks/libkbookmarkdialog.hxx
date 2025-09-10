#pragma once
#ifndef SRC_EXTRAS_KBOOKMARKSC_LIBVIRTUALKBOOKMARKDIALOG_H
#define SRC_EXTRAS_KBOOKMARKSC_LIBVIRTUALKBOOKMARKDIALOG_H

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

// This class is a subclass of KBookmarkDialog so that we can call protected methods
class VirtualKBookmarkDialog final : public KBookmarkDialog {

  public:
    // Virtual class boolean flag
    bool isVirtualKBookmarkDialog = true;

    // Virtual class public types (including callbacks)
    using KBookmarkDialog_Metacall_Callback = int (*)(KBookmarkDialog*, int, int, void**);
    using KBookmarkDialog_Accept_Callback = void (*)();
    using KBookmarkDialog_SetVisible_Callback = void (*)(KBookmarkDialog*, bool);
    using KBookmarkDialog_SizeHint_Callback = QSize* (*)();
    using KBookmarkDialog_MinimumSizeHint_Callback = QSize* (*)();
    using KBookmarkDialog_Open_Callback = void (*)();
    using KBookmarkDialog_Exec_Callback = int (*)();
    using KBookmarkDialog_Done_Callback = void (*)(KBookmarkDialog*, int);
    using KBookmarkDialog_Reject_Callback = void (*)();
    using KBookmarkDialog_KeyPressEvent_Callback = void (*)(KBookmarkDialog*, QKeyEvent*);
    using KBookmarkDialog_CloseEvent_Callback = void (*)(KBookmarkDialog*, QCloseEvent*);
    using KBookmarkDialog_ShowEvent_Callback = void (*)(KBookmarkDialog*, QShowEvent*);
    using KBookmarkDialog_ResizeEvent_Callback = void (*)(KBookmarkDialog*, QResizeEvent*);
    using KBookmarkDialog_ContextMenuEvent_Callback = void (*)(KBookmarkDialog*, QContextMenuEvent*);
    using KBookmarkDialog_EventFilter_Callback = bool (*)(KBookmarkDialog*, QObject*, QEvent*);
    using KBookmarkDialog_DevType_Callback = int (*)();
    using KBookmarkDialog_HeightForWidth_Callback = int (*)(const KBookmarkDialog*, int);
    using KBookmarkDialog_HasHeightForWidth_Callback = bool (*)();
    using KBookmarkDialog_PaintEngine_Callback = QPaintEngine* (*)();
    using KBookmarkDialog_Event_Callback = bool (*)(KBookmarkDialog*, QEvent*);
    using KBookmarkDialog_MousePressEvent_Callback = void (*)(KBookmarkDialog*, QMouseEvent*);
    using KBookmarkDialog_MouseReleaseEvent_Callback = void (*)(KBookmarkDialog*, QMouseEvent*);
    using KBookmarkDialog_MouseDoubleClickEvent_Callback = void (*)(KBookmarkDialog*, QMouseEvent*);
    using KBookmarkDialog_MouseMoveEvent_Callback = void (*)(KBookmarkDialog*, QMouseEvent*);
    using KBookmarkDialog_WheelEvent_Callback = void (*)(KBookmarkDialog*, QWheelEvent*);
    using KBookmarkDialog_KeyReleaseEvent_Callback = void (*)(KBookmarkDialog*, QKeyEvent*);
    using KBookmarkDialog_FocusInEvent_Callback = void (*)(KBookmarkDialog*, QFocusEvent*);
    using KBookmarkDialog_FocusOutEvent_Callback = void (*)(KBookmarkDialog*, QFocusEvent*);
    using KBookmarkDialog_EnterEvent_Callback = void (*)(KBookmarkDialog*, QEnterEvent*);
    using KBookmarkDialog_LeaveEvent_Callback = void (*)(KBookmarkDialog*, QEvent*);
    using KBookmarkDialog_PaintEvent_Callback = void (*)(KBookmarkDialog*, QPaintEvent*);
    using KBookmarkDialog_MoveEvent_Callback = void (*)(KBookmarkDialog*, QMoveEvent*);
    using KBookmarkDialog_TabletEvent_Callback = void (*)(KBookmarkDialog*, QTabletEvent*);
    using KBookmarkDialog_ActionEvent_Callback = void (*)(KBookmarkDialog*, QActionEvent*);
    using KBookmarkDialog_DragEnterEvent_Callback = void (*)(KBookmarkDialog*, QDragEnterEvent*);
    using KBookmarkDialog_DragMoveEvent_Callback = void (*)(KBookmarkDialog*, QDragMoveEvent*);
    using KBookmarkDialog_DragLeaveEvent_Callback = void (*)(KBookmarkDialog*, QDragLeaveEvent*);
    using KBookmarkDialog_DropEvent_Callback = void (*)(KBookmarkDialog*, QDropEvent*);
    using KBookmarkDialog_HideEvent_Callback = void (*)(KBookmarkDialog*, QHideEvent*);
    using KBookmarkDialog_NativeEvent_Callback = bool (*)(KBookmarkDialog*, libqt_string, void*, intptr_t*);
    using KBookmarkDialog_ChangeEvent_Callback = void (*)(KBookmarkDialog*, QEvent*);
    using KBookmarkDialog_Metric_Callback = int (*)(const KBookmarkDialog*, int);
    using KBookmarkDialog_InitPainter_Callback = void (*)(const KBookmarkDialog*, QPainter*);
    using KBookmarkDialog_Redirected_Callback = QPaintDevice* (*)(const KBookmarkDialog*, QPoint*);
    using KBookmarkDialog_SharedPainter_Callback = QPainter* (*)();
    using KBookmarkDialog_InputMethodEvent_Callback = void (*)(KBookmarkDialog*, QInputMethodEvent*);
    using KBookmarkDialog_InputMethodQuery_Callback = QVariant* (*)(const KBookmarkDialog*, int);
    using KBookmarkDialog_FocusNextPrevChild_Callback = bool (*)(KBookmarkDialog*, bool);
    using KBookmarkDialog_TimerEvent_Callback = void (*)(KBookmarkDialog*, QTimerEvent*);
    using KBookmarkDialog_ChildEvent_Callback = void (*)(KBookmarkDialog*, QChildEvent*);
    using KBookmarkDialog_CustomEvent_Callback = void (*)(KBookmarkDialog*, QEvent*);
    using KBookmarkDialog_ConnectNotify_Callback = void (*)(KBookmarkDialog*, QMetaMethod*);
    using KBookmarkDialog_DisconnectNotify_Callback = void (*)(KBookmarkDialog*, QMetaMethod*);
    using KBookmarkDialog_NewFolderButton_Callback = void (*)();
    using KBookmarkDialog_AdjustPosition_Callback = void (*)(KBookmarkDialog*, QWidget*);
    using KBookmarkDialog_UpdateMicroFocus_Callback = void (*)();
    using KBookmarkDialog_Create_Callback = void (*)();
    using KBookmarkDialog_Destroy_Callback = void (*)();
    using KBookmarkDialog_FocusNextChild_Callback = bool (*)();
    using KBookmarkDialog_FocusPreviousChild_Callback = bool (*)();
    using KBookmarkDialog_Sender_Callback = QObject* (*)();
    using KBookmarkDialog_SenderSignalIndex_Callback = int (*)();
    using KBookmarkDialog_Receivers_Callback = int (*)(const KBookmarkDialog*, const char*);
    using KBookmarkDialog_IsSignalConnected_Callback = bool (*)(const KBookmarkDialog*, QMetaMethod*);
    using KBookmarkDialog_GetDecodedMetricF_Callback = double (*)(const KBookmarkDialog*, int, int);

  protected:
    // Instance callback storage
    KBookmarkDialog_Metacall_Callback kbookmarkdialog_metacall_callback = nullptr;
    KBookmarkDialog_Accept_Callback kbookmarkdialog_accept_callback = nullptr;
    KBookmarkDialog_SetVisible_Callback kbookmarkdialog_setvisible_callback = nullptr;
    KBookmarkDialog_SizeHint_Callback kbookmarkdialog_sizehint_callback = nullptr;
    KBookmarkDialog_MinimumSizeHint_Callback kbookmarkdialog_minimumsizehint_callback = nullptr;
    KBookmarkDialog_Open_Callback kbookmarkdialog_open_callback = nullptr;
    KBookmarkDialog_Exec_Callback kbookmarkdialog_exec_callback = nullptr;
    KBookmarkDialog_Done_Callback kbookmarkdialog_done_callback = nullptr;
    KBookmarkDialog_Reject_Callback kbookmarkdialog_reject_callback = nullptr;
    KBookmarkDialog_KeyPressEvent_Callback kbookmarkdialog_keypressevent_callback = nullptr;
    KBookmarkDialog_CloseEvent_Callback kbookmarkdialog_closeevent_callback = nullptr;
    KBookmarkDialog_ShowEvent_Callback kbookmarkdialog_showevent_callback = nullptr;
    KBookmarkDialog_ResizeEvent_Callback kbookmarkdialog_resizeevent_callback = nullptr;
    KBookmarkDialog_ContextMenuEvent_Callback kbookmarkdialog_contextmenuevent_callback = nullptr;
    KBookmarkDialog_EventFilter_Callback kbookmarkdialog_eventfilter_callback = nullptr;
    KBookmarkDialog_DevType_Callback kbookmarkdialog_devtype_callback = nullptr;
    KBookmarkDialog_HeightForWidth_Callback kbookmarkdialog_heightforwidth_callback = nullptr;
    KBookmarkDialog_HasHeightForWidth_Callback kbookmarkdialog_hasheightforwidth_callback = nullptr;
    KBookmarkDialog_PaintEngine_Callback kbookmarkdialog_paintengine_callback = nullptr;
    KBookmarkDialog_Event_Callback kbookmarkdialog_event_callback = nullptr;
    KBookmarkDialog_MousePressEvent_Callback kbookmarkdialog_mousepressevent_callback = nullptr;
    KBookmarkDialog_MouseReleaseEvent_Callback kbookmarkdialog_mousereleaseevent_callback = nullptr;
    KBookmarkDialog_MouseDoubleClickEvent_Callback kbookmarkdialog_mousedoubleclickevent_callback = nullptr;
    KBookmarkDialog_MouseMoveEvent_Callback kbookmarkdialog_mousemoveevent_callback = nullptr;
    KBookmarkDialog_WheelEvent_Callback kbookmarkdialog_wheelevent_callback = nullptr;
    KBookmarkDialog_KeyReleaseEvent_Callback kbookmarkdialog_keyreleaseevent_callback = nullptr;
    KBookmarkDialog_FocusInEvent_Callback kbookmarkdialog_focusinevent_callback = nullptr;
    KBookmarkDialog_FocusOutEvent_Callback kbookmarkdialog_focusoutevent_callback = nullptr;
    KBookmarkDialog_EnterEvent_Callback kbookmarkdialog_enterevent_callback = nullptr;
    KBookmarkDialog_LeaveEvent_Callback kbookmarkdialog_leaveevent_callback = nullptr;
    KBookmarkDialog_PaintEvent_Callback kbookmarkdialog_paintevent_callback = nullptr;
    KBookmarkDialog_MoveEvent_Callback kbookmarkdialog_moveevent_callback = nullptr;
    KBookmarkDialog_TabletEvent_Callback kbookmarkdialog_tabletevent_callback = nullptr;
    KBookmarkDialog_ActionEvent_Callback kbookmarkdialog_actionevent_callback = nullptr;
    KBookmarkDialog_DragEnterEvent_Callback kbookmarkdialog_dragenterevent_callback = nullptr;
    KBookmarkDialog_DragMoveEvent_Callback kbookmarkdialog_dragmoveevent_callback = nullptr;
    KBookmarkDialog_DragLeaveEvent_Callback kbookmarkdialog_dragleaveevent_callback = nullptr;
    KBookmarkDialog_DropEvent_Callback kbookmarkdialog_dropevent_callback = nullptr;
    KBookmarkDialog_HideEvent_Callback kbookmarkdialog_hideevent_callback = nullptr;
    KBookmarkDialog_NativeEvent_Callback kbookmarkdialog_nativeevent_callback = nullptr;
    KBookmarkDialog_ChangeEvent_Callback kbookmarkdialog_changeevent_callback = nullptr;
    KBookmarkDialog_Metric_Callback kbookmarkdialog_metric_callback = nullptr;
    KBookmarkDialog_InitPainter_Callback kbookmarkdialog_initpainter_callback = nullptr;
    KBookmarkDialog_Redirected_Callback kbookmarkdialog_redirected_callback = nullptr;
    KBookmarkDialog_SharedPainter_Callback kbookmarkdialog_sharedpainter_callback = nullptr;
    KBookmarkDialog_InputMethodEvent_Callback kbookmarkdialog_inputmethodevent_callback = nullptr;
    KBookmarkDialog_InputMethodQuery_Callback kbookmarkdialog_inputmethodquery_callback = nullptr;
    KBookmarkDialog_FocusNextPrevChild_Callback kbookmarkdialog_focusnextprevchild_callback = nullptr;
    KBookmarkDialog_TimerEvent_Callback kbookmarkdialog_timerevent_callback = nullptr;
    KBookmarkDialog_ChildEvent_Callback kbookmarkdialog_childevent_callback = nullptr;
    KBookmarkDialog_CustomEvent_Callback kbookmarkdialog_customevent_callback = nullptr;
    KBookmarkDialog_ConnectNotify_Callback kbookmarkdialog_connectnotify_callback = nullptr;
    KBookmarkDialog_DisconnectNotify_Callback kbookmarkdialog_disconnectnotify_callback = nullptr;
    KBookmarkDialog_NewFolderButton_Callback kbookmarkdialog_newfolderbutton_callback = nullptr;
    KBookmarkDialog_AdjustPosition_Callback kbookmarkdialog_adjustposition_callback = nullptr;
    KBookmarkDialog_UpdateMicroFocus_Callback kbookmarkdialog_updatemicrofocus_callback = nullptr;
    KBookmarkDialog_Create_Callback kbookmarkdialog_create_callback = nullptr;
    KBookmarkDialog_Destroy_Callback kbookmarkdialog_destroy_callback = nullptr;
    KBookmarkDialog_FocusNextChild_Callback kbookmarkdialog_focusnextchild_callback = nullptr;
    KBookmarkDialog_FocusPreviousChild_Callback kbookmarkdialog_focuspreviouschild_callback = nullptr;
    KBookmarkDialog_Sender_Callback kbookmarkdialog_sender_callback = nullptr;
    KBookmarkDialog_SenderSignalIndex_Callback kbookmarkdialog_sendersignalindex_callback = nullptr;
    KBookmarkDialog_Receivers_Callback kbookmarkdialog_receivers_callback = nullptr;
    KBookmarkDialog_IsSignalConnected_Callback kbookmarkdialog_issignalconnected_callback = nullptr;
    KBookmarkDialog_GetDecodedMetricF_Callback kbookmarkdialog_getdecodedmetricf_callback = nullptr;

    // Instance base flags
    mutable bool kbookmarkdialog_metacall_isbase = false;
    mutable bool kbookmarkdialog_accept_isbase = false;
    mutable bool kbookmarkdialog_setvisible_isbase = false;
    mutable bool kbookmarkdialog_sizehint_isbase = false;
    mutable bool kbookmarkdialog_minimumsizehint_isbase = false;
    mutable bool kbookmarkdialog_open_isbase = false;
    mutable bool kbookmarkdialog_exec_isbase = false;
    mutable bool kbookmarkdialog_done_isbase = false;
    mutable bool kbookmarkdialog_reject_isbase = false;
    mutable bool kbookmarkdialog_keypressevent_isbase = false;
    mutable bool kbookmarkdialog_closeevent_isbase = false;
    mutable bool kbookmarkdialog_showevent_isbase = false;
    mutable bool kbookmarkdialog_resizeevent_isbase = false;
    mutable bool kbookmarkdialog_contextmenuevent_isbase = false;
    mutable bool kbookmarkdialog_eventfilter_isbase = false;
    mutable bool kbookmarkdialog_devtype_isbase = false;
    mutable bool kbookmarkdialog_heightforwidth_isbase = false;
    mutable bool kbookmarkdialog_hasheightforwidth_isbase = false;
    mutable bool kbookmarkdialog_paintengine_isbase = false;
    mutable bool kbookmarkdialog_event_isbase = false;
    mutable bool kbookmarkdialog_mousepressevent_isbase = false;
    mutable bool kbookmarkdialog_mousereleaseevent_isbase = false;
    mutable bool kbookmarkdialog_mousedoubleclickevent_isbase = false;
    mutable bool kbookmarkdialog_mousemoveevent_isbase = false;
    mutable bool kbookmarkdialog_wheelevent_isbase = false;
    mutable bool kbookmarkdialog_keyreleaseevent_isbase = false;
    mutable bool kbookmarkdialog_focusinevent_isbase = false;
    mutable bool kbookmarkdialog_focusoutevent_isbase = false;
    mutable bool kbookmarkdialog_enterevent_isbase = false;
    mutable bool kbookmarkdialog_leaveevent_isbase = false;
    mutable bool kbookmarkdialog_paintevent_isbase = false;
    mutable bool kbookmarkdialog_moveevent_isbase = false;
    mutable bool kbookmarkdialog_tabletevent_isbase = false;
    mutable bool kbookmarkdialog_actionevent_isbase = false;
    mutable bool kbookmarkdialog_dragenterevent_isbase = false;
    mutable bool kbookmarkdialog_dragmoveevent_isbase = false;
    mutable bool kbookmarkdialog_dragleaveevent_isbase = false;
    mutable bool kbookmarkdialog_dropevent_isbase = false;
    mutable bool kbookmarkdialog_hideevent_isbase = false;
    mutable bool kbookmarkdialog_nativeevent_isbase = false;
    mutable bool kbookmarkdialog_changeevent_isbase = false;
    mutable bool kbookmarkdialog_metric_isbase = false;
    mutable bool kbookmarkdialog_initpainter_isbase = false;
    mutable bool kbookmarkdialog_redirected_isbase = false;
    mutable bool kbookmarkdialog_sharedpainter_isbase = false;
    mutable bool kbookmarkdialog_inputmethodevent_isbase = false;
    mutable bool kbookmarkdialog_inputmethodquery_isbase = false;
    mutable bool kbookmarkdialog_focusnextprevchild_isbase = false;
    mutable bool kbookmarkdialog_timerevent_isbase = false;
    mutable bool kbookmarkdialog_childevent_isbase = false;
    mutable bool kbookmarkdialog_customevent_isbase = false;
    mutable bool kbookmarkdialog_connectnotify_isbase = false;
    mutable bool kbookmarkdialog_disconnectnotify_isbase = false;
    mutable bool kbookmarkdialog_newfolderbutton_isbase = false;
    mutable bool kbookmarkdialog_adjustposition_isbase = false;
    mutable bool kbookmarkdialog_updatemicrofocus_isbase = false;
    mutable bool kbookmarkdialog_create_isbase = false;
    mutable bool kbookmarkdialog_destroy_isbase = false;
    mutable bool kbookmarkdialog_focusnextchild_isbase = false;
    mutable bool kbookmarkdialog_focuspreviouschild_isbase = false;
    mutable bool kbookmarkdialog_sender_isbase = false;
    mutable bool kbookmarkdialog_sendersignalindex_isbase = false;
    mutable bool kbookmarkdialog_receivers_isbase = false;
    mutable bool kbookmarkdialog_issignalconnected_isbase = false;
    mutable bool kbookmarkdialog_getdecodedmetricf_isbase = false;

  public:
    VirtualKBookmarkDialog(KBookmarkManager* manager) : KBookmarkDialog(manager) {};
    VirtualKBookmarkDialog(KBookmarkManager* manager, QWidget* parent) : KBookmarkDialog(manager, parent) {};

    ~VirtualKBookmarkDialog() {
        kbookmarkdialog_metacall_callback = nullptr;
        kbookmarkdialog_accept_callback = nullptr;
        kbookmarkdialog_setvisible_callback = nullptr;
        kbookmarkdialog_sizehint_callback = nullptr;
        kbookmarkdialog_minimumsizehint_callback = nullptr;
        kbookmarkdialog_open_callback = nullptr;
        kbookmarkdialog_exec_callback = nullptr;
        kbookmarkdialog_done_callback = nullptr;
        kbookmarkdialog_reject_callback = nullptr;
        kbookmarkdialog_keypressevent_callback = nullptr;
        kbookmarkdialog_closeevent_callback = nullptr;
        kbookmarkdialog_showevent_callback = nullptr;
        kbookmarkdialog_resizeevent_callback = nullptr;
        kbookmarkdialog_contextmenuevent_callback = nullptr;
        kbookmarkdialog_eventfilter_callback = nullptr;
        kbookmarkdialog_devtype_callback = nullptr;
        kbookmarkdialog_heightforwidth_callback = nullptr;
        kbookmarkdialog_hasheightforwidth_callback = nullptr;
        kbookmarkdialog_paintengine_callback = nullptr;
        kbookmarkdialog_event_callback = nullptr;
        kbookmarkdialog_mousepressevent_callback = nullptr;
        kbookmarkdialog_mousereleaseevent_callback = nullptr;
        kbookmarkdialog_mousedoubleclickevent_callback = nullptr;
        kbookmarkdialog_mousemoveevent_callback = nullptr;
        kbookmarkdialog_wheelevent_callback = nullptr;
        kbookmarkdialog_keyreleaseevent_callback = nullptr;
        kbookmarkdialog_focusinevent_callback = nullptr;
        kbookmarkdialog_focusoutevent_callback = nullptr;
        kbookmarkdialog_enterevent_callback = nullptr;
        kbookmarkdialog_leaveevent_callback = nullptr;
        kbookmarkdialog_paintevent_callback = nullptr;
        kbookmarkdialog_moveevent_callback = nullptr;
        kbookmarkdialog_tabletevent_callback = nullptr;
        kbookmarkdialog_actionevent_callback = nullptr;
        kbookmarkdialog_dragenterevent_callback = nullptr;
        kbookmarkdialog_dragmoveevent_callback = nullptr;
        kbookmarkdialog_dragleaveevent_callback = nullptr;
        kbookmarkdialog_dropevent_callback = nullptr;
        kbookmarkdialog_hideevent_callback = nullptr;
        kbookmarkdialog_nativeevent_callback = nullptr;
        kbookmarkdialog_changeevent_callback = nullptr;
        kbookmarkdialog_metric_callback = nullptr;
        kbookmarkdialog_initpainter_callback = nullptr;
        kbookmarkdialog_redirected_callback = nullptr;
        kbookmarkdialog_sharedpainter_callback = nullptr;
        kbookmarkdialog_inputmethodevent_callback = nullptr;
        kbookmarkdialog_inputmethodquery_callback = nullptr;
        kbookmarkdialog_focusnextprevchild_callback = nullptr;
        kbookmarkdialog_timerevent_callback = nullptr;
        kbookmarkdialog_childevent_callback = nullptr;
        kbookmarkdialog_customevent_callback = nullptr;
        kbookmarkdialog_connectnotify_callback = nullptr;
        kbookmarkdialog_disconnectnotify_callback = nullptr;
        kbookmarkdialog_newfolderbutton_callback = nullptr;
        kbookmarkdialog_adjustposition_callback = nullptr;
        kbookmarkdialog_updatemicrofocus_callback = nullptr;
        kbookmarkdialog_create_callback = nullptr;
        kbookmarkdialog_destroy_callback = nullptr;
        kbookmarkdialog_focusnextchild_callback = nullptr;
        kbookmarkdialog_focuspreviouschild_callback = nullptr;
        kbookmarkdialog_sender_callback = nullptr;
        kbookmarkdialog_sendersignalindex_callback = nullptr;
        kbookmarkdialog_receivers_callback = nullptr;
        kbookmarkdialog_issignalconnected_callback = nullptr;
        kbookmarkdialog_getdecodedmetricf_callback = nullptr;
    }

    // Callback setters
    inline void setKBookmarkDialog_Metacall_Callback(KBookmarkDialog_Metacall_Callback cb) { kbookmarkdialog_metacall_callback = cb; }
    inline void setKBookmarkDialog_Accept_Callback(KBookmarkDialog_Accept_Callback cb) { kbookmarkdialog_accept_callback = cb; }
    inline void setKBookmarkDialog_SetVisible_Callback(KBookmarkDialog_SetVisible_Callback cb) { kbookmarkdialog_setvisible_callback = cb; }
    inline void setKBookmarkDialog_SizeHint_Callback(KBookmarkDialog_SizeHint_Callback cb) { kbookmarkdialog_sizehint_callback = cb; }
    inline void setKBookmarkDialog_MinimumSizeHint_Callback(KBookmarkDialog_MinimumSizeHint_Callback cb) { kbookmarkdialog_minimumsizehint_callback = cb; }
    inline void setKBookmarkDialog_Open_Callback(KBookmarkDialog_Open_Callback cb) { kbookmarkdialog_open_callback = cb; }
    inline void setKBookmarkDialog_Exec_Callback(KBookmarkDialog_Exec_Callback cb) { kbookmarkdialog_exec_callback = cb; }
    inline void setKBookmarkDialog_Done_Callback(KBookmarkDialog_Done_Callback cb) { kbookmarkdialog_done_callback = cb; }
    inline void setKBookmarkDialog_Reject_Callback(KBookmarkDialog_Reject_Callback cb) { kbookmarkdialog_reject_callback = cb; }
    inline void setKBookmarkDialog_KeyPressEvent_Callback(KBookmarkDialog_KeyPressEvent_Callback cb) { kbookmarkdialog_keypressevent_callback = cb; }
    inline void setKBookmarkDialog_CloseEvent_Callback(KBookmarkDialog_CloseEvent_Callback cb) { kbookmarkdialog_closeevent_callback = cb; }
    inline void setKBookmarkDialog_ShowEvent_Callback(KBookmarkDialog_ShowEvent_Callback cb) { kbookmarkdialog_showevent_callback = cb; }
    inline void setKBookmarkDialog_ResizeEvent_Callback(KBookmarkDialog_ResizeEvent_Callback cb) { kbookmarkdialog_resizeevent_callback = cb; }
    inline void setKBookmarkDialog_ContextMenuEvent_Callback(KBookmarkDialog_ContextMenuEvent_Callback cb) { kbookmarkdialog_contextmenuevent_callback = cb; }
    inline void setKBookmarkDialog_EventFilter_Callback(KBookmarkDialog_EventFilter_Callback cb) { kbookmarkdialog_eventfilter_callback = cb; }
    inline void setKBookmarkDialog_DevType_Callback(KBookmarkDialog_DevType_Callback cb) { kbookmarkdialog_devtype_callback = cb; }
    inline void setKBookmarkDialog_HeightForWidth_Callback(KBookmarkDialog_HeightForWidth_Callback cb) { kbookmarkdialog_heightforwidth_callback = cb; }
    inline void setKBookmarkDialog_HasHeightForWidth_Callback(KBookmarkDialog_HasHeightForWidth_Callback cb) { kbookmarkdialog_hasheightforwidth_callback = cb; }
    inline void setKBookmarkDialog_PaintEngine_Callback(KBookmarkDialog_PaintEngine_Callback cb) { kbookmarkdialog_paintengine_callback = cb; }
    inline void setKBookmarkDialog_Event_Callback(KBookmarkDialog_Event_Callback cb) { kbookmarkdialog_event_callback = cb; }
    inline void setKBookmarkDialog_MousePressEvent_Callback(KBookmarkDialog_MousePressEvent_Callback cb) { kbookmarkdialog_mousepressevent_callback = cb; }
    inline void setKBookmarkDialog_MouseReleaseEvent_Callback(KBookmarkDialog_MouseReleaseEvent_Callback cb) { kbookmarkdialog_mousereleaseevent_callback = cb; }
    inline void setKBookmarkDialog_MouseDoubleClickEvent_Callback(KBookmarkDialog_MouseDoubleClickEvent_Callback cb) { kbookmarkdialog_mousedoubleclickevent_callback = cb; }
    inline void setKBookmarkDialog_MouseMoveEvent_Callback(KBookmarkDialog_MouseMoveEvent_Callback cb) { kbookmarkdialog_mousemoveevent_callback = cb; }
    inline void setKBookmarkDialog_WheelEvent_Callback(KBookmarkDialog_WheelEvent_Callback cb) { kbookmarkdialog_wheelevent_callback = cb; }
    inline void setKBookmarkDialog_KeyReleaseEvent_Callback(KBookmarkDialog_KeyReleaseEvent_Callback cb) { kbookmarkdialog_keyreleaseevent_callback = cb; }
    inline void setKBookmarkDialog_FocusInEvent_Callback(KBookmarkDialog_FocusInEvent_Callback cb) { kbookmarkdialog_focusinevent_callback = cb; }
    inline void setKBookmarkDialog_FocusOutEvent_Callback(KBookmarkDialog_FocusOutEvent_Callback cb) { kbookmarkdialog_focusoutevent_callback = cb; }
    inline void setKBookmarkDialog_EnterEvent_Callback(KBookmarkDialog_EnterEvent_Callback cb) { kbookmarkdialog_enterevent_callback = cb; }
    inline void setKBookmarkDialog_LeaveEvent_Callback(KBookmarkDialog_LeaveEvent_Callback cb) { kbookmarkdialog_leaveevent_callback = cb; }
    inline void setKBookmarkDialog_PaintEvent_Callback(KBookmarkDialog_PaintEvent_Callback cb) { kbookmarkdialog_paintevent_callback = cb; }
    inline void setKBookmarkDialog_MoveEvent_Callback(KBookmarkDialog_MoveEvent_Callback cb) { kbookmarkdialog_moveevent_callback = cb; }
    inline void setKBookmarkDialog_TabletEvent_Callback(KBookmarkDialog_TabletEvent_Callback cb) { kbookmarkdialog_tabletevent_callback = cb; }
    inline void setKBookmarkDialog_ActionEvent_Callback(KBookmarkDialog_ActionEvent_Callback cb) { kbookmarkdialog_actionevent_callback = cb; }
    inline void setKBookmarkDialog_DragEnterEvent_Callback(KBookmarkDialog_DragEnterEvent_Callback cb) { kbookmarkdialog_dragenterevent_callback = cb; }
    inline void setKBookmarkDialog_DragMoveEvent_Callback(KBookmarkDialog_DragMoveEvent_Callback cb) { kbookmarkdialog_dragmoveevent_callback = cb; }
    inline void setKBookmarkDialog_DragLeaveEvent_Callback(KBookmarkDialog_DragLeaveEvent_Callback cb) { kbookmarkdialog_dragleaveevent_callback = cb; }
    inline void setKBookmarkDialog_DropEvent_Callback(KBookmarkDialog_DropEvent_Callback cb) { kbookmarkdialog_dropevent_callback = cb; }
    inline void setKBookmarkDialog_HideEvent_Callback(KBookmarkDialog_HideEvent_Callback cb) { kbookmarkdialog_hideevent_callback = cb; }
    inline void setKBookmarkDialog_NativeEvent_Callback(KBookmarkDialog_NativeEvent_Callback cb) { kbookmarkdialog_nativeevent_callback = cb; }
    inline void setKBookmarkDialog_ChangeEvent_Callback(KBookmarkDialog_ChangeEvent_Callback cb) { kbookmarkdialog_changeevent_callback = cb; }
    inline void setKBookmarkDialog_Metric_Callback(KBookmarkDialog_Metric_Callback cb) { kbookmarkdialog_metric_callback = cb; }
    inline void setKBookmarkDialog_InitPainter_Callback(KBookmarkDialog_InitPainter_Callback cb) { kbookmarkdialog_initpainter_callback = cb; }
    inline void setKBookmarkDialog_Redirected_Callback(KBookmarkDialog_Redirected_Callback cb) { kbookmarkdialog_redirected_callback = cb; }
    inline void setKBookmarkDialog_SharedPainter_Callback(KBookmarkDialog_SharedPainter_Callback cb) { kbookmarkdialog_sharedpainter_callback = cb; }
    inline void setKBookmarkDialog_InputMethodEvent_Callback(KBookmarkDialog_InputMethodEvent_Callback cb) { kbookmarkdialog_inputmethodevent_callback = cb; }
    inline void setKBookmarkDialog_InputMethodQuery_Callback(KBookmarkDialog_InputMethodQuery_Callback cb) { kbookmarkdialog_inputmethodquery_callback = cb; }
    inline void setKBookmarkDialog_FocusNextPrevChild_Callback(KBookmarkDialog_FocusNextPrevChild_Callback cb) { kbookmarkdialog_focusnextprevchild_callback = cb; }
    inline void setKBookmarkDialog_TimerEvent_Callback(KBookmarkDialog_TimerEvent_Callback cb) { kbookmarkdialog_timerevent_callback = cb; }
    inline void setKBookmarkDialog_ChildEvent_Callback(KBookmarkDialog_ChildEvent_Callback cb) { kbookmarkdialog_childevent_callback = cb; }
    inline void setKBookmarkDialog_CustomEvent_Callback(KBookmarkDialog_CustomEvent_Callback cb) { kbookmarkdialog_customevent_callback = cb; }
    inline void setKBookmarkDialog_ConnectNotify_Callback(KBookmarkDialog_ConnectNotify_Callback cb) { kbookmarkdialog_connectnotify_callback = cb; }
    inline void setKBookmarkDialog_DisconnectNotify_Callback(KBookmarkDialog_DisconnectNotify_Callback cb) { kbookmarkdialog_disconnectnotify_callback = cb; }
    inline void setKBookmarkDialog_NewFolderButton_Callback(KBookmarkDialog_NewFolderButton_Callback cb) { kbookmarkdialog_newfolderbutton_callback = cb; }
    inline void setKBookmarkDialog_AdjustPosition_Callback(KBookmarkDialog_AdjustPosition_Callback cb) { kbookmarkdialog_adjustposition_callback = cb; }
    inline void setKBookmarkDialog_UpdateMicroFocus_Callback(KBookmarkDialog_UpdateMicroFocus_Callback cb) { kbookmarkdialog_updatemicrofocus_callback = cb; }
    inline void setKBookmarkDialog_Create_Callback(KBookmarkDialog_Create_Callback cb) { kbookmarkdialog_create_callback = cb; }
    inline void setKBookmarkDialog_Destroy_Callback(KBookmarkDialog_Destroy_Callback cb) { kbookmarkdialog_destroy_callback = cb; }
    inline void setKBookmarkDialog_FocusNextChild_Callback(KBookmarkDialog_FocusNextChild_Callback cb) { kbookmarkdialog_focusnextchild_callback = cb; }
    inline void setKBookmarkDialog_FocusPreviousChild_Callback(KBookmarkDialog_FocusPreviousChild_Callback cb) { kbookmarkdialog_focuspreviouschild_callback = cb; }
    inline void setKBookmarkDialog_Sender_Callback(KBookmarkDialog_Sender_Callback cb) { kbookmarkdialog_sender_callback = cb; }
    inline void setKBookmarkDialog_SenderSignalIndex_Callback(KBookmarkDialog_SenderSignalIndex_Callback cb) { kbookmarkdialog_sendersignalindex_callback = cb; }
    inline void setKBookmarkDialog_Receivers_Callback(KBookmarkDialog_Receivers_Callback cb) { kbookmarkdialog_receivers_callback = cb; }
    inline void setKBookmarkDialog_IsSignalConnected_Callback(KBookmarkDialog_IsSignalConnected_Callback cb) { kbookmarkdialog_issignalconnected_callback = cb; }
    inline void setKBookmarkDialog_GetDecodedMetricF_Callback(KBookmarkDialog_GetDecodedMetricF_Callback cb) { kbookmarkdialog_getdecodedmetricf_callback = cb; }

    // Base flag setters
    inline void setKBookmarkDialog_Metacall_IsBase(bool value) const { kbookmarkdialog_metacall_isbase = value; }
    inline void setKBookmarkDialog_Accept_IsBase(bool value) const { kbookmarkdialog_accept_isbase = value; }
    inline void setKBookmarkDialog_SetVisible_IsBase(bool value) const { kbookmarkdialog_setvisible_isbase = value; }
    inline void setKBookmarkDialog_SizeHint_IsBase(bool value) const { kbookmarkdialog_sizehint_isbase = value; }
    inline void setKBookmarkDialog_MinimumSizeHint_IsBase(bool value) const { kbookmarkdialog_minimumsizehint_isbase = value; }
    inline void setKBookmarkDialog_Open_IsBase(bool value) const { kbookmarkdialog_open_isbase = value; }
    inline void setKBookmarkDialog_Exec_IsBase(bool value) const { kbookmarkdialog_exec_isbase = value; }
    inline void setKBookmarkDialog_Done_IsBase(bool value) const { kbookmarkdialog_done_isbase = value; }
    inline void setKBookmarkDialog_Reject_IsBase(bool value) const { kbookmarkdialog_reject_isbase = value; }
    inline void setKBookmarkDialog_KeyPressEvent_IsBase(bool value) const { kbookmarkdialog_keypressevent_isbase = value; }
    inline void setKBookmarkDialog_CloseEvent_IsBase(bool value) const { kbookmarkdialog_closeevent_isbase = value; }
    inline void setKBookmarkDialog_ShowEvent_IsBase(bool value) const { kbookmarkdialog_showevent_isbase = value; }
    inline void setKBookmarkDialog_ResizeEvent_IsBase(bool value) const { kbookmarkdialog_resizeevent_isbase = value; }
    inline void setKBookmarkDialog_ContextMenuEvent_IsBase(bool value) const { kbookmarkdialog_contextmenuevent_isbase = value; }
    inline void setKBookmarkDialog_EventFilter_IsBase(bool value) const { kbookmarkdialog_eventfilter_isbase = value; }
    inline void setKBookmarkDialog_DevType_IsBase(bool value) const { kbookmarkdialog_devtype_isbase = value; }
    inline void setKBookmarkDialog_HeightForWidth_IsBase(bool value) const { kbookmarkdialog_heightforwidth_isbase = value; }
    inline void setKBookmarkDialog_HasHeightForWidth_IsBase(bool value) const { kbookmarkdialog_hasheightforwidth_isbase = value; }
    inline void setKBookmarkDialog_PaintEngine_IsBase(bool value) const { kbookmarkdialog_paintengine_isbase = value; }
    inline void setKBookmarkDialog_Event_IsBase(bool value) const { kbookmarkdialog_event_isbase = value; }
    inline void setKBookmarkDialog_MousePressEvent_IsBase(bool value) const { kbookmarkdialog_mousepressevent_isbase = value; }
    inline void setKBookmarkDialog_MouseReleaseEvent_IsBase(bool value) const { kbookmarkdialog_mousereleaseevent_isbase = value; }
    inline void setKBookmarkDialog_MouseDoubleClickEvent_IsBase(bool value) const { kbookmarkdialog_mousedoubleclickevent_isbase = value; }
    inline void setKBookmarkDialog_MouseMoveEvent_IsBase(bool value) const { kbookmarkdialog_mousemoveevent_isbase = value; }
    inline void setKBookmarkDialog_WheelEvent_IsBase(bool value) const { kbookmarkdialog_wheelevent_isbase = value; }
    inline void setKBookmarkDialog_KeyReleaseEvent_IsBase(bool value) const { kbookmarkdialog_keyreleaseevent_isbase = value; }
    inline void setKBookmarkDialog_FocusInEvent_IsBase(bool value) const { kbookmarkdialog_focusinevent_isbase = value; }
    inline void setKBookmarkDialog_FocusOutEvent_IsBase(bool value) const { kbookmarkdialog_focusoutevent_isbase = value; }
    inline void setKBookmarkDialog_EnterEvent_IsBase(bool value) const { kbookmarkdialog_enterevent_isbase = value; }
    inline void setKBookmarkDialog_LeaveEvent_IsBase(bool value) const { kbookmarkdialog_leaveevent_isbase = value; }
    inline void setKBookmarkDialog_PaintEvent_IsBase(bool value) const { kbookmarkdialog_paintevent_isbase = value; }
    inline void setKBookmarkDialog_MoveEvent_IsBase(bool value) const { kbookmarkdialog_moveevent_isbase = value; }
    inline void setKBookmarkDialog_TabletEvent_IsBase(bool value) const { kbookmarkdialog_tabletevent_isbase = value; }
    inline void setKBookmarkDialog_ActionEvent_IsBase(bool value) const { kbookmarkdialog_actionevent_isbase = value; }
    inline void setKBookmarkDialog_DragEnterEvent_IsBase(bool value) const { kbookmarkdialog_dragenterevent_isbase = value; }
    inline void setKBookmarkDialog_DragMoveEvent_IsBase(bool value) const { kbookmarkdialog_dragmoveevent_isbase = value; }
    inline void setKBookmarkDialog_DragLeaveEvent_IsBase(bool value) const { kbookmarkdialog_dragleaveevent_isbase = value; }
    inline void setKBookmarkDialog_DropEvent_IsBase(bool value) const { kbookmarkdialog_dropevent_isbase = value; }
    inline void setKBookmarkDialog_HideEvent_IsBase(bool value) const { kbookmarkdialog_hideevent_isbase = value; }
    inline void setKBookmarkDialog_NativeEvent_IsBase(bool value) const { kbookmarkdialog_nativeevent_isbase = value; }
    inline void setKBookmarkDialog_ChangeEvent_IsBase(bool value) const { kbookmarkdialog_changeevent_isbase = value; }
    inline void setKBookmarkDialog_Metric_IsBase(bool value) const { kbookmarkdialog_metric_isbase = value; }
    inline void setKBookmarkDialog_InitPainter_IsBase(bool value) const { kbookmarkdialog_initpainter_isbase = value; }
    inline void setKBookmarkDialog_Redirected_IsBase(bool value) const { kbookmarkdialog_redirected_isbase = value; }
    inline void setKBookmarkDialog_SharedPainter_IsBase(bool value) const { kbookmarkdialog_sharedpainter_isbase = value; }
    inline void setKBookmarkDialog_InputMethodEvent_IsBase(bool value) const { kbookmarkdialog_inputmethodevent_isbase = value; }
    inline void setKBookmarkDialog_InputMethodQuery_IsBase(bool value) const { kbookmarkdialog_inputmethodquery_isbase = value; }
    inline void setKBookmarkDialog_FocusNextPrevChild_IsBase(bool value) const { kbookmarkdialog_focusnextprevchild_isbase = value; }
    inline void setKBookmarkDialog_TimerEvent_IsBase(bool value) const { kbookmarkdialog_timerevent_isbase = value; }
    inline void setKBookmarkDialog_ChildEvent_IsBase(bool value) const { kbookmarkdialog_childevent_isbase = value; }
    inline void setKBookmarkDialog_CustomEvent_IsBase(bool value) const { kbookmarkdialog_customevent_isbase = value; }
    inline void setKBookmarkDialog_ConnectNotify_IsBase(bool value) const { kbookmarkdialog_connectnotify_isbase = value; }
    inline void setKBookmarkDialog_DisconnectNotify_IsBase(bool value) const { kbookmarkdialog_disconnectnotify_isbase = value; }
    inline void setKBookmarkDialog_NewFolderButton_IsBase(bool value) const { kbookmarkdialog_newfolderbutton_isbase = value; }
    inline void setKBookmarkDialog_AdjustPosition_IsBase(bool value) const { kbookmarkdialog_adjustposition_isbase = value; }
    inline void setKBookmarkDialog_UpdateMicroFocus_IsBase(bool value) const { kbookmarkdialog_updatemicrofocus_isbase = value; }
    inline void setKBookmarkDialog_Create_IsBase(bool value) const { kbookmarkdialog_create_isbase = value; }
    inline void setKBookmarkDialog_Destroy_IsBase(bool value) const { kbookmarkdialog_destroy_isbase = value; }
    inline void setKBookmarkDialog_FocusNextChild_IsBase(bool value) const { kbookmarkdialog_focusnextchild_isbase = value; }
    inline void setKBookmarkDialog_FocusPreviousChild_IsBase(bool value) const { kbookmarkdialog_focuspreviouschild_isbase = value; }
    inline void setKBookmarkDialog_Sender_IsBase(bool value) const { kbookmarkdialog_sender_isbase = value; }
    inline void setKBookmarkDialog_SenderSignalIndex_IsBase(bool value) const { kbookmarkdialog_sendersignalindex_isbase = value; }
    inline void setKBookmarkDialog_Receivers_IsBase(bool value) const { kbookmarkdialog_receivers_isbase = value; }
    inline void setKBookmarkDialog_IsSignalConnected_IsBase(bool value) const { kbookmarkdialog_issignalconnected_isbase = value; }
    inline void setKBookmarkDialog_GetDecodedMetricF_IsBase(bool value) const { kbookmarkdialog_getdecodedmetricf_isbase = value; }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (kbookmarkdialog_metacall_isbase) {
            kbookmarkdialog_metacall_isbase = false;
            return KBookmarkDialog::qt_metacall(param1, param2, param3);
        } else if (kbookmarkdialog_metacall_callback != nullptr) {
            int cbval1 = static_cast<int>(param1);
            int cbval2 = param2;
            void** cbval3 = param3;

            int callback_ret = kbookmarkdialog_metacall_callback(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        } else {
            return KBookmarkDialog::qt_metacall(param1, param2, param3);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void accept() override {
        if (kbookmarkdialog_accept_isbase) {
            kbookmarkdialog_accept_isbase = false;
            KBookmarkDialog::accept();
        } else if (kbookmarkdialog_accept_callback != nullptr) {
            kbookmarkdialog_accept_callback();
        } else {
            KBookmarkDialog::accept();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void setVisible(bool visible) override {
        if (kbookmarkdialog_setvisible_isbase) {
            kbookmarkdialog_setvisible_isbase = false;
            KBookmarkDialog::setVisible(visible);
        } else if (kbookmarkdialog_setvisible_callback != nullptr) {
            bool cbval1 = visible;

            kbookmarkdialog_setvisible_callback(this, cbval1);
        } else {
            KBookmarkDialog::setVisible(visible);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QSize sizeHint() const override {
        if (kbookmarkdialog_sizehint_isbase) {
            kbookmarkdialog_sizehint_isbase = false;
            return KBookmarkDialog::sizeHint();
        } else if (kbookmarkdialog_sizehint_callback != nullptr) {
            QSize* callback_ret = kbookmarkdialog_sizehint_callback();
            return *callback_ret;
        } else {
            return KBookmarkDialog::sizeHint();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QSize minimumSizeHint() const override {
        if (kbookmarkdialog_minimumsizehint_isbase) {
            kbookmarkdialog_minimumsizehint_isbase = false;
            return KBookmarkDialog::minimumSizeHint();
        } else if (kbookmarkdialog_minimumsizehint_callback != nullptr) {
            QSize* callback_ret = kbookmarkdialog_minimumsizehint_callback();
            return *callback_ret;
        } else {
            return KBookmarkDialog::minimumSizeHint();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void open() override {
        if (kbookmarkdialog_open_isbase) {
            kbookmarkdialog_open_isbase = false;
            KBookmarkDialog::open();
        } else if (kbookmarkdialog_open_callback != nullptr) {
            kbookmarkdialog_open_callback();
        } else {
            KBookmarkDialog::open();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual int exec() override {
        if (kbookmarkdialog_exec_isbase) {
            kbookmarkdialog_exec_isbase = false;
            return KBookmarkDialog::exec();
        } else if (kbookmarkdialog_exec_callback != nullptr) {
            int callback_ret = kbookmarkdialog_exec_callback();
            return static_cast<int>(callback_ret);
        } else {
            return KBookmarkDialog::exec();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void done(int param1) override {
        if (kbookmarkdialog_done_isbase) {
            kbookmarkdialog_done_isbase = false;
            KBookmarkDialog::done(param1);
        } else if (kbookmarkdialog_done_callback != nullptr) {
            int cbval1 = param1;

            kbookmarkdialog_done_callback(this, cbval1);
        } else {
            KBookmarkDialog::done(param1);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void reject() override {
        if (kbookmarkdialog_reject_isbase) {
            kbookmarkdialog_reject_isbase = false;
            KBookmarkDialog::reject();
        } else if (kbookmarkdialog_reject_callback != nullptr) {
            kbookmarkdialog_reject_callback();
        } else {
            KBookmarkDialog::reject();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void keyPressEvent(QKeyEvent* param1) override {
        if (kbookmarkdialog_keypressevent_isbase) {
            kbookmarkdialog_keypressevent_isbase = false;
            KBookmarkDialog::keyPressEvent(param1);
        } else if (kbookmarkdialog_keypressevent_callback != nullptr) {
            QKeyEvent* cbval1 = param1;

            kbookmarkdialog_keypressevent_callback(this, cbval1);
        } else {
            KBookmarkDialog::keyPressEvent(param1);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void closeEvent(QCloseEvent* param1) override {
        if (kbookmarkdialog_closeevent_isbase) {
            kbookmarkdialog_closeevent_isbase = false;
            KBookmarkDialog::closeEvent(param1);
        } else if (kbookmarkdialog_closeevent_callback != nullptr) {
            QCloseEvent* cbval1 = param1;

            kbookmarkdialog_closeevent_callback(this, cbval1);
        } else {
            KBookmarkDialog::closeEvent(param1);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void showEvent(QShowEvent* param1) override {
        if (kbookmarkdialog_showevent_isbase) {
            kbookmarkdialog_showevent_isbase = false;
            KBookmarkDialog::showEvent(param1);
        } else if (kbookmarkdialog_showevent_callback != nullptr) {
            QShowEvent* cbval1 = param1;

            kbookmarkdialog_showevent_callback(this, cbval1);
        } else {
            KBookmarkDialog::showEvent(param1);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void resizeEvent(QResizeEvent* param1) override {
        if (kbookmarkdialog_resizeevent_isbase) {
            kbookmarkdialog_resizeevent_isbase = false;
            KBookmarkDialog::resizeEvent(param1);
        } else if (kbookmarkdialog_resizeevent_callback != nullptr) {
            QResizeEvent* cbval1 = param1;

            kbookmarkdialog_resizeevent_callback(this, cbval1);
        } else {
            KBookmarkDialog::resizeEvent(param1);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void contextMenuEvent(QContextMenuEvent* param1) override {
        if (kbookmarkdialog_contextmenuevent_isbase) {
            kbookmarkdialog_contextmenuevent_isbase = false;
            KBookmarkDialog::contextMenuEvent(param1);
        } else if (kbookmarkdialog_contextmenuevent_callback != nullptr) {
            QContextMenuEvent* cbval1 = param1;

            kbookmarkdialog_contextmenuevent_callback(this, cbval1);
        } else {
            KBookmarkDialog::contextMenuEvent(param1);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* param1, QEvent* param2) override {
        if (kbookmarkdialog_eventfilter_isbase) {
            kbookmarkdialog_eventfilter_isbase = false;
            return KBookmarkDialog::eventFilter(param1, param2);
        } else if (kbookmarkdialog_eventfilter_callback != nullptr) {
            QObject* cbval1 = param1;
            QEvent* cbval2 = param2;

            bool callback_ret = kbookmarkdialog_eventfilter_callback(this, cbval1, cbval2);
            return callback_ret;
        } else {
            return KBookmarkDialog::eventFilter(param1, param2);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual int devType() const override {
        if (kbookmarkdialog_devtype_isbase) {
            kbookmarkdialog_devtype_isbase = false;
            return KBookmarkDialog::devType();
        } else if (kbookmarkdialog_devtype_callback != nullptr) {
            int callback_ret = kbookmarkdialog_devtype_callback();
            return static_cast<int>(callback_ret);
        } else {
            return KBookmarkDialog::devType();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual int heightForWidth(int param1) const override {
        if (kbookmarkdialog_heightforwidth_isbase) {
            kbookmarkdialog_heightforwidth_isbase = false;
            return KBookmarkDialog::heightForWidth(param1);
        } else if (kbookmarkdialog_heightforwidth_callback != nullptr) {
            int cbval1 = param1;

            int callback_ret = kbookmarkdialog_heightforwidth_callback(this, cbval1);
            return static_cast<int>(callback_ret);
        } else {
            return KBookmarkDialog::heightForWidth(param1);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool hasHeightForWidth() const override {
        if (kbookmarkdialog_hasheightforwidth_isbase) {
            kbookmarkdialog_hasheightforwidth_isbase = false;
            return KBookmarkDialog::hasHeightForWidth();
        } else if (kbookmarkdialog_hasheightforwidth_callback != nullptr) {
            bool callback_ret = kbookmarkdialog_hasheightforwidth_callback();
            return callback_ret;
        } else {
            return KBookmarkDialog::hasHeightForWidth();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QPaintEngine* paintEngine() const override {
        if (kbookmarkdialog_paintengine_isbase) {
            kbookmarkdialog_paintengine_isbase = false;
            return KBookmarkDialog::paintEngine();
        } else if (kbookmarkdialog_paintengine_callback != nullptr) {
            QPaintEngine* callback_ret = kbookmarkdialog_paintengine_callback();
            return callback_ret;
        } else {
            return KBookmarkDialog::paintEngine();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* event) override {
        if (kbookmarkdialog_event_isbase) {
            kbookmarkdialog_event_isbase = false;
            return KBookmarkDialog::event(event);
        } else if (kbookmarkdialog_event_callback != nullptr) {
            QEvent* cbval1 = event;

            bool callback_ret = kbookmarkdialog_event_callback(this, cbval1);
            return callback_ret;
        } else {
            return KBookmarkDialog::event(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void mousePressEvent(QMouseEvent* event) override {
        if (kbookmarkdialog_mousepressevent_isbase) {
            kbookmarkdialog_mousepressevent_isbase = false;
            KBookmarkDialog::mousePressEvent(event);
        } else if (kbookmarkdialog_mousepressevent_callback != nullptr) {
            QMouseEvent* cbval1 = event;

            kbookmarkdialog_mousepressevent_callback(this, cbval1);
        } else {
            KBookmarkDialog::mousePressEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseReleaseEvent(QMouseEvent* event) override {
        if (kbookmarkdialog_mousereleaseevent_isbase) {
            kbookmarkdialog_mousereleaseevent_isbase = false;
            KBookmarkDialog::mouseReleaseEvent(event);
        } else if (kbookmarkdialog_mousereleaseevent_callback != nullptr) {
            QMouseEvent* cbval1 = event;

            kbookmarkdialog_mousereleaseevent_callback(this, cbval1);
        } else {
            KBookmarkDialog::mouseReleaseEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseDoubleClickEvent(QMouseEvent* event) override {
        if (kbookmarkdialog_mousedoubleclickevent_isbase) {
            kbookmarkdialog_mousedoubleclickevent_isbase = false;
            KBookmarkDialog::mouseDoubleClickEvent(event);
        } else if (kbookmarkdialog_mousedoubleclickevent_callback != nullptr) {
            QMouseEvent* cbval1 = event;

            kbookmarkdialog_mousedoubleclickevent_callback(this, cbval1);
        } else {
            KBookmarkDialog::mouseDoubleClickEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseMoveEvent(QMouseEvent* event) override {
        if (kbookmarkdialog_mousemoveevent_isbase) {
            kbookmarkdialog_mousemoveevent_isbase = false;
            KBookmarkDialog::mouseMoveEvent(event);
        } else if (kbookmarkdialog_mousemoveevent_callback != nullptr) {
            QMouseEvent* cbval1 = event;

            kbookmarkdialog_mousemoveevent_callback(this, cbval1);
        } else {
            KBookmarkDialog::mouseMoveEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void wheelEvent(QWheelEvent* event) override {
        if (kbookmarkdialog_wheelevent_isbase) {
            kbookmarkdialog_wheelevent_isbase = false;
            KBookmarkDialog::wheelEvent(event);
        } else if (kbookmarkdialog_wheelevent_callback != nullptr) {
            QWheelEvent* cbval1 = event;

            kbookmarkdialog_wheelevent_callback(this, cbval1);
        } else {
            KBookmarkDialog::wheelEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void keyReleaseEvent(QKeyEvent* event) override {
        if (kbookmarkdialog_keyreleaseevent_isbase) {
            kbookmarkdialog_keyreleaseevent_isbase = false;
            KBookmarkDialog::keyReleaseEvent(event);
        } else if (kbookmarkdialog_keyreleaseevent_callback != nullptr) {
            QKeyEvent* cbval1 = event;

            kbookmarkdialog_keyreleaseevent_callback(this, cbval1);
        } else {
            KBookmarkDialog::keyReleaseEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void focusInEvent(QFocusEvent* event) override {
        if (kbookmarkdialog_focusinevent_isbase) {
            kbookmarkdialog_focusinevent_isbase = false;
            KBookmarkDialog::focusInEvent(event);
        } else if (kbookmarkdialog_focusinevent_callback != nullptr) {
            QFocusEvent* cbval1 = event;

            kbookmarkdialog_focusinevent_callback(this, cbval1);
        } else {
            KBookmarkDialog::focusInEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void focusOutEvent(QFocusEvent* event) override {
        if (kbookmarkdialog_focusoutevent_isbase) {
            kbookmarkdialog_focusoutevent_isbase = false;
            KBookmarkDialog::focusOutEvent(event);
        } else if (kbookmarkdialog_focusoutevent_callback != nullptr) {
            QFocusEvent* cbval1 = event;

            kbookmarkdialog_focusoutevent_callback(this, cbval1);
        } else {
            KBookmarkDialog::focusOutEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void enterEvent(QEnterEvent* event) override {
        if (kbookmarkdialog_enterevent_isbase) {
            kbookmarkdialog_enterevent_isbase = false;
            KBookmarkDialog::enterEvent(event);
        } else if (kbookmarkdialog_enterevent_callback != nullptr) {
            QEnterEvent* cbval1 = event;

            kbookmarkdialog_enterevent_callback(this, cbval1);
        } else {
            KBookmarkDialog::enterEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void leaveEvent(QEvent* event) override {
        if (kbookmarkdialog_leaveevent_isbase) {
            kbookmarkdialog_leaveevent_isbase = false;
            KBookmarkDialog::leaveEvent(event);
        } else if (kbookmarkdialog_leaveevent_callback != nullptr) {
            QEvent* cbval1 = event;

            kbookmarkdialog_leaveevent_callback(this, cbval1);
        } else {
            KBookmarkDialog::leaveEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void paintEvent(QPaintEvent* event) override {
        if (kbookmarkdialog_paintevent_isbase) {
            kbookmarkdialog_paintevent_isbase = false;
            KBookmarkDialog::paintEvent(event);
        } else if (kbookmarkdialog_paintevent_callback != nullptr) {
            QPaintEvent* cbval1 = event;

            kbookmarkdialog_paintevent_callback(this, cbval1);
        } else {
            KBookmarkDialog::paintEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void moveEvent(QMoveEvent* event) override {
        if (kbookmarkdialog_moveevent_isbase) {
            kbookmarkdialog_moveevent_isbase = false;
            KBookmarkDialog::moveEvent(event);
        } else if (kbookmarkdialog_moveevent_callback != nullptr) {
            QMoveEvent* cbval1 = event;

            kbookmarkdialog_moveevent_callback(this, cbval1);
        } else {
            KBookmarkDialog::moveEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void tabletEvent(QTabletEvent* event) override {
        if (kbookmarkdialog_tabletevent_isbase) {
            kbookmarkdialog_tabletevent_isbase = false;
            KBookmarkDialog::tabletEvent(event);
        } else if (kbookmarkdialog_tabletevent_callback != nullptr) {
            QTabletEvent* cbval1 = event;

            kbookmarkdialog_tabletevent_callback(this, cbval1);
        } else {
            KBookmarkDialog::tabletEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void actionEvent(QActionEvent* event) override {
        if (kbookmarkdialog_actionevent_isbase) {
            kbookmarkdialog_actionevent_isbase = false;
            KBookmarkDialog::actionEvent(event);
        } else if (kbookmarkdialog_actionevent_callback != nullptr) {
            QActionEvent* cbval1 = event;

            kbookmarkdialog_actionevent_callback(this, cbval1);
        } else {
            KBookmarkDialog::actionEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragEnterEvent(QDragEnterEvent* event) override {
        if (kbookmarkdialog_dragenterevent_isbase) {
            kbookmarkdialog_dragenterevent_isbase = false;
            KBookmarkDialog::dragEnterEvent(event);
        } else if (kbookmarkdialog_dragenterevent_callback != nullptr) {
            QDragEnterEvent* cbval1 = event;

            kbookmarkdialog_dragenterevent_callback(this, cbval1);
        } else {
            KBookmarkDialog::dragEnterEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragMoveEvent(QDragMoveEvent* event) override {
        if (kbookmarkdialog_dragmoveevent_isbase) {
            kbookmarkdialog_dragmoveevent_isbase = false;
            KBookmarkDialog::dragMoveEvent(event);
        } else if (kbookmarkdialog_dragmoveevent_callback != nullptr) {
            QDragMoveEvent* cbval1 = event;

            kbookmarkdialog_dragmoveevent_callback(this, cbval1);
        } else {
            KBookmarkDialog::dragMoveEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragLeaveEvent(QDragLeaveEvent* event) override {
        if (kbookmarkdialog_dragleaveevent_isbase) {
            kbookmarkdialog_dragleaveevent_isbase = false;
            KBookmarkDialog::dragLeaveEvent(event);
        } else if (kbookmarkdialog_dragleaveevent_callback != nullptr) {
            QDragLeaveEvent* cbval1 = event;

            kbookmarkdialog_dragleaveevent_callback(this, cbval1);
        } else {
            KBookmarkDialog::dragLeaveEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void dropEvent(QDropEvent* event) override {
        if (kbookmarkdialog_dropevent_isbase) {
            kbookmarkdialog_dropevent_isbase = false;
            KBookmarkDialog::dropEvent(event);
        } else if (kbookmarkdialog_dropevent_callback != nullptr) {
            QDropEvent* cbval1 = event;

            kbookmarkdialog_dropevent_callback(this, cbval1);
        } else {
            KBookmarkDialog::dropEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void hideEvent(QHideEvent* event) override {
        if (kbookmarkdialog_hideevent_isbase) {
            kbookmarkdialog_hideevent_isbase = false;
            KBookmarkDialog::hideEvent(event);
        } else if (kbookmarkdialog_hideevent_callback != nullptr) {
            QHideEvent* cbval1 = event;

            kbookmarkdialog_hideevent_callback(this, cbval1);
        } else {
            KBookmarkDialog::hideEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool nativeEvent(const QByteArray& eventType, void* message, qintptr* result) override {
        if (kbookmarkdialog_nativeevent_isbase) {
            kbookmarkdialog_nativeevent_isbase = false;
            return KBookmarkDialog::nativeEvent(eventType, message, result);
        } else if (kbookmarkdialog_nativeevent_callback != nullptr) {
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

            bool callback_ret = kbookmarkdialog_nativeevent_callback(this, cbval1, cbval2, cbval3);
            return callback_ret;
        } else {
            return KBookmarkDialog::nativeEvent(eventType, message, result);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void changeEvent(QEvent* param1) override {
        if (kbookmarkdialog_changeevent_isbase) {
            kbookmarkdialog_changeevent_isbase = false;
            KBookmarkDialog::changeEvent(param1);
        } else if (kbookmarkdialog_changeevent_callback != nullptr) {
            QEvent* cbval1 = param1;

            kbookmarkdialog_changeevent_callback(this, cbval1);
        } else {
            KBookmarkDialog::changeEvent(param1);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual int metric(QPaintDevice::PaintDeviceMetric param1) const override {
        if (kbookmarkdialog_metric_isbase) {
            kbookmarkdialog_metric_isbase = false;
            return KBookmarkDialog::metric(param1);
        } else if (kbookmarkdialog_metric_callback != nullptr) {
            int cbval1 = static_cast<int>(param1);

            int callback_ret = kbookmarkdialog_metric_callback(this, cbval1);
            return static_cast<int>(callback_ret);
        } else {
            return KBookmarkDialog::metric(param1);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void initPainter(QPainter* painter) const override {
        if (kbookmarkdialog_initpainter_isbase) {
            kbookmarkdialog_initpainter_isbase = false;
            KBookmarkDialog::initPainter(painter);
        } else if (kbookmarkdialog_initpainter_callback != nullptr) {
            QPainter* cbval1 = painter;

            kbookmarkdialog_initpainter_callback(this, cbval1);
        } else {
            KBookmarkDialog::initPainter(painter);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QPaintDevice* redirected(QPoint* offset) const override {
        if (kbookmarkdialog_redirected_isbase) {
            kbookmarkdialog_redirected_isbase = false;
            return KBookmarkDialog::redirected(offset);
        } else if (kbookmarkdialog_redirected_callback != nullptr) {
            QPoint* cbval1 = offset;

            QPaintDevice* callback_ret = kbookmarkdialog_redirected_callback(this, cbval1);
            return callback_ret;
        } else {
            return KBookmarkDialog::redirected(offset);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QPainter* sharedPainter() const override {
        if (kbookmarkdialog_sharedpainter_isbase) {
            kbookmarkdialog_sharedpainter_isbase = false;
            return KBookmarkDialog::sharedPainter();
        } else if (kbookmarkdialog_sharedpainter_callback != nullptr) {
            QPainter* callback_ret = kbookmarkdialog_sharedpainter_callback();
            return callback_ret;
        } else {
            return KBookmarkDialog::sharedPainter();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void inputMethodEvent(QInputMethodEvent* param1) override {
        if (kbookmarkdialog_inputmethodevent_isbase) {
            kbookmarkdialog_inputmethodevent_isbase = false;
            KBookmarkDialog::inputMethodEvent(param1);
        } else if (kbookmarkdialog_inputmethodevent_callback != nullptr) {
            QInputMethodEvent* cbval1 = param1;

            kbookmarkdialog_inputmethodevent_callback(this, cbval1);
        } else {
            KBookmarkDialog::inputMethodEvent(param1);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QVariant inputMethodQuery(Qt::InputMethodQuery param1) const override {
        if (kbookmarkdialog_inputmethodquery_isbase) {
            kbookmarkdialog_inputmethodquery_isbase = false;
            return KBookmarkDialog::inputMethodQuery(param1);
        } else if (kbookmarkdialog_inputmethodquery_callback != nullptr) {
            int cbval1 = static_cast<int>(param1);

            QVariant* callback_ret = kbookmarkdialog_inputmethodquery_callback(this, cbval1);
            return *callback_ret;
        } else {
            return KBookmarkDialog::inputMethodQuery(param1);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool focusNextPrevChild(bool next) override {
        if (kbookmarkdialog_focusnextprevchild_isbase) {
            kbookmarkdialog_focusnextprevchild_isbase = false;
            return KBookmarkDialog::focusNextPrevChild(next);
        } else if (kbookmarkdialog_focusnextprevchild_callback != nullptr) {
            bool cbval1 = next;

            bool callback_ret = kbookmarkdialog_focusnextprevchild_callback(this, cbval1);
            return callback_ret;
        } else {
            return KBookmarkDialog::focusNextPrevChild(next);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (kbookmarkdialog_timerevent_isbase) {
            kbookmarkdialog_timerevent_isbase = false;
            KBookmarkDialog::timerEvent(event);
        } else if (kbookmarkdialog_timerevent_callback != nullptr) {
            QTimerEvent* cbval1 = event;

            kbookmarkdialog_timerevent_callback(this, cbval1);
        } else {
            KBookmarkDialog::timerEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (kbookmarkdialog_childevent_isbase) {
            kbookmarkdialog_childevent_isbase = false;
            KBookmarkDialog::childEvent(event);
        } else if (kbookmarkdialog_childevent_callback != nullptr) {
            QChildEvent* cbval1 = event;

            kbookmarkdialog_childevent_callback(this, cbval1);
        } else {
            KBookmarkDialog::childEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (kbookmarkdialog_customevent_isbase) {
            kbookmarkdialog_customevent_isbase = false;
            KBookmarkDialog::customEvent(event);
        } else if (kbookmarkdialog_customevent_callback != nullptr) {
            QEvent* cbval1 = event;

            kbookmarkdialog_customevent_callback(this, cbval1);
        } else {
            KBookmarkDialog::customEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (kbookmarkdialog_connectnotify_isbase) {
            kbookmarkdialog_connectnotify_isbase = false;
            KBookmarkDialog::connectNotify(signal);
        } else if (kbookmarkdialog_connectnotify_callback != nullptr) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            kbookmarkdialog_connectnotify_callback(this, cbval1);
        } else {
            KBookmarkDialog::connectNotify(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (kbookmarkdialog_disconnectnotify_isbase) {
            kbookmarkdialog_disconnectnotify_isbase = false;
            KBookmarkDialog::disconnectNotify(signal);
        } else if (kbookmarkdialog_disconnectnotify_callback != nullptr) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            kbookmarkdialog_disconnectnotify_callback(this, cbval1);
        } else {
            KBookmarkDialog::disconnectNotify(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    void newFolderButton() {
        if (kbookmarkdialog_newfolderbutton_isbase) {
            kbookmarkdialog_newfolderbutton_isbase = false;
            KBookmarkDialog::newFolderButton();
        } else if (kbookmarkdialog_newfolderbutton_callback != nullptr) {
            kbookmarkdialog_newfolderbutton_callback();
        } else {
            KBookmarkDialog::newFolderButton();
        }
    }

    // Virtual method for C ABI access and custom callback
    void adjustPosition(QWidget* param1) {
        if (kbookmarkdialog_adjustposition_isbase) {
            kbookmarkdialog_adjustposition_isbase = false;
            KBookmarkDialog::adjustPosition(param1);
        } else if (kbookmarkdialog_adjustposition_callback != nullptr) {
            QWidget* cbval1 = param1;

            kbookmarkdialog_adjustposition_callback(this, cbval1);
        } else {
            KBookmarkDialog::adjustPosition(param1);
        }
    }

    // Virtual method for C ABI access and custom callback
    void updateMicroFocus() {
        if (kbookmarkdialog_updatemicrofocus_isbase) {
            kbookmarkdialog_updatemicrofocus_isbase = false;
            KBookmarkDialog::updateMicroFocus();
        } else if (kbookmarkdialog_updatemicrofocus_callback != nullptr) {
            kbookmarkdialog_updatemicrofocus_callback();
        } else {
            KBookmarkDialog::updateMicroFocus();
        }
    }

    // Virtual method for C ABI access and custom callback
    void create() {
        if (kbookmarkdialog_create_isbase) {
            kbookmarkdialog_create_isbase = false;
            KBookmarkDialog::create();
        } else if (kbookmarkdialog_create_callback != nullptr) {
            kbookmarkdialog_create_callback();
        } else {
            KBookmarkDialog::create();
        }
    }

    // Virtual method for C ABI access and custom callback
    void destroy() {
        if (kbookmarkdialog_destroy_isbase) {
            kbookmarkdialog_destroy_isbase = false;
            KBookmarkDialog::destroy();
        } else if (kbookmarkdialog_destroy_callback != nullptr) {
            kbookmarkdialog_destroy_callback();
        } else {
            KBookmarkDialog::destroy();
        }
    }

    // Virtual method for C ABI access and custom callback
    bool focusNextChild() {
        if (kbookmarkdialog_focusnextchild_isbase) {
            kbookmarkdialog_focusnextchild_isbase = false;
            return KBookmarkDialog::focusNextChild();
        } else if (kbookmarkdialog_focusnextchild_callback != nullptr) {
            bool callback_ret = kbookmarkdialog_focusnextchild_callback();
            return callback_ret;
        } else {
            return KBookmarkDialog::focusNextChild();
        }
    }

    // Virtual method for C ABI access and custom callback
    bool focusPreviousChild() {
        if (kbookmarkdialog_focuspreviouschild_isbase) {
            kbookmarkdialog_focuspreviouschild_isbase = false;
            return KBookmarkDialog::focusPreviousChild();
        } else if (kbookmarkdialog_focuspreviouschild_callback != nullptr) {
            bool callback_ret = kbookmarkdialog_focuspreviouschild_callback();
            return callback_ret;
        } else {
            return KBookmarkDialog::focusPreviousChild();
        }
    }

    // Virtual method for C ABI access and custom callback
    QObject* sender() const {
        if (kbookmarkdialog_sender_isbase) {
            kbookmarkdialog_sender_isbase = false;
            return KBookmarkDialog::sender();
        } else if (kbookmarkdialog_sender_callback != nullptr) {
            QObject* callback_ret = kbookmarkdialog_sender_callback();
            return callback_ret;
        } else {
            return KBookmarkDialog::sender();
        }
    }

    // Virtual method for C ABI access and custom callback
    int senderSignalIndex() const {
        if (kbookmarkdialog_sendersignalindex_isbase) {
            kbookmarkdialog_sendersignalindex_isbase = false;
            return KBookmarkDialog::senderSignalIndex();
        } else if (kbookmarkdialog_sendersignalindex_callback != nullptr) {
            int callback_ret = kbookmarkdialog_sendersignalindex_callback();
            return static_cast<int>(callback_ret);
        } else {
            return KBookmarkDialog::senderSignalIndex();
        }
    }

    // Virtual method for C ABI access and custom callback
    int receivers(const char* signal) const {
        if (kbookmarkdialog_receivers_isbase) {
            kbookmarkdialog_receivers_isbase = false;
            return KBookmarkDialog::receivers(signal);
        } else if (kbookmarkdialog_receivers_callback != nullptr) {
            const char* cbval1 = (const char*)signal;

            int callback_ret = kbookmarkdialog_receivers_callback(this, cbval1);
            return static_cast<int>(callback_ret);
        } else {
            return KBookmarkDialog::receivers(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    bool isSignalConnected(const QMetaMethod& signal) const {
        if (kbookmarkdialog_issignalconnected_isbase) {
            kbookmarkdialog_issignalconnected_isbase = false;
            return KBookmarkDialog::isSignalConnected(signal);
        } else if (kbookmarkdialog_issignalconnected_callback != nullptr) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            bool callback_ret = kbookmarkdialog_issignalconnected_callback(this, cbval1);
            return callback_ret;
        } else {
            return KBookmarkDialog::isSignalConnected(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    double getDecodedMetricF(QPaintDevice::PaintDeviceMetric metricA, QPaintDevice::PaintDeviceMetric metricB) const {
        if (kbookmarkdialog_getdecodedmetricf_isbase) {
            kbookmarkdialog_getdecodedmetricf_isbase = false;
            return KBookmarkDialog::getDecodedMetricF(metricA, metricB);
        } else if (kbookmarkdialog_getdecodedmetricf_callback != nullptr) {
            int cbval1 = static_cast<int>(metricA);
            int cbval2 = static_cast<int>(metricB);

            double callback_ret = kbookmarkdialog_getdecodedmetricf_callback(this, cbval1, cbval2);
            return static_cast<double>(callback_ret);
        } else {
            return KBookmarkDialog::getDecodedMetricF(metricA, metricB);
        }
    }

    // Friend functions
    friend void KBookmarkDialog_Accept(KBookmarkDialog* self);
    friend void KBookmarkDialog_QBaseAccept(KBookmarkDialog* self);
    friend void KBookmarkDialog_KeyPressEvent(KBookmarkDialog* self, QKeyEvent* param1);
    friend void KBookmarkDialog_QBaseKeyPressEvent(KBookmarkDialog* self, QKeyEvent* param1);
    friend void KBookmarkDialog_CloseEvent(KBookmarkDialog* self, QCloseEvent* param1);
    friend void KBookmarkDialog_QBaseCloseEvent(KBookmarkDialog* self, QCloseEvent* param1);
    friend void KBookmarkDialog_ShowEvent(KBookmarkDialog* self, QShowEvent* param1);
    friend void KBookmarkDialog_QBaseShowEvent(KBookmarkDialog* self, QShowEvent* param1);
    friend void KBookmarkDialog_ResizeEvent(KBookmarkDialog* self, QResizeEvent* param1);
    friend void KBookmarkDialog_QBaseResizeEvent(KBookmarkDialog* self, QResizeEvent* param1);
    friend void KBookmarkDialog_ContextMenuEvent(KBookmarkDialog* self, QContextMenuEvent* param1);
    friend void KBookmarkDialog_QBaseContextMenuEvent(KBookmarkDialog* self, QContextMenuEvent* param1);
    friend bool KBookmarkDialog_EventFilter(KBookmarkDialog* self, QObject* param1, QEvent* param2);
    friend bool KBookmarkDialog_QBaseEventFilter(KBookmarkDialog* self, QObject* param1, QEvent* param2);
    friend bool KBookmarkDialog_Event(KBookmarkDialog* self, QEvent* event);
    friend bool KBookmarkDialog_QBaseEvent(KBookmarkDialog* self, QEvent* event);
    friend void KBookmarkDialog_MousePressEvent(KBookmarkDialog* self, QMouseEvent* event);
    friend void KBookmarkDialog_QBaseMousePressEvent(KBookmarkDialog* self, QMouseEvent* event);
    friend void KBookmarkDialog_MouseReleaseEvent(KBookmarkDialog* self, QMouseEvent* event);
    friend void KBookmarkDialog_QBaseMouseReleaseEvent(KBookmarkDialog* self, QMouseEvent* event);
    friend void KBookmarkDialog_MouseDoubleClickEvent(KBookmarkDialog* self, QMouseEvent* event);
    friend void KBookmarkDialog_QBaseMouseDoubleClickEvent(KBookmarkDialog* self, QMouseEvent* event);
    friend void KBookmarkDialog_MouseMoveEvent(KBookmarkDialog* self, QMouseEvent* event);
    friend void KBookmarkDialog_QBaseMouseMoveEvent(KBookmarkDialog* self, QMouseEvent* event);
    friend void KBookmarkDialog_WheelEvent(KBookmarkDialog* self, QWheelEvent* event);
    friend void KBookmarkDialog_QBaseWheelEvent(KBookmarkDialog* self, QWheelEvent* event);
    friend void KBookmarkDialog_KeyReleaseEvent(KBookmarkDialog* self, QKeyEvent* event);
    friend void KBookmarkDialog_QBaseKeyReleaseEvent(KBookmarkDialog* self, QKeyEvent* event);
    friend void KBookmarkDialog_FocusInEvent(KBookmarkDialog* self, QFocusEvent* event);
    friend void KBookmarkDialog_QBaseFocusInEvent(KBookmarkDialog* self, QFocusEvent* event);
    friend void KBookmarkDialog_FocusOutEvent(KBookmarkDialog* self, QFocusEvent* event);
    friend void KBookmarkDialog_QBaseFocusOutEvent(KBookmarkDialog* self, QFocusEvent* event);
    friend void KBookmarkDialog_EnterEvent(KBookmarkDialog* self, QEnterEvent* event);
    friend void KBookmarkDialog_QBaseEnterEvent(KBookmarkDialog* self, QEnterEvent* event);
    friend void KBookmarkDialog_LeaveEvent(KBookmarkDialog* self, QEvent* event);
    friend void KBookmarkDialog_QBaseLeaveEvent(KBookmarkDialog* self, QEvent* event);
    friend void KBookmarkDialog_PaintEvent(KBookmarkDialog* self, QPaintEvent* event);
    friend void KBookmarkDialog_QBasePaintEvent(KBookmarkDialog* self, QPaintEvent* event);
    friend void KBookmarkDialog_MoveEvent(KBookmarkDialog* self, QMoveEvent* event);
    friend void KBookmarkDialog_QBaseMoveEvent(KBookmarkDialog* self, QMoveEvent* event);
    friend void KBookmarkDialog_TabletEvent(KBookmarkDialog* self, QTabletEvent* event);
    friend void KBookmarkDialog_QBaseTabletEvent(KBookmarkDialog* self, QTabletEvent* event);
    friend void KBookmarkDialog_ActionEvent(KBookmarkDialog* self, QActionEvent* event);
    friend void KBookmarkDialog_QBaseActionEvent(KBookmarkDialog* self, QActionEvent* event);
    friend void KBookmarkDialog_DragEnterEvent(KBookmarkDialog* self, QDragEnterEvent* event);
    friend void KBookmarkDialog_QBaseDragEnterEvent(KBookmarkDialog* self, QDragEnterEvent* event);
    friend void KBookmarkDialog_DragMoveEvent(KBookmarkDialog* self, QDragMoveEvent* event);
    friend void KBookmarkDialog_QBaseDragMoveEvent(KBookmarkDialog* self, QDragMoveEvent* event);
    friend void KBookmarkDialog_DragLeaveEvent(KBookmarkDialog* self, QDragLeaveEvent* event);
    friend void KBookmarkDialog_QBaseDragLeaveEvent(KBookmarkDialog* self, QDragLeaveEvent* event);
    friend void KBookmarkDialog_DropEvent(KBookmarkDialog* self, QDropEvent* event);
    friend void KBookmarkDialog_QBaseDropEvent(KBookmarkDialog* self, QDropEvent* event);
    friend void KBookmarkDialog_HideEvent(KBookmarkDialog* self, QHideEvent* event);
    friend void KBookmarkDialog_QBaseHideEvent(KBookmarkDialog* self, QHideEvent* event);
    friend bool KBookmarkDialog_NativeEvent(KBookmarkDialog* self, const libqt_string eventType, void* message, intptr_t* result);
    friend bool KBookmarkDialog_QBaseNativeEvent(KBookmarkDialog* self, const libqt_string eventType, void* message, intptr_t* result);
    friend void KBookmarkDialog_ChangeEvent(KBookmarkDialog* self, QEvent* param1);
    friend void KBookmarkDialog_QBaseChangeEvent(KBookmarkDialog* self, QEvent* param1);
    friend int KBookmarkDialog_Metric(const KBookmarkDialog* self, int param1);
    friend int KBookmarkDialog_QBaseMetric(const KBookmarkDialog* self, int param1);
    friend void KBookmarkDialog_InitPainter(const KBookmarkDialog* self, QPainter* painter);
    friend void KBookmarkDialog_QBaseInitPainter(const KBookmarkDialog* self, QPainter* painter);
    friend QPaintDevice* KBookmarkDialog_Redirected(const KBookmarkDialog* self, QPoint* offset);
    friend QPaintDevice* KBookmarkDialog_QBaseRedirected(const KBookmarkDialog* self, QPoint* offset);
    friend QPainter* KBookmarkDialog_SharedPainter(const KBookmarkDialog* self);
    friend QPainter* KBookmarkDialog_QBaseSharedPainter(const KBookmarkDialog* self);
    friend void KBookmarkDialog_InputMethodEvent(KBookmarkDialog* self, QInputMethodEvent* param1);
    friend void KBookmarkDialog_QBaseInputMethodEvent(KBookmarkDialog* self, QInputMethodEvent* param1);
    friend bool KBookmarkDialog_FocusNextPrevChild(KBookmarkDialog* self, bool next);
    friend bool KBookmarkDialog_QBaseFocusNextPrevChild(KBookmarkDialog* self, bool next);
    friend void KBookmarkDialog_TimerEvent(KBookmarkDialog* self, QTimerEvent* event);
    friend void KBookmarkDialog_QBaseTimerEvent(KBookmarkDialog* self, QTimerEvent* event);
    friend void KBookmarkDialog_ChildEvent(KBookmarkDialog* self, QChildEvent* event);
    friend void KBookmarkDialog_QBaseChildEvent(KBookmarkDialog* self, QChildEvent* event);
    friend void KBookmarkDialog_CustomEvent(KBookmarkDialog* self, QEvent* event);
    friend void KBookmarkDialog_QBaseCustomEvent(KBookmarkDialog* self, QEvent* event);
    friend void KBookmarkDialog_ConnectNotify(KBookmarkDialog* self, const QMetaMethod* signal);
    friend void KBookmarkDialog_QBaseConnectNotify(KBookmarkDialog* self, const QMetaMethod* signal);
    friend void KBookmarkDialog_DisconnectNotify(KBookmarkDialog* self, const QMetaMethod* signal);
    friend void KBookmarkDialog_QBaseDisconnectNotify(KBookmarkDialog* self, const QMetaMethod* signal);
    friend void KBookmarkDialog_NewFolderButton(KBookmarkDialog* self);
    friend void KBookmarkDialog_QBaseNewFolderButton(KBookmarkDialog* self);
    friend void KBookmarkDialog_AdjustPosition(KBookmarkDialog* self, QWidget* param1);
    friend void KBookmarkDialog_QBaseAdjustPosition(KBookmarkDialog* self, QWidget* param1);
    friend void KBookmarkDialog_UpdateMicroFocus(KBookmarkDialog* self);
    friend void KBookmarkDialog_QBaseUpdateMicroFocus(KBookmarkDialog* self);
    friend void KBookmarkDialog_Create(KBookmarkDialog* self);
    friend void KBookmarkDialog_QBaseCreate(KBookmarkDialog* self);
    friend void KBookmarkDialog_Destroy(KBookmarkDialog* self);
    friend void KBookmarkDialog_QBaseDestroy(KBookmarkDialog* self);
    friend bool KBookmarkDialog_FocusNextChild(KBookmarkDialog* self);
    friend bool KBookmarkDialog_QBaseFocusNextChild(KBookmarkDialog* self);
    friend bool KBookmarkDialog_FocusPreviousChild(KBookmarkDialog* self);
    friend bool KBookmarkDialog_QBaseFocusPreviousChild(KBookmarkDialog* self);
    friend QObject* KBookmarkDialog_Sender(const KBookmarkDialog* self);
    friend QObject* KBookmarkDialog_QBaseSender(const KBookmarkDialog* self);
    friend int KBookmarkDialog_SenderSignalIndex(const KBookmarkDialog* self);
    friend int KBookmarkDialog_QBaseSenderSignalIndex(const KBookmarkDialog* self);
    friend int KBookmarkDialog_Receivers(const KBookmarkDialog* self, const char* signal);
    friend int KBookmarkDialog_QBaseReceivers(const KBookmarkDialog* self, const char* signal);
    friend bool KBookmarkDialog_IsSignalConnected(const KBookmarkDialog* self, const QMetaMethod* signal);
    friend bool KBookmarkDialog_QBaseIsSignalConnected(const KBookmarkDialog* self, const QMetaMethod* signal);
    friend double KBookmarkDialog_GetDecodedMetricF(const KBookmarkDialog* self, int metricA, int metricB);
    friend double KBookmarkDialog_QBaseGetDecodedMetricF(const KBookmarkDialog* self, int metricA, int metricB);
};

#endif
