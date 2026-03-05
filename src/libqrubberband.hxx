#pragma once
#ifndef SRCC_LIBVIRTUALQRUBBERBAND_H
#define SRCC_LIBVIRTUALQRUBBERBAND_H

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"

// This class is a subclass of QRubberBand so that we can call protected methods
class VirtualQRubberBand final : public QRubberBand {

  public:
    // Virtual class boolean flag
    bool isVirtualQRubberBand = true;

    // Virtual class public types (including callbacks)
    using QRubberBand_MetaObject_Callback = QMetaObject* (*)();
    using QRubberBand_Metacast_Callback = void* (*)(QRubberBand*, const char*);
    using QRubberBand_Metacall_Callback = int (*)(QRubberBand*, int, int, void**);
    using QRubberBand_Event_Callback = bool (*)(QRubberBand*, QEvent*);
    using QRubberBand_PaintEvent_Callback = void (*)(QRubberBand*, QPaintEvent*);
    using QRubberBand_ChangeEvent_Callback = void (*)(QRubberBand*, QEvent*);
    using QRubberBand_ShowEvent_Callback = void (*)(QRubberBand*, QShowEvent*);
    using QRubberBand_ResizeEvent_Callback = void (*)(QRubberBand*, QResizeEvent*);
    using QRubberBand_MoveEvent_Callback = void (*)(QRubberBand*, QMoveEvent*);
    using QRubberBand_InitStyleOption_Callback = void (*)(const QRubberBand*, QStyleOptionRubberBand*);
    using QRubberBand_DevType_Callback = int (*)();
    using QRubberBand_SetVisible_Callback = void (*)(QRubberBand*, bool);
    using QRubberBand_SizeHint_Callback = QSize* (*)();
    using QRubberBand_MinimumSizeHint_Callback = QSize* (*)();
    using QRubberBand_HeightForWidth_Callback = int (*)(const QRubberBand*, int);
    using QRubberBand_HasHeightForWidth_Callback = bool (*)();
    using QRubberBand_PaintEngine_Callback = QPaintEngine* (*)();
    using QRubberBand_MousePressEvent_Callback = void (*)(QRubberBand*, QMouseEvent*);
    using QRubberBand_MouseReleaseEvent_Callback = void (*)(QRubberBand*, QMouseEvent*);
    using QRubberBand_MouseDoubleClickEvent_Callback = void (*)(QRubberBand*, QMouseEvent*);
    using QRubberBand_MouseMoveEvent_Callback = void (*)(QRubberBand*, QMouseEvent*);
    using QRubberBand_WheelEvent_Callback = void (*)(QRubberBand*, QWheelEvent*);
    using QRubberBand_KeyPressEvent_Callback = void (*)(QRubberBand*, QKeyEvent*);
    using QRubberBand_KeyReleaseEvent_Callback = void (*)(QRubberBand*, QKeyEvent*);
    using QRubberBand_FocusInEvent_Callback = void (*)(QRubberBand*, QFocusEvent*);
    using QRubberBand_FocusOutEvent_Callback = void (*)(QRubberBand*, QFocusEvent*);
    using QRubberBand_EnterEvent_Callback = void (*)(QRubberBand*, QEnterEvent*);
    using QRubberBand_LeaveEvent_Callback = void (*)(QRubberBand*, QEvent*);
    using QRubberBand_CloseEvent_Callback = void (*)(QRubberBand*, QCloseEvent*);
    using QRubberBand_ContextMenuEvent_Callback = void (*)(QRubberBand*, QContextMenuEvent*);
    using QRubberBand_TabletEvent_Callback = void (*)(QRubberBand*, QTabletEvent*);
    using QRubberBand_ActionEvent_Callback = void (*)(QRubberBand*, QActionEvent*);
    using QRubberBand_DragEnterEvent_Callback = void (*)(QRubberBand*, QDragEnterEvent*);
    using QRubberBand_DragMoveEvent_Callback = void (*)(QRubberBand*, QDragMoveEvent*);
    using QRubberBand_DragLeaveEvent_Callback = void (*)(QRubberBand*, QDragLeaveEvent*);
    using QRubberBand_DropEvent_Callback = void (*)(QRubberBand*, QDropEvent*);
    using QRubberBand_HideEvent_Callback = void (*)(QRubberBand*, QHideEvent*);
    using QRubberBand_NativeEvent_Callback = bool (*)(QRubberBand*, libqt_string, void*, intptr_t*);
    using QRubberBand_Metric_Callback = int (*)(const QRubberBand*, int);
    using QRubberBand_InitPainter_Callback = void (*)(const QRubberBand*, QPainter*);
    using QRubberBand_Redirected_Callback = QPaintDevice* (*)(const QRubberBand*, QPoint*);
    using QRubberBand_SharedPainter_Callback = QPainter* (*)();
    using QRubberBand_InputMethodEvent_Callback = void (*)(QRubberBand*, QInputMethodEvent*);
    using QRubberBand_InputMethodQuery_Callback = QVariant* (*)(const QRubberBand*, int);
    using QRubberBand_FocusNextPrevChild_Callback = bool (*)(QRubberBand*, bool);
    using QRubberBand_EventFilter_Callback = bool (*)(QRubberBand*, QObject*, QEvent*);
    using QRubberBand_TimerEvent_Callback = void (*)(QRubberBand*, QTimerEvent*);
    using QRubberBand_ChildEvent_Callback = void (*)(QRubberBand*, QChildEvent*);
    using QRubberBand_CustomEvent_Callback = void (*)(QRubberBand*, QEvent*);
    using QRubberBand_ConnectNotify_Callback = void (*)(QRubberBand*, QMetaMethod*);
    using QRubberBand_DisconnectNotify_Callback = void (*)(QRubberBand*, QMetaMethod*);
    using QRubberBand_UpdateMicroFocus_Callback = void (*)();
    using QRubberBand_Create_Callback = void (*)();
    using QRubberBand_Destroy_Callback = void (*)();
    using QRubberBand_FocusNextChild_Callback = bool (*)();
    using QRubberBand_FocusPreviousChild_Callback = bool (*)();
    using QRubberBand_Sender_Callback = QObject* (*)();
    using QRubberBand_SenderSignalIndex_Callback = int (*)();
    using QRubberBand_Receivers_Callback = int (*)(const QRubberBand*, const char*);
    using QRubberBand_IsSignalConnected_Callback = bool (*)(const QRubberBand*, QMetaMethod*);
    using QRubberBand_GetDecodedMetricF_Callback = double (*)(const QRubberBand*, int, int);

