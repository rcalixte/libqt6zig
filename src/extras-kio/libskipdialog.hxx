#pragma once
#ifndef SRC_EXTRAS_KIOC_LIBVIRTUALSKIPDIALOG_H
#define SRC_EXTRAS_KIOC_LIBVIRTUALSKIPDIALOG_H

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

// This class is a subclass of KIO::SkipDialog so that we can call protected methods
class VirtualKIOSkipDialog final : public KIO::SkipDialog {

  public:
    // Virtual class boolean flag
    bool isVirtualKIOSkipDialog = true;

    // Virtual class public types (including callbacks)
    using KIO__SkipDialog_Metacall_Callback = int (*)(KIO__SkipDialog*, int, int, void**);
    using KIO__SkipDialog_SetVisible_Callback = void (*)(KIO__SkipDialog*, bool);
    using KIO__SkipDialog_SizeHint_Callback = QSize* (*)();
    using KIO__SkipDialog_MinimumSizeHint_Callback = QSize* (*)();
    using KIO__SkipDialog_Open_Callback = void (*)();
    using KIO__SkipDialog_Exec_Callback = int (*)();
    using KIO__SkipDialog_Done_Callback = void (*)(KIO__SkipDialog*, int);
    using KIO__SkipDialog_Accept_Callback = void (*)();
    using KIO__SkipDialog_Reject_Callback = void (*)();
    using KIO__SkipDialog_KeyPressEvent_Callback = void (*)(KIO__SkipDialog*, QKeyEvent*);
    using KIO__SkipDialog_CloseEvent_Callback = void (*)(KIO__SkipDialog*, QCloseEvent*);
    using KIO__SkipDialog_ShowEvent_Callback = void (*)(KIO__SkipDialog*, QShowEvent*);
    using KIO__SkipDialog_ResizeEvent_Callback = void (*)(KIO__SkipDialog*, QResizeEvent*);
    using KIO__SkipDialog_ContextMenuEvent_Callback = void (*)(KIO__SkipDialog*, QContextMenuEvent*);
    using KIO__SkipDialog_EventFilter_Callback = bool (*)(KIO__SkipDialog*, QObject*, QEvent*);
    using KIO__SkipDialog_DevType_Callback = int (*)();
    using KIO__SkipDialog_HeightForWidth_Callback = int (*)(const KIO__SkipDialog*, int);
    using KIO__SkipDialog_HasHeightForWidth_Callback = bool (*)();
    using KIO__SkipDialog_PaintEngine_Callback = QPaintEngine* (*)();
    using KIO__SkipDialog_Event_Callback = bool (*)(KIO__SkipDialog*, QEvent*);
    using KIO__SkipDialog_MousePressEvent_Callback = void (*)(KIO__SkipDialog*, QMouseEvent*);
    using KIO__SkipDialog_MouseReleaseEvent_Callback = void (*)(KIO__SkipDialog*, QMouseEvent*);
    using KIO__SkipDialog_MouseDoubleClickEvent_Callback = void (*)(KIO__SkipDialog*, QMouseEvent*);
    using KIO__SkipDialog_MouseMoveEvent_Callback = void (*)(KIO__SkipDialog*, QMouseEvent*);
    using KIO__SkipDialog_WheelEvent_Callback = void (*)(KIO__SkipDialog*, QWheelEvent*);
    using KIO__SkipDialog_KeyReleaseEvent_Callback = void (*)(KIO__SkipDialog*, QKeyEvent*);
    using KIO__SkipDialog_FocusInEvent_Callback = void (*)(KIO__SkipDialog*, QFocusEvent*);
    using KIO__SkipDialog_FocusOutEvent_Callback = void (*)(KIO__SkipDialog*, QFocusEvent*);
    using KIO__SkipDialog_EnterEvent_Callback = void (*)(KIO__SkipDialog*, QEnterEvent*);
    using KIO__SkipDialog_LeaveEvent_Callback = void (*)(KIO__SkipDialog*, QEvent*);
    using KIO__SkipDialog_PaintEvent_Callback = void (*)(KIO__SkipDialog*, QPaintEvent*);
    using KIO__SkipDialog_MoveEvent_Callback = void (*)(KIO__SkipDialog*, QMoveEvent*);
    using KIO__SkipDialog_TabletEvent_Callback = void (*)(KIO__SkipDialog*, QTabletEvent*);
    using KIO__SkipDialog_ActionEvent_Callback = void (*)(KIO__SkipDialog*, QActionEvent*);
    using KIO__SkipDialog_DragEnterEvent_Callback = void (*)(KIO__SkipDialog*, QDragEnterEvent*);
    using KIO__SkipDialog_DragMoveEvent_Callback = void (*)(KIO__SkipDialog*, QDragMoveEvent*);
    using KIO__SkipDialog_DragLeaveEvent_Callback = void (*)(KIO__SkipDialog*, QDragLeaveEvent*);
    using KIO__SkipDialog_DropEvent_Callback = void (*)(KIO__SkipDialog*, QDropEvent*);
    using KIO__SkipDialog_HideEvent_Callback = void (*)(KIO__SkipDialog*, QHideEvent*);
    using KIO__SkipDialog_NativeEvent_Callback = bool (*)(KIO__SkipDialog*, libqt_string, void*, intptr_t*);
    using KIO__SkipDialog_ChangeEvent_Callback = void (*)(KIO__SkipDialog*, QEvent*);
    using KIO__SkipDialog_Metric_Callback = int (*)(const KIO__SkipDialog*, int);
    using KIO__SkipDialog_InitPainter_Callback = void (*)(const KIO__SkipDialog*, QPainter*);
    using KIO__SkipDialog_Redirected_Callback = QPaintDevice* (*)(const KIO__SkipDialog*, QPoint*);
    using KIO__SkipDialog_SharedPainter_Callback = QPainter* (*)();
    using KIO__SkipDialog_InputMethodEvent_Callback = void (*)(KIO__SkipDialog*, QInputMethodEvent*);
    using KIO__SkipDialog_InputMethodQuery_Callback = QVariant* (*)(const KIO__SkipDialog*, int);
    using KIO__SkipDialog_FocusNextPrevChild_Callback = bool (*)(KIO__SkipDialog*, bool);
    using KIO__SkipDialog_TimerEvent_Callback = void (*)(KIO__SkipDialog*, QTimerEvent*);
    using KIO__SkipDialog_ChildEvent_Callback = void (*)(KIO__SkipDialog*, QChildEvent*);
    using KIO__SkipDialog_CustomEvent_Callback = void (*)(KIO__SkipDialog*, QEvent*);
    using KIO__SkipDialog_ConnectNotify_Callback = void (*)(KIO__SkipDialog*, QMetaMethod*);
    using KIO__SkipDialog_DisconnectNotify_Callback = void (*)(KIO__SkipDialog*, QMetaMethod*);
    using KIO__SkipDialog_AdjustPosition_Callback = void (*)(KIO__SkipDialog*, QWidget*);
    using KIO__SkipDialog_UpdateMicroFocus_Callback = void (*)();
    using KIO__SkipDialog_Create_Callback = void (*)();
    using KIO__SkipDialog_Destroy_Callback = void (*)();
    using KIO__SkipDialog_FocusNextChild_Callback = bool (*)();
    using KIO__SkipDialog_FocusPreviousChild_Callback = bool (*)();
    using KIO__SkipDialog_Sender_Callback = QObject* (*)();
    using KIO__SkipDialog_SenderSignalIndex_Callback = int (*)();
    using KIO__SkipDialog_Receivers_Callback = int (*)(const KIO__SkipDialog*, const char*);
    using KIO__SkipDialog_IsSignalConnected_Callback = bool (*)(const KIO__SkipDialog*, QMetaMethod*);
    using KIO__SkipDialog_GetDecodedMetricF_Callback = double (*)(const KIO__SkipDialog*, int, int);

