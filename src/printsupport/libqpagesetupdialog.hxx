#pragma once
#ifndef SRC_PRINTSUPPORTC_LIBVIRTUALQPAGESETUPDIALOG_H
#define SRC_PRINTSUPPORTC_LIBVIRTUALQPAGESETUPDIALOG_H

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

// This class is a subclass of QPageSetupDialog so that we can call protected methods
class VirtualQPageSetupDialog final : public QPageSetupDialog {

  public:
    // Virtual class boolean flag
    bool isVirtualQPageSetupDialog = true;

    // Virtual class public types (including callbacks)
    using QPageSetupDialog_MetaObject_Callback = QMetaObject* (*)();
    using QPageSetupDialog_Metacast_Callback = void* (*)(QPageSetupDialog*, const char*);
    using QPageSetupDialog_Metacall_Callback = int (*)(QPageSetupDialog*, int, int, void**);
    using QPageSetupDialog_Exec_Callback = int (*)();
    using QPageSetupDialog_Done_Callback = void (*)(QPageSetupDialog*, int);
    using QPageSetupDialog_SetVisible_Callback = void (*)(QPageSetupDialog*, bool);
    using QPageSetupDialog_SizeHint_Callback = QSize* (*)();
    using QPageSetupDialog_MinimumSizeHint_Callback = QSize* (*)();
    using QPageSetupDialog_Open_Callback = void (*)();
    using QPageSetupDialog_Accept_Callback = void (*)();
    using QPageSetupDialog_Reject_Callback = void (*)();
    using QPageSetupDialog_KeyPressEvent_Callback = void (*)(QPageSetupDialog*, QKeyEvent*);
    using QPageSetupDialog_CloseEvent_Callback = void (*)(QPageSetupDialog*, QCloseEvent*);
    using QPageSetupDialog_ShowEvent_Callback = void (*)(QPageSetupDialog*, QShowEvent*);
    using QPageSetupDialog_ResizeEvent_Callback = void (*)(QPageSetupDialog*, QResizeEvent*);
    using QPageSetupDialog_ContextMenuEvent_Callback = void (*)(QPageSetupDialog*, QContextMenuEvent*);
    using QPageSetupDialog_EventFilter_Callback = bool (*)(QPageSetupDialog*, QObject*, QEvent*);
    using QPageSetupDialog_DevType_Callback = int (*)();
    using QPageSetupDialog_HeightForWidth_Callback = int (*)(const QPageSetupDialog*, int);
    using QPageSetupDialog_HasHeightForWidth_Callback = bool (*)();
    using QPageSetupDialog_PaintEngine_Callback = QPaintEngine* (*)();
    using QPageSetupDialog_Event_Callback = bool (*)(QPageSetupDialog*, QEvent*);
    using QPageSetupDialog_MousePressEvent_Callback = void (*)(QPageSetupDialog*, QMouseEvent*);
    using QPageSetupDialog_MouseReleaseEvent_Callback = void (*)(QPageSetupDialog*, QMouseEvent*);
    using QPageSetupDialog_MouseDoubleClickEvent_Callback = void (*)(QPageSetupDialog*, QMouseEvent*);
    using QPageSetupDialog_MouseMoveEvent_Callback = void (*)(QPageSetupDialog*, QMouseEvent*);
    using QPageSetupDialog_WheelEvent_Callback = void (*)(QPageSetupDialog*, QWheelEvent*);
    using QPageSetupDialog_KeyReleaseEvent_Callback = void (*)(QPageSetupDialog*, QKeyEvent*);
    using QPageSetupDialog_FocusInEvent_Callback = void (*)(QPageSetupDialog*, QFocusEvent*);
    using QPageSetupDialog_FocusOutEvent_Callback = void (*)(QPageSetupDialog*, QFocusEvent*);
    using QPageSetupDialog_EnterEvent_Callback = void (*)(QPageSetupDialog*, QEnterEvent*);
    using QPageSetupDialog_LeaveEvent_Callback = void (*)(QPageSetupDialog*, QEvent*);
    using QPageSetupDialog_PaintEvent_Callback = void (*)(QPageSetupDialog*, QPaintEvent*);
    using QPageSetupDialog_MoveEvent_Callback = void (*)(QPageSetupDialog*, QMoveEvent*);
    using QPageSetupDialog_TabletEvent_Callback = void (*)(QPageSetupDialog*, QTabletEvent*);
    using QPageSetupDialog_ActionEvent_Callback = void (*)(QPageSetupDialog*, QActionEvent*);
    using QPageSetupDialog_DragEnterEvent_Callback = void (*)(QPageSetupDialog*, QDragEnterEvent*);
    using QPageSetupDialog_DragMoveEvent_Callback = void (*)(QPageSetupDialog*, QDragMoveEvent*);
    using QPageSetupDialog_DragLeaveEvent_Callback = void (*)(QPageSetupDialog*, QDragLeaveEvent*);
    using QPageSetupDialog_DropEvent_Callback = void (*)(QPageSetupDialog*, QDropEvent*);
    using QPageSetupDialog_HideEvent_Callback = void (*)(QPageSetupDialog*, QHideEvent*);
    using QPageSetupDialog_NativeEvent_Callback = bool (*)(QPageSetupDialog*, libqt_string, void*, intptr_t*);
    using QPageSetupDialog_ChangeEvent_Callback = void (*)(QPageSetupDialog*, QEvent*);
    using QPageSetupDialog_Metric_Callback = int (*)(const QPageSetupDialog*, int);
    using QPageSetupDialog_InitPainter_Callback = void (*)(const QPageSetupDialog*, QPainter*);
    using QPageSetupDialog_Redirected_Callback = QPaintDevice* (*)(const QPageSetupDialog*, QPoint*);
    using QPageSetupDialog_SharedPainter_Callback = QPainter* (*)();
    using QPageSetupDialog_InputMethodEvent_Callback = void (*)(QPageSetupDialog*, QInputMethodEvent*);
    using QPageSetupDialog_InputMethodQuery_Callback = QVariant* (*)(const QPageSetupDialog*, int);
    using QPageSetupDialog_FocusNextPrevChild_Callback = bool (*)(QPageSetupDialog*, bool);
    using QPageSetupDialog_TimerEvent_Callback = void (*)(QPageSetupDialog*, QTimerEvent*);
    using QPageSetupDialog_ChildEvent_Callback = void (*)(QPageSetupDialog*, QChildEvent*);
    using QPageSetupDialog_CustomEvent_Callback = void (*)(QPageSetupDialog*, QEvent*);
    using QPageSetupDialog_ConnectNotify_Callback = void (*)(QPageSetupDialog*, QMetaMethod*);
    using QPageSetupDialog_DisconnectNotify_Callback = void (*)(QPageSetupDialog*, QMetaMethod*);
    using QPageSetupDialog_AdjustPosition_Callback = void (*)(QPageSetupDialog*, QWidget*);
    using QPageSetupDialog_UpdateMicroFocus_Callback = void (*)();
    using QPageSetupDialog_Create_Callback = void (*)();
    using QPageSetupDialog_Destroy_Callback = void (*)();
    using QPageSetupDialog_FocusNextChild_Callback = bool (*)();
    using QPageSetupDialog_FocusPreviousChild_Callback = bool (*)();
    using QPageSetupDialog_Sender_Callback = QObject* (*)();
    using QPageSetupDialog_SenderSignalIndex_Callback = int (*)();
    using QPageSetupDialog_Receivers_Callback = int (*)(const QPageSetupDialog*, const char*);
    using QPageSetupDialog_IsSignalConnected_Callback = bool (*)(const QPageSetupDialog*, QMetaMethod*);
    using QPageSetupDialog_GetDecodedMetricF_Callback = double (*)(const QPageSetupDialog*, int, int);

