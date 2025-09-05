#pragma once
#ifndef SRC_EXTRAS_KXMLGUIC_LIBVIRTUALKSHORTCUTSDIALOG_H
#define SRC_EXTRAS_KXMLGUIC_LIBVIRTUALKSHORTCUTSDIALOG_H

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

// This class is a subclass of KShortcutsDialog so that we can call protected methods
class VirtualKShortcutsDialog final : public KShortcutsDialog {

  public:
    // Virtual class boolean flag
    bool isVirtualKShortcutsDialog = true;

    // Virtual class public types (including callbacks)
    using KShortcutsDialog_Metacall_Callback = int (*)(KShortcutsDialog*, int, int, void**);
    using KShortcutsDialog_SizeHint_Callback = QSize* (*)();
    using KShortcutsDialog_Accept_Callback = void (*)();
    using KShortcutsDialog_SetVisible_Callback = void (*)(KShortcutsDialog*, bool);
    using KShortcutsDialog_MinimumSizeHint_Callback = QSize* (*)();
    using KShortcutsDialog_Open_Callback = void (*)();
    using KShortcutsDialog_Exec_Callback = int (*)();
    using KShortcutsDialog_Done_Callback = void (*)(KShortcutsDialog*, int);
    using KShortcutsDialog_Reject_Callback = void (*)();
    using KShortcutsDialog_KeyPressEvent_Callback = void (*)(KShortcutsDialog*, QKeyEvent*);
    using KShortcutsDialog_CloseEvent_Callback = void (*)(KShortcutsDialog*, QCloseEvent*);
    using KShortcutsDialog_ShowEvent_Callback = void (*)(KShortcutsDialog*, QShowEvent*);
    using KShortcutsDialog_ResizeEvent_Callback = void (*)(KShortcutsDialog*, QResizeEvent*);
    using KShortcutsDialog_ContextMenuEvent_Callback = void (*)(KShortcutsDialog*, QContextMenuEvent*);
    using KShortcutsDialog_EventFilter_Callback = bool (*)(KShortcutsDialog*, QObject*, QEvent*);
    using KShortcutsDialog_DevType_Callback = int (*)();
    using KShortcutsDialog_HeightForWidth_Callback = int (*)(const KShortcutsDialog*, int);
    using KShortcutsDialog_HasHeightForWidth_Callback = bool (*)();
    using KShortcutsDialog_PaintEngine_Callback = QPaintEngine* (*)();
    using KShortcutsDialog_Event_Callback = bool (*)(KShortcutsDialog*, QEvent*);
    using KShortcutsDialog_MousePressEvent_Callback = void (*)(KShortcutsDialog*, QMouseEvent*);
    using KShortcutsDialog_MouseReleaseEvent_Callback = void (*)(KShortcutsDialog*, QMouseEvent*);
    using KShortcutsDialog_MouseDoubleClickEvent_Callback = void (*)(KShortcutsDialog*, QMouseEvent*);
    using KShortcutsDialog_MouseMoveEvent_Callback = void (*)(KShortcutsDialog*, QMouseEvent*);
    using KShortcutsDialog_WheelEvent_Callback = void (*)(KShortcutsDialog*, QWheelEvent*);
    using KShortcutsDialog_KeyReleaseEvent_Callback = void (*)(KShortcutsDialog*, QKeyEvent*);
    using KShortcutsDialog_FocusInEvent_Callback = void (*)(KShortcutsDialog*, QFocusEvent*);
    using KShortcutsDialog_FocusOutEvent_Callback = void (*)(KShortcutsDialog*, QFocusEvent*);
    using KShortcutsDialog_EnterEvent_Callback = void (*)(KShortcutsDialog*, QEnterEvent*);
    using KShortcutsDialog_LeaveEvent_Callback = void (*)(KShortcutsDialog*, QEvent*);
    using KShortcutsDialog_PaintEvent_Callback = void (*)(KShortcutsDialog*, QPaintEvent*);
    using KShortcutsDialog_MoveEvent_Callback = void (*)(KShortcutsDialog*, QMoveEvent*);
    using KShortcutsDialog_TabletEvent_Callback = void (*)(KShortcutsDialog*, QTabletEvent*);
    using KShortcutsDialog_ActionEvent_Callback = void (*)(KShortcutsDialog*, QActionEvent*);
    using KShortcutsDialog_DragEnterEvent_Callback = void (*)(KShortcutsDialog*, QDragEnterEvent*);
    using KShortcutsDialog_DragMoveEvent_Callback = void (*)(KShortcutsDialog*, QDragMoveEvent*);
    using KShortcutsDialog_DragLeaveEvent_Callback = void (*)(KShortcutsDialog*, QDragLeaveEvent*);
    using KShortcutsDialog_DropEvent_Callback = void (*)(KShortcutsDialog*, QDropEvent*);
    using KShortcutsDialog_HideEvent_Callback = void (*)(KShortcutsDialog*, QHideEvent*);
    using KShortcutsDialog_NativeEvent_Callback = bool (*)(KShortcutsDialog*, libqt_string, void*, intptr_t*);
    using KShortcutsDialog_ChangeEvent_Callback = void (*)(KShortcutsDialog*, QEvent*);
    using KShortcutsDialog_Metric_Callback = int (*)(const KShortcutsDialog*, int);
    using KShortcutsDialog_InitPainter_Callback = void (*)(const KShortcutsDialog*, QPainter*);
    using KShortcutsDialog_Redirected_Callback = QPaintDevice* (*)(const KShortcutsDialog*, QPoint*);
    using KShortcutsDialog_SharedPainter_Callback = QPainter* (*)();
    using KShortcutsDialog_InputMethodEvent_Callback = void (*)(KShortcutsDialog*, QInputMethodEvent*);
    using KShortcutsDialog_InputMethodQuery_Callback = QVariant* (*)(const KShortcutsDialog*, int);
    using KShortcutsDialog_FocusNextPrevChild_Callback = bool (*)(KShortcutsDialog*, bool);
    using KShortcutsDialog_TimerEvent_Callback = void (*)(KShortcutsDialog*, QTimerEvent*);
    using KShortcutsDialog_ChildEvent_Callback = void (*)(KShortcutsDialog*, QChildEvent*);
    using KShortcutsDialog_CustomEvent_Callback = void (*)(KShortcutsDialog*, QEvent*);
    using KShortcutsDialog_ConnectNotify_Callback = void (*)(KShortcutsDialog*, QMetaMethod*);
    using KShortcutsDialog_DisconnectNotify_Callback = void (*)(KShortcutsDialog*, QMetaMethod*);
    using KShortcutsDialog_AdjustPosition_Callback = void (*)(KShortcutsDialog*, QWidget*);
    using KShortcutsDialog_UpdateMicroFocus_Callback = void (*)();
    using KShortcutsDialog_Create_Callback = void (*)();
    using KShortcutsDialog_Destroy_Callback = void (*)();
    using KShortcutsDialog_FocusNextChild_Callback = bool (*)();
    using KShortcutsDialog_FocusPreviousChild_Callback = bool (*)();
    using KShortcutsDialog_Sender_Callback = QObject* (*)();
    using KShortcutsDialog_SenderSignalIndex_Callback = int (*)();
    using KShortcutsDialog_Receivers_Callback = int (*)(const KShortcutsDialog*, const char*);
    using KShortcutsDialog_IsSignalConnected_Callback = bool (*)(const KShortcutsDialog*, QMetaMethod*);
    using KShortcutsDialog_GetDecodedMetricF_Callback = double (*)(const KShortcutsDialog*, int, int);

