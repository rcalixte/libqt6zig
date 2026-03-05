#pragma once
#ifndef SRC_EXTRAS_KWIDGETSADDONSC_LIBVIRTUALKANIMATEDBUTTON_H
#define SRC_EXTRAS_KWIDGETSADDONSC_LIBVIRTUALKANIMATEDBUTTON_H

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

// This class is a subclass of KAnimatedButton so that we can call protected methods
class VirtualKAnimatedButton final : public KAnimatedButton {

  public:
    // Virtual class boolean flag
    bool isVirtualKAnimatedButton = true;

    // Virtual class public types (including callbacks)
    using KAnimatedButton_MetaObject_Callback = QMetaObject* (*)();
    using KAnimatedButton_Metacast_Callback = void* (*)(KAnimatedButton*, const char*);
    using KAnimatedButton_Metacall_Callback = int (*)(KAnimatedButton*, int, int, void**);
    using KAnimatedButton_SizeHint_Callback = QSize* (*)();
    using KAnimatedButton_MinimumSizeHint_Callback = QSize* (*)();
    using KAnimatedButton_Event_Callback = bool (*)(KAnimatedButton*, QEvent*);
    using KAnimatedButton_MousePressEvent_Callback = void (*)(KAnimatedButton*, QMouseEvent*);
    using KAnimatedButton_MouseReleaseEvent_Callback = void (*)(KAnimatedButton*, QMouseEvent*);
    using KAnimatedButton_PaintEvent_Callback = void (*)(KAnimatedButton*, QPaintEvent*);
    using KAnimatedButton_ActionEvent_Callback = void (*)(KAnimatedButton*, QActionEvent*);
    using KAnimatedButton_EnterEvent_Callback = void (*)(KAnimatedButton*, QEnterEvent*);
    using KAnimatedButton_LeaveEvent_Callback = void (*)(KAnimatedButton*, QEvent*);
    using KAnimatedButton_TimerEvent_Callback = void (*)(KAnimatedButton*, QTimerEvent*);
    using KAnimatedButton_ChangeEvent_Callback = void (*)(KAnimatedButton*, QEvent*);
    using KAnimatedButton_HitButton_Callback = bool (*)(const KAnimatedButton*, QPoint*);
    using KAnimatedButton_CheckStateSet_Callback = void (*)();
    using KAnimatedButton_NextCheckState_Callback = void (*)();
    using KAnimatedButton_InitStyleOption_Callback = void (*)(const KAnimatedButton*, QStyleOptionToolButton*);
    using KAnimatedButton_KeyPressEvent_Callback = void (*)(KAnimatedButton*, QKeyEvent*);
    using KAnimatedButton_KeyReleaseEvent_Callback = void (*)(KAnimatedButton*, QKeyEvent*);
    using KAnimatedButton_MouseMoveEvent_Callback = void (*)(KAnimatedButton*, QMouseEvent*);
    using KAnimatedButton_FocusInEvent_Callback = void (*)(KAnimatedButton*, QFocusEvent*);
    using KAnimatedButton_FocusOutEvent_Callback = void (*)(KAnimatedButton*, QFocusEvent*);
    using KAnimatedButton_DevType_Callback = int (*)();
    using KAnimatedButton_SetVisible_Callback = void (*)(KAnimatedButton*, bool);
    using KAnimatedButton_HeightForWidth_Callback = int (*)(const KAnimatedButton*, int);
    using KAnimatedButton_HasHeightForWidth_Callback = bool (*)();
    using KAnimatedButton_PaintEngine_Callback = QPaintEngine* (*)();
    using KAnimatedButton_MouseDoubleClickEvent_Callback = void (*)(KAnimatedButton*, QMouseEvent*);
    using KAnimatedButton_WheelEvent_Callback = void (*)(KAnimatedButton*, QWheelEvent*);
    using KAnimatedButton_MoveEvent_Callback = void (*)(KAnimatedButton*, QMoveEvent*);
    using KAnimatedButton_ResizeEvent_Callback = void (*)(KAnimatedButton*, QResizeEvent*);
    using KAnimatedButton_CloseEvent_Callback = void (*)(KAnimatedButton*, QCloseEvent*);
    using KAnimatedButton_ContextMenuEvent_Callback = void (*)(KAnimatedButton*, QContextMenuEvent*);
    using KAnimatedButton_TabletEvent_Callback = void (*)(KAnimatedButton*, QTabletEvent*);
    using KAnimatedButton_DragEnterEvent_Callback = void (*)(KAnimatedButton*, QDragEnterEvent*);
    using KAnimatedButton_DragMoveEvent_Callback = void (*)(KAnimatedButton*, QDragMoveEvent*);
    using KAnimatedButton_DragLeaveEvent_Callback = void (*)(KAnimatedButton*, QDragLeaveEvent*);
    using KAnimatedButton_DropEvent_Callback = void (*)(KAnimatedButton*, QDropEvent*);
    using KAnimatedButton_ShowEvent_Callback = void (*)(KAnimatedButton*, QShowEvent*);
    using KAnimatedButton_HideEvent_Callback = void (*)(KAnimatedButton*, QHideEvent*);
    using KAnimatedButton_NativeEvent_Callback = bool (*)(KAnimatedButton*, libqt_string, void*, intptr_t*);
    using KAnimatedButton_Metric_Callback = int (*)(const KAnimatedButton*, int);
    using KAnimatedButton_InitPainter_Callback = void (*)(const KAnimatedButton*, QPainter*);
    using KAnimatedButton_Redirected_Callback = QPaintDevice* (*)(const KAnimatedButton*, QPoint*);
    using KAnimatedButton_SharedPainter_Callback = QPainter* (*)();
    using KAnimatedButton_InputMethodEvent_Callback = void (*)(KAnimatedButton*, QInputMethodEvent*);
    using KAnimatedButton_InputMethodQuery_Callback = QVariant* (*)(const KAnimatedButton*, int);
    using KAnimatedButton_FocusNextPrevChild_Callback = bool (*)(KAnimatedButton*, bool);
    using KAnimatedButton_EventFilter_Callback = bool (*)(KAnimatedButton*, QObject*, QEvent*);
    using KAnimatedButton_ChildEvent_Callback = void (*)(KAnimatedButton*, QChildEvent*);
    using KAnimatedButton_CustomEvent_Callback = void (*)(KAnimatedButton*, QEvent*);
    using KAnimatedButton_ConnectNotify_Callback = void (*)(KAnimatedButton*, QMetaMethod*);
    using KAnimatedButton_DisconnectNotify_Callback = void (*)(KAnimatedButton*, QMetaMethod*);
    using KAnimatedButton_UpdateMicroFocus_Callback = void (*)();
    using KAnimatedButton_Create_Callback = void (*)();
    using KAnimatedButton_Destroy_Callback = void (*)();
    using KAnimatedButton_FocusNextChild_Callback = bool (*)();
    using KAnimatedButton_FocusPreviousChild_Callback = bool (*)();
    using KAnimatedButton_Sender_Callback = QObject* (*)();
    using KAnimatedButton_SenderSignalIndex_Callback = int (*)();
    using KAnimatedButton_Receivers_Callback = int (*)(const KAnimatedButton*, const char*);
    using KAnimatedButton_IsSignalConnected_Callback = bool (*)(const KAnimatedButton*, QMetaMethod*);
    using KAnimatedButton_GetDecodedMetricF_Callback = double (*)(const KAnimatedButton*, int, int);

