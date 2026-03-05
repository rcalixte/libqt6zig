#pragma once
#ifndef SRC_EXTRAS_KWIDGETSADDONSC_LIBVIRTUALKACTIONSELECTOR_H
#define SRC_EXTRAS_KWIDGETSADDONSC_LIBVIRTUALKACTIONSELECTOR_H

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

// This class is a subclass of KActionSelector so that we can call protected methods
class VirtualKActionSelector final : public KActionSelector {

  public:
    // Virtual class boolean flag
    bool isVirtualKActionSelector = true;

    // Virtual class public types (including callbacks)
    using KActionSelector_MetaObject_Callback = QMetaObject* (*)();
    using KActionSelector_Metacast_Callback = void* (*)(KActionSelector*, const char*);
    using KActionSelector_Metacall_Callback = int (*)(KActionSelector*, int, int, void**);
    using KActionSelector_KeyPressEvent_Callback = void (*)(KActionSelector*, QKeyEvent*);
    using KActionSelector_EventFilter_Callback = bool (*)(KActionSelector*, QObject*, QEvent*);
    using KActionSelector_DevType_Callback = int (*)();
    using KActionSelector_SetVisible_Callback = void (*)(KActionSelector*, bool);
    using KActionSelector_SizeHint_Callback = QSize* (*)();
    using KActionSelector_MinimumSizeHint_Callback = QSize* (*)();
    using KActionSelector_HeightForWidth_Callback = int (*)(const KActionSelector*, int);
    using KActionSelector_HasHeightForWidth_Callback = bool (*)();
    using KActionSelector_PaintEngine_Callback = QPaintEngine* (*)();
    using KActionSelector_Event_Callback = bool (*)(KActionSelector*, QEvent*);
    using KActionSelector_MousePressEvent_Callback = void (*)(KActionSelector*, QMouseEvent*);
    using KActionSelector_MouseReleaseEvent_Callback = void (*)(KActionSelector*, QMouseEvent*);
    using KActionSelector_MouseDoubleClickEvent_Callback = void (*)(KActionSelector*, QMouseEvent*);
    using KActionSelector_MouseMoveEvent_Callback = void (*)(KActionSelector*, QMouseEvent*);
    using KActionSelector_WheelEvent_Callback = void (*)(KActionSelector*, QWheelEvent*);
    using KActionSelector_KeyReleaseEvent_Callback = void (*)(KActionSelector*, QKeyEvent*);
    using KActionSelector_FocusInEvent_Callback = void (*)(KActionSelector*, QFocusEvent*);
    using KActionSelector_FocusOutEvent_Callback = void (*)(KActionSelector*, QFocusEvent*);
    using KActionSelector_EnterEvent_Callback = void (*)(KActionSelector*, QEnterEvent*);
    using KActionSelector_LeaveEvent_Callback = void (*)(KActionSelector*, QEvent*);
    using KActionSelector_PaintEvent_Callback = void (*)(KActionSelector*, QPaintEvent*);
    using KActionSelector_MoveEvent_Callback = void (*)(KActionSelector*, QMoveEvent*);
    using KActionSelector_ResizeEvent_Callback = void (*)(KActionSelector*, QResizeEvent*);
    using KActionSelector_CloseEvent_Callback = void (*)(KActionSelector*, QCloseEvent*);
    using KActionSelector_ContextMenuEvent_Callback = void (*)(KActionSelector*, QContextMenuEvent*);
    using KActionSelector_TabletEvent_Callback = void (*)(KActionSelector*, QTabletEvent*);
    using KActionSelector_ActionEvent_Callback = void (*)(KActionSelector*, QActionEvent*);
    using KActionSelector_DragEnterEvent_Callback = void (*)(KActionSelector*, QDragEnterEvent*);
    using KActionSelector_DragMoveEvent_Callback = void (*)(KActionSelector*, QDragMoveEvent*);
    using KActionSelector_DragLeaveEvent_Callback = void (*)(KActionSelector*, QDragLeaveEvent*);
    using KActionSelector_DropEvent_Callback = void (*)(KActionSelector*, QDropEvent*);
    using KActionSelector_ShowEvent_Callback = void (*)(KActionSelector*, QShowEvent*);
    using KActionSelector_HideEvent_Callback = void (*)(KActionSelector*, QHideEvent*);
    using KActionSelector_NativeEvent_Callback = bool (*)(KActionSelector*, libqt_string, void*, intptr_t*);
    using KActionSelector_ChangeEvent_Callback = void (*)(KActionSelector*, QEvent*);
    using KActionSelector_Metric_Callback = int (*)(const KActionSelector*, int);
    using KActionSelector_InitPainter_Callback = void (*)(const KActionSelector*, QPainter*);
    using KActionSelector_Redirected_Callback = QPaintDevice* (*)(const KActionSelector*, QPoint*);
    using KActionSelector_SharedPainter_Callback = QPainter* (*)();
    using KActionSelector_InputMethodEvent_Callback = void (*)(KActionSelector*, QInputMethodEvent*);
    using KActionSelector_InputMethodQuery_Callback = QVariant* (*)(const KActionSelector*, int);
    using KActionSelector_FocusNextPrevChild_Callback = bool (*)(KActionSelector*, bool);
    using KActionSelector_TimerEvent_Callback = void (*)(KActionSelector*, QTimerEvent*);
    using KActionSelector_ChildEvent_Callback = void (*)(KActionSelector*, QChildEvent*);
    using KActionSelector_CustomEvent_Callback = void (*)(KActionSelector*, QEvent*);
    using KActionSelector_ConnectNotify_Callback = void (*)(KActionSelector*, QMetaMethod*);
    using KActionSelector_DisconnectNotify_Callback = void (*)(KActionSelector*, QMetaMethod*);
    using KActionSelector_UpdateMicroFocus_Callback = void (*)();
    using KActionSelector_Create_Callback = void (*)();
    using KActionSelector_Destroy_Callback = void (*)();
    using KActionSelector_FocusNextChild_Callback = bool (*)();
    using KActionSelector_FocusPreviousChild_Callback = bool (*)();
    using KActionSelector_Sender_Callback = QObject* (*)();
    using KActionSelector_SenderSignalIndex_Callback = int (*)();
    using KActionSelector_Receivers_Callback = int (*)(const KActionSelector*, const char*);
    using KActionSelector_IsSignalConnected_Callback = bool (*)(const KActionSelector*, QMetaMethod*);
    using KActionSelector_GetDecodedMetricF_Callback = double (*)(const KActionSelector*, int, int);

