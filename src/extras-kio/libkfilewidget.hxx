#pragma once
#ifndef SRC_EXTRAS_KIOC_LIBVIRTUALKFILEWIDGET_H
#define SRC_EXTRAS_KIOC_LIBVIRTUALKFILEWIDGET_H

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

// This class is a subclass of KFileWidget so that we can call protected methods
class VirtualKFileWidget final : public KFileWidget {

  public:
    // Virtual class boolean flag
    bool isVirtualKFileWidget = true;

    // Virtual class public types (including callbacks)
    using KFileWidget_Metacall_Callback = int (*)(KFileWidget*, int, int, void**);
    using KFileWidget_SizeHint_Callback = QSize* (*)();
    using KFileWidget_ResizeEvent_Callback = void (*)(KFileWidget*, QResizeEvent*);
    using KFileWidget_ShowEvent_Callback = void (*)(KFileWidget*, QShowEvent*);
    using KFileWidget_EventFilter_Callback = bool (*)(KFileWidget*, QObject*, QEvent*);
    using KFileWidget_DevType_Callback = int (*)();
    using KFileWidget_SetVisible_Callback = void (*)(KFileWidget*, bool);
    using KFileWidget_MinimumSizeHint_Callback = QSize* (*)();
    using KFileWidget_HeightForWidth_Callback = int (*)(const KFileWidget*, int);
    using KFileWidget_HasHeightForWidth_Callback = bool (*)();
    using KFileWidget_PaintEngine_Callback = QPaintEngine* (*)();
    using KFileWidget_Event_Callback = bool (*)(KFileWidget*, QEvent*);
    using KFileWidget_MousePressEvent_Callback = void (*)(KFileWidget*, QMouseEvent*);
    using KFileWidget_MouseReleaseEvent_Callback = void (*)(KFileWidget*, QMouseEvent*);
    using KFileWidget_MouseDoubleClickEvent_Callback = void (*)(KFileWidget*, QMouseEvent*);
    using KFileWidget_MouseMoveEvent_Callback = void (*)(KFileWidget*, QMouseEvent*);
    using KFileWidget_WheelEvent_Callback = void (*)(KFileWidget*, QWheelEvent*);
    using KFileWidget_KeyPressEvent_Callback = void (*)(KFileWidget*, QKeyEvent*);
    using KFileWidget_KeyReleaseEvent_Callback = void (*)(KFileWidget*, QKeyEvent*);
    using KFileWidget_FocusInEvent_Callback = void (*)(KFileWidget*, QFocusEvent*);
    using KFileWidget_FocusOutEvent_Callback = void (*)(KFileWidget*, QFocusEvent*);
    using KFileWidget_EnterEvent_Callback = void (*)(KFileWidget*, QEnterEvent*);
    using KFileWidget_LeaveEvent_Callback = void (*)(KFileWidget*, QEvent*);
    using KFileWidget_PaintEvent_Callback = void (*)(KFileWidget*, QPaintEvent*);
    using KFileWidget_MoveEvent_Callback = void (*)(KFileWidget*, QMoveEvent*);
    using KFileWidget_CloseEvent_Callback = void (*)(KFileWidget*, QCloseEvent*);
    using KFileWidget_ContextMenuEvent_Callback = void (*)(KFileWidget*, QContextMenuEvent*);
    using KFileWidget_TabletEvent_Callback = void (*)(KFileWidget*, QTabletEvent*);
    using KFileWidget_ActionEvent_Callback = void (*)(KFileWidget*, QActionEvent*);
    using KFileWidget_DragEnterEvent_Callback = void (*)(KFileWidget*, QDragEnterEvent*);
    using KFileWidget_DragMoveEvent_Callback = void (*)(KFileWidget*, QDragMoveEvent*);
    using KFileWidget_DragLeaveEvent_Callback = void (*)(KFileWidget*, QDragLeaveEvent*);
    using KFileWidget_DropEvent_Callback = void (*)(KFileWidget*, QDropEvent*);
    using KFileWidget_HideEvent_Callback = void (*)(KFileWidget*, QHideEvent*);
    using KFileWidget_NativeEvent_Callback = bool (*)(KFileWidget*, libqt_string, void*, intptr_t*);
    using KFileWidget_ChangeEvent_Callback = void (*)(KFileWidget*, QEvent*);
    using KFileWidget_Metric_Callback = int (*)(const KFileWidget*, int);
    using KFileWidget_InitPainter_Callback = void (*)(const KFileWidget*, QPainter*);
    using KFileWidget_Redirected_Callback = QPaintDevice* (*)(const KFileWidget*, QPoint*);
    using KFileWidget_SharedPainter_Callback = QPainter* (*)();
    using KFileWidget_InputMethodEvent_Callback = void (*)(KFileWidget*, QInputMethodEvent*);
    using KFileWidget_InputMethodQuery_Callback = QVariant* (*)(const KFileWidget*, int);
    using KFileWidget_FocusNextPrevChild_Callback = bool (*)(KFileWidget*, bool);
    using KFileWidget_TimerEvent_Callback = void (*)(KFileWidget*, QTimerEvent*);
    using KFileWidget_ChildEvent_Callback = void (*)(KFileWidget*, QChildEvent*);
    using KFileWidget_CustomEvent_Callback = void (*)(KFileWidget*, QEvent*);
    using KFileWidget_ConnectNotify_Callback = void (*)(KFileWidget*, QMetaMethod*);
    using KFileWidget_DisconnectNotify_Callback = void (*)(KFileWidget*, QMetaMethod*);
    using KFileWidget_UpdateMicroFocus_Callback = void (*)();
    using KFileWidget_Create_Callback = void (*)();
    using KFileWidget_Destroy_Callback = void (*)();
    using KFileWidget_FocusNextChild_Callback = bool (*)();
    using KFileWidget_FocusPreviousChild_Callback = bool (*)();
    using KFileWidget_Sender_Callback = QObject* (*)();
    using KFileWidget_SenderSignalIndex_Callback = int (*)();
    using KFileWidget_Receivers_Callback = int (*)(const KFileWidget*, const char*);
    using KFileWidget_IsSignalConnected_Callback = bool (*)(const KFileWidget*, QMetaMethod*);
    using KFileWidget_GetDecodedMetricF_Callback = double (*)(const KFileWidget*, int, int);

