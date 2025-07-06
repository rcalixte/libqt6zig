#pragma once
#ifndef SRCC_LIBVIRTUALQCALENDARWIDGET_H
#define SRCC_LIBVIRTUALQCALENDARWIDGET_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"

// This class is a subclass of QCalendarWidget so that we can call protected methods
class VirtualQCalendarWidget final : public QCalendarWidget {

  public:
    // Virtual class boolean flag
    bool isVirtualQCalendarWidget = true;

    // Virtual class public types (including callbacks)
    using QCalendarWidget_Metacall_Callback = int (*)(QCalendarWidget*, int, int, void**);
    using QCalendarWidget_SizeHint_Callback = QSize* (*)();
    using QCalendarWidget_MinimumSizeHint_Callback = QSize* (*)();
    using QCalendarWidget_Event_Callback = bool (*)(QCalendarWidget*, QEvent*);
    using QCalendarWidget_EventFilter_Callback = bool (*)(QCalendarWidget*, QObject*, QEvent*);
    using QCalendarWidget_MousePressEvent_Callback = void (*)(QCalendarWidget*, QMouseEvent*);
    using QCalendarWidget_ResizeEvent_Callback = void (*)(QCalendarWidget*, QResizeEvent*);
    using QCalendarWidget_KeyPressEvent_Callback = void (*)(QCalendarWidget*, QKeyEvent*);
    using QCalendarWidget_PaintCell_Callback = void (*)(const QCalendarWidget*, QPainter*, QRect*, QDate*);
    using QCalendarWidget_DevType_Callback = int (*)();
    using QCalendarWidget_SetVisible_Callback = void (*)(QCalendarWidget*, bool);
    using QCalendarWidget_HeightForWidth_Callback = int (*)(const QCalendarWidget*, int);
    using QCalendarWidget_HasHeightForWidth_Callback = bool (*)();
    using QCalendarWidget_PaintEngine_Callback = QPaintEngine* (*)();
    using QCalendarWidget_MouseReleaseEvent_Callback = void (*)(QCalendarWidget*, QMouseEvent*);
    using QCalendarWidget_MouseDoubleClickEvent_Callback = void (*)(QCalendarWidget*, QMouseEvent*);
    using QCalendarWidget_MouseMoveEvent_Callback = void (*)(QCalendarWidget*, QMouseEvent*);
    using QCalendarWidget_WheelEvent_Callback = void (*)(QCalendarWidget*, QWheelEvent*);
    using QCalendarWidget_KeyReleaseEvent_Callback = void (*)(QCalendarWidget*, QKeyEvent*);
    using QCalendarWidget_FocusInEvent_Callback = void (*)(QCalendarWidget*, QFocusEvent*);
    using QCalendarWidget_FocusOutEvent_Callback = void (*)(QCalendarWidget*, QFocusEvent*);
    using QCalendarWidget_EnterEvent_Callback = void (*)(QCalendarWidget*, QEnterEvent*);
    using QCalendarWidget_LeaveEvent_Callback = void (*)(QCalendarWidget*, QEvent*);
    using QCalendarWidget_PaintEvent_Callback = void (*)(QCalendarWidget*, QPaintEvent*);
    using QCalendarWidget_MoveEvent_Callback = void (*)(QCalendarWidget*, QMoveEvent*);
    using QCalendarWidget_CloseEvent_Callback = void (*)(QCalendarWidget*, QCloseEvent*);
    using QCalendarWidget_ContextMenuEvent_Callback = void (*)(QCalendarWidget*, QContextMenuEvent*);
    using QCalendarWidget_TabletEvent_Callback = void (*)(QCalendarWidget*, QTabletEvent*);
    using QCalendarWidget_ActionEvent_Callback = void (*)(QCalendarWidget*, QActionEvent*);
    using QCalendarWidget_DragEnterEvent_Callback = void (*)(QCalendarWidget*, QDragEnterEvent*);
    using QCalendarWidget_DragMoveEvent_Callback = void (*)(QCalendarWidget*, QDragMoveEvent*);
    using QCalendarWidget_DragLeaveEvent_Callback = void (*)(QCalendarWidget*, QDragLeaveEvent*);
    using QCalendarWidget_DropEvent_Callback = void (*)(QCalendarWidget*, QDropEvent*);
    using QCalendarWidget_ShowEvent_Callback = void (*)(QCalendarWidget*, QShowEvent*);
    using QCalendarWidget_HideEvent_Callback = void (*)(QCalendarWidget*, QHideEvent*);
    using QCalendarWidget_NativeEvent_Callback = bool (*)(QCalendarWidget*, libqt_string, void*, intptr_t*);
    using QCalendarWidget_ChangeEvent_Callback = void (*)(QCalendarWidget*, QEvent*);
    using QCalendarWidget_Metric_Callback = int (*)(const QCalendarWidget*, int);
    using QCalendarWidget_InitPainter_Callback = void (*)(const QCalendarWidget*, QPainter*);
    using QCalendarWidget_Redirected_Callback = QPaintDevice* (*)(const QCalendarWidget*, QPoint*);
    using QCalendarWidget_SharedPainter_Callback = QPainter* (*)();
    using QCalendarWidget_InputMethodEvent_Callback = void (*)(QCalendarWidget*, QInputMethodEvent*);
    using QCalendarWidget_InputMethodQuery_Callback = QVariant* (*)(const QCalendarWidget*, int);
    using QCalendarWidget_FocusNextPrevChild_Callback = bool (*)(QCalendarWidget*, bool);
    using QCalendarWidget_TimerEvent_Callback = void (*)(QCalendarWidget*, QTimerEvent*);
    using QCalendarWidget_ChildEvent_Callback = void (*)(QCalendarWidget*, QChildEvent*);
    using QCalendarWidget_CustomEvent_Callback = void (*)(QCalendarWidget*, QEvent*);
    using QCalendarWidget_ConnectNotify_Callback = void (*)(QCalendarWidget*, QMetaMethod*);
    using QCalendarWidget_DisconnectNotify_Callback = void (*)(QCalendarWidget*, QMetaMethod*);
    using QCalendarWidget_UpdateCell_Callback = void (*)(QCalendarWidget*, QDate*);
    using QCalendarWidget_UpdateCells_Callback = void (*)();
    using QCalendarWidget_UpdateMicroFocus_Callback = void (*)();
    using QCalendarWidget_Create_Callback = void (*)();
    using QCalendarWidget_Destroy_Callback = void (*)();
    using QCalendarWidget_FocusNextChild_Callback = bool (*)();
    using QCalendarWidget_FocusPreviousChild_Callback = bool (*)();
    using QCalendarWidget_Sender_Callback = QObject* (*)();
    using QCalendarWidget_SenderSignalIndex_Callback = int (*)();
    using QCalendarWidget_Receivers_Callback = int (*)(const QCalendarWidget*, const char*);
    using QCalendarWidget_IsSignalConnected_Callback = bool (*)(const QCalendarWidget*, QMetaMethod*);
    using QCalendarWidget_GetDecodedMetricF_Callback = double (*)(const QCalendarWidget*, int, int);

