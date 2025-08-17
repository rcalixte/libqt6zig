#pragma once
#ifndef SRC_PRINTSUPPORTC_LIBVIRTUALQABSTRACTPRINTDIALOG_H
#define SRC_PRINTSUPPORTC_LIBVIRTUALQABSTRACTPRINTDIALOG_H

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

// This class is a subclass of QAbstractPrintDialog so that we can call protected methods
class VirtualQAbstractPrintDialog final : public QAbstractPrintDialog {

  public:
    // Virtual class boolean flag
    bool isVirtualQAbstractPrintDialog = true;

    // Virtual class public types (including callbacks)
    using QAbstractPrintDialog_Metacall_Callback = int (*)(QAbstractPrintDialog*, int, int, void**);
    using QAbstractPrintDialog_SetVisible_Callback = void (*)(QAbstractPrintDialog*, bool);
    using QAbstractPrintDialog_SizeHint_Callback = QSize* (*)();
    using QAbstractPrintDialog_MinimumSizeHint_Callback = QSize* (*)();
    using QAbstractPrintDialog_Open_Callback = void (*)();
    using QAbstractPrintDialog_Exec_Callback = int (*)();
    using QAbstractPrintDialog_Done_Callback = void (*)(QAbstractPrintDialog*, int);
    using QAbstractPrintDialog_Accept_Callback = void (*)();
    using QAbstractPrintDialog_Reject_Callback = void (*)();
    using QAbstractPrintDialog_KeyPressEvent_Callback = void (*)(QAbstractPrintDialog*, QKeyEvent*);
    using QAbstractPrintDialog_CloseEvent_Callback = void (*)(QAbstractPrintDialog*, QCloseEvent*);
    using QAbstractPrintDialog_ShowEvent_Callback = void (*)(QAbstractPrintDialog*, QShowEvent*);
    using QAbstractPrintDialog_ResizeEvent_Callback = void (*)(QAbstractPrintDialog*, QResizeEvent*);
    using QAbstractPrintDialog_ContextMenuEvent_Callback = void (*)(QAbstractPrintDialog*, QContextMenuEvent*);
    using QAbstractPrintDialog_EventFilter_Callback = bool (*)(QAbstractPrintDialog*, QObject*, QEvent*);
    using QAbstractPrintDialog_DevType_Callback = int (*)();
    using QAbstractPrintDialog_HeightForWidth_Callback = int (*)(const QAbstractPrintDialog*, int);
    using QAbstractPrintDialog_HasHeightForWidth_Callback = bool (*)();
    using QAbstractPrintDialog_PaintEngine_Callback = QPaintEngine* (*)();
    using QAbstractPrintDialog_Event_Callback = bool (*)(QAbstractPrintDialog*, QEvent*);
    using QAbstractPrintDialog_MousePressEvent_Callback = void (*)(QAbstractPrintDialog*, QMouseEvent*);
    using QAbstractPrintDialog_MouseReleaseEvent_Callback = void (*)(QAbstractPrintDialog*, QMouseEvent*);
    using QAbstractPrintDialog_MouseDoubleClickEvent_Callback = void (*)(QAbstractPrintDialog*, QMouseEvent*);
    using QAbstractPrintDialog_MouseMoveEvent_Callback = void (*)(QAbstractPrintDialog*, QMouseEvent*);
    using QAbstractPrintDialog_WheelEvent_Callback = void (*)(QAbstractPrintDialog*, QWheelEvent*);
    using QAbstractPrintDialog_KeyReleaseEvent_Callback = void (*)(QAbstractPrintDialog*, QKeyEvent*);
    using QAbstractPrintDialog_FocusInEvent_Callback = void (*)(QAbstractPrintDialog*, QFocusEvent*);
    using QAbstractPrintDialog_FocusOutEvent_Callback = void (*)(QAbstractPrintDialog*, QFocusEvent*);
    using QAbstractPrintDialog_EnterEvent_Callback = void (*)(QAbstractPrintDialog*, QEnterEvent*);
    using QAbstractPrintDialog_LeaveEvent_Callback = void (*)(QAbstractPrintDialog*, QEvent*);
    using QAbstractPrintDialog_PaintEvent_Callback = void (*)(QAbstractPrintDialog*, QPaintEvent*);
    using QAbstractPrintDialog_MoveEvent_Callback = void (*)(QAbstractPrintDialog*, QMoveEvent*);
    using QAbstractPrintDialog_TabletEvent_Callback = void (*)(QAbstractPrintDialog*, QTabletEvent*);
    using QAbstractPrintDialog_ActionEvent_Callback = void (*)(QAbstractPrintDialog*, QActionEvent*);
    using QAbstractPrintDialog_DragEnterEvent_Callback = void (*)(QAbstractPrintDialog*, QDragEnterEvent*);
    using QAbstractPrintDialog_DragMoveEvent_Callback = void (*)(QAbstractPrintDialog*, QDragMoveEvent*);
    using QAbstractPrintDialog_DragLeaveEvent_Callback = void (*)(QAbstractPrintDialog*, QDragLeaveEvent*);
    using QAbstractPrintDialog_DropEvent_Callback = void (*)(QAbstractPrintDialog*, QDropEvent*);
    using QAbstractPrintDialog_HideEvent_Callback = void (*)(QAbstractPrintDialog*, QHideEvent*);
    using QAbstractPrintDialog_NativeEvent_Callback = bool (*)(QAbstractPrintDialog*, libqt_string, void*, intptr_t*);
    using QAbstractPrintDialog_ChangeEvent_Callback = void (*)(QAbstractPrintDialog*, QEvent*);
    using QAbstractPrintDialog_Metric_Callback = int (*)(const QAbstractPrintDialog*, int);
    using QAbstractPrintDialog_InitPainter_Callback = void (*)(const QAbstractPrintDialog*, QPainter*);
    using QAbstractPrintDialog_Redirected_Callback = QPaintDevice* (*)(const QAbstractPrintDialog*, QPoint*);
    using QAbstractPrintDialog_SharedPainter_Callback = QPainter* (*)();
    using QAbstractPrintDialog_InputMethodEvent_Callback = void (*)(QAbstractPrintDialog*, QInputMethodEvent*);
    using QAbstractPrintDialog_InputMethodQuery_Callback = QVariant* (*)(const QAbstractPrintDialog*, int);
    using QAbstractPrintDialog_FocusNextPrevChild_Callback = bool (*)(QAbstractPrintDialog*, bool);
    using QAbstractPrintDialog_TimerEvent_Callback = void (*)(QAbstractPrintDialog*, QTimerEvent*);
    using QAbstractPrintDialog_ChildEvent_Callback = void (*)(QAbstractPrintDialog*, QChildEvent*);
    using QAbstractPrintDialog_CustomEvent_Callback = void (*)(QAbstractPrintDialog*, QEvent*);
    using QAbstractPrintDialog_ConnectNotify_Callback = void (*)(QAbstractPrintDialog*, QMetaMethod*);
    using QAbstractPrintDialog_DisconnectNotify_Callback = void (*)(QAbstractPrintDialog*, QMetaMethod*);
    using QAbstractPrintDialog_AdjustPosition_Callback = void (*)(QAbstractPrintDialog*, QWidget*);
    using QAbstractPrintDialog_UpdateMicroFocus_Callback = void (*)();
    using QAbstractPrintDialog_Create_Callback = void (*)();
    using QAbstractPrintDialog_Destroy_Callback = void (*)();
    using QAbstractPrintDialog_FocusNextChild_Callback = bool (*)();
    using QAbstractPrintDialog_FocusPreviousChild_Callback = bool (*)();
    using QAbstractPrintDialog_Sender_Callback = QObject* (*)();
    using QAbstractPrintDialog_SenderSignalIndex_Callback = int (*)();
    using QAbstractPrintDialog_Receivers_Callback = int (*)(const QAbstractPrintDialog*, const char*);
    using QAbstractPrintDialog_IsSignalConnected_Callback = bool (*)(const QAbstractPrintDialog*, QMetaMethod*);
    using QAbstractPrintDialog_GetDecodedMetricF_Callback = double (*)(const QAbstractPrintDialog*, int, int);