  protected:
    // Instance callback storage
    KIO__SkipDialog_Metacall_Callback kio__skipdialog_metacall_callback = nullptr;
    KIO__SkipDialog_SetVisible_Callback kio__skipdialog_setvisible_callback = nullptr;
    KIO__SkipDialog_SizeHint_Callback kio__skipdialog_sizehint_callback = nullptr;
    KIO__SkipDialog_MinimumSizeHint_Callback kio__skipdialog_minimumsizehint_callback = nullptr;
    KIO__SkipDialog_Open_Callback kio__skipdialog_open_callback = nullptr;
    KIO__SkipDialog_Exec_Callback kio__skipdialog_exec_callback = nullptr;
    KIO__SkipDialog_Done_Callback kio__skipdialog_done_callback = nullptr;
    KIO__SkipDialog_Accept_Callback kio__skipdialog_accept_callback = nullptr;
    KIO__SkipDialog_Reject_Callback kio__skipdialog_reject_callback = nullptr;
    KIO__SkipDialog_KeyPressEvent_Callback kio__skipdialog_keypressevent_callback = nullptr;
    KIO__SkipDialog_CloseEvent_Callback kio__skipdialog_closeevent_callback = nullptr;
    KIO__SkipDialog_ShowEvent_Callback kio__skipdialog_showevent_callback = nullptr;
    KIO__SkipDialog_ResizeEvent_Callback kio__skipdialog_resizeevent_callback = nullptr;
    KIO__SkipDialog_ContextMenuEvent_Callback kio__skipdialog_contextmenuevent_callback = nullptr;
    KIO__SkipDialog_EventFilter_Callback kio__skipdialog_eventfilter_callback = nullptr;
    KIO__SkipDialog_DevType_Callback kio__skipdialog_devtype_callback = nullptr;
    KIO__SkipDialog_HeightForWidth_Callback kio__skipdialog_heightforwidth_callback = nullptr;
    KIO__SkipDialog_HasHeightForWidth_Callback kio__skipdialog_hasheightforwidth_callback = nullptr;
    KIO__SkipDialog_PaintEngine_Callback kio__skipdialog_paintengine_callback = nullptr;
    KIO__SkipDialog_Event_Callback kio__skipdialog_event_callback = nullptr;
    KIO__SkipDialog_MousePressEvent_Callback kio__skipdialog_mousepressevent_callback = nullptr;
    KIO__SkipDialog_MouseReleaseEvent_Callback kio__skipdialog_mousereleaseevent_callback = nullptr;
    KIO__SkipDialog_MouseDoubleClickEvent_Callback kio__skipdialog_mousedoubleclickevent_callback = nullptr;
    KIO__SkipDialog_MouseMoveEvent_Callback kio__skipdialog_mousemoveevent_callback = nullptr;
    KIO__SkipDialog_WheelEvent_Callback kio__skipdialog_wheelevent_callback = nullptr;
    KIO__SkipDialog_KeyReleaseEvent_Callback kio__skipdialog_keyreleaseevent_callback = nullptr;
    KIO__SkipDialog_FocusInEvent_Callback kio__skipdialog_focusinevent_callback = nullptr;
    KIO__SkipDialog_FocusOutEvent_Callback kio__skipdialog_focusoutevent_callback = nullptr;
    KIO__SkipDialog_EnterEvent_Callback kio__skipdialog_enterevent_callback = nullptr;
    KIO__SkipDialog_LeaveEvent_Callback kio__skipdialog_leaveevent_callback = nullptr;
    KIO__SkipDialog_PaintEvent_Callback kio__skipdialog_paintevent_callback = nullptr;
    KIO__SkipDialog_MoveEvent_Callback kio__skipdialog_moveevent_callback = nullptr;
    KIO__SkipDialog_TabletEvent_Callback kio__skipdialog_tabletevent_callback = nullptr;
    KIO__SkipDialog_ActionEvent_Callback kio__skipdialog_actionevent_callback = nullptr;
    KIO__SkipDialog_DragEnterEvent_Callback kio__skipdialog_dragenterevent_callback = nullptr;
    KIO__SkipDialog_DragMoveEvent_Callback kio__skipdialog_dragmoveevent_callback = nullptr;
    KIO__SkipDialog_DragLeaveEvent_Callback kio__skipdialog_dragleaveevent_callback = nullptr;
    KIO__SkipDialog_DropEvent_Callback kio__skipdialog_dropevent_callback = nullptr;
    KIO__SkipDialog_HideEvent_Callback kio__skipdialog_hideevent_callback = nullptr;
    KIO__SkipDialog_NativeEvent_Callback kio__skipdialog_nativeevent_callback = nullptr;
    KIO__SkipDialog_ChangeEvent_Callback kio__skipdialog_changeevent_callback = nullptr;
    KIO__SkipDialog_Metric_Callback kio__skipdialog_metric_callback = nullptr;
    KIO__SkipDialog_InitPainter_Callback kio__skipdialog_initpainter_callback = nullptr;
    KIO__SkipDialog_Redirected_Callback kio__skipdialog_redirected_callback = nullptr;
    KIO__SkipDialog_SharedPainter_Callback kio__skipdialog_sharedpainter_callback = nullptr;
    KIO__SkipDialog_InputMethodEvent_Callback kio__skipdialog_inputmethodevent_callback = nullptr;
    KIO__SkipDialog_InputMethodQuery_Callback kio__skipdialog_inputmethodquery_callback = nullptr;
    KIO__SkipDialog_FocusNextPrevChild_Callback kio__skipdialog_focusnextprevchild_callback = nullptr;
    KIO__SkipDialog_TimerEvent_Callback kio__skipdialog_timerevent_callback = nullptr;
    KIO__SkipDialog_ChildEvent_Callback kio__skipdialog_childevent_callback = nullptr;
    KIO__SkipDialog_CustomEvent_Callback kio__skipdialog_customevent_callback = nullptr;
    KIO__SkipDialog_ConnectNotify_Callback kio__skipdialog_connectnotify_callback = nullptr;
    KIO__SkipDialog_DisconnectNotify_Callback kio__skipdialog_disconnectnotify_callback = nullptr;
    KIO__SkipDialog_AdjustPosition_Callback kio__skipdialog_adjustposition_callback = nullptr;
    KIO__SkipDialog_UpdateMicroFocus_Callback kio__skipdialog_updatemicrofocus_callback = nullptr;
    KIO__SkipDialog_Create_Callback kio__skipdialog_create_callback = nullptr;
    KIO__SkipDialog_Destroy_Callback kio__skipdialog_destroy_callback = nullptr;
    KIO__SkipDialog_FocusNextChild_Callback kio__skipdialog_focusnextchild_callback = nullptr;
    KIO__SkipDialog_FocusPreviousChild_Callback kio__skipdialog_focuspreviouschild_callback = nullptr;
    KIO__SkipDialog_Sender_Callback kio__skipdialog_sender_callback = nullptr;
    KIO__SkipDialog_SenderSignalIndex_Callback kio__skipdialog_sendersignalindex_callback = nullptr;
    KIO__SkipDialog_Receivers_Callback kio__skipdialog_receivers_callback = nullptr;
    KIO__SkipDialog_IsSignalConnected_Callback kio__skipdialog_issignalconnected_callback = nullptr;
    KIO__SkipDialog_GetDecodedMetricF_Callback kio__skipdialog_getdecodedmetricf_callback = nullptr;

    // Instance base flags
    mutable bool kio__skipdialog_metacall_isbase = false;
    mutable bool kio__skipdialog_setvisible_isbase = false;
    mutable bool kio__skipdialog_sizehint_isbase = false;
    mutable bool kio__skipdialog_minimumsizehint_isbase = false;
    mutable bool kio__skipdialog_open_isbase = false;
    mutable bool kio__skipdialog_exec_isbase = false;
    mutable bool kio__skipdialog_done_isbase = false;
    mutable bool kio__skipdialog_accept_isbase = false;
    mutable bool kio__skipdialog_reject_isbase = false;
    mutable bool kio__skipdialog_keypressevent_isbase = false;
    mutable bool kio__skipdialog_closeevent_isbase = false;
    mutable bool kio__skipdialog_showevent_isbase = false;
    mutable bool kio__skipdialog_resizeevent_isbase = false;
    mutable bool kio__skipdialog_contextmenuevent_isbase = false;
    mutable bool kio__skipdialog_eventfilter_isbase = false;
    mutable bool kio__skipdialog_devtype_isbase = false;
    mutable bool kio__skipdialog_heightforwidth_isbase = false;
    mutable bool kio__skipdialog_hasheightforwidth_isbase = false;
    mutable bool kio__skipdialog_paintengine_isbase = false;
    mutable bool kio__skipdialog_event_isbase = false;
    mutable bool kio__skipdialog_mousepressevent_isbase = false;
    mutable bool kio__skipdialog_mousereleaseevent_isbase = false;
    mutable bool kio__skipdialog_mousedoubleclickevent_isbase = false;
    mutable bool kio__skipdialog_mousemoveevent_isbase = false;
    mutable bool kio__skipdialog_wheelevent_isbase = false;
    mutable bool kio__skipdialog_keyreleaseevent_isbase = false;
    mutable bool kio__skipdialog_focusinevent_isbase = false;
    mutable bool kio__skipdialog_focusoutevent_isbase = false;
    mutable bool kio__skipdialog_enterevent_isbase = false;
    mutable bool kio__skipdialog_leaveevent_isbase = false;
    mutable bool kio__skipdialog_paintevent_isbase = false;
    mutable bool kio__skipdialog_moveevent_isbase = false;
    mutable bool kio__skipdialog_tabletevent_isbase = false;
    mutable bool kio__skipdialog_actionevent_isbase = false;
    mutable bool kio__skipdialog_dragenterevent_isbase = false;
    mutable bool kio__skipdialog_dragmoveevent_isbase = false;
    mutable bool kio__skipdialog_dragleaveevent_isbase = false;
    mutable bool kio__skipdialog_dropevent_isbase = false;
    mutable bool kio__skipdialog_hideevent_isbase = false;
    mutable bool kio__skipdialog_nativeevent_isbase = false;
    mutable bool kio__skipdialog_changeevent_isbase = false;
    mutable bool kio__skipdialog_metric_isbase = false;
    mutable bool kio__skipdialog_initpainter_isbase = false;
    mutable bool kio__skipdialog_redirected_isbase = false;
    mutable bool kio__skipdialog_sharedpainter_isbase = false;
    mutable bool kio__skipdialog_inputmethodevent_isbase = false;
    mutable bool kio__skipdialog_inputmethodquery_isbase = false;
    mutable bool kio__skipdialog_focusnextprevchild_isbase = false;
    mutable bool kio__skipdialog_timerevent_isbase = false;
    mutable bool kio__skipdialog_childevent_isbase = false;
    mutable bool kio__skipdialog_customevent_isbase = false;
    mutable bool kio__skipdialog_connectnotify_isbase = false;
    mutable bool kio__skipdialog_disconnectnotify_isbase = false;
    mutable bool kio__skipdialog_adjustposition_isbase = false;
    mutable bool kio__skipdialog_updatemicrofocus_isbase = false;
    mutable bool kio__skipdialog_create_isbase = false;
    mutable bool kio__skipdialog_destroy_isbase = false;
    mutable bool kio__skipdialog_focusnextchild_isbase = false;
    mutable bool kio__skipdialog_focuspreviouschild_isbase = false;
    mutable bool kio__skipdialog_sender_isbase = false;
    mutable bool kio__skipdialog_sendersignalindex_isbase = false;
    mutable bool kio__skipdialog_receivers_isbase = false;
    mutable bool kio__skipdialog_issignalconnected_isbase = false;
    mutable bool kio__skipdialog_getdecodedmetricf_isbase = false;

  public:
    VirtualKIOSkipDialog(QWidget* parent, KIO::SkipDialog_Options options, const QString& _error_text) : KIO::SkipDialog(parent, options, _error_text) {};

