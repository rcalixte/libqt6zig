#pragma once
#ifndef SRC_EXTRAS_KWIDGETSADDONSC_LIBVIRTUALKRATINGWIDGET_H
#define SRC_EXTRAS_KWIDGETSADDONSC_LIBVIRTUALKRATINGWIDGET_H

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

// This class is a subclass of KRatingWidget so that we can call protected methods
class VirtualKRatingWidget final : public KRatingWidget {

  public:
    // Virtual class boolean flag
    bool isVirtualKRatingWidget = true;

    // Virtual class public types (including callbacks)
    using KRatingWidget_Metacall_Callback = int (*)(KRatingWidget*, int, int, void**);
    using KRatingWidget_SizeHint_Callback = QSize* (*)();
    using KRatingWidget_MousePressEvent_Callback = void (*)(KRatingWidget*, QMouseEvent*);
    using KRatingWidget_MouseMoveEvent_Callback = void (*)(KRatingWidget*, QMouseEvent*);
    using KRatingWidget_LeaveEvent_Callback = void (*)(KRatingWidget*, QEvent*);
    using KRatingWidget_PaintEvent_Callback = void (*)(KRatingWidget*, QPaintEvent*);
    using KRatingWidget_ResizeEvent_Callback = void (*)(KRatingWidget*, QResizeEvent*);
    using KRatingWidget_Event_Callback = bool (*)(KRatingWidget*, QEvent*);
    using KRatingWidget_ChangeEvent_Callback = void (*)(KRatingWidget*, QEvent*);
    using KRatingWidget_InitStyleOption_Callback = void (*)(const KRatingWidget*, QStyleOptionFrame*);
    using KRatingWidget_DevType_Callback = int (*)();
    using KRatingWidget_SetVisible_Callback = void (*)(KRatingWidget*, bool);
    using KRatingWidget_MinimumSizeHint_Callback = QSize* (*)();
    using KRatingWidget_HeightForWidth_Callback = int (*)(const KRatingWidget*, int);
    using KRatingWidget_HasHeightForWidth_Callback = bool (*)();
    using KRatingWidget_PaintEngine_Callback = QPaintEngine* (*)();
    using KRatingWidget_MouseReleaseEvent_Callback = void (*)(KRatingWidget*, QMouseEvent*);
    using KRatingWidget_MouseDoubleClickEvent_Callback = void (*)(KRatingWidget*, QMouseEvent*);
    using KRatingWidget_WheelEvent_Callback = void (*)(KRatingWidget*, QWheelEvent*);
    using KRatingWidget_KeyPressEvent_Callback = void (*)(KRatingWidget*, QKeyEvent*);
    using KRatingWidget_KeyReleaseEvent_Callback = void (*)(KRatingWidget*, QKeyEvent*);
    using KRatingWidget_FocusInEvent_Callback = void (*)(KRatingWidget*, QFocusEvent*);
    using KRatingWidget_FocusOutEvent_Callback = void (*)(KRatingWidget*, QFocusEvent*);
    using KRatingWidget_EnterEvent_Callback = void (*)(KRatingWidget*, QEnterEvent*);
    using KRatingWidget_MoveEvent_Callback = void (*)(KRatingWidget*, QMoveEvent*);
    using KRatingWidget_CloseEvent_Callback = void (*)(KRatingWidget*, QCloseEvent*);
    using KRatingWidget_ContextMenuEvent_Callback = void (*)(KRatingWidget*, QContextMenuEvent*);
    using KRatingWidget_TabletEvent_Callback = void (*)(KRatingWidget*, QTabletEvent*);
    using KRatingWidget_ActionEvent_Callback = void (*)(KRatingWidget*, QActionEvent*);
    using KRatingWidget_DragEnterEvent_Callback = void (*)(KRatingWidget*, QDragEnterEvent*);
    using KRatingWidget_DragMoveEvent_Callback = void (*)(KRatingWidget*, QDragMoveEvent*);
    using KRatingWidget_DragLeaveEvent_Callback = void (*)(KRatingWidget*, QDragLeaveEvent*);
    using KRatingWidget_DropEvent_Callback = void (*)(KRatingWidget*, QDropEvent*);
    using KRatingWidget_ShowEvent_Callback = void (*)(KRatingWidget*, QShowEvent*);
    using KRatingWidget_HideEvent_Callback = void (*)(KRatingWidget*, QHideEvent*);
    using KRatingWidget_NativeEvent_Callback = bool (*)(KRatingWidget*, libqt_string, void*, intptr_t*);
    using KRatingWidget_Metric_Callback = int (*)(const KRatingWidget*, int);
    using KRatingWidget_InitPainter_Callback = void (*)(const KRatingWidget*, QPainter*);
    using KRatingWidget_Redirected_Callback = QPaintDevice* (*)(const KRatingWidget*, QPoint*);
    using KRatingWidget_SharedPainter_Callback = QPainter* (*)();
    using KRatingWidget_InputMethodEvent_Callback = void (*)(KRatingWidget*, QInputMethodEvent*);
    using KRatingWidget_InputMethodQuery_Callback = QVariant* (*)(const KRatingWidget*, int);
    using KRatingWidget_FocusNextPrevChild_Callback = bool (*)(KRatingWidget*, bool);
    using KRatingWidget_EventFilter_Callback = bool (*)(KRatingWidget*, QObject*, QEvent*);
    using KRatingWidget_TimerEvent_Callback = void (*)(KRatingWidget*, QTimerEvent*);
    using KRatingWidget_ChildEvent_Callback = void (*)(KRatingWidget*, QChildEvent*);
    using KRatingWidget_CustomEvent_Callback = void (*)(KRatingWidget*, QEvent*);
    using KRatingWidget_ConnectNotify_Callback = void (*)(KRatingWidget*, QMetaMethod*);
    using KRatingWidget_DisconnectNotify_Callback = void (*)(KRatingWidget*, QMetaMethod*);
    using KRatingWidget_DrawFrame_Callback = void (*)(KRatingWidget*, QPainter*);
    using KRatingWidget_UpdateMicroFocus_Callback = void (*)();
    using KRatingWidget_Create_Callback = void (*)();
    using KRatingWidget_Destroy_Callback = void (*)();
    using KRatingWidget_FocusNextChild_Callback = bool (*)();
    using KRatingWidget_FocusPreviousChild_Callback = bool (*)();
    using KRatingWidget_Sender_Callback = QObject* (*)();
    using KRatingWidget_SenderSignalIndex_Callback = int (*)();
    using KRatingWidget_Receivers_Callback = int (*)(const KRatingWidget*, const char*);
    using KRatingWidget_IsSignalConnected_Callback = bool (*)(const KRatingWidget*, QMetaMethod*);
    using KRatingWidget_GetDecodedMetricF_Callback = double (*)(const KRatingWidget*, int, int);

