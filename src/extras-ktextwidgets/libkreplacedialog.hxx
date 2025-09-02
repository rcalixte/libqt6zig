#pragma once
#ifndef SRC_EXTRAS_KTEXTWIDGETSC_LIBVIRTUALKREPLACEDIALOG_H
#define SRC_EXTRAS_KTEXTWIDGETSC_LIBVIRTUALKREPLACEDIALOG_H

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

// This class is a subclass of KReplaceDialog so that we can call protected methods
class VirtualKReplaceDialog final : public KReplaceDialog {

  public:
    // Virtual class boolean flag
    bool isVirtualKReplaceDialog = true;

    // Virtual class public types (including callbacks)
    using KReplaceDialog_Metacall_Callback = int (*)(KReplaceDialog*, int, int, void**);
    using KReplaceDialog_ShowEvent_Callback = void (*)(KReplaceDialog*, QShowEvent*);
    using KReplaceDialog_SetVisible_Callback = void (*)(KReplaceDialog*, bool);
    using KReplaceDialog_SizeHint_Callback = QSize* (*)();
    using KReplaceDialog_MinimumSizeHint_Callback = QSize* (*)();
    using KReplaceDialog_Open_Callback = void (*)();
    using KReplaceDialog_Exec_Callback = int (*)();
    using KReplaceDialog_Done_Callback = void (*)(KReplaceDialog*, int);
    using KReplaceDialog_Accept_Callback = void (*)();
    using KReplaceDialog_Reject_Callback = void (*)();
    using KReplaceDialog_KeyPressEvent_Callback = void (*)(KReplaceDialog*, QKeyEvent*);
    using KReplaceDialog_CloseEvent_Callback = void (*)(KReplaceDialog*, QCloseEvent*);
    using KReplaceDialog_ResizeEvent_Callback = void (*)(KReplaceDialog*, QResizeEvent*);
    using KReplaceDialog_ContextMenuEvent_Callback = void (*)(KReplaceDialog*, QContextMenuEvent*);
    using KReplaceDialog_EventFilter_Callback = bool (*)(KReplaceDialog*, QObject*, QEvent*);
    using KReplaceDialog_DevType_Callback = int (*)();
    using KReplaceDialog_HeightForWidth_Callback = int (*)(const KReplaceDialog*, int);
    using KReplaceDialog_HasHeightForWidth_Callback = bool (*)();
    using KReplaceDialog_PaintEngine_Callback = QPaintEngine* (*)();
    using KReplaceDialog_Event_Callback = bool (*)(KReplaceDialog*, QEvent*);
    using KReplaceDialog_MousePressEvent_Callback = void (*)(KReplaceDialog*, QMouseEvent*);
    using KReplaceDialog_MouseReleaseEvent_Callback = void (*)(KReplaceDialog*, QMouseEvent*);
    using KReplaceDialog_MouseDoubleClickEvent_Callback = void (*)(KReplaceDialog*, QMouseEvent*);
    using KReplaceDialog_MouseMoveEvent_Callback = void (*)(KReplaceDialog*, QMouseEvent*);
    using KReplaceDialog_WheelEvent_Callback = void (*)(KReplaceDialog*, QWheelEvent*);
    using KReplaceDialog_KeyReleaseEvent_Callback = void (*)(KReplaceDialog*, QKeyEvent*);
    using KReplaceDialog_FocusInEvent_Callback = void (*)(KReplaceDialog*, QFocusEvent*);
    using KReplaceDialog_FocusOutEvent_Callback = void (*)(KReplaceDialog*, QFocusEvent*);
    using KReplaceDialog_EnterEvent_Callback = void (*)(KReplaceDialog*, QEnterEvent*);
    using KReplaceDialog_LeaveEvent_Callback = void (*)(KReplaceDialog*, QEvent*);
    using KReplaceDialog_PaintEvent_Callback = void (*)(KReplaceDialog*, QPaintEvent*);
    using KReplaceDialog_MoveEvent_Callback = void (*)(KReplaceDialog*, QMoveEvent*);
    using KReplaceDialog_TabletEvent_Callback = void (*)(KReplaceDialog*, QTabletEvent*);
    using KReplaceDialog_ActionEvent_Callback = void (*)(KReplaceDialog*, QActionEvent*);
    using KReplaceDialog_DragEnterEvent_Callback = void (*)(KReplaceDialog*, QDragEnterEvent*);
    using KReplaceDialog_DragMoveEvent_Callback = void (*)(KReplaceDialog*, QDragMoveEvent*);
    using KReplaceDialog_DragLeaveEvent_Callback = void (*)(KReplaceDialog*, QDragLeaveEvent*);
    using KReplaceDialog_DropEvent_Callback = void (*)(KReplaceDialog*, QDropEvent*);
    using KReplaceDialog_HideEvent_Callback = void (*)(KReplaceDialog*, QHideEvent*);
    using KReplaceDialog_NativeEvent_Callback = bool (*)(KReplaceDialog*, libqt_string, void*, intptr_t*);
    using KReplaceDialog_ChangeEvent_Callback = void (*)(KReplaceDialog*, QEvent*);
    using KReplaceDialog_Metric_Callback = int (*)(const KReplaceDialog*, int);
    using KReplaceDialog_InitPainter_Callback = void (*)(const KReplaceDialog*, QPainter*);
    using KReplaceDialog_Redirected_Callback = QPaintDevice* (*)(const KReplaceDialog*, QPoint*);
    using KReplaceDialog_SharedPainter_Callback = QPainter* (*)();
    using KReplaceDialog_InputMethodEvent_Callback = void (*)(KReplaceDialog*, QInputMethodEvent*);
    using KReplaceDialog_InputMethodQuery_Callback = QVariant* (*)(const KReplaceDialog*, int);
    using KReplaceDialog_FocusNextPrevChild_Callback = bool (*)(KReplaceDialog*, bool);
    using KReplaceDialog_TimerEvent_Callback = void (*)(KReplaceDialog*, QTimerEvent*);
    using KReplaceDialog_ChildEvent_Callback = void (*)(KReplaceDialog*, QChildEvent*);
    using KReplaceDialog_CustomEvent_Callback = void (*)(KReplaceDialog*, QEvent*);
    using KReplaceDialog_ConnectNotify_Callback = void (*)(KReplaceDialog*, QMetaMethod*);
    using KReplaceDialog_DisconnectNotify_Callback = void (*)(KReplaceDialog*, QMetaMethod*);
    using KReplaceDialog_AdjustPosition_Callback = void (*)(KReplaceDialog*, QWidget*);
    using KReplaceDialog_UpdateMicroFocus_Callback = void (*)();
    using KReplaceDialog_Create_Callback = void (*)();
    using KReplaceDialog_Destroy_Callback = void (*)();
    using KReplaceDialog_FocusNextChild_Callback = bool (*)();
    using KReplaceDialog_FocusPreviousChild_Callback = bool (*)();
    using KReplaceDialog_Sender_Callback = QObject* (*)();
    using KReplaceDialog_SenderSignalIndex_Callback = int (*)();
    using KReplaceDialog_Receivers_Callback = int (*)(const KReplaceDialog*, const char*);
    using KReplaceDialog_IsSignalConnected_Callback = bool (*)(const KReplaceDialog*, QMetaMethod*);
    using KReplaceDialog_GetDecodedMetricF_Callback = double (*)(const KReplaceDialog*, int, int);

