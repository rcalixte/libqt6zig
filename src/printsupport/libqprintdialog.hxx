#pragma once
#ifndef SRC_PRINTSUPPORTC_LIBVIRTUALQPRINTDIALOG_H
#define SRC_PRINTSUPPORTC_LIBVIRTUALQPRINTDIALOG_H

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

// This class is a subclass of QPrintDialog so that we can call protected methods
class VirtualQPrintDialog final : public QPrintDialog {

  public:
    // Virtual class boolean flag
    bool isVirtualQPrintDialog = true;

    // Virtual class public types (including callbacks)
    using QPrintDialog_MetaObject_Callback = QMetaObject* (*)();
    using QPrintDialog_Metacast_Callback = void* (*)(QPrintDialog*, const char*);
    using QPrintDialog_Metacall_Callback = int (*)(QPrintDialog*, int, int, void**);
    using QPrintDialog_Exec_Callback = int (*)();
    using QPrintDialog_Accept_Callback = void (*)();
    using QPrintDialog_Done_Callback = void (*)(QPrintDialog*, int);
    using QPrintDialog_SetVisible_Callback = void (*)(QPrintDialog*, bool);
    using QPrintDialog_SizeHint_Callback = QSize* (*)();
    using QPrintDialog_MinimumSizeHint_Callback = QSize* (*)();
    using QPrintDialog_Open_Callback = void (*)();
    using QPrintDialog_Reject_Callback = void (*)();
    using QPrintDialog_KeyPressEvent_Callback = void (*)(QPrintDialog*, QKeyEvent*);
    using QPrintDialog_CloseEvent_Callback = void (*)(QPrintDialog*, QCloseEvent*);
    using QPrintDialog_ShowEvent_Callback = void (*)(QPrintDialog*, QShowEvent*);
    using QPrintDialog_ResizeEvent_Callback = void (*)(QPrintDialog*, QResizeEvent*);
    using QPrintDialog_ContextMenuEvent_Callback = void (*)(QPrintDialog*, QContextMenuEvent*);
    using QPrintDialog_EventFilter_Callback = bool (*)(QPrintDialog*, QObject*, QEvent*);
    using QPrintDialog_DevType_Callback = int (*)();
    using QPrintDialog_HeightForWidth_Callback = int (*)(const QPrintDialog*, int);
    using QPrintDialog_HasHeightForWidth_Callback = bool (*)();
    using QPrintDialog_PaintEngine_Callback = QPaintEngine* (*)();
    using QPrintDialog_Event_Callback = bool (*)(QPrintDialog*, QEvent*);
    using QPrintDialog_MousePressEvent_Callback = void (*)(QPrintDialog*, QMouseEvent*);
    using QPrintDialog_MouseReleaseEvent_Callback = void (*)(QPrintDialog*, QMouseEvent*);
    using QPrintDialog_MouseDoubleClickEvent_Callback = void (*)(QPrintDialog*, QMouseEvent*);
    using QPrintDialog_MouseMoveEvent_Callback = void (*)(QPrintDialog*, QMouseEvent*);
    using QPrintDialog_WheelEvent_Callback = void (*)(QPrintDialog*, QWheelEvent*);
    using QPrintDialog_KeyReleaseEvent_Callback = void (*)(QPrintDialog*, QKeyEvent*);
    using QPrintDialog_FocusInEvent_Callback = void (*)(QPrintDialog*, QFocusEvent*);
    using QPrintDialog_FocusOutEvent_Callback = void (*)(QPrintDialog*, QFocusEvent*);
    using QPrintDialog_EnterEvent_Callback = void (*)(QPrintDialog*, QEnterEvent*);
    using QPrintDialog_LeaveEvent_Callback = void (*)(QPrintDialog*, QEvent*);
    using QPrintDialog_PaintEvent_Callback = void (*)(QPrintDialog*, QPaintEvent*);
    using QPrintDialog_MoveEvent_Callback = void (*)(QPrintDialog*, QMoveEvent*);
    using QPrintDialog_TabletEvent_Callback = void (*)(QPrintDialog*, QTabletEvent*);
    using QPrintDialog_ActionEvent_Callback = void (*)(QPrintDialog*, QActionEvent*);
    using QPrintDialog_DragEnterEvent_Callback = void (*)(QPrintDialog*, QDragEnterEvent*);
    using QPrintDialog_DragMoveEvent_Callback = void (*)(QPrintDialog*, QDragMoveEvent*);
    using QPrintDialog_DragLeaveEvent_Callback = void (*)(QPrintDialog*, QDragLeaveEvent*);
    using QPrintDialog_DropEvent_Callback = void (*)(QPrintDialog*, QDropEvent*);
    using QPrintDialog_HideEvent_Callback = void (*)(QPrintDialog*, QHideEvent*);
    using QPrintDialog_NativeEvent_Callback = bool (*)(QPrintDialog*, libqt_string, void*, intptr_t*);
    using QPrintDialog_ChangeEvent_Callback = void (*)(QPrintDialog*, QEvent*);
    using QPrintDialog_Metric_Callback = int (*)(const QPrintDialog*, int);
    using QPrintDialog_InitPainter_Callback = void (*)(const QPrintDialog*, QPainter*);
    using QPrintDialog_Redirected_Callback = QPaintDevice* (*)(const QPrintDialog*, QPoint*);
    using QPrintDialog_SharedPainter_Callback = QPainter* (*)();
    using QPrintDialog_InputMethodEvent_Callback = void (*)(QPrintDialog*, QInputMethodEvent*);
    using QPrintDialog_InputMethodQuery_Callback = QVariant* (*)(const QPrintDialog*, int);
    using QPrintDialog_FocusNextPrevChild_Callback = bool (*)(QPrintDialog*, bool);
    using QPrintDialog_TimerEvent_Callback = void (*)(QPrintDialog*, QTimerEvent*);
    using QPrintDialog_ChildEvent_Callback = void (*)(QPrintDialog*, QChildEvent*);
    using QPrintDialog_CustomEvent_Callback = void (*)(QPrintDialog*, QEvent*);
    using QPrintDialog_ConnectNotify_Callback = void (*)(QPrintDialog*, QMetaMethod*);
    using QPrintDialog_DisconnectNotify_Callback = void (*)(QPrintDialog*, QMetaMethod*);
    using QPrintDialog_AdjustPosition_Callback = void (*)(QPrintDialog*, QWidget*);
    using QPrintDialog_UpdateMicroFocus_Callback = void (*)();
    using QPrintDialog_Create_Callback = void (*)();
    using QPrintDialog_Destroy_Callback = void (*)();
    using QPrintDialog_FocusNextChild_Callback = bool (*)();
    using QPrintDialog_FocusPreviousChild_Callback = bool (*)();
    using QPrintDialog_Sender_Callback = QObject* (*)();
    using QPrintDialog_SenderSignalIndex_Callback = int (*)();
    using QPrintDialog_Receivers_Callback = int (*)(const QPrintDialog*, const char*);
    using QPrintDialog_IsSignalConnected_Callback = bool (*)(const QPrintDialog*, QMetaMethod*);
    using QPrintDialog_GetDecodedMetricF_Callback = double (*)(const QPrintDialog*, int, int);