  protected:
    // Instance callback storage
    KAnimatedButton_MetaObject_Callback kanimatedbutton_metaobject_callback = nullptr;
    KAnimatedButton_Metacast_Callback kanimatedbutton_metacast_callback = nullptr;
    KAnimatedButton_Metacall_Callback kanimatedbutton_metacall_callback = nullptr;
    KAnimatedButton_SizeHint_Callback kanimatedbutton_sizehint_callback = nullptr;
    KAnimatedButton_MinimumSizeHint_Callback kanimatedbutton_minimumsizehint_callback = nullptr;
    KAnimatedButton_Event_Callback kanimatedbutton_event_callback = nullptr;
    KAnimatedButton_MousePressEvent_Callback kanimatedbutton_mousepressevent_callback = nullptr;
    KAnimatedButton_MouseReleaseEvent_Callback kanimatedbutton_mousereleaseevent_callback = nullptr;
    KAnimatedButton_PaintEvent_Callback kanimatedbutton_paintevent_callback = nullptr;
    KAnimatedButton_ActionEvent_Callback kanimatedbutton_actionevent_callback = nullptr;
    KAnimatedButton_EnterEvent_Callback kanimatedbutton_enterevent_callback = nullptr;
    KAnimatedButton_LeaveEvent_Callback kanimatedbutton_leaveevent_callback = nullptr;
    KAnimatedButton_TimerEvent_Callback kanimatedbutton_timerevent_callback = nullptr;
    KAnimatedButton_ChangeEvent_Callback kanimatedbutton_changeevent_callback = nullptr;
    KAnimatedButton_HitButton_Callback kanimatedbutton_hitbutton_callback = nullptr;
    KAnimatedButton_CheckStateSet_Callback kanimatedbutton_checkstateset_callback = nullptr;
    KAnimatedButton_NextCheckState_Callback kanimatedbutton_nextcheckstate_callback = nullptr;
    KAnimatedButton_InitStyleOption_Callback kanimatedbutton_initstyleoption_callback = nullptr;
    KAnimatedButton_KeyPressEvent_Callback kanimatedbutton_keypressevent_callback = nullptr;
    KAnimatedButton_KeyReleaseEvent_Callback kanimatedbutton_keyreleaseevent_callback = nullptr;
    KAnimatedButton_MouseMoveEvent_Callback kanimatedbutton_mousemoveevent_callback = nullptr;
    KAnimatedButton_FocusInEvent_Callback kanimatedbutton_focusinevent_callback = nullptr;
    KAnimatedButton_FocusOutEvent_Callback kanimatedbutton_focusoutevent_callback = nullptr;
    KAnimatedButton_DevType_Callback kanimatedbutton_devtype_callback = nullptr;
    KAnimatedButton_SetVisible_Callback kanimatedbutton_setvisible_callback = nullptr;
    KAnimatedButton_HeightForWidth_Callback kanimatedbutton_heightforwidth_callback = nullptr;
    KAnimatedButton_HasHeightForWidth_Callback kanimatedbutton_hasheightforwidth_callback = nullptr;
    KAnimatedButton_PaintEngine_Callback kanimatedbutton_paintengine_callback = nullptr;
    KAnimatedButton_MouseDoubleClickEvent_Callback kanimatedbutton_mousedoubleclickevent_callback = nullptr;
    KAnimatedButton_WheelEvent_Callback kanimatedbutton_wheelevent_callback = nullptr;
    KAnimatedButton_MoveEvent_Callback kanimatedbutton_moveevent_callback = nullptr;
    KAnimatedButton_ResizeEvent_Callback kanimatedbutton_resizeevent_callback = nullptr;
    KAnimatedButton_CloseEvent_Callback kanimatedbutton_closeevent_callback = nullptr;
    KAnimatedButton_ContextMenuEvent_Callback kanimatedbutton_contextmenuevent_callback = nullptr;
    KAnimatedButton_TabletEvent_Callback kanimatedbutton_tabletevent_callback = nullptr;
    KAnimatedButton_DragEnterEvent_Callback kanimatedbutton_dragenterevent_callback = nullptr;
    KAnimatedButton_DragMoveEvent_Callback kanimatedbutton_dragmoveevent_callback = nullptr;
    KAnimatedButton_DragLeaveEvent_Callback kanimatedbutton_dragleaveevent_callback = nullptr;
    KAnimatedButton_DropEvent_Callback kanimatedbutton_dropevent_callback = nullptr;
    KAnimatedButton_ShowEvent_Callback kanimatedbutton_showevent_callback = nullptr;
    KAnimatedButton_HideEvent_Callback kanimatedbutton_hideevent_callback = nullptr;
    KAnimatedButton_NativeEvent_Callback kanimatedbutton_nativeevent_callback = nullptr;
    KAnimatedButton_Metric_Callback kanimatedbutton_metric_callback = nullptr;
    KAnimatedButton_InitPainter_Callback kanimatedbutton_initpainter_callback = nullptr;
    KAnimatedButton_Redirected_Callback kanimatedbutton_redirected_callback = nullptr;
    KAnimatedButton_SharedPainter_Callback kanimatedbutton_sharedpainter_callback = nullptr;
    KAnimatedButton_InputMethodEvent_Callback kanimatedbutton_inputmethodevent_callback = nullptr;
    KAnimatedButton_InputMethodQuery_Callback kanimatedbutton_inputmethodquery_callback = nullptr;
    KAnimatedButton_FocusNextPrevChild_Callback kanimatedbutton_focusnextprevchild_callback = nullptr;
    KAnimatedButton_EventFilter_Callback kanimatedbutton_eventfilter_callback = nullptr;
    KAnimatedButton_ChildEvent_Callback kanimatedbutton_childevent_callback = nullptr;
    KAnimatedButton_CustomEvent_Callback kanimatedbutton_customevent_callback = nullptr;
    KAnimatedButton_ConnectNotify_Callback kanimatedbutton_connectnotify_callback = nullptr;
    KAnimatedButton_DisconnectNotify_Callback kanimatedbutton_disconnectnotify_callback = nullptr;
    KAnimatedButton_UpdateMicroFocus_Callback kanimatedbutton_updatemicrofocus_callback = nullptr;
    KAnimatedButton_Create_Callback kanimatedbutton_create_callback = nullptr;
    KAnimatedButton_Destroy_Callback kanimatedbutton_destroy_callback = nullptr;
    KAnimatedButton_FocusNextChild_Callback kanimatedbutton_focusnextchild_callback = nullptr;
    KAnimatedButton_FocusPreviousChild_Callback kanimatedbutton_focuspreviouschild_callback = nullptr;
    KAnimatedButton_Sender_Callback kanimatedbutton_sender_callback = nullptr;
    KAnimatedButton_SenderSignalIndex_Callback kanimatedbutton_sendersignalindex_callback = nullptr;
    KAnimatedButton_Receivers_Callback kanimatedbutton_receivers_callback = nullptr;
    KAnimatedButton_IsSignalConnected_Callback kanimatedbutton_issignalconnected_callback = nullptr;
    KAnimatedButton_GetDecodedMetricF_Callback kanimatedbutton_getdecodedmetricf_callback = nullptr;

    // Instance base flags
    mutable bool kanimatedbutton_metaobject_isbase = false;
    mutable bool kanimatedbutton_metacast_isbase = false;
    mutable bool kanimatedbutton_metacall_isbase = false;
    mutable bool kanimatedbutton_sizehint_isbase = false;
    mutable bool kanimatedbutton_minimumsizehint_isbase = false;
    mutable bool kanimatedbutton_event_isbase = false;
    mutable bool kanimatedbutton_mousepressevent_isbase = false;
    mutable bool kanimatedbutton_mousereleaseevent_isbase = false;
    mutable bool kanimatedbutton_paintevent_isbase = false;
    mutable bool kanimatedbutton_actionevent_isbase = false;
    mutable bool kanimatedbutton_enterevent_isbase = false;
    mutable bool kanimatedbutton_leaveevent_isbase = false;
    mutable bool kanimatedbutton_timerevent_isbase = false;
    mutable bool kanimatedbutton_changeevent_isbase = false;
    mutable bool kanimatedbutton_hitbutton_isbase = false;
    mutable bool kanimatedbutton_checkstateset_isbase = false;
    mutable bool kanimatedbutton_nextcheckstate_isbase = false;
    mutable bool kanimatedbutton_initstyleoption_isbase = false;
    mutable bool kanimatedbutton_keypressevent_isbase = false;
    mutable bool kanimatedbutton_keyreleaseevent_isbase = false;
    mutable bool kanimatedbutton_mousemoveevent_isbase = false;
    mutable bool kanimatedbutton_focusinevent_isbase = false;
    mutable bool kanimatedbutton_focusoutevent_isbase = false;
    mutable bool kanimatedbutton_devtype_isbase = false;
    mutable bool kanimatedbutton_setvisible_isbase = false;
    mutable bool kanimatedbutton_heightforwidth_isbase = false;
    mutable bool kanimatedbutton_hasheightforwidth_isbase = false;
    mutable bool kanimatedbutton_paintengine_isbase = false;
    mutable bool kanimatedbutton_mousedoubleclickevent_isbase = false;
    mutable bool kanimatedbutton_wheelevent_isbase = false;
    mutable bool kanimatedbutton_moveevent_isbase = false;
    mutable bool kanimatedbutton_resizeevent_isbase = false;
    mutable bool kanimatedbutton_closeevent_isbase = false;
    mutable bool kanimatedbutton_contextmenuevent_isbase = false;
    mutable bool kanimatedbutton_tabletevent_isbase = false;
    mutable bool kanimatedbutton_dragenterevent_isbase = false;
    mutable bool kanimatedbutton_dragmoveevent_isbase = false;
    mutable bool kanimatedbutton_dragleaveevent_isbase = false;
    mutable bool kanimatedbutton_dropevent_isbase = false;
    mutable bool kanimatedbutton_showevent_isbase = false;
    mutable bool kanimatedbutton_hideevent_isbase = false;
    mutable bool kanimatedbutton_nativeevent_isbase = false;
    mutable bool kanimatedbutton_metric_isbase = false;
    mutable bool kanimatedbutton_initpainter_isbase = false;
    mutable bool kanimatedbutton_redirected_isbase = false;
    mutable bool kanimatedbutton_sharedpainter_isbase = false;
    mutable bool kanimatedbutton_inputmethodevent_isbase = false;
    mutable bool kanimatedbutton_inputmethodquery_isbase = false;
    mutable bool kanimatedbutton_focusnextprevchild_isbase = false;
    mutable bool kanimatedbutton_eventfilter_isbase = false;
    mutable bool kanimatedbutton_childevent_isbase = false;
    mutable bool kanimatedbutton_customevent_isbase = false;
    mutable bool kanimatedbutton_connectnotify_isbase = false;
    mutable bool kanimatedbutton_disconnectnotify_isbase = false;
    mutable bool kanimatedbutton_updatemicrofocus_isbase = false;
    mutable bool kanimatedbutton_create_isbase = false;
    mutable bool kanimatedbutton_destroy_isbase = false;
    mutable bool kanimatedbutton_focusnextchild_isbase = false;
    mutable bool kanimatedbutton_focuspreviouschild_isbase = false;
    mutable bool kanimatedbutton_sender_isbase = false;
    mutable bool kanimatedbutton_sendersignalindex_isbase = false;
    mutable bool kanimatedbutton_receivers_isbase = false;
    mutable bool kanimatedbutton_issignalconnected_isbase = false;
    mutable bool kanimatedbutton_getdecodedmetricf_isbase = false;

  public:
    VirtualKAnimatedButton(QWidget* parent) : KAnimatedButton(parent) {};
    VirtualKAnimatedButton() : KAnimatedButton() {};

