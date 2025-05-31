#pragma once
#ifndef SRCC_LIBVIRTUALQPROGRESSDIALOG_H
#define SRCC_LIBVIRTUALQPROGRESSDIALOG_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"

// This class is a subclass of QProgressDialog so that we can call protected methods
class VirtualQProgressDialog final : public QProgressDialog {

  public:
    // Virtual class boolean flag
    bool isVirtualQProgressDialog = true;

    // Virtual class public types (including callbacks)
    using QProgressDialog_Metacall_Callback = int (*)(QProgressDialog*, int, int, void**);
    using QProgressDialog_SizeHint_Callback = QSize* (*)();
    using QProgressDialog_ResizeEvent_Callback = void (*)(QProgressDialog*, QResizeEvent*);
    using QProgressDialog_CloseEvent_Callback = void (*)(QProgressDialog*, QCloseEvent*);
    using QProgressDialog_ChangeEvent_Callback = void (*)(QProgressDialog*, QEvent*);
    using QProgressDialog_ShowEvent_Callback = void (*)(QProgressDialog*, QShowEvent*);
    using QProgressDialog_SetVisible_Callback = void (*)(QProgressDialog*, bool);
    using QProgressDialog_MinimumSizeHint_Callback = QSize* (*)();
    using QProgressDialog_Open_Callback = void (*)();
    using QProgressDialog_Exec_Callback = int (*)();
    using QProgressDialog_Done_Callback = void (*)(QProgressDialog*, int);
    using QProgressDialog_Accept_Callback = void (*)();
    using QProgressDialog_Reject_Callback = void (*)();
    using QProgressDialog_KeyPressEvent_Callback = void (*)(QProgressDialog*, QKeyEvent*);
    using QProgressDialog_ContextMenuEvent_Callback = void (*)(QProgressDialog*, QContextMenuEvent*);
    using QProgressDialog_EventFilter_Callback = bool (*)(QProgressDialog*, QObject*, QEvent*);
    using QProgressDialog_DevType_Callback = int (*)();
    using QProgressDialog_HeightForWidth_Callback = int (*)(const QProgressDialog*, int);
    using QProgressDialog_HasHeightForWidth_Callback = bool (*)();
    using QProgressDialog_PaintEngine_Callback = QPaintEngine* (*)();
    using QProgressDialog_Event_Callback = bool (*)(QProgressDialog*, QEvent*);
    using QProgressDialog_MousePressEvent_Callback = void (*)(QProgressDialog*, QMouseEvent*);
    using QProgressDialog_MouseReleaseEvent_Callback = void (*)(QProgressDialog*, QMouseEvent*);
    using QProgressDialog_MouseDoubleClickEvent_Callback = void (*)(QProgressDialog*, QMouseEvent*);
    using QProgressDialog_MouseMoveEvent_Callback = void (*)(QProgressDialog*, QMouseEvent*);
    using QProgressDialog_WheelEvent_Callback = void (*)(QProgressDialog*, QWheelEvent*);
    using QProgressDialog_KeyReleaseEvent_Callback = void (*)(QProgressDialog*, QKeyEvent*);
    using QProgressDialog_FocusInEvent_Callback = void (*)(QProgressDialog*, QFocusEvent*);
    using QProgressDialog_FocusOutEvent_Callback = void (*)(QProgressDialog*, QFocusEvent*);
    using QProgressDialog_EnterEvent_Callback = void (*)(QProgressDialog*, QEnterEvent*);
    using QProgressDialog_LeaveEvent_Callback = void (*)(QProgressDialog*, QEvent*);
    using QProgressDialog_PaintEvent_Callback = void (*)(QProgressDialog*, QPaintEvent*);
    using QProgressDialog_MoveEvent_Callback = void (*)(QProgressDialog*, QMoveEvent*);
    using QProgressDialog_TabletEvent_Callback = void (*)(QProgressDialog*, QTabletEvent*);
    using QProgressDialog_ActionEvent_Callback = void (*)(QProgressDialog*, QActionEvent*);
    using QProgressDialog_DragEnterEvent_Callback = void (*)(QProgressDialog*, QDragEnterEvent*);
    using QProgressDialog_DragMoveEvent_Callback = void (*)(QProgressDialog*, QDragMoveEvent*);
    using QProgressDialog_DragLeaveEvent_Callback = void (*)(QProgressDialog*, QDragLeaveEvent*);
    using QProgressDialog_DropEvent_Callback = void (*)(QProgressDialog*, QDropEvent*);
    using QProgressDialog_HideEvent_Callback = void (*)(QProgressDialog*, QHideEvent*);
    using QProgressDialog_NativeEvent_Callback = bool (*)(QProgressDialog*, libqt_string, void*, intptr_t*);
    using QProgressDialog_Metric_Callback = int (*)(const QProgressDialog*, int);
    using QProgressDialog_InitPainter_Callback = void (*)(const QProgressDialog*, QPainter*);
    using QProgressDialog_Redirected_Callback = QPaintDevice* (*)(const QProgressDialog*, QPoint*);
    using QProgressDialog_SharedPainter_Callback = QPainter* (*)();
    using QProgressDialog_InputMethodEvent_Callback = void (*)(QProgressDialog*, QInputMethodEvent*);
    using QProgressDialog_InputMethodQuery_Callback = QVariant* (*)(const QProgressDialog*, int);
    using QProgressDialog_FocusNextPrevChild_Callback = bool (*)(QProgressDialog*, bool);
    using QProgressDialog_TimerEvent_Callback = void (*)(QProgressDialog*, QTimerEvent*);
    using QProgressDialog_ChildEvent_Callback = void (*)(QProgressDialog*, QChildEvent*);
    using QProgressDialog_CustomEvent_Callback = void (*)(QProgressDialog*, QEvent*);
    using QProgressDialog_ConnectNotify_Callback = void (*)(QProgressDialog*, QMetaMethod*);
    using QProgressDialog_DisconnectNotify_Callback = void (*)(QProgressDialog*, QMetaMethod*);
    using QProgressDialog_ForceShow_Callback = void (*)();
    using QProgressDialog_AdjustPosition_Callback = void (*)(QProgressDialog*, QWidget*);
    using QProgressDialog_UpdateMicroFocus_Callback = void (*)();
    using QProgressDialog_Create_Callback = void (*)();
    using QProgressDialog_Destroy_Callback = void (*)();
    using QProgressDialog_FocusNextChild_Callback = bool (*)();
    using QProgressDialog_FocusPreviousChild_Callback = bool (*)();
    using QProgressDialog_Sender_Callback = QObject* (*)();
    using QProgressDialog_SenderSignalIndex_Callback = int (*)();
    using QProgressDialog_Receivers_Callback = int (*)(const QProgressDialog*, const char*);
    using QProgressDialog_IsSignalConnected_Callback = bool (*)(const QProgressDialog*, QMetaMethod*);

