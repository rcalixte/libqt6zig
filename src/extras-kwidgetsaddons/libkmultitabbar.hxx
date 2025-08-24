#pragma once
#ifndef SRC_EXTRAS_KWIDGETSADDONSC_LIBVIRTUALKMULTITABBAR_H
#define SRC_EXTRAS_KWIDGETSADDONSC_LIBVIRTUALKMULTITABBAR_H

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

// This class is a subclass of KMultiTabBar so that we can call protected methods
class VirtualKMultiTabBar final : public KMultiTabBar {

  public:
    // Virtual class boolean flag
    bool isVirtualKMultiTabBar = true;

    // Virtual class public types (including callbacks)
    using KMultiTabBar_Metacall_Callback = int (*)(KMultiTabBar*, int, int, void**);
    using KMultiTabBar_FontChange_Callback = void (*)(KMultiTabBar*, QFont*);
    using KMultiTabBar_PaintEvent_Callback = void (*)(KMultiTabBar*, QPaintEvent*);
    using KMultiTabBar_DevType_Callback = int (*)();
    using KMultiTabBar_SetVisible_Callback = void (*)(KMultiTabBar*, bool);
    using KMultiTabBar_SizeHint_Callback = QSize* (*)();
    using KMultiTabBar_MinimumSizeHint_Callback = QSize* (*)();
    using KMultiTabBar_HeightForWidth_Callback = int (*)(const KMultiTabBar*, int);
    using KMultiTabBar_HasHeightForWidth_Callback = bool (*)();
    using KMultiTabBar_PaintEngine_Callback = QPaintEngine* (*)();
    using KMultiTabBar_Event_Callback = bool (*)(KMultiTabBar*, QEvent*);
    using KMultiTabBar_MousePressEvent_Callback = void (*)(KMultiTabBar*, QMouseEvent*);
    using KMultiTabBar_MouseReleaseEvent_Callback = void (*)(KMultiTabBar*, QMouseEvent*);
    using KMultiTabBar_MouseDoubleClickEvent_Callback = void (*)(KMultiTabBar*, QMouseEvent*);
    using KMultiTabBar_MouseMoveEvent_Callback = void (*)(KMultiTabBar*, QMouseEvent*);
    using KMultiTabBar_WheelEvent_Callback = void (*)(KMultiTabBar*, QWheelEvent*);
    using KMultiTabBar_KeyPressEvent_Callback = void (*)(KMultiTabBar*, QKeyEvent*);
    using KMultiTabBar_KeyReleaseEvent_Callback = void (*)(KMultiTabBar*, QKeyEvent*);
    using KMultiTabBar_FocusInEvent_Callback = void (*)(KMultiTabBar*, QFocusEvent*);
    using KMultiTabBar_FocusOutEvent_Callback = void (*)(KMultiTabBar*, QFocusEvent*);
    using KMultiTabBar_EnterEvent_Callback = void (*)(KMultiTabBar*, QEnterEvent*);
    using KMultiTabBar_LeaveEvent_Callback = void (*)(KMultiTabBar*, QEvent*);
    using KMultiTabBar_MoveEvent_Callback = void (*)(KMultiTabBar*, QMoveEvent*);
    using KMultiTabBar_ResizeEvent_Callback = void (*)(KMultiTabBar*, QResizeEvent*);
    using KMultiTabBar_CloseEvent_Callback = void (*)(KMultiTabBar*, QCloseEvent*);
    using KMultiTabBar_ContextMenuEvent_Callback = void (*)(KMultiTabBar*, QContextMenuEvent*);
    using KMultiTabBar_TabletEvent_Callback = void (*)(KMultiTabBar*, QTabletEvent*);
    using KMultiTabBar_ActionEvent_Callback = void (*)(KMultiTabBar*, QActionEvent*);
    using KMultiTabBar_DragEnterEvent_Callback = void (*)(KMultiTabBar*, QDragEnterEvent*);
    using KMultiTabBar_DragMoveEvent_Callback = void (*)(KMultiTabBar*, QDragMoveEvent*);
    using KMultiTabBar_DragLeaveEvent_Callback = void (*)(KMultiTabBar*, QDragLeaveEvent*);
    using KMultiTabBar_DropEvent_Callback = void (*)(KMultiTabBar*, QDropEvent*);
    using KMultiTabBar_ShowEvent_Callback = void (*)(KMultiTabBar*, QShowEvent*);
    using KMultiTabBar_HideEvent_Callback = void (*)(KMultiTabBar*, QHideEvent*);
    using KMultiTabBar_NativeEvent_Callback = bool (*)(KMultiTabBar*, libqt_string, void*, intptr_t*);
    using KMultiTabBar_ChangeEvent_Callback = void (*)(KMultiTabBar*, QEvent*);
    using KMultiTabBar_Metric_Callback = int (*)(const KMultiTabBar*, int);
    using KMultiTabBar_InitPainter_Callback = void (*)(const KMultiTabBar*, QPainter*);
    using KMultiTabBar_Redirected_Callback = QPaintDevice* (*)(const KMultiTabBar*, QPoint*);
    using KMultiTabBar_SharedPainter_Callback = QPainter* (*)();
    using KMultiTabBar_InputMethodEvent_Callback = void (*)(KMultiTabBar*, QInputMethodEvent*);
    using KMultiTabBar_InputMethodQuery_Callback = QVariant* (*)(const KMultiTabBar*, int);
    using KMultiTabBar_FocusNextPrevChild_Callback = bool (*)(KMultiTabBar*, bool);
    using KMultiTabBar_EventFilter_Callback = bool (*)(KMultiTabBar*, QObject*, QEvent*);
    using KMultiTabBar_TimerEvent_Callback = void (*)(KMultiTabBar*, QTimerEvent*);
    using KMultiTabBar_ChildEvent_Callback = void (*)(KMultiTabBar*, QChildEvent*);
    using KMultiTabBar_CustomEvent_Callback = void (*)(KMultiTabBar*, QEvent*);
    using KMultiTabBar_ConnectNotify_Callback = void (*)(KMultiTabBar*, QMetaMethod*);
    using KMultiTabBar_DisconnectNotify_Callback = void (*)(KMultiTabBar*, QMetaMethod*);
    using KMultiTabBar_UpdateSeparator_Callback = void (*)();
    using KMultiTabBar_UpdateMicroFocus_Callback = void (*)();
    using KMultiTabBar_Create_Callback = void (*)();
    using KMultiTabBar_Destroy_Callback = void (*)();
    using KMultiTabBar_FocusNextChild_Callback = bool (*)();
    using KMultiTabBar_FocusPreviousChild_Callback = bool (*)();
    using KMultiTabBar_Sender_Callback = QObject* (*)();
    using KMultiTabBar_SenderSignalIndex_Callback = int (*)();
    using KMultiTabBar_Receivers_Callback = int (*)(const KMultiTabBar*, const char*);
    using KMultiTabBar_IsSignalConnected_Callback = bool (*)(const KMultiTabBar*, QMetaMethod*);
    using KMultiTabBar_GetDecodedMetricF_Callback = double (*)(const KMultiTabBar*, int, int);