  protected:
    // Instance callback storage
    QPageSetupDialog_MetaObject_Callback qpagesetupdialog_metaobject_callback = nullptr;
    QPageSetupDialog_Metacast_Callback qpagesetupdialog_metacast_callback = nullptr;
    QPageSetupDialog_Metacall_Callback qpagesetupdialog_metacall_callback = nullptr;
    QPageSetupDialog_Exec_Callback qpagesetupdialog_exec_callback = nullptr;
    QPageSetupDialog_Done_Callback qpagesetupdialog_done_callback = nullptr;
    QPageSetupDialog_SetVisible_Callback qpagesetupdialog_setvisible_callback = nullptr;
    QPageSetupDialog_SizeHint_Callback qpagesetupdialog_sizehint_callback = nullptr;
    QPageSetupDialog_MinimumSizeHint_Callback qpagesetupdialog_minimumsizehint_callback = nullptr;
    QPageSetupDialog_Open_Callback qpagesetupdialog_open_callback = nullptr;
    QPageSetupDialog_Accept_Callback qpagesetupdialog_accept_callback = nullptr;
    QPageSetupDialog_Reject_Callback qpagesetupdialog_reject_callback = nullptr;
    QPageSetupDialog_KeyPressEvent_Callback qpagesetupdialog_keypressevent_callback = nullptr;
    QPageSetupDialog_CloseEvent_Callback qpagesetupdialog_closeevent_callback = nullptr;
    QPageSetupDialog_ShowEvent_Callback qpagesetupdialog_showevent_callback = nullptr;
    QPageSetupDialog_ResizeEvent_Callback qpagesetupdialog_resizeevent_callback = nullptr;
    QPageSetupDialog_ContextMenuEvent_Callback qpagesetupdialog_contextmenuevent_callback = nullptr;
    QPageSetupDialog_EventFilter_Callback qpagesetupdialog_eventfilter_callback = nullptr;
    QPageSetupDialog_DevType_Callback qpagesetupdialog_devtype_callback = nullptr;
    QPageSetupDialog_HeightForWidth_Callback qpagesetupdialog_heightforwidth_callback = nullptr;
    QPageSetupDialog_HasHeightForWidth_Callback qpagesetupdialog_hasheightforwidth_callback = nullptr;
    QPageSetupDialog_PaintEngine_Callback qpagesetupdialog_paintengine_callback = nullptr;
    QPageSetupDialog_Event_Callback qpagesetupdialog_event_callback = nullptr;
    QPageSetupDialog_MousePressEvent_Callback qpagesetupdialog_mousepressevent_callback = nullptr;
    QPageSetupDialog_MouseReleaseEvent_Callback qpagesetupdialog_mousereleaseevent_callback = nullptr;
    QPageSetupDialog_MouseDoubleClickEvent_Callback qpagesetupdialog_mousedoubleclickevent_callback = nullptr;
    QPageSetupDialog_MouseMoveEvent_Callback qpagesetupdialog_mousemoveevent_callback = nullptr;
    QPageSetupDialog_WheelEvent_Callback qpagesetupdialog_wheelevent_callback = nullptr;
    QPageSetupDialog_KeyReleaseEvent_Callback qpagesetupdialog_keyreleaseevent_callback = nullptr;
    QPageSetupDialog_FocusInEvent_Callback qpagesetupdialog_focusinevent_callback = nullptr;
    QPageSetupDialog_FocusOutEvent_Callback qpagesetupdialog_focusoutevent_callback = nullptr;
    QPageSetupDialog_EnterEvent_Callback qpagesetupdialog_enterevent_callback = nullptr;
    QPageSetupDialog_LeaveEvent_Callback qpagesetupdialog_leaveevent_callback = nullptr;
    QPageSetupDialog_PaintEvent_Callback qpagesetupdialog_paintevent_callback = nullptr;
    QPageSetupDialog_MoveEvent_Callback qpagesetupdialog_moveevent_callback = nullptr;
    QPageSetupDialog_TabletEvent_Callback qpagesetupdialog_tabletevent_callback = nullptr;
    QPageSetupDialog_ActionEvent_Callback qpagesetupdialog_actionevent_callback = nullptr;
    QPageSetupDialog_DragEnterEvent_Callback qpagesetupdialog_dragenterevent_callback = nullptr;
    QPageSetupDialog_DragMoveEvent_Callback qpagesetupdialog_dragmoveevent_callback = nullptr;
    QPageSetupDialog_DragLeaveEvent_Callback qpagesetupdialog_dragleaveevent_callback = nullptr;
    QPageSetupDialog_DropEvent_Callback qpagesetupdialog_dropevent_callback = nullptr;
    QPageSetupDialog_HideEvent_Callback qpagesetupdialog_hideevent_callback = nullptr;
    QPageSetupDialog_NativeEvent_Callback qpagesetupdialog_nativeevent_callback = nullptr;
    QPageSetupDialog_ChangeEvent_Callback qpagesetupdialog_changeevent_callback = nullptr;
    QPageSetupDialog_Metric_Callback qpagesetupdialog_metric_callback = nullptr;
    QPageSetupDialog_InitPainter_Callback qpagesetupdialog_initpainter_callback = nullptr;
    QPageSetupDialog_Redirected_Callback qpagesetupdialog_redirected_callback = nullptr;
    QPageSetupDialog_SharedPainter_Callback qpagesetupdialog_sharedpainter_callback = nullptr;
    QPageSetupDialog_InputMethodEvent_Callback qpagesetupdialog_inputmethodevent_callback = nullptr;
    QPageSetupDialog_InputMethodQuery_Callback qpagesetupdialog_inputmethodquery_callback = nullptr;
    QPageSetupDialog_FocusNextPrevChild_Callback qpagesetupdialog_focusnextprevchild_callback = nullptr;
    QPageSetupDialog_TimerEvent_Callback qpagesetupdialog_timerevent_callback = nullptr;
    QPageSetupDialog_ChildEvent_Callback qpagesetupdialog_childevent_callback = nullptr;
    QPageSetupDialog_CustomEvent_Callback qpagesetupdialog_customevent_callback = nullptr;
    QPageSetupDialog_ConnectNotify_Callback qpagesetupdialog_connectnotify_callback = nullptr;
    QPageSetupDialog_DisconnectNotify_Callback qpagesetupdialog_disconnectnotify_callback = nullptr;
    QPageSetupDialog_AdjustPosition_Callback qpagesetupdialog_adjustposition_callback = nullptr;
    QPageSetupDialog_UpdateMicroFocus_Callback qpagesetupdialog_updatemicrofocus_callback = nullptr;
    QPageSetupDialog_Create_Callback qpagesetupdialog_create_callback = nullptr;
    QPageSetupDialog_Destroy_Callback qpagesetupdialog_destroy_callback = nullptr;
    QPageSetupDialog_FocusNextChild_Callback qpagesetupdialog_focusnextchild_callback = nullptr;
    QPageSetupDialog_FocusPreviousChild_Callback qpagesetupdialog_focuspreviouschild_callback = nullptr;
    QPageSetupDialog_Sender_Callback qpagesetupdialog_sender_callback = nullptr;
    QPageSetupDialog_SenderSignalIndex_Callback qpagesetupdialog_sendersignalindex_callback = nullptr;
    QPageSetupDialog_Receivers_Callback qpagesetupdialog_receivers_callback = nullptr;
    QPageSetupDialog_IsSignalConnected_Callback qpagesetupdialog_issignalconnected_callback = nullptr;
    QPageSetupDialog_GetDecodedMetricF_Callback qpagesetupdialog_getdecodedmetricf_callback = nullptr;

    // Instance base flags
    mutable bool qpagesetupdialog_metaobject_isbase = false;
    mutable bool qpagesetupdialog_metacast_isbase = false;
    mutable bool qpagesetupdialog_metacall_isbase = false;
    mutable bool qpagesetupdialog_exec_isbase = false;
    mutable bool qpagesetupdialog_done_isbase = false;
    mutable bool qpagesetupdialog_setvisible_isbase = false;
    mutable bool qpagesetupdialog_sizehint_isbase = false;
    mutable bool qpagesetupdialog_minimumsizehint_isbase = false;
    mutable bool qpagesetupdialog_open_isbase = false;
    mutable bool qpagesetupdialog_accept_isbase = false;
    mutable bool qpagesetupdialog_reject_isbase = false;
    mutable bool qpagesetupdialog_keypressevent_isbase = false;
    mutable bool qpagesetupdialog_closeevent_isbase = false;
    mutable bool qpagesetupdialog_showevent_isbase = false;
    mutable bool qpagesetupdialog_resizeevent_isbase = false;
    mutable bool qpagesetupdialog_contextmenuevent_isbase = false;
    mutable bool qpagesetupdialog_eventfilter_isbase = false;
    mutable bool qpagesetupdialog_devtype_isbase = false;
    mutable bool qpagesetupdialog_heightforwidth_isbase = false;
    mutable bool qpagesetupdialog_hasheightforwidth_isbase = false;
    mutable bool qpagesetupdialog_paintengine_isbase = false;
    mutable bool qpagesetupdialog_event_isbase = false;
    mutable bool qpagesetupdialog_mousepressevent_isbase = false;
    mutable bool qpagesetupdialog_mousereleaseevent_isbase = false;
    mutable bool qpagesetupdialog_mousedoubleclickevent_isbase = false;
    mutable bool qpagesetupdialog_mousemoveevent_isbase = false;
    mutable bool qpagesetupdialog_wheelevent_isbase = false;
    mutable bool qpagesetupdialog_keyreleaseevent_isbase = false;
    mutable bool qpagesetupdialog_focusinevent_isbase = false;
    mutable bool qpagesetupdialog_focusoutevent_isbase = false;
    mutable bool qpagesetupdialog_enterevent_isbase = false;
    mutable bool qpagesetupdialog_leaveevent_isbase = false;
    mutable bool qpagesetupdialog_paintevent_isbase = false;
    mutable bool qpagesetupdialog_moveevent_isbase = false;
    mutable bool qpagesetupdialog_tabletevent_isbase = false;
    mutable bool qpagesetupdialog_actionevent_isbase = false;
    mutable bool qpagesetupdialog_dragenterevent_isbase = false;
    mutable bool qpagesetupdialog_dragmoveevent_isbase = false;
    mutable bool qpagesetupdialog_dragleaveevent_isbase = false;
    mutable bool qpagesetupdialog_dropevent_isbase = false;
    mutable bool qpagesetupdialog_hideevent_isbase = false;
    mutable bool qpagesetupdialog_nativeevent_isbase = false;
    mutable bool qpagesetupdialog_changeevent_isbase = false;
    mutable bool qpagesetupdialog_metric_isbase = false;
    mutable bool qpagesetupdialog_initpainter_isbase = false;
    mutable bool qpagesetupdialog_redirected_isbase = false;
    mutable bool qpagesetupdialog_sharedpainter_isbase = false;
    mutable bool qpagesetupdialog_inputmethodevent_isbase = false;
    mutable bool qpagesetupdialog_inputmethodquery_isbase = false;
    mutable bool qpagesetupdialog_focusnextprevchild_isbase = false;
    mutable bool qpagesetupdialog_timerevent_isbase = false;
    mutable bool qpagesetupdialog_childevent_isbase = false;
    mutable bool qpagesetupdialog_customevent_isbase = false;
    mutable bool qpagesetupdialog_connectnotify_isbase = false;
    mutable bool qpagesetupdialog_disconnectnotify_isbase = false;
    mutable bool qpagesetupdialog_adjustposition_isbase = false;
    mutable bool qpagesetupdialog_updatemicrofocus_isbase = false;
    mutable bool qpagesetupdialog_create_isbase = false;
    mutable bool qpagesetupdialog_destroy_isbase = false;
    mutable bool qpagesetupdialog_focusnextchild_isbase = false;
    mutable bool qpagesetupdialog_focuspreviouschild_isbase = false;
    mutable bool qpagesetupdialog_sender_isbase = false;
    mutable bool qpagesetupdialog_sendersignalindex_isbase = false;
    mutable bool qpagesetupdialog_receivers_isbase = false;
    mutable bool qpagesetupdialog_issignalconnected_isbase = false;
    mutable bool qpagesetupdialog_getdecodedmetricf_isbase = false;

  public:
    VirtualQPageSetupDialog(QWidget* parent) : QPageSetupDialog(parent) {};
    VirtualQPageSetupDialog(QPrinter* printer) : QPageSetupDialog(printer) {};
    VirtualQPageSetupDialog() : QPageSetupDialog() {};
    VirtualQPageSetupDialog(QPrinter* printer, QWidget* parent) : QPageSetupDialog(printer, parent) {};

