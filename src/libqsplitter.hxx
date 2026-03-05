#pragma once
#ifndef SRCC_LIBVIRTUALQSPLITTER_H
#define SRCC_LIBVIRTUALQSPLITTER_H

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"

// This class is a subclass of QSplitter so that we can call protected methods
class VirtualQSplitter final : public QSplitter {

  public:
    // Virtual class boolean flag
    bool isVirtualQSplitter = true;

    // Virtual class public types (including callbacks)
    using QSplitter_MetaObject_Callback = QMetaObject* (*)();
    using QSplitter_Metacast_Callback = void* (*)(QSplitter*, const char*);
    using QSplitter_Metacall_Callback = int (*)(QSplitter*, int, int, void**);
    using QSplitter_SizeHint_Callback = QSize* (*)();
    using QSplitter_MinimumSizeHint_Callback = QSize* (*)();
    using QSplitter_CreateHandle_Callback = QSplitterHandle* (*)();
    using QSplitter_ChildEvent_Callback = void (*)(QSplitter*, QChildEvent*);
    using QSplitter_Event_Callback = bool (*)(QSplitter*, QEvent*);
    using QSplitter_ResizeEvent_Callback = void (*)(QSplitter*, QResizeEvent*);
    using QSplitter_ChangeEvent_Callback = void (*)(QSplitter*, QEvent*);
    using QSplitter_PaintEvent_Callback = void (*)(QSplitter*, QPaintEvent*);
    using QSplitter_InitStyleOption_Callback = void (*)(const QSplitter*, QStyleOptionFrame*);
    using QSplitter_DevType_Callback = int (*)();
    using QSplitter_SetVisible_Callback = void (*)(QSplitter*, bool);
    using QSplitter_HeightForWidth_Callback = int (*)(const QSplitter*, int);
    using QSplitter_HasHeightForWidth_Callback = bool (*)();
    using QSplitter_PaintEngine_Callback = QPaintEngine* (*)();
    using QSplitter_MousePressEvent_Callback = void (*)(QSplitter*, QMouseEvent*);
    using QSplitter_MouseReleaseEvent_Callback = void (*)(QSplitter*, QMouseEvent*);
    using QSplitter_MouseDoubleClickEvent_Callback = void (*)(QSplitter*, QMouseEvent*);
    using QSplitter_MouseMoveEvent_Callback = void (*)(QSplitter*, QMouseEvent*);
    using QSplitter_WheelEvent_Callback = void (*)(QSplitter*, QWheelEvent*);
    using QSplitter_KeyPressEvent_Callback = void (*)(QSplitter*, QKeyEvent*);
    using QSplitter_KeyReleaseEvent_Callback = void (*)(QSplitter*, QKeyEvent*);
    using QSplitter_FocusInEvent_Callback = void (*)(QSplitter*, QFocusEvent*);
    using QSplitter_FocusOutEvent_Callback = void (*)(QSplitter*, QFocusEvent*);
    using QSplitter_EnterEvent_Callback = void (*)(QSplitter*, QEnterEvent*);
    using QSplitter_LeaveEvent_Callback = void (*)(QSplitter*, QEvent*);
    using QSplitter_MoveEvent_Callback = void (*)(QSplitter*, QMoveEvent*);
    using QSplitter_CloseEvent_Callback = void (*)(QSplitter*, QCloseEvent*);
    using QSplitter_ContextMenuEvent_Callback = void (*)(QSplitter*, QContextMenuEvent*);
    using QSplitter_TabletEvent_Callback = void (*)(QSplitter*, QTabletEvent*);
    using QSplitter_ActionEvent_Callback = void (*)(QSplitter*, QActionEvent*);
    using QSplitter_DragEnterEvent_Callback = void (*)(QSplitter*, QDragEnterEvent*);
    using QSplitter_DragMoveEvent_Callback = void (*)(QSplitter*, QDragMoveEvent*);
    using QSplitter_DragLeaveEvent_Callback = void (*)(QSplitter*, QDragLeaveEvent*);
    using QSplitter_DropEvent_Callback = void (*)(QSplitter*, QDropEvent*);
    using QSplitter_ShowEvent_Callback = void (*)(QSplitter*, QShowEvent*);
    using QSplitter_HideEvent_Callback = void (*)(QSplitter*, QHideEvent*);
    using QSplitter_NativeEvent_Callback = bool (*)(QSplitter*, libqt_string, void*, intptr_t*);
    using QSplitter_Metric_Callback = int (*)(const QSplitter*, int);
    using QSplitter_InitPainter_Callback = void (*)(const QSplitter*, QPainter*);
    using QSplitter_Redirected_Callback = QPaintDevice* (*)(const QSplitter*, QPoint*);
    using QSplitter_SharedPainter_Callback = QPainter* (*)();
    using QSplitter_InputMethodEvent_Callback = void (*)(QSplitter*, QInputMethodEvent*);
    using QSplitter_InputMethodQuery_Callback = QVariant* (*)(const QSplitter*, int);
    using QSplitter_FocusNextPrevChild_Callback = bool (*)(QSplitter*, bool);
    using QSplitter_EventFilter_Callback = bool (*)(QSplitter*, QObject*, QEvent*);
    using QSplitter_TimerEvent_Callback = void (*)(QSplitter*, QTimerEvent*);
    using QSplitter_CustomEvent_Callback = void (*)(QSplitter*, QEvent*);
    using QSplitter_ConnectNotify_Callback = void (*)(QSplitter*, QMetaMethod*);
    using QSplitter_DisconnectNotify_Callback = void (*)(QSplitter*, QMetaMethod*);
    using QSplitter_MoveSplitter_Callback = void (*)(QSplitter*, int, int);
    using QSplitter_SetRubberBand_Callback = void (*)(QSplitter*, int);
    using QSplitter_ClosestLegalPosition_Callback = int (*)(QSplitter*, int, int);
    using QSplitter_DrawFrame_Callback = void (*)(QSplitter*, QPainter*);
    using QSplitter_UpdateMicroFocus_Callback = void (*)();
    using QSplitter_Create_Callback = void (*)();
    using QSplitter_Destroy_Callback = void (*)();
    using QSplitter_FocusNextChild_Callback = bool (*)();
    using QSplitter_FocusPreviousChild_Callback = bool (*)();
    using QSplitter_Sender_Callback = QObject* (*)();
    using QSplitter_SenderSignalIndex_Callback = int (*)();
    using QSplitter_Receivers_Callback = int (*)(const QSplitter*, const char*);
    using QSplitter_IsSignalConnected_Callback = bool (*)(const QSplitter*, QMetaMethod*);
    using QSplitter_GetDecodedMetricF_Callback = double (*)(const QSplitter*, int, int);

  protected:
    // Instance callback storage
    QSplitter_MetaObject_Callback qsplitter_metaobject_callback = nullptr;
    QSplitter_Metacast_Callback qsplitter_metacast_callback = nullptr;
    QSplitter_Metacall_Callback qsplitter_metacall_callback = nullptr;
    QSplitter_SizeHint_Callback qsplitter_sizehint_callback = nullptr;
    QSplitter_MinimumSizeHint_Callback qsplitter_minimumsizehint_callback = nullptr;
    QSplitter_CreateHandle_Callback qsplitter_createhandle_callback = nullptr;
    QSplitter_ChildEvent_Callback qsplitter_childevent_callback = nullptr;
    QSplitter_Event_Callback qsplitter_event_callback = nullptr;
    QSplitter_ResizeEvent_Callback qsplitter_resizeevent_callback = nullptr;
    QSplitter_ChangeEvent_Callback qsplitter_changeevent_callback = nullptr;
    QSplitter_PaintEvent_Callback qsplitter_paintevent_callback = nullptr;
    QSplitter_InitStyleOption_Callback qsplitter_initstyleoption_callback = nullptr;
    QSplitter_DevType_Callback qsplitter_devtype_callback = nullptr;
    QSplitter_SetVisible_Callback qsplitter_setvisible_callback = nullptr;
    QSplitter_HeightForWidth_Callback qsplitter_heightforwidth_callback = nullptr;
    QSplitter_HasHeightForWidth_Callback qsplitter_hasheightforwidth_callback = nullptr;
    QSplitter_PaintEngine_Callback qsplitter_paintengine_callback = nullptr;
    QSplitter_MousePressEvent_Callback qsplitter_mousepressevent_callback = nullptr;
    QSplitter_MouseReleaseEvent_Callback qsplitter_mousereleaseevent_callback = nullptr;
    QSplitter_MouseDoubleClickEvent_Callback qsplitter_mousedoubleclickevent_callback = nullptr;
    QSplitter_MouseMoveEvent_Callback qsplitter_mousemoveevent_callback = nullptr;
    QSplitter_WheelEvent_Callback qsplitter_wheelevent_callback = nullptr;
    QSplitter_KeyPressEvent_Callback qsplitter_keypressevent_callback = nullptr;
    QSplitter_KeyReleaseEvent_Callback qsplitter_keyreleaseevent_callback = nullptr;
    QSplitter_FocusInEvent_Callback qsplitter_focusinevent_callback = nullptr;
    QSplitter_FocusOutEvent_Callback qsplitter_focusoutevent_callback = nullptr;
    QSplitter_EnterEvent_Callback qsplitter_enterevent_callback = nullptr;
    QSplitter_LeaveEvent_Callback qsplitter_leaveevent_callback = nullptr;
    QSplitter_MoveEvent_Callback qsplitter_moveevent_callback = nullptr;
    QSplitter_CloseEvent_Callback qsplitter_closeevent_callback = nullptr;
    QSplitter_ContextMenuEvent_Callback qsplitter_contextmenuevent_callback = nullptr;
    QSplitter_TabletEvent_Callback qsplitter_tabletevent_callback = nullptr;
    QSplitter_ActionEvent_Callback qsplitter_actionevent_callback = nullptr;
    QSplitter_DragEnterEvent_Callback qsplitter_dragenterevent_callback = nullptr;
    QSplitter_DragMoveEvent_Callback qsplitter_dragmoveevent_callback = nullptr;
    QSplitter_DragLeaveEvent_Callback qsplitter_dragleaveevent_callback = nullptr;
    QSplitter_DropEvent_Callback qsplitter_dropevent_callback = nullptr;
    QSplitter_ShowEvent_Callback qsplitter_showevent_callback = nullptr;
    QSplitter_HideEvent_Callback qsplitter_hideevent_callback = nullptr;
    QSplitter_NativeEvent_Callback qsplitter_nativeevent_callback = nullptr;
    QSplitter_Metric_Callback qsplitter_metric_callback = nullptr;
    QSplitter_InitPainter_Callback qsplitter_initpainter_callback = nullptr;
    QSplitter_Redirected_Callback qsplitter_redirected_callback = nullptr;
    QSplitter_SharedPainter_Callback qsplitter_sharedpainter_callback = nullptr;
    QSplitter_InputMethodEvent_Callback qsplitter_inputmethodevent_callback = nullptr;
    QSplitter_InputMethodQuery_Callback qsplitter_inputmethodquery_callback = nullptr;
    QSplitter_FocusNextPrevChild_Callback qsplitter_focusnextprevchild_callback = nullptr;
    QSplitter_EventFilter_Callback qsplitter_eventfilter_callback = nullptr;
    QSplitter_TimerEvent_Callback qsplitter_timerevent_callback = nullptr;
    QSplitter_CustomEvent_Callback qsplitter_customevent_callback = nullptr;
    QSplitter_ConnectNotify_Callback qsplitter_connectnotify_callback = nullptr;
    QSplitter_DisconnectNotify_Callback qsplitter_disconnectnotify_callback = nullptr;
    QSplitter_MoveSplitter_Callback qsplitter_movesplitter_callback = nullptr;
    QSplitter_SetRubberBand_Callback qsplitter_setrubberband_callback = nullptr;
    QSplitter_ClosestLegalPosition_Callback qsplitter_closestlegalposition_callback = nullptr;
    QSplitter_DrawFrame_Callback qsplitter_drawframe_callback = nullptr;
    QSplitter_UpdateMicroFocus_Callback qsplitter_updatemicrofocus_callback = nullptr;
    QSplitter_Create_Callback qsplitter_create_callback = nullptr;
    QSplitter_Destroy_Callback qsplitter_destroy_callback = nullptr;
    QSplitter_FocusNextChild_Callback qsplitter_focusnextchild_callback = nullptr;
    QSplitter_FocusPreviousChild_Callback qsplitter_focuspreviouschild_callback = nullptr;
    QSplitter_Sender_Callback qsplitter_sender_callback = nullptr;
    QSplitter_SenderSignalIndex_Callback qsplitter_sendersignalindex_callback = nullptr;
    QSplitter_Receivers_Callback qsplitter_receivers_callback = nullptr;
    QSplitter_IsSignalConnected_Callback qsplitter_issignalconnected_callback = nullptr;
    QSplitter_GetDecodedMetricF_Callback qsplitter_getdecodedmetricf_callback = nullptr;

    // Instance base flags
    mutable bool qsplitter_metaobject_isbase = false;
    mutable bool qsplitter_metacast_isbase = false;
    mutable bool qsplitter_metacall_isbase = false;
    mutable bool qsplitter_sizehint_isbase = false;
    mutable bool qsplitter_minimumsizehint_isbase = false;
    mutable bool qsplitter_createhandle_isbase = false;
    mutable bool qsplitter_childevent_isbase = false;
    mutable bool qsplitter_event_isbase = false;
    mutable bool qsplitter_resizeevent_isbase = false;
    mutable bool qsplitter_changeevent_isbase = false;
    mutable bool qsplitter_paintevent_isbase = false;
    mutable bool qsplitter_initstyleoption_isbase = false;
    mutable bool qsplitter_devtype_isbase = false;
    mutable bool qsplitter_setvisible_isbase = false;
    mutable bool qsplitter_heightforwidth_isbase = false;
    mutable bool qsplitter_hasheightforwidth_isbase = false;
    mutable bool qsplitter_paintengine_isbase = false;
    mutable bool qsplitter_mousepressevent_isbase = false;
    mutable bool qsplitter_mousereleaseevent_isbase = false;
    mutable bool qsplitter_mousedoubleclickevent_isbase = false;
    mutable bool qsplitter_mousemoveevent_isbase = false;
    mutable bool qsplitter_wheelevent_isbase = false;
    mutable bool qsplitter_keypressevent_isbase = false;
    mutable bool qsplitter_keyreleaseevent_isbase = false;
    mutable bool qsplitter_focusinevent_isbase = false;
    mutable bool qsplitter_focusoutevent_isbase = false;
    mutable bool qsplitter_enterevent_isbase = false;
    mutable bool qsplitter_leaveevent_isbase = false;
    mutable bool qsplitter_moveevent_isbase = false;
    mutable bool qsplitter_closeevent_isbase = false;
    mutable bool qsplitter_contextmenuevent_isbase = false;
    mutable bool qsplitter_tabletevent_isbase = false;
    mutable bool qsplitter_actionevent_isbase = false;
    mutable bool qsplitter_dragenterevent_isbase = false;
    mutable bool qsplitter_dragmoveevent_isbase = false;
    mutable bool qsplitter_dragleaveevent_isbase = false;
    mutable bool qsplitter_dropevent_isbase = false;
    mutable bool qsplitter_showevent_isbase = false;
    mutable bool qsplitter_hideevent_isbase = false;
    mutable bool qsplitter_nativeevent_isbase = false;
    mutable bool qsplitter_metric_isbase = false;
    mutable bool qsplitter_initpainter_isbase = false;
    mutable bool qsplitter_redirected_isbase = false;
    mutable bool qsplitter_sharedpainter_isbase = false;
    mutable bool qsplitter_inputmethodevent_isbase = false;
    mutable bool qsplitter_inputmethodquery_isbase = false;
    mutable bool qsplitter_focusnextprevchild_isbase = false;
    mutable bool qsplitter_eventfilter_isbase = false;
    mutable bool qsplitter_timerevent_isbase = false;
    mutable bool qsplitter_customevent_isbase = false;
    mutable bool qsplitter_connectnotify_isbase = false;
    mutable bool qsplitter_disconnectnotify_isbase = false;
    mutable bool qsplitter_movesplitter_isbase = false;
    mutable bool qsplitter_setrubberband_isbase = false;
    mutable bool qsplitter_closestlegalposition_isbase = false;
    mutable bool qsplitter_drawframe_isbase = false;
    mutable bool qsplitter_updatemicrofocus_isbase = false;
    mutable bool qsplitter_create_isbase = false;
    mutable bool qsplitter_destroy_isbase = false;
    mutable bool qsplitter_focusnextchild_isbase = false;
    mutable bool qsplitter_focuspreviouschild_isbase = false;
    mutable bool qsplitter_sender_isbase = false;
    mutable bool qsplitter_sendersignalindex_isbase = false;
    mutable bool qsplitter_receivers_isbase = false;
    mutable bool qsplitter_issignalconnected_isbase = false;
    mutable bool qsplitter_getdecodedmetricf_isbase = false;

  public:
    VirtualQSplitter(QWidget* parent) : QSplitter(parent) {};
    VirtualQSplitter() : QSplitter() {};
    VirtualQSplitter(Qt::Orientation param1) : QSplitter(param1) {};
    VirtualQSplitter(Qt::Orientation param1, QWidget* parent) : QSplitter(param1, parent) {};

