#pragma once
#ifndef SRC_EXTRAS_KWIDGETSADDONSC_LIBVIRTUALKBUSYINDICATORWIDGET_H
#define SRC_EXTRAS_KWIDGETSADDONSC_LIBVIRTUALKBUSYINDICATORWIDGET_H

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

// This class is a subclass of KBusyIndicatorWidget so that we can call protected methods
class VirtualKBusyIndicatorWidget final : public KBusyIndicatorWidget {

  public:
    // Virtual class boolean flag
    bool isVirtualKBusyIndicatorWidget = true;

    // Virtual class public types (including callbacks)
    using KBusyIndicatorWidget_Metacall_Callback = int (*)(KBusyIndicatorWidget*, int, int, void**);
    using KBusyIndicatorWidget_MinimumSizeHint_Callback = QSize* (*)();
    using KBusyIndicatorWidget_ShowEvent_Callback = void (*)(KBusyIndicatorWidget*, QShowEvent*);
    using KBusyIndicatorWidget_HideEvent_Callback = void (*)(KBusyIndicatorWidget*, QHideEvent*);
    using KBusyIndicatorWidget_ResizeEvent_Callback = void (*)(KBusyIndicatorWidget*, QResizeEvent*);
    using KBusyIndicatorWidget_PaintEvent_Callback = void (*)(KBusyIndicatorWidget*, QPaintEvent*);
    using KBusyIndicatorWidget_Event_Callback = bool (*)(KBusyIndicatorWidget*, QEvent*);
    using KBusyIndicatorWidget_DevType_Callback = int (*)();
    using KBusyIndicatorWidget_SetVisible_Callback = void (*)(KBusyIndicatorWidget*, bool);
    using KBusyIndicatorWidget_SizeHint_Callback = QSize* (*)();
    using KBusyIndicatorWidget_HeightForWidth_Callback = int (*)(const KBusyIndicatorWidget*, int);
    using KBusyIndicatorWidget_HasHeightForWidth_Callback = bool (*)();
    using KBusyIndicatorWidget_PaintEngine_Callback = QPaintEngine* (*)();
    using KBusyIndicatorWidget_MousePressEvent_Callback = void (*)(KBusyIndicatorWidget*, QMouseEvent*);
    using KBusyIndicatorWidget_MouseReleaseEvent_Callback = void (*)(KBusyIndicatorWidget*, QMouseEvent*);
    using KBusyIndicatorWidget_MouseDoubleClickEvent_Callback = void (*)(KBusyIndicatorWidget*, QMouseEvent*);
    using KBusyIndicatorWidget_MouseMoveEvent_Callback = void (*)(KBusyIndicatorWidget*, QMouseEvent*);
    using KBusyIndicatorWidget_WheelEvent_Callback = void (*)(KBusyIndicatorWidget*, QWheelEvent*);
    using KBusyIndicatorWidget_KeyPressEvent_Callback = void (*)(KBusyIndicatorWidget*, QKeyEvent*);
    using KBusyIndicatorWidget_KeyReleaseEvent_Callback = void (*)(KBusyIndicatorWidget*, QKeyEvent*);
    using KBusyIndicatorWidget_FocusInEvent_Callback = void (*)(KBusyIndicatorWidget*, QFocusEvent*);
    using KBusyIndicatorWidget_FocusOutEvent_Callback = void (*)(KBusyIndicatorWidget*, QFocusEvent*);
    using KBusyIndicatorWidget_EnterEvent_Callback = void (*)(KBusyIndicatorWidget*, QEnterEvent*);
    using KBusyIndicatorWidget_LeaveEvent_Callback = void (*)(KBusyIndicatorWidget*, QEvent*);
    using KBusyIndicatorWidget_MoveEvent_Callback = void (*)(KBusyIndicatorWidget*, QMoveEvent*);
    using KBusyIndicatorWidget_CloseEvent_Callback = void (*)(KBusyIndicatorWidget*, QCloseEvent*);
    using KBusyIndicatorWidget_ContextMenuEvent_Callback = void (*)(KBusyIndicatorWidget*, QContextMenuEvent*);
    using KBusyIndicatorWidget_TabletEvent_Callback = void (*)(KBusyIndicatorWidget*, QTabletEvent*);
    using KBusyIndicatorWidget_ActionEvent_Callback = void (*)(KBusyIndicatorWidget*, QActionEvent*);
    using KBusyIndicatorWidget_DragEnterEvent_Callback = void (*)(KBusyIndicatorWidget*, QDragEnterEvent*);
    using KBusyIndicatorWidget_DragMoveEvent_Callback = void (*)(KBusyIndicatorWidget*, QDragMoveEvent*);
    using KBusyIndicatorWidget_DragLeaveEvent_Callback = void (*)(KBusyIndicatorWidget*, QDragLeaveEvent*);
    using KBusyIndicatorWidget_DropEvent_Callback = void (*)(KBusyIndicatorWidget*, QDropEvent*);
    using KBusyIndicatorWidget_NativeEvent_Callback = bool (*)(KBusyIndicatorWidget*, libqt_string, void*, intptr_t*);
    using KBusyIndicatorWidget_ChangeEvent_Callback = void (*)(KBusyIndicatorWidget*, QEvent*);
    using KBusyIndicatorWidget_Metric_Callback = int (*)(const KBusyIndicatorWidget*, int);
    using KBusyIndicatorWidget_InitPainter_Callback = void (*)(const KBusyIndicatorWidget*, QPainter*);
    using KBusyIndicatorWidget_Redirected_Callback = QPaintDevice* (*)(const KBusyIndicatorWidget*, QPoint*);
    using KBusyIndicatorWidget_SharedPainter_Callback = QPainter* (*)();
    using KBusyIndicatorWidget_InputMethodEvent_Callback = void (*)(KBusyIndicatorWidget*, QInputMethodEvent*);
    using KBusyIndicatorWidget_InputMethodQuery_Callback = QVariant* (*)(const KBusyIndicatorWidget*, int);
    using KBusyIndicatorWidget_FocusNextPrevChild_Callback = bool (*)(KBusyIndicatorWidget*, bool);
    using KBusyIndicatorWidget_EventFilter_Callback = bool (*)(KBusyIndicatorWidget*, QObject*, QEvent*);
    using KBusyIndicatorWidget_TimerEvent_Callback = void (*)(KBusyIndicatorWidget*, QTimerEvent*);
    using KBusyIndicatorWidget_ChildEvent_Callback = void (*)(KBusyIndicatorWidget*, QChildEvent*);
    using KBusyIndicatorWidget_CustomEvent_Callback = void (*)(KBusyIndicatorWidget*, QEvent*);
    using KBusyIndicatorWidget_ConnectNotify_Callback = void (*)(KBusyIndicatorWidget*, QMetaMethod*);
    using KBusyIndicatorWidget_DisconnectNotify_Callback = void (*)(KBusyIndicatorWidget*, QMetaMethod*);
    using KBusyIndicatorWidget_UpdateMicroFocus_Callback = void (*)();
    using KBusyIndicatorWidget_Create_Callback = void (*)();
    using KBusyIndicatorWidget_Destroy_Callback = void (*)();
    using KBusyIndicatorWidget_FocusNextChild_Callback = bool (*)();
    using KBusyIndicatorWidget_FocusPreviousChild_Callback = bool (*)();
    using KBusyIndicatorWidget_Sender_Callback = QObject* (*)();
    using KBusyIndicatorWidget_SenderSignalIndex_Callback = int (*)();
    using KBusyIndicatorWidget_Receivers_Callback = int (*)(const KBusyIndicatorWidget*, const char*);
    using KBusyIndicatorWidget_IsSignalConnected_Callback = bool (*)(const KBusyIndicatorWidget*, QMetaMethod*);
    using KBusyIndicatorWidget_GetDecodedMetricF_Callback = double (*)(const KBusyIndicatorWidget*, int, int);

