#pragma once
#ifndef SRC_EXTRAS_KWIDGETSADDONSC_LIBVIRTUALKRULER_H
#define SRC_EXTRAS_KWIDGETSADDONSC_LIBVIRTUALKRULER_H

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

// This class is a subclass of KRuler so that we can call protected methods
class VirtualKRuler final : public KRuler {

  public:
    // Virtual class boolean flag
    bool isVirtualKRuler = true;

    // Virtual class public types (including callbacks)
    using QAbstractSlider::SliderChange;
    using KRuler_Metacall_Callback = int (*)(KRuler*, int, int, void**);
    using KRuler_PaintEvent_Callback = void (*)(KRuler*, QPaintEvent*);
    using KRuler_Event_Callback = bool (*)(KRuler*, QEvent*);
    using KRuler_SliderChange_Callback = void (*)(KRuler*, int);
    using KRuler_KeyPressEvent_Callback = void (*)(KRuler*, QKeyEvent*);
    using KRuler_TimerEvent_Callback = void (*)(KRuler*, QTimerEvent*);
    using KRuler_WheelEvent_Callback = void (*)(KRuler*, QWheelEvent*);
    using KRuler_ChangeEvent_Callback = void (*)(KRuler*, QEvent*);
    using KRuler_DevType_Callback = int (*)();
    using KRuler_SetVisible_Callback = void (*)(KRuler*, bool);
    using KRuler_SizeHint_Callback = QSize* (*)();
    using KRuler_MinimumSizeHint_Callback = QSize* (*)();
    using KRuler_HeightForWidth_Callback = int (*)(const KRuler*, int);
    using KRuler_HasHeightForWidth_Callback = bool (*)();
    using KRuler_PaintEngine_Callback = QPaintEngine* (*)();
    using KRuler_MousePressEvent_Callback = void (*)(KRuler*, QMouseEvent*);
    using KRuler_MouseReleaseEvent_Callback = void (*)(KRuler*, QMouseEvent*);
    using KRuler_MouseDoubleClickEvent_Callback = void (*)(KRuler*, QMouseEvent*);
    using KRuler_MouseMoveEvent_Callback = void (*)(KRuler*, QMouseEvent*);
    using KRuler_KeyReleaseEvent_Callback = void (*)(KRuler*, QKeyEvent*);
    using KRuler_FocusInEvent_Callback = void (*)(KRuler*, QFocusEvent*);
    using KRuler_FocusOutEvent_Callback = void (*)(KRuler*, QFocusEvent*);
    using KRuler_EnterEvent_Callback = void (*)(KRuler*, QEnterEvent*);
    using KRuler_LeaveEvent_Callback = void (*)(KRuler*, QEvent*);
    using KRuler_MoveEvent_Callback = void (*)(KRuler*, QMoveEvent*);
    using KRuler_ResizeEvent_Callback = void (*)(KRuler*, QResizeEvent*);
    using KRuler_CloseEvent_Callback = void (*)(KRuler*, QCloseEvent*);
    using KRuler_ContextMenuEvent_Callback = void (*)(KRuler*, QContextMenuEvent*);
    using KRuler_TabletEvent_Callback = void (*)(KRuler*, QTabletEvent*);
    using KRuler_ActionEvent_Callback = void (*)(KRuler*, QActionEvent*);
    using KRuler_DragEnterEvent_Callback = void (*)(KRuler*, QDragEnterEvent*);
    using KRuler_DragMoveEvent_Callback = void (*)(KRuler*, QDragMoveEvent*);
    using KRuler_DragLeaveEvent_Callback = void (*)(KRuler*, QDragLeaveEvent*);
    using KRuler_DropEvent_Callback = void (*)(KRuler*, QDropEvent*);
    using KRuler_ShowEvent_Callback = void (*)(KRuler*, QShowEvent*);
    using KRuler_HideEvent_Callback = void (*)(KRuler*, QHideEvent*);
    using KRuler_NativeEvent_Callback = bool (*)(KRuler*, libqt_string, void*, intptr_t*);
    using KRuler_Metric_Callback = int (*)(const KRuler*, int);
    using KRuler_InitPainter_Callback = void (*)(const KRuler*, QPainter*);
    using KRuler_Redirected_Callback = QPaintDevice* (*)(const KRuler*, QPoint*);
    using KRuler_SharedPainter_Callback = QPainter* (*)();
    using KRuler_InputMethodEvent_Callback = void (*)(KRuler*, QInputMethodEvent*);
    using KRuler_InputMethodQuery_Callback = QVariant* (*)(const KRuler*, int);
    using KRuler_FocusNextPrevChild_Callback = bool (*)(KRuler*, bool);
    using KRuler_EventFilter_Callback = bool (*)(KRuler*, QObject*, QEvent*);
    using KRuler_ChildEvent_Callback = void (*)(KRuler*, QChildEvent*);
    using KRuler_CustomEvent_Callback = void (*)(KRuler*, QEvent*);
    using KRuler_ConnectNotify_Callback = void (*)(KRuler*, QMetaMethod*);
    using KRuler_DisconnectNotify_Callback = void (*)(KRuler*, QMetaMethod*);
    using KRuler_SetRepeatAction_Callback = void (*)(KRuler*, int);
    using KRuler_RepeatAction_Callback = int (*)();
    using KRuler_UpdateMicroFocus_Callback = void (*)();
    using KRuler_Create_Callback = void (*)();
    using KRuler_Destroy_Callback = void (*)();
    using KRuler_FocusNextChild_Callback = bool (*)();
    using KRuler_FocusPreviousChild_Callback = bool (*)();
    using KRuler_Sender_Callback = QObject* (*)();
    using KRuler_SenderSignalIndex_Callback = int (*)();
    using KRuler_Receivers_Callback = int (*)(const KRuler*, const char*);
    using KRuler_IsSignalConnected_Callback = bool (*)(const KRuler*, QMetaMethod*);
    using KRuler_GetDecodedMetricF_Callback = double (*)(const KRuler*, int, int);