  protected:
    // Instance callback storage
    KFileWidget_Metacall_Callback kfilewidget_metacall_callback = nullptr;
    KFileWidget_SizeHint_Callback kfilewidget_sizehint_callback = nullptr;
    KFileWidget_ResizeEvent_Callback kfilewidget_resizeevent_callback = nullptr;
    KFileWidget_ShowEvent_Callback kfilewidget_showevent_callback = nullptr;
    KFileWidget_EventFilter_Callback kfilewidget_eventfilter_callback = nullptr;
    KFileWidget_DevType_Callback kfilewidget_devtype_callback = nullptr;
    KFileWidget_SetVisible_Callback kfilewidget_setvisible_callback = nullptr;
    KFileWidget_MinimumSizeHint_Callback kfilewidget_minimumsizehint_callback = nullptr;
    KFileWidget_HeightForWidth_Callback kfilewidget_heightforwidth_callback = nullptr;
    KFileWidget_HasHeightForWidth_Callback kfilewidget_hasheightforwidth_callback = nullptr;
    KFileWidget_PaintEngine_Callback kfilewidget_paintengine_callback = nullptr;
    KFileWidget_Event_Callback kfilewidget_event_callback = nullptr;
    KFileWidget_MousePressEvent_Callback kfilewidget_mousepressevent_callback = nullptr;
    KFileWidget_MouseReleaseEvent_Callback kfilewidget_mousereleaseevent_callback = nullptr;
    KFileWidget_MouseDoubleClickEvent_Callback kfilewidget_mousedoubleclickevent_callback = nullptr;
    KFileWidget_MouseMoveEvent_Callback kfilewidget_mousemoveevent_callback = nullptr;
    KFileWidget_WheelEvent_Callback kfilewidget_wheelevent_callback = nullptr;
    KFileWidget_KeyPressEvent_Callback kfilewidget_keypressevent_callback = nullptr;
    KFileWidget_KeyReleaseEvent_Callback kfilewidget_keyreleaseevent_callback = nullptr;
    KFileWidget_FocusInEvent_Callback kfilewidget_focusinevent_callback = nullptr;
    KFileWidget_FocusOutEvent_Callback kfilewidget_focusoutevent_callback = nullptr;
    KFileWidget_EnterEvent_Callback kfilewidget_enterevent_callback = nullptr;
    KFileWidget_LeaveEvent_Callback kfilewidget_leaveevent_callback = nullptr;
    KFileWidget_PaintEvent_Callback kfilewidget_paintevent_callback = nullptr;
    KFileWidget_MoveEvent_Callback kfilewidget_moveevent_callback = nullptr;
    KFileWidget_CloseEvent_Callback kfilewidget_closeevent_callback = nullptr;
    KFileWidget_ContextMenuEvent_Callback kfilewidget_contextmenuevent_callback = nullptr;
    KFileWidget_TabletEvent_Callback kfilewidget_tabletevent_callback = nullptr;
    KFileWidget_ActionEvent_Callback kfilewidget_actionevent_callback = nullptr;
    KFileWidget_DragEnterEvent_Callback kfilewidget_dragenterevent_callback = nullptr;
    KFileWidget_DragMoveEvent_Callback kfilewidget_dragmoveevent_callback = nullptr;
    KFileWidget_DragLeaveEvent_Callback kfilewidget_dragleaveevent_callback = nullptr;
    KFileWidget_DropEvent_Callback kfilewidget_dropevent_callback = nullptr;
    KFileWidget_HideEvent_Callback kfilewidget_hideevent_callback = nullptr;
    KFileWidget_NativeEvent_Callback kfilewidget_nativeevent_callback = nullptr;
    KFileWidget_ChangeEvent_Callback kfilewidget_changeevent_callback = nullptr;
    KFileWidget_Metric_Callback kfilewidget_metric_callback = nullptr;
    KFileWidget_InitPainter_Callback kfilewidget_initpainter_callback = nullptr;
    KFileWidget_Redirected_Callback kfilewidget_redirected_callback = nullptr;
    KFileWidget_SharedPainter_Callback kfilewidget_sharedpainter_callback = nullptr;
    KFileWidget_InputMethodEvent_Callback kfilewidget_inputmethodevent_callback = nullptr;
    KFileWidget_InputMethodQuery_Callback kfilewidget_inputmethodquery_callback = nullptr;
    KFileWidget_FocusNextPrevChild_Callback kfilewidget_focusnextprevchild_callback = nullptr;
    KFileWidget_TimerEvent_Callback kfilewidget_timerevent_callback = nullptr;
    KFileWidget_ChildEvent_Callback kfilewidget_childevent_callback = nullptr;
    KFileWidget_CustomEvent_Callback kfilewidget_customevent_callback = nullptr;
    KFileWidget_ConnectNotify_Callback kfilewidget_connectnotify_callback = nullptr;
    KFileWidget_DisconnectNotify_Callback kfilewidget_disconnectnotify_callback = nullptr;
    KFileWidget_UpdateMicroFocus_Callback kfilewidget_updatemicrofocus_callback = nullptr;
    KFileWidget_Create_Callback kfilewidget_create_callback = nullptr;
    KFileWidget_Destroy_Callback kfilewidget_destroy_callback = nullptr;
    KFileWidget_FocusNextChild_Callback kfilewidget_focusnextchild_callback = nullptr;
    KFileWidget_FocusPreviousChild_Callback kfilewidget_focuspreviouschild_callback = nullptr;
    KFileWidget_Sender_Callback kfilewidget_sender_callback = nullptr;
    KFileWidget_SenderSignalIndex_Callback kfilewidget_sendersignalindex_callback = nullptr;
    KFileWidget_Receivers_Callback kfilewidget_receivers_callback = nullptr;
    KFileWidget_IsSignalConnected_Callback kfilewidget_issignalconnected_callback = nullptr;
    KFileWidget_GetDecodedMetricF_Callback kfilewidget_getdecodedmetricf_callback = nullptr;

    // Instance base flags
    mutable bool kfilewidget_metacall_isbase = false;
    mutable bool kfilewidget_sizehint_isbase = false;
    mutable bool kfilewidget_resizeevent_isbase = false;
    mutable bool kfilewidget_showevent_isbase = false;
    mutable bool kfilewidget_eventfilter_isbase = false;
    mutable bool kfilewidget_devtype_isbase = false;
    mutable bool kfilewidget_setvisible_isbase = false;
    mutable bool kfilewidget_minimumsizehint_isbase = false;
    mutable bool kfilewidget_heightforwidth_isbase = false;
    mutable bool kfilewidget_hasheightforwidth_isbase = false;
    mutable bool kfilewidget_paintengine_isbase = false;
    mutable bool kfilewidget_event_isbase = false;
    mutable bool kfilewidget_mousepressevent_isbase = false;
    mutable bool kfilewidget_mousereleaseevent_isbase = false;
    mutable bool kfilewidget_mousedoubleclickevent_isbase = false;
    mutable bool kfilewidget_mousemoveevent_isbase = false;
    mutable bool kfilewidget_wheelevent_isbase = false;
    mutable bool kfilewidget_keypressevent_isbase = false;
    mutable bool kfilewidget_keyreleaseevent_isbase = false;
    mutable bool kfilewidget_focusinevent_isbase = false;
    mutable bool kfilewidget_focusoutevent_isbase = false;
    mutable bool kfilewidget_enterevent_isbase = false;
    mutable bool kfilewidget_leaveevent_isbase = false;
    mutable bool kfilewidget_paintevent_isbase = false;
    mutable bool kfilewidget_moveevent_isbase = false;
    mutable bool kfilewidget_closeevent_isbase = false;
    mutable bool kfilewidget_contextmenuevent_isbase = false;
    mutable bool kfilewidget_tabletevent_isbase = false;
    mutable bool kfilewidget_actionevent_isbase = false;
    mutable bool kfilewidget_dragenterevent_isbase = false;
    mutable bool kfilewidget_dragmoveevent_isbase = false;
    mutable bool kfilewidget_dragleaveevent_isbase = false;
    mutable bool kfilewidget_dropevent_isbase = false;
    mutable bool kfilewidget_hideevent_isbase = false;
    mutable bool kfilewidget_nativeevent_isbase = false;
    mutable bool kfilewidget_changeevent_isbase = false;
    mutable bool kfilewidget_metric_isbase = false;
    mutable bool kfilewidget_initpainter_isbase = false;
    mutable bool kfilewidget_redirected_isbase = false;
    mutable bool kfilewidget_sharedpainter_isbase = false;
    mutable bool kfilewidget_inputmethodevent_isbase = false;
    mutable bool kfilewidget_inputmethodquery_isbase = false;
    mutable bool kfilewidget_focusnextprevchild_isbase = false;
    mutable bool kfilewidget_timerevent_isbase = false;
    mutable bool kfilewidget_childevent_isbase = false;
    mutable bool kfilewidget_customevent_isbase = false;
    mutable bool kfilewidget_connectnotify_isbase = false;
    mutable bool kfilewidget_disconnectnotify_isbase = false;
    mutable bool kfilewidget_updatemicrofocus_isbase = false;
    mutable bool kfilewidget_create_isbase = false;
    mutable bool kfilewidget_destroy_isbase = false;
    mutable bool kfilewidget_focusnextchild_isbase = false;
    mutable bool kfilewidget_focuspreviouschild_isbase = false;
    mutable bool kfilewidget_sender_isbase = false;
    mutable bool kfilewidget_sendersignalindex_isbase = false;
    mutable bool kfilewidget_receivers_isbase = false;
    mutable bool kfilewidget_issignalconnected_isbase = false;
    mutable bool kfilewidget_getdecodedmetricf_isbase = false;

  public:
    VirtualKFileWidget(const QUrl& startDir) : KFileWidget(startDir) {};
    VirtualKFileWidget(const QUrl& startDir, QWidget* parent) : KFileWidget(startDir, parent) {};

    ~VirtualKFileWidget() {
        kfilewidget_metacall_callback = nullptr;
        kfilewidget_sizehint_callback = nullptr;
        kfilewidget_resizeevent_callback = nullptr;
        kfilewidget_showevent_callback = nullptr;
        kfilewidget_eventfilter_callback = nullptr;
        kfilewidget_devtype_callback = nullptr;
        kfilewidget_setvisible_callback = nullptr;
        kfilewidget_minimumsizehint_callback = nullptr;
        kfilewidget_heightforwidth_callback = nullptr;
        kfilewidget_hasheightforwidth_callback = nullptr;
        kfilewidget_paintengine_callback = nullptr;
        kfilewidget_event_callback = nullptr;
        kfilewidget_mousepressevent_callback = nullptr;
        kfilewidget_mousereleaseevent_callback = nullptr;
        kfilewidget_mousedoubleclickevent_callback = nullptr;
        kfilewidget_mousemoveevent_callback = nullptr;
        kfilewidget_wheelevent_callback = nullptr;
        kfilewidget_keypressevent_callback = nullptr;
        kfilewidget_keyreleaseevent_callback = nullptr;
        kfilewidget_focusinevent_callback = nullptr;
        kfilewidget_focusoutevent_callback = nullptr;
        kfilewidget_enterevent_callback = nullptr;
        kfilewidget_leaveevent_callback = nullptr;
        kfilewidget_paintevent_callback = nullptr;
        kfilewidget_moveevent_callback = nullptr;
        kfilewidget_closeevent_callback = nullptr;
        kfilewidget_contextmenuevent_callback = nullptr;
        kfilewidget_tabletevent_callback = nullptr;
        kfilewidget_actionevent_callback = nullptr;
        kfilewidget_dragenterevent_callback = nullptr;
        kfilewidget_dragmoveevent_callback = nullptr;
        kfilewidget_dragleaveevent_callback = nullptr;
        kfilewidget_dropevent_callback = nullptr;
        kfilewidget_hideevent_callback = nullptr;
        kfilewidget_nativeevent_callback = nullptr;
        kfilewidget_changeevent_callback = nullptr;
        kfilewidget_metric_callback = nullptr;
        kfilewidget_initpainter_callback = nullptr;
        kfilewidget_redirected_callback = nullptr;
        kfilewidget_sharedpainter_callback = nullptr;
        kfilewidget_inputmethodevent_callback = nullptr;
        kfilewidget_inputmethodquery_callback = nullptr;
        kfilewidget_focusnextprevchild_callback = nullptr;
        kfilewidget_timerevent_callback = nullptr;
        kfilewidget_childevent_callback = nullptr;
        kfilewidget_customevent_callback = nullptr;
        kfilewidget_connectnotify_callback = nullptr;
        kfilewidget_disconnectnotify_callback = nullptr;
        kfilewidget_updatemicrofocus_callback = nullptr;
        kfilewidget_create_callback = nullptr;
        kfilewidget_destroy_callback = nullptr;
        kfilewidget_focusnextchild_callback = nullptr;
        kfilewidget_focuspreviouschild_callback = nullptr;
        kfilewidget_sender_callback = nullptr;
        kfilewidget_sendersignalindex_callback = nullptr;
        kfilewidget_receivers_callback = nullptr;
        kfilewidget_issignalconnected_callback = nullptr;
        kfilewidget_getdecodedmetricf_callback = nullptr;
    }