  protected:
    // Instance callback storage
    KReplaceDialog_Metacall_Callback kreplacedialog_metacall_callback = nullptr;
    KReplaceDialog_ShowEvent_Callback kreplacedialog_showevent_callback = nullptr;
    KReplaceDialog_SetVisible_Callback kreplacedialog_setvisible_callback = nullptr;
    KReplaceDialog_SizeHint_Callback kreplacedialog_sizehint_callback = nullptr;
    KReplaceDialog_MinimumSizeHint_Callback kreplacedialog_minimumsizehint_callback = nullptr;
    KReplaceDialog_Open_Callback kreplacedialog_open_callback = nullptr;
    KReplaceDialog_Exec_Callback kreplacedialog_exec_callback = nullptr;
    KReplaceDialog_Done_Callback kreplacedialog_done_callback = nullptr;
    KReplaceDialog_Accept_Callback kreplacedialog_accept_callback = nullptr;
    KReplaceDialog_Reject_Callback kreplacedialog_reject_callback = nullptr;
    KReplaceDialog_KeyPressEvent_Callback kreplacedialog_keypressevent_callback = nullptr;
    KReplaceDialog_CloseEvent_Callback kreplacedialog_closeevent_callback = nullptr;
    KReplaceDialog_ResizeEvent_Callback kreplacedialog_resizeevent_callback = nullptr;
    KReplaceDialog_ContextMenuEvent_Callback kreplacedialog_contextmenuevent_callback = nullptr;
    KReplaceDialog_EventFilter_Callback kreplacedialog_eventfilter_callback = nullptr;
    KReplaceDialog_DevType_Callback kreplacedialog_devtype_callback = nullptr;
    KReplaceDialog_HeightForWidth_Callback kreplacedialog_heightforwidth_callback = nullptr;
    KReplaceDialog_HasHeightForWidth_Callback kreplacedialog_hasheightforwidth_callback = nullptr;
    KReplaceDialog_PaintEngine_Callback kreplacedialog_paintengine_callback = nullptr;
    KReplaceDialog_Event_Callback kreplacedialog_event_callback = nullptr;
    KReplaceDialog_MousePressEvent_Callback kreplacedialog_mousepressevent_callback = nullptr;
    KReplaceDialog_MouseReleaseEvent_Callback kreplacedialog_mousereleaseevent_callback = nullptr;
    KReplaceDialog_MouseDoubleClickEvent_Callback kreplacedialog_mousedoubleclickevent_callback = nullptr;
    KReplaceDialog_MouseMoveEvent_Callback kreplacedialog_mousemoveevent_callback = nullptr;
    KReplaceDialog_WheelEvent_Callback kreplacedialog_wheelevent_callback = nullptr;
    KReplaceDialog_KeyReleaseEvent_Callback kreplacedialog_keyreleaseevent_callback = nullptr;
    KReplaceDialog_FocusInEvent_Callback kreplacedialog_focusinevent_callback = nullptr;
    KReplaceDialog_FocusOutEvent_Callback kreplacedialog_focusoutevent_callback = nullptr;
    KReplaceDialog_EnterEvent_Callback kreplacedialog_enterevent_callback = nullptr;
    KReplaceDialog_LeaveEvent_Callback kreplacedialog_leaveevent_callback = nullptr;
    KReplaceDialog_PaintEvent_Callback kreplacedialog_paintevent_callback = nullptr;
    KReplaceDialog_MoveEvent_Callback kreplacedialog_moveevent_callback = nullptr;
    KReplaceDialog_TabletEvent_Callback kreplacedialog_tabletevent_callback = nullptr;
    KReplaceDialog_ActionEvent_Callback kreplacedialog_actionevent_callback = nullptr;
    KReplaceDialog_DragEnterEvent_Callback kreplacedialog_dragenterevent_callback = nullptr;
    KReplaceDialog_DragMoveEvent_Callback kreplacedialog_dragmoveevent_callback = nullptr;
    KReplaceDialog_DragLeaveEvent_Callback kreplacedialog_dragleaveevent_callback = nullptr;
    KReplaceDialog_DropEvent_Callback kreplacedialog_dropevent_callback = nullptr;
    KReplaceDialog_HideEvent_Callback kreplacedialog_hideevent_callback = nullptr;
    KReplaceDialog_NativeEvent_Callback kreplacedialog_nativeevent_callback = nullptr;
    KReplaceDialog_ChangeEvent_Callback kreplacedialog_changeevent_callback = nullptr;
    KReplaceDialog_Metric_Callback kreplacedialog_metric_callback = nullptr;
    KReplaceDialog_InitPainter_Callback kreplacedialog_initpainter_callback = nullptr;
    KReplaceDialog_Redirected_Callback kreplacedialog_redirected_callback = nullptr;
    KReplaceDialog_SharedPainter_Callback kreplacedialog_sharedpainter_callback = nullptr;
    KReplaceDialog_InputMethodEvent_Callback kreplacedialog_inputmethodevent_callback = nullptr;
    KReplaceDialog_InputMethodQuery_Callback kreplacedialog_inputmethodquery_callback = nullptr;
    KReplaceDialog_FocusNextPrevChild_Callback kreplacedialog_focusnextprevchild_callback = nullptr;
    KReplaceDialog_TimerEvent_Callback kreplacedialog_timerevent_callback = nullptr;
    KReplaceDialog_ChildEvent_Callback kreplacedialog_childevent_callback = nullptr;
    KReplaceDialog_CustomEvent_Callback kreplacedialog_customevent_callback = nullptr;
    KReplaceDialog_ConnectNotify_Callback kreplacedialog_connectnotify_callback = nullptr;
    KReplaceDialog_DisconnectNotify_Callback kreplacedialog_disconnectnotify_callback = nullptr;
    KReplaceDialog_AdjustPosition_Callback kreplacedialog_adjustposition_callback = nullptr;
    KReplaceDialog_UpdateMicroFocus_Callback kreplacedialog_updatemicrofocus_callback = nullptr;
    KReplaceDialog_Create_Callback kreplacedialog_create_callback = nullptr;
    KReplaceDialog_Destroy_Callback kreplacedialog_destroy_callback = nullptr;
    KReplaceDialog_FocusNextChild_Callback kreplacedialog_focusnextchild_callback = nullptr;
    KReplaceDialog_FocusPreviousChild_Callback kreplacedialog_focuspreviouschild_callback = nullptr;
    KReplaceDialog_Sender_Callback kreplacedialog_sender_callback = nullptr;
    KReplaceDialog_SenderSignalIndex_Callback kreplacedialog_sendersignalindex_callback = nullptr;
    KReplaceDialog_Receivers_Callback kreplacedialog_receivers_callback = nullptr;
    KReplaceDialog_IsSignalConnected_Callback kreplacedialog_issignalconnected_callback = nullptr;
    KReplaceDialog_GetDecodedMetricF_Callback kreplacedialog_getdecodedmetricf_callback = nullptr;

    // Instance base flags
    mutable bool kreplacedialog_metacall_isbase = false;
    mutable bool kreplacedialog_showevent_isbase = false;
    mutable bool kreplacedialog_setvisible_isbase = false;
    mutable bool kreplacedialog_sizehint_isbase = false;
    mutable bool kreplacedialog_minimumsizehint_isbase = false;
    mutable bool kreplacedialog_open_isbase = false;
    mutable bool kreplacedialog_exec_isbase = false;
    mutable bool kreplacedialog_done_isbase = false;
    mutable bool kreplacedialog_accept_isbase = false;
    mutable bool kreplacedialog_reject_isbase = false;
    mutable bool kreplacedialog_keypressevent_isbase = false;
    mutable bool kreplacedialog_closeevent_isbase = false;
    mutable bool kreplacedialog_resizeevent_isbase = false;
    mutable bool kreplacedialog_contextmenuevent_isbase = false;
    mutable bool kreplacedialog_eventfilter_isbase = false;
    mutable bool kreplacedialog_devtype_isbase = false;
    mutable bool kreplacedialog_heightforwidth_isbase = false;
    mutable bool kreplacedialog_hasheightforwidth_isbase = false;
    mutable bool kreplacedialog_paintengine_isbase = false;
    mutable bool kreplacedialog_event_isbase = false;
    mutable bool kreplacedialog_mousepressevent_isbase = false;
    mutable bool kreplacedialog_mousereleaseevent_isbase = false;
    mutable bool kreplacedialog_mousedoubleclickevent_isbase = false;
    mutable bool kreplacedialog_mousemoveevent_isbase = false;
    mutable bool kreplacedialog_wheelevent_isbase = false;
    mutable bool kreplacedialog_keyreleaseevent_isbase = false;
    mutable bool kreplacedialog_focusinevent_isbase = false;
    mutable bool kreplacedialog_focusoutevent_isbase = false;
    mutable bool kreplacedialog_enterevent_isbase = false;
    mutable bool kreplacedialog_leaveevent_isbase = false;
    mutable bool kreplacedialog_paintevent_isbase = false;
    mutable bool kreplacedialog_moveevent_isbase = false;
    mutable bool kreplacedialog_tabletevent_isbase = false;
    mutable bool kreplacedialog_actionevent_isbase = false;
    mutable bool kreplacedialog_dragenterevent_isbase = false;
    mutable bool kreplacedialog_dragmoveevent_isbase = false;
    mutable bool kreplacedialog_dragleaveevent_isbase = false;
    mutable bool kreplacedialog_dropevent_isbase = false;
    mutable bool kreplacedialog_hideevent_isbase = false;
    mutable bool kreplacedialog_nativeevent_isbase = false;
    mutable bool kreplacedialog_changeevent_isbase = false;
    mutable bool kreplacedialog_metric_isbase = false;
    mutable bool kreplacedialog_initpainter_isbase = false;
    mutable bool kreplacedialog_redirected_isbase = false;
    mutable bool kreplacedialog_sharedpainter_isbase = false;
    mutable bool kreplacedialog_inputmethodevent_isbase = false;
    mutable bool kreplacedialog_inputmethodquery_isbase = false;
    mutable bool kreplacedialog_focusnextprevchild_isbase = false;
    mutable bool kreplacedialog_timerevent_isbase = false;
    mutable bool kreplacedialog_childevent_isbase = false;
    mutable bool kreplacedialog_customevent_isbase = false;
    mutable bool kreplacedialog_connectnotify_isbase = false;
    mutable bool kreplacedialog_disconnectnotify_isbase = false;
    mutable bool kreplacedialog_adjustposition_isbase = false;
    mutable bool kreplacedialog_updatemicrofocus_isbase = false;
    mutable bool kreplacedialog_create_isbase = false;
    mutable bool kreplacedialog_destroy_isbase = false;
    mutable bool kreplacedialog_focusnextchild_isbase = false;
    mutable bool kreplacedialog_focuspreviouschild_isbase = false;
    mutable bool kreplacedialog_sender_isbase = false;
    mutable bool kreplacedialog_sendersignalindex_isbase = false;
    mutable bool kreplacedialog_receivers_isbase = false;
    mutable bool kreplacedialog_issignalconnected_isbase = false;
    mutable bool kreplacedialog_getdecodedmetricf_isbase = false;

  public:
    VirtualKReplaceDialog(QWidget* parent) : KReplaceDialog(parent) {};
    VirtualKReplaceDialog() : KReplaceDialog() {};
    VirtualKReplaceDialog(QWidget* parent, long options) : KReplaceDialog(parent, options) {};
    VirtualKReplaceDialog(QWidget* parent, long options, const QList<QString>& findStrings) : KReplaceDialog(parent, options, findStrings) {};
    VirtualKReplaceDialog(QWidget* parent, long options, const QList<QString>& findStrings, const QList<QString>& replaceStrings) : KReplaceDialog(parent, options, findStrings, replaceStrings) {};
    VirtualKReplaceDialog(QWidget* parent, long options, const QList<QString>& findStrings, const QList<QString>& replaceStrings, bool hasSelection) : KReplaceDialog(parent, options, findStrings, replaceStrings, hasSelection) {};