  protected:
    // Instance callback storage
    QPrintDialog_MetaObject_Callback qprintdialog_metaobject_callback = nullptr;
    QPrintDialog_Metacast_Callback qprintdialog_metacast_callback = nullptr;
    QPrintDialog_Metacall_Callback qprintdialog_metacall_callback = nullptr;
    QPrintDialog_Exec_Callback qprintdialog_exec_callback = nullptr;
    QPrintDialog_Accept_Callback qprintdialog_accept_callback = nullptr;
    QPrintDialog_Done_Callback qprintdialog_done_callback = nullptr;
    QPrintDialog_SetVisible_Callback qprintdialog_setvisible_callback = nullptr;
    QPrintDialog_SizeHint_Callback qprintdialog_sizehint_callback = nullptr;
    QPrintDialog_MinimumSizeHint_Callback qprintdialog_minimumsizehint_callback = nullptr;
    QPrintDialog_Open_Callback qprintdialog_open_callback = nullptr;
    QPrintDialog_Reject_Callback qprintdialog_reject_callback = nullptr;
    QPrintDialog_KeyPressEvent_Callback qprintdialog_keypressevent_callback = nullptr;
    QPrintDialog_CloseEvent_Callback qprintdialog_closeevent_callback = nullptr;
    QPrintDialog_ShowEvent_Callback qprintdialog_showevent_callback = nullptr;
    QPrintDialog_ResizeEvent_Callback qprintdialog_resizeevent_callback = nullptr;
    QPrintDialog_ContextMenuEvent_Callback qprintdialog_contextmenuevent_callback = nullptr;
    QPrintDialog_EventFilter_Callback qprintdialog_eventfilter_callback = nullptr;
    QPrintDialog_DevType_Callback qprintdialog_devtype_callback = nullptr;
    QPrintDialog_HeightForWidth_Callback qprintdialog_heightforwidth_callback = nullptr;
    QPrintDialog_HasHeightForWidth_Callback qprintdialog_hasheightforwidth_callback = nullptr;
    QPrintDialog_PaintEngine_Callback qprintdialog_paintengine_callback = nullptr;
    QPrintDialog_Event_Callback qprintdialog_event_callback = nullptr;
    QPrintDialog_MousePressEvent_Callback qprintdialog_mousepressevent_callback = nullptr;
    QPrintDialog_MouseReleaseEvent_Callback qprintdialog_mousereleaseevent_callback = nullptr;
    QPrintDialog_MouseDoubleClickEvent_Callback qprintdialog_mousedoubleclickevent_callback = nullptr;
    QPrintDialog_MouseMoveEvent_Callback qprintdialog_mousemoveevent_callback = nullptr;
    QPrintDialog_WheelEvent_Callback qprintdialog_wheelevent_callback = nullptr;
    QPrintDialog_KeyReleaseEvent_Callback qprintdialog_keyreleaseevent_callback = nullptr;
    QPrintDialog_FocusInEvent_Callback qprintdialog_focusinevent_callback = nullptr;
    QPrintDialog_FocusOutEvent_Callback qprintdialog_focusoutevent_callback = nullptr;
    QPrintDialog_EnterEvent_Callback qprintdialog_enterevent_callback = nullptr;
    QPrintDialog_LeaveEvent_Callback qprintdialog_leaveevent_callback = nullptr;
    QPrintDialog_PaintEvent_Callback qprintdialog_paintevent_callback = nullptr;
    QPrintDialog_MoveEvent_Callback qprintdialog_moveevent_callback = nullptr;
    QPrintDialog_TabletEvent_Callback qprintdialog_tabletevent_callback = nullptr;
    QPrintDialog_ActionEvent_Callback qprintdialog_actionevent_callback = nullptr;
    QPrintDialog_DragEnterEvent_Callback qprintdialog_dragenterevent_callback = nullptr;
    QPrintDialog_DragMoveEvent_Callback qprintdialog_dragmoveevent_callback = nullptr;
    QPrintDialog_DragLeaveEvent_Callback qprintdialog_dragleaveevent_callback = nullptr;
    QPrintDialog_DropEvent_Callback qprintdialog_dropevent_callback = nullptr;
    QPrintDialog_HideEvent_Callback qprintdialog_hideevent_callback = nullptr;
    QPrintDialog_NativeEvent_Callback qprintdialog_nativeevent_callback = nullptr;
    QPrintDialog_ChangeEvent_Callback qprintdialog_changeevent_callback = nullptr;
    QPrintDialog_Metric_Callback qprintdialog_metric_callback = nullptr;
    QPrintDialog_InitPainter_Callback qprintdialog_initpainter_callback = nullptr;
    QPrintDialog_Redirected_Callback qprintdialog_redirected_callback = nullptr;
    QPrintDialog_SharedPainter_Callback qprintdialog_sharedpainter_callback = nullptr;
    QPrintDialog_InputMethodEvent_Callback qprintdialog_inputmethodevent_callback = nullptr;
    QPrintDialog_InputMethodQuery_Callback qprintdialog_inputmethodquery_callback = nullptr;
    QPrintDialog_FocusNextPrevChild_Callback qprintdialog_focusnextprevchild_callback = nullptr;
    QPrintDialog_TimerEvent_Callback qprintdialog_timerevent_callback = nullptr;
    QPrintDialog_ChildEvent_Callback qprintdialog_childevent_callback = nullptr;
    QPrintDialog_CustomEvent_Callback qprintdialog_customevent_callback = nullptr;
    QPrintDialog_ConnectNotify_Callback qprintdialog_connectnotify_callback = nullptr;
    QPrintDialog_DisconnectNotify_Callback qprintdialog_disconnectnotify_callback = nullptr;
    QPrintDialog_AdjustPosition_Callback qprintdialog_adjustposition_callback = nullptr;
    QPrintDialog_UpdateMicroFocus_Callback qprintdialog_updatemicrofocus_callback = nullptr;
    QPrintDialog_Create_Callback qprintdialog_create_callback = nullptr;
    QPrintDialog_Destroy_Callback qprintdialog_destroy_callback = nullptr;
    QPrintDialog_FocusNextChild_Callback qprintdialog_focusnextchild_callback = nullptr;
    QPrintDialog_FocusPreviousChild_Callback qprintdialog_focuspreviouschild_callback = nullptr;
    QPrintDialog_Sender_Callback qprintdialog_sender_callback = nullptr;
    QPrintDialog_SenderSignalIndex_Callback qprintdialog_sendersignalindex_callback = nullptr;
    QPrintDialog_Receivers_Callback qprintdialog_receivers_callback = nullptr;
    QPrintDialog_IsSignalConnected_Callback qprintdialog_issignalconnected_callback = nullptr;
    QPrintDialog_GetDecodedMetricF_Callback qprintdialog_getdecodedmetricf_callback = nullptr;

    // Instance base flags
    mutable bool qprintdialog_metaobject_isbase = false;
    mutable bool qprintdialog_metacast_isbase = false;
    mutable bool qprintdialog_metacall_isbase = false;
    mutable bool qprintdialog_exec_isbase = false;
    mutable bool qprintdialog_accept_isbase = false;
    mutable bool qprintdialog_done_isbase = false;
    mutable bool qprintdialog_setvisible_isbase = false;
    mutable bool qprintdialog_sizehint_isbase = false;
    mutable bool qprintdialog_minimumsizehint_isbase = false;
    mutable bool qprintdialog_open_isbase = false;
    mutable bool qprintdialog_reject_isbase = false;
    mutable bool qprintdialog_keypressevent_isbase = false;
    mutable bool qprintdialog_closeevent_isbase = false;
    mutable bool qprintdialog_showevent_isbase = false;
    mutable bool qprintdialog_resizeevent_isbase = false;
    mutable bool qprintdialog_contextmenuevent_isbase = false;
    mutable bool qprintdialog_eventfilter_isbase = false;
    mutable bool qprintdialog_devtype_isbase = false;
    mutable bool qprintdialog_heightforwidth_isbase = false;
    mutable bool qprintdialog_hasheightforwidth_isbase = false;
    mutable bool qprintdialog_paintengine_isbase = false;
    mutable bool qprintdialog_event_isbase = false;
    mutable bool qprintdialog_mousepressevent_isbase = false;
    mutable bool qprintdialog_mousereleaseevent_isbase = false;
    mutable bool qprintdialog_mousedoubleclickevent_isbase = false;
    mutable bool qprintdialog_mousemoveevent_isbase = false;
    mutable bool qprintdialog_wheelevent_isbase = false;
    mutable bool qprintdialog_keyreleaseevent_isbase = false;
    mutable bool qprintdialog_focusinevent_isbase = false;
    mutable bool qprintdialog_focusoutevent_isbase = false;
    mutable bool qprintdialog_enterevent_isbase = false;
    mutable bool qprintdialog_leaveevent_isbase = false;
    mutable bool qprintdialog_paintevent_isbase = false;
    mutable bool qprintdialog_moveevent_isbase = false;
    mutable bool qprintdialog_tabletevent_isbase = false;
    mutable bool qprintdialog_actionevent_isbase = false;
    mutable bool qprintdialog_dragenterevent_isbase = false;
    mutable bool qprintdialog_dragmoveevent_isbase = false;
    mutable bool qprintdialog_dragleaveevent_isbase = false;
    mutable bool qprintdialog_dropevent_isbase = false;
    mutable bool qprintdialog_hideevent_isbase = false;
    mutable bool qprintdialog_nativeevent_isbase = false;
    mutable bool qprintdialog_changeevent_isbase = false;
    mutable bool qprintdialog_metric_isbase = false;
    mutable bool qprintdialog_initpainter_isbase = false;
    mutable bool qprintdialog_redirected_isbase = false;
    mutable bool qprintdialog_sharedpainter_isbase = false;
    mutable bool qprintdialog_inputmethodevent_isbase = false;
    mutable bool qprintdialog_inputmethodquery_isbase = false;
    mutable bool qprintdialog_focusnextprevchild_isbase = false;
    mutable bool qprintdialog_timerevent_isbase = false;
    mutable bool qprintdialog_childevent_isbase = false;
    mutable bool qprintdialog_customevent_isbase = false;
    mutable bool qprintdialog_connectnotify_isbase = false;
    mutable bool qprintdialog_disconnectnotify_isbase = false;
    mutable bool qprintdialog_adjustposition_isbase = false;
    mutable bool qprintdialog_updatemicrofocus_isbase = false;
    mutable bool qprintdialog_create_isbase = false;
    mutable bool qprintdialog_destroy_isbase = false;
    mutable bool qprintdialog_focusnextchild_isbase = false;
    mutable bool qprintdialog_focuspreviouschild_isbase = false;
    mutable bool qprintdialog_sender_isbase = false;
    mutable bool qprintdialog_sendersignalindex_isbase = false;
    mutable bool qprintdialog_receivers_isbase = false;
    mutable bool qprintdialog_issignalconnected_isbase = false;
    mutable bool qprintdialog_getdecodedmetricf_isbase = false;

  public:
    VirtualQPrintDialog(QWidget* parent) : QPrintDialog(parent) {};
    VirtualQPrintDialog(QPrinter* printer) : QPrintDialog(printer) {};
    VirtualQPrintDialog() : QPrintDialog() {};
    VirtualQPrintDialog(QPrinter* printer, QWidget* parent) : QPrintDialog(printer, parent) {};

