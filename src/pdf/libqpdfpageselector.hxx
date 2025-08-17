#pragma once
#ifndef SRC_PDFC_LIBVIRTUALQPDFPAGESELECTOR_H
#define SRC_PDFC_LIBVIRTUALQPDFPAGESELECTOR_H

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

// This class is a subclass of QPdfPageSelector so that we can call protected methods
class VirtualQPdfPageSelector final : public QPdfPageSelector {

  public:
    // Virtual class boolean flag
    bool isVirtualQPdfPageSelector = true;

    // Virtual class public types (including callbacks)
    using QPdfPageSelector_Metacall_Callback = int (*)(QPdfPageSelector*, int, int, void**);
    using QPdfPageSelector_DevType_Callback = int (*)();
    using QPdfPageSelector_SetVisible_Callback = void (*)(QPdfPageSelector*, bool);
    using QPdfPageSelector_SizeHint_Callback = QSize* (*)();
    using QPdfPageSelector_MinimumSizeHint_Callback = QSize* (*)();
    using QPdfPageSelector_HeightForWidth_Callback = int (*)(const QPdfPageSelector*, int);
    using QPdfPageSelector_HasHeightForWidth_Callback = bool (*)();
    using QPdfPageSelector_PaintEngine_Callback = QPaintEngine* (*)();
    using QPdfPageSelector_Event_Callback = bool (*)(QPdfPageSelector*, QEvent*);
    using QPdfPageSelector_MousePressEvent_Callback = void (*)(QPdfPageSelector*, QMouseEvent*);
    using QPdfPageSelector_MouseReleaseEvent_Callback = void (*)(QPdfPageSelector*, QMouseEvent*);
    using QPdfPageSelector_MouseDoubleClickEvent_Callback = void (*)(QPdfPageSelector*, QMouseEvent*);
    using QPdfPageSelector_MouseMoveEvent_Callback = void (*)(QPdfPageSelector*, QMouseEvent*);
    using QPdfPageSelector_WheelEvent_Callback = void (*)(QPdfPageSelector*, QWheelEvent*);
    using QPdfPageSelector_KeyPressEvent_Callback = void (*)(QPdfPageSelector*, QKeyEvent*);
    using QPdfPageSelector_KeyReleaseEvent_Callback = void (*)(QPdfPageSelector*, QKeyEvent*);
    using QPdfPageSelector_FocusInEvent_Callback = void (*)(QPdfPageSelector*, QFocusEvent*);
    using QPdfPageSelector_FocusOutEvent_Callback = void (*)(QPdfPageSelector*, QFocusEvent*);
    using QPdfPageSelector_EnterEvent_Callback = void (*)(QPdfPageSelector*, QEnterEvent*);
    using QPdfPageSelector_LeaveEvent_Callback = void (*)(QPdfPageSelector*, QEvent*);
    using QPdfPageSelector_PaintEvent_Callback = void (*)(QPdfPageSelector*, QPaintEvent*);
    using QPdfPageSelector_MoveEvent_Callback = void (*)(QPdfPageSelector*, QMoveEvent*);
    using QPdfPageSelector_ResizeEvent_Callback = void (*)(QPdfPageSelector*, QResizeEvent*);
    using QPdfPageSelector_CloseEvent_Callback = void (*)(QPdfPageSelector*, QCloseEvent*);
    using QPdfPageSelector_ContextMenuEvent_Callback = void (*)(QPdfPageSelector*, QContextMenuEvent*);
    using QPdfPageSelector_TabletEvent_Callback = void (*)(QPdfPageSelector*, QTabletEvent*);
    using QPdfPageSelector_ActionEvent_Callback = void (*)(QPdfPageSelector*, QActionEvent*);
    using QPdfPageSelector_DragEnterEvent_Callback = void (*)(QPdfPageSelector*, QDragEnterEvent*);
    using QPdfPageSelector_DragMoveEvent_Callback = void (*)(QPdfPageSelector*, QDragMoveEvent*);
    using QPdfPageSelector_DragLeaveEvent_Callback = void (*)(QPdfPageSelector*, QDragLeaveEvent*);
    using QPdfPageSelector_DropEvent_Callback = void (*)(QPdfPageSelector*, QDropEvent*);
    using QPdfPageSelector_ShowEvent_Callback = void (*)(QPdfPageSelector*, QShowEvent*);
    using QPdfPageSelector_HideEvent_Callback = void (*)(QPdfPageSelector*, QHideEvent*);
    using QPdfPageSelector_NativeEvent_Callback = bool (*)(QPdfPageSelector*, libqt_string, void*, intptr_t*);
    using QPdfPageSelector_ChangeEvent_Callback = void (*)(QPdfPageSelector*, QEvent*);
    using QPdfPageSelector_Metric_Callback = int (*)(const QPdfPageSelector*, int);
    using QPdfPageSelector_InitPainter_Callback = void (*)(const QPdfPageSelector*, QPainter*);
    using QPdfPageSelector_Redirected_Callback = QPaintDevice* (*)(const QPdfPageSelector*, QPoint*);
    using QPdfPageSelector_SharedPainter_Callback = QPainter* (*)();
    using QPdfPageSelector_InputMethodEvent_Callback = void (*)(QPdfPageSelector*, QInputMethodEvent*);
    using QPdfPageSelector_InputMethodQuery_Callback = QVariant* (*)(const QPdfPageSelector*, int);
    using QPdfPageSelector_FocusNextPrevChild_Callback = bool (*)(QPdfPageSelector*, bool);
    using QPdfPageSelector_EventFilter_Callback = bool (*)(QPdfPageSelector*, QObject*, QEvent*);
    using QPdfPageSelector_TimerEvent_Callback = void (*)(QPdfPageSelector*, QTimerEvent*);
    using QPdfPageSelector_ChildEvent_Callback = void (*)(QPdfPageSelector*, QChildEvent*);
    using QPdfPageSelector_CustomEvent_Callback = void (*)(QPdfPageSelector*, QEvent*);
    using QPdfPageSelector_ConnectNotify_Callback = void (*)(QPdfPageSelector*, QMetaMethod*);
    using QPdfPageSelector_DisconnectNotify_Callback = void (*)(QPdfPageSelector*, QMetaMethod*);
    using QPdfPageSelector_UpdateMicroFocus_Callback = void (*)();
    using QPdfPageSelector_Create_Callback = void (*)();
    using QPdfPageSelector_Destroy_Callback = void (*)();
    using QPdfPageSelector_FocusNextChild_Callback = bool (*)();
    using QPdfPageSelector_FocusPreviousChild_Callback = bool (*)();
    using QPdfPageSelector_Sender_Callback = QObject* (*)();
    using QPdfPageSelector_SenderSignalIndex_Callback = int (*)();
    using QPdfPageSelector_Receivers_Callback = int (*)(const QPdfPageSelector*, const char*);
    using QPdfPageSelector_IsSignalConnected_Callback = bool (*)(const QPdfPageSelector*, QMetaMethod*);
    using QPdfPageSelector_GetDecodedMetricF_Callback = double (*)(const QPdfPageSelector*, int, int);

