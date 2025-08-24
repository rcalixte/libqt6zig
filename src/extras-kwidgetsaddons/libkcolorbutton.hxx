#pragma once
#ifndef SRC_EXTRAS_KWIDGETSADDONSC_LIBVIRTUALKCOLORBUTTON_H
#define SRC_EXTRAS_KWIDGETSADDONSC_LIBVIRTUALKCOLORBUTTON_H

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

// This class is a subclass of KColorButton so that we can call protected methods
class VirtualKColorButton final : public KColorButton {

  public:
    // Virtual class boolean flag
    bool isVirtualKColorButton = true;

    // Virtual class public types (including callbacks)
    using KColorButton_Metacall_Callback = int (*)(KColorButton*, int, int, void**);
    using KColorButton_SizeHint_Callback = QSize* (*)();
    using KColorButton_MinimumSizeHint_Callback = QSize* (*)();
    using KColorButton_PaintEvent_Callback = void (*)(KColorButton*, QPaintEvent*);
    using KColorButton_DragEnterEvent_Callback = void (*)(KColorButton*, QDragEnterEvent*);
    using KColorButton_DropEvent_Callback = void (*)(KColorButton*, QDropEvent*);
    using KColorButton_MousePressEvent_Callback = void (*)(KColorButton*, QMouseEvent*);
    using KColorButton_MouseMoveEvent_Callback = void (*)(KColorButton*, QMouseEvent*);
    using KColorButton_KeyPressEvent_Callback = void (*)(KColorButton*, QKeyEvent*);
    using KColorButton_Event_Callback = bool (*)(KColorButton*, QEvent*);
    using KColorButton_FocusInEvent_Callback = void (*)(KColorButton*, QFocusEvent*);
    using KColorButton_FocusOutEvent_Callback = void (*)(KColorButton*, QFocusEvent*);
    using KColorButton_InitStyleOption_Callback = void (*)(const KColorButton*, QStyleOptionButton*);
    using KColorButton_HitButton_Callback = bool (*)(const KColorButton*, QPoint*);
    using KColorButton_CheckStateSet_Callback = void (*)();
    using KColorButton_NextCheckState_Callback = void (*)();
    using KColorButton_KeyReleaseEvent_Callback = void (*)(KColorButton*, QKeyEvent*);
    using KColorButton_MouseReleaseEvent_Callback = void (*)(KColorButton*, QMouseEvent*);
    using KColorButton_ChangeEvent_Callback = void (*)(KColorButton*, QEvent*);
    using KColorButton_TimerEvent_Callback = void (*)(KColorButton*, QTimerEvent*);
    using KColorButton_DevType_Callback = int (*)();
    using KColorButton_SetVisible_Callback = void (*)(KColorButton*, bool);
    using KColorButton_HeightForWidth_Callback = int (*)(const KColorButton*, int);
    using KColorButton_HasHeightForWidth_Callback = bool (*)();
    using KColorButton_PaintEngine_Callback = QPaintEngine* (*)();
    using KColorButton_MouseDoubleClickEvent_Callback = void (*)(KColorButton*, QMouseEvent*);
    using KColorButton_WheelEvent_Callback = void (*)(KColorButton*, QWheelEvent*);
    using KColorButton_EnterEvent_Callback = void (*)(KColorButton*, QEnterEvent*);
    using KColorButton_LeaveEvent_Callback = void (*)(KColorButton*, QEvent*);
    using KColorButton_MoveEvent_Callback = void (*)(KColorButton*, QMoveEvent*);
    using KColorButton_ResizeEvent_Callback = void (*)(KColorButton*, QResizeEvent*);
    using KColorButton_CloseEvent_Callback = void (*)(KColorButton*, QCloseEvent*);
    using KColorButton_ContextMenuEvent_Callback = void (*)(KColorButton*, QContextMenuEvent*);
    using KColorButton_TabletEvent_Callback = void (*)(KColorButton*, QTabletEvent*);
    using KColorButton_ActionEvent_Callback = void (*)(KColorButton*, QActionEvent*);
    using KColorButton_DragMoveEvent_Callback = void (*)(KColorButton*, QDragMoveEvent*);
    using KColorButton_DragLeaveEvent_Callback = void (*)(KColorButton*, QDragLeaveEvent*);
    using KColorButton_ShowEvent_Callback = void (*)(KColorButton*, QShowEvent*);
    using KColorButton_HideEvent_Callback = void (*)(KColorButton*, QHideEvent*);
    using KColorButton_NativeEvent_Callback = bool (*)(KColorButton*, libqt_string, void*, intptr_t*);
    using KColorButton_Metric_Callback = int (*)(const KColorButton*, int);
    using KColorButton_InitPainter_Callback = void (*)(const KColorButton*, QPainter*);
    using KColorButton_Redirected_Callback = QPaintDevice* (*)(const KColorButton*, QPoint*);
    using KColorButton_SharedPainter_Callback = QPainter* (*)();
    using KColorButton_InputMethodEvent_Callback = void (*)(KColorButton*, QInputMethodEvent*);
    using KColorButton_InputMethodQuery_Callback = QVariant* (*)(const KColorButton*, int);
    using KColorButton_FocusNextPrevChild_Callback = bool (*)(KColorButton*, bool);
    using KColorButton_EventFilter_Callback = bool (*)(KColorButton*, QObject*, QEvent*);
    using KColorButton_ChildEvent_Callback = void (*)(KColorButton*, QChildEvent*);
    using KColorButton_CustomEvent_Callback = void (*)(KColorButton*, QEvent*);
    using KColorButton_ConnectNotify_Callback = void (*)(KColorButton*, QMetaMethod*);
    using KColorButton_DisconnectNotify_Callback = void (*)(KColorButton*, QMetaMethod*);
    using KColorButton_UpdateMicroFocus_Callback = void (*)();
    using KColorButton_Create_Callback = void (*)();
    using KColorButton_Destroy_Callback = void (*)();
    using KColorButton_FocusNextChild_Callback = bool (*)();
    using KColorButton_FocusPreviousChild_Callback = bool (*)();
    using KColorButton_Sender_Callback = QObject* (*)();
    using KColorButton_SenderSignalIndex_Callback = int (*)();
    using KColorButton_Receivers_Callback = int (*)(const KColorButton*, const char*);
    using KColorButton_IsSignalConnected_Callback = bool (*)(const KColorButton*, QMetaMethod*);
    using KColorButton_GetDecodedMetricF_Callback = double (*)(const KColorButton*, int, int);

