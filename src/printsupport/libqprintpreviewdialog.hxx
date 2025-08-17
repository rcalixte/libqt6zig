#pragma once
#ifndef SRC_PRINTSUPPORTC_LIBVIRTUALQPRINTPREVIEWDIALOG_H
#define SRC_PRINTSUPPORTC_LIBVIRTUALQPRINTPREVIEWDIALOG_H

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

// This class is a subclass of QPrintPreviewDialog so that we can call protected methods
class VirtualQPrintPreviewDialog final : public QPrintPreviewDialog {

  public:
    // Virtual class boolean flag
    bool isVirtualQPrintPreviewDialog = true;

    // Virtual class public types (including callbacks)
    using QPrintPreviewDialog_Metacall_Callback = int (*)(QPrintPreviewDialog*, int, int, void**);
    using QPrintPreviewDialog_SetVisible_Callback = void (*)(QPrintPreviewDialog*, bool);
    using QPrintPreviewDialog_Done_Callback = void (*)(QPrintPreviewDialog*, int);
    using QPrintPreviewDialog_SizeHint_Callback = QSize* (*)();
    using QPrintPreviewDialog_MinimumSizeHint_Callback = QSize* (*)();
    using QPrintPreviewDialog_Open_Callback = void (*)();
    using QPrintPreviewDialog_Exec_Callback = int (*)();
    using QPrintPreviewDialog_Accept_Callback = void (*)();
    using QPrintPreviewDialog_Reject_Callback = void (*)();
    using QPrintPreviewDialog_KeyPressEvent_Callback = void (*)(QPrintPreviewDialog*, QKeyEvent*);
    using QPrintPreviewDialog_CloseEvent_Callback = void (*)(QPrintPreviewDialog*, QCloseEvent*);
    using QPrintPreviewDialog_ShowEvent_Callback = void (*)(QPrintPreviewDialog*, QShowEvent*);
    using QPrintPreviewDialog_ResizeEvent_Callback = void (*)(QPrintPreviewDialog*, QResizeEvent*);
    using QPrintPreviewDialog_ContextMenuEvent_Callback = void (*)(QPrintPreviewDialog*, QContextMenuEvent*);
    using QPrintPreviewDialog_EventFilter_Callback = bool (*)(QPrintPreviewDialog*, QObject*, QEvent*);
    using QPrintPreviewDialog_DevType_Callback = int (*)();
    using QPrintPreviewDialog_HeightForWidth_Callback = int (*)(const QPrintPreviewDialog*, int);
    using QPrintPreviewDialog_HasHeightForWidth_Callback = bool (*)();
    using QPrintPreviewDialog_PaintEngine_Callback = QPaintEngine* (*)();
    using QPrintPreviewDialog_Event_Callback = bool (*)(QPrintPreviewDialog*, QEvent*);
    using QPrintPreviewDialog_MousePressEvent_Callback = void (*)(QPrintPreviewDialog*, QMouseEvent*);
    using QPrintPreviewDialog_MouseReleaseEvent_Callback = void (*)(QPrintPreviewDialog*, QMouseEvent*);
    using QPrintPreviewDialog_MouseDoubleClickEvent_Callback = void (*)(QPrintPreviewDialog*, QMouseEvent*);
    using QPrintPreviewDialog_MouseMoveEvent_Callback = void (*)(QPrintPreviewDialog*, QMouseEvent*);
    using QPrintPreviewDialog_WheelEvent_Callback = void (*)(QPrintPreviewDialog*, QWheelEvent*);
    using QPrintPreviewDialog_KeyReleaseEvent_Callback = void (*)(QPrintPreviewDialog*, QKeyEvent*);
    using QPrintPreviewDialog_FocusInEvent_Callback = void (*)(QPrintPreviewDialog*, QFocusEvent*);
    using QPrintPreviewDialog_FocusOutEvent_Callback = void (*)(QPrintPreviewDialog*, QFocusEvent*);
    using QPrintPreviewDialog_EnterEvent_Callback = void (*)(QPrintPreviewDialog*, QEnterEvent*);
    using QPrintPreviewDialog_LeaveEvent_Callback = void (*)(QPrintPreviewDialog*, QEvent*);
    using QPrintPreviewDialog_PaintEvent_Callback = void (*)(QPrintPreviewDialog*, QPaintEvent*);
    using QPrintPreviewDialog_MoveEvent_Callback = void (*)(QPrintPreviewDialog*, QMoveEvent*);
    using QPrintPreviewDialog_TabletEvent_Callback = void (*)(QPrintPreviewDialog*, QTabletEvent*);
    using QPrintPreviewDialog_ActionEvent_Callback = void (*)(QPrintPreviewDialog*, QActionEvent*);
    using QPrintPreviewDialog_DragEnterEvent_Callback = void (*)(QPrintPreviewDialog*, QDragEnterEvent*);
    using QPrintPreviewDialog_DragMoveEvent_Callback = void (*)(QPrintPreviewDialog*, QDragMoveEvent*);
    using QPrintPreviewDialog_DragLeaveEvent_Callback = void (*)(QPrintPreviewDialog*, QDragLeaveEvent*);
    using QPrintPreviewDialog_DropEvent_Callback = void (*)(QPrintPreviewDialog*, QDropEvent*);
    using QPrintPreviewDialog_HideEvent_Callback = void (*)(QPrintPreviewDialog*, QHideEvent*);
    using QPrintPreviewDialog_NativeEvent_Callback = bool (*)(QPrintPreviewDialog*, libqt_string, void*, intptr_t*);
    using QPrintPreviewDialog_ChangeEvent_Callback = void (*)(QPrintPreviewDialog*, QEvent*);
    using QPrintPreviewDialog_Metric_Callback = int (*)(const QPrintPreviewDialog*, int);
    using QPrintPreviewDialog_InitPainter_Callback = void (*)(const QPrintPreviewDialog*, QPainter*);
    using QPrintPreviewDialog_Redirected_Callback = QPaintDevice* (*)(const QPrintPreviewDialog*, QPoint*);
    using QPrintPreviewDialog_SharedPainter_Callback = QPainter* (*)();
    using QPrintPreviewDialog_InputMethodEvent_Callback = void (*)(QPrintPreviewDialog*, QInputMethodEvent*);
    using QPrintPreviewDialog_InputMethodQuery_Callback = QVariant* (*)(const QPrintPreviewDialog*, int);
    using QPrintPreviewDialog_FocusNextPrevChild_Callback = bool (*)(QPrintPreviewDialog*, bool);
    using QPrintPreviewDialog_TimerEvent_Callback = void (*)(QPrintPreviewDialog*, QTimerEvent*);
    using QPrintPreviewDialog_ChildEvent_Callback = void (*)(QPrintPreviewDialog*, QChildEvent*);
    using QPrintPreviewDialog_CustomEvent_Callback = void (*)(QPrintPreviewDialog*, QEvent*);
    using QPrintPreviewDialog_ConnectNotify_Callback = void (*)(QPrintPreviewDialog*, QMetaMethod*);
    using QPrintPreviewDialog_DisconnectNotify_Callback = void (*)(QPrintPreviewDialog*, QMetaMethod*);
    using QPrintPreviewDialog_AdjustPosition_Callback = void (*)(QPrintPreviewDialog*, QWidget*);
    using QPrintPreviewDialog_UpdateMicroFocus_Callback = void (*)();
    using QPrintPreviewDialog_Create_Callback = void (*)();
    using QPrintPreviewDialog_Destroy_Callback = void (*)();
    using QPrintPreviewDialog_FocusNextChild_Callback = bool (*)();
    using QPrintPreviewDialog_FocusPreviousChild_Callback = bool (*)();
    using QPrintPreviewDialog_Sender_Callback = QObject* (*)();
    using QPrintPreviewDialog_SenderSignalIndex_Callback = int (*)();
    using QPrintPreviewDialog_Receivers_Callback = int (*)(const QPrintPreviewDialog*, const char*);
    using QPrintPreviewDialog_IsSignalConnected_Callback = bool (*)(const QPrintPreviewDialog*, QMetaMethod*);
    using QPrintPreviewDialog_GetDecodedMetricF_Callback = double (*)(const QPrintPreviewDialog*, int, int);

