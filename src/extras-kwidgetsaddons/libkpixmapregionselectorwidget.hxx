#pragma once
#ifndef SRC_EXTRAS_KWIDGETSADDONSC_LIBVIRTUALKPIXMAPREGIONSELECTORWIDGET_H
#define SRC_EXTRAS_KWIDGETSADDONSC_LIBVIRTUALKPIXMAPREGIONSELECTORWIDGET_H

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

// This class is a subclass of KPixmapRegionSelectorWidget so that we can call protected methods
class VirtualKPixmapRegionSelectorWidget final : public KPixmapRegionSelectorWidget {

  public:
    // Virtual class boolean flag
    bool isVirtualKPixmapRegionSelectorWidget = true;

    // Virtual class public types (including callbacks)
    using KPixmapRegionSelectorWidget_Metacall_Callback = int (*)(KPixmapRegionSelectorWidget*, int, int, void**);
    using KPixmapRegionSelectorWidget_CreatePopupMenu_Callback = QMenu* (*)();
    using KPixmapRegionSelectorWidget_EventFilter_Callback = bool (*)(KPixmapRegionSelectorWidget*, QObject*, QEvent*);
    using KPixmapRegionSelectorWidget_DevType_Callback = int (*)();
    using KPixmapRegionSelectorWidget_SetVisible_Callback = void (*)(KPixmapRegionSelectorWidget*, bool);
    using KPixmapRegionSelectorWidget_SizeHint_Callback = QSize* (*)();
    using KPixmapRegionSelectorWidget_MinimumSizeHint_Callback = QSize* (*)();
    using KPixmapRegionSelectorWidget_HeightForWidth_Callback = int (*)(const KPixmapRegionSelectorWidget*, int);
    using KPixmapRegionSelectorWidget_HasHeightForWidth_Callback = bool (*)();
    using KPixmapRegionSelectorWidget_PaintEngine_Callback = QPaintEngine* (*)();
    using KPixmapRegionSelectorWidget_Event_Callback = bool (*)(KPixmapRegionSelectorWidget*, QEvent*);
    using KPixmapRegionSelectorWidget_MousePressEvent_Callback = void (*)(KPixmapRegionSelectorWidget*, QMouseEvent*);
    using KPixmapRegionSelectorWidget_MouseReleaseEvent_Callback = void (*)(KPixmapRegionSelectorWidget*, QMouseEvent*);
    using KPixmapRegionSelectorWidget_MouseDoubleClickEvent_Callback = void (*)(KPixmapRegionSelectorWidget*, QMouseEvent*);
    using KPixmapRegionSelectorWidget_MouseMoveEvent_Callback = void (*)(KPixmapRegionSelectorWidget*, QMouseEvent*);
    using KPixmapRegionSelectorWidget_WheelEvent_Callback = void (*)(KPixmapRegionSelectorWidget*, QWheelEvent*);
    using KPixmapRegionSelectorWidget_KeyPressEvent_Callback = void (*)(KPixmapRegionSelectorWidget*, QKeyEvent*);
    using KPixmapRegionSelectorWidget_KeyReleaseEvent_Callback = void (*)(KPixmapRegionSelectorWidget*, QKeyEvent*);
    using KPixmapRegionSelectorWidget_FocusInEvent_Callback = void (*)(KPixmapRegionSelectorWidget*, QFocusEvent*);
    using KPixmapRegionSelectorWidget_FocusOutEvent_Callback = void (*)(KPixmapRegionSelectorWidget*, QFocusEvent*);
    using KPixmapRegionSelectorWidget_EnterEvent_Callback = void (*)(KPixmapRegionSelectorWidget*, QEnterEvent*);
    using KPixmapRegionSelectorWidget_LeaveEvent_Callback = void (*)(KPixmapRegionSelectorWidget*, QEvent*);
    using KPixmapRegionSelectorWidget_PaintEvent_Callback = void (*)(KPixmapRegionSelectorWidget*, QPaintEvent*);
    using KPixmapRegionSelectorWidget_MoveEvent_Callback = void (*)(KPixmapRegionSelectorWidget*, QMoveEvent*);
    using KPixmapRegionSelectorWidget_ResizeEvent_Callback = void (*)(KPixmapRegionSelectorWidget*, QResizeEvent*);
    using KPixmapRegionSelectorWidget_CloseEvent_Callback = void (*)(KPixmapRegionSelectorWidget*, QCloseEvent*);
    using KPixmapRegionSelectorWidget_ContextMenuEvent_Callback = void (*)(KPixmapRegionSelectorWidget*, QContextMenuEvent*);
    using KPixmapRegionSelectorWidget_TabletEvent_Callback = void (*)(KPixmapRegionSelectorWidget*, QTabletEvent*);
    using KPixmapRegionSelectorWidget_ActionEvent_Callback = void (*)(KPixmapRegionSelectorWidget*, QActionEvent*);
    using KPixmapRegionSelectorWidget_DragEnterEvent_Callback = void (*)(KPixmapRegionSelectorWidget*, QDragEnterEvent*);
    using KPixmapRegionSelectorWidget_DragMoveEvent_Callback = void (*)(KPixmapRegionSelectorWidget*, QDragMoveEvent*);
    using KPixmapRegionSelectorWidget_DragLeaveEvent_Callback = void (*)(KPixmapRegionSelectorWidget*, QDragLeaveEvent*);
    using KPixmapRegionSelectorWidget_DropEvent_Callback = void (*)(KPixmapRegionSelectorWidget*, QDropEvent*);
    using KPixmapRegionSelectorWidget_ShowEvent_Callback = void (*)(KPixmapRegionSelectorWidget*, QShowEvent*);
    using KPixmapRegionSelectorWidget_HideEvent_Callback = void (*)(KPixmapRegionSelectorWidget*, QHideEvent*);
    using KPixmapRegionSelectorWidget_NativeEvent_Callback = bool (*)(KPixmapRegionSelectorWidget*, libqt_string, void*, intptr_t*);
    using KPixmapRegionSelectorWidget_ChangeEvent_Callback = void (*)(KPixmapRegionSelectorWidget*, QEvent*);
    using KPixmapRegionSelectorWidget_Metric_Callback = int (*)(const KPixmapRegionSelectorWidget*, int);
    using KPixmapRegionSelectorWidget_InitPainter_Callback = void (*)(const KPixmapRegionSelectorWidget*, QPainter*);
    using KPixmapRegionSelectorWidget_Redirected_Callback = QPaintDevice* (*)(const KPixmapRegionSelectorWidget*, QPoint*);
    using KPixmapRegionSelectorWidget_SharedPainter_Callback = QPainter* (*)();
    using KPixmapRegionSelectorWidget_InputMethodEvent_Callback = void (*)(KPixmapRegionSelectorWidget*, QInputMethodEvent*);
    using KPixmapRegionSelectorWidget_InputMethodQuery_Callback = QVariant* (*)(const KPixmapRegionSelectorWidget*, int);
    using KPixmapRegionSelectorWidget_FocusNextPrevChild_Callback = bool (*)(KPixmapRegionSelectorWidget*, bool);
    using KPixmapRegionSelectorWidget_TimerEvent_Callback = void (*)(KPixmapRegionSelectorWidget*, QTimerEvent*);
    using KPixmapRegionSelectorWidget_ChildEvent_Callback = void (*)(KPixmapRegionSelectorWidget*, QChildEvent*);
    using KPixmapRegionSelectorWidget_CustomEvent_Callback = void (*)(KPixmapRegionSelectorWidget*, QEvent*);
    using KPixmapRegionSelectorWidget_ConnectNotify_Callback = void (*)(KPixmapRegionSelectorWidget*, QMetaMethod*);
    using KPixmapRegionSelectorWidget_DisconnectNotify_Callback = void (*)(KPixmapRegionSelectorWidget*, QMetaMethod*);
    using KPixmapRegionSelectorWidget_UpdateMicroFocus_Callback = void (*)();
    using KPixmapRegionSelectorWidget_Create_Callback = void (*)();
    using KPixmapRegionSelectorWidget_Destroy_Callback = void (*)();
    using KPixmapRegionSelectorWidget_FocusNextChild_Callback = bool (*)();
    using KPixmapRegionSelectorWidget_FocusPreviousChild_Callback = bool (*)();
    using KPixmapRegionSelectorWidget_Sender_Callback = QObject* (*)();
    using KPixmapRegionSelectorWidget_SenderSignalIndex_Callback = int (*)();
    using KPixmapRegionSelectorWidget_Receivers_Callback = int (*)(const KPixmapRegionSelectorWidget*, const char*);
    using KPixmapRegionSelectorWidget_IsSignalConnected_Callback = bool (*)(const KPixmapRegionSelectorWidget*, QMetaMethod*);
    using KPixmapRegionSelectorWidget_GetDecodedMetricF_Callback = double (*)(const KPixmapRegionSelectorWidget*, int, int);

