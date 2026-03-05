#pragma once
#ifndef SRC_EXTRAS_KWIDGETSADDONSC_LIBVIRTUALKNEWPASSWORDWIDGET_H
#define SRC_EXTRAS_KWIDGETSADDONSC_LIBVIRTUALKNEWPASSWORDWIDGET_H

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

// This class is a subclass of KNewPasswordWidget so that we can call protected methods
class VirtualKNewPasswordWidget final : public KNewPasswordWidget {

  public:
    // Virtual class boolean flag
    bool isVirtualKNewPasswordWidget = true;

    // Virtual class public types (including callbacks)
    using KNewPasswordWidget_MetaObject_Callback = QMetaObject* (*)();
    using KNewPasswordWidget_Metacast_Callback = void* (*)(KNewPasswordWidget*, const char*);
    using KNewPasswordWidget_Metacall_Callback = int (*)(KNewPasswordWidget*, int, int, void**);
    using KNewPasswordWidget_DevType_Callback = int (*)();
    using KNewPasswordWidget_SetVisible_Callback = void (*)(KNewPasswordWidget*, bool);
    using KNewPasswordWidget_SizeHint_Callback = QSize* (*)();
    using KNewPasswordWidget_MinimumSizeHint_Callback = QSize* (*)();
    using KNewPasswordWidget_HeightForWidth_Callback = int (*)(const KNewPasswordWidget*, int);
    using KNewPasswordWidget_HasHeightForWidth_Callback = bool (*)();
    using KNewPasswordWidget_PaintEngine_Callback = QPaintEngine* (*)();
    using KNewPasswordWidget_Event_Callback = bool (*)(KNewPasswordWidget*, QEvent*);
    using KNewPasswordWidget_MousePressEvent_Callback = void (*)(KNewPasswordWidget*, QMouseEvent*);
    using KNewPasswordWidget_MouseReleaseEvent_Callback = void (*)(KNewPasswordWidget*, QMouseEvent*);
    using KNewPasswordWidget_MouseDoubleClickEvent_Callback = void (*)(KNewPasswordWidget*, QMouseEvent*);
    using KNewPasswordWidget_MouseMoveEvent_Callback = void (*)(KNewPasswordWidget*, QMouseEvent*);
    using KNewPasswordWidget_WheelEvent_Callback = void (*)(KNewPasswordWidget*, QWheelEvent*);
    using KNewPasswordWidget_KeyPressEvent_Callback = void (*)(KNewPasswordWidget*, QKeyEvent*);
    using KNewPasswordWidget_KeyReleaseEvent_Callback = void (*)(KNewPasswordWidget*, QKeyEvent*);
    using KNewPasswordWidget_FocusInEvent_Callback = void (*)(KNewPasswordWidget*, QFocusEvent*);
    using KNewPasswordWidget_FocusOutEvent_Callback = void (*)(KNewPasswordWidget*, QFocusEvent*);
    using KNewPasswordWidget_EnterEvent_Callback = void (*)(KNewPasswordWidget*, QEnterEvent*);
    using KNewPasswordWidget_LeaveEvent_Callback = void (*)(KNewPasswordWidget*, QEvent*);
    using KNewPasswordWidget_PaintEvent_Callback = void (*)(KNewPasswordWidget*, QPaintEvent*);
    using KNewPasswordWidget_MoveEvent_Callback = void (*)(KNewPasswordWidget*, QMoveEvent*);
    using KNewPasswordWidget_ResizeEvent_Callback = void (*)(KNewPasswordWidget*, QResizeEvent*);
    using KNewPasswordWidget_CloseEvent_Callback = void (*)(KNewPasswordWidget*, QCloseEvent*);
    using KNewPasswordWidget_ContextMenuEvent_Callback = void (*)(KNewPasswordWidget*, QContextMenuEvent*);
    using KNewPasswordWidget_TabletEvent_Callback = void (*)(KNewPasswordWidget*, QTabletEvent*);
    using KNewPasswordWidget_ActionEvent_Callback = void (*)(KNewPasswordWidget*, QActionEvent*);
    using KNewPasswordWidget_DragEnterEvent_Callback = void (*)(KNewPasswordWidget*, QDragEnterEvent*);
    using KNewPasswordWidget_DragMoveEvent_Callback = void (*)(KNewPasswordWidget*, QDragMoveEvent*);
    using KNewPasswordWidget_DragLeaveEvent_Callback = void (*)(KNewPasswordWidget*, QDragLeaveEvent*);
    using KNewPasswordWidget_DropEvent_Callback = void (*)(KNewPasswordWidget*, QDropEvent*);
    using KNewPasswordWidget_ShowEvent_Callback = void (*)(KNewPasswordWidget*, QShowEvent*);
    using KNewPasswordWidget_HideEvent_Callback = void (*)(KNewPasswordWidget*, QHideEvent*);
    using KNewPasswordWidget_NativeEvent_Callback = bool (*)(KNewPasswordWidget*, libqt_string, void*, intptr_t*);
    using KNewPasswordWidget_ChangeEvent_Callback = void (*)(KNewPasswordWidget*, QEvent*);
    using KNewPasswordWidget_Metric_Callback = int (*)(const KNewPasswordWidget*, int);
    using KNewPasswordWidget_InitPainter_Callback = void (*)(const KNewPasswordWidget*, QPainter*);
    using KNewPasswordWidget_Redirected_Callback = QPaintDevice* (*)(const KNewPasswordWidget*, QPoint*);
    using KNewPasswordWidget_SharedPainter_Callback = QPainter* (*)();
    using KNewPasswordWidget_InputMethodEvent_Callback = void (*)(KNewPasswordWidget*, QInputMethodEvent*);
    using KNewPasswordWidget_InputMethodQuery_Callback = QVariant* (*)(const KNewPasswordWidget*, int);
    using KNewPasswordWidget_FocusNextPrevChild_Callback = bool (*)(KNewPasswordWidget*, bool);
    using KNewPasswordWidget_EventFilter_Callback = bool (*)(KNewPasswordWidget*, QObject*, QEvent*);
    using KNewPasswordWidget_TimerEvent_Callback = void (*)(KNewPasswordWidget*, QTimerEvent*);
    using KNewPasswordWidget_ChildEvent_Callback = void (*)(KNewPasswordWidget*, QChildEvent*);
    using KNewPasswordWidget_CustomEvent_Callback = void (*)(KNewPasswordWidget*, QEvent*);
    using KNewPasswordWidget_ConnectNotify_Callback = void (*)(KNewPasswordWidget*, QMetaMethod*);
    using KNewPasswordWidget_DisconnectNotify_Callback = void (*)(KNewPasswordWidget*, QMetaMethod*);
    using KNewPasswordWidget_UpdateMicroFocus_Callback = void (*)();
    using KNewPasswordWidget_Create_Callback = void (*)();
    using KNewPasswordWidget_Destroy_Callback = void (*)();
    using KNewPasswordWidget_FocusNextChild_Callback = bool (*)();
    using KNewPasswordWidget_FocusPreviousChild_Callback = bool (*)();
    using KNewPasswordWidget_Sender_Callback = QObject* (*)();
    using KNewPasswordWidget_SenderSignalIndex_Callback = int (*)();
    using KNewPasswordWidget_Receivers_Callback = int (*)(const KNewPasswordWidget*, const char*);
    using KNewPasswordWidget_IsSignalConnected_Callback = bool (*)(const KNewPasswordWidget*, QMetaMethod*);
    using KNewPasswordWidget_GetDecodedMetricF_Callback = double (*)(const KNewPasswordWidget*, int, int);

