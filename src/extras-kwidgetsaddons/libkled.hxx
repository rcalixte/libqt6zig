#pragma once
#ifndef SRC_EXTRAS_KWIDGETSADDONSC_LIBVIRTUALKLED_H
#define SRC_EXTRAS_KWIDGETSADDONSC_LIBVIRTUALKLED_H

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

// This class is a subclass of KLed so that we can call protected methods
class VirtualKLed final : public KLed {

  public:
    // Virtual class boolean flag
    bool isVirtualKLed = true;

    // Virtual class public types (including callbacks)
    using KLed_Metacall_Callback = int (*)(KLed*, int, int, void**);
    using KLed_SizeHint_Callback = QSize* (*)();
    using KLed_MinimumSizeHint_Callback = QSize* (*)();
    using KLed_PaintEvent_Callback = void (*)(KLed*, QPaintEvent*);
    using KLed_ResizeEvent_Callback = void (*)(KLed*, QResizeEvent*);
    using KLed_DevType_Callback = int (*)();
    using KLed_SetVisible_Callback = void (*)(KLed*, bool);
    using KLed_HeightForWidth_Callback = int (*)(const KLed*, int);
    using KLed_HasHeightForWidth_Callback = bool (*)();
    using KLed_PaintEngine_Callback = QPaintEngine* (*)();
    using KLed_Event_Callback = bool (*)(KLed*, QEvent*);
    using KLed_MousePressEvent_Callback = void (*)(KLed*, QMouseEvent*);
    using KLed_MouseReleaseEvent_Callback = void (*)(KLed*, QMouseEvent*);
    using KLed_MouseDoubleClickEvent_Callback = void (*)(KLed*, QMouseEvent*);
    using KLed_MouseMoveEvent_Callback = void (*)(KLed*, QMouseEvent*);
    using KLed_WheelEvent_Callback = void (*)(KLed*, QWheelEvent*);
    using KLed_KeyPressEvent_Callback = void (*)(KLed*, QKeyEvent*);
    using KLed_KeyReleaseEvent_Callback = void (*)(KLed*, QKeyEvent*);
    using KLed_FocusInEvent_Callback = void (*)(KLed*, QFocusEvent*);
    using KLed_FocusOutEvent_Callback = void (*)(KLed*, QFocusEvent*);
    using KLed_EnterEvent_Callback = void (*)(KLed*, QEnterEvent*);
    using KLed_LeaveEvent_Callback = void (*)(KLed*, QEvent*);
    using KLed_MoveEvent_Callback = void (*)(KLed*, QMoveEvent*);
    using KLed_CloseEvent_Callback = void (*)(KLed*, QCloseEvent*);
    using KLed_ContextMenuEvent_Callback = void (*)(KLed*, QContextMenuEvent*);
    using KLed_TabletEvent_Callback = void (*)(KLed*, QTabletEvent*);
    using KLed_ActionEvent_Callback = void (*)(KLed*, QActionEvent*);
    using KLed_DragEnterEvent_Callback = void (*)(KLed*, QDragEnterEvent*);
    using KLed_DragMoveEvent_Callback = void (*)(KLed*, QDragMoveEvent*);
    using KLed_DragLeaveEvent_Callback = void (*)(KLed*, QDragLeaveEvent*);
    using KLed_DropEvent_Callback = void (*)(KLed*, QDropEvent*);
    using KLed_ShowEvent_Callback = void (*)(KLed*, QShowEvent*);
    using KLed_HideEvent_Callback = void (*)(KLed*, QHideEvent*);
    using KLed_NativeEvent_Callback = bool (*)(KLed*, libqt_string, void*, intptr_t*);
    using KLed_ChangeEvent_Callback = void (*)(KLed*, QEvent*);
    using KLed_Metric_Callback = int (*)(const KLed*, int);
    using KLed_InitPainter_Callback = void (*)(const KLed*, QPainter*);
    using KLed_Redirected_Callback = QPaintDevice* (*)(const KLed*, QPoint*);
    using KLed_SharedPainter_Callback = QPainter* (*)();
    using KLed_InputMethodEvent_Callback = void (*)(KLed*, QInputMethodEvent*);
    using KLed_InputMethodQuery_Callback = QVariant* (*)(const KLed*, int);
    using KLed_FocusNextPrevChild_Callback = bool (*)(KLed*, bool);
    using KLed_EventFilter_Callback = bool (*)(KLed*, QObject*, QEvent*);
    using KLed_TimerEvent_Callback = void (*)(KLed*, QTimerEvent*);
    using KLed_ChildEvent_Callback = void (*)(KLed*, QChildEvent*);
    using KLed_CustomEvent_Callback = void (*)(KLed*, QEvent*);
    using KLed_ConnectNotify_Callback = void (*)(KLed*, QMetaMethod*);
    using KLed_DisconnectNotify_Callback = void (*)(KLed*, QMetaMethod*);
    using KLed_UpdateMicroFocus_Callback = void (*)();
    using KLed_Create_Callback = void (*)();
    using KLed_Destroy_Callback = void (*)();
    using KLed_FocusNextChild_Callback = bool (*)();
    using KLed_FocusPreviousChild_Callback = bool (*)();
    using KLed_Sender_Callback = QObject* (*)();
    using KLed_SenderSignalIndex_Callback = int (*)();
    using KLed_Receivers_Callback = int (*)(const KLed*, const char*);
    using KLed_IsSignalConnected_Callback = bool (*)(const KLed*, QMetaMethod*);
    using KLed_GetDecodedMetricF_Callback = double (*)(const KLed*, int, int);