    // Callback setters
    inline void setQPageSetupDialog_MetaObject_Callback(QPageSetupDialog_MetaObject_Callback cb) { qpagesetupdialog_metaobject_callback = cb; }
    inline void setQPageSetupDialog_Metacast_Callback(QPageSetupDialog_Metacast_Callback cb) { qpagesetupdialog_metacast_callback = cb; }
    inline void setQPageSetupDialog_Metacall_Callback(QPageSetupDialog_Metacall_Callback cb) { qpagesetupdialog_metacall_callback = cb; }
    inline void setQPageSetupDialog_Exec_Callback(QPageSetupDialog_Exec_Callback cb) { qpagesetupdialog_exec_callback = cb; }
    inline void setQPageSetupDialog_Done_Callback(QPageSetupDialog_Done_Callback cb) { qpagesetupdialog_done_callback = cb; }
    inline void setQPageSetupDialog_SetVisible_Callback(QPageSetupDialog_SetVisible_Callback cb) { qpagesetupdialog_setvisible_callback = cb; }
    inline void setQPageSetupDialog_SizeHint_Callback(QPageSetupDialog_SizeHint_Callback cb) { qpagesetupdialog_sizehint_callback = cb; }
    inline void setQPageSetupDialog_MinimumSizeHint_Callback(QPageSetupDialog_MinimumSizeHint_Callback cb) { qpagesetupdialog_minimumsizehint_callback = cb; }
    inline void setQPageSetupDialog_Open_Callback(QPageSetupDialog_Open_Callback cb) { qpagesetupdialog_open_callback = cb; }
    inline void setQPageSetupDialog_Accept_Callback(QPageSetupDialog_Accept_Callback cb) { qpagesetupdialog_accept_callback = cb; }
    inline void setQPageSetupDialog_Reject_Callback(QPageSetupDialog_Reject_Callback cb) { qpagesetupdialog_reject_callback = cb; }
    inline void setQPageSetupDialog_KeyPressEvent_Callback(QPageSetupDialog_KeyPressEvent_Callback cb) { qpagesetupdialog_keypressevent_callback = cb; }
    inline void setQPageSetupDialog_CloseEvent_Callback(QPageSetupDialog_CloseEvent_Callback cb) { qpagesetupdialog_closeevent_callback = cb; }
    inline void setQPageSetupDialog_ShowEvent_Callback(QPageSetupDialog_ShowEvent_Callback cb) { qpagesetupdialog_showevent_callback = cb; }
    inline void setQPageSetupDialog_ResizeEvent_Callback(QPageSetupDialog_ResizeEvent_Callback cb) { qpagesetupdialog_resizeevent_callback = cb; }
    inline void setQPageSetupDialog_ContextMenuEvent_Callback(QPageSetupDialog_ContextMenuEvent_Callback cb) { qpagesetupdialog_contextmenuevent_callback = cb; }
    inline void setQPageSetupDialog_EventFilter_Callback(QPageSetupDialog_EventFilter_Callback cb) { qpagesetupdialog_eventfilter_callback = cb; }
    inline void setQPageSetupDialog_DevType_Callback(QPageSetupDialog_DevType_Callback cb) { qpagesetupdialog_devtype_callback = cb; }
    inline void setQPageSetupDialog_HeightForWidth_Callback(QPageSetupDialog_HeightForWidth_Callback cb) { qpagesetupdialog_heightforwidth_callback = cb; }
    inline void setQPageSetupDialog_HasHeightForWidth_Callback(QPageSetupDialog_HasHeightForWidth_Callback cb) { qpagesetupdialog_hasheightforwidth_callback = cb; }
    inline void setQPageSetupDialog_PaintEngine_Callback(QPageSetupDialog_PaintEngine_Callback cb) { qpagesetupdialog_paintengine_callback = cb; }
    inline void setQPageSetupDialog_Event_Callback(QPageSetupDialog_Event_Callback cb) { qpagesetupdialog_event_callback = cb; }
    inline void setQPageSetupDialog_MousePressEvent_Callback(QPageSetupDialog_MousePressEvent_Callback cb) { qpagesetupdialog_mousepressevent_callback = cb; }
    inline void setQPageSetupDialog_MouseReleaseEvent_Callback(QPageSetupDialog_MouseReleaseEvent_Callback cb) { qpagesetupdialog_mousereleaseevent_callback = cb; }
    inline void setQPageSetupDialog_MouseDoubleClickEvent_Callback(QPageSetupDialog_MouseDoubleClickEvent_Callback cb) { qpagesetupdialog_mousedoubleclickevent_callback = cb; }
    inline void setQPageSetupDialog_MouseMoveEvent_Callback(QPageSetupDialog_MouseMoveEvent_Callback cb) { qpagesetupdialog_mousemoveevent_callback = cb; }
    inline void setQPageSetupDialog_WheelEvent_Callback(QPageSetupDialog_WheelEvent_Callback cb) { qpagesetupdialog_wheelevent_callback = cb; }
    inline void setQPageSetupDialog_KeyReleaseEvent_Callback(QPageSetupDialog_KeyReleaseEvent_Callback cb) { qpagesetupdialog_keyreleaseevent_callback = cb; }
    inline void setQPageSetupDialog_FocusInEvent_Callback(QPageSetupDialog_FocusInEvent_Callback cb) { qpagesetupdialog_focusinevent_callback = cb; }
    inline void setQPageSetupDialog_FocusOutEvent_Callback(QPageSetupDialog_FocusOutEvent_Callback cb) { qpagesetupdialog_focusoutevent_callback = cb; }
    inline void setQPageSetupDialog_EnterEvent_Callback(QPageSetupDialog_EnterEvent_Callback cb) { qpagesetupdialog_enterevent_callback = cb; }
    inline void setQPageSetupDialog_LeaveEvent_Callback(QPageSetupDialog_LeaveEvent_Callback cb) { qpagesetupdialog_leaveevent_callback = cb; }
    inline void setQPageSetupDialog_PaintEvent_Callback(QPageSetupDialog_PaintEvent_Callback cb) { qpagesetupdialog_paintevent_callback = cb; }
    inline void setQPageSetupDialog_MoveEvent_Callback(QPageSetupDialog_MoveEvent_Callback cb) { qpagesetupdialog_moveevent_callback = cb; }
    inline void setQPageSetupDialog_TabletEvent_Callback(QPageSetupDialog_TabletEvent_Callback cb) { qpagesetupdialog_tabletevent_callback = cb; }
    inline void setQPageSetupDialog_ActionEvent_Callback(QPageSetupDialog_ActionEvent_Callback cb) { qpagesetupdialog_actionevent_callback = cb; }
    inline void setQPageSetupDialog_DragEnterEvent_Callback(QPageSetupDialog_DragEnterEvent_Callback cb) { qpagesetupdialog_dragenterevent_callback = cb; }
    inline void setQPageSetupDialog_DragMoveEvent_Callback(QPageSetupDialog_DragMoveEvent_Callback cb) { qpagesetupdialog_dragmoveevent_callback = cb; }
    inline void setQPageSetupDialog_DragLeaveEvent_Callback(QPageSetupDialog_DragLeaveEvent_Callback cb) { qpagesetupdialog_dragleaveevent_callback = cb; }
    inline void setQPageSetupDialog_DropEvent_Callback(QPageSetupDialog_DropEvent_Callback cb) { qpagesetupdialog_dropevent_callback = cb; }
    inline void setQPageSetupDialog_HideEvent_Callback(QPageSetupDialog_HideEvent_Callback cb) { qpagesetupdialog_hideevent_callback = cb; }
    inline void setQPageSetupDialog_NativeEvent_Callback(QPageSetupDialog_NativeEvent_Callback cb) { qpagesetupdialog_nativeevent_callback = cb; }
    inline void setQPageSetupDialog_ChangeEvent_Callback(QPageSetupDialog_ChangeEvent_Callback cb) { qpagesetupdialog_changeevent_callback = cb; }
    inline void setQPageSetupDialog_Metric_Callback(QPageSetupDialog_Metric_Callback cb) { qpagesetupdialog_metric_callback = cb; }
    inline void setQPageSetupDialog_InitPainter_Callback(QPageSetupDialog_InitPainter_Callback cb) { qpagesetupdialog_initpainter_callback = cb; }
    inline void setQPageSetupDialog_Redirected_Callback(QPageSetupDialog_Redirected_Callback cb) { qpagesetupdialog_redirected_callback = cb; }
    inline void setQPageSetupDialog_SharedPainter_Callback(QPageSetupDialog_SharedPainter_Callback cb) { qpagesetupdialog_sharedpainter_callback = cb; }
    inline void setQPageSetupDialog_InputMethodEvent_Callback(QPageSetupDialog_InputMethodEvent_Callback cb) { qpagesetupdialog_inputmethodevent_callback = cb; }
    inline void setQPageSetupDialog_InputMethodQuery_Callback(QPageSetupDialog_InputMethodQuery_Callback cb) { qpagesetupdialog_inputmethodquery_callback = cb; }
    inline void setQPageSetupDialog_FocusNextPrevChild_Callback(QPageSetupDialog_FocusNextPrevChild_Callback cb) { qpagesetupdialog_focusnextprevchild_callback = cb; }
    inline void setQPageSetupDialog_TimerEvent_Callback(QPageSetupDialog_TimerEvent_Callback cb) { qpagesetupdialog_timerevent_callback = cb; }
    inline void setQPageSetupDialog_ChildEvent_Callback(QPageSetupDialog_ChildEvent_Callback cb) { qpagesetupdialog_childevent_callback = cb; }
    inline void setQPageSetupDialog_CustomEvent_Callback(QPageSetupDialog_CustomEvent_Callback cb) { qpagesetupdialog_customevent_callback = cb; }
    inline void setQPageSetupDialog_ConnectNotify_Callback(QPageSetupDialog_ConnectNotify_Callback cb) { qpagesetupdialog_connectnotify_callback = cb; }
    inline void setQPageSetupDialog_DisconnectNotify_Callback(QPageSetupDialog_DisconnectNotify_Callback cb) { qpagesetupdialog_disconnectnotify_callback = cb; }
    inline void setQPageSetupDialog_AdjustPosition_Callback(QPageSetupDialog_AdjustPosition_Callback cb) { qpagesetupdialog_adjustposition_callback = cb; }
    inline void setQPageSetupDialog_UpdateMicroFocus_Callback(QPageSetupDialog_UpdateMicroFocus_Callback cb) { qpagesetupdialog_updatemicrofocus_callback = cb; }
    inline void setQPageSetupDialog_Create_Callback(QPageSetupDialog_Create_Callback cb) { qpagesetupdialog_create_callback = cb; }
    inline void setQPageSetupDialog_Destroy_Callback(QPageSetupDialog_Destroy_Callback cb) { qpagesetupdialog_destroy_callback = cb; }
    inline void setQPageSetupDialog_FocusNextChild_Callback(QPageSetupDialog_FocusNextChild_Callback cb) { qpagesetupdialog_focusnextchild_callback = cb; }
    inline void setQPageSetupDialog_FocusPreviousChild_Callback(QPageSetupDialog_FocusPreviousChild_Callback cb) { qpagesetupdialog_focuspreviouschild_callback = cb; }
    inline void setQPageSetupDialog_Sender_Callback(QPageSetupDialog_Sender_Callback cb) { qpagesetupdialog_sender_callback = cb; }
    inline void setQPageSetupDialog_SenderSignalIndex_Callback(QPageSetupDialog_SenderSignalIndex_Callback cb) { qpagesetupdialog_sendersignalindex_callback = cb; }
    inline void setQPageSetupDialog_Receivers_Callback(QPageSetupDialog_Receivers_Callback cb) { qpagesetupdialog_receivers_callback = cb; }
    inline void setQPageSetupDialog_IsSignalConnected_Callback(QPageSetupDialog_IsSignalConnected_Callback cb) { qpagesetupdialog_issignalconnected_callback = cb; }
    inline void setQPageSetupDialog_GetDecodedMetricF_Callback(QPageSetupDialog_GetDecodedMetricF_Callback cb) { qpagesetupdialog_getdecodedmetricf_callback = cb; }