    // Callback setters
    inline void setKAnimatedButton_MetaObject_Callback(KAnimatedButton_MetaObject_Callback cb) { kanimatedbutton_metaobject_callback = cb; }
    inline void setKAnimatedButton_Metacast_Callback(KAnimatedButton_Metacast_Callback cb) { kanimatedbutton_metacast_callback = cb; }
    inline void setKAnimatedButton_Metacall_Callback(KAnimatedButton_Metacall_Callback cb) { kanimatedbutton_metacall_callback = cb; }
    inline void setKAnimatedButton_SizeHint_Callback(KAnimatedButton_SizeHint_Callback cb) { kanimatedbutton_sizehint_callback = cb; }
    inline void setKAnimatedButton_MinimumSizeHint_Callback(KAnimatedButton_MinimumSizeHint_Callback cb) { kanimatedbutton_minimumsizehint_callback = cb; }
    inline void setKAnimatedButton_Event_Callback(KAnimatedButton_Event_Callback cb) { kanimatedbutton_event_callback = cb; }
    inline void setKAnimatedButton_MousePressEvent_Callback(KAnimatedButton_MousePressEvent_Callback cb) { kanimatedbutton_mousepressevent_callback = cb; }
    inline void setKAnimatedButton_MouseReleaseEvent_Callback(KAnimatedButton_MouseReleaseEvent_Callback cb) { kanimatedbutton_mousereleaseevent_callback = cb; }
    inline void setKAnimatedButton_PaintEvent_Callback(KAnimatedButton_PaintEvent_Callback cb) { kanimatedbutton_paintevent_callback = cb; }
    inline void setKAnimatedButton_ActionEvent_Callback(KAnimatedButton_ActionEvent_Callback cb) { kanimatedbutton_actionevent_callback = cb; }
    inline void setKAnimatedButton_EnterEvent_Callback(KAnimatedButton_EnterEvent_Callback cb) { kanimatedbutton_enterevent_callback = cb; }
    inline void setKAnimatedButton_LeaveEvent_Callback(KAnimatedButton_LeaveEvent_Callback cb) { kanimatedbutton_leaveevent_callback = cb; }
    inline void setKAnimatedButton_TimerEvent_Callback(KAnimatedButton_TimerEvent_Callback cb) { kanimatedbutton_timerevent_callback = cb; }
    inline void setKAnimatedButton_ChangeEvent_Callback(KAnimatedButton_ChangeEvent_Callback cb) { kanimatedbutton_changeevent_callback = cb; }
    inline void setKAnimatedButton_HitButton_Callback(KAnimatedButton_HitButton_Callback cb) { kanimatedbutton_hitbutton_callback = cb; }
    inline void setKAnimatedButton_CheckStateSet_Callback(KAnimatedButton_CheckStateSet_Callback cb) { kanimatedbutton_checkstateset_callback = cb; }
    inline void setKAnimatedButton_NextCheckState_Callback(KAnimatedButton_NextCheckState_Callback cb) { kanimatedbutton_nextcheckstate_callback = cb; }
    inline void setKAnimatedButton_InitStyleOption_Callback(KAnimatedButton_InitStyleOption_Callback cb) { kanimatedbutton_initstyleoption_callback = cb; }
    inline void setKAnimatedButton_KeyPressEvent_Callback(KAnimatedButton_KeyPressEvent_Callback cb) { kanimatedbutton_keypressevent_callback = cb; }
    inline void setKAnimatedButton_KeyReleaseEvent_Callback(KAnimatedButton_KeyReleaseEvent_Callback cb) { kanimatedbutton_keyreleaseevent_callback = cb; }
    inline void setKAnimatedButton_MouseMoveEvent_Callback(KAnimatedButton_MouseMoveEvent_Callback cb) { kanimatedbutton_mousemoveevent_callback = cb; }
    inline void setKAnimatedButton_FocusInEvent_Callback(KAnimatedButton_FocusInEvent_Callback cb) { kanimatedbutton_focusinevent_callback = cb; }
    inline void setKAnimatedButton_FocusOutEvent_Callback(KAnimatedButton_FocusOutEvent_Callback cb) { kanimatedbutton_focusoutevent_callback = cb; }
    inline void setKAnimatedButton_DevType_Callback(KAnimatedButton_DevType_Callback cb) { kanimatedbutton_devtype_callback = cb; }
    inline void setKAnimatedButton_SetVisible_Callback(KAnimatedButton_SetVisible_Callback cb) { kanimatedbutton_setvisible_callback = cb; }
    inline void setKAnimatedButton_HeightForWidth_Callback(KAnimatedButton_HeightForWidth_Callback cb) { kanimatedbutton_heightforwidth_callback = cb; }
    inline void setKAnimatedButton_HasHeightForWidth_Callback(KAnimatedButton_HasHeightForWidth_Callback cb) { kanimatedbutton_hasheightforwidth_callback = cb; }
    inline void setKAnimatedButton_PaintEngine_Callback(KAnimatedButton_PaintEngine_Callback cb) { kanimatedbutton_paintengine_callback = cb; }
    inline void setKAnimatedButton_MouseDoubleClickEvent_Callback(KAnimatedButton_MouseDoubleClickEvent_Callback cb) { kanimatedbutton_mousedoubleclickevent_callback = cb; }
    inline void setKAnimatedButton_WheelEvent_Callback(KAnimatedButton_WheelEvent_Callback cb) { kanimatedbutton_wheelevent_callback = cb; }
    inline void setKAnimatedButton_MoveEvent_Callback(KAnimatedButton_MoveEvent_Callback cb) { kanimatedbutton_moveevent_callback = cb; }
    inline void setKAnimatedButton_ResizeEvent_Callback(KAnimatedButton_ResizeEvent_Callback cb) { kanimatedbutton_resizeevent_callback = cb; }
    inline void setKAnimatedButton_CloseEvent_Callback(KAnimatedButton_CloseEvent_Callback cb) { kanimatedbutton_closeevent_callback = cb; }
    inline void setKAnimatedButton_ContextMenuEvent_Callback(KAnimatedButton_ContextMenuEvent_Callback cb) { kanimatedbutton_contextmenuevent_callback = cb; }
    inline void setKAnimatedButton_TabletEvent_Callback(KAnimatedButton_TabletEvent_Callback cb) { kanimatedbutton_tabletevent_callback = cb; }
    inline void setKAnimatedButton_DragEnterEvent_Callback(KAnimatedButton_DragEnterEvent_Callback cb) { kanimatedbutton_dragenterevent_callback = cb; }
    inline void setKAnimatedButton_DragMoveEvent_Callback(KAnimatedButton_DragMoveEvent_Callback cb) { kanimatedbutton_dragmoveevent_callback = cb; }
    inline void setKAnimatedButton_DragLeaveEvent_Callback(KAnimatedButton_DragLeaveEvent_Callback cb) { kanimatedbutton_dragleaveevent_callback = cb; }
    inline void setKAnimatedButton_DropEvent_Callback(KAnimatedButton_DropEvent_Callback cb) { kanimatedbutton_dropevent_callback = cb; }
    inline void setKAnimatedButton_ShowEvent_Callback(KAnimatedButton_ShowEvent_Callback cb) { kanimatedbutton_showevent_callback = cb; }
    inline void setKAnimatedButton_HideEvent_Callback(KAnimatedButton_HideEvent_Callback cb) { kanimatedbutton_hideevent_callback = cb; }
    inline void setKAnimatedButton_NativeEvent_Callback(KAnimatedButton_NativeEvent_Callback cb) { kanimatedbutton_nativeevent_callback = cb; }
    inline void setKAnimatedButton_Metric_Callback(KAnimatedButton_Metric_Callback cb) { kanimatedbutton_metric_callback = cb; }
    inline void setKAnimatedButton_InitPainter_Callback(KAnimatedButton_InitPainter_Callback cb) { kanimatedbutton_initpainter_callback = cb; }
    inline void setKAnimatedButton_Redirected_Callback(KAnimatedButton_Redirected_Callback cb) { kanimatedbutton_redirected_callback = cb; }
    inline void setKAnimatedButton_SharedPainter_Callback(KAnimatedButton_SharedPainter_Callback cb) { kanimatedbutton_sharedpainter_callback = cb; }
    inline void setKAnimatedButton_InputMethodEvent_Callback(KAnimatedButton_InputMethodEvent_Callback cb) { kanimatedbutton_inputmethodevent_callback = cb; }
    inline void setKAnimatedButton_InputMethodQuery_Callback(KAnimatedButton_InputMethodQuery_Callback cb) { kanimatedbutton_inputmethodquery_callback = cb; }
    inline void setKAnimatedButton_FocusNextPrevChild_Callback(KAnimatedButton_FocusNextPrevChild_Callback cb) { kanimatedbutton_focusnextprevchild_callback = cb; }
    inline void setKAnimatedButton_EventFilter_Callback(KAnimatedButton_EventFilter_Callback cb) { kanimatedbutton_eventfilter_callback = cb; }
    inline void setKAnimatedButton_ChildEvent_Callback(KAnimatedButton_ChildEvent_Callback cb) { kanimatedbutton_childevent_callback = cb; }
    inline void setKAnimatedButton_CustomEvent_Callback(KAnimatedButton_CustomEvent_Callback cb) { kanimatedbutton_customevent_callback = cb; }
    inline void setKAnimatedButton_ConnectNotify_Callback(KAnimatedButton_ConnectNotify_Callback cb) { kanimatedbutton_connectnotify_callback = cb; }
    inline void setKAnimatedButton_DisconnectNotify_Callback(KAnimatedButton_DisconnectNotify_Callback cb) { kanimatedbutton_disconnectnotify_callback = cb; }
    inline void setKAnimatedButton_UpdateMicroFocus_Callback(KAnimatedButton_UpdateMicroFocus_Callback cb) { kanimatedbutton_updatemicrofocus_callback = cb; }
    inline void setKAnimatedButton_Create_Callback(KAnimatedButton_Create_Callback cb) { kanimatedbutton_create_callback = cb; }
    inline void setKAnimatedButton_Destroy_Callback(KAnimatedButton_Destroy_Callback cb) { kanimatedbutton_destroy_callback = cb; }
    inline void setKAnimatedButton_FocusNextChild_Callback(KAnimatedButton_FocusNextChild_Callback cb) { kanimatedbutton_focusnextchild_callback = cb; }
    inline void setKAnimatedButton_FocusPreviousChild_Callback(KAnimatedButton_FocusPreviousChild_Callback cb) { kanimatedbutton_focuspreviouschild_callback = cb; }
    inline void setKAnimatedButton_Sender_Callback(KAnimatedButton_Sender_Callback cb) { kanimatedbutton_sender_callback = cb; }
    inline void setKAnimatedButton_SenderSignalIndex_Callback(KAnimatedButton_SenderSignalIndex_Callback cb) { kanimatedbutton_sendersignalindex_callback = cb; }
    inline void setKAnimatedButton_Receivers_Callback(KAnimatedButton_Receivers_Callback cb) { kanimatedbutton_receivers_callback = cb; }
    inline void setKAnimatedButton_IsSignalConnected_Callback(KAnimatedButton_IsSignalConnected_Callback cb) { kanimatedbutton_issignalconnected_callback = cb; }
    inline void setKAnimatedButton_GetDecodedMetricF_Callback(KAnimatedButton_GetDecodedMetricF_Callback cb) { kanimatedbutton_getdecodedmetricf_callback = cb; }