  protected:
    // Instance callback storage
    KRuler_Metacall_Callback kruler_metacall_callback = nullptr;
    KRuler_PaintEvent_Callback kruler_paintevent_callback = nullptr;
    KRuler_Event_Callback kruler_event_callback = nullptr;
    KRuler_SliderChange_Callback kruler_sliderchange_callback = nullptr;
    KRuler_KeyPressEvent_Callback kruler_keypressevent_callback = nullptr;
    KRuler_TimerEvent_Callback kruler_timerevent_callback = nullptr;
    KRuler_WheelEvent_Callback kruler_wheelevent_callback = nullptr;
    KRuler_ChangeEvent_Callback kruler_changeevent_callback = nullptr;
    KRuler_DevType_Callback kruler_devtype_callback = nullptr;
    KRuler_SetVisible_Callback kruler_setvisible_callback = nullptr;
    KRuler_SizeHint_Callback kruler_sizehint_callback = nullptr;
    KRuler_MinimumSizeHint_Callback kruler_minimumsizehint_callback = nullptr;
    KRuler_HeightForWidth_Callback kruler_heightforwidth_callback = nullptr;
    KRuler_HasHeightForWidth_Callback kruler_hasheightforwidth_callback = nullptr;
    KRuler_PaintEngine_Callback kruler_paintengine_callback = nullptr;
    KRuler_MousePressEvent_Callback kruler_mousepressevent_callback = nullptr;
    KRuler_MouseReleaseEvent_Callback kruler_mousereleaseevent_callback = nullptr;
    KRuler_MouseDoubleClickEvent_Callback kruler_mousedoubleclickevent_callback = nullptr;
    KRuler_MouseMoveEvent_Callback kruler_mousemoveevent_callback = nullptr;
    KRuler_KeyReleaseEvent_Callback kruler_keyreleaseevent_callback = nullptr;
    KRuler_FocusInEvent_Callback kruler_focusinevent_callback = nullptr;
    KRuler_FocusOutEvent_Callback kruler_focusoutevent_callback = nullptr;
    KRuler_EnterEvent_Callback kruler_enterevent_callback = nullptr;
    KRuler_LeaveEvent_Callback kruler_leaveevent_callback = nullptr;
    KRuler_MoveEvent_Callback kruler_moveevent_callback = nullptr;
    KRuler_ResizeEvent_Callback kruler_resizeevent_callback = nullptr;
    KRuler_CloseEvent_Callback kruler_closeevent_callback = nullptr;
    KRuler_ContextMenuEvent_Callback kruler_contextmenuevent_callback = nullptr;
    KRuler_TabletEvent_Callback kruler_tabletevent_callback = nullptr;
    KRuler_ActionEvent_Callback kruler_actionevent_callback = nullptr;
    KRuler_DragEnterEvent_Callback kruler_dragenterevent_callback = nullptr;
    KRuler_DragMoveEvent_Callback kruler_dragmoveevent_callback = nullptr;
    KRuler_DragLeaveEvent_Callback kruler_dragleaveevent_callback = nullptr;
    KRuler_DropEvent_Callback kruler_dropevent_callback = nullptr;
    KRuler_ShowEvent_Callback kruler_showevent_callback = nullptr;
    KRuler_HideEvent_Callback kruler_hideevent_callback = nullptr;
    KRuler_NativeEvent_Callback kruler_nativeevent_callback = nullptr;
    KRuler_Metric_Callback kruler_metric_callback = nullptr;
    KRuler_InitPainter_Callback kruler_initpainter_callback = nullptr;
    KRuler_Redirected_Callback kruler_redirected_callback = nullptr;
    KRuler_SharedPainter_Callback kruler_sharedpainter_callback = nullptr;
    KRuler_InputMethodEvent_Callback kruler_inputmethodevent_callback = nullptr;
    KRuler_InputMethodQuery_Callback kruler_inputmethodquery_callback = nullptr;
    KRuler_FocusNextPrevChild_Callback kruler_focusnextprevchild_callback = nullptr;
    KRuler_EventFilter_Callback kruler_eventfilter_callback = nullptr;
    KRuler_ChildEvent_Callback kruler_childevent_callback = nullptr;
    KRuler_CustomEvent_Callback kruler_customevent_callback = nullptr;
    KRuler_ConnectNotify_Callback kruler_connectnotify_callback = nullptr;
    KRuler_DisconnectNotify_Callback kruler_disconnectnotify_callback = nullptr;
    KRuler_SetRepeatAction_Callback kruler_setrepeataction_callback = nullptr;
    KRuler_RepeatAction_Callback kruler_repeataction_callback = nullptr;
    KRuler_UpdateMicroFocus_Callback kruler_updatemicrofocus_callback = nullptr;
    KRuler_Create_Callback kruler_create_callback = nullptr;
    KRuler_Destroy_Callback kruler_destroy_callback = nullptr;
    KRuler_FocusNextChild_Callback kruler_focusnextchild_callback = nullptr;
    KRuler_FocusPreviousChild_Callback kruler_focuspreviouschild_callback = nullptr;
    KRuler_Sender_Callback kruler_sender_callback = nullptr;
    KRuler_SenderSignalIndex_Callback kruler_sendersignalindex_callback = nullptr;
    KRuler_Receivers_Callback kruler_receivers_callback = nullptr;
    KRuler_IsSignalConnected_Callback kruler_issignalconnected_callback = nullptr;
    KRuler_GetDecodedMetricF_Callback kruler_getdecodedmetricf_callback = nullptr;

    // Instance base flags
    mutable bool kruler_metacall_isbase = false;
    mutable bool kruler_paintevent_isbase = false;
    mutable bool kruler_event_isbase = false;
    mutable bool kruler_sliderchange_isbase = false;
    mutable bool kruler_keypressevent_isbase = false;
    mutable bool kruler_timerevent_isbase = false;
    mutable bool kruler_wheelevent_isbase = false;
    mutable bool kruler_changeevent_isbase = false;
    mutable bool kruler_devtype_isbase = false;
    mutable bool kruler_setvisible_isbase = false;
    mutable bool kruler_sizehint_isbase = false;
    mutable bool kruler_minimumsizehint_isbase = false;
    mutable bool kruler_heightforwidth_isbase = false;
    mutable bool kruler_hasheightforwidth_isbase = false;
    mutable bool kruler_paintengine_isbase = false;
    mutable bool kruler_mousepressevent_isbase = false;
    mutable bool kruler_mousereleaseevent_isbase = false;
    mutable bool kruler_mousedoubleclickevent_isbase = false;
    mutable bool kruler_mousemoveevent_isbase = false;
    mutable bool kruler_keyreleaseevent_isbase = false;
    mutable bool kruler_focusinevent_isbase = false;
    mutable bool kruler_focusoutevent_isbase = false;
    mutable bool kruler_enterevent_isbase = false;
    mutable bool kruler_leaveevent_isbase = false;
    mutable bool kruler_moveevent_isbase = false;
    mutable bool kruler_resizeevent_isbase = false;
    mutable bool kruler_closeevent_isbase = false;
    mutable bool kruler_contextmenuevent_isbase = false;
    mutable bool kruler_tabletevent_isbase = false;
    mutable bool kruler_actionevent_isbase = false;
    mutable bool kruler_dragenterevent_isbase = false;
    mutable bool kruler_dragmoveevent_isbase = false;
    mutable bool kruler_dragleaveevent_isbase = false;
    mutable bool kruler_dropevent_isbase = false;
    mutable bool kruler_showevent_isbase = false;
    mutable bool kruler_hideevent_isbase = false;
    mutable bool kruler_nativeevent_isbase = false;
    mutable bool kruler_metric_isbase = false;
    mutable bool kruler_initpainter_isbase = false;
    mutable bool kruler_redirected_isbase = false;
    mutable bool kruler_sharedpainter_isbase = false;
    mutable bool kruler_inputmethodevent_isbase = false;
    mutable bool kruler_inputmethodquery_isbase = false;
    mutable bool kruler_focusnextprevchild_isbase = false;
    mutable bool kruler_eventfilter_isbase = false;
    mutable bool kruler_childevent_isbase = false;
    mutable bool kruler_customevent_isbase = false;
    mutable bool kruler_connectnotify_isbase = false;
    mutable bool kruler_disconnectnotify_isbase = false;
    mutable bool kruler_setrepeataction_isbase = false;
    mutable bool kruler_repeataction_isbase = false;
    mutable bool kruler_updatemicrofocus_isbase = false;
    mutable bool kruler_create_isbase = false;
    mutable bool kruler_destroy_isbase = false;
    mutable bool kruler_focusnextchild_isbase = false;
    mutable bool kruler_focuspreviouschild_isbase = false;
    mutable bool kruler_sender_isbase = false;
    mutable bool kruler_sendersignalindex_isbase = false;
    mutable bool kruler_receivers_isbase = false;
    mutable bool kruler_issignalconnected_isbase = false;
    mutable bool kruler_getdecodedmetricf_isbase = false;

  public:
    VirtualKRuler(QWidget* parent) : KRuler(parent) {};
    VirtualKRuler() : KRuler() {};
    VirtualKRuler(Qt::Orientation orient) : KRuler(orient) {};
    VirtualKRuler(Qt::Orientation orient, int widgetWidth) : KRuler(orient, widgetWidth) {};
    VirtualKRuler(Qt::Orientation orient, QWidget* parent) : KRuler(orient, parent) {};
    VirtualKRuler(Qt::Orientation orient, QWidget* parent, Qt::WindowFlags f) : KRuler(orient, parent, f) {};
    VirtualKRuler(Qt::Orientation orient, int widgetWidth, QWidget* parent) : KRuler(orient, widgetWidth, parent) {};
    VirtualKRuler(Qt::Orientation orient, int widgetWidth, QWidget* parent, Qt::WindowFlags f) : KRuler(orient, widgetWidth, parent, f) {};