  protected:
    // Instance callback storage
    KRatingWidget_Metacall_Callback kratingwidget_metacall_callback = nullptr;
    KRatingWidget_SizeHint_Callback kratingwidget_sizehint_callback = nullptr;
    KRatingWidget_MousePressEvent_Callback kratingwidget_mousepressevent_callback = nullptr;
    KRatingWidget_MouseMoveEvent_Callback kratingwidget_mousemoveevent_callback = nullptr;
    KRatingWidget_LeaveEvent_Callback kratingwidget_leaveevent_callback = nullptr;
    KRatingWidget_PaintEvent_Callback kratingwidget_paintevent_callback = nullptr;
    KRatingWidget_ResizeEvent_Callback kratingwidget_resizeevent_callback = nullptr;
    KRatingWidget_Event_Callback kratingwidget_event_callback = nullptr;
    KRatingWidget_ChangeEvent_Callback kratingwidget_changeevent_callback = nullptr;
    KRatingWidget_InitStyleOption_Callback kratingwidget_initstyleoption_callback = nullptr;
    KRatingWidget_DevType_Callback kratingwidget_devtype_callback = nullptr;
    KRatingWidget_SetVisible_Callback kratingwidget_setvisible_callback = nullptr;
    KRatingWidget_MinimumSizeHint_Callback kratingwidget_minimumsizehint_callback = nullptr;
    KRatingWidget_HeightForWidth_Callback kratingwidget_heightforwidth_callback = nullptr;
    KRatingWidget_HasHeightForWidth_Callback kratingwidget_hasheightforwidth_callback = nullptr;
    KRatingWidget_PaintEngine_Callback kratingwidget_paintengine_callback = nullptr;
    KRatingWidget_MouseReleaseEvent_Callback kratingwidget_mousereleaseevent_callback = nullptr;
    KRatingWidget_MouseDoubleClickEvent_Callback kratingwidget_mousedoubleclickevent_callback = nullptr;
    KRatingWidget_WheelEvent_Callback kratingwidget_wheelevent_callback = nullptr;
    KRatingWidget_KeyPressEvent_Callback kratingwidget_keypressevent_callback = nullptr;
    KRatingWidget_KeyReleaseEvent_Callback kratingwidget_keyreleaseevent_callback = nullptr;
    KRatingWidget_FocusInEvent_Callback kratingwidget_focusinevent_callback = nullptr;
    KRatingWidget_FocusOutEvent_Callback kratingwidget_focusoutevent_callback = nullptr;
    KRatingWidget_EnterEvent_Callback kratingwidget_enterevent_callback = nullptr;
    KRatingWidget_MoveEvent_Callback kratingwidget_moveevent_callback = nullptr;
    KRatingWidget_CloseEvent_Callback kratingwidget_closeevent_callback = nullptr;
    KRatingWidget_ContextMenuEvent_Callback kratingwidget_contextmenuevent_callback = nullptr;
    KRatingWidget_TabletEvent_Callback kratingwidget_tabletevent_callback = nullptr;
    KRatingWidget_ActionEvent_Callback kratingwidget_actionevent_callback = nullptr;
    KRatingWidget_DragEnterEvent_Callback kratingwidget_dragenterevent_callback = nullptr;
    KRatingWidget_DragMoveEvent_Callback kratingwidget_dragmoveevent_callback = nullptr;
    KRatingWidget_DragLeaveEvent_Callback kratingwidget_dragleaveevent_callback = nullptr;
    KRatingWidget_DropEvent_Callback kratingwidget_dropevent_callback = nullptr;
    KRatingWidget_ShowEvent_Callback kratingwidget_showevent_callback = nullptr;
    KRatingWidget_HideEvent_Callback kratingwidget_hideevent_callback = nullptr;
    KRatingWidget_NativeEvent_Callback kratingwidget_nativeevent_callback = nullptr;
    KRatingWidget_Metric_Callback kratingwidget_metric_callback = nullptr;
    KRatingWidget_InitPainter_Callback kratingwidget_initpainter_callback = nullptr;
    KRatingWidget_Redirected_Callback kratingwidget_redirected_callback = nullptr;
    KRatingWidget_SharedPainter_Callback kratingwidget_sharedpainter_callback = nullptr;
    KRatingWidget_InputMethodEvent_Callback kratingwidget_inputmethodevent_callback = nullptr;
    KRatingWidget_InputMethodQuery_Callback kratingwidget_inputmethodquery_callback = nullptr;
    KRatingWidget_FocusNextPrevChild_Callback kratingwidget_focusnextprevchild_callback = nullptr;
    KRatingWidget_EventFilter_Callback kratingwidget_eventfilter_callback = nullptr;
    KRatingWidget_TimerEvent_Callback kratingwidget_timerevent_callback = nullptr;
    KRatingWidget_ChildEvent_Callback kratingwidget_childevent_callback = nullptr;
    KRatingWidget_CustomEvent_Callback kratingwidget_customevent_callback = nullptr;
    KRatingWidget_ConnectNotify_Callback kratingwidget_connectnotify_callback = nullptr;
    KRatingWidget_DisconnectNotify_Callback kratingwidget_disconnectnotify_callback = nullptr;
    KRatingWidget_DrawFrame_Callback kratingwidget_drawframe_callback = nullptr;
    KRatingWidget_UpdateMicroFocus_Callback kratingwidget_updatemicrofocus_callback = nullptr;
    KRatingWidget_Create_Callback kratingwidget_create_callback = nullptr;
    KRatingWidget_Destroy_Callback kratingwidget_destroy_callback = nullptr;
    KRatingWidget_FocusNextChild_Callback kratingwidget_focusnextchild_callback = nullptr;
    KRatingWidget_FocusPreviousChild_Callback kratingwidget_focuspreviouschild_callback = nullptr;
    KRatingWidget_Sender_Callback kratingwidget_sender_callback = nullptr;
    KRatingWidget_SenderSignalIndex_Callback kratingwidget_sendersignalindex_callback = nullptr;
    KRatingWidget_Receivers_Callback kratingwidget_receivers_callback = nullptr;
    KRatingWidget_IsSignalConnected_Callback kratingwidget_issignalconnected_callback = nullptr;
    KRatingWidget_GetDecodedMetricF_Callback kratingwidget_getdecodedmetricf_callback = nullptr;

    // Instance base flags
    mutable bool kratingwidget_metacall_isbase = false;
    mutable bool kratingwidget_sizehint_isbase = false;
    mutable bool kratingwidget_mousepressevent_isbase = false;
    mutable bool kratingwidget_mousemoveevent_isbase = false;
    mutable bool kratingwidget_leaveevent_isbase = false;
    mutable bool kratingwidget_paintevent_isbase = false;
    mutable bool kratingwidget_resizeevent_isbase = false;
    mutable bool kratingwidget_event_isbase = false;
    mutable bool kratingwidget_changeevent_isbase = false;
    mutable bool kratingwidget_initstyleoption_isbase = false;
    mutable bool kratingwidget_devtype_isbase = false;
    mutable bool kratingwidget_setvisible_isbase = false;
    mutable bool kratingwidget_minimumsizehint_isbase = false;
    mutable bool kratingwidget_heightforwidth_isbase = false;
    mutable bool kratingwidget_hasheightforwidth_isbase = false;
    mutable bool kratingwidget_paintengine_isbase = false;
    mutable bool kratingwidget_mousereleaseevent_isbase = false;
    mutable bool kratingwidget_mousedoubleclickevent_isbase = false;
    mutable bool kratingwidget_wheelevent_isbase = false;
    mutable bool kratingwidget_keypressevent_isbase = false;
    mutable bool kratingwidget_keyreleaseevent_isbase = false;
    mutable bool kratingwidget_focusinevent_isbase = false;
    mutable bool kratingwidget_focusoutevent_isbase = false;
    mutable bool kratingwidget_enterevent_isbase = false;
    mutable bool kratingwidget_moveevent_isbase = false;
    mutable bool kratingwidget_closeevent_isbase = false;
    mutable bool kratingwidget_contextmenuevent_isbase = false;
    mutable bool kratingwidget_tabletevent_isbase = false;
    mutable bool kratingwidget_actionevent_isbase = false;
    mutable bool kratingwidget_dragenterevent_isbase = false;
    mutable bool kratingwidget_dragmoveevent_isbase = false;
    mutable bool kratingwidget_dragleaveevent_isbase = false;
    mutable bool kratingwidget_dropevent_isbase = false;
    mutable bool kratingwidget_showevent_isbase = false;
    mutable bool kratingwidget_hideevent_isbase = false;
    mutable bool kratingwidget_nativeevent_isbase = false;
    mutable bool kratingwidget_metric_isbase = false;
    mutable bool kratingwidget_initpainter_isbase = false;
    mutable bool kratingwidget_redirected_isbase = false;
    mutable bool kratingwidget_sharedpainter_isbase = false;
    mutable bool kratingwidget_inputmethodevent_isbase = false;
    mutable bool kratingwidget_inputmethodquery_isbase = false;
    mutable bool kratingwidget_focusnextprevchild_isbase = false;
    mutable bool kratingwidget_eventfilter_isbase = false;
    mutable bool kratingwidget_timerevent_isbase = false;
    mutable bool kratingwidget_childevent_isbase = false;
    mutable bool kratingwidget_customevent_isbase = false;
    mutable bool kratingwidget_connectnotify_isbase = false;
    mutable bool kratingwidget_disconnectnotify_isbase = false;
    mutable bool kratingwidget_drawframe_isbase = false;
    mutable bool kratingwidget_updatemicrofocus_isbase = false;
    mutable bool kratingwidget_create_isbase = false;
    mutable bool kratingwidget_destroy_isbase = false;
    mutable bool kratingwidget_focusnextchild_isbase = false;
    mutable bool kratingwidget_focuspreviouschild_isbase = false;
    mutable bool kratingwidget_sender_isbase = false;
    mutable bool kratingwidget_sendersignalindex_isbase = false;
    mutable bool kratingwidget_receivers_isbase = false;
    mutable bool kratingwidget_issignalconnected_isbase = false;
    mutable bool kratingwidget_getdecodedmetricf_isbase = false;

  public:
    VirtualKRatingWidget(QWidget* parent) : KRatingWidget(parent) {};
    VirtualKRatingWidget() : KRatingWidget() {};

    ~VirtualKRatingWidget() {
        kratingwidget_metacall_callback = nullptr;
        kratingwidget_sizehint_callback = nullptr;
        kratingwidget_mousepressevent_callback = nullptr;
        kratingwidget_mousemoveevent_callback = nullptr;
        kratingwidget_leaveevent_callback = nullptr;
        kratingwidget_paintevent_callback = nullptr;
        kratingwidget_resizeevent_callback = nullptr;
        kratingwidget_event_callback = nullptr;
        kratingwidget_changeevent_callback = nullptr;
        kratingwidget_initstyleoption_callback = nullptr;
        kratingwidget_devtype_callback = nullptr;
        kratingwidget_setvisible_callback = nullptr;
        kratingwidget_minimumsizehint_callback = nullptr;
        kratingwidget_heightforwidth_callback = nullptr;
        kratingwidget_hasheightforwidth_callback = nullptr;
        kratingwidget_paintengine_callback = nullptr;
        kratingwidget_mousereleaseevent_callback = nullptr;
        kratingwidget_mousedoubleclickevent_callback = nullptr;
        kratingwidget_wheelevent_callback = nullptr;
        kratingwidget_keypressevent_callback = nullptr;
        kratingwidget_keyreleaseevent_callback = nullptr;
        kratingwidget_focusinevent_callback = nullptr;
        kratingwidget_focusoutevent_callback = nullptr;
        kratingwidget_enterevent_callback = nullptr;
        kratingwidget_moveevent_callback = nullptr;
        kratingwidget_closeevent_callback = nullptr;
        kratingwidget_contextmenuevent_callback = nullptr;
        kratingwidget_tabletevent_callback = nullptr;
        kratingwidget_actionevent_callback = nullptr;
        kratingwidget_dragenterevent_callback = nullptr;
        kratingwidget_dragmoveevent_callback = nullptr;
        kratingwidget_dragleaveevent_callback = nullptr;
        kratingwidget_dropevent_callback = nullptr;
        kratingwidget_showevent_callback = nullptr;
        kratingwidget_hideevent_callback = nullptr;
        kratingwidget_nativeevent_callback = nullptr;
        kratingwidget_metric_callback = nullptr;
        kratingwidget_initpainter_callback = nullptr;
        kratingwidget_redirected_callback = nullptr;
        kratingwidget_sharedpainter_callback = nullptr;
        kratingwidget_inputmethodevent_callback = nullptr;
        kratingwidget_inputmethodquery_callback = nullptr;
        kratingwidget_focusnextprevchild_callback = nullptr;
        kratingwidget_eventfilter_callback = nullptr;
        kratingwidget_timerevent_callback = nullptr;
        kratingwidget_childevent_callback = nullptr;
        kratingwidget_customevent_callback = nullptr;
        kratingwidget_connectnotify_callback = nullptr;
        kratingwidget_disconnectnotify_callback = nullptr;
        kratingwidget_drawframe_callback = nullptr;
        kratingwidget_updatemicrofocus_callback = nullptr;
        kratingwidget_create_callback = nullptr;
        kratingwidget_destroy_callback = nullptr;
        kratingwidget_focusnextchild_callback = nullptr;
        kratingwidget_focuspreviouschild_callback = nullptr;
        kratingwidget_sender_callback = nullptr;
        kratingwidget_sendersignalindex_callback = nullptr;
        kratingwidget_receivers_callback = nullptr;
        kratingwidget_issignalconnected_callback = nullptr;
        kratingwidget_getdecodedmetricf_callback = nullptr;
    }