    // Base flag setters
    inline void setQPageSetupDialog_MetaObject_IsBase(bool value) const { qpagesetupdialog_metaobject_isbase = value; }
    inline void setQPageSetupDialog_Metacast_IsBase(bool value) const { qpagesetupdialog_metacast_isbase = value; }
    inline void setQPageSetupDialog_Metacall_IsBase(bool value) const { qpagesetupdialog_metacall_isbase = value; }
    inline void setQPageSetupDialog_Exec_IsBase(bool value) const { qpagesetupdialog_exec_isbase = value; }
    inline void setQPageSetupDialog_Done_IsBase(bool value) const { qpagesetupdialog_done_isbase = value; }
    inline void setQPageSetupDialog_SetVisible_IsBase(bool value) const { qpagesetupdialog_setvisible_isbase = value; }
    inline void setQPageSetupDialog_SizeHint_IsBase(bool value) const { qpagesetupdialog_sizehint_isbase = value; }
    inline void setQPageSetupDialog_MinimumSizeHint_IsBase(bool value) const { qpagesetupdialog_minimumsizehint_isbase = value; }
    inline void setQPageSetupDialog_Open_IsBase(bool value) const { qpagesetupdialog_open_isbase = value; }
    inline void setQPageSetupDialog_Accept_IsBase(bool value) const { qpagesetupdialog_accept_isbase = value; }
    inline void setQPageSetupDialog_Reject_IsBase(bool value) const { qpagesetupdialog_reject_isbase = value; }
    inline void setQPageSetupDialog_KeyPressEvent_IsBase(bool value) const { qpagesetupdialog_keypressevent_isbase = value; }
    inline void setQPageSetupDialog_CloseEvent_IsBase(bool value) const { qpagesetupdialog_closeevent_isbase = value; }
    inline void setQPageSetupDialog_ShowEvent_IsBase(bool value) const { qpagesetupdialog_showevent_isbase = value; }
    inline void setQPageSetupDialog_ResizeEvent_IsBase(bool value) const { qpagesetupdialog_resizeevent_isbase = value; }
    inline void setQPageSetupDialog_ContextMenuEvent_IsBase(bool value) const { qpagesetupdialog_contextmenuevent_isbase = value; }
    inline void setQPageSetupDialog_EventFilter_IsBase(bool value) const { qpagesetupdialog_eventfilter_isbase = value; }
    inline void setQPageSetupDialog_DevType_IsBase(bool value) const { qpagesetupdialog_devtype_isbase = value; }
    inline void setQPageSetupDialog_HeightForWidth_IsBase(bool value) const { qpagesetupdialog_heightforwidth_isbase = value; }
    inline void setQPageSetupDialog_HasHeightForWidth_IsBase(bool value) const { qpagesetupdialog_hasheightforwidth_isbase = value; }
    inline void setQPageSetupDialog_PaintEngine_IsBase(bool value) const { qpagesetupdialog_paintengine_isbase = value; }
    inline void setQPageSetupDialog_Event_IsBase(bool value) const { qpagesetupdialog_event_isbase = value; }
    inline void setQPageSetupDialog_MousePressEvent_IsBase(bool value) const { qpagesetupdialog_mousepressevent_isbase = value; }
    inline void setQPageSetupDialog_MouseReleaseEvent_IsBase(bool value) const { qpagesetupdialog_mousereleaseevent_isbase = value; }
    inline void setQPageSetupDialog_MouseDoubleClickEvent_IsBase(bool value) const { qpagesetupdialog_mousedoubleclickevent_isbase = value; }
    inline void setQPageSetupDialog_MouseMoveEvent_IsBase(bool value) const { qpagesetupdialog_mousemoveevent_isbase = value; }
    inline void setQPageSetupDialog_WheelEvent_IsBase(bool value) const { qpagesetupdialog_wheelevent_isbase = value; }
    inline void setQPageSetupDialog_KeyReleaseEvent_IsBase(bool value) const { qpagesetupdialog_keyreleaseevent_isbase = value; }
    inline void setQPageSetupDialog_FocusInEvent_IsBase(bool value) const { qpagesetupdialog_focusinevent_isbase = value; }
    inline void setQPageSetupDialog_FocusOutEvent_IsBase(bool value) const { qpagesetupdialog_focusoutevent_isbase = value; }
    inline void setQPageSetupDialog_EnterEvent_IsBase(bool value) const { qpagesetupdialog_enterevent_isbase = value; }
    inline void setQPageSetupDialog_LeaveEvent_IsBase(bool value) const { qpagesetupdialog_leaveevent_isbase = value; }
    inline void setQPageSetupDialog_PaintEvent_IsBase(bool value) const { qpagesetupdialog_paintevent_isbase = value; }
    inline void setQPageSetupDialog_MoveEvent_IsBase(bool value) const { qpagesetupdialog_moveevent_isbase = value; }
    inline void setQPageSetupDialog_TabletEvent_IsBase(bool value) const { qpagesetupdialog_tabletevent_isbase = value; }
    inline void setQPageSetupDialog_ActionEvent_IsBase(bool value) const { qpagesetupdialog_actionevent_isbase = value; }
    inline void setQPageSetupDialog_DragEnterEvent_IsBase(bool value) const { qpagesetupdialog_dragenterevent_isbase = value; }
    inline void setQPageSetupDialog_DragMoveEvent_IsBase(bool value) const { qpagesetupdialog_dragmoveevent_isbase = value; }
    inline void setQPageSetupDialog_DragLeaveEvent_IsBase(bool value) const { qpagesetupdialog_dragleaveevent_isbase = value; }
    inline void setQPageSetupDialog_DropEvent_IsBase(bool value) const { qpagesetupdialog_dropevent_isbase = value; }
    inline void setQPageSetupDialog_HideEvent_IsBase(bool value) const { qpagesetupdialog_hideevent_isbase = value; }
    inline void setQPageSetupDialog_NativeEvent_IsBase(bool value) const { qpagesetupdialog_nativeevent_isbase = value; }
    inline void setQPageSetupDialog_ChangeEvent_IsBase(bool value) const { qpagesetupdialog_changeevent_isbase = value; }
    inline void setQPageSetupDialog_Metric_IsBase(bool value) const { qpagesetupdialog_metric_isbase = value; }
    inline void setQPageSetupDialog_InitPainter_IsBase(bool value) const { qpagesetupdialog_initpainter_isbase = value; }
    inline void setQPageSetupDialog_Redirected_IsBase(bool value) const { qpagesetupdialog_redirected_isbase = value; }
    inline void setQPageSetupDialog_SharedPainter_IsBase(bool value) const { qpagesetupdialog_sharedpainter_isbase = value; }
    inline void setQPageSetupDialog_InputMethodEvent_IsBase(bool value) const { qpagesetupdialog_inputmethodevent_isbase = value; }
    inline void setQPageSetupDialog_InputMethodQuery_IsBase(bool value) const { qpagesetupdialog_inputmethodquery_isbase = value; }
    inline void setQPageSetupDialog_FocusNextPrevChild_IsBase(bool value) const { qpagesetupdialog_focusnextprevchild_isbase = value; }
    inline void setQPageSetupDialog_TimerEvent_IsBase(bool value) const { qpagesetupdialog_timerevent_isbase = value; }
    inline void setQPageSetupDialog_ChildEvent_IsBase(bool value) const { qpagesetupdialog_childevent_isbase = value; }
    inline void setQPageSetupDialog_CustomEvent_IsBase(bool value) const { qpagesetupdialog_customevent_isbase = value; }
    inline void setQPageSetupDialog_ConnectNotify_IsBase(bool value) const { qpagesetupdialog_connectnotify_isbase = value; }
    inline void setQPageSetupDialog_DisconnectNotify_IsBase(bool value) const { qpagesetupdialog_disconnectnotify_isbase = value; }
    inline void setQPageSetupDialog_AdjustPosition_IsBase(bool value) const { qpagesetupdialog_adjustposition_isbase = value; }
    inline void setQPageSetupDialog_UpdateMicroFocus_IsBase(bool value) const { qpagesetupdialog_updatemicrofocus_isbase = value; }
    inline void setQPageSetupDialog_Create_IsBase(bool value) const { qpagesetupdialog_create_isbase = value; }
    inline void setQPageSetupDialog_Destroy_IsBase(bool value) const { qpagesetupdialog_destroy_isbase = value; }
    inline void setQPageSetupDialog_FocusNextChild_IsBase(bool value) const { qpagesetupdialog_focusnextchild_isbase = value; }
    inline void setQPageSetupDialog_FocusPreviousChild_IsBase(bool value) const { qpagesetupdialog_focuspreviouschild_isbase = value; }
    inline void setQPageSetupDialog_Sender_IsBase(bool value) const { qpagesetupdialog_sender_isbase = value; }
    inline void setQPageSetupDialog_SenderSignalIndex_IsBase(bool value) const { qpagesetupdialog_sendersignalindex_isbase = value; }
    inline void setQPageSetupDialog_Receivers_IsBase(bool value) const { qpagesetupdialog_receivers_isbase = value; }
    inline void setQPageSetupDialog_IsSignalConnected_IsBase(bool value) const { qpagesetupdialog_issignalconnected_isbase = value; }
    inline void setQPageSetupDialog_GetDecodedMetricF_IsBase(bool value) const { qpagesetupdialog_getdecodedmetricf_isbase = value; }

    // Virtual method for C ABI access and custom callback
    virtual const QMetaObject* metaObject() const override {
        if (qpagesetupdialog_metaobject_isbase) {
            qpagesetupdialog_metaobject_isbase = false;
            return QPageSetupDialog::metaObject();
        }
        auto metaobject_cb = qpagesetupdialog_metaobject_callback;
        if (metaobject_cb) {
            QMetaObject* callback_ret = metaobject_cb();
            return callback_ret;
        }
        return QPageSetupDialog::metaObject();
    }