  protected:
    // Instance callback storage
    KNewPasswordWidget_MetaObject_Callback knewpasswordwidget_metaobject_callback = nullptr;
    KNewPasswordWidget_Metacast_Callback knewpasswordwidget_metacast_callback = nullptr;
    KNewPasswordWidget_Metacall_Callback knewpasswordwidget_metacall_callback = nullptr;
    KNewPasswordWidget_DevType_Callback knewpasswordwidget_devtype_callback = nullptr;
    KNewPasswordWidget_SetVisible_Callback knewpasswordwidget_setvisible_callback = nullptr;
    KNewPasswordWidget_SizeHint_Callback knewpasswordwidget_sizehint_callback = nullptr;
    KNewPasswordWidget_MinimumSizeHint_Callback knewpasswordwidget_minimumsizehint_callback = nullptr;
    KNewPasswordWidget_HeightForWidth_Callback knewpasswordwidget_heightforwidth_callback = nullptr;
    KNewPasswordWidget_HasHeightForWidth_Callback knewpasswordwidget_hasheightforwidth_callback = nullptr;
    KNewPasswordWidget_PaintEngine_Callback knewpasswordwidget_paintengine_callback = nullptr;
    KNewPasswordWidget_Event_Callback knewpasswordwidget_event_callback = nullptr;
    KNewPasswordWidget_MousePressEvent_Callback knewpasswordwidget_mousepressevent_callback = nullptr;
    KNewPasswordWidget_MouseReleaseEvent_Callback knewpasswordwidget_mousereleaseevent_callback = nullptr;
    KNewPasswordWidget_MouseDoubleClickEvent_Callback knewpasswordwidget_mousedoubleclickevent_callback = nullptr;
    KNewPasswordWidget_MouseMoveEvent_Callback knewpasswordwidget_mousemoveevent_callback = nullptr;
    KNewPasswordWidget_WheelEvent_Callback knewpasswordwidget_wheelevent_callback = nullptr;
    KNewPasswordWidget_KeyPressEvent_Callback knewpasswordwidget_keypressevent_callback = nullptr;
    KNewPasswordWidget_KeyReleaseEvent_Callback knewpasswordwidget_keyreleaseevent_callback = nullptr;
    KNewPasswordWidget_FocusInEvent_Callback knewpasswordwidget_focusinevent_callback = nullptr;
    KNewPasswordWidget_FocusOutEvent_Callback knewpasswordwidget_focusoutevent_callback = nullptr;
    KNewPasswordWidget_EnterEvent_Callback knewpasswordwidget_enterevent_callback = nullptr;
    KNewPasswordWidget_LeaveEvent_Callback knewpasswordwidget_leaveevent_callback = nullptr;
    KNewPasswordWidget_PaintEvent_Callback knewpasswordwidget_paintevent_callback = nullptr;
    KNewPasswordWidget_MoveEvent_Callback knewpasswordwidget_moveevent_callback = nullptr;
    KNewPasswordWidget_ResizeEvent_Callback knewpasswordwidget_resizeevent_callback = nullptr;
    KNewPasswordWidget_CloseEvent_Callback knewpasswordwidget_closeevent_callback = nullptr;
    KNewPasswordWidget_ContextMenuEvent_Callback knewpasswordwidget_contextmenuevent_callback = nullptr;
    KNewPasswordWidget_TabletEvent_Callback knewpasswordwidget_tabletevent_callback = nullptr;
    KNewPasswordWidget_ActionEvent_Callback knewpasswordwidget_actionevent_callback = nullptr;
    KNewPasswordWidget_DragEnterEvent_Callback knewpasswordwidget_dragenterevent_callback = nullptr;
    KNewPasswordWidget_DragMoveEvent_Callback knewpasswordwidget_dragmoveevent_callback = nullptr;
    KNewPasswordWidget_DragLeaveEvent_Callback knewpasswordwidget_dragleaveevent_callback = nullptr;
    KNewPasswordWidget_DropEvent_Callback knewpasswordwidget_dropevent_callback = nullptr;
    KNewPasswordWidget_ShowEvent_Callback knewpasswordwidget_showevent_callback = nullptr;
    KNewPasswordWidget_HideEvent_Callback knewpasswordwidget_hideevent_callback = nullptr;
    KNewPasswordWidget_NativeEvent_Callback knewpasswordwidget_nativeevent_callback = nullptr;
    KNewPasswordWidget_ChangeEvent_Callback knewpasswordwidget_changeevent_callback = nullptr;
    KNewPasswordWidget_Metric_Callback knewpasswordwidget_metric_callback = nullptr;
    KNewPasswordWidget_InitPainter_Callback knewpasswordwidget_initpainter_callback = nullptr;
    KNewPasswordWidget_Redirected_Callback knewpasswordwidget_redirected_callback = nullptr;
    KNewPasswordWidget_SharedPainter_Callback knewpasswordwidget_sharedpainter_callback = nullptr;
    KNewPasswordWidget_InputMethodEvent_Callback knewpasswordwidget_inputmethodevent_callback = nullptr;
    KNewPasswordWidget_InputMethodQuery_Callback knewpasswordwidget_inputmethodquery_callback = nullptr;
    KNewPasswordWidget_FocusNextPrevChild_Callback knewpasswordwidget_focusnextprevchild_callback = nullptr;
    KNewPasswordWidget_EventFilter_Callback knewpasswordwidget_eventfilter_callback = nullptr;
    KNewPasswordWidget_TimerEvent_Callback knewpasswordwidget_timerevent_callback = nullptr;
    KNewPasswordWidget_ChildEvent_Callback knewpasswordwidget_childevent_callback = nullptr;
    KNewPasswordWidget_CustomEvent_Callback knewpasswordwidget_customevent_callback = nullptr;
    KNewPasswordWidget_ConnectNotify_Callback knewpasswordwidget_connectnotify_callback = nullptr;
    KNewPasswordWidget_DisconnectNotify_Callback knewpasswordwidget_disconnectnotify_callback = nullptr;
    KNewPasswordWidget_UpdateMicroFocus_Callback knewpasswordwidget_updatemicrofocus_callback = nullptr;
    KNewPasswordWidget_Create_Callback knewpasswordwidget_create_callback = nullptr;
    KNewPasswordWidget_Destroy_Callback knewpasswordwidget_destroy_callback = nullptr;
    KNewPasswordWidget_FocusNextChild_Callback knewpasswordwidget_focusnextchild_callback = nullptr;
    KNewPasswordWidget_FocusPreviousChild_Callback knewpasswordwidget_focuspreviouschild_callback = nullptr;
    KNewPasswordWidget_Sender_Callback knewpasswordwidget_sender_callback = nullptr;
    KNewPasswordWidget_SenderSignalIndex_Callback knewpasswordwidget_sendersignalindex_callback = nullptr;
    KNewPasswordWidget_Receivers_Callback knewpasswordwidget_receivers_callback = nullptr;
    KNewPasswordWidget_IsSignalConnected_Callback knewpasswordwidget_issignalconnected_callback = nullptr;
    KNewPasswordWidget_GetDecodedMetricF_Callback knewpasswordwidget_getdecodedmetricf_callback = nullptr;

    // Instance base flags
    mutable bool knewpasswordwidget_metaobject_isbase = false;
    mutable bool knewpasswordwidget_metacast_isbase = false;
    mutable bool knewpasswordwidget_metacall_isbase = false;
    mutable bool knewpasswordwidget_devtype_isbase = false;
    mutable bool knewpasswordwidget_setvisible_isbase = false;
    mutable bool knewpasswordwidget_sizehint_isbase = false;
    mutable bool knewpasswordwidget_minimumsizehint_isbase = false;
    mutable bool knewpasswordwidget_heightforwidth_isbase = false;
    mutable bool knewpasswordwidget_hasheightforwidth_isbase = false;
    mutable bool knewpasswordwidget_paintengine_isbase = false;
    mutable bool knewpasswordwidget_event_isbase = false;
    mutable bool knewpasswordwidget_mousepressevent_isbase = false;
    mutable bool knewpasswordwidget_mousereleaseevent_isbase = false;
    mutable bool knewpasswordwidget_mousedoubleclickevent_isbase = false;
    mutable bool knewpasswordwidget_mousemoveevent_isbase = false;
    mutable bool knewpasswordwidget_wheelevent_isbase = false;
    mutable bool knewpasswordwidget_keypressevent_isbase = false;
    mutable bool knewpasswordwidget_keyreleaseevent_isbase = false;
    mutable bool knewpasswordwidget_focusinevent_isbase = false;
    mutable bool knewpasswordwidget_focusoutevent_isbase = false;
    mutable bool knewpasswordwidget_enterevent_isbase = false;
    mutable bool knewpasswordwidget_leaveevent_isbase = false;
    mutable bool knewpasswordwidget_paintevent_isbase = false;
    mutable bool knewpasswordwidget_moveevent_isbase = false;
    mutable bool knewpasswordwidget_resizeevent_isbase = false;
    mutable bool knewpasswordwidget_closeevent_isbase = false;
    mutable bool knewpasswordwidget_contextmenuevent_isbase = false;
    mutable bool knewpasswordwidget_tabletevent_isbase = false;
    mutable bool knewpasswordwidget_actionevent_isbase = false;
    mutable bool knewpasswordwidget_dragenterevent_isbase = false;
    mutable bool knewpasswordwidget_dragmoveevent_isbase = false;
    mutable bool knewpasswordwidget_dragleaveevent_isbase = false;
    mutable bool knewpasswordwidget_dropevent_isbase = false;
    mutable bool knewpasswordwidget_showevent_isbase = false;
    mutable bool knewpasswordwidget_hideevent_isbase = false;
    mutable bool knewpasswordwidget_nativeevent_isbase = false;
    mutable bool knewpasswordwidget_changeevent_isbase = false;
    mutable bool knewpasswordwidget_metric_isbase = false;
    mutable bool knewpasswordwidget_initpainter_isbase = false;
    mutable bool knewpasswordwidget_redirected_isbase = false;
    mutable bool knewpasswordwidget_sharedpainter_isbase = false;
    mutable bool knewpasswordwidget_inputmethodevent_isbase = false;
    mutable bool knewpasswordwidget_inputmethodquery_isbase = false;
    mutable bool knewpasswordwidget_focusnextprevchild_isbase = false;
    mutable bool knewpasswordwidget_eventfilter_isbase = false;
    mutable bool knewpasswordwidget_timerevent_isbase = false;
    mutable bool knewpasswordwidget_childevent_isbase = false;
    mutable bool knewpasswordwidget_customevent_isbase = false;
    mutable bool knewpasswordwidget_connectnotify_isbase = false;
    mutable bool knewpasswordwidget_disconnectnotify_isbase = false;
    mutable bool knewpasswordwidget_updatemicrofocus_isbase = false;
    mutable bool knewpasswordwidget_create_isbase = false;
    mutable bool knewpasswordwidget_destroy_isbase = false;
    mutable bool knewpasswordwidget_focusnextchild_isbase = false;
    mutable bool knewpasswordwidget_focuspreviouschild_isbase = false;
    mutable bool knewpasswordwidget_sender_isbase = false;
    mutable bool knewpasswordwidget_sendersignalindex_isbase = false;
    mutable bool knewpasswordwidget_receivers_isbase = false;
    mutable bool knewpasswordwidget_issignalconnected_isbase = false;
    mutable bool knewpasswordwidget_getdecodedmetricf_isbase = false;

  public:
    VirtualKNewPasswordWidget(QWidget* parent) : KNewPasswordWidget(parent) {};
    VirtualKNewPasswordWidget() : KNewPasswordWidget() {};

