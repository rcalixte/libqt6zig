#pragma once
#ifndef SRCC_LIBVIRTUALQINPUTDIALOG_H
#define SRCC_LIBVIRTUALQINPUTDIALOG_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"

// This class is a subclass of QInputDialog so that we can call protected methods
class VirtualQInputDialog final : public QInputDialog {

  public:
    // Virtual class boolean flag
    bool isVirtualQInputDialog = true;

    // Virtual class public types (including callbacks)
    using QInputDialog_Metacall_Callback = int (*)(QInputDialog*, int, int, void**);
    using QInputDialog_MinimumSizeHint_Callback = QSize* (*)();
    using QInputDialog_SizeHint_Callback = QSize* (*)();
    using QInputDialog_SetVisible_Callback = void (*)(QInputDialog*, bool);
    using QInputDialog_Done_Callback = void (*)(QInputDialog*, int);
    using QInputDialog_Open_Callback = void (*)();
    using QInputDialog_Exec_Callback = int (*)();
    using QInputDialog_Accept_Callback = void (*)();
    using QInputDialog_Reject_Callback = void (*)();
    using QInputDialog_KeyPressEvent_Callback = void (*)(QInputDialog*, QKeyEvent*);
    using QInputDialog_CloseEvent_Callback = void (*)(QInputDialog*, QCloseEvent*);
    using QInputDialog_ShowEvent_Callback = void (*)(QInputDialog*, QShowEvent*);
    using QInputDialog_ResizeEvent_Callback = void (*)(QInputDialog*, QResizeEvent*);
    using QInputDialog_ContextMenuEvent_Callback = void (*)(QInputDialog*, QContextMenuEvent*);
    using QInputDialog_EventFilter_Callback = bool (*)(QInputDialog*, QObject*, QEvent*);
    using QInputDialog_DevType_Callback = int (*)();
    using QInputDialog_HeightForWidth_Callback = int (*)(const QInputDialog*, int);
    using QInputDialog_HasHeightForWidth_Callback = bool (*)();
    using QInputDialog_PaintEngine_Callback = QPaintEngine* (*)();
    using QInputDialog_Event_Callback = bool (*)(QInputDialog*, QEvent*);
    using QInputDialog_MousePressEvent_Callback = void (*)(QInputDialog*, QMouseEvent*);
    using QInputDialog_MouseReleaseEvent_Callback = void (*)(QInputDialog*, QMouseEvent*);
    using QInputDialog_MouseDoubleClickEvent_Callback = void (*)(QInputDialog*, QMouseEvent*);
    using QInputDialog_MouseMoveEvent_Callback = void (*)(QInputDialog*, QMouseEvent*);
    using QInputDialog_WheelEvent_Callback = void (*)(QInputDialog*, QWheelEvent*);
    using QInputDialog_KeyReleaseEvent_Callback = void (*)(QInputDialog*, QKeyEvent*);
    using QInputDialog_FocusInEvent_Callback = void (*)(QInputDialog*, QFocusEvent*);
    using QInputDialog_FocusOutEvent_Callback = void (*)(QInputDialog*, QFocusEvent*);
    using QInputDialog_EnterEvent_Callback = void (*)(QInputDialog*, QEnterEvent*);
    using QInputDialog_LeaveEvent_Callback = void (*)(QInputDialog*, QEvent*);
    using QInputDialog_PaintEvent_Callback = void (*)(QInputDialog*, QPaintEvent*);
    using QInputDialog_MoveEvent_Callback = void (*)(QInputDialog*, QMoveEvent*);
    using QInputDialog_TabletEvent_Callback = void (*)(QInputDialog*, QTabletEvent*);
    using QInputDialog_ActionEvent_Callback = void (*)(QInputDialog*, QActionEvent*);
    using QInputDialog_DragEnterEvent_Callback = void (*)(QInputDialog*, QDragEnterEvent*);
    using QInputDialog_DragMoveEvent_Callback = void (*)(QInputDialog*, QDragMoveEvent*);
    using QInputDialog_DragLeaveEvent_Callback = void (*)(QInputDialog*, QDragLeaveEvent*);
    using QInputDialog_DropEvent_Callback = void (*)(QInputDialog*, QDropEvent*);
    using QInputDialog_HideEvent_Callback = void (*)(QInputDialog*, QHideEvent*);
    using QInputDialog_NativeEvent_Callback = bool (*)(QInputDialog*, libqt_string, void*, intptr_t*);
    using QInputDialog_ChangeEvent_Callback = void (*)(QInputDialog*, QEvent*);
    using QInputDialog_Metric_Callback = int (*)(const QInputDialog*, int);
    using QInputDialog_InitPainter_Callback = void (*)(const QInputDialog*, QPainter*);
    using QInputDialog_Redirected_Callback = QPaintDevice* (*)(const QInputDialog*, QPoint*);
    using QInputDialog_SharedPainter_Callback = QPainter* (*)();
    using QInputDialog_InputMethodEvent_Callback = void (*)(QInputDialog*, QInputMethodEvent*);
    using QInputDialog_InputMethodQuery_Callback = QVariant* (*)(const QInputDialog*, int);
    using QInputDialog_FocusNextPrevChild_Callback = bool (*)(QInputDialog*, bool);
    using QInputDialog_TimerEvent_Callback = void (*)(QInputDialog*, QTimerEvent*);
    using QInputDialog_ChildEvent_Callback = void (*)(QInputDialog*, QChildEvent*);
    using QInputDialog_CustomEvent_Callback = void (*)(QInputDialog*, QEvent*);
    using QInputDialog_ConnectNotify_Callback = void (*)(QInputDialog*, QMetaMethod*);
    using QInputDialog_DisconnectNotify_Callback = void (*)(QInputDialog*, QMetaMethod*);
    using QInputDialog_AdjustPosition_Callback = void (*)(QInputDialog*, QWidget*);
    using QInputDialog_UpdateMicroFocus_Callback = void (*)();
    using QInputDialog_Create_Callback = void (*)();
    using QInputDialog_Destroy_Callback = void (*)();
    using QInputDialog_FocusNextChild_Callback = bool (*)();
    using QInputDialog_FocusPreviousChild_Callback = bool (*)();
    using QInputDialog_Sender_Callback = QObject* (*)();
    using QInputDialog_SenderSignalIndex_Callback = int (*)();
    using QInputDialog_Receivers_Callback = int (*)(const QInputDialog*, const char*);
    using QInputDialog_IsSignalConnected_Callback = bool (*)(const QInputDialog*, QMetaMethod*);
    using QInputDialog_GetDecodedMetricF_Callback = double (*)(const QInputDialog*, int, int);