    // Callback setters
    inline void setQPrintDialog_MetaObject_Callback(QPrintDialog_MetaObject_Callback cb) { qprintdialog_metaobject_callback = cb; }
    inline void setQPrintDialog_Metacast_Callback(QPrintDialog_Metacast_Callback cb) { qprintdialog_metacast_callback = cb; }
    inline void setQPrintDialog_Metacall_Callback(QPrintDialog_Metacall_Callback cb) { qprintdialog_metacall_callback = cb; }
    inline void setQPrintDialog_Exec_Callback(QPrintDialog_Exec_Callback cb) { qprintdialog_exec_callback = cb; }
    inline void setQPrintDialog_Accept_Callback(QPrintDialog_Accept_Callback cb) { qprintdialog_accept_callback = cb; }
    inline void setQPrintDialog_Done_Callback(QPrintDialog_Done_Callback cb) { qprintdialog_done_callback = cb; }
    inline void setQPrintDialog_SetVisible_Callback(QPrintDialog_SetVisible_Callback cb) { qprintdialog_setvisible_callback = cb; }
    inline void setQPrintDialog_SizeHint_Callback(QPrintDialog_SizeHint_Callback cb) { qprintdialog_sizehint_callback = cb; }
    inline void setQPrintDialog_MinimumSizeHint_Callback(QPrintDialog_MinimumSizeHint_Callback cb) { qprintdialog_minimumsizehint_callback = cb; }
    inline void setQPrintDialog_Open_Callback(QPrintDialog_Open_Callback cb) { qprintdialog_open_callback = cb; }
    inline void setQPrintDialog_Reject_Callback(QPrintDialog_Reject_Callback cb) { qprintdialog_reject_callback = cb; }
    inline void setQPrintDialog_KeyPressEvent_Callback(QPrintDialog_KeyPressEvent_Callback cb) { qprintdialog_keypressevent_callback = cb; }
    inline void setQPrintDialog_CloseEvent_Callback(QPrintDialog_CloseEvent_Callback cb) { qprintdialog_closeevent_callback = cb; }
    inline void setQPrintDialog_ShowEvent_Callback(QPrintDialog_ShowEvent_Callback cb) { qprintdialog_showevent_callback = cb; }
    inline void setQPrintDialog_ResizeEvent_Callback(QPrintDialog_ResizeEvent_Callback cb) { qprintdialog_resizeevent_callback = cb; }
    inline void setQPrintDialog_ContextMenuEvent_Callback(QPrintDialog_ContextMenuEvent_Callback cb) { qprintdialog_contextmenuevent_callback = cb; }
    inline void setQPrintDialog_EventFilter_Callback(QPrintDialog_EventFilter_Callback cb) { qprintdialog_eventfilter_callback = cb; }
    inline void setQPrintDialog_DevType_Callback(QPrintDialog_DevType_Callback cb) { qprintdialog_devtype_callback = cb; }
    inline void setQPrintDialog_HeightForWidth_Callback(QPrintDialog_HeightForWidth_Callback cb) { qprintdialog_heightforwidth_callback = cb; }
    inline void setQPrintDialog_HasHeightForWidth_Callback(QPrintDialog_HasHeightForWidth_Callback cb) { qprintdialog_hasheightforwidth_callback = cb; }
    inline void setQPrintDialog_PaintEngine_Callback(QPrintDialog_PaintEngine_Callback cb) { qprintdialog_paintengine_callback = cb; }
    inline void setQPrintDialog_Event_Callback(QPrintDialog_Event_Callback cb) { qprintdialog_event_callback = cb; }
    inline void setQPrintDialog_MousePressEvent_Callback(QPrintDialog_MousePressEvent_Callback cb) { qprintdialog_mousepressevent_callback = cb; }
    inline void setQPrintDialog_MouseReleaseEvent_Callback(QPrintDialog_MouseReleaseEvent_Callback cb) { qprintdialog_mousereleaseevent_callback = cb; }
    inline void setQPrintDialog_MouseDoubleClickEvent_Callback(QPrintDialog_MouseDoubleClickEvent_Callback cb) { qprintdialog_mousedoubleclickevent_callback = cb; }
    inline void setQPrintDialog_MouseMoveEvent_Callback(QPrintDialog_MouseMoveEvent_Callback cb) { qprintdialog_mousemoveevent_callback = cb; }
    inline void setQPrintDialog_WheelEvent_Callback(QPrintDialog_WheelEvent_Callback cb) { qprintdialog_wheelevent_callback = cb; }
    inline void setQPrintDialog_KeyReleaseEvent_Callback(QPrintDialog_KeyReleaseEvent_Callback cb) { qprintdialog_keyreleaseevent_callback = cb; }
    inline void setQPrintDialog_FocusInEvent_Callback(QPrintDialog_FocusInEvent_Callback cb) { qprintdialog_focusinevent_callback = cb; }
    inline void setQPrintDialog_FocusOutEvent_Callback(QPrintDialog_FocusOutEvent_Callback cb) { qprintdialog_focusoutevent_callback = cb; }
    inline void setQPrintDialog_EnterEvent_Callback(QPrintDialog_EnterEvent_Callback cb) { qprintdialog_enterevent_callback = cb; }
    inline void setQPrintDialog_LeaveEvent_Callback(QPrintDialog_LeaveEvent_Callback cb) { qprintdialog_leaveevent_callback = cb; }
    inline void setQPrintDialog_PaintEvent_Callback(QPrintDialog_PaintEvent_Callback cb) { qprintdialog_paintevent_callback = cb; }
    inline void setQPrintDialog_MoveEvent_Callback(QPrintDialog_MoveEvent_Callback cb) { qprintdialog_moveevent_callback = cb; }
    inline void setQPrintDialog_TabletEvent_Callback(QPrintDialog_TabletEvent_Callback cb) { qprintdialog_tabletevent_callback = cb; }
    inline void setQPrintDialog_ActionEvent_Callback(QPrintDialog_ActionEvent_Callback cb) { qprintdialog_actionevent_callback = cb; }
    inline void setQPrintDialog_DragEnterEvent_Callback(QPrintDialog_DragEnterEvent_Callback cb) { qprintdialog_dragenterevent_callback = cb; }
    inline void setQPrintDialog_DragMoveEvent_Callback(QPrintDialog_DragMoveEvent_Callback cb) { qprintdialog_dragmoveevent_callback = cb; }
    inline void setQPrintDialog_DragLeaveEvent_Callback(QPrintDialog_DragLeaveEvent_Callback cb) { qprintdialog_dragleaveevent_callback = cb; }
    inline void setQPrintDialog_DropEvent_Callback(QPrintDialog_DropEvent_Callback cb) { qprintdialog_dropevent_callback = cb; }
    inline void setQPrintDialog_HideEvent_Callback(QPrintDialog_HideEvent_Callback cb) { qprintdialog_hideevent_callback = cb; }
    inline void setQPrintDialog_NativeEvent_Callback(QPrintDialog_NativeEvent_Callback cb) { qprintdialog_nativeevent_callback = cb; }
    inline void setQPrintDialog_ChangeEvent_Callback(QPrintDialog_ChangeEvent_Callback cb) { qprintdialog_changeevent_callback = cb; }
    inline void setQPrintDialog_Metric_Callback(QPrintDialog_Metric_Callback cb) { qprintdialog_metric_callback = cb; }
    inline void setQPrintDialog_InitPainter_Callback(QPrintDialog_InitPainter_Callback cb) { qprintdialog_initpainter_callback = cb; }
    inline void setQPrintDialog_Redirected_Callback(QPrintDialog_Redirected_Callback cb) { qprintdialog_redirected_callback = cb; }
    inline void setQPrintDialog_SharedPainter_Callback(QPrintDialog_SharedPainter_Callback cb) { qprintdialog_sharedpainter_callback = cb; }
    inline void setQPrintDialog_InputMethodEvent_Callback(QPrintDialog_InputMethodEvent_Callback cb) { qprintdialog_inputmethodevent_callback = cb; }
    inline void setQPrintDialog_InputMethodQuery_Callback(QPrintDialog_InputMethodQuery_Callback cb) { qprintdialog_inputmethodquery_callback = cb; }
    inline void setQPrintDialog_FocusNextPrevChild_Callback(QPrintDialog_FocusNextPrevChild_Callback cb) { qprintdialog_focusnextprevchild_callback = cb; }
    inline void setQPrintDialog_TimerEvent_Callback(QPrintDialog_TimerEvent_Callback cb) { qprintdialog_timerevent_callback = cb; }
    inline void setQPrintDialog_ChildEvent_Callback(QPrintDialog_ChildEvent_Callback cb) { qprintdialog_childevent_callback = cb; }
    inline void setQPrintDialog_CustomEvent_Callback(QPrintDialog_CustomEvent_Callback cb) { qprintdialog_customevent_callback = cb; }
    inline void setQPrintDialog_ConnectNotify_Callback(QPrintDialog_ConnectNotify_Callback cb) { qprintdialog_connectnotify_callback = cb; }
    inline void setQPrintDialog_DisconnectNotify_Callback(QPrintDialog_DisconnectNotify_Callback cb) { qprintdialog_disconnectnotify_callback = cb; }
    inline void setQPrintDialog_AdjustPosition_Callback(QPrintDialog_AdjustPosition_Callback cb) { qprintdialog_adjustposition_callback = cb; }
    inline void setQPrintDialog_UpdateMicroFocus_Callback(QPrintDialog_UpdateMicroFocus_Callback cb) { qprintdialog_updatemicrofocus_callback = cb; }
    inline void setQPrintDialog_Create_Callback(QPrintDialog_Create_Callback cb) { qprintdialog_create_callback = cb; }
    inline void setQPrintDialog_Destroy_Callback(QPrintDialog_Destroy_Callback cb) { qprintdialog_destroy_callback = cb; }
    inline void setQPrintDialog_FocusNextChild_Callback(QPrintDialog_FocusNextChild_Callback cb) { qprintdialog_focusnextchild_callback = cb; }
    inline void setQPrintDialog_FocusPreviousChild_Callback(QPrintDialog_FocusPreviousChild_Callback cb) { qprintdialog_focuspreviouschild_callback = cb; }
    inline void setQPrintDialog_Sender_Callback(QPrintDialog_Sender_Callback cb) { qprintdialog_sender_callback = cb; }
    inline void setQPrintDialog_SenderSignalIndex_Callback(QPrintDialog_SenderSignalIndex_Callback cb) { qprintdialog_sendersignalindex_callback = cb; }
    inline void setQPrintDialog_Receivers_Callback(QPrintDialog_Receivers_Callback cb) { qprintdialog_receivers_callback = cb; }
    inline void setQPrintDialog_IsSignalConnected_Callback(QPrintDialog_IsSignalConnected_Callback cb) { qprintdialog_issignalconnected_callback = cb; }
    inline void setQPrintDialog_GetDecodedMetricF_Callback(QPrintDialog_GetDecodedMetricF_Callback cb) { qprintdialog_getdecodedmetricf_callback = cb; }