    ~VirtualKReplaceDialog() {
        kreplacedialog_metacall_callback = nullptr;
        kreplacedialog_showevent_callback = nullptr;
        kreplacedialog_setvisible_callback = nullptr;
        kreplacedialog_sizehint_callback = nullptr;
        kreplacedialog_minimumsizehint_callback = nullptr;
        kreplacedialog_open_callback = nullptr;
        kreplacedialog_exec_callback = nullptr;
        kreplacedialog_done_callback = nullptr;
        kreplacedialog_accept_callback = nullptr;
        kreplacedialog_reject_callback = nullptr;
        kreplacedialog_keypressevent_callback = nullptr;
        kreplacedialog_closeevent_callback = nullptr;
        kreplacedialog_resizeevent_callback = nullptr;
        kreplacedialog_contextmenuevent_callback = nullptr;
        kreplacedialog_eventfilter_callback = nullptr;
        kreplacedialog_devtype_callback = nullptr;
        kreplacedialog_heightforwidth_callback = nullptr;
        kreplacedialog_hasheightforwidth_callback = nullptr;
        kreplacedialog_paintengine_callback = nullptr;
        kreplacedialog_event_callback = nullptr;
        kreplacedialog_mousepressevent_callback = nullptr;
        kreplacedialog_mousereleaseevent_callback = nullptr;
        kreplacedialog_mousedoubleclickevent_callback = nullptr;
        kreplacedialog_mousemoveevent_callback = nullptr;
        kreplacedialog_wheelevent_callback = nullptr;
        kreplacedialog_keyreleaseevent_callback = nullptr;
        kreplacedialog_focusinevent_callback = nullptr;
        kreplacedialog_focusoutevent_callback = nullptr;
        kreplacedialog_enterevent_callback = nullptr;
        kreplacedialog_leaveevent_callback = nullptr;
        kreplacedialog_paintevent_callback = nullptr;
        kreplacedialog_moveevent_callback = nullptr;
        kreplacedialog_tabletevent_callback = nullptr;
        kreplacedialog_actionevent_callback = nullptr;
        kreplacedialog_dragenterevent_callback = nullptr;
        kreplacedialog_dragmoveevent_callback = nullptr;
        kreplacedialog_dragleaveevent_callback = nullptr;
        kreplacedialog_dropevent_callback = nullptr;
        kreplacedialog_hideevent_callback = nullptr;
        kreplacedialog_nativeevent_callback = nullptr;
        kreplacedialog_changeevent_callback = nullptr;
        kreplacedialog_metric_callback = nullptr;
        kreplacedialog_initpainter_callback = nullptr;
        kreplacedialog_redirected_callback = nullptr;
        kreplacedialog_sharedpainter_callback = nullptr;
        kreplacedialog_inputmethodevent_callback = nullptr;
        kreplacedialog_inputmethodquery_callback = nullptr;
        kreplacedialog_focusnextprevchild_callback = nullptr;
        kreplacedialog_timerevent_callback = nullptr;
        kreplacedialog_childevent_callback = nullptr;
        kreplacedialog_customevent_callback = nullptr;
        kreplacedialog_connectnotify_callback = nullptr;
        kreplacedialog_disconnectnotify_callback = nullptr;
        kreplacedialog_adjustposition_callback = nullptr;
        kreplacedialog_updatemicrofocus_callback = nullptr;
        kreplacedialog_create_callback = nullptr;
        kreplacedialog_destroy_callback = nullptr;
        kreplacedialog_focusnextchild_callback = nullptr;
        kreplacedialog_focuspreviouschild_callback = nullptr;
        kreplacedialog_sender_callback = nullptr;
        kreplacedialog_sendersignalindex_callback = nullptr;
        kreplacedialog_receivers_callback = nullptr;
        kreplacedialog_issignalconnected_callback = nullptr;
        kreplacedialog_getdecodedmetricf_callback = nullptr;
    }

    // Callback setters
    inline void setKReplaceDialog_Metacall_Callback(KReplaceDialog_Metacall_Callback cb) { kreplacedialog_metacall_callback = cb; }
    inline void setKReplaceDialog_ShowEvent_Callback(KReplaceDialog_ShowEvent_Callback cb) { kreplacedialog_showevent_callback = cb; }
    inline void setKReplaceDialog_SetVisible_Callback(KReplaceDialog_SetVisible_Callback cb) { kreplacedialog_setvisible_callback = cb; }
    inline void setKReplaceDialog_SizeHint_Callback(KReplaceDialog_SizeHint_Callback cb) { kreplacedialog_sizehint_callback = cb; }
    inline void setKReplaceDialog_MinimumSizeHint_Callback(KReplaceDialog_MinimumSizeHint_Callback cb) { kreplacedialog_minimumsizehint_callback = cb; }
    inline void setKReplaceDialog_Open_Callback(KReplaceDialog_Open_Callback cb) { kreplacedialog_open_callback = cb; }
    inline void setKReplaceDialog_Exec_Callback(KReplaceDialog_Exec_Callback cb) { kreplacedialog_exec_callback = cb; }
    inline void setKReplaceDialog_Done_Callback(KReplaceDialog_Done_Callback cb) { kreplacedialog_done_callback = cb; }
    inline void setKReplaceDialog_Accept_Callback(KReplaceDialog_Accept_Callback cb) { kreplacedialog_accept_callback = cb; }
    inline void setKReplaceDialog_Reject_Callback(KReplaceDialog_Reject_Callback cb) { kreplacedialog_reject_callback = cb; }
    inline void setKReplaceDialog_KeyPressEvent_Callback(KReplaceDialog_KeyPressEvent_Callback cb) { kreplacedialog_keypressevent_callback = cb; }
    inline void setKReplaceDialog_CloseEvent_Callback(KReplaceDialog_CloseEvent_Callback cb) { kreplacedialog_closeevent_callback = cb; }
    inline void setKReplaceDialog_ResizeEvent_Callback(KReplaceDialog_ResizeEvent_Callback cb) { kreplacedialog_resizeevent_callback = cb; }
    inline void setKReplaceDialog_ContextMenuEvent_Callback(KReplaceDialog_ContextMenuEvent_Callback cb) { kreplacedialog_contextmenuevent_callback = cb; }
    inline void setKReplaceDialog_EventFilter_Callback(KReplaceDialog_EventFilter_Callback cb) { kreplacedialog_eventfilter_callback = cb; }
    inline void setKReplaceDialog_DevType_Callback(KReplaceDialog_DevType_Callback cb) { kreplacedialog_devtype_callback = cb; }
    inline void setKReplaceDialog_HeightForWidth_Callback(KReplaceDialog_HeightForWidth_Callback cb) { kreplacedialog_heightforwidth_callback = cb; }
    inline void setKReplaceDialog_HasHeightForWidth_Callback(KReplaceDialog_HasHeightForWidth_Callback cb) { kreplacedialog_hasheightforwidth_callback = cb; }
    inline void setKReplaceDialog_PaintEngine_Callback(KReplaceDialog_PaintEngine_Callback cb) { kreplacedialog_paintengine_callback = cb; }
    inline void setKReplaceDialog_Event_Callback(KReplaceDialog_Event_Callback cb) { kreplacedialog_event_callback = cb; }
    inline void setKReplaceDialog_MousePressEvent_Callback(KReplaceDialog_MousePressEvent_Callback cb) { kreplacedialog_mousepressevent_callback = cb; }
    inline void setKReplaceDialog_MouseReleaseEvent_Callback(KReplaceDialog_MouseReleaseEvent_Callback cb) { kreplacedialog_mousereleaseevent_callback = cb; }
    inline void setKReplaceDialog_MouseDoubleClickEvent_Callback(KReplaceDialog_MouseDoubleClickEvent_Callback cb) { kreplacedialog_mousedoubleclickevent_callback = cb; }
    inline void setKReplaceDialog_MouseMoveEvent_Callback(KReplaceDialog_MouseMoveEvent_Callback cb) { kreplacedialog_mousemoveevent_callback = cb; }
    inline void setKReplaceDialog_WheelEvent_Callback(KReplaceDialog_WheelEvent_Callback cb) { kreplacedialog_wheelevent_callback = cb; }
    inline void setKReplaceDialog_KeyReleaseEvent_Callback(KReplaceDialog_KeyReleaseEvent_Callback cb) { kreplacedialog_keyreleaseevent_callback = cb; }
    inline void setKReplaceDialog_FocusInEvent_Callback(KReplaceDialog_FocusInEvent_Callback cb) { kreplacedialog_focusinevent_callback = cb; }
    inline void setKReplaceDialog_FocusOutEvent_Callback(KReplaceDialog_FocusOutEvent_Callback cb) { kreplacedialog_focusoutevent_callback = cb; }
    inline void setKReplaceDialog_EnterEvent_Callback(KReplaceDialog_EnterEvent_Callback cb) { kreplacedialog_enterevent_callback = cb; }
    inline void setKReplaceDialog_LeaveEvent_Callback(KReplaceDialog_LeaveEvent_Callback cb) { kreplacedialog_leaveevent_callback = cb; }
    inline void setKReplaceDialog_PaintEvent_Callback(KReplaceDialog_PaintEvent_Callback cb) { kreplacedialog_paintevent_callback = cb; }
    inline void setKReplaceDialog_MoveEvent_Callback(KReplaceDialog_MoveEvent_Callback cb) { kreplacedialog_moveevent_callback = cb; }
    inline void setKReplaceDialog_TabletEvent_Callback(KReplaceDialog_TabletEvent_Callback cb) { kreplacedialog_tabletevent_callback = cb; }
    inline void setKReplaceDialog_ActionEvent_Callback(KReplaceDialog_ActionEvent_Callback cb) { kreplacedialog_actionevent_callback = cb; }
    inline void setKReplaceDialog_DragEnterEvent_Callback(KReplaceDialog_DragEnterEvent_Callback cb) { kreplacedialog_dragenterevent_callback = cb; }
    inline void setKReplaceDialog_DragMoveEvent_Callback(KReplaceDialog_DragMoveEvent_Callback cb) { kreplacedialog_dragmoveevent_callback = cb; }
    inline void setKReplaceDialog_DragLeaveEvent_Callback(KReplaceDialog_DragLeaveEvent_Callback cb) { kreplacedialog_dragleaveevent_callback = cb; }
    inline void setKReplaceDialog_DropEvent_Callback(KReplaceDialog_DropEvent_Callback cb) { kreplacedialog_dropevent_callback = cb; }
    inline void setKReplaceDialog_HideEvent_Callback(KReplaceDialog_HideEvent_Callback cb) { kreplacedialog_hideevent_callback = cb; }
    inline void setKReplaceDialog_NativeEvent_Callback(KReplaceDialog_NativeEvent_Callback cb) { kreplacedialog_nativeevent_callback = cb; }
    inline void setKReplaceDialog_ChangeEvent_Callback(KReplaceDialog_ChangeEvent_Callback cb) { kreplacedialog_changeevent_callback = cb; }
    inline void setKReplaceDialog_Metric_Callback(KReplaceDialog_Metric_Callback cb) { kreplacedialog_metric_callback = cb; }
    inline void setKReplaceDialog_InitPainter_Callback(KReplaceDialog_InitPainter_Callback cb) { kreplacedialog_initpainter_callback = cb; }
    inline void setKReplaceDialog_Redirected_Callback(KReplaceDialog_Redirected_Callback cb) { kreplacedialog_redirected_callback = cb; }
    inline void setKReplaceDialog_SharedPainter_Callback(KReplaceDialog_SharedPainter_Callback cb) { kreplacedialog_sharedpainter_callback = cb; }
    inline void setKReplaceDialog_InputMethodEvent_Callback(KReplaceDialog_InputMethodEvent_Callback cb) { kreplacedialog_inputmethodevent_callback = cb; }
    inline void setKReplaceDialog_InputMethodQuery_Callback(KReplaceDialog_InputMethodQuery_Callback cb) { kreplacedialog_inputmethodquery_callback = cb; }
    inline void setKReplaceDialog_FocusNextPrevChild_Callback(KReplaceDialog_FocusNextPrevChild_Callback cb) { kreplacedialog_focusnextprevchild_callback = cb; }
    inline void setKReplaceDialog_TimerEvent_Callback(KReplaceDialog_TimerEvent_Callback cb) { kreplacedialog_timerevent_callback = cb; }
    inline void setKReplaceDialog_ChildEvent_Callback(KReplaceDialog_ChildEvent_Callback cb) { kreplacedialog_childevent_callback = cb; }
    inline void setKReplaceDialog_CustomEvent_Callback(KReplaceDialog_CustomEvent_Callback cb) { kreplacedialog_customevent_callback = cb; }
    inline void setKReplaceDialog_ConnectNotify_Callback(KReplaceDialog_ConnectNotify_Callback cb) { kreplacedialog_connectnotify_callback = cb; }
    inline void setKReplaceDialog_DisconnectNotify_Callback(KReplaceDialog_DisconnectNotify_Callback cb) { kreplacedialog_disconnectnotify_callback = cb; }
    inline void setKReplaceDialog_AdjustPosition_Callback(KReplaceDialog_AdjustPosition_Callback cb) { kreplacedialog_adjustposition_callback = cb; }
    inline void setKReplaceDialog_UpdateMicroFocus_Callback(KReplaceDialog_UpdateMicroFocus_Callback cb) { kreplacedialog_updatemicrofocus_callback = cb; }
    inline void setKReplaceDialog_Create_Callback(KReplaceDialog_Create_Callback cb) { kreplacedialog_create_callback = cb; }
    inline void setKReplaceDialog_Destroy_Callback(KReplaceDialog_Destroy_Callback cb) { kreplacedialog_destroy_callback = cb; }
    inline void setKReplaceDialog_FocusNextChild_Callback(KReplaceDialog_FocusNextChild_Callback cb) { kreplacedialog_focusnextchild_callback = cb; }
    inline void setKReplaceDialog_FocusPreviousChild_Callback(KReplaceDialog_FocusPreviousChild_Callback cb) { kreplacedialog_focuspreviouschild_callback = cb; }
    inline void setKReplaceDialog_Sender_Callback(KReplaceDialog_Sender_Callback cb) { kreplacedialog_sender_callback = cb; }
    inline void setKReplaceDialog_SenderSignalIndex_Callback(KReplaceDialog_SenderSignalIndex_Callback cb) { kreplacedialog_sendersignalindex_callback = cb; }
    inline void setKReplaceDialog_Receivers_Callback(KReplaceDialog_Receivers_Callback cb) { kreplacedialog_receivers_callback = cb; }
    inline void setKReplaceDialog_IsSignalConnected_Callback(KReplaceDialog_IsSignalConnected_Callback cb) { kreplacedialog_issignalconnected_callback = cb; }
    inline void setKReplaceDialog_GetDecodedMetricF_Callback(KReplaceDialog_GetDecodedMetricF_Callback cb) { kreplacedialog_getdecodedmetricf_callback = cb; }