    ~VirtualKIOSkipDialog() {
        kio__skipdialog_metacall_callback = nullptr;
        kio__skipdialog_setvisible_callback = nullptr;
        kio__skipdialog_sizehint_callback = nullptr;
        kio__skipdialog_minimumsizehint_callback = nullptr;
        kio__skipdialog_open_callback = nullptr;
        kio__skipdialog_exec_callback = nullptr;
        kio__skipdialog_done_callback = nullptr;
        kio__skipdialog_accept_callback = nullptr;
        kio__skipdialog_reject_callback = nullptr;
        kio__skipdialog_keypressevent_callback = nullptr;
        kio__skipdialog_closeevent_callback = nullptr;
        kio__skipdialog_showevent_callback = nullptr;
        kio__skipdialog_resizeevent_callback = nullptr;
        kio__skipdialog_contextmenuevent_callback = nullptr;
        kio__skipdialog_eventfilter_callback = nullptr;
        kio__skipdialog_devtype_callback = nullptr;
        kio__skipdialog_heightforwidth_callback = nullptr;
        kio__skipdialog_hasheightforwidth_callback = nullptr;
        kio__skipdialog_paintengine_callback = nullptr;
        kio__skipdialog_event_callback = nullptr;
        kio__skipdialog_mousepressevent_callback = nullptr;
        kio__skipdialog_mousereleaseevent_callback = nullptr;
        kio__skipdialog_mousedoubleclickevent_callback = nullptr;
        kio__skipdialog_mousemoveevent_callback = nullptr;
        kio__skipdialog_wheelevent_callback = nullptr;
        kio__skipdialog_keyreleaseevent_callback = nullptr;
        kio__skipdialog_focusinevent_callback = nullptr;
        kio__skipdialog_focusoutevent_callback = nullptr;
        kio__skipdialog_enterevent_callback = nullptr;
        kio__skipdialog_leaveevent_callback = nullptr;
        kio__skipdialog_paintevent_callback = nullptr;
        kio__skipdialog_moveevent_callback = nullptr;
        kio__skipdialog_tabletevent_callback = nullptr;
        kio__skipdialog_actionevent_callback = nullptr;
        kio__skipdialog_dragenterevent_callback = nullptr;
        kio__skipdialog_dragmoveevent_callback = nullptr;
        kio__skipdialog_dragleaveevent_callback = nullptr;
        kio__skipdialog_dropevent_callback = nullptr;
        kio__skipdialog_hideevent_callback = nullptr;
        kio__skipdialog_nativeevent_callback = nullptr;
        kio__skipdialog_changeevent_callback = nullptr;
        kio__skipdialog_metric_callback = nullptr;
        kio__skipdialog_initpainter_callback = nullptr;
        kio__skipdialog_redirected_callback = nullptr;
        kio__skipdialog_sharedpainter_callback = nullptr;
        kio__skipdialog_inputmethodevent_callback = nullptr;
        kio__skipdialog_inputmethodquery_callback = nullptr;
        kio__skipdialog_focusnextprevchild_callback = nullptr;
        kio__skipdialog_timerevent_callback = nullptr;
        kio__skipdialog_childevent_callback = nullptr;
        kio__skipdialog_customevent_callback = nullptr;
        kio__skipdialog_connectnotify_callback = nullptr;
        kio__skipdialog_disconnectnotify_callback = nullptr;
        kio__skipdialog_adjustposition_callback = nullptr;
        kio__skipdialog_updatemicrofocus_callback = nullptr;
        kio__skipdialog_create_callback = nullptr;
        kio__skipdialog_destroy_callback = nullptr;
        kio__skipdialog_focusnextchild_callback = nullptr;
        kio__skipdialog_focuspreviouschild_callback = nullptr;
        kio__skipdialog_sender_callback = nullptr;
        kio__skipdialog_sendersignalindex_callback = nullptr;
        kio__skipdialog_receivers_callback = nullptr;
        kio__skipdialog_issignalconnected_callback = nullptr;
        kio__skipdialog_getdecodedmetricf_callback = nullptr;
    }

    // Callback setters
    inline void setKIO__SkipDialog_Metacall_Callback(KIO__SkipDialog_Metacall_Callback cb) { kio__skipdialog_metacall_callback = cb; }
    inline void setKIO__SkipDialog_SetVisible_Callback(KIO__SkipDialog_SetVisible_Callback cb) { kio__skipdialog_setvisible_callback = cb; }
    inline void setKIO__SkipDialog_SizeHint_Callback(KIO__SkipDialog_SizeHint_Callback cb) { kio__skipdialog_sizehint_callback = cb; }
    inline void setKIO__SkipDialog_MinimumSizeHint_Callback(KIO__SkipDialog_MinimumSizeHint_Callback cb) { kio__skipdialog_minimumsizehint_callback = cb; }
    inline void setKIO__SkipDialog_Open_Callback(KIO__SkipDialog_Open_Callback cb) { kio__skipdialog_open_callback = cb; }
    inline void setKIO__SkipDialog_Exec_Callback(KIO__SkipDialog_Exec_Callback cb) { kio__skipdialog_exec_callback = cb; }
    inline void setKIO__SkipDialog_Done_Callback(KIO__SkipDialog_Done_Callback cb) { kio__skipdialog_done_callback = cb; }
    inline void setKIO__SkipDialog_Accept_Callback(KIO__SkipDialog_Accept_Callback cb) { kio__skipdialog_accept_callback = cb; }
    inline void setKIO__SkipDialog_Reject_Callback(KIO__SkipDialog_Reject_Callback cb) { kio__skipdialog_reject_callback = cb; }
    inline void setKIO__SkipDialog_KeyPressEvent_Callback(KIO__SkipDialog_KeyPressEvent_Callback cb) { kio__skipdialog_keypressevent_callback = cb; }
    inline void setKIO__SkipDialog_CloseEvent_Callback(KIO__SkipDialog_CloseEvent_Callback cb) { kio__skipdialog_closeevent_callback = cb; }
    inline void setKIO__SkipDialog_ShowEvent_Callback(KIO__SkipDialog_ShowEvent_Callback cb) { kio__skipdialog_showevent_callback = cb; }
    inline void setKIO__SkipDialog_ResizeEvent_Callback(KIO__SkipDialog_ResizeEvent_Callback cb) { kio__skipdialog_resizeevent_callback = cb; }
    inline void setKIO__SkipDialog_ContextMenuEvent_Callback(KIO__SkipDialog_ContextMenuEvent_Callback cb) { kio__skipdialog_contextmenuevent_callback = cb; }
    inline void setKIO__SkipDialog_EventFilter_Callback(KIO__SkipDialog_EventFilter_Callback cb) { kio__skipdialog_eventfilter_callback = cb; }
    inline void setKIO__SkipDialog_DevType_Callback(KIO__SkipDialog_DevType_Callback cb) { kio__skipdialog_devtype_callback = cb; }
    inline void setKIO__SkipDialog_HeightForWidth_Callback(KIO__SkipDialog_HeightForWidth_Callback cb) { kio__skipdialog_heightforwidth_callback = cb; }
    inline void setKIO__SkipDialog_HasHeightForWidth_Callback(KIO__SkipDialog_HasHeightForWidth_Callback cb) { kio__skipdialog_hasheightforwidth_callback = cb; }
    inline void setKIO__SkipDialog_PaintEngine_Callback(KIO__SkipDialog_PaintEngine_Callback cb) { kio__skipdialog_paintengine_callback = cb; }
    inline void setKIO__SkipDialog_Event_Callback(KIO__SkipDialog_Event_Callback cb) { kio__skipdialog_event_callback = cb; }
    inline void setKIO__SkipDialog_MousePressEvent_Callback(KIO__SkipDialog_MousePressEvent_Callback cb) { kio__skipdialog_mousepressevent_callback = cb; }
    inline void setKIO__SkipDialog_MouseReleaseEvent_Callback(KIO__SkipDialog_MouseReleaseEvent_Callback cb) { kio__skipdialog_mousereleaseevent_callback = cb; }
    inline void setKIO__SkipDialog_MouseDoubleClickEvent_Callback(KIO__SkipDialog_MouseDoubleClickEvent_Callback cb) { kio__skipdialog_mousedoubleclickevent_callback = cb; }
    inline void setKIO__SkipDialog_MouseMoveEvent_Callback(KIO__SkipDialog_MouseMoveEvent_Callback cb) { kio__skipdialog_mousemoveevent_callback = cb; }
    inline void setKIO__SkipDialog_WheelEvent_Callback(KIO__SkipDialog_WheelEvent_Callback cb) { kio__skipdialog_wheelevent_callback = cb; }
    inline void setKIO__SkipDialog_KeyReleaseEvent_Callback(KIO__SkipDialog_KeyReleaseEvent_Callback cb) { kio__skipdialog_keyreleaseevent_callback = cb; }
    inline void setKIO__SkipDialog_FocusInEvent_Callback(KIO__SkipDialog_FocusInEvent_Callback cb) { kio__skipdialog_focusinevent_callback = cb; }
    inline void setKIO__SkipDialog_FocusOutEvent_Callback(KIO__SkipDialog_FocusOutEvent_Callback cb) { kio__skipdialog_focusoutevent_callback = cb; }
    inline void setKIO__SkipDialog_EnterEvent_Callback(KIO__SkipDialog_EnterEvent_Callback cb) { kio__skipdialog_enterevent_callback = cb; }
    inline void setKIO__SkipDialog_LeaveEvent_Callback(KIO__SkipDialog_LeaveEvent_Callback cb) { kio__skipdialog_leaveevent_callback = cb; }
    inline void setKIO__SkipDialog_PaintEvent_Callback(KIO__SkipDialog_PaintEvent_Callback cb) { kio__skipdialog_paintevent_callback = cb; }
    inline void setKIO__SkipDialog_MoveEvent_Callback(KIO__SkipDialog_MoveEvent_Callback cb) { kio__skipdialog_moveevent_callback = cb; }
    inline void setKIO__SkipDialog_TabletEvent_Callback(KIO__SkipDialog_TabletEvent_Callback cb) { kio__skipdialog_tabletevent_callback = cb; }
    inline void setKIO__SkipDialog_ActionEvent_Callback(KIO__SkipDialog_ActionEvent_Callback cb) { kio__skipdialog_actionevent_callback = cb; }
    inline void setKIO__SkipDialog_DragEnterEvent_Callback(KIO__SkipDialog_DragEnterEvent_Callback cb) { kio__skipdialog_dragenterevent_callback = cb; }
    inline void setKIO__SkipDialog_DragMoveEvent_Callback(KIO__SkipDialog_DragMoveEvent_Callback cb) { kio__skipdialog_dragmoveevent_callback = cb; }
    inline void setKIO__SkipDialog_DragLeaveEvent_Callback(KIO__SkipDialog_DragLeaveEvent_Callback cb) { kio__skipdialog_dragleaveevent_callback = cb; }
    inline void setKIO__SkipDialog_DropEvent_Callback(KIO__SkipDialog_DropEvent_Callback cb) { kio__skipdialog_dropevent_callback = cb; }
    inline void setKIO__SkipDialog_HideEvent_Callback(KIO__SkipDialog_HideEvent_Callback cb) { kio__skipdialog_hideevent_callback = cb; }
    inline void setKIO__SkipDialog_NativeEvent_Callback(KIO__SkipDialog_NativeEvent_Callback cb) { kio__skipdialog_nativeevent_callback = cb; }
    inline void setKIO__SkipDialog_ChangeEvent_Callback(KIO__SkipDialog_ChangeEvent_Callback cb) { kio__skipdialog_changeevent_callback = cb; }
    inline void setKIO__SkipDialog_Metric_Callback(KIO__SkipDialog_Metric_Callback cb) { kio__skipdialog_metric_callback = cb; }
    inline void setKIO__SkipDialog_InitPainter_Callback(KIO__SkipDialog_InitPainter_Callback cb) { kio__skipdialog_initpainter_callback = cb; }
    inline void setKIO__SkipDialog_Redirected_Callback(KIO__SkipDialog_Redirected_Callback cb) { kio__skipdialog_redirected_callback = cb; }
    inline void setKIO__SkipDialog_SharedPainter_Callback(KIO__SkipDialog_SharedPainter_Callback cb) { kio__skipdialog_sharedpainter_callback = cb; }
    inline void setKIO__SkipDialog_InputMethodEvent_Callback(KIO__SkipDialog_InputMethodEvent_Callback cb) { kio__skipdialog_inputmethodevent_callback = cb; }
    inline void setKIO__SkipDialog_InputMethodQuery_Callback(KIO__SkipDialog_InputMethodQuery_Callback cb) { kio__skipdialog_inputmethodquery_callback = cb; }
    inline void setKIO__SkipDialog_FocusNextPrevChild_Callback(KIO__SkipDialog_FocusNextPrevChild_Callback cb) { kio__skipdialog_focusnextprevchild_callback = cb; }
    inline void setKIO__SkipDialog_TimerEvent_Callback(KIO__SkipDialog_TimerEvent_Callback cb) { kio__skipdialog_timerevent_callback = cb; }
    inline void setKIO__SkipDialog_ChildEvent_Callback(KIO__SkipDialog_ChildEvent_Callback cb) { kio__skipdialog_childevent_callback = cb; }
    inline void setKIO__SkipDialog_CustomEvent_Callback(KIO__SkipDialog_CustomEvent_Callback cb) { kio__skipdialog_customevent_callback = cb; }
    inline void setKIO__SkipDialog_ConnectNotify_Callback(KIO__SkipDialog_ConnectNotify_Callback cb) { kio__skipdialog_connectnotify_callback = cb; }
    inline void setKIO__SkipDialog_DisconnectNotify_Callback(KIO__SkipDialog_DisconnectNotify_Callback cb) { kio__skipdialog_disconnectnotify_callback = cb; }
    inline void setKIO__SkipDialog_AdjustPosition_Callback(KIO__SkipDialog_AdjustPosition_Callback cb) { kio__skipdialog_adjustposition_callback = cb; }
    inline void setKIO__SkipDialog_UpdateMicroFocus_Callback(KIO__SkipDialog_UpdateMicroFocus_Callback cb) { kio__skipdialog_updatemicrofocus_callback = cb; }
    inline void setKIO__SkipDialog_Create_Callback(KIO__SkipDialog_Create_Callback cb) { kio__skipdialog_create_callback = cb; }
    inline void setKIO__SkipDialog_Destroy_Callback(KIO__SkipDialog_Destroy_Callback cb) { kio__skipdialog_destroy_callback = cb; }
    inline void setKIO__SkipDialog_FocusNextChild_Callback(KIO__SkipDialog_FocusNextChild_Callback cb) { kio__skipdialog_focusnextchild_callback = cb; }
    inline void setKIO__SkipDialog_FocusPreviousChild_Callback(KIO__SkipDialog_FocusPreviousChild_Callback cb) { kio__skipdialog_focuspreviouschild_callback = cb; }
    inline void setKIO__SkipDialog_Sender_Callback(KIO__SkipDialog_Sender_Callback cb) { kio__skipdialog_sender_callback = cb; }
    inline void setKIO__SkipDialog_SenderSignalIndex_Callback(KIO__SkipDialog_SenderSignalIndex_Callback cb) { kio__skipdialog_sendersignalindex_callback = cb; }
    inline void setKIO__SkipDialog_Receivers_Callback(KIO__SkipDialog_Receivers_Callback cb) { kio__skipdialog_receivers_callback = cb; }
    inline void setKIO__SkipDialog_IsSignalConnected_Callback(KIO__SkipDialog_IsSignalConnected_Callback cb) { kio__skipdialog_issignalconnected_callback = cb; }
    inline void setKIO__SkipDialog_GetDecodedMetricF_Callback(KIO__SkipDialog_GetDecodedMetricF_Callback cb) { kio__skipdialog_getdecodedmetricf_callback = cb; }