    // Base flag setters
    inline void setQPrintDialog_MetaObject_IsBase(bool value) const { qprintdialog_metaobject_isbase = value; }
    inline void setQPrintDialog_Metacast_IsBase(bool value) const { qprintdialog_metacast_isbase = value; }
    inline void setQPrintDialog_Metacall_IsBase(bool value) const { qprintdialog_metacall_isbase = value; }
    inline void setQPrintDialog_Exec_IsBase(bool value) const { qprintdialog_exec_isbase = value; }
    inline void setQPrintDialog_Accept_IsBase(bool value) const { qprintdialog_accept_isbase = value; }
    inline void setQPrintDialog_Done_IsBase(bool value) const { qprintdialog_done_isbase = value; }
    inline void setQPrintDialog_SetVisible_IsBase(bool value) const { qprintdialog_setvisible_isbase = value; }
    inline void setQPrintDialog_SizeHint_IsBase(bool value) const { qprintdialog_sizehint_isbase = value; }
    inline void setQPrintDialog_MinimumSizeHint_IsBase(bool value) const { qprintdialog_minimumsizehint_isbase = value; }
    inline void setQPrintDialog_Open_IsBase(bool value) const { qprintdialog_open_isbase = value; }
    inline void setQPrintDialog_Reject_IsBase(bool value) const { qprintdialog_reject_isbase = value; }
    inline void setQPrintDialog_KeyPressEvent_IsBase(bool value) const { qprintdialog_keypressevent_isbase = value; }
    inline void setQPrintDialog_CloseEvent_IsBase(bool value) const { qprintdialog_closeevent_isbase = value; }
    inline void setQPrintDialog_ShowEvent_IsBase(bool value) const { qprintdialog_showevent_isbase = value; }
    inline void setQPrintDialog_ResizeEvent_IsBase(bool value) const { qprintdialog_resizeevent_isbase = value; }
    inline void setQPrintDialog_ContextMenuEvent_IsBase(bool value) const { qprintdialog_contextmenuevent_isbase = value; }
    inline void setQPrintDialog_EventFilter_IsBase(bool value) const { qprintdialog_eventfilter_isbase = value; }
    inline void setQPrintDialog_DevType_IsBase(bool value) const { qprintdialog_devtype_isbase = value; }
    inline void setQPrintDialog_HeightForWidth_IsBase(bool value) const { qprintdialog_heightforwidth_isbase = value; }
    inline void setQPrintDialog_HasHeightForWidth_IsBase(bool value) const { qprintdialog_hasheightforwidth_isbase = value; }
    inline void setQPrintDialog_PaintEngine_IsBase(bool value) const { qprintdialog_paintengine_isbase = value; }
    inline void setQPrintDialog_Event_IsBase(bool value) const { qprintdialog_event_isbase = value; }
    inline void setQPrintDialog_MousePressEvent_IsBase(bool value) const { qprintdialog_mousepressevent_isbase = value; }
    inline void setQPrintDialog_MouseReleaseEvent_IsBase(bool value) const { qprintdialog_mousereleaseevent_isbase = value; }
    inline void setQPrintDialog_MouseDoubleClickEvent_IsBase(bool value) const { qprintdialog_mousedoubleclickevent_isbase = value; }
    inline void setQPrintDialog_MouseMoveEvent_IsBase(bool value) const { qprintdialog_mousemoveevent_isbase = value; }
    inline void setQPrintDialog_WheelEvent_IsBase(bool value) const { qprintdialog_wheelevent_isbase = value; }
    inline void setQPrintDialog_KeyReleaseEvent_IsBase(bool value) const { qprintdialog_keyreleaseevent_isbase = value; }
    inline void setQPrintDialog_FocusInEvent_IsBase(bool value) const { qprintdialog_focusinevent_isbase = value; }
    inline void setQPrintDialog_FocusOutEvent_IsBase(bool value) const { qprintdialog_focusoutevent_isbase = value; }
    inline void setQPrintDialog_EnterEvent_IsBase(bool value) const { qprintdialog_enterevent_isbase = value; }
    inline void setQPrintDialog_LeaveEvent_IsBase(bool value) const { qprintdialog_leaveevent_isbase = value; }
    inline void setQPrintDialog_PaintEvent_IsBase(bool value) const { qprintdialog_paintevent_isbase = value; }
    inline void setQPrintDialog_MoveEvent_IsBase(bool value) const { qprintdialog_moveevent_isbase = value; }
    inline void setQPrintDialog_TabletEvent_IsBase(bool value) const { qprintdialog_tabletevent_isbase = value; }
    inline void setQPrintDialog_ActionEvent_IsBase(bool value) const { qprintdialog_actionevent_isbase = value; }
    inline void setQPrintDialog_DragEnterEvent_IsBase(bool value) const { qprintdialog_dragenterevent_isbase = value; }
    inline void setQPrintDialog_DragMoveEvent_IsBase(bool value) const { qprintdialog_dragmoveevent_isbase = value; }
    inline void setQPrintDialog_DragLeaveEvent_IsBase(bool value) const { qprintdialog_dragleaveevent_isbase = value; }
    inline void setQPrintDialog_DropEvent_IsBase(bool value) const { qprintdialog_dropevent_isbase = value; }
    inline void setQPrintDialog_HideEvent_IsBase(bool value) const { qprintdialog_hideevent_isbase = value; }
    inline void setQPrintDialog_NativeEvent_IsBase(bool value) const { qprintdialog_nativeevent_isbase = value; }
    inline void setQPrintDialog_ChangeEvent_IsBase(bool value) const { qprintdialog_changeevent_isbase = value; }
    inline void setQPrintDialog_Metric_IsBase(bool value) const { qprintdialog_metric_isbase = value; }
    inline void setQPrintDialog_InitPainter_IsBase(bool value) const { qprintdialog_initpainter_isbase = value; }
    inline void setQPrintDialog_Redirected_IsBase(bool value) const { qprintdialog_redirected_isbase = value; }
    inline void setQPrintDialog_SharedPainter_IsBase(bool value) const { qprintdialog_sharedpainter_isbase = value; }
    inline void setQPrintDialog_InputMethodEvent_IsBase(bool value) const { qprintdialog_inputmethodevent_isbase = value; }
    inline void setQPrintDialog_InputMethodQuery_IsBase(bool value) const { qprintdialog_inputmethodquery_isbase = value; }
    inline void setQPrintDialog_FocusNextPrevChild_IsBase(bool value) const { qprintdialog_focusnextprevchild_isbase = value; }
    inline void setQPrintDialog_TimerEvent_IsBase(bool value) const { qprintdialog_timerevent_isbase = value; }
    inline void setQPrintDialog_ChildEvent_IsBase(bool value) const { qprintdialog_childevent_isbase = value; }
    inline void setQPrintDialog_CustomEvent_IsBase(bool value) const { qprintdialog_customevent_isbase = value; }
    inline void setQPrintDialog_ConnectNotify_IsBase(bool value) const { qprintdialog_connectnotify_isbase = value; }
    inline void setQPrintDialog_DisconnectNotify_IsBase(bool value) const { qprintdialog_disconnectnotify_isbase = value; }
    inline void setQPrintDialog_AdjustPosition_IsBase(bool value) const { qprintdialog_adjustposition_isbase = value; }
    inline void setQPrintDialog_UpdateMicroFocus_IsBase(bool value) const { qprintdialog_updatemicrofocus_isbase = value; }
    inline void setQPrintDialog_Create_IsBase(bool value) const { qprintdialog_create_isbase = value; }
    inline void setQPrintDialog_Destroy_IsBase(bool value) const { qprintdialog_destroy_isbase = value; }
    inline void setQPrintDialog_FocusNextChild_IsBase(bool value) const { qprintdialog_focusnextchild_isbase = value; }
    inline void setQPrintDialog_FocusPreviousChild_IsBase(bool value) const { qprintdialog_focuspreviouschild_isbase = value; }
    inline void setQPrintDialog_Sender_IsBase(bool value) const { qprintdialog_sender_isbase = value; }
    inline void setQPrintDialog_SenderSignalIndex_IsBase(bool value) const { qprintdialog_sendersignalindex_isbase = value; }
    inline void setQPrintDialog_Receivers_IsBase(bool value) const { qprintdialog_receivers_isbase = value; }
    inline void setQPrintDialog_IsSignalConnected_IsBase(bool value) const { qprintdialog_issignalconnected_isbase = value; }
    inline void setQPrintDialog_GetDecodedMetricF_IsBase(bool value) const { qprintdialog_getdecodedmetricf_isbase = value; }

    // Virtual method for C ABI access and custom callback
    virtual const QMetaObject* metaObject() const override {
        if (qprintdialog_metaobject_isbase) {
            qprintdialog_metaobject_isbase = false;
            return QPrintDialog::metaObject();
        }
        auto metaobject_cb = qprintdialog_metaobject_callback;
        if (metaobject_cb) {
            QMetaObject* callback_ret = metaobject_cb();
            return callback_ret;
        }
        return QPrintDialog::metaObject();
    }

