#pragma once
#ifndef SRC_EXTRAS_KWIDGETSADDONSC_LIBVIRTUALKCONTEXTUALHELPBUTTON_H
#define SRC_EXTRAS_KWIDGETSADDONSC_LIBVIRTUALKCONTEXTUALHELPBUTTON_H

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

// This class is a subclass of KContextualHelpButton so that we can call protected methods
class VirtualKContextualHelpButton final : public KContextualHelpButton {

  public:
    // Virtual class boolean flag
    bool isVirtualKContextualHelpButton = true;

    // Virtual class public types (including callbacks)
    using KContextualHelpButton_Metacall_Callback = int (*)(KContextualHelpButton*, int, int, void**);
    using KContextualHelpButton_SizeHint_Callback = QSize* (*)();
    using KContextualHelpButton_MinimumSizeHint_Callback = QSize* (*)();
    using KContextualHelpButton_Event_Callback = bool (*)(KContextualHelpButton*, QEvent*);
    using KContextualHelpButton_MousePressEvent_Callback = void (*)(KContextualHelpButton*, QMouseEvent*);
    using KContextualHelpButton_MouseReleaseEvent_Callback = void (*)(KContextualHelpButton*, QMouseEvent*);
    using KContextualHelpButton_PaintEvent_Callback = void (*)(KContextualHelpButton*, QPaintEvent*);
    using KContextualHelpButton_ActionEvent_Callback = void (*)(KContextualHelpButton*, QActionEvent*);
    using KContextualHelpButton_EnterEvent_Callback = void (*)(KContextualHelpButton*, QEnterEvent*);
    using KContextualHelpButton_LeaveEvent_Callback = void (*)(KContextualHelpButton*, QEvent*);
    using KContextualHelpButton_TimerEvent_Callback = void (*)(KContextualHelpButton*, QTimerEvent*);
    using KContextualHelpButton_ChangeEvent_Callback = void (*)(KContextualHelpButton*, QEvent*);
    using KContextualHelpButton_HitButton_Callback = bool (*)(const KContextualHelpButton*, QPoint*);
    using KContextualHelpButton_CheckStateSet_Callback = void (*)();
    using KContextualHelpButton_NextCheckState_Callback = void (*)();
    using KContextualHelpButton_InitStyleOption_Callback = void (*)(const KContextualHelpButton*, QStyleOptionToolButton*);
    using KContextualHelpButton_KeyPressEvent_Callback = void (*)(KContextualHelpButton*, QKeyEvent*);
    using KContextualHelpButton_KeyReleaseEvent_Callback = void (*)(KContextualHelpButton*, QKeyEvent*);
    using KContextualHelpButton_MouseMoveEvent_Callback = void (*)(KContextualHelpButton*, QMouseEvent*);
    using KContextualHelpButton_FocusInEvent_Callback = void (*)(KContextualHelpButton*, QFocusEvent*);
    using KContextualHelpButton_FocusOutEvent_Callback = void (*)(KContextualHelpButton*, QFocusEvent*);
    using KContextualHelpButton_DevType_Callback = int (*)();
    using KContextualHelpButton_SetVisible_Callback = void (*)(KContextualHelpButton*, bool);
    using KContextualHelpButton_HeightForWidth_Callback = int (*)(const KContextualHelpButton*, int);
    using KContextualHelpButton_HasHeightForWidth_Callback = bool (*)();
    using KContextualHelpButton_PaintEngine_Callback = QPaintEngine* (*)();
    using KContextualHelpButton_MouseDoubleClickEvent_Callback = void (*)(KContextualHelpButton*, QMouseEvent*);
    using KContextualHelpButton_WheelEvent_Callback = void (*)(KContextualHelpButton*, QWheelEvent*);
    using KContextualHelpButton_MoveEvent_Callback = void (*)(KContextualHelpButton*, QMoveEvent*);
    using KContextualHelpButton_ResizeEvent_Callback = void (*)(KContextualHelpButton*, QResizeEvent*);
    using KContextualHelpButton_CloseEvent_Callback = void (*)(KContextualHelpButton*, QCloseEvent*);
    using KContextualHelpButton_ContextMenuEvent_Callback = void (*)(KContextualHelpButton*, QContextMenuEvent*);
    using KContextualHelpButton_TabletEvent_Callback = void (*)(KContextualHelpButton*, QTabletEvent*);
    using KContextualHelpButton_DragEnterEvent_Callback = void (*)(KContextualHelpButton*, QDragEnterEvent*);
    using KContextualHelpButton_DragMoveEvent_Callback = void (*)(KContextualHelpButton*, QDragMoveEvent*);
    using KContextualHelpButton_DragLeaveEvent_Callback = void (*)(KContextualHelpButton*, QDragLeaveEvent*);
    using KContextualHelpButton_DropEvent_Callback = void (*)(KContextualHelpButton*, QDropEvent*);
    using KContextualHelpButton_ShowEvent_Callback = void (*)(KContextualHelpButton*, QShowEvent*);
    using KContextualHelpButton_HideEvent_Callback = void (*)(KContextualHelpButton*, QHideEvent*);
    using KContextualHelpButton_NativeEvent_Callback = bool (*)(KContextualHelpButton*, libqt_string, void*, intptr_t*);
    using KContextualHelpButton_Metric_Callback = int (*)(const KContextualHelpButton*, int);
    using KContextualHelpButton_InitPainter_Callback = void (*)(const KContextualHelpButton*, QPainter*);
    using KContextualHelpButton_Redirected_Callback = QPaintDevice* (*)(const KContextualHelpButton*, QPoint*);
    using KContextualHelpButton_SharedPainter_Callback = QPainter* (*)();
    using KContextualHelpButton_InputMethodEvent_Callback = void (*)(KContextualHelpButton*, QInputMethodEvent*);
    using KContextualHelpButton_InputMethodQuery_Callback = QVariant* (*)(const KContextualHelpButton*, int);
    using KContextualHelpButton_FocusNextPrevChild_Callback = bool (*)(KContextualHelpButton*, bool);
    using KContextualHelpButton_EventFilter_Callback = bool (*)(KContextualHelpButton*, QObject*, QEvent*);
    using KContextualHelpButton_ChildEvent_Callback = void (*)(KContextualHelpButton*, QChildEvent*);
    using KContextualHelpButton_CustomEvent_Callback = void (*)(KContextualHelpButton*, QEvent*);
    using KContextualHelpButton_ConnectNotify_Callback = void (*)(KContextualHelpButton*, QMetaMethod*);
    using KContextualHelpButton_DisconnectNotify_Callback = void (*)(KContextualHelpButton*, QMetaMethod*);
    using KContextualHelpButton_UpdateMicroFocus_Callback = void (*)();
    using KContextualHelpButton_Create_Callback = void (*)();
    using KContextualHelpButton_Destroy_Callback = void (*)();
    using KContextualHelpButton_FocusNextChild_Callback = bool (*)();
    using KContextualHelpButton_FocusPreviousChild_Callback = bool (*)();
    using KContextualHelpButton_Sender_Callback = QObject* (*)();
    using KContextualHelpButton_SenderSignalIndex_Callback = int (*)();
    using KContextualHelpButton_Receivers_Callback = int (*)(const KContextualHelpButton*, const char*);
    using KContextualHelpButton_IsSignalConnected_Callback = bool (*)(const KContextualHelpButton*, QMetaMethod*);
    using KContextualHelpButton_GetDecodedMetricF_Callback = double (*)(const KContextualHelpButton*, int, int);