    // Callback setters
    inline void setKNewPasswordWidget_MetaObject_Callback(KNewPasswordWidget_MetaObject_Callback cb) { knewpasswordwidget_metaobject_callback = cb; }
    inline void setKNewPasswordWidget_Metacast_Callback(KNewPasswordWidget_Metacast_Callback cb) { knewpasswordwidget_metacast_callback = cb; }
    inline void setKNewPasswordWidget_Metacall_Callback(KNewPasswordWidget_Metacall_Callback cb) { knewpasswordwidget_metacall_callback = cb; }
    inline void setKNewPasswordWidget_DevType_Callback(KNewPasswordWidget_DevType_Callback cb) { knewpasswordwidget_devtype_callback = cb; }
    inline void setKNewPasswordWidget_SetVisible_Callback(KNewPasswordWidget_SetVisible_Callback cb) { knewpasswordwidget_setvisible_callback = cb; }
    inline void setKNewPasswordWidget_SizeHint_Callback(KNewPasswordWidget_SizeHint_Callback cb) { knewpasswordwidget_sizehint_callback = cb; }
    inline void setKNewPasswordWidget_MinimumSizeHint_Callback(KNewPasswordWidget_MinimumSizeHint_Callback cb) { knewpasswordwidget_minimumsizehint_callback = cb; }
    inline void setKNewPasswordWidget_HeightForWidth_Callback(KNewPasswordWidget_HeightForWidth_Callback cb) { knewpasswordwidget_heightforwidth_callback = cb; }
    inline void setKNewPasswordWidget_HasHeightForWidth_Callback(KNewPasswordWidget_HasHeightForWidth_Callback cb) { knewpasswordwidget_hasheightforwidth_callback = cb; }
    inline void setKNewPasswordWidget_PaintEngine_Callback(KNewPasswordWidget_PaintEngine_Callback cb) { knewpasswordwidget_paintengine_callback = cb; }
    inline void setKNewPasswordWidget_Event_Callback(KNewPasswordWidget_Event_Callback cb) { knewpasswordwidget_event_callback = cb; }
    inline void setKNewPasswordWidget_MousePressEvent_Callback(KNewPasswordWidget_MousePressEvent_Callback cb) { knewpasswordwidget_mousepressevent_callback = cb; }
    inline void setKNewPasswordWidget_MouseReleaseEvent_Callback(KNewPasswordWidget_MouseReleaseEvent_Callback cb) { knewpasswordwidget_mousereleaseevent_callback = cb; }
    inline void setKNewPasswordWidget_MouseDoubleClickEvent_Callback(KNewPasswordWidget_MouseDoubleClickEvent_Callback cb) { knewpasswordwidget_mousedoubleclickevent_callback = cb; }
    inline void setKNewPasswordWidget_MouseMoveEvent_Callback(KNewPasswordWidget_MouseMoveEvent_Callback cb) { knewpasswordwidget_mousemoveevent_callback = cb; }
    inline void setKNewPasswordWidget_WheelEvent_Callback(KNewPasswordWidget_WheelEvent_Callback cb) { knewpasswordwidget_wheelevent_callback = cb; }
    inline void setKNewPasswordWidget_KeyPressEvent_Callback(KNewPasswordWidget_KeyPressEvent_Callback cb) { knewpasswordwidget_keypressevent_callback = cb; }
    inline void setKNewPasswordWidget_KeyReleaseEvent_Callback(KNewPasswordWidget_KeyReleaseEvent_Callback cb) { knewpasswordwidget_keyreleaseevent_callback = cb; }
    inline void setKNewPasswordWidget_FocusInEvent_Callback(KNewPasswordWidget_FocusInEvent_Callback cb) { knewpasswordwidget_focusinevent_callback = cb; }
    inline void setKNewPasswordWidget_FocusOutEvent_Callback(KNewPasswordWidget_FocusOutEvent_Callback cb) { knewpasswordwidget_focusoutevent_callback = cb; }
    inline void setKNewPasswordWidget_EnterEvent_Callback(KNewPasswordWidget_EnterEvent_Callback cb) { knewpasswordwidget_enterevent_callback = cb; }
    inline void setKNewPasswordWidget_LeaveEvent_Callback(KNewPasswordWidget_LeaveEvent_Callback cb) { knewpasswordwidget_leaveevent_callback = cb; }
    inline void setKNewPasswordWidget_PaintEvent_Callback(KNewPasswordWidget_PaintEvent_Callback cb) { knewpasswordwidget_paintevent_callback = cb; }
    inline void setKNewPasswordWidget_MoveEvent_Callback(KNewPasswordWidget_MoveEvent_Callback cb) { knewpasswordwidget_moveevent_callback = cb; }
    inline void setKNewPasswordWidget_ResizeEvent_Callback(KNewPasswordWidget_ResizeEvent_Callback cb) { knewpasswordwidget_resizeevent_callback = cb; }
    inline void setKNewPasswordWidget_CloseEvent_Callback(KNewPasswordWidget_CloseEvent_Callback cb) { knewpasswordwidget_closeevent_callback = cb; }
    inline void setKNewPasswordWidget_ContextMenuEvent_Callback(KNewPasswordWidget_ContextMenuEvent_Callback cb) { knewpasswordwidget_contextmenuevent_callback = cb; }
    inline void setKNewPasswordWidget_TabletEvent_Callback(KNewPasswordWidget_TabletEvent_Callback cb) { knewpasswordwidget_tabletevent_callback = cb; }
    inline void setKNewPasswordWidget_ActionEvent_Callback(KNewPasswordWidget_ActionEvent_Callback cb) { knewpasswordwidget_actionevent_callback = cb; }
    inline void setKNewPasswordWidget_DragEnterEvent_Callback(KNewPasswordWidget_DragEnterEvent_Callback cb) { knewpasswordwidget_dragenterevent_callback = cb; }
    inline void setKNewPasswordWidget_DragMoveEvent_Callback(KNewPasswordWidget_DragMoveEvent_Callback cb) { knewpasswordwidget_dragmoveevent_callback = cb; }
    inline void setKNewPasswordWidget_DragLeaveEvent_Callback(KNewPasswordWidget_DragLeaveEvent_Callback cb) { knewpasswordwidget_dragleaveevent_callback = cb; }
    inline void setKNewPasswordWidget_DropEvent_Callback(KNewPasswordWidget_DropEvent_Callback cb) { knewpasswordwidget_dropevent_callback = cb; }
    inline void setKNewPasswordWidget_ShowEvent_Callback(KNewPasswordWidget_ShowEvent_Callback cb) { knewpasswordwidget_showevent_callback = cb; }
    inline void setKNewPasswordWidget_HideEvent_Callback(KNewPasswordWidget_HideEvent_Callback cb) { knewpasswordwidget_hideevent_callback = cb; }
    inline void setKNewPasswordWidget_NativeEvent_Callback(KNewPasswordWidget_NativeEvent_Callback cb) { knewpasswordwidget_nativeevent_callback = cb; }
    inline void setKNewPasswordWidget_ChangeEvent_Callback(KNewPasswordWidget_ChangeEvent_Callback cb) { knewpasswordwidget_changeevent_callback = cb; }
    inline void setKNewPasswordWidget_Metric_Callback(KNewPasswordWidget_Metric_Callback cb) { knewpasswordwidget_metric_callback = cb; }
    inline void setKNewPasswordWidget_InitPainter_Callback(KNewPasswordWidget_InitPainter_Callback cb) { knewpasswordwidget_initpainter_callback = cb; }
    inline void setKNewPasswordWidget_Redirected_Callback(KNewPasswordWidget_Redirected_Callback cb) { knewpasswordwidget_redirected_callback = cb; }
    inline void setKNewPasswordWidget_SharedPainter_Callback(KNewPasswordWidget_SharedPainter_Callback cb) { knewpasswordwidget_sharedpainter_callback = cb; }
    inline void setKNewPasswordWidget_InputMethodEvent_Callback(KNewPasswordWidget_InputMethodEvent_Callback cb) { knewpasswordwidget_inputmethodevent_callback = cb; }
    inline void setKNewPasswordWidget_InputMethodQuery_Callback(KNewPasswordWidget_InputMethodQuery_Callback cb) { knewpasswordwidget_inputmethodquery_callback = cb; }
    inline void setKNewPasswordWidget_FocusNextPrevChild_Callback(KNewPasswordWidget_FocusNextPrevChild_Callback cb) { knewpasswordwidget_focusnextprevchild_callback = cb; }
    inline void setKNewPasswordWidget_EventFilter_Callback(KNewPasswordWidget_EventFilter_Callback cb) { knewpasswordwidget_eventfilter_callback = cb; }
    inline void setKNewPasswordWidget_TimerEvent_Callback(KNewPasswordWidget_TimerEvent_Callback cb) { knewpasswordwidget_timerevent_callback = cb; }
    inline void setKNewPasswordWidget_ChildEvent_Callback(KNewPasswordWidget_ChildEvent_Callback cb) { knewpasswordwidget_childevent_callback = cb; }
    inline void setKNewPasswordWidget_CustomEvent_Callback(KNewPasswordWidget_CustomEvent_Callback cb) { knewpasswordwidget_customevent_callback = cb; }
    inline void setKNewPasswordWidget_ConnectNotify_Callback(KNewPasswordWidget_ConnectNotify_Callback cb) { knewpasswordwidget_connectnotify_callback = cb; }
    inline void setKNewPasswordWidget_DisconnectNotify_Callback(KNewPasswordWidget_DisconnectNotify_Callback cb) { knewpasswordwidget_disconnectnotify_callback = cb; }
    inline void setKNewPasswordWidget_UpdateMicroFocus_Callback(KNewPasswordWidget_UpdateMicroFocus_Callback cb) { knewpasswordwidget_updatemicrofocus_callback = cb; }
    inline void setKNewPasswordWidget_Create_Callback(KNewPasswordWidget_Create_Callback cb) { knewpasswordwidget_create_callback = cb; }
    inline void setKNewPasswordWidget_Destroy_Callback(KNewPasswordWidget_Destroy_Callback cb) { knewpasswordwidget_destroy_callback = cb; }
    inline void setKNewPasswordWidget_FocusNextChild_Callback(KNewPasswordWidget_FocusNextChild_Callback cb) { knewpasswordwidget_focusnextchild_callback = cb; }
    inline void setKNewPasswordWidget_FocusPreviousChild_Callback(KNewPasswordWidget_FocusPreviousChild_Callback cb) { knewpasswordwidget_focuspreviouschild_callback = cb; }
    inline void setKNewPasswordWidget_Sender_Callback(KNewPasswordWidget_Sender_Callback cb) { knewpasswordwidget_sender_callback = cb; }
    inline void setKNewPasswordWidget_SenderSignalIndex_Callback(KNewPasswordWidget_SenderSignalIndex_Callback cb) { knewpasswordwidget_sendersignalindex_callback = cb; }
    inline void setKNewPasswordWidget_Receivers_Callback(KNewPasswordWidget_Receivers_Callback cb) { knewpasswordwidget_receivers_callback = cb; }
    inline void setKNewPasswordWidget_IsSignalConnected_Callback(KNewPasswordWidget_IsSignalConnected_Callback cb) { knewpasswordwidget_issignalconnected_callback = cb; }
    inline void setKNewPasswordWidget_GetDecodedMetricF_Callback(KNewPasswordWidget_GetDecodedMetricF_Callback cb) { knewpasswordwidget_getdecodedmetricf_callback = cb; }