    // Callback setters
    inline void setQSplitter_MetaObject_Callback(QSplitter_MetaObject_Callback cb) { qsplitter_metaobject_callback = cb; }
    inline void setQSplitter_Metacast_Callback(QSplitter_Metacast_Callback cb) { qsplitter_metacast_callback = cb; }
    inline void setQSplitter_Metacall_Callback(QSplitter_Metacall_Callback cb) { qsplitter_metacall_callback = cb; }
    inline void setQSplitter_SizeHint_Callback(QSplitter_SizeHint_Callback cb) { qsplitter_sizehint_callback = cb; }
    inline void setQSplitter_MinimumSizeHint_Callback(QSplitter_MinimumSizeHint_Callback cb) { qsplitter_minimumsizehint_callback = cb; }
    inline void setQSplitter_CreateHandle_Callback(QSplitter_CreateHandle_Callback cb) { qsplitter_createhandle_callback = cb; }
    inline void setQSplitter_ChildEvent_Callback(QSplitter_ChildEvent_Callback cb) { qsplitter_childevent_callback = cb; }
    inline void setQSplitter_Event_Callback(QSplitter_Event_Callback cb) { qsplitter_event_callback = cb; }
    inline void setQSplitter_ResizeEvent_Callback(QSplitter_ResizeEvent_Callback cb) { qsplitter_resizeevent_callback = cb; }
    inline void setQSplitter_ChangeEvent_Callback(QSplitter_ChangeEvent_Callback cb) { qsplitter_changeevent_callback = cb; }
    inline void setQSplitter_PaintEvent_Callback(QSplitter_PaintEvent_Callback cb) { qsplitter_paintevent_callback = cb; }
    inline void setQSplitter_InitStyleOption_Callback(QSplitter_InitStyleOption_Callback cb) { qsplitter_initstyleoption_callback = cb; }
    inline void setQSplitter_DevType_Callback(QSplitter_DevType_Callback cb) { qsplitter_devtype_callback = cb; }
    inline void setQSplitter_SetVisible_Callback(QSplitter_SetVisible_Callback cb) { qsplitter_setvisible_callback = cb; }
    inline void setQSplitter_HeightForWidth_Callback(QSplitter_HeightForWidth_Callback cb) { qsplitter_heightforwidth_callback = cb; }
    inline void setQSplitter_HasHeightForWidth_Callback(QSplitter_HasHeightForWidth_Callback cb) { qsplitter_hasheightforwidth_callback = cb; }
    inline void setQSplitter_PaintEngine_Callback(QSplitter_PaintEngine_Callback cb) { qsplitter_paintengine_callback = cb; }
    inline void setQSplitter_MousePressEvent_Callback(QSplitter_MousePressEvent_Callback cb) { qsplitter_mousepressevent_callback = cb; }
    inline void setQSplitter_MouseReleaseEvent_Callback(QSplitter_MouseReleaseEvent_Callback cb) { qsplitter_mousereleaseevent_callback = cb; }
    inline void setQSplitter_MouseDoubleClickEvent_Callback(QSplitter_MouseDoubleClickEvent_Callback cb) { qsplitter_mousedoubleclickevent_callback = cb; }
    inline void setQSplitter_MouseMoveEvent_Callback(QSplitter_MouseMoveEvent_Callback cb) { qsplitter_mousemoveevent_callback = cb; }
    inline void setQSplitter_WheelEvent_Callback(QSplitter_WheelEvent_Callback cb) { qsplitter_wheelevent_callback = cb; }
    inline void setQSplitter_KeyPressEvent_Callback(QSplitter_KeyPressEvent_Callback cb) { qsplitter_keypressevent_callback = cb; }
    inline void setQSplitter_KeyReleaseEvent_Callback(QSplitter_KeyReleaseEvent_Callback cb) { qsplitter_keyreleaseevent_callback = cb; }
    inline void setQSplitter_FocusInEvent_Callback(QSplitter_FocusInEvent_Callback cb) { qsplitter_focusinevent_callback = cb; }
    inline void setQSplitter_FocusOutEvent_Callback(QSplitter_FocusOutEvent_Callback cb) { qsplitter_focusoutevent_callback = cb; }
    inline void setQSplitter_EnterEvent_Callback(QSplitter_EnterEvent_Callback cb) { qsplitter_enterevent_callback = cb; }
    inline void setQSplitter_LeaveEvent_Callback(QSplitter_LeaveEvent_Callback cb) { qsplitter_leaveevent_callback = cb; }
    inline void setQSplitter_MoveEvent_Callback(QSplitter_MoveEvent_Callback cb) { qsplitter_moveevent_callback = cb; }
    inline void setQSplitter_CloseEvent_Callback(QSplitter_CloseEvent_Callback cb) { qsplitter_closeevent_callback = cb; }
    inline void setQSplitter_ContextMenuEvent_Callback(QSplitter_ContextMenuEvent_Callback cb) { qsplitter_contextmenuevent_callback = cb; }
    inline void setQSplitter_TabletEvent_Callback(QSplitter_TabletEvent_Callback cb) { qsplitter_tabletevent_callback = cb; }
    inline void setQSplitter_ActionEvent_Callback(QSplitter_ActionEvent_Callback cb) { qsplitter_actionevent_callback = cb; }
    inline void setQSplitter_DragEnterEvent_Callback(QSplitter_DragEnterEvent_Callback cb) { qsplitter_dragenterevent_callback = cb; }
    inline void setQSplitter_DragMoveEvent_Callback(QSplitter_DragMoveEvent_Callback cb) { qsplitter_dragmoveevent_callback = cb; }
    inline void setQSplitter_DragLeaveEvent_Callback(QSplitter_DragLeaveEvent_Callback cb) { qsplitter_dragleaveevent_callback = cb; }
    inline void setQSplitter_DropEvent_Callback(QSplitter_DropEvent_Callback cb) { qsplitter_dropevent_callback = cb; }
    inline void setQSplitter_ShowEvent_Callback(QSplitter_ShowEvent_Callback cb) { qsplitter_showevent_callback = cb; }
    inline void setQSplitter_HideEvent_Callback(QSplitter_HideEvent_Callback cb) { qsplitter_hideevent_callback = cb; }
    inline void setQSplitter_NativeEvent_Callback(QSplitter_NativeEvent_Callback cb) { qsplitter_nativeevent_callback = cb; }
    inline void setQSplitter_Metric_Callback(QSplitter_Metric_Callback cb) { qsplitter_metric_callback = cb; }
    inline void setQSplitter_InitPainter_Callback(QSplitter_InitPainter_Callback cb) { qsplitter_initpainter_callback = cb; }
    inline void setQSplitter_Redirected_Callback(QSplitter_Redirected_Callback cb) { qsplitter_redirected_callback = cb; }
    inline void setQSplitter_SharedPainter_Callback(QSplitter_SharedPainter_Callback cb) { qsplitter_sharedpainter_callback = cb; }
    inline void setQSplitter_InputMethodEvent_Callback(QSplitter_InputMethodEvent_Callback cb) { qsplitter_inputmethodevent_callback = cb; }
    inline void setQSplitter_InputMethodQuery_Callback(QSplitter_InputMethodQuery_Callback cb) { qsplitter_inputmethodquery_callback = cb; }
    inline void setQSplitter_FocusNextPrevChild_Callback(QSplitter_FocusNextPrevChild_Callback cb) { qsplitter_focusnextprevchild_callback = cb; }
    inline void setQSplitter_EventFilter_Callback(QSplitter_EventFilter_Callback cb) { qsplitter_eventfilter_callback = cb; }
    inline void setQSplitter_TimerEvent_Callback(QSplitter_TimerEvent_Callback cb) { qsplitter_timerevent_callback = cb; }
    inline void setQSplitter_CustomEvent_Callback(QSplitter_CustomEvent_Callback cb) { qsplitter_customevent_callback = cb; }
    inline void setQSplitter_ConnectNotify_Callback(QSplitter_ConnectNotify_Callback cb) { qsplitter_connectnotify_callback = cb; }
    inline void setQSplitter_DisconnectNotify_Callback(QSplitter_DisconnectNotify_Callback cb) { qsplitter_disconnectnotify_callback = cb; }
    inline void setQSplitter_MoveSplitter_Callback(QSplitter_MoveSplitter_Callback cb) { qsplitter_movesplitter_callback = cb; }
    inline void setQSplitter_SetRubberBand_Callback(QSplitter_SetRubberBand_Callback cb) { qsplitter_setrubberband_callback = cb; }
    inline void setQSplitter_ClosestLegalPosition_Callback(QSplitter_ClosestLegalPosition_Callback cb) { qsplitter_closestlegalposition_callback = cb; }
    inline void setQSplitter_DrawFrame_Callback(QSplitter_DrawFrame_Callback cb) { qsplitter_drawframe_callback = cb; }
    inline void setQSplitter_UpdateMicroFocus_Callback(QSplitter_UpdateMicroFocus_Callback cb) { qsplitter_updatemicrofocus_callback = cb; }
    inline void setQSplitter_Create_Callback(QSplitter_Create_Callback cb) { qsplitter_create_callback = cb; }
    inline void setQSplitter_Destroy_Callback(QSplitter_Destroy_Callback cb) { qsplitter_destroy_callback = cb; }
    inline void setQSplitter_FocusNextChild_Callback(QSplitter_FocusNextChild_Callback cb) { qsplitter_focusnextchild_callback = cb; }
    inline void setQSplitter_FocusPreviousChild_Callback(QSplitter_FocusPreviousChild_Callback cb) { qsplitter_focuspreviouschild_callback = cb; }
    inline void setQSplitter_Sender_Callback(QSplitter_Sender_Callback cb) { qsplitter_sender_callback = cb; }
    inline void setQSplitter_SenderSignalIndex_Callback(QSplitter_SenderSignalIndex_Callback cb) { qsplitter_sendersignalindex_callback = cb; }
    inline void setQSplitter_Receivers_Callback(QSplitter_Receivers_Callback cb) { qsplitter_receivers_callback = cb; }
    inline void setQSplitter_IsSignalConnected_Callback(QSplitter_IsSignalConnected_Callback cb) { qsplitter_issignalconnected_callback = cb; }
    inline void setQSplitter_GetDecodedMetricF_Callback(QSplitter_GetDecodedMetricF_Callback cb) { qsplitter_getdecodedmetricf_callback = cb; }

    // Base flag setters
    inline void setQSplitter_MetaObject_IsBase(bool value) const { qsplitter_metaobject_isbase = value; }
    inline void setQSplitter_Metacast_IsBase(bool value) const { qsplitter_metacast_isbase = value; }
    inline void setQSplitter_Metacall_IsBase(bool value) const { qsplitter_metacall_isbase = value; }
    inline void setQSplitter_SizeHint_IsBase(bool value) const { qsplitter_sizehint_isbase = value; }
    inline void setQSplitter_MinimumSizeHint_IsBase(bool value) const { qsplitter_minimumsizehint_isbase = value; }
    inline void setQSplitter_CreateHandle_IsBase(bool value) const { qsplitter_createhandle_isbase = value; }
    inline void setQSplitter_ChildEvent_IsBase(bool value) const { qsplitter_childevent_isbase = value; }
    inline void setQSplitter_Event_IsBase(bool value) const { qsplitter_event_isbase = value; }
    inline void setQSplitter_ResizeEvent_IsBase(bool value) const { qsplitter_resizeevent_isbase = value; }
    inline void setQSplitter_ChangeEvent_IsBase(bool value) const { qsplitter_changeevent_isbase = value; }
    inline void setQSplitter_PaintEvent_IsBase(bool value) const { qsplitter_paintevent_isbase = value; }
    inline void setQSplitter_InitStyleOption_IsBase(bool value) const { qsplitter_initstyleoption_isbase = value; }
    inline void setQSplitter_DevType_IsBase(bool value) const { qsplitter_devtype_isbase = value; }
    inline void setQSplitter_SetVisible_IsBase(bool value) const { qsplitter_setvisible_isbase = value; }
    inline void setQSplitter_HeightForWidth_IsBase(bool value) const { qsplitter_heightforwidth_isbase = value; }
    inline void setQSplitter_HasHeightForWidth_IsBase(bool value) const { qsplitter_hasheightforwidth_isbase = value; }
    inline void setQSplitter_PaintEngine_IsBase(bool value) const { qsplitter_paintengine_isbase = value; }
    inline void setQSplitter_MousePressEvent_IsBase(bool value) const { qsplitter_mousepressevent_isbase = value; }
    inline void setQSplitter_MouseReleaseEvent_IsBase(bool value) const { qsplitter_mousereleaseevent_isbase = value; }
    inline void setQSplitter_MouseDoubleClickEvent_IsBase(bool value) const { qsplitter_mousedoubleclickevent_isbase = value; }
    inline void setQSplitter_MouseMoveEvent_IsBase(bool value) const { qsplitter_mousemoveevent_isbase = value; }
    inline void setQSplitter_WheelEvent_IsBase(bool value) const { qsplitter_wheelevent_isbase = value; }
    inline void setQSplitter_KeyPressEvent_IsBase(bool value) const { qsplitter_keypressevent_isbase = value; }
    inline void setQSplitter_KeyReleaseEvent_IsBase(bool value) const { qsplitter_keyreleaseevent_isbase = value; }
    inline void setQSplitter_FocusInEvent_IsBase(bool value) const { qsplitter_focusinevent_isbase = value; }
    inline void setQSplitter_FocusOutEvent_IsBase(bool value) const { qsplitter_focusoutevent_isbase = value; }
    inline void setQSplitter_EnterEvent_IsBase(bool value) const { qsplitter_enterevent_isbase = value; }
    inline void setQSplitter_LeaveEvent_IsBase(bool value) const { qsplitter_leaveevent_isbase = value; }
    inline void setQSplitter_MoveEvent_IsBase(bool value) const { qsplitter_moveevent_isbase = value; }
    inline void setQSplitter_CloseEvent_IsBase(bool value) const { qsplitter_closeevent_isbase = value; }
    inline void setQSplitter_ContextMenuEvent_IsBase(bool value) const { qsplitter_contextmenuevent_isbase = value; }
    inline void setQSplitter_TabletEvent_IsBase(bool value) const { qsplitter_tabletevent_isbase = value; }
    inline void setQSplitter_ActionEvent_IsBase(bool value) const { qsplitter_actionevent_isbase = value; }
    inline void setQSplitter_DragEnterEvent_IsBase(bool value) const { qsplitter_dragenterevent_isbase = value; }
    inline void setQSplitter_DragMoveEvent_IsBase(bool value) const { qsplitter_dragmoveevent_isbase = value; }
    inline void setQSplitter_DragLeaveEvent_IsBase(bool value) const { qsplitter_dragleaveevent_isbase = value; }
    inline void setQSplitter_DropEvent_IsBase(bool value) const { qsplitter_dropevent_isbase = value; }
    inline void setQSplitter_ShowEvent_IsBase(bool value) const { qsplitter_showevent_isbase = value; }
    inline void setQSplitter_HideEvent_IsBase(bool value) const { qsplitter_hideevent_isbase = value; }
    inline void setQSplitter_NativeEvent_IsBase(bool value) const { qsplitter_nativeevent_isbase = value; }
    inline void setQSplitter_Metric_IsBase(bool value) const { qsplitter_metric_isbase = value; }
    inline void setQSplitter_InitPainter_IsBase(bool value) const { qsplitter_initpainter_isbase = value; }
    inline void setQSplitter_Redirected_IsBase(bool value) const { qsplitter_redirected_isbase = value; }
    inline void setQSplitter_SharedPainter_IsBase(bool value) const { qsplitter_sharedpainter_isbase = value; }
    inline void setQSplitter_InputMethodEvent_IsBase(bool value) const { qsplitter_inputmethodevent_isbase = value; }
    inline void setQSplitter_InputMethodQuery_IsBase(bool value) const { qsplitter_inputmethodquery_isbase = value; }
    inline void setQSplitter_FocusNextPrevChild_IsBase(bool value) const { qsplitter_focusnextprevchild_isbase = value; }
    inline void setQSplitter_EventFilter_IsBase(bool value) const { qsplitter_eventfilter_isbase = value; }
    inline void setQSplitter_TimerEvent_IsBase(bool value) const { qsplitter_timerevent_isbase = value; }
    inline void setQSplitter_CustomEvent_IsBase(bool value) const { qsplitter_customevent_isbase = value; }
    inline void setQSplitter_ConnectNotify_IsBase(bool value) const { qsplitter_connectnotify_isbase = value; }
    inline void setQSplitter_DisconnectNotify_IsBase(bool value) const { qsplitter_disconnectnotify_isbase = value; }
    inline void setQSplitter_MoveSplitter_IsBase(bool value) const { qsplitter_movesplitter_isbase = value; }
    inline void setQSplitter_SetRubberBand_IsBase(bool value) const { qsplitter_setrubberband_isbase = value; }
    inline void setQSplitter_ClosestLegalPosition_IsBase(bool value) const { qsplitter_closestlegalposition_isbase = value; }
    inline void setQSplitter_DrawFrame_IsBase(bool value) const { qsplitter_drawframe_isbase = value; }
    inline void setQSplitter_UpdateMicroFocus_IsBase(bool value) const { qsplitter_updatemicrofocus_isbase = value; }
    inline void setQSplitter_Create_IsBase(bool value) const { qsplitter_create_isbase = value; }
    inline void setQSplitter_Destroy_IsBase(bool value) const { qsplitter_destroy_isbase = value; }
    inline void setQSplitter_FocusNextChild_IsBase(bool value) const { qsplitter_focusnextchild_isbase = value; }
    inline void setQSplitter_FocusPreviousChild_IsBase(bool value) const { qsplitter_focuspreviouschild_isbase = value; }
    inline void setQSplitter_Sender_IsBase(bool value) const { qsplitter_sender_isbase = value; }
    inline void setQSplitter_SenderSignalIndex_IsBase(bool value) const { qsplitter_sendersignalindex_isbase = value; }
    inline void setQSplitter_Receivers_IsBase(bool value) const { qsplitter_receivers_isbase = value; }
    inline void setQSplitter_IsSignalConnected_IsBase(bool value) const { qsplitter_issignalconnected_isbase = value; }
    inline void setQSplitter_GetDecodedMetricF_IsBase(bool value) const { qsplitter_getdecodedmetricf_isbase = value; }

    // Virtual method for C ABI access and custom callback
    virtual const QMetaObject* metaObject() const override {
        if (qsplitter_metaobject_isbase) {
            qsplitter_metaobject_isbase = false;
            return QSplitter::metaObject();
        }
        auto metaobject_cb = qsplitter_metaobject_callback;
        if (metaobject_cb) {
            QMetaObject* callback_ret = metaobject_cb();
            return callback_ret;
        }
        return QSplitter::metaObject();
    }