  protected:
    // Instance callback storage
    KPixmapRegionSelectorWidget_Metacall_Callback kpixmapregionselectorwidget_metacall_callback = nullptr;
    KPixmapRegionSelectorWidget_CreatePopupMenu_Callback kpixmapregionselectorwidget_createpopupmenu_callback = nullptr;
    KPixmapRegionSelectorWidget_EventFilter_Callback kpixmapregionselectorwidget_eventfilter_callback = nullptr;
    KPixmapRegionSelectorWidget_DevType_Callback kpixmapregionselectorwidget_devtype_callback = nullptr;
    KPixmapRegionSelectorWidget_SetVisible_Callback kpixmapregionselectorwidget_setvisible_callback = nullptr;
    KPixmapRegionSelectorWidget_SizeHint_Callback kpixmapregionselectorwidget_sizehint_callback = nullptr;
    KPixmapRegionSelectorWidget_MinimumSizeHint_Callback kpixmapregionselectorwidget_minimumsizehint_callback = nullptr;
    KPixmapRegionSelectorWidget_HeightForWidth_Callback kpixmapregionselectorwidget_heightforwidth_callback = nullptr;
    KPixmapRegionSelectorWidget_HasHeightForWidth_Callback kpixmapregionselectorwidget_hasheightforwidth_callback = nullptr;
    KPixmapRegionSelectorWidget_PaintEngine_Callback kpixmapregionselectorwidget_paintengine_callback = nullptr;
    KPixmapRegionSelectorWidget_Event_Callback kpixmapregionselectorwidget_event_callback = nullptr;
    KPixmapRegionSelectorWidget_MousePressEvent_Callback kpixmapregionselectorwidget_mousepressevent_callback = nullptr;
    KPixmapRegionSelectorWidget_MouseReleaseEvent_Callback kpixmapregionselectorwidget_mousereleaseevent_callback = nullptr;
    KPixmapRegionSelectorWidget_MouseDoubleClickEvent_Callback kpixmapregionselectorwidget_mousedoubleclickevent_callback = nullptr;
    KPixmapRegionSelectorWidget_MouseMoveEvent_Callback kpixmapregionselectorwidget_mousemoveevent_callback = nullptr;
    KPixmapRegionSelectorWidget_WheelEvent_Callback kpixmapregionselectorwidget_wheelevent_callback = nullptr;
    KPixmapRegionSelectorWidget_KeyPressEvent_Callback kpixmapregionselectorwidget_keypressevent_callback = nullptr;
    KPixmapRegionSelectorWidget_KeyReleaseEvent_Callback kpixmapregionselectorwidget_keyreleaseevent_callback = nullptr;
    KPixmapRegionSelectorWidget_FocusInEvent_Callback kpixmapregionselectorwidget_focusinevent_callback = nullptr;
    KPixmapRegionSelectorWidget_FocusOutEvent_Callback kpixmapregionselectorwidget_focusoutevent_callback = nullptr;
    KPixmapRegionSelectorWidget_EnterEvent_Callback kpixmapregionselectorwidget_enterevent_callback = nullptr;
    KPixmapRegionSelectorWidget_LeaveEvent_Callback kpixmapregionselectorwidget_leaveevent_callback = nullptr;
    KPixmapRegionSelectorWidget_PaintEvent_Callback kpixmapregionselectorwidget_paintevent_callback = nullptr;
    KPixmapRegionSelectorWidget_MoveEvent_Callback kpixmapregionselectorwidget_moveevent_callback = nullptr;
    KPixmapRegionSelectorWidget_ResizeEvent_Callback kpixmapregionselectorwidget_resizeevent_callback = nullptr;
    KPixmapRegionSelectorWidget_CloseEvent_Callback kpixmapregionselectorwidget_closeevent_callback = nullptr;
    KPixmapRegionSelectorWidget_ContextMenuEvent_Callback kpixmapregionselectorwidget_contextmenuevent_callback = nullptr;
    KPixmapRegionSelectorWidget_TabletEvent_Callback kpixmapregionselectorwidget_tabletevent_callback = nullptr;
    KPixmapRegionSelectorWidget_ActionEvent_Callback kpixmapregionselectorwidget_actionevent_callback = nullptr;
    KPixmapRegionSelectorWidget_DragEnterEvent_Callback kpixmapregionselectorwidget_dragenterevent_callback = nullptr;
    KPixmapRegionSelectorWidget_DragMoveEvent_Callback kpixmapregionselectorwidget_dragmoveevent_callback = nullptr;
    KPixmapRegionSelectorWidget_DragLeaveEvent_Callback kpixmapregionselectorwidget_dragleaveevent_callback = nullptr;
    KPixmapRegionSelectorWidget_DropEvent_Callback kpixmapregionselectorwidget_dropevent_callback = nullptr;
    KPixmapRegionSelectorWidget_ShowEvent_Callback kpixmapregionselectorwidget_showevent_callback = nullptr;
    KPixmapRegionSelectorWidget_HideEvent_Callback kpixmapregionselectorwidget_hideevent_callback = nullptr;
    KPixmapRegionSelectorWidget_NativeEvent_Callback kpixmapregionselectorwidget_nativeevent_callback = nullptr;
    KPixmapRegionSelectorWidget_ChangeEvent_Callback kpixmapregionselectorwidget_changeevent_callback = nullptr;
    KPixmapRegionSelectorWidget_Metric_Callback kpixmapregionselectorwidget_metric_callback = nullptr;
    KPixmapRegionSelectorWidget_InitPainter_Callback kpixmapregionselectorwidget_initpainter_callback = nullptr;
    KPixmapRegionSelectorWidget_Redirected_Callback kpixmapregionselectorwidget_redirected_callback = nullptr;
    KPixmapRegionSelectorWidget_SharedPainter_Callback kpixmapregionselectorwidget_sharedpainter_callback = nullptr;
    KPixmapRegionSelectorWidget_InputMethodEvent_Callback kpixmapregionselectorwidget_inputmethodevent_callback = nullptr;
    KPixmapRegionSelectorWidget_InputMethodQuery_Callback kpixmapregionselectorwidget_inputmethodquery_callback = nullptr;
    KPixmapRegionSelectorWidget_FocusNextPrevChild_Callback kpixmapregionselectorwidget_focusnextprevchild_callback = nullptr;
    KPixmapRegionSelectorWidget_TimerEvent_Callback kpixmapregionselectorwidget_timerevent_callback = nullptr;
    KPixmapRegionSelectorWidget_ChildEvent_Callback kpixmapregionselectorwidget_childevent_callback = nullptr;
    KPixmapRegionSelectorWidget_CustomEvent_Callback kpixmapregionselectorwidget_customevent_callback = nullptr;
    KPixmapRegionSelectorWidget_ConnectNotify_Callback kpixmapregionselectorwidget_connectnotify_callback = nullptr;
    KPixmapRegionSelectorWidget_DisconnectNotify_Callback kpixmapregionselectorwidget_disconnectnotify_callback = nullptr;
    KPixmapRegionSelectorWidget_UpdateMicroFocus_Callback kpixmapregionselectorwidget_updatemicrofocus_callback = nullptr;
    KPixmapRegionSelectorWidget_Create_Callback kpixmapregionselectorwidget_create_callback = nullptr;
    KPixmapRegionSelectorWidget_Destroy_Callback kpixmapregionselectorwidget_destroy_callback = nullptr;
    KPixmapRegionSelectorWidget_FocusNextChild_Callback kpixmapregionselectorwidget_focusnextchild_callback = nullptr;
    KPixmapRegionSelectorWidget_FocusPreviousChild_Callback kpixmapregionselectorwidget_focuspreviouschild_callback = nullptr;
    KPixmapRegionSelectorWidget_Sender_Callback kpixmapregionselectorwidget_sender_callback = nullptr;
    KPixmapRegionSelectorWidget_SenderSignalIndex_Callback kpixmapregionselectorwidget_sendersignalindex_callback = nullptr;
    KPixmapRegionSelectorWidget_Receivers_Callback kpixmapregionselectorwidget_receivers_callback = nullptr;
    KPixmapRegionSelectorWidget_IsSignalConnected_Callback kpixmapregionselectorwidget_issignalconnected_callback = nullptr;
    KPixmapRegionSelectorWidget_GetDecodedMetricF_Callback kpixmapregionselectorwidget_getdecodedmetricf_callback = nullptr;

    // Instance base flags
    mutable bool kpixmapregionselectorwidget_metacall_isbase = false;
    mutable bool kpixmapregionselectorwidget_createpopupmenu_isbase = false;
    mutable bool kpixmapregionselectorwidget_eventfilter_isbase = false;
    mutable bool kpixmapregionselectorwidget_devtype_isbase = false;
    mutable bool kpixmapregionselectorwidget_setvisible_isbase = false;
    mutable bool kpixmapregionselectorwidget_sizehint_isbase = false;
    mutable bool kpixmapregionselectorwidget_minimumsizehint_isbase = false;
    mutable bool kpixmapregionselectorwidget_heightforwidth_isbase = false;
    mutable bool kpixmapregionselectorwidget_hasheightforwidth_isbase = false;
    mutable bool kpixmapregionselectorwidget_paintengine_isbase = false;
    mutable bool kpixmapregionselectorwidget_event_isbase = false;
    mutable bool kpixmapregionselectorwidget_mousepressevent_isbase = false;
    mutable bool kpixmapregionselectorwidget_mousereleaseevent_isbase = false;
    mutable bool kpixmapregionselectorwidget_mousedoubleclickevent_isbase = false;
    mutable bool kpixmapregionselectorwidget_mousemoveevent_isbase = false;
    mutable bool kpixmapregionselectorwidget_wheelevent_isbase = false;
    mutable bool kpixmapregionselectorwidget_keypressevent_isbase = false;
    mutable bool kpixmapregionselectorwidget_keyreleaseevent_isbase = false;
    mutable bool kpixmapregionselectorwidget_focusinevent_isbase = false;
    mutable bool kpixmapregionselectorwidget_focusoutevent_isbase = false;
    mutable bool kpixmapregionselectorwidget_enterevent_isbase = false;
    mutable bool kpixmapregionselectorwidget_leaveevent_isbase = false;
    mutable bool kpixmapregionselectorwidget_paintevent_isbase = false;
    mutable bool kpixmapregionselectorwidget_moveevent_isbase = false;
    mutable bool kpixmapregionselectorwidget_resizeevent_isbase = false;
    mutable bool kpixmapregionselectorwidget_closeevent_isbase = false;
    mutable bool kpixmapregionselectorwidget_contextmenuevent_isbase = false;
    mutable bool kpixmapregionselectorwidget_tabletevent_isbase = false;
    mutable bool kpixmapregionselectorwidget_actionevent_isbase = false;
    mutable bool kpixmapregionselectorwidget_dragenterevent_isbase = false;
    mutable bool kpixmapregionselectorwidget_dragmoveevent_isbase = false;
    mutable bool kpixmapregionselectorwidget_dragleaveevent_isbase = false;
    mutable bool kpixmapregionselectorwidget_dropevent_isbase = false;
    mutable bool kpixmapregionselectorwidget_showevent_isbase = false;
    mutable bool kpixmapregionselectorwidget_hideevent_isbase = false;
    mutable bool kpixmapregionselectorwidget_nativeevent_isbase = false;
    mutable bool kpixmapregionselectorwidget_changeevent_isbase = false;
    mutable bool kpixmapregionselectorwidget_metric_isbase = false;
    mutable bool kpixmapregionselectorwidget_initpainter_isbase = false;
    mutable bool kpixmapregionselectorwidget_redirected_isbase = false;
    mutable bool kpixmapregionselectorwidget_sharedpainter_isbase = false;
    mutable bool kpixmapregionselectorwidget_inputmethodevent_isbase = false;
    mutable bool kpixmapregionselectorwidget_inputmethodquery_isbase = false;
    mutable bool kpixmapregionselectorwidget_focusnextprevchild_isbase = false;
    mutable bool kpixmapregionselectorwidget_timerevent_isbase = false;
    mutable bool kpixmapregionselectorwidget_childevent_isbase = false;
    mutable bool kpixmapregionselectorwidget_customevent_isbase = false;
    mutable bool kpixmapregionselectorwidget_connectnotify_isbase = false;
    mutable bool kpixmapregionselectorwidget_disconnectnotify_isbase = false;
    mutable bool kpixmapregionselectorwidget_updatemicrofocus_isbase = false;
    mutable bool kpixmapregionselectorwidget_create_isbase = false;
    mutable bool kpixmapregionselectorwidget_destroy_isbase = false;
    mutable bool kpixmapregionselectorwidget_focusnextchild_isbase = false;
    mutable bool kpixmapregionselectorwidget_focuspreviouschild_isbase = false;
    mutable bool kpixmapregionselectorwidget_sender_isbase = false;
    mutable bool kpixmapregionselectorwidget_sendersignalindex_isbase = false;
    mutable bool kpixmapregionselectorwidget_receivers_isbase = false;
    mutable bool kpixmapregionselectorwidget_issignalconnected_isbase = false;
    mutable bool kpixmapregionselectorwidget_getdecodedmetricf_isbase = false;

  public:
    VirtualKPixmapRegionSelectorWidget(QWidget* parent) : KPixmapRegionSelectorWidget(parent) {};
    VirtualKPixmapRegionSelectorWidget() : KPixmapRegionSelectorWidget() {};