    // Base flag setters
    inline void setKNewPasswordWidget_MetaObject_IsBase(bool value) const { knewpasswordwidget_metaobject_isbase = value; }
    inline void setKNewPasswordWidget_Metacast_IsBase(bool value) const { knewpasswordwidget_metacast_isbase = value; }
    inline void setKNewPasswordWidget_Metacall_IsBase(bool value) const { knewpasswordwidget_metacall_isbase = value; }
    inline void setKNewPasswordWidget_DevType_IsBase(bool value) const { knewpasswordwidget_devtype_isbase = value; }
    inline void setKNewPasswordWidget_SetVisible_IsBase(bool value) const { knewpasswordwidget_setvisible_isbase = value; }
    inline void setKNewPasswordWidget_SizeHint_IsBase(bool value) const { knewpasswordwidget_sizehint_isbase = value; }
    inline void setKNewPasswordWidget_MinimumSizeHint_IsBase(bool value) const { knewpasswordwidget_minimumsizehint_isbase = value; }
    inline void setKNewPasswordWidget_HeightForWidth_IsBase(bool value) const { knewpasswordwidget_heightforwidth_isbase = value; }
    inline void setKNewPasswordWidget_HasHeightForWidth_IsBase(bool value) const { knewpasswordwidget_hasheightforwidth_isbase = value; }
    inline void setKNewPasswordWidget_PaintEngine_IsBase(bool value) const { knewpasswordwidget_paintengine_isbase = value; }
    inline void setKNewPasswordWidget_Event_IsBase(bool value) const { knewpasswordwidget_event_isbase = value; }
    inline void setKNewPasswordWidget_MousePressEvent_IsBase(bool value) const { knewpasswordwidget_mousepressevent_isbase = value; }
    inline void setKNewPasswordWidget_MouseReleaseEvent_IsBase(bool value) const { knewpasswordwidget_mousereleaseevent_isbase = value; }
    inline void setKNewPasswordWidget_MouseDoubleClickEvent_IsBase(bool value) const { knewpasswordwidget_mousedoubleclickevent_isbase = value; }
    inline void setKNewPasswordWidget_MouseMoveEvent_IsBase(bool value) const { knewpasswordwidget_mousemoveevent_isbase = value; }
    inline void setKNewPasswordWidget_WheelEvent_IsBase(bool value) const { knewpasswordwidget_wheelevent_isbase = value; }
    inline void setKNewPasswordWidget_KeyPressEvent_IsBase(bool value) const { knewpasswordwidget_keypressevent_isbase = value; }
    inline void setKNewPasswordWidget_KeyReleaseEvent_IsBase(bool value) const { knewpasswordwidget_keyreleaseevent_isbase = value; }
    inline void setKNewPasswordWidget_FocusInEvent_IsBase(bool value) const { knewpasswordwidget_focusinevent_isbase = value; }
    inline void setKNewPasswordWidget_FocusOutEvent_IsBase(bool value) const { knewpasswordwidget_focusoutevent_isbase = value; }
    inline void setKNewPasswordWidget_EnterEvent_IsBase(bool value) const { knewpasswordwidget_enterevent_isbase = value; }
    inline void setKNewPasswordWidget_LeaveEvent_IsBase(bool value) const { knewpasswordwidget_leaveevent_isbase = value; }
    inline void setKNewPasswordWidget_PaintEvent_IsBase(bool value) const { knewpasswordwidget_paintevent_isbase = value; }
    inline void setKNewPasswordWidget_MoveEvent_IsBase(bool value) const { knewpasswordwidget_moveevent_isbase = value; }
    inline void setKNewPasswordWidget_ResizeEvent_IsBase(bool value) const { knewpasswordwidget_resizeevent_isbase = value; }
    inline void setKNewPasswordWidget_CloseEvent_IsBase(bool value) const { knewpasswordwidget_closeevent_isbase = value; }
    inline void setKNewPasswordWidget_ContextMenuEvent_IsBase(bool value) const { knewpasswordwidget_contextmenuevent_isbase = value; }
    inline void setKNewPasswordWidget_TabletEvent_IsBase(bool value) const { knewpasswordwidget_tabletevent_isbase = value; }
    inline void setKNewPasswordWidget_ActionEvent_IsBase(bool value) const { knewpasswordwidget_actionevent_isbase = value; }
    inline void setKNewPasswordWidget_DragEnterEvent_IsBase(bool value) const { knewpasswordwidget_dragenterevent_isbase = value; }
    inline void setKNewPasswordWidget_DragMoveEvent_IsBase(bool value) const { knewpasswordwidget_dragmoveevent_isbase = value; }
    inline void setKNewPasswordWidget_DragLeaveEvent_IsBase(bool value) const { knewpasswordwidget_dragleaveevent_isbase = value; }
    inline void setKNewPasswordWidget_DropEvent_IsBase(bool value) const { knewpasswordwidget_dropevent_isbase = value; }
    inline void setKNewPasswordWidget_ShowEvent_IsBase(bool value) const { knewpasswordwidget_showevent_isbase = value; }
    inline void setKNewPasswordWidget_HideEvent_IsBase(bool value) const { knewpasswordwidget_hideevent_isbase = value; }
    inline void setKNewPasswordWidget_NativeEvent_IsBase(bool value) const { knewpasswordwidget_nativeevent_isbase = value; }
    inline void setKNewPasswordWidget_ChangeEvent_IsBase(bool value) const { knewpasswordwidget_changeevent_isbase = value; }
    inline void setKNewPasswordWidget_Metric_IsBase(bool value) const { knewpasswordwidget_metric_isbase = value; }
    inline void setKNewPasswordWidget_InitPainter_IsBase(bool value) const { knewpasswordwidget_initpainter_isbase = value; }
    inline void setKNewPasswordWidget_Redirected_IsBase(bool value) const { knewpasswordwidget_redirected_isbase = value; }
    inline void setKNewPasswordWidget_SharedPainter_IsBase(bool value) const { knewpasswordwidget_sharedpainter_isbase = value; }
    inline void setKNewPasswordWidget_InputMethodEvent_IsBase(bool value) const { knewpasswordwidget_inputmethodevent_isbase = value; }
    inline void setKNewPasswordWidget_InputMethodQuery_IsBase(bool value) const { knewpasswordwidget_inputmethodquery_isbase = value; }
    inline void setKNewPasswordWidget_FocusNextPrevChild_IsBase(bool value) const { knewpasswordwidget_focusnextprevchild_isbase = value; }
    inline void setKNewPasswordWidget_EventFilter_IsBase(bool value) const { knewpasswordwidget_eventfilter_isbase = value; }
    inline void setKNewPasswordWidget_TimerEvent_IsBase(bool value) const { knewpasswordwidget_timerevent_isbase = value; }
    inline void setKNewPasswordWidget_ChildEvent_IsBase(bool value) const { knewpasswordwidget_childevent_isbase = value; }
    inline void setKNewPasswordWidget_CustomEvent_IsBase(bool value) const { knewpasswordwidget_customevent_isbase = value; }
    inline void setKNewPasswordWidget_ConnectNotify_IsBase(bool value) const { knewpasswordwidget_connectnotify_isbase = value; }
    inline void setKNewPasswordWidget_DisconnectNotify_IsBase(bool value) const { knewpasswordwidget_disconnectnotify_isbase = value; }
    inline void setKNewPasswordWidget_UpdateMicroFocus_IsBase(bool value) const { knewpasswordwidget_updatemicrofocus_isbase = value; }
    inline void setKNewPasswordWidget_Create_IsBase(bool value) const { knewpasswordwidget_create_isbase = value; }
    inline void setKNewPasswordWidget_Destroy_IsBase(bool value) const { knewpasswordwidget_destroy_isbase = value; }
    inline void setKNewPasswordWidget_FocusNextChild_IsBase(bool value) const { knewpasswordwidget_focusnextchild_isbase = value; }
    inline void setKNewPasswordWidget_FocusPreviousChild_IsBase(bool value) const { knewpasswordwidget_focuspreviouschild_isbase = value; }
    inline void setKNewPasswordWidget_Sender_IsBase(bool value) const { knewpasswordwidget_sender_isbase = value; }
    inline void setKNewPasswordWidget_SenderSignalIndex_IsBase(bool value) const { knewpasswordwidget_sendersignalindex_isbase = value; }
    inline void setKNewPasswordWidget_Receivers_IsBase(bool value) const { knewpasswordwidget_receivers_isbase = value; }
    inline void setKNewPasswordWidget_IsSignalConnected_IsBase(bool value) const { knewpasswordwidget_issignalconnected_isbase = value; }
    inline void setKNewPasswordWidget_GetDecodedMetricF_IsBase(bool value) const { knewpasswordwidget_getdecodedmetricf_isbase = value; }

    // Virtual method for C ABI access and custom callback
    virtual const QMetaObject* metaObject() const override {
        if (knewpasswordwidget_metaobject_isbase) {
            knewpasswordwidget_metaobject_isbase = false;
            return KNewPasswordWidget::metaObject();
        }
        auto metaobject_cb = knewpasswordwidget_metaobject_callback;
        if (metaobject_cb) {
            QMetaObject* callback_ret = metaobject_cb();
            return callback_ret;
        }
        return KNewPasswordWidget::metaObject();
    }