  protected:
    // Instance callback storage
    QInputDialog_Metacall_Callback qinputdialog_metacall_callback = nullptr;
    QInputDialog_MinimumSizeHint_Callback qinputdialog_minimumsizehint_callback = nullptr;
    QInputDialog_SizeHint_Callback qinputdialog_sizehint_callback = nullptr;
    QInputDialog_SetVisible_Callback qinputdialog_setvisible_callback = nullptr;
    QInputDialog_Done_Callback qinputdialog_done_callback = nullptr;
    QInputDialog_Open_Callback qinputdialog_open_callback = nullptr;
    QInputDialog_Exec_Callback qinputdialog_exec_callback = nullptr;
    QInputDialog_Accept_Callback qinputdialog_accept_callback = nullptr;
    QInputDialog_Reject_Callback qinputdialog_reject_callback = nullptr;
    QInputDialog_KeyPressEvent_Callback qinputdialog_keypressevent_callback = nullptr;
    QInputDialog_CloseEvent_Callback qinputdialog_closeevent_callback = nullptr;
    QInputDialog_ShowEvent_Callback qinputdialog_showevent_callback = nullptr;
    QInputDialog_ResizeEvent_Callback qinputdialog_resizeevent_callback = nullptr;
    QInputDialog_ContextMenuEvent_Callback qinputdialog_contextmenuevent_callback = nullptr;
    QInputDialog_EventFilter_Callback qinputdialog_eventfilter_callback = nullptr;
    QInputDialog_DevType_Callback qinputdialog_devtype_callback = nullptr;
    QInputDialog_HeightForWidth_Callback qinputdialog_heightforwidth_callback = nullptr;
    QInputDialog_HasHeightForWidth_Callback qinputdialog_hasheightforwidth_callback = nullptr;
    QInputDialog_PaintEngine_Callback qinputdialog_paintengine_callback = nullptr;
    QInputDialog_Event_Callback qinputdialog_event_callback = nullptr;
    QInputDialog_MousePressEvent_Callback qinputdialog_mousepressevent_callback = nullptr;
    QInputDialog_MouseReleaseEvent_Callback qinputdialog_mousereleaseevent_callback = nullptr;
    QInputDialog_MouseDoubleClickEvent_Callback qinputdialog_mousedoubleclickevent_callback = nullptr;
    QInputDialog_MouseMoveEvent_Callback qinputdialog_mousemoveevent_callback = nullptr;
    QInputDialog_WheelEvent_Callback qinputdialog_wheelevent_callback = nullptr;
    QInputDialog_KeyReleaseEvent_Callback qinputdialog_keyreleaseevent_callback = nullptr;
    QInputDialog_FocusInEvent_Callback qinputdialog_focusinevent_callback = nullptr;
    QInputDialog_FocusOutEvent_Callback qinputdialog_focusoutevent_callback = nullptr;
    QInputDialog_EnterEvent_Callback qinputdialog_enterevent_callback = nullptr;
    QInputDialog_LeaveEvent_Callback qinputdialog_leaveevent_callback = nullptr;
    QInputDialog_PaintEvent_Callback qinputdialog_paintevent_callback = nullptr;
    QInputDialog_MoveEvent_Callback qinputdialog_moveevent_callback = nullptr;
    QInputDialog_TabletEvent_Callback qinputdialog_tabletevent_callback = nullptr;
    QInputDialog_ActionEvent_Callback qinputdialog_actionevent_callback = nullptr;
    QInputDialog_DragEnterEvent_Callback qinputdialog_dragenterevent_callback = nullptr;
    QInputDialog_DragMoveEvent_Callback qinputdialog_dragmoveevent_callback = nullptr;
    QInputDialog_DragLeaveEvent_Callback qinputdialog_dragleaveevent_callback = nullptr;
    QInputDialog_DropEvent_Callback qinputdialog_dropevent_callback = nullptr;
    QInputDialog_HideEvent_Callback qinputdialog_hideevent_callback = nullptr;
    QInputDialog_NativeEvent_Callback qinputdialog_nativeevent_callback = nullptr;
    QInputDialog_ChangeEvent_Callback qinputdialog_changeevent_callback = nullptr;
    QInputDialog_Metric_Callback qinputdialog_metric_callback = nullptr;
    QInputDialog_InitPainter_Callback qinputdialog_initpainter_callback = nullptr;
    QInputDialog_Redirected_Callback qinputdialog_redirected_callback = nullptr;
    QInputDialog_SharedPainter_Callback qinputdialog_sharedpainter_callback = nullptr;
    QInputDialog_InputMethodEvent_Callback qinputdialog_inputmethodevent_callback = nullptr;
    QInputDialog_InputMethodQuery_Callback qinputdialog_inputmethodquery_callback = nullptr;
    QInputDialog_FocusNextPrevChild_Callback qinputdialog_focusnextprevchild_callback = nullptr;
    QInputDialog_TimerEvent_Callback qinputdialog_timerevent_callback = nullptr;
    QInputDialog_ChildEvent_Callback qinputdialog_childevent_callback = nullptr;
    QInputDialog_CustomEvent_Callback qinputdialog_customevent_callback = nullptr;
    QInputDialog_ConnectNotify_Callback qinputdialog_connectnotify_callback = nullptr;
    QInputDialog_DisconnectNotify_Callback qinputdialog_disconnectnotify_callback = nullptr;
    QInputDialog_AdjustPosition_Callback qinputdialog_adjustposition_callback = nullptr;
    QInputDialog_UpdateMicroFocus_Callback qinputdialog_updatemicrofocus_callback = nullptr;
    QInputDialog_Create_Callback qinputdialog_create_callback = nullptr;
    QInputDialog_Destroy_Callback qinputdialog_destroy_callback = nullptr;
    QInputDialog_FocusNextChild_Callback qinputdialog_focusnextchild_callback = nullptr;
    QInputDialog_FocusPreviousChild_Callback qinputdialog_focuspreviouschild_callback = nullptr;
    QInputDialog_Sender_Callback qinputdialog_sender_callback = nullptr;
    QInputDialog_SenderSignalIndex_Callback qinputdialog_sendersignalindex_callback = nullptr;
    QInputDialog_Receivers_Callback qinputdialog_receivers_callback = nullptr;
    QInputDialog_IsSignalConnected_Callback qinputdialog_issignalconnected_callback = nullptr;
    QInputDialog_GetDecodedMetricF_Callback qinputdialog_getdecodedmetricf_callback = nullptr;

    // Instance base flags
    mutable bool qinputdialog_metacall_isbase = false;
    mutable bool qinputdialog_minimumsizehint_isbase = false;
    mutable bool qinputdialog_sizehint_isbase = false;
    mutable bool qinputdialog_setvisible_isbase = false;
    mutable bool qinputdialog_done_isbase = false;
    mutable bool qinputdialog_open_isbase = false;
    mutable bool qinputdialog_exec_isbase = false;
    mutable bool qinputdialog_accept_isbase = false;
    mutable bool qinputdialog_reject_isbase = false;
    mutable bool qinputdialog_keypressevent_isbase = false;
    mutable bool qinputdialog_closeevent_isbase = false;
    mutable bool qinputdialog_showevent_isbase = false;
    mutable bool qinputdialog_resizeevent_isbase = false;
    mutable bool qinputdialog_contextmenuevent_isbase = false;
    mutable bool qinputdialog_eventfilter_isbase = false;
    mutable bool qinputdialog_devtype_isbase = false;
    mutable bool qinputdialog_heightforwidth_isbase = false;
    mutable bool qinputdialog_hasheightforwidth_isbase = false;
    mutable bool qinputdialog_paintengine_isbase = false;
    mutable bool qinputdialog_event_isbase = false;
    mutable bool qinputdialog_mousepressevent_isbase = false;
    mutable bool qinputdialog_mousereleaseevent_isbase = false;
    mutable bool qinputdialog_mousedoubleclickevent_isbase = false;
    mutable bool qinputdialog_mousemoveevent_isbase = false;
    mutable bool qinputdialog_wheelevent_isbase = false;
    mutable bool qinputdialog_keyreleaseevent_isbase = false;
    mutable bool qinputdialog_focusinevent_isbase = false;
    mutable bool qinputdialog_focusoutevent_isbase = false;
    mutable bool qinputdialog_enterevent_isbase = false;
    mutable bool qinputdialog_leaveevent_isbase = false;
    mutable bool qinputdialog_paintevent_isbase = false;
    mutable bool qinputdialog_moveevent_isbase = false;
    mutable bool qinputdialog_tabletevent_isbase = false;
    mutable bool qinputdialog_actionevent_isbase = false;
    mutable bool qinputdialog_dragenterevent_isbase = false;
    mutable bool qinputdialog_dragmoveevent_isbase = false;
    mutable bool qinputdialog_dragleaveevent_isbase = false;
    mutable bool qinputdialog_dropevent_isbase = false;
    mutable bool qinputdialog_hideevent_isbase = false;
    mutable bool qinputdialog_nativeevent_isbase = false;
    mutable bool qinputdialog_changeevent_isbase = false;
    mutable bool qinputdialog_metric_isbase = false;
    mutable bool qinputdialog_initpainter_isbase = false;
    mutable bool qinputdialog_redirected_isbase = false;
    mutable bool qinputdialog_sharedpainter_isbase = false;
    mutable bool qinputdialog_inputmethodevent_isbase = false;
    mutable bool qinputdialog_inputmethodquery_isbase = false;
    mutable bool qinputdialog_focusnextprevchild_isbase = false;
    mutable bool qinputdialog_timerevent_isbase = false;
    mutable bool qinputdialog_childevent_isbase = false;
    mutable bool qinputdialog_customevent_isbase = false;
    mutable bool qinputdialog_connectnotify_isbase = false;
    mutable bool qinputdialog_disconnectnotify_isbase = false;
    mutable bool qinputdialog_adjustposition_isbase = false;
    mutable bool qinputdialog_updatemicrofocus_isbase = false;
    mutable bool qinputdialog_create_isbase = false;
    mutable bool qinputdialog_destroy_isbase = false;
    mutable bool qinputdialog_focusnextchild_isbase = false;
    mutable bool qinputdialog_focuspreviouschild_isbase = false;
    mutable bool qinputdialog_sender_isbase = false;
    mutable bool qinputdialog_sendersignalindex_isbase = false;
    mutable bool qinputdialog_receivers_isbase = false;
    mutable bool qinputdialog_issignalconnected_isbase = false;
    mutable bool qinputdialog_getdecodedmetricf_isbase = false;

  public:
    VirtualQInputDialog(QWidget* parent) : QInputDialog(parent) {};
    VirtualQInputDialog() : QInputDialog() {};
    VirtualQInputDialog(QWidget* parent, Qt::WindowFlags flags) : QInputDialog(parent, flags) {};

    ~VirtualQInputDialog() {
        qinputdialog_metacall_callback = nullptr;
        qinputdialog_minimumsizehint_callback = nullptr;
        qinputdialog_sizehint_callback = nullptr;
        qinputdialog_setvisible_callback = nullptr;
        qinputdialog_done_callback = nullptr;
        qinputdialog_open_callback = nullptr;
        qinputdialog_exec_callback = nullptr;
        qinputdialog_accept_callback = nullptr;
        qinputdialog_reject_callback = nullptr;
        qinputdialog_keypressevent_callback = nullptr;
        qinputdialog_closeevent_callback = nullptr;
        qinputdialog_showevent_callback = nullptr;
        qinputdialog_resizeevent_callback = nullptr;
        qinputdialog_contextmenuevent_callback = nullptr;
        qinputdialog_eventfilter_callback = nullptr;
        qinputdialog_devtype_callback = nullptr;
        qinputdialog_heightforwidth_callback = nullptr;
        qinputdialog_hasheightforwidth_callback = nullptr;
        qinputdialog_paintengine_callback = nullptr;
        qinputdialog_event_callback = nullptr;
        qinputdialog_mousepressevent_callback = nullptr;
        qinputdialog_mousereleaseevent_callback = nullptr;
        qinputdialog_mousedoubleclickevent_callback = nullptr;
        qinputdialog_mousemoveevent_callback = nullptr;
        qinputdialog_wheelevent_callback = nullptr;
        qinputdialog_keyreleaseevent_callback = nullptr;
        qinputdialog_focusinevent_callback = nullptr;
        qinputdialog_focusoutevent_callback = nullptr;
        qinputdialog_enterevent_callback = nullptr;
        qinputdialog_leaveevent_callback = nullptr;
        qinputdialog_paintevent_callback = nullptr;
        qinputdialog_moveevent_callback = nullptr;
        qinputdialog_tabletevent_callback = nullptr;
        qinputdialog_actionevent_callback = nullptr;
        qinputdialog_dragenterevent_callback = nullptr;
        qinputdialog_dragmoveevent_callback = nullptr;
        qinputdialog_dragleaveevent_callback = nullptr;
        qinputdialog_dropevent_callback = nullptr;
        qinputdialog_hideevent_callback = nullptr;
        qinputdialog_nativeevent_callback = nullptr;
        qinputdialog_changeevent_callback = nullptr;
        qinputdialog_metric_callback = nullptr;
        qinputdialog_initpainter_callback = nullptr;
        qinputdialog_redirected_callback = nullptr;
        qinputdialog_sharedpainter_callback = nullptr;
        qinputdialog_inputmethodevent_callback = nullptr;
        qinputdialog_inputmethodquery_callback = nullptr;
        qinputdialog_focusnextprevchild_callback = nullptr;
        qinputdialog_timerevent_callback = nullptr;
        qinputdialog_childevent_callback = nullptr;
        qinputdialog_customevent_callback = nullptr;
        qinputdialog_connectnotify_callback = nullptr;
        qinputdialog_disconnectnotify_callback = nullptr;
        qinputdialog_adjustposition_callback = nullptr;
        qinputdialog_updatemicrofocus_callback = nullptr;
        qinputdialog_create_callback = nullptr;
        qinputdialog_destroy_callback = nullptr;
        qinputdialog_focusnextchild_callback = nullptr;
        qinputdialog_focuspreviouschild_callback = nullptr;
        qinputdialog_sender_callback = nullptr;
        qinputdialog_sendersignalindex_callback = nullptr;
        qinputdialog_receivers_callback = nullptr;
        qinputdialog_issignalconnected_callback = nullptr;
        qinputdialog_getdecodedmetricf_callback = nullptr;
    }

