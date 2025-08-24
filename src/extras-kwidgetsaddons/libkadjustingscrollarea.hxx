#pragma once
#ifndef SRC_EXTRAS_KWIDGETSADDONSC_LIBVIRTUALKADJUSTINGSCROLLAREA_H
#define SRC_EXTRAS_KWIDGETSADDONSC_LIBVIRTUALKADJUSTINGSCROLLAREA_H

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

// This class is a subclass of KAdjustingScrollArea so that we can call protected methods
class VirtualKAdjustingScrollArea final : public KAdjustingScrollArea {

  public:
    // Virtual class boolean flag
    bool isVirtualKAdjustingScrollArea = true;

    // Virtual class public types (including callbacks)
    using KAdjustingScrollArea_Metacall_Callback = int (*)(KAdjustingScrollArea*, int, int, void**);
    using KAdjustingScrollArea_MinimumSizeHint_Callback = QSize* (*)();
    using KAdjustingScrollArea_SizeHint_Callback = QSize* (*)();
    using KAdjustingScrollArea_Event_Callback = bool (*)(KAdjustingScrollArea*, QEvent*);
    using KAdjustingScrollArea_FocusNextPrevChild_Callback = bool (*)(KAdjustingScrollArea*, bool);
    using KAdjustingScrollArea_ResizeEvent_Callback = void (*)(KAdjustingScrollArea*, QResizeEvent*);
    using KAdjustingScrollArea_ScrollContentsBy_Callback = void (*)(KAdjustingScrollArea*, int, int);
    using KAdjustingScrollArea_ViewportSizeHint_Callback = QSize* (*)();
    using KAdjustingScrollArea_SetupViewport_Callback = void (*)(KAdjustingScrollArea*, QWidget*);
    using KAdjustingScrollArea_ViewportEvent_Callback = bool (*)(KAdjustingScrollArea*, QEvent*);
    using KAdjustingScrollArea_PaintEvent_Callback = void (*)(KAdjustingScrollArea*, QPaintEvent*);
    using KAdjustingScrollArea_MousePressEvent_Callback = void (*)(KAdjustingScrollArea*, QMouseEvent*);
    using KAdjustingScrollArea_MouseReleaseEvent_Callback = void (*)(KAdjustingScrollArea*, QMouseEvent*);
    using KAdjustingScrollArea_MouseDoubleClickEvent_Callback = void (*)(KAdjustingScrollArea*, QMouseEvent*);
    using KAdjustingScrollArea_MouseMoveEvent_Callback = void (*)(KAdjustingScrollArea*, QMouseEvent*);
    using KAdjustingScrollArea_WheelEvent_Callback = void (*)(KAdjustingScrollArea*, QWheelEvent*);
    using KAdjustingScrollArea_ContextMenuEvent_Callback = void (*)(KAdjustingScrollArea*, QContextMenuEvent*);
    using KAdjustingScrollArea_DragEnterEvent_Callback = void (*)(KAdjustingScrollArea*, QDragEnterEvent*);
    using KAdjustingScrollArea_DragMoveEvent_Callback = void (*)(KAdjustingScrollArea*, QDragMoveEvent*);
    using KAdjustingScrollArea_DragLeaveEvent_Callback = void (*)(KAdjustingScrollArea*, QDragLeaveEvent*);
    using KAdjustingScrollArea_DropEvent_Callback = void (*)(KAdjustingScrollArea*, QDropEvent*);
    using KAdjustingScrollArea_KeyPressEvent_Callback = void (*)(KAdjustingScrollArea*, QKeyEvent*);
    using KAdjustingScrollArea_ChangeEvent_Callback = void (*)(KAdjustingScrollArea*, QEvent*);
    using KAdjustingScrollArea_InitStyleOption_Callback = void (*)(const KAdjustingScrollArea*, QStyleOptionFrame*);
    using KAdjustingScrollArea_DevType_Callback = int (*)();
    using KAdjustingScrollArea_SetVisible_Callback = void (*)(KAdjustingScrollArea*, bool);
    using KAdjustingScrollArea_HeightForWidth_Callback = int (*)(const KAdjustingScrollArea*, int);
    using KAdjustingScrollArea_HasHeightForWidth_Callback = bool (*)();
    using KAdjustingScrollArea_PaintEngine_Callback = QPaintEngine* (*)();
    using KAdjustingScrollArea_KeyReleaseEvent_Callback = void (*)(KAdjustingScrollArea*, QKeyEvent*);
    using KAdjustingScrollArea_FocusInEvent_Callback = void (*)(KAdjustingScrollArea*, QFocusEvent*);
    using KAdjustingScrollArea_FocusOutEvent_Callback = void (*)(KAdjustingScrollArea*, QFocusEvent*);
    using KAdjustingScrollArea_EnterEvent_Callback = void (*)(KAdjustingScrollArea*, QEnterEvent*);
    using KAdjustingScrollArea_LeaveEvent_Callback = void (*)(KAdjustingScrollArea*, QEvent*);
    using KAdjustingScrollArea_MoveEvent_Callback = void (*)(KAdjustingScrollArea*, QMoveEvent*);
    using KAdjustingScrollArea_CloseEvent_Callback = void (*)(KAdjustingScrollArea*, QCloseEvent*);
    using KAdjustingScrollArea_TabletEvent_Callback = void (*)(KAdjustingScrollArea*, QTabletEvent*);
    using KAdjustingScrollArea_ActionEvent_Callback = void (*)(KAdjustingScrollArea*, QActionEvent*);
    using KAdjustingScrollArea_ShowEvent_Callback = void (*)(KAdjustingScrollArea*, QShowEvent*);
    using KAdjustingScrollArea_HideEvent_Callback = void (*)(KAdjustingScrollArea*, QHideEvent*);
    using KAdjustingScrollArea_NativeEvent_Callback = bool (*)(KAdjustingScrollArea*, libqt_string, void*, intptr_t*);
    using KAdjustingScrollArea_Metric_Callback = int (*)(const KAdjustingScrollArea*, int);
    using KAdjustingScrollArea_InitPainter_Callback = void (*)(const KAdjustingScrollArea*, QPainter*);
    using KAdjustingScrollArea_Redirected_Callback = QPaintDevice* (*)(const KAdjustingScrollArea*, QPoint*);
    using KAdjustingScrollArea_SharedPainter_Callback = QPainter* (*)();
    using KAdjustingScrollArea_InputMethodEvent_Callback = void (*)(KAdjustingScrollArea*, QInputMethodEvent*);
    using KAdjustingScrollArea_InputMethodQuery_Callback = QVariant* (*)(const KAdjustingScrollArea*, int);
    using KAdjustingScrollArea_TimerEvent_Callback = void (*)(KAdjustingScrollArea*, QTimerEvent*);
    using KAdjustingScrollArea_ChildEvent_Callback = void (*)(KAdjustingScrollArea*, QChildEvent*);
    using KAdjustingScrollArea_CustomEvent_Callback = void (*)(KAdjustingScrollArea*, QEvent*);
    using KAdjustingScrollArea_ConnectNotify_Callback = void (*)(KAdjustingScrollArea*, QMetaMethod*);
    using KAdjustingScrollArea_DisconnectNotify_Callback = void (*)(KAdjustingScrollArea*, QMetaMethod*);
    using KAdjustingScrollArea_SetViewportMargins_Callback = void (*)(KAdjustingScrollArea*, int, int, int, int);
    using KAdjustingScrollArea_ViewportMargins_Callback = QMargins* (*)();
    using KAdjustingScrollArea_DrawFrame_Callback = void (*)(KAdjustingScrollArea*, QPainter*);
    using KAdjustingScrollArea_UpdateMicroFocus_Callback = void (*)();
    using KAdjustingScrollArea_Create_Callback = void (*)();
    using KAdjustingScrollArea_Destroy_Callback = void (*)();
    using KAdjustingScrollArea_FocusNextChild_Callback = bool (*)();
    using KAdjustingScrollArea_FocusPreviousChild_Callback = bool (*)();
    using KAdjustingScrollArea_Sender_Callback = QObject* (*)();
    using KAdjustingScrollArea_SenderSignalIndex_Callback = int (*)();
    using KAdjustingScrollArea_Receivers_Callback = int (*)(const KAdjustingScrollArea*, const char*);
    using KAdjustingScrollArea_IsSignalConnected_Callback = bool (*)(const KAdjustingScrollArea*, QMetaMethod*);
    using KAdjustingScrollArea_GetDecodedMetricF_Callback = double (*)(const KAdjustingScrollArea*, int, int);