    // Callback setters
    inline void setKRatingWidget_Metacall_Callback(KRatingWidget_Metacall_Callback cb) { kratingwidget_metacall_callback = cb; }
    inline void setKRatingWidget_SizeHint_Callback(KRatingWidget_SizeHint_Callback cb) { kratingwidget_sizehint_callback = cb; }
    inline void setKRatingWidget_MousePressEvent_Callback(KRatingWidget_MousePressEvent_Callback cb) { kratingwidget_mousepressevent_callback = cb; }
    inline void setKRatingWidget_MouseMoveEvent_Callback(KRatingWidget_MouseMoveEvent_Callback cb) { kratingwidget_mousemoveevent_callback = cb; }
    inline void setKRatingWidget_LeaveEvent_Callback(KRatingWidget_LeaveEvent_Callback cb) { kratingwidget_leaveevent_callback = cb; }
    inline void setKRatingWidget_PaintEvent_Callback(KRatingWidget_PaintEvent_Callback cb) { kratingwidget_paintevent_callback = cb; }
    inline void setKRatingWidget_ResizeEvent_Callback(KRatingWidget_ResizeEvent_Callback cb) { kratingwidget_resizeevent_callback = cb; }
    inline void setKRatingWidget_Event_Callback(KRatingWidget_Event_Callback cb) { kratingwidget_event_callback = cb; }
    inline void setKRatingWidget_ChangeEvent_Callback(KRatingWidget_ChangeEvent_Callback cb) { kratingwidget_changeevent_callback = cb; }
    inline void setKRatingWidget_InitStyleOption_Callback(KRatingWidget_InitStyleOption_Callback cb) { kratingwidget_initstyleoption_callback = cb; }
    inline void setKRatingWidget_DevType_Callback(KRatingWidget_DevType_Callback cb) { kratingwidget_devtype_callback = cb; }
    inline void setKRatingWidget_SetVisible_Callback(KRatingWidget_SetVisible_Callback cb) { kratingwidget_setvisible_callback = cb; }
    inline void setKRatingWidget_MinimumSizeHint_Callback(KRatingWidget_MinimumSizeHint_Callback cb) { kratingwidget_minimumsizehint_callback = cb; }
    inline void setKRatingWidget_HeightForWidth_Callback(KRatingWidget_HeightForWidth_Callback cb) { kratingwidget_heightforwidth_callback = cb; }
    inline void setKRatingWidget_HasHeightForWidth_Callback(KRatingWidget_HasHeightForWidth_Callback cb) { kratingwidget_hasheightforwidth_callback = cb; }
    inline void setKRatingWidget_PaintEngine_Callback(KRatingWidget_PaintEngine_Callback cb) { kratingwidget_paintengine_callback = cb; }
    inline void setKRatingWidget_MouseReleaseEvent_Callback(KRatingWidget_MouseReleaseEvent_Callback cb) { kratingwidget_mousereleaseevent_callback = cb; }
    inline void setKRatingWidget_MouseDoubleClickEvent_Callback(KRatingWidget_MouseDoubleClickEvent_Callback cb) { kratingwidget_mousedoubleclickevent_callback = cb; }
    inline void setKRatingWidget_WheelEvent_Callback(KRatingWidget_WheelEvent_Callback cb) { kratingwidget_wheelevent_callback = cb; }
    inline void setKRatingWidget_KeyPressEvent_Callback(KRatingWidget_KeyPressEvent_Callback cb) { kratingwidget_keypressevent_callback = cb; }
    inline void setKRatingWidget_KeyReleaseEvent_Callback(KRatingWidget_KeyReleaseEvent_Callback cb) { kratingwidget_keyreleaseevent_callback = cb; }
    inline void setKRatingWidget_FocusInEvent_Callback(KRatingWidget_FocusInEvent_Callback cb) { kratingwidget_focusinevent_callback = cb; }
    inline void setKRatingWidget_FocusOutEvent_Callback(KRatingWidget_FocusOutEvent_Callback cb) { kratingwidget_focusoutevent_callback = cb; }
    inline void setKRatingWidget_EnterEvent_Callback(KRatingWidget_EnterEvent_Callback cb) { kratingwidget_enterevent_callback = cb; }
    inline void setKRatingWidget_MoveEvent_Callback(KRatingWidget_MoveEvent_Callback cb) { kratingwidget_moveevent_callback = cb; }
    inline void setKRatingWidget_CloseEvent_Callback(KRatingWidget_CloseEvent_Callback cb) { kratingwidget_closeevent_callback = cb; }
    inline void setKRatingWidget_ContextMenuEvent_Callback(KRatingWidget_ContextMenuEvent_Callback cb) { kratingwidget_contextmenuevent_callback = cb; }
    inline void setKRatingWidget_TabletEvent_Callback(KRatingWidget_TabletEvent_Callback cb) { kratingwidget_tabletevent_callback = cb; }
    inline void setKRatingWidget_ActionEvent_Callback(KRatingWidget_ActionEvent_Callback cb) { kratingwidget_actionevent_callback = cb; }
    inline void setKRatingWidget_DragEnterEvent_Callback(KRatingWidget_DragEnterEvent_Callback cb) { kratingwidget_dragenterevent_callback = cb; }
    inline void setKRatingWidget_DragMoveEvent_Callback(KRatingWidget_DragMoveEvent_Callback cb) { kratingwidget_dragmoveevent_callback = cb; }
    inline void setKRatingWidget_DragLeaveEvent_Callback(KRatingWidget_DragLeaveEvent_Callback cb) { kratingwidget_dragleaveevent_callback = cb; }
    inline void setKRatingWidget_DropEvent_Callback(KRatingWidget_DropEvent_Callback cb) { kratingwidget_dropevent_callback = cb; }
    inline void setKRatingWidget_ShowEvent_Callback(KRatingWidget_ShowEvent_Callback cb) { kratingwidget_showevent_callback = cb; }
    inline void setKRatingWidget_HideEvent_Callback(KRatingWidget_HideEvent_Callback cb) { kratingwidget_hideevent_callback = cb; }
    inline void setKRatingWidget_NativeEvent_Callback(KRatingWidget_NativeEvent_Callback cb) { kratingwidget_nativeevent_callback = cb; }
    inline void setKRatingWidget_Metric_Callback(KRatingWidget_Metric_Callback cb) { kratingwidget_metric_callback = cb; }
    inline void setKRatingWidget_InitPainter_Callback(KRatingWidget_InitPainter_Callback cb) { kratingwidget_initpainter_callback = cb; }
    inline void setKRatingWidget_Redirected_Callback(KRatingWidget_Redirected_Callback cb) { kratingwidget_redirected_callback = cb; }
    inline void setKRatingWidget_SharedPainter_Callback(KRatingWidget_SharedPainter_Callback cb) { kratingwidget_sharedpainter_callback = cb; }
    inline void setKRatingWidget_InputMethodEvent_Callback(KRatingWidget_InputMethodEvent_Callback cb) { kratingwidget_inputmethodevent_callback = cb; }
    inline void setKRatingWidget_InputMethodQuery_Callback(KRatingWidget_InputMethodQuery_Callback cb) { kratingwidget_inputmethodquery_callback = cb; }
    inline void setKRatingWidget_FocusNextPrevChild_Callback(KRatingWidget_FocusNextPrevChild_Callback cb) { kratingwidget_focusnextprevchild_callback = cb; }
    inline void setKRatingWidget_EventFilter_Callback(KRatingWidget_EventFilter_Callback cb) { kratingwidget_eventfilter_callback = cb; }
    inline void setKRatingWidget_TimerEvent_Callback(KRatingWidget_TimerEvent_Callback cb) { kratingwidget_timerevent_callback = cb; }
    inline void setKRatingWidget_ChildEvent_Callback(KRatingWidget_ChildEvent_Callback cb) { kratingwidget_childevent_callback = cb; }
    inline void setKRatingWidget_CustomEvent_Callback(KRatingWidget_CustomEvent_Callback cb) { kratingwidget_customevent_callback = cb; }
    inline void setKRatingWidget_ConnectNotify_Callback(KRatingWidget_ConnectNotify_Callback cb) { kratingwidget_connectnotify_callback = cb; }
    inline void setKRatingWidget_DisconnectNotify_Callback(KRatingWidget_DisconnectNotify_Callback cb) { kratingwidget_disconnectnotify_callback = cb; }
    inline void setKRatingWidget_DrawFrame_Callback(KRatingWidget_DrawFrame_Callback cb) { kratingwidget_drawframe_callback = cb; }
    inline void setKRatingWidget_UpdateMicroFocus_Callback(KRatingWidget_UpdateMicroFocus_Callback cb) { kratingwidget_updatemicrofocus_callback = cb; }
    inline void setKRatingWidget_Create_Callback(KRatingWidget_Create_Callback cb) { kratingwidget_create_callback = cb; }
    inline void setKRatingWidget_Destroy_Callback(KRatingWidget_Destroy_Callback cb) { kratingwidget_destroy_callback = cb; }
    inline void setKRatingWidget_FocusNextChild_Callback(KRatingWidget_FocusNextChild_Callback cb) { kratingwidget_focusnextchild_callback = cb; }
    inline void setKRatingWidget_FocusPreviousChild_Callback(KRatingWidget_FocusPreviousChild_Callback cb) { kratingwidget_focuspreviouschild_callback = cb; }
    inline void setKRatingWidget_Sender_Callback(KRatingWidget_Sender_Callback cb) { kratingwidget_sender_callback = cb; }
    inline void setKRatingWidget_SenderSignalIndex_Callback(KRatingWidget_SenderSignalIndex_Callback cb) { kratingwidget_sendersignalindex_callback = cb; }
    inline void setKRatingWidget_Receivers_Callback(KRatingWidget_Receivers_Callback cb) { kratingwidget_receivers_callback = cb; }
    inline void setKRatingWidget_IsSignalConnected_Callback(KRatingWidget_IsSignalConnected_Callback cb) { kratingwidget_issignalconnected_callback = cb; }
    inline void setKRatingWidget_GetDecodedMetricF_Callback(KRatingWidget_GetDecodedMetricF_Callback cb) { kratingwidget_getdecodedmetricf_callback = cb; }