  protected:
    // Instance callback storage
    KActionSelector_MetaObject_Callback kactionselector_metaobject_callback = nullptr;
    KActionSelector_Metacast_Callback kactionselector_metacast_callback = nullptr;
    KActionSelector_Metacall_Callback kactionselector_metacall_callback = nullptr;
    KActionSelector_KeyPressEvent_Callback kactionselector_keypressevent_callback = nullptr;
    KActionSelector_EventFilter_Callback kactionselector_eventfilter_callback = nullptr;
    KActionSelector_DevType_Callback kactionselector_devtype_callback = nullptr;
    KActionSelector_SetVisible_Callback kactionselector_setvisible_callback = nullptr;
    KActionSelector_SizeHint_Callback kactionselector_sizehint_callback = nullptr;
    KActionSelector_MinimumSizeHint_Callback kactionselector_minimumsizehint_callback = nullptr;
    KActionSelector_HeightForWidth_Callback kactionselector_heightforwidth_callback = nullptr;
    KActionSelector_HasHeightForWidth_Callback kactionselector_hasheightforwidth_callback = nullptr;
    KActionSelector_PaintEngine_Callback kactionselector_paintengine_callback = nullptr;
    KActionSelector_Event_Callback kactionselector_event_callback = nullptr;
    KActionSelector_MousePressEvent_Callback kactionselector_mousepressevent_callback = nullptr;
    KActionSelector_MouseReleaseEvent_Callback kactionselector_mousereleaseevent_callback = nullptr;
    KActionSelector_MouseDoubleClickEvent_Callback kactionselector_mousedoubleclickevent_callback = nullptr;
    KActionSelector_MouseMoveEvent_Callback kactionselector_mousemoveevent_callback = nullptr;
    KActionSelector_WheelEvent_Callback kactionselector_wheelevent_callback = nullptr;
    KActionSelector_KeyReleaseEvent_Callback kactionselector_keyreleaseevent_callback = nullptr;
    KActionSelector_FocusInEvent_Callback kactionselector_focusinevent_callback = nullptr;
    KActionSelector_FocusOutEvent_Callback kactionselector_focusoutevent_callback = nullptr;
    KActionSelector_EnterEvent_Callback kactionselector_enterevent_callback = nullptr;
    KActionSelector_LeaveEvent_Callback kactionselector_leaveevent_callback = nullptr;
    KActionSelector_PaintEvent_Callback kactionselector_paintevent_callback = nullptr;
    KActionSelector_MoveEvent_Callback kactionselector_moveevent_callback = nullptr;
    KActionSelector_ResizeEvent_Callback kactionselector_resizeevent_callback = nullptr;
    KActionSelector_CloseEvent_Callback kactionselector_closeevent_callback = nullptr;
    KActionSelector_ContextMenuEvent_Callback kactionselector_contextmenuevent_callback = nullptr;
    KActionSelector_TabletEvent_Callback kactionselector_tabletevent_callback = nullptr;
    KActionSelector_ActionEvent_Callback kactionselector_actionevent_callback = nullptr;
    KActionSelector_DragEnterEvent_Callback kactionselector_dragenterevent_callback = nullptr;
    KActionSelector_DragMoveEvent_Callback kactionselector_dragmoveevent_callback = nullptr;
    KActionSelector_DragLeaveEvent_Callback kactionselector_dragleaveevent_callback = nullptr;
    KActionSelector_DropEvent_Callback kactionselector_dropevent_callback = nullptr;
    KActionSelector_ShowEvent_Callback kactionselector_showevent_callback = nullptr;
    KActionSelector_HideEvent_Callback kactionselector_hideevent_callback = nullptr;
    KActionSelector_NativeEvent_Callback kactionselector_nativeevent_callback = nullptr;
    KActionSelector_ChangeEvent_Callback kactionselector_changeevent_callback = nullptr;
    KActionSelector_Metric_Callback kactionselector_metric_callback = nullptr;
    KActionSelector_InitPainter_Callback kactionselector_initpainter_callback = nullptr;
    KActionSelector_Redirected_Callback kactionselector_redirected_callback = nullptr;
    KActionSelector_SharedPainter_Callback kactionselector_sharedpainter_callback = nullptr;
    KActionSelector_InputMethodEvent_Callback kactionselector_inputmethodevent_callback = nullptr;
    KActionSelector_InputMethodQuery_Callback kactionselector_inputmethodquery_callback = nullptr;
    KActionSelector_FocusNextPrevChild_Callback kactionselector_focusnextprevchild_callback = nullptr;
    KActionSelector_TimerEvent_Callback kactionselector_timerevent_callback = nullptr;
    KActionSelector_ChildEvent_Callback kactionselector_childevent_callback = nullptr;
    KActionSelector_CustomEvent_Callback kactionselector_customevent_callback = nullptr;
    KActionSelector_ConnectNotify_Callback kactionselector_connectnotify_callback = nullptr;
    KActionSelector_DisconnectNotify_Callback kactionselector_disconnectnotify_callback = nullptr;
    KActionSelector_UpdateMicroFocus_Callback kactionselector_updatemicrofocus_callback = nullptr;
    KActionSelector_Create_Callback kactionselector_create_callback = nullptr;
    KActionSelector_Destroy_Callback kactionselector_destroy_callback = nullptr;
    KActionSelector_FocusNextChild_Callback kactionselector_focusnextchild_callback = nullptr;
    KActionSelector_FocusPreviousChild_Callback kactionselector_focuspreviouschild_callback = nullptr;
    KActionSelector_Sender_Callback kactionselector_sender_callback = nullptr;
    KActionSelector_SenderSignalIndex_Callback kactionselector_sendersignalindex_callback = nullptr;
    KActionSelector_Receivers_Callback kactionselector_receivers_callback = nullptr;
    KActionSelector_IsSignalConnected_Callback kactionselector_issignalconnected_callback = nullptr;
    KActionSelector_GetDecodedMetricF_Callback kactionselector_getdecodedmetricf_callback = nullptr;

    // Instance base flags
    mutable bool kactionselector_metaobject_isbase = false;
    mutable bool kactionselector_metacast_isbase = false;
    mutable bool kactionselector_metacall_isbase = false;
    mutable bool kactionselector_keypressevent_isbase = false;
    mutable bool kactionselector_eventfilter_isbase = false;
    mutable bool kactionselector_devtype_isbase = false;
    mutable bool kactionselector_setvisible_isbase = false;
    mutable bool kactionselector_sizehint_isbase = false;
    mutable bool kactionselector_minimumsizehint_isbase = false;
    mutable bool kactionselector_heightforwidth_isbase = false;
    mutable bool kactionselector_hasheightforwidth_isbase = false;
    mutable bool kactionselector_paintengine_isbase = false;
    mutable bool kactionselector_event_isbase = false;
    mutable bool kactionselector_mousepressevent_isbase = false;
    mutable bool kactionselector_mousereleaseevent_isbase = false;
    mutable bool kactionselector_mousedoubleclickevent_isbase = false;
    mutable bool kactionselector_mousemoveevent_isbase = false;
    mutable bool kactionselector_wheelevent_isbase = false;
    mutable bool kactionselector_keyreleaseevent_isbase = false;
    mutable bool kactionselector_focusinevent_isbase = false;
    mutable bool kactionselector_focusoutevent_isbase = false;
    mutable bool kactionselector_enterevent_isbase = false;
    mutable bool kactionselector_leaveevent_isbase = false;
    mutable bool kactionselector_paintevent_isbase = false;
    mutable bool kactionselector_moveevent_isbase = false;
    mutable bool kactionselector_resizeevent_isbase = false;
    mutable bool kactionselector_closeevent_isbase = false;
    mutable bool kactionselector_contextmenuevent_isbase = false;
    mutable bool kactionselector_tabletevent_isbase = false;
    mutable bool kactionselector_actionevent_isbase = false;
    mutable bool kactionselector_dragenterevent_isbase = false;
    mutable bool kactionselector_dragmoveevent_isbase = false;
    mutable bool kactionselector_dragleaveevent_isbase = false;
    mutable bool kactionselector_dropevent_isbase = false;
    mutable bool kactionselector_showevent_isbase = false;
    mutable bool kactionselector_hideevent_isbase = false;
    mutable bool kactionselector_nativeevent_isbase = false;
    mutable bool kactionselector_changeevent_isbase = false;
    mutable bool kactionselector_metric_isbase = false;
    mutable bool kactionselector_initpainter_isbase = false;
    mutable bool kactionselector_redirected_isbase = false;
    mutable bool kactionselector_sharedpainter_isbase = false;
    mutable bool kactionselector_inputmethodevent_isbase = false;
    mutable bool kactionselector_inputmethodquery_isbase = false;
    mutable bool kactionselector_focusnextprevchild_isbase = false;
    mutable bool kactionselector_timerevent_isbase = false;
    mutable bool kactionselector_childevent_isbase = false;
    mutable bool kactionselector_customevent_isbase = false;
    mutable bool kactionselector_connectnotify_isbase = false;
    mutable bool kactionselector_disconnectnotify_isbase = false;
    mutable bool kactionselector_updatemicrofocus_isbase = false;
    mutable bool kactionselector_create_isbase = false;
    mutable bool kactionselector_destroy_isbase = false;
    mutable bool kactionselector_focusnextchild_isbase = false;
    mutable bool kactionselector_focuspreviouschild_isbase = false;
    mutable bool kactionselector_sender_isbase = false;
    mutable bool kactionselector_sendersignalindex_isbase = false;
    mutable bool kactionselector_receivers_isbase = false;
    mutable bool kactionselector_issignalconnected_isbase = false;
    mutable bool kactionselector_getdecodedmetricf_isbase = false;

  public:
    VirtualKActionSelector(QWidget* parent) : KActionSelector(parent) {};
    VirtualKActionSelector() : KActionSelector() {};

