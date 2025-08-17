#pragma once
#ifndef SRCC_LIBVIRTUALQCOLORDIALOG_H
#define SRCC_LIBVIRTUALQCOLORDIALOG_H

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"

// This class is a subclass of QColorDialog so that we can call protected methods
class VirtualQColorDialog final : public QColorDialog {

  public:
    // Virtual class boolean flag
    bool isVirtualQColorDialog = true;

    // Virtual class public types (including callbacks)
    using QColorDialog_Metacall_Callback = int (*)(QColorDialog*, int, int, void**);
    using QColorDialog_SetVisible_Callback = void (*)(QColorDialog*, bool);
    using QColorDialog_ChangeEvent_Callback = void (*)(QColorDialog*, QEvent*);
    using QColorDialog_Done_Callback = void (*)(QColorDialog*, int);
    using QColorDialog_SizeHint_Callback = QSize* (*)();
    using QColorDialog_MinimumSizeHint_Callback = QSize* (*)();
    using QColorDialog_Open_Callback = void (*)();
    using QColorDialog_Exec_Callback = int (*)();
    using QColorDialog_Accept_Callback = void (*)();
    using QColorDialog_Reject_Callback = void (*)();
    using QColorDialog_KeyPressEvent_Callback = void (*)(QColorDialog*, QKeyEvent*);
    using QColorDialog_CloseEvent_Callback = void (*)(QColorDialog*, QCloseEvent*);
    using QColorDialog_ShowEvent_Callback = void (*)(QColorDialog*, QShowEvent*);
    using QColorDialog_ResizeEvent_Callback = void (*)(QColorDialog*, QResizeEvent*);
    using QColorDialog_ContextMenuEvent_Callback = void (*)(QColorDialog*, QContextMenuEvent*);
    using QColorDialog_EventFilter_Callback = bool (*)(QColorDialog*, QObject*, QEvent*);
    using QColorDialog_DevType_Callback = int (*)();
    using QColorDialog_HeightForWidth_Callback = int (*)(const QColorDialog*, int);
    using QColorDialog_HasHeightForWidth_Callback = bool (*)();
    using QColorDialog_PaintEngine_Callback = QPaintEngine* (*)();
    using QColorDialog_Event_Callback = bool (*)(QColorDialog*, QEvent*);
    using QColorDialog_MousePressEvent_Callback = void (*)(QColorDialog*, QMouseEvent*);
    using QColorDialog_MouseReleaseEvent_Callback = void (*)(QColorDialog*, QMouseEvent*);
    using QColorDialog_MouseDoubleClickEvent_Callback = void (*)(QColorDialog*, QMouseEvent*);
    using QColorDialog_MouseMoveEvent_Callback = void (*)(QColorDialog*, QMouseEvent*);
    using QColorDialog_WheelEvent_Callback = void (*)(QColorDialog*, QWheelEvent*);
    using QColorDialog_KeyReleaseEvent_Callback = void (*)(QColorDialog*, QKeyEvent*);
    using QColorDialog_FocusInEvent_Callback = void (*)(QColorDialog*, QFocusEvent*);
    using QColorDialog_FocusOutEvent_Callback = void (*)(QColorDialog*, QFocusEvent*);
    using QColorDialog_EnterEvent_Callback = void (*)(QColorDialog*, QEnterEvent*);
    using QColorDialog_LeaveEvent_Callback = void (*)(QColorDialog*, QEvent*);
    using QColorDialog_PaintEvent_Callback = void (*)(QColorDialog*, QPaintEvent*);
    using QColorDialog_MoveEvent_Callback = void (*)(QColorDialog*, QMoveEvent*);
    using QColorDialog_TabletEvent_Callback = void (*)(QColorDialog*, QTabletEvent*);
    using QColorDialog_ActionEvent_Callback = void (*)(QColorDialog*, QActionEvent*);
    using QColorDialog_DragEnterEvent_Callback = void (*)(QColorDialog*, QDragEnterEvent*);
    using QColorDialog_DragMoveEvent_Callback = void (*)(QColorDialog*, QDragMoveEvent*);
    using QColorDialog_DragLeaveEvent_Callback = void (*)(QColorDialog*, QDragLeaveEvent*);
    using QColorDialog_DropEvent_Callback = void (*)(QColorDialog*, QDropEvent*);
    using QColorDialog_HideEvent_Callback = void (*)(QColorDialog*, QHideEvent*);
    using QColorDialog_NativeEvent_Callback = bool (*)(QColorDialog*, libqt_string, void*, intptr_t*);
    using QColorDialog_Metric_Callback = int (*)(const QColorDialog*, int);
    using QColorDialog_InitPainter_Callback = void (*)(const QColorDialog*, QPainter*);
    using QColorDialog_Redirected_Callback = QPaintDevice* (*)(const QColorDialog*, QPoint*);
    using QColorDialog_SharedPainter_Callback = QPainter* (*)();
    using QColorDialog_InputMethodEvent_Callback = void (*)(QColorDialog*, QInputMethodEvent*);
    using QColorDialog_InputMethodQuery_Callback = QVariant* (*)(const QColorDialog*, int);
    using QColorDialog_FocusNextPrevChild_Callback = bool (*)(QColorDialog*, bool);
    using QColorDialog_TimerEvent_Callback = void (*)(QColorDialog*, QTimerEvent*);
    using QColorDialog_ChildEvent_Callback = void (*)(QColorDialog*, QChildEvent*);
    using QColorDialog_CustomEvent_Callback = void (*)(QColorDialog*, QEvent*);
    using QColorDialog_ConnectNotify_Callback = void (*)(QColorDialog*, QMetaMethod*);
    using QColorDialog_DisconnectNotify_Callback = void (*)(QColorDialog*, QMetaMethod*);
    using QColorDialog_AdjustPosition_Callback = void (*)(QColorDialog*, QWidget*);
    using QColorDialog_UpdateMicroFocus_Callback = void (*)();
    using QColorDialog_Create_Callback = void (*)();
    using QColorDialog_Destroy_Callback = void (*)();
    using QColorDialog_FocusNextChild_Callback = bool (*)();
    using QColorDialog_FocusPreviousChild_Callback = bool (*)();
    using QColorDialog_Sender_Callback = QObject* (*)();
    using QColorDialog_SenderSignalIndex_Callback = int (*)();
    using QColorDialog_Receivers_Callback = int (*)(const QColorDialog*, const char*);
    using QColorDialog_IsSignalConnected_Callback = bool (*)(const QColorDialog*, QMetaMethod*);
    using QColorDialog_GetDecodedMetricF_Callback = double (*)(const QColorDialog*, int, int);