    // Virtual method for C ABI access and custom callback
    virtual void* qt_metacast(const char* param1) override {
        if (knewpasswordwidget_metacast_isbase) {
            knewpasswordwidget_metacast_isbase = false;
            return KNewPasswordWidget::qt_metacast(param1);
        }
        auto metacast_cb = knewpasswordwidget_metacast_callback;
        if (metacast_cb) {
            const char* cbval1 = (const char*)param1;

            void* callback_ret = metacast_cb(this, cbval1);
            return callback_ret;
        }
        return KNewPasswordWidget::qt_metacast(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (knewpasswordwidget_metacall_isbase) {
            knewpasswordwidget_metacall_isbase = false;
            return KNewPasswordWidget::qt_metacall(param1, param2, param3);
        }
        auto metacall_cb = knewpasswordwidget_metacall_callback;
        if (metacall_cb) {
            int cbval1 = static_cast<int>(param1);
            int cbval2 = param2;
            void** cbval3 = param3;

            int callback_ret = metacall_cb(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        }
        return KNewPasswordWidget::qt_metacall(param1, param2, param3);
    }

    // Virtual method for C ABI access and custom callback
    virtual int devType() const override {
        if (knewpasswordwidget_devtype_isbase) {
            knewpasswordwidget_devtype_isbase = false;
            return KNewPasswordWidget::devType();
        }
        auto devtype_cb = knewpasswordwidget_devtype_callback;
        if (devtype_cb) {
            int callback_ret = devtype_cb();
            return static_cast<int>(callback_ret);
        }
        return KNewPasswordWidget::devType();
    }

    // Virtual method for C ABI access and custom callback
    virtual void setVisible(bool visible) override {
        if (knewpasswordwidget_setvisible_isbase) {
            knewpasswordwidget_setvisible_isbase = false;
            KNewPasswordWidget::setVisible(visible);
            return;
        }
        auto setvisible_cb = knewpasswordwidget_setvisible_callback;
        if (setvisible_cb) {
            bool cbval1 = visible;

            setvisible_cb(this, cbval1);
            return;
        }
        KNewPasswordWidget::setVisible(visible);
    }

    // Virtual method for C ABI access and custom callback
    virtual QSize sizeHint() const override {
        if (knewpasswordwidget_sizehint_isbase) {
            knewpasswordwidget_sizehint_isbase = false;
            return KNewPasswordWidget::sizeHint();
        }
        auto sizehint_cb = knewpasswordwidget_sizehint_callback;
        if (sizehint_cb) {
            QSize* callback_ret = sizehint_cb();
            return *callback_ret;
        }
        return KNewPasswordWidget::sizeHint();
    }

    // Virtual method for C ABI access and custom callback
    virtual QSize minimumSizeHint() const override {
        if (knewpasswordwidget_minimumsizehint_isbase) {
            knewpasswordwidget_minimumsizehint_isbase = false;
            return KNewPasswordWidget::minimumSizeHint();
        }
        auto minimumsizehint_cb = knewpasswordwidget_minimumsizehint_callback;
        if (minimumsizehint_cb) {
            QSize* callback_ret = minimumsizehint_cb();
            return *callback_ret;
        }
        return KNewPasswordWidget::minimumSizeHint();
    }

    // Virtual method for C ABI access and custom callback
    virtual int heightForWidth(int param1) const override {
        if (knewpasswordwidget_heightforwidth_isbase) {
            knewpasswordwidget_heightforwidth_isbase = false;
            return KNewPasswordWidget::heightForWidth(param1);
        }
        auto heightforwidth_cb = knewpasswordwidget_heightforwidth_callback;
        if (heightforwidth_cb) {
            int cbval1 = param1;

            int callback_ret = heightforwidth_cb(this, cbval1);
            return static_cast<int>(callback_ret);
        }
        return KNewPasswordWidget::heightForWidth(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool hasHeightForWidth() const override {
        if (knewpasswordwidget_hasheightforwidth_isbase) {
            knewpasswordwidget_hasheightforwidth_isbase = false;
            return KNewPasswordWidget::hasHeightForWidth();
        }
        auto hasheightforwidth_cb = knewpasswordwidget_hasheightforwidth_callback;
        if (hasheightforwidth_cb) {
            bool callback_ret = hasheightforwidth_cb();
            return callback_ret;
        }
        return KNewPasswordWidget::hasHeightForWidth();
    }

    // Virtual method for C ABI access and custom callback
    virtual QPaintEngine* paintEngine() const override {
        if (knewpasswordwidget_paintengine_isbase) {
            knewpasswordwidget_paintengine_isbase = false;
            return KNewPasswordWidget::paintEngine();
        }
        auto paintengine_cb = knewpasswordwidget_paintengine_callback;
        if (paintengine_cb) {
            QPaintEngine* callback_ret = paintengine_cb();
            return callback_ret;
        }
        return KNewPasswordWidget::paintEngine();
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* event) override {
        if (knewpasswordwidget_event_isbase) {
            knewpasswordwidget_event_isbase = false;
            return KNewPasswordWidget::event(event);
        }
        auto event_cb = knewpasswordwidget_event_callback;
        if (event_cb) {
            QEvent* cbval1 = event;

            bool callback_ret = event_cb(this, cbval1);
            return callback_ret;
        }
        return KNewPasswordWidget::event(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void mousePressEvent(QMouseEvent* event) override {
        if (knewpasswordwidget_mousepressevent_isbase) {
            knewpasswordwidget_mousepressevent_isbase = false;
            KNewPasswordWidget::mousePressEvent(event);
            return;
        }
        auto mousepressevent_cb = knewpasswordwidget_mousepressevent_callback;
        if (mousepressevent_cb) {
            QMouseEvent* cbval1 = event;

            mousepressevent_cb(this, cbval1);
            return;
        }
        KNewPasswordWidget::mousePressEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseReleaseEvent(QMouseEvent* event) override {
        if (knewpasswordwidget_mousereleaseevent_isbase) {
            knewpasswordwidget_mousereleaseevent_isbase = false;
            KNewPasswordWidget::mouseReleaseEvent(event);
            return;
        }
        auto mousereleaseevent_cb = knewpasswordwidget_mousereleaseevent_callback;
        if (mousereleaseevent_cb) {
            QMouseEvent* cbval1 = event;

            mousereleaseevent_cb(this, cbval1);
            return;
        }
        KNewPasswordWidget::mouseReleaseEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseDoubleClickEvent(QMouseEvent* event) override {
        if (knewpasswordwidget_mousedoubleclickevent_isbase) {
            knewpasswordwidget_mousedoubleclickevent_isbase = false;
            KNewPasswordWidget::mouseDoubleClickEvent(event);
            return;
        }
        auto mousedoubleclickevent_cb = knewpasswordwidget_mousedoubleclickevent_callback;
        if (mousedoubleclickevent_cb) {
            QMouseEvent* cbval1 = event;

            mousedoubleclickevent_cb(this, cbval1);
            return;
        }
        KNewPasswordWidget::mouseDoubleClickEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseMoveEvent(QMouseEvent* event) override {
        if (knewpasswordwidget_mousemoveevent_isbase) {
            knewpasswordwidget_mousemoveevent_isbase = false;
            KNewPasswordWidget::mouseMoveEvent(event);
            return;
        }
        auto mousemoveevent_cb = knewpasswordwidget_mousemoveevent_callback;
        if (mousemoveevent_cb) {
            QMouseEvent* cbval1 = event;

            mousemoveevent_cb(this, cbval1);
            return;
        }
        KNewPasswordWidget::mouseMoveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void wheelEvent(QWheelEvent* event) override {
        if (knewpasswordwidget_wheelevent_isbase) {
            knewpasswordwidget_wheelevent_isbase = false;
            KNewPasswordWidget::wheelEvent(event);
            return;
        }
        auto wheelevent_cb = knewpasswordwidget_wheelevent_callback;
        if (wheelevent_cb) {
            QWheelEvent* cbval1 = event;

            wheelevent_cb(this, cbval1);
            return;
        }
        KNewPasswordWidget::wheelEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void keyPressEvent(QKeyEvent* event) override {
        if (knewpasswordwidget_keypressevent_isbase) {
            knewpasswordwidget_keypressevent_isbase = false;
            KNewPasswordWidget::keyPressEvent(event);
            return;
        }
        auto keypressevent_cb = knewpasswordwidget_keypressevent_callback;
        if (keypressevent_cb) {
            QKeyEvent* cbval1 = event;

            keypressevent_cb(this, cbval1);
            return;
        }
        KNewPasswordWidget::keyPressEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void keyReleaseEvent(QKeyEvent* event) override {
        if (knewpasswordwidget_keyreleaseevent_isbase) {
            knewpasswordwidget_keyreleaseevent_isbase = false;
            KNewPasswordWidget::keyReleaseEvent(event);
            return;
        }
        auto keyreleaseevent_cb = knewpasswordwidget_keyreleaseevent_callback;
        if (keyreleaseevent_cb) {
            QKeyEvent* cbval1 = event;

            keyreleaseevent_cb(this, cbval1);
            return;
        }
        KNewPasswordWidget::keyReleaseEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void focusInEvent(QFocusEvent* event) override {
        if (knewpasswordwidget_focusinevent_isbase) {
            knewpasswordwidget_focusinevent_isbase = false;
            KNewPasswordWidget::focusInEvent(event);
            return;
        }
        auto focusinevent_cb = knewpasswordwidget_focusinevent_callback;
        if (focusinevent_cb) {
            QFocusEvent* cbval1 = event;

            focusinevent_cb(this, cbval1);
            return;
        }
        KNewPasswordWidget::focusInEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void focusOutEvent(QFocusEvent* event) override {
        if (knewpasswordwidget_focusoutevent_isbase) {
            knewpasswordwidget_focusoutevent_isbase = false;
            KNewPasswordWidget::focusOutEvent(event);
            return;
        }
        auto focusoutevent_cb = knewpasswordwidget_focusoutevent_callback;
        if (focusoutevent_cb) {
            QFocusEvent* cbval1 = event;

            focusoutevent_cb(this, cbval1);
            return;
        }
        KNewPasswordWidget::focusOutEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void enterEvent(QEnterEvent* event) override {
        if (knewpasswordwidget_enterevent_isbase) {
            knewpasswordwidget_enterevent_isbase = false;
            KNewPasswordWidget::enterEvent(event);
            return;
        }
        auto enterevent_cb = knewpasswordwidget_enterevent_callback;
        if (enterevent_cb) {
            QEnterEvent* cbval1 = event;

            enterevent_cb(this, cbval1);
            return;
        }
        KNewPasswordWidget::enterEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void leaveEvent(QEvent* event) override {
        if (knewpasswordwidget_leaveevent_isbase) {
            knewpasswordwidget_leaveevent_isbase = false;
            KNewPasswordWidget::leaveEvent(event);
            return;
        }
        auto leaveevent_cb = knewpasswordwidget_leaveevent_callback;
        if (leaveevent_cb) {
            QEvent* cbval1 = event;

            leaveevent_cb(this, cbval1);
            return;
        }
        KNewPasswordWidget::leaveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void paintEvent(QPaintEvent* event) override {
        if (knewpasswordwidget_paintevent_isbase) {
            knewpasswordwidget_paintevent_isbase = false;
            KNewPasswordWidget::paintEvent(event);
            return;
        }
        auto paintevent_cb = knewpasswordwidget_paintevent_callback;
        if (paintevent_cb) {
            QPaintEvent* cbval1 = event;

            paintevent_cb(this, cbval1);
            return;
        }
        KNewPasswordWidget::paintEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void moveEvent(QMoveEvent* event) override {
        if (knewpasswordwidget_moveevent_isbase) {
            knewpasswordwidget_moveevent_isbase = false;
            KNewPasswordWidget::moveEvent(event);
            return;
        }
        auto moveevent_cb = knewpasswordwidget_moveevent_callback;
        if (moveevent_cb) {
            QMoveEvent* cbval1 = event;

            moveevent_cb(this, cbval1);
            return;
        }
        KNewPasswordWidget::moveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void resizeEvent(QResizeEvent* event) override {
        if (knewpasswordwidget_resizeevent_isbase) {
            knewpasswordwidget_resizeevent_isbase = false;
            KNewPasswordWidget::resizeEvent(event);
            return;
        }
        auto resizeevent_cb = knewpasswordwidget_resizeevent_callback;
        if (resizeevent_cb) {
            QResizeEvent* cbval1 = event;

            resizeevent_cb(this, cbval1);
            return;
        }
        KNewPasswordWidget::resizeEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void closeEvent(QCloseEvent* event) override {
        if (knewpasswordwidget_closeevent_isbase) {
            knewpasswordwidget_closeevent_isbase = false;
            KNewPasswordWidget::closeEvent(event);
            return;
        }
        auto closeevent_cb = knewpasswordwidget_closeevent_callback;
        if (closeevent_cb) {
            QCloseEvent* cbval1 = event;

            closeevent_cb(this, cbval1);
            return;
        }
        KNewPasswordWidget::closeEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void contextMenuEvent(QContextMenuEvent* event) override {
        if (knewpasswordwidget_contextmenuevent_isbase) {
            knewpasswordwidget_contextmenuevent_isbase = false;
            KNewPasswordWidget::contextMenuEvent(event);
            return;
        }
        auto contextmenuevent_cb = knewpasswordwidget_contextmenuevent_callback;
        if (contextmenuevent_cb) {
            QContextMenuEvent* cbval1 = event;

            contextmenuevent_cb(this, cbval1);
            return;
        }
        KNewPasswordWidget::contextMenuEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void tabletEvent(QTabletEvent* event) override {
        if (knewpasswordwidget_tabletevent_isbase) {
            knewpasswordwidget_tabletevent_isbase = false;
            KNewPasswordWidget::tabletEvent(event);
            return;
        }
        auto tabletevent_cb = knewpasswordwidget_tabletevent_callback;
        if (tabletevent_cb) {
            QTabletEvent* cbval1 = event;

            tabletevent_cb(this, cbval1);
            return;
        }
        KNewPasswordWidget::tabletEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void actionEvent(QActionEvent* event) override {
        if (knewpasswordwidget_actionevent_isbase) {
            knewpasswordwidget_actionevent_isbase = false;
            KNewPasswordWidget::actionEvent(event);
            return;
        }
        auto actionevent_cb = knewpasswordwidget_actionevent_callback;
        if (actionevent_cb) {
            QActionEvent* cbval1 = event;

            actionevent_cb(this, cbval1);
            return;
        }
        KNewPasswordWidget::actionEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragEnterEvent(QDragEnterEvent* event) override {
        if (knewpasswordwidget_dragenterevent_isbase) {
            knewpasswordwidget_dragenterevent_isbase = false;
            KNewPasswordWidget::dragEnterEvent(event);
            return;
        }
        auto dragenterevent_cb = knewpasswordwidget_dragenterevent_callback;
        if (dragenterevent_cb) {
            QDragEnterEvent* cbval1 = event;

            dragenterevent_cb(this, cbval1);
            return;
        }
        KNewPasswordWidget::dragEnterEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragMoveEvent(QDragMoveEvent* event) override {
        if (knewpasswordwidget_dragmoveevent_isbase) {
            knewpasswordwidget_dragmoveevent_isbase = false;
            KNewPasswordWidget::dragMoveEvent(event);
            return;
        }
        auto dragmoveevent_cb = knewpasswordwidget_dragmoveevent_callback;
        if (dragmoveevent_cb) {
            QDragMoveEvent* cbval1 = event;

            dragmoveevent_cb(this, cbval1);
            return;
        }
        KNewPasswordWidget::dragMoveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragLeaveEvent(QDragLeaveEvent* event) override {
        if (knewpasswordwidget_dragleaveevent_isbase) {
            knewpasswordwidget_dragleaveevent_isbase = false;
            KNewPasswordWidget::dragLeaveEvent(event);
            return;
        }
        auto dragleaveevent_cb = knewpasswordwidget_dragleaveevent_callback;
        if (dragleaveevent_cb) {
            QDragLeaveEvent* cbval1 = event;

            dragleaveevent_cb(this, cbval1);
            return;
        }
        KNewPasswordWidget::dragLeaveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void dropEvent(QDropEvent* event) override {
        if (knewpasswordwidget_dropevent_isbase) {
            knewpasswordwidget_dropevent_isbase = false;
            KNewPasswordWidget::dropEvent(event);
            return;
        }
        auto dropevent_cb = knewpasswordwidget_dropevent_callback;
        if (dropevent_cb) {
            QDropEvent* cbval1 = event;

            dropevent_cb(this, cbval1);
            return;
        }
        KNewPasswordWidget::dropEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void showEvent(QShowEvent* event) override {
        if (knewpasswordwidget_showevent_isbase) {
            knewpasswordwidget_showevent_isbase = false;
            KNewPasswordWidget::showEvent(event);
            return;
        }
        auto showevent_cb = knewpasswordwidget_showevent_callback;
        if (showevent_cb) {
            QShowEvent* cbval1 = event;

            showevent_cb(this, cbval1);
            return;
        }
        KNewPasswordWidget::showEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void hideEvent(QHideEvent* event) override {
        if (knewpasswordwidget_hideevent_isbase) {
            knewpasswordwidget_hideevent_isbase = false;
            KNewPasswordWidget::hideEvent(event);
            return;
        }
        auto hideevent_cb = knewpasswordwidget_hideevent_callback;
        if (hideevent_cb) {
            QHideEvent* cbval1 = event;

            hideevent_cb(this, cbval1);
            return;
        }
        KNewPasswordWidget::hideEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool nativeEvent(const QByteArray& eventType, void* message, qintptr* result) override {
        if (knewpasswordwidget_nativeevent_isbase) {
            knewpasswordwidget_nativeevent_isbase = false;
            return KNewPasswordWidget::nativeEvent(eventType, message, result);
        }
        auto nativeevent_cb = knewpasswordwidget_nativeevent_callback;
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
        return KNewPasswordWidget::nativeEvent(eventType, message, result);
    }

    // Virtual method for C ABI access and custom callback
    virtual void changeEvent(QEvent* param1) override {
        if (knewpasswordwidget_changeevent_isbase) {
            knewpasswordwidget_changeevent_isbase = false;
            KNewPasswordWidget::changeEvent(param1);
            return;
        }
        auto changeevent_cb = knewpasswordwidget_changeevent_callback;
        if (changeevent_cb) {
            QEvent* cbval1 = param1;

            changeevent_cb(this, cbval1);
            return;
        }
        KNewPasswordWidget::changeEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual int metric(QPaintDevice::PaintDeviceMetric param1) const override {
        if (knewpasswordwidget_metric_isbase) {
            knewpasswordwidget_metric_isbase = false;
            return KNewPasswordWidget::metric(param1);
        }
        auto metric_cb = knewpasswordwidget_metric_callback;
        if (metric_cb) {
            int cbval1 = static_cast<int>(param1);

            int callback_ret = metric_cb(this, cbval1);
            return static_cast<int>(callback_ret);
        }
        return KNewPasswordWidget::metric(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual void initPainter(QPainter* painter) const override {
        if (knewpasswordwidget_initpainter_isbase) {
            knewpasswordwidget_initpainter_isbase = false;
            KNewPasswordWidget::initPainter(painter);
            return;
        }
        auto initpainter_cb = knewpasswordwidget_initpainter_callback;
        if (initpainter_cb) {
            QPainter* cbval1 = painter;

            initpainter_cb(this, cbval1);
            return;
        }
        KNewPasswordWidget::initPainter(painter);
    }

    // Virtual method for C ABI access and custom callback
    virtual QPaintDevice* redirected(QPoint* offset) const override {
        if (knewpasswordwidget_redirected_isbase) {
            knewpasswordwidget_redirected_isbase = false;
            return KNewPasswordWidget::redirected(offset);
        }
        auto redirected_cb = knewpasswordwidget_redirected_callback;
        if (redirected_cb) {
            QPoint* cbval1 = offset;

            QPaintDevice* callback_ret = redirected_cb(this, cbval1);
            return callback_ret;
        }
        return KNewPasswordWidget::redirected(offset);
    }

    // Virtual method for C ABI access and custom callback
    virtual QPainter* sharedPainter() const override {
        if (knewpasswordwidget_sharedpainter_isbase) {
            knewpasswordwidget_sharedpainter_isbase = false;
            return KNewPasswordWidget::sharedPainter();
        }
        auto sharedpainter_cb = knewpasswordwidget_sharedpainter_callback;
        if (sharedpainter_cb) {
            QPainter* callback_ret = sharedpainter_cb();
            return callback_ret;
        }
        return KNewPasswordWidget::sharedPainter();
    }

    // Virtual method for C ABI access and custom callback
    virtual void inputMethodEvent(QInputMethodEvent* param1) override {
        if (knewpasswordwidget_inputmethodevent_isbase) {
            knewpasswordwidget_inputmethodevent_isbase = false;
            KNewPasswordWidget::inputMethodEvent(param1);
            return;
        }
        auto inputmethodevent_cb = knewpasswordwidget_inputmethodevent_callback;
        if (inputmethodevent_cb) {
            QInputMethodEvent* cbval1 = param1;

            inputmethodevent_cb(this, cbval1);
            return;
        }
        KNewPasswordWidget::inputMethodEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual QVariant inputMethodQuery(Qt::InputMethodQuery param1) const override {
        if (knewpasswordwidget_inputmethodquery_isbase) {
            knewpasswordwidget_inputmethodquery_isbase = false;
            return KNewPasswordWidget::inputMethodQuery(param1);
        }
        auto inputmethodquery_cb = knewpasswordwidget_inputmethodquery_callback;
        if (inputmethodquery_cb) {
            int cbval1 = static_cast<int>(param1);

            QVariant* callback_ret = inputmethodquery_cb(this, cbval1);
            return *callback_ret;
        }
        return KNewPasswordWidget::inputMethodQuery(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool focusNextPrevChild(bool next) override {
        if (knewpasswordwidget_focusnextprevchild_isbase) {
            knewpasswordwidget_focusnextprevchild_isbase = false;
            return KNewPasswordWidget::focusNextPrevChild(next);
        }
        auto focusnextprevchild_cb = knewpasswordwidget_focusnextprevchild_callback;
        if (focusnextprevchild_cb) {
            bool cbval1 = next;

            bool callback_ret = focusnextprevchild_cb(this, cbval1);
            return callback_ret;
        }
        return KNewPasswordWidget::focusNextPrevChild(next);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* watched, QEvent* event) override {
        if (knewpasswordwidget_eventfilter_isbase) {
            knewpasswordwidget_eventfilter_isbase = false;
            return KNewPasswordWidget::eventFilter(watched, event);
        }
        auto eventfilter_cb = knewpasswordwidget_eventfilter_callback;
        if (eventfilter_cb) {
            QObject* cbval1 = watched;
            QEvent* cbval2 = event;

            bool callback_ret = eventfilter_cb(this, cbval1, cbval2);
            return callback_ret;
        }
        return KNewPasswordWidget::eventFilter(watched, event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (knewpasswordwidget_timerevent_isbase) {
            knewpasswordwidget_timerevent_isbase = false;
            KNewPasswordWidget::timerEvent(event);
            return;
        }
        auto timerevent_cb = knewpasswordwidget_timerevent_callback;
        if (timerevent_cb) {
            QTimerEvent* cbval1 = event;

            timerevent_cb(this, cbval1);
            return;
        }
        KNewPasswordWidget::timerEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (knewpasswordwidget_childevent_isbase) {
            knewpasswordwidget_childevent_isbase = false;
            KNewPasswordWidget::childEvent(event);
            return;
        }
        auto childevent_cb = knewpasswordwidget_childevent_callback;
        if (childevent_cb) {
            QChildEvent* cbval1 = event;

            childevent_cb(this, cbval1);
            return;
        }
        KNewPasswordWidget::childEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (knewpasswordwidget_customevent_isbase) {
            knewpasswordwidget_customevent_isbase = false;
            KNewPasswordWidget::customEvent(event);
            return;
        }
        auto customevent_cb = knewpasswordwidget_customevent_callback;
        if (customevent_cb) {
            QEvent* cbval1 = event;

            customevent_cb(this, cbval1);
            return;
        }
        KNewPasswordWidget::customEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (knewpasswordwidget_connectnotify_isbase) {
            knewpasswordwidget_connectnotify_isbase = false;
            KNewPasswordWidget::connectNotify(signal);
            return;
        }
        auto connectnotify_cb = knewpasswordwidget_connectnotify_callback;
        if (connectnotify_cb) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            connectnotify_cb(this, cbval1);
            return;
        }
        KNewPasswordWidget::connectNotify(signal);
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (knewpasswordwidget_disconnectnotify_isbase) {
            knewpasswordwidget_disconnectnotify_isbase = false;
            KNewPasswordWidget::disconnectNotify(signal);
            return;
        }
        auto disconnectnotify_cb = knewpasswordwidget_disconnectnotify_callback;
        if (disconnectnotify_cb) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            disconnectnotify_cb(this, cbval1);
            return;
        }
        KNewPasswordWidget::disconnectNotify(signal);
    }

    // Virtual method for C ABI access and custom callback
    void updateMicroFocus() {
        if (knewpasswordwidget_updatemicrofocus_isbase) {
            knewpasswordwidget_updatemicrofocus_isbase = false;
            KNewPasswordWidget::updateMicroFocus();
            return;
        }
        auto updatemicrofocus_cb = knewpasswordwidget_updatemicrofocus_callback;
        if (updatemicrofocus_cb) {
            updatemicrofocus_cb();
            return;
        }
        KNewPasswordWidget::updateMicroFocus();
    }

    // Virtual method for C ABI access and custom callback
    void create() {
        if (knewpasswordwidget_create_isbase) {
            knewpasswordwidget_create_isbase = false;
            KNewPasswordWidget::create();
            return;
        }
        auto create_cb = knewpasswordwidget_create_callback;
        if (create_cb) {
            create_cb();
            return;
        }
        KNewPasswordWidget::create();
    }

    // Virtual method for C ABI access and custom callback
    void destroy() {
        if (knewpasswordwidget_destroy_isbase) {
            knewpasswordwidget_destroy_isbase = false;
            KNewPasswordWidget::destroy();
            return;
        }
        auto destroy_cb = knewpasswordwidget_destroy_callback;
        if (destroy_cb) {
            destroy_cb();
            return;
        }
        KNewPasswordWidget::destroy();
    }

    // Virtual method for C ABI access and custom callback
    bool focusNextChild() {
        if (knewpasswordwidget_focusnextchild_isbase) {
            knewpasswordwidget_focusnextchild_isbase = false;
            return KNewPasswordWidget::focusNextChild();
        }
        auto focusnextchild_cb = knewpasswordwidget_focusnextchild_callback;
        if (focusnextchild_cb) {
            bool callback_ret = focusnextchild_cb();
            return callback_ret;
        }
        return KNewPasswordWidget::focusNextChild();
    }

    // Virtual method for C ABI access and custom callback
    bool focusPreviousChild() {
        if (knewpasswordwidget_focuspreviouschild_isbase) {
            knewpasswordwidget_focuspreviouschild_isbase = false;
            return KNewPasswordWidget::focusPreviousChild();
        }
        auto focuspreviouschild_cb = knewpasswordwidget_focuspreviouschild_callback;
        if (focuspreviouschild_cb) {
            bool callback_ret = focuspreviouschild_cb();
            return callback_ret;
        }
        return KNewPasswordWidget::focusPreviousChild();
    }

    // Virtual method for C ABI access and custom callback
    QObject* sender() const {
        if (knewpasswordwidget_sender_isbase) {
            knewpasswordwidget_sender_isbase = false;
            return KNewPasswordWidget::sender();
        }
        auto sender_cb = knewpasswordwidget_sender_callback;
        if (sender_cb) {
            QObject* callback_ret = sender_cb();
            return callback_ret;
        }
        return KNewPasswordWidget::sender();
    }

    // Virtual method for C ABI access and custom callback
    int senderSignalIndex() const {
        if (knewpasswordwidget_sendersignalindex_isbase) {
            knewpasswordwidget_sendersignalindex_isbase = false;
            return KNewPasswordWidget::senderSignalIndex();
        }
        auto sendersignalindex_cb = knewpasswordwidget_sendersignalindex_callback;
        if (sendersignalindex_cb) {
            int callback_ret = sendersignalindex_cb();
            return static_cast<int>(callback_ret);
        }
        return KNewPasswordWidget::senderSignalIndex();
    }

    // Virtual method for C ABI access and custom callback
    int receivers(const char* signal) const {
        if (knewpasswordwidget_receivers_isbase) {
            knewpasswordwidget_receivers_isbase = false;
            return KNewPasswordWidget::receivers(signal);
        }
        auto receivers_cb = knewpasswordwidget_receivers_callback;
        if (receivers_cb) {
            const char* cbval1 = (const char*)signal;

            int callback_ret = receivers_cb(this, cbval1);
            return static_cast<int>(callback_ret);
        }
        return KNewPasswordWidget::receivers(signal);
    }

    // Virtual method for C ABI access and custom callback
    bool isSignalConnected(const QMetaMethod& signal) const {
        if (knewpasswordwidget_issignalconnected_isbase) {
            knewpasswordwidget_issignalconnected_isbase = false;
            return KNewPasswordWidget::isSignalConnected(signal);
        }
        auto issignalconnected_cb = knewpasswordwidget_issignalconnected_callback;
        if (issignalconnected_cb) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            bool callback_ret = issignalconnected_cb(this, cbval1);
            return callback_ret;
        }
        return KNewPasswordWidget::isSignalConnected(signal);
    }

    // Virtual method for C ABI access and custom callback
    double getDecodedMetricF(QPaintDevice::PaintDeviceMetric metricA, QPaintDevice::PaintDeviceMetric metricB) const {
        if (knewpasswordwidget_getdecodedmetricf_isbase) {
            knewpasswordwidget_getdecodedmetricf_isbase = false;
            return KNewPasswordWidget::getDecodedMetricF(metricA, metricB);
        }
        auto getdecodedmetricf_cb = knewpasswordwidget_getdecodedmetricf_callback;
        if (getdecodedmetricf_cb) {
            int cbval1 = static_cast<int>(metricA);
            int cbval2 = static_cast<int>(metricB);

            double callback_ret = getdecodedmetricf_cb(this, cbval1, cbval2);
            return static_cast<double>(callback_ret);
        }
        return KNewPasswordWidget::getDecodedMetricF(metricA, metricB);
    }

    // Friend functions
    friend bool KNewPasswordWidget_Event(KNewPasswordWidget* self, QEvent* event);
    friend bool KNewPasswordWidget_SuperEvent(KNewPasswordWidget* self, QEvent* event);
    friend void KNewPasswordWidget_MousePressEvent(KNewPasswordWidget* self, QMouseEvent* event);
    friend void KNewPasswordWidget_SuperMousePressEvent(KNewPasswordWidget* self, QMouseEvent* event);
    friend void KNewPasswordWidget_MouseReleaseEvent(KNewPasswordWidget* self, QMouseEvent* event);
    friend void KNewPasswordWidget_SuperMouseReleaseEvent(KNewPasswordWidget* self, QMouseEvent* event);
    friend void KNewPasswordWidget_MouseDoubleClickEvent(KNewPasswordWidget* self, QMouseEvent* event);
    friend void KNewPasswordWidget_SuperMouseDoubleClickEvent(KNewPasswordWidget* self, QMouseEvent* event);
    friend void KNewPasswordWidget_MouseMoveEvent(KNewPasswordWidget* self, QMouseEvent* event);
    friend void KNewPasswordWidget_SuperMouseMoveEvent(KNewPasswordWidget* self, QMouseEvent* event);
    friend void KNewPasswordWidget_WheelEvent(KNewPasswordWidget* self, QWheelEvent* event);
    friend void KNewPasswordWidget_SuperWheelEvent(KNewPasswordWidget* self, QWheelEvent* event);
    friend void KNewPasswordWidget_KeyPressEvent(KNewPasswordWidget* self, QKeyEvent* event);
    friend void KNewPasswordWidget_SuperKeyPressEvent(KNewPasswordWidget* self, QKeyEvent* event);
    friend void KNewPasswordWidget_KeyReleaseEvent(KNewPasswordWidget* self, QKeyEvent* event);
    friend void KNewPasswordWidget_SuperKeyReleaseEvent(KNewPasswordWidget* self, QKeyEvent* event);
    friend void KNewPasswordWidget_FocusInEvent(KNewPasswordWidget* self, QFocusEvent* event);
    friend void KNewPasswordWidget_SuperFocusInEvent(KNewPasswordWidget* self, QFocusEvent* event);
    friend void KNewPasswordWidget_FocusOutEvent(KNewPasswordWidget* self, QFocusEvent* event);
    friend void KNewPasswordWidget_SuperFocusOutEvent(KNewPasswordWidget* self, QFocusEvent* event);
    friend void KNewPasswordWidget_EnterEvent(KNewPasswordWidget* self, QEnterEvent* event);
    friend void KNewPasswordWidget_SuperEnterEvent(KNewPasswordWidget* self, QEnterEvent* event);
    friend void KNewPasswordWidget_LeaveEvent(KNewPasswordWidget* self, QEvent* event);
    friend void KNewPasswordWidget_SuperLeaveEvent(KNewPasswordWidget* self, QEvent* event);
    friend void KNewPasswordWidget_PaintEvent(KNewPasswordWidget* self, QPaintEvent* event);
    friend void KNewPasswordWidget_SuperPaintEvent(KNewPasswordWidget* self, QPaintEvent* event);
    friend void KNewPasswordWidget_MoveEvent(KNewPasswordWidget* self, QMoveEvent* event);
    friend void KNewPasswordWidget_SuperMoveEvent(KNewPasswordWidget* self, QMoveEvent* event);
    friend void KNewPasswordWidget_ResizeEvent(KNewPasswordWidget* self, QResizeEvent* event);
    friend void KNewPasswordWidget_SuperResizeEvent(KNewPasswordWidget* self, QResizeEvent* event);
    friend void KNewPasswordWidget_CloseEvent(KNewPasswordWidget* self, QCloseEvent* event);
    friend void KNewPasswordWidget_SuperCloseEvent(KNewPasswordWidget* self, QCloseEvent* event);
    friend void KNewPasswordWidget_ContextMenuEvent(KNewPasswordWidget* self, QContextMenuEvent* event);
    friend void KNewPasswordWidget_SuperContextMenuEvent(KNewPasswordWidget* self, QContextMenuEvent* event);
    friend void KNewPasswordWidget_TabletEvent(KNewPasswordWidget* self, QTabletEvent* event);
    friend void KNewPasswordWidget_SuperTabletEvent(KNewPasswordWidget* self, QTabletEvent* event);
    friend void KNewPasswordWidget_ActionEvent(KNewPasswordWidget* self, QActionEvent* event);
    friend void KNewPasswordWidget_SuperActionEvent(KNewPasswordWidget* self, QActionEvent* event);
    friend void KNewPasswordWidget_DragEnterEvent(KNewPasswordWidget* self, QDragEnterEvent* event);
    friend void KNewPasswordWidget_SuperDragEnterEvent(KNewPasswordWidget* self, QDragEnterEvent* event);
    friend void KNewPasswordWidget_DragMoveEvent(KNewPasswordWidget* self, QDragMoveEvent* event);
    friend void KNewPasswordWidget_SuperDragMoveEvent(KNewPasswordWidget* self, QDragMoveEvent* event);
    friend void KNewPasswordWidget_DragLeaveEvent(KNewPasswordWidget* self, QDragLeaveEvent* event);
    friend void KNewPasswordWidget_SuperDragLeaveEvent(KNewPasswordWidget* self, QDragLeaveEvent* event);
    friend void KNewPasswordWidget_DropEvent(KNewPasswordWidget* self, QDropEvent* event);
    friend void KNewPasswordWidget_SuperDropEvent(KNewPasswordWidget* self, QDropEvent* event);
    friend void KNewPasswordWidget_ShowEvent(KNewPasswordWidget* self, QShowEvent* event);
    friend void KNewPasswordWidget_SuperShowEvent(KNewPasswordWidget* self, QShowEvent* event);
    friend void KNewPasswordWidget_HideEvent(KNewPasswordWidget* self, QHideEvent* event);
    friend void KNewPasswordWidget_SuperHideEvent(KNewPasswordWidget* self, QHideEvent* event);
    friend bool KNewPasswordWidget_NativeEvent(KNewPasswordWidget* self, const libqt_string eventType, void* message, intptr_t* result);
    friend bool KNewPasswordWidget_SuperNativeEvent(KNewPasswordWidget* self, const libqt_string eventType, void* message, intptr_t* result);
    friend void KNewPasswordWidget_ChangeEvent(KNewPasswordWidget* self, QEvent* param1);
    friend void KNewPasswordWidget_SuperChangeEvent(KNewPasswordWidget* self, QEvent* param1);
    friend int KNewPasswordWidget_Metric(const KNewPasswordWidget* self, int param1);
    friend int KNewPasswordWidget_SuperMetric(const KNewPasswordWidget* self, int param1);
    friend void KNewPasswordWidget_InitPainter(const KNewPasswordWidget* self, QPainter* painter);
    friend void KNewPasswordWidget_SuperInitPainter(const KNewPasswordWidget* self, QPainter* painter);
    friend QPaintDevice* KNewPasswordWidget_Redirected(const KNewPasswordWidget* self, QPoint* offset);
    friend QPaintDevice* KNewPasswordWidget_SuperRedirected(const KNewPasswordWidget* self, QPoint* offset);
    friend QPainter* KNewPasswordWidget_SharedPainter(const KNewPasswordWidget* self);
    friend QPainter* KNewPasswordWidget_SuperSharedPainter(const KNewPasswordWidget* self);
    friend void KNewPasswordWidget_InputMethodEvent(KNewPasswordWidget* self, QInputMethodEvent* param1);
    friend void KNewPasswordWidget_SuperInputMethodEvent(KNewPasswordWidget* self, QInputMethodEvent* param1);
    friend bool KNewPasswordWidget_FocusNextPrevChild(KNewPasswordWidget* self, bool next);
    friend bool KNewPasswordWidget_SuperFocusNextPrevChild(KNewPasswordWidget* self, bool next);
    friend void KNewPasswordWidget_TimerEvent(KNewPasswordWidget* self, QTimerEvent* event);
    friend void KNewPasswordWidget_SuperTimerEvent(KNewPasswordWidget* self, QTimerEvent* event);
    friend void KNewPasswordWidget_ChildEvent(KNewPasswordWidget* self, QChildEvent* event);
    friend void KNewPasswordWidget_SuperChildEvent(KNewPasswordWidget* self, QChildEvent* event);
    friend void KNewPasswordWidget_CustomEvent(KNewPasswordWidget* self, QEvent* event);
    friend void KNewPasswordWidget_SuperCustomEvent(KNewPasswordWidget* self, QEvent* event);
    friend void KNewPasswordWidget_ConnectNotify(KNewPasswordWidget* self, const QMetaMethod* signal);
    friend void KNewPasswordWidget_SuperConnectNotify(KNewPasswordWidget* self, const QMetaMethod* signal);
    friend void KNewPasswordWidget_DisconnectNotify(KNewPasswordWidget* self, const QMetaMethod* signal);
    friend void KNewPasswordWidget_SuperDisconnectNotify(KNewPasswordWidget* self, const QMetaMethod* signal);
    friend void KNewPasswordWidget_UpdateMicroFocus(KNewPasswordWidget* self);
    friend void KNewPasswordWidget_SuperUpdateMicroFocus(KNewPasswordWidget* self);
    friend void KNewPasswordWidget_Create(KNewPasswordWidget* self);
    friend void KNewPasswordWidget_SuperCreate(KNewPasswordWidget* self);
    friend void KNewPasswordWidget_Destroy(KNewPasswordWidget* self);
    friend void KNewPasswordWidget_SuperDestroy(KNewPasswordWidget* self);
    friend bool KNewPasswordWidget_FocusNextChild(KNewPasswordWidget* self);
    friend bool KNewPasswordWidget_SuperFocusNextChild(KNewPasswordWidget* self);
    friend bool KNewPasswordWidget_FocusPreviousChild(KNewPasswordWidget* self);
    friend bool KNewPasswordWidget_SuperFocusPreviousChild(KNewPasswordWidget* self);
    friend QObject* KNewPasswordWidget_Sender(const KNewPasswordWidget* self);
    friend QObject* KNewPasswordWidget_SuperSender(const KNewPasswordWidget* self);
    friend int KNewPasswordWidget_SenderSignalIndex(const KNewPasswordWidget* self);
    friend int KNewPasswordWidget_SuperSenderSignalIndex(const KNewPasswordWidget* self);
    friend int KNewPasswordWidget_Receivers(const KNewPasswordWidget* self, const char* signal);
    friend int KNewPasswordWidget_SuperReceivers(const KNewPasswordWidget* self, const char* signal);
    friend bool KNewPasswordWidget_IsSignalConnected(const KNewPasswordWidget* self, const QMetaMethod* signal);
    friend bool KNewPasswordWidget_SuperIsSignalConnected(const KNewPasswordWidget* self, const QMetaMethod* signal);
    friend double KNewPasswordWidget_GetDecodedMetricF(const KNewPasswordWidget* self, int metricA, int metricB);
    friend double KNewPasswordWidget_SuperGetDecodedMetricF(const KNewPasswordWidget* self, int metricA, int metricB);
};

#endif