  protected:
    // Instance callback storage
    QAbstractPrintDialog_Metacall_Callback qabstractprintdialog_metacall_callback = nullptr;
    QAbstractPrintDialog_SetVisible_Callback qabstractprintdialog_setvisible_callback = nullptr;
    QAbstractPrintDialog_SizeHint_Callback qabstractprintdialog_sizehint_callback = nullptr;
    QAbstractPrintDialog_MinimumSizeHint_Callback qabstractprintdialog_minimumsizehint_callback = nullptr;
    QAbstractPrintDialog_Open_Callback qabstractprintdialog_open_callback = nullptr;
    QAbstractPrintDialog_Exec_Callback qabstractprintdialog_exec_callback = nullptr;
    QAbstractPrintDialog_Done_Callback qabstractprintdialog_done_callback = nullptr;
    QAbstractPrintDialog_Accept_Callback qabstractprintdialog_accept_callback = nullptr;
    QAbstractPrintDialog_Reject_Callback qabstractprintdialog_reject_callback = nullptr;
    QAbstractPrintDialog_KeyPressEvent_Callback qabstractprintdialog_keypressevent_callback = nullptr;
    QAbstractPrintDialog_CloseEvent_Callback qabstractprintdialog_closeevent_callback = nullptr;
    QAbstractPrintDialog_ShowEvent_Callback qabstractprintdialog_showevent_callback = nullptr;
    QAbstractPrintDialog_ResizeEvent_Callback qabstractprintdialog_resizeevent_callback = nullptr;
    QAbstractPrintDialog_ContextMenuEvent_Callback qabstractprintdialog_contextmenuevent_callback = nullptr;
    QAbstractPrintDialog_EventFilter_Callback qabstractprintdialog_eventfilter_callback = nullptr;
    QAbstractPrintDialog_DevType_Callback qabstractprintdialog_devtype_callback = nullptr;
    QAbstractPrintDialog_HeightForWidth_Callback qabstractprintdialog_heightforwidth_callback = nullptr;
    QAbstractPrintDialog_HasHeightForWidth_Callback qabstractprintdialog_hasheightforwidth_callback = nullptr;
    QAbstractPrintDialog_PaintEngine_Callback qabstractprintdialog_paintengine_callback = nullptr;
    QAbstractPrintDialog_Event_Callback qabstractprintdialog_event_callback = nullptr;
    QAbstractPrintDialog_MousePressEvent_Callback qabstractprintdialog_mousepressevent_callback = nullptr;
    QAbstractPrintDialog_MouseReleaseEvent_Callback qabstractprintdialog_mousereleaseevent_callback = nullptr;
    QAbstractPrintDialog_MouseDoubleClickEvent_Callback qabstractprintdialog_mousedoubleclickevent_callback = nullptr;
    QAbstractPrintDialog_MouseMoveEvent_Callback qabstractprintdialog_mousemoveevent_callback = nullptr;
    QAbstractPrintDialog_WheelEvent_Callback qabstractprintdialog_wheelevent_callback = nullptr;
    QAbstractPrintDialog_KeyReleaseEvent_Callback qabstractprintdialog_keyreleaseevent_callback = nullptr;
    QAbstractPrintDialog_FocusInEvent_Callback qabstractprintdialog_focusinevent_callback = nullptr;
    QAbstractPrintDialog_FocusOutEvent_Callback qabstractprintdialog_focusoutevent_callback = nullptr;
    QAbstractPrintDialog_EnterEvent_Callback qabstractprintdialog_enterevent_callback = nullptr;
    QAbstractPrintDialog_LeaveEvent_Callback qabstractprintdialog_leaveevent_callback = nullptr;
    QAbstractPrintDialog_PaintEvent_Callback qabstractprintdialog_paintevent_callback = nullptr;
    QAbstractPrintDialog_MoveEvent_Callback qabstractprintdialog_moveevent_callback = nullptr;
    QAbstractPrintDialog_TabletEvent_Callback qabstractprintdialog_tabletevent_callback = nullptr;
    QAbstractPrintDialog_ActionEvent_Callback qabstractprintdialog_actionevent_callback = nullptr;
    QAbstractPrintDialog_DragEnterEvent_Callback qabstractprintdialog_dragenterevent_callback = nullptr;
    QAbstractPrintDialog_DragMoveEvent_Callback qabstractprintdialog_dragmoveevent_callback = nullptr;
    QAbstractPrintDialog_DragLeaveEvent_Callback qabstractprintdialog_dragleaveevent_callback = nullptr;
    QAbstractPrintDialog_DropEvent_Callback qabstractprintdialog_dropevent_callback = nullptr;
    QAbstractPrintDialog_HideEvent_Callback qabstractprintdialog_hideevent_callback = nullptr;
    QAbstractPrintDialog_NativeEvent_Callback qabstractprintdialog_nativeevent_callback = nullptr;
    QAbstractPrintDialog_ChangeEvent_Callback qabstractprintdialog_changeevent_callback = nullptr;
    QAbstractPrintDialog_Metric_Callback qabstractprintdialog_metric_callback = nullptr;
    QAbstractPrintDialog_InitPainter_Callback qabstractprintdialog_initpainter_callback = nullptr;
    QAbstractPrintDialog_Redirected_Callback qabstractprintdialog_redirected_callback = nullptr;
    QAbstractPrintDialog_SharedPainter_Callback qabstractprintdialog_sharedpainter_callback = nullptr;
    QAbstractPrintDialog_InputMethodEvent_Callback qabstractprintdialog_inputmethodevent_callback = nullptr;
    QAbstractPrintDialog_InputMethodQuery_Callback qabstractprintdialog_inputmethodquery_callback = nullptr;
    QAbstractPrintDialog_FocusNextPrevChild_Callback qabstractprintdialog_focusnextprevchild_callback = nullptr;
    QAbstractPrintDialog_TimerEvent_Callback qabstractprintdialog_timerevent_callback = nullptr;
    QAbstractPrintDialog_ChildEvent_Callback qabstractprintdialog_childevent_callback = nullptr;
    QAbstractPrintDialog_CustomEvent_Callback qabstractprintdialog_customevent_callback = nullptr;
    QAbstractPrintDialog_ConnectNotify_Callback qabstractprintdialog_connectnotify_callback = nullptr;
    QAbstractPrintDialog_DisconnectNotify_Callback qabstractprintdialog_disconnectnotify_callback = nullptr;
    QAbstractPrintDialog_AdjustPosition_Callback qabstractprintdialog_adjustposition_callback = nullptr;
    QAbstractPrintDialog_UpdateMicroFocus_Callback qabstractprintdialog_updatemicrofocus_callback = nullptr;
    QAbstractPrintDialog_Create_Callback qabstractprintdialog_create_callback = nullptr;
    QAbstractPrintDialog_Destroy_Callback qabstractprintdialog_destroy_callback = nullptr;
    QAbstractPrintDialog_FocusNextChild_Callback qabstractprintdialog_focusnextchild_callback = nullptr;
    QAbstractPrintDialog_FocusPreviousChild_Callback qabstractprintdialog_focuspreviouschild_callback = nullptr;
    QAbstractPrintDialog_Sender_Callback qabstractprintdialog_sender_callback = nullptr;
    QAbstractPrintDialog_SenderSignalIndex_Callback qabstractprintdialog_sendersignalindex_callback = nullptr;
    QAbstractPrintDialog_Receivers_Callback qabstractprintdialog_receivers_callback = nullptr;
    QAbstractPrintDialog_IsSignalConnected_Callback qabstractprintdialog_issignalconnected_callback = nullptr;
    QAbstractPrintDialog_GetDecodedMetricF_Callback qabstractprintdialog_getdecodedmetricf_callback = nullptr;

    // Instance base flags
    mutable bool qabstractprintdialog_metacall_isbase = false;
    mutable bool qabstractprintdialog_setvisible_isbase = false;
    mutable bool qabstractprintdialog_sizehint_isbase = false;
    mutable bool qabstractprintdialog_minimumsizehint_isbase = false;
    mutable bool qabstractprintdialog_open_isbase = false;
    mutable bool qabstractprintdialog_exec_isbase = false;
    mutable bool qabstractprintdialog_done_isbase = false;
    mutable bool qabstractprintdialog_accept_isbase = false;
    mutable bool qabstractprintdialog_reject_isbase = false;
    mutable bool qabstractprintdialog_keypressevent_isbase = false;
    mutable bool qabstractprintdialog_closeevent_isbase = false;
    mutable bool qabstractprintdialog_showevent_isbase = false;
    mutable bool qabstractprintdialog_resizeevent_isbase = false;
    mutable bool qabstractprintdialog_contextmenuevent_isbase = false;
    mutable bool qabstractprintdialog_eventfilter_isbase = false;
    mutable bool qabstractprintdialog_devtype_isbase = false;
    mutable bool qabstractprintdialog_heightforwidth_isbase = false;
    mutable bool qabstractprintdialog_hasheightforwidth_isbase = false;
    mutable bool qabstractprintdialog_paintengine_isbase = false;
    mutable bool qabstractprintdialog_event_isbase = false;
    mutable bool qabstractprintdialog_mousepressevent_isbase = false;
    mutable bool qabstractprintdialog_mousereleaseevent_isbase = false;
    mutable bool qabstractprintdialog_mousedoubleclickevent_isbase = false;
    mutable bool qabstractprintdialog_mousemoveevent_isbase = false;
    mutable bool qabstractprintdialog_wheelevent_isbase = false;
    mutable bool qabstractprintdialog_keyreleaseevent_isbase = false;
    mutable bool qabstractprintdialog_focusinevent_isbase = false;
    mutable bool qabstractprintdialog_focusoutevent_isbase = false;
    mutable bool qabstractprintdialog_enterevent_isbase = false;
    mutable bool qabstractprintdialog_leaveevent_isbase = false;
    mutable bool qabstractprintdialog_paintevent_isbase = false;
    mutable bool qabstractprintdialog_moveevent_isbase = false;
    mutable bool qabstractprintdialog_tabletevent_isbase = false;
    mutable bool qabstractprintdialog_actionevent_isbase = false;
    mutable bool qabstractprintdialog_dragenterevent_isbase = false;
    mutable bool qabstractprintdialog_dragmoveevent_isbase = false;
    mutable bool qabstractprintdialog_dragleaveevent_isbase = false;
    mutable bool qabstractprintdialog_dropevent_isbase = false;
    mutable bool qabstractprintdialog_hideevent_isbase = false;
    mutable bool qabstractprintdialog_nativeevent_isbase = false;
    mutable bool qabstractprintdialog_changeevent_isbase = false;
    mutable bool qabstractprintdialog_metric_isbase = false;
    mutable bool qabstractprintdialog_initpainter_isbase = false;
    mutable bool qabstractprintdialog_redirected_isbase = false;
    mutable bool qabstractprintdialog_sharedpainter_isbase = false;
    mutable bool qabstractprintdialog_inputmethodevent_isbase = false;
    mutable bool qabstractprintdialog_inputmethodquery_isbase = false;
    mutable bool qabstractprintdialog_focusnextprevchild_isbase = false;
    mutable bool qabstractprintdialog_timerevent_isbase = false;
    mutable bool qabstractprintdialog_childevent_isbase = false;
    mutable bool qabstractprintdialog_customevent_isbase = false;
    mutable bool qabstractprintdialog_connectnotify_isbase = false;
    mutable bool qabstractprintdialog_disconnectnotify_isbase = false;
    mutable bool qabstractprintdialog_adjustposition_isbase = false;
    mutable bool qabstractprintdialog_updatemicrofocus_isbase = false;
    mutable bool qabstractprintdialog_create_isbase = false;
    mutable bool qabstractprintdialog_destroy_isbase = false;
    mutable bool qabstractprintdialog_focusnextchild_isbase = false;
    mutable bool qabstractprintdialog_focuspreviouschild_isbase = false;
    mutable bool qabstractprintdialog_sender_isbase = false;
    mutable bool qabstractprintdialog_sendersignalindex_isbase = false;
    mutable bool qabstractprintdialog_receivers_isbase = false;
    mutable bool qabstractprintdialog_issignalconnected_isbase = false;
    mutable bool qabstractprintdialog_getdecodedmetricf_isbase = false;

  public:
    VirtualQAbstractPrintDialog(QPrinter* printer) : QAbstractPrintDialog(printer) {};
    VirtualQAbstractPrintDialog(QPrinter* printer, QWidget* parent) : QAbstractPrintDialog(printer, parent) {};