  protected:
    // Instance callback storage
    KLed_Metacall_Callback kled_metacall_callback = nullptr;
    KLed_SizeHint_Callback kled_sizehint_callback = nullptr;
    KLed_MinimumSizeHint_Callback kled_minimumsizehint_callback = nullptr;
    KLed_PaintEvent_Callback kled_paintevent_callback = nullptr;
    KLed_ResizeEvent_Callback kled_resizeevent_callback = nullptr;
    KLed_DevType_Callback kled_devtype_callback = nullptr;
    KLed_SetVisible_Callback kled_setvisible_callback = nullptr;
    KLed_HeightForWidth_Callback kled_heightforwidth_callback = nullptr;
    KLed_HasHeightForWidth_Callback kled_hasheightforwidth_callback = nullptr;
    KLed_PaintEngine_Callback kled_paintengine_callback = nullptr;
    KLed_Event_Callback kled_event_callback = nullptr;
    KLed_MousePressEvent_Callback kled_mousepressevent_callback = nullptr;
    KLed_MouseReleaseEvent_Callback kled_mousereleaseevent_callback = nullptr;
    KLed_MouseDoubleClickEvent_Callback kled_mousedoubleclickevent_callback = nullptr;
    KLed_MouseMoveEvent_Callback kled_mousemoveevent_callback = nullptr;
    KLed_WheelEvent_Callback kled_wheelevent_callback = nullptr;
    KLed_KeyPressEvent_Callback kled_keypressevent_callback = nullptr;
    KLed_KeyReleaseEvent_Callback kled_keyreleaseevent_callback = nullptr;
    KLed_FocusInEvent_Callback kled_focusinevent_callback = nullptr;
    KLed_FocusOutEvent_Callback kled_focusoutevent_callback = nullptr;
    KLed_EnterEvent_Callback kled_enterevent_callback = nullptr;
    KLed_LeaveEvent_Callback kled_leaveevent_callback = nullptr;
    KLed_MoveEvent_Callback kled_moveevent_callback = nullptr;
    KLed_CloseEvent_Callback kled_closeevent_callback = nullptr;
    KLed_ContextMenuEvent_Callback kled_contextmenuevent_callback = nullptr;
    KLed_TabletEvent_Callback kled_tabletevent_callback = nullptr;
    KLed_ActionEvent_Callback kled_actionevent_callback = nullptr;
    KLed_DragEnterEvent_Callback kled_dragenterevent_callback = nullptr;
    KLed_DragMoveEvent_Callback kled_dragmoveevent_callback = nullptr;
    KLed_DragLeaveEvent_Callback kled_dragleaveevent_callback = nullptr;
    KLed_DropEvent_Callback kled_dropevent_callback = nullptr;
    KLed_ShowEvent_Callback kled_showevent_callback = nullptr;
    KLed_HideEvent_Callback kled_hideevent_callback = nullptr;
    KLed_NativeEvent_Callback kled_nativeevent_callback = nullptr;
    KLed_ChangeEvent_Callback kled_changeevent_callback = nullptr;
    KLed_Metric_Callback kled_metric_callback = nullptr;
    KLed_InitPainter_Callback kled_initpainter_callback = nullptr;
    KLed_Redirected_Callback kled_redirected_callback = nullptr;
    KLed_SharedPainter_Callback kled_sharedpainter_callback = nullptr;
    KLed_InputMethodEvent_Callback kled_inputmethodevent_callback = nullptr;
    KLed_InputMethodQuery_Callback kled_inputmethodquery_callback = nullptr;
    KLed_FocusNextPrevChild_Callback kled_focusnextprevchild_callback = nullptr;
    KLed_EventFilter_Callback kled_eventfilter_callback = nullptr;
    KLed_TimerEvent_Callback kled_timerevent_callback = nullptr;
    KLed_ChildEvent_Callback kled_childevent_callback = nullptr;
    KLed_CustomEvent_Callback kled_customevent_callback = nullptr;
    KLed_ConnectNotify_Callback kled_connectnotify_callback = nullptr;
    KLed_DisconnectNotify_Callback kled_disconnectnotify_callback = nullptr;
    KLed_UpdateMicroFocus_Callback kled_updatemicrofocus_callback = nullptr;
    KLed_Create_Callback kled_create_callback = nullptr;
    KLed_Destroy_Callback kled_destroy_callback = nullptr;
    KLed_FocusNextChild_Callback kled_focusnextchild_callback = nullptr;
    KLed_FocusPreviousChild_Callback kled_focuspreviouschild_callback = nullptr;
    KLed_Sender_Callback kled_sender_callback = nullptr;
    KLed_SenderSignalIndex_Callback kled_sendersignalindex_callback = nullptr;
    KLed_Receivers_Callback kled_receivers_callback = nullptr;
    KLed_IsSignalConnected_Callback kled_issignalconnected_callback = nullptr;
    KLed_GetDecodedMetricF_Callback kled_getdecodedmetricf_callback = nullptr;

    // Instance base flags
    mutable bool kled_metacall_isbase = false;
    mutable bool kled_sizehint_isbase = false;
    mutable bool kled_minimumsizehint_isbase = false;
    mutable bool kled_paintevent_isbase = false;
    mutable bool kled_resizeevent_isbase = false;
    mutable bool kled_devtype_isbase = false;
    mutable bool kled_setvisible_isbase = false;
    mutable bool kled_heightforwidth_isbase = false;
    mutable bool kled_hasheightforwidth_isbase = false;
    mutable bool kled_paintengine_isbase = false;
    mutable bool kled_event_isbase = false;
    mutable bool kled_mousepressevent_isbase = false;
    mutable bool kled_mousereleaseevent_isbase = false;
    mutable bool kled_mousedoubleclickevent_isbase = false;
    mutable bool kled_mousemoveevent_isbase = false;
    mutable bool kled_wheelevent_isbase = false;
    mutable bool kled_keypressevent_isbase = false;
    mutable bool kled_keyreleaseevent_isbase = false;
    mutable bool kled_focusinevent_isbase = false;
    mutable bool kled_focusoutevent_isbase = false;
    mutable bool kled_enterevent_isbase = false;
    mutable bool kled_leaveevent_isbase = false;
    mutable bool kled_moveevent_isbase = false;
    mutable bool kled_closeevent_isbase = false;
    mutable bool kled_contextmenuevent_isbase = false;
    mutable bool kled_tabletevent_isbase = false;
    mutable bool kled_actionevent_isbase = false;
    mutable bool kled_dragenterevent_isbase = false;
    mutable bool kled_dragmoveevent_isbase = false;
    mutable bool kled_dragleaveevent_isbase = false;
    mutable bool kled_dropevent_isbase = false;
    mutable bool kled_showevent_isbase = false;
    mutable bool kled_hideevent_isbase = false;
    mutable bool kled_nativeevent_isbase = false;
    mutable bool kled_changeevent_isbase = false;
    mutable bool kled_metric_isbase = false;
    mutable bool kled_initpainter_isbase = false;
    mutable bool kled_redirected_isbase = false;
    mutable bool kled_sharedpainter_isbase = false;
    mutable bool kled_inputmethodevent_isbase = false;
    mutable bool kled_inputmethodquery_isbase = false;
    mutable bool kled_focusnextprevchild_isbase = false;
    mutable bool kled_eventfilter_isbase = false;
    mutable bool kled_timerevent_isbase = false;
    mutable bool kled_childevent_isbase = false;
    mutable bool kled_customevent_isbase = false;
    mutable bool kled_connectnotify_isbase = false;
    mutable bool kled_disconnectnotify_isbase = false;
    mutable bool kled_updatemicrofocus_isbase = false;
    mutable bool kled_create_isbase = false;
    mutable bool kled_destroy_isbase = false;
    mutable bool kled_focusnextchild_isbase = false;
    mutable bool kled_focuspreviouschild_isbase = false;
    mutable bool kled_sender_isbase = false;
    mutable bool kled_sendersignalindex_isbase = false;
    mutable bool kled_receivers_isbase = false;
    mutable bool kled_issignalconnected_isbase = false;
    mutable bool kled_getdecodedmetricf_isbase = false;

  public:
    VirtualKLed(QWidget* parent) : KLed(parent) {};
    VirtualKLed() : KLed() {};
    VirtualKLed(const QColor& color) : KLed(color) {};
    VirtualKLed(const QColor& color, KLed::State state, KLed::Look look, KLed::Shape shape) : KLed(color, state, look, shape) {};
    VirtualKLed(const QColor& color, QWidget* parent) : KLed(color, parent) {};
    VirtualKLed(const QColor& color, KLed::State state, KLed::Look look, KLed::Shape shape, QWidget* parent) : KLed(color, state, look, shape, parent) {};