    ~VirtualKRuler() {
        kruler_metacall_callback = nullptr;
        kruler_paintevent_callback = nullptr;
        kruler_event_callback = nullptr;
        kruler_sliderchange_callback = nullptr;
        kruler_keypressevent_callback = nullptr;
        kruler_timerevent_callback = nullptr;
        kruler_wheelevent_callback = nullptr;
        kruler_changeevent_callback = nullptr;
        kruler_devtype_callback = nullptr;
        kruler_setvisible_callback = nullptr;
        kruler_sizehint_callback = nullptr;
        kruler_minimumsizehint_callback = nullptr;
        kruler_heightforwidth_callback = nullptr;
        kruler_hasheightforwidth_callback = nullptr;
        kruler_paintengine_callback = nullptr;
        kruler_mousepressevent_callback = nullptr;
        kruler_mousereleaseevent_callback = nullptr;
        kruler_mousedoubleclickevent_callback = nullptr;
        kruler_mousemoveevent_callback = nullptr;
        kruler_keyreleaseevent_callback = nullptr;
        kruler_focusinevent_callback = nullptr;
        kruler_focusoutevent_callback = nullptr;
        kruler_enterevent_callback = nullptr;
        kruler_leaveevent_callback = nullptr;
        kruler_moveevent_callback = nullptr;
        kruler_resizeevent_callback = nullptr;
        kruler_closeevent_callback = nullptr;
        kruler_contextmenuevent_callback = nullptr;
        kruler_tabletevent_callback = nullptr;
        kruler_actionevent_callback = nullptr;
        kruler_dragenterevent_callback = nullptr;
        kruler_dragmoveevent_callback = nullptr;
        kruler_dragleaveevent_callback = nullptr;
        kruler_dropevent_callback = nullptr;
        kruler_showevent_callback = nullptr;
        kruler_hideevent_callback = nullptr;
        kruler_nativeevent_callback = nullptr;
        kruler_metric_callback = nullptr;
        kruler_initpainter_callback = nullptr;
        kruler_redirected_callback = nullptr;
        kruler_sharedpainter_callback = nullptr;
        kruler_inputmethodevent_callback = nullptr;
        kruler_inputmethodquery_callback = nullptr;
        kruler_focusnextprevchild_callback = nullptr;
        kruler_eventfilter_callback = nullptr;
        kruler_childevent_callback = nullptr;
        kruler_customevent_callback = nullptr;
        kruler_connectnotify_callback = nullptr;
        kruler_disconnectnotify_callback = nullptr;
        kruler_setrepeataction_callback = nullptr;
        kruler_repeataction_callback = nullptr;
        kruler_updatemicrofocus_callback = nullptr;
        kruler_create_callback = nullptr;
        kruler_destroy_callback = nullptr;
        kruler_focusnextchild_callback = nullptr;
        kruler_focuspreviouschild_callback = nullptr;
        kruler_sender_callback = nullptr;
        kruler_sendersignalindex_callback = nullptr;
        kruler_receivers_callback = nullptr;
        kruler_issignalconnected_callback = nullptr;
        kruler_getdecodedmetricf_callback = nullptr;
    }

    // Callback setters
    inline void setKRuler_Metacall_Callback(KRuler_Metacall_Callback cb) { kruler_metacall_callback = cb; }
    inline void setKRuler_PaintEvent_Callback(KRuler_PaintEvent_Callback cb) { kruler_paintevent_callback = cb; }
    inline void setKRuler_Event_Callback(KRuler_Event_Callback cb) { kruler_event_callback = cb; }
    inline void setKRuler_SliderChange_Callback(KRuler_SliderChange_Callback cb) { kruler_sliderchange_callback = cb; }
    inline void setKRuler_KeyPressEvent_Callback(KRuler_KeyPressEvent_Callback cb) { kruler_keypressevent_callback = cb; }
    inline void setKRuler_TimerEvent_Callback(KRuler_TimerEvent_Callback cb) { kruler_timerevent_callback = cb; }
    inline void setKRuler_WheelEvent_Callback(KRuler_WheelEvent_Callback cb) { kruler_wheelevent_callback = cb; }
    inline void setKRuler_ChangeEvent_Callback(KRuler_ChangeEvent_Callback cb) { kruler_changeevent_callback = cb; }
    inline void setKRuler_DevType_Callback(KRuler_DevType_Callback cb) { kruler_devtype_callback = cb; }
    inline void setKRuler_SetVisible_Callback(KRuler_SetVisible_Callback cb) { kruler_setvisible_callback = cb; }
    inline void setKRuler_SizeHint_Callback(KRuler_SizeHint_Callback cb) { kruler_sizehint_callback = cb; }
    inline void setKRuler_MinimumSizeHint_Callback(KRuler_MinimumSizeHint_Callback cb) { kruler_minimumsizehint_callback = cb; }
    inline void setKRuler_HeightForWidth_Callback(KRuler_HeightForWidth_Callback cb) { kruler_heightforwidth_callback = cb; }
    inline void setKRuler_HasHeightForWidth_Callback(KRuler_HasHeightForWidth_Callback cb) { kruler_hasheightforwidth_callback = cb; }
    inline void setKRuler_PaintEngine_Callback(KRuler_PaintEngine_Callback cb) { kruler_paintengine_callback = cb; }
    inline void setKRuler_MousePressEvent_Callback(KRuler_MousePressEvent_Callback cb) { kruler_mousepressevent_callback = cb; }
    inline void setKRuler_MouseReleaseEvent_Callback(KRuler_MouseReleaseEvent_Callback cb) { kruler_mousereleaseevent_callback = cb; }
    inline void setKRuler_MouseDoubleClickEvent_Callback(KRuler_MouseDoubleClickEvent_Callback cb) { kruler_mousedoubleclickevent_callback = cb; }
    inline void setKRuler_MouseMoveEvent_Callback(KRuler_MouseMoveEvent_Callback cb) { kruler_mousemoveevent_callback = cb; }
    inline void setKRuler_KeyReleaseEvent_Callback(KRuler_KeyReleaseEvent_Callback cb) { kruler_keyreleaseevent_callback = cb; }
    inline void setKRuler_FocusInEvent_Callback(KRuler_FocusInEvent_Callback cb) { kruler_focusinevent_callback = cb; }
    inline void setKRuler_FocusOutEvent_Callback(KRuler_FocusOutEvent_Callback cb) { kruler_focusoutevent_callback = cb; }
    inline void setKRuler_EnterEvent_Callback(KRuler_EnterEvent_Callback cb) { kruler_enterevent_callback = cb; }
    inline void setKRuler_LeaveEvent_Callback(KRuler_LeaveEvent_Callback cb) { kruler_leaveevent_callback = cb; }
    inline void setKRuler_MoveEvent_Callback(KRuler_MoveEvent_Callback cb) { kruler_moveevent_callback = cb; }
    inline void setKRuler_ResizeEvent_Callback(KRuler_ResizeEvent_Callback cb) { kruler_resizeevent_callback = cb; }
    inline void setKRuler_CloseEvent_Callback(KRuler_CloseEvent_Callback cb) { kruler_closeevent_callback = cb; }
    inline void setKRuler_ContextMenuEvent_Callback(KRuler_ContextMenuEvent_Callback cb) { kruler_contextmenuevent_callback = cb; }
    inline void setKRuler_TabletEvent_Callback(KRuler_TabletEvent_Callback cb) { kruler_tabletevent_callback = cb; }
    inline void setKRuler_ActionEvent_Callback(KRuler_ActionEvent_Callback cb) { kruler_actionevent_callback = cb; }
    inline void setKRuler_DragEnterEvent_Callback(KRuler_DragEnterEvent_Callback cb) { kruler_dragenterevent_callback = cb; }
    inline void setKRuler_DragMoveEvent_Callback(KRuler_DragMoveEvent_Callback cb) { kruler_dragmoveevent_callback = cb; }
    inline void setKRuler_DragLeaveEvent_Callback(KRuler_DragLeaveEvent_Callback cb) { kruler_dragleaveevent_callback = cb; }
    inline void setKRuler_DropEvent_Callback(KRuler_DropEvent_Callback cb) { kruler_dropevent_callback = cb; }
    inline void setKRuler_ShowEvent_Callback(KRuler_ShowEvent_Callback cb) { kruler_showevent_callback = cb; }
    inline void setKRuler_HideEvent_Callback(KRuler_HideEvent_Callback cb) { kruler_hideevent_callback = cb; }
    inline void setKRuler_NativeEvent_Callback(KRuler_NativeEvent_Callback cb) { kruler_nativeevent_callback = cb; }
    inline void setKRuler_Metric_Callback(KRuler_Metric_Callback cb) { kruler_metric_callback = cb; }
    inline void setKRuler_InitPainter_Callback(KRuler_InitPainter_Callback cb) { kruler_initpainter_callback = cb; }
    inline void setKRuler_Redirected_Callback(KRuler_Redirected_Callback cb) { kruler_redirected_callback = cb; }
    inline void setKRuler_SharedPainter_Callback(KRuler_SharedPainter_Callback cb) { kruler_sharedpainter_callback = cb; }
    inline void setKRuler_InputMethodEvent_Callback(KRuler_InputMethodEvent_Callback cb) { kruler_inputmethodevent_callback = cb; }
    inline void setKRuler_InputMethodQuery_Callback(KRuler_InputMethodQuery_Callback cb) { kruler_inputmethodquery_callback = cb; }
    inline void setKRuler_FocusNextPrevChild_Callback(KRuler_FocusNextPrevChild_Callback cb) { kruler_focusnextprevchild_callback = cb; }
    inline void setKRuler_EventFilter_Callback(KRuler_EventFilter_Callback cb) { kruler_eventfilter_callback = cb; }
    inline void setKRuler_ChildEvent_Callback(KRuler_ChildEvent_Callback cb) { kruler_childevent_callback = cb; }
    inline void setKRuler_CustomEvent_Callback(KRuler_CustomEvent_Callback cb) { kruler_customevent_callback = cb; }
    inline void setKRuler_ConnectNotify_Callback(KRuler_ConnectNotify_Callback cb) { kruler_connectnotify_callback = cb; }
    inline void setKRuler_DisconnectNotify_Callback(KRuler_DisconnectNotify_Callback cb) { kruler_disconnectnotify_callback = cb; }
    inline void setKRuler_SetRepeatAction_Callback(KRuler_SetRepeatAction_Callback cb) { kruler_setrepeataction_callback = cb; }
    inline void setKRuler_RepeatAction_Callback(KRuler_RepeatAction_Callback cb) { kruler_repeataction_callback = cb; }
    inline void setKRuler_UpdateMicroFocus_Callback(KRuler_UpdateMicroFocus_Callback cb) { kruler_updatemicrofocus_callback = cb; }
    inline void setKRuler_Create_Callback(KRuler_Create_Callback cb) { kruler_create_callback = cb; }
    inline void setKRuler_Destroy_Callback(KRuler_Destroy_Callback cb) { kruler_destroy_callback = cb; }
    inline void setKRuler_FocusNextChild_Callback(KRuler_FocusNextChild_Callback cb) { kruler_focusnextchild_callback = cb; }
    inline void setKRuler_FocusPreviousChild_Callback(KRuler_FocusPreviousChild_Callback cb) { kruler_focuspreviouschild_callback = cb; }
    inline void setKRuler_Sender_Callback(KRuler_Sender_Callback cb) { kruler_sender_callback = cb; }
    inline void setKRuler_SenderSignalIndex_Callback(KRuler_SenderSignalIndex_Callback cb) { kruler_sendersignalindex_callback = cb; }
    inline void setKRuler_Receivers_Callback(KRuler_Receivers_Callback cb) { kruler_receivers_callback = cb; }
    inline void setKRuler_IsSignalConnected_Callback(KRuler_IsSignalConnected_Callback cb) { kruler_issignalconnected_callback = cb; }
    inline void setKRuler_GetDecodedMetricF_Callback(KRuler_GetDecodedMetricF_Callback cb) { kruler_getdecodedmetricf_callback = cb; }