  protected:
    // Instance callback storage
    QCalendarWidget_Metacall_Callback qcalendarwidget_metacall_callback = nullptr;
    QCalendarWidget_SizeHint_Callback qcalendarwidget_sizehint_callback = nullptr;
    QCalendarWidget_MinimumSizeHint_Callback qcalendarwidget_minimumsizehint_callback = nullptr;
    QCalendarWidget_Event_Callback qcalendarwidget_event_callback = nullptr;
    QCalendarWidget_EventFilter_Callback qcalendarwidget_eventfilter_callback = nullptr;
    QCalendarWidget_MousePressEvent_Callback qcalendarwidget_mousepressevent_callback = nullptr;
    QCalendarWidget_ResizeEvent_Callback qcalendarwidget_resizeevent_callback = nullptr;
    QCalendarWidget_KeyPressEvent_Callback qcalendarwidget_keypressevent_callback = nullptr;
    QCalendarWidget_PaintCell_Callback qcalendarwidget_paintcell_callback = nullptr;
    QCalendarWidget_DevType_Callback qcalendarwidget_devtype_callback = nullptr;
    QCalendarWidget_SetVisible_Callback qcalendarwidget_setvisible_callback = nullptr;
    QCalendarWidget_HeightForWidth_Callback qcalendarwidget_heightforwidth_callback = nullptr;
    QCalendarWidget_HasHeightForWidth_Callback qcalendarwidget_hasheightforwidth_callback = nullptr;
    QCalendarWidget_PaintEngine_Callback qcalendarwidget_paintengine_callback = nullptr;
    QCalendarWidget_MouseReleaseEvent_Callback qcalendarwidget_mousereleaseevent_callback = nullptr;
    QCalendarWidget_MouseDoubleClickEvent_Callback qcalendarwidget_mousedoubleclickevent_callback = nullptr;
    QCalendarWidget_MouseMoveEvent_Callback qcalendarwidget_mousemoveevent_callback = nullptr;
    QCalendarWidget_WheelEvent_Callback qcalendarwidget_wheelevent_callback = nullptr;
    QCalendarWidget_KeyReleaseEvent_Callback qcalendarwidget_keyreleaseevent_callback = nullptr;
    QCalendarWidget_FocusInEvent_Callback qcalendarwidget_focusinevent_callback = nullptr;
    QCalendarWidget_FocusOutEvent_Callback qcalendarwidget_focusoutevent_callback = nullptr;
    QCalendarWidget_EnterEvent_Callback qcalendarwidget_enterevent_callback = nullptr;
    QCalendarWidget_LeaveEvent_Callback qcalendarwidget_leaveevent_callback = nullptr;
    QCalendarWidget_PaintEvent_Callback qcalendarwidget_paintevent_callback = nullptr;
    QCalendarWidget_MoveEvent_Callback qcalendarwidget_moveevent_callback = nullptr;
    QCalendarWidget_CloseEvent_Callback qcalendarwidget_closeevent_callback = nullptr;
    QCalendarWidget_ContextMenuEvent_Callback qcalendarwidget_contextmenuevent_callback = nullptr;
    QCalendarWidget_TabletEvent_Callback qcalendarwidget_tabletevent_callback = nullptr;
    QCalendarWidget_ActionEvent_Callback qcalendarwidget_actionevent_callback = nullptr;
    QCalendarWidget_DragEnterEvent_Callback qcalendarwidget_dragenterevent_callback = nullptr;
    QCalendarWidget_DragMoveEvent_Callback qcalendarwidget_dragmoveevent_callback = nullptr;
    QCalendarWidget_DragLeaveEvent_Callback qcalendarwidget_dragleaveevent_callback = nullptr;
    QCalendarWidget_DropEvent_Callback qcalendarwidget_dropevent_callback = nullptr;
    QCalendarWidget_ShowEvent_Callback qcalendarwidget_showevent_callback = nullptr;
    QCalendarWidget_HideEvent_Callback qcalendarwidget_hideevent_callback = nullptr;
    QCalendarWidget_NativeEvent_Callback qcalendarwidget_nativeevent_callback = nullptr;
    QCalendarWidget_ChangeEvent_Callback qcalendarwidget_changeevent_callback = nullptr;
    QCalendarWidget_Metric_Callback qcalendarwidget_metric_callback = nullptr;
    QCalendarWidget_InitPainter_Callback qcalendarwidget_initpainter_callback = nullptr;
    QCalendarWidget_Redirected_Callback qcalendarwidget_redirected_callback = nullptr;
    QCalendarWidget_SharedPainter_Callback qcalendarwidget_sharedpainter_callback = nullptr;
    QCalendarWidget_InputMethodEvent_Callback qcalendarwidget_inputmethodevent_callback = nullptr;
    QCalendarWidget_InputMethodQuery_Callback qcalendarwidget_inputmethodquery_callback = nullptr;
    QCalendarWidget_FocusNextPrevChild_Callback qcalendarwidget_focusnextprevchild_callback = nullptr;
    QCalendarWidget_TimerEvent_Callback qcalendarwidget_timerevent_callback = nullptr;
    QCalendarWidget_ChildEvent_Callback qcalendarwidget_childevent_callback = nullptr;
    QCalendarWidget_CustomEvent_Callback qcalendarwidget_customevent_callback = nullptr;
    QCalendarWidget_ConnectNotify_Callback qcalendarwidget_connectnotify_callback = nullptr;
    QCalendarWidget_DisconnectNotify_Callback qcalendarwidget_disconnectnotify_callback = nullptr;
    QCalendarWidget_UpdateCell_Callback qcalendarwidget_updatecell_callback = nullptr;
    QCalendarWidget_UpdateCells_Callback qcalendarwidget_updatecells_callback = nullptr;
    QCalendarWidget_UpdateMicroFocus_Callback qcalendarwidget_updatemicrofocus_callback = nullptr;
    QCalendarWidget_Create_Callback qcalendarwidget_create_callback = nullptr;
    QCalendarWidget_Destroy_Callback qcalendarwidget_destroy_callback = nullptr;
    QCalendarWidget_FocusNextChild_Callback qcalendarwidget_focusnextchild_callback = nullptr;
    QCalendarWidget_FocusPreviousChild_Callback qcalendarwidget_focuspreviouschild_callback = nullptr;
    QCalendarWidget_Sender_Callback qcalendarwidget_sender_callback = nullptr;
    QCalendarWidget_SenderSignalIndex_Callback qcalendarwidget_sendersignalindex_callback = nullptr;
    QCalendarWidget_Receivers_Callback qcalendarwidget_receivers_callback = nullptr;
    QCalendarWidget_IsSignalConnected_Callback qcalendarwidget_issignalconnected_callback = nullptr;
    QCalendarWidget_GetDecodedMetricF_Callback qcalendarwidget_getdecodedmetricf_callback = nullptr;

    // Instance base flags
    mutable bool qcalendarwidget_metacall_isbase = false;
    mutable bool qcalendarwidget_sizehint_isbase = false;
    mutable bool qcalendarwidget_minimumsizehint_isbase = false;
    mutable bool qcalendarwidget_event_isbase = false;
    mutable bool qcalendarwidget_eventfilter_isbase = false;
    mutable bool qcalendarwidget_mousepressevent_isbase = false;
    mutable bool qcalendarwidget_resizeevent_isbase = false;
    mutable bool qcalendarwidget_keypressevent_isbase = false;
    mutable bool qcalendarwidget_paintcell_isbase = false;
    mutable bool qcalendarwidget_devtype_isbase = false;
    mutable bool qcalendarwidget_setvisible_isbase = false;
    mutable bool qcalendarwidget_heightforwidth_isbase = false;
    mutable bool qcalendarwidget_hasheightforwidth_isbase = false;
    mutable bool qcalendarwidget_paintengine_isbase = false;
    mutable bool qcalendarwidget_mousereleaseevent_isbase = false;
    mutable bool qcalendarwidget_mousedoubleclickevent_isbase = false;
    mutable bool qcalendarwidget_mousemoveevent_isbase = false;
    mutable bool qcalendarwidget_wheelevent_isbase = false;
    mutable bool qcalendarwidget_keyreleaseevent_isbase = false;
    mutable bool qcalendarwidget_focusinevent_isbase = false;
    mutable bool qcalendarwidget_focusoutevent_isbase = false;
    mutable bool qcalendarwidget_enterevent_isbase = false;
    mutable bool qcalendarwidget_leaveevent_isbase = false;
    mutable bool qcalendarwidget_paintevent_isbase = false;
    mutable bool qcalendarwidget_moveevent_isbase = false;
    mutable bool qcalendarwidget_closeevent_isbase = false;
    mutable bool qcalendarwidget_contextmenuevent_isbase = false;
    mutable bool qcalendarwidget_tabletevent_isbase = false;
    mutable bool qcalendarwidget_actionevent_isbase = false;
    mutable bool qcalendarwidget_dragenterevent_isbase = false;
    mutable bool qcalendarwidget_dragmoveevent_isbase = false;
    mutable bool qcalendarwidget_dragleaveevent_isbase = false;
    mutable bool qcalendarwidget_dropevent_isbase = false;
    mutable bool qcalendarwidget_showevent_isbase = false;
    mutable bool qcalendarwidget_hideevent_isbase = false;
    mutable bool qcalendarwidget_nativeevent_isbase = false;
    mutable bool qcalendarwidget_changeevent_isbase = false;
    mutable bool qcalendarwidget_metric_isbase = false;
    mutable bool qcalendarwidget_initpainter_isbase = false;
    mutable bool qcalendarwidget_redirected_isbase = false;
    mutable bool qcalendarwidget_sharedpainter_isbase = false;
    mutable bool qcalendarwidget_inputmethodevent_isbase = false;
    mutable bool qcalendarwidget_inputmethodquery_isbase = false;
    mutable bool qcalendarwidget_focusnextprevchild_isbase = false;
    mutable bool qcalendarwidget_timerevent_isbase = false;
    mutable bool qcalendarwidget_childevent_isbase = false;
    mutable bool qcalendarwidget_customevent_isbase = false;
    mutable bool qcalendarwidget_connectnotify_isbase = false;
    mutable bool qcalendarwidget_disconnectnotify_isbase = false;
    mutable bool qcalendarwidget_updatecell_isbase = false;
    mutable bool qcalendarwidget_updatecells_isbase = false;
    mutable bool qcalendarwidget_updatemicrofocus_isbase = false;
    mutable bool qcalendarwidget_create_isbase = false;
    mutable bool qcalendarwidget_destroy_isbase = false;
    mutable bool qcalendarwidget_focusnextchild_isbase = false;
    mutable bool qcalendarwidget_focuspreviouschild_isbase = false;
    mutable bool qcalendarwidget_sender_isbase = false;
    mutable bool qcalendarwidget_sendersignalindex_isbase = false;
    mutable bool qcalendarwidget_receivers_isbase = false;
    mutable bool qcalendarwidget_issignalconnected_isbase = false;
    mutable bool qcalendarwidget_getdecodedmetricf_isbase = false;

  public:
    VirtualQCalendarWidget(QWidget* parent) : QCalendarWidget(parent) {};
    VirtualQCalendarWidget() : QCalendarWidget() {};

    ~VirtualQCalendarWidget() {
        qcalendarwidget_metacall_callback = nullptr;
        qcalendarwidget_sizehint_callback = nullptr;
        qcalendarwidget_minimumsizehint_callback = nullptr;
        qcalendarwidget_event_callback = nullptr;
        qcalendarwidget_eventfilter_callback = nullptr;
        qcalendarwidget_mousepressevent_callback = nullptr;
        qcalendarwidget_resizeevent_callback = nullptr;
        qcalendarwidget_keypressevent_callback = nullptr;
        qcalendarwidget_paintcell_callback = nullptr;
        qcalendarwidget_devtype_callback = nullptr;
        qcalendarwidget_setvisible_callback = nullptr;
        qcalendarwidget_heightforwidth_callback = nullptr;
        qcalendarwidget_hasheightforwidth_callback = nullptr;
        qcalendarwidget_paintengine_callback = nullptr;
        qcalendarwidget_mousereleaseevent_callback = nullptr;
        qcalendarwidget_mousedoubleclickevent_callback = nullptr;
        qcalendarwidget_mousemoveevent_callback = nullptr;
        qcalendarwidget_wheelevent_callback = nullptr;
        qcalendarwidget_keyreleaseevent_callback = nullptr;
        qcalendarwidget_focusinevent_callback = nullptr;
        qcalendarwidget_focusoutevent_callback = nullptr;
        qcalendarwidget_enterevent_callback = nullptr;
        qcalendarwidget_leaveevent_callback = nullptr;
        qcalendarwidget_paintevent_callback = nullptr;
        qcalendarwidget_moveevent_callback = nullptr;
        qcalendarwidget_closeevent_callback = nullptr;
        qcalendarwidget_contextmenuevent_callback = nullptr;
        qcalendarwidget_tabletevent_callback = nullptr;
        qcalendarwidget_actionevent_callback = nullptr;
        qcalendarwidget_dragenterevent_callback = nullptr;
        qcalendarwidget_dragmoveevent_callback = nullptr;
        qcalendarwidget_dragleaveevent_callback = nullptr;
        qcalendarwidget_dropevent_callback = nullptr;
        qcalendarwidget_showevent_callback = nullptr;
        qcalendarwidget_hideevent_callback = nullptr;
        qcalendarwidget_nativeevent_callback = nullptr;
        qcalendarwidget_changeevent_callback = nullptr;
        qcalendarwidget_metric_callback = nullptr;
        qcalendarwidget_initpainter_callback = nullptr;
        qcalendarwidget_redirected_callback = nullptr;
        qcalendarwidget_sharedpainter_callback = nullptr;
        qcalendarwidget_inputmethodevent_callback = nullptr;
        qcalendarwidget_inputmethodquery_callback = nullptr;
        qcalendarwidget_focusnextprevchild_callback = nullptr;
        qcalendarwidget_timerevent_callback = nullptr;
        qcalendarwidget_childevent_callback = nullptr;
        qcalendarwidget_customevent_callback = nullptr;
        qcalendarwidget_connectnotify_callback = nullptr;
        qcalendarwidget_disconnectnotify_callback = nullptr;
        qcalendarwidget_updatecell_callback = nullptr;
        qcalendarwidget_updatecells_callback = nullptr;
        qcalendarwidget_updatemicrofocus_callback = nullptr;
        qcalendarwidget_create_callback = nullptr;
        qcalendarwidget_destroy_callback = nullptr;
        qcalendarwidget_focusnextchild_callback = nullptr;
        qcalendarwidget_focuspreviouschild_callback = nullptr;
        qcalendarwidget_sender_callback = nullptr;
        qcalendarwidget_sendersignalindex_callback = nullptr;
        qcalendarwidget_receivers_callback = nullptr;
        qcalendarwidget_issignalconnected_callback = nullptr;
        qcalendarwidget_getdecodedmetricf_callback = nullptr;
    }