  protected:
    // Instance callback storage
    QRubberBand_MetaObject_Callback qrubberband_metaobject_callback = nullptr;
    QRubberBand_Metacast_Callback qrubberband_metacast_callback = nullptr;
    QRubberBand_Metacall_Callback qrubberband_metacall_callback = nullptr;
    QRubberBand_Event_Callback qrubberband_event_callback = nullptr;
    QRubberBand_PaintEvent_Callback qrubberband_paintevent_callback = nullptr;
    QRubberBand_ChangeEvent_Callback qrubberband_changeevent_callback = nullptr;
    QRubberBand_ShowEvent_Callback qrubberband_showevent_callback = nullptr;
    QRubberBand_ResizeEvent_Callback qrubberband_resizeevent_callback = nullptr;
    QRubberBand_MoveEvent_Callback qrubberband_moveevent_callback = nullptr;
    QRubberBand_InitStyleOption_Callback qrubberband_initstyleoption_callback = nullptr;
    QRubberBand_DevType_Callback qrubberband_devtype_callback = nullptr;
    QRubberBand_SetVisible_Callback qrubberband_setvisible_callback = nullptr;
    QRubberBand_SizeHint_Callback qrubberband_sizehint_callback = nullptr;
    QRubberBand_MinimumSizeHint_Callback qrubberband_minimumsizehint_callback = nullptr;
    QRubberBand_HeightForWidth_Callback qrubberband_heightforwidth_callback = nullptr;
    QRubberBand_HasHeightForWidth_Callback qrubberband_hasheightforwidth_callback = nullptr;
    QRubberBand_PaintEngine_Callback qrubberband_paintengine_callback = nullptr;
    QRubberBand_MousePressEvent_Callback qrubberband_mousepressevent_callback = nullptr;
    QRubberBand_MouseReleaseEvent_Callback qrubberband_mousereleaseevent_callback = nullptr;
    QRubberBand_MouseDoubleClickEvent_Callback qrubberband_mousedoubleclickevent_callback = nullptr;
    QRubberBand_MouseMoveEvent_Callback qrubberband_mousemoveevent_callback = nullptr;
    QRubberBand_WheelEvent_Callback qrubberband_wheelevent_callback = nullptr;
    QRubberBand_KeyPressEvent_Callback qrubberband_keypressevent_callback = nullptr;
    QRubberBand_KeyReleaseEvent_Callback qrubberband_keyreleaseevent_callback = nullptr;
    QRubberBand_FocusInEvent_Callback qrubberband_focusinevent_callback = nullptr;
    QRubberBand_FocusOutEvent_Callback qrubberband_focusoutevent_callback = nullptr;
    QRubberBand_EnterEvent_Callback qrubberband_enterevent_callback = nullptr;
    QRubberBand_LeaveEvent_Callback qrubberband_leaveevent_callback = nullptr;
    QRubberBand_CloseEvent_Callback qrubberband_closeevent_callback = nullptr;
    QRubberBand_ContextMenuEvent_Callback qrubberband_contextmenuevent_callback = nullptr;
    QRubberBand_TabletEvent_Callback qrubberband_tabletevent_callback = nullptr;
    QRubberBand_ActionEvent_Callback qrubberband_actionevent_callback = nullptr;
    QRubberBand_DragEnterEvent_Callback qrubberband_dragenterevent_callback = nullptr;
    QRubberBand_DragMoveEvent_Callback qrubberband_dragmoveevent_callback = nullptr;
    QRubberBand_DragLeaveEvent_Callback qrubberband_dragleaveevent_callback = nullptr;
    QRubberBand_DropEvent_Callback qrubberband_dropevent_callback = nullptr;
    QRubberBand_HideEvent_Callback qrubberband_hideevent_callback = nullptr;
    QRubberBand_NativeEvent_Callback qrubberband_nativeevent_callback = nullptr;
    QRubberBand_Metric_Callback qrubberband_metric_callback = nullptr;
    QRubberBand_InitPainter_Callback qrubberband_initpainter_callback = nullptr;
    QRubberBand_Redirected_Callback qrubberband_redirected_callback = nullptr;
    QRubberBand_SharedPainter_Callback qrubberband_sharedpainter_callback = nullptr;
    QRubberBand_InputMethodEvent_Callback qrubberband_inputmethodevent_callback = nullptr;
    QRubberBand_InputMethodQuery_Callback qrubberband_inputmethodquery_callback = nullptr;
    QRubberBand_FocusNextPrevChild_Callback qrubberband_focusnextprevchild_callback = nullptr;
    QRubberBand_EventFilter_Callback qrubberband_eventfilter_callback = nullptr;
    QRubberBand_TimerEvent_Callback qrubberband_timerevent_callback = nullptr;
    QRubberBand_ChildEvent_Callback qrubberband_childevent_callback = nullptr;
    QRubberBand_CustomEvent_Callback qrubberband_customevent_callback = nullptr;
    QRubberBand_ConnectNotify_Callback qrubberband_connectnotify_callback = nullptr;
    QRubberBand_DisconnectNotify_Callback qrubberband_disconnectnotify_callback = nullptr;
    QRubberBand_UpdateMicroFocus_Callback qrubberband_updatemicrofocus_callback = nullptr;
    QRubberBand_Create_Callback qrubberband_create_callback = nullptr;
    QRubberBand_Destroy_Callback qrubberband_destroy_callback = nullptr;
    QRubberBand_FocusNextChild_Callback qrubberband_focusnextchild_callback = nullptr;
    QRubberBand_FocusPreviousChild_Callback qrubberband_focuspreviouschild_callback = nullptr;
    QRubberBand_Sender_Callback qrubberband_sender_callback = nullptr;
    QRubberBand_SenderSignalIndex_Callback qrubberband_sendersignalindex_callback = nullptr;
    QRubberBand_Receivers_Callback qrubberband_receivers_callback = nullptr;
    QRubberBand_IsSignalConnected_Callback qrubberband_issignalconnected_callback = nullptr;
    QRubberBand_GetDecodedMetricF_Callback qrubberband_getdecodedmetricf_callback = nullptr;

    // Instance base flags
    mutable bool qrubberband_metaobject_isbase = false;
    mutable bool qrubberband_metacast_isbase = false;
    mutable bool qrubberband_metacall_isbase = false;
    mutable bool qrubberband_event_isbase = false;
    mutable bool qrubberband_paintevent_isbase = false;
    mutable bool qrubberband_changeevent_isbase = false;
    mutable bool qrubberband_showevent_isbase = false;
    mutable bool qrubberband_resizeevent_isbase = false;
    mutable bool qrubberband_moveevent_isbase = false;
    mutable bool qrubberband_initstyleoption_isbase = false;
    mutable bool qrubberband_devtype_isbase = false;
    mutable bool qrubberband_setvisible_isbase = false;
    mutable bool qrubberband_sizehint_isbase = false;
    mutable bool qrubberband_minimumsizehint_isbase = false;
    mutable bool qrubberband_heightforwidth_isbase = false;
    mutable bool qrubberband_hasheightforwidth_isbase = false;
    mutable bool qrubberband_paintengine_isbase = false;
    mutable bool qrubberband_mousepressevent_isbase = false;
    mutable bool qrubberband_mousereleaseevent_isbase = false;
    mutable bool qrubberband_mousedoubleclickevent_isbase = false;
    mutable bool qrubberband_mousemoveevent_isbase = false;
    mutable bool qrubberband_wheelevent_isbase = false;
    mutable bool qrubberband_keypressevent_isbase = false;
    mutable bool qrubberband_keyreleaseevent_isbase = false;
    mutable bool qrubberband_focusinevent_isbase = false;
    mutable bool qrubberband_focusoutevent_isbase = false;
    mutable bool qrubberband_enterevent_isbase = false;
    mutable bool qrubberband_leaveevent_isbase = false;
    mutable bool qrubberband_closeevent_isbase = false;
    mutable bool qrubberband_contextmenuevent_isbase = false;
    mutable bool qrubberband_tabletevent_isbase = false;
    mutable bool qrubberband_actionevent_isbase = false;
    mutable bool qrubberband_dragenterevent_isbase = false;
    mutable bool qrubberband_dragmoveevent_isbase = false;
    mutable bool qrubberband_dragleaveevent_isbase = false;
    mutable bool qrubberband_dropevent_isbase = false;
    mutable bool qrubberband_hideevent_isbase = false;
    mutable bool qrubberband_nativeevent_isbase = false;
    mutable bool qrubberband_metric_isbase = false;
    mutable bool qrubberband_initpainter_isbase = false;
    mutable bool qrubberband_redirected_isbase = false;
    mutable bool qrubberband_sharedpainter_isbase = false;
    mutable bool qrubberband_inputmethodevent_isbase = false;
    mutable bool qrubberband_inputmethodquery_isbase = false;
    mutable bool qrubberband_focusnextprevchild_isbase = false;
    mutable bool qrubberband_eventfilter_isbase = false;
    mutable bool qrubberband_timerevent_isbase = false;
    mutable bool qrubberband_childevent_isbase = false;
    mutable bool qrubberband_customevent_isbase = false;
    mutable bool qrubberband_connectnotify_isbase = false;
    mutable bool qrubberband_disconnectnotify_isbase = false;
    mutable bool qrubberband_updatemicrofocus_isbase = false;
    mutable bool qrubberband_create_isbase = false;
    mutable bool qrubberband_destroy_isbase = false;
    mutable bool qrubberband_focusnextchild_isbase = false;
    mutable bool qrubberband_focuspreviouschild_isbase = false;
    mutable bool qrubberband_sender_isbase = false;
    mutable bool qrubberband_sendersignalindex_isbase = false;
    mutable bool qrubberband_receivers_isbase = false;
    mutable bool qrubberband_issignalconnected_isbase = false;
    mutable bool qrubberband_getdecodedmetricf_isbase = false;

  public:
    VirtualQRubberBand(QRubberBand::Shape param1) : QRubberBand(param1) {};
    VirtualQRubberBand(QRubberBand::Shape param1, QWidget* param2) : QRubberBand(param1, param2) {};