  protected:
    // Instance callback storage
    KColorButton_Metacall_Callback kcolorbutton_metacall_callback = nullptr;
    KColorButton_SizeHint_Callback kcolorbutton_sizehint_callback = nullptr;
    KColorButton_MinimumSizeHint_Callback kcolorbutton_minimumsizehint_callback = nullptr;
    KColorButton_PaintEvent_Callback kcolorbutton_paintevent_callback = nullptr;
    KColorButton_DragEnterEvent_Callback kcolorbutton_dragenterevent_callback = nullptr;
    KColorButton_DropEvent_Callback kcolorbutton_dropevent_callback = nullptr;
    KColorButton_MousePressEvent_Callback kcolorbutton_mousepressevent_callback = nullptr;
    KColorButton_MouseMoveEvent_Callback kcolorbutton_mousemoveevent_callback = nullptr;
    KColorButton_KeyPressEvent_Callback kcolorbutton_keypressevent_callback = nullptr;
    KColorButton_Event_Callback kcolorbutton_event_callback = nullptr;
    KColorButton_FocusInEvent_Callback kcolorbutton_focusinevent_callback = nullptr;
    KColorButton_FocusOutEvent_Callback kcolorbutton_focusoutevent_callback = nullptr;
    KColorButton_InitStyleOption_Callback kcolorbutton_initstyleoption_callback = nullptr;
    KColorButton_HitButton_Callback kcolorbutton_hitbutton_callback = nullptr;
    KColorButton_CheckStateSet_Callback kcolorbutton_checkstateset_callback = nullptr;
    KColorButton_NextCheckState_Callback kcolorbutton_nextcheckstate_callback = nullptr;
    KColorButton_KeyReleaseEvent_Callback kcolorbutton_keyreleaseevent_callback = nullptr;
    KColorButton_MouseReleaseEvent_Callback kcolorbutton_mousereleaseevent_callback = nullptr;
    KColorButton_ChangeEvent_Callback kcolorbutton_changeevent_callback = nullptr;
    KColorButton_TimerEvent_Callback kcolorbutton_timerevent_callback = nullptr;
    KColorButton_DevType_Callback kcolorbutton_devtype_callback = nullptr;
    KColorButton_SetVisible_Callback kcolorbutton_setvisible_callback = nullptr;
    KColorButton_HeightForWidth_Callback kcolorbutton_heightforwidth_callback = nullptr;
    KColorButton_HasHeightForWidth_Callback kcolorbutton_hasheightforwidth_callback = nullptr;
    KColorButton_PaintEngine_Callback kcolorbutton_paintengine_callback = nullptr;
    KColorButton_MouseDoubleClickEvent_Callback kcolorbutton_mousedoubleclickevent_callback = nullptr;
    KColorButton_WheelEvent_Callback kcolorbutton_wheelevent_callback = nullptr;
    KColorButton_EnterEvent_Callback kcolorbutton_enterevent_callback = nullptr;
    KColorButton_LeaveEvent_Callback kcolorbutton_leaveevent_callback = nullptr;
    KColorButton_MoveEvent_Callback kcolorbutton_moveevent_callback = nullptr;
    KColorButton_ResizeEvent_Callback kcolorbutton_resizeevent_callback = nullptr;
    KColorButton_CloseEvent_Callback kcolorbutton_closeevent_callback = nullptr;
    KColorButton_ContextMenuEvent_Callback kcolorbutton_contextmenuevent_callback = nullptr;
    KColorButton_TabletEvent_Callback kcolorbutton_tabletevent_callback = nullptr;
    KColorButton_ActionEvent_Callback kcolorbutton_actionevent_callback = nullptr;
    KColorButton_DragMoveEvent_Callback kcolorbutton_dragmoveevent_callback = nullptr;
    KColorButton_DragLeaveEvent_Callback kcolorbutton_dragleaveevent_callback = nullptr;
    KColorButton_ShowEvent_Callback kcolorbutton_showevent_callback = nullptr;
    KColorButton_HideEvent_Callback kcolorbutton_hideevent_callback = nullptr;
    KColorButton_NativeEvent_Callback kcolorbutton_nativeevent_callback = nullptr;
    KColorButton_Metric_Callback kcolorbutton_metric_callback = nullptr;
    KColorButton_InitPainter_Callback kcolorbutton_initpainter_callback = nullptr;
    KColorButton_Redirected_Callback kcolorbutton_redirected_callback = nullptr;
    KColorButton_SharedPainter_Callback kcolorbutton_sharedpainter_callback = nullptr;
    KColorButton_InputMethodEvent_Callback kcolorbutton_inputmethodevent_callback = nullptr;
    KColorButton_InputMethodQuery_Callback kcolorbutton_inputmethodquery_callback = nullptr;
    KColorButton_FocusNextPrevChild_Callback kcolorbutton_focusnextprevchild_callback = nullptr;
    KColorButton_EventFilter_Callback kcolorbutton_eventfilter_callback = nullptr;
    KColorButton_ChildEvent_Callback kcolorbutton_childevent_callback = nullptr;
    KColorButton_CustomEvent_Callback kcolorbutton_customevent_callback = nullptr;
    KColorButton_ConnectNotify_Callback kcolorbutton_connectnotify_callback = nullptr;
    KColorButton_DisconnectNotify_Callback kcolorbutton_disconnectnotify_callback = nullptr;
    KColorButton_UpdateMicroFocus_Callback kcolorbutton_updatemicrofocus_callback = nullptr;
    KColorButton_Create_Callback kcolorbutton_create_callback = nullptr;
    KColorButton_Destroy_Callback kcolorbutton_destroy_callback = nullptr;
    KColorButton_FocusNextChild_Callback kcolorbutton_focusnextchild_callback = nullptr;
    KColorButton_FocusPreviousChild_Callback kcolorbutton_focuspreviouschild_callback = nullptr;
    KColorButton_Sender_Callback kcolorbutton_sender_callback = nullptr;
    KColorButton_SenderSignalIndex_Callback kcolorbutton_sendersignalindex_callback = nullptr;
    KColorButton_Receivers_Callback kcolorbutton_receivers_callback = nullptr;
    KColorButton_IsSignalConnected_Callback kcolorbutton_issignalconnected_callback = nullptr;
    KColorButton_GetDecodedMetricF_Callback kcolorbutton_getdecodedmetricf_callback = nullptr;

    // Instance base flags
    mutable bool kcolorbutton_metacall_isbase = false;
    mutable bool kcolorbutton_sizehint_isbase = false;
    mutable bool kcolorbutton_minimumsizehint_isbase = false;
    mutable bool kcolorbutton_paintevent_isbase = false;
    mutable bool kcolorbutton_dragenterevent_isbase = false;
    mutable bool kcolorbutton_dropevent_isbase = false;
    mutable bool kcolorbutton_mousepressevent_isbase = false;
    mutable bool kcolorbutton_mousemoveevent_isbase = false;
    mutable bool kcolorbutton_keypressevent_isbase = false;
    mutable bool kcolorbutton_event_isbase = false;
    mutable bool kcolorbutton_focusinevent_isbase = false;
    mutable bool kcolorbutton_focusoutevent_isbase = false;
    mutable bool kcolorbutton_initstyleoption_isbase = false;
    mutable bool kcolorbutton_hitbutton_isbase = false;
    mutable bool kcolorbutton_checkstateset_isbase = false;
    mutable bool kcolorbutton_nextcheckstate_isbase = false;
    mutable bool kcolorbutton_keyreleaseevent_isbase = false;
    mutable bool kcolorbutton_mousereleaseevent_isbase = false;
    mutable bool kcolorbutton_changeevent_isbase = false;
    mutable bool kcolorbutton_timerevent_isbase = false;
    mutable bool kcolorbutton_devtype_isbase = false;
    mutable bool kcolorbutton_setvisible_isbase = false;
    mutable bool kcolorbutton_heightforwidth_isbase = false;
    mutable bool kcolorbutton_hasheightforwidth_isbase = false;
    mutable bool kcolorbutton_paintengine_isbase = false;
    mutable bool kcolorbutton_mousedoubleclickevent_isbase = false;
    mutable bool kcolorbutton_wheelevent_isbase = false;
    mutable bool kcolorbutton_enterevent_isbase = false;
    mutable bool kcolorbutton_leaveevent_isbase = false;
    mutable bool kcolorbutton_moveevent_isbase = false;
    mutable bool kcolorbutton_resizeevent_isbase = false;
    mutable bool kcolorbutton_closeevent_isbase = false;
    mutable bool kcolorbutton_contextmenuevent_isbase = false;
    mutable bool kcolorbutton_tabletevent_isbase = false;
    mutable bool kcolorbutton_actionevent_isbase = false;
    mutable bool kcolorbutton_dragmoveevent_isbase = false;
    mutable bool kcolorbutton_dragleaveevent_isbase = false;
    mutable bool kcolorbutton_showevent_isbase = false;
    mutable bool kcolorbutton_hideevent_isbase = false;
    mutable bool kcolorbutton_nativeevent_isbase = false;
    mutable bool kcolorbutton_metric_isbase = false;
    mutable bool kcolorbutton_initpainter_isbase = false;
    mutable bool kcolorbutton_redirected_isbase = false;
    mutable bool kcolorbutton_sharedpainter_isbase = false;
    mutable bool kcolorbutton_inputmethodevent_isbase = false;
    mutable bool kcolorbutton_inputmethodquery_isbase = false;
    mutable bool kcolorbutton_focusnextprevchild_isbase = false;
    mutable bool kcolorbutton_eventfilter_isbase = false;
    mutable bool kcolorbutton_childevent_isbase = false;
    mutable bool kcolorbutton_customevent_isbase = false;
    mutable bool kcolorbutton_connectnotify_isbase = false;
    mutable bool kcolorbutton_disconnectnotify_isbase = false;
    mutable bool kcolorbutton_updatemicrofocus_isbase = false;
    mutable bool kcolorbutton_create_isbase = false;
    mutable bool kcolorbutton_destroy_isbase = false;
    mutable bool kcolorbutton_focusnextchild_isbase = false;
    mutable bool kcolorbutton_focuspreviouschild_isbase = false;
    mutable bool kcolorbutton_sender_isbase = false;
    mutable bool kcolorbutton_sendersignalindex_isbase = false;
    mutable bool kcolorbutton_receivers_isbase = false;
    mutable bool kcolorbutton_issignalconnected_isbase = false;
    mutable bool kcolorbutton_getdecodedmetricf_isbase = false;

  public:
    VirtualKColorButton(QWidget* parent) : KColorButton(parent) {};
    VirtualKColorButton() : KColorButton() {};
    VirtualKColorButton(const QColor& c) : KColorButton(c) {};
    VirtualKColorButton(const QColor& c, const QColor& defaultColor) : KColorButton(c, defaultColor) {};
    VirtualKColorButton(const QColor& c, QWidget* parent) : KColorButton(c, parent) {};
    VirtualKColorButton(const QColor& c, const QColor& defaultColor, QWidget* parent) : KColorButton(c, defaultColor, parent) {};

