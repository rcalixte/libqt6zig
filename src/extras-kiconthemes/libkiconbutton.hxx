#pragma once
#ifndef SRC_EXTRAS_KICONTHEMESC_LIBVIRTUALKICONBUTTON_H
#define SRC_EXTRAS_KICONTHEMESC_LIBVIRTUALKICONBUTTON_H

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

// This class is a subclass of KIconButton so that we can call protected methods
class VirtualKIconButton final : public KIconButton {

  public:
    // Virtual class boolean flag
    bool isVirtualKIconButton = true;

    // Virtual class public types (including callbacks)
    using KIconButton_Metacall_Callback = int (*)(KIconButton*, int, int, void**);
    using KIconButton_SizeHint_Callback = QSize* (*)();
    using KIconButton_MinimumSizeHint_Callback = QSize* (*)();
    using KIconButton_Event_Callback = bool (*)(KIconButton*, QEvent*);
    using KIconButton_PaintEvent_Callback = void (*)(KIconButton*, QPaintEvent*);
    using KIconButton_KeyPressEvent_Callback = void (*)(KIconButton*, QKeyEvent*);
    using KIconButton_FocusInEvent_Callback = void (*)(KIconButton*, QFocusEvent*);
    using KIconButton_FocusOutEvent_Callback = void (*)(KIconButton*, QFocusEvent*);
    using KIconButton_MouseMoveEvent_Callback = void (*)(KIconButton*, QMouseEvent*);
    using KIconButton_InitStyleOption_Callback = void (*)(const KIconButton*, QStyleOptionButton*);
    using KIconButton_HitButton_Callback = bool (*)(const KIconButton*, QPoint*);
    using KIconButton_CheckStateSet_Callback = void (*)();
    using KIconButton_NextCheckState_Callback = void (*)();
    using KIconButton_KeyReleaseEvent_Callback = void (*)(KIconButton*, QKeyEvent*);
    using KIconButton_MousePressEvent_Callback = void (*)(KIconButton*, QMouseEvent*);
    using KIconButton_MouseReleaseEvent_Callback = void (*)(KIconButton*, QMouseEvent*);
    using KIconButton_ChangeEvent_Callback = void (*)(KIconButton*, QEvent*);
    using KIconButton_TimerEvent_Callback = void (*)(KIconButton*, QTimerEvent*);
    using KIconButton_DevType_Callback = int (*)();
    using KIconButton_SetVisible_Callback = void (*)(KIconButton*, bool);
    using KIconButton_HeightForWidth_Callback = int (*)(const KIconButton*, int);
    using KIconButton_HasHeightForWidth_Callback = bool (*)();
    using KIconButton_PaintEngine_Callback = QPaintEngine* (*)();
    using KIconButton_MouseDoubleClickEvent_Callback = void (*)(KIconButton*, QMouseEvent*);
    using KIconButton_WheelEvent_Callback = void (*)(KIconButton*, QWheelEvent*);
    using KIconButton_EnterEvent_Callback = void (*)(KIconButton*, QEnterEvent*);
    using KIconButton_LeaveEvent_Callback = void (*)(KIconButton*, QEvent*);
    using KIconButton_MoveEvent_Callback = void (*)(KIconButton*, QMoveEvent*);
    using KIconButton_ResizeEvent_Callback = void (*)(KIconButton*, QResizeEvent*);
    using KIconButton_CloseEvent_Callback = void (*)(KIconButton*, QCloseEvent*);
    using KIconButton_ContextMenuEvent_Callback = void (*)(KIconButton*, QContextMenuEvent*);
    using KIconButton_TabletEvent_Callback = void (*)(KIconButton*, QTabletEvent*);
    using KIconButton_ActionEvent_Callback = void (*)(KIconButton*, QActionEvent*);
    using KIconButton_DragEnterEvent_Callback = void (*)(KIconButton*, QDragEnterEvent*);
    using KIconButton_DragMoveEvent_Callback = void (*)(KIconButton*, QDragMoveEvent*);
    using KIconButton_DragLeaveEvent_Callback = void (*)(KIconButton*, QDragLeaveEvent*);
    using KIconButton_DropEvent_Callback = void (*)(KIconButton*, QDropEvent*);
    using KIconButton_ShowEvent_Callback = void (*)(KIconButton*, QShowEvent*);
    using KIconButton_HideEvent_Callback = void (*)(KIconButton*, QHideEvent*);
    using KIconButton_NativeEvent_Callback = bool (*)(KIconButton*, libqt_string, void*, intptr_t*);
    using KIconButton_Metric_Callback = int (*)(const KIconButton*, int);
    using KIconButton_InitPainter_Callback = void (*)(const KIconButton*, QPainter*);
    using KIconButton_Redirected_Callback = QPaintDevice* (*)(const KIconButton*, QPoint*);
    using KIconButton_SharedPainter_Callback = QPainter* (*)();
    using KIconButton_InputMethodEvent_Callback = void (*)(KIconButton*, QInputMethodEvent*);
    using KIconButton_InputMethodQuery_Callback = QVariant* (*)(const KIconButton*, int);
    using KIconButton_FocusNextPrevChild_Callback = bool (*)(KIconButton*, bool);
    using KIconButton_EventFilter_Callback = bool (*)(KIconButton*, QObject*, QEvent*);
    using KIconButton_ChildEvent_Callback = void (*)(KIconButton*, QChildEvent*);
    using KIconButton_CustomEvent_Callback = void (*)(KIconButton*, QEvent*);
    using KIconButton_ConnectNotify_Callback = void (*)(KIconButton*, QMetaMethod*);
    using KIconButton_DisconnectNotify_Callback = void (*)(KIconButton*, QMetaMethod*);
    using KIconButton_UpdateMicroFocus_Callback = void (*)();
    using KIconButton_Create_Callback = void (*)();
    using KIconButton_Destroy_Callback = void (*)();
    using KIconButton_FocusNextChild_Callback = bool (*)();
    using KIconButton_FocusPreviousChild_Callback = bool (*)();
    using KIconButton_Sender_Callback = QObject* (*)();
    using KIconButton_SenderSignalIndex_Callback = int (*)();
    using KIconButton_Receivers_Callback = int (*)(const KIconButton*, const char*);
    using KIconButton_IsSignalConnected_Callback = bool (*)(const KIconButton*, QMetaMethod*);
    using KIconButton_GetDecodedMetricF_Callback = double (*)(const KIconButton*, int, int);