    // Callback setters
    inline void setKActionSelector_MetaObject_Callback(KActionSelector_MetaObject_Callback cb) { kactionselector_metaobject_callback = cb; }
    inline void setKActionSelector_Metacast_Callback(KActionSelector_Metacast_Callback cb) { kactionselector_metacast_callback = cb; }
    inline void setKActionSelector_Metacall_Callback(KActionSelector_Metacall_Callback cb) { kactionselector_metacall_callback = cb; }
    inline void setKActionSelector_KeyPressEvent_Callback(KActionSelector_KeyPressEvent_Callback cb) { kactionselector_keypressevent_callback = cb; }
    inline void setKActionSelector_EventFilter_Callback(KActionSelector_EventFilter_Callback cb) { kactionselector_eventfilter_callback = cb; }
    inline void setKActionSelector_DevType_Callback(KActionSelector_DevType_Callback cb) { kactionselector_devtype_callback = cb; }
    inline void setKActionSelector_SetVisible_Callback(KActionSelector_SetVisible_Callback cb) { kactionselector_setvisible_callback = cb; }
    inline void setKActionSelector_SizeHint_Callback(KActionSelector_SizeHint_Callback cb) { kactionselector_sizehint_callback = cb; }
    inline void setKActionSelector_MinimumSizeHint_Callback(KActionSelector_MinimumSizeHint_Callback cb) { kactionselector_minimumsizehint_callback = cb; }
    inline void setKActionSelector_HeightForWidth_Callback(KActionSelector_HeightForWidth_Callback cb) { kactionselector_heightforwidth_callback = cb; }
    inline void setKActionSelector_HasHeightForWidth_Callback(KActionSelector_HasHeightForWidth_Callback cb) { kactionselector_hasheightforwidth_callback = cb; }
    inline void setKActionSelector_PaintEngine_Callback(KActionSelector_PaintEngine_Callback cb) { kactionselector_paintengine_callback = cb; }
    inline void setKActionSelector_Event_Callback(KActionSelector_Event_Callback cb) { kactionselector_event_callback = cb; }
    inline void setKActionSelector_MousePressEvent_Callback(KActionSelector_MousePressEvent_Callback cb) { kactionselector_mousepressevent_callback = cb; }
    inline void setKActionSelector_MouseReleaseEvent_Callback(KActionSelector_MouseReleaseEvent_Callback cb) { kactionselector_mousereleaseevent_callback = cb; }
    inline void setKActionSelector_MouseDoubleClickEvent_Callback(KActionSelector_MouseDoubleClickEvent_Callback cb) { kactionselector_mousedoubleclickevent_callback = cb; }
    inline void setKActionSelector_MouseMoveEvent_Callback(KActionSelector_MouseMoveEvent_Callback cb) { kactionselector_mousemoveevent_callback = cb; }
    inline void setKActionSelector_WheelEvent_Callback(KActionSelector_WheelEvent_Callback cb) { kactionselector_wheelevent_callback = cb; }
    inline void setKActionSelector_KeyReleaseEvent_Callback(KActionSelector_KeyReleaseEvent_Callback cb) { kactionselector_keyreleaseevent_callback = cb; }
    inline void setKActionSelector_FocusInEvent_Callback(KActionSelector_FocusInEvent_Callback cb) { kactionselector_focusinevent_callback = cb; }
    inline void setKActionSelector_FocusOutEvent_Callback(KActionSelector_FocusOutEvent_Callback cb) { kactionselector_focusoutevent_callback = cb; }
    inline void setKActionSelector_EnterEvent_Callback(KActionSelector_EnterEvent_Callback cb) { kactionselector_enterevent_callback = cb; }
    inline void setKActionSelector_LeaveEvent_Callback(KActionSelector_LeaveEvent_Callback cb) { kactionselector_leaveevent_callback = cb; }
    inline void setKActionSelector_PaintEvent_Callback(KActionSelector_PaintEvent_Callback cb) { kactionselector_paintevent_callback = cb; }
    inline void setKActionSelector_MoveEvent_Callback(KActionSelector_MoveEvent_Callback cb) { kactionselector_moveevent_callback = cb; }
    inline void setKActionSelector_ResizeEvent_Callback(KActionSelector_ResizeEvent_Callback cb) { kactionselector_resizeevent_callback = cb; }
    inline void setKActionSelector_CloseEvent_Callback(KActionSelector_CloseEvent_Callback cb) { kactionselector_closeevent_callback = cb; }
    inline void setKActionSelector_ContextMenuEvent_Callback(KActionSelector_ContextMenuEvent_Callback cb) { kactionselector_contextmenuevent_callback = cb; }
    inline void setKActionSelector_TabletEvent_Callback(KActionSelector_TabletEvent_Callback cb) { kactionselector_tabletevent_callback = cb; }
    inline void setKActionSelector_ActionEvent_Callback(KActionSelector_ActionEvent_Callback cb) { kactionselector_actionevent_callback = cb; }
    inline void setKActionSelector_DragEnterEvent_Callback(KActionSelector_DragEnterEvent_Callback cb) { kactionselector_dragenterevent_callback = cb; }
    inline void setKActionSelector_DragMoveEvent_Callback(KActionSelector_DragMoveEvent_Callback cb) { kactionselector_dragmoveevent_callback = cb; }
    inline void setKActionSelector_DragLeaveEvent_Callback(KActionSelector_DragLeaveEvent_Callback cb) { kactionselector_dragleaveevent_callback = cb; }
    inline void setKActionSelector_DropEvent_Callback(KActionSelector_DropEvent_Callback cb) { kactionselector_dropevent_callback = cb; }
    inline void setKActionSelector_ShowEvent_Callback(KActionSelector_ShowEvent_Callback cb) { kactionselector_showevent_callback = cb; }
    inline void setKActionSelector_HideEvent_Callback(KActionSelector_HideEvent_Callback cb) { kactionselector_hideevent_callback = cb; }
    inline void setKActionSelector_NativeEvent_Callback(KActionSelector_NativeEvent_Callback cb) { kactionselector_nativeevent_callback = cb; }
    inline void setKActionSelector_ChangeEvent_Callback(KActionSelector_ChangeEvent_Callback cb) { kactionselector_changeevent_callback = cb; }
    inline void setKActionSelector_Metric_Callback(KActionSelector_Metric_Callback cb) { kactionselector_metric_callback = cb; }
    inline void setKActionSelector_InitPainter_Callback(KActionSelector_InitPainter_Callback cb) { kactionselector_initpainter_callback = cb; }
    inline void setKActionSelector_Redirected_Callback(KActionSelector_Redirected_Callback cb) { kactionselector_redirected_callback = cb; }
    inline void setKActionSelector_SharedPainter_Callback(KActionSelector_SharedPainter_Callback cb) { kactionselector_sharedpainter_callback = cb; }
    inline void setKActionSelector_InputMethodEvent_Callback(KActionSelector_InputMethodEvent_Callback cb) { kactionselector_inputmethodevent_callback = cb; }
    inline void setKActionSelector_InputMethodQuery_Callback(KActionSelector_InputMethodQuery_Callback cb) { kactionselector_inputmethodquery_callback = cb; }
    inline void setKActionSelector_FocusNextPrevChild_Callback(KActionSelector_FocusNextPrevChild_Callback cb) { kactionselector_focusnextprevchild_callback = cb; }
    inline void setKActionSelector_TimerEvent_Callback(KActionSelector_TimerEvent_Callback cb) { kactionselector_timerevent_callback = cb; }
    inline void setKActionSelector_ChildEvent_Callback(KActionSelector_ChildEvent_Callback cb) { kactionselector_childevent_callback = cb; }
    inline void setKActionSelector_CustomEvent_Callback(KActionSelector_CustomEvent_Callback cb) { kactionselector_customevent_callback = cb; }
    inline void setKActionSelector_ConnectNotify_Callback(KActionSelector_ConnectNotify_Callback cb) { kactionselector_connectnotify_callback = cb; }
    inline void setKActionSelector_DisconnectNotify_Callback(KActionSelector_DisconnectNotify_Callback cb) { kactionselector_disconnectnotify_callback = cb; }
    inline void setKActionSelector_UpdateMicroFocus_Callback(KActionSelector_UpdateMicroFocus_Callback cb) { kactionselector_updatemicrofocus_callback = cb; }
    inline void setKActionSelector_Create_Callback(KActionSelector_Create_Callback cb) { kactionselector_create_callback = cb; }
    inline void setKActionSelector_Destroy_Callback(KActionSelector_Destroy_Callback cb) { kactionselector_destroy_callback = cb; }
    inline void setKActionSelector_FocusNextChild_Callback(KActionSelector_FocusNextChild_Callback cb) { kactionselector_focusnextchild_callback = cb; }
    inline void setKActionSelector_FocusPreviousChild_Callback(KActionSelector_FocusPreviousChild_Callback cb) { kactionselector_focuspreviouschild_callback = cb; }
    inline void setKActionSelector_Sender_Callback(KActionSelector_Sender_Callback cb) { kactionselector_sender_callback = cb; }
    inline void setKActionSelector_SenderSignalIndex_Callback(KActionSelector_SenderSignalIndex_Callback cb) { kactionselector_sendersignalindex_callback = cb; }
    inline void setKActionSelector_Receivers_Callback(KActionSelector_Receivers_Callback cb) { kactionselector_receivers_callback = cb; }
    inline void setKActionSelector_IsSignalConnected_Callback(KActionSelector_IsSignalConnected_Callback cb) { kactionselector_issignalconnected_callback = cb; }
    inline void setKActionSelector_GetDecodedMetricF_Callback(KActionSelector_GetDecodedMetricF_Callback cb) { kactionselector_getdecodedmetricf_callback = cb; }

