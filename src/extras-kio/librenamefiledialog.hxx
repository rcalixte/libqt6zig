#pragma once
#ifndef SRC_EXTRAS_KIOC_LIBVIRTUALRENAMEFILEDIALOG_H
#define SRC_EXTRAS_KIOC_LIBVIRTUALRENAMEFILEDIALOG_H

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

// This class is a subclass of KIO::RenameFileDialog so that we can call protected methods
class VirtualKIORenameFileDialog final : public KIO::RenameFileDialog {

  public:
    // Virtual class boolean flag
    bool isVirtualKIORenameFileDialog = true;

    // Virtual class public types (including callbacks)
    using KIO__RenameFileDialog_Metacall_Callback = int (*)(KIO__RenameFileDialog*, int, int, void**);
    using KIO__RenameFileDialog_SetVisible_Callback = void (*)(KIO__RenameFileDialog*, bool);
    using KIO__RenameFileDialog_SizeHint_Callback = QSize* (*)();
    using KIO__RenameFileDialog_MinimumSizeHint_Callback = QSize* (*)();
    using KIO__RenameFileDialog_Open_Callback = void (*)();
    using KIO__RenameFileDialog_Exec_Callback = int (*)();
    using KIO__RenameFileDialog_Done_Callback = void (*)(KIO__RenameFileDialog*, int);
    using KIO__RenameFileDialog_Accept_Callback = void (*)();
    using KIO__RenameFileDialog_Reject_Callback = void (*)();
    using KIO__RenameFileDialog_KeyPressEvent_Callback = void (*)(KIO__RenameFileDialog*, QKeyEvent*);
    using KIO__RenameFileDialog_CloseEvent_Callback = void (*)(KIO__RenameFileDialog*, QCloseEvent*);
    using KIO__RenameFileDialog_ShowEvent_Callback = void (*)(KIO__RenameFileDialog*, QShowEvent*);
    using KIO__RenameFileDialog_ResizeEvent_Callback = void (*)(KIO__RenameFileDialog*, QResizeEvent*);
    using KIO__RenameFileDialog_ContextMenuEvent_Callback = void (*)(KIO__RenameFileDialog*, QContextMenuEvent*);
    using KIO__RenameFileDialog_EventFilter_Callback = bool (*)(KIO__RenameFileDialog*, QObject*, QEvent*);
    using KIO__RenameFileDialog_DevType_Callback = int (*)();
    using KIO__RenameFileDialog_HeightForWidth_Callback = int (*)(const KIO__RenameFileDialog*, int);
    using KIO__RenameFileDialog_HasHeightForWidth_Callback = bool (*)();
    using KIO__RenameFileDialog_PaintEngine_Callback = QPaintEngine* (*)();
    using KIO__RenameFileDialog_Event_Callback = bool (*)(KIO__RenameFileDialog*, QEvent*);
    using KIO__RenameFileDialog_MousePressEvent_Callback = void (*)(KIO__RenameFileDialog*, QMouseEvent*);
    using KIO__RenameFileDialog_MouseReleaseEvent_Callback = void (*)(KIO__RenameFileDialog*, QMouseEvent*);
    using KIO__RenameFileDialog_MouseDoubleClickEvent_Callback = void (*)(KIO__RenameFileDialog*, QMouseEvent*);
    using KIO__RenameFileDialog_MouseMoveEvent_Callback = void (*)(KIO__RenameFileDialog*, QMouseEvent*);
    using KIO__RenameFileDialog_WheelEvent_Callback = void (*)(KIO__RenameFileDialog*, QWheelEvent*);
    using KIO__RenameFileDialog_KeyReleaseEvent_Callback = void (*)(KIO__RenameFileDialog*, QKeyEvent*);
    using KIO__RenameFileDialog_FocusInEvent_Callback = void (*)(KIO__RenameFileDialog*, QFocusEvent*);
    using KIO__RenameFileDialog_FocusOutEvent_Callback = void (*)(KIO__RenameFileDialog*, QFocusEvent*);
    using KIO__RenameFileDialog_EnterEvent_Callback = void (*)(KIO__RenameFileDialog*, QEnterEvent*);
    using KIO__RenameFileDialog_LeaveEvent_Callback = void (*)(KIO__RenameFileDialog*, QEvent*);
    using KIO__RenameFileDialog_PaintEvent_Callback = void (*)(KIO__RenameFileDialog*, QPaintEvent*);
    using KIO__RenameFileDialog_MoveEvent_Callback = void (*)(KIO__RenameFileDialog*, QMoveEvent*);
    using KIO__RenameFileDialog_TabletEvent_Callback = void (*)(KIO__RenameFileDialog*, QTabletEvent*);
    using KIO__RenameFileDialog_ActionEvent_Callback = void (*)(KIO__RenameFileDialog*, QActionEvent*);
    using KIO__RenameFileDialog_DragEnterEvent_Callback = void (*)(KIO__RenameFileDialog*, QDragEnterEvent*);
    using KIO__RenameFileDialog_DragMoveEvent_Callback = void (*)(KIO__RenameFileDialog*, QDragMoveEvent*);
    using KIO__RenameFileDialog_DragLeaveEvent_Callback = void (*)(KIO__RenameFileDialog*, QDragLeaveEvent*);
    using KIO__RenameFileDialog_DropEvent_Callback = void (*)(KIO__RenameFileDialog*, QDropEvent*);
    using KIO__RenameFileDialog_HideEvent_Callback = void (*)(KIO__RenameFileDialog*, QHideEvent*);
    using KIO__RenameFileDialog_NativeEvent_Callback = bool (*)(KIO__RenameFileDialog*, libqt_string, void*, intptr_t*);
    using KIO__RenameFileDialog_ChangeEvent_Callback = void (*)(KIO__RenameFileDialog*, QEvent*);
    using KIO__RenameFileDialog_Metric_Callback = int (*)(const KIO__RenameFileDialog*, int);
    using KIO__RenameFileDialog_InitPainter_Callback = void (*)(const KIO__RenameFileDialog*, QPainter*);
    using KIO__RenameFileDialog_Redirected_Callback = QPaintDevice* (*)(const KIO__RenameFileDialog*, QPoint*);
    using KIO__RenameFileDialog_SharedPainter_Callback = QPainter* (*)();
    using KIO__RenameFileDialog_InputMethodEvent_Callback = void (*)(KIO__RenameFileDialog*, QInputMethodEvent*);
    using KIO__RenameFileDialog_InputMethodQuery_Callback = QVariant* (*)(const KIO__RenameFileDialog*, int);
    using KIO__RenameFileDialog_FocusNextPrevChild_Callback = bool (*)(KIO__RenameFileDialog*, bool);
    using KIO__RenameFileDialog_TimerEvent_Callback = void (*)(KIO__RenameFileDialog*, QTimerEvent*);
    using KIO__RenameFileDialog_ChildEvent_Callback = void (*)(KIO__RenameFileDialog*, QChildEvent*);
    using KIO__RenameFileDialog_CustomEvent_Callback = void (*)(KIO__RenameFileDialog*, QEvent*);
    using KIO__RenameFileDialog_ConnectNotify_Callback = void (*)(KIO__RenameFileDialog*, QMetaMethod*);
    using KIO__RenameFileDialog_DisconnectNotify_Callback = void (*)(KIO__RenameFileDialog*, QMetaMethod*);
    using KIO__RenameFileDialog_AdjustPosition_Callback = void (*)(KIO__RenameFileDialog*, QWidget*);
    using KIO__RenameFileDialog_UpdateMicroFocus_Callback = void (*)();
    using KIO__RenameFileDialog_Create_Callback = void (*)();
    using KIO__RenameFileDialog_Destroy_Callback = void (*)();
    using KIO__RenameFileDialog_FocusNextChild_Callback = bool (*)();
    using KIO__RenameFileDialog_FocusPreviousChild_Callback = bool (*)();
    using KIO__RenameFileDialog_Sender_Callback = QObject* (*)();
    using KIO__RenameFileDialog_SenderSignalIndex_Callback = int (*)();
    using KIO__RenameFileDialog_Receivers_Callback = int (*)(const KIO__RenameFileDialog*, const char*);
    using KIO__RenameFileDialog_IsSignalConnected_Callback = bool (*)(const KIO__RenameFileDialog*, QMetaMethod*);
    using KIO__RenameFileDialog_GetDecodedMetricF_Callback = double (*)(const KIO__RenameFileDialog*, int, int);