  protected:
    // Instance callback storage
    KAdjustingScrollArea_Metacall_Callback kadjustingscrollarea_metacall_callback = nullptr;
    KAdjustingScrollArea_MinimumSizeHint_Callback kadjustingscrollarea_minimumsizehint_callback = nullptr;
    KAdjustingScrollArea_SizeHint_Callback kadjustingscrollarea_sizehint_callback = nullptr;
    KAdjustingScrollArea_Event_Callback kadjustingscrollarea_event_callback = nullptr;
    KAdjustingScrollArea_FocusNextPrevChild_Callback kadjustingscrollarea_focusnextprevchild_callback = nullptr;
    KAdjustingScrollArea_ResizeEvent_Callback kadjustingscrollarea_resizeevent_callback = nullptr;
    KAdjustingScrollArea_ScrollContentsBy_Callback kadjustingscrollarea_scrollcontentsby_callback = nullptr;
    KAdjustingScrollArea_ViewportSizeHint_Callback kadjustingscrollarea_viewportsizehint_callback = nullptr;
    KAdjustingScrollArea_SetupViewport_Callback kadjustingscrollarea_setupviewport_callback = nullptr;
    KAdjustingScrollArea_ViewportEvent_Callback kadjustingscrollarea_viewportevent_callback = nullptr;
    KAdjustingScrollArea_PaintEvent_Callback kadjustingscrollarea_paintevent_callback = nullptr;
    KAdjustingScrollArea_MousePressEvent_Callback kadjustingscrollarea_mousepressevent_callback = nullptr;
    KAdjustingScrollArea_MouseReleaseEvent_Callback kadjustingscrollarea_mousereleaseevent_callback = nullptr;
    KAdjustingScrollArea_MouseDoubleClickEvent_Callback kadjustingscrollarea_mousedoubleclickevent_callback = nullptr;
    KAdjustingScrollArea_MouseMoveEvent_Callback kadjustingscrollarea_mousemoveevent_callback = nullptr;
    KAdjustingScrollArea_WheelEvent_Callback kadjustingscrollarea_wheelevent_callback = nullptr;
    KAdjustingScrollArea_ContextMenuEvent_Callback kadjustingscrollarea_contextmenuevent_callback = nullptr;
    KAdjustingScrollArea_DragEnterEvent_Callback kadjustingscrollarea_dragenterevent_callback = nullptr;
    KAdjustingScrollArea_DragMoveEvent_Callback kadjustingscrollarea_dragmoveevent_callback = nullptr;
    KAdjustingScrollArea_DragLeaveEvent_Callback kadjustingscrollarea_dragleaveevent_callback = nullptr;
    KAdjustingScrollArea_DropEvent_Callback kadjustingscrollarea_dropevent_callback = nullptr;
    KAdjustingScrollArea_KeyPressEvent_Callback kadjustingscrollarea_keypressevent_callback = nullptr;
    KAdjustingScrollArea_ChangeEvent_Callback kadjustingscrollarea_changeevent_callback = nullptr;
    KAdjustingScrollArea_InitStyleOption_Callback kadjustingscrollarea_initstyleoption_callback = nullptr;
    KAdjustingScrollArea_DevType_Callback kadjustingscrollarea_devtype_callback = nullptr;
    KAdjustingScrollArea_SetVisible_Callback kadjustingscrollarea_setvisible_callback = nullptr;
    KAdjustingScrollArea_HeightForWidth_Callback kadjustingscrollarea_heightforwidth_callback = nullptr;
    KAdjustingScrollArea_HasHeightForWidth_Callback kadjustingscrollarea_hasheightforwidth_callback = nullptr;
    KAdjustingScrollArea_PaintEngine_Callback kadjustingscrollarea_paintengine_callback = nullptr;
    KAdjustingScrollArea_KeyReleaseEvent_Callback kadjustingscrollarea_keyreleaseevent_callback = nullptr;
    KAdjustingScrollArea_FocusInEvent_Callback kadjustingscrollarea_focusinevent_callback = nullptr;
    KAdjustingScrollArea_FocusOutEvent_Callback kadjustingscrollarea_focusoutevent_callback = nullptr;
    KAdjustingScrollArea_EnterEvent_Callback kadjustingscrollarea_enterevent_callback = nullptr;
    KAdjustingScrollArea_LeaveEvent_Callback kadjustingscrollarea_leaveevent_callback = nullptr;
    KAdjustingScrollArea_MoveEvent_Callback kadjustingscrollarea_moveevent_callback = nullptr;
    KAdjustingScrollArea_CloseEvent_Callback kadjustingscrollarea_closeevent_callback = nullptr;
    KAdjustingScrollArea_TabletEvent_Callback kadjustingscrollarea_tabletevent_callback = nullptr;
    KAdjustingScrollArea_ActionEvent_Callback kadjustingscrollarea_actionevent_callback = nullptr;
    KAdjustingScrollArea_ShowEvent_Callback kadjustingscrollarea_showevent_callback = nullptr;
    KAdjustingScrollArea_HideEvent_Callback kadjustingscrollarea_hideevent_callback = nullptr;
    KAdjustingScrollArea_NativeEvent_Callback kadjustingscrollarea_nativeevent_callback = nullptr;
    KAdjustingScrollArea_Metric_Callback kadjustingscrollarea_metric_callback = nullptr;
    KAdjustingScrollArea_InitPainter_Callback kadjustingscrollarea_initpainter_callback = nullptr;
    KAdjustingScrollArea_Redirected_Callback kadjustingscrollarea_redirected_callback = nullptr;
    KAdjustingScrollArea_SharedPainter_Callback kadjustingscrollarea_sharedpainter_callback = nullptr;
    KAdjustingScrollArea_InputMethodEvent_Callback kadjustingscrollarea_inputmethodevent_callback = nullptr;
    KAdjustingScrollArea_InputMethodQuery_Callback kadjustingscrollarea_inputmethodquery_callback = nullptr;
    KAdjustingScrollArea_TimerEvent_Callback kadjustingscrollarea_timerevent_callback = nullptr;
    KAdjustingScrollArea_ChildEvent_Callback kadjustingscrollarea_childevent_callback = nullptr;
    KAdjustingScrollArea_CustomEvent_Callback kadjustingscrollarea_customevent_callback = nullptr;
    KAdjustingScrollArea_ConnectNotify_Callback kadjustingscrollarea_connectnotify_callback = nullptr;
    KAdjustingScrollArea_DisconnectNotify_Callback kadjustingscrollarea_disconnectnotify_callback = nullptr;
    KAdjustingScrollArea_SetViewportMargins_Callback kadjustingscrollarea_setviewportmargins_callback = nullptr;
    KAdjustingScrollArea_ViewportMargins_Callback kadjustingscrollarea_viewportmargins_callback = nullptr;
    KAdjustingScrollArea_DrawFrame_Callback kadjustingscrollarea_drawframe_callback = nullptr;
    KAdjustingScrollArea_UpdateMicroFocus_Callback kadjustingscrollarea_updatemicrofocus_callback = nullptr;
    KAdjustingScrollArea_Create_Callback kadjustingscrollarea_create_callback = nullptr;
    KAdjustingScrollArea_Destroy_Callback kadjustingscrollarea_destroy_callback = nullptr;
    KAdjustingScrollArea_FocusNextChild_Callback kadjustingscrollarea_focusnextchild_callback = nullptr;
    KAdjustingScrollArea_FocusPreviousChild_Callback kadjustingscrollarea_focuspreviouschild_callback = nullptr;
    KAdjustingScrollArea_Sender_Callback kadjustingscrollarea_sender_callback = nullptr;
    KAdjustingScrollArea_SenderSignalIndex_Callback kadjustingscrollarea_sendersignalindex_callback = nullptr;
    KAdjustingScrollArea_Receivers_Callback kadjustingscrollarea_receivers_callback = nullptr;
    KAdjustingScrollArea_IsSignalConnected_Callback kadjustingscrollarea_issignalconnected_callback = nullptr;
    KAdjustingScrollArea_GetDecodedMetricF_Callback kadjustingscrollarea_getdecodedmetricf_callback = nullptr;

    // Instance base flags
    mutable bool kadjustingscrollarea_metacall_isbase = false;
    mutable bool kadjustingscrollarea_minimumsizehint_isbase = false;
    mutable bool kadjustingscrollarea_sizehint_isbase = false;
    mutable bool kadjustingscrollarea_event_isbase = false;
    mutable bool kadjustingscrollarea_focusnextprevchild_isbase = false;
    mutable bool kadjustingscrollarea_resizeevent_isbase = false;
    mutable bool kadjustingscrollarea_scrollcontentsby_isbase = false;
    mutable bool kadjustingscrollarea_viewportsizehint_isbase = false;
    mutable bool kadjustingscrollarea_setupviewport_isbase = false;
    mutable bool kadjustingscrollarea_viewportevent_isbase = false;
    mutable bool kadjustingscrollarea_paintevent_isbase = false;
    mutable bool kadjustingscrollarea_mousepressevent_isbase = false;
    mutable bool kadjustingscrollarea_mousereleaseevent_isbase = false;
    mutable bool kadjustingscrollarea_mousedoubleclickevent_isbase = false;
    mutable bool kadjustingscrollarea_mousemoveevent_isbase = false;
    mutable bool kadjustingscrollarea_wheelevent_isbase = false;
    mutable bool kadjustingscrollarea_contextmenuevent_isbase = false;
    mutable bool kadjustingscrollarea_dragenterevent_isbase = false;
    mutable bool kadjustingscrollarea_dragmoveevent_isbase = false;
    mutable bool kadjustingscrollarea_dragleaveevent_isbase = false;
    mutable bool kadjustingscrollarea_dropevent_isbase = false;
    mutable bool kadjustingscrollarea_keypressevent_isbase = false;
    mutable bool kadjustingscrollarea_changeevent_isbase = false;
    mutable bool kadjustingscrollarea_initstyleoption_isbase = false;
    mutable bool kadjustingscrollarea_devtype_isbase = false;
    mutable bool kadjustingscrollarea_setvisible_isbase = false;
    mutable bool kadjustingscrollarea_heightforwidth_isbase = false;
    mutable bool kadjustingscrollarea_hasheightforwidth_isbase = false;
    mutable bool kadjustingscrollarea_paintengine_isbase = false;
    mutable bool kadjustingscrollarea_keyreleaseevent_isbase = false;
    mutable bool kadjustingscrollarea_focusinevent_isbase = false;
    mutable bool kadjustingscrollarea_focusoutevent_isbase = false;
    mutable bool kadjustingscrollarea_enterevent_isbase = false;
    mutable bool kadjustingscrollarea_leaveevent_isbase = false;
    mutable bool kadjustingscrollarea_moveevent_isbase = false;
    mutable bool kadjustingscrollarea_closeevent_isbase = false;
    mutable bool kadjustingscrollarea_tabletevent_isbase = false;
    mutable bool kadjustingscrollarea_actionevent_isbase = false;
    mutable bool kadjustingscrollarea_showevent_isbase = false;
    mutable bool kadjustingscrollarea_hideevent_isbase = false;
    mutable bool kadjustingscrollarea_nativeevent_isbase = false;
    mutable bool kadjustingscrollarea_metric_isbase = false;
    mutable bool kadjustingscrollarea_initpainter_isbase = false;
    mutable bool kadjustingscrollarea_redirected_isbase = false;
    mutable bool kadjustingscrollarea_sharedpainter_isbase = false;
    mutable bool kadjustingscrollarea_inputmethodevent_isbase = false;
    mutable bool kadjustingscrollarea_inputmethodquery_isbase = false;
    mutable bool kadjustingscrollarea_timerevent_isbase = false;
    mutable bool kadjustingscrollarea_childevent_isbase = false;
    mutable bool kadjustingscrollarea_customevent_isbase = false;
    mutable bool kadjustingscrollarea_connectnotify_isbase = false;
    mutable bool kadjustingscrollarea_disconnectnotify_isbase = false;
    mutable bool kadjustingscrollarea_setviewportmargins_isbase = false;
    mutable bool kadjustingscrollarea_viewportmargins_isbase = false;
    mutable bool kadjustingscrollarea_drawframe_isbase = false;
    mutable bool kadjustingscrollarea_updatemicrofocus_isbase = false;
    mutable bool kadjustingscrollarea_create_isbase = false;
    mutable bool kadjustingscrollarea_destroy_isbase = false;
    mutable bool kadjustingscrollarea_focusnextchild_isbase = false;
    mutable bool kadjustingscrollarea_focuspreviouschild_isbase = false;
    mutable bool kadjustingscrollarea_sender_isbase = false;
    mutable bool kadjustingscrollarea_sendersignalindex_isbase = false;
    mutable bool kadjustingscrollarea_receivers_isbase = false;
    mutable bool kadjustingscrollarea_issignalconnected_isbase = false;
    mutable bool kadjustingscrollarea_getdecodedmetricf_isbase = false;

  public:
    VirtualKAdjustingScrollArea(QWidget* parent) : KAdjustingScrollArea(parent) {};
    VirtualKAdjustingScrollArea() : KAdjustingScrollArea() {};