    // Callback setters
    inline void setQRubberBand_MetaObject_Callback(QRubberBand_MetaObject_Callback cb) { qrubberband_metaobject_callback = cb; }
    inline void setQRubberBand_Metacast_Callback(QRubberBand_Metacast_Callback cb) { qrubberband_metacast_callback = cb; }
    inline void setQRubberBand_Metacall_Callback(QRubberBand_Metacall_Callback cb) { qrubberband_metacall_callback = cb; }
    inline void setQRubberBand_Event_Callback(QRubberBand_Event_Callback cb) { qrubberband_event_callback = cb; }
    inline void setQRubberBand_PaintEvent_Callback(QRubberBand_PaintEvent_Callback cb) { qrubberband_paintevent_callback = cb; }
    inline void setQRubberBand_ChangeEvent_Callback(QRubberBand_ChangeEvent_Callback cb) { qrubberband_changeevent_callback = cb; }
    inline void setQRubberBand_ShowEvent_Callback(QRubberBand_ShowEvent_Callback cb) { qrubberband_showevent_callback = cb; }
    inline void setQRubberBand_ResizeEvent_Callback(QRubberBand_ResizeEvent_Callback cb) { qrubberband_resizeevent_callback = cb; }
    inline void setQRubberBand_MoveEvent_Callback(QRubberBand_MoveEvent_Callback cb) { qrubberband_moveevent_callback = cb; }
    inline void setQRubberBand_InitStyleOption_Callback(QRubberBand_InitStyleOption_Callback cb) { qrubberband_initstyleoption_callback = cb; }
    inline void setQRubberBand_DevType_Callback(QRubberBand_DevType_Callback cb) { qrubberband_devtype_callback = cb; }
    inline void setQRubberBand_SetVisible_Callback(QRubberBand_SetVisible_Callback cb) { qrubberband_setvisible_callback = cb; }
    inline void setQRubberBand_SizeHint_Callback(QRubberBand_SizeHint_Callback cb) { qrubberband_sizehint_callback = cb; }
    inline void setQRubberBand_MinimumSizeHint_Callback(QRubberBand_MinimumSizeHint_Callback cb) { qrubberband_minimumsizehint_callback = cb; }
    inline void setQRubberBand_HeightForWidth_Callback(QRubberBand_HeightForWidth_Callback cb) { qrubberband_heightforwidth_callback = cb; }
    inline void setQRubberBand_HasHeightForWidth_Callback(QRubberBand_HasHeightForWidth_Callback cb) { qrubberband_hasheightforwidth_callback = cb; }
    inline void setQRubberBand_PaintEngine_Callback(QRubberBand_PaintEngine_Callback cb) { qrubberband_paintengine_callback = cb; }
    inline void setQRubberBand_MousePressEvent_Callback(QRubberBand_MousePressEvent_Callback cb) { qrubberband_mousepressevent_callback = cb; }
    inline void setQRubberBand_MouseReleaseEvent_Callback(QRubberBand_MouseReleaseEvent_Callback cb) { qrubberband_mousereleaseevent_callback = cb; }
    inline void setQRubberBand_MouseDoubleClickEvent_Callback(QRubberBand_MouseDoubleClickEvent_Callback cb) { qrubberband_mousedoubleclickevent_callback = cb; }
    inline void setQRubberBand_MouseMoveEvent_Callback(QRubberBand_MouseMoveEvent_Callback cb) { qrubberband_mousemoveevent_callback = cb; }
    inline void setQRubberBand_WheelEvent_Callback(QRubberBand_WheelEvent_Callback cb) { qrubberband_wheelevent_callback = cb; }
    inline void setQRubberBand_KeyPressEvent_Callback(QRubberBand_KeyPressEvent_Callback cb) { qrubberband_keypressevent_callback = cb; }
    inline void setQRubberBand_KeyReleaseEvent_Callback(QRubberBand_KeyReleaseEvent_Callback cb) { qrubberband_keyreleaseevent_callback = cb; }
    inline void setQRubberBand_FocusInEvent_Callback(QRubberBand_FocusInEvent_Callback cb) { qrubberband_focusinevent_callback = cb; }
    inline void setQRubberBand_FocusOutEvent_Callback(QRubberBand_FocusOutEvent_Callback cb) { qrubberband_focusoutevent_callback = cb; }
    inline void setQRubberBand_EnterEvent_Callback(QRubberBand_EnterEvent_Callback cb) { qrubberband_enterevent_callback = cb; }
    inline void setQRubberBand_LeaveEvent_Callback(QRubberBand_LeaveEvent_Callback cb) { qrubberband_leaveevent_callback = cb; }
    inline void setQRubberBand_CloseEvent_Callback(QRubberBand_CloseEvent_Callback cb) { qrubberband_closeevent_callback = cb; }
    inline void setQRubberBand_ContextMenuEvent_Callback(QRubberBand_ContextMenuEvent_Callback cb) { qrubberband_contextmenuevent_callback = cb; }
    inline void setQRubberBand_TabletEvent_Callback(QRubberBand_TabletEvent_Callback cb) { qrubberband_tabletevent_callback = cb; }
    inline void setQRubberBand_ActionEvent_Callback(QRubberBand_ActionEvent_Callback cb) { qrubberband_actionevent_callback = cb; }
    inline void setQRubberBand_DragEnterEvent_Callback(QRubberBand_DragEnterEvent_Callback cb) { qrubberband_dragenterevent_callback = cb; }
    inline void setQRubberBand_DragMoveEvent_Callback(QRubberBand_DragMoveEvent_Callback cb) { qrubberband_dragmoveevent_callback = cb; }
    inline void setQRubberBand_DragLeaveEvent_Callback(QRubberBand_DragLeaveEvent_Callback cb) { qrubberband_dragleaveevent_callback = cb; }
    inline void setQRubberBand_DropEvent_Callback(QRubberBand_DropEvent_Callback cb) { qrubberband_dropevent_callback = cb; }
    inline void setQRubberBand_HideEvent_Callback(QRubberBand_HideEvent_Callback cb) { qrubberband_hideevent_callback = cb; }
    inline void setQRubberBand_NativeEvent_Callback(QRubberBand_NativeEvent_Callback cb) { qrubberband_nativeevent_callback = cb; }
    inline void setQRubberBand_Metric_Callback(QRubberBand_Metric_Callback cb) { qrubberband_metric_callback = cb; }
    inline void setQRubberBand_InitPainter_Callback(QRubberBand_InitPainter_Callback cb) { qrubberband_initpainter_callback = cb; }
    inline void setQRubberBand_Redirected_Callback(QRubberBand_Redirected_Callback cb) { qrubberband_redirected_callback = cb; }
    inline void setQRubberBand_SharedPainter_Callback(QRubberBand_SharedPainter_Callback cb) { qrubberband_sharedpainter_callback = cb; }
    inline void setQRubberBand_InputMethodEvent_Callback(QRubberBand_InputMethodEvent_Callback cb) { qrubberband_inputmethodevent_callback = cb; }
    inline void setQRubberBand_InputMethodQuery_Callback(QRubberBand_InputMethodQuery_Callback cb) { qrubberband_inputmethodquery_callback = cb; }
    inline void setQRubberBand_FocusNextPrevChild_Callback(QRubberBand_FocusNextPrevChild_Callback cb) { qrubberband_focusnextprevchild_callback = cb; }
    inline void setQRubberBand_EventFilter_Callback(QRubberBand_EventFilter_Callback cb) { qrubberband_eventfilter_callback = cb; }
    inline void setQRubberBand_TimerEvent_Callback(QRubberBand_TimerEvent_Callback cb) { qrubberband_timerevent_callback = cb; }
    inline void setQRubberBand_ChildEvent_Callback(QRubberBand_ChildEvent_Callback cb) { qrubberband_childevent_callback = cb; }
    inline void setQRubberBand_CustomEvent_Callback(QRubberBand_CustomEvent_Callback cb) { qrubberband_customevent_callback = cb; }
    inline void setQRubberBand_ConnectNotify_Callback(QRubberBand_ConnectNotify_Callback cb) { qrubberband_connectnotify_callback = cb; }
    inline void setQRubberBand_DisconnectNotify_Callback(QRubberBand_DisconnectNotify_Callback cb) { qrubberband_disconnectnotify_callback = cb; }
    inline void setQRubberBand_UpdateMicroFocus_Callback(QRubberBand_UpdateMicroFocus_Callback cb) { qrubberband_updatemicrofocus_callback = cb; }
    inline void setQRubberBand_Create_Callback(QRubberBand_Create_Callback cb) { qrubberband_create_callback = cb; }
    inline void setQRubberBand_Destroy_Callback(QRubberBand_Destroy_Callback cb) { qrubberband_destroy_callback = cb; }
    inline void setQRubberBand_FocusNextChild_Callback(QRubberBand_FocusNextChild_Callback cb) { qrubberband_focusnextchild_callback = cb; }
    inline void setQRubberBand_FocusPreviousChild_Callback(QRubberBand_FocusPreviousChild_Callback cb) { qrubberband_focuspreviouschild_callback = cb; }
    inline void setQRubberBand_Sender_Callback(QRubberBand_Sender_Callback cb) { qrubberband_sender_callback = cb; }
    inline void setQRubberBand_SenderSignalIndex_Callback(QRubberBand_SenderSignalIndex_Callback cb) { qrubberband_sendersignalindex_callback = cb; }
    inline void setQRubberBand_Receivers_Callback(QRubberBand_Receivers_Callback cb) { qrubberband_receivers_callback = cb; }
    inline void setQRubberBand_IsSignalConnected_Callback(QRubberBand_IsSignalConnected_Callback cb) { qrubberband_issignalconnected_callback = cb; }
    inline void setQRubberBand_GetDecodedMetricF_Callback(QRubberBand_GetDecodedMetricF_Callback cb) { qrubberband_getdecodedmetricf_callback = cb; }