  protected:
    // Instance callback storage
    KIO__RenameFileDialog_Metacall_Callback kio__renamefiledialog_metacall_callback = nullptr;
    KIO__RenameFileDialog_SetVisible_Callback kio__renamefiledialog_setvisible_callback = nullptr;
    KIO__RenameFileDialog_SizeHint_Callback kio__renamefiledialog_sizehint_callback = nullptr;
    KIO__RenameFileDialog_MinimumSizeHint_Callback kio__renamefiledialog_minimumsizehint_callback = nullptr;
    KIO__RenameFileDialog_Open_Callback kio__renamefiledialog_open_callback = nullptr;
    KIO__RenameFileDialog_Exec_Callback kio__renamefiledialog_exec_callback = nullptr;
    KIO__RenameFileDialog_Done_Callback kio__renamefiledialog_done_callback = nullptr;
    KIO__RenameFileDialog_Accept_Callback kio__renamefiledialog_accept_callback = nullptr;
    KIO__RenameFileDialog_Reject_Callback kio__renamefiledialog_reject_callback = nullptr;
    KIO__RenameFileDialog_KeyPressEvent_Callback kio__renamefiledialog_keypressevent_callback = nullptr;
    KIO__RenameFileDialog_CloseEvent_Callback kio__renamefiledialog_closeevent_callback = nullptr;
    KIO__RenameFileDialog_ShowEvent_Callback kio__renamefiledialog_showevent_callback = nullptr;
    KIO__RenameFileDialog_ResizeEvent_Callback kio__renamefiledialog_resizeevent_callback = nullptr;
    KIO__RenameFileDialog_ContextMenuEvent_Callback kio__renamefiledialog_contextmenuevent_callback = nullptr;
    KIO__RenameFileDialog_EventFilter_Callback kio__renamefiledialog_eventfilter_callback = nullptr;
    KIO__RenameFileDialog_DevType_Callback kio__renamefiledialog_devtype_callback = nullptr;
    KIO__RenameFileDialog_HeightForWidth_Callback kio__renamefiledialog_heightforwidth_callback = nullptr;
    KIO__RenameFileDialog_HasHeightForWidth_Callback kio__renamefiledialog_hasheightforwidth_callback = nullptr;
    KIO__RenameFileDialog_PaintEngine_Callback kio__renamefiledialog_paintengine_callback = nullptr;
    KIO__RenameFileDialog_Event_Callback kio__renamefiledialog_event_callback = nullptr;
    KIO__RenameFileDialog_MousePressEvent_Callback kio__renamefiledialog_mousepressevent_callback = nullptr;
    KIO__RenameFileDialog_MouseReleaseEvent_Callback kio__renamefiledialog_mousereleaseevent_callback = nullptr;
    KIO__RenameFileDialog_MouseDoubleClickEvent_Callback kio__renamefiledialog_mousedoubleclickevent_callback = nullptr;
    KIO__RenameFileDialog_MouseMoveEvent_Callback kio__renamefiledialog_mousemoveevent_callback = nullptr;
    KIO__RenameFileDialog_WheelEvent_Callback kio__renamefiledialog_wheelevent_callback = nullptr;
    KIO__RenameFileDialog_KeyReleaseEvent_Callback kio__renamefiledialog_keyreleaseevent_callback = nullptr;
    KIO__RenameFileDialog_FocusInEvent_Callback kio__renamefiledialog_focusinevent_callback = nullptr;
    KIO__RenameFileDialog_FocusOutEvent_Callback kio__renamefiledialog_focusoutevent_callback = nullptr;
    KIO__RenameFileDialog_EnterEvent_Callback kio__renamefiledialog_enterevent_callback = nullptr;
    KIO__RenameFileDialog_LeaveEvent_Callback kio__renamefiledialog_leaveevent_callback = nullptr;
    KIO__RenameFileDialog_PaintEvent_Callback kio__renamefiledialog_paintevent_callback = nullptr;
    KIO__RenameFileDialog_MoveEvent_Callback kio__renamefiledialog_moveevent_callback = nullptr;
    KIO__RenameFileDialog_TabletEvent_Callback kio__renamefiledialog_tabletevent_callback = nullptr;
    KIO__RenameFileDialog_ActionEvent_Callback kio__renamefiledialog_actionevent_callback = nullptr;
    KIO__RenameFileDialog_DragEnterEvent_Callback kio__renamefiledialog_dragenterevent_callback = nullptr;
    KIO__RenameFileDialog_DragMoveEvent_Callback kio__renamefiledialog_dragmoveevent_callback = nullptr;
    KIO__RenameFileDialog_DragLeaveEvent_Callback kio__renamefiledialog_dragleaveevent_callback = nullptr;
    KIO__RenameFileDialog_DropEvent_Callback kio__renamefiledialog_dropevent_callback = nullptr;
    KIO__RenameFileDialog_HideEvent_Callback kio__renamefiledialog_hideevent_callback = nullptr;
    KIO__RenameFileDialog_NativeEvent_Callback kio__renamefiledialog_nativeevent_callback = nullptr;
    KIO__RenameFileDialog_ChangeEvent_Callback kio__renamefiledialog_changeevent_callback = nullptr;
    KIO__RenameFileDialog_Metric_Callback kio__renamefiledialog_metric_callback = nullptr;
    KIO__RenameFileDialog_InitPainter_Callback kio__renamefiledialog_initpainter_callback = nullptr;
    KIO__RenameFileDialog_Redirected_Callback kio__renamefiledialog_redirected_callback = nullptr;
    KIO__RenameFileDialog_SharedPainter_Callback kio__renamefiledialog_sharedpainter_callback = nullptr;
    KIO__RenameFileDialog_InputMethodEvent_Callback kio__renamefiledialog_inputmethodevent_callback = nullptr;
    KIO__RenameFileDialog_InputMethodQuery_Callback kio__renamefiledialog_inputmethodquery_callback = nullptr;
    KIO__RenameFileDialog_FocusNextPrevChild_Callback kio__renamefiledialog_focusnextprevchild_callback = nullptr;
    KIO__RenameFileDialog_TimerEvent_Callback kio__renamefiledialog_timerevent_callback = nullptr;
    KIO__RenameFileDialog_ChildEvent_Callback kio__renamefiledialog_childevent_callback = nullptr;
    KIO__RenameFileDialog_CustomEvent_Callback kio__renamefiledialog_customevent_callback = nullptr;
    KIO__RenameFileDialog_ConnectNotify_Callback kio__renamefiledialog_connectnotify_callback = nullptr;
    KIO__RenameFileDialog_DisconnectNotify_Callback kio__renamefiledialog_disconnectnotify_callback = nullptr;
    KIO__RenameFileDialog_AdjustPosition_Callback kio__renamefiledialog_adjustposition_callback = nullptr;
    KIO__RenameFileDialog_UpdateMicroFocus_Callback kio__renamefiledialog_updatemicrofocus_callback = nullptr;
    KIO__RenameFileDialog_Create_Callback kio__renamefiledialog_create_callback = nullptr;
    KIO__RenameFileDialog_Destroy_Callback kio__renamefiledialog_destroy_callback = nullptr;
    KIO__RenameFileDialog_FocusNextChild_Callback kio__renamefiledialog_focusnextchild_callback = nullptr;
    KIO__RenameFileDialog_FocusPreviousChild_Callback kio__renamefiledialog_focuspreviouschild_callback = nullptr;
    KIO__RenameFileDialog_Sender_Callback kio__renamefiledialog_sender_callback = nullptr;
    KIO__RenameFileDialog_SenderSignalIndex_Callback kio__renamefiledialog_sendersignalindex_callback = nullptr;
    KIO__RenameFileDialog_Receivers_Callback kio__renamefiledialog_receivers_callback = nullptr;
    KIO__RenameFileDialog_IsSignalConnected_Callback kio__renamefiledialog_issignalconnected_callback = nullptr;
    KIO__RenameFileDialog_GetDecodedMetricF_Callback kio__renamefiledialog_getdecodedmetricf_callback = nullptr;

    // Instance base flags
    mutable bool kio__renamefiledialog_metacall_isbase = false;
    mutable bool kio__renamefiledialog_setvisible_isbase = false;
    mutable bool kio__renamefiledialog_sizehint_isbase = false;
    mutable bool kio__renamefiledialog_minimumsizehint_isbase = false;
    mutable bool kio__renamefiledialog_open_isbase = false;
    mutable bool kio__renamefiledialog_exec_isbase = false;
    mutable bool kio__renamefiledialog_done_isbase = false;
    mutable bool kio__renamefiledialog_accept_isbase = false;
    mutable bool kio__renamefiledialog_reject_isbase = false;
    mutable bool kio__renamefiledialog_keypressevent_isbase = false;
    mutable bool kio__renamefiledialog_closeevent_isbase = false;
    mutable bool kio__renamefiledialog_showevent_isbase = false;
    mutable bool kio__renamefiledialog_resizeevent_isbase = false;
    mutable bool kio__renamefiledialog_contextmenuevent_isbase = false;
    mutable bool kio__renamefiledialog_eventfilter_isbase = false;
    mutable bool kio__renamefiledialog_devtype_isbase = false;
    mutable bool kio__renamefiledialog_heightforwidth_isbase = false;
    mutable bool kio__renamefiledialog_hasheightforwidth_isbase = false;
    mutable bool kio__renamefiledialog_paintengine_isbase = false;
    mutable bool kio__renamefiledialog_event_isbase = false;
    mutable bool kio__renamefiledialog_mousepressevent_isbase = false;
    mutable bool kio__renamefiledialog_mousereleaseevent_isbase = false;
    mutable bool kio__renamefiledialog_mousedoubleclickevent_isbase = false;
    mutable bool kio__renamefiledialog_mousemoveevent_isbase = false;
    mutable bool kio__renamefiledialog_wheelevent_isbase = false;
    mutable bool kio__renamefiledialog_keyreleaseevent_isbase = false;
    mutable bool kio__renamefiledialog_focusinevent_isbase = false;
    mutable bool kio__renamefiledialog_focusoutevent_isbase = false;
    mutable bool kio__renamefiledialog_enterevent_isbase = false;
    mutable bool kio__renamefiledialog_leaveevent_isbase = false;
    mutable bool kio__renamefiledialog_paintevent_isbase = false;
    mutable bool kio__renamefiledialog_moveevent_isbase = false;
    mutable bool kio__renamefiledialog_tabletevent_isbase = false;
    mutable bool kio__renamefiledialog_actionevent_isbase = false;
    mutable bool kio__renamefiledialog_dragenterevent_isbase = false;
    mutable bool kio__renamefiledialog_dragmoveevent_isbase = false;
    mutable bool kio__renamefiledialog_dragleaveevent_isbase = false;
    mutable bool kio__renamefiledialog_dropevent_isbase = false;
    mutable bool kio__renamefiledialog_hideevent_isbase = false;
    mutable bool kio__renamefiledialog_nativeevent_isbase = false;
    mutable bool kio__renamefiledialog_changeevent_isbase = false;
    mutable bool kio__renamefiledialog_metric_isbase = false;
    mutable bool kio__renamefiledialog_initpainter_isbase = false;
    mutable bool kio__renamefiledialog_redirected_isbase = false;
    mutable bool kio__renamefiledialog_sharedpainter_isbase = false;
    mutable bool kio__renamefiledialog_inputmethodevent_isbase = false;
    mutable bool kio__renamefiledialog_inputmethodquery_isbase = false;
    mutable bool kio__renamefiledialog_focusnextprevchild_isbase = false;
    mutable bool kio__renamefiledialog_timerevent_isbase = false;
    mutable bool kio__renamefiledialog_childevent_isbase = false;
    mutable bool kio__renamefiledialog_customevent_isbase = false;
    mutable bool kio__renamefiledialog_connectnotify_isbase = false;
    mutable bool kio__renamefiledialog_disconnectnotify_isbase = false;
    mutable bool kio__renamefiledialog_adjustposition_isbase = false;
    mutable bool kio__renamefiledialog_updatemicrofocus_isbase = false;
    mutable bool kio__renamefiledialog_create_isbase = false;
    mutable bool kio__renamefiledialog_destroy_isbase = false;
    mutable bool kio__renamefiledialog_focusnextchild_isbase = false;
    mutable bool kio__renamefiledialog_focuspreviouschild_isbase = false;
    mutable bool kio__renamefiledialog_sender_isbase = false;
    mutable bool kio__renamefiledialog_sendersignalindex_isbase = false;
    mutable bool kio__renamefiledialog_receivers_isbase = false;
    mutable bool kio__renamefiledialog_issignalconnected_isbase = false;
    mutable bool kio__renamefiledialog_getdecodedmetricf_isbase = false;

  public:
    VirtualKIORenameFileDialog(const KFileItemList& items, QWidget* parent) : KIO::RenameFileDialog(items, parent) {};