    // Base flag setters
    inline void setKActionSelector_MetaObject_IsBase(bool value) const { kactionselector_metaobject_isbase = value; }
    inline void setKActionSelector_Metacast_IsBase(bool value) const { kactionselector_metacast_isbase = value; }
    inline void setKActionSelector_Metacall_IsBase(bool value) const { kactionselector_metacall_isbase = value; }
    inline void setKActionSelector_KeyPressEvent_IsBase(bool value) const { kactionselector_keypressevent_isbase = value; }
    inline void setKActionSelector_EventFilter_IsBase(bool value) const { kactionselector_eventfilter_isbase = value; }
    inline void setKActionSelector_DevType_IsBase(bool value) const { kactionselector_devtype_isbase = value; }
    inline void setKActionSelector_SetVisible_IsBase(bool value) const { kactionselector_setvisible_isbase = value; }
    inline void setKActionSelector_SizeHint_IsBase(bool value) const { kactionselector_sizehint_isbase = value; }
    inline void setKActionSelector_MinimumSizeHint_IsBase(bool value) const { kactionselector_minimumsizehint_isbase = value; }
    inline void setKActionSelector_HeightForWidth_IsBase(bool value) const { kactionselector_heightforwidth_isbase = value; }
    inline void setKActionSelector_HasHeightForWidth_IsBase(bool value) const { kactionselector_hasheightforwidth_isbase = value; }
    inline void setKActionSelector_PaintEngine_IsBase(bool value) const { kactionselector_paintengine_isbase = value; }
    inline void setKActionSelector_Event_IsBase(bool value) const { kactionselector_event_isbase = value; }
    inline void setKActionSelector_MousePressEvent_IsBase(bool value) const { kactionselector_mousepressevent_isbase = value; }
    inline void setKActionSelector_MouseReleaseEvent_IsBase(bool value) const { kactionselector_mousereleaseevent_isbase = value; }
    inline void setKActionSelector_MouseDoubleClickEvent_IsBase(bool value) const { kactionselector_mousedoubleclickevent_isbase = value; }
    inline void setKActionSelector_MouseMoveEvent_IsBase(bool value) const { kactionselector_mousemoveevent_isbase = value; }
    inline void setKActionSelector_WheelEvent_IsBase(bool value) const { kactionselector_wheelevent_isbase = value; }
    inline void setKActionSelector_KeyReleaseEvent_IsBase(bool value) const { kactionselector_keyreleaseevent_isbase = value; }
    inline void setKActionSelector_FocusInEvent_IsBase(bool value) const { kactionselector_focusinevent_isbase = value; }
    inline void setKActionSelector_FocusOutEvent_IsBase(bool value) const { kactionselector_focusoutevent_isbase = value; }
    inline void setKActionSelector_EnterEvent_IsBase(bool value) const { kactionselector_enterevent_isbase = value; }
    inline void setKActionSelector_LeaveEvent_IsBase(bool value) const { kactionselector_leaveevent_isbase = value; }
    inline void setKActionSelector_PaintEvent_IsBase(bool value) const { kactionselector_paintevent_isbase = value; }
    inline void setKActionSelector_MoveEvent_IsBase(bool value) const { kactionselector_moveevent_isbase = value; }
    inline void setKActionSelector_ResizeEvent_IsBase(bool value) const { kactionselector_resizeevent_isbase = value; }
    inline void setKActionSelector_CloseEvent_IsBase(bool value) const { kactionselector_closeevent_isbase = value; }
    inline void setKActionSelector_ContextMenuEvent_IsBase(bool value) const { kactionselector_contextmenuevent_isbase = value; }
    inline void setKActionSelector_TabletEvent_IsBase(bool value) const { kactionselector_tabletevent_isbase = value; }
    inline void setKActionSelector_ActionEvent_IsBase(bool value) const { kactionselector_actionevent_isbase = value; }
    inline void setKActionSelector_DragEnterEvent_IsBase(bool value) const { kactionselector_dragenterevent_isbase = value; }
    inline void setKActionSelector_DragMoveEvent_IsBase(bool value) const { kactionselector_dragmoveevent_isbase = value; }
    inline void setKActionSelector_DragLeaveEvent_IsBase(bool value) const { kactionselector_dragleaveevent_isbase = value; }
    inline void setKActionSelector_DropEvent_IsBase(bool value) const { kactionselector_dropevent_isbase = value; }
    inline void setKActionSelector_ShowEvent_IsBase(bool value) const { kactionselector_showevent_isbase = value; }
    inline void setKActionSelector_HideEvent_IsBase(bool value) const { kactionselector_hideevent_isbase = value; }
    inline void setKActionSelector_NativeEvent_IsBase(bool value) const { kactionselector_nativeevent_isbase = value; }
    inline void setKActionSelector_ChangeEvent_IsBase(bool value) const { kactionselector_changeevent_isbase = value; }
    inline void setKActionSelector_Metric_IsBase(bool value) const { kactionselector_metric_isbase = value; }
    inline void setKActionSelector_InitPainter_IsBase(bool value) const { kactionselector_initpainter_isbase = value; }
    inline void setKActionSelector_Redirected_IsBase(bool value) const { kactionselector_redirected_isbase = value; }
    inline void setKActionSelector_SharedPainter_IsBase(bool value) const { kactionselector_sharedpainter_isbase = value; }
    inline void setKActionSelector_InputMethodEvent_IsBase(bool value) const { kactionselector_inputmethodevent_isbase = value; }
    inline void setKActionSelector_InputMethodQuery_IsBase(bool value) const { kactionselector_inputmethodquery_isbase = value; }
    inline void setKActionSelector_FocusNextPrevChild_IsBase(bool value) const { kactionselector_focusnextprevchild_isbase = value; }
    inline void setKActionSelector_TimerEvent_IsBase(bool value) const { kactionselector_timerevent_isbase = value; }
    inline void setKActionSelector_ChildEvent_IsBase(bool value) const { kactionselector_childevent_isbase = value; }
    inline void setKActionSelector_CustomEvent_IsBase(bool value) const { kactionselector_customevent_isbase = value; }
    inline void setKActionSelector_ConnectNotify_IsBase(bool value) const { kactionselector_connectnotify_isbase = value; }
    inline void setKActionSelector_DisconnectNotify_IsBase(bool value) const { kactionselector_disconnectnotify_isbase = value; }
    inline void setKActionSelector_UpdateMicroFocus_IsBase(bool value) const { kactionselector_updatemicrofocus_isbase = value; }
    inline void setKActionSelector_Create_IsBase(bool value) const { kactionselector_create_isbase = value; }
    inline void setKActionSelector_Destroy_IsBase(bool value) const { kactionselector_destroy_isbase = value; }
    inline void setKActionSelector_FocusNextChild_IsBase(bool value) const { kactionselector_focusnextchild_isbase = value; }
    inline void setKActionSelector_FocusPreviousChild_IsBase(bool value) const { kactionselector_focuspreviouschild_isbase = value; }
    inline void setKActionSelector_Sender_IsBase(bool value) const { kactionselector_sender_isbase = value; }
    inline void setKActionSelector_SenderSignalIndex_IsBase(bool value) const { kactionselector_sendersignalindex_isbase = value; }
    inline void setKActionSelector_Receivers_IsBase(bool value) const { kactionselector_receivers_isbase = value; }
    inline void setKActionSelector_IsSignalConnected_IsBase(bool value) const { kactionselector_issignalconnected_isbase = value; }
    inline void setKActionSelector_GetDecodedMetricF_IsBase(bool value) const { kactionselector_getdecodedmetricf_isbase = value; }

    // Virtual method for C ABI access and custom callback
    virtual const QMetaObject* metaObject() const override {
        if (kactionselector_metaobject_isbase) {
            kactionselector_metaobject_isbase = false;
            return KActionSelector::metaObject();
        }
        auto metaobject_cb = kactionselector_metaobject_callback;
        if (metaobject_cb) {
            QMetaObject* callback_ret = metaobject_cb();
            return callback_ret;
        }
        return KActionSelector::metaObject();
    }