  protected:
    // Instance callback storage
    QColorDialog_Metacall_Callback qcolordialog_metacall_callback = nullptr;
    QColorDialog_SetVisible_Callback qcolordialog_setvisible_callback = nullptr;
    QColorDialog_ChangeEvent_Callback qcolordialog_changeevent_callback = nullptr;
    QColorDialog_Done_Callback qcolordialog_done_callback = nullptr;
    QColorDialog_SizeHint_Callback qcolordialog_sizehint_callback = nullptr;
    QColorDialog_MinimumSizeHint_Callback qcolordialog_minimumsizehint_callback = nullptr;
    QColorDialog_Open_Callback qcolordialog_open_callback = nullptr;
    QColorDialog_Exec_Callback qcolordialog_exec_callback = nullptr;
    QColorDialog_Accept_Callback qcolordialog_accept_callback = nullptr;
    QColorDialog_Reject_Callback qcolordialog_reject_callback = nullptr;
    QColorDialog_KeyPressEvent_Callback qcolordialog_keypressevent_callback = nullptr;
    QColorDialog_CloseEvent_Callback qcolordialog_closeevent_callback = nullptr;
    QColorDialog_ShowEvent_Callback qcolordialog_showevent_callback = nullptr;
    QColorDialog_ResizeEvent_Callback qcolordialog_resizeevent_callback = nullptr;
    QColorDialog_ContextMenuEvent_Callback qcolordialog_contextmenuevent_callback = nullptr;
    QColorDialog_EventFilter_Callback qcolordialog_eventfilter_callback = nullptr;
    QColorDialog_DevType_Callback qcolordialog_devtype_callback = nullptr;
    QColorDialog_HeightForWidth_Callback qcolordialog_heightforwidth_callback = nullptr;
    QColorDialog_HasHeightForWidth_Callback qcolordialog_hasheightforwidth_callback = nullptr;
    QColorDialog_PaintEngine_Callback qcolordialog_paintengine_callback = nullptr;
    QColorDialog_Event_Callback qcolordialog_event_callback = nullptr;
    QColorDialog_MousePressEvent_Callback qcolordialog_mousepressevent_callback = nullptr;
    QColorDialog_MouseReleaseEvent_Callback qcolordialog_mousereleaseevent_callback = nullptr;
    QColorDialog_MouseDoubleClickEvent_Callback qcolordialog_mousedoubleclickevent_callback = nullptr;
    QColorDialog_MouseMoveEvent_Callback qcolordialog_mousemoveevent_callback = nullptr;
    QColorDialog_WheelEvent_Callback qcolordialog_wheelevent_callback = nullptr;
    QColorDialog_KeyReleaseEvent_Callback qcolordialog_keyreleaseevent_callback = nullptr;
    QColorDialog_FocusInEvent_Callback qcolordialog_focusinevent_callback = nullptr;
    QColorDialog_FocusOutEvent_Callback qcolordialog_focusoutevent_callback = nullptr;
    QColorDialog_EnterEvent_Callback qcolordialog_enterevent_callback = nullptr;
    QColorDialog_LeaveEvent_Callback qcolordialog_leaveevent_callback = nullptr;
    QColorDialog_PaintEvent_Callback qcolordialog_paintevent_callback = nullptr;
    QColorDialog_MoveEvent_Callback qcolordialog_moveevent_callback = nullptr;
    QColorDialog_TabletEvent_Callback qcolordialog_tabletevent_callback = nullptr;
    QColorDialog_ActionEvent_Callback qcolordialog_actionevent_callback = nullptr;
    QColorDialog_DragEnterEvent_Callback qcolordialog_dragenterevent_callback = nullptr;
    QColorDialog_DragMoveEvent_Callback qcolordialog_dragmoveevent_callback = nullptr;
    QColorDialog_DragLeaveEvent_Callback qcolordialog_dragleaveevent_callback = nullptr;
    QColorDialog_DropEvent_Callback qcolordialog_dropevent_callback = nullptr;
    QColorDialog_HideEvent_Callback qcolordialog_hideevent_callback = nullptr;
    QColorDialog_NativeEvent_Callback qcolordialog_nativeevent_callback = nullptr;
    QColorDialog_Metric_Callback qcolordialog_metric_callback = nullptr;
    QColorDialog_InitPainter_Callback qcolordialog_initpainter_callback = nullptr;
    QColorDialog_Redirected_Callback qcolordialog_redirected_callback = nullptr;
    QColorDialog_SharedPainter_Callback qcolordialog_sharedpainter_callback = nullptr;
    QColorDialog_InputMethodEvent_Callback qcolordialog_inputmethodevent_callback = nullptr;
    QColorDialog_InputMethodQuery_Callback qcolordialog_inputmethodquery_callback = nullptr;
    QColorDialog_FocusNextPrevChild_Callback qcolordialog_focusnextprevchild_callback = nullptr;
    QColorDialog_TimerEvent_Callback qcolordialog_timerevent_callback = nullptr;
    QColorDialog_ChildEvent_Callback qcolordialog_childevent_callback = nullptr;
    QColorDialog_CustomEvent_Callback qcolordialog_customevent_callback = nullptr;
    QColorDialog_ConnectNotify_Callback qcolordialog_connectnotify_callback = nullptr;
    QColorDialog_DisconnectNotify_Callback qcolordialog_disconnectnotify_callback = nullptr;
    QColorDialog_AdjustPosition_Callback qcolordialog_adjustposition_callback = nullptr;
    QColorDialog_UpdateMicroFocus_Callback qcolordialog_updatemicrofocus_callback = nullptr;
    QColorDialog_Create_Callback qcolordialog_create_callback = nullptr;
    QColorDialog_Destroy_Callback qcolordialog_destroy_callback = nullptr;
    QColorDialog_FocusNextChild_Callback qcolordialog_focusnextchild_callback = nullptr;
    QColorDialog_FocusPreviousChild_Callback qcolordialog_focuspreviouschild_callback = nullptr;
    QColorDialog_Sender_Callback qcolordialog_sender_callback = nullptr;
    QColorDialog_SenderSignalIndex_Callback qcolordialog_sendersignalindex_callback = nullptr;
    QColorDialog_Receivers_Callback qcolordialog_receivers_callback = nullptr;
    QColorDialog_IsSignalConnected_Callback qcolordialog_issignalconnected_callback = nullptr;
    QColorDialog_GetDecodedMetricF_Callback qcolordialog_getdecodedmetricf_callback = nullptr;

    // Instance base flags
    mutable bool qcolordialog_metacall_isbase = false;
    mutable bool qcolordialog_setvisible_isbase = false;
    mutable bool qcolordialog_changeevent_isbase = false;
    mutable bool qcolordialog_done_isbase = false;
    mutable bool qcolordialog_sizehint_isbase = false;
    mutable bool qcolordialog_minimumsizehint_isbase = false;
    mutable bool qcolordialog_open_isbase = false;
    mutable bool qcolordialog_exec_isbase = false;
    mutable bool qcolordialog_accept_isbase = false;
    mutable bool qcolordialog_reject_isbase = false;
    mutable bool qcolordialog_keypressevent_isbase = false;
    mutable bool qcolordialog_closeevent_isbase = false;
    mutable bool qcolordialog_showevent_isbase = false;
    mutable bool qcolordialog_resizeevent_isbase = false;
    mutable bool qcolordialog_contextmenuevent_isbase = false;
    mutable bool qcolordialog_eventfilter_isbase = false;
    mutable bool qcolordialog_devtype_isbase = false;
    mutable bool qcolordialog_heightforwidth_isbase = false;
    mutable bool qcolordialog_hasheightforwidth_isbase = false;
    mutable bool qcolordialog_paintengine_isbase = false;
    mutable bool qcolordialog_event_isbase = false;
    mutable bool qcolordialog_mousepressevent_isbase = false;
    mutable bool qcolordialog_mousereleaseevent_isbase = false;
    mutable bool qcolordialog_mousedoubleclickevent_isbase = false;
    mutable bool qcolordialog_mousemoveevent_isbase = false;
    mutable bool qcolordialog_wheelevent_isbase = false;
    mutable bool qcolordialog_keyreleaseevent_isbase = false;
    mutable bool qcolordialog_focusinevent_isbase = false;
    mutable bool qcolordialog_focusoutevent_isbase = false;
    mutable bool qcolordialog_enterevent_isbase = false;
    mutable bool qcolordialog_leaveevent_isbase = false;
    mutable bool qcolordialog_paintevent_isbase = false;
    mutable bool qcolordialog_moveevent_isbase = false;
    mutable bool qcolordialog_tabletevent_isbase = false;
    mutable bool qcolordialog_actionevent_isbase = false;
    mutable bool qcolordialog_dragenterevent_isbase = false;
    mutable bool qcolordialog_dragmoveevent_isbase = false;
    mutable bool qcolordialog_dragleaveevent_isbase = false;
    mutable bool qcolordialog_dropevent_isbase = false;
    mutable bool qcolordialog_hideevent_isbase = false;
    mutable bool qcolordialog_nativeevent_isbase = false;
    mutable bool qcolordialog_metric_isbase = false;
    mutable bool qcolordialog_initpainter_isbase = false;
    mutable bool qcolordialog_redirected_isbase = false;
    mutable bool qcolordialog_sharedpainter_isbase = false;
    mutable bool qcolordialog_inputmethodevent_isbase = false;
    mutable bool qcolordialog_inputmethodquery_isbase = false;
    mutable bool qcolordialog_focusnextprevchild_isbase = false;
    mutable bool qcolordialog_timerevent_isbase = false;
    mutable bool qcolordialog_childevent_isbase = false;
    mutable bool qcolordialog_customevent_isbase = false;
    mutable bool qcolordialog_connectnotify_isbase = false;
    mutable bool qcolordialog_disconnectnotify_isbase = false;
    mutable bool qcolordialog_adjustposition_isbase = false;
    mutable bool qcolordialog_updatemicrofocus_isbase = false;
    mutable bool qcolordialog_create_isbase = false;
    mutable bool qcolordialog_destroy_isbase = false;
    mutable bool qcolordialog_focusnextchild_isbase = false;
    mutable bool qcolordialog_focuspreviouschild_isbase = false;
    mutable bool qcolordialog_sender_isbase = false;
    mutable bool qcolordialog_sendersignalindex_isbase = false;
    mutable bool qcolordialog_receivers_isbase = false;
    mutable bool qcolordialog_issignalconnected_isbase = false;
    mutable bool qcolordialog_getdecodedmetricf_isbase = false;

  public:
    VirtualQColorDialog(QWidget* parent) : QColorDialog(parent) {};
    VirtualQColorDialog() : QColorDialog() {};
    VirtualQColorDialog(const QColor& initial) : QColorDialog(initial) {};
    VirtualQColorDialog(const QColor& initial, QWidget* parent) : QColorDialog(initial, parent) {};