  protected:
    // Instance callback storage
    KContextualHelpButton_Metacall_Callback kcontextualhelpbutton_metacall_callback = nullptr;
    KContextualHelpButton_SizeHint_Callback kcontextualhelpbutton_sizehint_callback = nullptr;
    KContextualHelpButton_MinimumSizeHint_Callback kcontextualhelpbutton_minimumsizehint_callback = nullptr;
    KContextualHelpButton_Event_Callback kcontextualhelpbutton_event_callback = nullptr;
    KContextualHelpButton_MousePressEvent_Callback kcontextualhelpbutton_mousepressevent_callback = nullptr;
    KContextualHelpButton_MouseReleaseEvent_Callback kcontextualhelpbutton_mousereleaseevent_callback = nullptr;
    KContextualHelpButton_PaintEvent_Callback kcontextualhelpbutton_paintevent_callback = nullptr;
    KContextualHelpButton_ActionEvent_Callback kcontextualhelpbutton_actionevent_callback = nullptr;
    KContextualHelpButton_EnterEvent_Callback kcontextualhelpbutton_enterevent_callback = nullptr;
    KContextualHelpButton_LeaveEvent_Callback kcontextualhelpbutton_leaveevent_callback = nullptr;
    KContextualHelpButton_TimerEvent_Callback kcontextualhelpbutton_timerevent_callback = nullptr;
    KContextualHelpButton_ChangeEvent_Callback kcontextualhelpbutton_changeevent_callback = nullptr;
    KContextualHelpButton_HitButton_Callback kcontextualhelpbutton_hitbutton_callback = nullptr;
    KContextualHelpButton_CheckStateSet_Callback kcontextualhelpbutton_checkstateset_callback = nullptr;
    KContextualHelpButton_NextCheckState_Callback kcontextualhelpbutton_nextcheckstate_callback = nullptr;
    KContextualHelpButton_InitStyleOption_Callback kcontextualhelpbutton_initstyleoption_callback = nullptr;
    KContextualHelpButton_KeyPressEvent_Callback kcontextualhelpbutton_keypressevent_callback = nullptr;
    KContextualHelpButton_KeyReleaseEvent_Callback kcontextualhelpbutton_keyreleaseevent_callback = nullptr;
    KContextualHelpButton_MouseMoveEvent_Callback kcontextualhelpbutton_mousemoveevent_callback = nullptr;
    KContextualHelpButton_FocusInEvent_Callback kcontextualhelpbutton_focusinevent_callback = nullptr;
    KContextualHelpButton_FocusOutEvent_Callback kcontextualhelpbutton_focusoutevent_callback = nullptr;
    KContextualHelpButton_DevType_Callback kcontextualhelpbutton_devtype_callback = nullptr;
    KContextualHelpButton_SetVisible_Callback kcontextualhelpbutton_setvisible_callback = nullptr;
    KContextualHelpButton_HeightForWidth_Callback kcontextualhelpbutton_heightforwidth_callback = nullptr;
    KContextualHelpButton_HasHeightForWidth_Callback kcontextualhelpbutton_hasheightforwidth_callback = nullptr;
    KContextualHelpButton_PaintEngine_Callback kcontextualhelpbutton_paintengine_callback = nullptr;
    KContextualHelpButton_MouseDoubleClickEvent_Callback kcontextualhelpbutton_mousedoubleclickevent_callback = nullptr;
    KContextualHelpButton_WheelEvent_Callback kcontextualhelpbutton_wheelevent_callback = nullptr;
    KContextualHelpButton_MoveEvent_Callback kcontextualhelpbutton_moveevent_callback = nullptr;
    KContextualHelpButton_ResizeEvent_Callback kcontextualhelpbutton_resizeevent_callback = nullptr;
    KContextualHelpButton_CloseEvent_Callback kcontextualhelpbutton_closeevent_callback = nullptr;
    KContextualHelpButton_ContextMenuEvent_Callback kcontextualhelpbutton_contextmenuevent_callback = nullptr;
    KContextualHelpButton_TabletEvent_Callback kcontextualhelpbutton_tabletevent_callback = nullptr;
    KContextualHelpButton_DragEnterEvent_Callback kcontextualhelpbutton_dragenterevent_callback = nullptr;
    KContextualHelpButton_DragMoveEvent_Callback kcontextualhelpbutton_dragmoveevent_callback = nullptr;
    KContextualHelpButton_DragLeaveEvent_Callback kcontextualhelpbutton_dragleaveevent_callback = nullptr;
    KContextualHelpButton_DropEvent_Callback kcontextualhelpbutton_dropevent_callback = nullptr;
    KContextualHelpButton_ShowEvent_Callback kcontextualhelpbutton_showevent_callback = nullptr;
    KContextualHelpButton_HideEvent_Callback kcontextualhelpbutton_hideevent_callback = nullptr;
    KContextualHelpButton_NativeEvent_Callback kcontextualhelpbutton_nativeevent_callback = nullptr;
    KContextualHelpButton_Metric_Callback kcontextualhelpbutton_metric_callback = nullptr;
    KContextualHelpButton_InitPainter_Callback kcontextualhelpbutton_initpainter_callback = nullptr;
    KContextualHelpButton_Redirected_Callback kcontextualhelpbutton_redirected_callback = nullptr;
    KContextualHelpButton_SharedPainter_Callback kcontextualhelpbutton_sharedpainter_callback = nullptr;
    KContextualHelpButton_InputMethodEvent_Callback kcontextualhelpbutton_inputmethodevent_callback = nullptr;
    KContextualHelpButton_InputMethodQuery_Callback kcontextualhelpbutton_inputmethodquery_callback = nullptr;
    KContextualHelpButton_FocusNextPrevChild_Callback kcontextualhelpbutton_focusnextprevchild_callback = nullptr;
    KContextualHelpButton_EventFilter_Callback kcontextualhelpbutton_eventfilter_callback = nullptr;
    KContextualHelpButton_ChildEvent_Callback kcontextualhelpbutton_childevent_callback = nullptr;
    KContextualHelpButton_CustomEvent_Callback kcontextualhelpbutton_customevent_callback = nullptr;
    KContextualHelpButton_ConnectNotify_Callback kcontextualhelpbutton_connectnotify_callback = nullptr;
    KContextualHelpButton_DisconnectNotify_Callback kcontextualhelpbutton_disconnectnotify_callback = nullptr;
    KContextualHelpButton_UpdateMicroFocus_Callback kcontextualhelpbutton_updatemicrofocus_callback = nullptr;
    KContextualHelpButton_Create_Callback kcontextualhelpbutton_create_callback = nullptr;
    KContextualHelpButton_Destroy_Callback kcontextualhelpbutton_destroy_callback = nullptr;
    KContextualHelpButton_FocusNextChild_Callback kcontextualhelpbutton_focusnextchild_callback = nullptr;
    KContextualHelpButton_FocusPreviousChild_Callback kcontextualhelpbutton_focuspreviouschild_callback = nullptr;
    KContextualHelpButton_Sender_Callback kcontextualhelpbutton_sender_callback = nullptr;
    KContextualHelpButton_SenderSignalIndex_Callback kcontextualhelpbutton_sendersignalindex_callback = nullptr;
    KContextualHelpButton_Receivers_Callback kcontextualhelpbutton_receivers_callback = nullptr;
    KContextualHelpButton_IsSignalConnected_Callback kcontextualhelpbutton_issignalconnected_callback = nullptr;
    KContextualHelpButton_GetDecodedMetricF_Callback kcontextualhelpbutton_getdecodedmetricf_callback = nullptr;

    // Instance base flags
    mutable bool kcontextualhelpbutton_metacall_isbase = false;
    mutable bool kcontextualhelpbutton_sizehint_isbase = false;
    mutable bool kcontextualhelpbutton_minimumsizehint_isbase = false;
    mutable bool kcontextualhelpbutton_event_isbase = false;
    mutable bool kcontextualhelpbutton_mousepressevent_isbase = false;
    mutable bool kcontextualhelpbutton_mousereleaseevent_isbase = false;
    mutable bool kcontextualhelpbutton_paintevent_isbase = false;
    mutable bool kcontextualhelpbutton_actionevent_isbase = false;
    mutable bool kcontextualhelpbutton_enterevent_isbase = false;
    mutable bool kcontextualhelpbutton_leaveevent_isbase = false;
    mutable bool kcontextualhelpbutton_timerevent_isbase = false;
    mutable bool kcontextualhelpbutton_changeevent_isbase = false;
    mutable bool kcontextualhelpbutton_hitbutton_isbase = false;
    mutable bool kcontextualhelpbutton_checkstateset_isbase = false;
    mutable bool kcontextualhelpbutton_nextcheckstate_isbase = false;
    mutable bool kcontextualhelpbutton_initstyleoption_isbase = false;
    mutable bool kcontextualhelpbutton_keypressevent_isbase = false;
    mutable bool kcontextualhelpbutton_keyreleaseevent_isbase = false;
    mutable bool kcontextualhelpbutton_mousemoveevent_isbase = false;
    mutable bool kcontextualhelpbutton_focusinevent_isbase = false;
    mutable bool kcontextualhelpbutton_focusoutevent_isbase = false;
    mutable bool kcontextualhelpbutton_devtype_isbase = false;
    mutable bool kcontextualhelpbutton_setvisible_isbase = false;
    mutable bool kcontextualhelpbutton_heightforwidth_isbase = false;
    mutable bool kcontextualhelpbutton_hasheightforwidth_isbase = false;
    mutable bool kcontextualhelpbutton_paintengine_isbase = false;
    mutable bool kcontextualhelpbutton_mousedoubleclickevent_isbase = false;
    mutable bool kcontextualhelpbutton_wheelevent_isbase = false;
    mutable bool kcontextualhelpbutton_moveevent_isbase = false;
    mutable bool kcontextualhelpbutton_resizeevent_isbase = false;
    mutable bool kcontextualhelpbutton_closeevent_isbase = false;
    mutable bool kcontextualhelpbutton_contextmenuevent_isbase = false;
    mutable bool kcontextualhelpbutton_tabletevent_isbase = false;
    mutable bool kcontextualhelpbutton_dragenterevent_isbase = false;
    mutable bool kcontextualhelpbutton_dragmoveevent_isbase = false;
    mutable bool kcontextualhelpbutton_dragleaveevent_isbase = false;
    mutable bool kcontextualhelpbutton_dropevent_isbase = false;
    mutable bool kcontextualhelpbutton_showevent_isbase = false;
    mutable bool kcontextualhelpbutton_hideevent_isbase = false;
    mutable bool kcontextualhelpbutton_nativeevent_isbase = false;
    mutable bool kcontextualhelpbutton_metric_isbase = false;
    mutable bool kcontextualhelpbutton_initpainter_isbase = false;
    mutable bool kcontextualhelpbutton_redirected_isbase = false;
    mutable bool kcontextualhelpbutton_sharedpainter_isbase = false;
    mutable bool kcontextualhelpbutton_inputmethodevent_isbase = false;
    mutable bool kcontextualhelpbutton_inputmethodquery_isbase = false;
    mutable bool kcontextualhelpbutton_focusnextprevchild_isbase = false;
    mutable bool kcontextualhelpbutton_eventfilter_isbase = false;
    mutable bool kcontextualhelpbutton_childevent_isbase = false;
    mutable bool kcontextualhelpbutton_customevent_isbase = false;
    mutable bool kcontextualhelpbutton_connectnotify_isbase = false;
    mutable bool kcontextualhelpbutton_disconnectnotify_isbase = false;
    mutable bool kcontextualhelpbutton_updatemicrofocus_isbase = false;
    mutable bool kcontextualhelpbutton_create_isbase = false;
    mutable bool kcontextualhelpbutton_destroy_isbase = false;
    mutable bool kcontextualhelpbutton_focusnextchild_isbase = false;
    mutable bool kcontextualhelpbutton_focuspreviouschild_isbase = false;
    mutable bool kcontextualhelpbutton_sender_isbase = false;
    mutable bool kcontextualhelpbutton_sendersignalindex_isbase = false;
    mutable bool kcontextualhelpbutton_receivers_isbase = false;
    mutable bool kcontextualhelpbutton_issignalconnected_isbase = false;
    mutable bool kcontextualhelpbutton_getdecodedmetricf_isbase = false;

  public:
    VirtualKContextualHelpButton(QWidget* parent) : KContextualHelpButton(parent) {};
    VirtualKContextualHelpButton(const QString& contextualHelpText, const QWidget* heightHintWidget, QWidget* parent) : KContextualHelpButton(contextualHelpText, heightHintWidget, parent) {};
    VirtualKContextualHelpButton() : KContextualHelpButton() {};