  protected:
    // Instance callback storage
    KMultiTabBar_Metacall_Callback kmultitabbar_metacall_callback = nullptr;
    KMultiTabBar_FontChange_Callback kmultitabbar_fontchange_callback = nullptr;
    KMultiTabBar_PaintEvent_Callback kmultitabbar_paintevent_callback = nullptr;
    KMultiTabBar_DevType_Callback kmultitabbar_devtype_callback = nullptr;
    KMultiTabBar_SetVisible_Callback kmultitabbar_setvisible_callback = nullptr;
    KMultiTabBar_SizeHint_Callback kmultitabbar_sizehint_callback = nullptr;
    KMultiTabBar_MinimumSizeHint_Callback kmultitabbar_minimumsizehint_callback = nullptr;
    KMultiTabBar_HeightForWidth_Callback kmultitabbar_heightforwidth_callback = nullptr;
    KMultiTabBar_HasHeightForWidth_Callback kmultitabbar_hasheightforwidth_callback = nullptr;
    KMultiTabBar_PaintEngine_Callback kmultitabbar_paintengine_callback = nullptr;
    KMultiTabBar_Event_Callback kmultitabbar_event_callback = nullptr;
    KMultiTabBar_MousePressEvent_Callback kmultitabbar_mousepressevent_callback = nullptr;
    KMultiTabBar_MouseReleaseEvent_Callback kmultitabbar_mousereleaseevent_callback = nullptr;
    KMultiTabBar_MouseDoubleClickEvent_Callback kmultitabbar_mousedoubleclickevent_callback = nullptr;
    KMultiTabBar_MouseMoveEvent_Callback kmultitabbar_mousemoveevent_callback = nullptr;
    KMultiTabBar_WheelEvent_Callback kmultitabbar_wheelevent_callback = nullptr;
    KMultiTabBar_KeyPressEvent_Callback kmultitabbar_keypressevent_callback = nullptr;
    KMultiTabBar_KeyReleaseEvent_Callback kmultitabbar_keyreleaseevent_callback = nullptr;
    KMultiTabBar_FocusInEvent_Callback kmultitabbar_focusinevent_callback = nullptr;
    KMultiTabBar_FocusOutEvent_Callback kmultitabbar_focusoutevent_callback = nullptr;
    KMultiTabBar_EnterEvent_Callback kmultitabbar_enterevent_callback = nullptr;
    KMultiTabBar_LeaveEvent_Callback kmultitabbar_leaveevent_callback = nullptr;
    KMultiTabBar_MoveEvent_Callback kmultitabbar_moveevent_callback = nullptr;
    KMultiTabBar_ResizeEvent_Callback kmultitabbar_resizeevent_callback = nullptr;
    KMultiTabBar_CloseEvent_Callback kmultitabbar_closeevent_callback = nullptr;
    KMultiTabBar_ContextMenuEvent_Callback kmultitabbar_contextmenuevent_callback = nullptr;
    KMultiTabBar_TabletEvent_Callback kmultitabbar_tabletevent_callback = nullptr;
    KMultiTabBar_ActionEvent_Callback kmultitabbar_actionevent_callback = nullptr;
    KMultiTabBar_DragEnterEvent_Callback kmultitabbar_dragenterevent_callback = nullptr;
    KMultiTabBar_DragMoveEvent_Callback kmultitabbar_dragmoveevent_callback = nullptr;
    KMultiTabBar_DragLeaveEvent_Callback kmultitabbar_dragleaveevent_callback = nullptr;
    KMultiTabBar_DropEvent_Callback kmultitabbar_dropevent_callback = nullptr;
    KMultiTabBar_ShowEvent_Callback kmultitabbar_showevent_callback = nullptr;
    KMultiTabBar_HideEvent_Callback kmultitabbar_hideevent_callback = nullptr;
    KMultiTabBar_NativeEvent_Callback kmultitabbar_nativeevent_callback = nullptr;
    KMultiTabBar_ChangeEvent_Callback kmultitabbar_changeevent_callback = nullptr;
    KMultiTabBar_Metric_Callback kmultitabbar_metric_callback = nullptr;
    KMultiTabBar_InitPainter_Callback kmultitabbar_initpainter_callback = nullptr;
    KMultiTabBar_Redirected_Callback kmultitabbar_redirected_callback = nullptr;
    KMultiTabBar_SharedPainter_Callback kmultitabbar_sharedpainter_callback = nullptr;
    KMultiTabBar_InputMethodEvent_Callback kmultitabbar_inputmethodevent_callback = nullptr;
    KMultiTabBar_InputMethodQuery_Callback kmultitabbar_inputmethodquery_callback = nullptr;
    KMultiTabBar_FocusNextPrevChild_Callback kmultitabbar_focusnextprevchild_callback = nullptr;
    KMultiTabBar_EventFilter_Callback kmultitabbar_eventfilter_callback = nullptr;
    KMultiTabBar_TimerEvent_Callback kmultitabbar_timerevent_callback = nullptr;
    KMultiTabBar_ChildEvent_Callback kmultitabbar_childevent_callback = nullptr;
    KMultiTabBar_CustomEvent_Callback kmultitabbar_customevent_callback = nullptr;
    KMultiTabBar_ConnectNotify_Callback kmultitabbar_connectnotify_callback = nullptr;
    KMultiTabBar_DisconnectNotify_Callback kmultitabbar_disconnectnotify_callback = nullptr;
    KMultiTabBar_UpdateSeparator_Callback kmultitabbar_updateseparator_callback = nullptr;
    KMultiTabBar_UpdateMicroFocus_Callback kmultitabbar_updatemicrofocus_callback = nullptr;
    KMultiTabBar_Create_Callback kmultitabbar_create_callback = nullptr;
    KMultiTabBar_Destroy_Callback kmultitabbar_destroy_callback = nullptr;
    KMultiTabBar_FocusNextChild_Callback kmultitabbar_focusnextchild_callback = nullptr;
    KMultiTabBar_FocusPreviousChild_Callback kmultitabbar_focuspreviouschild_callback = nullptr;
    KMultiTabBar_Sender_Callback kmultitabbar_sender_callback = nullptr;
    KMultiTabBar_SenderSignalIndex_Callback kmultitabbar_sendersignalindex_callback = nullptr;
    KMultiTabBar_Receivers_Callback kmultitabbar_receivers_callback = nullptr;
    KMultiTabBar_IsSignalConnected_Callback kmultitabbar_issignalconnected_callback = nullptr;
    KMultiTabBar_GetDecodedMetricF_Callback kmultitabbar_getdecodedmetricf_callback = nullptr;

    // Instance base flags
    mutable bool kmultitabbar_metacall_isbase = false;
    mutable bool kmultitabbar_fontchange_isbase = false;
    mutable bool kmultitabbar_paintevent_isbase = false;
    mutable bool kmultitabbar_devtype_isbase = false;
    mutable bool kmultitabbar_setvisible_isbase = false;
    mutable bool kmultitabbar_sizehint_isbase = false;
    mutable bool kmultitabbar_minimumsizehint_isbase = false;
    mutable bool kmultitabbar_heightforwidth_isbase = false;
    mutable bool kmultitabbar_hasheightforwidth_isbase = false;
    mutable bool kmultitabbar_paintengine_isbase = false;
    mutable bool kmultitabbar_event_isbase = false;
    mutable bool kmultitabbar_mousepressevent_isbase = false;
    mutable bool kmultitabbar_mousereleaseevent_isbase = false;
    mutable bool kmultitabbar_mousedoubleclickevent_isbase = false;
    mutable bool kmultitabbar_mousemoveevent_isbase = false;
    mutable bool kmultitabbar_wheelevent_isbase = false;
    mutable bool kmultitabbar_keypressevent_isbase = false;
    mutable bool kmultitabbar_keyreleaseevent_isbase = false;
    mutable bool kmultitabbar_focusinevent_isbase = false;
    mutable bool kmultitabbar_focusoutevent_isbase = false;
    mutable bool kmultitabbar_enterevent_isbase = false;
    mutable bool kmultitabbar_leaveevent_isbase = false;
    mutable bool kmultitabbar_moveevent_isbase = false;
    mutable bool kmultitabbar_resizeevent_isbase = false;
    mutable bool kmultitabbar_closeevent_isbase = false;
    mutable bool kmultitabbar_contextmenuevent_isbase = false;
    mutable bool kmultitabbar_tabletevent_isbase = false;
    mutable bool kmultitabbar_actionevent_isbase = false;
    mutable bool kmultitabbar_dragenterevent_isbase = false;
    mutable bool kmultitabbar_dragmoveevent_isbase = false;
    mutable bool kmultitabbar_dragleaveevent_isbase = false;
    mutable bool kmultitabbar_dropevent_isbase = false;
    mutable bool kmultitabbar_showevent_isbase = false;
    mutable bool kmultitabbar_hideevent_isbase = false;
    mutable bool kmultitabbar_nativeevent_isbase = false;
    mutable bool kmultitabbar_changeevent_isbase = false;
    mutable bool kmultitabbar_metric_isbase = false;
    mutable bool kmultitabbar_initpainter_isbase = false;
    mutable bool kmultitabbar_redirected_isbase = false;
    mutable bool kmultitabbar_sharedpainter_isbase = false;
    mutable bool kmultitabbar_inputmethodevent_isbase = false;
    mutable bool kmultitabbar_inputmethodquery_isbase = false;
    mutable bool kmultitabbar_focusnextprevchild_isbase = false;
    mutable bool kmultitabbar_eventfilter_isbase = false;
    mutable bool kmultitabbar_timerevent_isbase = false;
    mutable bool kmultitabbar_childevent_isbase = false;
    mutable bool kmultitabbar_customevent_isbase = false;
    mutable bool kmultitabbar_connectnotify_isbase = false;
    mutable bool kmultitabbar_disconnectnotify_isbase = false;
    mutable bool kmultitabbar_updateseparator_isbase = false;
    mutable bool kmultitabbar_updatemicrofocus_isbase = false;
    mutable bool kmultitabbar_create_isbase = false;
    mutable bool kmultitabbar_destroy_isbase = false;
    mutable bool kmultitabbar_focusnextchild_isbase = false;
    mutable bool kmultitabbar_focuspreviouschild_isbase = false;
    mutable bool kmultitabbar_sender_isbase = false;
    mutable bool kmultitabbar_sendersignalindex_isbase = false;
    mutable bool kmultitabbar_receivers_isbase = false;
    mutable bool kmultitabbar_issignalconnected_isbase = false;
    mutable bool kmultitabbar_getdecodedmetricf_isbase = false;

  public:
    VirtualKMultiTabBar(QWidget* parent) : KMultiTabBar(parent) {};
    VirtualKMultiTabBar() : KMultiTabBar() {};
    VirtualKMultiTabBar(KMultiTabBar::KMultiTabBarPosition pos) : KMultiTabBar(pos) {};
    VirtualKMultiTabBar(KMultiTabBar::KMultiTabBarPosition pos, QWidget* parent) : KMultiTabBar(pos, parent) {};

