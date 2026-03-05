#pragma once
#ifndef SRCC_LIBVIRTUALQWIZARD_H
#define SRCC_LIBVIRTUALQWIZARD_H

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"

// This class is a subclass of QWizard so that we can call protected methods
class VirtualQWizard final : public QWizard {

  public:
    // Virtual class boolean flag
    bool isVirtualQWizard = true;

    // Virtual class public types (including callbacks)
    using QWizard_MetaObject_Callback = QMetaObject* (*)();
    using QWizard_Metacast_Callback = void* (*)(QWizard*, const char*);
    using QWizard_Metacall_Callback = int (*)(QWizard*, int, int, void**);
    using QWizard_ValidateCurrentPage_Callback = bool (*)();
    using QWizard_NextId_Callback = int (*)();
    using QWizard_SetVisible_Callback = void (*)(QWizard*, bool);
    using QWizard_SizeHint_Callback = QSize* (*)();
    using QWizard_Event_Callback = bool (*)(QWizard*, QEvent*);
    using QWizard_ResizeEvent_Callback = void (*)(QWizard*, QResizeEvent*);
    using QWizard_PaintEvent_Callback = void (*)(QWizard*, QPaintEvent*);
    using QWizard_Done_Callback = void (*)(QWizard*, int);
    using QWizard_InitializePage_Callback = void (*)(QWizard*, int);
    using QWizard_CleanupPage_Callback = void (*)(QWizard*, int);
    using QWizard_MinimumSizeHint_Callback = QSize* (*)();
    using QWizard_Open_Callback = void (*)();
    using QWizard_Exec_Callback = int (*)();
    using QWizard_Accept_Callback = void (*)();
    using QWizard_Reject_Callback = void (*)();
    using QWizard_KeyPressEvent_Callback = void (*)(QWizard*, QKeyEvent*);
    using QWizard_CloseEvent_Callback = void (*)(QWizard*, QCloseEvent*);
    using QWizard_ShowEvent_Callback = void (*)(QWizard*, QShowEvent*);
    using QWizard_ContextMenuEvent_Callback = void (*)(QWizard*, QContextMenuEvent*);
    using QWizard_EventFilter_Callback = bool (*)(QWizard*, QObject*, QEvent*);
    using QWizard_DevType_Callback = int (*)();
    using QWizard_HeightForWidth_Callback = int (*)(const QWizard*, int);
    using QWizard_HasHeightForWidth_Callback = bool (*)();
    using QWizard_PaintEngine_Callback = QPaintEngine* (*)();
    using QWizard_MousePressEvent_Callback = void (*)(QWizard*, QMouseEvent*);
    using QWizard_MouseReleaseEvent_Callback = void (*)(QWizard*, QMouseEvent*);
    using QWizard_MouseDoubleClickEvent_Callback = void (*)(QWizard*, QMouseEvent*);
    using QWizard_MouseMoveEvent_Callback = void (*)(QWizard*, QMouseEvent*);
    using QWizard_WheelEvent_Callback = void (*)(QWizard*, QWheelEvent*);
    using QWizard_KeyReleaseEvent_Callback = void (*)(QWizard*, QKeyEvent*);
    using QWizard_FocusInEvent_Callback = void (*)(QWizard*, QFocusEvent*);
    using QWizard_FocusOutEvent_Callback = void (*)(QWizard*, QFocusEvent*);
    using QWizard_EnterEvent_Callback = void (*)(QWizard*, QEnterEvent*);
    using QWizard_LeaveEvent_Callback = void (*)(QWizard*, QEvent*);
    using QWizard_MoveEvent_Callback = void (*)(QWizard*, QMoveEvent*);
    using QWizard_TabletEvent_Callback = void (*)(QWizard*, QTabletEvent*);
    using QWizard_ActionEvent_Callback = void (*)(QWizard*, QActionEvent*);
    using QWizard_DragEnterEvent_Callback = void (*)(QWizard*, QDragEnterEvent*);
    using QWizard_DragMoveEvent_Callback = void (*)(QWizard*, QDragMoveEvent*);
    using QWizard_DragLeaveEvent_Callback = void (*)(QWizard*, QDragLeaveEvent*);
    using QWizard_DropEvent_Callback = void (*)(QWizard*, QDropEvent*);
    using QWizard_HideEvent_Callback = void (*)(QWizard*, QHideEvent*);
    using QWizard_NativeEvent_Callback = bool (*)(QWizard*, libqt_string, void*, intptr_t*);
    using QWizard_ChangeEvent_Callback = void (*)(QWizard*, QEvent*);
    using QWizard_Metric_Callback = int (*)(const QWizard*, int);
    using QWizard_InitPainter_Callback = void (*)(const QWizard*, QPainter*);
    using QWizard_Redirected_Callback = QPaintDevice* (*)(const QWizard*, QPoint*);
    using QWizard_SharedPainter_Callback = QPainter* (*)();
    using QWizard_InputMethodEvent_Callback = void (*)(QWizard*, QInputMethodEvent*);
    using QWizard_InputMethodQuery_Callback = QVariant* (*)(const QWizard*, int);
    using QWizard_FocusNextPrevChild_Callback = bool (*)(QWizard*, bool);
    using QWizard_TimerEvent_Callback = void (*)(QWizard*, QTimerEvent*);
    using QWizard_ChildEvent_Callback = void (*)(QWizard*, QChildEvent*);
    using QWizard_CustomEvent_Callback = void (*)(QWizard*, QEvent*);
    using QWizard_ConnectNotify_Callback = void (*)(QWizard*, QMetaMethod*);
    using QWizard_DisconnectNotify_Callback = void (*)(QWizard*, QMetaMethod*);
    using QWizard_AdjustPosition_Callback = void (*)(QWizard*, QWidget*);
    using QWizard_UpdateMicroFocus_Callback = void (*)();
    using QWizard_Create_Callback = void (*)();
    using QWizard_Destroy_Callback = void (*)();
    using QWizard_FocusNextChild_Callback = bool (*)();
    using QWizard_FocusPreviousChild_Callback = bool (*)();
    using QWizard_Sender_Callback = QObject* (*)();
    using QWizard_SenderSignalIndex_Callback = int (*)();
    using QWizard_Receivers_Callback = int (*)(const QWizard*, const char*);
    using QWizard_IsSignalConnected_Callback = bool (*)(const QWizard*, QMetaMethod*);
    using QWizard_GetDecodedMetricF_Callback = double (*)(const QWizard*, int, int);

  protected:
    // Instance callback storage
    QWizard_MetaObject_Callback qwizard_metaobject_callback = nullptr;
    QWizard_Metacast_Callback qwizard_metacast_callback = nullptr;
    QWizard_Metacall_Callback qwizard_metacall_callback = nullptr;
    QWizard_ValidateCurrentPage_Callback qwizard_validatecurrentpage_callback = nullptr;
    QWizard_NextId_Callback qwizard_nextid_callback = nullptr;
    QWizard_SetVisible_Callback qwizard_setvisible_callback = nullptr;
    QWizard_SizeHint_Callback qwizard_sizehint_callback = nullptr;
    QWizard_Event_Callback qwizard_event_callback = nullptr;
    QWizard_ResizeEvent_Callback qwizard_resizeevent_callback = nullptr;
    QWizard_PaintEvent_Callback qwizard_paintevent_callback = nullptr;
    QWizard_Done_Callback qwizard_done_callback = nullptr;
    QWizard_InitializePage_Callback qwizard_initializepage_callback = nullptr;
    QWizard_CleanupPage_Callback qwizard_cleanuppage_callback = nullptr;
    QWizard_MinimumSizeHint_Callback qwizard_minimumsizehint_callback = nullptr;
    QWizard_Open_Callback qwizard_open_callback = nullptr;
    QWizard_Exec_Callback qwizard_exec_callback = nullptr;
    QWizard_Accept_Callback qwizard_accept_callback = nullptr;
    QWizard_Reject_Callback qwizard_reject_callback = nullptr;
    QWizard_KeyPressEvent_Callback qwizard_keypressevent_callback = nullptr;
    QWizard_CloseEvent_Callback qwizard_closeevent_callback = nullptr;
    QWizard_ShowEvent_Callback qwizard_showevent_callback = nullptr;
    QWizard_ContextMenuEvent_Callback qwizard_contextmenuevent_callback = nullptr;
    QWizard_EventFilter_Callback qwizard_eventfilter_callback = nullptr;
    QWizard_DevType_Callback qwizard_devtype_callback = nullptr;
    QWizard_HeightForWidth_Callback qwizard_heightforwidth_callback = nullptr;
    QWizard_HasHeightForWidth_Callback qwizard_hasheightforwidth_callback = nullptr;
    QWizard_PaintEngine_Callback qwizard_paintengine_callback = nullptr;
    QWizard_MousePressEvent_Callback qwizard_mousepressevent_callback = nullptr;
    QWizard_MouseReleaseEvent_Callback qwizard_mousereleaseevent_callback = nullptr;
    QWizard_MouseDoubleClickEvent_Callback qwizard_mousedoubleclickevent_callback = nullptr;
    QWizard_MouseMoveEvent_Callback qwizard_mousemoveevent_callback = nullptr;
    QWizard_WheelEvent_Callback qwizard_wheelevent_callback = nullptr;
    QWizard_KeyReleaseEvent_Callback qwizard_keyreleaseevent_callback = nullptr;
    QWizard_FocusInEvent_Callback qwizard_focusinevent_callback = nullptr;
    QWizard_FocusOutEvent_Callback qwizard_focusoutevent_callback = nullptr;
    QWizard_EnterEvent_Callback qwizard_enterevent_callback = nullptr;
    QWizard_LeaveEvent_Callback qwizard_leaveevent_callback = nullptr;
    QWizard_MoveEvent_Callback qwizard_moveevent_callback = nullptr;
    QWizard_TabletEvent_Callback qwizard_tabletevent_callback = nullptr;
    QWizard_ActionEvent_Callback qwizard_actionevent_callback = nullptr;
    QWizard_DragEnterEvent_Callback qwizard_dragenterevent_callback = nullptr;
    QWizard_DragMoveEvent_Callback qwizard_dragmoveevent_callback = nullptr;
    QWizard_DragLeaveEvent_Callback qwizard_dragleaveevent_callback = nullptr;
    QWizard_DropEvent_Callback qwizard_dropevent_callback = nullptr;
    QWizard_HideEvent_Callback qwizard_hideevent_callback = nullptr;
    QWizard_NativeEvent_Callback qwizard_nativeevent_callback = nullptr;
    QWizard_ChangeEvent_Callback qwizard_changeevent_callback = nullptr;
    QWizard_Metric_Callback qwizard_metric_callback = nullptr;
    QWizard_InitPainter_Callback qwizard_initpainter_callback = nullptr;
    QWizard_Redirected_Callback qwizard_redirected_callback = nullptr;
    QWizard_SharedPainter_Callback qwizard_sharedpainter_callback = nullptr;
    QWizard_InputMethodEvent_Callback qwizard_inputmethodevent_callback = nullptr;
    QWizard_InputMethodQuery_Callback qwizard_inputmethodquery_callback = nullptr;
    QWizard_FocusNextPrevChild_Callback qwizard_focusnextprevchild_callback = nullptr;
    QWizard_TimerEvent_Callback qwizard_timerevent_callback = nullptr;
    QWizard_ChildEvent_Callback qwizard_childevent_callback = nullptr;
    QWizard_CustomEvent_Callback qwizard_customevent_callback = nullptr;
    QWizard_ConnectNotify_Callback qwizard_connectnotify_callback = nullptr;
    QWizard_DisconnectNotify_Callback qwizard_disconnectnotify_callback = nullptr;
    QWizard_AdjustPosition_Callback qwizard_adjustposition_callback = nullptr;
    QWizard_UpdateMicroFocus_Callback qwizard_updatemicrofocus_callback = nullptr;
    QWizard_Create_Callback qwizard_create_callback = nullptr;
    QWizard_Destroy_Callback qwizard_destroy_callback = nullptr;
    QWizard_FocusNextChild_Callback qwizard_focusnextchild_callback = nullptr;
    QWizard_FocusPreviousChild_Callback qwizard_focuspreviouschild_callback = nullptr;
    QWizard_Sender_Callback qwizard_sender_callback = nullptr;
    QWizard_SenderSignalIndex_Callback qwizard_sendersignalindex_callback = nullptr;
    QWizard_Receivers_Callback qwizard_receivers_callback = nullptr;
    QWizard_IsSignalConnected_Callback qwizard_issignalconnected_callback = nullptr;
    QWizard_GetDecodedMetricF_Callback qwizard_getdecodedmetricf_callback = nullptr;

    // Instance base flags
    mutable bool qwizard_metaobject_isbase = false;
    mutable bool qwizard_metacast_isbase = false;
    mutable bool qwizard_metacall_isbase = false;
    mutable bool qwizard_validatecurrentpage_isbase = false;
    mutable bool qwizard_nextid_isbase = false;
    mutable bool qwizard_setvisible_isbase = false;
    mutable bool qwizard_sizehint_isbase = false;
    mutable bool qwizard_event_isbase = false;
    mutable bool qwizard_resizeevent_isbase = false;
    mutable bool qwizard_paintevent_isbase = false;
    mutable bool qwizard_done_isbase = false;
    mutable bool qwizard_initializepage_isbase = false;
    mutable bool qwizard_cleanuppage_isbase = false;
    mutable bool qwizard_minimumsizehint_isbase = false;
    mutable bool qwizard_open_isbase = false;
    mutable bool qwizard_exec_isbase = false;
    mutable bool qwizard_accept_isbase = false;
    mutable bool qwizard_reject_isbase = false;
    mutable bool qwizard_keypressevent_isbase = false;
    mutable bool qwizard_closeevent_isbase = false;
    mutable bool qwizard_showevent_isbase = false;
    mutable bool qwizard_contextmenuevent_isbase = false;
    mutable bool qwizard_eventfilter_isbase = false;
    mutable bool qwizard_devtype_isbase = false;
    mutable bool qwizard_heightforwidth_isbase = false;
    mutable bool qwizard_hasheightforwidth_isbase = false;
    mutable bool qwizard_paintengine_isbase = false;
    mutable bool qwizard_mousepressevent_isbase = false;
    mutable bool qwizard_mousereleaseevent_isbase = false;
    mutable bool qwizard_mousedoubleclickevent_isbase = false;
    mutable bool qwizard_mousemoveevent_isbase = false;
    mutable bool qwizard_wheelevent_isbase = false;
    mutable bool qwizard_keyreleaseevent_isbase = false;
    mutable bool qwizard_focusinevent_isbase = false;
    mutable bool qwizard_focusoutevent_isbase = false;
    mutable bool qwizard_enterevent_isbase = false;
    mutable bool qwizard_leaveevent_isbase = false;
    mutable bool qwizard_moveevent_isbase = false;
    mutable bool qwizard_tabletevent_isbase = false;
    mutable bool qwizard_actionevent_isbase = false;
    mutable bool qwizard_dragenterevent_isbase = false;
    mutable bool qwizard_dragmoveevent_isbase = false;
    mutable bool qwizard_dragleaveevent_isbase = false;
    mutable bool qwizard_dropevent_isbase = false;
    mutable bool qwizard_hideevent_isbase = false;
    mutable bool qwizard_nativeevent_isbase = false;
    mutable bool qwizard_changeevent_isbase = false;
    mutable bool qwizard_metric_isbase = false;
    mutable bool qwizard_initpainter_isbase = false;
    mutable bool qwizard_redirected_isbase = false;
    mutable bool qwizard_sharedpainter_isbase = false;
    mutable bool qwizard_inputmethodevent_isbase = false;
    mutable bool qwizard_inputmethodquery_isbase = false;
    mutable bool qwizard_focusnextprevchild_isbase = false;
    mutable bool qwizard_timerevent_isbase = false;
    mutable bool qwizard_childevent_isbase = false;
    mutable bool qwizard_customevent_isbase = false;
    mutable bool qwizard_connectnotify_isbase = false;
    mutable bool qwizard_disconnectnotify_isbase = false;
    mutable bool qwizard_adjustposition_isbase = false;
    mutable bool qwizard_updatemicrofocus_isbase = false;
    mutable bool qwizard_create_isbase = false;
    mutable bool qwizard_destroy_isbase = false;
    mutable bool qwizard_focusnextchild_isbase = false;
    mutable bool qwizard_focuspreviouschild_isbase = false;
    mutable bool qwizard_sender_isbase = false;
    mutable bool qwizard_sendersignalindex_isbase = false;
    mutable bool qwizard_receivers_isbase = false;
    mutable bool qwizard_issignalconnected_isbase = false;
    mutable bool qwizard_getdecodedmetricf_isbase = false;

  public:
    VirtualQWizard(QWidget* parent) : QWizard(parent) {};
    VirtualQWizard() : QWizard() {};
    VirtualQWizard(QWidget* parent, Qt::WindowFlags flags) : QWizard(parent, flags) {};