  protected:
    // Instance callback storage
    KShortcutsDialog_Metacall_Callback kshortcutsdialog_metacall_callback = nullptr;
    KShortcutsDialog_SizeHint_Callback kshortcutsdialog_sizehint_callback = nullptr;
    KShortcutsDialog_Accept_Callback kshortcutsdialog_accept_callback = nullptr;
    KShortcutsDialog_SetVisible_Callback kshortcutsdialog_setvisible_callback = nullptr;
    KShortcutsDialog_MinimumSizeHint_Callback kshortcutsdialog_minimumsizehint_callback = nullptr;
    KShortcutsDialog_Open_Callback kshortcutsdialog_open_callback = nullptr;
    KShortcutsDialog_Exec_Callback kshortcutsdialog_exec_callback = nullptr;
    KShortcutsDialog_Done_Callback kshortcutsdialog_done_callback = nullptr;
    KShortcutsDialog_Reject_Callback kshortcutsdialog_reject_callback = nullptr;
    KShortcutsDialog_KeyPressEvent_Callback kshortcutsdialog_keypressevent_callback = nullptr;
    KShortcutsDialog_CloseEvent_Callback kshortcutsdialog_closeevent_callback = nullptr;
    KShortcutsDialog_ShowEvent_Callback kshortcutsdialog_showevent_callback = nullptr;
    KShortcutsDialog_ResizeEvent_Callback kshortcutsdialog_resizeevent_callback = nullptr;
    KShortcutsDialog_ContextMenuEvent_Callback kshortcutsdialog_contextmenuevent_callback = nullptr;
    KShortcutsDialog_EventFilter_Callback kshortcutsdialog_eventfilter_callback = nullptr;
    KShortcutsDialog_DevType_Callback kshortcutsdialog_devtype_callback = nullptr;
    KShortcutsDialog_HeightForWidth_Callback kshortcutsdialog_heightforwidth_callback = nullptr;
    KShortcutsDialog_HasHeightForWidth_Callback kshortcutsdialog_hasheightforwidth_callback = nullptr;
    KShortcutsDialog_PaintEngine_Callback kshortcutsdialog_paintengine_callback = nullptr;
    KShortcutsDialog_Event_Callback kshortcutsdialog_event_callback = nullptr;
    KShortcutsDialog_MousePressEvent_Callback kshortcutsdialog_mousepressevent_callback = nullptr;
    KShortcutsDialog_MouseReleaseEvent_Callback kshortcutsdialog_mousereleaseevent_callback = nullptr;
    KShortcutsDialog_MouseDoubleClickEvent_Callback kshortcutsdialog_mousedoubleclickevent_callback = nullptr;
    KShortcutsDialog_MouseMoveEvent_Callback kshortcutsdialog_mousemoveevent_callback = nullptr;
    KShortcutsDialog_WheelEvent_Callback kshortcutsdialog_wheelevent_callback = nullptr;
    KShortcutsDialog_KeyReleaseEvent_Callback kshortcutsdialog_keyreleaseevent_callback = nullptr;
    KShortcutsDialog_FocusInEvent_Callback kshortcutsdialog_focusinevent_callback = nullptr;
    KShortcutsDialog_FocusOutEvent_Callback kshortcutsdialog_focusoutevent_callback = nullptr;
    KShortcutsDialog_EnterEvent_Callback kshortcutsdialog_enterevent_callback = nullptr;
    KShortcutsDialog_LeaveEvent_Callback kshortcutsdialog_leaveevent_callback = nullptr;
    KShortcutsDialog_PaintEvent_Callback kshortcutsdialog_paintevent_callback = nullptr;
    KShortcutsDialog_MoveEvent_Callback kshortcutsdialog_moveevent_callback = nullptr;
    KShortcutsDialog_TabletEvent_Callback kshortcutsdialog_tabletevent_callback = nullptr;
    KShortcutsDialog_ActionEvent_Callback kshortcutsdialog_actionevent_callback = nullptr;
    KShortcutsDialog_DragEnterEvent_Callback kshortcutsdialog_dragenterevent_callback = nullptr;
    KShortcutsDialog_DragMoveEvent_Callback kshortcutsdialog_dragmoveevent_callback = nullptr;
    KShortcutsDialog_DragLeaveEvent_Callback kshortcutsdialog_dragleaveevent_callback = nullptr;
    KShortcutsDialog_DropEvent_Callback kshortcutsdialog_dropevent_callback = nullptr;
    KShortcutsDialog_HideEvent_Callback kshortcutsdialog_hideevent_callback = nullptr;
    KShortcutsDialog_NativeEvent_Callback kshortcutsdialog_nativeevent_callback = nullptr;
    KShortcutsDialog_ChangeEvent_Callback kshortcutsdialog_changeevent_callback = nullptr;
    KShortcutsDialog_Metric_Callback kshortcutsdialog_metric_callback = nullptr;
    KShortcutsDialog_InitPainter_Callback kshortcutsdialog_initpainter_callback = nullptr;
    KShortcutsDialog_Redirected_Callback kshortcutsdialog_redirected_callback = nullptr;
    KShortcutsDialog_SharedPainter_Callback kshortcutsdialog_sharedpainter_callback = nullptr;
    KShortcutsDialog_InputMethodEvent_Callback kshortcutsdialog_inputmethodevent_callback = nullptr;
    KShortcutsDialog_InputMethodQuery_Callback kshortcutsdialog_inputmethodquery_callback = nullptr;
    KShortcutsDialog_FocusNextPrevChild_Callback kshortcutsdialog_focusnextprevchild_callback = nullptr;
    KShortcutsDialog_TimerEvent_Callback kshortcutsdialog_timerevent_callback = nullptr;
    KShortcutsDialog_ChildEvent_Callback kshortcutsdialog_childevent_callback = nullptr;
    KShortcutsDialog_CustomEvent_Callback kshortcutsdialog_customevent_callback = nullptr;
    KShortcutsDialog_ConnectNotify_Callback kshortcutsdialog_connectnotify_callback = nullptr;
    KShortcutsDialog_DisconnectNotify_Callback kshortcutsdialog_disconnectnotify_callback = nullptr;
    KShortcutsDialog_AdjustPosition_Callback kshortcutsdialog_adjustposition_callback = nullptr;
    KShortcutsDialog_UpdateMicroFocus_Callback kshortcutsdialog_updatemicrofocus_callback = nullptr;
    KShortcutsDialog_Create_Callback kshortcutsdialog_create_callback = nullptr;
    KShortcutsDialog_Destroy_Callback kshortcutsdialog_destroy_callback = nullptr;
    KShortcutsDialog_FocusNextChild_Callback kshortcutsdialog_focusnextchild_callback = nullptr;
    KShortcutsDialog_FocusPreviousChild_Callback kshortcutsdialog_focuspreviouschild_callback = nullptr;
    KShortcutsDialog_Sender_Callback kshortcutsdialog_sender_callback = nullptr;
    KShortcutsDialog_SenderSignalIndex_Callback kshortcutsdialog_sendersignalindex_callback = nullptr;
    KShortcutsDialog_Receivers_Callback kshortcutsdialog_receivers_callback = nullptr;
    KShortcutsDialog_IsSignalConnected_Callback kshortcutsdialog_issignalconnected_callback = nullptr;
    KShortcutsDialog_GetDecodedMetricF_Callback kshortcutsdialog_getdecodedmetricf_callback = nullptr;

    // Instance base flags
    mutable bool kshortcutsdialog_metacall_isbase = false;
    mutable bool kshortcutsdialog_sizehint_isbase = false;
    mutable bool kshortcutsdialog_accept_isbase = false;
    mutable bool kshortcutsdialog_setvisible_isbase = false;
    mutable bool kshortcutsdialog_minimumsizehint_isbase = false;
    mutable bool kshortcutsdialog_open_isbase = false;
    mutable bool kshortcutsdialog_exec_isbase = false;
    mutable bool kshortcutsdialog_done_isbase = false;
    mutable bool kshortcutsdialog_reject_isbase = false;
    mutable bool kshortcutsdialog_keypressevent_isbase = false;
    mutable bool kshortcutsdialog_closeevent_isbase = false;
    mutable bool kshortcutsdialog_showevent_isbase = false;
    mutable bool kshortcutsdialog_resizeevent_isbase = false;
    mutable bool kshortcutsdialog_contextmenuevent_isbase = false;
    mutable bool kshortcutsdialog_eventfilter_isbase = false;
    mutable bool kshortcutsdialog_devtype_isbase = false;
    mutable bool kshortcutsdialog_heightforwidth_isbase = false;
    mutable bool kshortcutsdialog_hasheightforwidth_isbase = false;
    mutable bool kshortcutsdialog_paintengine_isbase = false;
    mutable bool kshortcutsdialog_event_isbase = false;
    mutable bool kshortcutsdialog_mousepressevent_isbase = false;
    mutable bool kshortcutsdialog_mousereleaseevent_isbase = false;
    mutable bool kshortcutsdialog_mousedoubleclickevent_isbase = false;
    mutable bool kshortcutsdialog_mousemoveevent_isbase = false;
    mutable bool kshortcutsdialog_wheelevent_isbase = false;
    mutable bool kshortcutsdialog_keyreleaseevent_isbase = false;
    mutable bool kshortcutsdialog_focusinevent_isbase = false;
    mutable bool kshortcutsdialog_focusoutevent_isbase = false;
    mutable bool kshortcutsdialog_enterevent_isbase = false;
    mutable bool kshortcutsdialog_leaveevent_isbase = false;
    mutable bool kshortcutsdialog_paintevent_isbase = false;
    mutable bool kshortcutsdialog_moveevent_isbase = false;
    mutable bool kshortcutsdialog_tabletevent_isbase = false;
    mutable bool kshortcutsdialog_actionevent_isbase = false;
    mutable bool kshortcutsdialog_dragenterevent_isbase = false;
    mutable bool kshortcutsdialog_dragmoveevent_isbase = false;
    mutable bool kshortcutsdialog_dragleaveevent_isbase = false;
    mutable bool kshortcutsdialog_dropevent_isbase = false;
    mutable bool kshortcutsdialog_hideevent_isbase = false;
    mutable bool kshortcutsdialog_nativeevent_isbase = false;
    mutable bool kshortcutsdialog_changeevent_isbase = false;
    mutable bool kshortcutsdialog_metric_isbase = false;
    mutable bool kshortcutsdialog_initpainter_isbase = false;
    mutable bool kshortcutsdialog_redirected_isbase = false;
    mutable bool kshortcutsdialog_sharedpainter_isbase = false;
    mutable bool kshortcutsdialog_inputmethodevent_isbase = false;
    mutable bool kshortcutsdialog_inputmethodquery_isbase = false;
    mutable bool kshortcutsdialog_focusnextprevchild_isbase = false;
    mutable bool kshortcutsdialog_timerevent_isbase = false;
    mutable bool kshortcutsdialog_childevent_isbase = false;
    mutable bool kshortcutsdialog_customevent_isbase = false;
    mutable bool kshortcutsdialog_connectnotify_isbase = false;
    mutable bool kshortcutsdialog_disconnectnotify_isbase = false;
    mutable bool kshortcutsdialog_adjustposition_isbase = false;
    mutable bool kshortcutsdialog_updatemicrofocus_isbase = false;
    mutable bool kshortcutsdialog_create_isbase = false;
    mutable bool kshortcutsdialog_destroy_isbase = false;
    mutable bool kshortcutsdialog_focusnextchild_isbase = false;
    mutable bool kshortcutsdialog_focuspreviouschild_isbase = false;
    mutable bool kshortcutsdialog_sender_isbase = false;
    mutable bool kshortcutsdialog_sendersignalindex_isbase = false;
    mutable bool kshortcutsdialog_receivers_isbase = false;
    mutable bool kshortcutsdialog_issignalconnected_isbase = false;
    mutable bool kshortcutsdialog_getdecodedmetricf_isbase = false;

  public:
    VirtualKShortcutsDialog(QWidget* parent) : KShortcutsDialog(parent) {};
    VirtualKShortcutsDialog() : KShortcutsDialog() {};
    VirtualKShortcutsDialog(KShortcutsEditor::ActionTypes actionTypes) : KShortcutsDialog(actionTypes) {};
    VirtualKShortcutsDialog(KShortcutsEditor::ActionTypes actionTypes, KShortcutsEditor::LetterShortcuts allowLetterShortcuts) : KShortcutsDialog(actionTypes, allowLetterShortcuts) {};
    VirtualKShortcutsDialog(KShortcutsEditor::ActionTypes actionTypes, KShortcutsEditor::LetterShortcuts allowLetterShortcuts, QWidget* parent) : KShortcutsDialog(actionTypes, allowLetterShortcuts, parent) {};