  protected:
    // Instance callback storage
    KBusyIndicatorWidget_Metacall_Callback kbusyindicatorwidget_metacall_callback = nullptr;
    KBusyIndicatorWidget_MinimumSizeHint_Callback kbusyindicatorwidget_minimumsizehint_callback = nullptr;
    KBusyIndicatorWidget_ShowEvent_Callback kbusyindicatorwidget_showevent_callback = nullptr;
    KBusyIndicatorWidget_HideEvent_Callback kbusyindicatorwidget_hideevent_callback = nullptr;
    KBusyIndicatorWidget_ResizeEvent_Callback kbusyindicatorwidget_resizeevent_callback = nullptr;
    KBusyIndicatorWidget_PaintEvent_Callback kbusyindicatorwidget_paintevent_callback = nullptr;
    KBusyIndicatorWidget_Event_Callback kbusyindicatorwidget_event_callback = nullptr;
    KBusyIndicatorWidget_DevType_Callback kbusyindicatorwidget_devtype_callback = nullptr;
    KBusyIndicatorWidget_SetVisible_Callback kbusyindicatorwidget_setvisible_callback = nullptr;
    KBusyIndicatorWidget_SizeHint_Callback kbusyindicatorwidget_sizehint_callback = nullptr;
    KBusyIndicatorWidget_HeightForWidth_Callback kbusyindicatorwidget_heightforwidth_callback = nullptr;
    KBusyIndicatorWidget_HasHeightForWidth_Callback kbusyindicatorwidget_hasheightforwidth_callback = nullptr;
    KBusyIndicatorWidget_PaintEngine_Callback kbusyindicatorwidget_paintengine_callback = nullptr;
    KBusyIndicatorWidget_MousePressEvent_Callback kbusyindicatorwidget_mousepressevent_callback = nullptr;
    KBusyIndicatorWidget_MouseReleaseEvent_Callback kbusyindicatorwidget_mousereleaseevent_callback = nullptr;
    KBusyIndicatorWidget_MouseDoubleClickEvent_Callback kbusyindicatorwidget_mousedoubleclickevent_callback = nullptr;
    KBusyIndicatorWidget_MouseMoveEvent_Callback kbusyindicatorwidget_mousemoveevent_callback = nullptr;
    KBusyIndicatorWidget_WheelEvent_Callback kbusyindicatorwidget_wheelevent_callback = nullptr;
    KBusyIndicatorWidget_KeyPressEvent_Callback kbusyindicatorwidget_keypressevent_callback = nullptr;
    KBusyIndicatorWidget_KeyReleaseEvent_Callback kbusyindicatorwidget_keyreleaseevent_callback = nullptr;
    KBusyIndicatorWidget_FocusInEvent_Callback kbusyindicatorwidget_focusinevent_callback = nullptr;
    KBusyIndicatorWidget_FocusOutEvent_Callback kbusyindicatorwidget_focusoutevent_callback = nullptr;
    KBusyIndicatorWidget_EnterEvent_Callback kbusyindicatorwidget_enterevent_callback = nullptr;
    KBusyIndicatorWidget_LeaveEvent_Callback kbusyindicatorwidget_leaveevent_callback = nullptr;
    KBusyIndicatorWidget_MoveEvent_Callback kbusyindicatorwidget_moveevent_callback = nullptr;
    KBusyIndicatorWidget_CloseEvent_Callback kbusyindicatorwidget_closeevent_callback = nullptr;
    KBusyIndicatorWidget_ContextMenuEvent_Callback kbusyindicatorwidget_contextmenuevent_callback = nullptr;
    KBusyIndicatorWidget_TabletEvent_Callback kbusyindicatorwidget_tabletevent_callback = nullptr;
    KBusyIndicatorWidget_ActionEvent_Callback kbusyindicatorwidget_actionevent_callback = nullptr;
    KBusyIndicatorWidget_DragEnterEvent_Callback kbusyindicatorwidget_dragenterevent_callback = nullptr;
    KBusyIndicatorWidget_DragMoveEvent_Callback kbusyindicatorwidget_dragmoveevent_callback = nullptr;
    KBusyIndicatorWidget_DragLeaveEvent_Callback kbusyindicatorwidget_dragleaveevent_callback = nullptr;
    KBusyIndicatorWidget_DropEvent_Callback kbusyindicatorwidget_dropevent_callback = nullptr;
    KBusyIndicatorWidget_NativeEvent_Callback kbusyindicatorwidget_nativeevent_callback = nullptr;
    KBusyIndicatorWidget_ChangeEvent_Callback kbusyindicatorwidget_changeevent_callback = nullptr;
    KBusyIndicatorWidget_Metric_Callback kbusyindicatorwidget_metric_callback = nullptr;
    KBusyIndicatorWidget_InitPainter_Callback kbusyindicatorwidget_initpainter_callback = nullptr;
    KBusyIndicatorWidget_Redirected_Callback kbusyindicatorwidget_redirected_callback = nullptr;
    KBusyIndicatorWidget_SharedPainter_Callback kbusyindicatorwidget_sharedpainter_callback = nullptr;
    KBusyIndicatorWidget_InputMethodEvent_Callback kbusyindicatorwidget_inputmethodevent_callback = nullptr;
    KBusyIndicatorWidget_InputMethodQuery_Callback kbusyindicatorwidget_inputmethodquery_callback = nullptr;
    KBusyIndicatorWidget_FocusNextPrevChild_Callback kbusyindicatorwidget_focusnextprevchild_callback = nullptr;
    KBusyIndicatorWidget_EventFilter_Callback kbusyindicatorwidget_eventfilter_callback = nullptr;
    KBusyIndicatorWidget_TimerEvent_Callback kbusyindicatorwidget_timerevent_callback = nullptr;
    KBusyIndicatorWidget_ChildEvent_Callback kbusyindicatorwidget_childevent_callback = nullptr;
    KBusyIndicatorWidget_CustomEvent_Callback kbusyindicatorwidget_customevent_callback = nullptr;
    KBusyIndicatorWidget_ConnectNotify_Callback kbusyindicatorwidget_connectnotify_callback = nullptr;
    KBusyIndicatorWidget_DisconnectNotify_Callback kbusyindicatorwidget_disconnectnotify_callback = nullptr;
    KBusyIndicatorWidget_UpdateMicroFocus_Callback kbusyindicatorwidget_updatemicrofocus_callback = nullptr;
    KBusyIndicatorWidget_Create_Callback kbusyindicatorwidget_create_callback = nullptr;
    KBusyIndicatorWidget_Destroy_Callback kbusyindicatorwidget_destroy_callback = nullptr;
    KBusyIndicatorWidget_FocusNextChild_Callback kbusyindicatorwidget_focusnextchild_callback = nullptr;
    KBusyIndicatorWidget_FocusPreviousChild_Callback kbusyindicatorwidget_focuspreviouschild_callback = nullptr;
    KBusyIndicatorWidget_Sender_Callback kbusyindicatorwidget_sender_callback = nullptr;
    KBusyIndicatorWidget_SenderSignalIndex_Callback kbusyindicatorwidget_sendersignalindex_callback = nullptr;
    KBusyIndicatorWidget_Receivers_Callback kbusyindicatorwidget_receivers_callback = nullptr;
    KBusyIndicatorWidget_IsSignalConnected_Callback kbusyindicatorwidget_issignalconnected_callback = nullptr;
    KBusyIndicatorWidget_GetDecodedMetricF_Callback kbusyindicatorwidget_getdecodedmetricf_callback = nullptr;

    // Instance base flags
    mutable bool kbusyindicatorwidget_metacall_isbase = false;
    mutable bool kbusyindicatorwidget_minimumsizehint_isbase = false;
    mutable bool kbusyindicatorwidget_showevent_isbase = false;
    mutable bool kbusyindicatorwidget_hideevent_isbase = false;
    mutable bool kbusyindicatorwidget_resizeevent_isbase = false;
    mutable bool kbusyindicatorwidget_paintevent_isbase = false;
    mutable bool kbusyindicatorwidget_event_isbase = false;
    mutable bool kbusyindicatorwidget_devtype_isbase = false;
    mutable bool kbusyindicatorwidget_setvisible_isbase = false;
    mutable bool kbusyindicatorwidget_sizehint_isbase = false;
    mutable bool kbusyindicatorwidget_heightforwidth_isbase = false;
    mutable bool kbusyindicatorwidget_hasheightforwidth_isbase = false;
    mutable bool kbusyindicatorwidget_paintengine_isbase = false;
    mutable bool kbusyindicatorwidget_mousepressevent_isbase = false;
    mutable bool kbusyindicatorwidget_mousereleaseevent_isbase = false;
    mutable bool kbusyindicatorwidget_mousedoubleclickevent_isbase = false;
    mutable bool kbusyindicatorwidget_mousemoveevent_isbase = false;
    mutable bool kbusyindicatorwidget_wheelevent_isbase = false;
    mutable bool kbusyindicatorwidget_keypressevent_isbase = false;
    mutable bool kbusyindicatorwidget_keyreleaseevent_isbase = false;
    mutable bool kbusyindicatorwidget_focusinevent_isbase = false;
    mutable bool kbusyindicatorwidget_focusoutevent_isbase = false;
    mutable bool kbusyindicatorwidget_enterevent_isbase = false;
    mutable bool kbusyindicatorwidget_leaveevent_isbase = false;
    mutable bool kbusyindicatorwidget_moveevent_isbase = false;
    mutable bool kbusyindicatorwidget_closeevent_isbase = false;
    mutable bool kbusyindicatorwidget_contextmenuevent_isbase = false;
    mutable bool kbusyindicatorwidget_tabletevent_isbase = false;
    mutable bool kbusyindicatorwidget_actionevent_isbase = false;
    mutable bool kbusyindicatorwidget_dragenterevent_isbase = false;
    mutable bool kbusyindicatorwidget_dragmoveevent_isbase = false;
    mutable bool kbusyindicatorwidget_dragleaveevent_isbase = false;
    mutable bool kbusyindicatorwidget_dropevent_isbase = false;
    mutable bool kbusyindicatorwidget_nativeevent_isbase = false;
    mutable bool kbusyindicatorwidget_changeevent_isbase = false;
    mutable bool kbusyindicatorwidget_metric_isbase = false;
    mutable bool kbusyindicatorwidget_initpainter_isbase = false;
    mutable bool kbusyindicatorwidget_redirected_isbase = false;
    mutable bool kbusyindicatorwidget_sharedpainter_isbase = false;
    mutable bool kbusyindicatorwidget_inputmethodevent_isbase = false;
    mutable bool kbusyindicatorwidget_inputmethodquery_isbase = false;
    mutable bool kbusyindicatorwidget_focusnextprevchild_isbase = false;
    mutable bool kbusyindicatorwidget_eventfilter_isbase = false;
    mutable bool kbusyindicatorwidget_timerevent_isbase = false;
    mutable bool kbusyindicatorwidget_childevent_isbase = false;
    mutable bool kbusyindicatorwidget_customevent_isbase = false;
    mutable bool kbusyindicatorwidget_connectnotify_isbase = false;
    mutable bool kbusyindicatorwidget_disconnectnotify_isbase = false;
    mutable bool kbusyindicatorwidget_updatemicrofocus_isbase = false;
    mutable bool kbusyindicatorwidget_create_isbase = false;
    mutable bool kbusyindicatorwidget_destroy_isbase = false;
    mutable bool kbusyindicatorwidget_focusnextchild_isbase = false;
    mutable bool kbusyindicatorwidget_focuspreviouschild_isbase = false;
    mutable bool kbusyindicatorwidget_sender_isbase = false;
    mutable bool kbusyindicatorwidget_sendersignalindex_isbase = false;
    mutable bool kbusyindicatorwidget_receivers_isbase = false;
    mutable bool kbusyindicatorwidget_issignalconnected_isbase = false;
    mutable bool kbusyindicatorwidget_getdecodedmetricf_isbase = false;

  public:
    VirtualKBusyIndicatorWidget(QWidget* parent) : KBusyIndicatorWidget(parent) {};
    VirtualKBusyIndicatorWidget() : KBusyIndicatorWidget() {};