    ~VirtualKAdjustingScrollArea() {
        kadjustingscrollarea_metacall_callback = nullptr;
        kadjustingscrollarea_minimumsizehint_callback = nullptr;
        kadjustingscrollarea_sizehint_callback = nullptr;
        kadjustingscrollarea_event_callback = nullptr;
        kadjustingscrollarea_focusnextprevchild_callback = nullptr;
        kadjustingscrollarea_resizeevent_callback = nullptr;
        kadjustingscrollarea_scrollcontentsby_callback = nullptr;
        kadjustingscrollarea_viewportsizehint_callback = nullptr;
        kadjustingscrollarea_setupviewport_callback = nullptr;
        kadjustingscrollarea_viewportevent_callback = nullptr;
        kadjustingscrollarea_paintevent_callback = nullptr;
        kadjustingscrollarea_mousepressevent_callback = nullptr;
        kadjustingscrollarea_mousereleaseevent_callback = nullptr;
        kadjustingscrollarea_mousedoubleclickevent_callback = nullptr;
        kadjustingscrollarea_mousemoveevent_callback = nullptr;
        kadjustingscrollarea_wheelevent_callback = nullptr;
        kadjustingscrollarea_contextmenuevent_callback = nullptr;
        kadjustingscrollarea_dragenterevent_callback = nullptr;
        kadjustingscrollarea_dragmoveevent_callback = nullptr;
        kadjustingscrollarea_dragleaveevent_callback = nullptr;
        kadjustingscrollarea_dropevent_callback = nullptr;
        kadjustingscrollarea_keypressevent_callback = nullptr;
        kadjustingscrollarea_changeevent_callback = nullptr;
        kadjustingscrollarea_initstyleoption_callback = nullptr;
        kadjustingscrollarea_devtype_callback = nullptr;
        kadjustingscrollarea_setvisible_callback = nullptr;
        kadjustingscrollarea_heightforwidth_callback = nullptr;
        kadjustingscrollarea_hasheightforwidth_callback = nullptr;
        kadjustingscrollarea_paintengine_callback = nullptr;
        kadjustingscrollarea_keyreleaseevent_callback = nullptr;
        kadjustingscrollarea_focusinevent_callback = nullptr;
        kadjustingscrollarea_focusoutevent_callback = nullptr;
        kadjustingscrollarea_enterevent_callback = nullptr;
        kadjustingscrollarea_leaveevent_callback = nullptr;
        kadjustingscrollarea_moveevent_callback = nullptr;
        kadjustingscrollarea_closeevent_callback = nullptr;
        kadjustingscrollarea_tabletevent_callback = nullptr;
        kadjustingscrollarea_actionevent_callback = nullptr;
        kadjustingscrollarea_showevent_callback = nullptr;
        kadjustingscrollarea_hideevent_callback = nullptr;
        kadjustingscrollarea_nativeevent_callback = nullptr;
        kadjustingscrollarea_metric_callback = nullptr;
        kadjustingscrollarea_initpainter_callback = nullptr;
        kadjustingscrollarea_redirected_callback = nullptr;
        kadjustingscrollarea_sharedpainter_callback = nullptr;
        kadjustingscrollarea_inputmethodevent_callback = nullptr;
        kadjustingscrollarea_inputmethodquery_callback = nullptr;
        kadjustingscrollarea_timerevent_callback = nullptr;
        kadjustingscrollarea_childevent_callback = nullptr;
        kadjustingscrollarea_customevent_callback = nullptr;
        kadjustingscrollarea_connectnotify_callback = nullptr;
        kadjustingscrollarea_disconnectnotify_callback = nullptr;
        kadjustingscrollarea_setviewportmargins_callback = nullptr;
        kadjustingscrollarea_viewportmargins_callback = nullptr;
        kadjustingscrollarea_drawframe_callback = nullptr;
        kadjustingscrollarea_updatemicrofocus_callback = nullptr;
        kadjustingscrollarea_create_callback = nullptr;
        kadjustingscrollarea_destroy_callback = nullptr;
        kadjustingscrollarea_focusnextchild_callback = nullptr;
        kadjustingscrollarea_focuspreviouschild_callback = nullptr;
        kadjustingscrollarea_sender_callback = nullptr;
        kadjustingscrollarea_sendersignalindex_callback = nullptr;
        kadjustingscrollarea_receivers_callback = nullptr;
        kadjustingscrollarea_issignalconnected_callback = nullptr;
        kadjustingscrollarea_getdecodedmetricf_callback = nullptr;
    }

    // Callback setters
    inline void setKAdjustingScrollArea_Metacall_Callback(KAdjustingScrollArea_Metacall_Callback cb) { kadjustingscrollarea_metacall_callback = cb; }
    inline void setKAdjustingScrollArea_MinimumSizeHint_Callback(KAdjustingScrollArea_MinimumSizeHint_Callback cb) { kadjustingscrollarea_minimumsizehint_callback = cb; }
    inline void setKAdjustingScrollArea_SizeHint_Callback(KAdjustingScrollArea_SizeHint_Callback cb) { kadjustingscrollarea_sizehint_callback = cb; }
    inline void setKAdjustingScrollArea_Event_Callback(KAdjustingScrollArea_Event_Callback cb) { kadjustingscrollarea_event_callback = cb; }
    inline void setKAdjustingScrollArea_FocusNextPrevChild_Callback(KAdjustingScrollArea_FocusNextPrevChild_Callback cb) { kadjustingscrollarea_focusnextprevchild_callback = cb; }
    inline void setKAdjustingScrollArea_ResizeEvent_Callback(KAdjustingScrollArea_ResizeEvent_Callback cb) { kadjustingscrollarea_resizeevent_callback = cb; }
    inline void setKAdjustingScrollArea_ScrollContentsBy_Callback(KAdjustingScrollArea_ScrollContentsBy_Callback cb) { kadjustingscrollarea_scrollcontentsby_callback = cb; }
    inline void setKAdjustingScrollArea_ViewportSizeHint_Callback(KAdjustingScrollArea_ViewportSizeHint_Callback cb) { kadjustingscrollarea_viewportsizehint_callback = cb; }
    inline void setKAdjustingScrollArea_SetupViewport_Callback(KAdjustingScrollArea_SetupViewport_Callback cb) { kadjustingscrollarea_setupviewport_callback = cb; }
    inline void setKAdjustingScrollArea_ViewportEvent_Callback(KAdjustingScrollArea_ViewportEvent_Callback cb) { kadjustingscrollarea_viewportevent_callback = cb; }
    inline void setKAdjustingScrollArea_PaintEvent_Callback(KAdjustingScrollArea_PaintEvent_Callback cb) { kadjustingscrollarea_paintevent_callback = cb; }
    inline void setKAdjustingScrollArea_MousePressEvent_Callback(KAdjustingScrollArea_MousePressEvent_Callback cb) { kadjustingscrollarea_mousepressevent_callback = cb; }
    inline void setKAdjustingScrollArea_MouseReleaseEvent_Callback(KAdjustingScrollArea_MouseReleaseEvent_Callback cb) { kadjustingscrollarea_mousereleaseevent_callback = cb; }
    inline void setKAdjustingScrollArea_MouseDoubleClickEvent_Callback(KAdjustingScrollArea_MouseDoubleClickEvent_Callback cb) { kadjustingscrollarea_mousedoubleclickevent_callback = cb; }
    inline void setKAdjustingScrollArea_MouseMoveEvent_Callback(KAdjustingScrollArea_MouseMoveEvent_Callback cb) { kadjustingscrollarea_mousemoveevent_callback = cb; }
    inline void setKAdjustingScrollArea_WheelEvent_Callback(KAdjustingScrollArea_WheelEvent_Callback cb) { kadjustingscrollarea_wheelevent_callback = cb; }
    inline void setKAdjustingScrollArea_ContextMenuEvent_Callback(KAdjustingScrollArea_ContextMenuEvent_Callback cb) { kadjustingscrollarea_contextmenuevent_callback = cb; }
    inline void setKAdjustingScrollArea_DragEnterEvent_Callback(KAdjustingScrollArea_DragEnterEvent_Callback cb) { kadjustingscrollarea_dragenterevent_callback = cb; }
    inline void setKAdjustingScrollArea_DragMoveEvent_Callback(KAdjustingScrollArea_DragMoveEvent_Callback cb) { kadjustingscrollarea_dragmoveevent_callback = cb; }
    inline void setKAdjustingScrollArea_DragLeaveEvent_Callback(KAdjustingScrollArea_DragLeaveEvent_Callback cb) { kadjustingscrollarea_dragleaveevent_callback = cb; }
    inline void setKAdjustingScrollArea_DropEvent_Callback(KAdjustingScrollArea_DropEvent_Callback cb) { kadjustingscrollarea_dropevent_callback = cb; }
    inline void setKAdjustingScrollArea_KeyPressEvent_Callback(KAdjustingScrollArea_KeyPressEvent_Callback cb) { kadjustingscrollarea_keypressevent_callback = cb; }
    inline void setKAdjustingScrollArea_ChangeEvent_Callback(KAdjustingScrollArea_ChangeEvent_Callback cb) { kadjustingscrollarea_changeevent_callback = cb; }
    inline void setKAdjustingScrollArea_InitStyleOption_Callback(KAdjustingScrollArea_InitStyleOption_Callback cb) { kadjustingscrollarea_initstyleoption_callback = cb; }
    inline void setKAdjustingScrollArea_DevType_Callback(KAdjustingScrollArea_DevType_Callback cb) { kadjustingscrollarea_devtype_callback = cb; }
    inline void setKAdjustingScrollArea_SetVisible_Callback(KAdjustingScrollArea_SetVisible_Callback cb) { kadjustingscrollarea_setvisible_callback = cb; }
    inline void setKAdjustingScrollArea_HeightForWidth_Callback(KAdjustingScrollArea_HeightForWidth_Callback cb) { kadjustingscrollarea_heightforwidth_callback = cb; }
    inline void setKAdjustingScrollArea_HasHeightForWidth_Callback(KAdjustingScrollArea_HasHeightForWidth_Callback cb) { kadjustingscrollarea_hasheightforwidth_callback = cb; }
    inline void setKAdjustingScrollArea_PaintEngine_Callback(KAdjustingScrollArea_PaintEngine_Callback cb) { kadjustingscrollarea_paintengine_callback = cb; }
    inline void setKAdjustingScrollArea_KeyReleaseEvent_Callback(KAdjustingScrollArea_KeyReleaseEvent_Callback cb) { kadjustingscrollarea_keyreleaseevent_callback = cb; }
    inline void setKAdjustingScrollArea_FocusInEvent_Callback(KAdjustingScrollArea_FocusInEvent_Callback cb) { kadjustingscrollarea_focusinevent_callback = cb; }
    inline void setKAdjustingScrollArea_FocusOutEvent_Callback(KAdjustingScrollArea_FocusOutEvent_Callback cb) { kadjustingscrollarea_focusoutevent_callback = cb; }
    inline void setKAdjustingScrollArea_EnterEvent_Callback(KAdjustingScrollArea_EnterEvent_Callback cb) { kadjustingscrollarea_enterevent_callback = cb; }
    inline void setKAdjustingScrollArea_LeaveEvent_Callback(KAdjustingScrollArea_LeaveEvent_Callback cb) { kadjustingscrollarea_leaveevent_callback = cb; }
    inline void setKAdjustingScrollArea_MoveEvent_Callback(KAdjustingScrollArea_MoveEvent_Callback cb) { kadjustingscrollarea_moveevent_callback = cb; }
    inline void setKAdjustingScrollArea_CloseEvent_Callback(KAdjustingScrollArea_CloseEvent_Callback cb) { kadjustingscrollarea_closeevent_callback = cb; }
    inline void setKAdjustingScrollArea_TabletEvent_Callback(KAdjustingScrollArea_TabletEvent_Callback cb) { kadjustingscrollarea_tabletevent_callback = cb; }
    inline void setKAdjustingScrollArea_ActionEvent_Callback(KAdjustingScrollArea_ActionEvent_Callback cb) { kadjustingscrollarea_actionevent_callback = cb; }
    inline void setKAdjustingScrollArea_ShowEvent_Callback(KAdjustingScrollArea_ShowEvent_Callback cb) { kadjustingscrollarea_showevent_callback = cb; }
    inline void setKAdjustingScrollArea_HideEvent_Callback(KAdjustingScrollArea_HideEvent_Callback cb) { kadjustingscrollarea_hideevent_callback = cb; }
    inline void setKAdjustingScrollArea_NativeEvent_Callback(KAdjustingScrollArea_NativeEvent_Callback cb) { kadjustingscrollarea_nativeevent_callback = cb; }
    inline void setKAdjustingScrollArea_Metric_Callback(KAdjustingScrollArea_Metric_Callback cb) { kadjustingscrollarea_metric_callback = cb; }
    inline void setKAdjustingScrollArea_InitPainter_Callback(KAdjustingScrollArea_InitPainter_Callback cb) { kadjustingscrollarea_initpainter_callback = cb; }
    inline void setKAdjustingScrollArea_Redirected_Callback(KAdjustingScrollArea_Redirected_Callback cb) { kadjustingscrollarea_redirected_callback = cb; }
    inline void setKAdjustingScrollArea_SharedPainter_Callback(KAdjustingScrollArea_SharedPainter_Callback cb) { kadjustingscrollarea_sharedpainter_callback = cb; }
    inline void setKAdjustingScrollArea_InputMethodEvent_Callback(KAdjustingScrollArea_InputMethodEvent_Callback cb) { kadjustingscrollarea_inputmethodevent_callback = cb; }
    inline void setKAdjustingScrollArea_InputMethodQuery_Callback(KAdjustingScrollArea_InputMethodQuery_Callback cb) { kadjustingscrollarea_inputmethodquery_callback = cb; }
    inline void setKAdjustingScrollArea_TimerEvent_Callback(KAdjustingScrollArea_TimerEvent_Callback cb) { kadjustingscrollarea_timerevent_callback = cb; }
    inline void setKAdjustingScrollArea_ChildEvent_Callback(KAdjustingScrollArea_ChildEvent_Callback cb) { kadjustingscrollarea_childevent_callback = cb; }
    inline void setKAdjustingScrollArea_CustomEvent_Callback(KAdjustingScrollArea_CustomEvent_Callback cb) { kadjustingscrollarea_customevent_callback = cb; }
    inline void setKAdjustingScrollArea_ConnectNotify_Callback(KAdjustingScrollArea_ConnectNotify_Callback cb) { kadjustingscrollarea_connectnotify_callback = cb; }
    inline void setKAdjustingScrollArea_DisconnectNotify_Callback(KAdjustingScrollArea_DisconnectNotify_Callback cb) { kadjustingscrollarea_disconnectnotify_callback = cb; }
    inline void setKAdjustingScrollArea_SetViewportMargins_Callback(KAdjustingScrollArea_SetViewportMargins_Callback cb) { kadjustingscrollarea_setviewportmargins_callback = cb; }
    inline void setKAdjustingScrollArea_ViewportMargins_Callback(KAdjustingScrollArea_ViewportMargins_Callback cb) { kadjustingscrollarea_viewportmargins_callback = cb; }
    inline void setKAdjustingScrollArea_DrawFrame_Callback(KAdjustingScrollArea_DrawFrame_Callback cb) { kadjustingscrollarea_drawframe_callback = cb; }
    inline void setKAdjustingScrollArea_UpdateMicroFocus_Callback(KAdjustingScrollArea_UpdateMicroFocus_Callback cb) { kadjustingscrollarea_updatemicrofocus_callback = cb; }
    inline void setKAdjustingScrollArea_Create_Callback(KAdjustingScrollArea_Create_Callback cb) { kadjustingscrollarea_create_callback = cb; }
    inline void setKAdjustingScrollArea_Destroy_Callback(KAdjustingScrollArea_Destroy_Callback cb) { kadjustingscrollarea_destroy_callback = cb; }
    inline void setKAdjustingScrollArea_FocusNextChild_Callback(KAdjustingScrollArea_FocusNextChild_Callback cb) { kadjustingscrollarea_focusnextchild_callback = cb; }
    inline void setKAdjustingScrollArea_FocusPreviousChild_Callback(KAdjustingScrollArea_FocusPreviousChild_Callback cb) { kadjustingscrollarea_focuspreviouschild_callback = cb; }
    inline void setKAdjustingScrollArea_Sender_Callback(KAdjustingScrollArea_Sender_Callback cb) { kadjustingscrollarea_sender_callback = cb; }
    inline void setKAdjustingScrollArea_SenderSignalIndex_Callback(KAdjustingScrollArea_SenderSignalIndex_Callback cb) { kadjustingscrollarea_sendersignalindex_callback = cb; }
    inline void setKAdjustingScrollArea_Receivers_Callback(KAdjustingScrollArea_Receivers_Callback cb) { kadjustingscrollarea_receivers_callback = cb; }
    inline void setKAdjustingScrollArea_IsSignalConnected_Callback(KAdjustingScrollArea_IsSignalConnected_Callback cb) { kadjustingscrollarea_issignalconnected_callback = cb; }
    inline void setKAdjustingScrollArea_GetDecodedMetricF_Callback(KAdjustingScrollArea_GetDecodedMetricF_Callback cb) { kadjustingscrollarea_getdecodedmetricf_callback = cb; }