    ~VirtualKShortcutsDialog() {
        kshortcutsdialog_metacall_callback = nullptr;
        kshortcutsdialog_sizehint_callback = nullptr;
        kshortcutsdialog_accept_callback = nullptr;
        kshortcutsdialog_setvisible_callback = nullptr;
        kshortcutsdialog_minimumsizehint_callback = nullptr;
        kshortcutsdialog_open_callback = nullptr;
        kshortcutsdialog_exec_callback = nullptr;
        kshortcutsdialog_done_callback = nullptr;
        kshortcutsdialog_reject_callback = nullptr;
        kshortcutsdialog_keypressevent_callback = nullptr;
        kshortcutsdialog_closeevent_callback = nullptr;
        kshortcutsdialog_showevent_callback = nullptr;
        kshortcutsdialog_resizeevent_callback = nullptr;
        kshortcutsdialog_contextmenuevent_callback = nullptr;
        kshortcutsdialog_eventfilter_callback = nullptr;
        kshortcutsdialog_devtype_callback = nullptr;
        kshortcutsdialog_heightforwidth_callback = nullptr;
        kshortcutsdialog_hasheightforwidth_callback = nullptr;
        kshortcutsdialog_paintengine_callback = nullptr;
        kshortcutsdialog_event_callback = nullptr;
        kshortcutsdialog_mousepressevent_callback = nullptr;
        kshortcutsdialog_mousereleaseevent_callback = nullptr;
        kshortcutsdialog_mousedoubleclickevent_callback = nullptr;
        kshortcutsdialog_mousemoveevent_callback = nullptr;
        kshortcutsdialog_wheelevent_callback = nullptr;
        kshortcutsdialog_keyreleaseevent_callback = nullptr;
        kshortcutsdialog_focusinevent_callback = nullptr;
        kshortcutsdialog_focusoutevent_callback = nullptr;
        kshortcutsdialog_enterevent_callback = nullptr;
        kshortcutsdialog_leaveevent_callback = nullptr;
        kshortcutsdialog_paintevent_callback = nullptr;
        kshortcutsdialog_moveevent_callback = nullptr;
        kshortcutsdialog_tabletevent_callback = nullptr;
        kshortcutsdialog_actionevent_callback = nullptr;
        kshortcutsdialog_dragenterevent_callback = nullptr;
        kshortcutsdialog_dragmoveevent_callback = nullptr;
        kshortcutsdialog_dragleaveevent_callback = nullptr;
        kshortcutsdialog_dropevent_callback = nullptr;
        kshortcutsdialog_hideevent_callback = nullptr;
        kshortcutsdialog_nativeevent_callback = nullptr;
        kshortcutsdialog_changeevent_callback = nullptr;
        kshortcutsdialog_metric_callback = nullptr;
        kshortcutsdialog_initpainter_callback = nullptr;
        kshortcutsdialog_redirected_callback = nullptr;
        kshortcutsdialog_sharedpainter_callback = nullptr;
        kshortcutsdialog_inputmethodevent_callback = nullptr;
        kshortcutsdialog_inputmethodquery_callback = nullptr;
        kshortcutsdialog_focusnextprevchild_callback = nullptr;
        kshortcutsdialog_timerevent_callback = nullptr;
        kshortcutsdialog_childevent_callback = nullptr;
        kshortcutsdialog_customevent_callback = nullptr;
        kshortcutsdialog_connectnotify_callback = nullptr;
        kshortcutsdialog_disconnectnotify_callback = nullptr;
        kshortcutsdialog_adjustposition_callback = nullptr;
        kshortcutsdialog_updatemicrofocus_callback = nullptr;
        kshortcutsdialog_create_callback = nullptr;
        kshortcutsdialog_destroy_callback = nullptr;
        kshortcutsdialog_focusnextchild_callback = nullptr;
        kshortcutsdialog_focuspreviouschild_callback = nullptr;
        kshortcutsdialog_sender_callback = nullptr;
        kshortcutsdialog_sendersignalindex_callback = nullptr;
        kshortcutsdialog_receivers_callback = nullptr;
        kshortcutsdialog_issignalconnected_callback = nullptr;
        kshortcutsdialog_getdecodedmetricf_callback = nullptr;
    }

    // Callback setters
    inline void setKShortcutsDialog_Metacall_Callback(KShortcutsDialog_Metacall_Callback cb) { kshortcutsdialog_metacall_callback = cb; }
    inline void setKShortcutsDialog_SizeHint_Callback(KShortcutsDialog_SizeHint_Callback cb) { kshortcutsdialog_sizehint_callback = cb; }
    inline void setKShortcutsDialog_Accept_Callback(KShortcutsDialog_Accept_Callback cb) { kshortcutsdialog_accept_callback = cb; }
    inline void setKShortcutsDialog_SetVisible_Callback(KShortcutsDialog_SetVisible_Callback cb) { kshortcutsdialog_setvisible_callback = cb; }
    inline void setKShortcutsDialog_MinimumSizeHint_Callback(KShortcutsDialog_MinimumSizeHint_Callback cb) { kshortcutsdialog_minimumsizehint_callback = cb; }
    inline void setKShortcutsDialog_Open_Callback(KShortcutsDialog_Open_Callback cb) { kshortcutsdialog_open_callback = cb; }
    inline void setKShortcutsDialog_Exec_Callback(KShortcutsDialog_Exec_Callback cb) { kshortcutsdialog_exec_callback = cb; }
    inline void setKShortcutsDialog_Done_Callback(KShortcutsDialog_Done_Callback cb) { kshortcutsdialog_done_callback = cb; }
    inline void setKShortcutsDialog_Reject_Callback(KShortcutsDialog_Reject_Callback cb) { kshortcutsdialog_reject_callback = cb; }
    inline void setKShortcutsDialog_KeyPressEvent_Callback(KShortcutsDialog_KeyPressEvent_Callback cb) { kshortcutsdialog_keypressevent_callback = cb; }
    inline void setKShortcutsDialog_CloseEvent_Callback(KShortcutsDialog_CloseEvent_Callback cb) { kshortcutsdialog_closeevent_callback = cb; }
    inline void setKShortcutsDialog_ShowEvent_Callback(KShortcutsDialog_ShowEvent_Callback cb) { kshortcutsdialog_showevent_callback = cb; }
    inline void setKShortcutsDialog_ResizeEvent_Callback(KShortcutsDialog_ResizeEvent_Callback cb) { kshortcutsdialog_resizeevent_callback = cb; }
    inline void setKShortcutsDialog_ContextMenuEvent_Callback(KShortcutsDialog_ContextMenuEvent_Callback cb) { kshortcutsdialog_contextmenuevent_callback = cb; }
    inline void setKShortcutsDialog_EventFilter_Callback(KShortcutsDialog_EventFilter_Callback cb) { kshortcutsdialog_eventfilter_callback = cb; }
    inline void setKShortcutsDialog_DevType_Callback(KShortcutsDialog_DevType_Callback cb) { kshortcutsdialog_devtype_callback = cb; }
    inline void setKShortcutsDialog_HeightForWidth_Callback(KShortcutsDialog_HeightForWidth_Callback cb) { kshortcutsdialog_heightforwidth_callback = cb; }
    inline void setKShortcutsDialog_HasHeightForWidth_Callback(KShortcutsDialog_HasHeightForWidth_Callback cb) { kshortcutsdialog_hasheightforwidth_callback = cb; }
    inline void setKShortcutsDialog_PaintEngine_Callback(KShortcutsDialog_PaintEngine_Callback cb) { kshortcutsdialog_paintengine_callback = cb; }
    inline void setKShortcutsDialog_Event_Callback(KShortcutsDialog_Event_Callback cb) { kshortcutsdialog_event_callback = cb; }
    inline void setKShortcutsDialog_MousePressEvent_Callback(KShortcutsDialog_MousePressEvent_Callback cb) { kshortcutsdialog_mousepressevent_callback = cb; }
    inline void setKShortcutsDialog_MouseReleaseEvent_Callback(KShortcutsDialog_MouseReleaseEvent_Callback cb) { kshortcutsdialog_mousereleaseevent_callback = cb; }
    inline void setKShortcutsDialog_MouseDoubleClickEvent_Callback(KShortcutsDialog_MouseDoubleClickEvent_Callback cb) { kshortcutsdialog_mousedoubleclickevent_callback = cb; }
    inline void setKShortcutsDialog_MouseMoveEvent_Callback(KShortcutsDialog_MouseMoveEvent_Callback cb) { kshortcutsdialog_mousemoveevent_callback = cb; }
    inline void setKShortcutsDialog_WheelEvent_Callback(KShortcutsDialog_WheelEvent_Callback cb) { kshortcutsdialog_wheelevent_callback = cb; }
    inline void setKShortcutsDialog_KeyReleaseEvent_Callback(KShortcutsDialog_KeyReleaseEvent_Callback cb) { kshortcutsdialog_keyreleaseevent_callback = cb; }
    inline void setKShortcutsDialog_FocusInEvent_Callback(KShortcutsDialog_FocusInEvent_Callback cb) { kshortcutsdialog_focusinevent_callback = cb; }
    inline void setKShortcutsDialog_FocusOutEvent_Callback(KShortcutsDialog_FocusOutEvent_Callback cb) { kshortcutsdialog_focusoutevent_callback = cb; }
    inline void setKShortcutsDialog_EnterEvent_Callback(KShortcutsDialog_EnterEvent_Callback cb) { kshortcutsdialog_enterevent_callback = cb; }
    inline void setKShortcutsDialog_LeaveEvent_Callback(KShortcutsDialog_LeaveEvent_Callback cb) { kshortcutsdialog_leaveevent_callback = cb; }
    inline void setKShortcutsDialog_PaintEvent_Callback(KShortcutsDialog_PaintEvent_Callback cb) { kshortcutsdialog_paintevent_callback = cb; }
    inline void setKShortcutsDialog_MoveEvent_Callback(KShortcutsDialog_MoveEvent_Callback cb) { kshortcutsdialog_moveevent_callback = cb; }
    inline void setKShortcutsDialog_TabletEvent_Callback(KShortcutsDialog_TabletEvent_Callback cb) { kshortcutsdialog_tabletevent_callback = cb; }
    inline void setKShortcutsDialog_ActionEvent_Callback(KShortcutsDialog_ActionEvent_Callback cb) { kshortcutsdialog_actionevent_callback = cb; }
    inline void setKShortcutsDialog_DragEnterEvent_Callback(KShortcutsDialog_DragEnterEvent_Callback cb) { kshortcutsdialog_dragenterevent_callback = cb; }
    inline void setKShortcutsDialog_DragMoveEvent_Callback(KShortcutsDialog_DragMoveEvent_Callback cb) { kshortcutsdialog_dragmoveevent_callback = cb; }
    inline void setKShortcutsDialog_DragLeaveEvent_Callback(KShortcutsDialog_DragLeaveEvent_Callback cb) { kshortcutsdialog_dragleaveevent_callback = cb; }
    inline void setKShortcutsDialog_DropEvent_Callback(KShortcutsDialog_DropEvent_Callback cb) { kshortcutsdialog_dropevent_callback = cb; }
    inline void setKShortcutsDialog_HideEvent_Callback(KShortcutsDialog_HideEvent_Callback cb) { kshortcutsdialog_hideevent_callback = cb; }
    inline void setKShortcutsDialog_NativeEvent_Callback(KShortcutsDialog_NativeEvent_Callback cb) { kshortcutsdialog_nativeevent_callback = cb; }
    inline void setKShortcutsDialog_ChangeEvent_Callback(KShortcutsDialog_ChangeEvent_Callback cb) { kshortcutsdialog_changeevent_callback = cb; }
    inline void setKShortcutsDialog_Metric_Callback(KShortcutsDialog_Metric_Callback cb) { kshortcutsdialog_metric_callback = cb; }
    inline void setKShortcutsDialog_InitPainter_Callback(KShortcutsDialog_InitPainter_Callback cb) { kshortcutsdialog_initpainter_callback = cb; }
    inline void setKShortcutsDialog_Redirected_Callback(KShortcutsDialog_Redirected_Callback cb) { kshortcutsdialog_redirected_callback = cb; }
    inline void setKShortcutsDialog_SharedPainter_Callback(KShortcutsDialog_SharedPainter_Callback cb) { kshortcutsdialog_sharedpainter_callback = cb; }
    inline void setKShortcutsDialog_InputMethodEvent_Callback(KShortcutsDialog_InputMethodEvent_Callback cb) { kshortcutsdialog_inputmethodevent_callback = cb; }
    inline void setKShortcutsDialog_InputMethodQuery_Callback(KShortcutsDialog_InputMethodQuery_Callback cb) { kshortcutsdialog_inputmethodquery_callback = cb; }
    inline void setKShortcutsDialog_FocusNextPrevChild_Callback(KShortcutsDialog_FocusNextPrevChild_Callback cb) { kshortcutsdialog_focusnextprevchild_callback = cb; }
    inline void setKShortcutsDialog_TimerEvent_Callback(KShortcutsDialog_TimerEvent_Callback cb) { kshortcutsdialog_timerevent_callback = cb; }
    inline void setKShortcutsDialog_ChildEvent_Callback(KShortcutsDialog_ChildEvent_Callback cb) { kshortcutsdialog_childevent_callback = cb; }
    inline void setKShortcutsDialog_CustomEvent_Callback(KShortcutsDialog_CustomEvent_Callback cb) { kshortcutsdialog_customevent_callback = cb; }
    inline void setKShortcutsDialog_ConnectNotify_Callback(KShortcutsDialog_ConnectNotify_Callback cb) { kshortcutsdialog_connectnotify_callback = cb; }
    inline void setKShortcutsDialog_DisconnectNotify_Callback(KShortcutsDialog_DisconnectNotify_Callback cb) { kshortcutsdialog_disconnectnotify_callback = cb; }
    inline void setKShortcutsDialog_AdjustPosition_Callback(KShortcutsDialog_AdjustPosition_Callback cb) { kshortcutsdialog_adjustposition_callback = cb; }
    inline void setKShortcutsDialog_UpdateMicroFocus_Callback(KShortcutsDialog_UpdateMicroFocus_Callback cb) { kshortcutsdialog_updatemicrofocus_callback = cb; }
    inline void setKShortcutsDialog_Create_Callback(KShortcutsDialog_Create_Callback cb) { kshortcutsdialog_create_callback = cb; }
    inline void setKShortcutsDialog_Destroy_Callback(KShortcutsDialog_Destroy_Callback cb) { kshortcutsdialog_destroy_callback = cb; }
    inline void setKShortcutsDialog_FocusNextChild_Callback(KShortcutsDialog_FocusNextChild_Callback cb) { kshortcutsdialog_focusnextchild_callback = cb; }
    inline void setKShortcutsDialog_FocusPreviousChild_Callback(KShortcutsDialog_FocusPreviousChild_Callback cb) { kshortcutsdialog_focuspreviouschild_callback = cb; }
    inline void setKShortcutsDialog_Sender_Callback(KShortcutsDialog_Sender_Callback cb) { kshortcutsdialog_sender_callback = cb; }
    inline void setKShortcutsDialog_SenderSignalIndex_Callback(KShortcutsDialog_SenderSignalIndex_Callback cb) { kshortcutsdialog_sendersignalindex_callback = cb; }
    inline void setKShortcutsDialog_Receivers_Callback(KShortcutsDialog_Receivers_Callback cb) { kshortcutsdialog_receivers_callback = cb; }
    inline void setKShortcutsDialog_IsSignalConnected_Callback(KShortcutsDialog_IsSignalConnected_Callback cb) { kshortcutsdialog_issignalconnected_callback = cb; }
    inline void setKShortcutsDialog_GetDecodedMetricF_Callback(KShortcutsDialog_GetDecodedMetricF_Callback cb) { kshortcutsdialog_getdecodedmetricf_callback = cb; }