  protected:
    // Instance callback storage
    QPdfPageSelector_Metacall_Callback qpdfpageselector_metacall_callback = nullptr;
    QPdfPageSelector_DevType_Callback qpdfpageselector_devtype_callback = nullptr;
    QPdfPageSelector_SetVisible_Callback qpdfpageselector_setvisible_callback = nullptr;
    QPdfPageSelector_SizeHint_Callback qpdfpageselector_sizehint_callback = nullptr;
    QPdfPageSelector_MinimumSizeHint_Callback qpdfpageselector_minimumsizehint_callback = nullptr;
    QPdfPageSelector_HeightForWidth_Callback qpdfpageselector_heightforwidth_callback = nullptr;
    QPdfPageSelector_HasHeightForWidth_Callback qpdfpageselector_hasheightforwidth_callback = nullptr;
    QPdfPageSelector_PaintEngine_Callback qpdfpageselector_paintengine_callback = nullptr;
    QPdfPageSelector_Event_Callback qpdfpageselector_event_callback = nullptr;
    QPdfPageSelector_MousePressEvent_Callback qpdfpageselector_mousepressevent_callback = nullptr;
    QPdfPageSelector_MouseReleaseEvent_Callback qpdfpageselector_mousereleaseevent_callback = nullptr;
    QPdfPageSelector_MouseDoubleClickEvent_Callback qpdfpageselector_mousedoubleclickevent_callback = nullptr;
    QPdfPageSelector_MouseMoveEvent_Callback qpdfpageselector_mousemoveevent_callback = nullptr;
    QPdfPageSelector_WheelEvent_Callback qpdfpageselector_wheelevent_callback = nullptr;
    QPdfPageSelector_KeyPressEvent_Callback qpdfpageselector_keypressevent_callback = nullptr;
    QPdfPageSelector_KeyReleaseEvent_Callback qpdfpageselector_keyreleaseevent_callback = nullptr;
    QPdfPageSelector_FocusInEvent_Callback qpdfpageselector_focusinevent_callback = nullptr;
    QPdfPageSelector_FocusOutEvent_Callback qpdfpageselector_focusoutevent_callback = nullptr;
    QPdfPageSelector_EnterEvent_Callback qpdfpageselector_enterevent_callback = nullptr;
    QPdfPageSelector_LeaveEvent_Callback qpdfpageselector_leaveevent_callback = nullptr;
    QPdfPageSelector_PaintEvent_Callback qpdfpageselector_paintevent_callback = nullptr;
    QPdfPageSelector_MoveEvent_Callback qpdfpageselector_moveevent_callback = nullptr;
    QPdfPageSelector_ResizeEvent_Callback qpdfpageselector_resizeevent_callback = nullptr;
    QPdfPageSelector_CloseEvent_Callback qpdfpageselector_closeevent_callback = nullptr;
    QPdfPageSelector_ContextMenuEvent_Callback qpdfpageselector_contextmenuevent_callback = nullptr;
    QPdfPageSelector_TabletEvent_Callback qpdfpageselector_tabletevent_callback = nullptr;
    QPdfPageSelector_ActionEvent_Callback qpdfpageselector_actionevent_callback = nullptr;
    QPdfPageSelector_DragEnterEvent_Callback qpdfpageselector_dragenterevent_callback = nullptr;
    QPdfPageSelector_DragMoveEvent_Callback qpdfpageselector_dragmoveevent_callback = nullptr;
    QPdfPageSelector_DragLeaveEvent_Callback qpdfpageselector_dragleaveevent_callback = nullptr;
    QPdfPageSelector_DropEvent_Callback qpdfpageselector_dropevent_callback = nullptr;
    QPdfPageSelector_ShowEvent_Callback qpdfpageselector_showevent_callback = nullptr;
    QPdfPageSelector_HideEvent_Callback qpdfpageselector_hideevent_callback = nullptr;
    QPdfPageSelector_NativeEvent_Callback qpdfpageselector_nativeevent_callback = nullptr;
    QPdfPageSelector_ChangeEvent_Callback qpdfpageselector_changeevent_callback = nullptr;
    QPdfPageSelector_Metric_Callback qpdfpageselector_metric_callback = nullptr;
    QPdfPageSelector_InitPainter_Callback qpdfpageselector_initpainter_callback = nullptr;
    QPdfPageSelector_Redirected_Callback qpdfpageselector_redirected_callback = nullptr;
    QPdfPageSelector_SharedPainter_Callback qpdfpageselector_sharedpainter_callback = nullptr;
    QPdfPageSelector_InputMethodEvent_Callback qpdfpageselector_inputmethodevent_callback = nullptr;
    QPdfPageSelector_InputMethodQuery_Callback qpdfpageselector_inputmethodquery_callback = nullptr;
    QPdfPageSelector_FocusNextPrevChild_Callback qpdfpageselector_focusnextprevchild_callback = nullptr;
    QPdfPageSelector_EventFilter_Callback qpdfpageselector_eventfilter_callback = nullptr;
    QPdfPageSelector_TimerEvent_Callback qpdfpageselector_timerevent_callback = nullptr;
    QPdfPageSelector_ChildEvent_Callback qpdfpageselector_childevent_callback = nullptr;
    QPdfPageSelector_CustomEvent_Callback qpdfpageselector_customevent_callback = nullptr;
    QPdfPageSelector_ConnectNotify_Callback qpdfpageselector_connectnotify_callback = nullptr;
    QPdfPageSelector_DisconnectNotify_Callback qpdfpageselector_disconnectnotify_callback = nullptr;
    QPdfPageSelector_UpdateMicroFocus_Callback qpdfpageselector_updatemicrofocus_callback = nullptr;
    QPdfPageSelector_Create_Callback qpdfpageselector_create_callback = nullptr;
    QPdfPageSelector_Destroy_Callback qpdfpageselector_destroy_callback = nullptr;
    QPdfPageSelector_FocusNextChild_Callback qpdfpageselector_focusnextchild_callback = nullptr;
    QPdfPageSelector_FocusPreviousChild_Callback qpdfpageselector_focuspreviouschild_callback = nullptr;
    QPdfPageSelector_Sender_Callback qpdfpageselector_sender_callback = nullptr;
    QPdfPageSelector_SenderSignalIndex_Callback qpdfpageselector_sendersignalindex_callback = nullptr;
    QPdfPageSelector_Receivers_Callback qpdfpageselector_receivers_callback = nullptr;
    QPdfPageSelector_IsSignalConnected_Callback qpdfpageselector_issignalconnected_callback = nullptr;
    QPdfPageSelector_GetDecodedMetricF_Callback qpdfpageselector_getdecodedmetricf_callback = nullptr;

    // Instance base flags
    mutable bool qpdfpageselector_metacall_isbase = false;
    mutable bool qpdfpageselector_devtype_isbase = false;
    mutable bool qpdfpageselector_setvisible_isbase = false;
    mutable bool qpdfpageselector_sizehint_isbase = false;
    mutable bool qpdfpageselector_minimumsizehint_isbase = false;
    mutable bool qpdfpageselector_heightforwidth_isbase = false;
    mutable bool qpdfpageselector_hasheightforwidth_isbase = false;
    mutable bool qpdfpageselector_paintengine_isbase = false;
    mutable bool qpdfpageselector_event_isbase = false;
    mutable bool qpdfpageselector_mousepressevent_isbase = false;
    mutable bool qpdfpageselector_mousereleaseevent_isbase = false;
    mutable bool qpdfpageselector_mousedoubleclickevent_isbase = false;
    mutable bool qpdfpageselector_mousemoveevent_isbase = false;
    mutable bool qpdfpageselector_wheelevent_isbase = false;
    mutable bool qpdfpageselector_keypressevent_isbase = false;
    mutable bool qpdfpageselector_keyreleaseevent_isbase = false;
    mutable bool qpdfpageselector_focusinevent_isbase = false;
    mutable bool qpdfpageselector_focusoutevent_isbase = false;
    mutable bool qpdfpageselector_enterevent_isbase = false;
    mutable bool qpdfpageselector_leaveevent_isbase = false;
    mutable bool qpdfpageselector_paintevent_isbase = false;
    mutable bool qpdfpageselector_moveevent_isbase = false;
    mutable bool qpdfpageselector_resizeevent_isbase = false;
    mutable bool qpdfpageselector_closeevent_isbase = false;
    mutable bool qpdfpageselector_contextmenuevent_isbase = false;
    mutable bool qpdfpageselector_tabletevent_isbase = false;
    mutable bool qpdfpageselector_actionevent_isbase = false;
    mutable bool qpdfpageselector_dragenterevent_isbase = false;
    mutable bool qpdfpageselector_dragmoveevent_isbase = false;
    mutable bool qpdfpageselector_dragleaveevent_isbase = false;
    mutable bool qpdfpageselector_dropevent_isbase = false;
    mutable bool qpdfpageselector_showevent_isbase = false;
    mutable bool qpdfpageselector_hideevent_isbase = false;
    mutable bool qpdfpageselector_nativeevent_isbase = false;
    mutable bool qpdfpageselector_changeevent_isbase = false;
    mutable bool qpdfpageselector_metric_isbase = false;
    mutable bool qpdfpageselector_initpainter_isbase = false;
    mutable bool qpdfpageselector_redirected_isbase = false;
    mutable bool qpdfpageselector_sharedpainter_isbase = false;
    mutable bool qpdfpageselector_inputmethodevent_isbase = false;
    mutable bool qpdfpageselector_inputmethodquery_isbase = false;
    mutable bool qpdfpageselector_focusnextprevchild_isbase = false;
    mutable bool qpdfpageselector_eventfilter_isbase = false;
    mutable bool qpdfpageselector_timerevent_isbase = false;
    mutable bool qpdfpageselector_childevent_isbase = false;
    mutable bool qpdfpageselector_customevent_isbase = false;
    mutable bool qpdfpageselector_connectnotify_isbase = false;
    mutable bool qpdfpageselector_disconnectnotify_isbase = false;
    mutable bool qpdfpageselector_updatemicrofocus_isbase = false;
    mutable bool qpdfpageselector_create_isbase = false;
    mutable bool qpdfpageselector_destroy_isbase = false;
    mutable bool qpdfpageselector_focusnextchild_isbase = false;
    mutable bool qpdfpageselector_focuspreviouschild_isbase = false;
    mutable bool qpdfpageselector_sender_isbase = false;
    mutable bool qpdfpageselector_sendersignalindex_isbase = false;
    mutable bool qpdfpageselector_receivers_isbase = false;
    mutable bool qpdfpageselector_issignalconnected_isbase = false;
    mutable bool qpdfpageselector_getdecodedmetricf_isbase = false;

  public:
    VirtualQPdfPageSelector(QWidget* parent) : QPdfPageSelector(parent) {};
    VirtualQPdfPageSelector() : QPdfPageSelector() {};