    ~VirtualQAbstractPrintDialog() {
        qabstractprintdialog_metacall_callback = nullptr;
        qabstractprintdialog_setvisible_callback = nullptr;
        qabstractprintdialog_sizehint_callback = nullptr;
        qabstractprintdialog_minimumsizehint_callback = nullptr;
        qabstractprintdialog_open_callback = nullptr;
        qabstractprintdialog_exec_callback = nullptr;
        qabstractprintdialog_done_callback = nullptr;
        qabstractprintdialog_accept_callback = nullptr;
        qabstractprintdialog_reject_callback = nullptr;
        qabstractprintdialog_keypressevent_callback = nullptr;
        qabstractprintdialog_closeevent_callback = nullptr;
        qabstractprintdialog_showevent_callback = nullptr;
        qabstractprintdialog_resizeevent_callback = nullptr;
        qabstractprintdialog_contextmenuevent_callback = nullptr;
        qabstractprintdialog_eventfilter_callback = nullptr;
        qabstractprintdialog_devtype_callback = nullptr;
        qabstractprintdialog_heightforwidth_callback = nullptr;
        qabstractprintdialog_hasheightforwidth_callback = nullptr;
        qabstractprintdialog_paintengine_callback = nullptr;
        qabstractprintdialog_event_callback = nullptr;
        qabstractprintdialog_mousepressevent_callback = nullptr;
        qabstractprintdialog_mousereleaseevent_callback = nullptr;
        qabstractprintdialog_mousedoubleclickevent_callback = nullptr;
        qabstractprintdialog_mousemoveevent_callback = nullptr;
        qabstractprintdialog_wheelevent_callback = nullptr;
        qabstractprintdialog_keyreleaseevent_callback = nullptr;
        qabstractprintdialog_focusinevent_callback = nullptr;
        qabstractprintdialog_focusoutevent_callback = nullptr;
        qabstractprintdialog_enterevent_callback = nullptr;
        qabstractprintdialog_leaveevent_callback = nullptr;
        qabstractprintdialog_paintevent_callback = nullptr;
        qabstractprintdialog_moveevent_callback = nullptr;
        qabstractprintdialog_tabletevent_callback = nullptr;
        qabstractprintdialog_actionevent_callback = nullptr;
        qabstractprintdialog_dragenterevent_callback = nullptr;
        qabstractprintdialog_dragmoveevent_callback = nullptr;
        qabstractprintdialog_dragleaveevent_callback = nullptr;
        qabstractprintdialog_dropevent_callback = nullptr;
        qabstractprintdialog_hideevent_callback = nullptr;
        qabstractprintdialog_nativeevent_callback = nullptr;
        qabstractprintdialog_changeevent_callback = nullptr;
        qabstractprintdialog_metric_callback = nullptr;
        qabstractprintdialog_initpainter_callback = nullptr;
        qabstractprintdialog_redirected_callback = nullptr;
        qabstractprintdialog_sharedpainter_callback = nullptr;
        qabstractprintdialog_inputmethodevent_callback = nullptr;
        qabstractprintdialog_inputmethodquery_callback = nullptr;
        qabstractprintdialog_focusnextprevchild_callback = nullptr;
        qabstractprintdialog_timerevent_callback = nullptr;
        qabstractprintdialog_childevent_callback = nullptr;
        qabstractprintdialog_customevent_callback = nullptr;
        qabstractprintdialog_connectnotify_callback = nullptr;
        qabstractprintdialog_disconnectnotify_callback = nullptr;
        qabstractprintdialog_adjustposition_callback = nullptr;
        qabstractprintdialog_updatemicrofocus_callback = nullptr;
        qabstractprintdialog_create_callback = nullptr;
        qabstractprintdialog_destroy_callback = nullptr;
        qabstractprintdialog_focusnextchild_callback = nullptr;
        qabstractprintdialog_focuspreviouschild_callback = nullptr;
        qabstractprintdialog_sender_callback = nullptr;
        qabstractprintdialog_sendersignalindex_callback = nullptr;
        qabstractprintdialog_receivers_callback = nullptr;
        qabstractprintdialog_issignalconnected_callback = nullptr;
        qabstractprintdialog_getdecodedmetricf_callback = nullptr;
    }

    // Callback setters
    inline void setQAbstractPrintDialog_Metacall_Callback(QAbstractPrintDialog_Metacall_Callback cb) { qabstractprintdialog_metacall_callback = cb; }
    inline void setQAbstractPrintDialog_SetVisible_Callback(QAbstractPrintDialog_SetVisible_Callback cb) { qabstractprintdialog_setvisible_callback = cb; }
    inline void setQAbstractPrintDialog_SizeHint_Callback(QAbstractPrintDialog_SizeHint_Callback cb) { qabstractprintdialog_sizehint_callback = cb; }
    inline void setQAbstractPrintDialog_MinimumSizeHint_Callback(QAbstractPrintDialog_MinimumSizeHint_Callback cb) { qabstractprintdialog_minimumsizehint_callback = cb; }
    inline void setQAbstractPrintDialog_Open_Callback(QAbstractPrintDialog_Open_Callback cb) { qabstractprintdialog_open_callback = cb; }
    inline void setQAbstractPrintDialog_Exec_Callback(QAbstractPrintDialog_Exec_Callback cb) { qabstractprintdialog_exec_callback = cb; }
    inline void setQAbstractPrintDialog_Done_Callback(QAbstractPrintDialog_Done_Callback cb) { qabstractprintdialog_done_callback = cb; }
    inline void setQAbstractPrintDialog_Accept_Callback(QAbstractPrintDialog_Accept_Callback cb) { qabstractprintdialog_accept_callback = cb; }
    inline void setQAbstractPrintDialog_Reject_Callback(QAbstractPrintDialog_Reject_Callback cb) { qabstractprintdialog_reject_callback = cb; }
    inline void setQAbstractPrintDialog_KeyPressEvent_Callback(QAbstractPrintDialog_KeyPressEvent_Callback cb) { qabstractprintdialog_keypressevent_callback = cb; }
    inline void setQAbstractPrintDialog_CloseEvent_Callback(QAbstractPrintDialog_CloseEvent_Callback cb) { qabstractprintdialog_closeevent_callback = cb; }
    inline void setQAbstractPrintDialog_ShowEvent_Callback(QAbstractPrintDialog_ShowEvent_Callback cb) { qabstractprintdialog_showevent_callback = cb; }
    inline void setQAbstractPrintDialog_ResizeEvent_Callback(QAbstractPrintDialog_ResizeEvent_Callback cb) { qabstractprintdialog_resizeevent_callback = cb; }
    inline void setQAbstractPrintDialog_ContextMenuEvent_Callback(QAbstractPrintDialog_ContextMenuEvent_Callback cb) { qabstractprintdialog_contextmenuevent_callback = cb; }
    inline void setQAbstractPrintDialog_EventFilter_Callback(QAbstractPrintDialog_EventFilter_Callback cb) { qabstractprintdialog_eventfilter_callback = cb; }
    inline void setQAbstractPrintDialog_DevType_Callback(QAbstractPrintDialog_DevType_Callback cb) { qabstractprintdialog_devtype_callback = cb; }
    inline void setQAbstractPrintDialog_HeightForWidth_Callback(QAbstractPrintDialog_HeightForWidth_Callback cb) { qabstractprintdialog_heightforwidth_callback = cb; }
    inline void setQAbstractPrintDialog_HasHeightForWidth_Callback(QAbstractPrintDialog_HasHeightForWidth_Callback cb) { qabstractprintdialog_hasheightforwidth_callback = cb; }
    inline void setQAbstractPrintDialog_PaintEngine_Callback(QAbstractPrintDialog_PaintEngine_Callback cb) { qabstractprintdialog_paintengine_callback = cb; }
    inline void setQAbstractPrintDialog_Event_Callback(QAbstractPrintDialog_Event_Callback cb) { qabstractprintdialog_event_callback = cb; }
    inline void setQAbstractPrintDialog_MousePressEvent_Callback(QAbstractPrintDialog_MousePressEvent_Callback cb) { qabstractprintdialog_mousepressevent_callback = cb; }
    inline void setQAbstractPrintDialog_MouseReleaseEvent_Callback(QAbstractPrintDialog_MouseReleaseEvent_Callback cb) { qabstractprintdialog_mousereleaseevent_callback = cb; }
    inline void setQAbstractPrintDialog_MouseDoubleClickEvent_Callback(QAbstractPrintDialog_MouseDoubleClickEvent_Callback cb) { qabstractprintdialog_mousedoubleclickevent_callback = cb; }
    inline void setQAbstractPrintDialog_MouseMoveEvent_Callback(QAbstractPrintDialog_MouseMoveEvent_Callback cb) { qabstractprintdialog_mousemoveevent_callback = cb; }
    inline void setQAbstractPrintDialog_WheelEvent_Callback(QAbstractPrintDialog_WheelEvent_Callback cb) { qabstractprintdialog_wheelevent_callback = cb; }
    inline void setQAbstractPrintDialog_KeyReleaseEvent_Callback(QAbstractPrintDialog_KeyReleaseEvent_Callback cb) { qabstractprintdialog_keyreleaseevent_callback = cb; }
    inline void setQAbstractPrintDialog_FocusInEvent_Callback(QAbstractPrintDialog_FocusInEvent_Callback cb) { qabstractprintdialog_focusinevent_callback = cb; }
    inline void setQAbstractPrintDialog_FocusOutEvent_Callback(QAbstractPrintDialog_FocusOutEvent_Callback cb) { qabstractprintdialog_focusoutevent_callback = cb; }
    inline void setQAbstractPrintDialog_EnterEvent_Callback(QAbstractPrintDialog_EnterEvent_Callback cb) { qabstractprintdialog_enterevent_callback = cb; }
    inline void setQAbstractPrintDialog_LeaveEvent_Callback(QAbstractPrintDialog_LeaveEvent_Callback cb) { qabstractprintdialog_leaveevent_callback = cb; }
    inline void setQAbstractPrintDialog_PaintEvent_Callback(QAbstractPrintDialog_PaintEvent_Callback cb) { qabstractprintdialog_paintevent_callback = cb; }
    inline void setQAbstractPrintDialog_MoveEvent_Callback(QAbstractPrintDialog_MoveEvent_Callback cb) { qabstractprintdialog_moveevent_callback = cb; }
    inline void setQAbstractPrintDialog_TabletEvent_Callback(QAbstractPrintDialog_TabletEvent_Callback cb) { qabstractprintdialog_tabletevent_callback = cb; }
    inline void setQAbstractPrintDialog_ActionEvent_Callback(QAbstractPrintDialog_ActionEvent_Callback cb) { qabstractprintdialog_actionevent_callback = cb; }
    inline void setQAbstractPrintDialog_DragEnterEvent_Callback(QAbstractPrintDialog_DragEnterEvent_Callback cb) { qabstractprintdialog_dragenterevent_callback = cb; }
    inline void setQAbstractPrintDialog_DragMoveEvent_Callback(QAbstractPrintDialog_DragMoveEvent_Callback cb) { qabstractprintdialog_dragmoveevent_callback = cb; }
    inline void setQAbstractPrintDialog_DragLeaveEvent_Callback(QAbstractPrintDialog_DragLeaveEvent_Callback cb) { qabstractprintdialog_dragleaveevent_callback = cb; }
    inline void setQAbstractPrintDialog_DropEvent_Callback(QAbstractPrintDialog_DropEvent_Callback cb) { qabstractprintdialog_dropevent_callback = cb; }
    inline void setQAbstractPrintDialog_HideEvent_Callback(QAbstractPrintDialog_HideEvent_Callback cb) { qabstractprintdialog_hideevent_callback = cb; }
    inline void setQAbstractPrintDialog_NativeEvent_Callback(QAbstractPrintDialog_NativeEvent_Callback cb) { qabstractprintdialog_nativeevent_callback = cb; }
    inline void setQAbstractPrintDialog_ChangeEvent_Callback(QAbstractPrintDialog_ChangeEvent_Callback cb) { qabstractprintdialog_changeevent_callback = cb; }
    inline void setQAbstractPrintDialog_Metric_Callback(QAbstractPrintDialog_Metric_Callback cb) { qabstractprintdialog_metric_callback = cb; }
    inline void setQAbstractPrintDialog_InitPainter_Callback(QAbstractPrintDialog_InitPainter_Callback cb) { qabstractprintdialog_initpainter_callback = cb; }
    inline void setQAbstractPrintDialog_Redirected_Callback(QAbstractPrintDialog_Redirected_Callback cb) { qabstractprintdialog_redirected_callback = cb; }
    inline void setQAbstractPrintDialog_SharedPainter_Callback(QAbstractPrintDialog_SharedPainter_Callback cb) { qabstractprintdialog_sharedpainter_callback = cb; }
    inline void setQAbstractPrintDialog_InputMethodEvent_Callback(QAbstractPrintDialog_InputMethodEvent_Callback cb) { qabstractprintdialog_inputmethodevent_callback = cb; }
    inline void setQAbstractPrintDialog_InputMethodQuery_Callback(QAbstractPrintDialog_InputMethodQuery_Callback cb) { qabstractprintdialog_inputmethodquery_callback = cb; }
    inline void setQAbstractPrintDialog_FocusNextPrevChild_Callback(QAbstractPrintDialog_FocusNextPrevChild_Callback cb) { qabstractprintdialog_focusnextprevchild_callback = cb; }
    inline void setQAbstractPrintDialog_TimerEvent_Callback(QAbstractPrintDialog_TimerEvent_Callback cb) { qabstractprintdialog_timerevent_callback = cb; }
    inline void setQAbstractPrintDialog_ChildEvent_Callback(QAbstractPrintDialog_ChildEvent_Callback cb) { qabstractprintdialog_childevent_callback = cb; }
    inline void setQAbstractPrintDialog_CustomEvent_Callback(QAbstractPrintDialog_CustomEvent_Callback cb) { qabstractprintdialog_customevent_callback = cb; }
    inline void setQAbstractPrintDialog_ConnectNotify_Callback(QAbstractPrintDialog_ConnectNotify_Callback cb) { qabstractprintdialog_connectnotify_callback = cb; }
    inline void setQAbstractPrintDialog_DisconnectNotify_Callback(QAbstractPrintDialog_DisconnectNotify_Callback cb) { qabstractprintdialog_disconnectnotify_callback = cb; }
    inline void setQAbstractPrintDialog_AdjustPosition_Callback(QAbstractPrintDialog_AdjustPosition_Callback cb) { qabstractprintdialog_adjustposition_callback = cb; }
    inline void setQAbstractPrintDialog_UpdateMicroFocus_Callback(QAbstractPrintDialog_UpdateMicroFocus_Callback cb) { qabstractprintdialog_updatemicrofocus_callback = cb; }
    inline void setQAbstractPrintDialog_Create_Callback(QAbstractPrintDialog_Create_Callback cb) { qabstractprintdialog_create_callback = cb; }
    inline void setQAbstractPrintDialog_Destroy_Callback(QAbstractPrintDialog_Destroy_Callback cb) { qabstractprintdialog_destroy_callback = cb; }
    inline void setQAbstractPrintDialog_FocusNextChild_Callback(QAbstractPrintDialog_FocusNextChild_Callback cb) { qabstractprintdialog_focusnextchild_callback = cb; }
    inline void setQAbstractPrintDialog_FocusPreviousChild_Callback(QAbstractPrintDialog_FocusPreviousChild_Callback cb) { qabstractprintdialog_focuspreviouschild_callback = cb; }
    inline void setQAbstractPrintDialog_Sender_Callback(QAbstractPrintDialog_Sender_Callback cb) { qabstractprintdialog_sender_callback = cb; }
    inline void setQAbstractPrintDialog_SenderSignalIndex_Callback(QAbstractPrintDialog_SenderSignalIndex_Callback cb) { qabstractprintdialog_sendersignalindex_callback = cb; }
    inline void setQAbstractPrintDialog_Receivers_Callback(QAbstractPrintDialog_Receivers_Callback cb) { qabstractprintdialog_receivers_callback = cb; }
    inline void setQAbstractPrintDialog_IsSignalConnected_Callback(QAbstractPrintDialog_IsSignalConnected_Callback cb) { qabstractprintdialog_issignalconnected_callback = cb; }
    inline void setQAbstractPrintDialog_GetDecodedMetricF_Callback(QAbstractPrintDialog_GetDecodedMetricF_Callback cb) { qabstractprintdialog_getdecodedmetricf_callback = cb; }