    // Callback setters
    inline void setQInputDialog_Metacall_Callback(QInputDialog_Metacall_Callback cb) { qinputdialog_metacall_callback = cb; }
    inline void setQInputDialog_MinimumSizeHint_Callback(QInputDialog_MinimumSizeHint_Callback cb) { qinputdialog_minimumsizehint_callback = cb; }
    inline void setQInputDialog_SizeHint_Callback(QInputDialog_SizeHint_Callback cb) { qinputdialog_sizehint_callback = cb; }
    inline void setQInputDialog_SetVisible_Callback(QInputDialog_SetVisible_Callback cb) { qinputdialog_setvisible_callback = cb; }
    inline void setQInputDialog_Done_Callback(QInputDialog_Done_Callback cb) { qinputdialog_done_callback = cb; }
    inline void setQInputDialog_Open_Callback(QInputDialog_Open_Callback cb) { qinputdialog_open_callback = cb; }
    inline void setQInputDialog_Exec_Callback(QInputDialog_Exec_Callback cb) { qinputdialog_exec_callback = cb; }
    inline void setQInputDialog_Accept_Callback(QInputDialog_Accept_Callback cb) { qinputdialog_accept_callback = cb; }
    inline void setQInputDialog_Reject_Callback(QInputDialog_Reject_Callback cb) { qinputdialog_reject_callback = cb; }
    inline void setQInputDialog_KeyPressEvent_Callback(QInputDialog_KeyPressEvent_Callback cb) { qinputdialog_keypressevent_callback = cb; }
    inline void setQInputDialog_CloseEvent_Callback(QInputDialog_CloseEvent_Callback cb) { qinputdialog_closeevent_callback = cb; }
    inline void setQInputDialog_ShowEvent_Callback(QInputDialog_ShowEvent_Callback cb) { qinputdialog_showevent_callback = cb; }
    inline void setQInputDialog_ResizeEvent_Callback(QInputDialog_ResizeEvent_Callback cb) { qinputdialog_resizeevent_callback = cb; }
    inline void setQInputDialog_ContextMenuEvent_Callback(QInputDialog_ContextMenuEvent_Callback cb) { qinputdialog_contextmenuevent_callback = cb; }
    inline void setQInputDialog_EventFilter_Callback(QInputDialog_EventFilter_Callback cb) { qinputdialog_eventfilter_callback = cb; }
    inline void setQInputDialog_DevType_Callback(QInputDialog_DevType_Callback cb) { qinputdialog_devtype_callback = cb; }
    inline void setQInputDialog_HeightForWidth_Callback(QInputDialog_HeightForWidth_Callback cb) { qinputdialog_heightforwidth_callback = cb; }
    inline void setQInputDialog_HasHeightForWidth_Callback(QInputDialog_HasHeightForWidth_Callback cb) { qinputdialog_hasheightforwidth_callback = cb; }
    inline void setQInputDialog_PaintEngine_Callback(QInputDialog_PaintEngine_Callback cb) { qinputdialog_paintengine_callback = cb; }
    inline void setQInputDialog_Event_Callback(QInputDialog_Event_Callback cb) { qinputdialog_event_callback = cb; }
    inline void setQInputDialog_MousePressEvent_Callback(QInputDialog_MousePressEvent_Callback cb) { qinputdialog_mousepressevent_callback = cb; }
    inline void setQInputDialog_MouseReleaseEvent_Callback(QInputDialog_MouseReleaseEvent_Callback cb) { qinputdialog_mousereleaseevent_callback = cb; }
    inline void setQInputDialog_MouseDoubleClickEvent_Callback(QInputDialog_MouseDoubleClickEvent_Callback cb) { qinputdialog_mousedoubleclickevent_callback = cb; }
    inline void setQInputDialog_MouseMoveEvent_Callback(QInputDialog_MouseMoveEvent_Callback cb) { qinputdialog_mousemoveevent_callback = cb; }
    inline void setQInputDialog_WheelEvent_Callback(QInputDialog_WheelEvent_Callback cb) { qinputdialog_wheelevent_callback = cb; }
    inline void setQInputDialog_KeyReleaseEvent_Callback(QInputDialog_KeyReleaseEvent_Callback cb) { qinputdialog_keyreleaseevent_callback = cb; }
    inline void setQInputDialog_FocusInEvent_Callback(QInputDialog_FocusInEvent_Callback cb) { qinputdialog_focusinevent_callback = cb; }
    inline void setQInputDialog_FocusOutEvent_Callback(QInputDialog_FocusOutEvent_Callback cb) { qinputdialog_focusoutevent_callback = cb; }
    inline void setQInputDialog_EnterEvent_Callback(QInputDialog_EnterEvent_Callback cb) { qinputdialog_enterevent_callback = cb; }
    inline void setQInputDialog_LeaveEvent_Callback(QInputDialog_LeaveEvent_Callback cb) { qinputdialog_leaveevent_callback = cb; }
    inline void setQInputDialog_PaintEvent_Callback(QInputDialog_PaintEvent_Callback cb) { qinputdialog_paintevent_callback = cb; }
    inline void setQInputDialog_MoveEvent_Callback(QInputDialog_MoveEvent_Callback cb) { qinputdialog_moveevent_callback = cb; }
    inline void setQInputDialog_TabletEvent_Callback(QInputDialog_TabletEvent_Callback cb) { qinputdialog_tabletevent_callback = cb; }
    inline void setQInputDialog_ActionEvent_Callback(QInputDialog_ActionEvent_Callback cb) { qinputdialog_actionevent_callback = cb; }
    inline void setQInputDialog_DragEnterEvent_Callback(QInputDialog_DragEnterEvent_Callback cb) { qinputdialog_dragenterevent_callback = cb; }
    inline void setQInputDialog_DragMoveEvent_Callback(QInputDialog_DragMoveEvent_Callback cb) { qinputdialog_dragmoveevent_callback = cb; }
    inline void setQInputDialog_DragLeaveEvent_Callback(QInputDialog_DragLeaveEvent_Callback cb) { qinputdialog_dragleaveevent_callback = cb; }
    inline void setQInputDialog_DropEvent_Callback(QInputDialog_DropEvent_Callback cb) { qinputdialog_dropevent_callback = cb; }
    inline void setQInputDialog_HideEvent_Callback(QInputDialog_HideEvent_Callback cb) { qinputdialog_hideevent_callback = cb; }
    inline void setQInputDialog_NativeEvent_Callback(QInputDialog_NativeEvent_Callback cb) { qinputdialog_nativeevent_callback = cb; }
    inline void setQInputDialog_ChangeEvent_Callback(QInputDialog_ChangeEvent_Callback cb) { qinputdialog_changeevent_callback = cb; }
    inline void setQInputDialog_Metric_Callback(QInputDialog_Metric_Callback cb) { qinputdialog_metric_callback = cb; }
    inline void setQInputDialog_InitPainter_Callback(QInputDialog_InitPainter_Callback cb) { qinputdialog_initpainter_callback = cb; }
    inline void setQInputDialog_Redirected_Callback(QInputDialog_Redirected_Callback cb) { qinputdialog_redirected_callback = cb; }
    inline void setQInputDialog_SharedPainter_Callback(QInputDialog_SharedPainter_Callback cb) { qinputdialog_sharedpainter_callback = cb; }
    inline void setQInputDialog_InputMethodEvent_Callback(QInputDialog_InputMethodEvent_Callback cb) { qinputdialog_inputmethodevent_callback = cb; }
    inline void setQInputDialog_InputMethodQuery_Callback(QInputDialog_InputMethodQuery_Callback cb) { qinputdialog_inputmethodquery_callback = cb; }
    inline void setQInputDialog_FocusNextPrevChild_Callback(QInputDialog_FocusNextPrevChild_Callback cb) { qinputdialog_focusnextprevchild_callback = cb; }
    inline void setQInputDialog_TimerEvent_Callback(QInputDialog_TimerEvent_Callback cb) { qinputdialog_timerevent_callback = cb; }
    inline void setQInputDialog_ChildEvent_Callback(QInputDialog_ChildEvent_Callback cb) { qinputdialog_childevent_callback = cb; }
    inline void setQInputDialog_CustomEvent_Callback(QInputDialog_CustomEvent_Callback cb) { qinputdialog_customevent_callback = cb; }
    inline void setQInputDialog_ConnectNotify_Callback(QInputDialog_ConnectNotify_Callback cb) { qinputdialog_connectnotify_callback = cb; }
    inline void setQInputDialog_DisconnectNotify_Callback(QInputDialog_DisconnectNotify_Callback cb) { qinputdialog_disconnectnotify_callback = cb; }
    inline void setQInputDialog_AdjustPosition_Callback(QInputDialog_AdjustPosition_Callback cb) { qinputdialog_adjustposition_callback = cb; }
    inline void setQInputDialog_UpdateMicroFocus_Callback(QInputDialog_UpdateMicroFocus_Callback cb) { qinputdialog_updatemicrofocus_callback = cb; }
    inline void setQInputDialog_Create_Callback(QInputDialog_Create_Callback cb) { qinputdialog_create_callback = cb; }
    inline void setQInputDialog_Destroy_Callback(QInputDialog_Destroy_Callback cb) { qinputdialog_destroy_callback = cb; }
    inline void setQInputDialog_FocusNextChild_Callback(QInputDialog_FocusNextChild_Callback cb) { qinputdialog_focusnextchild_callback = cb; }
    inline void setQInputDialog_FocusPreviousChild_Callback(QInputDialog_FocusPreviousChild_Callback cb) { qinputdialog_focuspreviouschild_callback = cb; }
    inline void setQInputDialog_Sender_Callback(QInputDialog_Sender_Callback cb) { qinputdialog_sender_callback = cb; }
    inline void setQInputDialog_SenderSignalIndex_Callback(QInputDialog_SenderSignalIndex_Callback cb) { qinputdialog_sendersignalindex_callback = cb; }
    inline void setQInputDialog_Receivers_Callback(QInputDialog_Receivers_Callback cb) { qinputdialog_receivers_callback = cb; }
    inline void setQInputDialog_IsSignalConnected_Callback(QInputDialog_IsSignalConnected_Callback cb) { qinputdialog_issignalconnected_callback = cb; }
    inline void setQInputDialog_GetDecodedMetricF_Callback(QInputDialog_GetDecodedMetricF_Callback cb) { qinputdialog_getdecodedmetricf_callback = cb; }