    // Callback setters
    inline void setQWizard_MetaObject_Callback(QWizard_MetaObject_Callback cb) { qwizard_metaobject_callback = cb; }
    inline void setQWizard_Metacast_Callback(QWizard_Metacast_Callback cb) { qwizard_metacast_callback = cb; }
    inline void setQWizard_Metacall_Callback(QWizard_Metacall_Callback cb) { qwizard_metacall_callback = cb; }
    inline void setQWizard_ValidateCurrentPage_Callback(QWizard_ValidateCurrentPage_Callback cb) { qwizard_validatecurrentpage_callback = cb; }
    inline void setQWizard_NextId_Callback(QWizard_NextId_Callback cb) { qwizard_nextid_callback = cb; }
    inline void setQWizard_SetVisible_Callback(QWizard_SetVisible_Callback cb) { qwizard_setvisible_callback = cb; }
    inline void setQWizard_SizeHint_Callback(QWizard_SizeHint_Callback cb) { qwizard_sizehint_callback = cb; }
    inline void setQWizard_Event_Callback(QWizard_Event_Callback cb) { qwizard_event_callback = cb; }
    inline void setQWizard_ResizeEvent_Callback(QWizard_ResizeEvent_Callback cb) { qwizard_resizeevent_callback = cb; }
    inline void setQWizard_PaintEvent_Callback(QWizard_PaintEvent_Callback cb) { qwizard_paintevent_callback = cb; }
    inline void setQWizard_Done_Callback(QWizard_Done_Callback cb) { qwizard_done_callback = cb; }
    inline void setQWizard_InitializePage_Callback(QWizard_InitializePage_Callback cb) { qwizard_initializepage_callback = cb; }
    inline void setQWizard_CleanupPage_Callback(QWizard_CleanupPage_Callback cb) { qwizard_cleanuppage_callback = cb; }
    inline void setQWizard_MinimumSizeHint_Callback(QWizard_MinimumSizeHint_Callback cb) { qwizard_minimumsizehint_callback = cb; }
    inline void setQWizard_Open_Callback(QWizard_Open_Callback cb) { qwizard_open_callback = cb; }
    inline void setQWizard_Exec_Callback(QWizard_Exec_Callback cb) { qwizard_exec_callback = cb; }
    inline void setQWizard_Accept_Callback(QWizard_Accept_Callback cb) { qwizard_accept_callback = cb; }
    inline void setQWizard_Reject_Callback(QWizard_Reject_Callback cb) { qwizard_reject_callback = cb; }
    inline void setQWizard_KeyPressEvent_Callback(QWizard_KeyPressEvent_Callback cb) { qwizard_keypressevent_callback = cb; }
    inline void setQWizard_CloseEvent_Callback(QWizard_CloseEvent_Callback cb) { qwizard_closeevent_callback = cb; }
    inline void setQWizard_ShowEvent_Callback(QWizard_ShowEvent_Callback cb) { qwizard_showevent_callback = cb; }
    inline void setQWizard_ContextMenuEvent_Callback(QWizard_ContextMenuEvent_Callback cb) { qwizard_contextmenuevent_callback = cb; }
    inline void setQWizard_EventFilter_Callback(QWizard_EventFilter_Callback cb) { qwizard_eventfilter_callback = cb; }
    inline void setQWizard_DevType_Callback(QWizard_DevType_Callback cb) { qwizard_devtype_callback = cb; }
    inline void setQWizard_HeightForWidth_Callback(QWizard_HeightForWidth_Callback cb) { qwizard_heightforwidth_callback = cb; }
    inline void setQWizard_HasHeightForWidth_Callback(QWizard_HasHeightForWidth_Callback cb) { qwizard_hasheightforwidth_callback = cb; }
    inline void setQWizard_PaintEngine_Callback(QWizard_PaintEngine_Callback cb) { qwizard_paintengine_callback = cb; }
    inline void setQWizard_MousePressEvent_Callback(QWizard_MousePressEvent_Callback cb) { qwizard_mousepressevent_callback = cb; }
    inline void setQWizard_MouseReleaseEvent_Callback(QWizard_MouseReleaseEvent_Callback cb) { qwizard_mousereleaseevent_callback = cb; }
    inline void setQWizard_MouseDoubleClickEvent_Callback(QWizard_MouseDoubleClickEvent_Callback cb) { qwizard_mousedoubleclickevent_callback = cb; }
    inline void setQWizard_MouseMoveEvent_Callback(QWizard_MouseMoveEvent_Callback cb) { qwizard_mousemoveevent_callback = cb; }
    inline void setQWizard_WheelEvent_Callback(QWizard_WheelEvent_Callback cb) { qwizard_wheelevent_callback = cb; }
    inline void setQWizard_KeyReleaseEvent_Callback(QWizard_KeyReleaseEvent_Callback cb) { qwizard_keyreleaseevent_callback = cb; }
    inline void setQWizard_FocusInEvent_Callback(QWizard_FocusInEvent_Callback cb) { qwizard_focusinevent_callback = cb; }
    inline void setQWizard_FocusOutEvent_Callback(QWizard_FocusOutEvent_Callback cb) { qwizard_focusoutevent_callback = cb; }
    inline void setQWizard_EnterEvent_Callback(QWizard_EnterEvent_Callback cb) { qwizard_enterevent_callback = cb; }
    inline void setQWizard_LeaveEvent_Callback(QWizard_LeaveEvent_Callback cb) { qwizard_leaveevent_callback = cb; }
    inline void setQWizard_MoveEvent_Callback(QWizard_MoveEvent_Callback cb) { qwizard_moveevent_callback = cb; }
    inline void setQWizard_TabletEvent_Callback(QWizard_TabletEvent_Callback cb) { qwizard_tabletevent_callback = cb; }
    inline void setQWizard_ActionEvent_Callback(QWizard_ActionEvent_Callback cb) { qwizard_actionevent_callback = cb; }
    inline void setQWizard_DragEnterEvent_Callback(QWizard_DragEnterEvent_Callback cb) { qwizard_dragenterevent_callback = cb; }
    inline void setQWizard_DragMoveEvent_Callback(QWizard_DragMoveEvent_Callback cb) { qwizard_dragmoveevent_callback = cb; }
    inline void setQWizard_DragLeaveEvent_Callback(QWizard_DragLeaveEvent_Callback cb) { qwizard_dragleaveevent_callback = cb; }
    inline void setQWizard_DropEvent_Callback(QWizard_DropEvent_Callback cb) { qwizard_dropevent_callback = cb; }
    inline void setQWizard_HideEvent_Callback(QWizard_HideEvent_Callback cb) { qwizard_hideevent_callback = cb; }
    inline void setQWizard_NativeEvent_Callback(QWizard_NativeEvent_Callback cb) { qwizard_nativeevent_callback = cb; }
    inline void setQWizard_ChangeEvent_Callback(QWizard_ChangeEvent_Callback cb) { qwizard_changeevent_callback = cb; }
    inline void setQWizard_Metric_Callback(QWizard_Metric_Callback cb) { qwizard_metric_callback = cb; }
    inline void setQWizard_InitPainter_Callback(QWizard_InitPainter_Callback cb) { qwizard_initpainter_callback = cb; }
    inline void setQWizard_Redirected_Callback(QWizard_Redirected_Callback cb) { qwizard_redirected_callback = cb; }
    inline void setQWizard_SharedPainter_Callback(QWizard_SharedPainter_Callback cb) { qwizard_sharedpainter_callback = cb; }
    inline void setQWizard_InputMethodEvent_Callback(QWizard_InputMethodEvent_Callback cb) { qwizard_inputmethodevent_callback = cb; }
    inline void setQWizard_InputMethodQuery_Callback(QWizard_InputMethodQuery_Callback cb) { qwizard_inputmethodquery_callback = cb; }
    inline void setQWizard_FocusNextPrevChild_Callback(QWizard_FocusNextPrevChild_Callback cb) { qwizard_focusnextprevchild_callback = cb; }
    inline void setQWizard_TimerEvent_Callback(QWizard_TimerEvent_Callback cb) { qwizard_timerevent_callback = cb; }
    inline void setQWizard_ChildEvent_Callback(QWizard_ChildEvent_Callback cb) { qwizard_childevent_callback = cb; }
    inline void setQWizard_CustomEvent_Callback(QWizard_CustomEvent_Callback cb) { qwizard_customevent_callback = cb; }
    inline void setQWizard_ConnectNotify_Callback(QWizard_ConnectNotify_Callback cb) { qwizard_connectnotify_callback = cb; }
    inline void setQWizard_DisconnectNotify_Callback(QWizard_DisconnectNotify_Callback cb) { qwizard_disconnectnotify_callback = cb; }
    inline void setQWizard_AdjustPosition_Callback(QWizard_AdjustPosition_Callback cb) { qwizard_adjustposition_callback = cb; }
    inline void setQWizard_UpdateMicroFocus_Callback(QWizard_UpdateMicroFocus_Callback cb) { qwizard_updatemicrofocus_callback = cb; }
    inline void setQWizard_Create_Callback(QWizard_Create_Callback cb) { qwizard_create_callback = cb; }
    inline void setQWizard_Destroy_Callback(QWizard_Destroy_Callback cb) { qwizard_destroy_callback = cb; }
    inline void setQWizard_FocusNextChild_Callback(QWizard_FocusNextChild_Callback cb) { qwizard_focusnextchild_callback = cb; }
    inline void setQWizard_FocusPreviousChild_Callback(QWizard_FocusPreviousChild_Callback cb) { qwizard_focuspreviouschild_callback = cb; }
    inline void setQWizard_Sender_Callback(QWizard_Sender_Callback cb) { qwizard_sender_callback = cb; }
    inline void setQWizard_SenderSignalIndex_Callback(QWizard_SenderSignalIndex_Callback cb) { qwizard_sendersignalindex_callback = cb; }
    inline void setQWizard_Receivers_Callback(QWizard_Receivers_Callback cb) { qwizard_receivers_callback = cb; }
    inline void setQWizard_IsSignalConnected_Callback(QWizard_IsSignalConnected_Callback cb) { qwizard_issignalconnected_callback = cb; }
    inline void setQWizard_GetDecodedMetricF_Callback(QWizard_GetDecodedMetricF_Callback cb) { qwizard_getdecodedmetricf_callback = cb; }

    // Base flag setters
    inline void setQWizard_MetaObject_IsBase(bool value) const { qwizard_metaobject_isbase = value; }
    inline void setQWizard_Metacast_IsBase(bool value) const { qwizard_metacast_isbase = value; }
    inline void setQWizard_Metacall_IsBase(bool value) const { qwizard_metacall_isbase = value; }
    inline void setQWizard_ValidateCurrentPage_IsBase(bool value) const { qwizard_validatecurrentpage_isbase = value; }
    inline void setQWizard_NextId_IsBase(bool value) const { qwizard_nextid_isbase = value; }
    inline void setQWizard_SetVisible_IsBase(bool value) const { qwizard_setvisible_isbase = value; }
    inline void setQWizard_SizeHint_IsBase(bool value) const { qwizard_sizehint_isbase = value; }
    inline void setQWizard_Event_IsBase(bool value) const { qwizard_event_isbase = value; }
    inline void setQWizard_ResizeEvent_IsBase(bool value) const { qwizard_resizeevent_isbase = value; }
    inline void setQWizard_PaintEvent_IsBase(bool value) const { qwizard_paintevent_isbase = value; }
    inline void setQWizard_Done_IsBase(bool value) const { qwizard_done_isbase = value; }
    inline void setQWizard_InitializePage_IsBase(bool value) const { qwizard_initializepage_isbase = value; }
    inline void setQWizard_CleanupPage_IsBase(bool value) const { qwizard_cleanuppage_isbase = value; }
    inline void setQWizard_MinimumSizeHint_IsBase(bool value) const { qwizard_minimumsizehint_isbase = value; }
    inline void setQWizard_Open_IsBase(bool value) const { qwizard_open_isbase = value; }
    inline void setQWizard_Exec_IsBase(bool value) const { qwizard_exec_isbase = value; }
    inline void setQWizard_Accept_IsBase(bool value) const { qwizard_accept_isbase = value; }
    inline void setQWizard_Reject_IsBase(bool value) const { qwizard_reject_isbase = value; }
    inline void setQWizard_KeyPressEvent_IsBase(bool value) const { qwizard_keypressevent_isbase = value; }
    inline void setQWizard_CloseEvent_IsBase(bool value) const { qwizard_closeevent_isbase = value; }
    inline void setQWizard_ShowEvent_IsBase(bool value) const { qwizard_showevent_isbase = value; }
    inline void setQWizard_ContextMenuEvent_IsBase(bool value) const { qwizard_contextmenuevent_isbase = value; }
    inline void setQWizard_EventFilter_IsBase(bool value) const { qwizard_eventfilter_isbase = value; }
    inline void setQWizard_DevType_IsBase(bool value) const { qwizard_devtype_isbase = value; }
    inline void setQWizard_HeightForWidth_IsBase(bool value) const { qwizard_heightforwidth_isbase = value; }
    inline void setQWizard_HasHeightForWidth_IsBase(bool value) const { qwizard_hasheightforwidth_isbase = value; }
    inline void setQWizard_PaintEngine_IsBase(bool value) const { qwizard_paintengine_isbase = value; }
    inline void setQWizard_MousePressEvent_IsBase(bool value) const { qwizard_mousepressevent_isbase = value; }
    inline void setQWizard_MouseReleaseEvent_IsBase(bool value) const { qwizard_mousereleaseevent_isbase = value; }
    inline void setQWizard_MouseDoubleClickEvent_IsBase(bool value) const { qwizard_mousedoubleclickevent_isbase = value; }
    inline void setQWizard_MouseMoveEvent_IsBase(bool value) const { qwizard_mousemoveevent_isbase = value; }
    inline void setQWizard_WheelEvent_IsBase(bool value) const { qwizard_wheelevent_isbase = value; }
    inline void setQWizard_KeyReleaseEvent_IsBase(bool value) const { qwizard_keyreleaseevent_isbase = value; }
    inline void setQWizard_FocusInEvent_IsBase(bool value) const { qwizard_focusinevent_isbase = value; }
    inline void setQWizard_FocusOutEvent_IsBase(bool value) const { qwizard_focusoutevent_isbase = value; }
    inline void setQWizard_EnterEvent_IsBase(bool value) const { qwizard_enterevent_isbase = value; }
    inline void setQWizard_LeaveEvent_IsBase(bool value) const { qwizard_leaveevent_isbase = value; }
    inline void setQWizard_MoveEvent_IsBase(bool value) const { qwizard_moveevent_isbase = value; }
    inline void setQWizard_TabletEvent_IsBase(bool value) const { qwizard_tabletevent_isbase = value; }
    inline void setQWizard_ActionEvent_IsBase(bool value) const { qwizard_actionevent_isbase = value; }
    inline void setQWizard_DragEnterEvent_IsBase(bool value) const { qwizard_dragenterevent_isbase = value; }
    inline void setQWizard_DragMoveEvent_IsBase(bool value) const { qwizard_dragmoveevent_isbase = value; }
    inline void setQWizard_DragLeaveEvent_IsBase(bool value) const { qwizard_dragleaveevent_isbase = value; }
    inline void setQWizard_DropEvent_IsBase(bool value) const { qwizard_dropevent_isbase = value; }
    inline void setQWizard_HideEvent_IsBase(bool value) const { qwizard_hideevent_isbase = value; }
    inline void setQWizard_NativeEvent_IsBase(bool value) const { qwizard_nativeevent_isbase = value; }
    inline void setQWizard_ChangeEvent_IsBase(bool value) const { qwizard_changeevent_isbase = value; }
    inline void setQWizard_Metric_IsBase(bool value) const { qwizard_metric_isbase = value; }
    inline void setQWizard_InitPainter_IsBase(bool value) const { qwizard_initpainter_isbase = value; }
    inline void setQWizard_Redirected_IsBase(bool value) const { qwizard_redirected_isbase = value; }
    inline void setQWizard_SharedPainter_IsBase(bool value) const { qwizard_sharedpainter_isbase = value; }
    inline void setQWizard_InputMethodEvent_IsBase(bool value) const { qwizard_inputmethodevent_isbase = value; }
    inline void setQWizard_InputMethodQuery_IsBase(bool value) const { qwizard_inputmethodquery_isbase = value; }
    inline void setQWizard_FocusNextPrevChild_IsBase(bool value) const { qwizard_focusnextprevchild_isbase = value; }
    inline void setQWizard_TimerEvent_IsBase(bool value) const { qwizard_timerevent_isbase = value; }
    inline void setQWizard_ChildEvent_IsBase(bool value) const { qwizard_childevent_isbase = value; }
    inline void setQWizard_CustomEvent_IsBase(bool value) const { qwizard_customevent_isbase = value; }
    inline void setQWizard_ConnectNotify_IsBase(bool value) const { qwizard_connectnotify_isbase = value; }
    inline void setQWizard_DisconnectNotify_IsBase(bool value) const { qwizard_disconnectnotify_isbase = value; }
    inline void setQWizard_AdjustPosition_IsBase(bool value) const { qwizard_adjustposition_isbase = value; }
    inline void setQWizard_UpdateMicroFocus_IsBase(bool value) const { qwizard_updatemicrofocus_isbase = value; }
    inline void setQWizard_Create_IsBase(bool value) const { qwizard_create_isbase = value; }
    inline void setQWizard_Destroy_IsBase(bool value) const { qwizard_destroy_isbase = value; }
    inline void setQWizard_FocusNextChild_IsBase(bool value) const { qwizard_focusnextchild_isbase = value; }
    inline void setQWizard_FocusPreviousChild_IsBase(bool value) const { qwizard_focuspreviouschild_isbase = value; }
    inline void setQWizard_Sender_IsBase(bool value) const { qwizard_sender_isbase = value; }
    inline void setQWizard_SenderSignalIndex_IsBase(bool value) const { qwizard_sendersignalindex_isbase = value; }
    inline void setQWizard_Receivers_IsBase(bool value) const { qwizard_receivers_isbase = value; }
    inline void setQWizard_IsSignalConnected_IsBase(bool value) const { qwizard_issignalconnected_isbase = value; }
    inline void setQWizard_GetDecodedMetricF_IsBase(bool value) const { qwizard_getdecodedmetricf_isbase = value; }

    // Virtual method for C ABI access and custom callback
    virtual const QMetaObject* metaObject() const override {
        if (qwizard_metaobject_isbase) {
            qwizard_metaobject_isbase = false;
            return QWizard::metaObject();
        }
        auto metaobject_cb = qwizard_metaobject_callback;
        if (metaobject_cb) {
            QMetaObject* callback_ret = metaobject_cb();
            return callback_ret;
        }
        return QWizard::metaObject();
    }