    // Callback setters
    inline void setQCalendarWidget_Metacall_Callback(QCalendarWidget_Metacall_Callback cb) { qcalendarwidget_metacall_callback = cb; }
    inline void setQCalendarWidget_SizeHint_Callback(QCalendarWidget_SizeHint_Callback cb) { qcalendarwidget_sizehint_callback = cb; }
    inline void setQCalendarWidget_MinimumSizeHint_Callback(QCalendarWidget_MinimumSizeHint_Callback cb) { qcalendarwidget_minimumsizehint_callback = cb; }
    inline void setQCalendarWidget_Event_Callback(QCalendarWidget_Event_Callback cb) { qcalendarwidget_event_callback = cb; }
    inline void setQCalendarWidget_EventFilter_Callback(QCalendarWidget_EventFilter_Callback cb) { qcalendarwidget_eventfilter_callback = cb; }
    inline void setQCalendarWidget_MousePressEvent_Callback(QCalendarWidget_MousePressEvent_Callback cb) { qcalendarwidget_mousepressevent_callback = cb; }
    inline void setQCalendarWidget_ResizeEvent_Callback(QCalendarWidget_ResizeEvent_Callback cb) { qcalendarwidget_resizeevent_callback = cb; }
    inline void setQCalendarWidget_KeyPressEvent_Callback(QCalendarWidget_KeyPressEvent_Callback cb) { qcalendarwidget_keypressevent_callback = cb; }
    inline void setQCalendarWidget_PaintCell_Callback(QCalendarWidget_PaintCell_Callback cb) { qcalendarwidget_paintcell_callback = cb; }
    inline void setQCalendarWidget_DevType_Callback(QCalendarWidget_DevType_Callback cb) { qcalendarwidget_devtype_callback = cb; }
    inline void setQCalendarWidget_SetVisible_Callback(QCalendarWidget_SetVisible_Callback cb) { qcalendarwidget_setvisible_callback = cb; }
    inline void setQCalendarWidget_HeightForWidth_Callback(QCalendarWidget_HeightForWidth_Callback cb) { qcalendarwidget_heightforwidth_callback = cb; }
    inline void setQCalendarWidget_HasHeightForWidth_Callback(QCalendarWidget_HasHeightForWidth_Callback cb) { qcalendarwidget_hasheightforwidth_callback = cb; }
    inline void setQCalendarWidget_PaintEngine_Callback(QCalendarWidget_PaintEngine_Callback cb) { qcalendarwidget_paintengine_callback = cb; }
    inline void setQCalendarWidget_MouseReleaseEvent_Callback(QCalendarWidget_MouseReleaseEvent_Callback cb) { qcalendarwidget_mousereleaseevent_callback = cb; }
    inline void setQCalendarWidget_MouseDoubleClickEvent_Callback(QCalendarWidget_MouseDoubleClickEvent_Callback cb) { qcalendarwidget_mousedoubleclickevent_callback = cb; }
    inline void setQCalendarWidget_MouseMoveEvent_Callback(QCalendarWidget_MouseMoveEvent_Callback cb) { qcalendarwidget_mousemoveevent_callback = cb; }
    inline void setQCalendarWidget_WheelEvent_Callback(QCalendarWidget_WheelEvent_Callback cb) { qcalendarwidget_wheelevent_callback = cb; }
    inline void setQCalendarWidget_KeyReleaseEvent_Callback(QCalendarWidget_KeyReleaseEvent_Callback cb) { qcalendarwidget_keyreleaseevent_callback = cb; }
    inline void setQCalendarWidget_FocusInEvent_Callback(QCalendarWidget_FocusInEvent_Callback cb) { qcalendarwidget_focusinevent_callback = cb; }
    inline void setQCalendarWidget_FocusOutEvent_Callback(QCalendarWidget_FocusOutEvent_Callback cb) { qcalendarwidget_focusoutevent_callback = cb; }
    inline void setQCalendarWidget_EnterEvent_Callback(QCalendarWidget_EnterEvent_Callback cb) { qcalendarwidget_enterevent_callback = cb; }
    inline void setQCalendarWidget_LeaveEvent_Callback(QCalendarWidget_LeaveEvent_Callback cb) { qcalendarwidget_leaveevent_callback = cb; }
    inline void setQCalendarWidget_PaintEvent_Callback(QCalendarWidget_PaintEvent_Callback cb) { qcalendarwidget_paintevent_callback = cb; }
    inline void setQCalendarWidget_MoveEvent_Callback(QCalendarWidget_MoveEvent_Callback cb) { qcalendarwidget_moveevent_callback = cb; }
    inline void setQCalendarWidget_CloseEvent_Callback(QCalendarWidget_CloseEvent_Callback cb) { qcalendarwidget_closeevent_callback = cb; }
    inline void setQCalendarWidget_ContextMenuEvent_Callback(QCalendarWidget_ContextMenuEvent_Callback cb) { qcalendarwidget_contextmenuevent_callback = cb; }
    inline void setQCalendarWidget_TabletEvent_Callback(QCalendarWidget_TabletEvent_Callback cb) { qcalendarwidget_tabletevent_callback = cb; }
    inline void setQCalendarWidget_ActionEvent_Callback(QCalendarWidget_ActionEvent_Callback cb) { qcalendarwidget_actionevent_callback = cb; }
    inline void setQCalendarWidget_DragEnterEvent_Callback(QCalendarWidget_DragEnterEvent_Callback cb) { qcalendarwidget_dragenterevent_callback = cb; }
    inline void setQCalendarWidget_DragMoveEvent_Callback(QCalendarWidget_DragMoveEvent_Callback cb) { qcalendarwidget_dragmoveevent_callback = cb; }
    inline void setQCalendarWidget_DragLeaveEvent_Callback(QCalendarWidget_DragLeaveEvent_Callback cb) { qcalendarwidget_dragleaveevent_callback = cb; }
    inline void setQCalendarWidget_DropEvent_Callback(QCalendarWidget_DropEvent_Callback cb) { qcalendarwidget_dropevent_callback = cb; }
    inline void setQCalendarWidget_ShowEvent_Callback(QCalendarWidget_ShowEvent_Callback cb) { qcalendarwidget_showevent_callback = cb; }
    inline void setQCalendarWidget_HideEvent_Callback(QCalendarWidget_HideEvent_Callback cb) { qcalendarwidget_hideevent_callback = cb; }
    inline void setQCalendarWidget_NativeEvent_Callback(QCalendarWidget_NativeEvent_Callback cb) { qcalendarwidget_nativeevent_callback = cb; }
    inline void setQCalendarWidget_ChangeEvent_Callback(QCalendarWidget_ChangeEvent_Callback cb) { qcalendarwidget_changeevent_callback = cb; }
    inline void setQCalendarWidget_Metric_Callback(QCalendarWidget_Metric_Callback cb) { qcalendarwidget_metric_callback = cb; }
    inline void setQCalendarWidget_InitPainter_Callback(QCalendarWidget_InitPainter_Callback cb) { qcalendarwidget_initpainter_callback = cb; }
    inline void setQCalendarWidget_Redirected_Callback(QCalendarWidget_Redirected_Callback cb) { qcalendarwidget_redirected_callback = cb; }
    inline void setQCalendarWidget_SharedPainter_Callback(QCalendarWidget_SharedPainter_Callback cb) { qcalendarwidget_sharedpainter_callback = cb; }
    inline void setQCalendarWidget_InputMethodEvent_Callback(QCalendarWidget_InputMethodEvent_Callback cb) { qcalendarwidget_inputmethodevent_callback = cb; }
    inline void setQCalendarWidget_InputMethodQuery_Callback(QCalendarWidget_InputMethodQuery_Callback cb) { qcalendarwidget_inputmethodquery_callback = cb; }
    inline void setQCalendarWidget_FocusNextPrevChild_Callback(QCalendarWidget_FocusNextPrevChild_Callback cb) { qcalendarwidget_focusnextprevchild_callback = cb; }
    inline void setQCalendarWidget_TimerEvent_Callback(QCalendarWidget_TimerEvent_Callback cb) { qcalendarwidget_timerevent_callback = cb; }
    inline void setQCalendarWidget_ChildEvent_Callback(QCalendarWidget_ChildEvent_Callback cb) { qcalendarwidget_childevent_callback = cb; }
    inline void setQCalendarWidget_CustomEvent_Callback(QCalendarWidget_CustomEvent_Callback cb) { qcalendarwidget_customevent_callback = cb; }
    inline void setQCalendarWidget_ConnectNotify_Callback(QCalendarWidget_ConnectNotify_Callback cb) { qcalendarwidget_connectnotify_callback = cb; }
    inline void setQCalendarWidget_DisconnectNotify_Callback(QCalendarWidget_DisconnectNotify_Callback cb) { qcalendarwidget_disconnectnotify_callback = cb; }
    inline void setQCalendarWidget_UpdateCell_Callback(QCalendarWidget_UpdateCell_Callback cb) { qcalendarwidget_updatecell_callback = cb; }
    inline void setQCalendarWidget_UpdateCells_Callback(QCalendarWidget_UpdateCells_Callback cb) { qcalendarwidget_updatecells_callback = cb; }
    inline void setQCalendarWidget_UpdateMicroFocus_Callback(QCalendarWidget_UpdateMicroFocus_Callback cb) { qcalendarwidget_updatemicrofocus_callback = cb; }
    inline void setQCalendarWidget_Create_Callback(QCalendarWidget_Create_Callback cb) { qcalendarwidget_create_callback = cb; }
    inline void setQCalendarWidget_Destroy_Callback(QCalendarWidget_Destroy_Callback cb) { qcalendarwidget_destroy_callback = cb; }
    inline void setQCalendarWidget_FocusNextChild_Callback(QCalendarWidget_FocusNextChild_Callback cb) { qcalendarwidget_focusnextchild_callback = cb; }
    inline void setQCalendarWidget_FocusPreviousChild_Callback(QCalendarWidget_FocusPreviousChild_Callback cb) { qcalendarwidget_focuspreviouschild_callback = cb; }
    inline void setQCalendarWidget_Sender_Callback(QCalendarWidget_Sender_Callback cb) { qcalendarwidget_sender_callback = cb; }
    inline void setQCalendarWidget_SenderSignalIndex_Callback(QCalendarWidget_SenderSignalIndex_Callback cb) { qcalendarwidget_sendersignalindex_callback = cb; }
    inline void setQCalendarWidget_Receivers_Callback(QCalendarWidget_Receivers_Callback cb) { qcalendarwidget_receivers_callback = cb; }
    inline void setQCalendarWidget_IsSignalConnected_Callback(QCalendarWidget_IsSignalConnected_Callback cb) { qcalendarwidget_issignalconnected_callback = cb; }
    inline void setQCalendarWidget_GetDecodedMetricF_Callback(QCalendarWidget_GetDecodedMetricF_Callback cb) { qcalendarwidget_getdecodedmetricf_callback = cb; }