    // Base flag setters
    inline void setKRuler_Metacall_IsBase(bool value) const { kruler_metacall_isbase = value; }
    inline void setKRuler_PaintEvent_IsBase(bool value) const { kruler_paintevent_isbase = value; }
    inline void setKRuler_Event_IsBase(bool value) const { kruler_event_isbase = value; }
    inline void setKRuler_SliderChange_IsBase(bool value) const { kruler_sliderchange_isbase = value; }
    inline void setKRuler_KeyPressEvent_IsBase(bool value) const { kruler_keypressevent_isbase = value; }
    inline void setKRuler_TimerEvent_IsBase(bool value) const { kruler_timerevent_isbase = value; }
    inline void setKRuler_WheelEvent_IsBase(bool value) const { kruler_wheelevent_isbase = value; }
    inline void setKRuler_ChangeEvent_IsBase(bool value) const { kruler_changeevent_isbase = value; }
    inline void setKRuler_DevType_IsBase(bool value) const { kruler_devtype_isbase = value; }
    inline void setKRuler_SetVisible_IsBase(bool value) const { kruler_setvisible_isbase = value; }
    inline void setKRuler_SizeHint_IsBase(bool value) const { kruler_sizehint_isbase = value; }
    inline void setKRuler_MinimumSizeHint_IsBase(bool value) const { kruler_minimumsizehint_isbase = value; }
    inline void setKRuler_HeightForWidth_IsBase(bool value) const { kruler_heightforwidth_isbase = value; }
    inline void setKRuler_HasHeightForWidth_IsBase(bool value) const { kruler_hasheightforwidth_isbase = value; }
    inline void setKRuler_PaintEngine_IsBase(bool value) const { kruler_paintengine_isbase = value; }
    inline void setKRuler_MousePressEvent_IsBase(bool value) const { kruler_mousepressevent_isbase = value; }
    inline void setKRuler_MouseReleaseEvent_IsBase(bool value) const { kruler_mousereleaseevent_isbase = value; }
    inline void setKRuler_MouseDoubleClickEvent_IsBase(bool value) const { kruler_mousedoubleclickevent_isbase = value; }
    inline void setKRuler_MouseMoveEvent_IsBase(bool value) const { kruler_mousemoveevent_isbase = value; }
    inline void setKRuler_KeyReleaseEvent_IsBase(bool value) const { kruler_keyreleaseevent_isbase = value; }
    inline void setKRuler_FocusInEvent_IsBase(bool value) const { kruler_focusinevent_isbase = value; }
    inline void setKRuler_FocusOutEvent_IsBase(bool value) const { kruler_focusoutevent_isbase = value; }
    inline void setKRuler_EnterEvent_IsBase(bool value) const { kruler_enterevent_isbase = value; }
    inline void setKRuler_LeaveEvent_IsBase(bool value) const { kruler_leaveevent_isbase = value; }
    inline void setKRuler_MoveEvent_IsBase(bool value) const { kruler_moveevent_isbase = value; }
    inline void setKRuler_ResizeEvent_IsBase(bool value) const { kruler_resizeevent_isbase = value; }
    inline void setKRuler_CloseEvent_IsBase(bool value) const { kruler_closeevent_isbase = value; }
    inline void setKRuler_ContextMenuEvent_IsBase(bool value) const { kruler_contextmenuevent_isbase = value; }
    inline void setKRuler_TabletEvent_IsBase(bool value) const { kruler_tabletevent_isbase = value; }
    inline void setKRuler_ActionEvent_IsBase(bool value) const { kruler_actionevent_isbase = value; }
    inline void setKRuler_DragEnterEvent_IsBase(bool value) const { kruler_dragenterevent_isbase = value; }
    inline void setKRuler_DragMoveEvent_IsBase(bool value) const { kruler_dragmoveevent_isbase = value; }
    inline void setKRuler_DragLeaveEvent_IsBase(bool value) const { kruler_dragleaveevent_isbase = value; }
    inline void setKRuler_DropEvent_IsBase(bool value) const { kruler_dropevent_isbase = value; }
    inline void setKRuler_ShowEvent_IsBase(bool value) const { kruler_showevent_isbase = value; }
    inline void setKRuler_HideEvent_IsBase(bool value) const { kruler_hideevent_isbase = value; }
    inline void setKRuler_NativeEvent_IsBase(bool value) const { kruler_nativeevent_isbase = value; }
    inline void setKRuler_Metric_IsBase(bool value) const { kruler_metric_isbase = value; }
    inline void setKRuler_InitPainter_IsBase(bool value) const { kruler_initpainter_isbase = value; }
    inline void setKRuler_Redirected_IsBase(bool value) const { kruler_redirected_isbase = value; }
    inline void setKRuler_SharedPainter_IsBase(bool value) const { kruler_sharedpainter_isbase = value; }
    inline void setKRuler_InputMethodEvent_IsBase(bool value) const { kruler_inputmethodevent_isbase = value; }
    inline void setKRuler_InputMethodQuery_IsBase(bool value) const { kruler_inputmethodquery_isbase = value; }
    inline void setKRuler_FocusNextPrevChild_IsBase(bool value) const { kruler_focusnextprevchild_isbase = value; }
    inline void setKRuler_EventFilter_IsBase(bool value) const { kruler_eventfilter_isbase = value; }
    inline void setKRuler_ChildEvent_IsBase(bool value) const { kruler_childevent_isbase = value; }
    inline void setKRuler_CustomEvent_IsBase(bool value) const { kruler_customevent_isbase = value; }
    inline void setKRuler_ConnectNotify_IsBase(bool value) const { kruler_connectnotify_isbase = value; }
    inline void setKRuler_DisconnectNotify_IsBase(bool value) const { kruler_disconnectnotify_isbase = value; }
    inline void setKRuler_SetRepeatAction_IsBase(bool value) const { kruler_setrepeataction_isbase = value; }
    inline void setKRuler_RepeatAction_IsBase(bool value) const { kruler_repeataction_isbase = value; }
    inline void setKRuler_UpdateMicroFocus_IsBase(bool value) const { kruler_updatemicrofocus_isbase = value; }
    inline void setKRuler_Create_IsBase(bool value) const { kruler_create_isbase = value; }
    inline void setKRuler_Destroy_IsBase(bool value) const { kruler_destroy_isbase = value; }
    inline void setKRuler_FocusNextChild_IsBase(bool value) const { kruler_focusnextchild_isbase = value; }
    inline void setKRuler_FocusPreviousChild_IsBase(bool value) const { kruler_focuspreviouschild_isbase = value; }
    inline void setKRuler_Sender_IsBase(bool value) const { kruler_sender_isbase = value; }
    inline void setKRuler_SenderSignalIndex_IsBase(bool value) const { kruler_sendersignalindex_isbase = value; }
    inline void setKRuler_Receivers_IsBase(bool value) const { kruler_receivers_isbase = value; }
    inline void setKRuler_IsSignalConnected_IsBase(bool value) const { kruler_issignalconnected_isbase = value; }
    inline void setKRuler_GetDecodedMetricF_IsBase(bool value) const { kruler_getdecodedmetricf_isbase = value; }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (kruler_metacall_isbase) {
            kruler_metacall_isbase = false;
            return KRuler::qt_metacall(param1, param2, param3);
        } else if (kruler_metacall_callback != nullptr) {
            int cbval1 = static_cast<int>(param1);
            int cbval2 = param2;
            void** cbval3 = param3;

            int callback_ret = kruler_metacall_callback(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        } else {
            return KRuler::qt_metacall(param1, param2, param3);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void paintEvent(QPaintEvent* param1) override {
        if (kruler_paintevent_isbase) {
            kruler_paintevent_isbase = false;
            KRuler::paintEvent(param1);
        } else if (kruler_paintevent_callback != nullptr) {
            QPaintEvent* cbval1 = param1;

            kruler_paintevent_callback(this, cbval1);
        } else {
            KRuler::paintEvent(param1);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* e) override {
        if (kruler_event_isbase) {
            kruler_event_isbase = false;
            return KRuler::event(e);
        } else if (kruler_event_callback != nullptr) {
            QEvent* cbval1 = e;

            bool callback_ret = kruler_event_callback(this, cbval1);
            return callback_ret;
        } else {
            return KRuler::event(e);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void sliderChange(QAbstractSlider::SliderChange change) override {
        if (kruler_sliderchange_isbase) {
            kruler_sliderchange_isbase = false;
            KRuler::sliderChange(change);
        } else if (kruler_sliderchange_callback != nullptr) {
            int cbval1 = static_cast<int>(change);

            kruler_sliderchange_callback(this, cbval1);
        } else {
            KRuler::sliderChange(change);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void keyPressEvent(QKeyEvent* ev) override {
        if (kruler_keypressevent_isbase) {
            kruler_keypressevent_isbase = false;
            KRuler::keyPressEvent(ev);
        } else if (kruler_keypressevent_callback != nullptr) {
            QKeyEvent* cbval1 = ev;

            kruler_keypressevent_callback(this, cbval1);
        } else {
            KRuler::keyPressEvent(ev);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* param1) override {
        if (kruler_timerevent_isbase) {
            kruler_timerevent_isbase = false;
            KRuler::timerEvent(param1);
        } else if (kruler_timerevent_callback != nullptr) {
            QTimerEvent* cbval1 = param1;

            kruler_timerevent_callback(this, cbval1);
        } else {
            KRuler::timerEvent(param1);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void wheelEvent(QWheelEvent* e) override {
        if (kruler_wheelevent_isbase) {
            kruler_wheelevent_isbase = false;
            KRuler::wheelEvent(e);
        } else if (kruler_wheelevent_callback != nullptr) {
            QWheelEvent* cbval1 = e;

            kruler_wheelevent_callback(this, cbval1);
        } else {
            KRuler::wheelEvent(e);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void changeEvent(QEvent* e) override {
        if (kruler_changeevent_isbase) {
            kruler_changeevent_isbase = false;
            KRuler::changeEvent(e);
        } else if (kruler_changeevent_callback != nullptr) {
            QEvent* cbval1 = e;

            kruler_changeevent_callback(this, cbval1);
        } else {
            KRuler::changeEvent(e);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual int devType() const override {
        if (kruler_devtype_isbase) {
            kruler_devtype_isbase = false;
            return KRuler::devType();
        } else if (kruler_devtype_callback != nullptr) {
            int callback_ret = kruler_devtype_callback();
            return static_cast<int>(callback_ret);
        } else {
            return KRuler::devType();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void setVisible(bool visible) override {
        if (kruler_setvisible_isbase) {
            kruler_setvisible_isbase = false;
            KRuler::setVisible(visible);
        } else if (kruler_setvisible_callback != nullptr) {
            bool cbval1 = visible;

            kruler_setvisible_callback(this, cbval1);
        } else {
            KRuler::setVisible(visible);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QSize sizeHint() const override {
        if (kruler_sizehint_isbase) {
            kruler_sizehint_isbase = false;
            return KRuler::sizeHint();
        } else if (kruler_sizehint_callback != nullptr) {
            QSize* callback_ret = kruler_sizehint_callback();
            return *callback_ret;
        } else {
            return KRuler::sizeHint();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QSize minimumSizeHint() const override {
        if (kruler_minimumsizehint_isbase) {
            kruler_minimumsizehint_isbase = false;
            return KRuler::minimumSizeHint();
        } else if (kruler_minimumsizehint_callback != nullptr) {
            QSize* callback_ret = kruler_minimumsizehint_callback();
            return *callback_ret;
        } else {
            return KRuler::minimumSizeHint();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual int heightForWidth(int param1) const override {
        if (kruler_heightforwidth_isbase) {
            kruler_heightforwidth_isbase = false;
            return KRuler::heightForWidth(param1);
        } else if (kruler_heightforwidth_callback != nullptr) {
            int cbval1 = param1;

            int callback_ret = kruler_heightforwidth_callback(this, cbval1);
            return static_cast<int>(callback_ret);
        } else {
            return KRuler::heightForWidth(param1);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool hasHeightForWidth() const override {
        if (kruler_hasheightforwidth_isbase) {
            kruler_hasheightforwidth_isbase = false;
            return KRuler::hasHeightForWidth();
        } else if (kruler_hasheightforwidth_callback != nullptr) {
            bool callback_ret = kruler_hasheightforwidth_callback();
            return callback_ret;
        } else {
            return KRuler::hasHeightForWidth();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QPaintEngine* paintEngine() const override {
        if (kruler_paintengine_isbase) {
            kruler_paintengine_isbase = false;
            return KRuler::paintEngine();
        } else if (kruler_paintengine_callback != nullptr) {
            QPaintEngine* callback_ret = kruler_paintengine_callback();
            return callback_ret;
        } else {
            return KRuler::paintEngine();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void mousePressEvent(QMouseEvent* event) override {
        if (kruler_mousepressevent_isbase) {
            kruler_mousepressevent_isbase = false;
            KRuler::mousePressEvent(event);
        } else if (kruler_mousepressevent_callback != nullptr) {
            QMouseEvent* cbval1 = event;

            kruler_mousepressevent_callback(this, cbval1);
        } else {
            KRuler::mousePressEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseReleaseEvent(QMouseEvent* event) override {
        if (kruler_mousereleaseevent_isbase) {
            kruler_mousereleaseevent_isbase = false;
            KRuler::mouseReleaseEvent(event);
        } else if (kruler_mousereleaseevent_callback != nullptr) {
            QMouseEvent* cbval1 = event;

            kruler_mousereleaseevent_callback(this, cbval1);
        } else {
            KRuler::mouseReleaseEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseDoubleClickEvent(QMouseEvent* event) override {
        if (kruler_mousedoubleclickevent_isbase) {
            kruler_mousedoubleclickevent_isbase = false;
            KRuler::mouseDoubleClickEvent(event);
        } else if (kruler_mousedoubleclickevent_callback != nullptr) {
            QMouseEvent* cbval1 = event;

            kruler_mousedoubleclickevent_callback(this, cbval1);
        } else {
            KRuler::mouseDoubleClickEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseMoveEvent(QMouseEvent* event) override {
        if (kruler_mousemoveevent_isbase) {
            kruler_mousemoveevent_isbase = false;
            KRuler::mouseMoveEvent(event);
        } else if (kruler_mousemoveevent_callback != nullptr) {
            QMouseEvent* cbval1 = event;

            kruler_mousemoveevent_callback(this, cbval1);
        } else {
            KRuler::mouseMoveEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void keyReleaseEvent(QKeyEvent* event) override {
        if (kruler_keyreleaseevent_isbase) {
            kruler_keyreleaseevent_isbase = false;
            KRuler::keyReleaseEvent(event);
        } else if (kruler_keyreleaseevent_callback != nullptr) {
            QKeyEvent* cbval1 = event;

            kruler_keyreleaseevent_callback(this, cbval1);
        } else {
            KRuler::keyReleaseEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void focusInEvent(QFocusEvent* event) override {
        if (kruler_focusinevent_isbase) {
            kruler_focusinevent_isbase = false;
            KRuler::focusInEvent(event);
        } else if (kruler_focusinevent_callback != nullptr) {
            QFocusEvent* cbval1 = event;

            kruler_focusinevent_callback(this, cbval1);
        } else {
            KRuler::focusInEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void focusOutEvent(QFocusEvent* event) override {
        if (kruler_focusoutevent_isbase) {
            kruler_focusoutevent_isbase = false;
            KRuler::focusOutEvent(event);
        } else if (kruler_focusoutevent_callback != nullptr) {
            QFocusEvent* cbval1 = event;

            kruler_focusoutevent_callback(this, cbval1);
        } else {
            KRuler::focusOutEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void enterEvent(QEnterEvent* event) override {
        if (kruler_enterevent_isbase) {
            kruler_enterevent_isbase = false;
            KRuler::enterEvent(event);
        } else if (kruler_enterevent_callback != nullptr) {
            QEnterEvent* cbval1 = event;

            kruler_enterevent_callback(this, cbval1);
        } else {
            KRuler::enterEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void leaveEvent(QEvent* event) override {
        if (kruler_leaveevent_isbase) {
            kruler_leaveevent_isbase = false;
            KRuler::leaveEvent(event);
        } else if (kruler_leaveevent_callback != nullptr) {
            QEvent* cbval1 = event;

            kruler_leaveevent_callback(this, cbval1);
        } else {
            KRuler::leaveEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void moveEvent(QMoveEvent* event) override {
        if (kruler_moveevent_isbase) {
            kruler_moveevent_isbase = false;
            KRuler::moveEvent(event);
        } else if (kruler_moveevent_callback != nullptr) {
            QMoveEvent* cbval1 = event;

            kruler_moveevent_callback(this, cbval1);
        } else {
            KRuler::moveEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void resizeEvent(QResizeEvent* event) override {
        if (kruler_resizeevent_isbase) {
            kruler_resizeevent_isbase = false;
            KRuler::resizeEvent(event);
        } else if (kruler_resizeevent_callback != nullptr) {
            QResizeEvent* cbval1 = event;

            kruler_resizeevent_callback(this, cbval1);
        } else {
            KRuler::resizeEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void closeEvent(QCloseEvent* event) override {
        if (kruler_closeevent_isbase) {
            kruler_closeevent_isbase = false;
            KRuler::closeEvent(event);
        } else if (kruler_closeevent_callback != nullptr) {
            QCloseEvent* cbval1 = event;

            kruler_closeevent_callback(this, cbval1);
        } else {
            KRuler::closeEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void contextMenuEvent(QContextMenuEvent* event) override {
        if (kruler_contextmenuevent_isbase) {
            kruler_contextmenuevent_isbase = false;
            KRuler::contextMenuEvent(event);
        } else if (kruler_contextmenuevent_callback != nullptr) {
            QContextMenuEvent* cbval1 = event;

            kruler_contextmenuevent_callback(this, cbval1);
        } else {
            KRuler::contextMenuEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void tabletEvent(QTabletEvent* event) override {
        if (kruler_tabletevent_isbase) {
            kruler_tabletevent_isbase = false;
            KRuler::tabletEvent(event);
        } else if (kruler_tabletevent_callback != nullptr) {
            QTabletEvent* cbval1 = event;

            kruler_tabletevent_callback(this, cbval1);
        } else {
            KRuler::tabletEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void actionEvent(QActionEvent* event) override {
        if (kruler_actionevent_isbase) {
            kruler_actionevent_isbase = false;
            KRuler::actionEvent(event);
        } else if (kruler_actionevent_callback != nullptr) {
            QActionEvent* cbval1 = event;

            kruler_actionevent_callback(this, cbval1);
        } else {
            KRuler::actionEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragEnterEvent(QDragEnterEvent* event) override {
        if (kruler_dragenterevent_isbase) {
            kruler_dragenterevent_isbase = false;
            KRuler::dragEnterEvent(event);
        } else if (kruler_dragenterevent_callback != nullptr) {
            QDragEnterEvent* cbval1 = event;

            kruler_dragenterevent_callback(this, cbval1);
        } else {
            KRuler::dragEnterEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragMoveEvent(QDragMoveEvent* event) override {
        if (kruler_dragmoveevent_isbase) {
            kruler_dragmoveevent_isbase = false;
            KRuler::dragMoveEvent(event);
        } else if (kruler_dragmoveevent_callback != nullptr) {
            QDragMoveEvent* cbval1 = event;

            kruler_dragmoveevent_callback(this, cbval1);
        } else {
            KRuler::dragMoveEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragLeaveEvent(QDragLeaveEvent* event) override {
        if (kruler_dragleaveevent_isbase) {
            kruler_dragleaveevent_isbase = false;
            KRuler::dragLeaveEvent(event);
        } else if (kruler_dragleaveevent_callback != nullptr) {
            QDragLeaveEvent* cbval1 = event;

            kruler_dragleaveevent_callback(this, cbval1);
        } else {
            KRuler::dragLeaveEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void dropEvent(QDropEvent* event) override {
        if (kruler_dropevent_isbase) {
            kruler_dropevent_isbase = false;
            KRuler::dropEvent(event);
        } else if (kruler_dropevent_callback != nullptr) {
            QDropEvent* cbval1 = event;

            kruler_dropevent_callback(this, cbval1);
        } else {
            KRuler::dropEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void showEvent(QShowEvent* event) override {
        if (kruler_showevent_isbase) {
            kruler_showevent_isbase = false;
            KRuler::showEvent(event);
        } else if (kruler_showevent_callback != nullptr) {
            QShowEvent* cbval1 = event;

            kruler_showevent_callback(this, cbval1);
        } else {
            KRuler::showEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void hideEvent(QHideEvent* event) override {
        if (kruler_hideevent_isbase) {
            kruler_hideevent_isbase = false;
            KRuler::hideEvent(event);
        } else if (kruler_hideevent_callback != nullptr) {
            QHideEvent* cbval1 = event;

            kruler_hideevent_callback(this, cbval1);
        } else {
            KRuler::hideEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool nativeEvent(const QByteArray& eventType, void* message, qintptr* result) override {
        if (kruler_nativeevent_isbase) {
            kruler_nativeevent_isbase = false;
            return KRuler::nativeEvent(eventType, message, result);
        } else if (kruler_nativeevent_callback != nullptr) {
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

            bool callback_ret = kruler_nativeevent_callback(this, cbval1, cbval2, cbval3);
            return callback_ret;
        } else {
            return KRuler::nativeEvent(eventType, message, result);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual int metric(QPaintDevice::PaintDeviceMetric param1) const override {
        if (kruler_metric_isbase) {
            kruler_metric_isbase = false;
            return KRuler::metric(param1);
        } else if (kruler_metric_callback != nullptr) {
            int cbval1 = static_cast<int>(param1);

            int callback_ret = kruler_metric_callback(this, cbval1);
            return static_cast<int>(callback_ret);
        } else {
            return KRuler::metric(param1);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void initPainter(QPainter* painter) const override {
        if (kruler_initpainter_isbase) {
            kruler_initpainter_isbase = false;
            KRuler::initPainter(painter);
        } else if (kruler_initpainter_callback != nullptr) {
            QPainter* cbval1 = painter;

            kruler_initpainter_callback(this, cbval1);
        } else {
            KRuler::initPainter(painter);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QPaintDevice* redirected(QPoint* offset) const override {
        if (kruler_redirected_isbase) {
            kruler_redirected_isbase = false;
            return KRuler::redirected(offset);
        } else if (kruler_redirected_callback != nullptr) {
            QPoint* cbval1 = offset;

            QPaintDevice* callback_ret = kruler_redirected_callback(this, cbval1);
            return callback_ret;
        } else {
            return KRuler::redirected(offset);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QPainter* sharedPainter() const override {
        if (kruler_sharedpainter_isbase) {
            kruler_sharedpainter_isbase = false;
            return KRuler::sharedPainter();
        } else if (kruler_sharedpainter_callback != nullptr) {
            QPainter* callback_ret = kruler_sharedpainter_callback();
            return callback_ret;
        } else {
            return KRuler::sharedPainter();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void inputMethodEvent(QInputMethodEvent* param1) override {
        if (kruler_inputmethodevent_isbase) {
            kruler_inputmethodevent_isbase = false;
            KRuler::inputMethodEvent(param1);
        } else if (kruler_inputmethodevent_callback != nullptr) {
            QInputMethodEvent* cbval1 = param1;

            kruler_inputmethodevent_callback(this, cbval1);
        } else {
            KRuler::inputMethodEvent(param1);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QVariant inputMethodQuery(Qt::InputMethodQuery param1) const override {
        if (kruler_inputmethodquery_isbase) {
            kruler_inputmethodquery_isbase = false;
            return KRuler::inputMethodQuery(param1);
        } else if (kruler_inputmethodquery_callback != nullptr) {
            int cbval1 = static_cast<int>(param1);

            QVariant* callback_ret = kruler_inputmethodquery_callback(this, cbval1);
            return *callback_ret;
        } else {
            return KRuler::inputMethodQuery(param1);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool focusNextPrevChild(bool next) override {
        if (kruler_focusnextprevchild_isbase) {
            kruler_focusnextprevchild_isbase = false;
            return KRuler::focusNextPrevChild(next);
        } else if (kruler_focusnextprevchild_callback != nullptr) {
            bool cbval1 = next;

            bool callback_ret = kruler_focusnextprevchild_callback(this, cbval1);
            return callback_ret;
        } else {
            return KRuler::focusNextPrevChild(next);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* watched, QEvent* event) override {
        if (kruler_eventfilter_isbase) {
            kruler_eventfilter_isbase = false;
            return KRuler::eventFilter(watched, event);
        } else if (kruler_eventfilter_callback != nullptr) {
            QObject* cbval1 = watched;
            QEvent* cbval2 = event;

            bool callback_ret = kruler_eventfilter_callback(this, cbval1, cbval2);
            return callback_ret;
        } else {
            return KRuler::eventFilter(watched, event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (kruler_childevent_isbase) {
            kruler_childevent_isbase = false;
            KRuler::childEvent(event);
        } else if (kruler_childevent_callback != nullptr) {
            QChildEvent* cbval1 = event;

            kruler_childevent_callback(this, cbval1);
        } else {
            KRuler::childEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (kruler_customevent_isbase) {
            kruler_customevent_isbase = false;
            KRuler::customEvent(event);
        } else if (kruler_customevent_callback != nullptr) {
            QEvent* cbval1 = event;

            kruler_customevent_callback(this, cbval1);
        } else {
            KRuler::customEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (kruler_connectnotify_isbase) {
            kruler_connectnotify_isbase = false;
            KRuler::connectNotify(signal);
        } else if (kruler_connectnotify_callback != nullptr) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            kruler_connectnotify_callback(this, cbval1);
        } else {
            KRuler::connectNotify(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (kruler_disconnectnotify_isbase) {
            kruler_disconnectnotify_isbase = false;
            KRuler::disconnectNotify(signal);
        } else if (kruler_disconnectnotify_callback != nullptr) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            kruler_disconnectnotify_callback(this, cbval1);
        } else {
            KRuler::disconnectNotify(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    void setRepeatAction(QAbstractSlider::SliderAction action) {
        if (kruler_setrepeataction_isbase) {
            kruler_setrepeataction_isbase = false;
            KRuler::setRepeatAction(action);
        } else if (kruler_setrepeataction_callback != nullptr) {
            int cbval1 = static_cast<int>(action);

            kruler_setrepeataction_callback(this, cbval1);
        } else {
            KRuler::setRepeatAction(action);
        }
    }

    // Virtual method for C ABI access and custom callback
    QAbstractSlider::SliderAction repeatAction() const {
        if (kruler_repeataction_isbase) {
            kruler_repeataction_isbase = false;
            return KRuler::repeatAction();
        } else if (kruler_repeataction_callback != nullptr) {
            int callback_ret = kruler_repeataction_callback();
            return static_cast<QAbstractSlider::SliderAction>(callback_ret);
        } else {
            return KRuler::repeatAction();
        }
    }

    // Virtual method for C ABI access and custom callback
    void updateMicroFocus() {
        if (kruler_updatemicrofocus_isbase) {
            kruler_updatemicrofocus_isbase = false;
            KRuler::updateMicroFocus();
        } else if (kruler_updatemicrofocus_callback != nullptr) {
            kruler_updatemicrofocus_callback();
        } else {
            KRuler::updateMicroFocus();
        }
    }

    // Virtual method for C ABI access and custom callback
    void create() {
        if (kruler_create_isbase) {
            kruler_create_isbase = false;
            KRuler::create();
        } else if (kruler_create_callback != nullptr) {
            kruler_create_callback();
        } else {
            KRuler::create();
        }
    }

    // Virtual method for C ABI access and custom callback
    void destroy() {
        if (kruler_destroy_isbase) {
            kruler_destroy_isbase = false;
            KRuler::destroy();
        } else if (kruler_destroy_callback != nullptr) {
            kruler_destroy_callback();
        } else {
            KRuler::destroy();
        }
    }

    // Virtual method for C ABI access and custom callback
    bool focusNextChild() {
        if (kruler_focusnextchild_isbase) {
            kruler_focusnextchild_isbase = false;
            return KRuler::focusNextChild();
        } else if (kruler_focusnextchild_callback != nullptr) {
            bool callback_ret = kruler_focusnextchild_callback();
            return callback_ret;
        } else {
            return KRuler::focusNextChild();
        }
    }

    // Virtual method for C ABI access and custom callback
    bool focusPreviousChild() {
        if (kruler_focuspreviouschild_isbase) {
            kruler_focuspreviouschild_isbase = false;
            return KRuler::focusPreviousChild();
        } else if (kruler_focuspreviouschild_callback != nullptr) {
            bool callback_ret = kruler_focuspreviouschild_callback();
            return callback_ret;
        } else {
            return KRuler::focusPreviousChild();
        }
    }

    // Virtual method for C ABI access and custom callback
    QObject* sender() const {
        if (kruler_sender_isbase) {
            kruler_sender_isbase = false;
            return KRuler::sender();
        } else if (kruler_sender_callback != nullptr) {
            QObject* callback_ret = kruler_sender_callback();
            return callback_ret;
        } else {
            return KRuler::sender();
        }
    }

    // Virtual method for C ABI access and custom callback
    int senderSignalIndex() const {
        if (kruler_sendersignalindex_isbase) {
            kruler_sendersignalindex_isbase = false;
            return KRuler::senderSignalIndex();
        } else if (kruler_sendersignalindex_callback != nullptr) {
            int callback_ret = kruler_sendersignalindex_callback();
            return static_cast<int>(callback_ret);
        } else {
            return KRuler::senderSignalIndex();
        }
    }

    // Virtual method for C ABI access and custom callback
    int receivers(const char* signal) const {
        if (kruler_receivers_isbase) {
            kruler_receivers_isbase = false;
            return KRuler::receivers(signal);
        } else if (kruler_receivers_callback != nullptr) {
            const char* cbval1 = (const char*)signal;

            int callback_ret = kruler_receivers_callback(this, cbval1);
            return static_cast<int>(callback_ret);
        } else {
            return KRuler::receivers(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    bool isSignalConnected(const QMetaMethod& signal) const {
        if (kruler_issignalconnected_isbase) {
            kruler_issignalconnected_isbase = false;
            return KRuler::isSignalConnected(signal);
        } else if (kruler_issignalconnected_callback != nullptr) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            bool callback_ret = kruler_issignalconnected_callback(this, cbval1);
            return callback_ret;
        } else {
            return KRuler::isSignalConnected(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    double getDecodedMetricF(QPaintDevice::PaintDeviceMetric metricA, QPaintDevice::PaintDeviceMetric metricB) const {
        if (kruler_getdecodedmetricf_isbase) {
            kruler_getdecodedmetricf_isbase = false;
            return KRuler::getDecodedMetricF(metricA, metricB);
        } else if (kruler_getdecodedmetricf_callback != nullptr) {
            int cbval1 = static_cast<int>(metricA);
            int cbval2 = static_cast<int>(metricB);

            double callback_ret = kruler_getdecodedmetricf_callback(this, cbval1, cbval2);
            return static_cast<double>(callback_ret);
        } else {
            return KRuler::getDecodedMetricF(metricA, metricB);
        }
    }

    // Friend functions
    friend void KRuler_PaintEvent(KRuler* self, QPaintEvent* param1);
    friend void KRuler_QBasePaintEvent(KRuler* self, QPaintEvent* param1);
    friend bool KRuler_Event(KRuler* self, QEvent* e);
    friend bool KRuler_QBaseEvent(KRuler* self, QEvent* e);
    friend void KRuler_SliderChange(KRuler* self, int change);
    friend void KRuler_QBaseSliderChange(KRuler* self, int change);
    friend void KRuler_KeyPressEvent(KRuler* self, QKeyEvent* ev);
    friend void KRuler_QBaseKeyPressEvent(KRuler* self, QKeyEvent* ev);
    friend void KRuler_TimerEvent(KRuler* self, QTimerEvent* param1);
    friend void KRuler_QBaseTimerEvent(KRuler* self, QTimerEvent* param1);
    friend void KRuler_WheelEvent(KRuler* self, QWheelEvent* e);
    friend void KRuler_QBaseWheelEvent(KRuler* self, QWheelEvent* e);
    friend void KRuler_ChangeEvent(KRuler* self, QEvent* e);
    friend void KRuler_QBaseChangeEvent(KRuler* self, QEvent* e);
    friend void KRuler_MousePressEvent(KRuler* self, QMouseEvent* event);
    friend void KRuler_QBaseMousePressEvent(KRuler* self, QMouseEvent* event);
    friend void KRuler_MouseReleaseEvent(KRuler* self, QMouseEvent* event);
    friend void KRuler_QBaseMouseReleaseEvent(KRuler* self, QMouseEvent* event);
    friend void KRuler_MouseDoubleClickEvent(KRuler* self, QMouseEvent* event);
    friend void KRuler_QBaseMouseDoubleClickEvent(KRuler* self, QMouseEvent* event);
    friend void KRuler_MouseMoveEvent(KRuler* self, QMouseEvent* event);
    friend void KRuler_QBaseMouseMoveEvent(KRuler* self, QMouseEvent* event);
    friend void KRuler_KeyReleaseEvent(KRuler* self, QKeyEvent* event);
    friend void KRuler_QBaseKeyReleaseEvent(KRuler* self, QKeyEvent* event);
    friend void KRuler_FocusInEvent(KRuler* self, QFocusEvent* event);
    friend void KRuler_QBaseFocusInEvent(KRuler* self, QFocusEvent* event);
    friend void KRuler_FocusOutEvent(KRuler* self, QFocusEvent* event);
    friend void KRuler_QBaseFocusOutEvent(KRuler* self, QFocusEvent* event);
    friend void KRuler_EnterEvent(KRuler* self, QEnterEvent* event);
    friend void KRuler_QBaseEnterEvent(KRuler* self, QEnterEvent* event);
    friend void KRuler_LeaveEvent(KRuler* self, QEvent* event);
    friend void KRuler_QBaseLeaveEvent(KRuler* self, QEvent* event);
    friend void KRuler_MoveEvent(KRuler* self, QMoveEvent* event);
    friend void KRuler_QBaseMoveEvent(KRuler* self, QMoveEvent* event);
    friend void KRuler_ResizeEvent(KRuler* self, QResizeEvent* event);
    friend void KRuler_QBaseResizeEvent(KRuler* self, QResizeEvent* event);
    friend void KRuler_CloseEvent(KRuler* self, QCloseEvent* event);
    friend void KRuler_QBaseCloseEvent(KRuler* self, QCloseEvent* event);
    friend void KRuler_ContextMenuEvent(KRuler* self, QContextMenuEvent* event);
    friend void KRuler_QBaseContextMenuEvent(KRuler* self, QContextMenuEvent* event);
    friend void KRuler_TabletEvent(KRuler* self, QTabletEvent* event);
    friend void KRuler_QBaseTabletEvent(KRuler* self, QTabletEvent* event);
    friend void KRuler_ActionEvent(KRuler* self, QActionEvent* event);
    friend void KRuler_QBaseActionEvent(KRuler* self, QActionEvent* event);
    friend void KRuler_DragEnterEvent(KRuler* self, QDragEnterEvent* event);
    friend void KRuler_QBaseDragEnterEvent(KRuler* self, QDragEnterEvent* event);
    friend void KRuler_DragMoveEvent(KRuler* self, QDragMoveEvent* event);
    friend void KRuler_QBaseDragMoveEvent(KRuler* self, QDragMoveEvent* event);
    friend void KRuler_DragLeaveEvent(KRuler* self, QDragLeaveEvent* event);
    friend void KRuler_QBaseDragLeaveEvent(KRuler* self, QDragLeaveEvent* event);
    friend void KRuler_DropEvent(KRuler* self, QDropEvent* event);
    friend void KRuler_QBaseDropEvent(KRuler* self, QDropEvent* event);
    friend void KRuler_ShowEvent(KRuler* self, QShowEvent* event);
    friend void KRuler_QBaseShowEvent(KRuler* self, QShowEvent* event);
    friend void KRuler_HideEvent(KRuler* self, QHideEvent* event);
    friend void KRuler_QBaseHideEvent(KRuler* self, QHideEvent* event);
    friend bool KRuler_NativeEvent(KRuler* self, const libqt_string eventType, void* message, intptr_t* result);
    friend bool KRuler_QBaseNativeEvent(KRuler* self, const libqt_string eventType, void* message, intptr_t* result);
    friend int KRuler_Metric(const KRuler* self, int param1);
    friend int KRuler_QBaseMetric(const KRuler* self, int param1);
    friend void KRuler_InitPainter(const KRuler* self, QPainter* painter);
    friend void KRuler_QBaseInitPainter(const KRuler* self, QPainter* painter);
    friend QPaintDevice* KRuler_Redirected(const KRuler* self, QPoint* offset);
    friend QPaintDevice* KRuler_QBaseRedirected(const KRuler* self, QPoint* offset);
    friend QPainter* KRuler_SharedPainter(const KRuler* self);
    friend QPainter* KRuler_QBaseSharedPainter(const KRuler* self);
    friend void KRuler_InputMethodEvent(KRuler* self, QInputMethodEvent* param1);
    friend void KRuler_QBaseInputMethodEvent(KRuler* self, QInputMethodEvent* param1);
    friend bool KRuler_FocusNextPrevChild(KRuler* self, bool next);
    friend bool KRuler_QBaseFocusNextPrevChild(KRuler* self, bool next);
    friend void KRuler_ChildEvent(KRuler* self, QChildEvent* event);
    friend void KRuler_QBaseChildEvent(KRuler* self, QChildEvent* event);
    friend void KRuler_CustomEvent(KRuler* self, QEvent* event);
    friend void KRuler_QBaseCustomEvent(KRuler* self, QEvent* event);
    friend void KRuler_ConnectNotify(KRuler* self, const QMetaMethod* signal);
    friend void KRuler_QBaseConnectNotify(KRuler* self, const QMetaMethod* signal);
    friend void KRuler_DisconnectNotify(KRuler* self, const QMetaMethod* signal);
    friend void KRuler_QBaseDisconnectNotify(KRuler* self, const QMetaMethod* signal);
    friend void KRuler_SetRepeatAction(KRuler* self, int action);
    friend void KRuler_QBaseSetRepeatAction(KRuler* self, int action);
    friend int KRuler_RepeatAction(const KRuler* self);
    friend int KRuler_QBaseRepeatAction(const KRuler* self);
    friend void KRuler_UpdateMicroFocus(KRuler* self);
    friend void KRuler_QBaseUpdateMicroFocus(KRuler* self);
    friend void KRuler_Create(KRuler* self);
    friend void KRuler_QBaseCreate(KRuler* self);
    friend void KRuler_Destroy(KRuler* self);
    friend void KRuler_QBaseDestroy(KRuler* self);
    friend bool KRuler_FocusNextChild(KRuler* self);
    friend bool KRuler_QBaseFocusNextChild(KRuler* self);
    friend bool KRuler_FocusPreviousChild(KRuler* self);
    friend bool KRuler_QBaseFocusPreviousChild(KRuler* self);
    friend QObject* KRuler_Sender(const KRuler* self);
    friend QObject* KRuler_QBaseSender(const KRuler* self);
    friend int KRuler_SenderSignalIndex(const KRuler* self);
    friend int KRuler_QBaseSenderSignalIndex(const KRuler* self);
    friend int KRuler_Receivers(const KRuler* self, const char* signal);
    friend int KRuler_QBaseReceivers(const KRuler* self, const char* signal);
    friend bool KRuler_IsSignalConnected(const KRuler* self, const QMetaMethod* signal);
    friend bool KRuler_QBaseIsSignalConnected(const KRuler* self, const QMetaMethod* signal);
    friend double KRuler_GetDecodedMetricF(const KRuler* self, int metricA, int metricB);
    friend double KRuler_QBaseGetDecodedMetricF(const KRuler* self, int metricA, int metricB);
};

#endif