    // Base flag setters
    inline void setQRubberBand_MetaObject_IsBase(bool value) const { qrubberband_metaobject_isbase = value; }
    inline void setQRubberBand_Metacast_IsBase(bool value) const { qrubberband_metacast_isbase = value; }
    inline void setQRubberBand_Metacall_IsBase(bool value) const { qrubberband_metacall_isbase = value; }
    inline void setQRubberBand_Event_IsBase(bool value) const { qrubberband_event_isbase = value; }
    inline void setQRubberBand_PaintEvent_IsBase(bool value) const { qrubberband_paintevent_isbase = value; }
    inline void setQRubberBand_ChangeEvent_IsBase(bool value) const { qrubberband_changeevent_isbase = value; }
    inline void setQRubberBand_ShowEvent_IsBase(bool value) const { qrubberband_showevent_isbase = value; }
    inline void setQRubberBand_ResizeEvent_IsBase(bool value) const { qrubberband_resizeevent_isbase = value; }
    inline void setQRubberBand_MoveEvent_IsBase(bool value) const { qrubberband_moveevent_isbase = value; }
    inline void setQRubberBand_InitStyleOption_IsBase(bool value) const { qrubberband_initstyleoption_isbase = value; }
    inline void setQRubberBand_DevType_IsBase(bool value) const { qrubberband_devtype_isbase = value; }
    inline void setQRubberBand_SetVisible_IsBase(bool value) const { qrubberband_setvisible_isbase = value; }
    inline void setQRubberBand_SizeHint_IsBase(bool value) const { qrubberband_sizehint_isbase = value; }
    inline void setQRubberBand_MinimumSizeHint_IsBase(bool value) const { qrubberband_minimumsizehint_isbase = value; }
    inline void setQRubberBand_HeightForWidth_IsBase(bool value) const { qrubberband_heightforwidth_isbase = value; }
    inline void setQRubberBand_HasHeightForWidth_IsBase(bool value) const { qrubberband_hasheightforwidth_isbase = value; }
    inline void setQRubberBand_PaintEngine_IsBase(bool value) const { qrubberband_paintengine_isbase = value; }
    inline void setQRubberBand_MousePressEvent_IsBase(bool value) const { qrubberband_mousepressevent_isbase = value; }
    inline void setQRubberBand_MouseReleaseEvent_IsBase(bool value) const { qrubberband_mousereleaseevent_isbase = value; }
    inline void setQRubberBand_MouseDoubleClickEvent_IsBase(bool value) const { qrubberband_mousedoubleclickevent_isbase = value; }
    inline void setQRubberBand_MouseMoveEvent_IsBase(bool value) const { qrubberband_mousemoveevent_isbase = value; }
    inline void setQRubberBand_WheelEvent_IsBase(bool value) const { qrubberband_wheelevent_isbase = value; }
    inline void setQRubberBand_KeyPressEvent_IsBase(bool value) const { qrubberband_keypressevent_isbase = value; }
    inline void setQRubberBand_KeyReleaseEvent_IsBase(bool value) const { qrubberband_keyreleaseevent_isbase = value; }
    inline void setQRubberBand_FocusInEvent_IsBase(bool value) const { qrubberband_focusinevent_isbase = value; }
    inline void setQRubberBand_FocusOutEvent_IsBase(bool value) const { qrubberband_focusoutevent_isbase = value; }
    inline void setQRubberBand_EnterEvent_IsBase(bool value) const { qrubberband_enterevent_isbase = value; }
    inline void setQRubberBand_LeaveEvent_IsBase(bool value) const { qrubberband_leaveevent_isbase = value; }
    inline void setQRubberBand_CloseEvent_IsBase(bool value) const { qrubberband_closeevent_isbase = value; }
    inline void setQRubberBand_ContextMenuEvent_IsBase(bool value) const { qrubberband_contextmenuevent_isbase = value; }
    inline void setQRubberBand_TabletEvent_IsBase(bool value) const { qrubberband_tabletevent_isbase = value; }
    inline void setQRubberBand_ActionEvent_IsBase(bool value) const { qrubberband_actionevent_isbase = value; }
    inline void setQRubberBand_DragEnterEvent_IsBase(bool value) const { qrubberband_dragenterevent_isbase = value; }
    inline void setQRubberBand_DragMoveEvent_IsBase(bool value) const { qrubberband_dragmoveevent_isbase = value; }
    inline void setQRubberBand_DragLeaveEvent_IsBase(bool value) const { qrubberband_dragleaveevent_isbase = value; }
    inline void setQRubberBand_DropEvent_IsBase(bool value) const { qrubberband_dropevent_isbase = value; }
    inline void setQRubberBand_HideEvent_IsBase(bool value) const { qrubberband_hideevent_isbase = value; }
    inline void setQRubberBand_NativeEvent_IsBase(bool value) const { qrubberband_nativeevent_isbase = value; }
    inline void setQRubberBand_Metric_IsBase(bool value) const { qrubberband_metric_isbase = value; }
    inline void setQRubberBand_InitPainter_IsBase(bool value) const { qrubberband_initpainter_isbase = value; }
    inline void setQRubberBand_Redirected_IsBase(bool value) const { qrubberband_redirected_isbase = value; }
    inline void setQRubberBand_SharedPainter_IsBase(bool value) const { qrubberband_sharedpainter_isbase = value; }
    inline void setQRubberBand_InputMethodEvent_IsBase(bool value) const { qrubberband_inputmethodevent_isbase = value; }
    inline void setQRubberBand_InputMethodQuery_IsBase(bool value) const { qrubberband_inputmethodquery_isbase = value; }
    inline void setQRubberBand_FocusNextPrevChild_IsBase(bool value) const { qrubberband_focusnextprevchild_isbase = value; }
    inline void setQRubberBand_EventFilter_IsBase(bool value) const { qrubberband_eventfilter_isbase = value; }
    inline void setQRubberBand_TimerEvent_IsBase(bool value) const { qrubberband_timerevent_isbase = value; }
    inline void setQRubberBand_ChildEvent_IsBase(bool value) const { qrubberband_childevent_isbase = value; }
    inline void setQRubberBand_CustomEvent_IsBase(bool value) const { qrubberband_customevent_isbase = value; }
    inline void setQRubberBand_ConnectNotify_IsBase(bool value) const { qrubberband_connectnotify_isbase = value; }
    inline void setQRubberBand_DisconnectNotify_IsBase(bool value) const { qrubberband_disconnectnotify_isbase = value; }
    inline void setQRubberBand_UpdateMicroFocus_IsBase(bool value) const { qrubberband_updatemicrofocus_isbase = value; }
    inline void setQRubberBand_Create_IsBase(bool value) const { qrubberband_create_isbase = value; }
    inline void setQRubberBand_Destroy_IsBase(bool value) const { qrubberband_destroy_isbase = value; }
    inline void setQRubberBand_FocusNextChild_IsBase(bool value) const { qrubberband_focusnextchild_isbase = value; }
    inline void setQRubberBand_FocusPreviousChild_IsBase(bool value) const { qrubberband_focuspreviouschild_isbase = value; }
    inline void setQRubberBand_Sender_IsBase(bool value) const { qrubberband_sender_isbase = value; }
    inline void setQRubberBand_SenderSignalIndex_IsBase(bool value) const { qrubberband_sendersignalindex_isbase = value; }
    inline void setQRubberBand_Receivers_IsBase(bool value) const { qrubberband_receivers_isbase = value; }
    inline void setQRubberBand_IsSignalConnected_IsBase(bool value) const { qrubberband_issignalconnected_isbase = value; }
    inline void setQRubberBand_GetDecodedMetricF_IsBase(bool value) const { qrubberband_getdecodedmetricf_isbase = value; }

    // Virtual method for C ABI access and custom callback
    virtual const QMetaObject* metaObject() const override {
        if (qrubberband_metaobject_isbase) {
            qrubberband_metaobject_isbase = false;
            return QRubberBand::metaObject();
        }
        auto metaobject_cb = qrubberband_metaobject_callback;
        if (metaobject_cb) {
            QMetaObject* callback_ret = metaobject_cb();
            return callback_ret;
        }
        return QRubberBand::metaObject();
    }