    // Base flag setters
    inline void setQCalendarWidget_Metacall_IsBase(bool value) const { qcalendarwidget_metacall_isbase = value; }
    inline void setQCalendarWidget_SizeHint_IsBase(bool value) const { qcalendarwidget_sizehint_isbase = value; }
    inline void setQCalendarWidget_MinimumSizeHint_IsBase(bool value) const { qcalendarwidget_minimumsizehint_isbase = value; }
    inline void setQCalendarWidget_Event_IsBase(bool value) const { qcalendarwidget_event_isbase = value; }
    inline void setQCalendarWidget_EventFilter_IsBase(bool value) const { qcalendarwidget_eventfilter_isbase = value; }
    inline void setQCalendarWidget_MousePressEvent_IsBase(bool value) const { qcalendarwidget_mousepressevent_isbase = value; }
    inline void setQCalendarWidget_ResizeEvent_IsBase(bool value) const { qcalendarwidget_resizeevent_isbase = value; }
    inline void setQCalendarWidget_KeyPressEvent_IsBase(bool value) const { qcalendarwidget_keypressevent_isbase = value; }
    inline void setQCalendarWidget_PaintCell_IsBase(bool value) const { qcalendarwidget_paintcell_isbase = value; }
    inline void setQCalendarWidget_DevType_IsBase(bool value) const { qcalendarwidget_devtype_isbase = value; }
    inline void setQCalendarWidget_SetVisible_IsBase(bool value) const { qcalendarwidget_setvisible_isbase = value; }
    inline void setQCalendarWidget_HeightForWidth_IsBase(bool value) const { qcalendarwidget_heightforwidth_isbase = value; }
    inline void setQCalendarWidget_HasHeightForWidth_IsBase(bool value) const { qcalendarwidget_hasheightforwidth_isbase = value; }
    inline void setQCalendarWidget_PaintEngine_IsBase(bool value) const { qcalendarwidget_paintengine_isbase = value; }
    inline void setQCalendarWidget_MouseReleaseEvent_IsBase(bool value) const { qcalendarwidget_mousereleaseevent_isbase = value; }
    inline void setQCalendarWidget_MouseDoubleClickEvent_IsBase(bool value) const { qcalendarwidget_mousedoubleclickevent_isbase = value; }
    inline void setQCalendarWidget_MouseMoveEvent_IsBase(bool value) const { qcalendarwidget_mousemoveevent_isbase = value; }
    inline void setQCalendarWidget_WheelEvent_IsBase(bool value) const { qcalendarwidget_wheelevent_isbase = value; }
    inline void setQCalendarWidget_KeyReleaseEvent_IsBase(bool value) const { qcalendarwidget_keyreleaseevent_isbase = value; }
    inline void setQCalendarWidget_FocusInEvent_IsBase(bool value) const { qcalendarwidget_focusinevent_isbase = value; }
    inline void setQCalendarWidget_FocusOutEvent_IsBase(bool value) const { qcalendarwidget_focusoutevent_isbase = value; }
    inline void setQCalendarWidget_EnterEvent_IsBase(bool value) const { qcalendarwidget_enterevent_isbase = value; }
    inline void setQCalendarWidget_LeaveEvent_IsBase(bool value) const { qcalendarwidget_leaveevent_isbase = value; }
    inline void setQCalendarWidget_PaintEvent_IsBase(bool value) const { qcalendarwidget_paintevent_isbase = value; }
    inline void setQCalendarWidget_MoveEvent_IsBase(bool value) const { qcalendarwidget_moveevent_isbase = value; }
    inline void setQCalendarWidget_CloseEvent_IsBase(bool value) const { qcalendarwidget_closeevent_isbase = value; }
    inline void setQCalendarWidget_ContextMenuEvent_IsBase(bool value) const { qcalendarwidget_contextmenuevent_isbase = value; }
    inline void setQCalendarWidget_TabletEvent_IsBase(bool value) const { qcalendarwidget_tabletevent_isbase = value; }
    inline void setQCalendarWidget_ActionEvent_IsBase(bool value) const { qcalendarwidget_actionevent_isbase = value; }
    inline void setQCalendarWidget_DragEnterEvent_IsBase(bool value) const { qcalendarwidget_dragenterevent_isbase = value; }
    inline void setQCalendarWidget_DragMoveEvent_IsBase(bool value) const { qcalendarwidget_dragmoveevent_isbase = value; }
    inline void setQCalendarWidget_DragLeaveEvent_IsBase(bool value) const { qcalendarwidget_dragleaveevent_isbase = value; }
    inline void setQCalendarWidget_DropEvent_IsBase(bool value) const { qcalendarwidget_dropevent_isbase = value; }
    inline void setQCalendarWidget_ShowEvent_IsBase(bool value) const { qcalendarwidget_showevent_isbase = value; }
    inline void setQCalendarWidget_HideEvent_IsBase(bool value) const { qcalendarwidget_hideevent_isbase = value; }
    inline void setQCalendarWidget_NativeEvent_IsBase(bool value) const { qcalendarwidget_nativeevent_isbase = value; }
    inline void setQCalendarWidget_ChangeEvent_IsBase(bool value) const { qcalendarwidget_changeevent_isbase = value; }
    inline void setQCalendarWidget_Metric_IsBase(bool value) const { qcalendarwidget_metric_isbase = value; }
    inline void setQCalendarWidget_InitPainter_IsBase(bool value) const { qcalendarwidget_initpainter_isbase = value; }
    inline void setQCalendarWidget_Redirected_IsBase(bool value) const { qcalendarwidget_redirected_isbase = value; }
    inline void setQCalendarWidget_SharedPainter_IsBase(bool value) const { qcalendarwidget_sharedpainter_isbase = value; }
    inline void setQCalendarWidget_InputMethodEvent_IsBase(bool value) const { qcalendarwidget_inputmethodevent_isbase = value; }
    inline void setQCalendarWidget_InputMethodQuery_IsBase(bool value) const { qcalendarwidget_inputmethodquery_isbase = value; }
    inline void setQCalendarWidget_FocusNextPrevChild_IsBase(bool value) const { qcalendarwidget_focusnextprevchild_isbase = value; }
    inline void setQCalendarWidget_TimerEvent_IsBase(bool value) const { qcalendarwidget_timerevent_isbase = value; }
    inline void setQCalendarWidget_ChildEvent_IsBase(bool value) const { qcalendarwidget_childevent_isbase = value; }
    inline void setQCalendarWidget_CustomEvent_IsBase(bool value) const { qcalendarwidget_customevent_isbase = value; }
    inline void setQCalendarWidget_ConnectNotify_IsBase(bool value) const { qcalendarwidget_connectnotify_isbase = value; }
    inline void setQCalendarWidget_DisconnectNotify_IsBase(bool value) const { qcalendarwidget_disconnectnotify_isbase = value; }
    inline void setQCalendarWidget_UpdateCell_IsBase(bool value) const { qcalendarwidget_updatecell_isbase = value; }
    inline void setQCalendarWidget_UpdateCells_IsBase(bool value) const { qcalendarwidget_updatecells_isbase = value; }
    inline void setQCalendarWidget_UpdateMicroFocus_IsBase(bool value) const { qcalendarwidget_updatemicrofocus_isbase = value; }
    inline void setQCalendarWidget_Create_IsBase(bool value) const { qcalendarwidget_create_isbase = value; }
    inline void setQCalendarWidget_Destroy_IsBase(bool value) const { qcalendarwidget_destroy_isbase = value; }
    inline void setQCalendarWidget_FocusNextChild_IsBase(bool value) const { qcalendarwidget_focusnextchild_isbase = value; }
    inline void setQCalendarWidget_FocusPreviousChild_IsBase(bool value) const { qcalendarwidget_focuspreviouschild_isbase = value; }
    inline void setQCalendarWidget_Sender_IsBase(bool value) const { qcalendarwidget_sender_isbase = value; }
    inline void setQCalendarWidget_SenderSignalIndex_IsBase(bool value) const { qcalendarwidget_sendersignalindex_isbase = value; }
    inline void setQCalendarWidget_Receivers_IsBase(bool value) const { qcalendarwidget_receivers_isbase = value; }
    inline void setQCalendarWidget_IsSignalConnected_IsBase(bool value) const { qcalendarwidget_issignalconnected_isbase = value; }
    inline void setQCalendarWidget_GetDecodedMetricF_IsBase(bool value) const { qcalendarwidget_getdecodedmetricf_isbase = value; }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (qcalendarwidget_metacall_isbase) {
            qcalendarwidget_metacall_isbase = false;
            return QCalendarWidget::qt_metacall(param1, param2, param3);
        } else if (qcalendarwidget_metacall_callback != nullptr) {
            int cbval1 = static_cast<int>(param1);
            int cbval2 = param2;
            void** cbval3 = param3;

            int callback_ret = qcalendarwidget_metacall_callback(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        } else {
            return QCalendarWidget::qt_metacall(param1, param2, param3);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QSize sizeHint() const override {
        if (qcalendarwidget_sizehint_isbase) {
            qcalendarwidget_sizehint_isbase = false;
            return QCalendarWidget::sizeHint();
        } else if (qcalendarwidget_sizehint_callback != nullptr) {
            QSize* callback_ret = qcalendarwidget_sizehint_callback();
            return *callback_ret;
        } else {
            return QCalendarWidget::sizeHint();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QSize minimumSizeHint() const override {
        if (qcalendarwidget_minimumsizehint_isbase) {
            qcalendarwidget_minimumsizehint_isbase = false;
            return QCalendarWidget::minimumSizeHint();
        } else if (qcalendarwidget_minimumsizehint_callback != nullptr) {
            QSize* callback_ret = qcalendarwidget_minimumsizehint_callback();
            return *callback_ret;
        } else {
            return QCalendarWidget::minimumSizeHint();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* event) override {
        if (qcalendarwidget_event_isbase) {
            qcalendarwidget_event_isbase = false;
            return QCalendarWidget::event(event);
        } else if (qcalendarwidget_event_callback != nullptr) {
            QEvent* cbval1 = event;

            bool callback_ret = qcalendarwidget_event_callback(this, cbval1);
            return callback_ret;
        } else {
            return QCalendarWidget::event(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* watched, QEvent* event) override {
        if (qcalendarwidget_eventfilter_isbase) {
            qcalendarwidget_eventfilter_isbase = false;
            return QCalendarWidget::eventFilter(watched, event);
        } else if (qcalendarwidget_eventfilter_callback != nullptr) {
            QObject* cbval1 = watched;
            QEvent* cbval2 = event;

            bool callback_ret = qcalendarwidget_eventfilter_callback(this, cbval1, cbval2);
            return callback_ret;
        } else {
            return QCalendarWidget::eventFilter(watched, event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void mousePressEvent(QMouseEvent* event) override {
        if (qcalendarwidget_mousepressevent_isbase) {
            qcalendarwidget_mousepressevent_isbase = false;
            QCalendarWidget::mousePressEvent(event);
        } else if (qcalendarwidget_mousepressevent_callback != nullptr) {
            QMouseEvent* cbval1 = event;

            qcalendarwidget_mousepressevent_callback(this, cbval1);
        } else {
            QCalendarWidget::mousePressEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void resizeEvent(QResizeEvent* event) override {
        if (qcalendarwidget_resizeevent_isbase) {
            qcalendarwidget_resizeevent_isbase = false;
            QCalendarWidget::resizeEvent(event);
        } else if (qcalendarwidget_resizeevent_callback != nullptr) {
            QResizeEvent* cbval1 = event;

            qcalendarwidget_resizeevent_callback(this, cbval1);
        } else {
            QCalendarWidget::resizeEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void keyPressEvent(QKeyEvent* event) override {
        if (qcalendarwidget_keypressevent_isbase) {
            qcalendarwidget_keypressevent_isbase = false;
            QCalendarWidget::keyPressEvent(event);
        } else if (qcalendarwidget_keypressevent_callback != nullptr) {
            QKeyEvent* cbval1 = event;

            qcalendarwidget_keypressevent_callback(this, cbval1);
        } else {
            QCalendarWidget::keyPressEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void paintCell(QPainter* painter, const QRect& rect, QDate date) const override {
        if (qcalendarwidget_paintcell_isbase) {
            qcalendarwidget_paintcell_isbase = false;
            QCalendarWidget::paintCell(painter, rect, date);
        } else if (qcalendarwidget_paintcell_callback != nullptr) {
            QPainter* cbval1 = painter;
            const QRect& rect_ret = rect;
            // Cast returned reference into pointer
            QRect* cbval2 = const_cast<QRect*>(&rect_ret);
            QDate* cbval3 = new QDate(date);

            qcalendarwidget_paintcell_callback(this, cbval1, cbval2, cbval3);
        } else {
            QCalendarWidget::paintCell(painter, rect, date);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual int devType() const override {
        if (qcalendarwidget_devtype_isbase) {
            qcalendarwidget_devtype_isbase = false;
            return QCalendarWidget::devType();
        } else if (qcalendarwidget_devtype_callback != nullptr) {
            int callback_ret = qcalendarwidget_devtype_callback();
            return static_cast<int>(callback_ret);
        } else {
            return QCalendarWidget::devType();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void setVisible(bool visible) override {
        if (qcalendarwidget_setvisible_isbase) {
            qcalendarwidget_setvisible_isbase = false;
            QCalendarWidget::setVisible(visible);
        } else if (qcalendarwidget_setvisible_callback != nullptr) {
            bool cbval1 = visible;

            qcalendarwidget_setvisible_callback(this, cbval1);
        } else {
            QCalendarWidget::setVisible(visible);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual int heightForWidth(int param1) const override {
        if (qcalendarwidget_heightforwidth_isbase) {
            qcalendarwidget_heightforwidth_isbase = false;
            return QCalendarWidget::heightForWidth(param1);
        } else if (qcalendarwidget_heightforwidth_callback != nullptr) {
            int cbval1 = param1;

            int callback_ret = qcalendarwidget_heightforwidth_callback(this, cbval1);
            return static_cast<int>(callback_ret);
        } else {
            return QCalendarWidget::heightForWidth(param1);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool hasHeightForWidth() const override {
        if (qcalendarwidget_hasheightforwidth_isbase) {
            qcalendarwidget_hasheightforwidth_isbase = false;
            return QCalendarWidget::hasHeightForWidth();
        } else if (qcalendarwidget_hasheightforwidth_callback != nullptr) {
            bool callback_ret = qcalendarwidget_hasheightforwidth_callback();
            return callback_ret;
        } else {
            return QCalendarWidget::hasHeightForWidth();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QPaintEngine* paintEngine() const override {
        if (qcalendarwidget_paintengine_isbase) {
            qcalendarwidget_paintengine_isbase = false;
            return QCalendarWidget::paintEngine();
        } else if (qcalendarwidget_paintengine_callback != nullptr) {
            QPaintEngine* callback_ret = qcalendarwidget_paintengine_callback();
            return callback_ret;
        } else {
            return QCalendarWidget::paintEngine();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseReleaseEvent(QMouseEvent* event) override {
        if (qcalendarwidget_mousereleaseevent_isbase) {
            qcalendarwidget_mousereleaseevent_isbase = false;
            QCalendarWidget::mouseReleaseEvent(event);
        } else if (qcalendarwidget_mousereleaseevent_callback != nullptr) {
            QMouseEvent* cbval1 = event;

            qcalendarwidget_mousereleaseevent_callback(this, cbval1);
        } else {
            QCalendarWidget::mouseReleaseEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseDoubleClickEvent(QMouseEvent* event) override {
        if (qcalendarwidget_mousedoubleclickevent_isbase) {
            qcalendarwidget_mousedoubleclickevent_isbase = false;
            QCalendarWidget::mouseDoubleClickEvent(event);
        } else if (qcalendarwidget_mousedoubleclickevent_callback != nullptr) {
            QMouseEvent* cbval1 = event;

            qcalendarwidget_mousedoubleclickevent_callback(this, cbval1);
        } else {
            QCalendarWidget::mouseDoubleClickEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseMoveEvent(QMouseEvent* event) override {
        if (qcalendarwidget_mousemoveevent_isbase) {
            qcalendarwidget_mousemoveevent_isbase = false;
            QCalendarWidget::mouseMoveEvent(event);
        } else if (qcalendarwidget_mousemoveevent_callback != nullptr) {
            QMouseEvent* cbval1 = event;

            qcalendarwidget_mousemoveevent_callback(this, cbval1);
        } else {
            QCalendarWidget::mouseMoveEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void wheelEvent(QWheelEvent* event) override {
        if (qcalendarwidget_wheelevent_isbase) {
            qcalendarwidget_wheelevent_isbase = false;
            QCalendarWidget::wheelEvent(event);
        } else if (qcalendarwidget_wheelevent_callback != nullptr) {
            QWheelEvent* cbval1 = event;

            qcalendarwidget_wheelevent_callback(this, cbval1);
        } else {
            QCalendarWidget::wheelEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void keyReleaseEvent(QKeyEvent* event) override {
        if (qcalendarwidget_keyreleaseevent_isbase) {
            qcalendarwidget_keyreleaseevent_isbase = false;
            QCalendarWidget::keyReleaseEvent(event);
        } else if (qcalendarwidget_keyreleaseevent_callback != nullptr) {
            QKeyEvent* cbval1 = event;

            qcalendarwidget_keyreleaseevent_callback(this, cbval1);
        } else {
            QCalendarWidget::keyReleaseEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void focusInEvent(QFocusEvent* event) override {
        if (qcalendarwidget_focusinevent_isbase) {
            qcalendarwidget_focusinevent_isbase = false;
            QCalendarWidget::focusInEvent(event);
        } else if (qcalendarwidget_focusinevent_callback != nullptr) {
            QFocusEvent* cbval1 = event;

            qcalendarwidget_focusinevent_callback(this, cbval1);
        } else {
            QCalendarWidget::focusInEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void focusOutEvent(QFocusEvent* event) override {
        if (qcalendarwidget_focusoutevent_isbase) {
            qcalendarwidget_focusoutevent_isbase = false;
            QCalendarWidget::focusOutEvent(event);
        } else if (qcalendarwidget_focusoutevent_callback != nullptr) {
            QFocusEvent* cbval1 = event;

            qcalendarwidget_focusoutevent_callback(this, cbval1);
        } else {
            QCalendarWidget::focusOutEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void enterEvent(QEnterEvent* event) override {
        if (qcalendarwidget_enterevent_isbase) {
            qcalendarwidget_enterevent_isbase = false;
            QCalendarWidget::enterEvent(event);
        } else if (qcalendarwidget_enterevent_callback != nullptr) {
            QEnterEvent* cbval1 = event;

            qcalendarwidget_enterevent_callback(this, cbval1);
        } else {
            QCalendarWidget::enterEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void leaveEvent(QEvent* event) override {
        if (qcalendarwidget_leaveevent_isbase) {
            qcalendarwidget_leaveevent_isbase = false;
            QCalendarWidget::leaveEvent(event);
        } else if (qcalendarwidget_leaveevent_callback != nullptr) {
            QEvent* cbval1 = event;

            qcalendarwidget_leaveevent_callback(this, cbval1);
        } else {
            QCalendarWidget::leaveEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void paintEvent(QPaintEvent* event) override {
        if (qcalendarwidget_paintevent_isbase) {
            qcalendarwidget_paintevent_isbase = false;
            QCalendarWidget::paintEvent(event);
        } else if (qcalendarwidget_paintevent_callback != nullptr) {
            QPaintEvent* cbval1 = event;

            qcalendarwidget_paintevent_callback(this, cbval1);
        } else {
            QCalendarWidget::paintEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void moveEvent(QMoveEvent* event) override {
        if (qcalendarwidget_moveevent_isbase) {
            qcalendarwidget_moveevent_isbase = false;
            QCalendarWidget::moveEvent(event);
        } else if (qcalendarwidget_moveevent_callback != nullptr) {
            QMoveEvent* cbval1 = event;

            qcalendarwidget_moveevent_callback(this, cbval1);
        } else {
            QCalendarWidget::moveEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void closeEvent(QCloseEvent* event) override {
        if (qcalendarwidget_closeevent_isbase) {
            qcalendarwidget_closeevent_isbase = false;
            QCalendarWidget::closeEvent(event);
        } else if (qcalendarwidget_closeevent_callback != nullptr) {
            QCloseEvent* cbval1 = event;

            qcalendarwidget_closeevent_callback(this, cbval1);
        } else {
            QCalendarWidget::closeEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void contextMenuEvent(QContextMenuEvent* event) override {
        if (qcalendarwidget_contextmenuevent_isbase) {
            qcalendarwidget_contextmenuevent_isbase = false;
            QCalendarWidget::contextMenuEvent(event);
        } else if (qcalendarwidget_contextmenuevent_callback != nullptr) {
            QContextMenuEvent* cbval1 = event;

            qcalendarwidget_contextmenuevent_callback(this, cbval1);
        } else {
            QCalendarWidget::contextMenuEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void tabletEvent(QTabletEvent* event) override {
        if (qcalendarwidget_tabletevent_isbase) {
            qcalendarwidget_tabletevent_isbase = false;
            QCalendarWidget::tabletEvent(event);
        } else if (qcalendarwidget_tabletevent_callback != nullptr) {
            QTabletEvent* cbval1 = event;

            qcalendarwidget_tabletevent_callback(this, cbval1);
        } else {
            QCalendarWidget::tabletEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void actionEvent(QActionEvent* event) override {
        if (qcalendarwidget_actionevent_isbase) {
            qcalendarwidget_actionevent_isbase = false;
            QCalendarWidget::actionEvent(event);
        } else if (qcalendarwidget_actionevent_callback != nullptr) {
            QActionEvent* cbval1 = event;

            qcalendarwidget_actionevent_callback(this, cbval1);
        } else {
            QCalendarWidget::actionEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragEnterEvent(QDragEnterEvent* event) override {
        if (qcalendarwidget_dragenterevent_isbase) {
            qcalendarwidget_dragenterevent_isbase = false;
            QCalendarWidget::dragEnterEvent(event);
        } else if (qcalendarwidget_dragenterevent_callback != nullptr) {
            QDragEnterEvent* cbval1 = event;

            qcalendarwidget_dragenterevent_callback(this, cbval1);
        } else {
            QCalendarWidget::dragEnterEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragMoveEvent(QDragMoveEvent* event) override {
        if (qcalendarwidget_dragmoveevent_isbase) {
            qcalendarwidget_dragmoveevent_isbase = false;
            QCalendarWidget::dragMoveEvent(event);
        } else if (qcalendarwidget_dragmoveevent_callback != nullptr) {
            QDragMoveEvent* cbval1 = event;

            qcalendarwidget_dragmoveevent_callback(this, cbval1);
        } else {
            QCalendarWidget::dragMoveEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragLeaveEvent(QDragLeaveEvent* event) override {
        if (qcalendarwidget_dragleaveevent_isbase) {
            qcalendarwidget_dragleaveevent_isbase = false;
            QCalendarWidget::dragLeaveEvent(event);
        } else if (qcalendarwidget_dragleaveevent_callback != nullptr) {
            QDragLeaveEvent* cbval1 = event;

            qcalendarwidget_dragleaveevent_callback(this, cbval1);
        } else {
            QCalendarWidget::dragLeaveEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void dropEvent(QDropEvent* event) override {
        if (qcalendarwidget_dropevent_isbase) {
            qcalendarwidget_dropevent_isbase = false;
            QCalendarWidget::dropEvent(event);
        } else if (qcalendarwidget_dropevent_callback != nullptr) {
            QDropEvent* cbval1 = event;

            qcalendarwidget_dropevent_callback(this, cbval1);
        } else {
            QCalendarWidget::dropEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void showEvent(QShowEvent* event) override {
        if (qcalendarwidget_showevent_isbase) {
            qcalendarwidget_showevent_isbase = false;
            QCalendarWidget::showEvent(event);
        } else if (qcalendarwidget_showevent_callback != nullptr) {
            QShowEvent* cbval1 = event;

            qcalendarwidget_showevent_callback(this, cbval1);
        } else {
            QCalendarWidget::showEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void hideEvent(QHideEvent* event) override {
        if (qcalendarwidget_hideevent_isbase) {
            qcalendarwidget_hideevent_isbase = false;
            QCalendarWidget::hideEvent(event);
        } else if (qcalendarwidget_hideevent_callback != nullptr) {
            QHideEvent* cbval1 = event;

            qcalendarwidget_hideevent_callback(this, cbval1);
        } else {
            QCalendarWidget::hideEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool nativeEvent(const QByteArray& eventType, void* message, qintptr* result) override {
        if (qcalendarwidget_nativeevent_isbase) {
            qcalendarwidget_nativeevent_isbase = false;
            return QCalendarWidget::nativeEvent(eventType, message, result);
        } else if (qcalendarwidget_nativeevent_callback != nullptr) {
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

            bool callback_ret = qcalendarwidget_nativeevent_callback(this, cbval1, cbval2, cbval3);
            return callback_ret;
        } else {
            return QCalendarWidget::nativeEvent(eventType, message, result);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void changeEvent(QEvent* param1) override {
        if (qcalendarwidget_changeevent_isbase) {
            qcalendarwidget_changeevent_isbase = false;
            QCalendarWidget::changeEvent(param1);
        } else if (qcalendarwidget_changeevent_callback != nullptr) {
            QEvent* cbval1 = param1;

            qcalendarwidget_changeevent_callback(this, cbval1);
        } else {
            QCalendarWidget::changeEvent(param1);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual int metric(QPaintDevice::PaintDeviceMetric param1) const override {
        if (qcalendarwidget_metric_isbase) {
            qcalendarwidget_metric_isbase = false;
            return QCalendarWidget::metric(param1);
        } else if (qcalendarwidget_metric_callback != nullptr) {
            int cbval1 = static_cast<int>(param1);

            int callback_ret = qcalendarwidget_metric_callback(this, cbval1);
            return static_cast<int>(callback_ret);
        } else {
            return QCalendarWidget::metric(param1);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void initPainter(QPainter* painter) const override {
        if (qcalendarwidget_initpainter_isbase) {
            qcalendarwidget_initpainter_isbase = false;
            QCalendarWidget::initPainter(painter);
        } else if (qcalendarwidget_initpainter_callback != nullptr) {
            QPainter* cbval1 = painter;

            qcalendarwidget_initpainter_callback(this, cbval1);
        } else {
            QCalendarWidget::initPainter(painter);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QPaintDevice* redirected(QPoint* offset) const override {
        if (qcalendarwidget_redirected_isbase) {
            qcalendarwidget_redirected_isbase = false;
            return QCalendarWidget::redirected(offset);
        } else if (qcalendarwidget_redirected_callback != nullptr) {
            QPoint* cbval1 = offset;

            QPaintDevice* callback_ret = qcalendarwidget_redirected_callback(this, cbval1);
            return callback_ret;
        } else {
            return QCalendarWidget::redirected(offset);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QPainter* sharedPainter() const override {
        if (qcalendarwidget_sharedpainter_isbase) {
            qcalendarwidget_sharedpainter_isbase = false;
            return QCalendarWidget::sharedPainter();
        } else if (qcalendarwidget_sharedpainter_callback != nullptr) {
            QPainter* callback_ret = qcalendarwidget_sharedpainter_callback();
            return callback_ret;
        } else {
            return QCalendarWidget::sharedPainter();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void inputMethodEvent(QInputMethodEvent* param1) override {
        if (qcalendarwidget_inputmethodevent_isbase) {
            qcalendarwidget_inputmethodevent_isbase = false;
            QCalendarWidget::inputMethodEvent(param1);
        } else if (qcalendarwidget_inputmethodevent_callback != nullptr) {
            QInputMethodEvent* cbval1 = param1;

            qcalendarwidget_inputmethodevent_callback(this, cbval1);
        } else {
            QCalendarWidget::inputMethodEvent(param1);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QVariant inputMethodQuery(Qt::InputMethodQuery param1) const override {
        if (qcalendarwidget_inputmethodquery_isbase) {
            qcalendarwidget_inputmethodquery_isbase = false;
            return QCalendarWidget::inputMethodQuery(param1);
        } else if (qcalendarwidget_inputmethodquery_callback != nullptr) {
            int cbval1 = static_cast<int>(param1);

            QVariant* callback_ret = qcalendarwidget_inputmethodquery_callback(this, cbval1);
            return *callback_ret;
        } else {
            return QCalendarWidget::inputMethodQuery(param1);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool focusNextPrevChild(bool next) override {
        if (qcalendarwidget_focusnextprevchild_isbase) {
            qcalendarwidget_focusnextprevchild_isbase = false;
            return QCalendarWidget::focusNextPrevChild(next);
        } else if (qcalendarwidget_focusnextprevchild_callback != nullptr) {
            bool cbval1 = next;

            bool callback_ret = qcalendarwidget_focusnextprevchild_callback(this, cbval1);
            return callback_ret;
        } else {
            return QCalendarWidget::focusNextPrevChild(next);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (qcalendarwidget_timerevent_isbase) {
            qcalendarwidget_timerevent_isbase = false;
            QCalendarWidget::timerEvent(event);
        } else if (qcalendarwidget_timerevent_callback != nullptr) {
            QTimerEvent* cbval1 = event;

            qcalendarwidget_timerevent_callback(this, cbval1);
        } else {
            QCalendarWidget::timerEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (qcalendarwidget_childevent_isbase) {
            qcalendarwidget_childevent_isbase = false;
            QCalendarWidget::childEvent(event);
        } else if (qcalendarwidget_childevent_callback != nullptr) {
            QChildEvent* cbval1 = event;

            qcalendarwidget_childevent_callback(this, cbval1);
        } else {
            QCalendarWidget::childEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (qcalendarwidget_customevent_isbase) {
            qcalendarwidget_customevent_isbase = false;
            QCalendarWidget::customEvent(event);
        } else if (qcalendarwidget_customevent_callback != nullptr) {
            QEvent* cbval1 = event;

            qcalendarwidget_customevent_callback(this, cbval1);
        } else {
            QCalendarWidget::customEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (qcalendarwidget_connectnotify_isbase) {
            qcalendarwidget_connectnotify_isbase = false;
            QCalendarWidget::connectNotify(signal);
        } else if (qcalendarwidget_connectnotify_callback != nullptr) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            qcalendarwidget_connectnotify_callback(this, cbval1);
        } else {
            QCalendarWidget::connectNotify(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (qcalendarwidget_disconnectnotify_isbase) {
            qcalendarwidget_disconnectnotify_isbase = false;
            QCalendarWidget::disconnectNotify(signal);
        } else if (qcalendarwidget_disconnectnotify_callback != nullptr) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            qcalendarwidget_disconnectnotify_callback(this, cbval1);
        } else {
            QCalendarWidget::disconnectNotify(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    void updateCell(QDate date) {
        if (qcalendarwidget_updatecell_isbase) {
            qcalendarwidget_updatecell_isbase = false;
            QCalendarWidget::updateCell(date);
        } else if (qcalendarwidget_updatecell_callback != nullptr) {
            QDate* cbval1 = new QDate(date);

            qcalendarwidget_updatecell_callback(this, cbval1);
        } else {
            QCalendarWidget::updateCell(date);
        }
    }

    // Virtual method for C ABI access and custom callback
    void updateCells() {
        if (qcalendarwidget_updatecells_isbase) {
            qcalendarwidget_updatecells_isbase = false;
            QCalendarWidget::updateCells();
        } else if (qcalendarwidget_updatecells_callback != nullptr) {
            qcalendarwidget_updatecells_callback();
        } else {
            QCalendarWidget::updateCells();
        }
    }

    // Virtual method for C ABI access and custom callback
    void updateMicroFocus() {
        if (qcalendarwidget_updatemicrofocus_isbase) {
            qcalendarwidget_updatemicrofocus_isbase = false;
            QCalendarWidget::updateMicroFocus();
        } else if (qcalendarwidget_updatemicrofocus_callback != nullptr) {
            qcalendarwidget_updatemicrofocus_callback();
        } else {
            QCalendarWidget::updateMicroFocus();
        }
    }

    // Virtual method for C ABI access and custom callback
    void create() {
        if (qcalendarwidget_create_isbase) {
            qcalendarwidget_create_isbase = false;
            QCalendarWidget::create();
        } else if (qcalendarwidget_create_callback != nullptr) {
            qcalendarwidget_create_callback();
        } else {
            QCalendarWidget::create();
        }
    }

    // Virtual method for C ABI access and custom callback
    void destroy() {
        if (qcalendarwidget_destroy_isbase) {
            qcalendarwidget_destroy_isbase = false;
            QCalendarWidget::destroy();
        } else if (qcalendarwidget_destroy_callback != nullptr) {
            qcalendarwidget_destroy_callback();
        } else {
            QCalendarWidget::destroy();
        }
    }

    // Virtual method for C ABI access and custom callback
    bool focusNextChild() {
        if (qcalendarwidget_focusnextchild_isbase) {
            qcalendarwidget_focusnextchild_isbase = false;
            return QCalendarWidget::focusNextChild();
        } else if (qcalendarwidget_focusnextchild_callback != nullptr) {
            bool callback_ret = qcalendarwidget_focusnextchild_callback();
            return callback_ret;
        } else {
            return QCalendarWidget::focusNextChild();
        }
    }

    // Virtual method for C ABI access and custom callback
    bool focusPreviousChild() {
        if (qcalendarwidget_focuspreviouschild_isbase) {
            qcalendarwidget_focuspreviouschild_isbase = false;
            return QCalendarWidget::focusPreviousChild();
        } else if (qcalendarwidget_focuspreviouschild_callback != nullptr) {
            bool callback_ret = qcalendarwidget_focuspreviouschild_callback();
            return callback_ret;
        } else {
            return QCalendarWidget::focusPreviousChild();
        }
    }

    // Virtual method for C ABI access and custom callback
    QObject* sender() const {
        if (qcalendarwidget_sender_isbase) {
            qcalendarwidget_sender_isbase = false;
            return QCalendarWidget::sender();
        } else if (qcalendarwidget_sender_callback != nullptr) {
            QObject* callback_ret = qcalendarwidget_sender_callback();
            return callback_ret;
        } else {
            return QCalendarWidget::sender();
        }
    }

    // Virtual method for C ABI access and custom callback
    int senderSignalIndex() const {
        if (qcalendarwidget_sendersignalindex_isbase) {
            qcalendarwidget_sendersignalindex_isbase = false;
            return QCalendarWidget::senderSignalIndex();
        } else if (qcalendarwidget_sendersignalindex_callback != nullptr) {
            int callback_ret = qcalendarwidget_sendersignalindex_callback();
            return static_cast<int>(callback_ret);
        } else {
            return QCalendarWidget::senderSignalIndex();
        }
    }

    // Virtual method for C ABI access and custom callback
    int receivers(const char* signal) const {
        if (qcalendarwidget_receivers_isbase) {
            qcalendarwidget_receivers_isbase = false;
            return QCalendarWidget::receivers(signal);
        } else if (qcalendarwidget_receivers_callback != nullptr) {
            const char* cbval1 = (const char*)signal;

            int callback_ret = qcalendarwidget_receivers_callback(this, cbval1);
            return static_cast<int>(callback_ret);
        } else {
            return QCalendarWidget::receivers(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    bool isSignalConnected(const QMetaMethod& signal) const {
        if (qcalendarwidget_issignalconnected_isbase) {
            qcalendarwidget_issignalconnected_isbase = false;
            return QCalendarWidget::isSignalConnected(signal);
        } else if (qcalendarwidget_issignalconnected_callback != nullptr) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            bool callback_ret = qcalendarwidget_issignalconnected_callback(this, cbval1);
            return callback_ret;
        } else {
            return QCalendarWidget::isSignalConnected(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    double getDecodedMetricF(QPaintDevice::PaintDeviceMetric metricA, QPaintDevice::PaintDeviceMetric metricB) const {
        if (qcalendarwidget_getdecodedmetricf_isbase) {
            qcalendarwidget_getdecodedmetricf_isbase = false;
            return QCalendarWidget::getDecodedMetricF(metricA, metricB);
        } else if (qcalendarwidget_getdecodedmetricf_callback != nullptr) {
            int cbval1 = static_cast<int>(metricA);
            int cbval2 = static_cast<int>(metricB);

            double callback_ret = qcalendarwidget_getdecodedmetricf_callback(this, cbval1, cbval2);
            return static_cast<double>(callback_ret);
        } else {
            return QCalendarWidget::getDecodedMetricF(metricA, metricB);
        }
    }

    // Friend functions
    friend bool QCalendarWidget_Event(QCalendarWidget* self, QEvent* event);
    friend bool QCalendarWidget_QBaseEvent(QCalendarWidget* self, QEvent* event);
    friend bool QCalendarWidget_EventFilter(QCalendarWidget* self, QObject* watched, QEvent* event);
    friend bool QCalendarWidget_QBaseEventFilter(QCalendarWidget* self, QObject* watched, QEvent* event);
    friend void QCalendarWidget_MousePressEvent(QCalendarWidget* self, QMouseEvent* event);
    friend void QCalendarWidget_QBaseMousePressEvent(QCalendarWidget* self, QMouseEvent* event);
    friend void QCalendarWidget_ResizeEvent(QCalendarWidget* self, QResizeEvent* event);
    friend void QCalendarWidget_QBaseResizeEvent(QCalendarWidget* self, QResizeEvent* event);
    friend void QCalendarWidget_KeyPressEvent(QCalendarWidget* self, QKeyEvent* event);
    friend void QCalendarWidget_QBaseKeyPressEvent(QCalendarWidget* self, QKeyEvent* event);
    friend void QCalendarWidget_PaintCell(const QCalendarWidget* self, QPainter* painter, const QRect* rect, QDate* date);
    friend void QCalendarWidget_QBasePaintCell(const QCalendarWidget* self, QPainter* painter, const QRect* rect, QDate* date);
    friend void QCalendarWidget_MouseReleaseEvent(QCalendarWidget* self, QMouseEvent* event);
    friend void QCalendarWidget_QBaseMouseReleaseEvent(QCalendarWidget* self, QMouseEvent* event);
    friend void QCalendarWidget_MouseDoubleClickEvent(QCalendarWidget* self, QMouseEvent* event);
    friend void QCalendarWidget_QBaseMouseDoubleClickEvent(QCalendarWidget* self, QMouseEvent* event);
    friend void QCalendarWidget_MouseMoveEvent(QCalendarWidget* self, QMouseEvent* event);
    friend void QCalendarWidget_QBaseMouseMoveEvent(QCalendarWidget* self, QMouseEvent* event);
    friend void QCalendarWidget_WheelEvent(QCalendarWidget* self, QWheelEvent* event);
    friend void QCalendarWidget_QBaseWheelEvent(QCalendarWidget* self, QWheelEvent* event);
    friend void QCalendarWidget_KeyReleaseEvent(QCalendarWidget* self, QKeyEvent* event);
    friend void QCalendarWidget_QBaseKeyReleaseEvent(QCalendarWidget* self, QKeyEvent* event);
    friend void QCalendarWidget_FocusInEvent(QCalendarWidget* self, QFocusEvent* event);
    friend void QCalendarWidget_QBaseFocusInEvent(QCalendarWidget* self, QFocusEvent* event);
    friend void QCalendarWidget_FocusOutEvent(QCalendarWidget* self, QFocusEvent* event);
    friend void QCalendarWidget_QBaseFocusOutEvent(QCalendarWidget* self, QFocusEvent* event);
    friend void QCalendarWidget_EnterEvent(QCalendarWidget* self, QEnterEvent* event);
    friend void QCalendarWidget_QBaseEnterEvent(QCalendarWidget* self, QEnterEvent* event);
    friend void QCalendarWidget_LeaveEvent(QCalendarWidget* self, QEvent* event);
    friend void QCalendarWidget_QBaseLeaveEvent(QCalendarWidget* self, QEvent* event);
    friend void QCalendarWidget_PaintEvent(QCalendarWidget* self, QPaintEvent* event);
    friend void QCalendarWidget_QBasePaintEvent(QCalendarWidget* self, QPaintEvent* event);
    friend void QCalendarWidget_MoveEvent(QCalendarWidget* self, QMoveEvent* event);
    friend void QCalendarWidget_QBaseMoveEvent(QCalendarWidget* self, QMoveEvent* event);
    friend void QCalendarWidget_CloseEvent(QCalendarWidget* self, QCloseEvent* event);
    friend void QCalendarWidget_QBaseCloseEvent(QCalendarWidget* self, QCloseEvent* event);
    friend void QCalendarWidget_ContextMenuEvent(QCalendarWidget* self, QContextMenuEvent* event);
    friend void QCalendarWidget_QBaseContextMenuEvent(QCalendarWidget* self, QContextMenuEvent* event);
    friend void QCalendarWidget_TabletEvent(QCalendarWidget* self, QTabletEvent* event);
    friend void QCalendarWidget_QBaseTabletEvent(QCalendarWidget* self, QTabletEvent* event);
    friend void QCalendarWidget_ActionEvent(QCalendarWidget* self, QActionEvent* event);
    friend void QCalendarWidget_QBaseActionEvent(QCalendarWidget* self, QActionEvent* event);
    friend void QCalendarWidget_DragEnterEvent(QCalendarWidget* self, QDragEnterEvent* event);
    friend void QCalendarWidget_QBaseDragEnterEvent(QCalendarWidget* self, QDragEnterEvent* event);
    friend void QCalendarWidget_DragMoveEvent(QCalendarWidget* self, QDragMoveEvent* event);
    friend void QCalendarWidget_QBaseDragMoveEvent(QCalendarWidget* self, QDragMoveEvent* event);
    friend void QCalendarWidget_DragLeaveEvent(QCalendarWidget* self, QDragLeaveEvent* event);
    friend void QCalendarWidget_QBaseDragLeaveEvent(QCalendarWidget* self, QDragLeaveEvent* event);
    friend void QCalendarWidget_DropEvent(QCalendarWidget* self, QDropEvent* event);
    friend void QCalendarWidget_QBaseDropEvent(QCalendarWidget* self, QDropEvent* event);
    friend void QCalendarWidget_ShowEvent(QCalendarWidget* self, QShowEvent* event);
    friend void QCalendarWidget_QBaseShowEvent(QCalendarWidget* self, QShowEvent* event);
    friend void QCalendarWidget_HideEvent(QCalendarWidget* self, QHideEvent* event);
    friend void QCalendarWidget_QBaseHideEvent(QCalendarWidget* self, QHideEvent* event);
    friend bool QCalendarWidget_NativeEvent(QCalendarWidget* self, const libqt_string eventType, void* message, intptr_t* result);
    friend bool QCalendarWidget_QBaseNativeEvent(QCalendarWidget* self, const libqt_string eventType, void* message, intptr_t* result);
    friend void QCalendarWidget_ChangeEvent(QCalendarWidget* self, QEvent* param1);
    friend void QCalendarWidget_QBaseChangeEvent(QCalendarWidget* self, QEvent* param1);
    friend int QCalendarWidget_Metric(const QCalendarWidget* self, int param1);
    friend int QCalendarWidget_QBaseMetric(const QCalendarWidget* self, int param1);
    friend void QCalendarWidget_InitPainter(const QCalendarWidget* self, QPainter* painter);
    friend void QCalendarWidget_QBaseInitPainter(const QCalendarWidget* self, QPainter* painter);
    friend QPaintDevice* QCalendarWidget_Redirected(const QCalendarWidget* self, QPoint* offset);
    friend QPaintDevice* QCalendarWidget_QBaseRedirected(const QCalendarWidget* self, QPoint* offset);
    friend QPainter* QCalendarWidget_SharedPainter(const QCalendarWidget* self);
    friend QPainter* QCalendarWidget_QBaseSharedPainter(const QCalendarWidget* self);
    friend void QCalendarWidget_InputMethodEvent(QCalendarWidget* self, QInputMethodEvent* param1);
    friend void QCalendarWidget_QBaseInputMethodEvent(QCalendarWidget* self, QInputMethodEvent* param1);
    friend bool QCalendarWidget_FocusNextPrevChild(QCalendarWidget* self, bool next);
    friend bool QCalendarWidget_QBaseFocusNextPrevChild(QCalendarWidget* self, bool next);
    friend void QCalendarWidget_TimerEvent(QCalendarWidget* self, QTimerEvent* event);
    friend void QCalendarWidget_QBaseTimerEvent(QCalendarWidget* self, QTimerEvent* event);
    friend void QCalendarWidget_ChildEvent(QCalendarWidget* self, QChildEvent* event);
    friend void QCalendarWidget_QBaseChildEvent(QCalendarWidget* self, QChildEvent* event);
    friend void QCalendarWidget_CustomEvent(QCalendarWidget* self, QEvent* event);
    friend void QCalendarWidget_QBaseCustomEvent(QCalendarWidget* self, QEvent* event);
    friend void QCalendarWidget_ConnectNotify(QCalendarWidget* self, const QMetaMethod* signal);
    friend void QCalendarWidget_QBaseConnectNotify(QCalendarWidget* self, const QMetaMethod* signal);
    friend void QCalendarWidget_DisconnectNotify(QCalendarWidget* self, const QMetaMethod* signal);
    friend void QCalendarWidget_QBaseDisconnectNotify(QCalendarWidget* self, const QMetaMethod* signal);
    friend void QCalendarWidget_UpdateCell(QCalendarWidget* self, QDate* date);
    friend void QCalendarWidget_QBaseUpdateCell(QCalendarWidget* self, QDate* date);
    friend void QCalendarWidget_UpdateCells(QCalendarWidget* self);
    friend void QCalendarWidget_QBaseUpdateCells(QCalendarWidget* self);
    friend void QCalendarWidget_UpdateMicroFocus(QCalendarWidget* self);
    friend void QCalendarWidget_QBaseUpdateMicroFocus(QCalendarWidget* self);
    friend void QCalendarWidget_Create(QCalendarWidget* self);
    friend void QCalendarWidget_QBaseCreate(QCalendarWidget* self);
    friend void QCalendarWidget_Destroy(QCalendarWidget* self);
    friend void QCalendarWidget_QBaseDestroy(QCalendarWidget* self);
    friend bool QCalendarWidget_FocusNextChild(QCalendarWidget* self);
    friend bool QCalendarWidget_QBaseFocusNextChild(QCalendarWidget* self);
    friend bool QCalendarWidget_FocusPreviousChild(QCalendarWidget* self);
    friend bool QCalendarWidget_QBaseFocusPreviousChild(QCalendarWidget* self);
    friend QObject* QCalendarWidget_Sender(const QCalendarWidget* self);
    friend QObject* QCalendarWidget_QBaseSender(const QCalendarWidget* self);
    friend int QCalendarWidget_SenderSignalIndex(const QCalendarWidget* self);
    friend int QCalendarWidget_QBaseSenderSignalIndex(const QCalendarWidget* self);
    friend int QCalendarWidget_Receivers(const QCalendarWidget* self, const char* signal);
    friend int QCalendarWidget_QBaseReceivers(const QCalendarWidget* self, const char* signal);
    friend bool QCalendarWidget_IsSignalConnected(const QCalendarWidget* self, const QMetaMethod* signal);
    friend bool QCalendarWidget_QBaseIsSignalConnected(const QCalendarWidget* self, const QMetaMethod* signal);
    friend double QCalendarWidget_GetDecodedMetricF(const QCalendarWidget* self, int metricA, int metricB);
    friend double QCalendarWidget_QBaseGetDecodedMetricF(const QCalendarWidget* self, int metricA, int metricB);
};

#endif