    // Base flag setters
    inline void setKRatingWidget_Metacall_IsBase(bool value) const { kratingwidget_metacall_isbase = value; }
    inline void setKRatingWidget_SizeHint_IsBase(bool value) const { kratingwidget_sizehint_isbase = value; }
    inline void setKRatingWidget_MousePressEvent_IsBase(bool value) const { kratingwidget_mousepressevent_isbase = value; }
    inline void setKRatingWidget_MouseMoveEvent_IsBase(bool value) const { kratingwidget_mousemoveevent_isbase = value; }
    inline void setKRatingWidget_LeaveEvent_IsBase(bool value) const { kratingwidget_leaveevent_isbase = value; }
    inline void setKRatingWidget_PaintEvent_IsBase(bool value) const { kratingwidget_paintevent_isbase = value; }
    inline void setKRatingWidget_ResizeEvent_IsBase(bool value) const { kratingwidget_resizeevent_isbase = value; }
    inline void setKRatingWidget_Event_IsBase(bool value) const { kratingwidget_event_isbase = value; }
    inline void setKRatingWidget_ChangeEvent_IsBase(bool value) const { kratingwidget_changeevent_isbase = value; }
    inline void setKRatingWidget_InitStyleOption_IsBase(bool value) const { kratingwidget_initstyleoption_isbase = value; }
    inline void setKRatingWidget_DevType_IsBase(bool value) const { kratingwidget_devtype_isbase = value; }
    inline void setKRatingWidget_SetVisible_IsBase(bool value) const { kratingwidget_setvisible_isbase = value; }
    inline void setKRatingWidget_MinimumSizeHint_IsBase(bool value) const { kratingwidget_minimumsizehint_isbase = value; }
    inline void setKRatingWidget_HeightForWidth_IsBase(bool value) const { kratingwidget_heightforwidth_isbase = value; }
    inline void setKRatingWidget_HasHeightForWidth_IsBase(bool value) const { kratingwidget_hasheightforwidth_isbase = value; }
    inline void setKRatingWidget_PaintEngine_IsBase(bool value) const { kratingwidget_paintengine_isbase = value; }
    inline void setKRatingWidget_MouseReleaseEvent_IsBase(bool value) const { kratingwidget_mousereleaseevent_isbase = value; }
    inline void setKRatingWidget_MouseDoubleClickEvent_IsBase(bool value) const { kratingwidget_mousedoubleclickevent_isbase = value; }
    inline void setKRatingWidget_WheelEvent_IsBase(bool value) const { kratingwidget_wheelevent_isbase = value; }
    inline void setKRatingWidget_KeyPressEvent_IsBase(bool value) const { kratingwidget_keypressevent_isbase = value; }
    inline void setKRatingWidget_KeyReleaseEvent_IsBase(bool value) const { kratingwidget_keyreleaseevent_isbase = value; }
    inline void setKRatingWidget_FocusInEvent_IsBase(bool value) const { kratingwidget_focusinevent_isbase = value; }
    inline void setKRatingWidget_FocusOutEvent_IsBase(bool value) const { kratingwidget_focusoutevent_isbase = value; }
    inline void setKRatingWidget_EnterEvent_IsBase(bool value) const { kratingwidget_enterevent_isbase = value; }
    inline void setKRatingWidget_MoveEvent_IsBase(bool value) const { kratingwidget_moveevent_isbase = value; }
    inline void setKRatingWidget_CloseEvent_IsBase(bool value) const { kratingwidget_closeevent_isbase = value; }
    inline void setKRatingWidget_ContextMenuEvent_IsBase(bool value) const { kratingwidget_contextmenuevent_isbase = value; }
    inline void setKRatingWidget_TabletEvent_IsBase(bool value) const { kratingwidget_tabletevent_isbase = value; }
    inline void setKRatingWidget_ActionEvent_IsBase(bool value) const { kratingwidget_actionevent_isbase = value; }
    inline void setKRatingWidget_DragEnterEvent_IsBase(bool value) const { kratingwidget_dragenterevent_isbase = value; }
    inline void setKRatingWidget_DragMoveEvent_IsBase(bool value) const { kratingwidget_dragmoveevent_isbase = value; }
    inline void setKRatingWidget_DragLeaveEvent_IsBase(bool value) const { kratingwidget_dragleaveevent_isbase = value; }
    inline void setKRatingWidget_DropEvent_IsBase(bool value) const { kratingwidget_dropevent_isbase = value; }
    inline void setKRatingWidget_ShowEvent_IsBase(bool value) const { kratingwidget_showevent_isbase = value; }
    inline void setKRatingWidget_HideEvent_IsBase(bool value) const { kratingwidget_hideevent_isbase = value; }
    inline void setKRatingWidget_NativeEvent_IsBase(bool value) const { kratingwidget_nativeevent_isbase = value; }
    inline void setKRatingWidget_Metric_IsBase(bool value) const { kratingwidget_metric_isbase = value; }
    inline void setKRatingWidget_InitPainter_IsBase(bool value) const { kratingwidget_initpainter_isbase = value; }
    inline void setKRatingWidget_Redirected_IsBase(bool value) const { kratingwidget_redirected_isbase = value; }
    inline void setKRatingWidget_SharedPainter_IsBase(bool value) const { kratingwidget_sharedpainter_isbase = value; }
    inline void setKRatingWidget_InputMethodEvent_IsBase(bool value) const { kratingwidget_inputmethodevent_isbase = value; }
    inline void setKRatingWidget_InputMethodQuery_IsBase(bool value) const { kratingwidget_inputmethodquery_isbase = value; }
    inline void setKRatingWidget_FocusNextPrevChild_IsBase(bool value) const { kratingwidget_focusnextprevchild_isbase = value; }
    inline void setKRatingWidget_EventFilter_IsBase(bool value) const { kratingwidget_eventfilter_isbase = value; }
    inline void setKRatingWidget_TimerEvent_IsBase(bool value) const { kratingwidget_timerevent_isbase = value; }
    inline void setKRatingWidget_ChildEvent_IsBase(bool value) const { kratingwidget_childevent_isbase = value; }
    inline void setKRatingWidget_CustomEvent_IsBase(bool value) const { kratingwidget_customevent_isbase = value; }
    inline void setKRatingWidget_ConnectNotify_IsBase(bool value) const { kratingwidget_connectnotify_isbase = value; }
    inline void setKRatingWidget_DisconnectNotify_IsBase(bool value) const { kratingwidget_disconnectnotify_isbase = value; }
    inline void setKRatingWidget_DrawFrame_IsBase(bool value) const { kratingwidget_drawframe_isbase = value; }
    inline void setKRatingWidget_UpdateMicroFocus_IsBase(bool value) const { kratingwidget_updatemicrofocus_isbase = value; }
    inline void setKRatingWidget_Create_IsBase(bool value) const { kratingwidget_create_isbase = value; }
    inline void setKRatingWidget_Destroy_IsBase(bool value) const { kratingwidget_destroy_isbase = value; }
    inline void setKRatingWidget_FocusNextChild_IsBase(bool value) const { kratingwidget_focusnextchild_isbase = value; }
    inline void setKRatingWidget_FocusPreviousChild_IsBase(bool value) const { kratingwidget_focuspreviouschild_isbase = value; }
    inline void setKRatingWidget_Sender_IsBase(bool value) const { kratingwidget_sender_isbase = value; }
    inline void setKRatingWidget_SenderSignalIndex_IsBase(bool value) const { kratingwidget_sendersignalindex_isbase = value; }
    inline void setKRatingWidget_Receivers_IsBase(bool value) const { kratingwidget_receivers_isbase = value; }
    inline void setKRatingWidget_IsSignalConnected_IsBase(bool value) const { kratingwidget_issignalconnected_isbase = value; }
    inline void setKRatingWidget_GetDecodedMetricF_IsBase(bool value) const { kratingwidget_getdecodedmetricf_isbase = value; }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (kratingwidget_metacall_isbase) {
            kratingwidget_metacall_isbase = false;
            return KRatingWidget::qt_metacall(param1, param2, param3);
        } else if (kratingwidget_metacall_callback != nullptr) {
            int cbval1 = static_cast<int>(param1);
            int cbval2 = param2;
            void** cbval3 = param3;

            int callback_ret = kratingwidget_metacall_callback(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        } else {
            return KRatingWidget::qt_metacall(param1, param2, param3);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QSize sizeHint() const override {
        if (kratingwidget_sizehint_isbase) {
            kratingwidget_sizehint_isbase = false;
            return KRatingWidget::sizeHint();
        } else if (kratingwidget_sizehint_callback != nullptr) {
            QSize* callback_ret = kratingwidget_sizehint_callback();
            return *callback_ret;
        } else {
            return KRatingWidget::sizeHint();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void mousePressEvent(QMouseEvent* e) override {
        if (kratingwidget_mousepressevent_isbase) {
            kratingwidget_mousepressevent_isbase = false;
            KRatingWidget::mousePressEvent(e);
        } else if (kratingwidget_mousepressevent_callback != nullptr) {
            QMouseEvent* cbval1 = e;

            kratingwidget_mousepressevent_callback(this, cbval1);
        } else {
            KRatingWidget::mousePressEvent(e);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseMoveEvent(QMouseEvent* e) override {
        if (kratingwidget_mousemoveevent_isbase) {
            kratingwidget_mousemoveevent_isbase = false;
            KRatingWidget::mouseMoveEvent(e);
        } else if (kratingwidget_mousemoveevent_callback != nullptr) {
            QMouseEvent* cbval1 = e;

            kratingwidget_mousemoveevent_callback(this, cbval1);
        } else {
            KRatingWidget::mouseMoveEvent(e);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void leaveEvent(QEvent* e) override {
        if (kratingwidget_leaveevent_isbase) {
            kratingwidget_leaveevent_isbase = false;
            KRatingWidget::leaveEvent(e);
        } else if (kratingwidget_leaveevent_callback != nullptr) {
            QEvent* cbval1 = e;

            kratingwidget_leaveevent_callback(this, cbval1);
        } else {
            KRatingWidget::leaveEvent(e);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void paintEvent(QPaintEvent* e) override {
        if (kratingwidget_paintevent_isbase) {
            kratingwidget_paintevent_isbase = false;
            KRatingWidget::paintEvent(e);
        } else if (kratingwidget_paintevent_callback != nullptr) {
            QPaintEvent* cbval1 = e;

            kratingwidget_paintevent_callback(this, cbval1);
        } else {
            KRatingWidget::paintEvent(e);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void resizeEvent(QResizeEvent* e) override {
        if (kratingwidget_resizeevent_isbase) {
            kratingwidget_resizeevent_isbase = false;
            KRatingWidget::resizeEvent(e);
        } else if (kratingwidget_resizeevent_callback != nullptr) {
            QResizeEvent* cbval1 = e;

            kratingwidget_resizeevent_callback(this, cbval1);
        } else {
            KRatingWidget::resizeEvent(e);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* e) override {
        if (kratingwidget_event_isbase) {
            kratingwidget_event_isbase = false;
            return KRatingWidget::event(e);
        } else if (kratingwidget_event_callback != nullptr) {
            QEvent* cbval1 = e;

            bool callback_ret = kratingwidget_event_callback(this, cbval1);
            return callback_ret;
        } else {
            return KRatingWidget::event(e);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void changeEvent(QEvent* param1) override {
        if (kratingwidget_changeevent_isbase) {
            kratingwidget_changeevent_isbase = false;
            KRatingWidget::changeEvent(param1);
        } else if (kratingwidget_changeevent_callback != nullptr) {
            QEvent* cbval1 = param1;

            kratingwidget_changeevent_callback(this, cbval1);
        } else {
            KRatingWidget::changeEvent(param1);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void initStyleOption(QStyleOptionFrame* option) const override {
        if (kratingwidget_initstyleoption_isbase) {
            kratingwidget_initstyleoption_isbase = false;
            KRatingWidget::initStyleOption(option);
        } else if (kratingwidget_initstyleoption_callback != nullptr) {
            QStyleOptionFrame* cbval1 = option;

            kratingwidget_initstyleoption_callback(this, cbval1);
        } else {
            KRatingWidget::initStyleOption(option);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual int devType() const override {
        if (kratingwidget_devtype_isbase) {
            kratingwidget_devtype_isbase = false;
            return KRatingWidget::devType();
        } else if (kratingwidget_devtype_callback != nullptr) {
            int callback_ret = kratingwidget_devtype_callback();
            return static_cast<int>(callback_ret);
        } else {
            return KRatingWidget::devType();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void setVisible(bool visible) override {
        if (kratingwidget_setvisible_isbase) {
            kratingwidget_setvisible_isbase = false;
            KRatingWidget::setVisible(visible);
        } else if (kratingwidget_setvisible_callback != nullptr) {
            bool cbval1 = visible;

            kratingwidget_setvisible_callback(this, cbval1);
        } else {
            KRatingWidget::setVisible(visible);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QSize minimumSizeHint() const override {
        if (kratingwidget_minimumsizehint_isbase) {
            kratingwidget_minimumsizehint_isbase = false;
            return KRatingWidget::minimumSizeHint();
        } else if (kratingwidget_minimumsizehint_callback != nullptr) {
            QSize* callback_ret = kratingwidget_minimumsizehint_callback();
            return *callback_ret;
        } else {
            return KRatingWidget::minimumSizeHint();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual int heightForWidth(int param1) const override {
        if (kratingwidget_heightforwidth_isbase) {
            kratingwidget_heightforwidth_isbase = false;
            return KRatingWidget::heightForWidth(param1);
        } else if (kratingwidget_heightforwidth_callback != nullptr) {
            int cbval1 = param1;

            int callback_ret = kratingwidget_heightforwidth_callback(this, cbval1);
            return static_cast<int>(callback_ret);
        } else {
            return KRatingWidget::heightForWidth(param1);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool hasHeightForWidth() const override {
        if (kratingwidget_hasheightforwidth_isbase) {
            kratingwidget_hasheightforwidth_isbase = false;
            return KRatingWidget::hasHeightForWidth();
        } else if (kratingwidget_hasheightforwidth_callback != nullptr) {
            bool callback_ret = kratingwidget_hasheightforwidth_callback();
            return callback_ret;
        } else {
            return KRatingWidget::hasHeightForWidth();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QPaintEngine* paintEngine() const override {
        if (kratingwidget_paintengine_isbase) {
            kratingwidget_paintengine_isbase = false;
            return KRatingWidget::paintEngine();
        } else if (kratingwidget_paintengine_callback != nullptr) {
            QPaintEngine* callback_ret = kratingwidget_paintengine_callback();
            return callback_ret;
        } else {
            return KRatingWidget::paintEngine();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseReleaseEvent(QMouseEvent* event) override {
        if (kratingwidget_mousereleaseevent_isbase) {
            kratingwidget_mousereleaseevent_isbase = false;
            KRatingWidget::mouseReleaseEvent(event);
        } else if (kratingwidget_mousereleaseevent_callback != nullptr) {
            QMouseEvent* cbval1 = event;

            kratingwidget_mousereleaseevent_callback(this, cbval1);
        } else {
            KRatingWidget::mouseReleaseEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseDoubleClickEvent(QMouseEvent* event) override {
        if (kratingwidget_mousedoubleclickevent_isbase) {
            kratingwidget_mousedoubleclickevent_isbase = false;
            KRatingWidget::mouseDoubleClickEvent(event);
        } else if (kratingwidget_mousedoubleclickevent_callback != nullptr) {
            QMouseEvent* cbval1 = event;

            kratingwidget_mousedoubleclickevent_callback(this, cbval1);
        } else {
            KRatingWidget::mouseDoubleClickEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void wheelEvent(QWheelEvent* event) override {
        if (kratingwidget_wheelevent_isbase) {
            kratingwidget_wheelevent_isbase = false;
            KRatingWidget::wheelEvent(event);
        } else if (kratingwidget_wheelevent_callback != nullptr) {
            QWheelEvent* cbval1 = event;

            kratingwidget_wheelevent_callback(this, cbval1);
        } else {
            KRatingWidget::wheelEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void keyPressEvent(QKeyEvent* event) override {
        if (kratingwidget_keypressevent_isbase) {
            kratingwidget_keypressevent_isbase = false;
            KRatingWidget::keyPressEvent(event);
        } else if (kratingwidget_keypressevent_callback != nullptr) {
            QKeyEvent* cbval1 = event;

            kratingwidget_keypressevent_callback(this, cbval1);
        } else {
            KRatingWidget::keyPressEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void keyReleaseEvent(QKeyEvent* event) override {
        if (kratingwidget_keyreleaseevent_isbase) {
            kratingwidget_keyreleaseevent_isbase = false;
            KRatingWidget::keyReleaseEvent(event);
        } else if (kratingwidget_keyreleaseevent_callback != nullptr) {
            QKeyEvent* cbval1 = event;

            kratingwidget_keyreleaseevent_callback(this, cbval1);
        } else {
            KRatingWidget::keyReleaseEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void focusInEvent(QFocusEvent* event) override {
        if (kratingwidget_focusinevent_isbase) {
            kratingwidget_focusinevent_isbase = false;
            KRatingWidget::focusInEvent(event);
        } else if (kratingwidget_focusinevent_callback != nullptr) {
            QFocusEvent* cbval1 = event;

            kratingwidget_focusinevent_callback(this, cbval1);
        } else {
            KRatingWidget::focusInEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void focusOutEvent(QFocusEvent* event) override {
        if (kratingwidget_focusoutevent_isbase) {
            kratingwidget_focusoutevent_isbase = false;
            KRatingWidget::focusOutEvent(event);
        } else if (kratingwidget_focusoutevent_callback != nullptr) {
            QFocusEvent* cbval1 = event;

            kratingwidget_focusoutevent_callback(this, cbval1);
        } else {
            KRatingWidget::focusOutEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void enterEvent(QEnterEvent* event) override {
        if (kratingwidget_enterevent_isbase) {
            kratingwidget_enterevent_isbase = false;
            KRatingWidget::enterEvent(event);
        } else if (kratingwidget_enterevent_callback != nullptr) {
            QEnterEvent* cbval1 = event;

            kratingwidget_enterevent_callback(this, cbval1);
        } else {
            KRatingWidget::enterEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void moveEvent(QMoveEvent* event) override {
        if (kratingwidget_moveevent_isbase) {
            kratingwidget_moveevent_isbase = false;
            KRatingWidget::moveEvent(event);
        } else if (kratingwidget_moveevent_callback != nullptr) {
            QMoveEvent* cbval1 = event;

            kratingwidget_moveevent_callback(this, cbval1);
        } else {
            KRatingWidget::moveEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void closeEvent(QCloseEvent* event) override {
        if (kratingwidget_closeevent_isbase) {
            kratingwidget_closeevent_isbase = false;
            KRatingWidget::closeEvent(event);
        } else if (kratingwidget_closeevent_callback != nullptr) {
            QCloseEvent* cbval1 = event;

            kratingwidget_closeevent_callback(this, cbval1);
        } else {
            KRatingWidget::closeEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void contextMenuEvent(QContextMenuEvent* event) override {
        if (kratingwidget_contextmenuevent_isbase) {
            kratingwidget_contextmenuevent_isbase = false;
            KRatingWidget::contextMenuEvent(event);
        } else if (kratingwidget_contextmenuevent_callback != nullptr) {
            QContextMenuEvent* cbval1 = event;

            kratingwidget_contextmenuevent_callback(this, cbval1);
        } else {
            KRatingWidget::contextMenuEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void tabletEvent(QTabletEvent* event) override {
        if (kratingwidget_tabletevent_isbase) {
            kratingwidget_tabletevent_isbase = false;
            KRatingWidget::tabletEvent(event);
        } else if (kratingwidget_tabletevent_callback != nullptr) {
            QTabletEvent* cbval1 = event;

            kratingwidget_tabletevent_callback(this, cbval1);
        } else {
            KRatingWidget::tabletEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void actionEvent(QActionEvent* event) override {
        if (kratingwidget_actionevent_isbase) {
            kratingwidget_actionevent_isbase = false;
            KRatingWidget::actionEvent(event);
        } else if (kratingwidget_actionevent_callback != nullptr) {
            QActionEvent* cbval1 = event;

            kratingwidget_actionevent_callback(this, cbval1);
        } else {
            KRatingWidget::actionEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragEnterEvent(QDragEnterEvent* event) override {
        if (kratingwidget_dragenterevent_isbase) {
            kratingwidget_dragenterevent_isbase = false;
            KRatingWidget::dragEnterEvent(event);
        } else if (kratingwidget_dragenterevent_callback != nullptr) {
            QDragEnterEvent* cbval1 = event;

            kratingwidget_dragenterevent_callback(this, cbval1);
        } else {
            KRatingWidget::dragEnterEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragMoveEvent(QDragMoveEvent* event) override {
        if (kratingwidget_dragmoveevent_isbase) {
            kratingwidget_dragmoveevent_isbase = false;
            KRatingWidget::dragMoveEvent(event);
        } else if (kratingwidget_dragmoveevent_callback != nullptr) {
            QDragMoveEvent* cbval1 = event;

            kratingwidget_dragmoveevent_callback(this, cbval1);
        } else {
            KRatingWidget::dragMoveEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragLeaveEvent(QDragLeaveEvent* event) override {
        if (kratingwidget_dragleaveevent_isbase) {
            kratingwidget_dragleaveevent_isbase = false;
            KRatingWidget::dragLeaveEvent(event);
        } else if (kratingwidget_dragleaveevent_callback != nullptr) {
            QDragLeaveEvent* cbval1 = event;

            kratingwidget_dragleaveevent_callback(this, cbval1);
        } else {
            KRatingWidget::dragLeaveEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void dropEvent(QDropEvent* event) override {
        if (kratingwidget_dropevent_isbase) {
            kratingwidget_dropevent_isbase = false;
            KRatingWidget::dropEvent(event);
        } else if (kratingwidget_dropevent_callback != nullptr) {
            QDropEvent* cbval1 = event;

            kratingwidget_dropevent_callback(this, cbval1);
        } else {
            KRatingWidget::dropEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void showEvent(QShowEvent* event) override {
        if (kratingwidget_showevent_isbase) {
            kratingwidget_showevent_isbase = false;
            KRatingWidget::showEvent(event);
        } else if (kratingwidget_showevent_callback != nullptr) {
            QShowEvent* cbval1 = event;

            kratingwidget_showevent_callback(this, cbval1);
        } else {
            KRatingWidget::showEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void hideEvent(QHideEvent* event) override {
        if (kratingwidget_hideevent_isbase) {
            kratingwidget_hideevent_isbase = false;
            KRatingWidget::hideEvent(event);
        } else if (kratingwidget_hideevent_callback != nullptr) {
            QHideEvent* cbval1 = event;

            kratingwidget_hideevent_callback(this, cbval1);
        } else {
            KRatingWidget::hideEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool nativeEvent(const QByteArray& eventType, void* message, qintptr* result) override {
        if (kratingwidget_nativeevent_isbase) {
            kratingwidget_nativeevent_isbase = false;
            return KRatingWidget::nativeEvent(eventType, message, result);
        } else if (kratingwidget_nativeevent_callback != nullptr) {
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

            bool callback_ret = kratingwidget_nativeevent_callback(this, cbval1, cbval2, cbval3);
            return callback_ret;
        } else {
            return KRatingWidget::nativeEvent(eventType, message, result);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual int metric(QPaintDevice::PaintDeviceMetric param1) const override {
        if (kratingwidget_metric_isbase) {
            kratingwidget_metric_isbase = false;
            return KRatingWidget::metric(param1);
        } else if (kratingwidget_metric_callback != nullptr) {
            int cbval1 = static_cast<int>(param1);

            int callback_ret = kratingwidget_metric_callback(this, cbval1);
            return static_cast<int>(callback_ret);
        } else {
            return KRatingWidget::metric(param1);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void initPainter(QPainter* painter) const override {
        if (kratingwidget_initpainter_isbase) {
            kratingwidget_initpainter_isbase = false;
            KRatingWidget::initPainter(painter);
        } else if (kratingwidget_initpainter_callback != nullptr) {
            QPainter* cbval1 = painter;

            kratingwidget_initpainter_callback(this, cbval1);
        } else {
            KRatingWidget::initPainter(painter);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QPaintDevice* redirected(QPoint* offset) const override {
        if (kratingwidget_redirected_isbase) {
            kratingwidget_redirected_isbase = false;
            return KRatingWidget::redirected(offset);
        } else if (kratingwidget_redirected_callback != nullptr) {
            QPoint* cbval1 = offset;

            QPaintDevice* callback_ret = kratingwidget_redirected_callback(this, cbval1);
            return callback_ret;
        } else {
            return KRatingWidget::redirected(offset);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QPainter* sharedPainter() const override {
        if (kratingwidget_sharedpainter_isbase) {
            kratingwidget_sharedpainter_isbase = false;
            return KRatingWidget::sharedPainter();
        } else if (kratingwidget_sharedpainter_callback != nullptr) {
            QPainter* callback_ret = kratingwidget_sharedpainter_callback();
            return callback_ret;
        } else {
            return KRatingWidget::sharedPainter();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void inputMethodEvent(QInputMethodEvent* param1) override {
        if (kratingwidget_inputmethodevent_isbase) {
            kratingwidget_inputmethodevent_isbase = false;
            KRatingWidget::inputMethodEvent(param1);
        } else if (kratingwidget_inputmethodevent_callback != nullptr) {
            QInputMethodEvent* cbval1 = param1;

            kratingwidget_inputmethodevent_callback(this, cbval1);
        } else {
            KRatingWidget::inputMethodEvent(param1);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QVariant inputMethodQuery(Qt::InputMethodQuery param1) const override {
        if (kratingwidget_inputmethodquery_isbase) {
            kratingwidget_inputmethodquery_isbase = false;
            return KRatingWidget::inputMethodQuery(param1);
        } else if (kratingwidget_inputmethodquery_callback != nullptr) {
            int cbval1 = static_cast<int>(param1);

            QVariant* callback_ret = kratingwidget_inputmethodquery_callback(this, cbval1);
            return *callback_ret;
        } else {
            return KRatingWidget::inputMethodQuery(param1);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool focusNextPrevChild(bool next) override {
        if (kratingwidget_focusnextprevchild_isbase) {
            kratingwidget_focusnextprevchild_isbase = false;
            return KRatingWidget::focusNextPrevChild(next);
        } else if (kratingwidget_focusnextprevchild_callback != nullptr) {
            bool cbval1 = next;

            bool callback_ret = kratingwidget_focusnextprevchild_callback(this, cbval1);
            return callback_ret;
        } else {
            return KRatingWidget::focusNextPrevChild(next);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* watched, QEvent* event) override {
        if (kratingwidget_eventfilter_isbase) {
            kratingwidget_eventfilter_isbase = false;
            return KRatingWidget::eventFilter(watched, event);
        } else if (kratingwidget_eventfilter_callback != nullptr) {
            QObject* cbval1 = watched;
            QEvent* cbval2 = event;

            bool callback_ret = kratingwidget_eventfilter_callback(this, cbval1, cbval2);
            return callback_ret;
        } else {
            return KRatingWidget::eventFilter(watched, event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (kratingwidget_timerevent_isbase) {
            kratingwidget_timerevent_isbase = false;
            KRatingWidget::timerEvent(event);
        } else if (kratingwidget_timerevent_callback != nullptr) {
            QTimerEvent* cbval1 = event;

            kratingwidget_timerevent_callback(this, cbval1);
        } else {
            KRatingWidget::timerEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (kratingwidget_childevent_isbase) {
            kratingwidget_childevent_isbase = false;
            KRatingWidget::childEvent(event);
        } else if (kratingwidget_childevent_callback != nullptr) {
            QChildEvent* cbval1 = event;

            kratingwidget_childevent_callback(this, cbval1);
        } else {
            KRatingWidget::childEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (kratingwidget_customevent_isbase) {
            kratingwidget_customevent_isbase = false;
            KRatingWidget::customEvent(event);
        } else if (kratingwidget_customevent_callback != nullptr) {
            QEvent* cbval1 = event;

            kratingwidget_customevent_callback(this, cbval1);
        } else {
            KRatingWidget::customEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (kratingwidget_connectnotify_isbase) {
            kratingwidget_connectnotify_isbase = false;
            KRatingWidget::connectNotify(signal);
        } else if (kratingwidget_connectnotify_callback != nullptr) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            kratingwidget_connectnotify_callback(this, cbval1);
        } else {
            KRatingWidget::connectNotify(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (kratingwidget_disconnectnotify_isbase) {
            kratingwidget_disconnectnotify_isbase = false;
            KRatingWidget::disconnectNotify(signal);
        } else if (kratingwidget_disconnectnotify_callback != nullptr) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            kratingwidget_disconnectnotify_callback(this, cbval1);
        } else {
            KRatingWidget::disconnectNotify(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    void drawFrame(QPainter* param1) {
        if (kratingwidget_drawframe_isbase) {
            kratingwidget_drawframe_isbase = false;
            KRatingWidget::drawFrame(param1);
        } else if (kratingwidget_drawframe_callback != nullptr) {
            QPainter* cbval1 = param1;

            kratingwidget_drawframe_callback(this, cbval1);
        } else {
            KRatingWidget::drawFrame(param1);
        }
    }

    // Virtual method for C ABI access and custom callback
    void updateMicroFocus() {
        if (kratingwidget_updatemicrofocus_isbase) {
            kratingwidget_updatemicrofocus_isbase = false;
            KRatingWidget::updateMicroFocus();
        } else if (kratingwidget_updatemicrofocus_callback != nullptr) {
            kratingwidget_updatemicrofocus_callback();
        } else {
            KRatingWidget::updateMicroFocus();
        }
    }

    // Virtual method for C ABI access and custom callback
    void create() {
        if (kratingwidget_create_isbase) {
            kratingwidget_create_isbase = false;
            KRatingWidget::create();
        } else if (kratingwidget_create_callback != nullptr) {
            kratingwidget_create_callback();
        } else {
            KRatingWidget::create();
        }
    }

    // Virtual method for C ABI access and custom callback
    void destroy() {
        if (kratingwidget_destroy_isbase) {
            kratingwidget_destroy_isbase = false;
            KRatingWidget::destroy();
        } else if (kratingwidget_destroy_callback != nullptr) {
            kratingwidget_destroy_callback();
        } else {
            KRatingWidget::destroy();
        }
    }

    // Virtual method for C ABI access and custom callback
    bool focusNextChild() {
        if (kratingwidget_focusnextchild_isbase) {
            kratingwidget_focusnextchild_isbase = false;
            return KRatingWidget::focusNextChild();
        } else if (kratingwidget_focusnextchild_callback != nullptr) {
            bool callback_ret = kratingwidget_focusnextchild_callback();
            return callback_ret;
        } else {
            return KRatingWidget::focusNextChild();
        }
    }

    // Virtual method for C ABI access and custom callback
    bool focusPreviousChild() {
        if (kratingwidget_focuspreviouschild_isbase) {
            kratingwidget_focuspreviouschild_isbase = false;
            return KRatingWidget::focusPreviousChild();
        } else if (kratingwidget_focuspreviouschild_callback != nullptr) {
            bool callback_ret = kratingwidget_focuspreviouschild_callback();
            return callback_ret;
        } else {
            return KRatingWidget::focusPreviousChild();
        }
    }

    // Virtual method for C ABI access and custom callback
    QObject* sender() const {
        if (kratingwidget_sender_isbase) {
            kratingwidget_sender_isbase = false;
            return KRatingWidget::sender();
        } else if (kratingwidget_sender_callback != nullptr) {
            QObject* callback_ret = kratingwidget_sender_callback();
            return callback_ret;
        } else {
            return KRatingWidget::sender();
        }
    }

    // Virtual method for C ABI access and custom callback
    int senderSignalIndex() const {
        if (kratingwidget_sendersignalindex_isbase) {
            kratingwidget_sendersignalindex_isbase = false;
            return KRatingWidget::senderSignalIndex();
        } else if (kratingwidget_sendersignalindex_callback != nullptr) {
            int callback_ret = kratingwidget_sendersignalindex_callback();
            return static_cast<int>(callback_ret);
        } else {
            return KRatingWidget::senderSignalIndex();
        }
    }

    // Virtual method for C ABI access and custom callback
    int receivers(const char* signal) const {
        if (kratingwidget_receivers_isbase) {
            kratingwidget_receivers_isbase = false;
            return KRatingWidget::receivers(signal);
        } else if (kratingwidget_receivers_callback != nullptr) {
            const char* cbval1 = (const char*)signal;

            int callback_ret = kratingwidget_receivers_callback(this, cbval1);
            return static_cast<int>(callback_ret);
        } else {
            return KRatingWidget::receivers(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    bool isSignalConnected(const QMetaMethod& signal) const {
        if (kratingwidget_issignalconnected_isbase) {
            kratingwidget_issignalconnected_isbase = false;
            return KRatingWidget::isSignalConnected(signal);
        } else if (kratingwidget_issignalconnected_callback != nullptr) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            bool callback_ret = kratingwidget_issignalconnected_callback(this, cbval1);
            return callback_ret;
        } else {
            return KRatingWidget::isSignalConnected(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    double getDecodedMetricF(QPaintDevice::PaintDeviceMetric metricA, QPaintDevice::PaintDeviceMetric metricB) const {
        if (kratingwidget_getdecodedmetricf_isbase) {
            kratingwidget_getdecodedmetricf_isbase = false;
            return KRatingWidget::getDecodedMetricF(metricA, metricB);
        } else if (kratingwidget_getdecodedmetricf_callback != nullptr) {
            int cbval1 = static_cast<int>(metricA);
            int cbval2 = static_cast<int>(metricB);

            double callback_ret = kratingwidget_getdecodedmetricf_callback(this, cbval1, cbval2);
            return static_cast<double>(callback_ret);
        } else {
            return KRatingWidget::getDecodedMetricF(metricA, metricB);
        }
    }

    // Friend functions
    friend void KRatingWidget_MousePressEvent(KRatingWidget* self, QMouseEvent* e);
    friend void KRatingWidget_QBaseMousePressEvent(KRatingWidget* self, QMouseEvent* e);
    friend void KRatingWidget_MouseMoveEvent(KRatingWidget* self, QMouseEvent* e);
    friend void KRatingWidget_QBaseMouseMoveEvent(KRatingWidget* self, QMouseEvent* e);
    friend void KRatingWidget_LeaveEvent(KRatingWidget* self, QEvent* e);
    friend void KRatingWidget_QBaseLeaveEvent(KRatingWidget* self, QEvent* e);
    friend void KRatingWidget_PaintEvent(KRatingWidget* self, QPaintEvent* e);
    friend void KRatingWidget_QBasePaintEvent(KRatingWidget* self, QPaintEvent* e);
    friend void KRatingWidget_ResizeEvent(KRatingWidget* self, QResizeEvent* e);
    friend void KRatingWidget_QBaseResizeEvent(KRatingWidget* self, QResizeEvent* e);
    friend bool KRatingWidget_Event(KRatingWidget* self, QEvent* e);
    friend bool KRatingWidget_QBaseEvent(KRatingWidget* self, QEvent* e);
    friend void KRatingWidget_ChangeEvent(KRatingWidget* self, QEvent* param1);
    friend void KRatingWidget_QBaseChangeEvent(KRatingWidget* self, QEvent* param1);
    friend void KRatingWidget_InitStyleOption(const KRatingWidget* self, QStyleOptionFrame* option);
    friend void KRatingWidget_QBaseInitStyleOption(const KRatingWidget* self, QStyleOptionFrame* option);
    friend void KRatingWidget_MouseReleaseEvent(KRatingWidget* self, QMouseEvent* event);
    friend void KRatingWidget_QBaseMouseReleaseEvent(KRatingWidget* self, QMouseEvent* event);
    friend void KRatingWidget_MouseDoubleClickEvent(KRatingWidget* self, QMouseEvent* event);
    friend void KRatingWidget_QBaseMouseDoubleClickEvent(KRatingWidget* self, QMouseEvent* event);
    friend void KRatingWidget_WheelEvent(KRatingWidget* self, QWheelEvent* event);
    friend void KRatingWidget_QBaseWheelEvent(KRatingWidget* self, QWheelEvent* event);
    friend void KRatingWidget_KeyPressEvent(KRatingWidget* self, QKeyEvent* event);
    friend void KRatingWidget_QBaseKeyPressEvent(KRatingWidget* self, QKeyEvent* event);
    friend void KRatingWidget_KeyReleaseEvent(KRatingWidget* self, QKeyEvent* event);
    friend void KRatingWidget_QBaseKeyReleaseEvent(KRatingWidget* self, QKeyEvent* event);
    friend void KRatingWidget_FocusInEvent(KRatingWidget* self, QFocusEvent* event);
    friend void KRatingWidget_QBaseFocusInEvent(KRatingWidget* self, QFocusEvent* event);
    friend void KRatingWidget_FocusOutEvent(KRatingWidget* self, QFocusEvent* event);
    friend void KRatingWidget_QBaseFocusOutEvent(KRatingWidget* self, QFocusEvent* event);
    friend void KRatingWidget_EnterEvent(KRatingWidget* self, QEnterEvent* event);
    friend void KRatingWidget_QBaseEnterEvent(KRatingWidget* self, QEnterEvent* event);
    friend void KRatingWidget_MoveEvent(KRatingWidget* self, QMoveEvent* event);
    friend void KRatingWidget_QBaseMoveEvent(KRatingWidget* self, QMoveEvent* event);
    friend void KRatingWidget_CloseEvent(KRatingWidget* self, QCloseEvent* event);
    friend void KRatingWidget_QBaseCloseEvent(KRatingWidget* self, QCloseEvent* event);
    friend void KRatingWidget_ContextMenuEvent(KRatingWidget* self, QContextMenuEvent* event);
    friend void KRatingWidget_QBaseContextMenuEvent(KRatingWidget* self, QContextMenuEvent* event);
    friend void KRatingWidget_TabletEvent(KRatingWidget* self, QTabletEvent* event);
    friend void KRatingWidget_QBaseTabletEvent(KRatingWidget* self, QTabletEvent* event);
    friend void KRatingWidget_ActionEvent(KRatingWidget* self, QActionEvent* event);
    friend void KRatingWidget_QBaseActionEvent(KRatingWidget* self, QActionEvent* event);
    friend void KRatingWidget_DragEnterEvent(KRatingWidget* self, QDragEnterEvent* event);
    friend void KRatingWidget_QBaseDragEnterEvent(KRatingWidget* self, QDragEnterEvent* event);
    friend void KRatingWidget_DragMoveEvent(KRatingWidget* self, QDragMoveEvent* event);
    friend void KRatingWidget_QBaseDragMoveEvent(KRatingWidget* self, QDragMoveEvent* event);
    friend void KRatingWidget_DragLeaveEvent(KRatingWidget* self, QDragLeaveEvent* event);
    friend void KRatingWidget_QBaseDragLeaveEvent(KRatingWidget* self, QDragLeaveEvent* event);
    friend void KRatingWidget_DropEvent(KRatingWidget* self, QDropEvent* event);
    friend void KRatingWidget_QBaseDropEvent(KRatingWidget* self, QDropEvent* event);
    friend void KRatingWidget_ShowEvent(KRatingWidget* self, QShowEvent* event);
    friend void KRatingWidget_QBaseShowEvent(KRatingWidget* self, QShowEvent* event);
    friend void KRatingWidget_HideEvent(KRatingWidget* self, QHideEvent* event);
    friend void KRatingWidget_QBaseHideEvent(KRatingWidget* self, QHideEvent* event);
    friend bool KRatingWidget_NativeEvent(KRatingWidget* self, const libqt_string eventType, void* message, intptr_t* result);
    friend bool KRatingWidget_QBaseNativeEvent(KRatingWidget* self, const libqt_string eventType, void* message, intptr_t* result);
    friend int KRatingWidget_Metric(const KRatingWidget* self, int param1);
    friend int KRatingWidget_QBaseMetric(const KRatingWidget* self, int param1);
    friend void KRatingWidget_InitPainter(const KRatingWidget* self, QPainter* painter);
    friend void KRatingWidget_QBaseInitPainter(const KRatingWidget* self, QPainter* painter);
    friend QPaintDevice* KRatingWidget_Redirected(const KRatingWidget* self, QPoint* offset);
    friend QPaintDevice* KRatingWidget_QBaseRedirected(const KRatingWidget* self, QPoint* offset);
    friend QPainter* KRatingWidget_SharedPainter(const KRatingWidget* self);
    friend QPainter* KRatingWidget_QBaseSharedPainter(const KRatingWidget* self);
    friend void KRatingWidget_InputMethodEvent(KRatingWidget* self, QInputMethodEvent* param1);
    friend void KRatingWidget_QBaseInputMethodEvent(KRatingWidget* self, QInputMethodEvent* param1);
    friend bool KRatingWidget_FocusNextPrevChild(KRatingWidget* self, bool next);
    friend bool KRatingWidget_QBaseFocusNextPrevChild(KRatingWidget* self, bool next);
    friend void KRatingWidget_TimerEvent(KRatingWidget* self, QTimerEvent* event);
    friend void KRatingWidget_QBaseTimerEvent(KRatingWidget* self, QTimerEvent* event);
    friend void KRatingWidget_ChildEvent(KRatingWidget* self, QChildEvent* event);
    friend void KRatingWidget_QBaseChildEvent(KRatingWidget* self, QChildEvent* event);
    friend void KRatingWidget_CustomEvent(KRatingWidget* self, QEvent* event);
    friend void KRatingWidget_QBaseCustomEvent(KRatingWidget* self, QEvent* event);
    friend void KRatingWidget_ConnectNotify(KRatingWidget* self, const QMetaMethod* signal);
    friend void KRatingWidget_QBaseConnectNotify(KRatingWidget* self, const QMetaMethod* signal);
    friend void KRatingWidget_DisconnectNotify(KRatingWidget* self, const QMetaMethod* signal);
    friend void KRatingWidget_QBaseDisconnectNotify(KRatingWidget* self, const QMetaMethod* signal);
    friend void KRatingWidget_DrawFrame(KRatingWidget* self, QPainter* param1);
    friend void KRatingWidget_QBaseDrawFrame(KRatingWidget* self, QPainter* param1);
    friend void KRatingWidget_UpdateMicroFocus(KRatingWidget* self);
    friend void KRatingWidget_QBaseUpdateMicroFocus(KRatingWidget* self);
    friend void KRatingWidget_Create(KRatingWidget* self);
    friend void KRatingWidget_QBaseCreate(KRatingWidget* self);
    friend void KRatingWidget_Destroy(KRatingWidget* self);
    friend void KRatingWidget_QBaseDestroy(KRatingWidget* self);
    friend bool KRatingWidget_FocusNextChild(KRatingWidget* self);
    friend bool KRatingWidget_QBaseFocusNextChild(KRatingWidget* self);
    friend bool KRatingWidget_FocusPreviousChild(KRatingWidget* self);
    friend bool KRatingWidget_QBaseFocusPreviousChild(KRatingWidget* self);
    friend QObject* KRatingWidget_Sender(const KRatingWidget* self);
    friend QObject* KRatingWidget_QBaseSender(const KRatingWidget* self);
    friend int KRatingWidget_SenderSignalIndex(const KRatingWidget* self);
    friend int KRatingWidget_QBaseSenderSignalIndex(const KRatingWidget* self);
    friend int KRatingWidget_Receivers(const KRatingWidget* self, const char* signal);
    friend int KRatingWidget_QBaseReceivers(const KRatingWidget* self, const char* signal);
    friend bool KRatingWidget_IsSignalConnected(const KRatingWidget* self, const QMetaMethod* signal);
    friend bool KRatingWidget_QBaseIsSignalConnected(const KRatingWidget* self, const QMetaMethod* signal);
    friend double KRatingWidget_GetDecodedMetricF(const KRatingWidget* self, int metricA, int metricB);
    friend double KRatingWidget_QBaseGetDecodedMetricF(const KRatingWidget* self, int metricA, int metricB);
};

#endif