    // Base flag setters
    inline void setKAdjustingScrollArea_Metacall_IsBase(bool value) const { kadjustingscrollarea_metacall_isbase = value; }
    inline void setKAdjustingScrollArea_MinimumSizeHint_IsBase(bool value) const { kadjustingscrollarea_minimumsizehint_isbase = value; }
    inline void setKAdjustingScrollArea_SizeHint_IsBase(bool value) const { kadjustingscrollarea_sizehint_isbase = value; }
    inline void setKAdjustingScrollArea_Event_IsBase(bool value) const { kadjustingscrollarea_event_isbase = value; }
    inline void setKAdjustingScrollArea_FocusNextPrevChild_IsBase(bool value) const { kadjustingscrollarea_focusnextprevchild_isbase = value; }
    inline void setKAdjustingScrollArea_ResizeEvent_IsBase(bool value) const { kadjustingscrollarea_resizeevent_isbase = value; }
    inline void setKAdjustingScrollArea_ScrollContentsBy_IsBase(bool value) const { kadjustingscrollarea_scrollcontentsby_isbase = value; }
    inline void setKAdjustingScrollArea_ViewportSizeHint_IsBase(bool value) const { kadjustingscrollarea_viewportsizehint_isbase = value; }
    inline void setKAdjustingScrollArea_SetupViewport_IsBase(bool value) const { kadjustingscrollarea_setupviewport_isbase = value; }
    inline void setKAdjustingScrollArea_ViewportEvent_IsBase(bool value) const { kadjustingscrollarea_viewportevent_isbase = value; }
    inline void setKAdjustingScrollArea_PaintEvent_IsBase(bool value) const { kadjustingscrollarea_paintevent_isbase = value; }
    inline void setKAdjustingScrollArea_MousePressEvent_IsBase(bool value) const { kadjustingscrollarea_mousepressevent_isbase = value; }
    inline void setKAdjustingScrollArea_MouseReleaseEvent_IsBase(bool value) const { kadjustingscrollarea_mousereleaseevent_isbase = value; }
    inline void setKAdjustingScrollArea_MouseDoubleClickEvent_IsBase(bool value) const { kadjustingscrollarea_mousedoubleclickevent_isbase = value; }
    inline void setKAdjustingScrollArea_MouseMoveEvent_IsBase(bool value) const { kadjustingscrollarea_mousemoveevent_isbase = value; }
    inline void setKAdjustingScrollArea_WheelEvent_IsBase(bool value) const { kadjustingscrollarea_wheelevent_isbase = value; }
    inline void setKAdjustingScrollArea_ContextMenuEvent_IsBase(bool value) const { kadjustingscrollarea_contextmenuevent_isbase = value; }
    inline void setKAdjustingScrollArea_DragEnterEvent_IsBase(bool value) const { kadjustingscrollarea_dragenterevent_isbase = value; }
    inline void setKAdjustingScrollArea_DragMoveEvent_IsBase(bool value) const { kadjustingscrollarea_dragmoveevent_isbase = value; }
    inline void setKAdjustingScrollArea_DragLeaveEvent_IsBase(bool value) const { kadjustingscrollarea_dragleaveevent_isbase = value; }
    inline void setKAdjustingScrollArea_DropEvent_IsBase(bool value) const { kadjustingscrollarea_dropevent_isbase = value; }
    inline void setKAdjustingScrollArea_KeyPressEvent_IsBase(bool value) const { kadjustingscrollarea_keypressevent_isbase = value; }
    inline void setKAdjustingScrollArea_ChangeEvent_IsBase(bool value) const { kadjustingscrollarea_changeevent_isbase = value; }
    inline void setKAdjustingScrollArea_InitStyleOption_IsBase(bool value) const { kadjustingscrollarea_initstyleoption_isbase = value; }
    inline void setKAdjustingScrollArea_DevType_IsBase(bool value) const { kadjustingscrollarea_devtype_isbase = value; }
    inline void setKAdjustingScrollArea_SetVisible_IsBase(bool value) const { kadjustingscrollarea_setvisible_isbase = value; }
    inline void setKAdjustingScrollArea_HeightForWidth_IsBase(bool value) const { kadjustingscrollarea_heightforwidth_isbase = value; }
    inline void setKAdjustingScrollArea_HasHeightForWidth_IsBase(bool value) const { kadjustingscrollarea_hasheightforwidth_isbase = value; }
    inline void setKAdjustingScrollArea_PaintEngine_IsBase(bool value) const { kadjustingscrollarea_paintengine_isbase = value; }
    inline void setKAdjustingScrollArea_KeyReleaseEvent_IsBase(bool value) const { kadjustingscrollarea_keyreleaseevent_isbase = value; }
    inline void setKAdjustingScrollArea_FocusInEvent_IsBase(bool value) const { kadjustingscrollarea_focusinevent_isbase = value; }
    inline void setKAdjustingScrollArea_FocusOutEvent_IsBase(bool value) const { kadjustingscrollarea_focusoutevent_isbase = value; }
    inline void setKAdjustingScrollArea_EnterEvent_IsBase(bool value) const { kadjustingscrollarea_enterevent_isbase = value; }
    inline void setKAdjustingScrollArea_LeaveEvent_IsBase(bool value) const { kadjustingscrollarea_leaveevent_isbase = value; }
    inline void setKAdjustingScrollArea_MoveEvent_IsBase(bool value) const { kadjustingscrollarea_moveevent_isbase = value; }
    inline void setKAdjustingScrollArea_CloseEvent_IsBase(bool value) const { kadjustingscrollarea_closeevent_isbase = value; }
    inline void setKAdjustingScrollArea_TabletEvent_IsBase(bool value) const { kadjustingscrollarea_tabletevent_isbase = value; }
    inline void setKAdjustingScrollArea_ActionEvent_IsBase(bool value) const { kadjustingscrollarea_actionevent_isbase = value; }
    inline void setKAdjustingScrollArea_ShowEvent_IsBase(bool value) const { kadjustingscrollarea_showevent_isbase = value; }
    inline void setKAdjustingScrollArea_HideEvent_IsBase(bool value) const { kadjustingscrollarea_hideevent_isbase = value; }
    inline void setKAdjustingScrollArea_NativeEvent_IsBase(bool value) const { kadjustingscrollarea_nativeevent_isbase = value; }
    inline void setKAdjustingScrollArea_Metric_IsBase(bool value) const { kadjustingscrollarea_metric_isbase = value; }
    inline void setKAdjustingScrollArea_InitPainter_IsBase(bool value) const { kadjustingscrollarea_initpainter_isbase = value; }
    inline void setKAdjustingScrollArea_Redirected_IsBase(bool value) const { kadjustingscrollarea_redirected_isbase = value; }
    inline void setKAdjustingScrollArea_SharedPainter_IsBase(bool value) const { kadjustingscrollarea_sharedpainter_isbase = value; }
    inline void setKAdjustingScrollArea_InputMethodEvent_IsBase(bool value) const { kadjustingscrollarea_inputmethodevent_isbase = value; }
    inline void setKAdjustingScrollArea_InputMethodQuery_IsBase(bool value) const { kadjustingscrollarea_inputmethodquery_isbase = value; }
    inline void setKAdjustingScrollArea_TimerEvent_IsBase(bool value) const { kadjustingscrollarea_timerevent_isbase = value; }
    inline void setKAdjustingScrollArea_ChildEvent_IsBase(bool value) const { kadjustingscrollarea_childevent_isbase = value; }
    inline void setKAdjustingScrollArea_CustomEvent_IsBase(bool value) const { kadjustingscrollarea_customevent_isbase = value; }
    inline void setKAdjustingScrollArea_ConnectNotify_IsBase(bool value) const { kadjustingscrollarea_connectnotify_isbase = value; }
    inline void setKAdjustingScrollArea_DisconnectNotify_IsBase(bool value) const { kadjustingscrollarea_disconnectnotify_isbase = value; }
    inline void setKAdjustingScrollArea_SetViewportMargins_IsBase(bool value) const { kadjustingscrollarea_setviewportmargins_isbase = value; }
    inline void setKAdjustingScrollArea_ViewportMargins_IsBase(bool value) const { kadjustingscrollarea_viewportmargins_isbase = value; }
    inline void setKAdjustingScrollArea_DrawFrame_IsBase(bool value) const { kadjustingscrollarea_drawframe_isbase = value; }
    inline void setKAdjustingScrollArea_UpdateMicroFocus_IsBase(bool value) const { kadjustingscrollarea_updatemicrofocus_isbase = value; }
    inline void setKAdjustingScrollArea_Create_IsBase(bool value) const { kadjustingscrollarea_create_isbase = value; }
    inline void setKAdjustingScrollArea_Destroy_IsBase(bool value) const { kadjustingscrollarea_destroy_isbase = value; }
    inline void setKAdjustingScrollArea_FocusNextChild_IsBase(bool value) const { kadjustingscrollarea_focusnextchild_isbase = value; }
    inline void setKAdjustingScrollArea_FocusPreviousChild_IsBase(bool value) const { kadjustingscrollarea_focuspreviouschild_isbase = value; }
    inline void setKAdjustingScrollArea_Sender_IsBase(bool value) const { kadjustingscrollarea_sender_isbase = value; }
    inline void setKAdjustingScrollArea_SenderSignalIndex_IsBase(bool value) const { kadjustingscrollarea_sendersignalindex_isbase = value; }
    inline void setKAdjustingScrollArea_Receivers_IsBase(bool value) const { kadjustingscrollarea_receivers_isbase = value; }
    inline void setKAdjustingScrollArea_IsSignalConnected_IsBase(bool value) const { kadjustingscrollarea_issignalconnected_isbase = value; }
    inline void setKAdjustingScrollArea_GetDecodedMetricF_IsBase(bool value) const { kadjustingscrollarea_getdecodedmetricf_isbase = value; }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (kadjustingscrollarea_metacall_isbase) {
            kadjustingscrollarea_metacall_isbase = false;
            return KAdjustingScrollArea::qt_metacall(param1, param2, param3);
        } else if (kadjustingscrollarea_metacall_callback != nullptr) {
            int cbval1 = static_cast<int>(param1);
            int cbval2 = param2;
            void** cbval3 = param3;

            int callback_ret = kadjustingscrollarea_metacall_callback(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        } else {
            return KAdjustingScrollArea::qt_metacall(param1, param2, param3);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QSize minimumSizeHint() const override {
        if (kadjustingscrollarea_minimumsizehint_isbase) {
            kadjustingscrollarea_minimumsizehint_isbase = false;
            return KAdjustingScrollArea::minimumSizeHint();
        } else if (kadjustingscrollarea_minimumsizehint_callback != nullptr) {
            QSize* callback_ret = kadjustingscrollarea_minimumsizehint_callback();
            return *callback_ret;
        } else {
            return KAdjustingScrollArea::minimumSizeHint();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QSize sizeHint() const override {
        if (kadjustingscrollarea_sizehint_isbase) {
            kadjustingscrollarea_sizehint_isbase = false;
            return KAdjustingScrollArea::sizeHint();
        } else if (kadjustingscrollarea_sizehint_callback != nullptr) {
            QSize* callback_ret = kadjustingscrollarea_sizehint_callback();
            return *callback_ret;
        } else {
            return KAdjustingScrollArea::sizeHint();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* event) override {
        if (kadjustingscrollarea_event_isbase) {
            kadjustingscrollarea_event_isbase = false;
            return KAdjustingScrollArea::event(event);
        } else if (kadjustingscrollarea_event_callback != nullptr) {
            QEvent* cbval1 = event;

            bool callback_ret = kadjustingscrollarea_event_callback(this, cbval1);
            return callback_ret;
        } else {
            return KAdjustingScrollArea::event(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool focusNextPrevChild(bool next) override {
        if (kadjustingscrollarea_focusnextprevchild_isbase) {
            kadjustingscrollarea_focusnextprevchild_isbase = false;
            return KAdjustingScrollArea::focusNextPrevChild(next);
        } else if (kadjustingscrollarea_focusnextprevchild_callback != nullptr) {
            bool cbval1 = next;

            bool callback_ret = kadjustingscrollarea_focusnextprevchild_callback(this, cbval1);
            return callback_ret;
        } else {
            return KAdjustingScrollArea::focusNextPrevChild(next);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void resizeEvent(QResizeEvent* param1) override {
        if (kadjustingscrollarea_resizeevent_isbase) {
            kadjustingscrollarea_resizeevent_isbase = false;
            KAdjustingScrollArea::resizeEvent(param1);
        } else if (kadjustingscrollarea_resizeevent_callback != nullptr) {
            QResizeEvent* cbval1 = param1;

            kadjustingscrollarea_resizeevent_callback(this, cbval1);
        } else {
            KAdjustingScrollArea::resizeEvent(param1);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void scrollContentsBy(int dx, int dy) override {
        if (kadjustingscrollarea_scrollcontentsby_isbase) {
            kadjustingscrollarea_scrollcontentsby_isbase = false;
            KAdjustingScrollArea::scrollContentsBy(dx, dy);
        } else if (kadjustingscrollarea_scrollcontentsby_callback != nullptr) {
            int cbval1 = dx;
            int cbval2 = dy;

            kadjustingscrollarea_scrollcontentsby_callback(this, cbval1, cbval2);
        } else {
            KAdjustingScrollArea::scrollContentsBy(dx, dy);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QSize viewportSizeHint() const override {
        if (kadjustingscrollarea_viewportsizehint_isbase) {
            kadjustingscrollarea_viewportsizehint_isbase = false;
            return KAdjustingScrollArea::viewportSizeHint();
        } else if (kadjustingscrollarea_viewportsizehint_callback != nullptr) {
            QSize* callback_ret = kadjustingscrollarea_viewportsizehint_callback();
            return *callback_ret;
        } else {
            return KAdjustingScrollArea::viewportSizeHint();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void setupViewport(QWidget* viewport) override {
        if (kadjustingscrollarea_setupviewport_isbase) {
            kadjustingscrollarea_setupviewport_isbase = false;
            KAdjustingScrollArea::setupViewport(viewport);
        } else if (kadjustingscrollarea_setupviewport_callback != nullptr) {
            QWidget* cbval1 = viewport;

            kadjustingscrollarea_setupviewport_callback(this, cbval1);
        } else {
            KAdjustingScrollArea::setupViewport(viewport);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool viewportEvent(QEvent* param1) override {
        if (kadjustingscrollarea_viewportevent_isbase) {
            kadjustingscrollarea_viewportevent_isbase = false;
            return KAdjustingScrollArea::viewportEvent(param1);
        } else if (kadjustingscrollarea_viewportevent_callback != nullptr) {
            QEvent* cbval1 = param1;

            bool callback_ret = kadjustingscrollarea_viewportevent_callback(this, cbval1);
            return callback_ret;
        } else {
            return KAdjustingScrollArea::viewportEvent(param1);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void paintEvent(QPaintEvent* param1) override {
        if (kadjustingscrollarea_paintevent_isbase) {
            kadjustingscrollarea_paintevent_isbase = false;
            KAdjustingScrollArea::paintEvent(param1);
        } else if (kadjustingscrollarea_paintevent_callback != nullptr) {
            QPaintEvent* cbval1 = param1;

            kadjustingscrollarea_paintevent_callback(this, cbval1);
        } else {
            KAdjustingScrollArea::paintEvent(param1);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void mousePressEvent(QMouseEvent* param1) override {
        if (kadjustingscrollarea_mousepressevent_isbase) {
            kadjustingscrollarea_mousepressevent_isbase = false;
            KAdjustingScrollArea::mousePressEvent(param1);
        } else if (kadjustingscrollarea_mousepressevent_callback != nullptr) {
            QMouseEvent* cbval1 = param1;

            kadjustingscrollarea_mousepressevent_callback(this, cbval1);
        } else {
            KAdjustingScrollArea::mousePressEvent(param1);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseReleaseEvent(QMouseEvent* param1) override {
        if (kadjustingscrollarea_mousereleaseevent_isbase) {
            kadjustingscrollarea_mousereleaseevent_isbase = false;
            KAdjustingScrollArea::mouseReleaseEvent(param1);
        } else if (kadjustingscrollarea_mousereleaseevent_callback != nullptr) {
            QMouseEvent* cbval1 = param1;

            kadjustingscrollarea_mousereleaseevent_callback(this, cbval1);
        } else {
            KAdjustingScrollArea::mouseReleaseEvent(param1);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseDoubleClickEvent(QMouseEvent* param1) override {
        if (kadjustingscrollarea_mousedoubleclickevent_isbase) {
            kadjustingscrollarea_mousedoubleclickevent_isbase = false;
            KAdjustingScrollArea::mouseDoubleClickEvent(param1);
        } else if (kadjustingscrollarea_mousedoubleclickevent_callback != nullptr) {
            QMouseEvent* cbval1 = param1;

            kadjustingscrollarea_mousedoubleclickevent_callback(this, cbval1);
        } else {
            KAdjustingScrollArea::mouseDoubleClickEvent(param1);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseMoveEvent(QMouseEvent* param1) override {
        if (kadjustingscrollarea_mousemoveevent_isbase) {
            kadjustingscrollarea_mousemoveevent_isbase = false;
            KAdjustingScrollArea::mouseMoveEvent(param1);
        } else if (kadjustingscrollarea_mousemoveevent_callback != nullptr) {
            QMouseEvent* cbval1 = param1;

            kadjustingscrollarea_mousemoveevent_callback(this, cbval1);
        } else {
            KAdjustingScrollArea::mouseMoveEvent(param1);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void wheelEvent(QWheelEvent* param1) override {
        if (kadjustingscrollarea_wheelevent_isbase) {
            kadjustingscrollarea_wheelevent_isbase = false;
            KAdjustingScrollArea::wheelEvent(param1);
        } else if (kadjustingscrollarea_wheelevent_callback != nullptr) {
            QWheelEvent* cbval1 = param1;

            kadjustingscrollarea_wheelevent_callback(this, cbval1);
        } else {
            KAdjustingScrollArea::wheelEvent(param1);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void contextMenuEvent(QContextMenuEvent* param1) override {
        if (kadjustingscrollarea_contextmenuevent_isbase) {
            kadjustingscrollarea_contextmenuevent_isbase = false;
            KAdjustingScrollArea::contextMenuEvent(param1);
        } else if (kadjustingscrollarea_contextmenuevent_callback != nullptr) {
            QContextMenuEvent* cbval1 = param1;

            kadjustingscrollarea_contextmenuevent_callback(this, cbval1);
        } else {
            KAdjustingScrollArea::contextMenuEvent(param1);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragEnterEvent(QDragEnterEvent* param1) override {
        if (kadjustingscrollarea_dragenterevent_isbase) {
            kadjustingscrollarea_dragenterevent_isbase = false;
            KAdjustingScrollArea::dragEnterEvent(param1);
        } else if (kadjustingscrollarea_dragenterevent_callback != nullptr) {
            QDragEnterEvent* cbval1 = param1;

            kadjustingscrollarea_dragenterevent_callback(this, cbval1);
        } else {
            KAdjustingScrollArea::dragEnterEvent(param1);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragMoveEvent(QDragMoveEvent* param1) override {
        if (kadjustingscrollarea_dragmoveevent_isbase) {
            kadjustingscrollarea_dragmoveevent_isbase = false;
            KAdjustingScrollArea::dragMoveEvent(param1);
        } else if (kadjustingscrollarea_dragmoveevent_callback != nullptr) {
            QDragMoveEvent* cbval1 = param1;

            kadjustingscrollarea_dragmoveevent_callback(this, cbval1);
        } else {
            KAdjustingScrollArea::dragMoveEvent(param1);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragLeaveEvent(QDragLeaveEvent* param1) override {
        if (kadjustingscrollarea_dragleaveevent_isbase) {
            kadjustingscrollarea_dragleaveevent_isbase = false;
            KAdjustingScrollArea::dragLeaveEvent(param1);
        } else if (kadjustingscrollarea_dragleaveevent_callback != nullptr) {
            QDragLeaveEvent* cbval1 = param1;

            kadjustingscrollarea_dragleaveevent_callback(this, cbval1);
        } else {
            KAdjustingScrollArea::dragLeaveEvent(param1);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void dropEvent(QDropEvent* param1) override {
        if (kadjustingscrollarea_dropevent_isbase) {
            kadjustingscrollarea_dropevent_isbase = false;
            KAdjustingScrollArea::dropEvent(param1);
        } else if (kadjustingscrollarea_dropevent_callback != nullptr) {
            QDropEvent* cbval1 = param1;

            kadjustingscrollarea_dropevent_callback(this, cbval1);
        } else {
            KAdjustingScrollArea::dropEvent(param1);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void keyPressEvent(QKeyEvent* param1) override {
        if (kadjustingscrollarea_keypressevent_isbase) {
            kadjustingscrollarea_keypressevent_isbase = false;
            KAdjustingScrollArea::keyPressEvent(param1);
        } else if (kadjustingscrollarea_keypressevent_callback != nullptr) {
            QKeyEvent* cbval1 = param1;

            kadjustingscrollarea_keypressevent_callback(this, cbval1);
        } else {
            KAdjustingScrollArea::keyPressEvent(param1);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void changeEvent(QEvent* param1) override {
        if (kadjustingscrollarea_changeevent_isbase) {
            kadjustingscrollarea_changeevent_isbase = false;
            KAdjustingScrollArea::changeEvent(param1);
        } else if (kadjustingscrollarea_changeevent_callback != nullptr) {
            QEvent* cbval1 = param1;

            kadjustingscrollarea_changeevent_callback(this, cbval1);
        } else {
            KAdjustingScrollArea::changeEvent(param1);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void initStyleOption(QStyleOptionFrame* option) const override {
        if (kadjustingscrollarea_initstyleoption_isbase) {
            kadjustingscrollarea_initstyleoption_isbase = false;
            KAdjustingScrollArea::initStyleOption(option);
        } else if (kadjustingscrollarea_initstyleoption_callback != nullptr) {
            QStyleOptionFrame* cbval1 = option;

            kadjustingscrollarea_initstyleoption_callback(this, cbval1);
        } else {
            KAdjustingScrollArea::initStyleOption(option);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual int devType() const override {
        if (kadjustingscrollarea_devtype_isbase) {
            kadjustingscrollarea_devtype_isbase = false;
            return KAdjustingScrollArea::devType();
        } else if (kadjustingscrollarea_devtype_callback != nullptr) {
            int callback_ret = kadjustingscrollarea_devtype_callback();
            return static_cast<int>(callback_ret);
        } else {
            return KAdjustingScrollArea::devType();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void setVisible(bool visible) override {
        if (kadjustingscrollarea_setvisible_isbase) {
            kadjustingscrollarea_setvisible_isbase = false;
            KAdjustingScrollArea::setVisible(visible);
        } else if (kadjustingscrollarea_setvisible_callback != nullptr) {
            bool cbval1 = visible;

            kadjustingscrollarea_setvisible_callback(this, cbval1);
        } else {
            KAdjustingScrollArea::setVisible(visible);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual int heightForWidth(int param1) const override {
        if (kadjustingscrollarea_heightforwidth_isbase) {
            kadjustingscrollarea_heightforwidth_isbase = false;
            return KAdjustingScrollArea::heightForWidth(param1);
        } else if (kadjustingscrollarea_heightforwidth_callback != nullptr) {
            int cbval1 = param1;

            int callback_ret = kadjustingscrollarea_heightforwidth_callback(this, cbval1);
            return static_cast<int>(callback_ret);
        } else {
            return KAdjustingScrollArea::heightForWidth(param1);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool hasHeightForWidth() const override {
        if (kadjustingscrollarea_hasheightforwidth_isbase) {
            kadjustingscrollarea_hasheightforwidth_isbase = false;
            return KAdjustingScrollArea::hasHeightForWidth();
        } else if (kadjustingscrollarea_hasheightforwidth_callback != nullptr) {
            bool callback_ret = kadjustingscrollarea_hasheightforwidth_callback();
            return callback_ret;
        } else {
            return KAdjustingScrollArea::hasHeightForWidth();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QPaintEngine* paintEngine() const override {
        if (kadjustingscrollarea_paintengine_isbase) {
            kadjustingscrollarea_paintengine_isbase = false;
            return KAdjustingScrollArea::paintEngine();
        } else if (kadjustingscrollarea_paintengine_callback != nullptr) {
            QPaintEngine* callback_ret = kadjustingscrollarea_paintengine_callback();
            return callback_ret;
        } else {
            return KAdjustingScrollArea::paintEngine();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void keyReleaseEvent(QKeyEvent* event) override {
        if (kadjustingscrollarea_keyreleaseevent_isbase) {
            kadjustingscrollarea_keyreleaseevent_isbase = false;
            KAdjustingScrollArea::keyReleaseEvent(event);
        } else if (kadjustingscrollarea_keyreleaseevent_callback != nullptr) {
            QKeyEvent* cbval1 = event;

            kadjustingscrollarea_keyreleaseevent_callback(this, cbval1);
        } else {
            KAdjustingScrollArea::keyReleaseEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void focusInEvent(QFocusEvent* event) override {
        if (kadjustingscrollarea_focusinevent_isbase) {
            kadjustingscrollarea_focusinevent_isbase = false;
            KAdjustingScrollArea::focusInEvent(event);
        } else if (kadjustingscrollarea_focusinevent_callback != nullptr) {
            QFocusEvent* cbval1 = event;

            kadjustingscrollarea_focusinevent_callback(this, cbval1);
        } else {
            KAdjustingScrollArea::focusInEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void focusOutEvent(QFocusEvent* event) override {
        if (kadjustingscrollarea_focusoutevent_isbase) {
            kadjustingscrollarea_focusoutevent_isbase = false;
            KAdjustingScrollArea::focusOutEvent(event);
        } else if (kadjustingscrollarea_focusoutevent_callback != nullptr) {
            QFocusEvent* cbval1 = event;

            kadjustingscrollarea_focusoutevent_callback(this, cbval1);
        } else {
            KAdjustingScrollArea::focusOutEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void enterEvent(QEnterEvent* event) override {
        if (kadjustingscrollarea_enterevent_isbase) {
            kadjustingscrollarea_enterevent_isbase = false;
            KAdjustingScrollArea::enterEvent(event);
        } else if (kadjustingscrollarea_enterevent_callback != nullptr) {
            QEnterEvent* cbval1 = event;

            kadjustingscrollarea_enterevent_callback(this, cbval1);
        } else {
            KAdjustingScrollArea::enterEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void leaveEvent(QEvent* event) override {
        if (kadjustingscrollarea_leaveevent_isbase) {
            kadjustingscrollarea_leaveevent_isbase = false;
            KAdjustingScrollArea::leaveEvent(event);
        } else if (kadjustingscrollarea_leaveevent_callback != nullptr) {
            QEvent* cbval1 = event;

            kadjustingscrollarea_leaveevent_callback(this, cbval1);
        } else {
            KAdjustingScrollArea::leaveEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void moveEvent(QMoveEvent* event) override {
        if (kadjustingscrollarea_moveevent_isbase) {
            kadjustingscrollarea_moveevent_isbase = false;
            KAdjustingScrollArea::moveEvent(event);
        } else if (kadjustingscrollarea_moveevent_callback != nullptr) {
            QMoveEvent* cbval1 = event;

            kadjustingscrollarea_moveevent_callback(this, cbval1);
        } else {
            KAdjustingScrollArea::moveEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void closeEvent(QCloseEvent* event) override {
        if (kadjustingscrollarea_closeevent_isbase) {
            kadjustingscrollarea_closeevent_isbase = false;
            KAdjustingScrollArea::closeEvent(event);
        } else if (kadjustingscrollarea_closeevent_callback != nullptr) {
            QCloseEvent* cbval1 = event;

            kadjustingscrollarea_closeevent_callback(this, cbval1);
        } else {
            KAdjustingScrollArea::closeEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void tabletEvent(QTabletEvent* event) override {
        if (kadjustingscrollarea_tabletevent_isbase) {
            kadjustingscrollarea_tabletevent_isbase = false;
            KAdjustingScrollArea::tabletEvent(event);
        } else if (kadjustingscrollarea_tabletevent_callback != nullptr) {
            QTabletEvent* cbval1 = event;

            kadjustingscrollarea_tabletevent_callback(this, cbval1);
        } else {
            KAdjustingScrollArea::tabletEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void actionEvent(QActionEvent* event) override {
        if (kadjustingscrollarea_actionevent_isbase) {
            kadjustingscrollarea_actionevent_isbase = false;
            KAdjustingScrollArea::actionEvent(event);
        } else if (kadjustingscrollarea_actionevent_callback != nullptr) {
            QActionEvent* cbval1 = event;

            kadjustingscrollarea_actionevent_callback(this, cbval1);
        } else {
            KAdjustingScrollArea::actionEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void showEvent(QShowEvent* event) override {
        if (kadjustingscrollarea_showevent_isbase) {
            kadjustingscrollarea_showevent_isbase = false;
            KAdjustingScrollArea::showEvent(event);
        } else if (kadjustingscrollarea_showevent_callback != nullptr) {
            QShowEvent* cbval1 = event;

            kadjustingscrollarea_showevent_callback(this, cbval1);
        } else {
            KAdjustingScrollArea::showEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void hideEvent(QHideEvent* event) override {
        if (kadjustingscrollarea_hideevent_isbase) {
            kadjustingscrollarea_hideevent_isbase = false;
            KAdjustingScrollArea::hideEvent(event);
        } else if (kadjustingscrollarea_hideevent_callback != nullptr) {
            QHideEvent* cbval1 = event;

            kadjustingscrollarea_hideevent_callback(this, cbval1);
        } else {
            KAdjustingScrollArea::hideEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool nativeEvent(const QByteArray& eventType, void* message, qintptr* result) override {
        if (kadjustingscrollarea_nativeevent_isbase) {
            kadjustingscrollarea_nativeevent_isbase = false;
            return KAdjustingScrollArea::nativeEvent(eventType, message, result);
        } else if (kadjustingscrollarea_nativeevent_callback != nullptr) {
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

            bool callback_ret = kadjustingscrollarea_nativeevent_callback(this, cbval1, cbval2, cbval3);
            return callback_ret;
        } else {
            return KAdjustingScrollArea::nativeEvent(eventType, message, result);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual int metric(QPaintDevice::PaintDeviceMetric param1) const override {
        if (kadjustingscrollarea_metric_isbase) {
            kadjustingscrollarea_metric_isbase = false;
            return KAdjustingScrollArea::metric(param1);
        } else if (kadjustingscrollarea_metric_callback != nullptr) {
            int cbval1 = static_cast<int>(param1);

            int callback_ret = kadjustingscrollarea_metric_callback(this, cbval1);
            return static_cast<int>(callback_ret);
        } else {
            return KAdjustingScrollArea::metric(param1);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void initPainter(QPainter* painter) const override {
        if (kadjustingscrollarea_initpainter_isbase) {
            kadjustingscrollarea_initpainter_isbase = false;
            KAdjustingScrollArea::initPainter(painter);
        } else if (kadjustingscrollarea_initpainter_callback != nullptr) {
            QPainter* cbval1 = painter;

            kadjustingscrollarea_initpainter_callback(this, cbval1);
        } else {
            KAdjustingScrollArea::initPainter(painter);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QPaintDevice* redirected(QPoint* offset) const override {
        if (kadjustingscrollarea_redirected_isbase) {
            kadjustingscrollarea_redirected_isbase = false;
            return KAdjustingScrollArea::redirected(offset);
        } else if (kadjustingscrollarea_redirected_callback != nullptr) {
            QPoint* cbval1 = offset;

            QPaintDevice* callback_ret = kadjustingscrollarea_redirected_callback(this, cbval1);
            return callback_ret;
        } else {
            return KAdjustingScrollArea::redirected(offset);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QPainter* sharedPainter() const override {
        if (kadjustingscrollarea_sharedpainter_isbase) {
            kadjustingscrollarea_sharedpainter_isbase = false;
            return KAdjustingScrollArea::sharedPainter();
        } else if (kadjustingscrollarea_sharedpainter_callback != nullptr) {
            QPainter* callback_ret = kadjustingscrollarea_sharedpainter_callback();
            return callback_ret;
        } else {
            return KAdjustingScrollArea::sharedPainter();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void inputMethodEvent(QInputMethodEvent* param1) override {
        if (kadjustingscrollarea_inputmethodevent_isbase) {
            kadjustingscrollarea_inputmethodevent_isbase = false;
            KAdjustingScrollArea::inputMethodEvent(param1);
        } else if (kadjustingscrollarea_inputmethodevent_callback != nullptr) {
            QInputMethodEvent* cbval1 = param1;

            kadjustingscrollarea_inputmethodevent_callback(this, cbval1);
        } else {
            KAdjustingScrollArea::inputMethodEvent(param1);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QVariant inputMethodQuery(Qt::InputMethodQuery param1) const override {
        if (kadjustingscrollarea_inputmethodquery_isbase) {
            kadjustingscrollarea_inputmethodquery_isbase = false;
            return KAdjustingScrollArea::inputMethodQuery(param1);
        } else if (kadjustingscrollarea_inputmethodquery_callback != nullptr) {
            int cbval1 = static_cast<int>(param1);

            QVariant* callback_ret = kadjustingscrollarea_inputmethodquery_callback(this, cbval1);
            return *callback_ret;
        } else {
            return KAdjustingScrollArea::inputMethodQuery(param1);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (kadjustingscrollarea_timerevent_isbase) {
            kadjustingscrollarea_timerevent_isbase = false;
            KAdjustingScrollArea::timerEvent(event);
        } else if (kadjustingscrollarea_timerevent_callback != nullptr) {
            QTimerEvent* cbval1 = event;

            kadjustingscrollarea_timerevent_callback(this, cbval1);
        } else {
            KAdjustingScrollArea::timerEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (kadjustingscrollarea_childevent_isbase) {
            kadjustingscrollarea_childevent_isbase = false;
            KAdjustingScrollArea::childEvent(event);
        } else if (kadjustingscrollarea_childevent_callback != nullptr) {
            QChildEvent* cbval1 = event;

            kadjustingscrollarea_childevent_callback(this, cbval1);
        } else {
            KAdjustingScrollArea::childEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (kadjustingscrollarea_customevent_isbase) {
            kadjustingscrollarea_customevent_isbase = false;
            KAdjustingScrollArea::customEvent(event);
        } else if (kadjustingscrollarea_customevent_callback != nullptr) {
            QEvent* cbval1 = event;

            kadjustingscrollarea_customevent_callback(this, cbval1);
        } else {
            KAdjustingScrollArea::customEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (kadjustingscrollarea_connectnotify_isbase) {
            kadjustingscrollarea_connectnotify_isbase = false;
            KAdjustingScrollArea::connectNotify(signal);
        } else if (kadjustingscrollarea_connectnotify_callback != nullptr) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            kadjustingscrollarea_connectnotify_callback(this, cbval1);
        } else {
            KAdjustingScrollArea::connectNotify(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (kadjustingscrollarea_disconnectnotify_isbase) {
            kadjustingscrollarea_disconnectnotify_isbase = false;
            KAdjustingScrollArea::disconnectNotify(signal);
        } else if (kadjustingscrollarea_disconnectnotify_callback != nullptr) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            kadjustingscrollarea_disconnectnotify_callback(this, cbval1);
        } else {
            KAdjustingScrollArea::disconnectNotify(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    void setViewportMargins(int left, int top, int right, int bottom) {
        if (kadjustingscrollarea_setviewportmargins_isbase) {
            kadjustingscrollarea_setviewportmargins_isbase = false;
            KAdjustingScrollArea::setViewportMargins(left, top, right, bottom);
        } else if (kadjustingscrollarea_setviewportmargins_callback != nullptr) {
            int cbval1 = left;
            int cbval2 = top;
            int cbval3 = right;
            int cbval4 = bottom;

            kadjustingscrollarea_setviewportmargins_callback(this, cbval1, cbval2, cbval3, cbval4);
        } else {
            KAdjustingScrollArea::setViewportMargins(left, top, right, bottom);
        }
    }

    // Virtual method for C ABI access and custom callback
    QMargins viewportMargins() const {
        if (kadjustingscrollarea_viewportmargins_isbase) {
            kadjustingscrollarea_viewportmargins_isbase = false;
            return KAdjustingScrollArea::viewportMargins();
        } else if (kadjustingscrollarea_viewportmargins_callback != nullptr) {
            QMargins* callback_ret = kadjustingscrollarea_viewportmargins_callback();
            return *callback_ret;
        } else {
            return KAdjustingScrollArea::viewportMargins();
        }
    }

    // Virtual method for C ABI access and custom callback
    void drawFrame(QPainter* param1) {
        if (kadjustingscrollarea_drawframe_isbase) {
            kadjustingscrollarea_drawframe_isbase = false;
            KAdjustingScrollArea::drawFrame(param1);
        } else if (kadjustingscrollarea_drawframe_callback != nullptr) {
            QPainter* cbval1 = param1;

            kadjustingscrollarea_drawframe_callback(this, cbval1);
        } else {
            KAdjustingScrollArea::drawFrame(param1);
        }
    }

    // Virtual method for C ABI access and custom callback
    void updateMicroFocus() {
        if (kadjustingscrollarea_updatemicrofocus_isbase) {
            kadjustingscrollarea_updatemicrofocus_isbase = false;
            KAdjustingScrollArea::updateMicroFocus();
        } else if (kadjustingscrollarea_updatemicrofocus_callback != nullptr) {
            kadjustingscrollarea_updatemicrofocus_callback();
        } else {
            KAdjustingScrollArea::updateMicroFocus();
        }
    }

    // Virtual method for C ABI access and custom callback
    void create() {
        if (kadjustingscrollarea_create_isbase) {
            kadjustingscrollarea_create_isbase = false;
            KAdjustingScrollArea::create();
        } else if (kadjustingscrollarea_create_callback != nullptr) {
            kadjustingscrollarea_create_callback();
        } else {
            KAdjustingScrollArea::create();
        }
    }

    // Virtual method for C ABI access and custom callback
    void destroy() {
        if (kadjustingscrollarea_destroy_isbase) {
            kadjustingscrollarea_destroy_isbase = false;
            KAdjustingScrollArea::destroy();
        } else if (kadjustingscrollarea_destroy_callback != nullptr) {
            kadjustingscrollarea_destroy_callback();
        } else {
            KAdjustingScrollArea::destroy();
        }
    }

    // Virtual method for C ABI access and custom callback
    bool focusNextChild() {
        if (kadjustingscrollarea_focusnextchild_isbase) {
            kadjustingscrollarea_focusnextchild_isbase = false;
            return KAdjustingScrollArea::focusNextChild();
        } else if (kadjustingscrollarea_focusnextchild_callback != nullptr) {
            bool callback_ret = kadjustingscrollarea_focusnextchild_callback();
            return callback_ret;
        } else {
            return KAdjustingScrollArea::focusNextChild();
        }
    }

    // Virtual method for C ABI access and custom callback
    bool focusPreviousChild() {
        if (kadjustingscrollarea_focuspreviouschild_isbase) {
            kadjustingscrollarea_focuspreviouschild_isbase = false;
            return KAdjustingScrollArea::focusPreviousChild();
        } else if (kadjustingscrollarea_focuspreviouschild_callback != nullptr) {
            bool callback_ret = kadjustingscrollarea_focuspreviouschild_callback();
            return callback_ret;
        } else {
            return KAdjustingScrollArea::focusPreviousChild();
        }
    }

    // Virtual method for C ABI access and custom callback
    QObject* sender() const {
        if (kadjustingscrollarea_sender_isbase) {
            kadjustingscrollarea_sender_isbase = false;
            return KAdjustingScrollArea::sender();
        } else if (kadjustingscrollarea_sender_callback != nullptr) {
            QObject* callback_ret = kadjustingscrollarea_sender_callback();
            return callback_ret;
        } else {
            return KAdjustingScrollArea::sender();
        }
    }

    // Virtual method for C ABI access and custom callback
    int senderSignalIndex() const {
        if (kadjustingscrollarea_sendersignalindex_isbase) {
            kadjustingscrollarea_sendersignalindex_isbase = false;
            return KAdjustingScrollArea::senderSignalIndex();
        } else if (kadjustingscrollarea_sendersignalindex_callback != nullptr) {
            int callback_ret = kadjustingscrollarea_sendersignalindex_callback();
            return static_cast<int>(callback_ret);
        } else {
            return KAdjustingScrollArea::senderSignalIndex();
        }
    }

    // Virtual method for C ABI access and custom callback
    int receivers(const char* signal) const {
        if (kadjustingscrollarea_receivers_isbase) {
            kadjustingscrollarea_receivers_isbase = false;
            return KAdjustingScrollArea::receivers(signal);
        } else if (kadjustingscrollarea_receivers_callback != nullptr) {
            const char* cbval1 = (const char*)signal;

            int callback_ret = kadjustingscrollarea_receivers_callback(this, cbval1);
            return static_cast<int>(callback_ret);
        } else {
            return KAdjustingScrollArea::receivers(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    bool isSignalConnected(const QMetaMethod& signal) const {
        if (kadjustingscrollarea_issignalconnected_isbase) {
            kadjustingscrollarea_issignalconnected_isbase = false;
            return KAdjustingScrollArea::isSignalConnected(signal);
        } else if (kadjustingscrollarea_issignalconnected_callback != nullptr) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            bool callback_ret = kadjustingscrollarea_issignalconnected_callback(this, cbval1);
            return callback_ret;
        } else {
            return KAdjustingScrollArea::isSignalConnected(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    double getDecodedMetricF(QPaintDevice::PaintDeviceMetric metricA, QPaintDevice::PaintDeviceMetric metricB) const {
        if (kadjustingscrollarea_getdecodedmetricf_isbase) {
            kadjustingscrollarea_getdecodedmetricf_isbase = false;
            return KAdjustingScrollArea::getDecodedMetricF(metricA, metricB);
        } else if (kadjustingscrollarea_getdecodedmetricf_callback != nullptr) {
            int cbval1 = static_cast<int>(metricA);
            int cbval2 = static_cast<int>(metricB);

            double callback_ret = kadjustingscrollarea_getdecodedmetricf_callback(this, cbval1, cbval2);
            return static_cast<double>(callback_ret);
        } else {
            return KAdjustingScrollArea::getDecodedMetricF(metricA, metricB);
        }
    }

    // Friend functions
    friend void KAdjustingScrollArea_ResizeEvent(KAdjustingScrollArea* self, QResizeEvent* param1);
    friend void KAdjustingScrollArea_QBaseResizeEvent(KAdjustingScrollArea* self, QResizeEvent* param1);
    friend void KAdjustingScrollArea_ScrollContentsBy(KAdjustingScrollArea* self, int dx, int dy);
    friend void KAdjustingScrollArea_QBaseScrollContentsBy(KAdjustingScrollArea* self, int dx, int dy);
    friend QSize* KAdjustingScrollArea_ViewportSizeHint(const KAdjustingScrollArea* self);
    friend QSize* KAdjustingScrollArea_QBaseViewportSizeHint(const KAdjustingScrollArea* self);
    friend bool KAdjustingScrollArea_ViewportEvent(KAdjustingScrollArea* self, QEvent* param1);
    friend bool KAdjustingScrollArea_QBaseViewportEvent(KAdjustingScrollArea* self, QEvent* param1);
    friend void KAdjustingScrollArea_PaintEvent(KAdjustingScrollArea* self, QPaintEvent* param1);
    friend void KAdjustingScrollArea_QBasePaintEvent(KAdjustingScrollArea* self, QPaintEvent* param1);
    friend void KAdjustingScrollArea_MousePressEvent(KAdjustingScrollArea* self, QMouseEvent* param1);
    friend void KAdjustingScrollArea_QBaseMousePressEvent(KAdjustingScrollArea* self, QMouseEvent* param1);
    friend void KAdjustingScrollArea_MouseReleaseEvent(KAdjustingScrollArea* self, QMouseEvent* param1);
    friend void KAdjustingScrollArea_QBaseMouseReleaseEvent(KAdjustingScrollArea* self, QMouseEvent* param1);
    friend void KAdjustingScrollArea_MouseDoubleClickEvent(KAdjustingScrollArea* self, QMouseEvent* param1);
    friend void KAdjustingScrollArea_QBaseMouseDoubleClickEvent(KAdjustingScrollArea* self, QMouseEvent* param1);
    friend void KAdjustingScrollArea_MouseMoveEvent(KAdjustingScrollArea* self, QMouseEvent* param1);
    friend void KAdjustingScrollArea_QBaseMouseMoveEvent(KAdjustingScrollArea* self, QMouseEvent* param1);
    friend void KAdjustingScrollArea_WheelEvent(KAdjustingScrollArea* self, QWheelEvent* param1);
    friend void KAdjustingScrollArea_QBaseWheelEvent(KAdjustingScrollArea* self, QWheelEvent* param1);
    friend void KAdjustingScrollArea_ContextMenuEvent(KAdjustingScrollArea* self, QContextMenuEvent* param1);
    friend void KAdjustingScrollArea_QBaseContextMenuEvent(KAdjustingScrollArea* self, QContextMenuEvent* param1);
    friend void KAdjustingScrollArea_DragEnterEvent(KAdjustingScrollArea* self, QDragEnterEvent* param1);
    friend void KAdjustingScrollArea_QBaseDragEnterEvent(KAdjustingScrollArea* self, QDragEnterEvent* param1);
    friend void KAdjustingScrollArea_DragMoveEvent(KAdjustingScrollArea* self, QDragMoveEvent* param1);
    friend void KAdjustingScrollArea_QBaseDragMoveEvent(KAdjustingScrollArea* self, QDragMoveEvent* param1);
    friend void KAdjustingScrollArea_DragLeaveEvent(KAdjustingScrollArea* self, QDragLeaveEvent* param1);
    friend void KAdjustingScrollArea_QBaseDragLeaveEvent(KAdjustingScrollArea* self, QDragLeaveEvent* param1);
    friend void KAdjustingScrollArea_DropEvent(KAdjustingScrollArea* self, QDropEvent* param1);
    friend void KAdjustingScrollArea_QBaseDropEvent(KAdjustingScrollArea* self, QDropEvent* param1);
    friend void KAdjustingScrollArea_KeyPressEvent(KAdjustingScrollArea* self, QKeyEvent* param1);
    friend void KAdjustingScrollArea_QBaseKeyPressEvent(KAdjustingScrollArea* self, QKeyEvent* param1);
    friend void KAdjustingScrollArea_ChangeEvent(KAdjustingScrollArea* self, QEvent* param1);
    friend void KAdjustingScrollArea_QBaseChangeEvent(KAdjustingScrollArea* self, QEvent* param1);
    friend void KAdjustingScrollArea_InitStyleOption(const KAdjustingScrollArea* self, QStyleOptionFrame* option);
    friend void KAdjustingScrollArea_QBaseInitStyleOption(const KAdjustingScrollArea* self, QStyleOptionFrame* option);
    friend void KAdjustingScrollArea_KeyReleaseEvent(KAdjustingScrollArea* self, QKeyEvent* event);
    friend void KAdjustingScrollArea_QBaseKeyReleaseEvent(KAdjustingScrollArea* self, QKeyEvent* event);
    friend void KAdjustingScrollArea_FocusInEvent(KAdjustingScrollArea* self, QFocusEvent* event);
    friend void KAdjustingScrollArea_QBaseFocusInEvent(KAdjustingScrollArea* self, QFocusEvent* event);
    friend void KAdjustingScrollArea_FocusOutEvent(KAdjustingScrollArea* self, QFocusEvent* event);
    friend void KAdjustingScrollArea_QBaseFocusOutEvent(KAdjustingScrollArea* self, QFocusEvent* event);
    friend void KAdjustingScrollArea_EnterEvent(KAdjustingScrollArea* self, QEnterEvent* event);
    friend void KAdjustingScrollArea_QBaseEnterEvent(KAdjustingScrollArea* self, QEnterEvent* event);
    friend void KAdjustingScrollArea_LeaveEvent(KAdjustingScrollArea* self, QEvent* event);
    friend void KAdjustingScrollArea_QBaseLeaveEvent(KAdjustingScrollArea* self, QEvent* event);
    friend void KAdjustingScrollArea_MoveEvent(KAdjustingScrollArea* self, QMoveEvent* event);
    friend void KAdjustingScrollArea_QBaseMoveEvent(KAdjustingScrollArea* self, QMoveEvent* event);
    friend void KAdjustingScrollArea_CloseEvent(KAdjustingScrollArea* self, QCloseEvent* event);
    friend void KAdjustingScrollArea_QBaseCloseEvent(KAdjustingScrollArea* self, QCloseEvent* event);
    friend void KAdjustingScrollArea_TabletEvent(KAdjustingScrollArea* self, QTabletEvent* event);
    friend void KAdjustingScrollArea_QBaseTabletEvent(KAdjustingScrollArea* self, QTabletEvent* event);
    friend void KAdjustingScrollArea_ActionEvent(KAdjustingScrollArea* self, QActionEvent* event);
    friend void KAdjustingScrollArea_QBaseActionEvent(KAdjustingScrollArea* self, QActionEvent* event);
    friend void KAdjustingScrollArea_ShowEvent(KAdjustingScrollArea* self, QShowEvent* event);
    friend void KAdjustingScrollArea_QBaseShowEvent(KAdjustingScrollArea* self, QShowEvent* event);
    friend void KAdjustingScrollArea_HideEvent(KAdjustingScrollArea* self, QHideEvent* event);
    friend void KAdjustingScrollArea_QBaseHideEvent(KAdjustingScrollArea* self, QHideEvent* event);
    friend bool KAdjustingScrollArea_NativeEvent(KAdjustingScrollArea* self, const libqt_string eventType, void* message, intptr_t* result);
    friend bool KAdjustingScrollArea_QBaseNativeEvent(KAdjustingScrollArea* self, const libqt_string eventType, void* message, intptr_t* result);
    friend int KAdjustingScrollArea_Metric(const KAdjustingScrollArea* self, int param1);
    friend int KAdjustingScrollArea_QBaseMetric(const KAdjustingScrollArea* self, int param1);
    friend void KAdjustingScrollArea_InitPainter(const KAdjustingScrollArea* self, QPainter* painter);
    friend void KAdjustingScrollArea_QBaseInitPainter(const KAdjustingScrollArea* self, QPainter* painter);
    friend QPaintDevice* KAdjustingScrollArea_Redirected(const KAdjustingScrollArea* self, QPoint* offset);
    friend QPaintDevice* KAdjustingScrollArea_QBaseRedirected(const KAdjustingScrollArea* self, QPoint* offset);
    friend QPainter* KAdjustingScrollArea_SharedPainter(const KAdjustingScrollArea* self);
    friend QPainter* KAdjustingScrollArea_QBaseSharedPainter(const KAdjustingScrollArea* self);
    friend void KAdjustingScrollArea_InputMethodEvent(KAdjustingScrollArea* self, QInputMethodEvent* param1);
    friend void KAdjustingScrollArea_QBaseInputMethodEvent(KAdjustingScrollArea* self, QInputMethodEvent* param1);
    friend void KAdjustingScrollArea_TimerEvent(KAdjustingScrollArea* self, QTimerEvent* event);
    friend void KAdjustingScrollArea_QBaseTimerEvent(KAdjustingScrollArea* self, QTimerEvent* event);
    friend void KAdjustingScrollArea_ChildEvent(KAdjustingScrollArea* self, QChildEvent* event);
    friend void KAdjustingScrollArea_QBaseChildEvent(KAdjustingScrollArea* self, QChildEvent* event);
    friend void KAdjustingScrollArea_CustomEvent(KAdjustingScrollArea* self, QEvent* event);
    friend void KAdjustingScrollArea_QBaseCustomEvent(KAdjustingScrollArea* self, QEvent* event);
    friend void KAdjustingScrollArea_ConnectNotify(KAdjustingScrollArea* self, const QMetaMethod* signal);
    friend void KAdjustingScrollArea_QBaseConnectNotify(KAdjustingScrollArea* self, const QMetaMethod* signal);
    friend void KAdjustingScrollArea_DisconnectNotify(KAdjustingScrollArea* self, const QMetaMethod* signal);
    friend void KAdjustingScrollArea_QBaseDisconnectNotify(KAdjustingScrollArea* self, const QMetaMethod* signal);
    friend void KAdjustingScrollArea_SetViewportMargins(KAdjustingScrollArea* self, int left, int top, int right, int bottom);
    friend void KAdjustingScrollArea_QBaseSetViewportMargins(KAdjustingScrollArea* self, int left, int top, int right, int bottom);
    friend QMargins* KAdjustingScrollArea_ViewportMargins(const KAdjustingScrollArea* self);
    friend QMargins* KAdjustingScrollArea_QBaseViewportMargins(const KAdjustingScrollArea* self);
    friend void KAdjustingScrollArea_DrawFrame(KAdjustingScrollArea* self, QPainter* param1);
    friend void KAdjustingScrollArea_QBaseDrawFrame(KAdjustingScrollArea* self, QPainter* param1);
    friend void KAdjustingScrollArea_UpdateMicroFocus(KAdjustingScrollArea* self);
    friend void KAdjustingScrollArea_QBaseUpdateMicroFocus(KAdjustingScrollArea* self);
    friend void KAdjustingScrollArea_Create(KAdjustingScrollArea* self);
    friend void KAdjustingScrollArea_QBaseCreate(KAdjustingScrollArea* self);
    friend void KAdjustingScrollArea_Destroy(KAdjustingScrollArea* self);
    friend void KAdjustingScrollArea_QBaseDestroy(KAdjustingScrollArea* self);
    friend bool KAdjustingScrollArea_FocusNextChild(KAdjustingScrollArea* self);
    friend bool KAdjustingScrollArea_QBaseFocusNextChild(KAdjustingScrollArea* self);
    friend bool KAdjustingScrollArea_FocusPreviousChild(KAdjustingScrollArea* self);
    friend bool KAdjustingScrollArea_QBaseFocusPreviousChild(KAdjustingScrollArea* self);
    friend QObject* KAdjustingScrollArea_Sender(const KAdjustingScrollArea* self);
    friend QObject* KAdjustingScrollArea_QBaseSender(const KAdjustingScrollArea* self);
    friend int KAdjustingScrollArea_SenderSignalIndex(const KAdjustingScrollArea* self);
    friend int KAdjustingScrollArea_QBaseSenderSignalIndex(const KAdjustingScrollArea* self);
    friend int KAdjustingScrollArea_Receivers(const KAdjustingScrollArea* self, const char* signal);
    friend int KAdjustingScrollArea_QBaseReceivers(const KAdjustingScrollArea* self, const char* signal);
    friend bool KAdjustingScrollArea_IsSignalConnected(const KAdjustingScrollArea* self, const QMetaMethod* signal);
    friend bool KAdjustingScrollArea_QBaseIsSignalConnected(const KAdjustingScrollArea* self, const QMetaMethod* signal);
    friend double KAdjustingScrollArea_GetDecodedMetricF(const KAdjustingScrollArea* self, int metricA, int metricB);
    friend double KAdjustingScrollArea_QBaseGetDecodedMetricF(const KAdjustingScrollArea* self, int metricA, int metricB);
};

#endif