    // Virtual method for C ABI access and custom callback
    virtual void* qt_metacast(const char* param1) override {
        if (qprintdialog_metacast_isbase) {
            qprintdialog_metacast_isbase = false;
            return QPrintDialog::qt_metacast(param1);
        }
        auto metacast_cb = qprintdialog_metacast_callback;
        if (metacast_cb) {
            const char* cbval1 = (const char*)param1;

            void* callback_ret = metacast_cb(this, cbval1);
            return callback_ret;
        }
        return QPrintDialog::qt_metacast(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (qprintdialog_metacall_isbase) {
            qprintdialog_metacall_isbase = false;
            return QPrintDialog::qt_metacall(param1, param2, param3);
        }
        auto metacall_cb = qprintdialog_metacall_callback;
        if (metacall_cb) {
            int cbval1 = static_cast<int>(param1);
            int cbval2 = param2;
            void** cbval3 = param3;

            int callback_ret = metacall_cb(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        }
        return QPrintDialog::qt_metacall(param1, param2, param3);
    }

    // Virtual method for C ABI access and custom callback
    virtual int exec() override {
        if (qprintdialog_exec_isbase) {
            qprintdialog_exec_isbase = false;
            return QPrintDialog::exec();
        }
        auto exec_cb = qprintdialog_exec_callback;
        if (exec_cb) {
            int callback_ret = exec_cb();
            return static_cast<int>(callback_ret);
        }
        return QPrintDialog::exec();
    }

    // Virtual method for C ABI access and custom callback
    virtual void accept() override {
        if (qprintdialog_accept_isbase) {
            qprintdialog_accept_isbase = false;
            QPrintDialog::accept();
            return;
        }
        auto accept_cb = qprintdialog_accept_callback;
        if (accept_cb) {
            accept_cb();
            return;
        }
        QPrintDialog::accept();
    }

    // Virtual method for C ABI access and custom callback
    virtual void done(int result) override {
        if (qprintdialog_done_isbase) {
            qprintdialog_done_isbase = false;
            QPrintDialog::done(result);
            return;
        }
        auto done_cb = qprintdialog_done_callback;
        if (done_cb) {
            int cbval1 = result;

            done_cb(this, cbval1);
            return;
        }
        QPrintDialog::done(result);
    }

    // Virtual method for C ABI access and custom callback
    virtual void setVisible(bool visible) override {
        if (qprintdialog_setvisible_isbase) {
            qprintdialog_setvisible_isbase = false;
            QPrintDialog::setVisible(visible);
            return;
        }
        auto setvisible_cb = qprintdialog_setvisible_callback;
        if (setvisible_cb) {
            bool cbval1 = visible;

            setvisible_cb(this, cbval1);
            return;
        }
        QPrintDialog::setVisible(visible);
    }

    // Virtual method for C ABI access and custom callback
    virtual QSize sizeHint() const override {
        if (qprintdialog_sizehint_isbase) {
            qprintdialog_sizehint_isbase = false;
            return QPrintDialog::sizeHint();
        }
        auto sizehint_cb = qprintdialog_sizehint_callback;
        if (sizehint_cb) {
            QSize* callback_ret = sizehint_cb();
            return *callback_ret;
        }
        return QPrintDialog::sizeHint();
    }

    // Virtual method for C ABI access and custom callback
    virtual QSize minimumSizeHint() const override {
        if (qprintdialog_minimumsizehint_isbase) {
            qprintdialog_minimumsizehint_isbase = false;
            return QPrintDialog::minimumSizeHint();
        }
        auto minimumsizehint_cb = qprintdialog_minimumsizehint_callback;
        if (minimumsizehint_cb) {
            QSize* callback_ret = minimumsizehint_cb();
            return *callback_ret;
        }
        return QPrintDialog::minimumSizeHint();
    }

    // Virtual method for C ABI access and custom callback
    virtual void open() override {
        if (qprintdialog_open_isbase) {
            qprintdialog_open_isbase = false;
            QPrintDialog::open();
            return;
        }
        auto open_cb = qprintdialog_open_callback;
        if (open_cb) {
            open_cb();
            return;
        }
        QPrintDialog::open();
    }

    // Virtual method for C ABI access and custom callback
    virtual void reject() override {
        if (qprintdialog_reject_isbase) {
            qprintdialog_reject_isbase = false;
            QPrintDialog::reject();
            return;
        }
        auto reject_cb = qprintdialog_reject_callback;
        if (reject_cb) {
            reject_cb();
            return;
        }
        QPrintDialog::reject();
    }

    // Virtual method for C ABI access and custom callback
    virtual void keyPressEvent(QKeyEvent* param1) override {
        if (qprintdialog_keypressevent_isbase) {
            qprintdialog_keypressevent_isbase = false;
            QPrintDialog::keyPressEvent(param1);
            return;
        }
        auto keypressevent_cb = qprintdialog_keypressevent_callback;
        if (keypressevent_cb) {
            QKeyEvent* cbval1 = param1;

            keypressevent_cb(this, cbval1);
            return;
        }
        QPrintDialog::keyPressEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual void closeEvent(QCloseEvent* param1) override {
        if (qprintdialog_closeevent_isbase) {
            qprintdialog_closeevent_isbase = false;
            QPrintDialog::closeEvent(param1);
            return;
        }
        auto closeevent_cb = qprintdialog_closeevent_callback;
        if (closeevent_cb) {
            QCloseEvent* cbval1 = param1;

            closeevent_cb(this, cbval1);
            return;
        }
        QPrintDialog::closeEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual void showEvent(QShowEvent* param1) override {
        if (qprintdialog_showevent_isbase) {
            qprintdialog_showevent_isbase = false;
            QPrintDialog::showEvent(param1);
            return;
        }
        auto showevent_cb = qprintdialog_showevent_callback;
        if (showevent_cb) {
            QShowEvent* cbval1 = param1;

            showevent_cb(this, cbval1);
            return;
        }
        QPrintDialog::showEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual void resizeEvent(QResizeEvent* param1) override {
        if (qprintdialog_resizeevent_isbase) {
            qprintdialog_resizeevent_isbase = false;
            QPrintDialog::resizeEvent(param1);
            return;
        }
        auto resizeevent_cb = qprintdialog_resizeevent_callback;
        if (resizeevent_cb) {
            QResizeEvent* cbval1 = param1;

            resizeevent_cb(this, cbval1);
            return;
        }
        QPrintDialog::resizeEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual void contextMenuEvent(QContextMenuEvent* param1) override {
        if (qprintdialog_contextmenuevent_isbase) {
            qprintdialog_contextmenuevent_isbase = false;
            QPrintDialog::contextMenuEvent(param1);
            return;
        }
        auto contextmenuevent_cb = qprintdialog_contextmenuevent_callback;
        if (contextmenuevent_cb) {
            QContextMenuEvent* cbval1 = param1;

            contextmenuevent_cb(this, cbval1);
            return;
        }
        QPrintDialog::contextMenuEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* param1, QEvent* param2) override {
        if (qprintdialog_eventfilter_isbase) {
            qprintdialog_eventfilter_isbase = false;
            return QPrintDialog::eventFilter(param1, param2);
        }
        auto eventfilter_cb = qprintdialog_eventfilter_callback;
        if (eventfilter_cb) {
            QObject* cbval1 = param1;
            QEvent* cbval2 = param2;

            bool callback_ret = eventfilter_cb(this, cbval1, cbval2);
            return callback_ret;
        }
        return QPrintDialog::eventFilter(param1, param2);
    }

    // Virtual method for C ABI access and custom callback
    virtual int devType() const override {
        if (qprintdialog_devtype_isbase) {
            qprintdialog_devtype_isbase = false;
            return QPrintDialog::devType();
        }
        auto devtype_cb = qprintdialog_devtype_callback;
        if (devtype_cb) {
            int callback_ret = devtype_cb();
            return static_cast<int>(callback_ret);
        }
        return QPrintDialog::devType();
    }

    // Virtual method for C ABI access and custom callback
    virtual int heightForWidth(int param1) const override {
        if (qprintdialog_heightforwidth_isbase) {
            qprintdialog_heightforwidth_isbase = false;
            return QPrintDialog::heightForWidth(param1);
        }
        auto heightforwidth_cb = qprintdialog_heightforwidth_callback;
        if (heightforwidth_cb) {
            int cbval1 = param1;

            int callback_ret = heightforwidth_cb(this, cbval1);
            return static_cast<int>(callback_ret);
        }
        return QPrintDialog::heightForWidth(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool hasHeightForWidth() const override {
        if (qprintdialog_hasheightforwidth_isbase) {
            qprintdialog_hasheightforwidth_isbase = false;
            return QPrintDialog::hasHeightForWidth();
        }
        auto hasheightforwidth_cb = qprintdialog_hasheightforwidth_callback;
        if (hasheightforwidth_cb) {
            bool callback_ret = hasheightforwidth_cb();
            return callback_ret;
        }
        return QPrintDialog::hasHeightForWidth();
    }

    // Virtual method for C ABI access and custom callback
    virtual QPaintEngine* paintEngine() const override {
        if (qprintdialog_paintengine_isbase) {
            qprintdialog_paintengine_isbase = false;
            return QPrintDialog::paintEngine();
        }
        auto paintengine_cb = qprintdialog_paintengine_callback;
        if (paintengine_cb) {
            QPaintEngine* callback_ret = paintengine_cb();
            return callback_ret;
        }
        return QPrintDialog::paintEngine();
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* event) override {
        if (qprintdialog_event_isbase) {
            qprintdialog_event_isbase = false;
            return QPrintDialog::event(event);
        }
        auto event_cb = qprintdialog_event_callback;
        if (event_cb) {
            QEvent* cbval1 = event;

            bool callback_ret = event_cb(this, cbval1);
            return callback_ret;
        }
        return QPrintDialog::event(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void mousePressEvent(QMouseEvent* event) override {
        if (qprintdialog_mousepressevent_isbase) {
            qprintdialog_mousepressevent_isbase = false;
            QPrintDialog::mousePressEvent(event);
            return;
        }
        auto mousepressevent_cb = qprintdialog_mousepressevent_callback;
        if (mousepressevent_cb) {
            QMouseEvent* cbval1 = event;

            mousepressevent_cb(this, cbval1);
            return;
        }
        QPrintDialog::mousePressEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseReleaseEvent(QMouseEvent* event) override {
        if (qprintdialog_mousereleaseevent_isbase) {
            qprintdialog_mousereleaseevent_isbase = false;
            QPrintDialog::mouseReleaseEvent(event);
            return;
        }
        auto mousereleaseevent_cb = qprintdialog_mousereleaseevent_callback;
        if (mousereleaseevent_cb) {
            QMouseEvent* cbval1 = event;

            mousereleaseevent_cb(this, cbval1);
            return;
        }
        QPrintDialog::mouseReleaseEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseDoubleClickEvent(QMouseEvent* event) override {
        if (qprintdialog_mousedoubleclickevent_isbase) {
            qprintdialog_mousedoubleclickevent_isbase = false;
            QPrintDialog::mouseDoubleClickEvent(event);
            return;
        }
        auto mousedoubleclickevent_cb = qprintdialog_mousedoubleclickevent_callback;
        if (mousedoubleclickevent_cb) {
            QMouseEvent* cbval1 = event;

            mousedoubleclickevent_cb(this, cbval1);
            return;
        }
        QPrintDialog::mouseDoubleClickEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseMoveEvent(QMouseEvent* event) override {
        if (qprintdialog_mousemoveevent_isbase) {
            qprintdialog_mousemoveevent_isbase = false;
            QPrintDialog::mouseMoveEvent(event);
            return;
        }
        auto mousemoveevent_cb = qprintdialog_mousemoveevent_callback;
        if (mousemoveevent_cb) {
            QMouseEvent* cbval1 = event;

            mousemoveevent_cb(this, cbval1);
            return;
        }
        QPrintDialog::mouseMoveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void wheelEvent(QWheelEvent* event) override {
        if (qprintdialog_wheelevent_isbase) {
            qprintdialog_wheelevent_isbase = false;
            QPrintDialog::wheelEvent(event);
            return;
        }
        auto wheelevent_cb = qprintdialog_wheelevent_callback;
        if (wheelevent_cb) {
            QWheelEvent* cbval1 = event;

            wheelevent_cb(this, cbval1);
            return;
        }
        QPrintDialog::wheelEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void keyReleaseEvent(QKeyEvent* event) override {
        if (qprintdialog_keyreleaseevent_isbase) {
            qprintdialog_keyreleaseevent_isbase = false;
            QPrintDialog::keyReleaseEvent(event);
            return;
        }
        auto keyreleaseevent_cb = qprintdialog_keyreleaseevent_callback;
        if (keyreleaseevent_cb) {
            QKeyEvent* cbval1 = event;

            keyreleaseevent_cb(this, cbval1);
            return;
        }
        QPrintDialog::keyReleaseEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void focusInEvent(QFocusEvent* event) override {
        if (qprintdialog_focusinevent_isbase) {
            qprintdialog_focusinevent_isbase = false;
            QPrintDialog::focusInEvent(event);
            return;
        }
        auto focusinevent_cb = qprintdialog_focusinevent_callback;
        if (focusinevent_cb) {
            QFocusEvent* cbval1 = event;

            focusinevent_cb(this, cbval1);
            return;
        }
        QPrintDialog::focusInEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void focusOutEvent(QFocusEvent* event) override {
        if (qprintdialog_focusoutevent_isbase) {
            qprintdialog_focusoutevent_isbase = false;
            QPrintDialog::focusOutEvent(event);
            return;
        }
        auto focusoutevent_cb = qprintdialog_focusoutevent_callback;
        if (focusoutevent_cb) {
            QFocusEvent* cbval1 = event;

            focusoutevent_cb(this, cbval1);
            return;
        }
        QPrintDialog::focusOutEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void enterEvent(QEnterEvent* event) override {
        if (qprintdialog_enterevent_isbase) {
            qprintdialog_enterevent_isbase = false;
            QPrintDialog::enterEvent(event);
            return;
        }
        auto enterevent_cb = qprintdialog_enterevent_callback;
        if (enterevent_cb) {
            QEnterEvent* cbval1 = event;

            enterevent_cb(this, cbval1);
            return;
        }
        QPrintDialog::enterEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void leaveEvent(QEvent* event) override {
        if (qprintdialog_leaveevent_isbase) {
            qprintdialog_leaveevent_isbase = false;
            QPrintDialog::leaveEvent(event);
            return;
        }
        auto leaveevent_cb = qprintdialog_leaveevent_callback;
        if (leaveevent_cb) {
            QEvent* cbval1 = event;

            leaveevent_cb(this, cbval1);
            return;
        }
        QPrintDialog::leaveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void paintEvent(QPaintEvent* event) override {
        if (qprintdialog_paintevent_isbase) {
            qprintdialog_paintevent_isbase = false;
            QPrintDialog::paintEvent(event);
            return;
        }
        auto paintevent_cb = qprintdialog_paintevent_callback;
        if (paintevent_cb) {
            QPaintEvent* cbval1 = event;

            paintevent_cb(this, cbval1);
            return;
        }
        QPrintDialog::paintEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void moveEvent(QMoveEvent* event) override {
        if (qprintdialog_moveevent_isbase) {
            qprintdialog_moveevent_isbase = false;
            QPrintDialog::moveEvent(event);
            return;
        }
        auto moveevent_cb = qprintdialog_moveevent_callback;
        if (moveevent_cb) {
            QMoveEvent* cbval1 = event;

            moveevent_cb(this, cbval1);
            return;
        }
        QPrintDialog::moveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void tabletEvent(QTabletEvent* event) override {
        if (qprintdialog_tabletevent_isbase) {
            qprintdialog_tabletevent_isbase = false;
            QPrintDialog::tabletEvent(event);
            return;
        }
        auto tabletevent_cb = qprintdialog_tabletevent_callback;
        if (tabletevent_cb) {
            QTabletEvent* cbval1 = event;

            tabletevent_cb(this, cbval1);
            return;
        }
        QPrintDialog::tabletEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void actionEvent(QActionEvent* event) override {
        if (qprintdialog_actionevent_isbase) {
            qprintdialog_actionevent_isbase = false;
            QPrintDialog::actionEvent(event);
            return;
        }
        auto actionevent_cb = qprintdialog_actionevent_callback;
        if (actionevent_cb) {
            QActionEvent* cbval1 = event;

            actionevent_cb(this, cbval1);
            return;
        }
        QPrintDialog::actionEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragEnterEvent(QDragEnterEvent* event) override {
        if (qprintdialog_dragenterevent_isbase) {
            qprintdialog_dragenterevent_isbase = false;
            QPrintDialog::dragEnterEvent(event);
            return;
        }
        auto dragenterevent_cb = qprintdialog_dragenterevent_callback;
        if (dragenterevent_cb) {
            QDragEnterEvent* cbval1 = event;

            dragenterevent_cb(this, cbval1);
            return;
        }
        QPrintDialog::dragEnterEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragMoveEvent(QDragMoveEvent* event) override {
        if (qprintdialog_dragmoveevent_isbase) {
            qprintdialog_dragmoveevent_isbase = false;
            QPrintDialog::dragMoveEvent(event);
            return;
        }
        auto dragmoveevent_cb = qprintdialog_dragmoveevent_callback;
        if (dragmoveevent_cb) {
            QDragMoveEvent* cbval1 = event;

            dragmoveevent_cb(this, cbval1);
            return;
        }
        QPrintDialog::dragMoveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragLeaveEvent(QDragLeaveEvent* event) override {
        if (qprintdialog_dragleaveevent_isbase) {
            qprintdialog_dragleaveevent_isbase = false;
            QPrintDialog::dragLeaveEvent(event);
            return;
        }
        auto dragleaveevent_cb = qprintdialog_dragleaveevent_callback;
        if (dragleaveevent_cb) {
            QDragLeaveEvent* cbval1 = event;

            dragleaveevent_cb(this, cbval1);
            return;
        }
        QPrintDialog::dragLeaveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void dropEvent(QDropEvent* event) override {
        if (qprintdialog_dropevent_isbase) {
            qprintdialog_dropevent_isbase = false;
            QPrintDialog::dropEvent(event);
            return;
        }
        auto dropevent_cb = qprintdialog_dropevent_callback;
        if (dropevent_cb) {
            QDropEvent* cbval1 = event;

            dropevent_cb(this, cbval1);
            return;
        }
        QPrintDialog::dropEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void hideEvent(QHideEvent* event) override {
        if (qprintdialog_hideevent_isbase) {
            qprintdialog_hideevent_isbase = false;
            QPrintDialog::hideEvent(event);
            return;
        }
        auto hideevent_cb = qprintdialog_hideevent_callback;
        if (hideevent_cb) {
            QHideEvent* cbval1 = event;

            hideevent_cb(this, cbval1);
            return;
        }
        QPrintDialog::hideEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool nativeEvent(const QByteArray& eventType, void* message, qintptr* result) override {
        if (qprintdialog_nativeevent_isbase) {
            qprintdialog_nativeevent_isbase = false;
            return QPrintDialog::nativeEvent(eventType, message, result);
        }
        auto nativeevent_cb = qprintdialog_nativeevent_callback;
        if (nativeevent_cb) {
            const QByteArray eventType_qb = eventType;
            libqt_string eventType_str;
            eventType_str.len = eventType_qb.length();
            eventType_str.data = static_cast<char*>(malloc(eventType_str.len));
            memcpy((void*)eventType_str.data, eventType_qb.data(), eventType_str.len);
            libqt_string cbval1 = eventType_str;
            void* cbval2 = message;
            qintptr* result_ret = result;
            intptr_t* cbval3 = (intptr_t*)(result_ret);

            bool callback_ret = nativeevent_cb(this, cbval1, cbval2, cbval3);
            libqt_free(eventType_str.data);
            return callback_ret;
        }
        return QPrintDialog::nativeEvent(eventType, message, result);
    }

    // Virtual method for C ABI access and custom callback
    virtual void changeEvent(QEvent* param1) override {
        if (qprintdialog_changeevent_isbase) {
            qprintdialog_changeevent_isbase = false;
            QPrintDialog::changeEvent(param1);
            return;
        }
        auto changeevent_cb = qprintdialog_changeevent_callback;
        if (changeevent_cb) {
            QEvent* cbval1 = param1;

            changeevent_cb(this, cbval1);
            return;
        }
        QPrintDialog::changeEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual int metric(QPaintDevice::PaintDeviceMetric param1) const override {
        if (qprintdialog_metric_isbase) {
            qprintdialog_metric_isbase = false;
            return QPrintDialog::metric(param1);
        }
        auto metric_cb = qprintdialog_metric_callback;
        if (metric_cb) {
            int cbval1 = static_cast<int>(param1);

            int callback_ret = metric_cb(this, cbval1);
            return static_cast<int>(callback_ret);
        }
        return QPrintDialog::metric(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual void initPainter(QPainter* painter) const override {
        if (qprintdialog_initpainter_isbase) {
            qprintdialog_initpainter_isbase = false;
            QPrintDialog::initPainter(painter);
            return;
        }
        auto initpainter_cb = qprintdialog_initpainter_callback;
        if (initpainter_cb) {
            QPainter* cbval1 = painter;

            initpainter_cb(this, cbval1);
            return;
        }
        QPrintDialog::initPainter(painter);
    }

    // Virtual method for C ABI access and custom callback
    virtual QPaintDevice* redirected(QPoint* offset) const override {
        if (qprintdialog_redirected_isbase) {
            qprintdialog_redirected_isbase = false;
            return QPrintDialog::redirected(offset);
        }
        auto redirected_cb = qprintdialog_redirected_callback;
        if (redirected_cb) {
            QPoint* cbval1 = offset;

            QPaintDevice* callback_ret = redirected_cb(this, cbval1);
            return callback_ret;
        }
        return QPrintDialog::redirected(offset);
    }

    // Virtual method for C ABI access and custom callback
    virtual QPainter* sharedPainter() const override {
        if (qprintdialog_sharedpainter_isbase) {
            qprintdialog_sharedpainter_isbase = false;
            return QPrintDialog::sharedPainter();
        }
        auto sharedpainter_cb = qprintdialog_sharedpainter_callback;
        if (sharedpainter_cb) {
            QPainter* callback_ret = sharedpainter_cb();
            return callback_ret;
        }
        return QPrintDialog::sharedPainter();
    }

    // Virtual method for C ABI access and custom callback
    virtual void inputMethodEvent(QInputMethodEvent* param1) override {
        if (qprintdialog_inputmethodevent_isbase) {
            qprintdialog_inputmethodevent_isbase = false;
            QPrintDialog::inputMethodEvent(param1);
            return;
        }
        auto inputmethodevent_cb = qprintdialog_inputmethodevent_callback;
        if (inputmethodevent_cb) {
            QInputMethodEvent* cbval1 = param1;

            inputmethodevent_cb(this, cbval1);
            return;
        }
        QPrintDialog::inputMethodEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual QVariant inputMethodQuery(Qt::InputMethodQuery param1) const override {
        if (qprintdialog_inputmethodquery_isbase) {
            qprintdialog_inputmethodquery_isbase = false;
            return QPrintDialog::inputMethodQuery(param1);
        }
        auto inputmethodquery_cb = qprintdialog_inputmethodquery_callback;
        if (inputmethodquery_cb) {
            int cbval1 = static_cast<int>(param1);

            QVariant* callback_ret = inputmethodquery_cb(this, cbval1);
            return *callback_ret;
        }
        return QPrintDialog::inputMethodQuery(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool focusNextPrevChild(bool next) override {
        if (qprintdialog_focusnextprevchild_isbase) {
            qprintdialog_focusnextprevchild_isbase = false;
            return QPrintDialog::focusNextPrevChild(next);
        }
        auto focusnextprevchild_cb = qprintdialog_focusnextprevchild_callback;
        if (focusnextprevchild_cb) {
            bool cbval1 = next;

            bool callback_ret = focusnextprevchild_cb(this, cbval1);
            return callback_ret;
        }
        return QPrintDialog::focusNextPrevChild(next);
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (qprintdialog_timerevent_isbase) {
            qprintdialog_timerevent_isbase = false;
            QPrintDialog::timerEvent(event);
            return;
        }
        auto timerevent_cb = qprintdialog_timerevent_callback;
        if (timerevent_cb) {
            QTimerEvent* cbval1 = event;

            timerevent_cb(this, cbval1);
            return;
        }
        QPrintDialog::timerEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (qprintdialog_childevent_isbase) {
            qprintdialog_childevent_isbase = false;
            QPrintDialog::childEvent(event);
            return;
        }
        auto childevent_cb = qprintdialog_childevent_callback;
        if (childevent_cb) {
            QChildEvent* cbval1 = event;

            childevent_cb(this, cbval1);
            return;
        }
        QPrintDialog::childEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (qprintdialog_customevent_isbase) {
            qprintdialog_customevent_isbase = false;
            QPrintDialog::customEvent(event);
            return;
        }
        auto customevent_cb = qprintdialog_customevent_callback;
        if (customevent_cb) {
            QEvent* cbval1 = event;

            customevent_cb(this, cbval1);
            return;
        }
        QPrintDialog::customEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (qprintdialog_connectnotify_isbase) {
            qprintdialog_connectnotify_isbase = false;
            QPrintDialog::connectNotify(signal);
            return;
        }
        auto connectnotify_cb = qprintdialog_connectnotify_callback;
        if (connectnotify_cb) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            connectnotify_cb(this, cbval1);
            return;
        }
        QPrintDialog::connectNotify(signal);
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (qprintdialog_disconnectnotify_isbase) {
            qprintdialog_disconnectnotify_isbase = false;
            QPrintDialog::disconnectNotify(signal);
            return;
        }
        auto disconnectnotify_cb = qprintdialog_disconnectnotify_callback;
        if (disconnectnotify_cb) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            disconnectnotify_cb(this, cbval1);
            return;
        }
        QPrintDialog::disconnectNotify(signal);
    }

    // Virtual method for C ABI access and custom callback
    void adjustPosition(QWidget* param1) {
        if (qprintdialog_adjustposition_isbase) {
            qprintdialog_adjustposition_isbase = false;
            QPrintDialog::adjustPosition(param1);
            return;
        }
        auto adjustposition_cb = qprintdialog_adjustposition_callback;
        if (adjustposition_cb) {
            QWidget* cbval1 = param1;

            adjustposition_cb(this, cbval1);
            return;
        }
        QPrintDialog::adjustPosition(param1);
    }

    // Virtual method for C ABI access and custom callback
    void updateMicroFocus() {
        if (qprintdialog_updatemicrofocus_isbase) {
            qprintdialog_updatemicrofocus_isbase = false;
            QPrintDialog::updateMicroFocus();
            return;
        }
        auto updatemicrofocus_cb = qprintdialog_updatemicrofocus_callback;
        if (updatemicrofocus_cb) {
            updatemicrofocus_cb();
            return;
        }
        QPrintDialog::updateMicroFocus();
    }

    // Virtual method for C ABI access and custom callback
    void create() {
        if (qprintdialog_create_isbase) {
            qprintdialog_create_isbase = false;
            QPrintDialog::create();
            return;
        }
        auto create_cb = qprintdialog_create_callback;
        if (create_cb) {
            create_cb();
            return;
        }
        QPrintDialog::create();
    }

    // Virtual method for C ABI access and custom callback
    void destroy() {
        if (qprintdialog_destroy_isbase) {
            qprintdialog_destroy_isbase = false;
            QPrintDialog::destroy();
            return;
        }
        auto destroy_cb = qprintdialog_destroy_callback;
        if (destroy_cb) {
            destroy_cb();
            return;
        }
        QPrintDialog::destroy();
    }

    // Virtual method for C ABI access and custom callback
    bool focusNextChild() {
        if (qprintdialog_focusnextchild_isbase) {
            qprintdialog_focusnextchild_isbase = false;
            return QPrintDialog::focusNextChild();
        }
        auto focusnextchild_cb = qprintdialog_focusnextchild_callback;
        if (focusnextchild_cb) {
            bool callback_ret = focusnextchild_cb();
            return callback_ret;
        }
        return QPrintDialog::focusNextChild();
    }

    // Virtual method for C ABI access and custom callback
    bool focusPreviousChild() {
        if (qprintdialog_focuspreviouschild_isbase) {
            qprintdialog_focuspreviouschild_isbase = false;
            return QPrintDialog::focusPreviousChild();
        }
        auto focuspreviouschild_cb = qprintdialog_focuspreviouschild_callback;
        if (focuspreviouschild_cb) {
            bool callback_ret = focuspreviouschild_cb();
            return callback_ret;
        }
        return QPrintDialog::focusPreviousChild();
    }

    // Virtual method for C ABI access and custom callback
    QObject* sender() const {
        if (qprintdialog_sender_isbase) {
            qprintdialog_sender_isbase = false;
            return QPrintDialog::sender();
        }
        auto sender_cb = qprintdialog_sender_callback;
        if (sender_cb) {
            QObject* callback_ret = sender_cb();
            return callback_ret;
        }
        return QPrintDialog::sender();
    }

    // Virtual method for C ABI access and custom callback
    int senderSignalIndex() const {
        if (qprintdialog_sendersignalindex_isbase) {
            qprintdialog_sendersignalindex_isbase = false;
            return QPrintDialog::senderSignalIndex();
        }
        auto sendersignalindex_cb = qprintdialog_sendersignalindex_callback;
        if (sendersignalindex_cb) {
            int callback_ret = sendersignalindex_cb();
            return static_cast<int>(callback_ret);
        }
        return QPrintDialog::senderSignalIndex();
    }

    // Virtual method for C ABI access and custom callback
    int receivers(const char* signal) const {
        if (qprintdialog_receivers_isbase) {
            qprintdialog_receivers_isbase = false;
            return QPrintDialog::receivers(signal);
        }
        auto receivers_cb = qprintdialog_receivers_callback;
        if (receivers_cb) {
            const char* cbval1 = (const char*)signal;

            int callback_ret = receivers_cb(this, cbval1);
            return static_cast<int>(callback_ret);
        }
        return QPrintDialog::receivers(signal);
    }

    // Virtual method for C ABI access and custom callback
    bool isSignalConnected(const QMetaMethod& signal) const {
        if (qprintdialog_issignalconnected_isbase) {
            qprintdialog_issignalconnected_isbase = false;
            return QPrintDialog::isSignalConnected(signal);
        }
        auto issignalconnected_cb = qprintdialog_issignalconnected_callback;
        if (issignalconnected_cb) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            bool callback_ret = issignalconnected_cb(this, cbval1);
            return callback_ret;
        }
        return QPrintDialog::isSignalConnected(signal);
    }

    // Virtual method for C ABI access and custom callback
    double getDecodedMetricF(QPaintDevice::PaintDeviceMetric metricA, QPaintDevice::PaintDeviceMetric metricB) const {
        if (qprintdialog_getdecodedmetricf_isbase) {
            qprintdialog_getdecodedmetricf_isbase = false;
            return QPrintDialog::getDecodedMetricF(metricA, metricB);
        }
        auto getdecodedmetricf_cb = qprintdialog_getdecodedmetricf_callback;
        if (getdecodedmetricf_cb) {
            int cbval1 = static_cast<int>(metricA);
            int cbval2 = static_cast<int>(metricB);

            double callback_ret = getdecodedmetricf_cb(this, cbval1, cbval2);
            return static_cast<double>(callback_ret);
        }
        return QPrintDialog::getDecodedMetricF(metricA, metricB);
    }

    // Friend functions
    friend void QPrintDialog_KeyPressEvent(QPrintDialog* self, QKeyEvent* param1);
    friend void QPrintDialog_SuperKeyPressEvent(QPrintDialog* self, QKeyEvent* param1);
    friend void QPrintDialog_CloseEvent(QPrintDialog* self, QCloseEvent* param1);
    friend void QPrintDialog_SuperCloseEvent(QPrintDialog* self, QCloseEvent* param1);
    friend void QPrintDialog_ShowEvent(QPrintDialog* self, QShowEvent* param1);
    friend void QPrintDialog_SuperShowEvent(QPrintDialog* self, QShowEvent* param1);
    friend void QPrintDialog_ResizeEvent(QPrintDialog* self, QResizeEvent* param1);
    friend void QPrintDialog_SuperResizeEvent(QPrintDialog* self, QResizeEvent* param1);
    friend void QPrintDialog_ContextMenuEvent(QPrintDialog* self, QContextMenuEvent* param1);
    friend void QPrintDialog_SuperContextMenuEvent(QPrintDialog* self, QContextMenuEvent* param1);
    friend bool QPrintDialog_EventFilter(QPrintDialog* self, QObject* param1, QEvent* param2);
    friend bool QPrintDialog_SuperEventFilter(QPrintDialog* self, QObject* param1, QEvent* param2);
    friend bool QPrintDialog_Event(QPrintDialog* self, QEvent* event);
    friend bool QPrintDialog_SuperEvent(QPrintDialog* self, QEvent* event);
    friend void QPrintDialog_MousePressEvent(QPrintDialog* self, QMouseEvent* event);
    friend void QPrintDialog_SuperMousePressEvent(QPrintDialog* self, QMouseEvent* event);
    friend void QPrintDialog_MouseReleaseEvent(QPrintDialog* self, QMouseEvent* event);
    friend void QPrintDialog_SuperMouseReleaseEvent(QPrintDialog* self, QMouseEvent* event);
    friend void QPrintDialog_MouseDoubleClickEvent(QPrintDialog* self, QMouseEvent* event);
    friend void QPrintDialog_SuperMouseDoubleClickEvent(QPrintDialog* self, QMouseEvent* event);
    friend void QPrintDialog_MouseMoveEvent(QPrintDialog* self, QMouseEvent* event);
    friend void QPrintDialog_SuperMouseMoveEvent(QPrintDialog* self, QMouseEvent* event);
    friend void QPrintDialog_WheelEvent(QPrintDialog* self, QWheelEvent* event);
    friend void QPrintDialog_SuperWheelEvent(QPrintDialog* self, QWheelEvent* event);
    friend void QPrintDialog_KeyReleaseEvent(QPrintDialog* self, QKeyEvent* event);
    friend void QPrintDialog_SuperKeyReleaseEvent(QPrintDialog* self, QKeyEvent* event);
    friend void QPrintDialog_FocusInEvent(QPrintDialog* self, QFocusEvent* event);
    friend void QPrintDialog_SuperFocusInEvent(QPrintDialog* self, QFocusEvent* event);
    friend void QPrintDialog_FocusOutEvent(QPrintDialog* self, QFocusEvent* event);
    friend void QPrintDialog_SuperFocusOutEvent(QPrintDialog* self, QFocusEvent* event);
    friend void QPrintDialog_EnterEvent(QPrintDialog* self, QEnterEvent* event);
    friend void QPrintDialog_SuperEnterEvent(QPrintDialog* self, QEnterEvent* event);
    friend void QPrintDialog_LeaveEvent(QPrintDialog* self, QEvent* event);
    friend void QPrintDialog_SuperLeaveEvent(QPrintDialog* self, QEvent* event);
    friend void QPrintDialog_PaintEvent(QPrintDialog* self, QPaintEvent* event);
    friend void QPrintDialog_SuperPaintEvent(QPrintDialog* self, QPaintEvent* event);
    friend void QPrintDialog_MoveEvent(QPrintDialog* self, QMoveEvent* event);
    friend void QPrintDialog_SuperMoveEvent(QPrintDialog* self, QMoveEvent* event);
    friend void QPrintDialog_TabletEvent(QPrintDialog* self, QTabletEvent* event);
    friend void QPrintDialog_SuperTabletEvent(QPrintDialog* self, QTabletEvent* event);
    friend void QPrintDialog_ActionEvent(QPrintDialog* self, QActionEvent* event);
    friend void QPrintDialog_SuperActionEvent(QPrintDialog* self, QActionEvent* event);
    friend void QPrintDialog_DragEnterEvent(QPrintDialog* self, QDragEnterEvent* event);
    friend void QPrintDialog_SuperDragEnterEvent(QPrintDialog* self, QDragEnterEvent* event);
    friend void QPrintDialog_DragMoveEvent(QPrintDialog* self, QDragMoveEvent* event);
    friend void QPrintDialog_SuperDragMoveEvent(QPrintDialog* self, QDragMoveEvent* event);
    friend void QPrintDialog_DragLeaveEvent(QPrintDialog* self, QDragLeaveEvent* event);
    friend void QPrintDialog_SuperDragLeaveEvent(QPrintDialog* self, QDragLeaveEvent* event);
    friend void QPrintDialog_DropEvent(QPrintDialog* self, QDropEvent* event);
    friend void QPrintDialog_SuperDropEvent(QPrintDialog* self, QDropEvent* event);
    friend void QPrintDialog_HideEvent(QPrintDialog* self, QHideEvent* event);
    friend void QPrintDialog_SuperHideEvent(QPrintDialog* self, QHideEvent* event);
    friend bool QPrintDialog_NativeEvent(QPrintDialog* self, const libqt_string eventType, void* message, intptr_t* result);
    friend bool QPrintDialog_SuperNativeEvent(QPrintDialog* self, const libqt_string eventType, void* message, intptr_t* result);
    friend void QPrintDialog_ChangeEvent(QPrintDialog* self, QEvent* param1);
    friend void QPrintDialog_SuperChangeEvent(QPrintDialog* self, QEvent* param1);
    friend int QPrintDialog_Metric(const QPrintDialog* self, int param1);
    friend int QPrintDialog_SuperMetric(const QPrintDialog* self, int param1);
    friend void QPrintDialog_InitPainter(const QPrintDialog* self, QPainter* painter);
    friend void QPrintDialog_SuperInitPainter(const QPrintDialog* self, QPainter* painter);
    friend QPaintDevice* QPrintDialog_Redirected(const QPrintDialog* self, QPoint* offset);
    friend QPaintDevice* QPrintDialog_SuperRedirected(const QPrintDialog* self, QPoint* offset);
    friend QPainter* QPrintDialog_SharedPainter(const QPrintDialog* self);
    friend QPainter* QPrintDialog_SuperSharedPainter(const QPrintDialog* self);
    friend void QPrintDialog_InputMethodEvent(QPrintDialog* self, QInputMethodEvent* param1);
    friend void QPrintDialog_SuperInputMethodEvent(QPrintDialog* self, QInputMethodEvent* param1);
    friend bool QPrintDialog_FocusNextPrevChild(QPrintDialog* self, bool next);
    friend bool QPrintDialog_SuperFocusNextPrevChild(QPrintDialog* self, bool next);
    friend void QPrintDialog_TimerEvent(QPrintDialog* self, QTimerEvent* event);
    friend void QPrintDialog_SuperTimerEvent(QPrintDialog* self, QTimerEvent* event);
    friend void QPrintDialog_ChildEvent(QPrintDialog* self, QChildEvent* event);
    friend void QPrintDialog_SuperChildEvent(QPrintDialog* self, QChildEvent* event);
    friend void QPrintDialog_CustomEvent(QPrintDialog* self, QEvent* event);
    friend void QPrintDialog_SuperCustomEvent(QPrintDialog* self, QEvent* event);
    friend void QPrintDialog_ConnectNotify(QPrintDialog* self, const QMetaMethod* signal);
    friend void QPrintDialog_SuperConnectNotify(QPrintDialog* self, const QMetaMethod* signal);
    friend void QPrintDialog_DisconnectNotify(QPrintDialog* self, const QMetaMethod* signal);
    friend void QPrintDialog_SuperDisconnectNotify(QPrintDialog* self, const QMetaMethod* signal);
    friend void QPrintDialog_AdjustPosition(QPrintDialog* self, QWidget* param1);
    friend void QPrintDialog_SuperAdjustPosition(QPrintDialog* self, QWidget* param1);
    friend void QPrintDialog_UpdateMicroFocus(QPrintDialog* self);
    friend void QPrintDialog_SuperUpdateMicroFocus(QPrintDialog* self);
    friend void QPrintDialog_Create(QPrintDialog* self);
    friend void QPrintDialog_SuperCreate(QPrintDialog* self);
    friend void QPrintDialog_Destroy(QPrintDialog* self);
    friend void QPrintDialog_SuperDestroy(QPrintDialog* self);
    friend bool QPrintDialog_FocusNextChild(QPrintDialog* self);
    friend bool QPrintDialog_SuperFocusNextChild(QPrintDialog* self);
    friend bool QPrintDialog_FocusPreviousChild(QPrintDialog* self);
    friend bool QPrintDialog_SuperFocusPreviousChild(QPrintDialog* self);
    friend QObject* QPrintDialog_Sender(const QPrintDialog* self);
    friend QObject* QPrintDialog_SuperSender(const QPrintDialog* self);
    friend int QPrintDialog_SenderSignalIndex(const QPrintDialog* self);
    friend int QPrintDialog_SuperSenderSignalIndex(const QPrintDialog* self);
    friend int QPrintDialog_Receivers(const QPrintDialog* self, const char* signal);
    friend int QPrintDialog_SuperReceivers(const QPrintDialog* self, const char* signal);
    friend bool QPrintDialog_IsSignalConnected(const QPrintDialog* self, const QMetaMethod* signal);
    friend bool QPrintDialog_SuperIsSignalConnected(const QPrintDialog* self, const QMetaMethod* signal);
    friend double QPrintDialog_GetDecodedMetricF(const QPrintDialog* self, int metricA, int metricB);
    friend double QPrintDialog_SuperGetDecodedMetricF(const QPrintDialog* self, int metricA, int metricB);
};

#endif