    // Virtual method for C ABI access and custom callback
    virtual void* qt_metacast(const char* param1) override {
        if (qwizard_metacast_isbase) {
            qwizard_metacast_isbase = false;
            return QWizard::qt_metacast(param1);
        }
        auto metacast_cb = qwizard_metacast_callback;
        if (metacast_cb) {
            const char* cbval1 = (const char*)param1;

            void* callback_ret = metacast_cb(this, cbval1);
            return callback_ret;
        }
        return QWizard::qt_metacast(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (qwizard_metacall_isbase) {
            qwizard_metacall_isbase = false;
            return QWizard::qt_metacall(param1, param2, param3);
        }
        auto metacall_cb = qwizard_metacall_callback;
        if (metacall_cb) {
            int cbval1 = static_cast<int>(param1);
            int cbval2 = param2;
            void** cbval3 = param3;

            int callback_ret = metacall_cb(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        }
        return QWizard::qt_metacall(param1, param2, param3);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool validateCurrentPage() override {
        if (qwizard_validatecurrentpage_isbase) {
            qwizard_validatecurrentpage_isbase = false;
            return QWizard::validateCurrentPage();
        }
        auto validatecurrentpage_cb = qwizard_validatecurrentpage_callback;
        if (validatecurrentpage_cb) {
            bool callback_ret = validatecurrentpage_cb();
            return callback_ret;
        }
        return QWizard::validateCurrentPage();
    }

    // Virtual method for C ABI access and custom callback
    virtual int nextId() const override {
        if (qwizard_nextid_isbase) {
            qwizard_nextid_isbase = false;
            return QWizard::nextId();
        }
        auto nextid_cb = qwizard_nextid_callback;
        if (nextid_cb) {
            int callback_ret = nextid_cb();
            return static_cast<int>(callback_ret);
        }
        return QWizard::nextId();
    }

    // Virtual method for C ABI access and custom callback
    virtual void setVisible(bool visible) override {
        if (qwizard_setvisible_isbase) {
            qwizard_setvisible_isbase = false;
            QWizard::setVisible(visible);
            return;
        }
        auto setvisible_cb = qwizard_setvisible_callback;
        if (setvisible_cb) {
            bool cbval1 = visible;

            setvisible_cb(this, cbval1);
            return;
        }
        QWizard::setVisible(visible);
    }

    // Virtual method for C ABI access and custom callback
    virtual QSize sizeHint() const override {
        if (qwizard_sizehint_isbase) {
            qwizard_sizehint_isbase = false;
            return QWizard::sizeHint();
        }
        auto sizehint_cb = qwizard_sizehint_callback;
        if (sizehint_cb) {
            QSize* callback_ret = sizehint_cb();
            return *callback_ret;
        }
        return QWizard::sizeHint();
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* event) override {
        if (qwizard_event_isbase) {
            qwizard_event_isbase = false;
            return QWizard::event(event);
        }
        auto event_cb = qwizard_event_callback;
        if (event_cb) {
            QEvent* cbval1 = event;

            bool callback_ret = event_cb(this, cbval1);
            return callback_ret;
        }
        return QWizard::event(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void resizeEvent(QResizeEvent* event) override {
        if (qwizard_resizeevent_isbase) {
            qwizard_resizeevent_isbase = false;
            QWizard::resizeEvent(event);
            return;
        }
        auto resizeevent_cb = qwizard_resizeevent_callback;
        if (resizeevent_cb) {
            QResizeEvent* cbval1 = event;

            resizeevent_cb(this, cbval1);
            return;
        }
        QWizard::resizeEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void paintEvent(QPaintEvent* event) override {
        if (qwizard_paintevent_isbase) {
            qwizard_paintevent_isbase = false;
            QWizard::paintEvent(event);
            return;
        }
        auto paintevent_cb = qwizard_paintevent_callback;
        if (paintevent_cb) {
            QPaintEvent* cbval1 = event;

            paintevent_cb(this, cbval1);
            return;
        }
        QWizard::paintEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void done(int result) override {
        if (qwizard_done_isbase) {
            qwizard_done_isbase = false;
            QWizard::done(result);
            return;
        }
        auto done_cb = qwizard_done_callback;
        if (done_cb) {
            int cbval1 = result;

            done_cb(this, cbval1);
            return;
        }
        QWizard::done(result);
    }

    // Virtual method for C ABI access and custom callback
    virtual void initializePage(int id) override {
        if (qwizard_initializepage_isbase) {
            qwizard_initializepage_isbase = false;
            QWizard::initializePage(id);
            return;
        }
        auto initializepage_cb = qwizard_initializepage_callback;
        if (initializepage_cb) {
            int cbval1 = id;

            initializepage_cb(this, cbval1);
            return;
        }
        QWizard::initializePage(id);
    }

    // Virtual method for C ABI access and custom callback
    virtual void cleanupPage(int id) override {
        if (qwizard_cleanuppage_isbase) {
            qwizard_cleanuppage_isbase = false;
            QWizard::cleanupPage(id);
            return;
        }
        auto cleanuppage_cb = qwizard_cleanuppage_callback;
        if (cleanuppage_cb) {
            int cbval1 = id;

            cleanuppage_cb(this, cbval1);
            return;
        }
        QWizard::cleanupPage(id);
    }

    // Virtual method for C ABI access and custom callback
    virtual QSize minimumSizeHint() const override {
        if (qwizard_minimumsizehint_isbase) {
            qwizard_minimumsizehint_isbase = false;
            return QWizard::minimumSizeHint();
        }
        auto minimumsizehint_cb = qwizard_minimumsizehint_callback;
        if (minimumsizehint_cb) {
            QSize* callback_ret = minimumsizehint_cb();
            return *callback_ret;
        }
        return QWizard::minimumSizeHint();
    }

    // Virtual method for C ABI access and custom callback
    virtual void open() override {
        if (qwizard_open_isbase) {
            qwizard_open_isbase = false;
            QWizard::open();
            return;
        }
        auto open_cb = qwizard_open_callback;
        if (open_cb) {
            open_cb();
            return;
        }
        QWizard::open();
    }

    // Virtual method for C ABI access and custom callback
    virtual int exec() override {
        if (qwizard_exec_isbase) {
            qwizard_exec_isbase = false;
            return QWizard::exec();
        }
        auto exec_cb = qwizard_exec_callback;
        if (exec_cb) {
            int callback_ret = exec_cb();
            return static_cast<int>(callback_ret);
        }
        return QWizard::exec();
    }

    // Virtual method for C ABI access and custom callback
    virtual void accept() override {
        if (qwizard_accept_isbase) {
            qwizard_accept_isbase = false;
            QWizard::accept();
            return;
        }
        auto accept_cb = qwizard_accept_callback;
        if (accept_cb) {
            accept_cb();
            return;
        }
        QWizard::accept();
    }

    // Virtual method for C ABI access and custom callback
    virtual void reject() override {
        if (qwizard_reject_isbase) {
            qwizard_reject_isbase = false;
            QWizard::reject();
            return;
        }
        auto reject_cb = qwizard_reject_callback;
        if (reject_cb) {
            reject_cb();
            return;
        }
        QWizard::reject();
    }

    // Virtual method for C ABI access and custom callback
    virtual void keyPressEvent(QKeyEvent* param1) override {
        if (qwizard_keypressevent_isbase) {
            qwizard_keypressevent_isbase = false;
            QWizard::keyPressEvent(param1);
            return;
        }
        auto keypressevent_cb = qwizard_keypressevent_callback;
        if (keypressevent_cb) {
            QKeyEvent* cbval1 = param1;

            keypressevent_cb(this, cbval1);
            return;
        }
        QWizard::keyPressEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual void closeEvent(QCloseEvent* param1) override {
        if (qwizard_closeevent_isbase) {
            qwizard_closeevent_isbase = false;
            QWizard::closeEvent(param1);
            return;
        }
        auto closeevent_cb = qwizard_closeevent_callback;
        if (closeevent_cb) {
            QCloseEvent* cbval1 = param1;

            closeevent_cb(this, cbval1);
            return;
        }
        QWizard::closeEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual void showEvent(QShowEvent* param1) override {
        if (qwizard_showevent_isbase) {
            qwizard_showevent_isbase = false;
            QWizard::showEvent(param1);
            return;
        }
        auto showevent_cb = qwizard_showevent_callback;
        if (showevent_cb) {
            QShowEvent* cbval1 = param1;

            showevent_cb(this, cbval1);
            return;
        }
        QWizard::showEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual void contextMenuEvent(QContextMenuEvent* param1) override {
        if (qwizard_contextmenuevent_isbase) {
            qwizard_contextmenuevent_isbase = false;
            QWizard::contextMenuEvent(param1);
            return;
        }
        auto contextmenuevent_cb = qwizard_contextmenuevent_callback;
        if (contextmenuevent_cb) {
            QContextMenuEvent* cbval1 = param1;

            contextmenuevent_cb(this, cbval1);
            return;
        }
        QWizard::contextMenuEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* param1, QEvent* param2) override {
        if (qwizard_eventfilter_isbase) {
            qwizard_eventfilter_isbase = false;
            return QWizard::eventFilter(param1, param2);
        }
        auto eventfilter_cb = qwizard_eventfilter_callback;
        if (eventfilter_cb) {
            QObject* cbval1 = param1;
            QEvent* cbval2 = param2;

            bool callback_ret = eventfilter_cb(this, cbval1, cbval2);
            return callback_ret;
        }
        return QWizard::eventFilter(param1, param2);
    }

    // Virtual method for C ABI access and custom callback
    virtual int devType() const override {
        if (qwizard_devtype_isbase) {
            qwizard_devtype_isbase = false;
            return QWizard::devType();
        }
        auto devtype_cb = qwizard_devtype_callback;
        if (devtype_cb) {
            int callback_ret = devtype_cb();
            return static_cast<int>(callback_ret);
        }
        return QWizard::devType();
    }

    // Virtual method for C ABI access and custom callback
    virtual int heightForWidth(int param1) const override {
        if (qwizard_heightforwidth_isbase) {
            qwizard_heightforwidth_isbase = false;
            return QWizard::heightForWidth(param1);
        }
        auto heightforwidth_cb = qwizard_heightforwidth_callback;
        if (heightforwidth_cb) {
            int cbval1 = param1;

            int callback_ret = heightforwidth_cb(this, cbval1);
            return static_cast<int>(callback_ret);
        }
        return QWizard::heightForWidth(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool hasHeightForWidth() const override {
        if (qwizard_hasheightforwidth_isbase) {
            qwizard_hasheightforwidth_isbase = false;
            return QWizard::hasHeightForWidth();
        }
        auto hasheightforwidth_cb = qwizard_hasheightforwidth_callback;
        if (hasheightforwidth_cb) {
            bool callback_ret = hasheightforwidth_cb();
            return callback_ret;
        }
        return QWizard::hasHeightForWidth();
    }

    // Virtual method for C ABI access and custom callback
    virtual QPaintEngine* paintEngine() const override {
        if (qwizard_paintengine_isbase) {
            qwizard_paintengine_isbase = false;
            return QWizard::paintEngine();
        }
        auto paintengine_cb = qwizard_paintengine_callback;
        if (paintengine_cb) {
            QPaintEngine* callback_ret = paintengine_cb();
            return callback_ret;
        }
        return QWizard::paintEngine();
    }

    // Virtual method for C ABI access and custom callback
    virtual void mousePressEvent(QMouseEvent* event) override {
        if (qwizard_mousepressevent_isbase) {
            qwizard_mousepressevent_isbase = false;
            QWizard::mousePressEvent(event);
            return;
        }
        auto mousepressevent_cb = qwizard_mousepressevent_callback;
        if (mousepressevent_cb) {
            QMouseEvent* cbval1 = event;

            mousepressevent_cb(this, cbval1);
            return;
        }
        QWizard::mousePressEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseReleaseEvent(QMouseEvent* event) override {
        if (qwizard_mousereleaseevent_isbase) {
            qwizard_mousereleaseevent_isbase = false;
            QWizard::mouseReleaseEvent(event);
            return;
        }
        auto mousereleaseevent_cb = qwizard_mousereleaseevent_callback;
        if (mousereleaseevent_cb) {
            QMouseEvent* cbval1 = event;

            mousereleaseevent_cb(this, cbval1);
            return;
        }
        QWizard::mouseReleaseEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseDoubleClickEvent(QMouseEvent* event) override {
        if (qwizard_mousedoubleclickevent_isbase) {
            qwizard_mousedoubleclickevent_isbase = false;
            QWizard::mouseDoubleClickEvent(event);
            return;
        }
        auto mousedoubleclickevent_cb = qwizard_mousedoubleclickevent_callback;
        if (mousedoubleclickevent_cb) {
            QMouseEvent* cbval1 = event;

            mousedoubleclickevent_cb(this, cbval1);
            return;
        }
        QWizard::mouseDoubleClickEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseMoveEvent(QMouseEvent* event) override {
        if (qwizard_mousemoveevent_isbase) {
            qwizard_mousemoveevent_isbase = false;
            QWizard::mouseMoveEvent(event);
            return;
        }
        auto mousemoveevent_cb = qwizard_mousemoveevent_callback;
        if (mousemoveevent_cb) {
            QMouseEvent* cbval1 = event;

            mousemoveevent_cb(this, cbval1);
            return;
        }
        QWizard::mouseMoveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void wheelEvent(QWheelEvent* event) override {
        if (qwizard_wheelevent_isbase) {
            qwizard_wheelevent_isbase = false;
            QWizard::wheelEvent(event);
            return;
        }
        auto wheelevent_cb = qwizard_wheelevent_callback;
        if (wheelevent_cb) {
            QWheelEvent* cbval1 = event;

            wheelevent_cb(this, cbval1);
            return;
        }
        QWizard::wheelEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void keyReleaseEvent(QKeyEvent* event) override {
        if (qwizard_keyreleaseevent_isbase) {
            qwizard_keyreleaseevent_isbase = false;
            QWizard::keyReleaseEvent(event);
            return;
        }
        auto keyreleaseevent_cb = qwizard_keyreleaseevent_callback;
        if (keyreleaseevent_cb) {
            QKeyEvent* cbval1 = event;

            keyreleaseevent_cb(this, cbval1);
            return;
        }
        QWizard::keyReleaseEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void focusInEvent(QFocusEvent* event) override {
        if (qwizard_focusinevent_isbase) {
            qwizard_focusinevent_isbase = false;
            QWizard::focusInEvent(event);
            return;
        }
        auto focusinevent_cb = qwizard_focusinevent_callback;
        if (focusinevent_cb) {
            QFocusEvent* cbval1 = event;

            focusinevent_cb(this, cbval1);
            return;
        }
        QWizard::focusInEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void focusOutEvent(QFocusEvent* event) override {
        if (qwizard_focusoutevent_isbase) {
            qwizard_focusoutevent_isbase = false;
            QWizard::focusOutEvent(event);
            return;
        }
        auto focusoutevent_cb = qwizard_focusoutevent_callback;
        if (focusoutevent_cb) {
            QFocusEvent* cbval1 = event;

            focusoutevent_cb(this, cbval1);
            return;
        }
        QWizard::focusOutEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void enterEvent(QEnterEvent* event) override {
        if (qwizard_enterevent_isbase) {
            qwizard_enterevent_isbase = false;
            QWizard::enterEvent(event);
            return;
        }
        auto enterevent_cb = qwizard_enterevent_callback;
        if (enterevent_cb) {
            QEnterEvent* cbval1 = event;

            enterevent_cb(this, cbval1);
            return;
        }
        QWizard::enterEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void leaveEvent(QEvent* event) override {
        if (qwizard_leaveevent_isbase) {
            qwizard_leaveevent_isbase = false;
            QWizard::leaveEvent(event);
            return;
        }
        auto leaveevent_cb = qwizard_leaveevent_callback;
        if (leaveevent_cb) {
            QEvent* cbval1 = event;

            leaveevent_cb(this, cbval1);
            return;
        }
        QWizard::leaveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void moveEvent(QMoveEvent* event) override {
        if (qwizard_moveevent_isbase) {
            qwizard_moveevent_isbase = false;
            QWizard::moveEvent(event);
            return;
        }
        auto moveevent_cb = qwizard_moveevent_callback;
        if (moveevent_cb) {
            QMoveEvent* cbval1 = event;

            moveevent_cb(this, cbval1);
            return;
        }
        QWizard::moveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void tabletEvent(QTabletEvent* event) override {
        if (qwizard_tabletevent_isbase) {
            qwizard_tabletevent_isbase = false;
            QWizard::tabletEvent(event);
            return;
        }
        auto tabletevent_cb = qwizard_tabletevent_callback;
        if (tabletevent_cb) {
            QTabletEvent* cbval1 = event;

            tabletevent_cb(this, cbval1);
            return;
        }
        QWizard::tabletEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void actionEvent(QActionEvent* event) override {
        if (qwizard_actionevent_isbase) {
            qwizard_actionevent_isbase = false;
            QWizard::actionEvent(event);
            return;
        }
        auto actionevent_cb = qwizard_actionevent_callback;
        if (actionevent_cb) {
            QActionEvent* cbval1 = event;

            actionevent_cb(this, cbval1);
            return;
        }
        QWizard::actionEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragEnterEvent(QDragEnterEvent* event) override {
        if (qwizard_dragenterevent_isbase) {
            qwizard_dragenterevent_isbase = false;
            QWizard::dragEnterEvent(event);
            return;
        }
        auto dragenterevent_cb = qwizard_dragenterevent_callback;
        if (dragenterevent_cb) {
            QDragEnterEvent* cbval1 = event;

            dragenterevent_cb(this, cbval1);
            return;
        }
        QWizard::dragEnterEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragMoveEvent(QDragMoveEvent* event) override {
        if (qwizard_dragmoveevent_isbase) {
            qwizard_dragmoveevent_isbase = false;
            QWizard::dragMoveEvent(event);
            return;
        }
        auto dragmoveevent_cb = qwizard_dragmoveevent_callback;
        if (dragmoveevent_cb) {
            QDragMoveEvent* cbval1 = event;

            dragmoveevent_cb(this, cbval1);
            return;
        }
        QWizard::dragMoveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragLeaveEvent(QDragLeaveEvent* event) override {
        if (qwizard_dragleaveevent_isbase) {
            qwizard_dragleaveevent_isbase = false;
            QWizard::dragLeaveEvent(event);
            return;
        }
        auto dragleaveevent_cb = qwizard_dragleaveevent_callback;
        if (dragleaveevent_cb) {
            QDragLeaveEvent* cbval1 = event;

            dragleaveevent_cb(this, cbval1);
            return;
        }
        QWizard::dragLeaveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void dropEvent(QDropEvent* event) override {
        if (qwizard_dropevent_isbase) {
            qwizard_dropevent_isbase = false;
            QWizard::dropEvent(event);
            return;
        }
        auto dropevent_cb = qwizard_dropevent_callback;
        if (dropevent_cb) {
            QDropEvent* cbval1 = event;

            dropevent_cb(this, cbval1);
            return;
        }
        QWizard::dropEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void hideEvent(QHideEvent* event) override {
        if (qwizard_hideevent_isbase) {
            qwizard_hideevent_isbase = false;
            QWizard::hideEvent(event);
            return;
        }
        auto hideevent_cb = qwizard_hideevent_callback;
        if (hideevent_cb) {
            QHideEvent* cbval1 = event;

            hideevent_cb(this, cbval1);
            return;
        }
        QWizard::hideEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool nativeEvent(const QByteArray& eventType, void* message, qintptr* result) override {
        if (qwizard_nativeevent_isbase) {
            qwizard_nativeevent_isbase = false;
            return QWizard::nativeEvent(eventType, message, result);
        }
        auto nativeevent_cb = qwizard_nativeevent_callback;
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
        return QWizard::nativeEvent(eventType, message, result);
    }

    // Virtual method for C ABI access and custom callback
    virtual void changeEvent(QEvent* param1) override {
        if (qwizard_changeevent_isbase) {
            qwizard_changeevent_isbase = false;
            QWizard::changeEvent(param1);
            return;
        }
        auto changeevent_cb = qwizard_changeevent_callback;
        if (changeevent_cb) {
            QEvent* cbval1 = param1;

            changeevent_cb(this, cbval1);
            return;
        }
        QWizard::changeEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual int metric(QPaintDevice::PaintDeviceMetric param1) const override {
        if (qwizard_metric_isbase) {
            qwizard_metric_isbase = false;
            return QWizard::metric(param1);
        }
        auto metric_cb = qwizard_metric_callback;
        if (metric_cb) {
            int cbval1 = static_cast<int>(param1);

            int callback_ret = metric_cb(this, cbval1);
            return static_cast<int>(callback_ret);
        }
        return QWizard::metric(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual void initPainter(QPainter* painter) const override {
        if (qwizard_initpainter_isbase) {
            qwizard_initpainter_isbase = false;
            QWizard::initPainter(painter);
            return;
        }
        auto initpainter_cb = qwizard_initpainter_callback;
        if (initpainter_cb) {
            QPainter* cbval1 = painter;

            initpainter_cb(this, cbval1);
            return;
        }
        QWizard::initPainter(painter);
    }

    // Virtual method for C ABI access and custom callback
    virtual QPaintDevice* redirected(QPoint* offset) const override {
        if (qwizard_redirected_isbase) {
            qwizard_redirected_isbase = false;
            return QWizard::redirected(offset);
        }
        auto redirected_cb = qwizard_redirected_callback;
        if (redirected_cb) {
            QPoint* cbval1 = offset;

            QPaintDevice* callback_ret = redirected_cb(this, cbval1);
            return callback_ret;
        }
        return QWizard::redirected(offset);
    }

    // Virtual method for C ABI access and custom callback
    virtual QPainter* sharedPainter() const override {
        if (qwizard_sharedpainter_isbase) {
            qwizard_sharedpainter_isbase = false;
            return QWizard::sharedPainter();
        }
        auto sharedpainter_cb = qwizard_sharedpainter_callback;
        if (sharedpainter_cb) {
            QPainter* callback_ret = sharedpainter_cb();
            return callback_ret;
        }
        return QWizard::sharedPainter();
    }

    // Virtual method for C ABI access and custom callback
    virtual void inputMethodEvent(QInputMethodEvent* param1) override {
        if (qwizard_inputmethodevent_isbase) {
            qwizard_inputmethodevent_isbase = false;
            QWizard::inputMethodEvent(param1);
            return;
        }
        auto inputmethodevent_cb = qwizard_inputmethodevent_callback;
        if (inputmethodevent_cb) {
            QInputMethodEvent* cbval1 = param1;

            inputmethodevent_cb(this, cbval1);
            return;
        }
        QWizard::inputMethodEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual QVariant inputMethodQuery(Qt::InputMethodQuery param1) const override {
        if (qwizard_inputmethodquery_isbase) {
            qwizard_inputmethodquery_isbase = false;
            return QWizard::inputMethodQuery(param1);
        }
        auto inputmethodquery_cb = qwizard_inputmethodquery_callback;
        if (inputmethodquery_cb) {
            int cbval1 = static_cast<int>(param1);

            QVariant* callback_ret = inputmethodquery_cb(this, cbval1);
            return *callback_ret;
        }
        return QWizard::inputMethodQuery(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool focusNextPrevChild(bool next) override {
        if (qwizard_focusnextprevchild_isbase) {
            qwizard_focusnextprevchild_isbase = false;
            return QWizard::focusNextPrevChild(next);
        }
        auto focusnextprevchild_cb = qwizard_focusnextprevchild_callback;
        if (focusnextprevchild_cb) {
            bool cbval1 = next;

            bool callback_ret = focusnextprevchild_cb(this, cbval1);
            return callback_ret;
        }
        return QWizard::focusNextPrevChild(next);
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (qwizard_timerevent_isbase) {
            qwizard_timerevent_isbase = false;
            QWizard::timerEvent(event);
            return;
        }
        auto timerevent_cb = qwizard_timerevent_callback;
        if (timerevent_cb) {
            QTimerEvent* cbval1 = event;

            timerevent_cb(this, cbval1);
            return;
        }
        QWizard::timerEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (qwizard_childevent_isbase) {
            qwizard_childevent_isbase = false;
            QWizard::childEvent(event);
            return;
        }
        auto childevent_cb = qwizard_childevent_callback;
        if (childevent_cb) {
            QChildEvent* cbval1 = event;

            childevent_cb(this, cbval1);
            return;
        }
        QWizard::childEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (qwizard_customevent_isbase) {
            qwizard_customevent_isbase = false;
            QWizard::customEvent(event);
            return;
        }
        auto customevent_cb = qwizard_customevent_callback;
        if (customevent_cb) {
            QEvent* cbval1 = event;

            customevent_cb(this, cbval1);
            return;
        }
        QWizard::customEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (qwizard_connectnotify_isbase) {
            qwizard_connectnotify_isbase = false;
            QWizard::connectNotify(signal);
            return;
        }
        auto connectnotify_cb = qwizard_connectnotify_callback;
        if (connectnotify_cb) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            connectnotify_cb(this, cbval1);
            return;
        }
        QWizard::connectNotify(signal);
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (qwizard_disconnectnotify_isbase) {
            qwizard_disconnectnotify_isbase = false;
            QWizard::disconnectNotify(signal);
            return;
        }
        auto disconnectnotify_cb = qwizard_disconnectnotify_callback;
        if (disconnectnotify_cb) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            disconnectnotify_cb(this, cbval1);
            return;
        }
        QWizard::disconnectNotify(signal);
    }

    // Virtual method for C ABI access and custom callback
    void adjustPosition(QWidget* param1) {
        if (qwizard_adjustposition_isbase) {
            qwizard_adjustposition_isbase = false;
            QWizard::adjustPosition(param1);
            return;
        }
        auto adjustposition_cb = qwizard_adjustposition_callback;
        if (adjustposition_cb) {
            QWidget* cbval1 = param1;

            adjustposition_cb(this, cbval1);
            return;
        }
        QWizard::adjustPosition(param1);
    }

    // Virtual method for C ABI access and custom callback
    void updateMicroFocus() {
        if (qwizard_updatemicrofocus_isbase) {
            qwizard_updatemicrofocus_isbase = false;
            QWizard::updateMicroFocus();
            return;
        }
        auto updatemicrofocus_cb = qwizard_updatemicrofocus_callback;
        if (updatemicrofocus_cb) {
            updatemicrofocus_cb();
            return;
        }
        QWizard::updateMicroFocus();
    }

    // Virtual method for C ABI access and custom callback
    void create() {
        if (qwizard_create_isbase) {
            qwizard_create_isbase = false;
            QWizard::create();
            return;
        }
        auto create_cb = qwizard_create_callback;
        if (create_cb) {
            create_cb();
            return;
        }
        QWizard::create();
    }

    // Virtual method for C ABI access and custom callback
    void destroy() {
        if (qwizard_destroy_isbase) {
            qwizard_destroy_isbase = false;
            QWizard::destroy();
            return;
        }
        auto destroy_cb = qwizard_destroy_callback;
        if (destroy_cb) {
            destroy_cb();
            return;
        }
        QWizard::destroy();
    }

    // Virtual method for C ABI access and custom callback
    bool focusNextChild() {
        if (qwizard_focusnextchild_isbase) {
            qwizard_focusnextchild_isbase = false;
            return QWizard::focusNextChild();
        }
        auto focusnextchild_cb = qwizard_focusnextchild_callback;
        if (focusnextchild_cb) {
            bool callback_ret = focusnextchild_cb();
            return callback_ret;
        }
        return QWizard::focusNextChild();
    }

    // Virtual method for C ABI access and custom callback
    bool focusPreviousChild() {
        if (qwizard_focuspreviouschild_isbase) {
            qwizard_focuspreviouschild_isbase = false;
            return QWizard::focusPreviousChild();
        }
        auto focuspreviouschild_cb = qwizard_focuspreviouschild_callback;
        if (focuspreviouschild_cb) {
            bool callback_ret = focuspreviouschild_cb();
            return callback_ret;
        }
        return QWizard::focusPreviousChild();
    }

    // Virtual method for C ABI access and custom callback
    QObject* sender() const {
        if (qwizard_sender_isbase) {
            qwizard_sender_isbase = false;
            return QWizard::sender();
        }
        auto sender_cb = qwizard_sender_callback;
        if (sender_cb) {
            QObject* callback_ret = sender_cb();
            return callback_ret;
        }
        return QWizard::sender();
    }

    // Virtual method for C ABI access and custom callback
    int senderSignalIndex() const {
        if (qwizard_sendersignalindex_isbase) {
            qwizard_sendersignalindex_isbase = false;
            return QWizard::senderSignalIndex();
        }
        auto sendersignalindex_cb = qwizard_sendersignalindex_callback;
        if (sendersignalindex_cb) {
            int callback_ret = sendersignalindex_cb();
            return static_cast<int>(callback_ret);
        }
        return QWizard::senderSignalIndex();
    }

    // Virtual method for C ABI access and custom callback
    int receivers(const char* signal) const {
        if (qwizard_receivers_isbase) {
            qwizard_receivers_isbase = false;
            return QWizard::receivers(signal);
        }
        auto receivers_cb = qwizard_receivers_callback;
        if (receivers_cb) {
            const char* cbval1 = (const char*)signal;

            int callback_ret = receivers_cb(this, cbval1);
            return static_cast<int>(callback_ret);
        }
        return QWizard::receivers(signal);
    }

    // Virtual method for C ABI access and custom callback
    bool isSignalConnected(const QMetaMethod& signal) const {
        if (qwizard_issignalconnected_isbase) {
            qwizard_issignalconnected_isbase = false;
            return QWizard::isSignalConnected(signal);
        }
        auto issignalconnected_cb = qwizard_issignalconnected_callback;
        if (issignalconnected_cb) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            bool callback_ret = issignalconnected_cb(this, cbval1);
            return callback_ret;
        }
        return QWizard::isSignalConnected(signal);
    }

    // Virtual method for C ABI access and custom callback
    double getDecodedMetricF(QPaintDevice::PaintDeviceMetric metricA, QPaintDevice::PaintDeviceMetric metricB) const {
        if (qwizard_getdecodedmetricf_isbase) {
            qwizard_getdecodedmetricf_isbase = false;
            return QWizard::getDecodedMetricF(metricA, metricB);
        }
        auto getdecodedmetricf_cb = qwizard_getdecodedmetricf_callback;
        if (getdecodedmetricf_cb) {
            int cbval1 = static_cast<int>(metricA);
            int cbval2 = static_cast<int>(metricB);

            double callback_ret = getdecodedmetricf_cb(this, cbval1, cbval2);
            return static_cast<double>(callback_ret);
        }
        return QWizard::getDecodedMetricF(metricA, metricB);
    }

    // Friend functions
    friend bool QWizard_Event(QWizard* self, QEvent* event);
    friend bool QWizard_SuperEvent(QWizard* self, QEvent* event);
    friend void QWizard_ResizeEvent(QWizard* self, QResizeEvent* event);
    friend void QWizard_SuperResizeEvent(QWizard* self, QResizeEvent* event);
    friend void QWizard_PaintEvent(QWizard* self, QPaintEvent* event);
    friend void QWizard_SuperPaintEvent(QWizard* self, QPaintEvent* event);
    friend void QWizard_Done(QWizard* self, int result);
    friend void QWizard_SuperDone(QWizard* self, int result);
    friend void QWizard_InitializePage(QWizard* self, int id);
    friend void QWizard_SuperInitializePage(QWizard* self, int id);
    friend void QWizard_CleanupPage(QWizard* self, int id);
    friend void QWizard_SuperCleanupPage(QWizard* self, int id);
    friend void QWizard_KeyPressEvent(QWizard* self, QKeyEvent* param1);
    friend void QWizard_SuperKeyPressEvent(QWizard* self, QKeyEvent* param1);
    friend void QWizard_CloseEvent(QWizard* self, QCloseEvent* param1);
    friend void QWizard_SuperCloseEvent(QWizard* self, QCloseEvent* param1);
    friend void QWizard_ShowEvent(QWizard* self, QShowEvent* param1);
    friend void QWizard_SuperShowEvent(QWizard* self, QShowEvent* param1);
    friend void QWizard_ContextMenuEvent(QWizard* self, QContextMenuEvent* param1);
    friend void QWizard_SuperContextMenuEvent(QWizard* self, QContextMenuEvent* param1);
    friend bool QWizard_EventFilter(QWizard* self, QObject* param1, QEvent* param2);
    friend bool QWizard_SuperEventFilter(QWizard* self, QObject* param1, QEvent* param2);
    friend void QWizard_MousePressEvent(QWizard* self, QMouseEvent* event);
    friend void QWizard_SuperMousePressEvent(QWizard* self, QMouseEvent* event);
    friend void QWizard_MouseReleaseEvent(QWizard* self, QMouseEvent* event);
    friend void QWizard_SuperMouseReleaseEvent(QWizard* self, QMouseEvent* event);
    friend void QWizard_MouseDoubleClickEvent(QWizard* self, QMouseEvent* event);
    friend void QWizard_SuperMouseDoubleClickEvent(QWizard* self, QMouseEvent* event);
    friend void QWizard_MouseMoveEvent(QWizard* self, QMouseEvent* event);
    friend void QWizard_SuperMouseMoveEvent(QWizard* self, QMouseEvent* event);
    friend void QWizard_WheelEvent(QWizard* self, QWheelEvent* event);
    friend void QWizard_SuperWheelEvent(QWizard* self, QWheelEvent* event);
    friend void QWizard_KeyReleaseEvent(QWizard* self, QKeyEvent* event);
    friend void QWizard_SuperKeyReleaseEvent(QWizard* self, QKeyEvent* event);
    friend void QWizard_FocusInEvent(QWizard* self, QFocusEvent* event);
    friend void QWizard_SuperFocusInEvent(QWizard* self, QFocusEvent* event);
    friend void QWizard_FocusOutEvent(QWizard* self, QFocusEvent* event);
    friend void QWizard_SuperFocusOutEvent(QWizard* self, QFocusEvent* event);
    friend void QWizard_EnterEvent(QWizard* self, QEnterEvent* event);
    friend void QWizard_SuperEnterEvent(QWizard* self, QEnterEvent* event);
    friend void QWizard_LeaveEvent(QWizard* self, QEvent* event);
    friend void QWizard_SuperLeaveEvent(QWizard* self, QEvent* event);
    friend void QWizard_MoveEvent(QWizard* self, QMoveEvent* event);
    friend void QWizard_SuperMoveEvent(QWizard* self, QMoveEvent* event);
    friend void QWizard_TabletEvent(QWizard* self, QTabletEvent* event);
    friend void QWizard_SuperTabletEvent(QWizard* self, QTabletEvent* event);
    friend void QWizard_ActionEvent(QWizard* self, QActionEvent* event);
    friend void QWizard_SuperActionEvent(QWizard* self, QActionEvent* event);
    friend void QWizard_DragEnterEvent(QWizard* self, QDragEnterEvent* event);
    friend void QWizard_SuperDragEnterEvent(QWizard* self, QDragEnterEvent* event);
    friend void QWizard_DragMoveEvent(QWizard* self, QDragMoveEvent* event);
    friend void QWizard_SuperDragMoveEvent(QWizard* self, QDragMoveEvent* event);
    friend void QWizard_DragLeaveEvent(QWizard* self, QDragLeaveEvent* event);
    friend void QWizard_SuperDragLeaveEvent(QWizard* self, QDragLeaveEvent* event);
    friend void QWizard_DropEvent(QWizard* self, QDropEvent* event);
    friend void QWizard_SuperDropEvent(QWizard* self, QDropEvent* event);
    friend void QWizard_HideEvent(QWizard* self, QHideEvent* event);
    friend void QWizard_SuperHideEvent(QWizard* self, QHideEvent* event);
    friend bool QWizard_NativeEvent(QWizard* self, const libqt_string eventType, void* message, intptr_t* result);
    friend bool QWizard_SuperNativeEvent(QWizard* self, const libqt_string eventType, void* message, intptr_t* result);
    friend void QWizard_ChangeEvent(QWizard* self, QEvent* param1);
    friend void QWizard_SuperChangeEvent(QWizard* self, QEvent* param1);
    friend int QWizard_Metric(const QWizard* self, int param1);
    friend int QWizard_SuperMetric(const QWizard* self, int param1);
    friend void QWizard_InitPainter(const QWizard* self, QPainter* painter);
    friend void QWizard_SuperInitPainter(const QWizard* self, QPainter* painter);
    friend QPaintDevice* QWizard_Redirected(const QWizard* self, QPoint* offset);
    friend QPaintDevice* QWizard_SuperRedirected(const QWizard* self, QPoint* offset);
    friend QPainter* QWizard_SharedPainter(const QWizard* self);
    friend QPainter* QWizard_SuperSharedPainter(const QWizard* self);
    friend void QWizard_InputMethodEvent(QWizard* self, QInputMethodEvent* param1);
    friend void QWizard_SuperInputMethodEvent(QWizard* self, QInputMethodEvent* param1);
    friend bool QWizard_FocusNextPrevChild(QWizard* self, bool next);
    friend bool QWizard_SuperFocusNextPrevChild(QWizard* self, bool next);
    friend void QWizard_TimerEvent(QWizard* self, QTimerEvent* event);
    friend void QWizard_SuperTimerEvent(QWizard* self, QTimerEvent* event);
    friend void QWizard_ChildEvent(QWizard* self, QChildEvent* event);
    friend void QWizard_SuperChildEvent(QWizard* self, QChildEvent* event);
    friend void QWizard_CustomEvent(QWizard* self, QEvent* event);
    friend void QWizard_SuperCustomEvent(QWizard* self, QEvent* event);
    friend void QWizard_ConnectNotify(QWizard* self, const QMetaMethod* signal);
    friend void QWizard_SuperConnectNotify(QWizard* self, const QMetaMethod* signal);
    friend void QWizard_DisconnectNotify(QWizard* self, const QMetaMethod* signal);
    friend void QWizard_SuperDisconnectNotify(QWizard* self, const QMetaMethod* signal);
    friend void QWizard_AdjustPosition(QWizard* self, QWidget* param1);
    friend void QWizard_SuperAdjustPosition(QWizard* self, QWidget* param1);
    friend void QWizard_UpdateMicroFocus(QWizard* self);
    friend void QWizard_SuperUpdateMicroFocus(QWizard* self);
    friend void QWizard_Create(QWizard* self);
    friend void QWizard_SuperCreate(QWizard* self);
    friend void QWizard_Destroy(QWizard* self);
    friend void QWizard_SuperDestroy(QWizard* self);
    friend bool QWizard_FocusNextChild(QWizard* self);
    friend bool QWizard_SuperFocusNextChild(QWizard* self);
    friend bool QWizard_FocusPreviousChild(QWizard* self);
    friend bool QWizard_SuperFocusPreviousChild(QWizard* self);
    friend QObject* QWizard_Sender(const QWizard* self);
    friend QObject* QWizard_SuperSender(const QWizard* self);
    friend int QWizard_SenderSignalIndex(const QWizard* self);
    friend int QWizard_SuperSenderSignalIndex(const QWizard* self);
    friend int QWizard_Receivers(const QWizard* self, const char* signal);
    friend int QWizard_SuperReceivers(const QWizard* self, const char* signal);
    friend bool QWizard_IsSignalConnected(const QWizard* self, const QMetaMethod* signal);
    friend bool QWizard_SuperIsSignalConnected(const QWizard* self, const QMetaMethod* signal);
    friend double QWizard_GetDecodedMetricF(const QWizard* self, int metricA, int metricB);
    friend double QWizard_SuperGetDecodedMetricF(const QWizard* self, int metricA, int metricB);
};

// This class is a subclass of QWizardPage so that we can call protected methods
class VirtualQWizardPage final : public QWizardPage {

  public:
    // Virtual class boolean flag
    bool isVirtualQWizardPage = true;

    // Virtual class public types (including callbacks)
    using QWizardPage_MetaObject_Callback = QMetaObject* (*)();
    using QWizardPage_Metacast_Callback = void* (*)(QWizardPage*, const char*);
    using QWizardPage_Metacall_Callback = int (*)(QWizardPage*, int, int, void**);
    using QWizardPage_InitializePage_Callback = void (*)();
    using QWizardPage_CleanupPage_Callback = void (*)();
    using QWizardPage_ValidatePage_Callback = bool (*)();
    using QWizardPage_IsComplete_Callback = bool (*)();
    using QWizardPage_NextId_Callback = int (*)();
    using QWizardPage_DevType_Callback = int (*)();
    using QWizardPage_SetVisible_Callback = void (*)(QWizardPage*, bool);
    using QWizardPage_SizeHint_Callback = QSize* (*)();
    using QWizardPage_MinimumSizeHint_Callback = QSize* (*)();
    using QWizardPage_HeightForWidth_Callback = int (*)(const QWizardPage*, int);
    using QWizardPage_HasHeightForWidth_Callback = bool (*)();
    using QWizardPage_PaintEngine_Callback = QPaintEngine* (*)();
    using QWizardPage_Event_Callback = bool (*)(QWizardPage*, QEvent*);
    using QWizardPage_MousePressEvent_Callback = void (*)(QWizardPage*, QMouseEvent*);
    using QWizardPage_MouseReleaseEvent_Callback = void (*)(QWizardPage*, QMouseEvent*);
    using QWizardPage_MouseDoubleClickEvent_Callback = void (*)(QWizardPage*, QMouseEvent*);
    using QWizardPage_MouseMoveEvent_Callback = void (*)(QWizardPage*, QMouseEvent*);
    using QWizardPage_WheelEvent_Callback = void (*)(QWizardPage*, QWheelEvent*);
    using QWizardPage_KeyPressEvent_Callback = void (*)(QWizardPage*, QKeyEvent*);
    using QWizardPage_KeyReleaseEvent_Callback = void (*)(QWizardPage*, QKeyEvent*);
    using QWizardPage_FocusInEvent_Callback = void (*)(QWizardPage*, QFocusEvent*);
    using QWizardPage_FocusOutEvent_Callback = void (*)(QWizardPage*, QFocusEvent*);
    using QWizardPage_EnterEvent_Callback = void (*)(QWizardPage*, QEnterEvent*);
    using QWizardPage_LeaveEvent_Callback = void (*)(QWizardPage*, QEvent*);
    using QWizardPage_PaintEvent_Callback = void (*)(QWizardPage*, QPaintEvent*);
    using QWizardPage_MoveEvent_Callback = void (*)(QWizardPage*, QMoveEvent*);
    using QWizardPage_ResizeEvent_Callback = void (*)(QWizardPage*, QResizeEvent*);
    using QWizardPage_CloseEvent_Callback = void (*)(QWizardPage*, QCloseEvent*);
    using QWizardPage_ContextMenuEvent_Callback = void (*)(QWizardPage*, QContextMenuEvent*);
    using QWizardPage_TabletEvent_Callback = void (*)(QWizardPage*, QTabletEvent*);
    using QWizardPage_ActionEvent_Callback = void (*)(QWizardPage*, QActionEvent*);
    using QWizardPage_DragEnterEvent_Callback = void (*)(QWizardPage*, QDragEnterEvent*);
    using QWizardPage_DragMoveEvent_Callback = void (*)(QWizardPage*, QDragMoveEvent*);
    using QWizardPage_DragLeaveEvent_Callback = void (*)(QWizardPage*, QDragLeaveEvent*);
    using QWizardPage_DropEvent_Callback = void (*)(QWizardPage*, QDropEvent*);
    using QWizardPage_ShowEvent_Callback = void (*)(QWizardPage*, QShowEvent*);
    using QWizardPage_HideEvent_Callback = void (*)(QWizardPage*, QHideEvent*);
    using QWizardPage_NativeEvent_Callback = bool (*)(QWizardPage*, libqt_string, void*, intptr_t*);
    using QWizardPage_ChangeEvent_Callback = void (*)(QWizardPage*, QEvent*);
    using QWizardPage_Metric_Callback = int (*)(const QWizardPage*, int);
    using QWizardPage_InitPainter_Callback = void (*)(const QWizardPage*, QPainter*);
    using QWizardPage_Redirected_Callback = QPaintDevice* (*)(const QWizardPage*, QPoint*);
    using QWizardPage_SharedPainter_Callback = QPainter* (*)();
    using QWizardPage_InputMethodEvent_Callback = void (*)(QWizardPage*, QInputMethodEvent*);
    using QWizardPage_InputMethodQuery_Callback = QVariant* (*)(const QWizardPage*, int);
    using QWizardPage_FocusNextPrevChild_Callback = bool (*)(QWizardPage*, bool);
    using QWizardPage_EventFilter_Callback = bool (*)(QWizardPage*, QObject*, QEvent*);
    using QWizardPage_TimerEvent_Callback = void (*)(QWizardPage*, QTimerEvent*);
    using QWizardPage_ChildEvent_Callback = void (*)(QWizardPage*, QChildEvent*);
    using QWizardPage_CustomEvent_Callback = void (*)(QWizardPage*, QEvent*);
    using QWizardPage_ConnectNotify_Callback = void (*)(QWizardPage*, QMetaMethod*);
    using QWizardPage_DisconnectNotify_Callback = void (*)(QWizardPage*, QMetaMethod*);
    using QWizardPage_SetField_Callback = void (*)(QWizardPage*, const char*, QVariant*);
    using QWizardPage_Field_Callback = QVariant* (*)(const QWizardPage*, const char*);
    using QWizardPage_RegisterField_Callback = void (*)(QWizardPage*, const char*, QWidget*);
    using QWizardPage_Wizard_Callback = QWizard* (*)();
    using QWizardPage_RegisterField3_Callback = void (*)(QWizardPage*, const char*, QWidget*, const char*);
    using QWizardPage_RegisterField4_Callback = void (*)(QWizardPage*, const char*, QWidget*, const char*, const char*);
    using QWizardPage_UpdateMicroFocus_Callback = void (*)();
    using QWizardPage_Create_Callback = void (*)();
    using QWizardPage_Destroy_Callback = void (*)();
    using QWizardPage_FocusNextChild_Callback = bool (*)();
    using QWizardPage_FocusPreviousChild_Callback = bool (*)();
    using QWizardPage_Sender_Callback = QObject* (*)();
    using QWizardPage_SenderSignalIndex_Callback = int (*)();
    using QWizardPage_Receivers_Callback = int (*)(const QWizardPage*, const char*);
    using QWizardPage_IsSignalConnected_Callback = bool (*)(const QWizardPage*, QMetaMethod*);
    using QWizardPage_GetDecodedMetricF_Callback = double (*)(const QWizardPage*, int, int);

  protected:
    // Instance callback storage
    QWizardPage_MetaObject_Callback qwizardpage_metaobject_callback = nullptr;
    QWizardPage_Metacast_Callback qwizardpage_metacast_callback = nullptr;
    QWizardPage_Metacall_Callback qwizardpage_metacall_callback = nullptr;
    QWizardPage_InitializePage_Callback qwizardpage_initializepage_callback = nullptr;
    QWizardPage_CleanupPage_Callback qwizardpage_cleanuppage_callback = nullptr;
    QWizardPage_ValidatePage_Callback qwizardpage_validatepage_callback = nullptr;
    QWizardPage_IsComplete_Callback qwizardpage_iscomplete_callback = nullptr;
    QWizardPage_NextId_Callback qwizardpage_nextid_callback = nullptr;
    QWizardPage_DevType_Callback qwizardpage_devtype_callback = nullptr;
    QWizardPage_SetVisible_Callback qwizardpage_setvisible_callback = nullptr;
    QWizardPage_SizeHint_Callback qwizardpage_sizehint_callback = nullptr;
    QWizardPage_MinimumSizeHint_Callback qwizardpage_minimumsizehint_callback = nullptr;
    QWizardPage_HeightForWidth_Callback qwizardpage_heightforwidth_callback = nullptr;
    QWizardPage_HasHeightForWidth_Callback qwizardpage_hasheightforwidth_callback = nullptr;
    QWizardPage_PaintEngine_Callback qwizardpage_paintengine_callback = nullptr;
    QWizardPage_Event_Callback qwizardpage_event_callback = nullptr;
    QWizardPage_MousePressEvent_Callback qwizardpage_mousepressevent_callback = nullptr;
    QWizardPage_MouseReleaseEvent_Callback qwizardpage_mousereleaseevent_callback = nullptr;
    QWizardPage_MouseDoubleClickEvent_Callback qwizardpage_mousedoubleclickevent_callback = nullptr;
    QWizardPage_MouseMoveEvent_Callback qwizardpage_mousemoveevent_callback = nullptr;
    QWizardPage_WheelEvent_Callback qwizardpage_wheelevent_callback = nullptr;
    QWizardPage_KeyPressEvent_Callback qwizardpage_keypressevent_callback = nullptr;
    QWizardPage_KeyReleaseEvent_Callback qwizardpage_keyreleaseevent_callback = nullptr;
    QWizardPage_FocusInEvent_Callback qwizardpage_focusinevent_callback = nullptr;
    QWizardPage_FocusOutEvent_Callback qwizardpage_focusoutevent_callback = nullptr;
    QWizardPage_EnterEvent_Callback qwizardpage_enterevent_callback = nullptr;
    QWizardPage_LeaveEvent_Callback qwizardpage_leaveevent_callback = nullptr;
    QWizardPage_PaintEvent_Callback qwizardpage_paintevent_callback = nullptr;
    QWizardPage_MoveEvent_Callback qwizardpage_moveevent_callback = nullptr;
    QWizardPage_ResizeEvent_Callback qwizardpage_resizeevent_callback = nullptr;
    QWizardPage_CloseEvent_Callback qwizardpage_closeevent_callback = nullptr;
    QWizardPage_ContextMenuEvent_Callback qwizardpage_contextmenuevent_callback = nullptr;
    QWizardPage_TabletEvent_Callback qwizardpage_tabletevent_callback = nullptr;
    QWizardPage_ActionEvent_Callback qwizardpage_actionevent_callback = nullptr;
    QWizardPage_DragEnterEvent_Callback qwizardpage_dragenterevent_callback = nullptr;
    QWizardPage_DragMoveEvent_Callback qwizardpage_dragmoveevent_callback = nullptr;
    QWizardPage_DragLeaveEvent_Callback qwizardpage_dragleaveevent_callback = nullptr;
    QWizardPage_DropEvent_Callback qwizardpage_dropevent_callback = nullptr;
    QWizardPage_ShowEvent_Callback qwizardpage_showevent_callback = nullptr;
    QWizardPage_HideEvent_Callback qwizardpage_hideevent_callback = nullptr;
    QWizardPage_NativeEvent_Callback qwizardpage_nativeevent_callback = nullptr;
    QWizardPage_ChangeEvent_Callback qwizardpage_changeevent_callback = nullptr;
    QWizardPage_Metric_Callback qwizardpage_metric_callback = nullptr;
    QWizardPage_InitPainter_Callback qwizardpage_initpainter_callback = nullptr;
    QWizardPage_Redirected_Callback qwizardpage_redirected_callback = nullptr;
    QWizardPage_SharedPainter_Callback qwizardpage_sharedpainter_callback = nullptr;
    QWizardPage_InputMethodEvent_Callback qwizardpage_inputmethodevent_callback = nullptr;
    QWizardPage_InputMethodQuery_Callback qwizardpage_inputmethodquery_callback = nullptr;
    QWizardPage_FocusNextPrevChild_Callback qwizardpage_focusnextprevchild_callback = nullptr;
    QWizardPage_EventFilter_Callback qwizardpage_eventfilter_callback = nullptr;
    QWizardPage_TimerEvent_Callback qwizardpage_timerevent_callback = nullptr;
    QWizardPage_ChildEvent_Callback qwizardpage_childevent_callback = nullptr;
    QWizardPage_CustomEvent_Callback qwizardpage_customevent_callback = nullptr;
    QWizardPage_ConnectNotify_Callback qwizardpage_connectnotify_callback = nullptr;
    QWizardPage_DisconnectNotify_Callback qwizardpage_disconnectnotify_callback = nullptr;
    QWizardPage_SetField_Callback qwizardpage_setfield_callback = nullptr;
    QWizardPage_Field_Callback qwizardpage_field_callback = nullptr;
    QWizardPage_RegisterField_Callback qwizardpage_registerfield_callback = nullptr;
    QWizardPage_Wizard_Callback qwizardpage_wizard_callback = nullptr;
    QWizardPage_RegisterField3_Callback qwizardpage_registerfield3_callback = nullptr;
    QWizardPage_RegisterField4_Callback qwizardpage_registerfield4_callback = nullptr;
    QWizardPage_UpdateMicroFocus_Callback qwizardpage_updatemicrofocus_callback = nullptr;
    QWizardPage_Create_Callback qwizardpage_create_callback = nullptr;
    QWizardPage_Destroy_Callback qwizardpage_destroy_callback = nullptr;
    QWizardPage_FocusNextChild_Callback qwizardpage_focusnextchild_callback = nullptr;
    QWizardPage_FocusPreviousChild_Callback qwizardpage_focuspreviouschild_callback = nullptr;
    QWizardPage_Sender_Callback qwizardpage_sender_callback = nullptr;
    QWizardPage_SenderSignalIndex_Callback qwizardpage_sendersignalindex_callback = nullptr;
    QWizardPage_Receivers_Callback qwizardpage_receivers_callback = nullptr;
    QWizardPage_IsSignalConnected_Callback qwizardpage_issignalconnected_callback = nullptr;
    QWizardPage_GetDecodedMetricF_Callback qwizardpage_getdecodedmetricf_callback = nullptr;

    // Instance base flags
    mutable bool qwizardpage_metaobject_isbase = false;
    mutable bool qwizardpage_metacast_isbase = false;
    mutable bool qwizardpage_metacall_isbase = false;
    mutable bool qwizardpage_initializepage_isbase = false;
    mutable bool qwizardpage_cleanuppage_isbase = false;
    mutable bool qwizardpage_validatepage_isbase = false;
    mutable bool qwizardpage_iscomplete_isbase = false;
    mutable bool qwizardpage_nextid_isbase = false;
    mutable bool qwizardpage_devtype_isbase = false;
    mutable bool qwizardpage_setvisible_isbase = false;
    mutable bool qwizardpage_sizehint_isbase = false;
    mutable bool qwizardpage_minimumsizehint_isbase = false;
    mutable bool qwizardpage_heightforwidth_isbase = false;
    mutable bool qwizardpage_hasheightforwidth_isbase = false;
    mutable bool qwizardpage_paintengine_isbase = false;
    mutable bool qwizardpage_event_isbase = false;
    mutable bool qwizardpage_mousepressevent_isbase = false;
    mutable bool qwizardpage_mousereleaseevent_isbase = false;
    mutable bool qwizardpage_mousedoubleclickevent_isbase = false;
    mutable bool qwizardpage_mousemoveevent_isbase = false;
    mutable bool qwizardpage_wheelevent_isbase = false;
    mutable bool qwizardpage_keypressevent_isbase = false;
    mutable bool qwizardpage_keyreleaseevent_isbase = false;
    mutable bool qwizardpage_focusinevent_isbase = false;
    mutable bool qwizardpage_focusoutevent_isbase = false;
    mutable bool qwizardpage_enterevent_isbase = false;
    mutable bool qwizardpage_leaveevent_isbase = false;
    mutable bool qwizardpage_paintevent_isbase = false;
    mutable bool qwizardpage_moveevent_isbase = false;
    mutable bool qwizardpage_resizeevent_isbase = false;
    mutable bool qwizardpage_closeevent_isbase = false;
    mutable bool qwizardpage_contextmenuevent_isbase = false;
    mutable bool qwizardpage_tabletevent_isbase = false;
    mutable bool qwizardpage_actionevent_isbase = false;
    mutable bool qwizardpage_dragenterevent_isbase = false;
    mutable bool qwizardpage_dragmoveevent_isbase = false;
    mutable bool qwizardpage_dragleaveevent_isbase = false;
    mutable bool qwizardpage_dropevent_isbase = false;
    mutable bool qwizardpage_showevent_isbase = false;
    mutable bool qwizardpage_hideevent_isbase = false;
    mutable bool qwizardpage_nativeevent_isbase = false;
    mutable bool qwizardpage_changeevent_isbase = false;
    mutable bool qwizardpage_metric_isbase = false;
    mutable bool qwizardpage_initpainter_isbase = false;
    mutable bool qwizardpage_redirected_isbase = false;
    mutable bool qwizardpage_sharedpainter_isbase = false;
    mutable bool qwizardpage_inputmethodevent_isbase = false;
    mutable bool qwizardpage_inputmethodquery_isbase = false;
    mutable bool qwizardpage_focusnextprevchild_isbase = false;
    mutable bool qwizardpage_eventfilter_isbase = false;
    mutable bool qwizardpage_timerevent_isbase = false;
    mutable bool qwizardpage_childevent_isbase = false;
    mutable bool qwizardpage_customevent_isbase = false;
    mutable bool qwizardpage_connectnotify_isbase = false;
    mutable bool qwizardpage_disconnectnotify_isbase = false;
    mutable bool qwizardpage_setfield_isbase = false;
    mutable bool qwizardpage_field_isbase = false;
    mutable bool qwizardpage_registerfield_isbase = false;
    mutable bool qwizardpage_wizard_isbase = false;
    mutable bool qwizardpage_registerfield3_isbase = false;
    mutable bool qwizardpage_registerfield4_isbase = false;
    mutable bool qwizardpage_updatemicrofocus_isbase = false;
    mutable bool qwizardpage_create_isbase = false;
    mutable bool qwizardpage_destroy_isbase = false;
    mutable bool qwizardpage_focusnextchild_isbase = false;
    mutable bool qwizardpage_focuspreviouschild_isbase = false;
    mutable bool qwizardpage_sender_isbase = false;
    mutable bool qwizardpage_sendersignalindex_isbase = false;
    mutable bool qwizardpage_receivers_isbase = false;
    mutable bool qwizardpage_issignalconnected_isbase = false;
    mutable bool qwizardpage_getdecodedmetricf_isbase = false;

  public:
    VirtualQWizardPage(QWidget* parent) : QWizardPage(parent) {};
    VirtualQWizardPage() : QWizardPage() {};

    // Callback setters
    inline void setQWizardPage_MetaObject_Callback(QWizardPage_MetaObject_Callback cb) { qwizardpage_metaobject_callback = cb; }
    inline void setQWizardPage_Metacast_Callback(QWizardPage_Metacast_Callback cb) { qwizardpage_metacast_callback = cb; }
    inline void setQWizardPage_Metacall_Callback(QWizardPage_Metacall_Callback cb) { qwizardpage_metacall_callback = cb; }
    inline void setQWizardPage_InitializePage_Callback(QWizardPage_InitializePage_Callback cb) { qwizardpage_initializepage_callback = cb; }
    inline void setQWizardPage_CleanupPage_Callback(QWizardPage_CleanupPage_Callback cb) { qwizardpage_cleanuppage_callback = cb; }
    inline void setQWizardPage_ValidatePage_Callback(QWizardPage_ValidatePage_Callback cb) { qwizardpage_validatepage_callback = cb; }
    inline void setQWizardPage_IsComplete_Callback(QWizardPage_IsComplete_Callback cb) { qwizardpage_iscomplete_callback = cb; }
    inline void setQWizardPage_NextId_Callback(QWizardPage_NextId_Callback cb) { qwizardpage_nextid_callback = cb; }
    inline void setQWizardPage_DevType_Callback(QWizardPage_DevType_Callback cb) { qwizardpage_devtype_callback = cb; }
    inline void setQWizardPage_SetVisible_Callback(QWizardPage_SetVisible_Callback cb) { qwizardpage_setvisible_callback = cb; }
    inline void setQWizardPage_SizeHint_Callback(QWizardPage_SizeHint_Callback cb) { qwizardpage_sizehint_callback = cb; }
    inline void setQWizardPage_MinimumSizeHint_Callback(QWizardPage_MinimumSizeHint_Callback cb) { qwizardpage_minimumsizehint_callback = cb; }
    inline void setQWizardPage_HeightForWidth_Callback(QWizardPage_HeightForWidth_Callback cb) { qwizardpage_heightforwidth_callback = cb; }
    inline void setQWizardPage_HasHeightForWidth_Callback(QWizardPage_HasHeightForWidth_Callback cb) { qwizardpage_hasheightforwidth_callback = cb; }
    inline void setQWizardPage_PaintEngine_Callback(QWizardPage_PaintEngine_Callback cb) { qwizardpage_paintengine_callback = cb; }
    inline void setQWizardPage_Event_Callback(QWizardPage_Event_Callback cb) { qwizardpage_event_callback = cb; }
    inline void setQWizardPage_MousePressEvent_Callback(QWizardPage_MousePressEvent_Callback cb) { qwizardpage_mousepressevent_callback = cb; }
    inline void setQWizardPage_MouseReleaseEvent_Callback(QWizardPage_MouseReleaseEvent_Callback cb) { qwizardpage_mousereleaseevent_callback = cb; }
    inline void setQWizardPage_MouseDoubleClickEvent_Callback(QWizardPage_MouseDoubleClickEvent_Callback cb) { qwizardpage_mousedoubleclickevent_callback = cb; }
    inline void setQWizardPage_MouseMoveEvent_Callback(QWizardPage_MouseMoveEvent_Callback cb) { qwizardpage_mousemoveevent_callback = cb; }
    inline void setQWizardPage_WheelEvent_Callback(QWizardPage_WheelEvent_Callback cb) { qwizardpage_wheelevent_callback = cb; }
    inline void setQWizardPage_KeyPressEvent_Callback(QWizardPage_KeyPressEvent_Callback cb) { qwizardpage_keypressevent_callback = cb; }
    inline void setQWizardPage_KeyReleaseEvent_Callback(QWizardPage_KeyReleaseEvent_Callback cb) { qwizardpage_keyreleaseevent_callback = cb; }
    inline void setQWizardPage_FocusInEvent_Callback(QWizardPage_FocusInEvent_Callback cb) { qwizardpage_focusinevent_callback = cb; }
    inline void setQWizardPage_FocusOutEvent_Callback(QWizardPage_FocusOutEvent_Callback cb) { qwizardpage_focusoutevent_callback = cb; }
    inline void setQWizardPage_EnterEvent_Callback(QWizardPage_EnterEvent_Callback cb) { qwizardpage_enterevent_callback = cb; }
    inline void setQWizardPage_LeaveEvent_Callback(QWizardPage_LeaveEvent_Callback cb) { qwizardpage_leaveevent_callback = cb; }
    inline void setQWizardPage_PaintEvent_Callback(QWizardPage_PaintEvent_Callback cb) { qwizardpage_paintevent_callback = cb; }
    inline void setQWizardPage_MoveEvent_Callback(QWizardPage_MoveEvent_Callback cb) { qwizardpage_moveevent_callback = cb; }
    inline void setQWizardPage_ResizeEvent_Callback(QWizardPage_ResizeEvent_Callback cb) { qwizardpage_resizeevent_callback = cb; }
    inline void setQWizardPage_CloseEvent_Callback(QWizardPage_CloseEvent_Callback cb) { qwizardpage_closeevent_callback = cb; }
    inline void setQWizardPage_ContextMenuEvent_Callback(QWizardPage_ContextMenuEvent_Callback cb) { qwizardpage_contextmenuevent_callback = cb; }
    inline void setQWizardPage_TabletEvent_Callback(QWizardPage_TabletEvent_Callback cb) { qwizardpage_tabletevent_callback = cb; }
    inline void setQWizardPage_ActionEvent_Callback(QWizardPage_ActionEvent_Callback cb) { qwizardpage_actionevent_callback = cb; }
    inline void setQWizardPage_DragEnterEvent_Callback(QWizardPage_DragEnterEvent_Callback cb) { qwizardpage_dragenterevent_callback = cb; }
    inline void setQWizardPage_DragMoveEvent_Callback(QWizardPage_DragMoveEvent_Callback cb) { qwizardpage_dragmoveevent_callback = cb; }
    inline void setQWizardPage_DragLeaveEvent_Callback(QWizardPage_DragLeaveEvent_Callback cb) { qwizardpage_dragleaveevent_callback = cb; }
    inline void setQWizardPage_DropEvent_Callback(QWizardPage_DropEvent_Callback cb) { qwizardpage_dropevent_callback = cb; }
    inline void setQWizardPage_ShowEvent_Callback(QWizardPage_ShowEvent_Callback cb) { qwizardpage_showevent_callback = cb; }
    inline void setQWizardPage_HideEvent_Callback(QWizardPage_HideEvent_Callback cb) { qwizardpage_hideevent_callback = cb; }
    inline void setQWizardPage_NativeEvent_Callback(QWizardPage_NativeEvent_Callback cb) { qwizardpage_nativeevent_callback = cb; }
    inline void setQWizardPage_ChangeEvent_Callback(QWizardPage_ChangeEvent_Callback cb) { qwizardpage_changeevent_callback = cb; }
    inline void setQWizardPage_Metric_Callback(QWizardPage_Metric_Callback cb) { qwizardpage_metric_callback = cb; }
    inline void setQWizardPage_InitPainter_Callback(QWizardPage_InitPainter_Callback cb) { qwizardpage_initpainter_callback = cb; }
    inline void setQWizardPage_Redirected_Callback(QWizardPage_Redirected_Callback cb) { qwizardpage_redirected_callback = cb; }
    inline void setQWizardPage_SharedPainter_Callback(QWizardPage_SharedPainter_Callback cb) { qwizardpage_sharedpainter_callback = cb; }
    inline void setQWizardPage_InputMethodEvent_Callback(QWizardPage_InputMethodEvent_Callback cb) { qwizardpage_inputmethodevent_callback = cb; }
    inline void setQWizardPage_InputMethodQuery_Callback(QWizardPage_InputMethodQuery_Callback cb) { qwizardpage_inputmethodquery_callback = cb; }
    inline void setQWizardPage_FocusNextPrevChild_Callback(QWizardPage_FocusNextPrevChild_Callback cb) { qwizardpage_focusnextprevchild_callback = cb; }
    inline void setQWizardPage_EventFilter_Callback(QWizardPage_EventFilter_Callback cb) { qwizardpage_eventfilter_callback = cb; }
    inline void setQWizardPage_TimerEvent_Callback(QWizardPage_TimerEvent_Callback cb) { qwizardpage_timerevent_callback = cb; }
    inline void setQWizardPage_ChildEvent_Callback(QWizardPage_ChildEvent_Callback cb) { qwizardpage_childevent_callback = cb; }
    inline void setQWizardPage_CustomEvent_Callback(QWizardPage_CustomEvent_Callback cb) { qwizardpage_customevent_callback = cb; }
    inline void setQWizardPage_ConnectNotify_Callback(QWizardPage_ConnectNotify_Callback cb) { qwizardpage_connectnotify_callback = cb; }
    inline void setQWizardPage_DisconnectNotify_Callback(QWizardPage_DisconnectNotify_Callback cb) { qwizardpage_disconnectnotify_callback = cb; }
    inline void setQWizardPage_SetField_Callback(QWizardPage_SetField_Callback cb) { qwizardpage_setfield_callback = cb; }
    inline void setQWizardPage_Field_Callback(QWizardPage_Field_Callback cb) { qwizardpage_field_callback = cb; }
    inline void setQWizardPage_RegisterField_Callback(QWizardPage_RegisterField_Callback cb) { qwizardpage_registerfield_callback = cb; }
    inline void setQWizardPage_Wizard_Callback(QWizardPage_Wizard_Callback cb) { qwizardpage_wizard_callback = cb; }
    inline void setQWizardPage_RegisterField3_Callback(QWizardPage_RegisterField3_Callback cb) { qwizardpage_registerfield3_callback = cb; }
    inline void setQWizardPage_RegisterField4_Callback(QWizardPage_RegisterField4_Callback cb) { qwizardpage_registerfield4_callback = cb; }
    inline void setQWizardPage_UpdateMicroFocus_Callback(QWizardPage_UpdateMicroFocus_Callback cb) { qwizardpage_updatemicrofocus_callback = cb; }
    inline void setQWizardPage_Create_Callback(QWizardPage_Create_Callback cb) { qwizardpage_create_callback = cb; }
    inline void setQWizardPage_Destroy_Callback(QWizardPage_Destroy_Callback cb) { qwizardpage_destroy_callback = cb; }
    inline void setQWizardPage_FocusNextChild_Callback(QWizardPage_FocusNextChild_Callback cb) { qwizardpage_focusnextchild_callback = cb; }
    inline void setQWizardPage_FocusPreviousChild_Callback(QWizardPage_FocusPreviousChild_Callback cb) { qwizardpage_focuspreviouschild_callback = cb; }
    inline void setQWizardPage_Sender_Callback(QWizardPage_Sender_Callback cb) { qwizardpage_sender_callback = cb; }
    inline void setQWizardPage_SenderSignalIndex_Callback(QWizardPage_SenderSignalIndex_Callback cb) { qwizardpage_sendersignalindex_callback = cb; }
    inline void setQWizardPage_Receivers_Callback(QWizardPage_Receivers_Callback cb) { qwizardpage_receivers_callback = cb; }
    inline void setQWizardPage_IsSignalConnected_Callback(QWizardPage_IsSignalConnected_Callback cb) { qwizardpage_issignalconnected_callback = cb; }
    inline void setQWizardPage_GetDecodedMetricF_Callback(QWizardPage_GetDecodedMetricF_Callback cb) { qwizardpage_getdecodedmetricf_callback = cb; }

    // Base flag setters
    inline void setQWizardPage_MetaObject_IsBase(bool value) const { qwizardpage_metaobject_isbase = value; }
    inline void setQWizardPage_Metacast_IsBase(bool value) const { qwizardpage_metacast_isbase = value; }
    inline void setQWizardPage_Metacall_IsBase(bool value) const { qwizardpage_metacall_isbase = value; }
    inline void setQWizardPage_InitializePage_IsBase(bool value) const { qwizardpage_initializepage_isbase = value; }
    inline void setQWizardPage_CleanupPage_IsBase(bool value) const { qwizardpage_cleanuppage_isbase = value; }
    inline void setQWizardPage_ValidatePage_IsBase(bool value) const { qwizardpage_validatepage_isbase = value; }
    inline void setQWizardPage_IsComplete_IsBase(bool value) const { qwizardpage_iscomplete_isbase = value; }
    inline void setQWizardPage_NextId_IsBase(bool value) const { qwizardpage_nextid_isbase = value; }
    inline void setQWizardPage_DevType_IsBase(bool value) const { qwizardpage_devtype_isbase = value; }
    inline void setQWizardPage_SetVisible_IsBase(bool value) const { qwizardpage_setvisible_isbase = value; }
    inline void setQWizardPage_SizeHint_IsBase(bool value) const { qwizardpage_sizehint_isbase = value; }
    inline void setQWizardPage_MinimumSizeHint_IsBase(bool value) const { qwizardpage_minimumsizehint_isbase = value; }
    inline void setQWizardPage_HeightForWidth_IsBase(bool value) const { qwizardpage_heightforwidth_isbase = value; }
    inline void setQWizardPage_HasHeightForWidth_IsBase(bool value) const { qwizardpage_hasheightforwidth_isbase = value; }
    inline void setQWizardPage_PaintEngine_IsBase(bool value) const { qwizardpage_paintengine_isbase = value; }
    inline void setQWizardPage_Event_IsBase(bool value) const { qwizardpage_event_isbase = value; }
    inline void setQWizardPage_MousePressEvent_IsBase(bool value) const { qwizardpage_mousepressevent_isbase = value; }
    inline void setQWizardPage_MouseReleaseEvent_IsBase(bool value) const { qwizardpage_mousereleaseevent_isbase = value; }
    inline void setQWizardPage_MouseDoubleClickEvent_IsBase(bool value) const { qwizardpage_mousedoubleclickevent_isbase = value; }
    inline void setQWizardPage_MouseMoveEvent_IsBase(bool value) const { qwizardpage_mousemoveevent_isbase = value; }
    inline void setQWizardPage_WheelEvent_IsBase(bool value) const { qwizardpage_wheelevent_isbase = value; }
    inline void setQWizardPage_KeyPressEvent_IsBase(bool value) const { qwizardpage_keypressevent_isbase = value; }
    inline void setQWizardPage_KeyReleaseEvent_IsBase(bool value) const { qwizardpage_keyreleaseevent_isbase = value; }
    inline void setQWizardPage_FocusInEvent_IsBase(bool value) const { qwizardpage_focusinevent_isbase = value; }
    inline void setQWizardPage_FocusOutEvent_IsBase(bool value) const { qwizardpage_focusoutevent_isbase = value; }
    inline void setQWizardPage_EnterEvent_IsBase(bool value) const { qwizardpage_enterevent_isbase = value; }
    inline void setQWizardPage_LeaveEvent_IsBase(bool value) const { qwizardpage_leaveevent_isbase = value; }
    inline void setQWizardPage_PaintEvent_IsBase(bool value) const { qwizardpage_paintevent_isbase = value; }
    inline void setQWizardPage_MoveEvent_IsBase(bool value) const { qwizardpage_moveevent_isbase = value; }
    inline void setQWizardPage_ResizeEvent_IsBase(bool value) const { qwizardpage_resizeevent_isbase = value; }
    inline void setQWizardPage_CloseEvent_IsBase(bool value) const { qwizardpage_closeevent_isbase = value; }
    inline void setQWizardPage_ContextMenuEvent_IsBase(bool value) const { qwizardpage_contextmenuevent_isbase = value; }
    inline void setQWizardPage_TabletEvent_IsBase(bool value) const { qwizardpage_tabletevent_isbase = value; }
    inline void setQWizardPage_ActionEvent_IsBase(bool value) const { qwizardpage_actionevent_isbase = value; }
    inline void setQWizardPage_DragEnterEvent_IsBase(bool value) const { qwizardpage_dragenterevent_isbase = value; }
    inline void setQWizardPage_DragMoveEvent_IsBase(bool value) const { qwizardpage_dragmoveevent_isbase = value; }
    inline void setQWizardPage_DragLeaveEvent_IsBase(bool value) const { qwizardpage_dragleaveevent_isbase = value; }
    inline void setQWizardPage_DropEvent_IsBase(bool value) const { qwizardpage_dropevent_isbase = value; }
    inline void setQWizardPage_ShowEvent_IsBase(bool value) const { qwizardpage_showevent_isbase = value; }
    inline void setQWizardPage_HideEvent_IsBase(bool value) const { qwizardpage_hideevent_isbase = value; }
    inline void setQWizardPage_NativeEvent_IsBase(bool value) const { qwizardpage_nativeevent_isbase = value; }
    inline void setQWizardPage_ChangeEvent_IsBase(bool value) const { qwizardpage_changeevent_isbase = value; }
    inline void setQWizardPage_Metric_IsBase(bool value) const { qwizardpage_metric_isbase = value; }
    inline void setQWizardPage_InitPainter_IsBase(bool value) const { qwizardpage_initpainter_isbase = value; }
    inline void setQWizardPage_Redirected_IsBase(bool value) const { qwizardpage_redirected_isbase = value; }
    inline void setQWizardPage_SharedPainter_IsBase(bool value) const { qwizardpage_sharedpainter_isbase = value; }
    inline void setQWizardPage_InputMethodEvent_IsBase(bool value) const { qwizardpage_inputmethodevent_isbase = value; }
    inline void setQWizardPage_InputMethodQuery_IsBase(bool value) const { qwizardpage_inputmethodquery_isbase = value; }
    inline void setQWizardPage_FocusNextPrevChild_IsBase(bool value) const { qwizardpage_focusnextprevchild_isbase = value; }
    inline void setQWizardPage_EventFilter_IsBase(bool value) const { qwizardpage_eventfilter_isbase = value; }
    inline void setQWizardPage_TimerEvent_IsBase(bool value) const { qwizardpage_timerevent_isbase = value; }
    inline void setQWizardPage_ChildEvent_IsBase(bool value) const { qwizardpage_childevent_isbase = value; }
    inline void setQWizardPage_CustomEvent_IsBase(bool value) const { qwizardpage_customevent_isbase = value; }
    inline void setQWizardPage_ConnectNotify_IsBase(bool value) const { qwizardpage_connectnotify_isbase = value; }
    inline void setQWizardPage_DisconnectNotify_IsBase(bool value) const { qwizardpage_disconnectnotify_isbase = value; }
    inline void setQWizardPage_SetField_IsBase(bool value) const { qwizardpage_setfield_isbase = value; }
    inline void setQWizardPage_Field_IsBase(bool value) const { qwizardpage_field_isbase = value; }
    inline void setQWizardPage_RegisterField_IsBase(bool value) const { qwizardpage_registerfield_isbase = value; }
    inline void setQWizardPage_Wizard_IsBase(bool value) const { qwizardpage_wizard_isbase = value; }
    inline void setQWizardPage_RegisterField3_IsBase(bool value) const { qwizardpage_registerfield3_isbase = value; }
    inline void setQWizardPage_RegisterField4_IsBase(bool value) const { qwizardpage_registerfield4_isbase = value; }
    inline void setQWizardPage_UpdateMicroFocus_IsBase(bool value) const { qwizardpage_updatemicrofocus_isbase = value; }
    inline void setQWizardPage_Create_IsBase(bool value) const { qwizardpage_create_isbase = value; }
    inline void setQWizardPage_Destroy_IsBase(bool value) const { qwizardpage_destroy_isbase = value; }
    inline void setQWizardPage_FocusNextChild_IsBase(bool value) const { qwizardpage_focusnextchild_isbase = value; }
    inline void setQWizardPage_FocusPreviousChild_IsBase(bool value) const { qwizardpage_focuspreviouschild_isbase = value; }
    inline void setQWizardPage_Sender_IsBase(bool value) const { qwizardpage_sender_isbase = value; }
    inline void setQWizardPage_SenderSignalIndex_IsBase(bool value) const { qwizardpage_sendersignalindex_isbase = value; }
    inline void setQWizardPage_Receivers_IsBase(bool value) const { qwizardpage_receivers_isbase = value; }
    inline void setQWizardPage_IsSignalConnected_IsBase(bool value) const { qwizardpage_issignalconnected_isbase = value; }
    inline void setQWizardPage_GetDecodedMetricF_IsBase(bool value) const { qwizardpage_getdecodedmetricf_isbase = value; }

    // Virtual method for C ABI access and custom callback
    virtual const QMetaObject* metaObject() const override {
        if (qwizardpage_metaobject_isbase) {
            qwizardpage_metaobject_isbase = false;
            return QWizardPage::metaObject();
        }
        auto metaobject_cb = qwizardpage_metaobject_callback;
        if (metaobject_cb) {
            QMetaObject* callback_ret = metaobject_cb();
            return callback_ret;
        }
        return QWizardPage::metaObject();
    }

    // Virtual method for C ABI access and custom callback
    virtual void* qt_metacast(const char* param1) override {
        if (qwizardpage_metacast_isbase) {
            qwizardpage_metacast_isbase = false;
            return QWizardPage::qt_metacast(param1);
        }
        auto metacast_cb = qwizardpage_metacast_callback;
        if (metacast_cb) {
            const char* cbval1 = (const char*)param1;

            void* callback_ret = metacast_cb(this, cbval1);
            return callback_ret;
        }
        return QWizardPage::qt_metacast(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (qwizardpage_metacall_isbase) {
            qwizardpage_metacall_isbase = false;
            return QWizardPage::qt_metacall(param1, param2, param3);
        }
        auto metacall_cb = qwizardpage_metacall_callback;
        if (metacall_cb) {
            int cbval1 = static_cast<int>(param1);
            int cbval2 = param2;
            void** cbval3 = param3;

            int callback_ret = metacall_cb(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        }
        return QWizardPage::qt_metacall(param1, param2, param3);
    }

    // Virtual method for C ABI access and custom callback
    virtual void initializePage() override {
        if (qwizardpage_initializepage_isbase) {
            qwizardpage_initializepage_isbase = false;
            QWizardPage::initializePage();
            return;
        }
        auto initializepage_cb = qwizardpage_initializepage_callback;
        if (initializepage_cb) {
            initializepage_cb();
            return;
        }
        QWizardPage::initializePage();
    }

    // Virtual method for C ABI access and custom callback
    virtual void cleanupPage() override {
        if (qwizardpage_cleanuppage_isbase) {
            qwizardpage_cleanuppage_isbase = false;
            QWizardPage::cleanupPage();
            return;
        }
        auto cleanuppage_cb = qwizardpage_cleanuppage_callback;
        if (cleanuppage_cb) {
            cleanuppage_cb();
            return;
        }
        QWizardPage::cleanupPage();
    }

    // Virtual method for C ABI access and custom callback
    virtual bool validatePage() override {
        if (qwizardpage_validatepage_isbase) {
            qwizardpage_validatepage_isbase = false;
            return QWizardPage::validatePage();
        }
        auto validatepage_cb = qwizardpage_validatepage_callback;
        if (validatepage_cb) {
            bool callback_ret = validatepage_cb();
            return callback_ret;
        }
        return QWizardPage::validatePage();
    }

    // Virtual method for C ABI access and custom callback
    virtual bool isComplete() const override {
        if (qwizardpage_iscomplete_isbase) {
            qwizardpage_iscomplete_isbase = false;
            return QWizardPage::isComplete();
        }
        auto iscomplete_cb = qwizardpage_iscomplete_callback;
        if (iscomplete_cb) {
            bool callback_ret = iscomplete_cb();
            return callback_ret;
        }
        return QWizardPage::isComplete();
    }

    // Virtual method for C ABI access and custom callback
    virtual int nextId() const override {
        if (qwizardpage_nextid_isbase) {
            qwizardpage_nextid_isbase = false;
            return QWizardPage::nextId();
        }
        auto nextid_cb = qwizardpage_nextid_callback;
        if (nextid_cb) {
            int callback_ret = nextid_cb();
            return static_cast<int>(callback_ret);
        }
        return QWizardPage::nextId();
    }

    // Virtual method for C ABI access and custom callback
    virtual int devType() const override {
        if (qwizardpage_devtype_isbase) {
            qwizardpage_devtype_isbase = false;
            return QWizardPage::devType();
        }
        auto devtype_cb = qwizardpage_devtype_callback;
        if (devtype_cb) {
            int callback_ret = devtype_cb();
            return static_cast<int>(callback_ret);
        }
        return QWizardPage::devType();
    }

    // Virtual method for C ABI access and custom callback
    virtual void setVisible(bool visible) override {
        if (qwizardpage_setvisible_isbase) {
            qwizardpage_setvisible_isbase = false;
            QWizardPage::setVisible(visible);
            return;
        }
        auto setvisible_cb = qwizardpage_setvisible_callback;
        if (setvisible_cb) {
            bool cbval1 = visible;

            setvisible_cb(this, cbval1);
            return;
        }
        QWizardPage::setVisible(visible);
    }

    // Virtual method for C ABI access and custom callback
    virtual QSize sizeHint() const override {
        if (qwizardpage_sizehint_isbase) {
            qwizardpage_sizehint_isbase = false;
            return QWizardPage::sizeHint();
        }
        auto sizehint_cb = qwizardpage_sizehint_callback;
        if (sizehint_cb) {
            QSize* callback_ret = sizehint_cb();
            return *callback_ret;
        }
        return QWizardPage::sizeHint();
    }

    // Virtual method for C ABI access and custom callback
    virtual QSize minimumSizeHint() const override {
        if (qwizardpage_minimumsizehint_isbase) {
            qwizardpage_minimumsizehint_isbase = false;
            return QWizardPage::minimumSizeHint();
        }
        auto minimumsizehint_cb = qwizardpage_minimumsizehint_callback;
        if (minimumsizehint_cb) {
            QSize* callback_ret = minimumsizehint_cb();
            return *callback_ret;
        }
        return QWizardPage::minimumSizeHint();
    }

    // Virtual method for C ABI access and custom callback
    virtual int heightForWidth(int param1) const override {
        if (qwizardpage_heightforwidth_isbase) {
            qwizardpage_heightforwidth_isbase = false;
            return QWizardPage::heightForWidth(param1);
        }
        auto heightforwidth_cb = qwizardpage_heightforwidth_callback;
        if (heightforwidth_cb) {
            int cbval1 = param1;

            int callback_ret = heightforwidth_cb(this, cbval1);
            return static_cast<int>(callback_ret);
        }
        return QWizardPage::heightForWidth(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool hasHeightForWidth() const override {
        if (qwizardpage_hasheightforwidth_isbase) {
            qwizardpage_hasheightforwidth_isbase = false;
            return QWizardPage::hasHeightForWidth();
        }
        auto hasheightforwidth_cb = qwizardpage_hasheightforwidth_callback;
        if (hasheightforwidth_cb) {
            bool callback_ret = hasheightforwidth_cb();
            return callback_ret;
        }
        return QWizardPage::hasHeightForWidth();
    }

    // Virtual method for C ABI access and custom callback
    virtual QPaintEngine* paintEngine() const override {
        if (qwizardpage_paintengine_isbase) {
            qwizardpage_paintengine_isbase = false;
            return QWizardPage::paintEngine();
        }
        auto paintengine_cb = qwizardpage_paintengine_callback;
        if (paintengine_cb) {
            QPaintEngine* callback_ret = paintengine_cb();
            return callback_ret;
        }
        return QWizardPage::paintEngine();
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* event) override {
        if (qwizardpage_event_isbase) {
            qwizardpage_event_isbase = false;
            return QWizardPage::event(event);
        }
        auto event_cb = qwizardpage_event_callback;
        if (event_cb) {
            QEvent* cbval1 = event;

            bool callback_ret = event_cb(this, cbval1);
            return callback_ret;
        }
        return QWizardPage::event(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void mousePressEvent(QMouseEvent* event) override {
        if (qwizardpage_mousepressevent_isbase) {
            qwizardpage_mousepressevent_isbase = false;
            QWizardPage::mousePressEvent(event);
            return;
        }
        auto mousepressevent_cb = qwizardpage_mousepressevent_callback;
        if (mousepressevent_cb) {
            QMouseEvent* cbval1 = event;

            mousepressevent_cb(this, cbval1);
            return;
        }
        QWizardPage::mousePressEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseReleaseEvent(QMouseEvent* event) override {
        if (qwizardpage_mousereleaseevent_isbase) {
            qwizardpage_mousereleaseevent_isbase = false;
            QWizardPage::mouseReleaseEvent(event);
            return;
        }
        auto mousereleaseevent_cb = qwizardpage_mousereleaseevent_callback;
        if (mousereleaseevent_cb) {
            QMouseEvent* cbval1 = event;

            mousereleaseevent_cb(this, cbval1);
            return;
        }
        QWizardPage::mouseReleaseEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseDoubleClickEvent(QMouseEvent* event) override {
        if (qwizardpage_mousedoubleclickevent_isbase) {
            qwizardpage_mousedoubleclickevent_isbase = false;
            QWizardPage::mouseDoubleClickEvent(event);
            return;
        }
        auto mousedoubleclickevent_cb = qwizardpage_mousedoubleclickevent_callback;
        if (mousedoubleclickevent_cb) {
            QMouseEvent* cbval1 = event;

            mousedoubleclickevent_cb(this, cbval1);
            return;
        }
        QWizardPage::mouseDoubleClickEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseMoveEvent(QMouseEvent* event) override {
        if (qwizardpage_mousemoveevent_isbase) {
            qwizardpage_mousemoveevent_isbase = false;
            QWizardPage::mouseMoveEvent(event);
            return;
        }
        auto mousemoveevent_cb = qwizardpage_mousemoveevent_callback;
        if (mousemoveevent_cb) {
            QMouseEvent* cbval1 = event;

            mousemoveevent_cb(this, cbval1);
            return;
        }
        QWizardPage::mouseMoveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void wheelEvent(QWheelEvent* event) override {
        if (qwizardpage_wheelevent_isbase) {
            qwizardpage_wheelevent_isbase = false;
            QWizardPage::wheelEvent(event);
            return;
        }
        auto wheelevent_cb = qwizardpage_wheelevent_callback;
        if (wheelevent_cb) {
            QWheelEvent* cbval1 = event;

            wheelevent_cb(this, cbval1);
            return;
        }
        QWizardPage::wheelEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void keyPressEvent(QKeyEvent* event) override {
        if (qwizardpage_keypressevent_isbase) {
            qwizardpage_keypressevent_isbase = false;
            QWizardPage::keyPressEvent(event);
            return;
        }
        auto keypressevent_cb = qwizardpage_keypressevent_callback;
        if (keypressevent_cb) {
            QKeyEvent* cbval1 = event;

            keypressevent_cb(this, cbval1);
            return;
        }
        QWizardPage::keyPressEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void keyReleaseEvent(QKeyEvent* event) override {
        if (qwizardpage_keyreleaseevent_isbase) {
            qwizardpage_keyreleaseevent_isbase = false;
            QWizardPage::keyReleaseEvent(event);
            return;
        }
        auto keyreleaseevent_cb = qwizardpage_keyreleaseevent_callback;
        if (keyreleaseevent_cb) {
            QKeyEvent* cbval1 = event;

            keyreleaseevent_cb(this, cbval1);
            return;
        }
        QWizardPage::keyReleaseEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void focusInEvent(QFocusEvent* event) override {
        if (qwizardpage_focusinevent_isbase) {
            qwizardpage_focusinevent_isbase = false;
            QWizardPage::focusInEvent(event);
            return;
        }
        auto focusinevent_cb = qwizardpage_focusinevent_callback;
        if (focusinevent_cb) {
            QFocusEvent* cbval1 = event;

            focusinevent_cb(this, cbval1);
            return;
        }
        QWizardPage::focusInEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void focusOutEvent(QFocusEvent* event) override {
        if (qwizardpage_focusoutevent_isbase) {
            qwizardpage_focusoutevent_isbase = false;
            QWizardPage::focusOutEvent(event);
            return;
        }
        auto focusoutevent_cb = qwizardpage_focusoutevent_callback;
        if (focusoutevent_cb) {
            QFocusEvent* cbval1 = event;

            focusoutevent_cb(this, cbval1);
            return;
        }
        QWizardPage::focusOutEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void enterEvent(QEnterEvent* event) override {
        if (qwizardpage_enterevent_isbase) {
            qwizardpage_enterevent_isbase = false;
            QWizardPage::enterEvent(event);
            return;
        }
        auto enterevent_cb = qwizardpage_enterevent_callback;
        if (enterevent_cb) {
            QEnterEvent* cbval1 = event;

            enterevent_cb(this, cbval1);
            return;
        }
        QWizardPage::enterEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void leaveEvent(QEvent* event) override {
        if (qwizardpage_leaveevent_isbase) {
            qwizardpage_leaveevent_isbase = false;
            QWizardPage::leaveEvent(event);
            return;
        }
        auto leaveevent_cb = qwizardpage_leaveevent_callback;
        if (leaveevent_cb) {
            QEvent* cbval1 = event;

            leaveevent_cb(this, cbval1);
            return;
        }
        QWizardPage::leaveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void paintEvent(QPaintEvent* event) override {
        if (qwizardpage_paintevent_isbase) {
            qwizardpage_paintevent_isbase = false;
            QWizardPage::paintEvent(event);
            return;
        }
        auto paintevent_cb = qwizardpage_paintevent_callback;
        if (paintevent_cb) {
            QPaintEvent* cbval1 = event;

            paintevent_cb(this, cbval1);
            return;
        }
        QWizardPage::paintEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void moveEvent(QMoveEvent* event) override {
        if (qwizardpage_moveevent_isbase) {
            qwizardpage_moveevent_isbase = false;
            QWizardPage::moveEvent(event);
            return;
        }
        auto moveevent_cb = qwizardpage_moveevent_callback;
        if (moveevent_cb) {
            QMoveEvent* cbval1 = event;

            moveevent_cb(this, cbval1);
            return;
        }
        QWizardPage::moveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void resizeEvent(QResizeEvent* event) override {
        if (qwizardpage_resizeevent_isbase) {
            qwizardpage_resizeevent_isbase = false;
            QWizardPage::resizeEvent(event);
            return;
        }
        auto resizeevent_cb = qwizardpage_resizeevent_callback;
        if (resizeevent_cb) {
            QResizeEvent* cbval1 = event;

            resizeevent_cb(this, cbval1);
            return;
        }
        QWizardPage::resizeEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void closeEvent(QCloseEvent* event) override {
        if (qwizardpage_closeevent_isbase) {
            qwizardpage_closeevent_isbase = false;
            QWizardPage::closeEvent(event);
            return;
        }
        auto closeevent_cb = qwizardpage_closeevent_callback;
        if (closeevent_cb) {
            QCloseEvent* cbval1 = event;

            closeevent_cb(this, cbval1);
            return;
        }
        QWizardPage::closeEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void contextMenuEvent(QContextMenuEvent* event) override {
        if (qwizardpage_contextmenuevent_isbase) {
            qwizardpage_contextmenuevent_isbase = false;
            QWizardPage::contextMenuEvent(event);
            return;
        }
        auto contextmenuevent_cb = qwizardpage_contextmenuevent_callback;
        if (contextmenuevent_cb) {
            QContextMenuEvent* cbval1 = event;

            contextmenuevent_cb(this, cbval1);
            return;
        }
        QWizardPage::contextMenuEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void tabletEvent(QTabletEvent* event) override {
        if (qwizardpage_tabletevent_isbase) {
            qwizardpage_tabletevent_isbase = false;
            QWizardPage::tabletEvent(event);
            return;
        }
        auto tabletevent_cb = qwizardpage_tabletevent_callback;
        if (tabletevent_cb) {
            QTabletEvent* cbval1 = event;

            tabletevent_cb(this, cbval1);
            return;
        }
        QWizardPage::tabletEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void actionEvent(QActionEvent* event) override {
        if (qwizardpage_actionevent_isbase) {
            qwizardpage_actionevent_isbase = false;
            QWizardPage::actionEvent(event);
            return;
        }
        auto actionevent_cb = qwizardpage_actionevent_callback;
        if (actionevent_cb) {
            QActionEvent* cbval1 = event;

            actionevent_cb(this, cbval1);
            return;
        }
        QWizardPage::actionEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragEnterEvent(QDragEnterEvent* event) override {
        if (qwizardpage_dragenterevent_isbase) {
            qwizardpage_dragenterevent_isbase = false;
            QWizardPage::dragEnterEvent(event);
            return;
        }
        auto dragenterevent_cb = qwizardpage_dragenterevent_callback;
        if (dragenterevent_cb) {
            QDragEnterEvent* cbval1 = event;

            dragenterevent_cb(this, cbval1);
            return;
        }
        QWizardPage::dragEnterEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragMoveEvent(QDragMoveEvent* event) override {
        if (qwizardpage_dragmoveevent_isbase) {
            qwizardpage_dragmoveevent_isbase = false;
            QWizardPage::dragMoveEvent(event);
            return;
        }
        auto dragmoveevent_cb = qwizardpage_dragmoveevent_callback;
        if (dragmoveevent_cb) {
            QDragMoveEvent* cbval1 = event;

            dragmoveevent_cb(this, cbval1);
            return;
        }
        QWizardPage::dragMoveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragLeaveEvent(QDragLeaveEvent* event) override {
        if (qwizardpage_dragleaveevent_isbase) {
            qwizardpage_dragleaveevent_isbase = false;
            QWizardPage::dragLeaveEvent(event);
            return;
        }
        auto dragleaveevent_cb = qwizardpage_dragleaveevent_callback;
        if (dragleaveevent_cb) {
            QDragLeaveEvent* cbval1 = event;

            dragleaveevent_cb(this, cbval1);
            return;
        }
        QWizardPage::dragLeaveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void dropEvent(QDropEvent* event) override {
        if (qwizardpage_dropevent_isbase) {
            qwizardpage_dropevent_isbase = false;
            QWizardPage::dropEvent(event);
            return;
        }
        auto dropevent_cb = qwizardpage_dropevent_callback;
        if (dropevent_cb) {
            QDropEvent* cbval1 = event;

            dropevent_cb(this, cbval1);
            return;
        }
        QWizardPage::dropEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void showEvent(QShowEvent* event) override {
        if (qwizardpage_showevent_isbase) {
            qwizardpage_showevent_isbase = false;
            QWizardPage::showEvent(event);
            return;
        }
        auto showevent_cb = qwizardpage_showevent_callback;
        if (showevent_cb) {
            QShowEvent* cbval1 = event;

            showevent_cb(this, cbval1);
            return;
        }
        QWizardPage::showEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void hideEvent(QHideEvent* event) override {
        if (qwizardpage_hideevent_isbase) {
            qwizardpage_hideevent_isbase = false;
            QWizardPage::hideEvent(event);
            return;
        }
        auto hideevent_cb = qwizardpage_hideevent_callback;
        if (hideevent_cb) {
            QHideEvent* cbval1 = event;

            hideevent_cb(this, cbval1);
            return;
        }
        QWizardPage::hideEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool nativeEvent(const QByteArray& eventType, void* message, qintptr* result) override {
        if (qwizardpage_nativeevent_isbase) {
            qwizardpage_nativeevent_isbase = false;
            return QWizardPage::nativeEvent(eventType, message, result);
        }
        auto nativeevent_cb = qwizardpage_nativeevent_callback;
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
        return QWizardPage::nativeEvent(eventType, message, result);
    }

    // Virtual method for C ABI access and custom callback
    virtual void changeEvent(QEvent* param1) override {
        if (qwizardpage_changeevent_isbase) {
            qwizardpage_changeevent_isbase = false;
            QWizardPage::changeEvent(param1);
            return;
        }
        auto changeevent_cb = qwizardpage_changeevent_callback;
        if (changeevent_cb) {
            QEvent* cbval1 = param1;

            changeevent_cb(this, cbval1);
            return;
        }
        QWizardPage::changeEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual int metric(QPaintDevice::PaintDeviceMetric param1) const override {
        if (qwizardpage_metric_isbase) {
            qwizardpage_metric_isbase = false;
            return QWizardPage::metric(param1);
        }
        auto metric_cb = qwizardpage_metric_callback;
        if (metric_cb) {
            int cbval1 = static_cast<int>(param1);

            int callback_ret = metric_cb(this, cbval1);
            return static_cast<int>(callback_ret);
        }
        return QWizardPage::metric(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual void initPainter(QPainter* painter) const override {
        if (qwizardpage_initpainter_isbase) {
            qwizardpage_initpainter_isbase = false;
            QWizardPage::initPainter(painter);
            return;
        }
        auto initpainter_cb = qwizardpage_initpainter_callback;
        if (initpainter_cb) {
            QPainter* cbval1 = painter;

            initpainter_cb(this, cbval1);
            return;
        }
        QWizardPage::initPainter(painter);
    }

    // Virtual method for C ABI access and custom callback
    virtual QPaintDevice* redirected(QPoint* offset) const override {
        if (qwizardpage_redirected_isbase) {
            qwizardpage_redirected_isbase = false;
            return QWizardPage::redirected(offset);
        }
        auto redirected_cb = qwizardpage_redirected_callback;
        if (redirected_cb) {
            QPoint* cbval1 = offset;

            QPaintDevice* callback_ret = redirected_cb(this, cbval1);
            return callback_ret;
        }
        return QWizardPage::redirected(offset);
    }

    // Virtual method for C ABI access and custom callback
    virtual QPainter* sharedPainter() const override {
        if (qwizardpage_sharedpainter_isbase) {
            qwizardpage_sharedpainter_isbase = false;
            return QWizardPage::sharedPainter();
        }
        auto sharedpainter_cb = qwizardpage_sharedpainter_callback;
        if (sharedpainter_cb) {
            QPainter* callback_ret = sharedpainter_cb();
            return callback_ret;
        }
        return QWizardPage::sharedPainter();
    }

    // Virtual method for C ABI access and custom callback
    virtual void inputMethodEvent(QInputMethodEvent* param1) override {
        if (qwizardpage_inputmethodevent_isbase) {
            qwizardpage_inputmethodevent_isbase = false;
            QWizardPage::inputMethodEvent(param1);
            return;
        }
        auto inputmethodevent_cb = qwizardpage_inputmethodevent_callback;
        if (inputmethodevent_cb) {
            QInputMethodEvent* cbval1 = param1;

            inputmethodevent_cb(this, cbval1);
            return;
        }
        QWizardPage::inputMethodEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual QVariant inputMethodQuery(Qt::InputMethodQuery param1) const override {
        if (qwizardpage_inputmethodquery_isbase) {
            qwizardpage_inputmethodquery_isbase = false;
            return QWizardPage::inputMethodQuery(param1);
        }
        auto inputmethodquery_cb = qwizardpage_inputmethodquery_callback;
        if (inputmethodquery_cb) {
            int cbval1 = static_cast<int>(param1);

            QVariant* callback_ret = inputmethodquery_cb(this, cbval1);
            return *callback_ret;
        }
        return QWizardPage::inputMethodQuery(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool focusNextPrevChild(bool next) override {
        if (qwizardpage_focusnextprevchild_isbase) {
            qwizardpage_focusnextprevchild_isbase = false;
            return QWizardPage::focusNextPrevChild(next);
        }
        auto focusnextprevchild_cb = qwizardpage_focusnextprevchild_callback;
        if (focusnextprevchild_cb) {
            bool cbval1 = next;

            bool callback_ret = focusnextprevchild_cb(this, cbval1);
            return callback_ret;
        }
        return QWizardPage::focusNextPrevChild(next);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* watched, QEvent* event) override {
        if (qwizardpage_eventfilter_isbase) {
            qwizardpage_eventfilter_isbase = false;
            return QWizardPage::eventFilter(watched, event);
        }
        auto eventfilter_cb = qwizardpage_eventfilter_callback;
        if (eventfilter_cb) {
            QObject* cbval1 = watched;
            QEvent* cbval2 = event;

            bool callback_ret = eventfilter_cb(this, cbval1, cbval2);
            return callback_ret;
        }
        return QWizardPage::eventFilter(watched, event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (qwizardpage_timerevent_isbase) {
            qwizardpage_timerevent_isbase = false;
            QWizardPage::timerEvent(event);
            return;
        }
        auto timerevent_cb = qwizardpage_timerevent_callback;
        if (timerevent_cb) {
            QTimerEvent* cbval1 = event;

            timerevent_cb(this, cbval1);
            return;
        }
        QWizardPage::timerEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (qwizardpage_childevent_isbase) {
            qwizardpage_childevent_isbase = false;
            QWizardPage::childEvent(event);
            return;
        }
        auto childevent_cb = qwizardpage_childevent_callback;
        if (childevent_cb) {
            QChildEvent* cbval1 = event;

            childevent_cb(this, cbval1);
            return;
        }
        QWizardPage::childEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (qwizardpage_customevent_isbase) {
            qwizardpage_customevent_isbase = false;
            QWizardPage::customEvent(event);
            return;
        }
        auto customevent_cb = qwizardpage_customevent_callback;
        if (customevent_cb) {
            QEvent* cbval1 = event;

            customevent_cb(this, cbval1);
            return;
        }
        QWizardPage::customEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (qwizardpage_connectnotify_isbase) {
            qwizardpage_connectnotify_isbase = false;
            QWizardPage::connectNotify(signal);
            return;
        }
        auto connectnotify_cb = qwizardpage_connectnotify_callback;
        if (connectnotify_cb) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            connectnotify_cb(this, cbval1);
            return;
        }
        QWizardPage::connectNotify(signal);
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (qwizardpage_disconnectnotify_isbase) {
            qwizardpage_disconnectnotify_isbase = false;
            QWizardPage::disconnectNotify(signal);
            return;
        }
        auto disconnectnotify_cb = qwizardpage_disconnectnotify_callback;
        if (disconnectnotify_cb) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            disconnectnotify_cb(this, cbval1);
            return;
        }
        QWizardPage::disconnectNotify(signal);
    }

    // Virtual method for C ABI access and custom callback
    void setField(const QString& name, const QVariant& value) {
        if (qwizardpage_setfield_isbase) {
            qwizardpage_setfield_isbase = false;
            QWizardPage::setField(name, value);
            return;
        }
        auto setfield_cb = qwizardpage_setfield_callback;
        if (setfield_cb) {
            const QString name_ret = name;
            // Convert QString from UTF-16 in C++ RAII memory to UTF-8 chars in manually-managed C memory
            QByteArray name_b = name_ret.toUtf8();
            auto name_str_len = name_b.length();
            const char* name_str = static_cast<const char*>(malloc(name_str_len + 1));
            memcpy((void*)name_str, name_b.data(), name_str_len);
            ((char*)name_str)[name_str_len] = '\0';
            const char* cbval1 = name_str;
            const QVariant& value_ret = value;
            // Cast returned reference into pointer
            QVariant* cbval2 = const_cast<QVariant*>(&value_ret);

            setfield_cb(this, cbval1, cbval2);
            libqt_free(name_str);
            return;
        }
        QWizardPage::setField(name, value);
    }

    // Virtual method for C ABI access and custom callback
    QVariant field(const QString& name) const {
        if (qwizardpage_field_isbase) {
            qwizardpage_field_isbase = false;
            return QWizardPage::field(name);
        }
        auto field_cb = qwizardpage_field_callback;
        if (field_cb) {
            const QString name_ret = name;
            // Convert QString from UTF-16 in C++ RAII memory to UTF-8 chars in manually-managed C memory
            QByteArray name_b = name_ret.toUtf8();
            auto name_str_len = name_b.length();
            const char* name_str = static_cast<const char*>(malloc(name_str_len + 1));
            memcpy((void*)name_str, name_b.data(), name_str_len);
            ((char*)name_str)[name_str_len] = '\0';
            const char* cbval1 = name_str;

            QVariant* callback_ret = field_cb(this, cbval1);
            libqt_free(name_str);
            return *callback_ret;
        }
        return QWizardPage::field(name);
    }

    // Virtual method for C ABI access and custom callback
    void registerField(const QString& name, QWidget* widget) {
        if (qwizardpage_registerfield_isbase) {
            qwizardpage_registerfield_isbase = false;
            QWizardPage::registerField(name, widget);
            return;
        }
        auto registerfield_cb = qwizardpage_registerfield_callback;
        if (registerfield_cb) {
            const QString name_ret = name;
            // Convert QString from UTF-16 in C++ RAII memory to UTF-8 chars in manually-managed C memory
            QByteArray name_b = name_ret.toUtf8();
            auto name_str_len = name_b.length();
            const char* name_str = static_cast<const char*>(malloc(name_str_len + 1));
            memcpy((void*)name_str, name_b.data(), name_str_len);
            ((char*)name_str)[name_str_len] = '\0';
            const char* cbval1 = name_str;
            QWidget* cbval2 = widget;

            registerfield_cb(this, cbval1, cbval2);
            libqt_free(name_str);
            return;
        }
        QWizardPage::registerField(name, widget);
    }

    // Virtual method for C ABI access and custom callback
    QWizard* wizard() const {
        if (qwizardpage_wizard_isbase) {
            qwizardpage_wizard_isbase = false;
            return QWizardPage::wizard();
        }
        auto wizard_cb = qwizardpage_wizard_callback;
        if (wizard_cb) {
            QWizard* callback_ret = wizard_cb();
            return callback_ret;
        }
        return QWizardPage::wizard();
    }

    // Virtual method for C ABI access and custom callback
    void registerField(const QString& name, QWidget* widget, const char* property) {
        if (qwizardpage_registerfield3_isbase) {
            qwizardpage_registerfield3_isbase = false;
            QWizardPage::registerField(name, widget, property);
            return;
        }
        auto registerfield3_cb = qwizardpage_registerfield3_callback;
        if (registerfield3_cb) {
            const QString name_ret = name;
            // Convert QString from UTF-16 in C++ RAII memory to UTF-8 chars in manually-managed C memory
            QByteArray name_b = name_ret.toUtf8();
            auto name_str_len = name_b.length();
            const char* name_str = static_cast<const char*>(malloc(name_str_len + 1));
            memcpy((void*)name_str, name_b.data(), name_str_len);
            ((char*)name_str)[name_str_len] = '\0';
            const char* cbval1 = name_str;
            QWidget* cbval2 = widget;
            const char* cbval3 = (const char*)property;

            registerfield3_cb(this, cbval1, cbval2, cbval3);
            libqt_free(name_str);
            return;
        }
        QWizardPage::registerField(name, widget, property);
    }

    // Virtual method for C ABI access and custom callback
    void registerField(const QString& name, QWidget* widget, const char* property, const char* changedSignal) {
        if (qwizardpage_registerfield4_isbase) {
            qwizardpage_registerfield4_isbase = false;
            QWizardPage::registerField(name, widget, property, changedSignal);
            return;
        }
        auto registerfield4_cb = qwizardpage_registerfield4_callback;
        if (registerfield4_cb) {
            const QString name_ret = name;
            // Convert QString from UTF-16 in C++ RAII memory to UTF-8 chars in manually-managed C memory
            QByteArray name_b = name_ret.toUtf8();
            auto name_str_len = name_b.length();
            const char* name_str = static_cast<const char*>(malloc(name_str_len + 1));
            memcpy((void*)name_str, name_b.data(), name_str_len);
            ((char*)name_str)[name_str_len] = '\0';
            const char* cbval1 = name_str;
            QWidget* cbval2 = widget;
            const char* cbval3 = (const char*)property;
            const char* cbval4 = (const char*)changedSignal;

            registerfield4_cb(this, cbval1, cbval2, cbval3, cbval4);
            libqt_free(name_str);
            return;
        }
        QWizardPage::registerField(name, widget, property, changedSignal);
    }

    // Virtual method for C ABI access and custom callback
    void updateMicroFocus() {
        if (qwizardpage_updatemicrofocus_isbase) {
            qwizardpage_updatemicrofocus_isbase = false;
            QWizardPage::updateMicroFocus();
            return;
        }
        auto updatemicrofocus_cb = qwizardpage_updatemicrofocus_callback;
        if (updatemicrofocus_cb) {
            updatemicrofocus_cb();
            return;
        }
        QWizardPage::updateMicroFocus();
    }

    // Virtual method for C ABI access and custom callback
    void create() {
        if (qwizardpage_create_isbase) {
            qwizardpage_create_isbase = false;
            QWizardPage::create();
            return;
        }
        auto create_cb = qwizardpage_create_callback;
        if (create_cb) {
            create_cb();
            return;
        }
        QWizardPage::create();
    }

    // Virtual method for C ABI access and custom callback
    void destroy() {
        if (qwizardpage_destroy_isbase) {
            qwizardpage_destroy_isbase = false;
            QWizardPage::destroy();
            return;
        }
        auto destroy_cb = qwizardpage_destroy_callback;
        if (destroy_cb) {
            destroy_cb();
            return;
        }
        QWizardPage::destroy();
    }

    // Virtual method for C ABI access and custom callback
    bool focusNextChild() {
        if (qwizardpage_focusnextchild_isbase) {
            qwizardpage_focusnextchild_isbase = false;
            return QWizardPage::focusNextChild();
        }
        auto focusnextchild_cb = qwizardpage_focusnextchild_callback;
        if (focusnextchild_cb) {
            bool callback_ret = focusnextchild_cb();
            return callback_ret;
        }
        return QWizardPage::focusNextChild();
    }

    // Virtual method for C ABI access and custom callback
    bool focusPreviousChild() {
        if (qwizardpage_focuspreviouschild_isbase) {
            qwizardpage_focuspreviouschild_isbase = false;
            return QWizardPage::focusPreviousChild();
        }
        auto focuspreviouschild_cb = qwizardpage_focuspreviouschild_callback;
        if (focuspreviouschild_cb) {
            bool callback_ret = focuspreviouschild_cb();
            return callback_ret;
        }
        return QWizardPage::focusPreviousChild();
    }

    // Virtual method for C ABI access and custom callback
    QObject* sender() const {
        if (qwizardpage_sender_isbase) {
            qwizardpage_sender_isbase = false;
            return QWizardPage::sender();
        }
        auto sender_cb = qwizardpage_sender_callback;
        if (sender_cb) {
            QObject* callback_ret = sender_cb();
            return callback_ret;
        }
        return QWizardPage::sender();
    }

    // Virtual method for C ABI access and custom callback
    int senderSignalIndex() const {
        if (qwizardpage_sendersignalindex_isbase) {
            qwizardpage_sendersignalindex_isbase = false;
            return QWizardPage::senderSignalIndex();
        }
        auto sendersignalindex_cb = qwizardpage_sendersignalindex_callback;
        if (sendersignalindex_cb) {
            int callback_ret = sendersignalindex_cb();
            return static_cast<int>(callback_ret);
        }
        return QWizardPage::senderSignalIndex();
    }

    // Virtual method for C ABI access and custom callback
    int receivers(const char* signal) const {
        if (qwizardpage_receivers_isbase) {
            qwizardpage_receivers_isbase = false;
            return QWizardPage::receivers(signal);
        }
        auto receivers_cb = qwizardpage_receivers_callback;
        if (receivers_cb) {
            const char* cbval1 = (const char*)signal;

            int callback_ret = receivers_cb(this, cbval1);
            return static_cast<int>(callback_ret);
        }
        return QWizardPage::receivers(signal);
    }

    // Virtual method for C ABI access and custom callback
    bool isSignalConnected(const QMetaMethod& signal) const {
        if (qwizardpage_issignalconnected_isbase) {
            qwizardpage_issignalconnected_isbase = false;
            return QWizardPage::isSignalConnected(signal);
        }
        auto issignalconnected_cb = qwizardpage_issignalconnected_callback;
        if (issignalconnected_cb) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            bool callback_ret = issignalconnected_cb(this, cbval1);
            return callback_ret;
        }
        return QWizardPage::isSignalConnected(signal);
    }

    // Virtual method for C ABI access and custom callback
    double getDecodedMetricF(QPaintDevice::PaintDeviceMetric metricA, QPaintDevice::PaintDeviceMetric metricB) const {
        if (qwizardpage_getdecodedmetricf_isbase) {
            qwizardpage_getdecodedmetricf_isbase = false;
            return QWizardPage::getDecodedMetricF(metricA, metricB);
        }
        auto getdecodedmetricf_cb = qwizardpage_getdecodedmetricf_callback;
        if (getdecodedmetricf_cb) {
            int cbval1 = static_cast<int>(metricA);
            int cbval2 = static_cast<int>(metricB);

            double callback_ret = getdecodedmetricf_cb(this, cbval1, cbval2);
            return static_cast<double>(callback_ret);
        }
        return QWizardPage::getDecodedMetricF(metricA, metricB);
    }

    // Friend functions
    friend bool QWizardPage_Event(QWizardPage* self, QEvent* event);
    friend bool QWizardPage_SuperEvent(QWizardPage* self, QEvent* event);
    friend void QWizardPage_MousePressEvent(QWizardPage* self, QMouseEvent* event);
    friend void QWizardPage_SuperMousePressEvent(QWizardPage* self, QMouseEvent* event);
    friend void QWizardPage_MouseReleaseEvent(QWizardPage* self, QMouseEvent* event);
    friend void QWizardPage_SuperMouseReleaseEvent(QWizardPage* self, QMouseEvent* event);
    friend void QWizardPage_MouseDoubleClickEvent(QWizardPage* self, QMouseEvent* event);
    friend void QWizardPage_SuperMouseDoubleClickEvent(QWizardPage* self, QMouseEvent* event);
    friend void QWizardPage_MouseMoveEvent(QWizardPage* self, QMouseEvent* event);
    friend void QWizardPage_SuperMouseMoveEvent(QWizardPage* self, QMouseEvent* event);
    friend void QWizardPage_WheelEvent(QWizardPage* self, QWheelEvent* event);
    friend void QWizardPage_SuperWheelEvent(QWizardPage* self, QWheelEvent* event);
    friend void QWizardPage_KeyPressEvent(QWizardPage* self, QKeyEvent* event);
    friend void QWizardPage_SuperKeyPressEvent(QWizardPage* self, QKeyEvent* event);
    friend void QWizardPage_KeyReleaseEvent(QWizardPage* self, QKeyEvent* event);
    friend void QWizardPage_SuperKeyReleaseEvent(QWizardPage* self, QKeyEvent* event);
    friend void QWizardPage_FocusInEvent(QWizardPage* self, QFocusEvent* event);
    friend void QWizardPage_SuperFocusInEvent(QWizardPage* self, QFocusEvent* event);
    friend void QWizardPage_FocusOutEvent(QWizardPage* self, QFocusEvent* event);
    friend void QWizardPage_SuperFocusOutEvent(QWizardPage* self, QFocusEvent* event);
    friend void QWizardPage_EnterEvent(QWizardPage* self, QEnterEvent* event);
    friend void QWizardPage_SuperEnterEvent(QWizardPage* self, QEnterEvent* event);
    friend void QWizardPage_LeaveEvent(QWizardPage* self, QEvent* event);
    friend void QWizardPage_SuperLeaveEvent(QWizardPage* self, QEvent* event);
    friend void QWizardPage_PaintEvent(QWizardPage* self, QPaintEvent* event);
    friend void QWizardPage_SuperPaintEvent(QWizardPage* self, QPaintEvent* event);
    friend void QWizardPage_MoveEvent(QWizardPage* self, QMoveEvent* event);
    friend void QWizardPage_SuperMoveEvent(QWizardPage* self, QMoveEvent* event);
    friend void QWizardPage_ResizeEvent(QWizardPage* self, QResizeEvent* event);
    friend void QWizardPage_SuperResizeEvent(QWizardPage* self, QResizeEvent* event);
    friend void QWizardPage_CloseEvent(QWizardPage* self, QCloseEvent* event);
    friend void QWizardPage_SuperCloseEvent(QWizardPage* self, QCloseEvent* event);
    friend void QWizardPage_ContextMenuEvent(QWizardPage* self, QContextMenuEvent* event);
    friend void QWizardPage_SuperContextMenuEvent(QWizardPage* self, QContextMenuEvent* event);
    friend void QWizardPage_TabletEvent(QWizardPage* self, QTabletEvent* event);
    friend void QWizardPage_SuperTabletEvent(QWizardPage* self, QTabletEvent* event);
    friend void QWizardPage_ActionEvent(QWizardPage* self, QActionEvent* event);
    friend void QWizardPage_SuperActionEvent(QWizardPage* self, QActionEvent* event);
    friend void QWizardPage_DragEnterEvent(QWizardPage* self, QDragEnterEvent* event);
    friend void QWizardPage_SuperDragEnterEvent(QWizardPage* self, QDragEnterEvent* event);
    friend void QWizardPage_DragMoveEvent(QWizardPage* self, QDragMoveEvent* event);
    friend void QWizardPage_SuperDragMoveEvent(QWizardPage* self, QDragMoveEvent* event);
    friend void QWizardPage_DragLeaveEvent(QWizardPage* self, QDragLeaveEvent* event);
    friend void QWizardPage_SuperDragLeaveEvent(QWizardPage* self, QDragLeaveEvent* event);
    friend void QWizardPage_DropEvent(QWizardPage* self, QDropEvent* event);
    friend void QWizardPage_SuperDropEvent(QWizardPage* self, QDropEvent* event);
    friend void QWizardPage_ShowEvent(QWizardPage* self, QShowEvent* event);
    friend void QWizardPage_SuperShowEvent(QWizardPage* self, QShowEvent* event);
    friend void QWizardPage_HideEvent(QWizardPage* self, QHideEvent* event);
    friend void QWizardPage_SuperHideEvent(QWizardPage* self, QHideEvent* event);
    friend bool QWizardPage_NativeEvent(QWizardPage* self, const libqt_string eventType, void* message, intptr_t* result);
    friend bool QWizardPage_SuperNativeEvent(QWizardPage* self, const libqt_string eventType, void* message, intptr_t* result);
    friend void QWizardPage_ChangeEvent(QWizardPage* self, QEvent* param1);
    friend void QWizardPage_SuperChangeEvent(QWizardPage* self, QEvent* param1);
    friend int QWizardPage_Metric(const QWizardPage* self, int param1);
    friend int QWizardPage_SuperMetric(const QWizardPage* self, int param1);
    friend void QWizardPage_InitPainter(const QWizardPage* self, QPainter* painter);
    friend void QWizardPage_SuperInitPainter(const QWizardPage* self, QPainter* painter);
    friend QPaintDevice* QWizardPage_Redirected(const QWizardPage* self, QPoint* offset);
    friend QPaintDevice* QWizardPage_SuperRedirected(const QWizardPage* self, QPoint* offset);
    friend QPainter* QWizardPage_SharedPainter(const QWizardPage* self);
    friend QPainter* QWizardPage_SuperSharedPainter(const QWizardPage* self);
    friend void QWizardPage_InputMethodEvent(QWizardPage* self, QInputMethodEvent* param1);
    friend void QWizardPage_SuperInputMethodEvent(QWizardPage* self, QInputMethodEvent* param1);
    friend bool QWizardPage_FocusNextPrevChild(QWizardPage* self, bool next);
    friend bool QWizardPage_SuperFocusNextPrevChild(QWizardPage* self, bool next);
    friend void QWizardPage_TimerEvent(QWizardPage* self, QTimerEvent* event);
    friend void QWizardPage_SuperTimerEvent(QWizardPage* self, QTimerEvent* event);
    friend void QWizardPage_ChildEvent(QWizardPage* self, QChildEvent* event);
    friend void QWizardPage_SuperChildEvent(QWizardPage* self, QChildEvent* event);
    friend void QWizardPage_CustomEvent(QWizardPage* self, QEvent* event);
    friend void QWizardPage_SuperCustomEvent(QWizardPage* self, QEvent* event);
    friend void QWizardPage_ConnectNotify(QWizardPage* self, const QMetaMethod* signal);
    friend void QWizardPage_SuperConnectNotify(QWizardPage* self, const QMetaMethod* signal);
    friend void QWizardPage_DisconnectNotify(QWizardPage* self, const QMetaMethod* signal);
    friend void QWizardPage_SuperDisconnectNotify(QWizardPage* self, const QMetaMethod* signal);
    friend void QWizardPage_SetField(QWizardPage* self, const libqt_string name, const QVariant* value);
    friend void QWizardPage_SuperSetField(QWizardPage* self, const libqt_string name, const QVariant* value);
    friend QVariant* QWizardPage_Field(const QWizardPage* self, const libqt_string name);
    friend QVariant* QWizardPage_SuperField(const QWizardPage* self, const libqt_string name);
    friend void QWizardPage_RegisterField(QWizardPage* self, const libqt_string name, QWidget* widget);
    friend void QWizardPage_SuperRegisterField(QWizardPage* self, const libqt_string name, QWidget* widget);
    friend QWizard* QWizardPage_Wizard(const QWizardPage* self);
    friend QWizard* QWizardPage_SuperWizard(const QWizardPage* self);
    friend void QWizardPage_RegisterField3(QWizardPage* self, const libqt_string name, QWidget* widget, const char* property);
    friend void QWizardPage_SuperRegisterField3(QWizardPage* self, const libqt_string name, QWidget* widget, const char* property);
    friend void QWizardPage_RegisterField4(QWizardPage* self, const libqt_string name, QWidget* widget, const char* property, const char* changedSignal);
    friend void QWizardPage_SuperRegisterField4(QWizardPage* self, const libqt_string name, QWidget* widget, const char* property, const char* changedSignal);
    friend void QWizardPage_UpdateMicroFocus(QWizardPage* self);
    friend void QWizardPage_SuperUpdateMicroFocus(QWizardPage* self);
    friend void QWizardPage_Create(QWizardPage* self);
    friend void QWizardPage_SuperCreate(QWizardPage* self);
    friend void QWizardPage_Destroy(QWizardPage* self);
    friend void QWizardPage_SuperDestroy(QWizardPage* self);
    friend bool QWizardPage_FocusNextChild(QWizardPage* self);
    friend bool QWizardPage_SuperFocusNextChild(QWizardPage* self);
    friend bool QWizardPage_FocusPreviousChild(QWizardPage* self);
    friend bool QWizardPage_SuperFocusPreviousChild(QWizardPage* self);
    friend QObject* QWizardPage_Sender(const QWizardPage* self);
    friend QObject* QWizardPage_SuperSender(const QWizardPage* self);
    friend int QWizardPage_SenderSignalIndex(const QWizardPage* self);
    friend int QWizardPage_SuperSenderSignalIndex(const QWizardPage* self);
    friend int QWizardPage_Receivers(const QWizardPage* self, const char* signal);
    friend int QWizardPage_SuperReceivers(const QWizardPage* self, const char* signal);
    friend bool QWizardPage_IsSignalConnected(const QWizardPage* self, const QMetaMethod* signal);
    friend bool QWizardPage_SuperIsSignalConnected(const QWizardPage* self, const QMetaMethod* signal);
    friend double QWizardPage_GetDecodedMetricF(const QWizardPage* self, int metricA, int metricB);
    friend double QWizardPage_SuperGetDecodedMetricF(const QWizardPage* self, int metricA, int metricB);
};

#endif