    // Callback setters
    inline void setKFileWidget_Metacall_Callback(KFileWidget_Metacall_Callback cb) { kfilewidget_metacall_callback = cb; }
    inline void setKFileWidget_SizeHint_Callback(KFileWidget_SizeHint_Callback cb) { kfilewidget_sizehint_callback = cb; }
    inline void setKFileWidget_ResizeEvent_Callback(KFileWidget_ResizeEvent_Callback cb) { kfilewidget_resizeevent_callback = cb; }
    inline void setKFileWidget_ShowEvent_Callback(KFileWidget_ShowEvent_Callback cb) { kfilewidget_showevent_callback = cb; }
    inline void setKFileWidget_EventFilter_Callback(KFileWidget_EventFilter_Callback cb) { kfilewidget_eventfilter_callback = cb; }
    inline void setKFileWidget_DevType_Callback(KFileWidget_DevType_Callback cb) { kfilewidget_devtype_callback = cb; }
    inline void setKFileWidget_SetVisible_Callback(KFileWidget_SetVisible_Callback cb) { kfilewidget_setvisible_callback = cb; }
    inline void setKFileWidget_MinimumSizeHint_Callback(KFileWidget_MinimumSizeHint_Callback cb) { kfilewidget_minimumsizehint_callback = cb; }
    inline void setKFileWidget_HeightForWidth_Callback(KFileWidget_HeightForWidth_Callback cb) { kfilewidget_heightforwidth_callback = cb; }
    inline void setKFileWidget_HasHeightForWidth_Callback(KFileWidget_HasHeightForWidth_Callback cb) { kfilewidget_hasheightforwidth_callback = cb; }
    inline void setKFileWidget_PaintEngine_Callback(KFileWidget_PaintEngine_Callback cb) { kfilewidget_paintengine_callback = cb; }
    inline void setKFileWidget_Event_Callback(KFileWidget_Event_Callback cb) { kfilewidget_event_callback = cb; }
    inline void setKFileWidget_MousePressEvent_Callback(KFileWidget_MousePressEvent_Callback cb) { kfilewidget_mousepressevent_callback = cb; }
    inline void setKFileWidget_MouseReleaseEvent_Callback(KFileWidget_MouseReleaseEvent_Callback cb) { kfilewidget_mousereleaseevent_callback = cb; }
    inline void setKFileWidget_MouseDoubleClickEvent_Callback(KFileWidget_MouseDoubleClickEvent_Callback cb) { kfilewidget_mousedoubleclickevent_callback = cb; }
    inline void setKFileWidget_MouseMoveEvent_Callback(KFileWidget_MouseMoveEvent_Callback cb) { kfilewidget_mousemoveevent_callback = cb; }
    inline void setKFileWidget_WheelEvent_Callback(KFileWidget_WheelEvent_Callback cb) { kfilewidget_wheelevent_callback = cb; }
    inline void setKFileWidget_KeyPressEvent_Callback(KFileWidget_KeyPressEvent_Callback cb) { kfilewidget_keypressevent_callback = cb; }
    inline void setKFileWidget_KeyReleaseEvent_Callback(KFileWidget_KeyReleaseEvent_Callback cb) { kfilewidget_keyreleaseevent_callback = cb; }
    inline void setKFileWidget_FocusInEvent_Callback(KFileWidget_FocusInEvent_Callback cb) { kfilewidget_focusinevent_callback = cb; }
    inline void setKFileWidget_FocusOutEvent_Callback(KFileWidget_FocusOutEvent_Callback cb) { kfilewidget_focusoutevent_callback = cb; }
    inline void setKFileWidget_EnterEvent_Callback(KFileWidget_EnterEvent_Callback cb) { kfilewidget_enterevent_callback = cb; }
    inline void setKFileWidget_LeaveEvent_Callback(KFileWidget_LeaveEvent_Callback cb) { kfilewidget_leaveevent_callback = cb; }
    inline void setKFileWidget_PaintEvent_Callback(KFileWidget_PaintEvent_Callback cb) { kfilewidget_paintevent_callback = cb; }
    inline void setKFileWidget_MoveEvent_Callback(KFileWidget_MoveEvent_Callback cb) { kfilewidget_moveevent_callback = cb; }
    inline void setKFileWidget_CloseEvent_Callback(KFileWidget_CloseEvent_Callback cb) { kfilewidget_closeevent_callback = cb; }
    inline void setKFileWidget_ContextMenuEvent_Callback(KFileWidget_ContextMenuEvent_Callback cb) { kfilewidget_contextmenuevent_callback = cb; }
    inline void setKFileWidget_TabletEvent_Callback(KFileWidget_TabletEvent_Callback cb) { kfilewidget_tabletevent_callback = cb; }
    inline void setKFileWidget_ActionEvent_Callback(KFileWidget_ActionEvent_Callback cb) { kfilewidget_actionevent_callback = cb; }
    inline void setKFileWidget_DragEnterEvent_Callback(KFileWidget_DragEnterEvent_Callback cb) { kfilewidget_dragenterevent_callback = cb; }
    inline void setKFileWidget_DragMoveEvent_Callback(KFileWidget_DragMoveEvent_Callback cb) { kfilewidget_dragmoveevent_callback = cb; }
    inline void setKFileWidget_DragLeaveEvent_Callback(KFileWidget_DragLeaveEvent_Callback cb) { kfilewidget_dragleaveevent_callback = cb; }
    inline void setKFileWidget_DropEvent_Callback(KFileWidget_DropEvent_Callback cb) { kfilewidget_dropevent_callback = cb; }
    inline void setKFileWidget_HideEvent_Callback(KFileWidget_HideEvent_Callback cb) { kfilewidget_hideevent_callback = cb; }
    inline void setKFileWidget_NativeEvent_Callback(KFileWidget_NativeEvent_Callback cb) { kfilewidget_nativeevent_callback = cb; }
    inline void setKFileWidget_ChangeEvent_Callback(KFileWidget_ChangeEvent_Callback cb) { kfilewidget_changeevent_callback = cb; }
    inline void setKFileWidget_Metric_Callback(KFileWidget_Metric_Callback cb) { kfilewidget_metric_callback = cb; }
    inline void setKFileWidget_InitPainter_Callback(KFileWidget_InitPainter_Callback cb) { kfilewidget_initpainter_callback = cb; }
    inline void setKFileWidget_Redirected_Callback(KFileWidget_Redirected_Callback cb) { kfilewidget_redirected_callback = cb; }
    inline void setKFileWidget_SharedPainter_Callback(KFileWidget_SharedPainter_Callback cb) { kfilewidget_sharedpainter_callback = cb; }
    inline void setKFileWidget_InputMethodEvent_Callback(KFileWidget_InputMethodEvent_Callback cb) { kfilewidget_inputmethodevent_callback = cb; }
    inline void setKFileWidget_InputMethodQuery_Callback(KFileWidget_InputMethodQuery_Callback cb) { kfilewidget_inputmethodquery_callback = cb; }
    inline void setKFileWidget_FocusNextPrevChild_Callback(KFileWidget_FocusNextPrevChild_Callback cb) { kfilewidget_focusnextprevchild_callback = cb; }
    inline void setKFileWidget_TimerEvent_Callback(KFileWidget_TimerEvent_Callback cb) { kfilewidget_timerevent_callback = cb; }
    inline void setKFileWidget_ChildEvent_Callback(KFileWidget_ChildEvent_Callback cb) { kfilewidget_childevent_callback = cb; }
    inline void setKFileWidget_CustomEvent_Callback(KFileWidget_CustomEvent_Callback cb) { kfilewidget_customevent_callback = cb; }
    inline void setKFileWidget_ConnectNotify_Callback(KFileWidget_ConnectNotify_Callback cb) { kfilewidget_connectnotify_callback = cb; }
    inline void setKFileWidget_DisconnectNotify_Callback(KFileWidget_DisconnectNotify_Callback cb) { kfilewidget_disconnectnotify_callback = cb; }
    inline void setKFileWidget_UpdateMicroFocus_Callback(KFileWidget_UpdateMicroFocus_Callback cb) { kfilewidget_updatemicrofocus_callback = cb; }
    inline void setKFileWidget_Create_Callback(KFileWidget_Create_Callback cb) { kfilewidget_create_callback = cb; }
    inline void setKFileWidget_Destroy_Callback(KFileWidget_Destroy_Callback cb) { kfilewidget_destroy_callback = cb; }
    inline void setKFileWidget_FocusNextChild_Callback(KFileWidget_FocusNextChild_Callback cb) { kfilewidget_focusnextchild_callback = cb; }
    inline void setKFileWidget_FocusPreviousChild_Callback(KFileWidget_FocusPreviousChild_Callback cb) { kfilewidget_focuspreviouschild_callback = cb; }
    inline void setKFileWidget_Sender_Callback(KFileWidget_Sender_Callback cb) { kfilewidget_sender_callback = cb; }
    inline void setKFileWidget_SenderSignalIndex_Callback(KFileWidget_SenderSignalIndex_Callback cb) { kfilewidget_sendersignalindex_callback = cb; }
    inline void setKFileWidget_Receivers_Callback(KFileWidget_Receivers_Callback cb) { kfilewidget_receivers_callback = cb; }
    inline void setKFileWidget_IsSignalConnected_Callback(KFileWidget_IsSignalConnected_Callback cb) { kfilewidget_issignalconnected_callback = cb; }
    inline void setKFileWidget_GetDecodedMetricF_Callback(KFileWidget_GetDecodedMetricF_Callback cb) { kfilewidget_getdecodedmetricf_callback = cb; }