    ~VirtualKLed() {
        kled_metacall_callback = nullptr;
        kled_sizehint_callback = nullptr;
        kled_minimumsizehint_callback = nullptr;
        kled_paintevent_callback = nullptr;
        kled_resizeevent_callback = nullptr;
        kled_devtype_callback = nullptr;
        kled_setvisible_callback = nullptr;
        kled_heightforwidth_callback = nullptr;
        kled_hasheightforwidth_callback = nullptr;
        kled_paintengine_callback = nullptr;
        kled_event_callback = nullptr;
        kled_mousepressevent_callback = nullptr;
        kled_mousereleaseevent_callback = nullptr;
        kled_mousedoubleclickevent_callback = nullptr;
        kled_mousemoveevent_callback = nullptr;
        kled_wheelevent_callback = nullptr;
        kled_keypressevent_callback = nullptr;
        kled_keyreleaseevent_callback = nullptr;
        kled_focusinevent_callback = nullptr;
        kled_focusoutevent_callback = nullptr;
        kled_enterevent_callback = nullptr;
        kled_leaveevent_callback = nullptr;
        kled_moveevent_callback = nullptr;
        kled_closeevent_callback = nullptr;
        kled_contextmenuevent_callback = nullptr;
        kled_tabletevent_callback = nullptr;
        kled_actionevent_callback = nullptr;
        kled_dragenterevent_callback = nullptr;
        kled_dragmoveevent_callback = nullptr;
        kled_dragleaveevent_callback = nullptr;
        kled_dropevent_callback = nullptr;
        kled_showevent_callback = nullptr;
        kled_hideevent_callback = nullptr;
        kled_nativeevent_callback = nullptr;
        kled_changeevent_callback = nullptr;
        kled_metric_callback = nullptr;
        kled_initpainter_callback = nullptr;
        kled_redirected_callback = nullptr;
        kled_sharedpainter_callback = nullptr;
        kled_inputmethodevent_callback = nullptr;
        kled_inputmethodquery_callback = nullptr;
        kled_focusnextprevchild_callback = nullptr;
        kled_eventfilter_callback = nullptr;
        kled_timerevent_callback = nullptr;
        kled_childevent_callback = nullptr;
        kled_customevent_callback = nullptr;
        kled_connectnotify_callback = nullptr;
        kled_disconnectnotify_callback = nullptr;
        kled_updatemicrofocus_callback = nullptr;
        kled_create_callback = nullptr;
        kled_destroy_callback = nullptr;
        kled_focusnextchild_callback = nullptr;
        kled_focuspreviouschild_callback = nullptr;
        kled_sender_callback = nullptr;
        kled_sendersignalindex_callback = nullptr;
        kled_receivers_callback = nullptr;
        kled_issignalconnected_callback = nullptr;
        kled_getdecodedmetricf_callback = nullptr;
    }

    // Callback setters
    inline void setKLed_Metacall_Callback(KLed_Metacall_Callback cb) { kled_metacall_callback = cb; }
    inline void setKLed_SizeHint_Callback(KLed_SizeHint_Callback cb) { kled_sizehint_callback = cb; }
    inline void setKLed_MinimumSizeHint_Callback(KLed_MinimumSizeHint_Callback cb) { kled_minimumsizehint_callback = cb; }
    inline void setKLed_PaintEvent_Callback(KLed_PaintEvent_Callback cb) { kled_paintevent_callback = cb; }
    inline void setKLed_ResizeEvent_Callback(KLed_ResizeEvent_Callback cb) { kled_resizeevent_callback = cb; }
    inline void setKLed_DevType_Callback(KLed_DevType_Callback cb) { kled_devtype_callback = cb; }
    inline void setKLed_SetVisible_Callback(KLed_SetVisible_Callback cb) { kled_setvisible_callback = cb; }
    inline void setKLed_HeightForWidth_Callback(KLed_HeightForWidth_Callback cb) { kled_heightforwidth_callback = cb; }
    inline void setKLed_HasHeightForWidth_Callback(KLed_HasHeightForWidth_Callback cb) { kled_hasheightforwidth_callback = cb; }
    inline void setKLed_PaintEngine_Callback(KLed_PaintEngine_Callback cb) { kled_paintengine_callback = cb; }
    inline void setKLed_Event_Callback(KLed_Event_Callback cb) { kled_event_callback = cb; }
    inline void setKLed_MousePressEvent_Callback(KLed_MousePressEvent_Callback cb) { kled_mousepressevent_callback = cb; }
    inline void setKLed_MouseReleaseEvent_Callback(KLed_MouseReleaseEvent_Callback cb) { kled_mousereleaseevent_callback = cb; }
    inline void setKLed_MouseDoubleClickEvent_Callback(KLed_MouseDoubleClickEvent_Callback cb) { kled_mousedoubleclickevent_callback = cb; }
    inline void setKLed_MouseMoveEvent_Callback(KLed_MouseMoveEvent_Callback cb) { kled_mousemoveevent_callback = cb; }
    inline void setKLed_WheelEvent_Callback(KLed_WheelEvent_Callback cb) { kled_wheelevent_callback = cb; }
    inline void setKLed_KeyPressEvent_Callback(KLed_KeyPressEvent_Callback cb) { kled_keypressevent_callback = cb; }
    inline void setKLed_KeyReleaseEvent_Callback(KLed_KeyReleaseEvent_Callback cb) { kled_keyreleaseevent_callback = cb; }
    inline void setKLed_FocusInEvent_Callback(KLed_FocusInEvent_Callback cb) { kled_focusinevent_callback = cb; }
    inline void setKLed_FocusOutEvent_Callback(KLed_FocusOutEvent_Callback cb) { kled_focusoutevent_callback = cb; }
    inline void setKLed_EnterEvent_Callback(KLed_EnterEvent_Callback cb) { kled_enterevent_callback = cb; }
    inline void setKLed_LeaveEvent_Callback(KLed_LeaveEvent_Callback cb) { kled_leaveevent_callback = cb; }
    inline void setKLed_MoveEvent_Callback(KLed_MoveEvent_Callback cb) { kled_moveevent_callback = cb; }
    inline void setKLed_CloseEvent_Callback(KLed_CloseEvent_Callback cb) { kled_closeevent_callback = cb; }
    inline void setKLed_ContextMenuEvent_Callback(KLed_ContextMenuEvent_Callback cb) { kled_contextmenuevent_callback = cb; }
    inline void setKLed_TabletEvent_Callback(KLed_TabletEvent_Callback cb) { kled_tabletevent_callback = cb; }
    inline void setKLed_ActionEvent_Callback(KLed_ActionEvent_Callback cb) { kled_actionevent_callback = cb; }
    inline void setKLed_DragEnterEvent_Callback(KLed_DragEnterEvent_Callback cb) { kled_dragenterevent_callback = cb; }
    inline void setKLed_DragMoveEvent_Callback(KLed_DragMoveEvent_Callback cb) { kled_dragmoveevent_callback = cb; }
    inline void setKLed_DragLeaveEvent_Callback(KLed_DragLeaveEvent_Callback cb) { kled_dragleaveevent_callback = cb; }
    inline void setKLed_DropEvent_Callback(KLed_DropEvent_Callback cb) { kled_dropevent_callback = cb; }
    inline void setKLed_ShowEvent_Callback(KLed_ShowEvent_Callback cb) { kled_showevent_callback = cb; }
    inline void setKLed_HideEvent_Callback(KLed_HideEvent_Callback cb) { kled_hideevent_callback = cb; }
    inline void setKLed_NativeEvent_Callback(KLed_NativeEvent_Callback cb) { kled_nativeevent_callback = cb; }
    inline void setKLed_ChangeEvent_Callback(KLed_ChangeEvent_Callback cb) { kled_changeevent_callback = cb; }
    inline void setKLed_Metric_Callback(KLed_Metric_Callback cb) { kled_metric_callback = cb; }
    inline void setKLed_InitPainter_Callback(KLed_InitPainter_Callback cb) { kled_initpainter_callback = cb; }
    inline void setKLed_Redirected_Callback(KLed_Redirected_Callback cb) { kled_redirected_callback = cb; }
    inline void setKLed_SharedPainter_Callback(KLed_SharedPainter_Callback cb) { kled_sharedpainter_callback = cb; }
    inline void setKLed_InputMethodEvent_Callback(KLed_InputMethodEvent_Callback cb) { kled_inputmethodevent_callback = cb; }
    inline void setKLed_InputMethodQuery_Callback(KLed_InputMethodQuery_Callback cb) { kled_inputmethodquery_callback = cb; }
    inline void setKLed_FocusNextPrevChild_Callback(KLed_FocusNextPrevChild_Callback cb) { kled_focusnextprevchild_callback = cb; }
    inline void setKLed_EventFilter_Callback(KLed_EventFilter_Callback cb) { kled_eventfilter_callback = cb; }
    inline void setKLed_TimerEvent_Callback(KLed_TimerEvent_Callback cb) { kled_timerevent_callback = cb; }
    inline void setKLed_ChildEvent_Callback(KLed_ChildEvent_Callback cb) { kled_childevent_callback = cb; }
    inline void setKLed_CustomEvent_Callback(KLed_CustomEvent_Callback cb) { kled_customevent_callback = cb; }
    inline void setKLed_ConnectNotify_Callback(KLed_ConnectNotify_Callback cb) { kled_connectnotify_callback = cb; }
    inline void setKLed_DisconnectNotify_Callback(KLed_DisconnectNotify_Callback cb) { kled_disconnectnotify_callback = cb; }
    inline void setKLed_UpdateMicroFocus_Callback(KLed_UpdateMicroFocus_Callback cb) { kled_updatemicrofocus_callback = cb; }
    inline void setKLed_Create_Callback(KLed_Create_Callback cb) { kled_create_callback = cb; }
    inline void setKLed_Destroy_Callback(KLed_Destroy_Callback cb) { kled_destroy_callback = cb; }
    inline void setKLed_FocusNextChild_Callback(KLed_FocusNextChild_Callback cb) { kled_focusnextchild_callback = cb; }
    inline void setKLed_FocusPreviousChild_Callback(KLed_FocusPreviousChild_Callback cb) { kled_focuspreviouschild_callback = cb; }
    inline void setKLed_Sender_Callback(KLed_Sender_Callback cb) { kled_sender_callback = cb; }
    inline void setKLed_SenderSignalIndex_Callback(KLed_SenderSignalIndex_Callback cb) { kled_sendersignalindex_callback = cb; }
    inline void setKLed_Receivers_Callback(KLed_Receivers_Callback cb) { kled_receivers_callback = cb; }
    inline void setKLed_IsSignalConnected_Callback(KLed_IsSignalConnected_Callback cb) { kled_issignalconnected_callback = cb; }
    inline void setKLed_GetDecodedMetricF_Callback(KLed_GetDecodedMetricF_Callback cb) { kled_getdecodedmetricf_callback = cb; }