    // Virtual method for C ABI access and custom callback
    virtual void* qt_metacast(const char* param1) override {
        if (kactionselector_metacast_isbase) {
            kactionselector_metacast_isbase = false;
            return KActionSelector::qt_metacast(param1);
        }
        auto metacast_cb = kactionselector_metacast_callback;
        if (metacast_cb) {
            const char* cbval1 = (const char*)param1;

            void* callback_ret = metacast_cb(this, cbval1);
            return callback_ret;
        }
        return KActionSelector::qt_metacast(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (kactionselector_metacall_isbase) {
            kactionselector_metacall_isbase = false;
            return KActionSelector::qt_metacall(param1, param2, param3);
        }
        auto metacall_cb = kactionselector_metacall_callback;
        if (metacall_cb) {
            int cbval1 = static_cast<int>(param1);
            int cbval2 = param2;
            void** cbval3 = param3;

            int callback_ret = metacall_cb(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        }
        return KActionSelector::qt_metacall(param1, param2, param3);
    }

    // Virtual method for C ABI access and custom callback
    virtual void keyPressEvent(QKeyEvent* param1) override {
        if (kactionselector_keypressevent_isbase) {
            kactionselector_keypressevent_isbase = false;
            KActionSelector::keyPressEvent(param1);
            return;
        }
        auto keypressevent_cb = kactionselector_keypressevent_callback;
        if (keypressevent_cb) {
            QKeyEvent* cbval1 = param1;

            keypressevent_cb(this, cbval1);
            return;
        }
        KActionSelector::keyPressEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* param1, QEvent* param2) override {
        if (kactionselector_eventfilter_isbase) {
            kactionselector_eventfilter_isbase = false;
            return KActionSelector::eventFilter(param1, param2);
        }
        auto eventfilter_cb = kactionselector_eventfilter_callback;
        if (eventfilter_cb) {
            QObject* cbval1 = param1;
            QEvent* cbval2 = param2;

            bool callback_ret = eventfilter_cb(this, cbval1, cbval2);
            return callback_ret;
        }
        return KActionSelector::eventFilter(param1, param2);
    }

    // Virtual method for C ABI access and custom callback
    virtual int devType() const override {
        if (kactionselector_devtype_isbase) {
            kactionselector_devtype_isbase = false;
            return KActionSelector::devType();
        }
        auto devtype_cb = kactionselector_devtype_callback;
        if (devtype_cb) {
            int callback_ret = devtype_cb();
            return static_cast<int>(callback_ret);
        }
        return KActionSelector::devType();
    }

    // Virtual method for C ABI access and custom callback
    virtual void setVisible(bool visible) override {
        if (kactionselector_setvisible_isbase) {
            kactionselector_setvisible_isbase = false;
            KActionSelector::setVisible(visible);
            return;
        }
        auto setvisible_cb = kactionselector_setvisible_callback;
        if (setvisible_cb) {
            bool cbval1 = visible;

            setvisible_cb(this, cbval1);
            return;
        }
        KActionSelector::setVisible(visible);
    }

    // Virtual method for C ABI access and custom callback
    virtual QSize sizeHint() const override {
        if (kactionselector_sizehint_isbase) {
            kactionselector_sizehint_isbase = false;
            return KActionSelector::sizeHint();
        }
        auto sizehint_cb = kactionselector_sizehint_callback;
        if (sizehint_cb) {
            QSize* callback_ret = sizehint_cb();
            return *callback_ret;
        }
        return KActionSelector::sizeHint();
    }

    // Virtual method for C ABI access and custom callback
    virtual QSize minimumSizeHint() const override {
        if (kactionselector_minimumsizehint_isbase) {
            kactionselector_minimumsizehint_isbase = false;
            return KActionSelector::minimumSizeHint();
        }
        auto minimumsizehint_cb = kactionselector_minimumsizehint_callback;
        if (minimumsizehint_cb) {
            QSize* callback_ret = minimumsizehint_cb();
            return *callback_ret;
        }
        return KActionSelector::minimumSizeHint();
    }

    // Virtual method for C ABI access and custom callback
    virtual int heightForWidth(int param1) const override {
        if (kactionselector_heightforwidth_isbase) {
            kactionselector_heightforwidth_isbase = false;
            return KActionSelector::heightForWidth(param1);
        }
        auto heightforwidth_cb = kactionselector_heightforwidth_callback;
        if (heightforwidth_cb) {
            int cbval1 = param1;

            int callback_ret = heightforwidth_cb(this, cbval1);
            return static_cast<int>(callback_ret);
        }
        return KActionSelector::heightForWidth(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool hasHeightForWidth() const override {
        if (kactionselector_hasheightforwidth_isbase) {
            kactionselector_hasheightforwidth_isbase = false;
            return KActionSelector::hasHeightForWidth();
        }
        auto hasheightforwidth_cb = kactionselector_hasheightforwidth_callback;
        if (hasheightforwidth_cb) {
            bool callback_ret = hasheightforwidth_cb();
            return callback_ret;
        }
        return KActionSelector::hasHeightForWidth();
    }

    // Virtual method for C ABI access and custom callback
    virtual QPaintEngine* paintEngine() const override {
        if (kactionselector_paintengine_isbase) {
            kactionselector_paintengine_isbase = false;
            return KActionSelector::paintEngine();
        }
        auto paintengine_cb = kactionselector_paintengine_callback;
        if (paintengine_cb) {
            QPaintEngine* callback_ret = paintengine_cb();
            return callback_ret;
        }
        return KActionSelector::paintEngine();
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* event) override {
        if (kactionselector_event_isbase) {
            kactionselector_event_isbase = false;
            return KActionSelector::event(event);
        }
        auto event_cb = kactionselector_event_callback;
        if (event_cb) {
            QEvent* cbval1 = event;

            bool callback_ret = event_cb(this, cbval1);
            return callback_ret;
        }
        return KActionSelector::event(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void mousePressEvent(QMouseEvent* event) override {
        if (kactionselector_mousepressevent_isbase) {
            kactionselector_mousepressevent_isbase = false;
            KActionSelector::mousePressEvent(event);
            return;
        }
        auto mousepressevent_cb = kactionselector_mousepressevent_callback;
        if (mousepressevent_cb) {
            QMouseEvent* cbval1 = event;

            mousepressevent_cb(this, cbval1);
            return;
        }
        KActionSelector::mousePressEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseReleaseEvent(QMouseEvent* event) override {
        if (kactionselector_mousereleaseevent_isbase) {
            kactionselector_mousereleaseevent_isbase = false;
            KActionSelector::mouseReleaseEvent(event);
            return;
        }
        auto mousereleaseevent_cb = kactionselector_mousereleaseevent_callback;
        if (mousereleaseevent_cb) {
            QMouseEvent* cbval1 = event;

            mousereleaseevent_cb(this, cbval1);
            return;
        }
        KActionSelector::mouseReleaseEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseDoubleClickEvent(QMouseEvent* event) override {
        if (kactionselector_mousedoubleclickevent_isbase) {
            kactionselector_mousedoubleclickevent_isbase = false;
            KActionSelector::mouseDoubleClickEvent(event);
            return;
        }
        auto mousedoubleclickevent_cb = kactionselector_mousedoubleclickevent_callback;
        if (mousedoubleclickevent_cb) {
            QMouseEvent* cbval1 = event;

            mousedoubleclickevent_cb(this, cbval1);
            return;
        }
        KActionSelector::mouseDoubleClickEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseMoveEvent(QMouseEvent* event) override {
        if (kactionselector_mousemoveevent_isbase) {
            kactionselector_mousemoveevent_isbase = false;
            KActionSelector::mouseMoveEvent(event);
            return;
        }
        auto mousemoveevent_cb = kactionselector_mousemoveevent_callback;
        if (mousemoveevent_cb) {
            QMouseEvent* cbval1 = event;

            mousemoveevent_cb(this, cbval1);
            return;
        }
        KActionSelector::mouseMoveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void wheelEvent(QWheelEvent* event) override {
        if (kactionselector_wheelevent_isbase) {
            kactionselector_wheelevent_isbase = false;
            KActionSelector::wheelEvent(event);
            return;
        }
        auto wheelevent_cb = kactionselector_wheelevent_callback;
        if (wheelevent_cb) {
            QWheelEvent* cbval1 = event;

            wheelevent_cb(this, cbval1);
            return;
        }
        KActionSelector::wheelEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void keyReleaseEvent(QKeyEvent* event) override {
        if (kactionselector_keyreleaseevent_isbase) {
            kactionselector_keyreleaseevent_isbase = false;
            KActionSelector::keyReleaseEvent(event);
            return;
        }
        auto keyreleaseevent_cb = kactionselector_keyreleaseevent_callback;
        if (keyreleaseevent_cb) {
            QKeyEvent* cbval1 = event;

            keyreleaseevent_cb(this, cbval1);
            return;
        }
        KActionSelector::keyReleaseEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void focusInEvent(QFocusEvent* event) override {
        if (kactionselector_focusinevent_isbase) {
            kactionselector_focusinevent_isbase = false;
            KActionSelector::focusInEvent(event);
            return;
        }
        auto focusinevent_cb = kactionselector_focusinevent_callback;
        if (focusinevent_cb) {
            QFocusEvent* cbval1 = event;

            focusinevent_cb(this, cbval1);
            return;
        }
        KActionSelector::focusInEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void focusOutEvent(QFocusEvent* event) override {
        if (kactionselector_focusoutevent_isbase) {
            kactionselector_focusoutevent_isbase = false;
            KActionSelector::focusOutEvent(event);
            return;
        }
        auto focusoutevent_cb = kactionselector_focusoutevent_callback;
        if (focusoutevent_cb) {
            QFocusEvent* cbval1 = event;

            focusoutevent_cb(this, cbval1);
            return;
        }
        KActionSelector::focusOutEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void enterEvent(QEnterEvent* event) override {
        if (kactionselector_enterevent_isbase) {
            kactionselector_enterevent_isbase = false;
            KActionSelector::enterEvent(event);
            return;
        }
        auto enterevent_cb = kactionselector_enterevent_callback;
        if (enterevent_cb) {
            QEnterEvent* cbval1 = event;

            enterevent_cb(this, cbval1);
            return;
        }
        KActionSelector::enterEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void leaveEvent(QEvent* event) override {
        if (kactionselector_leaveevent_isbase) {
            kactionselector_leaveevent_isbase = false;
            KActionSelector::leaveEvent(event);
            return;
        }
        auto leaveevent_cb = kactionselector_leaveevent_callback;
        if (leaveevent_cb) {
            QEvent* cbval1 = event;

            leaveevent_cb(this, cbval1);
            return;
        }
        KActionSelector::leaveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void paintEvent(QPaintEvent* event) override {
        if (kactionselector_paintevent_isbase) {
            kactionselector_paintevent_isbase = false;
            KActionSelector::paintEvent(event);
            return;
        }
        auto paintevent_cb = kactionselector_paintevent_callback;
        if (paintevent_cb) {
            QPaintEvent* cbval1 = event;

            paintevent_cb(this, cbval1);
            return;
        }
        KActionSelector::paintEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void moveEvent(QMoveEvent* event) override {
        if (kactionselector_moveevent_isbase) {
            kactionselector_moveevent_isbase = false;
            KActionSelector::moveEvent(event);
            return;
        }
        auto moveevent_cb = kactionselector_moveevent_callback;
        if (moveevent_cb) {
            QMoveEvent* cbval1 = event;

            moveevent_cb(this, cbval1);
            return;
        }
        KActionSelector::moveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void resizeEvent(QResizeEvent* event) override {
        if (kactionselector_resizeevent_isbase) {
            kactionselector_resizeevent_isbase = false;
            KActionSelector::resizeEvent(event);
            return;
        }
        auto resizeevent_cb = kactionselector_resizeevent_callback;
        if (resizeevent_cb) {
            QResizeEvent* cbval1 = event;

            resizeevent_cb(this, cbval1);
            return;
        }
        KActionSelector::resizeEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void closeEvent(QCloseEvent* event) override {
        if (kactionselector_closeevent_isbase) {
            kactionselector_closeevent_isbase = false;
            KActionSelector::closeEvent(event);
            return;
        }
        auto closeevent_cb = kactionselector_closeevent_callback;
        if (closeevent_cb) {
            QCloseEvent* cbval1 = event;

            closeevent_cb(this, cbval1);
            return;
        }
        KActionSelector::closeEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void contextMenuEvent(QContextMenuEvent* event) override {
        if (kactionselector_contextmenuevent_isbase) {
            kactionselector_contextmenuevent_isbase = false;
            KActionSelector::contextMenuEvent(event);
            return;
        }
        auto contextmenuevent_cb = kactionselector_contextmenuevent_callback;
        if (contextmenuevent_cb) {
            QContextMenuEvent* cbval1 = event;

            contextmenuevent_cb(this, cbval1);
            return;
        }
        KActionSelector::contextMenuEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void tabletEvent(QTabletEvent* event) override {
        if (kactionselector_tabletevent_isbase) {
            kactionselector_tabletevent_isbase = false;
            KActionSelector::tabletEvent(event);
            return;
        }
        auto tabletevent_cb = kactionselector_tabletevent_callback;
        if (tabletevent_cb) {
            QTabletEvent* cbval1 = event;

            tabletevent_cb(this, cbval1);
            return;
        }
        KActionSelector::tabletEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void actionEvent(QActionEvent* event) override {
        if (kactionselector_actionevent_isbase) {
            kactionselector_actionevent_isbase = false;
            KActionSelector::actionEvent(event);
            return;
        }
        auto actionevent_cb = kactionselector_actionevent_callback;
        if (actionevent_cb) {
            QActionEvent* cbval1 = event;

            actionevent_cb(this, cbval1);
            return;
        }
        KActionSelector::actionEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragEnterEvent(QDragEnterEvent* event) override {
        if (kactionselector_dragenterevent_isbase) {
            kactionselector_dragenterevent_isbase = false;
            KActionSelector::dragEnterEvent(event);
            return;
        }
        auto dragenterevent_cb = kactionselector_dragenterevent_callback;
        if (dragenterevent_cb) {
            QDragEnterEvent* cbval1 = event;

            dragenterevent_cb(this, cbval1);
            return;
        }
        KActionSelector::dragEnterEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragMoveEvent(QDragMoveEvent* event) override {
        if (kactionselector_dragmoveevent_isbase) {
            kactionselector_dragmoveevent_isbase = false;
            KActionSelector::dragMoveEvent(event);
            return;
        }
        auto dragmoveevent_cb = kactionselector_dragmoveevent_callback;
        if (dragmoveevent_cb) {
            QDragMoveEvent* cbval1 = event;

            dragmoveevent_cb(this, cbval1);
            return;
        }
        KActionSelector::dragMoveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragLeaveEvent(QDragLeaveEvent* event) override {
        if (kactionselector_dragleaveevent_isbase) {
            kactionselector_dragleaveevent_isbase = false;
            KActionSelector::dragLeaveEvent(event);
            return;
        }
        auto dragleaveevent_cb = kactionselector_dragleaveevent_callback;
        if (dragleaveevent_cb) {
            QDragLeaveEvent* cbval1 = event;

            dragleaveevent_cb(this, cbval1);
            return;
        }
        KActionSelector::dragLeaveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void dropEvent(QDropEvent* event) override {
        if (kactionselector_dropevent_isbase) {
            kactionselector_dropevent_isbase = false;
            KActionSelector::dropEvent(event);
            return;
        }
        auto dropevent_cb = kactionselector_dropevent_callback;
        if (dropevent_cb) {
            QDropEvent* cbval1 = event;

            dropevent_cb(this, cbval1);
            return;
        }
        KActionSelector::dropEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void showEvent(QShowEvent* event) override {
        if (kactionselector_showevent_isbase) {
            kactionselector_showevent_isbase = false;
            KActionSelector::showEvent(event);
            return;
        }
        auto showevent_cb = kactionselector_showevent_callback;
        if (showevent_cb) {
            QShowEvent* cbval1 = event;

            showevent_cb(this, cbval1);
            return;
        }
        KActionSelector::showEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void hideEvent(QHideEvent* event) override {
        if (kactionselector_hideevent_isbase) {
            kactionselector_hideevent_isbase = false;
            KActionSelector::hideEvent(event);
            return;
        }
        auto hideevent_cb = kactionselector_hideevent_callback;
        if (hideevent_cb) {
            QHideEvent* cbval1 = event;

            hideevent_cb(this, cbval1);
            return;
        }
        KActionSelector::hideEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool nativeEvent(const QByteArray& eventType, void* message, qintptr* result) override {
        if (kactionselector_nativeevent_isbase) {
            kactionselector_nativeevent_isbase = false;
            return KActionSelector::nativeEvent(eventType, message, result);
        }
        auto nativeevent_cb = kactionselector_nativeevent_callback;
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
        return KActionSelector::nativeEvent(eventType, message, result);
    }

    // Virtual method for C ABI access and custom callback
    virtual void changeEvent(QEvent* param1) override {
        if (kactionselector_changeevent_isbase) {
            kactionselector_changeevent_isbase = false;
            KActionSelector::changeEvent(param1);
            return;
        }
        auto changeevent_cb = kactionselector_changeevent_callback;
        if (changeevent_cb) {
            QEvent* cbval1 = param1;

            changeevent_cb(this, cbval1);
            return;
        }
        KActionSelector::changeEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual int metric(QPaintDevice::PaintDeviceMetric param1) const override {
        if (kactionselector_metric_isbase) {
            kactionselector_metric_isbase = false;
            return KActionSelector::metric(param1);
        }
        auto metric_cb = kactionselector_metric_callback;
        if (metric_cb) {
            int cbval1 = static_cast<int>(param1);

            int callback_ret = metric_cb(this, cbval1);
            return static_cast<int>(callback_ret);
        }
        return KActionSelector::metric(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual void initPainter(QPainter* painter) const override {
        if (kactionselector_initpainter_isbase) {
            kactionselector_initpainter_isbase = false;
            KActionSelector::initPainter(painter);
            return;
        }
        auto initpainter_cb = kactionselector_initpainter_callback;
        if (initpainter_cb) {
            QPainter* cbval1 = painter;

            initpainter_cb(this, cbval1);
            return;
        }
        KActionSelector::initPainter(painter);
    }

    // Virtual method for C ABI access and custom callback
    virtual QPaintDevice* redirected(QPoint* offset) const override {
        if (kactionselector_redirected_isbase) {
            kactionselector_redirected_isbase = false;
            return KActionSelector::redirected(offset);
        }
        auto redirected_cb = kactionselector_redirected_callback;
        if (redirected_cb) {
            QPoint* cbval1 = offset;

            QPaintDevice* callback_ret = redirected_cb(this, cbval1);
            return callback_ret;
        }
        return KActionSelector::redirected(offset);
    }

    // Virtual method for C ABI access and custom callback
    virtual QPainter* sharedPainter() const override {
        if (kactionselector_sharedpainter_isbase) {
            kactionselector_sharedpainter_isbase = false;
            return KActionSelector::sharedPainter();
        }
        auto sharedpainter_cb = kactionselector_sharedpainter_callback;
        if (sharedpainter_cb) {
            QPainter* callback_ret = sharedpainter_cb();
            return callback_ret;
        }
        return KActionSelector::sharedPainter();
    }

    // Virtual method for C ABI access and custom callback
    virtual void inputMethodEvent(QInputMethodEvent* param1) override {
        if (kactionselector_inputmethodevent_isbase) {
            kactionselector_inputmethodevent_isbase = false;
            KActionSelector::inputMethodEvent(param1);
            return;
        }
        auto inputmethodevent_cb = kactionselector_inputmethodevent_callback;
        if (inputmethodevent_cb) {
            QInputMethodEvent* cbval1 = param1;

            inputmethodevent_cb(this, cbval1);
            return;
        }
        KActionSelector::inputMethodEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual QVariant inputMethodQuery(Qt::InputMethodQuery param1) const override {
        if (kactionselector_inputmethodquery_isbase) {
            kactionselector_inputmethodquery_isbase = false;
            return KActionSelector::inputMethodQuery(param1);
        }
        auto inputmethodquery_cb = kactionselector_inputmethodquery_callback;
        if (inputmethodquery_cb) {
            int cbval1 = static_cast<int>(param1);

            QVariant* callback_ret = inputmethodquery_cb(this, cbval1);
            return *callback_ret;
        }
        return KActionSelector::inputMethodQuery(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool focusNextPrevChild(bool next) override {
        if (kactionselector_focusnextprevchild_isbase) {
            kactionselector_focusnextprevchild_isbase = false;
            return KActionSelector::focusNextPrevChild(next);
        }
        auto focusnextprevchild_cb = kactionselector_focusnextprevchild_callback;
        if (focusnextprevchild_cb) {
            bool cbval1 = next;

            bool callback_ret = focusnextprevchild_cb(this, cbval1);
            return callback_ret;
        }
        return KActionSelector::focusNextPrevChild(next);
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (kactionselector_timerevent_isbase) {
            kactionselector_timerevent_isbase = false;
            KActionSelector::timerEvent(event);
            return;
        }
        auto timerevent_cb = kactionselector_timerevent_callback;
        if (timerevent_cb) {
            QTimerEvent* cbval1 = event;

            timerevent_cb(this, cbval1);
            return;
        }
        KActionSelector::timerEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (kactionselector_childevent_isbase) {
            kactionselector_childevent_isbase = false;
            KActionSelector::childEvent(event);
            return;
        }
        auto childevent_cb = kactionselector_childevent_callback;
        if (childevent_cb) {
            QChildEvent* cbval1 = event;

            childevent_cb(this, cbval1);
            return;
        }
        KActionSelector::childEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (kactionselector_customevent_isbase) {
            kactionselector_customevent_isbase = false;
            KActionSelector::customEvent(event);
            return;
        }
        auto customevent_cb = kactionselector_customevent_callback;
        if (customevent_cb) {
            QEvent* cbval1 = event;

            customevent_cb(this, cbval1);
            return;
        }
        KActionSelector::customEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (kactionselector_connectnotify_isbase) {
            kactionselector_connectnotify_isbase = false;
            KActionSelector::connectNotify(signal);
            return;
        }
        auto connectnotify_cb = kactionselector_connectnotify_callback;
        if (connectnotify_cb) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            connectnotify_cb(this, cbval1);
            return;
        }
        KActionSelector::connectNotify(signal);
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (kactionselector_disconnectnotify_isbase) {
            kactionselector_disconnectnotify_isbase = false;
            KActionSelector::disconnectNotify(signal);
            return;
        }
        auto disconnectnotify_cb = kactionselector_disconnectnotify_callback;
        if (disconnectnotify_cb) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            disconnectnotify_cb(this, cbval1);
            return;
        }
        KActionSelector::disconnectNotify(signal);
    }

    // Virtual method for C ABI access and custom callback
    void updateMicroFocus() {
        if (kactionselector_updatemicrofocus_isbase) {
            kactionselector_updatemicrofocus_isbase = false;
            KActionSelector::updateMicroFocus();
            return;
        }
        auto updatemicrofocus_cb = kactionselector_updatemicrofocus_callback;
        if (updatemicrofocus_cb) {
            updatemicrofocus_cb();
            return;
        }
        KActionSelector::updateMicroFocus();
    }

    // Virtual method for C ABI access and custom callback
    void create() {
        if (kactionselector_create_isbase) {
            kactionselector_create_isbase = false;
            KActionSelector::create();
            return;
        }
        auto create_cb = kactionselector_create_callback;
        if (create_cb) {
            create_cb();
            return;
        }
        KActionSelector::create();
    }

    // Virtual method for C ABI access and custom callback
    void destroy() {
        if (kactionselector_destroy_isbase) {
            kactionselector_destroy_isbase = false;
            KActionSelector::destroy();
            return;
        }
        auto destroy_cb = kactionselector_destroy_callback;
        if (destroy_cb) {
            destroy_cb();
            return;
        }
        KActionSelector::destroy();
    }

    // Virtual method for C ABI access and custom callback
    bool focusNextChild() {
        if (kactionselector_focusnextchild_isbase) {
            kactionselector_focusnextchild_isbase = false;
            return KActionSelector::focusNextChild();
        }
        auto focusnextchild_cb = kactionselector_focusnextchild_callback;
        if (focusnextchild_cb) {
            bool callback_ret = focusnextchild_cb();
            return callback_ret;
        }
        return KActionSelector::focusNextChild();
    }

    // Virtual method for C ABI access and custom callback
    bool focusPreviousChild() {
        if (kactionselector_focuspreviouschild_isbase) {
            kactionselector_focuspreviouschild_isbase = false;
            return KActionSelector::focusPreviousChild();
        }
        auto focuspreviouschild_cb = kactionselector_focuspreviouschild_callback;
        if (focuspreviouschild_cb) {
            bool callback_ret = focuspreviouschild_cb();
            return callback_ret;
        }
        return KActionSelector::focusPreviousChild();
    }

    // Virtual method for C ABI access and custom callback
    QObject* sender() const {
        if (kactionselector_sender_isbase) {
            kactionselector_sender_isbase = false;
            return KActionSelector::sender();
        }
        auto sender_cb = kactionselector_sender_callback;
        if (sender_cb) {
            QObject* callback_ret = sender_cb();
            return callback_ret;
        }
        return KActionSelector::sender();
    }

    // Virtual method for C ABI access and custom callback
    int senderSignalIndex() const {
        if (kactionselector_sendersignalindex_isbase) {
            kactionselector_sendersignalindex_isbase = false;
            return KActionSelector::senderSignalIndex();
        }
        auto sendersignalindex_cb = kactionselector_sendersignalindex_callback;
        if (sendersignalindex_cb) {
            int callback_ret = sendersignalindex_cb();
            return static_cast<int>(callback_ret);
        }
        return KActionSelector::senderSignalIndex();
    }

    // Virtual method for C ABI access and custom callback
    int receivers(const char* signal) const {
        if (kactionselector_receivers_isbase) {
            kactionselector_receivers_isbase = false;
            return KActionSelector::receivers(signal);
        }
        auto receivers_cb = kactionselector_receivers_callback;
        if (receivers_cb) {
            const char* cbval1 = (const char*)signal;

            int callback_ret = receivers_cb(this, cbval1);
            return static_cast<int>(callback_ret);
        }
        return KActionSelector::receivers(signal);
    }

    // Virtual method for C ABI access and custom callback
    bool isSignalConnected(const QMetaMethod& signal) const {
        if (kactionselector_issignalconnected_isbase) {
            kactionselector_issignalconnected_isbase = false;
            return KActionSelector::isSignalConnected(signal);
        }
        auto issignalconnected_cb = kactionselector_issignalconnected_callback;
        if (issignalconnected_cb) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            bool callback_ret = issignalconnected_cb(this, cbval1);
            return callback_ret;
        }
        return KActionSelector::isSignalConnected(signal);
    }

    // Virtual method for C ABI access and custom callback
    double getDecodedMetricF(QPaintDevice::PaintDeviceMetric metricA, QPaintDevice::PaintDeviceMetric metricB) const {
        if (kactionselector_getdecodedmetricf_isbase) {
            kactionselector_getdecodedmetricf_isbase = false;
            return KActionSelector::getDecodedMetricF(metricA, metricB);
        }
        auto getdecodedmetricf_cb = kactionselector_getdecodedmetricf_callback;
        if (getdecodedmetricf_cb) {
            int cbval1 = static_cast<int>(metricA);
            int cbval2 = static_cast<int>(metricB);

            double callback_ret = getdecodedmetricf_cb(this, cbval1, cbval2);
            return static_cast<double>(callback_ret);
        }
        return KActionSelector::getDecodedMetricF(metricA, metricB);
    }

    // Friend functions
    friend void KActionSelector_KeyPressEvent(KActionSelector* self, QKeyEvent* param1);
    friend void KActionSelector_SuperKeyPressEvent(KActionSelector* self, QKeyEvent* param1);
    friend bool KActionSelector_EventFilter(KActionSelector* self, QObject* param1, QEvent* param2);
    friend bool KActionSelector_SuperEventFilter(KActionSelector* self, QObject* param1, QEvent* param2);
    friend bool KActionSelector_Event(KActionSelector* self, QEvent* event);
    friend bool KActionSelector_SuperEvent(KActionSelector* self, QEvent* event);
    friend void KActionSelector_MousePressEvent(KActionSelector* self, QMouseEvent* event);
    friend void KActionSelector_SuperMousePressEvent(KActionSelector* self, QMouseEvent* event);
    friend void KActionSelector_MouseReleaseEvent(KActionSelector* self, QMouseEvent* event);
    friend void KActionSelector_SuperMouseReleaseEvent(KActionSelector* self, QMouseEvent* event);
    friend void KActionSelector_MouseDoubleClickEvent(KActionSelector* self, QMouseEvent* event);
    friend void KActionSelector_SuperMouseDoubleClickEvent(KActionSelector* self, QMouseEvent* event);
    friend void KActionSelector_MouseMoveEvent(KActionSelector* self, QMouseEvent* event);
    friend void KActionSelector_SuperMouseMoveEvent(KActionSelector* self, QMouseEvent* event);
    friend void KActionSelector_WheelEvent(KActionSelector* self, QWheelEvent* event);
    friend void KActionSelector_SuperWheelEvent(KActionSelector* self, QWheelEvent* event);
    friend void KActionSelector_KeyReleaseEvent(KActionSelector* self, QKeyEvent* event);
    friend void KActionSelector_SuperKeyReleaseEvent(KActionSelector* self, QKeyEvent* event);
    friend void KActionSelector_FocusInEvent(KActionSelector* self, QFocusEvent* event);
    friend void KActionSelector_SuperFocusInEvent(KActionSelector* self, QFocusEvent* event);
    friend void KActionSelector_FocusOutEvent(KActionSelector* self, QFocusEvent* event);
    friend void KActionSelector_SuperFocusOutEvent(KActionSelector* self, QFocusEvent* event);
    friend void KActionSelector_EnterEvent(KActionSelector* self, QEnterEvent* event);
    friend void KActionSelector_SuperEnterEvent(KActionSelector* self, QEnterEvent* event);
    friend void KActionSelector_LeaveEvent(KActionSelector* self, QEvent* event);
    friend void KActionSelector_SuperLeaveEvent(KActionSelector* self, QEvent* event);
    friend void KActionSelector_PaintEvent(KActionSelector* self, QPaintEvent* event);
    friend void KActionSelector_SuperPaintEvent(KActionSelector* self, QPaintEvent* event);
    friend void KActionSelector_MoveEvent(KActionSelector* self, QMoveEvent* event);
    friend void KActionSelector_SuperMoveEvent(KActionSelector* self, QMoveEvent* event);
    friend void KActionSelector_ResizeEvent(KActionSelector* self, QResizeEvent* event);
    friend void KActionSelector_SuperResizeEvent(KActionSelector* self, QResizeEvent* event);
    friend void KActionSelector_CloseEvent(KActionSelector* self, QCloseEvent* event);
    friend void KActionSelector_SuperCloseEvent(KActionSelector* self, QCloseEvent* event);
    friend void KActionSelector_ContextMenuEvent(KActionSelector* self, QContextMenuEvent* event);
    friend void KActionSelector_SuperContextMenuEvent(KActionSelector* self, QContextMenuEvent* event);
    friend void KActionSelector_TabletEvent(KActionSelector* self, QTabletEvent* event);
    friend void KActionSelector_SuperTabletEvent(KActionSelector* self, QTabletEvent* event);
    friend void KActionSelector_ActionEvent(KActionSelector* self, QActionEvent* event);
    friend void KActionSelector_SuperActionEvent(KActionSelector* self, QActionEvent* event);
    friend void KActionSelector_DragEnterEvent(KActionSelector* self, QDragEnterEvent* event);
    friend void KActionSelector_SuperDragEnterEvent(KActionSelector* self, QDragEnterEvent* event);
    friend void KActionSelector_DragMoveEvent(KActionSelector* self, QDragMoveEvent* event);
    friend void KActionSelector_SuperDragMoveEvent(KActionSelector* self, QDragMoveEvent* event);
    friend void KActionSelector_DragLeaveEvent(KActionSelector* self, QDragLeaveEvent* event);
    friend void KActionSelector_SuperDragLeaveEvent(KActionSelector* self, QDragLeaveEvent* event);
    friend void KActionSelector_DropEvent(KActionSelector* self, QDropEvent* event);
    friend void KActionSelector_SuperDropEvent(KActionSelector* self, QDropEvent* event);
    friend void KActionSelector_ShowEvent(KActionSelector* self, QShowEvent* event);
    friend void KActionSelector_SuperShowEvent(KActionSelector* self, QShowEvent* event);
    friend void KActionSelector_HideEvent(KActionSelector* self, QHideEvent* event);
    friend void KActionSelector_SuperHideEvent(KActionSelector* self, QHideEvent* event);
    friend bool KActionSelector_NativeEvent(KActionSelector* self, const libqt_string eventType, void* message, intptr_t* result);
    friend bool KActionSelector_SuperNativeEvent(KActionSelector* self, const libqt_string eventType, void* message, intptr_t* result);
    friend void KActionSelector_ChangeEvent(KActionSelector* self, QEvent* param1);
    friend void KActionSelector_SuperChangeEvent(KActionSelector* self, QEvent* param1);
    friend int KActionSelector_Metric(const KActionSelector* self, int param1);
    friend int KActionSelector_SuperMetric(const KActionSelector* self, int param1);
    friend void KActionSelector_InitPainter(const KActionSelector* self, QPainter* painter);
    friend void KActionSelector_SuperInitPainter(const KActionSelector* self, QPainter* painter);
    friend QPaintDevice* KActionSelector_Redirected(const KActionSelector* self, QPoint* offset);
    friend QPaintDevice* KActionSelector_SuperRedirected(const KActionSelector* self, QPoint* offset);
    friend QPainter* KActionSelector_SharedPainter(const KActionSelector* self);
    friend QPainter* KActionSelector_SuperSharedPainter(const KActionSelector* self);
    friend void KActionSelector_InputMethodEvent(KActionSelector* self, QInputMethodEvent* param1);
    friend void KActionSelector_SuperInputMethodEvent(KActionSelector* self, QInputMethodEvent* param1);
    friend bool KActionSelector_FocusNextPrevChild(KActionSelector* self, bool next);
    friend bool KActionSelector_SuperFocusNextPrevChild(KActionSelector* self, bool next);
    friend void KActionSelector_TimerEvent(KActionSelector* self, QTimerEvent* event);
    friend void KActionSelector_SuperTimerEvent(KActionSelector* self, QTimerEvent* event);
    friend void KActionSelector_ChildEvent(KActionSelector* self, QChildEvent* event);
    friend void KActionSelector_SuperChildEvent(KActionSelector* self, QChildEvent* event);
    friend void KActionSelector_CustomEvent(KActionSelector* self, QEvent* event);
    friend void KActionSelector_SuperCustomEvent(KActionSelector* self, QEvent* event);
    friend void KActionSelector_ConnectNotify(KActionSelector* self, const QMetaMethod* signal);
    friend void KActionSelector_SuperConnectNotify(KActionSelector* self, const QMetaMethod* signal);
    friend void KActionSelector_DisconnectNotify(KActionSelector* self, const QMetaMethod* signal);
    friend void KActionSelector_SuperDisconnectNotify(KActionSelector* self, const QMetaMethod* signal);
    friend void KActionSelector_UpdateMicroFocus(KActionSelector* self);
    friend void KActionSelector_SuperUpdateMicroFocus(KActionSelector* self);
    friend void KActionSelector_Create(KActionSelector* self);
    friend void KActionSelector_SuperCreate(KActionSelector* self);
    friend void KActionSelector_Destroy(KActionSelector* self);
    friend void KActionSelector_SuperDestroy(KActionSelector* self);
    friend bool KActionSelector_FocusNextChild(KActionSelector* self);
    friend bool KActionSelector_SuperFocusNextChild(KActionSelector* self);
    friend bool KActionSelector_FocusPreviousChild(KActionSelector* self);
    friend bool KActionSelector_SuperFocusPreviousChild(KActionSelector* self);
    friend QObject* KActionSelector_Sender(const KActionSelector* self);
    friend QObject* KActionSelector_SuperSender(const KActionSelector* self);
    friend int KActionSelector_SenderSignalIndex(const KActionSelector* self);
    friend int KActionSelector_SuperSenderSignalIndex(const KActionSelector* self);
    friend int KActionSelector_Receivers(const KActionSelector* self, const char* signal);
    friend int KActionSelector_SuperReceivers(const KActionSelector* self, const char* signal);
    friend bool KActionSelector_IsSignalConnected(const KActionSelector* self, const QMetaMethod* signal);
    friend bool KActionSelector_SuperIsSignalConnected(const KActionSelector* self, const QMetaMethod* signal);
    friend double KActionSelector_GetDecodedMetricF(const KActionSelector* self, int metricA, int metricB);
    friend double KActionSelector_SuperGetDecodedMetricF(const KActionSelector* self, int metricA, int metricB);
};

#endif
