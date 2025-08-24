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

    ~VirtualKAnimatedButton() {
        kanimatedbutton_metacall_callback = nullptr;
        kanimatedbutton_sizehint_callback = nullptr;
        kanimatedbutton_minimumsizehint_callback = nullptr;
        kanimatedbutton_event_callback = nullptr;
        kanimatedbutton_mousepressevent_callback = nullptr;
        kanimatedbutton_mousereleaseevent_callback = nullptr;
        kanimatedbutton_paintevent_callback = nullptr;
        kanimatedbutton_actionevent_callback = nullptr;
        kanimatedbutton_enterevent_callback = nullptr;
        kanimatedbutton_leaveevent_callback = nullptr;
        kanimatedbutton_timerevent_callback = nullptr;
        kanimatedbutton_changeevent_callback = nullptr;
        kanimatedbutton_hitbutton_callback = nullptr;
        kanimatedbutton_checkstateset_callback = nullptr;
        kanimatedbutton_nextcheckstate_callback = nullptr;
        kanimatedbutton_initstyleoption_callback = nullptr;
        kanimatedbutton_keypressevent_callback = nullptr;
        kanimatedbutton_keyreleaseevent_callback = nullptr;
        kanimatedbutton_mousemoveevent_callback = nullptr;
        kanimatedbutton_focusinevent_callback = nullptr;
        kanimatedbutton_focusoutevent_callback = nullptr;
        kanimatedbutton_devtype_callback = nullptr;
        kanimatedbutton_setvisible_callback = nullptr;
        kanimatedbutton_heightforwidth_callback = nullptr;
        kanimatedbutton_hasheightforwidth_callback = nullptr;
        kanimatedbutton_paintengine_callback = nullptr;
        kanimatedbutton_mousedoubleclickevent_callback = nullptr;
        kanimatedbutton_wheelevent_callback = nullptr;
        kanimatedbutton_moveevent_callback = nullptr;
        kanimatedbutton_resizeevent_callback = nullptr;
        kanimatedbutton_closeevent_callback = nullptr;
        kanimatedbutton_contextmenuevent_callback = nullptr;
        kanimatedbutton_tabletevent_callback = nullptr;
        kanimatedbutton_dragenterevent_callback = nullptr;
        kanimatedbutton_dragmoveevent_callback = nullptr;
        kanimatedbutton_dragleaveevent_callback = nullptr;
        kanimatedbutton_dropevent_callback = nullptr;
        kanimatedbutton_showevent_callback = nullptr;
        kanimatedbutton_hideevent_callback = nullptr;
        kanimatedbutton_nativeevent_callback = nullptr;
        kanimatedbutton_metric_callback = nullptr;
        kanimatedbutton_initpainter_callback = nullptr;
        kanimatedbutton_redirected_callback = nullptr;
        kanimatedbutton_sharedpainter_callback = nullptr;
        kanimatedbutton_inputmethodevent_callback = nullptr;
        kanimatedbutton_inputmethodquery_callback = nullptr;
        kanimatedbutton_focusnextprevchild_callback = nullptr;
        kanimatedbutton_eventfilter_callback = nullptr;
        kanimatedbutton_childevent_callback = nullptr;
        kanimatedbutton_customevent_callback = nullptr;
        kanimatedbutton_connectnotify_callback = nullptr;
        kanimatedbutton_disconnectnotify_callback = nullptr;
        kanimatedbutton_updatemicrofocus_callback = nullptr;
        kanimatedbutton_create_callback = nullptr;
        kanimatedbutton_destroy_callback = nullptr;
        kanimatedbutton_focusnextchild_callback = nullptr;
        kanimatedbutton_focuspreviouschild_callback = nullptr;
        kanimatedbutton_sender_callback = nullptr;
        kanimatedbutton_sendersignalindex_callback = nullptr;
        kanimatedbutton_receivers_callback = nullptr;
        kanimatedbutton_issignalconnected_callback = nullptr;
        kanimatedbutton_getdecodedmetricf_callback = nullptr;
    }

    // Callback setters
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
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (kanimatedbutton_metacall_isbase) {
            kanimatedbutton_metacall_isbase = false;
            return KAnimatedButton::qt_metacall(param1, param2, param3);
        } else if (kanimatedbutton_metacall_callback != nullptr) {
            int cbval1 = static_cast<int>(param1);
            int cbval2 = param2;
            void** cbval3 = param3;

            int callback_ret = kanimatedbutton_metacall_callback(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        } else {
            return KAnimatedButton::qt_metacall(param1, param2, param3);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QSize sizeHint() const override {
        if (kanimatedbutton_sizehint_isbase) {
            kanimatedbutton_sizehint_isbase = false;
            return KAnimatedButton::sizeHint();
        } else if (kanimatedbutton_sizehint_callback != nullptr) {
            QSize* callback_ret = kanimatedbutton_sizehint_callback();
            return *callback_ret;
        } else {
            return KAnimatedButton::sizeHint();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QSize minimumSizeHint() const override {
        if (kanimatedbutton_minimumsizehint_isbase) {
            kanimatedbutton_minimumsizehint_isbase = false;
            return KAnimatedButton::minimumSizeHint();
        } else if (kanimatedbutton_minimumsizehint_callback != nullptr) {
            QSize* callback_ret = kanimatedbutton_minimumsizehint_callback();
            return *callback_ret;
        } else {
            return KAnimatedButton::minimumSizeHint();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* e) override {
        if (kanimatedbutton_event_isbase) {
            kanimatedbutton_event_isbase = false;
            return KAnimatedButton::event(e);
        } else if (kanimatedbutton_event_callback != nullptr) {
            QEvent* cbval1 = e;

            bool callback_ret = kanimatedbutton_event_callback(this, cbval1);
            return callback_ret;
        } else {
            return KAnimatedButton::event(e);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void mousePressEvent(QMouseEvent* param1) override {
        if (kanimatedbutton_mousepressevent_isbase) {
            kanimatedbutton_mousepressevent_isbase = false;
            KAnimatedButton::mousePressEvent(param1);
        } else if (kanimatedbutton_mousepressevent_callback != nullptr) {
            QMouseEvent* cbval1 = param1;

            kanimatedbutton_mousepressevent_callback(this, cbval1);
        } else {
            KAnimatedButton::mousePressEvent(param1);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseReleaseEvent(QMouseEvent* param1) override {
        if (kanimatedbutton_mousereleaseevent_isbase) {
            kanimatedbutton_mousereleaseevent_isbase = false;
            KAnimatedButton::mouseReleaseEvent(param1);
        } else if (kanimatedbutton_mousereleaseevent_callback != nullptr) {
            QMouseEvent* cbval1 = param1;

            kanimatedbutton_mousereleaseevent_callback(this, cbval1);
        } else {
            KAnimatedButton::mouseReleaseEvent(param1);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void paintEvent(QPaintEvent* param1) override {
        if (kanimatedbutton_paintevent_isbase) {
            kanimatedbutton_paintevent_isbase = false;
            KAnimatedButton::paintEvent(param1);
        } else if (kanimatedbutton_paintevent_callback != nullptr) {
            QPaintEvent* cbval1 = param1;

            kanimatedbutton_paintevent_callback(this, cbval1);
        } else {
            KAnimatedButton::paintEvent(param1);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void actionEvent(QActionEvent* param1) override {
        if (kanimatedbutton_actionevent_isbase) {
            kanimatedbutton_actionevent_isbase = false;
            KAnimatedButton::actionEvent(param1);
        } else if (kanimatedbutton_actionevent_callback != nullptr) {
            QActionEvent* cbval1 = param1;

            kanimatedbutton_actionevent_callback(this, cbval1);
        } else {
            KAnimatedButton::actionEvent(param1);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void enterEvent(QEnterEvent* param1) override {
        if (kanimatedbutton_enterevent_isbase) {
            kanimatedbutton_enterevent_isbase = false;
            KAnimatedButton::enterEvent(param1);
        } else if (kanimatedbutton_enterevent_callback != nullptr) {
            QEnterEvent* cbval1 = param1;

            kanimatedbutton_enterevent_callback(this, cbval1);
        } else {
            KAnimatedButton::enterEvent(param1);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void leaveEvent(QEvent* param1) override {
        if (kanimatedbutton_leaveevent_isbase) {
            kanimatedbutton_leaveevent_isbase = false;
            KAnimatedButton::leaveEvent(param1);
        } else if (kanimatedbutton_leaveevent_callback != nullptr) {
            QEvent* cbval1 = param1;

            kanimatedbutton_leaveevent_callback(this, cbval1);
        } else {
            KAnimatedButton::leaveEvent(param1);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* param1) override {
        if (kanimatedbutton_timerevent_isbase) {
            kanimatedbutton_timerevent_isbase = false;
            KAnimatedButton::timerEvent(param1);
        } else if (kanimatedbutton_timerevent_callback != nullptr) {
            QTimerEvent* cbval1 = param1;

            kanimatedbutton_timerevent_callback(this, cbval1);
        } else {
            KAnimatedButton::timerEvent(param1);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void changeEvent(QEvent* param1) override {
        if (kanimatedbutton_changeevent_isbase) {
            kanimatedbutton_changeevent_isbase = false;
            KAnimatedButton::changeEvent(param1);
        } else if (kanimatedbutton_changeevent_callback != nullptr) {
            QEvent* cbval1 = param1;

            kanimatedbutton_changeevent_callback(this, cbval1);
        } else {
            KAnimatedButton::changeEvent(param1);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool hitButton(const QPoint& pos) const override {
        if (kanimatedbutton_hitbutton_isbase) {
            kanimatedbutton_hitbutton_isbase = false;
            return KAnimatedButton::hitButton(pos);
        } else if (kanimatedbutton_hitbutton_callback != nullptr) {
            const QPoint& pos_ret = pos;
            // Cast returned reference into pointer
            QPoint* cbval1 = const_cast<QPoint*>(&pos_ret);

            bool callback_ret = kanimatedbutton_hitbutton_callback(this, cbval1);
            return callback_ret;
        } else {
            return KAnimatedButton::hitButton(pos);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void checkStateSet() override {
        if (kanimatedbutton_checkstateset_isbase) {
            kanimatedbutton_checkstateset_isbase = false;
            KAnimatedButton::checkStateSet();
        } else if (kanimatedbutton_checkstateset_callback != nullptr) {
            kanimatedbutton_checkstateset_callback();
        } else {
            KAnimatedButton::checkStateSet();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void nextCheckState() override {
        if (kanimatedbutton_nextcheckstate_isbase) {
            kanimatedbutton_nextcheckstate_isbase = false;
            KAnimatedButton::nextCheckState();
        } else if (kanimatedbutton_nextcheckstate_callback != nullptr) {
            kanimatedbutton_nextcheckstate_callback();
        } else {
            KAnimatedButton::nextCheckState();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void initStyleOption(QStyleOptionToolButton* option) const override {
        if (kanimatedbutton_initstyleoption_isbase) {
            kanimatedbutton_initstyleoption_isbase = false;
            KAnimatedButton::initStyleOption(option);
        } else if (kanimatedbutton_initstyleoption_callback != nullptr) {
            QStyleOptionToolButton* cbval1 = option;

            kanimatedbutton_initstyleoption_callback(this, cbval1);
        } else {
            KAnimatedButton::initStyleOption(option);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void keyPressEvent(QKeyEvent* e) override {
        if (kanimatedbutton_keypressevent_isbase) {
            kanimatedbutton_keypressevent_isbase = false;
            KAnimatedButton::keyPressEvent(e);
        } else if (kanimatedbutton_keypressevent_callback != nullptr) {
            QKeyEvent* cbval1 = e;

            kanimatedbutton_keypressevent_callback(this, cbval1);
        } else {
            KAnimatedButton::keyPressEvent(e);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void keyReleaseEvent(QKeyEvent* e) override {
        if (kanimatedbutton_keyreleaseevent_isbase) {
            kanimatedbutton_keyreleaseevent_isbase = false;
            KAnimatedButton::keyReleaseEvent(e);
        } else if (kanimatedbutton_keyreleaseevent_callback != nullptr) {
            QKeyEvent* cbval1 = e;

            kanimatedbutton_keyreleaseevent_callback(this, cbval1);
        } else {
            KAnimatedButton::keyReleaseEvent(e);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseMoveEvent(QMouseEvent* e) override {
        if (kanimatedbutton_mousemoveevent_isbase) {
            kanimatedbutton_mousemoveevent_isbase = false;
            KAnimatedButton::mouseMoveEvent(e);
        } else if (kanimatedbutton_mousemoveevent_callback != nullptr) {
            QMouseEvent* cbval1 = e;

            kanimatedbutton_mousemoveevent_callback(this, cbval1);
        } else {
            KAnimatedButton::mouseMoveEvent(e);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void focusInEvent(QFocusEvent* e) override {
        if (kanimatedbutton_focusinevent_isbase) {
            kanimatedbutton_focusinevent_isbase = false;
            KAnimatedButton::focusInEvent(e);
        } else if (kanimatedbutton_focusinevent_callback != nullptr) {
            QFocusEvent* cbval1 = e;

            kanimatedbutton_focusinevent_callback(this, cbval1);
        } else {
            KAnimatedButton::focusInEvent(e);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void focusOutEvent(QFocusEvent* e) override {
        if (kanimatedbutton_focusoutevent_isbase) {
            kanimatedbutton_focusoutevent_isbase = false;
            KAnimatedButton::focusOutEvent(e);
        } else if (kanimatedbutton_focusoutevent_callback != nullptr) {
            QFocusEvent* cbval1 = e;

            kanimatedbutton_focusoutevent_callback(this, cbval1);
        } else {
            KAnimatedButton::focusOutEvent(e);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual int devType() const override {
        if (kanimatedbutton_devtype_isbase) {
            kanimatedbutton_devtype_isbase = false;
            return KAnimatedButton::devType();
        } else if (kanimatedbutton_devtype_callback != nullptr) {
            int callback_ret = kanimatedbutton_devtype_callback();
            return static_cast<int>(callback_ret);
        } else {
            return KAnimatedButton::devType();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void setVisible(bool visible) override {
        if (kanimatedbutton_setvisible_isbase) {
            kanimatedbutton_setvisible_isbase = false;
            KAnimatedButton::setVisible(visible);
        } else if (kanimatedbutton_setvisible_callback != nullptr) {
            bool cbval1 = visible;

            kanimatedbutton_setvisible_callback(this, cbval1);
        } else {
            KAnimatedButton::setVisible(visible);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual int heightForWidth(int param1) const override {
        if (kanimatedbutton_heightforwidth_isbase) {
            kanimatedbutton_heightforwidth_isbase = false;
            return KAnimatedButton::heightForWidth(param1);
        } else if (kanimatedbutton_heightforwidth_callback != nullptr) {
            int cbval1 = param1;

            int callback_ret = kanimatedbutton_heightforwidth_callback(this, cbval1);
            return static_cast<int>(callback_ret);
        } else {
            return KAnimatedButton::heightForWidth(param1);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool hasHeightForWidth() const override {
        if (kanimatedbutton_hasheightforwidth_isbase) {
            kanimatedbutton_hasheightforwidth_isbase = false;
            return KAnimatedButton::hasHeightForWidth();
        } else if (kanimatedbutton_hasheightforwidth_callback != nullptr) {
            bool callback_ret = kanimatedbutton_hasheightforwidth_callback();
            return callback_ret;
        } else {
            return KAnimatedButton::hasHeightForWidth();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QPaintEngine* paintEngine() const override {
        if (kanimatedbutton_paintengine_isbase) {
            kanimatedbutton_paintengine_isbase = false;
            return KAnimatedButton::paintEngine();
        } else if (kanimatedbutton_paintengine_callback != nullptr) {
            QPaintEngine* callback_ret = kanimatedbutton_paintengine_callback();
            return callback_ret;
        } else {
            return KAnimatedButton::paintEngine();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseDoubleClickEvent(QMouseEvent* event) override {
        if (kanimatedbutton_mousedoubleclickevent_isbase) {
            kanimatedbutton_mousedoubleclickevent_isbase = false;
            KAnimatedButton::mouseDoubleClickEvent(event);
        } else if (kanimatedbutton_mousedoubleclickevent_callback != nullptr) {
            QMouseEvent* cbval1 = event;

            kanimatedbutton_mousedoubleclickevent_callback(this, cbval1);
        } else {
            KAnimatedButton::mouseDoubleClickEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void wheelEvent(QWheelEvent* event) override {
        if (kanimatedbutton_wheelevent_isbase) {
            kanimatedbutton_wheelevent_isbase = false;
            KAnimatedButton::wheelEvent(event);
        } else if (kanimatedbutton_wheelevent_callback != nullptr) {
            QWheelEvent* cbval1 = event;

            kanimatedbutton_wheelevent_callback(this, cbval1);
        } else {
            KAnimatedButton::wheelEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void moveEvent(QMoveEvent* event) override {
        if (kanimatedbutton_moveevent_isbase) {
            kanimatedbutton_moveevent_isbase = false;
            KAnimatedButton::moveEvent(event);
        } else if (kanimatedbutton_moveevent_callback != nullptr) {
            QMoveEvent* cbval1 = event;

            kanimatedbutton_moveevent_callback(this, cbval1);
        } else {
            KAnimatedButton::moveEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void resizeEvent(QResizeEvent* event) override {
        if (kanimatedbutton_resizeevent_isbase) {
            kanimatedbutton_resizeevent_isbase = false;
            KAnimatedButton::resizeEvent(event);
        } else if (kanimatedbutton_resizeevent_callback != nullptr) {
            QResizeEvent* cbval1 = event;

            kanimatedbutton_resizeevent_callback(this, cbval1);
        } else {
            KAnimatedButton::resizeEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void closeEvent(QCloseEvent* event) override {
        if (kanimatedbutton_closeevent_isbase) {
            kanimatedbutton_closeevent_isbase = false;
            KAnimatedButton::closeEvent(event);
        } else if (kanimatedbutton_closeevent_callback != nullptr) {
            QCloseEvent* cbval1 = event;

            kanimatedbutton_closeevent_callback(this, cbval1);
        } else {
            KAnimatedButton::closeEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void contextMenuEvent(QContextMenuEvent* event) override {
        if (kanimatedbutton_contextmenuevent_isbase) {
            kanimatedbutton_contextmenuevent_isbase = false;
            KAnimatedButton::contextMenuEvent(event);
        } else if (kanimatedbutton_contextmenuevent_callback != nullptr) {
            QContextMenuEvent* cbval1 = event;

            kanimatedbutton_contextmenuevent_callback(this, cbval1);
        } else {
            KAnimatedButton::contextMenuEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void tabletEvent(QTabletEvent* event) override {
        if (kanimatedbutton_tabletevent_isbase) {
            kanimatedbutton_tabletevent_isbase = false;
            KAnimatedButton::tabletEvent(event);
        } else if (kanimatedbutton_tabletevent_callback != nullptr) {
            QTabletEvent* cbval1 = event;

            kanimatedbutton_tabletevent_callback(this, cbval1);
        } else {
            KAnimatedButton::tabletEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragEnterEvent(QDragEnterEvent* event) override {
        if (kanimatedbutton_dragenterevent_isbase) {
            kanimatedbutton_dragenterevent_isbase = false;
            KAnimatedButton::dragEnterEvent(event);
        } else if (kanimatedbutton_dragenterevent_callback != nullptr) {
            QDragEnterEvent* cbval1 = event;

            kanimatedbutton_dragenterevent_callback(this, cbval1);
        } else {
            KAnimatedButton::dragEnterEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragMoveEvent(QDragMoveEvent* event) override {
        if (kanimatedbutton_dragmoveevent_isbase) {
            kanimatedbutton_dragmoveevent_isbase = false;
            KAnimatedButton::dragMoveEvent(event);
        } else if (kanimatedbutton_dragmoveevent_callback != nullptr) {
            QDragMoveEvent* cbval1 = event;

            kanimatedbutton_dragmoveevent_callback(this, cbval1);
        } else {
            KAnimatedButton::dragMoveEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragLeaveEvent(QDragLeaveEvent* event) override {
        if (kanimatedbutton_dragleaveevent_isbase) {
            kanimatedbutton_dragleaveevent_isbase = false;
            KAnimatedButton::dragLeaveEvent(event);
        } else if (kanimatedbutton_dragleaveevent_callback != nullptr) {
            QDragLeaveEvent* cbval1 = event;

            kanimatedbutton_dragleaveevent_callback(this, cbval1);
        } else {
            KAnimatedButton::dragLeaveEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void dropEvent(QDropEvent* event) override {
        if (kanimatedbutton_dropevent_isbase) {
            kanimatedbutton_dropevent_isbase = false;
            KAnimatedButton::dropEvent(event);
        } else if (kanimatedbutton_dropevent_callback != nullptr) {
            QDropEvent* cbval1 = event;

            kanimatedbutton_dropevent_callback(this, cbval1);
        } else {
            KAnimatedButton::dropEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void showEvent(QShowEvent* event) override {
        if (kanimatedbutton_showevent_isbase) {
            kanimatedbutton_showevent_isbase = false;
            KAnimatedButton::showEvent(event);
        } else if (kanimatedbutton_showevent_callback != nullptr) {
            QShowEvent* cbval1 = event;

            kanimatedbutton_showevent_callback(this, cbval1);
        } else {
            KAnimatedButton::showEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void hideEvent(QHideEvent* event) override {
        if (kanimatedbutton_hideevent_isbase) {
            kanimatedbutton_hideevent_isbase = false;
            KAnimatedButton::hideEvent(event);
        } else if (kanimatedbutton_hideevent_callback != nullptr) {
            QHideEvent* cbval1 = event;

            kanimatedbutton_hideevent_callback(this, cbval1);
        } else {
            KAnimatedButton::hideEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool nativeEvent(const QByteArray& eventType, void* message, qintptr* result) override {
        if (kanimatedbutton_nativeevent_isbase) {
            kanimatedbutton_nativeevent_isbase = false;
            return KAnimatedButton::nativeEvent(eventType, message, result);
        } else if (kanimatedbutton_nativeevent_callback != nullptr) {
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

            bool callback_ret = kanimatedbutton_nativeevent_callback(this, cbval1, cbval2, cbval3);
            return callback_ret;
        } else {
            return KAnimatedButton::nativeEvent(eventType, message, result);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual int metric(QPaintDevice::PaintDeviceMetric param1) const override {
        if (kanimatedbutton_metric_isbase) {
            kanimatedbutton_metric_isbase = false;
            return KAnimatedButton::metric(param1);
        } else if (kanimatedbutton_metric_callback != nullptr) {
            int cbval1 = static_cast<int>(param1);

            int callback_ret = kanimatedbutton_metric_callback(this, cbval1);
            return static_cast<int>(callback_ret);
        } else {
            return KAnimatedButton::metric(param1);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void initPainter(QPainter* painter) const override {
        if (kanimatedbutton_initpainter_isbase) {
            kanimatedbutton_initpainter_isbase = false;
            KAnimatedButton::initPainter(painter);
        } else if (kanimatedbutton_initpainter_callback != nullptr) {
            QPainter* cbval1 = painter;

            kanimatedbutton_initpainter_callback(this, cbval1);
        } else {
            KAnimatedButton::initPainter(painter);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QPaintDevice* redirected(QPoint* offset) const override {
        if (kanimatedbutton_redirected_isbase) {
            kanimatedbutton_redirected_isbase = false;
            return KAnimatedButton::redirected(offset);
        } else if (kanimatedbutton_redirected_callback != nullptr) {
            QPoint* cbval1 = offset;

            QPaintDevice* callback_ret = kanimatedbutton_redirected_callback(this, cbval1);
            return callback_ret;
        } else {
            return KAnimatedButton::redirected(offset);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QPainter* sharedPainter() const override {
        if (kanimatedbutton_sharedpainter_isbase) {
            kanimatedbutton_sharedpainter_isbase = false;
            return KAnimatedButton::sharedPainter();
        } else if (kanimatedbutton_sharedpainter_callback != nullptr) {
            QPainter* callback_ret = kanimatedbutton_sharedpainter_callback();
            return callback_ret;
        } else {
            return KAnimatedButton::sharedPainter();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void inputMethodEvent(QInputMethodEvent* param1) override {
        if (kanimatedbutton_inputmethodevent_isbase) {
            kanimatedbutton_inputmethodevent_isbase = false;
            KAnimatedButton::inputMethodEvent(param1);
        } else if (kanimatedbutton_inputmethodevent_callback != nullptr) {
            QInputMethodEvent* cbval1 = param1;

            kanimatedbutton_inputmethodevent_callback(this, cbval1);
        } else {
            KAnimatedButton::inputMethodEvent(param1);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QVariant inputMethodQuery(Qt::InputMethodQuery param1) const override {
        if (kanimatedbutton_inputmethodquery_isbase) {
            kanimatedbutton_inputmethodquery_isbase = false;
            return KAnimatedButton::inputMethodQuery(param1);
        } else if (kanimatedbutton_inputmethodquery_callback != nullptr) {
            int cbval1 = static_cast<int>(param1);

            QVariant* callback_ret = kanimatedbutton_inputmethodquery_callback(this, cbval1);
            return *callback_ret;
        } else {
            return KAnimatedButton::inputMethodQuery(param1);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool focusNextPrevChild(bool next) override {
        if (kanimatedbutton_focusnextprevchild_isbase) {
            kanimatedbutton_focusnextprevchild_isbase = false;
            return KAnimatedButton::focusNextPrevChild(next);
        } else if (kanimatedbutton_focusnextprevchild_callback != nullptr) {
            bool cbval1 = next;

            bool callback_ret = kanimatedbutton_focusnextprevchild_callback(this, cbval1);
            return callback_ret;
        } else {
            return KAnimatedButton::focusNextPrevChild(next);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* watched, QEvent* event) override {
        if (kanimatedbutton_eventfilter_isbase) {
            kanimatedbutton_eventfilter_isbase = false;
            return KAnimatedButton::eventFilter(watched, event);
        } else if (kanimatedbutton_eventfilter_callback != nullptr) {
            QObject* cbval1 = watched;
            QEvent* cbval2 = event;

            bool callback_ret = kanimatedbutton_eventfilter_callback(this, cbval1, cbval2);
            return callback_ret;
        } else {
            return KAnimatedButton::eventFilter(watched, event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (kanimatedbutton_childevent_isbase) {
            kanimatedbutton_childevent_isbase = false;
            KAnimatedButton::childEvent(event);
        } else if (kanimatedbutton_childevent_callback != nullptr) {
            QChildEvent* cbval1 = event;

            kanimatedbutton_childevent_callback(this, cbval1);
        } else {
            KAnimatedButton::childEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (kanimatedbutton_customevent_isbase) {
            kanimatedbutton_customevent_isbase = false;
            KAnimatedButton::customEvent(event);
        } else if (kanimatedbutton_customevent_callback != nullptr) {
            QEvent* cbval1 = event;

            kanimatedbutton_customevent_callback(this, cbval1);
        } else {
            KAnimatedButton::customEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (kanimatedbutton_connectnotify_isbase) {
            kanimatedbutton_connectnotify_isbase = false;
            KAnimatedButton::connectNotify(signal);
        } else if (kanimatedbutton_connectnotify_callback != nullptr) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            kanimatedbutton_connectnotify_callback(this, cbval1);
        } else {
            KAnimatedButton::connectNotify(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (kanimatedbutton_disconnectnotify_isbase) {
            kanimatedbutton_disconnectnotify_isbase = false;
            KAnimatedButton::disconnectNotify(signal);
        } else if (kanimatedbutton_disconnectnotify_callback != nullptr) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            kanimatedbutton_disconnectnotify_callback(this, cbval1);
        } else {
            KAnimatedButton::disconnectNotify(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    void updateMicroFocus() {
        if (kanimatedbutton_updatemicrofocus_isbase) {
            kanimatedbutton_updatemicrofocus_isbase = false;
            KAnimatedButton::updateMicroFocus();
        } else if (kanimatedbutton_updatemicrofocus_callback != nullptr) {
            kanimatedbutton_updatemicrofocus_callback();
        } else {
            KAnimatedButton::updateMicroFocus();
        }
    }

    // Virtual method for C ABI access and custom callback
    void create() {
        if (kanimatedbutton_create_isbase) {
            kanimatedbutton_create_isbase = false;
            KAnimatedButton::create();
        } else if (kanimatedbutton_create_callback != nullptr) {
            kanimatedbutton_create_callback();
        } else {
            KAnimatedButton::create();
        }
    }

    // Virtual method for C ABI access and custom callback
    void destroy() {
        if (kanimatedbutton_destroy_isbase) {
            kanimatedbutton_destroy_isbase = false;
            KAnimatedButton::destroy();
        } else if (kanimatedbutton_destroy_callback != nullptr) {
            kanimatedbutton_destroy_callback();
        } else {
            KAnimatedButton::destroy();
        }
    }

    // Virtual method for C ABI access and custom callback
    bool focusNextChild() {
        if (kanimatedbutton_focusnextchild_isbase) {
            kanimatedbutton_focusnextchild_isbase = false;
            return KAnimatedButton::focusNextChild();
        } else if (kanimatedbutton_focusnextchild_callback != nullptr) {
            bool callback_ret = kanimatedbutton_focusnextchild_callback();
            return callback_ret;
        } else {
            return KAnimatedButton::focusNextChild();
        }
    }

    // Virtual method for C ABI access and custom callback
    bool focusPreviousChild() {
        if (kanimatedbutton_focuspreviouschild_isbase) {
            kanimatedbutton_focuspreviouschild_isbase = false;
            return KAnimatedButton::focusPreviousChild();
        } else if (kanimatedbutton_focuspreviouschild_callback != nullptr) {
            bool callback_ret = kanimatedbutton_focuspreviouschild_callback();
            return callback_ret;
        } else {
            return KAnimatedButton::focusPreviousChild();
        }
    }

    // Virtual method for C ABI access and custom callback
    QObject* sender() const {
        if (kanimatedbutton_sender_isbase) {
            kanimatedbutton_sender_isbase = false;
            return KAnimatedButton::sender();
        } else if (kanimatedbutton_sender_callback != nullptr) {
            QObject* callback_ret = kanimatedbutton_sender_callback();
            return callback_ret;
        } else {
            return KAnimatedButton::sender();
        }
    }

    // Virtual method for C ABI access and custom callback
    int senderSignalIndex() const {
        if (kanimatedbutton_sendersignalindex_isbase) {
            kanimatedbutton_sendersignalindex_isbase = false;
            return KAnimatedButton::senderSignalIndex();
        } else if (kanimatedbutton_sendersignalindex_callback != nullptr) {
            int callback_ret = kanimatedbutton_sendersignalindex_callback();
            return static_cast<int>(callback_ret);
        } else {
            return KAnimatedButton::senderSignalIndex();
        }
    }

    // Virtual method for C ABI access and custom callback
    int receivers(const char* signal) const {
        if (kanimatedbutton_receivers_isbase) {
            kanimatedbutton_receivers_isbase = false;
            return KAnimatedButton::receivers(signal);
        } else if (kanimatedbutton_receivers_callback != nullptr) {
            const char* cbval1 = (const char*)signal;

            int callback_ret = kanimatedbutton_receivers_callback(this, cbval1);
            return static_cast<int>(callback_ret);
        } else {
            return KAnimatedButton::receivers(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    bool isSignalConnected(const QMetaMethod& signal) const {
        if (kanimatedbutton_issignalconnected_isbase) {
            kanimatedbutton_issignalconnected_isbase = false;
            return KAnimatedButton::isSignalConnected(signal);
        } else if (kanimatedbutton_issignalconnected_callback != nullptr) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            bool callback_ret = kanimatedbutton_issignalconnected_callback(this, cbval1);
            return callback_ret;
        } else {
            return KAnimatedButton::isSignalConnected(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    double getDecodedMetricF(QPaintDevice::PaintDeviceMetric metricA, QPaintDevice::PaintDeviceMetric metricB) const {
        if (kanimatedbutton_getdecodedmetricf_isbase) {
            kanimatedbutton_getdecodedmetricf_isbase = false;
            return KAnimatedButton::getDecodedMetricF(metricA, metricB);
        } else if (kanimatedbutton_getdecodedmetricf_callback != nullptr) {
            int cbval1 = static_cast<int>(metricA);
            int cbval2 = static_cast<int>(metricB);

            double callback_ret = kanimatedbutton_getdecodedmetricf_callback(this, cbval1, cbval2);
            return static_cast<double>(callback_ret);
        } else {
            return KAnimatedButton::getDecodedMetricF(metricA, metricB);
        }
    }

    // Friend functions
    friend bool KAnimatedButton_Event(KAnimatedButton* self, QEvent* e);
    friend bool KAnimatedButton_QBaseEvent(KAnimatedButton* self, QEvent* e);
    friend void KAnimatedButton_MousePressEvent(KAnimatedButton* self, QMouseEvent* param1);
    friend void KAnimatedButton_QBaseMousePressEvent(KAnimatedButton* self, QMouseEvent* param1);
    friend void KAnimatedButton_MouseReleaseEvent(KAnimatedButton* self, QMouseEvent* param1);
    friend void KAnimatedButton_QBaseMouseReleaseEvent(KAnimatedButton* self, QMouseEvent* param1);
    friend void KAnimatedButton_PaintEvent(KAnimatedButton* self, QPaintEvent* param1);
    friend void KAnimatedButton_QBasePaintEvent(KAnimatedButton* self, QPaintEvent* param1);
    friend void KAnimatedButton_ActionEvent(KAnimatedButton* self, QActionEvent* param1);
    friend void KAnimatedButton_QBaseActionEvent(KAnimatedButton* self, QActionEvent* param1);
    friend void KAnimatedButton_EnterEvent(KAnimatedButton* self, QEnterEvent* param1);
    friend void KAnimatedButton_QBaseEnterEvent(KAnimatedButton* self, QEnterEvent* param1);
    friend void KAnimatedButton_LeaveEvent(KAnimatedButton* self, QEvent* param1);
    friend void KAnimatedButton_QBaseLeaveEvent(KAnimatedButton* self, QEvent* param1);
    friend void KAnimatedButton_TimerEvent(KAnimatedButton* self, QTimerEvent* param1);
    friend void KAnimatedButton_QBaseTimerEvent(KAnimatedButton* self, QTimerEvent* param1);
    friend void KAnimatedButton_ChangeEvent(KAnimatedButton* self, QEvent* param1);
    friend void KAnimatedButton_QBaseChangeEvent(KAnimatedButton* self, QEvent* param1);
    friend bool KAnimatedButton_HitButton(const KAnimatedButton* self, const QPoint* pos);
    friend bool KAnimatedButton_QBaseHitButton(const KAnimatedButton* self, const QPoint* pos);
    friend void KAnimatedButton_CheckStateSet(KAnimatedButton* self);
    friend void KAnimatedButton_QBaseCheckStateSet(KAnimatedButton* self);
    friend void KAnimatedButton_NextCheckState(KAnimatedButton* self);
    friend void KAnimatedButton_QBaseNextCheckState(KAnimatedButton* self);
    friend void KAnimatedButton_InitStyleOption(const KAnimatedButton* self, QStyleOptionToolButton* option);
    friend void KAnimatedButton_QBaseInitStyleOption(const KAnimatedButton* self, QStyleOptionToolButton* option);
    friend void KAnimatedButton_KeyPressEvent(KAnimatedButton* self, QKeyEvent* e);
    friend void KAnimatedButton_QBaseKeyPressEvent(KAnimatedButton* self, QKeyEvent* e);
    friend void KAnimatedButton_KeyReleaseEvent(KAnimatedButton* self, QKeyEvent* e);
    friend void KAnimatedButton_QBaseKeyReleaseEvent(KAnimatedButton* self, QKeyEvent* e);
    friend void KAnimatedButton_MouseMoveEvent(KAnimatedButton* self, QMouseEvent* e);
    friend void KAnimatedButton_QBaseMouseMoveEvent(KAnimatedButton* self, QMouseEvent* e);
    friend void KAnimatedButton_FocusInEvent(KAnimatedButton* self, QFocusEvent* e);
    friend void KAnimatedButton_QBaseFocusInEvent(KAnimatedButton* self, QFocusEvent* e);
    friend void KAnimatedButton_FocusOutEvent(KAnimatedButton* self, QFocusEvent* e);
    friend void KAnimatedButton_QBaseFocusOutEvent(KAnimatedButton* self, QFocusEvent* e);
    friend void KAnimatedButton_MouseDoubleClickEvent(KAnimatedButton* self, QMouseEvent* event);
    friend void KAnimatedButton_QBaseMouseDoubleClickEvent(KAnimatedButton* self, QMouseEvent* event);
    friend void KAnimatedButton_WheelEvent(KAnimatedButton* self, QWheelEvent* event);
    friend void KAnimatedButton_QBaseWheelEvent(KAnimatedButton* self, QWheelEvent* event);
    friend void KAnimatedButton_MoveEvent(KAnimatedButton* self, QMoveEvent* event);
    friend void KAnimatedButton_QBaseMoveEvent(KAnimatedButton* self, QMoveEvent* event);
    friend void KAnimatedButton_ResizeEvent(KAnimatedButton* self, QResizeEvent* event);
    friend void KAnimatedButton_QBaseResizeEvent(KAnimatedButton* self, QResizeEvent* event);
    friend void KAnimatedButton_CloseEvent(KAnimatedButton* self, QCloseEvent* event);
    friend void KAnimatedButton_QBaseCloseEvent(KAnimatedButton* self, QCloseEvent* event);
    friend void KAnimatedButton_ContextMenuEvent(KAnimatedButton* self, QContextMenuEvent* event);
    friend void KAnimatedButton_QBaseContextMenuEvent(KAnimatedButton* self, QContextMenuEvent* event);
    friend void KAnimatedButton_TabletEvent(KAnimatedButton* self, QTabletEvent* event);
    friend void KAnimatedButton_QBaseTabletEvent(KAnimatedButton* self, QTabletEvent* event);
    friend void KAnimatedButton_DragEnterEvent(KAnimatedButton* self, QDragEnterEvent* event);
    friend void KAnimatedButton_QBaseDragEnterEvent(KAnimatedButton* self, QDragEnterEvent* event);
    friend void KAnimatedButton_DragMoveEvent(KAnimatedButton* self, QDragMoveEvent* event);
    friend void KAnimatedButton_QBaseDragMoveEvent(KAnimatedButton* self, QDragMoveEvent* event);
    friend void KAnimatedButton_DragLeaveEvent(KAnimatedButton* self, QDragLeaveEvent* event);
    friend void KAnimatedButton_QBaseDragLeaveEvent(KAnimatedButton* self, QDragLeaveEvent* event);
    friend void KAnimatedButton_DropEvent(KAnimatedButton* self, QDropEvent* event);
    friend void KAnimatedButton_QBaseDropEvent(KAnimatedButton* self, QDropEvent* event);
    friend void KAnimatedButton_ShowEvent(KAnimatedButton* self, QShowEvent* event);
    friend void KAnimatedButton_QBaseShowEvent(KAnimatedButton* self, QShowEvent* event);
    friend void KAnimatedButton_HideEvent(KAnimatedButton* self, QHideEvent* event);
    friend void KAnimatedButton_QBaseHideEvent(KAnimatedButton* self, QHideEvent* event);
    friend bool KAnimatedButton_NativeEvent(KAnimatedButton* self, const libqt_string eventType, void* message, intptr_t* result);
    friend bool KAnimatedButton_QBaseNativeEvent(KAnimatedButton* self, const libqt_string eventType, void* message, intptr_t* result);
    friend int KAnimatedButton_Metric(const KAnimatedButton* self, int param1);
    friend int KAnimatedButton_QBaseMetric(const KAnimatedButton* self, int param1);
    friend void KAnimatedButton_InitPainter(const KAnimatedButton* self, QPainter* painter);
    friend void KAnimatedButton_QBaseInitPainter(const KAnimatedButton* self, QPainter* painter);
    friend QPaintDevice* KAnimatedButton_Redirected(const KAnimatedButton* self, QPoint* offset);
    friend QPaintDevice* KAnimatedButton_QBaseRedirected(const KAnimatedButton* self, QPoint* offset);
    friend QPainter* KAnimatedButton_SharedPainter(const KAnimatedButton* self);
    friend QPainter* KAnimatedButton_QBaseSharedPainter(const KAnimatedButton* self);
    friend void KAnimatedButton_InputMethodEvent(KAnimatedButton* self, QInputMethodEvent* param1);
    friend void KAnimatedButton_QBaseInputMethodEvent(KAnimatedButton* self, QInputMethodEvent* param1);
    friend bool KAnimatedButton_FocusNextPrevChild(KAnimatedButton* self, bool next);
    friend bool KAnimatedButton_QBaseFocusNextPrevChild(KAnimatedButton* self, bool next);
    friend void KAnimatedButton_ChildEvent(KAnimatedButton* self, QChildEvent* event);
    friend void KAnimatedButton_QBaseChildEvent(KAnimatedButton* self, QChildEvent* event);
    friend void KAnimatedButton_CustomEvent(KAnimatedButton* self, QEvent* event);
    friend void KAnimatedButton_QBaseCustomEvent(KAnimatedButton* self, QEvent* event);
    friend void KAnimatedButton_ConnectNotify(KAnimatedButton* self, const QMetaMethod* signal);
    friend void KAnimatedButton_QBaseConnectNotify(KAnimatedButton* self, const QMetaMethod* signal);
    friend void KAnimatedButton_DisconnectNotify(KAnimatedButton* self, const QMetaMethod* signal);
    friend void KAnimatedButton_QBaseDisconnectNotify(KAnimatedButton* self, const QMetaMethod* signal);
    friend void KAnimatedButton_UpdateMicroFocus(KAnimatedButton* self);
    friend void KAnimatedButton_QBaseUpdateMicroFocus(KAnimatedButton* self);
    friend void KAnimatedButton_Create(KAnimatedButton* self);
    friend void KAnimatedButton_QBaseCreate(KAnimatedButton* self);
    friend void KAnimatedButton_Destroy(KAnimatedButton* self);
    friend void KAnimatedButton_QBaseDestroy(KAnimatedButton* self);
    friend bool KAnimatedButton_FocusNextChild(KAnimatedButton* self);
    friend bool KAnimatedButton_QBaseFocusNextChild(KAnimatedButton* self);
    friend bool KAnimatedButton_FocusPreviousChild(KAnimatedButton* self);
    friend bool KAnimatedButton_QBaseFocusPreviousChild(KAnimatedButton* self);
    friend QObject* KAnimatedButton_Sender(const KAnimatedButton* self);
    friend QObject* KAnimatedButton_QBaseSender(const KAnimatedButton* self);
    friend int KAnimatedButton_SenderSignalIndex(const KAnimatedButton* self);
    friend int KAnimatedButton_QBaseSenderSignalIndex(const KAnimatedButton* self);
    friend int KAnimatedButton_Receivers(const KAnimatedButton* self, const char* signal);
    friend int KAnimatedButton_QBaseReceivers(const KAnimatedButton* self, const char* signal);
    friend bool KAnimatedButton_IsSignalConnected(const KAnimatedButton* self, const QMetaMethod* signal);
    friend bool KAnimatedButton_QBaseIsSignalConnected(const KAnimatedButton* self, const QMetaMethod* signal);
    friend double KAnimatedButton_GetDecodedMetricF(const KAnimatedButton* self, int metricA, int metricB);
    friend double KAnimatedButton_QBaseGetDecodedMetricF(const KAnimatedButton* self, int metricA, int metricB);
};

#endif