  protected:
    // Instance callback storage
    KIconButton_Metacall_Callback kiconbutton_metacall_callback = nullptr;
    KIconButton_SizeHint_Callback kiconbutton_sizehint_callback = nullptr;
    KIconButton_MinimumSizeHint_Callback kiconbutton_minimumsizehint_callback = nullptr;
    KIconButton_Event_Callback kiconbutton_event_callback = nullptr;
    KIconButton_PaintEvent_Callback kiconbutton_paintevent_callback = nullptr;
    KIconButton_KeyPressEvent_Callback kiconbutton_keypressevent_callback = nullptr;
    KIconButton_FocusInEvent_Callback kiconbutton_focusinevent_callback = nullptr;
    KIconButton_FocusOutEvent_Callback kiconbutton_focusoutevent_callback = nullptr;
    KIconButton_MouseMoveEvent_Callback kiconbutton_mousemoveevent_callback = nullptr;
    KIconButton_InitStyleOption_Callback kiconbutton_initstyleoption_callback = nullptr;
    KIconButton_HitButton_Callback kiconbutton_hitbutton_callback = nullptr;
    KIconButton_CheckStateSet_Callback kiconbutton_checkstateset_callback = nullptr;
    KIconButton_NextCheckState_Callback kiconbutton_nextcheckstate_callback = nullptr;
    KIconButton_KeyReleaseEvent_Callback kiconbutton_keyreleaseevent_callback = nullptr;
    KIconButton_MousePressEvent_Callback kiconbutton_mousepressevent_callback = nullptr;
    KIconButton_MouseReleaseEvent_Callback kiconbutton_mousereleaseevent_callback = nullptr;
    KIconButton_ChangeEvent_Callback kiconbutton_changeevent_callback = nullptr;
    KIconButton_TimerEvent_Callback kiconbutton_timerevent_callback = nullptr;
    KIconButton_DevType_Callback kiconbutton_devtype_callback = nullptr;
    KIconButton_SetVisible_Callback kiconbutton_setvisible_callback = nullptr;
    KIconButton_HeightForWidth_Callback kiconbutton_heightforwidth_callback = nullptr;
    KIconButton_HasHeightForWidth_Callback kiconbutton_hasheightforwidth_callback = nullptr;
    KIconButton_PaintEngine_Callback kiconbutton_paintengine_callback = nullptr;
    KIconButton_MouseDoubleClickEvent_Callback kiconbutton_mousedoubleclickevent_callback = nullptr;
    KIconButton_WheelEvent_Callback kiconbutton_wheelevent_callback = nullptr;
    KIconButton_EnterEvent_Callback kiconbutton_enterevent_callback = nullptr;
    KIconButton_LeaveEvent_Callback kiconbutton_leaveevent_callback = nullptr;
    KIconButton_MoveEvent_Callback kiconbutton_moveevent_callback = nullptr;
    KIconButton_ResizeEvent_Callback kiconbutton_resizeevent_callback = nullptr;
    KIconButton_CloseEvent_Callback kiconbutton_closeevent_callback = nullptr;
    KIconButton_ContextMenuEvent_Callback kiconbutton_contextmenuevent_callback = nullptr;
    KIconButton_TabletEvent_Callback kiconbutton_tabletevent_callback = nullptr;
    KIconButton_ActionEvent_Callback kiconbutton_actionevent_callback = nullptr;
    KIconButton_DragEnterEvent_Callback kiconbutton_dragenterevent_callback = nullptr;
    KIconButton_DragMoveEvent_Callback kiconbutton_dragmoveevent_callback = nullptr;
    KIconButton_DragLeaveEvent_Callback kiconbutton_dragleaveevent_callback = nullptr;
    KIconButton_DropEvent_Callback kiconbutton_dropevent_callback = nullptr;
    KIconButton_ShowEvent_Callback kiconbutton_showevent_callback = nullptr;
    KIconButton_HideEvent_Callback kiconbutton_hideevent_callback = nullptr;
    KIconButton_NativeEvent_Callback kiconbutton_nativeevent_callback = nullptr;
    KIconButton_Metric_Callback kiconbutton_metric_callback = nullptr;
    KIconButton_InitPainter_Callback kiconbutton_initpainter_callback = nullptr;
    KIconButton_Redirected_Callback kiconbutton_redirected_callback = nullptr;
    KIconButton_SharedPainter_Callback kiconbutton_sharedpainter_callback = nullptr;
    KIconButton_InputMethodEvent_Callback kiconbutton_inputmethodevent_callback = nullptr;
    KIconButton_InputMethodQuery_Callback kiconbutton_inputmethodquery_callback = nullptr;
    KIconButton_FocusNextPrevChild_Callback kiconbutton_focusnextprevchild_callback = nullptr;
    KIconButton_EventFilter_Callback kiconbutton_eventfilter_callback = nullptr;
    KIconButton_ChildEvent_Callback kiconbutton_childevent_callback = nullptr;
    KIconButton_CustomEvent_Callback kiconbutton_customevent_callback = nullptr;
    KIconButton_ConnectNotify_Callback kiconbutton_connectnotify_callback = nullptr;
    KIconButton_DisconnectNotify_Callback kiconbutton_disconnectnotify_callback = nullptr;
    KIconButton_UpdateMicroFocus_Callback kiconbutton_updatemicrofocus_callback = nullptr;
    KIconButton_Create_Callback kiconbutton_create_callback = nullptr;
    KIconButton_Destroy_Callback kiconbutton_destroy_callback = nullptr;
    KIconButton_FocusNextChild_Callback kiconbutton_focusnextchild_callback = nullptr;
    KIconButton_FocusPreviousChild_Callback kiconbutton_focuspreviouschild_callback = nullptr;
    KIconButton_Sender_Callback kiconbutton_sender_callback = nullptr;
    KIconButton_SenderSignalIndex_Callback kiconbutton_sendersignalindex_callback = nullptr;
    KIconButton_Receivers_Callback kiconbutton_receivers_callback = nullptr;
    KIconButton_IsSignalConnected_Callback kiconbutton_issignalconnected_callback = nullptr;
    KIconButton_GetDecodedMetricF_Callback kiconbutton_getdecodedmetricf_callback = nullptr;

    // Instance base flags
    mutable bool kiconbutton_metacall_isbase = false;
    mutable bool kiconbutton_sizehint_isbase = false;
    mutable bool kiconbutton_minimumsizehint_isbase = false;
    mutable bool kiconbutton_event_isbase = false;
    mutable bool kiconbutton_paintevent_isbase = false;
    mutable bool kiconbutton_keypressevent_isbase = false;
    mutable bool kiconbutton_focusinevent_isbase = false;
    mutable bool kiconbutton_focusoutevent_isbase = false;
    mutable bool kiconbutton_mousemoveevent_isbase = false;
    mutable bool kiconbutton_initstyleoption_isbase = false;
    mutable bool kiconbutton_hitbutton_isbase = false;
    mutable bool kiconbutton_checkstateset_isbase = false;
    mutable bool kiconbutton_nextcheckstate_isbase = false;
    mutable bool kiconbutton_keyreleaseevent_isbase = false;
    mutable bool kiconbutton_mousepressevent_isbase = false;
    mutable bool kiconbutton_mousereleaseevent_isbase = false;
    mutable bool kiconbutton_changeevent_isbase = false;
    mutable bool kiconbutton_timerevent_isbase = false;
    mutable bool kiconbutton_devtype_isbase = false;
    mutable bool kiconbutton_setvisible_isbase = false;
    mutable bool kiconbutton_heightforwidth_isbase = false;
    mutable bool kiconbutton_hasheightforwidth_isbase = false;
    mutable bool kiconbutton_paintengine_isbase = false;
    mutable bool kiconbutton_mousedoubleclickevent_isbase = false;
    mutable bool kiconbutton_wheelevent_isbase = false;
    mutable bool kiconbutton_enterevent_isbase = false;
    mutable bool kiconbutton_leaveevent_isbase = false;
    mutable bool kiconbutton_moveevent_isbase = false;
    mutable bool kiconbutton_resizeevent_isbase = false;
    mutable bool kiconbutton_closeevent_isbase = false;
    mutable bool kiconbutton_contextmenuevent_isbase = false;
    mutable bool kiconbutton_tabletevent_isbase = false;
    mutable bool kiconbutton_actionevent_isbase = false;
    mutable bool kiconbutton_dragenterevent_isbase = false;
    mutable bool kiconbutton_dragmoveevent_isbase = false;
    mutable bool kiconbutton_dragleaveevent_isbase = false;
    mutable bool kiconbutton_dropevent_isbase = false;
    mutable bool kiconbutton_showevent_isbase = false;
    mutable bool kiconbutton_hideevent_isbase = false;
    mutable bool kiconbutton_nativeevent_isbase = false;
    mutable bool kiconbutton_metric_isbase = false;
    mutable bool kiconbutton_initpainter_isbase = false;
    mutable bool kiconbutton_redirected_isbase = false;
    mutable bool kiconbutton_sharedpainter_isbase = false;
    mutable bool kiconbutton_inputmethodevent_isbase = false;
    mutable bool kiconbutton_inputmethodquery_isbase = false;
    mutable bool kiconbutton_focusnextprevchild_isbase = false;
    mutable bool kiconbutton_eventfilter_isbase = false;
    mutable bool kiconbutton_childevent_isbase = false;
    mutable bool kiconbutton_customevent_isbase = false;
    mutable bool kiconbutton_connectnotify_isbase = false;
    mutable bool kiconbutton_disconnectnotify_isbase = false;
    mutable bool kiconbutton_updatemicrofocus_isbase = false;
    mutable bool kiconbutton_create_isbase = false;
    mutable bool kiconbutton_destroy_isbase = false;
    mutable bool kiconbutton_focusnextchild_isbase = false;
    mutable bool kiconbutton_focuspreviouschild_isbase = false;
    mutable bool kiconbutton_sender_isbase = false;
    mutable bool kiconbutton_sendersignalindex_isbase = false;
    mutable bool kiconbutton_receivers_isbase = false;
    mutable bool kiconbutton_issignalconnected_isbase = false;
    mutable bool kiconbutton_getdecodedmetricf_isbase = false;

  public:
    VirtualKIconButton(QWidget* parent) : KIconButton(parent) {};
    VirtualKIconButton() : KIconButton() {};

    ~VirtualKIconButton() {
        kiconbutton_metacall_callback = nullptr;
        kiconbutton_sizehint_callback = nullptr;
        kiconbutton_minimumsizehint_callback = nullptr;
        kiconbutton_event_callback = nullptr;
        kiconbutton_paintevent_callback = nullptr;
        kiconbutton_keypressevent_callback = nullptr;
        kiconbutton_focusinevent_callback = nullptr;
        kiconbutton_focusoutevent_callback = nullptr;
        kiconbutton_mousemoveevent_callback = nullptr;
        kiconbutton_initstyleoption_callback = nullptr;
        kiconbutton_hitbutton_callback = nullptr;
        kiconbutton_checkstateset_callback = nullptr;
        kiconbutton_nextcheckstate_callback = nullptr;
        kiconbutton_keyreleaseevent_callback = nullptr;
        kiconbutton_mousepressevent_callback = nullptr;
        kiconbutton_mousereleaseevent_callback = nullptr;
        kiconbutton_changeevent_callback = nullptr;
        kiconbutton_timerevent_callback = nullptr;
        kiconbutton_devtype_callback = nullptr;
        kiconbutton_setvisible_callback = nullptr;
        kiconbutton_heightforwidth_callback = nullptr;
        kiconbutton_hasheightforwidth_callback = nullptr;
        kiconbutton_paintengine_callback = nullptr;
        kiconbutton_mousedoubleclickevent_callback = nullptr;
        kiconbutton_wheelevent_callback = nullptr;
        kiconbutton_enterevent_callback = nullptr;
        kiconbutton_leaveevent_callback = nullptr;
        kiconbutton_moveevent_callback = nullptr;
        kiconbutton_resizeevent_callback = nullptr;
        kiconbutton_closeevent_callback = nullptr;
        kiconbutton_contextmenuevent_callback = nullptr;
        kiconbutton_tabletevent_callback = nullptr;
        kiconbutton_actionevent_callback = nullptr;
        kiconbutton_dragenterevent_callback = nullptr;
        kiconbutton_dragmoveevent_callback = nullptr;
        kiconbutton_dragleaveevent_callback = nullptr;
        kiconbutton_dropevent_callback = nullptr;
        kiconbutton_showevent_callback = nullptr;
        kiconbutton_hideevent_callback = nullptr;
        kiconbutton_nativeevent_callback = nullptr;
        kiconbutton_metric_callback = nullptr;
        kiconbutton_initpainter_callback = nullptr;
        kiconbutton_redirected_callback = nullptr;
        kiconbutton_sharedpainter_callback = nullptr;
        kiconbutton_inputmethodevent_callback = nullptr;
        kiconbutton_inputmethodquery_callback = nullptr;
        kiconbutton_focusnextprevchild_callback = nullptr;
        kiconbutton_eventfilter_callback = nullptr;
        kiconbutton_childevent_callback = nullptr;
        kiconbutton_customevent_callback = nullptr;
        kiconbutton_connectnotify_callback = nullptr;
        kiconbutton_disconnectnotify_callback = nullptr;
        kiconbutton_updatemicrofocus_callback = nullptr;
        kiconbutton_create_callback = nullptr;
        kiconbutton_destroy_callback = nullptr;
        kiconbutton_focusnextchild_callback = nullptr;
        kiconbutton_focuspreviouschild_callback = nullptr;
        kiconbutton_sender_callback = nullptr;
        kiconbutton_sendersignalindex_callback = nullptr;
        kiconbutton_receivers_callback = nullptr;
        kiconbutton_issignalconnected_callback = nullptr;
        kiconbutton_getdecodedmetricf_callback = nullptr;
    }

