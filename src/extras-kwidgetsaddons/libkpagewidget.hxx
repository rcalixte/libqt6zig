#pragma once
#ifndef SRC_EXTRAS_KWIDGETSADDONSC_LIBVIRTUALKPAGEWIDGET_H
#define SRC_EXTRAS_KWIDGETSADDONSC_LIBVIRTUALKPAGEWIDGET_H

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

// This class is a subclass of KPageWidget so that we can call protected methods
class VirtualKPageWidget final : public KPageWidget {

  public:
    // Virtual class boolean flag
    bool isVirtualKPageWidget = true;

    // Virtual class public types (including callbacks)
    using KPageWidget_Metacall_Callback = int (*)(KPageWidget*, int, int, void**);
    using KPageWidget_CreateView_Callback = QAbstractItemView* (*)();
    using KPageWidget_ShowPageHeader_Callback = bool (*)();
    using KPageWidget_ViewPosition_Callback = int (*)();
    using KPageWidget_DevType_Callback = int (*)();
    using KPageWidget_SetVisible_Callback = void (*)(KPageWidget*, bool);
    using KPageWidget_SizeHint_Callback = QSize* (*)();
    using KPageWidget_MinimumSizeHint_Callback = QSize* (*)();
    using KPageWidget_HeightForWidth_Callback = int (*)(const KPageWidget*, int);
    using KPageWidget_HasHeightForWidth_Callback = bool (*)();
    using KPageWidget_PaintEngine_Callback = QPaintEngine* (*)();
    using KPageWidget_Event_Callback = bool (*)(KPageWidget*, QEvent*);
    using KPageWidget_MousePressEvent_Callback = void (*)(KPageWidget*, QMouseEvent*);
    using KPageWidget_MouseReleaseEvent_Callback = void (*)(KPageWidget*, QMouseEvent*);
    using KPageWidget_MouseDoubleClickEvent_Callback = void (*)(KPageWidget*, QMouseEvent*);
    using KPageWidget_MouseMoveEvent_Callback = void (*)(KPageWidget*, QMouseEvent*);
    using KPageWidget_WheelEvent_Callback = void (*)(KPageWidget*, QWheelEvent*);
    using KPageWidget_KeyPressEvent_Callback = void (*)(KPageWidget*, QKeyEvent*);
    using KPageWidget_KeyReleaseEvent_Callback = void (*)(KPageWidget*, QKeyEvent*);
    using KPageWidget_FocusInEvent_Callback = void (*)(KPageWidget*, QFocusEvent*);
    using KPageWidget_FocusOutEvent_Callback = void (*)(KPageWidget*, QFocusEvent*);
    using KPageWidget_EnterEvent_Callback = void (*)(KPageWidget*, QEnterEvent*);
    using KPageWidget_LeaveEvent_Callback = void (*)(KPageWidget*, QEvent*);
    using KPageWidget_PaintEvent_Callback = void (*)(KPageWidget*, QPaintEvent*);
    using KPageWidget_MoveEvent_Callback = void (*)(KPageWidget*, QMoveEvent*);
    using KPageWidget_ResizeEvent_Callback = void (*)(KPageWidget*, QResizeEvent*);
    using KPageWidget_CloseEvent_Callback = void (*)(KPageWidget*, QCloseEvent*);
    using KPageWidget_ContextMenuEvent_Callback = void (*)(KPageWidget*, QContextMenuEvent*);
    using KPageWidget_TabletEvent_Callback = void (*)(KPageWidget*, QTabletEvent*);
    using KPageWidget_ActionEvent_Callback = void (*)(KPageWidget*, QActionEvent*);
    using KPageWidget_DragEnterEvent_Callback = void (*)(KPageWidget*, QDragEnterEvent*);
    using KPageWidget_DragMoveEvent_Callback = void (*)(KPageWidget*, QDragMoveEvent*);
    using KPageWidget_DragLeaveEvent_Callback = void (*)(KPageWidget*, QDragLeaveEvent*);
    using KPageWidget_DropEvent_Callback = void (*)(KPageWidget*, QDropEvent*);
    using KPageWidget_ShowEvent_Callback = void (*)(KPageWidget*, QShowEvent*);
    using KPageWidget_HideEvent_Callback = void (*)(KPageWidget*, QHideEvent*);
    using KPageWidget_NativeEvent_Callback = bool (*)(KPageWidget*, libqt_string, void*, intptr_t*);
    using KPageWidget_ChangeEvent_Callback = void (*)(KPageWidget*, QEvent*);
    using KPageWidget_Metric_Callback = int (*)(const KPageWidget*, int);
    using KPageWidget_InitPainter_Callback = void (*)(const KPageWidget*, QPainter*);
    using KPageWidget_Redirected_Callback = QPaintDevice* (*)(const KPageWidget*, QPoint*);
    using KPageWidget_SharedPainter_Callback = QPainter* (*)();
    using KPageWidget_InputMethodEvent_Callback = void (*)(KPageWidget*, QInputMethodEvent*);
    using KPageWidget_InputMethodQuery_Callback = QVariant* (*)(const KPageWidget*, int);
    using KPageWidget_FocusNextPrevChild_Callback = bool (*)(KPageWidget*, bool);
    using KPageWidget_EventFilter_Callback = bool (*)(KPageWidget*, QObject*, QEvent*);
    using KPageWidget_TimerEvent_Callback = void (*)(KPageWidget*, QTimerEvent*);
    using KPageWidget_ChildEvent_Callback = void (*)(KPageWidget*, QChildEvent*);
    using KPageWidget_CustomEvent_Callback = void (*)(KPageWidget*, QEvent*);
    using KPageWidget_ConnectNotify_Callback = void (*)(KPageWidget*, QMetaMethod*);
    using KPageWidget_DisconnectNotify_Callback = void (*)(KPageWidget*, QMetaMethod*);
    using KPageWidget_UpdateMicroFocus_Callback = void (*)();
    using KPageWidget_Create_Callback = void (*)();
    using KPageWidget_Destroy_Callback = void (*)();
    using KPageWidget_FocusNextChild_Callback = bool (*)();
    using KPageWidget_FocusPreviousChild_Callback = bool (*)();
    using KPageWidget_Sender_Callback = QObject* (*)();
    using KPageWidget_SenderSignalIndex_Callback = int (*)();
    using KPageWidget_Receivers_Callback = int (*)(const KPageWidget*, const char*);
    using KPageWidget_IsSignalConnected_Callback = bool (*)(const KPageWidget*, QMetaMethod*);
    using KPageWidget_GetDecodedMetricF_Callback = double (*)(const KPageWidget*, int, int);