    ~VirtualKColorButton() {
        kcolorbutton_metacall_callback = nullptr;
        kcolorbutton_sizehint_callback = nullptr;
        kcolorbutton_minimumsizehint_callback = nullptr;
        kcolorbutton_paintevent_callback = nullptr;
        kcolorbutton_dragenterevent_callback = nullptr;
        kcolorbutton_dropevent_callback = nullptr;
        kcolorbutton_mousepressevent_callback = nullptr;
        kcolorbutton_mousemoveevent_callback = nullptr;
        kcolorbutton_keypressevent_callback = nullptr;
        kcolorbutton_event_callback = nullptr;
        kcolorbutton_focusinevent_callback = nullptr;
        kcolorbutton_focusoutevent_callback = nullptr;
        kcolorbutton_initstyleoption_callback = nullptr;
        kcolorbutton_hitbutton_callback = nullptr;
        kcolorbutton_checkstateset_callback = nullptr;
        kcolorbutton_nextcheckstate_callback = nullptr;
        kcolorbutton_keyreleaseevent_callback = nullptr;
        kcolorbutton_mousereleaseevent_callback = nullptr;
        kcolorbutton_changeevent_callback = nullptr;
        kcolorbutton_timerevent_callback = nullptr;
        kcolorbutton_devtype_callback = nullptr;
        kcolorbutton_setvisible_callback = nullptr;
        kcolorbutton_heightforwidth_callback = nullptr;
        kcolorbutton_hasheightforwidth_callback = nullptr;
        kcolorbutton_paintengine_callback = nullptr;
        kcolorbutton_mousedoubleclickevent_callback = nullptr;
        kcolorbutton_wheelevent_callback = nullptr;
        kcolorbutton_enterevent_callback = nullptr;
        kcolorbutton_leaveevent_callback = nullptr;
        kcolorbutton_moveevent_callback = nullptr;
        kcolorbutton_resizeevent_callback = nullptr;
        kcolorbutton_closeevent_callback = nullptr;
        kcolorbutton_contextmenuevent_callback = nullptr;
        kcolorbutton_tabletevent_callback = nullptr;
        kcolorbutton_actionevent_callback = nullptr;
        kcolorbutton_dragmoveevent_callback = nullptr;
        kcolorbutton_dragleaveevent_callback = nullptr;
        kcolorbutton_showevent_callback = nullptr;
        kcolorbutton_hideevent_callback = nullptr;
        kcolorbutton_nativeevent_callback = nullptr;
        kcolorbutton_metric_callback = nullptr;
        kcolorbutton_initpainter_callback = nullptr;
        kcolorbutton_redirected_callback = nullptr;
        kcolorbutton_sharedpainter_callback = nullptr;
        kcolorbutton_inputmethodevent_callback = nullptr;
        kcolorbutton_inputmethodquery_callback = nullptr;
        kcolorbutton_focusnextprevchild_callback = nullptr;
        kcolorbutton_eventfilter_callback = nullptr;
        kcolorbutton_childevent_callback = nullptr;
        kcolorbutton_customevent_callback = nullptr;
        kcolorbutton_connectnotify_callback = nullptr;
        kcolorbutton_disconnectnotify_callback = nullptr;
        kcolorbutton_updatemicrofocus_callback = nullptr;
        kcolorbutton_create_callback = nullptr;
        kcolorbutton_destroy_callback = nullptr;
        kcolorbutton_focusnextchild_callback = nullptr;
        kcolorbutton_focuspreviouschild_callback = nullptr;
        kcolorbutton_sender_callback = nullptr;
        kcolorbutton_sendersignalindex_callback = nullptr;
        kcolorbutton_receivers_callback = nullptr;
        kcolorbutton_issignalconnected_callback = nullptr;
        kcolorbutton_getdecodedmetricf_callback = nullptr;
    }

    // Callback setters
    inline void setKColorButton_Metacall_Callback(KColorButton_Metacall_Callback cb) { kcolorbutton_metacall_callback = cb; }
    inline void setKColorButton_SizeHint_Callback(KColorButton_SizeHint_Callback cb) { kcolorbutton_sizehint_callback = cb; }
    inline void setKColorButton_MinimumSizeHint_Callback(KColorButton_MinimumSizeHint_Callback cb) { kcolorbutton_minimumsizehint_callback = cb; }
    inline void setKColorButton_PaintEvent_Callback(KColorButton_PaintEvent_Callback cb) { kcolorbutton_paintevent_callback = cb; }
    inline void setKColorButton_DragEnterEvent_Callback(KColorButton_DragEnterEvent_Callback cb) { kcolorbutton_dragenterevent_callback = cb; }
    inline void setKColorButton_DropEvent_Callback(KColorButton_DropEvent_Callback cb) { kcolorbutton_dropevent_callback = cb; }
    inline void setKColorButton_MousePressEvent_Callback(KColorButton_MousePressEvent_Callback cb) { kcolorbutton_mousepressevent_callback = cb; }
    inline void setKColorButton_MouseMoveEvent_Callback(KColorButton_MouseMoveEvent_Callback cb) { kcolorbutton_mousemoveevent_callback = cb; }
    inline void setKColorButton_KeyPressEvent_Callback(KColorButton_KeyPressEvent_Callback cb) { kcolorbutton_keypressevent_callback = cb; }
    inline void setKColorButton_Event_Callback(KColorButton_Event_Callback cb) { kcolorbutton_event_callback = cb; }
    inline void setKColorButton_FocusInEvent_Callback(KColorButton_FocusInEvent_Callback cb) { kcolorbutton_focusinevent_callback = cb; }
    inline void setKColorButton_FocusOutEvent_Callback(KColorButton_FocusOutEvent_Callback cb) { kcolorbutton_focusoutevent_callback = cb; }
    inline void setKColorButton_InitStyleOption_Callback(KColorButton_InitStyleOption_Callback cb) { kcolorbutton_initstyleoption_callback = cb; }
    inline void setKColorButton_HitButton_Callback(KColorButton_HitButton_Callback cb) { kcolorbutton_hitbutton_callback = cb; }
    inline void setKColorButton_CheckStateSet_Callback(KColorButton_CheckStateSet_Callback cb) { kcolorbutton_checkstateset_callback = cb; }
    inline void setKColorButton_NextCheckState_Callback(KColorButton_NextCheckState_Callback cb) { kcolorbutton_nextcheckstate_callback = cb; }
    inline void setKColorButton_KeyReleaseEvent_Callback(KColorButton_KeyReleaseEvent_Callback cb) { kcolorbutton_keyreleaseevent_callback = cb; }
    inline void setKColorButton_MouseReleaseEvent_Callback(KColorButton_MouseReleaseEvent_Callback cb) { kcolorbutton_mousereleaseevent_callback = cb; }
    inline void setKColorButton_ChangeEvent_Callback(KColorButton_ChangeEvent_Callback cb) { kcolorbutton_changeevent_callback = cb; }
    inline void setKColorButton_TimerEvent_Callback(KColorButton_TimerEvent_Callback cb) { kcolorbutton_timerevent_callback = cb; }
    inline void setKColorButton_DevType_Callback(KColorButton_DevType_Callback cb) { kcolorbutton_devtype_callback = cb; }
    inline void setKColorButton_SetVisible_Callback(KColorButton_SetVisible_Callback cb) { kcolorbutton_setvisible_callback = cb; }
    inline void setKColorButton_HeightForWidth_Callback(KColorButton_HeightForWidth_Callback cb) { kcolorbutton_heightforwidth_callback = cb; }
    inline void setKColorButton_HasHeightForWidth_Callback(KColorButton_HasHeightForWidth_Callback cb) { kcolorbutton_hasheightforwidth_callback = cb; }
    inline void setKColorButton_PaintEngine_Callback(KColorButton_PaintEngine_Callback cb) { kcolorbutton_paintengine_callback = cb; }
    inline void setKColorButton_MouseDoubleClickEvent_Callback(KColorButton_MouseDoubleClickEvent_Callback cb) { kcolorbutton_mousedoubleclickevent_callback = cb; }
    inline void setKColorButton_WheelEvent_Callback(KColorButton_WheelEvent_Callback cb) { kcolorbutton_wheelevent_callback = cb; }
    inline void setKColorButton_EnterEvent_Callback(KColorButton_EnterEvent_Callback cb) { kcolorbutton_enterevent_callback = cb; }
    inline void setKColorButton_LeaveEvent_Callback(KColorButton_LeaveEvent_Callback cb) { kcolorbutton_leaveevent_callback = cb; }
    inline void setKColorButton_MoveEvent_Callback(KColorButton_MoveEvent_Callback cb) { kcolorbutton_moveevent_callback = cb; }
    inline void setKColorButton_ResizeEvent_Callback(KColorButton_ResizeEvent_Callback cb) { kcolorbutton_resizeevent_callback = cb; }
    inline void setKColorButton_CloseEvent_Callback(KColorButton_CloseEvent_Callback cb) { kcolorbutton_closeevent_callback = cb; }
    inline void setKColorButton_ContextMenuEvent_Callback(KColorButton_ContextMenuEvent_Callback cb) { kcolorbutton_contextmenuevent_callback = cb; }
    inline void setKColorButton_TabletEvent_Callback(KColorButton_TabletEvent_Callback cb) { kcolorbutton_tabletevent_callback = cb; }
    inline void setKColorButton_ActionEvent_Callback(KColorButton_ActionEvent_Callback cb) { kcolorbutton_actionevent_callback = cb; }
    inline void setKColorButton_DragMoveEvent_Callback(KColorButton_DragMoveEvent_Callback cb) { kcolorbutton_dragmoveevent_callback = cb; }
    inline void setKColorButton_DragLeaveEvent_Callback(KColorButton_DragLeaveEvent_Callback cb) { kcolorbutton_dragleaveevent_callback = cb; }
    inline void setKColorButton_ShowEvent_Callback(KColorButton_ShowEvent_Callback cb) { kcolorbutton_showevent_callback = cb; }
    inline void setKColorButton_HideEvent_Callback(KColorButton_HideEvent_Callback cb) { kcolorbutton_hideevent_callback = cb; }
    inline void setKColorButton_NativeEvent_Callback(KColorButton_NativeEvent_Callback cb) { kcolorbutton_nativeevent_callback = cb; }
    inline void setKColorButton_Metric_Callback(KColorButton_Metric_Callback cb) { kcolorbutton_metric_callback = cb; }
    inline void setKColorButton_InitPainter_Callback(KColorButton_InitPainter_Callback cb) { kcolorbutton_initpainter_callback = cb; }
    inline void setKColorButton_Redirected_Callback(KColorButton_Redirected_Callback cb) { kcolorbutton_redirected_callback = cb; }
    inline void setKColorButton_SharedPainter_Callback(KColorButton_SharedPainter_Callback cb) { kcolorbutton_sharedpainter_callback = cb; }
    inline void setKColorButton_InputMethodEvent_Callback(KColorButton_InputMethodEvent_Callback cb) { kcolorbutton_inputmethodevent_callback = cb; }
    inline void setKColorButton_InputMethodQuery_Callback(KColorButton_InputMethodQuery_Callback cb) { kcolorbutton_inputmethodquery_callback = cb; }
    inline void setKColorButton_FocusNextPrevChild_Callback(KColorButton_FocusNextPrevChild_Callback cb) { kcolorbutton_focusnextprevchild_callback = cb; }
    inline void setKColorButton_EventFilter_Callback(KColorButton_EventFilter_Callback cb) { kcolorbutton_eventfilter_callback = cb; }
    inline void setKColorButton_ChildEvent_Callback(KColorButton_ChildEvent_Callback cb) { kcolorbutton_childevent_callback = cb; }
    inline void setKColorButton_CustomEvent_Callback(KColorButton_CustomEvent_Callback cb) { kcolorbutton_customevent_callback = cb; }
    inline void setKColorButton_ConnectNotify_Callback(KColorButton_ConnectNotify_Callback cb) { kcolorbutton_connectnotify_callback = cb; }
    inline void setKColorButton_DisconnectNotify_Callback(KColorButton_DisconnectNotify_Callback cb) { kcolorbutton_disconnectnotify_callback = cb; }
    inline void setKColorButton_UpdateMicroFocus_Callback(KColorButton_UpdateMicroFocus_Callback cb) { kcolorbutton_updatemicrofocus_callback = cb; }
    inline void setKColorButton_Create_Callback(KColorButton_Create_Callback cb) { kcolorbutton_create_callback = cb; }
    inline void setKColorButton_Destroy_Callback(KColorButton_Destroy_Callback cb) { kcolorbutton_destroy_callback = cb; }
    inline void setKColorButton_FocusNextChild_Callback(KColorButton_FocusNextChild_Callback cb) { kcolorbutton_focusnextchild_callback = cb; }
    inline void setKColorButton_FocusPreviousChild_Callback(KColorButton_FocusPreviousChild_Callback cb) { kcolorbutton_focuspreviouschild_callback = cb; }
    inline void setKColorButton_Sender_Callback(KColorButton_Sender_Callback cb) { kcolorbutton_sender_callback = cb; }
    inline void setKColorButton_SenderSignalIndex_Callback(KColorButton_SenderSignalIndex_Callback cb) { kcolorbutton_sendersignalindex_callback = cb; }
    inline void setKColorButton_Receivers_Callback(KColorButton_Receivers_Callback cb) { kcolorbutton_receivers_callback = cb; }
    inline void setKColorButton_IsSignalConnected_Callback(KColorButton_IsSignalConnected_Callback cb) { kcolorbutton_issignalconnected_callback = cb; }
    inline void setKColorButton_GetDecodedMetricF_Callback(KColorButton_GetDecodedMetricF_Callback cb) { kcolorbutton_getdecodedmetricf_callback = cb; }