    ~VirtualKMultiTabBar() {
        kmultitabbar_metacall_callback = nullptr;
        kmultitabbar_fontchange_callback = nullptr;
        kmultitabbar_paintevent_callback = nullptr;
        kmultitabbar_devtype_callback = nullptr;
        kmultitabbar_setvisible_callback = nullptr;
        kmultitabbar_sizehint_callback = nullptr;
        kmultitabbar_minimumsizehint_callback = nullptr;
        kmultitabbar_heightforwidth_callback = nullptr;
        kmultitabbar_hasheightforwidth_callback = nullptr;
        kmultitabbar_paintengine_callback = nullptr;
        kmultitabbar_event_callback = nullptr;
        kmultitabbar_mousepressevent_callback = nullptr;
        kmultitabbar_mousereleaseevent_callback = nullptr;
        kmultitabbar_mousedoubleclickevent_callback = nullptr;
        kmultitabbar_mousemoveevent_callback = nullptr;
        kmultitabbar_wheelevent_callback = nullptr;
        kmultitabbar_keypressevent_callback = nullptr;
        kmultitabbar_keyreleaseevent_callback = nullptr;
        kmultitabbar_focusinevent_callback = nullptr;
        kmultitabbar_focusoutevent_callback = nullptr;
        kmultitabbar_enterevent_callback = nullptr;
        kmultitabbar_leaveevent_callback = nullptr;
        kmultitabbar_moveevent_callback = nullptr;
        kmultitabbar_resizeevent_callback = nullptr;
        kmultitabbar_closeevent_callback = nullptr;
        kmultitabbar_contextmenuevent_callback = nullptr;
        kmultitabbar_tabletevent_callback = nullptr;
        kmultitabbar_actionevent_callback = nullptr;
        kmultitabbar_dragenterevent_callback = nullptr;
        kmultitabbar_dragmoveevent_callback = nullptr;
        kmultitabbar_dragleaveevent_callback = nullptr;
        kmultitabbar_dropevent_callback = nullptr;
        kmultitabbar_showevent_callback = nullptr;
        kmultitabbar_hideevent_callback = nullptr;
        kmultitabbar_nativeevent_callback = nullptr;
        kmultitabbar_changeevent_callback = nullptr;
        kmultitabbar_metric_callback = nullptr;
        kmultitabbar_initpainter_callback = nullptr;
        kmultitabbar_redirected_callback = nullptr;
        kmultitabbar_sharedpainter_callback = nullptr;
        kmultitabbar_inputmethodevent_callback = nullptr;
        kmultitabbar_inputmethodquery_callback = nullptr;
        kmultitabbar_focusnextprevchild_callback = nullptr;
        kmultitabbar_eventfilter_callback = nullptr;
        kmultitabbar_timerevent_callback = nullptr;
        kmultitabbar_childevent_callback = nullptr;
        kmultitabbar_customevent_callback = nullptr;
        kmultitabbar_connectnotify_callback = nullptr;
        kmultitabbar_disconnectnotify_callback = nullptr;
        kmultitabbar_updateseparator_callback = nullptr;
        kmultitabbar_updatemicrofocus_callback = nullptr;
        kmultitabbar_create_callback = nullptr;
        kmultitabbar_destroy_callback = nullptr;
        kmultitabbar_focusnextchild_callback = nullptr;
        kmultitabbar_focuspreviouschild_callback = nullptr;
        kmultitabbar_sender_callback = nullptr;
        kmultitabbar_sendersignalindex_callback = nullptr;
        kmultitabbar_receivers_callback = nullptr;
        kmultitabbar_issignalconnected_callback = nullptr;
        kmultitabbar_getdecodedmetricf_callback = nullptr;
    }

    // Callback setters
    inline void setKMultiTabBar_Metacall_Callback(KMultiTabBar_Metacall_Callback cb) { kmultitabbar_metacall_callback = cb; }
    inline void setKMultiTabBar_FontChange_Callback(KMultiTabBar_FontChange_Callback cb) { kmultitabbar_fontchange_callback = cb; }
    inline void setKMultiTabBar_PaintEvent_Callback(KMultiTabBar_PaintEvent_Callback cb) { kmultitabbar_paintevent_callback = cb; }
    inline void setKMultiTabBar_DevType_Callback(KMultiTabBar_DevType_Callback cb) { kmultitabbar_devtype_callback = cb; }
    inline void setKMultiTabBar_SetVisible_Callback(KMultiTabBar_SetVisible_Callback cb) { kmultitabbar_setvisible_callback = cb; }
    inline void setKMultiTabBar_SizeHint_Callback(KMultiTabBar_SizeHint_Callback cb) { kmultitabbar_sizehint_callback = cb; }
    inline void setKMultiTabBar_MinimumSizeHint_Callback(KMultiTabBar_MinimumSizeHint_Callback cb) { kmultitabbar_minimumsizehint_callback = cb; }
    inline void setKMultiTabBar_HeightForWidth_Callback(KMultiTabBar_HeightForWidth_Callback cb) { kmultitabbar_heightforwidth_callback = cb; }
    inline void setKMultiTabBar_HasHeightForWidth_Callback(KMultiTabBar_HasHeightForWidth_Callback cb) { kmultitabbar_hasheightforwidth_callback = cb; }
    inline void setKMultiTabBar_PaintEngine_Callback(KMultiTabBar_PaintEngine_Callback cb) { kmultitabbar_paintengine_callback = cb; }
    inline void setKMultiTabBar_Event_Callback(KMultiTabBar_Event_Callback cb) { kmultitabbar_event_callback = cb; }
    inline void setKMultiTabBar_MousePressEvent_Callback(KMultiTabBar_MousePressEvent_Callback cb) { kmultitabbar_mousepressevent_callback = cb; }
    inline void setKMultiTabBar_MouseReleaseEvent_Callback(KMultiTabBar_MouseReleaseEvent_Callback cb) { kmultitabbar_mousereleaseevent_callback = cb; }
    inline void setKMultiTabBar_MouseDoubleClickEvent_Callback(KMultiTabBar_MouseDoubleClickEvent_Callback cb) { kmultitabbar_mousedoubleclickevent_callback = cb; }
    inline void setKMultiTabBar_MouseMoveEvent_Callback(KMultiTabBar_MouseMoveEvent_Callback cb) { kmultitabbar_mousemoveevent_callback = cb; }
    inline void setKMultiTabBar_WheelEvent_Callback(KMultiTabBar_WheelEvent_Callback cb) { kmultitabbar_wheelevent_callback = cb; }
    inline void setKMultiTabBar_KeyPressEvent_Callback(KMultiTabBar_KeyPressEvent_Callback cb) { kmultitabbar_keypressevent_callback = cb; }
    inline void setKMultiTabBar_KeyReleaseEvent_Callback(KMultiTabBar_KeyReleaseEvent_Callback cb) { kmultitabbar_keyreleaseevent_callback = cb; }
    inline void setKMultiTabBar_FocusInEvent_Callback(KMultiTabBar_FocusInEvent_Callback cb) { kmultitabbar_focusinevent_callback = cb; }
    inline void setKMultiTabBar_FocusOutEvent_Callback(KMultiTabBar_FocusOutEvent_Callback cb) { kmultitabbar_focusoutevent_callback = cb; }
    inline void setKMultiTabBar_EnterEvent_Callback(KMultiTabBar_EnterEvent_Callback cb) { kmultitabbar_enterevent_callback = cb; }
    inline void setKMultiTabBar_LeaveEvent_Callback(KMultiTabBar_LeaveEvent_Callback cb) { kmultitabbar_leaveevent_callback = cb; }
    inline void setKMultiTabBar_MoveEvent_Callback(KMultiTabBar_MoveEvent_Callback cb) { kmultitabbar_moveevent_callback = cb; }
    inline void setKMultiTabBar_ResizeEvent_Callback(KMultiTabBar_ResizeEvent_Callback cb) { kmultitabbar_resizeevent_callback = cb; }
    inline void setKMultiTabBar_CloseEvent_Callback(KMultiTabBar_CloseEvent_Callback cb) { kmultitabbar_closeevent_callback = cb; }
    inline void setKMultiTabBar_ContextMenuEvent_Callback(KMultiTabBar_ContextMenuEvent_Callback cb) { kmultitabbar_contextmenuevent_callback = cb; }
    inline void setKMultiTabBar_TabletEvent_Callback(KMultiTabBar_TabletEvent_Callback cb) { kmultitabbar_tabletevent_callback = cb; }
    inline void setKMultiTabBar_ActionEvent_Callback(KMultiTabBar_ActionEvent_Callback cb) { kmultitabbar_actionevent_callback = cb; }
    inline void setKMultiTabBar_DragEnterEvent_Callback(KMultiTabBar_DragEnterEvent_Callback cb) { kmultitabbar_dragenterevent_callback = cb; }
    inline void setKMultiTabBar_DragMoveEvent_Callback(KMultiTabBar_DragMoveEvent_Callback cb) { kmultitabbar_dragmoveevent_callback = cb; }
    inline void setKMultiTabBar_DragLeaveEvent_Callback(KMultiTabBar_DragLeaveEvent_Callback cb) { kmultitabbar_dragleaveevent_callback = cb; }
    inline void setKMultiTabBar_DropEvent_Callback(KMultiTabBar_DropEvent_Callback cb) { kmultitabbar_dropevent_callback = cb; }
    inline void setKMultiTabBar_ShowEvent_Callback(KMultiTabBar_ShowEvent_Callback cb) { kmultitabbar_showevent_callback = cb; }
    inline void setKMultiTabBar_HideEvent_Callback(KMultiTabBar_HideEvent_Callback cb) { kmultitabbar_hideevent_callback = cb; }
    inline void setKMultiTabBar_NativeEvent_Callback(KMultiTabBar_NativeEvent_Callback cb) { kmultitabbar_nativeevent_callback = cb; }
    inline void setKMultiTabBar_ChangeEvent_Callback(KMultiTabBar_ChangeEvent_Callback cb) { kmultitabbar_changeevent_callback = cb; }
    inline void setKMultiTabBar_Metric_Callback(KMultiTabBar_Metric_Callback cb) { kmultitabbar_metric_callback = cb; }
    inline void setKMultiTabBar_InitPainter_Callback(KMultiTabBar_InitPainter_Callback cb) { kmultitabbar_initpainter_callback = cb; }
    inline void setKMultiTabBar_Redirected_Callback(KMultiTabBar_Redirected_Callback cb) { kmultitabbar_redirected_callback = cb; }
    inline void setKMultiTabBar_SharedPainter_Callback(KMultiTabBar_SharedPainter_Callback cb) { kmultitabbar_sharedpainter_callback = cb; }
    inline void setKMultiTabBar_InputMethodEvent_Callback(KMultiTabBar_InputMethodEvent_Callback cb) { kmultitabbar_inputmethodevent_callback = cb; }
    inline void setKMultiTabBar_InputMethodQuery_Callback(KMultiTabBar_InputMethodQuery_Callback cb) { kmultitabbar_inputmethodquery_callback = cb; }
    inline void setKMultiTabBar_FocusNextPrevChild_Callback(KMultiTabBar_FocusNextPrevChild_Callback cb) { kmultitabbar_focusnextprevchild_callback = cb; }
    inline void setKMultiTabBar_EventFilter_Callback(KMultiTabBar_EventFilter_Callback cb) { kmultitabbar_eventfilter_callback = cb; }
    inline void setKMultiTabBar_TimerEvent_Callback(KMultiTabBar_TimerEvent_Callback cb) { kmultitabbar_timerevent_callback = cb; }
    inline void setKMultiTabBar_ChildEvent_Callback(KMultiTabBar_ChildEvent_Callback cb) { kmultitabbar_childevent_callback = cb; }
    inline void setKMultiTabBar_CustomEvent_Callback(KMultiTabBar_CustomEvent_Callback cb) { kmultitabbar_customevent_callback = cb; }
    inline void setKMultiTabBar_ConnectNotify_Callback(KMultiTabBar_ConnectNotify_Callback cb) { kmultitabbar_connectnotify_callback = cb; }
    inline void setKMultiTabBar_DisconnectNotify_Callback(KMultiTabBar_DisconnectNotify_Callback cb) { kmultitabbar_disconnectnotify_callback = cb; }
    inline void setKMultiTabBar_UpdateSeparator_Callback(KMultiTabBar_UpdateSeparator_Callback cb) { kmultitabbar_updateseparator_callback = cb; }
    inline void setKMultiTabBar_UpdateMicroFocus_Callback(KMultiTabBar_UpdateMicroFocus_Callback cb) { kmultitabbar_updatemicrofocus_callback = cb; }
    inline void setKMultiTabBar_Create_Callback(KMultiTabBar_Create_Callback cb) { kmultitabbar_create_callback = cb; }
    inline void setKMultiTabBar_Destroy_Callback(KMultiTabBar_Destroy_Callback cb) { kmultitabbar_destroy_callback = cb; }
    inline void setKMultiTabBar_FocusNextChild_Callback(KMultiTabBar_FocusNextChild_Callback cb) { kmultitabbar_focusnextchild_callback = cb; }
    inline void setKMultiTabBar_FocusPreviousChild_Callback(KMultiTabBar_FocusPreviousChild_Callback cb) { kmultitabbar_focuspreviouschild_callback = cb; }
    inline void setKMultiTabBar_Sender_Callback(KMultiTabBar_Sender_Callback cb) { kmultitabbar_sender_callback = cb; }
    inline void setKMultiTabBar_SenderSignalIndex_Callback(KMultiTabBar_SenderSignalIndex_Callback cb) { kmultitabbar_sendersignalindex_callback = cb; }
    inline void setKMultiTabBar_Receivers_Callback(KMultiTabBar_Receivers_Callback cb) { kmultitabbar_receivers_callback = cb; }
    inline void setKMultiTabBar_IsSignalConnected_Callback(KMultiTabBar_IsSignalConnected_Callback cb) { kmultitabbar_issignalconnected_callback = cb; }
    inline void setKMultiTabBar_GetDecodedMetricF_Callback(KMultiTabBar_GetDecodedMetricF_Callback cb) { kmultitabbar_getdecodedmetricf_callback = cb; }