    ~VirtualKPixmapRegionSelectorWidget() {
        kpixmapregionselectorwidget_metacall_callback = nullptr;
        kpixmapregionselectorwidget_createpopupmenu_callback = nullptr;
        kpixmapregionselectorwidget_eventfilter_callback = nullptr;
        kpixmapregionselectorwidget_devtype_callback = nullptr;
        kpixmapregionselectorwidget_setvisible_callback = nullptr;
        kpixmapregionselectorwidget_sizehint_callback = nullptr;
        kpixmapregionselectorwidget_minimumsizehint_callback = nullptr;
        kpixmapregionselectorwidget_heightforwidth_callback = nullptr;
        kpixmapregionselectorwidget_hasheightforwidth_callback = nullptr;
        kpixmapregionselectorwidget_paintengine_callback = nullptr;
        kpixmapregionselectorwidget_event_callback = nullptr;
        kpixmapregionselectorwidget_mousepressevent_callback = nullptr;
        kpixmapregionselectorwidget_mousereleaseevent_callback = nullptr;
        kpixmapregionselectorwidget_mousedoubleclickevent_callback = nullptr;
        kpixmapregionselectorwidget_mousemoveevent_callback = nullptr;
        kpixmapregionselectorwidget_wheelevent_callback = nullptr;
        kpixmapregionselectorwidget_keypressevent_callback = nullptr;
        kpixmapregionselectorwidget_keyreleaseevent_callback = nullptr;
        kpixmapregionselectorwidget_focusinevent_callback = nullptr;
        kpixmapregionselectorwidget_focusoutevent_callback = nullptr;
        kpixmapregionselectorwidget_enterevent_callback = nullptr;
        kpixmapregionselectorwidget_leaveevent_callback = nullptr;
        kpixmapregionselectorwidget_paintevent_callback = nullptr;
        kpixmapregionselectorwidget_moveevent_callback = nullptr;
        kpixmapregionselectorwidget_resizeevent_callback = nullptr;
        kpixmapregionselectorwidget_closeevent_callback = nullptr;
        kpixmapregionselectorwidget_contextmenuevent_callback = nullptr;
        kpixmapregionselectorwidget_tabletevent_callback = nullptr;
        kpixmapregionselectorwidget_actionevent_callback = nullptr;
        kpixmapregionselectorwidget_dragenterevent_callback = nullptr;
        kpixmapregionselectorwidget_dragmoveevent_callback = nullptr;
        kpixmapregionselectorwidget_dragleaveevent_callback = nullptr;
        kpixmapregionselectorwidget_dropevent_callback = nullptr;
        kpixmapregionselectorwidget_showevent_callback = nullptr;
        kpixmapregionselectorwidget_hideevent_callback = nullptr;
        kpixmapregionselectorwidget_nativeevent_callback = nullptr;
        kpixmapregionselectorwidget_changeevent_callback = nullptr;
        kpixmapregionselectorwidget_metric_callback = nullptr;
        kpixmapregionselectorwidget_initpainter_callback = nullptr;
        kpixmapregionselectorwidget_redirected_callback = nullptr;
        kpixmapregionselectorwidget_sharedpainter_callback = nullptr;
        kpixmapregionselectorwidget_inputmethodevent_callback = nullptr;
        kpixmapregionselectorwidget_inputmethodquery_callback = nullptr;
        kpixmapregionselectorwidget_focusnextprevchild_callback = nullptr;
        kpixmapregionselectorwidget_timerevent_callback = nullptr;
        kpixmapregionselectorwidget_childevent_callback = nullptr;
        kpixmapregionselectorwidget_customevent_callback = nullptr;
        kpixmapregionselectorwidget_connectnotify_callback = nullptr;
        kpixmapregionselectorwidget_disconnectnotify_callback = nullptr;
        kpixmapregionselectorwidget_updatemicrofocus_callback = nullptr;
        kpixmapregionselectorwidget_create_callback = nullptr;
        kpixmapregionselectorwidget_destroy_callback = nullptr;
        kpixmapregionselectorwidget_focusnextchild_callback = nullptr;
        kpixmapregionselectorwidget_focuspreviouschild_callback = nullptr;
        kpixmapregionselectorwidget_sender_callback = nullptr;
        kpixmapregionselectorwidget_sendersignalindex_callback = nullptr;
        kpixmapregionselectorwidget_receivers_callback = nullptr;
        kpixmapregionselectorwidget_issignalconnected_callback = nullptr;
        kpixmapregionselectorwidget_getdecodedmetricf_callback = nullptr;
    }

    // Callback setters
    inline void setKPixmapRegionSelectorWidget_Metacall_Callback(KPixmapRegionSelectorWidget_Metacall_Callback cb) { kpixmapregionselectorwidget_metacall_callback = cb; }
    inline void setKPixmapRegionSelectorWidget_CreatePopupMenu_Callback(KPixmapRegionSelectorWidget_CreatePopupMenu_Callback cb) { kpixmapregionselectorwidget_createpopupmenu_callback = cb; }
    inline void setKPixmapRegionSelectorWidget_EventFilter_Callback(KPixmapRegionSelectorWidget_EventFilter_Callback cb) { kpixmapregionselectorwidget_eventfilter_callback = cb; }
    inline void setKPixmapRegionSelectorWidget_DevType_Callback(KPixmapRegionSelectorWidget_DevType_Callback cb) { kpixmapregionselectorwidget_devtype_callback = cb; }
    inline void setKPixmapRegionSelectorWidget_SetVisible_Callback(KPixmapRegionSelectorWidget_SetVisible_Callback cb) { kpixmapregionselectorwidget_setvisible_callback = cb; }
    inline void setKPixmapRegionSelectorWidget_SizeHint_Callback(KPixmapRegionSelectorWidget_SizeHint_Callback cb) { kpixmapregionselectorwidget_sizehint_callback = cb; }
    inline void setKPixmapRegionSelectorWidget_MinimumSizeHint_Callback(KPixmapRegionSelectorWidget_MinimumSizeHint_Callback cb) { kpixmapregionselectorwidget_minimumsizehint_callback = cb; }
    inline void setKPixmapRegionSelectorWidget_HeightForWidth_Callback(KPixmapRegionSelectorWidget_HeightForWidth_Callback cb) { kpixmapregionselectorwidget_heightforwidth_callback = cb; }
    inline void setKPixmapRegionSelectorWidget_HasHeightForWidth_Callback(KPixmapRegionSelectorWidget_HasHeightForWidth_Callback cb) { kpixmapregionselectorwidget_hasheightforwidth_callback = cb; }
    inline void setKPixmapRegionSelectorWidget_PaintEngine_Callback(KPixmapRegionSelectorWidget_PaintEngine_Callback cb) { kpixmapregionselectorwidget_paintengine_callback = cb; }
    inline void setKPixmapRegionSelectorWidget_Event_Callback(KPixmapRegionSelectorWidget_Event_Callback cb) { kpixmapregionselectorwidget_event_callback = cb; }
    inline void setKPixmapRegionSelectorWidget_MousePressEvent_Callback(KPixmapRegionSelectorWidget_MousePressEvent_Callback cb) { kpixmapregionselectorwidget_mousepressevent_callback = cb; }
    inline void setKPixmapRegionSelectorWidget_MouseReleaseEvent_Callback(KPixmapRegionSelectorWidget_MouseReleaseEvent_Callback cb) { kpixmapregionselectorwidget_mousereleaseevent_callback = cb; }
    inline void setKPixmapRegionSelectorWidget_MouseDoubleClickEvent_Callback(KPixmapRegionSelectorWidget_MouseDoubleClickEvent_Callback cb) { kpixmapregionselectorwidget_mousedoubleclickevent_callback = cb; }
    inline void setKPixmapRegionSelectorWidget_MouseMoveEvent_Callback(KPixmapRegionSelectorWidget_MouseMoveEvent_Callback cb) { kpixmapregionselectorwidget_mousemoveevent_callback = cb; }
    inline void setKPixmapRegionSelectorWidget_WheelEvent_Callback(KPixmapRegionSelectorWidget_WheelEvent_Callback cb) { kpixmapregionselectorwidget_wheelevent_callback = cb; }
    inline void setKPixmapRegionSelectorWidget_KeyPressEvent_Callback(KPixmapRegionSelectorWidget_KeyPressEvent_Callback cb) { kpixmapregionselectorwidget_keypressevent_callback = cb; }
    inline void setKPixmapRegionSelectorWidget_KeyReleaseEvent_Callback(KPixmapRegionSelectorWidget_KeyReleaseEvent_Callback cb) { kpixmapregionselectorwidget_keyreleaseevent_callback = cb; }
    inline void setKPixmapRegionSelectorWidget_FocusInEvent_Callback(KPixmapRegionSelectorWidget_FocusInEvent_Callback cb) { kpixmapregionselectorwidget_focusinevent_callback = cb; }
    inline void setKPixmapRegionSelectorWidget_FocusOutEvent_Callback(KPixmapRegionSelectorWidget_FocusOutEvent_Callback cb) { kpixmapregionselectorwidget_focusoutevent_callback = cb; }
    inline void setKPixmapRegionSelectorWidget_EnterEvent_Callback(KPixmapRegionSelectorWidget_EnterEvent_Callback cb) { kpixmapregionselectorwidget_enterevent_callback = cb; }
    inline void setKPixmapRegionSelectorWidget_LeaveEvent_Callback(KPixmapRegionSelectorWidget_LeaveEvent_Callback cb) { kpixmapregionselectorwidget_leaveevent_callback = cb; }
    inline void setKPixmapRegionSelectorWidget_PaintEvent_Callback(KPixmapRegionSelectorWidget_PaintEvent_Callback cb) { kpixmapregionselectorwidget_paintevent_callback = cb; }
    inline void setKPixmapRegionSelectorWidget_MoveEvent_Callback(KPixmapRegionSelectorWidget_MoveEvent_Callback cb) { kpixmapregionselectorwidget_moveevent_callback = cb; }
    inline void setKPixmapRegionSelectorWidget_ResizeEvent_Callback(KPixmapRegionSelectorWidget_ResizeEvent_Callback cb) { kpixmapregionselectorwidget_resizeevent_callback = cb; }
    inline void setKPixmapRegionSelectorWidget_CloseEvent_Callback(KPixmapRegionSelectorWidget_CloseEvent_Callback cb) { kpixmapregionselectorwidget_closeevent_callback = cb; }
    inline void setKPixmapRegionSelectorWidget_ContextMenuEvent_Callback(KPixmapRegionSelectorWidget_ContextMenuEvent_Callback cb) { kpixmapregionselectorwidget_contextmenuevent_callback = cb; }
    inline void setKPixmapRegionSelectorWidget_TabletEvent_Callback(KPixmapRegionSelectorWidget_TabletEvent_Callback cb) { kpixmapregionselectorwidget_tabletevent_callback = cb; }
    inline void setKPixmapRegionSelectorWidget_ActionEvent_Callback(KPixmapRegionSelectorWidget_ActionEvent_Callback cb) { kpixmapregionselectorwidget_actionevent_callback = cb; }
    inline void setKPixmapRegionSelectorWidget_DragEnterEvent_Callback(KPixmapRegionSelectorWidget_DragEnterEvent_Callback cb) { kpixmapregionselectorwidget_dragenterevent_callback = cb; }
    inline void setKPixmapRegionSelectorWidget_DragMoveEvent_Callback(KPixmapRegionSelectorWidget_DragMoveEvent_Callback cb) { kpixmapregionselectorwidget_dragmoveevent_callback = cb; }
    inline void setKPixmapRegionSelectorWidget_DragLeaveEvent_Callback(KPixmapRegionSelectorWidget_DragLeaveEvent_Callback cb) { kpixmapregionselectorwidget_dragleaveevent_callback = cb; }
    inline void setKPixmapRegionSelectorWidget_DropEvent_Callback(KPixmapRegionSelectorWidget_DropEvent_Callback cb) { kpixmapregionselectorwidget_dropevent_callback = cb; }
    inline void setKPixmapRegionSelectorWidget_ShowEvent_Callback(KPixmapRegionSelectorWidget_ShowEvent_Callback cb) { kpixmapregionselectorwidget_showevent_callback = cb; }
    inline void setKPixmapRegionSelectorWidget_HideEvent_Callback(KPixmapRegionSelectorWidget_HideEvent_Callback cb) { kpixmapregionselectorwidget_hideevent_callback = cb; }
    inline void setKPixmapRegionSelectorWidget_NativeEvent_Callback(KPixmapRegionSelectorWidget_NativeEvent_Callback cb) { kpixmapregionselectorwidget_nativeevent_callback = cb; }
    inline void setKPixmapRegionSelectorWidget_ChangeEvent_Callback(KPixmapRegionSelectorWidget_ChangeEvent_Callback cb) { kpixmapregionselectorwidget_changeevent_callback = cb; }
    inline void setKPixmapRegionSelectorWidget_Metric_Callback(KPixmapRegionSelectorWidget_Metric_Callback cb) { kpixmapregionselectorwidget_metric_callback = cb; }
    inline void setKPixmapRegionSelectorWidget_InitPainter_Callback(KPixmapRegionSelectorWidget_InitPainter_Callback cb) { kpixmapregionselectorwidget_initpainter_callback = cb; }
    inline void setKPixmapRegionSelectorWidget_Redirected_Callback(KPixmapRegionSelectorWidget_Redirected_Callback cb) { kpixmapregionselectorwidget_redirected_callback = cb; }
    inline void setKPixmapRegionSelectorWidget_SharedPainter_Callback(KPixmapRegionSelectorWidget_SharedPainter_Callback cb) { kpixmapregionselectorwidget_sharedpainter_callback = cb; }
    inline void setKPixmapRegionSelectorWidget_InputMethodEvent_Callback(KPixmapRegionSelectorWidget_InputMethodEvent_Callback cb) { kpixmapregionselectorwidget_inputmethodevent_callback = cb; }
    inline void setKPixmapRegionSelectorWidget_InputMethodQuery_Callback(KPixmapRegionSelectorWidget_InputMethodQuery_Callback cb) { kpixmapregionselectorwidget_inputmethodquery_callback = cb; }
    inline void setKPixmapRegionSelectorWidget_FocusNextPrevChild_Callback(KPixmapRegionSelectorWidget_FocusNextPrevChild_Callback cb) { kpixmapregionselectorwidget_focusnextprevchild_callback = cb; }
    inline void setKPixmapRegionSelectorWidget_TimerEvent_Callback(KPixmapRegionSelectorWidget_TimerEvent_Callback cb) { kpixmapregionselectorwidget_timerevent_callback = cb; }
    inline void setKPixmapRegionSelectorWidget_ChildEvent_Callback(KPixmapRegionSelectorWidget_ChildEvent_Callback cb) { kpixmapregionselectorwidget_childevent_callback = cb; }
    inline void setKPixmapRegionSelectorWidget_CustomEvent_Callback(KPixmapRegionSelectorWidget_CustomEvent_Callback cb) { kpixmapregionselectorwidget_customevent_callback = cb; }
    inline void setKPixmapRegionSelectorWidget_ConnectNotify_Callback(KPixmapRegionSelectorWidget_ConnectNotify_Callback cb) { kpixmapregionselectorwidget_connectnotify_callback = cb; }
    inline void setKPixmapRegionSelectorWidget_DisconnectNotify_Callback(KPixmapRegionSelectorWidget_DisconnectNotify_Callback cb) { kpixmapregionselectorwidget_disconnectnotify_callback = cb; }
    inline void setKPixmapRegionSelectorWidget_UpdateMicroFocus_Callback(KPixmapRegionSelectorWidget_UpdateMicroFocus_Callback cb) { kpixmapregionselectorwidget_updatemicrofocus_callback = cb; }
    inline void setKPixmapRegionSelectorWidget_Create_Callback(KPixmapRegionSelectorWidget_Create_Callback cb) { kpixmapregionselectorwidget_create_callback = cb; }
    inline void setKPixmapRegionSelectorWidget_Destroy_Callback(KPixmapRegionSelectorWidget_Destroy_Callback cb) { kpixmapregionselectorwidget_destroy_callback = cb; }
    inline void setKPixmapRegionSelectorWidget_FocusNextChild_Callback(KPixmapRegionSelectorWidget_FocusNextChild_Callback cb) { kpixmapregionselectorwidget_focusnextchild_callback = cb; }
    inline void setKPixmapRegionSelectorWidget_FocusPreviousChild_Callback(KPixmapRegionSelectorWidget_FocusPreviousChild_Callback cb) { kpixmapregionselectorwidget_focuspreviouschild_callback = cb; }
    inline void setKPixmapRegionSelectorWidget_Sender_Callback(KPixmapRegionSelectorWidget_Sender_Callback cb) { kpixmapregionselectorwidget_sender_callback = cb; }
    inline void setKPixmapRegionSelectorWidget_SenderSignalIndex_Callback(KPixmapRegionSelectorWidget_SenderSignalIndex_Callback cb) { kpixmapregionselectorwidget_sendersignalindex_callback = cb; }
    inline void setKPixmapRegionSelectorWidget_Receivers_Callback(KPixmapRegionSelectorWidget_Receivers_Callback cb) { kpixmapregionselectorwidget_receivers_callback = cb; }
    inline void setKPixmapRegionSelectorWidget_IsSignalConnected_Callback(KPixmapRegionSelectorWidget_IsSignalConnected_Callback cb) { kpixmapregionselectorwidget_issignalconnected_callback = cb; }
    inline void setKPixmapRegionSelectorWidget_GetDecodedMetricF_Callback(KPixmapRegionSelectorWidget_GetDecodedMetricF_Callback cb) { kpixmapregionselectorwidget_getdecodedmetricf_callback = cb; }