    ~VirtualQColorDialog() {
        qcolordialog_metacall_callback = nullptr;
        qcolordialog_setvisible_callback = nullptr;
        qcolordialog_changeevent_callback = nullptr;
        qcolordialog_done_callback = nullptr;
        qcolordialog_sizehint_callback = nullptr;
        qcolordialog_minimumsizehint_callback = nullptr;
        qcolordialog_open_callback = nullptr;
        qcolordialog_exec_callback = nullptr;
        qcolordialog_accept_callback = nullptr;
        qcolordialog_reject_callback = nullptr;
        qcolordialog_keypressevent_callback = nullptr;
        qcolordialog_closeevent_callback = nullptr;
        qcolordialog_showevent_callback = nullptr;
        qcolordialog_resizeevent_callback = nullptr;
        qcolordialog_contextmenuevent_callback = nullptr;
        qcolordialog_eventfilter_callback = nullptr;
        qcolordialog_devtype_callback = nullptr;
        qcolordialog_heightforwidth_callback = nullptr;
        qcolordialog_hasheightforwidth_callback = nullptr;
        qcolordialog_paintengine_callback = nullptr;
        qcolordialog_event_callback = nullptr;
        qcolordialog_mousepressevent_callback = nullptr;
        qcolordialog_mousereleaseevent_callback = nullptr;
        qcolordialog_mousedoubleclickevent_callback = nullptr;
        qcolordialog_mousemoveevent_callback = nullptr;
        qcolordialog_wheelevent_callback = nullptr;
        qcolordialog_keyreleaseevent_callback = nullptr;
        qcolordialog_focusinevent_callback = nullptr;
        qcolordialog_focusoutevent_callback = nullptr;
        qcolordialog_enterevent_callback = nullptr;
        qcolordialog_leaveevent_callback = nullptr;
        qcolordialog_paintevent_callback = nullptr;
        qcolordialog_moveevent_callback = nullptr;
        qcolordialog_tabletevent_callback = nullptr;
        qcolordialog_actionevent_callback = nullptr;
        qcolordialog_dragenterevent_callback = nullptr;
        qcolordialog_dragmoveevent_callback = nullptr;
        qcolordialog_dragleaveevent_callback = nullptr;
        qcolordialog_dropevent_callback = nullptr;
        qcolordialog_hideevent_callback = nullptr;
        qcolordialog_nativeevent_callback = nullptr;
        qcolordialog_metric_callback = nullptr;
        qcolordialog_initpainter_callback = nullptr;
        qcolordialog_redirected_callback = nullptr;
        qcolordialog_sharedpainter_callback = nullptr;
        qcolordialog_inputmethodevent_callback = nullptr;
        qcolordialog_inputmethodquery_callback = nullptr;
        qcolordialog_focusnextprevchild_callback = nullptr;
        qcolordialog_timerevent_callback = nullptr;
        qcolordialog_childevent_callback = nullptr;
        qcolordialog_customevent_callback = nullptr;
        qcolordialog_connectnotify_callback = nullptr;
        qcolordialog_disconnectnotify_callback = nullptr;
        qcolordialog_adjustposition_callback = nullptr;
        qcolordialog_updatemicrofocus_callback = nullptr;
        qcolordialog_create_callback = nullptr;
        qcolordialog_destroy_callback = nullptr;
        qcolordialog_focusnextchild_callback = nullptr;
        qcolordialog_focuspreviouschild_callback = nullptr;
        qcolordialog_sender_callback = nullptr;
        qcolordialog_sendersignalindex_callback = nullptr;
        qcolordialog_receivers_callback = nullptr;
        qcolordialog_issignalconnected_callback = nullptr;
        qcolordialog_getdecodedmetricf_callback = nullptr;
    }

    // Callback setters
    inline void setQColorDialog_Metacall_Callback(QColorDialog_Metacall_Callback cb) { qcolordialog_metacall_callback = cb; }
    inline void setQColorDialog_SetVisible_Callback(QColorDialog_SetVisible_Callback cb) { qcolordialog_setvisible_callback = cb; }
    inline void setQColorDialog_ChangeEvent_Callback(QColorDialog_ChangeEvent_Callback cb) { qcolordialog_changeevent_callback = cb; }
    inline void setQColorDialog_Done_Callback(QColorDialog_Done_Callback cb) { qcolordialog_done_callback = cb; }
    inline void setQColorDialog_SizeHint_Callback(QColorDialog_SizeHint_Callback cb) { qcolordialog_sizehint_callback = cb; }
    inline void setQColorDialog_MinimumSizeHint_Callback(QColorDialog_MinimumSizeHint_Callback cb) { qcolordialog_minimumsizehint_callback = cb; }
    inline void setQColorDialog_Open_Callback(QColorDialog_Open_Callback cb) { qcolordialog_open_callback = cb; }
    inline void setQColorDialog_Exec_Callback(QColorDialog_Exec_Callback cb) { qcolordialog_exec_callback = cb; }
    inline void setQColorDialog_Accept_Callback(QColorDialog_Accept_Callback cb) { qcolordialog_accept_callback = cb; }
    inline void setQColorDialog_Reject_Callback(QColorDialog_Reject_Callback cb) { qcolordialog_reject_callback = cb; }
    inline void setQColorDialog_KeyPressEvent_Callback(QColorDialog_KeyPressEvent_Callback cb) { qcolordialog_keypressevent_callback = cb; }
    inline void setQColorDialog_CloseEvent_Callback(QColorDialog_CloseEvent_Callback cb) { qcolordialog_closeevent_callback = cb; }
    inline void setQColorDialog_ShowEvent_Callback(QColorDialog_ShowEvent_Callback cb) { qcolordialog_showevent_callback = cb; }
    inline void setQColorDialog_ResizeEvent_Callback(QColorDialog_ResizeEvent_Callback cb) { qcolordialog_resizeevent_callback = cb; }
    inline void setQColorDialog_ContextMenuEvent_Callback(QColorDialog_ContextMenuEvent_Callback cb) { qcolordialog_contextmenuevent_callback = cb; }
    inline void setQColorDialog_EventFilter_Callback(QColorDialog_EventFilter_Callback cb) { qcolordialog_eventfilter_callback = cb; }
    inline void setQColorDialog_DevType_Callback(QColorDialog_DevType_Callback cb) { qcolordialog_devtype_callback = cb; }
    inline void setQColorDialog_HeightForWidth_Callback(QColorDialog_HeightForWidth_Callback cb) { qcolordialog_heightforwidth_callback = cb; }
    inline void setQColorDialog_HasHeightForWidth_Callback(QColorDialog_HasHeightForWidth_Callback cb) { qcolordialog_hasheightforwidth_callback = cb; }
    inline void setQColorDialog_PaintEngine_Callback(QColorDialog_PaintEngine_Callback cb) { qcolordialog_paintengine_callback = cb; }
    inline void setQColorDialog_Event_Callback(QColorDialog_Event_Callback cb) { qcolordialog_event_callback = cb; }
    inline void setQColorDialog_MousePressEvent_Callback(QColorDialog_MousePressEvent_Callback cb) { qcolordialog_mousepressevent_callback = cb; }
    inline void setQColorDialog_MouseReleaseEvent_Callback(QColorDialog_MouseReleaseEvent_Callback cb) { qcolordialog_mousereleaseevent_callback = cb; }
    inline void setQColorDialog_MouseDoubleClickEvent_Callback(QColorDialog_MouseDoubleClickEvent_Callback cb) { qcolordialog_mousedoubleclickevent_callback = cb; }
    inline void setQColorDialog_MouseMoveEvent_Callback(QColorDialog_MouseMoveEvent_Callback cb) { qcolordialog_mousemoveevent_callback = cb; }
    inline void setQColorDialog_WheelEvent_Callback(QColorDialog_WheelEvent_Callback cb) { qcolordialog_wheelevent_callback = cb; }
    inline void setQColorDialog_KeyReleaseEvent_Callback(QColorDialog_KeyReleaseEvent_Callback cb) { qcolordialog_keyreleaseevent_callback = cb; }
    inline void setQColorDialog_FocusInEvent_Callback(QColorDialog_FocusInEvent_Callback cb) { qcolordialog_focusinevent_callback = cb; }
    inline void setQColorDialog_FocusOutEvent_Callback(QColorDialog_FocusOutEvent_Callback cb) { qcolordialog_focusoutevent_callback = cb; }
    inline void setQColorDialog_EnterEvent_Callback(QColorDialog_EnterEvent_Callback cb) { qcolordialog_enterevent_callback = cb; }
    inline void setQColorDialog_LeaveEvent_Callback(QColorDialog_LeaveEvent_Callback cb) { qcolordialog_leaveevent_callback = cb; }
    inline void setQColorDialog_PaintEvent_Callback(QColorDialog_PaintEvent_Callback cb) { qcolordialog_paintevent_callback = cb; }
    inline void setQColorDialog_MoveEvent_Callback(QColorDialog_MoveEvent_Callback cb) { qcolordialog_moveevent_callback = cb; }
    inline void setQColorDialog_TabletEvent_Callback(QColorDialog_TabletEvent_Callback cb) { qcolordialog_tabletevent_callback = cb; }
    inline void setQColorDialog_ActionEvent_Callback(QColorDialog_ActionEvent_Callback cb) { qcolordialog_actionevent_callback = cb; }
    inline void setQColorDialog_DragEnterEvent_Callback(QColorDialog_DragEnterEvent_Callback cb) { qcolordialog_dragenterevent_callback = cb; }
    inline void setQColorDialog_DragMoveEvent_Callback(QColorDialog_DragMoveEvent_Callback cb) { qcolordialog_dragmoveevent_callback = cb; }
    inline void setQColorDialog_DragLeaveEvent_Callback(QColorDialog_DragLeaveEvent_Callback cb) { qcolordialog_dragleaveevent_callback = cb; }
    inline void setQColorDialog_DropEvent_Callback(QColorDialog_DropEvent_Callback cb) { qcolordialog_dropevent_callback = cb; }
    inline void setQColorDialog_HideEvent_Callback(QColorDialog_HideEvent_Callback cb) { qcolordialog_hideevent_callback = cb; }
    inline void setQColorDialog_NativeEvent_Callback(QColorDialog_NativeEvent_Callback cb) { qcolordialog_nativeevent_callback = cb; }
    inline void setQColorDialog_Metric_Callback(QColorDialog_Metric_Callback cb) { qcolordialog_metric_callback = cb; }
    inline void setQColorDialog_InitPainter_Callback(QColorDialog_InitPainter_Callback cb) { qcolordialog_initpainter_callback = cb; }
    inline void setQColorDialog_Redirected_Callback(QColorDialog_Redirected_Callback cb) { qcolordialog_redirected_callback = cb; }
    inline void setQColorDialog_SharedPainter_Callback(QColorDialog_SharedPainter_Callback cb) { qcolordialog_sharedpainter_callback = cb; }
    inline void setQColorDialog_InputMethodEvent_Callback(QColorDialog_InputMethodEvent_Callback cb) { qcolordialog_inputmethodevent_callback = cb; }
    inline void setQColorDialog_InputMethodQuery_Callback(QColorDialog_InputMethodQuery_Callback cb) { qcolordialog_inputmethodquery_callback = cb; }
    inline void setQColorDialog_FocusNextPrevChild_Callback(QColorDialog_FocusNextPrevChild_Callback cb) { qcolordialog_focusnextprevchild_callback = cb; }
    inline void setQColorDialog_TimerEvent_Callback(QColorDialog_TimerEvent_Callback cb) { qcolordialog_timerevent_callback = cb; }
    inline void setQColorDialog_ChildEvent_Callback(QColorDialog_ChildEvent_Callback cb) { qcolordialog_childevent_callback = cb; }
    inline void setQColorDialog_CustomEvent_Callback(QColorDialog_CustomEvent_Callback cb) { qcolordialog_customevent_callback = cb; }
    inline void setQColorDialog_ConnectNotify_Callback(QColorDialog_ConnectNotify_Callback cb) { qcolordialog_connectnotify_callback = cb; }
    inline void setQColorDialog_DisconnectNotify_Callback(QColorDialog_DisconnectNotify_Callback cb) { qcolordialog_disconnectnotify_callback = cb; }
    inline void setQColorDialog_AdjustPosition_Callback(QColorDialog_AdjustPosition_Callback cb) { qcolordialog_adjustposition_callback = cb; }
    inline void setQColorDialog_UpdateMicroFocus_Callback(QColorDialog_UpdateMicroFocus_Callback cb) { qcolordialog_updatemicrofocus_callback = cb; }
    inline void setQColorDialog_Create_Callback(QColorDialog_Create_Callback cb) { qcolordialog_create_callback = cb; }
    inline void setQColorDialog_Destroy_Callback(QColorDialog_Destroy_Callback cb) { qcolordialog_destroy_callback = cb; }
    inline void setQColorDialog_FocusNextChild_Callback(QColorDialog_FocusNextChild_Callback cb) { qcolordialog_focusnextchild_callback = cb; }
    inline void setQColorDialog_FocusPreviousChild_Callback(QColorDialog_FocusPreviousChild_Callback cb) { qcolordialog_focuspreviouschild_callback = cb; }
    inline void setQColorDialog_Sender_Callback(QColorDialog_Sender_Callback cb) { qcolordialog_sender_callback = cb; }
    inline void setQColorDialog_SenderSignalIndex_Callback(QColorDialog_SenderSignalIndex_Callback cb) { qcolordialog_sendersignalindex_callback = cb; }
    inline void setQColorDialog_Receivers_Callback(QColorDialog_Receivers_Callback cb) { qcolordialog_receivers_callback = cb; }
    inline void setQColorDialog_IsSignalConnected_Callback(QColorDialog_IsSignalConnected_Callback cb) { qcolordialog_issignalconnected_callback = cb; }
    inline void setQColorDialog_GetDecodedMetricF_Callback(QColorDialog_GetDecodedMetricF_Callback cb) { qcolordialog_getdecodedmetricf_callback = cb; }