    ~VirtualKContextualHelpButton() {
        kcontextualhelpbutton_metacall_callback = nullptr;
        kcontextualhelpbutton_sizehint_callback = nullptr;
        kcontextualhelpbutton_minimumsizehint_callback = nullptr;
        kcontextualhelpbutton_event_callback = nullptr;
        kcontextualhelpbutton_mousepressevent_callback = nullptr;
        kcontextualhelpbutton_mousereleaseevent_callback = nullptr;
        kcontextualhelpbutton_paintevent_callback = nullptr;
        kcontextualhelpbutton_actionevent_callback = nullptr;
        kcontextualhelpbutton_enterevent_callback = nullptr;
        kcontextualhelpbutton_leaveevent_callback = nullptr;
        kcontextualhelpbutton_timerevent_callback = nullptr;
        kcontextualhelpbutton_changeevent_callback = nullptr;
        kcontextualhelpbutton_hitbutton_callback = nullptr;
        kcontextualhelpbutton_checkstateset_callback = nullptr;
        kcontextualhelpbutton_nextcheckstate_callback = nullptr;
        kcontextualhelpbutton_initstyleoption_callback = nullptr;
        kcontextualhelpbutton_keypressevent_callback = nullptr;
        kcontextualhelpbutton_keyreleaseevent_callback = nullptr;
        kcontextualhelpbutton_mousemoveevent_callback = nullptr;
        kcontextualhelpbutton_focusinevent_callback = nullptr;
        kcontextualhelpbutton_focusoutevent_callback = nullptr;
        kcontextualhelpbutton_devtype_callback = nullptr;
        kcontextualhelpbutton_setvisible_callback = nullptr;
        kcontextualhelpbutton_heightforwidth_callback = nullptr;
        kcontextualhelpbutton_hasheightforwidth_callback = nullptr;
        kcontextualhelpbutton_paintengine_callback = nullptr;
        kcontextualhelpbutton_mousedoubleclickevent_callback = nullptr;
        kcontextualhelpbutton_wheelevent_callback = nullptr;
        kcontextualhelpbutton_moveevent_callback = nullptr;
        kcontextualhelpbutton_resizeevent_callback = nullptr;
        kcontextualhelpbutton_closeevent_callback = nullptr;
        kcontextualhelpbutton_contextmenuevent_callback = nullptr;
        kcontextualhelpbutton_tabletevent_callback = nullptr;
        kcontextualhelpbutton_dragenterevent_callback = nullptr;
        kcontextualhelpbutton_dragmoveevent_callback = nullptr;
        kcontextualhelpbutton_dragleaveevent_callback = nullptr;
        kcontextualhelpbutton_dropevent_callback = nullptr;
        kcontextualhelpbutton_showevent_callback = nullptr;
        kcontextualhelpbutton_hideevent_callback = nullptr;
        kcontextualhelpbutton_nativeevent_callback = nullptr;
        kcontextualhelpbutton_metric_callback = nullptr;
        kcontextualhelpbutton_initpainter_callback = nullptr;
        kcontextualhelpbutton_redirected_callback = nullptr;
        kcontextualhelpbutton_sharedpainter_callback = nullptr;
        kcontextualhelpbutton_inputmethodevent_callback = nullptr;
        kcontextualhelpbutton_inputmethodquery_callback = nullptr;
        kcontextualhelpbutton_focusnextprevchild_callback = nullptr;
        kcontextualhelpbutton_eventfilter_callback = nullptr;
        kcontextualhelpbutton_childevent_callback = nullptr;
        kcontextualhelpbutton_customevent_callback = nullptr;
        kcontextualhelpbutton_connectnotify_callback = nullptr;
        kcontextualhelpbutton_disconnectnotify_callback = nullptr;
        kcontextualhelpbutton_updatemicrofocus_callback = nullptr;
        kcontextualhelpbutton_create_callback = nullptr;
        kcontextualhelpbutton_destroy_callback = nullptr;
        kcontextualhelpbutton_focusnextchild_callback = nullptr;
        kcontextualhelpbutton_focuspreviouschild_callback = nullptr;
        kcontextualhelpbutton_sender_callback = nullptr;
        kcontextualhelpbutton_sendersignalindex_callback = nullptr;
        kcontextualhelpbutton_receivers_callback = nullptr;
        kcontextualhelpbutton_issignalconnected_callback = nullptr;
        kcontextualhelpbutton_getdecodedmetricf_callback = nullptr;
    }

    // Callback setters
    inline void setKContextualHelpButton_Metacall_Callback(KContextualHelpButton_Metacall_Callback cb) { kcontextualhelpbutton_metacall_callback = cb; }
    inline void setKContextualHelpButton_SizeHint_Callback(KContextualHelpButton_SizeHint_Callback cb) { kcontextualhelpbutton_sizehint_callback = cb; }
    inline void setKContextualHelpButton_MinimumSizeHint_Callback(KContextualHelpButton_MinimumSizeHint_Callback cb) { kcontextualhelpbutton_minimumsizehint_callback = cb; }
    inline void setKContextualHelpButton_Event_Callback(KContextualHelpButton_Event_Callback cb) { kcontextualhelpbutton_event_callback = cb; }
    inline void setKContextualHelpButton_MousePressEvent_Callback(KContextualHelpButton_MousePressEvent_Callback cb) { kcontextualhelpbutton_mousepressevent_callback = cb; }
    inline void setKContextualHelpButton_MouseReleaseEvent_Callback(KContextualHelpButton_MouseReleaseEvent_Callback cb) { kcontextualhelpbutton_mousereleaseevent_callback = cb; }
    inline void setKContextualHelpButton_PaintEvent_Callback(KContextualHelpButton_PaintEvent_Callback cb) { kcontextualhelpbutton_paintevent_callback = cb; }
    inline void setKContextualHelpButton_ActionEvent_Callback(KContextualHelpButton_ActionEvent_Callback cb) { kcontextualhelpbutton_actionevent_callback = cb; }
    inline void setKContextualHelpButton_EnterEvent_Callback(KContextualHelpButton_EnterEvent_Callback cb) { kcontextualhelpbutton_enterevent_callback = cb; }
    inline void setKContextualHelpButton_LeaveEvent_Callback(KContextualHelpButton_LeaveEvent_Callback cb) { kcontextualhelpbutton_leaveevent_callback = cb; }
    inline void setKContextualHelpButton_TimerEvent_Callback(KContextualHelpButton_TimerEvent_Callback cb) { kcontextualhelpbutton_timerevent_callback = cb; }
    inline void setKContextualHelpButton_ChangeEvent_Callback(KContextualHelpButton_ChangeEvent_Callback cb) { kcontextualhelpbutton_changeevent_callback = cb; }
    inline void setKContextualHelpButton_HitButton_Callback(KContextualHelpButton_HitButton_Callback cb) { kcontextualhelpbutton_hitbutton_callback = cb; }
    inline void setKContextualHelpButton_CheckStateSet_Callback(KContextualHelpButton_CheckStateSet_Callback cb) { kcontextualhelpbutton_checkstateset_callback = cb; }
    inline void setKContextualHelpButton_NextCheckState_Callback(KContextualHelpButton_NextCheckState_Callback cb) { kcontextualhelpbutton_nextcheckstate_callback = cb; }
    inline void setKContextualHelpButton_InitStyleOption_Callback(KContextualHelpButton_InitStyleOption_Callback cb) { kcontextualhelpbutton_initstyleoption_callback = cb; }
    inline void setKContextualHelpButton_KeyPressEvent_Callback(KContextualHelpButton_KeyPressEvent_Callback cb) { kcontextualhelpbutton_keypressevent_callback = cb; }
    inline void setKContextualHelpButton_KeyReleaseEvent_Callback(KContextualHelpButton_KeyReleaseEvent_Callback cb) { kcontextualhelpbutton_keyreleaseevent_callback = cb; }
    inline void setKContextualHelpButton_MouseMoveEvent_Callback(KContextualHelpButton_MouseMoveEvent_Callback cb) { kcontextualhelpbutton_mousemoveevent_callback = cb; }
    inline void setKContextualHelpButton_FocusInEvent_Callback(KContextualHelpButton_FocusInEvent_Callback cb) { kcontextualhelpbutton_focusinevent_callback = cb; }
    inline void setKContextualHelpButton_FocusOutEvent_Callback(KContextualHelpButton_FocusOutEvent_Callback cb) { kcontextualhelpbutton_focusoutevent_callback = cb; }
    inline void setKContextualHelpButton_DevType_Callback(KContextualHelpButton_DevType_Callback cb) { kcontextualhelpbutton_devtype_callback = cb; }
    inline void setKContextualHelpButton_SetVisible_Callback(KContextualHelpButton_SetVisible_Callback cb) { kcontextualhelpbutton_setvisible_callback = cb; }
    inline void setKContextualHelpButton_HeightForWidth_Callback(KContextualHelpButton_HeightForWidth_Callback cb) { kcontextualhelpbutton_heightforwidth_callback = cb; }
    inline void setKContextualHelpButton_HasHeightForWidth_Callback(KContextualHelpButton_HasHeightForWidth_Callback cb) { kcontextualhelpbutton_hasheightforwidth_callback = cb; }
    inline void setKContextualHelpButton_PaintEngine_Callback(KContextualHelpButton_PaintEngine_Callback cb) { kcontextualhelpbutton_paintengine_callback = cb; }
    inline void setKContextualHelpButton_MouseDoubleClickEvent_Callback(KContextualHelpButton_MouseDoubleClickEvent_Callback cb) { kcontextualhelpbutton_mousedoubleclickevent_callback = cb; }
    inline void setKContextualHelpButton_WheelEvent_Callback(KContextualHelpButton_WheelEvent_Callback cb) { kcontextualhelpbutton_wheelevent_callback = cb; }
    inline void setKContextualHelpButton_MoveEvent_Callback(KContextualHelpButton_MoveEvent_Callback cb) { kcontextualhelpbutton_moveevent_callback = cb; }
    inline void setKContextualHelpButton_ResizeEvent_Callback(KContextualHelpButton_ResizeEvent_Callback cb) { kcontextualhelpbutton_resizeevent_callback = cb; }
    inline void setKContextualHelpButton_CloseEvent_Callback(KContextualHelpButton_CloseEvent_Callback cb) { kcontextualhelpbutton_closeevent_callback = cb; }
    inline void setKContextualHelpButton_ContextMenuEvent_Callback(KContextualHelpButton_ContextMenuEvent_Callback cb) { kcontextualhelpbutton_contextmenuevent_callback = cb; }
    inline void setKContextualHelpButton_TabletEvent_Callback(KContextualHelpButton_TabletEvent_Callback cb) { kcontextualhelpbutton_tabletevent_callback = cb; }
    inline void setKContextualHelpButton_DragEnterEvent_Callback(KContextualHelpButton_DragEnterEvent_Callback cb) { kcontextualhelpbutton_dragenterevent_callback = cb; }
    inline void setKContextualHelpButton_DragMoveEvent_Callback(KContextualHelpButton_DragMoveEvent_Callback cb) { kcontextualhelpbutton_dragmoveevent_callback = cb; }
    inline void setKContextualHelpButton_DragLeaveEvent_Callback(KContextualHelpButton_DragLeaveEvent_Callback cb) { kcontextualhelpbutton_dragleaveevent_callback = cb; }
    inline void setKContextualHelpButton_DropEvent_Callback(KContextualHelpButton_DropEvent_Callback cb) { kcontextualhelpbutton_dropevent_callback = cb; }
    inline void setKContextualHelpButton_ShowEvent_Callback(KContextualHelpButton_ShowEvent_Callback cb) { kcontextualhelpbutton_showevent_callback = cb; }
    inline void setKContextualHelpButton_HideEvent_Callback(KContextualHelpButton_HideEvent_Callback cb) { kcontextualhelpbutton_hideevent_callback = cb; }
    inline void setKContextualHelpButton_NativeEvent_Callback(KContextualHelpButton_NativeEvent_Callback cb) { kcontextualhelpbutton_nativeevent_callback = cb; }
    inline void setKContextualHelpButton_Metric_Callback(KContextualHelpButton_Metric_Callback cb) { kcontextualhelpbutton_metric_callback = cb; }
    inline void setKContextualHelpButton_InitPainter_Callback(KContextualHelpButton_InitPainter_Callback cb) { kcontextualhelpbutton_initpainter_callback = cb; }
    inline void setKContextualHelpButton_Redirected_Callback(KContextualHelpButton_Redirected_Callback cb) { kcontextualhelpbutton_redirected_callback = cb; }
    inline void setKContextualHelpButton_SharedPainter_Callback(KContextualHelpButton_SharedPainter_Callback cb) { kcontextualhelpbutton_sharedpainter_callback = cb; }
    inline void setKContextualHelpButton_InputMethodEvent_Callback(KContextualHelpButton_InputMethodEvent_Callback cb) { kcontextualhelpbutton_inputmethodevent_callback = cb; }
    inline void setKContextualHelpButton_InputMethodQuery_Callback(KContextualHelpButton_InputMethodQuery_Callback cb) { kcontextualhelpbutton_inputmethodquery_callback = cb; }
    inline void setKContextualHelpButton_FocusNextPrevChild_Callback(KContextualHelpButton_FocusNextPrevChild_Callback cb) { kcontextualhelpbutton_focusnextprevchild_callback = cb; }
    inline void setKContextualHelpButton_EventFilter_Callback(KContextualHelpButton_EventFilter_Callback cb) { kcontextualhelpbutton_eventfilter_callback = cb; }
    inline void setKContextualHelpButton_ChildEvent_Callback(KContextualHelpButton_ChildEvent_Callback cb) { kcontextualhelpbutton_childevent_callback = cb; }
    inline void setKContextualHelpButton_CustomEvent_Callback(KContextualHelpButton_CustomEvent_Callback cb) { kcontextualhelpbutton_customevent_callback = cb; }
    inline void setKContextualHelpButton_ConnectNotify_Callback(KContextualHelpButton_ConnectNotify_Callback cb) { kcontextualhelpbutton_connectnotify_callback = cb; }
    inline void setKContextualHelpButton_DisconnectNotify_Callback(KContextualHelpButton_DisconnectNotify_Callback cb) { kcontextualhelpbutton_disconnectnotify_callback = cb; }
    inline void setKContextualHelpButton_UpdateMicroFocus_Callback(KContextualHelpButton_UpdateMicroFocus_Callback cb) { kcontextualhelpbutton_updatemicrofocus_callback = cb; }
    inline void setKContextualHelpButton_Create_Callback(KContextualHelpButton_Create_Callback cb) { kcontextualhelpbutton_create_callback = cb; }
    inline void setKContextualHelpButton_Destroy_Callback(KContextualHelpButton_Destroy_Callback cb) { kcontextualhelpbutton_destroy_callback = cb; }
    inline void setKContextualHelpButton_FocusNextChild_Callback(KContextualHelpButton_FocusNextChild_Callback cb) { kcontextualhelpbutton_focusnextchild_callback = cb; }
    inline void setKContextualHelpButton_FocusPreviousChild_Callback(KContextualHelpButton_FocusPreviousChild_Callback cb) { kcontextualhelpbutton_focuspreviouschild_callback = cb; }
    inline void setKContextualHelpButton_Sender_Callback(KContextualHelpButton_Sender_Callback cb) { kcontextualhelpbutton_sender_callback = cb; }
    inline void setKContextualHelpButton_SenderSignalIndex_Callback(KContextualHelpButton_SenderSignalIndex_Callback cb) { kcontextualhelpbutton_sendersignalindex_callback = cb; }
    inline void setKContextualHelpButton_Receivers_Callback(KContextualHelpButton_Receivers_Callback cb) { kcontextualhelpbutton_receivers_callback = cb; }
    inline void setKContextualHelpButton_IsSignalConnected_Callback(KContextualHelpButton_IsSignalConnected_Callback cb) { kcontextualhelpbutton_issignalconnected_callback = cb; }
    inline void setKContextualHelpButton_GetDecodedMetricF_Callback(KContextualHelpButton_GetDecodedMetricF_Callback cb) { kcontextualhelpbutton_getdecodedmetricf_callback = cb; }