    // Base flag setters
    inline void setKMultiTabBar_Metacall_IsBase(bool value) const { kmultitabbar_metacall_isbase = value; }
    inline void setKMultiTabBar_FontChange_IsBase(bool value) const { kmultitabbar_fontchange_isbase = value; }
    inline void setKMultiTabBar_PaintEvent_IsBase(bool value) const { kmultitabbar_paintevent_isbase = value; }
    inline void setKMultiTabBar_DevType_IsBase(bool value) const { kmultitabbar_devtype_isbase = value; }
    inline void setKMultiTabBar_SetVisible_IsBase(bool value) const { kmultitabbar_setvisible_isbase = value; }
    inline void setKMultiTabBar_SizeHint_IsBase(bool value) const { kmultitabbar_sizehint_isbase = value; }
    inline void setKMultiTabBar_MinimumSizeHint_IsBase(bool value) const { kmultitabbar_minimumsizehint_isbase = value; }
    inline void setKMultiTabBar_HeightForWidth_IsBase(bool value) const { kmultitabbar_heightforwidth_isbase = value; }
    inline void setKMultiTabBar_HasHeightForWidth_IsBase(bool value) const { kmultitabbar_hasheightforwidth_isbase = value; }
    inline void setKMultiTabBar_PaintEngine_IsBase(bool value) const { kmultitabbar_paintengine_isbase = value; }
    inline void setKMultiTabBar_Event_IsBase(bool value) const { kmultitabbar_event_isbase = value; }
    inline void setKMultiTabBar_MousePressEvent_IsBase(bool value) const { kmultitabbar_mousepressevent_isbase = value; }
    inline void setKMultiTabBar_MouseReleaseEvent_IsBase(bool value) const { kmultitabbar_mousereleaseevent_isbase = value; }
    inline void setKMultiTabBar_MouseDoubleClickEvent_IsBase(bool value) const { kmultitabbar_mousedoubleclickevent_isbase = value; }
    inline void setKMultiTabBar_MouseMoveEvent_IsBase(bool value) const { kmultitabbar_mousemoveevent_isbase = value; }
    inline void setKMultiTabBar_WheelEvent_IsBase(bool value) const { kmultitabbar_wheelevent_isbase = value; }
    inline void setKMultiTabBar_KeyPressEvent_IsBase(bool value) const { kmultitabbar_keypressevent_isbase = value; }
    inline void setKMultiTabBar_KeyReleaseEvent_IsBase(bool value) const { kmultitabbar_keyreleaseevent_isbase = value; }
    inline void setKMultiTabBar_FocusInEvent_IsBase(bool value) const { kmultitabbar_focusinevent_isbase = value; }
    inline void setKMultiTabBar_FocusOutEvent_IsBase(bool value) const { kmultitabbar_focusoutevent_isbase = value; }
    inline void setKMultiTabBar_EnterEvent_IsBase(bool value) const { kmultitabbar_enterevent_isbase = value; }
    inline void setKMultiTabBar_LeaveEvent_IsBase(bool value) const { kmultitabbar_leaveevent_isbase = value; }
    inline void setKMultiTabBar_MoveEvent_IsBase(bool value) const { kmultitabbar_moveevent_isbase = value; }
    inline void setKMultiTabBar_ResizeEvent_IsBase(bool value) const { kmultitabbar_resizeevent_isbase = value; }
    inline void setKMultiTabBar_CloseEvent_IsBase(bool value) const { kmultitabbar_closeevent_isbase = value; }
    inline void setKMultiTabBar_ContextMenuEvent_IsBase(bool value) const { kmultitabbar_contextmenuevent_isbase = value; }
    inline void setKMultiTabBar_TabletEvent_IsBase(bool value) const { kmultitabbar_tabletevent_isbase = value; }
    inline void setKMultiTabBar_ActionEvent_IsBase(bool value) const { kmultitabbar_actionevent_isbase = value; }
    inline void setKMultiTabBar_DragEnterEvent_IsBase(bool value) const { kmultitabbar_dragenterevent_isbase = value; }
    inline void setKMultiTabBar_DragMoveEvent_IsBase(bool value) const { kmultitabbar_dragmoveevent_isbase = value; }
    inline void setKMultiTabBar_DragLeaveEvent_IsBase(bool value) const { kmultitabbar_dragleaveevent_isbase = value; }
    inline void setKMultiTabBar_DropEvent_IsBase(bool value) const { kmultitabbar_dropevent_isbase = value; }
    inline void setKMultiTabBar_ShowEvent_IsBase(bool value) const { kmultitabbar_showevent_isbase = value; }
    inline void setKMultiTabBar_HideEvent_IsBase(bool value) const { kmultitabbar_hideevent_isbase = value; }
    inline void setKMultiTabBar_NativeEvent_IsBase(bool value) const { kmultitabbar_nativeevent_isbase = value; }
    inline void setKMultiTabBar_ChangeEvent_IsBase(bool value) const { kmultitabbar_changeevent_isbase = value; }
    inline void setKMultiTabBar_Metric_IsBase(bool value) const { kmultitabbar_metric_isbase = value; }
    inline void setKMultiTabBar_InitPainter_IsBase(bool value) const { kmultitabbar_initpainter_isbase = value; }
    inline void setKMultiTabBar_Redirected_IsBase(bool value) const { kmultitabbar_redirected_isbase = value; }
    inline void setKMultiTabBar_SharedPainter_IsBase(bool value) const { kmultitabbar_sharedpainter_isbase = value; }
    inline void setKMultiTabBar_InputMethodEvent_IsBase(bool value) const { kmultitabbar_inputmethodevent_isbase = value; }
    inline void setKMultiTabBar_InputMethodQuery_IsBase(bool value) const { kmultitabbar_inputmethodquery_isbase = value; }
    inline void setKMultiTabBar_FocusNextPrevChild_IsBase(bool value) const { kmultitabbar_focusnextprevchild_isbase = value; }
    inline void setKMultiTabBar_EventFilter_IsBase(bool value) const { kmultitabbar_eventfilter_isbase = value; }
    inline void setKMultiTabBar_TimerEvent_IsBase(bool value) const { kmultitabbar_timerevent_isbase = value; }
    inline void setKMultiTabBar_ChildEvent_IsBase(bool value) const { kmultitabbar_childevent_isbase = value; }
    inline void setKMultiTabBar_CustomEvent_IsBase(bool value) const { kmultitabbar_customevent_isbase = value; }
    inline void setKMultiTabBar_ConnectNotify_IsBase(bool value) const { kmultitabbar_connectnotify_isbase = value; }
    inline void setKMultiTabBar_DisconnectNotify_IsBase(bool value) const { kmultitabbar_disconnectnotify_isbase = value; }
    inline void setKMultiTabBar_UpdateSeparator_IsBase(bool value) const { kmultitabbar_updateseparator_isbase = value; }
    inline void setKMultiTabBar_UpdateMicroFocus_IsBase(bool value) const { kmultitabbar_updatemicrofocus_isbase = value; }
    inline void setKMultiTabBar_Create_IsBase(bool value) const { kmultitabbar_create_isbase = value; }
    inline void setKMultiTabBar_Destroy_IsBase(bool value) const { kmultitabbar_destroy_isbase = value; }
    inline void setKMultiTabBar_FocusNextChild_IsBase(bool value) const { kmultitabbar_focusnextchild_isbase = value; }
    inline void setKMultiTabBar_FocusPreviousChild_IsBase(bool value) const { kmultitabbar_focuspreviouschild_isbase = value; }
    inline void setKMultiTabBar_Sender_IsBase(bool value) const { kmultitabbar_sender_isbase = value; }
    inline void setKMultiTabBar_SenderSignalIndex_IsBase(bool value) const { kmultitabbar_sendersignalindex_isbase = value; }
    inline void setKMultiTabBar_Receivers_IsBase(bool value) const { kmultitabbar_receivers_isbase = value; }
    inline void setKMultiTabBar_IsSignalConnected_IsBase(bool value) const { kmultitabbar_issignalconnected_isbase = value; }
    inline void setKMultiTabBar_GetDecodedMetricF_IsBase(bool value) const { kmultitabbar_getdecodedmetricf_isbase = value; }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (kmultitabbar_metacall_isbase) {
            kmultitabbar_metacall_isbase = false;
            return KMultiTabBar::qt_metacall(param1, param2, param3);
        } else if (kmultitabbar_metacall_callback != nullptr) {
            int cbval1 = static_cast<int>(param1);
            int cbval2 = param2;
            void** cbval3 = param3;

            int callback_ret = kmultitabbar_metacall_callback(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        } else {
            return KMultiTabBar::qt_metacall(param1, param2, param3);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void fontChange(const QFont& param1) override {
        if (kmultitabbar_fontchange_isbase) {
            kmultitabbar_fontchange_isbase = false;
            KMultiTabBar::fontChange(param1);
        } else if (kmultitabbar_fontchange_callback != nullptr) {
            const QFont& param1_ret = param1;
            // Cast returned reference into pointer
            QFont* cbval1 = const_cast<QFont*>(&param1_ret);

            kmultitabbar_fontchange_callback(this, cbval1);
        } else {
            KMultiTabBar::fontChange(param1);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void paintEvent(QPaintEvent* param1) override {
        if (kmultitabbar_paintevent_isbase) {
            kmultitabbar_paintevent_isbase = false;
            KMultiTabBar::paintEvent(param1);
        } else if (kmultitabbar_paintevent_callback != nullptr) {
            QPaintEvent* cbval1 = param1;

            kmultitabbar_paintevent_callback(this, cbval1);
        } else {
            KMultiTabBar::paintEvent(param1);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual int devType() const override {
        if (kmultitabbar_devtype_isbase) {
            kmultitabbar_devtype_isbase = false;
            return KMultiTabBar::devType();
        } else if (kmultitabbar_devtype_callback != nullptr) {
            int callback_ret = kmultitabbar_devtype_callback();
            return static_cast<int>(callback_ret);
        } else {
            return KMultiTabBar::devType();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void setVisible(bool visible) override {
        if (kmultitabbar_setvisible_isbase) {
            kmultitabbar_setvisible_isbase = false;
            KMultiTabBar::setVisible(visible);
        } else if (kmultitabbar_setvisible_callback != nullptr) {
            bool cbval1 = visible;

            kmultitabbar_setvisible_callback(this, cbval1);
        } else {
            KMultiTabBar::setVisible(visible);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QSize sizeHint() const override {
        if (kmultitabbar_sizehint_isbase) {
            kmultitabbar_sizehint_isbase = false;
            return KMultiTabBar::sizeHint();
        } else if (kmultitabbar_sizehint_callback != nullptr) {
            QSize* callback_ret = kmultitabbar_sizehint_callback();
            return *callback_ret;
        } else {
            return KMultiTabBar::sizeHint();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QSize minimumSizeHint() const override {
        if (kmultitabbar_minimumsizehint_isbase) {
            kmultitabbar_minimumsizehint_isbase = false;
            return KMultiTabBar::minimumSizeHint();
        } else if (kmultitabbar_minimumsizehint_callback != nullptr) {
            QSize* callback_ret = kmultitabbar_minimumsizehint_callback();
            return *callback_ret;
        } else {
            return KMultiTabBar::minimumSizeHint();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual int heightForWidth(int param1) const override {
        if (kmultitabbar_heightforwidth_isbase) {
            kmultitabbar_heightforwidth_isbase = false;
            return KMultiTabBar::heightForWidth(param1);
        } else if (kmultitabbar_heightforwidth_callback != nullptr) {
            int cbval1 = param1;

            int callback_ret = kmultitabbar_heightforwidth_callback(this, cbval1);
            return static_cast<int>(callback_ret);
        } else {
            return KMultiTabBar::heightForWidth(param1);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool hasHeightForWidth() const override {
        if (kmultitabbar_hasheightforwidth_isbase) {
            kmultitabbar_hasheightforwidth_isbase = false;
            return KMultiTabBar::hasHeightForWidth();
        } else if (kmultitabbar_hasheightforwidth_callback != nullptr) {
            bool callback_ret = kmultitabbar_hasheightforwidth_callback();
            return callback_ret;
        } else {
            return KMultiTabBar::hasHeightForWidth();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QPaintEngine* paintEngine() const override {
        if (kmultitabbar_paintengine_isbase) {
            kmultitabbar_paintengine_isbase = false;
            return KMultiTabBar::paintEngine();
        } else if (kmultitabbar_paintengine_callback != nullptr) {
            QPaintEngine* callback_ret = kmultitabbar_paintengine_callback();
            return callback_ret;
        } else {
            return KMultiTabBar::paintEngine();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* event) override {
        if (kmultitabbar_event_isbase) {
            kmultitabbar_event_isbase = false;
            return KMultiTabBar::event(event);
        } else if (kmultitabbar_event_callback != nullptr) {
            QEvent* cbval1 = event;

            bool callback_ret = kmultitabbar_event_callback(this, cbval1);
            return callback_ret;
        } else {
            return KMultiTabBar::event(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void mousePressEvent(QMouseEvent* event) override {
        if (kmultitabbar_mousepressevent_isbase) {
            kmultitabbar_mousepressevent_isbase = false;
            KMultiTabBar::mousePressEvent(event);
        } else if (kmultitabbar_mousepressevent_callback != nullptr) {
            QMouseEvent* cbval1 = event;

            kmultitabbar_mousepressevent_callback(this, cbval1);
        } else {
            KMultiTabBar::mousePressEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseReleaseEvent(QMouseEvent* event) override {
        if (kmultitabbar_mousereleaseevent_isbase) {
            kmultitabbar_mousereleaseevent_isbase = false;
            KMultiTabBar::mouseReleaseEvent(event);
        } else if (kmultitabbar_mousereleaseevent_callback != nullptr) {
            QMouseEvent* cbval1 = event;

            kmultitabbar_mousereleaseevent_callback(this, cbval1);
        } else {
            KMultiTabBar::mouseReleaseEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseDoubleClickEvent(QMouseEvent* event) override {
        if (kmultitabbar_mousedoubleclickevent_isbase) {
            kmultitabbar_mousedoubleclickevent_isbase = false;
            KMultiTabBar::mouseDoubleClickEvent(event);
        } else if (kmultitabbar_mousedoubleclickevent_callback != nullptr) {
            QMouseEvent* cbval1 = event;

            kmultitabbar_mousedoubleclickevent_callback(this, cbval1);
        } else {
            KMultiTabBar::mouseDoubleClickEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseMoveEvent(QMouseEvent* event) override {
        if (kmultitabbar_mousemoveevent_isbase) {
            kmultitabbar_mousemoveevent_isbase = false;
            KMultiTabBar::mouseMoveEvent(event);
        } else if (kmultitabbar_mousemoveevent_callback != nullptr) {
            QMouseEvent* cbval1 = event;

            kmultitabbar_mousemoveevent_callback(this, cbval1);
        } else {
            KMultiTabBar::mouseMoveEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void wheelEvent(QWheelEvent* event) override {
        if (kmultitabbar_wheelevent_isbase) {
            kmultitabbar_wheelevent_isbase = false;
            KMultiTabBar::wheelEvent(event);
        } else if (kmultitabbar_wheelevent_callback != nullptr) {
            QWheelEvent* cbval1 = event;

            kmultitabbar_wheelevent_callback(this, cbval1);
        } else {
            KMultiTabBar::wheelEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void keyPressEvent(QKeyEvent* event) override {
        if (kmultitabbar_keypressevent_isbase) {
            kmultitabbar_keypressevent_isbase = false;
            KMultiTabBar::keyPressEvent(event);
        } else if (kmultitabbar_keypressevent_callback != nullptr) {
            QKeyEvent* cbval1 = event;

            kmultitabbar_keypressevent_callback(this, cbval1);
        } else {
            KMultiTabBar::keyPressEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void keyReleaseEvent(QKeyEvent* event) override {
        if (kmultitabbar_keyreleaseevent_isbase) {
            kmultitabbar_keyreleaseevent_isbase = false;
            KMultiTabBar::keyReleaseEvent(event);
        } else if (kmultitabbar_keyreleaseevent_callback != nullptr) {
            QKeyEvent* cbval1 = event;

            kmultitabbar_keyreleaseevent_callback(this, cbval1);
        } else {
            KMultiTabBar::keyReleaseEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void focusInEvent(QFocusEvent* event) override {
        if (kmultitabbar_focusinevent_isbase) {
            kmultitabbar_focusinevent_isbase = false;
            KMultiTabBar::focusInEvent(event);
        } else if (kmultitabbar_focusinevent_callback != nullptr) {
            QFocusEvent* cbval1 = event;

            kmultitabbar_focusinevent_callback(this, cbval1);
        } else {
            KMultiTabBar::focusInEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void focusOutEvent(QFocusEvent* event) override {
        if (kmultitabbar_focusoutevent_isbase) {
            kmultitabbar_focusoutevent_isbase = false;
            KMultiTabBar::focusOutEvent(event);
        } else if (kmultitabbar_focusoutevent_callback != nullptr) {
            QFocusEvent* cbval1 = event;

            kmultitabbar_focusoutevent_callback(this, cbval1);
        } else {
            KMultiTabBar::focusOutEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void enterEvent(QEnterEvent* event) override {
        if (kmultitabbar_enterevent_isbase) {
            kmultitabbar_enterevent_isbase = false;
            KMultiTabBar::enterEvent(event);
        } else if (kmultitabbar_enterevent_callback != nullptr) {
            QEnterEvent* cbval1 = event;

            kmultitabbar_enterevent_callback(this, cbval1);
        } else {
            KMultiTabBar::enterEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void leaveEvent(QEvent* event) override {
        if (kmultitabbar_leaveevent_isbase) {
            kmultitabbar_leaveevent_isbase = false;
            KMultiTabBar::leaveEvent(event);
        } else if (kmultitabbar_leaveevent_callback != nullptr) {
            QEvent* cbval1 = event;

            kmultitabbar_leaveevent_callback(this, cbval1);
        } else {
            KMultiTabBar::leaveEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void moveEvent(QMoveEvent* event) override {
        if (kmultitabbar_moveevent_isbase) {
            kmultitabbar_moveevent_isbase = false;
            KMultiTabBar::moveEvent(event);
        } else if (kmultitabbar_moveevent_callback != nullptr) {
            QMoveEvent* cbval1 = event;

            kmultitabbar_moveevent_callback(this, cbval1);
        } else {
            KMultiTabBar::moveEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void resizeEvent(QResizeEvent* event) override {
        if (kmultitabbar_resizeevent_isbase) {
            kmultitabbar_resizeevent_isbase = false;
            KMultiTabBar::resizeEvent(event);
        } else if (kmultitabbar_resizeevent_callback != nullptr) {
            QResizeEvent* cbval1 = event;

            kmultitabbar_resizeevent_callback(this, cbval1);
        } else {
            KMultiTabBar::resizeEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void closeEvent(QCloseEvent* event) override {
        if (kmultitabbar_closeevent_isbase) {
            kmultitabbar_closeevent_isbase = false;
            KMultiTabBar::closeEvent(event);
        } else if (kmultitabbar_closeevent_callback != nullptr) {
            QCloseEvent* cbval1 = event;

            kmultitabbar_closeevent_callback(this, cbval1);
        } else {
            KMultiTabBar::closeEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void contextMenuEvent(QContextMenuEvent* event) override {
        if (kmultitabbar_contextmenuevent_isbase) {
            kmultitabbar_contextmenuevent_isbase = false;
            KMultiTabBar::contextMenuEvent(event);
        } else if (kmultitabbar_contextmenuevent_callback != nullptr) {
            QContextMenuEvent* cbval1 = event;

            kmultitabbar_contextmenuevent_callback(this, cbval1);
        } else {
            KMultiTabBar::contextMenuEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void tabletEvent(QTabletEvent* event) override {
        if (kmultitabbar_tabletevent_isbase) {
            kmultitabbar_tabletevent_isbase = false;
            KMultiTabBar::tabletEvent(event);
        } else if (kmultitabbar_tabletevent_callback != nullptr) {
            QTabletEvent* cbval1 = event;

            kmultitabbar_tabletevent_callback(this, cbval1);
        } else {
            KMultiTabBar::tabletEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void actionEvent(QActionEvent* event) override {
        if (kmultitabbar_actionevent_isbase) {
            kmultitabbar_actionevent_isbase = false;
            KMultiTabBar::actionEvent(event);
        } else if (kmultitabbar_actionevent_callback != nullptr) {
            QActionEvent* cbval1 = event;

            kmultitabbar_actionevent_callback(this, cbval1);
        } else {
            KMultiTabBar::actionEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragEnterEvent(QDragEnterEvent* event) override {
        if (kmultitabbar_dragenterevent_isbase) {
            kmultitabbar_dragenterevent_isbase = false;
            KMultiTabBar::dragEnterEvent(event);
        } else if (kmultitabbar_dragenterevent_callback != nullptr) {
            QDragEnterEvent* cbval1 = event;

            kmultitabbar_dragenterevent_callback(this, cbval1);
        } else {
            KMultiTabBar::dragEnterEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragMoveEvent(QDragMoveEvent* event) override {
        if (kmultitabbar_dragmoveevent_isbase) {
            kmultitabbar_dragmoveevent_isbase = false;
            KMultiTabBar::dragMoveEvent(event);
        } else if (kmultitabbar_dragmoveevent_callback != nullptr) {
            QDragMoveEvent* cbval1 = event;

            kmultitabbar_dragmoveevent_callback(this, cbval1);
        } else {
            KMultiTabBar::dragMoveEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragLeaveEvent(QDragLeaveEvent* event) override {
        if (kmultitabbar_dragleaveevent_isbase) {
            kmultitabbar_dragleaveevent_isbase = false;
            KMultiTabBar::dragLeaveEvent(event);
        } else if (kmultitabbar_dragleaveevent_callback != nullptr) {
            QDragLeaveEvent* cbval1 = event;

            kmultitabbar_dragleaveevent_callback(this, cbval1);
        } else {
            KMultiTabBar::dragLeaveEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void dropEvent(QDropEvent* event) override {
        if (kmultitabbar_dropevent_isbase) {
            kmultitabbar_dropevent_isbase = false;
            KMultiTabBar::dropEvent(event);
        } else if (kmultitabbar_dropevent_callback != nullptr) {
            QDropEvent* cbval1 = event;

            kmultitabbar_dropevent_callback(this, cbval1);
        } else {
            KMultiTabBar::dropEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void showEvent(QShowEvent* event) override {
        if (kmultitabbar_showevent_isbase) {
            kmultitabbar_showevent_isbase = false;
            KMultiTabBar::showEvent(event);
        } else if (kmultitabbar_showevent_callback != nullptr) {
            QShowEvent* cbval1 = event;

            kmultitabbar_showevent_callback(this, cbval1);
        } else {
            KMultiTabBar::showEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void hideEvent(QHideEvent* event) override {
        if (kmultitabbar_hideevent_isbase) {
            kmultitabbar_hideevent_isbase = false;
            KMultiTabBar::hideEvent(event);
        } else if (kmultitabbar_hideevent_callback != nullptr) {
            QHideEvent* cbval1 = event;

            kmultitabbar_hideevent_callback(this, cbval1);
        } else {
            KMultiTabBar::hideEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool nativeEvent(const QByteArray& eventType, void* message, qintptr* result) override {
        if (kmultitabbar_nativeevent_isbase) {
            kmultitabbar_nativeevent_isbase = false;
            return KMultiTabBar::nativeEvent(eventType, message, result);
        } else if (kmultitabbar_nativeevent_callback != nullptr) {
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

            bool callback_ret = kmultitabbar_nativeevent_callback(this, cbval1, cbval2, cbval3);
            return callback_ret;
        } else {
            return KMultiTabBar::nativeEvent(eventType, message, result);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void changeEvent(QEvent* param1) override {
        if (kmultitabbar_changeevent_isbase) {
            kmultitabbar_changeevent_isbase = false;
            KMultiTabBar::changeEvent(param1);
        } else if (kmultitabbar_changeevent_callback != nullptr) {
            QEvent* cbval1 = param1;

            kmultitabbar_changeevent_callback(this, cbval1);
        } else {
            KMultiTabBar::changeEvent(param1);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual int metric(QPaintDevice::PaintDeviceMetric param1) const override {
        if (kmultitabbar_metric_isbase) {
            kmultitabbar_metric_isbase = false;
            return KMultiTabBar::metric(param1);
        } else if (kmultitabbar_metric_callback != nullptr) {
            int cbval1 = static_cast<int>(param1);

            int callback_ret = kmultitabbar_metric_callback(this, cbval1);
            return static_cast<int>(callback_ret);
        } else {
            return KMultiTabBar::metric(param1);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void initPainter(QPainter* painter) const override {
        if (kmultitabbar_initpainter_isbase) {
            kmultitabbar_initpainter_isbase = false;
            KMultiTabBar::initPainter(painter);
        } else if (kmultitabbar_initpainter_callback != nullptr) {
            QPainter* cbval1 = painter;

            kmultitabbar_initpainter_callback(this, cbval1);
        } else {
            KMultiTabBar::initPainter(painter);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QPaintDevice* redirected(QPoint* offset) const override {
        if (kmultitabbar_redirected_isbase) {
            kmultitabbar_redirected_isbase = false;
            return KMultiTabBar::redirected(offset);
        } else if (kmultitabbar_redirected_callback != nullptr) {
            QPoint* cbval1 = offset;

            QPaintDevice* callback_ret = kmultitabbar_redirected_callback(this, cbval1);
            return callback_ret;
        } else {
            return KMultiTabBar::redirected(offset);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QPainter* sharedPainter() const override {
        if (kmultitabbar_sharedpainter_isbase) {
            kmultitabbar_sharedpainter_isbase = false;
            return KMultiTabBar::sharedPainter();
        } else if (kmultitabbar_sharedpainter_callback != nullptr) {
            QPainter* callback_ret = kmultitabbar_sharedpainter_callback();
            return callback_ret;
        } else {
            return KMultiTabBar::sharedPainter();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void inputMethodEvent(QInputMethodEvent* param1) override {
        if (kmultitabbar_inputmethodevent_isbase) {
            kmultitabbar_inputmethodevent_isbase = false;
            KMultiTabBar::inputMethodEvent(param1);
        } else if (kmultitabbar_inputmethodevent_callback != nullptr) {
            QInputMethodEvent* cbval1 = param1;

            kmultitabbar_inputmethodevent_callback(this, cbval1);
        } else {
            KMultiTabBar::inputMethodEvent(param1);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QVariant inputMethodQuery(Qt::InputMethodQuery param1) const override {
        if (kmultitabbar_inputmethodquery_isbase) {
            kmultitabbar_inputmethodquery_isbase = false;
            return KMultiTabBar::inputMethodQuery(param1);
        } else if (kmultitabbar_inputmethodquery_callback != nullptr) {
            int cbval1 = static_cast<int>(param1);

            QVariant* callback_ret = kmultitabbar_inputmethodquery_callback(this, cbval1);
            return *callback_ret;
        } else {
            return KMultiTabBar::inputMethodQuery(param1);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool focusNextPrevChild(bool next) override {
        if (kmultitabbar_focusnextprevchild_isbase) {
            kmultitabbar_focusnextprevchild_isbase = false;
            return KMultiTabBar::focusNextPrevChild(next);
        } else if (kmultitabbar_focusnextprevchild_callback != nullptr) {
            bool cbval1 = next;

            bool callback_ret = kmultitabbar_focusnextprevchild_callback(this, cbval1);
            return callback_ret;
        } else {
            return KMultiTabBar::focusNextPrevChild(next);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* watched, QEvent* event) override {
        if (kmultitabbar_eventfilter_isbase) {
            kmultitabbar_eventfilter_isbase = false;
            return KMultiTabBar::eventFilter(watched, event);
        } else if (kmultitabbar_eventfilter_callback != nullptr) {
            QObject* cbval1 = watched;
            QEvent* cbval2 = event;

            bool callback_ret = kmultitabbar_eventfilter_callback(this, cbval1, cbval2);
            return callback_ret;
        } else {
            return KMultiTabBar::eventFilter(watched, event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (kmultitabbar_timerevent_isbase) {
            kmultitabbar_timerevent_isbase = false;
            KMultiTabBar::timerEvent(event);
        } else if (kmultitabbar_timerevent_callback != nullptr) {
            QTimerEvent* cbval1 = event;

            kmultitabbar_timerevent_callback(this, cbval1);
        } else {
            KMultiTabBar::timerEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (kmultitabbar_childevent_isbase) {
            kmultitabbar_childevent_isbase = false;
            KMultiTabBar::childEvent(event);
        } else if (kmultitabbar_childevent_callback != nullptr) {
            QChildEvent* cbval1 = event;

            kmultitabbar_childevent_callback(this, cbval1);
        } else {
            KMultiTabBar::childEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (kmultitabbar_customevent_isbase) {
            kmultitabbar_customevent_isbase = false;
            KMultiTabBar::customEvent(event);
        } else if (kmultitabbar_customevent_callback != nullptr) {
            QEvent* cbval1 = event;

            kmultitabbar_customevent_callback(this, cbval1);
        } else {
            KMultiTabBar::customEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (kmultitabbar_connectnotify_isbase) {
            kmultitabbar_connectnotify_isbase = false;
            KMultiTabBar::connectNotify(signal);
        } else if (kmultitabbar_connectnotify_callback != nullptr) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            kmultitabbar_connectnotify_callback(this, cbval1);
        } else {
            KMultiTabBar::connectNotify(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (kmultitabbar_disconnectnotify_isbase) {
            kmultitabbar_disconnectnotify_isbase = false;
            KMultiTabBar::disconnectNotify(signal);
        } else if (kmultitabbar_disconnectnotify_callback != nullptr) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            kmultitabbar_disconnectnotify_callback(this, cbval1);
        } else {
            KMultiTabBar::disconnectNotify(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    void updateSeparator() {
        if (kmultitabbar_updateseparator_isbase) {
            kmultitabbar_updateseparator_isbase = false;
            KMultiTabBar::updateSeparator();
        } else if (kmultitabbar_updateseparator_callback != nullptr) {
            kmultitabbar_updateseparator_callback();
        } else {
            KMultiTabBar::updateSeparator();
        }
    }

    // Virtual method for C ABI access and custom callback
    void updateMicroFocus() {
        if (kmultitabbar_updatemicrofocus_isbase) {
            kmultitabbar_updatemicrofocus_isbase = false;
            KMultiTabBar::updateMicroFocus();
        } else if (kmultitabbar_updatemicrofocus_callback != nullptr) {
            kmultitabbar_updatemicrofocus_callback();
        } else {
            KMultiTabBar::updateMicroFocus();
        }
    }

    // Virtual method for C ABI access and custom callback
    void create() {
        if (kmultitabbar_create_isbase) {
            kmultitabbar_create_isbase = false;
            KMultiTabBar::create();
        } else if (kmultitabbar_create_callback != nullptr) {
            kmultitabbar_create_callback();
        } else {
            KMultiTabBar::create();
        }
    }

    // Virtual method for C ABI access and custom callback
    void destroy() {
        if (kmultitabbar_destroy_isbase) {
            kmultitabbar_destroy_isbase = false;
            KMultiTabBar::destroy();
        } else if (kmultitabbar_destroy_callback != nullptr) {
            kmultitabbar_destroy_callback();
        } else {
            KMultiTabBar::destroy();
        }
    }

    // Virtual method for C ABI access and custom callback
    bool focusNextChild() {
        if (kmultitabbar_focusnextchild_isbase) {
            kmultitabbar_focusnextchild_isbase = false;
            return KMultiTabBar::focusNextChild();
        } else if (kmultitabbar_focusnextchild_callback != nullptr) {
            bool callback_ret = kmultitabbar_focusnextchild_callback();
            return callback_ret;
        } else {
            return KMultiTabBar::focusNextChild();
        }
    }

    // Virtual method for C ABI access and custom callback
    bool focusPreviousChild() {
        if (kmultitabbar_focuspreviouschild_isbase) {
            kmultitabbar_focuspreviouschild_isbase = false;
            return KMultiTabBar::focusPreviousChild();
        } else if (kmultitabbar_focuspreviouschild_callback != nullptr) {
            bool callback_ret = kmultitabbar_focuspreviouschild_callback();
            return callback_ret;
        } else {
            return KMultiTabBar::focusPreviousChild();
        }
    }

    // Virtual method for C ABI access and custom callback
    QObject* sender() const {
        if (kmultitabbar_sender_isbase) {
            kmultitabbar_sender_isbase = false;
            return KMultiTabBar::sender();
        } else if (kmultitabbar_sender_callback != nullptr) {
            QObject* callback_ret = kmultitabbar_sender_callback();
            return callback_ret;
        } else {
            return KMultiTabBar::sender();
        }
    }

    // Virtual method for C ABI access and custom callback
    int senderSignalIndex() const {
        if (kmultitabbar_sendersignalindex_isbase) {
            kmultitabbar_sendersignalindex_isbase = false;
            return KMultiTabBar::senderSignalIndex();
        } else if (kmultitabbar_sendersignalindex_callback != nullptr) {
            int callback_ret = kmultitabbar_sendersignalindex_callback();
            return static_cast<int>(callback_ret);
        } else {
            return KMultiTabBar::senderSignalIndex();
        }
    }

    // Virtual method for C ABI access and custom callback
    int receivers(const char* signal) const {
        if (kmultitabbar_receivers_isbase) {
            kmultitabbar_receivers_isbase = false;
            return KMultiTabBar::receivers(signal);
        } else if (kmultitabbar_receivers_callback != nullptr) {
            const char* cbval1 = (const char*)signal;

            int callback_ret = kmultitabbar_receivers_callback(this, cbval1);
            return static_cast<int>(callback_ret);
        } else {
            return KMultiTabBar::receivers(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    bool isSignalConnected(const QMetaMethod& signal) const {
        if (kmultitabbar_issignalconnected_isbase) {
            kmultitabbar_issignalconnected_isbase = false;
            return KMultiTabBar::isSignalConnected(signal);
        } else if (kmultitabbar_issignalconnected_callback != nullptr) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            bool callback_ret = kmultitabbar_issignalconnected_callback(this, cbval1);
            return callback_ret;
        } else {
            return KMultiTabBar::isSignalConnected(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    double getDecodedMetricF(QPaintDevice::PaintDeviceMetric metricA, QPaintDevice::PaintDeviceMetric metricB) const {
        if (kmultitabbar_getdecodedmetricf_isbase) {
            kmultitabbar_getdecodedmetricf_isbase = false;
            return KMultiTabBar::getDecodedMetricF(metricA, metricB);
        } else if (kmultitabbar_getdecodedmetricf_callback != nullptr) {
            int cbval1 = static_cast<int>(metricA);
            int cbval2 = static_cast<int>(metricB);

            double callback_ret = kmultitabbar_getdecodedmetricf_callback(this, cbval1, cbval2);
            return static_cast<double>(callback_ret);
        } else {
            return KMultiTabBar::getDecodedMetricF(metricA, metricB);
        }
    }

    // Friend functions
    friend void KMultiTabBar_FontChange(KMultiTabBar* self, const QFont* param1);
    friend void KMultiTabBar_QBaseFontChange(KMultiTabBar* self, const QFont* param1);
    friend void KMultiTabBar_PaintEvent(KMultiTabBar* self, QPaintEvent* param1);
    friend void KMultiTabBar_QBasePaintEvent(KMultiTabBar* self, QPaintEvent* param1);
    friend bool KMultiTabBar_Event(KMultiTabBar* self, QEvent* event);
    friend bool KMultiTabBar_QBaseEvent(KMultiTabBar* self, QEvent* event);
    friend void KMultiTabBar_MousePressEvent(KMultiTabBar* self, QMouseEvent* event);
    friend void KMultiTabBar_QBaseMousePressEvent(KMultiTabBar* self, QMouseEvent* event);
    friend void KMultiTabBar_MouseReleaseEvent(KMultiTabBar* self, QMouseEvent* event);
    friend void KMultiTabBar_QBaseMouseReleaseEvent(KMultiTabBar* self, QMouseEvent* event);
    friend void KMultiTabBar_MouseDoubleClickEvent(KMultiTabBar* self, QMouseEvent* event);
    friend void KMultiTabBar_QBaseMouseDoubleClickEvent(KMultiTabBar* self, QMouseEvent* event);
    friend void KMultiTabBar_MouseMoveEvent(KMultiTabBar* self, QMouseEvent* event);
    friend void KMultiTabBar_QBaseMouseMoveEvent(KMultiTabBar* self, QMouseEvent* event);
    friend void KMultiTabBar_WheelEvent(KMultiTabBar* self, QWheelEvent* event);
    friend void KMultiTabBar_QBaseWheelEvent(KMultiTabBar* self, QWheelEvent* event);
    friend void KMultiTabBar_KeyPressEvent(KMultiTabBar* self, QKeyEvent* event);
    friend void KMultiTabBar_QBaseKeyPressEvent(KMultiTabBar* self, QKeyEvent* event);
    friend void KMultiTabBar_KeyReleaseEvent(KMultiTabBar* self, QKeyEvent* event);
    friend void KMultiTabBar_QBaseKeyReleaseEvent(KMultiTabBar* self, QKeyEvent* event);
    friend void KMultiTabBar_FocusInEvent(KMultiTabBar* self, QFocusEvent* event);
    friend void KMultiTabBar_QBaseFocusInEvent(KMultiTabBar* self, QFocusEvent* event);
    friend void KMultiTabBar_FocusOutEvent(KMultiTabBar* self, QFocusEvent* event);
    friend void KMultiTabBar_QBaseFocusOutEvent(KMultiTabBar* self, QFocusEvent* event);
    friend void KMultiTabBar_EnterEvent(KMultiTabBar* self, QEnterEvent* event);
    friend void KMultiTabBar_QBaseEnterEvent(KMultiTabBar* self, QEnterEvent* event);
    friend void KMultiTabBar_LeaveEvent(KMultiTabBar* self, QEvent* event);
    friend void KMultiTabBar_QBaseLeaveEvent(KMultiTabBar* self, QEvent* event);
    friend void KMultiTabBar_MoveEvent(KMultiTabBar* self, QMoveEvent* event);
    friend void KMultiTabBar_QBaseMoveEvent(KMultiTabBar* self, QMoveEvent* event);
    friend void KMultiTabBar_ResizeEvent(KMultiTabBar* self, QResizeEvent* event);
    friend void KMultiTabBar_QBaseResizeEvent(KMultiTabBar* self, QResizeEvent* event);
    friend void KMultiTabBar_CloseEvent(KMultiTabBar* self, QCloseEvent* event);
    friend void KMultiTabBar_QBaseCloseEvent(KMultiTabBar* self, QCloseEvent* event);
    friend void KMultiTabBar_ContextMenuEvent(KMultiTabBar* self, QContextMenuEvent* event);
    friend void KMultiTabBar_QBaseContextMenuEvent(KMultiTabBar* self, QContextMenuEvent* event);
    friend void KMultiTabBar_TabletEvent(KMultiTabBar* self, QTabletEvent* event);
    friend void KMultiTabBar_QBaseTabletEvent(KMultiTabBar* self, QTabletEvent* event);
    friend void KMultiTabBar_ActionEvent(KMultiTabBar* self, QActionEvent* event);
    friend void KMultiTabBar_QBaseActionEvent(KMultiTabBar* self, QActionEvent* event);
    friend void KMultiTabBar_DragEnterEvent(KMultiTabBar* self, QDragEnterEvent* event);
    friend void KMultiTabBar_QBaseDragEnterEvent(KMultiTabBar* self, QDragEnterEvent* event);
    friend void KMultiTabBar_DragMoveEvent(KMultiTabBar* self, QDragMoveEvent* event);
    friend void KMultiTabBar_QBaseDragMoveEvent(KMultiTabBar* self, QDragMoveEvent* event);
    friend void KMultiTabBar_DragLeaveEvent(KMultiTabBar* self, QDragLeaveEvent* event);
    friend void KMultiTabBar_QBaseDragLeaveEvent(KMultiTabBar* self, QDragLeaveEvent* event);
    friend void KMultiTabBar_DropEvent(KMultiTabBar* self, QDropEvent* event);
    friend void KMultiTabBar_QBaseDropEvent(KMultiTabBar* self, QDropEvent* event);
    friend void KMultiTabBar_ShowEvent(KMultiTabBar* self, QShowEvent* event);
    friend void KMultiTabBar_QBaseShowEvent(KMultiTabBar* self, QShowEvent* event);
    friend void KMultiTabBar_HideEvent(KMultiTabBar* self, QHideEvent* event);
    friend void KMultiTabBar_QBaseHideEvent(KMultiTabBar* self, QHideEvent* event);
    friend bool KMultiTabBar_NativeEvent(KMultiTabBar* self, const libqt_string eventType, void* message, intptr_t* result);
    friend bool KMultiTabBar_QBaseNativeEvent(KMultiTabBar* self, const libqt_string eventType, void* message, intptr_t* result);
    friend void KMultiTabBar_ChangeEvent(KMultiTabBar* self, QEvent* param1);
    friend void KMultiTabBar_QBaseChangeEvent(KMultiTabBar* self, QEvent* param1);
    friend int KMultiTabBar_Metric(const KMultiTabBar* self, int param1);
    friend int KMultiTabBar_QBaseMetric(const KMultiTabBar* self, int param1);
    friend void KMultiTabBar_InitPainter(const KMultiTabBar* self, QPainter* painter);
    friend void KMultiTabBar_QBaseInitPainter(const KMultiTabBar* self, QPainter* painter);
    friend QPaintDevice* KMultiTabBar_Redirected(const KMultiTabBar* self, QPoint* offset);
    friend QPaintDevice* KMultiTabBar_QBaseRedirected(const KMultiTabBar* self, QPoint* offset);
    friend QPainter* KMultiTabBar_SharedPainter(const KMultiTabBar* self);
    friend QPainter* KMultiTabBar_QBaseSharedPainter(const KMultiTabBar* self);
    friend void KMultiTabBar_InputMethodEvent(KMultiTabBar* self, QInputMethodEvent* param1);
    friend void KMultiTabBar_QBaseInputMethodEvent(KMultiTabBar* self, QInputMethodEvent* param1);
    friend bool KMultiTabBar_FocusNextPrevChild(KMultiTabBar* self, bool next);
    friend bool KMultiTabBar_QBaseFocusNextPrevChild(KMultiTabBar* self, bool next);
    friend void KMultiTabBar_TimerEvent(KMultiTabBar* self, QTimerEvent* event);
    friend void KMultiTabBar_QBaseTimerEvent(KMultiTabBar* self, QTimerEvent* event);
    friend void KMultiTabBar_ChildEvent(KMultiTabBar* self, QChildEvent* event);
    friend void KMultiTabBar_QBaseChildEvent(KMultiTabBar* self, QChildEvent* event);
    friend void KMultiTabBar_CustomEvent(KMultiTabBar* self, QEvent* event);
    friend void KMultiTabBar_QBaseCustomEvent(KMultiTabBar* self, QEvent* event);
    friend void KMultiTabBar_ConnectNotify(KMultiTabBar* self, const QMetaMethod* signal);
    friend void KMultiTabBar_QBaseConnectNotify(KMultiTabBar* self, const QMetaMethod* signal);
    friend void KMultiTabBar_DisconnectNotify(KMultiTabBar* self, const QMetaMethod* signal);
    friend void KMultiTabBar_QBaseDisconnectNotify(KMultiTabBar* self, const QMetaMethod* signal);
    friend void KMultiTabBar_UpdateSeparator(KMultiTabBar* self);
    friend void KMultiTabBar_QBaseUpdateSeparator(KMultiTabBar* self);
    friend void KMultiTabBar_UpdateMicroFocus(KMultiTabBar* self);
    friend void KMultiTabBar_QBaseUpdateMicroFocus(KMultiTabBar* self);
    friend void KMultiTabBar_Create(KMultiTabBar* self);
    friend void KMultiTabBar_QBaseCreate(KMultiTabBar* self);
    friend void KMultiTabBar_Destroy(KMultiTabBar* self);
    friend void KMultiTabBar_QBaseDestroy(KMultiTabBar* self);
    friend bool KMultiTabBar_FocusNextChild(KMultiTabBar* self);
    friend bool KMultiTabBar_QBaseFocusNextChild(KMultiTabBar* self);
    friend bool KMultiTabBar_FocusPreviousChild(KMultiTabBar* self);
    friend bool KMultiTabBar_QBaseFocusPreviousChild(KMultiTabBar* self);
    friend QObject* KMultiTabBar_Sender(const KMultiTabBar* self);
    friend QObject* KMultiTabBar_QBaseSender(const KMultiTabBar* self);
    friend int KMultiTabBar_SenderSignalIndex(const KMultiTabBar* self);
    friend int KMultiTabBar_QBaseSenderSignalIndex(const KMultiTabBar* self);
    friend int KMultiTabBar_Receivers(const KMultiTabBar* self, const char* signal);
    friend int KMultiTabBar_QBaseReceivers(const KMultiTabBar* self, const char* signal);
    friend bool KMultiTabBar_IsSignalConnected(const KMultiTabBar* self, const QMetaMethod* signal);
    friend bool KMultiTabBar_QBaseIsSignalConnected(const KMultiTabBar* self, const QMetaMethod* signal);
    friend double KMultiTabBar_GetDecodedMetricF(const KMultiTabBar* self, int metricA, int metricB);
    friend double KMultiTabBar_QBaseGetDecodedMetricF(const KMultiTabBar* self, int metricA, int metricB);
};

#endif