    // Base flag setters
    inline void setKColorButton_Metacall_IsBase(bool value) const { kcolorbutton_metacall_isbase = value; }
    inline void setKColorButton_SizeHint_IsBase(bool value) const { kcolorbutton_sizehint_isbase = value; }
    inline void setKColorButton_MinimumSizeHint_IsBase(bool value) const { kcolorbutton_minimumsizehint_isbase = value; }
    inline void setKColorButton_PaintEvent_IsBase(bool value) const { kcolorbutton_paintevent_isbase = value; }
    inline void setKColorButton_DragEnterEvent_IsBase(bool value) const { kcolorbutton_dragenterevent_isbase = value; }
    inline void setKColorButton_DropEvent_IsBase(bool value) const { kcolorbutton_dropevent_isbase = value; }
    inline void setKColorButton_MousePressEvent_IsBase(bool value) const { kcolorbutton_mousepressevent_isbase = value; }
    inline void setKColorButton_MouseMoveEvent_IsBase(bool value) const { kcolorbutton_mousemoveevent_isbase = value; }
    inline void setKColorButton_KeyPressEvent_IsBase(bool value) const { kcolorbutton_keypressevent_isbase = value; }
    inline void setKColorButton_Event_IsBase(bool value) const { kcolorbutton_event_isbase = value; }
    inline void setKColorButton_FocusInEvent_IsBase(bool value) const { kcolorbutton_focusinevent_isbase = value; }
    inline void setKColorButton_FocusOutEvent_IsBase(bool value) const { kcolorbutton_focusoutevent_isbase = value; }
    inline void setKColorButton_InitStyleOption_IsBase(bool value) const { kcolorbutton_initstyleoption_isbase = value; }
    inline void setKColorButton_HitButton_IsBase(bool value) const { kcolorbutton_hitbutton_isbase = value; }
    inline void setKColorButton_CheckStateSet_IsBase(bool value) const { kcolorbutton_checkstateset_isbase = value; }
    inline void setKColorButton_NextCheckState_IsBase(bool value) const { kcolorbutton_nextcheckstate_isbase = value; }
    inline void setKColorButton_KeyReleaseEvent_IsBase(bool value) const { kcolorbutton_keyreleaseevent_isbase = value; }
    inline void setKColorButton_MouseReleaseEvent_IsBase(bool value) const { kcolorbutton_mousereleaseevent_isbase = value; }
    inline void setKColorButton_ChangeEvent_IsBase(bool value) const { kcolorbutton_changeevent_isbase = value; }
    inline void setKColorButton_TimerEvent_IsBase(bool value) const { kcolorbutton_timerevent_isbase = value; }
    inline void setKColorButton_DevType_IsBase(bool value) const { kcolorbutton_devtype_isbase = value; }
    inline void setKColorButton_SetVisible_IsBase(bool value) const { kcolorbutton_setvisible_isbase = value; }
    inline void setKColorButton_HeightForWidth_IsBase(bool value) const { kcolorbutton_heightforwidth_isbase = value; }
    inline void setKColorButton_HasHeightForWidth_IsBase(bool value) const { kcolorbutton_hasheightforwidth_isbase = value; }
    inline void setKColorButton_PaintEngine_IsBase(bool value) const { kcolorbutton_paintengine_isbase = value; }
    inline void setKColorButton_MouseDoubleClickEvent_IsBase(bool value) const { kcolorbutton_mousedoubleclickevent_isbase = value; }
    inline void setKColorButton_WheelEvent_IsBase(bool value) const { kcolorbutton_wheelevent_isbase = value; }
    inline void setKColorButton_EnterEvent_IsBase(bool value) const { kcolorbutton_enterevent_isbase = value; }
    inline void setKColorButton_LeaveEvent_IsBase(bool value) const { kcolorbutton_leaveevent_isbase = value; }
    inline void setKColorButton_MoveEvent_IsBase(bool value) const { kcolorbutton_moveevent_isbase = value; }
    inline void setKColorButton_ResizeEvent_IsBase(bool value) const { kcolorbutton_resizeevent_isbase = value; }
    inline void setKColorButton_CloseEvent_IsBase(bool value) const { kcolorbutton_closeevent_isbase = value; }
    inline void setKColorButton_ContextMenuEvent_IsBase(bool value) const { kcolorbutton_contextmenuevent_isbase = value; }
    inline void setKColorButton_TabletEvent_IsBase(bool value) const { kcolorbutton_tabletevent_isbase = value; }
    inline void setKColorButton_ActionEvent_IsBase(bool value) const { kcolorbutton_actionevent_isbase = value; }
    inline void setKColorButton_DragMoveEvent_IsBase(bool value) const { kcolorbutton_dragmoveevent_isbase = value; }
    inline void setKColorButton_DragLeaveEvent_IsBase(bool value) const { kcolorbutton_dragleaveevent_isbase = value; }
    inline void setKColorButton_ShowEvent_IsBase(bool value) const { kcolorbutton_showevent_isbase = value; }
    inline void setKColorButton_HideEvent_IsBase(bool value) const { kcolorbutton_hideevent_isbase = value; }
    inline void setKColorButton_NativeEvent_IsBase(bool value) const { kcolorbutton_nativeevent_isbase = value; }
    inline void setKColorButton_Metric_IsBase(bool value) const { kcolorbutton_metric_isbase = value; }
    inline void setKColorButton_InitPainter_IsBase(bool value) const { kcolorbutton_initpainter_isbase = value; }
    inline void setKColorButton_Redirected_IsBase(bool value) const { kcolorbutton_redirected_isbase = value; }
    inline void setKColorButton_SharedPainter_IsBase(bool value) const { kcolorbutton_sharedpainter_isbase = value; }
    inline void setKColorButton_InputMethodEvent_IsBase(bool value) const { kcolorbutton_inputmethodevent_isbase = value; }
    inline void setKColorButton_InputMethodQuery_IsBase(bool value) const { kcolorbutton_inputmethodquery_isbase = value; }
    inline void setKColorButton_FocusNextPrevChild_IsBase(bool value) const { kcolorbutton_focusnextprevchild_isbase = value; }
    inline void setKColorButton_EventFilter_IsBase(bool value) const { kcolorbutton_eventfilter_isbase = value; }
    inline void setKColorButton_ChildEvent_IsBase(bool value) const { kcolorbutton_childevent_isbase = value; }
    inline void setKColorButton_CustomEvent_IsBase(bool value) const { kcolorbutton_customevent_isbase = value; }
    inline void setKColorButton_ConnectNotify_IsBase(bool value) const { kcolorbutton_connectnotify_isbase = value; }
    inline void setKColorButton_DisconnectNotify_IsBase(bool value) const { kcolorbutton_disconnectnotify_isbase = value; }
    inline void setKColorButton_UpdateMicroFocus_IsBase(bool value) const { kcolorbutton_updatemicrofocus_isbase = value; }
    inline void setKColorButton_Create_IsBase(bool value) const { kcolorbutton_create_isbase = value; }
    inline void setKColorButton_Destroy_IsBase(bool value) const { kcolorbutton_destroy_isbase = value; }
    inline void setKColorButton_FocusNextChild_IsBase(bool value) const { kcolorbutton_focusnextchild_isbase = value; }
    inline void setKColorButton_FocusPreviousChild_IsBase(bool value) const { kcolorbutton_focuspreviouschild_isbase = value; }
    inline void setKColorButton_Sender_IsBase(bool value) const { kcolorbutton_sender_isbase = value; }
    inline void setKColorButton_SenderSignalIndex_IsBase(bool value) const { kcolorbutton_sendersignalindex_isbase = value; }
    inline void setKColorButton_Receivers_IsBase(bool value) const { kcolorbutton_receivers_isbase = value; }
    inline void setKColorButton_IsSignalConnected_IsBase(bool value) const { kcolorbutton_issignalconnected_isbase = value; }
    inline void setKColorButton_GetDecodedMetricF_IsBase(bool value) const { kcolorbutton_getdecodedmetricf_isbase = value; }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (kcolorbutton_metacall_isbase) {
            kcolorbutton_metacall_isbase = false;
            return KColorButton::qt_metacall(param1, param2, param3);
        } else if (kcolorbutton_metacall_callback != nullptr) {
            int cbval1 = static_cast<int>(param1);
            int cbval2 = param2;
            void** cbval3 = param3;

            int callback_ret = kcolorbutton_metacall_callback(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        } else {
            return KColorButton::qt_metacall(param1, param2, param3);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QSize sizeHint() const override {
        if (kcolorbutton_sizehint_isbase) {
            kcolorbutton_sizehint_isbase = false;
            return KColorButton::sizeHint();
        } else if (kcolorbutton_sizehint_callback != nullptr) {
            QSize* callback_ret = kcolorbutton_sizehint_callback();
            return *callback_ret;
        } else {
            return KColorButton::sizeHint();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QSize minimumSizeHint() const override {
        if (kcolorbutton_minimumsizehint_isbase) {
            kcolorbutton_minimumsizehint_isbase = false;
            return KColorButton::minimumSizeHint();
        } else if (kcolorbutton_minimumsizehint_callback != nullptr) {
            QSize* callback_ret = kcolorbutton_minimumsizehint_callback();
            return *callback_ret;
        } else {
            return KColorButton::minimumSizeHint();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void paintEvent(QPaintEvent* pe) override {
        if (kcolorbutton_paintevent_isbase) {
            kcolorbutton_paintevent_isbase = false;
            KColorButton::paintEvent(pe);
        } else if (kcolorbutton_paintevent_callback != nullptr) {
            QPaintEvent* cbval1 = pe;

            kcolorbutton_paintevent_callback(this, cbval1);
        } else {
            KColorButton::paintEvent(pe);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragEnterEvent(QDragEnterEvent* param1) override {
        if (kcolorbutton_dragenterevent_isbase) {
            kcolorbutton_dragenterevent_isbase = false;
            KColorButton::dragEnterEvent(param1);
        } else if (kcolorbutton_dragenterevent_callback != nullptr) {
            QDragEnterEvent* cbval1 = param1;

            kcolorbutton_dragenterevent_callback(this, cbval1);
        } else {
            KColorButton::dragEnterEvent(param1);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void dropEvent(QDropEvent* param1) override {
        if (kcolorbutton_dropevent_isbase) {
            kcolorbutton_dropevent_isbase = false;
            KColorButton::dropEvent(param1);
        } else if (kcolorbutton_dropevent_callback != nullptr) {
            QDropEvent* cbval1 = param1;

            kcolorbutton_dropevent_callback(this, cbval1);
        } else {
            KColorButton::dropEvent(param1);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void mousePressEvent(QMouseEvent* e) override {
        if (kcolorbutton_mousepressevent_isbase) {
            kcolorbutton_mousepressevent_isbase = false;
            KColorButton::mousePressEvent(e);
        } else if (kcolorbutton_mousepressevent_callback != nullptr) {
            QMouseEvent* cbval1 = e;

            kcolorbutton_mousepressevent_callback(this, cbval1);
        } else {
            KColorButton::mousePressEvent(e);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseMoveEvent(QMouseEvent* e) override {
        if (kcolorbutton_mousemoveevent_isbase) {
            kcolorbutton_mousemoveevent_isbase = false;
            KColorButton::mouseMoveEvent(e);
        } else if (kcolorbutton_mousemoveevent_callback != nullptr) {
            QMouseEvent* cbval1 = e;

            kcolorbutton_mousemoveevent_callback(this, cbval1);
        } else {
            KColorButton::mouseMoveEvent(e);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void keyPressEvent(QKeyEvent* e) override {
        if (kcolorbutton_keypressevent_isbase) {
            kcolorbutton_keypressevent_isbase = false;
            KColorButton::keyPressEvent(e);
        } else if (kcolorbutton_keypressevent_callback != nullptr) {
            QKeyEvent* cbval1 = e;

            kcolorbutton_keypressevent_callback(this, cbval1);
        } else {
            KColorButton::keyPressEvent(e);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* e) override {
        if (kcolorbutton_event_isbase) {
            kcolorbutton_event_isbase = false;
            return KColorButton::event(e);
        } else if (kcolorbutton_event_callback != nullptr) {
            QEvent* cbval1 = e;

            bool callback_ret = kcolorbutton_event_callback(this, cbval1);
            return callback_ret;
        } else {
            return KColorButton::event(e);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void focusInEvent(QFocusEvent* param1) override {
        if (kcolorbutton_focusinevent_isbase) {
            kcolorbutton_focusinevent_isbase = false;
            KColorButton::focusInEvent(param1);
        } else if (kcolorbutton_focusinevent_callback != nullptr) {
            QFocusEvent* cbval1 = param1;

            kcolorbutton_focusinevent_callback(this, cbval1);
        } else {
            KColorButton::focusInEvent(param1);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void focusOutEvent(QFocusEvent* param1) override {
        if (kcolorbutton_focusoutevent_isbase) {
            kcolorbutton_focusoutevent_isbase = false;
            KColorButton::focusOutEvent(param1);
        } else if (kcolorbutton_focusoutevent_callback != nullptr) {
            QFocusEvent* cbval1 = param1;

            kcolorbutton_focusoutevent_callback(this, cbval1);
        } else {
            KColorButton::focusOutEvent(param1);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void initStyleOption(QStyleOptionButton* option) const override {
        if (kcolorbutton_initstyleoption_isbase) {
            kcolorbutton_initstyleoption_isbase = false;
            KColorButton::initStyleOption(option);
        } else if (kcolorbutton_initstyleoption_callback != nullptr) {
            QStyleOptionButton* cbval1 = option;

            kcolorbutton_initstyleoption_callback(this, cbval1);
        } else {
            KColorButton::initStyleOption(option);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool hitButton(const QPoint& pos) const override {
        if (kcolorbutton_hitbutton_isbase) {
            kcolorbutton_hitbutton_isbase = false;
            return KColorButton::hitButton(pos);
        } else if (kcolorbutton_hitbutton_callback != nullptr) {
            const QPoint& pos_ret = pos;
            // Cast returned reference into pointer
            QPoint* cbval1 = const_cast<QPoint*>(&pos_ret);

            bool callback_ret = kcolorbutton_hitbutton_callback(this, cbval1);
            return callback_ret;
        } else {
            return KColorButton::hitButton(pos);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void checkStateSet() override {
        if (kcolorbutton_checkstateset_isbase) {
            kcolorbutton_checkstateset_isbase = false;
            KColorButton::checkStateSet();
        } else if (kcolorbutton_checkstateset_callback != nullptr) {
            kcolorbutton_checkstateset_callback();
        } else {
            KColorButton::checkStateSet();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void nextCheckState() override {
        if (kcolorbutton_nextcheckstate_isbase) {
            kcolorbutton_nextcheckstate_isbase = false;
            KColorButton::nextCheckState();
        } else if (kcolorbutton_nextcheckstate_callback != nullptr) {
            kcolorbutton_nextcheckstate_callback();
        } else {
            KColorButton::nextCheckState();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void keyReleaseEvent(QKeyEvent* e) override {
        if (kcolorbutton_keyreleaseevent_isbase) {
            kcolorbutton_keyreleaseevent_isbase = false;
            KColorButton::keyReleaseEvent(e);
        } else if (kcolorbutton_keyreleaseevent_callback != nullptr) {
            QKeyEvent* cbval1 = e;

            kcolorbutton_keyreleaseevent_callback(this, cbval1);
        } else {
            KColorButton::keyReleaseEvent(e);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseReleaseEvent(QMouseEvent* e) override {
        if (kcolorbutton_mousereleaseevent_isbase) {
            kcolorbutton_mousereleaseevent_isbase = false;
            KColorButton::mouseReleaseEvent(e);
        } else if (kcolorbutton_mousereleaseevent_callback != nullptr) {
            QMouseEvent* cbval1 = e;

            kcolorbutton_mousereleaseevent_callback(this, cbval1);
        } else {
            KColorButton::mouseReleaseEvent(e);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void changeEvent(QEvent* e) override {
        if (kcolorbutton_changeevent_isbase) {
            kcolorbutton_changeevent_isbase = false;
            KColorButton::changeEvent(e);
        } else if (kcolorbutton_changeevent_callback != nullptr) {
            QEvent* cbval1 = e;

            kcolorbutton_changeevent_callback(this, cbval1);
        } else {
            KColorButton::changeEvent(e);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* e) override {
        if (kcolorbutton_timerevent_isbase) {
            kcolorbutton_timerevent_isbase = false;
            KColorButton::timerEvent(e);
        } else if (kcolorbutton_timerevent_callback != nullptr) {
            QTimerEvent* cbval1 = e;

            kcolorbutton_timerevent_callback(this, cbval1);
        } else {
            KColorButton::timerEvent(e);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual int devType() const override {
        if (kcolorbutton_devtype_isbase) {
            kcolorbutton_devtype_isbase = false;
            return KColorButton::devType();
        } else if (kcolorbutton_devtype_callback != nullptr) {
            int callback_ret = kcolorbutton_devtype_callback();
            return static_cast<int>(callback_ret);
        } else {
            return KColorButton::devType();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void setVisible(bool visible) override {
        if (kcolorbutton_setvisible_isbase) {
            kcolorbutton_setvisible_isbase = false;
            KColorButton::setVisible(visible);
        } else if (kcolorbutton_setvisible_callback != nullptr) {
            bool cbval1 = visible;

            kcolorbutton_setvisible_callback(this, cbval1);
        } else {
            KColorButton::setVisible(visible);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual int heightForWidth(int param1) const override {
        if (kcolorbutton_heightforwidth_isbase) {
            kcolorbutton_heightforwidth_isbase = false;
            return KColorButton::heightForWidth(param1);
        } else if (kcolorbutton_heightforwidth_callback != nullptr) {
            int cbval1 = param1;

            int callback_ret = kcolorbutton_heightforwidth_callback(this, cbval1);
            return static_cast<int>(callback_ret);
        } else {
            return KColorButton::heightForWidth(param1);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool hasHeightForWidth() const override {
        if (kcolorbutton_hasheightforwidth_isbase) {
            kcolorbutton_hasheightforwidth_isbase = false;
            return KColorButton::hasHeightForWidth();
        } else if (kcolorbutton_hasheightforwidth_callback != nullptr) {
            bool callback_ret = kcolorbutton_hasheightforwidth_callback();
            return callback_ret;
        } else {
            return KColorButton::hasHeightForWidth();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QPaintEngine* paintEngine() const override {
        if (kcolorbutton_paintengine_isbase) {
            kcolorbutton_paintengine_isbase = false;
            return KColorButton::paintEngine();
        } else if (kcolorbutton_paintengine_callback != nullptr) {
            QPaintEngine* callback_ret = kcolorbutton_paintengine_callback();
            return callback_ret;
        } else {
            return KColorButton::paintEngine();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseDoubleClickEvent(QMouseEvent* event) override {
        if (kcolorbutton_mousedoubleclickevent_isbase) {
            kcolorbutton_mousedoubleclickevent_isbase = false;
            KColorButton::mouseDoubleClickEvent(event);
        } else if (kcolorbutton_mousedoubleclickevent_callback != nullptr) {
            QMouseEvent* cbval1 = event;

            kcolorbutton_mousedoubleclickevent_callback(this, cbval1);
        } else {
            KColorButton::mouseDoubleClickEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void wheelEvent(QWheelEvent* event) override {
        if (kcolorbutton_wheelevent_isbase) {
            kcolorbutton_wheelevent_isbase = false;
            KColorButton::wheelEvent(event);
        } else if (kcolorbutton_wheelevent_callback != nullptr) {
            QWheelEvent* cbval1 = event;

            kcolorbutton_wheelevent_callback(this, cbval1);
        } else {
            KColorButton::wheelEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void enterEvent(QEnterEvent* event) override {
        if (kcolorbutton_enterevent_isbase) {
            kcolorbutton_enterevent_isbase = false;
            KColorButton::enterEvent(event);
        } else if (kcolorbutton_enterevent_callback != nullptr) {
            QEnterEvent* cbval1 = event;

            kcolorbutton_enterevent_callback(this, cbval1);
        } else {
            KColorButton::enterEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void leaveEvent(QEvent* event) override {
        if (kcolorbutton_leaveevent_isbase) {
            kcolorbutton_leaveevent_isbase = false;
            KColorButton::leaveEvent(event);
        } else if (kcolorbutton_leaveevent_callback != nullptr) {
            QEvent* cbval1 = event;

            kcolorbutton_leaveevent_callback(this, cbval1);
        } else {
            KColorButton::leaveEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void moveEvent(QMoveEvent* event) override {
        if (kcolorbutton_moveevent_isbase) {
            kcolorbutton_moveevent_isbase = false;
            KColorButton::moveEvent(event);
        } else if (kcolorbutton_moveevent_callback != nullptr) {
            QMoveEvent* cbval1 = event;

            kcolorbutton_moveevent_callback(this, cbval1);
        } else {
            KColorButton::moveEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void resizeEvent(QResizeEvent* event) override {
        if (kcolorbutton_resizeevent_isbase) {
            kcolorbutton_resizeevent_isbase = false;
            KColorButton::resizeEvent(event);
        } else if (kcolorbutton_resizeevent_callback != nullptr) {
            QResizeEvent* cbval1 = event;

            kcolorbutton_resizeevent_callback(this, cbval1);
        } else {
            KColorButton::resizeEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void closeEvent(QCloseEvent* event) override {
        if (kcolorbutton_closeevent_isbase) {
            kcolorbutton_closeevent_isbase = false;
            KColorButton::closeEvent(event);
        } else if (kcolorbutton_closeevent_callback != nullptr) {
            QCloseEvent* cbval1 = event;

            kcolorbutton_closeevent_callback(this, cbval1);
        } else {
            KColorButton::closeEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void contextMenuEvent(QContextMenuEvent* event) override {
        if (kcolorbutton_contextmenuevent_isbase) {
            kcolorbutton_contextmenuevent_isbase = false;
            KColorButton::contextMenuEvent(event);
        } else if (kcolorbutton_contextmenuevent_callback != nullptr) {
            QContextMenuEvent* cbval1 = event;

            kcolorbutton_contextmenuevent_callback(this, cbval1);
        } else {
            KColorButton::contextMenuEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void tabletEvent(QTabletEvent* event) override {
        if (kcolorbutton_tabletevent_isbase) {
            kcolorbutton_tabletevent_isbase = false;
            KColorButton::tabletEvent(event);
        } else if (kcolorbutton_tabletevent_callback != nullptr) {
            QTabletEvent* cbval1 = event;

            kcolorbutton_tabletevent_callback(this, cbval1);
        } else {
            KColorButton::tabletEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void actionEvent(QActionEvent* event) override {
        if (kcolorbutton_actionevent_isbase) {
            kcolorbutton_actionevent_isbase = false;
            KColorButton::actionEvent(event);
        } else if (kcolorbutton_actionevent_callback != nullptr) {
            QActionEvent* cbval1 = event;

            kcolorbutton_actionevent_callback(this, cbval1);
        } else {
            KColorButton::actionEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragMoveEvent(QDragMoveEvent* event) override {
        if (kcolorbutton_dragmoveevent_isbase) {
            kcolorbutton_dragmoveevent_isbase = false;
            KColorButton::dragMoveEvent(event);
        } else if (kcolorbutton_dragmoveevent_callback != nullptr) {
            QDragMoveEvent* cbval1 = event;

            kcolorbutton_dragmoveevent_callback(this, cbval1);
        } else {
            KColorButton::dragMoveEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragLeaveEvent(QDragLeaveEvent* event) override {
        if (kcolorbutton_dragleaveevent_isbase) {
            kcolorbutton_dragleaveevent_isbase = false;
            KColorButton::dragLeaveEvent(event);
        } else if (kcolorbutton_dragleaveevent_callback != nullptr) {
            QDragLeaveEvent* cbval1 = event;

            kcolorbutton_dragleaveevent_callback(this, cbval1);
        } else {
            KColorButton::dragLeaveEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void showEvent(QShowEvent* event) override {
        if (kcolorbutton_showevent_isbase) {
            kcolorbutton_showevent_isbase = false;
            KColorButton::showEvent(event);
        } else if (kcolorbutton_showevent_callback != nullptr) {
            QShowEvent* cbval1 = event;

            kcolorbutton_showevent_callback(this, cbval1);
        } else {
            KColorButton::showEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void hideEvent(QHideEvent* event) override {
        if (kcolorbutton_hideevent_isbase) {
            kcolorbutton_hideevent_isbase = false;
            KColorButton::hideEvent(event);
        } else if (kcolorbutton_hideevent_callback != nullptr) {
            QHideEvent* cbval1 = event;

            kcolorbutton_hideevent_callback(this, cbval1);
        } else {
            KColorButton::hideEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool nativeEvent(const QByteArray& eventType, void* message, qintptr* result) override {
        if (kcolorbutton_nativeevent_isbase) {
            kcolorbutton_nativeevent_isbase = false;
            return KColorButton::nativeEvent(eventType, message, result);
        } else if (kcolorbutton_nativeevent_callback != nullptr) {
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

            bool callback_ret = kcolorbutton_nativeevent_callback(this, cbval1, cbval2, cbval3);
            return callback_ret;
        } else {
            return KColorButton::nativeEvent(eventType, message, result);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual int metric(QPaintDevice::PaintDeviceMetric param1) const override {
        if (kcolorbutton_metric_isbase) {
            kcolorbutton_metric_isbase = false;
            return KColorButton::metric(param1);
        } else if (kcolorbutton_metric_callback != nullptr) {
            int cbval1 = static_cast<int>(param1);

            int callback_ret = kcolorbutton_metric_callback(this, cbval1);
            return static_cast<int>(callback_ret);
        } else {
            return KColorButton::metric(param1);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void initPainter(QPainter* painter) const override {
        if (kcolorbutton_initpainter_isbase) {
            kcolorbutton_initpainter_isbase = false;
            KColorButton::initPainter(painter);
        } else if (kcolorbutton_initpainter_callback != nullptr) {
            QPainter* cbval1 = painter;

            kcolorbutton_initpainter_callback(this, cbval1);
        } else {
            KColorButton::initPainter(painter);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QPaintDevice* redirected(QPoint* offset) const override {
        if (kcolorbutton_redirected_isbase) {
            kcolorbutton_redirected_isbase = false;
            return KColorButton::redirected(offset);
        } else if (kcolorbutton_redirected_callback != nullptr) {
            QPoint* cbval1 = offset;

            QPaintDevice* callback_ret = kcolorbutton_redirected_callback(this, cbval1);
            return callback_ret;
        } else {
            return KColorButton::redirected(offset);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QPainter* sharedPainter() const override {
        if (kcolorbutton_sharedpainter_isbase) {
            kcolorbutton_sharedpainter_isbase = false;
            return KColorButton::sharedPainter();
        } else if (kcolorbutton_sharedpainter_callback != nullptr) {
            QPainter* callback_ret = kcolorbutton_sharedpainter_callback();
            return callback_ret;
        } else {
            return KColorButton::sharedPainter();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void inputMethodEvent(QInputMethodEvent* param1) override {
        if (kcolorbutton_inputmethodevent_isbase) {
            kcolorbutton_inputmethodevent_isbase = false;
            KColorButton::inputMethodEvent(param1);
        } else if (kcolorbutton_inputmethodevent_callback != nullptr) {
            QInputMethodEvent* cbval1 = param1;

            kcolorbutton_inputmethodevent_callback(this, cbval1);
        } else {
            KColorButton::inputMethodEvent(param1);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QVariant inputMethodQuery(Qt::InputMethodQuery param1) const override {
        if (kcolorbutton_inputmethodquery_isbase) {
            kcolorbutton_inputmethodquery_isbase = false;
            return KColorButton::inputMethodQuery(param1);
        } else if (kcolorbutton_inputmethodquery_callback != nullptr) {
            int cbval1 = static_cast<int>(param1);

            QVariant* callback_ret = kcolorbutton_inputmethodquery_callback(this, cbval1);
            return *callback_ret;
        } else {
            return KColorButton::inputMethodQuery(param1);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool focusNextPrevChild(bool next) override {
        if (kcolorbutton_focusnextprevchild_isbase) {
            kcolorbutton_focusnextprevchild_isbase = false;
            return KColorButton::focusNextPrevChild(next);
        } else if (kcolorbutton_focusnextprevchild_callback != nullptr) {
            bool cbval1 = next;

            bool callback_ret = kcolorbutton_focusnextprevchild_callback(this, cbval1);
            return callback_ret;
        } else {
            return KColorButton::focusNextPrevChild(next);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* watched, QEvent* event) override {
        if (kcolorbutton_eventfilter_isbase) {
            kcolorbutton_eventfilter_isbase = false;
            return KColorButton::eventFilter(watched, event);
        } else if (kcolorbutton_eventfilter_callback != nullptr) {
            QObject* cbval1 = watched;
            QEvent* cbval2 = event;

            bool callback_ret = kcolorbutton_eventfilter_callback(this, cbval1, cbval2);
            return callback_ret;
        } else {
            return KColorButton::eventFilter(watched, event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (kcolorbutton_childevent_isbase) {
            kcolorbutton_childevent_isbase = false;
            KColorButton::childEvent(event);
        } else if (kcolorbutton_childevent_callback != nullptr) {
            QChildEvent* cbval1 = event;

            kcolorbutton_childevent_callback(this, cbval1);
        } else {
            KColorButton::childEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (kcolorbutton_customevent_isbase) {
            kcolorbutton_customevent_isbase = false;
            KColorButton::customEvent(event);
        } else if (kcolorbutton_customevent_callback != nullptr) {
            QEvent* cbval1 = event;

            kcolorbutton_customevent_callback(this, cbval1);
        } else {
            KColorButton::customEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (kcolorbutton_connectnotify_isbase) {
            kcolorbutton_connectnotify_isbase = false;
            KColorButton::connectNotify(signal);
        } else if (kcolorbutton_connectnotify_callback != nullptr) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            kcolorbutton_connectnotify_callback(this, cbval1);
        } else {
            KColorButton::connectNotify(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (kcolorbutton_disconnectnotify_isbase) {
            kcolorbutton_disconnectnotify_isbase = false;
            KColorButton::disconnectNotify(signal);
        } else if (kcolorbutton_disconnectnotify_callback != nullptr) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            kcolorbutton_disconnectnotify_callback(this, cbval1);
        } else {
            KColorButton::disconnectNotify(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    void updateMicroFocus() {
        if (kcolorbutton_updatemicrofocus_isbase) {
            kcolorbutton_updatemicrofocus_isbase = false;
            KColorButton::updateMicroFocus();
        } else if (kcolorbutton_updatemicrofocus_callback != nullptr) {
            kcolorbutton_updatemicrofocus_callback();
        } else {
            KColorButton::updateMicroFocus();
        }
    }

    // Virtual method for C ABI access and custom callback
    void create() {
        if (kcolorbutton_create_isbase) {
            kcolorbutton_create_isbase = false;
            KColorButton::create();
        } else if (kcolorbutton_create_callback != nullptr) {
            kcolorbutton_create_callback();
        } else {
            KColorButton::create();
        }
    }

    // Virtual method for C ABI access and custom callback
    void destroy() {
        if (kcolorbutton_destroy_isbase) {
            kcolorbutton_destroy_isbase = false;
            KColorButton::destroy();
        } else if (kcolorbutton_destroy_callback != nullptr) {
            kcolorbutton_destroy_callback();
        } else {
            KColorButton::destroy();
        }
    }

    // Virtual method for C ABI access and custom callback
    bool focusNextChild() {
        if (kcolorbutton_focusnextchild_isbase) {
            kcolorbutton_focusnextchild_isbase = false;
            return KColorButton::focusNextChild();
        } else if (kcolorbutton_focusnextchild_callback != nullptr) {
            bool callback_ret = kcolorbutton_focusnextchild_callback();
            return callback_ret;
        } else {
            return KColorButton::focusNextChild();
        }
    }

    // Virtual method for C ABI access and custom callback
    bool focusPreviousChild() {
        if (kcolorbutton_focuspreviouschild_isbase) {
            kcolorbutton_focuspreviouschild_isbase = false;
            return KColorButton::focusPreviousChild();
        } else if (kcolorbutton_focuspreviouschild_callback != nullptr) {
            bool callback_ret = kcolorbutton_focuspreviouschild_callback();
            return callback_ret;
        } else {
            return KColorButton::focusPreviousChild();
        }
    }

    // Virtual method for C ABI access and custom callback
    QObject* sender() const {
        if (kcolorbutton_sender_isbase) {
            kcolorbutton_sender_isbase = false;
            return KColorButton::sender();
        } else if (kcolorbutton_sender_callback != nullptr) {
            QObject* callback_ret = kcolorbutton_sender_callback();
            return callback_ret;
        } else {
            return KColorButton::sender();
        }
    }

    // Virtual method for C ABI access and custom callback
    int senderSignalIndex() const {
        if (kcolorbutton_sendersignalindex_isbase) {
            kcolorbutton_sendersignalindex_isbase = false;
            return KColorButton::senderSignalIndex();
        } else if (kcolorbutton_sendersignalindex_callback != nullptr) {
            int callback_ret = kcolorbutton_sendersignalindex_callback();
            return static_cast<int>(callback_ret);
        } else {
            return KColorButton::senderSignalIndex();
        }
    }

    // Virtual method for C ABI access and custom callback
    int receivers(const char* signal) const {
        if (kcolorbutton_receivers_isbase) {
            kcolorbutton_receivers_isbase = false;
            return KColorButton::receivers(signal);
        } else if (kcolorbutton_receivers_callback != nullptr) {
            const char* cbval1 = (const char*)signal;

            int callback_ret = kcolorbutton_receivers_callback(this, cbval1);
            return static_cast<int>(callback_ret);
        } else {
            return KColorButton::receivers(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    bool isSignalConnected(const QMetaMethod& signal) const {
        if (kcolorbutton_issignalconnected_isbase) {
            kcolorbutton_issignalconnected_isbase = false;
            return KColorButton::isSignalConnected(signal);
        } else if (kcolorbutton_issignalconnected_callback != nullptr) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            bool callback_ret = kcolorbutton_issignalconnected_callback(this, cbval1);
            return callback_ret;
        } else {
            return KColorButton::isSignalConnected(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    double getDecodedMetricF(QPaintDevice::PaintDeviceMetric metricA, QPaintDevice::PaintDeviceMetric metricB) const {
        if (kcolorbutton_getdecodedmetricf_isbase) {
            kcolorbutton_getdecodedmetricf_isbase = false;
            return KColorButton::getDecodedMetricF(metricA, metricB);
        } else if (kcolorbutton_getdecodedmetricf_callback != nullptr) {
            int cbval1 = static_cast<int>(metricA);
            int cbval2 = static_cast<int>(metricB);

            double callback_ret = kcolorbutton_getdecodedmetricf_callback(this, cbval1, cbval2);
            return static_cast<double>(callback_ret);
        } else {
            return KColorButton::getDecodedMetricF(metricA, metricB);
        }
    }

    // Friend functions
    friend void KColorButton_PaintEvent(KColorButton* self, QPaintEvent* pe);
    friend void KColorButton_QBasePaintEvent(KColorButton* self, QPaintEvent* pe);
    friend void KColorButton_DragEnterEvent(KColorButton* self, QDragEnterEvent* param1);
    friend void KColorButton_QBaseDragEnterEvent(KColorButton* self, QDragEnterEvent* param1);
    friend void KColorButton_DropEvent(KColorButton* self, QDropEvent* param1);
    friend void KColorButton_QBaseDropEvent(KColorButton* self, QDropEvent* param1);
    friend void KColorButton_MousePressEvent(KColorButton* self, QMouseEvent* e);
    friend void KColorButton_QBaseMousePressEvent(KColorButton* self, QMouseEvent* e);
    friend void KColorButton_MouseMoveEvent(KColorButton* self, QMouseEvent* e);
    friend void KColorButton_QBaseMouseMoveEvent(KColorButton* self, QMouseEvent* e);
    friend void KColorButton_KeyPressEvent(KColorButton* self, QKeyEvent* e);
    friend void KColorButton_QBaseKeyPressEvent(KColorButton* self, QKeyEvent* e);
    friend bool KColorButton_Event(KColorButton* self, QEvent* e);
    friend bool KColorButton_QBaseEvent(KColorButton* self, QEvent* e);
    friend void KColorButton_FocusInEvent(KColorButton* self, QFocusEvent* param1);
    friend void KColorButton_QBaseFocusInEvent(KColorButton* self, QFocusEvent* param1);
    friend void KColorButton_FocusOutEvent(KColorButton* self, QFocusEvent* param1);
    friend void KColorButton_QBaseFocusOutEvent(KColorButton* self, QFocusEvent* param1);
    friend void KColorButton_InitStyleOption(const KColorButton* self, QStyleOptionButton* option);
    friend void KColorButton_QBaseInitStyleOption(const KColorButton* self, QStyleOptionButton* option);
    friend bool KColorButton_HitButton(const KColorButton* self, const QPoint* pos);
    friend bool KColorButton_QBaseHitButton(const KColorButton* self, const QPoint* pos);
    friend void KColorButton_CheckStateSet(KColorButton* self);
    friend void KColorButton_QBaseCheckStateSet(KColorButton* self);
    friend void KColorButton_NextCheckState(KColorButton* self);
    friend void KColorButton_QBaseNextCheckState(KColorButton* self);
    friend void KColorButton_KeyReleaseEvent(KColorButton* self, QKeyEvent* e);
    friend void KColorButton_QBaseKeyReleaseEvent(KColorButton* self, QKeyEvent* e);
    friend void KColorButton_MouseReleaseEvent(KColorButton* self, QMouseEvent* e);
    friend void KColorButton_QBaseMouseReleaseEvent(KColorButton* self, QMouseEvent* e);
    friend void KColorButton_ChangeEvent(KColorButton* self, QEvent* e);
    friend void KColorButton_QBaseChangeEvent(KColorButton* self, QEvent* e);
    friend void KColorButton_TimerEvent(KColorButton* self, QTimerEvent* e);
    friend void KColorButton_QBaseTimerEvent(KColorButton* self, QTimerEvent* e);
    friend void KColorButton_MouseDoubleClickEvent(KColorButton* self, QMouseEvent* event);
    friend void KColorButton_QBaseMouseDoubleClickEvent(KColorButton* self, QMouseEvent* event);
    friend void KColorButton_WheelEvent(KColorButton* self, QWheelEvent* event);
    friend void KColorButton_QBaseWheelEvent(KColorButton* self, QWheelEvent* event);
    friend void KColorButton_EnterEvent(KColorButton* self, QEnterEvent* event);
    friend void KColorButton_QBaseEnterEvent(KColorButton* self, QEnterEvent* event);
    friend void KColorButton_LeaveEvent(KColorButton* self, QEvent* event);
    friend void KColorButton_QBaseLeaveEvent(KColorButton* self, QEvent* event);
    friend void KColorButton_MoveEvent(KColorButton* self, QMoveEvent* event);
    friend void KColorButton_QBaseMoveEvent(KColorButton* self, QMoveEvent* event);
    friend void KColorButton_ResizeEvent(KColorButton* self, QResizeEvent* event);
    friend void KColorButton_QBaseResizeEvent(KColorButton* self, QResizeEvent* event);
    friend void KColorButton_CloseEvent(KColorButton* self, QCloseEvent* event);
    friend void KColorButton_QBaseCloseEvent(KColorButton* self, QCloseEvent* event);
    friend void KColorButton_ContextMenuEvent(KColorButton* self, QContextMenuEvent* event);
    friend void KColorButton_QBaseContextMenuEvent(KColorButton* self, QContextMenuEvent* event);
    friend void KColorButton_TabletEvent(KColorButton* self, QTabletEvent* event);
    friend void KColorButton_QBaseTabletEvent(KColorButton* self, QTabletEvent* event);
    friend void KColorButton_ActionEvent(KColorButton* self, QActionEvent* event);
    friend void KColorButton_QBaseActionEvent(KColorButton* self, QActionEvent* event);
    friend void KColorButton_DragMoveEvent(KColorButton* self, QDragMoveEvent* event);
    friend void KColorButton_QBaseDragMoveEvent(KColorButton* self, QDragMoveEvent* event);
    friend void KColorButton_DragLeaveEvent(KColorButton* self, QDragLeaveEvent* event);
    friend void KColorButton_QBaseDragLeaveEvent(KColorButton* self, QDragLeaveEvent* event);
    friend void KColorButton_ShowEvent(KColorButton* self, QShowEvent* event);
    friend void KColorButton_QBaseShowEvent(KColorButton* self, QShowEvent* event);
    friend void KColorButton_HideEvent(KColorButton* self, QHideEvent* event);
    friend void KColorButton_QBaseHideEvent(KColorButton* self, QHideEvent* event);
    friend bool KColorButton_NativeEvent(KColorButton* self, const libqt_string eventType, void* message, intptr_t* result);
    friend bool KColorButton_QBaseNativeEvent(KColorButton* self, const libqt_string eventType, void* message, intptr_t* result);
    friend int KColorButton_Metric(const KColorButton* self, int param1);
    friend int KColorButton_QBaseMetric(const KColorButton* self, int param1);
    friend void KColorButton_InitPainter(const KColorButton* self, QPainter* painter);
    friend void KColorButton_QBaseInitPainter(const KColorButton* self, QPainter* painter);
    friend QPaintDevice* KColorButton_Redirected(const KColorButton* self, QPoint* offset);
    friend QPaintDevice* KColorButton_QBaseRedirected(const KColorButton* self, QPoint* offset);
    friend QPainter* KColorButton_SharedPainter(const KColorButton* self);
    friend QPainter* KColorButton_QBaseSharedPainter(const KColorButton* self);
    friend void KColorButton_InputMethodEvent(KColorButton* self, QInputMethodEvent* param1);
    friend void KColorButton_QBaseInputMethodEvent(KColorButton* self, QInputMethodEvent* param1);
    friend bool KColorButton_FocusNextPrevChild(KColorButton* self, bool next);
    friend bool KColorButton_QBaseFocusNextPrevChild(KColorButton* self, bool next);
    friend void KColorButton_ChildEvent(KColorButton* self, QChildEvent* event);
    friend void KColorButton_QBaseChildEvent(KColorButton* self, QChildEvent* event);
    friend void KColorButton_CustomEvent(KColorButton* self, QEvent* event);
    friend void KColorButton_QBaseCustomEvent(KColorButton* self, QEvent* event);
    friend void KColorButton_ConnectNotify(KColorButton* self, const QMetaMethod* signal);
    friend void KColorButton_QBaseConnectNotify(KColorButton* self, const QMetaMethod* signal);
    friend void KColorButton_DisconnectNotify(KColorButton* self, const QMetaMethod* signal);
    friend void KColorButton_QBaseDisconnectNotify(KColorButton* self, const QMetaMethod* signal);
    friend void KColorButton_UpdateMicroFocus(KColorButton* self);
    friend void KColorButton_QBaseUpdateMicroFocus(KColorButton* self);
    friend void KColorButton_Create(KColorButton* self);
    friend void KColorButton_QBaseCreate(KColorButton* self);
    friend void KColorButton_Destroy(KColorButton* self);
    friend void KColorButton_QBaseDestroy(KColorButton* self);
    friend bool KColorButton_FocusNextChild(KColorButton* self);
    friend bool KColorButton_QBaseFocusNextChild(KColorButton* self);
    friend bool KColorButton_FocusPreviousChild(KColorButton* self);
    friend bool KColorButton_QBaseFocusPreviousChild(KColorButton* self);
    friend QObject* KColorButton_Sender(const KColorButton* self);
    friend QObject* KColorButton_QBaseSender(const KColorButton* self);
    friend int KColorButton_SenderSignalIndex(const KColorButton* self);
    friend int KColorButton_QBaseSenderSignalIndex(const KColorButton* self);
    friend int KColorButton_Receivers(const KColorButton* self, const char* signal);
    friend int KColorButton_QBaseReceivers(const KColorButton* self, const char* signal);
    friend bool KColorButton_IsSignalConnected(const KColorButton* self, const QMetaMethod* signal);
    friend bool KColorButton_QBaseIsSignalConnected(const KColorButton* self, const QMetaMethod* signal);
    friend double KColorButton_GetDecodedMetricF(const KColorButton* self, int metricA, int metricB);
    friend double KColorButton_QBaseGetDecodedMetricF(const KColorButton* self, int metricA, int metricB);
};

#endif