    // Base flag setters
    inline void setQInputDialog_Metacall_IsBase(bool value) const { qinputdialog_metacall_isbase = value; }
    inline void setQInputDialog_MinimumSizeHint_IsBase(bool value) const { qinputdialog_minimumsizehint_isbase = value; }
    inline void setQInputDialog_SizeHint_IsBase(bool value) const { qinputdialog_sizehint_isbase = value; }
    inline void setQInputDialog_SetVisible_IsBase(bool value) const { qinputdialog_setvisible_isbase = value; }
    inline void setQInputDialog_Done_IsBase(bool value) const { qinputdialog_done_isbase = value; }
    inline void setQInputDialog_Open_IsBase(bool value) const { qinputdialog_open_isbase = value; }
    inline void setQInputDialog_Exec_IsBase(bool value) const { qinputdialog_exec_isbase = value; }
    inline void setQInputDialog_Accept_IsBase(bool value) const { qinputdialog_accept_isbase = value; }
    inline void setQInputDialog_Reject_IsBase(bool value) const { qinputdialog_reject_isbase = value; }
    inline void setQInputDialog_KeyPressEvent_IsBase(bool value) const { qinputdialog_keypressevent_isbase = value; }
    inline void setQInputDialog_CloseEvent_IsBase(bool value) const { qinputdialog_closeevent_isbase = value; }
    inline void setQInputDialog_ShowEvent_IsBase(bool value) const { qinputdialog_showevent_isbase = value; }
    inline void setQInputDialog_ResizeEvent_IsBase(bool value) const { qinputdialog_resizeevent_isbase = value; }
    inline void setQInputDialog_ContextMenuEvent_IsBase(bool value) const { qinputdialog_contextmenuevent_isbase = value; }
    inline void setQInputDialog_EventFilter_IsBase(bool value) const { qinputdialog_eventfilter_isbase = value; }
    inline void setQInputDialog_DevType_IsBase(bool value) const { qinputdialog_devtype_isbase = value; }
    inline void setQInputDialog_HeightForWidth_IsBase(bool value) const { qinputdialog_heightforwidth_isbase = value; }
    inline void setQInputDialog_HasHeightForWidth_IsBase(bool value) const { qinputdialog_hasheightforwidth_isbase = value; }
    inline void setQInputDialog_PaintEngine_IsBase(bool value) const { qinputdialog_paintengine_isbase = value; }
    inline void setQInputDialog_Event_IsBase(bool value) const { qinputdialog_event_isbase = value; }
    inline void setQInputDialog_MousePressEvent_IsBase(bool value) const { qinputdialog_mousepressevent_isbase = value; }
    inline void setQInputDialog_MouseReleaseEvent_IsBase(bool value) const { qinputdialog_mousereleaseevent_isbase = value; }
    inline void setQInputDialog_MouseDoubleClickEvent_IsBase(bool value) const { qinputdialog_mousedoubleclickevent_isbase = value; }
    inline void setQInputDialog_MouseMoveEvent_IsBase(bool value) const { qinputdialog_mousemoveevent_isbase = value; }
    inline void setQInputDialog_WheelEvent_IsBase(bool value) const { qinputdialog_wheelevent_isbase = value; }
    inline void setQInputDialog_KeyReleaseEvent_IsBase(bool value) const { qinputdialog_keyreleaseevent_isbase = value; }
    inline void setQInputDialog_FocusInEvent_IsBase(bool value) const { qinputdialog_focusinevent_isbase = value; }
    inline void setQInputDialog_FocusOutEvent_IsBase(bool value) const { qinputdialog_focusoutevent_isbase = value; }
    inline void setQInputDialog_EnterEvent_IsBase(bool value) const { qinputdialog_enterevent_isbase = value; }
    inline void setQInputDialog_LeaveEvent_IsBase(bool value) const { qinputdialog_leaveevent_isbase = value; }
    inline void setQInputDialog_PaintEvent_IsBase(bool value) const { qinputdialog_paintevent_isbase = value; }
    inline void setQInputDialog_MoveEvent_IsBase(bool value) const { qinputdialog_moveevent_isbase = value; }
    inline void setQInputDialog_TabletEvent_IsBase(bool value) const { qinputdialog_tabletevent_isbase = value; }
    inline void setQInputDialog_ActionEvent_IsBase(bool value) const { qinputdialog_actionevent_isbase = value; }
    inline void setQInputDialog_DragEnterEvent_IsBase(bool value) const { qinputdialog_dragenterevent_isbase = value; }
    inline void setQInputDialog_DragMoveEvent_IsBase(bool value) const { qinputdialog_dragmoveevent_isbase = value; }
    inline void setQInputDialog_DragLeaveEvent_IsBase(bool value) const { qinputdialog_dragleaveevent_isbase = value; }
    inline void setQInputDialog_DropEvent_IsBase(bool value) const { qinputdialog_dropevent_isbase = value; }
    inline void setQInputDialog_HideEvent_IsBase(bool value) const { qinputdialog_hideevent_isbase = value; }
    inline void setQInputDialog_NativeEvent_IsBase(bool value) const { qinputdialog_nativeevent_isbase = value; }
    inline void setQInputDialog_ChangeEvent_IsBase(bool value) const { qinputdialog_changeevent_isbase = value; }
    inline void setQInputDialog_Metric_IsBase(bool value) const { qinputdialog_metric_isbase = value; }
    inline void setQInputDialog_InitPainter_IsBase(bool value) const { qinputdialog_initpainter_isbase = value; }
    inline void setQInputDialog_Redirected_IsBase(bool value) const { qinputdialog_redirected_isbase = value; }
    inline void setQInputDialog_SharedPainter_IsBase(bool value) const { qinputdialog_sharedpainter_isbase = value; }
    inline void setQInputDialog_InputMethodEvent_IsBase(bool value) const { qinputdialog_inputmethodevent_isbase = value; }
    inline void setQInputDialog_InputMethodQuery_IsBase(bool value) const { qinputdialog_inputmethodquery_isbase = value; }
    inline void setQInputDialog_FocusNextPrevChild_IsBase(bool value) const { qinputdialog_focusnextprevchild_isbase = value; }
    inline void setQInputDialog_TimerEvent_IsBase(bool value) const { qinputdialog_timerevent_isbase = value; }
    inline void setQInputDialog_ChildEvent_IsBase(bool value) const { qinputdialog_childevent_isbase = value; }
    inline void setQInputDialog_CustomEvent_IsBase(bool value) const { qinputdialog_customevent_isbase = value; }
    inline void setQInputDialog_ConnectNotify_IsBase(bool value) const { qinputdialog_connectnotify_isbase = value; }
    inline void setQInputDialog_DisconnectNotify_IsBase(bool value) const { qinputdialog_disconnectnotify_isbase = value; }
    inline void setQInputDialog_AdjustPosition_IsBase(bool value) const { qinputdialog_adjustposition_isbase = value; }
    inline void setQInputDialog_UpdateMicroFocus_IsBase(bool value) const { qinputdialog_updatemicrofocus_isbase = value; }
    inline void setQInputDialog_Create_IsBase(bool value) const { qinputdialog_create_isbase = value; }
    inline void setQInputDialog_Destroy_IsBase(bool value) const { qinputdialog_destroy_isbase = value; }
    inline void setQInputDialog_FocusNextChild_IsBase(bool value) const { qinputdialog_focusnextchild_isbase = value; }
    inline void setQInputDialog_FocusPreviousChild_IsBase(bool value) const { qinputdialog_focuspreviouschild_isbase = value; }
    inline void setQInputDialog_Sender_IsBase(bool value) const { qinputdialog_sender_isbase = value; }
    inline void setQInputDialog_SenderSignalIndex_IsBase(bool value) const { qinputdialog_sendersignalindex_isbase = value; }
    inline void setQInputDialog_Receivers_IsBase(bool value) const { qinputdialog_receivers_isbase = value; }
    inline void setQInputDialog_IsSignalConnected_IsBase(bool value) const { qinputdialog_issignalconnected_isbase = value; }
    inline void setQInputDialog_GetDecodedMetricF_IsBase(bool value) const { qinputdialog_getdecodedmetricf_isbase = value; }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (qinputdialog_metacall_isbase) {
            qinputdialog_metacall_isbase = false;
            return QInputDialog::qt_metacall(param1, param2, param3);
        } else if (qinputdialog_metacall_callback != nullptr) {
            int cbval1 = static_cast<int>(param1);
            int cbval2 = param2;
            void** cbval3 = param3;

            int callback_ret = qinputdialog_metacall_callback(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        } else {
            return QInputDialog::qt_metacall(param1, param2, param3);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QSize minimumSizeHint() const override {
        if (qinputdialog_minimumsizehint_isbase) {
            qinputdialog_minimumsizehint_isbase = false;
            return QInputDialog::minimumSizeHint();
        } else if (qinputdialog_minimumsizehint_callback != nullptr) {
            QSize* callback_ret = qinputdialog_minimumsizehint_callback();
            return *callback_ret;
        } else {
            return QInputDialog::minimumSizeHint();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QSize sizeHint() const override {
        if (qinputdialog_sizehint_isbase) {
            qinputdialog_sizehint_isbase = false;
            return QInputDialog::sizeHint();
        } else if (qinputdialog_sizehint_callback != nullptr) {
            QSize* callback_ret = qinputdialog_sizehint_callback();
            return *callback_ret;
        } else {
            return QInputDialog::sizeHint();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void setVisible(bool visible) override {
        if (qinputdialog_setvisible_isbase) {
            qinputdialog_setvisible_isbase = false;
            QInputDialog::setVisible(visible);
        } else if (qinputdialog_setvisible_callback != nullptr) {
            bool cbval1 = visible;

            qinputdialog_setvisible_callback(this, cbval1);
        } else {
            QInputDialog::setVisible(visible);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void done(int result) override {
        if (qinputdialog_done_isbase) {
            qinputdialog_done_isbase = false;
            QInputDialog::done(result);
        } else if (qinputdialog_done_callback != nullptr) {
            int cbval1 = result;

            qinputdialog_done_callback(this, cbval1);
        } else {
            QInputDialog::done(result);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void open() override {
        if (qinputdialog_open_isbase) {
            qinputdialog_open_isbase = false;
            QInputDialog::open();
        } else if (qinputdialog_open_callback != nullptr) {
            qinputdialog_open_callback();
        } else {
            QInputDialog::open();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual int exec() override {
        if (qinputdialog_exec_isbase) {
            qinputdialog_exec_isbase = false;
            return QInputDialog::exec();
        } else if (qinputdialog_exec_callback != nullptr) {
            int callback_ret = qinputdialog_exec_callback();
            return static_cast<int>(callback_ret);
        } else {
            return QInputDialog::exec();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void accept() override {
        if (qinputdialog_accept_isbase) {
            qinputdialog_accept_isbase = false;
            QInputDialog::accept();
        } else if (qinputdialog_accept_callback != nullptr) {
            qinputdialog_accept_callback();
        } else {
            QInputDialog::accept();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void reject() override {
        if (qinputdialog_reject_isbase) {
            qinputdialog_reject_isbase = false;
            QInputDialog::reject();
        } else if (qinputdialog_reject_callback != nullptr) {
            qinputdialog_reject_callback();
        } else {
            QInputDialog::reject();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void keyPressEvent(QKeyEvent* param1) override {
        if (qinputdialog_keypressevent_isbase) {
            qinputdialog_keypressevent_isbase = false;
            QInputDialog::keyPressEvent(param1);
        } else if (qinputdialog_keypressevent_callback != nullptr) {
            QKeyEvent* cbval1 = param1;

            qinputdialog_keypressevent_callback(this, cbval1);
        } else {
            QInputDialog::keyPressEvent(param1);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void closeEvent(QCloseEvent* param1) override {
        if (qinputdialog_closeevent_isbase) {
            qinputdialog_closeevent_isbase = false;
            QInputDialog::closeEvent(param1);
        } else if (qinputdialog_closeevent_callback != nullptr) {
            QCloseEvent* cbval1 = param1;

            qinputdialog_closeevent_callback(this, cbval1);
        } else {
            QInputDialog::closeEvent(param1);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void showEvent(QShowEvent* param1) override {
        if (qinputdialog_showevent_isbase) {
            qinputdialog_showevent_isbase = false;
            QInputDialog::showEvent(param1);
        } else if (qinputdialog_showevent_callback != nullptr) {
            QShowEvent* cbval1 = param1;

            qinputdialog_showevent_callback(this, cbval1);
        } else {
            QInputDialog::showEvent(param1);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void resizeEvent(QResizeEvent* param1) override {
        if (qinputdialog_resizeevent_isbase) {
            qinputdialog_resizeevent_isbase = false;
            QInputDialog::resizeEvent(param1);
        } else if (qinputdialog_resizeevent_callback != nullptr) {
            QResizeEvent* cbval1 = param1;

            qinputdialog_resizeevent_callback(this, cbval1);
        } else {
            QInputDialog::resizeEvent(param1);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void contextMenuEvent(QContextMenuEvent* param1) override {
        if (qinputdialog_contextmenuevent_isbase) {
            qinputdialog_contextmenuevent_isbase = false;
            QInputDialog::contextMenuEvent(param1);
        } else if (qinputdialog_contextmenuevent_callback != nullptr) {
            QContextMenuEvent* cbval1 = param1;

            qinputdialog_contextmenuevent_callback(this, cbval1);
        } else {
            QInputDialog::contextMenuEvent(param1);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* param1, QEvent* param2) override {
        if (qinputdialog_eventfilter_isbase) {
            qinputdialog_eventfilter_isbase = false;
            return QInputDialog::eventFilter(param1, param2);
        } else if (qinputdialog_eventfilter_callback != nullptr) {
            QObject* cbval1 = param1;
            QEvent* cbval2 = param2;

            bool callback_ret = qinputdialog_eventfilter_callback(this, cbval1, cbval2);
            return callback_ret;
        } else {
            return QInputDialog::eventFilter(param1, param2);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual int devType() const override {
        if (qinputdialog_devtype_isbase) {
            qinputdialog_devtype_isbase = false;
            return QInputDialog::devType();
        } else if (qinputdialog_devtype_callback != nullptr) {
            int callback_ret = qinputdialog_devtype_callback();
            return static_cast<int>(callback_ret);
        } else {
            return QInputDialog::devType();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual int heightForWidth(int param1) const override {
        if (qinputdialog_heightforwidth_isbase) {
            qinputdialog_heightforwidth_isbase = false;
            return QInputDialog::heightForWidth(param1);
        } else if (qinputdialog_heightforwidth_callback != nullptr) {
            int cbval1 = param1;

            int callback_ret = qinputdialog_heightforwidth_callback(this, cbval1);
            return static_cast<int>(callback_ret);
        } else {
            return QInputDialog::heightForWidth(param1);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool hasHeightForWidth() const override {
        if (qinputdialog_hasheightforwidth_isbase) {
            qinputdialog_hasheightforwidth_isbase = false;
            return QInputDialog::hasHeightForWidth();
        } else if (qinputdialog_hasheightforwidth_callback != nullptr) {
            bool callback_ret = qinputdialog_hasheightforwidth_callback();
            return callback_ret;
        } else {
            return QInputDialog::hasHeightForWidth();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QPaintEngine* paintEngine() const override {
        if (qinputdialog_paintengine_isbase) {
            qinputdialog_paintengine_isbase = false;
            return QInputDialog::paintEngine();
        } else if (qinputdialog_paintengine_callback != nullptr) {
            QPaintEngine* callback_ret = qinputdialog_paintengine_callback();
            return callback_ret;
        } else {
            return QInputDialog::paintEngine();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* event) override {
        if (qinputdialog_event_isbase) {
            qinputdialog_event_isbase = false;
            return QInputDialog::event(event);
        } else if (qinputdialog_event_callback != nullptr) {
            QEvent* cbval1 = event;

            bool callback_ret = qinputdialog_event_callback(this, cbval1);
            return callback_ret;
        } else {
            return QInputDialog::event(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void mousePressEvent(QMouseEvent* event) override {
        if (qinputdialog_mousepressevent_isbase) {
            qinputdialog_mousepressevent_isbase = false;
            QInputDialog::mousePressEvent(event);
        } else if (qinputdialog_mousepressevent_callback != nullptr) {
            QMouseEvent* cbval1 = event;

            qinputdialog_mousepressevent_callback(this, cbval1);
        } else {
            QInputDialog::mousePressEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseReleaseEvent(QMouseEvent* event) override {
        if (qinputdialog_mousereleaseevent_isbase) {
            qinputdialog_mousereleaseevent_isbase = false;
            QInputDialog::mouseReleaseEvent(event);
        } else if (qinputdialog_mousereleaseevent_callback != nullptr) {
            QMouseEvent* cbval1 = event;

            qinputdialog_mousereleaseevent_callback(this, cbval1);
        } else {
            QInputDialog::mouseReleaseEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseDoubleClickEvent(QMouseEvent* event) override {
        if (qinputdialog_mousedoubleclickevent_isbase) {
            qinputdialog_mousedoubleclickevent_isbase = false;
            QInputDialog::mouseDoubleClickEvent(event);
        } else if (qinputdialog_mousedoubleclickevent_callback != nullptr) {
            QMouseEvent* cbval1 = event;

            qinputdialog_mousedoubleclickevent_callback(this, cbval1);
        } else {
            QInputDialog::mouseDoubleClickEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseMoveEvent(QMouseEvent* event) override {
        if (qinputdialog_mousemoveevent_isbase) {
            qinputdialog_mousemoveevent_isbase = false;
            QInputDialog::mouseMoveEvent(event);
        } else if (qinputdialog_mousemoveevent_callback != nullptr) {
            QMouseEvent* cbval1 = event;

            qinputdialog_mousemoveevent_callback(this, cbval1);
        } else {
            QInputDialog::mouseMoveEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void wheelEvent(QWheelEvent* event) override {
        if (qinputdialog_wheelevent_isbase) {
            qinputdialog_wheelevent_isbase = false;
            QInputDialog::wheelEvent(event);
        } else if (qinputdialog_wheelevent_callback != nullptr) {
            QWheelEvent* cbval1 = event;

            qinputdialog_wheelevent_callback(this, cbval1);
        } else {
            QInputDialog::wheelEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void keyReleaseEvent(QKeyEvent* event) override {
        if (qinputdialog_keyreleaseevent_isbase) {
            qinputdialog_keyreleaseevent_isbase = false;
            QInputDialog::keyReleaseEvent(event);
        } else if (qinputdialog_keyreleaseevent_callback != nullptr) {
            QKeyEvent* cbval1 = event;

            qinputdialog_keyreleaseevent_callback(this, cbval1);
        } else {
            QInputDialog::keyReleaseEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void focusInEvent(QFocusEvent* event) override {
        if (qinputdialog_focusinevent_isbase) {
            qinputdialog_focusinevent_isbase = false;
            QInputDialog::focusInEvent(event);
        } else if (qinputdialog_focusinevent_callback != nullptr) {
            QFocusEvent* cbval1 = event;

            qinputdialog_focusinevent_callback(this, cbval1);
        } else {
            QInputDialog::focusInEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void focusOutEvent(QFocusEvent* event) override {
        if (qinputdialog_focusoutevent_isbase) {
            qinputdialog_focusoutevent_isbase = false;
            QInputDialog::focusOutEvent(event);
        } else if (qinputdialog_focusoutevent_callback != nullptr) {
            QFocusEvent* cbval1 = event;

            qinputdialog_focusoutevent_callback(this, cbval1);
        } else {
            QInputDialog::focusOutEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void enterEvent(QEnterEvent* event) override {
        if (qinputdialog_enterevent_isbase) {
            qinputdialog_enterevent_isbase = false;
            QInputDialog::enterEvent(event);
        } else if (qinputdialog_enterevent_callback != nullptr) {
            QEnterEvent* cbval1 = event;

            qinputdialog_enterevent_callback(this, cbval1);
        } else {
            QInputDialog::enterEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void leaveEvent(QEvent* event) override {
        if (qinputdialog_leaveevent_isbase) {
            qinputdialog_leaveevent_isbase = false;
            QInputDialog::leaveEvent(event);
        } else if (qinputdialog_leaveevent_callback != nullptr) {
            QEvent* cbval1 = event;

            qinputdialog_leaveevent_callback(this, cbval1);
        } else {
            QInputDialog::leaveEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void paintEvent(QPaintEvent* event) override {
        if (qinputdialog_paintevent_isbase) {
            qinputdialog_paintevent_isbase = false;
            QInputDialog::paintEvent(event);
        } else if (qinputdialog_paintevent_callback != nullptr) {
            QPaintEvent* cbval1 = event;

            qinputdialog_paintevent_callback(this, cbval1);
        } else {
            QInputDialog::paintEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void moveEvent(QMoveEvent* event) override {
        if (qinputdialog_moveevent_isbase) {
            qinputdialog_moveevent_isbase = false;
            QInputDialog::moveEvent(event);
        } else if (qinputdialog_moveevent_callback != nullptr) {
            QMoveEvent* cbval1 = event;

            qinputdialog_moveevent_callback(this, cbval1);
        } else {
            QInputDialog::moveEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void tabletEvent(QTabletEvent* event) override {
        if (qinputdialog_tabletevent_isbase) {
            qinputdialog_tabletevent_isbase = false;
            QInputDialog::tabletEvent(event);
        } else if (qinputdialog_tabletevent_callback != nullptr) {
            QTabletEvent* cbval1 = event;

            qinputdialog_tabletevent_callback(this, cbval1);
        } else {
            QInputDialog::tabletEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void actionEvent(QActionEvent* event) override {
        if (qinputdialog_actionevent_isbase) {
            qinputdialog_actionevent_isbase = false;
            QInputDialog::actionEvent(event);
        } else if (qinputdialog_actionevent_callback != nullptr) {
            QActionEvent* cbval1 = event;

            qinputdialog_actionevent_callback(this, cbval1);
        } else {
            QInputDialog::actionEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragEnterEvent(QDragEnterEvent* event) override {
        if (qinputdialog_dragenterevent_isbase) {
            qinputdialog_dragenterevent_isbase = false;
            QInputDialog::dragEnterEvent(event);
        } else if (qinputdialog_dragenterevent_callback != nullptr) {
            QDragEnterEvent* cbval1 = event;

            qinputdialog_dragenterevent_callback(this, cbval1);
        } else {
            QInputDialog::dragEnterEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragMoveEvent(QDragMoveEvent* event) override {
        if (qinputdialog_dragmoveevent_isbase) {
            qinputdialog_dragmoveevent_isbase = false;
            QInputDialog::dragMoveEvent(event);
        } else if (qinputdialog_dragmoveevent_callback != nullptr) {
            QDragMoveEvent* cbval1 = event;

            qinputdialog_dragmoveevent_callback(this, cbval1);
        } else {
            QInputDialog::dragMoveEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragLeaveEvent(QDragLeaveEvent* event) override {
        if (qinputdialog_dragleaveevent_isbase) {
            qinputdialog_dragleaveevent_isbase = false;
            QInputDialog::dragLeaveEvent(event);
        } else if (qinputdialog_dragleaveevent_callback != nullptr) {
            QDragLeaveEvent* cbval1 = event;

            qinputdialog_dragleaveevent_callback(this, cbval1);
        } else {
            QInputDialog::dragLeaveEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void dropEvent(QDropEvent* event) override {
        if (qinputdialog_dropevent_isbase) {
            qinputdialog_dropevent_isbase = false;
            QInputDialog::dropEvent(event);
        } else if (qinputdialog_dropevent_callback != nullptr) {
            QDropEvent* cbval1 = event;

            qinputdialog_dropevent_callback(this, cbval1);
        } else {
            QInputDialog::dropEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void hideEvent(QHideEvent* event) override {
        if (qinputdialog_hideevent_isbase) {
            qinputdialog_hideevent_isbase = false;
            QInputDialog::hideEvent(event);
        } else if (qinputdialog_hideevent_callback != nullptr) {
            QHideEvent* cbval1 = event;

            qinputdialog_hideevent_callback(this, cbval1);
        } else {
            QInputDialog::hideEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool nativeEvent(const QByteArray& eventType, void* message, qintptr* result) override {
        if (qinputdialog_nativeevent_isbase) {
            qinputdialog_nativeevent_isbase = false;
            return QInputDialog::nativeEvent(eventType, message, result);
        } else if (qinputdialog_nativeevent_callback != nullptr) {
            const QByteArray eventType_qb = eventType;
            libqt_string eventType_str;
            eventType_str.len = eventType_qb.length();
            eventType_str.data = static_cast<const char*>(malloc((eventType_str.len + 1) * sizeof(char)));
            memcpy((void*)eventType_str.data, eventType_qb.data(), eventType_str.len);
            ((char*)eventType_str.data)[eventType_str.len] = '\0';
            libqt_string cbval1 = eventType_str;
            void* cbval2 = message;
            qintptr* result_ret = result;
            intptr_t* cbval3 = (intptr_t*)(result_ret);

            bool callback_ret = qinputdialog_nativeevent_callback(this, cbval1, cbval2, cbval3);
            return callback_ret;
        } else {
            return QInputDialog::nativeEvent(eventType, message, result);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void changeEvent(QEvent* param1) override {
        if (qinputdialog_changeevent_isbase) {
            qinputdialog_changeevent_isbase = false;
            QInputDialog::changeEvent(param1);
        } else if (qinputdialog_changeevent_callback != nullptr) {
            QEvent* cbval1 = param1;

            qinputdialog_changeevent_callback(this, cbval1);
        } else {
            QInputDialog::changeEvent(param1);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual int metric(QPaintDevice::PaintDeviceMetric param1) const override {
        if (qinputdialog_metric_isbase) {
            qinputdialog_metric_isbase = false;
            return QInputDialog::metric(param1);
        } else if (qinputdialog_metric_callback != nullptr) {
            int cbval1 = static_cast<int>(param1);

            int callback_ret = qinputdialog_metric_callback(this, cbval1);
            return static_cast<int>(callback_ret);
        } else {
            return QInputDialog::metric(param1);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void initPainter(QPainter* painter) const override {
        if (qinputdialog_initpainter_isbase) {
            qinputdialog_initpainter_isbase = false;
            QInputDialog::initPainter(painter);
        } else if (qinputdialog_initpainter_callback != nullptr) {
            QPainter* cbval1 = painter;

            qinputdialog_initpainter_callback(this, cbval1);
        } else {
            QInputDialog::initPainter(painter);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QPaintDevice* redirected(QPoint* offset) const override {
        if (qinputdialog_redirected_isbase) {
            qinputdialog_redirected_isbase = false;
            return QInputDialog::redirected(offset);
        } else if (qinputdialog_redirected_callback != nullptr) {
            QPoint* cbval1 = offset;

            QPaintDevice* callback_ret = qinputdialog_redirected_callback(this, cbval1);
            return callback_ret;
        } else {
            return QInputDialog::redirected(offset);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QPainter* sharedPainter() const override {
        if (qinputdialog_sharedpainter_isbase) {
            qinputdialog_sharedpainter_isbase = false;
            return QInputDialog::sharedPainter();
        } else if (qinputdialog_sharedpainter_callback != nullptr) {
            QPainter* callback_ret = qinputdialog_sharedpainter_callback();
            return callback_ret;
        } else {
            return QInputDialog::sharedPainter();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void inputMethodEvent(QInputMethodEvent* param1) override {
        if (qinputdialog_inputmethodevent_isbase) {
            qinputdialog_inputmethodevent_isbase = false;
            QInputDialog::inputMethodEvent(param1);
        } else if (qinputdialog_inputmethodevent_callback != nullptr) {
            QInputMethodEvent* cbval1 = param1;

            qinputdialog_inputmethodevent_callback(this, cbval1);
        } else {
            QInputDialog::inputMethodEvent(param1);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QVariant inputMethodQuery(Qt::InputMethodQuery param1) const override {
        if (qinputdialog_inputmethodquery_isbase) {
            qinputdialog_inputmethodquery_isbase = false;
            return QInputDialog::inputMethodQuery(param1);
        } else if (qinputdialog_inputmethodquery_callback != nullptr) {
            int cbval1 = static_cast<int>(param1);

            QVariant* callback_ret = qinputdialog_inputmethodquery_callback(this, cbval1);
            return *callback_ret;
        } else {
            return QInputDialog::inputMethodQuery(param1);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool focusNextPrevChild(bool next) override {
        if (qinputdialog_focusnextprevchild_isbase) {
            qinputdialog_focusnextprevchild_isbase = false;
            return QInputDialog::focusNextPrevChild(next);
        } else if (qinputdialog_focusnextprevchild_callback != nullptr) {
            bool cbval1 = next;

            bool callback_ret = qinputdialog_focusnextprevchild_callback(this, cbval1);
            return callback_ret;
        } else {
            return QInputDialog::focusNextPrevChild(next);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (qinputdialog_timerevent_isbase) {
            qinputdialog_timerevent_isbase = false;
            QInputDialog::timerEvent(event);
        } else if (qinputdialog_timerevent_callback != nullptr) {
            QTimerEvent* cbval1 = event;

            qinputdialog_timerevent_callback(this, cbval1);
        } else {
            QInputDialog::timerEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (qinputdialog_childevent_isbase) {
            qinputdialog_childevent_isbase = false;
            QInputDialog::childEvent(event);
        } else if (qinputdialog_childevent_callback != nullptr) {
            QChildEvent* cbval1 = event;

            qinputdialog_childevent_callback(this, cbval1);
        } else {
            QInputDialog::childEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (qinputdialog_customevent_isbase) {
            qinputdialog_customevent_isbase = false;
            QInputDialog::customEvent(event);
        } else if (qinputdialog_customevent_callback != nullptr) {
            QEvent* cbval1 = event;

            qinputdialog_customevent_callback(this, cbval1);
        } else {
            QInputDialog::customEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (qinputdialog_connectnotify_isbase) {
            qinputdialog_connectnotify_isbase = false;
            QInputDialog::connectNotify(signal);
        } else if (qinputdialog_connectnotify_callback != nullptr) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            qinputdialog_connectnotify_callback(this, cbval1);
        } else {
            QInputDialog::connectNotify(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (qinputdialog_disconnectnotify_isbase) {
            qinputdialog_disconnectnotify_isbase = false;
            QInputDialog::disconnectNotify(signal);
        } else if (qinputdialog_disconnectnotify_callback != nullptr) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            qinputdialog_disconnectnotify_callback(this, cbval1);
        } else {
            QInputDialog::disconnectNotify(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    void adjustPosition(QWidget* param1) {
        if (qinputdialog_adjustposition_isbase) {
            qinputdialog_adjustposition_isbase = false;
            QInputDialog::adjustPosition(param1);
        } else if (qinputdialog_adjustposition_callback != nullptr) {
            QWidget* cbval1 = param1;

            qinputdialog_adjustposition_callback(this, cbval1);
        } else {
            QInputDialog::adjustPosition(param1);
        }
    }

    // Virtual method for C ABI access and custom callback
    void updateMicroFocus() {
        if (qinputdialog_updatemicrofocus_isbase) {
            qinputdialog_updatemicrofocus_isbase = false;
            QInputDialog::updateMicroFocus();
        } else if (qinputdialog_updatemicrofocus_callback != nullptr) {
            qinputdialog_updatemicrofocus_callback();
        } else {
            QInputDialog::updateMicroFocus();
        }
    }

    // Virtual method for C ABI access and custom callback
    void create() {
        if (qinputdialog_create_isbase) {
            qinputdialog_create_isbase = false;
            QInputDialog::create();
        } else if (qinputdialog_create_callback != nullptr) {
            qinputdialog_create_callback();
        } else {
            QInputDialog::create();
        }
    }

    // Virtual method for C ABI access and custom callback
    void destroy() {
        if (qinputdialog_destroy_isbase) {
            qinputdialog_destroy_isbase = false;
            QInputDialog::destroy();
        } else if (qinputdialog_destroy_callback != nullptr) {
            qinputdialog_destroy_callback();
        } else {
            QInputDialog::destroy();
        }
    }

    // Virtual method for C ABI access and custom callback
    bool focusNextChild() {
        if (qinputdialog_focusnextchild_isbase) {
            qinputdialog_focusnextchild_isbase = false;
            return QInputDialog::focusNextChild();
        } else if (qinputdialog_focusnextchild_callback != nullptr) {
            bool callback_ret = qinputdialog_focusnextchild_callback();
            return callback_ret;
        } else {
            return QInputDialog::focusNextChild();
        }
    }

    // Virtual method for C ABI access and custom callback
    bool focusPreviousChild() {
        if (qinputdialog_focuspreviouschild_isbase) {
            qinputdialog_focuspreviouschild_isbase = false;
            return QInputDialog::focusPreviousChild();
        } else if (qinputdialog_focuspreviouschild_callback != nullptr) {
            bool callback_ret = qinputdialog_focuspreviouschild_callback();
            return callback_ret;
        } else {
            return QInputDialog::focusPreviousChild();
        }
    }

    // Virtual method for C ABI access and custom callback
    QObject* sender() const {
        if (qinputdialog_sender_isbase) {
            qinputdialog_sender_isbase = false;
            return QInputDialog::sender();
        } else if (qinputdialog_sender_callback != nullptr) {
            QObject* callback_ret = qinputdialog_sender_callback();
            return callback_ret;
        } else {
            return QInputDialog::sender();
        }
    }

    // Virtual method for C ABI access and custom callback
    int senderSignalIndex() const {
        if (qinputdialog_sendersignalindex_isbase) {
            qinputdialog_sendersignalindex_isbase = false;
            return QInputDialog::senderSignalIndex();
        } else if (qinputdialog_sendersignalindex_callback != nullptr) {
            int callback_ret = qinputdialog_sendersignalindex_callback();
            return static_cast<int>(callback_ret);
        } else {
            return QInputDialog::senderSignalIndex();
        }
    }

    // Virtual method for C ABI access and custom callback
    int receivers(const char* signal) const {
        if (qinputdialog_receivers_isbase) {
            qinputdialog_receivers_isbase = false;
            return QInputDialog::receivers(signal);
        } else if (qinputdialog_receivers_callback != nullptr) {
            const char* cbval1 = (const char*)signal;

            int callback_ret = qinputdialog_receivers_callback(this, cbval1);
            return static_cast<int>(callback_ret);
        } else {
            return QInputDialog::receivers(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    bool isSignalConnected(const QMetaMethod& signal) const {
        if (qinputdialog_issignalconnected_isbase) {
            qinputdialog_issignalconnected_isbase = false;
            return QInputDialog::isSignalConnected(signal);
        } else if (qinputdialog_issignalconnected_callback != nullptr) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            bool callback_ret = qinputdialog_issignalconnected_callback(this, cbval1);
            return callback_ret;
        } else {
            return QInputDialog::isSignalConnected(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    double getDecodedMetricF(QPaintDevice::PaintDeviceMetric metricA, QPaintDevice::PaintDeviceMetric metricB) const {
        if (qinputdialog_getdecodedmetricf_isbase) {
            qinputdialog_getdecodedmetricf_isbase = false;
            return QInputDialog::getDecodedMetricF(metricA, metricB);
        } else if (qinputdialog_getdecodedmetricf_callback != nullptr) {
            int cbval1 = static_cast<int>(metricA);
            int cbval2 = static_cast<int>(metricB);

            double callback_ret = qinputdialog_getdecodedmetricf_callback(this, cbval1, cbval2);
            return static_cast<double>(callback_ret);
        } else {
            return QInputDialog::getDecodedMetricF(metricA, metricB);
        }
    }

    // Friend functions
    friend void QInputDialog_KeyPressEvent(QInputDialog* self, QKeyEvent* param1);
    friend void QInputDialog_QBaseKeyPressEvent(QInputDialog* self, QKeyEvent* param1);
    friend void QInputDialog_CloseEvent(QInputDialog* self, QCloseEvent* param1);
    friend void QInputDialog_QBaseCloseEvent(QInputDialog* self, QCloseEvent* param1);
    friend void QInputDialog_ShowEvent(QInputDialog* self, QShowEvent* param1);
    friend void QInputDialog_QBaseShowEvent(QInputDialog* self, QShowEvent* param1);
    friend void QInputDialog_ResizeEvent(QInputDialog* self, QResizeEvent* param1);
    friend void QInputDialog_QBaseResizeEvent(QInputDialog* self, QResizeEvent* param1);
    friend void QInputDialog_ContextMenuEvent(QInputDialog* self, QContextMenuEvent* param1);
    friend void QInputDialog_QBaseContextMenuEvent(QInputDialog* self, QContextMenuEvent* param1);
    friend bool QInputDialog_EventFilter(QInputDialog* self, QObject* param1, QEvent* param2);
    friend bool QInputDialog_QBaseEventFilter(QInputDialog* self, QObject* param1, QEvent* param2);
    friend bool QInputDialog_Event(QInputDialog* self, QEvent* event);
    friend bool QInputDialog_QBaseEvent(QInputDialog* self, QEvent* event);
    friend void QInputDialog_MousePressEvent(QInputDialog* self, QMouseEvent* event);
    friend void QInputDialog_QBaseMousePressEvent(QInputDialog* self, QMouseEvent* event);
    friend void QInputDialog_MouseReleaseEvent(QInputDialog* self, QMouseEvent* event);
    friend void QInputDialog_QBaseMouseReleaseEvent(QInputDialog* self, QMouseEvent* event);
    friend void QInputDialog_MouseDoubleClickEvent(QInputDialog* self, QMouseEvent* event);
    friend void QInputDialog_QBaseMouseDoubleClickEvent(QInputDialog* self, QMouseEvent* event);
    friend void QInputDialog_MouseMoveEvent(QInputDialog* self, QMouseEvent* event);
    friend void QInputDialog_QBaseMouseMoveEvent(QInputDialog* self, QMouseEvent* event);
    friend void QInputDialog_WheelEvent(QInputDialog* self, QWheelEvent* event);
    friend void QInputDialog_QBaseWheelEvent(QInputDialog* self, QWheelEvent* event);
    friend void QInputDialog_KeyReleaseEvent(QInputDialog* self, QKeyEvent* event);
    friend void QInputDialog_QBaseKeyReleaseEvent(QInputDialog* self, QKeyEvent* event);
    friend void QInputDialog_FocusInEvent(QInputDialog* self, QFocusEvent* event);
    friend void QInputDialog_QBaseFocusInEvent(QInputDialog* self, QFocusEvent* event);
    friend void QInputDialog_FocusOutEvent(QInputDialog* self, QFocusEvent* event);
    friend void QInputDialog_QBaseFocusOutEvent(QInputDialog* self, QFocusEvent* event);
    friend void QInputDialog_EnterEvent(QInputDialog* self, QEnterEvent* event);
    friend void QInputDialog_QBaseEnterEvent(QInputDialog* self, QEnterEvent* event);
    friend void QInputDialog_LeaveEvent(QInputDialog* self, QEvent* event);
    friend void QInputDialog_QBaseLeaveEvent(QInputDialog* self, QEvent* event);
    friend void QInputDialog_PaintEvent(QInputDialog* self, QPaintEvent* event);
    friend void QInputDialog_QBasePaintEvent(QInputDialog* self, QPaintEvent* event);
    friend void QInputDialog_MoveEvent(QInputDialog* self, QMoveEvent* event);
    friend void QInputDialog_QBaseMoveEvent(QInputDialog* self, QMoveEvent* event);
    friend void QInputDialog_TabletEvent(QInputDialog* self, QTabletEvent* event);
    friend void QInputDialog_QBaseTabletEvent(QInputDialog* self, QTabletEvent* event);
    friend void QInputDialog_ActionEvent(QInputDialog* self, QActionEvent* event);
    friend void QInputDialog_QBaseActionEvent(QInputDialog* self, QActionEvent* event);
    friend void QInputDialog_DragEnterEvent(QInputDialog* self, QDragEnterEvent* event);
    friend void QInputDialog_QBaseDragEnterEvent(QInputDialog* self, QDragEnterEvent* event);
    friend void QInputDialog_DragMoveEvent(QInputDialog* self, QDragMoveEvent* event);
    friend void QInputDialog_QBaseDragMoveEvent(QInputDialog* self, QDragMoveEvent* event);
    friend void QInputDialog_DragLeaveEvent(QInputDialog* self, QDragLeaveEvent* event);
    friend void QInputDialog_QBaseDragLeaveEvent(QInputDialog* self, QDragLeaveEvent* event);
    friend void QInputDialog_DropEvent(QInputDialog* self, QDropEvent* event);
    friend void QInputDialog_QBaseDropEvent(QInputDialog* self, QDropEvent* event);
    friend void QInputDialog_HideEvent(QInputDialog* self, QHideEvent* event);
    friend void QInputDialog_QBaseHideEvent(QInputDialog* self, QHideEvent* event);
    friend bool QInputDialog_NativeEvent(QInputDialog* self, const libqt_string eventType, void* message, intptr_t* result);
    friend bool QInputDialog_QBaseNativeEvent(QInputDialog* self, const libqt_string eventType, void* message, intptr_t* result);
    friend void QInputDialog_ChangeEvent(QInputDialog* self, QEvent* param1);
    friend void QInputDialog_QBaseChangeEvent(QInputDialog* self, QEvent* param1);
    friend int QInputDialog_Metric(const QInputDialog* self, int param1);
    friend int QInputDialog_QBaseMetric(const QInputDialog* self, int param1);
    friend void QInputDialog_InitPainter(const QInputDialog* self, QPainter* painter);
    friend void QInputDialog_QBaseInitPainter(const QInputDialog* self, QPainter* painter);
    friend QPaintDevice* QInputDialog_Redirected(const QInputDialog* self, QPoint* offset);
    friend QPaintDevice* QInputDialog_QBaseRedirected(const QInputDialog* self, QPoint* offset);
    friend QPainter* QInputDialog_SharedPainter(const QInputDialog* self);
    friend QPainter* QInputDialog_QBaseSharedPainter(const QInputDialog* self);
    friend void QInputDialog_InputMethodEvent(QInputDialog* self, QInputMethodEvent* param1);
    friend void QInputDialog_QBaseInputMethodEvent(QInputDialog* self, QInputMethodEvent* param1);
    friend bool QInputDialog_FocusNextPrevChild(QInputDialog* self, bool next);
    friend bool QInputDialog_QBaseFocusNextPrevChild(QInputDialog* self, bool next);
    friend void QInputDialog_TimerEvent(QInputDialog* self, QTimerEvent* event);
    friend void QInputDialog_QBaseTimerEvent(QInputDialog* self, QTimerEvent* event);
    friend void QInputDialog_ChildEvent(QInputDialog* self, QChildEvent* event);
    friend void QInputDialog_QBaseChildEvent(QInputDialog* self, QChildEvent* event);
    friend void QInputDialog_CustomEvent(QInputDialog* self, QEvent* event);
    friend void QInputDialog_QBaseCustomEvent(QInputDialog* self, QEvent* event);
    friend void QInputDialog_ConnectNotify(QInputDialog* self, const QMetaMethod* signal);
    friend void QInputDialog_QBaseConnectNotify(QInputDialog* self, const QMetaMethod* signal);
    friend void QInputDialog_DisconnectNotify(QInputDialog* self, const QMetaMethod* signal);
    friend void QInputDialog_QBaseDisconnectNotify(QInputDialog* self, const QMetaMethod* signal);
    friend void QInputDialog_AdjustPosition(QInputDialog* self, QWidget* param1);
    friend void QInputDialog_QBaseAdjustPosition(QInputDialog* self, QWidget* param1);
    friend void QInputDialog_UpdateMicroFocus(QInputDialog* self);
    friend void QInputDialog_QBaseUpdateMicroFocus(QInputDialog* self);
    friend void QInputDialog_Create(QInputDialog* self);
    friend void QInputDialog_QBaseCreate(QInputDialog* self);
    friend void QInputDialog_Destroy(QInputDialog* self);
    friend void QInputDialog_QBaseDestroy(QInputDialog* self);
    friend bool QInputDialog_FocusNextChild(QInputDialog* self);
    friend bool QInputDialog_QBaseFocusNextChild(QInputDialog* self);
    friend bool QInputDialog_FocusPreviousChild(QInputDialog* self);
    friend bool QInputDialog_QBaseFocusPreviousChild(QInputDialog* self);
    friend QObject* QInputDialog_Sender(const QInputDialog* self);
    friend QObject* QInputDialog_QBaseSender(const QInputDialog* self);
    friend int QInputDialog_SenderSignalIndex(const QInputDialog* self);
    friend int QInputDialog_QBaseSenderSignalIndex(const QInputDialog* self);
    friend int QInputDialog_Receivers(const QInputDialog* self, const char* signal);
    friend int QInputDialog_QBaseReceivers(const QInputDialog* self, const char* signal);
    friend bool QInputDialog_IsSignalConnected(const QInputDialog* self, const QMetaMethod* signal);
    friend bool QInputDialog_QBaseIsSignalConnected(const QInputDialog* self, const QMetaMethod* signal);
    friend double QInputDialog_GetDecodedMetricF(const QInputDialog* self, int metricA, int metricB);
    friend double QInputDialog_QBaseGetDecodedMetricF(const QInputDialog* self, int metricA, int metricB);
};

#endif