    // Base flag setters
    inline void setKIO__SkipDialog_Metacall_IsBase(bool value) const { kio__skipdialog_metacall_isbase = value; }
    inline void setKIO__SkipDialog_SetVisible_IsBase(bool value) const { kio__skipdialog_setvisible_isbase = value; }
    inline void setKIO__SkipDialog_SizeHint_IsBase(bool value) const { kio__skipdialog_sizehint_isbase = value; }
    inline void setKIO__SkipDialog_MinimumSizeHint_IsBase(bool value) const { kio__skipdialog_minimumsizehint_isbase = value; }
    inline void setKIO__SkipDialog_Open_IsBase(bool value) const { kio__skipdialog_open_isbase = value; }
    inline void setKIO__SkipDialog_Exec_IsBase(bool value) const { kio__skipdialog_exec_isbase = value; }
    inline void setKIO__SkipDialog_Done_IsBase(bool value) const { kio__skipdialog_done_isbase = value; }
    inline void setKIO__SkipDialog_Accept_IsBase(bool value) const { kio__skipdialog_accept_isbase = value; }
    inline void setKIO__SkipDialog_Reject_IsBase(bool value) const { kio__skipdialog_reject_isbase = value; }
    inline void setKIO__SkipDialog_KeyPressEvent_IsBase(bool value) const { kio__skipdialog_keypressevent_isbase = value; }
    inline void setKIO__SkipDialog_CloseEvent_IsBase(bool value) const { kio__skipdialog_closeevent_isbase = value; }
    inline void setKIO__SkipDialog_ShowEvent_IsBase(bool value) const { kio__skipdialog_showevent_isbase = value; }
    inline void setKIO__SkipDialog_ResizeEvent_IsBase(bool value) const { kio__skipdialog_resizeevent_isbase = value; }
    inline void setKIO__SkipDialog_ContextMenuEvent_IsBase(bool value) const { kio__skipdialog_contextmenuevent_isbase = value; }
    inline void setKIO__SkipDialog_EventFilter_IsBase(bool value) const { kio__skipdialog_eventfilter_isbase = value; }
    inline void setKIO__SkipDialog_DevType_IsBase(bool value) const { kio__skipdialog_devtype_isbase = value; }
    inline void setKIO__SkipDialog_HeightForWidth_IsBase(bool value) const { kio__skipdialog_heightforwidth_isbase = value; }
    inline void setKIO__SkipDialog_HasHeightForWidth_IsBase(bool value) const { kio__skipdialog_hasheightforwidth_isbase = value; }
    inline void setKIO__SkipDialog_PaintEngine_IsBase(bool value) const { kio__skipdialog_paintengine_isbase = value; }
    inline void setKIO__SkipDialog_Event_IsBase(bool value) const { kio__skipdialog_event_isbase = value; }
    inline void setKIO__SkipDialog_MousePressEvent_IsBase(bool value) const { kio__skipdialog_mousepressevent_isbase = value; }
    inline void setKIO__SkipDialog_MouseReleaseEvent_IsBase(bool value) const { kio__skipdialog_mousereleaseevent_isbase = value; }
    inline void setKIO__SkipDialog_MouseDoubleClickEvent_IsBase(bool value) const { kio__skipdialog_mousedoubleclickevent_isbase = value; }
    inline void setKIO__SkipDialog_MouseMoveEvent_IsBase(bool value) const { kio__skipdialog_mousemoveevent_isbase = value; }
    inline void setKIO__SkipDialog_WheelEvent_IsBase(bool value) const { kio__skipdialog_wheelevent_isbase = value; }
    inline void setKIO__SkipDialog_KeyReleaseEvent_IsBase(bool value) const { kio__skipdialog_keyreleaseevent_isbase = value; }
    inline void setKIO__SkipDialog_FocusInEvent_IsBase(bool value) const { kio__skipdialog_focusinevent_isbase = value; }
    inline void setKIO__SkipDialog_FocusOutEvent_IsBase(bool value) const { kio__skipdialog_focusoutevent_isbase = value; }
    inline void setKIO__SkipDialog_EnterEvent_IsBase(bool value) const { kio__skipdialog_enterevent_isbase = value; }
    inline void setKIO__SkipDialog_LeaveEvent_IsBase(bool value) const { kio__skipdialog_leaveevent_isbase = value; }
    inline void setKIO__SkipDialog_PaintEvent_IsBase(bool value) const { kio__skipdialog_paintevent_isbase = value; }
    inline void setKIO__SkipDialog_MoveEvent_IsBase(bool value) const { kio__skipdialog_moveevent_isbase = value; }
    inline void setKIO__SkipDialog_TabletEvent_IsBase(bool value) const { kio__skipdialog_tabletevent_isbase = value; }
    inline void setKIO__SkipDialog_ActionEvent_IsBase(bool value) const { kio__skipdialog_actionevent_isbase = value; }
    inline void setKIO__SkipDialog_DragEnterEvent_IsBase(bool value) const { kio__skipdialog_dragenterevent_isbase = value; }
    inline void setKIO__SkipDialog_DragMoveEvent_IsBase(bool value) const { kio__skipdialog_dragmoveevent_isbase = value; }
    inline void setKIO__SkipDialog_DragLeaveEvent_IsBase(bool value) const { kio__skipdialog_dragleaveevent_isbase = value; }
    inline void setKIO__SkipDialog_DropEvent_IsBase(bool value) const { kio__skipdialog_dropevent_isbase = value; }
    inline void setKIO__SkipDialog_HideEvent_IsBase(bool value) const { kio__skipdialog_hideevent_isbase = value; }
    inline void setKIO__SkipDialog_NativeEvent_IsBase(bool value) const { kio__skipdialog_nativeevent_isbase = value; }
    inline void setKIO__SkipDialog_ChangeEvent_IsBase(bool value) const { kio__skipdialog_changeevent_isbase = value; }
    inline void setKIO__SkipDialog_Metric_IsBase(bool value) const { kio__skipdialog_metric_isbase = value; }
    inline void setKIO__SkipDialog_InitPainter_IsBase(bool value) const { kio__skipdialog_initpainter_isbase = value; }
    inline void setKIO__SkipDialog_Redirected_IsBase(bool value) const { kio__skipdialog_redirected_isbase = value; }
    inline void setKIO__SkipDialog_SharedPainter_IsBase(bool value) const { kio__skipdialog_sharedpainter_isbase = value; }
    inline void setKIO__SkipDialog_InputMethodEvent_IsBase(bool value) const { kio__skipdialog_inputmethodevent_isbase = value; }
    inline void setKIO__SkipDialog_InputMethodQuery_IsBase(bool value) const { kio__skipdialog_inputmethodquery_isbase = value; }
    inline void setKIO__SkipDialog_FocusNextPrevChild_IsBase(bool value) const { kio__skipdialog_focusnextprevchild_isbase = value; }
    inline void setKIO__SkipDialog_TimerEvent_IsBase(bool value) const { kio__skipdialog_timerevent_isbase = value; }
    inline void setKIO__SkipDialog_ChildEvent_IsBase(bool value) const { kio__skipdialog_childevent_isbase = value; }
    inline void setKIO__SkipDialog_CustomEvent_IsBase(bool value) const { kio__skipdialog_customevent_isbase = value; }
    inline void setKIO__SkipDialog_ConnectNotify_IsBase(bool value) const { kio__skipdialog_connectnotify_isbase = value; }
    inline void setKIO__SkipDialog_DisconnectNotify_IsBase(bool value) const { kio__skipdialog_disconnectnotify_isbase = value; }
    inline void setKIO__SkipDialog_AdjustPosition_IsBase(bool value) const { kio__skipdialog_adjustposition_isbase = value; }
    inline void setKIO__SkipDialog_UpdateMicroFocus_IsBase(bool value) const { kio__skipdialog_updatemicrofocus_isbase = value; }
    inline void setKIO__SkipDialog_Create_IsBase(bool value) const { kio__skipdialog_create_isbase = value; }
    inline void setKIO__SkipDialog_Destroy_IsBase(bool value) const { kio__skipdialog_destroy_isbase = value; }
    inline void setKIO__SkipDialog_FocusNextChild_IsBase(bool value) const { kio__skipdialog_focusnextchild_isbase = value; }
    inline void setKIO__SkipDialog_FocusPreviousChild_IsBase(bool value) const { kio__skipdialog_focuspreviouschild_isbase = value; }
    inline void setKIO__SkipDialog_Sender_IsBase(bool value) const { kio__skipdialog_sender_isbase = value; }
    inline void setKIO__SkipDialog_SenderSignalIndex_IsBase(bool value) const { kio__skipdialog_sendersignalindex_isbase = value; }
    inline void setKIO__SkipDialog_Receivers_IsBase(bool value) const { kio__skipdialog_receivers_isbase = value; }
    inline void setKIO__SkipDialog_IsSignalConnected_IsBase(bool value) const { kio__skipdialog_issignalconnected_isbase = value; }
    inline void setKIO__SkipDialog_GetDecodedMetricF_IsBase(bool value) const { kio__skipdialog_getdecodedmetricf_isbase = value; }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (kio__skipdialog_metacall_isbase) {
            kio__skipdialog_metacall_isbase = false;
            return KIO__SkipDialog::qt_metacall(param1, param2, param3);
        } else if (kio__skipdialog_metacall_callback != nullptr) {
            int cbval1 = static_cast<int>(param1);
            int cbval2 = param2;
            void** cbval3 = param3;

            int callback_ret = kio__skipdialog_metacall_callback(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        } else {
            return KIO__SkipDialog::qt_metacall(param1, param2, param3);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void setVisible(bool visible) override {
        if (kio__skipdialog_setvisible_isbase) {
            kio__skipdialog_setvisible_isbase = false;
            KIO__SkipDialog::setVisible(visible);
        } else if (kio__skipdialog_setvisible_callback != nullptr) {
            bool cbval1 = visible;

            kio__skipdialog_setvisible_callback(this, cbval1);
        } else {
            KIO__SkipDialog::setVisible(visible);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QSize sizeHint() const override {
        if (kio__skipdialog_sizehint_isbase) {
            kio__skipdialog_sizehint_isbase = false;
            return KIO__SkipDialog::sizeHint();
        } else if (kio__skipdialog_sizehint_callback != nullptr) {
            QSize* callback_ret = kio__skipdialog_sizehint_callback();
            return *callback_ret;
        } else {
            return KIO__SkipDialog::sizeHint();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QSize minimumSizeHint() const override {
        if (kio__skipdialog_minimumsizehint_isbase) {
            kio__skipdialog_minimumsizehint_isbase = false;
            return KIO__SkipDialog::minimumSizeHint();
        } else if (kio__skipdialog_minimumsizehint_callback != nullptr) {
            QSize* callback_ret = kio__skipdialog_minimumsizehint_callback();
            return *callback_ret;
        } else {
            return KIO__SkipDialog::minimumSizeHint();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void open() override {
        if (kio__skipdialog_open_isbase) {
            kio__skipdialog_open_isbase = false;
            KIO__SkipDialog::open();
        } else if (kio__skipdialog_open_callback != nullptr) {
            kio__skipdialog_open_callback();
        } else {
            KIO__SkipDialog::open();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual int exec() override {
        if (kio__skipdialog_exec_isbase) {
            kio__skipdialog_exec_isbase = false;
            return KIO__SkipDialog::exec();
        } else if (kio__skipdialog_exec_callback != nullptr) {
            int callback_ret = kio__skipdialog_exec_callback();
            return static_cast<int>(callback_ret);
        } else {
            return KIO__SkipDialog::exec();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void done(int param1) override {
        if (kio__skipdialog_done_isbase) {
            kio__skipdialog_done_isbase = false;
            KIO__SkipDialog::done(param1);
        } else if (kio__skipdialog_done_callback != nullptr) {
            int cbval1 = param1;

            kio__skipdialog_done_callback(this, cbval1);
        } else {
            KIO__SkipDialog::done(param1);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void accept() override {
        if (kio__skipdialog_accept_isbase) {
            kio__skipdialog_accept_isbase = false;
            KIO__SkipDialog::accept();
        } else if (kio__skipdialog_accept_callback != nullptr) {
            kio__skipdialog_accept_callback();
        } else {
            KIO__SkipDialog::accept();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void reject() override {
        if (kio__skipdialog_reject_isbase) {
            kio__skipdialog_reject_isbase = false;
            KIO__SkipDialog::reject();
        } else if (kio__skipdialog_reject_callback != nullptr) {
            kio__skipdialog_reject_callback();
        } else {
            KIO__SkipDialog::reject();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void keyPressEvent(QKeyEvent* param1) override {
        if (kio__skipdialog_keypressevent_isbase) {
            kio__skipdialog_keypressevent_isbase = false;
            KIO__SkipDialog::keyPressEvent(param1);
        } else if (kio__skipdialog_keypressevent_callback != nullptr) {
            QKeyEvent* cbval1 = param1;

            kio__skipdialog_keypressevent_callback(this, cbval1);
        } else {
            KIO__SkipDialog::keyPressEvent(param1);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void closeEvent(QCloseEvent* param1) override {
        if (kio__skipdialog_closeevent_isbase) {
            kio__skipdialog_closeevent_isbase = false;
            KIO__SkipDialog::closeEvent(param1);
        } else if (kio__skipdialog_closeevent_callback != nullptr) {
            QCloseEvent* cbval1 = param1;

            kio__skipdialog_closeevent_callback(this, cbval1);
        } else {
            KIO__SkipDialog::closeEvent(param1);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void showEvent(QShowEvent* param1) override {
        if (kio__skipdialog_showevent_isbase) {
            kio__skipdialog_showevent_isbase = false;
            KIO__SkipDialog::showEvent(param1);
        } else if (kio__skipdialog_showevent_callback != nullptr) {
            QShowEvent* cbval1 = param1;

            kio__skipdialog_showevent_callback(this, cbval1);
        } else {
            KIO__SkipDialog::showEvent(param1);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void resizeEvent(QResizeEvent* param1) override {
        if (kio__skipdialog_resizeevent_isbase) {
            kio__skipdialog_resizeevent_isbase = false;
            KIO__SkipDialog::resizeEvent(param1);
        } else if (kio__skipdialog_resizeevent_callback != nullptr) {
            QResizeEvent* cbval1 = param1;

            kio__skipdialog_resizeevent_callback(this, cbval1);
        } else {
            KIO__SkipDialog::resizeEvent(param1);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void contextMenuEvent(QContextMenuEvent* param1) override {
        if (kio__skipdialog_contextmenuevent_isbase) {
            kio__skipdialog_contextmenuevent_isbase = false;
            KIO__SkipDialog::contextMenuEvent(param1);
        } else if (kio__skipdialog_contextmenuevent_callback != nullptr) {
            QContextMenuEvent* cbval1 = param1;

            kio__skipdialog_contextmenuevent_callback(this, cbval1);
        } else {
            KIO__SkipDialog::contextMenuEvent(param1);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* param1, QEvent* param2) override {
        if (kio__skipdialog_eventfilter_isbase) {
            kio__skipdialog_eventfilter_isbase = false;
            return KIO__SkipDialog::eventFilter(param1, param2);
        } else if (kio__skipdialog_eventfilter_callback != nullptr) {
            QObject* cbval1 = param1;
            QEvent* cbval2 = param2;

            bool callback_ret = kio__skipdialog_eventfilter_callback(this, cbval1, cbval2);
            return callback_ret;
        } else {
            return KIO__SkipDialog::eventFilter(param1, param2);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual int devType() const override {
        if (kio__skipdialog_devtype_isbase) {
            kio__skipdialog_devtype_isbase = false;
            return KIO__SkipDialog::devType();
        } else if (kio__skipdialog_devtype_callback != nullptr) {
            int callback_ret = kio__skipdialog_devtype_callback();
            return static_cast<int>(callback_ret);
        } else {
            return KIO__SkipDialog::devType();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual int heightForWidth(int param1) const override {
        if (kio__skipdialog_heightforwidth_isbase) {
            kio__skipdialog_heightforwidth_isbase = false;
            return KIO__SkipDialog::heightForWidth(param1);
        } else if (kio__skipdialog_heightforwidth_callback != nullptr) {
            int cbval1 = param1;

            int callback_ret = kio__skipdialog_heightforwidth_callback(this, cbval1);
            return static_cast<int>(callback_ret);
        } else {
            return KIO__SkipDialog::heightForWidth(param1);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool hasHeightForWidth() const override {
        if (kio__skipdialog_hasheightforwidth_isbase) {
            kio__skipdialog_hasheightforwidth_isbase = false;
            return KIO__SkipDialog::hasHeightForWidth();
        } else if (kio__skipdialog_hasheightforwidth_callback != nullptr) {
            bool callback_ret = kio__skipdialog_hasheightforwidth_callback();
            return callback_ret;
        } else {
            return KIO__SkipDialog::hasHeightForWidth();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QPaintEngine* paintEngine() const override {
        if (kio__skipdialog_paintengine_isbase) {
            kio__skipdialog_paintengine_isbase = false;
            return KIO__SkipDialog::paintEngine();
        } else if (kio__skipdialog_paintengine_callback != nullptr) {
            QPaintEngine* callback_ret = kio__skipdialog_paintengine_callback();
            return callback_ret;
        } else {
            return KIO__SkipDialog::paintEngine();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* event) override {
        if (kio__skipdialog_event_isbase) {
            kio__skipdialog_event_isbase = false;
            return KIO__SkipDialog::event(event);
        } else if (kio__skipdialog_event_callback != nullptr) {
            QEvent* cbval1 = event;

            bool callback_ret = kio__skipdialog_event_callback(this, cbval1);
            return callback_ret;
        } else {
            return KIO__SkipDialog::event(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void mousePressEvent(QMouseEvent* event) override {
        if (kio__skipdialog_mousepressevent_isbase) {
            kio__skipdialog_mousepressevent_isbase = false;
            KIO__SkipDialog::mousePressEvent(event);
        } else if (kio__skipdialog_mousepressevent_callback != nullptr) {
            QMouseEvent* cbval1 = event;

            kio__skipdialog_mousepressevent_callback(this, cbval1);
        } else {
            KIO__SkipDialog::mousePressEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseReleaseEvent(QMouseEvent* event) override {
        if (kio__skipdialog_mousereleaseevent_isbase) {
            kio__skipdialog_mousereleaseevent_isbase = false;
            KIO__SkipDialog::mouseReleaseEvent(event);
        } else if (kio__skipdialog_mousereleaseevent_callback != nullptr) {
            QMouseEvent* cbval1 = event;

            kio__skipdialog_mousereleaseevent_callback(this, cbval1);
        } else {
            KIO__SkipDialog::mouseReleaseEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseDoubleClickEvent(QMouseEvent* event) override {
        if (kio__skipdialog_mousedoubleclickevent_isbase) {
            kio__skipdialog_mousedoubleclickevent_isbase = false;
            KIO__SkipDialog::mouseDoubleClickEvent(event);
        } else if (kio__skipdialog_mousedoubleclickevent_callback != nullptr) {
            QMouseEvent* cbval1 = event;

            kio__skipdialog_mousedoubleclickevent_callback(this, cbval1);
        } else {
            KIO__SkipDialog::mouseDoubleClickEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseMoveEvent(QMouseEvent* event) override {
        if (kio__skipdialog_mousemoveevent_isbase) {
            kio__skipdialog_mousemoveevent_isbase = false;
            KIO__SkipDialog::mouseMoveEvent(event);
        } else if (kio__skipdialog_mousemoveevent_callback != nullptr) {
            QMouseEvent* cbval1 = event;

            kio__skipdialog_mousemoveevent_callback(this, cbval1);
        } else {
            KIO__SkipDialog::mouseMoveEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void wheelEvent(QWheelEvent* event) override {
        if (kio__skipdialog_wheelevent_isbase) {
            kio__skipdialog_wheelevent_isbase = false;
            KIO__SkipDialog::wheelEvent(event);
        } else if (kio__skipdialog_wheelevent_callback != nullptr) {
            QWheelEvent* cbval1 = event;

            kio__skipdialog_wheelevent_callback(this, cbval1);
        } else {
            KIO__SkipDialog::wheelEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void keyReleaseEvent(QKeyEvent* event) override {
        if (kio__skipdialog_keyreleaseevent_isbase) {
            kio__skipdialog_keyreleaseevent_isbase = false;
            KIO__SkipDialog::keyReleaseEvent(event);
        } else if (kio__skipdialog_keyreleaseevent_callback != nullptr) {
            QKeyEvent* cbval1 = event;

            kio__skipdialog_keyreleaseevent_callback(this, cbval1);
        } else {
            KIO__SkipDialog::keyReleaseEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void focusInEvent(QFocusEvent* event) override {
        if (kio__skipdialog_focusinevent_isbase) {
            kio__skipdialog_focusinevent_isbase = false;
            KIO__SkipDialog::focusInEvent(event);
        } else if (kio__skipdialog_focusinevent_callback != nullptr) {
            QFocusEvent* cbval1 = event;

            kio__skipdialog_focusinevent_callback(this, cbval1);
        } else {
            KIO__SkipDialog::focusInEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void focusOutEvent(QFocusEvent* event) override {
        if (kio__skipdialog_focusoutevent_isbase) {
            kio__skipdialog_focusoutevent_isbase = false;
            KIO__SkipDialog::focusOutEvent(event);
        } else if (kio__skipdialog_focusoutevent_callback != nullptr) {
            QFocusEvent* cbval1 = event;

            kio__skipdialog_focusoutevent_callback(this, cbval1);
        } else {
            KIO__SkipDialog::focusOutEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void enterEvent(QEnterEvent* event) override {
        if (kio__skipdialog_enterevent_isbase) {
            kio__skipdialog_enterevent_isbase = false;
            KIO__SkipDialog::enterEvent(event);
        } else if (kio__skipdialog_enterevent_callback != nullptr) {
            QEnterEvent* cbval1 = event;

            kio__skipdialog_enterevent_callback(this, cbval1);
        } else {
            KIO__SkipDialog::enterEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void leaveEvent(QEvent* event) override {
        if (kio__skipdialog_leaveevent_isbase) {
            kio__skipdialog_leaveevent_isbase = false;
            KIO__SkipDialog::leaveEvent(event);
        } else if (kio__skipdialog_leaveevent_callback != nullptr) {
            QEvent* cbval1 = event;

            kio__skipdialog_leaveevent_callback(this, cbval1);
        } else {
            KIO__SkipDialog::leaveEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void paintEvent(QPaintEvent* event) override {
        if (kio__skipdialog_paintevent_isbase) {
            kio__skipdialog_paintevent_isbase = false;
            KIO__SkipDialog::paintEvent(event);
        } else if (kio__skipdialog_paintevent_callback != nullptr) {
            QPaintEvent* cbval1 = event;

            kio__skipdialog_paintevent_callback(this, cbval1);
        } else {
            KIO__SkipDialog::paintEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void moveEvent(QMoveEvent* event) override {
        if (kio__skipdialog_moveevent_isbase) {
            kio__skipdialog_moveevent_isbase = false;
            KIO__SkipDialog::moveEvent(event);
        } else if (kio__skipdialog_moveevent_callback != nullptr) {
            QMoveEvent* cbval1 = event;

            kio__skipdialog_moveevent_callback(this, cbval1);
        } else {
            KIO__SkipDialog::moveEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void tabletEvent(QTabletEvent* event) override {
        if (kio__skipdialog_tabletevent_isbase) {
            kio__skipdialog_tabletevent_isbase = false;
            KIO__SkipDialog::tabletEvent(event);
        } else if (kio__skipdialog_tabletevent_callback != nullptr) {
            QTabletEvent* cbval1 = event;

            kio__skipdialog_tabletevent_callback(this, cbval1);
        } else {
            KIO__SkipDialog::tabletEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void actionEvent(QActionEvent* event) override {
        if (kio__skipdialog_actionevent_isbase) {
            kio__skipdialog_actionevent_isbase = false;
            KIO__SkipDialog::actionEvent(event);
        } else if (kio__skipdialog_actionevent_callback != nullptr) {
            QActionEvent* cbval1 = event;

            kio__skipdialog_actionevent_callback(this, cbval1);
        } else {
            KIO__SkipDialog::actionEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragEnterEvent(QDragEnterEvent* event) override {
        if (kio__skipdialog_dragenterevent_isbase) {
            kio__skipdialog_dragenterevent_isbase = false;
            KIO__SkipDialog::dragEnterEvent(event);
        } else if (kio__skipdialog_dragenterevent_callback != nullptr) {
            QDragEnterEvent* cbval1 = event;

            kio__skipdialog_dragenterevent_callback(this, cbval1);
        } else {
            KIO__SkipDialog::dragEnterEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragMoveEvent(QDragMoveEvent* event) override {
        if (kio__skipdialog_dragmoveevent_isbase) {
            kio__skipdialog_dragmoveevent_isbase = false;
            KIO__SkipDialog::dragMoveEvent(event);
        } else if (kio__skipdialog_dragmoveevent_callback != nullptr) {
            QDragMoveEvent* cbval1 = event;

            kio__skipdialog_dragmoveevent_callback(this, cbval1);
        } else {
            KIO__SkipDialog::dragMoveEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragLeaveEvent(QDragLeaveEvent* event) override {
        if (kio__skipdialog_dragleaveevent_isbase) {
            kio__skipdialog_dragleaveevent_isbase = false;
            KIO__SkipDialog::dragLeaveEvent(event);
        } else if (kio__skipdialog_dragleaveevent_callback != nullptr) {
            QDragLeaveEvent* cbval1 = event;

            kio__skipdialog_dragleaveevent_callback(this, cbval1);
        } else {
            KIO__SkipDialog::dragLeaveEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void dropEvent(QDropEvent* event) override {
        if (kio__skipdialog_dropevent_isbase) {
            kio__skipdialog_dropevent_isbase = false;
            KIO__SkipDialog::dropEvent(event);
        } else if (kio__skipdialog_dropevent_callback != nullptr) {
            QDropEvent* cbval1 = event;

            kio__skipdialog_dropevent_callback(this, cbval1);
        } else {
            KIO__SkipDialog::dropEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void hideEvent(QHideEvent* event) override {
        if (kio__skipdialog_hideevent_isbase) {
            kio__skipdialog_hideevent_isbase = false;
            KIO__SkipDialog::hideEvent(event);
        } else if (kio__skipdialog_hideevent_callback != nullptr) {
            QHideEvent* cbval1 = event;

            kio__skipdialog_hideevent_callback(this, cbval1);
        } else {
            KIO__SkipDialog::hideEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool nativeEvent(const QByteArray& eventType, void* message, qintptr* result) override {
        if (kio__skipdialog_nativeevent_isbase) {
            kio__skipdialog_nativeevent_isbase = false;
            return KIO__SkipDialog::nativeEvent(eventType, message, result);
        } else if (kio__skipdialog_nativeevent_callback != nullptr) {
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

            bool callback_ret = kio__skipdialog_nativeevent_callback(this, cbval1, cbval2, cbval3);
            return callback_ret;
        } else {
            return KIO__SkipDialog::nativeEvent(eventType, message, result);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void changeEvent(QEvent* param1) override {
        if (kio__skipdialog_changeevent_isbase) {
            kio__skipdialog_changeevent_isbase = false;
            KIO__SkipDialog::changeEvent(param1);
        } else if (kio__skipdialog_changeevent_callback != nullptr) {
            QEvent* cbval1 = param1;

            kio__skipdialog_changeevent_callback(this, cbval1);
        } else {
            KIO__SkipDialog::changeEvent(param1);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual int metric(QPaintDevice::PaintDeviceMetric param1) const override {
        if (kio__skipdialog_metric_isbase) {
            kio__skipdialog_metric_isbase = false;
            return KIO__SkipDialog::metric(param1);
        } else if (kio__skipdialog_metric_callback != nullptr) {
            int cbval1 = static_cast<int>(param1);

            int callback_ret = kio__skipdialog_metric_callback(this, cbval1);
            return static_cast<int>(callback_ret);
        } else {
            return KIO__SkipDialog::metric(param1);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void initPainter(QPainter* painter) const override {
        if (kio__skipdialog_initpainter_isbase) {
            kio__skipdialog_initpainter_isbase = false;
            KIO__SkipDialog::initPainter(painter);
        } else if (kio__skipdialog_initpainter_callback != nullptr) {
            QPainter* cbval1 = painter;

            kio__skipdialog_initpainter_callback(this, cbval1);
        } else {
            KIO__SkipDialog::initPainter(painter);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QPaintDevice* redirected(QPoint* offset) const override {
        if (kio__skipdialog_redirected_isbase) {
            kio__skipdialog_redirected_isbase = false;
            return KIO__SkipDialog::redirected(offset);
        } else if (kio__skipdialog_redirected_callback != nullptr) {
            QPoint* cbval1 = offset;

            QPaintDevice* callback_ret = kio__skipdialog_redirected_callback(this, cbval1);
            return callback_ret;
        } else {
            return KIO__SkipDialog::redirected(offset);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QPainter* sharedPainter() const override {
        if (kio__skipdialog_sharedpainter_isbase) {
            kio__skipdialog_sharedpainter_isbase = false;
            return KIO__SkipDialog::sharedPainter();
        } else if (kio__skipdialog_sharedpainter_callback != nullptr) {
            QPainter* callback_ret = kio__skipdialog_sharedpainter_callback();
            return callback_ret;
        } else {
            return KIO__SkipDialog::sharedPainter();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void inputMethodEvent(QInputMethodEvent* param1) override {
        if (kio__skipdialog_inputmethodevent_isbase) {
            kio__skipdialog_inputmethodevent_isbase = false;
            KIO__SkipDialog::inputMethodEvent(param1);
        } else if (kio__skipdialog_inputmethodevent_callback != nullptr) {
            QInputMethodEvent* cbval1 = param1;

            kio__skipdialog_inputmethodevent_callback(this, cbval1);
        } else {
            KIO__SkipDialog::inputMethodEvent(param1);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QVariant inputMethodQuery(Qt::InputMethodQuery param1) const override {
        if (kio__skipdialog_inputmethodquery_isbase) {
            kio__skipdialog_inputmethodquery_isbase = false;
            return KIO__SkipDialog::inputMethodQuery(param1);
        } else if (kio__skipdialog_inputmethodquery_callback != nullptr) {
            int cbval1 = static_cast<int>(param1);

            QVariant* callback_ret = kio__skipdialog_inputmethodquery_callback(this, cbval1);
            return *callback_ret;
        } else {
            return KIO__SkipDialog::inputMethodQuery(param1);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool focusNextPrevChild(bool next) override {
        if (kio__skipdialog_focusnextprevchild_isbase) {
            kio__skipdialog_focusnextprevchild_isbase = false;
            return KIO__SkipDialog::focusNextPrevChild(next);
        } else if (kio__skipdialog_focusnextprevchild_callback != nullptr) {
            bool cbval1 = next;

            bool callback_ret = kio__skipdialog_focusnextprevchild_callback(this, cbval1);
            return callback_ret;
        } else {
            return KIO__SkipDialog::focusNextPrevChild(next);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (kio__skipdialog_timerevent_isbase) {
            kio__skipdialog_timerevent_isbase = false;
            KIO__SkipDialog::timerEvent(event);
        } else if (kio__skipdialog_timerevent_callback != nullptr) {
            QTimerEvent* cbval1 = event;

            kio__skipdialog_timerevent_callback(this, cbval1);
        } else {
            KIO__SkipDialog::timerEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (kio__skipdialog_childevent_isbase) {
            kio__skipdialog_childevent_isbase = false;
            KIO__SkipDialog::childEvent(event);
        } else if (kio__skipdialog_childevent_callback != nullptr) {
            QChildEvent* cbval1 = event;

            kio__skipdialog_childevent_callback(this, cbval1);
        } else {
            KIO__SkipDialog::childEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (kio__skipdialog_customevent_isbase) {
            kio__skipdialog_customevent_isbase = false;
            KIO__SkipDialog::customEvent(event);
        } else if (kio__skipdialog_customevent_callback != nullptr) {
            QEvent* cbval1 = event;

            kio__skipdialog_customevent_callback(this, cbval1);
        } else {
            KIO__SkipDialog::customEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (kio__skipdialog_connectnotify_isbase) {
            kio__skipdialog_connectnotify_isbase = false;
            KIO__SkipDialog::connectNotify(signal);
        } else if (kio__skipdialog_connectnotify_callback != nullptr) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            kio__skipdialog_connectnotify_callback(this, cbval1);
        } else {
            KIO__SkipDialog::connectNotify(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (kio__skipdialog_disconnectnotify_isbase) {
            kio__skipdialog_disconnectnotify_isbase = false;
            KIO__SkipDialog::disconnectNotify(signal);
        } else if (kio__skipdialog_disconnectnotify_callback != nullptr) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            kio__skipdialog_disconnectnotify_callback(this, cbval1);
        } else {
            KIO__SkipDialog::disconnectNotify(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    void adjustPosition(QWidget* param1) {
        if (kio__skipdialog_adjustposition_isbase) {
            kio__skipdialog_adjustposition_isbase = false;
            KIO__SkipDialog::adjustPosition(param1);
        } else if (kio__skipdialog_adjustposition_callback != nullptr) {
            QWidget* cbval1 = param1;

            kio__skipdialog_adjustposition_callback(this, cbval1);
        } else {
            KIO__SkipDialog::adjustPosition(param1);
        }
    }

    // Virtual method for C ABI access and custom callback
    void updateMicroFocus() {
        if (kio__skipdialog_updatemicrofocus_isbase) {
            kio__skipdialog_updatemicrofocus_isbase = false;
            KIO__SkipDialog::updateMicroFocus();
        } else if (kio__skipdialog_updatemicrofocus_callback != nullptr) {
            kio__skipdialog_updatemicrofocus_callback();
        } else {
            KIO__SkipDialog::updateMicroFocus();
        }
    }

    // Virtual method for C ABI access and custom callback
    void create() {
        if (kio__skipdialog_create_isbase) {
            kio__skipdialog_create_isbase = false;
            KIO__SkipDialog::create();
        } else if (kio__skipdialog_create_callback != nullptr) {
            kio__skipdialog_create_callback();
        } else {
            KIO__SkipDialog::create();
        }
    }

    // Virtual method for C ABI access and custom callback
    void destroy() {
        if (kio__skipdialog_destroy_isbase) {
            kio__skipdialog_destroy_isbase = false;
            KIO__SkipDialog::destroy();
        } else if (kio__skipdialog_destroy_callback != nullptr) {
            kio__skipdialog_destroy_callback();
        } else {
            KIO__SkipDialog::destroy();
        }
    }

    // Virtual method for C ABI access and custom callback
    bool focusNextChild() {
        if (kio__skipdialog_focusnextchild_isbase) {
            kio__skipdialog_focusnextchild_isbase = false;
            return KIO__SkipDialog::focusNextChild();
        } else if (kio__skipdialog_focusnextchild_callback != nullptr) {
            bool callback_ret = kio__skipdialog_focusnextchild_callback();
            return callback_ret;
        } else {
            return KIO__SkipDialog::focusNextChild();
        }
    }

    // Virtual method for C ABI access and custom callback
    bool focusPreviousChild() {
        if (kio__skipdialog_focuspreviouschild_isbase) {
            kio__skipdialog_focuspreviouschild_isbase = false;
            return KIO__SkipDialog::focusPreviousChild();
        } else if (kio__skipdialog_focuspreviouschild_callback != nullptr) {
            bool callback_ret = kio__skipdialog_focuspreviouschild_callback();
            return callback_ret;
        } else {
            return KIO__SkipDialog::focusPreviousChild();
        }
    }

    // Virtual method for C ABI access and custom callback
    QObject* sender() const {
        if (kio__skipdialog_sender_isbase) {
            kio__skipdialog_sender_isbase = false;
            return KIO__SkipDialog::sender();
        } else if (kio__skipdialog_sender_callback != nullptr) {
            QObject* callback_ret = kio__skipdialog_sender_callback();
            return callback_ret;
        } else {
            return KIO__SkipDialog::sender();
        }
    }

    // Virtual method for C ABI access and custom callback
    int senderSignalIndex() const {
        if (kio__skipdialog_sendersignalindex_isbase) {
            kio__skipdialog_sendersignalindex_isbase = false;
            return KIO__SkipDialog::senderSignalIndex();
        } else if (kio__skipdialog_sendersignalindex_callback != nullptr) {
            int callback_ret = kio__skipdialog_sendersignalindex_callback();
            return static_cast<int>(callback_ret);
        } else {
            return KIO__SkipDialog::senderSignalIndex();
        }
    }

    // Virtual method for C ABI access and custom callback
    int receivers(const char* signal) const {
        if (kio__skipdialog_receivers_isbase) {
            kio__skipdialog_receivers_isbase = false;
            return KIO__SkipDialog::receivers(signal);
        } else if (kio__skipdialog_receivers_callback != nullptr) {
            const char* cbval1 = (const char*)signal;

            int callback_ret = kio__skipdialog_receivers_callback(this, cbval1);
            return static_cast<int>(callback_ret);
        } else {
            return KIO__SkipDialog::receivers(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    bool isSignalConnected(const QMetaMethod& signal) const {
        if (kio__skipdialog_issignalconnected_isbase) {
            kio__skipdialog_issignalconnected_isbase = false;
            return KIO__SkipDialog::isSignalConnected(signal);
        } else if (kio__skipdialog_issignalconnected_callback != nullptr) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            bool callback_ret = kio__skipdialog_issignalconnected_callback(this, cbval1);
            return callback_ret;
        } else {
            return KIO__SkipDialog::isSignalConnected(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    double getDecodedMetricF(QPaintDevice::PaintDeviceMetric metricA, QPaintDevice::PaintDeviceMetric metricB) const {
        if (kio__skipdialog_getdecodedmetricf_isbase) {
            kio__skipdialog_getdecodedmetricf_isbase = false;
            return KIO__SkipDialog::getDecodedMetricF(metricA, metricB);
        } else if (kio__skipdialog_getdecodedmetricf_callback != nullptr) {
            int cbval1 = static_cast<int>(metricA);
            int cbval2 = static_cast<int>(metricB);

            double callback_ret = kio__skipdialog_getdecodedmetricf_callback(this, cbval1, cbval2);
            return static_cast<double>(callback_ret);
        } else {
            return KIO__SkipDialog::getDecodedMetricF(metricA, metricB);
        }
    }

    // Friend functions
    friend void KIO__SkipDialog_KeyPressEvent(KIO::SkipDialog* self, QKeyEvent* param1);
    friend void KIO__SkipDialog_QBaseKeyPressEvent(KIO::SkipDialog* self, QKeyEvent* param1);
    friend void KIO__SkipDialog_CloseEvent(KIO::SkipDialog* self, QCloseEvent* param1);
    friend void KIO__SkipDialog_QBaseCloseEvent(KIO::SkipDialog* self, QCloseEvent* param1);
    friend void KIO__SkipDialog_ShowEvent(KIO::SkipDialog* self, QShowEvent* param1);
    friend void KIO__SkipDialog_QBaseShowEvent(KIO::SkipDialog* self, QShowEvent* param1);
    friend void KIO__SkipDialog_ResizeEvent(KIO::SkipDialog* self, QResizeEvent* param1);
    friend void KIO__SkipDialog_QBaseResizeEvent(KIO::SkipDialog* self, QResizeEvent* param1);
    friend void KIO__SkipDialog_ContextMenuEvent(KIO::SkipDialog* self, QContextMenuEvent* param1);
    friend void KIO__SkipDialog_QBaseContextMenuEvent(KIO::SkipDialog* self, QContextMenuEvent* param1);
    friend bool KIO__SkipDialog_EventFilter(KIO::SkipDialog* self, QObject* param1, QEvent* param2);
    friend bool KIO__SkipDialog_QBaseEventFilter(KIO::SkipDialog* self, QObject* param1, QEvent* param2);
    friend bool KIO__SkipDialog_Event(KIO::SkipDialog* self, QEvent* event);
    friend bool KIO__SkipDialog_QBaseEvent(KIO::SkipDialog* self, QEvent* event);
    friend void KIO__SkipDialog_MousePressEvent(KIO::SkipDialog* self, QMouseEvent* event);
    friend void KIO__SkipDialog_QBaseMousePressEvent(KIO::SkipDialog* self, QMouseEvent* event);
    friend void KIO__SkipDialog_MouseReleaseEvent(KIO::SkipDialog* self, QMouseEvent* event);
    friend void KIO__SkipDialog_QBaseMouseReleaseEvent(KIO::SkipDialog* self, QMouseEvent* event);
    friend void KIO__SkipDialog_MouseDoubleClickEvent(KIO::SkipDialog* self, QMouseEvent* event);
    friend void KIO__SkipDialog_QBaseMouseDoubleClickEvent(KIO::SkipDialog* self, QMouseEvent* event);
    friend void KIO__SkipDialog_MouseMoveEvent(KIO::SkipDialog* self, QMouseEvent* event);
    friend void KIO__SkipDialog_QBaseMouseMoveEvent(KIO::SkipDialog* self, QMouseEvent* event);
    friend void KIO__SkipDialog_WheelEvent(KIO::SkipDialog* self, QWheelEvent* event);
    friend void KIO__SkipDialog_QBaseWheelEvent(KIO::SkipDialog* self, QWheelEvent* event);
    friend void KIO__SkipDialog_KeyReleaseEvent(KIO::SkipDialog* self, QKeyEvent* event);
    friend void KIO__SkipDialog_QBaseKeyReleaseEvent(KIO::SkipDialog* self, QKeyEvent* event);
    friend void KIO__SkipDialog_FocusInEvent(KIO::SkipDialog* self, QFocusEvent* event);
    friend void KIO__SkipDialog_QBaseFocusInEvent(KIO::SkipDialog* self, QFocusEvent* event);
    friend void KIO__SkipDialog_FocusOutEvent(KIO::SkipDialog* self, QFocusEvent* event);
    friend void KIO__SkipDialog_QBaseFocusOutEvent(KIO::SkipDialog* self, QFocusEvent* event);
    friend void KIO__SkipDialog_EnterEvent(KIO::SkipDialog* self, QEnterEvent* event);
    friend void KIO__SkipDialog_QBaseEnterEvent(KIO::SkipDialog* self, QEnterEvent* event);
    friend void KIO__SkipDialog_LeaveEvent(KIO::SkipDialog* self, QEvent* event);
    friend void KIO__SkipDialog_QBaseLeaveEvent(KIO::SkipDialog* self, QEvent* event);
    friend void KIO__SkipDialog_PaintEvent(KIO::SkipDialog* self, QPaintEvent* event);
    friend void KIO__SkipDialog_QBasePaintEvent(KIO::SkipDialog* self, QPaintEvent* event);
    friend void KIO__SkipDialog_MoveEvent(KIO::SkipDialog* self, QMoveEvent* event);
    friend void KIO__SkipDialog_QBaseMoveEvent(KIO::SkipDialog* self, QMoveEvent* event);
    friend void KIO__SkipDialog_TabletEvent(KIO::SkipDialog* self, QTabletEvent* event);
    friend void KIO__SkipDialog_QBaseTabletEvent(KIO::SkipDialog* self, QTabletEvent* event);
    friend void KIO__SkipDialog_ActionEvent(KIO::SkipDialog* self, QActionEvent* event);
    friend void KIO__SkipDialog_QBaseActionEvent(KIO::SkipDialog* self, QActionEvent* event);
    friend void KIO__SkipDialog_DragEnterEvent(KIO::SkipDialog* self, QDragEnterEvent* event);
    friend void KIO__SkipDialog_QBaseDragEnterEvent(KIO::SkipDialog* self, QDragEnterEvent* event);
    friend void KIO__SkipDialog_DragMoveEvent(KIO::SkipDialog* self, QDragMoveEvent* event);
    friend void KIO__SkipDialog_QBaseDragMoveEvent(KIO::SkipDialog* self, QDragMoveEvent* event);
    friend void KIO__SkipDialog_DragLeaveEvent(KIO::SkipDialog* self, QDragLeaveEvent* event);
    friend void KIO__SkipDialog_QBaseDragLeaveEvent(KIO::SkipDialog* self, QDragLeaveEvent* event);
    friend void KIO__SkipDialog_DropEvent(KIO::SkipDialog* self, QDropEvent* event);
    friend void KIO__SkipDialog_QBaseDropEvent(KIO::SkipDialog* self, QDropEvent* event);
    friend void KIO__SkipDialog_HideEvent(KIO::SkipDialog* self, QHideEvent* event);
    friend void KIO__SkipDialog_QBaseHideEvent(KIO::SkipDialog* self, QHideEvent* event);
    friend bool KIO__SkipDialog_NativeEvent(KIO::SkipDialog* self, const libqt_string eventType, void* message, intptr_t* result);
    friend bool KIO__SkipDialog_QBaseNativeEvent(KIO::SkipDialog* self, const libqt_string eventType, void* message, intptr_t* result);
    friend void KIO__SkipDialog_ChangeEvent(KIO::SkipDialog* self, QEvent* param1);
    friend void KIO__SkipDialog_QBaseChangeEvent(KIO::SkipDialog* self, QEvent* param1);
    friend int KIO__SkipDialog_Metric(const KIO::SkipDialog* self, int param1);
    friend int KIO__SkipDialog_QBaseMetric(const KIO::SkipDialog* self, int param1);
    friend void KIO__SkipDialog_InitPainter(const KIO::SkipDialog* self, QPainter* painter);
    friend void KIO__SkipDialog_QBaseInitPainter(const KIO::SkipDialog* self, QPainter* painter);
    friend QPaintDevice* KIO__SkipDialog_Redirected(const KIO::SkipDialog* self, QPoint* offset);
    friend QPaintDevice* KIO__SkipDialog_QBaseRedirected(const KIO::SkipDialog* self, QPoint* offset);
    friend QPainter* KIO__SkipDialog_SharedPainter(const KIO::SkipDialog* self);
    friend QPainter* KIO__SkipDialog_QBaseSharedPainter(const KIO::SkipDialog* self);
    friend void KIO__SkipDialog_InputMethodEvent(KIO::SkipDialog* self, QInputMethodEvent* param1);
    friend void KIO__SkipDialog_QBaseInputMethodEvent(KIO::SkipDialog* self, QInputMethodEvent* param1);
    friend bool KIO__SkipDialog_FocusNextPrevChild(KIO::SkipDialog* self, bool next);
    friend bool KIO__SkipDialog_QBaseFocusNextPrevChild(KIO::SkipDialog* self, bool next);
    friend void KIO__SkipDialog_TimerEvent(KIO::SkipDialog* self, QTimerEvent* event);
    friend void KIO__SkipDialog_QBaseTimerEvent(KIO::SkipDialog* self, QTimerEvent* event);
    friend void KIO__SkipDialog_ChildEvent(KIO::SkipDialog* self, QChildEvent* event);
    friend void KIO__SkipDialog_QBaseChildEvent(KIO::SkipDialog* self, QChildEvent* event);
    friend void KIO__SkipDialog_CustomEvent(KIO::SkipDialog* self, QEvent* event);
    friend void KIO__SkipDialog_QBaseCustomEvent(KIO::SkipDialog* self, QEvent* event);
    friend void KIO__SkipDialog_ConnectNotify(KIO::SkipDialog* self, const QMetaMethod* signal);
    friend void KIO__SkipDialog_QBaseConnectNotify(KIO::SkipDialog* self, const QMetaMethod* signal);
    friend void KIO__SkipDialog_DisconnectNotify(KIO::SkipDialog* self, const QMetaMethod* signal);
    friend void KIO__SkipDialog_QBaseDisconnectNotify(KIO::SkipDialog* self, const QMetaMethod* signal);
    friend void KIO__SkipDialog_AdjustPosition(KIO::SkipDialog* self, QWidget* param1);
    friend void KIO__SkipDialog_QBaseAdjustPosition(KIO::SkipDialog* self, QWidget* param1);
    friend void KIO__SkipDialog_UpdateMicroFocus(KIO::SkipDialog* self);
    friend void KIO__SkipDialog_QBaseUpdateMicroFocus(KIO::SkipDialog* self);
    friend void KIO__SkipDialog_Create(KIO::SkipDialog* self);
    friend void KIO__SkipDialog_QBaseCreate(KIO::SkipDialog* self);
    friend void KIO__SkipDialog_Destroy(KIO::SkipDialog* self);
    friend void KIO__SkipDialog_QBaseDestroy(KIO::SkipDialog* self);
    friend bool KIO__SkipDialog_FocusNextChild(KIO::SkipDialog* self);
    friend bool KIO__SkipDialog_QBaseFocusNextChild(KIO::SkipDialog* self);
    friend bool KIO__SkipDialog_FocusPreviousChild(KIO::SkipDialog* self);
    friend bool KIO__SkipDialog_QBaseFocusPreviousChild(KIO::SkipDialog* self);
    friend QObject* KIO__SkipDialog_Sender(const KIO::SkipDialog* self);
    friend QObject* KIO__SkipDialog_QBaseSender(const KIO::SkipDialog* self);
    friend int KIO__SkipDialog_SenderSignalIndex(const KIO::SkipDialog* self);
    friend int KIO__SkipDialog_QBaseSenderSignalIndex(const KIO::SkipDialog* self);
    friend int KIO__SkipDialog_Receivers(const KIO::SkipDialog* self, const char* signal);
    friend int KIO__SkipDialog_QBaseReceivers(const KIO::SkipDialog* self, const char* signal);
    friend bool KIO__SkipDialog_IsSignalConnected(const KIO::SkipDialog* self, const QMetaMethod* signal);
    friend bool KIO__SkipDialog_QBaseIsSignalConnected(const KIO::SkipDialog* self, const QMetaMethod* signal);
    friend double KIO__SkipDialog_GetDecodedMetricF(const KIO::SkipDialog* self, int metricA, int metricB);
    friend double KIO__SkipDialog_QBaseGetDecodedMetricF(const KIO::SkipDialog* self, int metricA, int metricB);
};

#endif