  protected:
    // Instance callback storage
    QPrintPreviewDialog_Metacall_Callback qprintpreviewdialog_metacall_callback = nullptr;
    QPrintPreviewDialog_SetVisible_Callback qprintpreviewdialog_setvisible_callback = nullptr;
    QPrintPreviewDialog_Done_Callback qprintpreviewdialog_done_callback = nullptr;
    QPrintPreviewDialog_SizeHint_Callback qprintpreviewdialog_sizehint_callback = nullptr;
    QPrintPreviewDialog_MinimumSizeHint_Callback qprintpreviewdialog_minimumsizehint_callback = nullptr;
    QPrintPreviewDialog_Open_Callback qprintpreviewdialog_open_callback = nullptr;
    QPrintPreviewDialog_Exec_Callback qprintpreviewdialog_exec_callback = nullptr;
    QPrintPreviewDialog_Accept_Callback qprintpreviewdialog_accept_callback = nullptr;
    QPrintPreviewDialog_Reject_Callback qprintpreviewdialog_reject_callback = nullptr;
    QPrintPreviewDialog_KeyPressEvent_Callback qprintpreviewdialog_keypressevent_callback = nullptr;
    QPrintPreviewDialog_CloseEvent_Callback qprintpreviewdialog_closeevent_callback = nullptr;
    QPrintPreviewDialog_ShowEvent_Callback qprintpreviewdialog_showevent_callback = nullptr;
    QPrintPreviewDialog_ResizeEvent_Callback qprintpreviewdialog_resizeevent_callback = nullptr;
    QPrintPreviewDialog_ContextMenuEvent_Callback qprintpreviewdialog_contextmenuevent_callback = nullptr;
    QPrintPreviewDialog_EventFilter_Callback qprintpreviewdialog_eventfilter_callback = nullptr;
    QPrintPreviewDialog_DevType_Callback qprintpreviewdialog_devtype_callback = nullptr;
    QPrintPreviewDialog_HeightForWidth_Callback qprintpreviewdialog_heightforwidth_callback = nullptr;
    QPrintPreviewDialog_HasHeightForWidth_Callback qprintpreviewdialog_hasheightforwidth_callback = nullptr;
    QPrintPreviewDialog_PaintEngine_Callback qprintpreviewdialog_paintengine_callback = nullptr;
    QPrintPreviewDialog_Event_Callback qprintpreviewdialog_event_callback = nullptr;
    QPrintPreviewDialog_MousePressEvent_Callback qprintpreviewdialog_mousepressevent_callback = nullptr;
    QPrintPreviewDialog_MouseReleaseEvent_Callback qprintpreviewdialog_mousereleaseevent_callback = nullptr;
    QPrintPreviewDialog_MouseDoubleClickEvent_Callback qprintpreviewdialog_mousedoubleclickevent_callback = nullptr;
    QPrintPreviewDialog_MouseMoveEvent_Callback qprintpreviewdialog_mousemoveevent_callback = nullptr;
    QPrintPreviewDialog_WheelEvent_Callback qprintpreviewdialog_wheelevent_callback = nullptr;
    QPrintPreviewDialog_KeyReleaseEvent_Callback qprintpreviewdialog_keyreleaseevent_callback = nullptr;
    QPrintPreviewDialog_FocusInEvent_Callback qprintpreviewdialog_focusinevent_callback = nullptr;
    QPrintPreviewDialog_FocusOutEvent_Callback qprintpreviewdialog_focusoutevent_callback = nullptr;
    QPrintPreviewDialog_EnterEvent_Callback qprintpreviewdialog_enterevent_callback = nullptr;
    QPrintPreviewDialog_LeaveEvent_Callback qprintpreviewdialog_leaveevent_callback = nullptr;
    QPrintPreviewDialog_PaintEvent_Callback qprintpreviewdialog_paintevent_callback = nullptr;
    QPrintPreviewDialog_MoveEvent_Callback qprintpreviewdialog_moveevent_callback = nullptr;
    QPrintPreviewDialog_TabletEvent_Callback qprintpreviewdialog_tabletevent_callback = nullptr;
    QPrintPreviewDialog_ActionEvent_Callback qprintpreviewdialog_actionevent_callback = nullptr;
    QPrintPreviewDialog_DragEnterEvent_Callback qprintpreviewdialog_dragenterevent_callback = nullptr;
    QPrintPreviewDialog_DragMoveEvent_Callback qprintpreviewdialog_dragmoveevent_callback = nullptr;
    QPrintPreviewDialog_DragLeaveEvent_Callback qprintpreviewdialog_dragleaveevent_callback = nullptr;
    QPrintPreviewDialog_DropEvent_Callback qprintpreviewdialog_dropevent_callback = nullptr;
    QPrintPreviewDialog_HideEvent_Callback qprintpreviewdialog_hideevent_callback = nullptr;
    QPrintPreviewDialog_NativeEvent_Callback qprintpreviewdialog_nativeevent_callback = nullptr;
    QPrintPreviewDialog_ChangeEvent_Callback qprintpreviewdialog_changeevent_callback = nullptr;
    QPrintPreviewDialog_Metric_Callback qprintpreviewdialog_metric_callback = nullptr;
    QPrintPreviewDialog_InitPainter_Callback qprintpreviewdialog_initpainter_callback = nullptr;
    QPrintPreviewDialog_Redirected_Callback qprintpreviewdialog_redirected_callback = nullptr;
    QPrintPreviewDialog_SharedPainter_Callback qprintpreviewdialog_sharedpainter_callback = nullptr;
    QPrintPreviewDialog_InputMethodEvent_Callback qprintpreviewdialog_inputmethodevent_callback = nullptr;
    QPrintPreviewDialog_InputMethodQuery_Callback qprintpreviewdialog_inputmethodquery_callback = nullptr;
    QPrintPreviewDialog_FocusNextPrevChild_Callback qprintpreviewdialog_focusnextprevchild_callback = nullptr;
    QPrintPreviewDialog_TimerEvent_Callback qprintpreviewdialog_timerevent_callback = nullptr;
    QPrintPreviewDialog_ChildEvent_Callback qprintpreviewdialog_childevent_callback = nullptr;
    QPrintPreviewDialog_CustomEvent_Callback qprintpreviewdialog_customevent_callback = nullptr;
    QPrintPreviewDialog_ConnectNotify_Callback qprintpreviewdialog_connectnotify_callback = nullptr;
    QPrintPreviewDialog_DisconnectNotify_Callback qprintpreviewdialog_disconnectnotify_callback = nullptr;
    QPrintPreviewDialog_AdjustPosition_Callback qprintpreviewdialog_adjustposition_callback = nullptr;
    QPrintPreviewDialog_UpdateMicroFocus_Callback qprintpreviewdialog_updatemicrofocus_callback = nullptr;
    QPrintPreviewDialog_Create_Callback qprintpreviewdialog_create_callback = nullptr;
    QPrintPreviewDialog_Destroy_Callback qprintpreviewdialog_destroy_callback = nullptr;
    QPrintPreviewDialog_FocusNextChild_Callback qprintpreviewdialog_focusnextchild_callback = nullptr;
    QPrintPreviewDialog_FocusPreviousChild_Callback qprintpreviewdialog_focuspreviouschild_callback = nullptr;
    QPrintPreviewDialog_Sender_Callback qprintpreviewdialog_sender_callback = nullptr;
    QPrintPreviewDialog_SenderSignalIndex_Callback qprintpreviewdialog_sendersignalindex_callback = nullptr;
    QPrintPreviewDialog_Receivers_Callback qprintpreviewdialog_receivers_callback = nullptr;
    QPrintPreviewDialog_IsSignalConnected_Callback qprintpreviewdialog_issignalconnected_callback = nullptr;
    QPrintPreviewDialog_GetDecodedMetricF_Callback qprintpreviewdialog_getdecodedmetricf_callback = nullptr;

    // Instance base flags
    mutable bool qprintpreviewdialog_metacall_isbase = false;
    mutable bool qprintpreviewdialog_setvisible_isbase = false;
    mutable bool qprintpreviewdialog_done_isbase = false;
    mutable bool qprintpreviewdialog_sizehint_isbase = false;
    mutable bool qprintpreviewdialog_minimumsizehint_isbase = false;
    mutable bool qprintpreviewdialog_open_isbase = false;
    mutable bool qprintpreviewdialog_exec_isbase = false;
    mutable bool qprintpreviewdialog_accept_isbase = false;
    mutable bool qprintpreviewdialog_reject_isbase = false;
    mutable bool qprintpreviewdialog_keypressevent_isbase = false;
    mutable bool qprintpreviewdialog_closeevent_isbase = false;
    mutable bool qprintpreviewdialog_showevent_isbase = false;
    mutable bool qprintpreviewdialog_resizeevent_isbase = false;
    mutable bool qprintpreviewdialog_contextmenuevent_isbase = false;
    mutable bool qprintpreviewdialog_eventfilter_isbase = false;
    mutable bool qprintpreviewdialog_devtype_isbase = false;
    mutable bool qprintpreviewdialog_heightforwidth_isbase = false;
    mutable bool qprintpreviewdialog_hasheightforwidth_isbase = false;
    mutable bool qprintpreviewdialog_paintengine_isbase = false;
    mutable bool qprintpreviewdialog_event_isbase = false;
    mutable bool qprintpreviewdialog_mousepressevent_isbase = false;
    mutable bool qprintpreviewdialog_mousereleaseevent_isbase = false;
    mutable bool qprintpreviewdialog_mousedoubleclickevent_isbase = false;
    mutable bool qprintpreviewdialog_mousemoveevent_isbase = false;
    mutable bool qprintpreviewdialog_wheelevent_isbase = false;
    mutable bool qprintpreviewdialog_keyreleaseevent_isbase = false;
    mutable bool qprintpreviewdialog_focusinevent_isbase = false;
    mutable bool qprintpreviewdialog_focusoutevent_isbase = false;
    mutable bool qprintpreviewdialog_enterevent_isbase = false;
    mutable bool qprintpreviewdialog_leaveevent_isbase = false;
    mutable bool qprintpreviewdialog_paintevent_isbase = false;
    mutable bool qprintpreviewdialog_moveevent_isbase = false;
    mutable bool qprintpreviewdialog_tabletevent_isbase = false;
    mutable bool qprintpreviewdialog_actionevent_isbase = false;
    mutable bool qprintpreviewdialog_dragenterevent_isbase = false;
    mutable bool qprintpreviewdialog_dragmoveevent_isbase = false;
    mutable bool qprintpreviewdialog_dragleaveevent_isbase = false;
    mutable bool qprintpreviewdialog_dropevent_isbase = false;
    mutable bool qprintpreviewdialog_hideevent_isbase = false;
    mutable bool qprintpreviewdialog_nativeevent_isbase = false;
    mutable bool qprintpreviewdialog_changeevent_isbase = false;
    mutable bool qprintpreviewdialog_metric_isbase = false;
    mutable bool qprintpreviewdialog_initpainter_isbase = false;
    mutable bool qprintpreviewdialog_redirected_isbase = false;
    mutable bool qprintpreviewdialog_sharedpainter_isbase = false;
    mutable bool qprintpreviewdialog_inputmethodevent_isbase = false;
    mutable bool qprintpreviewdialog_inputmethodquery_isbase = false;
    mutable bool qprintpreviewdialog_focusnextprevchild_isbase = false;
    mutable bool qprintpreviewdialog_timerevent_isbase = false;
    mutable bool qprintpreviewdialog_childevent_isbase = false;
    mutable bool qprintpreviewdialog_customevent_isbase = false;
    mutable bool qprintpreviewdialog_connectnotify_isbase = false;
    mutable bool qprintpreviewdialog_disconnectnotify_isbase = false;
    mutable bool qprintpreviewdialog_adjustposition_isbase = false;
    mutable bool qprintpreviewdialog_updatemicrofocus_isbase = false;
    mutable bool qprintpreviewdialog_create_isbase = false;
    mutable bool qprintpreviewdialog_destroy_isbase = false;
    mutable bool qprintpreviewdialog_focusnextchild_isbase = false;
    mutable bool qprintpreviewdialog_focuspreviouschild_isbase = false;
    mutable bool qprintpreviewdialog_sender_isbase = false;
    mutable bool qprintpreviewdialog_sendersignalindex_isbase = false;
    mutable bool qprintpreviewdialog_receivers_isbase = false;
    mutable bool qprintpreviewdialog_issignalconnected_isbase = false;
    mutable bool qprintpreviewdialog_getdecodedmetricf_isbase = false;

  public:
    VirtualQPrintPreviewDialog(QWidget* parent) : QPrintPreviewDialog(parent) {};
    VirtualQPrintPreviewDialog() : QPrintPreviewDialog() {};
    VirtualQPrintPreviewDialog(QPrinter* printer) : QPrintPreviewDialog(printer) {};
    VirtualQPrintPreviewDialog(QWidget* parent, Qt::WindowFlags flags) : QPrintPreviewDialog(parent, flags) {};
    VirtualQPrintPreviewDialog(QPrinter* printer, QWidget* parent) : QPrintPreviewDialog(printer, parent) {};
    VirtualQPrintPreviewDialog(QPrinter* printer, QWidget* parent, Qt::WindowFlags flags) : QPrintPreviewDialog(printer, parent, flags) {};