    // Base flag setters
    inline void setKPixmapRegionSelectorWidget_Metacall_IsBase(bool value) const { kpixmapregionselectorwidget_metacall_isbase = value; }
    inline void setKPixmapRegionSelectorWidget_CreatePopupMenu_IsBase(bool value) const { kpixmapregionselectorwidget_createpopupmenu_isbase = value; }
    inline void setKPixmapRegionSelectorWidget_EventFilter_IsBase(bool value) const { kpixmapregionselectorwidget_eventfilter_isbase = value; }
    inline void setKPixmapRegionSelectorWidget_DevType_IsBase(bool value) const { kpixmapregionselectorwidget_devtype_isbase = value; }
    inline void setKPixmapRegionSelectorWidget_SetVisible_IsBase(bool value) const { kpixmapregionselectorwidget_setvisible_isbase = value; }
    inline void setKPixmapRegionSelectorWidget_SizeHint_IsBase(bool value) const { kpixmapregionselectorwidget_sizehint_isbase = value; }
    inline void setKPixmapRegionSelectorWidget_MinimumSizeHint_IsBase(bool value) const { kpixmapregionselectorwidget_minimumsizehint_isbase = value; }
    inline void setKPixmapRegionSelectorWidget_HeightForWidth_IsBase(bool value) const { kpixmapregionselectorwidget_heightforwidth_isbase = value; }
    inline void setKPixmapRegionSelectorWidget_HasHeightForWidth_IsBase(bool value) const { kpixmapregionselectorwidget_hasheightforwidth_isbase = value; }
    inline void setKPixmapRegionSelectorWidget_PaintEngine_IsBase(bool value) const { kpixmapregionselectorwidget_paintengine_isbase = value; }
    inline void setKPixmapRegionSelectorWidget_Event_IsBase(bool value) const { kpixmapregionselectorwidget_event_isbase = value; }
    inline void setKPixmapRegionSelectorWidget_MousePressEvent_IsBase(bool value) const { kpixmapregionselectorwidget_mousepressevent_isbase = value; }
    inline void setKPixmapRegionSelectorWidget_MouseReleaseEvent_IsBase(bool value) const { kpixmapregionselectorwidget_mousereleaseevent_isbase = value; }
    inline void setKPixmapRegionSelectorWidget_MouseDoubleClickEvent_IsBase(bool value) const { kpixmapregionselectorwidget_mousedoubleclickevent_isbase = value; }
    inline void setKPixmapRegionSelectorWidget_MouseMoveEvent_IsBase(bool value) const { kpixmapregionselectorwidget_mousemoveevent_isbase = value; }
    inline void setKPixmapRegionSelectorWidget_WheelEvent_IsBase(bool value) const { kpixmapregionselectorwidget_wheelevent_isbase = value; }
    inline void setKPixmapRegionSelectorWidget_KeyPressEvent_IsBase(bool value) const { kpixmapregionselectorwidget_keypressevent_isbase = value; }
    inline void setKPixmapRegionSelectorWidget_KeyReleaseEvent_IsBase(bool value) const { kpixmapregionselectorwidget_keyreleaseevent_isbase = value; }
    inline void setKPixmapRegionSelectorWidget_FocusInEvent_IsBase(bool value) const { kpixmapregionselectorwidget_focusinevent_isbase = value; }
    inline void setKPixmapRegionSelectorWidget_FocusOutEvent_IsBase(bool value) const { kpixmapregionselectorwidget_focusoutevent_isbase = value; }
    inline void setKPixmapRegionSelectorWidget_EnterEvent_IsBase(bool value) const { kpixmapregionselectorwidget_enterevent_isbase = value; }
    inline void setKPixmapRegionSelectorWidget_LeaveEvent_IsBase(bool value) const { kpixmapregionselectorwidget_leaveevent_isbase = value; }
    inline void setKPixmapRegionSelectorWidget_PaintEvent_IsBase(bool value) const { kpixmapregionselectorwidget_paintevent_isbase = value; }
    inline void setKPixmapRegionSelectorWidget_MoveEvent_IsBase(bool value) const { kpixmapregionselectorwidget_moveevent_isbase = value; }
    inline void setKPixmapRegionSelectorWidget_ResizeEvent_IsBase(bool value) const { kpixmapregionselectorwidget_resizeevent_isbase = value; }
    inline void setKPixmapRegionSelectorWidget_CloseEvent_IsBase(bool value) const { kpixmapregionselectorwidget_closeevent_isbase = value; }
    inline void setKPixmapRegionSelectorWidget_ContextMenuEvent_IsBase(bool value) const { kpixmapregionselectorwidget_contextmenuevent_isbase = value; }
    inline void setKPixmapRegionSelectorWidget_TabletEvent_IsBase(bool value) const { kpixmapregionselectorwidget_tabletevent_isbase = value; }
    inline void setKPixmapRegionSelectorWidget_ActionEvent_IsBase(bool value) const { kpixmapregionselectorwidget_actionevent_isbase = value; }
    inline void setKPixmapRegionSelectorWidget_DragEnterEvent_IsBase(bool value) const { kpixmapregionselectorwidget_dragenterevent_isbase = value; }
    inline void setKPixmapRegionSelectorWidget_DragMoveEvent_IsBase(bool value) const { kpixmapregionselectorwidget_dragmoveevent_isbase = value; }
    inline void setKPixmapRegionSelectorWidget_DragLeaveEvent_IsBase(bool value) const { kpixmapregionselectorwidget_dragleaveevent_isbase = value; }
    inline void setKPixmapRegionSelectorWidget_DropEvent_IsBase(bool value) const { kpixmapregionselectorwidget_dropevent_isbase = value; }
    inline void setKPixmapRegionSelectorWidget_ShowEvent_IsBase(bool value) const { kpixmapregionselectorwidget_showevent_isbase = value; }
    inline void setKPixmapRegionSelectorWidget_HideEvent_IsBase(bool value) const { kpixmapregionselectorwidget_hideevent_isbase = value; }
    inline void setKPixmapRegionSelectorWidget_NativeEvent_IsBase(bool value) const { kpixmapregionselectorwidget_nativeevent_isbase = value; }
    inline void setKPixmapRegionSelectorWidget_ChangeEvent_IsBase(bool value) const { kpixmapregionselectorwidget_changeevent_isbase = value; }
    inline void setKPixmapRegionSelectorWidget_Metric_IsBase(bool value) const { kpixmapregionselectorwidget_metric_isbase = value; }
    inline void setKPixmapRegionSelectorWidget_InitPainter_IsBase(bool value) const { kpixmapregionselectorwidget_initpainter_isbase = value; }
    inline void setKPixmapRegionSelectorWidget_Redirected_IsBase(bool value) const { kpixmapregionselectorwidget_redirected_isbase = value; }
    inline void setKPixmapRegionSelectorWidget_SharedPainter_IsBase(bool value) const { kpixmapregionselectorwidget_sharedpainter_isbase = value; }
    inline void setKPixmapRegionSelectorWidget_InputMethodEvent_IsBase(bool value) const { kpixmapregionselectorwidget_inputmethodevent_isbase = value; }
    inline void setKPixmapRegionSelectorWidget_InputMethodQuery_IsBase(bool value) const { kpixmapregionselectorwidget_inputmethodquery_isbase = value; }
    inline void setKPixmapRegionSelectorWidget_FocusNextPrevChild_IsBase(bool value) const { kpixmapregionselectorwidget_focusnextprevchild_isbase = value; }
    inline void setKPixmapRegionSelectorWidget_TimerEvent_IsBase(bool value) const { kpixmapregionselectorwidget_timerevent_isbase = value; }
    inline void setKPixmapRegionSelectorWidget_ChildEvent_IsBase(bool value) const { kpixmapregionselectorwidget_childevent_isbase = value; }
    inline void setKPixmapRegionSelectorWidget_CustomEvent_IsBase(bool value) const { kpixmapregionselectorwidget_customevent_isbase = value; }
    inline void setKPixmapRegionSelectorWidget_ConnectNotify_IsBase(bool value) const { kpixmapregionselectorwidget_connectnotify_isbase = value; }
    inline void setKPixmapRegionSelectorWidget_DisconnectNotify_IsBase(bool value) const { kpixmapregionselectorwidget_disconnectnotify_isbase = value; }
    inline void setKPixmapRegionSelectorWidget_UpdateMicroFocus_IsBase(bool value) const { kpixmapregionselectorwidget_updatemicrofocus_isbase = value; }
    inline void setKPixmapRegionSelectorWidget_Create_IsBase(bool value) const { kpixmapregionselectorwidget_create_isbase = value; }
    inline void setKPixmapRegionSelectorWidget_Destroy_IsBase(bool value) const { kpixmapregionselectorwidget_destroy_isbase = value; }
    inline void setKPixmapRegionSelectorWidget_FocusNextChild_IsBase(bool value) const { kpixmapregionselectorwidget_focusnextchild_isbase = value; }
    inline void setKPixmapRegionSelectorWidget_FocusPreviousChild_IsBase(bool value) const { kpixmapregionselectorwidget_focuspreviouschild_isbase = value; }
    inline void setKPixmapRegionSelectorWidget_Sender_IsBase(bool value) const { kpixmapregionselectorwidget_sender_isbase = value; }
    inline void setKPixmapRegionSelectorWidget_SenderSignalIndex_IsBase(bool value) const { kpixmapregionselectorwidget_sendersignalindex_isbase = value; }
    inline void setKPixmapRegionSelectorWidget_Receivers_IsBase(bool value) const { kpixmapregionselectorwidget_receivers_isbase = value; }
    inline void setKPixmapRegionSelectorWidget_IsSignalConnected_IsBase(bool value) const { kpixmapregionselectorwidget_issignalconnected_isbase = value; }
    inline void setKPixmapRegionSelectorWidget_GetDecodedMetricF_IsBase(bool value) const { kpixmapregionselectorwidget_getdecodedmetricf_isbase = value; }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (kpixmapregionselectorwidget_metacall_isbase) {
            kpixmapregionselectorwidget_metacall_isbase = false;
            return KPixmapRegionSelectorWidget::qt_metacall(param1, param2, param3);
        } else if (kpixmapregionselectorwidget_metacall_callback != nullptr) {
            int cbval1 = static_cast<int>(param1);
            int cbval2 = param2;
            void** cbval3 = param3;

            int callback_ret = kpixmapregionselectorwidget_metacall_callback(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        } else {
            return KPixmapRegionSelectorWidget::qt_metacall(param1, param2, param3);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QMenu* createPopupMenu() override {
        if (kpixmapregionselectorwidget_createpopupmenu_isbase) {
            kpixmapregionselectorwidget_createpopupmenu_isbase = false;
            return KPixmapRegionSelectorWidget::createPopupMenu();
        } else if (kpixmapregionselectorwidget_createpopupmenu_callback != nullptr) {
            QMenu* callback_ret = kpixmapregionselectorwidget_createpopupmenu_callback();
            return callback_ret;
        } else {
            return KPixmapRegionSelectorWidget::createPopupMenu();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* obj, QEvent* ev) override {
        if (kpixmapregionselectorwidget_eventfilter_isbase) {
            kpixmapregionselectorwidget_eventfilter_isbase = false;
            return KPixmapRegionSelectorWidget::eventFilter(obj, ev);
        } else if (kpixmapregionselectorwidget_eventfilter_callback != nullptr) {
            QObject* cbval1 = obj;
            QEvent* cbval2 = ev;

            bool callback_ret = kpixmapregionselectorwidget_eventfilter_callback(this, cbval1, cbval2);
            return callback_ret;
        } else {
            return KPixmapRegionSelectorWidget::eventFilter(obj, ev);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual int devType() const override {
        if (kpixmapregionselectorwidget_devtype_isbase) {
            kpixmapregionselectorwidget_devtype_isbase = false;
            return KPixmapRegionSelectorWidget::devType();
        } else if (kpixmapregionselectorwidget_devtype_callback != nullptr) {
            int callback_ret = kpixmapregionselectorwidget_devtype_callback();
            return static_cast<int>(callback_ret);
        } else {
            return KPixmapRegionSelectorWidget::devType();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void setVisible(bool visible) override {
        if (kpixmapregionselectorwidget_setvisible_isbase) {
            kpixmapregionselectorwidget_setvisible_isbase = false;
            KPixmapRegionSelectorWidget::setVisible(visible);
        } else if (kpixmapregionselectorwidget_setvisible_callback != nullptr) {
            bool cbval1 = visible;

            kpixmapregionselectorwidget_setvisible_callback(this, cbval1);
        } else {
            KPixmapRegionSelectorWidget::setVisible(visible);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QSize sizeHint() const override {
        if (kpixmapregionselectorwidget_sizehint_isbase) {
            kpixmapregionselectorwidget_sizehint_isbase = false;
            return KPixmapRegionSelectorWidget::sizeHint();
        } else if (kpixmapregionselectorwidget_sizehint_callback != nullptr) {
            QSize* callback_ret = kpixmapregionselectorwidget_sizehint_callback();
            return *callback_ret;
        } else {
            return KPixmapRegionSelectorWidget::sizeHint();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QSize minimumSizeHint() const override {
        if (kpixmapregionselectorwidget_minimumsizehint_isbase) {
            kpixmapregionselectorwidget_minimumsizehint_isbase = false;
            return KPixmapRegionSelectorWidget::minimumSizeHint();
        } else if (kpixmapregionselectorwidget_minimumsizehint_callback != nullptr) {
            QSize* callback_ret = kpixmapregionselectorwidget_minimumsizehint_callback();
            return *callback_ret;
        } else {
            return KPixmapRegionSelectorWidget::minimumSizeHint();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual int heightForWidth(int param1) const override {
        if (kpixmapregionselectorwidget_heightforwidth_isbase) {
            kpixmapregionselectorwidget_heightforwidth_isbase = false;
            return KPixmapRegionSelectorWidget::heightForWidth(param1);
        } else if (kpixmapregionselectorwidget_heightforwidth_callback != nullptr) {
            int cbval1 = param1;

            int callback_ret = kpixmapregionselectorwidget_heightforwidth_callback(this, cbval1);
            return static_cast<int>(callback_ret);
        } else {
            return KPixmapRegionSelectorWidget::heightForWidth(param1);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool hasHeightForWidth() const override {
        if (kpixmapregionselectorwidget_hasheightforwidth_isbase) {
            kpixmapregionselectorwidget_hasheightforwidth_isbase = false;
            return KPixmapRegionSelectorWidget::hasHeightForWidth();
        } else if (kpixmapregionselectorwidget_hasheightforwidth_callback != nullptr) {
            bool callback_ret = kpixmapregionselectorwidget_hasheightforwidth_callback();
            return callback_ret;
        } else {
            return KPixmapRegionSelectorWidget::hasHeightForWidth();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QPaintEngine* paintEngine() const override {
        if (kpixmapregionselectorwidget_paintengine_isbase) {
            kpixmapregionselectorwidget_paintengine_isbase = false;
            return KPixmapRegionSelectorWidget::paintEngine();
        } else if (kpixmapregionselectorwidget_paintengine_callback != nullptr) {
            QPaintEngine* callback_ret = kpixmapregionselectorwidget_paintengine_callback();
            return callback_ret;
        } else {
            return KPixmapRegionSelectorWidget::paintEngine();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* event) override {
        if (kpixmapregionselectorwidget_event_isbase) {
            kpixmapregionselectorwidget_event_isbase = false;
            return KPixmapRegionSelectorWidget::event(event);
        } else if (kpixmapregionselectorwidget_event_callback != nullptr) {
            QEvent* cbval1 = event;

            bool callback_ret = kpixmapregionselectorwidget_event_callback(this, cbval1);
            return callback_ret;
        } else {
            return KPixmapRegionSelectorWidget::event(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void mousePressEvent(QMouseEvent* event) override {
        if (kpixmapregionselectorwidget_mousepressevent_isbase) {
            kpixmapregionselectorwidget_mousepressevent_isbase = false;
            KPixmapRegionSelectorWidget::mousePressEvent(event);
        } else if (kpixmapregionselectorwidget_mousepressevent_callback != nullptr) {
            QMouseEvent* cbval1 = event;

            kpixmapregionselectorwidget_mousepressevent_callback(this, cbval1);
        } else {
            KPixmapRegionSelectorWidget::mousePressEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseReleaseEvent(QMouseEvent* event) override {
        if (kpixmapregionselectorwidget_mousereleaseevent_isbase) {
            kpixmapregionselectorwidget_mousereleaseevent_isbase = false;
            KPixmapRegionSelectorWidget::mouseReleaseEvent(event);
        } else if (kpixmapregionselectorwidget_mousereleaseevent_callback != nullptr) {
            QMouseEvent* cbval1 = event;

            kpixmapregionselectorwidget_mousereleaseevent_callback(this, cbval1);
        } else {
            KPixmapRegionSelectorWidget::mouseReleaseEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseDoubleClickEvent(QMouseEvent* event) override {
        if (kpixmapregionselectorwidget_mousedoubleclickevent_isbase) {
            kpixmapregionselectorwidget_mousedoubleclickevent_isbase = false;
            KPixmapRegionSelectorWidget::mouseDoubleClickEvent(event);
        } else if (kpixmapregionselectorwidget_mousedoubleclickevent_callback != nullptr) {
            QMouseEvent* cbval1 = event;

            kpixmapregionselectorwidget_mousedoubleclickevent_callback(this, cbval1);
        } else {
            KPixmapRegionSelectorWidget::mouseDoubleClickEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseMoveEvent(QMouseEvent* event) override {
        if (kpixmapregionselectorwidget_mousemoveevent_isbase) {
            kpixmapregionselectorwidget_mousemoveevent_isbase = false;
            KPixmapRegionSelectorWidget::mouseMoveEvent(event);
        } else if (kpixmapregionselectorwidget_mousemoveevent_callback != nullptr) {
            QMouseEvent* cbval1 = event;

            kpixmapregionselectorwidget_mousemoveevent_callback(this, cbval1);
        } else {
            KPixmapRegionSelectorWidget::mouseMoveEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void wheelEvent(QWheelEvent* event) override {
        if (kpixmapregionselectorwidget_wheelevent_isbase) {
            kpixmapregionselectorwidget_wheelevent_isbase = false;
            KPixmapRegionSelectorWidget::wheelEvent(event);
        } else if (kpixmapregionselectorwidget_wheelevent_callback != nullptr) {
            QWheelEvent* cbval1 = event;

            kpixmapregionselectorwidget_wheelevent_callback(this, cbval1);
        } else {
            KPixmapRegionSelectorWidget::wheelEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void keyPressEvent(QKeyEvent* event) override {
        if (kpixmapregionselectorwidget_keypressevent_isbase) {
            kpixmapregionselectorwidget_keypressevent_isbase = false;
            KPixmapRegionSelectorWidget::keyPressEvent(event);
        } else if (kpixmapregionselectorwidget_keypressevent_callback != nullptr) {
            QKeyEvent* cbval1 = event;

            kpixmapregionselectorwidget_keypressevent_callback(this, cbval1);
        } else {
            KPixmapRegionSelectorWidget::keyPressEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void keyReleaseEvent(QKeyEvent* event) override {
        if (kpixmapregionselectorwidget_keyreleaseevent_isbase) {
            kpixmapregionselectorwidget_keyreleaseevent_isbase = false;
            KPixmapRegionSelectorWidget::keyReleaseEvent(event);
        } else if (kpixmapregionselectorwidget_keyreleaseevent_callback != nullptr) {
            QKeyEvent* cbval1 = event;

            kpixmapregionselectorwidget_keyreleaseevent_callback(this, cbval1);
        } else {
            KPixmapRegionSelectorWidget::keyReleaseEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void focusInEvent(QFocusEvent* event) override {
        if (kpixmapregionselectorwidget_focusinevent_isbase) {
            kpixmapregionselectorwidget_focusinevent_isbase = false;
            KPixmapRegionSelectorWidget::focusInEvent(event);
        } else if (kpixmapregionselectorwidget_focusinevent_callback != nullptr) {
            QFocusEvent* cbval1 = event;

            kpixmapregionselectorwidget_focusinevent_callback(this, cbval1);
        } else {
            KPixmapRegionSelectorWidget::focusInEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void focusOutEvent(QFocusEvent* event) override {
        if (kpixmapregionselectorwidget_focusoutevent_isbase) {
            kpixmapregionselectorwidget_focusoutevent_isbase = false;
            KPixmapRegionSelectorWidget::focusOutEvent(event);
        } else if (kpixmapregionselectorwidget_focusoutevent_callback != nullptr) {
            QFocusEvent* cbval1 = event;

            kpixmapregionselectorwidget_focusoutevent_callback(this, cbval1);
        } else {
            KPixmapRegionSelectorWidget::focusOutEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void enterEvent(QEnterEvent* event) override {
        if (kpixmapregionselectorwidget_enterevent_isbase) {
            kpixmapregionselectorwidget_enterevent_isbase = false;
            KPixmapRegionSelectorWidget::enterEvent(event);
        } else if (kpixmapregionselectorwidget_enterevent_callback != nullptr) {
            QEnterEvent* cbval1 = event;

            kpixmapregionselectorwidget_enterevent_callback(this, cbval1);
        } else {
            KPixmapRegionSelectorWidget::enterEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void leaveEvent(QEvent* event) override {
        if (kpixmapregionselectorwidget_leaveevent_isbase) {
            kpixmapregionselectorwidget_leaveevent_isbase = false;
            KPixmapRegionSelectorWidget::leaveEvent(event);
        } else if (kpixmapregionselectorwidget_leaveevent_callback != nullptr) {
            QEvent* cbval1 = event;

            kpixmapregionselectorwidget_leaveevent_callback(this, cbval1);
        } else {
            KPixmapRegionSelectorWidget::leaveEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void paintEvent(QPaintEvent* event) override {
        if (kpixmapregionselectorwidget_paintevent_isbase) {
            kpixmapregionselectorwidget_paintevent_isbase = false;
            KPixmapRegionSelectorWidget::paintEvent(event);
        } else if (kpixmapregionselectorwidget_paintevent_callback != nullptr) {
            QPaintEvent* cbval1 = event;

            kpixmapregionselectorwidget_paintevent_callback(this, cbval1);
        } else {
            KPixmapRegionSelectorWidget::paintEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void moveEvent(QMoveEvent* event) override {
        if (kpixmapregionselectorwidget_moveevent_isbase) {
            kpixmapregionselectorwidget_moveevent_isbase = false;
            KPixmapRegionSelectorWidget::moveEvent(event);
        } else if (kpixmapregionselectorwidget_moveevent_callback != nullptr) {
            QMoveEvent* cbval1 = event;

            kpixmapregionselectorwidget_moveevent_callback(this, cbval1);
        } else {
            KPixmapRegionSelectorWidget::moveEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void resizeEvent(QResizeEvent* event) override {
        if (kpixmapregionselectorwidget_resizeevent_isbase) {
            kpixmapregionselectorwidget_resizeevent_isbase = false;
            KPixmapRegionSelectorWidget::resizeEvent(event);
        } else if (kpixmapregionselectorwidget_resizeevent_callback != nullptr) {
            QResizeEvent* cbval1 = event;

            kpixmapregionselectorwidget_resizeevent_callback(this, cbval1);
        } else {
            KPixmapRegionSelectorWidget::resizeEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void closeEvent(QCloseEvent* event) override {
        if (kpixmapregionselectorwidget_closeevent_isbase) {
            kpixmapregionselectorwidget_closeevent_isbase = false;
            KPixmapRegionSelectorWidget::closeEvent(event);
        } else if (kpixmapregionselectorwidget_closeevent_callback != nullptr) {
            QCloseEvent* cbval1 = event;

            kpixmapregionselectorwidget_closeevent_callback(this, cbval1);
        } else {
            KPixmapRegionSelectorWidget::closeEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void contextMenuEvent(QContextMenuEvent* event) override {
        if (kpixmapregionselectorwidget_contextmenuevent_isbase) {
            kpixmapregionselectorwidget_contextmenuevent_isbase = false;
            KPixmapRegionSelectorWidget::contextMenuEvent(event);
        } else if (kpixmapregionselectorwidget_contextmenuevent_callback != nullptr) {
            QContextMenuEvent* cbval1 = event;

            kpixmapregionselectorwidget_contextmenuevent_callback(this, cbval1);
        } else {
            KPixmapRegionSelectorWidget::contextMenuEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void tabletEvent(QTabletEvent* event) override {
        if (kpixmapregionselectorwidget_tabletevent_isbase) {
            kpixmapregionselectorwidget_tabletevent_isbase = false;
            KPixmapRegionSelectorWidget::tabletEvent(event);
        } else if (kpixmapregionselectorwidget_tabletevent_callback != nullptr) {
            QTabletEvent* cbval1 = event;

            kpixmapregionselectorwidget_tabletevent_callback(this, cbval1);
        } else {
            KPixmapRegionSelectorWidget::tabletEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void actionEvent(QActionEvent* event) override {
        if (kpixmapregionselectorwidget_actionevent_isbase) {
            kpixmapregionselectorwidget_actionevent_isbase = false;
            KPixmapRegionSelectorWidget::actionEvent(event);
        } else if (kpixmapregionselectorwidget_actionevent_callback != nullptr) {
            QActionEvent* cbval1 = event;

            kpixmapregionselectorwidget_actionevent_callback(this, cbval1);
        } else {
            KPixmapRegionSelectorWidget::actionEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragEnterEvent(QDragEnterEvent* event) override {
        if (kpixmapregionselectorwidget_dragenterevent_isbase) {
            kpixmapregionselectorwidget_dragenterevent_isbase = false;
            KPixmapRegionSelectorWidget::dragEnterEvent(event);
        } else if (kpixmapregionselectorwidget_dragenterevent_callback != nullptr) {
            QDragEnterEvent* cbval1 = event;

            kpixmapregionselectorwidget_dragenterevent_callback(this, cbval1);
        } else {
            KPixmapRegionSelectorWidget::dragEnterEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragMoveEvent(QDragMoveEvent* event) override {
        if (kpixmapregionselectorwidget_dragmoveevent_isbase) {
            kpixmapregionselectorwidget_dragmoveevent_isbase = false;
            KPixmapRegionSelectorWidget::dragMoveEvent(event);
        } else if (kpixmapregionselectorwidget_dragmoveevent_callback != nullptr) {
            QDragMoveEvent* cbval1 = event;

            kpixmapregionselectorwidget_dragmoveevent_callback(this, cbval1);
        } else {
            KPixmapRegionSelectorWidget::dragMoveEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragLeaveEvent(QDragLeaveEvent* event) override {
        if (kpixmapregionselectorwidget_dragleaveevent_isbase) {
            kpixmapregionselectorwidget_dragleaveevent_isbase = false;
            KPixmapRegionSelectorWidget::dragLeaveEvent(event);
        } else if (kpixmapregionselectorwidget_dragleaveevent_callback != nullptr) {
            QDragLeaveEvent* cbval1 = event;

            kpixmapregionselectorwidget_dragleaveevent_callback(this, cbval1);
        } else {
            KPixmapRegionSelectorWidget::dragLeaveEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void dropEvent(QDropEvent* event) override {
        if (kpixmapregionselectorwidget_dropevent_isbase) {
            kpixmapregionselectorwidget_dropevent_isbase = false;
            KPixmapRegionSelectorWidget::dropEvent(event);
        } else if (kpixmapregionselectorwidget_dropevent_callback != nullptr) {
            QDropEvent* cbval1 = event;

            kpixmapregionselectorwidget_dropevent_callback(this, cbval1);
        } else {
            KPixmapRegionSelectorWidget::dropEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void showEvent(QShowEvent* event) override {
        if (kpixmapregionselectorwidget_showevent_isbase) {
            kpixmapregionselectorwidget_showevent_isbase = false;
            KPixmapRegionSelectorWidget::showEvent(event);
        } else if (kpixmapregionselectorwidget_showevent_callback != nullptr) {
            QShowEvent* cbval1 = event;

            kpixmapregionselectorwidget_showevent_callback(this, cbval1);
        } else {
            KPixmapRegionSelectorWidget::showEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void hideEvent(QHideEvent* event) override {
        if (kpixmapregionselectorwidget_hideevent_isbase) {
            kpixmapregionselectorwidget_hideevent_isbase = false;
            KPixmapRegionSelectorWidget::hideEvent(event);
        } else if (kpixmapregionselectorwidget_hideevent_callback != nullptr) {
            QHideEvent* cbval1 = event;

            kpixmapregionselectorwidget_hideevent_callback(this, cbval1);
        } else {
            KPixmapRegionSelectorWidget::hideEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool nativeEvent(const QByteArray& eventType, void* message, qintptr* result) override {
        if (kpixmapregionselectorwidget_nativeevent_isbase) {
            kpixmapregionselectorwidget_nativeevent_isbase = false;
            return KPixmapRegionSelectorWidget::nativeEvent(eventType, message, result);
        } else if (kpixmapregionselectorwidget_nativeevent_callback != nullptr) {
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

            bool callback_ret = kpixmapregionselectorwidget_nativeevent_callback(this, cbval1, cbval2, cbval3);
            return callback_ret;
        } else {
            return KPixmapRegionSelectorWidget::nativeEvent(eventType, message, result);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void changeEvent(QEvent* param1) override {
        if (kpixmapregionselectorwidget_changeevent_isbase) {
            kpixmapregionselectorwidget_changeevent_isbase = false;
            KPixmapRegionSelectorWidget::changeEvent(param1);
        } else if (kpixmapregionselectorwidget_changeevent_callback != nullptr) {
            QEvent* cbval1 = param1;

            kpixmapregionselectorwidget_changeevent_callback(this, cbval1);
        } else {
            KPixmapRegionSelectorWidget::changeEvent(param1);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual int metric(QPaintDevice::PaintDeviceMetric param1) const override {
        if (kpixmapregionselectorwidget_metric_isbase) {
            kpixmapregionselectorwidget_metric_isbase = false;
            return KPixmapRegionSelectorWidget::metric(param1);
        } else if (kpixmapregionselectorwidget_metric_callback != nullptr) {
            int cbval1 = static_cast<int>(param1);

            int callback_ret = kpixmapregionselectorwidget_metric_callback(this, cbval1);
            return static_cast<int>(callback_ret);
        } else {
            return KPixmapRegionSelectorWidget::metric(param1);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void initPainter(QPainter* painter) const override {
        if (kpixmapregionselectorwidget_initpainter_isbase) {
            kpixmapregionselectorwidget_initpainter_isbase = false;
            KPixmapRegionSelectorWidget::initPainter(painter);
        } else if (kpixmapregionselectorwidget_initpainter_callback != nullptr) {
            QPainter* cbval1 = painter;

            kpixmapregionselectorwidget_initpainter_callback(this, cbval1);
        } else {
            KPixmapRegionSelectorWidget::initPainter(painter);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QPaintDevice* redirected(QPoint* offset) const override {
        if (kpixmapregionselectorwidget_redirected_isbase) {
            kpixmapregionselectorwidget_redirected_isbase = false;
            return KPixmapRegionSelectorWidget::redirected(offset);
        } else if (kpixmapregionselectorwidget_redirected_callback != nullptr) {
            QPoint* cbval1 = offset;

            QPaintDevice* callback_ret = kpixmapregionselectorwidget_redirected_callback(this, cbval1);
            return callback_ret;
        } else {
            return KPixmapRegionSelectorWidget::redirected(offset);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QPainter* sharedPainter() const override {
        if (kpixmapregionselectorwidget_sharedpainter_isbase) {
            kpixmapregionselectorwidget_sharedpainter_isbase = false;
            return KPixmapRegionSelectorWidget::sharedPainter();
        } else if (kpixmapregionselectorwidget_sharedpainter_callback != nullptr) {
            QPainter* callback_ret = kpixmapregionselectorwidget_sharedpainter_callback();
            return callback_ret;
        } else {
            return KPixmapRegionSelectorWidget::sharedPainter();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void inputMethodEvent(QInputMethodEvent* param1) override {
        if (kpixmapregionselectorwidget_inputmethodevent_isbase) {
            kpixmapregionselectorwidget_inputmethodevent_isbase = false;
            KPixmapRegionSelectorWidget::inputMethodEvent(param1);
        } else if (kpixmapregionselectorwidget_inputmethodevent_callback != nullptr) {
            QInputMethodEvent* cbval1 = param1;

            kpixmapregionselectorwidget_inputmethodevent_callback(this, cbval1);
        } else {
            KPixmapRegionSelectorWidget::inputMethodEvent(param1);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QVariant inputMethodQuery(Qt::InputMethodQuery param1) const override {
        if (kpixmapregionselectorwidget_inputmethodquery_isbase) {
            kpixmapregionselectorwidget_inputmethodquery_isbase = false;
            return KPixmapRegionSelectorWidget::inputMethodQuery(param1);
        } else if (kpixmapregionselectorwidget_inputmethodquery_callback != nullptr) {
            int cbval1 = static_cast<int>(param1);

            QVariant* callback_ret = kpixmapregionselectorwidget_inputmethodquery_callback(this, cbval1);
            return *callback_ret;
        } else {
            return KPixmapRegionSelectorWidget::inputMethodQuery(param1);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool focusNextPrevChild(bool next) override {
        if (kpixmapregionselectorwidget_focusnextprevchild_isbase) {
            kpixmapregionselectorwidget_focusnextprevchild_isbase = false;
            return KPixmapRegionSelectorWidget::focusNextPrevChild(next);
        } else if (kpixmapregionselectorwidget_focusnextprevchild_callback != nullptr) {
            bool cbval1 = next;

            bool callback_ret = kpixmapregionselectorwidget_focusnextprevchild_callback(this, cbval1);
            return callback_ret;
        } else {
            return KPixmapRegionSelectorWidget::focusNextPrevChild(next);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (kpixmapregionselectorwidget_timerevent_isbase) {
            kpixmapregionselectorwidget_timerevent_isbase = false;
            KPixmapRegionSelectorWidget::timerEvent(event);
        } else if (kpixmapregionselectorwidget_timerevent_callback != nullptr) {
            QTimerEvent* cbval1 = event;

            kpixmapregionselectorwidget_timerevent_callback(this, cbval1);
        } else {
            KPixmapRegionSelectorWidget::timerEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (kpixmapregionselectorwidget_childevent_isbase) {
            kpixmapregionselectorwidget_childevent_isbase = false;
            KPixmapRegionSelectorWidget::childEvent(event);
        } else if (kpixmapregionselectorwidget_childevent_callback != nullptr) {
            QChildEvent* cbval1 = event;

            kpixmapregionselectorwidget_childevent_callback(this, cbval1);
        } else {
            KPixmapRegionSelectorWidget::childEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (kpixmapregionselectorwidget_customevent_isbase) {
            kpixmapregionselectorwidget_customevent_isbase = false;
            KPixmapRegionSelectorWidget::customEvent(event);
        } else if (kpixmapregionselectorwidget_customevent_callback != nullptr) {
            QEvent* cbval1 = event;

            kpixmapregionselectorwidget_customevent_callback(this, cbval1);
        } else {
            KPixmapRegionSelectorWidget::customEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (kpixmapregionselectorwidget_connectnotify_isbase) {
            kpixmapregionselectorwidget_connectnotify_isbase = false;
            KPixmapRegionSelectorWidget::connectNotify(signal);
        } else if (kpixmapregionselectorwidget_connectnotify_callback != nullptr) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            kpixmapregionselectorwidget_connectnotify_callback(this, cbval1);
        } else {
            KPixmapRegionSelectorWidget::connectNotify(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (kpixmapregionselectorwidget_disconnectnotify_isbase) {
            kpixmapregionselectorwidget_disconnectnotify_isbase = false;
            KPixmapRegionSelectorWidget::disconnectNotify(signal);
        } else if (kpixmapregionselectorwidget_disconnectnotify_callback != nullptr) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            kpixmapregionselectorwidget_disconnectnotify_callback(this, cbval1);
        } else {
            KPixmapRegionSelectorWidget::disconnectNotify(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    void updateMicroFocus() {
        if (kpixmapregionselectorwidget_updatemicrofocus_isbase) {
            kpixmapregionselectorwidget_updatemicrofocus_isbase = false;
            KPixmapRegionSelectorWidget::updateMicroFocus();
        } else if (kpixmapregionselectorwidget_updatemicrofocus_callback != nullptr) {
            kpixmapregionselectorwidget_updatemicrofocus_callback();
        } else {
            KPixmapRegionSelectorWidget::updateMicroFocus();
        }
    }

    // Virtual method for C ABI access and custom callback
    void create() {
        if (kpixmapregionselectorwidget_create_isbase) {
            kpixmapregionselectorwidget_create_isbase = false;
            KPixmapRegionSelectorWidget::create();
        } else if (kpixmapregionselectorwidget_create_callback != nullptr) {
            kpixmapregionselectorwidget_create_callback();
        } else {
            KPixmapRegionSelectorWidget::create();
        }
    }

    // Virtual method for C ABI access and custom callback
    void destroy() {
        if (kpixmapregionselectorwidget_destroy_isbase) {
            kpixmapregionselectorwidget_destroy_isbase = false;
            KPixmapRegionSelectorWidget::destroy();
        } else if (kpixmapregionselectorwidget_destroy_callback != nullptr) {
            kpixmapregionselectorwidget_destroy_callback();
        } else {
            KPixmapRegionSelectorWidget::destroy();
        }
    }

    // Virtual method for C ABI access and custom callback
    bool focusNextChild() {
        if (kpixmapregionselectorwidget_focusnextchild_isbase) {
            kpixmapregionselectorwidget_focusnextchild_isbase = false;
            return KPixmapRegionSelectorWidget::focusNextChild();
        } else if (kpixmapregionselectorwidget_focusnextchild_callback != nullptr) {
            bool callback_ret = kpixmapregionselectorwidget_focusnextchild_callback();
            return callback_ret;
        } else {
            return KPixmapRegionSelectorWidget::focusNextChild();
        }
    }

    // Virtual method for C ABI access and custom callback
    bool focusPreviousChild() {
        if (kpixmapregionselectorwidget_focuspreviouschild_isbase) {
            kpixmapregionselectorwidget_focuspreviouschild_isbase = false;
            return KPixmapRegionSelectorWidget::focusPreviousChild();
        } else if (kpixmapregionselectorwidget_focuspreviouschild_callback != nullptr) {
            bool callback_ret = kpixmapregionselectorwidget_focuspreviouschild_callback();
            return callback_ret;
        } else {
            return KPixmapRegionSelectorWidget::focusPreviousChild();
        }
    }

    // Virtual method for C ABI access and custom callback
    QObject* sender() const {
        if (kpixmapregionselectorwidget_sender_isbase) {
            kpixmapregionselectorwidget_sender_isbase = false;
            return KPixmapRegionSelectorWidget::sender();
        } else if (kpixmapregionselectorwidget_sender_callback != nullptr) {
            QObject* callback_ret = kpixmapregionselectorwidget_sender_callback();
            return callback_ret;
        } else {
            return KPixmapRegionSelectorWidget::sender();
        }
    }

    // Virtual method for C ABI access and custom callback
    int senderSignalIndex() const {
        if (kpixmapregionselectorwidget_sendersignalindex_isbase) {
            kpixmapregionselectorwidget_sendersignalindex_isbase = false;
            return KPixmapRegionSelectorWidget::senderSignalIndex();
        } else if (kpixmapregionselectorwidget_sendersignalindex_callback != nullptr) {
            int callback_ret = kpixmapregionselectorwidget_sendersignalindex_callback();
            return static_cast<int>(callback_ret);
        } else {
            return KPixmapRegionSelectorWidget::senderSignalIndex();
        }
    }

    // Virtual method for C ABI access and custom callback
    int receivers(const char* signal) const {
        if (kpixmapregionselectorwidget_receivers_isbase) {
            kpixmapregionselectorwidget_receivers_isbase = false;
            return KPixmapRegionSelectorWidget::receivers(signal);
        } else if (kpixmapregionselectorwidget_receivers_callback != nullptr) {
            const char* cbval1 = (const char*)signal;

            int callback_ret = kpixmapregionselectorwidget_receivers_callback(this, cbval1);
            return static_cast<int>(callback_ret);
        } else {
            return KPixmapRegionSelectorWidget::receivers(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    bool isSignalConnected(const QMetaMethod& signal) const {
        if (kpixmapregionselectorwidget_issignalconnected_isbase) {
            kpixmapregionselectorwidget_issignalconnected_isbase = false;
            return KPixmapRegionSelectorWidget::isSignalConnected(signal);
        } else if (kpixmapregionselectorwidget_issignalconnected_callback != nullptr) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            bool callback_ret = kpixmapregionselectorwidget_issignalconnected_callback(this, cbval1);
            return callback_ret;
        } else {
            return KPixmapRegionSelectorWidget::isSignalConnected(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    double getDecodedMetricF(QPaintDevice::PaintDeviceMetric metricA, QPaintDevice::PaintDeviceMetric metricB) const {
        if (kpixmapregionselectorwidget_getdecodedmetricf_isbase) {
            kpixmapregionselectorwidget_getdecodedmetricf_isbase = false;
            return KPixmapRegionSelectorWidget::getDecodedMetricF(metricA, metricB);
        } else if (kpixmapregionselectorwidget_getdecodedmetricf_callback != nullptr) {
            int cbval1 = static_cast<int>(metricA);
            int cbval2 = static_cast<int>(metricB);

            double callback_ret = kpixmapregionselectorwidget_getdecodedmetricf_callback(this, cbval1, cbval2);
            return static_cast<double>(callback_ret);
        } else {
            return KPixmapRegionSelectorWidget::getDecodedMetricF(metricA, metricB);
        }
    }

    // Friend functions
    friend QMenu* KPixmapRegionSelectorWidget_CreatePopupMenu(KPixmapRegionSelectorWidget* self);
    friend QMenu* KPixmapRegionSelectorWidget_QBaseCreatePopupMenu(KPixmapRegionSelectorWidget* self);
    friend bool KPixmapRegionSelectorWidget_EventFilter(KPixmapRegionSelectorWidget* self, QObject* obj, QEvent* ev);
    friend bool KPixmapRegionSelectorWidget_QBaseEventFilter(KPixmapRegionSelectorWidget* self, QObject* obj, QEvent* ev);
    friend bool KPixmapRegionSelectorWidget_Event(KPixmapRegionSelectorWidget* self, QEvent* event);
    friend bool KPixmapRegionSelectorWidget_QBaseEvent(KPixmapRegionSelectorWidget* self, QEvent* event);
    friend void KPixmapRegionSelectorWidget_MousePressEvent(KPixmapRegionSelectorWidget* self, QMouseEvent* event);
    friend void KPixmapRegionSelectorWidget_QBaseMousePressEvent(KPixmapRegionSelectorWidget* self, QMouseEvent* event);
    friend void KPixmapRegionSelectorWidget_MouseReleaseEvent(KPixmapRegionSelectorWidget* self, QMouseEvent* event);
    friend void KPixmapRegionSelectorWidget_QBaseMouseReleaseEvent(KPixmapRegionSelectorWidget* self, QMouseEvent* event);
    friend void KPixmapRegionSelectorWidget_MouseDoubleClickEvent(KPixmapRegionSelectorWidget* self, QMouseEvent* event);
    friend void KPixmapRegionSelectorWidget_QBaseMouseDoubleClickEvent(KPixmapRegionSelectorWidget* self, QMouseEvent* event);
    friend void KPixmapRegionSelectorWidget_MouseMoveEvent(KPixmapRegionSelectorWidget* self, QMouseEvent* event);
    friend void KPixmapRegionSelectorWidget_QBaseMouseMoveEvent(KPixmapRegionSelectorWidget* self, QMouseEvent* event);
    friend void KPixmapRegionSelectorWidget_WheelEvent(KPixmapRegionSelectorWidget* self, QWheelEvent* event);
    friend void KPixmapRegionSelectorWidget_QBaseWheelEvent(KPixmapRegionSelectorWidget* self, QWheelEvent* event);
    friend void KPixmapRegionSelectorWidget_KeyPressEvent(KPixmapRegionSelectorWidget* self, QKeyEvent* event);
    friend void KPixmapRegionSelectorWidget_QBaseKeyPressEvent(KPixmapRegionSelectorWidget* self, QKeyEvent* event);
    friend void KPixmapRegionSelectorWidget_KeyReleaseEvent(KPixmapRegionSelectorWidget* self, QKeyEvent* event);
    friend void KPixmapRegionSelectorWidget_QBaseKeyReleaseEvent(KPixmapRegionSelectorWidget* self, QKeyEvent* event);
    friend void KPixmapRegionSelectorWidget_FocusInEvent(KPixmapRegionSelectorWidget* self, QFocusEvent* event);
    friend void KPixmapRegionSelectorWidget_QBaseFocusInEvent(KPixmapRegionSelectorWidget* self, QFocusEvent* event);
    friend void KPixmapRegionSelectorWidget_FocusOutEvent(KPixmapRegionSelectorWidget* self, QFocusEvent* event);
    friend void KPixmapRegionSelectorWidget_QBaseFocusOutEvent(KPixmapRegionSelectorWidget* self, QFocusEvent* event);
    friend void KPixmapRegionSelectorWidget_EnterEvent(KPixmapRegionSelectorWidget* self, QEnterEvent* event);
    friend void KPixmapRegionSelectorWidget_QBaseEnterEvent(KPixmapRegionSelectorWidget* self, QEnterEvent* event);
    friend void KPixmapRegionSelectorWidget_LeaveEvent(KPixmapRegionSelectorWidget* self, QEvent* event);
    friend void KPixmapRegionSelectorWidget_QBaseLeaveEvent(KPixmapRegionSelectorWidget* self, QEvent* event);
    friend void KPixmapRegionSelectorWidget_PaintEvent(KPixmapRegionSelectorWidget* self, QPaintEvent* event);
    friend void KPixmapRegionSelectorWidget_QBasePaintEvent(KPixmapRegionSelectorWidget* self, QPaintEvent* event);
    friend void KPixmapRegionSelectorWidget_MoveEvent(KPixmapRegionSelectorWidget* self, QMoveEvent* event);
    friend void KPixmapRegionSelectorWidget_QBaseMoveEvent(KPixmapRegionSelectorWidget* self, QMoveEvent* event);
    friend void KPixmapRegionSelectorWidget_ResizeEvent(KPixmapRegionSelectorWidget* self, QResizeEvent* event);
    friend void KPixmapRegionSelectorWidget_QBaseResizeEvent(KPixmapRegionSelectorWidget* self, QResizeEvent* event);
    friend void KPixmapRegionSelectorWidget_CloseEvent(KPixmapRegionSelectorWidget* self, QCloseEvent* event);
    friend void KPixmapRegionSelectorWidget_QBaseCloseEvent(KPixmapRegionSelectorWidget* self, QCloseEvent* event);
    friend void KPixmapRegionSelectorWidget_ContextMenuEvent(KPixmapRegionSelectorWidget* self, QContextMenuEvent* event);
    friend void KPixmapRegionSelectorWidget_QBaseContextMenuEvent(KPixmapRegionSelectorWidget* self, QContextMenuEvent* event);
    friend void KPixmapRegionSelectorWidget_TabletEvent(KPixmapRegionSelectorWidget* self, QTabletEvent* event);
    friend void KPixmapRegionSelectorWidget_QBaseTabletEvent(KPixmapRegionSelectorWidget* self, QTabletEvent* event);
    friend void KPixmapRegionSelectorWidget_ActionEvent(KPixmapRegionSelectorWidget* self, QActionEvent* event);
    friend void KPixmapRegionSelectorWidget_QBaseActionEvent(KPixmapRegionSelectorWidget* self, QActionEvent* event);
    friend void KPixmapRegionSelectorWidget_DragEnterEvent(KPixmapRegionSelectorWidget* self, QDragEnterEvent* event);
    friend void KPixmapRegionSelectorWidget_QBaseDragEnterEvent(KPixmapRegionSelectorWidget* self, QDragEnterEvent* event);
    friend void KPixmapRegionSelectorWidget_DragMoveEvent(KPixmapRegionSelectorWidget* self, QDragMoveEvent* event);
    friend void KPixmapRegionSelectorWidget_QBaseDragMoveEvent(KPixmapRegionSelectorWidget* self, QDragMoveEvent* event);
    friend void KPixmapRegionSelectorWidget_DragLeaveEvent(KPixmapRegionSelectorWidget* self, QDragLeaveEvent* event);
    friend void KPixmapRegionSelectorWidget_QBaseDragLeaveEvent(KPixmapRegionSelectorWidget* self, QDragLeaveEvent* event);
    friend void KPixmapRegionSelectorWidget_DropEvent(KPixmapRegionSelectorWidget* self, QDropEvent* event);
    friend void KPixmapRegionSelectorWidget_QBaseDropEvent(KPixmapRegionSelectorWidget* self, QDropEvent* event);
    friend void KPixmapRegionSelectorWidget_ShowEvent(KPixmapRegionSelectorWidget* self, QShowEvent* event);
    friend void KPixmapRegionSelectorWidget_QBaseShowEvent(KPixmapRegionSelectorWidget* self, QShowEvent* event);
    friend void KPixmapRegionSelectorWidget_HideEvent(KPixmapRegionSelectorWidget* self, QHideEvent* event);
    friend void KPixmapRegionSelectorWidget_QBaseHideEvent(KPixmapRegionSelectorWidget* self, QHideEvent* event);
    friend bool KPixmapRegionSelectorWidget_NativeEvent(KPixmapRegionSelectorWidget* self, const libqt_string eventType, void* message, intptr_t* result);
    friend bool KPixmapRegionSelectorWidget_QBaseNativeEvent(KPixmapRegionSelectorWidget* self, const libqt_string eventType, void* message, intptr_t* result);
    friend void KPixmapRegionSelectorWidget_ChangeEvent(KPixmapRegionSelectorWidget* self, QEvent* param1);
    friend void KPixmapRegionSelectorWidget_QBaseChangeEvent(KPixmapRegionSelectorWidget* self, QEvent* param1);
    friend int KPixmapRegionSelectorWidget_Metric(const KPixmapRegionSelectorWidget* self, int param1);
    friend int KPixmapRegionSelectorWidget_QBaseMetric(const KPixmapRegionSelectorWidget* self, int param1);
    friend void KPixmapRegionSelectorWidget_InitPainter(const KPixmapRegionSelectorWidget* self, QPainter* painter);
    friend void KPixmapRegionSelectorWidget_QBaseInitPainter(const KPixmapRegionSelectorWidget* self, QPainter* painter);
    friend QPaintDevice* KPixmapRegionSelectorWidget_Redirected(const KPixmapRegionSelectorWidget* self, QPoint* offset);
    friend QPaintDevice* KPixmapRegionSelectorWidget_QBaseRedirected(const KPixmapRegionSelectorWidget* self, QPoint* offset);
    friend QPainter* KPixmapRegionSelectorWidget_SharedPainter(const KPixmapRegionSelectorWidget* self);
    friend QPainter* KPixmapRegionSelectorWidget_QBaseSharedPainter(const KPixmapRegionSelectorWidget* self);
    friend void KPixmapRegionSelectorWidget_InputMethodEvent(KPixmapRegionSelectorWidget* self, QInputMethodEvent* param1);
    friend void KPixmapRegionSelectorWidget_QBaseInputMethodEvent(KPixmapRegionSelectorWidget* self, QInputMethodEvent* param1);
    friend bool KPixmapRegionSelectorWidget_FocusNextPrevChild(KPixmapRegionSelectorWidget* self, bool next);
    friend bool KPixmapRegionSelectorWidget_QBaseFocusNextPrevChild(KPixmapRegionSelectorWidget* self, bool next);
    friend void KPixmapRegionSelectorWidget_TimerEvent(KPixmapRegionSelectorWidget* self, QTimerEvent* event);
    friend void KPixmapRegionSelectorWidget_QBaseTimerEvent(KPixmapRegionSelectorWidget* self, QTimerEvent* event);
    friend void KPixmapRegionSelectorWidget_ChildEvent(KPixmapRegionSelectorWidget* self, QChildEvent* event);
    friend void KPixmapRegionSelectorWidget_QBaseChildEvent(KPixmapRegionSelectorWidget* self, QChildEvent* event);
    friend void KPixmapRegionSelectorWidget_CustomEvent(KPixmapRegionSelectorWidget* self, QEvent* event);
    friend void KPixmapRegionSelectorWidget_QBaseCustomEvent(KPixmapRegionSelectorWidget* self, QEvent* event);
    friend void KPixmapRegionSelectorWidget_ConnectNotify(KPixmapRegionSelectorWidget* self, const QMetaMethod* signal);
    friend void KPixmapRegionSelectorWidget_QBaseConnectNotify(KPixmapRegionSelectorWidget* self, const QMetaMethod* signal);
    friend void KPixmapRegionSelectorWidget_DisconnectNotify(KPixmapRegionSelectorWidget* self, const QMetaMethod* signal);
    friend void KPixmapRegionSelectorWidget_QBaseDisconnectNotify(KPixmapRegionSelectorWidget* self, const QMetaMethod* signal);
    friend void KPixmapRegionSelectorWidget_UpdateMicroFocus(KPixmapRegionSelectorWidget* self);
    friend void KPixmapRegionSelectorWidget_QBaseUpdateMicroFocus(KPixmapRegionSelectorWidget* self);
    friend void KPixmapRegionSelectorWidget_Create(KPixmapRegionSelectorWidget* self);
    friend void KPixmapRegionSelectorWidget_QBaseCreate(KPixmapRegionSelectorWidget* self);
    friend void KPixmapRegionSelectorWidget_Destroy(KPixmapRegionSelectorWidget* self);
    friend void KPixmapRegionSelectorWidget_QBaseDestroy(KPixmapRegionSelectorWidget* self);
    friend bool KPixmapRegionSelectorWidget_FocusNextChild(KPixmapRegionSelectorWidget* self);
    friend bool KPixmapRegionSelectorWidget_QBaseFocusNextChild(KPixmapRegionSelectorWidget* self);
    friend bool KPixmapRegionSelectorWidget_FocusPreviousChild(KPixmapRegionSelectorWidget* self);
    friend bool KPixmapRegionSelectorWidget_QBaseFocusPreviousChild(KPixmapRegionSelectorWidget* self);
    friend QObject* KPixmapRegionSelectorWidget_Sender(const KPixmapRegionSelectorWidget* self);
    friend QObject* KPixmapRegionSelectorWidget_QBaseSender(const KPixmapRegionSelectorWidget* self);
    friend int KPixmapRegionSelectorWidget_SenderSignalIndex(const KPixmapRegionSelectorWidget* self);
    friend int KPixmapRegionSelectorWidget_QBaseSenderSignalIndex(const KPixmapRegionSelectorWidget* self);
    friend int KPixmapRegionSelectorWidget_Receivers(const KPixmapRegionSelectorWidget* self, const char* signal);
    friend int KPixmapRegionSelectorWidget_QBaseReceivers(const KPixmapRegionSelectorWidget* self, const char* signal);
    friend bool KPixmapRegionSelectorWidget_IsSignalConnected(const KPixmapRegionSelectorWidget* self, const QMetaMethod* signal);
    friend bool KPixmapRegionSelectorWidget_QBaseIsSignalConnected(const KPixmapRegionSelectorWidget* self, const QMetaMethod* signal);
    friend double KPixmapRegionSelectorWidget_GetDecodedMetricF(const KPixmapRegionSelectorWidget* self, int metricA, int metricB);
    friend double KPixmapRegionSelectorWidget_QBaseGetDecodedMetricF(const KPixmapRegionSelectorWidget* self, int metricA, int metricB);
};

#endif