    // Base flag setters
    inline void setKAnimatedButton_MetaObject_IsBase(bool value) const { kanimatedbutton_metaobject_isbase = value; }
    inline void setKAnimatedButton_Metacast_IsBase(bool value) const { kanimatedbutton_metacast_isbase = value; }
    inline void setKAnimatedButton_Metacall_IsBase(bool value) const { kanimatedbutton_metacall_isbase = value; }
    inline void setKAnimatedButton_SizeHint_IsBase(bool value) const { kanimatedbutton_sizehint_isbase = value; }
    inline void setKAnimatedButton_MinimumSizeHint_IsBase(bool value) const { kanimatedbutton_minimumsizehint_isbase = value; }
    inline void setKAnimatedButton_Event_IsBase(bool value) const { kanimatedbutton_event_isbase = value; }
    inline void setKAnimatedButton_MousePressEvent_IsBase(bool value) const { kanimatedbutton_mousepressevent_isbase = value; }
    inline void setKAnimatedButton_MouseReleaseEvent_IsBase(bool value) const { kanimatedbutton_mousereleaseevent_isbase = value; }
    inline void setKAnimatedButton_PaintEvent_IsBase(bool value) const { kanimatedbutton_paintevent_isbase = value; }
    inline void setKAnimatedButton_ActionEvent_IsBase(bool value) const { kanimatedbutton_actionevent_isbase = value; }
    inline void setKAnimatedButton_EnterEvent_IsBase(bool value) const { kanimatedbutton_enterevent_isbase = value; }
    inline void setKAnimatedButton_LeaveEvent_IsBase(bool value) const { kanimatedbutton_leaveevent_isbase = value; }
    inline void setKAnimatedButton_TimerEvent_IsBase(bool value) const { kanimatedbutton_timerevent_isbase = value; }
    inline void setKAnimatedButton_ChangeEvent_IsBase(bool value) const { kanimatedbutton_changeevent_isbase = value; }
    inline void setKAnimatedButton_HitButton_IsBase(bool value) const { kanimatedbutton_hitbutton_isbase = value; }
    inline void setKAnimatedButton_CheckStateSet_IsBase(bool value) const { kanimatedbutton_checkstateset_isbase = value; }
    inline void setKAnimatedButton_NextCheckState_IsBase(bool value) const { kanimatedbutton_nextcheckstate_isbase = value; }
    inline void setKAnimatedButton_InitStyleOption_IsBase(bool value) const { kanimatedbutton_initstyleoption_isbase = value; }
    inline void setKAnimatedButton_KeyPressEvent_IsBase(bool value) const { kanimatedbutton_keypressevent_isbase = value; }
    inline void setKAnimatedButton_KeyReleaseEvent_IsBase(bool value) const { kanimatedbutton_keyreleaseevent_isbase = value; }
    inline void setKAnimatedButton_MouseMoveEvent_IsBase(bool value) const { kanimatedbutton_mousemoveevent_isbase = value; }
    inline void setKAnimatedButton_FocusInEvent_IsBase(bool value) const { kanimatedbutton_focusinevent_isbase = value; }
    inline void setKAnimatedButton_FocusOutEvent_IsBase(bool value) const { kanimatedbutton_focusoutevent_isbase = value; }
    inline void setKAnimatedButton_DevType_IsBase(bool value) const { kanimatedbutton_devtype_isbase = value; }
    inline void setKAnimatedButton_SetVisible_IsBase(bool value) const { kanimatedbutton_setvisible_isbase = value; }
    inline void setKAnimatedButton_HeightForWidth_IsBase(bool value) const { kanimatedbutton_heightforwidth_isbase = value; }
    inline void setKAnimatedButton_HasHeightForWidth_IsBase(bool value) const { kanimatedbutton_hasheightforwidth_isbase = value; }
    inline void setKAnimatedButton_PaintEngine_IsBase(bool value) const { kanimatedbutton_paintengine_isbase = value; }
    inline void setKAnimatedButton_MouseDoubleClickEvent_IsBase(bool value) const { kanimatedbutton_mousedoubleclickevent_isbase = value; }
    inline void setKAnimatedButton_WheelEvent_IsBase(bool value) const { kanimatedbutton_wheelevent_isbase = value; }
    inline void setKAnimatedButton_MoveEvent_IsBase(bool value) const { kanimatedbutton_moveevent_isbase = value; }
    inline void setKAnimatedButton_ResizeEvent_IsBase(bool value) const { kanimatedbutton_resizeevent_isbase = value; }
    inline void setKAnimatedButton_CloseEvent_IsBase(bool value) const { kanimatedbutton_closeevent_isbase = value; }
    inline void setKAnimatedButton_ContextMenuEvent_IsBase(bool value) const { kanimatedbutton_contextmenuevent_isbase = value; }
    inline void setKAnimatedButton_TabletEvent_IsBase(bool value) const { kanimatedbutton_tabletevent_isbase = value; }
    inline void setKAnimatedButton_DragEnterEvent_IsBase(bool value) const { kanimatedbutton_dragenterevent_isbase = value; }
    inline void setKAnimatedButton_DragMoveEvent_IsBase(bool value) const { kanimatedbutton_dragmoveevent_isbase = value; }
    inline void setKAnimatedButton_DragLeaveEvent_IsBase(bool value) const { kanimatedbutton_dragleaveevent_isbase = value; }
    inline void setKAnimatedButton_DropEvent_IsBase(bool value) const { kanimatedbutton_dropevent_isbase = value; }
    inline void setKAnimatedButton_ShowEvent_IsBase(bool value) const { kanimatedbutton_showevent_isbase = value; }
    inline void setKAnimatedButton_HideEvent_IsBase(bool value) const { kanimatedbutton_hideevent_isbase = value; }
    inline void setKAnimatedButton_NativeEvent_IsBase(bool value) const { kanimatedbutton_nativeevent_isbase = value; }
    inline void setKAnimatedButton_Metric_IsBase(bool value) const { kanimatedbutton_metric_isbase = value; }
    inline void setKAnimatedButton_InitPainter_IsBase(bool value) const { kanimatedbutton_initpainter_isbase = value; }
    inline void setKAnimatedButton_Redirected_IsBase(bool value) const { kanimatedbutton_redirected_isbase = value; }
    inline void setKAnimatedButton_SharedPainter_IsBase(bool value) const { kanimatedbutton_sharedpainter_isbase = value; }
    inline void setKAnimatedButton_InputMethodEvent_IsBase(bool value) const { kanimatedbutton_inputmethodevent_isbase = value; }
    inline void setKAnimatedButton_InputMethodQuery_IsBase(bool value) const { kanimatedbutton_inputmethodquery_isbase = value; }
    inline void setKAnimatedButton_FocusNextPrevChild_IsBase(bool value) const { kanimatedbutton_focusnextprevchild_isbase = value; }
    inline void setKAnimatedButton_EventFilter_IsBase(bool value) const { kanimatedbutton_eventfilter_isbase = value; }
    inline void setKAnimatedButton_ChildEvent_IsBase(bool value) const { kanimatedbutton_childevent_isbase = value; }
    inline void setKAnimatedButton_CustomEvent_IsBase(bool value) const { kanimatedbutton_customevent_isbase = value; }
    inline void setKAnimatedButton_ConnectNotify_IsBase(bool value) const { kanimatedbutton_connectnotify_isbase = value; }
    inline void setKAnimatedButton_DisconnectNotify_IsBase(bool value) const { kanimatedbutton_disconnectnotify_isbase = value; }
    inline void setKAnimatedButton_UpdateMicroFocus_IsBase(bool value) const { kanimatedbutton_updatemicrofocus_isbase = value; }
    inline void setKAnimatedButton_Create_IsBase(bool value) const { kanimatedbutton_create_isbase = value; }
    inline void setKAnimatedButton_Destroy_IsBase(bool value) const { kanimatedbutton_destroy_isbase = value; }
    inline void setKAnimatedButton_FocusNextChild_IsBase(bool value) const { kanimatedbutton_focusnextchild_isbase = value; }
    inline void setKAnimatedButton_FocusPreviousChild_IsBase(bool value) const { kanimatedbutton_focuspreviouschild_isbase = value; }
    inline void setKAnimatedButton_Sender_IsBase(bool value) const { kanimatedbutton_sender_isbase = value; }
    inline void setKAnimatedButton_SenderSignalIndex_IsBase(bool value) const { kanimatedbutton_sendersignalindex_isbase = value; }
    inline void setKAnimatedButton_Receivers_IsBase(bool value) const { kanimatedbutton_receivers_isbase = value; }
    inline void setKAnimatedButton_IsSignalConnected_IsBase(bool value) const { kanimatedbutton_issignalconnected_isbase = value; }
    inline void setKAnimatedButton_GetDecodedMetricF_IsBase(bool value) const { kanimatedbutton_getdecodedmetricf_isbase = value; }

    // Virtual method for C ABI access and custom callback
    virtual const QMetaObject* metaObject() const override {
        if (kanimatedbutton_metaobject_isbase) {
            kanimatedbutton_metaobject_isbase = false;
            return KAnimatedButton::metaObject();
        }
        auto metaobject_cb = kanimatedbutton_metaobject_callback;
        if (metaobject_cb) {
            QMetaObject* callback_ret = metaobject_cb();
            return callback_ret;
        }
        return KAnimatedButton::metaObject();
    }