    ~VirtualQPrintPreviewDialog() {
        qprintpreviewdialog_metacall_callback = nullptr;
        qprintpreviewdialog_setvisible_callback = nullptr;
        qprintpreviewdialog_done_callback = nullptr;
        qprintpreviewdialog_sizehint_callback = nullptr;
        qprintpreviewdialog_minimumsizehint_callback = nullptr;
        qprintpreviewdialog_open_callback = nullptr;
        qprintpreviewdialog_exec_callback = nullptr;
        qprintpreviewdialog_accept_callback = nullptr;
        qprintpreviewdialog_reject_callback = nullptr;
        qprintpreviewdialog_keypressevent_callback = nullptr;
        qprintpreviewdialog_closeevent_callback = nullptr;
        qprintpreviewdialog_showevent_callback = nullptr;
        qprintpreviewdialog_resizeevent_callback = nullptr;
        qprintpreviewdialog_contextmenuevent_callback = nullptr;
        qprintpreviewdialog_eventfilter_callback = nullptr;
        qprintpreviewdialog_devtype_callback = nullptr;
        qprintpreviewdialog_heightforwidth_callback = nullptr;
        qprintpreviewdialog_hasheightforwidth_callback = nullptr;
        qprintpreviewdialog_paintengine_callback = nullptr;
        qprintpreviewdialog_event_callback = nullptr;
        qprintpreviewdialog_mousepressevent_callback = nullptr;
        qprintpreviewdialog_mousereleaseevent_callback = nullptr;
        qprintpreviewdialog_mousedoubleclickevent_callback = nullptr;
        qprintpreviewdialog_mousemoveevent_callback = nullptr;
        qprintpreviewdialog_wheelevent_callback = nullptr;
        qprintpreviewdialog_keyreleaseevent_callback = nullptr;
        qprintpreviewdialog_focusinevent_callback = nullptr;
        qprintpreviewdialog_focusoutevent_callback = nullptr;
        qprintpreviewdialog_enterevent_callback = nullptr;
        qprintpreviewdialog_leaveevent_callback = nullptr;
        qprintpreviewdialog_paintevent_callback = nullptr;
        qprintpreviewdialog_moveevent_callback = nullptr;
        qprintpreviewdialog_tabletevent_callback = nullptr;
        qprintpreviewdialog_actionevent_callback = nullptr;
        qprintpreviewdialog_dragenterevent_callback = nullptr;
        qprintpreviewdialog_dragmoveevent_callback = nullptr;
        qprintpreviewdialog_dragleaveevent_callback = nullptr;
        qprintpreviewdialog_dropevent_callback = nullptr;
        qprintpreviewdialog_hideevent_callback = nullptr;
        qprintpreviewdialog_nativeevent_callback = nullptr;
        qprintpreviewdialog_changeevent_callback = nullptr;
        qprintpreviewdialog_metric_callback = nullptr;
        qprintpreviewdialog_initpainter_callback = nullptr;
        qprintpreviewdialog_redirected_callback = nullptr;
        qprintpreviewdialog_sharedpainter_callback = nullptr;
        qprintpreviewdialog_inputmethodevent_callback = nullptr;
        qprintpreviewdialog_inputmethodquery_callback = nullptr;
        qprintpreviewdialog_focusnextprevchild_callback = nullptr;
        qprintpreviewdialog_timerevent_callback = nullptr;
        qprintpreviewdialog_childevent_callback = nullptr;
        qprintpreviewdialog_customevent_callback = nullptr;
        qprintpreviewdialog_connectnotify_callback = nullptr;
        qprintpreviewdialog_disconnectnotify_callback = nullptr;
        qprintpreviewdialog_adjustposition_callback = nullptr;
        qprintpreviewdialog_updatemicrofocus_callback = nullptr;
        qprintpreviewdialog_create_callback = nullptr;
        qprintpreviewdialog_destroy_callback = nullptr;
        qprintpreviewdialog_focusnextchild_callback = nullptr;
        qprintpreviewdialog_focuspreviouschild_callback = nullptr;
        qprintpreviewdialog_sender_callback = nullptr;
        qprintpreviewdialog_sendersignalindex_callback = nullptr;
        qprintpreviewdialog_receivers_callback = nullptr;
        qprintpreviewdialog_issignalconnected_callback = nullptr;
        qprintpreviewdialog_getdecodedmetricf_callback = nullptr;
    }

    // Callback setters
    inline void setQPrintPreviewDialog_Metacall_Callback(QPrintPreviewDialog_Metacall_Callback cb) { qprintpreviewdialog_metacall_callback = cb; }
    inline void setQPrintPreviewDialog_SetVisible_Callback(QPrintPreviewDialog_SetVisible_Callback cb) { qprintpreviewdialog_setvisible_callback = cb; }
    inline void setQPrintPreviewDialog_Done_Callback(QPrintPreviewDialog_Done_Callback cb) { qprintpreviewdialog_done_callback = cb; }
    inline void setQPrintPreviewDialog_SizeHint_Callback(QPrintPreviewDialog_SizeHint_Callback cb) { qprintpreviewdialog_sizehint_callback = cb; }
    inline void setQPrintPreviewDialog_MinimumSizeHint_Callback(QPrintPreviewDialog_MinimumSizeHint_Callback cb) { qprintpreviewdialog_minimumsizehint_callback = cb; }
    inline void setQPrintPreviewDialog_Open_Callback(QPrintPreviewDialog_Open_Callback cb) { qprintpreviewdialog_open_callback = cb; }
    inline void setQPrintPreviewDialog_Exec_Callback(QPrintPreviewDialog_Exec_Callback cb) { qprintpreviewdialog_exec_callback = cb; }
    inline void setQPrintPreviewDialog_Accept_Callback(QPrintPreviewDialog_Accept_Callback cb) { qprintpreviewdialog_accept_callback = cb; }
    inline void setQPrintPreviewDialog_Reject_Callback(QPrintPreviewDialog_Reject_Callback cb) { qprintpreviewdialog_reject_callback = cb; }
    inline void setQPrintPreviewDialog_KeyPressEvent_Callback(QPrintPreviewDialog_KeyPressEvent_Callback cb) { qprintpreviewdialog_keypressevent_callback = cb; }
    inline void setQPrintPreviewDialog_CloseEvent_Callback(QPrintPreviewDialog_CloseEvent_Callback cb) { qprintpreviewdialog_closeevent_callback = cb; }
    inline void setQPrintPreviewDialog_ShowEvent_Callback(QPrintPreviewDialog_ShowEvent_Callback cb) { qprintpreviewdialog_showevent_callback = cb; }
    inline void setQPrintPreviewDialog_ResizeEvent_Callback(QPrintPreviewDialog_ResizeEvent_Callback cb) { qprintpreviewdialog_resizeevent_callback = cb; }
    inline void setQPrintPreviewDialog_ContextMenuEvent_Callback(QPrintPreviewDialog_ContextMenuEvent_Callback cb) { qprintpreviewdialog_contextmenuevent_callback = cb; }
    inline void setQPrintPreviewDialog_EventFilter_Callback(QPrintPreviewDialog_EventFilter_Callback cb) { qprintpreviewdialog_eventfilter_callback = cb; }
    inline void setQPrintPreviewDialog_DevType_Callback(QPrintPreviewDialog_DevType_Callback cb) { qprintpreviewdialog_devtype_callback = cb; }
    inline void setQPrintPreviewDialog_HeightForWidth_Callback(QPrintPreviewDialog_HeightForWidth_Callback cb) { qprintpreviewdialog_heightforwidth_callback = cb; }
    inline void setQPrintPreviewDialog_HasHeightForWidth_Callback(QPrintPreviewDialog_HasHeightForWidth_Callback cb) { qprintpreviewdialog_hasheightforwidth_callback = cb; }
    inline void setQPrintPreviewDialog_PaintEngine_Callback(QPrintPreviewDialog_PaintEngine_Callback cb) { qprintpreviewdialog_paintengine_callback = cb; }
    inline void setQPrintPreviewDialog_Event_Callback(QPrintPreviewDialog_Event_Callback cb) { qprintpreviewdialog_event_callback = cb; }
    inline void setQPrintPreviewDialog_MousePressEvent_Callback(QPrintPreviewDialog_MousePressEvent_Callback cb) { qprintpreviewdialog_mousepressevent_callback = cb; }
    inline void setQPrintPreviewDialog_MouseReleaseEvent_Callback(QPrintPreviewDialog_MouseReleaseEvent_Callback cb) { qprintpreviewdialog_mousereleaseevent_callback = cb; }
    inline void setQPrintPreviewDialog_MouseDoubleClickEvent_Callback(QPrintPreviewDialog_MouseDoubleClickEvent_Callback cb) { qprintpreviewdialog_mousedoubleclickevent_callback = cb; }
    inline void setQPrintPreviewDialog_MouseMoveEvent_Callback(QPrintPreviewDialog_MouseMoveEvent_Callback cb) { qprintpreviewdialog_mousemoveevent_callback = cb; }
    inline void setQPrintPreviewDialog_WheelEvent_Callback(QPrintPreviewDialog_WheelEvent_Callback cb) { qprintpreviewdialog_wheelevent_callback = cb; }
    inline void setQPrintPreviewDialog_KeyReleaseEvent_Callback(QPrintPreviewDialog_KeyReleaseEvent_Callback cb) { qprintpreviewdialog_keyreleaseevent_callback = cb; }
    inline void setQPrintPreviewDialog_FocusInEvent_Callback(QPrintPreviewDialog_FocusInEvent_Callback cb) { qprintpreviewdialog_focusinevent_callback = cb; }
    inline void setQPrintPreviewDialog_FocusOutEvent_Callback(QPrintPreviewDialog_FocusOutEvent_Callback cb) { qprintpreviewdialog_focusoutevent_callback = cb; }
    inline void setQPrintPreviewDialog_EnterEvent_Callback(QPrintPreviewDialog_EnterEvent_Callback cb) { qprintpreviewdialog_enterevent_callback = cb; }
    inline void setQPrintPreviewDialog_LeaveEvent_Callback(QPrintPreviewDialog_LeaveEvent_Callback cb) { qprintpreviewdialog_leaveevent_callback = cb; }
    inline void setQPrintPreviewDialog_PaintEvent_Callback(QPrintPreviewDialog_PaintEvent_Callback cb) { qprintpreviewdialog_paintevent_callback = cb; }
    inline void setQPrintPreviewDialog_MoveEvent_Callback(QPrintPreviewDialog_MoveEvent_Callback cb) { qprintpreviewdialog_moveevent_callback = cb; }
    inline void setQPrintPreviewDialog_TabletEvent_Callback(QPrintPreviewDialog_TabletEvent_Callback cb) { qprintpreviewdialog_tabletevent_callback = cb; }
    inline void setQPrintPreviewDialog_ActionEvent_Callback(QPrintPreviewDialog_ActionEvent_Callback cb) { qprintpreviewdialog_actionevent_callback = cb; }
    inline void setQPrintPreviewDialog_DragEnterEvent_Callback(QPrintPreviewDialog_DragEnterEvent_Callback cb) { qprintpreviewdialog_dragenterevent_callback = cb; }
    inline void setQPrintPreviewDialog_DragMoveEvent_Callback(QPrintPreviewDialog_DragMoveEvent_Callback cb) { qprintpreviewdialog_dragmoveevent_callback = cb; }
    inline void setQPrintPreviewDialog_DragLeaveEvent_Callback(QPrintPreviewDialog_DragLeaveEvent_Callback cb) { qprintpreviewdialog_dragleaveevent_callback = cb; }
    inline void setQPrintPreviewDialog_DropEvent_Callback(QPrintPreviewDialog_DropEvent_Callback cb) { qprintpreviewdialog_dropevent_callback = cb; }
    inline void setQPrintPreviewDialog_HideEvent_Callback(QPrintPreviewDialog_HideEvent_Callback cb) { qprintpreviewdialog_hideevent_callback = cb; }
    inline void setQPrintPreviewDialog_NativeEvent_Callback(QPrintPreviewDialog_NativeEvent_Callback cb) { qprintpreviewdialog_nativeevent_callback = cb; }
    inline void setQPrintPreviewDialog_ChangeEvent_Callback(QPrintPreviewDialog_ChangeEvent_Callback cb) { qprintpreviewdialog_changeevent_callback = cb; }
    inline void setQPrintPreviewDialog_Metric_Callback(QPrintPreviewDialog_Metric_Callback cb) { qprintpreviewdialog_metric_callback = cb; }
    inline void setQPrintPreviewDialog_InitPainter_Callback(QPrintPreviewDialog_InitPainter_Callback cb) { qprintpreviewdialog_initpainter_callback = cb; }
    inline void setQPrintPreviewDialog_Redirected_Callback(QPrintPreviewDialog_Redirected_Callback cb) { qprintpreviewdialog_redirected_callback = cb; }
    inline void setQPrintPreviewDialog_SharedPainter_Callback(QPrintPreviewDialog_SharedPainter_Callback cb) { qprintpreviewdialog_sharedpainter_callback = cb; }
    inline void setQPrintPreviewDialog_InputMethodEvent_Callback(QPrintPreviewDialog_InputMethodEvent_Callback cb) { qprintpreviewdialog_inputmethodevent_callback = cb; }
    inline void setQPrintPreviewDialog_InputMethodQuery_Callback(QPrintPreviewDialog_InputMethodQuery_Callback cb) { qprintpreviewdialog_inputmethodquery_callback = cb; }
    inline void setQPrintPreviewDialog_FocusNextPrevChild_Callback(QPrintPreviewDialog_FocusNextPrevChild_Callback cb) { qprintpreviewdialog_focusnextprevchild_callback = cb; }
    inline void setQPrintPreviewDialog_TimerEvent_Callback(QPrintPreviewDialog_TimerEvent_Callback cb) { qprintpreviewdialog_timerevent_callback = cb; }
    inline void setQPrintPreviewDialog_ChildEvent_Callback(QPrintPreviewDialog_ChildEvent_Callback cb) { qprintpreviewdialog_childevent_callback = cb; }
    inline void setQPrintPreviewDialog_CustomEvent_Callback(QPrintPreviewDialog_CustomEvent_Callback cb) { qprintpreviewdialog_customevent_callback = cb; }
    inline void setQPrintPreviewDialog_ConnectNotify_Callback(QPrintPreviewDialog_ConnectNotify_Callback cb) { qprintpreviewdialog_connectnotify_callback = cb; }
    inline void setQPrintPreviewDialog_DisconnectNotify_Callback(QPrintPreviewDialog_DisconnectNotify_Callback cb) { qprintpreviewdialog_disconnectnotify_callback = cb; }
    inline void setQPrintPreviewDialog_AdjustPosition_Callback(QPrintPreviewDialog_AdjustPosition_Callback cb) { qprintpreviewdialog_adjustposition_callback = cb; }
    inline void setQPrintPreviewDialog_UpdateMicroFocus_Callback(QPrintPreviewDialog_UpdateMicroFocus_Callback cb) { qprintpreviewdialog_updatemicrofocus_callback = cb; }
    inline void setQPrintPreviewDialog_Create_Callback(QPrintPreviewDialog_Create_Callback cb) { qprintpreviewdialog_create_callback = cb; }
    inline void setQPrintPreviewDialog_Destroy_Callback(QPrintPreviewDialog_Destroy_Callback cb) { qprintpreviewdialog_destroy_callback = cb; }
    inline void setQPrintPreviewDialog_FocusNextChild_Callback(QPrintPreviewDialog_FocusNextChild_Callback cb) { qprintpreviewdialog_focusnextchild_callback = cb; }
    inline void setQPrintPreviewDialog_FocusPreviousChild_Callback(QPrintPreviewDialog_FocusPreviousChild_Callback cb) { qprintpreviewdialog_focuspreviouschild_callback = cb; }
    inline void setQPrintPreviewDialog_Sender_Callback(QPrintPreviewDialog_Sender_Callback cb) { qprintpreviewdialog_sender_callback = cb; }
    inline void setQPrintPreviewDialog_SenderSignalIndex_Callback(QPrintPreviewDialog_SenderSignalIndex_Callback cb) { qprintpreviewdialog_sendersignalindex_callback = cb; }
    inline void setQPrintPreviewDialog_Receivers_Callback(QPrintPreviewDialog_Receivers_Callback cb) { qprintpreviewdialog_receivers_callback = cb; }
    inline void setQPrintPreviewDialog_IsSignalConnected_Callback(QPrintPreviewDialog_IsSignalConnected_Callback cb) { qprintpreviewdialog_issignalconnected_callback = cb; }
    inline void setQPrintPreviewDialog_GetDecodedMetricF_Callback(QPrintPreviewDialog_GetDecodedMetricF_Callback cb) { qprintpreviewdialog_getdecodedmetricf_callback = cb; }