    // Base flag setters
    inline void setKLed_Metacall_IsBase(bool value) const { kled_metacall_isbase = value; }
    inline void setKLed_SizeHint_IsBase(bool value) const { kled_sizehint_isbase = value; }
    inline void setKLed_MinimumSizeHint_IsBase(bool value) const { kled_minimumsizehint_isbase = value; }
    inline void setKLed_PaintEvent_IsBase(bool value) const { kled_paintevent_isbase = value; }
    inline void setKLed_ResizeEvent_IsBase(bool value) const { kled_resizeevent_isbase = value; }
    inline void setKLed_DevType_IsBase(bool value) const { kled_devtype_isbase = value; }
    inline void setKLed_SetVisible_IsBase(bool value) const { kled_setvisible_isbase = value; }
    inline void setKLed_HeightForWidth_IsBase(bool value) const { kled_heightforwidth_isbase = value; }
    inline void setKLed_HasHeightForWidth_IsBase(bool value) const { kled_hasheightforwidth_isbase = value; }
    inline void setKLed_PaintEngine_IsBase(bool value) const { kled_paintengine_isbase = value; }
    inline void setKLed_Event_IsBase(bool value) const { kled_event_isbase = value; }
    inline void setKLed_MousePressEvent_IsBase(bool value) const { kled_mousepressevent_isbase = value; }
    inline void setKLed_MouseReleaseEvent_IsBase(bool value) const { kled_mousereleaseevent_isbase = value; }
    inline void setKLed_MouseDoubleClickEvent_IsBase(bool value) const { kled_mousedoubleclickevent_isbase = value; }
    inline void setKLed_MouseMoveEvent_IsBase(bool value) const { kled_mousemoveevent_isbase = value; }
    inline void setKLed_WheelEvent_IsBase(bool value) const { kled_wheelevent_isbase = value; }
    inline void setKLed_KeyPressEvent_IsBase(bool value) const { kled_keypressevent_isbase = value; }
    inline void setKLed_KeyReleaseEvent_IsBase(bool value) const { kled_keyreleaseevent_isbase = value; }
    inline void setKLed_FocusInEvent_IsBase(bool value) const { kled_focusinevent_isbase = value; }
    inline void setKLed_FocusOutEvent_IsBase(bool value) const { kled_focusoutevent_isbase = value; }
    inline void setKLed_EnterEvent_IsBase(bool value) const { kled_enterevent_isbase = value; }
    inline void setKLed_LeaveEvent_IsBase(bool value) const { kled_leaveevent_isbase = value; }
    inline void setKLed_MoveEvent_IsBase(bool value) const { kled_moveevent_isbase = value; }
    inline void setKLed_CloseEvent_IsBase(bool value) const { kled_closeevent_isbase = value; }
    inline void setKLed_ContextMenuEvent_IsBase(bool value) const { kled_contextmenuevent_isbase = value; }
    inline void setKLed_TabletEvent_IsBase(bool value) const { kled_tabletevent_isbase = value; }
    inline void setKLed_ActionEvent_IsBase(bool value) const { kled_actionevent_isbase = value; }
    inline void setKLed_DragEnterEvent_IsBase(bool value) const { kled_dragenterevent_isbase = value; }
    inline void setKLed_DragMoveEvent_IsBase(bool value) const { kled_dragmoveevent_isbase = value; }
    inline void setKLed_DragLeaveEvent_IsBase(bool value) const { kled_dragleaveevent_isbase = value; }
    inline void setKLed_DropEvent_IsBase(bool value) const { kled_dropevent_isbase = value; }
    inline void setKLed_ShowEvent_IsBase(bool value) const { kled_showevent_isbase = value; }
    inline void setKLed_HideEvent_IsBase(bool value) const { kled_hideevent_isbase = value; }
    inline void setKLed_NativeEvent_IsBase(bool value) const { kled_nativeevent_isbase = value; }
    inline void setKLed_ChangeEvent_IsBase(bool value) const { kled_changeevent_isbase = value; }
    inline void setKLed_Metric_IsBase(bool value) const { kled_metric_isbase = value; }
    inline void setKLed_InitPainter_IsBase(bool value) const { kled_initpainter_isbase = value; }
    inline void setKLed_Redirected_IsBase(bool value) const { kled_redirected_isbase = value; }
    inline void setKLed_SharedPainter_IsBase(bool value) const { kled_sharedpainter_isbase = value; }
    inline void setKLed_InputMethodEvent_IsBase(bool value) const { kled_inputmethodevent_isbase = value; }
    inline void setKLed_InputMethodQuery_IsBase(bool value) const { kled_inputmethodquery_isbase = value; }
    inline void setKLed_FocusNextPrevChild_IsBase(bool value) const { kled_focusnextprevchild_isbase = value; }
    inline void setKLed_EventFilter_IsBase(bool value) const { kled_eventfilter_isbase = value; }
    inline void setKLed_TimerEvent_IsBase(bool value) const { kled_timerevent_isbase = value; }
    inline void setKLed_ChildEvent_IsBase(bool value) const { kled_childevent_isbase = value; }
    inline void setKLed_CustomEvent_IsBase(bool value) const { kled_customevent_isbase = value; }
    inline void setKLed_ConnectNotify_IsBase(bool value) const { kled_connectnotify_isbase = value; }
    inline void setKLed_DisconnectNotify_IsBase(bool value) const { kled_disconnectnotify_isbase = value; }
    inline void setKLed_UpdateMicroFocus_IsBase(bool value) const { kled_updatemicrofocus_isbase = value; }
    inline void setKLed_Create_IsBase(bool value) const { kled_create_isbase = value; }
    inline void setKLed_Destroy_IsBase(bool value) const { kled_destroy_isbase = value; }
    inline void setKLed_FocusNextChild_IsBase(bool value) const { kled_focusnextchild_isbase = value; }
    inline void setKLed_FocusPreviousChild_IsBase(bool value) const { kled_focuspreviouschild_isbase = value; }
    inline void setKLed_Sender_IsBase(bool value) const { kled_sender_isbase = value; }
    inline void setKLed_SenderSignalIndex_IsBase(bool value) const { kled_sendersignalindex_isbase = value; }
    inline void setKLed_Receivers_IsBase(bool value) const { kled_receivers_isbase = value; }
    inline void setKLed_IsSignalConnected_IsBase(bool value) const { kled_issignalconnected_isbase = value; }
    inline void setKLed_GetDecodedMetricF_IsBase(bool value) const { kled_getdecodedmetricf_isbase = value; }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (kled_metacall_isbase) {
            kled_metacall_isbase = false;
            return KLed::qt_metacall(param1, param2, param3);
        } else if (kled_metacall_callback != nullptr) {
            int cbval1 = static_cast<int>(param1);
            int cbval2 = param2;
            void** cbval3 = param3;

            int callback_ret = kled_metacall_callback(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        } else {
            return KLed::qt_metacall(param1, param2, param3);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QSize sizeHint() const override {
        if (kled_sizehint_isbase) {
            kled_sizehint_isbase = false;
            return KLed::sizeHint();
        } else if (kled_sizehint_callback != nullptr) {
            QSize* callback_ret = kled_sizehint_callback();
            return *callback_ret;
        } else {
            return KLed::sizeHint();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QSize minimumSizeHint() const override {
        if (kled_minimumsizehint_isbase) {
            kled_minimumsizehint_isbase = false;
            return KLed::minimumSizeHint();
        } else if (kled_minimumsizehint_callback != nullptr) {
            QSize* callback_ret = kled_minimumsizehint_callback();
            return *callback_ret;
        } else {
            return KLed::minimumSizeHint();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void paintEvent(QPaintEvent* param1) override {
        if (kled_paintevent_isbase) {
            kled_paintevent_isbase = false;
            KLed::paintEvent(param1);
        } else if (kled_paintevent_callback != nullptr) {
            QPaintEvent* cbval1 = param1;

            kled_paintevent_callback(this, cbval1);
        } else {
            KLed::paintEvent(param1);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void resizeEvent(QResizeEvent* param1) override {
        if (kled_resizeevent_isbase) {
            kled_resizeevent_isbase = false;
            KLed::resizeEvent(param1);
        } else if (kled_resizeevent_callback != nullptr) {
            QResizeEvent* cbval1 = param1;

            kled_resizeevent_callback(this, cbval1);
        } else {
            KLed::resizeEvent(param1);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual int devType() const override {
        if (kled_devtype_isbase) {
            kled_devtype_isbase = false;
            return KLed::devType();
        } else if (kled_devtype_callback != nullptr) {
            int callback_ret = kled_devtype_callback();
            return static_cast<int>(callback_ret);
        } else {
            return KLed::devType();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void setVisible(bool visible) override {
        if (kled_setvisible_isbase) {
            kled_setvisible_isbase = false;
            KLed::setVisible(visible);
        } else if (kled_setvisible_callback != nullptr) {
            bool cbval1 = visible;

            kled_setvisible_callback(this, cbval1);
        } else {
            KLed::setVisible(visible);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual int heightForWidth(int param1) const override {
        if (kled_heightforwidth_isbase) {
            kled_heightforwidth_isbase = false;
            return KLed::heightForWidth(param1);
        } else if (kled_heightforwidth_callback != nullptr) {
            int cbval1 = param1;

            int callback_ret = kled_heightforwidth_callback(this, cbval1);
            return static_cast<int>(callback_ret);
        } else {
            return KLed::heightForWidth(param1);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool hasHeightForWidth() const override {
        if (kled_hasheightforwidth_isbase) {
            kled_hasheightforwidth_isbase = false;
            return KLed::hasHeightForWidth();
        } else if (kled_hasheightforwidth_callback != nullptr) {
            bool callback_ret = kled_hasheightforwidth_callback();
            return callback_ret;
        } else {
            return KLed::hasHeightForWidth();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QPaintEngine* paintEngine() const override {
        if (kled_paintengine_isbase) {
            kled_paintengine_isbase = false;
            return KLed::paintEngine();
        } else if (kled_paintengine_callback != nullptr) {
            QPaintEngine* callback_ret = kled_paintengine_callback();
            return callback_ret;
        } else {
            return KLed::paintEngine();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* event) override {
        if (kled_event_isbase) {
            kled_event_isbase = false;
            return KLed::event(event);
        } else if (kled_event_callback != nullptr) {
            QEvent* cbval1 = event;

            bool callback_ret = kled_event_callback(this, cbval1);
            return callback_ret;
        } else {
            return KLed::event(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void mousePressEvent(QMouseEvent* event) override {
        if (kled_mousepressevent_isbase) {
            kled_mousepressevent_isbase = false;
            KLed::mousePressEvent(event);
        } else if (kled_mousepressevent_callback != nullptr) {
            QMouseEvent* cbval1 = event;

            kled_mousepressevent_callback(this, cbval1);
        } else {
            KLed::mousePressEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseReleaseEvent(QMouseEvent* event) override {
        if (kled_mousereleaseevent_isbase) {
            kled_mousereleaseevent_isbase = false;
            KLed::mouseReleaseEvent(event);
        } else if (kled_mousereleaseevent_callback != nullptr) {
            QMouseEvent* cbval1 = event;

            kled_mousereleaseevent_callback(this, cbval1);
        } else {
            KLed::mouseReleaseEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseDoubleClickEvent(QMouseEvent* event) override {
        if (kled_mousedoubleclickevent_isbase) {
            kled_mousedoubleclickevent_isbase = false;
            KLed::mouseDoubleClickEvent(event);
        } else if (kled_mousedoubleclickevent_callback != nullptr) {
            QMouseEvent* cbval1 = event;

            kled_mousedoubleclickevent_callback(this, cbval1);
        } else {
            KLed::mouseDoubleClickEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseMoveEvent(QMouseEvent* event) override {
        if (kled_mousemoveevent_isbase) {
            kled_mousemoveevent_isbase = false;
            KLed::mouseMoveEvent(event);
        } else if (kled_mousemoveevent_callback != nullptr) {
            QMouseEvent* cbval1 = event;

            kled_mousemoveevent_callback(this, cbval1);
        } else {
            KLed::mouseMoveEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void wheelEvent(QWheelEvent* event) override {
        if (kled_wheelevent_isbase) {
            kled_wheelevent_isbase = false;
            KLed::wheelEvent(event);
        } else if (kled_wheelevent_callback != nullptr) {
            QWheelEvent* cbval1 = event;

            kled_wheelevent_callback(this, cbval1);
        } else {
            KLed::wheelEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void keyPressEvent(QKeyEvent* event) override {
        if (kled_keypressevent_isbase) {
            kled_keypressevent_isbase = false;
            KLed::keyPressEvent(event);
        } else if (kled_keypressevent_callback != nullptr) {
            QKeyEvent* cbval1 = event;

            kled_keypressevent_callback(this, cbval1);
        } else {
            KLed::keyPressEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void keyReleaseEvent(QKeyEvent* event) override {
        if (kled_keyreleaseevent_isbase) {
            kled_keyreleaseevent_isbase = false;
            KLed::keyReleaseEvent(event);
        } else if (kled_keyreleaseevent_callback != nullptr) {
            QKeyEvent* cbval1 = event;

            kled_keyreleaseevent_callback(this, cbval1);
        } else {
            KLed::keyReleaseEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void focusInEvent(QFocusEvent* event) override {
        if (kled_focusinevent_isbase) {
            kled_focusinevent_isbase = false;
            KLed::focusInEvent(event);
        } else if (kled_focusinevent_callback != nullptr) {
            QFocusEvent* cbval1 = event;

            kled_focusinevent_callback(this, cbval1);
        } else {
            KLed::focusInEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void focusOutEvent(QFocusEvent* event) override {
        if (kled_focusoutevent_isbase) {
            kled_focusoutevent_isbase = false;
            KLed::focusOutEvent(event);
        } else if (kled_focusoutevent_callback != nullptr) {
            QFocusEvent* cbval1 = event;

            kled_focusoutevent_callback(this, cbval1);
        } else {
            KLed::focusOutEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void enterEvent(QEnterEvent* event) override {
        if (kled_enterevent_isbase) {
            kled_enterevent_isbase = false;
            KLed::enterEvent(event);
        } else if (kled_enterevent_callback != nullptr) {
            QEnterEvent* cbval1 = event;

            kled_enterevent_callback(this, cbval1);
        } else {
            KLed::enterEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void leaveEvent(QEvent* event) override {
        if (kled_leaveevent_isbase) {
            kled_leaveevent_isbase = false;
            KLed::leaveEvent(event);
        } else if (kled_leaveevent_callback != nullptr) {
            QEvent* cbval1 = event;

            kled_leaveevent_callback(this, cbval1);
        } else {
            KLed::leaveEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void moveEvent(QMoveEvent* event) override {
        if (kled_moveevent_isbase) {
            kled_moveevent_isbase = false;
            KLed::moveEvent(event);
        } else if (kled_moveevent_callback != nullptr) {
            QMoveEvent* cbval1 = event;

            kled_moveevent_callback(this, cbval1);
        } else {
            KLed::moveEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void closeEvent(QCloseEvent* event) override {
        if (kled_closeevent_isbase) {
            kled_closeevent_isbase = false;
            KLed::closeEvent(event);
        } else if (kled_closeevent_callback != nullptr) {
            QCloseEvent* cbval1 = event;

            kled_closeevent_callback(this, cbval1);
        } else {
            KLed::closeEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void contextMenuEvent(QContextMenuEvent* event) override {
        if (kled_contextmenuevent_isbase) {
            kled_contextmenuevent_isbase = false;
            KLed::contextMenuEvent(event);
        } else if (kled_contextmenuevent_callback != nullptr) {
            QContextMenuEvent* cbval1 = event;

            kled_contextmenuevent_callback(this, cbval1);
        } else {
            KLed::contextMenuEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void tabletEvent(QTabletEvent* event) override {
        if (kled_tabletevent_isbase) {
            kled_tabletevent_isbase = false;
            KLed::tabletEvent(event);
        } else if (kled_tabletevent_callback != nullptr) {
            QTabletEvent* cbval1 = event;

            kled_tabletevent_callback(this, cbval1);
        } else {
            KLed::tabletEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void actionEvent(QActionEvent* event) override {
        if (kled_actionevent_isbase) {
            kled_actionevent_isbase = false;
            KLed::actionEvent(event);
        } else if (kled_actionevent_callback != nullptr) {
            QActionEvent* cbval1 = event;

            kled_actionevent_callback(this, cbval1);
        } else {
            KLed::actionEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragEnterEvent(QDragEnterEvent* event) override {
        if (kled_dragenterevent_isbase) {
            kled_dragenterevent_isbase = false;
            KLed::dragEnterEvent(event);
        } else if (kled_dragenterevent_callback != nullptr) {
            QDragEnterEvent* cbval1 = event;

            kled_dragenterevent_callback(this, cbval1);
        } else {
            KLed::dragEnterEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragMoveEvent(QDragMoveEvent* event) override {
        if (kled_dragmoveevent_isbase) {
            kled_dragmoveevent_isbase = false;
            KLed::dragMoveEvent(event);
        } else if (kled_dragmoveevent_callback != nullptr) {
            QDragMoveEvent* cbval1 = event;

            kled_dragmoveevent_callback(this, cbval1);
        } else {
            KLed::dragMoveEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragLeaveEvent(QDragLeaveEvent* event) override {
        if (kled_dragleaveevent_isbase) {
            kled_dragleaveevent_isbase = false;
            KLed::dragLeaveEvent(event);
        } else if (kled_dragleaveevent_callback != nullptr) {
            QDragLeaveEvent* cbval1 = event;

            kled_dragleaveevent_callback(this, cbval1);
        } else {
            KLed::dragLeaveEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void dropEvent(QDropEvent* event) override {
        if (kled_dropevent_isbase) {
            kled_dropevent_isbase = false;
            KLed::dropEvent(event);
        } else if (kled_dropevent_callback != nullptr) {
            QDropEvent* cbval1 = event;

            kled_dropevent_callback(this, cbval1);
        } else {
            KLed::dropEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void showEvent(QShowEvent* event) override {
        if (kled_showevent_isbase) {
            kled_showevent_isbase = false;
            KLed::showEvent(event);
        } else if (kled_showevent_callback != nullptr) {
            QShowEvent* cbval1 = event;

            kled_showevent_callback(this, cbval1);
        } else {
            KLed::showEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void hideEvent(QHideEvent* event) override {
        if (kled_hideevent_isbase) {
            kled_hideevent_isbase = false;
            KLed::hideEvent(event);
        } else if (kled_hideevent_callback != nullptr) {
            QHideEvent* cbval1 = event;

            kled_hideevent_callback(this, cbval1);
        } else {
            KLed::hideEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool nativeEvent(const QByteArray& eventType, void* message, qintptr* result) override {
        if (kled_nativeevent_isbase) {
            kled_nativeevent_isbase = false;
            return KLed::nativeEvent(eventType, message, result);
        } else if (kled_nativeevent_callback != nullptr) {
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

            bool callback_ret = kled_nativeevent_callback(this, cbval1, cbval2, cbval3);
            return callback_ret;
        } else {
            return KLed::nativeEvent(eventType, message, result);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void changeEvent(QEvent* param1) override {
        if (kled_changeevent_isbase) {
            kled_changeevent_isbase = false;
            KLed::changeEvent(param1);
        } else if (kled_changeevent_callback != nullptr) {
            QEvent* cbval1 = param1;

            kled_changeevent_callback(this, cbval1);
        } else {
            KLed::changeEvent(param1);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual int metric(QPaintDevice::PaintDeviceMetric param1) const override {
        if (kled_metric_isbase) {
            kled_metric_isbase = false;
            return KLed::metric(param1);
        } else if (kled_metric_callback != nullptr) {
            int cbval1 = static_cast<int>(param1);

            int callback_ret = kled_metric_callback(this, cbval1);
            return static_cast<int>(callback_ret);
        } else {
            return KLed::metric(param1);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void initPainter(QPainter* painter) const override {
        if (kled_initpainter_isbase) {
            kled_initpainter_isbase = false;
            KLed::initPainter(painter);
        } else if (kled_initpainter_callback != nullptr) {
            QPainter* cbval1 = painter;

            kled_initpainter_callback(this, cbval1);
        } else {
            KLed::initPainter(painter);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QPaintDevice* redirected(QPoint* offset) const override {
        if (kled_redirected_isbase) {
            kled_redirected_isbase = false;
            return KLed::redirected(offset);
        } else if (kled_redirected_callback != nullptr) {
            QPoint* cbval1 = offset;

            QPaintDevice* callback_ret = kled_redirected_callback(this, cbval1);
            return callback_ret;
        } else {
            return KLed::redirected(offset);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QPainter* sharedPainter() const override {
        if (kled_sharedpainter_isbase) {
            kled_sharedpainter_isbase = false;
            return KLed::sharedPainter();
        } else if (kled_sharedpainter_callback != nullptr) {
            QPainter* callback_ret = kled_sharedpainter_callback();
            return callback_ret;
        } else {
            return KLed::sharedPainter();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void inputMethodEvent(QInputMethodEvent* param1) override {
        if (kled_inputmethodevent_isbase) {
            kled_inputmethodevent_isbase = false;
            KLed::inputMethodEvent(param1);
        } else if (kled_inputmethodevent_callback != nullptr) {
            QInputMethodEvent* cbval1 = param1;

            kled_inputmethodevent_callback(this, cbval1);
        } else {
            KLed::inputMethodEvent(param1);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QVariant inputMethodQuery(Qt::InputMethodQuery param1) const override {
        if (kled_inputmethodquery_isbase) {
            kled_inputmethodquery_isbase = false;
            return KLed::inputMethodQuery(param1);
        } else if (kled_inputmethodquery_callback != nullptr) {
            int cbval1 = static_cast<int>(param1);

            QVariant* callback_ret = kled_inputmethodquery_callback(this, cbval1);
            return *callback_ret;
        } else {
            return KLed::inputMethodQuery(param1);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool focusNextPrevChild(bool next) override {
        if (kled_focusnextprevchild_isbase) {
            kled_focusnextprevchild_isbase = false;
            return KLed::focusNextPrevChild(next);
        } else if (kled_focusnextprevchild_callback != nullptr) {
            bool cbval1 = next;

            bool callback_ret = kled_focusnextprevchild_callback(this, cbval1);
            return callback_ret;
        } else {
            return KLed::focusNextPrevChild(next);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* watched, QEvent* event) override {
        if (kled_eventfilter_isbase) {
            kled_eventfilter_isbase = false;
            return KLed::eventFilter(watched, event);
        } else if (kled_eventfilter_callback != nullptr) {
            QObject* cbval1 = watched;
            QEvent* cbval2 = event;

            bool callback_ret = kled_eventfilter_callback(this, cbval1, cbval2);
            return callback_ret;
        } else {
            return KLed::eventFilter(watched, event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (kled_timerevent_isbase) {
            kled_timerevent_isbase = false;
            KLed::timerEvent(event);
        } else if (kled_timerevent_callback != nullptr) {
            QTimerEvent* cbval1 = event;

            kled_timerevent_callback(this, cbval1);
        } else {
            KLed::timerEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (kled_childevent_isbase) {
            kled_childevent_isbase = false;
            KLed::childEvent(event);
        } else if (kled_childevent_callback != nullptr) {
            QChildEvent* cbval1 = event;

            kled_childevent_callback(this, cbval1);
        } else {
            KLed::childEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (kled_customevent_isbase) {
            kled_customevent_isbase = false;
            KLed::customEvent(event);
        } else if (kled_customevent_callback != nullptr) {
            QEvent* cbval1 = event;

            kled_customevent_callback(this, cbval1);
        } else {
            KLed::customEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (kled_connectnotify_isbase) {
            kled_connectnotify_isbase = false;
            KLed::connectNotify(signal);
        } else if (kled_connectnotify_callback != nullptr) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            kled_connectnotify_callback(this, cbval1);
        } else {
            KLed::connectNotify(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (kled_disconnectnotify_isbase) {
            kled_disconnectnotify_isbase = false;
            KLed::disconnectNotify(signal);
        } else if (kled_disconnectnotify_callback != nullptr) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            kled_disconnectnotify_callback(this, cbval1);
        } else {
            KLed::disconnectNotify(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    void updateMicroFocus() {
        if (kled_updatemicrofocus_isbase) {
            kled_updatemicrofocus_isbase = false;
            KLed::updateMicroFocus();
        } else if (kled_updatemicrofocus_callback != nullptr) {
            kled_updatemicrofocus_callback();
        } else {
            KLed::updateMicroFocus();
        }
    }

    // Virtual method for C ABI access and custom callback
    void create() {
        if (kled_create_isbase) {
            kled_create_isbase = false;
            KLed::create();
        } else if (kled_create_callback != nullptr) {
            kled_create_callback();
        } else {
            KLed::create();
        }
    }

    // Virtual method for C ABI access and custom callback
    void destroy() {
        if (kled_destroy_isbase) {
            kled_destroy_isbase = false;
            KLed::destroy();
        } else if (kled_destroy_callback != nullptr) {
            kled_destroy_callback();
        } else {
            KLed::destroy();
        }
    }

    // Virtual method for C ABI access and custom callback
    bool focusNextChild() {
        if (kled_focusnextchild_isbase) {
            kled_focusnextchild_isbase = false;
            return KLed::focusNextChild();
        } else if (kled_focusnextchild_callback != nullptr) {
            bool callback_ret = kled_focusnextchild_callback();
            return callback_ret;
        } else {
            return KLed::focusNextChild();
        }
    }

    // Virtual method for C ABI access and custom callback
    bool focusPreviousChild() {
        if (kled_focuspreviouschild_isbase) {
            kled_focuspreviouschild_isbase = false;
            return KLed::focusPreviousChild();
        } else if (kled_focuspreviouschild_callback != nullptr) {
            bool callback_ret = kled_focuspreviouschild_callback();
            return callback_ret;
        } else {
            return KLed::focusPreviousChild();
        }
    }

    // Virtual method for C ABI access and custom callback
    QObject* sender() const {
        if (kled_sender_isbase) {
            kled_sender_isbase = false;
            return KLed::sender();
        } else if (kled_sender_callback != nullptr) {
            QObject* callback_ret = kled_sender_callback();
            return callback_ret;
        } else {
            return KLed::sender();
        }
    }

    // Virtual method for C ABI access and custom callback
    int senderSignalIndex() const {
        if (kled_sendersignalindex_isbase) {
            kled_sendersignalindex_isbase = false;
            return KLed::senderSignalIndex();
        } else if (kled_sendersignalindex_callback != nullptr) {
            int callback_ret = kled_sendersignalindex_callback();
            return static_cast<int>(callback_ret);
        } else {
            return KLed::senderSignalIndex();
        }
    }

    // Virtual method for C ABI access and custom callback
    int receivers(const char* signal) const {
        if (kled_receivers_isbase) {
            kled_receivers_isbase = false;
            return KLed::receivers(signal);
        } else if (kled_receivers_callback != nullptr) {
            const char* cbval1 = (const char*)signal;

            int callback_ret = kled_receivers_callback(this, cbval1);
            return static_cast<int>(callback_ret);
        } else {
            return KLed::receivers(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    bool isSignalConnected(const QMetaMethod& signal) const {
        if (kled_issignalconnected_isbase) {
            kled_issignalconnected_isbase = false;
            return KLed::isSignalConnected(signal);
        } else if (kled_issignalconnected_callback != nullptr) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            bool callback_ret = kled_issignalconnected_callback(this, cbval1);
            return callback_ret;
        } else {
            return KLed::isSignalConnected(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    double getDecodedMetricF(QPaintDevice::PaintDeviceMetric metricA, QPaintDevice::PaintDeviceMetric metricB) const {
        if (kled_getdecodedmetricf_isbase) {
            kled_getdecodedmetricf_isbase = false;
            return KLed::getDecodedMetricF(metricA, metricB);
        } else if (kled_getdecodedmetricf_callback != nullptr) {
            int cbval1 = static_cast<int>(metricA);
            int cbval2 = static_cast<int>(metricB);

            double callback_ret = kled_getdecodedmetricf_callback(this, cbval1, cbval2);
            return static_cast<double>(callback_ret);
        } else {
            return KLed::getDecodedMetricF(metricA, metricB);
        }
    }

    // Friend functions
    friend void KLed_PaintEvent(KLed* self, QPaintEvent* param1);
    friend void KLed_QBasePaintEvent(KLed* self, QPaintEvent* param1);
    friend void KLed_ResizeEvent(KLed* self, QResizeEvent* param1);
    friend void KLed_QBaseResizeEvent(KLed* self, QResizeEvent* param1);
    friend bool KLed_Event(KLed* self, QEvent* event);
    friend bool KLed_QBaseEvent(KLed* self, QEvent* event);
    friend void KLed_MousePressEvent(KLed* self, QMouseEvent* event);
    friend void KLed_QBaseMousePressEvent(KLed* self, QMouseEvent* event);
    friend void KLed_MouseReleaseEvent(KLed* self, QMouseEvent* event);
    friend void KLed_QBaseMouseReleaseEvent(KLed* self, QMouseEvent* event);
    friend void KLed_MouseDoubleClickEvent(KLed* self, QMouseEvent* event);
    friend void KLed_QBaseMouseDoubleClickEvent(KLed* self, QMouseEvent* event);
    friend void KLed_MouseMoveEvent(KLed* self, QMouseEvent* event);
    friend void KLed_QBaseMouseMoveEvent(KLed* self, QMouseEvent* event);
    friend void KLed_WheelEvent(KLed* self, QWheelEvent* event);
    friend void KLed_QBaseWheelEvent(KLed* self, QWheelEvent* event);
    friend void KLed_KeyPressEvent(KLed* self, QKeyEvent* event);
    friend void KLed_QBaseKeyPressEvent(KLed* self, QKeyEvent* event);
    friend void KLed_KeyReleaseEvent(KLed* self, QKeyEvent* event);
    friend void KLed_QBaseKeyReleaseEvent(KLed* self, QKeyEvent* event);
    friend void KLed_FocusInEvent(KLed* self, QFocusEvent* event);
    friend void KLed_QBaseFocusInEvent(KLed* self, QFocusEvent* event);
    friend void KLed_FocusOutEvent(KLed* self, QFocusEvent* event);
    friend void KLed_QBaseFocusOutEvent(KLed* self, QFocusEvent* event);
    friend void KLed_EnterEvent(KLed* self, QEnterEvent* event);
    friend void KLed_QBaseEnterEvent(KLed* self, QEnterEvent* event);
    friend void KLed_LeaveEvent(KLed* self, QEvent* event);
    friend void KLed_QBaseLeaveEvent(KLed* self, QEvent* event);
    friend void KLed_MoveEvent(KLed* self, QMoveEvent* event);
    friend void KLed_QBaseMoveEvent(KLed* self, QMoveEvent* event);
    friend void KLed_CloseEvent(KLed* self, QCloseEvent* event);
    friend void KLed_QBaseCloseEvent(KLed* self, QCloseEvent* event);
    friend void KLed_ContextMenuEvent(KLed* self, QContextMenuEvent* event);
    friend void KLed_QBaseContextMenuEvent(KLed* self, QContextMenuEvent* event);
    friend void KLed_TabletEvent(KLed* self, QTabletEvent* event);
    friend void KLed_QBaseTabletEvent(KLed* self, QTabletEvent* event);
    friend void KLed_ActionEvent(KLed* self, QActionEvent* event);
    friend void KLed_QBaseActionEvent(KLed* self, QActionEvent* event);
    friend void KLed_DragEnterEvent(KLed* self, QDragEnterEvent* event);
    friend void KLed_QBaseDragEnterEvent(KLed* self, QDragEnterEvent* event);
    friend void KLed_DragMoveEvent(KLed* self, QDragMoveEvent* event);
    friend void KLed_QBaseDragMoveEvent(KLed* self, QDragMoveEvent* event);
    friend void KLed_DragLeaveEvent(KLed* self, QDragLeaveEvent* event);
    friend void KLed_QBaseDragLeaveEvent(KLed* self, QDragLeaveEvent* event);
    friend void KLed_DropEvent(KLed* self, QDropEvent* event);
    friend void KLed_QBaseDropEvent(KLed* self, QDropEvent* event);
    friend void KLed_ShowEvent(KLed* self, QShowEvent* event);
    friend void KLed_QBaseShowEvent(KLed* self, QShowEvent* event);
    friend void KLed_HideEvent(KLed* self, QHideEvent* event);
    friend void KLed_QBaseHideEvent(KLed* self, QHideEvent* event);
    friend bool KLed_NativeEvent(KLed* self, const libqt_string eventType, void* message, intptr_t* result);
    friend bool KLed_QBaseNativeEvent(KLed* self, const libqt_string eventType, void* message, intptr_t* result);
    friend void KLed_ChangeEvent(KLed* self, QEvent* param1);
    friend void KLed_QBaseChangeEvent(KLed* self, QEvent* param1);
    friend int KLed_Metric(const KLed* self, int param1);
    friend int KLed_QBaseMetric(const KLed* self, int param1);
    friend void KLed_InitPainter(const KLed* self, QPainter* painter);
    friend void KLed_QBaseInitPainter(const KLed* self, QPainter* painter);
    friend QPaintDevice* KLed_Redirected(const KLed* self, QPoint* offset);
    friend QPaintDevice* KLed_QBaseRedirected(const KLed* self, QPoint* offset);
    friend QPainter* KLed_SharedPainter(const KLed* self);
    friend QPainter* KLed_QBaseSharedPainter(const KLed* self);
    friend void KLed_InputMethodEvent(KLed* self, QInputMethodEvent* param1);
    friend void KLed_QBaseInputMethodEvent(KLed* self, QInputMethodEvent* param1);
    friend bool KLed_FocusNextPrevChild(KLed* self, bool next);
    friend bool KLed_QBaseFocusNextPrevChild(KLed* self, bool next);
    friend void KLed_TimerEvent(KLed* self, QTimerEvent* event);
    friend void KLed_QBaseTimerEvent(KLed* self, QTimerEvent* event);
    friend void KLed_ChildEvent(KLed* self, QChildEvent* event);
    friend void KLed_QBaseChildEvent(KLed* self, QChildEvent* event);
    friend void KLed_CustomEvent(KLed* self, QEvent* event);
    friend void KLed_QBaseCustomEvent(KLed* self, QEvent* event);
    friend void KLed_ConnectNotify(KLed* self, const QMetaMethod* signal);
    friend void KLed_QBaseConnectNotify(KLed* self, const QMetaMethod* signal);
    friend void KLed_DisconnectNotify(KLed* self, const QMetaMethod* signal);
    friend void KLed_QBaseDisconnectNotify(KLed* self, const QMetaMethod* signal);
    friend void KLed_UpdateMicroFocus(KLed* self);
    friend void KLed_QBaseUpdateMicroFocus(KLed* self);
    friend void KLed_Create(KLed* self);
    friend void KLed_QBaseCreate(KLed* self);
    friend void KLed_Destroy(KLed* self);
    friend void KLed_QBaseDestroy(KLed* self);
    friend bool KLed_FocusNextChild(KLed* self);
    friend bool KLed_QBaseFocusNextChild(KLed* self);
    friend bool KLed_FocusPreviousChild(KLed* self);
    friend bool KLed_QBaseFocusPreviousChild(KLed* self);
    friend QObject* KLed_Sender(const KLed* self);
    friend QObject* KLed_QBaseSender(const KLed* self);
    friend int KLed_SenderSignalIndex(const KLed* self);
    friend int KLed_QBaseSenderSignalIndex(const KLed* self);
    friend int KLed_Receivers(const KLed* self, const char* signal);
    friend int KLed_QBaseReceivers(const KLed* self, const char* signal);
    friend bool KLed_IsSignalConnected(const KLed* self, const QMetaMethod* signal);
    friend bool KLed_QBaseIsSignalConnected(const KLed* self, const QMetaMethod* signal);
    friend double KLed_GetDecodedMetricF(const KLed* self, int metricA, int metricB);
    friend double KLed_QBaseGetDecodedMetricF(const KLed* self, int metricA, int metricB);
};

#endif