    // Virtual method for C ABI access and custom callback
    virtual void* qt_metacast(const char* param1) override {
        if (qsplitter_metacast_isbase) {
            qsplitter_metacast_isbase = false;
            return QSplitter::qt_metacast(param1);
        }
        auto metacast_cb = qsplitter_metacast_callback;
        if (metacast_cb) {
            const char* cbval1 = (const char*)param1;

            void* callback_ret = metacast_cb(this, cbval1);
            return callback_ret;
        }
        return QSplitter::qt_metacast(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (qsplitter_metacall_isbase) {
            qsplitter_metacall_isbase = false;
            return QSplitter::qt_metacall(param1, param2, param3);
        }
        auto metacall_cb = qsplitter_metacall_callback;
        if (metacall_cb) {
            int cbval1 = static_cast<int>(param1);
            int cbval2 = param2;
            void** cbval3 = param3;

            int callback_ret = metacall_cb(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        }
        return QSplitter::qt_metacall(param1, param2, param3);
    }

    // Virtual method for C ABI access and custom callback
    virtual QSize sizeHint() const override {
        if (qsplitter_sizehint_isbase) {
            qsplitter_sizehint_isbase = false;
            return QSplitter::sizeHint();
        }
        auto sizehint_cb = qsplitter_sizehint_callback;
        if (sizehint_cb) {
            QSize* callback_ret = sizehint_cb();
            return *callback_ret;
        }
        return QSplitter::sizeHint();
    }

    // Virtual method for C ABI access and custom callback
    virtual QSize minimumSizeHint() const override {
        if (qsplitter_minimumsizehint_isbase) {
            qsplitter_minimumsizehint_isbase = false;
            return QSplitter::minimumSizeHint();
        }
        auto minimumsizehint_cb = qsplitter_minimumsizehint_callback;
        if (minimumsizehint_cb) {
            QSize* callback_ret = minimumsizehint_cb();
            return *callback_ret;
        }
        return QSplitter::minimumSizeHint();
    }

    // Virtual method for C ABI access and custom callback
    virtual QSplitterHandle* createHandle() override {
        if (qsplitter_createhandle_isbase) {
            qsplitter_createhandle_isbase = false;
            return QSplitter::createHandle();
        }
        auto createhandle_cb = qsplitter_createhandle_callback;
        if (createhandle_cb) {
            QSplitterHandle* callback_ret = createhandle_cb();
            return callback_ret;
        }
        return QSplitter::createHandle();
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* param1) override {
        if (qsplitter_childevent_isbase) {
            qsplitter_childevent_isbase = false;
            QSplitter::childEvent(param1);
            return;
        }
        auto childevent_cb = qsplitter_childevent_callback;
        if (childevent_cb) {
            QChildEvent* cbval1 = param1;

            childevent_cb(this, cbval1);
            return;
        }
        QSplitter::childEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* param1) override {
        if (qsplitter_event_isbase) {
            qsplitter_event_isbase = false;
            return QSplitter::event(param1);
        }
        auto event_cb = qsplitter_event_callback;
        if (event_cb) {
            QEvent* cbval1 = param1;

            bool callback_ret = event_cb(this, cbval1);
            return callback_ret;
        }
        return QSplitter::event(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual void resizeEvent(QResizeEvent* param1) override {
        if (qsplitter_resizeevent_isbase) {
            qsplitter_resizeevent_isbase = false;
            QSplitter::resizeEvent(param1);
            return;
        }
        auto resizeevent_cb = qsplitter_resizeevent_callback;
        if (resizeevent_cb) {
            QResizeEvent* cbval1 = param1;

            resizeevent_cb(this, cbval1);
            return;
        }
        QSplitter::resizeEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual void changeEvent(QEvent* param1) override {
        if (qsplitter_changeevent_isbase) {
            qsplitter_changeevent_isbase = false;
            QSplitter::changeEvent(param1);
            return;
        }
        auto changeevent_cb = qsplitter_changeevent_callback;
        if (changeevent_cb) {
            QEvent* cbval1 = param1;

            changeevent_cb(this, cbval1);
            return;
        }
        QSplitter::changeEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual void paintEvent(QPaintEvent* param1) override {
        if (qsplitter_paintevent_isbase) {
            qsplitter_paintevent_isbase = false;
            QSplitter::paintEvent(param1);
            return;
        }
        auto paintevent_cb = qsplitter_paintevent_callback;
        if (paintevent_cb) {
            QPaintEvent* cbval1 = param1;

            paintevent_cb(this, cbval1);
            return;
        }
        QSplitter::paintEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual void initStyleOption(QStyleOptionFrame* option) const override {
        if (qsplitter_initstyleoption_isbase) {
            qsplitter_initstyleoption_isbase = false;
            QSplitter::initStyleOption(option);
            return;
        }
        auto initstyleoption_cb = qsplitter_initstyleoption_callback;
        if (initstyleoption_cb) {
            QStyleOptionFrame* cbval1 = option;

            initstyleoption_cb(this, cbval1);
            return;
        }
        QSplitter::initStyleOption(option);
    }

    // Virtual method for C ABI access and custom callback
    virtual int devType() const override {
        if (qsplitter_devtype_isbase) {
            qsplitter_devtype_isbase = false;
            return QSplitter::devType();
        }
        auto devtype_cb = qsplitter_devtype_callback;
        if (devtype_cb) {
            int callback_ret = devtype_cb();
            return static_cast<int>(callback_ret);
        }
        return QSplitter::devType();
    }

    // Virtual method for C ABI access and custom callback
    virtual void setVisible(bool visible) override {
        if (qsplitter_setvisible_isbase) {
            qsplitter_setvisible_isbase = false;
            QSplitter::setVisible(visible);
            return;
        }
        auto setvisible_cb = qsplitter_setvisible_callback;
        if (setvisible_cb) {
            bool cbval1 = visible;

            setvisible_cb(this, cbval1);
            return;
        }
        QSplitter::setVisible(visible);
    }

    // Virtual method for C ABI access and custom callback
    virtual int heightForWidth(int param1) const override {
        if (qsplitter_heightforwidth_isbase) {
            qsplitter_heightforwidth_isbase = false;
            return QSplitter::heightForWidth(param1);
        }
        auto heightforwidth_cb = qsplitter_heightforwidth_callback;
        if (heightforwidth_cb) {
            int cbval1 = param1;

            int callback_ret = heightforwidth_cb(this, cbval1);
            return static_cast<int>(callback_ret);
        }
        return QSplitter::heightForWidth(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool hasHeightForWidth() const override {
        if (qsplitter_hasheightforwidth_isbase) {
            qsplitter_hasheightforwidth_isbase = false;
            return QSplitter::hasHeightForWidth();
        }
        auto hasheightforwidth_cb = qsplitter_hasheightforwidth_callback;
        if (hasheightforwidth_cb) {
            bool callback_ret = hasheightforwidth_cb();
            return callback_ret;
        }
        return QSplitter::hasHeightForWidth();
    }

    // Virtual method for C ABI access and custom callback
    virtual QPaintEngine* paintEngine() const override {
        if (qsplitter_paintengine_isbase) {
            qsplitter_paintengine_isbase = false;
            return QSplitter::paintEngine();
        }
        auto paintengine_cb = qsplitter_paintengine_callback;
        if (paintengine_cb) {
            QPaintEngine* callback_ret = paintengine_cb();
            return callback_ret;
        }
        return QSplitter::paintEngine();
    }

    // Virtual method for C ABI access and custom callback
    virtual void mousePressEvent(QMouseEvent* event) override {
        if (qsplitter_mousepressevent_isbase) {
            qsplitter_mousepressevent_isbase = false;
            QSplitter::mousePressEvent(event);
            return;
        }
        auto mousepressevent_cb = qsplitter_mousepressevent_callback;
        if (mousepressevent_cb) {
            QMouseEvent* cbval1 = event;

            mousepressevent_cb(this, cbval1);
            return;
        }
        QSplitter::mousePressEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseReleaseEvent(QMouseEvent* event) override {
        if (qsplitter_mousereleaseevent_isbase) {
            qsplitter_mousereleaseevent_isbase = false;
            QSplitter::mouseReleaseEvent(event);
            return;
        }
        auto mousereleaseevent_cb = qsplitter_mousereleaseevent_callback;
        if (mousereleaseevent_cb) {
            QMouseEvent* cbval1 = event;

            mousereleaseevent_cb(this, cbval1);
            return;
        }
        QSplitter::mouseReleaseEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseDoubleClickEvent(QMouseEvent* event) override {
        if (qsplitter_mousedoubleclickevent_isbase) {
            qsplitter_mousedoubleclickevent_isbase = false;
            QSplitter::mouseDoubleClickEvent(event);
            return;
        }
        auto mousedoubleclickevent_cb = qsplitter_mousedoubleclickevent_callback;
        if (mousedoubleclickevent_cb) {
            QMouseEvent* cbval1 = event;

            mousedoubleclickevent_cb(this, cbval1);
            return;
        }
        QSplitter::mouseDoubleClickEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseMoveEvent(QMouseEvent* event) override {
        if (qsplitter_mousemoveevent_isbase) {
            qsplitter_mousemoveevent_isbase = false;
            QSplitter::mouseMoveEvent(event);
            return;
        }
        auto mousemoveevent_cb = qsplitter_mousemoveevent_callback;
        if (mousemoveevent_cb) {
            QMouseEvent* cbval1 = event;

            mousemoveevent_cb(this, cbval1);
            return;
        }
        QSplitter::mouseMoveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void wheelEvent(QWheelEvent* event) override {
        if (qsplitter_wheelevent_isbase) {
            qsplitter_wheelevent_isbase = false;
            QSplitter::wheelEvent(event);
            return;
        }
        auto wheelevent_cb = qsplitter_wheelevent_callback;
        if (wheelevent_cb) {
            QWheelEvent* cbval1 = event;

            wheelevent_cb(this, cbval1);
            return;
        }
        QSplitter::wheelEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void keyPressEvent(QKeyEvent* event) override {
        if (qsplitter_keypressevent_isbase) {
            qsplitter_keypressevent_isbase = false;
            QSplitter::keyPressEvent(event);
            return;
        }
        auto keypressevent_cb = qsplitter_keypressevent_callback;
        if (keypressevent_cb) {
            QKeyEvent* cbval1 = event;

            keypressevent_cb(this, cbval1);
            return;
        }
        QSplitter::keyPressEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void keyReleaseEvent(QKeyEvent* event) override {
        if (qsplitter_keyreleaseevent_isbase) {
            qsplitter_keyreleaseevent_isbase = false;
            QSplitter::keyReleaseEvent(event);
            return;
        }
        auto keyreleaseevent_cb = qsplitter_keyreleaseevent_callback;
        if (keyreleaseevent_cb) {
            QKeyEvent* cbval1 = event;

            keyreleaseevent_cb(this, cbval1);
            return;
        }
        QSplitter::keyReleaseEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void focusInEvent(QFocusEvent* event) override {
        if (qsplitter_focusinevent_isbase) {
            qsplitter_focusinevent_isbase = false;
            QSplitter::focusInEvent(event);
            return;
        }
        auto focusinevent_cb = qsplitter_focusinevent_callback;
        if (focusinevent_cb) {
            QFocusEvent* cbval1 = event;

            focusinevent_cb(this, cbval1);
            return;
        }
        QSplitter::focusInEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void focusOutEvent(QFocusEvent* event) override {
        if (qsplitter_focusoutevent_isbase) {
            qsplitter_focusoutevent_isbase = false;
            QSplitter::focusOutEvent(event);
            return;
        }
        auto focusoutevent_cb = qsplitter_focusoutevent_callback;
        if (focusoutevent_cb) {
            QFocusEvent* cbval1 = event;

            focusoutevent_cb(this, cbval1);
            return;
        }
        QSplitter::focusOutEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void enterEvent(QEnterEvent* event) override {
        if (qsplitter_enterevent_isbase) {
            qsplitter_enterevent_isbase = false;
            QSplitter::enterEvent(event);
            return;
        }
        auto enterevent_cb = qsplitter_enterevent_callback;
        if (enterevent_cb) {
            QEnterEvent* cbval1 = event;

            enterevent_cb(this, cbval1);
            return;
        }
        QSplitter::enterEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void leaveEvent(QEvent* event) override {
        if (qsplitter_leaveevent_isbase) {
            qsplitter_leaveevent_isbase = false;
            QSplitter::leaveEvent(event);
            return;
        }
        auto leaveevent_cb = qsplitter_leaveevent_callback;
        if (leaveevent_cb) {
            QEvent* cbval1 = event;

            leaveevent_cb(this, cbval1);
            return;
        }
        QSplitter::leaveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void moveEvent(QMoveEvent* event) override {
        if (qsplitter_moveevent_isbase) {
            qsplitter_moveevent_isbase = false;
            QSplitter::moveEvent(event);
            return;
        }
        auto moveevent_cb = qsplitter_moveevent_callback;
        if (moveevent_cb) {
            QMoveEvent* cbval1 = event;

            moveevent_cb(this, cbval1);
            return;
        }
        QSplitter::moveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void closeEvent(QCloseEvent* event) override {
        if (qsplitter_closeevent_isbase) {
            qsplitter_closeevent_isbase = false;
            QSplitter::closeEvent(event);
            return;
        }
        auto closeevent_cb = qsplitter_closeevent_callback;
        if (closeevent_cb) {
            QCloseEvent* cbval1 = event;

            closeevent_cb(this, cbval1);
            return;
        }
        QSplitter::closeEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void contextMenuEvent(QContextMenuEvent* event) override {
        if (qsplitter_contextmenuevent_isbase) {
            qsplitter_contextmenuevent_isbase = false;
            QSplitter::contextMenuEvent(event);
            return;
        }
        auto contextmenuevent_cb = qsplitter_contextmenuevent_callback;
        if (contextmenuevent_cb) {
            QContextMenuEvent* cbval1 = event;

            contextmenuevent_cb(this, cbval1);
            return;
        }
        QSplitter::contextMenuEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void tabletEvent(QTabletEvent* event) override {
        if (qsplitter_tabletevent_isbase) {
            qsplitter_tabletevent_isbase = false;
            QSplitter::tabletEvent(event);
            return;
        }
        auto tabletevent_cb = qsplitter_tabletevent_callback;
        if (tabletevent_cb) {
            QTabletEvent* cbval1 = event;

            tabletevent_cb(this, cbval1);
            return;
        }
        QSplitter::tabletEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void actionEvent(QActionEvent* event) override {
        if (qsplitter_actionevent_isbase) {
            qsplitter_actionevent_isbase = false;
            QSplitter::actionEvent(event);
            return;
        }
        auto actionevent_cb = qsplitter_actionevent_callback;
        if (actionevent_cb) {
            QActionEvent* cbval1 = event;

            actionevent_cb(this, cbval1);
            return;
        }
        QSplitter::actionEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragEnterEvent(QDragEnterEvent* event) override {
        if (qsplitter_dragenterevent_isbase) {
            qsplitter_dragenterevent_isbase = false;
            QSplitter::dragEnterEvent(event);
            return;
        }
        auto dragenterevent_cb = qsplitter_dragenterevent_callback;
        if (dragenterevent_cb) {
            QDragEnterEvent* cbval1 = event;

            dragenterevent_cb(this, cbval1);
            return;
        }
        QSplitter::dragEnterEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragMoveEvent(QDragMoveEvent* event) override {
        if (qsplitter_dragmoveevent_isbase) {
            qsplitter_dragmoveevent_isbase = false;
            QSplitter::dragMoveEvent(event);
            return;
        }
        auto dragmoveevent_cb = qsplitter_dragmoveevent_callback;
        if (dragmoveevent_cb) {
            QDragMoveEvent* cbval1 = event;

            dragmoveevent_cb(this, cbval1);
            return;
        }
        QSplitter::dragMoveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragLeaveEvent(QDragLeaveEvent* event) override {
        if (qsplitter_dragleaveevent_isbase) {
            qsplitter_dragleaveevent_isbase = false;
            QSplitter::dragLeaveEvent(event);
            return;
        }
        auto dragleaveevent_cb = qsplitter_dragleaveevent_callback;
        if (dragleaveevent_cb) {
            QDragLeaveEvent* cbval1 = event;

            dragleaveevent_cb(this, cbval1);
            return;
        }
        QSplitter::dragLeaveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void dropEvent(QDropEvent* event) override {
        if (qsplitter_dropevent_isbase) {
            qsplitter_dropevent_isbase = false;
            QSplitter::dropEvent(event);
            return;
        }
        auto dropevent_cb = qsplitter_dropevent_callback;
        if (dropevent_cb) {
            QDropEvent* cbval1 = event;

            dropevent_cb(this, cbval1);
            return;
        }
        QSplitter::dropEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void showEvent(QShowEvent* event) override {
        if (qsplitter_showevent_isbase) {
            qsplitter_showevent_isbase = false;
            QSplitter::showEvent(event);
            return;
        }
        auto showevent_cb = qsplitter_showevent_callback;
        if (showevent_cb) {
            QShowEvent* cbval1 = event;

            showevent_cb(this, cbval1);
            return;
        }
        QSplitter::showEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void hideEvent(QHideEvent* event) override {
        if (qsplitter_hideevent_isbase) {
            qsplitter_hideevent_isbase = false;
            QSplitter::hideEvent(event);
            return;
        }
        auto hideevent_cb = qsplitter_hideevent_callback;
        if (hideevent_cb) {
            QHideEvent* cbval1 = event;

            hideevent_cb(this, cbval1);
            return;
        }
        QSplitter::hideEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool nativeEvent(const QByteArray& eventType, void* message, qintptr* result) override {
        if (qsplitter_nativeevent_isbase) {
            qsplitter_nativeevent_isbase = false;
            return QSplitter::nativeEvent(eventType, message, result);
        }
        auto nativeevent_cb = qsplitter_nativeevent_callback;
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
        return QSplitter::nativeEvent(eventType, message, result);
    }

    // Virtual method for C ABI access and custom callback
    virtual int metric(QPaintDevice::PaintDeviceMetric param1) const override {
        if (qsplitter_metric_isbase) {
            qsplitter_metric_isbase = false;
            return QSplitter::metric(param1);
        }
        auto metric_cb = qsplitter_metric_callback;
        if (metric_cb) {
            int cbval1 = static_cast<int>(param1);

            int callback_ret = metric_cb(this, cbval1);
            return static_cast<int>(callback_ret);
        }
        return QSplitter::metric(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual void initPainter(QPainter* painter) const override {
        if (qsplitter_initpainter_isbase) {
            qsplitter_initpainter_isbase = false;
            QSplitter::initPainter(painter);
            return;
        }
        auto initpainter_cb = qsplitter_initpainter_callback;
        if (initpainter_cb) {
            QPainter* cbval1 = painter;

            initpainter_cb(this, cbval1);
            return;
        }
        QSplitter::initPainter(painter);
    }

    // Virtual method for C ABI access and custom callback
    virtual QPaintDevice* redirected(QPoint* offset) const override {
        if (qsplitter_redirected_isbase) {
            qsplitter_redirected_isbase = false;
            return QSplitter::redirected(offset);
        }
        auto redirected_cb = qsplitter_redirected_callback;
        if (redirected_cb) {
            QPoint* cbval1 = offset;

            QPaintDevice* callback_ret = redirected_cb(this, cbval1);
            return callback_ret;
        }
        return QSplitter::redirected(offset);
    }

    // Virtual method for C ABI access and custom callback
    virtual QPainter* sharedPainter() const override {
        if (qsplitter_sharedpainter_isbase) {
            qsplitter_sharedpainter_isbase = false;
            return QSplitter::sharedPainter();
        }
        auto sharedpainter_cb = qsplitter_sharedpainter_callback;
        if (sharedpainter_cb) {
            QPainter* callback_ret = sharedpainter_cb();
            return callback_ret;
        }
        return QSplitter::sharedPainter();
    }

    // Virtual method for C ABI access and custom callback
    virtual void inputMethodEvent(QInputMethodEvent* param1) override {
        if (qsplitter_inputmethodevent_isbase) {
            qsplitter_inputmethodevent_isbase = false;
            QSplitter::inputMethodEvent(param1);
            return;
        }
        auto inputmethodevent_cb = qsplitter_inputmethodevent_callback;
        if (inputmethodevent_cb) {
            QInputMethodEvent* cbval1 = param1;

            inputmethodevent_cb(this, cbval1);
            return;
        }
        QSplitter::inputMethodEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual QVariant inputMethodQuery(Qt::InputMethodQuery param1) const override {
        if (qsplitter_inputmethodquery_isbase) {
            qsplitter_inputmethodquery_isbase = false;
            return QSplitter::inputMethodQuery(param1);
        }
        auto inputmethodquery_cb = qsplitter_inputmethodquery_callback;
        if (inputmethodquery_cb) {
            int cbval1 = static_cast<int>(param1);

            QVariant* callback_ret = inputmethodquery_cb(this, cbval1);
            return *callback_ret;
        }
        return QSplitter::inputMethodQuery(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool focusNextPrevChild(bool next) override {
        if (qsplitter_focusnextprevchild_isbase) {
            qsplitter_focusnextprevchild_isbase = false;
            return QSplitter::focusNextPrevChild(next);
        }
        auto focusnextprevchild_cb = qsplitter_focusnextprevchild_callback;
        if (focusnextprevchild_cb) {
            bool cbval1 = next;

            bool callback_ret = focusnextprevchild_cb(this, cbval1);
            return callback_ret;
        }
        return QSplitter::focusNextPrevChild(next);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* watched, QEvent* event) override {
        if (qsplitter_eventfilter_isbase) {
            qsplitter_eventfilter_isbase = false;
            return QSplitter::eventFilter(watched, event);
        }
        auto eventfilter_cb = qsplitter_eventfilter_callback;
        if (eventfilter_cb) {
            QObject* cbval1 = watched;
            QEvent* cbval2 = event;

            bool callback_ret = eventfilter_cb(this, cbval1, cbval2);
            return callback_ret;
        }
        return QSplitter::eventFilter(watched, event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (qsplitter_timerevent_isbase) {
            qsplitter_timerevent_isbase = false;
            QSplitter::timerEvent(event);
            return;
        }
        auto timerevent_cb = qsplitter_timerevent_callback;
        if (timerevent_cb) {
            QTimerEvent* cbval1 = event;

            timerevent_cb(this, cbval1);
            return;
        }
        QSplitter::timerEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (qsplitter_customevent_isbase) {
            qsplitter_customevent_isbase = false;
            QSplitter::customEvent(event);
            return;
        }
        auto customevent_cb = qsplitter_customevent_callback;
        if (customevent_cb) {
            QEvent* cbval1 = event;

            customevent_cb(this, cbval1);
            return;
        }
        QSplitter::customEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (qsplitter_connectnotify_isbase) {
            qsplitter_connectnotify_isbase = false;
            QSplitter::connectNotify(signal);
            return;
        }
        auto connectnotify_cb = qsplitter_connectnotify_callback;
        if (connectnotify_cb) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            connectnotify_cb(this, cbval1);
            return;
        }
        QSplitter::connectNotify(signal);
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (qsplitter_disconnectnotify_isbase) {
            qsplitter_disconnectnotify_isbase = false;
            QSplitter::disconnectNotify(signal);
            return;
        }
        auto disconnectnotify_cb = qsplitter_disconnectnotify_callback;
        if (disconnectnotify_cb) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            disconnectnotify_cb(this, cbval1);
            return;
        }
        QSplitter::disconnectNotify(signal);
    }

    // Virtual method for C ABI access and custom callback
    void moveSplitter(int pos, int index) {
        if (qsplitter_movesplitter_isbase) {
            qsplitter_movesplitter_isbase = false;
            QSplitter::moveSplitter(pos, index);
            return;
        }
        auto movesplitter_cb = qsplitter_movesplitter_callback;
        if (movesplitter_cb) {
            int cbval1 = pos;
            int cbval2 = index;

            movesplitter_cb(this, cbval1, cbval2);
            return;
        }
        QSplitter::moveSplitter(pos, index);
    }

    // Virtual method for C ABI access and custom callback
    void setRubberBand(int position) {
        if (qsplitter_setrubberband_isbase) {
            qsplitter_setrubberband_isbase = false;
            QSplitter::setRubberBand(position);
            return;
        }
        auto setrubberband_cb = qsplitter_setrubberband_callback;
        if (setrubberband_cb) {
            int cbval1 = position;

            setrubberband_cb(this, cbval1);
            return;
        }
        QSplitter::setRubberBand(position);
    }

    // Virtual method for C ABI access and custom callback
    int closestLegalPosition(int param1, int param2) {
        if (qsplitter_closestlegalposition_isbase) {
            qsplitter_closestlegalposition_isbase = false;
            return QSplitter::closestLegalPosition(param1, param2);
        }
        auto closestlegalposition_cb = qsplitter_closestlegalposition_callback;
        if (closestlegalposition_cb) {
            int cbval1 = param1;
            int cbval2 = param2;

            int callback_ret = closestlegalposition_cb(this, cbval1, cbval2);
            return static_cast<int>(callback_ret);
        }
        return QSplitter::closestLegalPosition(param1, param2);
    }

    // Virtual method for C ABI access and custom callback
    void drawFrame(QPainter* param1) {
        if (qsplitter_drawframe_isbase) {
            qsplitter_drawframe_isbase = false;
            QSplitter::drawFrame(param1);
            return;
        }
        auto drawframe_cb = qsplitter_drawframe_callback;
        if (drawframe_cb) {
            QPainter* cbval1 = param1;

            drawframe_cb(this, cbval1);
            return;
        }
        QSplitter::drawFrame(param1);
    }

    // Virtual method for C ABI access and custom callback
    void updateMicroFocus() {
        if (qsplitter_updatemicrofocus_isbase) {
            qsplitter_updatemicrofocus_isbase = false;
            QSplitter::updateMicroFocus();
            return;
        }
        auto updatemicrofocus_cb = qsplitter_updatemicrofocus_callback;
        if (updatemicrofocus_cb) {
            updatemicrofocus_cb();
            return;
        }
        QSplitter::updateMicroFocus();
    }

    // Virtual method for C ABI access and custom callback
    void create() {
        if (qsplitter_create_isbase) {
            qsplitter_create_isbase = false;
            QSplitter::create();
            return;
        }
        auto create_cb = qsplitter_create_callback;
        if (create_cb) {
            create_cb();
            return;
        }
        QSplitter::create();
    }

    // Virtual method for C ABI access and custom callback
    void destroy() {
        if (qsplitter_destroy_isbase) {
            qsplitter_destroy_isbase = false;
            QSplitter::destroy();
            return;
        }
        auto destroy_cb = qsplitter_destroy_callback;
        if (destroy_cb) {
            destroy_cb();
            return;
        }
        QSplitter::destroy();
    }

    // Virtual method for C ABI access and custom callback
    bool focusNextChild() {
        if (qsplitter_focusnextchild_isbase) {
            qsplitter_focusnextchild_isbase = false;
            return QSplitter::focusNextChild();
        }
        auto focusnextchild_cb = qsplitter_focusnextchild_callback;
        if (focusnextchild_cb) {
            bool callback_ret = focusnextchild_cb();
            return callback_ret;
        }
        return QSplitter::focusNextChild();
    }

    // Virtual method for C ABI access and custom callback
    bool focusPreviousChild() {
        if (qsplitter_focuspreviouschild_isbase) {
            qsplitter_focuspreviouschild_isbase = false;
            return QSplitter::focusPreviousChild();
        }
        auto focuspreviouschild_cb = qsplitter_focuspreviouschild_callback;
        if (focuspreviouschild_cb) {
            bool callback_ret = focuspreviouschild_cb();
            return callback_ret;
        }
        return QSplitter::focusPreviousChild();
    }

    // Virtual method for C ABI access and custom callback
    QObject* sender() const {
        if (qsplitter_sender_isbase) {
            qsplitter_sender_isbase = false;
            return QSplitter::sender();
        }
        auto sender_cb = qsplitter_sender_callback;
        if (sender_cb) {
            QObject* callback_ret = sender_cb();
            return callback_ret;
        }
        return QSplitter::sender();
    }

    // Virtual method for C ABI access and custom callback
    int senderSignalIndex() const {
        if (qsplitter_sendersignalindex_isbase) {
            qsplitter_sendersignalindex_isbase = false;
            return QSplitter::senderSignalIndex();
        }
        auto sendersignalindex_cb = qsplitter_sendersignalindex_callback;
        if (sendersignalindex_cb) {
            int callback_ret = sendersignalindex_cb();
            return static_cast<int>(callback_ret);
        }
        return QSplitter::senderSignalIndex();
    }

    // Virtual method for C ABI access and custom callback
    int receivers(const char* signal) const {
        if (qsplitter_receivers_isbase) {
            qsplitter_receivers_isbase = false;
            return QSplitter::receivers(signal);
        }
        auto receivers_cb = qsplitter_receivers_callback;
        if (receivers_cb) {
            const char* cbval1 = (const char*)signal;

            int callback_ret = receivers_cb(this, cbval1);
            return static_cast<int>(callback_ret);
        }
        return QSplitter::receivers(signal);
    }

    // Virtual method for C ABI access and custom callback
    bool isSignalConnected(const QMetaMethod& signal) const {
        if (qsplitter_issignalconnected_isbase) {
            qsplitter_issignalconnected_isbase = false;
            return QSplitter::isSignalConnected(signal);
        }
        auto issignalconnected_cb = qsplitter_issignalconnected_callback;
        if (issignalconnected_cb) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            bool callback_ret = issignalconnected_cb(this, cbval1);
            return callback_ret;
        }
        return QSplitter::isSignalConnected(signal);
    }

    // Virtual method for C ABI access and custom callback
    double getDecodedMetricF(QPaintDevice::PaintDeviceMetric metricA, QPaintDevice::PaintDeviceMetric metricB) const {
        if (qsplitter_getdecodedmetricf_isbase) {
            qsplitter_getdecodedmetricf_isbase = false;
            return QSplitter::getDecodedMetricF(metricA, metricB);
        }
        auto getdecodedmetricf_cb = qsplitter_getdecodedmetricf_callback;
        if (getdecodedmetricf_cb) {
            int cbval1 = static_cast<int>(metricA);
            int cbval2 = static_cast<int>(metricB);

            double callback_ret = getdecodedmetricf_cb(this, cbval1, cbval2);
            return static_cast<double>(callback_ret);
        }
        return QSplitter::getDecodedMetricF(metricA, metricB);
    }

    // Friend functions
    friend QSplitterHandle* QSplitter_CreateHandle(QSplitter* self);
    friend QSplitterHandle* QSplitter_SuperCreateHandle(QSplitter* self);
    friend void QSplitter_ChildEvent(QSplitter* self, QChildEvent* param1);
    friend void QSplitter_SuperChildEvent(QSplitter* self, QChildEvent* param1);
    friend bool QSplitter_Event(QSplitter* self, QEvent* param1);
    friend bool QSplitter_SuperEvent(QSplitter* self, QEvent* param1);
    friend void QSplitter_ResizeEvent(QSplitter* self, QResizeEvent* param1);
    friend void QSplitter_SuperResizeEvent(QSplitter* self, QResizeEvent* param1);
    friend void QSplitter_ChangeEvent(QSplitter* self, QEvent* param1);
    friend void QSplitter_SuperChangeEvent(QSplitter* self, QEvent* param1);
    friend void QSplitter_PaintEvent(QSplitter* self, QPaintEvent* param1);
    friend void QSplitter_SuperPaintEvent(QSplitter* self, QPaintEvent* param1);
    friend void QSplitter_InitStyleOption(const QSplitter* self, QStyleOptionFrame* option);
    friend void QSplitter_SuperInitStyleOption(const QSplitter* self, QStyleOptionFrame* option);
    friend void QSplitter_MousePressEvent(QSplitter* self, QMouseEvent* event);
    friend void QSplitter_SuperMousePressEvent(QSplitter* self, QMouseEvent* event);
    friend void QSplitter_MouseReleaseEvent(QSplitter* self, QMouseEvent* event);
    friend void QSplitter_SuperMouseReleaseEvent(QSplitter* self, QMouseEvent* event);
    friend void QSplitter_MouseDoubleClickEvent(QSplitter* self, QMouseEvent* event);
    friend void QSplitter_SuperMouseDoubleClickEvent(QSplitter* self, QMouseEvent* event);
    friend void QSplitter_MouseMoveEvent(QSplitter* self, QMouseEvent* event);
    friend void QSplitter_SuperMouseMoveEvent(QSplitter* self, QMouseEvent* event);
    friend void QSplitter_WheelEvent(QSplitter* self, QWheelEvent* event);
    friend void QSplitter_SuperWheelEvent(QSplitter* self, QWheelEvent* event);
    friend void QSplitter_KeyPressEvent(QSplitter* self, QKeyEvent* event);
    friend void QSplitter_SuperKeyPressEvent(QSplitter* self, QKeyEvent* event);
    friend void QSplitter_KeyReleaseEvent(QSplitter* self, QKeyEvent* event);
    friend void QSplitter_SuperKeyReleaseEvent(QSplitter* self, QKeyEvent* event);
    friend void QSplitter_FocusInEvent(QSplitter* self, QFocusEvent* event);
    friend void QSplitter_SuperFocusInEvent(QSplitter* self, QFocusEvent* event);
    friend void QSplitter_FocusOutEvent(QSplitter* self, QFocusEvent* event);
    friend void QSplitter_SuperFocusOutEvent(QSplitter* self, QFocusEvent* event);
    friend void QSplitter_EnterEvent(QSplitter* self, QEnterEvent* event);
    friend void QSplitter_SuperEnterEvent(QSplitter* self, QEnterEvent* event);
    friend void QSplitter_LeaveEvent(QSplitter* self, QEvent* event);
    friend void QSplitter_SuperLeaveEvent(QSplitter* self, QEvent* event);
    friend void QSplitter_MoveEvent(QSplitter* self, QMoveEvent* event);
    friend void QSplitter_SuperMoveEvent(QSplitter* self, QMoveEvent* event);
    friend void QSplitter_CloseEvent(QSplitter* self, QCloseEvent* event);
    friend void QSplitter_SuperCloseEvent(QSplitter* self, QCloseEvent* event);
    friend void QSplitter_ContextMenuEvent(QSplitter* self, QContextMenuEvent* event);
    friend void QSplitter_SuperContextMenuEvent(QSplitter* self, QContextMenuEvent* event);
    friend void QSplitter_TabletEvent(QSplitter* self, QTabletEvent* event);
    friend void QSplitter_SuperTabletEvent(QSplitter* self, QTabletEvent* event);
    friend void QSplitter_ActionEvent(QSplitter* self, QActionEvent* event);
    friend void QSplitter_SuperActionEvent(QSplitter* self, QActionEvent* event);
    friend void QSplitter_DragEnterEvent(QSplitter* self, QDragEnterEvent* event);
    friend void QSplitter_SuperDragEnterEvent(QSplitter* self, QDragEnterEvent* event);
    friend void QSplitter_DragMoveEvent(QSplitter* self, QDragMoveEvent* event);
    friend void QSplitter_SuperDragMoveEvent(QSplitter* self, QDragMoveEvent* event);
    friend void QSplitter_DragLeaveEvent(QSplitter* self, QDragLeaveEvent* event);
    friend void QSplitter_SuperDragLeaveEvent(QSplitter* self, QDragLeaveEvent* event);
    friend void QSplitter_DropEvent(QSplitter* self, QDropEvent* event);
    friend void QSplitter_SuperDropEvent(QSplitter* self, QDropEvent* event);
    friend void QSplitter_ShowEvent(QSplitter* self, QShowEvent* event);
    friend void QSplitter_SuperShowEvent(QSplitter* self, QShowEvent* event);
    friend void QSplitter_HideEvent(QSplitter* self, QHideEvent* event);
    friend void QSplitter_SuperHideEvent(QSplitter* self, QHideEvent* event);
    friend bool QSplitter_NativeEvent(QSplitter* self, const libqt_string eventType, void* message, intptr_t* result);
    friend bool QSplitter_SuperNativeEvent(QSplitter* self, const libqt_string eventType, void* message, intptr_t* result);
    friend int QSplitter_Metric(const QSplitter* self, int param1);
    friend int QSplitter_SuperMetric(const QSplitter* self, int param1);
    friend void QSplitter_InitPainter(const QSplitter* self, QPainter* painter);
    friend void QSplitter_SuperInitPainter(const QSplitter* self, QPainter* painter);
    friend QPaintDevice* QSplitter_Redirected(const QSplitter* self, QPoint* offset);
    friend QPaintDevice* QSplitter_SuperRedirected(const QSplitter* self, QPoint* offset);
    friend QPainter* QSplitter_SharedPainter(const QSplitter* self);
    friend QPainter* QSplitter_SuperSharedPainter(const QSplitter* self);
    friend void QSplitter_InputMethodEvent(QSplitter* self, QInputMethodEvent* param1);
    friend void QSplitter_SuperInputMethodEvent(QSplitter* self, QInputMethodEvent* param1);
    friend bool QSplitter_FocusNextPrevChild(QSplitter* self, bool next);
    friend bool QSplitter_SuperFocusNextPrevChild(QSplitter* self, bool next);
    friend void QSplitter_TimerEvent(QSplitter* self, QTimerEvent* event);
    friend void QSplitter_SuperTimerEvent(QSplitter* self, QTimerEvent* event);
    friend void QSplitter_CustomEvent(QSplitter* self, QEvent* event);
    friend void QSplitter_SuperCustomEvent(QSplitter* self, QEvent* event);
    friend void QSplitter_ConnectNotify(QSplitter* self, const QMetaMethod* signal);
    friend void QSplitter_SuperConnectNotify(QSplitter* self, const QMetaMethod* signal);
    friend void QSplitter_DisconnectNotify(QSplitter* self, const QMetaMethod* signal);
    friend void QSplitter_SuperDisconnectNotify(QSplitter* self, const QMetaMethod* signal);
    friend void QSplitter_MoveSplitter(QSplitter* self, int pos, int index);
    friend void QSplitter_SuperMoveSplitter(QSplitter* self, int pos, int index);
    friend void QSplitter_SetRubberBand(QSplitter* self, int position);
    friend void QSplitter_SuperSetRubberBand(QSplitter* self, int position);
    friend int QSplitter_ClosestLegalPosition(QSplitter* self, int param1, int param2);
    friend int QSplitter_SuperClosestLegalPosition(QSplitter* self, int param1, int param2);
    friend void QSplitter_DrawFrame(QSplitter* self, QPainter* param1);
    friend void QSplitter_SuperDrawFrame(QSplitter* self, QPainter* param1);
    friend void QSplitter_UpdateMicroFocus(QSplitter* self);
    friend void QSplitter_SuperUpdateMicroFocus(QSplitter* self);
    friend void QSplitter_Create(QSplitter* self);
    friend void QSplitter_SuperCreate(QSplitter* self);
    friend void QSplitter_Destroy(QSplitter* self);
    friend void QSplitter_SuperDestroy(QSplitter* self);
    friend bool QSplitter_FocusNextChild(QSplitter* self);
    friend bool QSplitter_SuperFocusNextChild(QSplitter* self);
    friend bool QSplitter_FocusPreviousChild(QSplitter* self);
    friend bool QSplitter_SuperFocusPreviousChild(QSplitter* self);
    friend QObject* QSplitter_Sender(const QSplitter* self);
    friend QObject* QSplitter_SuperSender(const QSplitter* self);
    friend int QSplitter_SenderSignalIndex(const QSplitter* self);
    friend int QSplitter_SuperSenderSignalIndex(const QSplitter* self);
    friend int QSplitter_Receivers(const QSplitter* self, const char* signal);
    friend int QSplitter_SuperReceivers(const QSplitter* self, const char* signal);
    friend bool QSplitter_IsSignalConnected(const QSplitter* self, const QMetaMethod* signal);
    friend bool QSplitter_SuperIsSignalConnected(const QSplitter* self, const QMetaMethod* signal);
    friend double QSplitter_GetDecodedMetricF(const QSplitter* self, int metricA, int metricB);
    friend double QSplitter_SuperGetDecodedMetricF(const QSplitter* self, int metricA, int metricB);
};

// This class is a subclass of QSplitterHandle so that we can call protected methods
class VirtualQSplitterHandle final : public QSplitterHandle {

  public:
    // Virtual class boolean flag
    bool isVirtualQSplitterHandle = true;

    // Virtual class public types (including callbacks)
    using QSplitterHandle_MetaObject_Callback = QMetaObject* (*)();
    using QSplitterHandle_Metacast_Callback = void* (*)(QSplitterHandle*, const char*);
    using QSplitterHandle_Metacall_Callback = int (*)(QSplitterHandle*, int, int, void**);
    using QSplitterHandle_SizeHint_Callback = QSize* (*)();
    using QSplitterHandle_PaintEvent_Callback = void (*)(QSplitterHandle*, QPaintEvent*);
    using QSplitterHandle_MouseMoveEvent_Callback = void (*)(QSplitterHandle*, QMouseEvent*);
    using QSplitterHandle_MousePressEvent_Callback = void (*)(QSplitterHandle*, QMouseEvent*);
    using QSplitterHandle_MouseReleaseEvent_Callback = void (*)(QSplitterHandle*, QMouseEvent*);
    using QSplitterHandle_ResizeEvent_Callback = void (*)(QSplitterHandle*, QResizeEvent*);
    using QSplitterHandle_Event_Callback = bool (*)(QSplitterHandle*, QEvent*);
    using QSplitterHandle_DevType_Callback = int (*)();
    using QSplitterHandle_SetVisible_Callback = void (*)(QSplitterHandle*, bool);
    using QSplitterHandle_MinimumSizeHint_Callback = QSize* (*)();
    using QSplitterHandle_HeightForWidth_Callback = int (*)(const QSplitterHandle*, int);
    using QSplitterHandle_HasHeightForWidth_Callback = bool (*)();
    using QSplitterHandle_PaintEngine_Callback = QPaintEngine* (*)();
    using QSplitterHandle_MouseDoubleClickEvent_Callback = void (*)(QSplitterHandle*, QMouseEvent*);
    using QSplitterHandle_WheelEvent_Callback = void (*)(QSplitterHandle*, QWheelEvent*);
    using QSplitterHandle_KeyPressEvent_Callback = void (*)(QSplitterHandle*, QKeyEvent*);
    using QSplitterHandle_KeyReleaseEvent_Callback = void (*)(QSplitterHandle*, QKeyEvent*);
    using QSplitterHandle_FocusInEvent_Callback = void (*)(QSplitterHandle*, QFocusEvent*);
    using QSplitterHandle_FocusOutEvent_Callback = void (*)(QSplitterHandle*, QFocusEvent*);
    using QSplitterHandle_EnterEvent_Callback = void (*)(QSplitterHandle*, QEnterEvent*);
    using QSplitterHandle_LeaveEvent_Callback = void (*)(QSplitterHandle*, QEvent*);
    using QSplitterHandle_MoveEvent_Callback = void (*)(QSplitterHandle*, QMoveEvent*);
    using QSplitterHandle_CloseEvent_Callback = void (*)(QSplitterHandle*, QCloseEvent*);
    using QSplitterHandle_ContextMenuEvent_Callback = void (*)(QSplitterHandle*, QContextMenuEvent*);
    using QSplitterHandle_TabletEvent_Callback = void (*)(QSplitterHandle*, QTabletEvent*);
    using QSplitterHandle_ActionEvent_Callback = void (*)(QSplitterHandle*, QActionEvent*);
    using QSplitterHandle_DragEnterEvent_Callback = void (*)(QSplitterHandle*, QDragEnterEvent*);
    using QSplitterHandle_DragMoveEvent_Callback = void (*)(QSplitterHandle*, QDragMoveEvent*);
    using QSplitterHandle_DragLeaveEvent_Callback = void (*)(QSplitterHandle*, QDragLeaveEvent*);
    using QSplitterHandle_DropEvent_Callback = void (*)(QSplitterHandle*, QDropEvent*);
    using QSplitterHandle_ShowEvent_Callback = void (*)(QSplitterHandle*, QShowEvent*);
    using QSplitterHandle_HideEvent_Callback = void (*)(QSplitterHandle*, QHideEvent*);
    using QSplitterHandle_NativeEvent_Callback = bool (*)(QSplitterHandle*, libqt_string, void*, intptr_t*);
    using QSplitterHandle_ChangeEvent_Callback = void (*)(QSplitterHandle*, QEvent*);
    using QSplitterHandle_Metric_Callback = int (*)(const QSplitterHandle*, int);
    using QSplitterHandle_InitPainter_Callback = void (*)(const QSplitterHandle*, QPainter*);
    using QSplitterHandle_Redirected_Callback = QPaintDevice* (*)(const QSplitterHandle*, QPoint*);
    using QSplitterHandle_SharedPainter_Callback = QPainter* (*)();
    using QSplitterHandle_InputMethodEvent_Callback = void (*)(QSplitterHandle*, QInputMethodEvent*);
    using QSplitterHandle_InputMethodQuery_Callback = QVariant* (*)(const QSplitterHandle*, int);
    using QSplitterHandle_FocusNextPrevChild_Callback = bool (*)(QSplitterHandle*, bool);
    using QSplitterHandle_EventFilter_Callback = bool (*)(QSplitterHandle*, QObject*, QEvent*);
    using QSplitterHandle_TimerEvent_Callback = void (*)(QSplitterHandle*, QTimerEvent*);
    using QSplitterHandle_ChildEvent_Callback = void (*)(QSplitterHandle*, QChildEvent*);
    using QSplitterHandle_CustomEvent_Callback = void (*)(QSplitterHandle*, QEvent*);
    using QSplitterHandle_ConnectNotify_Callback = void (*)(QSplitterHandle*, QMetaMethod*);
    using QSplitterHandle_DisconnectNotify_Callback = void (*)(QSplitterHandle*, QMetaMethod*);
    using QSplitterHandle_MoveSplitter_Callback = void (*)(QSplitterHandle*, int);
    using QSplitterHandle_ClosestLegalPosition_Callback = int (*)(QSplitterHandle*, int);
    using QSplitterHandle_UpdateMicroFocus_Callback = void (*)();
    using QSplitterHandle_Create_Callback = void (*)();
    using QSplitterHandle_Destroy_Callback = void (*)();
    using QSplitterHandle_FocusNextChild_Callback = bool (*)();
    using QSplitterHandle_FocusPreviousChild_Callback = bool (*)();
    using QSplitterHandle_Sender_Callback = QObject* (*)();
    using QSplitterHandle_SenderSignalIndex_Callback = int (*)();
    using QSplitterHandle_Receivers_Callback = int (*)(const QSplitterHandle*, const char*);
    using QSplitterHandle_IsSignalConnected_Callback = bool (*)(const QSplitterHandle*, QMetaMethod*);
    using QSplitterHandle_GetDecodedMetricF_Callback = double (*)(const QSplitterHandle*, int, int);

  protected:
    // Instance callback storage
    QSplitterHandle_MetaObject_Callback qsplitterhandle_metaobject_callback = nullptr;
    QSplitterHandle_Metacast_Callback qsplitterhandle_metacast_callback = nullptr;
    QSplitterHandle_Metacall_Callback qsplitterhandle_metacall_callback = nullptr;
    QSplitterHandle_SizeHint_Callback qsplitterhandle_sizehint_callback = nullptr;
    QSplitterHandle_PaintEvent_Callback qsplitterhandle_paintevent_callback = nullptr;
    QSplitterHandle_MouseMoveEvent_Callback qsplitterhandle_mousemoveevent_callback = nullptr;
    QSplitterHandle_MousePressEvent_Callback qsplitterhandle_mousepressevent_callback = nullptr;
    QSplitterHandle_MouseReleaseEvent_Callback qsplitterhandle_mousereleaseevent_callback = nullptr;
    QSplitterHandle_ResizeEvent_Callback qsplitterhandle_resizeevent_callback = nullptr;
    QSplitterHandle_Event_Callback qsplitterhandle_event_callback = nullptr;
    QSplitterHandle_DevType_Callback qsplitterhandle_devtype_callback = nullptr;
    QSplitterHandle_SetVisible_Callback qsplitterhandle_setvisible_callback = nullptr;
    QSplitterHandle_MinimumSizeHint_Callback qsplitterhandle_minimumsizehint_callback = nullptr;
    QSplitterHandle_HeightForWidth_Callback qsplitterhandle_heightforwidth_callback = nullptr;
    QSplitterHandle_HasHeightForWidth_Callback qsplitterhandle_hasheightforwidth_callback = nullptr;
    QSplitterHandle_PaintEngine_Callback qsplitterhandle_paintengine_callback = nullptr;
    QSplitterHandle_MouseDoubleClickEvent_Callback qsplitterhandle_mousedoubleclickevent_callback = nullptr;
    QSplitterHandle_WheelEvent_Callback qsplitterhandle_wheelevent_callback = nullptr;
    QSplitterHandle_KeyPressEvent_Callback qsplitterhandle_keypressevent_callback = nullptr;
    QSplitterHandle_KeyReleaseEvent_Callback qsplitterhandle_keyreleaseevent_callback = nullptr;
    QSplitterHandle_FocusInEvent_Callback qsplitterhandle_focusinevent_callback = nullptr;
    QSplitterHandle_FocusOutEvent_Callback qsplitterhandle_focusoutevent_callback = nullptr;
    QSplitterHandle_EnterEvent_Callback qsplitterhandle_enterevent_callback = nullptr;
    QSplitterHandle_LeaveEvent_Callback qsplitterhandle_leaveevent_callback = nullptr;
    QSplitterHandle_MoveEvent_Callback qsplitterhandle_moveevent_callback = nullptr;
    QSplitterHandle_CloseEvent_Callback qsplitterhandle_closeevent_callback = nullptr;
    QSplitterHandle_ContextMenuEvent_Callback qsplitterhandle_contextmenuevent_callback = nullptr;
    QSplitterHandle_TabletEvent_Callback qsplitterhandle_tabletevent_callback = nullptr;
    QSplitterHandle_ActionEvent_Callback qsplitterhandle_actionevent_callback = nullptr;
    QSplitterHandle_DragEnterEvent_Callback qsplitterhandle_dragenterevent_callback = nullptr;
    QSplitterHandle_DragMoveEvent_Callback qsplitterhandle_dragmoveevent_callback = nullptr;
    QSplitterHandle_DragLeaveEvent_Callback qsplitterhandle_dragleaveevent_callback = nullptr;
    QSplitterHandle_DropEvent_Callback qsplitterhandle_dropevent_callback = nullptr;
    QSplitterHandle_ShowEvent_Callback qsplitterhandle_showevent_callback = nullptr;
    QSplitterHandle_HideEvent_Callback qsplitterhandle_hideevent_callback = nullptr;
    QSplitterHandle_NativeEvent_Callback qsplitterhandle_nativeevent_callback = nullptr;
    QSplitterHandle_ChangeEvent_Callback qsplitterhandle_changeevent_callback = nullptr;
    QSplitterHandle_Metric_Callback qsplitterhandle_metric_callback = nullptr;
    QSplitterHandle_InitPainter_Callback qsplitterhandle_initpainter_callback = nullptr;
    QSplitterHandle_Redirected_Callback qsplitterhandle_redirected_callback = nullptr;
    QSplitterHandle_SharedPainter_Callback qsplitterhandle_sharedpainter_callback = nullptr;
    QSplitterHandle_InputMethodEvent_Callback qsplitterhandle_inputmethodevent_callback = nullptr;
    QSplitterHandle_InputMethodQuery_Callback qsplitterhandle_inputmethodquery_callback = nullptr;
    QSplitterHandle_FocusNextPrevChild_Callback qsplitterhandle_focusnextprevchild_callback = nullptr;
    QSplitterHandle_EventFilter_Callback qsplitterhandle_eventfilter_callback = nullptr;
    QSplitterHandle_TimerEvent_Callback qsplitterhandle_timerevent_callback = nullptr;
    QSplitterHandle_ChildEvent_Callback qsplitterhandle_childevent_callback = nullptr;
    QSplitterHandle_CustomEvent_Callback qsplitterhandle_customevent_callback = nullptr;
    QSplitterHandle_ConnectNotify_Callback qsplitterhandle_connectnotify_callback = nullptr;
    QSplitterHandle_DisconnectNotify_Callback qsplitterhandle_disconnectnotify_callback = nullptr;
    QSplitterHandle_MoveSplitter_Callback qsplitterhandle_movesplitter_callback = nullptr;
    QSplitterHandle_ClosestLegalPosition_Callback qsplitterhandle_closestlegalposition_callback = nullptr;
    QSplitterHandle_UpdateMicroFocus_Callback qsplitterhandle_updatemicrofocus_callback = nullptr;
    QSplitterHandle_Create_Callback qsplitterhandle_create_callback = nullptr;
    QSplitterHandle_Destroy_Callback qsplitterhandle_destroy_callback = nullptr;
    QSplitterHandle_FocusNextChild_Callback qsplitterhandle_focusnextchild_callback = nullptr;
    QSplitterHandle_FocusPreviousChild_Callback qsplitterhandle_focuspreviouschild_callback = nullptr;
    QSplitterHandle_Sender_Callback qsplitterhandle_sender_callback = nullptr;
    QSplitterHandle_SenderSignalIndex_Callback qsplitterhandle_sendersignalindex_callback = nullptr;
    QSplitterHandle_Receivers_Callback qsplitterhandle_receivers_callback = nullptr;
    QSplitterHandle_IsSignalConnected_Callback qsplitterhandle_issignalconnected_callback = nullptr;
    QSplitterHandle_GetDecodedMetricF_Callback qsplitterhandle_getdecodedmetricf_callback = nullptr;

    // Instance base flags
    mutable bool qsplitterhandle_metaobject_isbase = false;
    mutable bool qsplitterhandle_metacast_isbase = false;
    mutable bool qsplitterhandle_metacall_isbase = false;
    mutable bool qsplitterhandle_sizehint_isbase = false;
    mutable bool qsplitterhandle_paintevent_isbase = false;
    mutable bool qsplitterhandle_mousemoveevent_isbase = false;
    mutable bool qsplitterhandle_mousepressevent_isbase = false;
    mutable bool qsplitterhandle_mousereleaseevent_isbase = false;
    mutable bool qsplitterhandle_resizeevent_isbase = false;
    mutable bool qsplitterhandle_event_isbase = false;
    mutable bool qsplitterhandle_devtype_isbase = false;
    mutable bool qsplitterhandle_setvisible_isbase = false;
    mutable bool qsplitterhandle_minimumsizehint_isbase = false;
    mutable bool qsplitterhandle_heightforwidth_isbase = false;
    mutable bool qsplitterhandle_hasheightforwidth_isbase = false;
    mutable bool qsplitterhandle_paintengine_isbase = false;
    mutable bool qsplitterhandle_mousedoubleclickevent_isbase = false;
    mutable bool qsplitterhandle_wheelevent_isbase = false;
    mutable bool qsplitterhandle_keypressevent_isbase = false;
    mutable bool qsplitterhandle_keyreleaseevent_isbase = false;
    mutable bool qsplitterhandle_focusinevent_isbase = false;
    mutable bool qsplitterhandle_focusoutevent_isbase = false;
    mutable bool qsplitterhandle_enterevent_isbase = false;
    mutable bool qsplitterhandle_leaveevent_isbase = false;
    mutable bool qsplitterhandle_moveevent_isbase = false;
    mutable bool qsplitterhandle_closeevent_isbase = false;
    mutable bool qsplitterhandle_contextmenuevent_isbase = false;
    mutable bool qsplitterhandle_tabletevent_isbase = false;
    mutable bool qsplitterhandle_actionevent_isbase = false;
    mutable bool qsplitterhandle_dragenterevent_isbase = false;
    mutable bool qsplitterhandle_dragmoveevent_isbase = false;
    mutable bool qsplitterhandle_dragleaveevent_isbase = false;
    mutable bool qsplitterhandle_dropevent_isbase = false;
    mutable bool qsplitterhandle_showevent_isbase = false;
    mutable bool qsplitterhandle_hideevent_isbase = false;
    mutable bool qsplitterhandle_nativeevent_isbase = false;
    mutable bool qsplitterhandle_changeevent_isbase = false;
    mutable bool qsplitterhandle_metric_isbase = false;
    mutable bool qsplitterhandle_initpainter_isbase = false;
    mutable bool qsplitterhandle_redirected_isbase = false;
    mutable bool qsplitterhandle_sharedpainter_isbase = false;
    mutable bool qsplitterhandle_inputmethodevent_isbase = false;
    mutable bool qsplitterhandle_inputmethodquery_isbase = false;
    mutable bool qsplitterhandle_focusnextprevchild_isbase = false;
    mutable bool qsplitterhandle_eventfilter_isbase = false;
    mutable bool qsplitterhandle_timerevent_isbase = false;
    mutable bool qsplitterhandle_childevent_isbase = false;
    mutable bool qsplitterhandle_customevent_isbase = false;
    mutable bool qsplitterhandle_connectnotify_isbase = false;
    mutable bool qsplitterhandle_disconnectnotify_isbase = false;
    mutable bool qsplitterhandle_movesplitter_isbase = false;
    mutable bool qsplitterhandle_closestlegalposition_isbase = false;
    mutable bool qsplitterhandle_updatemicrofocus_isbase = false;
    mutable bool qsplitterhandle_create_isbase = false;
    mutable bool qsplitterhandle_destroy_isbase = false;
    mutable bool qsplitterhandle_focusnextchild_isbase = false;
    mutable bool qsplitterhandle_focuspreviouschild_isbase = false;
    mutable bool qsplitterhandle_sender_isbase = false;
    mutable bool qsplitterhandle_sendersignalindex_isbase = false;
    mutable bool qsplitterhandle_receivers_isbase = false;
    mutable bool qsplitterhandle_issignalconnected_isbase = false;
    mutable bool qsplitterhandle_getdecodedmetricf_isbase = false;

  public:
    VirtualQSplitterHandle(Qt::Orientation o, QSplitter* parent) : QSplitterHandle(o, parent) {};

    // Callback setters
    inline void setQSplitterHandle_MetaObject_Callback(QSplitterHandle_MetaObject_Callback cb) { qsplitterhandle_metaobject_callback = cb; }
    inline void setQSplitterHandle_Metacast_Callback(QSplitterHandle_Metacast_Callback cb) { qsplitterhandle_metacast_callback = cb; }
    inline void setQSplitterHandle_Metacall_Callback(QSplitterHandle_Metacall_Callback cb) { qsplitterhandle_metacall_callback = cb; }
    inline void setQSplitterHandle_SizeHint_Callback(QSplitterHandle_SizeHint_Callback cb) { qsplitterhandle_sizehint_callback = cb; }
    inline void setQSplitterHandle_PaintEvent_Callback(QSplitterHandle_PaintEvent_Callback cb) { qsplitterhandle_paintevent_callback = cb; }
    inline void setQSplitterHandle_MouseMoveEvent_Callback(QSplitterHandle_MouseMoveEvent_Callback cb) { qsplitterhandle_mousemoveevent_callback = cb; }
    inline void setQSplitterHandle_MousePressEvent_Callback(QSplitterHandle_MousePressEvent_Callback cb) { qsplitterhandle_mousepressevent_callback = cb; }
    inline void setQSplitterHandle_MouseReleaseEvent_Callback(QSplitterHandle_MouseReleaseEvent_Callback cb) { qsplitterhandle_mousereleaseevent_callback = cb; }
    inline void setQSplitterHandle_ResizeEvent_Callback(QSplitterHandle_ResizeEvent_Callback cb) { qsplitterhandle_resizeevent_callback = cb; }
    inline void setQSplitterHandle_Event_Callback(QSplitterHandle_Event_Callback cb) { qsplitterhandle_event_callback = cb; }
    inline void setQSplitterHandle_DevType_Callback(QSplitterHandle_DevType_Callback cb) { qsplitterhandle_devtype_callback = cb; }
    inline void setQSplitterHandle_SetVisible_Callback(QSplitterHandle_SetVisible_Callback cb) { qsplitterhandle_setvisible_callback = cb; }
    inline void setQSplitterHandle_MinimumSizeHint_Callback(QSplitterHandle_MinimumSizeHint_Callback cb) { qsplitterhandle_minimumsizehint_callback = cb; }
    inline void setQSplitterHandle_HeightForWidth_Callback(QSplitterHandle_HeightForWidth_Callback cb) { qsplitterhandle_heightforwidth_callback = cb; }
    inline void setQSplitterHandle_HasHeightForWidth_Callback(QSplitterHandle_HasHeightForWidth_Callback cb) { qsplitterhandle_hasheightforwidth_callback = cb; }
    inline void setQSplitterHandle_PaintEngine_Callback(QSplitterHandle_PaintEngine_Callback cb) { qsplitterhandle_paintengine_callback = cb; }
    inline void setQSplitterHandle_MouseDoubleClickEvent_Callback(QSplitterHandle_MouseDoubleClickEvent_Callback cb) { qsplitterhandle_mousedoubleclickevent_callback = cb; }
    inline void setQSplitterHandle_WheelEvent_Callback(QSplitterHandle_WheelEvent_Callback cb) { qsplitterhandle_wheelevent_callback = cb; }
    inline void setQSplitterHandle_KeyPressEvent_Callback(QSplitterHandle_KeyPressEvent_Callback cb) { qsplitterhandle_keypressevent_callback = cb; }
    inline void setQSplitterHandle_KeyReleaseEvent_Callback(QSplitterHandle_KeyReleaseEvent_Callback cb) { qsplitterhandle_keyreleaseevent_callback = cb; }
    inline void setQSplitterHandle_FocusInEvent_Callback(QSplitterHandle_FocusInEvent_Callback cb) { qsplitterhandle_focusinevent_callback = cb; }
    inline void setQSplitterHandle_FocusOutEvent_Callback(QSplitterHandle_FocusOutEvent_Callback cb) { qsplitterhandle_focusoutevent_callback = cb; }
    inline void setQSplitterHandle_EnterEvent_Callback(QSplitterHandle_EnterEvent_Callback cb) { qsplitterhandle_enterevent_callback = cb; }
    inline void setQSplitterHandle_LeaveEvent_Callback(QSplitterHandle_LeaveEvent_Callback cb) { qsplitterhandle_leaveevent_callback = cb; }
    inline void setQSplitterHandle_MoveEvent_Callback(QSplitterHandle_MoveEvent_Callback cb) { qsplitterhandle_moveevent_callback = cb; }
    inline void setQSplitterHandle_CloseEvent_Callback(QSplitterHandle_CloseEvent_Callback cb) { qsplitterhandle_closeevent_callback = cb; }
    inline void setQSplitterHandle_ContextMenuEvent_Callback(QSplitterHandle_ContextMenuEvent_Callback cb) { qsplitterhandle_contextmenuevent_callback = cb; }
    inline void setQSplitterHandle_TabletEvent_Callback(QSplitterHandle_TabletEvent_Callback cb) { qsplitterhandle_tabletevent_callback = cb; }
    inline void setQSplitterHandle_ActionEvent_Callback(QSplitterHandle_ActionEvent_Callback cb) { qsplitterhandle_actionevent_callback = cb; }
    inline void setQSplitterHandle_DragEnterEvent_Callback(QSplitterHandle_DragEnterEvent_Callback cb) { qsplitterhandle_dragenterevent_callback = cb; }
    inline void setQSplitterHandle_DragMoveEvent_Callback(QSplitterHandle_DragMoveEvent_Callback cb) { qsplitterhandle_dragmoveevent_callback = cb; }
    inline void setQSplitterHandle_DragLeaveEvent_Callback(QSplitterHandle_DragLeaveEvent_Callback cb) { qsplitterhandle_dragleaveevent_callback = cb; }
    inline void setQSplitterHandle_DropEvent_Callback(QSplitterHandle_DropEvent_Callback cb) { qsplitterhandle_dropevent_callback = cb; }
    inline void setQSplitterHandle_ShowEvent_Callback(QSplitterHandle_ShowEvent_Callback cb) { qsplitterhandle_showevent_callback = cb; }
    inline void setQSplitterHandle_HideEvent_Callback(QSplitterHandle_HideEvent_Callback cb) { qsplitterhandle_hideevent_callback = cb; }
    inline void setQSplitterHandle_NativeEvent_Callback(QSplitterHandle_NativeEvent_Callback cb) { qsplitterhandle_nativeevent_callback = cb; }
    inline void setQSplitterHandle_ChangeEvent_Callback(QSplitterHandle_ChangeEvent_Callback cb) { qsplitterhandle_changeevent_callback = cb; }
    inline void setQSplitterHandle_Metric_Callback(QSplitterHandle_Metric_Callback cb) { qsplitterhandle_metric_callback = cb; }
    inline void setQSplitterHandle_InitPainter_Callback(QSplitterHandle_InitPainter_Callback cb) { qsplitterhandle_initpainter_callback = cb; }
    inline void setQSplitterHandle_Redirected_Callback(QSplitterHandle_Redirected_Callback cb) { qsplitterhandle_redirected_callback = cb; }
    inline void setQSplitterHandle_SharedPainter_Callback(QSplitterHandle_SharedPainter_Callback cb) { qsplitterhandle_sharedpainter_callback = cb; }
    inline void setQSplitterHandle_InputMethodEvent_Callback(QSplitterHandle_InputMethodEvent_Callback cb) { qsplitterhandle_inputmethodevent_callback = cb; }
    inline void setQSplitterHandle_InputMethodQuery_Callback(QSplitterHandle_InputMethodQuery_Callback cb) { qsplitterhandle_inputmethodquery_callback = cb; }
    inline void setQSplitterHandle_FocusNextPrevChild_Callback(QSplitterHandle_FocusNextPrevChild_Callback cb) { qsplitterhandle_focusnextprevchild_callback = cb; }
    inline void setQSplitterHandle_EventFilter_Callback(QSplitterHandle_EventFilter_Callback cb) { qsplitterhandle_eventfilter_callback = cb; }
    inline void setQSplitterHandle_TimerEvent_Callback(QSplitterHandle_TimerEvent_Callback cb) { qsplitterhandle_timerevent_callback = cb; }
    inline void setQSplitterHandle_ChildEvent_Callback(QSplitterHandle_ChildEvent_Callback cb) { qsplitterhandle_childevent_callback = cb; }
    inline void setQSplitterHandle_CustomEvent_Callback(QSplitterHandle_CustomEvent_Callback cb) { qsplitterhandle_customevent_callback = cb; }
    inline void setQSplitterHandle_ConnectNotify_Callback(QSplitterHandle_ConnectNotify_Callback cb) { qsplitterhandle_connectnotify_callback = cb; }
    inline void setQSplitterHandle_DisconnectNotify_Callback(QSplitterHandle_DisconnectNotify_Callback cb) { qsplitterhandle_disconnectnotify_callback = cb; }
    inline void setQSplitterHandle_MoveSplitter_Callback(QSplitterHandle_MoveSplitter_Callback cb) { qsplitterhandle_movesplitter_callback = cb; }
    inline void setQSplitterHandle_ClosestLegalPosition_Callback(QSplitterHandle_ClosestLegalPosition_Callback cb) { qsplitterhandle_closestlegalposition_callback = cb; }
    inline void setQSplitterHandle_UpdateMicroFocus_Callback(QSplitterHandle_UpdateMicroFocus_Callback cb) { qsplitterhandle_updatemicrofocus_callback = cb; }
    inline void setQSplitterHandle_Create_Callback(QSplitterHandle_Create_Callback cb) { qsplitterhandle_create_callback = cb; }
    inline void setQSplitterHandle_Destroy_Callback(QSplitterHandle_Destroy_Callback cb) { qsplitterhandle_destroy_callback = cb; }
    inline void setQSplitterHandle_FocusNextChild_Callback(QSplitterHandle_FocusNextChild_Callback cb) { qsplitterhandle_focusnextchild_callback = cb; }
    inline void setQSplitterHandle_FocusPreviousChild_Callback(QSplitterHandle_FocusPreviousChild_Callback cb) { qsplitterhandle_focuspreviouschild_callback = cb; }
    inline void setQSplitterHandle_Sender_Callback(QSplitterHandle_Sender_Callback cb) { qsplitterhandle_sender_callback = cb; }
    inline void setQSplitterHandle_SenderSignalIndex_Callback(QSplitterHandle_SenderSignalIndex_Callback cb) { qsplitterhandle_sendersignalindex_callback = cb; }
    inline void setQSplitterHandle_Receivers_Callback(QSplitterHandle_Receivers_Callback cb) { qsplitterhandle_receivers_callback = cb; }
    inline void setQSplitterHandle_IsSignalConnected_Callback(QSplitterHandle_IsSignalConnected_Callback cb) { qsplitterhandle_issignalconnected_callback = cb; }
    inline void setQSplitterHandle_GetDecodedMetricF_Callback(QSplitterHandle_GetDecodedMetricF_Callback cb) { qsplitterhandle_getdecodedmetricf_callback = cb; }

    // Base flag setters
    inline void setQSplitterHandle_MetaObject_IsBase(bool value) const { qsplitterhandle_metaobject_isbase = value; }
    inline void setQSplitterHandle_Metacast_IsBase(bool value) const { qsplitterhandle_metacast_isbase = value; }
    inline void setQSplitterHandle_Metacall_IsBase(bool value) const { qsplitterhandle_metacall_isbase = value; }
    inline void setQSplitterHandle_SizeHint_IsBase(bool value) const { qsplitterhandle_sizehint_isbase = value; }
    inline void setQSplitterHandle_PaintEvent_IsBase(bool value) const { qsplitterhandle_paintevent_isbase = value; }
    inline void setQSplitterHandle_MouseMoveEvent_IsBase(bool value) const { qsplitterhandle_mousemoveevent_isbase = value; }
    inline void setQSplitterHandle_MousePressEvent_IsBase(bool value) const { qsplitterhandle_mousepressevent_isbase = value; }
    inline void setQSplitterHandle_MouseReleaseEvent_IsBase(bool value) const { qsplitterhandle_mousereleaseevent_isbase = value; }
    inline void setQSplitterHandle_ResizeEvent_IsBase(bool value) const { qsplitterhandle_resizeevent_isbase = value; }
    inline void setQSplitterHandle_Event_IsBase(bool value) const { qsplitterhandle_event_isbase = value; }
    inline void setQSplitterHandle_DevType_IsBase(bool value) const { qsplitterhandle_devtype_isbase = value; }
    inline void setQSplitterHandle_SetVisible_IsBase(bool value) const { qsplitterhandle_setvisible_isbase = value; }
    inline void setQSplitterHandle_MinimumSizeHint_IsBase(bool value) const { qsplitterhandle_minimumsizehint_isbase = value; }
    inline void setQSplitterHandle_HeightForWidth_IsBase(bool value) const { qsplitterhandle_heightforwidth_isbase = value; }
    inline void setQSplitterHandle_HasHeightForWidth_IsBase(bool value) const { qsplitterhandle_hasheightforwidth_isbase = value; }
    inline void setQSplitterHandle_PaintEngine_IsBase(bool value) const { qsplitterhandle_paintengine_isbase = value; }
    inline void setQSplitterHandle_MouseDoubleClickEvent_IsBase(bool value) const { qsplitterhandle_mousedoubleclickevent_isbase = value; }
    inline void setQSplitterHandle_WheelEvent_IsBase(bool value) const { qsplitterhandle_wheelevent_isbase = value; }
    inline void setQSplitterHandle_KeyPressEvent_IsBase(bool value) const { qsplitterhandle_keypressevent_isbase = value; }
    inline void setQSplitterHandle_KeyReleaseEvent_IsBase(bool value) const { qsplitterhandle_keyreleaseevent_isbase = value; }
    inline void setQSplitterHandle_FocusInEvent_IsBase(bool value) const { qsplitterhandle_focusinevent_isbase = value; }
    inline void setQSplitterHandle_FocusOutEvent_IsBase(bool value) const { qsplitterhandle_focusoutevent_isbase = value; }
    inline void setQSplitterHandle_EnterEvent_IsBase(bool value) const { qsplitterhandle_enterevent_isbase = value; }
    inline void setQSplitterHandle_LeaveEvent_IsBase(bool value) const { qsplitterhandle_leaveevent_isbase = value; }
    inline void setQSplitterHandle_MoveEvent_IsBase(bool value) const { qsplitterhandle_moveevent_isbase = value; }
    inline void setQSplitterHandle_CloseEvent_IsBase(bool value) const { qsplitterhandle_closeevent_isbase = value; }
    inline void setQSplitterHandle_ContextMenuEvent_IsBase(bool value) const { qsplitterhandle_contextmenuevent_isbase = value; }
    inline void setQSplitterHandle_TabletEvent_IsBase(bool value) const { qsplitterhandle_tabletevent_isbase = value; }
    inline void setQSplitterHandle_ActionEvent_IsBase(bool value) const { qsplitterhandle_actionevent_isbase = value; }
    inline void setQSplitterHandle_DragEnterEvent_IsBase(bool value) const { qsplitterhandle_dragenterevent_isbase = value; }
    inline void setQSplitterHandle_DragMoveEvent_IsBase(bool value) const { qsplitterhandle_dragmoveevent_isbase = value; }
    inline void setQSplitterHandle_DragLeaveEvent_IsBase(bool value) const { qsplitterhandle_dragleaveevent_isbase = value; }
    inline void setQSplitterHandle_DropEvent_IsBase(bool value) const { qsplitterhandle_dropevent_isbase = value; }
    inline void setQSplitterHandle_ShowEvent_IsBase(bool value) const { qsplitterhandle_showevent_isbase = value; }
    inline void setQSplitterHandle_HideEvent_IsBase(bool value) const { qsplitterhandle_hideevent_isbase = value; }
    inline void setQSplitterHandle_NativeEvent_IsBase(bool value) const { qsplitterhandle_nativeevent_isbase = value; }
    inline void setQSplitterHandle_ChangeEvent_IsBase(bool value) const { qsplitterhandle_changeevent_isbase = value; }
    inline void setQSplitterHandle_Metric_IsBase(bool value) const { qsplitterhandle_metric_isbase = value; }
    inline void setQSplitterHandle_InitPainter_IsBase(bool value) const { qsplitterhandle_initpainter_isbase = value; }
    inline void setQSplitterHandle_Redirected_IsBase(bool value) const { qsplitterhandle_redirected_isbase = value; }
    inline void setQSplitterHandle_SharedPainter_IsBase(bool value) const { qsplitterhandle_sharedpainter_isbase = value; }
    inline void setQSplitterHandle_InputMethodEvent_IsBase(bool value) const { qsplitterhandle_inputmethodevent_isbase = value; }
    inline void setQSplitterHandle_InputMethodQuery_IsBase(bool value) const { qsplitterhandle_inputmethodquery_isbase = value; }
    inline void setQSplitterHandle_FocusNextPrevChild_IsBase(bool value) const { qsplitterhandle_focusnextprevchild_isbase = value; }
    inline void setQSplitterHandle_EventFilter_IsBase(bool value) const { qsplitterhandle_eventfilter_isbase = value; }
    inline void setQSplitterHandle_TimerEvent_IsBase(bool value) const { qsplitterhandle_timerevent_isbase = value; }
    inline void setQSplitterHandle_ChildEvent_IsBase(bool value) const { qsplitterhandle_childevent_isbase = value; }
    inline void setQSplitterHandle_CustomEvent_IsBase(bool value) const { qsplitterhandle_customevent_isbase = value; }
    inline void setQSplitterHandle_ConnectNotify_IsBase(bool value) const { qsplitterhandle_connectnotify_isbase = value; }
    inline void setQSplitterHandle_DisconnectNotify_IsBase(bool value) const { qsplitterhandle_disconnectnotify_isbase = value; }
    inline void setQSplitterHandle_MoveSplitter_IsBase(bool value) const { qsplitterhandle_movesplitter_isbase = value; }
    inline void setQSplitterHandle_ClosestLegalPosition_IsBase(bool value) const { qsplitterhandle_closestlegalposition_isbase = value; }
    inline void setQSplitterHandle_UpdateMicroFocus_IsBase(bool value) const { qsplitterhandle_updatemicrofocus_isbase = value; }
    inline void setQSplitterHandle_Create_IsBase(bool value) const { qsplitterhandle_create_isbase = value; }
    inline void setQSplitterHandle_Destroy_IsBase(bool value) const { qsplitterhandle_destroy_isbase = value; }
    inline void setQSplitterHandle_FocusNextChild_IsBase(bool value) const { qsplitterhandle_focusnextchild_isbase = value; }
    inline void setQSplitterHandle_FocusPreviousChild_IsBase(bool value) const { qsplitterhandle_focuspreviouschild_isbase = value; }
    inline void setQSplitterHandle_Sender_IsBase(bool value) const { qsplitterhandle_sender_isbase = value; }
    inline void setQSplitterHandle_SenderSignalIndex_IsBase(bool value) const { qsplitterhandle_sendersignalindex_isbase = value; }
    inline void setQSplitterHandle_Receivers_IsBase(bool value) const { qsplitterhandle_receivers_isbase = value; }
    inline void setQSplitterHandle_IsSignalConnected_IsBase(bool value) const { qsplitterhandle_issignalconnected_isbase = value; }
    inline void setQSplitterHandle_GetDecodedMetricF_IsBase(bool value) const { qsplitterhandle_getdecodedmetricf_isbase = value; }

    // Virtual method for C ABI access and custom callback
    virtual const QMetaObject* metaObject() const override {
        if (qsplitterhandle_metaobject_isbase) {
            qsplitterhandle_metaobject_isbase = false;
            return QSplitterHandle::metaObject();
        }
        auto metaobject_cb = qsplitterhandle_metaobject_callback;
        if (metaobject_cb) {
            QMetaObject* callback_ret = metaobject_cb();
            return callback_ret;
        }
        return QSplitterHandle::metaObject();
    }

    // Virtual method for C ABI access and custom callback
    virtual void* qt_metacast(const char* param1) override {
        if (qsplitterhandle_metacast_isbase) {
            qsplitterhandle_metacast_isbase = false;
            return QSplitterHandle::qt_metacast(param1);
        }
        auto metacast_cb = qsplitterhandle_metacast_callback;
        if (metacast_cb) {
            const char* cbval1 = (const char*)param1;

            void* callback_ret = metacast_cb(this, cbval1);
            return callback_ret;
        }
        return QSplitterHandle::qt_metacast(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (qsplitterhandle_metacall_isbase) {
            qsplitterhandle_metacall_isbase = false;
            return QSplitterHandle::qt_metacall(param1, param2, param3);
        }
        auto metacall_cb = qsplitterhandle_metacall_callback;
        if (metacall_cb) {
            int cbval1 = static_cast<int>(param1);
            int cbval2 = param2;
            void** cbval3 = param3;

            int callback_ret = metacall_cb(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        }
        return QSplitterHandle::qt_metacall(param1, param2, param3);
    }

    // Virtual method for C ABI access and custom callback
    virtual QSize sizeHint() const override {
        if (qsplitterhandle_sizehint_isbase) {
            qsplitterhandle_sizehint_isbase = false;
            return QSplitterHandle::sizeHint();
        }
        auto sizehint_cb = qsplitterhandle_sizehint_callback;
        if (sizehint_cb) {
            QSize* callback_ret = sizehint_cb();
            return *callback_ret;
        }
        return QSplitterHandle::sizeHint();
    }

    // Virtual method for C ABI access and custom callback
    virtual void paintEvent(QPaintEvent* param1) override {
        if (qsplitterhandle_paintevent_isbase) {
            qsplitterhandle_paintevent_isbase = false;
            QSplitterHandle::paintEvent(param1);
            return;
        }
        auto paintevent_cb = qsplitterhandle_paintevent_callback;
        if (paintevent_cb) {
            QPaintEvent* cbval1 = param1;

            paintevent_cb(this, cbval1);
            return;
        }
        QSplitterHandle::paintEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseMoveEvent(QMouseEvent* param1) override {
        if (qsplitterhandle_mousemoveevent_isbase) {
            qsplitterhandle_mousemoveevent_isbase = false;
            QSplitterHandle::mouseMoveEvent(param1);
            return;
        }
        auto mousemoveevent_cb = qsplitterhandle_mousemoveevent_callback;
        if (mousemoveevent_cb) {
            QMouseEvent* cbval1 = param1;

            mousemoveevent_cb(this, cbval1);
            return;
        }
        QSplitterHandle::mouseMoveEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual void mousePressEvent(QMouseEvent* param1) override {
        if (qsplitterhandle_mousepressevent_isbase) {
            qsplitterhandle_mousepressevent_isbase = false;
            QSplitterHandle::mousePressEvent(param1);
            return;
        }
        auto mousepressevent_cb = qsplitterhandle_mousepressevent_callback;
        if (mousepressevent_cb) {
            QMouseEvent* cbval1 = param1;

            mousepressevent_cb(this, cbval1);
            return;
        }
        QSplitterHandle::mousePressEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseReleaseEvent(QMouseEvent* param1) override {
        if (qsplitterhandle_mousereleaseevent_isbase) {
            qsplitterhandle_mousereleaseevent_isbase = false;
            QSplitterHandle::mouseReleaseEvent(param1);
            return;
        }
        auto mousereleaseevent_cb = qsplitterhandle_mousereleaseevent_callback;
        if (mousereleaseevent_cb) {
            QMouseEvent* cbval1 = param1;

            mousereleaseevent_cb(this, cbval1);
            return;
        }
        QSplitterHandle::mouseReleaseEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual void resizeEvent(QResizeEvent* param1) override {
        if (qsplitterhandle_resizeevent_isbase) {
            qsplitterhandle_resizeevent_isbase = false;
            QSplitterHandle::resizeEvent(param1);
            return;
        }
        auto resizeevent_cb = qsplitterhandle_resizeevent_callback;
        if (resizeevent_cb) {
            QResizeEvent* cbval1 = param1;

            resizeevent_cb(this, cbval1);
            return;
        }
        QSplitterHandle::resizeEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* param1) override {
        if (qsplitterhandle_event_isbase) {
            qsplitterhandle_event_isbase = false;
            return QSplitterHandle::event(param1);
        }
        auto event_cb = qsplitterhandle_event_callback;
        if (event_cb) {
            QEvent* cbval1 = param1;

            bool callback_ret = event_cb(this, cbval1);
            return callback_ret;
        }
        return QSplitterHandle::event(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual int devType() const override {
        if (qsplitterhandle_devtype_isbase) {
            qsplitterhandle_devtype_isbase = false;
            return QSplitterHandle::devType();
        }
        auto devtype_cb = qsplitterhandle_devtype_callback;
        if (devtype_cb) {
            int callback_ret = devtype_cb();
            return static_cast<int>(callback_ret);
        }
        return QSplitterHandle::devType();
    }

    // Virtual method for C ABI access and custom callback
    virtual void setVisible(bool visible) override {
        if (qsplitterhandle_setvisible_isbase) {
            qsplitterhandle_setvisible_isbase = false;
            QSplitterHandle::setVisible(visible);
            return;
        }
        auto setvisible_cb = qsplitterhandle_setvisible_callback;
        if (setvisible_cb) {
            bool cbval1 = visible;

            setvisible_cb(this, cbval1);
            return;
        }
        QSplitterHandle::setVisible(visible);
    }

    // Virtual method for C ABI access and custom callback
    virtual QSize minimumSizeHint() const override {
        if (qsplitterhandle_minimumsizehint_isbase) {
            qsplitterhandle_minimumsizehint_isbase = false;
            return QSplitterHandle::minimumSizeHint();
        }
        auto minimumsizehint_cb = qsplitterhandle_minimumsizehint_callback;
        if (minimumsizehint_cb) {
            QSize* callback_ret = minimumsizehint_cb();
            return *callback_ret;
        }
        return QSplitterHandle::minimumSizeHint();
    }

    // Virtual method for C ABI access and custom callback
    virtual int heightForWidth(int param1) const override {
        if (qsplitterhandle_heightforwidth_isbase) {
            qsplitterhandle_heightforwidth_isbase = false;
            return QSplitterHandle::heightForWidth(param1);
        }
        auto heightforwidth_cb = qsplitterhandle_heightforwidth_callback;
        if (heightforwidth_cb) {
            int cbval1 = param1;

            int callback_ret = heightforwidth_cb(this, cbval1);
            return static_cast<int>(callback_ret);
        }
        return QSplitterHandle::heightForWidth(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool hasHeightForWidth() const override {
        if (qsplitterhandle_hasheightforwidth_isbase) {
            qsplitterhandle_hasheightforwidth_isbase = false;
            return QSplitterHandle::hasHeightForWidth();
        }
        auto hasheightforwidth_cb = qsplitterhandle_hasheightforwidth_callback;
        if (hasheightforwidth_cb) {
            bool callback_ret = hasheightforwidth_cb();
            return callback_ret;
        }
        return QSplitterHandle::hasHeightForWidth();
    }

    // Virtual method for C ABI access and custom callback
    virtual QPaintEngine* paintEngine() const override {
        if (qsplitterhandle_paintengine_isbase) {
            qsplitterhandle_paintengine_isbase = false;
            return QSplitterHandle::paintEngine();
        }
        auto paintengine_cb = qsplitterhandle_paintengine_callback;
        if (paintengine_cb) {
            QPaintEngine* callback_ret = paintengine_cb();
            return callback_ret;
        }
        return QSplitterHandle::paintEngine();
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseDoubleClickEvent(QMouseEvent* event) override {
        if (qsplitterhandle_mousedoubleclickevent_isbase) {
            qsplitterhandle_mousedoubleclickevent_isbase = false;
            QSplitterHandle::mouseDoubleClickEvent(event);
            return;
        }
        auto mousedoubleclickevent_cb = qsplitterhandle_mousedoubleclickevent_callback;
        if (mousedoubleclickevent_cb) {
            QMouseEvent* cbval1 = event;

            mousedoubleclickevent_cb(this, cbval1);
            return;
        }
        QSplitterHandle::mouseDoubleClickEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void wheelEvent(QWheelEvent* event) override {
        if (qsplitterhandle_wheelevent_isbase) {
            qsplitterhandle_wheelevent_isbase = false;
            QSplitterHandle::wheelEvent(event);
            return;
        }
        auto wheelevent_cb = qsplitterhandle_wheelevent_callback;
        if (wheelevent_cb) {
            QWheelEvent* cbval1 = event;

            wheelevent_cb(this, cbval1);
            return;
        }
        QSplitterHandle::wheelEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void keyPressEvent(QKeyEvent* event) override {
        if (qsplitterhandle_keypressevent_isbase) {
            qsplitterhandle_keypressevent_isbase = false;
            QSplitterHandle::keyPressEvent(event);
            return;
        }
        auto keypressevent_cb = qsplitterhandle_keypressevent_callback;
        if (keypressevent_cb) {
            QKeyEvent* cbval1 = event;

            keypressevent_cb(this, cbval1);
            return;
        }
        QSplitterHandle::keyPressEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void keyReleaseEvent(QKeyEvent* event) override {
        if (qsplitterhandle_keyreleaseevent_isbase) {
            qsplitterhandle_keyreleaseevent_isbase = false;
            QSplitterHandle::keyReleaseEvent(event);
            return;
        }
        auto keyreleaseevent_cb = qsplitterhandle_keyreleaseevent_callback;
        if (keyreleaseevent_cb) {
            QKeyEvent* cbval1 = event;

            keyreleaseevent_cb(this, cbval1);
            return;
        }
        QSplitterHandle::keyReleaseEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void focusInEvent(QFocusEvent* event) override {
        if (qsplitterhandle_focusinevent_isbase) {
            qsplitterhandle_focusinevent_isbase = false;
            QSplitterHandle::focusInEvent(event);
            return;
        }
        auto focusinevent_cb = qsplitterhandle_focusinevent_callback;
        if (focusinevent_cb) {
            QFocusEvent* cbval1 = event;

            focusinevent_cb(this, cbval1);
            return;
        }
        QSplitterHandle::focusInEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void focusOutEvent(QFocusEvent* event) override {
        if (qsplitterhandle_focusoutevent_isbase) {
            qsplitterhandle_focusoutevent_isbase = false;
            QSplitterHandle::focusOutEvent(event);
            return;
        }
        auto focusoutevent_cb = qsplitterhandle_focusoutevent_callback;
        if (focusoutevent_cb) {
            QFocusEvent* cbval1 = event;

            focusoutevent_cb(this, cbval1);
            return;
        }
        QSplitterHandle::focusOutEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void enterEvent(QEnterEvent* event) override {
        if (qsplitterhandle_enterevent_isbase) {
            qsplitterhandle_enterevent_isbase = false;
            QSplitterHandle::enterEvent(event);
            return;
        }
        auto enterevent_cb = qsplitterhandle_enterevent_callback;
        if (enterevent_cb) {
            QEnterEvent* cbval1 = event;

            enterevent_cb(this, cbval1);
            return;
        }
        QSplitterHandle::enterEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void leaveEvent(QEvent* event) override {
        if (qsplitterhandle_leaveevent_isbase) {
            qsplitterhandle_leaveevent_isbase = false;
            QSplitterHandle::leaveEvent(event);
            return;
        }
        auto leaveevent_cb = qsplitterhandle_leaveevent_callback;
        if (leaveevent_cb) {
            QEvent* cbval1 = event;

            leaveevent_cb(this, cbval1);
            return;
        }
        QSplitterHandle::leaveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void moveEvent(QMoveEvent* event) override {
        if (qsplitterhandle_moveevent_isbase) {
            qsplitterhandle_moveevent_isbase = false;
            QSplitterHandle::moveEvent(event);
            return;
        }
        auto moveevent_cb = qsplitterhandle_moveevent_callback;
        if (moveevent_cb) {
            QMoveEvent* cbval1 = event;

            moveevent_cb(this, cbval1);
            return;
        }
        QSplitterHandle::moveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void closeEvent(QCloseEvent* event) override {
        if (qsplitterhandle_closeevent_isbase) {
            qsplitterhandle_closeevent_isbase = false;
            QSplitterHandle::closeEvent(event);
            return;
        }
        auto closeevent_cb = qsplitterhandle_closeevent_callback;
        if (closeevent_cb) {
            QCloseEvent* cbval1 = event;

            closeevent_cb(this, cbval1);
            return;
        }
        QSplitterHandle::closeEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void contextMenuEvent(QContextMenuEvent* event) override {
        if (qsplitterhandle_contextmenuevent_isbase) {
            qsplitterhandle_contextmenuevent_isbase = false;
            QSplitterHandle::contextMenuEvent(event);
            return;
        }
        auto contextmenuevent_cb = qsplitterhandle_contextmenuevent_callback;
        if (contextmenuevent_cb) {
            QContextMenuEvent* cbval1 = event;

            contextmenuevent_cb(this, cbval1);
            return;
        }
        QSplitterHandle::contextMenuEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void tabletEvent(QTabletEvent* event) override {
        if (qsplitterhandle_tabletevent_isbase) {
            qsplitterhandle_tabletevent_isbase = false;
            QSplitterHandle::tabletEvent(event);
            return;
        }
        auto tabletevent_cb = qsplitterhandle_tabletevent_callback;
        if (tabletevent_cb) {
            QTabletEvent* cbval1 = event;

            tabletevent_cb(this, cbval1);
            return;
        }
        QSplitterHandle::tabletEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void actionEvent(QActionEvent* event) override {
        if (qsplitterhandle_actionevent_isbase) {
            qsplitterhandle_actionevent_isbase = false;
            QSplitterHandle::actionEvent(event);
            return;
        }
        auto actionevent_cb = qsplitterhandle_actionevent_callback;
        if (actionevent_cb) {
            QActionEvent* cbval1 = event;

            actionevent_cb(this, cbval1);
            return;
        }
        QSplitterHandle::actionEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragEnterEvent(QDragEnterEvent* event) override {
        if (qsplitterhandle_dragenterevent_isbase) {
            qsplitterhandle_dragenterevent_isbase = false;
            QSplitterHandle::dragEnterEvent(event);
            return;
        }
        auto dragenterevent_cb = qsplitterhandle_dragenterevent_callback;
        if (dragenterevent_cb) {
            QDragEnterEvent* cbval1 = event;

            dragenterevent_cb(this, cbval1);
            return;
        }
        QSplitterHandle::dragEnterEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragMoveEvent(QDragMoveEvent* event) override {
        if (qsplitterhandle_dragmoveevent_isbase) {
            qsplitterhandle_dragmoveevent_isbase = false;
            QSplitterHandle::dragMoveEvent(event);
            return;
        }
        auto dragmoveevent_cb = qsplitterhandle_dragmoveevent_callback;
        if (dragmoveevent_cb) {
            QDragMoveEvent* cbval1 = event;

            dragmoveevent_cb(this, cbval1);
            return;
        }
        QSplitterHandle::dragMoveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragLeaveEvent(QDragLeaveEvent* event) override {
        if (qsplitterhandle_dragleaveevent_isbase) {
            qsplitterhandle_dragleaveevent_isbase = false;
            QSplitterHandle::dragLeaveEvent(event);
            return;
        }
        auto dragleaveevent_cb = qsplitterhandle_dragleaveevent_callback;
        if (dragleaveevent_cb) {
            QDragLeaveEvent* cbval1 = event;

            dragleaveevent_cb(this, cbval1);
            return;
        }
        QSplitterHandle::dragLeaveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void dropEvent(QDropEvent* event) override {
        if (qsplitterhandle_dropevent_isbase) {
            qsplitterhandle_dropevent_isbase = false;
            QSplitterHandle::dropEvent(event);
            return;
        }
        auto dropevent_cb = qsplitterhandle_dropevent_callback;
        if (dropevent_cb) {
            QDropEvent* cbval1 = event;

            dropevent_cb(this, cbval1);
            return;
        }
        QSplitterHandle::dropEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void showEvent(QShowEvent* event) override {
        if (qsplitterhandle_showevent_isbase) {
            qsplitterhandle_showevent_isbase = false;
            QSplitterHandle::showEvent(event);
            return;
        }
        auto showevent_cb = qsplitterhandle_showevent_callback;
        if (showevent_cb) {
            QShowEvent* cbval1 = event;

            showevent_cb(this, cbval1);
            return;
        }
        QSplitterHandle::showEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void hideEvent(QHideEvent* event) override {
        if (qsplitterhandle_hideevent_isbase) {
            qsplitterhandle_hideevent_isbase = false;
            QSplitterHandle::hideEvent(event);
            return;
        }
        auto hideevent_cb = qsplitterhandle_hideevent_callback;
        if (hideevent_cb) {
            QHideEvent* cbval1 = event;

            hideevent_cb(this, cbval1);
            return;
        }
        QSplitterHandle::hideEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool nativeEvent(const QByteArray& eventType, void* message, qintptr* result) override {
        if (qsplitterhandle_nativeevent_isbase) {
            qsplitterhandle_nativeevent_isbase = false;
            return QSplitterHandle::nativeEvent(eventType, message, result);
        }
        auto nativeevent_cb = qsplitterhandle_nativeevent_callback;
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
        return QSplitterHandle::nativeEvent(eventType, message, result);
    }

    // Virtual method for C ABI access and custom callback
    virtual void changeEvent(QEvent* param1) override {
        if (qsplitterhandle_changeevent_isbase) {
            qsplitterhandle_changeevent_isbase = false;
            QSplitterHandle::changeEvent(param1);
            return;
        }
        auto changeevent_cb = qsplitterhandle_changeevent_callback;
        if (changeevent_cb) {
            QEvent* cbval1 = param1;

            changeevent_cb(this, cbval1);
            return;
        }
        QSplitterHandle::changeEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual int metric(QPaintDevice::PaintDeviceMetric param1) const override {
        if (qsplitterhandle_metric_isbase) {
            qsplitterhandle_metric_isbase = false;
            return QSplitterHandle::metric(param1);
        }
        auto metric_cb = qsplitterhandle_metric_callback;
        if (metric_cb) {
            int cbval1 = static_cast<int>(param1);

            int callback_ret = metric_cb(this, cbval1);
            return static_cast<int>(callback_ret);
        }
        return QSplitterHandle::metric(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual void initPainter(QPainter* painter) const override {
        if (qsplitterhandle_initpainter_isbase) {
            qsplitterhandle_initpainter_isbase = false;
            QSplitterHandle::initPainter(painter);
            return;
        }
        auto initpainter_cb = qsplitterhandle_initpainter_callback;
        if (initpainter_cb) {
            QPainter* cbval1 = painter;

            initpainter_cb(this, cbval1);
            return;
        }
        QSplitterHandle::initPainter(painter);
    }

    // Virtual method for C ABI access and custom callback
    virtual QPaintDevice* redirected(QPoint* offset) const override {
        if (qsplitterhandle_redirected_isbase) {
            qsplitterhandle_redirected_isbase = false;
            return QSplitterHandle::redirected(offset);
        }
        auto redirected_cb = qsplitterhandle_redirected_callback;
        if (redirected_cb) {
            QPoint* cbval1 = offset;

            QPaintDevice* callback_ret = redirected_cb(this, cbval1);
            return callback_ret;
        }
        return QSplitterHandle::redirected(offset);
    }

    // Virtual method for C ABI access and custom callback
    virtual QPainter* sharedPainter() const override {
        if (qsplitterhandle_sharedpainter_isbase) {
            qsplitterhandle_sharedpainter_isbase = false;
            return QSplitterHandle::sharedPainter();
        }
        auto sharedpainter_cb = qsplitterhandle_sharedpainter_callback;
        if (sharedpainter_cb) {
            QPainter* callback_ret = sharedpainter_cb();
            return callback_ret;
        }
        return QSplitterHandle::sharedPainter();
    }

    // Virtual method for C ABI access and custom callback
    virtual void inputMethodEvent(QInputMethodEvent* param1) override {
        if (qsplitterhandle_inputmethodevent_isbase) {
            qsplitterhandle_inputmethodevent_isbase = false;
            QSplitterHandle::inputMethodEvent(param1);
            return;
        }
        auto inputmethodevent_cb = qsplitterhandle_inputmethodevent_callback;
        if (inputmethodevent_cb) {
            QInputMethodEvent* cbval1 = param1;

            inputmethodevent_cb(this, cbval1);
            return;
        }
        QSplitterHandle::inputMethodEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual QVariant inputMethodQuery(Qt::InputMethodQuery param1) const override {
        if (qsplitterhandle_inputmethodquery_isbase) {
            qsplitterhandle_inputmethodquery_isbase = false;
            return QSplitterHandle::inputMethodQuery(param1);
        }
        auto inputmethodquery_cb = qsplitterhandle_inputmethodquery_callback;
        if (inputmethodquery_cb) {
            int cbval1 = static_cast<int>(param1);

            QVariant* callback_ret = inputmethodquery_cb(this, cbval1);
            return *callback_ret;
        }
        return QSplitterHandle::inputMethodQuery(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool focusNextPrevChild(bool next) override {
        if (qsplitterhandle_focusnextprevchild_isbase) {
            qsplitterhandle_focusnextprevchild_isbase = false;
            return QSplitterHandle::focusNextPrevChild(next);
        }
        auto focusnextprevchild_cb = qsplitterhandle_focusnextprevchild_callback;
        if (focusnextprevchild_cb) {
            bool cbval1 = next;

            bool callback_ret = focusnextprevchild_cb(this, cbval1);
            return callback_ret;
        }
        return QSplitterHandle::focusNextPrevChild(next);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* watched, QEvent* event) override {
        if (qsplitterhandle_eventfilter_isbase) {
            qsplitterhandle_eventfilter_isbase = false;
            return QSplitterHandle::eventFilter(watched, event);
        }
        auto eventfilter_cb = qsplitterhandle_eventfilter_callback;
        if (eventfilter_cb) {
            QObject* cbval1 = watched;
            QEvent* cbval2 = event;

            bool callback_ret = eventfilter_cb(this, cbval1, cbval2);
            return callback_ret;
        }
        return QSplitterHandle::eventFilter(watched, event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (qsplitterhandle_timerevent_isbase) {
            qsplitterhandle_timerevent_isbase = false;
            QSplitterHandle::timerEvent(event);
            return;
        }
        auto timerevent_cb = qsplitterhandle_timerevent_callback;
        if (timerevent_cb) {
            QTimerEvent* cbval1 = event;

            timerevent_cb(this, cbval1);
            return;
        }
        QSplitterHandle::timerEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (qsplitterhandle_childevent_isbase) {
            qsplitterhandle_childevent_isbase = false;
            QSplitterHandle::childEvent(event);
            return;
        }
        auto childevent_cb = qsplitterhandle_childevent_callback;
        if (childevent_cb) {
            QChildEvent* cbval1 = event;

            childevent_cb(this, cbval1);
            return;
        }
        QSplitterHandle::childEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (qsplitterhandle_customevent_isbase) {
            qsplitterhandle_customevent_isbase = false;
            QSplitterHandle::customEvent(event);
            return;
        }
        auto customevent_cb = qsplitterhandle_customevent_callback;
        if (customevent_cb) {
            QEvent* cbval1 = event;

            customevent_cb(this, cbval1);
            return;
        }
        QSplitterHandle::customEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (qsplitterhandle_connectnotify_isbase) {
            qsplitterhandle_connectnotify_isbase = false;
            QSplitterHandle::connectNotify(signal);
            return;
        }
        auto connectnotify_cb = qsplitterhandle_connectnotify_callback;
        if (connectnotify_cb) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            connectnotify_cb(this, cbval1);
            return;
        }
        QSplitterHandle::connectNotify(signal);
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (qsplitterhandle_disconnectnotify_isbase) {
            qsplitterhandle_disconnectnotify_isbase = false;
            QSplitterHandle::disconnectNotify(signal);
            return;
        }
        auto disconnectnotify_cb = qsplitterhandle_disconnectnotify_callback;
        if (disconnectnotify_cb) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            disconnectnotify_cb(this, cbval1);
            return;
        }
        QSplitterHandle::disconnectNotify(signal);
    }

    // Virtual method for C ABI access and custom callback
    void moveSplitter(int p) {
        if (qsplitterhandle_movesplitter_isbase) {
            qsplitterhandle_movesplitter_isbase = false;
            QSplitterHandle::moveSplitter(p);
            return;
        }
        auto movesplitter_cb = qsplitterhandle_movesplitter_callback;
        if (movesplitter_cb) {
            int cbval1 = p;

            movesplitter_cb(this, cbval1);
            return;
        }
        QSplitterHandle::moveSplitter(p);
    }

    // Virtual method for C ABI access and custom callback
    int closestLegalPosition(int p) {
        if (qsplitterhandle_closestlegalposition_isbase) {
            qsplitterhandle_closestlegalposition_isbase = false;
            return QSplitterHandle::closestLegalPosition(p);
        }
        auto closestlegalposition_cb = qsplitterhandle_closestlegalposition_callback;
        if (closestlegalposition_cb) {
            int cbval1 = p;

            int callback_ret = closestlegalposition_cb(this, cbval1);
            return static_cast<int>(callback_ret);
        }
        return QSplitterHandle::closestLegalPosition(p);
    }

    // Virtual method for C ABI access and custom callback
    void updateMicroFocus() {
        if (qsplitterhandle_updatemicrofocus_isbase) {
            qsplitterhandle_updatemicrofocus_isbase = false;
            QSplitterHandle::updateMicroFocus();
            return;
        }
        auto updatemicrofocus_cb = qsplitterhandle_updatemicrofocus_callback;
        if (updatemicrofocus_cb) {
            updatemicrofocus_cb();
            return;
        }
        QSplitterHandle::updateMicroFocus();
    }

    // Virtual method for C ABI access and custom callback
    void create() {
        if (qsplitterhandle_create_isbase) {
            qsplitterhandle_create_isbase = false;
            QSplitterHandle::create();
            return;
        }
        auto create_cb = qsplitterhandle_create_callback;
        if (create_cb) {
            create_cb();
            return;
        }
        QSplitterHandle::create();
    }

    // Virtual method for C ABI access and custom callback
    void destroy() {
        if (qsplitterhandle_destroy_isbase) {
            qsplitterhandle_destroy_isbase = false;
            QSplitterHandle::destroy();
            return;
        }
        auto destroy_cb = qsplitterhandle_destroy_callback;
        if (destroy_cb) {
            destroy_cb();
            return;
        }
        QSplitterHandle::destroy();
    }

    // Virtual method for C ABI access and custom callback
    bool focusNextChild() {
        if (qsplitterhandle_focusnextchild_isbase) {
            qsplitterhandle_focusnextchild_isbase = false;
            return QSplitterHandle::focusNextChild();
        }
        auto focusnextchild_cb = qsplitterhandle_focusnextchild_callback;
        if (focusnextchild_cb) {
            bool callback_ret = focusnextchild_cb();
            return callback_ret;
        }
        return QSplitterHandle::focusNextChild();
    }

    // Virtual method for C ABI access and custom callback
    bool focusPreviousChild() {
        if (qsplitterhandle_focuspreviouschild_isbase) {
            qsplitterhandle_focuspreviouschild_isbase = false;
            return QSplitterHandle::focusPreviousChild();
        }
        auto focuspreviouschild_cb = qsplitterhandle_focuspreviouschild_callback;
        if (focuspreviouschild_cb) {
            bool callback_ret = focuspreviouschild_cb();
            return callback_ret;
        }
        return QSplitterHandle::focusPreviousChild();
    }

    // Virtual method for C ABI access and custom callback
    QObject* sender() const {
        if (qsplitterhandle_sender_isbase) {
            qsplitterhandle_sender_isbase = false;
            return QSplitterHandle::sender();
        }
        auto sender_cb = qsplitterhandle_sender_callback;
        if (sender_cb) {
            QObject* callback_ret = sender_cb();
            return callback_ret;
        }
        return QSplitterHandle::sender();
    }

    // Virtual method for C ABI access and custom callback
    int senderSignalIndex() const {
        if (qsplitterhandle_sendersignalindex_isbase) {
            qsplitterhandle_sendersignalindex_isbase = false;
            return QSplitterHandle::senderSignalIndex();
        }
        auto sendersignalindex_cb = qsplitterhandle_sendersignalindex_callback;
        if (sendersignalindex_cb) {
            int callback_ret = sendersignalindex_cb();
            return static_cast<int>(callback_ret);
        }
        return QSplitterHandle::senderSignalIndex();
    }

    // Virtual method for C ABI access and custom callback
    int receivers(const char* signal) const {
        if (qsplitterhandle_receivers_isbase) {
            qsplitterhandle_receivers_isbase = false;
            return QSplitterHandle::receivers(signal);
        }
        auto receivers_cb = qsplitterhandle_receivers_callback;
        if (receivers_cb) {
            const char* cbval1 = (const char*)signal;

            int callback_ret = receivers_cb(this, cbval1);
            return static_cast<int>(callback_ret);
        }
        return QSplitterHandle::receivers(signal);
    }

    // Virtual method for C ABI access and custom callback
    bool isSignalConnected(const QMetaMethod& signal) const {
        if (qsplitterhandle_issignalconnected_isbase) {
            qsplitterhandle_issignalconnected_isbase = false;
            return QSplitterHandle::isSignalConnected(signal);
        }
        auto issignalconnected_cb = qsplitterhandle_issignalconnected_callback;
        if (issignalconnected_cb) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            bool callback_ret = issignalconnected_cb(this, cbval1);
            return callback_ret;
        }
        return QSplitterHandle::isSignalConnected(signal);
    }

    // Virtual method for C ABI access and custom callback
    double getDecodedMetricF(QPaintDevice::PaintDeviceMetric metricA, QPaintDevice::PaintDeviceMetric metricB) const {
        if (qsplitterhandle_getdecodedmetricf_isbase) {
            qsplitterhandle_getdecodedmetricf_isbase = false;
            return QSplitterHandle::getDecodedMetricF(metricA, metricB);
        }
        auto getdecodedmetricf_cb = qsplitterhandle_getdecodedmetricf_callback;
        if (getdecodedmetricf_cb) {
            int cbval1 = static_cast<int>(metricA);
            int cbval2 = static_cast<int>(metricB);

            double callback_ret = getdecodedmetricf_cb(this, cbval1, cbval2);
            return static_cast<double>(callback_ret);
        }
        return QSplitterHandle::getDecodedMetricF(metricA, metricB);
    }

    // Friend functions
    friend void QSplitterHandle_PaintEvent(QSplitterHandle* self, QPaintEvent* param1);
    friend void QSplitterHandle_SuperPaintEvent(QSplitterHandle* self, QPaintEvent* param1);
    friend void QSplitterHandle_MouseMoveEvent(QSplitterHandle* self, QMouseEvent* param1);
    friend void QSplitterHandle_SuperMouseMoveEvent(QSplitterHandle* self, QMouseEvent* param1);
    friend void QSplitterHandle_MousePressEvent(QSplitterHandle* self, QMouseEvent* param1);
    friend void QSplitterHandle_SuperMousePressEvent(QSplitterHandle* self, QMouseEvent* param1);
    friend void QSplitterHandle_MouseReleaseEvent(QSplitterHandle* self, QMouseEvent* param1);
    friend void QSplitterHandle_SuperMouseReleaseEvent(QSplitterHandle* self, QMouseEvent* param1);
    friend void QSplitterHandle_ResizeEvent(QSplitterHandle* self, QResizeEvent* param1);
    friend void QSplitterHandle_SuperResizeEvent(QSplitterHandle* self, QResizeEvent* param1);
    friend bool QSplitterHandle_Event(QSplitterHandle* self, QEvent* param1);
    friend bool QSplitterHandle_SuperEvent(QSplitterHandle* self, QEvent* param1);
    friend void QSplitterHandle_MouseDoubleClickEvent(QSplitterHandle* self, QMouseEvent* event);
    friend void QSplitterHandle_SuperMouseDoubleClickEvent(QSplitterHandle* self, QMouseEvent* event);
    friend void QSplitterHandle_WheelEvent(QSplitterHandle* self, QWheelEvent* event);
    friend void QSplitterHandle_SuperWheelEvent(QSplitterHandle* self, QWheelEvent* event);
    friend void QSplitterHandle_KeyPressEvent(QSplitterHandle* self, QKeyEvent* event);
    friend void QSplitterHandle_SuperKeyPressEvent(QSplitterHandle* self, QKeyEvent* event);
    friend void QSplitterHandle_KeyReleaseEvent(QSplitterHandle* self, QKeyEvent* event);
    friend void QSplitterHandle_SuperKeyReleaseEvent(QSplitterHandle* self, QKeyEvent* event);
    friend void QSplitterHandle_FocusInEvent(QSplitterHandle* self, QFocusEvent* event);
    friend void QSplitterHandle_SuperFocusInEvent(QSplitterHandle* self, QFocusEvent* event);
    friend void QSplitterHandle_FocusOutEvent(QSplitterHandle* self, QFocusEvent* event);
    friend void QSplitterHandle_SuperFocusOutEvent(QSplitterHandle* self, QFocusEvent* event);
    friend void QSplitterHandle_EnterEvent(QSplitterHandle* self, QEnterEvent* event);
    friend void QSplitterHandle_SuperEnterEvent(QSplitterHandle* self, QEnterEvent* event);
    friend void QSplitterHandle_LeaveEvent(QSplitterHandle* self, QEvent* event);
    friend void QSplitterHandle_SuperLeaveEvent(QSplitterHandle* self, QEvent* event);
    friend void QSplitterHandle_MoveEvent(QSplitterHandle* self, QMoveEvent* event);
    friend void QSplitterHandle_SuperMoveEvent(QSplitterHandle* self, QMoveEvent* event);
    friend void QSplitterHandle_CloseEvent(QSplitterHandle* self, QCloseEvent* event);
    friend void QSplitterHandle_SuperCloseEvent(QSplitterHandle* self, QCloseEvent* event);
    friend void QSplitterHandle_ContextMenuEvent(QSplitterHandle* self, QContextMenuEvent* event);
    friend void QSplitterHandle_SuperContextMenuEvent(QSplitterHandle* self, QContextMenuEvent* event);
    friend void QSplitterHandle_TabletEvent(QSplitterHandle* self, QTabletEvent* event);
    friend void QSplitterHandle_SuperTabletEvent(QSplitterHandle* self, QTabletEvent* event);
    friend void QSplitterHandle_ActionEvent(QSplitterHandle* self, QActionEvent* event);
    friend void QSplitterHandle_SuperActionEvent(QSplitterHandle* self, QActionEvent* event);
    friend void QSplitterHandle_DragEnterEvent(QSplitterHandle* self, QDragEnterEvent* event);
    friend void QSplitterHandle_SuperDragEnterEvent(QSplitterHandle* self, QDragEnterEvent* event);
    friend void QSplitterHandle_DragMoveEvent(QSplitterHandle* self, QDragMoveEvent* event);
    friend void QSplitterHandle_SuperDragMoveEvent(QSplitterHandle* self, QDragMoveEvent* event);
    friend void QSplitterHandle_DragLeaveEvent(QSplitterHandle* self, QDragLeaveEvent* event);
    friend void QSplitterHandle_SuperDragLeaveEvent(QSplitterHandle* self, QDragLeaveEvent* event);
    friend void QSplitterHandle_DropEvent(QSplitterHandle* self, QDropEvent* event);
    friend void QSplitterHandle_SuperDropEvent(QSplitterHandle* self, QDropEvent* event);
    friend void QSplitterHandle_ShowEvent(QSplitterHandle* self, QShowEvent* event);
    friend void QSplitterHandle_SuperShowEvent(QSplitterHandle* self, QShowEvent* event);
    friend void QSplitterHandle_HideEvent(QSplitterHandle* self, QHideEvent* event);
    friend void QSplitterHandle_SuperHideEvent(QSplitterHandle* self, QHideEvent* event);
    friend bool QSplitterHandle_NativeEvent(QSplitterHandle* self, const libqt_string eventType, void* message, intptr_t* result);
    friend bool QSplitterHandle_SuperNativeEvent(QSplitterHandle* self, const libqt_string eventType, void* message, intptr_t* result);
    friend void QSplitterHandle_ChangeEvent(QSplitterHandle* self, QEvent* param1);
    friend void QSplitterHandle_SuperChangeEvent(QSplitterHandle* self, QEvent* param1);
    friend int QSplitterHandle_Metric(const QSplitterHandle* self, int param1);
    friend int QSplitterHandle_SuperMetric(const QSplitterHandle* self, int param1);
    friend void QSplitterHandle_InitPainter(const QSplitterHandle* self, QPainter* painter);
    friend void QSplitterHandle_SuperInitPainter(const QSplitterHandle* self, QPainter* painter);
    friend QPaintDevice* QSplitterHandle_Redirected(const QSplitterHandle* self, QPoint* offset);
    friend QPaintDevice* QSplitterHandle_SuperRedirected(const QSplitterHandle* self, QPoint* offset);
    friend QPainter* QSplitterHandle_SharedPainter(const QSplitterHandle* self);
    friend QPainter* QSplitterHandle_SuperSharedPainter(const QSplitterHandle* self);
    friend void QSplitterHandle_InputMethodEvent(QSplitterHandle* self, QInputMethodEvent* param1);
    friend void QSplitterHandle_SuperInputMethodEvent(QSplitterHandle* self, QInputMethodEvent* param1);
    friend bool QSplitterHandle_FocusNextPrevChild(QSplitterHandle* self, bool next);
    friend bool QSplitterHandle_SuperFocusNextPrevChild(QSplitterHandle* self, bool next);
    friend void QSplitterHandle_TimerEvent(QSplitterHandle* self, QTimerEvent* event);
    friend void QSplitterHandle_SuperTimerEvent(QSplitterHandle* self, QTimerEvent* event);
    friend void QSplitterHandle_ChildEvent(QSplitterHandle* self, QChildEvent* event);
    friend void QSplitterHandle_SuperChildEvent(QSplitterHandle* self, QChildEvent* event);
    friend void QSplitterHandle_CustomEvent(QSplitterHandle* self, QEvent* event);
    friend void QSplitterHandle_SuperCustomEvent(QSplitterHandle* self, QEvent* event);
    friend void QSplitterHandle_ConnectNotify(QSplitterHandle* self, const QMetaMethod* signal);
    friend void QSplitterHandle_SuperConnectNotify(QSplitterHandle* self, const QMetaMethod* signal);
    friend void QSplitterHandle_DisconnectNotify(QSplitterHandle* self, const QMetaMethod* signal);
    friend void QSplitterHandle_SuperDisconnectNotify(QSplitterHandle* self, const QMetaMethod* signal);
    friend void QSplitterHandle_MoveSplitter(QSplitterHandle* self, int p);
    friend void QSplitterHandle_SuperMoveSplitter(QSplitterHandle* self, int p);
    friend int QSplitterHandle_ClosestLegalPosition(QSplitterHandle* self, int p);
    friend int QSplitterHandle_SuperClosestLegalPosition(QSplitterHandle* self, int p);
    friend void QSplitterHandle_UpdateMicroFocus(QSplitterHandle* self);
    friend void QSplitterHandle_SuperUpdateMicroFocus(QSplitterHandle* self);
    friend void QSplitterHandle_Create(QSplitterHandle* self);
    friend void QSplitterHandle_SuperCreate(QSplitterHandle* self);
    friend void QSplitterHandle_Destroy(QSplitterHandle* self);
    friend void QSplitterHandle_SuperDestroy(QSplitterHandle* self);
    friend bool QSplitterHandle_FocusNextChild(QSplitterHandle* self);
    friend bool QSplitterHandle_SuperFocusNextChild(QSplitterHandle* self);
    friend bool QSplitterHandle_FocusPreviousChild(QSplitterHandle* self);
    friend bool QSplitterHandle_SuperFocusPreviousChild(QSplitterHandle* self);
    friend QObject* QSplitterHandle_Sender(const QSplitterHandle* self);
    friend QObject* QSplitterHandle_SuperSender(const QSplitterHandle* self);
    friend int QSplitterHandle_SenderSignalIndex(const QSplitterHandle* self);
    friend int QSplitterHandle_SuperSenderSignalIndex(const QSplitterHandle* self);
    friend int QSplitterHandle_Receivers(const QSplitterHandle* self, const char* signal);
    friend int QSplitterHandle_SuperReceivers(const QSplitterHandle* self, const char* signal);
    friend bool QSplitterHandle_IsSignalConnected(const QSplitterHandle* self, const QMetaMethod* signal);
    friend bool QSplitterHandle_SuperIsSignalConnected(const QSplitterHandle* self, const QMetaMethod* signal);
    friend double QSplitterHandle_GetDecodedMetricF(const QSplitterHandle* self, int metricA, int metricB);
    friend double QSplitterHandle_SuperGetDecodedMetricF(const QSplitterHandle* self, int metricA, int metricB);
};

#endif