  protected:
    // Instance callback storage
    KPageWidget_Metacall_Callback kpagewidget_metacall_callback = nullptr;
    KPageWidget_CreateView_Callback kpagewidget_createview_callback = nullptr;
    KPageWidget_ShowPageHeader_Callback kpagewidget_showpageheader_callback = nullptr;
    KPageWidget_ViewPosition_Callback kpagewidget_viewposition_callback = nullptr;
    KPageWidget_DevType_Callback kpagewidget_devtype_callback = nullptr;
    KPageWidget_SetVisible_Callback kpagewidget_setvisible_callback = nullptr;
    KPageWidget_SizeHint_Callback kpagewidget_sizehint_callback = nullptr;
    KPageWidget_MinimumSizeHint_Callback kpagewidget_minimumsizehint_callback = nullptr;
    KPageWidget_HeightForWidth_Callback kpagewidget_heightforwidth_callback = nullptr;
    KPageWidget_HasHeightForWidth_Callback kpagewidget_hasheightforwidth_callback = nullptr;
    KPageWidget_PaintEngine_Callback kpagewidget_paintengine_callback = nullptr;
    KPageWidget_Event_Callback kpagewidget_event_callback = nullptr;
    KPageWidget_MousePressEvent_Callback kpagewidget_mousepressevent_callback = nullptr;
    KPageWidget_MouseReleaseEvent_Callback kpagewidget_mousereleaseevent_callback = nullptr;
    KPageWidget_MouseDoubleClickEvent_Callback kpagewidget_mousedoubleclickevent_callback = nullptr;
    KPageWidget_MouseMoveEvent_Callback kpagewidget_mousemoveevent_callback = nullptr;
    KPageWidget_WheelEvent_Callback kpagewidget_wheelevent_callback = nullptr;
    KPageWidget_KeyPressEvent_Callback kpagewidget_keypressevent_callback = nullptr;
    KPageWidget_KeyReleaseEvent_Callback kpagewidget_keyreleaseevent_callback = nullptr;
    KPageWidget_FocusInEvent_Callback kpagewidget_focusinevent_callback = nullptr;
    KPageWidget_FocusOutEvent_Callback kpagewidget_focusoutevent_callback = nullptr;
    KPageWidget_EnterEvent_Callback kpagewidget_enterevent_callback = nullptr;
    KPageWidget_LeaveEvent_Callback kpagewidget_leaveevent_callback = nullptr;
    KPageWidget_PaintEvent_Callback kpagewidget_paintevent_callback = nullptr;
    KPageWidget_MoveEvent_Callback kpagewidget_moveevent_callback = nullptr;
    KPageWidget_ResizeEvent_Callback kpagewidget_resizeevent_callback = nullptr;
    KPageWidget_CloseEvent_Callback kpagewidget_closeevent_callback = nullptr;
    KPageWidget_ContextMenuEvent_Callback kpagewidget_contextmenuevent_callback = nullptr;
    KPageWidget_TabletEvent_Callback kpagewidget_tabletevent_callback = nullptr;
    KPageWidget_ActionEvent_Callback kpagewidget_actionevent_callback = nullptr;
    KPageWidget_DragEnterEvent_Callback kpagewidget_dragenterevent_callback = nullptr;
    KPageWidget_DragMoveEvent_Callback kpagewidget_dragmoveevent_callback = nullptr;
    KPageWidget_DragLeaveEvent_Callback kpagewidget_dragleaveevent_callback = nullptr;
    KPageWidget_DropEvent_Callback kpagewidget_dropevent_callback = nullptr;
    KPageWidget_ShowEvent_Callback kpagewidget_showevent_callback = nullptr;
    KPageWidget_HideEvent_Callback kpagewidget_hideevent_callback = nullptr;
    KPageWidget_NativeEvent_Callback kpagewidget_nativeevent_callback = nullptr;
    KPageWidget_ChangeEvent_Callback kpagewidget_changeevent_callback = nullptr;
    KPageWidget_Metric_Callback kpagewidget_metric_callback = nullptr;
    KPageWidget_InitPainter_Callback kpagewidget_initpainter_callback = nullptr;
    KPageWidget_Redirected_Callback kpagewidget_redirected_callback = nullptr;
    KPageWidget_SharedPainter_Callback kpagewidget_sharedpainter_callback = nullptr;
    KPageWidget_InputMethodEvent_Callback kpagewidget_inputmethodevent_callback = nullptr;
    KPageWidget_InputMethodQuery_Callback kpagewidget_inputmethodquery_callback = nullptr;
    KPageWidget_FocusNextPrevChild_Callback kpagewidget_focusnextprevchild_callback = nullptr;
    KPageWidget_EventFilter_Callback kpagewidget_eventfilter_callback = nullptr;
    KPageWidget_TimerEvent_Callback kpagewidget_timerevent_callback = nullptr;
    KPageWidget_ChildEvent_Callback kpagewidget_childevent_callback = nullptr;
    KPageWidget_CustomEvent_Callback kpagewidget_customevent_callback = nullptr;
    KPageWidget_ConnectNotify_Callback kpagewidget_connectnotify_callback = nullptr;
    KPageWidget_DisconnectNotify_Callback kpagewidget_disconnectnotify_callback = nullptr;
    KPageWidget_UpdateMicroFocus_Callback kpagewidget_updatemicrofocus_callback = nullptr;
    KPageWidget_Create_Callback kpagewidget_create_callback = nullptr;
    KPageWidget_Destroy_Callback kpagewidget_destroy_callback = nullptr;
    KPageWidget_FocusNextChild_Callback kpagewidget_focusnextchild_callback = nullptr;
    KPageWidget_FocusPreviousChild_Callback kpagewidget_focuspreviouschild_callback = nullptr;
    KPageWidget_Sender_Callback kpagewidget_sender_callback = nullptr;
    KPageWidget_SenderSignalIndex_Callback kpagewidget_sendersignalindex_callback = nullptr;
    KPageWidget_Receivers_Callback kpagewidget_receivers_callback = nullptr;
    KPageWidget_IsSignalConnected_Callback kpagewidget_issignalconnected_callback = nullptr;
    KPageWidget_GetDecodedMetricF_Callback kpagewidget_getdecodedmetricf_callback = nullptr;

    // Instance base flags
    mutable bool kpagewidget_metacall_isbase = false;
    mutable bool kpagewidget_createview_isbase = false;
    mutable bool kpagewidget_showpageheader_isbase = false;
    mutable bool kpagewidget_viewposition_isbase = false;
    mutable bool kpagewidget_devtype_isbase = false;
    mutable bool kpagewidget_setvisible_isbase = false;
    mutable bool kpagewidget_sizehint_isbase = false;
    mutable bool kpagewidget_minimumsizehint_isbase = false;
    mutable bool kpagewidget_heightforwidth_isbase = false;
    mutable bool kpagewidget_hasheightforwidth_isbase = false;
    mutable bool kpagewidget_paintengine_isbase = false;
    mutable bool kpagewidget_event_isbase = false;
    mutable bool kpagewidget_mousepressevent_isbase = false;
    mutable bool kpagewidget_mousereleaseevent_isbase = false;
    mutable bool kpagewidget_mousedoubleclickevent_isbase = false;
    mutable bool kpagewidget_mousemoveevent_isbase = false;
    mutable bool kpagewidget_wheelevent_isbase = false;
    mutable bool kpagewidget_keypressevent_isbase = false;
    mutable bool kpagewidget_keyreleaseevent_isbase = false;
    mutable bool kpagewidget_focusinevent_isbase = false;
    mutable bool kpagewidget_focusoutevent_isbase = false;
    mutable bool kpagewidget_enterevent_isbase = false;
    mutable bool kpagewidget_leaveevent_isbase = false;
    mutable bool kpagewidget_paintevent_isbase = false;
    mutable bool kpagewidget_moveevent_isbase = false;
    mutable bool kpagewidget_resizeevent_isbase = false;
    mutable bool kpagewidget_closeevent_isbase = false;
    mutable bool kpagewidget_contextmenuevent_isbase = false;
    mutable bool kpagewidget_tabletevent_isbase = false;
    mutable bool kpagewidget_actionevent_isbase = false;
    mutable bool kpagewidget_dragenterevent_isbase = false;
    mutable bool kpagewidget_dragmoveevent_isbase = false;
    mutable bool kpagewidget_dragleaveevent_isbase = false;
    mutable bool kpagewidget_dropevent_isbase = false;
    mutable bool kpagewidget_showevent_isbase = false;
    mutable bool kpagewidget_hideevent_isbase = false;
    mutable bool kpagewidget_nativeevent_isbase = false;
    mutable bool kpagewidget_changeevent_isbase = false;
    mutable bool kpagewidget_metric_isbase = false;
    mutable bool kpagewidget_initpainter_isbase = false;
    mutable bool kpagewidget_redirected_isbase = false;
    mutable bool kpagewidget_sharedpainter_isbase = false;
    mutable bool kpagewidget_inputmethodevent_isbase = false;
    mutable bool kpagewidget_inputmethodquery_isbase = false;
    mutable bool kpagewidget_focusnextprevchild_isbase = false;
    mutable bool kpagewidget_eventfilter_isbase = false;
    mutable bool kpagewidget_timerevent_isbase = false;
    mutable bool kpagewidget_childevent_isbase = false;
    mutable bool kpagewidget_customevent_isbase = false;
    mutable bool kpagewidget_connectnotify_isbase = false;
    mutable bool kpagewidget_disconnectnotify_isbase = false;
    mutable bool kpagewidget_updatemicrofocus_isbase = false;
    mutable bool kpagewidget_create_isbase = false;
    mutable bool kpagewidget_destroy_isbase = false;
    mutable bool kpagewidget_focusnextchild_isbase = false;
    mutable bool kpagewidget_focuspreviouschild_isbase = false;
    mutable bool kpagewidget_sender_isbase = false;
    mutable bool kpagewidget_sendersignalindex_isbase = false;
    mutable bool kpagewidget_receivers_isbase = false;
    mutable bool kpagewidget_issignalconnected_isbase = false;
    mutable bool kpagewidget_getdecodedmetricf_isbase = false;

  public:
    VirtualKPageWidget(QWidget* parent) : KPageWidget(parent) {};
    VirtualKPageWidget() : KPageWidget() {};

    ~VirtualKPageWidget() {
        kpagewidget_metacall_callback = nullptr;
        kpagewidget_createview_callback = nullptr;
        kpagewidget_showpageheader_callback = nullptr;
        kpagewidget_viewposition_callback = nullptr;
        kpagewidget_devtype_callback = nullptr;
        kpagewidget_setvisible_callback = nullptr;
        kpagewidget_sizehint_callback = nullptr;
        kpagewidget_minimumsizehint_callback = nullptr;
        kpagewidget_heightforwidth_callback = nullptr;
        kpagewidget_hasheightforwidth_callback = nullptr;
        kpagewidget_paintengine_callback = nullptr;
        kpagewidget_event_callback = nullptr;
        kpagewidget_mousepressevent_callback = nullptr;
        kpagewidget_mousereleaseevent_callback = nullptr;
        kpagewidget_mousedoubleclickevent_callback = nullptr;
        kpagewidget_mousemoveevent_callback = nullptr;
        kpagewidget_wheelevent_callback = nullptr;
        kpagewidget_keypressevent_callback = nullptr;
        kpagewidget_keyreleaseevent_callback = nullptr;
        kpagewidget_focusinevent_callback = nullptr;
        kpagewidget_focusoutevent_callback = nullptr;
        kpagewidget_enterevent_callback = nullptr;
        kpagewidget_leaveevent_callback = nullptr;
        kpagewidget_paintevent_callback = nullptr;
        kpagewidget_moveevent_callback = nullptr;
        kpagewidget_resizeevent_callback = nullptr;
        kpagewidget_closeevent_callback = nullptr;
        kpagewidget_contextmenuevent_callback = nullptr;
        kpagewidget_tabletevent_callback = nullptr;
        kpagewidget_actionevent_callback = nullptr;
        kpagewidget_dragenterevent_callback = nullptr;
        kpagewidget_dragmoveevent_callback = nullptr;
        kpagewidget_dragleaveevent_callback = nullptr;
        kpagewidget_dropevent_callback = nullptr;
        kpagewidget_showevent_callback = nullptr;
        kpagewidget_hideevent_callback = nullptr;
        kpagewidget_nativeevent_callback = nullptr;
        kpagewidget_changeevent_callback = nullptr;
        kpagewidget_metric_callback = nullptr;
        kpagewidget_initpainter_callback = nullptr;
        kpagewidget_redirected_callback = nullptr;
        kpagewidget_sharedpainter_callback = nullptr;
        kpagewidget_inputmethodevent_callback = nullptr;
        kpagewidget_inputmethodquery_callback = nullptr;
        kpagewidget_focusnextprevchild_callback = nullptr;
        kpagewidget_eventfilter_callback = nullptr;
        kpagewidget_timerevent_callback = nullptr;
        kpagewidget_childevent_callback = nullptr;
        kpagewidget_customevent_callback = nullptr;
        kpagewidget_connectnotify_callback = nullptr;
        kpagewidget_disconnectnotify_callback = nullptr;
        kpagewidget_updatemicrofocus_callback = nullptr;
        kpagewidget_create_callback = nullptr;
        kpagewidget_destroy_callback = nullptr;
        kpagewidget_focusnextchild_callback = nullptr;
        kpagewidget_focuspreviouschild_callback = nullptr;
        kpagewidget_sender_callback = nullptr;
        kpagewidget_sendersignalindex_callback = nullptr;
        kpagewidget_receivers_callback = nullptr;
        kpagewidget_issignalconnected_callback = nullptr;
        kpagewidget_getdecodedmetricf_callback = nullptr;
    }