    ~VirtualKBusyIndicatorWidget() {
        kbusyindicatorwidget_metacall_callback = nullptr;
        kbusyindicatorwidget_minimumsizehint_callback = nullptr;
        kbusyindicatorwidget_showevent_callback = nullptr;
        kbusyindicatorwidget_hideevent_callback = nullptr;
        kbusyindicatorwidget_resizeevent_callback = nullptr;
        kbusyindicatorwidget_paintevent_callback = nullptr;
        kbusyindicatorwidget_event_callback = nullptr;
        kbusyindicatorwidget_devtype_callback = nullptr;
        kbusyindicatorwidget_setvisible_callback = nullptr;
        kbusyindicatorwidget_sizehint_callback = nullptr;
        kbusyindicatorwidget_heightforwidth_callback = nullptr;
        kbusyindicatorwidget_hasheightforwidth_callback = nullptr;
        kbusyindicatorwidget_paintengine_callback = nullptr;
        kbusyindicatorwidget_mousepressevent_callback = nullptr;
        kbusyindicatorwidget_mousereleaseevent_callback = nullptr;
        kbusyindicatorwidget_mousedoubleclickevent_callback = nullptr;
        kbusyindicatorwidget_mousemoveevent_callback = nullptr;
        kbusyindicatorwidget_wheelevent_callback = nullptr;
        kbusyindicatorwidget_keypressevent_callback = nullptr;
        kbusyindicatorwidget_keyreleaseevent_callback = nullptr;
        kbusyindicatorwidget_focusinevent_callback = nullptr;
        kbusyindicatorwidget_focusoutevent_callback = nullptr;
        kbusyindicatorwidget_enterevent_callback = nullptr;
        kbusyindicatorwidget_leaveevent_callback = nullptr;
        kbusyindicatorwidget_moveevent_callback = nullptr;
        kbusyindicatorwidget_closeevent_callback = nullptr;
        kbusyindicatorwidget_contextmenuevent_callback = nullptr;
        kbusyindicatorwidget_tabletevent_callback = nullptr;
        kbusyindicatorwidget_actionevent_callback = nullptr;
        kbusyindicatorwidget_dragenterevent_callback = nullptr;
        kbusyindicatorwidget_dragmoveevent_callback = nullptr;
        kbusyindicatorwidget_dragleaveevent_callback = nullptr;
        kbusyindicatorwidget_dropevent_callback = nullptr;
        kbusyindicatorwidget_nativeevent_callback = nullptr;
        kbusyindicatorwidget_changeevent_callback = nullptr;
        kbusyindicatorwidget_metric_callback = nullptr;
        kbusyindicatorwidget_initpainter_callback = nullptr;
        kbusyindicatorwidget_redirected_callback = nullptr;
        kbusyindicatorwidget_sharedpainter_callback = nullptr;
        kbusyindicatorwidget_inputmethodevent_callback = nullptr;
        kbusyindicatorwidget_inputmethodquery_callback = nullptr;
        kbusyindicatorwidget_focusnextprevchild_callback = nullptr;
        kbusyindicatorwidget_eventfilter_callback = nullptr;
        kbusyindicatorwidget_timerevent_callback = nullptr;
        kbusyindicatorwidget_childevent_callback = nullptr;
        kbusyindicatorwidget_customevent_callback = nullptr;
        kbusyindicatorwidget_connectnotify_callback = nullptr;
        kbusyindicatorwidget_disconnectnotify_callback = nullptr;
        kbusyindicatorwidget_updatemicrofocus_callback = nullptr;
        kbusyindicatorwidget_create_callback = nullptr;
        kbusyindicatorwidget_destroy_callback = nullptr;
        kbusyindicatorwidget_focusnextchild_callback = nullptr;
        kbusyindicatorwidget_focuspreviouschild_callback = nullptr;
        kbusyindicatorwidget_sender_callback = nullptr;
        kbusyindicatorwidget_sendersignalindex_callback = nullptr;
        kbusyindicatorwidget_receivers_callback = nullptr;
        kbusyindicatorwidget_issignalconnected_callback = nullptr;
        kbusyindicatorwidget_getdecodedmetricf_callback = nullptr;
    }

    // Callback setters
    inline void setKBusyIndicatorWidget_Metacall_Callback(KBusyIndicatorWidget_Metacall_Callback cb) { kbusyindicatorwidget_metacall_callback = cb; }
    inline void setKBusyIndicatorWidget_MinimumSizeHint_Callback(KBusyIndicatorWidget_MinimumSizeHint_Callback cb) { kbusyindicatorwidget_minimumsizehint_callback = cb; }
    inline void setKBusyIndicatorWidget_ShowEvent_Callback(KBusyIndicatorWidget_ShowEvent_Callback cb) { kbusyindicatorwidget_showevent_callback = cb; }
    inline void setKBusyIndicatorWidget_HideEvent_Callback(KBusyIndicatorWidget_HideEvent_Callback cb) { kbusyindicatorwidget_hideevent_callback = cb; }
    inline void setKBusyIndicatorWidget_ResizeEvent_Callback(KBusyIndicatorWidget_ResizeEvent_Callback cb) { kbusyindicatorwidget_resizeevent_callback = cb; }
    inline void setKBusyIndicatorWidget_PaintEvent_Callback(KBusyIndicatorWidget_PaintEvent_Callback cb) { kbusyindicatorwidget_paintevent_callback = cb; }
    inline void setKBusyIndicatorWidget_Event_Callback(KBusyIndicatorWidget_Event_Callback cb) { kbusyindicatorwidget_event_callback = cb; }
    inline void setKBusyIndicatorWidget_DevType_Callback(KBusyIndicatorWidget_DevType_Callback cb) { kbusyindicatorwidget_devtype_callback = cb; }
    inline void setKBusyIndicatorWidget_SetVisible_Callback(KBusyIndicatorWidget_SetVisible_Callback cb) { kbusyindicatorwidget_setvisible_callback = cb; }
    inline void setKBusyIndicatorWidget_SizeHint_Callback(KBusyIndicatorWidget_SizeHint_Callback cb) { kbusyindicatorwidget_sizehint_callback = cb; }
    inline void setKBusyIndicatorWidget_HeightForWidth_Callback(KBusyIndicatorWidget_HeightForWidth_Callback cb) { kbusyindicatorwidget_heightforwidth_callback = cb; }
    inline void setKBusyIndicatorWidget_HasHeightForWidth_Callback(KBusyIndicatorWidget_HasHeightForWidth_Callback cb) { kbusyindicatorwidget_hasheightforwidth_callback = cb; }
    inline void setKBusyIndicatorWidget_PaintEngine_Callback(KBusyIndicatorWidget_PaintEngine_Callback cb) { kbusyindicatorwidget_paintengine_callback = cb; }
    inline void setKBusyIndicatorWidget_MousePressEvent_Callback(KBusyIndicatorWidget_MousePressEvent_Callback cb) { kbusyindicatorwidget_mousepressevent_callback = cb; }
    inline void setKBusyIndicatorWidget_MouseReleaseEvent_Callback(KBusyIndicatorWidget_MouseReleaseEvent_Callback cb) { kbusyindicatorwidget_mousereleaseevent_callback = cb; }
    inline void setKBusyIndicatorWidget_MouseDoubleClickEvent_Callback(KBusyIndicatorWidget_MouseDoubleClickEvent_Callback cb) { kbusyindicatorwidget_mousedoubleclickevent_callback = cb; }
    inline void setKBusyIndicatorWidget_MouseMoveEvent_Callback(KBusyIndicatorWidget_MouseMoveEvent_Callback cb) { kbusyindicatorwidget_mousemoveevent_callback = cb; }
    inline void setKBusyIndicatorWidget_WheelEvent_Callback(KBusyIndicatorWidget_WheelEvent_Callback cb) { kbusyindicatorwidget_wheelevent_callback = cb; }
    inline void setKBusyIndicatorWidget_KeyPressEvent_Callback(KBusyIndicatorWidget_KeyPressEvent_Callback cb) { kbusyindicatorwidget_keypressevent_callback = cb; }
    inline void setKBusyIndicatorWidget_KeyReleaseEvent_Callback(KBusyIndicatorWidget_KeyReleaseEvent_Callback cb) { kbusyindicatorwidget_keyreleaseevent_callback = cb; }
    inline void setKBusyIndicatorWidget_FocusInEvent_Callback(KBusyIndicatorWidget_FocusInEvent_Callback cb) { kbusyindicatorwidget_focusinevent_callback = cb; }
    inline void setKBusyIndicatorWidget_FocusOutEvent_Callback(KBusyIndicatorWidget_FocusOutEvent_Callback cb) { kbusyindicatorwidget_focusoutevent_callback = cb; }
    inline void setKBusyIndicatorWidget_EnterEvent_Callback(KBusyIndicatorWidget_EnterEvent_Callback cb) { kbusyindicatorwidget_enterevent_callback = cb; }
    inline void setKBusyIndicatorWidget_LeaveEvent_Callback(KBusyIndicatorWidget_LeaveEvent_Callback cb) { kbusyindicatorwidget_leaveevent_callback = cb; }
    inline void setKBusyIndicatorWidget_MoveEvent_Callback(KBusyIndicatorWidget_MoveEvent_Callback cb) { kbusyindicatorwidget_moveevent_callback = cb; }
    inline void setKBusyIndicatorWidget_CloseEvent_Callback(KBusyIndicatorWidget_CloseEvent_Callback cb) { kbusyindicatorwidget_closeevent_callback = cb; }
    inline void setKBusyIndicatorWidget_ContextMenuEvent_Callback(KBusyIndicatorWidget_ContextMenuEvent_Callback cb) { kbusyindicatorwidget_contextmenuevent_callback = cb; }
    inline void setKBusyIndicatorWidget_TabletEvent_Callback(KBusyIndicatorWidget_TabletEvent_Callback cb) { kbusyindicatorwidget_tabletevent_callback = cb; }
    inline void setKBusyIndicatorWidget_ActionEvent_Callback(KBusyIndicatorWidget_ActionEvent_Callback cb) { kbusyindicatorwidget_actionevent_callback = cb; }
    inline void setKBusyIndicatorWidget_DragEnterEvent_Callback(KBusyIndicatorWidget_DragEnterEvent_Callback cb) { kbusyindicatorwidget_dragenterevent_callback = cb; }
    inline void setKBusyIndicatorWidget_DragMoveEvent_Callback(KBusyIndicatorWidget_DragMoveEvent_Callback cb) { kbusyindicatorwidget_dragmoveevent_callback = cb; }
    inline void setKBusyIndicatorWidget_DragLeaveEvent_Callback(KBusyIndicatorWidget_DragLeaveEvent_Callback cb) { kbusyindicatorwidget_dragleaveevent_callback = cb; }
    inline void setKBusyIndicatorWidget_DropEvent_Callback(KBusyIndicatorWidget_DropEvent_Callback cb) { kbusyindicatorwidget_dropevent_callback = cb; }
    inline void setKBusyIndicatorWidget_NativeEvent_Callback(KBusyIndicatorWidget_NativeEvent_Callback cb) { kbusyindicatorwidget_nativeevent_callback = cb; }
    inline void setKBusyIndicatorWidget_ChangeEvent_Callback(KBusyIndicatorWidget_ChangeEvent_Callback cb) { kbusyindicatorwidget_changeevent_callback = cb; }
    inline void setKBusyIndicatorWidget_Metric_Callback(KBusyIndicatorWidget_Metric_Callback cb) { kbusyindicatorwidget_metric_callback = cb; }
    inline void setKBusyIndicatorWidget_InitPainter_Callback(KBusyIndicatorWidget_InitPainter_Callback cb) { kbusyindicatorwidget_initpainter_callback = cb; }
    inline void setKBusyIndicatorWidget_Redirected_Callback(KBusyIndicatorWidget_Redirected_Callback cb) { kbusyindicatorwidget_redirected_callback = cb; }
    inline void setKBusyIndicatorWidget_SharedPainter_Callback(KBusyIndicatorWidget_SharedPainter_Callback cb) { kbusyindicatorwidget_sharedpainter_callback = cb; }
    inline void setKBusyIndicatorWidget_InputMethodEvent_Callback(KBusyIndicatorWidget_InputMethodEvent_Callback cb) { kbusyindicatorwidget_inputmethodevent_callback = cb; }
    inline void setKBusyIndicatorWidget_InputMethodQuery_Callback(KBusyIndicatorWidget_InputMethodQuery_Callback cb) { kbusyindicatorwidget_inputmethodquery_callback = cb; }
    inline void setKBusyIndicatorWidget_FocusNextPrevChild_Callback(KBusyIndicatorWidget_FocusNextPrevChild_Callback cb) { kbusyindicatorwidget_focusnextprevchild_callback = cb; }
    inline void setKBusyIndicatorWidget_EventFilter_Callback(KBusyIndicatorWidget_EventFilter_Callback cb) { kbusyindicatorwidget_eventfilter_callback = cb; }
    inline void setKBusyIndicatorWidget_TimerEvent_Callback(KBusyIndicatorWidget_TimerEvent_Callback cb) { kbusyindicatorwidget_timerevent_callback = cb; }
    inline void setKBusyIndicatorWidget_ChildEvent_Callback(KBusyIndicatorWidget_ChildEvent_Callback cb) { kbusyindicatorwidget_childevent_callback = cb; }
    inline void setKBusyIndicatorWidget_CustomEvent_Callback(KBusyIndicatorWidget_CustomEvent_Callback cb) { kbusyindicatorwidget_customevent_callback = cb; }
    inline void setKBusyIndicatorWidget_ConnectNotify_Callback(KBusyIndicatorWidget_ConnectNotify_Callback cb) { kbusyindicatorwidget_connectnotify_callback = cb; }
    inline void setKBusyIndicatorWidget_DisconnectNotify_Callback(KBusyIndicatorWidget_DisconnectNotify_Callback cb) { kbusyindicatorwidget_disconnectnotify_callback = cb; }
    inline void setKBusyIndicatorWidget_UpdateMicroFocus_Callback(KBusyIndicatorWidget_UpdateMicroFocus_Callback cb) { kbusyindicatorwidget_updatemicrofocus_callback = cb; }
    inline void setKBusyIndicatorWidget_Create_Callback(KBusyIndicatorWidget_Create_Callback cb) { kbusyindicatorwidget_create_callback = cb; }
    inline void setKBusyIndicatorWidget_Destroy_Callback(KBusyIndicatorWidget_Destroy_Callback cb) { kbusyindicatorwidget_destroy_callback = cb; }
    inline void setKBusyIndicatorWidget_FocusNextChild_Callback(KBusyIndicatorWidget_FocusNextChild_Callback cb) { kbusyindicatorwidget_focusnextchild_callback = cb; }
    inline void setKBusyIndicatorWidget_FocusPreviousChild_Callback(KBusyIndicatorWidget_FocusPreviousChild_Callback cb) { kbusyindicatorwidget_focuspreviouschild_callback = cb; }
    inline void setKBusyIndicatorWidget_Sender_Callback(KBusyIndicatorWidget_Sender_Callback cb) { kbusyindicatorwidget_sender_callback = cb; }
    inline void setKBusyIndicatorWidget_SenderSignalIndex_Callback(KBusyIndicatorWidget_SenderSignalIndex_Callback cb) { kbusyindicatorwidget_sendersignalindex_callback = cb; }
    inline void setKBusyIndicatorWidget_Receivers_Callback(KBusyIndicatorWidget_Receivers_Callback cb) { kbusyindicatorwidget_receivers_callback = cb; }
    inline void setKBusyIndicatorWidget_IsSignalConnected_Callback(KBusyIndicatorWidget_IsSignalConnected_Callback cb) { kbusyindicatorwidget_issignalconnected_callback = cb; }
    inline void setKBusyIndicatorWidget_GetDecodedMetricF_Callback(KBusyIndicatorWidget_GetDecodedMetricF_Callback cb) { kbusyindicatorwidget_getdecodedmetricf_callback = cb; }