    // Virtual method for C ABI access and custom callback
    virtual void* qt_metacast(const char* param1) override {
        if (kanimatedbutton_metacast_isbase) {
            kanimatedbutton_metacast_isbase = false;
            return KAnimatedButton::qt_metacast(param1);
        }
        auto metacast_cb = kanimatedbutton_metacast_callback;
        if (metacast_cb) {
            const char* cbval1 = (const char*)param1;

            void* callback_ret = metacast_cb(this, cbval1);
            return callback_ret;
        }
        return KAnimatedButton::qt_metacast(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (kanimatedbutton_metacall_isbase) {
            kanimatedbutton_metacall_isbase = false;
            return KAnimatedButton::qt_metacall(param1, param2, param3);
        }
        auto metacall_cb = kanimatedbutton_metacall_callback;
        if (metacall_cb) {
            int cbval1 = static_cast<int>(param1);
            int cbval2 = param2;
            void** cbval3 = param3;

            int callback_ret = metacall_cb(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        }
        return KAnimatedButton::qt_metacall(param1, param2, param3);
    }

    // Virtual method for C ABI access and custom callback
    virtual QSize sizeHint() const override {
        if (kanimatedbutton_sizehint_isbase) {
            kanimatedbutton_sizehint_isbase = false;
            return KAnimatedButton::sizeHint();
        }
        auto sizehint_cb = kanimatedbutton_sizehint_callback;
        if (sizehint_cb) {
            QSize* callback_ret = sizehint_cb();
            return *callback_ret;
        }
        return KAnimatedButton::sizeHint();
    }

    // Virtual method for C ABI access and custom callback
    virtual QSize minimumSizeHint() const override {
        if (kanimatedbutton_minimumsizehint_isbase) {
            kanimatedbutton_minimumsizehint_isbase = false;
            return KAnimatedButton::minimumSizeHint();
        }
        auto minimumsizehint_cb = kanimatedbutton_minimumsizehint_callback;
        if (minimumsizehint_cb) {
            QSize* callback_ret = minimumsizehint_cb();
            return *callback_ret;
        }
        return KAnimatedButton::minimumSizeHint();
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* e) override {
        if (kanimatedbutton_event_isbase) {
            kanimatedbutton_event_isbase = false;
            return KAnimatedButton::event(e);
        }
        auto event_cb = kanimatedbutton_event_callback;
        if (event_cb) {
            QEvent* cbval1 = e;

            bool callback_ret = event_cb(this, cbval1);
            return callback_ret;
        }
        return KAnimatedButton::event(e);
    }

    // Virtual method for C ABI access and custom callback
    virtual void mousePressEvent(QMouseEvent* param1) override {
        if (kanimatedbutton_mousepressevent_isbase) {
            kanimatedbutton_mousepressevent_isbase = false;
            KAnimatedButton::mousePressEvent(param1);
            return;
        }
        auto mousepressevent_cb = kanimatedbutton_mousepressevent_callback;
        if (mousepressevent_cb) {
            QMouseEvent* cbval1 = param1;

            mousepressevent_cb(this, cbval1);
            return;
        }
        KAnimatedButton::mousePressEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseReleaseEvent(QMouseEvent* param1) override {
        if (kanimatedbutton_mousereleaseevent_isbase) {
            kanimatedbutton_mousereleaseevent_isbase = false;
            KAnimatedButton::mouseReleaseEvent(param1);
            return;
        }
        auto mousereleaseevent_cb = kanimatedbutton_mousereleaseevent_callback;
        if (mousereleaseevent_cb) {
            QMouseEvent* cbval1 = param1;

            mousereleaseevent_cb(this, cbval1);
            return;
        }
        KAnimatedButton::mouseReleaseEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual void paintEvent(QPaintEvent* param1) override {
        if (kanimatedbutton_paintevent_isbase) {
            kanimatedbutton_paintevent_isbase = false;
            KAnimatedButton::paintEvent(param1);
            return;
        }
        auto paintevent_cb = kanimatedbutton_paintevent_callback;
        if (paintevent_cb) {
            QPaintEvent* cbval1 = param1;

            paintevent_cb(this, cbval1);
            return;
        }
        KAnimatedButton::paintEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual void actionEvent(QActionEvent* param1) override {
        if (kanimatedbutton_actionevent_isbase) {
            kanimatedbutton_actionevent_isbase = false;
            KAnimatedButton::actionEvent(param1);
            return;
        }
        auto actionevent_cb = kanimatedbutton_actionevent_callback;
        if (actionevent_cb) {
            QActionEvent* cbval1 = param1;

            actionevent_cb(this, cbval1);
            return;
        }
        KAnimatedButton::actionEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual void enterEvent(QEnterEvent* param1) override {
        if (kanimatedbutton_enterevent_isbase) {
            kanimatedbutton_enterevent_isbase = false;
            KAnimatedButton::enterEvent(param1);
            return;
        }
        auto enterevent_cb = kanimatedbutton_enterevent_callback;
        if (enterevent_cb) {
            QEnterEvent* cbval1 = param1;

            enterevent_cb(this, cbval1);
            return;
        }
        KAnimatedButton::enterEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual void leaveEvent(QEvent* param1) override {
        if (kanimatedbutton_leaveevent_isbase) {
            kanimatedbutton_leaveevent_isbase = false;
            KAnimatedButton::leaveEvent(param1);
            return;
        }
        auto leaveevent_cb = kanimatedbutton_leaveevent_callback;
        if (leaveevent_cb) {
            QEvent* cbval1 = param1;

            leaveevent_cb(this, cbval1);
            return;
        }
        KAnimatedButton::leaveEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* param1) override {
        if (kanimatedbutton_timerevent_isbase) {
            kanimatedbutton_timerevent_isbase = false;
            KAnimatedButton::timerEvent(param1);
            return;
        }
        auto timerevent_cb = kanimatedbutton_timerevent_callback;
        if (timerevent_cb) {
            QTimerEvent* cbval1 = param1;

            timerevent_cb(this, cbval1);
            return;
        }
        KAnimatedButton::timerEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual void changeEvent(QEvent* param1) override {
        if (kanimatedbutton_changeevent_isbase) {
            kanimatedbutton_changeevent_isbase = false;
            KAnimatedButton::changeEvent(param1);
            return;
        }
        auto changeevent_cb = kanimatedbutton_changeevent_callback;
        if (changeevent_cb) {
            QEvent* cbval1 = param1;

            changeevent_cb(this, cbval1);
            return;
        }
        KAnimatedButton::changeEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool hitButton(const QPoint& pos) const override {
        if (kanimatedbutton_hitbutton_isbase) {
            kanimatedbutton_hitbutton_isbase = false;
            return KAnimatedButton::hitButton(pos);
        }
        auto hitbutton_cb = kanimatedbutton_hitbutton_callback;
        if (hitbutton_cb) {
            const QPoint& pos_ret = pos;
            // Cast returned reference into pointer
            QPoint* cbval1 = const_cast<QPoint*>(&pos_ret);

            bool callback_ret = hitbutton_cb(this, cbval1);
            return callback_ret;
        }
        return KAnimatedButton::hitButton(pos);
    }

    // Virtual method for C ABI access and custom callback
    virtual void checkStateSet() override {
        if (kanimatedbutton_checkstateset_isbase) {
            kanimatedbutton_checkstateset_isbase = false;
            KAnimatedButton::checkStateSet();
            return;
        }
        auto checkstateset_cb = kanimatedbutton_checkstateset_callback;
        if (checkstateset_cb) {
            checkstateset_cb();
            return;
        }
        KAnimatedButton::checkStateSet();
    }

    // Virtual method for C ABI access and custom callback
    virtual void nextCheckState() override {
        if (kanimatedbutton_nextcheckstate_isbase) {
            kanimatedbutton_nextcheckstate_isbase = false;
            KAnimatedButton::nextCheckState();
            return;
        }
        auto nextcheckstate_cb = kanimatedbutton_nextcheckstate_callback;
        if (nextcheckstate_cb) {
            nextcheckstate_cb();
            return;
        }
        KAnimatedButton::nextCheckState();
    }

    // Virtual method for C ABI access and custom callback
    virtual void initStyleOption(QStyleOptionToolButton* option) const override {
        if (kanimatedbutton_initstyleoption_isbase) {
            kanimatedbutton_initstyleoption_isbase = false;
            KAnimatedButton::initStyleOption(option);
            return;
        }
        auto initstyleoption_cb = kanimatedbutton_initstyleoption_callback;
        if (initstyleoption_cb) {
            QStyleOptionToolButton* cbval1 = option;

            initstyleoption_cb(this, cbval1);
            return;
        }
        KAnimatedButton::initStyleOption(option);
    }

    // Virtual method for C ABI access and custom callback
    virtual void keyPressEvent(QKeyEvent* e) override {
        if (kanimatedbutton_keypressevent_isbase) {
            kanimatedbutton_keypressevent_isbase = false;
            KAnimatedButton::keyPressEvent(e);
            return;
        }
        auto keypressevent_cb = kanimatedbutton_keypressevent_callback;
        if (keypressevent_cb) {
            QKeyEvent* cbval1 = e;

            keypressevent_cb(this, cbval1);
            return;
        }
        KAnimatedButton::keyPressEvent(e);
    }

    // Virtual method for C ABI access and custom callback
    virtual void keyReleaseEvent(QKeyEvent* e) override {
        if (kanimatedbutton_keyreleaseevent_isbase) {
            kanimatedbutton_keyreleaseevent_isbase = false;
            KAnimatedButton::keyReleaseEvent(e);
            return;
        }
        auto keyreleaseevent_cb = kanimatedbutton_keyreleaseevent_callback;
        if (keyreleaseevent_cb) {
            QKeyEvent* cbval1 = e;

            keyreleaseevent_cb(this, cbval1);
            return;
        }
        KAnimatedButton::keyReleaseEvent(e);
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseMoveEvent(QMouseEvent* e) override {
        if (kanimatedbutton_mousemoveevent_isbase) {
            kanimatedbutton_mousemoveevent_isbase = false;
            KAnimatedButton::mouseMoveEvent(e);
            return;
        }
        auto mousemoveevent_cb = kanimatedbutton_mousemoveevent_callback;
        if (mousemoveevent_cb) {
            QMouseEvent* cbval1 = e;

            mousemoveevent_cb(this, cbval1);
            return;
        }
        KAnimatedButton::mouseMoveEvent(e);
    }

    // Virtual method for C ABI access and custom callback
    virtual void focusInEvent(QFocusEvent* e) override {
        if (kanimatedbutton_focusinevent_isbase) {
            kanimatedbutton_focusinevent_isbase = false;
            KAnimatedButton::focusInEvent(e);
            return;
        }
        auto focusinevent_cb = kanimatedbutton_focusinevent_callback;
        if (focusinevent_cb) {
            QFocusEvent* cbval1 = e;

            focusinevent_cb(this, cbval1);
            return;
        }
        KAnimatedButton::focusInEvent(e);
    }

    // Virtual method for C ABI access and custom callback
    virtual void focusOutEvent(QFocusEvent* e) override {
        if (kanimatedbutton_focusoutevent_isbase) {
            kanimatedbutton_focusoutevent_isbase = false;
            KAnimatedButton::focusOutEvent(e);
            return;
        }
        auto focusoutevent_cb = kanimatedbutton_focusoutevent_callback;
        if (focusoutevent_cb) {
            QFocusEvent* cbval1 = e;

            focusoutevent_cb(this, cbval1);
            return;
        }
        KAnimatedButton::focusOutEvent(e);
    }

    // Virtual method for C ABI access and custom callback
    virtual int devType() const override {
        if (kanimatedbutton_devtype_isbase) {
            kanimatedbutton_devtype_isbase = false;
            return KAnimatedButton::devType();
        }
        auto devtype_cb = kanimatedbutton_devtype_callback;
        if (devtype_cb) {
            int callback_ret = devtype_cb();
            return static_cast<int>(callback_ret);
        }
        return KAnimatedButton::devType();
    }

    // Virtual method for C ABI access and custom callback
    virtual void setVisible(bool visible) override {
        if (kanimatedbutton_setvisible_isbase) {
            kanimatedbutton_setvisible_isbase = false;
            KAnimatedButton::setVisible(visible);
            return;
        }
        auto setvisible_cb = kanimatedbutton_setvisible_callback;
        if (setvisible_cb) {
            bool cbval1 = visible;

            setvisible_cb(this, cbval1);
            return;
        }
        KAnimatedButton::setVisible(visible);
    }

    // Virtual method for C ABI access and custom callback
    virtual int heightForWidth(int param1) const override {
        if (kanimatedbutton_heightforwidth_isbase) {
            kanimatedbutton_heightforwidth_isbase = false;
            return KAnimatedButton::heightForWidth(param1);
        }
        auto heightforwidth_cb = kanimatedbutton_heightforwidth_callback;
        if (heightforwidth_cb) {
            int cbval1 = param1;

            int callback_ret = heightforwidth_cb(this, cbval1);
            return static_cast<int>(callback_ret);
        }
        return KAnimatedButton::heightForWidth(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool hasHeightForWidth() const override {
        if (kanimatedbutton_hasheightforwidth_isbase) {
            kanimatedbutton_hasheightforwidth_isbase = false;
            return KAnimatedButton::hasHeightForWidth();
        }
        auto hasheightforwidth_cb = kanimatedbutton_hasheightforwidth_callback;
        if (hasheightforwidth_cb) {
            bool callback_ret = hasheightforwidth_cb();
            return callback_ret;
        }
        return KAnimatedButton::hasHeightForWidth();
    }

    // Virtual method for C ABI access and custom callback
    virtual QPaintEngine* paintEngine() const override {
        if (kanimatedbutton_paintengine_isbase) {
            kanimatedbutton_paintengine_isbase = false;
            return KAnimatedButton::paintEngine();
        }
        auto paintengine_cb = kanimatedbutton_paintengine_callback;
        if (paintengine_cb) {
            QPaintEngine* callback_ret = paintengine_cb();
            return callback_ret;
        }
        return KAnimatedButton::paintEngine();
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseDoubleClickEvent(QMouseEvent* event) override {
        if (kanimatedbutton_mousedoubleclickevent_isbase) {
            kanimatedbutton_mousedoubleclickevent_isbase = false;
            KAnimatedButton::mouseDoubleClickEvent(event);
            return;
        }
        auto mousedoubleclickevent_cb = kanimatedbutton_mousedoubleclickevent_callback;
        if (mousedoubleclickevent_cb) {
            QMouseEvent* cbval1 = event;

            mousedoubleclickevent_cb(this, cbval1);
            return;
        }
        KAnimatedButton::mouseDoubleClickEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void wheelEvent(QWheelEvent* event) override {
        if (kanimatedbutton_wheelevent_isbase) {
            kanimatedbutton_wheelevent_isbase = false;
            KAnimatedButton::wheelEvent(event);
            return;
        }
        auto wheelevent_cb = kanimatedbutton_wheelevent_callback;
        if (wheelevent_cb) {
            QWheelEvent* cbval1 = event;

            wheelevent_cb(this, cbval1);
            return;
        }
        KAnimatedButton::wheelEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void moveEvent(QMoveEvent* event) override {
        if (kanimatedbutton_moveevent_isbase) {
            kanimatedbutton_moveevent_isbase = false;
            KAnimatedButton::moveEvent(event);
            return;
        }
        auto moveevent_cb = kanimatedbutton_moveevent_callback;
        if (moveevent_cb) {
            QMoveEvent* cbval1 = event;

            moveevent_cb(this, cbval1);
            return;
        }
        KAnimatedButton::moveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void resizeEvent(QResizeEvent* event) override {
        if (kanimatedbutton_resizeevent_isbase) {
            kanimatedbutton_resizeevent_isbase = false;
            KAnimatedButton::resizeEvent(event);
            return;
        }
        auto resizeevent_cb = kanimatedbutton_resizeevent_callback;
        if (resizeevent_cb) {
            QResizeEvent* cbval1 = event;

            resizeevent_cb(this, cbval1);
            return;
        }
        KAnimatedButton::resizeEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void closeEvent(QCloseEvent* event) override {
        if (kanimatedbutton_closeevent_isbase) {
            kanimatedbutton_closeevent_isbase = false;
            KAnimatedButton::closeEvent(event);
            return;
        }
        auto closeevent_cb = kanimatedbutton_closeevent_callback;
        if (closeevent_cb) {
            QCloseEvent* cbval1 = event;

            closeevent_cb(this, cbval1);
            return;
        }
        KAnimatedButton::closeEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void contextMenuEvent(QContextMenuEvent* event) override {
        if (kanimatedbutton_contextmenuevent_isbase) {
            kanimatedbutton_contextmenuevent_isbase = false;
            KAnimatedButton::contextMenuEvent(event);
            return;
        }
        auto contextmenuevent_cb = kanimatedbutton_contextmenuevent_callback;
        if (contextmenuevent_cb) {
            QContextMenuEvent* cbval1 = event;

            contextmenuevent_cb(this, cbval1);
            return;
        }
        KAnimatedButton::contextMenuEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void tabletEvent(QTabletEvent* event) override {
        if (kanimatedbutton_tabletevent_isbase) {
            kanimatedbutton_tabletevent_isbase = false;
            KAnimatedButton::tabletEvent(event);
            return;
        }
        auto tabletevent_cb = kanimatedbutton_tabletevent_callback;
        if (tabletevent_cb) {
            QTabletEvent* cbval1 = event;

            tabletevent_cb(this, cbval1);
            return;
        }
        KAnimatedButton::tabletEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragEnterEvent(QDragEnterEvent* event) override {
        if (kanimatedbutton_dragenterevent_isbase) {
            kanimatedbutton_dragenterevent_isbase = false;
            KAnimatedButton::dragEnterEvent(event);
            return;
        }
        auto dragenterevent_cb = kanimatedbutton_dragenterevent_callback;
        if (dragenterevent_cb) {
            QDragEnterEvent* cbval1 = event;

            dragenterevent_cb(this, cbval1);
            return;
        }
        KAnimatedButton::dragEnterEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragMoveEvent(QDragMoveEvent* event) override {
        if (kanimatedbutton_dragmoveevent_isbase) {
            kanimatedbutton_dragmoveevent_isbase = false;
            KAnimatedButton::dragMoveEvent(event);
            return;
        }
        auto dragmoveevent_cb = kanimatedbutton_dragmoveevent_callback;
        if (dragmoveevent_cb) {
            QDragMoveEvent* cbval1 = event;

            dragmoveevent_cb(this, cbval1);
            return;
        }
        KAnimatedButton::dragMoveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragLeaveEvent(QDragLeaveEvent* event) override {
        if (kanimatedbutton_dragleaveevent_isbase) {
            kanimatedbutton_dragleaveevent_isbase = false;
            KAnimatedButton::dragLeaveEvent(event);
            return;
        }
        auto dragleaveevent_cb = kanimatedbutton_dragleaveevent_callback;
        if (dragleaveevent_cb) {
            QDragLeaveEvent* cbval1 = event;

            dragleaveevent_cb(this, cbval1);
            return;
        }
        KAnimatedButton::dragLeaveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void dropEvent(QDropEvent* event) override {
        if (kanimatedbutton_dropevent_isbase) {
            kanimatedbutton_dropevent_isbase = false;
            KAnimatedButton::dropEvent(event);
            return;
        }
        auto dropevent_cb = kanimatedbutton_dropevent_callback;
        if (dropevent_cb) {
            QDropEvent* cbval1 = event;

            dropevent_cb(this, cbval1);
            return;
        }
        KAnimatedButton::dropEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void showEvent(QShowEvent* event) override {
        if (kanimatedbutton_showevent_isbase) {
            kanimatedbutton_showevent_isbase = false;
            KAnimatedButton::showEvent(event);
            return;
        }
        auto showevent_cb = kanimatedbutton_showevent_callback;
        if (showevent_cb) {
            QShowEvent* cbval1 = event;

            showevent_cb(this, cbval1);
            return;
        }
        KAnimatedButton::showEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void hideEvent(QHideEvent* event) override {
        if (kanimatedbutton_hideevent_isbase) {
            kanimatedbutton_hideevent_isbase = false;
            KAnimatedButton::hideEvent(event);
            return;
        }
        auto hideevent_cb = kanimatedbutton_hideevent_callback;
        if (hideevent_cb) {
            QHideEvent* cbval1 = event;

            hideevent_cb(this, cbval1);
            return;
        }
        KAnimatedButton::hideEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool nativeEvent(const QByteArray& eventType, void* message, qintptr* result) override {
        if (kanimatedbutton_nativeevent_isbase) {
            kanimatedbutton_nativeevent_isbase = false;
            return KAnimatedButton::nativeEvent(eventType, message, result);
        }
        auto nativeevent_cb = kanimatedbutton_nativeevent_callback;
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
        return KAnimatedButton::nativeEvent(eventType, message, result);
    }

    // Virtual method for C ABI access and custom callback
    virtual int metric(QPaintDevice::PaintDeviceMetric param1) const override {
        if (kanimatedbutton_metric_isbase) {
            kanimatedbutton_metric_isbase = false;
            return KAnimatedButton::metric(param1);
        }
        auto metric_cb = kanimatedbutton_metric_callback;
        if (metric_cb) {
            int cbval1 = static_cast<int>(param1);

            int callback_ret = metric_cb(this, cbval1);
            return static_cast<int>(callback_ret);
        }
        return KAnimatedButton::metric(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual void initPainter(QPainter* painter) const override {
        if (kanimatedbutton_initpainter_isbase) {
            kanimatedbutton_initpainter_isbase = false;
            KAnimatedButton::initPainter(painter);
            return;
        }
        auto initpainter_cb = kanimatedbutton_initpainter_callback;
        if (initpainter_cb) {
            QPainter* cbval1 = painter;

            initpainter_cb(this, cbval1);
            return;
        }
        KAnimatedButton::initPainter(painter);
    }

    // Virtual method for C ABI access and custom callback
    virtual QPaintDevice* redirected(QPoint* offset) const override {
        if (kanimatedbutton_redirected_isbase) {
            kanimatedbutton_redirected_isbase = false;
            return KAnimatedButton::redirected(offset);
        }
        auto redirected_cb = kanimatedbutton_redirected_callback;
        if (redirected_cb) {
            QPoint* cbval1 = offset;

            QPaintDevice* callback_ret = redirected_cb(this, cbval1);
            return callback_ret;
        }
        return KAnimatedButton::redirected(offset);
    }

    // Virtual method for C ABI access and custom callback
    virtual QPainter* sharedPainter() const override {
        if (kanimatedbutton_sharedpainter_isbase) {
            kanimatedbutton_sharedpainter_isbase = false;
            return KAnimatedButton::sharedPainter();
        }
        auto sharedpainter_cb = kanimatedbutton_sharedpainter_callback;
        if (sharedpainter_cb) {
            QPainter* callback_ret = sharedpainter_cb();
            return callback_ret;
        }
        return KAnimatedButton::sharedPainter();
    }

    // Virtual method for C ABI access and custom callback
    virtual void inputMethodEvent(QInputMethodEvent* param1) override {
        if (kanimatedbutton_inputmethodevent_isbase) {
            kanimatedbutton_inputmethodevent_isbase = false;
            KAnimatedButton::inputMethodEvent(param1);
            return;
        }
        auto inputmethodevent_cb = kanimatedbutton_inputmethodevent_callback;
        if (inputmethodevent_cb) {
            QInputMethodEvent* cbval1 = param1;

            inputmethodevent_cb(this, cbval1);
            return;
        }
        KAnimatedButton::inputMethodEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual QVariant inputMethodQuery(Qt::InputMethodQuery param1) const override {
        if (kanimatedbutton_inputmethodquery_isbase) {
            kanimatedbutton_inputmethodquery_isbase = false;
            return KAnimatedButton::inputMethodQuery(param1);
        }
        auto inputmethodquery_cb = kanimatedbutton_inputmethodquery_callback;
        if (inputmethodquery_cb) {
            int cbval1 = static_cast<int>(param1);

            QVariant* callback_ret = inputmethodquery_cb(this, cbval1);
            return *callback_ret;
        }
        return KAnimatedButton::inputMethodQuery(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool focusNextPrevChild(bool next) override {
        if (kanimatedbutton_focusnextprevchild_isbase) {
            kanimatedbutton_focusnextprevchild_isbase = false;
            return KAnimatedButton::focusNextPrevChild(next);
        }
        auto focusnextprevchild_cb = kanimatedbutton_focusnextprevchild_callback;
        if (focusnextprevchild_cb) {
            bool cbval1 = next;

            bool callback_ret = focusnextprevchild_cb(this, cbval1);
            return callback_ret;
        }
        return KAnimatedButton::focusNextPrevChild(next);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* watched, QEvent* event) override {
        if (kanimatedbutton_eventfilter_isbase) {
            kanimatedbutton_eventfilter_isbase = false;
            return KAnimatedButton::eventFilter(watched, event);
        }
        auto eventfilter_cb = kanimatedbutton_eventfilter_callback;
        if (eventfilter_cb) {
            QObject* cbval1 = watched;
            QEvent* cbval2 = event;

            bool callback_ret = eventfilter_cb(this, cbval1, cbval2);
            return callback_ret;
        }
        return KAnimatedButton::eventFilter(watched, event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (kanimatedbutton_childevent_isbase) {
            kanimatedbutton_childevent_isbase = false;
            KAnimatedButton::childEvent(event);
            return;
        }
        auto childevent_cb = kanimatedbutton_childevent_callback;
        if (childevent_cb) {
            QChildEvent* cbval1 = event;

            childevent_cb(this, cbval1);
            return;
        }
        KAnimatedButton::childEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (kanimatedbutton_customevent_isbase) {
            kanimatedbutton_customevent_isbase = false;
            KAnimatedButton::customEvent(event);
            return;
        }
        auto customevent_cb = kanimatedbutton_customevent_callback;
        if (customevent_cb) {
            QEvent* cbval1 = event;

            customevent_cb(this, cbval1);
            return;
        }
        KAnimatedButton::customEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (kanimatedbutton_connectnotify_isbase) {
            kanimatedbutton_connectnotify_isbase = false;
            KAnimatedButton::connectNotify(signal);
            return;
        }
        auto connectnotify_cb = kanimatedbutton_connectnotify_callback;
        if (connectnotify_cb) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            connectnotify_cb(this, cbval1);
            return;
        }
        KAnimatedButton::connectNotify(signal);
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (kanimatedbutton_disconnectnotify_isbase) {
            kanimatedbutton_disconnectnotify_isbase = false;
            KAnimatedButton::disconnectNotify(signal);
            return;
        }
        auto disconnectnotify_cb = kanimatedbutton_disconnectnotify_callback;
        if (disconnectnotify_cb) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            disconnectnotify_cb(this, cbval1);
            return;
        }
        KAnimatedButton::disconnectNotify(signal);
    }

    // Virtual method for C ABI access and custom callback
    void updateMicroFocus() {
        if (kanimatedbutton_updatemicrofocus_isbase) {
            kanimatedbutton_updatemicrofocus_isbase = false;
            KAnimatedButton::updateMicroFocus();
            return;
        }
        auto updatemicrofocus_cb = kanimatedbutton_updatemicrofocus_callback;
        if (updatemicrofocus_cb) {
            updatemicrofocus_cb();
            return;
        }
        KAnimatedButton::updateMicroFocus();
    }

    // Virtual method for C ABI access and custom callback
    void create() {
        if (kanimatedbutton_create_isbase) {
            kanimatedbutton_create_isbase = false;
            KAnimatedButton::create();
            return;
        }
        auto create_cb = kanimatedbutton_create_callback;
        if (create_cb) {
            create_cb();
            return;
        }
        KAnimatedButton::create();
    }

    // Virtual method for C ABI access and custom callback
    void destroy() {
        if (kanimatedbutton_destroy_isbase) {
            kanimatedbutton_destroy_isbase = false;
            KAnimatedButton::destroy();
            return;
        }
        auto destroy_cb = kanimatedbutton_destroy_callback;
        if (destroy_cb) {
            destroy_cb();
            return;
        }
        KAnimatedButton::destroy();
    }

    // Virtual method for C ABI access and custom callback
    bool focusNextChild() {
        if (kanimatedbutton_focusnextchild_isbase) {
            kanimatedbutton_focusnextchild_isbase = false;
            return KAnimatedButton::focusNextChild();
        }
        auto focusnextchild_cb = kanimatedbutton_focusnextchild_callback;
        if (focusnextchild_cb) {
            bool callback_ret = focusnextchild_cb();
            return callback_ret;
        }
        return KAnimatedButton::focusNextChild();
    }

    // Virtual method for C ABI access and custom callback
    bool focusPreviousChild() {
        if (kanimatedbutton_focuspreviouschild_isbase) {
            kanimatedbutton_focuspreviouschild_isbase = false;
            return KAnimatedButton::focusPreviousChild();
        }
        auto focuspreviouschild_cb = kanimatedbutton_focuspreviouschild_callback;
        if (focuspreviouschild_cb) {
            bool callback_ret = focuspreviouschild_cb();
            return callback_ret;
        }
        return KAnimatedButton::focusPreviousChild();
    }

    // Virtual method for C ABI access and custom callback
    QObject* sender() const {
        if (kanimatedbutton_sender_isbase) {
            kanimatedbutton_sender_isbase = false;
            return KAnimatedButton::sender();
        }
        auto sender_cb = kanimatedbutton_sender_callback;
        if (sender_cb) {
            QObject* callback_ret = sender_cb();
            return callback_ret;
        }
        return KAnimatedButton::sender();
    }

    // Virtual method for C ABI access and custom callback
    int senderSignalIndex() const {
        if (kanimatedbutton_sendersignalindex_isbase) {
            kanimatedbutton_sendersignalindex_isbase = false;
            return KAnimatedButton::senderSignalIndex();
        }
        auto sendersignalindex_cb = kanimatedbutton_sendersignalindex_callback;
        if (sendersignalindex_cb) {
            int callback_ret = sendersignalindex_cb();
            return static_cast<int>(callback_ret);
        }
        return KAnimatedButton::senderSignalIndex();
    }

    // Virtual method for C ABI access and custom callback
    int receivers(const char* signal) const {
        if (kanimatedbutton_receivers_isbase) {
            kanimatedbutton_receivers_isbase = false;
            return KAnimatedButton::receivers(signal);
        }
        auto receivers_cb = kanimatedbutton_receivers_callback;
        if (receivers_cb) {
            const char* cbval1 = (const char*)signal;

            int callback_ret = receivers_cb(this, cbval1);
            return static_cast<int>(callback_ret);
        }
        return KAnimatedButton::receivers(signal);
    }

    // Virtual method for C ABI access and custom callback
    bool isSignalConnected(const QMetaMethod& signal) const {
        if (kanimatedbutton_issignalconnected_isbase) {
            kanimatedbutton_issignalconnected_isbase = false;
            return KAnimatedButton::isSignalConnected(signal);
        }
        auto issignalconnected_cb = kanimatedbutton_issignalconnected_callback;
        if (issignalconnected_cb) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            bool callback_ret = issignalconnected_cb(this, cbval1);
            return callback_ret;
        }
        return KAnimatedButton::isSignalConnected(signal);
    }

    // Virtual method for C ABI access and custom callback
    double getDecodedMetricF(QPaintDevice::PaintDeviceMetric metricA, QPaintDevice::PaintDeviceMetric metricB) const {
        if (kanimatedbutton_getdecodedmetricf_isbase) {
            kanimatedbutton_getdecodedmetricf_isbase = false;
            return KAnimatedButton::getDecodedMetricF(metricA, metricB);
        }
        auto getdecodedmetricf_cb = kanimatedbutton_getdecodedmetricf_callback;
        if (getdecodedmetricf_cb) {
            int cbval1 = static_cast<int>(metricA);
            int cbval2 = static_cast<int>(metricB);

            double callback_ret = getdecodedmetricf_cb(this, cbval1, cbval2);
            return static_cast<double>(callback_ret);
        }
        return KAnimatedButton::getDecodedMetricF(metricA, metricB);
    }

    // Friend functions
    friend bool KAnimatedButton_Event(KAnimatedButton* self, QEvent* e);
    friend bool KAnimatedButton_SuperEvent(KAnimatedButton* self, QEvent* e);
    friend void KAnimatedButton_MousePressEvent(KAnimatedButton* self, QMouseEvent* param1);
    friend void KAnimatedButton_SuperMousePressEvent(KAnimatedButton* self, QMouseEvent* param1);
    friend void KAnimatedButton_MouseReleaseEvent(KAnimatedButton* self, QMouseEvent* param1);
    friend void KAnimatedButton_SuperMouseReleaseEvent(KAnimatedButton* self, QMouseEvent* param1);
    friend void KAnimatedButton_PaintEvent(KAnimatedButton* self, QPaintEvent* param1);
    friend void KAnimatedButton_SuperPaintEvent(KAnimatedButton* self, QPaintEvent* param1);
    friend void KAnimatedButton_ActionEvent(KAnimatedButton* self, QActionEvent* param1);
    friend void KAnimatedButton_SuperActionEvent(KAnimatedButton* self, QActionEvent* param1);
    friend void KAnimatedButton_EnterEvent(KAnimatedButton* self, QEnterEvent* param1);
    friend void KAnimatedButton_SuperEnterEvent(KAnimatedButton* self, QEnterEvent* param1);
    friend void KAnimatedButton_LeaveEvent(KAnimatedButton* self, QEvent* param1);
    friend void KAnimatedButton_SuperLeaveEvent(KAnimatedButton* self, QEvent* param1);
    friend void KAnimatedButton_TimerEvent(KAnimatedButton* self, QTimerEvent* param1);
    friend void KAnimatedButton_SuperTimerEvent(KAnimatedButton* self, QTimerEvent* param1);
    friend void KAnimatedButton_ChangeEvent(KAnimatedButton* self, QEvent* param1);
    friend void KAnimatedButton_SuperChangeEvent(KAnimatedButton* self, QEvent* param1);
    friend bool KAnimatedButton_HitButton(const KAnimatedButton* self, const QPoint* pos);
    friend bool KAnimatedButton_SuperHitButton(const KAnimatedButton* self, const QPoint* pos);
    friend void KAnimatedButton_CheckStateSet(KAnimatedButton* self);
    friend void KAnimatedButton_SuperCheckStateSet(KAnimatedButton* self);
    friend void KAnimatedButton_NextCheckState(KAnimatedButton* self);
    friend void KAnimatedButton_SuperNextCheckState(KAnimatedButton* self);
    friend void KAnimatedButton_InitStyleOption(const KAnimatedButton* self, QStyleOptionToolButton* option);
    friend void KAnimatedButton_SuperInitStyleOption(const KAnimatedButton* self, QStyleOptionToolButton* option);
    friend void KAnimatedButton_KeyPressEvent(KAnimatedButton* self, QKeyEvent* e);
    friend void KAnimatedButton_SuperKeyPressEvent(KAnimatedButton* self, QKeyEvent* e);
    friend void KAnimatedButton_KeyReleaseEvent(KAnimatedButton* self, QKeyEvent* e);
    friend void KAnimatedButton_SuperKeyReleaseEvent(KAnimatedButton* self, QKeyEvent* e);
    friend void KAnimatedButton_MouseMoveEvent(KAnimatedButton* self, QMouseEvent* e);
    friend void KAnimatedButton_SuperMouseMoveEvent(KAnimatedButton* self, QMouseEvent* e);
    friend void KAnimatedButton_FocusInEvent(KAnimatedButton* self, QFocusEvent* e);
    friend void KAnimatedButton_SuperFocusInEvent(KAnimatedButton* self, QFocusEvent* e);
    friend void KAnimatedButton_FocusOutEvent(KAnimatedButton* self, QFocusEvent* e);
    friend void KAnimatedButton_SuperFocusOutEvent(KAnimatedButton* self, QFocusEvent* e);
    friend void KAnimatedButton_MouseDoubleClickEvent(KAnimatedButton* self, QMouseEvent* event);
    friend void KAnimatedButton_SuperMouseDoubleClickEvent(KAnimatedButton* self, QMouseEvent* event);
    friend void KAnimatedButton_WheelEvent(KAnimatedButton* self, QWheelEvent* event);
    friend void KAnimatedButton_SuperWheelEvent(KAnimatedButton* self, QWheelEvent* event);
    friend void KAnimatedButton_MoveEvent(KAnimatedButton* self, QMoveEvent* event);
    friend void KAnimatedButton_SuperMoveEvent(KAnimatedButton* self, QMoveEvent* event);
    friend void KAnimatedButton_ResizeEvent(KAnimatedButton* self, QResizeEvent* event);
    friend void KAnimatedButton_SuperResizeEvent(KAnimatedButton* self, QResizeEvent* event);
    friend void KAnimatedButton_CloseEvent(KAnimatedButton* self, QCloseEvent* event);
    friend void KAnimatedButton_SuperCloseEvent(KAnimatedButton* self, QCloseEvent* event);
    friend void KAnimatedButton_ContextMenuEvent(KAnimatedButton* self, QContextMenuEvent* event);
    friend void KAnimatedButton_SuperContextMenuEvent(KAnimatedButton* self, QContextMenuEvent* event);
    friend void KAnimatedButton_TabletEvent(KAnimatedButton* self, QTabletEvent* event);
    friend void KAnimatedButton_SuperTabletEvent(KAnimatedButton* self, QTabletEvent* event);
    friend void KAnimatedButton_DragEnterEvent(KAnimatedButton* self, QDragEnterEvent* event);
    friend void KAnimatedButton_SuperDragEnterEvent(KAnimatedButton* self, QDragEnterEvent* event);
    friend void KAnimatedButton_DragMoveEvent(KAnimatedButton* self, QDragMoveEvent* event);
    friend void KAnimatedButton_SuperDragMoveEvent(KAnimatedButton* self, QDragMoveEvent* event);
    friend void KAnimatedButton_DragLeaveEvent(KAnimatedButton* self, QDragLeaveEvent* event);
    friend void KAnimatedButton_SuperDragLeaveEvent(KAnimatedButton* self, QDragLeaveEvent* event);
    friend void KAnimatedButton_DropEvent(KAnimatedButton* self, QDropEvent* event);
    friend void KAnimatedButton_SuperDropEvent(KAnimatedButton* self, QDropEvent* event);
    friend void KAnimatedButton_ShowEvent(KAnimatedButton* self, QShowEvent* event);
    friend void KAnimatedButton_SuperShowEvent(KAnimatedButton* self, QShowEvent* event);
    friend void KAnimatedButton_HideEvent(KAnimatedButton* self, QHideEvent* event);
    friend void KAnimatedButton_SuperHideEvent(KAnimatedButton* self, QHideEvent* event);
    friend bool KAnimatedButton_NativeEvent(KAnimatedButton* self, const libqt_string eventType, void* message, intptr_t* result);
    friend bool KAnimatedButton_SuperNativeEvent(KAnimatedButton* self, const libqt_string eventType, void* message, intptr_t* result);
    friend int KAnimatedButton_Metric(const KAnimatedButton* self, int param1);
    friend int KAnimatedButton_SuperMetric(const KAnimatedButton* self, int param1);
    friend void KAnimatedButton_InitPainter(const KAnimatedButton* self, QPainter* painter);
    friend void KAnimatedButton_SuperInitPainter(const KAnimatedButton* self, QPainter* painter);
    friend QPaintDevice* KAnimatedButton_Redirected(const KAnimatedButton* self, QPoint* offset);
    friend QPaintDevice* KAnimatedButton_SuperRedirected(const KAnimatedButton* self, QPoint* offset);
    friend QPainter* KAnimatedButton_SharedPainter(const KAnimatedButton* self);
    friend QPainter* KAnimatedButton_SuperSharedPainter(const KAnimatedButton* self);
    friend void KAnimatedButton_InputMethodEvent(KAnimatedButton* self, QInputMethodEvent* param1);
    friend void KAnimatedButton_SuperInputMethodEvent(KAnimatedButton* self, QInputMethodEvent* param1);
    friend bool KAnimatedButton_FocusNextPrevChild(KAnimatedButton* self, bool next);
    friend bool KAnimatedButton_SuperFocusNextPrevChild(KAnimatedButton* self, bool next);
    friend void KAnimatedButton_ChildEvent(KAnimatedButton* self, QChildEvent* event);
    friend void KAnimatedButton_SuperChildEvent(KAnimatedButton* self, QChildEvent* event);
    friend void KAnimatedButton_CustomEvent(KAnimatedButton* self, QEvent* event);
    friend void KAnimatedButton_SuperCustomEvent(KAnimatedButton* self, QEvent* event);
    friend void KAnimatedButton_ConnectNotify(KAnimatedButton* self, const QMetaMethod* signal);
    friend void KAnimatedButton_SuperConnectNotify(KAnimatedButton* self, const QMetaMethod* signal);
    friend void KAnimatedButton_DisconnectNotify(KAnimatedButton* self, const QMetaMethod* signal);
    friend void KAnimatedButton_SuperDisconnectNotify(KAnimatedButton* self, const QMetaMethod* signal);
    friend void KAnimatedButton_UpdateMicroFocus(KAnimatedButton* self);
    friend void KAnimatedButton_SuperUpdateMicroFocus(KAnimatedButton* self);
    friend void KAnimatedButton_Create(KAnimatedButton* self);
    friend void KAnimatedButton_SuperCreate(KAnimatedButton* self);
    friend void KAnimatedButton_Destroy(KAnimatedButton* self);
    friend void KAnimatedButton_SuperDestroy(KAnimatedButton* self);
    friend bool KAnimatedButton_FocusNextChild(KAnimatedButton* self);
    friend bool KAnimatedButton_SuperFocusNextChild(KAnimatedButton* self);
    friend bool KAnimatedButton_FocusPreviousChild(KAnimatedButton* self);
    friend bool KAnimatedButton_SuperFocusPreviousChild(KAnimatedButton* self);
    friend QObject* KAnimatedButton_Sender(const KAnimatedButton* self);
    friend QObject* KAnimatedButton_SuperSender(const KAnimatedButton* self);
    friend int KAnimatedButton_SenderSignalIndex(const KAnimatedButton* self);
    friend int KAnimatedButton_SuperSenderSignalIndex(const KAnimatedButton* self);
    friend int KAnimatedButton_Receivers(const KAnimatedButton* self, const char* signal);
    friend int KAnimatedButton_SuperReceivers(const KAnimatedButton* self, const char* signal);
    friend bool KAnimatedButton_IsSignalConnected(const KAnimatedButton* self, const QMetaMethod* signal);
    friend bool KAnimatedButton_SuperIsSignalConnected(const KAnimatedButton* self, const QMetaMethod* signal);
    friend double KAnimatedButton_GetDecodedMetricF(const KAnimatedButton* self, int metricA, int metricB);
    friend double KAnimatedButton_SuperGetDecodedMetricF(const KAnimatedButton* self, int metricA, int metricB);
};

#endif