    // Callback setters
    inline void setKPageWidget_Metacall_Callback(KPageWidget_Metacall_Callback cb) { kpagewidget_metacall_callback = cb; }
    inline void setKPageWidget_CreateView_Callback(KPageWidget_CreateView_Callback cb) { kpagewidget_createview_callback = cb; }
    inline void setKPageWidget_ShowPageHeader_Callback(KPageWidget_ShowPageHeader_Callback cb) { kpagewidget_showpageheader_callback = cb; }
    inline void setKPageWidget_ViewPosition_Callback(KPageWidget_ViewPosition_Callback cb) { kpagewidget_viewposition_callback = cb; }
    inline void setKPageWidget_DevType_Callback(KPageWidget_DevType_Callback cb) { kpagewidget_devtype_callback = cb; }
    inline void setKPageWidget_SetVisible_Callback(KPageWidget_SetVisible_Callback cb) { kpagewidget_setvisible_callback = cb; }
    inline void setKPageWidget_SizeHint_Callback(KPageWidget_SizeHint_Callback cb) { kpagewidget_sizehint_callback = cb; }
    inline void setKPageWidget_MinimumSizeHint_Callback(KPageWidget_MinimumSizeHint_Callback cb) { kpagewidget_minimumsizehint_callback = cb; }
    inline void setKPageWidget_HeightForWidth_Callback(KPageWidget_HeightForWidth_Callback cb) { kpagewidget_heightforwidth_callback = cb; }
    inline void setKPageWidget_HasHeightForWidth_Callback(KPageWidget_HasHeightForWidth_Callback cb) { kpagewidget_hasheightforwidth_callback = cb; }
    inline void setKPageWidget_PaintEngine_Callback(KPageWidget_PaintEngine_Callback cb) { kpagewidget_paintengine_callback = cb; }
    inline void setKPageWidget_Event_Callback(KPageWidget_Event_Callback cb) { kpagewidget_event_callback = cb; }
    inline void setKPageWidget_MousePressEvent_Callback(KPageWidget_MousePressEvent_Callback cb) { kpagewidget_mousepressevent_callback = cb; }
    inline void setKPageWidget_MouseReleaseEvent_Callback(KPageWidget_MouseReleaseEvent_Callback cb) { kpagewidget_mousereleaseevent_callback = cb; }
    inline void setKPageWidget_MouseDoubleClickEvent_Callback(KPageWidget_MouseDoubleClickEvent_Callback cb) { kpagewidget_mousedoubleclickevent_callback = cb; }
    inline void setKPageWidget_MouseMoveEvent_Callback(KPageWidget_MouseMoveEvent_Callback cb) { kpagewidget_mousemoveevent_callback = cb; }
    inline void setKPageWidget_WheelEvent_Callback(KPageWidget_WheelEvent_Callback cb) { kpagewidget_wheelevent_callback = cb; }
    inline void setKPageWidget_KeyPressEvent_Callback(KPageWidget_KeyPressEvent_Callback cb) { kpagewidget_keypressevent_callback = cb; }
    inline void setKPageWidget_KeyReleaseEvent_Callback(KPageWidget_KeyReleaseEvent_Callback cb) { kpagewidget_keyreleaseevent_callback = cb; }
    inline void setKPageWidget_FocusInEvent_Callback(KPageWidget_FocusInEvent_Callback cb) { kpagewidget_focusinevent_callback = cb; }
    inline void setKPageWidget_FocusOutEvent_Callback(KPageWidget_FocusOutEvent_Callback cb) { kpagewidget_focusoutevent_callback = cb; }
    inline void setKPageWidget_EnterEvent_Callback(KPageWidget_EnterEvent_Callback cb) { kpagewidget_enterevent_callback = cb; }
    inline void setKPageWidget_LeaveEvent_Callback(KPageWidget_LeaveEvent_Callback cb) { kpagewidget_leaveevent_callback = cb; }
    inline void setKPageWidget_PaintEvent_Callback(KPageWidget_PaintEvent_Callback cb) { kpagewidget_paintevent_callback = cb; }
    inline void setKPageWidget_MoveEvent_Callback(KPageWidget_MoveEvent_Callback cb) { kpagewidget_moveevent_callback = cb; }
    inline void setKPageWidget_ResizeEvent_Callback(KPageWidget_ResizeEvent_Callback cb) { kpagewidget_resizeevent_callback = cb; }
    inline void setKPageWidget_CloseEvent_Callback(KPageWidget_CloseEvent_Callback cb) { kpagewidget_closeevent_callback = cb; }
    inline void setKPageWidget_ContextMenuEvent_Callback(KPageWidget_ContextMenuEvent_Callback cb) { kpagewidget_contextmenuevent_callback = cb; }
    inline void setKPageWidget_TabletEvent_Callback(KPageWidget_TabletEvent_Callback cb) { kpagewidget_tabletevent_callback = cb; }
    inline void setKPageWidget_ActionEvent_Callback(KPageWidget_ActionEvent_Callback cb) { kpagewidget_actionevent_callback = cb; }
    inline void setKPageWidget_DragEnterEvent_Callback(KPageWidget_DragEnterEvent_Callback cb) { kpagewidget_dragenterevent_callback = cb; }
    inline void setKPageWidget_DragMoveEvent_Callback(KPageWidget_DragMoveEvent_Callback cb) { kpagewidget_dragmoveevent_callback = cb; }
    inline void setKPageWidget_DragLeaveEvent_Callback(KPageWidget_DragLeaveEvent_Callback cb) { kpagewidget_dragleaveevent_callback = cb; }
    inline void setKPageWidget_DropEvent_Callback(KPageWidget_DropEvent_Callback cb) { kpagewidget_dropevent_callback = cb; }
    inline void setKPageWidget_ShowEvent_Callback(KPageWidget_ShowEvent_Callback cb) { kpagewidget_showevent_callback = cb; }
    inline void setKPageWidget_HideEvent_Callback(KPageWidget_HideEvent_Callback cb) { kpagewidget_hideevent_callback = cb; }
    inline void setKPageWidget_NativeEvent_Callback(KPageWidget_NativeEvent_Callback cb) { kpagewidget_nativeevent_callback = cb; }
    inline void setKPageWidget_ChangeEvent_Callback(KPageWidget_ChangeEvent_Callback cb) { kpagewidget_changeevent_callback = cb; }
    inline void setKPageWidget_Metric_Callback(KPageWidget_Metric_Callback cb) { kpagewidget_metric_callback = cb; }
    inline void setKPageWidget_InitPainter_Callback(KPageWidget_InitPainter_Callback cb) { kpagewidget_initpainter_callback = cb; }
    inline void setKPageWidget_Redirected_Callback(KPageWidget_Redirected_Callback cb) { kpagewidget_redirected_callback = cb; }
    inline void setKPageWidget_SharedPainter_Callback(KPageWidget_SharedPainter_Callback cb) { kpagewidget_sharedpainter_callback = cb; }
    inline void setKPageWidget_InputMethodEvent_Callback(KPageWidget_InputMethodEvent_Callback cb) { kpagewidget_inputmethodevent_callback = cb; }
    inline void setKPageWidget_InputMethodQuery_Callback(KPageWidget_InputMethodQuery_Callback cb) { kpagewidget_inputmethodquery_callback = cb; }
    inline void setKPageWidget_FocusNextPrevChild_Callback(KPageWidget_FocusNextPrevChild_Callback cb) { kpagewidget_focusnextprevchild_callback = cb; }
    inline void setKPageWidget_EventFilter_Callback(KPageWidget_EventFilter_Callback cb) { kpagewidget_eventfilter_callback = cb; }
    inline void setKPageWidget_TimerEvent_Callback(KPageWidget_TimerEvent_Callback cb) { kpagewidget_timerevent_callback = cb; }
    inline void setKPageWidget_ChildEvent_Callback(KPageWidget_ChildEvent_Callback cb) { kpagewidget_childevent_callback = cb; }
    inline void setKPageWidget_CustomEvent_Callback(KPageWidget_CustomEvent_Callback cb) { kpagewidget_customevent_callback = cb; }
    inline void setKPageWidget_ConnectNotify_Callback(KPageWidget_ConnectNotify_Callback cb) { kpagewidget_connectnotify_callback = cb; }
    inline void setKPageWidget_DisconnectNotify_Callback(KPageWidget_DisconnectNotify_Callback cb) { kpagewidget_disconnectnotify_callback = cb; }
    inline void setKPageWidget_UpdateMicroFocus_Callback(KPageWidget_UpdateMicroFocus_Callback cb) { kpagewidget_updatemicrofocus_callback = cb; }
    inline void setKPageWidget_Create_Callback(KPageWidget_Create_Callback cb) { kpagewidget_create_callback = cb; }
    inline void setKPageWidget_Destroy_Callback(KPageWidget_Destroy_Callback cb) { kpagewidget_destroy_callback = cb; }
    inline void setKPageWidget_FocusNextChild_Callback(KPageWidget_FocusNextChild_Callback cb) { kpagewidget_focusnextchild_callback = cb; }
    inline void setKPageWidget_FocusPreviousChild_Callback(KPageWidget_FocusPreviousChild_Callback cb) { kpagewidget_focuspreviouschild_callback = cb; }
    inline void setKPageWidget_Sender_Callback(KPageWidget_Sender_Callback cb) { kpagewidget_sender_callback = cb; }
    inline void setKPageWidget_SenderSignalIndex_Callback(KPageWidget_SenderSignalIndex_Callback cb) { kpagewidget_sendersignalindex_callback = cb; }
    inline void setKPageWidget_Receivers_Callback(KPageWidget_Receivers_Callback cb) { kpagewidget_receivers_callback = cb; }
    inline void setKPageWidget_IsSignalConnected_Callback(KPageWidget_IsSignalConnected_Callback cb) { kpagewidget_issignalconnected_callback = cb; }
    inline void setKPageWidget_GetDecodedMetricF_Callback(KPageWidget_GetDecodedMetricF_Callback cb) { kpagewidget_getdecodedmetricf_callback = cb; }