    // Base flag setters
    inline void setKContextualHelpButton_Metacall_IsBase(bool value) const { kcontextualhelpbutton_metacall_isbase = value; }
    inline void setKContextualHelpButton_SizeHint_IsBase(bool value) const { kcontextualhelpbutton_sizehint_isbase = value; }
    inline void setKContextualHelpButton_MinimumSizeHint_IsBase(bool value) const { kcontextualhelpbutton_minimumsizehint_isbase = value; }
    inline void setKContextualHelpButton_Event_IsBase(bool value) const { kcontextualhelpbutton_event_isbase = value; }
    inline void setKContextualHelpButton_MousePressEvent_IsBase(bool value) const { kcontextualhelpbutton_mousepressevent_isbase = value; }
    inline void setKContextualHelpButton_MouseReleaseEvent_IsBase(bool value) const { kcontextualhelpbutton_mousereleaseevent_isbase = value; }
    inline void setKContextualHelpButton_PaintEvent_IsBase(bool value) const { kcontextualhelpbutton_paintevent_isbase = value; }
    inline void setKContextualHelpButton_ActionEvent_IsBase(bool value) const { kcontextualhelpbutton_actionevent_isbase = value; }
    inline void setKContextualHelpButton_EnterEvent_IsBase(bool value) const { kcontextualhelpbutton_enterevent_isbase = value; }
    inline void setKContextualHelpButton_LeaveEvent_IsBase(bool value) const { kcontextualhelpbutton_leaveevent_isbase = value; }
    inline void setKContextualHelpButton_TimerEvent_IsBase(bool value) const { kcontextualhelpbutton_timerevent_isbase = value; }
    inline void setKContextualHelpButton_ChangeEvent_IsBase(bool value) const { kcontextualhelpbutton_changeevent_isbase = value; }
    inline void setKContextualHelpButton_HitButton_IsBase(bool value) const { kcontextualhelpbutton_hitbutton_isbase = value; }
    inline void setKContextualHelpButton_CheckStateSet_IsBase(bool value) const { kcontextualhelpbutton_checkstateset_isbase = value; }
    inline void setKContextualHelpButton_NextCheckState_IsBase(bool value) const { kcontextualhelpbutton_nextcheckstate_isbase = value; }
    inline void setKContextualHelpButton_InitStyleOption_IsBase(bool value) const { kcontextualhelpbutton_initstyleoption_isbase = value; }
    inline void setKContextualHelpButton_KeyPressEvent_IsBase(bool value) const { kcontextualhelpbutton_keypressevent_isbase = value; }
    inline void setKContextualHelpButton_KeyReleaseEvent_IsBase(bool value) const { kcontextualhelpbutton_keyreleaseevent_isbase = value; }
    inline void setKContextualHelpButton_MouseMoveEvent_IsBase(bool value) const { kcontextualhelpbutton_mousemoveevent_isbase = value; }
    inline void setKContextualHelpButton_FocusInEvent_IsBase(bool value) const { kcontextualhelpbutton_focusinevent_isbase = value; }
    inline void setKContextualHelpButton_FocusOutEvent_IsBase(bool value) const { kcontextualhelpbutton_focusoutevent_isbase = value; }
    inline void setKContextualHelpButton_DevType_IsBase(bool value) const { kcontextualhelpbutton_devtype_isbase = value; }
    inline void setKContextualHelpButton_SetVisible_IsBase(bool value) const { kcontextualhelpbutton_setvisible_isbase = value; }
    inline void setKContextualHelpButton_HeightForWidth_IsBase(bool value) const { kcontextualhelpbutton_heightforwidth_isbase = value; }
    inline void setKContextualHelpButton_HasHeightForWidth_IsBase(bool value) const { kcontextualhelpbutton_hasheightforwidth_isbase = value; }
    inline void setKContextualHelpButton_PaintEngine_IsBase(bool value) const { kcontextualhelpbutton_paintengine_isbase = value; }
    inline void setKContextualHelpButton_MouseDoubleClickEvent_IsBase(bool value) const { kcontextualhelpbutton_mousedoubleclickevent_isbase = value; }
    inline void setKContextualHelpButton_WheelEvent_IsBase(bool value) const { kcontextualhelpbutton_wheelevent_isbase = value; }
    inline void setKContextualHelpButton_MoveEvent_IsBase(bool value) const { kcontextualhelpbutton_moveevent_isbase = value; }
    inline void setKContextualHelpButton_ResizeEvent_IsBase(bool value) const { kcontextualhelpbutton_resizeevent_isbase = value; }
    inline void setKContextualHelpButton_CloseEvent_IsBase(bool value) const { kcontextualhelpbutton_closeevent_isbase = value; }
    inline void setKContextualHelpButton_ContextMenuEvent_IsBase(bool value) const { kcontextualhelpbutton_contextmenuevent_isbase = value; }
    inline void setKContextualHelpButton_TabletEvent_IsBase(bool value) const { kcontextualhelpbutton_tabletevent_isbase = value; }
    inline void setKContextualHelpButton_DragEnterEvent_IsBase(bool value) const { kcontextualhelpbutton_dragenterevent_isbase = value; }
    inline void setKContextualHelpButton_DragMoveEvent_IsBase(bool value) const { kcontextualhelpbutton_dragmoveevent_isbase = value; }
    inline void setKContextualHelpButton_DragLeaveEvent_IsBase(bool value) const { kcontextualhelpbutton_dragleaveevent_isbase = value; }
    inline void setKContextualHelpButton_DropEvent_IsBase(bool value) const { kcontextualhelpbutton_dropevent_isbase = value; }
    inline void setKContextualHelpButton_ShowEvent_IsBase(bool value) const { kcontextualhelpbutton_showevent_isbase = value; }
    inline void setKContextualHelpButton_HideEvent_IsBase(bool value) const { kcontextualhelpbutton_hideevent_isbase = value; }
    inline void setKContextualHelpButton_NativeEvent_IsBase(bool value) const { kcontextualhelpbutton_nativeevent_isbase = value; }
    inline void setKContextualHelpButton_Metric_IsBase(bool value) const { kcontextualhelpbutton_metric_isbase = value; }
    inline void setKContextualHelpButton_InitPainter_IsBase(bool value) const { kcontextualhelpbutton_initpainter_isbase = value; }
    inline void setKContextualHelpButton_Redirected_IsBase(bool value) const { kcontextualhelpbutton_redirected_isbase = value; }
    inline void setKContextualHelpButton_SharedPainter_IsBase(bool value) const { kcontextualhelpbutton_sharedpainter_isbase = value; }
    inline void setKContextualHelpButton_InputMethodEvent_IsBase(bool value) const { kcontextualhelpbutton_inputmethodevent_isbase = value; }
    inline void setKContextualHelpButton_InputMethodQuery_IsBase(bool value) const { kcontextualhelpbutton_inputmethodquery_isbase = value; }
    inline void setKContextualHelpButton_FocusNextPrevChild_IsBase(bool value) const { kcontextualhelpbutton_focusnextprevchild_isbase = value; }
    inline void setKContextualHelpButton_EventFilter_IsBase(bool value) const { kcontextualhelpbutton_eventfilter_isbase = value; }
    inline void setKContextualHelpButton_ChildEvent_IsBase(bool value) const { kcontextualhelpbutton_childevent_isbase = value; }
    inline void setKContextualHelpButton_CustomEvent_IsBase(bool value) const { kcontextualhelpbutton_customevent_isbase = value; }
    inline void setKContextualHelpButton_ConnectNotify_IsBase(bool value) const { kcontextualhelpbutton_connectnotify_isbase = value; }
    inline void setKContextualHelpButton_DisconnectNotify_IsBase(bool value) const { kcontextualhelpbutton_disconnectnotify_isbase = value; }
    inline void setKContextualHelpButton_UpdateMicroFocus_IsBase(bool value) const { kcontextualhelpbutton_updatemicrofocus_isbase = value; }
    inline void setKContextualHelpButton_Create_IsBase(bool value) const { kcontextualhelpbutton_create_isbase = value; }
    inline void setKContextualHelpButton_Destroy_IsBase(bool value) const { kcontextualhelpbutton_destroy_isbase = value; }
    inline void setKContextualHelpButton_FocusNextChild_IsBase(bool value) const { kcontextualhelpbutton_focusnextchild_isbase = value; }
    inline void setKContextualHelpButton_FocusPreviousChild_IsBase(bool value) const { kcontextualhelpbutton_focuspreviouschild_isbase = value; }
    inline void setKContextualHelpButton_Sender_IsBase(bool value) const { kcontextualhelpbutton_sender_isbase = value; }
    inline void setKContextualHelpButton_SenderSignalIndex_IsBase(bool value) const { kcontextualhelpbutton_sendersignalindex_isbase = value; }
    inline void setKContextualHelpButton_Receivers_IsBase(bool value) const { kcontextualhelpbutton_receivers_isbase = value; }
    inline void setKContextualHelpButton_IsSignalConnected_IsBase(bool value) const { kcontextualhelpbutton_issignalconnected_isbase = value; }
    inline void setKContextualHelpButton_GetDecodedMetricF_IsBase(bool value) const { kcontextualhelpbutton_getdecodedmetricf_isbase = value; }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (kcontextualhelpbutton_metacall_isbase) {
            kcontextualhelpbutton_metacall_isbase = false;
            return KContextualHelpButton::qt_metacall(param1, param2, param3);
        } else if (kcontextualhelpbutton_metacall_callback != nullptr) {
            int cbval1 = static_cast<int>(param1);
            int cbval2 = param2;
            void** cbval3 = param3;

            int callback_ret = kcontextualhelpbutton_metacall_callback(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        } else {
            return KContextualHelpButton::qt_metacall(param1, param2, param3);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QSize sizeHint() const override {
        if (kcontextualhelpbutton_sizehint_isbase) {
            kcontextualhelpbutton_sizehint_isbase = false;
            return KContextualHelpButton::sizeHint();
        } else if (kcontextualhelpbutton_sizehint_callback != nullptr) {
            QSize* callback_ret = kcontextualhelpbutton_sizehint_callback();
            return *callback_ret;
        } else {
            return KContextualHelpButton::sizeHint();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QSize minimumSizeHint() const override {
        if (kcontextualhelpbutton_minimumsizehint_isbase) {
            kcontextualhelpbutton_minimumsizehint_isbase = false;
            return KContextualHelpButton::minimumSizeHint();
        } else if (kcontextualhelpbutton_minimumsizehint_callback != nullptr) {
            QSize* callback_ret = kcontextualhelpbutton_minimumsizehint_callback();
            return *callback_ret;
        } else {
            return KContextualHelpButton::minimumSizeHint();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* e) override {
        if (kcontextualhelpbutton_event_isbase) {
            kcontextualhelpbutton_event_isbase = false;
            return KContextualHelpButton::event(e);
        } else if (kcontextualhelpbutton_event_callback != nullptr) {
            QEvent* cbval1 = e;

            bool callback_ret = kcontextualhelpbutton_event_callback(this, cbval1);
            return callback_ret;
        } else {
            return KContextualHelpButton::event(e);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void mousePressEvent(QMouseEvent* param1) override {
        if (kcontextualhelpbutton_mousepressevent_isbase) {
            kcontextualhelpbutton_mousepressevent_isbase = false;
            KContextualHelpButton::mousePressEvent(param1);
        } else if (kcontextualhelpbutton_mousepressevent_callback != nullptr) {
            QMouseEvent* cbval1 = param1;

            kcontextualhelpbutton_mousepressevent_callback(this, cbval1);
        } else {
            KContextualHelpButton::mousePressEvent(param1);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseReleaseEvent(QMouseEvent* param1) override {
        if (kcontextualhelpbutton_mousereleaseevent_isbase) {
            kcontextualhelpbutton_mousereleaseevent_isbase = false;
            KContextualHelpButton::mouseReleaseEvent(param1);
        } else if (kcontextualhelpbutton_mousereleaseevent_callback != nullptr) {
            QMouseEvent* cbval1 = param1;

            kcontextualhelpbutton_mousereleaseevent_callback(this, cbval1);
        } else {
            KContextualHelpButton::mouseReleaseEvent(param1);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void paintEvent(QPaintEvent* param1) override {
        if (kcontextualhelpbutton_paintevent_isbase) {
            kcontextualhelpbutton_paintevent_isbase = false;
            KContextualHelpButton::paintEvent(param1);
        } else if (kcontextualhelpbutton_paintevent_callback != nullptr) {
            QPaintEvent* cbval1 = param1;

            kcontextualhelpbutton_paintevent_callback(this, cbval1);
        } else {
            KContextualHelpButton::paintEvent(param1);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void actionEvent(QActionEvent* param1) override {
        if (kcontextualhelpbutton_actionevent_isbase) {
            kcontextualhelpbutton_actionevent_isbase = false;
            KContextualHelpButton::actionEvent(param1);
        } else if (kcontextualhelpbutton_actionevent_callback != nullptr) {
            QActionEvent* cbval1 = param1;

            kcontextualhelpbutton_actionevent_callback(this, cbval1);
        } else {
            KContextualHelpButton::actionEvent(param1);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void enterEvent(QEnterEvent* param1) override {
        if (kcontextualhelpbutton_enterevent_isbase) {
            kcontextualhelpbutton_enterevent_isbase = false;
            KContextualHelpButton::enterEvent(param1);
        } else if (kcontextualhelpbutton_enterevent_callback != nullptr) {
            QEnterEvent* cbval1 = param1;

            kcontextualhelpbutton_enterevent_callback(this, cbval1);
        } else {
            KContextualHelpButton::enterEvent(param1);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void leaveEvent(QEvent* param1) override {
        if (kcontextualhelpbutton_leaveevent_isbase) {
            kcontextualhelpbutton_leaveevent_isbase = false;
            KContextualHelpButton::leaveEvent(param1);
        } else if (kcontextualhelpbutton_leaveevent_callback != nullptr) {
            QEvent* cbval1 = param1;

            kcontextualhelpbutton_leaveevent_callback(this, cbval1);
        } else {
            KContextualHelpButton::leaveEvent(param1);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* param1) override {
        if (kcontextualhelpbutton_timerevent_isbase) {
            kcontextualhelpbutton_timerevent_isbase = false;
            KContextualHelpButton::timerEvent(param1);
        } else if (kcontextualhelpbutton_timerevent_callback != nullptr) {
            QTimerEvent* cbval1 = param1;

            kcontextualhelpbutton_timerevent_callback(this, cbval1);
        } else {
            KContextualHelpButton::timerEvent(param1);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void changeEvent(QEvent* param1) override {
        if (kcontextualhelpbutton_changeevent_isbase) {
            kcontextualhelpbutton_changeevent_isbase = false;
            KContextualHelpButton::changeEvent(param1);
        } else if (kcontextualhelpbutton_changeevent_callback != nullptr) {
            QEvent* cbval1 = param1;

            kcontextualhelpbutton_changeevent_callback(this, cbval1);
        } else {
            KContextualHelpButton::changeEvent(param1);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool hitButton(const QPoint& pos) const override {
        if (kcontextualhelpbutton_hitbutton_isbase) {
            kcontextualhelpbutton_hitbutton_isbase = false;
            return KContextualHelpButton::hitButton(pos);
        } else if (kcontextualhelpbutton_hitbutton_callback != nullptr) {
            const QPoint& pos_ret = pos;
            // Cast returned reference into pointer
            QPoint* cbval1 = const_cast<QPoint*>(&pos_ret);

            bool callback_ret = kcontextualhelpbutton_hitbutton_callback(this, cbval1);
            return callback_ret;
        } else {
            return KContextualHelpButton::hitButton(pos);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void checkStateSet() override {
        if (kcontextualhelpbutton_checkstateset_isbase) {
            kcontextualhelpbutton_checkstateset_isbase = false;
            KContextualHelpButton::checkStateSet();
        } else if (kcontextualhelpbutton_checkstateset_callback != nullptr) {
            kcontextualhelpbutton_checkstateset_callback();
        } else {
            KContextualHelpButton::checkStateSet();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void nextCheckState() override {
        if (kcontextualhelpbutton_nextcheckstate_isbase) {
            kcontextualhelpbutton_nextcheckstate_isbase = false;
            KContextualHelpButton::nextCheckState();
        } else if (kcontextualhelpbutton_nextcheckstate_callback != nullptr) {
            kcontextualhelpbutton_nextcheckstate_callback();
        } else {
            KContextualHelpButton::nextCheckState();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void initStyleOption(QStyleOptionToolButton* option) const override {
        if (kcontextualhelpbutton_initstyleoption_isbase) {
            kcontextualhelpbutton_initstyleoption_isbase = false;
            KContextualHelpButton::initStyleOption(option);
        } else if (kcontextualhelpbutton_initstyleoption_callback != nullptr) {
            QStyleOptionToolButton* cbval1 = option;

            kcontextualhelpbutton_initstyleoption_callback(this, cbval1);
        } else {
            KContextualHelpButton::initStyleOption(option);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void keyPressEvent(QKeyEvent* e) override {
        if (kcontextualhelpbutton_keypressevent_isbase) {
            kcontextualhelpbutton_keypressevent_isbase = false;
            KContextualHelpButton::keyPressEvent(e);
        } else if (kcontextualhelpbutton_keypressevent_callback != nullptr) {
            QKeyEvent* cbval1 = e;

            kcontextualhelpbutton_keypressevent_callback(this, cbval1);
        } else {
            KContextualHelpButton::keyPressEvent(e);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void keyReleaseEvent(QKeyEvent* e) override {
        if (kcontextualhelpbutton_keyreleaseevent_isbase) {
            kcontextualhelpbutton_keyreleaseevent_isbase = false;
            KContextualHelpButton::keyReleaseEvent(e);
        } else if (kcontextualhelpbutton_keyreleaseevent_callback != nullptr) {
            QKeyEvent* cbval1 = e;

            kcontextualhelpbutton_keyreleaseevent_callback(this, cbval1);
        } else {
            KContextualHelpButton::keyReleaseEvent(e);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseMoveEvent(QMouseEvent* e) override {
        if (kcontextualhelpbutton_mousemoveevent_isbase) {
            kcontextualhelpbutton_mousemoveevent_isbase = false;
            KContextualHelpButton::mouseMoveEvent(e);
        } else if (kcontextualhelpbutton_mousemoveevent_callback != nullptr) {
            QMouseEvent* cbval1 = e;

            kcontextualhelpbutton_mousemoveevent_callback(this, cbval1);
        } else {
            KContextualHelpButton::mouseMoveEvent(e);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void focusInEvent(QFocusEvent* e) override {
        if (kcontextualhelpbutton_focusinevent_isbase) {
            kcontextualhelpbutton_focusinevent_isbase = false;
            KContextualHelpButton::focusInEvent(e);
        } else if (kcontextualhelpbutton_focusinevent_callback != nullptr) {
            QFocusEvent* cbval1 = e;

            kcontextualhelpbutton_focusinevent_callback(this, cbval1);
        } else {
            KContextualHelpButton::focusInEvent(e);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void focusOutEvent(QFocusEvent* e) override {
        if (kcontextualhelpbutton_focusoutevent_isbase) {
            kcontextualhelpbutton_focusoutevent_isbase = false;
            KContextualHelpButton::focusOutEvent(e);
        } else if (kcontextualhelpbutton_focusoutevent_callback != nullptr) {
            QFocusEvent* cbval1 = e;

            kcontextualhelpbutton_focusoutevent_callback(this, cbval1);
        } else {
            KContextualHelpButton::focusOutEvent(e);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual int devType() const override {
        if (kcontextualhelpbutton_devtype_isbase) {
            kcontextualhelpbutton_devtype_isbase = false;
            return KContextualHelpButton::devType();
        } else if (kcontextualhelpbutton_devtype_callback != nullptr) {
            int callback_ret = kcontextualhelpbutton_devtype_callback();
            return static_cast<int>(callback_ret);
        } else {
            return KContextualHelpButton::devType();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void setVisible(bool visible) override {
        if (kcontextualhelpbutton_setvisible_isbase) {
            kcontextualhelpbutton_setvisible_isbase = false;
            KContextualHelpButton::setVisible(visible);
        } else if (kcontextualhelpbutton_setvisible_callback != nullptr) {
            bool cbval1 = visible;

            kcontextualhelpbutton_setvisible_callback(this, cbval1);
        } else {
            KContextualHelpButton::setVisible(visible);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual int heightForWidth(int param1) const override {
        if (kcontextualhelpbutton_heightforwidth_isbase) {
            kcontextualhelpbutton_heightforwidth_isbase = false;
            return KContextualHelpButton::heightForWidth(param1);
        } else if (kcontextualhelpbutton_heightforwidth_callback != nullptr) {
            int cbval1 = param1;

            int callback_ret = kcontextualhelpbutton_heightforwidth_callback(this, cbval1);
            return static_cast<int>(callback_ret);
        } else {
            return KContextualHelpButton::heightForWidth(param1);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool hasHeightForWidth() const override {
        if (kcontextualhelpbutton_hasheightforwidth_isbase) {
            kcontextualhelpbutton_hasheightforwidth_isbase = false;
            return KContextualHelpButton::hasHeightForWidth();
        } else if (kcontextualhelpbutton_hasheightforwidth_callback != nullptr) {
            bool callback_ret = kcontextualhelpbutton_hasheightforwidth_callback();
            return callback_ret;
        } else {
            return KContextualHelpButton::hasHeightForWidth();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QPaintEngine* paintEngine() const override {
        if (kcontextualhelpbutton_paintengine_isbase) {
            kcontextualhelpbutton_paintengine_isbase = false;
            return KContextualHelpButton::paintEngine();
        } else if (kcontextualhelpbutton_paintengine_callback != nullptr) {
            QPaintEngine* callback_ret = kcontextualhelpbutton_paintengine_callback();
            return callback_ret;
        } else {
            return KContextualHelpButton::paintEngine();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseDoubleClickEvent(QMouseEvent* event) override {
        if (kcontextualhelpbutton_mousedoubleclickevent_isbase) {
            kcontextualhelpbutton_mousedoubleclickevent_isbase = false;
            KContextualHelpButton::mouseDoubleClickEvent(event);
        } else if (kcontextualhelpbutton_mousedoubleclickevent_callback != nullptr) {
            QMouseEvent* cbval1 = event;

            kcontextualhelpbutton_mousedoubleclickevent_callback(this, cbval1);
        } else {
            KContextualHelpButton::mouseDoubleClickEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void wheelEvent(QWheelEvent* event) override {
        if (kcontextualhelpbutton_wheelevent_isbase) {
            kcontextualhelpbutton_wheelevent_isbase = false;
            KContextualHelpButton::wheelEvent(event);
        } else if (kcontextualhelpbutton_wheelevent_callback != nullptr) {
            QWheelEvent* cbval1 = event;

            kcontextualhelpbutton_wheelevent_callback(this, cbval1);
        } else {
            KContextualHelpButton::wheelEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void moveEvent(QMoveEvent* event) override {
        if (kcontextualhelpbutton_moveevent_isbase) {
            kcontextualhelpbutton_moveevent_isbase = false;
            KContextualHelpButton::moveEvent(event);
        } else if (kcontextualhelpbutton_moveevent_callback != nullptr) {
            QMoveEvent* cbval1 = event;

            kcontextualhelpbutton_moveevent_callback(this, cbval1);
        } else {
            KContextualHelpButton::moveEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void resizeEvent(QResizeEvent* event) override {
        if (kcontextualhelpbutton_resizeevent_isbase) {
            kcontextualhelpbutton_resizeevent_isbase = false;
            KContextualHelpButton::resizeEvent(event);
        } else if (kcontextualhelpbutton_resizeevent_callback != nullptr) {
            QResizeEvent* cbval1 = event;

            kcontextualhelpbutton_resizeevent_callback(this, cbval1);
        } else {
            KContextualHelpButton::resizeEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void closeEvent(QCloseEvent* event) override {
        if (kcontextualhelpbutton_closeevent_isbase) {
            kcontextualhelpbutton_closeevent_isbase = false;
            KContextualHelpButton::closeEvent(event);
        } else if (kcontextualhelpbutton_closeevent_callback != nullptr) {
            QCloseEvent* cbval1 = event;

            kcontextualhelpbutton_closeevent_callback(this, cbval1);
        } else {
            KContextualHelpButton::closeEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void contextMenuEvent(QContextMenuEvent* event) override {
        if (kcontextualhelpbutton_contextmenuevent_isbase) {
            kcontextualhelpbutton_contextmenuevent_isbase = false;
            KContextualHelpButton::contextMenuEvent(event);
        } else if (kcontextualhelpbutton_contextmenuevent_callback != nullptr) {
            QContextMenuEvent* cbval1 = event;

            kcontextualhelpbutton_contextmenuevent_callback(this, cbval1);
        } else {
            KContextualHelpButton::contextMenuEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void tabletEvent(QTabletEvent* event) override {
        if (kcontextualhelpbutton_tabletevent_isbase) {
            kcontextualhelpbutton_tabletevent_isbase = false;
            KContextualHelpButton::tabletEvent(event);
        } else if (kcontextualhelpbutton_tabletevent_callback != nullptr) {
            QTabletEvent* cbval1 = event;

            kcontextualhelpbutton_tabletevent_callback(this, cbval1);
        } else {
            KContextualHelpButton::tabletEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragEnterEvent(QDragEnterEvent* event) override {
        if (kcontextualhelpbutton_dragenterevent_isbase) {
            kcontextualhelpbutton_dragenterevent_isbase = false;
            KContextualHelpButton::dragEnterEvent(event);
        } else if (kcontextualhelpbutton_dragenterevent_callback != nullptr) {
            QDragEnterEvent* cbval1 = event;

            kcontextualhelpbutton_dragenterevent_callback(this, cbval1);
        } else {
            KContextualHelpButton::dragEnterEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragMoveEvent(QDragMoveEvent* event) override {
        if (kcontextualhelpbutton_dragmoveevent_isbase) {
            kcontextualhelpbutton_dragmoveevent_isbase = false;
            KContextualHelpButton::dragMoveEvent(event);
        } else if (kcontextualhelpbutton_dragmoveevent_callback != nullptr) {
            QDragMoveEvent* cbval1 = event;

            kcontextualhelpbutton_dragmoveevent_callback(this, cbval1);
        } else {
            KContextualHelpButton::dragMoveEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragLeaveEvent(QDragLeaveEvent* event) override {
        if (kcontextualhelpbutton_dragleaveevent_isbase) {
            kcontextualhelpbutton_dragleaveevent_isbase = false;
            KContextualHelpButton::dragLeaveEvent(event);
        } else if (kcontextualhelpbutton_dragleaveevent_callback != nullptr) {
            QDragLeaveEvent* cbval1 = event;

            kcontextualhelpbutton_dragleaveevent_callback(this, cbval1);
        } else {
            KContextualHelpButton::dragLeaveEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void dropEvent(QDropEvent* event) override {
        if (kcontextualhelpbutton_dropevent_isbase) {
            kcontextualhelpbutton_dropevent_isbase = false;
            KContextualHelpButton::dropEvent(event);
        } else if (kcontextualhelpbutton_dropevent_callback != nullptr) {
            QDropEvent* cbval1 = event;

            kcontextualhelpbutton_dropevent_callback(this, cbval1);
        } else {
            KContextualHelpButton::dropEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void showEvent(QShowEvent* event) override {
        if (kcontextualhelpbutton_showevent_isbase) {
            kcontextualhelpbutton_showevent_isbase = false;
            KContextualHelpButton::showEvent(event);
        } else if (kcontextualhelpbutton_showevent_callback != nullptr) {
            QShowEvent* cbval1 = event;

            kcontextualhelpbutton_showevent_callback(this, cbval1);
        } else {
            KContextualHelpButton::showEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void hideEvent(QHideEvent* event) override {
        if (kcontextualhelpbutton_hideevent_isbase) {
            kcontextualhelpbutton_hideevent_isbase = false;
            KContextualHelpButton::hideEvent(event);
        } else if (kcontextualhelpbutton_hideevent_callback != nullptr) {
            QHideEvent* cbval1 = event;

            kcontextualhelpbutton_hideevent_callback(this, cbval1);
        } else {
            KContextualHelpButton::hideEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool nativeEvent(const QByteArray& eventType, void* message, qintptr* result) override {
        if (kcontextualhelpbutton_nativeevent_isbase) {
            kcontextualhelpbutton_nativeevent_isbase = false;
            return KContextualHelpButton::nativeEvent(eventType, message, result);
        } else if (kcontextualhelpbutton_nativeevent_callback != nullptr) {
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

            bool callback_ret = kcontextualhelpbutton_nativeevent_callback(this, cbval1, cbval2, cbval3);
            return callback_ret;
        } else {
            return KContextualHelpButton::nativeEvent(eventType, message, result);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual int metric(QPaintDevice::PaintDeviceMetric param1) const override {
        if (kcontextualhelpbutton_metric_isbase) {
            kcontextualhelpbutton_metric_isbase = false;
            return KContextualHelpButton::metric(param1);
        } else if (kcontextualhelpbutton_metric_callback != nullptr) {
            int cbval1 = static_cast<int>(param1);

            int callback_ret = kcontextualhelpbutton_metric_callback(this, cbval1);
            return static_cast<int>(callback_ret);
        } else {
            return KContextualHelpButton::metric(param1);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void initPainter(QPainter* painter) const override {
        if (kcontextualhelpbutton_initpainter_isbase) {
            kcontextualhelpbutton_initpainter_isbase = false;
            KContextualHelpButton::initPainter(painter);
        } else if (kcontextualhelpbutton_initpainter_callback != nullptr) {
            QPainter* cbval1 = painter;

            kcontextualhelpbutton_initpainter_callback(this, cbval1);
        } else {
            KContextualHelpButton::initPainter(painter);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QPaintDevice* redirected(QPoint* offset) const override {
        if (kcontextualhelpbutton_redirected_isbase) {
            kcontextualhelpbutton_redirected_isbase = false;
            return KContextualHelpButton::redirected(offset);
        } else if (kcontextualhelpbutton_redirected_callback != nullptr) {
            QPoint* cbval1 = offset;

            QPaintDevice* callback_ret = kcontextualhelpbutton_redirected_callback(this, cbval1);
            return callback_ret;
        } else {
            return KContextualHelpButton::redirected(offset);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QPainter* sharedPainter() const override {
        if (kcontextualhelpbutton_sharedpainter_isbase) {
            kcontextualhelpbutton_sharedpainter_isbase = false;
            return KContextualHelpButton::sharedPainter();
        } else if (kcontextualhelpbutton_sharedpainter_callback != nullptr) {
            QPainter* callback_ret = kcontextualhelpbutton_sharedpainter_callback();
            return callback_ret;
        } else {
            return KContextualHelpButton::sharedPainter();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void inputMethodEvent(QInputMethodEvent* param1) override {
        if (kcontextualhelpbutton_inputmethodevent_isbase) {
            kcontextualhelpbutton_inputmethodevent_isbase = false;
            KContextualHelpButton::inputMethodEvent(param1);
        } else if (kcontextualhelpbutton_inputmethodevent_callback != nullptr) {
            QInputMethodEvent* cbval1 = param1;

            kcontextualhelpbutton_inputmethodevent_callback(this, cbval1);
        } else {
            KContextualHelpButton::inputMethodEvent(param1);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QVariant inputMethodQuery(Qt::InputMethodQuery param1) const override {
        if (kcontextualhelpbutton_inputmethodquery_isbase) {
            kcontextualhelpbutton_inputmethodquery_isbase = false;
            return KContextualHelpButton::inputMethodQuery(param1);
        } else if (kcontextualhelpbutton_inputmethodquery_callback != nullptr) {
            int cbval1 = static_cast<int>(param1);

            QVariant* callback_ret = kcontextualhelpbutton_inputmethodquery_callback(this, cbval1);
            return *callback_ret;
        } else {
            return KContextualHelpButton::inputMethodQuery(param1);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool focusNextPrevChild(bool next) override {
        if (kcontextualhelpbutton_focusnextprevchild_isbase) {
            kcontextualhelpbutton_focusnextprevchild_isbase = false;
            return KContextualHelpButton::focusNextPrevChild(next);
        } else if (kcontextualhelpbutton_focusnextprevchild_callback != nullptr) {
            bool cbval1 = next;

            bool callback_ret = kcontextualhelpbutton_focusnextprevchild_callback(this, cbval1);
            return callback_ret;
        } else {
            return KContextualHelpButton::focusNextPrevChild(next);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* watched, QEvent* event) override {
        if (kcontextualhelpbutton_eventfilter_isbase) {
            kcontextualhelpbutton_eventfilter_isbase = false;
            return KContextualHelpButton::eventFilter(watched, event);
        } else if (kcontextualhelpbutton_eventfilter_callback != nullptr) {
            QObject* cbval1 = watched;
            QEvent* cbval2 = event;

            bool callback_ret = kcontextualhelpbutton_eventfilter_callback(this, cbval1, cbval2);
            return callback_ret;
        } else {
            return KContextualHelpButton::eventFilter(watched, event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (kcontextualhelpbutton_childevent_isbase) {
            kcontextualhelpbutton_childevent_isbase = false;
            KContextualHelpButton::childEvent(event);
        } else if (kcontextualhelpbutton_childevent_callback != nullptr) {
            QChildEvent* cbval1 = event;

            kcontextualhelpbutton_childevent_callback(this, cbval1);
        } else {
            KContextualHelpButton::childEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (kcontextualhelpbutton_customevent_isbase) {
            kcontextualhelpbutton_customevent_isbase = false;
            KContextualHelpButton::customEvent(event);
        } else if (kcontextualhelpbutton_customevent_callback != nullptr) {
            QEvent* cbval1 = event;

            kcontextualhelpbutton_customevent_callback(this, cbval1);
        } else {
            KContextualHelpButton::customEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (kcontextualhelpbutton_connectnotify_isbase) {
            kcontextualhelpbutton_connectnotify_isbase = false;
            KContextualHelpButton::connectNotify(signal);
        } else if (kcontextualhelpbutton_connectnotify_callback != nullptr) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            kcontextualhelpbutton_connectnotify_callback(this, cbval1);
        } else {
            KContextualHelpButton::connectNotify(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (kcontextualhelpbutton_disconnectnotify_isbase) {
            kcontextualhelpbutton_disconnectnotify_isbase = false;
            KContextualHelpButton::disconnectNotify(signal);
        } else if (kcontextualhelpbutton_disconnectnotify_callback != nullptr) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            kcontextualhelpbutton_disconnectnotify_callback(this, cbval1);
        } else {
            KContextualHelpButton::disconnectNotify(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    void updateMicroFocus() {
        if (kcontextualhelpbutton_updatemicrofocus_isbase) {
            kcontextualhelpbutton_updatemicrofocus_isbase = false;
            KContextualHelpButton::updateMicroFocus();
        } else if (kcontextualhelpbutton_updatemicrofocus_callback != nullptr) {
            kcontextualhelpbutton_updatemicrofocus_callback();
        } else {
            KContextualHelpButton::updateMicroFocus();
        }
    }

    // Virtual method for C ABI access and custom callback
    void create() {
        if (kcontextualhelpbutton_create_isbase) {
            kcontextualhelpbutton_create_isbase = false;
            KContextualHelpButton::create();
        } else if (kcontextualhelpbutton_create_callback != nullptr) {
            kcontextualhelpbutton_create_callback();
        } else {
            KContextualHelpButton::create();
        }
    }

    // Virtual method for C ABI access and custom callback
    void destroy() {
        if (kcontextualhelpbutton_destroy_isbase) {
            kcontextualhelpbutton_destroy_isbase = false;
            KContextualHelpButton::destroy();
        } else if (kcontextualhelpbutton_destroy_callback != nullptr) {
            kcontextualhelpbutton_destroy_callback();
        } else {
            KContextualHelpButton::destroy();
        }
    }

    // Virtual method for C ABI access and custom callback
    bool focusNextChild() {
        if (kcontextualhelpbutton_focusnextchild_isbase) {
            kcontextualhelpbutton_focusnextchild_isbase = false;
            return KContextualHelpButton::focusNextChild();
        } else if (kcontextualhelpbutton_focusnextchild_callback != nullptr) {
            bool callback_ret = kcontextualhelpbutton_focusnextchild_callback();
            return callback_ret;
        } else {
            return KContextualHelpButton::focusNextChild();
        }
    }

    // Virtual method for C ABI access and custom callback
    bool focusPreviousChild() {
        if (kcontextualhelpbutton_focuspreviouschild_isbase) {
            kcontextualhelpbutton_focuspreviouschild_isbase = false;
            return KContextualHelpButton::focusPreviousChild();
        } else if (kcontextualhelpbutton_focuspreviouschild_callback != nullptr) {
            bool callback_ret = kcontextualhelpbutton_focuspreviouschild_callback();
            return callback_ret;
        } else {
            return KContextualHelpButton::focusPreviousChild();
        }
    }

    // Virtual method for C ABI access and custom callback
    QObject* sender() const {
        if (kcontextualhelpbutton_sender_isbase) {
            kcontextualhelpbutton_sender_isbase = false;
            return KContextualHelpButton::sender();
        } else if (kcontextualhelpbutton_sender_callback != nullptr) {
            QObject* callback_ret = kcontextualhelpbutton_sender_callback();
            return callback_ret;
        } else {
            return KContextualHelpButton::sender();
        }
    }

    // Virtual method for C ABI access and custom callback
    int senderSignalIndex() const {
        if (kcontextualhelpbutton_sendersignalindex_isbase) {
            kcontextualhelpbutton_sendersignalindex_isbase = false;
            return KContextualHelpButton::senderSignalIndex();
        } else if (kcontextualhelpbutton_sendersignalindex_callback != nullptr) {
            int callback_ret = kcontextualhelpbutton_sendersignalindex_callback();
            return static_cast<int>(callback_ret);
        } else {
            return KContextualHelpButton::senderSignalIndex();
        }
    }

    // Virtual method for C ABI access and custom callback
    int receivers(const char* signal) const {
        if (kcontextualhelpbutton_receivers_isbase) {
            kcontextualhelpbutton_receivers_isbase = false;
            return KContextualHelpButton::receivers(signal);
        } else if (kcontextualhelpbutton_receivers_callback != nullptr) {
            const char* cbval1 = (const char*)signal;

            int callback_ret = kcontextualhelpbutton_receivers_callback(this, cbval1);
            return static_cast<int>(callback_ret);
        } else {
            return KContextualHelpButton::receivers(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    bool isSignalConnected(const QMetaMethod& signal) const {
        if (kcontextualhelpbutton_issignalconnected_isbase) {
            kcontextualhelpbutton_issignalconnected_isbase = false;
            return KContextualHelpButton::isSignalConnected(signal);
        } else if (kcontextualhelpbutton_issignalconnected_callback != nullptr) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            bool callback_ret = kcontextualhelpbutton_issignalconnected_callback(this, cbval1);
            return callback_ret;
        } else {
            return KContextualHelpButton::isSignalConnected(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    double getDecodedMetricF(QPaintDevice::PaintDeviceMetric metricA, QPaintDevice::PaintDeviceMetric metricB) const {
        if (kcontextualhelpbutton_getdecodedmetricf_isbase) {
            kcontextualhelpbutton_getdecodedmetricf_isbase = false;
            return KContextualHelpButton::getDecodedMetricF(metricA, metricB);
        } else if (kcontextualhelpbutton_getdecodedmetricf_callback != nullptr) {
            int cbval1 = static_cast<int>(metricA);
            int cbval2 = static_cast<int>(metricB);

            double callback_ret = kcontextualhelpbutton_getdecodedmetricf_callback(this, cbval1, cbval2);
            return static_cast<double>(callback_ret);
        } else {
            return KContextualHelpButton::getDecodedMetricF(metricA, metricB);
        }
    }

    // Friend functions
    friend bool KContextualHelpButton_Event(KContextualHelpButton* self, QEvent* e);
    friend bool KContextualHelpButton_QBaseEvent(KContextualHelpButton* self, QEvent* e);
    friend void KContextualHelpButton_MousePressEvent(KContextualHelpButton* self, QMouseEvent* param1);
    friend void KContextualHelpButton_QBaseMousePressEvent(KContextualHelpButton* self, QMouseEvent* param1);
    friend void KContextualHelpButton_MouseReleaseEvent(KContextualHelpButton* self, QMouseEvent* param1);
    friend void KContextualHelpButton_QBaseMouseReleaseEvent(KContextualHelpButton* self, QMouseEvent* param1);
    friend void KContextualHelpButton_PaintEvent(KContextualHelpButton* self, QPaintEvent* param1);
    friend void KContextualHelpButton_QBasePaintEvent(KContextualHelpButton* self, QPaintEvent* param1);
    friend void KContextualHelpButton_ActionEvent(KContextualHelpButton* self, QActionEvent* param1);
    friend void KContextualHelpButton_QBaseActionEvent(KContextualHelpButton* self, QActionEvent* param1);
    friend void KContextualHelpButton_EnterEvent(KContextualHelpButton* self, QEnterEvent* param1);
    friend void KContextualHelpButton_QBaseEnterEvent(KContextualHelpButton* self, QEnterEvent* param1);
    friend void KContextualHelpButton_LeaveEvent(KContextualHelpButton* self, QEvent* param1);
    friend void KContextualHelpButton_QBaseLeaveEvent(KContextualHelpButton* self, QEvent* param1);
    friend void KContextualHelpButton_TimerEvent(KContextualHelpButton* self, QTimerEvent* param1);
    friend void KContextualHelpButton_QBaseTimerEvent(KContextualHelpButton* self, QTimerEvent* param1);
    friend void KContextualHelpButton_ChangeEvent(KContextualHelpButton* self, QEvent* param1);
    friend void KContextualHelpButton_QBaseChangeEvent(KContextualHelpButton* self, QEvent* param1);
    friend bool KContextualHelpButton_HitButton(const KContextualHelpButton* self, const QPoint* pos);
    friend bool KContextualHelpButton_QBaseHitButton(const KContextualHelpButton* self, const QPoint* pos);
    friend void KContextualHelpButton_CheckStateSet(KContextualHelpButton* self);
    friend void KContextualHelpButton_QBaseCheckStateSet(KContextualHelpButton* self);
    friend void KContextualHelpButton_NextCheckState(KContextualHelpButton* self);
    friend void KContextualHelpButton_QBaseNextCheckState(KContextualHelpButton* self);
    friend void KContextualHelpButton_InitStyleOption(const KContextualHelpButton* self, QStyleOptionToolButton* option);
    friend void KContextualHelpButton_QBaseInitStyleOption(const KContextualHelpButton* self, QStyleOptionToolButton* option);
    friend void KContextualHelpButton_KeyPressEvent(KContextualHelpButton* self, QKeyEvent* e);
    friend void KContextualHelpButton_QBaseKeyPressEvent(KContextualHelpButton* self, QKeyEvent* e);
    friend void KContextualHelpButton_KeyReleaseEvent(KContextualHelpButton* self, QKeyEvent* e);
    friend void KContextualHelpButton_QBaseKeyReleaseEvent(KContextualHelpButton* self, QKeyEvent* e);
    friend void KContextualHelpButton_MouseMoveEvent(KContextualHelpButton* self, QMouseEvent* e);
    friend void KContextualHelpButton_QBaseMouseMoveEvent(KContextualHelpButton* self, QMouseEvent* e);
    friend void KContextualHelpButton_FocusInEvent(KContextualHelpButton* self, QFocusEvent* e);
    friend void KContextualHelpButton_QBaseFocusInEvent(KContextualHelpButton* self, QFocusEvent* e);
    friend void KContextualHelpButton_FocusOutEvent(KContextualHelpButton* self, QFocusEvent* e);
    friend void KContextualHelpButton_QBaseFocusOutEvent(KContextualHelpButton* self, QFocusEvent* e);
    friend void KContextualHelpButton_MouseDoubleClickEvent(KContextualHelpButton* self, QMouseEvent* event);
    friend void KContextualHelpButton_QBaseMouseDoubleClickEvent(KContextualHelpButton* self, QMouseEvent* event);
    friend void KContextualHelpButton_WheelEvent(KContextualHelpButton* self, QWheelEvent* event);
    friend void KContextualHelpButton_QBaseWheelEvent(KContextualHelpButton* self, QWheelEvent* event);
    friend void KContextualHelpButton_MoveEvent(KContextualHelpButton* self, QMoveEvent* event);
    friend void KContextualHelpButton_QBaseMoveEvent(KContextualHelpButton* self, QMoveEvent* event);
    friend void KContextualHelpButton_ResizeEvent(KContextualHelpButton* self, QResizeEvent* event);
    friend void KContextualHelpButton_QBaseResizeEvent(KContextualHelpButton* self, QResizeEvent* event);
    friend void KContextualHelpButton_CloseEvent(KContextualHelpButton* self, QCloseEvent* event);
    friend void KContextualHelpButton_QBaseCloseEvent(KContextualHelpButton* self, QCloseEvent* event);
    friend void KContextualHelpButton_ContextMenuEvent(KContextualHelpButton* self, QContextMenuEvent* event);
    friend void KContextualHelpButton_QBaseContextMenuEvent(KContextualHelpButton* self, QContextMenuEvent* event);
    friend void KContextualHelpButton_TabletEvent(KContextualHelpButton* self, QTabletEvent* event);
    friend void KContextualHelpButton_QBaseTabletEvent(KContextualHelpButton* self, QTabletEvent* event);
    friend void KContextualHelpButton_DragEnterEvent(KContextualHelpButton* self, QDragEnterEvent* event);
    friend void KContextualHelpButton_QBaseDragEnterEvent(KContextualHelpButton* self, QDragEnterEvent* event);
    friend void KContextualHelpButton_DragMoveEvent(KContextualHelpButton* self, QDragMoveEvent* event);
    friend void KContextualHelpButton_QBaseDragMoveEvent(KContextualHelpButton* self, QDragMoveEvent* event);
    friend void KContextualHelpButton_DragLeaveEvent(KContextualHelpButton* self, QDragLeaveEvent* event);
    friend void KContextualHelpButton_QBaseDragLeaveEvent(KContextualHelpButton* self, QDragLeaveEvent* event);
    friend void KContextualHelpButton_DropEvent(KContextualHelpButton* self, QDropEvent* event);
    friend void KContextualHelpButton_QBaseDropEvent(KContextualHelpButton* self, QDropEvent* event);
    friend void KContextualHelpButton_ShowEvent(KContextualHelpButton* self, QShowEvent* event);
    friend void KContextualHelpButton_QBaseShowEvent(KContextualHelpButton* self, QShowEvent* event);
    friend void KContextualHelpButton_HideEvent(KContextualHelpButton* self, QHideEvent* event);
    friend void KContextualHelpButton_QBaseHideEvent(KContextualHelpButton* self, QHideEvent* event);
    friend bool KContextualHelpButton_NativeEvent(KContextualHelpButton* self, const libqt_string eventType, void* message, intptr_t* result);
    friend bool KContextualHelpButton_QBaseNativeEvent(KContextualHelpButton* self, const libqt_string eventType, void* message, intptr_t* result);
    friend int KContextualHelpButton_Metric(const KContextualHelpButton* self, int param1);
    friend int KContextualHelpButton_QBaseMetric(const KContextualHelpButton* self, int param1);
    friend void KContextualHelpButton_InitPainter(const KContextualHelpButton* self, QPainter* painter);
    friend void KContextualHelpButton_QBaseInitPainter(const KContextualHelpButton* self, QPainter* painter);
    friend QPaintDevice* KContextualHelpButton_Redirected(const KContextualHelpButton* self, QPoint* offset);
    friend QPaintDevice* KContextualHelpButton_QBaseRedirected(const KContextualHelpButton* self, QPoint* offset);
    friend QPainter* KContextualHelpButton_SharedPainter(const KContextualHelpButton* self);
    friend QPainter* KContextualHelpButton_QBaseSharedPainter(const KContextualHelpButton* self);
    friend void KContextualHelpButton_InputMethodEvent(KContextualHelpButton* self, QInputMethodEvent* param1);
    friend void KContextualHelpButton_QBaseInputMethodEvent(KContextualHelpButton* self, QInputMethodEvent* param1);
    friend bool KContextualHelpButton_FocusNextPrevChild(KContextualHelpButton* self, bool next);
    friend bool KContextualHelpButton_QBaseFocusNextPrevChild(KContextualHelpButton* self, bool next);
    friend void KContextualHelpButton_ChildEvent(KContextualHelpButton* self, QChildEvent* event);
    friend void KContextualHelpButton_QBaseChildEvent(KContextualHelpButton* self, QChildEvent* event);
    friend void KContextualHelpButton_CustomEvent(KContextualHelpButton* self, QEvent* event);
    friend void KContextualHelpButton_QBaseCustomEvent(KContextualHelpButton* self, QEvent* event);
    friend void KContextualHelpButton_ConnectNotify(KContextualHelpButton* self, const QMetaMethod* signal);
    friend void KContextualHelpButton_QBaseConnectNotify(KContextualHelpButton* self, const QMetaMethod* signal);
    friend void KContextualHelpButton_DisconnectNotify(KContextualHelpButton* self, const QMetaMethod* signal);
    friend void KContextualHelpButton_QBaseDisconnectNotify(KContextualHelpButton* self, const QMetaMethod* signal);
    friend void KContextualHelpButton_UpdateMicroFocus(KContextualHelpButton* self);
    friend void KContextualHelpButton_QBaseUpdateMicroFocus(KContextualHelpButton* self);
    friend void KContextualHelpButton_Create(KContextualHelpButton* self);
    friend void KContextualHelpButton_QBaseCreate(KContextualHelpButton* self);
    friend void KContextualHelpButton_Destroy(KContextualHelpButton* self);
    friend void KContextualHelpButton_QBaseDestroy(KContextualHelpButton* self);
    friend bool KContextualHelpButton_FocusNextChild(KContextualHelpButton* self);
    friend bool KContextualHelpButton_QBaseFocusNextChild(KContextualHelpButton* self);
    friend bool KContextualHelpButton_FocusPreviousChild(KContextualHelpButton* self);
    friend bool KContextualHelpButton_QBaseFocusPreviousChild(KContextualHelpButton* self);
    friend QObject* KContextualHelpButton_Sender(const KContextualHelpButton* self);
    friend QObject* KContextualHelpButton_QBaseSender(const KContextualHelpButton* self);
    friend int KContextualHelpButton_SenderSignalIndex(const KContextualHelpButton* self);
    friend int KContextualHelpButton_QBaseSenderSignalIndex(const KContextualHelpButton* self);
    friend int KContextualHelpButton_Receivers(const KContextualHelpButton* self, const char* signal);
    friend int KContextualHelpButton_QBaseReceivers(const KContextualHelpButton* self, const char* signal);
    friend bool KContextualHelpButton_IsSignalConnected(const KContextualHelpButton* self, const QMetaMethod* signal);
    friend bool KContextualHelpButton_QBaseIsSignalConnected(const KContextualHelpButton* self, const QMetaMethod* signal);
    friend double KContextualHelpButton_GetDecodedMetricF(const KContextualHelpButton* self, int metricA, int metricB);
    friend double KContextualHelpButton_QBaseGetDecodedMetricF(const KContextualHelpButton* self, int metricA, int metricB);
};

#endif