    // Base flag setters
    inline void setQAbstractPrintDialog_Metacall_IsBase(bool value) const { qabstractprintdialog_metacall_isbase = value; }
    inline void setQAbstractPrintDialog_SetVisible_IsBase(bool value) const { qabstractprintdialog_setvisible_isbase = value; }
    inline void setQAbstractPrintDialog_SizeHint_IsBase(bool value) const { qabstractprintdialog_sizehint_isbase = value; }
    inline void setQAbstractPrintDialog_MinimumSizeHint_IsBase(bool value) const { qabstractprintdialog_minimumsizehint_isbase = value; }
    inline void setQAbstractPrintDialog_Open_IsBase(bool value) const { qabstractprintdialog_open_isbase = value; }
    inline void setQAbstractPrintDialog_Exec_IsBase(bool value) const { qabstractprintdialog_exec_isbase = value; }
    inline void setQAbstractPrintDialog_Done_IsBase(bool value) const { qabstractprintdialog_done_isbase = value; }
    inline void setQAbstractPrintDialog_Accept_IsBase(bool value) const { qabstractprintdialog_accept_isbase = value; }
    inline void setQAbstractPrintDialog_Reject_IsBase(bool value) const { qabstractprintdialog_reject_isbase = value; }
    inline void setQAbstractPrintDialog_KeyPressEvent_IsBase(bool value) const { qabstractprintdialog_keypressevent_isbase = value; }
    inline void setQAbstractPrintDialog_CloseEvent_IsBase(bool value) const { qabstractprintdialog_closeevent_isbase = value; }
    inline void setQAbstractPrintDialog_ShowEvent_IsBase(bool value) const { qabstractprintdialog_showevent_isbase = value; }
    inline void setQAbstractPrintDialog_ResizeEvent_IsBase(bool value) const { qabstractprintdialog_resizeevent_isbase = value; }
    inline void setQAbstractPrintDialog_ContextMenuEvent_IsBase(bool value) const { qabstractprintdialog_contextmenuevent_isbase = value; }
    inline void setQAbstractPrintDialog_EventFilter_IsBase(bool value) const { qabstractprintdialog_eventfilter_isbase = value; }
    inline void setQAbstractPrintDialog_DevType_IsBase(bool value) const { qabstractprintdialog_devtype_isbase = value; }
    inline void setQAbstractPrintDialog_HeightForWidth_IsBase(bool value) const { qabstractprintdialog_heightforwidth_isbase = value; }
    inline void setQAbstractPrintDialog_HasHeightForWidth_IsBase(bool value) const { qabstractprintdialog_hasheightforwidth_isbase = value; }
    inline void setQAbstractPrintDialog_PaintEngine_IsBase(bool value) const { qabstractprintdialog_paintengine_isbase = value; }
    inline void setQAbstractPrintDialog_Event_IsBase(bool value) const { qabstractprintdialog_event_isbase = value; }
    inline void setQAbstractPrintDialog_MousePressEvent_IsBase(bool value) const { qabstractprintdialog_mousepressevent_isbase = value; }
    inline void setQAbstractPrintDialog_MouseReleaseEvent_IsBase(bool value) const { qabstractprintdialog_mousereleaseevent_isbase = value; }
    inline void setQAbstractPrintDialog_MouseDoubleClickEvent_IsBase(bool value) const { qabstractprintdialog_mousedoubleclickevent_isbase = value; }
    inline void setQAbstractPrintDialog_MouseMoveEvent_IsBase(bool value) const { qabstractprintdialog_mousemoveevent_isbase = value; }
    inline void setQAbstractPrintDialog_WheelEvent_IsBase(bool value) const { qabstractprintdialog_wheelevent_isbase = value; }
    inline void setQAbstractPrintDialog_KeyReleaseEvent_IsBase(bool value) const { qabstractprintdialog_keyreleaseevent_isbase = value; }
    inline void setQAbstractPrintDialog_FocusInEvent_IsBase(bool value) const { qabstractprintdialog_focusinevent_isbase = value; }
    inline void setQAbstractPrintDialog_FocusOutEvent_IsBase(bool value) const { qabstractprintdialog_focusoutevent_isbase = value; }
    inline void setQAbstractPrintDialog_EnterEvent_IsBase(bool value) const { qabstractprintdialog_enterevent_isbase = value; }
    inline void setQAbstractPrintDialog_LeaveEvent_IsBase(bool value) const { qabstractprintdialog_leaveevent_isbase = value; }
    inline void setQAbstractPrintDialog_PaintEvent_IsBase(bool value) const { qabstractprintdialog_paintevent_isbase = value; }
    inline void setQAbstractPrintDialog_MoveEvent_IsBase(bool value) const { qabstractprintdialog_moveevent_isbase = value; }
    inline void setQAbstractPrintDialog_TabletEvent_IsBase(bool value) const { qabstractprintdialog_tabletevent_isbase = value; }
    inline void setQAbstractPrintDialog_ActionEvent_IsBase(bool value) const { qabstractprintdialog_actionevent_isbase = value; }
    inline void setQAbstractPrintDialog_DragEnterEvent_IsBase(bool value) const { qabstractprintdialog_dragenterevent_isbase = value; }
    inline void setQAbstractPrintDialog_DragMoveEvent_IsBase(bool value) const { qabstractprintdialog_dragmoveevent_isbase = value; }
    inline void setQAbstractPrintDialog_DragLeaveEvent_IsBase(bool value) const { qabstractprintdialog_dragleaveevent_isbase = value; }
    inline void setQAbstractPrintDialog_DropEvent_IsBase(bool value) const { qabstractprintdialog_dropevent_isbase = value; }
    inline void setQAbstractPrintDialog_HideEvent_IsBase(bool value) const { qabstractprintdialog_hideevent_isbase = value; }
    inline void setQAbstractPrintDialog_NativeEvent_IsBase(bool value) const { qabstractprintdialog_nativeevent_isbase = value; }
    inline void setQAbstractPrintDialog_ChangeEvent_IsBase(bool value) const { qabstractprintdialog_changeevent_isbase = value; }
    inline void setQAbstractPrintDialog_Metric_IsBase(bool value) const { qabstractprintdialog_metric_isbase = value; }
    inline void setQAbstractPrintDialog_InitPainter_IsBase(bool value) const { qabstractprintdialog_initpainter_isbase = value; }
    inline void setQAbstractPrintDialog_Redirected_IsBase(bool value) const { qabstractprintdialog_redirected_isbase = value; }
    inline void setQAbstractPrintDialog_SharedPainter_IsBase(bool value) const { qabstractprintdialog_sharedpainter_isbase = value; }
    inline void setQAbstractPrintDialog_InputMethodEvent_IsBase(bool value) const { qabstractprintdialog_inputmethodevent_isbase = value; }
    inline void setQAbstractPrintDialog_InputMethodQuery_IsBase(bool value) const { qabstractprintdialog_inputmethodquery_isbase = value; }
    inline void setQAbstractPrintDialog_FocusNextPrevChild_IsBase(bool value) const { qabstractprintdialog_focusnextprevchild_isbase = value; }
    inline void setQAbstractPrintDialog_TimerEvent_IsBase(bool value) const { qabstractprintdialog_timerevent_isbase = value; }
    inline void setQAbstractPrintDialog_ChildEvent_IsBase(bool value) const { qabstractprintdialog_childevent_isbase = value; }
    inline void setQAbstractPrintDialog_CustomEvent_IsBase(bool value) const { qabstractprintdialog_customevent_isbase = value; }
    inline void setQAbstractPrintDialog_ConnectNotify_IsBase(bool value) const { qabstractprintdialog_connectnotify_isbase = value; }
    inline void setQAbstractPrintDialog_DisconnectNotify_IsBase(bool value) const { qabstractprintdialog_disconnectnotify_isbase = value; }
    inline void setQAbstractPrintDialog_AdjustPosition_IsBase(bool value) const { qabstractprintdialog_adjustposition_isbase = value; }
    inline void setQAbstractPrintDialog_UpdateMicroFocus_IsBase(bool value) const { qabstractprintdialog_updatemicrofocus_isbase = value; }
    inline void setQAbstractPrintDialog_Create_IsBase(bool value) const { qabstractprintdialog_create_isbase = value; }
    inline void setQAbstractPrintDialog_Destroy_IsBase(bool value) const { qabstractprintdialog_destroy_isbase = value; }
    inline void setQAbstractPrintDialog_FocusNextChild_IsBase(bool value) const { qabstractprintdialog_focusnextchild_isbase = value; }
    inline void setQAbstractPrintDialog_FocusPreviousChild_IsBase(bool value) const { qabstractprintdialog_focuspreviouschild_isbase = value; }
    inline void setQAbstractPrintDialog_Sender_IsBase(bool value) const { qabstractprintdialog_sender_isbase = value; }
    inline void setQAbstractPrintDialog_SenderSignalIndex_IsBase(bool value) const { qabstractprintdialog_sendersignalindex_isbase = value; }
    inline void setQAbstractPrintDialog_Receivers_IsBase(bool value) const { qabstractprintdialog_receivers_isbase = value; }
    inline void setQAbstractPrintDialog_IsSignalConnected_IsBase(bool value) const { qabstractprintdialog_issignalconnected_isbase = value; }
    inline void setQAbstractPrintDialog_GetDecodedMetricF_IsBase(bool value) const { qabstractprintdialog_getdecodedmetricf_isbase = value; }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (qabstractprintdialog_metacall_isbase) {
            qabstractprintdialog_metacall_isbase = false;
            return QAbstractPrintDialog::qt_metacall(param1, param2, param3);
        } else if (qabstractprintdialog_metacall_callback != nullptr) {
            int cbval1 = static_cast<int>(param1);
            int cbval2 = param2;
            void** cbval3 = param3;

            int callback_ret = qabstractprintdialog_metacall_callback(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        } else {
            return QAbstractPrintDialog::qt_metacall(param1, param2, param3);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void setVisible(bool visible) override {
        if (qabstractprintdialog_setvisible_isbase) {
            qabstractprintdialog_setvisible_isbase = false;
            QAbstractPrintDialog::setVisible(visible);
        } else if (qabstractprintdialog_setvisible_callback != nullptr) {
            bool cbval1 = visible;

            qabstractprintdialog_setvisible_callback(this, cbval1);
        } else {
            QAbstractPrintDialog::setVisible(visible);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QSize sizeHint() const override {
        if (qabstractprintdialog_sizehint_isbase) {
            qabstractprintdialog_sizehint_isbase = false;
            return QAbstractPrintDialog::sizeHint();
        } else if (qabstractprintdialog_sizehint_callback != nullptr) {
            QSize* callback_ret = qabstractprintdialog_sizehint_callback();
            return *callback_ret;
        } else {
            return QAbstractPrintDialog::sizeHint();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QSize minimumSizeHint() const override {
        if (qabstractprintdialog_minimumsizehint_isbase) {
            qabstractprintdialog_minimumsizehint_isbase = false;
            return QAbstractPrintDialog::minimumSizeHint();
        } else if (qabstractprintdialog_minimumsizehint_callback != nullptr) {
            QSize* callback_ret = qabstractprintdialog_minimumsizehint_callback();
            return *callback_ret;
        } else {
            return QAbstractPrintDialog::minimumSizeHint();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void open() override {
        if (qabstractprintdialog_open_isbase) {
            qabstractprintdialog_open_isbase = false;
            QAbstractPrintDialog::open();
        } else if (qabstractprintdialog_open_callback != nullptr) {
            qabstractprintdialog_open_callback();
        } else {
            QAbstractPrintDialog::open();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual int exec() override {
        if (qabstractprintdialog_exec_isbase) {
            qabstractprintdialog_exec_isbase = false;
            return QAbstractPrintDialog::exec();
        } else if (qabstractprintdialog_exec_callback != nullptr) {
            int callback_ret = qabstractprintdialog_exec_callback();
            return static_cast<int>(callback_ret);
        } else {
            return QAbstractPrintDialog::exec();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void done(int param1) override {
        if (qabstractprintdialog_done_isbase) {
            qabstractprintdialog_done_isbase = false;
            QAbstractPrintDialog::done(param1);
        } else if (qabstractprintdialog_done_callback != nullptr) {
            int cbval1 = param1;

            qabstractprintdialog_done_callback(this, cbval1);
        } else {
            QAbstractPrintDialog::done(param1);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void accept() override {
        if (qabstractprintdialog_accept_isbase) {
            qabstractprintdialog_accept_isbase = false;
            QAbstractPrintDialog::accept();
        } else if (qabstractprintdialog_accept_callback != nullptr) {
            qabstractprintdialog_accept_callback();
        } else {
            QAbstractPrintDialog::accept();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void reject() override {
        if (qabstractprintdialog_reject_isbase) {
            qabstractprintdialog_reject_isbase = false;
            QAbstractPrintDialog::reject();
        } else if (qabstractprintdialog_reject_callback != nullptr) {
            qabstractprintdialog_reject_callback();
        } else {
            QAbstractPrintDialog::reject();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void keyPressEvent(QKeyEvent* param1) override {
        if (qabstractprintdialog_keypressevent_isbase) {
            qabstractprintdialog_keypressevent_isbase = false;
            QAbstractPrintDialog::keyPressEvent(param1);
        } else if (qabstractprintdialog_keypressevent_callback != nullptr) {
            QKeyEvent* cbval1 = param1;

            qabstractprintdialog_keypressevent_callback(this, cbval1);
        } else {
            QAbstractPrintDialog::keyPressEvent(param1);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void closeEvent(QCloseEvent* param1) override {
        if (qabstractprintdialog_closeevent_isbase) {
            qabstractprintdialog_closeevent_isbase = false;
            QAbstractPrintDialog::closeEvent(param1);
        } else if (qabstractprintdialog_closeevent_callback != nullptr) {
            QCloseEvent* cbval1 = param1;

            qabstractprintdialog_closeevent_callback(this, cbval1);
        } else {
            QAbstractPrintDialog::closeEvent(param1);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void showEvent(QShowEvent* param1) override {
        if (qabstractprintdialog_showevent_isbase) {
            qabstractprintdialog_showevent_isbase = false;
            QAbstractPrintDialog::showEvent(param1);
        } else if (qabstractprintdialog_showevent_callback != nullptr) {
            QShowEvent* cbval1 = param1;

            qabstractprintdialog_showevent_callback(this, cbval1);
        } else {
            QAbstractPrintDialog::showEvent(param1);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void resizeEvent(QResizeEvent* param1) override {
        if (qabstractprintdialog_resizeevent_isbase) {
            qabstractprintdialog_resizeevent_isbase = false;
            QAbstractPrintDialog::resizeEvent(param1);
        } else if (qabstractprintdialog_resizeevent_callback != nullptr) {
            QResizeEvent* cbval1 = param1;

            qabstractprintdialog_resizeevent_callback(this, cbval1);
        } else {
            QAbstractPrintDialog::resizeEvent(param1);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void contextMenuEvent(QContextMenuEvent* param1) override {
        if (qabstractprintdialog_contextmenuevent_isbase) {
            qabstractprintdialog_contextmenuevent_isbase = false;
            QAbstractPrintDialog::contextMenuEvent(param1);
        } else if (qabstractprintdialog_contextmenuevent_callback != nullptr) {
            QContextMenuEvent* cbval1 = param1;

            qabstractprintdialog_contextmenuevent_callback(this, cbval1);
        } else {
            QAbstractPrintDialog::contextMenuEvent(param1);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* param1, QEvent* param2) override {
        if (qabstractprintdialog_eventfilter_isbase) {
            qabstractprintdialog_eventfilter_isbase = false;
            return QAbstractPrintDialog::eventFilter(param1, param2);
        } else if (qabstractprintdialog_eventfilter_callback != nullptr) {
            QObject* cbval1 = param1;
            QEvent* cbval2 = param2;

            bool callback_ret = qabstractprintdialog_eventfilter_callback(this, cbval1, cbval2);
            return callback_ret;
        } else {
            return QAbstractPrintDialog::eventFilter(param1, param2);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual int devType() const override {
        if (qabstractprintdialog_devtype_isbase) {
            qabstractprintdialog_devtype_isbase = false;
            return QAbstractPrintDialog::devType();
        } else if (qabstractprintdialog_devtype_callback != nullptr) {
            int callback_ret = qabstractprintdialog_devtype_callback();
            return static_cast<int>(callback_ret);
        } else {
            return QAbstractPrintDialog::devType();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual int heightForWidth(int param1) const override {
        if (qabstractprintdialog_heightforwidth_isbase) {
            qabstractprintdialog_heightforwidth_isbase = false;
            return QAbstractPrintDialog::heightForWidth(param1);
        } else if (qabstractprintdialog_heightforwidth_callback != nullptr) {
            int cbval1 = param1;

            int callback_ret = qabstractprintdialog_heightforwidth_callback(this, cbval1);
            return static_cast<int>(callback_ret);
        } else {
            return QAbstractPrintDialog::heightForWidth(param1);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool hasHeightForWidth() const override {
        if (qabstractprintdialog_hasheightforwidth_isbase) {
            qabstractprintdialog_hasheightforwidth_isbase = false;
            return QAbstractPrintDialog::hasHeightForWidth();
        } else if (qabstractprintdialog_hasheightforwidth_callback != nullptr) {
            bool callback_ret = qabstractprintdialog_hasheightforwidth_callback();
            return callback_ret;
        } else {
            return QAbstractPrintDialog::hasHeightForWidth();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QPaintEngine* paintEngine() const override {
        if (qabstractprintdialog_paintengine_isbase) {
            qabstractprintdialog_paintengine_isbase = false;
            return QAbstractPrintDialog::paintEngine();
        } else if (qabstractprintdialog_paintengine_callback != nullptr) {
            QPaintEngine* callback_ret = qabstractprintdialog_paintengine_callback();
            return callback_ret;
        } else {
            return QAbstractPrintDialog::paintEngine();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* event) override {
        if (qabstractprintdialog_event_isbase) {
            qabstractprintdialog_event_isbase = false;
            return QAbstractPrintDialog::event(event);
        } else if (qabstractprintdialog_event_callback != nullptr) {
            QEvent* cbval1 = event;

            bool callback_ret = qabstractprintdialog_event_callback(this, cbval1);
            return callback_ret;
        } else {
            return QAbstractPrintDialog::event(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void mousePressEvent(QMouseEvent* event) override {
        if (qabstractprintdialog_mousepressevent_isbase) {
            qabstractprintdialog_mousepressevent_isbase = false;
            QAbstractPrintDialog::mousePressEvent(event);
        } else if (qabstractprintdialog_mousepressevent_callback != nullptr) {
            QMouseEvent* cbval1 = event;

            qabstractprintdialog_mousepressevent_callback(this, cbval1);
        } else {
            QAbstractPrintDialog::mousePressEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseReleaseEvent(QMouseEvent* event) override {
        if (qabstractprintdialog_mousereleaseevent_isbase) {
            qabstractprintdialog_mousereleaseevent_isbase = false;
            QAbstractPrintDialog::mouseReleaseEvent(event);
        } else if (qabstractprintdialog_mousereleaseevent_callback != nullptr) {
            QMouseEvent* cbval1 = event;

            qabstractprintdialog_mousereleaseevent_callback(this, cbval1);
        } else {
            QAbstractPrintDialog::mouseReleaseEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseDoubleClickEvent(QMouseEvent* event) override {
        if (qabstractprintdialog_mousedoubleclickevent_isbase) {
            qabstractprintdialog_mousedoubleclickevent_isbase = false;
            QAbstractPrintDialog::mouseDoubleClickEvent(event);
        } else if (qabstractprintdialog_mousedoubleclickevent_callback != nullptr) {
            QMouseEvent* cbval1 = event;

            qabstractprintdialog_mousedoubleclickevent_callback(this, cbval1);
        } else {
            QAbstractPrintDialog::mouseDoubleClickEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseMoveEvent(QMouseEvent* event) override {
        if (qabstractprintdialog_mousemoveevent_isbase) {
            qabstractprintdialog_mousemoveevent_isbase = false;
            QAbstractPrintDialog::mouseMoveEvent(event);
        } else if (qabstractprintdialog_mousemoveevent_callback != nullptr) {
            QMouseEvent* cbval1 = event;

            qabstractprintdialog_mousemoveevent_callback(this, cbval1);
        } else {
            QAbstractPrintDialog::mouseMoveEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void wheelEvent(QWheelEvent* event) override {
        if (qabstractprintdialog_wheelevent_isbase) {
            qabstractprintdialog_wheelevent_isbase = false;
            QAbstractPrintDialog::wheelEvent(event);
        } else if (qabstractprintdialog_wheelevent_callback != nullptr) {
            QWheelEvent* cbval1 = event;

            qabstractprintdialog_wheelevent_callback(this, cbval1);
        } else {
            QAbstractPrintDialog::wheelEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void keyReleaseEvent(QKeyEvent* event) override {
        if (qabstractprintdialog_keyreleaseevent_isbase) {
            qabstractprintdialog_keyreleaseevent_isbase = false;
            QAbstractPrintDialog::keyReleaseEvent(event);
        } else if (qabstractprintdialog_keyreleaseevent_callback != nullptr) {
            QKeyEvent* cbval1 = event;

            qabstractprintdialog_keyreleaseevent_callback(this, cbval1);
        } else {
            QAbstractPrintDialog::keyReleaseEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void focusInEvent(QFocusEvent* event) override {
        if (qabstractprintdialog_focusinevent_isbase) {
            qabstractprintdialog_focusinevent_isbase = false;
            QAbstractPrintDialog::focusInEvent(event);
        } else if (qabstractprintdialog_focusinevent_callback != nullptr) {
            QFocusEvent* cbval1 = event;

            qabstractprintdialog_focusinevent_callback(this, cbval1);
        } else {
            QAbstractPrintDialog::focusInEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void focusOutEvent(QFocusEvent* event) override {
        if (qabstractprintdialog_focusoutevent_isbase) {
            qabstractprintdialog_focusoutevent_isbase = false;
            QAbstractPrintDialog::focusOutEvent(event);
        } else if (qabstractprintdialog_focusoutevent_callback != nullptr) {
            QFocusEvent* cbval1 = event;

            qabstractprintdialog_focusoutevent_callback(this, cbval1);
        } else {
            QAbstractPrintDialog::focusOutEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void enterEvent(QEnterEvent* event) override {
        if (qabstractprintdialog_enterevent_isbase) {
            qabstractprintdialog_enterevent_isbase = false;
            QAbstractPrintDialog::enterEvent(event);
        } else if (qabstractprintdialog_enterevent_callback != nullptr) {
            QEnterEvent* cbval1 = event;

            qabstractprintdialog_enterevent_callback(this, cbval1);
        } else {
            QAbstractPrintDialog::enterEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void leaveEvent(QEvent* event) override {
        if (qabstractprintdialog_leaveevent_isbase) {
            qabstractprintdialog_leaveevent_isbase = false;
            QAbstractPrintDialog::leaveEvent(event);
        } else if (qabstractprintdialog_leaveevent_callback != nullptr) {
            QEvent* cbval1 = event;

            qabstractprintdialog_leaveevent_callback(this, cbval1);
        } else {
            QAbstractPrintDialog::leaveEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void paintEvent(QPaintEvent* event) override {
        if (qabstractprintdialog_paintevent_isbase) {
            qabstractprintdialog_paintevent_isbase = false;
            QAbstractPrintDialog::paintEvent(event);
        } else if (qabstractprintdialog_paintevent_callback != nullptr) {
            QPaintEvent* cbval1 = event;

            qabstractprintdialog_paintevent_callback(this, cbval1);
        } else {
            QAbstractPrintDialog::paintEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void moveEvent(QMoveEvent* event) override {
        if (qabstractprintdialog_moveevent_isbase) {
            qabstractprintdialog_moveevent_isbase = false;
            QAbstractPrintDialog::moveEvent(event);
        } else if (qabstractprintdialog_moveevent_callback != nullptr) {
            QMoveEvent* cbval1 = event;

            qabstractprintdialog_moveevent_callback(this, cbval1);
        } else {
            QAbstractPrintDialog::moveEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void tabletEvent(QTabletEvent* event) override {
        if (qabstractprintdialog_tabletevent_isbase) {
            qabstractprintdialog_tabletevent_isbase = false;
            QAbstractPrintDialog::tabletEvent(event);
        } else if (qabstractprintdialog_tabletevent_callback != nullptr) {
            QTabletEvent* cbval1 = event;

            qabstractprintdialog_tabletevent_callback(this, cbval1);
        } else {
            QAbstractPrintDialog::tabletEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void actionEvent(QActionEvent* event) override {
        if (qabstractprintdialog_actionevent_isbase) {
            qabstractprintdialog_actionevent_isbase = false;
            QAbstractPrintDialog::actionEvent(event);
        } else if (qabstractprintdialog_actionevent_callback != nullptr) {
            QActionEvent* cbval1 = event;

            qabstractprintdialog_actionevent_callback(this, cbval1);
        } else {
            QAbstractPrintDialog::actionEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragEnterEvent(QDragEnterEvent* event) override {
        if (qabstractprintdialog_dragenterevent_isbase) {
            qabstractprintdialog_dragenterevent_isbase = false;
            QAbstractPrintDialog::dragEnterEvent(event);
        } else if (qabstractprintdialog_dragenterevent_callback != nullptr) {
            QDragEnterEvent* cbval1 = event;

            qabstractprintdialog_dragenterevent_callback(this, cbval1);
        } else {
            QAbstractPrintDialog::dragEnterEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragMoveEvent(QDragMoveEvent* event) override {
        if (qabstractprintdialog_dragmoveevent_isbase) {
            qabstractprintdialog_dragmoveevent_isbase = false;
            QAbstractPrintDialog::dragMoveEvent(event);
        } else if (qabstractprintdialog_dragmoveevent_callback != nullptr) {
            QDragMoveEvent* cbval1 = event;

            qabstractprintdialog_dragmoveevent_callback(this, cbval1);
        } else {
            QAbstractPrintDialog::dragMoveEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragLeaveEvent(QDragLeaveEvent* event) override {
        if (qabstractprintdialog_dragleaveevent_isbase) {
            qabstractprintdialog_dragleaveevent_isbase = false;
            QAbstractPrintDialog::dragLeaveEvent(event);
        } else if (qabstractprintdialog_dragleaveevent_callback != nullptr) {
            QDragLeaveEvent* cbval1 = event;

            qabstractprintdialog_dragleaveevent_callback(this, cbval1);
        } else {
            QAbstractPrintDialog::dragLeaveEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void dropEvent(QDropEvent* event) override {
        if (qabstractprintdialog_dropevent_isbase) {
            qabstractprintdialog_dropevent_isbase = false;
            QAbstractPrintDialog::dropEvent(event);
        } else if (qabstractprintdialog_dropevent_callback != nullptr) {
            QDropEvent* cbval1 = event;

            qabstractprintdialog_dropevent_callback(this, cbval1);
        } else {
            QAbstractPrintDialog::dropEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void hideEvent(QHideEvent* event) override {
        if (qabstractprintdialog_hideevent_isbase) {
            qabstractprintdialog_hideevent_isbase = false;
            QAbstractPrintDialog::hideEvent(event);
        } else if (qabstractprintdialog_hideevent_callback != nullptr) {
            QHideEvent* cbval1 = event;

            qabstractprintdialog_hideevent_callback(this, cbval1);
        } else {
            QAbstractPrintDialog::hideEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool nativeEvent(const QByteArray& eventType, void* message, qintptr* result) override {
        if (qabstractprintdialog_nativeevent_isbase) {
            qabstractprintdialog_nativeevent_isbase = false;
            return QAbstractPrintDialog::nativeEvent(eventType, message, result);
        } else if (qabstractprintdialog_nativeevent_callback != nullptr) {
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

            bool callback_ret = qabstractprintdialog_nativeevent_callback(this, cbval1, cbval2, cbval3);
            return callback_ret;
        } else {
            return QAbstractPrintDialog::nativeEvent(eventType, message, result);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void changeEvent(QEvent* param1) override {
        if (qabstractprintdialog_changeevent_isbase) {
            qabstractprintdialog_changeevent_isbase = false;
            QAbstractPrintDialog::changeEvent(param1);
        } else if (qabstractprintdialog_changeevent_callback != nullptr) {
            QEvent* cbval1 = param1;

            qabstractprintdialog_changeevent_callback(this, cbval1);
        } else {
            QAbstractPrintDialog::changeEvent(param1);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual int metric(QPaintDevice::PaintDeviceMetric param1) const override {
        if (qabstractprintdialog_metric_isbase) {
            qabstractprintdialog_metric_isbase = false;
            return QAbstractPrintDialog::metric(param1);
        } else if (qabstractprintdialog_metric_callback != nullptr) {
            int cbval1 = static_cast<int>(param1);

            int callback_ret = qabstractprintdialog_metric_callback(this, cbval1);
            return static_cast<int>(callback_ret);
        } else {
            return QAbstractPrintDialog::metric(param1);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void initPainter(QPainter* painter) const override {
        if (qabstractprintdialog_initpainter_isbase) {
            qabstractprintdialog_initpainter_isbase = false;
            QAbstractPrintDialog::initPainter(painter);
        } else if (qabstractprintdialog_initpainter_callback != nullptr) {
            QPainter* cbval1 = painter;

            qabstractprintdialog_initpainter_callback(this, cbval1);
        } else {
            QAbstractPrintDialog::initPainter(painter);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QPaintDevice* redirected(QPoint* offset) const override {
        if (qabstractprintdialog_redirected_isbase) {
            qabstractprintdialog_redirected_isbase = false;
            return QAbstractPrintDialog::redirected(offset);
        } else if (qabstractprintdialog_redirected_callback != nullptr) {
            QPoint* cbval1 = offset;

            QPaintDevice* callback_ret = qabstractprintdialog_redirected_callback(this, cbval1);
            return callback_ret;
        } else {
            return QAbstractPrintDialog::redirected(offset);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QPainter* sharedPainter() const override {
        if (qabstractprintdialog_sharedpainter_isbase) {
            qabstractprintdialog_sharedpainter_isbase = false;
            return QAbstractPrintDialog::sharedPainter();
        } else if (qabstractprintdialog_sharedpainter_callback != nullptr) {
            QPainter* callback_ret = qabstractprintdialog_sharedpainter_callback();
            return callback_ret;
        } else {
            return QAbstractPrintDialog::sharedPainter();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void inputMethodEvent(QInputMethodEvent* param1) override {
        if (qabstractprintdialog_inputmethodevent_isbase) {
            qabstractprintdialog_inputmethodevent_isbase = false;
            QAbstractPrintDialog::inputMethodEvent(param1);
        } else if (qabstractprintdialog_inputmethodevent_callback != nullptr) {
            QInputMethodEvent* cbval1 = param1;

            qabstractprintdialog_inputmethodevent_callback(this, cbval1);
        } else {
            QAbstractPrintDialog::inputMethodEvent(param1);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QVariant inputMethodQuery(Qt::InputMethodQuery param1) const override {
        if (qabstractprintdialog_inputmethodquery_isbase) {
            qabstractprintdialog_inputmethodquery_isbase = false;
            return QAbstractPrintDialog::inputMethodQuery(param1);
        } else if (qabstractprintdialog_inputmethodquery_callback != nullptr) {
            int cbval1 = static_cast<int>(param1);

            QVariant* callback_ret = qabstractprintdialog_inputmethodquery_callback(this, cbval1);
            return *callback_ret;
        } else {
            return QAbstractPrintDialog::inputMethodQuery(param1);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool focusNextPrevChild(bool next) override {
        if (qabstractprintdialog_focusnextprevchild_isbase) {
            qabstractprintdialog_focusnextprevchild_isbase = false;
            return QAbstractPrintDialog::focusNextPrevChild(next);
        } else if (qabstractprintdialog_focusnextprevchild_callback != nullptr) {
            bool cbval1 = next;

            bool callback_ret = qabstractprintdialog_focusnextprevchild_callback(this, cbval1);
            return callback_ret;
        } else {
            return QAbstractPrintDialog::focusNextPrevChild(next);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (qabstractprintdialog_timerevent_isbase) {
            qabstractprintdialog_timerevent_isbase = false;
            QAbstractPrintDialog::timerEvent(event);
        } else if (qabstractprintdialog_timerevent_callback != nullptr) {
            QTimerEvent* cbval1 = event;

            qabstractprintdialog_timerevent_callback(this, cbval1);
        } else {
            QAbstractPrintDialog::timerEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (qabstractprintdialog_childevent_isbase) {
            qabstractprintdialog_childevent_isbase = false;
            QAbstractPrintDialog::childEvent(event);
        } else if (qabstractprintdialog_childevent_callback != nullptr) {
            QChildEvent* cbval1 = event;

            qabstractprintdialog_childevent_callback(this, cbval1);
        } else {
            QAbstractPrintDialog::childEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (qabstractprintdialog_customevent_isbase) {
            qabstractprintdialog_customevent_isbase = false;
            QAbstractPrintDialog::customEvent(event);
        } else if (qabstractprintdialog_customevent_callback != nullptr) {
            QEvent* cbval1 = event;

            qabstractprintdialog_customevent_callback(this, cbval1);
        } else {
            QAbstractPrintDialog::customEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (qabstractprintdialog_connectnotify_isbase) {
            qabstractprintdialog_connectnotify_isbase = false;
            QAbstractPrintDialog::connectNotify(signal);
        } else if (qabstractprintdialog_connectnotify_callback != nullptr) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            qabstractprintdialog_connectnotify_callback(this, cbval1);
        } else {
            QAbstractPrintDialog::connectNotify(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (qabstractprintdialog_disconnectnotify_isbase) {
            qabstractprintdialog_disconnectnotify_isbase = false;
            QAbstractPrintDialog::disconnectNotify(signal);
        } else if (qabstractprintdialog_disconnectnotify_callback != nullptr) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            qabstractprintdialog_disconnectnotify_callback(this, cbval1);
        } else {
            QAbstractPrintDialog::disconnectNotify(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    void adjustPosition(QWidget* param1) {
        if (qabstractprintdialog_adjustposition_isbase) {
            qabstractprintdialog_adjustposition_isbase = false;
            QAbstractPrintDialog::adjustPosition(param1);
        } else if (qabstractprintdialog_adjustposition_callback != nullptr) {
            QWidget* cbval1 = param1;

            qabstractprintdialog_adjustposition_callback(this, cbval1);
        } else {
            QAbstractPrintDialog::adjustPosition(param1);
        }
    }

    // Virtual method for C ABI access and custom callback
    void updateMicroFocus() {
        if (qabstractprintdialog_updatemicrofocus_isbase) {
            qabstractprintdialog_updatemicrofocus_isbase = false;
            QAbstractPrintDialog::updateMicroFocus();
        } else if (qabstractprintdialog_updatemicrofocus_callback != nullptr) {
            qabstractprintdialog_updatemicrofocus_callback();
        } else {
            QAbstractPrintDialog::updateMicroFocus();
        }
    }

    // Virtual method for C ABI access and custom callback
    void create() {
        if (qabstractprintdialog_create_isbase) {
            qabstractprintdialog_create_isbase = false;
            QAbstractPrintDialog::create();
        } else if (qabstractprintdialog_create_callback != nullptr) {
            qabstractprintdialog_create_callback();
        } else {
            QAbstractPrintDialog::create();
        }
    }

    // Virtual method for C ABI access and custom callback
    void destroy() {
        if (qabstractprintdialog_destroy_isbase) {
            qabstractprintdialog_destroy_isbase = false;
            QAbstractPrintDialog::destroy();
        } else if (qabstractprintdialog_destroy_callback != nullptr) {
            qabstractprintdialog_destroy_callback();
        } else {
            QAbstractPrintDialog::destroy();
        }
    }

    // Virtual method for C ABI access and custom callback
    bool focusNextChild() {
        if (qabstractprintdialog_focusnextchild_isbase) {
            qabstractprintdialog_focusnextchild_isbase = false;
            return QAbstractPrintDialog::focusNextChild();
        } else if (qabstractprintdialog_focusnextchild_callback != nullptr) {
            bool callback_ret = qabstractprintdialog_focusnextchild_callback();
            return callback_ret;
        } else {
            return QAbstractPrintDialog::focusNextChild();
        }
    }

    // Virtual method for C ABI access and custom callback
    bool focusPreviousChild() {
        if (qabstractprintdialog_focuspreviouschild_isbase) {
            qabstractprintdialog_focuspreviouschild_isbase = false;
            return QAbstractPrintDialog::focusPreviousChild();
        } else if (qabstractprintdialog_focuspreviouschild_callback != nullptr) {
            bool callback_ret = qabstractprintdialog_focuspreviouschild_callback();
            return callback_ret;
        } else {
            return QAbstractPrintDialog::focusPreviousChild();
        }
    }

    // Virtual method for C ABI access and custom callback
    QObject* sender() const {
        if (qabstractprintdialog_sender_isbase) {
            qabstractprintdialog_sender_isbase = false;
            return QAbstractPrintDialog::sender();
        } else if (qabstractprintdialog_sender_callback != nullptr) {
            QObject* callback_ret = qabstractprintdialog_sender_callback();
            return callback_ret;
        } else {
            return QAbstractPrintDialog::sender();
        }
    }

    // Virtual method for C ABI access and custom callback
    int senderSignalIndex() const {
        if (qabstractprintdialog_sendersignalindex_isbase) {
            qabstractprintdialog_sendersignalindex_isbase = false;
            return QAbstractPrintDialog::senderSignalIndex();
        } else if (qabstractprintdialog_sendersignalindex_callback != nullptr) {
            int callback_ret = qabstractprintdialog_sendersignalindex_callback();
            return static_cast<int>(callback_ret);
        } else {
            return QAbstractPrintDialog::senderSignalIndex();
        }
    }

    // Virtual method for C ABI access and custom callback
    int receivers(const char* signal) const {
        if (qabstractprintdialog_receivers_isbase) {
            qabstractprintdialog_receivers_isbase = false;
            return QAbstractPrintDialog::receivers(signal);
        } else if (qabstractprintdialog_receivers_callback != nullptr) {
            const char* cbval1 = (const char*)signal;

            int callback_ret = qabstractprintdialog_receivers_callback(this, cbval1);
            return static_cast<int>(callback_ret);
        } else {
            return QAbstractPrintDialog::receivers(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    bool isSignalConnected(const QMetaMethod& signal) const {
        if (qabstractprintdialog_issignalconnected_isbase) {
            qabstractprintdialog_issignalconnected_isbase = false;
            return QAbstractPrintDialog::isSignalConnected(signal);
        } else if (qabstractprintdialog_issignalconnected_callback != nullptr) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            bool callback_ret = qabstractprintdialog_issignalconnected_callback(this, cbval1);
            return callback_ret;
        } else {
            return QAbstractPrintDialog::isSignalConnected(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    double getDecodedMetricF(QPaintDevice::PaintDeviceMetric metricA, QPaintDevice::PaintDeviceMetric metricB) const {
        if (qabstractprintdialog_getdecodedmetricf_isbase) {
            qabstractprintdialog_getdecodedmetricf_isbase = false;
            return QAbstractPrintDialog::getDecodedMetricF(metricA, metricB);
        } else if (qabstractprintdialog_getdecodedmetricf_callback != nullptr) {
            int cbval1 = static_cast<int>(metricA);
            int cbval2 = static_cast<int>(metricB);

            double callback_ret = qabstractprintdialog_getdecodedmetricf_callback(this, cbval1, cbval2);
            return static_cast<double>(callback_ret);
        } else {
            return QAbstractPrintDialog::getDecodedMetricF(metricA, metricB);
        }
    }

    // Friend functions
    friend void QAbstractPrintDialog_KeyPressEvent(QAbstractPrintDialog* self, QKeyEvent* param1);
    friend void QAbstractPrintDialog_QBaseKeyPressEvent(QAbstractPrintDialog* self, QKeyEvent* param1);
    friend void QAbstractPrintDialog_CloseEvent(QAbstractPrintDialog* self, QCloseEvent* param1);
    friend void QAbstractPrintDialog_QBaseCloseEvent(QAbstractPrintDialog* self, QCloseEvent* param1);
    friend void QAbstractPrintDialog_ShowEvent(QAbstractPrintDialog* self, QShowEvent* param1);
    friend void QAbstractPrintDialog_QBaseShowEvent(QAbstractPrintDialog* self, QShowEvent* param1);
    friend void QAbstractPrintDialog_ResizeEvent(QAbstractPrintDialog* self, QResizeEvent* param1);
    friend void QAbstractPrintDialog_QBaseResizeEvent(QAbstractPrintDialog* self, QResizeEvent* param1);
    friend void QAbstractPrintDialog_ContextMenuEvent(QAbstractPrintDialog* self, QContextMenuEvent* param1);
    friend void QAbstractPrintDialog_QBaseContextMenuEvent(QAbstractPrintDialog* self, QContextMenuEvent* param1);
    friend bool QAbstractPrintDialog_EventFilter(QAbstractPrintDialog* self, QObject* param1, QEvent* param2);
    friend bool QAbstractPrintDialog_QBaseEventFilter(QAbstractPrintDialog* self, QObject* param1, QEvent* param2);
    friend bool QAbstractPrintDialog_Event(QAbstractPrintDialog* self, QEvent* event);
    friend bool QAbstractPrintDialog_QBaseEvent(QAbstractPrintDialog* self, QEvent* event);
    friend void QAbstractPrintDialog_MousePressEvent(QAbstractPrintDialog* self, QMouseEvent* event);
    friend void QAbstractPrintDialog_QBaseMousePressEvent(QAbstractPrintDialog* self, QMouseEvent* event);
    friend void QAbstractPrintDialog_MouseReleaseEvent(QAbstractPrintDialog* self, QMouseEvent* event);
    friend void QAbstractPrintDialog_QBaseMouseReleaseEvent(QAbstractPrintDialog* self, QMouseEvent* event);
    friend void QAbstractPrintDialog_MouseDoubleClickEvent(QAbstractPrintDialog* self, QMouseEvent* event);
    friend void QAbstractPrintDialog_QBaseMouseDoubleClickEvent(QAbstractPrintDialog* self, QMouseEvent* event);
    friend void QAbstractPrintDialog_MouseMoveEvent(QAbstractPrintDialog* self, QMouseEvent* event);
    friend void QAbstractPrintDialog_QBaseMouseMoveEvent(QAbstractPrintDialog* self, QMouseEvent* event);
    friend void QAbstractPrintDialog_WheelEvent(QAbstractPrintDialog* self, QWheelEvent* event);
    friend void QAbstractPrintDialog_QBaseWheelEvent(QAbstractPrintDialog* self, QWheelEvent* event);
    friend void QAbstractPrintDialog_KeyReleaseEvent(QAbstractPrintDialog* self, QKeyEvent* event);
    friend void QAbstractPrintDialog_QBaseKeyReleaseEvent(QAbstractPrintDialog* self, QKeyEvent* event);
    friend void QAbstractPrintDialog_FocusInEvent(QAbstractPrintDialog* self, QFocusEvent* event);
    friend void QAbstractPrintDialog_QBaseFocusInEvent(QAbstractPrintDialog* self, QFocusEvent* event);
    friend void QAbstractPrintDialog_FocusOutEvent(QAbstractPrintDialog* self, QFocusEvent* event);
    friend void QAbstractPrintDialog_QBaseFocusOutEvent(QAbstractPrintDialog* self, QFocusEvent* event);
    friend void QAbstractPrintDialog_EnterEvent(QAbstractPrintDialog* self, QEnterEvent* event);
    friend void QAbstractPrintDialog_QBaseEnterEvent(QAbstractPrintDialog* self, QEnterEvent* event);
    friend void QAbstractPrintDialog_LeaveEvent(QAbstractPrintDialog* self, QEvent* event);
    friend void QAbstractPrintDialog_QBaseLeaveEvent(QAbstractPrintDialog* self, QEvent* event);
    friend void QAbstractPrintDialog_PaintEvent(QAbstractPrintDialog* self, QPaintEvent* event);
    friend void QAbstractPrintDialog_QBasePaintEvent(QAbstractPrintDialog* self, QPaintEvent* event);
    friend void QAbstractPrintDialog_MoveEvent(QAbstractPrintDialog* self, QMoveEvent* event);
    friend void QAbstractPrintDialog_QBaseMoveEvent(QAbstractPrintDialog* self, QMoveEvent* event);
    friend void QAbstractPrintDialog_TabletEvent(QAbstractPrintDialog* self, QTabletEvent* event);
    friend void QAbstractPrintDialog_QBaseTabletEvent(QAbstractPrintDialog* self, QTabletEvent* event);
    friend void QAbstractPrintDialog_ActionEvent(QAbstractPrintDialog* self, QActionEvent* event);
    friend void QAbstractPrintDialog_QBaseActionEvent(QAbstractPrintDialog* self, QActionEvent* event);
    friend void QAbstractPrintDialog_DragEnterEvent(QAbstractPrintDialog* self, QDragEnterEvent* event);
    friend void QAbstractPrintDialog_QBaseDragEnterEvent(QAbstractPrintDialog* self, QDragEnterEvent* event);
    friend void QAbstractPrintDialog_DragMoveEvent(QAbstractPrintDialog* self, QDragMoveEvent* event);
    friend void QAbstractPrintDialog_QBaseDragMoveEvent(QAbstractPrintDialog* self, QDragMoveEvent* event);
    friend void QAbstractPrintDialog_DragLeaveEvent(QAbstractPrintDialog* self, QDragLeaveEvent* event);
    friend void QAbstractPrintDialog_QBaseDragLeaveEvent(QAbstractPrintDialog* self, QDragLeaveEvent* event);
    friend void QAbstractPrintDialog_DropEvent(QAbstractPrintDialog* self, QDropEvent* event);
    friend void QAbstractPrintDialog_QBaseDropEvent(QAbstractPrintDialog* self, QDropEvent* event);
    friend void QAbstractPrintDialog_HideEvent(QAbstractPrintDialog* self, QHideEvent* event);
    friend void QAbstractPrintDialog_QBaseHideEvent(QAbstractPrintDialog* self, QHideEvent* event);
    friend bool QAbstractPrintDialog_NativeEvent(QAbstractPrintDialog* self, const libqt_string eventType, void* message, intptr_t* result);
    friend bool QAbstractPrintDialog_QBaseNativeEvent(QAbstractPrintDialog* self, const libqt_string eventType, void* message, intptr_t* result);
    friend void QAbstractPrintDialog_ChangeEvent(QAbstractPrintDialog* self, QEvent* param1);
    friend void QAbstractPrintDialog_QBaseChangeEvent(QAbstractPrintDialog* self, QEvent* param1);
    friend int QAbstractPrintDialog_Metric(const QAbstractPrintDialog* self, int param1);
    friend int QAbstractPrintDialog_QBaseMetric(const QAbstractPrintDialog* self, int param1);
    friend void QAbstractPrintDialog_InitPainter(const QAbstractPrintDialog* self, QPainter* painter);
    friend void QAbstractPrintDialog_QBaseInitPainter(const QAbstractPrintDialog* self, QPainter* painter);
    friend QPaintDevice* QAbstractPrintDialog_Redirected(const QAbstractPrintDialog* self, QPoint* offset);
    friend QPaintDevice* QAbstractPrintDialog_QBaseRedirected(const QAbstractPrintDialog* self, QPoint* offset);
    friend QPainter* QAbstractPrintDialog_SharedPainter(const QAbstractPrintDialog* self);
    friend QPainter* QAbstractPrintDialog_QBaseSharedPainter(const QAbstractPrintDialog* self);
    friend void QAbstractPrintDialog_InputMethodEvent(QAbstractPrintDialog* self, QInputMethodEvent* param1);
    friend void QAbstractPrintDialog_QBaseInputMethodEvent(QAbstractPrintDialog* self, QInputMethodEvent* param1);
    friend bool QAbstractPrintDialog_FocusNextPrevChild(QAbstractPrintDialog* self, bool next);
    friend bool QAbstractPrintDialog_QBaseFocusNextPrevChild(QAbstractPrintDialog* self, bool next);
    friend void QAbstractPrintDialog_TimerEvent(QAbstractPrintDialog* self, QTimerEvent* event);
    friend void QAbstractPrintDialog_QBaseTimerEvent(QAbstractPrintDialog* self, QTimerEvent* event);
    friend void QAbstractPrintDialog_ChildEvent(QAbstractPrintDialog* self, QChildEvent* event);
    friend void QAbstractPrintDialog_QBaseChildEvent(QAbstractPrintDialog* self, QChildEvent* event);
    friend void QAbstractPrintDialog_CustomEvent(QAbstractPrintDialog* self, QEvent* event);
    friend void QAbstractPrintDialog_QBaseCustomEvent(QAbstractPrintDialog* self, QEvent* event);
    friend void QAbstractPrintDialog_ConnectNotify(QAbstractPrintDialog* self, const QMetaMethod* signal);
    friend void QAbstractPrintDialog_QBaseConnectNotify(QAbstractPrintDialog* self, const QMetaMethod* signal);
    friend void QAbstractPrintDialog_DisconnectNotify(QAbstractPrintDialog* self, const QMetaMethod* signal);
    friend void QAbstractPrintDialog_QBaseDisconnectNotify(QAbstractPrintDialog* self, const QMetaMethod* signal);
    friend void QAbstractPrintDialog_AdjustPosition(QAbstractPrintDialog* self, QWidget* param1);
    friend void QAbstractPrintDialog_QBaseAdjustPosition(QAbstractPrintDialog* self, QWidget* param1);
    friend void QAbstractPrintDialog_UpdateMicroFocus(QAbstractPrintDialog* self);
    friend void QAbstractPrintDialog_QBaseUpdateMicroFocus(QAbstractPrintDialog* self);
    friend void QAbstractPrintDialog_Create(QAbstractPrintDialog* self);
    friend void QAbstractPrintDialog_QBaseCreate(QAbstractPrintDialog* self);
    friend void QAbstractPrintDialog_Destroy(QAbstractPrintDialog* self);
    friend void QAbstractPrintDialog_QBaseDestroy(QAbstractPrintDialog* self);
    friend bool QAbstractPrintDialog_FocusNextChild(QAbstractPrintDialog* self);
    friend bool QAbstractPrintDialog_QBaseFocusNextChild(QAbstractPrintDialog* self);
    friend bool QAbstractPrintDialog_FocusPreviousChild(QAbstractPrintDialog* self);
    friend bool QAbstractPrintDialog_QBaseFocusPreviousChild(QAbstractPrintDialog* self);
    friend QObject* QAbstractPrintDialog_Sender(const QAbstractPrintDialog* self);
    friend QObject* QAbstractPrintDialog_QBaseSender(const QAbstractPrintDialog* self);
    friend int QAbstractPrintDialog_SenderSignalIndex(const QAbstractPrintDialog* self);
    friend int QAbstractPrintDialog_QBaseSenderSignalIndex(const QAbstractPrintDialog* self);
    friend int QAbstractPrintDialog_Receivers(const QAbstractPrintDialog* self, const char* signal);
    friend int QAbstractPrintDialog_QBaseReceivers(const QAbstractPrintDialog* self, const char* signal);
    friend bool QAbstractPrintDialog_IsSignalConnected(const QAbstractPrintDialog* self, const QMetaMethod* signal);
    friend bool QAbstractPrintDialog_QBaseIsSignalConnected(const QAbstractPrintDialog* self, const QMetaMethod* signal);
    friend double QAbstractPrintDialog_GetDecodedMetricF(const QAbstractPrintDialog* self, int metricA, int metricB);
    friend double QAbstractPrintDialog_QBaseGetDecodedMetricF(const QAbstractPrintDialog* self, int metricA, int metricB);
};

#endif