    // Base flag setters
    inline void setKPageWidget_Metacall_IsBase(bool value) const { kpagewidget_metacall_isbase = value; }
    inline void setKPageWidget_CreateView_IsBase(bool value) const { kpagewidget_createview_isbase = value; }
    inline void setKPageWidget_ShowPageHeader_IsBase(bool value) const { kpagewidget_showpageheader_isbase = value; }
    inline void setKPageWidget_ViewPosition_IsBase(bool value) const { kpagewidget_viewposition_isbase = value; }
    inline void setKPageWidget_DevType_IsBase(bool value) const { kpagewidget_devtype_isbase = value; }
    inline void setKPageWidget_SetVisible_IsBase(bool value) const { kpagewidget_setvisible_isbase = value; }
    inline void setKPageWidget_SizeHint_IsBase(bool value) const { kpagewidget_sizehint_isbase = value; }
    inline void setKPageWidget_MinimumSizeHint_IsBase(bool value) const { kpagewidget_minimumsizehint_isbase = value; }
    inline void setKPageWidget_HeightForWidth_IsBase(bool value) const { kpagewidget_heightforwidth_isbase = value; }
    inline void setKPageWidget_HasHeightForWidth_IsBase(bool value) const { kpagewidget_hasheightforwidth_isbase = value; }
    inline void setKPageWidget_PaintEngine_IsBase(bool value) const { kpagewidget_paintengine_isbase = value; }
    inline void setKPageWidget_Event_IsBase(bool value) const { kpagewidget_event_isbase = value; }
    inline void setKPageWidget_MousePressEvent_IsBase(bool value) const { kpagewidget_mousepressevent_isbase = value; }
    inline void setKPageWidget_MouseReleaseEvent_IsBase(bool value) const { kpagewidget_mousereleaseevent_isbase = value; }
    inline void setKPageWidget_MouseDoubleClickEvent_IsBase(bool value) const { kpagewidget_mousedoubleclickevent_isbase = value; }
    inline void setKPageWidget_MouseMoveEvent_IsBase(bool value) const { kpagewidget_mousemoveevent_isbase = value; }
    inline void setKPageWidget_WheelEvent_IsBase(bool value) const { kpagewidget_wheelevent_isbase = value; }
    inline void setKPageWidget_KeyPressEvent_IsBase(bool value) const { kpagewidget_keypressevent_isbase = value; }
    inline void setKPageWidget_KeyReleaseEvent_IsBase(bool value) const { kpagewidget_keyreleaseevent_isbase = value; }
    inline void setKPageWidget_FocusInEvent_IsBase(bool value) const { kpagewidget_focusinevent_isbase = value; }
    inline void setKPageWidget_FocusOutEvent_IsBase(bool value) const { kpagewidget_focusoutevent_isbase = value; }
    inline void setKPageWidget_EnterEvent_IsBase(bool value) const { kpagewidget_enterevent_isbase = value; }
    inline void setKPageWidget_LeaveEvent_IsBase(bool value) const { kpagewidget_leaveevent_isbase = value; }
    inline void setKPageWidget_PaintEvent_IsBase(bool value) const { kpagewidget_paintevent_isbase = value; }
    inline void setKPageWidget_MoveEvent_IsBase(bool value) const { kpagewidget_moveevent_isbase = value; }
    inline void setKPageWidget_ResizeEvent_IsBase(bool value) const { kpagewidget_resizeevent_isbase = value; }
    inline void setKPageWidget_CloseEvent_IsBase(bool value) const { kpagewidget_closeevent_isbase = value; }
    inline void setKPageWidget_ContextMenuEvent_IsBase(bool value) const { kpagewidget_contextmenuevent_isbase = value; }
    inline void setKPageWidget_TabletEvent_IsBase(bool value) const { kpagewidget_tabletevent_isbase = value; }
    inline void setKPageWidget_ActionEvent_IsBase(bool value) const { kpagewidget_actionevent_isbase = value; }
    inline void setKPageWidget_DragEnterEvent_IsBase(bool value) const { kpagewidget_dragenterevent_isbase = value; }
    inline void setKPageWidget_DragMoveEvent_IsBase(bool value) const { kpagewidget_dragmoveevent_isbase = value; }
    inline void setKPageWidget_DragLeaveEvent_IsBase(bool value) const { kpagewidget_dragleaveevent_isbase = value; }
    inline void setKPageWidget_DropEvent_IsBase(bool value) const { kpagewidget_dropevent_isbase = value; }
    inline void setKPageWidget_ShowEvent_IsBase(bool value) const { kpagewidget_showevent_isbase = value; }
    inline void setKPageWidget_HideEvent_IsBase(bool value) const { kpagewidget_hideevent_isbase = value; }
    inline void setKPageWidget_NativeEvent_IsBase(bool value) const { kpagewidget_nativeevent_isbase = value; }
    inline void setKPageWidget_ChangeEvent_IsBase(bool value) const { kpagewidget_changeevent_isbase = value; }
    inline void setKPageWidget_Metric_IsBase(bool value) const { kpagewidget_metric_isbase = value; }
    inline void setKPageWidget_InitPainter_IsBase(bool value) const { kpagewidget_initpainter_isbase = value; }
    inline void setKPageWidget_Redirected_IsBase(bool value) const { kpagewidget_redirected_isbase = value; }
    inline void setKPageWidget_SharedPainter_IsBase(bool value) const { kpagewidget_sharedpainter_isbase = value; }
    inline void setKPageWidget_InputMethodEvent_IsBase(bool value) const { kpagewidget_inputmethodevent_isbase = value; }
    inline void setKPageWidget_InputMethodQuery_IsBase(bool value) const { kpagewidget_inputmethodquery_isbase = value; }
    inline void setKPageWidget_FocusNextPrevChild_IsBase(bool value) const { kpagewidget_focusnextprevchild_isbase = value; }
    inline void setKPageWidget_EventFilter_IsBase(bool value) const { kpagewidget_eventfilter_isbase = value; }
    inline void setKPageWidget_TimerEvent_IsBase(bool value) const { kpagewidget_timerevent_isbase = value; }
    inline void setKPageWidget_ChildEvent_IsBase(bool value) const { kpagewidget_childevent_isbase = value; }
    inline void setKPageWidget_CustomEvent_IsBase(bool value) const { kpagewidget_customevent_isbase = value; }
    inline void setKPageWidget_ConnectNotify_IsBase(bool value) const { kpagewidget_connectnotify_isbase = value; }
    inline void setKPageWidget_DisconnectNotify_IsBase(bool value) const { kpagewidget_disconnectnotify_isbase = value; }
    inline void setKPageWidget_UpdateMicroFocus_IsBase(bool value) const { kpagewidget_updatemicrofocus_isbase = value; }
    inline void setKPageWidget_Create_IsBase(bool value) const { kpagewidget_create_isbase = value; }
    inline void setKPageWidget_Destroy_IsBase(bool value) const { kpagewidget_destroy_isbase = value; }
    inline void setKPageWidget_FocusNextChild_IsBase(bool value) const { kpagewidget_focusnextchild_isbase = value; }
    inline void setKPageWidget_FocusPreviousChild_IsBase(bool value) const { kpagewidget_focuspreviouschild_isbase = value; }
    inline void setKPageWidget_Sender_IsBase(bool value) const { kpagewidget_sender_isbase = value; }
    inline void setKPageWidget_SenderSignalIndex_IsBase(bool value) const { kpagewidget_sendersignalindex_isbase = value; }
    inline void setKPageWidget_Receivers_IsBase(bool value) const { kpagewidget_receivers_isbase = value; }
    inline void setKPageWidget_IsSignalConnected_IsBase(bool value) const { kpagewidget_issignalconnected_isbase = value; }
    inline void setKPageWidget_GetDecodedMetricF_IsBase(bool value) const { kpagewidget_getdecodedmetricf_isbase = value; }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (kpagewidget_metacall_isbase) {
            kpagewidget_metacall_isbase = false;
            return KPageWidget::qt_metacall(param1, param2, param3);
        } else if (kpagewidget_metacall_callback != nullptr) {
            int cbval1 = static_cast<int>(param1);
            int cbval2 = param2;
            void** cbval3 = param3;

            int callback_ret = kpagewidget_metacall_callback(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        } else {
            return KPageWidget::qt_metacall(param1, param2, param3);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QAbstractItemView* createView() override {
        if (kpagewidget_createview_isbase) {
            kpagewidget_createview_isbase = false;
            return KPageWidget::createView();
        } else if (kpagewidget_createview_callback != nullptr) {
            QAbstractItemView* callback_ret = kpagewidget_createview_callback();
            return callback_ret;
        } else {
            return KPageWidget::createView();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool showPageHeader() const override {
        if (kpagewidget_showpageheader_isbase) {
            kpagewidget_showpageheader_isbase = false;
            return KPageWidget::showPageHeader();
        } else if (kpagewidget_showpageheader_callback != nullptr) {
            bool callback_ret = kpagewidget_showpageheader_callback();
            return callback_ret;
        } else {
            return KPageWidget::showPageHeader();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual Qt::Alignment viewPosition() const override {
        if (kpagewidget_viewposition_isbase) {
            kpagewidget_viewposition_isbase = false;
            return KPageWidget::viewPosition();
        } else if (kpagewidget_viewposition_callback != nullptr) {
            int callback_ret = kpagewidget_viewposition_callback();
            return static_cast<Qt::Alignment>(callback_ret);
        } else {
            return KPageWidget::viewPosition();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual int devType() const override {
        if (kpagewidget_devtype_isbase) {
            kpagewidget_devtype_isbase = false;
            return KPageWidget::devType();
        } else if (kpagewidget_devtype_callback != nullptr) {
            int callback_ret = kpagewidget_devtype_callback();
            return static_cast<int>(callback_ret);
        } else {
            return KPageWidget::devType();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void setVisible(bool visible) override {
        if (kpagewidget_setvisible_isbase) {
            kpagewidget_setvisible_isbase = false;
            KPageWidget::setVisible(visible);
        } else if (kpagewidget_setvisible_callback != nullptr) {
            bool cbval1 = visible;

            kpagewidget_setvisible_callback(this, cbval1);
        } else {
            KPageWidget::setVisible(visible);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QSize sizeHint() const override {
        if (kpagewidget_sizehint_isbase) {
            kpagewidget_sizehint_isbase = false;
            return KPageWidget::sizeHint();
        } else if (kpagewidget_sizehint_callback != nullptr) {
            QSize* callback_ret = kpagewidget_sizehint_callback();
            return *callback_ret;
        } else {
            return KPageWidget::sizeHint();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QSize minimumSizeHint() const override {
        if (kpagewidget_minimumsizehint_isbase) {
            kpagewidget_minimumsizehint_isbase = false;
            return KPageWidget::minimumSizeHint();
        } else if (kpagewidget_minimumsizehint_callback != nullptr) {
            QSize* callback_ret = kpagewidget_minimumsizehint_callback();
            return *callback_ret;
        } else {
            return KPageWidget::minimumSizeHint();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual int heightForWidth(int param1) const override {
        if (kpagewidget_heightforwidth_isbase) {
            kpagewidget_heightforwidth_isbase = false;
            return KPageWidget::heightForWidth(param1);
        } else if (kpagewidget_heightforwidth_callback != nullptr) {
            int cbval1 = param1;

            int callback_ret = kpagewidget_heightforwidth_callback(this, cbval1);
            return static_cast<int>(callback_ret);
        } else {
            return KPageWidget::heightForWidth(param1);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool hasHeightForWidth() const override {
        if (kpagewidget_hasheightforwidth_isbase) {
            kpagewidget_hasheightforwidth_isbase = false;
            return KPageWidget::hasHeightForWidth();
        } else if (kpagewidget_hasheightforwidth_callback != nullptr) {
            bool callback_ret = kpagewidget_hasheightforwidth_callback();
            return callback_ret;
        } else {
            return KPageWidget::hasHeightForWidth();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QPaintEngine* paintEngine() const override {
        if (kpagewidget_paintengine_isbase) {
            kpagewidget_paintengine_isbase = false;
            return KPageWidget::paintEngine();
        } else if (kpagewidget_paintengine_callback != nullptr) {
            QPaintEngine* callback_ret = kpagewidget_paintengine_callback();
            return callback_ret;
        } else {
            return KPageWidget::paintEngine();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* event) override {
        if (kpagewidget_event_isbase) {
            kpagewidget_event_isbase = false;
            return KPageWidget::event(event);
        } else if (kpagewidget_event_callback != nullptr) {
            QEvent* cbval1 = event;

            bool callback_ret = kpagewidget_event_callback(this, cbval1);
            return callback_ret;
        } else {
            return KPageWidget::event(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void mousePressEvent(QMouseEvent* event) override {
        if (kpagewidget_mousepressevent_isbase) {
            kpagewidget_mousepressevent_isbase = false;
            KPageWidget::mousePressEvent(event);
        } else if (kpagewidget_mousepressevent_callback != nullptr) {
            QMouseEvent* cbval1 = event;

            kpagewidget_mousepressevent_callback(this, cbval1);
        } else {
            KPageWidget::mousePressEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseReleaseEvent(QMouseEvent* event) override {
        if (kpagewidget_mousereleaseevent_isbase) {
            kpagewidget_mousereleaseevent_isbase = false;
            KPageWidget::mouseReleaseEvent(event);
        } else if (kpagewidget_mousereleaseevent_callback != nullptr) {
            QMouseEvent* cbval1 = event;

            kpagewidget_mousereleaseevent_callback(this, cbval1);
        } else {
            KPageWidget::mouseReleaseEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseDoubleClickEvent(QMouseEvent* event) override {
        if (kpagewidget_mousedoubleclickevent_isbase) {
            kpagewidget_mousedoubleclickevent_isbase = false;
            KPageWidget::mouseDoubleClickEvent(event);
        } else if (kpagewidget_mousedoubleclickevent_callback != nullptr) {
            QMouseEvent* cbval1 = event;

            kpagewidget_mousedoubleclickevent_callback(this, cbval1);
        } else {
            KPageWidget::mouseDoubleClickEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseMoveEvent(QMouseEvent* event) override {
        if (kpagewidget_mousemoveevent_isbase) {
            kpagewidget_mousemoveevent_isbase = false;
            KPageWidget::mouseMoveEvent(event);
        } else if (kpagewidget_mousemoveevent_callback != nullptr) {
            QMouseEvent* cbval1 = event;

            kpagewidget_mousemoveevent_callback(this, cbval1);
        } else {
            KPageWidget::mouseMoveEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void wheelEvent(QWheelEvent* event) override {
        if (kpagewidget_wheelevent_isbase) {
            kpagewidget_wheelevent_isbase = false;
            KPageWidget::wheelEvent(event);
        } else if (kpagewidget_wheelevent_callback != nullptr) {
            QWheelEvent* cbval1 = event;

            kpagewidget_wheelevent_callback(this, cbval1);
        } else {
            KPageWidget::wheelEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void keyPressEvent(QKeyEvent* event) override {
        if (kpagewidget_keypressevent_isbase) {
            kpagewidget_keypressevent_isbase = false;
            KPageWidget::keyPressEvent(event);
        } else if (kpagewidget_keypressevent_callback != nullptr) {
            QKeyEvent* cbval1 = event;

            kpagewidget_keypressevent_callback(this, cbval1);
        } else {
            KPageWidget::keyPressEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void keyReleaseEvent(QKeyEvent* event) override {
        if (kpagewidget_keyreleaseevent_isbase) {
            kpagewidget_keyreleaseevent_isbase = false;
            KPageWidget::keyReleaseEvent(event);
        } else if (kpagewidget_keyreleaseevent_callback != nullptr) {
            QKeyEvent* cbval1 = event;

            kpagewidget_keyreleaseevent_callback(this, cbval1);
        } else {
            KPageWidget::keyReleaseEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void focusInEvent(QFocusEvent* event) override {
        if (kpagewidget_focusinevent_isbase) {
            kpagewidget_focusinevent_isbase = false;
            KPageWidget::focusInEvent(event);
        } else if (kpagewidget_focusinevent_callback != nullptr) {
            QFocusEvent* cbval1 = event;

            kpagewidget_focusinevent_callback(this, cbval1);
        } else {
            KPageWidget::focusInEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void focusOutEvent(QFocusEvent* event) override {
        if (kpagewidget_focusoutevent_isbase) {
            kpagewidget_focusoutevent_isbase = false;
            KPageWidget::focusOutEvent(event);
        } else if (kpagewidget_focusoutevent_callback != nullptr) {
            QFocusEvent* cbval1 = event;

            kpagewidget_focusoutevent_callback(this, cbval1);
        } else {
            KPageWidget::focusOutEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void enterEvent(QEnterEvent* event) override {
        if (kpagewidget_enterevent_isbase) {
            kpagewidget_enterevent_isbase = false;
            KPageWidget::enterEvent(event);
        } else if (kpagewidget_enterevent_callback != nullptr) {
            QEnterEvent* cbval1 = event;

            kpagewidget_enterevent_callback(this, cbval1);
        } else {
            KPageWidget::enterEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void leaveEvent(QEvent* event) override {
        if (kpagewidget_leaveevent_isbase) {
            kpagewidget_leaveevent_isbase = false;
            KPageWidget::leaveEvent(event);
        } else if (kpagewidget_leaveevent_callback != nullptr) {
            QEvent* cbval1 = event;

            kpagewidget_leaveevent_callback(this, cbval1);
        } else {
            KPageWidget::leaveEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void paintEvent(QPaintEvent* event) override {
        if (kpagewidget_paintevent_isbase) {
            kpagewidget_paintevent_isbase = false;
            KPageWidget::paintEvent(event);
        } else if (kpagewidget_paintevent_callback != nullptr) {
            QPaintEvent* cbval1 = event;

            kpagewidget_paintevent_callback(this, cbval1);
        } else {
            KPageWidget::paintEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void moveEvent(QMoveEvent* event) override {
        if (kpagewidget_moveevent_isbase) {
            kpagewidget_moveevent_isbase = false;
            KPageWidget::moveEvent(event);
        } else if (kpagewidget_moveevent_callback != nullptr) {
            QMoveEvent* cbval1 = event;

            kpagewidget_moveevent_callback(this, cbval1);
        } else {
            KPageWidget::moveEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void resizeEvent(QResizeEvent* event) override {
        if (kpagewidget_resizeevent_isbase) {
            kpagewidget_resizeevent_isbase = false;
            KPageWidget::resizeEvent(event);
        } else if (kpagewidget_resizeevent_callback != nullptr) {
            QResizeEvent* cbval1 = event;

            kpagewidget_resizeevent_callback(this, cbval1);
        } else {
            KPageWidget::resizeEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void closeEvent(QCloseEvent* event) override {
        if (kpagewidget_closeevent_isbase) {
            kpagewidget_closeevent_isbase = false;
            KPageWidget::closeEvent(event);
        } else if (kpagewidget_closeevent_callback != nullptr) {
            QCloseEvent* cbval1 = event;

            kpagewidget_closeevent_callback(this, cbval1);
        } else {
            KPageWidget::closeEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void contextMenuEvent(QContextMenuEvent* event) override {
        if (kpagewidget_contextmenuevent_isbase) {
            kpagewidget_contextmenuevent_isbase = false;
            KPageWidget::contextMenuEvent(event);
        } else if (kpagewidget_contextmenuevent_callback != nullptr) {
            QContextMenuEvent* cbval1 = event;

            kpagewidget_contextmenuevent_callback(this, cbval1);
        } else {
            KPageWidget::contextMenuEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void tabletEvent(QTabletEvent* event) override {
        if (kpagewidget_tabletevent_isbase) {
            kpagewidget_tabletevent_isbase = false;
            KPageWidget::tabletEvent(event);
        } else if (kpagewidget_tabletevent_callback != nullptr) {
            QTabletEvent* cbval1 = event;

            kpagewidget_tabletevent_callback(this, cbval1);
        } else {
            KPageWidget::tabletEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void actionEvent(QActionEvent* event) override {
        if (kpagewidget_actionevent_isbase) {
            kpagewidget_actionevent_isbase = false;
            KPageWidget::actionEvent(event);
        } else if (kpagewidget_actionevent_callback != nullptr) {
            QActionEvent* cbval1 = event;

            kpagewidget_actionevent_callback(this, cbval1);
        } else {
            KPageWidget::actionEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragEnterEvent(QDragEnterEvent* event) override {
        if (kpagewidget_dragenterevent_isbase) {
            kpagewidget_dragenterevent_isbase = false;
            KPageWidget::dragEnterEvent(event);
        } else if (kpagewidget_dragenterevent_callback != nullptr) {
            QDragEnterEvent* cbval1 = event;

            kpagewidget_dragenterevent_callback(this, cbval1);
        } else {
            KPageWidget::dragEnterEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragMoveEvent(QDragMoveEvent* event) override {
        if (kpagewidget_dragmoveevent_isbase) {
            kpagewidget_dragmoveevent_isbase = false;
            KPageWidget::dragMoveEvent(event);
        } else if (kpagewidget_dragmoveevent_callback != nullptr) {
            QDragMoveEvent* cbval1 = event;

            kpagewidget_dragmoveevent_callback(this, cbval1);
        } else {
            KPageWidget::dragMoveEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragLeaveEvent(QDragLeaveEvent* event) override {
        if (kpagewidget_dragleaveevent_isbase) {
            kpagewidget_dragleaveevent_isbase = false;
            KPageWidget::dragLeaveEvent(event);
        } else if (kpagewidget_dragleaveevent_callback != nullptr) {
            QDragLeaveEvent* cbval1 = event;

            kpagewidget_dragleaveevent_callback(this, cbval1);
        } else {
            KPageWidget::dragLeaveEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void dropEvent(QDropEvent* event) override {
        if (kpagewidget_dropevent_isbase) {
            kpagewidget_dropevent_isbase = false;
            KPageWidget::dropEvent(event);
        } else if (kpagewidget_dropevent_callback != nullptr) {
            QDropEvent* cbval1 = event;

            kpagewidget_dropevent_callback(this, cbval1);
        } else {
            KPageWidget::dropEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void showEvent(QShowEvent* event) override {
        if (kpagewidget_showevent_isbase) {
            kpagewidget_showevent_isbase = false;
            KPageWidget::showEvent(event);
        } else if (kpagewidget_showevent_callback != nullptr) {
            QShowEvent* cbval1 = event;

            kpagewidget_showevent_callback(this, cbval1);
        } else {
            KPageWidget::showEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void hideEvent(QHideEvent* event) override {
        if (kpagewidget_hideevent_isbase) {
            kpagewidget_hideevent_isbase = false;
            KPageWidget::hideEvent(event);
        } else if (kpagewidget_hideevent_callback != nullptr) {
            QHideEvent* cbval1 = event;

            kpagewidget_hideevent_callback(this, cbval1);
        } else {
            KPageWidget::hideEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool nativeEvent(const QByteArray& eventType, void* message, qintptr* result) override {
        if (kpagewidget_nativeevent_isbase) {
            kpagewidget_nativeevent_isbase = false;
            return KPageWidget::nativeEvent(eventType, message, result);
        } else if (kpagewidget_nativeevent_callback != nullptr) {
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

            bool callback_ret = kpagewidget_nativeevent_callback(this, cbval1, cbval2, cbval3);
            return callback_ret;
        } else {
            return KPageWidget::nativeEvent(eventType, message, result);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void changeEvent(QEvent* param1) override {
        if (kpagewidget_changeevent_isbase) {
            kpagewidget_changeevent_isbase = false;
            KPageWidget::changeEvent(param1);
        } else if (kpagewidget_changeevent_callback != nullptr) {
            QEvent* cbval1 = param1;

            kpagewidget_changeevent_callback(this, cbval1);
        } else {
            KPageWidget::changeEvent(param1);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual int metric(QPaintDevice::PaintDeviceMetric param1) const override {
        if (kpagewidget_metric_isbase) {
            kpagewidget_metric_isbase = false;
            return KPageWidget::metric(param1);
        } else if (kpagewidget_metric_callback != nullptr) {
            int cbval1 = static_cast<int>(param1);

            int callback_ret = kpagewidget_metric_callback(this, cbval1);
            return static_cast<int>(callback_ret);
        } else {
            return KPageWidget::metric(param1);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void initPainter(QPainter* painter) const override {
        if (kpagewidget_initpainter_isbase) {
            kpagewidget_initpainter_isbase = false;
            KPageWidget::initPainter(painter);
        } else if (kpagewidget_initpainter_callback != nullptr) {
            QPainter* cbval1 = painter;

            kpagewidget_initpainter_callback(this, cbval1);
        } else {
            KPageWidget::initPainter(painter);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QPaintDevice* redirected(QPoint* offset) const override {
        if (kpagewidget_redirected_isbase) {
            kpagewidget_redirected_isbase = false;
            return KPageWidget::redirected(offset);
        } else if (kpagewidget_redirected_callback != nullptr) {
            QPoint* cbval1 = offset;

            QPaintDevice* callback_ret = kpagewidget_redirected_callback(this, cbval1);
            return callback_ret;
        } else {
            return KPageWidget::redirected(offset);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QPainter* sharedPainter() const override {
        if (kpagewidget_sharedpainter_isbase) {
            kpagewidget_sharedpainter_isbase = false;
            return KPageWidget::sharedPainter();
        } else if (kpagewidget_sharedpainter_callback != nullptr) {
            QPainter* callback_ret = kpagewidget_sharedpainter_callback();
            return callback_ret;
        } else {
            return KPageWidget::sharedPainter();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void inputMethodEvent(QInputMethodEvent* param1) override {
        if (kpagewidget_inputmethodevent_isbase) {
            kpagewidget_inputmethodevent_isbase = false;
            KPageWidget::inputMethodEvent(param1);
        } else if (kpagewidget_inputmethodevent_callback != nullptr) {
            QInputMethodEvent* cbval1 = param1;

            kpagewidget_inputmethodevent_callback(this, cbval1);
        } else {
            KPageWidget::inputMethodEvent(param1);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QVariant inputMethodQuery(Qt::InputMethodQuery param1) const override {
        if (kpagewidget_inputmethodquery_isbase) {
            kpagewidget_inputmethodquery_isbase = false;
            return KPageWidget::inputMethodQuery(param1);
        } else if (kpagewidget_inputmethodquery_callback != nullptr) {
            int cbval1 = static_cast<int>(param1);

            QVariant* callback_ret = kpagewidget_inputmethodquery_callback(this, cbval1);
            return *callback_ret;
        } else {
            return KPageWidget::inputMethodQuery(param1);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool focusNextPrevChild(bool next) override {
        if (kpagewidget_focusnextprevchild_isbase) {
            kpagewidget_focusnextprevchild_isbase = false;
            return KPageWidget::focusNextPrevChild(next);
        } else if (kpagewidget_focusnextprevchild_callback != nullptr) {
            bool cbval1 = next;

            bool callback_ret = kpagewidget_focusnextprevchild_callback(this, cbval1);
            return callback_ret;
        } else {
            return KPageWidget::focusNextPrevChild(next);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* watched, QEvent* event) override {
        if (kpagewidget_eventfilter_isbase) {
            kpagewidget_eventfilter_isbase = false;
            return KPageWidget::eventFilter(watched, event);
        } else if (kpagewidget_eventfilter_callback != nullptr) {
            QObject* cbval1 = watched;
            QEvent* cbval2 = event;

            bool callback_ret = kpagewidget_eventfilter_callback(this, cbval1, cbval2);
            return callback_ret;
        } else {
            return KPageWidget::eventFilter(watched, event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (kpagewidget_timerevent_isbase) {
            kpagewidget_timerevent_isbase = false;
            KPageWidget::timerEvent(event);
        } else if (kpagewidget_timerevent_callback != nullptr) {
            QTimerEvent* cbval1 = event;

            kpagewidget_timerevent_callback(this, cbval1);
        } else {
            KPageWidget::timerEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (kpagewidget_childevent_isbase) {
            kpagewidget_childevent_isbase = false;
            KPageWidget::childEvent(event);
        } else if (kpagewidget_childevent_callback != nullptr) {
            QChildEvent* cbval1 = event;

            kpagewidget_childevent_callback(this, cbval1);
        } else {
            KPageWidget::childEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (kpagewidget_customevent_isbase) {
            kpagewidget_customevent_isbase = false;
            KPageWidget::customEvent(event);
        } else if (kpagewidget_customevent_callback != nullptr) {
            QEvent* cbval1 = event;

            kpagewidget_customevent_callback(this, cbval1);
        } else {
            KPageWidget::customEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (kpagewidget_connectnotify_isbase) {
            kpagewidget_connectnotify_isbase = false;
            KPageWidget::connectNotify(signal);
        } else if (kpagewidget_connectnotify_callback != nullptr) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            kpagewidget_connectnotify_callback(this, cbval1);
        } else {
            KPageWidget::connectNotify(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (kpagewidget_disconnectnotify_isbase) {
            kpagewidget_disconnectnotify_isbase = false;
            KPageWidget::disconnectNotify(signal);
        } else if (kpagewidget_disconnectnotify_callback != nullptr) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            kpagewidget_disconnectnotify_callback(this, cbval1);
        } else {
            KPageWidget::disconnectNotify(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    void updateMicroFocus() {
        if (kpagewidget_updatemicrofocus_isbase) {
            kpagewidget_updatemicrofocus_isbase = false;
            KPageWidget::updateMicroFocus();
        } else if (kpagewidget_updatemicrofocus_callback != nullptr) {
            kpagewidget_updatemicrofocus_callback();
        } else {
            KPageWidget::updateMicroFocus();
        }
    }

    // Virtual method for C ABI access and custom callback
    void create() {
        if (kpagewidget_create_isbase) {
            kpagewidget_create_isbase = false;
            KPageWidget::create();
        } else if (kpagewidget_create_callback != nullptr) {
            kpagewidget_create_callback();
        } else {
            KPageWidget::create();
        }
    }

    // Virtual method for C ABI access and custom callback
    void destroy() {
        if (kpagewidget_destroy_isbase) {
            kpagewidget_destroy_isbase = false;
            KPageWidget::destroy();
        } else if (kpagewidget_destroy_callback != nullptr) {
            kpagewidget_destroy_callback();
        } else {
            KPageWidget::destroy();
        }
    }

    // Virtual method for C ABI access and custom callback
    bool focusNextChild() {
        if (kpagewidget_focusnextchild_isbase) {
            kpagewidget_focusnextchild_isbase = false;
            return KPageWidget::focusNextChild();
        } else if (kpagewidget_focusnextchild_callback != nullptr) {
            bool callback_ret = kpagewidget_focusnextchild_callback();
            return callback_ret;
        } else {
            return KPageWidget::focusNextChild();
        }
    }

    // Virtual method for C ABI access and custom callback
    bool focusPreviousChild() {
        if (kpagewidget_focuspreviouschild_isbase) {
            kpagewidget_focuspreviouschild_isbase = false;
            return KPageWidget::focusPreviousChild();
        } else if (kpagewidget_focuspreviouschild_callback != nullptr) {
            bool callback_ret = kpagewidget_focuspreviouschild_callback();
            return callback_ret;
        } else {
            return KPageWidget::focusPreviousChild();
        }
    }

    // Virtual method for C ABI access and custom callback
    QObject* sender() const {
        if (kpagewidget_sender_isbase) {
            kpagewidget_sender_isbase = false;
            return KPageWidget::sender();
        } else if (kpagewidget_sender_callback != nullptr) {
            QObject* callback_ret = kpagewidget_sender_callback();
            return callback_ret;
        } else {
            return KPageWidget::sender();
        }
    }

    // Virtual method for C ABI access and custom callback
    int senderSignalIndex() const {
        if (kpagewidget_sendersignalindex_isbase) {
            kpagewidget_sendersignalindex_isbase = false;
            return KPageWidget::senderSignalIndex();
        } else if (kpagewidget_sendersignalindex_callback != nullptr) {
            int callback_ret = kpagewidget_sendersignalindex_callback();
            return static_cast<int>(callback_ret);
        } else {
            return KPageWidget::senderSignalIndex();
        }
    }

    // Virtual method for C ABI access and custom callback
    int receivers(const char* signal) const {
        if (kpagewidget_receivers_isbase) {
            kpagewidget_receivers_isbase = false;
            return KPageWidget::receivers(signal);
        } else if (kpagewidget_receivers_callback != nullptr) {
            const char* cbval1 = (const char*)signal;

            int callback_ret = kpagewidget_receivers_callback(this, cbval1);
            return static_cast<int>(callback_ret);
        } else {
            return KPageWidget::receivers(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    bool isSignalConnected(const QMetaMethod& signal) const {
        if (kpagewidget_issignalconnected_isbase) {
            kpagewidget_issignalconnected_isbase = false;
            return KPageWidget::isSignalConnected(signal);
        } else if (kpagewidget_issignalconnected_callback != nullptr) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            bool callback_ret = kpagewidget_issignalconnected_callback(this, cbval1);
            return callback_ret;
        } else {
            return KPageWidget::isSignalConnected(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    double getDecodedMetricF(QPaintDevice::PaintDeviceMetric metricA, QPaintDevice::PaintDeviceMetric metricB) const {
        if (kpagewidget_getdecodedmetricf_isbase) {
            kpagewidget_getdecodedmetricf_isbase = false;
            return KPageWidget::getDecodedMetricF(metricA, metricB);
        } else if (kpagewidget_getdecodedmetricf_callback != nullptr) {
            int cbval1 = static_cast<int>(metricA);
            int cbval2 = static_cast<int>(metricB);

            double callback_ret = kpagewidget_getdecodedmetricf_callback(this, cbval1, cbval2);
            return static_cast<double>(callback_ret);
        } else {
            return KPageWidget::getDecodedMetricF(metricA, metricB);
        }
    }

    // Friend functions
    friend QAbstractItemView* KPageWidget_CreateView(KPageWidget* self);
    friend QAbstractItemView* KPageWidget_QBaseCreateView(KPageWidget* self);
    friend bool KPageWidget_ShowPageHeader(const KPageWidget* self);
    friend bool KPageWidget_QBaseShowPageHeader(const KPageWidget* self);
    friend int KPageWidget_ViewPosition(const KPageWidget* self);
    friend int KPageWidget_QBaseViewPosition(const KPageWidget* self);
    friend bool KPageWidget_Event(KPageWidget* self, QEvent* event);
    friend bool KPageWidget_QBaseEvent(KPageWidget* self, QEvent* event);
    friend void KPageWidget_MousePressEvent(KPageWidget* self, QMouseEvent* event);
    friend void KPageWidget_QBaseMousePressEvent(KPageWidget* self, QMouseEvent* event);
    friend void KPageWidget_MouseReleaseEvent(KPageWidget* self, QMouseEvent* event);
    friend void KPageWidget_QBaseMouseReleaseEvent(KPageWidget* self, QMouseEvent* event);
    friend void KPageWidget_MouseDoubleClickEvent(KPageWidget* self, QMouseEvent* event);
    friend void KPageWidget_QBaseMouseDoubleClickEvent(KPageWidget* self, QMouseEvent* event);
    friend void KPageWidget_MouseMoveEvent(KPageWidget* self, QMouseEvent* event);
    friend void KPageWidget_QBaseMouseMoveEvent(KPageWidget* self, QMouseEvent* event);
    friend void KPageWidget_WheelEvent(KPageWidget* self, QWheelEvent* event);
    friend void KPageWidget_QBaseWheelEvent(KPageWidget* self, QWheelEvent* event);
    friend void KPageWidget_KeyPressEvent(KPageWidget* self, QKeyEvent* event);
    friend void KPageWidget_QBaseKeyPressEvent(KPageWidget* self, QKeyEvent* event);
    friend void KPageWidget_KeyReleaseEvent(KPageWidget* self, QKeyEvent* event);
    friend void KPageWidget_QBaseKeyReleaseEvent(KPageWidget* self, QKeyEvent* event);
    friend void KPageWidget_FocusInEvent(KPageWidget* self, QFocusEvent* event);
    friend void KPageWidget_QBaseFocusInEvent(KPageWidget* self, QFocusEvent* event);
    friend void KPageWidget_FocusOutEvent(KPageWidget* self, QFocusEvent* event);
    friend void KPageWidget_QBaseFocusOutEvent(KPageWidget* self, QFocusEvent* event);
    friend void KPageWidget_EnterEvent(KPageWidget* self, QEnterEvent* event);
    friend void KPageWidget_QBaseEnterEvent(KPageWidget* self, QEnterEvent* event);
    friend void KPageWidget_LeaveEvent(KPageWidget* self, QEvent* event);
    friend void KPageWidget_QBaseLeaveEvent(KPageWidget* self, QEvent* event);
    friend void KPageWidget_PaintEvent(KPageWidget* self, QPaintEvent* event);
    friend void KPageWidget_QBasePaintEvent(KPageWidget* self, QPaintEvent* event);
    friend void KPageWidget_MoveEvent(KPageWidget* self, QMoveEvent* event);
    friend void KPageWidget_QBaseMoveEvent(KPageWidget* self, QMoveEvent* event);
    friend void KPageWidget_ResizeEvent(KPageWidget* self, QResizeEvent* event);
    friend void KPageWidget_QBaseResizeEvent(KPageWidget* self, QResizeEvent* event);
    friend void KPageWidget_CloseEvent(KPageWidget* self, QCloseEvent* event);
    friend void KPageWidget_QBaseCloseEvent(KPageWidget* self, QCloseEvent* event);
    friend void KPageWidget_ContextMenuEvent(KPageWidget* self, QContextMenuEvent* event);
    friend void KPageWidget_QBaseContextMenuEvent(KPageWidget* self, QContextMenuEvent* event);
    friend void KPageWidget_TabletEvent(KPageWidget* self, QTabletEvent* event);
    friend void KPageWidget_QBaseTabletEvent(KPageWidget* self, QTabletEvent* event);
    friend void KPageWidget_ActionEvent(KPageWidget* self, QActionEvent* event);
    friend void KPageWidget_QBaseActionEvent(KPageWidget* self, QActionEvent* event);
    friend void KPageWidget_DragEnterEvent(KPageWidget* self, QDragEnterEvent* event);
    friend void KPageWidget_QBaseDragEnterEvent(KPageWidget* self, QDragEnterEvent* event);
    friend void KPageWidget_DragMoveEvent(KPageWidget* self, QDragMoveEvent* event);
    friend void KPageWidget_QBaseDragMoveEvent(KPageWidget* self, QDragMoveEvent* event);
    friend void KPageWidget_DragLeaveEvent(KPageWidget* self, QDragLeaveEvent* event);
    friend void KPageWidget_QBaseDragLeaveEvent(KPageWidget* self, QDragLeaveEvent* event);
    friend void KPageWidget_DropEvent(KPageWidget* self, QDropEvent* event);
    friend void KPageWidget_QBaseDropEvent(KPageWidget* self, QDropEvent* event);
    friend void KPageWidget_ShowEvent(KPageWidget* self, QShowEvent* event);
    friend void KPageWidget_QBaseShowEvent(KPageWidget* self, QShowEvent* event);
    friend void KPageWidget_HideEvent(KPageWidget* self, QHideEvent* event);
    friend void KPageWidget_QBaseHideEvent(KPageWidget* self, QHideEvent* event);
    friend bool KPageWidget_NativeEvent(KPageWidget* self, const libqt_string eventType, void* message, intptr_t* result);
    friend bool KPageWidget_QBaseNativeEvent(KPageWidget* self, const libqt_string eventType, void* message, intptr_t* result);
    friend void KPageWidget_ChangeEvent(KPageWidget* self, QEvent* param1);
    friend void KPageWidget_QBaseChangeEvent(KPageWidget* self, QEvent* param1);
    friend int KPageWidget_Metric(const KPageWidget* self, int param1);
    friend int KPageWidget_QBaseMetric(const KPageWidget* self, int param1);
    friend void KPageWidget_InitPainter(const KPageWidget* self, QPainter* painter);
    friend void KPageWidget_QBaseInitPainter(const KPageWidget* self, QPainter* painter);
    friend QPaintDevice* KPageWidget_Redirected(const KPageWidget* self, QPoint* offset);
    friend QPaintDevice* KPageWidget_QBaseRedirected(const KPageWidget* self, QPoint* offset);
    friend QPainter* KPageWidget_SharedPainter(const KPageWidget* self);
    friend QPainter* KPageWidget_QBaseSharedPainter(const KPageWidget* self);
    friend void KPageWidget_InputMethodEvent(KPageWidget* self, QInputMethodEvent* param1);
    friend void KPageWidget_QBaseInputMethodEvent(KPageWidget* self, QInputMethodEvent* param1);
    friend bool KPageWidget_FocusNextPrevChild(KPageWidget* self, bool next);
    friend bool KPageWidget_QBaseFocusNextPrevChild(KPageWidget* self, bool next);
    friend void KPageWidget_TimerEvent(KPageWidget* self, QTimerEvent* event);
    friend void KPageWidget_QBaseTimerEvent(KPageWidget* self, QTimerEvent* event);
    friend void KPageWidget_ChildEvent(KPageWidget* self, QChildEvent* event);
    friend void KPageWidget_QBaseChildEvent(KPageWidget* self, QChildEvent* event);
    friend void KPageWidget_CustomEvent(KPageWidget* self, QEvent* event);
    friend void KPageWidget_QBaseCustomEvent(KPageWidget* self, QEvent* event);
    friend void KPageWidget_ConnectNotify(KPageWidget* self, const QMetaMethod* signal);
    friend void KPageWidget_QBaseConnectNotify(KPageWidget* self, const QMetaMethod* signal);
    friend void KPageWidget_DisconnectNotify(KPageWidget* self, const QMetaMethod* signal);
    friend void KPageWidget_QBaseDisconnectNotify(KPageWidget* self, const QMetaMethod* signal);
    friend void KPageWidget_UpdateMicroFocus(KPageWidget* self);
    friend void KPageWidget_QBaseUpdateMicroFocus(KPageWidget* self);
    friend void KPageWidget_Create(KPageWidget* self);
    friend void KPageWidget_QBaseCreate(KPageWidget* self);
    friend void KPageWidget_Destroy(KPageWidget* self);
    friend void KPageWidget_QBaseDestroy(KPageWidget* self);
    friend bool KPageWidget_FocusNextChild(KPageWidget* self);
    friend bool KPageWidget_QBaseFocusNextChild(KPageWidget* self);
    friend bool KPageWidget_FocusPreviousChild(KPageWidget* self);
    friend bool KPageWidget_QBaseFocusPreviousChild(KPageWidget* self);
    friend QObject* KPageWidget_Sender(const KPageWidget* self);
    friend QObject* KPageWidget_QBaseSender(const KPageWidget* self);
    friend int KPageWidget_SenderSignalIndex(const KPageWidget* self);
    friend int KPageWidget_QBaseSenderSignalIndex(const KPageWidget* self);
    friend int KPageWidget_Receivers(const KPageWidget* self, const char* signal);
    friend int KPageWidget_QBaseReceivers(const KPageWidget* self, const char* signal);
    friend bool KPageWidget_IsSignalConnected(const KPageWidget* self, const QMetaMethod* signal);
    friend bool KPageWidget_QBaseIsSignalConnected(const KPageWidget* self, const QMetaMethod* signal);
    friend double KPageWidget_GetDecodedMetricF(const KPageWidget* self, int metricA, int metricB);
    friend double KPageWidget_QBaseGetDecodedMetricF(const KPageWidget* self, int metricA, int metricB);
};

#endif