    // Callback setters
    inline void setKIconButton_Metacall_Callback(KIconButton_Metacall_Callback cb) { kiconbutton_metacall_callback = cb; }
    inline void setKIconButton_SizeHint_Callback(KIconButton_SizeHint_Callback cb) { kiconbutton_sizehint_callback = cb; }
    inline void setKIconButton_MinimumSizeHint_Callback(KIconButton_MinimumSizeHint_Callback cb) { kiconbutton_minimumsizehint_callback = cb; }
    inline void setKIconButton_Event_Callback(KIconButton_Event_Callback cb) { kiconbutton_event_callback = cb; }
    inline void setKIconButton_PaintEvent_Callback(KIconButton_PaintEvent_Callback cb) { kiconbutton_paintevent_callback = cb; }
    inline void setKIconButton_KeyPressEvent_Callback(KIconButton_KeyPressEvent_Callback cb) { kiconbutton_keypressevent_callback = cb; }
    inline void setKIconButton_FocusInEvent_Callback(KIconButton_FocusInEvent_Callback cb) { kiconbutton_focusinevent_callback = cb; }
    inline void setKIconButton_FocusOutEvent_Callback(KIconButton_FocusOutEvent_Callback cb) { kiconbutton_focusoutevent_callback = cb; }
    inline void setKIconButton_MouseMoveEvent_Callback(KIconButton_MouseMoveEvent_Callback cb) { kiconbutton_mousemoveevent_callback = cb; }
    inline void setKIconButton_InitStyleOption_Callback(KIconButton_InitStyleOption_Callback cb) { kiconbutton_initstyleoption_callback = cb; }
    inline void setKIconButton_HitButton_Callback(KIconButton_HitButton_Callback cb) { kiconbutton_hitbutton_callback = cb; }
    inline void setKIconButton_CheckStateSet_Callback(KIconButton_CheckStateSet_Callback cb) { kiconbutton_checkstateset_callback = cb; }
    inline void setKIconButton_NextCheckState_Callback(KIconButton_NextCheckState_Callback cb) { kiconbutton_nextcheckstate_callback = cb; }
    inline void setKIconButton_KeyReleaseEvent_Callback(KIconButton_KeyReleaseEvent_Callback cb) { kiconbutton_keyreleaseevent_callback = cb; }
    inline void setKIconButton_MousePressEvent_Callback(KIconButton_MousePressEvent_Callback cb) { kiconbutton_mousepressevent_callback = cb; }
    inline void setKIconButton_MouseReleaseEvent_Callback(KIconButton_MouseReleaseEvent_Callback cb) { kiconbutton_mousereleaseevent_callback = cb; }
    inline void setKIconButton_ChangeEvent_Callback(KIconButton_ChangeEvent_Callback cb) { kiconbutton_changeevent_callback = cb; }
    inline void setKIconButton_TimerEvent_Callback(KIconButton_TimerEvent_Callback cb) { kiconbutton_timerevent_callback = cb; }
    inline void setKIconButton_DevType_Callback(KIconButton_DevType_Callback cb) { kiconbutton_devtype_callback = cb; }
    inline void setKIconButton_SetVisible_Callback(KIconButton_SetVisible_Callback cb) { kiconbutton_setvisible_callback = cb; }
    inline void setKIconButton_HeightForWidth_Callback(KIconButton_HeightForWidth_Callback cb) { kiconbutton_heightforwidth_callback = cb; }
    inline void setKIconButton_HasHeightForWidth_Callback(KIconButton_HasHeightForWidth_Callback cb) { kiconbutton_hasheightforwidth_callback = cb; }
    inline void setKIconButton_PaintEngine_Callback(KIconButton_PaintEngine_Callback cb) { kiconbutton_paintengine_callback = cb; }
    inline void setKIconButton_MouseDoubleClickEvent_Callback(KIconButton_MouseDoubleClickEvent_Callback cb) { kiconbutton_mousedoubleclickevent_callback = cb; }
    inline void setKIconButton_WheelEvent_Callback(KIconButton_WheelEvent_Callback cb) { kiconbutton_wheelevent_callback = cb; }
    inline void setKIconButton_EnterEvent_Callback(KIconButton_EnterEvent_Callback cb) { kiconbutton_enterevent_callback = cb; }
    inline void setKIconButton_LeaveEvent_Callback(KIconButton_LeaveEvent_Callback cb) { kiconbutton_leaveevent_callback = cb; }
    inline void setKIconButton_MoveEvent_Callback(KIconButton_MoveEvent_Callback cb) { kiconbutton_moveevent_callback = cb; }
    inline void setKIconButton_ResizeEvent_Callback(KIconButton_ResizeEvent_Callback cb) { kiconbutton_resizeevent_callback = cb; }
    inline void setKIconButton_CloseEvent_Callback(KIconButton_CloseEvent_Callback cb) { kiconbutton_closeevent_callback = cb; }
    inline void setKIconButton_ContextMenuEvent_Callback(KIconButton_ContextMenuEvent_Callback cb) { kiconbutton_contextmenuevent_callback = cb; }
    inline void setKIconButton_TabletEvent_Callback(KIconButton_TabletEvent_Callback cb) { kiconbutton_tabletevent_callback = cb; }
    inline void setKIconButton_ActionEvent_Callback(KIconButton_ActionEvent_Callback cb) { kiconbutton_actionevent_callback = cb; }
    inline void setKIconButton_DragEnterEvent_Callback(KIconButton_DragEnterEvent_Callback cb) { kiconbutton_dragenterevent_callback = cb; }
    inline void setKIconButton_DragMoveEvent_Callback(KIconButton_DragMoveEvent_Callback cb) { kiconbutton_dragmoveevent_callback = cb; }
    inline void setKIconButton_DragLeaveEvent_Callback(KIconButton_DragLeaveEvent_Callback cb) { kiconbutton_dragleaveevent_callback = cb; }
    inline void setKIconButton_DropEvent_Callback(KIconButton_DropEvent_Callback cb) { kiconbutton_dropevent_callback = cb; }
    inline void setKIconButton_ShowEvent_Callback(KIconButton_ShowEvent_Callback cb) { kiconbutton_showevent_callback = cb; }
    inline void setKIconButton_HideEvent_Callback(KIconButton_HideEvent_Callback cb) { kiconbutton_hideevent_callback = cb; }
    inline void setKIconButton_NativeEvent_Callback(KIconButton_NativeEvent_Callback cb) { kiconbutton_nativeevent_callback = cb; }
    inline void setKIconButton_Metric_Callback(KIconButton_Metric_Callback cb) { kiconbutton_metric_callback = cb; }
    inline void setKIconButton_InitPainter_Callback(KIconButton_InitPainter_Callback cb) { kiconbutton_initpainter_callback = cb; }
    inline void setKIconButton_Redirected_Callback(KIconButton_Redirected_Callback cb) { kiconbutton_redirected_callback = cb; }
    inline void setKIconButton_SharedPainter_Callback(KIconButton_SharedPainter_Callback cb) { kiconbutton_sharedpainter_callback = cb; }
    inline void setKIconButton_InputMethodEvent_Callback(KIconButton_InputMethodEvent_Callback cb) { kiconbutton_inputmethodevent_callback = cb; }
    inline void setKIconButton_InputMethodQuery_Callback(KIconButton_InputMethodQuery_Callback cb) { kiconbutton_inputmethodquery_callback = cb; }
    inline void setKIconButton_FocusNextPrevChild_Callback(KIconButton_FocusNextPrevChild_Callback cb) { kiconbutton_focusnextprevchild_callback = cb; }
    inline void setKIconButton_EventFilter_Callback(KIconButton_EventFilter_Callback cb) { kiconbutton_eventfilter_callback = cb; }
    inline void setKIconButton_ChildEvent_Callback(KIconButton_ChildEvent_Callback cb) { kiconbutton_childevent_callback = cb; }
    inline void setKIconButton_CustomEvent_Callback(KIconButton_CustomEvent_Callback cb) { kiconbutton_customevent_callback = cb; }
    inline void setKIconButton_ConnectNotify_Callback(KIconButton_ConnectNotify_Callback cb) { kiconbutton_connectnotify_callback = cb; }
    inline void setKIconButton_DisconnectNotify_Callback(KIconButton_DisconnectNotify_Callback cb) { kiconbutton_disconnectnotify_callback = cb; }
    inline void setKIconButton_UpdateMicroFocus_Callback(KIconButton_UpdateMicroFocus_Callback cb) { kiconbutton_updatemicrofocus_callback = cb; }
    inline void setKIconButton_Create_Callback(KIconButton_Create_Callback cb) { kiconbutton_create_callback = cb; }
    inline void setKIconButton_Destroy_Callback(KIconButton_Destroy_Callback cb) { kiconbutton_destroy_callback = cb; }
    inline void setKIconButton_FocusNextChild_Callback(KIconButton_FocusNextChild_Callback cb) { kiconbutton_focusnextchild_callback = cb; }
    inline void setKIconButton_FocusPreviousChild_Callback(KIconButton_FocusPreviousChild_Callback cb) { kiconbutton_focuspreviouschild_callback = cb; }
    inline void setKIconButton_Sender_Callback(KIconButton_Sender_Callback cb) { kiconbutton_sender_callback = cb; }
    inline void setKIconButton_SenderSignalIndex_Callback(KIconButton_SenderSignalIndex_Callback cb) { kiconbutton_sendersignalindex_callback = cb; }
    inline void setKIconButton_Receivers_Callback(KIconButton_Receivers_Callback cb) { kiconbutton_receivers_callback = cb; }
    inline void setKIconButton_IsSignalConnected_Callback(KIconButton_IsSignalConnected_Callback cb) { kiconbutton_issignalconnected_callback = cb; }
    inline void setKIconButton_GetDecodedMetricF_Callback(KIconButton_GetDecodedMetricF_Callback cb) { kiconbutton_getdecodedmetricf_callback = cb; }