    ~VirtualQPdfPageSelector() {
        qpdfpageselector_metacall_callback = nullptr;
        qpdfpageselector_devtype_callback = nullptr;
        qpdfpageselector_setvisible_callback = nullptr;
        qpdfpageselector_sizehint_callback = nullptr;
        qpdfpageselector_minimumsizehint_callback = nullptr;
        qpdfpageselector_heightforwidth_callback = nullptr;
        qpdfpageselector_hasheightforwidth_callback = nullptr;
        qpdfpageselector_paintengine_callback = nullptr;
        qpdfpageselector_event_callback = nullptr;
        qpdfpageselector_mousepressevent_callback = nullptr;
        qpdfpageselector_mousereleaseevent_callback = nullptr;
        qpdfpageselector_mousedoubleclickevent_callback = nullptr;
        qpdfpageselector_mousemoveevent_callback = nullptr;
        qpdfpageselector_wheelevent_callback = nullptr;
        qpdfpageselector_keypressevent_callback = nullptr;
        qpdfpageselector_keyreleaseevent_callback = nullptr;
        qpdfpageselector_focusinevent_callback = nullptr;
        qpdfpageselector_focusoutevent_callback = nullptr;
        qpdfpageselector_enterevent_callback = nullptr;
        qpdfpageselector_leaveevent_callback = nullptr;
        qpdfpageselector_paintevent_callback = nullptr;
        qpdfpageselector_moveevent_callback = nullptr;
        qpdfpageselector_resizeevent_callback = nullptr;
        qpdfpageselector_closeevent_callback = nullptr;
        qpdfpageselector_contextmenuevent_callback = nullptr;
        qpdfpageselector_tabletevent_callback = nullptr;
        qpdfpageselector_actionevent_callback = nullptr;
        qpdfpageselector_dragenterevent_callback = nullptr;
        qpdfpageselector_dragmoveevent_callback = nullptr;
        qpdfpageselector_dragleaveevent_callback = nullptr;
        qpdfpageselector_dropevent_callback = nullptr;
        qpdfpageselector_showevent_callback = nullptr;
        qpdfpageselector_hideevent_callback = nullptr;
        qpdfpageselector_nativeevent_callback = nullptr;
        qpdfpageselector_changeevent_callback = nullptr;
        qpdfpageselector_metric_callback = nullptr;
        qpdfpageselector_initpainter_callback = nullptr;
        qpdfpageselector_redirected_callback = nullptr;
        qpdfpageselector_sharedpainter_callback = nullptr;
        qpdfpageselector_inputmethodevent_callback = nullptr;
        qpdfpageselector_inputmethodquery_callback = nullptr;
        qpdfpageselector_focusnextprevchild_callback = nullptr;
        qpdfpageselector_eventfilter_callback = nullptr;
        qpdfpageselector_timerevent_callback = nullptr;
        qpdfpageselector_childevent_callback = nullptr;
        qpdfpageselector_customevent_callback = nullptr;
        qpdfpageselector_connectnotify_callback = nullptr;
        qpdfpageselector_disconnectnotify_callback = nullptr;
        qpdfpageselector_updatemicrofocus_callback = nullptr;
        qpdfpageselector_create_callback = nullptr;
        qpdfpageselector_destroy_callback = nullptr;
        qpdfpageselector_focusnextchild_callback = nullptr;
        qpdfpageselector_focuspreviouschild_callback = nullptr;
        qpdfpageselector_sender_callback = nullptr;
        qpdfpageselector_sendersignalindex_callback = nullptr;
        qpdfpageselector_receivers_callback = nullptr;
        qpdfpageselector_issignalconnected_callback = nullptr;
        qpdfpageselector_getdecodedmetricf_callback = nullptr;
    }

    // Callback setters
    inline void setQPdfPageSelector_Metacall_Callback(QPdfPageSelector_Metacall_Callback cb) { qpdfpageselector_metacall_callback = cb; }
    inline void setQPdfPageSelector_DevType_Callback(QPdfPageSelector_DevType_Callback cb) { qpdfpageselector_devtype_callback = cb; }
    inline void setQPdfPageSelector_SetVisible_Callback(QPdfPageSelector_SetVisible_Callback cb) { qpdfpageselector_setvisible_callback = cb; }
    inline void setQPdfPageSelector_SizeHint_Callback(QPdfPageSelector_SizeHint_Callback cb) { qpdfpageselector_sizehint_callback = cb; }
    inline void setQPdfPageSelector_MinimumSizeHint_Callback(QPdfPageSelector_MinimumSizeHint_Callback cb) { qpdfpageselector_minimumsizehint_callback = cb; }
    inline void setQPdfPageSelector_HeightForWidth_Callback(QPdfPageSelector_HeightForWidth_Callback cb) { qpdfpageselector_heightforwidth_callback = cb; }
    inline void setQPdfPageSelector_HasHeightForWidth_Callback(QPdfPageSelector_HasHeightForWidth_Callback cb) { qpdfpageselector_hasheightforwidth_callback = cb; }
    inline void setQPdfPageSelector_PaintEngine_Callback(QPdfPageSelector_PaintEngine_Callback cb) { qpdfpageselector_paintengine_callback = cb; }
    inline void setQPdfPageSelector_Event_Callback(QPdfPageSelector_Event_Callback cb) { qpdfpageselector_event_callback = cb; }
    inline void setQPdfPageSelector_MousePressEvent_Callback(QPdfPageSelector_MousePressEvent_Callback cb) { qpdfpageselector_mousepressevent_callback = cb; }
    inline void setQPdfPageSelector_MouseReleaseEvent_Callback(QPdfPageSelector_MouseReleaseEvent_Callback cb) { qpdfpageselector_mousereleaseevent_callback = cb; }
    inline void setQPdfPageSelector_MouseDoubleClickEvent_Callback(QPdfPageSelector_MouseDoubleClickEvent_Callback cb) { qpdfpageselector_mousedoubleclickevent_callback = cb; }
    inline void setQPdfPageSelector_MouseMoveEvent_Callback(QPdfPageSelector_MouseMoveEvent_Callback cb) { qpdfpageselector_mousemoveevent_callback = cb; }
    inline void setQPdfPageSelector_WheelEvent_Callback(QPdfPageSelector_WheelEvent_Callback cb) { qpdfpageselector_wheelevent_callback = cb; }
    inline void setQPdfPageSelector_KeyPressEvent_Callback(QPdfPageSelector_KeyPressEvent_Callback cb) { qpdfpageselector_keypressevent_callback = cb; }
    inline void setQPdfPageSelector_KeyReleaseEvent_Callback(QPdfPageSelector_KeyReleaseEvent_Callback cb) { qpdfpageselector_keyreleaseevent_callback = cb; }
    inline void setQPdfPageSelector_FocusInEvent_Callback(QPdfPageSelector_FocusInEvent_Callback cb) { qpdfpageselector_focusinevent_callback = cb; }
    inline void setQPdfPageSelector_FocusOutEvent_Callback(QPdfPageSelector_FocusOutEvent_Callback cb) { qpdfpageselector_focusoutevent_callback = cb; }
    inline void setQPdfPageSelector_EnterEvent_Callback(QPdfPageSelector_EnterEvent_Callback cb) { qpdfpageselector_enterevent_callback = cb; }
    inline void setQPdfPageSelector_LeaveEvent_Callback(QPdfPageSelector_LeaveEvent_Callback cb) { qpdfpageselector_leaveevent_callback = cb; }
    inline void setQPdfPageSelector_PaintEvent_Callback(QPdfPageSelector_PaintEvent_Callback cb) { qpdfpageselector_paintevent_callback = cb; }
    inline void setQPdfPageSelector_MoveEvent_Callback(QPdfPageSelector_MoveEvent_Callback cb) { qpdfpageselector_moveevent_callback = cb; }
    inline void setQPdfPageSelector_ResizeEvent_Callback(QPdfPageSelector_ResizeEvent_Callback cb) { qpdfpageselector_resizeevent_callback = cb; }
    inline void setQPdfPageSelector_CloseEvent_Callback(QPdfPageSelector_CloseEvent_Callback cb) { qpdfpageselector_closeevent_callback = cb; }
    inline void setQPdfPageSelector_ContextMenuEvent_Callback(QPdfPageSelector_ContextMenuEvent_Callback cb) { qpdfpageselector_contextmenuevent_callback = cb; }
    inline void setQPdfPageSelector_TabletEvent_Callback(QPdfPageSelector_TabletEvent_Callback cb) { qpdfpageselector_tabletevent_callback = cb; }
    inline void setQPdfPageSelector_ActionEvent_Callback(QPdfPageSelector_ActionEvent_Callback cb) { qpdfpageselector_actionevent_callback = cb; }
    inline void setQPdfPageSelector_DragEnterEvent_Callback(QPdfPageSelector_DragEnterEvent_Callback cb) { qpdfpageselector_dragenterevent_callback = cb; }
    inline void setQPdfPageSelector_DragMoveEvent_Callback(QPdfPageSelector_DragMoveEvent_Callback cb) { qpdfpageselector_dragmoveevent_callback = cb; }
    inline void setQPdfPageSelector_DragLeaveEvent_Callback(QPdfPageSelector_DragLeaveEvent_Callback cb) { qpdfpageselector_dragleaveevent_callback = cb; }
    inline void setQPdfPageSelector_DropEvent_Callback(QPdfPageSelector_DropEvent_Callback cb) { qpdfpageselector_dropevent_callback = cb; }
    inline void setQPdfPageSelector_ShowEvent_Callback(QPdfPageSelector_ShowEvent_Callback cb) { qpdfpageselector_showevent_callback = cb; }
    inline void setQPdfPageSelector_HideEvent_Callback(QPdfPageSelector_HideEvent_Callback cb) { qpdfpageselector_hideevent_callback = cb; }
    inline void setQPdfPageSelector_NativeEvent_Callback(QPdfPageSelector_NativeEvent_Callback cb) { qpdfpageselector_nativeevent_callback = cb; }
    inline void setQPdfPageSelector_ChangeEvent_Callback(QPdfPageSelector_ChangeEvent_Callback cb) { qpdfpageselector_changeevent_callback = cb; }
    inline void setQPdfPageSelector_Metric_Callback(QPdfPageSelector_Metric_Callback cb) { qpdfpageselector_metric_callback = cb; }
    inline void setQPdfPageSelector_InitPainter_Callback(QPdfPageSelector_InitPainter_Callback cb) { qpdfpageselector_initpainter_callback = cb; }
    inline void setQPdfPageSelector_Redirected_Callback(QPdfPageSelector_Redirected_Callback cb) { qpdfpageselector_redirected_callback = cb; }
    inline void setQPdfPageSelector_SharedPainter_Callback(QPdfPageSelector_SharedPainter_Callback cb) { qpdfpageselector_sharedpainter_callback = cb; }
    inline void setQPdfPageSelector_InputMethodEvent_Callback(QPdfPageSelector_InputMethodEvent_Callback cb) { qpdfpageselector_inputmethodevent_callback = cb; }
    inline void setQPdfPageSelector_InputMethodQuery_Callback(QPdfPageSelector_InputMethodQuery_Callback cb) { qpdfpageselector_inputmethodquery_callback = cb; }
    inline void setQPdfPageSelector_FocusNextPrevChild_Callback(QPdfPageSelector_FocusNextPrevChild_Callback cb) { qpdfpageselector_focusnextprevchild_callback = cb; }
    inline void setQPdfPageSelector_EventFilter_Callback(QPdfPageSelector_EventFilter_Callback cb) { qpdfpageselector_eventfilter_callback = cb; }
    inline void setQPdfPageSelector_TimerEvent_Callback(QPdfPageSelector_TimerEvent_Callback cb) { qpdfpageselector_timerevent_callback = cb; }
    inline void setQPdfPageSelector_ChildEvent_Callback(QPdfPageSelector_ChildEvent_Callback cb) { qpdfpageselector_childevent_callback = cb; }
    inline void setQPdfPageSelector_CustomEvent_Callback(QPdfPageSelector_CustomEvent_Callback cb) { qpdfpageselector_customevent_callback = cb; }
    inline void setQPdfPageSelector_ConnectNotify_Callback(QPdfPageSelector_ConnectNotify_Callback cb) { qpdfpageselector_connectnotify_callback = cb; }
    inline void setQPdfPageSelector_DisconnectNotify_Callback(QPdfPageSelector_DisconnectNotify_Callback cb) { qpdfpageselector_disconnectnotify_callback = cb; }
    inline void setQPdfPageSelector_UpdateMicroFocus_Callback(QPdfPageSelector_UpdateMicroFocus_Callback cb) { qpdfpageselector_updatemicrofocus_callback = cb; }
    inline void setQPdfPageSelector_Create_Callback(QPdfPageSelector_Create_Callback cb) { qpdfpageselector_create_callback = cb; }
    inline void setQPdfPageSelector_Destroy_Callback(QPdfPageSelector_Destroy_Callback cb) { qpdfpageselector_destroy_callback = cb; }
    inline void setQPdfPageSelector_FocusNextChild_Callback(QPdfPageSelector_FocusNextChild_Callback cb) { qpdfpageselector_focusnextchild_callback = cb; }
    inline void setQPdfPageSelector_FocusPreviousChild_Callback(QPdfPageSelector_FocusPreviousChild_Callback cb) { qpdfpageselector_focuspreviouschild_callback = cb; }
    inline void setQPdfPageSelector_Sender_Callback(QPdfPageSelector_Sender_Callback cb) { qpdfpageselector_sender_callback = cb; }
    inline void setQPdfPageSelector_SenderSignalIndex_Callback(QPdfPageSelector_SenderSignalIndex_Callback cb) { qpdfpageselector_sendersignalindex_callback = cb; }
    inline void setQPdfPageSelector_Receivers_Callback(QPdfPageSelector_Receivers_Callback cb) { qpdfpageselector_receivers_callback = cb; }
    inline void setQPdfPageSelector_IsSignalConnected_Callback(QPdfPageSelector_IsSignalConnected_Callback cb) { qpdfpageselector_issignalconnected_callback = cb; }
    inline void setQPdfPageSelector_GetDecodedMetricF_Callback(QPdfPageSelector_GetDecodedMetricF_Callback cb) { qpdfpageselector_getdecodedmetricf_callback = cb; }