    // Base flag setters
    inline void setKReplaceDialog_Metacall_IsBase(bool value) const { kreplacedialog_metacall_isbase = value; }
    inline void setKReplaceDialog_ShowEvent_IsBase(bool value) const { kreplacedialog_showevent_isbase = value; }
    inline void setKReplaceDialog_SetVisible_IsBase(bool value) const { kreplacedialog_setvisible_isbase = value; }
    inline void setKReplaceDialog_SizeHint_IsBase(bool value) const { kreplacedialog_sizehint_isbase = value; }
    inline void setKReplaceDialog_MinimumSizeHint_IsBase(bool value) const { kreplacedialog_minimumsizehint_isbase = value; }
    inline void setKReplaceDialog_Open_IsBase(bool value) const { kreplacedialog_open_isbase = value; }
    inline void setKReplaceDialog_Exec_IsBase(bool value) const { kreplacedialog_exec_isbase = value; }
    inline void setKReplaceDialog_Done_IsBase(bool value) const { kreplacedialog_done_isbase = value; }
    inline void setKReplaceDialog_Accept_IsBase(bool value) const { kreplacedialog_accept_isbase = value; }
    inline void setKReplaceDialog_Reject_IsBase(bool value) const { kreplacedialog_reject_isbase = value; }
    inline void setKReplaceDialog_KeyPressEvent_IsBase(bool value) const { kreplacedialog_keypressevent_isbase = value; }
    inline void setKReplaceDialog_CloseEvent_IsBase(bool value) const { kreplacedialog_closeevent_isbase = value; }
    inline void setKReplaceDialog_ResizeEvent_IsBase(bool value) const { kreplacedialog_resizeevent_isbase = value; }
    inline void setKReplaceDialog_ContextMenuEvent_IsBase(bool value) const { kreplacedialog_contextmenuevent_isbase = value; }
    inline void setKReplaceDialog_EventFilter_IsBase(bool value) const { kreplacedialog_eventfilter_isbase = value; }
    inline void setKReplaceDialog_DevType_IsBase(bool value) const { kreplacedialog_devtype_isbase = value; }
    inline void setKReplaceDialog_HeightForWidth_IsBase(bool value) const { kreplacedialog_heightforwidth_isbase = value; }
    inline void setKReplaceDialog_HasHeightForWidth_IsBase(bool value) const { kreplacedialog_hasheightforwidth_isbase = value; }
    inline void setKReplaceDialog_PaintEngine_IsBase(bool value) const { kreplacedialog_paintengine_isbase = value; }
    inline void setKReplaceDialog_Event_IsBase(bool value) const { kreplacedialog_event_isbase = value; }
    inline void setKReplaceDialog_MousePressEvent_IsBase(bool value) const { kreplacedialog_mousepressevent_isbase = value; }
    inline void setKReplaceDialog_MouseReleaseEvent_IsBase(bool value) const { kreplacedialog_mousereleaseevent_isbase = value; }
    inline void setKReplaceDialog_MouseDoubleClickEvent_IsBase(bool value) const { kreplacedialog_mousedoubleclickevent_isbase = value; }
    inline void setKReplaceDialog_MouseMoveEvent_IsBase(bool value) const { kreplacedialog_mousemoveevent_isbase = value; }
    inline void setKReplaceDialog_WheelEvent_IsBase(bool value) const { kreplacedialog_wheelevent_isbase = value; }
    inline void setKReplaceDialog_KeyReleaseEvent_IsBase(bool value) const { kreplacedialog_keyreleaseevent_isbase = value; }
    inline void setKReplaceDialog_FocusInEvent_IsBase(bool value) const { kreplacedialog_focusinevent_isbase = value; }
    inline void setKReplaceDialog_FocusOutEvent_IsBase(bool value) const { kreplacedialog_focusoutevent_isbase = value; }
    inline void setKReplaceDialog_EnterEvent_IsBase(bool value) const { kreplacedialog_enterevent_isbase = value; }
    inline void setKReplaceDialog_LeaveEvent_IsBase(bool value) const { kreplacedialog_leaveevent_isbase = value; }
    inline void setKReplaceDialog_PaintEvent_IsBase(bool value) const { kreplacedialog_paintevent_isbase = value; }
    inline void setKReplaceDialog_MoveEvent_IsBase(bool value) const { kreplacedialog_moveevent_isbase = value; }
    inline void setKReplaceDialog_TabletEvent_IsBase(bool value) const { kreplacedialog_tabletevent_isbase = value; }
    inline void setKReplaceDialog_ActionEvent_IsBase(bool value) const { kreplacedialog_actionevent_isbase = value; }
    inline void setKReplaceDialog_DragEnterEvent_IsBase(bool value) const { kreplacedialog_dragenterevent_isbase = value; }
    inline void setKReplaceDialog_DragMoveEvent_IsBase(bool value) const { kreplacedialog_dragmoveevent_isbase = value; }
    inline void setKReplaceDialog_DragLeaveEvent_IsBase(bool value) const { kreplacedialog_dragleaveevent_isbase = value; }
    inline void setKReplaceDialog_DropEvent_IsBase(bool value) const { kreplacedialog_dropevent_isbase = value; }
    inline void setKReplaceDialog_HideEvent_IsBase(bool value) const { kreplacedialog_hideevent_isbase = value; }
    inline void setKReplaceDialog_NativeEvent_IsBase(bool value) const { kreplacedialog_nativeevent_isbase = value; }
    inline void setKReplaceDialog_ChangeEvent_IsBase(bool value) const { kreplacedialog_changeevent_isbase = value; }
    inline void setKReplaceDialog_Metric_IsBase(bool value) const { kreplacedialog_metric_isbase = value; }
    inline void setKReplaceDialog_InitPainter_IsBase(bool value) const { kreplacedialog_initpainter_isbase = value; }
    inline void setKReplaceDialog_Redirected_IsBase(bool value) const { kreplacedialog_redirected_isbase = value; }
    inline void setKReplaceDialog_SharedPainter_IsBase(bool value) const { kreplacedialog_sharedpainter_isbase = value; }
    inline void setKReplaceDialog_InputMethodEvent_IsBase(bool value) const { kreplacedialog_inputmethodevent_isbase = value; }
    inline void setKReplaceDialog_InputMethodQuery_IsBase(bool value) const { kreplacedialog_inputmethodquery_isbase = value; }
    inline void setKReplaceDialog_FocusNextPrevChild_IsBase(bool value) const { kreplacedialog_focusnextprevchild_isbase = value; }
    inline void setKReplaceDialog_TimerEvent_IsBase(bool value) const { kreplacedialog_timerevent_isbase = value; }
    inline void setKReplaceDialog_ChildEvent_IsBase(bool value) const { kreplacedialog_childevent_isbase = value; }
    inline void setKReplaceDialog_CustomEvent_IsBase(bool value) const { kreplacedialog_customevent_isbase = value; }
    inline void setKReplaceDialog_ConnectNotify_IsBase(bool value) const { kreplacedialog_connectnotify_isbase = value; }
    inline void setKReplaceDialog_DisconnectNotify_IsBase(bool value) const { kreplacedialog_disconnectnotify_isbase = value; }
    inline void setKReplaceDialog_AdjustPosition_IsBase(bool value) const { kreplacedialog_adjustposition_isbase = value; }
    inline void setKReplaceDialog_UpdateMicroFocus_IsBase(bool value) const { kreplacedialog_updatemicrofocus_isbase = value; }
    inline void setKReplaceDialog_Create_IsBase(bool value) const { kreplacedialog_create_isbase = value; }
    inline void setKReplaceDialog_Destroy_IsBase(bool value) const { kreplacedialog_destroy_isbase = value; }
    inline void setKReplaceDialog_FocusNextChild_IsBase(bool value) const { kreplacedialog_focusnextchild_isbase = value; }
    inline void setKReplaceDialog_FocusPreviousChild_IsBase(bool value) const { kreplacedialog_focuspreviouschild_isbase = value; }
    inline void setKReplaceDialog_Sender_IsBase(bool value) const { kreplacedialog_sender_isbase = value; }
    inline void setKReplaceDialog_SenderSignalIndex_IsBase(bool value) const { kreplacedialog_sendersignalindex_isbase = value; }
    inline void setKReplaceDialog_Receivers_IsBase(bool value) const { kreplacedialog_receivers_isbase = value; }
    inline void setKReplaceDialog_IsSignalConnected_IsBase(bool value) const { kreplacedialog_issignalconnected_isbase = value; }
    inline void setKReplaceDialog_GetDecodedMetricF_IsBase(bool value) const { kreplacedialog_getdecodedmetricf_isbase = value; }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (kreplacedialog_metacall_isbase) {
            kreplacedialog_metacall_isbase = false;
            return KReplaceDialog::qt_metacall(param1, param2, param3);
        } else if (kreplacedialog_metacall_callback != nullptr) {
            int cbval1 = static_cast<int>(param1);
            int cbval2 = param2;
            void** cbval3 = param3;

            int callback_ret = kreplacedialog_metacall_callback(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        } else {
            return KReplaceDialog::qt_metacall(param1, param2, param3);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void showEvent(QShowEvent* param1) override {
        if (kreplacedialog_showevent_isbase) {
            kreplacedialog_showevent_isbase = false;
            KReplaceDialog::showEvent(param1);
        } else if (kreplacedialog_showevent_callback != nullptr) {
            QShowEvent* cbval1 = param1;

            kreplacedialog_showevent_callback(this, cbval1);
        } else {
            KReplaceDialog::showEvent(param1);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void setVisible(bool visible) override {
        if (kreplacedialog_setvisible_isbase) {
            kreplacedialog_setvisible_isbase = false;
            KReplaceDialog::setVisible(visible);
        } else if (kreplacedialog_setvisible_callback != nullptr) {
            bool cbval1 = visible;

            kreplacedialog_setvisible_callback(this, cbval1);
        } else {
            KReplaceDialog::setVisible(visible);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QSize sizeHint() const override {
        if (kreplacedialog_sizehint_isbase) {
            kreplacedialog_sizehint_isbase = false;
            return KReplaceDialog::sizeHint();
        } else if (kreplacedialog_sizehint_callback != nullptr) {
            QSize* callback_ret = kreplacedialog_sizehint_callback();
            return *callback_ret;
        } else {
            return KReplaceDialog::sizeHint();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QSize minimumSizeHint() const override {
        if (kreplacedialog_minimumsizehint_isbase) {
            kreplacedialog_minimumsizehint_isbase = false;
            return KReplaceDialog::minimumSizeHint();
        } else if (kreplacedialog_minimumsizehint_callback != nullptr) {
            QSize* callback_ret = kreplacedialog_minimumsizehint_callback();
            return *callback_ret;
        } else {
            return KReplaceDialog::minimumSizeHint();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void open() override {
        if (kreplacedialog_open_isbase) {
            kreplacedialog_open_isbase = false;
            KReplaceDialog::open();
        } else if (kreplacedialog_open_callback != nullptr) {
            kreplacedialog_open_callback();
        } else {
            KReplaceDialog::open();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual int exec() override {
        if (kreplacedialog_exec_isbase) {
            kreplacedialog_exec_isbase = false;
            return KReplaceDialog::exec();
        } else if (kreplacedialog_exec_callback != nullptr) {
            int callback_ret = kreplacedialog_exec_callback();
            return static_cast<int>(callback_ret);
        } else {
            return KReplaceDialog::exec();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void done(int param1) override {
        if (kreplacedialog_done_isbase) {
            kreplacedialog_done_isbase = false;
            KReplaceDialog::done(param1);
        } else if (kreplacedialog_done_callback != nullptr) {
            int cbval1 = param1;

            kreplacedialog_done_callback(this, cbval1);
        } else {
            KReplaceDialog::done(param1);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void accept() override {
        if (kreplacedialog_accept_isbase) {
            kreplacedialog_accept_isbase = false;
            KReplaceDialog::accept();
        } else if (kreplacedialog_accept_callback != nullptr) {
            kreplacedialog_accept_callback();
        } else {
            KReplaceDialog::accept();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void reject() override {
        if (kreplacedialog_reject_isbase) {
            kreplacedialog_reject_isbase = false;
            KReplaceDialog::reject();
        } else if (kreplacedialog_reject_callback != nullptr) {
            kreplacedialog_reject_callback();
        } else {
            KReplaceDialog::reject();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void keyPressEvent(QKeyEvent* param1) override {
        if (kreplacedialog_keypressevent_isbase) {
            kreplacedialog_keypressevent_isbase = false;
            KReplaceDialog::keyPressEvent(param1);
        } else if (kreplacedialog_keypressevent_callback != nullptr) {
            QKeyEvent* cbval1 = param1;

            kreplacedialog_keypressevent_callback(this, cbval1);
        } else {
            KReplaceDialog::keyPressEvent(param1);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void closeEvent(QCloseEvent* param1) override {
        if (kreplacedialog_closeevent_isbase) {
            kreplacedialog_closeevent_isbase = false;
            KReplaceDialog::closeEvent(param1);
        } else if (kreplacedialog_closeevent_callback != nullptr) {
            QCloseEvent* cbval1 = param1;

            kreplacedialog_closeevent_callback(this, cbval1);
        } else {
            KReplaceDialog::closeEvent(param1);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void resizeEvent(QResizeEvent* param1) override {
        if (kreplacedialog_resizeevent_isbase) {
            kreplacedialog_resizeevent_isbase = false;
            KReplaceDialog::resizeEvent(param1);
        } else if (kreplacedialog_resizeevent_callback != nullptr) {
            QResizeEvent* cbval1 = param1;

            kreplacedialog_resizeevent_callback(this, cbval1);
        } else {
            KReplaceDialog::resizeEvent(param1);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void contextMenuEvent(QContextMenuEvent* param1) override {
        if (kreplacedialog_contextmenuevent_isbase) {
            kreplacedialog_contextmenuevent_isbase = false;
            KReplaceDialog::contextMenuEvent(param1);
        } else if (kreplacedialog_contextmenuevent_callback != nullptr) {
            QContextMenuEvent* cbval1 = param1;

            kreplacedialog_contextmenuevent_callback(this, cbval1);
        } else {
            KReplaceDialog::contextMenuEvent(param1);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* param1, QEvent* param2) override {
        if (kreplacedialog_eventfilter_isbase) {
            kreplacedialog_eventfilter_isbase = false;
            return KReplaceDialog::eventFilter(param1, param2);
        } else if (kreplacedialog_eventfilter_callback != nullptr) {
            QObject* cbval1 = param1;
            QEvent* cbval2 = param2;

            bool callback_ret = kreplacedialog_eventfilter_callback(this, cbval1, cbval2);
            return callback_ret;
        } else {
            return KReplaceDialog::eventFilter(param1, param2);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual int devType() const override {
        if (kreplacedialog_devtype_isbase) {
            kreplacedialog_devtype_isbase = false;
            return KReplaceDialog::devType();
        } else if (kreplacedialog_devtype_callback != nullptr) {
            int callback_ret = kreplacedialog_devtype_callback();
            return static_cast<int>(callback_ret);
        } else {
            return KReplaceDialog::devType();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual int heightForWidth(int param1) const override {
        if (kreplacedialog_heightforwidth_isbase) {
            kreplacedialog_heightforwidth_isbase = false;
            return KReplaceDialog::heightForWidth(param1);
        } else if (kreplacedialog_heightforwidth_callback != nullptr) {
            int cbval1 = param1;

            int callback_ret = kreplacedialog_heightforwidth_callback(this, cbval1);
            return static_cast<int>(callback_ret);
        } else {
            return KReplaceDialog::heightForWidth(param1);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool hasHeightForWidth() const override {
        if (kreplacedialog_hasheightforwidth_isbase) {
            kreplacedialog_hasheightforwidth_isbase = false;
            return KReplaceDialog::hasHeightForWidth();
        } else if (kreplacedialog_hasheightforwidth_callback != nullptr) {
            bool callback_ret = kreplacedialog_hasheightforwidth_callback();
            return callback_ret;
        } else {
            return KReplaceDialog::hasHeightForWidth();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QPaintEngine* paintEngine() const override {
        if (kreplacedialog_paintengine_isbase) {
            kreplacedialog_paintengine_isbase = false;
            return KReplaceDialog::paintEngine();
        } else if (kreplacedialog_paintengine_callback != nullptr) {
            QPaintEngine* callback_ret = kreplacedialog_paintengine_callback();
            return callback_ret;
        } else {
            return KReplaceDialog::paintEngine();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* event) override {
        if (kreplacedialog_event_isbase) {
            kreplacedialog_event_isbase = false;
            return KReplaceDialog::event(event);
        } else if (kreplacedialog_event_callback != nullptr) {
            QEvent* cbval1 = event;

            bool callback_ret = kreplacedialog_event_callback(this, cbval1);
            return callback_ret;
        } else {
            return KReplaceDialog::event(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void mousePressEvent(QMouseEvent* event) override {
        if (kreplacedialog_mousepressevent_isbase) {
            kreplacedialog_mousepressevent_isbase = false;
            KReplaceDialog::mousePressEvent(event);
        } else if (kreplacedialog_mousepressevent_callback != nullptr) {
            QMouseEvent* cbval1 = event;

            kreplacedialog_mousepressevent_callback(this, cbval1);
        } else {
            KReplaceDialog::mousePressEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseReleaseEvent(QMouseEvent* event) override {
        if (kreplacedialog_mousereleaseevent_isbase) {
            kreplacedialog_mousereleaseevent_isbase = false;
            KReplaceDialog::mouseReleaseEvent(event);
        } else if (kreplacedialog_mousereleaseevent_callback != nullptr) {
            QMouseEvent* cbval1 = event;

            kreplacedialog_mousereleaseevent_callback(this, cbval1);
        } else {
            KReplaceDialog::mouseReleaseEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseDoubleClickEvent(QMouseEvent* event) override {
        if (kreplacedialog_mousedoubleclickevent_isbase) {
            kreplacedialog_mousedoubleclickevent_isbase = false;
            KReplaceDialog::mouseDoubleClickEvent(event);
        } else if (kreplacedialog_mousedoubleclickevent_callback != nullptr) {
            QMouseEvent* cbval1 = event;

            kreplacedialog_mousedoubleclickevent_callback(this, cbval1);
        } else {
            KReplaceDialog::mouseDoubleClickEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseMoveEvent(QMouseEvent* event) override {
        if (kreplacedialog_mousemoveevent_isbase) {
            kreplacedialog_mousemoveevent_isbase = false;
            KReplaceDialog::mouseMoveEvent(event);
        } else if (kreplacedialog_mousemoveevent_callback != nullptr) {
            QMouseEvent* cbval1 = event;

            kreplacedialog_mousemoveevent_callback(this, cbval1);
        } else {
            KReplaceDialog::mouseMoveEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void wheelEvent(QWheelEvent* event) override {
        if (kreplacedialog_wheelevent_isbase) {
            kreplacedialog_wheelevent_isbase = false;
            KReplaceDialog::wheelEvent(event);
        } else if (kreplacedialog_wheelevent_callback != nullptr) {
            QWheelEvent* cbval1 = event;

            kreplacedialog_wheelevent_callback(this, cbval1);
        } else {
            KReplaceDialog::wheelEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void keyReleaseEvent(QKeyEvent* event) override {
        if (kreplacedialog_keyreleaseevent_isbase) {
            kreplacedialog_keyreleaseevent_isbase = false;
            KReplaceDialog::keyReleaseEvent(event);
        } else if (kreplacedialog_keyreleaseevent_callback != nullptr) {
            QKeyEvent* cbval1 = event;

            kreplacedialog_keyreleaseevent_callback(this, cbval1);
        } else {
            KReplaceDialog::keyReleaseEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void focusInEvent(QFocusEvent* event) override {
        if (kreplacedialog_focusinevent_isbase) {
            kreplacedialog_focusinevent_isbase = false;
            KReplaceDialog::focusInEvent(event);
        } else if (kreplacedialog_focusinevent_callback != nullptr) {
            QFocusEvent* cbval1 = event;

            kreplacedialog_focusinevent_callback(this, cbval1);
        } else {
            KReplaceDialog::focusInEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void focusOutEvent(QFocusEvent* event) override {
        if (kreplacedialog_focusoutevent_isbase) {
            kreplacedialog_focusoutevent_isbase = false;
            KReplaceDialog::focusOutEvent(event);
        } else if (kreplacedialog_focusoutevent_callback != nullptr) {
            QFocusEvent* cbval1 = event;

            kreplacedialog_focusoutevent_callback(this, cbval1);
        } else {
            KReplaceDialog::focusOutEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void enterEvent(QEnterEvent* event) override {
        if (kreplacedialog_enterevent_isbase) {
            kreplacedialog_enterevent_isbase = false;
            KReplaceDialog::enterEvent(event);
        } else if (kreplacedialog_enterevent_callback != nullptr) {
            QEnterEvent* cbval1 = event;

            kreplacedialog_enterevent_callback(this, cbval1);
        } else {
            KReplaceDialog::enterEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void leaveEvent(QEvent* event) override {
        if (kreplacedialog_leaveevent_isbase) {
            kreplacedialog_leaveevent_isbase = false;
            KReplaceDialog::leaveEvent(event);
        } else if (kreplacedialog_leaveevent_callback != nullptr) {
            QEvent* cbval1 = event;

            kreplacedialog_leaveevent_callback(this, cbval1);
        } else {
            KReplaceDialog::leaveEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void paintEvent(QPaintEvent* event) override {
        if (kreplacedialog_paintevent_isbase) {
            kreplacedialog_paintevent_isbase = false;
            KReplaceDialog::paintEvent(event);
        } else if (kreplacedialog_paintevent_callback != nullptr) {
            QPaintEvent* cbval1 = event;

            kreplacedialog_paintevent_callback(this, cbval1);
        } else {
            KReplaceDialog::paintEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void moveEvent(QMoveEvent* event) override {
        if (kreplacedialog_moveevent_isbase) {
            kreplacedialog_moveevent_isbase = false;
            KReplaceDialog::moveEvent(event);
        } else if (kreplacedialog_moveevent_callback != nullptr) {
            QMoveEvent* cbval1 = event;

            kreplacedialog_moveevent_callback(this, cbval1);
        } else {
            KReplaceDialog::moveEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void tabletEvent(QTabletEvent* event) override {
        if (kreplacedialog_tabletevent_isbase) {
            kreplacedialog_tabletevent_isbase = false;
            KReplaceDialog::tabletEvent(event);
        } else if (kreplacedialog_tabletevent_callback != nullptr) {
            QTabletEvent* cbval1 = event;

            kreplacedialog_tabletevent_callback(this, cbval1);
        } else {
            KReplaceDialog::tabletEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void actionEvent(QActionEvent* event) override {
        if (kreplacedialog_actionevent_isbase) {
            kreplacedialog_actionevent_isbase = false;
            KReplaceDialog::actionEvent(event);
        } else if (kreplacedialog_actionevent_callback != nullptr) {
            QActionEvent* cbval1 = event;

            kreplacedialog_actionevent_callback(this, cbval1);
        } else {
            KReplaceDialog::actionEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragEnterEvent(QDragEnterEvent* event) override {
        if (kreplacedialog_dragenterevent_isbase) {
            kreplacedialog_dragenterevent_isbase = false;
            KReplaceDialog::dragEnterEvent(event);
        } else if (kreplacedialog_dragenterevent_callback != nullptr) {
            QDragEnterEvent* cbval1 = event;

            kreplacedialog_dragenterevent_callback(this, cbval1);
        } else {
            KReplaceDialog::dragEnterEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragMoveEvent(QDragMoveEvent* event) override {
        if (kreplacedialog_dragmoveevent_isbase) {
            kreplacedialog_dragmoveevent_isbase = false;
            KReplaceDialog::dragMoveEvent(event);
        } else if (kreplacedialog_dragmoveevent_callback != nullptr) {
            QDragMoveEvent* cbval1 = event;

            kreplacedialog_dragmoveevent_callback(this, cbval1);
        } else {
            KReplaceDialog::dragMoveEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragLeaveEvent(QDragLeaveEvent* event) override {
        if (kreplacedialog_dragleaveevent_isbase) {
            kreplacedialog_dragleaveevent_isbase = false;
            KReplaceDialog::dragLeaveEvent(event);
        } else if (kreplacedialog_dragleaveevent_callback != nullptr) {
            QDragLeaveEvent* cbval1 = event;

            kreplacedialog_dragleaveevent_callback(this, cbval1);
        } else {
            KReplaceDialog::dragLeaveEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void dropEvent(QDropEvent* event) override {
        if (kreplacedialog_dropevent_isbase) {
            kreplacedialog_dropevent_isbase = false;
            KReplaceDialog::dropEvent(event);
        } else if (kreplacedialog_dropevent_callback != nullptr) {
            QDropEvent* cbval1 = event;

            kreplacedialog_dropevent_callback(this, cbval1);
        } else {
            KReplaceDialog::dropEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void hideEvent(QHideEvent* event) override {
        if (kreplacedialog_hideevent_isbase) {
            kreplacedialog_hideevent_isbase = false;
            KReplaceDialog::hideEvent(event);
        } else if (kreplacedialog_hideevent_callback != nullptr) {
            QHideEvent* cbval1 = event;

            kreplacedialog_hideevent_callback(this, cbval1);
        } else {
            KReplaceDialog::hideEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool nativeEvent(const QByteArray& eventType, void* message, qintptr* result) override {
        if (kreplacedialog_nativeevent_isbase) {
            kreplacedialog_nativeevent_isbase = false;
            return KReplaceDialog::nativeEvent(eventType, message, result);
        } else if (kreplacedialog_nativeevent_callback != nullptr) {
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

            bool callback_ret = kreplacedialog_nativeevent_callback(this, cbval1, cbval2, cbval3);
            return callback_ret;
        } else {
            return KReplaceDialog::nativeEvent(eventType, message, result);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void changeEvent(QEvent* param1) override {
        if (kreplacedialog_changeevent_isbase) {
            kreplacedialog_changeevent_isbase = false;
            KReplaceDialog::changeEvent(param1);
        } else if (kreplacedialog_changeevent_callback != nullptr) {
            QEvent* cbval1 = param1;

            kreplacedialog_changeevent_callback(this, cbval1);
        } else {
            KReplaceDialog::changeEvent(param1);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual int metric(QPaintDevice::PaintDeviceMetric param1) const override {
        if (kreplacedialog_metric_isbase) {
            kreplacedialog_metric_isbase = false;
            return KReplaceDialog::metric(param1);
        } else if (kreplacedialog_metric_callback != nullptr) {
            int cbval1 = static_cast<int>(param1);

            int callback_ret = kreplacedialog_metric_callback(this, cbval1);
            return static_cast<int>(callback_ret);
        } else {
            return KReplaceDialog::metric(param1);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void initPainter(QPainter* painter) const override {
        if (kreplacedialog_initpainter_isbase) {
            kreplacedialog_initpainter_isbase = false;
            KReplaceDialog::initPainter(painter);
        } else if (kreplacedialog_initpainter_callback != nullptr) {
            QPainter* cbval1 = painter;

            kreplacedialog_initpainter_callback(this, cbval1);
        } else {
            KReplaceDialog::initPainter(painter);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QPaintDevice* redirected(QPoint* offset) const override {
        if (kreplacedialog_redirected_isbase) {
            kreplacedialog_redirected_isbase = false;
            return KReplaceDialog::redirected(offset);
        } else if (kreplacedialog_redirected_callback != nullptr) {
            QPoint* cbval1 = offset;

            QPaintDevice* callback_ret = kreplacedialog_redirected_callback(this, cbval1);
            return callback_ret;
        } else {
            return KReplaceDialog::redirected(offset);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QPainter* sharedPainter() const override {
        if (kreplacedialog_sharedpainter_isbase) {
            kreplacedialog_sharedpainter_isbase = false;
            return KReplaceDialog::sharedPainter();
        } else if (kreplacedialog_sharedpainter_callback != nullptr) {
            QPainter* callback_ret = kreplacedialog_sharedpainter_callback();
            return callback_ret;
        } else {
            return KReplaceDialog::sharedPainter();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void inputMethodEvent(QInputMethodEvent* param1) override {
        if (kreplacedialog_inputmethodevent_isbase) {
            kreplacedialog_inputmethodevent_isbase = false;
            KReplaceDialog::inputMethodEvent(param1);
        } else if (kreplacedialog_inputmethodevent_callback != nullptr) {
            QInputMethodEvent* cbval1 = param1;

            kreplacedialog_inputmethodevent_callback(this, cbval1);
        } else {
            KReplaceDialog::inputMethodEvent(param1);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QVariant inputMethodQuery(Qt::InputMethodQuery param1) const override {
        if (kreplacedialog_inputmethodquery_isbase) {
            kreplacedialog_inputmethodquery_isbase = false;
            return KReplaceDialog::inputMethodQuery(param1);
        } else if (kreplacedialog_inputmethodquery_callback != nullptr) {
            int cbval1 = static_cast<int>(param1);

            QVariant* callback_ret = kreplacedialog_inputmethodquery_callback(this, cbval1);
            return *callback_ret;
        } else {
            return KReplaceDialog::inputMethodQuery(param1);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool focusNextPrevChild(bool next) override {
        if (kreplacedialog_focusnextprevchild_isbase) {
            kreplacedialog_focusnextprevchild_isbase = false;
            return KReplaceDialog::focusNextPrevChild(next);
        } else if (kreplacedialog_focusnextprevchild_callback != nullptr) {
            bool cbval1 = next;

            bool callback_ret = kreplacedialog_focusnextprevchild_callback(this, cbval1);
            return callback_ret;
        } else {
            return KReplaceDialog::focusNextPrevChild(next);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (kreplacedialog_timerevent_isbase) {
            kreplacedialog_timerevent_isbase = false;
            KReplaceDialog::timerEvent(event);
        } else if (kreplacedialog_timerevent_callback != nullptr) {
            QTimerEvent* cbval1 = event;

            kreplacedialog_timerevent_callback(this, cbval1);
        } else {
            KReplaceDialog::timerEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (kreplacedialog_childevent_isbase) {
            kreplacedialog_childevent_isbase = false;
            KReplaceDialog::childEvent(event);
        } else if (kreplacedialog_childevent_callback != nullptr) {
            QChildEvent* cbval1 = event;

            kreplacedialog_childevent_callback(this, cbval1);
        } else {
            KReplaceDialog::childEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (kreplacedialog_customevent_isbase) {
            kreplacedialog_customevent_isbase = false;
            KReplaceDialog::customEvent(event);
        } else if (kreplacedialog_customevent_callback != nullptr) {
            QEvent* cbval1 = event;

            kreplacedialog_customevent_callback(this, cbval1);
        } else {
            KReplaceDialog::customEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (kreplacedialog_connectnotify_isbase) {
            kreplacedialog_connectnotify_isbase = false;
            KReplaceDialog::connectNotify(signal);
        } else if (kreplacedialog_connectnotify_callback != nullptr) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            kreplacedialog_connectnotify_callback(this, cbval1);
        } else {
            KReplaceDialog::connectNotify(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (kreplacedialog_disconnectnotify_isbase) {
            kreplacedialog_disconnectnotify_isbase = false;
            KReplaceDialog::disconnectNotify(signal);
        } else if (kreplacedialog_disconnectnotify_callback != nullptr) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            kreplacedialog_disconnectnotify_callback(this, cbval1);
        } else {
            KReplaceDialog::disconnectNotify(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    void adjustPosition(QWidget* param1) {
        if (kreplacedialog_adjustposition_isbase) {
            kreplacedialog_adjustposition_isbase = false;
            KReplaceDialog::adjustPosition(param1);
        } else if (kreplacedialog_adjustposition_callback != nullptr) {
            QWidget* cbval1 = param1;

            kreplacedialog_adjustposition_callback(this, cbval1);
        } else {
            KReplaceDialog::adjustPosition(param1);
        }
    }

    // Virtual method for C ABI access and custom callback
    void updateMicroFocus() {
        if (kreplacedialog_updatemicrofocus_isbase) {
            kreplacedialog_updatemicrofocus_isbase = false;
            KReplaceDialog::updateMicroFocus();
        } else if (kreplacedialog_updatemicrofocus_callback != nullptr) {
            kreplacedialog_updatemicrofocus_callback();
        } else {
            KReplaceDialog::updateMicroFocus();
        }
    }

    // Virtual method for C ABI access and custom callback
    void create() {
        if (kreplacedialog_create_isbase) {
            kreplacedialog_create_isbase = false;
            KReplaceDialog::create();
        } else if (kreplacedialog_create_callback != nullptr) {
            kreplacedialog_create_callback();
        } else {
            KReplaceDialog::create();
        }
    }

    // Virtual method for C ABI access and custom callback
    void destroy() {
        if (kreplacedialog_destroy_isbase) {
            kreplacedialog_destroy_isbase = false;
            KReplaceDialog::destroy();
        } else if (kreplacedialog_destroy_callback != nullptr) {
            kreplacedialog_destroy_callback();
        } else {
            KReplaceDialog::destroy();
        }
    }

    // Virtual method for C ABI access and custom callback
    bool focusNextChild() {
        if (kreplacedialog_focusnextchild_isbase) {
            kreplacedialog_focusnextchild_isbase = false;
            return KReplaceDialog::focusNextChild();
        } else if (kreplacedialog_focusnextchild_callback != nullptr) {
            bool callback_ret = kreplacedialog_focusnextchild_callback();
            return callback_ret;
        } else {
            return KReplaceDialog::focusNextChild();
        }
    }

    // Virtual method for C ABI access and custom callback
    bool focusPreviousChild() {
        if (kreplacedialog_focuspreviouschild_isbase) {
            kreplacedialog_focuspreviouschild_isbase = false;
            return KReplaceDialog::focusPreviousChild();
        } else if (kreplacedialog_focuspreviouschild_callback != nullptr) {
            bool callback_ret = kreplacedialog_focuspreviouschild_callback();
            return callback_ret;
        } else {
            return KReplaceDialog::focusPreviousChild();
        }
    }

    // Virtual method for C ABI access and custom callback
    QObject* sender() const {
        if (kreplacedialog_sender_isbase) {
            kreplacedialog_sender_isbase = false;
            return KReplaceDialog::sender();
        } else if (kreplacedialog_sender_callback != nullptr) {
            QObject* callback_ret = kreplacedialog_sender_callback();
            return callback_ret;
        } else {
            return KReplaceDialog::sender();
        }
    }

    // Virtual method for C ABI access and custom callback
    int senderSignalIndex() const {
        if (kreplacedialog_sendersignalindex_isbase) {
            kreplacedialog_sendersignalindex_isbase = false;
            return KReplaceDialog::senderSignalIndex();
        } else if (kreplacedialog_sendersignalindex_callback != nullptr) {
            int callback_ret = kreplacedialog_sendersignalindex_callback();
            return static_cast<int>(callback_ret);
        } else {
            return KReplaceDialog::senderSignalIndex();
        }
    }

    // Virtual method for C ABI access and custom callback
    int receivers(const char* signal) const {
        if (kreplacedialog_receivers_isbase) {
            kreplacedialog_receivers_isbase = false;
            return KReplaceDialog::receivers(signal);
        } else if (kreplacedialog_receivers_callback != nullptr) {
            const char* cbval1 = (const char*)signal;

            int callback_ret = kreplacedialog_receivers_callback(this, cbval1);
            return static_cast<int>(callback_ret);
        } else {
            return KReplaceDialog::receivers(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    bool isSignalConnected(const QMetaMethod& signal) const {
        if (kreplacedialog_issignalconnected_isbase) {
            kreplacedialog_issignalconnected_isbase = false;
            return KReplaceDialog::isSignalConnected(signal);
        } else if (kreplacedialog_issignalconnected_callback != nullptr) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            bool callback_ret = kreplacedialog_issignalconnected_callback(this, cbval1);
            return callback_ret;
        } else {
            return KReplaceDialog::isSignalConnected(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    double getDecodedMetricF(QPaintDevice::PaintDeviceMetric metricA, QPaintDevice::PaintDeviceMetric metricB) const {
        if (kreplacedialog_getdecodedmetricf_isbase) {
            kreplacedialog_getdecodedmetricf_isbase = false;
            return KReplaceDialog::getDecodedMetricF(metricA, metricB);
        } else if (kreplacedialog_getdecodedmetricf_callback != nullptr) {
            int cbval1 = static_cast<int>(metricA);
            int cbval2 = static_cast<int>(metricB);

            double callback_ret = kreplacedialog_getdecodedmetricf_callback(this, cbval1, cbval2);
            return static_cast<double>(callback_ret);
        } else {
            return KReplaceDialog::getDecodedMetricF(metricA, metricB);
        }
    }

    // Friend functions
    friend void KReplaceDialog_ShowEvent(KReplaceDialog* self, QShowEvent* param1);
    friend void KReplaceDialog_QBaseShowEvent(KReplaceDialog* self, QShowEvent* param1);
    friend void KReplaceDialog_KeyPressEvent(KReplaceDialog* self, QKeyEvent* param1);
    friend void KReplaceDialog_QBaseKeyPressEvent(KReplaceDialog* self, QKeyEvent* param1);
    friend void KReplaceDialog_CloseEvent(KReplaceDialog* self, QCloseEvent* param1);
    friend void KReplaceDialog_QBaseCloseEvent(KReplaceDialog* self, QCloseEvent* param1);
    friend void KReplaceDialog_ResizeEvent(KReplaceDialog* self, QResizeEvent* param1);
    friend void KReplaceDialog_QBaseResizeEvent(KReplaceDialog* self, QResizeEvent* param1);
    friend void KReplaceDialog_ContextMenuEvent(KReplaceDialog* self, QContextMenuEvent* param1);
    friend void KReplaceDialog_QBaseContextMenuEvent(KReplaceDialog* self, QContextMenuEvent* param1);
    friend bool KReplaceDialog_EventFilter(KReplaceDialog* self, QObject* param1, QEvent* param2);
    friend bool KReplaceDialog_QBaseEventFilter(KReplaceDialog* self, QObject* param1, QEvent* param2);
    friend bool KReplaceDialog_Event(KReplaceDialog* self, QEvent* event);
    friend bool KReplaceDialog_QBaseEvent(KReplaceDialog* self, QEvent* event);
    friend void KReplaceDialog_MousePressEvent(KReplaceDialog* self, QMouseEvent* event);
    friend void KReplaceDialog_QBaseMousePressEvent(KReplaceDialog* self, QMouseEvent* event);
    friend void KReplaceDialog_MouseReleaseEvent(KReplaceDialog* self, QMouseEvent* event);
    friend void KReplaceDialog_QBaseMouseReleaseEvent(KReplaceDialog* self, QMouseEvent* event);
    friend void KReplaceDialog_MouseDoubleClickEvent(KReplaceDialog* self, QMouseEvent* event);
    friend void KReplaceDialog_QBaseMouseDoubleClickEvent(KReplaceDialog* self, QMouseEvent* event);
    friend void KReplaceDialog_MouseMoveEvent(KReplaceDialog* self, QMouseEvent* event);
    friend void KReplaceDialog_QBaseMouseMoveEvent(KReplaceDialog* self, QMouseEvent* event);
    friend void KReplaceDialog_WheelEvent(KReplaceDialog* self, QWheelEvent* event);
    friend void KReplaceDialog_QBaseWheelEvent(KReplaceDialog* self, QWheelEvent* event);
    friend void KReplaceDialog_KeyReleaseEvent(KReplaceDialog* self, QKeyEvent* event);
    friend void KReplaceDialog_QBaseKeyReleaseEvent(KReplaceDialog* self, QKeyEvent* event);
    friend void KReplaceDialog_FocusInEvent(KReplaceDialog* self, QFocusEvent* event);
    friend void KReplaceDialog_QBaseFocusInEvent(KReplaceDialog* self, QFocusEvent* event);
    friend void KReplaceDialog_FocusOutEvent(KReplaceDialog* self, QFocusEvent* event);
    friend void KReplaceDialog_QBaseFocusOutEvent(KReplaceDialog* self, QFocusEvent* event);
    friend void KReplaceDialog_EnterEvent(KReplaceDialog* self, QEnterEvent* event);
    friend void KReplaceDialog_QBaseEnterEvent(KReplaceDialog* self, QEnterEvent* event);
    friend void KReplaceDialog_LeaveEvent(KReplaceDialog* self, QEvent* event);
    friend void KReplaceDialog_QBaseLeaveEvent(KReplaceDialog* self, QEvent* event);
    friend void KReplaceDialog_PaintEvent(KReplaceDialog* self, QPaintEvent* event);
    friend void KReplaceDialog_QBasePaintEvent(KReplaceDialog* self, QPaintEvent* event);
    friend void KReplaceDialog_MoveEvent(KReplaceDialog* self, QMoveEvent* event);
    friend void KReplaceDialog_QBaseMoveEvent(KReplaceDialog* self, QMoveEvent* event);
    friend void KReplaceDialog_TabletEvent(KReplaceDialog* self, QTabletEvent* event);
    friend void KReplaceDialog_QBaseTabletEvent(KReplaceDialog* self, QTabletEvent* event);
    friend void KReplaceDialog_ActionEvent(KReplaceDialog* self, QActionEvent* event);
    friend void KReplaceDialog_QBaseActionEvent(KReplaceDialog* self, QActionEvent* event);
    friend void KReplaceDialog_DragEnterEvent(KReplaceDialog* self, QDragEnterEvent* event);
    friend void KReplaceDialog_QBaseDragEnterEvent(KReplaceDialog* self, QDragEnterEvent* event);
    friend void KReplaceDialog_DragMoveEvent(KReplaceDialog* self, QDragMoveEvent* event);
    friend void KReplaceDialog_QBaseDragMoveEvent(KReplaceDialog* self, QDragMoveEvent* event);
    friend void KReplaceDialog_DragLeaveEvent(KReplaceDialog* self, QDragLeaveEvent* event);
    friend void KReplaceDialog_QBaseDragLeaveEvent(KReplaceDialog* self, QDragLeaveEvent* event);
    friend void KReplaceDialog_DropEvent(KReplaceDialog* self, QDropEvent* event);
    friend void KReplaceDialog_QBaseDropEvent(KReplaceDialog* self, QDropEvent* event);
    friend void KReplaceDialog_HideEvent(KReplaceDialog* self, QHideEvent* event);
    friend void KReplaceDialog_QBaseHideEvent(KReplaceDialog* self, QHideEvent* event);
    friend bool KReplaceDialog_NativeEvent(KReplaceDialog* self, const libqt_string eventType, void* message, intptr_t* result);
    friend bool KReplaceDialog_QBaseNativeEvent(KReplaceDialog* self, const libqt_string eventType, void* message, intptr_t* result);
    friend void KReplaceDialog_ChangeEvent(KReplaceDialog* self, QEvent* param1);
    friend void KReplaceDialog_QBaseChangeEvent(KReplaceDialog* self, QEvent* param1);
    friend int KReplaceDialog_Metric(const KReplaceDialog* self, int param1);
    friend int KReplaceDialog_QBaseMetric(const KReplaceDialog* self, int param1);
    friend void KReplaceDialog_InitPainter(const KReplaceDialog* self, QPainter* painter);
    friend void KReplaceDialog_QBaseInitPainter(const KReplaceDialog* self, QPainter* painter);
    friend QPaintDevice* KReplaceDialog_Redirected(const KReplaceDialog* self, QPoint* offset);
    friend QPaintDevice* KReplaceDialog_QBaseRedirected(const KReplaceDialog* self, QPoint* offset);
    friend QPainter* KReplaceDialog_SharedPainter(const KReplaceDialog* self);
    friend QPainter* KReplaceDialog_QBaseSharedPainter(const KReplaceDialog* self);
    friend void KReplaceDialog_InputMethodEvent(KReplaceDialog* self, QInputMethodEvent* param1);
    friend void KReplaceDialog_QBaseInputMethodEvent(KReplaceDialog* self, QInputMethodEvent* param1);
    friend bool KReplaceDialog_FocusNextPrevChild(KReplaceDialog* self, bool next);
    friend bool KReplaceDialog_QBaseFocusNextPrevChild(KReplaceDialog* self, bool next);
    friend void KReplaceDialog_TimerEvent(KReplaceDialog* self, QTimerEvent* event);
    friend void KReplaceDialog_QBaseTimerEvent(KReplaceDialog* self, QTimerEvent* event);
    friend void KReplaceDialog_ChildEvent(KReplaceDialog* self, QChildEvent* event);
    friend void KReplaceDialog_QBaseChildEvent(KReplaceDialog* self, QChildEvent* event);
    friend void KReplaceDialog_CustomEvent(KReplaceDialog* self, QEvent* event);
    friend void KReplaceDialog_QBaseCustomEvent(KReplaceDialog* self, QEvent* event);
    friend void KReplaceDialog_ConnectNotify(KReplaceDialog* self, const QMetaMethod* signal);
    friend void KReplaceDialog_QBaseConnectNotify(KReplaceDialog* self, const QMetaMethod* signal);
    friend void KReplaceDialog_DisconnectNotify(KReplaceDialog* self, const QMetaMethod* signal);
    friend void KReplaceDialog_QBaseDisconnectNotify(KReplaceDialog* self, const QMetaMethod* signal);
    friend void KReplaceDialog_AdjustPosition(KReplaceDialog* self, QWidget* param1);
    friend void KReplaceDialog_QBaseAdjustPosition(KReplaceDialog* self, QWidget* param1);
    friend void KReplaceDialog_UpdateMicroFocus(KReplaceDialog* self);
    friend void KReplaceDialog_QBaseUpdateMicroFocus(KReplaceDialog* self);
    friend void KReplaceDialog_Create(KReplaceDialog* self);
    friend void KReplaceDialog_QBaseCreate(KReplaceDialog* self);
    friend void KReplaceDialog_Destroy(KReplaceDialog* self);
    friend void KReplaceDialog_QBaseDestroy(KReplaceDialog* self);
    friend bool KReplaceDialog_FocusNextChild(KReplaceDialog* self);
    friend bool KReplaceDialog_QBaseFocusNextChild(KReplaceDialog* self);
    friend bool KReplaceDialog_FocusPreviousChild(KReplaceDialog* self);
    friend bool KReplaceDialog_QBaseFocusPreviousChild(KReplaceDialog* self);
    friend QObject* KReplaceDialog_Sender(const KReplaceDialog* self);
    friend QObject* KReplaceDialog_QBaseSender(const KReplaceDialog* self);
    friend int KReplaceDialog_SenderSignalIndex(const KReplaceDialog* self);
    friend int KReplaceDialog_QBaseSenderSignalIndex(const KReplaceDialog* self);
    friend int KReplaceDialog_Receivers(const KReplaceDialog* self, const char* signal);
    friend int KReplaceDialog_QBaseReceivers(const KReplaceDialog* self, const char* signal);
    friend bool KReplaceDialog_IsSignalConnected(const KReplaceDialog* self, const QMetaMethod* signal);
    friend bool KReplaceDialog_QBaseIsSignalConnected(const KReplaceDialog* self, const QMetaMethod* signal);
    friend double KReplaceDialog_GetDecodedMetricF(const KReplaceDialog* self, int metricA, int metricB);
    friend double KReplaceDialog_QBaseGetDecodedMetricF(const KReplaceDialog* self, int metricA, int metricB);
};

#endif