    ~VirtualKIORenameFileDialog() {
        kio__renamefiledialog_metacall_callback = nullptr;
        kio__renamefiledialog_setvisible_callback = nullptr;
        kio__renamefiledialog_sizehint_callback = nullptr;
        kio__renamefiledialog_minimumsizehint_callback = nullptr;
        kio__renamefiledialog_open_callback = nullptr;
        kio__renamefiledialog_exec_callback = nullptr;
        kio__renamefiledialog_done_callback = nullptr;
        kio__renamefiledialog_accept_callback = nullptr;
        kio__renamefiledialog_reject_callback = nullptr;
        kio__renamefiledialog_keypressevent_callback = nullptr;
        kio__renamefiledialog_closeevent_callback = nullptr;
        kio__renamefiledialog_showevent_callback = nullptr;
        kio__renamefiledialog_resizeevent_callback = nullptr;
        kio__renamefiledialog_contextmenuevent_callback = nullptr;
        kio__renamefiledialog_eventfilter_callback = nullptr;
        kio__renamefiledialog_devtype_callback = nullptr;
        kio__renamefiledialog_heightforwidth_callback = nullptr;
        kio__renamefiledialog_hasheightforwidth_callback = nullptr;
        kio__renamefiledialog_paintengine_callback = nullptr;
        kio__renamefiledialog_event_callback = nullptr;
        kio__renamefiledialog_mousepressevent_callback = nullptr;
        kio__renamefiledialog_mousereleaseevent_callback = nullptr;
        kio__renamefiledialog_mousedoubleclickevent_callback = nullptr;
        kio__renamefiledialog_mousemoveevent_callback = nullptr;
        kio__renamefiledialog_wheelevent_callback = nullptr;
        kio__renamefiledialog_keyreleaseevent_callback = nullptr;
        kio__renamefiledialog_focusinevent_callback = nullptr;
        kio__renamefiledialog_focusoutevent_callback = nullptr;
        kio__renamefiledialog_enterevent_callback = nullptr;
        kio__renamefiledialog_leaveevent_callback = nullptr;
        kio__renamefiledialog_paintevent_callback = nullptr;
        kio__renamefiledialog_moveevent_callback = nullptr;
        kio__renamefiledialog_tabletevent_callback = nullptr;
        kio__renamefiledialog_actionevent_callback = nullptr;
        kio__renamefiledialog_dragenterevent_callback = nullptr;
        kio__renamefiledialog_dragmoveevent_callback = nullptr;
        kio__renamefiledialog_dragleaveevent_callback = nullptr;
        kio__renamefiledialog_dropevent_callback = nullptr;
        kio__renamefiledialog_hideevent_callback = nullptr;
        kio__renamefiledialog_nativeevent_callback = nullptr;
        kio__renamefiledialog_changeevent_callback = nullptr;
        kio__renamefiledialog_metric_callback = nullptr;
        kio__renamefiledialog_initpainter_callback = nullptr;
        kio__renamefiledialog_redirected_callback = nullptr;
        kio__renamefiledialog_sharedpainter_callback = nullptr;
        kio__renamefiledialog_inputmethodevent_callback = nullptr;
        kio__renamefiledialog_inputmethodquery_callback = nullptr;
        kio__renamefiledialog_focusnextprevchild_callback = nullptr;
        kio__renamefiledialog_timerevent_callback = nullptr;
        kio__renamefiledialog_childevent_callback = nullptr;
        kio__renamefiledialog_customevent_callback = nullptr;
        kio__renamefiledialog_connectnotify_callback = nullptr;
        kio__renamefiledialog_disconnectnotify_callback = nullptr;
        kio__renamefiledialog_adjustposition_callback = nullptr;
        kio__renamefiledialog_updatemicrofocus_callback = nullptr;
        kio__renamefiledialog_create_callback = nullptr;
        kio__renamefiledialog_destroy_callback = nullptr;
        kio__renamefiledialog_focusnextchild_callback = nullptr;
        kio__renamefiledialog_focuspreviouschild_callback = nullptr;
        kio__renamefiledialog_sender_callback = nullptr;
        kio__renamefiledialog_sendersignalindex_callback = nullptr;
        kio__renamefiledialog_receivers_callback = nullptr;
        kio__renamefiledialog_issignalconnected_callback = nullptr;
        kio__renamefiledialog_getdecodedmetricf_callback = nullptr;
    }

    // Callback setters
    inline void setKIO__RenameFileDialog_Metacall_Callback(KIO__RenameFileDialog_Metacall_Callback cb) { kio__renamefiledialog_metacall_callback = cb; }
    inline void setKIO__RenameFileDialog_SetVisible_Callback(KIO__RenameFileDialog_SetVisible_Callback cb) { kio__renamefiledialog_setvisible_callback = cb; }
    inline void setKIO__RenameFileDialog_SizeHint_Callback(KIO__RenameFileDialog_SizeHint_Callback cb) { kio__renamefiledialog_sizehint_callback = cb; }
    inline void setKIO__RenameFileDialog_MinimumSizeHint_Callback(KIO__RenameFileDialog_MinimumSizeHint_Callback cb) { kio__renamefiledialog_minimumsizehint_callback = cb; }
    inline void setKIO__RenameFileDialog_Open_Callback(KIO__RenameFileDialog_Open_Callback cb) { kio__renamefiledialog_open_callback = cb; }
    inline void setKIO__RenameFileDialog_Exec_Callback(KIO__RenameFileDialog_Exec_Callback cb) { kio__renamefiledialog_exec_callback = cb; }
    inline void setKIO__RenameFileDialog_Done_Callback(KIO__RenameFileDialog_Done_Callback cb) { kio__renamefiledialog_done_callback = cb; }
    inline void setKIO__RenameFileDialog_Accept_Callback(KIO__RenameFileDialog_Accept_Callback cb) { kio__renamefiledialog_accept_callback = cb; }
    inline void setKIO__RenameFileDialog_Reject_Callback(KIO__RenameFileDialog_Reject_Callback cb) { kio__renamefiledialog_reject_callback = cb; }
    inline void setKIO__RenameFileDialog_KeyPressEvent_Callback(KIO__RenameFileDialog_KeyPressEvent_Callback cb) { kio__renamefiledialog_keypressevent_callback = cb; }
    inline void setKIO__RenameFileDialog_CloseEvent_Callback(KIO__RenameFileDialog_CloseEvent_Callback cb) { kio__renamefiledialog_closeevent_callback = cb; }
    inline void setKIO__RenameFileDialog_ShowEvent_Callback(KIO__RenameFileDialog_ShowEvent_Callback cb) { kio__renamefiledialog_showevent_callback = cb; }
    inline void setKIO__RenameFileDialog_ResizeEvent_Callback(KIO__RenameFileDialog_ResizeEvent_Callback cb) { kio__renamefiledialog_resizeevent_callback = cb; }
    inline void setKIO__RenameFileDialog_ContextMenuEvent_Callback(KIO__RenameFileDialog_ContextMenuEvent_Callback cb) { kio__renamefiledialog_contextmenuevent_callback = cb; }
    inline void setKIO__RenameFileDialog_EventFilter_Callback(KIO__RenameFileDialog_EventFilter_Callback cb) { kio__renamefiledialog_eventfilter_callback = cb; }
    inline void setKIO__RenameFileDialog_DevType_Callback(KIO__RenameFileDialog_DevType_Callback cb) { kio__renamefiledialog_devtype_callback = cb; }
    inline void setKIO__RenameFileDialog_HeightForWidth_Callback(KIO__RenameFileDialog_HeightForWidth_Callback cb) { kio__renamefiledialog_heightforwidth_callback = cb; }
    inline void setKIO__RenameFileDialog_HasHeightForWidth_Callback(KIO__RenameFileDialog_HasHeightForWidth_Callback cb) { kio__renamefiledialog_hasheightforwidth_callback = cb; }
    inline void setKIO__RenameFileDialog_PaintEngine_Callback(KIO__RenameFileDialog_PaintEngine_Callback cb) { kio__renamefiledialog_paintengine_callback = cb; }
    inline void setKIO__RenameFileDialog_Event_Callback(KIO__RenameFileDialog_Event_Callback cb) { kio__renamefiledialog_event_callback = cb; }
    inline void setKIO__RenameFileDialog_MousePressEvent_Callback(KIO__RenameFileDialog_MousePressEvent_Callback cb) { kio__renamefiledialog_mousepressevent_callback = cb; }
    inline void setKIO__RenameFileDialog_MouseReleaseEvent_Callback(KIO__RenameFileDialog_MouseReleaseEvent_Callback cb) { kio__renamefiledialog_mousereleaseevent_callback = cb; }
    inline void setKIO__RenameFileDialog_MouseDoubleClickEvent_Callback(KIO__RenameFileDialog_MouseDoubleClickEvent_Callback cb) { kio__renamefiledialog_mousedoubleclickevent_callback = cb; }
    inline void setKIO__RenameFileDialog_MouseMoveEvent_Callback(KIO__RenameFileDialog_MouseMoveEvent_Callback cb) { kio__renamefiledialog_mousemoveevent_callback = cb; }
    inline void setKIO__RenameFileDialog_WheelEvent_Callback(KIO__RenameFileDialog_WheelEvent_Callback cb) { kio__renamefiledialog_wheelevent_callback = cb; }
    inline void setKIO__RenameFileDialog_KeyReleaseEvent_Callback(KIO__RenameFileDialog_KeyReleaseEvent_Callback cb) { kio__renamefiledialog_keyreleaseevent_callback = cb; }
    inline void setKIO__RenameFileDialog_FocusInEvent_Callback(KIO__RenameFileDialog_FocusInEvent_Callback cb) { kio__renamefiledialog_focusinevent_callback = cb; }
    inline void setKIO__RenameFileDialog_FocusOutEvent_Callback(KIO__RenameFileDialog_FocusOutEvent_Callback cb) { kio__renamefiledialog_focusoutevent_callback = cb; }
    inline void setKIO__RenameFileDialog_EnterEvent_Callback(KIO__RenameFileDialog_EnterEvent_Callback cb) { kio__renamefiledialog_enterevent_callback = cb; }
    inline void setKIO__RenameFileDialog_LeaveEvent_Callback(KIO__RenameFileDialog_LeaveEvent_Callback cb) { kio__renamefiledialog_leaveevent_callback = cb; }
    inline void setKIO__RenameFileDialog_PaintEvent_Callback(KIO__RenameFileDialog_PaintEvent_Callback cb) { kio__renamefiledialog_paintevent_callback = cb; }
    inline void setKIO__RenameFileDialog_MoveEvent_Callback(KIO__RenameFileDialog_MoveEvent_Callback cb) { kio__renamefiledialog_moveevent_callback = cb; }
    inline void setKIO__RenameFileDialog_TabletEvent_Callback(KIO__RenameFileDialog_TabletEvent_Callback cb) { kio__renamefiledialog_tabletevent_callback = cb; }
    inline void setKIO__RenameFileDialog_ActionEvent_Callback(KIO__RenameFileDialog_ActionEvent_Callback cb) { kio__renamefiledialog_actionevent_callback = cb; }
    inline void setKIO__RenameFileDialog_DragEnterEvent_Callback(KIO__RenameFileDialog_DragEnterEvent_Callback cb) { kio__renamefiledialog_dragenterevent_callback = cb; }
    inline void setKIO__RenameFileDialog_DragMoveEvent_Callback(KIO__RenameFileDialog_DragMoveEvent_Callback cb) { kio__renamefiledialog_dragmoveevent_callback = cb; }
    inline void setKIO__RenameFileDialog_DragLeaveEvent_Callback(KIO__RenameFileDialog_DragLeaveEvent_Callback cb) { kio__renamefiledialog_dragleaveevent_callback = cb; }
    inline void setKIO__RenameFileDialog_DropEvent_Callback(KIO__RenameFileDialog_DropEvent_Callback cb) { kio__renamefiledialog_dropevent_callback = cb; }
    inline void setKIO__RenameFileDialog_HideEvent_Callback(KIO__RenameFileDialog_HideEvent_Callback cb) { kio__renamefiledialog_hideevent_callback = cb; }
    inline void setKIO__RenameFileDialog_NativeEvent_Callback(KIO__RenameFileDialog_NativeEvent_Callback cb) { kio__renamefiledialog_nativeevent_callback = cb; }
    inline void setKIO__RenameFileDialog_ChangeEvent_Callback(KIO__RenameFileDialog_ChangeEvent_Callback cb) { kio__renamefiledialog_changeevent_callback = cb; }
    inline void setKIO__RenameFileDialog_Metric_Callback(KIO__RenameFileDialog_Metric_Callback cb) { kio__renamefiledialog_metric_callback = cb; }
    inline void setKIO__RenameFileDialog_InitPainter_Callback(KIO__RenameFileDialog_InitPainter_Callback cb) { kio__renamefiledialog_initpainter_callback = cb; }
    inline void setKIO__RenameFileDialog_Redirected_Callback(KIO__RenameFileDialog_Redirected_Callback cb) { kio__renamefiledialog_redirected_callback = cb; }
    inline void setKIO__RenameFileDialog_SharedPainter_Callback(KIO__RenameFileDialog_SharedPainter_Callback cb) { kio__renamefiledialog_sharedpainter_callback = cb; }
    inline void setKIO__RenameFileDialog_InputMethodEvent_Callback(KIO__RenameFileDialog_InputMethodEvent_Callback cb) { kio__renamefiledialog_inputmethodevent_callback = cb; }
    inline void setKIO__RenameFileDialog_InputMethodQuery_Callback(KIO__RenameFileDialog_InputMethodQuery_Callback cb) { kio__renamefiledialog_inputmethodquery_callback = cb; }
    inline void setKIO__RenameFileDialog_FocusNextPrevChild_Callback(KIO__RenameFileDialog_FocusNextPrevChild_Callback cb) { kio__renamefiledialog_focusnextprevchild_callback = cb; }
    inline void setKIO__RenameFileDialog_TimerEvent_Callback(KIO__RenameFileDialog_TimerEvent_Callback cb) { kio__renamefiledialog_timerevent_callback = cb; }
    inline void setKIO__RenameFileDialog_ChildEvent_Callback(KIO__RenameFileDialog_ChildEvent_Callback cb) { kio__renamefiledialog_childevent_callback = cb; }
    inline void setKIO__RenameFileDialog_CustomEvent_Callback(KIO__RenameFileDialog_CustomEvent_Callback cb) { kio__renamefiledialog_customevent_callback = cb; }
    inline void setKIO__RenameFileDialog_ConnectNotify_Callback(KIO__RenameFileDialog_ConnectNotify_Callback cb) { kio__renamefiledialog_connectnotify_callback = cb; }
    inline void setKIO__RenameFileDialog_DisconnectNotify_Callback(KIO__RenameFileDialog_DisconnectNotify_Callback cb) { kio__renamefiledialog_disconnectnotify_callback = cb; }
    inline void setKIO__RenameFileDialog_AdjustPosition_Callback(KIO__RenameFileDialog_AdjustPosition_Callback cb) { kio__renamefiledialog_adjustposition_callback = cb; }
    inline void setKIO__RenameFileDialog_UpdateMicroFocus_Callback(KIO__RenameFileDialog_UpdateMicroFocus_Callback cb) { kio__renamefiledialog_updatemicrofocus_callback = cb; }
    inline void setKIO__RenameFileDialog_Create_Callback(KIO__RenameFileDialog_Create_Callback cb) { kio__renamefiledialog_create_callback = cb; }
    inline void setKIO__RenameFileDialog_Destroy_Callback(KIO__RenameFileDialog_Destroy_Callback cb) { kio__renamefiledialog_destroy_callback = cb; }
    inline void setKIO__RenameFileDialog_FocusNextChild_Callback(KIO__RenameFileDialog_FocusNextChild_Callback cb) { kio__renamefiledialog_focusnextchild_callback = cb; }
    inline void setKIO__RenameFileDialog_FocusPreviousChild_Callback(KIO__RenameFileDialog_FocusPreviousChild_Callback cb) { kio__renamefiledialog_focuspreviouschild_callback = cb; }
    inline void setKIO__RenameFileDialog_Sender_Callback(KIO__RenameFileDialog_Sender_Callback cb) { kio__renamefiledialog_sender_callback = cb; }
    inline void setKIO__RenameFileDialog_SenderSignalIndex_Callback(KIO__RenameFileDialog_SenderSignalIndex_Callback cb) { kio__renamefiledialog_sendersignalindex_callback = cb; }
    inline void setKIO__RenameFileDialog_Receivers_Callback(KIO__RenameFileDialog_Receivers_Callback cb) { kio__renamefiledialog_receivers_callback = cb; }
    inline void setKIO__RenameFileDialog_IsSignalConnected_Callback(KIO__RenameFileDialog_IsSignalConnected_Callback cb) { kio__renamefiledialog_issignalconnected_callback = cb; }
    inline void setKIO__RenameFileDialog_GetDecodedMetricF_Callback(KIO__RenameFileDialog_GetDecodedMetricF_Callback cb) { kio__renamefiledialog_getdecodedmetricf_callback = cb; }