    // Base flag setters
    inline void setKFileWidget_Metacall_IsBase(bool value) const { kfilewidget_metacall_isbase = value; }
    inline void setKFileWidget_SizeHint_IsBase(bool value) const { kfilewidget_sizehint_isbase = value; }
    inline void setKFileWidget_ResizeEvent_IsBase(bool value) const { kfilewidget_resizeevent_isbase = value; }
    inline void setKFileWidget_ShowEvent_IsBase(bool value) const { kfilewidget_showevent_isbase = value; }
    inline void setKFileWidget_EventFilter_IsBase(bool value) const { kfilewidget_eventfilter_isbase = value; }
    inline void setKFileWidget_DevType_IsBase(bool value) const { kfilewidget_devtype_isbase = value; }
    inline void setKFileWidget_SetVisible_IsBase(bool value) const { kfilewidget_setvisible_isbase = value; }
    inline void setKFileWidget_MinimumSizeHint_IsBase(bool value) const { kfilewidget_minimumsizehint_isbase = value; }
    inline void setKFileWidget_HeightForWidth_IsBase(bool value) const { kfilewidget_heightforwidth_isbase = value; }
    inline void setKFileWidget_HasHeightForWidth_IsBase(bool value) const { kfilewidget_hasheightforwidth_isbase = value; }
    inline void setKFileWidget_PaintEngine_IsBase(bool value) const { kfilewidget_paintengine_isbase = value; }
    inline void setKFileWidget_Event_IsBase(bool value) const { kfilewidget_event_isbase = value; }
    inline void setKFileWidget_MousePressEvent_IsBase(bool value) const { kfilewidget_mousepressevent_isbase = value; }
    inline void setKFileWidget_MouseReleaseEvent_IsBase(bool value) const { kfilewidget_mousereleaseevent_isbase = value; }
    inline void setKFileWidget_MouseDoubleClickEvent_IsBase(bool value) const { kfilewidget_mousedoubleclickevent_isbase = value; }
    inline void setKFileWidget_MouseMoveEvent_IsBase(bool value) const { kfilewidget_mousemoveevent_isbase = value; }
    inline void setKFileWidget_WheelEvent_IsBase(bool value) const { kfilewidget_wheelevent_isbase = value; }
    inline void setKFileWidget_KeyPressEvent_IsBase(bool value) const { kfilewidget_keypressevent_isbase = value; }
    inline void setKFileWidget_KeyReleaseEvent_IsBase(bool value) const { kfilewidget_keyreleaseevent_isbase = value; }
    inline void setKFileWidget_FocusInEvent_IsBase(bool value) const { kfilewidget_focusinevent_isbase = value; }
    inline void setKFileWidget_FocusOutEvent_IsBase(bool value) const { kfilewidget_focusoutevent_isbase = value; }
    inline void setKFileWidget_EnterEvent_IsBase(bool value) const { kfilewidget_enterevent_isbase = value; }
    inline void setKFileWidget_LeaveEvent_IsBase(bool value) const { kfilewidget_leaveevent_isbase = value; }
    inline void setKFileWidget_PaintEvent_IsBase(bool value) const { kfilewidget_paintevent_isbase = value; }
    inline void setKFileWidget_MoveEvent_IsBase(bool value) const { kfilewidget_moveevent_isbase = value; }
    inline void setKFileWidget_CloseEvent_IsBase(bool value) const { kfilewidget_closeevent_isbase = value; }
    inline void setKFileWidget_ContextMenuEvent_IsBase(bool value) const { kfilewidget_contextmenuevent_isbase = value; }
    inline void setKFileWidget_TabletEvent_IsBase(bool value) const { kfilewidget_tabletevent_isbase = value; }
    inline void setKFileWidget_ActionEvent_IsBase(bool value) const { kfilewidget_actionevent_isbase = value; }
    inline void setKFileWidget_DragEnterEvent_IsBase(bool value) const { kfilewidget_dragenterevent_isbase = value; }
    inline void setKFileWidget_DragMoveEvent_IsBase(bool value) const { kfilewidget_dragmoveevent_isbase = value; }
    inline void setKFileWidget_DragLeaveEvent_IsBase(bool value) const { kfilewidget_dragleaveevent_isbase = value; }
    inline void setKFileWidget_DropEvent_IsBase(bool value) const { kfilewidget_dropevent_isbase = value; }
    inline void setKFileWidget_HideEvent_IsBase(bool value) const { kfilewidget_hideevent_isbase = value; }
    inline void setKFileWidget_NativeEvent_IsBase(bool value) const { kfilewidget_nativeevent_isbase = value; }
    inline void setKFileWidget_ChangeEvent_IsBase(bool value) const { kfilewidget_changeevent_isbase = value; }
    inline void setKFileWidget_Metric_IsBase(bool value) const { kfilewidget_metric_isbase = value; }
    inline void setKFileWidget_InitPainter_IsBase(bool value) const { kfilewidget_initpainter_isbase = value; }
    inline void setKFileWidget_Redirected_IsBase(bool value) const { kfilewidget_redirected_isbase = value; }
    inline void setKFileWidget_SharedPainter_IsBase(bool value) const { kfilewidget_sharedpainter_isbase = value; }
    inline void setKFileWidget_InputMethodEvent_IsBase(bool value) const { kfilewidget_inputmethodevent_isbase = value; }
    inline void setKFileWidget_InputMethodQuery_IsBase(bool value) const { kfilewidget_inputmethodquery_isbase = value; }
    inline void setKFileWidget_FocusNextPrevChild_IsBase(bool value) const { kfilewidget_focusnextprevchild_isbase = value; }
    inline void setKFileWidget_TimerEvent_IsBase(bool value) const { kfilewidget_timerevent_isbase = value; }
    inline void setKFileWidget_ChildEvent_IsBase(bool value) const { kfilewidget_childevent_isbase = value; }
    inline void setKFileWidget_CustomEvent_IsBase(bool value) const { kfilewidget_customevent_isbase = value; }
    inline void setKFileWidget_ConnectNotify_IsBase(bool value) const { kfilewidget_connectnotify_isbase = value; }
    inline void setKFileWidget_DisconnectNotify_IsBase(bool value) const { kfilewidget_disconnectnotify_isbase = value; }
    inline void setKFileWidget_UpdateMicroFocus_IsBase(bool value) const { kfilewidget_updatemicrofocus_isbase = value; }
    inline void setKFileWidget_Create_IsBase(bool value) const { kfilewidget_create_isbase = value; }
    inline void setKFileWidget_Destroy_IsBase(bool value) const { kfilewidget_destroy_isbase = value; }
    inline void setKFileWidget_FocusNextChild_IsBase(bool value) const { kfilewidget_focusnextchild_isbase = value; }
    inline void setKFileWidget_FocusPreviousChild_IsBase(bool value) const { kfilewidget_focuspreviouschild_isbase = value; }
    inline void setKFileWidget_Sender_IsBase(bool value) const { kfilewidget_sender_isbase = value; }
    inline void setKFileWidget_SenderSignalIndex_IsBase(bool value) const { kfilewidget_sendersignalindex_isbase = value; }
    inline void setKFileWidget_Receivers_IsBase(bool value) const { kfilewidget_receivers_isbase = value; }
    inline void setKFileWidget_IsSignalConnected_IsBase(bool value) const { kfilewidget_issignalconnected_isbase = value; }
    inline void setKFileWidget_GetDecodedMetricF_IsBase(bool value) const { kfilewidget_getdecodedmetricf_isbase = value; }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (kfilewidget_metacall_isbase) {
            kfilewidget_metacall_isbase = false;
            return KFileWidget::qt_metacall(param1, param2, param3);
        } else if (kfilewidget_metacall_callback != nullptr) {
            int cbval1 = static_cast<int>(param1);
            int cbval2 = param2;
            void** cbval3 = param3;

            int callback_ret = kfilewidget_metacall_callback(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        } else {
            return KFileWidget::qt_metacall(param1, param2, param3);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QSize sizeHint() const override {
        if (kfilewidget_sizehint_isbase) {
            kfilewidget_sizehint_isbase = false;
            return KFileWidget::sizeHint();
        } else if (kfilewidget_sizehint_callback != nullptr) {
            QSize* callback_ret = kfilewidget_sizehint_callback();
            return *callback_ret;
        } else {
            return KFileWidget::sizeHint();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void resizeEvent(QResizeEvent* event) override {
        if (kfilewidget_resizeevent_isbase) {
            kfilewidget_resizeevent_isbase = false;
            KFileWidget::resizeEvent(event);
        } else if (kfilewidget_resizeevent_callback != nullptr) {
            QResizeEvent* cbval1 = event;

            kfilewidget_resizeevent_callback(this, cbval1);
        } else {
            KFileWidget::resizeEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void showEvent(QShowEvent* event) override {
        if (kfilewidget_showevent_isbase) {
            kfilewidget_showevent_isbase = false;
            KFileWidget::showEvent(event);
        } else if (kfilewidget_showevent_callback != nullptr) {
            QShowEvent* cbval1 = event;

            kfilewidget_showevent_callback(this, cbval1);
        } else {
            KFileWidget::showEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* watched, QEvent* event) override {
        if (kfilewidget_eventfilter_isbase) {
            kfilewidget_eventfilter_isbase = false;
            return KFileWidget::eventFilter(watched, event);
        } else if (kfilewidget_eventfilter_callback != nullptr) {
            QObject* cbval1 = watched;
            QEvent* cbval2 = event;

            bool callback_ret = kfilewidget_eventfilter_callback(this, cbval1, cbval2);
            return callback_ret;
        } else {
            return KFileWidget::eventFilter(watched, event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual int devType() const override {
        if (kfilewidget_devtype_isbase) {
            kfilewidget_devtype_isbase = false;
            return KFileWidget::devType();
        } else if (kfilewidget_devtype_callback != nullptr) {
            int callback_ret = kfilewidget_devtype_callback();
            return static_cast<int>(callback_ret);
        } else {
            return KFileWidget::devType();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void setVisible(bool visible) override {
        if (kfilewidget_setvisible_isbase) {
            kfilewidget_setvisible_isbase = false;
            KFileWidget::setVisible(visible);
        } else if (kfilewidget_setvisible_callback != nullptr) {
            bool cbval1 = visible;

            kfilewidget_setvisible_callback(this, cbval1);
        } else {
            KFileWidget::setVisible(visible);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QSize minimumSizeHint() const override {
        if (kfilewidget_minimumsizehint_isbase) {
            kfilewidget_minimumsizehint_isbase = false;
            return KFileWidget::minimumSizeHint();
        } else if (kfilewidget_minimumsizehint_callback != nullptr) {
            QSize* callback_ret = kfilewidget_minimumsizehint_callback();
            return *callback_ret;
        } else {
            return KFileWidget::minimumSizeHint();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual int heightForWidth(int param1) const override {
        if (kfilewidget_heightforwidth_isbase) {
            kfilewidget_heightforwidth_isbase = false;
            return KFileWidget::heightForWidth(param1);
        } else if (kfilewidget_heightforwidth_callback != nullptr) {
            int cbval1 = param1;

            int callback_ret = kfilewidget_heightforwidth_callback(this, cbval1);
            return static_cast<int>(callback_ret);
        } else {
            return KFileWidget::heightForWidth(param1);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool hasHeightForWidth() const override {
        if (kfilewidget_hasheightforwidth_isbase) {
            kfilewidget_hasheightforwidth_isbase = false;
            return KFileWidget::hasHeightForWidth();
        } else if (kfilewidget_hasheightforwidth_callback != nullptr) {
            bool callback_ret = kfilewidget_hasheightforwidth_callback();
            return callback_ret;
        } else {
            return KFileWidget::hasHeightForWidth();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QPaintEngine* paintEngine() const override {
        if (kfilewidget_paintengine_isbase) {
            kfilewidget_paintengine_isbase = false;
            return KFileWidget::paintEngine();
        } else if (kfilewidget_paintengine_callback != nullptr) {
            QPaintEngine* callback_ret = kfilewidget_paintengine_callback();
            return callback_ret;
        } else {
            return KFileWidget::paintEngine();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* event) override {
        if (kfilewidget_event_isbase) {
            kfilewidget_event_isbase = false;
            return KFileWidget::event(event);
        } else if (kfilewidget_event_callback != nullptr) {
            QEvent* cbval1 = event;

            bool callback_ret = kfilewidget_event_callback(this, cbval1);
            return callback_ret;
        } else {
            return KFileWidget::event(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void mousePressEvent(QMouseEvent* event) override {
        if (kfilewidget_mousepressevent_isbase) {
            kfilewidget_mousepressevent_isbase = false;
            KFileWidget::mousePressEvent(event);
        } else if (kfilewidget_mousepressevent_callback != nullptr) {
            QMouseEvent* cbval1 = event;

            kfilewidget_mousepressevent_callback(this, cbval1);
        } else {
            KFileWidget::mousePressEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseReleaseEvent(QMouseEvent* event) override {
        if (kfilewidget_mousereleaseevent_isbase) {
            kfilewidget_mousereleaseevent_isbase = false;
            KFileWidget::mouseReleaseEvent(event);
        } else if (kfilewidget_mousereleaseevent_callback != nullptr) {
            QMouseEvent* cbval1 = event;

            kfilewidget_mousereleaseevent_callback(this, cbval1);
        } else {
            KFileWidget::mouseReleaseEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseDoubleClickEvent(QMouseEvent* event) override {
        if (kfilewidget_mousedoubleclickevent_isbase) {
            kfilewidget_mousedoubleclickevent_isbase = false;
            KFileWidget::mouseDoubleClickEvent(event);
        } else if (kfilewidget_mousedoubleclickevent_callback != nullptr) {
            QMouseEvent* cbval1 = event;

            kfilewidget_mousedoubleclickevent_callback(this, cbval1);
        } else {
            KFileWidget::mouseDoubleClickEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseMoveEvent(QMouseEvent* event) override {
        if (kfilewidget_mousemoveevent_isbase) {
            kfilewidget_mousemoveevent_isbase = false;
            KFileWidget::mouseMoveEvent(event);
        } else if (kfilewidget_mousemoveevent_callback != nullptr) {
            QMouseEvent* cbval1 = event;

            kfilewidget_mousemoveevent_callback(this, cbval1);
        } else {
            KFileWidget::mouseMoveEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void wheelEvent(QWheelEvent* event) override {
        if (kfilewidget_wheelevent_isbase) {
            kfilewidget_wheelevent_isbase = false;
            KFileWidget::wheelEvent(event);
        } else if (kfilewidget_wheelevent_callback != nullptr) {
            QWheelEvent* cbval1 = event;

            kfilewidget_wheelevent_callback(this, cbval1);
        } else {
            KFileWidget::wheelEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void keyPressEvent(QKeyEvent* event) override {
        if (kfilewidget_keypressevent_isbase) {
            kfilewidget_keypressevent_isbase = false;
            KFileWidget::keyPressEvent(event);
        } else if (kfilewidget_keypressevent_callback != nullptr) {
            QKeyEvent* cbval1 = event;

            kfilewidget_keypressevent_callback(this, cbval1);
        } else {
            KFileWidget::keyPressEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void keyReleaseEvent(QKeyEvent* event) override {
        if (kfilewidget_keyreleaseevent_isbase) {
            kfilewidget_keyreleaseevent_isbase = false;
            KFileWidget::keyReleaseEvent(event);
        } else if (kfilewidget_keyreleaseevent_callback != nullptr) {
            QKeyEvent* cbval1 = event;

            kfilewidget_keyreleaseevent_callback(this, cbval1);
        } else {
            KFileWidget::keyReleaseEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void focusInEvent(QFocusEvent* event) override {
        if (kfilewidget_focusinevent_isbase) {
            kfilewidget_focusinevent_isbase = false;
            KFileWidget::focusInEvent(event);
        } else if (kfilewidget_focusinevent_callback != nullptr) {
            QFocusEvent* cbval1 = event;

            kfilewidget_focusinevent_callback(this, cbval1);
        } else {
            KFileWidget::focusInEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void focusOutEvent(QFocusEvent* event) override {
        if (kfilewidget_focusoutevent_isbase) {
            kfilewidget_focusoutevent_isbase = false;
            KFileWidget::focusOutEvent(event);
        } else if (kfilewidget_focusoutevent_callback != nullptr) {
            QFocusEvent* cbval1 = event;

            kfilewidget_focusoutevent_callback(this, cbval1);
        } else {
            KFileWidget::focusOutEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void enterEvent(QEnterEvent* event) override {
        if (kfilewidget_enterevent_isbase) {
            kfilewidget_enterevent_isbase = false;
            KFileWidget::enterEvent(event);
        } else if (kfilewidget_enterevent_callback != nullptr) {
            QEnterEvent* cbval1 = event;

            kfilewidget_enterevent_callback(this, cbval1);
        } else {
            KFileWidget::enterEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void leaveEvent(QEvent* event) override {
        if (kfilewidget_leaveevent_isbase) {
            kfilewidget_leaveevent_isbase = false;
            KFileWidget::leaveEvent(event);
        } else if (kfilewidget_leaveevent_callback != nullptr) {
            QEvent* cbval1 = event;

            kfilewidget_leaveevent_callback(this, cbval1);
        } else {
            KFileWidget::leaveEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void paintEvent(QPaintEvent* event) override {
        if (kfilewidget_paintevent_isbase) {
            kfilewidget_paintevent_isbase = false;
            KFileWidget::paintEvent(event);
        } else if (kfilewidget_paintevent_callback != nullptr) {
            QPaintEvent* cbval1 = event;

            kfilewidget_paintevent_callback(this, cbval1);
        } else {
            KFileWidget::paintEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void moveEvent(QMoveEvent* event) override {
        if (kfilewidget_moveevent_isbase) {
            kfilewidget_moveevent_isbase = false;
            KFileWidget::moveEvent(event);
        } else if (kfilewidget_moveevent_callback != nullptr) {
            QMoveEvent* cbval1 = event;

            kfilewidget_moveevent_callback(this, cbval1);
        } else {
            KFileWidget::moveEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void closeEvent(QCloseEvent* event) override {
        if (kfilewidget_closeevent_isbase) {
            kfilewidget_closeevent_isbase = false;
            KFileWidget::closeEvent(event);
        } else if (kfilewidget_closeevent_callback != nullptr) {
            QCloseEvent* cbval1 = event;

            kfilewidget_closeevent_callback(this, cbval1);
        } else {
            KFileWidget::closeEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void contextMenuEvent(QContextMenuEvent* event) override {
        if (kfilewidget_contextmenuevent_isbase) {
            kfilewidget_contextmenuevent_isbase = false;
            KFileWidget::contextMenuEvent(event);
        } else if (kfilewidget_contextmenuevent_callback != nullptr) {
            QContextMenuEvent* cbval1 = event;

            kfilewidget_contextmenuevent_callback(this, cbval1);
        } else {
            KFileWidget::contextMenuEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void tabletEvent(QTabletEvent* event) override {
        if (kfilewidget_tabletevent_isbase) {
            kfilewidget_tabletevent_isbase = false;
            KFileWidget::tabletEvent(event);
        } else if (kfilewidget_tabletevent_callback != nullptr) {
            QTabletEvent* cbval1 = event;

            kfilewidget_tabletevent_callback(this, cbval1);
        } else {
            KFileWidget::tabletEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void actionEvent(QActionEvent* event) override {
        if (kfilewidget_actionevent_isbase) {
            kfilewidget_actionevent_isbase = false;
            KFileWidget::actionEvent(event);
        } else if (kfilewidget_actionevent_callback != nullptr) {
            QActionEvent* cbval1 = event;

            kfilewidget_actionevent_callback(this, cbval1);
        } else {
            KFileWidget::actionEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragEnterEvent(QDragEnterEvent* event) override {
        if (kfilewidget_dragenterevent_isbase) {
            kfilewidget_dragenterevent_isbase = false;
            KFileWidget::dragEnterEvent(event);
        } else if (kfilewidget_dragenterevent_callback != nullptr) {
            QDragEnterEvent* cbval1 = event;

            kfilewidget_dragenterevent_callback(this, cbval1);
        } else {
            KFileWidget::dragEnterEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragMoveEvent(QDragMoveEvent* event) override {
        if (kfilewidget_dragmoveevent_isbase) {
            kfilewidget_dragmoveevent_isbase = false;
            KFileWidget::dragMoveEvent(event);
        } else if (kfilewidget_dragmoveevent_callback != nullptr) {
            QDragMoveEvent* cbval1 = event;

            kfilewidget_dragmoveevent_callback(this, cbval1);
        } else {
            KFileWidget::dragMoveEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragLeaveEvent(QDragLeaveEvent* event) override {
        if (kfilewidget_dragleaveevent_isbase) {
            kfilewidget_dragleaveevent_isbase = false;
            KFileWidget::dragLeaveEvent(event);
        } else if (kfilewidget_dragleaveevent_callback != nullptr) {
            QDragLeaveEvent* cbval1 = event;

            kfilewidget_dragleaveevent_callback(this, cbval1);
        } else {
            KFileWidget::dragLeaveEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void dropEvent(QDropEvent* event) override {
        if (kfilewidget_dropevent_isbase) {
            kfilewidget_dropevent_isbase = false;
            KFileWidget::dropEvent(event);
        } else if (kfilewidget_dropevent_callback != nullptr) {
            QDropEvent* cbval1 = event;

            kfilewidget_dropevent_callback(this, cbval1);
        } else {
            KFileWidget::dropEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void hideEvent(QHideEvent* event) override {
        if (kfilewidget_hideevent_isbase) {
            kfilewidget_hideevent_isbase = false;
            KFileWidget::hideEvent(event);
        } else if (kfilewidget_hideevent_callback != nullptr) {
            QHideEvent* cbval1 = event;

            kfilewidget_hideevent_callback(this, cbval1);
        } else {
            KFileWidget::hideEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool nativeEvent(const QByteArray& eventType, void* message, qintptr* result) override {
        if (kfilewidget_nativeevent_isbase) {
            kfilewidget_nativeevent_isbase = false;
            return KFileWidget::nativeEvent(eventType, message, result);
        } else if (kfilewidget_nativeevent_callback != nullptr) {
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

            bool callback_ret = kfilewidget_nativeevent_callback(this, cbval1, cbval2, cbval3);
            return callback_ret;
        } else {
            return KFileWidget::nativeEvent(eventType, message, result);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void changeEvent(QEvent* param1) override {
        if (kfilewidget_changeevent_isbase) {
            kfilewidget_changeevent_isbase = false;
            KFileWidget::changeEvent(param1);
        } else if (kfilewidget_changeevent_callback != nullptr) {
            QEvent* cbval1 = param1;

            kfilewidget_changeevent_callback(this, cbval1);
        } else {
            KFileWidget::changeEvent(param1);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual int metric(QPaintDevice::PaintDeviceMetric param1) const override {
        if (kfilewidget_metric_isbase) {
            kfilewidget_metric_isbase = false;
            return KFileWidget::metric(param1);
        } else if (kfilewidget_metric_callback != nullptr) {
            int cbval1 = static_cast<int>(param1);

            int callback_ret = kfilewidget_metric_callback(this, cbval1);
            return static_cast<int>(callback_ret);
        } else {
            return KFileWidget::metric(param1);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void initPainter(QPainter* painter) const override {
        if (kfilewidget_initpainter_isbase) {
            kfilewidget_initpainter_isbase = false;
            KFileWidget::initPainter(painter);
        } else if (kfilewidget_initpainter_callback != nullptr) {
            QPainter* cbval1 = painter;

            kfilewidget_initpainter_callback(this, cbval1);
        } else {
            KFileWidget::initPainter(painter);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QPaintDevice* redirected(QPoint* offset) const override {
        if (kfilewidget_redirected_isbase) {
            kfilewidget_redirected_isbase = false;
            return KFileWidget::redirected(offset);
        } else if (kfilewidget_redirected_callback != nullptr) {
            QPoint* cbval1 = offset;

            QPaintDevice* callback_ret = kfilewidget_redirected_callback(this, cbval1);
            return callback_ret;
        } else {
            return KFileWidget::redirected(offset);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QPainter* sharedPainter() const override {
        if (kfilewidget_sharedpainter_isbase) {
            kfilewidget_sharedpainter_isbase = false;
            return KFileWidget::sharedPainter();
        } else if (kfilewidget_sharedpainter_callback != nullptr) {
            QPainter* callback_ret = kfilewidget_sharedpainter_callback();
            return callback_ret;
        } else {
            return KFileWidget::sharedPainter();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void inputMethodEvent(QInputMethodEvent* param1) override {
        if (kfilewidget_inputmethodevent_isbase) {
            kfilewidget_inputmethodevent_isbase = false;
            KFileWidget::inputMethodEvent(param1);
        } else if (kfilewidget_inputmethodevent_callback != nullptr) {
            QInputMethodEvent* cbval1 = param1;

            kfilewidget_inputmethodevent_callback(this, cbval1);
        } else {
            KFileWidget::inputMethodEvent(param1);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QVariant inputMethodQuery(Qt::InputMethodQuery param1) const override {
        if (kfilewidget_inputmethodquery_isbase) {
            kfilewidget_inputmethodquery_isbase = false;
            return KFileWidget::inputMethodQuery(param1);
        } else if (kfilewidget_inputmethodquery_callback != nullptr) {
            int cbval1 = static_cast<int>(param1);

            QVariant* callback_ret = kfilewidget_inputmethodquery_callback(this, cbval1);
            return *callback_ret;
        } else {
            return KFileWidget::inputMethodQuery(param1);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool focusNextPrevChild(bool next) override {
        if (kfilewidget_focusnextprevchild_isbase) {
            kfilewidget_focusnextprevchild_isbase = false;
            return KFileWidget::focusNextPrevChild(next);
        } else if (kfilewidget_focusnextprevchild_callback != nullptr) {
            bool cbval1 = next;

            bool callback_ret = kfilewidget_focusnextprevchild_callback(this, cbval1);
            return callback_ret;
        } else {
            return KFileWidget::focusNextPrevChild(next);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (kfilewidget_timerevent_isbase) {
            kfilewidget_timerevent_isbase = false;
            KFileWidget::timerEvent(event);
        } else if (kfilewidget_timerevent_callback != nullptr) {
            QTimerEvent* cbval1 = event;

            kfilewidget_timerevent_callback(this, cbval1);
        } else {
            KFileWidget::timerEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (kfilewidget_childevent_isbase) {
            kfilewidget_childevent_isbase = false;
            KFileWidget::childEvent(event);
        } else if (kfilewidget_childevent_callback != nullptr) {
            QChildEvent* cbval1 = event;

            kfilewidget_childevent_callback(this, cbval1);
        } else {
            KFileWidget::childEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (kfilewidget_customevent_isbase) {
            kfilewidget_customevent_isbase = false;
            KFileWidget::customEvent(event);
        } else if (kfilewidget_customevent_callback != nullptr) {
            QEvent* cbval1 = event;

            kfilewidget_customevent_callback(this, cbval1);
        } else {
            KFileWidget::customEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (kfilewidget_connectnotify_isbase) {
            kfilewidget_connectnotify_isbase = false;
            KFileWidget::connectNotify(signal);
        } else if (kfilewidget_connectnotify_callback != nullptr) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            kfilewidget_connectnotify_callback(this, cbval1);
        } else {
            KFileWidget::connectNotify(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (kfilewidget_disconnectnotify_isbase) {
            kfilewidget_disconnectnotify_isbase = false;
            KFileWidget::disconnectNotify(signal);
        } else if (kfilewidget_disconnectnotify_callback != nullptr) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            kfilewidget_disconnectnotify_callback(this, cbval1);
        } else {
            KFileWidget::disconnectNotify(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    void updateMicroFocus() {
        if (kfilewidget_updatemicrofocus_isbase) {
            kfilewidget_updatemicrofocus_isbase = false;
            KFileWidget::updateMicroFocus();
        } else if (kfilewidget_updatemicrofocus_callback != nullptr) {
            kfilewidget_updatemicrofocus_callback();
        } else {
            KFileWidget::updateMicroFocus();
        }
    }

    // Virtual method for C ABI access and custom callback
    void create() {
        if (kfilewidget_create_isbase) {
            kfilewidget_create_isbase = false;
            KFileWidget::create();
        } else if (kfilewidget_create_callback != nullptr) {
            kfilewidget_create_callback();
        } else {
            KFileWidget::create();
        }
    }

    // Virtual method for C ABI access and custom callback
    void destroy() {
        if (kfilewidget_destroy_isbase) {
            kfilewidget_destroy_isbase = false;
            KFileWidget::destroy();
        } else if (kfilewidget_destroy_callback != nullptr) {
            kfilewidget_destroy_callback();
        } else {
            KFileWidget::destroy();
        }
    }

    // Virtual method for C ABI access and custom callback
    bool focusNextChild() {
        if (kfilewidget_focusnextchild_isbase) {
            kfilewidget_focusnextchild_isbase = false;
            return KFileWidget::focusNextChild();
        } else if (kfilewidget_focusnextchild_callback != nullptr) {
            bool callback_ret = kfilewidget_focusnextchild_callback();
            return callback_ret;
        } else {
            return KFileWidget::focusNextChild();
        }
    }

    // Virtual method for C ABI access and custom callback
    bool focusPreviousChild() {
        if (kfilewidget_focuspreviouschild_isbase) {
            kfilewidget_focuspreviouschild_isbase = false;
            return KFileWidget::focusPreviousChild();
        } else if (kfilewidget_focuspreviouschild_callback != nullptr) {
            bool callback_ret = kfilewidget_focuspreviouschild_callback();
            return callback_ret;
        } else {
            return KFileWidget::focusPreviousChild();
        }
    }

    // Virtual method for C ABI access and custom callback
    QObject* sender() const {
        if (kfilewidget_sender_isbase) {
            kfilewidget_sender_isbase = false;
            return KFileWidget::sender();
        } else if (kfilewidget_sender_callback != nullptr) {
            QObject* callback_ret = kfilewidget_sender_callback();
            return callback_ret;
        } else {
            return KFileWidget::sender();
        }
    }

    // Virtual method for C ABI access and custom callback
    int senderSignalIndex() const {
        if (kfilewidget_sendersignalindex_isbase) {
            kfilewidget_sendersignalindex_isbase = false;
            return KFileWidget::senderSignalIndex();
        } else if (kfilewidget_sendersignalindex_callback != nullptr) {
            int callback_ret = kfilewidget_sendersignalindex_callback();
            return static_cast<int>(callback_ret);
        } else {
            return KFileWidget::senderSignalIndex();
        }
    }

    // Virtual method for C ABI access and custom callback
    int receivers(const char* signal) const {
        if (kfilewidget_receivers_isbase) {
            kfilewidget_receivers_isbase = false;
            return KFileWidget::receivers(signal);
        } else if (kfilewidget_receivers_callback != nullptr) {
            const char* cbval1 = (const char*)signal;

            int callback_ret = kfilewidget_receivers_callback(this, cbval1);
            return static_cast<int>(callback_ret);
        } else {
            return KFileWidget::receivers(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    bool isSignalConnected(const QMetaMethod& signal) const {
        if (kfilewidget_issignalconnected_isbase) {
            kfilewidget_issignalconnected_isbase = false;
            return KFileWidget::isSignalConnected(signal);
        } else if (kfilewidget_issignalconnected_callback != nullptr) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            bool callback_ret = kfilewidget_issignalconnected_callback(this, cbval1);
            return callback_ret;
        } else {
            return KFileWidget::isSignalConnected(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    double getDecodedMetricF(QPaintDevice::PaintDeviceMetric metricA, QPaintDevice::PaintDeviceMetric metricB) const {
        if (kfilewidget_getdecodedmetricf_isbase) {
            kfilewidget_getdecodedmetricf_isbase = false;
            return KFileWidget::getDecodedMetricF(metricA, metricB);
        } else if (kfilewidget_getdecodedmetricf_callback != nullptr) {
            int cbval1 = static_cast<int>(metricA);
            int cbval2 = static_cast<int>(metricB);

            double callback_ret = kfilewidget_getdecodedmetricf_callback(this, cbval1, cbval2);
            return static_cast<double>(callback_ret);
        } else {
            return KFileWidget::getDecodedMetricF(metricA, metricB);
        }
    }

    // Friend functions
    friend void KFileWidget_ResizeEvent(KFileWidget* self, QResizeEvent* event);
    friend void KFileWidget_QBaseResizeEvent(KFileWidget* self, QResizeEvent* event);
    friend void KFileWidget_ShowEvent(KFileWidget* self, QShowEvent* event);
    friend void KFileWidget_QBaseShowEvent(KFileWidget* self, QShowEvent* event);
    friend bool KFileWidget_EventFilter(KFileWidget* self, QObject* watched, QEvent* event);
    friend bool KFileWidget_QBaseEventFilter(KFileWidget* self, QObject* watched, QEvent* event);
    friend bool KFileWidget_Event(KFileWidget* self, QEvent* event);
    friend bool KFileWidget_QBaseEvent(KFileWidget* self, QEvent* event);
    friend void KFileWidget_MousePressEvent(KFileWidget* self, QMouseEvent* event);
    friend void KFileWidget_QBaseMousePressEvent(KFileWidget* self, QMouseEvent* event);
    friend void KFileWidget_MouseReleaseEvent(KFileWidget* self, QMouseEvent* event);
    friend void KFileWidget_QBaseMouseReleaseEvent(KFileWidget* self, QMouseEvent* event);
    friend void KFileWidget_MouseDoubleClickEvent(KFileWidget* self, QMouseEvent* event);
    friend void KFileWidget_QBaseMouseDoubleClickEvent(KFileWidget* self, QMouseEvent* event);
    friend void KFileWidget_MouseMoveEvent(KFileWidget* self, QMouseEvent* event);
    friend void KFileWidget_QBaseMouseMoveEvent(KFileWidget* self, QMouseEvent* event);
    friend void KFileWidget_WheelEvent(KFileWidget* self, QWheelEvent* event);
    friend void KFileWidget_QBaseWheelEvent(KFileWidget* self, QWheelEvent* event);
    friend void KFileWidget_KeyPressEvent(KFileWidget* self, QKeyEvent* event);
    friend void KFileWidget_QBaseKeyPressEvent(KFileWidget* self, QKeyEvent* event);
    friend void KFileWidget_KeyReleaseEvent(KFileWidget* self, QKeyEvent* event);
    friend void KFileWidget_QBaseKeyReleaseEvent(KFileWidget* self, QKeyEvent* event);
    friend void KFileWidget_FocusInEvent(KFileWidget* self, QFocusEvent* event);
    friend void KFileWidget_QBaseFocusInEvent(KFileWidget* self, QFocusEvent* event);
    friend void KFileWidget_FocusOutEvent(KFileWidget* self, QFocusEvent* event);
    friend void KFileWidget_QBaseFocusOutEvent(KFileWidget* self, QFocusEvent* event);
    friend void KFileWidget_EnterEvent(KFileWidget* self, QEnterEvent* event);
    friend void KFileWidget_QBaseEnterEvent(KFileWidget* self, QEnterEvent* event);
    friend void KFileWidget_LeaveEvent(KFileWidget* self, QEvent* event);
    friend void KFileWidget_QBaseLeaveEvent(KFileWidget* self, QEvent* event);
    friend void KFileWidget_PaintEvent(KFileWidget* self, QPaintEvent* event);
    friend void KFileWidget_QBasePaintEvent(KFileWidget* self, QPaintEvent* event);
    friend void KFileWidget_MoveEvent(KFileWidget* self, QMoveEvent* event);
    friend void KFileWidget_QBaseMoveEvent(KFileWidget* self, QMoveEvent* event);
    friend void KFileWidget_CloseEvent(KFileWidget* self, QCloseEvent* event);
    friend void KFileWidget_QBaseCloseEvent(KFileWidget* self, QCloseEvent* event);
    friend void KFileWidget_ContextMenuEvent(KFileWidget* self, QContextMenuEvent* event);
    friend void KFileWidget_QBaseContextMenuEvent(KFileWidget* self, QContextMenuEvent* event);
    friend void KFileWidget_TabletEvent(KFileWidget* self, QTabletEvent* event);
    friend void KFileWidget_QBaseTabletEvent(KFileWidget* self, QTabletEvent* event);
    friend void KFileWidget_ActionEvent(KFileWidget* self, QActionEvent* event);
    friend void KFileWidget_QBaseActionEvent(KFileWidget* self, QActionEvent* event);
    friend void KFileWidget_DragEnterEvent(KFileWidget* self, QDragEnterEvent* event);
    friend void KFileWidget_QBaseDragEnterEvent(KFileWidget* self, QDragEnterEvent* event);
    friend void KFileWidget_DragMoveEvent(KFileWidget* self, QDragMoveEvent* event);
    friend void KFileWidget_QBaseDragMoveEvent(KFileWidget* self, QDragMoveEvent* event);
    friend void KFileWidget_DragLeaveEvent(KFileWidget* self, QDragLeaveEvent* event);
    friend void KFileWidget_QBaseDragLeaveEvent(KFileWidget* self, QDragLeaveEvent* event);
    friend void KFileWidget_DropEvent(KFileWidget* self, QDropEvent* event);
    friend void KFileWidget_QBaseDropEvent(KFileWidget* self, QDropEvent* event);
    friend void KFileWidget_HideEvent(KFileWidget* self, QHideEvent* event);
    friend void KFileWidget_QBaseHideEvent(KFileWidget* self, QHideEvent* event);
    friend bool KFileWidget_NativeEvent(KFileWidget* self, const libqt_string eventType, void* message, intptr_t* result);
    friend bool KFileWidget_QBaseNativeEvent(KFileWidget* self, const libqt_string eventType, void* message, intptr_t* result);
    friend void KFileWidget_ChangeEvent(KFileWidget* self, QEvent* param1);
    friend void KFileWidget_QBaseChangeEvent(KFileWidget* self, QEvent* param1);
    friend int KFileWidget_Metric(const KFileWidget* self, int param1);
    friend int KFileWidget_QBaseMetric(const KFileWidget* self, int param1);
    friend void KFileWidget_InitPainter(const KFileWidget* self, QPainter* painter);
    friend void KFileWidget_QBaseInitPainter(const KFileWidget* self, QPainter* painter);
    friend QPaintDevice* KFileWidget_Redirected(const KFileWidget* self, QPoint* offset);
    friend QPaintDevice* KFileWidget_QBaseRedirected(const KFileWidget* self, QPoint* offset);
    friend QPainter* KFileWidget_SharedPainter(const KFileWidget* self);
    friend QPainter* KFileWidget_QBaseSharedPainter(const KFileWidget* self);
    friend void KFileWidget_InputMethodEvent(KFileWidget* self, QInputMethodEvent* param1);
    friend void KFileWidget_QBaseInputMethodEvent(KFileWidget* self, QInputMethodEvent* param1);
    friend bool KFileWidget_FocusNextPrevChild(KFileWidget* self, bool next);
    friend bool KFileWidget_QBaseFocusNextPrevChild(KFileWidget* self, bool next);
    friend void KFileWidget_TimerEvent(KFileWidget* self, QTimerEvent* event);
    friend void KFileWidget_QBaseTimerEvent(KFileWidget* self, QTimerEvent* event);
    friend void KFileWidget_ChildEvent(KFileWidget* self, QChildEvent* event);
    friend void KFileWidget_QBaseChildEvent(KFileWidget* self, QChildEvent* event);
    friend void KFileWidget_CustomEvent(KFileWidget* self, QEvent* event);
    friend void KFileWidget_QBaseCustomEvent(KFileWidget* self, QEvent* event);
    friend void KFileWidget_ConnectNotify(KFileWidget* self, const QMetaMethod* signal);
    friend void KFileWidget_QBaseConnectNotify(KFileWidget* self, const QMetaMethod* signal);
    friend void KFileWidget_DisconnectNotify(KFileWidget* self, const QMetaMethod* signal);
    friend void KFileWidget_QBaseDisconnectNotify(KFileWidget* self, const QMetaMethod* signal);
    friend void KFileWidget_UpdateMicroFocus(KFileWidget* self);
    friend void KFileWidget_QBaseUpdateMicroFocus(KFileWidget* self);
    friend void KFileWidget_Create(KFileWidget* self);
    friend void KFileWidget_QBaseCreate(KFileWidget* self);
    friend void KFileWidget_Destroy(KFileWidget* self);
    friend void KFileWidget_QBaseDestroy(KFileWidget* self);
    friend bool KFileWidget_FocusNextChild(KFileWidget* self);
    friend bool KFileWidget_QBaseFocusNextChild(KFileWidget* self);
    friend bool KFileWidget_FocusPreviousChild(KFileWidget* self);
    friend bool KFileWidget_QBaseFocusPreviousChild(KFileWidget* self);
    friend QObject* KFileWidget_Sender(const KFileWidget* self);
    friend QObject* KFileWidget_QBaseSender(const KFileWidget* self);
    friend int KFileWidget_SenderSignalIndex(const KFileWidget* self);
    friend int KFileWidget_QBaseSenderSignalIndex(const KFileWidget* self);
    friend int KFileWidget_Receivers(const KFileWidget* self, const char* signal);
    friend int KFileWidget_QBaseReceivers(const KFileWidget* self, const char* signal);
    friend bool KFileWidget_IsSignalConnected(const KFileWidget* self, const QMetaMethod* signal);
    friend bool KFileWidget_QBaseIsSignalConnected(const KFileWidget* self, const QMetaMethod* signal);
    friend double KFileWidget_GetDecodedMetricF(const KFileWidget* self, int metricA, int metricB);
    friend double KFileWidget_QBaseGetDecodedMetricF(const KFileWidget* self, int metricA, int metricB);
};

#endif