  protected:
    // Instance callback storage
    QProgressDialog_Metacall_Callback qprogressdialog_metacall_callback = nullptr;
    QProgressDialog_SizeHint_Callback qprogressdialog_sizehint_callback = nullptr;
    QProgressDialog_ResizeEvent_Callback qprogressdialog_resizeevent_callback = nullptr;
    QProgressDialog_CloseEvent_Callback qprogressdialog_closeevent_callback = nullptr;
    QProgressDialog_ChangeEvent_Callback qprogressdialog_changeevent_callback = nullptr;
    QProgressDialog_ShowEvent_Callback qprogressdialog_showevent_callback = nullptr;
    QProgressDialog_SetVisible_Callback qprogressdialog_setvisible_callback = nullptr;
    QProgressDialog_MinimumSizeHint_Callback qprogressdialog_minimumsizehint_callback = nullptr;
    QProgressDialog_Open_Callback qprogressdialog_open_callback = nullptr;
    QProgressDialog_Exec_Callback qprogressdialog_exec_callback = nullptr;
    QProgressDialog_Done_Callback qprogressdialog_done_callback = nullptr;
    QProgressDialog_Accept_Callback qprogressdialog_accept_callback = nullptr;
    QProgressDialog_Reject_Callback qprogressdialog_reject_callback = nullptr;
    QProgressDialog_KeyPressEvent_Callback qprogressdialog_keypressevent_callback = nullptr;
    QProgressDialog_ContextMenuEvent_Callback qprogressdialog_contextmenuevent_callback = nullptr;
    QProgressDialog_EventFilter_Callback qprogressdialog_eventfilter_callback = nullptr;
    QProgressDialog_DevType_Callback qprogressdialog_devtype_callback = nullptr;
    QProgressDialog_HeightForWidth_Callback qprogressdialog_heightforwidth_callback = nullptr;
    QProgressDialog_HasHeightForWidth_Callback qprogressdialog_hasheightforwidth_callback = nullptr;
    QProgressDialog_PaintEngine_Callback qprogressdialog_paintengine_callback = nullptr;
    QProgressDialog_Event_Callback qprogressdialog_event_callback = nullptr;
    QProgressDialog_MousePressEvent_Callback qprogressdialog_mousepressevent_callback = nullptr;
    QProgressDialog_MouseReleaseEvent_Callback qprogressdialog_mousereleaseevent_callback = nullptr;
    QProgressDialog_MouseDoubleClickEvent_Callback qprogressdialog_mousedoubleclickevent_callback = nullptr;
    QProgressDialog_MouseMoveEvent_Callback qprogressdialog_mousemoveevent_callback = nullptr;
    QProgressDialog_WheelEvent_Callback qprogressdialog_wheelevent_callback = nullptr;
    QProgressDialog_KeyReleaseEvent_Callback qprogressdialog_keyreleaseevent_callback = nullptr;
    QProgressDialog_FocusInEvent_Callback qprogressdialog_focusinevent_callback = nullptr;
    QProgressDialog_FocusOutEvent_Callback qprogressdialog_focusoutevent_callback = nullptr;
    QProgressDialog_EnterEvent_Callback qprogressdialog_enterevent_callback = nullptr;
    QProgressDialog_LeaveEvent_Callback qprogressdialog_leaveevent_callback = nullptr;
    QProgressDialog_PaintEvent_Callback qprogressdialog_paintevent_callback = nullptr;
    QProgressDialog_MoveEvent_Callback qprogressdialog_moveevent_callback = nullptr;
    QProgressDialog_TabletEvent_Callback qprogressdialog_tabletevent_callback = nullptr;
    QProgressDialog_ActionEvent_Callback qprogressdialog_actionevent_callback = nullptr;
    QProgressDialog_DragEnterEvent_Callback qprogressdialog_dragenterevent_callback = nullptr;
    QProgressDialog_DragMoveEvent_Callback qprogressdialog_dragmoveevent_callback = nullptr;
    QProgressDialog_DragLeaveEvent_Callback qprogressdialog_dragleaveevent_callback = nullptr;
    QProgressDialog_DropEvent_Callback qprogressdialog_dropevent_callback = nullptr;
    QProgressDialog_HideEvent_Callback qprogressdialog_hideevent_callback = nullptr;
    QProgressDialog_NativeEvent_Callback qprogressdialog_nativeevent_callback = nullptr;
    QProgressDialog_Metric_Callback qprogressdialog_metric_callback = nullptr;
    QProgressDialog_InitPainter_Callback qprogressdialog_initpainter_callback = nullptr;
    QProgressDialog_Redirected_Callback qprogressdialog_redirected_callback = nullptr;
    QProgressDialog_SharedPainter_Callback qprogressdialog_sharedpainter_callback = nullptr;
    QProgressDialog_InputMethodEvent_Callback qprogressdialog_inputmethodevent_callback = nullptr;
    QProgressDialog_InputMethodQuery_Callback qprogressdialog_inputmethodquery_callback = nullptr;
    QProgressDialog_FocusNextPrevChild_Callback qprogressdialog_focusnextprevchild_callback = nullptr;
    QProgressDialog_TimerEvent_Callback qprogressdialog_timerevent_callback = nullptr;
    QProgressDialog_ChildEvent_Callback qprogressdialog_childevent_callback = nullptr;
    QProgressDialog_CustomEvent_Callback qprogressdialog_customevent_callback = nullptr;
    QProgressDialog_ConnectNotify_Callback qprogressdialog_connectnotify_callback = nullptr;
    QProgressDialog_DisconnectNotify_Callback qprogressdialog_disconnectnotify_callback = nullptr;
    QProgressDialog_ForceShow_Callback qprogressdialog_forceshow_callback = nullptr;
    QProgressDialog_AdjustPosition_Callback qprogressdialog_adjustposition_callback = nullptr;
    QProgressDialog_UpdateMicroFocus_Callback qprogressdialog_updatemicrofocus_callback = nullptr;
    QProgressDialog_Create_Callback qprogressdialog_create_callback = nullptr;
    QProgressDialog_Destroy_Callback qprogressdialog_destroy_callback = nullptr;
    QProgressDialog_FocusNextChild_Callback qprogressdialog_focusnextchild_callback = nullptr;
    QProgressDialog_FocusPreviousChild_Callback qprogressdialog_focuspreviouschild_callback = nullptr;
    QProgressDialog_Sender_Callback qprogressdialog_sender_callback = nullptr;
    QProgressDialog_SenderSignalIndex_Callback qprogressdialog_sendersignalindex_callback = nullptr;
    QProgressDialog_Receivers_Callback qprogressdialog_receivers_callback = nullptr;
    QProgressDialog_IsSignalConnected_Callback qprogressdialog_issignalconnected_callback = nullptr;

    // Instance base flags
    mutable bool qprogressdialog_metacall_isbase = false;
    mutable bool qprogressdialog_sizehint_isbase = false;
    mutable bool qprogressdialog_resizeevent_isbase = false;
    mutable bool qprogressdialog_closeevent_isbase = false;
    mutable bool qprogressdialog_changeevent_isbase = false;
    mutable bool qprogressdialog_showevent_isbase = false;
    mutable bool qprogressdialog_setvisible_isbase = false;
    mutable bool qprogressdialog_minimumsizehint_isbase = false;
    mutable bool qprogressdialog_open_isbase = false;
    mutable bool qprogressdialog_exec_isbase = false;
    mutable bool qprogressdialog_done_isbase = false;
    mutable bool qprogressdialog_accept_isbase = false;
    mutable bool qprogressdialog_reject_isbase = false;
    mutable bool qprogressdialog_keypressevent_isbase = false;
    mutable bool qprogressdialog_contextmenuevent_isbase = false;
    mutable bool qprogressdialog_eventfilter_isbase = false;
    mutable bool qprogressdialog_devtype_isbase = false;
    mutable bool qprogressdialog_heightforwidth_isbase = false;
    mutable bool qprogressdialog_hasheightforwidth_isbase = false;
    mutable bool qprogressdialog_paintengine_isbase = false;
    mutable bool qprogressdialog_event_isbase = false;
    mutable bool qprogressdialog_mousepressevent_isbase = false;
    mutable bool qprogressdialog_mousereleaseevent_isbase = false;
    mutable bool qprogressdialog_mousedoubleclickevent_isbase = false;
    mutable bool qprogressdialog_mousemoveevent_isbase = false;
    mutable bool qprogressdialog_wheelevent_isbase = false;
    mutable bool qprogressdialog_keyreleaseevent_isbase = false;
    mutable bool qprogressdialog_focusinevent_isbase = false;
    mutable bool qprogressdialog_focusoutevent_isbase = false;
    mutable bool qprogressdialog_enterevent_isbase = false;
    mutable bool qprogressdialog_leaveevent_isbase = false;
    mutable bool qprogressdialog_paintevent_isbase = false;
    mutable bool qprogressdialog_moveevent_isbase = false;
    mutable bool qprogressdialog_tabletevent_isbase = false;
    mutable bool qprogressdialog_actionevent_isbase = false;
    mutable bool qprogressdialog_dragenterevent_isbase = false;
    mutable bool qprogressdialog_dragmoveevent_isbase = false;
    mutable bool qprogressdialog_dragleaveevent_isbase = false;
    mutable bool qprogressdialog_dropevent_isbase = false;
    mutable bool qprogressdialog_hideevent_isbase = false;
    mutable bool qprogressdialog_nativeevent_isbase = false;
    mutable bool qprogressdialog_metric_isbase = false;
    mutable bool qprogressdialog_initpainter_isbase = false;
    mutable bool qprogressdialog_redirected_isbase = false;
    mutable bool qprogressdialog_sharedpainter_isbase = false;
    mutable bool qprogressdialog_inputmethodevent_isbase = false;
    mutable bool qprogressdialog_inputmethodquery_isbase = false;
    mutable bool qprogressdialog_focusnextprevchild_isbase = false;
    mutable bool qprogressdialog_timerevent_isbase = false;
    mutable bool qprogressdialog_childevent_isbase = false;
    mutable bool qprogressdialog_customevent_isbase = false;
    mutable bool qprogressdialog_connectnotify_isbase = false;
    mutable bool qprogressdialog_disconnectnotify_isbase = false;
    mutable bool qprogressdialog_forceshow_isbase = false;
    mutable bool qprogressdialog_adjustposition_isbase = false;
    mutable bool qprogressdialog_updatemicrofocus_isbase = false;
    mutable bool qprogressdialog_create_isbase = false;
    mutable bool qprogressdialog_destroy_isbase = false;
    mutable bool qprogressdialog_focusnextchild_isbase = false;
    mutable bool qprogressdialog_focuspreviouschild_isbase = false;
    mutable bool qprogressdialog_sender_isbase = false;
    mutable bool qprogressdialog_sendersignalindex_isbase = false;
    mutable bool qprogressdialog_receivers_isbase = false;
    mutable bool qprogressdialog_issignalconnected_isbase = false;

  public:
    VirtualQProgressDialog(QWidget* parent) : QProgressDialog(parent){};
    VirtualQProgressDialog() : QProgressDialog(){};
    VirtualQProgressDialog(const QString& labelText, const QString& cancelButtonText, int minimum, int maximum) : QProgressDialog(labelText, cancelButtonText, minimum, maximum){};
    VirtualQProgressDialog(QWidget* parent, Qt::WindowFlags flags) : QProgressDialog(parent, flags){};
    VirtualQProgressDialog(const QString& labelText, const QString& cancelButtonText, int minimum, int maximum, QWidget* parent) : QProgressDialog(labelText, cancelButtonText, minimum, maximum, parent){};
    VirtualQProgressDialog(const QString& labelText, const QString& cancelButtonText, int minimum, int maximum, QWidget* parent, Qt::WindowFlags flags) : QProgressDialog(labelText, cancelButtonText, minimum, maximum, parent, flags){};