    // Base flag setters
    inline void setQPdfPageSelector_Metacall_IsBase(bool value) const { qpdfpageselector_metacall_isbase = value; }
    inline void setQPdfPageSelector_DevType_IsBase(bool value) const { qpdfpageselector_devtype_isbase = value; }
    inline void setQPdfPageSelector_SetVisible_IsBase(bool value) const { qpdfpageselector_setvisible_isbase = value; }
    inline void setQPdfPageSelector_SizeHint_IsBase(bool value) const { qpdfpageselector_sizehint_isbase = value; }
    inline void setQPdfPageSelector_MinimumSizeHint_IsBase(bool value) const { qpdfpageselector_minimumsizehint_isbase = value; }
    inline void setQPdfPageSelector_HeightForWidth_IsBase(bool value) const { qpdfpageselector_heightforwidth_isbase = value; }
    inline void setQPdfPageSelector_HasHeightForWidth_IsBase(bool value) const { qpdfpageselector_hasheightforwidth_isbase = value; }
    inline void setQPdfPageSelector_PaintEngine_IsBase(bool value) const { qpdfpageselector_paintengine_isbase = value; }
    inline void setQPdfPageSelector_Event_IsBase(bool value) const { qpdfpageselector_event_isbase = value; }
    inline void setQPdfPageSelector_MousePressEvent_IsBase(bool value) const { qpdfpageselector_mousepressevent_isbase = value; }
    inline void setQPdfPageSelector_MouseReleaseEvent_IsBase(bool value) const { qpdfpageselector_mousereleaseevent_isbase = value; }
    inline void setQPdfPageSelector_MouseDoubleClickEvent_IsBase(bool value) const { qpdfpageselector_mousedoubleclickevent_isbase = value; }
    inline void setQPdfPageSelector_MouseMoveEvent_IsBase(bool value) const { qpdfpageselector_mousemoveevent_isbase = value; }
    inline void setQPdfPageSelector_WheelEvent_IsBase(bool value) const { qpdfpageselector_wheelevent_isbase = value; }
    inline void setQPdfPageSelector_KeyPressEvent_IsBase(bool value) const { qpdfpageselector_keypressevent_isbase = value; }
    inline void setQPdfPageSelector_KeyReleaseEvent_IsBase(bool value) const { qpdfpageselector_keyreleaseevent_isbase = value; }
    inline void setQPdfPageSelector_FocusInEvent_IsBase(bool value) const { qpdfpageselector_focusinevent_isbase = value; }
    inline void setQPdfPageSelector_FocusOutEvent_IsBase(bool value) const { qpdfpageselector_focusoutevent_isbase = value; }
    inline void setQPdfPageSelector_EnterEvent_IsBase(bool value) const { qpdfpageselector_enterevent_isbase = value; }
    inline void setQPdfPageSelector_LeaveEvent_IsBase(bool value) const { qpdfpageselector_leaveevent_isbase = value; }
    inline void setQPdfPageSelector_PaintEvent_IsBase(bool value) const { qpdfpageselector_paintevent_isbase = value; }
    inline void setQPdfPageSelector_MoveEvent_IsBase(bool value) const { qpdfpageselector_moveevent_isbase = value; }
    inline void setQPdfPageSelector_ResizeEvent_IsBase(bool value) const { qpdfpageselector_resizeevent_isbase = value; }
    inline void setQPdfPageSelector_CloseEvent_IsBase(bool value) const { qpdfpageselector_closeevent_isbase = value; }
    inline void setQPdfPageSelector_ContextMenuEvent_IsBase(bool value) const { qpdfpageselector_contextmenuevent_isbase = value; }
    inline void setQPdfPageSelector_TabletEvent_IsBase(bool value) const { qpdfpageselector_tabletevent_isbase = value; }
    inline void setQPdfPageSelector_ActionEvent_IsBase(bool value) const { qpdfpageselector_actionevent_isbase = value; }
    inline void setQPdfPageSelector_DragEnterEvent_IsBase(bool value) const { qpdfpageselector_dragenterevent_isbase = value; }
    inline void setQPdfPageSelector_DragMoveEvent_IsBase(bool value) const { qpdfpageselector_dragmoveevent_isbase = value; }
    inline void setQPdfPageSelector_DragLeaveEvent_IsBase(bool value) const { qpdfpageselector_dragleaveevent_isbase = value; }
    inline void setQPdfPageSelector_DropEvent_IsBase(bool value) const { qpdfpageselector_dropevent_isbase = value; }
    inline void setQPdfPageSelector_ShowEvent_IsBase(bool value) const { qpdfpageselector_showevent_isbase = value; }
    inline void setQPdfPageSelector_HideEvent_IsBase(bool value) const { qpdfpageselector_hideevent_isbase = value; }
    inline void setQPdfPageSelector_NativeEvent_IsBase(bool value) const { qpdfpageselector_nativeevent_isbase = value; }
    inline void setQPdfPageSelector_ChangeEvent_IsBase(bool value) const { qpdfpageselector_changeevent_isbase = value; }
    inline void setQPdfPageSelector_Metric_IsBase(bool value) const { qpdfpageselector_metric_isbase = value; }
    inline void setQPdfPageSelector_InitPainter_IsBase(bool value) const { qpdfpageselector_initpainter_isbase = value; }
    inline void setQPdfPageSelector_Redirected_IsBase(bool value) const { qpdfpageselector_redirected_isbase = value; }
    inline void setQPdfPageSelector_SharedPainter_IsBase(bool value) const { qpdfpageselector_sharedpainter_isbase = value; }
    inline void setQPdfPageSelector_InputMethodEvent_IsBase(bool value) const { qpdfpageselector_inputmethodevent_isbase = value; }
    inline void setQPdfPageSelector_InputMethodQuery_IsBase(bool value) const { qpdfpageselector_inputmethodquery_isbase = value; }
    inline void setQPdfPageSelector_FocusNextPrevChild_IsBase(bool value) const { qpdfpageselector_focusnextprevchild_isbase = value; }
    inline void setQPdfPageSelector_EventFilter_IsBase(bool value) const { qpdfpageselector_eventfilter_isbase = value; }
    inline void setQPdfPageSelector_TimerEvent_IsBase(bool value) const { qpdfpageselector_timerevent_isbase = value; }
    inline void setQPdfPageSelector_ChildEvent_IsBase(bool value) const { qpdfpageselector_childevent_isbase = value; }
    inline void setQPdfPageSelector_CustomEvent_IsBase(bool value) const { qpdfpageselector_customevent_isbase = value; }
    inline void setQPdfPageSelector_ConnectNotify_IsBase(bool value) const { qpdfpageselector_connectnotify_isbase = value; }
    inline void setQPdfPageSelector_DisconnectNotify_IsBase(bool value) const { qpdfpageselector_disconnectnotify_isbase = value; }
    inline void setQPdfPageSelector_UpdateMicroFocus_IsBase(bool value) const { qpdfpageselector_updatemicrofocus_isbase = value; }
    inline void setQPdfPageSelector_Create_IsBase(bool value) const { qpdfpageselector_create_isbase = value; }
    inline void setQPdfPageSelector_Destroy_IsBase(bool value) const { qpdfpageselector_destroy_isbase = value; }
    inline void setQPdfPageSelector_FocusNextChild_IsBase(bool value) const { qpdfpageselector_focusnextchild_isbase = value; }
    inline void setQPdfPageSelector_FocusPreviousChild_IsBase(bool value) const { qpdfpageselector_focuspreviouschild_isbase = value; }
    inline void setQPdfPageSelector_Sender_IsBase(bool value) const { qpdfpageselector_sender_isbase = value; }
    inline void setQPdfPageSelector_SenderSignalIndex_IsBase(bool value) const { qpdfpageselector_sendersignalindex_isbase = value; }
    inline void setQPdfPageSelector_Receivers_IsBase(bool value) const { qpdfpageselector_receivers_isbase = value; }
    inline void setQPdfPageSelector_IsSignalConnected_IsBase(bool value) const { qpdfpageselector_issignalconnected_isbase = value; }
    inline void setQPdfPageSelector_GetDecodedMetricF_IsBase(bool value) const { qpdfpageselector_getdecodedmetricf_isbase = value; }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (qpdfpageselector_metacall_isbase) {
            qpdfpageselector_metacall_isbase = false;
            return QPdfPageSelector::qt_metacall(param1, param2, param3);
        } else if (qpdfpageselector_metacall_callback != nullptr) {
            int cbval1 = static_cast<int>(param1);
            int cbval2 = param2;
            void** cbval3 = param3;

            int callback_ret = qpdfpageselector_metacall_callback(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        } else {
            return QPdfPageSelector::qt_metacall(param1, param2, param3);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual int devType() const override {
        if (qpdfpageselector_devtype_isbase) {
            qpdfpageselector_devtype_isbase = false;
            return QPdfPageSelector::devType();
        } else if (qpdfpageselector_devtype_callback != nullptr) {
            int callback_ret = qpdfpageselector_devtype_callback();
            return static_cast<int>(callback_ret);
        } else {
            return QPdfPageSelector::devType();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void setVisible(bool visible) override {
        if (qpdfpageselector_setvisible_isbase) {
            qpdfpageselector_setvisible_isbase = false;
            QPdfPageSelector::setVisible(visible);
        } else if (qpdfpageselector_setvisible_callback != nullptr) {
            bool cbval1 = visible;

            qpdfpageselector_setvisible_callback(this, cbval1);
        } else {
            QPdfPageSelector::setVisible(visible);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QSize sizeHint() const override {
        if (qpdfpageselector_sizehint_isbase) {
            qpdfpageselector_sizehint_isbase = false;
            return QPdfPageSelector::sizeHint();
        } else if (qpdfpageselector_sizehint_callback != nullptr) {
            QSize* callback_ret = qpdfpageselector_sizehint_callback();
            return *callback_ret;
        } else {
            return QPdfPageSelector::sizeHint();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QSize minimumSizeHint() const override {
        if (qpdfpageselector_minimumsizehint_isbase) {
            qpdfpageselector_minimumsizehint_isbase = false;
            return QPdfPageSelector::minimumSizeHint();
        } else if (qpdfpageselector_minimumsizehint_callback != nullptr) {
            QSize* callback_ret = qpdfpageselector_minimumsizehint_callback();
            return *callback_ret;
        } else {
            return QPdfPageSelector::minimumSizeHint();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual int heightForWidth(int param1) const override {
        if (qpdfpageselector_heightforwidth_isbase) {
            qpdfpageselector_heightforwidth_isbase = false;
            return QPdfPageSelector::heightForWidth(param1);
        } else if (qpdfpageselector_heightforwidth_callback != nullptr) {
            int cbval1 = param1;

            int callback_ret = qpdfpageselector_heightforwidth_callback(this, cbval1);
            return static_cast<int>(callback_ret);
        } else {
            return QPdfPageSelector::heightForWidth(param1);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool hasHeightForWidth() const override {
        if (qpdfpageselector_hasheightforwidth_isbase) {
            qpdfpageselector_hasheightforwidth_isbase = false;
            return QPdfPageSelector::hasHeightForWidth();
        } else if (qpdfpageselector_hasheightforwidth_callback != nullptr) {
            bool callback_ret = qpdfpageselector_hasheightforwidth_callback();
            return callback_ret;
        } else {
            return QPdfPageSelector::hasHeightForWidth();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QPaintEngine* paintEngine() const override {
        if (qpdfpageselector_paintengine_isbase) {
            qpdfpageselector_paintengine_isbase = false;
            return QPdfPageSelector::paintEngine();
        } else if (qpdfpageselector_paintengine_callback != nullptr) {
            QPaintEngine* callback_ret = qpdfpageselector_paintengine_callback();
            return callback_ret;
        } else {
            return QPdfPageSelector::paintEngine();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* event) override {
        if (qpdfpageselector_event_isbase) {
            qpdfpageselector_event_isbase = false;
            return QPdfPageSelector::event(event);
        } else if (qpdfpageselector_event_callback != nullptr) {
            QEvent* cbval1 = event;

            bool callback_ret = qpdfpageselector_event_callback(this, cbval1);
            return callback_ret;
        } else {
            return QPdfPageSelector::event(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void mousePressEvent(QMouseEvent* event) override {
        if (qpdfpageselector_mousepressevent_isbase) {
            qpdfpageselector_mousepressevent_isbase = false;
            QPdfPageSelector::mousePressEvent(event);
        } else if (qpdfpageselector_mousepressevent_callback != nullptr) {
            QMouseEvent* cbval1 = event;

            qpdfpageselector_mousepressevent_callback(this, cbval1);
        } else {
            QPdfPageSelector::mousePressEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseReleaseEvent(QMouseEvent* event) override {
        if (qpdfpageselector_mousereleaseevent_isbase) {
            qpdfpageselector_mousereleaseevent_isbase = false;
            QPdfPageSelector::mouseReleaseEvent(event);
        } else if (qpdfpageselector_mousereleaseevent_callback != nullptr) {
            QMouseEvent* cbval1 = event;

            qpdfpageselector_mousereleaseevent_callback(this, cbval1);
        } else {
            QPdfPageSelector::mouseReleaseEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseDoubleClickEvent(QMouseEvent* event) override {
        if (qpdfpageselector_mousedoubleclickevent_isbase) {
            qpdfpageselector_mousedoubleclickevent_isbase = false;
            QPdfPageSelector::mouseDoubleClickEvent(event);
        } else if (qpdfpageselector_mousedoubleclickevent_callback != nullptr) {
            QMouseEvent* cbval1 = event;

            qpdfpageselector_mousedoubleclickevent_callback(this, cbval1);
        } else {
            QPdfPageSelector::mouseDoubleClickEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseMoveEvent(QMouseEvent* event) override {
        if (qpdfpageselector_mousemoveevent_isbase) {
            qpdfpageselector_mousemoveevent_isbase = false;
            QPdfPageSelector::mouseMoveEvent(event);
        } else if (qpdfpageselector_mousemoveevent_callback != nullptr) {
            QMouseEvent* cbval1 = event;

            qpdfpageselector_mousemoveevent_callback(this, cbval1);
        } else {
            QPdfPageSelector::mouseMoveEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void wheelEvent(QWheelEvent* event) override {
        if (qpdfpageselector_wheelevent_isbase) {
            qpdfpageselector_wheelevent_isbase = false;
            QPdfPageSelector::wheelEvent(event);
        } else if (qpdfpageselector_wheelevent_callback != nullptr) {
            QWheelEvent* cbval1 = event;

            qpdfpageselector_wheelevent_callback(this, cbval1);
        } else {
            QPdfPageSelector::wheelEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void keyPressEvent(QKeyEvent* event) override {
        if (qpdfpageselector_keypressevent_isbase) {
            qpdfpageselector_keypressevent_isbase = false;
            QPdfPageSelector::keyPressEvent(event);
        } else if (qpdfpageselector_keypressevent_callback != nullptr) {
            QKeyEvent* cbval1 = event;

            qpdfpageselector_keypressevent_callback(this, cbval1);
        } else {
            QPdfPageSelector::keyPressEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void keyReleaseEvent(QKeyEvent* event) override {
        if (qpdfpageselector_keyreleaseevent_isbase) {
            qpdfpageselector_keyreleaseevent_isbase = false;
            QPdfPageSelector::keyReleaseEvent(event);
        } else if (qpdfpageselector_keyreleaseevent_callback != nullptr) {
            QKeyEvent* cbval1 = event;

            qpdfpageselector_keyreleaseevent_callback(this, cbval1);
        } else {
            QPdfPageSelector::keyReleaseEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void focusInEvent(QFocusEvent* event) override {
        if (qpdfpageselector_focusinevent_isbase) {
            qpdfpageselector_focusinevent_isbase = false;
            QPdfPageSelector::focusInEvent(event);
        } else if (qpdfpageselector_focusinevent_callback != nullptr) {
            QFocusEvent* cbval1 = event;

            qpdfpageselector_focusinevent_callback(this, cbval1);
        } else {
            QPdfPageSelector::focusInEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void focusOutEvent(QFocusEvent* event) override {
        if (qpdfpageselector_focusoutevent_isbase) {
            qpdfpageselector_focusoutevent_isbase = false;
            QPdfPageSelector::focusOutEvent(event);
        } else if (qpdfpageselector_focusoutevent_callback != nullptr) {
            QFocusEvent* cbval1 = event;

            qpdfpageselector_focusoutevent_callback(this, cbval1);
        } else {
            QPdfPageSelector::focusOutEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void enterEvent(QEnterEvent* event) override {
        if (qpdfpageselector_enterevent_isbase) {
            qpdfpageselector_enterevent_isbase = false;
            QPdfPageSelector::enterEvent(event);
        } else if (qpdfpageselector_enterevent_callback != nullptr) {
            QEnterEvent* cbval1 = event;

            qpdfpageselector_enterevent_callback(this, cbval1);
        } else {
            QPdfPageSelector::enterEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void leaveEvent(QEvent* event) override {
        if (qpdfpageselector_leaveevent_isbase) {
            qpdfpageselector_leaveevent_isbase = false;
            QPdfPageSelector::leaveEvent(event);
        } else if (qpdfpageselector_leaveevent_callback != nullptr) {
            QEvent* cbval1 = event;

            qpdfpageselector_leaveevent_callback(this, cbval1);
        } else {
            QPdfPageSelector::leaveEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void paintEvent(QPaintEvent* event) override {
        if (qpdfpageselector_paintevent_isbase) {
            qpdfpageselector_paintevent_isbase = false;
            QPdfPageSelector::paintEvent(event);
        } else if (qpdfpageselector_paintevent_callback != nullptr) {
            QPaintEvent* cbval1 = event;

            qpdfpageselector_paintevent_callback(this, cbval1);
        } else {
            QPdfPageSelector::paintEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void moveEvent(QMoveEvent* event) override {
        if (qpdfpageselector_moveevent_isbase) {
            qpdfpageselector_moveevent_isbase = false;
            QPdfPageSelector::moveEvent(event);
        } else if (qpdfpageselector_moveevent_callback != nullptr) {
            QMoveEvent* cbval1 = event;

            qpdfpageselector_moveevent_callback(this, cbval1);
        } else {
            QPdfPageSelector::moveEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void resizeEvent(QResizeEvent* event) override {
        if (qpdfpageselector_resizeevent_isbase) {
            qpdfpageselector_resizeevent_isbase = false;
            QPdfPageSelector::resizeEvent(event);
        } else if (qpdfpageselector_resizeevent_callback != nullptr) {
            QResizeEvent* cbval1 = event;

            qpdfpageselector_resizeevent_callback(this, cbval1);
        } else {
            QPdfPageSelector::resizeEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void closeEvent(QCloseEvent* event) override {
        if (qpdfpageselector_closeevent_isbase) {
            qpdfpageselector_closeevent_isbase = false;
            QPdfPageSelector::closeEvent(event);
        } else if (qpdfpageselector_closeevent_callback != nullptr) {
            QCloseEvent* cbval1 = event;

            qpdfpageselector_closeevent_callback(this, cbval1);
        } else {
            QPdfPageSelector::closeEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void contextMenuEvent(QContextMenuEvent* event) override {
        if (qpdfpageselector_contextmenuevent_isbase) {
            qpdfpageselector_contextmenuevent_isbase = false;
            QPdfPageSelector::contextMenuEvent(event);
        } else if (qpdfpageselector_contextmenuevent_callback != nullptr) {
            QContextMenuEvent* cbval1 = event;

            qpdfpageselector_contextmenuevent_callback(this, cbval1);
        } else {
            QPdfPageSelector::contextMenuEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void tabletEvent(QTabletEvent* event) override {
        if (qpdfpageselector_tabletevent_isbase) {
            qpdfpageselector_tabletevent_isbase = false;
            QPdfPageSelector::tabletEvent(event);
        } else if (qpdfpageselector_tabletevent_callback != nullptr) {
            QTabletEvent* cbval1 = event;

            qpdfpageselector_tabletevent_callback(this, cbval1);
        } else {
            QPdfPageSelector::tabletEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void actionEvent(QActionEvent* event) override {
        if (qpdfpageselector_actionevent_isbase) {
            qpdfpageselector_actionevent_isbase = false;
            QPdfPageSelector::actionEvent(event);
        } else if (qpdfpageselector_actionevent_callback != nullptr) {
            QActionEvent* cbval1 = event;

            qpdfpageselector_actionevent_callback(this, cbval1);
        } else {
            QPdfPageSelector::actionEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragEnterEvent(QDragEnterEvent* event) override {
        if (qpdfpageselector_dragenterevent_isbase) {
            qpdfpageselector_dragenterevent_isbase = false;
            QPdfPageSelector::dragEnterEvent(event);
        } else if (qpdfpageselector_dragenterevent_callback != nullptr) {
            QDragEnterEvent* cbval1 = event;

            qpdfpageselector_dragenterevent_callback(this, cbval1);
        } else {
            QPdfPageSelector::dragEnterEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragMoveEvent(QDragMoveEvent* event) override {
        if (qpdfpageselector_dragmoveevent_isbase) {
            qpdfpageselector_dragmoveevent_isbase = false;
            QPdfPageSelector::dragMoveEvent(event);
        } else if (qpdfpageselector_dragmoveevent_callback != nullptr) {
            QDragMoveEvent* cbval1 = event;

            qpdfpageselector_dragmoveevent_callback(this, cbval1);
        } else {
            QPdfPageSelector::dragMoveEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragLeaveEvent(QDragLeaveEvent* event) override {
        if (qpdfpageselector_dragleaveevent_isbase) {
            qpdfpageselector_dragleaveevent_isbase = false;
            QPdfPageSelector::dragLeaveEvent(event);
        } else if (qpdfpageselector_dragleaveevent_callback != nullptr) {
            QDragLeaveEvent* cbval1 = event;

            qpdfpageselector_dragleaveevent_callback(this, cbval1);
        } else {
            QPdfPageSelector::dragLeaveEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void dropEvent(QDropEvent* event) override {
        if (qpdfpageselector_dropevent_isbase) {
            qpdfpageselector_dropevent_isbase = false;
            QPdfPageSelector::dropEvent(event);
        } else if (qpdfpageselector_dropevent_callback != nullptr) {
            QDropEvent* cbval1 = event;

            qpdfpageselector_dropevent_callback(this, cbval1);
        } else {
            QPdfPageSelector::dropEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void showEvent(QShowEvent* event) override {
        if (qpdfpageselector_showevent_isbase) {
            qpdfpageselector_showevent_isbase = false;
            QPdfPageSelector::showEvent(event);
        } else if (qpdfpageselector_showevent_callback != nullptr) {
            QShowEvent* cbval1 = event;

            qpdfpageselector_showevent_callback(this, cbval1);
        } else {
            QPdfPageSelector::showEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void hideEvent(QHideEvent* event) override {
        if (qpdfpageselector_hideevent_isbase) {
            qpdfpageselector_hideevent_isbase = false;
            QPdfPageSelector::hideEvent(event);
        } else if (qpdfpageselector_hideevent_callback != nullptr) {
            QHideEvent* cbval1 = event;

            qpdfpageselector_hideevent_callback(this, cbval1);
        } else {
            QPdfPageSelector::hideEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool nativeEvent(const QByteArray& eventType, void* message, qintptr* result) override {
        if (qpdfpageselector_nativeevent_isbase) {
            qpdfpageselector_nativeevent_isbase = false;
            return QPdfPageSelector::nativeEvent(eventType, message, result);
        } else if (qpdfpageselector_nativeevent_callback != nullptr) {
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

            bool callback_ret = qpdfpageselector_nativeevent_callback(this, cbval1, cbval2, cbval3);
            return callback_ret;
        } else {
            return QPdfPageSelector::nativeEvent(eventType, message, result);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void changeEvent(QEvent* param1) override {
        if (qpdfpageselector_changeevent_isbase) {
            qpdfpageselector_changeevent_isbase = false;
            QPdfPageSelector::changeEvent(param1);
        } else if (qpdfpageselector_changeevent_callback != nullptr) {
            QEvent* cbval1 = param1;

            qpdfpageselector_changeevent_callback(this, cbval1);
        } else {
            QPdfPageSelector::changeEvent(param1);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual int metric(QPaintDevice::PaintDeviceMetric param1) const override {
        if (qpdfpageselector_metric_isbase) {
            qpdfpageselector_metric_isbase = false;
            return QPdfPageSelector::metric(param1);
        } else if (qpdfpageselector_metric_callback != nullptr) {
            int cbval1 = static_cast<int>(param1);

            int callback_ret = qpdfpageselector_metric_callback(this, cbval1);
            return static_cast<int>(callback_ret);
        } else {
            return QPdfPageSelector::metric(param1);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void initPainter(QPainter* painter) const override {
        if (qpdfpageselector_initpainter_isbase) {
            qpdfpageselector_initpainter_isbase = false;
            QPdfPageSelector::initPainter(painter);
        } else if (qpdfpageselector_initpainter_callback != nullptr) {
            QPainter* cbval1 = painter;

            qpdfpageselector_initpainter_callback(this, cbval1);
        } else {
            QPdfPageSelector::initPainter(painter);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QPaintDevice* redirected(QPoint* offset) const override {
        if (qpdfpageselector_redirected_isbase) {
            qpdfpageselector_redirected_isbase = false;
            return QPdfPageSelector::redirected(offset);
        } else if (qpdfpageselector_redirected_callback != nullptr) {
            QPoint* cbval1 = offset;

            QPaintDevice* callback_ret = qpdfpageselector_redirected_callback(this, cbval1);
            return callback_ret;
        } else {
            return QPdfPageSelector::redirected(offset);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QPainter* sharedPainter() const override {
        if (qpdfpageselector_sharedpainter_isbase) {
            qpdfpageselector_sharedpainter_isbase = false;
            return QPdfPageSelector::sharedPainter();
        } else if (qpdfpageselector_sharedpainter_callback != nullptr) {
            QPainter* callback_ret = qpdfpageselector_sharedpainter_callback();
            return callback_ret;
        } else {
            return QPdfPageSelector::sharedPainter();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void inputMethodEvent(QInputMethodEvent* param1) override {
        if (qpdfpageselector_inputmethodevent_isbase) {
            qpdfpageselector_inputmethodevent_isbase = false;
            QPdfPageSelector::inputMethodEvent(param1);
        } else if (qpdfpageselector_inputmethodevent_callback != nullptr) {
            QInputMethodEvent* cbval1 = param1;

            qpdfpageselector_inputmethodevent_callback(this, cbval1);
        } else {
            QPdfPageSelector::inputMethodEvent(param1);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QVariant inputMethodQuery(Qt::InputMethodQuery param1) const override {
        if (qpdfpageselector_inputmethodquery_isbase) {
            qpdfpageselector_inputmethodquery_isbase = false;
            return QPdfPageSelector::inputMethodQuery(param1);
        } else if (qpdfpageselector_inputmethodquery_callback != nullptr) {
            int cbval1 = static_cast<int>(param1);

            QVariant* callback_ret = qpdfpageselector_inputmethodquery_callback(this, cbval1);
            return *callback_ret;
        } else {
            return QPdfPageSelector::inputMethodQuery(param1);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool focusNextPrevChild(bool next) override {
        if (qpdfpageselector_focusnextprevchild_isbase) {
            qpdfpageselector_focusnextprevchild_isbase = false;
            return QPdfPageSelector::focusNextPrevChild(next);
        } else if (qpdfpageselector_focusnextprevchild_callback != nullptr) {
            bool cbval1 = next;

            bool callback_ret = qpdfpageselector_focusnextprevchild_callback(this, cbval1);
            return callback_ret;
        } else {
            return QPdfPageSelector::focusNextPrevChild(next);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* watched, QEvent* event) override {
        if (qpdfpageselector_eventfilter_isbase) {
            qpdfpageselector_eventfilter_isbase = false;
            return QPdfPageSelector::eventFilter(watched, event);
        } else if (qpdfpageselector_eventfilter_callback != nullptr) {
            QObject* cbval1 = watched;
            QEvent* cbval2 = event;

            bool callback_ret = qpdfpageselector_eventfilter_callback(this, cbval1, cbval2);
            return callback_ret;
        } else {
            return QPdfPageSelector::eventFilter(watched, event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (qpdfpageselector_timerevent_isbase) {
            qpdfpageselector_timerevent_isbase = false;
            QPdfPageSelector::timerEvent(event);
        } else if (qpdfpageselector_timerevent_callback != nullptr) {
            QTimerEvent* cbval1 = event;

            qpdfpageselector_timerevent_callback(this, cbval1);
        } else {
            QPdfPageSelector::timerEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (qpdfpageselector_childevent_isbase) {
            qpdfpageselector_childevent_isbase = false;
            QPdfPageSelector::childEvent(event);
        } else if (qpdfpageselector_childevent_callback != nullptr) {
            QChildEvent* cbval1 = event;

            qpdfpageselector_childevent_callback(this, cbval1);
        } else {
            QPdfPageSelector::childEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (qpdfpageselector_customevent_isbase) {
            qpdfpageselector_customevent_isbase = false;
            QPdfPageSelector::customEvent(event);
        } else if (qpdfpageselector_customevent_callback != nullptr) {
            QEvent* cbval1 = event;

            qpdfpageselector_customevent_callback(this, cbval1);
        } else {
            QPdfPageSelector::customEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (qpdfpageselector_connectnotify_isbase) {
            qpdfpageselector_connectnotify_isbase = false;
            QPdfPageSelector::connectNotify(signal);
        } else if (qpdfpageselector_connectnotify_callback != nullptr) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            qpdfpageselector_connectnotify_callback(this, cbval1);
        } else {
            QPdfPageSelector::connectNotify(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (qpdfpageselector_disconnectnotify_isbase) {
            qpdfpageselector_disconnectnotify_isbase = false;
            QPdfPageSelector::disconnectNotify(signal);
        } else if (qpdfpageselector_disconnectnotify_callback != nullptr) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            qpdfpageselector_disconnectnotify_callback(this, cbval1);
        } else {
            QPdfPageSelector::disconnectNotify(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    void updateMicroFocus() {
        if (qpdfpageselector_updatemicrofocus_isbase) {
            qpdfpageselector_updatemicrofocus_isbase = false;
            QPdfPageSelector::updateMicroFocus();
        } else if (qpdfpageselector_updatemicrofocus_callback != nullptr) {
            qpdfpageselector_updatemicrofocus_callback();
        } else {
            QPdfPageSelector::updateMicroFocus();
        }
    }

    // Virtual method for C ABI access and custom callback
    void create() {
        if (qpdfpageselector_create_isbase) {
            qpdfpageselector_create_isbase = false;
            QPdfPageSelector::create();
        } else if (qpdfpageselector_create_callback != nullptr) {
            qpdfpageselector_create_callback();
        } else {
            QPdfPageSelector::create();
        }
    }

    // Virtual method for C ABI access and custom callback
    void destroy() {
        if (qpdfpageselector_destroy_isbase) {
            qpdfpageselector_destroy_isbase = false;
            QPdfPageSelector::destroy();
        } else if (qpdfpageselector_destroy_callback != nullptr) {
            qpdfpageselector_destroy_callback();
        } else {
            QPdfPageSelector::destroy();
        }
    }

    // Virtual method for C ABI access and custom callback
    bool focusNextChild() {
        if (qpdfpageselector_focusnextchild_isbase) {
            qpdfpageselector_focusnextchild_isbase = false;
            return QPdfPageSelector::focusNextChild();
        } else if (qpdfpageselector_focusnextchild_callback != nullptr) {
            bool callback_ret = qpdfpageselector_focusnextchild_callback();
            return callback_ret;
        } else {
            return QPdfPageSelector::focusNextChild();
        }
    }

    // Virtual method for C ABI access and custom callback
    bool focusPreviousChild() {
        if (qpdfpageselector_focuspreviouschild_isbase) {
            qpdfpageselector_focuspreviouschild_isbase = false;
            return QPdfPageSelector::focusPreviousChild();
        } else if (qpdfpageselector_focuspreviouschild_callback != nullptr) {
            bool callback_ret = qpdfpageselector_focuspreviouschild_callback();
            return callback_ret;
        } else {
            return QPdfPageSelector::focusPreviousChild();
        }
    }

    // Virtual method for C ABI access and custom callback
    QObject* sender() const {
        if (qpdfpageselector_sender_isbase) {
            qpdfpageselector_sender_isbase = false;
            return QPdfPageSelector::sender();
        } else if (qpdfpageselector_sender_callback != nullptr) {
            QObject* callback_ret = qpdfpageselector_sender_callback();
            return callback_ret;
        } else {
            return QPdfPageSelector::sender();
        }
    }

    // Virtual method for C ABI access and custom callback
    int senderSignalIndex() const {
        if (qpdfpageselector_sendersignalindex_isbase) {
            qpdfpageselector_sendersignalindex_isbase = false;
            return QPdfPageSelector::senderSignalIndex();
        } else if (qpdfpageselector_sendersignalindex_callback != nullptr) {
            int callback_ret = qpdfpageselector_sendersignalindex_callback();
            return static_cast<int>(callback_ret);
        } else {
            return QPdfPageSelector::senderSignalIndex();
        }
    }

    // Virtual method for C ABI access and custom callback
    int receivers(const char* signal) const {
        if (qpdfpageselector_receivers_isbase) {
            qpdfpageselector_receivers_isbase = false;
            return QPdfPageSelector::receivers(signal);
        } else if (qpdfpageselector_receivers_callback != nullptr) {
            const char* cbval1 = (const char*)signal;

            int callback_ret = qpdfpageselector_receivers_callback(this, cbval1);
            return static_cast<int>(callback_ret);
        } else {
            return QPdfPageSelector::receivers(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    bool isSignalConnected(const QMetaMethod& signal) const {
        if (qpdfpageselector_issignalconnected_isbase) {
            qpdfpageselector_issignalconnected_isbase = false;
            return QPdfPageSelector::isSignalConnected(signal);
        } else if (qpdfpageselector_issignalconnected_callback != nullptr) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            bool callback_ret = qpdfpageselector_issignalconnected_callback(this, cbval1);
            return callback_ret;
        } else {
            return QPdfPageSelector::isSignalConnected(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    double getDecodedMetricF(QPaintDevice::PaintDeviceMetric metricA, QPaintDevice::PaintDeviceMetric metricB) const {
        if (qpdfpageselector_getdecodedmetricf_isbase) {
            qpdfpageselector_getdecodedmetricf_isbase = false;
            return QPdfPageSelector::getDecodedMetricF(metricA, metricB);
        } else if (qpdfpageselector_getdecodedmetricf_callback != nullptr) {
            int cbval1 = static_cast<int>(metricA);
            int cbval2 = static_cast<int>(metricB);

            double callback_ret = qpdfpageselector_getdecodedmetricf_callback(this, cbval1, cbval2);
            return static_cast<double>(callback_ret);
        } else {
            return QPdfPageSelector::getDecodedMetricF(metricA, metricB);
        }
    }

    // Friend functions
    friend bool QPdfPageSelector_Event(QPdfPageSelector* self, QEvent* event);
    friend bool QPdfPageSelector_QBaseEvent(QPdfPageSelector* self, QEvent* event);
    friend void QPdfPageSelector_MousePressEvent(QPdfPageSelector* self, QMouseEvent* event);
    friend void QPdfPageSelector_QBaseMousePressEvent(QPdfPageSelector* self, QMouseEvent* event);
    friend void QPdfPageSelector_MouseReleaseEvent(QPdfPageSelector* self, QMouseEvent* event);
    friend void QPdfPageSelector_QBaseMouseReleaseEvent(QPdfPageSelector* self, QMouseEvent* event);
    friend void QPdfPageSelector_MouseDoubleClickEvent(QPdfPageSelector* self, QMouseEvent* event);
    friend void QPdfPageSelector_QBaseMouseDoubleClickEvent(QPdfPageSelector* self, QMouseEvent* event);
    friend void QPdfPageSelector_MouseMoveEvent(QPdfPageSelector* self, QMouseEvent* event);
    friend void QPdfPageSelector_QBaseMouseMoveEvent(QPdfPageSelector* self, QMouseEvent* event);
    friend void QPdfPageSelector_WheelEvent(QPdfPageSelector* self, QWheelEvent* event);
    friend void QPdfPageSelector_QBaseWheelEvent(QPdfPageSelector* self, QWheelEvent* event);
    friend void QPdfPageSelector_KeyPressEvent(QPdfPageSelector* self, QKeyEvent* event);
    friend void QPdfPageSelector_QBaseKeyPressEvent(QPdfPageSelector* self, QKeyEvent* event);
    friend void QPdfPageSelector_KeyReleaseEvent(QPdfPageSelector* self, QKeyEvent* event);
    friend void QPdfPageSelector_QBaseKeyReleaseEvent(QPdfPageSelector* self, QKeyEvent* event);
    friend void QPdfPageSelector_FocusInEvent(QPdfPageSelector* self, QFocusEvent* event);
    friend void QPdfPageSelector_QBaseFocusInEvent(QPdfPageSelector* self, QFocusEvent* event);
    friend void QPdfPageSelector_FocusOutEvent(QPdfPageSelector* self, QFocusEvent* event);
    friend void QPdfPageSelector_QBaseFocusOutEvent(QPdfPageSelector* self, QFocusEvent* event);
    friend void QPdfPageSelector_EnterEvent(QPdfPageSelector* self, QEnterEvent* event);
    friend void QPdfPageSelector_QBaseEnterEvent(QPdfPageSelector* self, QEnterEvent* event);
    friend void QPdfPageSelector_LeaveEvent(QPdfPageSelector* self, QEvent* event);
    friend void QPdfPageSelector_QBaseLeaveEvent(QPdfPageSelector* self, QEvent* event);
    friend void QPdfPageSelector_PaintEvent(QPdfPageSelector* self, QPaintEvent* event);
    friend void QPdfPageSelector_QBasePaintEvent(QPdfPageSelector* self, QPaintEvent* event);
    friend void QPdfPageSelector_MoveEvent(QPdfPageSelector* self, QMoveEvent* event);
    friend void QPdfPageSelector_QBaseMoveEvent(QPdfPageSelector* self, QMoveEvent* event);
    friend void QPdfPageSelector_ResizeEvent(QPdfPageSelector* self, QResizeEvent* event);
    friend void QPdfPageSelector_QBaseResizeEvent(QPdfPageSelector* self, QResizeEvent* event);
    friend void QPdfPageSelector_CloseEvent(QPdfPageSelector* self, QCloseEvent* event);
    friend void QPdfPageSelector_QBaseCloseEvent(QPdfPageSelector* self, QCloseEvent* event);
    friend void QPdfPageSelector_ContextMenuEvent(QPdfPageSelector* self, QContextMenuEvent* event);
    friend void QPdfPageSelector_QBaseContextMenuEvent(QPdfPageSelector* self, QContextMenuEvent* event);
    friend void QPdfPageSelector_TabletEvent(QPdfPageSelector* self, QTabletEvent* event);
    friend void QPdfPageSelector_QBaseTabletEvent(QPdfPageSelector* self, QTabletEvent* event);
    friend void QPdfPageSelector_ActionEvent(QPdfPageSelector* self, QActionEvent* event);
    friend void QPdfPageSelector_QBaseActionEvent(QPdfPageSelector* self, QActionEvent* event);
    friend void QPdfPageSelector_DragEnterEvent(QPdfPageSelector* self, QDragEnterEvent* event);
    friend void QPdfPageSelector_QBaseDragEnterEvent(QPdfPageSelector* self, QDragEnterEvent* event);
    friend void QPdfPageSelector_DragMoveEvent(QPdfPageSelector* self, QDragMoveEvent* event);
    friend void QPdfPageSelector_QBaseDragMoveEvent(QPdfPageSelector* self, QDragMoveEvent* event);
    friend void QPdfPageSelector_DragLeaveEvent(QPdfPageSelector* self, QDragLeaveEvent* event);
    friend void QPdfPageSelector_QBaseDragLeaveEvent(QPdfPageSelector* self, QDragLeaveEvent* event);
    friend void QPdfPageSelector_DropEvent(QPdfPageSelector* self, QDropEvent* event);
    friend void QPdfPageSelector_QBaseDropEvent(QPdfPageSelector* self, QDropEvent* event);
    friend void QPdfPageSelector_ShowEvent(QPdfPageSelector* self, QShowEvent* event);
    friend void QPdfPageSelector_QBaseShowEvent(QPdfPageSelector* self, QShowEvent* event);
    friend void QPdfPageSelector_HideEvent(QPdfPageSelector* self, QHideEvent* event);
    friend void QPdfPageSelector_QBaseHideEvent(QPdfPageSelector* self, QHideEvent* event);
    friend bool QPdfPageSelector_NativeEvent(QPdfPageSelector* self, const libqt_string eventType, void* message, intptr_t* result);
    friend bool QPdfPageSelector_QBaseNativeEvent(QPdfPageSelector* self, const libqt_string eventType, void* message, intptr_t* result);
    friend void QPdfPageSelector_ChangeEvent(QPdfPageSelector* self, QEvent* param1);
    friend void QPdfPageSelector_QBaseChangeEvent(QPdfPageSelector* self, QEvent* param1);
    friend int QPdfPageSelector_Metric(const QPdfPageSelector* self, int param1);
    friend int QPdfPageSelector_QBaseMetric(const QPdfPageSelector* self, int param1);
    friend void QPdfPageSelector_InitPainter(const QPdfPageSelector* self, QPainter* painter);
    friend void QPdfPageSelector_QBaseInitPainter(const QPdfPageSelector* self, QPainter* painter);
    friend QPaintDevice* QPdfPageSelector_Redirected(const QPdfPageSelector* self, QPoint* offset);
    friend QPaintDevice* QPdfPageSelector_QBaseRedirected(const QPdfPageSelector* self, QPoint* offset);
    friend QPainter* QPdfPageSelector_SharedPainter(const QPdfPageSelector* self);
    friend QPainter* QPdfPageSelector_QBaseSharedPainter(const QPdfPageSelector* self);
    friend void QPdfPageSelector_InputMethodEvent(QPdfPageSelector* self, QInputMethodEvent* param1);
    friend void QPdfPageSelector_QBaseInputMethodEvent(QPdfPageSelector* self, QInputMethodEvent* param1);
    friend bool QPdfPageSelector_FocusNextPrevChild(QPdfPageSelector* self, bool next);
    friend bool QPdfPageSelector_QBaseFocusNextPrevChild(QPdfPageSelector* self, bool next);
    friend void QPdfPageSelector_TimerEvent(QPdfPageSelector* self, QTimerEvent* event);
    friend void QPdfPageSelector_QBaseTimerEvent(QPdfPageSelector* self, QTimerEvent* event);
    friend void QPdfPageSelector_ChildEvent(QPdfPageSelector* self, QChildEvent* event);
    friend void QPdfPageSelector_QBaseChildEvent(QPdfPageSelector* self, QChildEvent* event);
    friend void QPdfPageSelector_CustomEvent(QPdfPageSelector* self, QEvent* event);
    friend void QPdfPageSelector_QBaseCustomEvent(QPdfPageSelector* self, QEvent* event);
    friend void QPdfPageSelector_ConnectNotify(QPdfPageSelector* self, const QMetaMethod* signal);
    friend void QPdfPageSelector_QBaseConnectNotify(QPdfPageSelector* self, const QMetaMethod* signal);
    friend void QPdfPageSelector_DisconnectNotify(QPdfPageSelector* self, const QMetaMethod* signal);
    friend void QPdfPageSelector_QBaseDisconnectNotify(QPdfPageSelector* self, const QMetaMethod* signal);
    friend void QPdfPageSelector_UpdateMicroFocus(QPdfPageSelector* self);
    friend void QPdfPageSelector_QBaseUpdateMicroFocus(QPdfPageSelector* self);
    friend void QPdfPageSelector_Create(QPdfPageSelector* self);
    friend void QPdfPageSelector_QBaseCreate(QPdfPageSelector* self);
    friend void QPdfPageSelector_Destroy(QPdfPageSelector* self);
    friend void QPdfPageSelector_QBaseDestroy(QPdfPageSelector* self);
    friend bool QPdfPageSelector_FocusNextChild(QPdfPageSelector* self);
    friend bool QPdfPageSelector_QBaseFocusNextChild(QPdfPageSelector* self);
    friend bool QPdfPageSelector_FocusPreviousChild(QPdfPageSelector* self);
    friend bool QPdfPageSelector_QBaseFocusPreviousChild(QPdfPageSelector* self);
    friend QObject* QPdfPageSelector_Sender(const QPdfPageSelector* self);
    friend QObject* QPdfPageSelector_QBaseSender(const QPdfPageSelector* self);
    friend int QPdfPageSelector_SenderSignalIndex(const QPdfPageSelector* self);
    friend int QPdfPageSelector_QBaseSenderSignalIndex(const QPdfPageSelector* self);
    friend int QPdfPageSelector_Receivers(const QPdfPageSelector* self, const char* signal);
    friend int QPdfPageSelector_QBaseReceivers(const QPdfPageSelector* self, const char* signal);
    friend bool QPdfPageSelector_IsSignalConnected(const QPdfPageSelector* self, const QMetaMethod* signal);
    friend bool QPdfPageSelector_QBaseIsSignalConnected(const QPdfPageSelector* self, const QMetaMethod* signal);
    friend double QPdfPageSelector_GetDecodedMetricF(const QPdfPageSelector* self, int metricA, int metricB);
    friend double QPdfPageSelector_QBaseGetDecodedMetricF(const QPdfPageSelector* self, int metricA, int metricB);
};

#endif