    // Base flag setters
    inline void setKBusyIndicatorWidget_Metacall_IsBase(bool value) const { kbusyindicatorwidget_metacall_isbase = value; }
    inline void setKBusyIndicatorWidget_MinimumSizeHint_IsBase(bool value) const { kbusyindicatorwidget_minimumsizehint_isbase = value; }
    inline void setKBusyIndicatorWidget_ShowEvent_IsBase(bool value) const { kbusyindicatorwidget_showevent_isbase = value; }
    inline void setKBusyIndicatorWidget_HideEvent_IsBase(bool value) const { kbusyindicatorwidget_hideevent_isbase = value; }
    inline void setKBusyIndicatorWidget_ResizeEvent_IsBase(bool value) const { kbusyindicatorwidget_resizeevent_isbase = value; }
    inline void setKBusyIndicatorWidget_PaintEvent_IsBase(bool value) const { kbusyindicatorwidget_paintevent_isbase = value; }
    inline void setKBusyIndicatorWidget_Event_IsBase(bool value) const { kbusyindicatorwidget_event_isbase = value; }
    inline void setKBusyIndicatorWidget_DevType_IsBase(bool value) const { kbusyindicatorwidget_devtype_isbase = value; }
    inline void setKBusyIndicatorWidget_SetVisible_IsBase(bool value) const { kbusyindicatorwidget_setvisible_isbase = value; }
    inline void setKBusyIndicatorWidget_SizeHint_IsBase(bool value) const { kbusyindicatorwidget_sizehint_isbase = value; }
    inline void setKBusyIndicatorWidget_HeightForWidth_IsBase(bool value) const { kbusyindicatorwidget_heightforwidth_isbase = value; }
    inline void setKBusyIndicatorWidget_HasHeightForWidth_IsBase(bool value) const { kbusyindicatorwidget_hasheightforwidth_isbase = value; }
    inline void setKBusyIndicatorWidget_PaintEngine_IsBase(bool value) const { kbusyindicatorwidget_paintengine_isbase = value; }
    inline void setKBusyIndicatorWidget_MousePressEvent_IsBase(bool value) const { kbusyindicatorwidget_mousepressevent_isbase = value; }
    inline void setKBusyIndicatorWidget_MouseReleaseEvent_IsBase(bool value) const { kbusyindicatorwidget_mousereleaseevent_isbase = value; }
    inline void setKBusyIndicatorWidget_MouseDoubleClickEvent_IsBase(bool value) const { kbusyindicatorwidget_mousedoubleclickevent_isbase = value; }
    inline void setKBusyIndicatorWidget_MouseMoveEvent_IsBase(bool value) const { kbusyindicatorwidget_mousemoveevent_isbase = value; }
    inline void setKBusyIndicatorWidget_WheelEvent_IsBase(bool value) const { kbusyindicatorwidget_wheelevent_isbase = value; }
    inline void setKBusyIndicatorWidget_KeyPressEvent_IsBase(bool value) const { kbusyindicatorwidget_keypressevent_isbase = value; }
    inline void setKBusyIndicatorWidget_KeyReleaseEvent_IsBase(bool value) const { kbusyindicatorwidget_keyreleaseevent_isbase = value; }
    inline void setKBusyIndicatorWidget_FocusInEvent_IsBase(bool value) const { kbusyindicatorwidget_focusinevent_isbase = value; }
    inline void setKBusyIndicatorWidget_FocusOutEvent_IsBase(bool value) const { kbusyindicatorwidget_focusoutevent_isbase = value; }
    inline void setKBusyIndicatorWidget_EnterEvent_IsBase(bool value) const { kbusyindicatorwidget_enterevent_isbase = value; }
    inline void setKBusyIndicatorWidget_LeaveEvent_IsBase(bool value) const { kbusyindicatorwidget_leaveevent_isbase = value; }
    inline void setKBusyIndicatorWidget_MoveEvent_IsBase(bool value) const { kbusyindicatorwidget_moveevent_isbase = value; }
    inline void setKBusyIndicatorWidget_CloseEvent_IsBase(bool value) const { kbusyindicatorwidget_closeevent_isbase = value; }
    inline void setKBusyIndicatorWidget_ContextMenuEvent_IsBase(bool value) const { kbusyindicatorwidget_contextmenuevent_isbase = value; }
    inline void setKBusyIndicatorWidget_TabletEvent_IsBase(bool value) const { kbusyindicatorwidget_tabletevent_isbase = value; }
    inline void setKBusyIndicatorWidget_ActionEvent_IsBase(bool value) const { kbusyindicatorwidget_actionevent_isbase = value; }
    inline void setKBusyIndicatorWidget_DragEnterEvent_IsBase(bool value) const { kbusyindicatorwidget_dragenterevent_isbase = value; }
    inline void setKBusyIndicatorWidget_DragMoveEvent_IsBase(bool value) const { kbusyindicatorwidget_dragmoveevent_isbase = value; }
    inline void setKBusyIndicatorWidget_DragLeaveEvent_IsBase(bool value) const { kbusyindicatorwidget_dragleaveevent_isbase = value; }
    inline void setKBusyIndicatorWidget_DropEvent_IsBase(bool value) const { kbusyindicatorwidget_dropevent_isbase = value; }
    inline void setKBusyIndicatorWidget_NativeEvent_IsBase(bool value) const { kbusyindicatorwidget_nativeevent_isbase = value; }
    inline void setKBusyIndicatorWidget_ChangeEvent_IsBase(bool value) const { kbusyindicatorwidget_changeevent_isbase = value; }
    inline void setKBusyIndicatorWidget_Metric_IsBase(bool value) const { kbusyindicatorwidget_metric_isbase = value; }
    inline void setKBusyIndicatorWidget_InitPainter_IsBase(bool value) const { kbusyindicatorwidget_initpainter_isbase = value; }
    inline void setKBusyIndicatorWidget_Redirected_IsBase(bool value) const { kbusyindicatorwidget_redirected_isbase = value; }
    inline void setKBusyIndicatorWidget_SharedPainter_IsBase(bool value) const { kbusyindicatorwidget_sharedpainter_isbase = value; }
    inline void setKBusyIndicatorWidget_InputMethodEvent_IsBase(bool value) const { kbusyindicatorwidget_inputmethodevent_isbase = value; }
    inline void setKBusyIndicatorWidget_InputMethodQuery_IsBase(bool value) const { kbusyindicatorwidget_inputmethodquery_isbase = value; }
    inline void setKBusyIndicatorWidget_FocusNextPrevChild_IsBase(bool value) const { kbusyindicatorwidget_focusnextprevchild_isbase = value; }
    inline void setKBusyIndicatorWidget_EventFilter_IsBase(bool value) const { kbusyindicatorwidget_eventfilter_isbase = value; }
    inline void setKBusyIndicatorWidget_TimerEvent_IsBase(bool value) const { kbusyindicatorwidget_timerevent_isbase = value; }
    inline void setKBusyIndicatorWidget_ChildEvent_IsBase(bool value) const { kbusyindicatorwidget_childevent_isbase = value; }
    inline void setKBusyIndicatorWidget_CustomEvent_IsBase(bool value) const { kbusyindicatorwidget_customevent_isbase = value; }
    inline void setKBusyIndicatorWidget_ConnectNotify_IsBase(bool value) const { kbusyindicatorwidget_connectnotify_isbase = value; }
    inline void setKBusyIndicatorWidget_DisconnectNotify_IsBase(bool value) const { kbusyindicatorwidget_disconnectnotify_isbase = value; }
    inline void setKBusyIndicatorWidget_UpdateMicroFocus_IsBase(bool value) const { kbusyindicatorwidget_updatemicrofocus_isbase = value; }
    inline void setKBusyIndicatorWidget_Create_IsBase(bool value) const { kbusyindicatorwidget_create_isbase = value; }
    inline void setKBusyIndicatorWidget_Destroy_IsBase(bool value) const { kbusyindicatorwidget_destroy_isbase = value; }
    inline void setKBusyIndicatorWidget_FocusNextChild_IsBase(bool value) const { kbusyindicatorwidget_focusnextchild_isbase = value; }
    inline void setKBusyIndicatorWidget_FocusPreviousChild_IsBase(bool value) const { kbusyindicatorwidget_focuspreviouschild_isbase = value; }
    inline void setKBusyIndicatorWidget_Sender_IsBase(bool value) const { kbusyindicatorwidget_sender_isbase = value; }
    inline void setKBusyIndicatorWidget_SenderSignalIndex_IsBase(bool value) const { kbusyindicatorwidget_sendersignalindex_isbase = value; }
    inline void setKBusyIndicatorWidget_Receivers_IsBase(bool value) const { kbusyindicatorwidget_receivers_isbase = value; }
    inline void setKBusyIndicatorWidget_IsSignalConnected_IsBase(bool value) const { kbusyindicatorwidget_issignalconnected_isbase = value; }
    inline void setKBusyIndicatorWidget_GetDecodedMetricF_IsBase(bool value) const { kbusyindicatorwidget_getdecodedmetricf_isbase = value; }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (kbusyindicatorwidget_metacall_isbase) {
            kbusyindicatorwidget_metacall_isbase = false;
            return KBusyIndicatorWidget::qt_metacall(param1, param2, param3);
        } else if (kbusyindicatorwidget_metacall_callback != nullptr) {
            int cbval1 = static_cast<int>(param1);
            int cbval2 = param2;
            void** cbval3 = param3;

            int callback_ret = kbusyindicatorwidget_metacall_callback(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        } else {
            return KBusyIndicatorWidget::qt_metacall(param1, param2, param3);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QSize minimumSizeHint() const override {
        if (kbusyindicatorwidget_minimumsizehint_isbase) {
            kbusyindicatorwidget_minimumsizehint_isbase = false;
            return KBusyIndicatorWidget::minimumSizeHint();
        } else if (kbusyindicatorwidget_minimumsizehint_callback != nullptr) {
            QSize* callback_ret = kbusyindicatorwidget_minimumsizehint_callback();
            return *callback_ret;
        } else {
            return KBusyIndicatorWidget::minimumSizeHint();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void showEvent(QShowEvent* event) override {
        if (kbusyindicatorwidget_showevent_isbase) {
            kbusyindicatorwidget_showevent_isbase = false;
            KBusyIndicatorWidget::showEvent(event);
        } else if (kbusyindicatorwidget_showevent_callback != nullptr) {
            QShowEvent* cbval1 = event;

            kbusyindicatorwidget_showevent_callback(this, cbval1);
        } else {
            KBusyIndicatorWidget::showEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void hideEvent(QHideEvent* event) override {
        if (kbusyindicatorwidget_hideevent_isbase) {
            kbusyindicatorwidget_hideevent_isbase = false;
            KBusyIndicatorWidget::hideEvent(event);
        } else if (kbusyindicatorwidget_hideevent_callback != nullptr) {
            QHideEvent* cbval1 = event;

            kbusyindicatorwidget_hideevent_callback(this, cbval1);
        } else {
            KBusyIndicatorWidget::hideEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void resizeEvent(QResizeEvent* event) override {
        if (kbusyindicatorwidget_resizeevent_isbase) {
            kbusyindicatorwidget_resizeevent_isbase = false;
            KBusyIndicatorWidget::resizeEvent(event);
        } else if (kbusyindicatorwidget_resizeevent_callback != nullptr) {
            QResizeEvent* cbval1 = event;

            kbusyindicatorwidget_resizeevent_callback(this, cbval1);
        } else {
            KBusyIndicatorWidget::resizeEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void paintEvent(QPaintEvent* param1) override {
        if (kbusyindicatorwidget_paintevent_isbase) {
            kbusyindicatorwidget_paintevent_isbase = false;
            KBusyIndicatorWidget::paintEvent(param1);
        } else if (kbusyindicatorwidget_paintevent_callback != nullptr) {
            QPaintEvent* cbval1 = param1;

            kbusyindicatorwidget_paintevent_callback(this, cbval1);
        } else {
            KBusyIndicatorWidget::paintEvent(param1);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* event) override {
        if (kbusyindicatorwidget_event_isbase) {
            kbusyindicatorwidget_event_isbase = false;
            return KBusyIndicatorWidget::event(event);
        } else if (kbusyindicatorwidget_event_callback != nullptr) {
            QEvent* cbval1 = event;

            bool callback_ret = kbusyindicatorwidget_event_callback(this, cbval1);
            return callback_ret;
        } else {
            return KBusyIndicatorWidget::event(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual int devType() const override {
        if (kbusyindicatorwidget_devtype_isbase) {
            kbusyindicatorwidget_devtype_isbase = false;
            return KBusyIndicatorWidget::devType();
        } else if (kbusyindicatorwidget_devtype_callback != nullptr) {
            int callback_ret = kbusyindicatorwidget_devtype_callback();
            return static_cast<int>(callback_ret);
        } else {
            return KBusyIndicatorWidget::devType();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void setVisible(bool visible) override {
        if (kbusyindicatorwidget_setvisible_isbase) {
            kbusyindicatorwidget_setvisible_isbase = false;
            KBusyIndicatorWidget::setVisible(visible);
        } else if (kbusyindicatorwidget_setvisible_callback != nullptr) {
            bool cbval1 = visible;

            kbusyindicatorwidget_setvisible_callback(this, cbval1);
        } else {
            KBusyIndicatorWidget::setVisible(visible);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QSize sizeHint() const override {
        if (kbusyindicatorwidget_sizehint_isbase) {
            kbusyindicatorwidget_sizehint_isbase = false;
            return KBusyIndicatorWidget::sizeHint();
        } else if (kbusyindicatorwidget_sizehint_callback != nullptr) {
            QSize* callback_ret = kbusyindicatorwidget_sizehint_callback();
            return *callback_ret;
        } else {
            return KBusyIndicatorWidget::sizeHint();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual int heightForWidth(int param1) const override {
        if (kbusyindicatorwidget_heightforwidth_isbase) {
            kbusyindicatorwidget_heightforwidth_isbase = false;
            return KBusyIndicatorWidget::heightForWidth(param1);
        } else if (kbusyindicatorwidget_heightforwidth_callback != nullptr) {
            int cbval1 = param1;

            int callback_ret = kbusyindicatorwidget_heightforwidth_callback(this, cbval1);
            return static_cast<int>(callback_ret);
        } else {
            return KBusyIndicatorWidget::heightForWidth(param1);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool hasHeightForWidth() const override {
        if (kbusyindicatorwidget_hasheightforwidth_isbase) {
            kbusyindicatorwidget_hasheightforwidth_isbase = false;
            return KBusyIndicatorWidget::hasHeightForWidth();
        } else if (kbusyindicatorwidget_hasheightforwidth_callback != nullptr) {
            bool callback_ret = kbusyindicatorwidget_hasheightforwidth_callback();
            return callback_ret;
        } else {
            return KBusyIndicatorWidget::hasHeightForWidth();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QPaintEngine* paintEngine() const override {
        if (kbusyindicatorwidget_paintengine_isbase) {
            kbusyindicatorwidget_paintengine_isbase = false;
            return KBusyIndicatorWidget::paintEngine();
        } else if (kbusyindicatorwidget_paintengine_callback != nullptr) {
            QPaintEngine* callback_ret = kbusyindicatorwidget_paintengine_callback();
            return callback_ret;
        } else {
            return KBusyIndicatorWidget::paintEngine();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void mousePressEvent(QMouseEvent* event) override {
        if (kbusyindicatorwidget_mousepressevent_isbase) {
            kbusyindicatorwidget_mousepressevent_isbase = false;
            KBusyIndicatorWidget::mousePressEvent(event);
        } else if (kbusyindicatorwidget_mousepressevent_callback != nullptr) {
            QMouseEvent* cbval1 = event;

            kbusyindicatorwidget_mousepressevent_callback(this, cbval1);
        } else {
            KBusyIndicatorWidget::mousePressEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseReleaseEvent(QMouseEvent* event) override {
        if (kbusyindicatorwidget_mousereleaseevent_isbase) {
            kbusyindicatorwidget_mousereleaseevent_isbase = false;
            KBusyIndicatorWidget::mouseReleaseEvent(event);
        } else if (kbusyindicatorwidget_mousereleaseevent_callback != nullptr) {
            QMouseEvent* cbval1 = event;

            kbusyindicatorwidget_mousereleaseevent_callback(this, cbval1);
        } else {
            KBusyIndicatorWidget::mouseReleaseEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseDoubleClickEvent(QMouseEvent* event) override {
        if (kbusyindicatorwidget_mousedoubleclickevent_isbase) {
            kbusyindicatorwidget_mousedoubleclickevent_isbase = false;
            KBusyIndicatorWidget::mouseDoubleClickEvent(event);
        } else if (kbusyindicatorwidget_mousedoubleclickevent_callback != nullptr) {
            QMouseEvent* cbval1 = event;

            kbusyindicatorwidget_mousedoubleclickevent_callback(this, cbval1);
        } else {
            KBusyIndicatorWidget::mouseDoubleClickEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseMoveEvent(QMouseEvent* event) override {
        if (kbusyindicatorwidget_mousemoveevent_isbase) {
            kbusyindicatorwidget_mousemoveevent_isbase = false;
            KBusyIndicatorWidget::mouseMoveEvent(event);
        } else if (kbusyindicatorwidget_mousemoveevent_callback != nullptr) {
            QMouseEvent* cbval1 = event;

            kbusyindicatorwidget_mousemoveevent_callback(this, cbval1);
        } else {
            KBusyIndicatorWidget::mouseMoveEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void wheelEvent(QWheelEvent* event) override {
        if (kbusyindicatorwidget_wheelevent_isbase) {
            kbusyindicatorwidget_wheelevent_isbase = false;
            KBusyIndicatorWidget::wheelEvent(event);
        } else if (kbusyindicatorwidget_wheelevent_callback != nullptr) {
            QWheelEvent* cbval1 = event;

            kbusyindicatorwidget_wheelevent_callback(this, cbval1);
        } else {
            KBusyIndicatorWidget::wheelEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void keyPressEvent(QKeyEvent* event) override {
        if (kbusyindicatorwidget_keypressevent_isbase) {
            kbusyindicatorwidget_keypressevent_isbase = false;
            KBusyIndicatorWidget::keyPressEvent(event);
        } else if (kbusyindicatorwidget_keypressevent_callback != nullptr) {
            QKeyEvent* cbval1 = event;

            kbusyindicatorwidget_keypressevent_callback(this, cbval1);
        } else {
            KBusyIndicatorWidget::keyPressEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void keyReleaseEvent(QKeyEvent* event) override {
        if (kbusyindicatorwidget_keyreleaseevent_isbase) {
            kbusyindicatorwidget_keyreleaseevent_isbase = false;
            KBusyIndicatorWidget::keyReleaseEvent(event);
        } else if (kbusyindicatorwidget_keyreleaseevent_callback != nullptr) {
            QKeyEvent* cbval1 = event;

            kbusyindicatorwidget_keyreleaseevent_callback(this, cbval1);
        } else {
            KBusyIndicatorWidget::keyReleaseEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void focusInEvent(QFocusEvent* event) override {
        if (kbusyindicatorwidget_focusinevent_isbase) {
            kbusyindicatorwidget_focusinevent_isbase = false;
            KBusyIndicatorWidget::focusInEvent(event);
        } else if (kbusyindicatorwidget_focusinevent_callback != nullptr) {
            QFocusEvent* cbval1 = event;

            kbusyindicatorwidget_focusinevent_callback(this, cbval1);
        } else {
            KBusyIndicatorWidget::focusInEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void focusOutEvent(QFocusEvent* event) override {
        if (kbusyindicatorwidget_focusoutevent_isbase) {
            kbusyindicatorwidget_focusoutevent_isbase = false;
            KBusyIndicatorWidget::focusOutEvent(event);
        } else if (kbusyindicatorwidget_focusoutevent_callback != nullptr) {
            QFocusEvent* cbval1 = event;

            kbusyindicatorwidget_focusoutevent_callback(this, cbval1);
        } else {
            KBusyIndicatorWidget::focusOutEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void enterEvent(QEnterEvent* event) override {
        if (kbusyindicatorwidget_enterevent_isbase) {
            kbusyindicatorwidget_enterevent_isbase = false;
            KBusyIndicatorWidget::enterEvent(event);
        } else if (kbusyindicatorwidget_enterevent_callback != nullptr) {
            QEnterEvent* cbval1 = event;

            kbusyindicatorwidget_enterevent_callback(this, cbval1);
        } else {
            KBusyIndicatorWidget::enterEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void leaveEvent(QEvent* event) override {
        if (kbusyindicatorwidget_leaveevent_isbase) {
            kbusyindicatorwidget_leaveevent_isbase = false;
            KBusyIndicatorWidget::leaveEvent(event);
        } else if (kbusyindicatorwidget_leaveevent_callback != nullptr) {
            QEvent* cbval1 = event;

            kbusyindicatorwidget_leaveevent_callback(this, cbval1);
        } else {
            KBusyIndicatorWidget::leaveEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void moveEvent(QMoveEvent* event) override {
        if (kbusyindicatorwidget_moveevent_isbase) {
            kbusyindicatorwidget_moveevent_isbase = false;
            KBusyIndicatorWidget::moveEvent(event);
        } else if (kbusyindicatorwidget_moveevent_callback != nullptr) {
            QMoveEvent* cbval1 = event;

            kbusyindicatorwidget_moveevent_callback(this, cbval1);
        } else {
            KBusyIndicatorWidget::moveEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void closeEvent(QCloseEvent* event) override {
        if (kbusyindicatorwidget_closeevent_isbase) {
            kbusyindicatorwidget_closeevent_isbase = false;
            KBusyIndicatorWidget::closeEvent(event);
        } else if (kbusyindicatorwidget_closeevent_callback != nullptr) {
            QCloseEvent* cbval1 = event;

            kbusyindicatorwidget_closeevent_callback(this, cbval1);
        } else {
            KBusyIndicatorWidget::closeEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void contextMenuEvent(QContextMenuEvent* event) override {
        if (kbusyindicatorwidget_contextmenuevent_isbase) {
            kbusyindicatorwidget_contextmenuevent_isbase = false;
            KBusyIndicatorWidget::contextMenuEvent(event);
        } else if (kbusyindicatorwidget_contextmenuevent_callback != nullptr) {
            QContextMenuEvent* cbval1 = event;

            kbusyindicatorwidget_contextmenuevent_callback(this, cbval1);
        } else {
            KBusyIndicatorWidget::contextMenuEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void tabletEvent(QTabletEvent* event) override {
        if (kbusyindicatorwidget_tabletevent_isbase) {
            kbusyindicatorwidget_tabletevent_isbase = false;
            KBusyIndicatorWidget::tabletEvent(event);
        } else if (kbusyindicatorwidget_tabletevent_callback != nullptr) {
            QTabletEvent* cbval1 = event;

            kbusyindicatorwidget_tabletevent_callback(this, cbval1);
        } else {
            KBusyIndicatorWidget::tabletEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void actionEvent(QActionEvent* event) override {
        if (kbusyindicatorwidget_actionevent_isbase) {
            kbusyindicatorwidget_actionevent_isbase = false;
            KBusyIndicatorWidget::actionEvent(event);
        } else if (kbusyindicatorwidget_actionevent_callback != nullptr) {
            QActionEvent* cbval1 = event;

            kbusyindicatorwidget_actionevent_callback(this, cbval1);
        } else {
            KBusyIndicatorWidget::actionEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragEnterEvent(QDragEnterEvent* event) override {
        if (kbusyindicatorwidget_dragenterevent_isbase) {
            kbusyindicatorwidget_dragenterevent_isbase = false;
            KBusyIndicatorWidget::dragEnterEvent(event);
        } else if (kbusyindicatorwidget_dragenterevent_callback != nullptr) {
            QDragEnterEvent* cbval1 = event;

            kbusyindicatorwidget_dragenterevent_callback(this, cbval1);
        } else {
            KBusyIndicatorWidget::dragEnterEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragMoveEvent(QDragMoveEvent* event) override {
        if (kbusyindicatorwidget_dragmoveevent_isbase) {
            kbusyindicatorwidget_dragmoveevent_isbase = false;
            KBusyIndicatorWidget::dragMoveEvent(event);
        } else if (kbusyindicatorwidget_dragmoveevent_callback != nullptr) {
            QDragMoveEvent* cbval1 = event;

            kbusyindicatorwidget_dragmoveevent_callback(this, cbval1);
        } else {
            KBusyIndicatorWidget::dragMoveEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragLeaveEvent(QDragLeaveEvent* event) override {
        if (kbusyindicatorwidget_dragleaveevent_isbase) {
            kbusyindicatorwidget_dragleaveevent_isbase = false;
            KBusyIndicatorWidget::dragLeaveEvent(event);
        } else if (kbusyindicatorwidget_dragleaveevent_callback != nullptr) {
            QDragLeaveEvent* cbval1 = event;

            kbusyindicatorwidget_dragleaveevent_callback(this, cbval1);
        } else {
            KBusyIndicatorWidget::dragLeaveEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void dropEvent(QDropEvent* event) override {
        if (kbusyindicatorwidget_dropevent_isbase) {
            kbusyindicatorwidget_dropevent_isbase = false;
            KBusyIndicatorWidget::dropEvent(event);
        } else if (kbusyindicatorwidget_dropevent_callback != nullptr) {
            QDropEvent* cbval1 = event;

            kbusyindicatorwidget_dropevent_callback(this, cbval1);
        } else {
            KBusyIndicatorWidget::dropEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool nativeEvent(const QByteArray& eventType, void* message, qintptr* result) override {
        if (kbusyindicatorwidget_nativeevent_isbase) {
            kbusyindicatorwidget_nativeevent_isbase = false;
            return KBusyIndicatorWidget::nativeEvent(eventType, message, result);
        } else if (kbusyindicatorwidget_nativeevent_callback != nullptr) {
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

            bool callback_ret = kbusyindicatorwidget_nativeevent_callback(this, cbval1, cbval2, cbval3);
            return callback_ret;
        } else {
            return KBusyIndicatorWidget::nativeEvent(eventType, message, result);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void changeEvent(QEvent* param1) override {
        if (kbusyindicatorwidget_changeevent_isbase) {
            kbusyindicatorwidget_changeevent_isbase = false;
            KBusyIndicatorWidget::changeEvent(param1);
        } else if (kbusyindicatorwidget_changeevent_callback != nullptr) {
            QEvent* cbval1 = param1;

            kbusyindicatorwidget_changeevent_callback(this, cbval1);
        } else {
            KBusyIndicatorWidget::changeEvent(param1);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual int metric(QPaintDevice::PaintDeviceMetric param1) const override {
        if (kbusyindicatorwidget_metric_isbase) {
            kbusyindicatorwidget_metric_isbase = false;
            return KBusyIndicatorWidget::metric(param1);
        } else if (kbusyindicatorwidget_metric_callback != nullptr) {
            int cbval1 = static_cast<int>(param1);

            int callback_ret = kbusyindicatorwidget_metric_callback(this, cbval1);
            return static_cast<int>(callback_ret);
        } else {
            return KBusyIndicatorWidget::metric(param1);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void initPainter(QPainter* painter) const override {
        if (kbusyindicatorwidget_initpainter_isbase) {
            kbusyindicatorwidget_initpainter_isbase = false;
            KBusyIndicatorWidget::initPainter(painter);
        } else if (kbusyindicatorwidget_initpainter_callback != nullptr) {
            QPainter* cbval1 = painter;

            kbusyindicatorwidget_initpainter_callback(this, cbval1);
        } else {
            KBusyIndicatorWidget::initPainter(painter);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QPaintDevice* redirected(QPoint* offset) const override {
        if (kbusyindicatorwidget_redirected_isbase) {
            kbusyindicatorwidget_redirected_isbase = false;
            return KBusyIndicatorWidget::redirected(offset);
        } else if (kbusyindicatorwidget_redirected_callback != nullptr) {
            QPoint* cbval1 = offset;

            QPaintDevice* callback_ret = kbusyindicatorwidget_redirected_callback(this, cbval1);
            return callback_ret;
        } else {
            return KBusyIndicatorWidget::redirected(offset);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QPainter* sharedPainter() const override {
        if (kbusyindicatorwidget_sharedpainter_isbase) {
            kbusyindicatorwidget_sharedpainter_isbase = false;
            return KBusyIndicatorWidget::sharedPainter();
        } else if (kbusyindicatorwidget_sharedpainter_callback != nullptr) {
            QPainter* callback_ret = kbusyindicatorwidget_sharedpainter_callback();
            return callback_ret;
        } else {
            return KBusyIndicatorWidget::sharedPainter();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void inputMethodEvent(QInputMethodEvent* param1) override {
        if (kbusyindicatorwidget_inputmethodevent_isbase) {
            kbusyindicatorwidget_inputmethodevent_isbase = false;
            KBusyIndicatorWidget::inputMethodEvent(param1);
        } else if (kbusyindicatorwidget_inputmethodevent_callback != nullptr) {
            QInputMethodEvent* cbval1 = param1;

            kbusyindicatorwidget_inputmethodevent_callback(this, cbval1);
        } else {
            KBusyIndicatorWidget::inputMethodEvent(param1);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QVariant inputMethodQuery(Qt::InputMethodQuery param1) const override {
        if (kbusyindicatorwidget_inputmethodquery_isbase) {
            kbusyindicatorwidget_inputmethodquery_isbase = false;
            return KBusyIndicatorWidget::inputMethodQuery(param1);
        } else if (kbusyindicatorwidget_inputmethodquery_callback != nullptr) {
            int cbval1 = static_cast<int>(param1);

            QVariant* callback_ret = kbusyindicatorwidget_inputmethodquery_callback(this, cbval1);
            return *callback_ret;
        } else {
            return KBusyIndicatorWidget::inputMethodQuery(param1);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool focusNextPrevChild(bool next) override {
        if (kbusyindicatorwidget_focusnextprevchild_isbase) {
            kbusyindicatorwidget_focusnextprevchild_isbase = false;
            return KBusyIndicatorWidget::focusNextPrevChild(next);
        } else if (kbusyindicatorwidget_focusnextprevchild_callback != nullptr) {
            bool cbval1 = next;

            bool callback_ret = kbusyindicatorwidget_focusnextprevchild_callback(this, cbval1);
            return callback_ret;
        } else {
            return KBusyIndicatorWidget::focusNextPrevChild(next);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* watched, QEvent* event) override {
        if (kbusyindicatorwidget_eventfilter_isbase) {
            kbusyindicatorwidget_eventfilter_isbase = false;
            return KBusyIndicatorWidget::eventFilter(watched, event);
        } else if (kbusyindicatorwidget_eventfilter_callback != nullptr) {
            QObject* cbval1 = watched;
            QEvent* cbval2 = event;

            bool callback_ret = kbusyindicatorwidget_eventfilter_callback(this, cbval1, cbval2);
            return callback_ret;
        } else {
            return KBusyIndicatorWidget::eventFilter(watched, event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (kbusyindicatorwidget_timerevent_isbase) {
            kbusyindicatorwidget_timerevent_isbase = false;
            KBusyIndicatorWidget::timerEvent(event);
        } else if (kbusyindicatorwidget_timerevent_callback != nullptr) {
            QTimerEvent* cbval1 = event;

            kbusyindicatorwidget_timerevent_callback(this, cbval1);
        } else {
            KBusyIndicatorWidget::timerEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (kbusyindicatorwidget_childevent_isbase) {
            kbusyindicatorwidget_childevent_isbase = false;
            KBusyIndicatorWidget::childEvent(event);
        } else if (kbusyindicatorwidget_childevent_callback != nullptr) {
            QChildEvent* cbval1 = event;

            kbusyindicatorwidget_childevent_callback(this, cbval1);
        } else {
            KBusyIndicatorWidget::childEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (kbusyindicatorwidget_customevent_isbase) {
            kbusyindicatorwidget_customevent_isbase = false;
            KBusyIndicatorWidget::customEvent(event);
        } else if (kbusyindicatorwidget_customevent_callback != nullptr) {
            QEvent* cbval1 = event;

            kbusyindicatorwidget_customevent_callback(this, cbval1);
        } else {
            KBusyIndicatorWidget::customEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (kbusyindicatorwidget_connectnotify_isbase) {
            kbusyindicatorwidget_connectnotify_isbase = false;
            KBusyIndicatorWidget::connectNotify(signal);
        } else if (kbusyindicatorwidget_connectnotify_callback != nullptr) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            kbusyindicatorwidget_connectnotify_callback(this, cbval1);
        } else {
            KBusyIndicatorWidget::connectNotify(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (kbusyindicatorwidget_disconnectnotify_isbase) {
            kbusyindicatorwidget_disconnectnotify_isbase = false;
            KBusyIndicatorWidget::disconnectNotify(signal);
        } else if (kbusyindicatorwidget_disconnectnotify_callback != nullptr) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            kbusyindicatorwidget_disconnectnotify_callback(this, cbval1);
        } else {
            KBusyIndicatorWidget::disconnectNotify(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    void updateMicroFocus() {
        if (kbusyindicatorwidget_updatemicrofocus_isbase) {
            kbusyindicatorwidget_updatemicrofocus_isbase = false;
            KBusyIndicatorWidget::updateMicroFocus();
        } else if (kbusyindicatorwidget_updatemicrofocus_callback != nullptr) {
            kbusyindicatorwidget_updatemicrofocus_callback();
        } else {
            KBusyIndicatorWidget::updateMicroFocus();
        }
    }

    // Virtual method for C ABI access and custom callback
    void create() {
        if (kbusyindicatorwidget_create_isbase) {
            kbusyindicatorwidget_create_isbase = false;
            KBusyIndicatorWidget::create();
        } else if (kbusyindicatorwidget_create_callback != nullptr) {
            kbusyindicatorwidget_create_callback();
        } else {
            KBusyIndicatorWidget::create();
        }
    }

    // Virtual method for C ABI access and custom callback
    void destroy() {
        if (kbusyindicatorwidget_destroy_isbase) {
            kbusyindicatorwidget_destroy_isbase = false;
            KBusyIndicatorWidget::destroy();
        } else if (kbusyindicatorwidget_destroy_callback != nullptr) {
            kbusyindicatorwidget_destroy_callback();
        } else {
            KBusyIndicatorWidget::destroy();
        }
    }

    // Virtual method for C ABI access and custom callback
    bool focusNextChild() {
        if (kbusyindicatorwidget_focusnextchild_isbase) {
            kbusyindicatorwidget_focusnextchild_isbase = false;
            return KBusyIndicatorWidget::focusNextChild();
        } else if (kbusyindicatorwidget_focusnextchild_callback != nullptr) {
            bool callback_ret = kbusyindicatorwidget_focusnextchild_callback();
            return callback_ret;
        } else {
            return KBusyIndicatorWidget::focusNextChild();
        }
    }

    // Virtual method for C ABI access and custom callback
    bool focusPreviousChild() {
        if (kbusyindicatorwidget_focuspreviouschild_isbase) {
            kbusyindicatorwidget_focuspreviouschild_isbase = false;
            return KBusyIndicatorWidget::focusPreviousChild();
        } else if (kbusyindicatorwidget_focuspreviouschild_callback != nullptr) {
            bool callback_ret = kbusyindicatorwidget_focuspreviouschild_callback();
            return callback_ret;
        } else {
            return KBusyIndicatorWidget::focusPreviousChild();
        }
    }

    // Virtual method for C ABI access and custom callback
    QObject* sender() const {
        if (kbusyindicatorwidget_sender_isbase) {
            kbusyindicatorwidget_sender_isbase = false;
            return KBusyIndicatorWidget::sender();
        } else if (kbusyindicatorwidget_sender_callback != nullptr) {
            QObject* callback_ret = kbusyindicatorwidget_sender_callback();
            return callback_ret;
        } else {
            return KBusyIndicatorWidget::sender();
        }
    }

    // Virtual method for C ABI access and custom callback
    int senderSignalIndex() const {
        if (kbusyindicatorwidget_sendersignalindex_isbase) {
            kbusyindicatorwidget_sendersignalindex_isbase = false;
            return KBusyIndicatorWidget::senderSignalIndex();
        } else if (kbusyindicatorwidget_sendersignalindex_callback != nullptr) {
            int callback_ret = kbusyindicatorwidget_sendersignalindex_callback();
            return static_cast<int>(callback_ret);
        } else {
            return KBusyIndicatorWidget::senderSignalIndex();
        }
    }

    // Virtual method for C ABI access and custom callback
    int receivers(const char* signal) const {
        if (kbusyindicatorwidget_receivers_isbase) {
            kbusyindicatorwidget_receivers_isbase = false;
            return KBusyIndicatorWidget::receivers(signal);
        } else if (kbusyindicatorwidget_receivers_callback != nullptr) {
            const char* cbval1 = (const char*)signal;

            int callback_ret = kbusyindicatorwidget_receivers_callback(this, cbval1);
            return static_cast<int>(callback_ret);
        } else {
            return KBusyIndicatorWidget::receivers(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    bool isSignalConnected(const QMetaMethod& signal) const {
        if (kbusyindicatorwidget_issignalconnected_isbase) {
            kbusyindicatorwidget_issignalconnected_isbase = false;
            return KBusyIndicatorWidget::isSignalConnected(signal);
        } else if (kbusyindicatorwidget_issignalconnected_callback != nullptr) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            bool callback_ret = kbusyindicatorwidget_issignalconnected_callback(this, cbval1);
            return callback_ret;
        } else {
            return KBusyIndicatorWidget::isSignalConnected(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    double getDecodedMetricF(QPaintDevice::PaintDeviceMetric metricA, QPaintDevice::PaintDeviceMetric metricB) const {
        if (kbusyindicatorwidget_getdecodedmetricf_isbase) {
            kbusyindicatorwidget_getdecodedmetricf_isbase = false;
            return KBusyIndicatorWidget::getDecodedMetricF(metricA, metricB);
        } else if (kbusyindicatorwidget_getdecodedmetricf_callback != nullptr) {
            int cbval1 = static_cast<int>(metricA);
            int cbval2 = static_cast<int>(metricB);

            double callback_ret = kbusyindicatorwidget_getdecodedmetricf_callback(this, cbval1, cbval2);
            return static_cast<double>(callback_ret);
        } else {
            return KBusyIndicatorWidget::getDecodedMetricF(metricA, metricB);
        }
    }

    // Friend functions
    friend void KBusyIndicatorWidget_ShowEvent(KBusyIndicatorWidget* self, QShowEvent* event);
    friend void KBusyIndicatorWidget_QBaseShowEvent(KBusyIndicatorWidget* self, QShowEvent* event);
    friend void KBusyIndicatorWidget_HideEvent(KBusyIndicatorWidget* self, QHideEvent* event);
    friend void KBusyIndicatorWidget_QBaseHideEvent(KBusyIndicatorWidget* self, QHideEvent* event);
    friend void KBusyIndicatorWidget_ResizeEvent(KBusyIndicatorWidget* self, QResizeEvent* event);
    friend void KBusyIndicatorWidget_QBaseResizeEvent(KBusyIndicatorWidget* self, QResizeEvent* event);
    friend void KBusyIndicatorWidget_PaintEvent(KBusyIndicatorWidget* self, QPaintEvent* param1);
    friend void KBusyIndicatorWidget_QBasePaintEvent(KBusyIndicatorWidget* self, QPaintEvent* param1);
    friend bool KBusyIndicatorWidget_Event(KBusyIndicatorWidget* self, QEvent* event);
    friend bool KBusyIndicatorWidget_QBaseEvent(KBusyIndicatorWidget* self, QEvent* event);
    friend void KBusyIndicatorWidget_MousePressEvent(KBusyIndicatorWidget* self, QMouseEvent* event);
    friend void KBusyIndicatorWidget_QBaseMousePressEvent(KBusyIndicatorWidget* self, QMouseEvent* event);
    friend void KBusyIndicatorWidget_MouseReleaseEvent(KBusyIndicatorWidget* self, QMouseEvent* event);
    friend void KBusyIndicatorWidget_QBaseMouseReleaseEvent(KBusyIndicatorWidget* self, QMouseEvent* event);
    friend void KBusyIndicatorWidget_MouseDoubleClickEvent(KBusyIndicatorWidget* self, QMouseEvent* event);
    friend void KBusyIndicatorWidget_QBaseMouseDoubleClickEvent(KBusyIndicatorWidget* self, QMouseEvent* event);
    friend void KBusyIndicatorWidget_MouseMoveEvent(KBusyIndicatorWidget* self, QMouseEvent* event);
    friend void KBusyIndicatorWidget_QBaseMouseMoveEvent(KBusyIndicatorWidget* self, QMouseEvent* event);
    friend void KBusyIndicatorWidget_WheelEvent(KBusyIndicatorWidget* self, QWheelEvent* event);
    friend void KBusyIndicatorWidget_QBaseWheelEvent(KBusyIndicatorWidget* self, QWheelEvent* event);
    friend void KBusyIndicatorWidget_KeyPressEvent(KBusyIndicatorWidget* self, QKeyEvent* event);
    friend void KBusyIndicatorWidget_QBaseKeyPressEvent(KBusyIndicatorWidget* self, QKeyEvent* event);
    friend void KBusyIndicatorWidget_KeyReleaseEvent(KBusyIndicatorWidget* self, QKeyEvent* event);
    friend void KBusyIndicatorWidget_QBaseKeyReleaseEvent(KBusyIndicatorWidget* self, QKeyEvent* event);
    friend void KBusyIndicatorWidget_FocusInEvent(KBusyIndicatorWidget* self, QFocusEvent* event);
    friend void KBusyIndicatorWidget_QBaseFocusInEvent(KBusyIndicatorWidget* self, QFocusEvent* event);
    friend void KBusyIndicatorWidget_FocusOutEvent(KBusyIndicatorWidget* self, QFocusEvent* event);
    friend void KBusyIndicatorWidget_QBaseFocusOutEvent(KBusyIndicatorWidget* self, QFocusEvent* event);
    friend void KBusyIndicatorWidget_EnterEvent(KBusyIndicatorWidget* self, QEnterEvent* event);
    friend void KBusyIndicatorWidget_QBaseEnterEvent(KBusyIndicatorWidget* self, QEnterEvent* event);
    friend void KBusyIndicatorWidget_LeaveEvent(KBusyIndicatorWidget* self, QEvent* event);
    friend void KBusyIndicatorWidget_QBaseLeaveEvent(KBusyIndicatorWidget* self, QEvent* event);
    friend void KBusyIndicatorWidget_MoveEvent(KBusyIndicatorWidget* self, QMoveEvent* event);
    friend void KBusyIndicatorWidget_QBaseMoveEvent(KBusyIndicatorWidget* self, QMoveEvent* event);
    friend void KBusyIndicatorWidget_CloseEvent(KBusyIndicatorWidget* self, QCloseEvent* event);
    friend void KBusyIndicatorWidget_QBaseCloseEvent(KBusyIndicatorWidget* self, QCloseEvent* event);
    friend void KBusyIndicatorWidget_ContextMenuEvent(KBusyIndicatorWidget* self, QContextMenuEvent* event);
    friend void KBusyIndicatorWidget_QBaseContextMenuEvent(KBusyIndicatorWidget* self, QContextMenuEvent* event);
    friend void KBusyIndicatorWidget_TabletEvent(KBusyIndicatorWidget* self, QTabletEvent* event);
    friend void KBusyIndicatorWidget_QBaseTabletEvent(KBusyIndicatorWidget* self, QTabletEvent* event);
    friend void KBusyIndicatorWidget_ActionEvent(KBusyIndicatorWidget* self, QActionEvent* event);
    friend void KBusyIndicatorWidget_QBaseActionEvent(KBusyIndicatorWidget* self, QActionEvent* event);
    friend void KBusyIndicatorWidget_DragEnterEvent(KBusyIndicatorWidget* self, QDragEnterEvent* event);
    friend void KBusyIndicatorWidget_QBaseDragEnterEvent(KBusyIndicatorWidget* self, QDragEnterEvent* event);
    friend void KBusyIndicatorWidget_DragMoveEvent(KBusyIndicatorWidget* self, QDragMoveEvent* event);
    friend void KBusyIndicatorWidget_QBaseDragMoveEvent(KBusyIndicatorWidget* self, QDragMoveEvent* event);
    friend void KBusyIndicatorWidget_DragLeaveEvent(KBusyIndicatorWidget* self, QDragLeaveEvent* event);
    friend void KBusyIndicatorWidget_QBaseDragLeaveEvent(KBusyIndicatorWidget* self, QDragLeaveEvent* event);
    friend void KBusyIndicatorWidget_DropEvent(KBusyIndicatorWidget* self, QDropEvent* event);
    friend void KBusyIndicatorWidget_QBaseDropEvent(KBusyIndicatorWidget* self, QDropEvent* event);
    friend bool KBusyIndicatorWidget_NativeEvent(KBusyIndicatorWidget* self, const libqt_string eventType, void* message, intptr_t* result);
    friend bool KBusyIndicatorWidget_QBaseNativeEvent(KBusyIndicatorWidget* self, const libqt_string eventType, void* message, intptr_t* result);
    friend void KBusyIndicatorWidget_ChangeEvent(KBusyIndicatorWidget* self, QEvent* param1);
    friend void KBusyIndicatorWidget_QBaseChangeEvent(KBusyIndicatorWidget* self, QEvent* param1);
    friend int KBusyIndicatorWidget_Metric(const KBusyIndicatorWidget* self, int param1);
    friend int KBusyIndicatorWidget_QBaseMetric(const KBusyIndicatorWidget* self, int param1);
    friend void KBusyIndicatorWidget_InitPainter(const KBusyIndicatorWidget* self, QPainter* painter);
    friend void KBusyIndicatorWidget_QBaseInitPainter(const KBusyIndicatorWidget* self, QPainter* painter);
    friend QPaintDevice* KBusyIndicatorWidget_Redirected(const KBusyIndicatorWidget* self, QPoint* offset);
    friend QPaintDevice* KBusyIndicatorWidget_QBaseRedirected(const KBusyIndicatorWidget* self, QPoint* offset);
    friend QPainter* KBusyIndicatorWidget_SharedPainter(const KBusyIndicatorWidget* self);
    friend QPainter* KBusyIndicatorWidget_QBaseSharedPainter(const KBusyIndicatorWidget* self);
    friend void KBusyIndicatorWidget_InputMethodEvent(KBusyIndicatorWidget* self, QInputMethodEvent* param1);
    friend void KBusyIndicatorWidget_QBaseInputMethodEvent(KBusyIndicatorWidget* self, QInputMethodEvent* param1);
    friend bool KBusyIndicatorWidget_FocusNextPrevChild(KBusyIndicatorWidget* self, bool next);
    friend bool KBusyIndicatorWidget_QBaseFocusNextPrevChild(KBusyIndicatorWidget* self, bool next);
    friend void KBusyIndicatorWidget_TimerEvent(KBusyIndicatorWidget* self, QTimerEvent* event);
    friend void KBusyIndicatorWidget_QBaseTimerEvent(KBusyIndicatorWidget* self, QTimerEvent* event);
    friend void KBusyIndicatorWidget_ChildEvent(KBusyIndicatorWidget* self, QChildEvent* event);
    friend void KBusyIndicatorWidget_QBaseChildEvent(KBusyIndicatorWidget* self, QChildEvent* event);
    friend void KBusyIndicatorWidget_CustomEvent(KBusyIndicatorWidget* self, QEvent* event);
    friend void KBusyIndicatorWidget_QBaseCustomEvent(KBusyIndicatorWidget* self, QEvent* event);
    friend void KBusyIndicatorWidget_ConnectNotify(KBusyIndicatorWidget* self, const QMetaMethod* signal);
    friend void KBusyIndicatorWidget_QBaseConnectNotify(KBusyIndicatorWidget* self, const QMetaMethod* signal);
    friend void KBusyIndicatorWidget_DisconnectNotify(KBusyIndicatorWidget* self, const QMetaMethod* signal);
    friend void KBusyIndicatorWidget_QBaseDisconnectNotify(KBusyIndicatorWidget* self, const QMetaMethod* signal);
    friend void KBusyIndicatorWidget_UpdateMicroFocus(KBusyIndicatorWidget* self);
    friend void KBusyIndicatorWidget_QBaseUpdateMicroFocus(KBusyIndicatorWidget* self);
    friend void KBusyIndicatorWidget_Create(KBusyIndicatorWidget* self);
    friend void KBusyIndicatorWidget_QBaseCreate(KBusyIndicatorWidget* self);
    friend void KBusyIndicatorWidget_Destroy(KBusyIndicatorWidget* self);
    friend void KBusyIndicatorWidget_QBaseDestroy(KBusyIndicatorWidget* self);
    friend bool KBusyIndicatorWidget_FocusNextChild(KBusyIndicatorWidget* self);
    friend bool KBusyIndicatorWidget_QBaseFocusNextChild(KBusyIndicatorWidget* self);
    friend bool KBusyIndicatorWidget_FocusPreviousChild(KBusyIndicatorWidget* self);
    friend bool KBusyIndicatorWidget_QBaseFocusPreviousChild(KBusyIndicatorWidget* self);
    friend QObject* KBusyIndicatorWidget_Sender(const KBusyIndicatorWidget* self);
    friend QObject* KBusyIndicatorWidget_QBaseSender(const KBusyIndicatorWidget* self);
    friend int KBusyIndicatorWidget_SenderSignalIndex(const KBusyIndicatorWidget* self);
    friend int KBusyIndicatorWidget_QBaseSenderSignalIndex(const KBusyIndicatorWidget* self);
    friend int KBusyIndicatorWidget_Receivers(const KBusyIndicatorWidget* self, const char* signal);
    friend int KBusyIndicatorWidget_QBaseReceivers(const KBusyIndicatorWidget* self, const char* signal);
    friend bool KBusyIndicatorWidget_IsSignalConnected(const KBusyIndicatorWidget* self, const QMetaMethod* signal);
    friend bool KBusyIndicatorWidget_QBaseIsSignalConnected(const KBusyIndicatorWidget* self, const QMetaMethod* signal);
    friend double KBusyIndicatorWidget_GetDecodedMetricF(const KBusyIndicatorWidget* self, int metricA, int metricB);
    friend double KBusyIndicatorWidget_QBaseGetDecodedMetricF(const KBusyIndicatorWidget* self, int metricA, int metricB);
};

#endif