    // Base flag setters
    inline void setQColorDialog_Metacall_IsBase(bool value) const { qcolordialog_metacall_isbase = value; }
    inline void setQColorDialog_SetVisible_IsBase(bool value) const { qcolordialog_setvisible_isbase = value; }
    inline void setQColorDialog_ChangeEvent_IsBase(bool value) const { qcolordialog_changeevent_isbase = value; }
    inline void setQColorDialog_Done_IsBase(bool value) const { qcolordialog_done_isbase = value; }
    inline void setQColorDialog_SizeHint_IsBase(bool value) const { qcolordialog_sizehint_isbase = value; }
    inline void setQColorDialog_MinimumSizeHint_IsBase(bool value) const { qcolordialog_minimumsizehint_isbase = value; }
    inline void setQColorDialog_Open_IsBase(bool value) const { qcolordialog_open_isbase = value; }
    inline void setQColorDialog_Exec_IsBase(bool value) const { qcolordialog_exec_isbase = value; }
    inline void setQColorDialog_Accept_IsBase(bool value) const { qcolordialog_accept_isbase = value; }
    inline void setQColorDialog_Reject_IsBase(bool value) const { qcolordialog_reject_isbase = value; }
    inline void setQColorDialog_KeyPressEvent_IsBase(bool value) const { qcolordialog_keypressevent_isbase = value; }
    inline void setQColorDialog_CloseEvent_IsBase(bool value) const { qcolordialog_closeevent_isbase = value; }
    inline void setQColorDialog_ShowEvent_IsBase(bool value) const { qcolordialog_showevent_isbase = value; }
    inline void setQColorDialog_ResizeEvent_IsBase(bool value) const { qcolordialog_resizeevent_isbase = value; }
    inline void setQColorDialog_ContextMenuEvent_IsBase(bool value) const { qcolordialog_contextmenuevent_isbase = value; }
    inline void setQColorDialog_EventFilter_IsBase(bool value) const { qcolordialog_eventfilter_isbase = value; }
    inline void setQColorDialog_DevType_IsBase(bool value) const { qcolordialog_devtype_isbase = value; }
    inline void setQColorDialog_HeightForWidth_IsBase(bool value) const { qcolordialog_heightforwidth_isbase = value; }
    inline void setQColorDialog_HasHeightForWidth_IsBase(bool value) const { qcolordialog_hasheightforwidth_isbase = value; }
    inline void setQColorDialog_PaintEngine_IsBase(bool value) const { qcolordialog_paintengine_isbase = value; }
    inline void setQColorDialog_Event_IsBase(bool value) const { qcolordialog_event_isbase = value; }
    inline void setQColorDialog_MousePressEvent_IsBase(bool value) const { qcolordialog_mousepressevent_isbase = value; }
    inline void setQColorDialog_MouseReleaseEvent_IsBase(bool value) const { qcolordialog_mousereleaseevent_isbase = value; }
    inline void setQColorDialog_MouseDoubleClickEvent_IsBase(bool value) const { qcolordialog_mousedoubleclickevent_isbase = value; }
    inline void setQColorDialog_MouseMoveEvent_IsBase(bool value) const { qcolordialog_mousemoveevent_isbase = value; }
    inline void setQColorDialog_WheelEvent_IsBase(bool value) const { qcolordialog_wheelevent_isbase = value; }
    inline void setQColorDialog_KeyReleaseEvent_IsBase(bool value) const { qcolordialog_keyreleaseevent_isbase = value; }
    inline void setQColorDialog_FocusInEvent_IsBase(bool value) const { qcolordialog_focusinevent_isbase = value; }
    inline void setQColorDialog_FocusOutEvent_IsBase(bool value) const { qcolordialog_focusoutevent_isbase = value; }
    inline void setQColorDialog_EnterEvent_IsBase(bool value) const { qcolordialog_enterevent_isbase = value; }
    inline void setQColorDialog_LeaveEvent_IsBase(bool value) const { qcolordialog_leaveevent_isbase = value; }
    inline void setQColorDialog_PaintEvent_IsBase(bool value) const { qcolordialog_paintevent_isbase = value; }
    inline void setQColorDialog_MoveEvent_IsBase(bool value) const { qcolordialog_moveevent_isbase = value; }
    inline void setQColorDialog_TabletEvent_IsBase(bool value) const { qcolordialog_tabletevent_isbase = value; }
    inline void setQColorDialog_ActionEvent_IsBase(bool value) const { qcolordialog_actionevent_isbase = value; }
    inline void setQColorDialog_DragEnterEvent_IsBase(bool value) const { qcolordialog_dragenterevent_isbase = value; }
    inline void setQColorDialog_DragMoveEvent_IsBase(bool value) const { qcolordialog_dragmoveevent_isbase = value; }
    inline void setQColorDialog_DragLeaveEvent_IsBase(bool value) const { qcolordialog_dragleaveevent_isbase = value; }
    inline void setQColorDialog_DropEvent_IsBase(bool value) const { qcolordialog_dropevent_isbase = value; }
    inline void setQColorDialog_HideEvent_IsBase(bool value) const { qcolordialog_hideevent_isbase = value; }
    inline void setQColorDialog_NativeEvent_IsBase(bool value) const { qcolordialog_nativeevent_isbase = value; }
    inline void setQColorDialog_Metric_IsBase(bool value) const { qcolordialog_metric_isbase = value; }
    inline void setQColorDialog_InitPainter_IsBase(bool value) const { qcolordialog_initpainter_isbase = value; }
    inline void setQColorDialog_Redirected_IsBase(bool value) const { qcolordialog_redirected_isbase = value; }
    inline void setQColorDialog_SharedPainter_IsBase(bool value) const { qcolordialog_sharedpainter_isbase = value; }
    inline void setQColorDialog_InputMethodEvent_IsBase(bool value) const { qcolordialog_inputmethodevent_isbase = value; }
    inline void setQColorDialog_InputMethodQuery_IsBase(bool value) const { qcolordialog_inputmethodquery_isbase = value; }
    inline void setQColorDialog_FocusNextPrevChild_IsBase(bool value) const { qcolordialog_focusnextprevchild_isbase = value; }
    inline void setQColorDialog_TimerEvent_IsBase(bool value) const { qcolordialog_timerevent_isbase = value; }
    inline void setQColorDialog_ChildEvent_IsBase(bool value) const { qcolordialog_childevent_isbase = value; }
    inline void setQColorDialog_CustomEvent_IsBase(bool value) const { qcolordialog_customevent_isbase = value; }
    inline void setQColorDialog_ConnectNotify_IsBase(bool value) const { qcolordialog_connectnotify_isbase = value; }
    inline void setQColorDialog_DisconnectNotify_IsBase(bool value) const { qcolordialog_disconnectnotify_isbase = value; }
    inline void setQColorDialog_AdjustPosition_IsBase(bool value) const { qcolordialog_adjustposition_isbase = value; }
    inline void setQColorDialog_UpdateMicroFocus_IsBase(bool value) const { qcolordialog_updatemicrofocus_isbase = value; }
    inline void setQColorDialog_Create_IsBase(bool value) const { qcolordialog_create_isbase = value; }
    inline void setQColorDialog_Destroy_IsBase(bool value) const { qcolordialog_destroy_isbase = value; }
    inline void setQColorDialog_FocusNextChild_IsBase(bool value) const { qcolordialog_focusnextchild_isbase = value; }
    inline void setQColorDialog_FocusPreviousChild_IsBase(bool value) const { qcolordialog_focuspreviouschild_isbase = value; }
    inline void setQColorDialog_Sender_IsBase(bool value) const { qcolordialog_sender_isbase = value; }
    inline void setQColorDialog_SenderSignalIndex_IsBase(bool value) const { qcolordialog_sendersignalindex_isbase = value; }
    inline void setQColorDialog_Receivers_IsBase(bool value) const { qcolordialog_receivers_isbase = value; }
    inline void setQColorDialog_IsSignalConnected_IsBase(bool value) const { qcolordialog_issignalconnected_isbase = value; }
    inline void setQColorDialog_GetDecodedMetricF_IsBase(bool value) const { qcolordialog_getdecodedmetricf_isbase = value; }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (qcolordialog_metacall_isbase) {
            qcolordialog_metacall_isbase = false;
            return QColorDialog::qt_metacall(param1, param2, param3);
        } else if (qcolordialog_metacall_callback != nullptr) {
            int cbval1 = static_cast<int>(param1);
            int cbval2 = param2;
            void** cbval3 = param3;

            int callback_ret = qcolordialog_metacall_callback(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        } else {
            return QColorDialog::qt_metacall(param1, param2, param3);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void setVisible(bool visible) override {
        if (qcolordialog_setvisible_isbase) {
            qcolordialog_setvisible_isbase = false;
            QColorDialog::setVisible(visible);
        } else if (qcolordialog_setvisible_callback != nullptr) {
            bool cbval1 = visible;

            qcolordialog_setvisible_callback(this, cbval1);
        } else {
            QColorDialog::setVisible(visible);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void changeEvent(QEvent* event) override {
        if (qcolordialog_changeevent_isbase) {
            qcolordialog_changeevent_isbase = false;
            QColorDialog::changeEvent(event);
        } else if (qcolordialog_changeevent_callback != nullptr) {
            QEvent* cbval1 = event;

            qcolordialog_changeevent_callback(this, cbval1);
        } else {
            QColorDialog::changeEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void done(int result) override {
        if (qcolordialog_done_isbase) {
            qcolordialog_done_isbase = false;
            QColorDialog::done(result);
        } else if (qcolordialog_done_callback != nullptr) {
            int cbval1 = result;

            qcolordialog_done_callback(this, cbval1);
        } else {
            QColorDialog::done(result);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QSize sizeHint() const override {
        if (qcolordialog_sizehint_isbase) {
            qcolordialog_sizehint_isbase = false;
            return QColorDialog::sizeHint();
        } else if (qcolordialog_sizehint_callback != nullptr) {
            QSize* callback_ret = qcolordialog_sizehint_callback();
            return *callback_ret;
        } else {
            return QColorDialog::sizeHint();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QSize minimumSizeHint() const override {
        if (qcolordialog_minimumsizehint_isbase) {
            qcolordialog_minimumsizehint_isbase = false;
            return QColorDialog::minimumSizeHint();
        } else if (qcolordialog_minimumsizehint_callback != nullptr) {
            QSize* callback_ret = qcolordialog_minimumsizehint_callback();
            return *callback_ret;
        } else {
            return QColorDialog::minimumSizeHint();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void open() override {
        if (qcolordialog_open_isbase) {
            qcolordialog_open_isbase = false;
            QColorDialog::open();
        } else if (qcolordialog_open_callback != nullptr) {
            qcolordialog_open_callback();
        } else {
            QColorDialog::open();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual int exec() override {
        if (qcolordialog_exec_isbase) {
            qcolordialog_exec_isbase = false;
            return QColorDialog::exec();
        } else if (qcolordialog_exec_callback != nullptr) {
            int callback_ret = qcolordialog_exec_callback();
            return static_cast<int>(callback_ret);
        } else {
            return QColorDialog::exec();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void accept() override {
        if (qcolordialog_accept_isbase) {
            qcolordialog_accept_isbase = false;
            QColorDialog::accept();
        } else if (qcolordialog_accept_callback != nullptr) {
            qcolordialog_accept_callback();
        } else {
            QColorDialog::accept();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void reject() override {
        if (qcolordialog_reject_isbase) {
            qcolordialog_reject_isbase = false;
            QColorDialog::reject();
        } else if (qcolordialog_reject_callback != nullptr) {
            qcolordialog_reject_callback();
        } else {
            QColorDialog::reject();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void keyPressEvent(QKeyEvent* param1) override {
        if (qcolordialog_keypressevent_isbase) {
            qcolordialog_keypressevent_isbase = false;
            QColorDialog::keyPressEvent(param1);
        } else if (qcolordialog_keypressevent_callback != nullptr) {
            QKeyEvent* cbval1 = param1;

            qcolordialog_keypressevent_callback(this, cbval1);
        } else {
            QColorDialog::keyPressEvent(param1);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void closeEvent(QCloseEvent* param1) override {
        if (qcolordialog_closeevent_isbase) {
            qcolordialog_closeevent_isbase = false;
            QColorDialog::closeEvent(param1);
        } else if (qcolordialog_closeevent_callback != nullptr) {
            QCloseEvent* cbval1 = param1;

            qcolordialog_closeevent_callback(this, cbval1);
        } else {
            QColorDialog::closeEvent(param1);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void showEvent(QShowEvent* param1) override {
        if (qcolordialog_showevent_isbase) {
            qcolordialog_showevent_isbase = false;
            QColorDialog::showEvent(param1);
        } else if (qcolordialog_showevent_callback != nullptr) {
            QShowEvent* cbval1 = param1;

            qcolordialog_showevent_callback(this, cbval1);
        } else {
            QColorDialog::showEvent(param1);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void resizeEvent(QResizeEvent* param1) override {
        if (qcolordialog_resizeevent_isbase) {
            qcolordialog_resizeevent_isbase = false;
            QColorDialog::resizeEvent(param1);
        } else if (qcolordialog_resizeevent_callback != nullptr) {
            QResizeEvent* cbval1 = param1;

            qcolordialog_resizeevent_callback(this, cbval1);
        } else {
            QColorDialog::resizeEvent(param1);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void contextMenuEvent(QContextMenuEvent* param1) override {
        if (qcolordialog_contextmenuevent_isbase) {
            qcolordialog_contextmenuevent_isbase = false;
            QColorDialog::contextMenuEvent(param1);
        } else if (qcolordialog_contextmenuevent_callback != nullptr) {
            QContextMenuEvent* cbval1 = param1;

            qcolordialog_contextmenuevent_callback(this, cbval1);
        } else {
            QColorDialog::contextMenuEvent(param1);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* param1, QEvent* param2) override {
        if (qcolordialog_eventfilter_isbase) {
            qcolordialog_eventfilter_isbase = false;
            return QColorDialog::eventFilter(param1, param2);
        } else if (qcolordialog_eventfilter_callback != nullptr) {
            QObject* cbval1 = param1;
            QEvent* cbval2 = param2;

            bool callback_ret = qcolordialog_eventfilter_callback(this, cbval1, cbval2);
            return callback_ret;
        } else {
            return QColorDialog::eventFilter(param1, param2);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual int devType() const override {
        if (qcolordialog_devtype_isbase) {
            qcolordialog_devtype_isbase = false;
            return QColorDialog::devType();
        } else if (qcolordialog_devtype_callback != nullptr) {
            int callback_ret = qcolordialog_devtype_callback();
            return static_cast<int>(callback_ret);
        } else {
            return QColorDialog::devType();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual int heightForWidth(int param1) const override {
        if (qcolordialog_heightforwidth_isbase) {
            qcolordialog_heightforwidth_isbase = false;
            return QColorDialog::heightForWidth(param1);
        } else if (qcolordialog_heightforwidth_callback != nullptr) {
            int cbval1 = param1;

            int callback_ret = qcolordialog_heightforwidth_callback(this, cbval1);
            return static_cast<int>(callback_ret);
        } else {
            return QColorDialog::heightForWidth(param1);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool hasHeightForWidth() const override {
        if (qcolordialog_hasheightforwidth_isbase) {
            qcolordialog_hasheightforwidth_isbase = false;
            return QColorDialog::hasHeightForWidth();
        } else if (qcolordialog_hasheightforwidth_callback != nullptr) {
            bool callback_ret = qcolordialog_hasheightforwidth_callback();
            return callback_ret;
        } else {
            return QColorDialog::hasHeightForWidth();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QPaintEngine* paintEngine() const override {
        if (qcolordialog_paintengine_isbase) {
            qcolordialog_paintengine_isbase = false;
            return QColorDialog::paintEngine();
        } else if (qcolordialog_paintengine_callback != nullptr) {
            QPaintEngine* callback_ret = qcolordialog_paintengine_callback();
            return callback_ret;
        } else {
            return QColorDialog::paintEngine();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* event) override {
        if (qcolordialog_event_isbase) {
            qcolordialog_event_isbase = false;
            return QColorDialog::event(event);
        } else if (qcolordialog_event_callback != nullptr) {
            QEvent* cbval1 = event;

            bool callback_ret = qcolordialog_event_callback(this, cbval1);
            return callback_ret;
        } else {
            return QColorDialog::event(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void mousePressEvent(QMouseEvent* event) override {
        if (qcolordialog_mousepressevent_isbase) {
            qcolordialog_mousepressevent_isbase = false;
            QColorDialog::mousePressEvent(event);
        } else if (qcolordialog_mousepressevent_callback != nullptr) {
            QMouseEvent* cbval1 = event;

            qcolordialog_mousepressevent_callback(this, cbval1);
        } else {
            QColorDialog::mousePressEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseReleaseEvent(QMouseEvent* event) override {
        if (qcolordialog_mousereleaseevent_isbase) {
            qcolordialog_mousereleaseevent_isbase = false;
            QColorDialog::mouseReleaseEvent(event);
        } else if (qcolordialog_mousereleaseevent_callback != nullptr) {
            QMouseEvent* cbval1 = event;

            qcolordialog_mousereleaseevent_callback(this, cbval1);
        } else {
            QColorDialog::mouseReleaseEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseDoubleClickEvent(QMouseEvent* event) override {
        if (qcolordialog_mousedoubleclickevent_isbase) {
            qcolordialog_mousedoubleclickevent_isbase = false;
            QColorDialog::mouseDoubleClickEvent(event);
        } else if (qcolordialog_mousedoubleclickevent_callback != nullptr) {
            QMouseEvent* cbval1 = event;

            qcolordialog_mousedoubleclickevent_callback(this, cbval1);
        } else {
            QColorDialog::mouseDoubleClickEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseMoveEvent(QMouseEvent* event) override {
        if (qcolordialog_mousemoveevent_isbase) {
            qcolordialog_mousemoveevent_isbase = false;
            QColorDialog::mouseMoveEvent(event);
        } else if (qcolordialog_mousemoveevent_callback != nullptr) {
            QMouseEvent* cbval1 = event;

            qcolordialog_mousemoveevent_callback(this, cbval1);
        } else {
            QColorDialog::mouseMoveEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void wheelEvent(QWheelEvent* event) override {
        if (qcolordialog_wheelevent_isbase) {
            qcolordialog_wheelevent_isbase = false;
            QColorDialog::wheelEvent(event);
        } else if (qcolordialog_wheelevent_callback != nullptr) {
            QWheelEvent* cbval1 = event;

            qcolordialog_wheelevent_callback(this, cbval1);
        } else {
            QColorDialog::wheelEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void keyReleaseEvent(QKeyEvent* event) override {
        if (qcolordialog_keyreleaseevent_isbase) {
            qcolordialog_keyreleaseevent_isbase = false;
            QColorDialog::keyReleaseEvent(event);
        } else if (qcolordialog_keyreleaseevent_callback != nullptr) {
            QKeyEvent* cbval1 = event;

            qcolordialog_keyreleaseevent_callback(this, cbval1);
        } else {
            QColorDialog::keyReleaseEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void focusInEvent(QFocusEvent* event) override {
        if (qcolordialog_focusinevent_isbase) {
            qcolordialog_focusinevent_isbase = false;
            QColorDialog::focusInEvent(event);
        } else if (qcolordialog_focusinevent_callback != nullptr) {
            QFocusEvent* cbval1 = event;

            qcolordialog_focusinevent_callback(this, cbval1);
        } else {
            QColorDialog::focusInEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void focusOutEvent(QFocusEvent* event) override {
        if (qcolordialog_focusoutevent_isbase) {
            qcolordialog_focusoutevent_isbase = false;
            QColorDialog::focusOutEvent(event);
        } else if (qcolordialog_focusoutevent_callback != nullptr) {
            QFocusEvent* cbval1 = event;

            qcolordialog_focusoutevent_callback(this, cbval1);
        } else {
            QColorDialog::focusOutEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void enterEvent(QEnterEvent* event) override {
        if (qcolordialog_enterevent_isbase) {
            qcolordialog_enterevent_isbase = false;
            QColorDialog::enterEvent(event);
        } else if (qcolordialog_enterevent_callback != nullptr) {
            QEnterEvent* cbval1 = event;

            qcolordialog_enterevent_callback(this, cbval1);
        } else {
            QColorDialog::enterEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void leaveEvent(QEvent* event) override {
        if (qcolordialog_leaveevent_isbase) {
            qcolordialog_leaveevent_isbase = false;
            QColorDialog::leaveEvent(event);
        } else if (qcolordialog_leaveevent_callback != nullptr) {
            QEvent* cbval1 = event;

            qcolordialog_leaveevent_callback(this, cbval1);
        } else {
            QColorDialog::leaveEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void paintEvent(QPaintEvent* event) override {
        if (qcolordialog_paintevent_isbase) {
            qcolordialog_paintevent_isbase = false;
            QColorDialog::paintEvent(event);
        } else if (qcolordialog_paintevent_callback != nullptr) {
            QPaintEvent* cbval1 = event;

            qcolordialog_paintevent_callback(this, cbval1);
        } else {
            QColorDialog::paintEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void moveEvent(QMoveEvent* event) override {
        if (qcolordialog_moveevent_isbase) {
            qcolordialog_moveevent_isbase = false;
            QColorDialog::moveEvent(event);
        } else if (qcolordialog_moveevent_callback != nullptr) {
            QMoveEvent* cbval1 = event;

            qcolordialog_moveevent_callback(this, cbval1);
        } else {
            QColorDialog::moveEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void tabletEvent(QTabletEvent* event) override {
        if (qcolordialog_tabletevent_isbase) {
            qcolordialog_tabletevent_isbase = false;
            QColorDialog::tabletEvent(event);
        } else if (qcolordialog_tabletevent_callback != nullptr) {
            QTabletEvent* cbval1 = event;

            qcolordialog_tabletevent_callback(this, cbval1);
        } else {
            QColorDialog::tabletEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void actionEvent(QActionEvent* event) override {
        if (qcolordialog_actionevent_isbase) {
            qcolordialog_actionevent_isbase = false;
            QColorDialog::actionEvent(event);
        } else if (qcolordialog_actionevent_callback != nullptr) {
            QActionEvent* cbval1 = event;

            qcolordialog_actionevent_callback(this, cbval1);
        } else {
            QColorDialog::actionEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragEnterEvent(QDragEnterEvent* event) override {
        if (qcolordialog_dragenterevent_isbase) {
            qcolordialog_dragenterevent_isbase = false;
            QColorDialog::dragEnterEvent(event);
        } else if (qcolordialog_dragenterevent_callback != nullptr) {
            QDragEnterEvent* cbval1 = event;

            qcolordialog_dragenterevent_callback(this, cbval1);
        } else {
            QColorDialog::dragEnterEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragMoveEvent(QDragMoveEvent* event) override {
        if (qcolordialog_dragmoveevent_isbase) {
            qcolordialog_dragmoveevent_isbase = false;
            QColorDialog::dragMoveEvent(event);
        } else if (qcolordialog_dragmoveevent_callback != nullptr) {
            QDragMoveEvent* cbval1 = event;

            qcolordialog_dragmoveevent_callback(this, cbval1);
        } else {
            QColorDialog::dragMoveEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragLeaveEvent(QDragLeaveEvent* event) override {
        if (qcolordialog_dragleaveevent_isbase) {
            qcolordialog_dragleaveevent_isbase = false;
            QColorDialog::dragLeaveEvent(event);
        } else if (qcolordialog_dragleaveevent_callback != nullptr) {
            QDragLeaveEvent* cbval1 = event;

            qcolordialog_dragleaveevent_callback(this, cbval1);
        } else {
            QColorDialog::dragLeaveEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void dropEvent(QDropEvent* event) override {
        if (qcolordialog_dropevent_isbase) {
            qcolordialog_dropevent_isbase = false;
            QColorDialog::dropEvent(event);
        } else if (qcolordialog_dropevent_callback != nullptr) {
            QDropEvent* cbval1 = event;

            qcolordialog_dropevent_callback(this, cbval1);
        } else {
            QColorDialog::dropEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void hideEvent(QHideEvent* event) override {
        if (qcolordialog_hideevent_isbase) {
            qcolordialog_hideevent_isbase = false;
            QColorDialog::hideEvent(event);
        } else if (qcolordialog_hideevent_callback != nullptr) {
            QHideEvent* cbval1 = event;

            qcolordialog_hideevent_callback(this, cbval1);
        } else {
            QColorDialog::hideEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool nativeEvent(const QByteArray& eventType, void* message, qintptr* result) override {
        if (qcolordialog_nativeevent_isbase) {
            qcolordialog_nativeevent_isbase = false;
            return QColorDialog::nativeEvent(eventType, message, result);
        } else if (qcolordialog_nativeevent_callback != nullptr) {
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

            bool callback_ret = qcolordialog_nativeevent_callback(this, cbval1, cbval2, cbval3);
            return callback_ret;
        } else {
            return QColorDialog::nativeEvent(eventType, message, result);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual int metric(QPaintDevice::PaintDeviceMetric param1) const override {
        if (qcolordialog_metric_isbase) {
            qcolordialog_metric_isbase = false;
            return QColorDialog::metric(param1);
        } else if (qcolordialog_metric_callback != nullptr) {
            int cbval1 = static_cast<int>(param1);

            int callback_ret = qcolordialog_metric_callback(this, cbval1);
            return static_cast<int>(callback_ret);
        } else {
            return QColorDialog::metric(param1);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void initPainter(QPainter* painter) const override {
        if (qcolordialog_initpainter_isbase) {
            qcolordialog_initpainter_isbase = false;
            QColorDialog::initPainter(painter);
        } else if (qcolordialog_initpainter_callback != nullptr) {
            QPainter* cbval1 = painter;

            qcolordialog_initpainter_callback(this, cbval1);
        } else {
            QColorDialog::initPainter(painter);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QPaintDevice* redirected(QPoint* offset) const override {
        if (qcolordialog_redirected_isbase) {
            qcolordialog_redirected_isbase = false;
            return QColorDialog::redirected(offset);
        } else if (qcolordialog_redirected_callback != nullptr) {
            QPoint* cbval1 = offset;

            QPaintDevice* callback_ret = qcolordialog_redirected_callback(this, cbval1);
            return callback_ret;
        } else {
            return QColorDialog::redirected(offset);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QPainter* sharedPainter() const override {
        if (qcolordialog_sharedpainter_isbase) {
            qcolordialog_sharedpainter_isbase = false;
            return QColorDialog::sharedPainter();
        } else if (qcolordialog_sharedpainter_callback != nullptr) {
            QPainter* callback_ret = qcolordialog_sharedpainter_callback();
            return callback_ret;
        } else {
            return QColorDialog::sharedPainter();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void inputMethodEvent(QInputMethodEvent* param1) override {
        if (qcolordialog_inputmethodevent_isbase) {
            qcolordialog_inputmethodevent_isbase = false;
            QColorDialog::inputMethodEvent(param1);
        } else if (qcolordialog_inputmethodevent_callback != nullptr) {
            QInputMethodEvent* cbval1 = param1;

            qcolordialog_inputmethodevent_callback(this, cbval1);
        } else {
            QColorDialog::inputMethodEvent(param1);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QVariant inputMethodQuery(Qt::InputMethodQuery param1) const override {
        if (qcolordialog_inputmethodquery_isbase) {
            qcolordialog_inputmethodquery_isbase = false;
            return QColorDialog::inputMethodQuery(param1);
        } else if (qcolordialog_inputmethodquery_callback != nullptr) {
            int cbval1 = static_cast<int>(param1);

            QVariant* callback_ret = qcolordialog_inputmethodquery_callback(this, cbval1);
            return *callback_ret;
        } else {
            return QColorDialog::inputMethodQuery(param1);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool focusNextPrevChild(bool next) override {
        if (qcolordialog_focusnextprevchild_isbase) {
            qcolordialog_focusnextprevchild_isbase = false;
            return QColorDialog::focusNextPrevChild(next);
        } else if (qcolordialog_focusnextprevchild_callback != nullptr) {
            bool cbval1 = next;

            bool callback_ret = qcolordialog_focusnextprevchild_callback(this, cbval1);
            return callback_ret;
        } else {
            return QColorDialog::focusNextPrevChild(next);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (qcolordialog_timerevent_isbase) {
            qcolordialog_timerevent_isbase = false;
            QColorDialog::timerEvent(event);
        } else if (qcolordialog_timerevent_callback != nullptr) {
            QTimerEvent* cbval1 = event;

            qcolordialog_timerevent_callback(this, cbval1);
        } else {
            QColorDialog::timerEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (qcolordialog_childevent_isbase) {
            qcolordialog_childevent_isbase = false;
            QColorDialog::childEvent(event);
        } else if (qcolordialog_childevent_callback != nullptr) {
            QChildEvent* cbval1 = event;

            qcolordialog_childevent_callback(this, cbval1);
        } else {
            QColorDialog::childEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (qcolordialog_customevent_isbase) {
            qcolordialog_customevent_isbase = false;
            QColorDialog::customEvent(event);
        } else if (qcolordialog_customevent_callback != nullptr) {
            QEvent* cbval1 = event;

            qcolordialog_customevent_callback(this, cbval1);
        } else {
            QColorDialog::customEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (qcolordialog_connectnotify_isbase) {
            qcolordialog_connectnotify_isbase = false;
            QColorDialog::connectNotify(signal);
        } else if (qcolordialog_connectnotify_callback != nullptr) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            qcolordialog_connectnotify_callback(this, cbval1);
        } else {
            QColorDialog::connectNotify(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (qcolordialog_disconnectnotify_isbase) {
            qcolordialog_disconnectnotify_isbase = false;
            QColorDialog::disconnectNotify(signal);
        } else if (qcolordialog_disconnectnotify_callback != nullptr) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            qcolordialog_disconnectnotify_callback(this, cbval1);
        } else {
            QColorDialog::disconnectNotify(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    void adjustPosition(QWidget* param1) {
        if (qcolordialog_adjustposition_isbase) {
            qcolordialog_adjustposition_isbase = false;
            QColorDialog::adjustPosition(param1);
        } else if (qcolordialog_adjustposition_callback != nullptr) {
            QWidget* cbval1 = param1;

            qcolordialog_adjustposition_callback(this, cbval1);
        } else {
            QColorDialog::adjustPosition(param1);
        }
    }

    // Virtual method for C ABI access and custom callback
    void updateMicroFocus() {
        if (qcolordialog_updatemicrofocus_isbase) {
            qcolordialog_updatemicrofocus_isbase = false;
            QColorDialog::updateMicroFocus();
        } else if (qcolordialog_updatemicrofocus_callback != nullptr) {
            qcolordialog_updatemicrofocus_callback();
        } else {
            QColorDialog::updateMicroFocus();
        }
    }

    // Virtual method for C ABI access and custom callback
    void create() {
        if (qcolordialog_create_isbase) {
            qcolordialog_create_isbase = false;
            QColorDialog::create();
        } else if (qcolordialog_create_callback != nullptr) {
            qcolordialog_create_callback();
        } else {
            QColorDialog::create();
        }
    }

    // Virtual method for C ABI access and custom callback
    void destroy() {
        if (qcolordialog_destroy_isbase) {
            qcolordialog_destroy_isbase = false;
            QColorDialog::destroy();
        } else if (qcolordialog_destroy_callback != nullptr) {
            qcolordialog_destroy_callback();
        } else {
            QColorDialog::destroy();
        }
    }

    // Virtual method for C ABI access and custom callback
    bool focusNextChild() {
        if (qcolordialog_focusnextchild_isbase) {
            qcolordialog_focusnextchild_isbase = false;
            return QColorDialog::focusNextChild();
        } else if (qcolordialog_focusnextchild_callback != nullptr) {
            bool callback_ret = qcolordialog_focusnextchild_callback();
            return callback_ret;
        } else {
            return QColorDialog::focusNextChild();
        }
    }

    // Virtual method for C ABI access and custom callback
    bool focusPreviousChild() {
        if (qcolordialog_focuspreviouschild_isbase) {
            qcolordialog_focuspreviouschild_isbase = false;
            return QColorDialog::focusPreviousChild();
        } else if (qcolordialog_focuspreviouschild_callback != nullptr) {
            bool callback_ret = qcolordialog_focuspreviouschild_callback();
            return callback_ret;
        } else {
            return QColorDialog::focusPreviousChild();
        }
    }

    // Virtual method for C ABI access and custom callback
    QObject* sender() const {
        if (qcolordialog_sender_isbase) {
            qcolordialog_sender_isbase = false;
            return QColorDialog::sender();
        } else if (qcolordialog_sender_callback != nullptr) {
            QObject* callback_ret = qcolordialog_sender_callback();
            return callback_ret;
        } else {
            return QColorDialog::sender();
        }
    }

    // Virtual method for C ABI access and custom callback
    int senderSignalIndex() const {
        if (qcolordialog_sendersignalindex_isbase) {
            qcolordialog_sendersignalindex_isbase = false;
            return QColorDialog::senderSignalIndex();
        } else if (qcolordialog_sendersignalindex_callback != nullptr) {
            int callback_ret = qcolordialog_sendersignalindex_callback();
            return static_cast<int>(callback_ret);
        } else {
            return QColorDialog::senderSignalIndex();
        }
    }

    // Virtual method for C ABI access and custom callback
    int receivers(const char* signal) const {
        if (qcolordialog_receivers_isbase) {
            qcolordialog_receivers_isbase = false;
            return QColorDialog::receivers(signal);
        } else if (qcolordialog_receivers_callback != nullptr) {
            const char* cbval1 = (const char*)signal;

            int callback_ret = qcolordialog_receivers_callback(this, cbval1);
            return static_cast<int>(callback_ret);
        } else {
            return QColorDialog::receivers(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    bool isSignalConnected(const QMetaMethod& signal) const {
        if (qcolordialog_issignalconnected_isbase) {
            qcolordialog_issignalconnected_isbase = false;
            return QColorDialog::isSignalConnected(signal);
        } else if (qcolordialog_issignalconnected_callback != nullptr) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            bool callback_ret = qcolordialog_issignalconnected_callback(this, cbval1);
            return callback_ret;
        } else {
            return QColorDialog::isSignalConnected(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    double getDecodedMetricF(QPaintDevice::PaintDeviceMetric metricA, QPaintDevice::PaintDeviceMetric metricB) const {
        if (qcolordialog_getdecodedmetricf_isbase) {
            qcolordialog_getdecodedmetricf_isbase = false;
            return QColorDialog::getDecodedMetricF(metricA, metricB);
        } else if (qcolordialog_getdecodedmetricf_callback != nullptr) {
            int cbval1 = static_cast<int>(metricA);
            int cbval2 = static_cast<int>(metricB);

            double callback_ret = qcolordialog_getdecodedmetricf_callback(this, cbval1, cbval2);
            return static_cast<double>(callback_ret);
        } else {
            return QColorDialog::getDecodedMetricF(metricA, metricB);
        }
    }

    // Friend functions
    friend void QColorDialog_ChangeEvent(QColorDialog* self, QEvent* event);
    friend void QColorDialog_QBaseChangeEvent(QColorDialog* self, QEvent* event);
    friend void QColorDialog_Done(QColorDialog* self, int result);
    friend void QColorDialog_QBaseDone(QColorDialog* self, int result);
    friend void QColorDialog_KeyPressEvent(QColorDialog* self, QKeyEvent* param1);
    friend void QColorDialog_QBaseKeyPressEvent(QColorDialog* self, QKeyEvent* param1);
    friend void QColorDialog_CloseEvent(QColorDialog* self, QCloseEvent* param1);
    friend void QColorDialog_QBaseCloseEvent(QColorDialog* self, QCloseEvent* param1);
    friend void QColorDialog_ShowEvent(QColorDialog* self, QShowEvent* param1);
    friend void QColorDialog_QBaseShowEvent(QColorDialog* self, QShowEvent* param1);
    friend void QColorDialog_ResizeEvent(QColorDialog* self, QResizeEvent* param1);
    friend void QColorDialog_QBaseResizeEvent(QColorDialog* self, QResizeEvent* param1);
    friend void QColorDialog_ContextMenuEvent(QColorDialog* self, QContextMenuEvent* param1);
    friend void QColorDialog_QBaseContextMenuEvent(QColorDialog* self, QContextMenuEvent* param1);
    friend bool QColorDialog_EventFilter(QColorDialog* self, QObject* param1, QEvent* param2);
    friend bool QColorDialog_QBaseEventFilter(QColorDialog* self, QObject* param1, QEvent* param2);
    friend bool QColorDialog_Event(QColorDialog* self, QEvent* event);
    friend bool QColorDialog_QBaseEvent(QColorDialog* self, QEvent* event);
    friend void QColorDialog_MousePressEvent(QColorDialog* self, QMouseEvent* event);
    friend void QColorDialog_QBaseMousePressEvent(QColorDialog* self, QMouseEvent* event);
    friend void QColorDialog_MouseReleaseEvent(QColorDialog* self, QMouseEvent* event);
    friend void QColorDialog_QBaseMouseReleaseEvent(QColorDialog* self, QMouseEvent* event);
    friend void QColorDialog_MouseDoubleClickEvent(QColorDialog* self, QMouseEvent* event);
    friend void QColorDialog_QBaseMouseDoubleClickEvent(QColorDialog* self, QMouseEvent* event);
    friend void QColorDialog_MouseMoveEvent(QColorDialog* self, QMouseEvent* event);
    friend void QColorDialog_QBaseMouseMoveEvent(QColorDialog* self, QMouseEvent* event);
    friend void QColorDialog_WheelEvent(QColorDialog* self, QWheelEvent* event);
    friend void QColorDialog_QBaseWheelEvent(QColorDialog* self, QWheelEvent* event);
    friend void QColorDialog_KeyReleaseEvent(QColorDialog* self, QKeyEvent* event);
    friend void QColorDialog_QBaseKeyReleaseEvent(QColorDialog* self, QKeyEvent* event);
    friend void QColorDialog_FocusInEvent(QColorDialog* self, QFocusEvent* event);
    friend void QColorDialog_QBaseFocusInEvent(QColorDialog* self, QFocusEvent* event);
    friend void QColorDialog_FocusOutEvent(QColorDialog* self, QFocusEvent* event);
    friend void QColorDialog_QBaseFocusOutEvent(QColorDialog* self, QFocusEvent* event);
    friend void QColorDialog_EnterEvent(QColorDialog* self, QEnterEvent* event);
    friend void QColorDialog_QBaseEnterEvent(QColorDialog* self, QEnterEvent* event);
    friend void QColorDialog_LeaveEvent(QColorDialog* self, QEvent* event);
    friend void QColorDialog_QBaseLeaveEvent(QColorDialog* self, QEvent* event);
    friend void QColorDialog_PaintEvent(QColorDialog* self, QPaintEvent* event);
    friend void QColorDialog_QBasePaintEvent(QColorDialog* self, QPaintEvent* event);
    friend void QColorDialog_MoveEvent(QColorDialog* self, QMoveEvent* event);
    friend void QColorDialog_QBaseMoveEvent(QColorDialog* self, QMoveEvent* event);
    friend void QColorDialog_TabletEvent(QColorDialog* self, QTabletEvent* event);
    friend void QColorDialog_QBaseTabletEvent(QColorDialog* self, QTabletEvent* event);
    friend void QColorDialog_ActionEvent(QColorDialog* self, QActionEvent* event);
    friend void QColorDialog_QBaseActionEvent(QColorDialog* self, QActionEvent* event);
    friend void QColorDialog_DragEnterEvent(QColorDialog* self, QDragEnterEvent* event);
    friend void QColorDialog_QBaseDragEnterEvent(QColorDialog* self, QDragEnterEvent* event);
    friend void QColorDialog_DragMoveEvent(QColorDialog* self, QDragMoveEvent* event);
    friend void QColorDialog_QBaseDragMoveEvent(QColorDialog* self, QDragMoveEvent* event);
    friend void QColorDialog_DragLeaveEvent(QColorDialog* self, QDragLeaveEvent* event);
    friend void QColorDialog_QBaseDragLeaveEvent(QColorDialog* self, QDragLeaveEvent* event);
    friend void QColorDialog_DropEvent(QColorDialog* self, QDropEvent* event);
    friend void QColorDialog_QBaseDropEvent(QColorDialog* self, QDropEvent* event);
    friend void QColorDialog_HideEvent(QColorDialog* self, QHideEvent* event);
    friend void QColorDialog_QBaseHideEvent(QColorDialog* self, QHideEvent* event);
    friend bool QColorDialog_NativeEvent(QColorDialog* self, const libqt_string eventType, void* message, intptr_t* result);
    friend bool QColorDialog_QBaseNativeEvent(QColorDialog* self, const libqt_string eventType, void* message, intptr_t* result);
    friend int QColorDialog_Metric(const QColorDialog* self, int param1);
    friend int QColorDialog_QBaseMetric(const QColorDialog* self, int param1);
    friend void QColorDialog_InitPainter(const QColorDialog* self, QPainter* painter);
    friend void QColorDialog_QBaseInitPainter(const QColorDialog* self, QPainter* painter);
    friend QPaintDevice* QColorDialog_Redirected(const QColorDialog* self, QPoint* offset);
    friend QPaintDevice* QColorDialog_QBaseRedirected(const QColorDialog* self, QPoint* offset);
    friend QPainter* QColorDialog_SharedPainter(const QColorDialog* self);
    friend QPainter* QColorDialog_QBaseSharedPainter(const QColorDialog* self);
    friend void QColorDialog_InputMethodEvent(QColorDialog* self, QInputMethodEvent* param1);
    friend void QColorDialog_QBaseInputMethodEvent(QColorDialog* self, QInputMethodEvent* param1);
    friend bool QColorDialog_FocusNextPrevChild(QColorDialog* self, bool next);
    friend bool QColorDialog_QBaseFocusNextPrevChild(QColorDialog* self, bool next);
    friend void QColorDialog_TimerEvent(QColorDialog* self, QTimerEvent* event);
    friend void QColorDialog_QBaseTimerEvent(QColorDialog* self, QTimerEvent* event);
    friend void QColorDialog_ChildEvent(QColorDialog* self, QChildEvent* event);
    friend void QColorDialog_QBaseChildEvent(QColorDialog* self, QChildEvent* event);
    friend void QColorDialog_CustomEvent(QColorDialog* self, QEvent* event);
    friend void QColorDialog_QBaseCustomEvent(QColorDialog* self, QEvent* event);
    friend void QColorDialog_ConnectNotify(QColorDialog* self, const QMetaMethod* signal);
    friend void QColorDialog_QBaseConnectNotify(QColorDialog* self, const QMetaMethod* signal);
    friend void QColorDialog_DisconnectNotify(QColorDialog* self, const QMetaMethod* signal);
    friend void QColorDialog_QBaseDisconnectNotify(QColorDialog* self, const QMetaMethod* signal);
    friend void QColorDialog_AdjustPosition(QColorDialog* self, QWidget* param1);
    friend void QColorDialog_QBaseAdjustPosition(QColorDialog* self, QWidget* param1);
    friend void QColorDialog_UpdateMicroFocus(QColorDialog* self);
    friend void QColorDialog_QBaseUpdateMicroFocus(QColorDialog* self);
    friend void QColorDialog_Create(QColorDialog* self);
    friend void QColorDialog_QBaseCreate(QColorDialog* self);
    friend void QColorDialog_Destroy(QColorDialog* self);
    friend void QColorDialog_QBaseDestroy(QColorDialog* self);
    friend bool QColorDialog_FocusNextChild(QColorDialog* self);
    friend bool QColorDialog_QBaseFocusNextChild(QColorDialog* self);
    friend bool QColorDialog_FocusPreviousChild(QColorDialog* self);
    friend bool QColorDialog_QBaseFocusPreviousChild(QColorDialog* self);
    friend QObject* QColorDialog_Sender(const QColorDialog* self);
    friend QObject* QColorDialog_QBaseSender(const QColorDialog* self);
    friend int QColorDialog_SenderSignalIndex(const QColorDialog* self);
    friend int QColorDialog_QBaseSenderSignalIndex(const QColorDialog* self);
    friend int QColorDialog_Receivers(const QColorDialog* self, const char* signal);
    friend int QColorDialog_QBaseReceivers(const QColorDialog* self, const char* signal);
    friend bool QColorDialog_IsSignalConnected(const QColorDialog* self, const QMetaMethod* signal);
    friend bool QColorDialog_QBaseIsSignalConnected(const QColorDialog* self, const QMetaMethod* signal);
    friend double QColorDialog_GetDecodedMetricF(const QColorDialog* self, int metricA, int metricB);
    friend double QColorDialog_QBaseGetDecodedMetricF(const QColorDialog* self, int metricA, int metricB);
};

#endif