    // Base flag setters
    inline void setKIconButton_Metacall_IsBase(bool value) const { kiconbutton_metacall_isbase = value; }
    inline void setKIconButton_SizeHint_IsBase(bool value) const { kiconbutton_sizehint_isbase = value; }
    inline void setKIconButton_MinimumSizeHint_IsBase(bool value) const { kiconbutton_minimumsizehint_isbase = value; }
    inline void setKIconButton_Event_IsBase(bool value) const { kiconbutton_event_isbase = value; }
    inline void setKIconButton_PaintEvent_IsBase(bool value) const { kiconbutton_paintevent_isbase = value; }
    inline void setKIconButton_KeyPressEvent_IsBase(bool value) const { kiconbutton_keypressevent_isbase = value; }
    inline void setKIconButton_FocusInEvent_IsBase(bool value) const { kiconbutton_focusinevent_isbase = value; }
    inline void setKIconButton_FocusOutEvent_IsBase(bool value) const { kiconbutton_focusoutevent_isbase = value; }
    inline void setKIconButton_MouseMoveEvent_IsBase(bool value) const { kiconbutton_mousemoveevent_isbase = value; }
    inline void setKIconButton_InitStyleOption_IsBase(bool value) const { kiconbutton_initstyleoption_isbase = value; }
    inline void setKIconButton_HitButton_IsBase(bool value) const { kiconbutton_hitbutton_isbase = value; }
    inline void setKIconButton_CheckStateSet_IsBase(bool value) const { kiconbutton_checkstateset_isbase = value; }
    inline void setKIconButton_NextCheckState_IsBase(bool value) const { kiconbutton_nextcheckstate_isbase = value; }
    inline void setKIconButton_KeyReleaseEvent_IsBase(bool value) const { kiconbutton_keyreleaseevent_isbase = value; }
    inline void setKIconButton_MousePressEvent_IsBase(bool value) const { kiconbutton_mousepressevent_isbase = value; }
    inline void setKIconButton_MouseReleaseEvent_IsBase(bool value) const { kiconbutton_mousereleaseevent_isbase = value; }
    inline void setKIconButton_ChangeEvent_IsBase(bool value) const { kiconbutton_changeevent_isbase = value; }
    inline void setKIconButton_TimerEvent_IsBase(bool value) const { kiconbutton_timerevent_isbase = value; }
    inline void setKIconButton_DevType_IsBase(bool value) const { kiconbutton_devtype_isbase = value; }
    inline void setKIconButton_SetVisible_IsBase(bool value) const { kiconbutton_setvisible_isbase = value; }
    inline void setKIconButton_HeightForWidth_IsBase(bool value) const { kiconbutton_heightforwidth_isbase = value; }
    inline void setKIconButton_HasHeightForWidth_IsBase(bool value) const { kiconbutton_hasheightforwidth_isbase = value; }
    inline void setKIconButton_PaintEngine_IsBase(bool value) const { kiconbutton_paintengine_isbase = value; }
    inline void setKIconButton_MouseDoubleClickEvent_IsBase(bool value) const { kiconbutton_mousedoubleclickevent_isbase = value; }
    inline void setKIconButton_WheelEvent_IsBase(bool value) const { kiconbutton_wheelevent_isbase = value; }
    inline void setKIconButton_EnterEvent_IsBase(bool value) const { kiconbutton_enterevent_isbase = value; }
    inline void setKIconButton_LeaveEvent_IsBase(bool value) const { kiconbutton_leaveevent_isbase = value; }
    inline void setKIconButton_MoveEvent_IsBase(bool value) const { kiconbutton_moveevent_isbase = value; }
    inline void setKIconButton_ResizeEvent_IsBase(bool value) const { kiconbutton_resizeevent_isbase = value; }
    inline void setKIconButton_CloseEvent_IsBase(bool value) const { kiconbutton_closeevent_isbase = value; }
    inline void setKIconButton_ContextMenuEvent_IsBase(bool value) const { kiconbutton_contextmenuevent_isbase = value; }
    inline void setKIconButton_TabletEvent_IsBase(bool value) const { kiconbutton_tabletevent_isbase = value; }
    inline void setKIconButton_ActionEvent_IsBase(bool value) const { kiconbutton_actionevent_isbase = value; }
    inline void setKIconButton_DragEnterEvent_IsBase(bool value) const { kiconbutton_dragenterevent_isbase = value; }
    inline void setKIconButton_DragMoveEvent_IsBase(bool value) const { kiconbutton_dragmoveevent_isbase = value; }
    inline void setKIconButton_DragLeaveEvent_IsBase(bool value) const { kiconbutton_dragleaveevent_isbase = value; }
    inline void setKIconButton_DropEvent_IsBase(bool value) const { kiconbutton_dropevent_isbase = value; }
    inline void setKIconButton_ShowEvent_IsBase(bool value) const { kiconbutton_showevent_isbase = value; }
    inline void setKIconButton_HideEvent_IsBase(bool value) const { kiconbutton_hideevent_isbase = value; }
    inline void setKIconButton_NativeEvent_IsBase(bool value) const { kiconbutton_nativeevent_isbase = value; }
    inline void setKIconButton_Metric_IsBase(bool value) const { kiconbutton_metric_isbase = value; }
    inline void setKIconButton_InitPainter_IsBase(bool value) const { kiconbutton_initpainter_isbase = value; }
    inline void setKIconButton_Redirected_IsBase(bool value) const { kiconbutton_redirected_isbase = value; }
    inline void setKIconButton_SharedPainter_IsBase(bool value) const { kiconbutton_sharedpainter_isbase = value; }
    inline void setKIconButton_InputMethodEvent_IsBase(bool value) const { kiconbutton_inputmethodevent_isbase = value; }
    inline void setKIconButton_InputMethodQuery_IsBase(bool value) const { kiconbutton_inputmethodquery_isbase = value; }
    inline void setKIconButton_FocusNextPrevChild_IsBase(bool value) const { kiconbutton_focusnextprevchild_isbase = value; }
    inline void setKIconButton_EventFilter_IsBase(bool value) const { kiconbutton_eventfilter_isbase = value; }
    inline void setKIconButton_ChildEvent_IsBase(bool value) const { kiconbutton_childevent_isbase = value; }
    inline void setKIconButton_CustomEvent_IsBase(bool value) const { kiconbutton_customevent_isbase = value; }
    inline void setKIconButton_ConnectNotify_IsBase(bool value) const { kiconbutton_connectnotify_isbase = value; }
    inline void setKIconButton_DisconnectNotify_IsBase(bool value) const { kiconbutton_disconnectnotify_isbase = value; }
    inline void setKIconButton_UpdateMicroFocus_IsBase(bool value) const { kiconbutton_updatemicrofocus_isbase = value; }
    inline void setKIconButton_Create_IsBase(bool value) const { kiconbutton_create_isbase = value; }
    inline void setKIconButton_Destroy_IsBase(bool value) const { kiconbutton_destroy_isbase = value; }
    inline void setKIconButton_FocusNextChild_IsBase(bool value) const { kiconbutton_focusnextchild_isbase = value; }
    inline void setKIconButton_FocusPreviousChild_IsBase(bool value) const { kiconbutton_focuspreviouschild_isbase = value; }
    inline void setKIconButton_Sender_IsBase(bool value) const { kiconbutton_sender_isbase = value; }
    inline void setKIconButton_SenderSignalIndex_IsBase(bool value) const { kiconbutton_sendersignalindex_isbase = value; }
    inline void setKIconButton_Receivers_IsBase(bool value) const { kiconbutton_receivers_isbase = value; }
    inline void setKIconButton_IsSignalConnected_IsBase(bool value) const { kiconbutton_issignalconnected_isbase = value; }
    inline void setKIconButton_GetDecodedMetricF_IsBase(bool value) const { kiconbutton_getdecodedmetricf_isbase = value; }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (kiconbutton_metacall_isbase) {
            kiconbutton_metacall_isbase = false;
            return KIconButton::qt_metacall(param1, param2, param3);
        } else if (kiconbutton_metacall_callback != nullptr) {
            int cbval1 = static_cast<int>(param1);
            int cbval2 = param2;
            void** cbval3 = param3;

            int callback_ret = kiconbutton_metacall_callback(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        } else {
            return KIconButton::qt_metacall(param1, param2, param3);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QSize sizeHint() const override {
        if (kiconbutton_sizehint_isbase) {
            kiconbutton_sizehint_isbase = false;
            return KIconButton::sizeHint();
        } else if (kiconbutton_sizehint_callback != nullptr) {
            QSize* callback_ret = kiconbutton_sizehint_callback();
            return *callback_ret;
        } else {
            return KIconButton::sizeHint();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QSize minimumSizeHint() const override {
        if (kiconbutton_minimumsizehint_isbase) {
            kiconbutton_minimumsizehint_isbase = false;
            return KIconButton::minimumSizeHint();
        } else if (kiconbutton_minimumsizehint_callback != nullptr) {
            QSize* callback_ret = kiconbutton_minimumsizehint_callback();
            return *callback_ret;
        } else {
            return KIconButton::minimumSizeHint();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* e) override {
        if (kiconbutton_event_isbase) {
            kiconbutton_event_isbase = false;
            return KIconButton::event(e);
        } else if (kiconbutton_event_callback != nullptr) {
            QEvent* cbval1 = e;

            bool callback_ret = kiconbutton_event_callback(this, cbval1);
            return callback_ret;
        } else {
            return KIconButton::event(e);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void paintEvent(QPaintEvent* param1) override {
        if (kiconbutton_paintevent_isbase) {
            kiconbutton_paintevent_isbase = false;
            KIconButton::paintEvent(param1);
        } else if (kiconbutton_paintevent_callback != nullptr) {
            QPaintEvent* cbval1 = param1;

            kiconbutton_paintevent_callback(this, cbval1);
        } else {
            KIconButton::paintEvent(param1);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void keyPressEvent(QKeyEvent* param1) override {
        if (kiconbutton_keypressevent_isbase) {
            kiconbutton_keypressevent_isbase = false;
            KIconButton::keyPressEvent(param1);
        } else if (kiconbutton_keypressevent_callback != nullptr) {
            QKeyEvent* cbval1 = param1;

            kiconbutton_keypressevent_callback(this, cbval1);
        } else {
            KIconButton::keyPressEvent(param1);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void focusInEvent(QFocusEvent* param1) override {
        if (kiconbutton_focusinevent_isbase) {
            kiconbutton_focusinevent_isbase = false;
            KIconButton::focusInEvent(param1);
        } else if (kiconbutton_focusinevent_callback != nullptr) {
            QFocusEvent* cbval1 = param1;

            kiconbutton_focusinevent_callback(this, cbval1);
        } else {
            KIconButton::focusInEvent(param1);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void focusOutEvent(QFocusEvent* param1) override {
        if (kiconbutton_focusoutevent_isbase) {
            kiconbutton_focusoutevent_isbase = false;
            KIconButton::focusOutEvent(param1);
        } else if (kiconbutton_focusoutevent_callback != nullptr) {
            QFocusEvent* cbval1 = param1;

            kiconbutton_focusoutevent_callback(this, cbval1);
        } else {
            KIconButton::focusOutEvent(param1);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseMoveEvent(QMouseEvent* param1) override {
        if (kiconbutton_mousemoveevent_isbase) {
            kiconbutton_mousemoveevent_isbase = false;
            KIconButton::mouseMoveEvent(param1);
        } else if (kiconbutton_mousemoveevent_callback != nullptr) {
            QMouseEvent* cbval1 = param1;

            kiconbutton_mousemoveevent_callback(this, cbval1);
        } else {
            KIconButton::mouseMoveEvent(param1);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void initStyleOption(QStyleOptionButton* option) const override {
        if (kiconbutton_initstyleoption_isbase) {
            kiconbutton_initstyleoption_isbase = false;
            KIconButton::initStyleOption(option);
        } else if (kiconbutton_initstyleoption_callback != nullptr) {
            QStyleOptionButton* cbval1 = option;

            kiconbutton_initstyleoption_callback(this, cbval1);
        } else {
            KIconButton::initStyleOption(option);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool hitButton(const QPoint& pos) const override {
        if (kiconbutton_hitbutton_isbase) {
            kiconbutton_hitbutton_isbase = false;
            return KIconButton::hitButton(pos);
        } else if (kiconbutton_hitbutton_callback != nullptr) {
            const QPoint& pos_ret = pos;
            // Cast returned reference into pointer
            QPoint* cbval1 = const_cast<QPoint*>(&pos_ret);

            bool callback_ret = kiconbutton_hitbutton_callback(this, cbval1);
            return callback_ret;
        } else {
            return KIconButton::hitButton(pos);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void checkStateSet() override {
        if (kiconbutton_checkstateset_isbase) {
            kiconbutton_checkstateset_isbase = false;
            KIconButton::checkStateSet();
        } else if (kiconbutton_checkstateset_callback != nullptr) {
            kiconbutton_checkstateset_callback();
        } else {
            KIconButton::checkStateSet();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void nextCheckState() override {
        if (kiconbutton_nextcheckstate_isbase) {
            kiconbutton_nextcheckstate_isbase = false;
            KIconButton::nextCheckState();
        } else if (kiconbutton_nextcheckstate_callback != nullptr) {
            kiconbutton_nextcheckstate_callback();
        } else {
            KIconButton::nextCheckState();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void keyReleaseEvent(QKeyEvent* e) override {
        if (kiconbutton_keyreleaseevent_isbase) {
            kiconbutton_keyreleaseevent_isbase = false;
            KIconButton::keyReleaseEvent(e);
        } else if (kiconbutton_keyreleaseevent_callback != nullptr) {
            QKeyEvent* cbval1 = e;

            kiconbutton_keyreleaseevent_callback(this, cbval1);
        } else {
            KIconButton::keyReleaseEvent(e);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void mousePressEvent(QMouseEvent* e) override {
        if (kiconbutton_mousepressevent_isbase) {
            kiconbutton_mousepressevent_isbase = false;
            KIconButton::mousePressEvent(e);
        } else if (kiconbutton_mousepressevent_callback != nullptr) {
            QMouseEvent* cbval1 = e;

            kiconbutton_mousepressevent_callback(this, cbval1);
        } else {
            KIconButton::mousePressEvent(e);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseReleaseEvent(QMouseEvent* e) override {
        if (kiconbutton_mousereleaseevent_isbase) {
            kiconbutton_mousereleaseevent_isbase = false;
            KIconButton::mouseReleaseEvent(e);
        } else if (kiconbutton_mousereleaseevent_callback != nullptr) {
            QMouseEvent* cbval1 = e;

            kiconbutton_mousereleaseevent_callback(this, cbval1);
        } else {
            KIconButton::mouseReleaseEvent(e);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void changeEvent(QEvent* e) override {
        if (kiconbutton_changeevent_isbase) {
            kiconbutton_changeevent_isbase = false;
            KIconButton::changeEvent(e);
        } else if (kiconbutton_changeevent_callback != nullptr) {
            QEvent* cbval1 = e;

            kiconbutton_changeevent_callback(this, cbval1);
        } else {
            KIconButton::changeEvent(e);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* e) override {
        if (kiconbutton_timerevent_isbase) {
            kiconbutton_timerevent_isbase = false;
            KIconButton::timerEvent(e);
        } else if (kiconbutton_timerevent_callback != nullptr) {
            QTimerEvent* cbval1 = e;

            kiconbutton_timerevent_callback(this, cbval1);
        } else {
            KIconButton::timerEvent(e);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual int devType() const override {
        if (kiconbutton_devtype_isbase) {
            kiconbutton_devtype_isbase = false;
            return KIconButton::devType();
        } else if (kiconbutton_devtype_callback != nullptr) {
            int callback_ret = kiconbutton_devtype_callback();
            return static_cast<int>(callback_ret);
        } else {
            return KIconButton::devType();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void setVisible(bool visible) override {
        if (kiconbutton_setvisible_isbase) {
            kiconbutton_setvisible_isbase = false;
            KIconButton::setVisible(visible);
        } else if (kiconbutton_setvisible_callback != nullptr) {
            bool cbval1 = visible;

            kiconbutton_setvisible_callback(this, cbval1);
        } else {
            KIconButton::setVisible(visible);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual int heightForWidth(int param1) const override {
        if (kiconbutton_heightforwidth_isbase) {
            kiconbutton_heightforwidth_isbase = false;
            return KIconButton::heightForWidth(param1);
        } else if (kiconbutton_heightforwidth_callback != nullptr) {
            int cbval1 = param1;

            int callback_ret = kiconbutton_heightforwidth_callback(this, cbval1);
            return static_cast<int>(callback_ret);
        } else {
            return KIconButton::heightForWidth(param1);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool hasHeightForWidth() const override {
        if (kiconbutton_hasheightforwidth_isbase) {
            kiconbutton_hasheightforwidth_isbase = false;
            return KIconButton::hasHeightForWidth();
        } else if (kiconbutton_hasheightforwidth_callback != nullptr) {
            bool callback_ret = kiconbutton_hasheightforwidth_callback();
            return callback_ret;
        } else {
            return KIconButton::hasHeightForWidth();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QPaintEngine* paintEngine() const override {
        if (kiconbutton_paintengine_isbase) {
            kiconbutton_paintengine_isbase = false;
            return KIconButton::paintEngine();
        } else if (kiconbutton_paintengine_callback != nullptr) {
            QPaintEngine* callback_ret = kiconbutton_paintengine_callback();
            return callback_ret;
        } else {
            return KIconButton::paintEngine();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseDoubleClickEvent(QMouseEvent* event) override {
        if (kiconbutton_mousedoubleclickevent_isbase) {
            kiconbutton_mousedoubleclickevent_isbase = false;
            KIconButton::mouseDoubleClickEvent(event);
        } else if (kiconbutton_mousedoubleclickevent_callback != nullptr) {
            QMouseEvent* cbval1 = event;

            kiconbutton_mousedoubleclickevent_callback(this, cbval1);
        } else {
            KIconButton::mouseDoubleClickEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void wheelEvent(QWheelEvent* event) override {
        if (kiconbutton_wheelevent_isbase) {
            kiconbutton_wheelevent_isbase = false;
            KIconButton::wheelEvent(event);
        } else if (kiconbutton_wheelevent_callback != nullptr) {
            QWheelEvent* cbval1 = event;

            kiconbutton_wheelevent_callback(this, cbval1);
        } else {
            KIconButton::wheelEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void enterEvent(QEnterEvent* event) override {
        if (kiconbutton_enterevent_isbase) {
            kiconbutton_enterevent_isbase = false;
            KIconButton::enterEvent(event);
        } else if (kiconbutton_enterevent_callback != nullptr) {
            QEnterEvent* cbval1 = event;

            kiconbutton_enterevent_callback(this, cbval1);
        } else {
            KIconButton::enterEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void leaveEvent(QEvent* event) override {
        if (kiconbutton_leaveevent_isbase) {
            kiconbutton_leaveevent_isbase = false;
            KIconButton::leaveEvent(event);
        } else if (kiconbutton_leaveevent_callback != nullptr) {
            QEvent* cbval1 = event;

            kiconbutton_leaveevent_callback(this, cbval1);
        } else {
            KIconButton::leaveEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void moveEvent(QMoveEvent* event) override {
        if (kiconbutton_moveevent_isbase) {
            kiconbutton_moveevent_isbase = false;
            KIconButton::moveEvent(event);
        } else if (kiconbutton_moveevent_callback != nullptr) {
            QMoveEvent* cbval1 = event;

            kiconbutton_moveevent_callback(this, cbval1);
        } else {
            KIconButton::moveEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void resizeEvent(QResizeEvent* event) override {
        if (kiconbutton_resizeevent_isbase) {
            kiconbutton_resizeevent_isbase = false;
            KIconButton::resizeEvent(event);
        } else if (kiconbutton_resizeevent_callback != nullptr) {
            QResizeEvent* cbval1 = event;

            kiconbutton_resizeevent_callback(this, cbval1);
        } else {
            KIconButton::resizeEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void closeEvent(QCloseEvent* event) override {
        if (kiconbutton_closeevent_isbase) {
            kiconbutton_closeevent_isbase = false;
            KIconButton::closeEvent(event);
        } else if (kiconbutton_closeevent_callback != nullptr) {
            QCloseEvent* cbval1 = event;

            kiconbutton_closeevent_callback(this, cbval1);
        } else {
            KIconButton::closeEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void contextMenuEvent(QContextMenuEvent* event) override {
        if (kiconbutton_contextmenuevent_isbase) {
            kiconbutton_contextmenuevent_isbase = false;
            KIconButton::contextMenuEvent(event);
        } else if (kiconbutton_contextmenuevent_callback != nullptr) {
            QContextMenuEvent* cbval1 = event;

            kiconbutton_contextmenuevent_callback(this, cbval1);
        } else {
            KIconButton::contextMenuEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void tabletEvent(QTabletEvent* event) override {
        if (kiconbutton_tabletevent_isbase) {
            kiconbutton_tabletevent_isbase = false;
            KIconButton::tabletEvent(event);
        } else if (kiconbutton_tabletevent_callback != nullptr) {
            QTabletEvent* cbval1 = event;

            kiconbutton_tabletevent_callback(this, cbval1);
        } else {
            KIconButton::tabletEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void actionEvent(QActionEvent* event) override {
        if (kiconbutton_actionevent_isbase) {
            kiconbutton_actionevent_isbase = false;
            KIconButton::actionEvent(event);
        } else if (kiconbutton_actionevent_callback != nullptr) {
            QActionEvent* cbval1 = event;

            kiconbutton_actionevent_callback(this, cbval1);
        } else {
            KIconButton::actionEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragEnterEvent(QDragEnterEvent* event) override {
        if (kiconbutton_dragenterevent_isbase) {
            kiconbutton_dragenterevent_isbase = false;
            KIconButton::dragEnterEvent(event);
        } else if (kiconbutton_dragenterevent_callback != nullptr) {
            QDragEnterEvent* cbval1 = event;

            kiconbutton_dragenterevent_callback(this, cbval1);
        } else {
            KIconButton::dragEnterEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragMoveEvent(QDragMoveEvent* event) override {
        if (kiconbutton_dragmoveevent_isbase) {
            kiconbutton_dragmoveevent_isbase = false;
            KIconButton::dragMoveEvent(event);
        } else if (kiconbutton_dragmoveevent_callback != nullptr) {
            QDragMoveEvent* cbval1 = event;

            kiconbutton_dragmoveevent_callback(this, cbval1);
        } else {
            KIconButton::dragMoveEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragLeaveEvent(QDragLeaveEvent* event) override {
        if (kiconbutton_dragleaveevent_isbase) {
            kiconbutton_dragleaveevent_isbase = false;
            KIconButton::dragLeaveEvent(event);
        } else if (kiconbutton_dragleaveevent_callback != nullptr) {
            QDragLeaveEvent* cbval1 = event;

            kiconbutton_dragleaveevent_callback(this, cbval1);
        } else {
            KIconButton::dragLeaveEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void dropEvent(QDropEvent* event) override {
        if (kiconbutton_dropevent_isbase) {
            kiconbutton_dropevent_isbase = false;
            KIconButton::dropEvent(event);
        } else if (kiconbutton_dropevent_callback != nullptr) {
            QDropEvent* cbval1 = event;

            kiconbutton_dropevent_callback(this, cbval1);
        } else {
            KIconButton::dropEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void showEvent(QShowEvent* event) override {
        if (kiconbutton_showevent_isbase) {
            kiconbutton_showevent_isbase = false;
            KIconButton::showEvent(event);
        } else if (kiconbutton_showevent_callback != nullptr) {
            QShowEvent* cbval1 = event;

            kiconbutton_showevent_callback(this, cbval1);
        } else {
            KIconButton::showEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void hideEvent(QHideEvent* event) override {
        if (kiconbutton_hideevent_isbase) {
            kiconbutton_hideevent_isbase = false;
            KIconButton::hideEvent(event);
        } else if (kiconbutton_hideevent_callback != nullptr) {
            QHideEvent* cbval1 = event;

            kiconbutton_hideevent_callback(this, cbval1);
        } else {
            KIconButton::hideEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool nativeEvent(const QByteArray& eventType, void* message, qintptr* result) override {
        if (kiconbutton_nativeevent_isbase) {
            kiconbutton_nativeevent_isbase = false;
            return KIconButton::nativeEvent(eventType, message, result);
        } else if (kiconbutton_nativeevent_callback != nullptr) {
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

            bool callback_ret = kiconbutton_nativeevent_callback(this, cbval1, cbval2, cbval3);
            return callback_ret;
        } else {
            return KIconButton::nativeEvent(eventType, message, result);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual int metric(QPaintDevice::PaintDeviceMetric param1) const override {
        if (kiconbutton_metric_isbase) {
            kiconbutton_metric_isbase = false;
            return KIconButton::metric(param1);
        } else if (kiconbutton_metric_callback != nullptr) {
            int cbval1 = static_cast<int>(param1);

            int callback_ret = kiconbutton_metric_callback(this, cbval1);
            return static_cast<int>(callback_ret);
        } else {
            return KIconButton::metric(param1);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void initPainter(QPainter* painter) const override {
        if (kiconbutton_initpainter_isbase) {
            kiconbutton_initpainter_isbase = false;
            KIconButton::initPainter(painter);
        } else if (kiconbutton_initpainter_callback != nullptr) {
            QPainter* cbval1 = painter;

            kiconbutton_initpainter_callback(this, cbval1);
        } else {
            KIconButton::initPainter(painter);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QPaintDevice* redirected(QPoint* offset) const override {
        if (kiconbutton_redirected_isbase) {
            kiconbutton_redirected_isbase = false;
            return KIconButton::redirected(offset);
        } else if (kiconbutton_redirected_callback != nullptr) {
            QPoint* cbval1 = offset;

            QPaintDevice* callback_ret = kiconbutton_redirected_callback(this, cbval1);
            return callback_ret;
        } else {
            return KIconButton::redirected(offset);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QPainter* sharedPainter() const override {
        if (kiconbutton_sharedpainter_isbase) {
            kiconbutton_sharedpainter_isbase = false;
            return KIconButton::sharedPainter();
        } else if (kiconbutton_sharedpainter_callback != nullptr) {
            QPainter* callback_ret = kiconbutton_sharedpainter_callback();
            return callback_ret;
        } else {
            return KIconButton::sharedPainter();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void inputMethodEvent(QInputMethodEvent* param1) override {
        if (kiconbutton_inputmethodevent_isbase) {
            kiconbutton_inputmethodevent_isbase = false;
            KIconButton::inputMethodEvent(param1);
        } else if (kiconbutton_inputmethodevent_callback != nullptr) {
            QInputMethodEvent* cbval1 = param1;

            kiconbutton_inputmethodevent_callback(this, cbval1);
        } else {
            KIconButton::inputMethodEvent(param1);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QVariant inputMethodQuery(Qt::InputMethodQuery param1) const override {
        if (kiconbutton_inputmethodquery_isbase) {
            kiconbutton_inputmethodquery_isbase = false;
            return KIconButton::inputMethodQuery(param1);
        } else if (kiconbutton_inputmethodquery_callback != nullptr) {
            int cbval1 = static_cast<int>(param1);

            QVariant* callback_ret = kiconbutton_inputmethodquery_callback(this, cbval1);
            return *callback_ret;
        } else {
            return KIconButton::inputMethodQuery(param1);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool focusNextPrevChild(bool next) override {
        if (kiconbutton_focusnextprevchild_isbase) {
            kiconbutton_focusnextprevchild_isbase = false;
            return KIconButton::focusNextPrevChild(next);
        } else if (kiconbutton_focusnextprevchild_callback != nullptr) {
            bool cbval1 = next;

            bool callback_ret = kiconbutton_focusnextprevchild_callback(this, cbval1);
            return callback_ret;
        } else {
            return KIconButton::focusNextPrevChild(next);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* watched, QEvent* event) override {
        if (kiconbutton_eventfilter_isbase) {
            kiconbutton_eventfilter_isbase = false;
            return KIconButton::eventFilter(watched, event);
        } else if (kiconbutton_eventfilter_callback != nullptr) {
            QObject* cbval1 = watched;
            QEvent* cbval2 = event;

            bool callback_ret = kiconbutton_eventfilter_callback(this, cbval1, cbval2);
            return callback_ret;
        } else {
            return KIconButton::eventFilter(watched, event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (kiconbutton_childevent_isbase) {
            kiconbutton_childevent_isbase = false;
            KIconButton::childEvent(event);
        } else if (kiconbutton_childevent_callback != nullptr) {
            QChildEvent* cbval1 = event;

            kiconbutton_childevent_callback(this, cbval1);
        } else {
            KIconButton::childEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (kiconbutton_customevent_isbase) {
            kiconbutton_customevent_isbase = false;
            KIconButton::customEvent(event);
        } else if (kiconbutton_customevent_callback != nullptr) {
            QEvent* cbval1 = event;

            kiconbutton_customevent_callback(this, cbval1);
        } else {
            KIconButton::customEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (kiconbutton_connectnotify_isbase) {
            kiconbutton_connectnotify_isbase = false;
            KIconButton::connectNotify(signal);
        } else if (kiconbutton_connectnotify_callback != nullptr) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            kiconbutton_connectnotify_callback(this, cbval1);
        } else {
            KIconButton::connectNotify(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (kiconbutton_disconnectnotify_isbase) {
            kiconbutton_disconnectnotify_isbase = false;
            KIconButton::disconnectNotify(signal);
        } else if (kiconbutton_disconnectnotify_callback != nullptr) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            kiconbutton_disconnectnotify_callback(this, cbval1);
        } else {
            KIconButton::disconnectNotify(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    void updateMicroFocus() {
        if (kiconbutton_updatemicrofocus_isbase) {
            kiconbutton_updatemicrofocus_isbase = false;
            KIconButton::updateMicroFocus();
        } else if (kiconbutton_updatemicrofocus_callback != nullptr) {
            kiconbutton_updatemicrofocus_callback();
        } else {
            KIconButton::updateMicroFocus();
        }
    }

    // Virtual method for C ABI access and custom callback
    void create() {
        if (kiconbutton_create_isbase) {
            kiconbutton_create_isbase = false;
            KIconButton::create();
        } else if (kiconbutton_create_callback != nullptr) {
            kiconbutton_create_callback();
        } else {
            KIconButton::create();
        }
    }

    // Virtual method for C ABI access and custom callback
    void destroy() {
        if (kiconbutton_destroy_isbase) {
            kiconbutton_destroy_isbase = false;
            KIconButton::destroy();
        } else if (kiconbutton_destroy_callback != nullptr) {
            kiconbutton_destroy_callback();
        } else {
            KIconButton::destroy();
        }
    }

    // Virtual method for C ABI access and custom callback
    bool focusNextChild() {
        if (kiconbutton_focusnextchild_isbase) {
            kiconbutton_focusnextchild_isbase = false;
            return KIconButton::focusNextChild();
        } else if (kiconbutton_focusnextchild_callback != nullptr) {
            bool callback_ret = kiconbutton_focusnextchild_callback();
            return callback_ret;
        } else {
            return KIconButton::focusNextChild();
        }
    }

    // Virtual method for C ABI access and custom callback
    bool focusPreviousChild() {
        if (kiconbutton_focuspreviouschild_isbase) {
            kiconbutton_focuspreviouschild_isbase = false;
            return KIconButton::focusPreviousChild();
        } else if (kiconbutton_focuspreviouschild_callback != nullptr) {
            bool callback_ret = kiconbutton_focuspreviouschild_callback();
            return callback_ret;
        } else {
            return KIconButton::focusPreviousChild();
        }
    }

    // Virtual method for C ABI access and custom callback
    QObject* sender() const {
        if (kiconbutton_sender_isbase) {
            kiconbutton_sender_isbase = false;
            return KIconButton::sender();
        } else if (kiconbutton_sender_callback != nullptr) {
            QObject* callback_ret = kiconbutton_sender_callback();
            return callback_ret;
        } else {
            return KIconButton::sender();
        }
    }

    // Virtual method for C ABI access and custom callback
    int senderSignalIndex() const {
        if (kiconbutton_sendersignalindex_isbase) {
            kiconbutton_sendersignalindex_isbase = false;
            return KIconButton::senderSignalIndex();
        } else if (kiconbutton_sendersignalindex_callback != nullptr) {
            int callback_ret = kiconbutton_sendersignalindex_callback();
            return static_cast<int>(callback_ret);
        } else {
            return KIconButton::senderSignalIndex();
        }
    }

    // Virtual method for C ABI access and custom callback
    int receivers(const char* signal) const {
        if (kiconbutton_receivers_isbase) {
            kiconbutton_receivers_isbase = false;
            return KIconButton::receivers(signal);
        } else if (kiconbutton_receivers_callback != nullptr) {
            const char* cbval1 = (const char*)signal;

            int callback_ret = kiconbutton_receivers_callback(this, cbval1);
            return static_cast<int>(callback_ret);
        } else {
            return KIconButton::receivers(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    bool isSignalConnected(const QMetaMethod& signal) const {
        if (kiconbutton_issignalconnected_isbase) {
            kiconbutton_issignalconnected_isbase = false;
            return KIconButton::isSignalConnected(signal);
        } else if (kiconbutton_issignalconnected_callback != nullptr) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            bool callback_ret = kiconbutton_issignalconnected_callback(this, cbval1);
            return callback_ret;
        } else {
            return KIconButton::isSignalConnected(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    double getDecodedMetricF(QPaintDevice::PaintDeviceMetric metricA, QPaintDevice::PaintDeviceMetric metricB) const {
        if (kiconbutton_getdecodedmetricf_isbase) {
            kiconbutton_getdecodedmetricf_isbase = false;
            return KIconButton::getDecodedMetricF(metricA, metricB);
        } else if (kiconbutton_getdecodedmetricf_callback != nullptr) {
            int cbval1 = static_cast<int>(metricA);
            int cbval2 = static_cast<int>(metricB);

            double callback_ret = kiconbutton_getdecodedmetricf_callback(this, cbval1, cbval2);
            return static_cast<double>(callback_ret);
        } else {
            return KIconButton::getDecodedMetricF(metricA, metricB);
        }
    }

    // Friend functions
    friend bool KIconButton_Event(KIconButton* self, QEvent* e);
    friend bool KIconButton_QBaseEvent(KIconButton* self, QEvent* e);
    friend void KIconButton_PaintEvent(KIconButton* self, QPaintEvent* param1);
    friend void KIconButton_QBasePaintEvent(KIconButton* self, QPaintEvent* param1);
    friend void KIconButton_KeyPressEvent(KIconButton* self, QKeyEvent* param1);
    friend void KIconButton_QBaseKeyPressEvent(KIconButton* self, QKeyEvent* param1);
    friend void KIconButton_FocusInEvent(KIconButton* self, QFocusEvent* param1);
    friend void KIconButton_QBaseFocusInEvent(KIconButton* self, QFocusEvent* param1);
    friend void KIconButton_FocusOutEvent(KIconButton* self, QFocusEvent* param1);
    friend void KIconButton_QBaseFocusOutEvent(KIconButton* self, QFocusEvent* param1);
    friend void KIconButton_MouseMoveEvent(KIconButton* self, QMouseEvent* param1);
    friend void KIconButton_QBaseMouseMoveEvent(KIconButton* self, QMouseEvent* param1);
    friend void KIconButton_InitStyleOption(const KIconButton* self, QStyleOptionButton* option);
    friend void KIconButton_QBaseInitStyleOption(const KIconButton* self, QStyleOptionButton* option);
    friend bool KIconButton_HitButton(const KIconButton* self, const QPoint* pos);
    friend bool KIconButton_QBaseHitButton(const KIconButton* self, const QPoint* pos);
    friend void KIconButton_CheckStateSet(KIconButton* self);
    friend void KIconButton_QBaseCheckStateSet(KIconButton* self);
    friend void KIconButton_NextCheckState(KIconButton* self);
    friend void KIconButton_QBaseNextCheckState(KIconButton* self);
    friend void KIconButton_KeyReleaseEvent(KIconButton* self, QKeyEvent* e);
    friend void KIconButton_QBaseKeyReleaseEvent(KIconButton* self, QKeyEvent* e);
    friend void KIconButton_MousePressEvent(KIconButton* self, QMouseEvent* e);
    friend void KIconButton_QBaseMousePressEvent(KIconButton* self, QMouseEvent* e);
    friend void KIconButton_MouseReleaseEvent(KIconButton* self, QMouseEvent* e);
    friend void KIconButton_QBaseMouseReleaseEvent(KIconButton* self, QMouseEvent* e);
    friend void KIconButton_ChangeEvent(KIconButton* self, QEvent* e);
    friend void KIconButton_QBaseChangeEvent(KIconButton* self, QEvent* e);
    friend void KIconButton_TimerEvent(KIconButton* self, QTimerEvent* e);
    friend void KIconButton_QBaseTimerEvent(KIconButton* self, QTimerEvent* e);
    friend void KIconButton_MouseDoubleClickEvent(KIconButton* self, QMouseEvent* event);
    friend void KIconButton_QBaseMouseDoubleClickEvent(KIconButton* self, QMouseEvent* event);
    friend void KIconButton_WheelEvent(KIconButton* self, QWheelEvent* event);
    friend void KIconButton_QBaseWheelEvent(KIconButton* self, QWheelEvent* event);
    friend void KIconButton_EnterEvent(KIconButton* self, QEnterEvent* event);
    friend void KIconButton_QBaseEnterEvent(KIconButton* self, QEnterEvent* event);
    friend void KIconButton_LeaveEvent(KIconButton* self, QEvent* event);
    friend void KIconButton_QBaseLeaveEvent(KIconButton* self, QEvent* event);
    friend void KIconButton_MoveEvent(KIconButton* self, QMoveEvent* event);
    friend void KIconButton_QBaseMoveEvent(KIconButton* self, QMoveEvent* event);
    friend void KIconButton_ResizeEvent(KIconButton* self, QResizeEvent* event);
    friend void KIconButton_QBaseResizeEvent(KIconButton* self, QResizeEvent* event);
    friend void KIconButton_CloseEvent(KIconButton* self, QCloseEvent* event);
    friend void KIconButton_QBaseCloseEvent(KIconButton* self, QCloseEvent* event);
    friend void KIconButton_ContextMenuEvent(KIconButton* self, QContextMenuEvent* event);
    friend void KIconButton_QBaseContextMenuEvent(KIconButton* self, QContextMenuEvent* event);
    friend void KIconButton_TabletEvent(KIconButton* self, QTabletEvent* event);
    friend void KIconButton_QBaseTabletEvent(KIconButton* self, QTabletEvent* event);
    friend void KIconButton_ActionEvent(KIconButton* self, QActionEvent* event);
    friend void KIconButton_QBaseActionEvent(KIconButton* self, QActionEvent* event);
    friend void KIconButton_DragEnterEvent(KIconButton* self, QDragEnterEvent* event);
    friend void KIconButton_QBaseDragEnterEvent(KIconButton* self, QDragEnterEvent* event);
    friend void KIconButton_DragMoveEvent(KIconButton* self, QDragMoveEvent* event);
    friend void KIconButton_QBaseDragMoveEvent(KIconButton* self, QDragMoveEvent* event);
    friend void KIconButton_DragLeaveEvent(KIconButton* self, QDragLeaveEvent* event);
    friend void KIconButton_QBaseDragLeaveEvent(KIconButton* self, QDragLeaveEvent* event);
    friend void KIconButton_DropEvent(KIconButton* self, QDropEvent* event);
    friend void KIconButton_QBaseDropEvent(KIconButton* self, QDropEvent* event);
    friend void KIconButton_ShowEvent(KIconButton* self, QShowEvent* event);
    friend void KIconButton_QBaseShowEvent(KIconButton* self, QShowEvent* event);
    friend void KIconButton_HideEvent(KIconButton* self, QHideEvent* event);
    friend void KIconButton_QBaseHideEvent(KIconButton* self, QHideEvent* event);
    friend bool KIconButton_NativeEvent(KIconButton* self, const libqt_string eventType, void* message, intptr_t* result);
    friend bool KIconButton_QBaseNativeEvent(KIconButton* self, const libqt_string eventType, void* message, intptr_t* result);
    friend int KIconButton_Metric(const KIconButton* self, int param1);
    friend int KIconButton_QBaseMetric(const KIconButton* self, int param1);
    friend void KIconButton_InitPainter(const KIconButton* self, QPainter* painter);
    friend void KIconButton_QBaseInitPainter(const KIconButton* self, QPainter* painter);
    friend QPaintDevice* KIconButton_Redirected(const KIconButton* self, QPoint* offset);
    friend QPaintDevice* KIconButton_QBaseRedirected(const KIconButton* self, QPoint* offset);
    friend QPainter* KIconButton_SharedPainter(const KIconButton* self);
    friend QPainter* KIconButton_QBaseSharedPainter(const KIconButton* self);
    friend void KIconButton_InputMethodEvent(KIconButton* self, QInputMethodEvent* param1);
    friend void KIconButton_QBaseInputMethodEvent(KIconButton* self, QInputMethodEvent* param1);
    friend bool KIconButton_FocusNextPrevChild(KIconButton* self, bool next);
    friend bool KIconButton_QBaseFocusNextPrevChild(KIconButton* self, bool next);
    friend void KIconButton_ChildEvent(KIconButton* self, QChildEvent* event);
    friend void KIconButton_QBaseChildEvent(KIconButton* self, QChildEvent* event);
    friend void KIconButton_CustomEvent(KIconButton* self, QEvent* event);
    friend void KIconButton_QBaseCustomEvent(KIconButton* self, QEvent* event);
    friend void KIconButton_ConnectNotify(KIconButton* self, const QMetaMethod* signal);
    friend void KIconButton_QBaseConnectNotify(KIconButton* self, const QMetaMethod* signal);
    friend void KIconButton_DisconnectNotify(KIconButton* self, const QMetaMethod* signal);
    friend void KIconButton_QBaseDisconnectNotify(KIconButton* self, const QMetaMethod* signal);
    friend void KIconButton_UpdateMicroFocus(KIconButton* self);
    friend void KIconButton_QBaseUpdateMicroFocus(KIconButton* self);
    friend void KIconButton_Create(KIconButton* self);
    friend void KIconButton_QBaseCreate(KIconButton* self);
    friend void KIconButton_Destroy(KIconButton* self);
    friend void KIconButton_QBaseDestroy(KIconButton* self);
    friend bool KIconButton_FocusNextChild(KIconButton* self);
    friend bool KIconButton_QBaseFocusNextChild(KIconButton* self);
    friend bool KIconButton_FocusPreviousChild(KIconButton* self);
    friend bool KIconButton_QBaseFocusPreviousChild(KIconButton* self);
    friend QObject* KIconButton_Sender(const KIconButton* self);
    friend QObject* KIconButton_QBaseSender(const KIconButton* self);
    friend int KIconButton_SenderSignalIndex(const KIconButton* self);
    friend int KIconButton_QBaseSenderSignalIndex(const KIconButton* self);
    friend int KIconButton_Receivers(const KIconButton* self, const char* signal);
    friend int KIconButton_QBaseReceivers(const KIconButton* self, const char* signal);
    friend bool KIconButton_IsSignalConnected(const KIconButton* self, const QMetaMethod* signal);
    friend bool KIconButton_QBaseIsSignalConnected(const KIconButton* self, const QMetaMethod* signal);
    friend double KIconButton_GetDecodedMetricF(const KIconButton* self, int metricA, int metricB);
    friend double KIconButton_QBaseGetDecodedMetricF(const KIconButton* self, int metricA, int metricB);
};

#endif