    ~VirtualQProgressDialog() {
        qprogressdialog_metacall_callback = nullptr;
        qprogressdialog_sizehint_callback = nullptr;
        qprogressdialog_resizeevent_callback = nullptr;
        qprogressdialog_closeevent_callback = nullptr;
        qprogressdialog_changeevent_callback = nullptr;
        qprogressdialog_showevent_callback = nullptr;
        qprogressdialog_setvisible_callback = nullptr;
        qprogressdialog_minimumsizehint_callback = nullptr;
        qprogressdialog_open_callback = nullptr;
        qprogressdialog_exec_callback = nullptr;
        qprogressdialog_done_callback = nullptr;
        qprogressdialog_accept_callback = nullptr;
        qprogressdialog_reject_callback = nullptr;
        qprogressdialog_keypressevent_callback = nullptr;
        qprogressdialog_contextmenuevent_callback = nullptr;
        qprogressdialog_eventfilter_callback = nullptr;
        qprogressdialog_devtype_callback = nullptr;
        qprogressdialog_heightforwidth_callback = nullptr;
        qprogressdialog_hasheightforwidth_callback = nullptr;
        qprogressdialog_paintengine_callback = nullptr;
        qprogressdialog_event_callback = nullptr;
        qprogressdialog_mousepressevent_callback = nullptr;
        qprogressdialog_mousereleaseevent_callback = nullptr;
        qprogressdialog_mousedoubleclickevent_callback = nullptr;
        qprogressdialog_mousemoveevent_callback = nullptr;
        qprogressdialog_wheelevent_callback = nullptr;
        qprogressdialog_keyreleaseevent_callback = nullptr;
        qprogressdialog_focusinevent_callback = nullptr;
        qprogressdialog_focusoutevent_callback = nullptr;
        qprogressdialog_enterevent_callback = nullptr;
        qprogressdialog_leaveevent_callback = nullptr;
        qprogressdialog_paintevent_callback = nullptr;
        qprogressdialog_moveevent_callback = nullptr;
        qprogressdialog_tabletevent_callback = nullptr;
        qprogressdialog_actionevent_callback = nullptr;
        qprogressdialog_dragenterevent_callback = nullptr;
        qprogressdialog_dragmoveevent_callback = nullptr;
        qprogressdialog_dragleaveevent_callback = nullptr;
        qprogressdialog_dropevent_callback = nullptr;
        qprogressdialog_hideevent_callback = nullptr;
        qprogressdialog_nativeevent_callback = nullptr;
        qprogressdialog_metric_callback = nullptr;
        qprogressdialog_initpainter_callback = nullptr;
        qprogressdialog_redirected_callback = nullptr;
        qprogressdialog_sharedpainter_callback = nullptr;
        qprogressdialog_inputmethodevent_callback = nullptr;
        qprogressdialog_inputmethodquery_callback = nullptr;
        qprogressdialog_focusnextprevchild_callback = nullptr;
        qprogressdialog_timerevent_callback = nullptr;
        qprogressdialog_childevent_callback = nullptr;
        qprogressdialog_customevent_callback = nullptr;
        qprogressdialog_connectnotify_callback = nullptr;
        qprogressdialog_disconnectnotify_callback = nullptr;
        qprogressdialog_forceshow_callback = nullptr;
        qprogressdialog_adjustposition_callback = nullptr;
        qprogressdialog_updatemicrofocus_callback = nullptr;
        qprogressdialog_create_callback = nullptr;
        qprogressdialog_destroy_callback = nullptr;
        qprogressdialog_focusnextchild_callback = nullptr;
        qprogressdialog_focuspreviouschild_callback = nullptr;
        qprogressdialog_sender_callback = nullptr;
        qprogressdialog_sendersignalindex_callback = nullptr;
        qprogressdialog_receivers_callback = nullptr;
        qprogressdialog_issignalconnected_callback = nullptr;
    }

    // Callback setters
    inline void setQProgressDialog_Metacall_Callback(QProgressDialog_Metacall_Callback cb) { qprogressdialog_metacall_callback = cb; }
    inline void setQProgressDialog_SizeHint_Callback(QProgressDialog_SizeHint_Callback cb) { qprogressdialog_sizehint_callback = cb; }
    inline void setQProgressDialog_ResizeEvent_Callback(QProgressDialog_ResizeEvent_Callback cb) { qprogressdialog_resizeevent_callback = cb; }
    inline void setQProgressDialog_CloseEvent_Callback(QProgressDialog_CloseEvent_Callback cb) { qprogressdialog_closeevent_callback = cb; }
    inline void setQProgressDialog_ChangeEvent_Callback(QProgressDialog_ChangeEvent_Callback cb) { qprogressdialog_changeevent_callback = cb; }
    inline void setQProgressDialog_ShowEvent_Callback(QProgressDialog_ShowEvent_Callback cb) { qprogressdialog_showevent_callback = cb; }
    inline void setQProgressDialog_SetVisible_Callback(QProgressDialog_SetVisible_Callback cb) { qprogressdialog_setvisible_callback = cb; }
    inline void setQProgressDialog_MinimumSizeHint_Callback(QProgressDialog_MinimumSizeHint_Callback cb) { qprogressdialog_minimumsizehint_callback = cb; }
    inline void setQProgressDialog_Open_Callback(QProgressDialog_Open_Callback cb) { qprogressdialog_open_callback = cb; }
    inline void setQProgressDialog_Exec_Callback(QProgressDialog_Exec_Callback cb) { qprogressdialog_exec_callback = cb; }
    inline void setQProgressDialog_Done_Callback(QProgressDialog_Done_Callback cb) { qprogressdialog_done_callback = cb; }
    inline void setQProgressDialog_Accept_Callback(QProgressDialog_Accept_Callback cb) { qprogressdialog_accept_callback = cb; }
    inline void setQProgressDialog_Reject_Callback(QProgressDialog_Reject_Callback cb) { qprogressdialog_reject_callback = cb; }
    inline void setQProgressDialog_KeyPressEvent_Callback(QProgressDialog_KeyPressEvent_Callback cb) { qprogressdialog_keypressevent_callback = cb; }
    inline void setQProgressDialog_ContextMenuEvent_Callback(QProgressDialog_ContextMenuEvent_Callback cb) { qprogressdialog_contextmenuevent_callback = cb; }
    inline void setQProgressDialog_EventFilter_Callback(QProgressDialog_EventFilter_Callback cb) { qprogressdialog_eventfilter_callback = cb; }
    inline void setQProgressDialog_DevType_Callback(QProgressDialog_DevType_Callback cb) { qprogressdialog_devtype_callback = cb; }
    inline void setQProgressDialog_HeightForWidth_Callback(QProgressDialog_HeightForWidth_Callback cb) { qprogressdialog_heightforwidth_callback = cb; }
    inline void setQProgressDialog_HasHeightForWidth_Callback(QProgressDialog_HasHeightForWidth_Callback cb) { qprogressdialog_hasheightforwidth_callback = cb; }
    inline void setQProgressDialog_PaintEngine_Callback(QProgressDialog_PaintEngine_Callback cb) { qprogressdialog_paintengine_callback = cb; }
    inline void setQProgressDialog_Event_Callback(QProgressDialog_Event_Callback cb) { qprogressdialog_event_callback = cb; }
    inline void setQProgressDialog_MousePressEvent_Callback(QProgressDialog_MousePressEvent_Callback cb) { qprogressdialog_mousepressevent_callback = cb; }
    inline void setQProgressDialog_MouseReleaseEvent_Callback(QProgressDialog_MouseReleaseEvent_Callback cb) { qprogressdialog_mousereleaseevent_callback = cb; }
    inline void setQProgressDialog_MouseDoubleClickEvent_Callback(QProgressDialog_MouseDoubleClickEvent_Callback cb) { qprogressdialog_mousedoubleclickevent_callback = cb; }
    inline void setQProgressDialog_MouseMoveEvent_Callback(QProgressDialog_MouseMoveEvent_Callback cb) { qprogressdialog_mousemoveevent_callback = cb; }
    inline void setQProgressDialog_WheelEvent_Callback(QProgressDialog_WheelEvent_Callback cb) { qprogressdialog_wheelevent_callback = cb; }
    inline void setQProgressDialog_KeyReleaseEvent_Callback(QProgressDialog_KeyReleaseEvent_Callback cb) { qprogressdialog_keyreleaseevent_callback = cb; }
    inline void setQProgressDialog_FocusInEvent_Callback(QProgressDialog_FocusInEvent_Callback cb) { qprogressdialog_focusinevent_callback = cb; }
    inline void setQProgressDialog_FocusOutEvent_Callback(QProgressDialog_FocusOutEvent_Callback cb) { qprogressdialog_focusoutevent_callback = cb; }
    inline void setQProgressDialog_EnterEvent_Callback(QProgressDialog_EnterEvent_Callback cb) { qprogressdialog_enterevent_callback = cb; }
    inline void setQProgressDialog_LeaveEvent_Callback(QProgressDialog_LeaveEvent_Callback cb) { qprogressdialog_leaveevent_callback = cb; }
    inline void setQProgressDialog_PaintEvent_Callback(QProgressDialog_PaintEvent_Callback cb) { qprogressdialog_paintevent_callback = cb; }
    inline void setQProgressDialog_MoveEvent_Callback(QProgressDialog_MoveEvent_Callback cb) { qprogressdialog_moveevent_callback = cb; }
    inline void setQProgressDialog_TabletEvent_Callback(QProgressDialog_TabletEvent_Callback cb) { qprogressdialog_tabletevent_callback = cb; }
    inline void setQProgressDialog_ActionEvent_Callback(QProgressDialog_ActionEvent_Callback cb) { qprogressdialog_actionevent_callback = cb; }
    inline void setQProgressDialog_DragEnterEvent_Callback(QProgressDialog_DragEnterEvent_Callback cb) { qprogressdialog_dragenterevent_callback = cb; }
    inline void setQProgressDialog_DragMoveEvent_Callback(QProgressDialog_DragMoveEvent_Callback cb) { qprogressdialog_dragmoveevent_callback = cb; }
    inline void setQProgressDialog_DragLeaveEvent_Callback(QProgressDialog_DragLeaveEvent_Callback cb) { qprogressdialog_dragleaveevent_callback = cb; }
    inline void setQProgressDialog_DropEvent_Callback(QProgressDialog_DropEvent_Callback cb) { qprogressdialog_dropevent_callback = cb; }
    inline void setQProgressDialog_HideEvent_Callback(QProgressDialog_HideEvent_Callback cb) { qprogressdialog_hideevent_callback = cb; }
    inline void setQProgressDialog_NativeEvent_Callback(QProgressDialog_NativeEvent_Callback cb) { qprogressdialog_nativeevent_callback = cb; }
    inline void setQProgressDialog_Metric_Callback(QProgressDialog_Metric_Callback cb) { qprogressdialog_metric_callback = cb; }
    inline void setQProgressDialog_InitPainter_Callback(QProgressDialog_InitPainter_Callback cb) { qprogressdialog_initpainter_callback = cb; }
    inline void setQProgressDialog_Redirected_Callback(QProgressDialog_Redirected_Callback cb) { qprogressdialog_redirected_callback = cb; }
    inline void setQProgressDialog_SharedPainter_Callback(QProgressDialog_SharedPainter_Callback cb) { qprogressdialog_sharedpainter_callback = cb; }
    inline void setQProgressDialog_InputMethodEvent_Callback(QProgressDialog_InputMethodEvent_Callback cb) { qprogressdialog_inputmethodevent_callback = cb; }
    inline void setQProgressDialog_InputMethodQuery_Callback(QProgressDialog_InputMethodQuery_Callback cb) { qprogressdialog_inputmethodquery_callback = cb; }
    inline void setQProgressDialog_FocusNextPrevChild_Callback(QProgressDialog_FocusNextPrevChild_Callback cb) { qprogressdialog_focusnextprevchild_callback = cb; }
    inline void setQProgressDialog_TimerEvent_Callback(QProgressDialog_TimerEvent_Callback cb) { qprogressdialog_timerevent_callback = cb; }
    inline void setQProgressDialog_ChildEvent_Callback(QProgressDialog_ChildEvent_Callback cb) { qprogressdialog_childevent_callback = cb; }
    inline void setQProgressDialog_CustomEvent_Callback(QProgressDialog_CustomEvent_Callback cb) { qprogressdialog_customevent_callback = cb; }
    inline void setQProgressDialog_ConnectNotify_Callback(QProgressDialog_ConnectNotify_Callback cb) { qprogressdialog_connectnotify_callback = cb; }
    inline void setQProgressDialog_DisconnectNotify_Callback(QProgressDialog_DisconnectNotify_Callback cb) { qprogressdialog_disconnectnotify_callback = cb; }
    inline void setQProgressDialog_ForceShow_Callback(QProgressDialog_ForceShow_Callback cb) { qprogressdialog_forceshow_callback = cb; }
    inline void setQProgressDialog_AdjustPosition_Callback(QProgressDialog_AdjustPosition_Callback cb) { qprogressdialog_adjustposition_callback = cb; }
    inline void setQProgressDialog_UpdateMicroFocus_Callback(QProgressDialog_UpdateMicroFocus_Callback cb) { qprogressdialog_updatemicrofocus_callback = cb; }
    inline void setQProgressDialog_Create_Callback(QProgressDialog_Create_Callback cb) { qprogressdialog_create_callback = cb; }
    inline void setQProgressDialog_Destroy_Callback(QProgressDialog_Destroy_Callback cb) { qprogressdialog_destroy_callback = cb; }
    inline void setQProgressDialog_FocusNextChild_Callback(QProgressDialog_FocusNextChild_Callback cb) { qprogressdialog_focusnextchild_callback = cb; }
    inline void setQProgressDialog_FocusPreviousChild_Callback(QProgressDialog_FocusPreviousChild_Callback cb) { qprogressdialog_focuspreviouschild_callback = cb; }
    inline void setQProgressDialog_Sender_Callback(QProgressDialog_Sender_Callback cb) { qprogressdialog_sender_callback = cb; }
    inline void setQProgressDialog_SenderSignalIndex_Callback(QProgressDialog_SenderSignalIndex_Callback cb) { qprogressdialog_sendersignalindex_callback = cb; }
    inline void setQProgressDialog_Receivers_Callback(QProgressDialog_Receivers_Callback cb) { qprogressdialog_receivers_callback = cb; }
    inline void setQProgressDialog_IsSignalConnected_Callback(QProgressDialog_IsSignalConnected_Callback cb) { qprogressdialog_issignalconnected_callback = cb; }