    // Base flag setters
    inline void setKIO__RenameFileDialog_Metacall_IsBase(bool value) const { kio__renamefiledialog_metacall_isbase = value; }
    inline void setKIO__RenameFileDialog_SetVisible_IsBase(bool value) const { kio__renamefiledialog_setvisible_isbase = value; }
    inline void setKIO__RenameFileDialog_SizeHint_IsBase(bool value) const { kio__renamefiledialog_sizehint_isbase = value; }
    inline void setKIO__RenameFileDialog_MinimumSizeHint_IsBase(bool value) const { kio__renamefiledialog_minimumsizehint_isbase = value; }
    inline void setKIO__RenameFileDialog_Open_IsBase(bool value) const { kio__renamefiledialog_open_isbase = value; }
    inline void setKIO__RenameFileDialog_Exec_IsBase(bool value) const { kio__renamefiledialog_exec_isbase = value; }
    inline void setKIO__RenameFileDialog_Done_IsBase(bool value) const { kio__renamefiledialog_done_isbase = value; }
    inline void setKIO__RenameFileDialog_Accept_IsBase(bool value) const { kio__renamefiledialog_accept_isbase = value; }
    inline void setKIO__RenameFileDialog_Reject_IsBase(bool value) const { kio__renamefiledialog_reject_isbase = value; }
    inline void setKIO__RenameFileDialog_KeyPressEvent_IsBase(bool value) const { kio__renamefiledialog_keypressevent_isbase = value; }
    inline void setKIO__RenameFileDialog_CloseEvent_IsBase(bool value) const { kio__renamefiledialog_closeevent_isbase = value; }
    inline void setKIO__RenameFileDialog_ShowEvent_IsBase(bool value) const { kio__renamefiledialog_showevent_isbase = value; }
    inline void setKIO__RenameFileDialog_ResizeEvent_IsBase(bool value) const { kio__renamefiledialog_resizeevent_isbase = value; }
    inline void setKIO__RenameFileDialog_ContextMenuEvent_IsBase(bool value) const { kio__renamefiledialog_contextmenuevent_isbase = value; }
    inline void setKIO__RenameFileDialog_EventFilter_IsBase(bool value) const { kio__renamefiledialog_eventfilter_isbase = value; }
    inline void setKIO__RenameFileDialog_DevType_IsBase(bool value) const { kio__renamefiledialog_devtype_isbase = value; }
    inline void setKIO__RenameFileDialog_HeightForWidth_IsBase(bool value) const { kio__renamefiledialog_heightforwidth_isbase = value; }
    inline void setKIO__RenameFileDialog_HasHeightForWidth_IsBase(bool value) const { kio__renamefiledialog_hasheightforwidth_isbase = value; }
    inline void setKIO__RenameFileDialog_PaintEngine_IsBase(bool value) const { kio__renamefiledialog_paintengine_isbase = value; }
    inline void setKIO__RenameFileDialog_Event_IsBase(bool value) const { kio__renamefiledialog_event_isbase = value; }
    inline void setKIO__RenameFileDialog_MousePressEvent_IsBase(bool value) const { kio__renamefiledialog_mousepressevent_isbase = value; }
    inline void setKIO__RenameFileDialog_MouseReleaseEvent_IsBase(bool value) const { kio__renamefiledialog_mousereleaseevent_isbase = value; }
    inline void setKIO__RenameFileDialog_MouseDoubleClickEvent_IsBase(bool value) const { kio__renamefiledialog_mousedoubleclickevent_isbase = value; }
    inline void setKIO__RenameFileDialog_MouseMoveEvent_IsBase(bool value) const { kio__renamefiledialog_mousemoveevent_isbase = value; }
    inline void setKIO__RenameFileDialog_WheelEvent_IsBase(bool value) const { kio__renamefiledialog_wheelevent_isbase = value; }
    inline void setKIO__RenameFileDialog_KeyReleaseEvent_IsBase(bool value) const { kio__renamefiledialog_keyreleaseevent_isbase = value; }
    inline void setKIO__RenameFileDialog_FocusInEvent_IsBase(bool value) const { kio__renamefiledialog_focusinevent_isbase = value; }
    inline void setKIO__RenameFileDialog_FocusOutEvent_IsBase(bool value) const { kio__renamefiledialog_focusoutevent_isbase = value; }
    inline void setKIO__RenameFileDialog_EnterEvent_IsBase(bool value) const { kio__renamefiledialog_enterevent_isbase = value; }
    inline void setKIO__RenameFileDialog_LeaveEvent_IsBase(bool value) const { kio__renamefiledialog_leaveevent_isbase = value; }
    inline void setKIO__RenameFileDialog_PaintEvent_IsBase(bool value) const { kio__renamefiledialog_paintevent_isbase = value; }
    inline void setKIO__RenameFileDialog_MoveEvent_IsBase(bool value) const { kio__renamefiledialog_moveevent_isbase = value; }
    inline void setKIO__RenameFileDialog_TabletEvent_IsBase(bool value) const { kio__renamefiledialog_tabletevent_isbase = value; }
    inline void setKIO__RenameFileDialog_ActionEvent_IsBase(bool value) const { kio__renamefiledialog_actionevent_isbase = value; }
    inline void setKIO__RenameFileDialog_DragEnterEvent_IsBase(bool value) const { kio__renamefiledialog_dragenterevent_isbase = value; }
    inline void setKIO__RenameFileDialog_DragMoveEvent_IsBase(bool value) const { kio__renamefiledialog_dragmoveevent_isbase = value; }
    inline void setKIO__RenameFileDialog_DragLeaveEvent_IsBase(bool value) const { kio__renamefiledialog_dragleaveevent_isbase = value; }
    inline void setKIO__RenameFileDialog_DropEvent_IsBase(bool value) const { kio__renamefiledialog_dropevent_isbase = value; }
    inline void setKIO__RenameFileDialog_HideEvent_IsBase(bool value) const { kio__renamefiledialog_hideevent_isbase = value; }
    inline void setKIO__RenameFileDialog_NativeEvent_IsBase(bool value) const { kio__renamefiledialog_nativeevent_isbase = value; }
    inline void setKIO__RenameFileDialog_ChangeEvent_IsBase(bool value) const { kio__renamefiledialog_changeevent_isbase = value; }
    inline void setKIO__RenameFileDialog_Metric_IsBase(bool value) const { kio__renamefiledialog_metric_isbase = value; }
    inline void setKIO__RenameFileDialog_InitPainter_IsBase(bool value) const { kio__renamefiledialog_initpainter_isbase = value; }
    inline void setKIO__RenameFileDialog_Redirected_IsBase(bool value) const { kio__renamefiledialog_redirected_isbase = value; }
    inline void setKIO__RenameFileDialog_SharedPainter_IsBase(bool value) const { kio__renamefiledialog_sharedpainter_isbase = value; }
    inline void setKIO__RenameFileDialog_InputMethodEvent_IsBase(bool value) const { kio__renamefiledialog_inputmethodevent_isbase = value; }
    inline void setKIO__RenameFileDialog_InputMethodQuery_IsBase(bool value) const { kio__renamefiledialog_inputmethodquery_isbase = value; }
    inline void setKIO__RenameFileDialog_FocusNextPrevChild_IsBase(bool value) const { kio__renamefiledialog_focusnextprevchild_isbase = value; }
    inline void setKIO__RenameFileDialog_TimerEvent_IsBase(bool value) const { kio__renamefiledialog_timerevent_isbase = value; }
    inline void setKIO__RenameFileDialog_ChildEvent_IsBase(bool value) const { kio__renamefiledialog_childevent_isbase = value; }
    inline void setKIO__RenameFileDialog_CustomEvent_IsBase(bool value) const { kio__renamefiledialog_customevent_isbase = value; }
    inline void setKIO__RenameFileDialog_ConnectNotify_IsBase(bool value) const { kio__renamefiledialog_connectnotify_isbase = value; }
    inline void setKIO__RenameFileDialog_DisconnectNotify_IsBase(bool value) const { kio__renamefiledialog_disconnectnotify_isbase = value; }
    inline void setKIO__RenameFileDialog_AdjustPosition_IsBase(bool value) const { kio__renamefiledialog_adjustposition_isbase = value; }
    inline void setKIO__RenameFileDialog_UpdateMicroFocus_IsBase(bool value) const { kio__renamefiledialog_updatemicrofocus_isbase = value; }
    inline void setKIO__RenameFileDialog_Create_IsBase(bool value) const { kio__renamefiledialog_create_isbase = value; }
    inline void setKIO__RenameFileDialog_Destroy_IsBase(bool value) const { kio__renamefiledialog_destroy_isbase = value; }
    inline void setKIO__RenameFileDialog_FocusNextChild_IsBase(bool value) const { kio__renamefiledialog_focusnextchild_isbase = value; }
    inline void setKIO__RenameFileDialog_FocusPreviousChild_IsBase(bool value) const { kio__renamefiledialog_focuspreviouschild_isbase = value; }
    inline void setKIO__RenameFileDialog_Sender_IsBase(bool value) const { kio__renamefiledialog_sender_isbase = value; }
    inline void setKIO__RenameFileDialog_SenderSignalIndex_IsBase(bool value) const { kio__renamefiledialog_sendersignalindex_isbase = value; }
    inline void setKIO__RenameFileDialog_Receivers_IsBase(bool value) const { kio__renamefiledialog_receivers_isbase = value; }
    inline void setKIO__RenameFileDialog_IsSignalConnected_IsBase(bool value) const { kio__renamefiledialog_issignalconnected_isbase = value; }
    inline void setKIO__RenameFileDialog_GetDecodedMetricF_IsBase(bool value) const { kio__renamefiledialog_getdecodedmetricf_isbase = value; }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (kio__renamefiledialog_metacall_isbase) {
            kio__renamefiledialog_metacall_isbase = false;
            return KIO__RenameFileDialog::qt_metacall(param1, param2, param3);
        } else if (kio__renamefiledialog_metacall_callback != nullptr) {
            int cbval1 = static_cast<int>(param1);
            int cbval2 = param2;
            void** cbval3 = param3;

            int callback_ret = kio__renamefiledialog_metacall_callback(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        } else {
            return KIO__RenameFileDialog::qt_metacall(param1, param2, param3);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void setVisible(bool visible) override {
        if (kio__renamefiledialog_setvisible_isbase) {
            kio__renamefiledialog_setvisible_isbase = false;
            KIO__RenameFileDialog::setVisible(visible);
        } else if (kio__renamefiledialog_setvisible_callback != nullptr) {
            bool cbval1 = visible;

            kio__renamefiledialog_setvisible_callback(this, cbval1);
        } else {
            KIO__RenameFileDialog::setVisible(visible);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QSize sizeHint() const override {
        if (kio__renamefiledialog_sizehint_isbase) {
            kio__renamefiledialog_sizehint_isbase = false;
            return KIO__RenameFileDialog::sizeHint();
        } else if (kio__renamefiledialog_sizehint_callback != nullptr) {
            QSize* callback_ret = kio__renamefiledialog_sizehint_callback();
            return *callback_ret;
        } else {
            return KIO__RenameFileDialog::sizeHint();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QSize minimumSizeHint() const override {
        if (kio__renamefiledialog_minimumsizehint_isbase) {
            kio__renamefiledialog_minimumsizehint_isbase = false;
            return KIO__RenameFileDialog::minimumSizeHint();
        } else if (kio__renamefiledialog_minimumsizehint_callback != nullptr) {
            QSize* callback_ret = kio__renamefiledialog_minimumsizehint_callback();
            return *callback_ret;
        } else {
            return KIO__RenameFileDialog::minimumSizeHint();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void open() override {
        if (kio__renamefiledialog_open_isbase) {
            kio__renamefiledialog_open_isbase = false;
            KIO__RenameFileDialog::open();
        } else if (kio__renamefiledialog_open_callback != nullptr) {
            kio__renamefiledialog_open_callback();
        } else {
            KIO__RenameFileDialog::open();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual int exec() override {
        if (kio__renamefiledialog_exec_isbase) {
            kio__renamefiledialog_exec_isbase = false;
            return KIO__RenameFileDialog::exec();
        } else if (kio__renamefiledialog_exec_callback != nullptr) {
            int callback_ret = kio__renamefiledialog_exec_callback();
            return static_cast<int>(callback_ret);
        } else {
            return KIO__RenameFileDialog::exec();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void done(int param1) override {
        if (kio__renamefiledialog_done_isbase) {
            kio__renamefiledialog_done_isbase = false;
            KIO__RenameFileDialog::done(param1);
        } else if (kio__renamefiledialog_done_callback != nullptr) {
            int cbval1 = param1;

            kio__renamefiledialog_done_callback(this, cbval1);
        } else {
            KIO__RenameFileDialog::done(param1);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void accept() override {
        if (kio__renamefiledialog_accept_isbase) {
            kio__renamefiledialog_accept_isbase = false;
            KIO__RenameFileDialog::accept();
        } else if (kio__renamefiledialog_accept_callback != nullptr) {
            kio__renamefiledialog_accept_callback();
        } else {
            KIO__RenameFileDialog::accept();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void reject() override {
        if (kio__renamefiledialog_reject_isbase) {
            kio__renamefiledialog_reject_isbase = false;
            KIO__RenameFileDialog::reject();
        } else if (kio__renamefiledialog_reject_callback != nullptr) {
            kio__renamefiledialog_reject_callback();
        } else {
            KIO__RenameFileDialog::reject();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void keyPressEvent(QKeyEvent* param1) override {
        if (kio__renamefiledialog_keypressevent_isbase) {
            kio__renamefiledialog_keypressevent_isbase = false;
            KIO__RenameFileDialog::keyPressEvent(param1);
        } else if (kio__renamefiledialog_keypressevent_callback != nullptr) {
            QKeyEvent* cbval1 = param1;

            kio__renamefiledialog_keypressevent_callback(this, cbval1);
        } else {
            KIO__RenameFileDialog::keyPressEvent(param1);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void closeEvent(QCloseEvent* param1) override {
        if (kio__renamefiledialog_closeevent_isbase) {
            kio__renamefiledialog_closeevent_isbase = false;
            KIO__RenameFileDialog::closeEvent(param1);
        } else if (kio__renamefiledialog_closeevent_callback != nullptr) {
            QCloseEvent* cbval1 = param1;

            kio__renamefiledialog_closeevent_callback(this, cbval1);
        } else {
            KIO__RenameFileDialog::closeEvent(param1);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void showEvent(QShowEvent* param1) override {
        if (kio__renamefiledialog_showevent_isbase) {
            kio__renamefiledialog_showevent_isbase = false;
            KIO__RenameFileDialog::showEvent(param1);
        } else if (kio__renamefiledialog_showevent_callback != nullptr) {
            QShowEvent* cbval1 = param1;

            kio__renamefiledialog_showevent_callback(this, cbval1);
        } else {
            KIO__RenameFileDialog::showEvent(param1);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void resizeEvent(QResizeEvent* param1) override {
        if (kio__renamefiledialog_resizeevent_isbase) {
            kio__renamefiledialog_resizeevent_isbase = false;
            KIO__RenameFileDialog::resizeEvent(param1);
        } else if (kio__renamefiledialog_resizeevent_callback != nullptr) {
            QResizeEvent* cbval1 = param1;

            kio__renamefiledialog_resizeevent_callback(this, cbval1);
        } else {
            KIO__RenameFileDialog::resizeEvent(param1);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void contextMenuEvent(QContextMenuEvent* param1) override {
        if (kio__renamefiledialog_contextmenuevent_isbase) {
            kio__renamefiledialog_contextmenuevent_isbase = false;
            KIO__RenameFileDialog::contextMenuEvent(param1);
        } else if (kio__renamefiledialog_contextmenuevent_callback != nullptr) {
            QContextMenuEvent* cbval1 = param1;

            kio__renamefiledialog_contextmenuevent_callback(this, cbval1);
        } else {
            KIO__RenameFileDialog::contextMenuEvent(param1);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* param1, QEvent* param2) override {
        if (kio__renamefiledialog_eventfilter_isbase) {
            kio__renamefiledialog_eventfilter_isbase = false;
            return KIO__RenameFileDialog::eventFilter(param1, param2);
        } else if (kio__renamefiledialog_eventfilter_callback != nullptr) {
            QObject* cbval1 = param1;
            QEvent* cbval2 = param2;

            bool callback_ret = kio__renamefiledialog_eventfilter_callback(this, cbval1, cbval2);
            return callback_ret;
        } else {
            return KIO__RenameFileDialog::eventFilter(param1, param2);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual int devType() const override {
        if (kio__renamefiledialog_devtype_isbase) {
            kio__renamefiledialog_devtype_isbase = false;
            return KIO__RenameFileDialog::devType();
        } else if (kio__renamefiledialog_devtype_callback != nullptr) {
            int callback_ret = kio__renamefiledialog_devtype_callback();
            return static_cast<int>(callback_ret);
        } else {
            return KIO__RenameFileDialog::devType();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual int heightForWidth(int param1) const override {
        if (kio__renamefiledialog_heightforwidth_isbase) {
            kio__renamefiledialog_heightforwidth_isbase = false;
            return KIO__RenameFileDialog::heightForWidth(param1);
        } else if (kio__renamefiledialog_heightforwidth_callback != nullptr) {
            int cbval1 = param1;

            int callback_ret = kio__renamefiledialog_heightforwidth_callback(this, cbval1);
            return static_cast<int>(callback_ret);
        } else {
            return KIO__RenameFileDialog::heightForWidth(param1);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool hasHeightForWidth() const override {
        if (kio__renamefiledialog_hasheightforwidth_isbase) {
            kio__renamefiledialog_hasheightforwidth_isbase = false;
            return KIO__RenameFileDialog::hasHeightForWidth();
        } else if (kio__renamefiledialog_hasheightforwidth_callback != nullptr) {
            bool callback_ret = kio__renamefiledialog_hasheightforwidth_callback();
            return callback_ret;
        } else {
            return KIO__RenameFileDialog::hasHeightForWidth();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QPaintEngine* paintEngine() const override {
        if (kio__renamefiledialog_paintengine_isbase) {
            kio__renamefiledialog_paintengine_isbase = false;
            return KIO__RenameFileDialog::paintEngine();
        } else if (kio__renamefiledialog_paintengine_callback != nullptr) {
            QPaintEngine* callback_ret = kio__renamefiledialog_paintengine_callback();
            return callback_ret;
        } else {
            return KIO__RenameFileDialog::paintEngine();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* event) override {
        if (kio__renamefiledialog_event_isbase) {
            kio__renamefiledialog_event_isbase = false;
            return KIO__RenameFileDialog::event(event);
        } else if (kio__renamefiledialog_event_callback != nullptr) {
            QEvent* cbval1 = event;

            bool callback_ret = kio__renamefiledialog_event_callback(this, cbval1);
            return callback_ret;
        } else {
            return KIO__RenameFileDialog::event(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void mousePressEvent(QMouseEvent* event) override {
        if (kio__renamefiledialog_mousepressevent_isbase) {
            kio__renamefiledialog_mousepressevent_isbase = false;
            KIO__RenameFileDialog::mousePressEvent(event);
        } else if (kio__renamefiledialog_mousepressevent_callback != nullptr) {
            QMouseEvent* cbval1 = event;

            kio__renamefiledialog_mousepressevent_callback(this, cbval1);
        } else {
            KIO__RenameFileDialog::mousePressEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseReleaseEvent(QMouseEvent* event) override {
        if (kio__renamefiledialog_mousereleaseevent_isbase) {
            kio__renamefiledialog_mousereleaseevent_isbase = false;
            KIO__RenameFileDialog::mouseReleaseEvent(event);
        } else if (kio__renamefiledialog_mousereleaseevent_callback != nullptr) {
            QMouseEvent* cbval1 = event;

            kio__renamefiledialog_mousereleaseevent_callback(this, cbval1);
        } else {
            KIO__RenameFileDialog::mouseReleaseEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseDoubleClickEvent(QMouseEvent* event) override {
        if (kio__renamefiledialog_mousedoubleclickevent_isbase) {
            kio__renamefiledialog_mousedoubleclickevent_isbase = false;
            KIO__RenameFileDialog::mouseDoubleClickEvent(event);
        } else if (kio__renamefiledialog_mousedoubleclickevent_callback != nullptr) {
            QMouseEvent* cbval1 = event;

            kio__renamefiledialog_mousedoubleclickevent_callback(this, cbval1);
        } else {
            KIO__RenameFileDialog::mouseDoubleClickEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseMoveEvent(QMouseEvent* event) override {
        if (kio__renamefiledialog_mousemoveevent_isbase) {
            kio__renamefiledialog_mousemoveevent_isbase = false;
            KIO__RenameFileDialog::mouseMoveEvent(event);
        } else if (kio__renamefiledialog_mousemoveevent_callback != nullptr) {
            QMouseEvent* cbval1 = event;

            kio__renamefiledialog_mousemoveevent_callback(this, cbval1);
        } else {
            KIO__RenameFileDialog::mouseMoveEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void wheelEvent(QWheelEvent* event) override {
        if (kio__renamefiledialog_wheelevent_isbase) {
            kio__renamefiledialog_wheelevent_isbase = false;
            KIO__RenameFileDialog::wheelEvent(event);
        } else if (kio__renamefiledialog_wheelevent_callback != nullptr) {
            QWheelEvent* cbval1 = event;

            kio__renamefiledialog_wheelevent_callback(this, cbval1);
        } else {
            KIO__RenameFileDialog::wheelEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void keyReleaseEvent(QKeyEvent* event) override {
        if (kio__renamefiledialog_keyreleaseevent_isbase) {
            kio__renamefiledialog_keyreleaseevent_isbase = false;
            KIO__RenameFileDialog::keyReleaseEvent(event);
        } else if (kio__renamefiledialog_keyreleaseevent_callback != nullptr) {
            QKeyEvent* cbval1 = event;

            kio__renamefiledialog_keyreleaseevent_callback(this, cbval1);
        } else {
            KIO__RenameFileDialog::keyReleaseEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void focusInEvent(QFocusEvent* event) override {
        if (kio__renamefiledialog_focusinevent_isbase) {
            kio__renamefiledialog_focusinevent_isbase = false;
            KIO__RenameFileDialog::focusInEvent(event);
        } else if (kio__renamefiledialog_focusinevent_callback != nullptr) {
            QFocusEvent* cbval1 = event;

            kio__renamefiledialog_focusinevent_callback(this, cbval1);
        } else {
            KIO__RenameFileDialog::focusInEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void focusOutEvent(QFocusEvent* event) override {
        if (kio__renamefiledialog_focusoutevent_isbase) {
            kio__renamefiledialog_focusoutevent_isbase = false;
            KIO__RenameFileDialog::focusOutEvent(event);
        } else if (kio__renamefiledialog_focusoutevent_callback != nullptr) {
            QFocusEvent* cbval1 = event;

            kio__renamefiledialog_focusoutevent_callback(this, cbval1);
        } else {
            KIO__RenameFileDialog::focusOutEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void enterEvent(QEnterEvent* event) override {
        if (kio__renamefiledialog_enterevent_isbase) {
            kio__renamefiledialog_enterevent_isbase = false;
            KIO__RenameFileDialog::enterEvent(event);
        } else if (kio__renamefiledialog_enterevent_callback != nullptr) {
            QEnterEvent* cbval1 = event;

            kio__renamefiledialog_enterevent_callback(this, cbval1);
        } else {
            KIO__RenameFileDialog::enterEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void leaveEvent(QEvent* event) override {
        if (kio__renamefiledialog_leaveevent_isbase) {
            kio__renamefiledialog_leaveevent_isbase = false;
            KIO__RenameFileDialog::leaveEvent(event);
        } else if (kio__renamefiledialog_leaveevent_callback != nullptr) {
            QEvent* cbval1 = event;

            kio__renamefiledialog_leaveevent_callback(this, cbval1);
        } else {
            KIO__RenameFileDialog::leaveEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void paintEvent(QPaintEvent* event) override {
        if (kio__renamefiledialog_paintevent_isbase) {
            kio__renamefiledialog_paintevent_isbase = false;
            KIO__RenameFileDialog::paintEvent(event);
        } else if (kio__renamefiledialog_paintevent_callback != nullptr) {
            QPaintEvent* cbval1 = event;

            kio__renamefiledialog_paintevent_callback(this, cbval1);
        } else {
            KIO__RenameFileDialog::paintEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void moveEvent(QMoveEvent* event) override {
        if (kio__renamefiledialog_moveevent_isbase) {
            kio__renamefiledialog_moveevent_isbase = false;
            KIO__RenameFileDialog::moveEvent(event);
        } else if (kio__renamefiledialog_moveevent_callback != nullptr) {
            QMoveEvent* cbval1 = event;

            kio__renamefiledialog_moveevent_callback(this, cbval1);
        } else {
            KIO__RenameFileDialog::moveEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void tabletEvent(QTabletEvent* event) override {
        if (kio__renamefiledialog_tabletevent_isbase) {
            kio__renamefiledialog_tabletevent_isbase = false;
            KIO__RenameFileDialog::tabletEvent(event);
        } else if (kio__renamefiledialog_tabletevent_callback != nullptr) {
            QTabletEvent* cbval1 = event;

            kio__renamefiledialog_tabletevent_callback(this, cbval1);
        } else {
            KIO__RenameFileDialog::tabletEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void actionEvent(QActionEvent* event) override {
        if (kio__renamefiledialog_actionevent_isbase) {
            kio__renamefiledialog_actionevent_isbase = false;
            KIO__RenameFileDialog::actionEvent(event);
        } else if (kio__renamefiledialog_actionevent_callback != nullptr) {
            QActionEvent* cbval1 = event;

            kio__renamefiledialog_actionevent_callback(this, cbval1);
        } else {
            KIO__RenameFileDialog::actionEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragEnterEvent(QDragEnterEvent* event) override {
        if (kio__renamefiledialog_dragenterevent_isbase) {
            kio__renamefiledialog_dragenterevent_isbase = false;
            KIO__RenameFileDialog::dragEnterEvent(event);
        } else if (kio__renamefiledialog_dragenterevent_callback != nullptr) {
            QDragEnterEvent* cbval1 = event;

            kio__renamefiledialog_dragenterevent_callback(this, cbval1);
        } else {
            KIO__RenameFileDialog::dragEnterEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragMoveEvent(QDragMoveEvent* event) override {
        if (kio__renamefiledialog_dragmoveevent_isbase) {
            kio__renamefiledialog_dragmoveevent_isbase = false;
            KIO__RenameFileDialog::dragMoveEvent(event);
        } else if (kio__renamefiledialog_dragmoveevent_callback != nullptr) {
            QDragMoveEvent* cbval1 = event;

            kio__renamefiledialog_dragmoveevent_callback(this, cbval1);
        } else {
            KIO__RenameFileDialog::dragMoveEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragLeaveEvent(QDragLeaveEvent* event) override {
        if (kio__renamefiledialog_dragleaveevent_isbase) {
            kio__renamefiledialog_dragleaveevent_isbase = false;
            KIO__RenameFileDialog::dragLeaveEvent(event);
        } else if (kio__renamefiledialog_dragleaveevent_callback != nullptr) {
            QDragLeaveEvent* cbval1 = event;

            kio__renamefiledialog_dragleaveevent_callback(this, cbval1);
        } else {
            KIO__RenameFileDialog::dragLeaveEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void dropEvent(QDropEvent* event) override {
        if (kio__renamefiledialog_dropevent_isbase) {
            kio__renamefiledialog_dropevent_isbase = false;
            KIO__RenameFileDialog::dropEvent(event);
        } else if (kio__renamefiledialog_dropevent_callback != nullptr) {
            QDropEvent* cbval1 = event;

            kio__renamefiledialog_dropevent_callback(this, cbval1);
        } else {
            KIO__RenameFileDialog::dropEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void hideEvent(QHideEvent* event) override {
        if (kio__renamefiledialog_hideevent_isbase) {
            kio__renamefiledialog_hideevent_isbase = false;
            KIO__RenameFileDialog::hideEvent(event);
        } else if (kio__renamefiledialog_hideevent_callback != nullptr) {
            QHideEvent* cbval1 = event;

            kio__renamefiledialog_hideevent_callback(this, cbval1);
        } else {
            KIO__RenameFileDialog::hideEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool nativeEvent(const QByteArray& eventType, void* message, qintptr* result) override {
        if (kio__renamefiledialog_nativeevent_isbase) {
            kio__renamefiledialog_nativeevent_isbase = false;
            return KIO__RenameFileDialog::nativeEvent(eventType, message, result);
        } else if (kio__renamefiledialog_nativeevent_callback != nullptr) {
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

            bool callback_ret = kio__renamefiledialog_nativeevent_callback(this, cbval1, cbval2, cbval3);
            return callback_ret;
        } else {
            return KIO__RenameFileDialog::nativeEvent(eventType, message, result);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void changeEvent(QEvent* param1) override {
        if (kio__renamefiledialog_changeevent_isbase) {
            kio__renamefiledialog_changeevent_isbase = false;
            KIO__RenameFileDialog::changeEvent(param1);
        } else if (kio__renamefiledialog_changeevent_callback != nullptr) {
            QEvent* cbval1 = param1;

            kio__renamefiledialog_changeevent_callback(this, cbval1);
        } else {
            KIO__RenameFileDialog::changeEvent(param1);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual int metric(QPaintDevice::PaintDeviceMetric param1) const override {
        if (kio__renamefiledialog_metric_isbase) {
            kio__renamefiledialog_metric_isbase = false;
            return KIO__RenameFileDialog::metric(param1);
        } else if (kio__renamefiledialog_metric_callback != nullptr) {
            int cbval1 = static_cast<int>(param1);

            int callback_ret = kio__renamefiledialog_metric_callback(this, cbval1);
            return static_cast<int>(callback_ret);
        } else {
            return KIO__RenameFileDialog::metric(param1);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void initPainter(QPainter* painter) const override {
        if (kio__renamefiledialog_initpainter_isbase) {
            kio__renamefiledialog_initpainter_isbase = false;
            KIO__RenameFileDialog::initPainter(painter);
        } else if (kio__renamefiledialog_initpainter_callback != nullptr) {
            QPainter* cbval1 = painter;

            kio__renamefiledialog_initpainter_callback(this, cbval1);
        } else {
            KIO__RenameFileDialog::initPainter(painter);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QPaintDevice* redirected(QPoint* offset) const override {
        if (kio__renamefiledialog_redirected_isbase) {
            kio__renamefiledialog_redirected_isbase = false;
            return KIO__RenameFileDialog::redirected(offset);
        } else if (kio__renamefiledialog_redirected_callback != nullptr) {
            QPoint* cbval1 = offset;

            QPaintDevice* callback_ret = kio__renamefiledialog_redirected_callback(this, cbval1);
            return callback_ret;
        } else {
            return KIO__RenameFileDialog::redirected(offset);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QPainter* sharedPainter() const override {
        if (kio__renamefiledialog_sharedpainter_isbase) {
            kio__renamefiledialog_sharedpainter_isbase = false;
            return KIO__RenameFileDialog::sharedPainter();
        } else if (kio__renamefiledialog_sharedpainter_callback != nullptr) {
            QPainter* callback_ret = kio__renamefiledialog_sharedpainter_callback();
            return callback_ret;
        } else {
            return KIO__RenameFileDialog::sharedPainter();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void inputMethodEvent(QInputMethodEvent* param1) override {
        if (kio__renamefiledialog_inputmethodevent_isbase) {
            kio__renamefiledialog_inputmethodevent_isbase = false;
            KIO__RenameFileDialog::inputMethodEvent(param1);
        } else if (kio__renamefiledialog_inputmethodevent_callback != nullptr) {
            QInputMethodEvent* cbval1 = param1;

            kio__renamefiledialog_inputmethodevent_callback(this, cbval1);
        } else {
            KIO__RenameFileDialog::inputMethodEvent(param1);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QVariant inputMethodQuery(Qt::InputMethodQuery param1) const override {
        if (kio__renamefiledialog_inputmethodquery_isbase) {
            kio__renamefiledialog_inputmethodquery_isbase = false;
            return KIO__RenameFileDialog::inputMethodQuery(param1);
        } else if (kio__renamefiledialog_inputmethodquery_callback != nullptr) {
            int cbval1 = static_cast<int>(param1);

            QVariant* callback_ret = kio__renamefiledialog_inputmethodquery_callback(this, cbval1);
            return *callback_ret;
        } else {
            return KIO__RenameFileDialog::inputMethodQuery(param1);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool focusNextPrevChild(bool next) override {
        if (kio__renamefiledialog_focusnextprevchild_isbase) {
            kio__renamefiledialog_focusnextprevchild_isbase = false;
            return KIO__RenameFileDialog::focusNextPrevChild(next);
        } else if (kio__renamefiledialog_focusnextprevchild_callback != nullptr) {
            bool cbval1 = next;

            bool callback_ret = kio__renamefiledialog_focusnextprevchild_callback(this, cbval1);
            return callback_ret;
        } else {
            return KIO__RenameFileDialog::focusNextPrevChild(next);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (kio__renamefiledialog_timerevent_isbase) {
            kio__renamefiledialog_timerevent_isbase = false;
            KIO__RenameFileDialog::timerEvent(event);
        } else if (kio__renamefiledialog_timerevent_callback != nullptr) {
            QTimerEvent* cbval1 = event;

            kio__renamefiledialog_timerevent_callback(this, cbval1);
        } else {
            KIO__RenameFileDialog::timerEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (kio__renamefiledialog_childevent_isbase) {
            kio__renamefiledialog_childevent_isbase = false;
            KIO__RenameFileDialog::childEvent(event);
        } else if (kio__renamefiledialog_childevent_callback != nullptr) {
            QChildEvent* cbval1 = event;

            kio__renamefiledialog_childevent_callback(this, cbval1);
        } else {
            KIO__RenameFileDialog::childEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (kio__renamefiledialog_customevent_isbase) {
            kio__renamefiledialog_customevent_isbase = false;
            KIO__RenameFileDialog::customEvent(event);
        } else if (kio__renamefiledialog_customevent_callback != nullptr) {
            QEvent* cbval1 = event;

            kio__renamefiledialog_customevent_callback(this, cbval1);
        } else {
            KIO__RenameFileDialog::customEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (kio__renamefiledialog_connectnotify_isbase) {
            kio__renamefiledialog_connectnotify_isbase = false;
            KIO__RenameFileDialog::connectNotify(signal);
        } else if (kio__renamefiledialog_connectnotify_callback != nullptr) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            kio__renamefiledialog_connectnotify_callback(this, cbval1);
        } else {
            KIO__RenameFileDialog::connectNotify(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (kio__renamefiledialog_disconnectnotify_isbase) {
            kio__renamefiledialog_disconnectnotify_isbase = false;
            KIO__RenameFileDialog::disconnectNotify(signal);
        } else if (kio__renamefiledialog_disconnectnotify_callback != nullptr) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            kio__renamefiledialog_disconnectnotify_callback(this, cbval1);
        } else {
            KIO__RenameFileDialog::disconnectNotify(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    void adjustPosition(QWidget* param1) {
        if (kio__renamefiledialog_adjustposition_isbase) {
            kio__renamefiledialog_adjustposition_isbase = false;
            KIO__RenameFileDialog::adjustPosition(param1);
        } else if (kio__renamefiledialog_adjustposition_callback != nullptr) {
            QWidget* cbval1 = param1;

            kio__renamefiledialog_adjustposition_callback(this, cbval1);
        } else {
            KIO__RenameFileDialog::adjustPosition(param1);
        }
    }

    // Virtual method for C ABI access and custom callback
    void updateMicroFocus() {
        if (kio__renamefiledialog_updatemicrofocus_isbase) {
            kio__renamefiledialog_updatemicrofocus_isbase = false;
            KIO__RenameFileDialog::updateMicroFocus();
        } else if (kio__renamefiledialog_updatemicrofocus_callback != nullptr) {
            kio__renamefiledialog_updatemicrofocus_callback();
        } else {
            KIO__RenameFileDialog::updateMicroFocus();
        }
    }

    // Virtual method for C ABI access and custom callback
    void create() {
        if (kio__renamefiledialog_create_isbase) {
            kio__renamefiledialog_create_isbase = false;
            KIO__RenameFileDialog::create();
        } else if (kio__renamefiledialog_create_callback != nullptr) {
            kio__renamefiledialog_create_callback();
        } else {
            KIO__RenameFileDialog::create();
        }
    }

    // Virtual method for C ABI access and custom callback
    void destroy() {
        if (kio__renamefiledialog_destroy_isbase) {
            kio__renamefiledialog_destroy_isbase = false;
            KIO__RenameFileDialog::destroy();
        } else if (kio__renamefiledialog_destroy_callback != nullptr) {
            kio__renamefiledialog_destroy_callback();
        } else {
            KIO__RenameFileDialog::destroy();
        }
    }

    // Virtual method for C ABI access and custom callback
    bool focusNextChild() {
        if (kio__renamefiledialog_focusnextchild_isbase) {
            kio__renamefiledialog_focusnextchild_isbase = false;
            return KIO__RenameFileDialog::focusNextChild();
        } else if (kio__renamefiledialog_focusnextchild_callback != nullptr) {
            bool callback_ret = kio__renamefiledialog_focusnextchild_callback();
            return callback_ret;
        } else {
            return KIO__RenameFileDialog::focusNextChild();
        }
    }

    // Virtual method for C ABI access and custom callback
    bool focusPreviousChild() {
        if (kio__renamefiledialog_focuspreviouschild_isbase) {
            kio__renamefiledialog_focuspreviouschild_isbase = false;
            return KIO__RenameFileDialog::focusPreviousChild();
        } else if (kio__renamefiledialog_focuspreviouschild_callback != nullptr) {
            bool callback_ret = kio__renamefiledialog_focuspreviouschild_callback();
            return callback_ret;
        } else {
            return KIO__RenameFileDialog::focusPreviousChild();
        }
    }

    // Virtual method for C ABI access and custom callback
    QObject* sender() const {
        if (kio__renamefiledialog_sender_isbase) {
            kio__renamefiledialog_sender_isbase = false;
            return KIO__RenameFileDialog::sender();
        } else if (kio__renamefiledialog_sender_callback != nullptr) {
            QObject* callback_ret = kio__renamefiledialog_sender_callback();
            return callback_ret;
        } else {
            return KIO__RenameFileDialog::sender();
        }
    }

    // Virtual method for C ABI access and custom callback
    int senderSignalIndex() const {
        if (kio__renamefiledialog_sendersignalindex_isbase) {
            kio__renamefiledialog_sendersignalindex_isbase = false;
            return KIO__RenameFileDialog::senderSignalIndex();
        } else if (kio__renamefiledialog_sendersignalindex_callback != nullptr) {
            int callback_ret = kio__renamefiledialog_sendersignalindex_callback();
            return static_cast<int>(callback_ret);
        } else {
            return KIO__RenameFileDialog::senderSignalIndex();
        }
    }

    // Virtual method for C ABI access and custom callback
    int receivers(const char* signal) const {
        if (kio__renamefiledialog_receivers_isbase) {
            kio__renamefiledialog_receivers_isbase = false;
            return KIO__RenameFileDialog::receivers(signal);
        } else if (kio__renamefiledialog_receivers_callback != nullptr) {
            const char* cbval1 = (const char*)signal;

            int callback_ret = kio__renamefiledialog_receivers_callback(this, cbval1);
            return static_cast<int>(callback_ret);
        } else {
            return KIO__RenameFileDialog::receivers(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    bool isSignalConnected(const QMetaMethod& signal) const {
        if (kio__renamefiledialog_issignalconnected_isbase) {
            kio__renamefiledialog_issignalconnected_isbase = false;
            return KIO__RenameFileDialog::isSignalConnected(signal);
        } else if (kio__renamefiledialog_issignalconnected_callback != nullptr) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            bool callback_ret = kio__renamefiledialog_issignalconnected_callback(this, cbval1);
            return callback_ret;
        } else {
            return KIO__RenameFileDialog::isSignalConnected(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    double getDecodedMetricF(QPaintDevice::PaintDeviceMetric metricA, QPaintDevice::PaintDeviceMetric metricB) const {
        if (kio__renamefiledialog_getdecodedmetricf_isbase) {
            kio__renamefiledialog_getdecodedmetricf_isbase = false;
            return KIO__RenameFileDialog::getDecodedMetricF(metricA, metricB);
        } else if (kio__renamefiledialog_getdecodedmetricf_callback != nullptr) {
            int cbval1 = static_cast<int>(metricA);
            int cbval2 = static_cast<int>(metricB);

            double callback_ret = kio__renamefiledialog_getdecodedmetricf_callback(this, cbval1, cbval2);
            return static_cast<double>(callback_ret);
        } else {
            return KIO__RenameFileDialog::getDecodedMetricF(metricA, metricB);
        }
    }

    // Friend functions
    friend void KIO__RenameFileDialog_KeyPressEvent(KIO::RenameFileDialog* self, QKeyEvent* param1);
    friend void KIO__RenameFileDialog_QBaseKeyPressEvent(KIO::RenameFileDialog* self, QKeyEvent* param1);
    friend void KIO__RenameFileDialog_CloseEvent(KIO::RenameFileDialog* self, QCloseEvent* param1);
    friend void KIO__RenameFileDialog_QBaseCloseEvent(KIO::RenameFileDialog* self, QCloseEvent* param1);
    friend void KIO__RenameFileDialog_ShowEvent(KIO::RenameFileDialog* self, QShowEvent* param1);
    friend void KIO__RenameFileDialog_QBaseShowEvent(KIO::RenameFileDialog* self, QShowEvent* param1);
    friend void KIO__RenameFileDialog_ResizeEvent(KIO::RenameFileDialog* self, QResizeEvent* param1);
    friend void KIO__RenameFileDialog_QBaseResizeEvent(KIO::RenameFileDialog* self, QResizeEvent* param1);
    friend void KIO__RenameFileDialog_ContextMenuEvent(KIO::RenameFileDialog* self, QContextMenuEvent* param1);
    friend void KIO__RenameFileDialog_QBaseContextMenuEvent(KIO::RenameFileDialog* self, QContextMenuEvent* param1);
    friend bool KIO__RenameFileDialog_EventFilter(KIO::RenameFileDialog* self, QObject* param1, QEvent* param2);
    friend bool KIO__RenameFileDialog_QBaseEventFilter(KIO::RenameFileDialog* self, QObject* param1, QEvent* param2);
    friend bool KIO__RenameFileDialog_Event(KIO::RenameFileDialog* self, QEvent* event);
    friend bool KIO__RenameFileDialog_QBaseEvent(KIO::RenameFileDialog* self, QEvent* event);
    friend void KIO__RenameFileDialog_MousePressEvent(KIO::RenameFileDialog* self, QMouseEvent* event);
    friend void KIO__RenameFileDialog_QBaseMousePressEvent(KIO::RenameFileDialog* self, QMouseEvent* event);
    friend void KIO__RenameFileDialog_MouseReleaseEvent(KIO::RenameFileDialog* self, QMouseEvent* event);
    friend void KIO__RenameFileDialog_QBaseMouseReleaseEvent(KIO::RenameFileDialog* self, QMouseEvent* event);
    friend void KIO__RenameFileDialog_MouseDoubleClickEvent(KIO::RenameFileDialog* self, QMouseEvent* event);
    friend void KIO__RenameFileDialog_QBaseMouseDoubleClickEvent(KIO::RenameFileDialog* self, QMouseEvent* event);
    friend void KIO__RenameFileDialog_MouseMoveEvent(KIO::RenameFileDialog* self, QMouseEvent* event);
    friend void KIO__RenameFileDialog_QBaseMouseMoveEvent(KIO::RenameFileDialog* self, QMouseEvent* event);
    friend void KIO__RenameFileDialog_WheelEvent(KIO::RenameFileDialog* self, QWheelEvent* event);
    friend void KIO__RenameFileDialog_QBaseWheelEvent(KIO::RenameFileDialog* self, QWheelEvent* event);
    friend void KIO__RenameFileDialog_KeyReleaseEvent(KIO::RenameFileDialog* self, QKeyEvent* event);
    friend void KIO__RenameFileDialog_QBaseKeyReleaseEvent(KIO::RenameFileDialog* self, QKeyEvent* event);
    friend void KIO__RenameFileDialog_FocusInEvent(KIO::RenameFileDialog* self, QFocusEvent* event);
    friend void KIO__RenameFileDialog_QBaseFocusInEvent(KIO::RenameFileDialog* self, QFocusEvent* event);
    friend void KIO__RenameFileDialog_FocusOutEvent(KIO::RenameFileDialog* self, QFocusEvent* event);
    friend void KIO__RenameFileDialog_QBaseFocusOutEvent(KIO::RenameFileDialog* self, QFocusEvent* event);
    friend void KIO__RenameFileDialog_EnterEvent(KIO::RenameFileDialog* self, QEnterEvent* event);
    friend void KIO__RenameFileDialog_QBaseEnterEvent(KIO::RenameFileDialog* self, QEnterEvent* event);
    friend void KIO__RenameFileDialog_LeaveEvent(KIO::RenameFileDialog* self, QEvent* event);
    friend void KIO__RenameFileDialog_QBaseLeaveEvent(KIO::RenameFileDialog* self, QEvent* event);
    friend void KIO__RenameFileDialog_PaintEvent(KIO::RenameFileDialog* self, QPaintEvent* event);
    friend void KIO__RenameFileDialog_QBasePaintEvent(KIO::RenameFileDialog* self, QPaintEvent* event);
    friend void KIO__RenameFileDialog_MoveEvent(KIO::RenameFileDialog* self, QMoveEvent* event);
    friend void KIO__RenameFileDialog_QBaseMoveEvent(KIO::RenameFileDialog* self, QMoveEvent* event);
    friend void KIO__RenameFileDialog_TabletEvent(KIO::RenameFileDialog* self, QTabletEvent* event);
    friend void KIO__RenameFileDialog_QBaseTabletEvent(KIO::RenameFileDialog* self, QTabletEvent* event);
    friend void KIO__RenameFileDialog_ActionEvent(KIO::RenameFileDialog* self, QActionEvent* event);
    friend void KIO__RenameFileDialog_QBaseActionEvent(KIO::RenameFileDialog* self, QActionEvent* event);
    friend void KIO__RenameFileDialog_DragEnterEvent(KIO::RenameFileDialog* self, QDragEnterEvent* event);
    friend void KIO__RenameFileDialog_QBaseDragEnterEvent(KIO::RenameFileDialog* self, QDragEnterEvent* event);
    friend void KIO__RenameFileDialog_DragMoveEvent(KIO::RenameFileDialog* self, QDragMoveEvent* event);
    friend void KIO__RenameFileDialog_QBaseDragMoveEvent(KIO::RenameFileDialog* self, QDragMoveEvent* event);
    friend void KIO__RenameFileDialog_DragLeaveEvent(KIO::RenameFileDialog* self, QDragLeaveEvent* event);
    friend void KIO__RenameFileDialog_QBaseDragLeaveEvent(KIO::RenameFileDialog* self, QDragLeaveEvent* event);
    friend void KIO__RenameFileDialog_DropEvent(KIO::RenameFileDialog* self, QDropEvent* event);
    friend void KIO__RenameFileDialog_QBaseDropEvent(KIO::RenameFileDialog* self, QDropEvent* event);
    friend void KIO__RenameFileDialog_HideEvent(KIO::RenameFileDialog* self, QHideEvent* event);
    friend void KIO__RenameFileDialog_QBaseHideEvent(KIO::RenameFileDialog* self, QHideEvent* event);
    friend bool KIO__RenameFileDialog_NativeEvent(KIO::RenameFileDialog* self, const libqt_string eventType, void* message, intptr_t* result);
    friend bool KIO__RenameFileDialog_QBaseNativeEvent(KIO::RenameFileDialog* self, const libqt_string eventType, void* message, intptr_t* result);
    friend void KIO__RenameFileDialog_ChangeEvent(KIO::RenameFileDialog* self, QEvent* param1);
    friend void KIO__RenameFileDialog_QBaseChangeEvent(KIO::RenameFileDialog* self, QEvent* param1);
    friend int KIO__RenameFileDialog_Metric(const KIO::RenameFileDialog* self, int param1);
    friend int KIO__RenameFileDialog_QBaseMetric(const KIO::RenameFileDialog* self, int param1);
    friend void KIO__RenameFileDialog_InitPainter(const KIO::RenameFileDialog* self, QPainter* painter);
    friend void KIO__RenameFileDialog_QBaseInitPainter(const KIO::RenameFileDialog* self, QPainter* painter);
    friend QPaintDevice* KIO__RenameFileDialog_Redirected(const KIO::RenameFileDialog* self, QPoint* offset);
    friend QPaintDevice* KIO__RenameFileDialog_QBaseRedirected(const KIO::RenameFileDialog* self, QPoint* offset);
    friend QPainter* KIO__RenameFileDialog_SharedPainter(const KIO::RenameFileDialog* self);
    friend QPainter* KIO__RenameFileDialog_QBaseSharedPainter(const KIO::RenameFileDialog* self);
    friend void KIO__RenameFileDialog_InputMethodEvent(KIO::RenameFileDialog* self, QInputMethodEvent* param1);
    friend void KIO__RenameFileDialog_QBaseInputMethodEvent(KIO::RenameFileDialog* self, QInputMethodEvent* param1);
    friend bool KIO__RenameFileDialog_FocusNextPrevChild(KIO::RenameFileDialog* self, bool next);
    friend bool KIO__RenameFileDialog_QBaseFocusNextPrevChild(KIO::RenameFileDialog* self, bool next);
    friend void KIO__RenameFileDialog_TimerEvent(KIO::RenameFileDialog* self, QTimerEvent* event);
    friend void KIO__RenameFileDialog_QBaseTimerEvent(KIO::RenameFileDialog* self, QTimerEvent* event);
    friend void KIO__RenameFileDialog_ChildEvent(KIO::RenameFileDialog* self, QChildEvent* event);
    friend void KIO__RenameFileDialog_QBaseChildEvent(KIO::RenameFileDialog* self, QChildEvent* event);
    friend void KIO__RenameFileDialog_CustomEvent(KIO::RenameFileDialog* self, QEvent* event);
    friend void KIO__RenameFileDialog_QBaseCustomEvent(KIO::RenameFileDialog* self, QEvent* event);
    friend void KIO__RenameFileDialog_ConnectNotify(KIO::RenameFileDialog* self, const QMetaMethod* signal);
    friend void KIO__RenameFileDialog_QBaseConnectNotify(KIO::RenameFileDialog* self, const QMetaMethod* signal);
    friend void KIO__RenameFileDialog_DisconnectNotify(KIO::RenameFileDialog* self, const QMetaMethod* signal);
    friend void KIO__RenameFileDialog_QBaseDisconnectNotify(KIO::RenameFileDialog* self, const QMetaMethod* signal);
    friend void KIO__RenameFileDialog_AdjustPosition(KIO::RenameFileDialog* self, QWidget* param1);
    friend void KIO__RenameFileDialog_QBaseAdjustPosition(KIO::RenameFileDialog* self, QWidget* param1);
    friend void KIO__RenameFileDialog_UpdateMicroFocus(KIO::RenameFileDialog* self);
    friend void KIO__RenameFileDialog_QBaseUpdateMicroFocus(KIO::RenameFileDialog* self);
    friend void KIO__RenameFileDialog_Create(KIO::RenameFileDialog* self);
    friend void KIO__RenameFileDialog_QBaseCreate(KIO::RenameFileDialog* self);
    friend void KIO__RenameFileDialog_Destroy(KIO::RenameFileDialog* self);
    friend void KIO__RenameFileDialog_QBaseDestroy(KIO::RenameFileDialog* self);
    friend bool KIO__RenameFileDialog_FocusNextChild(KIO::RenameFileDialog* self);
    friend bool KIO__RenameFileDialog_QBaseFocusNextChild(KIO::RenameFileDialog* self);
    friend bool KIO__RenameFileDialog_FocusPreviousChild(KIO::RenameFileDialog* self);
    friend bool KIO__RenameFileDialog_QBaseFocusPreviousChild(KIO::RenameFileDialog* self);
    friend QObject* KIO__RenameFileDialog_Sender(const KIO::RenameFileDialog* self);
    friend QObject* KIO__RenameFileDialog_QBaseSender(const KIO::RenameFileDialog* self);
    friend int KIO__RenameFileDialog_SenderSignalIndex(const KIO::RenameFileDialog* self);
    friend int KIO__RenameFileDialog_QBaseSenderSignalIndex(const KIO::RenameFileDialog* self);
    friend int KIO__RenameFileDialog_Receivers(const KIO::RenameFileDialog* self, const char* signal);
    friend int KIO__RenameFileDialog_QBaseReceivers(const KIO::RenameFileDialog* self, const char* signal);
    friend bool KIO__RenameFileDialog_IsSignalConnected(const KIO::RenameFileDialog* self, const QMetaMethod* signal);
    friend bool KIO__RenameFileDialog_QBaseIsSignalConnected(const KIO::RenameFileDialog* self, const QMetaMethod* signal);
    friend double KIO__RenameFileDialog_GetDecodedMetricF(const KIO::RenameFileDialog* self, int metricA, int metricB);
    friend double KIO__RenameFileDialog_QBaseGetDecodedMetricF(const KIO::RenameFileDialog* self, int metricA, int metricB);
};

#endif