    // Base flag setters
    inline void setKShortcutsDialog_Metacall_IsBase(bool value) const { kshortcutsdialog_metacall_isbase = value; }
    inline void setKShortcutsDialog_SizeHint_IsBase(bool value) const { kshortcutsdialog_sizehint_isbase = value; }
    inline void setKShortcutsDialog_Accept_IsBase(bool value) const { kshortcutsdialog_accept_isbase = value; }
    inline void setKShortcutsDialog_SetVisible_IsBase(bool value) const { kshortcutsdialog_setvisible_isbase = value; }
    inline void setKShortcutsDialog_MinimumSizeHint_IsBase(bool value) const { kshortcutsdialog_minimumsizehint_isbase = value; }
    inline void setKShortcutsDialog_Open_IsBase(bool value) const { kshortcutsdialog_open_isbase = value; }
    inline void setKShortcutsDialog_Exec_IsBase(bool value) const { kshortcutsdialog_exec_isbase = value; }
    inline void setKShortcutsDialog_Done_IsBase(bool value) const { kshortcutsdialog_done_isbase = value; }
    inline void setKShortcutsDialog_Reject_IsBase(bool value) const { kshortcutsdialog_reject_isbase = value; }
    inline void setKShortcutsDialog_KeyPressEvent_IsBase(bool value) const { kshortcutsdialog_keypressevent_isbase = value; }
    inline void setKShortcutsDialog_CloseEvent_IsBase(bool value) const { kshortcutsdialog_closeevent_isbase = value; }
    inline void setKShortcutsDialog_ShowEvent_IsBase(bool value) const { kshortcutsdialog_showevent_isbase = value; }
    inline void setKShortcutsDialog_ResizeEvent_IsBase(bool value) const { kshortcutsdialog_resizeevent_isbase = value; }
    inline void setKShortcutsDialog_ContextMenuEvent_IsBase(bool value) const { kshortcutsdialog_contextmenuevent_isbase = value; }
    inline void setKShortcutsDialog_EventFilter_IsBase(bool value) const { kshortcutsdialog_eventfilter_isbase = value; }
    inline void setKShortcutsDialog_DevType_IsBase(bool value) const { kshortcutsdialog_devtype_isbase = value; }
    inline void setKShortcutsDialog_HeightForWidth_IsBase(bool value) const { kshortcutsdialog_heightforwidth_isbase = value; }
    inline void setKShortcutsDialog_HasHeightForWidth_IsBase(bool value) const { kshortcutsdialog_hasheightforwidth_isbase = value; }
    inline void setKShortcutsDialog_PaintEngine_IsBase(bool value) const { kshortcutsdialog_paintengine_isbase = value; }
    inline void setKShortcutsDialog_Event_IsBase(bool value) const { kshortcutsdialog_event_isbase = value; }
    inline void setKShortcutsDialog_MousePressEvent_IsBase(bool value) const { kshortcutsdialog_mousepressevent_isbase = value; }
    inline void setKShortcutsDialog_MouseReleaseEvent_IsBase(bool value) const { kshortcutsdialog_mousereleaseevent_isbase = value; }
    inline void setKShortcutsDialog_MouseDoubleClickEvent_IsBase(bool value) const { kshortcutsdialog_mousedoubleclickevent_isbase = value; }
    inline void setKShortcutsDialog_MouseMoveEvent_IsBase(bool value) const { kshortcutsdialog_mousemoveevent_isbase = value; }
    inline void setKShortcutsDialog_WheelEvent_IsBase(bool value) const { kshortcutsdialog_wheelevent_isbase = value; }
    inline void setKShortcutsDialog_KeyReleaseEvent_IsBase(bool value) const { kshortcutsdialog_keyreleaseevent_isbase = value; }
    inline void setKShortcutsDialog_FocusInEvent_IsBase(bool value) const { kshortcutsdialog_focusinevent_isbase = value; }
    inline void setKShortcutsDialog_FocusOutEvent_IsBase(bool value) const { kshortcutsdialog_focusoutevent_isbase = value; }
    inline void setKShortcutsDialog_EnterEvent_IsBase(bool value) const { kshortcutsdialog_enterevent_isbase = value; }
    inline void setKShortcutsDialog_LeaveEvent_IsBase(bool value) const { kshortcutsdialog_leaveevent_isbase = value; }
    inline void setKShortcutsDialog_PaintEvent_IsBase(bool value) const { kshortcutsdialog_paintevent_isbase = value; }
    inline void setKShortcutsDialog_MoveEvent_IsBase(bool value) const { kshortcutsdialog_moveevent_isbase = value; }
    inline void setKShortcutsDialog_TabletEvent_IsBase(bool value) const { kshortcutsdialog_tabletevent_isbase = value; }
    inline void setKShortcutsDialog_ActionEvent_IsBase(bool value) const { kshortcutsdialog_actionevent_isbase = value; }
    inline void setKShortcutsDialog_DragEnterEvent_IsBase(bool value) const { kshortcutsdialog_dragenterevent_isbase = value; }
    inline void setKShortcutsDialog_DragMoveEvent_IsBase(bool value) const { kshortcutsdialog_dragmoveevent_isbase = value; }
    inline void setKShortcutsDialog_DragLeaveEvent_IsBase(bool value) const { kshortcutsdialog_dragleaveevent_isbase = value; }
    inline void setKShortcutsDialog_DropEvent_IsBase(bool value) const { kshortcutsdialog_dropevent_isbase = value; }
    inline void setKShortcutsDialog_HideEvent_IsBase(bool value) const { kshortcutsdialog_hideevent_isbase = value; }
    inline void setKShortcutsDialog_NativeEvent_IsBase(bool value) const { kshortcutsdialog_nativeevent_isbase = value; }
    inline void setKShortcutsDialog_ChangeEvent_IsBase(bool value) const { kshortcutsdialog_changeevent_isbase = value; }
    inline void setKShortcutsDialog_Metric_IsBase(bool value) const { kshortcutsdialog_metric_isbase = value; }
    inline void setKShortcutsDialog_InitPainter_IsBase(bool value) const { kshortcutsdialog_initpainter_isbase = value; }
    inline void setKShortcutsDialog_Redirected_IsBase(bool value) const { kshortcutsdialog_redirected_isbase = value; }
    inline void setKShortcutsDialog_SharedPainter_IsBase(bool value) const { kshortcutsdialog_sharedpainter_isbase = value; }
    inline void setKShortcutsDialog_InputMethodEvent_IsBase(bool value) const { kshortcutsdialog_inputmethodevent_isbase = value; }
    inline void setKShortcutsDialog_InputMethodQuery_IsBase(bool value) const { kshortcutsdialog_inputmethodquery_isbase = value; }
    inline void setKShortcutsDialog_FocusNextPrevChild_IsBase(bool value) const { kshortcutsdialog_focusnextprevchild_isbase = value; }
    inline void setKShortcutsDialog_TimerEvent_IsBase(bool value) const { kshortcutsdialog_timerevent_isbase = value; }
    inline void setKShortcutsDialog_ChildEvent_IsBase(bool value) const { kshortcutsdialog_childevent_isbase = value; }
    inline void setKShortcutsDialog_CustomEvent_IsBase(bool value) const { kshortcutsdialog_customevent_isbase = value; }
    inline void setKShortcutsDialog_ConnectNotify_IsBase(bool value) const { kshortcutsdialog_connectnotify_isbase = value; }
    inline void setKShortcutsDialog_DisconnectNotify_IsBase(bool value) const { kshortcutsdialog_disconnectnotify_isbase = value; }
    inline void setKShortcutsDialog_AdjustPosition_IsBase(bool value) const { kshortcutsdialog_adjustposition_isbase = value; }
    inline void setKShortcutsDialog_UpdateMicroFocus_IsBase(bool value) const { kshortcutsdialog_updatemicrofocus_isbase = value; }
    inline void setKShortcutsDialog_Create_IsBase(bool value) const { kshortcutsdialog_create_isbase = value; }
    inline void setKShortcutsDialog_Destroy_IsBase(bool value) const { kshortcutsdialog_destroy_isbase = value; }
    inline void setKShortcutsDialog_FocusNextChild_IsBase(bool value) const { kshortcutsdialog_focusnextchild_isbase = value; }
    inline void setKShortcutsDialog_FocusPreviousChild_IsBase(bool value) const { kshortcutsdialog_focuspreviouschild_isbase = value; }
    inline void setKShortcutsDialog_Sender_IsBase(bool value) const { kshortcutsdialog_sender_isbase = value; }
    inline void setKShortcutsDialog_SenderSignalIndex_IsBase(bool value) const { kshortcutsdialog_sendersignalindex_isbase = value; }
    inline void setKShortcutsDialog_Receivers_IsBase(bool value) const { kshortcutsdialog_receivers_isbase = value; }
    inline void setKShortcutsDialog_IsSignalConnected_IsBase(bool value) const { kshortcutsdialog_issignalconnected_isbase = value; }
    inline void setKShortcutsDialog_GetDecodedMetricF_IsBase(bool value) const { kshortcutsdialog_getdecodedmetricf_isbase = value; }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (kshortcutsdialog_metacall_isbase) {
            kshortcutsdialog_metacall_isbase = false;
            return KShortcutsDialog::qt_metacall(param1, param2, param3);
        } else if (kshortcutsdialog_metacall_callback != nullptr) {
            int cbval1 = static_cast<int>(param1);
            int cbval2 = param2;
            void** cbval3 = param3;

            int callback_ret = kshortcutsdialog_metacall_callback(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        } else {
            return KShortcutsDialog::qt_metacall(param1, param2, param3);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QSize sizeHint() const override {
        if (kshortcutsdialog_sizehint_isbase) {
            kshortcutsdialog_sizehint_isbase = false;
            return KShortcutsDialog::sizeHint();
        } else if (kshortcutsdialog_sizehint_callback != nullptr) {
            QSize* callback_ret = kshortcutsdialog_sizehint_callback();
            return *callback_ret;
        } else {
            return KShortcutsDialog::sizeHint();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void accept() override {
        if (kshortcutsdialog_accept_isbase) {
            kshortcutsdialog_accept_isbase = false;
            KShortcutsDialog::accept();
        } else if (kshortcutsdialog_accept_callback != nullptr) {
            kshortcutsdialog_accept_callback();
        } else {
            KShortcutsDialog::accept();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void setVisible(bool visible) override {
        if (kshortcutsdialog_setvisible_isbase) {
            kshortcutsdialog_setvisible_isbase = false;
            KShortcutsDialog::setVisible(visible);
        } else if (kshortcutsdialog_setvisible_callback != nullptr) {
            bool cbval1 = visible;

            kshortcutsdialog_setvisible_callback(this, cbval1);
        } else {
            KShortcutsDialog::setVisible(visible);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QSize minimumSizeHint() const override {
        if (kshortcutsdialog_minimumsizehint_isbase) {
            kshortcutsdialog_minimumsizehint_isbase = false;
            return KShortcutsDialog::minimumSizeHint();
        } else if (kshortcutsdialog_minimumsizehint_callback != nullptr) {
            QSize* callback_ret = kshortcutsdialog_minimumsizehint_callback();
            return *callback_ret;
        } else {
            return KShortcutsDialog::minimumSizeHint();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void open() override {
        if (kshortcutsdialog_open_isbase) {
            kshortcutsdialog_open_isbase = false;
            KShortcutsDialog::open();
        } else if (kshortcutsdialog_open_callback != nullptr) {
            kshortcutsdialog_open_callback();
        } else {
            KShortcutsDialog::open();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual int exec() override {
        if (kshortcutsdialog_exec_isbase) {
            kshortcutsdialog_exec_isbase = false;
            return KShortcutsDialog::exec();
        } else if (kshortcutsdialog_exec_callback != nullptr) {
            int callback_ret = kshortcutsdialog_exec_callback();
            return static_cast<int>(callback_ret);
        } else {
            return KShortcutsDialog::exec();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void done(int param1) override {
        if (kshortcutsdialog_done_isbase) {
            kshortcutsdialog_done_isbase = false;
            KShortcutsDialog::done(param1);
        } else if (kshortcutsdialog_done_callback != nullptr) {
            int cbval1 = param1;

            kshortcutsdialog_done_callback(this, cbval1);
        } else {
            KShortcutsDialog::done(param1);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void reject() override {
        if (kshortcutsdialog_reject_isbase) {
            kshortcutsdialog_reject_isbase = false;
            KShortcutsDialog::reject();
        } else if (kshortcutsdialog_reject_callback != nullptr) {
            kshortcutsdialog_reject_callback();
        } else {
            KShortcutsDialog::reject();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void keyPressEvent(QKeyEvent* param1) override {
        if (kshortcutsdialog_keypressevent_isbase) {
            kshortcutsdialog_keypressevent_isbase = false;
            KShortcutsDialog::keyPressEvent(param1);
        } else if (kshortcutsdialog_keypressevent_callback != nullptr) {
            QKeyEvent* cbval1 = param1;

            kshortcutsdialog_keypressevent_callback(this, cbval1);
        } else {
            KShortcutsDialog::keyPressEvent(param1);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void closeEvent(QCloseEvent* param1) override {
        if (kshortcutsdialog_closeevent_isbase) {
            kshortcutsdialog_closeevent_isbase = false;
            KShortcutsDialog::closeEvent(param1);
        } else if (kshortcutsdialog_closeevent_callback != nullptr) {
            QCloseEvent* cbval1 = param1;

            kshortcutsdialog_closeevent_callback(this, cbval1);
        } else {
            KShortcutsDialog::closeEvent(param1);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void showEvent(QShowEvent* param1) override {
        if (kshortcutsdialog_showevent_isbase) {
            kshortcutsdialog_showevent_isbase = false;
            KShortcutsDialog::showEvent(param1);
        } else if (kshortcutsdialog_showevent_callback != nullptr) {
            QShowEvent* cbval1 = param1;

            kshortcutsdialog_showevent_callback(this, cbval1);
        } else {
            KShortcutsDialog::showEvent(param1);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void resizeEvent(QResizeEvent* param1) override {
        if (kshortcutsdialog_resizeevent_isbase) {
            kshortcutsdialog_resizeevent_isbase = false;
            KShortcutsDialog::resizeEvent(param1);
        } else if (kshortcutsdialog_resizeevent_callback != nullptr) {
            QResizeEvent* cbval1 = param1;

            kshortcutsdialog_resizeevent_callback(this, cbval1);
        } else {
            KShortcutsDialog::resizeEvent(param1);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void contextMenuEvent(QContextMenuEvent* param1) override {
        if (kshortcutsdialog_contextmenuevent_isbase) {
            kshortcutsdialog_contextmenuevent_isbase = false;
            KShortcutsDialog::contextMenuEvent(param1);
        } else if (kshortcutsdialog_contextmenuevent_callback != nullptr) {
            QContextMenuEvent* cbval1 = param1;

            kshortcutsdialog_contextmenuevent_callback(this, cbval1);
        } else {
            KShortcutsDialog::contextMenuEvent(param1);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* param1, QEvent* param2) override {
        if (kshortcutsdialog_eventfilter_isbase) {
            kshortcutsdialog_eventfilter_isbase = false;
            return KShortcutsDialog::eventFilter(param1, param2);
        } else if (kshortcutsdialog_eventfilter_callback != nullptr) {
            QObject* cbval1 = param1;
            QEvent* cbval2 = param2;

            bool callback_ret = kshortcutsdialog_eventfilter_callback(this, cbval1, cbval2);
            return callback_ret;
        } else {
            return KShortcutsDialog::eventFilter(param1, param2);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual int devType() const override {
        if (kshortcutsdialog_devtype_isbase) {
            kshortcutsdialog_devtype_isbase = false;
            return KShortcutsDialog::devType();
        } else if (kshortcutsdialog_devtype_callback != nullptr) {
            int callback_ret = kshortcutsdialog_devtype_callback();
            return static_cast<int>(callback_ret);
        } else {
            return KShortcutsDialog::devType();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual int heightForWidth(int param1) const override {
        if (kshortcutsdialog_heightforwidth_isbase) {
            kshortcutsdialog_heightforwidth_isbase = false;
            return KShortcutsDialog::heightForWidth(param1);
        } else if (kshortcutsdialog_heightforwidth_callback != nullptr) {
            int cbval1 = param1;

            int callback_ret = kshortcutsdialog_heightforwidth_callback(this, cbval1);
            return static_cast<int>(callback_ret);
        } else {
            return KShortcutsDialog::heightForWidth(param1);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool hasHeightForWidth() const override {
        if (kshortcutsdialog_hasheightforwidth_isbase) {
            kshortcutsdialog_hasheightforwidth_isbase = false;
            return KShortcutsDialog::hasHeightForWidth();
        } else if (kshortcutsdialog_hasheightforwidth_callback != nullptr) {
            bool callback_ret = kshortcutsdialog_hasheightforwidth_callback();
            return callback_ret;
        } else {
            return KShortcutsDialog::hasHeightForWidth();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QPaintEngine* paintEngine() const override {
        if (kshortcutsdialog_paintengine_isbase) {
            kshortcutsdialog_paintengine_isbase = false;
            return KShortcutsDialog::paintEngine();
        } else if (kshortcutsdialog_paintengine_callback != nullptr) {
            QPaintEngine* callback_ret = kshortcutsdialog_paintengine_callback();
            return callback_ret;
        } else {
            return KShortcutsDialog::paintEngine();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* event) override {
        if (kshortcutsdialog_event_isbase) {
            kshortcutsdialog_event_isbase = false;
            return KShortcutsDialog::event(event);
        } else if (kshortcutsdialog_event_callback != nullptr) {
            QEvent* cbval1 = event;

            bool callback_ret = kshortcutsdialog_event_callback(this, cbval1);
            return callback_ret;
        } else {
            return KShortcutsDialog::event(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void mousePressEvent(QMouseEvent* event) override {
        if (kshortcutsdialog_mousepressevent_isbase) {
            kshortcutsdialog_mousepressevent_isbase = false;
            KShortcutsDialog::mousePressEvent(event);
        } else if (kshortcutsdialog_mousepressevent_callback != nullptr) {
            QMouseEvent* cbval1 = event;

            kshortcutsdialog_mousepressevent_callback(this, cbval1);
        } else {
            KShortcutsDialog::mousePressEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseReleaseEvent(QMouseEvent* event) override {
        if (kshortcutsdialog_mousereleaseevent_isbase) {
            kshortcutsdialog_mousereleaseevent_isbase = false;
            KShortcutsDialog::mouseReleaseEvent(event);
        } else if (kshortcutsdialog_mousereleaseevent_callback != nullptr) {
            QMouseEvent* cbval1 = event;

            kshortcutsdialog_mousereleaseevent_callback(this, cbval1);
        } else {
            KShortcutsDialog::mouseReleaseEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseDoubleClickEvent(QMouseEvent* event) override {
        if (kshortcutsdialog_mousedoubleclickevent_isbase) {
            kshortcutsdialog_mousedoubleclickevent_isbase = false;
            KShortcutsDialog::mouseDoubleClickEvent(event);
        } else if (kshortcutsdialog_mousedoubleclickevent_callback != nullptr) {
            QMouseEvent* cbval1 = event;

            kshortcutsdialog_mousedoubleclickevent_callback(this, cbval1);
        } else {
            KShortcutsDialog::mouseDoubleClickEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseMoveEvent(QMouseEvent* event) override {
        if (kshortcutsdialog_mousemoveevent_isbase) {
            kshortcutsdialog_mousemoveevent_isbase = false;
            KShortcutsDialog::mouseMoveEvent(event);
        } else if (kshortcutsdialog_mousemoveevent_callback != nullptr) {
            QMouseEvent* cbval1 = event;

            kshortcutsdialog_mousemoveevent_callback(this, cbval1);
        } else {
            KShortcutsDialog::mouseMoveEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void wheelEvent(QWheelEvent* event) override {
        if (kshortcutsdialog_wheelevent_isbase) {
            kshortcutsdialog_wheelevent_isbase = false;
            KShortcutsDialog::wheelEvent(event);
        } else if (kshortcutsdialog_wheelevent_callback != nullptr) {
            QWheelEvent* cbval1 = event;

            kshortcutsdialog_wheelevent_callback(this, cbval1);
        } else {
            KShortcutsDialog::wheelEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void keyReleaseEvent(QKeyEvent* event) override {
        if (kshortcutsdialog_keyreleaseevent_isbase) {
            kshortcutsdialog_keyreleaseevent_isbase = false;
            KShortcutsDialog::keyReleaseEvent(event);
        } else if (kshortcutsdialog_keyreleaseevent_callback != nullptr) {
            QKeyEvent* cbval1 = event;

            kshortcutsdialog_keyreleaseevent_callback(this, cbval1);
        } else {
            KShortcutsDialog::keyReleaseEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void focusInEvent(QFocusEvent* event) override {
        if (kshortcutsdialog_focusinevent_isbase) {
            kshortcutsdialog_focusinevent_isbase = false;
            KShortcutsDialog::focusInEvent(event);
        } else if (kshortcutsdialog_focusinevent_callback != nullptr) {
            QFocusEvent* cbval1 = event;

            kshortcutsdialog_focusinevent_callback(this, cbval1);
        } else {
            KShortcutsDialog::focusInEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void focusOutEvent(QFocusEvent* event) override {
        if (kshortcutsdialog_focusoutevent_isbase) {
            kshortcutsdialog_focusoutevent_isbase = false;
            KShortcutsDialog::focusOutEvent(event);
        } else if (kshortcutsdialog_focusoutevent_callback != nullptr) {
            QFocusEvent* cbval1 = event;

            kshortcutsdialog_focusoutevent_callback(this, cbval1);
        } else {
            KShortcutsDialog::focusOutEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void enterEvent(QEnterEvent* event) override {
        if (kshortcutsdialog_enterevent_isbase) {
            kshortcutsdialog_enterevent_isbase = false;
            KShortcutsDialog::enterEvent(event);
        } else if (kshortcutsdialog_enterevent_callback != nullptr) {
            QEnterEvent* cbval1 = event;

            kshortcutsdialog_enterevent_callback(this, cbval1);
        } else {
            KShortcutsDialog::enterEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void leaveEvent(QEvent* event) override {
        if (kshortcutsdialog_leaveevent_isbase) {
            kshortcutsdialog_leaveevent_isbase = false;
            KShortcutsDialog::leaveEvent(event);
        } else if (kshortcutsdialog_leaveevent_callback != nullptr) {
            QEvent* cbval1 = event;

            kshortcutsdialog_leaveevent_callback(this, cbval1);
        } else {
            KShortcutsDialog::leaveEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void paintEvent(QPaintEvent* event) override {
        if (kshortcutsdialog_paintevent_isbase) {
            kshortcutsdialog_paintevent_isbase = false;
            KShortcutsDialog::paintEvent(event);
        } else if (kshortcutsdialog_paintevent_callback != nullptr) {
            QPaintEvent* cbval1 = event;

            kshortcutsdialog_paintevent_callback(this, cbval1);
        } else {
            KShortcutsDialog::paintEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void moveEvent(QMoveEvent* event) override {
        if (kshortcutsdialog_moveevent_isbase) {
            kshortcutsdialog_moveevent_isbase = false;
            KShortcutsDialog::moveEvent(event);
        } else if (kshortcutsdialog_moveevent_callback != nullptr) {
            QMoveEvent* cbval1 = event;

            kshortcutsdialog_moveevent_callback(this, cbval1);
        } else {
            KShortcutsDialog::moveEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void tabletEvent(QTabletEvent* event) override {
        if (kshortcutsdialog_tabletevent_isbase) {
            kshortcutsdialog_tabletevent_isbase = false;
            KShortcutsDialog::tabletEvent(event);
        } else if (kshortcutsdialog_tabletevent_callback != nullptr) {
            QTabletEvent* cbval1 = event;

            kshortcutsdialog_tabletevent_callback(this, cbval1);
        } else {
            KShortcutsDialog::tabletEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void actionEvent(QActionEvent* event) override {
        if (kshortcutsdialog_actionevent_isbase) {
            kshortcutsdialog_actionevent_isbase = false;
            KShortcutsDialog::actionEvent(event);
        } else if (kshortcutsdialog_actionevent_callback != nullptr) {
            QActionEvent* cbval1 = event;

            kshortcutsdialog_actionevent_callback(this, cbval1);
        } else {
            KShortcutsDialog::actionEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragEnterEvent(QDragEnterEvent* event) override {
        if (kshortcutsdialog_dragenterevent_isbase) {
            kshortcutsdialog_dragenterevent_isbase = false;
            KShortcutsDialog::dragEnterEvent(event);
        } else if (kshortcutsdialog_dragenterevent_callback != nullptr) {
            QDragEnterEvent* cbval1 = event;

            kshortcutsdialog_dragenterevent_callback(this, cbval1);
        } else {
            KShortcutsDialog::dragEnterEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragMoveEvent(QDragMoveEvent* event) override {
        if (kshortcutsdialog_dragmoveevent_isbase) {
            kshortcutsdialog_dragmoveevent_isbase = false;
            KShortcutsDialog::dragMoveEvent(event);
        } else if (kshortcutsdialog_dragmoveevent_callback != nullptr) {
            QDragMoveEvent* cbval1 = event;

            kshortcutsdialog_dragmoveevent_callback(this, cbval1);
        } else {
            KShortcutsDialog::dragMoveEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragLeaveEvent(QDragLeaveEvent* event) override {
        if (kshortcutsdialog_dragleaveevent_isbase) {
            kshortcutsdialog_dragleaveevent_isbase = false;
            KShortcutsDialog::dragLeaveEvent(event);
        } else if (kshortcutsdialog_dragleaveevent_callback != nullptr) {
            QDragLeaveEvent* cbval1 = event;

            kshortcutsdialog_dragleaveevent_callback(this, cbval1);
        } else {
            KShortcutsDialog::dragLeaveEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void dropEvent(QDropEvent* event) override {
        if (kshortcutsdialog_dropevent_isbase) {
            kshortcutsdialog_dropevent_isbase = false;
            KShortcutsDialog::dropEvent(event);
        } else if (kshortcutsdialog_dropevent_callback != nullptr) {
            QDropEvent* cbval1 = event;

            kshortcutsdialog_dropevent_callback(this, cbval1);
        } else {
            KShortcutsDialog::dropEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void hideEvent(QHideEvent* event) override {
        if (kshortcutsdialog_hideevent_isbase) {
            kshortcutsdialog_hideevent_isbase = false;
            KShortcutsDialog::hideEvent(event);
        } else if (kshortcutsdialog_hideevent_callback != nullptr) {
            QHideEvent* cbval1 = event;

            kshortcutsdialog_hideevent_callback(this, cbval1);
        } else {
            KShortcutsDialog::hideEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool nativeEvent(const QByteArray& eventType, void* message, qintptr* result) override {
        if (kshortcutsdialog_nativeevent_isbase) {
            kshortcutsdialog_nativeevent_isbase = false;
            return KShortcutsDialog::nativeEvent(eventType, message, result);
        } else if (kshortcutsdialog_nativeevent_callback != nullptr) {
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

            bool callback_ret = kshortcutsdialog_nativeevent_callback(this, cbval1, cbval2, cbval3);
            return callback_ret;
        } else {
            return KShortcutsDialog::nativeEvent(eventType, message, result);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void changeEvent(QEvent* param1) override {
        if (kshortcutsdialog_changeevent_isbase) {
            kshortcutsdialog_changeevent_isbase = false;
            KShortcutsDialog::changeEvent(param1);
        } else if (kshortcutsdialog_changeevent_callback != nullptr) {
            QEvent* cbval1 = param1;

            kshortcutsdialog_changeevent_callback(this, cbval1);
        } else {
            KShortcutsDialog::changeEvent(param1);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual int metric(QPaintDevice::PaintDeviceMetric param1) const override {
        if (kshortcutsdialog_metric_isbase) {
            kshortcutsdialog_metric_isbase = false;
            return KShortcutsDialog::metric(param1);
        } else if (kshortcutsdialog_metric_callback != nullptr) {
            int cbval1 = static_cast<int>(param1);

            int callback_ret = kshortcutsdialog_metric_callback(this, cbval1);
            return static_cast<int>(callback_ret);
        } else {
            return KShortcutsDialog::metric(param1);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void initPainter(QPainter* painter) const override {
        if (kshortcutsdialog_initpainter_isbase) {
            kshortcutsdialog_initpainter_isbase = false;
            KShortcutsDialog::initPainter(painter);
        } else if (kshortcutsdialog_initpainter_callback != nullptr) {
            QPainter* cbval1 = painter;

            kshortcutsdialog_initpainter_callback(this, cbval1);
        } else {
            KShortcutsDialog::initPainter(painter);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QPaintDevice* redirected(QPoint* offset) const override {
        if (kshortcutsdialog_redirected_isbase) {
            kshortcutsdialog_redirected_isbase = false;
            return KShortcutsDialog::redirected(offset);
        } else if (kshortcutsdialog_redirected_callback != nullptr) {
            QPoint* cbval1 = offset;

            QPaintDevice* callback_ret = kshortcutsdialog_redirected_callback(this, cbval1);
            return callback_ret;
        } else {
            return KShortcutsDialog::redirected(offset);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QPainter* sharedPainter() const override {
        if (kshortcutsdialog_sharedpainter_isbase) {
            kshortcutsdialog_sharedpainter_isbase = false;
            return KShortcutsDialog::sharedPainter();
        } else if (kshortcutsdialog_sharedpainter_callback != nullptr) {
            QPainter* callback_ret = kshortcutsdialog_sharedpainter_callback();
            return callback_ret;
        } else {
            return KShortcutsDialog::sharedPainter();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void inputMethodEvent(QInputMethodEvent* param1) override {
        if (kshortcutsdialog_inputmethodevent_isbase) {
            kshortcutsdialog_inputmethodevent_isbase = false;
            KShortcutsDialog::inputMethodEvent(param1);
        } else if (kshortcutsdialog_inputmethodevent_callback != nullptr) {
            QInputMethodEvent* cbval1 = param1;

            kshortcutsdialog_inputmethodevent_callback(this, cbval1);
        } else {
            KShortcutsDialog::inputMethodEvent(param1);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QVariant inputMethodQuery(Qt::InputMethodQuery param1) const override {
        if (kshortcutsdialog_inputmethodquery_isbase) {
            kshortcutsdialog_inputmethodquery_isbase = false;
            return KShortcutsDialog::inputMethodQuery(param1);
        } else if (kshortcutsdialog_inputmethodquery_callback != nullptr) {
            int cbval1 = static_cast<int>(param1);

            QVariant* callback_ret = kshortcutsdialog_inputmethodquery_callback(this, cbval1);
            return *callback_ret;
        } else {
            return KShortcutsDialog::inputMethodQuery(param1);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool focusNextPrevChild(bool next) override {
        if (kshortcutsdialog_focusnextprevchild_isbase) {
            kshortcutsdialog_focusnextprevchild_isbase = false;
            return KShortcutsDialog::focusNextPrevChild(next);
        } else if (kshortcutsdialog_focusnextprevchild_callback != nullptr) {
            bool cbval1 = next;

            bool callback_ret = kshortcutsdialog_focusnextprevchild_callback(this, cbval1);
            return callback_ret;
        } else {
            return KShortcutsDialog::focusNextPrevChild(next);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (kshortcutsdialog_timerevent_isbase) {
            kshortcutsdialog_timerevent_isbase = false;
            KShortcutsDialog::timerEvent(event);
        } else if (kshortcutsdialog_timerevent_callback != nullptr) {
            QTimerEvent* cbval1 = event;

            kshortcutsdialog_timerevent_callback(this, cbval1);
        } else {
            KShortcutsDialog::timerEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (kshortcutsdialog_childevent_isbase) {
            kshortcutsdialog_childevent_isbase = false;
            KShortcutsDialog::childEvent(event);
        } else if (kshortcutsdialog_childevent_callback != nullptr) {
            QChildEvent* cbval1 = event;

            kshortcutsdialog_childevent_callback(this, cbval1);
        } else {
            KShortcutsDialog::childEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (kshortcutsdialog_customevent_isbase) {
            kshortcutsdialog_customevent_isbase = false;
            KShortcutsDialog::customEvent(event);
        } else if (kshortcutsdialog_customevent_callback != nullptr) {
            QEvent* cbval1 = event;

            kshortcutsdialog_customevent_callback(this, cbval1);
        } else {
            KShortcutsDialog::customEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (kshortcutsdialog_connectnotify_isbase) {
            kshortcutsdialog_connectnotify_isbase = false;
            KShortcutsDialog::connectNotify(signal);
        } else if (kshortcutsdialog_connectnotify_callback != nullptr) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            kshortcutsdialog_connectnotify_callback(this, cbval1);
        } else {
            KShortcutsDialog::connectNotify(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (kshortcutsdialog_disconnectnotify_isbase) {
            kshortcutsdialog_disconnectnotify_isbase = false;
            KShortcutsDialog::disconnectNotify(signal);
        } else if (kshortcutsdialog_disconnectnotify_callback != nullptr) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            kshortcutsdialog_disconnectnotify_callback(this, cbval1);
        } else {
            KShortcutsDialog::disconnectNotify(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    void adjustPosition(QWidget* param1) {
        if (kshortcutsdialog_adjustposition_isbase) {
            kshortcutsdialog_adjustposition_isbase = false;
            KShortcutsDialog::adjustPosition(param1);
        } else if (kshortcutsdialog_adjustposition_callback != nullptr) {
            QWidget* cbval1 = param1;

            kshortcutsdialog_adjustposition_callback(this, cbval1);
        } else {
            KShortcutsDialog::adjustPosition(param1);
        }
    }

    // Virtual method for C ABI access and custom callback
    void updateMicroFocus() {
        if (kshortcutsdialog_updatemicrofocus_isbase) {
            kshortcutsdialog_updatemicrofocus_isbase = false;
            KShortcutsDialog::updateMicroFocus();
        } else if (kshortcutsdialog_updatemicrofocus_callback != nullptr) {
            kshortcutsdialog_updatemicrofocus_callback();
        } else {
            KShortcutsDialog::updateMicroFocus();
        }
    }

    // Virtual method for C ABI access and custom callback
    void create() {
        if (kshortcutsdialog_create_isbase) {
            kshortcutsdialog_create_isbase = false;
            KShortcutsDialog::create();
        } else if (kshortcutsdialog_create_callback != nullptr) {
            kshortcutsdialog_create_callback();
        } else {
            KShortcutsDialog::create();
        }
    }

    // Virtual method for C ABI access and custom callback
    void destroy() {
        if (kshortcutsdialog_destroy_isbase) {
            kshortcutsdialog_destroy_isbase = false;
            KShortcutsDialog::destroy();
        } else if (kshortcutsdialog_destroy_callback != nullptr) {
            kshortcutsdialog_destroy_callback();
        } else {
            KShortcutsDialog::destroy();
        }
    }

    // Virtual method for C ABI access and custom callback
    bool focusNextChild() {
        if (kshortcutsdialog_focusnextchild_isbase) {
            kshortcutsdialog_focusnextchild_isbase = false;
            return KShortcutsDialog::focusNextChild();
        } else if (kshortcutsdialog_focusnextchild_callback != nullptr) {
            bool callback_ret = kshortcutsdialog_focusnextchild_callback();
            return callback_ret;
        } else {
            return KShortcutsDialog::focusNextChild();
        }
    }

    // Virtual method for C ABI access and custom callback
    bool focusPreviousChild() {
        if (kshortcutsdialog_focuspreviouschild_isbase) {
            kshortcutsdialog_focuspreviouschild_isbase = false;
            return KShortcutsDialog::focusPreviousChild();
        } else if (kshortcutsdialog_focuspreviouschild_callback != nullptr) {
            bool callback_ret = kshortcutsdialog_focuspreviouschild_callback();
            return callback_ret;
        } else {
            return KShortcutsDialog::focusPreviousChild();
        }
    }

    // Virtual method for C ABI access and custom callback
    QObject* sender() const {
        if (kshortcutsdialog_sender_isbase) {
            kshortcutsdialog_sender_isbase = false;
            return KShortcutsDialog::sender();
        } else if (kshortcutsdialog_sender_callback != nullptr) {
            QObject* callback_ret = kshortcutsdialog_sender_callback();
            return callback_ret;
        } else {
            return KShortcutsDialog::sender();
        }
    }

    // Virtual method for C ABI access and custom callback
    int senderSignalIndex() const {
        if (kshortcutsdialog_sendersignalindex_isbase) {
            kshortcutsdialog_sendersignalindex_isbase = false;
            return KShortcutsDialog::senderSignalIndex();
        } else if (kshortcutsdialog_sendersignalindex_callback != nullptr) {
            int callback_ret = kshortcutsdialog_sendersignalindex_callback();
            return static_cast<int>(callback_ret);
        } else {
            return KShortcutsDialog::senderSignalIndex();
        }
    }

    // Virtual method for C ABI access and custom callback
    int receivers(const char* signal) const {
        if (kshortcutsdialog_receivers_isbase) {
            kshortcutsdialog_receivers_isbase = false;
            return KShortcutsDialog::receivers(signal);
        } else if (kshortcutsdialog_receivers_callback != nullptr) {
            const char* cbval1 = (const char*)signal;

            int callback_ret = kshortcutsdialog_receivers_callback(this, cbval1);
            return static_cast<int>(callback_ret);
        } else {
            return KShortcutsDialog::receivers(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    bool isSignalConnected(const QMetaMethod& signal) const {
        if (kshortcutsdialog_issignalconnected_isbase) {
            kshortcutsdialog_issignalconnected_isbase = false;
            return KShortcutsDialog::isSignalConnected(signal);
        } else if (kshortcutsdialog_issignalconnected_callback != nullptr) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            bool callback_ret = kshortcutsdialog_issignalconnected_callback(this, cbval1);
            return callback_ret;
        } else {
            return KShortcutsDialog::isSignalConnected(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    double getDecodedMetricF(QPaintDevice::PaintDeviceMetric metricA, QPaintDevice::PaintDeviceMetric metricB) const {
        if (kshortcutsdialog_getdecodedmetricf_isbase) {
            kshortcutsdialog_getdecodedmetricf_isbase = false;
            return KShortcutsDialog::getDecodedMetricF(metricA, metricB);
        } else if (kshortcutsdialog_getdecodedmetricf_callback != nullptr) {
            int cbval1 = static_cast<int>(metricA);
            int cbval2 = static_cast<int>(metricB);

            double callback_ret = kshortcutsdialog_getdecodedmetricf_callback(this, cbval1, cbval2);
            return static_cast<double>(callback_ret);
        } else {
            return KShortcutsDialog::getDecodedMetricF(metricA, metricB);
        }
    }

    // Friend functions
    friend void KShortcutsDialog_KeyPressEvent(KShortcutsDialog* self, QKeyEvent* param1);
    friend void KShortcutsDialog_QBaseKeyPressEvent(KShortcutsDialog* self, QKeyEvent* param1);
    friend void KShortcutsDialog_CloseEvent(KShortcutsDialog* self, QCloseEvent* param1);
    friend void KShortcutsDialog_QBaseCloseEvent(KShortcutsDialog* self, QCloseEvent* param1);
    friend void KShortcutsDialog_ShowEvent(KShortcutsDialog* self, QShowEvent* param1);
    friend void KShortcutsDialog_QBaseShowEvent(KShortcutsDialog* self, QShowEvent* param1);
    friend void KShortcutsDialog_ResizeEvent(KShortcutsDialog* self, QResizeEvent* param1);
    friend void KShortcutsDialog_QBaseResizeEvent(KShortcutsDialog* self, QResizeEvent* param1);
    friend void KShortcutsDialog_ContextMenuEvent(KShortcutsDialog* self, QContextMenuEvent* param1);
    friend void KShortcutsDialog_QBaseContextMenuEvent(KShortcutsDialog* self, QContextMenuEvent* param1);
    friend bool KShortcutsDialog_EventFilter(KShortcutsDialog* self, QObject* param1, QEvent* param2);
    friend bool KShortcutsDialog_QBaseEventFilter(KShortcutsDialog* self, QObject* param1, QEvent* param2);
    friend bool KShortcutsDialog_Event(KShortcutsDialog* self, QEvent* event);
    friend bool KShortcutsDialog_QBaseEvent(KShortcutsDialog* self, QEvent* event);
    friend void KShortcutsDialog_MousePressEvent(KShortcutsDialog* self, QMouseEvent* event);
    friend void KShortcutsDialog_QBaseMousePressEvent(KShortcutsDialog* self, QMouseEvent* event);
    friend void KShortcutsDialog_MouseReleaseEvent(KShortcutsDialog* self, QMouseEvent* event);
    friend void KShortcutsDialog_QBaseMouseReleaseEvent(KShortcutsDialog* self, QMouseEvent* event);
    friend void KShortcutsDialog_MouseDoubleClickEvent(KShortcutsDialog* self, QMouseEvent* event);
    friend void KShortcutsDialog_QBaseMouseDoubleClickEvent(KShortcutsDialog* self, QMouseEvent* event);
    friend void KShortcutsDialog_MouseMoveEvent(KShortcutsDialog* self, QMouseEvent* event);
    friend void KShortcutsDialog_QBaseMouseMoveEvent(KShortcutsDialog* self, QMouseEvent* event);
    friend void KShortcutsDialog_WheelEvent(KShortcutsDialog* self, QWheelEvent* event);
    friend void KShortcutsDialog_QBaseWheelEvent(KShortcutsDialog* self, QWheelEvent* event);
    friend void KShortcutsDialog_KeyReleaseEvent(KShortcutsDialog* self, QKeyEvent* event);
    friend void KShortcutsDialog_QBaseKeyReleaseEvent(KShortcutsDialog* self, QKeyEvent* event);
    friend void KShortcutsDialog_FocusInEvent(KShortcutsDialog* self, QFocusEvent* event);
    friend void KShortcutsDialog_QBaseFocusInEvent(KShortcutsDialog* self, QFocusEvent* event);
    friend void KShortcutsDialog_FocusOutEvent(KShortcutsDialog* self, QFocusEvent* event);
    friend void KShortcutsDialog_QBaseFocusOutEvent(KShortcutsDialog* self, QFocusEvent* event);
    friend void KShortcutsDialog_EnterEvent(KShortcutsDialog* self, QEnterEvent* event);
    friend void KShortcutsDialog_QBaseEnterEvent(KShortcutsDialog* self, QEnterEvent* event);
    friend void KShortcutsDialog_LeaveEvent(KShortcutsDialog* self, QEvent* event);
    friend void KShortcutsDialog_QBaseLeaveEvent(KShortcutsDialog* self, QEvent* event);
    friend void KShortcutsDialog_PaintEvent(KShortcutsDialog* self, QPaintEvent* event);
    friend void KShortcutsDialog_QBasePaintEvent(KShortcutsDialog* self, QPaintEvent* event);
    friend void KShortcutsDialog_MoveEvent(KShortcutsDialog* self, QMoveEvent* event);
    friend void KShortcutsDialog_QBaseMoveEvent(KShortcutsDialog* self, QMoveEvent* event);
    friend void KShortcutsDialog_TabletEvent(KShortcutsDialog* self, QTabletEvent* event);
    friend void KShortcutsDialog_QBaseTabletEvent(KShortcutsDialog* self, QTabletEvent* event);
    friend void KShortcutsDialog_ActionEvent(KShortcutsDialog* self, QActionEvent* event);
    friend void KShortcutsDialog_QBaseActionEvent(KShortcutsDialog* self, QActionEvent* event);
    friend void KShortcutsDialog_DragEnterEvent(KShortcutsDialog* self, QDragEnterEvent* event);
    friend void KShortcutsDialog_QBaseDragEnterEvent(KShortcutsDialog* self, QDragEnterEvent* event);
    friend void KShortcutsDialog_DragMoveEvent(KShortcutsDialog* self, QDragMoveEvent* event);
    friend void KShortcutsDialog_QBaseDragMoveEvent(KShortcutsDialog* self, QDragMoveEvent* event);
    friend void KShortcutsDialog_DragLeaveEvent(KShortcutsDialog* self, QDragLeaveEvent* event);
    friend void KShortcutsDialog_QBaseDragLeaveEvent(KShortcutsDialog* self, QDragLeaveEvent* event);
    friend void KShortcutsDialog_DropEvent(KShortcutsDialog* self, QDropEvent* event);
    friend void KShortcutsDialog_QBaseDropEvent(KShortcutsDialog* self, QDropEvent* event);
    friend void KShortcutsDialog_HideEvent(KShortcutsDialog* self, QHideEvent* event);
    friend void KShortcutsDialog_QBaseHideEvent(KShortcutsDialog* self, QHideEvent* event);
    friend bool KShortcutsDialog_NativeEvent(KShortcutsDialog* self, const libqt_string eventType, void* message, intptr_t* result);
    friend bool KShortcutsDialog_QBaseNativeEvent(KShortcutsDialog* self, const libqt_string eventType, void* message, intptr_t* result);
    friend void KShortcutsDialog_ChangeEvent(KShortcutsDialog* self, QEvent* param1);
    friend void KShortcutsDialog_QBaseChangeEvent(KShortcutsDialog* self, QEvent* param1);
    friend int KShortcutsDialog_Metric(const KShortcutsDialog* self, int param1);
    friend int KShortcutsDialog_QBaseMetric(const KShortcutsDialog* self, int param1);
    friend void KShortcutsDialog_InitPainter(const KShortcutsDialog* self, QPainter* painter);
    friend void KShortcutsDialog_QBaseInitPainter(const KShortcutsDialog* self, QPainter* painter);
    friend QPaintDevice* KShortcutsDialog_Redirected(const KShortcutsDialog* self, QPoint* offset);
    friend QPaintDevice* KShortcutsDialog_QBaseRedirected(const KShortcutsDialog* self, QPoint* offset);
    friend QPainter* KShortcutsDialog_SharedPainter(const KShortcutsDialog* self);
    friend QPainter* KShortcutsDialog_QBaseSharedPainter(const KShortcutsDialog* self);
    friend void KShortcutsDialog_InputMethodEvent(KShortcutsDialog* self, QInputMethodEvent* param1);
    friend void KShortcutsDialog_QBaseInputMethodEvent(KShortcutsDialog* self, QInputMethodEvent* param1);
    friend bool KShortcutsDialog_FocusNextPrevChild(KShortcutsDialog* self, bool next);
    friend bool KShortcutsDialog_QBaseFocusNextPrevChild(KShortcutsDialog* self, bool next);
    friend void KShortcutsDialog_TimerEvent(KShortcutsDialog* self, QTimerEvent* event);
    friend void KShortcutsDialog_QBaseTimerEvent(KShortcutsDialog* self, QTimerEvent* event);
    friend void KShortcutsDialog_ChildEvent(KShortcutsDialog* self, QChildEvent* event);
    friend void KShortcutsDialog_QBaseChildEvent(KShortcutsDialog* self, QChildEvent* event);
    friend void KShortcutsDialog_CustomEvent(KShortcutsDialog* self, QEvent* event);
    friend void KShortcutsDialog_QBaseCustomEvent(KShortcutsDialog* self, QEvent* event);
    friend void KShortcutsDialog_ConnectNotify(KShortcutsDialog* self, const QMetaMethod* signal);
    friend void KShortcutsDialog_QBaseConnectNotify(KShortcutsDialog* self, const QMetaMethod* signal);
    friend void KShortcutsDialog_DisconnectNotify(KShortcutsDialog* self, const QMetaMethod* signal);
    friend void KShortcutsDialog_QBaseDisconnectNotify(KShortcutsDialog* self, const QMetaMethod* signal);
    friend void KShortcutsDialog_AdjustPosition(KShortcutsDialog* self, QWidget* param1);
    friend void KShortcutsDialog_QBaseAdjustPosition(KShortcutsDialog* self, QWidget* param1);
    friend void KShortcutsDialog_UpdateMicroFocus(KShortcutsDialog* self);
    friend void KShortcutsDialog_QBaseUpdateMicroFocus(KShortcutsDialog* self);
    friend void KShortcutsDialog_Create(KShortcutsDialog* self);
    friend void KShortcutsDialog_QBaseCreate(KShortcutsDialog* self);
    friend void KShortcutsDialog_Destroy(KShortcutsDialog* self);
    friend void KShortcutsDialog_QBaseDestroy(KShortcutsDialog* self);
    friend bool KShortcutsDialog_FocusNextChild(KShortcutsDialog* self);
    friend bool KShortcutsDialog_QBaseFocusNextChild(KShortcutsDialog* self);
    friend bool KShortcutsDialog_FocusPreviousChild(KShortcutsDialog* self);
    friend bool KShortcutsDialog_QBaseFocusPreviousChild(KShortcutsDialog* self);
    friend QObject* KShortcutsDialog_Sender(const KShortcutsDialog* self);
    friend QObject* KShortcutsDialog_QBaseSender(const KShortcutsDialog* self);
    friend int KShortcutsDialog_SenderSignalIndex(const KShortcutsDialog* self);
    friend int KShortcutsDialog_QBaseSenderSignalIndex(const KShortcutsDialog* self);
    friend int KShortcutsDialog_Receivers(const KShortcutsDialog* self, const char* signal);
    friend int KShortcutsDialog_QBaseReceivers(const KShortcutsDialog* self, const char* signal);
    friend bool KShortcutsDialog_IsSignalConnected(const KShortcutsDialog* self, const QMetaMethod* signal);
    friend bool KShortcutsDialog_QBaseIsSignalConnected(const KShortcutsDialog* self, const QMetaMethod* signal);
    friend double KShortcutsDialog_GetDecodedMetricF(const KShortcutsDialog* self, int metricA, int metricB);
    friend double KShortcutsDialog_QBaseGetDecodedMetricF(const KShortcutsDialog* self, int metricA, int metricB);
};

#endif