    // Virtual method for C ABI access and custom callback
    virtual void* qt_metacast(const char* param1) override {
        if (qrubberband_metacast_isbase) {
            qrubberband_metacast_isbase = false;
            return QRubberBand::qt_metacast(param1);
        }
        auto metacast_cb = qrubberband_metacast_callback;
        if (metacast_cb) {
            const char* cbval1 = (const char*)param1;

            void* callback_ret = metacast_cb(this, cbval1);
            return callback_ret;
        }
        return QRubberBand::qt_metacast(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (qrubberband_metacall_isbase) {
            qrubberband_metacall_isbase = false;
            return QRubberBand::qt_metacall(param1, param2, param3);
        }
        auto metacall_cb = qrubberband_metacall_callback;
        if (metacall_cb) {
            int cbval1 = static_cast<int>(param1);
            int cbval2 = param2;
            void** cbval3 = param3;

            int callback_ret = metacall_cb(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        }
        return QRubberBand::qt_metacall(param1, param2, param3);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* e) override {
        if (qrubberband_event_isbase) {
            qrubberband_event_isbase = false;
            return QRubberBand::event(e);
        }
        auto event_cb = qrubberband_event_callback;
        if (event_cb) {
            QEvent* cbval1 = e;

            bool callback_ret = event_cb(this, cbval1);
            return callback_ret;
        }
        return QRubberBand::event(e);
    }

    // Virtual method for C ABI access and custom callback
    virtual void paintEvent(QPaintEvent* param1) override {
        if (qrubberband_paintevent_isbase) {
            qrubberband_paintevent_isbase = false;
            QRubberBand::paintEvent(param1);
            return;
        }
        auto paintevent_cb = qrubberband_paintevent_callback;
        if (paintevent_cb) {
            QPaintEvent* cbval1 = param1;

            paintevent_cb(this, cbval1);
            return;
        }
        QRubberBand::paintEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual void changeEvent(QEvent* param1) override {
        if (qrubberband_changeevent_isbase) {
            qrubberband_changeevent_isbase = false;
            QRubberBand::changeEvent(param1);
            return;
        }
        auto changeevent_cb = qrubberband_changeevent_callback;
        if (changeevent_cb) {
            QEvent* cbval1 = param1;

            changeevent_cb(this, cbval1);
            return;
        }
        QRubberBand::changeEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual void showEvent(QShowEvent* param1) override {
        if (qrubberband_showevent_isbase) {
            qrubberband_showevent_isbase = false;
            QRubberBand::showEvent(param1);
            return;
        }
        auto showevent_cb = qrubberband_showevent_callback;
        if (showevent_cb) {
            QShowEvent* cbval1 = param1;

            showevent_cb(this, cbval1);
            return;
        }
        QRubberBand::showEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual void resizeEvent(QResizeEvent* param1) override {
        if (qrubberband_resizeevent_isbase) {
            qrubberband_resizeevent_isbase = false;
            QRubberBand::resizeEvent(param1);
            return;
        }
        auto resizeevent_cb = qrubberband_resizeevent_callback;
        if (resizeevent_cb) {
            QResizeEvent* cbval1 = param1;

            resizeevent_cb(this, cbval1);
            return;
        }
        QRubberBand::resizeEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual void moveEvent(QMoveEvent* param1) override {
        if (qrubberband_moveevent_isbase) {
            qrubberband_moveevent_isbase = false;
            QRubberBand::moveEvent(param1);
            return;
        }
        auto moveevent_cb = qrubberband_moveevent_callback;
        if (moveevent_cb) {
            QMoveEvent* cbval1 = param1;

            moveevent_cb(this, cbval1);
            return;
        }
        QRubberBand::moveEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual void initStyleOption(QStyleOptionRubberBand* option) const override {
        if (qrubberband_initstyleoption_isbase) {
            qrubberband_initstyleoption_isbase = false;
            QRubberBand::initStyleOption(option);
            return;
        }
        auto initstyleoption_cb = qrubberband_initstyleoption_callback;
        if (initstyleoption_cb) {
            QStyleOptionRubberBand* cbval1 = option;

            initstyleoption_cb(this, cbval1);
            return;
        }
        QRubberBand::initStyleOption(option);
    }

    // Virtual method for C ABI access and custom callback
    virtual int devType() const override {
        if (qrubberband_devtype_isbase) {
            qrubberband_devtype_isbase = false;
            return QRubberBand::devType();
        }
        auto devtype_cb = qrubberband_devtype_callback;
        if (devtype_cb) {
            int callback_ret = devtype_cb();
            return static_cast<int>(callback_ret);
        }
        return QRubberBand::devType();
    }

    // Virtual method for C ABI access and custom callback
    virtual void setVisible(bool visible) override {
        if (qrubberband_setvisible_isbase) {
            qrubberband_setvisible_isbase = false;
            QRubberBand::setVisible(visible);
            return;
        }
        auto setvisible_cb = qrubberband_setvisible_callback;
        if (setvisible_cb) {
            bool cbval1 = visible;

            setvisible_cb(this, cbval1);
            return;
        }
        QRubberBand::setVisible(visible);
    }

    // Virtual method for C ABI access and custom callback
    virtual QSize sizeHint() const override {
        if (qrubberband_sizehint_isbase) {
            qrubberband_sizehint_isbase = false;
            return QRubberBand::sizeHint();
        }
        auto sizehint_cb = qrubberband_sizehint_callback;
        if (sizehint_cb) {
            QSize* callback_ret = sizehint_cb();
            return *callback_ret;
        }
        return QRubberBand::sizeHint();
    }

    // Virtual method for C ABI access and custom callback
    virtual QSize minimumSizeHint() const override {
        if (qrubberband_minimumsizehint_isbase) {
            qrubberband_minimumsizehint_isbase = false;
            return QRubberBand::minimumSizeHint();
        }
        auto minimumsizehint_cb = qrubberband_minimumsizehint_callback;
        if (minimumsizehint_cb) {
            QSize* callback_ret = minimumsizehint_cb();
            return *callback_ret;
        }
        return QRubberBand::minimumSizeHint();
    }

    // Virtual method for C ABI access and custom callback
    virtual int heightForWidth(int param1) const override {
        if (qrubberband_heightforwidth_isbase) {
            qrubberband_heightforwidth_isbase = false;
            return QRubberBand::heightForWidth(param1);
        }
        auto heightforwidth_cb = qrubberband_heightforwidth_callback;
        if (heightforwidth_cb) {
            int cbval1 = param1;

            int callback_ret = heightforwidth_cb(this, cbval1);
            return static_cast<int>(callback_ret);
        }
        return QRubberBand::heightForWidth(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool hasHeightForWidth() const override {
        if (qrubberband_hasheightforwidth_isbase) {
            qrubberband_hasheightforwidth_isbase = false;
            return QRubberBand::hasHeightForWidth();
        }
        auto hasheightforwidth_cb = qrubberband_hasheightforwidth_callback;
        if (hasheightforwidth_cb) {
            bool callback_ret = hasheightforwidth_cb();
            return callback_ret;
        }
        return QRubberBand::hasHeightForWidth();
    }

    // Virtual method for C ABI access and custom callback
    virtual QPaintEngine* paintEngine() const override {
        if (qrubberband_paintengine_isbase) {
            qrubberband_paintengine_isbase = false;
            return QRubberBand::paintEngine();
        }
        auto paintengine_cb = qrubberband_paintengine_callback;
        if (paintengine_cb) {
            QPaintEngine* callback_ret = paintengine_cb();
            return callback_ret;
        }
        return QRubberBand::paintEngine();
    }

    // Virtual method for C ABI access and custom callback
    virtual void mousePressEvent(QMouseEvent* event) override {
        if (qrubberband_mousepressevent_isbase) {
            qrubberband_mousepressevent_isbase = false;
            QRubberBand::mousePressEvent(event);
            return;
        }
        auto mousepressevent_cb = qrubberband_mousepressevent_callback;
        if (mousepressevent_cb) {
            QMouseEvent* cbval1 = event;

            mousepressevent_cb(this, cbval1);
            return;
        }
        QRubberBand::mousePressEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseReleaseEvent(QMouseEvent* event) override {
        if (qrubberband_mousereleaseevent_isbase) {
            qrubberband_mousereleaseevent_isbase = false;
            QRubberBand::mouseReleaseEvent(event);
            return;
        }
        auto mousereleaseevent_cb = qrubberband_mousereleaseevent_callback;
        if (mousereleaseevent_cb) {
            QMouseEvent* cbval1 = event;

            mousereleaseevent_cb(this, cbval1);
            return;
        }
        QRubberBand::mouseReleaseEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseDoubleClickEvent(QMouseEvent* event) override {
        if (qrubberband_mousedoubleclickevent_isbase) {
            qrubberband_mousedoubleclickevent_isbase = false;
            QRubberBand::mouseDoubleClickEvent(event);
            return;
        }
        auto mousedoubleclickevent_cb = qrubberband_mousedoubleclickevent_callback;
        if (mousedoubleclickevent_cb) {
            QMouseEvent* cbval1 = event;

            mousedoubleclickevent_cb(this, cbval1);
            return;
        }
        QRubberBand::mouseDoubleClickEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseMoveEvent(QMouseEvent* event) override {
        if (qrubberband_mousemoveevent_isbase) {
            qrubberband_mousemoveevent_isbase = false;
            QRubberBand::mouseMoveEvent(event);
            return;
        }
        auto mousemoveevent_cb = qrubberband_mousemoveevent_callback;
        if (mousemoveevent_cb) {
            QMouseEvent* cbval1 = event;

            mousemoveevent_cb(this, cbval1);
            return;
        }
        QRubberBand::mouseMoveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void wheelEvent(QWheelEvent* event) override {
        if (qrubberband_wheelevent_isbase) {
            qrubberband_wheelevent_isbase = false;
            QRubberBand::wheelEvent(event);
            return;
        }
        auto wheelevent_cb = qrubberband_wheelevent_callback;
        if (wheelevent_cb) {
            QWheelEvent* cbval1 = event;

            wheelevent_cb(this, cbval1);
            return;
        }
        QRubberBand::wheelEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void keyPressEvent(QKeyEvent* event) override {
        if (qrubberband_keypressevent_isbase) {
            qrubberband_keypressevent_isbase = false;
            QRubberBand::keyPressEvent(event);
            return;
        }
        auto keypressevent_cb = qrubberband_keypressevent_callback;
        if (keypressevent_cb) {
            QKeyEvent* cbval1 = event;

            keypressevent_cb(this, cbval1);
            return;
        }
        QRubberBand::keyPressEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void keyReleaseEvent(QKeyEvent* event) override {
        if (qrubberband_keyreleaseevent_isbase) {
            qrubberband_keyreleaseevent_isbase = false;
            QRubberBand::keyReleaseEvent(event);
            return;
        }
        auto keyreleaseevent_cb = qrubberband_keyreleaseevent_callback;
        if (keyreleaseevent_cb) {
            QKeyEvent* cbval1 = event;

            keyreleaseevent_cb(this, cbval1);
            return;
        }
        QRubberBand::keyReleaseEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void focusInEvent(QFocusEvent* event) override {
        if (qrubberband_focusinevent_isbase) {
            qrubberband_focusinevent_isbase = false;
            QRubberBand::focusInEvent(event);
            return;
        }
        auto focusinevent_cb = qrubberband_focusinevent_callback;
        if (focusinevent_cb) {
            QFocusEvent* cbval1 = event;

            focusinevent_cb(this, cbval1);
            return;
        }
        QRubberBand::focusInEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void focusOutEvent(QFocusEvent* event) override {
        if (qrubberband_focusoutevent_isbase) {
            qrubberband_focusoutevent_isbase = false;
            QRubberBand::focusOutEvent(event);
            return;
        }
        auto focusoutevent_cb = qrubberband_focusoutevent_callback;
        if (focusoutevent_cb) {
            QFocusEvent* cbval1 = event;

            focusoutevent_cb(this, cbval1);
            return;
        }
        QRubberBand::focusOutEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void enterEvent(QEnterEvent* event) override {
        if (qrubberband_enterevent_isbase) {
            qrubberband_enterevent_isbase = false;
            QRubberBand::enterEvent(event);
            return;
        }
        auto enterevent_cb = qrubberband_enterevent_callback;
        if (enterevent_cb) {
            QEnterEvent* cbval1 = event;

            enterevent_cb(this, cbval1);
            return;
        }
        QRubberBand::enterEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void leaveEvent(QEvent* event) override {
        if (qrubberband_leaveevent_isbase) {
            qrubberband_leaveevent_isbase = false;
            QRubberBand::leaveEvent(event);
            return;
        }
        auto leaveevent_cb = qrubberband_leaveevent_callback;
        if (leaveevent_cb) {
            QEvent* cbval1 = event;

            leaveevent_cb(this, cbval1);
            return;
        }
        QRubberBand::leaveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void closeEvent(QCloseEvent* event) override {
        if (qrubberband_closeevent_isbase) {
            qrubberband_closeevent_isbase = false;
            QRubberBand::closeEvent(event);
            return;
        }
        auto closeevent_cb = qrubberband_closeevent_callback;
        if (closeevent_cb) {
            QCloseEvent* cbval1 = event;

            closeevent_cb(this, cbval1);
            return;
        }
        QRubberBand::closeEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void contextMenuEvent(QContextMenuEvent* event) override {
        if (qrubberband_contextmenuevent_isbase) {
            qrubberband_contextmenuevent_isbase = false;
            QRubberBand::contextMenuEvent(event);
            return;
        }
        auto contextmenuevent_cb = qrubberband_contextmenuevent_callback;
        if (contextmenuevent_cb) {
            QContextMenuEvent* cbval1 = event;

            contextmenuevent_cb(this, cbval1);
            return;
        }
        QRubberBand::contextMenuEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void tabletEvent(QTabletEvent* event) override {
        if (qrubberband_tabletevent_isbase) {
            qrubberband_tabletevent_isbase = false;
            QRubberBand::tabletEvent(event);
            return;
        }
        auto tabletevent_cb = qrubberband_tabletevent_callback;
        if (tabletevent_cb) {
            QTabletEvent* cbval1 = event;

            tabletevent_cb(this, cbval1);
            return;
        }
        QRubberBand::tabletEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void actionEvent(QActionEvent* event) override {
        if (qrubberband_actionevent_isbase) {
            qrubberband_actionevent_isbase = false;
            QRubberBand::actionEvent(event);
            return;
        }
        auto actionevent_cb = qrubberband_actionevent_callback;
        if (actionevent_cb) {
            QActionEvent* cbval1 = event;

            actionevent_cb(this, cbval1);
            return;
        }
        QRubberBand::actionEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragEnterEvent(QDragEnterEvent* event) override {
        if (qrubberband_dragenterevent_isbase) {
            qrubberband_dragenterevent_isbase = false;
            QRubberBand::dragEnterEvent(event);
            return;
        }
        auto dragenterevent_cb = qrubberband_dragenterevent_callback;
        if (dragenterevent_cb) {
            QDragEnterEvent* cbval1 = event;

            dragenterevent_cb(this, cbval1);
            return;
        }
        QRubberBand::dragEnterEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragMoveEvent(QDragMoveEvent* event) override {
        if (qrubberband_dragmoveevent_isbase) {
            qrubberband_dragmoveevent_isbase = false;
            QRubberBand::dragMoveEvent(event);
            return;
        }
        auto dragmoveevent_cb = qrubberband_dragmoveevent_callback;
        if (dragmoveevent_cb) {
            QDragMoveEvent* cbval1 = event;

            dragmoveevent_cb(this, cbval1);
            return;
        }
        QRubberBand::dragMoveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragLeaveEvent(QDragLeaveEvent* event) override {
        if (qrubberband_dragleaveevent_isbase) {
            qrubberband_dragleaveevent_isbase = false;
            QRubberBand::dragLeaveEvent(event);
            return;
        }
        auto dragleaveevent_cb = qrubberband_dragleaveevent_callback;
        if (dragleaveevent_cb) {
            QDragLeaveEvent* cbval1 = event;

            dragleaveevent_cb(this, cbval1);
            return;
        }
        QRubberBand::dragLeaveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void dropEvent(QDropEvent* event) override {
        if (qrubberband_dropevent_isbase) {
            qrubberband_dropevent_isbase = false;
            QRubberBand::dropEvent(event);
            return;
        }
        auto dropevent_cb = qrubberband_dropevent_callback;
        if (dropevent_cb) {
            QDropEvent* cbval1 = event;

            dropevent_cb(this, cbval1);
            return;
        }
        QRubberBand::dropEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void hideEvent(QHideEvent* event) override {
        if (qrubberband_hideevent_isbase) {
            qrubberband_hideevent_isbase = false;
            QRubberBand::hideEvent(event);
            return;
        }
        auto hideevent_cb = qrubberband_hideevent_callback;
        if (hideevent_cb) {
            QHideEvent* cbval1 = event;

            hideevent_cb(this, cbval1);
            return;
        }
        QRubberBand::hideEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool nativeEvent(const QByteArray& eventType, void* message, qintptr* result) override {
        if (qrubberband_nativeevent_isbase) {
            qrubberband_nativeevent_isbase = false;
            return QRubberBand::nativeEvent(eventType, message, result);
        }
        auto nativeevent_cb = qrubberband_nativeevent_callback;
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
        return QRubberBand::nativeEvent(eventType, message, result);
    }

    // Virtual method for C ABI access and custom callback
    virtual int metric(QPaintDevice::PaintDeviceMetric param1) const override {
        if (qrubberband_metric_isbase) {
            qrubberband_metric_isbase = false;
            return QRubberBand::metric(param1);
        }
        auto metric_cb = qrubberband_metric_callback;
        if (metric_cb) {
            int cbval1 = static_cast<int>(param1);

            int callback_ret = metric_cb(this, cbval1);
            return static_cast<int>(callback_ret);
        }
        return QRubberBand::metric(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual void initPainter(QPainter* painter) const override {
        if (qrubberband_initpainter_isbase) {
            qrubberband_initpainter_isbase = false;
            QRubberBand::initPainter(painter);
            return;
        }
        auto initpainter_cb = qrubberband_initpainter_callback;
        if (initpainter_cb) {
            QPainter* cbval1 = painter;

            initpainter_cb(this, cbval1);
            return;
        }
        QRubberBand::initPainter(painter);
    }

    // Virtual method for C ABI access and custom callback
    virtual QPaintDevice* redirected(QPoint* offset) const override {
        if (qrubberband_redirected_isbase) {
            qrubberband_redirected_isbase = false;
            return QRubberBand::redirected(offset);
        }
        auto redirected_cb = qrubberband_redirected_callback;
        if (redirected_cb) {
            QPoint* cbval1 = offset;

            QPaintDevice* callback_ret = redirected_cb(this, cbval1);
            return callback_ret;
        }
        return QRubberBand::redirected(offset);
    }

    // Virtual method for C ABI access and custom callback
    virtual QPainter* sharedPainter() const override {
        if (qrubberband_sharedpainter_isbase) {
            qrubberband_sharedpainter_isbase = false;
            return QRubberBand::sharedPainter();
        }
        auto sharedpainter_cb = qrubberband_sharedpainter_callback;
        if (sharedpainter_cb) {
            QPainter* callback_ret = sharedpainter_cb();
            return callback_ret;
        }
        return QRubberBand::sharedPainter();
    }

    // Virtual method for C ABI access and custom callback
    virtual void inputMethodEvent(QInputMethodEvent* param1) override {
        if (qrubberband_inputmethodevent_isbase) {
            qrubberband_inputmethodevent_isbase = false;
            QRubberBand::inputMethodEvent(param1);
            return;
        }
        auto inputmethodevent_cb = qrubberband_inputmethodevent_callback;
        if (inputmethodevent_cb) {
            QInputMethodEvent* cbval1 = param1;

            inputmethodevent_cb(this, cbval1);
            return;
        }
        QRubberBand::inputMethodEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual QVariant inputMethodQuery(Qt::InputMethodQuery param1) const override {
        if (qrubberband_inputmethodquery_isbase) {
            qrubberband_inputmethodquery_isbase = false;
            return QRubberBand::inputMethodQuery(param1);
        }
        auto inputmethodquery_cb = qrubberband_inputmethodquery_callback;
        if (inputmethodquery_cb) {
            int cbval1 = static_cast<int>(param1);

            QVariant* callback_ret = inputmethodquery_cb(this, cbval1);
            return *callback_ret;
        }
        return QRubberBand::inputMethodQuery(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool focusNextPrevChild(bool next) override {
        if (qrubberband_focusnextprevchild_isbase) {
            qrubberband_focusnextprevchild_isbase = false;
            return QRubberBand::focusNextPrevChild(next);
        }
        auto focusnextprevchild_cb = qrubberband_focusnextprevchild_callback;
        if (focusnextprevchild_cb) {
            bool cbval1 = next;

            bool callback_ret = focusnextprevchild_cb(this, cbval1);
            return callback_ret;
        }
        return QRubberBand::focusNextPrevChild(next);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* watched, QEvent* event) override {
        if (qrubberband_eventfilter_isbase) {
            qrubberband_eventfilter_isbase = false;
            return QRubberBand::eventFilter(watched, event);
        }
        auto eventfilter_cb = qrubberband_eventfilter_callback;
        if (eventfilter_cb) {
            QObject* cbval1 = watched;
            QEvent* cbval2 = event;

            bool callback_ret = eventfilter_cb(this, cbval1, cbval2);
            return callback_ret;
        }
        return QRubberBand::eventFilter(watched, event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (qrubberband_timerevent_isbase) {
            qrubberband_timerevent_isbase = false;
            QRubberBand::timerEvent(event);
            return;
        }
        auto timerevent_cb = qrubberband_timerevent_callback;
        if (timerevent_cb) {
            QTimerEvent* cbval1 = event;

            timerevent_cb(this, cbval1);
            return;
        }
        QRubberBand::timerEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (qrubberband_childevent_isbase) {
            qrubberband_childevent_isbase = false;
            QRubberBand::childEvent(event);
            return;
        }
        auto childevent_cb = qrubberband_childevent_callback;
        if (childevent_cb) {
            QChildEvent* cbval1 = event;

            childevent_cb(this, cbval1);
            return;
        }
        QRubberBand::childEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (qrubberband_customevent_isbase) {
            qrubberband_customevent_isbase = false;
            QRubberBand::customEvent(event);
            return;
        }
        auto customevent_cb = qrubberband_customevent_callback;
        if (customevent_cb) {
            QEvent* cbval1 = event;

            customevent_cb(this, cbval1);
            return;
        }
        QRubberBand::customEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (qrubberband_connectnotify_isbase) {
            qrubberband_connectnotify_isbase = false;
            QRubberBand::connectNotify(signal);
            return;
        }
        auto connectnotify_cb = qrubberband_connectnotify_callback;
        if (connectnotify_cb) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            connectnotify_cb(this, cbval1);
            return;
        }
        QRubberBand::connectNotify(signal);
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (qrubberband_disconnectnotify_isbase) {
            qrubberband_disconnectnotify_isbase = false;
            QRubberBand::disconnectNotify(signal);
            return;
        }
        auto disconnectnotify_cb = qrubberband_disconnectnotify_callback;
        if (disconnectnotify_cb) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            disconnectnotify_cb(this, cbval1);
            return;
        }
        QRubberBand::disconnectNotify(signal);
    }

    // Virtual method for C ABI access and custom callback
    void updateMicroFocus() {
        if (qrubberband_updatemicrofocus_isbase) {
            qrubberband_updatemicrofocus_isbase = false;
            QRubberBand::updateMicroFocus();
            return;
        }
        auto updatemicrofocus_cb = qrubberband_updatemicrofocus_callback;
        if (updatemicrofocus_cb) {
            updatemicrofocus_cb();
            return;
        }
        QRubberBand::updateMicroFocus();
    }

    // Virtual method for C ABI access and custom callback
    void create() {
        if (qrubberband_create_isbase) {
            qrubberband_create_isbase = false;
            QRubberBand::create();
            return;
        }
        auto create_cb = qrubberband_create_callback;
        if (create_cb) {
            create_cb();
            return;
        }
        QRubberBand::create();
    }

    // Virtual method for C ABI access and custom callback
    void destroy() {
        if (qrubberband_destroy_isbase) {
            qrubberband_destroy_isbase = false;
            QRubberBand::destroy();
            return;
        }
        auto destroy_cb = qrubberband_destroy_callback;
        if (destroy_cb) {
            destroy_cb();
            return;
        }
        QRubberBand::destroy();
    }

    // Virtual method for C ABI access and custom callback
    bool focusNextChild() {
        if (qrubberband_focusnextchild_isbase) {
            qrubberband_focusnextchild_isbase = false;
            return QRubberBand::focusNextChild();
        }
        auto focusnextchild_cb = qrubberband_focusnextchild_callback;
        if (focusnextchild_cb) {
            bool callback_ret = focusnextchild_cb();
            return callback_ret;
        }
        return QRubberBand::focusNextChild();
    }

    // Virtual method for C ABI access and custom callback
    bool focusPreviousChild() {
        if (qrubberband_focuspreviouschild_isbase) {
            qrubberband_focuspreviouschild_isbase = false;
            return QRubberBand::focusPreviousChild();
        }
        auto focuspreviouschild_cb = qrubberband_focuspreviouschild_callback;
        if (focuspreviouschild_cb) {
            bool callback_ret = focuspreviouschild_cb();
            return callback_ret;
        }
        return QRubberBand::focusPreviousChild();
    }

    // Virtual method for C ABI access and custom callback
    QObject* sender() const {
        if (qrubberband_sender_isbase) {
            qrubberband_sender_isbase = false;
            return QRubberBand::sender();
        }
        auto sender_cb = qrubberband_sender_callback;
        if (sender_cb) {
            QObject* callback_ret = sender_cb();
            return callback_ret;
        }
        return QRubberBand::sender();
    }

    // Virtual method for C ABI access and custom callback
    int senderSignalIndex() const {
        if (qrubberband_sendersignalindex_isbase) {
            qrubberband_sendersignalindex_isbase = false;
            return QRubberBand::senderSignalIndex();
        }
        auto sendersignalindex_cb = qrubberband_sendersignalindex_callback;
        if (sendersignalindex_cb) {
            int callback_ret = sendersignalindex_cb();
            return static_cast<int>(callback_ret);
        }
        return QRubberBand::senderSignalIndex();
    }

    // Virtual method for C ABI access and custom callback
    int receivers(const char* signal) const {
        if (qrubberband_receivers_isbase) {
            qrubberband_receivers_isbase = false;
            return QRubberBand::receivers(signal);
        }
        auto receivers_cb = qrubberband_receivers_callback;
        if (receivers_cb) {
            const char* cbval1 = (const char*)signal;

            int callback_ret = receivers_cb(this, cbval1);
            return static_cast<int>(callback_ret);
        }
        return QRubberBand::receivers(signal);
    }

    // Virtual method for C ABI access and custom callback
    bool isSignalConnected(const QMetaMethod& signal) const {
        if (qrubberband_issignalconnected_isbase) {
            qrubberband_issignalconnected_isbase = false;
            return QRubberBand::isSignalConnected(signal);
        }
        auto issignalconnected_cb = qrubberband_issignalconnected_callback;
        if (issignalconnected_cb) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            bool callback_ret = issignalconnected_cb(this, cbval1);
            return callback_ret;
        }
        return QRubberBand::isSignalConnected(signal);
    }

    // Virtual method for C ABI access and custom callback
    double getDecodedMetricF(QPaintDevice::PaintDeviceMetric metricA, QPaintDevice::PaintDeviceMetric metricB) const {
        if (qrubberband_getdecodedmetricf_isbase) {
            qrubberband_getdecodedmetricf_isbase = false;
            return QRubberBand::getDecodedMetricF(metricA, metricB);
        }
        auto getdecodedmetricf_cb = qrubberband_getdecodedmetricf_callback;
        if (getdecodedmetricf_cb) {
            int cbval1 = static_cast<int>(metricA);
            int cbval2 = static_cast<int>(metricB);

            double callback_ret = getdecodedmetricf_cb(this, cbval1, cbval2);
            return static_cast<double>(callback_ret);
        }
        return QRubberBand::getDecodedMetricF(metricA, metricB);
    }

    // Friend functions
    friend bool QRubberBand_Event(QRubberBand* self, QEvent* e);
    friend bool QRubberBand_SuperEvent(QRubberBand* self, QEvent* e);
    friend void QRubberBand_PaintEvent(QRubberBand* self, QPaintEvent* param1);
    friend void QRubberBand_SuperPaintEvent(QRubberBand* self, QPaintEvent* param1);
    friend void QRubberBand_ChangeEvent(QRubberBand* self, QEvent* param1);
    friend void QRubberBand_SuperChangeEvent(QRubberBand* self, QEvent* param1);
    friend void QRubberBand_ShowEvent(QRubberBand* self, QShowEvent* param1);
    friend void QRubberBand_SuperShowEvent(QRubberBand* self, QShowEvent* param1);
    friend void QRubberBand_ResizeEvent(QRubberBand* self, QResizeEvent* param1);
    friend void QRubberBand_SuperResizeEvent(QRubberBand* self, QResizeEvent* param1);
    friend void QRubberBand_MoveEvent(QRubberBand* self, QMoveEvent* param1);
    friend void QRubberBand_SuperMoveEvent(QRubberBand* self, QMoveEvent* param1);
    friend void QRubberBand_InitStyleOption(const QRubberBand* self, QStyleOptionRubberBand* option);
    friend void QRubberBand_SuperInitStyleOption(const QRubberBand* self, QStyleOptionRubberBand* option);
    friend void QRubberBand_MousePressEvent(QRubberBand* self, QMouseEvent* event);
    friend void QRubberBand_SuperMousePressEvent(QRubberBand* self, QMouseEvent* event);
    friend void QRubberBand_MouseReleaseEvent(QRubberBand* self, QMouseEvent* event);
    friend void QRubberBand_SuperMouseReleaseEvent(QRubberBand* self, QMouseEvent* event);
    friend void QRubberBand_MouseDoubleClickEvent(QRubberBand* self, QMouseEvent* event);
    friend void QRubberBand_SuperMouseDoubleClickEvent(QRubberBand* self, QMouseEvent* event);
    friend void QRubberBand_MouseMoveEvent(QRubberBand* self, QMouseEvent* event);
    friend void QRubberBand_SuperMouseMoveEvent(QRubberBand* self, QMouseEvent* event);
    friend void QRubberBand_WheelEvent(QRubberBand* self, QWheelEvent* event);
    friend void QRubberBand_SuperWheelEvent(QRubberBand* self, QWheelEvent* event);
    friend void QRubberBand_KeyPressEvent(QRubberBand* self, QKeyEvent* event);
    friend void QRubberBand_SuperKeyPressEvent(QRubberBand* self, QKeyEvent* event);
    friend void QRubberBand_KeyReleaseEvent(QRubberBand* self, QKeyEvent* event);
    friend void QRubberBand_SuperKeyReleaseEvent(QRubberBand* self, QKeyEvent* event);
    friend void QRubberBand_FocusInEvent(QRubberBand* self, QFocusEvent* event);
    friend void QRubberBand_SuperFocusInEvent(QRubberBand* self, QFocusEvent* event);
    friend void QRubberBand_FocusOutEvent(QRubberBand* self, QFocusEvent* event);
    friend void QRubberBand_SuperFocusOutEvent(QRubberBand* self, QFocusEvent* event);
    friend void QRubberBand_EnterEvent(QRubberBand* self, QEnterEvent* event);
    friend void QRubberBand_SuperEnterEvent(QRubberBand* self, QEnterEvent* event);
    friend void QRubberBand_LeaveEvent(QRubberBand* self, QEvent* event);
    friend void QRubberBand_SuperLeaveEvent(QRubberBand* self, QEvent* event);
    friend void QRubberBand_CloseEvent(QRubberBand* self, QCloseEvent* event);
    friend void QRubberBand_SuperCloseEvent(QRubberBand* self, QCloseEvent* event);
    friend void QRubberBand_ContextMenuEvent(QRubberBand* self, QContextMenuEvent* event);
    friend void QRubberBand_SuperContextMenuEvent(QRubberBand* self, QContextMenuEvent* event);
    friend void QRubberBand_TabletEvent(QRubberBand* self, QTabletEvent* event);
    friend void QRubberBand_SuperTabletEvent(QRubberBand* self, QTabletEvent* event);
    friend void QRubberBand_ActionEvent(QRubberBand* self, QActionEvent* event);
    friend void QRubberBand_SuperActionEvent(QRubberBand* self, QActionEvent* event);
    friend void QRubberBand_DragEnterEvent(QRubberBand* self, QDragEnterEvent* event);
    friend void QRubberBand_SuperDragEnterEvent(QRubberBand* self, QDragEnterEvent* event);
    friend void QRubberBand_DragMoveEvent(QRubberBand* self, QDragMoveEvent* event);
    friend void QRubberBand_SuperDragMoveEvent(QRubberBand* self, QDragMoveEvent* event);
    friend void QRubberBand_DragLeaveEvent(QRubberBand* self, QDragLeaveEvent* event);
    friend void QRubberBand_SuperDragLeaveEvent(QRubberBand* self, QDragLeaveEvent* event);
    friend void QRubberBand_DropEvent(QRubberBand* self, QDropEvent* event);
    friend void QRubberBand_SuperDropEvent(QRubberBand* self, QDropEvent* event);
    friend void QRubberBand_HideEvent(QRubberBand* self, QHideEvent* event);
    friend void QRubberBand_SuperHideEvent(QRubberBand* self, QHideEvent* event);
    friend bool QRubberBand_NativeEvent(QRubberBand* self, const libqt_string eventType, void* message, intptr_t* result);
    friend bool QRubberBand_SuperNativeEvent(QRubberBand* self, const libqt_string eventType, void* message, intptr_t* result);
    friend int QRubberBand_Metric(const QRubberBand* self, int param1);
    friend int QRubberBand_SuperMetric(const QRubberBand* self, int param1);
    friend void QRubberBand_InitPainter(const QRubberBand* self, QPainter* painter);
    friend void QRubberBand_SuperInitPainter(const QRubberBand* self, QPainter* painter);
    friend QPaintDevice* QRubberBand_Redirected(const QRubberBand* self, QPoint* offset);
    friend QPaintDevice* QRubberBand_SuperRedirected(const QRubberBand* self, QPoint* offset);
    friend QPainter* QRubberBand_SharedPainter(const QRubberBand* self);
    friend QPainter* QRubberBand_SuperSharedPainter(const QRubberBand* self);
    friend void QRubberBand_InputMethodEvent(QRubberBand* self, QInputMethodEvent* param1);
    friend void QRubberBand_SuperInputMethodEvent(QRubberBand* self, QInputMethodEvent* param1);
    friend bool QRubberBand_FocusNextPrevChild(QRubberBand* self, bool next);
    friend bool QRubberBand_SuperFocusNextPrevChild(QRubberBand* self, bool next);
    friend void QRubberBand_TimerEvent(QRubberBand* self, QTimerEvent* event);
    friend void QRubberBand_SuperTimerEvent(QRubberBand* self, QTimerEvent* event);
    friend void QRubberBand_ChildEvent(QRubberBand* self, QChildEvent* event);
    friend void QRubberBand_SuperChildEvent(QRubberBand* self, QChildEvent* event);
    friend void QRubberBand_CustomEvent(QRubberBand* self, QEvent* event);
    friend void QRubberBand_SuperCustomEvent(QRubberBand* self, QEvent* event);
    friend void QRubberBand_ConnectNotify(QRubberBand* self, const QMetaMethod* signal);
    friend void QRubberBand_SuperConnectNotify(QRubberBand* self, const QMetaMethod* signal);
    friend void QRubberBand_DisconnectNotify(QRubberBand* self, const QMetaMethod* signal);
    friend void QRubberBand_SuperDisconnectNotify(QRubberBand* self, const QMetaMethod* signal);
    friend void QRubberBand_UpdateMicroFocus(QRubberBand* self);
    friend void QRubberBand_SuperUpdateMicroFocus(QRubberBand* self);
    friend void QRubberBand_Create(QRubberBand* self);
    friend void QRubberBand_SuperCreate(QRubberBand* self);
    friend void QRubberBand_Destroy(QRubberBand* self);
    friend void QRubberBand_SuperDestroy(QRubberBand* self);
    friend bool QRubberBand_FocusNextChild(QRubberBand* self);
    friend bool QRubberBand_SuperFocusNextChild(QRubberBand* self);
    friend bool QRubberBand_FocusPreviousChild(QRubberBand* self);
    friend bool QRubberBand_SuperFocusPreviousChild(QRubberBand* self);
    friend QObject* QRubberBand_Sender(const QRubberBand* self);
    friend QObject* QRubberBand_SuperSender(const QRubberBand* self);
    friend int QRubberBand_SenderSignalIndex(const QRubberBand* self);
    friend int QRubberBand_SuperSenderSignalIndex(const QRubberBand* self);
    friend int QRubberBand_Receivers(const QRubberBand* self, const char* signal);
    friend int QRubberBand_SuperReceivers(const QRubberBand* self, const char* signal);
    friend bool QRubberBand_IsSignalConnected(const QRubberBand* self, const QMetaMethod* signal);
    friend bool QRubberBand_SuperIsSignalConnected(const QRubberBand* self, const QMetaMethod* signal);
    friend double QRubberBand_GetDecodedMetricF(const QRubberBand* self, int metricA, int metricB);
    friend double QRubberBand_SuperGetDecodedMetricF(const QRubberBand* self, int metricA, int metricB);
};

#endif