    // Virtual method for C ABI access and custom callback
    virtual void* qt_metacast(const char* param1) override {
        if (qpagesetupdialog_metacast_isbase) {
            qpagesetupdialog_metacast_isbase = false;
            return QPageSetupDialog::qt_metacast(param1);
        }
        auto metacast_cb = qpagesetupdialog_metacast_callback;
        if (metacast_cb) {
            const char* cbval1 = (const char*)param1;

            void* callback_ret = metacast_cb(this, cbval1);
            return callback_ret;
        }
        return QPageSetupDialog::qt_metacast(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (qpagesetupdialog_metacall_isbase) {
            qpagesetupdialog_metacall_isbase = false;
            return QPageSetupDialog::qt_metacall(param1, param2, param3);
        }
        auto metacall_cb = qpagesetupdialog_metacall_callback;
        if (metacall_cb) {
            int cbval1 = static_cast<int>(param1);
            int cbval2 = param2;
            void** cbval3 = param3;

            int callback_ret = metacall_cb(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        }
        return QPageSetupDialog::qt_metacall(param1, param2, param3);
    }

    // Virtual method for C ABI access and custom callback
    virtual int exec() override {
        if (qpagesetupdialog_exec_isbase) {
            qpagesetupdialog_exec_isbase = false;
            return QPageSetupDialog::exec();
        }
        auto exec_cb = qpagesetupdialog_exec_callback;
        if (exec_cb) {
            int callback_ret = exec_cb();
            return static_cast<int>(callback_ret);
        }
        return QPageSetupDialog::exec();
    }

    // Virtual method for C ABI access and custom callback
    virtual void done(int result) override {
        if (qpagesetupdialog_done_isbase) {
            qpagesetupdialog_done_isbase = false;
            QPageSetupDialog::done(result);
            return;
        }
        auto done_cb = qpagesetupdialog_done_callback;
        if (done_cb) {
            int cbval1 = result;

            done_cb(this, cbval1);
            return;
        }
        QPageSetupDialog::done(result);
    }

    // Virtual method for C ABI access and custom callback
    virtual void setVisible(bool visible) override {
        if (qpagesetupdialog_setvisible_isbase) {
            qpagesetupdialog_setvisible_isbase = false;
            QPageSetupDialog::setVisible(visible);
            return;
        }
        auto setvisible_cb = qpagesetupdialog_setvisible_callback;
        if (setvisible_cb) {
            bool cbval1 = visible;

            setvisible_cb(this, cbval1);
            return;
        }
        QPageSetupDialog::setVisible(visible);
    }

    // Virtual method for C ABI access and custom callback
    virtual QSize sizeHint() const override {
        if (qpagesetupdialog_sizehint_isbase) {
            qpagesetupdialog_sizehint_isbase = false;
            return QPageSetupDialog::sizeHint();
        }
        auto sizehint_cb = qpagesetupdialog_sizehint_callback;
        if (sizehint_cb) {
            QSize* callback_ret = sizehint_cb();
            return *callback_ret;
        }
        return QPageSetupDialog::sizeHint();
    }

    // Virtual method for C ABI access and custom callback
    virtual QSize minimumSizeHint() const override {
        if (qpagesetupdialog_minimumsizehint_isbase) {
            qpagesetupdialog_minimumsizehint_isbase = false;
            return QPageSetupDialog::minimumSizeHint();
        }
        auto minimumsizehint_cb = qpagesetupdialog_minimumsizehint_callback;
        if (minimumsizehint_cb) {
            QSize* callback_ret = minimumsizehint_cb();
            return *callback_ret;
        }
        return QPageSetupDialog::minimumSizeHint();
    }

    // Virtual method for C ABI access and custom callback
    virtual void open() override {
        if (qpagesetupdialog_open_isbase) {
            qpagesetupdialog_open_isbase = false;
            QPageSetupDialog::open();
            return;
        }
        auto open_cb = qpagesetupdialog_open_callback;
        if (open_cb) {
            open_cb();
            return;
        }
        QPageSetupDialog::open();
    }

    // Virtual method for C ABI access and custom callback
    virtual void accept() override {
        if (qpagesetupdialog_accept_isbase) {
            qpagesetupdialog_accept_isbase = false;
            QPageSetupDialog::accept();
            return;
        }
        auto accept_cb = qpagesetupdialog_accept_callback;
        if (accept_cb) {
            accept_cb();
            return;
        }
        QPageSetupDialog::accept();
    }

    // Virtual method for C ABI access and custom callback
    virtual void reject() override {
        if (qpagesetupdialog_reject_isbase) {
            qpagesetupdialog_reject_isbase = false;
            QPageSetupDialog::reject();
            return;
        }
        auto reject_cb = qpagesetupdialog_reject_callback;
        if (reject_cb) {
            reject_cb();
            return;
        }
        QPageSetupDialog::reject();
    }

    // Virtual method for C ABI access and custom callback
    virtual void keyPressEvent(QKeyEvent* param1) override {
        if (qpagesetupdialog_keypressevent_isbase) {
            qpagesetupdialog_keypressevent_isbase = false;
            QPageSetupDialog::keyPressEvent(param1);
            return;
        }
        auto keypressevent_cb = qpagesetupdialog_keypressevent_callback;
        if (keypressevent_cb) {
            QKeyEvent* cbval1 = param1;

            keypressevent_cb(this, cbval1);
            return;
        }
        QPageSetupDialog::keyPressEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual void closeEvent(QCloseEvent* param1) override {
        if (qpagesetupdialog_closeevent_isbase) {
            qpagesetupdialog_closeevent_isbase = false;
            QPageSetupDialog::closeEvent(param1);
            return;
        }
        auto closeevent_cb = qpagesetupdialog_closeevent_callback;
        if (closeevent_cb) {
            QCloseEvent* cbval1 = param1;

            closeevent_cb(this, cbval1);
            return;
        }
        QPageSetupDialog::closeEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual void showEvent(QShowEvent* param1) override {
        if (qpagesetupdialog_showevent_isbase) {
            qpagesetupdialog_showevent_isbase = false;
            QPageSetupDialog::showEvent(param1);
            return;
        }
        auto showevent_cb = qpagesetupdialog_showevent_callback;
        if (showevent_cb) {
            QShowEvent* cbval1 = param1;

            showevent_cb(this, cbval1);
            return;
        }
        QPageSetupDialog::showEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual void resizeEvent(QResizeEvent* param1) override {
        if (qpagesetupdialog_resizeevent_isbase) {
            qpagesetupdialog_resizeevent_isbase = false;
            QPageSetupDialog::resizeEvent(param1);
            return;
        }
        auto resizeevent_cb = qpagesetupdialog_resizeevent_callback;
        if (resizeevent_cb) {
            QResizeEvent* cbval1 = param1;

            resizeevent_cb(this, cbval1);
            return;
        }
        QPageSetupDialog::resizeEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual void contextMenuEvent(QContextMenuEvent* param1) override {
        if (qpagesetupdialog_contextmenuevent_isbase) {
            qpagesetupdialog_contextmenuevent_isbase = false;
            QPageSetupDialog::contextMenuEvent(param1);
            return;
        }
        auto contextmenuevent_cb = qpagesetupdialog_contextmenuevent_callback;
        if (contextmenuevent_cb) {
            QContextMenuEvent* cbval1 = param1;

            contextmenuevent_cb(this, cbval1);
            return;
        }
        QPageSetupDialog::contextMenuEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* param1, QEvent* param2) override {
        if (qpagesetupdialog_eventfilter_isbase) {
            qpagesetupdialog_eventfilter_isbase = false;
            return QPageSetupDialog::eventFilter(param1, param2);
        }
        auto eventfilter_cb = qpagesetupdialog_eventfilter_callback;
        if (eventfilter_cb) {
            QObject* cbval1 = param1;
            QEvent* cbval2 = param2;

            bool callback_ret = eventfilter_cb(this, cbval1, cbval2);
            return callback_ret;
        }
        return QPageSetupDialog::eventFilter(param1, param2);
    }

    // Virtual method for C ABI access and custom callback
    virtual int devType() const override {
        if (qpagesetupdialog_devtype_isbase) {
            qpagesetupdialog_devtype_isbase = false;
            return QPageSetupDialog::devType();
        }
        auto devtype_cb = qpagesetupdialog_devtype_callback;
        if (devtype_cb) {
            int callback_ret = devtype_cb();
            return static_cast<int>(callback_ret);
        }
        return QPageSetupDialog::devType();
    }

    // Virtual method for C ABI access and custom callback
    virtual int heightForWidth(int param1) const override {
        if (qpagesetupdialog_heightforwidth_isbase) {
            qpagesetupdialog_heightforwidth_isbase = false;
            return QPageSetupDialog::heightForWidth(param1);
        }
        auto heightforwidth_cb = qpagesetupdialog_heightforwidth_callback;
        if (heightforwidth_cb) {
            int cbval1 = param1;

            int callback_ret = heightforwidth_cb(this, cbval1);
            return static_cast<int>(callback_ret);
        }
        return QPageSetupDialog::heightForWidth(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool hasHeightForWidth() const override {
        if (qpagesetupdialog_hasheightforwidth_isbase) {
            qpagesetupdialog_hasheightforwidth_isbase = false;
            return QPageSetupDialog::hasHeightForWidth();
        }
        auto hasheightforwidth_cb = qpagesetupdialog_hasheightforwidth_callback;
        if (hasheightforwidth_cb) {
            bool callback_ret = hasheightforwidth_cb();
            return callback_ret;
        }
        return QPageSetupDialog::hasHeightForWidth();
    }

    // Virtual method for C ABI access and custom callback
    virtual QPaintEngine* paintEngine() const override {
        if (qpagesetupdialog_paintengine_isbase) {
            qpagesetupdialog_paintengine_isbase = false;
            return QPageSetupDialog::paintEngine();
        }
        auto paintengine_cb = qpagesetupdialog_paintengine_callback;
        if (paintengine_cb) {
            QPaintEngine* callback_ret = paintengine_cb();
            return callback_ret;
        }
        return QPageSetupDialog::paintEngine();
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* event) override {
        if (qpagesetupdialog_event_isbase) {
            qpagesetupdialog_event_isbase = false;
            return QPageSetupDialog::event(event);
        }
        auto event_cb = qpagesetupdialog_event_callback;
        if (event_cb) {
            QEvent* cbval1 = event;

            bool callback_ret = event_cb(this, cbval1);
            return callback_ret;
        }
        return QPageSetupDialog::event(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void mousePressEvent(QMouseEvent* event) override {
        if (qpagesetupdialog_mousepressevent_isbase) {
            qpagesetupdialog_mousepressevent_isbase = false;
            QPageSetupDialog::mousePressEvent(event);
            return;
        }
        auto mousepressevent_cb = qpagesetupdialog_mousepressevent_callback;
        if (mousepressevent_cb) {
            QMouseEvent* cbval1 = event;

            mousepressevent_cb(this, cbval1);
            return;
        }
        QPageSetupDialog::mousePressEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseReleaseEvent(QMouseEvent* event) override {
        if (qpagesetupdialog_mousereleaseevent_isbase) {
            qpagesetupdialog_mousereleaseevent_isbase = false;
            QPageSetupDialog::mouseReleaseEvent(event);
            return;
        }
        auto mousereleaseevent_cb = qpagesetupdialog_mousereleaseevent_callback;
        if (mousereleaseevent_cb) {
            QMouseEvent* cbval1 = event;

            mousereleaseevent_cb(this, cbval1);
            return;
        }
        QPageSetupDialog::mouseReleaseEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseDoubleClickEvent(QMouseEvent* event) override {
        if (qpagesetupdialog_mousedoubleclickevent_isbase) {
            qpagesetupdialog_mousedoubleclickevent_isbase = false;
            QPageSetupDialog::mouseDoubleClickEvent(event);
            return;
        }
        auto mousedoubleclickevent_cb = qpagesetupdialog_mousedoubleclickevent_callback;
        if (mousedoubleclickevent_cb) {
            QMouseEvent* cbval1 = event;

            mousedoubleclickevent_cb(this, cbval1);
            return;
        }
        QPageSetupDialog::mouseDoubleClickEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseMoveEvent(QMouseEvent* event) override {
        if (qpagesetupdialog_mousemoveevent_isbase) {
            qpagesetupdialog_mousemoveevent_isbase = false;
            QPageSetupDialog::mouseMoveEvent(event);
            return;
        }
        auto mousemoveevent_cb = qpagesetupdialog_mousemoveevent_callback;
        if (mousemoveevent_cb) {
            QMouseEvent* cbval1 = event;

            mousemoveevent_cb(this, cbval1);
            return;
        }
        QPageSetupDialog::mouseMoveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void wheelEvent(QWheelEvent* event) override {
        if (qpagesetupdialog_wheelevent_isbase) {
            qpagesetupdialog_wheelevent_isbase = false;
            QPageSetupDialog::wheelEvent(event);
            return;
        }
        auto wheelevent_cb = qpagesetupdialog_wheelevent_callback;
        if (wheelevent_cb) {
            QWheelEvent* cbval1 = event;

            wheelevent_cb(this, cbval1);
            return;
        }
        QPageSetupDialog::wheelEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void keyReleaseEvent(QKeyEvent* event) override {
        if (qpagesetupdialog_keyreleaseevent_isbase) {
            qpagesetupdialog_keyreleaseevent_isbase = false;
            QPageSetupDialog::keyReleaseEvent(event);
            return;
        }
        auto keyreleaseevent_cb = qpagesetupdialog_keyreleaseevent_callback;
        if (keyreleaseevent_cb) {
            QKeyEvent* cbval1 = event;

            keyreleaseevent_cb(this, cbval1);
            return;
        }
        QPageSetupDialog::keyReleaseEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void focusInEvent(QFocusEvent* event) override {
        if (qpagesetupdialog_focusinevent_isbase) {
            qpagesetupdialog_focusinevent_isbase = false;
            QPageSetupDialog::focusInEvent(event);
            return;
        }
        auto focusinevent_cb = qpagesetupdialog_focusinevent_callback;
        if (focusinevent_cb) {
            QFocusEvent* cbval1 = event;

            focusinevent_cb(this, cbval1);
            return;
        }
        QPageSetupDialog::focusInEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void focusOutEvent(QFocusEvent* event) override {
        if (qpagesetupdialog_focusoutevent_isbase) {
            qpagesetupdialog_focusoutevent_isbase = false;
            QPageSetupDialog::focusOutEvent(event);
            return;
        }
        auto focusoutevent_cb = qpagesetupdialog_focusoutevent_callback;
        if (focusoutevent_cb) {
            QFocusEvent* cbval1 = event;

            focusoutevent_cb(this, cbval1);
            return;
        }
        QPageSetupDialog::focusOutEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void enterEvent(QEnterEvent* event) override {
        if (qpagesetupdialog_enterevent_isbase) {
            qpagesetupdialog_enterevent_isbase = false;
            QPageSetupDialog::enterEvent(event);
            return;
        }
        auto enterevent_cb = qpagesetupdialog_enterevent_callback;
        if (enterevent_cb) {
            QEnterEvent* cbval1 = event;

            enterevent_cb(this, cbval1);
            return;
        }
        QPageSetupDialog::enterEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void leaveEvent(QEvent* event) override {
        if (qpagesetupdialog_leaveevent_isbase) {
            qpagesetupdialog_leaveevent_isbase = false;
            QPageSetupDialog::leaveEvent(event);
            return;
        }
        auto leaveevent_cb = qpagesetupdialog_leaveevent_callback;
        if (leaveevent_cb) {
            QEvent* cbval1 = event;

            leaveevent_cb(this, cbval1);
            return;
        }
        QPageSetupDialog::leaveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void paintEvent(QPaintEvent* event) override {
        if (qpagesetupdialog_paintevent_isbase) {
            qpagesetupdialog_paintevent_isbase = false;
            QPageSetupDialog::paintEvent(event);
            return;
        }
        auto paintevent_cb = qpagesetupdialog_paintevent_callback;
        if (paintevent_cb) {
            QPaintEvent* cbval1 = event;

            paintevent_cb(this, cbval1);
            return;
        }
        QPageSetupDialog::paintEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void moveEvent(QMoveEvent* event) override {
        if (qpagesetupdialog_moveevent_isbase) {
            qpagesetupdialog_moveevent_isbase = false;
            QPageSetupDialog::moveEvent(event);
            return;
        }
        auto moveevent_cb = qpagesetupdialog_moveevent_callback;
        if (moveevent_cb) {
            QMoveEvent* cbval1 = event;

            moveevent_cb(this, cbval1);
            return;
        }
        QPageSetupDialog::moveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void tabletEvent(QTabletEvent* event) override {
        if (qpagesetupdialog_tabletevent_isbase) {
            qpagesetupdialog_tabletevent_isbase = false;
            QPageSetupDialog::tabletEvent(event);
            return;
        }
        auto tabletevent_cb = qpagesetupdialog_tabletevent_callback;
        if (tabletevent_cb) {
            QTabletEvent* cbval1 = event;

            tabletevent_cb(this, cbval1);
            return;
        }
        QPageSetupDialog::tabletEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void actionEvent(QActionEvent* event) override {
        if (qpagesetupdialog_actionevent_isbase) {
            qpagesetupdialog_actionevent_isbase = false;
            QPageSetupDialog::actionEvent(event);
            return;
        }
        auto actionevent_cb = qpagesetupdialog_actionevent_callback;
        if (actionevent_cb) {
            QActionEvent* cbval1 = event;

            actionevent_cb(this, cbval1);
            return;
        }
        QPageSetupDialog::actionEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragEnterEvent(QDragEnterEvent* event) override {
        if (qpagesetupdialog_dragenterevent_isbase) {
            qpagesetupdialog_dragenterevent_isbase = false;
            QPageSetupDialog::dragEnterEvent(event);
            return;
        }
        auto dragenterevent_cb = qpagesetupdialog_dragenterevent_callback;
        if (dragenterevent_cb) {
            QDragEnterEvent* cbval1 = event;

            dragenterevent_cb(this, cbval1);
            return;
        }
        QPageSetupDialog::dragEnterEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragMoveEvent(QDragMoveEvent* event) override {
        if (qpagesetupdialog_dragmoveevent_isbase) {
            qpagesetupdialog_dragmoveevent_isbase = false;
            QPageSetupDialog::dragMoveEvent(event);
            return;
        }
        auto dragmoveevent_cb = qpagesetupdialog_dragmoveevent_callback;
        if (dragmoveevent_cb) {
            QDragMoveEvent* cbval1 = event;

            dragmoveevent_cb(this, cbval1);
            return;
        }
        QPageSetupDialog::dragMoveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragLeaveEvent(QDragLeaveEvent* event) override {
        if (qpagesetupdialog_dragleaveevent_isbase) {
            qpagesetupdialog_dragleaveevent_isbase = false;
            QPageSetupDialog::dragLeaveEvent(event);
            return;
        }
        auto dragleaveevent_cb = qpagesetupdialog_dragleaveevent_callback;
        if (dragleaveevent_cb) {
            QDragLeaveEvent* cbval1 = event;

            dragleaveevent_cb(this, cbval1);
            return;
        }
        QPageSetupDialog::dragLeaveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void dropEvent(QDropEvent* event) override {
        if (qpagesetupdialog_dropevent_isbase) {
            qpagesetupdialog_dropevent_isbase = false;
            QPageSetupDialog::dropEvent(event);
            return;
        }
        auto dropevent_cb = qpagesetupdialog_dropevent_callback;
        if (dropevent_cb) {
            QDropEvent* cbval1 = event;

            dropevent_cb(this, cbval1);
            return;
        }
        QPageSetupDialog::dropEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void hideEvent(QHideEvent* event) override {
        if (qpagesetupdialog_hideevent_isbase) {
            qpagesetupdialog_hideevent_isbase = false;
            QPageSetupDialog::hideEvent(event);
            return;
        }
        auto hideevent_cb = qpagesetupdialog_hideevent_callback;
        if (hideevent_cb) {
            QHideEvent* cbval1 = event;

            hideevent_cb(this, cbval1);
            return;
        }
        QPageSetupDialog::hideEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool nativeEvent(const QByteArray& eventType, void* message, qintptr* result) override {
        if (qpagesetupdialog_nativeevent_isbase) {
            qpagesetupdialog_nativeevent_isbase = false;
            return QPageSetupDialog::nativeEvent(eventType, message, result);
        }
        auto nativeevent_cb = qpagesetupdialog_nativeevent_callback;
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
        return QPageSetupDialog::nativeEvent(eventType, message, result);
    }

    // Virtual method for C ABI access and custom callback
    virtual void changeEvent(QEvent* param1) override {
        if (qpagesetupdialog_changeevent_isbase) {
            qpagesetupdialog_changeevent_isbase = false;
            QPageSetupDialog::changeEvent(param1);
            return;
        }
        auto changeevent_cb = qpagesetupdialog_changeevent_callback;
        if (changeevent_cb) {
            QEvent* cbval1 = param1;

            changeevent_cb(this, cbval1);
            return;
        }
        QPageSetupDialog::changeEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual int metric(QPaintDevice::PaintDeviceMetric param1) const override {
        if (qpagesetupdialog_metric_isbase) {
            qpagesetupdialog_metric_isbase = false;
            return QPageSetupDialog::metric(param1);
        }
        auto metric_cb = qpagesetupdialog_metric_callback;
        if (metric_cb) {
            int cbval1 = static_cast<int>(param1);

            int callback_ret = metric_cb(this, cbval1);
            return static_cast<int>(callback_ret);
        }
        return QPageSetupDialog::metric(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual void initPainter(QPainter* painter) const override {
        if (qpagesetupdialog_initpainter_isbase) {
            qpagesetupdialog_initpainter_isbase = false;
            QPageSetupDialog::initPainter(painter);
            return;
        }
        auto initpainter_cb = qpagesetupdialog_initpainter_callback;
        if (initpainter_cb) {
            QPainter* cbval1 = painter;

            initpainter_cb(this, cbval1);
            return;
        }
        QPageSetupDialog::initPainter(painter);
    }

    // Virtual method for C ABI access and custom callback
    virtual QPaintDevice* redirected(QPoint* offset) const override {
        if (qpagesetupdialog_redirected_isbase) {
            qpagesetupdialog_redirected_isbase = false;
            return QPageSetupDialog::redirected(offset);
        }
        auto redirected_cb = qpagesetupdialog_redirected_callback;
        if (redirected_cb) {
            QPoint* cbval1 = offset;

            QPaintDevice* callback_ret = redirected_cb(this, cbval1);
            return callback_ret;
        }
        return QPageSetupDialog::redirected(offset);
    }

    // Virtual method for C ABI access and custom callback
    virtual QPainter* sharedPainter() const override {
        if (qpagesetupdialog_sharedpainter_isbase) {
            qpagesetupdialog_sharedpainter_isbase = false;
            return QPageSetupDialog::sharedPainter();
        }
        auto sharedpainter_cb = qpagesetupdialog_sharedpainter_callback;
        if (sharedpainter_cb) {
            QPainter* callback_ret = sharedpainter_cb();
            return callback_ret;
        }
        return QPageSetupDialog::sharedPainter();
    }

    // Virtual method for C ABI access and custom callback
    virtual void inputMethodEvent(QInputMethodEvent* param1) override {
        if (qpagesetupdialog_inputmethodevent_isbase) {
            qpagesetupdialog_inputmethodevent_isbase = false;
            QPageSetupDialog::inputMethodEvent(param1);
            return;
        }
        auto inputmethodevent_cb = qpagesetupdialog_inputmethodevent_callback;
        if (inputmethodevent_cb) {
            QInputMethodEvent* cbval1 = param1;

            inputmethodevent_cb(this, cbval1);
            return;
        }
        QPageSetupDialog::inputMethodEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual QVariant inputMethodQuery(Qt::InputMethodQuery param1) const override {
        if (qpagesetupdialog_inputmethodquery_isbase) {
            qpagesetupdialog_inputmethodquery_isbase = false;
            return QPageSetupDialog::inputMethodQuery(param1);
        }
        auto inputmethodquery_cb = qpagesetupdialog_inputmethodquery_callback;
        if (inputmethodquery_cb) {
            int cbval1 = static_cast<int>(param1);

            QVariant* callback_ret = inputmethodquery_cb(this, cbval1);
            return *callback_ret;
        }
        return QPageSetupDialog::inputMethodQuery(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool focusNextPrevChild(bool next) override {
        if (qpagesetupdialog_focusnextprevchild_isbase) {
            qpagesetupdialog_focusnextprevchild_isbase = false;
            return QPageSetupDialog::focusNextPrevChild(next);
        }
        auto focusnextprevchild_cb = qpagesetupdialog_focusnextprevchild_callback;
        if (focusnextprevchild_cb) {
            bool cbval1 = next;

            bool callback_ret = focusnextprevchild_cb(this, cbval1);
            return callback_ret;
        }
        return QPageSetupDialog::focusNextPrevChild(next);
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (qpagesetupdialog_timerevent_isbase) {
            qpagesetupdialog_timerevent_isbase = false;
            QPageSetupDialog::timerEvent(event);
            return;
        }
        auto timerevent_cb = qpagesetupdialog_timerevent_callback;
        if (timerevent_cb) {
            QTimerEvent* cbval1 = event;

            timerevent_cb(this, cbval1);
            return;
        }
        QPageSetupDialog::timerEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (qpagesetupdialog_childevent_isbase) {
            qpagesetupdialog_childevent_isbase = false;
            QPageSetupDialog::childEvent(event);
            return;
        }
        auto childevent_cb = qpagesetupdialog_childevent_callback;
        if (childevent_cb) {
            QChildEvent* cbval1 = event;

            childevent_cb(this, cbval1);
            return;
        }
        QPageSetupDialog::childEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (qpagesetupdialog_customevent_isbase) {
            qpagesetupdialog_customevent_isbase = false;
            QPageSetupDialog::customEvent(event);
            return;
        }
        auto customevent_cb = qpagesetupdialog_customevent_callback;
        if (customevent_cb) {
            QEvent* cbval1 = event;

            customevent_cb(this, cbval1);
            return;
        }
        QPageSetupDialog::customEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (qpagesetupdialog_connectnotify_isbase) {
            qpagesetupdialog_connectnotify_isbase = false;
            QPageSetupDialog::connectNotify(signal);
            return;
        }
        auto connectnotify_cb = qpagesetupdialog_connectnotify_callback;
        if (connectnotify_cb) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            connectnotify_cb(this, cbval1);
            return;
        }
        QPageSetupDialog::connectNotify(signal);
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (qpagesetupdialog_disconnectnotify_isbase) {
            qpagesetupdialog_disconnectnotify_isbase = false;
            QPageSetupDialog::disconnectNotify(signal);
            return;
        }
        auto disconnectnotify_cb = qpagesetupdialog_disconnectnotify_callback;
        if (disconnectnotify_cb) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            disconnectnotify_cb(this, cbval1);
            return;
        }
        QPageSetupDialog::disconnectNotify(signal);
    }

    // Virtual method for C ABI access and custom callback
    void adjustPosition(QWidget* param1) {
        if (qpagesetupdialog_adjustposition_isbase) {
            qpagesetupdialog_adjustposition_isbase = false;
            QPageSetupDialog::adjustPosition(param1);
            return;
        }
        auto adjustposition_cb = qpagesetupdialog_adjustposition_callback;
        if (adjustposition_cb) {
            QWidget* cbval1 = param1;

            adjustposition_cb(this, cbval1);
            return;
        }
        QPageSetupDialog::adjustPosition(param1);
    }

    // Virtual method for C ABI access and custom callback
    void updateMicroFocus() {
        if (qpagesetupdialog_updatemicrofocus_isbase) {
            qpagesetupdialog_updatemicrofocus_isbase = false;
            QPageSetupDialog::updateMicroFocus();
            return;
        }
        auto updatemicrofocus_cb = qpagesetupdialog_updatemicrofocus_callback;
        if (updatemicrofocus_cb) {
            updatemicrofocus_cb();
            return;
        }
        QPageSetupDialog::updateMicroFocus();
    }

    // Virtual method for C ABI access and custom callback
    void create() {
        if (qpagesetupdialog_create_isbase) {
            qpagesetupdialog_create_isbase = false;
            QPageSetupDialog::create();
            return;
        }
        auto create_cb = qpagesetupdialog_create_callback;
        if (create_cb) {
            create_cb();
            return;
        }
        QPageSetupDialog::create();
    }

    // Virtual method for C ABI access and custom callback
    void destroy() {
        if (qpagesetupdialog_destroy_isbase) {
            qpagesetupdialog_destroy_isbase = false;
            QPageSetupDialog::destroy();
            return;
        }
        auto destroy_cb = qpagesetupdialog_destroy_callback;
        if (destroy_cb) {
            destroy_cb();
            return;
        }
        QPageSetupDialog::destroy();
    }

    // Virtual method for C ABI access and custom callback
    bool focusNextChild() {
        if (qpagesetupdialog_focusnextchild_isbase) {
            qpagesetupdialog_focusnextchild_isbase = false;
            return QPageSetupDialog::focusNextChild();
        }
        auto focusnextchild_cb = qpagesetupdialog_focusnextchild_callback;
        if (focusnextchild_cb) {
            bool callback_ret = focusnextchild_cb();
            return callback_ret;
        }
        return QPageSetupDialog::focusNextChild();
    }

    // Virtual method for C ABI access and custom callback
    bool focusPreviousChild() {
        if (qpagesetupdialog_focuspreviouschild_isbase) {
            qpagesetupdialog_focuspreviouschild_isbase = false;
            return QPageSetupDialog::focusPreviousChild();
        }
        auto focuspreviouschild_cb = qpagesetupdialog_focuspreviouschild_callback;
        if (focuspreviouschild_cb) {
            bool callback_ret = focuspreviouschild_cb();
            return callback_ret;
        }
        return QPageSetupDialog::focusPreviousChild();
    }

    // Virtual method for C ABI access and custom callback
    QObject* sender() const {
        if (qpagesetupdialog_sender_isbase) {
            qpagesetupdialog_sender_isbase = false;
            return QPageSetupDialog::sender();
        }
        auto sender_cb = qpagesetupdialog_sender_callback;
        if (sender_cb) {
            QObject* callback_ret = sender_cb();
            return callback_ret;
        }
        return QPageSetupDialog::sender();
    }

    // Virtual method for C ABI access and custom callback
    int senderSignalIndex() const {
        if (qpagesetupdialog_sendersignalindex_isbase) {
            qpagesetupdialog_sendersignalindex_isbase = false;
            return QPageSetupDialog::senderSignalIndex();
        }
        auto sendersignalindex_cb = qpagesetupdialog_sendersignalindex_callback;
        if (sendersignalindex_cb) {
            int callback_ret = sendersignalindex_cb();
            return static_cast<int>(callback_ret);
        }
        return QPageSetupDialog::senderSignalIndex();
    }

    // Virtual method for C ABI access and custom callback
    int receivers(const char* signal) const {
        if (qpagesetupdialog_receivers_isbase) {
            qpagesetupdialog_receivers_isbase = false;
            return QPageSetupDialog::receivers(signal);
        }
        auto receivers_cb = qpagesetupdialog_receivers_callback;
        if (receivers_cb) {
            const char* cbval1 = (const char*)signal;

            int callback_ret = receivers_cb(this, cbval1);
            return static_cast<int>(callback_ret);
        }
        return QPageSetupDialog::receivers(signal);
    }

    // Virtual method for C ABI access and custom callback
    bool isSignalConnected(const QMetaMethod& signal) const {
        if (qpagesetupdialog_issignalconnected_isbase) {
            qpagesetupdialog_issignalconnected_isbase = false;
            return QPageSetupDialog::isSignalConnected(signal);
        }
        auto issignalconnected_cb = qpagesetupdialog_issignalconnected_callback;
        if (issignalconnected_cb) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            bool callback_ret = issignalconnected_cb(this, cbval1);
            return callback_ret;
        }
        return QPageSetupDialog::isSignalConnected(signal);
    }

    // Virtual method for C ABI access and custom callback
    double getDecodedMetricF(QPaintDevice::PaintDeviceMetric metricA, QPaintDevice::PaintDeviceMetric metricB) const {
        if (qpagesetupdialog_getdecodedmetricf_isbase) {
            qpagesetupdialog_getdecodedmetricf_isbase = false;
            return QPageSetupDialog::getDecodedMetricF(metricA, metricB);
        }
        auto getdecodedmetricf_cb = qpagesetupdialog_getdecodedmetricf_callback;
        if (getdecodedmetricf_cb) {
            int cbval1 = static_cast<int>(metricA);
            int cbval2 = static_cast<int>(metricB);

            double callback_ret = getdecodedmetricf_cb(this, cbval1, cbval2);
            return static_cast<double>(callback_ret);
        }
        return QPageSetupDialog::getDecodedMetricF(metricA, metricB);
    }

    // Friend functions
    friend void QPageSetupDialog_KeyPressEvent(QPageSetupDialog* self, QKeyEvent* param1);
    friend void QPageSetupDialog_SuperKeyPressEvent(QPageSetupDialog* self, QKeyEvent* param1);
    friend void QPageSetupDialog_CloseEvent(QPageSetupDialog* self, QCloseEvent* param1);
    friend void QPageSetupDialog_SuperCloseEvent(QPageSetupDialog* self, QCloseEvent* param1);
    friend void QPageSetupDialog_ShowEvent(QPageSetupDialog* self, QShowEvent* param1);
    friend void QPageSetupDialog_SuperShowEvent(QPageSetupDialog* self, QShowEvent* param1);
    friend void QPageSetupDialog_ResizeEvent(QPageSetupDialog* self, QResizeEvent* param1);
    friend void QPageSetupDialog_SuperResizeEvent(QPageSetupDialog* self, QResizeEvent* param1);
    friend void QPageSetupDialog_ContextMenuEvent(QPageSetupDialog* self, QContextMenuEvent* param1);
    friend void QPageSetupDialog_SuperContextMenuEvent(QPageSetupDialog* self, QContextMenuEvent* param1);
    friend bool QPageSetupDialog_EventFilter(QPageSetupDialog* self, QObject* param1, QEvent* param2);
    friend bool QPageSetupDialog_SuperEventFilter(QPageSetupDialog* self, QObject* param1, QEvent* param2);
    friend bool QPageSetupDialog_Event(QPageSetupDialog* self, QEvent* event);
    friend bool QPageSetupDialog_SuperEvent(QPageSetupDialog* self, QEvent* event);
    friend void QPageSetupDialog_MousePressEvent(QPageSetupDialog* self, QMouseEvent* event);
    friend void QPageSetupDialog_SuperMousePressEvent(QPageSetupDialog* self, QMouseEvent* event);
    friend void QPageSetupDialog_MouseReleaseEvent(QPageSetupDialog* self, QMouseEvent* event);
    friend void QPageSetupDialog_SuperMouseReleaseEvent(QPageSetupDialog* self, QMouseEvent* event);
    friend void QPageSetupDialog_MouseDoubleClickEvent(QPageSetupDialog* self, QMouseEvent* event);
    friend void QPageSetupDialog_SuperMouseDoubleClickEvent(QPageSetupDialog* self, QMouseEvent* event);
    friend void QPageSetupDialog_MouseMoveEvent(QPageSetupDialog* self, QMouseEvent* event);
    friend void QPageSetupDialog_SuperMouseMoveEvent(QPageSetupDialog* self, QMouseEvent* event);
    friend void QPageSetupDialog_WheelEvent(QPageSetupDialog* self, QWheelEvent* event);
    friend void QPageSetupDialog_SuperWheelEvent(QPageSetupDialog* self, QWheelEvent* event);
    friend void QPageSetupDialog_KeyReleaseEvent(QPageSetupDialog* self, QKeyEvent* event);
    friend void QPageSetupDialog_SuperKeyReleaseEvent(QPageSetupDialog* self, QKeyEvent* event);
    friend void QPageSetupDialog_FocusInEvent(QPageSetupDialog* self, QFocusEvent* event);
    friend void QPageSetupDialog_SuperFocusInEvent(QPageSetupDialog* self, QFocusEvent* event);
    friend void QPageSetupDialog_FocusOutEvent(QPageSetupDialog* self, QFocusEvent* event);
    friend void QPageSetupDialog_SuperFocusOutEvent(QPageSetupDialog* self, QFocusEvent* event);
    friend void QPageSetupDialog_EnterEvent(QPageSetupDialog* self, QEnterEvent* event);
    friend void QPageSetupDialog_SuperEnterEvent(QPageSetupDialog* self, QEnterEvent* event);
    friend void QPageSetupDialog_LeaveEvent(QPageSetupDialog* self, QEvent* event);
    friend void QPageSetupDialog_SuperLeaveEvent(QPageSetupDialog* self, QEvent* event);
    friend void QPageSetupDialog_PaintEvent(QPageSetupDialog* self, QPaintEvent* event);
    friend void QPageSetupDialog_SuperPaintEvent(QPageSetupDialog* self, QPaintEvent* event);
    friend void QPageSetupDialog_MoveEvent(QPageSetupDialog* self, QMoveEvent* event);
    friend void QPageSetupDialog_SuperMoveEvent(QPageSetupDialog* self, QMoveEvent* event);
    friend void QPageSetupDialog_TabletEvent(QPageSetupDialog* self, QTabletEvent* event);
    friend void QPageSetupDialog_SuperTabletEvent(QPageSetupDialog* self, QTabletEvent* event);
    friend void QPageSetupDialog_ActionEvent(QPageSetupDialog* self, QActionEvent* event);
    friend void QPageSetupDialog_SuperActionEvent(QPageSetupDialog* self, QActionEvent* event);
    friend void QPageSetupDialog_DragEnterEvent(QPageSetupDialog* self, QDragEnterEvent* event);
    friend void QPageSetupDialog_SuperDragEnterEvent(QPageSetupDialog* self, QDragEnterEvent* event);
    friend void QPageSetupDialog_DragMoveEvent(QPageSetupDialog* self, QDragMoveEvent* event);
    friend void QPageSetupDialog_SuperDragMoveEvent(QPageSetupDialog* self, QDragMoveEvent* event);
    friend void QPageSetupDialog_DragLeaveEvent(QPageSetupDialog* self, QDragLeaveEvent* event);
    friend void QPageSetupDialog_SuperDragLeaveEvent(QPageSetupDialog* self, QDragLeaveEvent* event);
    friend void QPageSetupDialog_DropEvent(QPageSetupDialog* self, QDropEvent* event);
    friend void QPageSetupDialog_SuperDropEvent(QPageSetupDialog* self, QDropEvent* event);
    friend void QPageSetupDialog_HideEvent(QPageSetupDialog* self, QHideEvent* event);
    friend void QPageSetupDialog_SuperHideEvent(QPageSetupDialog* self, QHideEvent* event);
    friend bool QPageSetupDialog_NativeEvent(QPageSetupDialog* self, const libqt_string eventType, void* message, intptr_t* result);
    friend bool QPageSetupDialog_SuperNativeEvent(QPageSetupDialog* self, const libqt_string eventType, void* message, intptr_t* result);
    friend void QPageSetupDialog_ChangeEvent(QPageSetupDialog* self, QEvent* param1);
    friend void QPageSetupDialog_SuperChangeEvent(QPageSetupDialog* self, QEvent* param1);
    friend int QPageSetupDialog_Metric(const QPageSetupDialog* self, int param1);
    friend int QPageSetupDialog_SuperMetric(const QPageSetupDialog* self, int param1);
    friend void QPageSetupDialog_InitPainter(const QPageSetupDialog* self, QPainter* painter);
    friend void QPageSetupDialog_SuperInitPainter(const QPageSetupDialog* self, QPainter* painter);
    friend QPaintDevice* QPageSetupDialog_Redirected(const QPageSetupDialog* self, QPoint* offset);
    friend QPaintDevice* QPageSetupDialog_SuperRedirected(const QPageSetupDialog* self, QPoint* offset);
    friend QPainter* QPageSetupDialog_SharedPainter(const QPageSetupDialog* self);
    friend QPainter* QPageSetupDialog_SuperSharedPainter(const QPageSetupDialog* self);
    friend void QPageSetupDialog_InputMethodEvent(QPageSetupDialog* self, QInputMethodEvent* param1);
    friend void QPageSetupDialog_SuperInputMethodEvent(QPageSetupDialog* self, QInputMethodEvent* param1);
    friend bool QPageSetupDialog_FocusNextPrevChild(QPageSetupDialog* self, bool next);
    friend bool QPageSetupDialog_SuperFocusNextPrevChild(QPageSetupDialog* self, bool next);
    friend void QPageSetupDialog_TimerEvent(QPageSetupDialog* self, QTimerEvent* event);
    friend void QPageSetupDialog_SuperTimerEvent(QPageSetupDialog* self, QTimerEvent* event);
    friend void QPageSetupDialog_ChildEvent(QPageSetupDialog* self, QChildEvent* event);
    friend void QPageSetupDialog_SuperChildEvent(QPageSetupDialog* self, QChildEvent* event);
    friend void QPageSetupDialog_CustomEvent(QPageSetupDialog* self, QEvent* event);
    friend void QPageSetupDialog_SuperCustomEvent(QPageSetupDialog* self, QEvent* event);
    friend void QPageSetupDialog_ConnectNotify(QPageSetupDialog* self, const QMetaMethod* signal);
    friend void QPageSetupDialog_SuperConnectNotify(QPageSetupDialog* self, const QMetaMethod* signal);
    friend void QPageSetupDialog_DisconnectNotify(QPageSetupDialog* self, const QMetaMethod* signal);
    friend void QPageSetupDialog_SuperDisconnectNotify(QPageSetupDialog* self, const QMetaMethod* signal);
    friend void QPageSetupDialog_AdjustPosition(QPageSetupDialog* self, QWidget* param1);
    friend void QPageSetupDialog_SuperAdjustPosition(QPageSetupDialog* self, QWidget* param1);
    friend void QPageSetupDialog_UpdateMicroFocus(QPageSetupDialog* self);
    friend void QPageSetupDialog_SuperUpdateMicroFocus(QPageSetupDialog* self);
    friend void QPageSetupDialog_Create(QPageSetupDialog* self);
    friend void QPageSetupDialog_SuperCreate(QPageSetupDialog* self);
    friend void QPageSetupDialog_Destroy(QPageSetupDialog* self);
    friend void QPageSetupDialog_SuperDestroy(QPageSetupDialog* self);
    friend bool QPageSetupDialog_FocusNextChild(QPageSetupDialog* self);
    friend bool QPageSetupDialog_SuperFocusNextChild(QPageSetupDialog* self);
    friend bool QPageSetupDialog_FocusPreviousChild(QPageSetupDialog* self);
    friend bool QPageSetupDialog_SuperFocusPreviousChild(QPageSetupDialog* self);
    friend QObject* QPageSetupDialog_Sender(const QPageSetupDialog* self);
    friend QObject* QPageSetupDialog_SuperSender(const QPageSetupDialog* self);
    friend int QPageSetupDialog_SenderSignalIndex(const QPageSetupDialog* self);
    friend int QPageSetupDialog_SuperSenderSignalIndex(const QPageSetupDialog* self);
    friend int QPageSetupDialog_Receivers(const QPageSetupDialog* self, const char* signal);
    friend int QPageSetupDialog_SuperReceivers(const QPageSetupDialog* self, const char* signal);
    friend bool QPageSetupDialog_IsSignalConnected(const QPageSetupDialog* self, const QMetaMethod* signal);
    friend bool QPageSetupDialog_SuperIsSignalConnected(const QPageSetupDialog* self, const QMetaMethod* signal);
    friend double QPageSetupDialog_GetDecodedMetricF(const QPageSetupDialog* self, int metricA, int metricB);
    friend double QPageSetupDialog_SuperGetDecodedMetricF(const QPageSetupDialog* self, int metricA, int metricB);
};

#endif