    // Base flag setters
    inline void setQProgressDialog_Metacall_IsBase(bool value) const { qprogressdialog_metacall_isbase = value; }
    inline void setQProgressDialog_SizeHint_IsBase(bool value) const { qprogressdialog_sizehint_isbase = value; }
    inline void setQProgressDialog_ResizeEvent_IsBase(bool value) const { qprogressdialog_resizeevent_isbase = value; }
    inline void setQProgressDialog_CloseEvent_IsBase(bool value) const { qprogressdialog_closeevent_isbase = value; }
    inline void setQProgressDialog_ChangeEvent_IsBase(bool value) const { qprogressdialog_changeevent_isbase = value; }
    inline void setQProgressDialog_ShowEvent_IsBase(bool value) const { qprogressdialog_showevent_isbase = value; }
    inline void setQProgressDialog_SetVisible_IsBase(bool value) const { qprogressdialog_setvisible_isbase = value; }
    inline void setQProgressDialog_MinimumSizeHint_IsBase(bool value) const { qprogressdialog_minimumsizehint_isbase = value; }
    inline void setQProgressDialog_Open_IsBase(bool value) const { qprogressdialog_open_isbase = value; }
    inline void setQProgressDialog_Exec_IsBase(bool value) const { qprogressdialog_exec_isbase = value; }
    inline void setQProgressDialog_Done_IsBase(bool value) const { qprogressdialog_done_isbase = value; }
    inline void setQProgressDialog_Accept_IsBase(bool value) const { qprogressdialog_accept_isbase = value; }
    inline void setQProgressDialog_Reject_IsBase(bool value) const { qprogressdialog_reject_isbase = value; }
    inline void setQProgressDialog_KeyPressEvent_IsBase(bool value) const { qprogressdialog_keypressevent_isbase = value; }
    inline void setQProgressDialog_ContextMenuEvent_IsBase(bool value) const { qprogressdialog_contextmenuevent_isbase = value; }
    inline void setQProgressDialog_EventFilter_IsBase(bool value) const { qprogressdialog_eventfilter_isbase = value; }
    inline void setQProgressDialog_DevType_IsBase(bool value) const { qprogressdialog_devtype_isbase = value; }
    inline void setQProgressDialog_HeightForWidth_IsBase(bool value) const { qprogressdialog_heightforwidth_isbase = value; }
    inline void setQProgressDialog_HasHeightForWidth_IsBase(bool value) const { qprogressdialog_hasheightforwidth_isbase = value; }
    inline void setQProgressDialog_PaintEngine_IsBase(bool value) const { qprogressdialog_paintengine_isbase = value; }
    inline void setQProgressDialog_Event_IsBase(bool value) const { qprogressdialog_event_isbase = value; }
    inline void setQProgressDialog_MousePressEvent_IsBase(bool value) const { qprogressdialog_mousepressevent_isbase = value; }
    inline void setQProgressDialog_MouseReleaseEvent_IsBase(bool value) const { qprogressdialog_mousereleaseevent_isbase = value; }
    inline void setQProgressDialog_MouseDoubleClickEvent_IsBase(bool value) const { qprogressdialog_mousedoubleclickevent_isbase = value; }
    inline void setQProgressDialog_MouseMoveEvent_IsBase(bool value) const { qprogressdialog_mousemoveevent_isbase = value; }
    inline void setQProgressDialog_WheelEvent_IsBase(bool value) const { qprogressdialog_wheelevent_isbase = value; }
    inline void setQProgressDialog_KeyReleaseEvent_IsBase(bool value) const { qprogressdialog_keyreleaseevent_isbase = value; }
    inline void setQProgressDialog_FocusInEvent_IsBase(bool value) const { qprogressdialog_focusinevent_isbase = value; }
    inline void setQProgressDialog_FocusOutEvent_IsBase(bool value) const { qprogressdialog_focusoutevent_isbase = value; }
    inline void setQProgressDialog_EnterEvent_IsBase(bool value) const { qprogressdialog_enterevent_isbase = value; }
    inline void setQProgressDialog_LeaveEvent_IsBase(bool value) const { qprogressdialog_leaveevent_isbase = value; }
    inline void setQProgressDialog_PaintEvent_IsBase(bool value) const { qprogressdialog_paintevent_isbase = value; }
    inline void setQProgressDialog_MoveEvent_IsBase(bool value) const { qprogressdialog_moveevent_isbase = value; }
    inline void setQProgressDialog_TabletEvent_IsBase(bool value) const { qprogressdialog_tabletevent_isbase = value; }
    inline void setQProgressDialog_ActionEvent_IsBase(bool value) const { qprogressdialog_actionevent_isbase = value; }
    inline void setQProgressDialog_DragEnterEvent_IsBase(bool value) const { qprogressdialog_dragenterevent_isbase = value; }
    inline void setQProgressDialog_DragMoveEvent_IsBase(bool value) const { qprogressdialog_dragmoveevent_isbase = value; }
    inline void setQProgressDialog_DragLeaveEvent_IsBase(bool value) const { qprogressdialog_dragleaveevent_isbase = value; }
    inline void setQProgressDialog_DropEvent_IsBase(bool value) const { qprogressdialog_dropevent_isbase = value; }
    inline void setQProgressDialog_HideEvent_IsBase(bool value) const { qprogressdialog_hideevent_isbase = value; }
    inline void setQProgressDialog_NativeEvent_IsBase(bool value) const { qprogressdialog_nativeevent_isbase = value; }
    inline void setQProgressDialog_Metric_IsBase(bool value) const { qprogressdialog_metric_isbase = value; }
    inline void setQProgressDialog_InitPainter_IsBase(bool value) const { qprogressdialog_initpainter_isbase = value; }
    inline void setQProgressDialog_Redirected_IsBase(bool value) const { qprogressdialog_redirected_isbase = value; }
    inline void setQProgressDialog_SharedPainter_IsBase(bool value) const { qprogressdialog_sharedpainter_isbase = value; }
    inline void setQProgressDialog_InputMethodEvent_IsBase(bool value) const { qprogressdialog_inputmethodevent_isbase = value; }
    inline void setQProgressDialog_InputMethodQuery_IsBase(bool value) const { qprogressdialog_inputmethodquery_isbase = value; }
    inline void setQProgressDialog_FocusNextPrevChild_IsBase(bool value) const { qprogressdialog_focusnextprevchild_isbase = value; }
    inline void setQProgressDialog_TimerEvent_IsBase(bool value) const { qprogressdialog_timerevent_isbase = value; }
    inline void setQProgressDialog_ChildEvent_IsBase(bool value) const { qprogressdialog_childevent_isbase = value; }
    inline void setQProgressDialog_CustomEvent_IsBase(bool value) const { qprogressdialog_customevent_isbase = value; }
    inline void setQProgressDialog_ConnectNotify_IsBase(bool value) const { qprogressdialog_connectnotify_isbase = value; }
    inline void setQProgressDialog_DisconnectNotify_IsBase(bool value) const { qprogressdialog_disconnectnotify_isbase = value; }
    inline void setQProgressDialog_ForceShow_IsBase(bool value) const { qprogressdialog_forceshow_isbase = value; }
    inline void setQProgressDialog_AdjustPosition_IsBase(bool value) const { qprogressdialog_adjustposition_isbase = value; }
    inline void setQProgressDialog_UpdateMicroFocus_IsBase(bool value) const { qprogressdialog_updatemicrofocus_isbase = value; }
    inline void setQProgressDialog_Create_IsBase(bool value) const { qprogressdialog_create_isbase = value; }
    inline void setQProgressDialog_Destroy_IsBase(bool value) const { qprogressdialog_destroy_isbase = value; }
    inline void setQProgressDialog_FocusNextChild_IsBase(bool value) const { qprogressdialog_focusnextchild_isbase = value; }
    inline void setQProgressDialog_FocusPreviousChild_IsBase(bool value) const { qprogressdialog_focuspreviouschild_isbase = value; }
    inline void setQProgressDialog_Sender_IsBase(bool value) const { qprogressdialog_sender_isbase = value; }
    inline void setQProgressDialog_SenderSignalIndex_IsBase(bool value) const { qprogressdialog_sendersignalindex_isbase = value; }
    inline void setQProgressDialog_Receivers_IsBase(bool value) const { qprogressdialog_receivers_isbase = value; }
    inline void setQProgressDialog_IsSignalConnected_IsBase(bool value) const { qprogressdialog_issignalconnected_isbase = value; }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (qprogressdialog_metacall_isbase) {
            qprogressdialog_metacall_isbase = false;
            return QProgressDialog::qt_metacall(param1, param2, param3);
        } else if (qprogressdialog_metacall_callback != nullptr) {
            int cbval1 = static_cast<int>(param1);
            int cbval2 = param2;
            void** cbval3 = param3;

            int callback_ret = qprogressdialog_metacall_callback(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        } else {
            return QProgressDialog::qt_metacall(param1, param2, param3);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QSize sizeHint() const override {
        if (qprogressdialog_sizehint_isbase) {
            qprogressdialog_sizehint_isbase = false;
            return QProgressDialog::sizeHint();
        } else if (qprogressdialog_sizehint_callback != nullptr) {
            QSize* callback_ret = qprogressdialog_sizehint_callback();
            return *callback_ret;
        } else {
            return QProgressDialog::sizeHint();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void resizeEvent(QResizeEvent* event) override {
        if (qprogressdialog_resizeevent_isbase) {
            qprogressdialog_resizeevent_isbase = false;
            QProgressDialog::resizeEvent(event);
        } else if (qprogressdialog_resizeevent_callback != nullptr) {
            QResizeEvent* cbval1 = event;

            qprogressdialog_resizeevent_callback(this, cbval1);
        } else {
            QProgressDialog::resizeEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void closeEvent(QCloseEvent* event) override {
        if (qprogressdialog_closeevent_isbase) {
            qprogressdialog_closeevent_isbase = false;
            QProgressDialog::closeEvent(event);
        } else if (qprogressdialog_closeevent_callback != nullptr) {
            QCloseEvent* cbval1 = event;

            qprogressdialog_closeevent_callback(this, cbval1);
        } else {
            QProgressDialog::closeEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void changeEvent(QEvent* event) override {
        if (qprogressdialog_changeevent_isbase) {
            qprogressdialog_changeevent_isbase = false;
            QProgressDialog::changeEvent(event);
        } else if (qprogressdialog_changeevent_callback != nullptr) {
            QEvent* cbval1 = event;

            qprogressdialog_changeevent_callback(this, cbval1);
        } else {
            QProgressDialog::changeEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void showEvent(QShowEvent* event) override {
        if (qprogressdialog_showevent_isbase) {
            qprogressdialog_showevent_isbase = false;
            QProgressDialog::showEvent(event);
        } else if (qprogressdialog_showevent_callback != nullptr) {
            QShowEvent* cbval1 = event;

            qprogressdialog_showevent_callback(this, cbval1);
        } else {
            QProgressDialog::showEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void setVisible(bool visible) override {
        if (qprogressdialog_setvisible_isbase) {
            qprogressdialog_setvisible_isbase = false;
            QProgressDialog::setVisible(visible);
        } else if (qprogressdialog_setvisible_callback != nullptr) {
            bool cbval1 = visible;

            qprogressdialog_setvisible_callback(this, cbval1);
        } else {
            QProgressDialog::setVisible(visible);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QSize minimumSizeHint() const override {
        if (qprogressdialog_minimumsizehint_isbase) {
            qprogressdialog_minimumsizehint_isbase = false;
            return QProgressDialog::minimumSizeHint();
        } else if (qprogressdialog_minimumsizehint_callback != nullptr) {
            QSize* callback_ret = qprogressdialog_minimumsizehint_callback();
            return *callback_ret;
        } else {
            return QProgressDialog::minimumSizeHint();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void open() override {
        if (qprogressdialog_open_isbase) {
            qprogressdialog_open_isbase = false;
            QProgressDialog::open();
        } else if (qprogressdialog_open_callback != nullptr) {
            qprogressdialog_open_callback();
        } else {
            QProgressDialog::open();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual int exec() override {
        if (qprogressdialog_exec_isbase) {
            qprogressdialog_exec_isbase = false;
            return QProgressDialog::exec();
        } else if (qprogressdialog_exec_callback != nullptr) {
            int callback_ret = qprogressdialog_exec_callback();
            return static_cast<int>(callback_ret);
        } else {
            return QProgressDialog::exec();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void done(int param1) override {
        if (qprogressdialog_done_isbase) {
            qprogressdialog_done_isbase = false;
            QProgressDialog::done(param1);
        } else if (qprogressdialog_done_callback != nullptr) {
            int cbval1 = param1;

            qprogressdialog_done_callback(this, cbval1);
        } else {
            QProgressDialog::done(param1);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void accept() override {
        if (qprogressdialog_accept_isbase) {
            qprogressdialog_accept_isbase = false;
            QProgressDialog::accept();
        } else if (qprogressdialog_accept_callback != nullptr) {
            qprogressdialog_accept_callback();
        } else {
            QProgressDialog::accept();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void reject() override {
        if (qprogressdialog_reject_isbase) {
            qprogressdialog_reject_isbase = false;
            QProgressDialog::reject();
        } else if (qprogressdialog_reject_callback != nullptr) {
            qprogressdialog_reject_callback();
        } else {
            QProgressDialog::reject();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void keyPressEvent(QKeyEvent* param1) override {
        if (qprogressdialog_keypressevent_isbase) {
            qprogressdialog_keypressevent_isbase = false;
            QProgressDialog::keyPressEvent(param1);
        } else if (qprogressdialog_keypressevent_callback != nullptr) {
            QKeyEvent* cbval1 = param1;

            qprogressdialog_keypressevent_callback(this, cbval1);
        } else {
            QProgressDialog::keyPressEvent(param1);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void contextMenuEvent(QContextMenuEvent* param1) override {
        if (qprogressdialog_contextmenuevent_isbase) {
            qprogressdialog_contextmenuevent_isbase = false;
            QProgressDialog::contextMenuEvent(param1);
        } else if (qprogressdialog_contextmenuevent_callback != nullptr) {
            QContextMenuEvent* cbval1 = param1;

            qprogressdialog_contextmenuevent_callback(this, cbval1);
        } else {
            QProgressDialog::contextMenuEvent(param1);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* param1, QEvent* param2) override {
        if (qprogressdialog_eventfilter_isbase) {
            qprogressdialog_eventfilter_isbase = false;
            return QProgressDialog::eventFilter(param1, param2);
        } else if (qprogressdialog_eventfilter_callback != nullptr) {
            QObject* cbval1 = param1;
            QEvent* cbval2 = param2;

            bool callback_ret = qprogressdialog_eventfilter_callback(this, cbval1, cbval2);
            return callback_ret;
        } else {
            return QProgressDialog::eventFilter(param1, param2);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual int devType() const override {
        if (qprogressdialog_devtype_isbase) {
            qprogressdialog_devtype_isbase = false;
            return QProgressDialog::devType();
        } else if (qprogressdialog_devtype_callback != nullptr) {
            int callback_ret = qprogressdialog_devtype_callback();
            return static_cast<int>(callback_ret);
        } else {
            return QProgressDialog::devType();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual int heightForWidth(int param1) const override {
        if (qprogressdialog_heightforwidth_isbase) {
            qprogressdialog_heightforwidth_isbase = false;
            return QProgressDialog::heightForWidth(param1);
        } else if (qprogressdialog_heightforwidth_callback != nullptr) {
            int cbval1 = param1;

            int callback_ret = qprogressdialog_heightforwidth_callback(this, cbval1);
            return static_cast<int>(callback_ret);
        } else {
            return QProgressDialog::heightForWidth(param1);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool hasHeightForWidth() const override {
        if (qprogressdialog_hasheightforwidth_isbase) {
            qprogressdialog_hasheightforwidth_isbase = false;
            return QProgressDialog::hasHeightForWidth();
        } else if (qprogressdialog_hasheightforwidth_callback != nullptr) {
            bool callback_ret = qprogressdialog_hasheightforwidth_callback();
            return callback_ret;
        } else {
            return QProgressDialog::hasHeightForWidth();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QPaintEngine* paintEngine() const override {
        if (qprogressdialog_paintengine_isbase) {
            qprogressdialog_paintengine_isbase = false;
            return QProgressDialog::paintEngine();
        } else if (qprogressdialog_paintengine_callback != nullptr) {
            QPaintEngine* callback_ret = qprogressdialog_paintengine_callback();
            return callback_ret;
        } else {
            return QProgressDialog::paintEngine();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* event) override {
        if (qprogressdialog_event_isbase) {
            qprogressdialog_event_isbase = false;
            return QProgressDialog::event(event);
        } else if (qprogressdialog_event_callback != nullptr) {
            QEvent* cbval1 = event;

            bool callback_ret = qprogressdialog_event_callback(this, cbval1);
            return callback_ret;
        } else {
            return QProgressDialog::event(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void mousePressEvent(QMouseEvent* event) override {
        if (qprogressdialog_mousepressevent_isbase) {
            qprogressdialog_mousepressevent_isbase = false;
            QProgressDialog::mousePressEvent(event);
        } else if (qprogressdialog_mousepressevent_callback != nullptr) {
            QMouseEvent* cbval1 = event;

            qprogressdialog_mousepressevent_callback(this, cbval1);
        } else {
            QProgressDialog::mousePressEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseReleaseEvent(QMouseEvent* event) override {
        if (qprogressdialog_mousereleaseevent_isbase) {
            qprogressdialog_mousereleaseevent_isbase = false;
            QProgressDialog::mouseReleaseEvent(event);
        } else if (qprogressdialog_mousereleaseevent_callback != nullptr) {
            QMouseEvent* cbval1 = event;

            qprogressdialog_mousereleaseevent_callback(this, cbval1);
        } else {
            QProgressDialog::mouseReleaseEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseDoubleClickEvent(QMouseEvent* event) override {
        if (qprogressdialog_mousedoubleclickevent_isbase) {
            qprogressdialog_mousedoubleclickevent_isbase = false;
            QProgressDialog::mouseDoubleClickEvent(event);
        } else if (qprogressdialog_mousedoubleclickevent_callback != nullptr) {
            QMouseEvent* cbval1 = event;

            qprogressdialog_mousedoubleclickevent_callback(this, cbval1);
        } else {
            QProgressDialog::mouseDoubleClickEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseMoveEvent(QMouseEvent* event) override {
        if (qprogressdialog_mousemoveevent_isbase) {
            qprogressdialog_mousemoveevent_isbase = false;
            QProgressDialog::mouseMoveEvent(event);
        } else if (qprogressdialog_mousemoveevent_callback != nullptr) {
            QMouseEvent* cbval1 = event;

            qprogressdialog_mousemoveevent_callback(this, cbval1);
        } else {
            QProgressDialog::mouseMoveEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void wheelEvent(QWheelEvent* event) override {
        if (qprogressdialog_wheelevent_isbase) {
            qprogressdialog_wheelevent_isbase = false;
            QProgressDialog::wheelEvent(event);
        } else if (qprogressdialog_wheelevent_callback != nullptr) {
            QWheelEvent* cbval1 = event;

            qprogressdialog_wheelevent_callback(this, cbval1);
        } else {
            QProgressDialog::wheelEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void keyReleaseEvent(QKeyEvent* event) override {
        if (qprogressdialog_keyreleaseevent_isbase) {
            qprogressdialog_keyreleaseevent_isbase = false;
            QProgressDialog::keyReleaseEvent(event);
        } else if (qprogressdialog_keyreleaseevent_callback != nullptr) {
            QKeyEvent* cbval1 = event;

            qprogressdialog_keyreleaseevent_callback(this, cbval1);
        } else {
            QProgressDialog::keyReleaseEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void focusInEvent(QFocusEvent* event) override {
        if (qprogressdialog_focusinevent_isbase) {
            qprogressdialog_focusinevent_isbase = false;
            QProgressDialog::focusInEvent(event);
        } else if (qprogressdialog_focusinevent_callback != nullptr) {
            QFocusEvent* cbval1 = event;

            qprogressdialog_focusinevent_callback(this, cbval1);
        } else {
            QProgressDialog::focusInEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void focusOutEvent(QFocusEvent* event) override {
        if (qprogressdialog_focusoutevent_isbase) {
            qprogressdialog_focusoutevent_isbase = false;
            QProgressDialog::focusOutEvent(event);
        } else if (qprogressdialog_focusoutevent_callback != nullptr) {
            QFocusEvent* cbval1 = event;

            qprogressdialog_focusoutevent_callback(this, cbval1);
        } else {
            QProgressDialog::focusOutEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void enterEvent(QEnterEvent* event) override {
        if (qprogressdialog_enterevent_isbase) {
            qprogressdialog_enterevent_isbase = false;
            QProgressDialog::enterEvent(event);
        } else if (qprogressdialog_enterevent_callback != nullptr) {
            QEnterEvent* cbval1 = event;

            qprogressdialog_enterevent_callback(this, cbval1);
        } else {
            QProgressDialog::enterEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void leaveEvent(QEvent* event) override {
        if (qprogressdialog_leaveevent_isbase) {
            qprogressdialog_leaveevent_isbase = false;
            QProgressDialog::leaveEvent(event);
        } else if (qprogressdialog_leaveevent_callback != nullptr) {
            QEvent* cbval1 = event;

            qprogressdialog_leaveevent_callback(this, cbval1);
        } else {
            QProgressDialog::leaveEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void paintEvent(QPaintEvent* event) override {
        if (qprogressdialog_paintevent_isbase) {
            qprogressdialog_paintevent_isbase = false;
            QProgressDialog::paintEvent(event);
        } else if (qprogressdialog_paintevent_callback != nullptr) {
            QPaintEvent* cbval1 = event;

            qprogressdialog_paintevent_callback(this, cbval1);
        } else {
            QProgressDialog::paintEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void moveEvent(QMoveEvent* event) override {
        if (qprogressdialog_moveevent_isbase) {
            qprogressdialog_moveevent_isbase = false;
            QProgressDialog::moveEvent(event);
        } else if (qprogressdialog_moveevent_callback != nullptr) {
            QMoveEvent* cbval1 = event;

            qprogressdialog_moveevent_callback(this, cbval1);
        } else {
            QProgressDialog::moveEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void tabletEvent(QTabletEvent* event) override {
        if (qprogressdialog_tabletevent_isbase) {
            qprogressdialog_tabletevent_isbase = false;
            QProgressDialog::tabletEvent(event);
        } else if (qprogressdialog_tabletevent_callback != nullptr) {
            QTabletEvent* cbval1 = event;

            qprogressdialog_tabletevent_callback(this, cbval1);
        } else {
            QProgressDialog::tabletEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void actionEvent(QActionEvent* event) override {
        if (qprogressdialog_actionevent_isbase) {
            qprogressdialog_actionevent_isbase = false;
            QProgressDialog::actionEvent(event);
        } else if (qprogressdialog_actionevent_callback != nullptr) {
            QActionEvent* cbval1 = event;

            qprogressdialog_actionevent_callback(this, cbval1);
        } else {
            QProgressDialog::actionEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragEnterEvent(QDragEnterEvent* event) override {
        if (qprogressdialog_dragenterevent_isbase) {
            qprogressdialog_dragenterevent_isbase = false;
            QProgressDialog::dragEnterEvent(event);
        } else if (qprogressdialog_dragenterevent_callback != nullptr) {
            QDragEnterEvent* cbval1 = event;

            qprogressdialog_dragenterevent_callback(this, cbval1);
        } else {
            QProgressDialog::dragEnterEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragMoveEvent(QDragMoveEvent* event) override {
        if (qprogressdialog_dragmoveevent_isbase) {
            qprogressdialog_dragmoveevent_isbase = false;
            QProgressDialog::dragMoveEvent(event);
        } else if (qprogressdialog_dragmoveevent_callback != nullptr) {
            QDragMoveEvent* cbval1 = event;

            qprogressdialog_dragmoveevent_callback(this, cbval1);
        } else {
            QProgressDialog::dragMoveEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragLeaveEvent(QDragLeaveEvent* event) override {
        if (qprogressdialog_dragleaveevent_isbase) {
            qprogressdialog_dragleaveevent_isbase = false;
            QProgressDialog::dragLeaveEvent(event);
        } else if (qprogressdialog_dragleaveevent_callback != nullptr) {
            QDragLeaveEvent* cbval1 = event;

            qprogressdialog_dragleaveevent_callback(this, cbval1);
        } else {
            QProgressDialog::dragLeaveEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void dropEvent(QDropEvent* event) override {
        if (qprogressdialog_dropevent_isbase) {
            qprogressdialog_dropevent_isbase = false;
            QProgressDialog::dropEvent(event);
        } else if (qprogressdialog_dropevent_callback != nullptr) {
            QDropEvent* cbval1 = event;

            qprogressdialog_dropevent_callback(this, cbval1);
        } else {
            QProgressDialog::dropEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void hideEvent(QHideEvent* event) override {
        if (qprogressdialog_hideevent_isbase) {
            qprogressdialog_hideevent_isbase = false;
            QProgressDialog::hideEvent(event);
        } else if (qprogressdialog_hideevent_callback != nullptr) {
            QHideEvent* cbval1 = event;

            qprogressdialog_hideevent_callback(this, cbval1);
        } else {
            QProgressDialog::hideEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool nativeEvent(const QByteArray& eventType, void* message, qintptr* result) override {
        if (qprogressdialog_nativeevent_isbase) {
            qprogressdialog_nativeevent_isbase = false;
            return QProgressDialog::nativeEvent(eventType, message, result);
        } else if (qprogressdialog_nativeevent_callback != nullptr) {
            const QByteArray eventType_qb = eventType;
            libqt_string eventType_str;
            eventType_str.len = eventType_qb.length();
            eventType_str.data = static_cast<char*>(malloc((eventType_str.len + 1) * sizeof(char)));
            memcpy(eventType_str.data, eventType_qb.data(), eventType_str.len);
            eventType_str.data[eventType_str.len] = '\0';
            libqt_string cbval1 = eventType_str;
            void* cbval2 = message;
            qintptr* result_ret = result;
            intptr_t* cbval3 = (intptr_t*)(result_ret);

            bool callback_ret = qprogressdialog_nativeevent_callback(this, cbval1, cbval2, cbval3);
            return callback_ret;
        } else {
            return QProgressDialog::nativeEvent(eventType, message, result);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual int metric(QPaintDevice::PaintDeviceMetric param1) const override {
        if (qprogressdialog_metric_isbase) {
            qprogressdialog_metric_isbase = false;
            return QProgressDialog::metric(param1);
        } else if (qprogressdialog_metric_callback != nullptr) {
            int cbval1 = static_cast<int>(param1);

            int callback_ret = qprogressdialog_metric_callback(this, cbval1);
            return static_cast<int>(callback_ret);
        } else {
            return QProgressDialog::metric(param1);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void initPainter(QPainter* painter) const override {
        if (qprogressdialog_initpainter_isbase) {
            qprogressdialog_initpainter_isbase = false;
            QProgressDialog::initPainter(painter);
        } else if (qprogressdialog_initpainter_callback != nullptr) {
            QPainter* cbval1 = painter;

            qprogressdialog_initpainter_callback(this, cbval1);
        } else {
            QProgressDialog::initPainter(painter);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QPaintDevice* redirected(QPoint* offset) const override {
        if (qprogressdialog_redirected_isbase) {
            qprogressdialog_redirected_isbase = false;
            return QProgressDialog::redirected(offset);
        } else if (qprogressdialog_redirected_callback != nullptr) {
            QPoint* cbval1 = offset;

            QPaintDevice* callback_ret = qprogressdialog_redirected_callback(this, cbval1);
            return callback_ret;
        } else {
            return QProgressDialog::redirected(offset);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QPainter* sharedPainter() const override {
        if (qprogressdialog_sharedpainter_isbase) {
            qprogressdialog_sharedpainter_isbase = false;
            return QProgressDialog::sharedPainter();
        } else if (qprogressdialog_sharedpainter_callback != nullptr) {
            QPainter* callback_ret = qprogressdialog_sharedpainter_callback();
            return callback_ret;
        } else {
            return QProgressDialog::sharedPainter();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void inputMethodEvent(QInputMethodEvent* param1) override {
        if (qprogressdialog_inputmethodevent_isbase) {
            qprogressdialog_inputmethodevent_isbase = false;
            QProgressDialog::inputMethodEvent(param1);
        } else if (qprogressdialog_inputmethodevent_callback != nullptr) {
            QInputMethodEvent* cbval1 = param1;

            qprogressdialog_inputmethodevent_callback(this, cbval1);
        } else {
            QProgressDialog::inputMethodEvent(param1);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QVariant inputMethodQuery(Qt::InputMethodQuery param1) const override {
        if (qprogressdialog_inputmethodquery_isbase) {
            qprogressdialog_inputmethodquery_isbase = false;
            return QProgressDialog::inputMethodQuery(param1);
        } else if (qprogressdialog_inputmethodquery_callback != nullptr) {
            int cbval1 = static_cast<int>(param1);

            QVariant* callback_ret = qprogressdialog_inputmethodquery_callback(this, cbval1);
            return *callback_ret;
        } else {
            return QProgressDialog::inputMethodQuery(param1);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool focusNextPrevChild(bool next) override {
        if (qprogressdialog_focusnextprevchild_isbase) {
            qprogressdialog_focusnextprevchild_isbase = false;
            return QProgressDialog::focusNextPrevChild(next);
        } else if (qprogressdialog_focusnextprevchild_callback != nullptr) {
            bool cbval1 = next;

            bool callback_ret = qprogressdialog_focusnextprevchild_callback(this, cbval1);
            return callback_ret;
        } else {
            return QProgressDialog::focusNextPrevChild(next);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (qprogressdialog_timerevent_isbase) {
            qprogressdialog_timerevent_isbase = false;
            QProgressDialog::timerEvent(event);
        } else if (qprogressdialog_timerevent_callback != nullptr) {
            QTimerEvent* cbval1 = event;

            qprogressdialog_timerevent_callback(this, cbval1);
        } else {
            QProgressDialog::timerEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (qprogressdialog_childevent_isbase) {
            qprogressdialog_childevent_isbase = false;
            QProgressDialog::childEvent(event);
        } else if (qprogressdialog_childevent_callback != nullptr) {
            QChildEvent* cbval1 = event;

            qprogressdialog_childevent_callback(this, cbval1);
        } else {
            QProgressDialog::childEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (qprogressdialog_customevent_isbase) {
            qprogressdialog_customevent_isbase = false;
            QProgressDialog::customEvent(event);
        } else if (qprogressdialog_customevent_callback != nullptr) {
            QEvent* cbval1 = event;

            qprogressdialog_customevent_callback(this, cbval1);
        } else {
            QProgressDialog::customEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (qprogressdialog_connectnotify_isbase) {
            qprogressdialog_connectnotify_isbase = false;
            QProgressDialog::connectNotify(signal);
        } else if (qprogressdialog_connectnotify_callback != nullptr) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            qprogressdialog_connectnotify_callback(this, cbval1);
        } else {
            QProgressDialog::connectNotify(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (qprogressdialog_disconnectnotify_isbase) {
            qprogressdialog_disconnectnotify_isbase = false;
            QProgressDialog::disconnectNotify(signal);
        } else if (qprogressdialog_disconnectnotify_callback != nullptr) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            qprogressdialog_disconnectnotify_callback(this, cbval1);
        } else {
            QProgressDialog::disconnectNotify(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    void forceShow() {
        if (qprogressdialog_forceshow_isbase) {
            qprogressdialog_forceshow_isbase = false;
            QProgressDialog::forceShow();
        } else if (qprogressdialog_forceshow_callback != nullptr) {
            qprogressdialog_forceshow_callback();
        } else {
            QProgressDialog::forceShow();
        }
    }

    // Virtual method for C ABI access and custom callback
    void adjustPosition(QWidget* param1) {
        if (qprogressdialog_adjustposition_isbase) {
            qprogressdialog_adjustposition_isbase = false;
            QProgressDialog::adjustPosition(param1);
        } else if (qprogressdialog_adjustposition_callback != nullptr) {
            QWidget* cbval1 = param1;

            qprogressdialog_adjustposition_callback(this, cbval1);
        } else {
            QProgressDialog::adjustPosition(param1);
        }
    }

    // Virtual method for C ABI access and custom callback
    void updateMicroFocus() {
        if (qprogressdialog_updatemicrofocus_isbase) {
            qprogressdialog_updatemicrofocus_isbase = false;
            QProgressDialog::updateMicroFocus();
        } else if (qprogressdialog_updatemicrofocus_callback != nullptr) {
            qprogressdialog_updatemicrofocus_callback();
        } else {
            QProgressDialog::updateMicroFocus();
        }
    }

    // Virtual method for C ABI access and custom callback
    void create() {
        if (qprogressdialog_create_isbase) {
            qprogressdialog_create_isbase = false;
            QProgressDialog::create();
        } else if (qprogressdialog_create_callback != nullptr) {
            qprogressdialog_create_callback();
        } else {
            QProgressDialog::create();
        }
    }

    // Virtual method for C ABI access and custom callback
    void destroy() {
        if (qprogressdialog_destroy_isbase) {
            qprogressdialog_destroy_isbase = false;
            QProgressDialog::destroy();
        } else if (qprogressdialog_destroy_callback != nullptr) {
            qprogressdialog_destroy_callback();
        } else {
            QProgressDialog::destroy();
        }
    }

    // Virtual method for C ABI access and custom callback
    bool focusNextChild() {
        if (qprogressdialog_focusnextchild_isbase) {
            qprogressdialog_focusnextchild_isbase = false;
            return QProgressDialog::focusNextChild();
        } else if (qprogressdialog_focusnextchild_callback != nullptr) {
            bool callback_ret = qprogressdialog_focusnextchild_callback();
            return callback_ret;
        } else {
            return QProgressDialog::focusNextChild();
        }
    }

    // Virtual method for C ABI access and custom callback
    bool focusPreviousChild() {
        if (qprogressdialog_focuspreviouschild_isbase) {
            qprogressdialog_focuspreviouschild_isbase = false;
            return QProgressDialog::focusPreviousChild();
        } else if (qprogressdialog_focuspreviouschild_callback != nullptr) {
            bool callback_ret = qprogressdialog_focuspreviouschild_callback();
            return callback_ret;
        } else {
            return QProgressDialog::focusPreviousChild();
        }
    }

    // Virtual method for C ABI access and custom callback
    QObject* sender() const {
        if (qprogressdialog_sender_isbase) {
            qprogressdialog_sender_isbase = false;
            return QProgressDialog::sender();
        } else if (qprogressdialog_sender_callback != nullptr) {
            QObject* callback_ret = qprogressdialog_sender_callback();
            return callback_ret;
        } else {
            return QProgressDialog::sender();
        }
    }

    // Virtual method for C ABI access and custom callback
    int senderSignalIndex() const {
        if (qprogressdialog_sendersignalindex_isbase) {
            qprogressdialog_sendersignalindex_isbase = false;
            return QProgressDialog::senderSignalIndex();
        } else if (qprogressdialog_sendersignalindex_callback != nullptr) {
            int callback_ret = qprogressdialog_sendersignalindex_callback();
            return static_cast<int>(callback_ret);
        } else {
            return QProgressDialog::senderSignalIndex();
        }
    }

    // Virtual method for C ABI access and custom callback
    int receivers(const char* signal) const {
        if (qprogressdialog_receivers_isbase) {
            qprogressdialog_receivers_isbase = false;
            return QProgressDialog::receivers(signal);
        } else if (qprogressdialog_receivers_callback != nullptr) {
            const char* cbval1 = (const char*)signal;

            int callback_ret = qprogressdialog_receivers_callback(this, cbval1);
            return static_cast<int>(callback_ret);
        } else {
            return QProgressDialog::receivers(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    bool isSignalConnected(const QMetaMethod& signal) const {
        if (qprogressdialog_issignalconnected_isbase) {
            qprogressdialog_issignalconnected_isbase = false;
            return QProgressDialog::isSignalConnected(signal);
        } else if (qprogressdialog_issignalconnected_callback != nullptr) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            bool callback_ret = qprogressdialog_issignalconnected_callback(this, cbval1);
            return callback_ret;
        } else {
            return QProgressDialog::isSignalConnected(signal);
        }
    }

    // Friend functions
    friend void QProgressDialog_ResizeEvent(QProgressDialog* self, QResizeEvent* event);
    friend void QProgressDialog_QBaseResizeEvent(QProgressDialog* self, QResizeEvent* event);
    friend void QProgressDialog_CloseEvent(QProgressDialog* self, QCloseEvent* event);
    friend void QProgressDialog_QBaseCloseEvent(QProgressDialog* self, QCloseEvent* event);
    friend void QProgressDialog_ChangeEvent(QProgressDialog* self, QEvent* event);
    friend void QProgressDialog_QBaseChangeEvent(QProgressDialog* self, QEvent* event);
    friend void QProgressDialog_ShowEvent(QProgressDialog* self, QShowEvent* event);
    friend void QProgressDialog_QBaseShowEvent(QProgressDialog* self, QShowEvent* event);
    friend void QProgressDialog_KeyPressEvent(QProgressDialog* self, QKeyEvent* param1);
    friend void QProgressDialog_QBaseKeyPressEvent(QProgressDialog* self, QKeyEvent* param1);
    friend void QProgressDialog_ContextMenuEvent(QProgressDialog* self, QContextMenuEvent* param1);
    friend void QProgressDialog_QBaseContextMenuEvent(QProgressDialog* self, QContextMenuEvent* param1);
    friend bool QProgressDialog_EventFilter(QProgressDialog* self, QObject* param1, QEvent* param2);
    friend bool QProgressDialog_QBaseEventFilter(QProgressDialog* self, QObject* param1, QEvent* param2);
    friend bool QProgressDialog_Event(QProgressDialog* self, QEvent* event);
    friend bool QProgressDialog_QBaseEvent(QProgressDialog* self, QEvent* event);
    friend void QProgressDialog_MousePressEvent(QProgressDialog* self, QMouseEvent* event);
    friend void QProgressDialog_QBaseMousePressEvent(QProgressDialog* self, QMouseEvent* event);
    friend void QProgressDialog_MouseReleaseEvent(QProgressDialog* self, QMouseEvent* event);
    friend void QProgressDialog_QBaseMouseReleaseEvent(QProgressDialog* self, QMouseEvent* event);
    friend void QProgressDialog_MouseDoubleClickEvent(QProgressDialog* self, QMouseEvent* event);
    friend void QProgressDialog_QBaseMouseDoubleClickEvent(QProgressDialog* self, QMouseEvent* event);
    friend void QProgressDialog_MouseMoveEvent(QProgressDialog* self, QMouseEvent* event);
    friend void QProgressDialog_QBaseMouseMoveEvent(QProgressDialog* self, QMouseEvent* event);
    friend void QProgressDialog_WheelEvent(QProgressDialog* self, QWheelEvent* event);
    friend void QProgressDialog_QBaseWheelEvent(QProgressDialog* self, QWheelEvent* event);
    friend void QProgressDialog_KeyReleaseEvent(QProgressDialog* self, QKeyEvent* event);
    friend void QProgressDialog_QBaseKeyReleaseEvent(QProgressDialog* self, QKeyEvent* event);
    friend void QProgressDialog_FocusInEvent(QProgressDialog* self, QFocusEvent* event);
    friend void QProgressDialog_QBaseFocusInEvent(QProgressDialog* self, QFocusEvent* event);
    friend void QProgressDialog_FocusOutEvent(QProgressDialog* self, QFocusEvent* event);
    friend void QProgressDialog_QBaseFocusOutEvent(QProgressDialog* self, QFocusEvent* event);
    friend void QProgressDialog_EnterEvent(QProgressDialog* self, QEnterEvent* event);
    friend void QProgressDialog_QBaseEnterEvent(QProgressDialog* self, QEnterEvent* event);
    friend void QProgressDialog_LeaveEvent(QProgressDialog* self, QEvent* event);
    friend void QProgressDialog_QBaseLeaveEvent(QProgressDialog* self, QEvent* event);
    friend void QProgressDialog_PaintEvent(QProgressDialog* self, QPaintEvent* event);
    friend void QProgressDialog_QBasePaintEvent(QProgressDialog* self, QPaintEvent* event);
    friend void QProgressDialog_MoveEvent(QProgressDialog* self, QMoveEvent* event);
    friend void QProgressDialog_QBaseMoveEvent(QProgressDialog* self, QMoveEvent* event);
    friend void QProgressDialog_TabletEvent(QProgressDialog* self, QTabletEvent* event);
    friend void QProgressDialog_QBaseTabletEvent(QProgressDialog* self, QTabletEvent* event);
    friend void QProgressDialog_ActionEvent(QProgressDialog* self, QActionEvent* event);
    friend void QProgressDialog_QBaseActionEvent(QProgressDialog* self, QActionEvent* event);
    friend void QProgressDialog_DragEnterEvent(QProgressDialog* self, QDragEnterEvent* event);
    friend void QProgressDialog_QBaseDragEnterEvent(QProgressDialog* self, QDragEnterEvent* event);
    friend void QProgressDialog_DragMoveEvent(QProgressDialog* self, QDragMoveEvent* event);
    friend void QProgressDialog_QBaseDragMoveEvent(QProgressDialog* self, QDragMoveEvent* event);
    friend void QProgressDialog_DragLeaveEvent(QProgressDialog* self, QDragLeaveEvent* event);
    friend void QProgressDialog_QBaseDragLeaveEvent(QProgressDialog* self, QDragLeaveEvent* event);
    friend void QProgressDialog_DropEvent(QProgressDialog* self, QDropEvent* event);
    friend void QProgressDialog_QBaseDropEvent(QProgressDialog* self, QDropEvent* event);
    friend void QProgressDialog_HideEvent(QProgressDialog* self, QHideEvent* event);
    friend void QProgressDialog_QBaseHideEvent(QProgressDialog* self, QHideEvent* event);
    friend bool QProgressDialog_NativeEvent(QProgressDialog* self, const libqt_string eventType, void* message, intptr_t* result);
    friend bool QProgressDialog_QBaseNativeEvent(QProgressDialog* self, const libqt_string eventType, void* message, intptr_t* result);
    friend int QProgressDialog_Metric(const QProgressDialog* self, int param1);
    friend int QProgressDialog_QBaseMetric(const QProgressDialog* self, int param1);
    friend void QProgressDialog_InitPainter(const QProgressDialog* self, QPainter* painter);
    friend void QProgressDialog_QBaseInitPainter(const QProgressDialog* self, QPainter* painter);
    friend QPaintDevice* QProgressDialog_Redirected(const QProgressDialog* self, QPoint* offset);
    friend QPaintDevice* QProgressDialog_QBaseRedirected(const QProgressDialog* self, QPoint* offset);
    friend QPainter* QProgressDialog_SharedPainter(const QProgressDialog* self);
    friend QPainter* QProgressDialog_QBaseSharedPainter(const QProgressDialog* self);
    friend void QProgressDialog_InputMethodEvent(QProgressDialog* self, QInputMethodEvent* param1);
    friend void QProgressDialog_QBaseInputMethodEvent(QProgressDialog* self, QInputMethodEvent* param1);
    friend bool QProgressDialog_FocusNextPrevChild(QProgressDialog* self, bool next);
    friend bool QProgressDialog_QBaseFocusNextPrevChild(QProgressDialog* self, bool next);
    friend void QProgressDialog_TimerEvent(QProgressDialog* self, QTimerEvent* event);
    friend void QProgressDialog_QBaseTimerEvent(QProgressDialog* self, QTimerEvent* event);
    friend void QProgressDialog_ChildEvent(QProgressDialog* self, QChildEvent* event);
    friend void QProgressDialog_QBaseChildEvent(QProgressDialog* self, QChildEvent* event);
    friend void QProgressDialog_CustomEvent(QProgressDialog* self, QEvent* event);
    friend void QProgressDialog_QBaseCustomEvent(QProgressDialog* self, QEvent* event);
    friend void QProgressDialog_ConnectNotify(QProgressDialog* self, const QMetaMethod* signal);
    friend void QProgressDialog_QBaseConnectNotify(QProgressDialog* self, const QMetaMethod* signal);
    friend void QProgressDialog_DisconnectNotify(QProgressDialog* self, const QMetaMethod* signal);
    friend void QProgressDialog_QBaseDisconnectNotify(QProgressDialog* self, const QMetaMethod* signal);
    friend void QProgressDialog_ForceShow(QProgressDialog* self);
    friend void QProgressDialog_QBaseForceShow(QProgressDialog* self);
    friend void QProgressDialog_AdjustPosition(QProgressDialog* self, QWidget* param1);
    friend void QProgressDialog_QBaseAdjustPosition(QProgressDialog* self, QWidget* param1);
    friend void QProgressDialog_UpdateMicroFocus(QProgressDialog* self);
    friend void QProgressDialog_QBaseUpdateMicroFocus(QProgressDialog* self);
    friend void QProgressDialog_Create(QProgressDialog* self);
    friend void QProgressDialog_QBaseCreate(QProgressDialog* self);
    friend void QProgressDialog_Destroy(QProgressDialog* self);
    friend void QProgressDialog_QBaseDestroy(QProgressDialog* self);
    friend bool QProgressDialog_FocusNextChild(QProgressDialog* self);
    friend bool QProgressDialog_QBaseFocusNextChild(QProgressDialog* self);
    friend bool QProgressDialog_FocusPreviousChild(QProgressDialog* self);
    friend bool QProgressDialog_QBaseFocusPreviousChild(QProgressDialog* self);
    friend QObject* QProgressDialog_Sender(const QProgressDialog* self);
    friend QObject* QProgressDialog_QBaseSender(const QProgressDialog* self);
    friend int QProgressDialog_SenderSignalIndex(const QProgressDialog* self);
    friend int QProgressDialog_QBaseSenderSignalIndex(const QProgressDialog* self);
    friend int QProgressDialog_Receivers(const QProgressDialog* self, const char* signal);
    friend int QProgressDialog_QBaseReceivers(const QProgressDialog* self, const char* signal);
    friend bool QProgressDialog_IsSignalConnected(const QProgressDialog* self, const QMetaMethod* signal);
    friend bool QProgressDialog_QBaseIsSignalConnected(const QProgressDialog* self, const QMetaMethod* signal);
};

#endif