    // Base flag setters
    inline void setQPrintPreviewDialog_Metacall_IsBase(bool value) const { qprintpreviewdialog_metacall_isbase = value; }
    inline void setQPrintPreviewDialog_SetVisible_IsBase(bool value) const { qprintpreviewdialog_setvisible_isbase = value; }
    inline void setQPrintPreviewDialog_Done_IsBase(bool value) const { qprintpreviewdialog_done_isbase = value; }
    inline void setQPrintPreviewDialog_SizeHint_IsBase(bool value) const { qprintpreviewdialog_sizehint_isbase = value; }
    inline void setQPrintPreviewDialog_MinimumSizeHint_IsBase(bool value) const { qprintpreviewdialog_minimumsizehint_isbase = value; }
    inline void setQPrintPreviewDialog_Open_IsBase(bool value) const { qprintpreviewdialog_open_isbase = value; }
    inline void setQPrintPreviewDialog_Exec_IsBase(bool value) const { qprintpreviewdialog_exec_isbase = value; }
    inline void setQPrintPreviewDialog_Accept_IsBase(bool value) const { qprintpreviewdialog_accept_isbase = value; }
    inline void setQPrintPreviewDialog_Reject_IsBase(bool value) const { qprintpreviewdialog_reject_isbase = value; }
    inline void setQPrintPreviewDialog_KeyPressEvent_IsBase(bool value) const { qprintpreviewdialog_keypressevent_isbase = value; }
    inline void setQPrintPreviewDialog_CloseEvent_IsBase(bool value) const { qprintpreviewdialog_closeevent_isbase = value; }
    inline void setQPrintPreviewDialog_ShowEvent_IsBase(bool value) const { qprintpreviewdialog_showevent_isbase = value; }
    inline void setQPrintPreviewDialog_ResizeEvent_IsBase(bool value) const { qprintpreviewdialog_resizeevent_isbase = value; }
    inline void setQPrintPreviewDialog_ContextMenuEvent_IsBase(bool value) const { qprintpreviewdialog_contextmenuevent_isbase = value; }
    inline void setQPrintPreviewDialog_EventFilter_IsBase(bool value) const { qprintpreviewdialog_eventfilter_isbase = value; }
    inline void setQPrintPreviewDialog_DevType_IsBase(bool value) const { qprintpreviewdialog_devtype_isbase = value; }
    inline void setQPrintPreviewDialog_HeightForWidth_IsBase(bool value) const { qprintpreviewdialog_heightforwidth_isbase = value; }
    inline void setQPrintPreviewDialog_HasHeightForWidth_IsBase(bool value) const { qprintpreviewdialog_hasheightforwidth_isbase = value; }
    inline void setQPrintPreviewDialog_PaintEngine_IsBase(bool value) const { qprintpreviewdialog_paintengine_isbase = value; }
    inline void setQPrintPreviewDialog_Event_IsBase(bool value) const { qprintpreviewdialog_event_isbase = value; }
    inline void setQPrintPreviewDialog_MousePressEvent_IsBase(bool value) const { qprintpreviewdialog_mousepressevent_isbase = value; }
    inline void setQPrintPreviewDialog_MouseReleaseEvent_IsBase(bool value) const { qprintpreviewdialog_mousereleaseevent_isbase = value; }
    inline void setQPrintPreviewDialog_MouseDoubleClickEvent_IsBase(bool value) const { qprintpreviewdialog_mousedoubleclickevent_isbase = value; }
    inline void setQPrintPreviewDialog_MouseMoveEvent_IsBase(bool value) const { qprintpreviewdialog_mousemoveevent_isbase = value; }
    inline void setQPrintPreviewDialog_WheelEvent_IsBase(bool value) const { qprintpreviewdialog_wheelevent_isbase = value; }
    inline void setQPrintPreviewDialog_KeyReleaseEvent_IsBase(bool value) const { qprintpreviewdialog_keyreleaseevent_isbase = value; }
    inline void setQPrintPreviewDialog_FocusInEvent_IsBase(bool value) const { qprintpreviewdialog_focusinevent_isbase = value; }
    inline void setQPrintPreviewDialog_FocusOutEvent_IsBase(bool value) const { qprintpreviewdialog_focusoutevent_isbase = value; }
    inline void setQPrintPreviewDialog_EnterEvent_IsBase(bool value) const { qprintpreviewdialog_enterevent_isbase = value; }
    inline void setQPrintPreviewDialog_LeaveEvent_IsBase(bool value) const { qprintpreviewdialog_leaveevent_isbase = value; }
    inline void setQPrintPreviewDialog_PaintEvent_IsBase(bool value) const { qprintpreviewdialog_paintevent_isbase = value; }
    inline void setQPrintPreviewDialog_MoveEvent_IsBase(bool value) const { qprintpreviewdialog_moveevent_isbase = value; }
    inline void setQPrintPreviewDialog_TabletEvent_IsBase(bool value) const { qprintpreviewdialog_tabletevent_isbase = value; }
    inline void setQPrintPreviewDialog_ActionEvent_IsBase(bool value) const { qprintpreviewdialog_actionevent_isbase = value; }
    inline void setQPrintPreviewDialog_DragEnterEvent_IsBase(bool value) const { qprintpreviewdialog_dragenterevent_isbase = value; }
    inline void setQPrintPreviewDialog_DragMoveEvent_IsBase(bool value) const { qprintpreviewdialog_dragmoveevent_isbase = value; }
    inline void setQPrintPreviewDialog_DragLeaveEvent_IsBase(bool value) const { qprintpreviewdialog_dragleaveevent_isbase = value; }
    inline void setQPrintPreviewDialog_DropEvent_IsBase(bool value) const { qprintpreviewdialog_dropevent_isbase = value; }
    inline void setQPrintPreviewDialog_HideEvent_IsBase(bool value) const { qprintpreviewdialog_hideevent_isbase = value; }
    inline void setQPrintPreviewDialog_NativeEvent_IsBase(bool value) const { qprintpreviewdialog_nativeevent_isbase = value; }
    inline void setQPrintPreviewDialog_ChangeEvent_IsBase(bool value) const { qprintpreviewdialog_changeevent_isbase = value; }
    inline void setQPrintPreviewDialog_Metric_IsBase(bool value) const { qprintpreviewdialog_metric_isbase = value; }
    inline void setQPrintPreviewDialog_InitPainter_IsBase(bool value) const { qprintpreviewdialog_initpainter_isbase = value; }
    inline void setQPrintPreviewDialog_Redirected_IsBase(bool value) const { qprintpreviewdialog_redirected_isbase = value; }
    inline void setQPrintPreviewDialog_SharedPainter_IsBase(bool value) const { qprintpreviewdialog_sharedpainter_isbase = value; }
    inline void setQPrintPreviewDialog_InputMethodEvent_IsBase(bool value) const { qprintpreviewdialog_inputmethodevent_isbase = value; }
    inline void setQPrintPreviewDialog_InputMethodQuery_IsBase(bool value) const { qprintpreviewdialog_inputmethodquery_isbase = value; }
    inline void setQPrintPreviewDialog_FocusNextPrevChild_IsBase(bool value) const { qprintpreviewdialog_focusnextprevchild_isbase = value; }
    inline void setQPrintPreviewDialog_TimerEvent_IsBase(bool value) const { qprintpreviewdialog_timerevent_isbase = value; }
    inline void setQPrintPreviewDialog_ChildEvent_IsBase(bool value) const { qprintpreviewdialog_childevent_isbase = value; }
    inline void setQPrintPreviewDialog_CustomEvent_IsBase(bool value) const { qprintpreviewdialog_customevent_isbase = value; }
    inline void setQPrintPreviewDialog_ConnectNotify_IsBase(bool value) const { qprintpreviewdialog_connectnotify_isbase = value; }
    inline void setQPrintPreviewDialog_DisconnectNotify_IsBase(bool value) const { qprintpreviewdialog_disconnectnotify_isbase = value; }
    inline void setQPrintPreviewDialog_AdjustPosition_IsBase(bool value) const { qprintpreviewdialog_adjustposition_isbase = value; }
    inline void setQPrintPreviewDialog_UpdateMicroFocus_IsBase(bool value) const { qprintpreviewdialog_updatemicrofocus_isbase = value; }
    inline void setQPrintPreviewDialog_Create_IsBase(bool value) const { qprintpreviewdialog_create_isbase = value; }
    inline void setQPrintPreviewDialog_Destroy_IsBase(bool value) const { qprintpreviewdialog_destroy_isbase = value; }
    inline void setQPrintPreviewDialog_FocusNextChild_IsBase(bool value) const { qprintpreviewdialog_focusnextchild_isbase = value; }
    inline void setQPrintPreviewDialog_FocusPreviousChild_IsBase(bool value) const { qprintpreviewdialog_focuspreviouschild_isbase = value; }
    inline void setQPrintPreviewDialog_Sender_IsBase(bool value) const { qprintpreviewdialog_sender_isbase = value; }
    inline void setQPrintPreviewDialog_SenderSignalIndex_IsBase(bool value) const { qprintpreviewdialog_sendersignalindex_isbase = value; }
    inline void setQPrintPreviewDialog_Receivers_IsBase(bool value) const { qprintpreviewdialog_receivers_isbase = value; }
    inline void setQPrintPreviewDialog_IsSignalConnected_IsBase(bool value) const { qprintpreviewdialog_issignalconnected_isbase = value; }
    inline void setQPrintPreviewDialog_GetDecodedMetricF_IsBase(bool value) const { qprintpreviewdialog_getdecodedmetricf_isbase = value; }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (qprintpreviewdialog_metacall_isbase) {
            qprintpreviewdialog_metacall_isbase = false;
            return QPrintPreviewDialog::qt_metacall(param1, param2, param3);
        } else if (qprintpreviewdialog_metacall_callback != nullptr) {
            int cbval1 = static_cast<int>(param1);
            int cbval2 = param2;
            void** cbval3 = param3;

            int callback_ret = qprintpreviewdialog_metacall_callback(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        } else {
            return QPrintPreviewDialog::qt_metacall(param1, param2, param3);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void setVisible(bool visible) override {
        if (qprintpreviewdialog_setvisible_isbase) {
            qprintpreviewdialog_setvisible_isbase = false;
            QPrintPreviewDialog::setVisible(visible);
        } else if (qprintpreviewdialog_setvisible_callback != nullptr) {
            bool cbval1 = visible;

            qprintpreviewdialog_setvisible_callback(this, cbval1);
        } else {
            QPrintPreviewDialog::setVisible(visible);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void done(int result) override {
        if (qprintpreviewdialog_done_isbase) {
            qprintpreviewdialog_done_isbase = false;
            QPrintPreviewDialog::done(result);
        } else if (qprintpreviewdialog_done_callback != nullptr) {
            int cbval1 = result;

            qprintpreviewdialog_done_callback(this, cbval1);
        } else {
            QPrintPreviewDialog::done(result);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QSize sizeHint() const override {
        if (qprintpreviewdialog_sizehint_isbase) {
            qprintpreviewdialog_sizehint_isbase = false;
            return QPrintPreviewDialog::sizeHint();
        } else if (qprintpreviewdialog_sizehint_callback != nullptr) {
            QSize* callback_ret = qprintpreviewdialog_sizehint_callback();
            return *callback_ret;
        } else {
            return QPrintPreviewDialog::sizeHint();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QSize minimumSizeHint() const override {
        if (qprintpreviewdialog_minimumsizehint_isbase) {
            qprintpreviewdialog_minimumsizehint_isbase = false;
            return QPrintPreviewDialog::minimumSizeHint();
        } else if (qprintpreviewdialog_minimumsizehint_callback != nullptr) {
            QSize* callback_ret = qprintpreviewdialog_minimumsizehint_callback();
            return *callback_ret;
        } else {
            return QPrintPreviewDialog::minimumSizeHint();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void open() override {
        if (qprintpreviewdialog_open_isbase) {
            qprintpreviewdialog_open_isbase = false;
            QPrintPreviewDialog::open();
        } else if (qprintpreviewdialog_open_callback != nullptr) {
            qprintpreviewdialog_open_callback();
        } else {
            QPrintPreviewDialog::open();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual int exec() override {
        if (qprintpreviewdialog_exec_isbase) {
            qprintpreviewdialog_exec_isbase = false;
            return QPrintPreviewDialog::exec();
        } else if (qprintpreviewdialog_exec_callback != nullptr) {
            int callback_ret = qprintpreviewdialog_exec_callback();
            return static_cast<int>(callback_ret);
        } else {
            return QPrintPreviewDialog::exec();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void accept() override {
        if (qprintpreviewdialog_accept_isbase) {
            qprintpreviewdialog_accept_isbase = false;
            QPrintPreviewDialog::accept();
        } else if (qprintpreviewdialog_accept_callback != nullptr) {
            qprintpreviewdialog_accept_callback();
        } else {
            QPrintPreviewDialog::accept();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void reject() override {
        if (qprintpreviewdialog_reject_isbase) {
            qprintpreviewdialog_reject_isbase = false;
            QPrintPreviewDialog::reject();
        } else if (qprintpreviewdialog_reject_callback != nullptr) {
            qprintpreviewdialog_reject_callback();
        } else {
            QPrintPreviewDialog::reject();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void keyPressEvent(QKeyEvent* param1) override {
        if (qprintpreviewdialog_keypressevent_isbase) {
            qprintpreviewdialog_keypressevent_isbase = false;
            QPrintPreviewDialog::keyPressEvent(param1);
        } else if (qprintpreviewdialog_keypressevent_callback != nullptr) {
            QKeyEvent* cbval1 = param1;

            qprintpreviewdialog_keypressevent_callback(this, cbval1);
        } else {
            QPrintPreviewDialog::keyPressEvent(param1);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void closeEvent(QCloseEvent* param1) override {
        if (qprintpreviewdialog_closeevent_isbase) {
            qprintpreviewdialog_closeevent_isbase = false;
            QPrintPreviewDialog::closeEvent(param1);
        } else if (qprintpreviewdialog_closeevent_callback != nullptr) {
            QCloseEvent* cbval1 = param1;

            qprintpreviewdialog_closeevent_callback(this, cbval1);
        } else {
            QPrintPreviewDialog::closeEvent(param1);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void showEvent(QShowEvent* param1) override {
        if (qprintpreviewdialog_showevent_isbase) {
            qprintpreviewdialog_showevent_isbase = false;
            QPrintPreviewDialog::showEvent(param1);
        } else if (qprintpreviewdialog_showevent_callback != nullptr) {
            QShowEvent* cbval1 = param1;

            qprintpreviewdialog_showevent_callback(this, cbval1);
        } else {
            QPrintPreviewDialog::showEvent(param1);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void resizeEvent(QResizeEvent* param1) override {
        if (qprintpreviewdialog_resizeevent_isbase) {
            qprintpreviewdialog_resizeevent_isbase = false;
            QPrintPreviewDialog::resizeEvent(param1);
        } else if (qprintpreviewdialog_resizeevent_callback != nullptr) {
            QResizeEvent* cbval1 = param1;

            qprintpreviewdialog_resizeevent_callback(this, cbval1);
        } else {
            QPrintPreviewDialog::resizeEvent(param1);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void contextMenuEvent(QContextMenuEvent* param1) override {
        if (qprintpreviewdialog_contextmenuevent_isbase) {
            qprintpreviewdialog_contextmenuevent_isbase = false;
            QPrintPreviewDialog::contextMenuEvent(param1);
        } else if (qprintpreviewdialog_contextmenuevent_callback != nullptr) {
            QContextMenuEvent* cbval1 = param1;

            qprintpreviewdialog_contextmenuevent_callback(this, cbval1);
        } else {
            QPrintPreviewDialog::contextMenuEvent(param1);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* param1, QEvent* param2) override {
        if (qprintpreviewdialog_eventfilter_isbase) {
            qprintpreviewdialog_eventfilter_isbase = false;
            return QPrintPreviewDialog::eventFilter(param1, param2);
        } else if (qprintpreviewdialog_eventfilter_callback != nullptr) {
            QObject* cbval1 = param1;
            QEvent* cbval2 = param2;

            bool callback_ret = qprintpreviewdialog_eventfilter_callback(this, cbval1, cbval2);
            return callback_ret;
        } else {
            return QPrintPreviewDialog::eventFilter(param1, param2);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual int devType() const override {
        if (qprintpreviewdialog_devtype_isbase) {
            qprintpreviewdialog_devtype_isbase = false;
            return QPrintPreviewDialog::devType();
        } else if (qprintpreviewdialog_devtype_callback != nullptr) {
            int callback_ret = qprintpreviewdialog_devtype_callback();
            return static_cast<int>(callback_ret);
        } else {
            return QPrintPreviewDialog::devType();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual int heightForWidth(int param1) const override {
        if (qprintpreviewdialog_heightforwidth_isbase) {
            qprintpreviewdialog_heightforwidth_isbase = false;
            return QPrintPreviewDialog::heightForWidth(param1);
        } else if (qprintpreviewdialog_heightforwidth_callback != nullptr) {
            int cbval1 = param1;

            int callback_ret = qprintpreviewdialog_heightforwidth_callback(this, cbval1);
            return static_cast<int>(callback_ret);
        } else {
            return QPrintPreviewDialog::heightForWidth(param1);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool hasHeightForWidth() const override {
        if (qprintpreviewdialog_hasheightforwidth_isbase) {
            qprintpreviewdialog_hasheightforwidth_isbase = false;
            return QPrintPreviewDialog::hasHeightForWidth();
        } else if (qprintpreviewdialog_hasheightforwidth_callback != nullptr) {
            bool callback_ret = qprintpreviewdialog_hasheightforwidth_callback();
            return callback_ret;
        } else {
            return QPrintPreviewDialog::hasHeightForWidth();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QPaintEngine* paintEngine() const override {
        if (qprintpreviewdialog_paintengine_isbase) {
            qprintpreviewdialog_paintengine_isbase = false;
            return QPrintPreviewDialog::paintEngine();
        } else if (qprintpreviewdialog_paintengine_callback != nullptr) {
            QPaintEngine* callback_ret = qprintpreviewdialog_paintengine_callback();
            return callback_ret;
        } else {
            return QPrintPreviewDialog::paintEngine();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* event) override {
        if (qprintpreviewdialog_event_isbase) {
            qprintpreviewdialog_event_isbase = false;
            return QPrintPreviewDialog::event(event);
        } else if (qprintpreviewdialog_event_callback != nullptr) {
            QEvent* cbval1 = event;

            bool callback_ret = qprintpreviewdialog_event_callback(this, cbval1);
            return callback_ret;
        } else {
            return QPrintPreviewDialog::event(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void mousePressEvent(QMouseEvent* event) override {
        if (qprintpreviewdialog_mousepressevent_isbase) {
            qprintpreviewdialog_mousepressevent_isbase = false;
            QPrintPreviewDialog::mousePressEvent(event);
        } else if (qprintpreviewdialog_mousepressevent_callback != nullptr) {
            QMouseEvent* cbval1 = event;

            qprintpreviewdialog_mousepressevent_callback(this, cbval1);
        } else {
            QPrintPreviewDialog::mousePressEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseReleaseEvent(QMouseEvent* event) override {
        if (qprintpreviewdialog_mousereleaseevent_isbase) {
            qprintpreviewdialog_mousereleaseevent_isbase = false;
            QPrintPreviewDialog::mouseReleaseEvent(event);
        } else if (qprintpreviewdialog_mousereleaseevent_callback != nullptr) {
            QMouseEvent* cbval1 = event;

            qprintpreviewdialog_mousereleaseevent_callback(this, cbval1);
        } else {
            QPrintPreviewDialog::mouseReleaseEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseDoubleClickEvent(QMouseEvent* event) override {
        if (qprintpreviewdialog_mousedoubleclickevent_isbase) {
            qprintpreviewdialog_mousedoubleclickevent_isbase = false;
            QPrintPreviewDialog::mouseDoubleClickEvent(event);
        } else if (qprintpreviewdialog_mousedoubleclickevent_callback != nullptr) {
            QMouseEvent* cbval1 = event;

            qprintpreviewdialog_mousedoubleclickevent_callback(this, cbval1);
        } else {
            QPrintPreviewDialog::mouseDoubleClickEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseMoveEvent(QMouseEvent* event) override {
        if (qprintpreviewdialog_mousemoveevent_isbase) {
            qprintpreviewdialog_mousemoveevent_isbase = false;
            QPrintPreviewDialog::mouseMoveEvent(event);
        } else if (qprintpreviewdialog_mousemoveevent_callback != nullptr) {
            QMouseEvent* cbval1 = event;

            qprintpreviewdialog_mousemoveevent_callback(this, cbval1);
        } else {
            QPrintPreviewDialog::mouseMoveEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void wheelEvent(QWheelEvent* event) override {
        if (qprintpreviewdialog_wheelevent_isbase) {
            qprintpreviewdialog_wheelevent_isbase = false;
            QPrintPreviewDialog::wheelEvent(event);
        } else if (qprintpreviewdialog_wheelevent_callback != nullptr) {
            QWheelEvent* cbval1 = event;

            qprintpreviewdialog_wheelevent_callback(this, cbval1);
        } else {
            QPrintPreviewDialog::wheelEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void keyReleaseEvent(QKeyEvent* event) override {
        if (qprintpreviewdialog_keyreleaseevent_isbase) {
            qprintpreviewdialog_keyreleaseevent_isbase = false;
            QPrintPreviewDialog::keyReleaseEvent(event);
        } else if (qprintpreviewdialog_keyreleaseevent_callback != nullptr) {
            QKeyEvent* cbval1 = event;

            qprintpreviewdialog_keyreleaseevent_callback(this, cbval1);
        } else {
            QPrintPreviewDialog::keyReleaseEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void focusInEvent(QFocusEvent* event) override {
        if (qprintpreviewdialog_focusinevent_isbase) {
            qprintpreviewdialog_focusinevent_isbase = false;
            QPrintPreviewDialog::focusInEvent(event);
        } else if (qprintpreviewdialog_focusinevent_callback != nullptr) {
            QFocusEvent* cbval1 = event;

            qprintpreviewdialog_focusinevent_callback(this, cbval1);
        } else {
            QPrintPreviewDialog::focusInEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void focusOutEvent(QFocusEvent* event) override {
        if (qprintpreviewdialog_focusoutevent_isbase) {
            qprintpreviewdialog_focusoutevent_isbase = false;
            QPrintPreviewDialog::focusOutEvent(event);
        } else if (qprintpreviewdialog_focusoutevent_callback != nullptr) {
            QFocusEvent* cbval1 = event;

            qprintpreviewdialog_focusoutevent_callback(this, cbval1);
        } else {
            QPrintPreviewDialog::focusOutEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void enterEvent(QEnterEvent* event) override {
        if (qprintpreviewdialog_enterevent_isbase) {
            qprintpreviewdialog_enterevent_isbase = false;
            QPrintPreviewDialog::enterEvent(event);
        } else if (qprintpreviewdialog_enterevent_callback != nullptr) {
            QEnterEvent* cbval1 = event;

            qprintpreviewdialog_enterevent_callback(this, cbval1);
        } else {
            QPrintPreviewDialog::enterEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void leaveEvent(QEvent* event) override {
        if (qprintpreviewdialog_leaveevent_isbase) {
            qprintpreviewdialog_leaveevent_isbase = false;
            QPrintPreviewDialog::leaveEvent(event);
        } else if (qprintpreviewdialog_leaveevent_callback != nullptr) {
            QEvent* cbval1 = event;

            qprintpreviewdialog_leaveevent_callback(this, cbval1);
        } else {
            QPrintPreviewDialog::leaveEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void paintEvent(QPaintEvent* event) override {
        if (qprintpreviewdialog_paintevent_isbase) {
            qprintpreviewdialog_paintevent_isbase = false;
            QPrintPreviewDialog::paintEvent(event);
        } else if (qprintpreviewdialog_paintevent_callback != nullptr) {
            QPaintEvent* cbval1 = event;

            qprintpreviewdialog_paintevent_callback(this, cbval1);
        } else {
            QPrintPreviewDialog::paintEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void moveEvent(QMoveEvent* event) override {
        if (qprintpreviewdialog_moveevent_isbase) {
            qprintpreviewdialog_moveevent_isbase = false;
            QPrintPreviewDialog::moveEvent(event);
        } else if (qprintpreviewdialog_moveevent_callback != nullptr) {
            QMoveEvent* cbval1 = event;

            qprintpreviewdialog_moveevent_callback(this, cbval1);
        } else {
            QPrintPreviewDialog::moveEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void tabletEvent(QTabletEvent* event) override {
        if (qprintpreviewdialog_tabletevent_isbase) {
            qprintpreviewdialog_tabletevent_isbase = false;
            QPrintPreviewDialog::tabletEvent(event);
        } else if (qprintpreviewdialog_tabletevent_callback != nullptr) {
            QTabletEvent* cbval1 = event;

            qprintpreviewdialog_tabletevent_callback(this, cbval1);
        } else {
            QPrintPreviewDialog::tabletEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void actionEvent(QActionEvent* event) override {
        if (qprintpreviewdialog_actionevent_isbase) {
            qprintpreviewdialog_actionevent_isbase = false;
            QPrintPreviewDialog::actionEvent(event);
        } else if (qprintpreviewdialog_actionevent_callback != nullptr) {
            QActionEvent* cbval1 = event;

            qprintpreviewdialog_actionevent_callback(this, cbval1);
        } else {
            QPrintPreviewDialog::actionEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragEnterEvent(QDragEnterEvent* event) override {
        if (qprintpreviewdialog_dragenterevent_isbase) {
            qprintpreviewdialog_dragenterevent_isbase = false;
            QPrintPreviewDialog::dragEnterEvent(event);
        } else if (qprintpreviewdialog_dragenterevent_callback != nullptr) {
            QDragEnterEvent* cbval1 = event;

            qprintpreviewdialog_dragenterevent_callback(this, cbval1);
        } else {
            QPrintPreviewDialog::dragEnterEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragMoveEvent(QDragMoveEvent* event) override {
        if (qprintpreviewdialog_dragmoveevent_isbase) {
            qprintpreviewdialog_dragmoveevent_isbase = false;
            QPrintPreviewDialog::dragMoveEvent(event);
        } else if (qprintpreviewdialog_dragmoveevent_callback != nullptr) {
            QDragMoveEvent* cbval1 = event;

            qprintpreviewdialog_dragmoveevent_callback(this, cbval1);
        } else {
            QPrintPreviewDialog::dragMoveEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragLeaveEvent(QDragLeaveEvent* event) override {
        if (qprintpreviewdialog_dragleaveevent_isbase) {
            qprintpreviewdialog_dragleaveevent_isbase = false;
            QPrintPreviewDialog::dragLeaveEvent(event);
        } else if (qprintpreviewdialog_dragleaveevent_callback != nullptr) {
            QDragLeaveEvent* cbval1 = event;

            qprintpreviewdialog_dragleaveevent_callback(this, cbval1);
        } else {
            QPrintPreviewDialog::dragLeaveEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void dropEvent(QDropEvent* event) override {
        if (qprintpreviewdialog_dropevent_isbase) {
            qprintpreviewdialog_dropevent_isbase = false;
            QPrintPreviewDialog::dropEvent(event);
        } else if (qprintpreviewdialog_dropevent_callback != nullptr) {
            QDropEvent* cbval1 = event;

            qprintpreviewdialog_dropevent_callback(this, cbval1);
        } else {
            QPrintPreviewDialog::dropEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void hideEvent(QHideEvent* event) override {
        if (qprintpreviewdialog_hideevent_isbase) {
            qprintpreviewdialog_hideevent_isbase = false;
            QPrintPreviewDialog::hideEvent(event);
        } else if (qprintpreviewdialog_hideevent_callback != nullptr) {
            QHideEvent* cbval1 = event;

            qprintpreviewdialog_hideevent_callback(this, cbval1);
        } else {
            QPrintPreviewDialog::hideEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool nativeEvent(const QByteArray& eventType, void* message, qintptr* result) override {
        if (qprintpreviewdialog_nativeevent_isbase) {
            qprintpreviewdialog_nativeevent_isbase = false;
            return QPrintPreviewDialog::nativeEvent(eventType, message, result);
        } else if (qprintpreviewdialog_nativeevent_callback != nullptr) {
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

            bool callback_ret = qprintpreviewdialog_nativeevent_callback(this, cbval1, cbval2, cbval3);
            return callback_ret;
        } else {
            return QPrintPreviewDialog::nativeEvent(eventType, message, result);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void changeEvent(QEvent* param1) override {
        if (qprintpreviewdialog_changeevent_isbase) {
            qprintpreviewdialog_changeevent_isbase = false;
            QPrintPreviewDialog::changeEvent(param1);
        } else if (qprintpreviewdialog_changeevent_callback != nullptr) {
            QEvent* cbval1 = param1;

            qprintpreviewdialog_changeevent_callback(this, cbval1);
        } else {
            QPrintPreviewDialog::changeEvent(param1);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual int metric(QPaintDevice::PaintDeviceMetric param1) const override {
        if (qprintpreviewdialog_metric_isbase) {
            qprintpreviewdialog_metric_isbase = false;
            return QPrintPreviewDialog::metric(param1);
        } else if (qprintpreviewdialog_metric_callback != nullptr) {
            int cbval1 = static_cast<int>(param1);

            int callback_ret = qprintpreviewdialog_metric_callback(this, cbval1);
            return static_cast<int>(callback_ret);
        } else {
            return QPrintPreviewDialog::metric(param1);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void initPainter(QPainter* painter) const override {
        if (qprintpreviewdialog_initpainter_isbase) {
            qprintpreviewdialog_initpainter_isbase = false;
            QPrintPreviewDialog::initPainter(painter);
        } else if (qprintpreviewdialog_initpainter_callback != nullptr) {
            QPainter* cbval1 = painter;

            qprintpreviewdialog_initpainter_callback(this, cbval1);
        } else {
            QPrintPreviewDialog::initPainter(painter);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QPaintDevice* redirected(QPoint* offset) const override {
        if (qprintpreviewdialog_redirected_isbase) {
            qprintpreviewdialog_redirected_isbase = false;
            return QPrintPreviewDialog::redirected(offset);
        } else if (qprintpreviewdialog_redirected_callback != nullptr) {
            QPoint* cbval1 = offset;

            QPaintDevice* callback_ret = qprintpreviewdialog_redirected_callback(this, cbval1);
            return callback_ret;
        } else {
            return QPrintPreviewDialog::redirected(offset);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QPainter* sharedPainter() const override {
        if (qprintpreviewdialog_sharedpainter_isbase) {
            qprintpreviewdialog_sharedpainter_isbase = false;
            return QPrintPreviewDialog::sharedPainter();
        } else if (qprintpreviewdialog_sharedpainter_callback != nullptr) {
            QPainter* callback_ret = qprintpreviewdialog_sharedpainter_callback();
            return callback_ret;
        } else {
            return QPrintPreviewDialog::sharedPainter();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void inputMethodEvent(QInputMethodEvent* param1) override {
        if (qprintpreviewdialog_inputmethodevent_isbase) {
            qprintpreviewdialog_inputmethodevent_isbase = false;
            QPrintPreviewDialog::inputMethodEvent(param1);
        } else if (qprintpreviewdialog_inputmethodevent_callback != nullptr) {
            QInputMethodEvent* cbval1 = param1;

            qprintpreviewdialog_inputmethodevent_callback(this, cbval1);
        } else {
            QPrintPreviewDialog::inputMethodEvent(param1);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QVariant inputMethodQuery(Qt::InputMethodQuery param1) const override {
        if (qprintpreviewdialog_inputmethodquery_isbase) {
            qprintpreviewdialog_inputmethodquery_isbase = false;
            return QPrintPreviewDialog::inputMethodQuery(param1);
        } else if (qprintpreviewdialog_inputmethodquery_callback != nullptr) {
            int cbval1 = static_cast<int>(param1);

            QVariant* callback_ret = qprintpreviewdialog_inputmethodquery_callback(this, cbval1);
            return *callback_ret;
        } else {
            return QPrintPreviewDialog::inputMethodQuery(param1);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool focusNextPrevChild(bool next) override {
        if (qprintpreviewdialog_focusnextprevchild_isbase) {
            qprintpreviewdialog_focusnextprevchild_isbase = false;
            return QPrintPreviewDialog::focusNextPrevChild(next);
        } else if (qprintpreviewdialog_focusnextprevchild_callback != nullptr) {
            bool cbval1 = next;

            bool callback_ret = qprintpreviewdialog_focusnextprevchild_callback(this, cbval1);
            return callback_ret;
        } else {
            return QPrintPreviewDialog::focusNextPrevChild(next);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (qprintpreviewdialog_timerevent_isbase) {
            qprintpreviewdialog_timerevent_isbase = false;
            QPrintPreviewDialog::timerEvent(event);
        } else if (qprintpreviewdialog_timerevent_callback != nullptr) {
            QTimerEvent* cbval1 = event;

            qprintpreviewdialog_timerevent_callback(this, cbval1);
        } else {
            QPrintPreviewDialog::timerEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (qprintpreviewdialog_childevent_isbase) {
            qprintpreviewdialog_childevent_isbase = false;
            QPrintPreviewDialog::childEvent(event);
        } else if (qprintpreviewdialog_childevent_callback != nullptr) {
            QChildEvent* cbval1 = event;

            qprintpreviewdialog_childevent_callback(this, cbval1);
        } else {
            QPrintPreviewDialog::childEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (qprintpreviewdialog_customevent_isbase) {
            qprintpreviewdialog_customevent_isbase = false;
            QPrintPreviewDialog::customEvent(event);
        } else if (qprintpreviewdialog_customevent_callback != nullptr) {
            QEvent* cbval1 = event;

            qprintpreviewdialog_customevent_callback(this, cbval1);
        } else {
            QPrintPreviewDialog::customEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (qprintpreviewdialog_connectnotify_isbase) {
            qprintpreviewdialog_connectnotify_isbase = false;
            QPrintPreviewDialog::connectNotify(signal);
        } else if (qprintpreviewdialog_connectnotify_callback != nullptr) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            qprintpreviewdialog_connectnotify_callback(this, cbval1);
        } else {
            QPrintPreviewDialog::connectNotify(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (qprintpreviewdialog_disconnectnotify_isbase) {
            qprintpreviewdialog_disconnectnotify_isbase = false;
            QPrintPreviewDialog::disconnectNotify(signal);
        } else if (qprintpreviewdialog_disconnectnotify_callback != nullptr) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            qprintpreviewdialog_disconnectnotify_callback(this, cbval1);
        } else {
            QPrintPreviewDialog::disconnectNotify(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    void adjustPosition(QWidget* param1) {
        if (qprintpreviewdialog_adjustposition_isbase) {
            qprintpreviewdialog_adjustposition_isbase = false;
            QPrintPreviewDialog::adjustPosition(param1);
        } else if (qprintpreviewdialog_adjustposition_callback != nullptr) {
            QWidget* cbval1 = param1;

            qprintpreviewdialog_adjustposition_callback(this, cbval1);
        } else {
            QPrintPreviewDialog::adjustPosition(param1);
        }
    }

    // Virtual method for C ABI access and custom callback
    void updateMicroFocus() {
        if (qprintpreviewdialog_updatemicrofocus_isbase) {
            qprintpreviewdialog_updatemicrofocus_isbase = false;
            QPrintPreviewDialog::updateMicroFocus();
        } else if (qprintpreviewdialog_updatemicrofocus_callback != nullptr) {
            qprintpreviewdialog_updatemicrofocus_callback();
        } else {
            QPrintPreviewDialog::updateMicroFocus();
        }
    }

    // Virtual method for C ABI access and custom callback
    void create() {
        if (qprintpreviewdialog_create_isbase) {
            qprintpreviewdialog_create_isbase = false;
            QPrintPreviewDialog::create();
        } else if (qprintpreviewdialog_create_callback != nullptr) {
            qprintpreviewdialog_create_callback();
        } else {
            QPrintPreviewDialog::create();
        }
    }

    // Virtual method for C ABI access and custom callback
    void destroy() {
        if (qprintpreviewdialog_destroy_isbase) {
            qprintpreviewdialog_destroy_isbase = false;
            QPrintPreviewDialog::destroy();
        } else if (qprintpreviewdialog_destroy_callback != nullptr) {
            qprintpreviewdialog_destroy_callback();
        } else {
            QPrintPreviewDialog::destroy();
        }
    }

    // Virtual method for C ABI access and custom callback
    bool focusNextChild() {
        if (qprintpreviewdialog_focusnextchild_isbase) {
            qprintpreviewdialog_focusnextchild_isbase = false;
            return QPrintPreviewDialog::focusNextChild();
        } else if (qprintpreviewdialog_focusnextchild_callback != nullptr) {
            bool callback_ret = qprintpreviewdialog_focusnextchild_callback();
            return callback_ret;
        } else {
            return QPrintPreviewDialog::focusNextChild();
        }
    }

    // Virtual method for C ABI access and custom callback
    bool focusPreviousChild() {
        if (qprintpreviewdialog_focuspreviouschild_isbase) {
            qprintpreviewdialog_focuspreviouschild_isbase = false;
            return QPrintPreviewDialog::focusPreviousChild();
        } else if (qprintpreviewdialog_focuspreviouschild_callback != nullptr) {
            bool callback_ret = qprintpreviewdialog_focuspreviouschild_callback();
            return callback_ret;
        } else {
            return QPrintPreviewDialog::focusPreviousChild();
        }
    }

    // Virtual method for C ABI access and custom callback
    QObject* sender() const {
        if (qprintpreviewdialog_sender_isbase) {
            qprintpreviewdialog_sender_isbase = false;
            return QPrintPreviewDialog::sender();
        } else if (qprintpreviewdialog_sender_callback != nullptr) {
            QObject* callback_ret = qprintpreviewdialog_sender_callback();
            return callback_ret;
        } else {
            return QPrintPreviewDialog::sender();
        }
    }

    // Virtual method for C ABI access and custom callback
    int senderSignalIndex() const {
        if (qprintpreviewdialog_sendersignalindex_isbase) {
            qprintpreviewdialog_sendersignalindex_isbase = false;
            return QPrintPreviewDialog::senderSignalIndex();
        } else if (qprintpreviewdialog_sendersignalindex_callback != nullptr) {
            int callback_ret = qprintpreviewdialog_sendersignalindex_callback();
            return static_cast<int>(callback_ret);
        } else {
            return QPrintPreviewDialog::senderSignalIndex();
        }
    }

    // Virtual method for C ABI access and custom callback
    int receivers(const char* signal) const {
        if (qprintpreviewdialog_receivers_isbase) {
            qprintpreviewdialog_receivers_isbase = false;
            return QPrintPreviewDialog::receivers(signal);
        } else if (qprintpreviewdialog_receivers_callback != nullptr) {
            const char* cbval1 = (const char*)signal;

            int callback_ret = qprintpreviewdialog_receivers_callback(this, cbval1);
            return static_cast<int>(callback_ret);
        } else {
            return QPrintPreviewDialog::receivers(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    bool isSignalConnected(const QMetaMethod& signal) const {
        if (qprintpreviewdialog_issignalconnected_isbase) {
            qprintpreviewdialog_issignalconnected_isbase = false;
            return QPrintPreviewDialog::isSignalConnected(signal);
        } else if (qprintpreviewdialog_issignalconnected_callback != nullptr) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            bool callback_ret = qprintpreviewdialog_issignalconnected_callback(this, cbval1);
            return callback_ret;
        } else {
            return QPrintPreviewDialog::isSignalConnected(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    double getDecodedMetricF(QPaintDevice::PaintDeviceMetric metricA, QPaintDevice::PaintDeviceMetric metricB) const {
        if (qprintpreviewdialog_getdecodedmetricf_isbase) {
            qprintpreviewdialog_getdecodedmetricf_isbase = false;
            return QPrintPreviewDialog::getDecodedMetricF(metricA, metricB);
        } else if (qprintpreviewdialog_getdecodedmetricf_callback != nullptr) {
            int cbval1 = static_cast<int>(metricA);
            int cbval2 = static_cast<int>(metricB);

            double callback_ret = qprintpreviewdialog_getdecodedmetricf_callback(this, cbval1, cbval2);
            return static_cast<double>(callback_ret);
        } else {
            return QPrintPreviewDialog::getDecodedMetricF(metricA, metricB);
        }
    }

    // Friend functions
    friend void QPrintPreviewDialog_KeyPressEvent(QPrintPreviewDialog* self, QKeyEvent* param1);
    friend void QPrintPreviewDialog_QBaseKeyPressEvent(QPrintPreviewDialog* self, QKeyEvent* param1);
    friend void QPrintPreviewDialog_CloseEvent(QPrintPreviewDialog* self, QCloseEvent* param1);
    friend void QPrintPreviewDialog_QBaseCloseEvent(QPrintPreviewDialog* self, QCloseEvent* param1);
    friend void QPrintPreviewDialog_ShowEvent(QPrintPreviewDialog* self, QShowEvent* param1);
    friend void QPrintPreviewDialog_QBaseShowEvent(QPrintPreviewDialog* self, QShowEvent* param1);
    friend void QPrintPreviewDialog_ResizeEvent(QPrintPreviewDialog* self, QResizeEvent* param1);
    friend void QPrintPreviewDialog_QBaseResizeEvent(QPrintPreviewDialog* self, QResizeEvent* param1);
    friend void QPrintPreviewDialog_ContextMenuEvent(QPrintPreviewDialog* self, QContextMenuEvent* param1);
    friend void QPrintPreviewDialog_QBaseContextMenuEvent(QPrintPreviewDialog* self, QContextMenuEvent* param1);
    friend bool QPrintPreviewDialog_EventFilter(QPrintPreviewDialog* self, QObject* param1, QEvent* param2);
    friend bool QPrintPreviewDialog_QBaseEventFilter(QPrintPreviewDialog* self, QObject* param1, QEvent* param2);
    friend bool QPrintPreviewDialog_Event(QPrintPreviewDialog* self, QEvent* event);
    friend bool QPrintPreviewDialog_QBaseEvent(QPrintPreviewDialog* self, QEvent* event);
    friend void QPrintPreviewDialog_MousePressEvent(QPrintPreviewDialog* self, QMouseEvent* event);
    friend void QPrintPreviewDialog_QBaseMousePressEvent(QPrintPreviewDialog* self, QMouseEvent* event);
    friend void QPrintPreviewDialog_MouseReleaseEvent(QPrintPreviewDialog* self, QMouseEvent* event);
    friend void QPrintPreviewDialog_QBaseMouseReleaseEvent(QPrintPreviewDialog* self, QMouseEvent* event);
    friend void QPrintPreviewDialog_MouseDoubleClickEvent(QPrintPreviewDialog* self, QMouseEvent* event);
    friend void QPrintPreviewDialog_QBaseMouseDoubleClickEvent(QPrintPreviewDialog* self, QMouseEvent* event);
    friend void QPrintPreviewDialog_MouseMoveEvent(QPrintPreviewDialog* self, QMouseEvent* event);
    friend void QPrintPreviewDialog_QBaseMouseMoveEvent(QPrintPreviewDialog* self, QMouseEvent* event);
    friend void QPrintPreviewDialog_WheelEvent(QPrintPreviewDialog* self, QWheelEvent* event);
    friend void QPrintPreviewDialog_QBaseWheelEvent(QPrintPreviewDialog* self, QWheelEvent* event);
    friend void QPrintPreviewDialog_KeyReleaseEvent(QPrintPreviewDialog* self, QKeyEvent* event);
    friend void QPrintPreviewDialog_QBaseKeyReleaseEvent(QPrintPreviewDialog* self, QKeyEvent* event);
    friend void QPrintPreviewDialog_FocusInEvent(QPrintPreviewDialog* self, QFocusEvent* event);
    friend void QPrintPreviewDialog_QBaseFocusInEvent(QPrintPreviewDialog* self, QFocusEvent* event);
    friend void QPrintPreviewDialog_FocusOutEvent(QPrintPreviewDialog* self, QFocusEvent* event);
    friend void QPrintPreviewDialog_QBaseFocusOutEvent(QPrintPreviewDialog* self, QFocusEvent* event);
    friend void QPrintPreviewDialog_EnterEvent(QPrintPreviewDialog* self, QEnterEvent* event);
    friend void QPrintPreviewDialog_QBaseEnterEvent(QPrintPreviewDialog* self, QEnterEvent* event);
    friend void QPrintPreviewDialog_LeaveEvent(QPrintPreviewDialog* self, QEvent* event);
    friend void QPrintPreviewDialog_QBaseLeaveEvent(QPrintPreviewDialog* self, QEvent* event);
    friend void QPrintPreviewDialog_PaintEvent(QPrintPreviewDialog* self, QPaintEvent* event);
    friend void QPrintPreviewDialog_QBasePaintEvent(QPrintPreviewDialog* self, QPaintEvent* event);
    friend void QPrintPreviewDialog_MoveEvent(QPrintPreviewDialog* self, QMoveEvent* event);
    friend void QPrintPreviewDialog_QBaseMoveEvent(QPrintPreviewDialog* self, QMoveEvent* event);
    friend void QPrintPreviewDialog_TabletEvent(QPrintPreviewDialog* self, QTabletEvent* event);
    friend void QPrintPreviewDialog_QBaseTabletEvent(QPrintPreviewDialog* self, QTabletEvent* event);
    friend void QPrintPreviewDialog_ActionEvent(QPrintPreviewDialog* self, QActionEvent* event);
    friend void QPrintPreviewDialog_QBaseActionEvent(QPrintPreviewDialog* self, QActionEvent* event);
    friend void QPrintPreviewDialog_DragEnterEvent(QPrintPreviewDialog* self, QDragEnterEvent* event);
    friend void QPrintPreviewDialog_QBaseDragEnterEvent(QPrintPreviewDialog* self, QDragEnterEvent* event);
    friend void QPrintPreviewDialog_DragMoveEvent(QPrintPreviewDialog* self, QDragMoveEvent* event);
    friend void QPrintPreviewDialog_QBaseDragMoveEvent(QPrintPreviewDialog* self, QDragMoveEvent* event);
    friend void QPrintPreviewDialog_DragLeaveEvent(QPrintPreviewDialog* self, QDragLeaveEvent* event);
    friend void QPrintPreviewDialog_QBaseDragLeaveEvent(QPrintPreviewDialog* self, QDragLeaveEvent* event);
    friend void QPrintPreviewDialog_DropEvent(QPrintPreviewDialog* self, QDropEvent* event);
    friend void QPrintPreviewDialog_QBaseDropEvent(QPrintPreviewDialog* self, QDropEvent* event);
    friend void QPrintPreviewDialog_HideEvent(QPrintPreviewDialog* self, QHideEvent* event);
    friend void QPrintPreviewDialog_QBaseHideEvent(QPrintPreviewDialog* self, QHideEvent* event);
    friend bool QPrintPreviewDialog_NativeEvent(QPrintPreviewDialog* self, const libqt_string eventType, void* message, intptr_t* result);
    friend bool QPrintPreviewDialog_QBaseNativeEvent(QPrintPreviewDialog* self, const libqt_string eventType, void* message, intptr_t* result);
    friend void QPrintPreviewDialog_ChangeEvent(QPrintPreviewDialog* self, QEvent* param1);
    friend void QPrintPreviewDialog_QBaseChangeEvent(QPrintPreviewDialog* self, QEvent* param1);
    friend int QPrintPreviewDialog_Metric(const QPrintPreviewDialog* self, int param1);
    friend int QPrintPreviewDialog_QBaseMetric(const QPrintPreviewDialog* self, int param1);
    friend void QPrintPreviewDialog_InitPainter(const QPrintPreviewDialog* self, QPainter* painter);
    friend void QPrintPreviewDialog_QBaseInitPainter(const QPrintPreviewDialog* self, QPainter* painter);
    friend QPaintDevice* QPrintPreviewDialog_Redirected(const QPrintPreviewDialog* self, QPoint* offset);
    friend QPaintDevice* QPrintPreviewDialog_QBaseRedirected(const QPrintPreviewDialog* self, QPoint* offset);
    friend QPainter* QPrintPreviewDialog_SharedPainter(const QPrintPreviewDialog* self);
    friend QPainter* QPrintPreviewDialog_QBaseSharedPainter(const QPrintPreviewDialog* self);
    friend void QPrintPreviewDialog_InputMethodEvent(QPrintPreviewDialog* self, QInputMethodEvent* param1);
    friend void QPrintPreviewDialog_QBaseInputMethodEvent(QPrintPreviewDialog* self, QInputMethodEvent* param1);
    friend bool QPrintPreviewDialog_FocusNextPrevChild(QPrintPreviewDialog* self, bool next);
    friend bool QPrintPreviewDialog_QBaseFocusNextPrevChild(QPrintPreviewDialog* self, bool next);
    friend void QPrintPreviewDialog_TimerEvent(QPrintPreviewDialog* self, QTimerEvent* event);
    friend void QPrintPreviewDialog_QBaseTimerEvent(QPrintPreviewDialog* self, QTimerEvent* event);
    friend void QPrintPreviewDialog_ChildEvent(QPrintPreviewDialog* self, QChildEvent* event);
    friend void QPrintPreviewDialog_QBaseChildEvent(QPrintPreviewDialog* self, QChildEvent* event);
    friend void QPrintPreviewDialog_CustomEvent(QPrintPreviewDialog* self, QEvent* event);
    friend void QPrintPreviewDialog_QBaseCustomEvent(QPrintPreviewDialog* self, QEvent* event);
    friend void QPrintPreviewDialog_ConnectNotify(QPrintPreviewDialog* self, const QMetaMethod* signal);
    friend void QPrintPreviewDialog_QBaseConnectNotify(QPrintPreviewDialog* self, const QMetaMethod* signal);
    friend void QPrintPreviewDialog_DisconnectNotify(QPrintPreviewDialog* self, const QMetaMethod* signal);
    friend void QPrintPreviewDialog_QBaseDisconnectNotify(QPrintPreviewDialog* self, const QMetaMethod* signal);
    friend void QPrintPreviewDialog_AdjustPosition(QPrintPreviewDialog* self, QWidget* param1);
    friend void QPrintPreviewDialog_QBaseAdjustPosition(QPrintPreviewDialog* self, QWidget* param1);
    friend void QPrintPreviewDialog_UpdateMicroFocus(QPrintPreviewDialog* self);
    friend void QPrintPreviewDialog_QBaseUpdateMicroFocus(QPrintPreviewDialog* self);
    friend void QPrintPreviewDialog_Create(QPrintPreviewDialog* self);
    friend void QPrintPreviewDialog_QBaseCreate(QPrintPreviewDialog* self);
    friend void QPrintPreviewDialog_Destroy(QPrintPreviewDialog* self);
    friend void QPrintPreviewDialog_QBaseDestroy(QPrintPreviewDialog* self);
    friend bool QPrintPreviewDialog_FocusNextChild(QPrintPreviewDialog* self);
    friend bool QPrintPreviewDialog_QBaseFocusNextChild(QPrintPreviewDialog* self);
    friend bool QPrintPreviewDialog_FocusPreviousChild(QPrintPreviewDialog* self);
    friend bool QPrintPreviewDialog_QBaseFocusPreviousChild(QPrintPreviewDialog* self);
    friend QObject* QPrintPreviewDialog_Sender(const QPrintPreviewDialog* self);
    friend QObject* QPrintPreviewDialog_QBaseSender(const QPrintPreviewDialog* self);
    friend int QPrintPreviewDialog_SenderSignalIndex(const QPrintPreviewDialog* self);
    friend int QPrintPreviewDialog_QBaseSenderSignalIndex(const QPrintPreviewDialog* self);
    friend int QPrintPreviewDialog_Receivers(const QPrintPreviewDialog* self, const char* signal);
    friend int QPrintPreviewDialog_QBaseReceivers(const QPrintPreviewDialog* self, const char* signal);
    friend bool QPrintPreviewDialog_IsSignalConnected(const QPrintPreviewDialog* self, const QMetaMethod* signal);
    friend bool QPrintPreviewDialog_QBaseIsSignalConnected(const QPrintPreviewDialog* self, const QMetaMethod* signal);
    friend double QPrintPreviewDialog_GetDecodedMetricF(const QPrintPreviewDialog* self, int metricA, int metricB);
    friend double QPrintPreviewDialog_QBaseGetDecodedMetricF(const QPrintPreviewDialog* self, int metricA, int metricB);
};

#endif
